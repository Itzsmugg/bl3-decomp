// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142741140 FUN_142741140 body=48 status=ok
// SIG undefined FUN_142741140(void)

undefined8 * FUN_142741140(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd;
  *param_1 = &PTR_FUN_14519b468;
  param_1[0x8b] = 0;
  return param_1;
}



// FUNCTION 142741170 FUN_142741170 body=193 status=ok
// SIG undefined FUN_142741170(void)

longlong * FUN_142741170(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *local_res8;
  undefined1 local_res10 [8];
  
  *param_1 = param_2;
  param_1[1] = param_3;
  local_res8 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_2 + 0xa8) + 0x40))
            (*(longlong **)(param_2 + 0xa8),param_4,local_res10,&local_res8);
  iVar2 = (**(code **)(*local_res8 + 0x1e8))();
  uVar1 = *(uint *)(param_1 + 2);
  uVar4 = 0;
  uVar3 = uVar4;
  if (iVar2 == 1) {
    uVar3 = 2;
  }
  *(uint *)(param_1 + 2) = (uint)(iVar2 == 0) | uVar1 & 0xfffffffc | uVar3;
  if (((*(uint *)(param_1[1] + 0x18) >> 0x15 & 1) != 0) && ((*(byte *)(param_2 + 0x8c) & 4) == 0)) {
    uVar4 = 4;
  }
  uVar4 = (uint)(iVar2 == 0) | uVar1 & 0xfffffff8 | uVar3 | uVar4;
  *(uint *)(param_1 + 2) = uVar4;
  *(uint *)(param_1 + 2) = (~(*(int *)(param_2 + 0x8c) << 2) ^ uVar4) & 8 ^ uVar4;
  return param_1;
}



// FUNCTION 142741240 FUN_142741240 body=238 status=ok
// SIG undefined FUN_142741240(void)

longlong FUN_142741240(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  DWORD DVar4;
  longlong lVar5;
  
  FUN_142740e90(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  cVar2 = FUN_141636a40();
  lVar1 = DAT_146b094c0;
  if (cVar2 != '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      lVar5 = 4;
      if (DVar4 == DAT_1468c21c0) goto LAB_1427412f9;
    }
    else {
LAB_1427412f9:
      lVar5 = 0;
    }
    if (0 < *(int *)(lVar5 + lVar1)) {
      uVar3 = 1;
      goto LAB_142741307;
    }
  }
  uVar3 = 0;
LAB_142741307:
  *(undefined1 *)(param_1 + 0xe4) = uVar3;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return param_1;
}



// FUNCTION 142741330 FUN_142741330 body=513 status=ok
// SIG undefined FUN_142741330(void)

undefined4 * FUN_142741330(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  param_1[0xb] = 0x3f800000;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0x4d) = 0;
  param_1[0x4f] = 0x3f800000;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x160);
  uVar3 = DAT_1464aa6ec;
  uVar2 = DAT_1464aa6e8;
  uVar1 = DAT_1464aa6e4;
  *param_1 = DAT_1464aa6e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(ulonglong *)(param_1 + 4) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  param_1[6] = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x52) = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  uVar4 = FUN_1404a0e20();
  *(undefined8 *)(param_1 + 0x54) = uVar4;
  param_1[7] = 0;
  uVar4 = CONCAT44(0x3f800000,DAT_1468b5d98);
  *(ulonglong *)(param_1 + 8) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x13) = 0;
  param_1[0x15] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x23) = 0;
  param_1[0x25] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x33) = 0;
  param_1[0x35] = 0;
  *(undefined8 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  *(undefined8 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x43) = 0;
  param_1[0x45] = 0;
  *(undefined8 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x3f800000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 142741540 FUN_142741540 body=2404 status=ok
// SIG undefined FUN_142741540(void)

undefined8 * FUN_142741540(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  param_1[0xbc] = 0;
  param_1[0xbe] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)((longlong)param_1 + 0x225) = 0;
  *(undefined1 *)((longlong)param_1 + 0x227) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x5c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined2 *)((longlong)param_1 + 0x33d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33f) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x71,0,0x88);
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + 0x454),0,0xfc);
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0xb3,0,0x68);
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x45cb2000;
  param_1[6] = 0x3f8000003f800000;
  param_1[7] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3db851ec;
  param_1[8] = 0x3f8000003f800000;
  param_1[9] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f000000;
  param_1[10] = 0x3f8000003f800000;
  param_1[0xb] = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3f19999a;
  param_1[0xc] = 0x3f8000003f800000;
  param_1[0xd] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x41) = 0x40800000;
  param_1[0x1c] = 0x3f8000003f800000;
  param_1[0x1d] = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x3f800000;
  param_1[0x1e] = 0x3f8000003f800000;
  param_1[0x1f] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
  param_1[0x20] = 0x3f8000003f800000;
  param_1[0x21] = 0x3f8000003f800000;
  param_1[0x38] = 0x3f000000;
  param_1[0x22] = 0x3f8000003f800000;
  param_1[0x23] = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f6147ae;
  param_1[0x10] = 0x3f8000003f800000;
  param_1[0x11] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x32) = 0x3f0ccccd;
  param_1[0x12] = 0x3f8000003f800000;
  param_1[0x13] = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x3e851eb8;
  param_1[0x14] = 0x3f8000003f800000;
  param_1[0x15] = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3d23d70a;
  param_1[0x16] = 0x3f8000003f800000;
  param_1[0x17] = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x34] = 0x3f8000003f800000;
  param_1[0x35] = 0x3f8000003f800000;
  param_1[0x26] = 0x3f8000003f800000;
  param_1[0x27] = 0x3f8000003f800000;
  param_1[0x28] = 0x3f8000003f800000;
  param_1[0x29] = 0x3f8000003f800000;
  param_1[0x2a] = 0x3f8000003f800000;
  param_1[0x2b] = 0x3f8000003f800000;
  param_1[0x2c] = 0x3f8000003f800000;
  param_1[0x2d] = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0x3f80000000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x36] = 0x3f8000003f800000;
  param_1[0x37] = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0x3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0x3eb168733eb16873;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x3f8000003eb16873;
  *(undefined4 *)(param_1 + 0x45) = 0x3f2ccccd;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0x3df0d8453df0d845;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0x3f8000003df0d845;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0x3e0d4fdf3e0d4fdf;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0x3f8000003e0d4fdf;
  *(undefined4 *)(param_1 + 0x46) = 0x40800000;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0x3d872b023d872b02;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0x3f8000003d872b02;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x47) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0x3d872b023d872b02;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0x3f8000003d872b02;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0x3d79db233d79db23;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0x3f8000003d79db23;
  *(undefined4 *)(param_1 + 0x48) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x49) = 0x42800000;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x5a) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x466a6000;
  *(undefined4 *)(param_1 + 0x5b) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3e083127;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xaa) = 0x3f800000;
  param_1[0xab] = 0x45a60000;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x3f23d70a;
  *(undefined4 *)((longlong)param_1 + 0x564) = 0x3ec49ba6;
  param_1[0xad] = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x42700000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x6d) = 0x41800000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0xbf800000bf800000;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0x3f0000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x3f8000003f000000;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x42a00000;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x42c4999a;
  *(undefined4 *)(param_1 + 0x69) = 0x3cf5c28f;
  *(undefined4 *)(param_1 + 0x6a) = 0x3cf5c28f;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xae) = 0x41000000;
  *(undefined4 *)((longlong)param_1 + 0x574) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xaf) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xc1000000;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x3f800000;
  param_1[0x6e] = 0x3f8000003f800000;
  param_1[0x6f] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 900) = 0x41000000;
  *(undefined4 *)(param_1 + 0x82) = 0x3ecccccd;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x85) = 0x43480000;
  *(undefined4 *)(param_1 + 0x87) = 0x42a00000;
  *(undefined4 *)(param_1 + 0x86) = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x88) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x42480000;
  *(undefined4 *)(param_1 + 0x89) = 0x3f19999a;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0x8a) = 0x3c23d70a;
  *(uint *)((longlong)param_1 + 0x454) = *(uint *)((longlong)param_1 + 0x454) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x8b) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x8c) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x41000000;
  *(undefined4 *)(param_1 + 0x8d) = 0x457a0000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x8e) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x474) = 3;
  *(undefined4 *)(param_1 + 0x8f) = 3;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x40800000;
  *(uint *)((longlong)param_1 + 0x42c) = *(uint *)((longlong)param_1 + 0x42c) & 0xfffffffe;
  param_1[0x90] = 0x3f8000003f800000;
  param_1[0x91] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x92) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x65) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3f99999a;
  *(undefined4 *)(param_1 + 0x66) = 7;
  *(undefined4 *)((longlong)param_1 + 0x4dc) = 0x41c49ba6;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0x43960000;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0x41700000;
  *(undefined4 *)(param_1 + 0xa0) = 0x41700000;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0x3f800000;
  param_1[0xa4] = 0x3da3d70a;
  *(undefined4 *)(param_1 + 0xa6) = 0x43480000;
  *(undefined4 *)(param_1 + 0xa5) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xa7) = 0x3f800000;
  param_1[0x72] = 0x3f4ccccd3f800000;
  param_1[0x73] = 0x3f19999a3ecccccd;
  param_1[0x74] = 0x3f8000003f800000;
  param_1[0x75] = 0x3f07ae143f19999a;
  param_1[0x76] = 0x3f4ccccd3f4ccccd;
  param_1[0x77] = 0x3eeb851f3f800000;
  param_1[0x78] = 0x3f8000003f000000;
  param_1[0x79] = 0x3ec7ae143ecccccd;
  param_1[0x7a] = 0x3f4ccccd3f000000;
  param_1[0x7b] = 0x3e9eb8523f800000;
  param_1[0x7c] = 0x3f8000003f666666;
  param_1[0x7d] = 0x3e8a3d713f4ccccd;
  param_1[0x7e] = 0x3f4ccccd3f800000;
  param_1[0x7f] = 0x3e6147ae3ecccccd;
  param_1[0x80] = 0x3f3333333f666666;
  param_1[0x81] = 0x3e19999a3f333333;
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa8) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa9) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0x3f800000;
  param_1[0xb9] = 0x42c80000;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined4 *)((longlong)param_1 + 0x584) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xb1) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0x3f19999a;
  *(uint *)(param_1 + 0x9b) = *(uint *)(param_1 + 0x9b) & 0xfffffffe;
  *(uint *)(param_1 + 0xb3) = *(uint *)(param_1 + 0xb3) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x59c) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb5) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0x477de800;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb7) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0xb8) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0x3f666666;
  return param_1;
}



// FUNCTION 142741eb0 FUN_142741eb0 body=694 status=ok
// SIG undefined FUN_142741eb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142741eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint uStack_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uStack_74 = uStack_74 & 0xffffffc2 | 2;
  local_88 = 0x421f5c2943985e35;
  uStack_80 = 0;
  uStack_7c = 0x3f800000;
  local_68 = 0x43985e35;
  uStack_64 = 0x421f5c29;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = CONCAT44(uStack_74,0x40490fdb);
  FUN_1426f5a00(0x40490fdb,&local_68);
  *param_1 = &PTR__scalar_deleting_destructor__14519b438;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42b40000;
  uVar1 = GetTransientPackage();
  FUN_1417846f0(uVar1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_88 = 0;
  uVar2 = FUN_1429fde70();
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  lVar3 = FUN_1417985e0(uVar2,uVar1,0,0);
  param_1[0xe] = lVar3;
  *(undefined4 *)(lVar3 + 0x3c4) = 0x3f490fdb;
  *(undefined1 *)(param_1[0xe] + 0x3c0) = 0;
  *(undefined1 *)(param_1[0xe] + 0x318) = 0;
  *(undefined1 *)(param_1[0xe] + 0x319) = 0;
  *(undefined1 *)(param_1[0xe] + 0x3d8) = 2;
  (**(code **)(**(longlong **)(param_1[6] + 0x1b8) + 0xf8))(*(longlong **)(param_1[6] + 0x1b8),1);
  local_48 = _DAT_1468b5b70;
  uStack_40 = uRam00000001468b5b78;
  local_28 = _DAT_1468b5b90;
  uStack_24 = uRam00000001468b5b94;
  uStack_20 = uRam00000001468b5b98;
  uStack_1c = uRam00000001468b5b9c;
  local_38 = _DAT_1468b5b80;
  uStack_34 = uRam00000001468b5b84;
  uStack_30 = uRam00000001468b5b88;
  uStack_2c = uRam00000001468b5b8c;
  FUN_1426f93c0(param_1,param_1[0xe],&local_48,0);
  lVar3 = FUN_140cc25e0(param_1[6]);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar3 + 0xa8);
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) & 0xffffffbf;
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) & 0xfffbffff;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) & 0xffffefff;
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) & 0x7fffffff;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) & 0xffffff7f;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) | 1;
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) & 0xfffeffff;
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) | 0x20000000;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) | 0x800;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) | 8;
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) & 0xffdfffff;
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) & 0xfff7ffff;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) & 0xfffffffd;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) & 0xfff7ffff;
  *(uint *)(param_1[0xe] + 0x374) = *(uint *)(param_1[0xe] + 0x374) & 0xffefffff;
  *(uint *)(param_1[0xe] + 0x370) = *(uint *)(param_1[0xe] + 0x370) & 0xf7ffffff;
  return param_1;
}



// FUNCTION 142742170 FUN_142742170 body=4883 status=ok
// SIG undefined FUN_142742170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142742170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined4 uVar11;
  DWORD DVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  int *piVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  undefined8 local_388;
  float fStack_380;
  float fStack_37c;
  float local_378;
  undefined8 local_368;
  float local_360;
  float local_35c;
  undefined8 local_358 [40];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_120;
  undefined4 local_118;
  char local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  *param_1 = &PTR_FUN_144e47de8;
  param_1[2] = param_2[0x28];
  param_1[3] = param_2[0x29];
  param_1[4] = 0;
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
  param_1[0xf] = 0;
  param_1[0x10] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x11) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3e] = 0;
  uVar1 = CONCAT44(uRam00000001468b5d84,uRam00000001468b5d80);
  param_1[0x3f] = CONCAT44(uRam00000001468b5d7c,_DAT_1468b5d78);
  param_1[0x40] = uVar1;
  uVar3 = uRam00000001468b5d84;
  uVar2 = uRam00000001468b5d80;
  uVar11 = uRam00000001468b5d7c;
  *(undefined4 *)(param_1 + 0x41) = _DAT_1468b5d78;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar11;
  *(undefined4 *)(param_1 + 0x42) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar3;
  uVar4 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x42c80000;
  param_1[0x43] = uVar1;
  param_1[0x44] = uVar4;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xbf800000;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2fc) = 0x100;
  *(undefined4 *)(param_1 + 0x60) = 0x42b40000;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x42b40000;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined2 *)(param_1 + 0x68) = 1;
  *(undefined1 *)((longlong)param_1 + 0x342) = 0;
  param_1[0x6a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x2b);
  param_1[0x6c] = param_2[0x2c];
  uVar1 = param_2[0x27];
  param_1[0x6d] = param_2[0x26];
  param_1[0x6e] = uVar1;
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x124);
  uVar2 = *(undefined4 *)(param_2 + 0x25);
  uVar3 = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x6f) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x37c) = uVar11;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)((longlong)param_1 + 900) = uVar3;
  *(undefined4 *)(param_1 + 0x71) = 10;
  FUN_142743a80(param_1 + 0x72);
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  *(undefined8 *)((longlong)param_1 + 0x92c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x934) = 0;
  *(undefined4 *)((longlong)param_1 + 0x93c) = *(undefined4 *)(param_2 + 0x34);
  FUN_142743a80(param_1 + 0x128,param_2);
  uVar1 = param_2[0xb];
  param_1[0x1d6] = param_2[10];
  param_1[0x1d7] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0x1d8] = param_2[0xc];
  param_1[0x1d9] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0x1da] = param_2[0xe];
  param_1[0x1db] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x1dc] = param_2[0x10];
  param_1[0x1dd] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x1de] = param_2[0x12];
  param_1[0x1df] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x1e0] = param_2[0x14];
  param_1[0x1e1] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x1e2] = param_2[0x16];
  param_1[0x1e3] = uVar1;
  uVar11 = *(undefined4 *)((longlong)param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 0x19);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xf24) = uVar11;
  *(undefined4 *)(param_1 + 0x1e5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xf2c) = uVar3;
  uVar1 = param_2[0x2e];
  param_1[0x1e6] = param_2[0x2d];
  param_1[0x1e7] = uVar1;
  uVar1 = param_2[0x30];
  param_1[0x1e8] = param_2[0x2f];
  param_1[0x1e9] = uVar1;
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x18c);
  uVar2 = *(undefined4 *)(param_2 + 0x32);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x1ea) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0xf54) = uVar11;
  *(undefined4 *)(param_1 + 0x1eb) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xf5c) = uVar3;
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)((longlong)param_1 + 0xf64) = *(undefined4 *)((longlong)param_2 + 0x19c);
  *(undefined1 *)(param_1 + 0x1ed) = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  *(undefined4 *)(param_1 + 0x1f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xf94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9c) = 0x3f800000;
  param_1[0x1f7] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xfb4) = 0x3f800000;
  param_1[0x1f8] = 0;
  param_1[0x1fb] = 0;
  param_1[0x1fc] = 0;
  *(undefined4 *)(param_1 + 0x1fd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfec) = 0;
  param_1[0x1ff] = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  FUN_141d14cb0(param_1 + 0x1f7,param_2 + 0x35);
  *(undefined1 *)(param_1 + 0x20b) = 0;
  if (*(char *)(param_2 + 0x49) != '\0') {
    param_1[0x201] = 0;
    param_1[0x202] = 0;
    param_1[0x205] = 0;
    param_1[0x206] = 0;
    *(undefined4 *)(param_1 + 0x207) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x103c) = 0;
    param_1[0x209] = 0;
    *(undefined4 *)(param_1 + 0x20a) = 0;
    FUN_141d14cb0(param_1 + 0x201,param_2 + 0x3f);
    *(undefined1 *)(param_1 + 0x20b) = 1;
  }
  param_1[0x21a] = 0;
  param_1[0x21c] = 0;
  param_1[0x22e] = 0;
  param_1[0x230] = 0;
  param_1[0x238] = 0;
  *(undefined4 *)(param_1 + 0x239) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x11d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11dc) = 0x3f800000;
  param_1[0x23c] = param_2[0x4c];
  *(undefined4 *)(param_1 + 0x23d) = *(undefined4 *)(param_2 + 0x4d);
  *(undefined4 *)((longlong)param_1 + 0x11ec) = *(undefined4 *)(param_2 + 0x4b);
  *(float *)(param_1 + 0x23e) = *(float *)(param_2 + 0x4b) * *(float *)(param_2 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x11f4) = *(undefined1 *)((longlong)param_2 + 0x26c);
  uVar1 = param_2[0x4a];
  param_1[0x240] = 0;
  *(undefined4 *)(param_1 + 0x241) = 0;
  *(undefined2 *)((longlong)param_1 + 0x120c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x120e) = 0;
  param_1[0x23f] = uVar1;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x245] = 0;
  FUN_142741540(param_1 + 0x248);
  param_1[799] = 0;
  param_1[800] = 0;
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  *(undefined1 *)(param_1 + 0x338) = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  param_1[0x33c] = 0;
  TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x33b,0x2800);
  param_1[0x33d] = 0;
  param_1[0x33e] = 0;
  *(undefined1 *)(param_1 + 0x33f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a04) = 0;
  if (*(int *)((longlong)param_1 + 0x1904) < 8) {
    TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
              (param_1 + 0x307,8);
  }
  if (*(int *)((longlong)param_1 + 0x1994) < 8) {
    FUN_14245d780(param_1 + 0x321,8);
  }
  FUN_14275bc80(param_1 + 0x248,0);
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  param_1[0x346] = 0;
  uVar11 = DAT_1464c9c14;
  if ((param_2[0x28] != 0) && (lVar20 = *(longlong *)(param_2[0x28] + 0x20), lVar20 != 0)) {
    uVar11 = *(undefined4 *)(lVar20 + 8);
  }
  *(undefined4 *)(param_1 + 0x347) = uVar11;
  param_1[0x348] = 0;
  param_1[0x349] = 0;
  param_1[0x34a] = 0;
  param_1[0x34f] = 0;
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  param_1[0x352] = 0;
  *(undefined1 *)(param_1 + 0x353) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x1a99) = *(undefined1 *)((longlong)param_2 + 0x2b1);
  *(undefined1 *)((longlong)param_1 + 0x1a9a) = *(undefined1 *)((longlong)param_2 + 0x2b2);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x128,param_1 + 0x72,0x570);
  lVar20 = 2;
  puVar8 = param_2;
  puVar9 = local_358;
  do {
    puVar19 = puVar9;
    puVar14 = puVar8;
    uVar1 = puVar14[1];
    uVar4 = puVar14[2];
    uVar5 = puVar14[3];
    *puVar19 = *puVar14;
    puVar19[1] = uVar1;
    uVar1 = puVar14[4];
    uVar6 = puVar14[5];
    puVar19[2] = uVar4;
    puVar19[3] = uVar5;
    uVar4 = puVar14[6];
    uVar5 = puVar14[7];
    puVar19[4] = uVar1;
    puVar19[5] = uVar6;
    uVar1 = puVar14[8];
    uVar6 = puVar14[9];
    puVar19[6] = uVar4;
    puVar19[7] = uVar5;
    uVar4 = puVar14[10];
    uVar5 = puVar14[0xb];
    puVar19[8] = uVar1;
    puVar19[9] = uVar6;
    uVar1 = puVar14[0xc];
    uVar6 = puVar14[0xd];
    puVar19[10] = uVar4;
    puVar19[0xb] = uVar5;
    uVar4 = puVar14[0xe];
    uVar5 = puVar14[0xf];
    puVar19[0xc] = uVar1;
    puVar19[0xd] = uVar6;
    puVar19[0xe] = uVar4;
    puVar19[0xf] = uVar5;
    lVar20 = lVar20 + -1;
    puVar8 = puVar14 + 0x10;
    puVar9 = puVar19 + 0x10;
  } while (lVar20 != 0);
  uVar1 = puVar14[0x11];
  uVar4 = puVar14[0x12];
  uVar5 = puVar14[0x13];
  puVar19[0x10] = puVar14[0x10];
  puVar19[0x11] = uVar1;
  uVar6 = puVar14[0x14];
  uVar7 = puVar14[0x15];
  puVar19[0x12] = uVar4;
  puVar19[0x13] = uVar5;
  uVar4 = puVar14[0x16];
  uVar5 = puVar14[0x17];
  uVar1 = param_2[0x28];
  puVar19[0x14] = uVar6;
  puVar19[0x15] = uVar7;
  uVar6 = param_2[0x2d];
  uVar7 = param_2[0x2e];
  puVar19[0x16] = uVar4;
  puVar19[0x17] = uVar5;
  local_210 = param_2[0x29];
  local_1e0 = param_2[0x2f];
  uStack_1d8 = param_2[0x30];
  local_208 = param_2[0x2a];
  local_200 = *(undefined4 *)(param_2 + 0x2b);
  local_1d0 = param_2[0x31];
  uStack_1c8 = param_2[0x32];
  local_1f8 = param_2[0x2c];
  local_1b8 = *(undefined4 *)(param_2 + 0x34);
  local_1c0 = *(undefined4 *)(param_2 + 0x33);
  local_1bc = *(undefined4 *)((longlong)param_2 + 0x19c);
  local_1b0 = 0;
  local_1a8 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0xffffffff;
  local_17c = 0;
  local_170 = 0;
  local_168 = 0;
  local_218 = uVar1;
  local_1f0 = uVar6;
  uStack_1e8 = uVar7;
  FUN_141d14cb0(&local_1b0,param_2 + 0x35);
  local_110 = 0;
  cVar10 = *(char *)(param_2 + 0x49);
  if (cVar10 != '\0') {
    local_160 = 0;
    local_158 = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0xffffffff;
    local_12c = 0;
    local_120 = 0;
    local_118 = 0;
    FUN_141d14cb0(&local_160,param_2 + 0x3f);
  }
  local_108 = param_2[0x4a];
  local_100 = *(undefined4 *)(param_2 + 0x4b);
  local_fc = *(undefined4 *)((longlong)param_2 + 0x25c);
  local_f0 = *(undefined4 *)(param_2 + 0x4d);
  local_ec = *(undefined1 *)((longlong)param_2 + 0x26c);
  local_eb = *(undefined1 *)((longlong)param_2 + 0x26d);
  local_e0 = param_2[0x4f];
  local_d8 = *(undefined4 *)(param_2 + 0x50);
  local_d4 = *(undefined4 *)((longlong)param_2 + 0x284);
  local_d0 = *(undefined4 *)(param_2 + 0x51);
  local_cc = *(undefined4 *)((longlong)param_2 + 0x28c);
  local_f8 = param_2[0x4c];
  local_a8 = *(undefined1 *)(param_2 + 0x56);
  local_e4 = *(undefined4 *)((longlong)param_2 + 0x274);
  local_e8 = *(undefined4 *)(param_2 + 0x4e);
  local_a7 = *(undefined1 *)((longlong)param_2 + 0x2b1);
  local_c8 = *(undefined4 *)(param_2 + 0x52);
  uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x294);
  uStack_c0 = *(undefined4 *)(param_2 + 0x53);
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0x29c);
  local_a6 = *(undefined1 *)((longlong)param_2 + 0x2b2);
  local_b8 = *(undefined4 *)(param_2 + 0x54);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x2a4);
  uStack_b0 = *(undefined4 *)(param_2 + 0x55);
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0x2ac);
  local_110 = cVar10 != '\0';
  FUN_1427462b0(param_1 + 0x12,local_358);
  if (local_110 != '\0') {
    local_110 = '\0';
    local_118 = 0;
    if (local_120 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_160);
  }
  local_168 = 0;
  if (local_170 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_1b0);
  fVar24 = *(float *)((longlong)param_2 + 0x25c);
  if (fVar24 <= 0.0) {
    GetViewFrustumBounds(param_1 + 0x20e,param_1 + 0xb2,0);
  }
  else {
    fVar26 = *(float *)(param_1 + 0xa3);
    fVar27 = *(float *)(param_1 + 0xa5);
    fStack_380 = *(float *)(param_1 + 0xa7);
    local_368 = CONCAT44(fVar27,fVar26);
    local_398 = 0;
    local_35c = (fVar26 * fVar24 + *(float *)((longlong)param_1 + 0x8dc)) * fVar26 +
                (fVar27 * fVar24 + *(float *)(param_1 + 0x11c)) * fVar27 +
                (fStack_380 * fVar24 + *(float *)((longlong)param_1 + 0x8e4)) * fStack_380;
    local_360 = fStack_380;
    GetViewFrustumBounds(param_1 + 0x20e,param_1 + 0xb2,&local_368,1);
  }
  fVar27 = *(float *)((longlong)param_1 + 0x5ac) - *(float *)(param_1 + 0xb5);
  fVar28 = *(float *)((longlong)param_1 + 0x59c) - *(float *)(param_1 + 0xb3);
  fVar26 = *(float *)((longlong)param_1 + 0x5bc) - *(float *)(param_1 + 0xb7);
  fVar24 = fVar28 * fVar28 + fVar27 * fVar27 + fVar26 * fVar26;
  if (9.9999994e-11 < fVar24) {
    auVar25 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
    local_378 = auVar25._0_4_;
    local_378 = local_378 + local_378 * (0.5 - fVar24 * 0.5 * local_378 * local_378);
    local_378 = local_378 + local_378 * (0.5 - fVar24 * 0.5 * local_378 * local_378);
    fStack_37c = local_378 * (*(float *)((longlong)param_1 + 0x5cc) - *(float *)(param_1 + 0xb9));
    fStack_380 = -(local_378 * fVar26);
    local_388 = CONCAT44(-(local_378 * fVar27),-(local_378 * fVar28));
    *(float *)(param_1 + 0x234) = -(local_378 * fVar28);
    *(float *)((longlong)param_1 + 0x11a4) = -(local_378 * fVar27);
    *(float *)(param_1 + 0x235) = fStack_380;
    *(float *)((longlong)param_1 + 0x11ac) = fStack_37c;
  }
  *(bool *)(param_1 + 0x232) = 9.9999994e-11 < fVar24;
  fVar24 = *(float *)(param_1 + 0x79);
  if (*(float *)((longlong)param_1 + 0x3bc) <= 1e-05) {
    fVar24 = (1.0 - fVar24) / *(float *)(param_1 + 0x77);
  }
  *(float *)(param_1 + 0x236) = fVar24;
  if ((param_1[2] == 0) || (*(longlong *)(param_1[2] + 0x20) == 0)) {
    bVar22 = false;
  }
  else {
    local_378 = (float)FMatrix::Determinant(param_1 + 0xa2);
    bVar22 = 0x7fffffff < (uint)local_378;
  }
  *(bool *)((longlong)param_1 + 0x11b4) = bVar22;
  uVar13 = (&DAT_1464c9c48)[*(int *)(param_1 + 0x347)];
  if ((((uVar13 < 0x1b) && ((0x700a74aU >> (uVar13 & 0x1f) & 1) != 0)) &&
      (*(int *)(param_1 + 0x347) < 2)) &&
     ((0x1d < uVar13 || ((0x28ffc0ebU >> (uVar13 & 0x1f) & 1) == 0)))) {
    bVar22 = true;
  }
  else {
    bVar22 = false;
  }
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar20 + 0x38) < DAT_146b0a168) &&
     (_Init_thread_header(&DAT_146b0a168), DAT_146b0a168 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar16 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR");
    lVar17 = 0;
    if (plVar16 != (longlong *)0x0) {
      lVar17 = (**(code **)(*plVar16 + 0x38))(plVar16);
    }
    DAT_146b0a160 = lVar17;
    _Init_thread_footer(&DAT_146b0a168);
  }
  lVar17 = DAT_146b0a160;
  lVar21 = 4;
  if (bVar22) {
    cVar10 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar10 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
      lVar15 = 4;
    }
    else {
      lVar15 = 0;
    }
    if (*(int *)(lVar17 + lVar15) != 0) goto LAB_142742e74;
    uVar23 = *(char *)((longlong)param_1 + 0x11b4) == '\0';
  }
  else {
LAB_142742e74:
    uVar23 = *(undefined1 *)((longlong)param_1 + 0x11b4);
  }
  *(undefined1 *)((longlong)param_1 + 0x11b4) = uVar23;
  fVar24 = *(float *)(param_1 + 0x1dd);
  fStack_380 = fVar24;
  if (fVar24 == 0.0) {
    fStack_380 = 1e-08;
  }
  if (1.0 < *(float *)((longlong)param_1 + 0xeec) || *(float *)((longlong)param_1 + 0xeec) == 1.0) {
    fStack_380 = 0.0;
    fVar26 = 1.0 / *(float *)(param_1 + 0x1db);
    fStack_37c = 1.0;
    local_388 = CONCAT44(1.0 - fVar26 * fVar24,fVar26);
  }
  else {
    local_388 = 0;
    fStack_380 = 1.0 / fStack_380;
    fStack_37c = *(float *)(param_1 + 0x1db) * fStack_380 - 1e-08;
  }
  param_1[0x238] = local_388;
  param_1[0x239] = CONCAT44(fStack_37c,fStack_380);
  fVar24 = *(float *)(param_1 + 0x1e5);
  fStack_380 = fVar24;
  if (fVar24 == 0.0) {
    fStack_380 = 1e-08;
  }
  if (1.0 < *(float *)((longlong)param_1 + 0xf2c) || *(float *)((longlong)param_1 + 0xf2c) == 1.0) {
    fStack_380 = 0.0;
    local_388._0_4_ = 1.0 / *(float *)(param_1 + 0x1e3);
    fStack_37c = 1.0;
    local_388._4_4_ = 1.0 - (float)local_388 * fVar24;
  }
  else {
    fStack_380 = 1.0 / fStack_380;
    local_388._0_4_ = 0.0;
    local_388._4_4_ = 0.0;
    fStack_37c = *(float *)(param_1 + 0x1e3) * fStack_380 - 1e-08;
  }
  *(float *)(param_1 + 0x23a) = (float)local_388;
  *(float *)((longlong)param_1 + 0x11d4) = local_388._4_4_;
  *(float *)(param_1 + 0x23b) = fStack_380;
  *(float *)((longlong)param_1 + 0x11dc) = fStack_37c;
  if ((*(int *)(lVar20 + 0x38) < DAT_146b0a178) &&
     (_Init_thread_header(&DAT_146b0a178), DAT_146b0a178 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar16 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.TranslucentSortPolicy");
    lVar17 = 0;
    if (plVar16 != (longlong *)0x0) {
      lVar17 = (**(code **)(*plVar16 + 0x38))(plVar16);
    }
    DAT_146b0a170 = lVar17;
    _Init_thread_footer(&DAT_146b0a178);
  }
  lVar17 = DAT_146b0a170;
  cVar10 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar10 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
    lVar15 = 4;
  }
  else {
    lVar15 = 0;
  }
  *(char *)((longlong)param_1 + 0x123c) = (char)*(undefined4 *)(lVar17 + lVar15);
  plVar16 = (longlong *)FUN_1429f6d70();
  lVar17 = plVar16[0x1f];
  if (lVar17 == 0) {
    (**(code **)(*plVar16 + 0x368))(plVar16);
    lVar17 = plVar16[0x1f];
  }
  param_1[0x246] = *(undefined8 *)(lVar17 + 0x74);
  *(undefined4 *)(param_1 + 0x247) = *(undefined4 *)(lVar17 + 0x7c);
  cVar10 = FUN_1415ad720();
  if (((cVar10 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)) {
    if (((param_1[2] == 0) ||
        (plVar16 = *(longlong **)(param_1[2] + 0x20), plVar16 == (longlong *)0x0)) ||
       (lVar17 = (**(code **)(*plVar16 + 0x208))(), lVar17 == 0)) {
      uVar23 = 0;
    }
    else {
      (**(code **)(**(longlong **)(param_1[2] + 0x20) + 0x208))();
      uVar23 = UWorld::IsGameWorld();
    }
    *(undefined1 *)(param_1 + 0x240) = uVar23;
  }
  *(undefined1 *)((longlong)param_1 + 0xf69) = *(undefined1 *)((longlong)param_2 + 0x26d);
  *(undefined4 *)((longlong)param_1 + 0xf6c) = *(undefined4 *)(param_2 + 0x4e);
  *(undefined4 *)(param_1 + 0x1ee) = *(undefined4 *)((longlong)param_2 + 0x274);
  *(undefined4 *)((longlong)param_1 + 0xf74) = 0;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  if ((*(int *)(lVar20 + 0x38) < DAT_146b0a188) && (_Init_thread_header(), DAT_146b0a188 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar16 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.InstancedStereo");
    piVar18 = (int *)0x0;
    if (plVar16 != (longlong *)0x0) {
      piVar18 = (int *)(**(code **)(*plVar16 + 0x38))(plVar16);
    }
    DAT_146b0a180 = piVar18;
    _Init_thread_footer();
  }
  piVar18 = DAT_146b0a180;
  if (((uVar13 < 0x1f) && ((0x40050005U >> (uVar13 & 0x1f) & 1) != 0)) &&
     (DAT_146b0a180 != (int *)0x0)) {
    cVar10 = FUN_1415ad720();
    if (((cVar10 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
      bVar22 = piVar18[1] != 0;
    }
    else {
      bVar22 = *piVar18 != 0;
    }
  }
  else {
    bVar22 = false;
  }
  *(bool *)((longlong)param_1 + 0x1209) = bVar22;
  if ((*(int *)(lVar20 + 0x38) < DAT_146b0a198) && (_Init_thread_header(), DAT_146b0a198 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar16 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MultiView");
    lVar20 = 0;
    if (plVar16 != (longlong *)0x0) {
      lVar20 = (**(code **)(*plVar16 + 0x38))(plVar16);
    }
    DAT_146b0a190 = lVar20;
    _Init_thread_footer();
  }
  if ((((uVar13 == 2) || (uVar13 == 0x1e)) ||
      (((uVar13 - 0x10 & 0xfffffffd) == 0 && (uVar13 = RHIGetShaderLanguageVersion(), 2 < uVar13))))
     && (lVar20 = DAT_146b0a190, DAT_146b0a190 != 0)) {
    cVar10 = FUN_1415ad720();
    if (((cVar10 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar12 = GetCurrentThreadId(), DVar12 != DAT_1468c21c0)) {
      lVar17 = 4;
    }
    else {
      lVar17 = 0;
    }
    if (*(int *)(lVar17 + lVar20) != 0) {
      uVar23 = 1;
      goto LAB_1427431c4;
    }
  }
  uVar23 = 0;
LAB_1427431c4:
  *(undefined1 *)((longlong)param_1 + 0x120a) = uVar23;
  if ((*(char *)((longlong)param_1 + 0x1209) == '\0') &&
     (*(char *)((longlong)param_1 + 0x120b) == '\0')) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x120d) = uVar23;
  if ((*(char *)((longlong)param_1 + 0x120b) == '\0') || (DAT_146ab62ea == '\0')) {
    uVar23 = 0;
  }
  else {
    uVar23 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x120b) = uVar23;
  FUN_14275bd30(param_1);
  lVar20 = DAT_146b09ae0;
  cVar10 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar10 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)) {
    lVar21 = 0;
  }
  if ((*(int *)(lVar21 + lVar20) != 0) && (*(int *)(param_1 + 0x342) == 2)) {
    *(undefined4 *)((longlong)param_1 + 0x1a14) = 1;
  }
  param_1[0x34c] = param_2[0x4f];
  *(undefined4 *)(param_1 + 0x34d) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x1a6c) = *(undefined4 *)((longlong)param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x34e) = *(undefined4 *)(param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x1a74) = *(undefined4 *)((longlong)param_2 + 0x28c);
  return param_1;
}



// FUNCTION 142743490 FUN_142743490 body=849 status=ok
// SIG undefined FUN_142743490(void)

undefined8 * FUN_142743490(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  
  lVar11 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 3;
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  param_1[5] = param_2[2];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x42480000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xffffffff;
  *(byte *)(param_1 + 0xc) = *(byte *)((longlong)param_2 + 0x3c) & 1;
  *(byte *)((longlong)param_1 + 0x61) = (byte)(*(uint *)((longlong)param_2 + 0x3c) >> 1) & 1;
  uVar1 = *(uint *)((longlong)param_2 + 0x3c);
  *(undefined8 *)((longlong)param_1 + 100) = 2;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  *(byte *)((longlong)param_1 + 0x62) = (byte)(uVar1 >> 2) & 1;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((longlong)param_2 + 0x34);
  pvVar3 = ThreadLocalStoragePointer;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffffbf800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 1;
  param_1[0x15] = 0;
  lVar8 = *(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar8 + 0x38) < DAT_146b0a260) &&
     (_Init_thread_header(&DAT_146b0a260), DAT_146b0a260 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MonoscopicFarField");
    lVar6 = lVar11;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146b0a258 = lVar6;
    _Init_thread_footer(&DAT_146b0a260);
  }
  if ((*(int *)(lVar8 + 0x38) < DAT_146b0a270) &&
     (_Init_thread_header(&DAT_146b0a270), DAT_146b0a270 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MonoscopicFarFieldMode");
    lVar8 = lVar11;
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146b0a268 = lVar8;
    _Init_thread_footer(&DAT_146b0a270);
  }
  cVar4 = '\0';
  if ((DAT_146b17150 != 0) && (*(longlong **)(DAT_146b17150 + 0xab8) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xab8) + 8))();
  }
  lVar6 = DAT_146b0a258;
  lVar8 = param_1[4];
  iVar9 = DAT_1464c9c14;
  if (lVar8 != 0) {
    iVar9 = *(int *)(lVar8 + 8);
  }
  if ((((cVar4 == '\0') || (1 < iVar9)) || (DAT_146b0a258 == 0)) || (DAT_146b0a268 == 0))
  goto LAB_1427436c1;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar8 = 4;
    if (DVar5 == DAT_1468c21c0) goto LAB_14274365a;
  }
  else {
LAB_14274365a:
    lVar8 = lVar11;
  }
  lVar2 = DAT_146b0a268;
  *(bool *)((longlong)param_1 + 0x4c) = *(int *)(lVar8 + lVar6) != 0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar8 = 4;
    if (DVar5 == DAT_1468c21c0) goto LAB_14274369c;
  }
  else {
LAB_14274369c:
    lVar8 = lVar11;
  }
  iVar9 = *(int *)(lVar8 + lVar2);
  iVar10 = 0;
  if ((-1 < iVar9) && (iVar10 = 4, iVar9 < 4)) {
    iVar10 = iVar9;
  }
  *(int *)(param_1 + 9) = iVar10;
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 7);
  lVar8 = param_1[4];
LAB_1427436c1:
  iVar9 = DAT_1464c9c14;
  if (lVar8 != 0) {
    iVar9 = *(int *)(lVar8 + 8);
  }
  if ((iVar9 < 2) && (cVar4 = FUN_142753a10(), cVar4 == '\0')) {
    *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfeffffff;
  }
  return param_1;
}



// FUNCTION 1427437f0 FShaderMapCompileResults body=131 status=ok
// SIG undefined FShaderMapCompileResults(void)

undefined4 *
FShaderMapCompileResults::FShaderMapCompileResults(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 6) = *(undefined1 *)((longlong)param_2 + 6);
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  _Src = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 2,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 142743880 FUN_142743880 body=500 status=ok
// SIG undefined FUN_142743880(void)

undefined8 * FUN_142743880(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  char cVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  lVar9 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14519b3a8;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = (undefined8 *)param_1[2];
  for (iVar10 = *(int *)(param_1 + 3); iVar10 != 0; iVar10 = iVar10 + -1) {
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
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
  *(int *)(param_1 + 0xf) = (int)((ulonglong)(longlong)DAT_1464c9c34 >> 2);
  pvVar2 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  uVar8 = (uint)((ulonglong)(longlong)DAT_1464c9c30 / 0x2c);
  if (0xfffe < uVar8) {
    uVar8 = 0xffff;
  }
  *(uint *)((longlong)param_1 + 0x7c) = uVar8;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  lVar6 = *(longlong *)((longlong)pvVar2 + uVar7 * 8);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  if ((*(int *)(lVar6 + 0x38) < DAT_146b0a040) &&
     (_Init_thread_header(&DAT_146b0a040), DAT_146b0a040 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR");
    lVar6 = lVar9;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
    }
    DAT_146b0a038 = lVar6;
    _Init_thread_footer(&DAT_146b0a040);
  }
  lVar6 = DAT_146b0a038;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar9 = 4;
  }
  *(bool *)((longlong)param_1 + 0x21c) = *(int *)(lVar6 + lVar9) == 1;
  return param_1;
}



// FUNCTION 142743a80 FUN_142743a80 body=5880 status=ok
// SIG undefined FUN_142743a80(void)

float * FUN_142743a80(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  bool bVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
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
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float local_2b8;
  float fStack_2b4;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined8 local_228;
  float fStack_220;
  undefined4 uStack_21c;
  float local_218;
  float local_214;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  
  FUN_1404546d0();
  fVar30 = *(float *)(param_2 + 8);
  fVar31 = *(float *)((longlong)param_2 + 0x44);
  fStack_260 = *(float *)(param_2 + 9);
  fVar43 = *(float *)((longlong)param_2 + 0x4c);
  fVar29 = *(float *)(param_2 + 1);
  local_1e8 = *param_2;
  fVar44 = 0.0;
  fVar45 = *(float *)(param_2 + 4);
  fVar46 = *(float *)((longlong)param_2 + 0x24);
  fVar47 = *(float *)(param_2 + 5);
  fVar48 = *(float *)((longlong)param_2 + 0x2c);
  fVar49 = *(float *)(param_2 + 6);
  fVar50 = *(float *)((longlong)param_2 + 0x34);
  fVar51 = *(float *)(param_2 + 7);
  fVar52 = *(float *)((longlong)param_2 + 0x3c);
  fVar53 = *(float *)(param_2 + 2);
  fVar54 = *(float *)((longlong)param_2 + 0x14);
  fVar55 = *(float *)(param_2 + 3);
  fVar56 = *(float *)((longlong)param_2 + 0x1c);
  local_2b8 = (float)local_1e8;
  fStack_2b4 = (float)((ulonglong)local_1e8 >> 0x20);
  local_298 = fVar53;
  fStack_294 = fVar54;
  fStack_290 = fVar55;
  fStack_28c = fVar56;
  local_288 = fVar45;
  fStack_284 = fVar46;
  fStack_280 = fVar47;
  fStack_27c = fVar48;
  local_278 = fVar49;
  fStack_274 = fVar50;
  fStack_270 = fVar51;
  fStack_26c = fVar52;
  if (ABS(fVar30) <= 0.0) {
    local_1f8._4_4_ = fVar31;
    local_1f8._0_4_ = fVar31;
    fStack_1f0 = fVar31;
    fStack_1ec = fVar31;
    if ((ABS(fVar31) <= 0.0) &&
       (local_158 = fStack_260, fStack_154 = fStack_260, fStack_150 = fStack_260,
       fStack_14c = fStack_260, ABS(fStack_260) <= 0.0)) goto LAB_142743ce9;
  }
  local_268 = fVar30;
  fStack_264 = fVar31;
  fStack_25c = fVar43;
  local_1d8 = fVar45;
  fStack_1d4 = fVar46;
  fStack_1d0 = fVar47;
  fStack_1cc = fVar48;
  local_1c8 = fVar49;
  fStack_1c4 = fVar50;
  fStack_1c0 = fVar51;
  fStack_1bc = fVar52;
  local_1b8 = fVar30;
  fStack_1b4 = fVar31;
  fStack_1b0 = fStack_260;
  fStack_1ac = fVar43;
  FMatrix::InverseFast(&local_298,&local_258);
  fVar30 = (float)local_228 * 1.0;
  fVar31 = local_228._4_4_ * 1.0;
  local_228._0_4_ = 0.0;
  local_228._4_4_ = 0.0;
  local_2b8 = local_2b8 +
              fVar30 + DAT_1468b5d98 * local_238 +
              DAT_1468b5d94 * local_248 + DAT_1468b5d90 * local_258;
  fStack_2b4 = fStack_2b4 +
               fVar31 + DAT_1468b5d98 * fStack_234 +
               DAT_1468b5d94 * fStack_244 + DAT_1468b5d90 * fStack_254;
  fVar29 = fVar29 + fStack_220 * 1.0 + DAT_1468b5d98 * fStack_230 +
                    DAT_1468b5d94 * fStack_240 + DAT_1468b5d90 * fStack_250;
  _local_1f8 = ZEXT416(0);
  local_1e8 = CONCAT44(fStack_2b4,local_2b8);
  local_158 = 0.0;
  fVar30 = (float)local_228;
  fVar31 = local_228._4_4_;
LAB_142743ce9:
  fVar42 = local_158;
  local_214 = -fStack_2b4;
  fVar37 = -fVar29;
  local_218 = -local_2b8;
  local_228 = CONCAT44(fStack_2b4,local_2b8) ^ 0x8000000080000000;
  uStack_21c = 0x3f800000;
  param_1[0x60] = fVar45 * 0.0 + fVar53 * 1.0 + fVar49 * 0.0 + fVar30 * 0.0;
  param_1[0x61] = fVar46 * 0.0 + fVar54 * 1.0 + fVar50 * 0.0 + fVar31 * 0.0;
  param_1[0x62] = fVar47 * 0.0 + fVar55 * 1.0 + fVar51 * 0.0 + local_158 * 0.0;
  param_1[99] = fVar48 * 0.0 + fVar56 * 1.0 + fVar52 * 0.0 + fVar43 * 0.0;
  param_1[100] = fVar45 * 1.0 + fVar53 * 0.0 + fVar49 * 0.0 + fVar30 * 0.0;
  param_1[0x65] = fVar46 * 1.0 + fVar54 * 0.0 + fVar50 * 0.0 + fVar31 * 0.0;
  param_1[0x66] = fVar47 * 1.0 + fVar55 * 0.0 + fVar51 * 0.0 + local_158 * 0.0;
  param_1[0x67] = fVar48 * 1.0 + fVar56 * 0.0 + fVar52 * 0.0 + fVar43 * 0.0;
  param_1[0x68] = fVar45 * 0.0 + fVar53 * 0.0 + fVar49 * 1.0 + fVar30 * 0.0;
  param_1[0x69] = fVar46 * 0.0 + fVar54 * 0.0 + fVar50 * 1.0 + fVar31 * 0.0;
  param_1[0x6a] = fVar47 * 0.0 + fVar55 * 0.0 + fVar51 * 1.0 + local_158 * 0.0;
  param_1[0x6b] = fVar48 * 0.0 + fVar56 * 0.0 + fVar52 * 1.0 + fVar43 * 0.0;
  param_1[0x6c] = local_214 * fVar45 + local_218 * fVar53 + fVar37 * fVar49 + fVar30 * 1.0;
  param_1[0x6d] = local_214 * fVar46 + local_218 * fVar54 + fVar37 * fVar50 + fVar31 * 1.0;
  param_1[0x6e] = local_214 * fVar47 + local_218 * fVar55 + fVar37 * fVar51 + local_158 * 1.0;
  param_1[0x6f] = local_214 * fVar48 + local_218 * fVar56 + fVar37 * fVar52 + fVar43 * 1.0;
  uVar26 = param_2[3];
  *(undefined8 *)(param_1 + 0xc0) = param_2[2];
  *(undefined8 *)(param_1 + 0xc2) = uVar26;
  uVar26 = param_2[5];
  *(undefined8 *)(param_1 + 0xc4) = param_2[4];
  *(undefined8 *)(param_1 + 0xc6) = uVar26;
  uVar26 = param_2[7];
  *(undefined8 *)(param_1 + 200) = param_2[6];
  *(undefined8 *)(param_1 + 0xca) = uVar26;
  uVar26 = param_2[9];
  *(undefined8 *)(param_1 + 0xcc) = param_2[8];
  *(undefined8 *)(param_1 + 0xce) = uVar26;
  local_268 = fVar30;
  fStack_264 = fVar31;
  fStack_260 = local_158;
  fStack_25c = fVar43;
  fStack_220 = fVar37;
  local_1d8 = fVar45;
  fStack_1d4 = fVar46;
  fStack_1d0 = fVar47;
  fStack_1cc = fVar48;
  local_1c8 = fVar49;
  fStack_1c4 = fVar50;
  fStack_1c0 = fVar51;
  fStack_1bc = fVar52;
  local_1b8 = fVar30;
  fStack_1b4 = fVar31;
  fStack_1b0 = local_158;
  fStack_1ac = fVar43;
  puVar28 = (undefined8 *)AdjustProjectionMatrixForRHI(&local_258,param_2 + 10);
  uVar26 = puVar28[1];
  *(undefined8 *)param_1 = *puVar28;
  *(undefined8 *)(param_1 + 2) = uVar26;
  uVar26 = puVar28[3];
  *(undefined8 *)(param_1 + 4) = puVar28[2];
  *(undefined8 *)(param_1 + 6) = uVar26;
  uVar26 = puVar28[5];
  *(undefined8 *)(param_1 + 8) = puVar28[4];
  *(undefined8 *)(param_1 + 10) = uVar26;
  uVar26 = puVar28[7];
  *(undefined8 *)(param_1 + 0xc) = puVar28[6];
  *(undefined8 *)(param_1 + 0xe) = uVar26;
  puVar28 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(&local_258,param_1);
  uVar26 = puVar28[1];
  *(undefined8 *)(param_1 + 0x20) = *puVar28;
  *(undefined8 *)(param_1 + 0x22) = uVar26;
  uVar26 = puVar28[3];
  *(undefined8 *)(param_1 + 0x24) = puVar28[2];
  *(undefined8 *)(param_1 + 0x26) = uVar26;
  uVar26 = puVar28[5];
  *(undefined8 *)(param_1 + 0x28) = puVar28[4];
  *(undefined8 *)(param_1 + 0x2a) = uVar26;
  uVar26 = puVar28[7];
  *(undefined8 *)(param_1 + 0x2c) = puVar28[6];
  *(undefined8 *)(param_1 + 0x2e) = uVar26;
  puVar28 = (undefined8 *)AdjustProjectionMatrixForRHI(&local_258,param_2 + 0x12);
  pfVar1 = param_1 + 0x30;
  uVar26 = puVar28[1];
  *(undefined8 *)pfVar1 = *puVar28;
  *(undefined8 *)(param_1 + 0x32) = uVar26;
  uVar26 = puVar28[3];
  *(undefined8 *)(param_1 + 0x34) = puVar28[2];
  *(undefined8 *)(param_1 + 0x36) = uVar26;
  uVar26 = puVar28[5];
  *(undefined8 *)(param_1 + 0x38) = puVar28[4];
  *(undefined8 *)(param_1 + 0x3a) = uVar26;
  uVar26 = puVar28[7];
  *(undefined8 *)(param_1 + 0x3c) = puVar28[6];
  *(undefined8 *)(param_1 + 0x3e) = uVar26;
  puVar28 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(&local_258,pfVar1);
  uVar26 = puVar28[1];
  *(undefined8 *)(param_1 + 0x40) = *puVar28;
  *(undefined8 *)(param_1 + 0x42) = uVar26;
  uVar26 = puVar28[3];
  *(undefined8 *)(param_1 + 0x44) = puVar28[2];
  *(undefined8 *)(param_1 + 0x46) = uVar26;
  uVar26 = puVar28[5];
  *(undefined8 *)(param_1 + 0x48) = puVar28[4];
  *(undefined8 *)(param_1 + 0x4a) = uVar26;
  uVar26 = puVar28[7];
  *(undefined8 *)(param_1 + 0x4c) = puVar28[6];
  *(undefined8 *)(param_1 + 0x4e) = uVar26;
  puVar28 = param_2 + 0x1c;
  if (*(float *)(param_2 + 0x1a) <= 0.0) {
    puVar28 = param_2 + 10;
  }
  puVar28 = (undefined8 *)AdjustProjectionMatrixForRHI(&local_258,puVar28);
  uVar26 = puVar28[1];
  *(undefined8 *)(param_1 + 0x50) = *puVar28;
  *(undefined8 *)(param_1 + 0x52) = uVar26;
  uVar26 = puVar28[3];
  *(undefined8 *)(param_1 + 0x54) = puVar28[2];
  *(undefined8 *)(param_1 + 0x56) = uVar26;
  uVar26 = puVar28[5];
  *(undefined8 *)(param_1 + 0x58) = puVar28[4];
  *(undefined8 *)(param_1 + 0x5a) = uVar26;
  uVar26 = puVar28[7];
  *(undefined8 *)(param_1 + 0x5c) = puVar28[6];
  *(undefined8 *)(param_1 + 0x5e) = uVar26;
  fVar38 = param_1[0x60];
  fVar39 = param_1[0x61];
  fVar40 = param_1[0x62];
  fVar41 = param_1[99];
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar10 = param_1[8];
  fVar11 = param_1[9];
  fVar12 = param_1[10];
  fVar13 = param_1[0xb];
  fVar33 = param_1[0xc];
  fVar34 = param_1[0xd];
  fVar35 = param_1[0xe];
  fVar36 = param_1[0xf];
  fVar14 = param_1[100];
  fVar15 = param_1[0x65];
  fVar16 = param_1[0x66];
  fVar17 = param_1[0x67];
  fVar18 = param_1[0x68];
  fVar19 = param_1[0x69];
  fVar20 = param_1[0x6a];
  fVar21 = param_1[0x6b];
  fVar22 = param_1[0x6c];
  fVar23 = param_1[0x6d];
  fVar24 = param_1[0x6e];
  fVar25 = param_1[0x6f];
  param_1[0x80] = fVar38 * fVar6 + fVar39 * fVar2 + fVar40 * fVar10 + fVar41 * fVar33;
  param_1[0x81] = fVar38 * fVar7 + fVar39 * fVar3 + fVar40 * fVar11 + fVar41 * fVar34;
  param_1[0x82] = fVar38 * fVar8 + fVar39 * fVar4 + fVar40 * fVar12 + fVar41 * fVar35;
  param_1[0x83] = fVar38 * fVar9 + fVar39 * fVar5 + fVar40 * fVar13 + fVar41 * fVar36;
  param_1[0x84] = fVar14 * fVar6 + fVar15 * fVar2 + fVar16 * fVar10 + fVar17 * fVar33;
  param_1[0x85] = fVar14 * fVar7 + fVar15 * fVar3 + fVar16 * fVar11 + fVar17 * fVar34;
  param_1[0x86] = fVar14 * fVar8 + fVar15 * fVar4 + fVar16 * fVar12 + fVar17 * fVar35;
  param_1[0x87] = fVar14 * fVar9 + fVar15 * fVar5 + fVar16 * fVar13 + fVar17 * fVar36;
  param_1[0x88] = fVar18 * fVar6 + fVar19 * fVar2 + fVar20 * fVar10 + fVar21 * fVar33;
  param_1[0x89] = fVar18 * fVar7 + fVar19 * fVar3 + fVar20 * fVar11 + fVar21 * fVar34;
  param_1[0x8a] = fVar18 * fVar8 + fVar19 * fVar4 + fVar20 * fVar12 + fVar21 * fVar35;
  param_1[0x8b] = fVar18 * fVar9 + fVar19 * fVar5 + fVar20 * fVar13 + fVar21 * fVar36;
  param_1[0x8c] = fVar22 * fVar6 + fVar23 * fVar2 + fVar24 * fVar10 + fVar25 * fVar33;
  param_1[0x8d] = fVar22 * fVar7 + fVar23 * fVar3 + fVar24 * fVar11 + fVar25 * fVar34;
  param_1[0x8e] = fVar22 * fVar8 + fVar23 * fVar4 + fVar24 * fVar12 + fVar25 * fVar35;
  param_1[0x8f] = fVar22 * fVar9 + fVar23 * fVar5 + fVar24 * fVar13 + fVar25 * fVar36;
  fVar38 = param_1[0x60];
  fVar39 = param_1[0x61];
  fVar40 = param_1[0x62];
  fVar41 = param_1[99];
  fVar2 = *pfVar1;
  fVar3 = param_1[0x31];
  fVar4 = param_1[0x32];
  fVar5 = param_1[0x33];
  fVar6 = param_1[0x34];
  fVar7 = param_1[0x35];
  fVar8 = param_1[0x36];
  fVar9 = param_1[0x37];
  fVar10 = param_1[0x38];
  fVar11 = param_1[0x39];
  fVar12 = param_1[0x3a];
  fVar13 = param_1[0x3b];
  fVar33 = param_1[0x3c];
  fVar34 = param_1[0x3d];
  fVar35 = param_1[0x3e];
  fVar36 = param_1[0x3f];
  fVar14 = param_1[100];
  fVar15 = param_1[0x65];
  fVar16 = param_1[0x66];
  fVar17 = param_1[0x67];
  fVar18 = param_1[0x68];
  fVar19 = param_1[0x69];
  fVar20 = param_1[0x6a];
  fVar21 = param_1[0x6b];
  fVar22 = param_1[0x6c];
  fVar23 = param_1[0x6d];
  fVar24 = param_1[0x6e];
  fVar25 = param_1[0x6f];
  param_1[0x90] = fVar38 * fVar2 + fVar39 * fVar6 + fVar40 * fVar10 + fVar41 * fVar33;
  param_1[0x91] = fVar38 * fVar3 + fVar39 * fVar7 + fVar40 * fVar11 + fVar41 * fVar34;
  param_1[0x92] = fVar38 * fVar4 + fVar39 * fVar8 + fVar40 * fVar12 + fVar41 * fVar35;
  param_1[0x93] = fVar38 * fVar5 + fVar39 * fVar9 + fVar40 * fVar13 + fVar41 * fVar36;
  param_1[0x94] = fVar14 * fVar2 + fVar15 * fVar6 + fVar16 * fVar10 + fVar17 * fVar33;
  param_1[0x95] = fVar14 * fVar3 + fVar15 * fVar7 + fVar16 * fVar11 + fVar17 * fVar34;
  param_1[0x96] = fVar14 * fVar4 + fVar15 * fVar8 + fVar16 * fVar12 + fVar17 * fVar35;
  param_1[0x97] = fVar14 * fVar5 + fVar15 * fVar9 + fVar16 * fVar13 + fVar17 * fVar36;
  param_1[0x98] = fVar18 * fVar2 + fVar19 * fVar6 + fVar20 * fVar10 + fVar21 * fVar33;
  param_1[0x99] = fVar18 * fVar3 + fVar19 * fVar7 + fVar20 * fVar11 + fVar21 * fVar34;
  param_1[0x9a] = fVar18 * fVar4 + fVar19 * fVar8 + fVar20 * fVar12 + fVar21 * fVar35;
  param_1[0x9b] = fVar18 * fVar5 + fVar19 * fVar9 + fVar20 * fVar13 + fVar21 * fVar36;
  param_1[0x9c] = fVar22 * fVar2 + fVar23 * fVar6 + fVar24 * fVar10 + fVar25 * fVar33;
  param_1[0x9d] = fVar22 * fVar3 + fVar23 * fVar7 + fVar24 * fVar11 + fVar25 * fVar34;
  param_1[0x9e] = fVar22 * fVar4 + fVar23 * fVar8 + fVar24 * fVar12 + fVar25 * fVar35;
  param_1[0x9f] = fVar22 * fVar5 + fVar23 * fVar9 + fVar24 * fVar13 + fVar25 * fVar36;
  local_208 = fVar45 * 0.0 + fVar53 * 1.0 + fVar49 * 0.0 + fVar30 * local_2b8;
  fStack_204 = fVar45 * 1.0 + fVar53 * 0.0 + fVar49 * 0.0 + fVar30 * fStack_2b4;
  fStack_200 = fVar45 * 0.0 + fVar53 * 0.0 + fVar49 * 1.0 + fVar30 * fVar29;
  fStack_1fc = fVar45 * 0.0 + fVar53 * 0.0 + fVar49 * 0.0 + fVar30 * 1.0;
  local_2a8 = fVar46 * 0.0 + fVar54 * 1.0 + fVar50 * 0.0 + (float)local_1f8._0_4_ * local_2b8;
  fStack_2a4 = fVar46 * 1.0 + fVar54 * 0.0 + fVar50 * 0.0 + (float)local_1f8._0_4_ * fStack_2b4;
  fStack_2a0 = fVar46 * 0.0 + fVar54 * 0.0 + fVar50 * 1.0 + (float)local_1f8._0_4_ * fVar29;
  fStack_29c = fVar46 * 0.0 + fVar54 * 0.0 + fVar50 * 0.0 + (float)local_1f8._0_4_ * 1.0;
  param_1[0x70] = local_208;
  param_1[0x71] = fStack_204;
  param_1[0x72] = fStack_200;
  param_1[0x73] = fStack_1fc;
  param_1[0x74] = local_2a8;
  param_1[0x75] = fStack_2a4;
  param_1[0x76] = fStack_2a0;
  param_1[0x77] = fStack_29c;
  fVar38 = fVar47 * 0.0 + fVar55 * 1.0 + fVar51 * 0.0 + local_158 * local_2b8;
  fVar39 = fVar47 * 1.0 + fVar55 * 0.0 + fVar51 * 0.0 + local_158 * fStack_2b4;
  fVar40 = fVar47 * 0.0 + fVar55 * 0.0 + fVar51 * 1.0 + local_158 * fVar29;
  fVar41 = fVar47 * 0.0 + fVar55 * 0.0 + fVar51 * 0.0 + local_158 * 1.0;
  local_1a8 = CONCAT44(fVar39,fVar38);
  uStack_1a0 = CONCAT44(fVar41,fVar40);
  param_1[0x78] = fVar38;
  param_1[0x79] = fVar39;
  param_1[0x7a] = fVar40;
  param_1[0x7b] = fVar41;
  fVar33 = fVar48 * 0.0 + fVar56 * 1.0 + fVar52 * 0.0 + fVar43 * local_2b8;
  fVar34 = fVar48 * 1.0 + fVar56 * 0.0 + fVar52 * 0.0 + fVar43 * fStack_2b4;
  fVar35 = fVar48 * 0.0 + fVar56 * 0.0 + fVar52 * 1.0 + fVar43 * fVar29;
  fVar36 = fVar48 * 0.0 + fVar56 * 0.0 + fVar52 * 0.0 + fVar43 * 1.0;
  param_1[0x7c] = fVar33;
  param_1[0x7d] = fVar34;
  param_1[0x7e] = fVar35;
  param_1[0x7f] = fVar36;
  fVar38 = param_1[0x20];
  fVar39 = param_1[0x21];
  fVar40 = param_1[0x22];
  fVar41 = param_1[0x23];
  fVar2 = param_1[0x70];
  fVar3 = param_1[0x71];
  fVar4 = param_1[0x72];
  fVar5 = param_1[0x73];
  fVar6 = param_1[0x78];
  fVar7 = param_1[0x79];
  fVar8 = param_1[0x7a];
  fVar9 = param_1[0x7b];
  fVar10 = param_1[0x7c];
  fVar11 = param_1[0x7d];
  fVar12 = param_1[0x7e];
  fVar13 = param_1[0x7f];
  local_198 = CONCAT44(fVar34,fVar33);
  uStack_190 = CONCAT44(fVar36,fVar35);
  fVar33 = param_1[0x74];
  fVar34 = param_1[0x75];
  fVar35 = param_1[0x76];
  fVar36 = param_1[0x77];
  fVar14 = param_1[0x24];
  fVar15 = param_1[0x25];
  fVar16 = param_1[0x26];
  fVar17 = param_1[0x27];
  fVar18 = param_1[0x28];
  fVar19 = param_1[0x29];
  fVar20 = param_1[0x2a];
  fVar21 = param_1[0x2b];
  fVar22 = param_1[0x2c];
  fVar23 = param_1[0x2d];
  fVar24 = param_1[0x2e];
  fVar25 = param_1[0x2f];
  param_1[0xa0] = fVar38 * fVar2 + fVar39 * fVar33 + fVar40 * fVar6 + fVar41 * fVar10;
  param_1[0xa1] = fVar38 * fVar3 + fVar39 * fVar34 + fVar40 * fVar7 + fVar41 * fVar11;
  param_1[0xa2] = fVar38 * fVar4 + fVar39 * fVar35 + fVar40 * fVar8 + fVar41 * fVar12;
  param_1[0xa3] = fVar38 * fVar5 + fVar39 * fVar36 + fVar40 * fVar9 + fVar41 * fVar13;
  param_1[0xa4] = fVar14 * fVar2 + fVar15 * fVar33 + fVar16 * fVar6 + fVar17 * fVar10;
  param_1[0xa5] = fVar14 * fVar3 + fVar15 * fVar34 + fVar16 * fVar7 + fVar17 * fVar11;
  param_1[0xa6] = fVar14 * fVar4 + fVar15 * fVar35 + fVar16 * fVar8 + fVar17 * fVar12;
  param_1[0xa7] = fVar14 * fVar5 + fVar15 * fVar36 + fVar16 * fVar9 + fVar17 * fVar13;
  param_1[0xa8] = fVar18 * fVar2 + fVar19 * fVar33 + fVar20 * fVar6 + fVar21 * fVar10;
  param_1[0xa9] = fVar18 * fVar3 + fVar19 * fVar34 + fVar20 * fVar7 + fVar21 * fVar11;
  param_1[0xaa] = fVar18 * fVar4 + fVar19 * fVar35 + fVar20 * fVar8 + fVar21 * fVar12;
  param_1[0xab] = fVar18 * fVar5 + fVar19 * fVar36 + fVar20 * fVar9 + fVar21 * fVar13;
  param_1[0xac] = fVar22 * fVar2 + fVar23 * fVar33 + fVar24 * fVar6 + fVar25 * fVar10;
  param_1[0xad] = fVar22 * fVar3 + fVar23 * fVar34 + fVar24 * fVar7 + fVar25 * fVar11;
  param_1[0xae] = fVar22 * fVar4 + fVar23 * fVar35 + fVar24 * fVar8 + fVar25 * fVar12;
  param_1[0xaf] = fVar22 * fVar5 + fVar23 * fVar36 + fVar24 * fVar9 + fVar25 * fVar13;
  fVar38 = param_1[0x40];
  fVar39 = param_1[0x41];
  fVar40 = param_1[0x42];
  fVar41 = param_1[0x43];
  fVar2 = param_1[0x74];
  fVar3 = param_1[0x75];
  fVar4 = param_1[0x76];
  fVar5 = param_1[0x77];
  fVar6 = param_1[0x70];
  fVar7 = param_1[0x71];
  fVar8 = param_1[0x72];
  fVar9 = param_1[0x73];
  fVar10 = param_1[0x78];
  fVar11 = param_1[0x79];
  fVar12 = param_1[0x7a];
  fVar13 = param_1[0x7b];
  fVar33 = param_1[0x7c];
  fVar34 = param_1[0x7d];
  fVar35 = param_1[0x7e];
  fVar36 = param_1[0x7f];
  fVar14 = param_1[0x44];
  fVar15 = param_1[0x45];
  fVar16 = param_1[0x46];
  fVar17 = param_1[0x47];
  fVar18 = param_1[0x48];
  fVar19 = param_1[0x49];
  fVar20 = param_1[0x4a];
  fVar21 = param_1[0x4b];
  fVar22 = param_1[0x4c];
  fVar23 = param_1[0x4d];
  fVar24 = param_1[0x4e];
  fVar25 = param_1[0x4f];
  bVar27 = true;
  param_1[0xb0] = fVar38 * fVar6 + fVar39 * fVar2 + fVar40 * fVar10 + fVar41 * fVar33;
  param_1[0xb1] = fVar38 * fVar7 + fVar39 * fVar3 + fVar40 * fVar11 + fVar41 * fVar34;
  param_1[0xb2] = fVar38 * fVar8 + fVar39 * fVar4 + fVar40 * fVar12 + fVar41 * fVar35;
  param_1[0xb3] = fVar38 * fVar9 + fVar39 * fVar5 + fVar40 * fVar13 + fVar41 * fVar36;
  param_1[0xb4] = fVar14 * fVar6 + fVar15 * fVar2 + fVar16 * fVar10 + fVar17 * fVar33;
  param_1[0xb5] = fVar14 * fVar7 + fVar15 * fVar3 + fVar16 * fVar11 + fVar17 * fVar34;
  param_1[0xb6] = fVar14 * fVar8 + fVar15 * fVar4 + fVar16 * fVar12 + fVar17 * fVar35;
  param_1[0xb7] = fVar14 * fVar9 + fVar15 * fVar5 + fVar16 * fVar13 + fVar17 * fVar36;
  param_1[0xb8] = fVar18 * fVar6 + fVar19 * fVar2 + fVar20 * fVar10 + fVar21 * fVar33;
  param_1[0xb9] = fVar18 * fVar7 + fVar19 * fVar3 + fVar20 * fVar11 + fVar21 * fVar34;
  param_1[0xba] = fVar18 * fVar8 + fVar19 * fVar4 + fVar20 * fVar12 + fVar21 * fVar35;
  param_1[0xbb] = fVar18 * fVar9 + fVar19 * fVar5 + fVar20 * fVar13 + fVar21 * fVar36;
  param_1[0xbc] = fVar22 * fVar6 + fVar23 * fVar2 + fVar24 * fVar10 + fVar25 * fVar33;
  param_1[0xbd] = fVar22 * fVar7 + fVar23 * fVar3 + fVar24 * fVar11 + fVar25 * fVar34;
  param_1[0xbe] = fVar22 * fVar8 + fVar23 * fVar4 + fVar24 * fVar12 + fVar25 * fVar35;
  param_1[0xbf] = fVar22 * fVar9 + fVar23 * fVar5 + fVar24 * fVar13 + fVar25 * fVar36;
  if (1.0 < param_1[0xf] || param_1[0xf] == 1.0) {
    fVar39 = param_1[0x7c] * 0.0 + param_1[0x78] * -1.0 + param_1[0x74] * 0.0 + param_1[0x70] * 0.0;
    fVar38 = param_1[0x7d] * 0.0 + param_1[0x79] * -1.0 + param_1[0x75] * 0.0 + param_1[0x71] * 0.0;
    fVar40 = param_1[0x7e] * 0.0 + param_1[0x7a] * -1.0 + param_1[0x76] * 0.0 + param_1[0x72] * 0.0;
    fVar29 = fVar38 * fVar38 + fVar39 * fVar39 + fVar40 * fVar40;
    if (fVar29 <= 1e-08) {
      fVar38 = 0.0;
      fVar41 = 0.0;
    }
    else {
      auVar32 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
      fVar41 = auVar32._0_4_;
      fVar41 = fVar41 + fVar41 * (0.5 - fVar29 * 0.5 * fVar41 * fVar41);
      fVar41 = fVar41 + fVar41 * (0.5 - fVar29 * 0.5 * fVar41 * fVar41);
      fVar44 = fVar41 * fVar39;
      fVar38 = fVar41 * fVar38;
      fVar41 = fVar41 * fVar40;
    }
    *(ulonglong *)(param_1 + 0x153) = CONCAT44(fVar38,fVar44);
    param_1[0x155] = fVar41;
    bVar27 = false;
  }
  else {
    *(undefined8 *)(param_1 + 0x153) = local_1e8;
    param_1[0x155] = fVar29;
  }
  if (bVar27) {
    local_1a8 = CONCAT44(fVar47,fVar55);
    uStack_1a0 = CONCAT44(local_158,fVar51);
    *(ulonglong *)(param_1 + 0x150) = CONCAT44(local_214,local_218);
    local_198 = CONCAT44(fVar48,fVar56);
    uStack_190 = CONCAT44(fVar43,fVar52);
    param_1[0x152] = fVar37;
    fStack_29c = (float)local_1f8._0_4_;
    local_2a8 = fVar54;
    fStack_2a4 = fVar46;
    fStack_2a0 = fVar50;
    local_208 = fVar53;
    fStack_204 = fVar45;
    fStack_200 = fVar49;
    fStack_1fc = fVar30;
  }
  else {
    fVar45 = param_1[100];
    fVar46 = param_1[0x65];
    fVar47 = param_1[0x66];
    fVar48 = param_1[0x67];
    fVar49 = param_1[0x68];
    fVar50 = param_1[0x69];
    fVar51 = param_1[0x6a];
    fVar52 = param_1[0x6b];
    fVar30 = param_1[0x6c];
    fVar31 = param_1[0x6d];
    fVar42 = param_1[0x6e];
    fVar43 = param_1[0x6f];
    fVar53 = param_1[0x60];
    fVar54 = param_1[0x61];
    fVar55 = param_1[0x62];
    fVar56 = param_1[99];
    local_1d8 = fVar45;
    fStack_1d4 = fVar46;
    fStack_1d0 = fVar47;
    fStack_1cc = fVar48;
    local_1c8 = fVar49;
    fStack_1c4 = fVar50;
    fStack_1c0 = fVar51;
    fStack_1bc = fVar52;
    local_1b8 = fVar30;
    fStack_1b4 = fVar31;
    fStack_1b0 = fVar42;
    fStack_1ac = fVar43;
  }
  param_1[0xe0] = local_208;
  param_1[0xe1] = fStack_204;
  param_1[0xe2] = fStack_200;
  param_1[0xe3] = fStack_1fc;
  param_1[0xe4] = local_2a8;
  param_1[0xe5] = fStack_2a4;
  param_1[0xe6] = fStack_2a0;
  param_1[0xe7] = fStack_29c;
  *(undefined8 *)(param_1 + 0xe8) = local_1a8;
  *(undefined8 *)(param_1 + 0xea) = uStack_1a0;
  *(undefined8 *)(param_1 + 0xec) = local_198;
  *(undefined8 *)(param_1 + 0xee) = uStack_190;
  param_1[0xd0] = fVar53;
  param_1[0xd1] = fVar54;
  param_1[0xd2] = fVar55;
  param_1[0xd3] = fVar56;
  param_1[0xd4] = fVar45;
  param_1[0xd5] = fVar46;
  param_1[0xd6] = fVar47;
  param_1[0xd7] = fVar48;
  param_1[0xd8] = fVar49;
  param_1[0xd9] = fVar50;
  param_1[0xda] = fVar51;
  param_1[0xdb] = fVar52;
  param_1[0xdc] = fVar30;
  param_1[0xdd] = fVar31;
  param_1[0xde] = fVar42;
  param_1[0xdf] = fVar43;
  fVar29 = param_1[100];
  fVar30 = param_1[0x65];
  fVar31 = param_1[0x66];
  fVar43 = param_1[0x67];
  fVar45 = param_1[0x60];
  fVar46 = param_1[0x61];
  fVar47 = param_1[0x62];
  fVar48 = param_1[99];
  fVar49 = param_1[0x68];
  fVar50 = param_1[0x69];
  fVar51 = param_1[0x6a];
  fVar52 = param_1[0x6b];
  fVar44 = param_1[0x6c];
  fVar42 = param_1[0x6d];
  fVar37 = param_1[0x6e];
  fVar38 = param_1[0x6f];
  fVar41 = -param_1[0x152];
  fVar39 = -param_1[0x150];
  fVar40 = -param_1[0x151];
  param_1[0xf0] = fVar45 * 1.0 + fVar29 * 0.0 + fVar49 * 0.0 + fVar44 * 0.0;
  param_1[0xf1] = fVar46 * 1.0 + fVar30 * 0.0 + fVar50 * 0.0 + fVar42 * 0.0;
  param_1[0xf2] = fVar47 * 1.0 + fVar31 * 0.0 + fVar51 * 0.0 + fVar37 * 0.0;
  param_1[0xf3] = fVar48 * 1.0 + fVar43 * 0.0 + fVar52 * 0.0 + fVar38 * 0.0;
  param_1[0xf4] = fVar45 * 0.0 + fVar29 * 1.0 + fVar49 * 0.0 + fVar44 * 0.0;
  param_1[0xf5] = fVar46 * 0.0 + fVar30 * 1.0 + fVar50 * 0.0 + fVar42 * 0.0;
  param_1[0xf6] = fVar47 * 0.0 + fVar31 * 1.0 + fVar51 * 0.0 + fVar37 * 0.0;
  param_1[0xf7] = fVar48 * 0.0 + fVar43 * 1.0 + fVar52 * 0.0 + fVar38 * 0.0;
  param_1[0xf8] = fVar45 * 0.0 + fVar29 * 0.0 + fVar49 * 1.0 + fVar44 * 0.0;
  param_1[0xf9] = fVar46 * 0.0 + fVar30 * 0.0 + fVar50 * 1.0 + fVar42 * 0.0;
  param_1[0xfa] = fVar47 * 0.0 + fVar31 * 0.0 + fVar51 * 1.0 + fVar37 * 0.0;
  param_1[0xfb] = fVar48 * 0.0 + fVar43 * 0.0 + fVar52 * 1.0 + fVar38 * 0.0;
  param_1[0xfc] = fVar39 * fVar45 + fVar40 * fVar29 + fVar41 * fVar49 + fVar44 * 1.0;
  param_1[0xfd] = fVar39 * fVar46 + fVar40 * fVar30 + fVar41 * fVar50 + fVar42 * 1.0;
  param_1[0xfe] = fVar39 * fVar47 + fVar40 * fVar31 + fVar41 * fVar51 + fVar37 * 1.0;
  param_1[0xff] = fVar39 * fVar48 + fVar40 * fVar43 + fVar41 * fVar52 + fVar38 * 1.0;
  fVar43 = param_1[0x70];
  fVar45 = param_1[0x71];
  fVar46 = param_1[0x72];
  fVar47 = param_1[0x73];
  fVar29 = param_1[0x150];
  fVar30 = param_1[0x151];
  fVar48 = param_1[0x74];
  fVar49 = param_1[0x75];
  fVar50 = param_1[0x76];
  fVar51 = param_1[0x77];
  fVar31 = param_1[0x152];
  fVar52 = param_1[0x78];
  fVar44 = param_1[0x79];
  fVar42 = param_1[0x7a];
  fVar37 = param_1[0x7b];
  fVar38 = param_1[0x7c];
  fVar39 = param_1[0x7d];
  fVar40 = param_1[0x7e];
  fVar41 = param_1[0x7f];
  param_1[0x100] = fVar45 * 0.0 + fVar43 * 1.0 + fVar46 * 0.0 + fVar47 * fVar29;
  param_1[0x101] = fVar45 * 1.0 + fVar43 * 0.0 + fVar46 * 0.0 + fVar47 * fVar30;
  param_1[0x102] = fVar45 * 0.0 + fVar43 * 0.0 + fVar46 * 1.0 + fVar47 * fVar31;
  param_1[0x103] = fVar45 * 0.0 + fVar43 * 0.0 + fVar46 * 0.0 + fVar47 * 1.0;
  param_1[0x104] = fVar49 * 0.0 + fVar48 * 1.0 + fVar50 * 0.0 + fVar51 * fVar29;
  param_1[0x105] = fVar49 * 1.0 + fVar48 * 0.0 + fVar50 * 0.0 + fVar51 * fVar30;
  param_1[0x106] = fVar49 * 0.0 + fVar48 * 0.0 + fVar50 * 1.0 + fVar51 * fVar31;
  param_1[0x107] = fVar49 * 0.0 + fVar48 * 0.0 + fVar50 * 0.0 + fVar51 * 1.0;
  param_1[0x108] = fVar44 * 0.0 + fVar52 * 1.0 + fVar42 * 0.0 + fVar37 * fVar29;
  param_1[0x109] = fVar44 * 1.0 + fVar52 * 0.0 + fVar42 * 0.0 + fVar37 * fVar30;
  param_1[0x10a] = fVar44 * 0.0 + fVar52 * 0.0 + fVar42 * 1.0 + fVar37 * fVar31;
  param_1[0x10b] = fVar44 * 0.0 + fVar52 * 0.0 + fVar42 * 0.0 + fVar37 * 1.0;
  param_1[0x10c] = fVar39 * 0.0 + fVar38 * 1.0 + fVar40 * 0.0 + fVar41 * fVar29;
  param_1[0x10d] = fVar39 * 1.0 + fVar38 * 0.0 + fVar40 * 0.0 + fVar41 * fVar30;
  param_1[0x10e] = fVar39 * 0.0 + fVar38 * 0.0 + fVar40 * 1.0 + fVar41 * fVar31;
  param_1[0x10f] = fVar39 * 0.0 + fVar38 * 0.0 + fVar40 * 0.0 + fVar41 * 1.0;
  fVar29 = *param_1;
  fVar30 = param_1[1];
  fVar31 = param_1[2];
  fVar43 = param_1[3];
  fVar45 = param_1[4];
  fVar46 = param_1[5];
  fVar47 = param_1[6];
  fVar48 = param_1[7];
  fVar49 = param_1[8];
  fVar50 = param_1[9];
  fVar51 = param_1[10];
  fVar52 = param_1[0xb];
  fVar44 = param_1[0xc];
  fVar42 = param_1[0xd];
  fVar37 = param_1[0xe];
  fVar38 = param_1[0xf];
  param_1[0x110] = fVar29 * fVar53 + fVar45 * fVar54 + fVar49 * fVar55 + fVar44 * fVar56;
  param_1[0x111] = fVar30 * fVar53 + fVar46 * fVar54 + fVar50 * fVar55 + fVar42 * fVar56;
  param_1[0x112] = fVar31 * fVar53 + fVar47 * fVar54 + fVar51 * fVar55 + fVar37 * fVar56;
  param_1[0x113] = fVar43 * fVar53 + fVar48 * fVar54 + fVar52 * fVar55 + fVar38 * fVar56;
  param_1[0x114] =
       fVar29 * local_1d8 + fVar45 * fStack_1d4 + fVar49 * fStack_1d0 + fVar44 * fStack_1cc;
  param_1[0x115] =
       fVar30 * local_1d8 + fVar46 * fStack_1d4 + fVar50 * fStack_1d0 + fVar42 * fStack_1cc;
  param_1[0x116] =
       fVar31 * local_1d8 + fVar47 * fStack_1d4 + fVar51 * fStack_1d0 + fVar37 * fStack_1cc;
  param_1[0x117] =
       fVar43 * local_1d8 + fVar48 * fStack_1d4 + fVar52 * fStack_1d0 + fVar38 * fStack_1cc;
  param_1[0x118] =
       fVar29 * local_1c8 + fVar45 * fStack_1c4 + fVar49 * fStack_1c0 + fVar44 * fStack_1bc;
  param_1[0x119] =
       fVar30 * local_1c8 + fVar46 * fStack_1c4 + fVar50 * fStack_1c0 + fVar42 * fStack_1bc;
  param_1[0x11a] =
       fVar31 * local_1c8 + fVar47 * fStack_1c4 + fVar51 * fStack_1c0 + fVar37 * fStack_1bc;
  param_1[0x11b] =
       fVar43 * local_1c8 + fVar48 * fStack_1c4 + fVar52 * fStack_1c0 + fVar38 * fStack_1bc;
  param_1[0x11c] =
       fVar29 * local_1b8 + fVar45 * fStack_1b4 + fVar49 * fStack_1b0 + fVar44 * fStack_1ac;
  param_1[0x11d] =
       fVar30 * local_1b8 + fVar46 * fStack_1b4 + fVar50 * fStack_1b0 + fVar42 * fStack_1ac;
  param_1[0x11e] =
       fVar31 * local_1b8 + fVar47 * fStack_1b4 + fVar51 * fStack_1b0 + fVar37 * fStack_1ac;
  param_1[0x11f] =
       fVar43 * local_1b8 + fVar48 * fStack_1b4 + fVar52 * fStack_1b0 + fVar38 * fStack_1ac;
  fVar29 = param_1[0x20];
  fVar30 = param_1[0x21];
  fVar31 = param_1[0x22];
  fVar43 = param_1[0x23];
  fVar45 = param_1[0x24];
  fVar46 = param_1[0x25];
  fVar47 = param_1[0x26];
  fVar48 = param_1[0x27];
  fVar49 = param_1[0x28];
  fVar50 = param_1[0x29];
  fVar51 = param_1[0x2a];
  fVar52 = param_1[0x2b];
  fVar44 = param_1[0x2c];
  fVar42 = param_1[0x2d];
  fVar37 = param_1[0x2e];
  fVar38 = param_1[0x2f];
  param_1[0x130] =
       fVar30 * local_2a8 + fVar29 * local_208 + fVar31 * (float)local_1a8 +
       fVar43 * (float)local_198;
  param_1[0x131] =
       fVar30 * fStack_2a4 + fVar29 * fStack_204 + fVar31 * local_1a8._4_4_ +
       fVar43 * local_198._4_4_;
  param_1[0x132] =
       fVar30 * fStack_2a0 + fVar29 * fStack_200 + fVar31 * (float)uStack_1a0 +
       fVar43 * (float)uStack_190;
  param_1[0x133] =
       fVar30 * fStack_29c + fVar29 * fStack_1fc + fVar31 * uStack_1a0._4_4_ +
       fVar43 * uStack_190._4_4_;
  param_1[0x134] =
       fVar46 * local_2a8 + fVar45 * local_208 + fVar47 * (float)local_1a8 +
       fVar48 * (float)local_198;
  param_1[0x135] =
       fVar46 * fStack_2a4 + fVar45 * fStack_204 + fVar47 * local_1a8._4_4_ +
       fVar48 * local_198._4_4_;
  param_1[0x136] =
       fVar46 * fStack_2a0 + fVar45 * fStack_200 + fVar47 * (float)uStack_1a0 +
       fVar48 * (float)uStack_190;
  param_1[0x137] =
       fVar46 * fStack_29c + fVar45 * fStack_1fc + fVar47 * uStack_1a0._4_4_ +
       fVar48 * uStack_190._4_4_;
  param_1[0x138] =
       fVar50 * local_2a8 + fVar49 * local_208 + fVar51 * (float)local_1a8 +
       fVar52 * (float)local_198;
  param_1[0x139] =
       fVar50 * fStack_2a4 + fVar49 * fStack_204 + fVar51 * local_1a8._4_4_ +
       fVar52 * local_198._4_4_;
  param_1[0x13a] =
       fVar50 * fStack_2a0 + fVar49 * fStack_200 + fVar51 * (float)uStack_1a0 +
       fVar52 * (float)uStack_190;
  param_1[0x13b] =
       fVar50 * fStack_29c + fVar49 * fStack_1fc + fVar51 * uStack_1a0._4_4_ +
       fVar52 * uStack_190._4_4_;
  param_1[0x13c] =
       fVar42 * local_2a8 + fVar44 * local_208 + fVar37 * (float)local_1a8 +
       fVar38 * (float)local_198;
  param_1[0x13d] =
       fVar42 * fStack_2a4 + fVar44 * fStack_204 + fVar37 * local_1a8._4_4_ +
       fVar38 * local_198._4_4_;
  param_1[0x13e] =
       fVar42 * fStack_2a0 + fVar44 * fStack_200 + fVar37 * (float)uStack_1a0 +
       fVar38 * (float)uStack_190;
  param_1[0x13f] =
       fVar42 * fStack_29c + fVar44 * fStack_1fc + fVar37 * uStack_1a0._4_4_ +
       fVar38 * uStack_190._4_4_;
  fVar29 = param_1[0x34];
  fVar30 = param_1[0x35];
  fVar31 = param_1[0x36];
  fVar43 = param_1[0x37];
  fVar45 = *pfVar1;
  fVar46 = param_1[0x31];
  fVar47 = param_1[0x32];
  fVar48 = param_1[0x33];
  fVar49 = param_1[0x38];
  fVar50 = param_1[0x39];
  fVar51 = param_1[0x3a];
  fVar52 = param_1[0x3b];
  fVar44 = param_1[0x3c];
  fVar42 = param_1[0x3d];
  fVar37 = param_1[0x3e];
  fVar38 = param_1[0x3f];
  param_1[0x120] = fVar45 * fVar53 + fVar29 * fVar54 + fVar49 * fVar55 + fVar44 * fVar56;
  param_1[0x121] = fVar46 * fVar53 + fVar30 * fVar54 + fVar50 * fVar55 + fVar42 * fVar56;
  param_1[0x122] = fVar47 * fVar53 + fVar31 * fVar54 + fVar51 * fVar55 + fVar37 * fVar56;
  param_1[0x123] = fVar48 * fVar53 + fVar43 * fVar54 + fVar52 * fVar55 + fVar38 * fVar56;
  param_1[0x124] =
       fVar45 * local_1d8 + fVar29 * fStack_1d4 + fVar49 * fStack_1d0 + fVar44 * fStack_1cc;
  param_1[0x125] =
       fVar46 * local_1d8 + fVar30 * fStack_1d4 + fVar50 * fStack_1d0 + fVar42 * fStack_1cc;
  param_1[0x126] =
       fVar47 * local_1d8 + fVar31 * fStack_1d4 + fVar51 * fStack_1d0 + fVar37 * fStack_1cc;
  param_1[0x127] =
       fVar48 * local_1d8 + fVar43 * fStack_1d4 + fVar52 * fStack_1d0 + fVar38 * fStack_1cc;
  param_1[0x128] =
       fVar45 * local_1c8 + fVar29 * fStack_1c4 + fVar49 * fStack_1c0 + fVar44 * fStack_1bc;
  param_1[0x129] =
       fVar46 * local_1c8 + fVar30 * fStack_1c4 + fVar50 * fStack_1c0 + fVar42 * fStack_1bc;
  param_1[0x12a] =
       fVar47 * local_1c8 + fVar31 * fStack_1c4 + fVar51 * fStack_1c0 + fVar37 * fStack_1bc;
  param_1[299] = fVar48 * local_1c8 + fVar43 * fStack_1c4 + fVar52 * fStack_1c0 +
                 fVar38 * fStack_1bc;
  param_1[300] = fVar45 * local_1b8 + fVar29 * fStack_1b4 + fVar49 * fStack_1b0 +
                 fVar44 * fStack_1ac;
  param_1[0x12d] =
       fVar46 * local_1b8 + fVar30 * fStack_1b4 + fVar50 * fStack_1b0 + fVar42 * fStack_1ac;
  param_1[0x12e] =
       fVar47 * local_1b8 + fVar31 * fStack_1b4 + fVar51 * fStack_1b0 + fVar37 * fStack_1ac;
  param_1[0x12f] =
       fVar48 * local_1b8 + fVar43 * fStack_1b4 + fVar52 * fStack_1b0 + fVar38 * fStack_1ac;
  fVar29 = param_1[0x40];
  fVar30 = param_1[0x41];
  fVar31 = param_1[0x42];
  fVar43 = param_1[0x43];
  fVar45 = param_1[0x44];
  fVar46 = param_1[0x45];
  fVar47 = param_1[0x46];
  fVar48 = param_1[0x47];
  fVar49 = param_1[0x48];
  fVar50 = param_1[0x49];
  fVar51 = param_1[0x4a];
  fVar52 = param_1[0x4b];
  fVar53 = param_1[0x4c];
  fVar54 = param_1[0x4d];
  fVar55 = param_1[0x4e];
  fVar56 = param_1[0x4f];
  param_1[0x140] =
       fVar30 * local_2a8 + fVar29 * local_208 + fVar31 * (float)local_1a8 +
       fVar43 * (float)local_198;
  param_1[0x141] =
       fVar30 * fStack_2a4 + fVar29 * fStack_204 + fVar31 * local_1a8._4_4_ +
       fVar43 * local_198._4_4_;
  param_1[0x142] =
       fVar30 * fStack_2a0 + fVar29 * fStack_200 + fVar31 * (float)uStack_1a0 +
       fVar43 * (float)uStack_190;
  param_1[0x143] =
       fVar30 * fStack_29c + fVar29 * fStack_1fc + fVar31 * uStack_1a0._4_4_ +
       fVar43 * uStack_190._4_4_;
  param_1[0x144] =
       fVar46 * local_2a8 + fVar45 * local_208 + fVar47 * (float)local_1a8 +
       fVar48 * (float)local_198;
  param_1[0x145] =
       fVar46 * fStack_2a4 + fVar45 * fStack_204 + fVar47 * local_1a8._4_4_ +
       fVar48 * local_198._4_4_;
  param_1[0x146] =
       fVar46 * fStack_2a0 + fVar45 * fStack_200 + fVar47 * (float)uStack_1a0 +
       fVar48 * (float)uStack_190;
  param_1[0x147] =
       fVar46 * fStack_29c + fVar45 * fStack_1fc + fVar47 * uStack_1a0._4_4_ +
       fVar48 * uStack_190._4_4_;
  param_1[0x148] =
       fVar50 * local_2a8 + fVar49 * local_208 + fVar51 * (float)local_1a8 +
       fVar52 * (float)local_198;
  param_1[0x149] =
       fVar50 * fStack_2a4 + fVar49 * fStack_204 + fVar51 * local_1a8._4_4_ +
       fVar52 * local_198._4_4_;
  param_1[0x14a] =
       fVar50 * fStack_2a0 + fVar49 * fStack_200 + fVar51 * (float)uStack_1a0 +
       fVar52 * (float)uStack_190;
  param_1[0x14b] =
       fVar50 * fStack_29c + fVar49 * fStack_1fc + fVar51 * uStack_1a0._4_4_ +
       fVar52 * uStack_190._4_4_;
  param_1[0x14c] =
       fVar54 * local_2a8 + fVar53 * local_208 + fVar55 * (float)local_1a8 +
       fVar56 * (float)local_198;
  param_1[0x14d] =
       fVar54 * fStack_2a4 + fVar53 * fStack_204 + fVar55 * local_1a8._4_4_ +
       fVar56 * local_198._4_4_;
  param_1[0x14e] =
       fVar54 * fStack_2a0 + fVar53 * fStack_200 + fVar55 * (float)uStack_1a0 +
       fVar56 * (float)uStack_190;
  param_1[0x14f] =
       fVar54 * fStack_29c + fVar53 * fStack_1fc + fVar55 * uStack_1a0._4_4_ +
       fVar56 * uStack_190._4_4_;
  if (*(int *)(param_2 + 0x33) == 0) {
    fVar29 = 1.0;
  }
  else {
    fVar29 = 2.0;
  }
  param_1[0x156] = ABS(*param_1) * fVar29;
  param_1[0x157] = ABS(param_1[5]);
  fVar30 = (float)(*(int *)((longlong)param_2 + 0x13c) - *(int *)((longlong)param_2 + 0x134)) * 0.5
           * ABS(param_1[5]);
  fVar29 = (float)(*(int *)(param_2 + 0x27) - *(int *)(param_2 + 0x26)) * 0.5 *
           ABS(*param_1) * fVar29;
  if (fVar30 <= fVar29) {
    fVar30 = fVar29;
  }
  param_1[0x15a] = fVar30;
  return param_1;
}



// FUNCTION 142745180 FUN_142745180 body=1443 status=ok
// SIG undefined FUN_142745180(void)

void * FUN_142745180(void *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8c4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x8f4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x904) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9cc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9dc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9ec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9f4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9fc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa04) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xa14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb54) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb64) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb74) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb7c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb84) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xbc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbcc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xbd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbdc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xbe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xbf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc04) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xc34) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xcc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xccc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xcf4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd04) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xd24) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd2c) = 0x3f800000;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xf30);
  if ((DAT_146ac3e30 == 0) || (lVar3 = *(longlong *)(DAT_146ac3e30 + 0x30), lVar3 == 0)) {
    lVar3 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  if ((DAT_146ac3e40 == 0) || (lVar2 = *(longlong *)(DAT_146ac3e40 + 0x30), lVar2 == 0)) {
    lVar2 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xd58) = uVar1;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)((longlong)param_1 + 0xd50) = uVar1;
  *(longlong *)((longlong)param_1 + 0xd60) = lVar2;
  *(longlong *)((longlong)param_1 + 0xd68) = lVar3;
  *(longlong *)((longlong)param_1 + 0xd70) = lVar3;
  *(longlong *)((longlong)param_1 + 0xd78) = lVar3;
  *(longlong *)((longlong)param_1 + 0xd80) = lVar3;
  *(longlong *)((longlong)param_1 + 0xd88) = lVar3;
  *(longlong *)((longlong)param_1 + 0xd90) = lVar3;
  *(longlong *)((longlong)param_1 + 0xd98) = lVar3;
  *(longlong *)((longlong)param_1 + 0xda0) = lVar3;
  *(longlong *)((longlong)param_1 + 0xda8) = lVar3;
  *(longlong *)((longlong)param_1 + 0xdb0) = lVar3;
  *(longlong *)((longlong)param_1 + 0xdb8) = lVar3;
  *(longlong *)((longlong)param_1 + 0xdc0) = lVar3;
  *(longlong *)((longlong)param_1 + 0xdc8) = lVar3;
  *(longlong *)((longlong)param_1 + 0xdd0) = lVar3;
  *(longlong *)((longlong)param_1 + 0xdd8) = lVar3;
  *(longlong *)((longlong)param_1 + 0xde0) = lVar3;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xde8) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xdf0) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xdf8) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe00) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe08) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe10) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe18) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe20) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe28) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xe70) = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe78) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xe80) = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe88) = uVar1;
  *(longlong *)((longlong)param_1 + 0xe90) = lVar3;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xe98) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xea0) = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  uVar1 = FUN_141ac0bb0();
  *(undefined8 *)((longlong)param_1 + 0xea8) = uVar1;
  *(longlong *)((longlong)param_1 + 0xeb0) = lVar3;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)((longlong)param_1 + 0xeb8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xec0) = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  *(longlong *)((longlong)param_1 + 0xe30) = lVar3;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)((longlong)param_1 + 0xe38) = uVar1;
  *(longlong *)((longlong)param_1 + 0xe40) = lVar3;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)((longlong)param_1 + 0xe48) = uVar1;
  *(longlong *)((longlong)param_1 + 0xe50) = lVar3;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)((longlong)param_1 + 0xe58) = uVar1;
  *(longlong *)((longlong)param_1 + 0xe60) = lVar3;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)((longlong)param_1 + 0xe68) = uVar1;
  uVar1 = FUN_141ac0bb0();
  *(undefined8 *)((longlong)param_1 + 0xec8) = uVar1;
  uVar1 = FUN_1404a0e20();
  *(undefined8 *)((longlong)param_1 + 0xed0) = uVar1;
  uVar1 = FUN_141b33a40();
  *(undefined8 *)((longlong)param_1 + 0xed8) = uVar1;
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xee0) = uVar1;
  uVar1 = FUN_141b33cc0();
  *(undefined8 *)((longlong)param_1 + 0xee8) = uVar1;
  uVar1 = FUN_141b33b80();
  *(undefined8 *)((longlong)param_1 + 0xef0) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xef8) = *(undefined8 *)(DAT_146ac3d68 + 0x30);
  uVar1 = FUN_141a156e0();
  *(undefined8 *)((longlong)param_1 + 0xf00) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xd20) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd28) = 0;
  if ((DAT_146ac3e20 == 0) || (lVar2 = *(longlong *)(DAT_146ac3e20 + 0x30), lVar2 == 0)) {
    lVar2 = *(longlong *)(DAT_146ac3e00 + 0x30);
  }
  *(longlong *)((longlong)param_1 + 0xf18) = lVar2;
  uVar1 = FUN_141b33b80();
  *(undefined8 *)((longlong)param_1 + 0xf20) = uVar1;
  *(longlong *)((longlong)param_1 + 0xf08) = lVar3;
  uVar1 = FUN_141b33b80();
  *(undefined8 *)((longlong)param_1 + 0xf10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xd40) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd48) = 0;
  return param_1;
}



// FUNCTION 142745730 FUN_142745730 body=47 status=ok
// SIG undefined FUN_142745730(void)

undefined8 * FUN_142745730(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  param_1[4] = param_3;
  uVar1 = param_2[2];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  lVar3 = *(longlong *)(param_3 + 0x50);
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 142745760 FUN_142745760 body=51 status=ok
// SIG undefined FUN_142745760(void)

undefined8 * FUN_142745760(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14519bdf8;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1427457a0 UMicroTransactionBase body=67 status=ok
// SIG undefined UMicroTransactionBase(void)

undefined8 * UMicroTransactionBase::UMicroTransactionBase(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14519c108;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 1427457f0 UPlatformInterfaceBase body=43 status=ok
// SIG undefined UPlatformInterfaceBase(void)

undefined8 * UPlatformInterfaceBase::UPlatformInterfaceBase(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14519bb70;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142745820 UPlatformInterfaceWebResponse body=110 status=ok
// SIG undefined UPlatformInterfaceWebResponse(void)

undefined8 * UPlatformInterfaceWebResponse::UPlatformInterfaceWebResponse(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14519c3b0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 142745890 USCS_Node body=186 status=ok
// SIG undefined USCS_Node(void)

undefined8 * USCS_Node::USCS_Node(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_14519c900;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return param_1;
}



// FUNCTION 142745950 FUN_142745950 body=63 status=ok
// SIG undefined FUN_142745950(void)

undefined8 * FUN_142745950(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14519af48;
  param_1[5] = &PTR_LAB_14519b1c0;
  return param_1;
}



// FUNCTION 142745990 USelection body=104 status=ok
// SIG undefined USelection(void)

undefined8 * USelection::USelection(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__14519cb78;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 142745a00 UInputVectorAxisDelegateBinding body=43 status=ok
// SIG undefined UInputVectorAxisDelegateBinding(void)

undefined8 * UInputVectorAxisDelegateBinding::UInputVectorAxisDelegateBinding(undefined8 *param_1)

{
  FUN_141781840();
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__14519c640;
  return param_1;
}



// FUNCTION 142745a30 FUN_142745a30 body=139 status=ok
// SIG undefined FUN_142745a30(void)

void FUN_142745a30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5d8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142745ac0 ~FRenderQueryPool body=299 status=ok
// SIG undefined ~FRenderQueryPool(void)

void FRenderQueryPool::~FRenderQueryPool(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  *param_1 = &PTR__scalar_deleting_destructor__144deb638;
  plVar8 = (longlong *)param_1[1];
  for (iVar7 = *(int *)(param_1 + 2); iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = (undefined8 *)*plVar8;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar9 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar9) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar9) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    plVar8 = plVar8 + 1;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 1,0);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 1);
  return;
}



// FUNCTION 142745bf0 FUN_142745bf0 body=376 status=ok
// SIG undefined FUN_142745bf0(void)

void FUN_142745bf0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_144e47de8;
  puVar3 = param_1 + 0x353;
  lVar2 = 2;
  do {
    plVar1 = puVar3 + -2;
    puVar3 = puVar3 + -2;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  if (param_1[0x349] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x345);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x344);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0x343);
  FUN_142745a30(param_1 + 0x248);
  if (param_1[0x22e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21a] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x20b) != '\0') {
    *(undefined1 *)(param_1 + 0x20b) = 0;
    *(undefined4 *)(param_1 + 0x20a) = 0;
    if (param_1[0x209] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_1 + 0x201);
  }
  *(undefined4 *)(param_1 + 0x200) = 0;
  if (param_1[0x1ff] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1f7);
  FUN_142745ea0(param_1 + 0x12);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xe);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xd);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc);
  puVar3 = param_1 + 0xb;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3);
  lVar2 = 4;
  do {
    puVar3 = puVar3 + -1;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar3);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 5);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 4);
  return;
}



// FUNCTION 142745d70 ~FSceneViewExtensionBase body=75 status=ok
// SIG undefined ~FSceneViewExtensionBase(void)

void FSceneViewExtensionBase::~FSceneViewExtensionBase(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144e927f8;
  plVar3 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_144e92790;
  return;
}



// FUNCTION 142745dc0 FUN_142745dc0 body=67 status=ok
// SIG undefined FUN_142745dc0(void)

void FUN_142745dc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x15];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142745e10 FUN_142745e10 body=136 status=ok
// SIG undefined FUN_142745e10(void)

void FUN_142745e10(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar3 + *param_1);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < (int)param_1[1]);
  }
  puVar1 = (undefined8 *)param_1[0x15];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x10);
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142745ea0 FUN_142745ea0 body=117 status=ok
// SIG undefined FUN_142745ea0(void)

void FUN_142745ea0(longlong param_1)

{
  if (*(char *)(param_1 + 0x248) != '\0') {
    *(undefined1 *)(param_1 + 0x248) = 0;
    *(undefined4 *)(param_1 + 0x240) = 0;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_1 + 0x1f8);
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1a8);
  return;
}



// FUNCTION 142745f20 ~FSceneViewStateReference body=96 status=ok
// SIG undefined ~FSceneViewStateReference(void)

void FSceneViewStateReference::~FSceneViewStateReference(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144a80b30;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 8) = param_1[3];
  }
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = param_1[2];
  }
  param_1[2] = 0;
  param_1[3] = 0;
  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[1])();
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 142745f80 ~FShaderMapFinalizeResults body=98 status=ok
// SIG undefined ~FShaderMapFinalizeResults(void)

void FShaderMapFinalizeResults::~FShaderMapFinalizeResults(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142745ff0 FUN_142745ff0 body=213 status=ok
// SIG undefined FUN_142745ff0(void)

void FUN_142745ff0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  *param_1 = &PTR_FUN_14519b3a8;
  if (0 < *(int *)(param_1 + 0x45)) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + param_1[0x44]) + 8))();
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x45));
  }
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>::
  ~TArray<FBatchedElements::FBatchedMeshElement,TInlineAllocator<2,FDefaultAllocator>_>
            (param_1 + 0x10);
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
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
  ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR_FUN_144deb640;
  return;
}



// FUNCTION 1427460d0 operator= body=465 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14274620d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_14274620d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1427462b0 FUN_1427462b0 body=1044 status=ok
// SIG undefined FUN_1427462b0(void)

undefined8 * FUN_1427462b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar5 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar5;
  uVar5 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar5;
  uVar5 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar5;
  uVar5 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar5;
  uVar5 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar5;
  uVar5 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar5;
  uVar5 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar5;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  uVar5 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar5;
  uVar5 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar5;
  uVar5 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x114);
  uVar3 = *(undefined4 *)(param_2 + 0x23);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar2;
  *(undefined4 *)(param_1 + 0x23) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  param_1[0x2c] = param_2[0x2c];
  uVar5 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar5;
  uVar5 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x18c);
  uVar3 = *(undefined4 *)(param_2 + 0x32);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x194);
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar2;
  *(undefined4 *)(param_1 + 0x32) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x194) = uVar4;
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(undefined4 *)((longlong)param_1 + 0x19c) = *(undefined4 *)((longlong)param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  if (param_1 + 0x35 != param_2 + 0x35) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 0x35,param_2 + 0x35);
    if (param_2[0x3d] == 0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 0x3c,param_2 + 0x3c,4);
    }
    if (param_1[0x3d] != 0) {
      FMemory::Free();
    }
    param_1[0x3d] = param_2[0x3d];
    param_2[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
    *(undefined4 *)(param_2 + 0x3e) = 0;
  }
  puVar1 = param_1 + 0x3f;
  if (param_2 + 0x3f != puVar1) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      *(undefined1 *)(param_1 + 0x49) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (param_1[0x47] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (puVar1);
    }
    if (*(char *)(param_2 + 0x49) != '\0') {
      *puVar1 = 0;
      param_1[0x40] = 0;
      param_1[0x43] = 0;
      param_1[0x44] = 0;
      *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
      param_1[0x47] = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::operator=(puVar1,param_2 + 0x3f);
      if (param_2[0x47] == 0) {
        _guard_xfg_dispatch_icall_nop(param_1 + 0x46,param_2 + 0x46,4);
      }
      if (param_1[0x47] != 0) {
        FMemory::Free();
      }
      param_1[0x47] = param_2[0x47];
      param_2[0x47] = 0;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(param_2 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x4a);
  *(undefined4 *)((longlong)param_1 + 0x254) = *(undefined4 *)((longlong)param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x4b) = *(undefined4 *)(param_2 + 0x4b);
  *(undefined4 *)((longlong)param_1 + 0x25c) = *(undefined4 *)((longlong)param_2 + 0x25c);
  param_1[0x4c] = param_2[0x4c];
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x4d);
  *(undefined1 *)((longlong)param_1 + 0x26c) = *(undefined1 *)((longlong)param_2 + 0x26c);
  *(undefined1 *)((longlong)param_1 + 0x26d) = *(undefined1 *)((longlong)param_2 + 0x26d);
  *(undefined4 *)(param_1 + 0x4e) = *(undefined4 *)(param_2 + 0x4e);
  *(undefined4 *)((longlong)param_1 + 0x274) = *(undefined4 *)((longlong)param_2 + 0x274);
  param_1[0x4f] = param_2[0x4f];
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x284) = *(undefined4 *)((longlong)param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x51) = *(undefined4 *)(param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)param_2 + 0x28c);
  uVar5 = param_2[0x53];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = uVar5;
  uVar5 = param_2[0x55];
  param_1[0x54] = param_2[0x54];
  param_1[0x55] = uVar5;
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)(param_2 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x2b1) = *(undefined1 *)((longlong)param_2 + 0x2b1);
  *(undefined1 *)((longlong)param_1 + 0x2b2) = *(undefined1 *)((longlong)param_2 + 0x2b2);
  return param_1;
}



// FUNCTION 1427466d0 FUN_1427466d0 body=407 status=ok
// SIG undefined FUN_1427466d0(void)

longlong * FUN_1427466d0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  puVar6 = (undefined4 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x200000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        (**(code **)(*param_1 + 0x10))(param_1,*param_2 + (longlong)(int)puVar6 * 8);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined4 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar1 = (undefined4 *)(*param_2 + (longlong)iVar3 * 8);
    puVar5 = puVar6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
      puVar5 = puVar1;
    }
    (**(code **)(*param_1 + 0x10))(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined4 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 142746870 operator() body=135 status=ok
// SIG undefined operator()(void)

void <lambda_b57baae06d9bf48e4386f7d6848b0f3e>::operator()(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  puVar1 = *(undefined8 **)(*(longlong *)*param_1 + (longlong)param_2 * 8);
  if (*(int *)(puVar1 + 8) != 0) {
    plVar3 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar3 = puVar1 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 8))();
    }
  }
  (*(code *)*puVar1)(uVar2);
  if (*(int *)(puVar1 + 8) != 0) {
    plVar3 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar3 = puVar1 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (puVar1[6] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142746910 FUN_142746910 body=203 status=ok
// SIG undefined FUN_142746910(void)

undefined8 * FUN_142746910(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14519cdf0;
  FUN_1419ec0f0();
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 7,0);
  if (param_1[0xb] != 0) {
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1427469e0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAccelerationDrag::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_1426f6380(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142746a30 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FSharedSamplerState::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x30);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142746a70 FUN_142746a70 body=141 status=ok
// SIG undefined FUN_142746a70(void)

undefined8 * FUN_142746a70(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = &PTR_FUN_14519b3a8;
  if (0 < *(int *)(param_1 + 0x45)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + param_1[0x44]) + 8))();
      iVar2 = iVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x45));
  }
  FUN_141d5b530(param_1 + 2);
  *param_1 = &PTR_FUN_144deb640;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 142746b00 FUN_142746b00 body=43 status=ok
// SIG undefined FUN_142746b00(void)

undefined8 * FUN_142746b00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fce298;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142746b30 `scalar_deleting_destructor' body=176 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCloudStorageBase::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x38);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142746be0 `scalar_deleting_destructor' body=170 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMicroTransactionBase::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  TArray<FPIELoginSettingsInternal,FDefaultAllocator>::
  ~TArray<FPIELoginSettingsInternal,FDefaultAllocator>(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142746c90 `scalar_deleting_destructor' body=177 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPlatformInterfaceWebResponse::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142746d50 FUN_142746d50 body=134 status=ok
// SIG undefined FUN_142746d50(void)

longlong FUN_142746d50(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x100);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
  ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 142746de0 FUN_142746de0 body=102 status=ok
// SIG undefined FUN_142746de0(void)

longlong FUN_142746de0(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *puVar1 = &PTR_FUN_144f9f050;
  if (DAT_146b17190 == puVar1) {
    DAT_146b17190 = (undefined8 *)0x0;
  }
  *puVar1 = &PTR_FUN_144f9ee70;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142746e50 `scalar_deleting_destructor' body=113 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USelection::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 142746ed0 AddAnnotation body=186 status=ok
// SIG undefined AddAnnotation(void)

void FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
               (longlong param_1,undefined8 param_2,char param_3)

{
  BOOL BVar1;
  undefined1 local_res18 [8];
  undefined8 *local_28;
  char *local_20;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(char *)(param_1 + 0x88) = param_3;
  if (param_3 == '\0') {
    NotifyUObjectDeleted(param_1,param_2);
  }
  else {
    if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
      FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,param_1);
    }
    local_28 = (undefined8 *)(param_1 + 0x80);
    local_20 = (char *)(param_1 + 0x88);
    FUN_141f32430(param_1 + 8,local_res18,&local_28,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142746f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 142746f90 AddDelegate body=238 status=ok
// SIG undefined AddDelegate(void)

void UPlatformInterfaceBase::AddDelegate(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x30) < param_2 + 1) &&
     (iVar5 = 0, 0 < (param_2 - *(int *)(param_1 + 0x30)) + 1)) {
    do {
      iVar1 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar1 + 1;
      if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
      }
      iVar5 = iVar5 + 1;
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
      *puVar2 = 0;
      puVar2[1] = 0;
    } while (iVar5 < (param_2 - *(int *)(param_1 + 0x30)) + 1);
  }
  iVar5 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find
                    (*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x10,param_3);
  if (iVar5 == -1) {
    plVar4 = (longlong *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x28));
    iVar5 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar5 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar5);
    }
    puVar3 = (undefined4 *)((longlong)iVar5 * 0x10 + *plVar4);
    *puVar3 = *param_3;
    puVar3[1] = param_3[1];
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_3 + 2);
  }
  return;
}



// FUNCTION 142747080 FUN_142747080 body=685 status=ok
// SIG undefined FUN_142747080(void)

void FUN_142747080(longlong param_1,longlong *param_2,undefined1 param_3,char param_4,
                  undefined1 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  size_t _Size;
  undefined1 uVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  void *_Src;
  int iVar9;
  undefined1 uVar10;
  int local_res8 [2];
  int *local_res10;
  undefined1 local_res18;
  int local_res20 [2];
  
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,param_4);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
  local_res18 = param_3;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_4 == '\0') {
    iVar9 = (int)param_2[1];
    uVar10 = 0;
    iVar4 = 0;
    if (iVar9 != 0) {
      iVar4 = *(int *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x14) < iVar4 + iVar9) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8);
        iVar4 = *(int *)(param_1 + 0x10);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8),(void *)*param_2,
                 (longlong)iVar9 << 3);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar9;
      iVar4 = (int)param_2[1];
    }
  }
  else {
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      plVar7 = *(longlong **)(param_1 + 8);
      lVar8 = 0;
      do {
        if (*(char *)(*plVar7 + 0x16) == '\0') break;
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 1;
        plVar7 = plVar7 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x10));
    }
    lVar8 = param_2[1];
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = (int)lVar8 + iVar4;
    *(int *)(param_1 + 0x10) = iVar3;
    if (*(int *)(param_1 + 0x14) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar4);
    }
    _Size = (longlong)(int)lVar8 * 8;
    lVar8 = (longlong)iVar9 * 8;
    _Src = (void *)(*(longlong *)(param_1 + 8) + lVar8);
    _guard_xfg_dispatch_icall_nop
              ((void *)(_Size + (longlong)_Src),_Src,(longlong)(iVar4 - iVar9) << 3);
    _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(param_1 + 8) + lVar8),0,_Size);
    iVar4 = (int)param_2[1];
    iVar9 = 0;
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        iVar9 = iVar9 + 1;
        *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar8 + -8 + lVar5 + 8) =
             *(undefined8 *)(lVar5 + *param_2);
        iVar4 = (int)param_2[1];
        lVar5 = lVar5 + 8;
      } while (iVar9 < iVar4);
    }
    uVar10 = (undefined1)local_res20[0];
  }
  uVar1 = local_res18;
  LOCK();
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + iVar4;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + (int)param_2[1];
  UNLOCK();
  iVar9 = 0;
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    do {
      *(undefined1 *)(*(longlong *)(*param_2 + lVar8) + 0x16) = uVar10;
      local_res20[0] = *(int *)(*(longlong *)(*param_2 + lVar8) + 0x10);
      if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
        lVar5 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar5 = param_1 + 0x50;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x60) - 1U & (longlong)local_res20[0]
                                 ) * 4);
        if (iVar4 != -1) {
          do {
            lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x28;
            if (*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x28) == local_res20[0])
            {
              if ((iVar4 != -1) && (lVar5 != 0)) goto LAB_1427472d5;
              break;
            }
            iVar4 = *(int *)(lVar5 + 0x20);
          } while (iVar4 != -1);
        }
      }
      local_res10 = local_res20;
      FUN_14273fad0(param_1 + 0x18,local_res8,&local_res10,0);
      lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)local_res8[0] * 0x28;
LAB_1427472d5:
      *(undefined1 *)(lVar5 + 0xd) = uVar1;
      *(undefined1 *)(lVar5 + 0xe) = param_5;
      lVar6 = (**(code **)(**(longlong **)(lVar8 + *param_2) + 0x20))();
      if (lVar6 == 0) {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      }
      else {
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + *(int *)(lVar6 + 0x20);
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar9 < (int)param_2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x000142747326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142747330 FUN_142747330 body=629 status=ok
// SIG undefined FUN_142747330(void)

void FUN_142747330(longlong param_1,int param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  ulonglong uVar9;
  
  lVar13 = (longlong)*(int *)(param_3 + 0x80);
  uVar6 = 0;
  if (0 < lVar13) {
    lVar11 = *(longlong *)(param_3 + 0x78);
    if (*(longlong *)(param_3 + 0x78) == 0) {
      lVar11 = param_3;
    }
    piVar12 = (int *)(lVar11 + 0x38);
    uVar7 = uVar6;
    do {
      if ((*(char *)((longlong)piVar12 + 0x31) == '\0') ||
         (lVar11 = *(longlong *)(piVar12 + -8), lVar11 == 0)) {
        piVar5 = *(int **)(piVar12 + -2);
        if (*(int **)(piVar12 + -2) == (int *)0x0) {
          piVar5 = piVar12 + -4;
        }
        piVar1 = piVar5 + (longlong)*piVar12 * 2;
        uVar10 = uVar6;
        for (; piVar5 != piVar1; piVar5 = piVar5 + 2) {
          uVar10 = (ulonglong)(uint)((int)uVar10 + piVar5[1]);
        }
        uVar7 = (ulonglong)(uint)((int)uVar7 + piVar12[2] * (int)uVar10);
      }
      else if (piVar12[2] != 0) {
        piVar5 = *(int **)(piVar12 + -2);
        if (*(int **)(piVar12 + -2) == (int *)0x0) {
          piVar5 = piVar12 + -4;
        }
        uVar10 = uVar6;
        piVar1 = piVar5;
        uVar9 = uVar6;
        do {
          for (; piVar1 != piVar5 + (longlong)*piVar12 * 2; piVar1 = piVar1 + 2) {
            uVar10 = (ulonglong)(uint)((int)uVar10 + piVar1[1]);
          }
          uVar3 = (int)uVar9 * 2;
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar7 = (ulonglong)
                  (uint)((int)uVar7 +
                        ((*(int *)(lVar11 + (ulonglong)(uVar3 + 1) * 4) -
                         *(int *)(lVar11 + (ulonglong)uVar3 * 4)) + 1) * (int)uVar10);
          uVar10 = uVar6;
          piVar1 = piVar5;
        } while (uVar8 < (uint)piVar12[2]);
      }
      piVar12 = piVar12 + 0x1e;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if ((int)uVar7 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x170))(*(longlong **)(param_1 + 0xd8),param_3)
      ;
      if (param_2 == -1) {
        if (*(int *)(param_1 + 0x70) < 1) {
          return;
        }
        plVar4 = *(longlong **)(param_1 + 0x68);
        if (*(longlong **)(param_1 + 0x68) == (longlong *)0x0) {
          plVar4 = (longlong *)(param_1 + 0x58);
        }
        if (*plVar4 == 0) {
          return;
        }
        lVar13 = operator_new<FKilledEnemyCall,FDefaultAllocator>(0x18);
      }
      else {
        AK::MemoryMgr::StartProfileThreadUsage((long)*(undefined8 *)(param_1 + 0xd8));
        if (0 < *(int *)(param_3 + 0x80)) {
          lVar13 = *(longlong *)(param_3 + 0x78);
          if (*(longlong *)(param_3 + 0x78) == 0) {
            lVar13 = param_3;
          }
          plVar4 = (longlong *)(lVar13 + 0x10);
          do {
            if ((*plVar4 != 0) && (*(longlong *)(*plVar4 + 0x30) == 0)) {
              return;
            }
            uVar6 = uVar6 + 1;
            plVar4 = plVar4 + 0xf;
          } while ((longlong)uVar6 < (longlong)*(int *)(param_3 + 0x80));
        }
        if ((*(uint *)(param_3 + 0x8c) & 0x200) == 0) {
          lVar13 = *(longlong *)(param_1 + 0x28);
          if (*(longlong *)(param_1 + 0x28) == 0) {
            lVar13 = param_1 + 0x18;
          }
          plVar4 = *(longlong **)(lVar13 + (longlong)param_2 * 8);
        }
        else {
          if (*(int *)(param_1 + 0x50) <= param_2) {
            return;
          }
          lVar13 = *(longlong *)(param_1 + 0x48);
          if (*(longlong *)(param_1 + 0x48) == 0) {
            lVar13 = param_1 + 0x38;
          }
          plVar4 = *(longlong **)(lVar13 + (longlong)param_2 * 8);
          if (plVar4 == (longlong *)0x0) {
            return;
          }
        }
        iVar2 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar2 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
          FUN_14275b460(plVar4,iVar2);
        }
        lVar13 = *plVar4 + (longlong)iVar2 * 0x18;
      }
      if (lVar13 != 0) {
        FUN_142741170(lVar13,param_3,*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0)
                     );
      }
    }
  }
  return;
}



// FUNCTION 1427475b0 Allocate body=104 status=ok
// SIG undefined Allocate(void)

void FSceneViewStateReference::Allocate(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)GetRendererModule();
  uVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = uVar2;
  plVar1 = (longlong *)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x20) = param_1;
  if (DAT_146b0a158 != (longlong *)0x0) {
    *(longlong **)((longlong)DAT_146b0a158 + 8) = plVar1;
  }
  *plVar1 = (longlong)DAT_146b0a158;
  *(longlong ***)(param_1 + 0x18) = &DAT_146b0a158;
  DAT_146b0a158 = plVar1;
  return;
}



// FUNCTION 142747620 AllocateAll body=64 status=ok
// SIG undefined AllocateAll(void)

void FSceneViewStateReference::AllocateAll(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  for (puVar2 = DAT_146b0a158; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    lVar1 = puVar2[2];
    plVar3 = (longlong *)GetRendererModule();
    uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3);
    *(undefined8 *)(lVar1 + 8) = uVar4;
  }
  return;
}



// FUNCTION 142747660 FUN_142747660 body=114 status=ok
// SIG undefined FUN_142747660(void)

undefined8 * FUN_142747660(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    (**(code **)(*DAT_146ab6358 + 0x670))
              (DAT_146ab6358,param_2,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x18));
    return param_2;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  *param_2 = *(undefined8 *)(lVar2 + -8 + (longlong)iVar1 * 8);
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8 + -8) = 0;
  TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
            ((longlong *)(param_1 + 8),*(int *)(param_1 + 0x10) + -1,1);
  return param_2;
}



// FUNCTION 1427476e0 FUN_1427476e0 body=413 status=ok
// SIG undefined FUN_1427476e0(void)

ulonglong FUN_1427476e0(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  bool bVar6;
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b0a280) && (_Init_thread_header(&DAT_146b0a280), DAT_146b0a280 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a278 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PostProcessing.PropagateAlpha");
    _Init_thread_footer(&DAT_146b0a280);
  }
  if (DAT_146b0a278 == (longlong *)0x0) {
    bVar6 = false;
  }
  else {
    iVar3 = (**(code **)(*DAT_146b0a278 + 0x68))();
    bVar6 = iVar3 != 0;
  }
  if ((*piVar5 < DAT_146b0a290) && (_Init_thread_header(&DAT_146b0a290), DAT_146b0a290 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a288 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileMSAA");
    _Init_thread_footer(&DAT_146b0a290);
  }
  if (DAT_146b0a288 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar3 = (**(code **)(*DAT_146b0a288 + 0x68))();
    bVar2 = 1 < iVar3;
  }
  uVar4 = DAT_146b09ac8;
  if (*(int *)(DAT_146b09ac8 + 4) != 0) {
    iVar3 = DAT_1464c9c14;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 8);
    }
    if ((1 < iVar3) || ((uVar4 = FUN_142753a10(), (char)uVar4 != '\0' && (!bVar2)))) {
      uVar1 = *(uint *)(param_1 + 0x28);
      uVar4 = (ulonglong)uVar1;
      if (((uVar1 & 1) != 0) && (((uVar1 >> 0x17 & 1) != 0 && (!bVar6)))) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142747880 Begin body=169 status=ok
// SIG undefined Begin(void)

void FScopedGPUStatEvent::Begin
               (undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (((DAT_146ab62df != '\0') && (*(int *)(DAT_146b095b0 + 4) != 0)) &&
     (*(int *)(DAT_146b095e0 + 4) != 0)) {
    uVar2 = FUN_14168db40();
    cVar1 = FTextFilterExpressionEvaluator::GetFilterType(uVar2);
    if ((cVar1 != '\0') && (param_2 == &DAT_146ab6e78)) {
      *param_1 = &DAT_146ab6e78;
      plVar3 = (longlong *)FRealtimeGPUProfiler::Get();
      if (((char)plVar3[5] == '\0') &&
         ((*(char *)((longlong)plVar3 + 0x29) != '\0' && (-1 < (int)plVar3[2])))) {
        FUN_142759d70(*(undefined8 *)(*plVar3 + (longlong)(int)plVar3[2] * 8),&DAT_146ab6e78,param_3
                      ,param_4);
      }
    }
  }
  return;
}



// FUNCTION 142747930 FUN_142747930 body=363 status=ok
// SIG undefined FUN_142747930(void)

longlong FUN_142747930(longlong param_1,undefined4 param_2,uint param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  uint local_res8;
  undefined4 local_resc;
  uint local_res10;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  lVar1 = operator_new(0x448);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14257e870(lVar1,0,0,param_1,CONCAT44(uVar2,param_2));
  }
  local_res8 = param_3;
  local_resc = param_2;
  (**(code **)(param_1 + 0x148))(&local_res8,lVar1 + 0xb8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b0a76c) {
    _Init_thread_header(&DAT_146b0a76c);
    if (DAT_146b0a76c == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146534d18,0);
      FGenericPlatformString::Memcpy(DAT_146534d18,L"Global",0xe);
      atexit((_func_5014 *)&LAB_143eb9bc0);
      _Init_thread_footer(&DAT_146b0a76c);
    }
  }
  FUN_14274fcf0(&DAT_146534d18,0,param_1,param_4,*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),
                *(uint *)(param_1 + 0x30) & 7 | (param_3 & 0x1f) << 3 | local_res10 & 0xffffff00,
                lVar1,param_5,1,0);
  return lVar1;
}



// FUNCTION 142747aa0 FUN_142747aa0 body=55 status=ok
// SIG undefined FUN_142747aa0(void)

void FUN_142747aa0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x458);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x458) = 0;
  }
  FUN_1422235f0(param_1);
  return;
}



// FUNCTION 142747ae0 BeginDestroy body=62 status=ok
// SIG undefined BeginDestroy(void)

void USelection::BeginDestroy(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_1417502d0();
  if (*(char *)(param_1 + 0x98) != '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  return;
}



// FUNCTION 142747b20 BeginFrame body=5 status=ok
// SIG undefined BeginFrame(void)

void FRealtimeGPUProfiler::BeginFrame(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x29) = 1;
  return;
}



// FUNCTION 142747b30 FUN_142747b30 body=1311 status=ok
// SIG undefined FUN_142747b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142747b30(longlong param_1,longlong *param_2,undefined8 param_3)

{
  void *pvVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  uint local_118;
  int local_114;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  uint *local_f0;
  longlong *local_e8;
  LPCRITICAL_SECTION local_e0;
  longlong local_d8;
  uint local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  void *local_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  longlong local_a8 [4];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_108 = param_2;
  local_100 = param_3;
  local_d8 = param_1;
  if (*(char *)(param_1 + 0x101) != '\0') {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x70);
    puVar9 = (uint *)0x0;
    local_e0 = lpCriticalSection;
    do {
      lVar5 = *(longlong *)(param_1 + 0xe8);
      if (*(char *)(lVar5 + 0x28) != '\0') {
        DAT_1468c2174 = 0;
        if (*(int *)(lVar5 + 0x20) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = *(undefined2 **)(lVar5 + 0x18);
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0x3f8,L"Shader Compiling thread exception:\r\n%s",puVar10);
        if (*(int *)(lVar5 + 0x20) == 0) {
          local_128 = &DAT_143f3eda8;
        }
        else {
          local_128 = *(undefined2 **)(lVar5 + 0x18);
        }
        FDebug::AssertFailed
                  (&DAT_145189b06,"Unknown",0x3f8,L"Shader Compiling thread exception:\r\n%s");
      }
      local_118 = 0;
      BVar2 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar2 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      local_114 = 0;
      uVar14 = 0;
      if (0 < (int)param_2[1]) {
        plVar15 = (longlong *)(param_1 + 0x18);
        puVar8 = puVar9;
        puVar12 = puVar9;
        local_e8 = plVar15;
        do {
          if ((int)plVar15[1] != *(int *)((longlong)plVar15 + 0x34)) {
            plVar4 = (longlong *)plVar15[8];
            if ((longlong *)plVar15[8] == (longlong *)0x0) {
              plVar4 = plVar15 + 7;
            }
            uVar14 = *(uint *)((longlong)plVar4 +
                              ((longlong)(int)plVar15[9] - 1U &
                              (longlong)*(int *)((longlong)puVar8 + *param_2)) * 4);
            if (uVar14 != 0xffffffff) {
              do {
                puVar6 = (uint *)(*plVar15 + (longlong)(int)uVar14 * 0x28);
                if (*(int *)(*plVar15 + (longlong)(int)uVar14 * 0x28) ==
                    *(int *)((longlong)puVar8 + *param_2)) {
                  if (uVar14 != 0xffffffff) goto LAB_142747cb3;
                  break;
                }
                uVar14 = puVar6[8];
              } while (uVar14 != 0xffffffff);
            }
          }
          puVar6 = puVar9;
LAB_142747cb3:
          puVar7 = puVar6 + 2;
          if (puVar6 == (uint *)0x0) {
            puVar7 = puVar9;
          }
          if (puVar7 != (uint *)0x0) {
            uVar14 = puVar7[4];
            puVar12 = puVar9;
            puVar6 = puVar9;
            puVar16 = puVar9;
            uVar13 = 0;
            if (0 < (int)uVar14) {
              do {
                lVar5 = (**(code **)(**(longlong **)((longlong)puVar16 + *(longlong *)(puVar7 + 2))
                                    + 0x20))();
                if (lVar5 == 0) {
                  iVar3 = 1;
                }
                else {
                  iVar3 = *(int *)(lVar5 + 0x20);
                }
                uVar14 = puVar7[4];
                uVar13 = (int)puVar6 + iVar3;
                uVar11 = (int)puVar12 + 1;
                puVar12 = (uint *)(ulonglong)uVar11;
                puVar6 = (uint *)(ulonglong)uVar13;
                plVar15 = local_e8;
                puVar16 = puVar16 + 2;
              } while ((int)uVar11 < (int)uVar14);
            }
            uVar11 = *puVar7;
            if (uVar13 == uVar11) {
              local_c4 = (undefined1)puVar7[1];
              local_c3 = *(undefined1 *)((longlong)puVar7 + 5);
              local_c2 = *(undefined1 *)((longlong)puVar7 + 6);
              pvVar1 = *(void **)(puVar7 + 2);
              local_c0 = (void *)0x0;
              local_c8 = uVar11;
              local_b8 = uVar14;
              if (uVar14 == 0) {
                local_b4 = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                          (&local_c0,uVar14,0);
                _guard_xfg_dispatch_icall_nop(local_c0,pvVar1,(longlong)(int)uVar14 << 3);
              }
              param_2 = local_108;
              local_b0 = 0;
              local_a8[0] = 0;
              local_a8[1] = 0;
              local_88 = 0;
              local_80 = 0;
              local_f8 = *local_108 + (longlong)local_114 * 4;
              local_78 = 0xffffffff;
              local_f0 = &local_c8;
              local_74 = 0;
              local_68 = 0;
              local_60 = 0;
              TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>_>
                        (local_100,local_110,&local_f8,0);
              local_60 = 0;
              if (local_68 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::Empty(local_a8,0);
              if (local_88 != 0) {
                FMemory::Free();
              }
              if (local_a8[0] != 0) {
                FMemory::Free();
              }
              if (local_c0 != (void *)0x0) {
                FMemory::Free();
              }
              TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
              ::Remove(plVar15,*(undefined4 *)(*param_2 + (longlong)puVar8));
              puVar12 = (uint *)(ulonglong)local_118;
            }
            else {
              local_118 = local_118 + uVar11;
              puVar12 = (uint *)(ulonglong)local_118;
              param_2 = local_108;
            }
          }
          uVar14 = (uint)puVar12;
          puVar8 = puVar8 + 1;
          local_114 = local_114 + 1;
          lpCriticalSection = local_e0;
          param_1 = local_d8;
        } while (local_114 < (int)param_2[1]);
      }
      LeaveCriticalSection(lpCriticalSection);
      if ((int)uVar14 < 1) {
        return;
      }
      FUN_1416b1760(0x3c23d70a);
    } while( true );
  }
  do {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x30))();
  } while (0 < iVar3);
  puVar9 = (uint *)0x0;
  if (0 < (int)param_2[1]) {
    puVar8 = puVar9;
    puVar12 = puVar9;
    do {
      if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
        lVar5 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar5 = param_1 + 0x50;
        }
        uVar14 = *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x60) - 1U &
                                   (longlong)*(int *)((longlong)puVar12 + *param_2)) * 4);
        if (uVar14 != 0xffffffff) {
          lVar5 = *(longlong *)(param_1 + 0x18);
          do {
            puVar6 = (uint *)(lVar5 + (longlong)(int)uVar14 * 0x28);
            if (*(int *)(lVar5 + (longlong)(int)uVar14 * 0x28) ==
                *(int *)((longlong)puVar12 + *param_2)) {
              if (uVar14 != 0xffffffff) goto LAB_142747f04;
              break;
            }
            uVar14 = puVar6[8];
          } while (uVar14 != 0xffffffff);
        }
      }
      puVar6 = puVar9;
LAB_142747f04:
      puVar7 = puVar6 + 2;
      if (puVar6 == (uint *)0x0) {
        puVar7 = puVar9;
      }
      if (puVar7 != (uint *)0x0) {
        local_c8 = *puVar7;
        local_b8 = puVar7[4];
        lVar5 = (longlong)(int)local_b8;
        pvVar1 = *(void **)(puVar7 + 2);
        local_c4 = (undefined1)puVar7[1];
        local_c3 = *(undefined1 *)((longlong)puVar7 + 5);
        local_c2 = *(undefined1 *)((longlong)puVar7 + 6);
        local_c0 = (void *)0x0;
        if (local_b8 == 0) {
          local_b4 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_c0,local_b8,0);
          _guard_xfg_dispatch_icall_nop(local_c0,pvVar1,lVar5 << 3);
        }
        local_b0 = 0;
        local_a8[0] = 0;
        local_a8[1] = 0;
        local_f8 = *param_2 + (longlong)(int)puVar8 * 4;
        local_88 = 0;
        local_f0 = &local_c8;
        local_80 = 0;
        local_78 = 0xffffffff;
        local_74 = 0;
        local_68 = 0;
        local_60 = 0;
        TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>_>
                  (local_100,local_110,&local_f8,0);
        local_60 = 0;
        if (local_68 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(local_a8,0);
        if (local_88 != 0) {
          FMemory::Free();
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        if (local_c0 != (void *)0x0) {
          FMemory::Free();
        }
        TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
        ::Remove((longlong *)(param_1 + 0x18),*(undefined4 *)(*param_2 + (longlong)puVar12));
      }
      uVar14 = (int)puVar8 + 1;
      puVar8 = (uint *)(ulonglong)uVar14;
      puVar12 = puVar12 + 1;
    } while ((int)uVar14 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142748070 FUN_142748070 body=462 status=ok
// SIG undefined FUN_142748070(void)

void FUN_142748070(longlong param_1,int param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_78;
  uint local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  longlong local_48 [4];
  
  if (param_2 < *(int *)(param_1 + 0x30)) {
    lVar8 = 0;
    plVar1 = (longlong *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x28));
    local_78 = 0;
    uVar5 = *(uint *)(plVar1 + 1);
    lVar7 = *plVar1;
    local_70 = uVar5;
    if (uVar5 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_78,uVar5,0);
      lVar8 = local_78;
      lVar7 = lVar7 - local_78;
      puVar4 = (undefined8 *)(local_78 + 8);
      do {
        *(undefined4 *)(puVar4 + -1) = *(undefined4 *)(lVar7 + -8 + (longlong)puVar4);
        *(undefined4 *)((longlong)puVar4 + -4) = *(undefined4 *)(lVar7 + -4 + (longlong)puVar4);
        *puVar4 = *(undefined8 *)(lVar7 + (longlong)puVar4);
        puVar4 = puVar4 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      if (0 < (int)local_70) {
        plVar1 = (longlong *)(local_78 + 8);
        uVar6 = (ulonglong)local_70;
        do {
          if ((*plVar1 == 0) || (lVar7 = FWeakObjectPtr::Get(plVar1 + -1), lVar7 == 0)) {
            bVar9 = false;
          }
          else {
            lVar7 = UObject::FindFunction(lVar7,*plVar1);
            bVar9 = lVar7 != 0;
          }
          if (bVar9) {
            local_68[0] = *param_3;
            local_50 = *(undefined4 *)(param_3 + 0x18);
            local_60 = *(undefined8 *)(param_3 + 8);
            local_58 = param_3[0x10];
            local_54 = *(undefined4 *)(param_3 + 0x14);
            local_48[0] = 0;
            local_48[1] = 0;
            local_48[2] = 0;
            FString::operator=(local_48,param_3 + 0x20);
            local_48[2] = *(longlong *)(param_3 + 0x30);
            plVar2 = (longlong *)FWeakObjectPtr::Get(plVar1 + -1);
            uVar3 = FUN_14178ac60(plVar2,*plVar1);
            (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,local_68);
            if (local_48[0] != 0) {
              FMemory::Free();
            }
          }
          plVar1 = plVar1 + 2;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return;
}



// FUNCTION 142748240 FUN_142748240 body=131 status=ok
// SIG undefined FUN_142748240(void)

void FUN_142748240(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    DAT_1468c2174 = 0;
    puVar1 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x20) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = *(undefined2 **)(param_1 + 0x18);
    }
    LowLevelFatalErrorHandler("Unknown",0x3f8,L"Shader Compiling thread exception:\r\n%s",puVar2);
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar1 = *(undefined2 **)(param_1 + 0x18);
    }
    FDebug::AssertFailed
              (&DAT_145189b06,"Unknown",0x3f8,L"Shader Compiling thread exception:\r\n%s",puVar1);
  }
  return;
}



// FUNCTION 1427482d0 CheckSingleJob body=329 status=ok
// SIG undefined CheckSingleJob(void)

char CheckSingleJob(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  longlong local_18 [2];
  ulonglong uVar6;
  
  uVar4 = 0;
  if (((DAT_146b09448 != 0) || (*(char *)(param_1 + 0x15) == '\0')) &&
     (uVar6 = uVar4, 0 < *(int *)(param_1 + 0x380))) {
    do {
      uVar3 = FShaderCompilerError::GetErrorString
                        ((longlong)(int)uVar6 * 0x30 + *(longlong *)(param_1 + 0x378),local_18);
      TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(param_3,uVar3);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x380));
  }
  uVar6 = *(ulonglong *)(param_1 + 0x20);
  cVar2 = *(char *)(param_1 + 0x15);
  if (uVar6 != 0) {
    iVar1 = *(int *)(uVar6 + 8);
    uVar7 = uVar4;
    if (iVar1 == 1) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0) {
      uVar7 = uVar4;
      if (iVar1 == 2) {
        uVar7 = uVar6;
      }
      if (uVar7 == 0) {
        if (iVar1 == 0) {
          uVar4 = uVar6;
        }
        if (uVar4 == 0) {
          return cVar2;
        }
        if (cVar2 == '\0') {
          return '\0';
        }
        cVar2 = (**(code **)(uVar4 + 0x140))
                          (*(uint *)(param_1 + 0x30) >> 3 & 0x1f,param_1 + 0x328,param_3);
      }
      else {
        if (cVar2 == '\0') {
          return '\0';
        }
        cVar2 = (**(code **)(uVar7 + 0x140))
                          (*(uint *)(param_1 + 0x30) >> 3 & 0x1f,param_2,
                           *(undefined8 *)(param_1 + 0x18),param_1 + 0x328,param_3);
      }
    }
    else {
      if (cVar2 == '\0') {
        return '\0';
      }
      cVar2 = (**(code **)(uVar7 + 0x140))
                        (*(uint *)(param_1 + 0x30) >> 3 & 0x1f,param_2,param_1 + 0x328,param_3);
    }
    if (cVar2 == '\0') {
      return '\0';
    }
    return '\x01';
  }
  return cVar2;
}



// FUNCTION 142748420 FUN_142748420 body=379 status=ok
// SIG undefined FUN_142748420(void)

void FUN_142748420(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  ulonglong uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  uVar5 = uVar4;
  if (0 < (int)param_1[1]) {
    do {
      plVar1 = *(longlong **)(uVar5 + *param_1);
      if (plVar1 != (longlong *)0x0) {
        lVar2 = param_1[9];
        if (*plVar1 != 0) {
          if (param_2 != 0) {
            if (*(char *)((longlong)plVar1 + 0x2d) != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,*plVar1,local_res8,0);
            }
            if (*(char *)((longlong)plVar1 + 0x2e) != '\0') {
              (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,plVar1[1],local_res8);
            }
          }
          FRenderQueryPool::ReleaseQuery(lVar2,plVar1);
          FRenderQueryPool::ReleaseQuery(lVar2,plVar1 + 1);
        }
        lVar2 = *(longlong *)(uVar5 + *param_1);
        if (lVar2 != 0) {
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2 + 8);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar2);
          FMemory::operator_delete(lVar2,0x30);
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 4,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 6,0);
  return;
}



// FUNCTION 1427485a0 ClearDelegate body=133 status=ok
// SIG undefined ClearDelegate(void)

void UPlatformInterfaceBase::ClearDelegate(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  if (param_2 < *(int *)(param_1 + 0x30)) {
    iVar1 = TArray<TScriptDelegate<FWeakObjectPtr>,FDefaultAllocator>::Find
                      (*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x10,param_3);
    if (iVar1 != -1) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x10);
      iVar2 = (int)plVar4[1];
      iVar3 = (iVar2 - iVar1) + -1;
      if (iVar3 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar1 * 0x10 + *plVar4),
                   (void *)((longlong)(iVar1 + 1) * 0x10 + *plVar4),(longlong)iVar3 << 4);
        iVar2 = (int)plVar4[1];
      }
      *(int *)(plVar4 + 1) = iVar2 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar4);
    }
  }
  return;
}



// FUNCTION 142748630 FUN_142748630 body=120 status=ok
// SIG undefined FUN_142748630(void)

void FUN_142748630(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = FUN_140cc25e0(*(undefined8 *)(param_1 + 0x30));
  uVar4 = (ulonglong)*(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) < *(int *)(lVar2 + 0xa8)) {
    lVar5 = uVar4 * 8;
    do {
      lVar1 = *(longlong *)(lVar5 + *(longlong *)(lVar2 + 0xa0));
      if (lVar1 != 0) {
        FUN_142227350(lVar1,0,1);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      lVar5 = lVar5 + 8;
    } while ((int)uVar3 < *(int *)(lVar2 + 0xa8));
  }
  return;
}



// FUNCTION 1427486b0 FUN_1427486b0 body=120 status=ok
// SIG undefined FUN_1427486b0(void)

void FUN_1427486b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x458);
  lVar3 = FUN_140cc25e0(*(undefined8 *)(lVar6 + 0x30));
  iVar1 = *(int *)(lVar6 + 0x48);
  uVar5 = (ulonglong)iVar1;
  if (iVar1 < *(int *)(lVar3 + 0xa8)) {
    lVar6 = uVar5 * 8;
    do {
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(lVar3 + 0xa0));
      if (lVar2 != 0) {
        FUN_142227350(lVar2,0,1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar6 = lVar6 + 8;
    } while ((int)uVar4 < *(int *)(lVar3 + 0xa8));
  }
  return;
}



// FUNCTION 142748730 FUN_142748730 body=2460 status=ok
// SIG undefined FUN_142748730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142748730(int param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined2 *puVar18;
  uint *puVar19;
  longlong lVar20;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined2 *local_378;
  int local_370;
  undefined4 local_36c;
  longlong local_368 [2];
  uint local_358;
  uint uStack_354;
  uint *puStack_350;
  undefined4 local_348;
  uint uStack_344;
  uint uStack_340;
  undefined4 uStack_33c;
  undefined8 *local_338;
  undefined1 *puStack_330;
  int local_328;
  uint local_318;
  uint uStack_314;
  uint local_310;
  int local_308;
  int local_304;
  void *local_300;
  undefined8 local_2f8;
  uint uStack_2f0;
  uint uStack_2ec;
  uint *local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  longlong local_2c0 [2];
  longlong local_2b0 [3];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [8];
  longlong *local_270;
  longlong *local_260;
  undefined8 uStack_258;
  uint *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [8];
  longlong *local_218;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f0 [24];
  undefined **local_1d8 [18];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined4 local_e0 [4];
  undefined1 local_d0 [8];
  longlong *local_c8;
  char local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong *local_88;
  undefined1 local_5c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  lVar20 = (longlong)param_1;
  if (DAT_1468b616c == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1468509e4) {
      _Init_thread_header(&DAT_1468509e4);
      if (DAT_1468509e4 == -1) {
        uVar9 = FCommandLine::Get();
        DAT_1468509e0 = FParse::Param(uVar9,L"nullrhi");
        _Init_thread_footer(&DAT_1468509e4);
      }
      if ((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) goto LAB_1427487ad;
    }
    else {
LAB_1427487ad:
      if (DAT_1468509e0 == '\0') goto LAB_142748874;
    }
    if (*(longlong *)(&DAT_1469f5a10 + lVar20 * 8) == 0) {
      puVar7 = (undefined8 *)operator_new(0xd8);
      if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)(&DAT_1469f5a10 + lVar20 * 8) = 0;
      }
      else {
        *(undefined2 *)(puVar7 + 1) = 0x100;
        *puVar7 = &PTR_FUN_14519cdf0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        *(int *)(puVar7 + 6) = param_1;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[0xb] = 0;
        puVar7[0xc] = 0;
        *(undefined4 *)(puVar7 + 0xd) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0x6c) = 0;
        puVar7[0xf] = 0;
        *(undefined4 *)(puVar7 + 0x10) = 0;
        puVar7[0x11] = 0;
        puVar7[0x12] = 0;
        puVar7[0x15] = 0;
        puVar7[0x16] = 0;
        *(undefined4 *)(puVar7 + 0x17) = 0xffffffff;
        *(undefined4 *)((longlong)puVar7 + 0xbc) = 0;
        puVar7[0x19] = 0;
        *(undefined4 *)(puVar7 + 0x1a) = 0;
        *(undefined8 **)(&DAT_1469f5a10 + lVar20 * 8) = puVar7;
      }
    }
  }
  else {
LAB_142748874:
    uVar16 = 0;
    if (param_2 != '\0') {
      puVar7 = *(undefined8 **)(&DAT_1469f5a10 + lVar20 * 8);
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,1);
      }
      *(undefined8 *)(&DAT_1469f5a10 + lVar20 * 8) = 0;
      FSlateAccessibleMessageHandler::OnDeactivate();
    }
    uVar9 = DAT_1468b6160;
    if (*(longlong *)(&DAT_1469f5a10 + lVar20 * 8) == 0) {
      uVar8 = FText::FText(local_238);
      local_388 = uVar9;
      FUN_141660a80(local_a8,0x428c0000,uVar8,1);
      FSlowTask::Initialize(local_a8);
      if (local_230 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_230 + 1;
        lVar10 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_230)(local_230);
          LOCK();
          piVar1 = (int *)((longlong)local_230 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_230 + 8))(local_230,1);
          }
        }
      }
      uVar9 = FText::FText(local_128);
      puVar15 = local_a8;
      FSlowTask::EnterProgressFrame(puVar15,0x41a00000,uVar9);
      AK::MemoryMgr::StartProfileThreadUsage((long)puVar15);
      lVar10 = operator_new(0xd8);
      uVar11 = uVar16;
      if (lVar10 != 0) {
        uVar11 = FUN_142741040(lVar10,param_1);
      }
      *(ulonglong *)(&DAT_1469f5a10 + lVar20 * 8) = uVar11;
      uVar9 = FText::FText(local_110);
      FSlowTask::EnterProgressFrame(local_a8,0x42480000,uVar9);
      local_368[0] = 0;
      local_368[1] = 0;
      puVar7 = (undefined8 *)GetGlobalShaderCacheFilename(local_2b0,param_1);
      local_338 = puVar7;
      puVar12 = (undefined8 *)FUN_141673340();
      uVar11 = (ulonglong)(*(int *)(puVar7 + 1) - 1);
      if (*(int *)(puVar7 + 1) == 0) {
        uVar11 = uVar16;
      }
      if ((*(int *)(puVar12 + 1) != 0) || (iVar14 = 2, (int)uVar11 == -1)) {
        iVar14 = 1;
      }
      local_378 = (undefined2 *)0x0;
      iVar14 = iVar14 + (int)uVar11;
      local_370 = *(int *)(puVar12 + 1);
      lVar10 = (longlong)local_370;
      local_300 = (void *)*puVar12;
      if ((local_370 == 0) && (iVar14 == 0)) {
        local_36c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_378,local_370 + iVar14,0);
        _guard_xfg_dispatch_icall_nop(local_378,local_300,lVar10 * 2);
      }
      FString::PathAppend(&local_378,*local_338,uVar11);
      if (local_2b0[0] != 0) {
        FMemory::Free();
      }
      FUN_1416781b0(&local_378);
      puVar18 = &DAT_143f3eda8;
      if (local_370 != 0) {
        puVar18 = local_378;
      }
      cVar6 = FUN_141676460(local_368,puVar18,2);
      if (cVar6 == '\0') {
        plVar13 = (longlong *)FUN_1415c3d50();
        puVar18 = &DAT_143f3eda8;
        if (local_370 != 0) {
          puVar18 = local_378;
        }
        (**(code **)(*plVar13 + 0xe0))(plVar13,local_2c0,puVar18);
        lVar20 = FText::FromString(local_f8,local_2c0);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_208,
                           L"The global shader cache file \'{0}\' is missing.\n\nYour application is built to load COOKED content. No COOKED content was found; This usually means you did not cook content for this build.\nIt also may indicate missing cooked data for a shader platform(e.g., OpenGL under Windows): Make sure your platform\'s packaging settings include this Targeted RHI.\n\nAlternatively build and run the UNCOOKED version instead."
                           ,L"Engine",L"GlobalShaderCacheFileMissing");
        puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_1f0,uVar9);
        local_e0[0] = 4;
        FText::FText(local_d0,lVar20);
        local_2d0 = *puVar7;
        local_338 = (undefined8 *)local_e0;
        puStack_330 = local_b0;
        local_2c8 = puVar7[1];
        local_b8 = '\x01';
        if (local_2c8 != 0) {
          LOCK();
          *(int *)(local_2c8 + 8) = *(int *)(local_2c8 + 8) + 1;
          UNLOCK();
        }
        local_298 = local_338;
        uStack_290 = puStack_330;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_288,&local_298);
        uVar9 = FText::Format(local_220,&local_2d0,uVar9);
        FText::FText(local_278,uVar9);
        if (local_218 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_218 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_218)(local_218);
            LOCK();
            piVar1 = (int *)((longlong)local_218 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_218 + 8))(local_218,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_288);
        if ((local_b8 != '\0') && (local_b8 = '\0', local_c8 != (longlong *)0x0)) {
          LOCK();
          plVar13 = local_c8 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)local_c8 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_c8 + 8))(local_c8,1);
            }
          }
        }
        plVar13 = (longlong *)puVar7[1];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          lVar10 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        plVar13 = *(longlong **)(lVar20 + 8);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          lVar20 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        if (local_200 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_200 + 1;
          lVar20 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*local_200)(local_200);
            LOCK();
            piVar1 = (int *)((longlong)local_200 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_200 + 8))(local_200,1);
            }
          }
        }
        FUN_1416786b0(0,local_278,0);
        FUN_1416a8180(0);
        if (local_270 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_270 + 1;
          lVar20 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*local_270)(local_270);
            LOCK();
            piVar1 = (int *)((longlong)local_270 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_270 + 8))(local_270,1);
            }
          }
        }
        if (local_2c0[0] != 0) {
          FMemory::Free();
        }
        if (local_378 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
        if (local_368[0] != 0) {
          FMemory::Free();
          local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
        }
      }
      else {
        FArchive::FArchive(local_1d8);
        local_148 = 0;
        local_1d8[0] = &PTR_FUN_143f4a3a0;
        local_140 = local_368;
        local_138 = 0x7fffffffffffffff;
        FArchive::SetIsLoading(local_1d8,1);
        FArchive::SetIsPersistent(local_1d8,0);
        FUN_14275bbc0(local_1d8,*(undefined8 *)(&DAT_1469f5a10 + lVar20 * 8));
        FArchive::~FArchive(local_1d8);
        if (local_378 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_368[0] != 0) {
          FMemory::Free();
        }
        FUN_142762bc0(param_1,cVar6);
        local_298 = (undefined8 *)CONCAT44(local_298._4_4_,(undefined4)local_298);
        uStack_290 = (undefined1 *)CONCAT44(uStack_290._4_4_,(undefined4)uStack_290);
        local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
        if ((DAT_146b09450 != 0) &&
           (local_298 = (undefined8 *)CONCAT44(local_298._4_4_,(undefined4)local_298),
           uStack_290 = (undefined1 *)CONCAT44(uStack_290._4_4_,(undefined4)uStack_290),
           local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8),
           param_1 == DAT_146ab62cc)) {
          lVar20 = *(longlong *)(&DAT_1469f5a10 + lVar20 * 8);
          plVar13 = (longlong *)(lVar20 + 0x38);
          local_358 = 0;
          uVar4 = *(uint *)(lVar20 + 0x60);
          puVar3 = (uint *)(lVar20 + 0x48);
          uStack_354 = 1;
          uStack_344 = 0;
          uStack_340 = 0;
          if (uVar4 != 0) {
            puVar19 = *(uint **)(lVar20 + 0x58);
            if (*(uint **)(lVar20 + 0x58) == (uint *)0x0) {
              puVar19 = puVar3;
            }
            uVar17 = *puVar19;
            uVar11 = uVar16;
            while (uVar17 == 0) {
              iVar14 = (int)uVar16;
              uStack_340 = (int)uVar11 + 0x20;
              uVar11 = (ulonglong)uStack_340;
              local_358 = iVar14 + 1;
              uVar16 = (ulonglong)local_358;
              if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
              goto LAB_142748f55;
              uVar17 = puVar19[(longlong)iVar14 + 1];
            }
            uStack_354 = -uVar17 & uVar17;
            local_308 = 0x1f;
            if (uStack_354 != 0) {
              for (; uStack_354 >> local_308 == 0; local_308 = local_308 + -1) {
              }
            }
            if (uStack_354 == 0) {
              iVar14 = 0x20;
            }
            else {
              iVar14 = 0x1f - local_308;
            }
            uStack_344 = (uStack_340 - iVar14) + 0x1f;
            if ((int)uVar4 < (int)uStack_344) {
LAB_142748f55:
              uStack_344 = uVar4;
            }
          }
          local_348 = 0xffffffff;
          uStack_314 = *(uint *)(lVar20 + 0x60);
          uStack_258 = CONCAT44(uStack_354,local_358);
          uStack_2e0 = CONCAT44(uStack_344,0xffffffff);
          local_2d8 = CONCAT44(uStack_33c,uStack_340);
          local_328 = (int)uStack_314 >> 5;
          local_318 = -1 << ((byte)uStack_314 & 0x1f);
          local_310 = uStack_314 & 0xffffffe0;
          uStack_2f0 = local_358;
          uStack_2ec = uStack_354;
          puStack_350 = puVar3;
          local_2e8 = puVar3;
          local_260 = plVar13;
          puStack_250 = puVar3;
          uStack_248 = uStack_2e0;
          uStack_240 = local_2d8;
          local_2f8 = plVar13;
          uVar17 = uStack_314;
          if (uStack_314 != uVar4) {
            puVar19 = *(uint **)(lVar20 + 0x58);
            if (*(uint **)(lVar20 + 0x58) == (uint *)0x0) {
              puVar19 = puVar3;
            }
            uVar17 = puVar19[local_328] & local_318;
            while (uVar17 == 0) {
              lVar20 = (longlong)local_328;
              local_310 = local_310 + 0x20;
              iVar14 = local_328 + 1;
              bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_328;
              local_328 = iVar14;
              if (bVar5) goto LAB_14274902f;
              uVar17 = puVar19[lVar20 + 1];
              local_318 = 0xffffffff;
            }
            uVar17 = -uVar17 & uVar17;
            local_304 = 0x1f;
            if (uVar17 != 0) {
              for (; uVar17 >> local_304 == 0; local_304 = local_304 + -1) {
              }
            }
            if (uVar17 == 0) {
              iVar14 = 0x20;
            }
            else {
              iVar14 = 0x1f - local_304;
            }
            uStack_314 = (local_310 - iVar14) + 0x1f;
            uVar17 = uStack_314;
            if ((int)uVar4 < (int)uStack_314) {
LAB_14274902f:
              uStack_314 = uVar4;
              uVar17 = uVar4;
            }
          }
          while( true ) {
            if (((uStack_2e0._4_4_ == uVar17) && (local_2e8 == puVar3)) && (local_2f8 == plVar13))
            break;
            lVar20 = *(longlong *)((longlong)(int)uStack_2e0._4_4_ * 0x20 + 0x10 + *local_2f8);
            if (lVar20 != 0) {
              FUN_141edf270(*(undefined8 *)(lVar20 + 0x48));
            }
            uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(uint)uStack_2e0 & ~uStack_2ec);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2f0);
          }
        }
      }
      FUN_14166a2b0(local_a8);
      local_5c = 0;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_88 + 1;
        lVar20 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_a0 + 1;
        lVar20 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1427490d0 CompileGlobalShaderMap body=26 status=ok
// SIG undefined CompileGlobalShaderMap(void)

void CompileGlobalShaderMap(undefined1 param_1)

{
  FUN_142748730((&DAT_1464c9c48)[DAT_1464c9c14],param_1);
  return;
}



// FUNCTION 1427490f0 ComputeBoundsDrawDistance body=55 status=ok
// SIG undefined ComputeBoundsDrawDistance(void)

float ComputeBoundsDrawDistance(float param_1,float param_2,float *param_3)

{
  float fVar1;
  
  param_1 = param_1 * 0.5;
  fVar1 = param_3[5] * 0.5;
  if (param_3[5] * 0.5 <= *param_3 * 0.5) {
    fVar1 = *param_3 * 0.5;
  }
  if (param_1 <= 1e-08) {
    param_1 = 1e-08;
  }
  return (fVar1 * param_2) / param_1;
}



// FUNCTION 142749130 FUN_142749130 body=142 status=ok
// SIG undefined FUN_142749130(void)

float FUN_142749130(float *param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_3 + 0x4e4) * 0.5;
  fVar3 = *(float *)(param_3 + 0x8dc) - *param_1;
  fVar2 = *(float *)(param_3 + 0x8e4) - param_1[2];
  fVar1 = *(float *)(param_3 + 0x4d0) * 0.5;
  fVar5 = *(float *)(param_3 + 0x8e0) - param_1[1];
  if (fVar4 <= fVar1) {
    fVar4 = fVar1;
  }
  fVar1 = fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  return (fVar4 * param_2 * fVar4 * param_2) / fVar1;
}



// FUNCTION 1427491c0 FUN_1427491c0 body=149 status=ok
// SIG undefined FUN_1427491c0(void)

float FUN_1427491c0(float *param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_3 + 0x4d0) * 0.5;
  fVar4 = *(float *)(param_3 + 0x8e0) - param_1[1];
  fVar3 = *(float *)(param_3 + 0x8dc) - *param_1;
  fVar2 = *(float *)(param_3 + 0x8e4) - param_1[2];
  fVar5 = *(float *)(param_3 + 0x4e4) * 0.5;
  if (fVar5 <= fVar1) {
    fVar5 = fVar1;
  }
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  fVar1 = (fVar5 * param_2) / fVar1;
  return fVar1 + fVar1;
}



// FUNCTION 142749260 FUN_142749260 body=678 status=ok
// SIG undefined FUN_142749260(void)

char * FUN_142749260(char *param_1,longlong *param_2,longlong param_3,undefined4 *param_4,
                    undefined4 param_5,int param_6,float *param_7,float param_8)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  iVar6 = *(int *)(param_3 + 0xf60);
  param_1[0] = '\x7f';
  param_1[1] = '\x7f';
  if ((iVar6 == 2) && (*(undefined8 **)(param_3 + 0x10) != (undefined8 *)0x0)) {
    param_3 = *(longlong *)**(undefined8 **)(param_3 + 0x10);
  }
  iVar6 = (int)param_2[1];
  if (param_6 < 0) {
    if (((*(uint *)(*(longlong *)(param_3 + 0x10) + 0x2c) & 0x800) != 0) && (iVar6 != 0)) {
      iVar7 = 0x7fffffff;
      if ((*(uint *)(*(longlong *)*param_2 + 0x8c) & 0x4000000) == 0) {
        fVar12 = (float)FUN_142749130(param_4,param_5,param_3);
        *param_7 = fVar12;
        if (-1 < iVar6 + -1) {
          lVar10 = (longlong)(iVar6 + -1);
          plVar4 = (longlong *)(*param_2 + lVar10 * 8);
          do {
            fVar13 = param_8 * *(float *)(*plVar4 + 0xb8);
            cVar3 = *(char *)(*plVar4 + 0x88);
            if (fVar12 <= fVar13 * fVar13 * 0.25) {
              *param_1 = cVar3;
              param_1[1] = cVar3;
              return param_1;
            }
            iVar6 = (int)cVar3;
            if (iVar7 <= cVar3) {
              iVar6 = iVar7;
            }
            iVar7 = iVar6;
            plVar4 = plVar4 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        *param_1 = (char)iVar7;
        param_1[1] = (char)iVar7;
      }
      else {
        iVar7 = 0;
        lVar10 = (longlong)iVar6 + -1;
        pcVar11 = param_1;
        do {
          local_78 = *param_4;
          local_74 = param_4[1];
          local_70 = param_4[2];
          iVar6 = 0x7fffffff;
          fVar12 = (float)FUN_142749640(&local_78,param_5,param_3,iVar7);
          *param_7 = fVar12;
          if (-1 < lVar10) {
            plVar4 = (longlong *)(*param_2 + lVar10 * 8);
            lVar8 = lVar10;
            do {
              fVar13 = param_8 * *(float *)(*plVar4 + 0xb8);
              cVar3 = *(char *)(*plVar4 + 0x88);
              if (fVar12 <= fVar13 * fVar13 * 0.25) goto LAB_14274942a;
              iVar1 = (int)cVar3;
              if (iVar6 <= cVar3) {
                iVar1 = iVar6;
              }
              iVar6 = iVar1;
              plVar4 = plVar4 + -1;
              lVar8 = lVar8 + -1;
            } while (-1 < lVar8);
          }
          cVar3 = (char)iVar6;
LAB_14274942a:
          *pcVar11 = cVar3;
          iVar7 = iVar7 + 1;
          pcVar11 = pcVar11 + 1;
        } while (iVar7 < 2);
      }
    }
  }
  else {
    cVar3 = '\0';
    cVar2 = '\x7f';
    *param_7 = 0.0;
    lVar10 = (longlong)(int)param_2[1];
    if (0 < lVar10) {
      param_2 = (longlong *)*param_2;
      cVar5 = cVar2;
      cVar9 = cVar3;
      do {
        lVar8 = *param_2;
        param_2 = param_2 + 1;
        cVar3 = *(char *)(lVar8 + 0x88);
        cVar2 = cVar3;
        if (cVar5 <= cVar3) {
          cVar2 = cVar5;
        }
        if (cVar3 <= cVar9) {
          cVar3 = cVar9;
        }
        lVar10 = lVar10 + -1;
        cVar5 = cVar2;
        cVar9 = cVar3;
      } while (lVar10 != 0);
    }
    cVar5 = (char)param_6;
    if ((cVar2 <= cVar5) && (cVar2 = cVar3, cVar5 < cVar3)) {
      cVar2 = cVar5;
    }
    *param_1 = cVar2;
    param_1[1] = cVar2;
  }
  return param_1;
}



// FUNCTION 142749510 FUN_142749510 body=294 status=ok
// SIG undefined FUN_142749510(void)

uint FUN_142749510(longlong param_1,float *param_2,float param_3,longlong param_4,uint param_5,
                  float param_6)

{
  longlong lVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_1 != 0) {
    if ((*(int *)(param_4 + 0xf60) == 2) && (*(undefined8 **)(param_4 + 0x10) != (undefined8 *)0x0))
    {
      param_4 = *(longlong *)**(undefined8 **)(param_4 + 0x10);
    }
    uVar3 = 7;
    fVar4 = *(float *)(param_4 + 0x4d0) * 0.5;
    lVar1 = 7;
    pfVar2 = (float *)(param_1 + 0x3c);
    fVar7 = *(float *)(param_4 + 0x8e0) - param_2[1];
    fVar6 = *(float *)(param_4 + 0x8dc) - *param_2;
    fVar5 = *(float *)(param_4 + 0x8e4) - param_2[2];
    fVar8 = *(float *)(param_4 + 0x4e4) * 0.5;
    if (fVar8 <= fVar4) {
      fVar8 = fVar4;
    }
    fVar4 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar4 <= 1.0) {
      fVar4 = 1.0;
    }
    do {
      if (((fVar8 * param_3 * fVar8 * param_3) / fVar4) * param_6 * param_6 *
          *(float *)(param_4 + 0x11ec) * *(float *)(param_4 + 0x11ec) < *pfVar2 * *pfVar2 * 0.25) {
        if ((int)param_5 <= (int)uVar3) {
          param_5 = uVar3;
        }
        return param_5 & 0xff;
      }
      uVar3 = uVar3 - 1;
      pfVar2 = pfVar2 + -1;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return param_5 & 0xff;
}



// FUNCTION 142749640 FUN_142749640 body=227 status=ok
// SIG undefined FUN_142749640(void)

float FUN_142749640(float *param_1,float param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float fStack_24;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x40))();
    if (*(float *)(lVar1 + 0x28) != 0.0) {
      uVar2 = *(undefined8 *)(lVar1 + (longlong)param_4 * 0xc);
      fVar5 = *(float *)(lVar1 + 8 + (longlong)param_4 * 0xc);
      goto LAB_142749695;
    }
  }
  uVar2 = *(undefined8 *)(param_3 + 0x8dc);
  fVar5 = *(float *)(param_3 + 0x8e4);
LAB_142749695:
  fVar4 = *(float *)(param_3 + 0x4e4) * 0.5;
  fVar3 = *(float *)(param_3 + 0x4d0) * 0.5;
  local_28 = (float)uVar2;
  fStack_24 = (float)((ulonglong)uVar2 >> 0x20);
  if (fVar4 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar5 = (fStack_24 - param_1[1]) * (fStack_24 - param_1[1]) +
          (local_28 - *param_1) * (local_28 - *param_1) +
          (fVar5 - param_1[2]) * (fVar5 - param_1[2]);
  if (fVar5 <= 1.0) {
    fVar5 = 1.0;
  }
  return (fVar4 * param_2 * fVar4 * param_2) / fVar5;
}



// FUNCTION 142749730 FUN_142749730 body=202 status=ok
// SIG undefined FUN_142749730(void)

uint FUN_142749730(longlong param_1,undefined4 *param_2,undefined4 param_3,longlong param_4,
                  uint param_5,float param_6,undefined4 param_7)

{
  longlong lVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = param_2[2];
  fVar4 = (float)FUN_142749640(&local_18,param_3,param_4,param_7);
  uVar3 = 7;
  lVar1 = 7;
  pfVar2 = (float *)(param_1 + 0x3c);
  do {
    if (*(float *)(param_4 + 0x11ec) * fVar4 * param_6 * param_6 * *(float *)(param_4 + 0x11ec) <
        *pfVar2 * *pfVar2 * 0.25) {
      if ((int)param_5 <= (int)uVar3) {
        param_5 = uVar3;
      }
      return param_5 & 0xff;
    }
    uVar3 = uVar3 - 1;
    pfVar2 = pfVar2 + -1;
    lVar1 = lVar1 + -1;
  } while (-1 < lVar1);
  return param_5 & 0xff;
}



// FUNCTION 142749800 CreateCloudDocument body=454 status=ok
// SIG undefined CreateCloudDocument(void)

int UCloudStorageBase::CreateCloudDocument(longlong param_1,undefined8 *param_2)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  longlong lVar6;
  void *local_38;
  int local_30;
  int local_2c;
  longlong local_28 [2];
  
  puVar3 = (undefined8 *)FPaths::CloudDir(local_28);
  iVar4 = *(int *)(param_2 + 1);
  _Src = (void *)0x0;
  local_30 = *(int *)(puVar3 + 1);
  if (local_30 < 2) {
    pvVar1 = (void *)*param_2;
    local_38 = (void *)0x0;
    local_30 = iVar4;
    if (iVar4 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar4,0);
      _Src = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,(longlong)iVar4 * 2);
      iVar4 = local_30;
    }
  }
  else {
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    if ((local_30 != 0) || (iVar4 = 1, iVar5 == 0)) {
      iVar4 = 0;
    }
    local_38 = (void *)*puVar3;
    *puVar3 = 0;
    local_2c = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    if (local_2c < local_30 + iVar5 + iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    }
    iVar2 = local_30;
    pvVar1 = (void *)*param_2;
    _Src = local_38;
    iVar4 = local_30;
    if (iVar5 != 0) {
      lVar6 = (longlong)local_30;
      local_30 = iVar5 + (uint)(local_30 == 0) + local_30;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar2);
      }
      iVar4 = local_30;
      _Src = local_38;
      _Dst = (void *)((longlong)local_38 + (lVar6 - (ulonglong)(iVar2 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = iVar5 + 1;
  if (*(int *)(param_1 + 0x44) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar5);
  }
  puVar3 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x38));
  *puVar3 = 0;
  *(int *)(puVar3 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar4,0);
    ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar4 * 2);
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return iVar5;
}



// FUNCTION 1427499d0 FUN_1427499d0 body=195 status=ok
// SIG undefined FUN_1427499d0(void)

undefined8 FUN_1427499d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar4 = TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,FDefaultAllocator>::Find(plVar1);
  if (iVar4 != -1) {
    lVar2 = (longlong)iVar4 * 8;
    cVar3 = FWeakObjectPtr::IsStale(*plVar1 + lVar2,0,0);
    if (cVar3 == '\0') {
      cVar3 = FWeakObjectPtr::IsValid(*plVar1 + lVar2);
      if (cVar3 != '\0') {
        uVar6 = FWeakObjectPtr::Get(*plVar1 + lVar2);
        FUN_142227350(uVar6,0,1);
      }
    }
    iVar7 = *(int *)(param_1 + 0x58);
    iVar5 = (iVar7 - iVar4) + -1;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + lVar2),(void *)(*plVar1 + (longlong)(iVar4 + 1) * 8),
                 (longlong)iVar5 << 3);
      iVar7 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = iVar7 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 142749aa0 FUN_142749aa0 body=146 status=ok
// SIG undefined FUN_142749aa0(void)

void FUN_142749aa0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x58) * 8;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 8) {
    cVar2 = FWeakObjectPtr::IsStale(lVar4,0,0);
    if ((cVar2 == '\0') && (cVar2 = FWeakObjectPtr::IsValid(lVar4), cVar2 != '\0')) {
      uVar3 = FWeakObjectPtr::Get(lVar4);
      FUN_142227350(uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x50,0);
  }
  return;
}



// FUNCTION 142749b40 FUN_142749b40 body=93 status=ok
// SIG undefined FUN_142749b40(void)

void FUN_142749b40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48 = *(undefined8 *)(param_1 + 0x610);
  uStack_40 = *(undefined8 *)(param_1 + 0x618);
  local_38 = *(undefined8 *)(param_1 + 0x620);
  uStack_30 = *(undefined8 *)(param_1 + 0x628);
  local_28 = *(undefined4 *)(param_1 + 0x630);
  uStack_24 = *(undefined4 *)(param_1 + 0x634);
  uStack_20 = *(undefined4 *)(param_1 + 0x638);
  uStack_1c = *(undefined4 *)(param_1 + 0x63c);
  local_18 = *(undefined4 *)(param_1 + 0x640);
  uStack_14 = *(undefined4 *)(param_1 + 0x644);
  uStack_10 = *(undefined4 *)(param_1 + 0x648);
  uStack_c = *(undefined4 *)(param_1 + 0x64c);
  FUN_14274a0c0(param_2,param_1 + 0x368,&local_48,param_3,param_4,1);
  return;
}



// FUNCTION 142749ba0 FUN_142749ba0 body=1307 status=ok
// SIG undefined FUN_142749ba0(void)

void FUN_142749ba0(float *param_1,int *param_2,float *param_3,float *param_4,undefined8 *param_5,
                  undefined8 *param_6,char param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_c8;
  float fStack_c0;
  
  fVar14 = *param_1;
  if (param_7 != '\0') {
    fVar14 = (float)(int)fVar14;
  }
  fVar13 = param_1[1];
  if (param_7 != '\0') {
    fVar13 = (float)(int)fVar13;
  }
  fVar14 = (fVar14 - (float)*param_2) / (float)(param_2[2] - *param_2);
  fVar18 = ((fVar14 - 0.5) + fVar14) - 0.5;
  fVar16 = 0.5 - (fVar13 - (float)param_2[1]) / (float)(param_2[3] - param_2[1]);
  fVar16 = fVar16 + fVar16;
  fVar21 = fVar18 * *param_4 + fVar16 * param_4[4] + param_4[8] * 1.0 + param_4[0xc] * 1.0;
  fVar14 = fVar18 * param_4[1] + fVar16 * param_4[5] + param_4[9] * 1.0 + param_4[0xd] * 1.0;
  fVar22 = fVar18 * param_4[2] + fVar16 * param_4[6] + param_4[10] * 1.0 + param_4[0xe] * 1.0;
  fVar23 = fVar18 * param_4[3] + fVar16 * param_4[7] + param_4[0xb] * 1.0 + param_4[0xf] * 1.0;
  fVar19 = fVar18 * *param_4 + fVar16 * param_4[4] + param_4[8] * 0.5 + param_4[0xc] * 1.0;
  fVar13 = fVar18 * param_4[1] + fVar16 * param_4[5] + param_4[9] * 0.5 + param_4[0xd] * 1.0;
  fVar20 = fVar18 * param_4[2] + fVar16 * param_4[6] + param_4[10] * 0.5 + param_4[0xe] * 1.0;
  fVar16 = fVar18 * param_4[3] + fVar16 * param_4[7] + param_4[0xb] * 0.5 + param_4[0xf] * 1.0;
  if (fVar23 != 0.0) {
    fVar23 = 1.0 / fVar23;
    fVar21 = fVar21 * fVar23;
    fVar14 = fVar23 * fVar14;
    fVar22 = fVar23 * fVar22;
  }
  if (fVar16 != 0.0) {
    fVar16 = 1.0 / fVar16;
    fVar19 = fVar19 * fVar16;
    fVar13 = fVar16 * fVar13;
    fVar20 = fVar20 * fVar16;
  }
  fVar19 = fVar19 - fVar21;
  fVar13 = fVar13 - fVar14;
  fVar20 = fVar20 - fVar22;
  fVar15 = fVar13 * fVar13 + fVar19 * fVar19 + fVar20 * fVar20;
  fVar23 = fVar19;
  fVar16 = fVar20;
  fVar18 = fVar13;
  if ((fVar15 != 1.0) &&
     (fVar23 = DAT_1468b5d90, fVar16 = DAT_1468b5d98, fVar18 = DAT_1468b5d94, 1e-08 <= fVar15)) {
    auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar18 = auVar17._0_4_;
    fVar18 = fVar18 + fVar18 * (0.5 - fVar15 * 0.5 * fVar18 * fVar18);
    fVar18 = fVar18 + fVar18 * (0.5 - fVar15 * 0.5 * fVar18 * fVar18);
    fVar23 = fVar19 * fVar18;
    fVar16 = fVar20 * fVar18;
    fVar18 = fVar13 * fVar18;
  }
  fVar13 = param_3[2];
  fVar19 = param_3[6];
  fVar20 = param_3[10];
  fVar15 = param_3[0xe];
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  fVar9 = param_3[6];
  fVar10 = param_3[0xc];
  fVar11 = param_3[0xd];
  fVar12 = param_3[0xe];
  *param_5 = CONCAT44(fVar21 * param_3[1] + fVar14 * param_3[5] +
                      fVar22 * param_3[9] + param_3[0xd] * 1.0,
                      fVar21 * *param_3 + fVar14 * param_3[4] +
                      fVar22 * param_3[8] + param_3[0xc] * 1.0);
  *(float *)(param_5 + 1) = fVar21 * fVar13 + fVar14 * fVar19 + fVar22 * fVar20 + fVar15 * 1.0;
  fVar22 = fVar23 * fVar4 + fVar18 * fVar7 + fVar16 * fVar1 + fVar10 * 0.0;
  fVar13 = fVar23 * fVar5 + fVar18 * fVar8 + fVar16 * fVar2 + fVar11 * 0.0;
  fStack_c0 = fVar23 * fVar6 + fVar18 * fVar9 + fVar16 * fVar3 + fVar12 * 0.0;
  fVar14 = fVar13 * fVar13 + fVar22 * fVar22 + fStack_c0 * fStack_c0;
  if (fVar14 != 1.0) {
    if (fVar14 < 1e-08) {
      fStack_c0 = DAT_1468b5d98;
      local_c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_14274a06d;
    }
    auVar17 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar23 = auVar17._0_4_;
    fVar23 = fVar23 + fVar23 * (0.5 - fVar14 * 0.5 * fVar23 * fVar23);
    fVar23 = fVar23 + fVar23 * (0.5 - fVar14 * 0.5 * fVar23 * fVar23);
    fVar22 = fVar22 * fVar23;
    fVar13 = fVar13 * fVar23;
    fStack_c0 = fStack_c0 * fVar23;
  }
  local_c8 = CONCAT44(fVar13,fVar22);
LAB_14274a06d:
  *param_6 = local_c8;
  *(float *)(param_6 + 1) = fStack_c0;
  return;
}



// FUNCTION 14274a0c0 FUN_14274a0c0 body=870 status=ok
// SIG undefined FUN_14274a0c0(void)

void FUN_14274a0c0(float *param_1,int *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5,char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  float fStack_84;
  float fStack_80;
  
  fVar2 = *param_1;
  if (param_6 != '\0') {
    fVar2 = (float)(int)fVar2;
  }
  fVar1 = param_1[1];
  if (param_6 != '\0') {
    fVar1 = (float)(int)fVar1;
  }
  fVar2 = (fVar2 - (float)*param_2) / (float)(param_2[2] - *param_2);
  fVar5 = ((fVar2 - 0.5) + fVar2) - 0.5;
  fVar3 = 0.5 - (fVar1 - (float)param_2[1]) / (float)(param_2[3] - param_2[1]);
  fVar3 = fVar3 + fVar3;
  fVar2 = fVar5 * *param_3 + fVar3 * param_3[4] + param_3[8] * 1.0 + param_3[0xc] * 1.0;
  fVar1 = fVar5 * param_3[1] + fVar3 * param_3[5] + param_3[9] * 1.0 + param_3[0xd] * 1.0;
  fVar6 = fVar5 * param_3[2] + fVar3 * param_3[6] + param_3[10] * 1.0 + param_3[0xe] * 1.0;
  fVar7 = fVar5 * param_3[3] + fVar3 * param_3[7] + param_3[0xb] * 1.0 + param_3[0xf] * 1.0;
  local_88 = fVar5 * *param_3 + fVar3 * param_3[4] + param_3[8] * 0.5 + param_3[0xc] * 1.0;
  fStack_84 = fVar5 * param_3[1] + fVar3 * param_3[5] + param_3[9] * 0.5 + param_3[0xd] * 1.0;
  fStack_80 = fVar5 * param_3[2] + fVar3 * param_3[6] + param_3[10] * 0.5 + param_3[0xe] * 1.0;
  fVar3 = fVar5 * param_3[3] + fVar3 * param_3[7] + param_3[0xb] * 0.5 + param_3[0xf] * 1.0;
  if (fVar7 != 0.0) {
    fVar7 = 1.0 / fVar7;
    fVar2 = fVar7 * fVar2;
    fVar1 = fVar7 * fVar1;
    fVar6 = fVar7 * fVar6;
  }
  if (fVar3 != 0.0) {
    fVar3 = 1.0 / fVar3;
    local_88 = fVar3 * local_88;
    fStack_84 = fVar3 * fStack_84;
    fStack_80 = fVar3 * fStack_80;
  }
  local_88 = local_88 - fVar2;
  fStack_84 = fStack_84 - fVar1;
  fStack_80 = fStack_80 - fVar6;
  fVar7 = fStack_84 * fStack_84 + local_88 * local_88 + fStack_80 * fStack_80;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_88 = DAT_1468b5d90;
      fStack_80 = DAT_1468b5d98;
      fStack_84 = DAT_1468b5d94;
    }
    else {
      auVar4 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar3 = auVar4._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar7 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar3 + fVar3 * (0.5 - fVar7 * 0.5 * fVar3 * fVar3);
      local_88 = local_88 * fVar3;
      fStack_84 = fStack_84 * fVar3;
      fStack_80 = fStack_80 * fVar3;
    }
  }
  *param_4 = CONCAT44(fVar1,fVar2);
  *(float *)(param_4 + 1) = fVar6;
  *param_5 = CONCAT44(fStack_84,local_88);
  *(float *)(param_5 + 1) = fStack_80;
  return;
}



// FUNCTION 14274a430 Destroy body=86 status=ok
// SIG undefined Destroy(void)

void FSceneViewStateReference::Destroy(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 8))();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14274a490 DestroyAll body=73 status=ok
// SIG undefined DestroyAll(void)

void FSceneViewStateReference::DestroyAll(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  for (puVar2 = DAT_146b0a158; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    lVar1 = puVar2[2];
    (**(code **)**(undefined8 **)(lVar1 + 8))();
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return;
}



// FUNCTION 14274a4e0 FUN_14274a4e0 body=269 status=ok
// SIG undefined FUN_14274a4e0(void)

void FUN_14274a4e0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  float fVar1;
  float local_res8 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  float local_4c;
  float local_48;
  char local_44;
  char local_43;
  
  (**(code **)(*param_1 + 0x18))(param_1,&local_58);
  if (local_44 != '\0') {
    local_res8[0] = 0.0;
    if (0.0 <= local_48) {
      fVar1 = local_48;
      if (1.0 <= local_48) {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    if (local_43 == '\0') {
      local_60 = *(undefined4 *)(param_2 + 1);
      local_68 = *param_2;
      (**(code **)(*param_1 + 0x10))(param_1,&local_68,0,local_res8);
      if (local_res8[0] < 0.0) {
        return;
      }
      if (local_4c < local_res8[0]) {
        return;
      }
      if (1.0 <= local_4c) {
        fVar1 = fVar1 * (1.0 - local_res8[0] / local_4c);
      }
    }
    if (0.0 < fVar1) {
      FUN_142753e20(param_3,local_58,fVar1,local_43 == '\0');
    }
  }
  return;
}



// FUNCTION 14274a5f0 FUN_14274a5f0 body=1637 status=ok
// SIG undefined FUN_14274a5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14274a5f0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
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
  float *pfVar20;
  undefined8 uVar21;
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  longlong in_stack_00000030;
  undefined1 auStack_248 [32];
  uint local_228;
  undefined1 local_220;
  undefined4 local_218;
  undefined4 *local_210;
  undefined8 local_208;
  float local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined4 local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  undefined1 local_e8 [48];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x3d0) = in_stack_00000030;
  fVar25 = *(float *)(param_1 + 0x6c);
  if (fVar25 <= 10.0) {
    fVar25 = 10.0;
  }
  *(float *)(*(longlong *)(param_1 + 0x70) + 0x3c4) = fVar25;
  fVar25 = *(float *)(*(longlong *)(param_1 + 0x70) + 0x3c4);
  local_208 = 0;
  local_200 = 0.0;
  fVar22 = _guard_xfg_dispatch_icall_nop(fVar25 * 0.008726646);
  iVar3 = *(int *)(in_stack_00000030 + 0xc4);
  iVar4 = *(int *)(in_stack_00000030 + 0xc0);
  FUN_14274f370(param_1,&local_1d0);
  uVar1 = *(uint *)(param_1 + 0x60);
  uVar2 = *(uint *)(param_1 + 100);
  local_200 = local_1c8;
  local_208._0_4_ = local_1d0;
  local_208._4_4_ = local_1cc;
  fVar22 = _guard_xfg_dispatch_icall_nop((fVar22 * (float)iVar3) / (float)iVar4);
  fVar23 = _guard_xfg_dispatch_icall_nop(fVar22 * 0.99999994);
  fVar24 = _guard_xfg_dispatch_icall_nop(fVar25 * 0.008726646);
  fVar22 = local_1bc / fVar23;
  if (local_1bc / fVar23 <= local_1c4 / fVar24) {
    fVar22 = local_1c4 / fVar24;
  }
  fVar23 = *(float *)(param_1 + 0x68);
  FUN_14274f370(param_1,&local_1d0);
  fVar9 = local_200;
  local_1d8 = uVar2 ^ 0x80000000;
  local_1e0 = uVar1 ^ 0x80000000;
  fVar30 = local_208._4_4_ - (fVar22 + local_1c0 + fVar23);
  local_1f4 = 0x42b40000;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1dc = 0;
  local_1d4 = 0;
  local_1e8 = 0;
  fStack_16c = 1.0;
  pfVar20 = (float *)FRotationMatrix::FRotationMatrix(local_168,&local_1f8);
  fVar22 = *pfVar20;
  fVar23 = pfVar20[1];
  fVar24 = pfVar20[2];
  fVar8 = pfVar20[3];
  local_178 = (float)local_208;
  fStack_170 = fVar9;
  fVar42 = fVar23 * 0.0 + fVar22 * 1.0 + fVar24 * 0.0 + fVar8 * (float)local_208;
  fVar43 = fVar23 * 1.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fVar30;
  fVar44 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 1.0 + fVar8 * fVar9;
  fVar45 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fStack_16c;
  fVar22 = pfVar20[4];
  fVar23 = pfVar20[5];
  fVar24 = pfVar20[6];
  fVar8 = pfVar20[7];
  fVar38 = fVar23 * 0.0 + fVar22 * 1.0 + fVar24 * 0.0 + fVar8 * (float)local_208;
  fVar39 = fVar23 * 1.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fVar30;
  fVar40 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 1.0 + fVar8 * fVar9;
  fVar41 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fStack_16c;
  fVar22 = pfVar20[8];
  fVar23 = pfVar20[9];
  fVar24 = pfVar20[10];
  fVar8 = pfVar20[0xb];
  fVar31 = fVar23 * 0.0 + fVar22 * 1.0 + fVar24 * 0.0 + fVar8 * (float)local_208;
  fVar32 = fVar23 * 1.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fVar30;
  fVar33 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 1.0 + fVar8 * fVar9;
  fVar34 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fStack_16c;
  fVar22 = pfVar20[0xc];
  fVar23 = pfVar20[0xd];
  fVar24 = pfVar20[0xe];
  fVar8 = pfVar20[0xf];
  fVar26 = fVar23 * 0.0 + fVar22 * 1.0 + fVar24 * 0.0 + fVar8 * (float)local_208;
  fVar27 = fVar23 * 1.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fVar30;
  fVar28 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 1.0 + fVar8 * fVar9;
  fVar29 = fVar23 * 0.0 + fVar22 * 0.0 + fVar24 * 0.0 + fVar8 * fStack_16c;
  fStack_174 = fVar30;
  pfVar20 = (float *)FRotationMatrix::FRotationMatrix(&local_1a8,&local_1e8);
  fVar22 = pfVar20[4];
  fVar23 = pfVar20[5];
  fVar24 = pfVar20[6];
  fVar8 = pfVar20[7];
  fVar9 = *pfVar20;
  fVar30 = pfVar20[1];
  fVar10 = pfVar20[2];
  fVar11 = pfVar20[3];
  fVar12 = pfVar20[8];
  fVar13 = pfVar20[9];
  fVar14 = pfVar20[10];
  fVar15 = pfVar20[0xb];
  fVar16 = pfVar20[0xc];
  fVar17 = pfVar20[0xd];
  fVar18 = pfVar20[0xe];
  fVar19 = pfVar20[0xf];
  fVar35 = fVar42 * fVar9 + fVar43 * fVar22 + fVar44 * fVar12 + fVar45 * fVar16;
  fVar36 = fVar42 * fVar30 + fVar43 * fVar23 + fVar44 * fVar13 + fVar45 * fVar17;
  fVar37 = fVar42 * fVar10 + fVar43 * fVar24 + fVar44 * fVar14 + fVar45 * fVar18;
  fVar42 = fVar42 * fVar11 + fVar43 * fVar8 + fVar44 * fVar15 + fVar45 * fVar19;
  fVar43 = fVar38 * fVar9 + fVar39 * fVar22 + fVar40 * fVar12 + fVar41 * fVar16;
  fVar44 = fVar38 * fVar30 + fVar39 * fVar23 + fVar40 * fVar13 + fVar41 * fVar17;
  fVar45 = fVar38 * fVar10 + fVar39 * fVar24 + fVar40 * fVar14 + fVar41 * fVar18;
  fVar38 = fVar38 * fVar11 + fVar39 * fVar8 + fVar40 * fVar15 + fVar41 * fVar19;
  fVar39 = fVar31 * fVar9 + fVar32 * fVar22 + fVar33 * fVar12 + fVar34 * fVar16;
  fVar40 = fVar31 * fVar30 + fVar32 * fVar23 + fVar33 * fVar13 + fVar34 * fVar17;
  fVar41 = fVar31 * fVar10 + fVar32 * fVar24 + fVar33 * fVar14 + fVar34 * fVar18;
  fVar31 = fVar31 * fVar11 + fVar32 * fVar8 + fVar33 * fVar15 + fVar34 * fVar19;
  fVar32 = fVar26 * fVar9 + fVar27 * fVar22 + fVar28 * fVar12 + fVar29 * fVar16;
  fVar33 = fVar26 * fVar30 + fVar27 * fVar23 + fVar28 * fVar13 + fVar29 * fVar17;
  fVar34 = fVar26 * fVar10 + fVar27 * fVar24 + fVar28 * fVar14 + fVar29 * fVar18;
  fVar26 = fVar26 * fVar11 + fVar27 * fVar8 + fVar28 * fVar15 + fVar29 * fVar19;
  pfVar20 = (float *)FRotationMatrix::FRotationMatrix(local_128,&local_1dc);
  fVar22 = pfVar20[4];
  fVar23 = pfVar20[5];
  fVar24 = pfVar20[6];
  fVar8 = pfVar20[7];
  fVar9 = *pfVar20;
  fVar30 = pfVar20[1];
  fVar10 = pfVar20[2];
  fVar11 = pfVar20[3];
  fVar12 = pfVar20[8];
  fVar13 = pfVar20[9];
  fVar14 = pfVar20[10];
  fVar15 = pfVar20[0xb];
  fVar16 = pfVar20[0xc];
  fVar17 = pfVar20[0xd];
  fVar18 = pfVar20[0xe];
  fVar19 = pfVar20[0xf];
  local_1a8 = fVar35 * fVar9 + fVar36 * fVar22 + fVar37 * fVar12 + fVar42 * fVar16;
  fStack_1a4 = fVar35 * fVar30 + fVar36 * fVar23 + fVar37 * fVar13 + fVar42 * fVar17;
  fStack_1a0 = fVar35 * fVar10 + fVar36 * fVar24 + fVar37 * fVar14 + fVar42 * fVar18;
  fStack_19c = fVar35 * fVar11 + fVar36 * fVar8 + fVar37 * fVar15 + fVar42 * fVar19;
  local_198 = fVar43 * fVar9 + fVar44 * fVar22 + fVar45 * fVar12 + fVar38 * fVar16;
  fStack_194 = fVar43 * fVar30 + fVar44 * fVar23 + fVar45 * fVar13 + fVar38 * fVar17;
  fStack_190 = fVar43 * fVar10 + fVar44 * fVar24 + fVar45 * fVar14 + fVar38 * fVar18;
  fStack_18c = fVar43 * fVar11 + fVar44 * fVar8 + fVar45 * fVar15 + fVar38 * fVar19;
  local_188 = fVar39 * fVar9 + fVar40 * fVar22 + fVar41 * fVar12 + fVar31 * fVar16;
  fStack_184 = fVar39 * fVar30 + fVar40 * fVar23 + fVar41 * fVar13 + fVar31 * fVar17;
  fStack_180 = fVar39 * fVar10 + fVar40 * fVar24 + fVar41 * fVar14 + fVar31 * fVar18;
  fStack_17c = fVar39 * fVar11 + fVar40 * fVar8 + fVar41 * fVar15 + fVar31 * fVar19;
  local_178 = fVar32 * fVar9 + fVar33 * fVar22 + fVar34 * fVar12 + fVar26 * fVar16;
  fStack_174 = fVar32 * fVar30 + fVar33 * fVar23 + fVar34 * fVar13 + fVar26 * fVar17;
  fStack_170 = fVar32 * fVar10 + fVar33 * fVar24 + fVar34 * fVar14 + fVar26 * fVar18;
  fStack_16c = fVar32 * fVar11 + fVar33 * fVar8 + fVar34 * fVar15 + fVar26 * fVar19;
  FUN_140487e30(local_e8);
  FWeakObjectPtr::operator=(&local_1f8,0);
  iVar3 = *(int *)(in_stack_00000030 + 0xc0);
  fVar25 = _guard_xfg_dispatch_icall_nop(fVar25);
  uVar21 = IStreamingManager::Get();
  local_210 = &local_1f8;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0x3f800000;
  FUN_1423c8380(uVar21,&local_208,(float)iVar3,(float)iVar3 / fVar25);
  local_228 = local_228 & 0xffffff00;
  FUN_142398770(*(undefined8 *)(param_1 + 0x70),local_e8,0,0);
  lVar6 = *(longlong *)(param_1 + 0x30);
  *(float *)(lVar6 + 0x794) = *(float *)(lVar6 + 0x794) + 0.1;
  uVar5 = *(undefined4 *)(lVar6 + 0x794);
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x798) = uVar5;
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x790) = uVar5;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b8);
  (**(code **)(*plVar7 + 0x148))(plVar7,*(undefined8 *)(param_1 + 0x10));
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b8);
  (**(code **)(*plVar7 + 0xd0))(plVar7,*(undefined8 *)(param_1 + 0x70));
  return;
}



// FUNCTION 14274ac60 FUN_14274ac60 body=117 status=ok
// SIG undefined FUN_14274ac60(void)

void FUN_14274ac60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  undefined1 uVar1;
  
  if ((((&DAT_1464c9c48)[*(int *)(param_4 + 0x1a38)] - 8 < 3) ||
      ((&DAT_1464c9c48)[*(int *)(param_4 + 0x1a38)] == 0x18)) &&
     (*(char *)(param_1 + 0x21c) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FUN_1422e9400(param_1 + 0x10,param_2,param_3,*(int *)(param_4 + 0x1a38),uVar1,param_4,0,0x3f800000
                ,param_5);
  return;
}



// FUNCTION 14274ad60 FUN_14274ad60 body=164 status=ok
// SIG undefined FUN_14274ad60(void)

void FUN_14274ad60(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    lVar4 = 0x59;
    lVar1 = *plVar3 + 0x3ff8;
    do {
      lVar1 = lVar1 + -0xb8;
      FUN_1408bbda0(lVar1);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    FMemory::Free(*plVar3);
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14274ae10 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<int,FShaderMapFinalizeResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14274aea0 End body=380 status=ok
// SIG undefined End(void)

void FScopedGPUStatEvent::End(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (((DAT_146ab62df != '\0') && (*(int *)(DAT_146b095b0 + 4) != 0)) &&
     (*(int *)(DAT_146b095e0 + 4) != 0)) {
    uVar6 = FUN_14168db40();
    cVar5 = FTextFilterExpressionEvaluator::GetFilterType(uVar6);
    if (((cVar5 != '\0') && (lVar3 = *param_1, lVar3 != 0)) &&
       ((plVar7 = (longlong *)FRealtimeGPUProfiler::Get(), (char)plVar7[5] == '\0' &&
        ((*(char *)((longlong)plVar7 + 0x29) != '\0' && (-1 < (int)plVar7[2])))))) {
      plVar7 = *(longlong **)(*plVar7 + (longlong)(int)plVar7[2] * 8);
      iVar1 = *(int *)(plVar7[2] + -4 + (longlong)(int)plVar7[3] * 4);
      *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
      iVar2 = (int)plVar7[5];
      *(int *)(plVar7 + 5) = iVar2 + 1;
      if (*(int *)((longlong)plVar7 + 0x2c) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 4,iVar2);
      }
      *(ulonglong *)(plVar7[4] + (longlong)iVar2 * 8) = CONCAT44(iVar1,1);
      plVar7 = *(longlong **)(*plVar7 + (longlong)iVar1 * 8);
      *(undefined1 *)((longlong)plVar7 + 0x2c) = 0;
      if (*plVar7 != 0) {
        lVar4 = plVar7[1];
        puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar9 + 3;
        if (*(undefined8 **)(lVar3 + 0x38) < puVar8) {
          FMemStackBase::AllocateNewChunk(lVar3 + 0x30,0x20);
          puVar9 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar8 = puVar9 + 3;
        }
        *(undefined8 **)(lVar3 + 0x30) = puVar8;
        *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + 1;
        **(undefined8 **)(lVar3 + 8) = puVar9;
        *(undefined8 **)(lVar3 + 8) = puVar9 + 1;
        puVar9[1] = 0;
        *puVar9 = &PTR_LAB_143f59490;
        puVar9[2] = lVar4;
        *(undefined1 *)((longlong)plVar7 + 0x2e) = 1;
      }
    }
  }
  return;
}



// FUNCTION 14274b020 FUN_14274b020 body=1801 status=ok
// SIG undefined FUN_14274b020(void)

void FUN_14274b020(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  float *pfVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  lVar6 = FBlendableManager::GetSingleFinalData<FLightPropagationVolumeSettings>(param_1 + 0x19d8);
  pfVar10 = (float *)0x0;
  if (*(float *)(lVar6 + 0x20) <= 0.001 && *(float *)(lVar6 + 0x20) != 0.001) {
    *(undefined4 *)(lVar6 + 0x20) = 0;
  }
  if (*(float *)(lVar6 + 4) <= 0.001 && *(float *)(lVar6 + 4) != 0.001) {
    *(undefined4 *)(lVar6 + 4) = 0;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x100) == 0) {
    *(undefined4 *)(lVar6 + 4) = 0;
  }
  pvVar5 = ThreadLocalStoragePointer;
  uVar12 = (ulonglong)_tls_index;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
  if ((*(int *)(lVar6 + 0x38) < DAT_146b0a200) &&
     (_Init_thread_header(&DAT_146b0a200), DAT_146b0a200 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SceneColorFringeQuality");
    pfVar8 = pfVar10;
    if (plVar7 != (longlong *)0x0) {
      pfVar8 = (float *)(**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146b0a1f8 = pfVar8;
    _Init_thread_footer(&DAT_146b0a200);
  }
  if ((int)*DAT_146b0a1f8 < 1) {
    *(undefined4 *)(param_1 + 0x145c) = 0;
  }
  if ((*(int *)(lVar6 + 0x38) < DAT_146b0a210) &&
     (_Init_thread_header(&DAT_146b0a210), DAT_146b0a210 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BloomQuality");
    pfVar8 = pfVar10;
    if (plVar7 != (longlong *)0x0) {
      pfVar8 = (float *)(**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146b0a208 = pfVar8;
    _Init_thread_footer(&DAT_146b0a210);
  }
  if ((int)*DAT_146b0a208 < 1) {
    *(undefined4 *)(param_1 + 0x1468) = 0;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x28) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x1468) = 0;
  }
  iVar1 = *DAT_146b09a38;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x143c) = 0;
  }
  if (iVar1 < 2) {
    *(undefined4 *)(param_1 + 0x1650) = 0;
  }
  if (iVar1 < 3) {
    *(undefined4 *)(param_1 + 0x1404) = 0;
  }
  if (iVar1 < 4) {
    *(undefined4 *)(param_1 + 0x165c) = 0;
  }
  if (iVar1 < 5) {
    *(undefined4 *)(param_1 + 0x1658) = 0;
  }
  if ((*(int *)(lVar6 + 0x38) < DAT_146b0a220) &&
     (_Init_thread_header(&DAT_146b0a220), DAT_146b0a220 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DepthOfFieldQuality");
    pfVar8 = pfVar10;
    if (plVar7 != (longlong *)0x0) {
      pfVar8 = (float *)(**(code **)(*plVar7 + 0x38))(plVar7);
    }
    DAT_146b0a218 = pfVar8;
    _Init_thread_footer(&DAT_146b0a220);
  }
  if ((int)*DAT_146b0a218 < 1) {
    *(undefined4 *)(param_1 + 0x1738) = 0;
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  uVar11 = *(uint *)(lVar9 + 0x28);
  if ((uVar11 >> 0x13 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1738) = 0;
    uVar11 = *(uint *)(lVar9 + 0x28);
  }
  if ((uVar11 >> 9 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1650) = 0;
    uVar11 = *(uint *)(lVar9 + 0x28);
  }
  if ((uVar11 >> 10 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x1658) = 0;
    uVar11 = *(uint *)(lVar9 + 0x28);
  }
  if ((uVar11 >> 0xd & 1) == 0) {
    *(undefined4 *)(param_1 + 0x1528) = 0;
    uVar11 = *(uint *)(lVar9 + 0x28);
  }
  if ((uVar11 & 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x1900) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x1904)) {
      TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
                (param_1 + 0x1838,0);
    }
  }
  if (*(char *)(param_1 + 0x1714) == '\x02') {
    *(undefined4 *)(param_1 + 0x172c) = 0;
  }
  if (((*(longlong **)(DAT_146b17150 + 0xac8) != (longlong *)0x0) &&
      (*(int *)(param_1 + 0xf60) != 0)) &&
     (lVar9 = (**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))(), lVar9 != 0)) {
    plVar7 = (longlong *)(**(code **)(**(longlong **)(DAT_146b17150 + 0xac8) + 0xd8))();
    (**(code **)(*plVar7 + 0x128))(plVar7,param_1 + 0x1240);
  }
  if (0.0 <= *DAT_146b09638) {
    *(float *)(param_1 + 0x17cc) = *DAT_146b09638;
  }
  if (0.0 <= *DAT_146b096d8) {
    *(float *)(param_1 + 0x17c4) = *DAT_146b096d8;
  }
  if (0.0 <= *DAT_146b09778) {
    *(float *)(param_1 + 0x17c8) = *DAT_146b09778;
  }
  if ((*(int *)(lVar6 + 0x38) < DAT_146b0a230) &&
     (_Init_thread_header(&DAT_146b0a230), DAT_146b0a230 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AmbientOcclusionStaticFraction")
    ;
    pfVar8 = pfVar10;
    if (plVar7 != (longlong *)0x0) {
      pfVar8 = (float *)(**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146b0a228 = pfVar8;
    _Init_thread_footer(&DAT_146b0a230);
  }
  if (0.0 <= *DAT_146b0a228) {
    *(float *)(param_1 + 0x1664) = *DAT_146b0a228;
  }
  if (((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x800) == 0) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c) & 0x20000000) == 0)) {
    *(uint *)(param_1 + 0x1694) = *(uint *)(param_1 + 0x1694) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x1660) = 0;
  }
  if ((*(int *)(lVar6 + 0x38) < DAT_146b0a240) &&
     (_Init_thread_header(&DAT_146b0a240), DAT_146b0a240 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AmbientOcclusionRadiusScale");
    pfVar8 = pfVar10;
    if (plVar7 != (longlong *)0x0) {
      pfVar8 = (float *)(**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146b0a238 = pfVar8;
    _Init_thread_footer(&DAT_146b0a240);
  }
  fVar14 = *DAT_146b0a238;
  fVar13 = 0.1;
  if ((0.1 <= fVar14) && (fVar13 = fVar14, 15.0 <= fVar14)) {
    fVar13 = 15.0;
  }
  *(float *)(param_1 + 0x1668) = fVar13 * *(float *)(param_1 + 0x1668);
  fVar14 = *DAT_146b09818;
  fVar13 = 0.01;
  if ((0.01 <= fVar14) && (fVar13 = fVar14, 50.0 <= fVar14)) {
    fVar13 = 50.0;
  }
  *(float *)(param_1 + 0x1678) = fVar13 * *(float *)(param_1 + 0x1678);
  fVar14 = *DAT_146b099c0;
  if (0.0 <= fVar14) {
    if (50.0 <= fVar14) {
      fVar14 = 50.0;
    }
  }
  else {
    fVar14 = 0.0;
  }
  *(float *)(param_1 + 0x177c) = fVar14 * *(float *)(param_1 + 0x177c);
  if (0.0 <= *DAT_146b099d8) {
    *(float *)(param_1 + 0x177c) = *DAT_146b099d8;
  }
  if (0.0 <= *DAT_146b099f0) {
    *(float *)(param_1 + 0x1780) = *DAT_146b099f0;
  }
  if (0.0 <= *DAT_146b09a08) {
    *(float *)(param_1 + 0x1784) = *DAT_146b09a08;
  }
  fVar14 = *DAT_146b09a20;
  if (fVar14 < 0.0) {
    if (fVar14 == -2.0) {
      *(undefined4 *)(param_1 + 0x145c) = 0x40a00000;
    }
  }
  else {
    fVar13 = *(float *)(param_1 + 0x145c);
    if (fVar14 <= *(float *)(param_1 + 0x145c)) {
      fVar13 = fVar14;
    }
    *(float *)(param_1 + 0x145c) = fVar13;
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  if ((*(uint *)(lVar6 + 0x28) & 0x402000) != 0x402000) {
    *(undefined4 *)(param_1 + 0x145c) = 0;
  }
  if (((*(uint *)(lVar6 + 0x2c) & 0x1000) == 0) || ((*(uint *)(lVar6 + 0x28) & 0x100) == 0)) {
    *(undefined4 *)(param_1 + 0x16d0) = 0;
    *(undefined8 *)(param_1 + 0x16c0) = 0;
    *(undefined8 *)(param_1 + 0x16c8) = 0;
  }
  if ((*(uint *)(lVar6 + 0x28) & 0x1000000) == 0) {
    fVar14 = 100.0;
  }
  else {
    fVar13 = *(float *)(param_1 + 0x1808);
    fVar14 = 1.0;
    if ((1.0 <= fVar13) && (fVar14 = fVar13, 400.0 <= fVar13)) {
      fVar14 = 400.0;
    }
  }
  *(float *)(param_1 + 0x1808) = fVar14;
  uVar2 = *(undefined4 *)(param_2 + 0x294);
  uVar3 = *(undefined4 *)(param_2 + 0x298);
  uVar4 = *(undefined4 *)(param_2 + 0x29c);
  *(undefined4 *)(param_1 + 0x19e8) = *(undefined4 *)(param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x19ec) = uVar2;
  *(undefined4 *)(param_1 + 0x19f0) = uVar3;
  *(undefined4 *)(param_1 + 0x19f4) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x2a4);
  uVar3 = *(undefined4 *)(param_2 + 0x2a8);
  uVar4 = *(undefined4 *)(param_2 + 0x2ac);
  *(undefined4 *)(param_1 + 0x19f8) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x19fc) = uVar2;
  *(undefined4 *)(param_1 + 0x1a00) = uVar3;
  *(undefined4 *)(param_1 + 0x1a04) = uVar4;
  if (*(char *)(param_2 + 0x2b0) == '\0') {
    *(uint *)(param_1 + 0x1694) = *(uint *)(param_1 + 0x1694) & 0xfffffffe;
    *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x1660) = 0;
  }
  if (*DAT_146b098b8 == 0) {
    *(uint *)(param_1 + 0x1694) = *(uint *)(param_1 + 0x1694) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x1660) = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)pvVar5 + uVar12 * 8) + 0x38) < DAT_146b0a250) &&
     (_Init_thread_header(&DAT_146b0a250), DAT_146b0a250 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Tonemapper.OverrideToe");
    if (plVar7 != (longlong *)0x0) {
      pfVar10 = (float *)(**(code **)(*plVar7 + 0x40))(plVar7);
    }
    DAT_146b0a248 = pfVar10;
    _Init_thread_footer(&DAT_146b0a250);
  }
  *(float *)(param_1 + 0x13d0) = *DAT_146b0a248 + *(float *)(param_1 + 0x13d0);
  return;
}



// FUNCTION 14274b730 EndFrame body=181 status=ok
// SIG undefined EndFrame(void)

ulonglong FRealtimeGPUProfiler::EndFrame(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  
  *(undefined1 *)((longlong)param_1 + 0x29) = 0;
  if (((DAT_146ab62df != '\0') && (in_RAX = DAT_146b095b0, *(int *)(DAT_146b095b0 + 4) != 0)) &&
     (in_RAX = DAT_146b095e0, *(int *)(DAT_146b095e0 + 4) != 0)) {
    uVar2 = FUN_14168db40();
    in_RAX = FTextFilterExpressionEvaluator::GetFilterType(uVar2);
    if ((char)in_RAX != '\0') {
      in_RAX = FUN_142760990(*(undefined8 *)
                              (*param_1 + (longlong)*(int *)((longlong)param_1 + 0x14) * 8),param_2)
      ;
      if ((char)in_RAX != '\0') {
        FUN_142748420(*(undefined8 *)(*param_1 + (longlong)*(int *)((longlong)param_1 + 0x14) * 8),
                      param_2);
        *(undefined4 *)(param_1 + 3) = DAT_1464aaa90;
        *(undefined1 *)(param_1 + 5) = 0;
        iVar1 = *(int *)((longlong)param_1 + 0x14) + 1;
        *(int *)(param_1 + 2) = ((int)param_1[2] + 1) % (int)param_1[1];
        *(int *)((longlong)param_1 + 0x14) = iVar1 % (int)param_1[1];
        return (longlong)iVar1 / (longlong)(int)param_1[1] & 0xffffffff;
      }
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return in_RAX;
}



// FUNCTION 14274b7f0 FUN_14274b7f0 body=1557 status=ok
// SIG undefined FUN_14274b7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_14274b7f0(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,char param_6)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined1 local_d0;
  longlong *local_c8;
  longlong local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar10 = param_2[2];
  local_90 = param_5;
  local_c8 = param_3;
  local_98 = param_4;
  if (lVar10 == 0) {
LAB_14274b86a:
    lVar10 = 0;
  }
  else {
    lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14274b86a;
  }
  pcVar6 = (char *)0x0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_146b0a580) &&
     (_Init_thread_header(&DAT_146b0a580), DAT_146b0a580 == -1)) {
    FBoolConfigValueHelper::FBoolConfigValueHelper
              (&DAT_146b0a57c,L"Kismet",L"bEnableInheritableComponents",&DAT_1468e2360);
    _Init_thread_footer(&DAT_146b0a580);
  }
  if ((DAT_146b0a57c != '\0') &&
     (lVar9 = *(longlong *)(param_1 + 0x20), lVar9 != *(longlong *)(lVar10 + 0x238))) {
    FComponentKey::FComponentKey(&local_b8,param_1);
    lVar8 = lVar10;
    do {
      lVar5 = FUN_1422f1d40(lVar8,0);
      if (lVar5 != 0) {
        local_78 = local_b8;
        plStack_70 = plStack_b0;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        pcVar6 = (char *)UInheritableComponentHandler::GetOverridenComponentTemplateData(lVar5);
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
      if (lVar8 == 0) {
LAB_14274b93d:
        lVar8 = 0;
      }
      else {
        lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_14274b93d;
      }
      if (pcVar6 != (char *)0x0) goto LAB_14274b95f;
    } while ((lVar8 != 0) && (lVar9 != *(longlong *)(lVar8 + 0x238)));
  }
  pcVar6 = (char *)(param_1 + 0x38);
  if (pcVar6 == (char *)0x0) {
LAB_14274b97b:
    lVar9 = 0;
    if ((*(int *)(lVar4 + 0x38) < DAT_146b0a578) &&
       (_Init_thread_header(&DAT_146b0a578), DAT_146b0a578 == -1)) {
      FBoolConfigValueHelper::FBoolConfigValueHelper
                (&DAT_146b0a574,L"Kismet",L"bEnableInheritableComponents",&DAT_1468e2360);
      _Init_thread_footer(&DAT_146b0a578);
    }
    if ((DAT_146b0a574 != '\0') &&
       (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != *(longlong *)(lVar10 + 0x238))) {
      FComponentKey::FComponentKey(&local_78,param_1);
      do {
        lVar8 = FUN_1422f1d40(lVar10,0);
        if (lVar8 != 0) {
          local_b8 = local_78;
          plStack_b0 = plStack_70;
          local_a8 = local_68;
          uStack_a4 = uStack_64;
          uStack_a0 = uStack_60;
          uStack_9c = uStack_5c;
          lVar9 = UInheritableComponentHandler::GetOverridenComponentTemplate(lVar8);
        }
        lVar10 = *(longlong *)(lVar10 + 0x30);
        if (lVar10 == 0) {
LAB_14274ba2d:
          lVar10 = 0;
        }
        else {
          lVar8 = UBlueprintGeneratedClass::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14274ba2d;
        }
        if (lVar9 != 0) goto LAB_14274ba53;
      } while ((lVar10 != 0) && (lVar4 != *(longlong *)(lVar10 + 0x238)));
    }
    lVar9 = *(longlong *)(param_1 + 0x30);
    if (lVar9 == 0) {
      return (longlong *)0x0;
    }
LAB_14274ba53:
    plVar7 = (longlong *)FUN_142227070(param_2,lVar9,*(undefined8 *)(param_1 + 0xf8));
  }
  else {
LAB_14274b95f:
    if (*pcVar6 == '\0') goto LAB_14274b97b;
    plVar7 = (longlong *)FUN_142227140(param_2,pcVar6,*(undefined8 *)(param_1 + 0xf8));
  }
  if (plVar7 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  *(undefined1 *)((longlong)plVar7 + 0xca) = 1;
  FUN_1423511e0(plVar7);
  if ((*(byte *)(plVar7 + 0x19) & 8) == 0) {
    (**(code **)(*plVar7 + 0x3b8))(plVar7);
  }
  if ((*(byte *)(plVar7 + 0x17) & 8) != 0) {
    FUN_142350b20(plVar7,1);
  }
  lVar10 = FUN_1429ff160();
  plVar15 = local_c8;
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
      lVar10 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    plVar13 = plVar7;
    if (local_c8 != (longlong *)0x0) {
      iVar1 = *(int *)((longlong)local_c8 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar11 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar11;
        lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                 (longlong)(int)((uVar3 & 0xffff) - uVar11) * 0x18;
      }
      else {
        lVar10 = 0;
      }
      if (((*(uint *)(lVar10 + 8) >> 0x1d & 1) == 0) && (local_c8 != plVar7)) {
        FUN_142399e30(plVar7,local_c8,*(undefined8 *)(param_1 + 0x90));
        FUN_1427800b0(plVar7);
        goto LAB_14274bc02;
      }
    }
    local_78 = *local_98;
    plStack_70 = (longlong *)local_98[1];
    local_68 = (undefined4)local_98[2];
    uStack_64 = *(undefined4 *)((longlong)local_98 + 0x14);
    uStack_60 = (undefined4)local_98[3];
    uStack_5c = *(undefined4 *)((longlong)local_98 + 0x1c);
    local_58 = *(undefined1 (*) [16])(local_98 + 4);
    if (param_6 != '\0') {
      local_58._12_4_ = 0;
      local_58._0_12_ = *(undefined1 (*) [12])((longlong)plVar7 + 0x204);
    }
    if (local_90 != 0) {
      FUN_1423985a0(plVar7,local_90);
    }
    local_d8 = local_d8 & 0xffffffffffffff00;
    FUN_142399d60(plVar7,&local_78,0,0);
    FUN_14223f010(param_2,plVar7);
    if ((*(byte *)((longlong)param_2 + 0x93) & 0x20) != 0) {
      (**(code **)(*param_2 + 0x4c0))(param_2);
    }
    FUN_1427800b0(plVar7);
  }
  else {
    plVar13 = (longlong *)0x0;
  }
LAB_14274bc02:
  uVar12 = 0;
  lVar10 = *(longlong *)(param_1 + 0xf8);
  local_c8 = (longlong *)0x0;
  local_88 = lVar10;
  if (lVar10 != 0) {
    lVar4 = param_2[2];
    if (((int)lVar10 == 0) && ((int)((ulonglong)lVar10 >> 0x20) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      if (lVar4 == 0) {
        plStack_b0 = (longlong *)0x0;
      }
      else {
        plStack_b0 = *(longlong **)(lVar4 + 0x38);
      }
      local_a8 = 0xffffffff;
      uStack_a4 = CONCAT13(uStack_a4._3_1_,0x101);
      local_b8 = lVar4;
      FUN_140c49360(&local_b8);
      while (plStack_b0 != (longlong *)0x0) {
        if (plStack_b0[3] == lVar10) {
          lVar10 = plStack_b0[0xe];
          if (lVar10 != 0) {
            if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) break;
          }
          (**(code **)(*plStack_b0 + 0x380))
                    (plStack_b0,(longlong)*(int *)((longlong)plStack_b0 + 0x44) + (longlong)param_2,
                     plVar7);
          break;
        }
        plStack_b0 = (longlong *)plStack_b0[5];
        FUN_140c49360(&local_b8);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    plVar15 = plVar13;
  }
  uVar14 = uVar12;
  if (0 < *(int *)(param_1 + 0xb8)) {
    do {
      local_d0 = 0;
      local_d8 = 0;
      FUN_14274b7f0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + uVar12),param_2,plVar15,0);
      uVar3 = (int)uVar14 + 1;
      uVar12 = uVar12 + 8;
      uVar14 = (ulonglong)uVar3;
    } while ((int)uVar3 < *(int *)(param_1 + 0xb8));
  }
  return plVar7;
}



// FUNCTION 14274be10 FindId body=411 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)param_3[1];
    iVar5 = (int)(*param_3 >> 4);
    uVar7 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar8 = -(uVar7 + iVar5) ^ uVar7 >> 0xd;
    uVar6 = (iVar5 - uVar7) - uVar8 ^ uVar8 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 << 0x10;
    uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar8 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar8 ^ uVar6 << 10;
    uVar8 = ((uVar8 - uVar7) - uVar6 ^ uVar7 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
    uVar7 = (-0x61c88647 - uVar8) - uVar1 ^ uVar8 << 8;
    uVar6 = (uVar1 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar6 >> 0xc;
    uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 0x10;
    uVar6 = (uVar6 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar6 ^ uVar6 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar6 ^ uVar8 << 10;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (((longlong)(int)((uVar6 - uVar7) - uVar8) ^ (ulonglong)(uVar7 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar5 * 0x20;
        if ((*(ulonglong *)(lVar4 + lVar2) == *param_3) && (*(uint *)(lVar4 + 8 + lVar2) == uVar1))
        {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(lVar4 + 0x18 + lVar2);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14274bfb0 FUN_14274bfb0 body=1267 status=ok
// SIG undefined FUN_14274bfb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14274bfb0(longlong param_1,short *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  longlong local_258;
  ulonglong local_250;
  longlong local_248 [2];
  undefined1 local_238 [8];
  undefined1 local_230 [8];
  longlong *local_228;
  longlong *local_218;
  undefined4 *local_210;
  LARGE_INTEGER local_208;
  LARGE_INTEGER local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong *local_98;
  undefined1 local_6c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  QueryPerformanceCounter(&local_208);
  FText::FText(local_230);
  lVar7 = -1;
  if (param_2 == (short *)0x0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1b0,L"Compiling shaders...",L"ShaderCompilingManager",
                       L"CompilingShadersStatus");
    FText::operator=(local_230,uVar5);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1a8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar2 = (int *)((longlong)local_1a8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
  }
  else {
    local_138 = 0;
    local_258 = 0;
    local_130 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_250 = 0;
    if (*param_2 != 0) {
      do {
        lVar7 = lVar7 + 1;
      } while (param_2[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_250 = (ulonglong)uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
      }
      FGenericPlatformString::Memcpy(local_258,param_2,(longlong)(int)uVar6 * 2);
    }
    uVar5 = FText::FromString(local_1f8,&local_258);
    local_e8[0] = 4;
    FText::FText(local_d8,uVar5);
    local_c0 = '\x01';
    local_248[0] = 0;
    local_248[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_248,0);
    FGenericPlatformString::Memcpy(local_248[0],L"MaterialName",0x1a);
    local_218 = local_248;
    local_210 = local_e8;
    FUN_1407484b0(&local_138,local_238,&local_218,0);
    if (local_248[0] != 0) {
      FMemory::Free();
    }
    if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)local_1f0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    if (local_258 != 0) {
      FMemory::Free();
    }
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1c8,L"Compiling shaders: {MaterialName}...",L"ShaderCompilingManager",
                       L"CompilingShadersForMaterialStatus");
    uVar5 = FTextFormat::FTextFormat(local_198,uVar5);
    uVar5 = FText::Format(local_1e0,uVar5,&local_138);
    FText::operator=(local_230,uVar5);
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)local_1c0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    local_f0 = 0;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_138);
  }
  local_268 = DAT_1468b6160;
  FUN_141660a80(local_b8,0,local_230,0);
  FSlowTask::Initialize(local_b8);
  local_188[0] = 0;
  local_188[1] = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  TMap<int,FShaderMapFinalizeResults,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>_>
  ::Append<FDefaultSetAllocator>(local_188,param_1 + 0x98);
  TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x98,0);
  FUN_142747b30(param_1,param_3,local_188);
  do {
    cVar4 = FUN_142752a10(param_1,local_188);
  } while (cVar4 != '\0');
  FUN_1427588f0(param_1,local_188,0x7f7fffff);
  QueryPerformanceCounter(&local_200);
  local_140 = 0;
  if (local_148 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FShaderMapFinalizeResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_188,0);
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (local_188[0] != 0) {
    FMemory::Free();
  }
  FUN_14166a2b0(local_b8);
  local_6c = 0;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_228 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar2 = (int *)((longlong)local_228 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_228 + 8))(local_228,1);
      }
    }
  }
  return;
}



// FUNCTION 14274c4b0 FUN_14274c4b0 body=518 status=ok
// SIG undefined FUN_14274c4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14274c4b0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  longlong local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar7 = 0;
  if (*(char *)(param_2 + 0x15) != '\0') {
    uVar8 = uVar7;
    if (*(code **)(*(ulonglong *)(param_2 + 0x20) + 0x40) != AK::MemoryMgr::StartProfileThreadUsage)
    {
      uVar7 = (ulonglong)*(uint *)(param_2 + 0x28);
      uVar8 = *(ulonglong *)(param_2 + 0x20);
    }
    lVar1 = param_2 + 0x328;
    uVar5 = FUN_1419ee150(lVar1,uVar8,uVar7);
    if ((param_3 != 0) && (*(char *)(param_3 + 0x6c) == '\0')) {
      param_3 = 0;
    }
    local_d8 = *(undefined4 *)(param_2 + 0x30);
    local_e0 = *(undefined4 *)(param_2 + 0x28);
    local_e8 = *(undefined8 *)(param_2 + 0x20);
    uVar6 = FUN_1419d78c0(&local_c8,&DAT_1469f5c20,param_3,0);
    uVar7 = FShaderType::FindShaderById(*(undefined8 *)(param_2 + 0x20),uVar6);
    if (uVar7 == 0) {
      local_c0 = *(undefined4 *)(param_2 + 0x398);
      plVar2 = (longlong *)(param_2 + 0x3a8);
      uVar3 = *(undefined4 *)(param_2 + 0x28);
      local_c8 = param_1;
      if (*(int *)(param_2 + 0x3a0) != -1) {
        *(int *)(param_2 + 0x3a0) = *(int *)(param_2 + 0x3a0) + 4;
        iVar4 = *(int *)(param_2 + 0x3b0);
        *(int *)(param_2 + 0x3b0) = iVar4 + 4;
        if (*(int *)(param_2 + 0x3b4) < iVar4 + 4) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar2,iVar4);
        }
        *(undefined4 *)((longlong)iVar4 + *plVar2) = *(undefined4 *)(param_2 + 0x3a0);
        *(undefined4 *)(param_2 + 0x3a0) = 0xffffffff;
      }
      local_a8 = param_2 + 0x3b8;
      local_98 = _DAT_1469f5c20;
      uStack_94 = uRam00000001469f5c24;
      uStack_90 = _DAT_1469f5c28;
      uStack_8c = uRam00000001469f5c2c;
      local_88 = DAT_1469f5c30;
      local_78 = 0;
      local_b8 = plVar2;
      local_b0 = lVar1;
      local_a0 = uVar5;
      local_80 = param_3;
      local_70 = uVar3;
      uVar7 = (**(code **)(param_1 + 0x130))(&local_c8);
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar1);
    }
  }
  if ((0 < *(int *)(param_2 + 0x380)) && (*(char *)(param_2 + 0x15) != '\0')) {
    (**(code **)(*DAT_146b09f50 + 0x68))();
  }
  return uVar7;
}



// FUNCTION 14274c6c0 FinishRecompileGlobalShaders body=17 status=ok
// SIG undefined FinishRecompileGlobalShaders(void)

void FinishRecompileGlobalShaders(void)

{
  FShaderCompilingManager::ProcessAsyncResults(DAT_146b09470,0,1);
  return;
}



// FUNCTION 14274c6e0 GatherActiveExtensions body=401 status=ok
// SIG undefined GatherActiveExtensions(void)

longlong *
FSceneViewExtensions::GatherActiveExtensions(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_res8 [16];
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar6 = (int)param_1[1];
  if (0 < iVar6) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,iVar6);
    iVar6 = (int)param_1[1];
  }
  param_1 = (longlong *)*param_1;
  plVar8 = param_1 + (longlong)iVar6 * 2;
  do {
    if (param_1 == plVar8) {
      AlgoImpl::
      IntroSortInternal<TSharedRef<ISceneViewExtension,1>,FIdentityFunctor,TDereferenceWrapper<TSharedRef<ISceneViewExtension,1>,_FSceneViewExtensions::GatherActiveExtensions_::_2_::SortPriority>_>
                (*param_2,(longlong)(int)param_2[1],local_res8[0],local_res8);
      return param_2;
    }
    plVar2 = (longlong *)param_1[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(plVar2 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (!bVar9) {
        LOCK();
        bVar9 = iVar6 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) {
          plVar3 = (longlong *)*param_1;
          if ((plVar3 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_3), cVar5 != '\0')) {
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            iVar6 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar6 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar6);
            }
            plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *param_2);
            *plVar7 = (longlong)plVar3;
            plVar7[1] = (longlong)plVar2;
            LOCK();
            *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
            UNLOCK();
            LOCK();
            plVar3 = plVar2 + 1;
            lVar4 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          LOCK();
          plVar3 = plVar2 + 1;
          lVar4 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    param_1 = param_1 + 2;
  } while( true );
}



// FUNCTION 14274c880 GenerateInstancedStereoCode body=4357 status=ok
// SIG undefined GenerateInstancedStereoCode(void)

void GenerateInstancedStereoCode(undefined2 **param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined2 *local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  ulonglong uVar13;
  
  iVar11 = 0;
  puVar7 = (undefined8 *)FUniformBufferStruct::GetStructList();
  puVar7 = (undefined8 *)*puVar7;
  do {
    lVar10 = 0;
    if (puVar7 == (undefined8 *)0x0) {
LAB_14274c927:
      local_48 = (undefined2 *)0x0;
      local_40 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,0x13,"struct ViewState\r\n",0x13,0x3f);
      if (param_1 == &local_48) {
        if (puVar2 != (undefined2 *)0x0) {
          FMemory::Free(puVar2);
        }
      }
      else {
        if (*param_1 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        *param_1 = puVar2;
        *(int *)(param_1 + 1) = (int)local_40;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_40._4_4_;
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,4,&DAT_14518c164,4,0x3f);
      if (((int)local_40 != 0) && (iVar4 = (int)local_40 + -1, iVar4 != 0)) {
        iVar6 = *(int *)(param_1 + 1);
        iVar5 = (uint)(iVar6 == 0) + iVar4 + iVar6;
        *(int *)(param_1 + 1) = iVar5;
        if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),puVar2,(longlong)iVar4 * 2);
        (puVar8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar4] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      if (0 < *(int *)(lVar10 + 0x68)) {
        do {
          local_48 = (undefined2 *)0x0;
          local_40 = 0;
          FUN_14274d990(&local_48,(longlong)iVar11 * 0x30 + *(longlong *)(lVar10 + 0x60));
          puVar2 = local_48;
          puVar8 = &DAT_143f3eda8;
          if ((int)local_40 != 0) {
            puVar8 = local_48;
          }
          FString::PrintfImpl(&local_38,L"\t%s;\r\n",puVar8);
          pvVar3 = local_38;
          if (local_30 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = local_30 + -1;
          }
          if (iVar4 != 0) {
            iVar6 = *(int *)(param_1 + 1);
            iVar5 = (uint)(iVar6 == 0) + iVar4 + iVar6;
            *(int *)(param_1 + 1) = iVar5;
            if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
            }
            puVar8 = *param_1;
            _guard_xfg_dispatch_icall_nop
                      (puVar8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),pvVar3,
                       (longlong)iVar4 * 2);
            (puVar8 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[iVar4] = 0;
          }
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
          if (puVar2 != (undefined2 *)0x0) {
            FMemory::Free(puVar2);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar10 + 0x68));
      }
      uVar9 = 0;
      local_48 = (undefined2 *)0x0;
      local_40 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,5,&DAT_14518ce74,5,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x1d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x1d,"ViewState GetPrimaryView()\r\n",0x1d,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,4,&DAT_14518d2d4,4,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x15,"\tViewState Result;\r\n",0x15,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      uVar13 = uVar9;
      if (0 < *(int *)(lVar10 + 0x68)) {
        do {
          uVar1 = *(undefined8 *)(uVar9 + *(longlong *)(lVar10 + 0x60));
          FString::PrintfImpl(&local_38,L"\tResult.%s = View.%s;\r\n",uVar1,uVar1);
          pvVar3 = local_38;
          if (local_30 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_30 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = *(int *)(param_1 + 1);
            iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
            *(int *)(param_1 + 1) = iVar6;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
            }
            puVar2 = *param_1;
            _guard_xfg_dispatch_icall_nop
                      (puVar2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),pvVar3,
                       (longlong)iVar11 * 2);
            (puVar2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
          }
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar9 = uVar9 + 0x30;
        } while ((int)uVar12 < *(int *)(lVar10 + 0x68));
      }
      uVar9 = 0;
      local_48 = (undefined2 *)0x0;
      local_40 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,0x12,"\treturn Result;\r\n",0x12,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,4,&DAT_14518d354,4,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x1f;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x1f,"ViewState GetInstancedView()\r\n",0x1f,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,4,&DAT_14518d784,4,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x15,"\tViewState Result;\r\n",0x15,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      uVar13 = uVar9;
      if (0 < *(int *)(lVar10 + 0x68)) {
        do {
          uVar1 = *(undefined8 *)(uVar9 + *(longlong *)(lVar10 + 0x60));
          FString::PrintfImpl(&local_38,L"\tResult.%s = InstancedView.%s;\r\n",uVar1,uVar1);
          pvVar3 = local_38;
          if (local_30 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_30 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = *(int *)(param_1 + 1);
            iVar6 = (uint)(iVar4 == 0) + iVar4 + iVar11;
            *(int *)(param_1 + 1) = iVar6;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
            }
            puVar2 = *param_1;
            _guard_xfg_dispatch_icall_nop
                      (puVar2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),pvVar3,
                       (longlong)iVar11 * 2);
            (puVar2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
          }
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar9 = uVar9 + 0x30;
        } while ((int)uVar12 < *(int *)(lVar10 + 0x68));
      }
      uVar9 = 0;
      local_48 = (undefined2 *)0x0;
      local_40 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,0x12,"\treturn Result;\r\n",0x12,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar4 + iVar11;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,4,&DAT_14518dae4,4,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar4 + iVar11;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x15,"#if COMPILER_METAL\r\n",0x15,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar4 + iVar11;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x28;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x28,"ViewState ResolveView(uint ViewIndex)\r\n",0x28,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar4 + iVar11;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,4,&DAT_14518db14,4,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_48,0x15,"\tViewState Result;\r\n",0x15,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      uVar13 = uVar9;
      if (0 < *(int *)(lVar10 + 0x68)) {
        do {
          uVar1 = *(undefined8 *)(uVar9 + *(longlong *)(lVar10 + 0x60));
          FString::PrintfImpl(&local_38,
                              L"\tResult.%s = (ViewIndex == 0) ? View.%s : InstancedView.%s;\r\n",
                              uVar1,uVar1,uVar1);
          pvVar3 = local_38;
          if (local_30 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_30 + -1;
          }
          if (iVar11 != 0) {
            iVar4 = *(int *)(param_1 + 1);
            iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
            *(int *)(param_1 + 1) = iVar6;
            if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
            }
            puVar2 = *param_1;
            _guard_xfg_dispatch_icall_nop
                      (puVar2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),pvVar3,
                       (longlong)iVar11 * 2);
            (puVar2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
          }
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
          uVar12 = (int)uVar13 + 1;
          uVar9 = uVar9 + 0x30;
          uVar13 = (ulonglong)uVar12;
        } while ((int)uVar12 < *(int *)(lVar10 + 0x68));
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 0x12;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,0x12,"\treturn Result;\r\n",0x12,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,4,&DAT_14518db44,4,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      local_48 = (undefined2 *)0x0;
      local_40 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar2 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,9,"#endif\r\n",9,0x3f);
      if (((int)local_40 != 0) && (iVar11 = (int)local_40 + -1, iVar11 != 0)) {
        iVar4 = *(int *)(param_1 + 1);
        iVar6 = (uint)(iVar4 == 0) + iVar11 + iVar4;
        *(int *)(param_1 + 1) = iVar6;
        if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
        }
        puVar8 = *param_1;
        _guard_xfg_dispatch_icall_nop
                  (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)),puVar2,(longlong)iVar11 * 2)
        ;
        (puVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)))[iVar11] = 0;
      }
      if (puVar2 != (undefined2 *)0x0) {
        FMemory::Free(puVar2);
      }
      return;
    }
    local_48 = (undefined2 *)0x0;
    local_40 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar2 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"InstancedView",0x1c);
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(*(undefined8 *)(puVar7[2] + 0x10));
    if (puVar2 != (undefined2 *)0x0) {
      FMemory::Free(puVar2);
    }
    if (iVar4 == 0) {
      lVar10 = puVar7[2];
      goto LAB_14274c927;
    }
    puVar7 = (undefined8 *)*puVar7;
  } while( true );
}



// FUNCTION 14274d990 FUN_14274d990 body=843 status=ok
// SIG undefined FUN_14274d990(void)

void FUN_14274d990(wchar_t **param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  int local_30;
  
  iVar1 = *(int *)((longlong)param_2 + 0x14);
  pwVar3 = (wchar_t *)0x0;
  local_40 = 0;
  local_48 = (wchar_t *)0x0;
  if (iVar1 == 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,5);
    iVar1 = (int)local_40 + 5;
    local_40 = CONCAT44(local_40._4_4_,iVar1);
    if (local_40._4_4_ < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
    }
    builtin_wcsncpy(local_48,L"bool",4);
  }
  else {
    if (iVar1 == 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,4);
      iVar1 = (int)local_40 + 4;
      local_40 = CONCAT44(local_40._4_4_,iVar1);
      if (local_40._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      }
      builtin_wcsncpy(local_48,L"int",4);
      pwVar2 = local_48;
      goto LAB_14274dbb1;
    }
    if (iVar1 == 3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,5);
      iVar1 = (int)local_40 + 5;
      local_40 = CONCAT44(local_40._4_4_,iVar1);
      if (local_40._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      }
      builtin_wcsncpy(local_48,L"uint",4);
    }
    else {
      if (iVar1 != 4) {
        LowLevelFatalErrorHandler
                  ("Unknown",0xaa7,L"Unrecognized uniform buffer struct member base type.");
        FDebug::AssertFailed
                  (&DAT_14518a33a,"Unknown",0xaa7,
                   L"Unrecognized uniform buffer struct member base type.");
        pwVar2 = pwVar3;
        goto LAB_14274dbb1;
      }
      iVar1 = *(int *)(param_2 + 3);
      if (iVar1 == 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,6);
        iVar1 = (int)local_40 + 6;
        local_40 = CONCAT44(local_40._4_4_,iVar1);
        if (local_40._4_4_ < iVar1) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        }
        builtin_wcsncpy(local_48,L"float",6);
        pwVar2 = local_48;
        goto LAB_14274dbb1;
      }
      if (iVar1 != 1) {
        pwVar2 = (wchar_t *)0x0;
        if (iVar1 == 2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,6);
          iVar1 = (int)local_40 + 6;
          local_40 = CONCAT44(local_40._4_4_,iVar1);
          if (local_40._4_4_ < iVar1) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
          }
          builtin_wcsncpy(local_48,L"fixed",6);
          pwVar2 = local_48;
        }
        goto LAB_14274dbb1;
      }
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,5);
      iVar1 = (int)local_40 + 5;
      local_40 = CONCAT44(local_40._4_4_,iVar1);
      if (local_40._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      }
      builtin_wcsncpy(local_48,L"half",4);
    }
  }
  local_48[4] = L'\0';
  pwVar2 = local_48;
LAB_14274dbb1:
  if (*(uint *)((longlong)param_2 + 0x1c) < 2) {
    pwVar6 = pwVar3;
    iVar1 = 0;
    if (1 < *(uint *)(param_2 + 4)) {
      FString::PrintfImpl(&local_38,&DAT_14518c7f4);
      pwVar6 = local_38;
      iVar1 = local_30;
    }
  }
  else {
    FString::PrintfImpl(&local_38,L"%ux%u",*(uint *)((longlong)param_2 + 0x1c),
                        *(uint *)(param_2 + 4));
    pwVar6 = local_38;
    iVar1 = local_30;
  }
  if ((*(int *)((longlong)param_2 + 0x24) == 0) ||
     (FString::PrintfImpl(&local_38,L"[%u]"), pwVar3 = local_38, local_30 == 0)) {
    local_38 = L"";
  }
  pwVar4 = L"";
  if (iVar1 != 0) {
    pwVar4 = pwVar6;
  }
  pwVar5 = L"";
  if ((int)local_40 != 0) {
    pwVar5 = pwVar2;
  }
  FString::PrintfImpl(&local_48,L"%s%s %s%s",pwVar5,pwVar4,*param_2,local_38);
  if (param_1 == &local_48) {
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_1 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    *param_1 = local_48;
    *(int *)(param_1 + 1) = (int)local_40;
    *(int *)((longlong)param_1 + 0xc) = local_40._4_4_;
  }
  if (pwVar3 != (wchar_t *)0x0) {
    FMemory::Free(pwVar3);
  }
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
  }
  if (pwVar2 != (wchar_t *)0x0) {
    FMemory::Free(pwVar2);
  }
  return;
}



// FUNCTION 14274dce0 FUN_14274dce0 body=8 status=ok
// SIG undefined FUN_14274dce0(void)

undefined * FUN_14274dce0(void)

{
  return &DAT_146b09420;
}



// FUNCTION 14274dcf0 Get body=321 status=ok
// SIG undefined Get(void)

longlong * FRealtimeGPUProfiler::Get(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  plVar6 = DAT_146b09458;
  if (DAT_146b09458 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x30);
    plVar6 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      *(undefined4 *)((longlong)plVar3 + 0x14) = 1;
      *(undefined4 *)(plVar3 + 3) = 0xffffffff;
      *(undefined2 *)(plVar3 + 5) = 0;
      plVar4 = (longlong *)operator_new(0x20);
      plVar5 = plVar6;
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR__scalar_deleting_destructor__144deb638;
        plVar4[1] = 0;
        plVar4[2] = 0;
        plVar4[3] = 2;
        plVar5 = plVar4;
      }
      plVar3[4] = (longlong)plVar5;
      lVar7 = 4;
      do {
        plVar4 = (longlong *)operator_new(0x50);
        plVar5 = plVar6;
        if (plVar4 != (longlong *)0x0) {
          lVar2 = plVar3[4];
          *plVar4 = 0;
          plVar4[1] = 0;
          plVar4[2] = 0;
          plVar4[3] = 0;
          plVar4[4] = 0;
          plVar4[5] = 0;
          plVar4[6] = 0;
          plVar4[7] = 0;
          *(undefined4 *)(plVar4 + 8) = 0xffffffff;
          plVar4[9] = lVar2;
          plVar5 = plVar4;
        }
        iVar1 = (int)plVar3[1];
        *(int *)(plVar3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
        }
        *(longlong **)(*plVar3 + (longlong)iVar1 * 8) = plVar5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      DAT_146b09458 = plVar3;
      return plVar3;
    }
  }
  DAT_146b09458 = plVar6;
  return plVar6;
}



// FUNCTION 14274de40 FUN_14274de40 body=356 status=ok
// SIG undefined FUN_14274de40(void)

longlong FUN_14274de40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar4 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b0a578) && (_Init_thread_header(&DAT_146b0a578), DAT_146b0a578 == -1))
  {
    FBoolConfigValueHelper::FBoolConfigValueHelper
              (&DAT_146b0a574,L"Kismet",L"bEnableInheritableComponents",&DAT_1468e2360);
    _Init_thread_footer(&DAT_146b0a578);
  }
  if ((DAT_146b0a574 != '\0') &&
     (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != *(longlong *)(param_2 + 0x238))) {
    FComponentKey::FComponentKey(&local_48,param_1);
    do {
      lVar3 = FUN_1422f1d40(param_2,0);
      if (lVar3 != 0) {
        local_28 = local_48;
        uStack_24 = uStack_44;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        local_18 = local_38;
        uStack_14 = uStack_34;
        uStack_10 = uStack_30;
        uStack_c = uStack_2c;
        lVar4 = UInheritableComponentHandler::GetOverridenComponentTemplate(lVar3);
      }
      param_2 = *(longlong *)(param_2 + 0x30);
      if (param_2 == 0) {
LAB_14274df1f:
        param_2 = 0;
      }
      else {
        lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_14274df1f;
      }
      if (lVar4 != 0) {
        return lVar4;
      }
    } while ((param_2 != 0) && (lVar1 != *(longlong *)(param_2 + 0x238)));
  }
  return *(longlong *)(param_1 + 0x30);
}



// FUNCTION 14274dfb0 FUN_14274dfb0 body=356 status=ok
// SIG undefined FUN_14274dfb0(void)

longlong FUN_14274dfb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar4 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b0a580) && (_Init_thread_header(&DAT_146b0a580), DAT_146b0a580 == -1))
  {
    FBoolConfigValueHelper::FBoolConfigValueHelper
              (&DAT_146b0a57c,L"Kismet",L"bEnableInheritableComponents",&DAT_1468e2360);
    _Init_thread_footer(&DAT_146b0a580);
  }
  if ((DAT_146b0a57c != '\0') &&
     (lVar1 = *(longlong *)(param_1 + 0x20), lVar1 != *(longlong *)(param_2 + 0x238))) {
    FComponentKey::FComponentKey(&local_48,param_1);
    do {
      lVar3 = FUN_1422f1d40(param_2,0);
      if (lVar3 != 0) {
        local_28 = local_48;
        uStack_24 = uStack_44;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        local_18 = local_38;
        uStack_14 = uStack_34;
        uStack_10 = uStack_30;
        uStack_c = uStack_2c;
        lVar4 = UInheritableComponentHandler::GetOverridenComponentTemplateData(lVar3);
      }
      param_2 = *(longlong *)(param_2 + 0x30);
      if (param_2 == 0) {
LAB_14274e08f:
        param_2 = 0;
      }
      else {
        lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_14274e08f;
      }
      if (lVar4 != 0) {
        return lVar4;
      }
    } while ((param_2 != 0) && (lVar1 != *(longlong *)(param_2 + 0x238)));
  }
  return param_1 + 0x38;
}



// FUNCTION 14274e120 GetAllNodes body=245 status=ok
// SIG undefined GetAllNodes(void)

longlong * USCS_Node::GetAllNodes(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong local_28 [2];
  
  uVar4 = 0;
  *param_2 = 0;
  param_2[1] = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,0);
  *(longlong *)*param_2 = param_1;
  uVar6 = uVar4;
  if (0 < *(int *)(param_1 + 0xb8)) {
    do {
      puVar2 = (undefined8 *)
               GetAllNodes(*(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0xb0)),local_28);
      iVar1 = *(int *)(puVar2 + 1);
      if (iVar1 != 0) {
        iVar3 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + iVar1) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
          iVar3 = (int)param_2[1];
        }
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 + (longlong)iVar3 * 8),(void *)*puVar2,(longlong)iVar1 << 3);
        *(undefined4 *)(puVar2 + 1) = 0;
        *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0xb8));
  }
  return param_2;
}



// FUNCTION 14274e220 GetCloudDocumentName body=61 status=ok
// SIG undefined GetCloudDocumentName(void)

undefined8 *
UCloudStorageBase::GetCloudDocumentName(longlong param_1,undefined8 *param_2,int param_3)

{
  if (*(int *)(param_1 + 0x40) <= param_3) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FUN_141671d50(param_2,(longlong)param_3 * 0x10 + *(longlong *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 14274e260 GetErrorString body=873 status=ok
// SIG undefined GetErrorString(void)

undefined8 * FShaderCompilerError::GetErrorString(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  void *pvVar9;
  int iVar10;
  void *local_res10;
  void *local_48;
  int local_40;
  int local_3c;
  
  local_40 = *(int *)(param_1 + 1);
  lVar8 = (longlong)local_40;
  pvVar4 = (void *)*param_1;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_48,(2 - (uint)(local_40 != 0)) + local_40,0);
  pvVar9 = local_48;
  ::_guard_xfg_dispatch_icall_nop(local_48,pvVar4,lVar8 * 2);
  iVar5 = local_40;
  lVar8 = (longlong)local_40;
  local_40 = (2 - (uint)(local_40 != 0)) + local_40;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
    pvVar9 = local_48;
  }
  puVar1 = (undefined2 *)((longlong)pvVar9 + (lVar8 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar1 = 0x28;
  puVar1[1] = 0;
  iVar5 = *(int *)(param_1 + 3);
  if (local_40 < 2) {
    pvVar4 = (void *)param_1[2];
    local_48 = (void *)0x0;
    local_res10 = pvVar9;
    if (iVar5 == 0) {
      local_3c = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
    }
    else {
      local_40 = iVar5;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar5,0);
      pvVar9 = local_48;
      ::_guard_xfg_dispatch_icall_nop(local_48,pvVar4,(longlong)iVar5 * 2);
      local_48 = pvVar9;
    }
  }
  else {
    iVar7 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar7 = 0;
    }
    if ((local_40 != 0) || (iVar5 = 1, iVar7 == 0)) {
      iVar5 = 0;
    }
    local_res10 = (void *)0x0;
    iVar6 = iVar5 + iVar7 + local_40;
    iVar5 = local_40;
    local_48 = pvVar9;
    if (local_3c < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar6);
      iVar5 = local_40;
    }
    pvVar4 = (void *)param_1[2];
    local_40 = iVar5;
    if (iVar7 != 0) {
      local_40 = iVar5 + (uint)(iVar5 == 0) + iVar7;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
      }
      iVar6 = local_40;
      pvVar3 = local_48;
      pvVar9 = (void *)((longlong)local_48 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar9,pvVar4,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar9) = 0;
      local_48 = pvVar3;
      local_40 = iVar6;
    }
  }
  iVar5 = local_40;
  if (local_3c < (int)(local_40 + 3 + (uint)(local_40 == 0))) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    iVar5 = local_40;
  }
  local_40 = (4 - (uint)(iVar5 != 0)) + iVar5;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
  }
  pvVar4 = local_48;
  puVar2 = (undefined4 *)((longlong)local_48 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar2 = 0x3a0029;
  *(undefined2 *)(puVar2 + 1) = 0x20;
  *(undefined2 *)((longlong)puVar2 + 6) = 0;
  if (local_40 < 2) {
    FString::FString(param_2,param_1 + 4);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 5) + -1;
    if (*(int *)(param_1 + 5) == 0) {
      iVar5 = 0;
    }
    if ((local_40 != 0) || (iVar7 = 1, iVar5 == 0)) {
      iVar7 = 0;
    }
    if (local_3c < iVar5 + iVar7 + local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    iVar7 = local_40;
    pvVar4 = (void *)param_1[4];
    pvVar9 = local_48;
    iVar10 = local_3c;
    iVar6 = local_40;
    if (iVar5 != 0) {
      lVar8 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar5;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar7,0);
      }
      iVar10 = local_3c;
      iVar6 = local_40;
      pvVar9 = local_48;
      pvVar3 = (void *)((longlong)local_48 + (lVar8 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar3,pvVar4,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar3) = 0;
    }
    *param_2 = pvVar9;
    *(int *)(param_2 + 1) = iVar6;
    *(int *)((longlong)param_2 + 0xc) = iVar10;
  }
  if (local_res10 != (void *)0x0) {
    FMemory::Free(local_res10);
  }
  return param_2;
}



// FUNCTION 14274e5d0 GetFeatureLevel body=20 status=ok
// SIG undefined GetFeatureLevel(void)

undefined4 FSceneViewFamily::GetFeatureLevel(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 8);
  }
  return DAT_1464c9c14;
}



// FUNCTION 14274e5f0 GetGlobalShaderCacheFilename body=615 status=ok
// SIG undefined GetGlobalShaderCacheFilename(void)

longlong * GetGlobalShaderCacheFilename(longlong *param_1,undefined4 param_2)

{
  void *_Dst;
  void *_Src;
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 local_res18 [16];
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  int iStack_4c;
  longlong local_48;
  
  local_68 = 0;
  local_60 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  lVar5 = local_68;
  FGenericPlatformString::Memcpy(local_68,L"Engine",0xe);
  local_50 = (int)local_60;
  local_58 = lVar5;
  iStack_4c = local_60._4_4_;
  if (local_60._4_4_ < (int)((int)local_60 + (0x14 - (uint)((int)local_60 != 0)))) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
  }
  FString::PathAppend(&local_58,L"GlobalShaderCache-",0x12);
  uVar3 = FUN_141eca160(local_res18,param_2);
  plVar4 = (longlong *)FName::ToString(uVar3);
  iVar7 = iStack_4c;
  iVar6 = local_50;
  if (local_50 < 2) {
    lVar5 = *plVar4;
    *plVar4 = 0;
    lVar1 = plVar4[1];
    plVar4[1] = 0;
    iVar7 = (int)lVar1;
    iVar2 = *(int *)((longlong)plVar4 + 0xc);
  }
  else {
    iVar8 = (int)plVar4[1] + -1;
    if ((int)plVar4[1] == 0) {
      iVar8 = 0;
    }
    if ((local_50 != 0) || (iVar2 = 1, iVar8 == 0)) {
      iVar2 = 0;
    }
    iVar2 = iVar8 + iVar2 + local_50;
    local_68 = local_58;
    local_58 = 0;
    local_60._0_4_ = local_50;
    local_60._4_4_ = iStack_4c;
    local_50 = 0;
    iStack_4c = 0;
    if (iVar7 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      iVar6 = (int)local_60;
    }
    _Src = (void *)*plVar4;
    lVar5 = local_68;
    iVar7 = iVar6;
    iVar2 = local_60._4_4_;
    if (iVar8 != 0) {
      local_60._0_4_ = iVar6 + (uint)(iVar6 == 0) + iVar8;
      if (local_60._4_4_ < (int)local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar6);
      }
      iVar2 = local_60._4_4_;
      iVar7 = (int)local_60;
      lVar5 = local_68;
      _Dst = (void *)(local_68 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)_Dst) = 0;
    }
  }
  local_68 = lVar5;
  local_60._4_4_ = iVar2;
  if (iVar2 < (int)((5 - (uint)(iVar7 != 0)) + iVar7)) {
    local_60._0_4_ = iVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    iVar7 = (int)local_60;
  }
  local_60._0_4_ = (5 - (uint)(iVar7 != 0)) + iVar7;
  if (local_60._4_4_ < (int)local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar7);
  }
  lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  builtin_wcsncpy((wchar_t *)(local_68 + lVar5 * 2),L".bin",4);
  *(undefined2 *)(local_68 + 8 + lVar5 * 2) = 0;
  *param_1 = local_68;
  *(int *)((longlong)param_1 + 0xc) = local_60._4_4_;
  *(int *)(param_1 + 1) = (int)local_60;
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14274e860 FUN_14274e860 body=778 status=ok
// SIG undefined FUN_14274e860(void)

undefined8 FUN_14274e860(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 *_Dst;
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined2 *local_res20;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  int local_6c;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_141eca160(&local_res8,param_3);
  plVar2 = (longlong *)GetTargetPlatformManagerRef();
  uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,local_res8);
  iVar7 = 0;
  local_88 = (undefined2 *)0x0;
  local_80 = 0;
  FString::AppendInt(&local_88,uVar1);
  puVar3 = (undefined8 *)FName::ToString(&local_res8);
  iVar8 = *(int *)(puVar3 + 1);
  local_78 = (undefined2 *)*puVar3;
  *puVar3 = 0;
  local_70 = *(int *)(puVar3 + 1);
  local_6c = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  iVar6 = local_70;
  if (local_6c < (int)((2 - (uint)(iVar8 != 0)) + local_70)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
    iVar6 = local_70;
  }
  local_70 = (2 - (uint)(iVar6 != 0)) + iVar6;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
  }
  puVar4 = local_88;
  local_78[(longlong)iVar6 - (ulonglong)(iVar6 != 0)] = 0x5f;
  (local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[1] = 0;
  iVar8 = (int)local_80;
  if (local_70 < 2) {
    iVar9 = local_80._4_4_;
    local_88 = (undefined2 *)0x0;
    local_80 = 0;
    puVar5 = local_78;
  }
  else {
    if ((int)local_80 != 0) {
      iVar7 = (int)local_80 + -1;
    }
    if ((local_70 != 0) || (iVar8 = 1, iVar7 == 0)) {
      iVar8 = 0;
    }
    puVar5 = (undefined2 *)0x0;
    iVar6 = local_70;
    if (local_6c < iVar8 + iVar7 + local_70) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar6 = local_70;
    }
    local_res20 = local_88;
    puVar4 = local_78;
    iVar9 = local_6c;
    iVar8 = iVar6;
    if (iVar7 != 0) {
      local_70 = iVar6 + (uint)(iVar6 == 0) + iVar7;
      if (local_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
      }
      iVar9 = local_6c;
      iVar8 = local_70;
      puVar4 = local_78;
      _Dst = local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0));
      _guard_xfg_dispatch_icall_nop(_Dst,local_res20,(longlong)iVar7 * 2);
      _Dst[iVar7] = 0;
      param_3 = local_res18;
    }
  }
  local_78 = puVar4;
  local_6c = iVar9;
  if (iVar9 < (int)((2 - (uint)(iVar8 != 0)) + iVar8)) {
    local_70 = iVar8;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar8 = local_70;
  }
  local_70 = (2 - (uint)(iVar8 != 0)) + iVar8;
  if (local_6c < local_70) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar8);
  }
  local_78[(longlong)iVar8 - (ulonglong)(iVar8 != 0)] = 0x5f;
  (local_78 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)))[1] = 0;
  local_68 = local_78;
  local_60 = local_70;
  local_5c = local_6c;
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FUN_141a0d470(param_3,&local_68);
  FUN_1419e3d10(local_res10,&local_68);
  puVar4 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  FString::PrintfImpl(&local_78,L"%s_%s_%s",&DAT_14518ee38,L"4A393A7FDF3048EF8376E103162A8ED6",
                      puVar4);
  puVar4 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar4 = local_78;
  }
  FUN_141efa6c0(param_1,puVar4);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14274eb70 GetHeader body=632 status=ok
// SIG undefined GetHeader(void)

void UPlatformInterfaceWebResponse::GetHeader
               (longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  uint uStack_60;
  uint uStack_5c;
  uint *puStack_58;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x88);
  puStack_58 = (uint *)(param_1 + 0x70);
  iVar10 = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar9 = puStack_58;
    }
    uVar8 = *puVar9;
    uStack_90 = 0;
    local_a8 = 0;
    while (uVar8 == 0) {
      lVar7 = (longlong)(int)local_a8;
      uStack_90 = uStack_90 + 0x20;
      uVar8 = local_a8 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_a8;
      local_a8 = uVar8;
      if (bVar4) goto LAB_14274ec3d;
      uVar8 = puVar9[lVar7 + 1];
    }
    uStack_a4 = -uVar8 & uVar8;
    iVar5 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_98._4_4_ = (uStack_90 - iVar5) + 0x1f;
    if (iVar2 < local_98._4_4_) {
LAB_14274ec3d:
      local_98._4_4_ = iVar2;
    }
  }
  auStack_50._4_4_ = local_98._4_4_;
  auStack_50._0_4_ = 0xffffffff;
  auStack_50._8_4_ = uStack_90;
  auStack_50._12_4_ = iStack_8c;
  uStack_60 = local_a8;
  uStack_5c = uStack_a4;
  local_70 = 0;
  local_40._0_4_ = SUB84(plVar1,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_90 = 0xffffffff;
  iStack_8c = local_98._4_4_;
  uStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  local_88._8_4_ = (undefined4)local_40;
  local_88._0_8_ = auStack_50._8_8_;
  local_88._12_4_ = local_40._4_4_;
  bVar4 = local_98._4_4_ < *(int *)(param_1 + 0x88);
  local_78 = plVar1;
  local_68 = plVar1;
  local_40 = plVar1;
  local_98 = puStack_58;
  if (bVar4) {
    do {
      if (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x94) <= iVar10) break;
      if (iVar10 == param_2) {
        lVar7 = (longlong)iStack_8c;
        puVar6 = (undefined8 *)(*plVar1 + lVar7 * 0x28);
        if (param_3 != puVar6) {
          iVar2 = *(int *)(puVar6 + 1);
          pvVar3 = (void *)*puVar6;
          *(int *)(param_3 + 1) = iVar2;
          if ((iVar2 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_3,iVar2);
            ::_guard_xfg_dispatch_icall_nop((void *)*param_3,pvVar3,(longlong)iVar2 * 2);
          }
        }
        puVar6 = (undefined8 *)(*plVar1 + 0x10 + lVar7 * 0x28);
        if (param_4 != puVar6) {
          iVar2 = *(int *)(puVar6 + 1);
          pvVar3 = (void *)*puVar6;
          *(int *)(param_4 + 1) = iVar2;
          if ((iVar2 == 0) && (*(int *)((longlong)param_4 + 0xc) == 0)) {
            *(undefined4 *)((longlong)param_4 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_4,iVar2);
            ::_guard_xfg_dispatch_icall_nop((void *)*param_4,pvVar3,(longlong)iVar2 * 2);
          }
        }
      }
      uStack_90 = uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      iVar10 = iVar10 + 1;
    } while (iStack_8c < (int)local_98[6]);
    if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 14274edf0 GetHeaderValue body=118 status=ok
// SIG undefined GetHeaderValue(void)

undefined8 * UPlatformInterfaceWebResponse::GetHeaderValue(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x60),local_res8);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)local_res8[0] * 0x28;
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FString::FString(param_2);
  return param_2;
}



// FUNCTION 14274ee70 FUN_14274ee70 body=310 status=ok
// SIG undefined FUN_14274ee70(void)

longlong * FUN_14274ee70(void)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined2 *local_28;
  undefined8 local_20;
  
  if (DAT_146b0a540 == (longlong *)0x0) {
    local_28 = (undefined2 *)0x0;
    local_20 = 0;
    puVar4 = &DAT_1468e2360;
    FConfigCacheIni::GetString
              (DAT_1468b6148,L"PlatformInterface",L"InGameAdManagerClassName",&local_28,
               &DAT_1468e2360);
    puVar3 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar3 = local_28;
    }
    uVar1 = UInGameAdManager::GetPrivateStaticClass();
    uVar5 = (ulonglong)puVar4 & 0xffffffff00000000;
    lVar2 = FUN_141799830(uVar1,0,puVar3,0,uVar5,0);
    if (lVar2 == 0) {
      lVar2 = UInGameAdManager::GetPrivateStaticClass();
    }
    uVar1 = GetTransientPackage();
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    DAT_146b0a540 = (longlong *)FUN_1417985e0(lVar2,uVar1,0,0,uVar5 & 0xffffffff00000000,0,0,0,0);
    (**(code **)(*DAT_146b0a540 + 0x288))(DAT_146b0a540);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return DAT_146b0a540;
}



// FUNCTION 14274efb0 FUN_14274efb0 body=268 status=ok
// SIG undefined FUN_14274efb0(void)

float FUN_14274efb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = DAT_146b09af8;
  if (*(char *)(param_1 + 0xf69) != '\0') {
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar3 = GetCurrentThreadId();
      if (DVar3 == DAT_1468c21c0) goto LAB_14274f000;
      lVar5 = 4;
    }
    else {
LAB_14274f000:
      lVar5 = 0;
    }
    if (*(int *)(lVar5 + lVar1) != 0) {
      fVar8 = *(float *)(param_1 + 0x390);
      fVar9 = *(float *)(param_1 + 0x3a4);
      iVar6 = *(int *)(param_1 + 0x374);
      iVar7 = *(int *)(param_1 + 0x36c);
      goto LAB_14274f061;
    }
  }
  iVar6 = *(int *)(param_1 + 0x374);
  iVar7 = *(int *)(param_1 + 0x36c);
  fVar8 = 1.0;
  fVar9 = (float)(*(int *)(param_1 + 0x370) - *(int *)(param_1 + 0x368)) / (float)(iVar6 - iVar7);
LAB_14274f061:
  iVar4 = *(int *)(param_1 + 0x370) - *(int *)(param_1 + 0x368);
  fVar9 = (float)(iVar6 - iVar7) * 0.5 * fVar9;
  fVar8 = (float)iVar4 * 0.5 * fVar8;
  if (fVar9 <= fVar8) {
    fVar9 = fVar8;
  }
  return (fVar9 * 3.1415927 * fVar9) / (float)((iVar6 - iVar7) * iVar4);
}



// FUNCTION 14274f0c0 FUN_14274f0c0 body=29 status=ok
// SIG undefined FUN_14274f0c0(void)

longlong FUN_14274f0c0(longlong param_1)

{
  if ((*(int *)(param_1 + 0xf60) == 2) && (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    return *(longlong *)**(undefined8 **)(param_1 + 0x10);
  }
  return param_1;
}



// FUNCTION 14274f0e0 FUN_14274f0e0 body=251 status=ok
// SIG undefined FUN_14274f0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14274f0e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [336];
  undefined1 local_168 [336];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  if (*(char *)(param_1 + 8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 == (longlong *)0x0) {
      puVar4 = (undefined8 *)FUN_141aaf600(local_168);
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_2b8);
    }
    lVar7 = 2;
    puVar3 = param_2;
    do {
      puVar6 = puVar3;
      puVar5 = puVar4;
      uVar2 = puVar5[1];
      *puVar6 = *puVar5;
      puVar6[1] = uVar2;
      uVar2 = puVar5[3];
      puVar6[2] = puVar5[2];
      puVar6[3] = uVar2;
      uVar2 = puVar5[5];
      puVar6[4] = puVar5[4];
      puVar6[5] = uVar2;
      uVar2 = puVar5[7];
      puVar6[6] = puVar5[6];
      puVar6[7] = uVar2;
      uVar2 = puVar5[9];
      puVar6[8] = puVar5[8];
      puVar6[9] = uVar2;
      uVar2 = puVar5[0xb];
      puVar6[10] = puVar5[10];
      puVar6[0xb] = uVar2;
      uVar2 = puVar5[0xd];
      puVar6[0xc] = puVar5[0xc];
      puVar6[0xd] = uVar2;
      uVar2 = puVar5[0xf];
      puVar6[0xe] = puVar5[0xe];
      puVar6[0xf] = uVar2;
      lVar7 = lVar7 + -1;
      puVar4 = puVar5 + 0x10;
      puVar3 = puVar6 + 0x10;
    } while (lVar7 != 0);
    uVar2 = puVar5[0x11];
    puVar6[0x10] = puVar5[0x10];
    puVar6[0x11] = uVar2;
    uVar2 = puVar5[0x13];
    puVar6[0x12] = puVar5[0x12];
    puVar6[0x13] = uVar2;
    uVar2 = puVar5[0x15];
    puVar6[0x14] = puVar5[0x14];
    puVar6[0x15] = uVar2;
    uVar2 = puVar5[0x17];
    puVar6[0x16] = puVar5[0x16];
    puVar6[0x17] = uVar2;
    uVar2 = puVar5[0x19];
    puVar6[0x18] = puVar5[0x18];
    puVar6[0x19] = uVar2;
  }
  else {
    FUN_141aaf600(param_2);
    *(undefined4 *)(param_2 + 0x26) = 1;
  }
  return param_2;
}



// FUNCTION 14274f1e0 FUN_14274f1e0 body=332 status=ok
// SIG undefined FUN_14274f1e0(void)

undefined4 FUN_14274f1e0(void)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  cVar2 = FUN_142753a10();
  uVar6 = 2;
  if (cVar2 == '\0') {
    uVar6 = 1;
  }
  cVar2 = FUN_142753910();
  if (cVar2 == '\0') {
    return uVar6;
  }
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b0a150) && (_Init_thread_header(&DAT_146b0a150), DAT_146b0a150 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR32bppMode")
    ;
    lVar5 = lVar7;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146b0a148 = lVar5;
    _Init_thread_footer(&DAT_146b0a150);
  }
  lVar5 = DAT_146b0a148;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar7 = 4;
  }
  iVar1 = *(int *)(lVar7 + lVar5);
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        return 5;
      }
      if (DAT_146ab62f1 == '\0') {
        return 3;
      }
      if (DAT_146ab62dd == '\0') {
        return 3;
      }
    }
    return 4;
  }
  return 3;
}



// FUNCTION 14274f350 FUN_14274f350 body=22 status=ok
// SIG undefined FUN_14274f350(void)

undefined8 FUN_14274f350(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274f35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x78))();
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 14274f370 FUN_14274f370 body=1491 status=ok
// SIG undefined FUN_14274f370(void)

float * FUN_14274f370(longlong param_1,float *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  float fVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong *local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  puVar12 = *(undefined4 **)(param_1 + 0x50);
  puVar1 = puVar12 + (longlong)*(int *)(param_1 + 0x58) * 2;
  do {
    if (puVar12 == puVar1) {
      return param_2;
    }
    local_res18 = *puVar12;
    local_res1c = puVar12[1];
    cVar7 = FWeakObjectPtr::IsValid(&local_res18);
    if ((cVar7 != '\0') &&
       (lVar9 = FWeakObjectPtr::Get(&local_res18), *(longlong *)(lVar9 + 0x168) != 0)) {
      local_128 = (longlong *)0x0;
      local_120 = 0;
      lVar9 = FWeakObjectPtr::Get(&local_res18);
      FUN_14238b380(*(undefined8 *)(lVar9 + 0x168),1,&local_128);
      lVar9 = FWeakObjectPtr::Get(&local_res18);
      uVar6 = local_120;
      lVar10 = (longlong)(int)local_120;
      lVar9 = *(longlong *)(lVar9 + 0x168);
      iVar8 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,iVar8);
      if (local_120._4_4_ < iVar8) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_128,uVar6 & 0xffffffff);
      }
      local_128[lVar10] = lVar9;
      plVar2 = local_128 + (int)local_120;
      for (plVar11 = local_128; plVar11 != plVar2; plVar11 = plVar11 + 1) {
        plVar4 = (longlong *)*plVar11;
        if (plVar4 != (longlong *)0x0) {
          lVar9 = FUN_1429f11d0();
          if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (((bVar5) && (cVar7 = (**(code **)(*plVar4 + 0x460))(plVar4), cVar7 != '\0')) &&
             ((*(byte *)((longlong)plVar4 + 0x24c) & 0x40) == 0)) {
            lVar9 = FUN_142a232e0();
            if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((!bVar5) || (plVar4[0xe5] == 0)) {
              lVar9 = FUN_142a07000();
              if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                  lVar9 + 0x88)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((!bVar5) || (plVar4[0xe3] == 0)) goto LAB_14274f894;
            }
            lVar9 = FUN_142a07000();
            if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                lVar9 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && ((int)plVar4[0x121] != 0)) {
              local_118 = *(float *)(plVar4 + 0x128);
              fStack_114 = *(float *)((longlong)plVar4 + 0x944);
              fStack_110 = *(float *)(plVar4 + 0x129);
              fStack_10c = *(float *)((longlong)plVar4 + 0x94c);
              local_100 = *(float *)(plVar4 + 299);
              lVar9 = plVar4[0x12a];
            }
            else {
              local_118 = *(float *)(plVar4 + 0x3a);
              fStack_114 = *(float *)((longlong)plVar4 + 0x1d4);
              fStack_110 = *(float *)(plVar4 + 0x3b);
              fStack_10c = *(float *)((longlong)plVar4 + 0x1dc);
              local_100 = *(float *)(plVar4 + 0x3d);
              lVar9 = plVar4[0x3c];
            }
            fVar15 = param_2[1];
            fVar13 = param_2[2];
            fVar3 = *param_2;
            fVar19 = fVar15 - param_2[4];
            fVar18 = fVar13 - param_2[5];
            fVar17 = fVar3 - param_2[3];
            fVar16 = fVar15 + param_2[4];
            fVar20 = fVar3 + param_2[3];
            fVar14 = fVar13 + param_2[5];
            local_f8 = fVar20;
            if (fVar17 <= fVar20) {
              local_f8 = fVar17;
            }
            fStack_f4 = fVar16;
            if (fVar19 <= fVar16) {
              fStack_f4 = fVar19;
            }
            fStack_f0 = fVar14;
            if (fVar18 <= fVar14) {
              fStack_f0 = fVar18;
            }
            if (fVar17 < fVar20) {
              fVar17 = fVar20;
            }
            if (fVar19 < fVar16) {
              fVar19 = fVar16;
            }
            if (fVar18 < fVar14) {
              fVar18 = fVar14;
            }
            fVar16 = local_118 - fStack_10c;
            local_108._0_4_ = (float)lVar9;
            local_108._4_4_ = (float)((ulonglong)lVar9 >> 0x20);
            fVar14 = fStack_114 - (float)local_108;
            fVar20 = fStack_110 - local_108._4_4_;
            if (fVar16 < local_f8) {
              local_f8 = fVar16;
            }
            if (fVar14 < fStack_f4) {
              fStack_f4 = fVar14;
            }
            if (fVar20 < fStack_f0) {
              fStack_f0 = fVar20;
            }
            if (fVar17 < fVar16) {
              fVar17 = fVar16;
            }
            if (fVar19 < fVar14) {
              fVar19 = fVar14;
            }
            if (fVar18 < fVar20) {
              fVar18 = fVar20;
            }
            fVar14 = fStack_10c + local_118;
            local_108._0_4_ = (float)local_108 + fStack_114;
            local_108._4_4_ = local_108._4_4_ + fStack_110;
            if (fVar14 < local_f8) {
              local_f8 = fVar14;
            }
            if ((float)local_108 < fStack_f4) {
              fStack_f4 = (float)local_108;
            }
            if (local_108._4_4_ < fStack_f0) {
              fStack_f0 = local_108._4_4_;
            }
            if (fVar17 < fVar14) {
              fVar17 = fVar14;
            }
            if (fVar19 < (float)local_108) {
              fVar19 = (float)local_108;
            }
            if (fVar18 < local_108._4_4_) {
              fVar18 = local_108._4_4_;
            }
            fVar17 = fVar17 - local_f8;
            fVar19 = fVar19 - fStack_f4;
            fVar18 = fVar18 - fStack_f0;
            fStack_ec = fVar17 * 0.5;
            fStack_e8 = fVar19 * 0.5;
            fStack_e4 = fVar18 * 0.5;
            local_f8 = local_f8 + fStack_ec;
            fStack_f4 = fStack_f4 + fStack_e8;
            fStack_f0 = fStack_f0 + fStack_e4;
            local_e0 = SQRT((fVar17 * fVar17 + fVar19 * fVar19 + fVar18 * fVar18) * 0.25);
            fVar15 = SQRT((fVar3 - local_f8) * (fVar3 - local_f8) +
                          (fVar15 - fStack_f4) * (fVar15 - fStack_f4) +
                          (fVar13 - fStack_f0) * (fVar13 - fStack_f0)) + param_2[6];
            fVar13 = SQRT((fStack_114 - fStack_f4) * (fStack_114 - fStack_f4) +
                          (local_118 - local_f8) * (local_118 - local_f8) +
                          (fStack_110 - fStack_f0) * (fStack_110 - fStack_f0)) + local_100;
            if (fVar15 <= fVar13) {
              fVar15 = fVar13;
            }
            if (fVar15 < local_e0) {
              local_e0 = fVar15;
            }
            *param_2 = local_f8;
            param_2[1] = fStack_f4;
            param_2[2] = fStack_f0;
            param_2[3] = fStack_ec;
            *(ulonglong *)(param_2 + 4) = CONCAT44(fStack_e4,fStack_e8);
            param_2[6] = local_e0;
            local_108 = lVar9;
          }
        }
LAB_14274f894:
      }
      if (local_128 != (longlong *)0x0) {
        FMemory::Free(local_128);
      }
    }
    puVar12 = puVar12 + 2;
  } while( true );
}



// FUNCTION 14274f980 FUN_14274f980 body=18 status=ok
// SIG undefined FUN_14274f980(void)

undefined4 FUN_14274f980(longlong param_1)

{
  return (&DAT_1464c9c48)[*(int *)(param_1 + 0x1a38)];
}



// FUNCTION 14274f9a0 GetShadowMapInteraction body=204 status=ok
// SIG undefined GetShadowMapInteraction(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FLightCacheInterface::GetShadowMapInteraction(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong *local_58 [3];
  undefined4 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 8) == '\0') {
    local_58[0] = *(longlong **)(param_1 + 0x18);
    if (local_58[0] == (longlong *)0x0) {
      local_38 = 0;
      uStack_30 = 0;
      lVar4 = (longlong)&uStack_40 + 1;
      local_28 = 0;
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 4;
        *(undefined4 *)(lVar4 + -1) = 0;
        lVar4 = lVar4 + 4;
      } while (uVar3 < 4);
      pplVar2 = local_58;
    }
    else {
      pplVar2 = (longlong **)(**(code **)(*local_58[0] + 0x20))(local_58[0],local_58);
    }
    plVar1 = pplVar2[1];
    *param_2 = *pplVar2;
    param_2[1] = plVar1;
    plVar1 = pplVar2[3];
    param_2[2] = pplVar2[2];
    param_2[3] = plVar1;
    plVar1 = pplVar2[5];
    param_2[4] = pplVar2[4];
    param_2[5] = plVar1;
    plVar1 = pplVar2[7];
    param_2[6] = pplVar2[6];
    param_2[7] = plVar1;
  }
  else {
    uVar3 = 0;
    *param_2 = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined4 *)(param_2 + 6) = 0;
    lVar4 = (longlong)param_2 + 0x19;
    do {
      uVar3 = uVar3 + 4;
      *(undefined4 *)(lVar4 + -1) = 0;
      lVar4 = lVar4 + 4;
    } while (uVar3 < 4);
    *(undefined4 *)(param_2 + 6) = 1;
  }
  return param_2;
}



// FUNCTION 14274fa70 FUN_14274fa70 body=429 status=ok
// SIG undefined FUN_14274fa70(void)

int FUN_14274fa70(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uVar1 = *(uint *)(param_2 + 0x180);
  if (*(char *)(param_1 + 8) != '\0') {
    if ((uVar1 >> 2 & 1) != 0) {
      return 1;
    }
    return 4 - (uint)((uVar1 >> 3 & 1) != 0);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    piVar3 = (int *)*param_3;
    iStack_c = (int)((ulonglong)*(undefined8 *)(param_2 + 0x140) >> 0x20);
    iStack_10 = (int)*(undefined8 *)(param_2 + 0x140);
    piVar4 = piVar3 + (longlong)*(int *)(param_3 + 1) * 4;
    iStack_14 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x138) >> 0x20);
    local_18 = (int)*(undefined8 *)(param_2 + 0x138);
    for (; piVar3 != piVar4; piVar3 = piVar3 + 4) {
      if (((piVar3[1] == iStack_14 && piVar3[2] == iStack_10) && piVar3[3] == iStack_c) &&
          local_18 == *piVar3) {
        return 0;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != 0) {
      piVar3 = *(int **)(lVar2 + 8);
      for (piVar4 = piVar3; piVar4 != piVar3 + (longlong)*(int *)(lVar2 + 0x10) * 4;
          piVar4 = piVar4 + 4) {
        if (((piVar4[1] == iStack_14 && piVar4[2] == iStack_10) && piVar4[3] == iStack_c) &&
            *piVar4 == local_18) {
          if ((int)((longlong)piVar4 - (longlong)piVar3 >> 4) != -1) {
            return 1;
          }
          break;
        }
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (lVar2 != 0) {
      piVar3 = *(int **)(lVar2 + 8);
      for (piVar4 = piVar3; piVar4 != piVar3 + (longlong)*(int *)(lVar2 + 0x10) * 4;
          piVar4 = piVar4 + 4) {
        if (((piVar4[1] == iStack_14 && piVar4[2] == iStack_10) && piVar4[3] == iStack_c) &&
            *piVar4 == local_18) {
          if ((int)((longlong)piVar4 - (longlong)piVar3 >> 4) == -1) {
            return 4;
          }
          return 3;
        }
      }
    }
  }
  return 4;
}



// FUNCTION 14274fc20 GetStereoEyeView body=31 status=ok
// SIG undefined GetStereoEyeView(void)

undefined8 FSceneViewFamily::GetStereoEyeView(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (param_2 < 2) {
    return *puVar1;
  }
  if (param_2 == 2) {
    return puVar1[1];
  }
  return puVar1[(longlong)param_2 + -2];
}



// FUNCTION 14274fc40 FUN_14274fc40 body=108 status=ok
// SIG undefined FUN_14274fc40(void)

undefined8 * FUN_14274fc40(longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_4 != '\0') && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
    if (*(float *)(lVar2 + 0x28) != 0.0) {
      uVar3 = *(undefined8 *)(lVar2 + (longlong)param_3 * 0xc);
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_3 * 0xc);
      goto LAB_14274fc92;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x8dc);
  uVar1 = *(undefined4 *)(param_1 + 0x8e4);
LAB_14274fc92:
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14274fcb0 FUN_14274fcb0 body=20 status=ok
// SIG undefined FUN_14274fcb0(void)

undefined8 FUN_14274fcb0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274fcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14274fcd0 GetAllocatedSize body=19 status=ok
// SIG undefined GetAllocatedSize(void)

undefined8 FColorVertexBuffer::GetAllocatedSize(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014274fcdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14274fcf0 FUN_14274fcf0 body=11503 status=ok
// SIG undefined FUN_14274fcf0(void)

void FUN_14274fcf0(undefined8 param_1,ulonglong param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,undefined8 *param_8,
                  longlong *param_9,char param_10,char param_11)

{
  int *piVar1;
  void **ppvVar2;
  void *_Src;
  short *psVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  undefined2 *puVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  int iVar23;
  ulonglong uVar24;
  int *piVar26;
  uint uVar27;
  bool bVar28;
  ulonglong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 uVar29;
  short *local_238;
  int local_230;
  undefined4 local_22c;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined8 local_200;
  undefined2 *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  void *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  longlong *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined2 *local_1a0;
  undefined8 local_198;
  longlong local_190 [13];
  undefined8 local_128;
  longlong local_120 [5];
  longlong *local_f8;
  undefined1 local_f0 [8];
  longlong local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong local_80 [2];
  longlong local_70 [2];
  longlong local_60 [4];
  ulonglong uVar25;
  
  lVar4 = (longlong)param_8;
  uVar17 = param_7;
  uVar27 = param_7 >> 3 & 0x1f;
  *(uint *)((longlong)param_8 + 0x30) = param_7;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar9 = (undefined8 *)FUN_141eca160(local_88,uVar27);
  psVar3 = (short *)CONCAT71(param_5._1_7_,(char)param_5);
  plVar21 = (longlong *)0x0;
  uVar20 = 0;
  *(undefined8 *)(lVar4 + 0x38) = *puVar9;
  iVar23 = 0;
  if (*(short **)(lVar4 + 0x50) != psVar3) {
    plVar10 = plVar21;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (psVar3[lVar19] != 0);
      plVar10 = (longlong *)(ulonglong)((int)lVar19 + 1);
    }
    *(undefined4 *)(lVar4 + 0x58) = 0;
    iVar13 = (int)plVar10;
    plVar11 = plVar21;
    if (*(int *)(lVar4 + 0x5c) != iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar4 + 0x50,plVar10);
      plVar11 = (longlong *)(ulonglong)*(uint *)(lVar4 + 0x58);
    }
    iVar7 = iVar13 + (int)plVar11;
    *(int *)(lVar4 + 0x58) = iVar7;
    if (*(int *)(lVar4 + 0x5c) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar4 + 0x50);
    }
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar4 + 0x50),psVar3,(longlong)iVar13 * 2);
    }
  }
  psVar3 = (short *)CONCAT44(param_6._4_4_,(undefined4)param_6);
  if (*(short **)(lVar4 + 0x60) != psVar3) {
    plVar10 = plVar21;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (psVar3[lVar19] != 0);
      plVar10 = (longlong *)(ulonglong)((int)lVar19 + 1);
    }
    *(undefined4 *)(lVar4 + 0x68) = 0;
    iVar13 = (int)plVar10;
    plVar11 = plVar21;
    if (*(int *)(lVar4 + 0x6c) != iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar4 + 0x60,plVar10);
      plVar11 = (longlong *)(ulonglong)*(uint *)(lVar4 + 0x68);
    }
    iVar7 = iVar13 + (int)plVar11;
    *(int *)(lVar4 + 0x68) = iVar7;
    if (*(int *)(lVar4 + 0x6c) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar4 + 0x60);
    }
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop(*(void **)(lVar4 + 0x60),psVar3,(longlong)iVar13 * 2);
    }
  }
  *(undefined2 *)(lVar4 + 0x72) = 0;
  *(bool *)(lVar4 + 0x71) = DAT_146b09440 != 0;
  lVar19 = DAT_146b09470;
  param_8 = (undefined8 *)FName::ToString(lVar4 + 0x38,local_80);
  plVar10 = (longlong *)(ulonglong)(*(int *)(param_8 + 1) - 1);
  if (*(int *)(param_8 + 1) == 0) {
    plVar10 = plVar21;
  }
  if ((*(int *)(lVar19 + 0x130) != 0) || (iVar13 = 2, (int)plVar10 == -1)) {
    iVar13 = 1;
  }
  local_228 = (void *)0x0;
  iVar13 = iVar13 + (int)plVar10;
  iVar7 = *(int *)(lVar19 + 0x130);
  _Src = *(void **)(lVar19 + 0x128);
  local_220 = CONCAT44(local_220._4_4_,iVar7);
  if ((iVar7 == 0) && (iVar13 == 0)) {
    local_220 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,iVar7 + iVar13,0);
    _guard_xfg_dispatch_icall_nop(local_228,_Src,(longlong)iVar7 * 2);
  }
  FString::PathAppend(&local_228,*param_8,plVar10);
  ppvVar2 = (void **)(lVar4 + 0x88);
  if (ppvVar2 == &local_228) {
    if (local_228 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar2 = local_228;
    *(undefined4 *)(lVar4 + 0x90) = (undefined4)local_220;
    *(undefined4 *)(lVar4 + 0x94) = local_220._4_4_;
    local_220 = 0;
    local_228 = (void *)0x0;
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  ppvVar2 = (void **)(lVar4 + 0xa8);
  FString::operator=(ppvVar2,param_1);
  if (local_res20 != (longlong *)0x0) {
    lVar19 = *local_res20;
    uVar24 = 0xffffffffffffffff;
    do {
      uVar25 = uVar24;
      uVar24 = uVar25 + 1;
    } while (*(short *)(lVar19 + uVar24 * 2) != 0);
    param_7 = *(uint *)(lVar4 + 0xb0);
    if ((param_7 != 0) || (iVar13 = 2, (int)uVar25 == -2)) {
      iVar13 = 1;
    }
    local_1e8 = (void *)0x0;
    iVar13 = (int)uVar24 + iVar13;
    local_res20 = *ppvVar2;
    local_1e0 = param_7;
    if ((param_7 == 0) && (iVar13 == 0)) {
      local_1dc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1e8,iVar13 + param_7,0);
      _guard_xfg_dispatch_icall_nop(local_1e8,local_res20,(longlong)(int)param_7 * 2);
    }
    FString::PathAppend(&local_1e8,lVar19,uVar24 & 0xffffffff);
    if (ppvVar2 == &local_1e8) {
      if (local_1e8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar2 = local_1e8;
      *(uint *)(lVar4 + 0xb0) = local_1e0;
      *(undefined4 *)(lVar4 + 0xb4) = local_1dc;
    }
  }
  if (local_res10 != 0) {
    psVar3 = *(short **)(local_res10 + 0x10);
    local_238 = (short *)0x0;
    local_230 = 0;
    local_22c = 0;
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (psVar3[lVar19] != 0);
      iVar13 = (int)lVar19 + 1;
      local_230 = iVar13;
      if (0 < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      }
      FGenericPlatformString::Memcpy(local_238,psVar3,(longlong)iVar13 * 2);
    }
    if (DAT_146b0943c != 0) {
      if ((*local_238 == 0x46) || (*local_238 == 0x54)) {
        if (local_230 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop(local_238,local_238 + 1,(longlong)(local_230 + -1) * 2);
        }
        local_230 = local_230 + -1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_238);
      }
      FString::ReplaceInline(&local_238,L"VertexFactory",&DAT_14518df94,1);
      FString::ReplaceInline(&local_238,L"GPUSkinAPEXCloth",L"APEX",1);
      FString::ReplaceInline(&local_238,L"true",&DAT_14518e114,1);
      FString::ReplaceInline(&local_238,L"false",&DAT_14518e724,1);
    }
    iVar13 = local_230 + -1;
    if (local_230 == 0) {
      iVar13 = iVar23;
    }
    local_1d0 = *(int *)(lVar4 + 0xb0);
    lVar19 = (longlong)local_1d0;
    if ((local_1d0 != 0) || (iVar7 = 2, iVar13 == -1)) {
      iVar7 = 1;
    }
    local_1d8 = (void *)0x0;
    local_res20 = *ppvVar2;
    if ((local_1d0 == 0) && (iVar7 + iVar13 == 0)) {
      local_1cc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1d8,iVar7 + iVar13 + local_1d0,0);
      _guard_xfg_dispatch_icall_nop(local_1d8,local_res20,lVar19 * 2);
    }
    FString::PathAppend(&local_1d8,local_238,iVar13);
    if (ppvVar2 == &local_1d8) {
      if (local_1d8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar2 = local_1d8;
      *(int *)(lVar4 + 0xb0) = local_1d0;
      *(undefined4 *)(lVar4 + 0xb4) = local_1cc;
    }
    if (local_238 != (short *)0x0) {
      FMemory::Free();
    }
  }
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  local_1bc = 0;
  local_res20 = (longlong *)local_res18[2];
  plVar10 = plVar21;
  if ((local_res20 != (longlong *)0x0) && (*(short *)local_res20 != 0)) {
    lVar19 = -1;
    do {
      lVar19 = lVar19 + 1;
    } while (*(short *)((longlong)local_res20 + lVar19 * 2) != 0);
    iVar13 = (int)lVar19 + 1;
    local_1c0 = iVar13;
    if (0 < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    }
    plVar10 = local_1c8;
    FGenericPlatformString::Memcpy(local_1c8,local_res20,(longlong)iVar13 * 2);
  }
  if ((DAT_146b0943c != 0) && (((short)*plVar10 == 0x46 || ((short)*plVar10 == 0x54)))) {
    iVar13 = local_1c0 + -1;
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop(plVar10,(short *)((longlong)plVar10 + 2),(longlong)iVar13 * 2);
    }
    local_1c0 = iVar13;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_1c8);
    plVar10 = local_1c8;
  }
  FString::PrintfImpl(&local_e8,&DAT_14518eee4,*(undefined4 *)(lVar4 + 0x28));
  param_7 = iVar23;
  if (local_1c0 != 0) {
    param_7 = local_1c0 + -1;
  }
  iVar13 = *(int *)(lVar4 + 0xb0);
  if ((iVar13 != 0) || (iVar7 = 2, param_7 == -1)) {
    iVar7 = 1;
  }
  local_208 = (void *)0x0;
  local_res20 = *ppvVar2;
  local_200 = CONCAT44(local_200._4_4_,iVar13);
  if ((iVar13 == 0) && (iVar7 + param_7 == 0)) {
    local_200 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_208,iVar7 + param_7 + iVar13,0);
    _guard_xfg_dispatch_icall_nop(local_208,local_res20,(longlong)iVar13 * 2);
  }
  FString::PathAppend(&local_208,plVar10,param_7);
  if (local_e0 != 0) {
    iVar23 = local_e0 + -1;
  }
  if (((int)local_200 != 0) || (iVar13 = 2, iVar23 == -1)) {
    iVar13 = 1;
  }
  local_218 = local_208;
  iVar7 = iVar13 + iVar23 + (int)local_200;
  iVar13 = local_200._4_4_;
  local_208 = (void *)0x0;
  local_210 = local_200;
  local_200 = 0;
  if (iVar13 < iVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_218);
  }
  FString::PathAppend(&local_218,local_e8,iVar23);
  if (ppvVar2 == &local_218) {
    if (local_218 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*ppvVar2 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar2 = local_218;
    *(undefined4 *)(lVar4 + 0xb0) = (undefined4)local_210;
    *(undefined4 *)(lVar4 + 0xb4) = local_210._4_4_;
    local_210 = 0;
    local_218 = (void *)0x0;
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (DAT_146b0943c != 0) {
    FString::ReplaceInline(ppvVar2,L"BasePass",&DAT_14518ef64,1);
    FString::ReplaceInline(ppvVar2,L"ForForward",&DAT_1451962c0,1);
    FString::ReplaceInline(ppvVar2,L"Shadow",L"Shdw",1);
    FString::ReplaceInline(ppvVar2,L"LightMap",&DAT_14518efb4,1);
    FString::ReplaceInline(ppvVar2,L"EHeightFogFeature==E_",&DAT_14518dc6c,1);
    FString::ReplaceInline(ppvVar2,L"Capsule",L"Caps",1);
    FString::ReplaceInline(ppvVar2,L"Movable",&DAT_145196448,1);
    FString::ReplaceInline(ppvVar2,L"Culling",L"Cull",1);
    FString::ReplaceInline(ppvVar2,L"Atmospheric",&DAT_145196640,1);
    FString::ReplaceInline(ppvVar2,L"Atmosphere",&DAT_145196668,1);
    FString::ReplaceInline(ppvVar2,L"Exponential",&DAT_145196710,1);
    FString::ReplaceInline(ppvVar2,L"Ambient",&DAT_1451967b0,1);
    FString::ReplaceInline(ppvVar2,L"Perspective",L"Persp",1);
    FString::ReplaceInline(ppvVar2,L"Occlusion",&DAT_145196850,1);
    FString::ReplaceInline(ppvVar2,L"Position",&DAT_145196870,1);
    FString::ReplaceInline(ppvVar2,L"Skylight",&DAT_145196890,1);
    FString::ReplaceInline(ppvVar2,L"LightingPolicy",&DAT_14518f0b4,1);
    FString::ReplaceInline(ppvVar2,L"TranslucentLighting",L"TranslLight",1);
    FString::ReplaceInline(ppvVar2,L"Translucency",L"Transl",1);
    FString::ReplaceInline(ppvVar2,L"DistanceField",L"DistFiel",1);
    FString::ReplaceInline(ppvVar2,L"Indirect",&DAT_145196978,1);
    FString::ReplaceInline(ppvVar2,L"Cached",L"Cach",1);
    FString::ReplaceInline(ppvVar2,L"Inject",&DAT_1451969b8,1);
    FString::ReplaceInline(ppvVar2,L"Visualization",&DAT_1451969d0,1);
    FString::ReplaceInline(ppvVar2,L"Instanced",L"Inst",1);
    FString::ReplaceInline(ppvVar2,L"Evaluate",L"Eval",1);
    FString::ReplaceInline(ppvVar2,L"Landscape",L"Land",1);
    FString::ReplaceInline(ppvVar2,L"Dynamic",&DAT_145196a70,1);
    FString::ReplaceInline(ppvVar2,L"Vertex",&DAT_145196a88,1);
    FString::ReplaceInline(ppvVar2,L"Output",&DAT_145196aa0,1);
    FString::ReplaceInline(ppvVar2,L"Directional",&DAT_145196ab8,1);
    FString::ReplaceInline(ppvVar2,L"Irradiance",&DAT_145196ad8,1);
    FString::ReplaceInline(ppvVar2,L"Deferred",&DAT_145196af8,1);
    FString::ReplaceInline(ppvVar2,L"true",&DAT_14518f814,1);
    FString::ReplaceInline(ppvVar2,L"false",&DAT_14518f9c4,1);
    FString::ReplaceInline(ppvVar2,L"PROPAGATE_AO",&DAT_14518fd54,1);
    FString::ReplaceInline(ppvVar2,L"PROPAGATE_SECONDARY_OCCLUSION",L"SEC_OCC",1);
    FString::ReplaceInline(ppvVar2,L"PROPAGATE_MULTIPLE_BOUNCES",L"MULT_BOUNC",1);
    FString::ReplaceInline(ppvVar2,L"PostProcess",L"Post",1);
    FString::ReplaceInline(ppvVar2,L"AntiAliasing",&DAT_1451908a4,1);
    FString::ReplaceInline(ppvVar2,L"Mobile",&DAT_145196c40,1);
    FString::ReplaceInline(ppvVar2,L"Linear",&DAT_145196c58,1);
    FString::ReplaceInline(ppvVar2,L"INT32_MAX",L"IMAX",1);
    FString::ReplaceInline(ppvVar2,L"Policy",&DAT_145196c98,1);
    FString::ReplaceInline(ppvVar2,L"EAtmRenderFlag==E_",&DAT_14518dd74,1);
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  if (DAT_146b09438 == 1) {
LAB_1427509cf:
    local_1b0 = *(int *)(lVar4 + 0x90);
    lVar19 = (longlong)local_1b0;
    uVar18 = *(int *)(lVar4 + 0xb0) - 1;
    if (*(int *)(lVar4 + 0xb0) == 0) {
      uVar18 = uVar20;
    }
    if ((local_1b0 != 0) || (iVar23 = 2, uVar18 == 0xffffffff)) {
      iVar23 = 1;
    }
    local_1b8 = (void *)0x0;
    local_res20 = *(longlong **)(lVar4 + 0x88);
    if ((local_1b0 == 0) && (uVar18 + iVar23 == 0)) {
      local_1ac = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1b0 + uVar18 + iVar23,0);
      _guard_xfg_dispatch_icall_nop(local_1b8,local_res20,lVar19 * 2);
    }
    FString::PathAppend(&local_1b8,*ppvVar2,uVar18);
    ppvVar2 = (void **)(lVar4 + 0x98);
    if (ppvVar2 == &local_1b8) {
      if (local_1b8 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*ppvVar2 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar2 = local_1b8;
      *(int *)(lVar4 + 0xa0) = local_1b0;
      *(undefined4 *)(lVar4 + 0xa4) = local_1ac;
    }
    FString::ReplaceInline(ppvVar2,&DAT_14518dd94,&DAT_14518dd84,1);
    FString::ReplaceInline(ppvVar2,&DAT_14518de7c,&DAT_14518dde4,1);
    FString::ReplaceInline(ppvVar2,&DAT_145193ce4,&DAT_145190e24,1);
    FString::ReplaceInline(ppvVar2,&DAT_14518df04,&DAT_14518dedc,1);
    FString::ReplaceInline(ppvVar2,&DAT_14518df64,&DAT_14518df34,1);
    FString::ReplaceInline(ppvVar2,&DAT_14518e054,&DAT_14518dff4,1);
    FString::ReplaceInline(ppvVar2,&DAT_14518e0b4,&DAT_14518e084,1);
    plVar10 = (longlong *)FUN_1415c3d50();
    puVar22 = &DAT_143f3eda8;
    if (*(int *)(lVar4 + 0xa0) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = *ppvVar2;
    }
    cVar5 = (**(code **)(*plVar10 + 0x50))(plVar10,puVar15);
    if (cVar5 == '\0') {
      plVar10 = (longlong *)FUN_1415c3d50();
      if (*(int *)(lVar4 + 0xa0) != 0) {
        puVar22 = *ppvVar2;
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,puVar22,1);
    }
  }
  else {
    plVar10 = plVar21;
    if ((int)local_res18[1] == 0) {
      plVar10 = local_res18;
    }
    if (((plVar10 != (longlong *)0x0) && (DAT_146b09438 == 2)) || (param_11 != '\0'))
    goto LAB_1427509cf;
  }
  lVar19 = lVar4 + 0x2b8;
  uVar18 = uVar17 & 7;
  FShaderCompilerDefinitions::SetDefine(lVar19,L"PIXELSHADER",uVar18 == 3);
  FShaderCompilerDefinitions::SetDefine(lVar19,L"DOMAINSHADER",uVar18 == 2);
  FShaderCompilerDefinitions::SetDefine(lVar19,L"HULLSHADER",uVar18 == 1);
  FShaderCompilerDefinitions::SetDefine(lVar19,L"VERTEXSHADER",uVar18 == 0);
  FShaderCompilerDefinitions::SetDefine(lVar19,L"GEOMETRYSHADER",uVar18 == 4);
  FShaderCompilerDefinitions::SetDefine(lVar19,L"COMPUTESHADER",uVar18 == 5);
  local_190[2] = 0;
  local_190[3] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_190 + 2,0);
  FGenericPlatformString::Memcpy(local_190[2],L"#define",0x10);
  local_190[0] = 0;
  local_190[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_190,0);
  FGenericPlatformString::Memcpy(local_190[0],L"COMPILER_DEFINE",0x20);
  local_d8 = local_190;
  local_d0 = local_190 + 2;
  FUN_140497620(lVar19,local_f0,&local_d8,0);
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  if (local_190[2] != 0) {
    FMemory::Free();
  }
  iVar23 = FUN_1419ef5f0(uVar27);
  lVar19 = lVar4 + 0xb8;
  if (iVar23 < 2) {
    FUN_141a172f0(lVar19,L"SHADING_PATH_MOBILE",1);
  }
  else {
    FUN_141a172f0(lVar19,L"SHADING_PATH_DEFERRED",1);
  }
  piVar26 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar26 < DAT_146b0a590) && (_Init_thread_header(&DAT_146b0a590), DAT_146b0a590 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.InstancedStereo");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a588 = plVar10;
    _Init_thread_footer(&DAT_146b0a590);
  }
  if ((*piVar26 < DAT_146b0a5a0) && (_Init_thread_header(&DAT_146b0a5a0), DAT_146b0a5a0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MultiView");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a598 = plVar10;
    _Init_thread_footer(&DAT_146b0a5a0);
  }
  if ((*piVar26 < DAT_146b0a5b0) && (_Init_thread_header(&DAT_146b0a5b0), DAT_146b0a5b0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MobileMultiView");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a5a8 = plVar10;
    _Init_thread_footer(&DAT_146b0a5b0);
  }
  if ((*piVar26 < DAT_146b0a5c0) && (_Init_thread_header(&DAT_146b0a5c0), DAT_146b0a5c0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.MonoscopicFarField");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a5b8 = plVar10;
    _Init_thread_footer(&DAT_146b0a5c0);
  }
  if ((*piVar26 < DAT_146b0a5d0) && (_Init_thread_header(&DAT_146b0a5d0), DAT_146b0a5d0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"vr.ODSCapture");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a5c8 = plVar10;
    _Init_thread_footer(&DAT_146b0a5d0);
  }
  param_5._0_1_ = false;
  if (DAT_146b0a588 != (longlong *)0x0) {
    param_5._0_1_ = (int)*DAT_146b0a588 != 0;
  }
  if (DAT_146b0a598 == (longlong *)0x0) {
    local_res20 = (longlong *)((ulonglong)local_res20._1_7_ << 8);
  }
  else {
    local_res20 = (longlong *)CONCAT71(local_res20._1_7_,(int)*DAT_146b0a598 != 0);
  }
  if (DAT_146b0a5a8 == (longlong *)0x0) {
    param_8 = (undefined8 *)((ulonglong)param_8._1_7_ << 8);
  }
  else {
    param_8 = (undefined8 *)CONCAT71(param_8._1_7_,(int)*DAT_146b0a5a8 != 0);
  }
  if ((DAT_146b0a5b8 == (longlong *)0x0) || (param_6._0_4_ = 1, (int)*DAT_146b0a5b8 == 0)) {
    param_6._0_4_ = 0;
  }
  if ((DAT_146b0a5c8 == (longlong *)0x0) || (local_1a8 = 1, (int)*DAT_146b0a5c8 == 0)) {
    local_1a8 = 0;
  }
  if ((((bool)(char)param_5 == false) || (0x1e < uVar27)) || ((0x40050005U >> uVar27 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  param_7 = CONCAT31(param_7._1_3_,uVar6);
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"INSTANCED_STEREO",uVar6);
  plVar10 = plVar21;
  if ((((char)param_7 != '\0') && ((char)local_res20 != '\0')) &&
     (((uVar27 == 2 || (uVar27 == 0x1e)) ||
      (((uVar27 - 0x10 & 0xfffffffd) == 0 &&
       (uVar18 = RHIGetShaderLanguageVersion(uVar27), 2 < uVar18)))))) {
    plVar10 = (longlong *)0x1;
  }
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"MULTI_VIEW",plVar10);
  if (((char)param_8 == '\0') || (plVar10 = (longlong *)0x1, (uVar27 - 8 & 0xffffffef) != 0)) {
    plVar10 = plVar21;
  }
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"MOBILE_MULTI_VIEW",plVar10);
  if ((((char)param_5 != '\0') && ((char)param_7 == '\0')) &&
     ((*(ulonglong *)(DAT_146b09470 + 0x158) >> uVar27 & 1) == 0)) {
    *(ulonglong *)(DAT_146b09470 + 0x158) = *(ulonglong *)(DAT_146b09470 + 0x158) | 1L << uVar27;
  }
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"MONOSCOPIC_FAR_FIELD",(undefined4)param_6);
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"ODS_CAPTURE",local_1a8);
  FUN_1419e2a50(local_res18,lVar19,lVar4 + 0x40,uVar27);
  if (local_res10 != 0) {
    FUN_1419e3000(local_res10,lVar19,lVar4 + 0x40,uVar27);
  }
  if (((int)DAT_146b0a020[1] == 0) || ((int)DAT_146b0a020[1] == 1)) {
    plVar11 = (longlong *)operator_new(0x10);
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = 0;
      plVar11[1] = 0;
      plVar10 = plVar11;
    }
    plVar11 = (longlong *)operator_new(0x18);
    local_f8 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      *(int *)(plVar11 + 1) = 1;
      *plVar11 = (longlong)&PTR_DestroyObject_14413b698;
      *(int *)((longlong)plVar11 + 0xc) = 1;
      plVar11[2] = (longlong)plVar10;
      local_f8 = plVar11;
    }
    SharedPointerInternals::EnableSharedFromThis(local_120 + 4,plVar10,plVar10);
    local_120[4] = 0;
    DAT_146b0a020 = plVar10;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146b0a028,&local_f8);
    plVar10 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_f8 + 1;
      lVar12 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    GenerateInstancedStereoCode(DAT_146b0a020);
  }
  local_190[4] = 0;
  local_190[5] = 0x2f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_190 + 4,0);
  FGenericPlatformString::Memcpy
            (local_190[4],L"/Engine/Generated/GeneratedInstancedStereo.ush",0x5e);
  local_c8 = local_190 + 4;
  local_c0 = &DAT_146b0a020;
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
            (lVar4 + 0x118,&local_res18,&local_c8,0);
  if (local_190[4] != 0) {
    FMemory::Free();
  }
  if ((*piVar26 < DAT_146b0a5e0) && (_Init_thread_header(&DAT_146b0a5e0), DAT_146b0a5e0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a5d8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.Optimize");
    _Init_thread_footer(&DAT_146b0a5e0);
  }
  iVar23 = (**(code **)(*DAT_146b0a5d8 + 0x68))();
  if (iVar23 == 0) {
    iVar23 = *(int *)(lVar4 + 0x170);
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar23);
    *(int *)(lVar4 + 0x170) = iVar23 + 1;
    if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar4 + 0x168,iVar23);
    }
    *(undefined4 *)(*(longlong *)(lVar4 + 0x168) + (longlong)(int)local_res18 * 4) = 1;
  }
  plVar10 = (longlong *)(lVar4 + 0x168);
  piVar14 = (int *)*plVar10;
  piVar1 = piVar14 + *(int *)(lVar4 + 0x170);
  for (; piVar14 != piVar1; piVar14 = piVar14 + 1) {
    if (*piVar14 == 6) {
      local_res18 = (longlong *)CONCAT71(local_res18._1_7_,1);
      goto LAB_14275115c;
    }
  }
  local_res18 = (longlong *)((ulonglong)local_res18._1_7_ << 8);
LAB_14275115c:
  if ((*piVar26 < DAT_146b0a5f0) && (_Init_thread_header(&DAT_146b0a5f0), DAT_146b0a5f0 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a5e8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.KeepDebugInfo");
    _Init_thread_footer(&DAT_146b0a5f0);
  }
  iVar23 = (**(code **)(*DAT_146b0a5e8 + 0x68))();
  if (iVar23 == 1) {
    iVar23 = *(int *)(lVar4 + 0x170);
    local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar23);
    *(int *)(lVar4 + 0x170) = iVar23 + 1;
    if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
    }
    lVar12 = (longlong)(int)local_res18;
    local_res18 = (longlong *)CONCAT71(local_res18._1_7_,1);
    *(undefined4 *)(*plVar10 + lVar12 * 4) = 6;
  }
  if ((*piVar26 < DAT_146b0a600) && (_Init_thread_header(&DAT_146b0a600), DAT_146b0a600 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a5f8 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.FastMath");
    _Init_thread_footer(&DAT_146b0a600);
  }
  if ((DAT_146b0a5f8 != (longlong *)0x0) &&
     (iVar23 = (**(code **)(*DAT_146b0a5f8 + 0x68))(), iVar23 == 0)) {
    iVar23 = *(int *)(lVar4 + 0x170);
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
    *(int *)(lVar4 + 0x170) = iVar23 + 1;
    if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
    }
    *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 7;
  }
  if ((*piVar26 < DAT_146b0a610) && (_Init_thread_header(&DAT_146b0a610), DAT_146b0a610 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a608 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.FlowControlMode");
    _Init_thread_footer(&DAT_146b0a610);
  }
  if (DAT_146b0a608 != (longlong *)0x0) {
    iVar23 = (**(code **)(*DAT_146b0a608 + 0x68))();
    if (iVar23 == 1) {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 0;
    }
    else if (iVar23 == 2) {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 2;
    }
  }
  switch(uVar27) {
  case 0:
  case 5:
  case 7:
  case 0xe:
  case 0x1f:
    if ((*piVar26 < DAT_146b0a620) && (_Init_thread_header(&DAT_146b0a620), DAT_146b0a620 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b0a618 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.D3D.RemoveUnusedInterpolators");
      _Init_thread_footer(&DAT_146b0a620);
    }
    if ((DAT_146b0a618 != (longlong *)0x0) &&
       (iVar23 = (**(code **)(*DAT_146b0a618 + 0x68))(), iVar23 != 0)) {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 0xb;
    }
    break;
  case 4:
    goto switchD_1427512b6_caseD_4;
  }
  if ((uVar27 < 0x1c) && ((0x8c51800U >> uVar27 & 1) != 0)) {
    if ((*piVar26 < DAT_146b0a630) && (_Init_thread_header(&DAT_146b0a630), DAT_146b0a630 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b0a628 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.ZeroInitialise");
      _Init_thread_footer(&DAT_146b0a630);
    }
    iVar23 = (**(code **)(*DAT_146b0a628 + 0x68))();
    if (iVar23 != 0) {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 8;
    }
    if ((*piVar26 < DAT_146b0a640) && (_Init_thread_header(&DAT_146b0a640), DAT_146b0a640 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b0a638 =
           (longlong *)
           (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Shaders.BoundsChecking");
      _Init_thread_footer(&DAT_146b0a640);
    }
    iVar23 = (**(code **)(*DAT_146b0a638 + 0x68))();
    if (iVar23 != 0) {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 9;
    }
    if ((*piVar26 < DAT_146b0a650) && (_Init_thread_header(&DAT_146b0a650), DAT_146b0a650 == -1)) {
      DAT_146b0a648 = (longlong *)GetTargetPlatformManagerRef();
      _Init_thread_footer(&DAT_146b0a650);
    }
    FUN_141eca160(&local_1a8,uVar27);
    local_res20 = (longlong *)
                  (**(code **)(*DAT_146b0a648 + 0x50))(DAT_146b0a648,CONCAT44(uStack_1a4,local_1a8))
    ;
    if ((*piVar26 < DAT_146b0a658) && (_Init_thread_header(&DAT_146b0a658), DAT_146b0a658 == -1)) {
      if ((local_res20 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*local_res20 + 0x38))(local_res20), cVar5 == '\0')) {
        DAT_146b0a654 = '\0';
      }
      else {
        DAT_146b0a654 = '\x01';
      }
      _Init_thread_footer(&DAT_146b0a658);
    }
    if (DAT_146b0a654 == '\0') {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 1;
    }
    else {
      local_120[2] = 0;
      local_120[3] = 0;
      local_120[0] = 0;
      local_120[1] = 0;
      local_190[0xc] = 0;
      local_128 = 0;
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",L"RemoteServerName",
                 local_120 + 2,&DAT_1468e2360);
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",L"RSyncUsername",
                 local_120,&DAT_1468e2360);
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",
                 L"SSHPrivateKeyOverridePath",local_190 + 0xc,&DAT_1468e2360);
      local_190[6] = 0;
      local_190[7] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_190 + 6,0);
      FGenericPlatformString::Memcpy(local_190[6],L"RemoteServerName",0x22);
      local_b8 = local_190 + 6;
      local_b0 = local_120 + 2;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(lVar4 + 0x268,&param_8,&local_b8,0);
      if (local_190[6] != 0) {
        FMemory::Free();
      }
      local_190[8] = 0;
      local_190[9] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_190 + 8,0);
      FGenericPlatformString::Memcpy(local_190[8],L"RSyncUsername",0x1c);
      local_a8 = local_190 + 8;
      local_a0 = local_120;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(lVar4 + 0x268,&param_5,&local_a8,0);
      if (local_190[8] != 0) {
        FMemory::Free();
      }
      if (((int)local_128 != 0) && (0 < (int)local_128 + -1)) {
        local_190[10] = 0;
        local_190[0xb] = 0x1a;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_190 + 10,0);
        FGenericPlatformString::Memcpy(local_190[10],L"SSHPrivateKeyOverridePath",0x34);
        local_98 = local_190 + 10;
        local_90 = local_190 + 0xc;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>(lVar4 + 0x268,&param_6,&local_98,0)
        ;
        if (local_190[10] != 0) {
          FMemory::Free();
        }
      }
      if (local_190[0xc] != 0) {
        FMemory::Free();
      }
      if (local_120[0] != 0) {
        FMemory::Free();
      }
      if (local_120[2] != 0) {
        FMemory::Free();
      }
    }
    local_res10 = local_res10 & 0xffffffffffffff00;
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"/Script/UnrealEd.ProjectPackagingSettings",
               L"bSharedMaterialNativeLibraries",&local_res10,&DAT_1468e2410);
    if ((DAT_146b0a654 != '\0') && ((char)local_res10 != '\0')) {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 0xe;
    }
    uVar8 = RHIGetShaderLanguageVersion(uVar27);
    FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"MAX_SHADER_LANGUAGE_VERSION",uVar8);
    local_1a0 = (undefined2 *)0x0;
    local_198 = 0;
    param_7 = CONCAT31(param_7._1_3_,1);
    if ((uVar27 < 0x1c) && ((0x8dfc0ebU >> uVar27 & 1) != 0)) {
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"/Script/MacTargetPlatform.MacTargetSettings",L"UseFastIntrinsics",
                 &local_1a0,&DAT_1468e2360);
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"/Script/MacTargetPlatform.MacTargetSettings",
                 L"EnableMathOptimisations",&param_7,&DAT_1468e2360);
    }
    else {
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",L"UseFastIntrinsics"
                 ,&local_1a0,&DAT_1468e2360);
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"/Script/IOSRuntimeSettings.IOSRuntimeSettings",
                 L"EnableMathOptimisations",&param_7,&DAT_1468e2360);
      param_10 = '\0';
    }
    puVar22 = &DAT_143f3eda8;
    if ((int)local_198 != 0) {
      puVar22 = local_1a0;
    }
    FUN_1404a3a40(lVar19,L"METAL_USE_FAST_INTRINSICS",puVar22);
    if ((char)param_7 == '\0') {
      iVar23 = *(int *)(lVar4 + 0x170);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,iVar23);
      *(int *)(lVar4 + 0x170) = iVar23 + 1;
      if (*(int *)(lVar4 + 0x174) < iVar23 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar10,iVar23);
      }
      *(undefined4 *)(*plVar10 + (longlong)(int)local_res20 * 4) = 7;
    }
    if (local_1a0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
switchD_1427512b6_caseD_4:
  }
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"HAS_INVERTED_Z_BUFFER",1);
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  if ((char)local_res18 != '\0') {
    uVar8 = 1;
    FConfigCacheIni::GetString
              (DAT_1468b6148,L"DevOptions.Shaders",L"ShaderPDBRoot",&local_1f8,&DAT_1468e2360);
    if (1 < (int)local_1f0) {
      uVar29 = CONCAT44(uVar8,0xffffffff);
      iVar23 = FUN_141592950(&local_1f8,L"$ENGINEROOT$",1,0,uVar29);
      uVar8 = (undefined4)((ulonglong)uVar29 >> 0x20);
      if (iVar23 != -1) {
        puVar9 = (undefined8 *)FPaths::EngineDir(local_70);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar9;
        }
        FString::ReplaceInline(&local_1f8,L"$ENGINEROOT$",puVar22,1);
        if (local_70[0] != 0) {
          FMemory::Free();
        }
      }
      iVar23 = FUN_141592950(&local_1f8,L"$GAMEROOT$",1,0,CONCAT44(uVar8,0xffffffff));
      if (iVar23 != -1) {
        puVar9 = (undefined8 *)FPaths::ProjectDir(local_60);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar9;
        }
        FString::ReplaceInline(&local_1f8,L"$GAMEROOT$",puVar22,1);
        if (local_60[0] != 0) {
          FMemory::Free();
        }
      }
      puVar22 = &DAT_143f3eda8;
      if ((int)local_1f0 != 0) {
        puVar22 = local_1f8;
      }
      FUN_1404a3a40(lVar19,L"SHADER_PDB_ROOT",puVar22);
    }
    if (local_1f8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if ((*piVar26 < DAT_146b0a668) && (_Init_thread_header(&DAT_146b0a668), DAT_146b0a668 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ClearCoatNormal");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a660 = plVar10;
    _Init_thread_footer(&DAT_146b0a668);
  }
  plVar10 = plVar21;
  if (DAT_146b0a660 != (longlong *)0x0) {
    plVar10 = (longlong *)(ulonglong)((int)*DAT_146b0a660 != 0);
  }
  FUN_141a172f0(lVar19,L"CLEAR_COAT_BOTTOM_NORMAL",plVar10);
  if ((*piVar26 < DAT_146b0a678) && (_Init_thread_header(&DAT_146b0a678), DAT_146b0a678 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.IrisNormal");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a670 = plVar10;
    _Init_thread_footer(&DAT_146b0a678);
  }
  plVar10 = plVar21;
  if (DAT_146b0a670 != (longlong *)0x0) {
    plVar10 = (longlong *)(ulonglong)((int)*DAT_146b0a670 != 0);
  }
  FUN_141a172f0(lVar19,L"IRIS_NORMAL",plVar10);
  if ((*piVar26 < DAT_146b0a688) && (_Init_thread_header(&DAT_146b0a688), DAT_146b0a688 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"Compat.UseDXT5NormalMaps");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a680 = plVar10;
    _Init_thread_footer(&DAT_146b0a688);
  }
  plVar10 = plVar21;
  if (DAT_146b0a680 != (longlong *)0x0) {
    plVar10 = (longlong *)(ulonglong)((int)*DAT_146b0a680 != 0);
  }
  FUN_141a172f0(lVar19,L"DXT5_NORMALMAPS",plVar10);
  if ((uVar27 < 0x1c) && ((0x8dfc0ebU >> uVar27 & 1) != 0)) {
LAB_142751a75:
    if (param_10 != '\0') {
      if ((*piVar26 < DAT_146b0a6a8) && (_Init_thread_header(&DAT_146b0a6a8), DAT_146b0a6a8 == -1))
      {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar11 = (longlong *)
                  (**(code **)(*DAT_1468b1f88 + 0x98))
                            (DAT_1468b1f88,L"r.CompileShadersForDevelopment");
        plVar10 = plVar21;
        if (plVar11 != (longlong *)0x0) {
          plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
        }
        DAT_146b0a6a0 = plVar10;
        _Init_thread_footer(&DAT_146b0a6a8);
      }
      plVar10 = plVar21;
      if (DAT_146b0a6a0 != (longlong *)0x0) {
        plVar10 = (longlong *)(ulonglong)((int)*DAT_146b0a6a0 != 0);
      }
      FUN_141a172f0(lVar19,L"COMPILE_SHADERS_FOR_DEVELOPMENT",plVar10);
    }
  }
  else {
    if ((*piVar26 < DAT_146b0a698) && (_Init_thread_header(&DAT_146b0a698), DAT_146b0a698 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar11 = (longlong *)
                (**(code **)(*DAT_1468b1f88 + 0x98))
                          (DAT_1468b1f88,L"r.AllowDebugViewModesOnConsoles");
      plVar10 = plVar21;
      if (plVar11 != (longlong *)0x0) {
        plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
      }
      DAT_146b0a690 = plVar10;
      _Init_thread_footer(&DAT_146b0a698);
    }
    if ((DAT_146b0a690 == (longlong *)0x0) || ((int)*DAT_146b0a690 != 0)) goto LAB_142751a75;
  }
  if ((*piVar26 < DAT_146b0a6b8) && (_Init_thread_header(&DAT_146b0a6b8), DAT_146b0a6b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a6b0 = plVar10;
    _Init_thread_footer(&DAT_146b0a6b8);
  }
  if (DAT_146b0a6b0 == (longlong *)0x0) {
    bVar28 = true;
  }
  else {
    bVar28 = (int)*DAT_146b0a6b0 != 0;
  }
  FUN_141a172f0(lVar19,L"ALLOW_STATIC_LIGHTING",bVar28);
  if ((*piVar26 < DAT_146b0a6c8) && (_Init_thread_header(&DAT_146b0a6c8), DAT_146b0a6c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.BasePassOutputsVelocity");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a6c0 = plVar10;
    _Init_thread_footer(&DAT_146b0a6c8);
  }
  plVar10 = plVar21;
  if (DAT_146b0a6c0 != (longlong *)0x0) {
    plVar10 = (longlong *)(ulonglong)((int)*DAT_146b0a6c0 != 0);
  }
  FUN_141a172f0(lVar19,L"GBUFFER_HAS_VELOCITY",plVar10);
  if ((*piVar26 < DAT_146b0a6d8) && (_Init_thread_header(&DAT_146b0a6d8), DAT_146b0a6d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar11 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SelectiveBasePassOutputs");
    plVar10 = plVar21;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar11 + 0x38))(plVar11);
    }
    DAT_146b0a6d0 = plVar10;
    _Init_thread_footer(&DAT_146b0a6d8);
  }
  plVar10 = plVar21;
  if ((DAT_146b0a6d0 != (longlong *)0x0) && (((int)*DAT_146b0a6d0 != 0 || (uVar27 == 4)))) {
    plVar10 = (longlong *)0x1;
  }
  FUN_141a172f0(lVar19,L"SELECTIVE_BASEPASS_OUTPUTS",plVar10);
  cVar5 = FUN_141a10f60(uVar27);
  FUN_141a172f0(lVar19,L"USE_PREEXPOSURE",cVar5 != '\0');
  if ((*piVar26 < DAT_146b0a6e8) && (_Init_thread_header(&DAT_146b0a6e8), DAT_146b0a6e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a6e0 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DBuffer");
    _Init_thread_footer(&DAT_146b0a6e8);
  }
  uVar27 = uVar20;
  if (DAT_146b0a6e0 != (longlong *)0x0) {
    uVar27 = (**(code **)(*DAT_146b0a6e0 + 0x68))();
  }
  FUN_141a172f0(lVar19,L"USE_DBUFFER",uVar27);
  if ((*piVar26 < DAT_146b0a6f8) && (_Init_thread_header(&DAT_146b0a6f8), DAT_146b0a6f8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a6f0 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowGlobalClipPlane");
    _Init_thread_footer(&DAT_146b0a6f8);
  }
  plVar10 = plVar21;
  if (DAT_146b0a6f0 != (longlong *)0x0) {
    iVar23 = (**(code **)(*DAT_146b0a6f0 + 0x68))();
    plVar10 = (longlong *)(ulonglong)(iVar23 != 0);
  }
  FUN_141a172f0(lVar19,L"PROJECT_ALLOW_GLOBAL_CLIP_PLANE",plVar10);
  if ((*piVar26 < DAT_146b0a708) && (_Init_thread_header(&DAT_146b0a708), DAT_146b0a708 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a700 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ForwardShading");
    _Init_thread_footer(&DAT_146b0a708);
  }
  if (DAT_146b0a700 == (longlong *)0x0) {
    bVar28 = false;
  }
  else {
    iVar23 = (**(code **)(*DAT_146b0a700 + 0x68))();
    bVar28 = iVar23 != 0;
  }
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"FORWARD_SHADING",bVar28);
  if ((*piVar26 < DAT_146b0a718) && (_Init_thread_header(&DAT_146b0a718), DAT_146b0a718 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a710 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.EarlyZPassOnlyMaterialMasking");
    _Init_thread_footer(&DAT_146b0a718);
  }
  plVar10 = plVar21;
  if (DAT_146b0a710 != (longlong *)0x0) {
    iVar23 = (**(code **)(*DAT_146b0a710 + 0x68))();
    plVar10 = (longlong *)(ulonglong)(iVar23 != 0);
  }
  FUN_141a172f0(lVar19,L"EARLY_Z_PASS_ONLY_MATERIAL_MASKING",plVar10);
  if ((*piVar26 < DAT_146b0a728) && (_Init_thread_header(&DAT_146b0a728), DAT_146b0a728 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a720 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VertexFoggingForOpaque")
    ;
    _Init_thread_footer(&DAT_146b0a728);
  }
  if ((bVar28 != false) && (DAT_146b0a720 != (longlong *)0x0)) {
    iVar23 = (**(code **)(*DAT_146b0a720 + 0x68))();
    plVar10 = (longlong *)0x1;
    if (iVar23 != 0) goto LAB_142751ca7;
  }
  plVar10 = plVar21;
LAB_142751ca7:
  FShaderCompilerDefinitions::SetDefine(lVar4 + 0x2b8,L"PROJECT_VERTEX_FOGGING_FOR_OPAQUE",plVar10);
  if ((*piVar26 < DAT_146b0a738) && (_Init_thread_header(&DAT_146b0a738), DAT_146b0a738 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a730 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Mobile.DisableVertexFog");
    _Init_thread_footer(&DAT_146b0a738);
  }
  plVar10 = plVar21;
  if (DAT_146b0a730 != (longlong *)0x0) {
    iVar23 = (**(code **)(*DAT_146b0a730 + 0x68))();
    plVar10 = (longlong *)(ulonglong)(iVar23 != 0);
  }
  FUN_141a172f0(lVar19,L"PROJECT_MOBILE_DISABLE_VERTEX_FOG",plVar10);
  if ((*piVar26 < DAT_146b0a748) && (_Init_thread_header(&DAT_146b0a748), DAT_146b0a748 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a740 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Mobile.UseLegacyShadingModel");
    _Init_thread_footer(&DAT_146b0a748);
  }
  plVar10 = plVar21;
  if (DAT_146b0a740 != (longlong *)0x0) {
    iVar23 = (**(code **)(*DAT_146b0a740 + 0x68))();
    plVar10 = (longlong *)(ulonglong)(iVar23 != 0);
  }
  FUN_141a172f0(lVar19,L"PROJECT_MOBILE_USE_LEGACY_SHADING",plVar10);
  if ((*piVar26 < DAT_146b0a758) && (_Init_thread_header(&DAT_146b0a758), DAT_146b0a758 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a750 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PostProcessing.PropagateAlpha");
    _Init_thread_footer(&DAT_146b0a758);
  }
  uVar27 = (**(code **)(*DAT_146b0a750 + 0x68))();
  if (2 < uVar27) {
    uVar27 = uVar20;
  }
  FUN_141a172f0(lVar19,L"POST_PROCESS_ALPHA",uVar27);
  if ((*piVar26 < DAT_146b0a768) && (_Init_thread_header(&DAT_146b0a768), DAT_146b0a768 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a760 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DistanceFieldBuild.EightBit");
    _Init_thread_footer(&DAT_146b0a768);
  }
  plVar10 = plVar21;
  if (DAT_146b0a760 != (longlong *)0x0) {
    iVar23 = (**(code **)(*DAT_146b0a760 + 0x68))();
    plVar10 = (longlong *)(ulonglong)(iVar23 != 0);
  }
  FUN_141a172f0(lVar19,L"EIGHT_BIT_MESH_DISTANCE_FIELDS",plVar10);
  if (DAT_146ab62ed == '\0') {
    pwVar16 = L"PLATFORM_SUPPORTS_RENDERTARGET_WRITE_MASK";
  }
  else {
    pwVar16 = L"PLATFORM_SUPPORTS_RENDERTARGET_WRITE_MASK";
  }
  FUN_141a172f0(lVar19,pwVar16,DAT_146ab62ed != '\0');
  uVar17 = uVar17 & 0xf8;
  if (((uVar17 == 0x20) || (uVar17 == 0x10)) || (uVar17 == 0xf8)) {
    pwVar16 = L"DBUFFER_AS_ARRAY";
    plVar21 = (longlong *)0x1;
  }
  else {
    pwVar16 = L"DBUFFER_AS_ARRAY";
  }
  FUN_141a172f0(lVar19,pwVar16,plVar21);
  plVar21 = param_9;
  iVar23 = (int)param_9[1];
  *(int *)(param_9 + 1) = iVar23 + 1;
  if (*(int *)((longlong)param_9 + 0xc) < iVar23 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_9,iVar23);
  }
  *(longlong *)(*plVar21 + (longlong)iVar23 * 8) = lVar4;
  return;
}



// FUNCTION 142752a10 FUN_142752a10 body=894 status=ok
// SIG undefined FUN_142752a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142752a10(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint local_e8;
  uint uStack_e4;
  int iStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined1 auStack_b0 [16];
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  uint uStack_38;
  undefined8 uStack_30;
  
  iVar9 = (int)param_2[5];
  local_88 = (uint *)(param_2 + 2);
  uVar14 = 0;
  uStack_e4 = 1;
  local_e8 = 0;
  iStack_d4 = 0;
  uStack_d0 = 0;
  if (iVar9 != 0) {
    puVar13 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar13 = local_88;
    }
    uVar11 = *puVar13;
    uVar10 = uVar14;
    uVar12 = uVar14;
    while (uVar11 == 0) {
      iVar6 = (int)uVar10;
      uStack_d0 = (int)uVar12 + 0x20;
      uVar12 = (ulonglong)uStack_d0;
      local_e8 = iVar6 + 1;
      uVar10 = (ulonglong)local_e8;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142752ad1;
      uVar11 = puVar13[(longlong)iVar6 + 1];
    }
    uStack_e4 = -uVar11 & uVar11;
    iVar6 = 0x1f;
    if (uStack_e4 != 0) {
      for (; uStack_e4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_e4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_d4 = (uStack_d0 - iVar6) + 0x1f;
    if (iVar9 < iStack_d4) {
LAB_142752ad1:
      iStack_d4 = iVar9;
    }
  }
  uStack_80 = CONCAT44(iStack_d4,0xffffffff);
  auStack_b0._8_4_ = uStack_d0;
  auStack_b0._0_8_ = uStack_80;
  auStack_b0._12_4_ = uStack_cc;
  uStack_c0 = CONCAT44(uStack_e4,local_e8);
  local_60 = 0;
  uStack_30._0_4_ = SUB84(param_2,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78._8_4_ = (undefined4)uStack_30;
  local_78._0_8_ = auStack_b0._8_8_;
  local_78._12_4_ = uStack_30._4_4_;
  iVar9 = iStack_d4;
  puStack_b8 = local_88;
  local_98 = param_2;
  uStack_90 = uStack_c0;
  local_68 = param_2;
  uStack_30 = param_2;
  if (iStack_d4 < (int)param_2[5]) {
    do {
      plVar4 = local_98;
      auVar3 = auStack_b0;
      if (*(char *)(*local_98 + 0xc + (longlong)iVar9 * 0x80) == '\0') {
        bVar1 = false;
        uStack_e4 = 1;
        local_e8 = 0;
        iStack_d4 = 0;
        uStack_d0 = 0;
        iVar6 = (int)_DAT_146533c78;
        if (iVar6 != 0) {
          puVar13 = DAT_146533c70;
          if (DAT_146533c70 == (uint *)0x0) {
            puVar13 = (uint *)&DAT_146533c60;
          }
          uVar11 = *puVar13;
          uVar10 = uVar14;
          uVar12 = uVar14;
          while (uVar11 == 0) {
            iVar7 = (int)uVar10;
            uStack_d0 = (int)uVar12 + 0x20;
            uVar12 = (ulonglong)uStack_d0;
            local_e8 = iVar7 + 1;
            uVar10 = (ulonglong)local_e8;
            if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142752c33;
            uVar11 = puVar13[(longlong)iVar7 + 1];
          }
          uStack_e4 = -uVar11 & uVar11;
          iVar7 = 0x1f;
          if (uStack_e4 != 0) {
            for (; uStack_e4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uStack_e4 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          iStack_d4 = (uStack_d0 - iVar7) + 0x1f;
          if (iVar6 < iStack_d4) {
LAB_142752c33:
            iStack_d4 = iVar6;
          }
        }
        local_58 = &DAT_146533c50;
        uStack_c0 = CONCAT44(uStack_e4,local_e8);
        uStack_40 = 0xffffffff;
        iStack_3c = iStack_d4;
        uStack_38 = uStack_d0;
        puStack_48 = &DAT_146533c60;
        auStack_b0._4_4_ = iStack_d4;
        auStack_b0._0_4_ = 0xffffffff;
        uVar2 = auStack_b0._0_8_;
        auStack_b0._0_8_ = auVar3._0_8_;
        auStack_b0._8_4_ = uStack_d0;
        puStack_b8 = (uint *)&DAT_146533c60;
        auStack_b0 = CONCAT88(auStack_b0._8_8_,uVar2);
        uStack_50 = uStack_c0;
        if (iStack_d4 < iVar6) {
          do {
            if (*(int *)(*(longlong *)((longlong)iStack_d4 * 0x20 + DAT_146533c50) + 0x358) ==
                *(int *)((longlong)iVar9 * 0x80 + *plVar4)) {
              lVar8 = DAT_146533c50 + (longlong)iStack_d4 * 0x20;
              uVar10 = uVar14;
              uVar12 = uVar14;
              if (0 < *(int *)(lVar8 + 0x10)) {
                do {
                  if ((bVar1) ||
                     (cVar5 = (**(code **)(**(longlong **)(uVar10 + *(longlong *)(lVar8 + 8)) + 200)
                              )(), cVar5 != '\0')) {
                    bVar1 = true;
                  }
                  uVar11 = (int)uVar12 + 1;
                  lVar8 = DAT_146533c50 + (longlong)iStack_d4 * 0x20;
                  uVar10 = uVar10 + 8;
                  uVar12 = (ulonglong)uVar11;
                } while ((int)uVar11 < *(int *)(lVar8 + 0x10));
              }
              break;
            }
            auStack_b0._0_4_ = auStack_b0._0_4_ & ~uStack_c0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
            iStack_d4 = auStack_b0._4_4_;
          } while ((int)auStack_b0._4_4_ < (int)puStack_b8[6]);
        }
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      iVar9 = uStack_80._4_4_;
    } while (uStack_80._4_4_ < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      local_88 = (uint *)TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
                         ::ConditionalRehash(local_68,(int)local_68[1] -
                                                      *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return (ulonglong)local_88 & 0xffffffffffffff00;
}



// FUNCTION 142752d90 FUN_142752d90 body=2521 status=ok
// SIG undefined FUN_142752d90(void)

void FUN_142752d90(undefined1 *param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (*piVar10 < DAT_146b0a050) {
    _Init_thread_header(&DAT_146b0a050);
    if (DAT_146b0a050 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAtmosphericFog");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a048 = lVar8;
      _Init_thread_footer(&DAT_146b0a050);
    }
  }
  if (*piVar10 < DAT_146b0a060) {
    _Init_thread_header(&DAT_146b0a060);
    if (DAT_146b0a060 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportStationarySkylight");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a058 = lVar8;
      _Init_thread_footer(&DAT_146b0a060);
    }
  }
  if (*piVar10 < DAT_146b0a070) {
    _Init_thread_header(&DAT_146b0a070);
    if (DAT_146b0a070 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportLowQualityLightmaps");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a068 = lVar8;
      _Init_thread_footer(&DAT_146b0a070);
    }
  }
  if (*piVar10 < DAT_146b0a080) {
    _Init_thread_header(&DAT_146b0a080);
    if (DAT_146b0a080 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.SupportPointLightWholeSceneShadows");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a078 = lVar8;
      _Init_thread_footer(&DAT_146b0a080);
    }
  }
  if (*piVar10 < DAT_146b0a090) {
    _Init_thread_header(&DAT_146b0a090);
    if (DAT_146b0a090 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportAllShaderPermutations")
      ;
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a088 = lVar8;
      _Init_thread_footer(&DAT_146b0a090);
    }
  }
  if (*piVar10 < DAT_146b0a0a0) {
    _Init_thread_header(&DAT_146b0a0a0);
    if (DAT_146b0a0a0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.VertexFoggingForOpaque");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a098 = lVar8;
      _Init_thread_footer(&DAT_146b0a0a0);
    }
  }
  if (*piVar10 < DAT_146b0a0b0) {
    _Init_thread_header(&DAT_146b0a0b0);
    if (DAT_146b0a0b0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      DAT_146b0a0a8 =
           (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ForwardShading");
      _Init_thread_footer(&DAT_146b0a0b0);
    }
  }
  if (*piVar10 < DAT_146b0a0c0) {
    _Init_thread_header(&DAT_146b0a0c0);
    if (DAT_146b0a0c0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowStaticLighting");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a0b8 = lVar8;
      _Init_thread_footer(&DAT_146b0a0c0);
    }
  }
  if (*piVar10 < DAT_146b0a0d0) {
    _Init_thread_header(&DAT_146b0a0d0);
    if (DAT_146b0a0d0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.Mobile.AllowMovableDirectionalLights");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a0c8 = lVar8;
      _Init_thread_footer(&DAT_146b0a0d0);
    }
  }
  if (*piVar10 < DAT_146b0a0e0) {
    _Init_thread_header(&DAT_146b0a0e0);
    if (DAT_146b0a0e0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.Mobile.EnableStaticAndCSMShadowReceivers");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a0d8 = lVar8;
      _Init_thread_footer(&DAT_146b0a0e0);
    }
  }
  if (*piVar10 < DAT_146b0a0f0) {
    _Init_thread_header(&DAT_146b0a0f0);
    if (DAT_146b0a0f0 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.Mobile.AllowDistanceFieldShadows");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a0e8 = lVar8;
      _Init_thread_footer(&DAT_146b0a0f0);
    }
  }
  if (*piVar10 < DAT_146b0a100) {
    _Init_thread_header(&DAT_146b0a100);
    if (DAT_146b0a100 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileNumDynamicPointLights");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a0f8 = lVar8;
      _Init_thread_footer(&DAT_146b0a100);
    }
  }
  if (*piVar10 < DAT_146b0a110) {
    _Init_thread_header(&DAT_146b0a110);
    if (DAT_146b0a110 == -1) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar9 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))
                         (DAT_1468b1f88,L"r.MobileDynamicPointLightsUseStaticBranch");
      lVar8 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar9 + 0x38))(plVar9);
      }
      DAT_146b0a108 = lVar8;
      _Init_thread_footer(&DAT_146b0a110);
    }
  }
  lVar8 = DAT_146b0a088;
  lVar11 = 4;
  if (DAT_146b0a088 == 0) {
LAB_142752ec6:
    bVar1 = false;
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      if (DVar5 == DAT_1468c21c0) goto LAB_142752eb9;
      lVar7 = 4;
    }
    else {
LAB_142752eb9:
      lVar7 = 0;
    }
    if (*(int *)(lVar7 + lVar8) == 0) goto LAB_142752ec6;
    bVar1 = true;
  }
  lVar8 = DAT_146b0a048;
  if (DAT_146b0a048 == 0) {
LAB_142752f16:
    uVar4 = 1;
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      if (DVar5 == DAT_1468c21c0) goto LAB_142752f05;
      lVar7 = 4;
    }
    else {
LAB_142752f05:
      lVar7 = 0;
    }
    if ((*(int *)(lVar7 + lVar8) != 0) || (bVar1)) goto LAB_142752f16;
    uVar4 = 0;
  }
  lVar8 = DAT_146b0a058;
  param_1[2] = uVar4;
  if (lVar8 == 0) {
LAB_142752f69:
    uVar4 = 1;
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      if (DVar5 == DAT_1468c21c0) goto LAB_142752f58;
      lVar7 = 4;
    }
    else {
LAB_142752f58:
      lVar7 = 0;
    }
    if ((*(int *)(lVar8 + lVar7) != 0) || (bVar1)) goto LAB_142752f69;
    uVar4 = 0;
  }
  lVar8 = DAT_146b0a078;
  param_1[1] = uVar4;
  if (lVar8 == 0) {
LAB_142752fbc:
    uVar4 = 1;
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      if (DVar5 == DAT_1468c21c0) goto LAB_142752fab;
      lVar7 = 4;
    }
    else {
LAB_142752fab:
      lVar7 = 0;
    }
    if ((*(int *)(lVar7 + lVar8) != 0) || (bVar1)) goto LAB_142752fbc;
    uVar4 = 0;
  }
  lVar8 = DAT_146b0a068;
  *param_1 = uVar4;
  if (lVar8 == 0) {
LAB_14275300e:
    uVar4 = 1;
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      if (DVar5 == DAT_1468c21c0) goto LAB_142752ffd;
      lVar7 = 4;
    }
    else {
LAB_142752ffd:
      lVar7 = 0;
    }
    if ((*(int *)(lVar7 + lVar8) != 0) || (bVar1)) goto LAB_14275300e;
    uVar4 = 0;
  }
  lVar8 = DAT_146b0a0b8;
  param_1[3] = uVar4;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_14275304b;
    lVar7 = 4;
  }
  else {
LAB_14275304b:
    lVar7 = 0;
  }
  lVar2 = DAT_146b0a0c8;
  param_1[5] = *(int *)(lVar7 + lVar8) != 0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_14275308f;
    lVar8 = 4;
  }
  else {
LAB_14275308f:
    lVar8 = 0;
  }
  lVar7 = DAT_146b0a0e8;
  param_1[6] = *(int *)(lVar2 + lVar8) != 0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_1427530d3;
    lVar8 = 4;
  }
  else {
LAB_1427530d3:
    lVar8 = 0;
  }
  lVar2 = DAT_146b0a0d8;
  param_1[7] = *(int *)(lVar8 + lVar7) != 0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_142753117;
    lVar8 = 4;
  }
  else {
LAB_142753117:
    lVar8 = 0;
  }
  lVar7 = DAT_146b0a0f8;
  param_1[8] = *(int *)(lVar8 + lVar2) != 0;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_14275315b;
    lVar8 = 4;
  }
  else {
LAB_14275315b:
    lVar8 = 0;
  }
  lVar2 = DAT_146b0a108;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar7 + lVar8);
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    if (DVar5 == DAT_1468c21c0) goto LAB_14275319b;
    lVar8 = 4;
  }
  else {
LAB_14275319b:
    lVar8 = 0;
  }
  plVar9 = DAT_146b0a0a8;
  param_1[0x10] = *(int *)(lVar8 + lVar2) != 0;
  if (plVar9 != (longlong *)0x0) {
    iVar6 = (**(code **)(*plVar9 + 0x68))();
    lVar8 = DAT_146b0a098;
    if (iVar6 != 0) {
      if (DAT_146b0a098 != 0) {
        cVar3 = FUN_1415ad720(&DAT_1468e2448);
        if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
          DVar5 = GetCurrentThreadId();
          if (DVar5 == DAT_1468c21c0) goto LAB_1427531f5;
        }
        else {
LAB_1427531f5:
          lVar11 = 0;
        }
        if (*(int *)(lVar8 + lVar11) == 0) goto LAB_142753204;
      }
      param_1[4] = 1;
      goto LAB_142753209;
    }
  }
LAB_142753204:
  param_1[4] = 0;
LAB_142753209:
  param_1[0x11] = 1;
  return;
}



// FUNCTION 142753770 InitRHI body=187 status=ok
// SIG undefined InitRHI(void)

void FSharedSamplerState::InitRHI(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_res8 [8];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined1 local_20;
  
  uVar3 = FUN_142853ba0();
  cVar1 = *(char *)(param_1 + 0x38);
  uVar2 = FUN_14240d6a0(0);
  uVar2 = AAIController::GetPerceptionComponent(uVar2);
  uVar2 = FArchive::operator<<(uVar2);
  local_38 = UTextureLODSettings::GetSamplerFilter(uVar2,0);
  local_37 = cVar1 == '\0';
  local_30 = 0;
  local_2c = 0x7f7fffff;
  local_28 = 0;
  local_20 = 0;
  local_36 = local_37;
  local_35 = local_37;
  local_34 = uVar3;
  (**(code **)(*DAT_146ab6358 + 0x28))(DAT_146ab6358,local_res8,&local_38);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_res8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  return;
}



// FUNCTION 142753830 InitializeSharedSamplerStates body=189 status=ok
// SIG undefined InitializeSharedSamplerStates(void)

void InitializeSharedSamplerStates(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (DAT_146b09460 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x40);
    puVar2 = (undefined8 *)0x0;
    DAT_146b09460 = puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 4;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      *puVar1 = &PTR__scalar_deleting_destructor__14519b3f8;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 7) = 1;
      DAT_146b09460 = puVar1;
    }
    puVar1 = (undefined8 *)operator_new(0x40);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 4;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      *puVar1 = &PTR__scalar_deleting_destructor__14519b3f8;
      puVar1[6] = 0;
      *(undefined1 *)(puVar1 + 7) = 0;
      puVar2 = puVar1;
    }
    DAT_146b09468 = puVar2;
    FUN_141edf270(DAT_146b09460);
    FUN_141edf270(DAT_146b09468);
  }
  return;
}



// FUNCTION 142753910 FUN_142753910 body=253 status=ok
// SIG undefined FUN_142753910(void)

undefined8 FUN_142753910(void)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b0a130) && (_Init_thread_header(&DAT_146b0a130), DAT_146b0a130 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR32bppMode")
    ;
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146b0a128 = lVar4;
    _Init_thread_footer(&DAT_146b0a130);
  }
  cVar1 = FUN_142753a10();
  lVar4 = DAT_146b0a128;
  if (cVar1 == '\0') {
    return 0;
  }
  if (DAT_1464c9c5a != '\0') {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
      lVar5 = 4;
    }
    if (*(int *)(lVar5 + lVar4) == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142753a10 FUN_142753a10 body=226 status=ok
// SIG undefined FUN_142753a10(void)

undefined8 FUN_142753a10(void)

{
  char extraout_AL;
  DWORD DVar1;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  undefined7 uVar4;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar5;
  
  lVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b0a120) && (_Init_thread_header(&DAT_146b0a120), DAT_146b0a120 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar2 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR");
    lVar3 = lVar5;
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    DAT_146b0a118 = lVar3;
    _Init_thread_footer(&DAT_146b0a120);
  }
  lVar3 = DAT_146b0a118;
  FUN_1415ad720(&DAT_1468e2448);
  uVar4 = extraout_var;
  if ((extraout_AL == '\0') && (DAT_1468c21ae != '\0')) {
    DVar1 = GetCurrentThreadId();
    uVar4 = (undefined7)(CONCAT44(extraout_var_00,DVar1) >> 8);
    if (DVar1 != DAT_1468c21c0) {
      lVar5 = 4;
    }
  }
  return CONCAT71(uVar4,*(int *)(lVar5 + lVar3) == 1);
}



// FUNCTION 142753b00 FUN_142753b00 body=287 status=ok
// SIG undefined FUN_142753b00(void)

ulonglong FUN_142753b00(void)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar4 = FUN_142753910();
  if ((char)uVar4 != '\0') {
    lVar7 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b0a140) &&
       (_Init_thread_header(&DAT_146b0a140), DAT_146b0a140 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR32bppMode");
      lVar6 = lVar7;
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
      }
      DAT_146b0a138 = lVar6;
      _Init_thread_footer(&DAT_146b0a140);
    }
    lVar6 = DAT_146b0a138;
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
      lVar7 = 4;
    }
    uVar1 = *(uint *)(lVar7 + lVar6);
    uVar4 = (ulonglong)uVar1;
    if ((uVar1 == 1) ||
       ((uVar4 = (ulonglong)(uVar1 - 2), 1 < uVar1 - 2 &&
        ((DAT_146ab62f1 == '\0' || (DAT_146ab62dd == '\0')))))) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142753c20 FUN_142753c20 body=239 status=ok
// SIG undefined FUN_142753c20(void)

void FUN_142753c20(longlong param_1,longlong param_2,float param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((0.99607843 < param_3) || (*(int *)(param_1 + 0x750) == 0)) {
    FUN_14275bc80();
    return;
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x750) != 0) {
    uVar5 = uVar4;
    lVar3 = *(longlong *)(param_1 + 0x748);
    if (*(longlong *)(param_1 + 0x748) == 0) {
      lVar3 = param_1 + 0x6c8;
    }
    do {
      uVar6 = uVar5 + 1;
      *(float *)(lVar3 + (longlong)(int)uVar5 * 0x10) =
           (1.0 - param_3) * *(float *)(lVar3 + (longlong)(int)uVar5 * 0x10);
      uVar1 = *(uint *)(param_1 + 0x750);
      uVar5 = uVar6;
    } while (uVar6 < uVar1);
    if (uVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x748);
      if (*(longlong *)(param_1 + 0x748) == 0) {
        lVar3 = param_1 + 0x6c8;
      }
      do {
        lVar2 = (longlong)(int)uVar4;
        if (*(longlong *)(lVar3 + 8 + lVar2 * 0x10) == param_2) {
          if (uVar4 != 0xffffffff) {
            *(float *)(lVar3 + lVar2 * 0x10) = param_3 + *(float *)(lVar3 + lVar2 * 0x10);
            return;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  FUN_142759ff0(param_1,param_2);
  return;
}



// FUNCTION 142753d10 Modify body=124 status=ok
// SIG undefined Modify(void)

ulonglong USelection::Modify(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar1 = lVar4 + (longlong)*(int *)(param_1 + 0x30) * 8;
  while( true ) {
    if (lVar4 == lVar1) {
      uVar3 = FUN_14175d020(param_1,param_2);
      return uVar3;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if ((lVar2 != 0) &&
       (uVar3 = UObjectBaseUtility::GetOutermost(lVar2), (*(uint *)(uVar3 + 0x50) & 0x300010) != 0))
    break;
    lVar4 = lVar4 + 8;
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142753db0 ModifyCompilationEnvironment body=98 status=ok
// SIG undefined ModifyCompilationEnvironment(void)

void TScreenVSForGS<0>::ModifyCompilationEnvironment(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FShaderCompilerDefinitions::SetDefine(param_2 + 0x200,L"USING_LAYERS",0);
  iVar1 = *(int *)(param_2 + 0xb8);
  *(int *)(param_2 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_2 + 0xbc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 0xb0,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0xb0) + (longlong)iVar1 * 4) = 0xd;
  return;
}



// FUNCTION 142753e20 FUN_142753e20 body=14342 status=ok
// SIG undefined FUN_142753e20(void)

void FUN_142753e20(longlong param_1,uint *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong local_78;
  
  if (0.0 < param_3) {
    lVar4 = param_1 + 0x1240;
    uVar7 = *param_2;
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(param_1 + 0x125c) =
           ((float)param_2[7] - *(float *)(param_1 + 0x125c)) * param_3 +
           *(float *)(param_1 + 0x125c);
      uVar7 = *param_2;
    }
    if ((uVar7 & 2) != 0) {
      *(float *)(param_1 + 0x1260) =
           ((float)param_2[8] - *(float *)(param_1 + 0x1260)) * param_3 +
           *(float *)(param_1 + 0x1260);
      uVar7 = *param_2;
    }
    if ((uVar7 & 4) != 0) {
      local_88 = ((float)param_2[0xc] - *(float *)(param_1 + 0x1270)) * param_3 +
                 *(float *)(param_1 + 0x1270);
      fStack_84 = ((float)param_2[0xd] - *(float *)(param_1 + 0x1274)) * param_3 +
                  *(float *)(param_1 + 0x1274);
      fStack_80 = ((float)param_2[0xe] - *(float *)(param_1 + 0x1278)) * param_3 +
                  *(float *)(param_1 + 0x1278);
      fStack_7c = ((float)param_2[0xf] - *(float *)(param_1 + 0x127c)) * param_3 +
                  *(float *)(param_1 + 0x127c);
      *(float *)(param_1 + 0x1270) = local_88;
      *(float *)(param_1 + 0x1274) = fStack_84;
      *(float *)(param_1 + 0x1278) = fStack_80;
      *(float *)(param_1 + 0x127c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 & 8) != 0) {
      local_88 = ((float)param_2[0x10] - *(float *)(param_1 + 0x1280)) * param_3 +
                 *(float *)(param_1 + 0x1280);
      fStack_84 = ((float)param_2[0x11] - *(float *)(param_1 + 0x1284)) * param_3 +
                  *(float *)(param_1 + 0x1284);
      fStack_80 = ((float)param_2[0x12] - *(float *)(param_1 + 0x1288)) * param_3 +
                  *(float *)(param_1 + 0x1288);
      fStack_7c = ((float)param_2[0x13] - *(float *)(param_1 + 0x128c)) * param_3 +
                  *(float *)(param_1 + 0x128c);
      *(float *)(param_1 + 0x1280) = local_88;
      *(float *)(param_1 + 0x1284) = fStack_84;
      *(float *)(param_1 + 0x1288) = fStack_80;
      *(float *)(param_1 + 0x128c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 & 0x10) != 0) {
      local_88 = ((float)param_2[0x14] - *(float *)(param_1 + 0x1290)) * param_3 +
                 *(float *)(param_1 + 0x1290);
      fStack_84 = ((float)param_2[0x15] - *(float *)(param_1 + 0x1294)) * param_3 +
                  *(float *)(param_1 + 0x1294);
      fStack_80 = ((float)param_2[0x16] - *(float *)(param_1 + 0x1298)) * param_3 +
                  *(float *)(param_1 + 0x1298);
      fStack_7c = ((float)param_2[0x17] - *(float *)(param_1 + 0x129c)) * param_3 +
                  *(float *)(param_1 + 0x129c);
      *(float *)(param_1 + 0x1290) = local_88;
      *(float *)(param_1 + 0x1294) = fStack_84;
      *(float *)(param_1 + 0x1298) = fStack_80;
      *(float *)(param_1 + 0x129c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 & 0x20) != 0) {
      local_88 = ((float)param_2[0x18] - *(float *)(param_1 + 0x12a0)) * param_3 +
                 *(float *)(param_1 + 0x12a0);
      fStack_84 = ((float)param_2[0x19] - *(float *)(param_1 + 0x12a4)) * param_3 +
                  *(float *)(param_1 + 0x12a4);
      fStack_80 = ((float)param_2[0x1a] - *(float *)(param_1 + 0x12a8)) * param_3 +
                  *(float *)(param_1 + 0x12a8);
      fStack_7c = ((float)param_2[0x1b] - *(float *)(param_1 + 0x12ac)) * param_3 +
                  *(float *)(param_1 + 0x12ac);
      *(float *)(param_1 + 0x12a0) = local_88;
      *(float *)(param_1 + 0x12a4) = fStack_84;
      *(float *)(param_1 + 0x12a8) = fStack_80;
      *(float *)(param_1 + 0x12ac) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 & 0x40) != 0) {
      local_88 = ((float)param_2[0x1c] - *(float *)(param_1 + 0x12b0)) * param_3 +
                 *(float *)(param_1 + 0x12b0);
      fStack_84 = ((float)param_2[0x1d] - *(float *)(param_1 + 0x12b4)) * param_3 +
                  *(float *)(param_1 + 0x12b4);
      fStack_80 = ((float)param_2[0x1e] - *(float *)(param_1 + 0x12b8)) * param_3 +
                  *(float *)(param_1 + 0x12b8);
      fStack_7c = ((float)param_2[0x1f] - *(float *)(param_1 + 0x12bc)) * param_3 +
                  *(float *)(param_1 + 0x12bc);
      *(float *)(param_1 + 0x12b0) = local_88;
      *(float *)(param_1 + 0x12b4) = fStack_84;
      *(float *)(param_1 + 0x12b8) = fStack_80;
      *(float *)(param_1 + 0x12bc) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((char)uVar7 < '\0') {
      local_88 = ((float)param_2[0x20] - *(float *)(param_1 + 0x12c0)) * param_3 +
                 *(float *)(param_1 + 0x12c0);
      fStack_84 = ((float)param_2[0x21] - *(float *)(param_1 + 0x12c4)) * param_3 +
                  *(float *)(param_1 + 0x12c4);
      fStack_80 = ((float)param_2[0x22] - *(float *)(param_1 + 0x12c8)) * param_3 +
                  *(float *)(param_1 + 0x12c8);
      fStack_7c = ((float)param_2[0x23] - *(float *)(param_1 + 0x12cc)) * param_3 +
                  *(float *)(param_1 + 0x12cc);
      *(float *)(param_1 + 0x12c0) = local_88;
      *(float *)(param_1 + 0x12c4) = fStack_84;
      *(float *)(param_1 + 0x12c8) = fStack_80;
      *(float *)(param_1 + 0x12cc) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 8 & 1) != 0) {
      local_88 = ((float)param_2[0x24] - *(float *)(param_1 + 0x12d0)) * param_3 +
                 *(float *)(param_1 + 0x12d0);
      fStack_84 = ((float)param_2[0x25] - *(float *)(param_1 + 0x12d4)) * param_3 +
                  *(float *)(param_1 + 0x12d4);
      fStack_80 = ((float)param_2[0x26] - *(float *)(param_1 + 0x12d8)) * param_3 +
                  *(float *)(param_1 + 0x12d8);
      fStack_7c = ((float)param_2[0x27] - *(float *)(param_1 + 0x12dc)) * param_3 +
                  *(float *)(param_1 + 0x12dc);
      *(float *)(param_1 + 0x12d0) = local_88;
      *(float *)(param_1 + 0x12d4) = fStack_84;
      *(float *)(param_1 + 0x12d8) = fStack_80;
      *(float *)(param_1 + 0x12dc) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 9 & 1) != 0) {
      local_88 = ((float)param_2[0x28] - *(float *)(param_1 + 0x12e0)) * param_3 +
                 *(float *)(param_1 + 0x12e0);
      fStack_84 = ((float)param_2[0x29] - *(float *)(param_1 + 0x12e4)) * param_3 +
                  *(float *)(param_1 + 0x12e4);
      fStack_80 = ((float)param_2[0x2a] - *(float *)(param_1 + 0x12e8)) * param_3 +
                  *(float *)(param_1 + 0x12e8);
      fStack_7c = ((float)param_2[0x2b] - *(float *)(param_1 + 0x12ec)) * param_3 +
                  *(float *)(param_1 + 0x12ec);
      *(float *)(param_1 + 0x12e0) = local_88;
      *(float *)(param_1 + 0x12e4) = fStack_84;
      *(float *)(param_1 + 0x12e8) = fStack_80;
      *(float *)(param_1 + 0x12ec) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 10 & 1) != 0) {
      local_88 = ((float)param_2[0x2c] - *(float *)(param_1 + 0x12f0)) * param_3 +
                 *(float *)(param_1 + 0x12f0);
      fStack_84 = ((float)param_2[0x2d] - *(float *)(param_1 + 0x12f4)) * param_3 +
                  *(float *)(param_1 + 0x12f4);
      fStack_80 = ((float)param_2[0x2e] - *(float *)(param_1 + 0x12f8)) * param_3 +
                  *(float *)(param_1 + 0x12f8);
      fStack_7c = ((float)param_2[0x2f] - *(float *)(param_1 + 0x12fc)) * param_3 +
                  *(float *)(param_1 + 0x12fc);
      *(float *)(param_1 + 0x12f0) = local_88;
      *(float *)(param_1 + 0x12f4) = fStack_84;
      *(float *)(param_1 + 0x12f8) = fStack_80;
      *(float *)(param_1 + 0x12fc) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      local_88 = ((float)param_2[0x30] - *(float *)(param_1 + 0x1300)) * param_3 +
                 *(float *)(param_1 + 0x1300);
      fStack_84 = ((float)param_2[0x31] - *(float *)(param_1 + 0x1304)) * param_3 +
                  *(float *)(param_1 + 0x1304);
      fStack_80 = ((float)param_2[0x32] - *(float *)(param_1 + 0x1308)) * param_3 +
                  *(float *)(param_1 + 0x1308);
      fStack_7c = ((float)param_2[0x33] - *(float *)(param_1 + 0x130c)) * param_3 +
                  *(float *)(param_1 + 0x130c);
      *(float *)(param_1 + 0x1300) = local_88;
      *(float *)(param_1 + 0x1304) = fStack_84;
      *(float *)(param_1 + 0x1308) = fStack_80;
      *(float *)(param_1 + 0x130c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0xc & 1) != 0) {
      local_88 = ((float)param_2[0x38] - *(float *)(param_1 + 0x1320)) * param_3 +
                 *(float *)(param_1 + 0x1320);
      fStack_84 = ((float)param_2[0x39] - *(float *)(param_1 + 0x1324)) * param_3 +
                  *(float *)(param_1 + 0x1324);
      fStack_80 = ((float)param_2[0x3a] - *(float *)(param_1 + 0x1328)) * param_3 +
                  *(float *)(param_1 + 0x1328);
      fStack_7c = ((float)param_2[0x3b] - *(float *)(param_1 + 0x132c)) * param_3 +
                  *(float *)(param_1 + 0x132c);
      *(float *)(param_1 + 0x1320) = local_88;
      *(float *)(param_1 + 0x1324) = fStack_84;
      *(float *)(param_1 + 0x1328) = fStack_80;
      *(float *)(param_1 + 0x132c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      local_88 = ((float)param_2[0x3c] - *(float *)(param_1 + 0x1330)) * param_3 +
                 *(float *)(param_1 + 0x1330);
      fStack_84 = ((float)param_2[0x3d] - *(float *)(param_1 + 0x1334)) * param_3 +
                  *(float *)(param_1 + 0x1334);
      fStack_80 = ((float)param_2[0x3e] - *(float *)(param_1 + 0x1338)) * param_3 +
                  *(float *)(param_1 + 0x1338);
      fStack_7c = ((float)param_2[0x3f] - *(float *)(param_1 + 0x133c)) * param_3 +
                  *(float *)(param_1 + 0x133c);
      *(float *)(param_1 + 0x1330) = local_88;
      *(float *)(param_1 + 0x1334) = fStack_84;
      *(float *)(param_1 + 0x1338) = fStack_80;
      *(float *)(param_1 + 0x133c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      local_88 = ((float)param_2[0x40] - *(float *)(param_1 + 0x1340)) * param_3 +
                 *(float *)(param_1 + 0x1340);
      fStack_84 = ((float)param_2[0x41] - *(float *)(param_1 + 0x1344)) * param_3 +
                  *(float *)(param_1 + 0x1344);
      fStack_80 = ((float)param_2[0x42] - *(float *)(param_1 + 0x1348)) * param_3 +
                  *(float *)(param_1 + 0x1348);
      fStack_7c = ((float)param_2[0x43] - *(float *)(param_1 + 0x134c)) * param_3 +
                  *(float *)(param_1 + 0x134c);
      *(float *)(param_1 + 0x1340) = local_88;
      *(float *)(param_1 + 0x1344) = fStack_84;
      *(float *)(param_1 + 0x1348) = fStack_80;
      *(float *)(param_1 + 0x134c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0xf & 1) != 0) {
      local_88 = ((float)param_2[0x44] - *(float *)(param_1 + 0x1350)) * param_3 +
                 *(float *)(param_1 + 0x1350);
      fStack_84 = ((float)param_2[0x45] - *(float *)(param_1 + 0x1354)) * param_3 +
                  *(float *)(param_1 + 0x1354);
      fStack_80 = ((float)param_2[0x46] - *(float *)(param_1 + 0x1358)) * param_3 +
                  *(float *)(param_1 + 0x1358);
      fStack_7c = ((float)param_2[0x47] - *(float *)(param_1 + 0x135c)) * param_3 +
                  *(float *)(param_1 + 0x135c);
      *(float *)(param_1 + 0x1350) = local_88;
      *(float *)(param_1 + 0x1354) = fStack_84;
      *(float *)(param_1 + 0x1358) = fStack_80;
      *(float *)(param_1 + 0x135c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x10 & 1) != 0) {
      local_88 = ((float)param_2[0x48] - *(float *)(param_1 + 0x1360)) * param_3 +
                 *(float *)(param_1 + 0x1360);
      fStack_84 = ((float)param_2[0x49] - *(float *)(param_1 + 0x1364)) * param_3 +
                  *(float *)(param_1 + 0x1364);
      fStack_80 = ((float)param_2[0x4a] - *(float *)(param_1 + 0x1368)) * param_3 +
                  *(float *)(param_1 + 0x1368);
      fStack_7c = ((float)param_2[0x4b] - *(float *)(param_1 + 0x136c)) * param_3 +
                  *(float *)(param_1 + 0x136c);
      *(float *)(param_1 + 0x1360) = local_88;
      *(float *)(param_1 + 0x1364) = fStack_84;
      *(float *)(param_1 + 0x1368) = fStack_80;
      *(float *)(param_1 + 0x136c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x11 & 1) != 0) {
      local_88 = ((float)param_2[0x4c] - *(float *)(param_1 + 0x1370)) * param_3 +
                 *(float *)(param_1 + 0x1370);
      fStack_84 = ((float)param_2[0x4d] - *(float *)(param_1 + 0x1374)) * param_3 +
                  *(float *)(param_1 + 0x1374);
      fStack_80 = ((float)param_2[0x4e] - *(float *)(param_1 + 0x1378)) * param_3 +
                  *(float *)(param_1 + 0x1378);
      fStack_7c = ((float)param_2[0x4f] - *(float *)(param_1 + 0x137c)) * param_3 +
                  *(float *)(param_1 + 0x137c);
      *(float *)(param_1 + 0x1370) = local_88;
      *(float *)(param_1 + 0x1374) = fStack_84;
      *(float *)(param_1 + 0x1378) = fStack_80;
      *(float *)(param_1 + 0x137c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x12 & 1) != 0) {
      local_88 = ((float)param_2[0x50] - *(float *)(param_1 + 0x1380)) * param_3 +
                 *(float *)(param_1 + 0x1380);
      fStack_84 = ((float)param_2[0x51] - *(float *)(param_1 + 0x1384)) * param_3 +
                  *(float *)(param_1 + 0x1384);
      fStack_80 = ((float)param_2[0x52] - *(float *)(param_1 + 5000)) * param_3 +
                  *(float *)(param_1 + 5000);
      fStack_7c = ((float)param_2[0x53] - *(float *)(param_1 + 0x138c)) * param_3 +
                  *(float *)(param_1 + 0x138c);
      *(float *)(param_1 + 0x1380) = local_88;
      *(float *)(param_1 + 0x1384) = fStack_84;
      *(float *)(param_1 + 5000) = fStack_80;
      *(float *)(param_1 + 0x138c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      local_88 = ((float)param_2[0x54] - *(float *)(param_1 + 0x1390)) * param_3 +
                 *(float *)(param_1 + 0x1390);
      fStack_84 = ((float)param_2[0x55] - *(float *)(param_1 + 0x1394)) * param_3 +
                  *(float *)(param_1 + 0x1394);
      fStack_80 = ((float)param_2[0x56] - *(float *)(param_1 + 0x1398)) * param_3 +
                  *(float *)(param_1 + 0x1398);
      fStack_7c = ((float)param_2[0x57] - *(float *)(param_1 + 0x139c)) * param_3 +
                  *(float *)(param_1 + 0x139c);
      *(float *)(param_1 + 0x1390) = local_88;
      *(float *)(param_1 + 0x1394) = fStack_84;
      *(float *)(param_1 + 0x1398) = fStack_80;
      *(float *)(param_1 + 0x139c) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x14 & 1) != 0) {
      local_88 = ((float)param_2[0x58] - *(float *)(param_1 + 0x13a0)) * param_3 +
                 *(float *)(param_1 + 0x13a0);
      fStack_84 = ((float)param_2[0x59] - *(float *)(param_1 + 0x13a4)) * param_3 +
                  *(float *)(param_1 + 0x13a4);
      fStack_80 = ((float)param_2[0x5a] - *(float *)(param_1 + 0x13a8)) * param_3 +
                  *(float *)(param_1 + 0x13a8);
      fStack_7c = ((float)param_2[0x5b] - *(float *)(param_1 + 0x13ac)) * param_3 +
                  *(float *)(param_1 + 0x13ac);
      *(float *)(param_1 + 0x13a0) = local_88;
      *(float *)(param_1 + 0x13a4) = fStack_84;
      *(float *)(param_1 + 0x13a8) = fStack_80;
      *(float *)(param_1 + 0x13ac) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x15 & 1) != 0) {
      local_88 = ((float)param_2[0x5c] - *(float *)(param_1 + 0x13b0)) * param_3 +
                 *(float *)(param_1 + 0x13b0);
      fStack_84 = ((float)param_2[0x5d] - *(float *)(param_1 + 0x13b4)) * param_3 +
                  *(float *)(param_1 + 0x13b4);
      fStack_80 = ((float)param_2[0x5e] - *(float *)(param_1 + 0x13b8)) * param_3 +
                  *(float *)(param_1 + 0x13b8);
      fStack_7c = ((float)param_2[0x5f] - *(float *)(param_1 + 0x13bc)) * param_3 +
                  *(float *)(param_1 + 0x13bc);
      *(float *)(param_1 + 0x13b0) = local_88;
      *(float *)(param_1 + 0x13b4) = fStack_84;
      *(float *)(param_1 + 0x13b8) = fStack_80;
      *(float *)(param_1 + 0x13bc) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      *(float *)(param_1 + 0x1310) =
           ((float)param_2[0x34] - *(float *)(param_1 + 0x1310)) * param_3 +
           *(float *)(param_1 + 0x1310);
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      *(float *)(param_1 + 0x13c0) =
           ((float)param_2[0x60] - *(float *)(param_1 + 0x13c0)) * param_3 +
           *(float *)(param_1 + 0x13c0);
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x18 & 1) != 0) {
      *(float *)(param_1 + 0x13c4) =
           ((float)param_2[0x61] - *(float *)(param_1 + 0x13c4)) * param_3 +
           *(float *)(param_1 + 0x13c4);
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      *(float *)(param_1 + 0x13c8) =
           ((float)param_2[0x62] - *(float *)(param_1 + 0x13c8)) * param_3 +
           *(float *)(param_1 + 0x13c8);
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x1a & 1) != 0) {
      local_88 = ((float)param_2[0x68] - *(float *)(param_1 + 0x13e0)) * param_3 +
                 *(float *)(param_1 + 0x13e0);
      fStack_84 = ((float)param_2[0x69] - *(float *)(param_1 + 0x13e4)) * param_3 +
                  *(float *)(param_1 + 0x13e4);
      fStack_80 = ((float)param_2[0x6a] - *(float *)(param_1 + 0x13e8)) * param_3 +
                  *(float *)(param_1 + 0x13e8);
      fStack_7c = ((float)param_2[0x6b] - *(float *)(param_1 + 0x13ec)) * param_3 +
                  *(float *)(param_1 + 0x13ec);
      *(float *)(param_1 + 0x13e0) = local_88;
      *(float *)(param_1 + 0x13e4) = fStack_84;
      *(float *)(param_1 + 0x13e8) = fStack_80;
      *(float *)(param_1 + 0x13ec) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(float *)(param_1 + 0x1408) =
           ((float)param_2[0x72] - *(float *)(param_1 + 0x1408)) * param_3 +
           *(float *)(param_1 + 0x1408);
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      local_88 = ((float)param_2[0x73] - *(float *)(param_1 + 0x140c)) * param_3 +
                 *(float *)(param_1 + 0x140c);
      fStack_84 = ((float)param_2[0x74] - *(float *)(param_1 + 0x1410)) * param_3 +
                  *(float *)(param_1 + 0x1410);
      fStack_80 = ((float)param_2[0x75] - *(float *)(param_1 + 0x1414)) * param_3 +
                  *(float *)(param_1 + 0x1414);
      fStack_7c = ((float)param_2[0x76] - *(float *)(param_1 + 0x1418)) * param_3 +
                  *(float *)(param_1 + 0x1418);
      *(float *)(param_1 + 0x140c) = local_88;
      *(float *)(param_1 + 0x1410) = fStack_84;
      *(float *)(param_1 + 0x1414) = fStack_80;
      *(float *)(param_1 + 0x1418) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x1d & 1) != 0) {
      local_88 = ((float)param_2[0x77] - *(float *)(param_1 + 0x141c)) * param_3 +
                 *(float *)(param_1 + 0x141c);
      fStack_84 = ((float)param_2[0x78] - *(float *)(param_1 + 0x1420)) * param_3 +
                  *(float *)(param_1 + 0x1420);
      fStack_80 = ((float)param_2[0x79] - *(float *)(param_1 + 0x1424)) * param_3 +
                  *(float *)(param_1 + 0x1424);
      fStack_7c = ((float)param_2[0x7a] - *(float *)(param_1 + 0x1428)) * param_3 +
                  *(float *)(param_1 + 0x1428);
      *(float *)(param_1 + 0x141c) = local_88;
      *(float *)(param_1 + 0x1420) = fStack_84;
      *(float *)(param_1 + 0x1424) = fStack_80;
      *(float *)(param_1 + 0x1428) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((uVar7 >> 0x1e & 1) != 0) {
      local_88 = ((float)param_2[0x7b] - *(float *)(param_1 + 0x142c)) * param_3 +
                 *(float *)(param_1 + 0x142c);
      fStack_84 = ((float)param_2[0x7c] - *(float *)(param_1 + 0x1430)) * param_3 +
                  *(float *)(param_1 + 0x1430);
      fStack_80 = ((float)param_2[0x7d] - *(float *)(param_1 + 0x1434)) * param_3 +
                  *(float *)(param_1 + 0x1434);
      fStack_7c = ((float)param_2[0x7e] - *(float *)(param_1 + 0x1438)) * param_3 +
                  *(float *)(param_1 + 0x1438);
      *(float *)(param_1 + 0x142c) = local_88;
      *(float *)(param_1 + 0x1430) = fStack_84;
      *(float *)(param_1 + 0x1434) = fStack_80;
      *(float *)(param_1 + 0x1438) = fStack_7c;
      uVar7 = *param_2;
    }
    if ((int)uVar7 < 0) {
      *(float *)(param_1 + 0x143c) =
           ((float)param_2[0x7f] - *(float *)(param_1 + 0x143c)) * param_3 +
           *(float *)(param_1 + 0x143c);
    }
    uVar7 = param_2[1];
    if ((uVar7 & 1) != 0) {
      *(float *)(param_1 + 0x1448) =
           ((float)param_2[0x82] - *(float *)(param_1 + 0x1448)) * param_3 +
           *(float *)(param_1 + 0x1448);
      uVar7 = param_2[1];
    }
    if ((uVar7 & 2) != 0) {
      *(float *)(param_1 + 0x1444) =
           ((float)param_2[0x81] - *(float *)(param_1 + 0x1444)) * param_3 +
           *(float *)(param_1 + 0x1444);
      uVar7 = param_2[1];
    }
    if ((uVar7 & 4) != 0) {
      *(float *)(param_1 + 0x1440) =
           ((float)param_2[0x80] - *(float *)(param_1 + 0x1440)) * param_3 +
           *(float *)(param_1 + 0x1440);
      uVar7 = param_2[1];
    }
    if ((uVar7 & 8) != 0) {
      local_88 = ((float)param_2[0x6c] - *(float *)(param_1 + 0x13f0)) * param_3 +
                 *(float *)(param_1 + 0x13f0);
      fStack_84 = ((float)param_2[0x6d] - *(float *)(param_1 + 0x13f4)) * param_3 +
                  *(float *)(param_1 + 0x13f4);
      fStack_80 = ((float)param_2[0x6e] - *(float *)(param_1 + 0x13f8)) * param_3 +
                  *(float *)(param_1 + 0x13f8);
      fStack_7c = ((float)param_2[0x6f] - *(float *)(param_1 + 0x13fc)) * param_3 +
                  *(float *)(param_1 + 0x13fc);
      *(float *)(param_1 + 0x13f0) = local_88;
      *(float *)(param_1 + 0x13f4) = fStack_84;
      *(float *)(param_1 + 0x13f8) = fStack_80;
      *(float *)(param_1 + 0x13fc) = fStack_7c;
      uVar7 = param_2[1];
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(param_1 + 0x1400) =
           ((float)param_2[0x70] - *(float *)(param_1 + 0x1400)) * param_3 +
           *(float *)(param_1 + 0x1400);
      uVar7 = param_2[1];
    }
    if ((uVar7 & 0x20) != 0) {
      *(float *)(param_1 + 0x1404) =
           ((float)param_2[0x71] - *(float *)(param_1 + 0x1404)) * param_3 +
           *(float *)(param_1 + 0x1404);
      uVar7 = param_2[1];
    }
    if ((uVar7 & 0x40) != 0) {
      *(float *)(param_1 + 0x13cc) =
           ((float)param_2[99] - *(float *)(param_1 + 0x13cc)) * param_3 +
           *(float *)(param_1 + 0x13cc);
      uVar7 = param_2[1];
    }
    if ((char)uVar7 < '\0') {
      *(float *)(param_1 + 0x13d0) =
           ((float)param_2[100] - *(float *)(param_1 + 0x13d0)) * param_3 +
           *(float *)(param_1 + 0x13d0);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 8 & 1) != 0) {
      *(float *)(param_1 + 0x13d4) =
           ((float)param_2[0x65] - *(float *)(param_1 + 0x13d4)) * param_3 +
           *(float *)(param_1 + 0x13d4);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 9 & 1) != 0) {
      *(float *)(param_1 + 0x13d8) =
           ((float)param_2[0x66] - *(float *)(param_1 + 0x13d8)) * param_3 +
           *(float *)(param_1 + 0x13d8);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 10 & 1) != 0) {
      *(float *)(param_1 + 0x13dc) =
           ((float)param_2[0x67] - *(float *)(param_1 + 0x13dc)) * param_3 +
           *(float *)(param_1 + 0x13dc);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      local_88 = ((float)param_2[0x83] - *(float *)(param_1 + 0x144c)) * param_3 +
                 *(float *)(param_1 + 0x144c);
      fStack_84 = ((float)param_2[0x84] - *(float *)(param_1 + 0x1450)) * param_3 +
                  *(float *)(param_1 + 0x1450);
      fStack_80 = ((float)param_2[0x85] - *(float *)(param_1 + 0x1454)) * param_3 +
                  *(float *)(param_1 + 0x1454);
      fStack_7c = ((float)param_2[0x86] - *(float *)(param_1 + 0x1458)) * param_3 +
                  *(float *)(param_1 + 0x1458);
      *(float *)(param_1 + 0x144c) = local_88;
      *(float *)(param_1 + 0x1450) = fStack_84;
      *(float *)(param_1 + 0x1454) = fStack_80;
      *(float *)(param_1 + 0x1458) = fStack_7c;
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0xc & 1) != 0) {
      *(float *)(param_1 + 0x145c) =
           ((float)param_2[0x87] - *(float *)(param_1 + 0x145c)) * param_3 +
           *(float *)(param_1 + 0x145c);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      *(float *)(param_1 + 0x1460) =
           ((float)param_2[0x88] - *(float *)(param_1 + 0x1460)) * param_3 +
           *(float *)(param_1 + 0x1460);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x12 & 1) != 0) {
      *(float *)(param_1 + 0x1468) =
           ((float)param_2[0x8a] - *(float *)(param_1 + 0x1468)) * param_3 +
           *(float *)(param_1 + 0x1468);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      *(float *)(param_1 + 0x146c) =
           ((float)param_2[0x8b] - *(float *)(param_1 + 0x146c)) * param_3 +
           *(float *)(param_1 + 0x146c);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x14 & 1) != 0) {
      local_88 = ((float)param_2[0x93] - *(float *)(param_1 + 0x148c)) * param_3 +
                 *(float *)(param_1 + 0x148c);
      fStack_84 = ((float)param_2[0x94] - *(float *)(param_1 + 0x1490)) * param_3 +
                  *(float *)(param_1 + 0x1490);
      fStack_80 = ((float)param_2[0x95] - *(float *)(param_1 + 0x1494)) * param_3 +
                  *(float *)(param_1 + 0x1494);
      fStack_7c = ((float)param_2[0x96] - *(float *)(param_1 + 0x1498)) * param_3 +
                  *(float *)(param_1 + 0x1498);
      *(float *)(param_1 + 0x148c) = local_88;
      *(float *)(param_1 + 0x1490) = fStack_84;
      *(float *)(param_1 + 0x1494) = fStack_80;
      *(float *)(param_1 + 0x1498) = fStack_7c;
    }
    if ((param_2[2] & 1) != 0) {
      *(float *)(param_1 + 0x1470) =
           ((float)param_2[0x8c] - *(float *)(param_1 + 0x1470)) * param_3 +
           *(float *)(param_1 + 0x1470);
    }
    uVar7 = param_2[1];
    if ((uVar7 >> 0x15 & 1) != 0) {
      *(float *)(param_1 + 0x1474) =
           ((float)param_2[0x8d] - *(float *)(param_1 + 0x1474)) * param_3 +
           *(float *)(param_1 + 0x1474);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      local_88 = ((float)param_2[0x97] - *(float *)(param_1 + 0x149c)) * param_3 +
                 *(float *)(param_1 + 0x149c);
      fStack_84 = ((float)param_2[0x98] - *(float *)(param_1 + 0x14a0)) * param_3 +
                  *(float *)(param_1 + 0x14a0);
      fStack_80 = ((float)param_2[0x99] - *(float *)(param_1 + 0x14a4)) * param_3 +
                  *(float *)(param_1 + 0x14a4);
      fStack_7c = ((float)param_2[0x9a] - *(float *)(param_1 + 0x14a8)) * param_3 +
                  *(float *)(param_1 + 0x14a8);
      *(float *)(param_1 + 0x149c) = local_88;
      *(float *)(param_1 + 0x14a0) = fStack_84;
      *(float *)(param_1 + 0x14a4) = fStack_80;
      *(float *)(param_1 + 0x14a8) = fStack_7c;
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      *(float *)(param_1 + 0x1478) =
           ((float)param_2[0x8e] - *(float *)(param_1 + 0x1478)) * param_3 +
           *(float *)(param_1 + 0x1478);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x18 & 1) != 0) {
      local_88 = ((float)param_2[0x9b] - *(float *)(param_1 + 0x14ac)) * param_3 +
                 *(float *)(param_1 + 0x14ac);
      fStack_84 = ((float)param_2[0x9c] - *(float *)(param_1 + 0x14b0)) * param_3 +
                  *(float *)(param_1 + 0x14b0);
      fStack_80 = ((float)param_2[0x9d] - *(float *)(param_1 + 0x14b4)) * param_3 +
                  *(float *)(param_1 + 0x14b4);
      fStack_7c = ((float)param_2[0x9e] - *(float *)(param_1 + 0x14b8)) * param_3 +
                  *(float *)(param_1 + 0x14b8);
      *(float *)(param_1 + 0x14ac) = local_88;
      *(float *)(param_1 + 0x14b0) = fStack_84;
      *(float *)(param_1 + 0x14b4) = fStack_80;
      *(float *)(param_1 + 0x14b8) = fStack_7c;
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      *(float *)(param_1 + 0x147c) =
           ((float)param_2[0x8f] - *(float *)(param_1 + 0x147c)) * param_3 +
           *(float *)(param_1 + 0x147c);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x1a & 1) != 0) {
      local_88 = ((float)param_2[0x9f] - *(float *)(param_1 + 0x14bc)) * param_3 +
                 *(float *)(param_1 + 0x14bc);
      fStack_84 = ((float)param_2[0xa0] - *(float *)(param_1 + 0x14c0)) * param_3 +
                  *(float *)(param_1 + 0x14c0);
      fStack_80 = ((float)param_2[0xa1] - *(float *)(param_1 + 0x14c4)) * param_3 +
                  *(float *)(param_1 + 0x14c4);
      fStack_7c = ((float)param_2[0xa2] - *(float *)(param_1 + 0x14c8)) * param_3 +
                  *(float *)(param_1 + 0x14c8);
      *(float *)(param_1 + 0x14bc) = local_88;
      *(float *)(param_1 + 0x14c0) = fStack_84;
      *(float *)(param_1 + 0x14c4) = fStack_80;
      *(float *)(param_1 + 0x14c8) = fStack_7c;
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(float *)(param_1 + 0x1480) =
           ((float)param_2[0x90] - *(float *)(param_1 + 0x1480)) * param_3 +
           *(float *)(param_1 + 0x1480);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      local_88 = ((float)param_2[0xa3] - *(float *)(param_1 + 0x14cc)) * param_3 +
                 *(float *)(param_1 + 0x14cc);
      fStack_84 = ((float)param_2[0xa4] - *(float *)(param_1 + 0x14d0)) * param_3 +
                  *(float *)(param_1 + 0x14d0);
      fStack_80 = ((float)param_2[0xa5] - *(float *)(param_1 + 0x14d4)) * param_3 +
                  *(float *)(param_1 + 0x14d4);
      fStack_7c = ((float)param_2[0xa6] - *(float *)(param_1 + 0x14d8)) * param_3 +
                  *(float *)(param_1 + 0x14d8);
      *(float *)(param_1 + 0x14cc) = local_88;
      *(float *)(param_1 + 0x14d0) = fStack_84;
      *(float *)(param_1 + 0x14d4) = fStack_80;
      *(float *)(param_1 + 0x14d8) = fStack_7c;
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x1d & 1) != 0) {
      *(float *)(param_1 + 0x1484) =
           ((float)param_2[0x91] - *(float *)(param_1 + 0x1484)) * param_3 +
           *(float *)(param_1 + 0x1484);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0x1e & 1) != 0) {
      local_88 = ((float)param_2[0xa7] - *(float *)(param_1 + 0x14dc)) * param_3 +
                 *(float *)(param_1 + 0x14dc);
      fStack_84 = ((float)param_2[0xa8] - *(float *)(param_1 + 0x14e0)) * param_3 +
                  *(float *)(param_1 + 0x14e0);
      fStack_80 = ((float)param_2[0xa9] - *(float *)(param_1 + 0x14e4)) * param_3 +
                  *(float *)(param_1 + 0x14e4);
      fStack_7c = ((float)param_2[0xaa] - *(float *)(param_1 + 0x14e8)) * param_3 +
                  *(float *)(param_1 + 0x14e8);
      *(float *)(param_1 + 0x14dc) = local_88;
      *(float *)(param_1 + 0x14e0) = fStack_84;
      *(float *)(param_1 + 0x14e4) = fStack_80;
      *(float *)(param_1 + 0x14e8) = fStack_7c;
      uVar7 = param_2[1];
    }
    if ((int)uVar7 < 0) {
      *(float *)(param_1 + 0x1488) =
           ((float)param_2[0x92] - *(float *)(param_1 + 0x1488)) * param_3 +
           *(float *)(param_1 + 0x1488);
    }
    uVar7 = param_2[2];
    if ((uVar7 >> 9 & 1) != 0) {
      *(float *)(param_1 + 0x1528) =
           ((float)param_2[0xba] - *(float *)(param_1 + 0x1528)) * param_3 +
           *(float *)(param_1 + 0x1528);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 10 & 1) != 0) {
      local_88 = ((float)param_2[0xbb] - *(float *)(param_1 + 0x152c)) * param_3 +
                 *(float *)(param_1 + 0x152c);
      fStack_84 = ((float)param_2[0xbc] - *(float *)(param_1 + 0x1530)) * param_3 +
                  *(float *)(param_1 + 0x1530);
      fStack_80 = ((float)param_2[0xbd] - *(float *)(param_1 + 0x1534)) * param_3 +
                  *(float *)(param_1 + 0x1534);
      fStack_7c = ((float)param_2[0xbe] - *(float *)(param_1 + 0x1538)) * param_3 +
                  *(float *)(param_1 + 0x1538);
      *(float *)(param_1 + 0x152c) = local_88;
      *(float *)(param_1 + 0x1530) = fStack_84;
      *(float *)(param_1 + 0x1534) = fStack_80;
      *(float *)(param_1 + 0x1538) = fStack_7c;
      uVar7 = param_2[2];
    }
    if ((uVar7 & 4) != 0) {
      *(float *)(param_1 + 0x14f8) =
           ((float)param_2[0xae] - *(float *)(param_1 + 0x14f8)) * param_3 +
           *(float *)(param_1 + 0x14f8);
      uVar7 = param_2[2];
    }
    if ((uVar7 & 8) != 0) {
      fVar9 = (float)param_2[0xb0];
      *(float *)(param_1 + 0x14fc) =
           ((float)param_2[0xaf] - *(float *)(param_1 + 0x14fc)) * param_3 +
           *(float *)(param_1 + 0x14fc);
      *(float *)(param_1 + 0x1500) =
           (fVar9 - *(float *)(param_1 + 0x1500)) * param_3 + *(float *)(param_1 + 0x1500);
      uVar7 = param_2[2];
    }
    if ((uVar7 & 0x10) != 0) {
      fStack_80 = ((float)param_2[0xb3] - *(float *)(param_1 + 0x150c)) * param_3 +
                  *(float *)(param_1 + 0x150c);
      *(ulonglong *)(param_1 + 0x1504) =
           CONCAT44(((float)param_2[0xb2] - *(float *)(param_1 + 0x1508)) * param_3 +
                    *(float *)(param_1 + 0x1508),
                    ((float)param_2[0xb1] - *(float *)(param_1 + 0x1504)) * param_3 +
                    *(float *)(param_1 + 0x1504));
      *(float *)(param_1 + 0x150c) = fStack_80;
      uVar7 = param_2[2];
    }
    if ((uVar7 & 0x20) != 0) {
      *(float *)(param_1 + 0x1510) =
           ((float)param_2[0xb4] - *(float *)(param_1 + 0x1510)) * param_3 +
           *(float *)(param_1 + 0x1510);
      uVar7 = param_2[2];
    }
    cVar3 = (char)uVar7;
    if ((uVar7 & 0x40) != 0) {
      *(float *)(param_1 + 0x1514) =
           ((float)param_2[0xb5] - *(float *)(param_1 + 0x1514)) * param_3 +
           *(float *)(param_1 + 0x1514);
      cVar3 = (char)param_2[2];
    }
    if (cVar3 < '\0') {
      *(float *)(param_1 + 0x1518) =
           ((float)param_2[0xb6] - *(float *)(param_1 + 0x1518)) * param_3 +
           *(float *)(param_1 + 0x1518);
    }
    uVar7 = param_2[1];
    if ((uVar7 >> 0xf & 1) != 0) {
      *(float *)(param_1 + 0x1550) =
           ((float)param_2[0xc4] - *(float *)(param_1 + 0x1550)) * param_3 +
           *(float *)(param_1 + 0x1550);
      uVar7 = param_2[1];
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      local_88 = ((float)param_2[0xbf] - *(float *)(param_1 + 0x153c)) * param_3 +
                 *(float *)(param_1 + 0x153c);
      fStack_84 = ((float)param_2[0xc0] - *(float *)(param_1 + 0x1540)) * param_3 +
                  *(float *)(param_1 + 0x1540);
      fStack_80 = ((float)param_2[0xc1] - *(float *)(param_1 + 0x1544)) * param_3 +
                  *(float *)(param_1 + 0x1544);
      fStack_7c = ((float)param_2[0xc2] - *(float *)(param_1 + 0x1548)) * param_3 +
                  *(float *)(param_1 + 0x1548);
      *(float *)(param_1 + 0x153c) = local_88;
      *(float *)(param_1 + 0x1540) = fStack_84;
      *(float *)(param_1 + 0x1544) = fStack_80;
      *(float *)(param_1 + 0x1548) = fStack_7c;
    }
    uVar7 = param_2[2];
    if ((uVar7 >> 0xc & 1) != 0) {
      *(float *)(param_1 + 0x1560) =
           ((float)param_2[200] - *(float *)(param_1 + 0x1560)) * param_3 +
           *(float *)(param_1 + 0x1560);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      *(float *)(param_1 + 0x1564) =
           ((float)param_2[0xc9] - *(float *)(param_1 + 0x1564)) * param_3 +
           *(float *)(param_1 + 0x1564);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0xf & 1) != 0) {
      *(float *)(param_1 + 0x1580) =
           ((float)param_2[0xd0] - *(float *)(param_1 + 0x1580)) * param_3 +
           *(float *)(param_1 + 0x1580);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x10 & 1) != 0) {
      *(float *)(param_1 + 0x1584) =
           ((float)param_2[0xd1] - *(float *)(param_1 + 0x1584)) * param_3 +
           *(float *)(param_1 + 0x1584);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x11 & 1) != 0) {
      *(float *)(param_1 + 0x1588) =
           ((float)param_2[0xd2] - *(float *)(param_1 + 0x1588)) * param_3 +
           *(float *)(param_1 + 0x1588);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x12 & 1) != 0) {
      *(float *)(param_1 + 0x158c) =
           ((float)param_2[0xd3] - *(float *)(param_1 + 0x158c)) * param_3 +
           *(float *)(param_1 + 0x158c);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      *(float *)(param_1 + 0x1590) =
           ((float)param_2[0xd4] - *(float *)(param_1 + 0x1590)) * param_3 +
           *(float *)(param_1 + 0x1590);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x14 & 1) != 0) {
      *(float *)(param_1 + 0x1594) =
           ((float)param_2[0xd5] - *(float *)(param_1 + 0x1594)) * param_3 +
           *(float *)(param_1 + 0x1594);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      *(float *)(param_1 + 0x1578) =
           ((float)param_2[0xce] - *(float *)(param_1 + 0x1578)) * param_3 +
           *(float *)(param_1 + 0x1578);
      uVar7 = param_2[2];
    }
    uVar7 = uVar7 & 0x80000 | *(uint *)(param_1 + 0x1248);
    *(uint *)(param_1 + 0x1248) = uVar7;
    uVar7 = uVar7 | param_2[2] & 0x100000;
    *(uint *)(param_1 + 0x1248) = uVar7;
    *(uint *)(param_1 + 0x1248) = param_2[2] & 0x2000000 | uVar7;
    uVar7 = param_2[2];
    if ((uVar7 >> 0x15 & 1) != 0) {
      *(float *)(param_1 + 0x15a8) =
           ((float)param_2[0xda] - *(float *)(param_1 + 0x15a8)) * param_3 +
           *(float *)(param_1 + 0x15a8);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      *(float *)(param_1 + 0x1598) =
           ((float)param_2[0xd6] - *(float *)(param_1 + 0x1598)) * param_3 +
           *(float *)(param_1 + 0x1598);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      *(float *)(param_1 + 0x159c) =
           ((float)param_2[0xd7] - *(float *)(param_1 + 0x159c)) * param_3 +
           *(float *)(param_1 + 0x159c);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x18 & 1) != 0) {
      *(float *)(param_1 + 0x1574) =
           ((float)param_2[0xcd] - *(float *)(param_1 + 0x1574)) * param_3 +
           *(float *)(param_1 + 0x1574);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x1a & 1) != 0) {
      *(float *)(param_1 + 0x15a0) =
           ((float)param_2[0xd8] - *(float *)(param_1 + 0x15a0)) * param_3 +
           *(float *)(param_1 + 0x15a0);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(float *)(param_1 + 0x15a4) =
           ((float)param_2[0xd9] - *(float *)(param_1 + 0x15a4)) * param_3 +
           *(float *)(param_1 + 0x15a4);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      *(float *)(param_1 + 0x15ac) =
           ((float)param_2[0xdb] - *(float *)(param_1 + 0x15ac)) * param_3 +
           *(float *)(param_1 + 0x15ac);
      uVar7 = param_2[2];
    }
    if ((uVar7 >> 0x1d & 1) != 0) {
      local_88 = ((float)param_2[0xdc] - *(float *)(param_1 + 0x15b0)) * param_3 +
                 *(float *)(param_1 + 0x15b0);
      fStack_84 = ((float)param_2[0xdd] - *(float *)(param_1 + 0x15b4)) * param_3 +
                  *(float *)(param_1 + 0x15b4);
      fStack_80 = ((float)param_2[0xde] - *(float *)(param_1 + 0x15b8)) * param_3 +
                  *(float *)(param_1 + 0x15b8);
      fStack_7c = ((float)param_2[0xdf] - *(float *)(param_1 + 0x15bc)) * param_3 +
                  *(float *)(param_1 + 0x15bc);
      *(float *)(param_1 + 0x15b0) = local_88;
      *(float *)(param_1 + 0x15b4) = fStack_84;
      *(float *)(param_1 + 0x15b8) = fStack_80;
      *(float *)(param_1 + 0x15bc) = fStack_7c;
      uVar7 = param_2[2];
    }
    if ((int)uVar7 < 0) {
      *(float *)(param_1 + 0x15c0) =
           ((float)param_2[0xe0] - *(float *)(param_1 + 0x15c0)) * param_3 +
           *(float *)(param_1 + 0x15c0);
    }
    uVar7 = param_2[3];
    if ((uVar7 & 2) != 0) {
      *(float *)(param_1 + 0x15c4) =
           ((float)param_2[0xe1] - *(float *)(param_1 + 0x15c4)) * param_3 +
           *(float *)(param_1 + 0x15c4);
      uVar7 = param_2[3];
    }
    if ((uVar7 & 4) != 0) {
      *(float *)(param_1 + 0x1650) =
           ((float)param_2[0x104] - *(float *)(param_1 + 0x1650)) * param_3 +
           *(float *)(param_1 + 0x1650);
      uVar7 = param_2[3];
    }
    if ((uVar7 & 8) != 0) {
      *(float *)(param_1 + 0x1654) =
           ((float)param_2[0x105] - *(float *)(param_1 + 0x1654)) * param_3 +
           *(float *)(param_1 + 0x1654);
      uVar7 = param_2[3];
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(param_1 + 0x165c) =
           ((float)param_2[0x107] - *(float *)(param_1 + 0x165c)) * param_3 +
           *(float *)(param_1 + 0x165c);
      uVar7 = param_2[3];
    }
    if ((uVar7 & 0x20) != 0) {
      *(float *)(param_1 + 0x1658) =
           ((float)param_2[0x106] - *(float *)(param_1 + 0x1658)) * param_3 +
           *(float *)(param_1 + 0x1658);
      uVar7 = param_2[3];
    }
    if ((uVar7 & 0x40) != 0) {
      *(float *)(param_1 + 0x1660) =
           ((float)param_2[0x108] - *(float *)(param_1 + 0x1660)) * param_3 +
           *(float *)(param_1 + 0x1660);
      uVar7 = param_2[3];
    }
    if ((char)uVar7 < '\0') {
      *(float *)(param_1 + 0x1664) =
           ((float)param_2[0x109] - *(float *)(param_1 + 0x1664)) * param_3 +
           *(float *)(param_1 + 0x1664);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 8 & 1) != 0) {
      *(float *)(param_1 + 0x1668) =
           ((float)param_2[0x10a] - *(float *)(param_1 + 0x1668)) * param_3 +
           *(float *)(param_1 + 0x1668);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 9 & 1) != 0) {
      *(float *)(param_1 + 0x1670) =
           ((float)param_2[0x10c] - *(float *)(param_1 + 0x1670)) * param_3 +
           *(float *)(param_1 + 0x1670);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 10 & 1) != 0) {
      *(float *)(param_1 + 0x1674) =
           ((float)param_2[0x10d] - *(float *)(param_1 + 0x1674)) * param_3 +
           *(float *)(param_1 + 0x1674);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      *(float *)(param_1 + 0x1678) =
           ((float)param_2[0x10e] - *(float *)(param_1 + 0x1678)) * param_3 +
           *(float *)(param_1 + 0x1678);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      *(float *)(param_1 + 0x167c) =
           ((float)param_2[0x10f] - *(float *)(param_1 + 0x167c)) * param_3 +
           *(float *)(param_1 + 0x167c);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      *(float *)(param_1 + 0x1680) =
           ((float)param_2[0x110] - *(float *)(param_1 + 0x1680)) * param_3 +
           *(float *)(param_1 + 0x1680);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0xf & 1) != 0) {
      *(float *)(param_1 + 0x1684) =
           ((float)param_2[0x111] - *(float *)(param_1 + 0x1684)) * param_3 +
           *(float *)(param_1 + 0x1684);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x10 & 1) != 0) {
      *(float *)(param_1 + 0x1688) =
           ((float)param_2[0x112] - *(float *)(param_1 + 0x1688)) * param_3 +
           *(float *)(param_1 + 0x1688);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x11 & 1) != 0) {
      *(float *)(param_1 + 0x168c) =
           ((float)param_2[0x113] - *(float *)(param_1 + 0x168c)) * param_3 +
           *(float *)(param_1 + 0x168c);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x12 & 1) != 0) {
      *(float *)(param_1 + 0x1690) =
           ((float)param_2[0x114] - *(float *)(param_1 + 0x1690)) * param_3 +
           *(float *)(param_1 + 0x1690);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x14 & 1) != 0) {
      *(float *)(param_1 + 0x1698) =
           ((float)param_2[0x116] - *(float *)(param_1 + 0x1698)) * param_3 +
           *(float *)(param_1 + 0x1698);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x15 & 1) != 0) {
      *(float *)(param_1 + 0x169c) =
           ((float)param_2[0x117] - *(float *)(param_1 + 0x169c)) * param_3 +
           *(float *)(param_1 + 0x169c);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      *(float *)(param_1 + 0x16a0) =
           ((float)param_2[0x118] - *(float *)(param_1 + 0x16a0)) * param_3 +
           *(float *)(param_1 + 0x16a0);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      *(float *)(param_1 + 0x16a4) =
           ((float)param_2[0x119] - *(float *)(param_1 + 0x16a4)) * param_3 +
           *(float *)(param_1 + 0x16a4);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x18 & 1) != 0) {
      *(float *)(param_1 + 0x16a8) =
           ((float)param_2[0x11a] - *(float *)(param_1 + 0x16a8)) * param_3 +
           *(float *)(param_1 + 0x16a8);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      *(float *)(param_1 + 0x16ac) =
           ((float)param_2[0x11b] - *(float *)(param_1 + 0x16ac)) * param_3 +
           *(float *)(param_1 + 0x16ac);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x1a & 1) != 0) {
      *(float *)(param_1 + 0x16b0) =
           ((float)param_2[0x11c] - *(float *)(param_1 + 0x16b0)) * param_3 +
           *(float *)(param_1 + 0x16b0);
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(int *)(param_1 + 0x16b4) =
           (int)((float)(int)(param_2[0x11d] - *(int *)(param_1 + 0x16b4)) * param_3 +
                (float)*(int *)(param_1 + 0x16b4));
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      *(int *)(param_1 + 0x16b8) =
           (int)((float)(int)(param_2[0x11e] - *(int *)(param_1 + 0x16b8)) * param_3 +
                (float)*(int *)(param_1 + 0x16b8));
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x1d & 1) != 0) {
      *(float *)(param_1 + 0x16bc) =
           ((float)param_2[0x11f] - *(float *)(param_1 + 0x16bc)) * param_3 +
           *(float *)(param_1 + 0x16bc);
    }
    uVar7 = param_2[4];
    if ((uVar7 >> 0xd & 1) != 0) {
      local_88 = ((float)param_2[0x120] - *(float *)(param_1 + 0x16c0)) * param_3 +
                 *(float *)(param_1 + 0x16c0);
      fStack_84 = ((float)param_2[0x121] - *(float *)(param_1 + 0x16c4)) * param_3 +
                  *(float *)(param_1 + 0x16c4);
      fStack_80 = ((float)param_2[0x122] - *(float *)(param_1 + 0x16c8)) * param_3 +
                  *(float *)(param_1 + 0x16c8);
      fStack_7c = ((float)param_2[0x123] - *(float *)(param_1 + 0x16cc)) * param_3 +
                  *(float *)(param_1 + 0x16cc);
      *(float *)(param_1 + 0x16c0) = local_88;
      *(float *)(param_1 + 0x16c4) = fStack_84;
      *(float *)(param_1 + 0x16c8) = fStack_80;
      *(float *)(param_1 + 0x16cc) = fStack_7c;
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      *(float *)(param_1 + 0x16d0) =
           ((float)param_2[0x124] - *(float *)(param_1 + 0x16d0)) * param_3 +
           *(float *)(param_1 + 0x16d0);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      *(float *)(param_1 + 0x1720) =
           ((float)param_2[0x138] - *(float *)(param_1 + 0x1720)) * param_3 +
           *(float *)(param_1 + 0x1720);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x18 & 1) != 0) {
      *(float *)(param_1 + 0x1568) =
           ((float)param_2[0xca] - *(float *)(param_1 + 0x1568)) * param_3 +
           *(float *)(param_1 + 0x1568);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      *(float *)(param_1 + 0x156c) =
           ((float)param_2[0xcb] - *(float *)(param_1 + 0x156c)) * param_3 +
           *(float *)(param_1 + 0x156c);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(float *)(param_1 + 0x171c) =
           ((float)param_2[0x137] - *(float *)(param_1 + 0x171c)) * param_3 +
           *(float *)(param_1 + 0x171c);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      *(float *)(param_1 + 0x1728) =
           ((float)param_2[0x13a] - *(float *)(param_1 + 0x1728)) * param_3 +
           *(float *)(param_1 + 0x1728);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x1d & 1) != 0) {
      *(float *)(param_1 + 0x1724) =
           ((float)param_2[0x139] - *(float *)(param_1 + 0x1724)) * param_3 +
           *(float *)(param_1 + 0x1724);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x1e & 1) != 0) {
      *(float *)(param_1 + 0x172c) =
           ((float)param_2[0x13b] - *(float *)(param_1 + 0x172c)) * param_3 +
           *(float *)(param_1 + 0x172c);
      uVar7 = param_2[4];
    }
    if ((int)uVar7 < 0) {
      *(float *)(param_1 + 0x1730) =
           ((float)param_2[0x13c] - *(float *)(param_1 + 0x1730)) * param_3 +
           *(float *)(param_1 + 0x1730);
    }
    uVar7 = param_2[5];
    if ((uVar7 & 1) != 0) {
      *(float *)(param_1 + 0x1734) =
           ((float)param_2[0x13d] - *(float *)(param_1 + 0x1734)) * param_3 +
           *(float *)(param_1 + 0x1734);
      uVar7 = param_2[5];
    }
    if ((uVar7 & 2) != 0) {
      *(float *)(param_1 + 0x1738) =
           ((float)param_2[0x13e] - *(float *)(param_1 + 0x1738)) * param_3 +
           *(float *)(param_1 + 0x1738);
      uVar7 = param_2[5];
    }
    if ((uVar7 & 4) != 0) {
      *(float *)(param_1 + 0x173c) =
           ((float)param_2[0x13f] - *(float *)(param_1 + 0x173c)) * param_3 +
           *(float *)(param_1 + 0x173c);
      uVar7 = param_2[5];
    }
    if ((uVar7 & 8) != 0) {
      *(float *)(param_1 + 0x1740) =
           ((float)param_2[0x140] - *(float *)(param_1 + 0x1740)) * param_3 +
           *(float *)(param_1 + 0x1740);
      uVar7 = param_2[5];
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(param_1 + 0x1744) =
           ((float)param_2[0x141] - *(float *)(param_1 + 0x1744)) * param_3 +
           *(float *)(param_1 + 0x1744);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 10 & 1) != 0) {
      *(float *)(param_1 + 0x1758) =
           ((float)param_2[0x146] - *(float *)(param_1 + 0x1758)) * param_3 +
           *(float *)(param_1 + 0x1758);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      *(float *)(param_1 + 0x175c) =
           ((float)param_2[0x147] - *(float *)(param_1 + 0x175c)) * param_3 +
           *(float *)(param_1 + 0x175c);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0xc & 1) != 0) {
      *(float *)(param_1 + 0x1760) =
           ((float)param_2[0x148] - *(float *)(param_1 + 0x1760)) * param_3 +
           *(float *)(param_1 + 0x1760);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0xd & 1) != 0) {
      *(float *)(param_1 + 0x1764) =
           ((float)param_2[0x149] - *(float *)(param_1 + 0x1764)) * param_3 +
           *(float *)(param_1 + 0x1764);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x10 & 1) != 0) {
      *(float *)(param_1 + 6000) =
           ((float)param_2[0x14c] - *(float *)(param_1 + 6000)) * param_3 +
           *(float *)(param_1 + 6000);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0xe & 1) != 0) {
      *(float *)(param_1 + 0x1768) =
           ((float)param_2[0x14a] - *(float *)(param_1 + 0x1768)) * param_3 +
           *(float *)(param_1 + 0x1768);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0xf & 1) != 0) {
      *(float *)(param_1 + 0x176c) =
           ((float)param_2[0x14b] - *(float *)(param_1 + 0x176c)) * param_3 +
           *(float *)(param_1 + 0x176c);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x11 & 1) != 0) {
      *(float *)(param_1 + 0x1774) =
           ((float)param_2[0x14d] - *(float *)(param_1 + 0x1774)) * param_3 +
           *(float *)(param_1 + 0x1774);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x12 & 1) != 0) {
      *(float *)(param_1 + 0x1778) =
           ((float)param_2[0x14e] - *(float *)(param_1 + 0x1778)) * param_3 +
           *(float *)(param_1 + 0x1778);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      *(float *)(param_1 + 0x177c) =
           ((float)param_2[0x14f] - *(float *)(param_1 + 0x177c)) * param_3 +
           *(float *)(param_1 + 0x177c);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      *(float *)(param_1 + 0x1788) =
           ((float)param_2[0x152] - *(float *)(param_1 + 0x1788)) * param_3 +
           *(float *)(param_1 + 0x1788);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x17 & 1) != 0) {
      *(float *)(param_1 + 0x178c) =
           ((float)param_2[0x153] - *(float *)(param_1 + 0x178c)) * param_3 +
           *(float *)(param_1 + 0x178c);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x14 & 1) != 0) {
      *(float *)(param_1 + 0x1780) =
           ((float)param_2[0x150] - *(float *)(param_1 + 0x1780)) * param_3 +
           *(float *)(param_1 + 0x1780);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x15 & 1) != 0) {
      *(float *)(param_1 + 0x1784) =
           ((float)param_2[0x151] - *(float *)(param_1 + 0x1784)) * param_3 +
           *(float *)(param_1 + 0x1784);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x18 & 1) != 0) {
      *(float *)(param_1 + 0x1808) =
           ((float)param_2[0x172] - *(float *)(param_1 + 0x1808)) * param_3 +
           *(float *)(param_1 + 0x1808);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x19 & 1) != 0) {
      fVar9 = (float)param_2[0x174];
      *(float *)(param_1 + 0x180c) =
           ((float)param_2[0x173] - *(float *)(param_1 + 0x180c)) * param_3 +
           *(float *)(param_1 + 0x180c);
      *(float *)(param_1 + 0x1810) =
           (fVar9 - *(float *)(param_1 + 0x1810)) * param_3 + *(float *)(param_1 + 0x1810);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x1b & 1) != 0) {
      *(float *)(param_1 + 0x17c8) =
           ((float)param_2[0x162] - *(float *)(param_1 + 0x17c8)) * param_3 +
           *(float *)(param_1 + 0x17c8);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x1a & 1) != 0) {
      *(float *)(param_1 + 0x17c4) =
           ((float)param_2[0x161] - *(float *)(param_1 + 0x17c4)) * param_3 +
           *(float *)(param_1 + 0x17c4);
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 0x1c & 1) != 0) {
      *(float *)(param_1 + 0x17cc) =
           ((float)param_2[0x163] - *(float *)(param_1 + 0x17cc)) * param_3 +
           *(float *)(param_1 + 0x17cc);
      uVar7 = param_2[5];
    }
    if ((int)uVar7 < 0) {
      *(float *)(param_1 + 0x17dc) =
           ((float)param_2[0x167] - *(float *)(param_1 + 0x17dc)) * param_3 +
           *(float *)(param_1 + 0x17dc);
    }
    uVar7 = param_2[6];
    if ((uVar7 & 1) != 0) {
      *(float *)(param_1 + 0x17e0) =
           ((float)param_2[0x168] - *(float *)(param_1 + 0x17e0)) * param_3 +
           *(float *)(param_1 + 0x17e0);
      uVar7 = param_2[6];
    }
    if ((uVar7 & 2) != 0) {
      *(float *)(param_1 + 0x17e4) =
           ((float)param_2[0x169] - *(float *)(param_1 + 0x17e4)) * param_3 +
           *(float *)(param_1 + 0x17e4);
      uVar7 = param_2[6];
    }
    if ((uVar7 & 4) != 0) {
      *(float *)(param_1 + 0x17e8) =
           ((float)param_2[0x16a] - *(float *)(param_1 + 0x17e8)) * param_3 +
           *(float *)(param_1 + 0x17e8);
      uVar7 = param_2[6];
    }
    if ((uVar7 & 8) != 0) {
      *(float *)(param_1 + 0x17ec) =
           ((float)param_2[0x16b] - *(float *)(param_1 + 0x17ec)) * param_3 +
           *(float *)(param_1 + 0x17ec);
      uVar7 = param_2[6];
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(param_1 + 0x17f0) =
           ((float)param_2[0x16c] - *(float *)(param_1 + 0x17f0)) * param_3 +
           *(float *)(param_1 + 0x17f0);
      uVar7 = param_2[6];
    }
    if ((uVar7 & 0x20) != 0) {
      *(float *)(param_1 + 0x17f4) =
           ((float)param_2[0x16d] - *(float *)(param_1 + 0x17f4)) * param_3 +
           *(float *)(param_1 + 0x17f4);
      uVar7 = param_2[6];
    }
    if ((uVar7 & 0x40) != 0) {
      *(float *)(param_1 + 0x17f8) =
           ((float)param_2[0x16e] - *(float *)(param_1 + 0x17f8)) * param_3 +
           *(float *)(param_1 + 0x17f8);
      uVar7 = param_2[6];
    }
    if ((char)uVar7 < '\0') {
      *(float *)(param_1 + 0x17fc) =
           ((float)param_2[0x16f] - *(float *)(param_1 + 0x17fc)) * param_3 +
           *(float *)(param_1 + 0x17fc);
      uVar7 = param_2[6];
    }
    if ((uVar7 >> 8 & 1) != 0) {
      *(float *)(param_1 + 0x1800) =
           ((float)param_2[0x170] - *(float *)(param_1 + 0x1800)) * param_3 +
           *(float *)(param_1 + 0x1800);
      uVar7 = param_2[6];
    }
    if ((uVar7 >> 9 & 1) != 0) {
      *(float *)(param_1 + 0x1804) =
           ((float)param_2[0x171] - *(float *)(param_1 + 0x1804)) * param_3 +
           *(float *)(param_1 + 0x1804);
    }
    uVar7 = param_2[5];
    if ((uVar7 >> 0x1e & 1) != 0) {
      *(uint *)(param_1 + 0x17d8) =
           *(uint *)(param_1 + 0x17d8) ^ (param_2[0x166] ^ *(uint *)(param_1 + 0x17d8)) & 1;
      uVar7 = param_2[5];
    }
    if ((uVar7 & 0x20) != 0) {
      *(uint *)(param_1 + 0x1748) = param_2[0x142];
      uVar7 = param_2[5];
    }
    if ((uVar7 & 0x40) != 0) {
      *(uint *)(param_1 + 0x174c) = param_2[0x143];
    }
    if ((param_2[4] & 0x4000000) != 0) {
      *(uint *)(param_1 + 0x1570) = param_2[0xcc];
    }
    uVar7 = param_2[1];
    if ((uVar7 >> 0x10 & 1) != 0) {
      *(uint *)(param_1 + 0x154c) = param_2[0xc3];
      uVar7 = param_2[1];
    }
    if ((*(longlong *)(param_2 + 0xc6) != 0) && ((uVar7 >> 0xf & 1) != 0)) {
      fStack_7c = (float)param_2[0xc4];
      local_88 = fStack_7c;
      fStack_84 = fStack_7c;
      fStack_80 = fStack_7c;
      if ((uVar7 >> 0xe & 1) != 0) {
        local_88 = fStack_7c * (float)param_2[0xbf];
        fStack_84 = fStack_7c * (float)param_2[0xc0];
        fStack_80 = fStack_7c * (float)param_2[0xc1];
        fStack_7c = fStack_7c * (float)param_2[0xc2];
      }
      local_78 = *(longlong *)(param_2 + 0xc6);
      FUN_14275f540(lVar4,&local_88,param_3);
    }
    uVar7 = param_2[4];
    if ((uVar7 >> 0x14 & 1) != 0) {
      fVar9 = (float)param_2[0x12f];
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      FUN_142753c20(lVar4,*(undefined8 *)(param_2 + 0x130),fVar9 * param_3);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0x16 & 1) != 0) {
      fVar9 = (float)param_2[0x134];
      if (0.0 <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      FUN_142753c20(lVar4,*(undefined8 *)(param_2 + 0x132),fVar9 * param_3);
    }
    if (((param_2[2] & 0x800) != 0) && (*(longlong *)(param_2 + 0xb8) != 0)) {
      *(longlong *)(param_1 + 0x1520) = *(longlong *)(param_2 + 0xb8);
    }
    if (((param_2[1] & 0x20000) != 0) && ((char)param_2[0x89] != '\0')) {
      *(char *)(param_1 + 0x1464) = (char)param_2[0x89];
    }
    uVar7 = param_2[2];
    if (((uVar7 & 2) != 0) && (*(longlong *)(param_2 + 0xac) != 0)) {
      *(longlong *)(param_1 + 0x14f0) = *(longlong *)(param_2 + 0xac);
      uVar7 = param_2[2];
    }
    if (((uVar7 >> 8 & 1) != 0) && ((float)param_2[0xb7] != 0.0)) {
      *(uint *)(param_1 + 0x151c) = param_2[0xb7];
    }
    if (((param_2[5] & 0x200) != 0) && (*(longlong *)(param_2 + 0x144) != 0)) {
      *(longlong *)(param_1 + 0x1750) = *(longlong *)(param_2 + 0x144);
    }
    if (((param_2[3] & 1) != 0) && (*(longlong *)(param_2 + 0xe2) != 0)) {
      *(longlong *)(param_1 + 0x15c8) = *(longlong *)(param_2 + 0xe2);
    }
    if ((param_2[2] & 0x40000000) != 0) {
      fVar9 = (float)param_2[0xe5];
      fVar1 = (float)param_2[0xe6];
      fVar2 = (float)param_2[0xe7];
      *(float *)(param_1 + 0x15d0) =
           ((float)param_2[0xe4] - *(float *)(param_1 + 0x15d0)) * param_3 +
           *(float *)(param_1 + 0x15d0);
      *(float *)(param_1 + 0x15d4) =
           (fVar9 - *(float *)(param_1 + 0x15d4)) * param_3 + *(float *)(param_1 + 0x15d4);
      *(float *)(param_1 + 0x15d8) =
           (fVar1 - *(float *)(param_1 + 0x15d8)) * param_3 + *(float *)(param_1 + 0x15d8);
      *(float *)(param_1 + 0x15dc) =
           (fVar2 - *(float *)(param_1 + 0x15dc)) * param_3 + *(float *)(param_1 + 0x15dc);
      fVar9 = (float)param_2[0xe9];
      fVar1 = (float)param_2[0xea];
      fVar2 = (float)param_2[0xeb];
      *(float *)(param_1 + 0x15e0) =
           ((float)param_2[0xe8] - *(float *)(param_1 + 0x15e0)) * param_3 +
           *(float *)(param_1 + 0x15e0);
      *(float *)(param_1 + 0x15e4) =
           (fVar9 - *(float *)(param_1 + 0x15e4)) * param_3 + *(float *)(param_1 + 0x15e4);
      *(float *)(param_1 + 0x15e8) =
           (fVar1 - *(float *)(param_1 + 0x15e8)) * param_3 + *(float *)(param_1 + 0x15e8);
      *(float *)(param_1 + 0x15ec) =
           (fVar2 - *(float *)(param_1 + 0x15ec)) * param_3 + *(float *)(param_1 + 0x15ec);
      fVar9 = (float)param_2[0xed];
      fVar1 = (float)param_2[0xee];
      fVar2 = (float)param_2[0xef];
      *(float *)(param_1 + 0x15f0) =
           ((float)param_2[0xec] - *(float *)(param_1 + 0x15f0)) * param_3 +
           *(float *)(param_1 + 0x15f0);
      *(float *)(param_1 + 0x15f4) =
           (fVar9 - *(float *)(param_1 + 0x15f4)) * param_3 + *(float *)(param_1 + 0x15f4);
      *(float *)(param_1 + 0x15f8) =
           (fVar1 - *(float *)(param_1 + 0x15f8)) * param_3 + *(float *)(param_1 + 0x15f8);
      *(float *)(param_1 + 0x15fc) =
           (fVar2 - *(float *)(param_1 + 0x15fc)) * param_3 + *(float *)(param_1 + 0x15fc);
      fVar9 = (float)param_2[0xf1];
      fVar1 = (float)param_2[0xf2];
      fVar2 = (float)param_2[0xf3];
      *(float *)(param_1 + 0x1600) =
           *(float *)(param_1 + 0x1600) +
           ((float)param_2[0xf0] - *(float *)(param_1 + 0x1600)) * param_3;
      *(float *)(param_1 + 0x1604) =
           *(float *)(param_1 + 0x1604) + (fVar9 - *(float *)(param_1 + 0x1604)) * param_3;
      *(float *)(param_1 + 0x1608) =
           *(float *)(param_1 + 0x1608) + (fVar1 - *(float *)(param_1 + 0x1608)) * param_3;
      *(float *)(param_1 + 0x160c) =
           *(float *)(param_1 + 0x160c) + (fVar2 - *(float *)(param_1 + 0x160c)) * param_3;
      fVar9 = (float)param_2[0xf5];
      fVar1 = (float)param_2[0xf6];
      fVar2 = (float)param_2[0xf7];
      *(float *)(param_1 + 0x1610) =
           *(float *)(param_1 + 0x1610) +
           ((float)param_2[0xf4] - *(float *)(param_1 + 0x1610)) * param_3;
      *(float *)(param_1 + 0x1614) =
           *(float *)(param_1 + 0x1614) + (fVar9 - *(float *)(param_1 + 0x1614)) * param_3;
      *(float *)(param_1 + 0x1618) =
           *(float *)(param_1 + 0x1618) + (fVar1 - *(float *)(param_1 + 0x1618)) * param_3;
      *(float *)(param_1 + 0x161c) =
           *(float *)(param_1 + 0x161c) + (fVar2 - *(float *)(param_1 + 0x161c)) * param_3;
      fVar9 = (float)param_2[0xf9];
      fVar1 = (float)param_2[0xfa];
      fVar2 = (float)param_2[0xfb];
      *(float *)(param_1 + 0x1620) =
           *(float *)(param_1 + 0x1620) +
           ((float)param_2[0xf8] - *(float *)(param_1 + 0x1620)) * param_3;
      *(float *)(param_1 + 0x1624) =
           *(float *)(param_1 + 0x1624) + (fVar9 - *(float *)(param_1 + 0x1624)) * param_3;
      *(float *)(param_1 + 0x1628) =
           *(float *)(param_1 + 0x1628) + (fVar1 - *(float *)(param_1 + 0x1628)) * param_3;
      *(float *)(param_1 + 0x162c) =
           *(float *)(param_1 + 0x162c) + (fVar2 - *(float *)(param_1 + 0x162c)) * param_3;
      fVar9 = (float)param_2[0xfd];
      fVar1 = (float)param_2[0xfe];
      fVar2 = (float)param_2[0xff];
      *(float *)(param_1 + 0x1630) =
           *(float *)(param_1 + 0x1630) +
           ((float)param_2[0xfc] - *(float *)(param_1 + 0x1630)) * param_3;
      *(float *)(param_1 + 0x1634) =
           *(float *)(param_1 + 0x1634) + (fVar9 - *(float *)(param_1 + 0x1634)) * param_3;
      *(float *)(param_1 + 0x1638) =
           *(float *)(param_1 + 0x1638) + (fVar1 - *(float *)(param_1 + 0x1638)) * param_3;
      *(float *)(param_1 + 0x163c) =
           *(float *)(param_1 + 0x163c) + (fVar2 - *(float *)(param_1 + 0x163c)) * param_3;
      fVar9 = (float)param_2[0x101];
      fVar1 = (float)param_2[0x102];
      fVar2 = (float)param_2[0x103];
      *(float *)(param_1 + 0x1640) =
           *(float *)(param_1 + 0x1640) +
           ((float)param_2[0x100] - *(float *)(param_1 + 0x1640)) * param_3;
      *(float *)(param_1 + 0x1644) =
           *(float *)(param_1 + 0x1644) + (fVar9 - *(float *)(param_1 + 0x1644)) * param_3;
      *(float *)(param_1 + 0x1648) =
           *(float *)(param_1 + 0x1648) + (fVar1 - *(float *)(param_1 + 0x1648)) * param_3;
      *(float *)(param_1 + 0x164c) =
           *(float *)(param_1 + 0x164c) + (fVar2 - *(float *)(param_1 + 0x164c)) * param_3;
    }
    uVar7 = param_2[5];
    if ((char)uVar7 < '\0') {
      *(char *)(param_1 + 0x1714) = (char)param_2[0x135];
      uVar7 = param_2[5];
    }
    if ((uVar7 >> 8 & 1) != 0) {
      *(uint *)(param_1 + 0x1718) =
           *(uint *)(param_1 + 0x1718) ^ (param_2[0x136] ^ *(uint *)(param_1 + 0x1718)) & 1;
    }
    if ((param_2[2] & 0x4000) != 0) {
      *(char *)(param_1 + 0x157c) = (char)param_2[0xcf];
    }
    uVar7 = param_2[3];
    if ((uVar7 >> 0xc & 1) != 0) {
      *(uint *)(param_1 + 0x166c) =
           *(uint *)(param_1 + 0x166c) ^ (param_2[0x10b] ^ *(uint *)(param_1 + 0x166c)) & 1;
      uVar7 = param_2[3];
    }
    if ((uVar7 >> 0x13 & 1) != 0) {
      *(uint *)(param_1 + 0x1694) =
           *(uint *)(param_1 + 0x1694) ^ (param_2[0x115] ^ *(uint *)(param_1 + 0x1694)) & 1;
    }
    lVar4 = FBlendableManager::GetSingleFinalData<FLightPropagationVolumeSettings>(param_1 + 0x19d8)
    ;
    if ((param_2[3] & 0x40000000) != 0) {
      *(float *)(lVar4 + 4) =
           ((float)param_2[0x154] - *(float *)(lVar4 + 4)) * param_3 + *(float *)(lVar4 + 4);
    }
    uVar7 = param_2[4];
    if ((uVar7 & 0x40) != 0) {
      *(float *)(lVar4 + 0x10) =
           ((float)param_2[0x157] - *(float *)(lVar4 + 0x10)) * param_3 + *(float *)(lVar4 + 0x10);
      uVar7 = param_2[4];
    }
    if ((char)uVar7 < '\0') {
      *(float *)(lVar4 + 0x14) =
           ((float)param_2[0x158] - *(float *)(lVar4 + 0x14)) * param_3 + *(float *)(lVar4 + 0x14);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 9 & 1) != 0) {
      *(float *)(lVar4 + 8) =
           ((float)param_2[0x155] - *(float *)(lVar4 + 8)) * param_3 + *(float *)(lVar4 + 8);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 8 & 1) != 0) {
      *(float *)(lVar4 + 0x18) =
           ((float)param_2[0x159] - *(float *)(lVar4 + 0x18)) * param_3 + *(float *)(lVar4 + 0x18);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 10 & 1) != 0) {
      *(float *)(lVar4 + 0x1c) =
           ((float)param_2[0x15a] - *(float *)(lVar4 + 0x1c)) * param_3 + *(float *)(lVar4 + 0x1c);
    }
    if ((int)param_2[3] < 0) {
      *(float *)(lVar4 + 0x20) =
           ((float)param_2[0x15b] - *(float *)(lVar4 + 0x20)) * param_3 + *(float *)(lVar4 + 0x20);
    }
    uVar7 = param_2[4];
    if ((uVar7 & 1) != 0) {
      *(float *)(lVar4 + 0x24) =
           ((float)param_2[0x15c] - *(float *)(lVar4 + 0x24)) * param_3 + *(float *)(lVar4 + 0x24);
      uVar7 = param_2[4];
    }
    if ((uVar7 & 2) != 0) {
      *(float *)(lVar4 + 0x28) =
           ((float)param_2[0x15d] - *(float *)(lVar4 + 0x28)) * param_3 + *(float *)(lVar4 + 0x28);
      uVar7 = param_2[4];
    }
    if ((uVar7 & 4) != 0) {
      *(float *)(lVar4 + 0x2c) =
           ((float)param_2[0x15e] - *(float *)(lVar4 + 0x2c)) * param_3 + *(float *)(lVar4 + 0x2c);
      uVar7 = param_2[4];
    }
    if ((uVar7 & 8) != 0) {
      *(float *)(lVar4 + 0x30) =
           ((float)param_2[0x15f] - *(float *)(lVar4 + 0x30)) * param_3 + *(float *)(lVar4 + 0x30);
      uVar7 = param_2[4];
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(lVar4 + 0x34) =
           ((float)param_2[0x160] - *(float *)(lVar4 + 0x34)) * param_3 + *(float *)(lVar4 + 0x34);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      *(float *)(lVar4 + 0x38) =
           ((float)param_2[0x164] - *(float *)(lVar4 + 0x38)) * param_3 + *(float *)(lVar4 + 0x38);
      uVar7 = param_2[4];
    }
    if ((uVar7 >> 0xc & 1) != 0) {
      *(float *)(lVar4 + 0x3c) =
           ((float)param_2[0x165] - *(float *)(lVar4 + 0x3c)) * param_3 + *(float *)(lVar4 + 0x3c);
      uVar7 = param_2[4];
    }
    if ((uVar7 & 0x20) != 0) {
      *(uint *)(lVar4 + 0xc) = param_2[0x156];
    }
    uVar7 = param_2[0x178];
    uVar8 = 0;
    if (uVar7 != 0) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x176) + 8 + (longlong)(int)uVar8 * 0x10);
        if ((lVar4 != 0) && (cVar3 = UObjectBase::IsValidLowLevel(lVar4), cVar3 != '\0')) {
          uVar5 = UBlendableInterface::GetPrivateStaticClass();
          plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
          if (plVar6 != (longlong *)0x0) {
            fVar9 = *(float *)(*(longlong *)(param_2 + 0x176) + (longlong)(int)uVar8 * 0x10);
            if (1.0 <= fVar9) {
              fVar9 = 1.0;
            }
            if (0.0 < fVar9 * param_3) {
              (**(code **)(*plVar6 + 0x10))(plVar6,param_1);
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  return;
}



// FUNCTION 142757630 ParseDocumentAsBytes body=129 status=ok
// SIG undefined ParseDocumentAsBytes(void)

void UCloudStorageBase::ParseDocumentAsBytes
               (longlong param_1,int param_2,longlong param_3,char param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  if ((param_4 == '\0') && (param_2 < *(int *)(param_1 + 0x40))) {
    puVar1 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38));
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    FUN_141676460(param_3,puVar2,0);
  }
  return;
}



// FUNCTION 1427576c0 FUN_1427576c0 body=496 status=ok
// SIG undefined FUN_1427576c0(void)

longlong *
FUN_1427576c0(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined1 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res8 [2];
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  undefined **local_168;
  longlong *local_160;
  byte local_13f;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined **local_b8 [19];
  undefined1 local_20;
  
  plVar5 = (longlong *)0x0;
  local_188 = 0;
  local_180 = 0;
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_188,param_5);
  if ((int)local_180 != 0) {
    FArchive::FArchive(&local_168);
    local_d8 = 0;
    local_168 = &PTR_FUN_143f4a3a0;
    local_d0 = &local_188;
    local_c8 = 0x7fffffffffffffff;
    FArchive::SetIsLoading(&local_168,1);
    FArchive::SetIsPersistent(&local_168,1);
    if ((int *)local_160[1] < (int *)*local_160 + 1) {
      (*(code *)local_168[10])(&local_168,local_res8,4);
      if ((local_13f & 0x10) != 0) {
        FArchive::ByteSwap(&local_168,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*local_160;
      *local_160 = *local_160 + 4;
    }
    if (local_res8[0] == param_4) {
      FArchiveProxy::FArchiveProxy(local_b8,&local_168);
      local_20 = 0;
      local_b8[0] = &PTR_FUN_143f4a5b0;
      local_178 = 0;
      plVar6 = plVar5;
      if (param_3 != (longlong *)0x0) {
        plVar2 = (longlong *)UObject::GetPrivateStaticClass();
        plVar3 = param_3;
        do {
          plVar6 = param_3;
          if (plVar3 == plVar2) break;
          plVar3 = (longlong *)plVar3[6];
          plVar6 = plVar5;
        } while (plVar3 != (longlong *)0x0);
      }
      uVar4 = GetTransientPackage();
      lVar1 = local_178;
      local_170 = 0;
      if (local_178 == 0) {
        FUN_1417846f0(uVar4,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      plVar5 = (longlong *)FUN_1417985e0(plVar6,uVar4,lVar1,0,0,0,0,0,0);
      (**(code **)(*plVar5 + 0xa8))(plVar5,local_b8);
      FArchive::~FArchive(local_b8);
    }
    FArchive::~FArchive(&local_168);
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  return plVar5;
}



// FUNCTION 1427578b0 ParseDocumentAsString body=123 status=ok
// SIG undefined ParseDocumentAsString(void)

undefined8 *
UCloudStorageBase::ParseDocumentAsString
          (longlong param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((param_4 == '\0') && (param_3 < *(int *)(param_1 + 0x40))) {
    local_18 = 0;
    local_10 = 0;
    puVar1 = (undefined8 *)((longlong)param_3 * 0x10 + *(longlong *)(param_1 + 0x38));
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    FUN_141676530(&local_18,puVar2,0);
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_10;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_10._4_4_;
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142757930 FUN_142757930 body=26 status=ok
// SIG undefined FUN_142757930(void)

undefined4 FUN_142757930(longlong param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = *(uint *)(param_1 + 0x1a6c) & param_2;
  uVar1 = *(uint *)(param_1 + 0x1a68) & param_2;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == param_2);
}



// FUNCTION 142757950 FUN_142757950 body=55 status=ok
// SIG undefined FUN_142757950(void)

ulonglong FUN_142757950(longlong param_1,uint param_2,char param_3,char param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if ((((*(uint *)(param_1 + 0x1a70) & param_2) == 0) || (param_3 != '\0')) &&
     (((*(uint *)(param_1 + 0x1a74) & param_2) == 0 || (param_4 != '\0')))) {
    if (param_3 == '\0') {
      param_2 = param_2 & *(uint *)(param_1 + 0x1a6c);
    }
    uVar1 = *(uint *)(param_1 + 0x1a68) & param_2;
    in_RAX = (ulonglong)uVar1;
    if (uVar1 == param_2) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142757990 FUN_142757990 body=67 status=ok
// SIG undefined FUN_142757990(void)

void FUN_142757990(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_142238430();
  lVar1 = operator_new(0x78);
  if (lVar1 != 0) {
    uVar2 = FUN_142741eb0(lVar1);
    *(undefined8 *)(param_1 + 0x458) = uVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x458) = 0;
  return;
}



// FUNCTION 1427579e0 PostLoad body=49 status=ok
// SIG undefined PostLoad(void)

void USCS_Node::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(char *)(param_1 + 0x38) != '\0')) {
    FUN_1422f4930(param_1 + 0x38);
    return;
  }
  return;
}



// FUNCTION 142757a20 PreloadChain body=138 status=ok
// SIG undefined PreloadChain(void)

void USCS_Node::PreloadChain(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if ((*(uint *)(param_1 + 8) >> 10 & 1) != 0) {
    lVar1 = FUN_1417a53c0();
    FUN_141740c00(lVar1 + 0x200,param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 10 & 1) != 0)) {
    lVar2 = FUN_1417a53c0(lVar1);
    FUN_141740c00(lVar2 + 0x200,lVar1);
  }
  for (iVar3 = 0; (-1 < iVar3 && (iVar3 < *(int *)(param_1 + 0xb8))); iVar3 = iVar3 + 1) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 8) != 0) {
      PreloadChain();
    }
  }
  return;
}



// FUNCTION 142757ab0 ProcessAsyncResults body=1243 status=ok
// SIG undefined ProcessAsyncResults(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FShaderCompilingManager::ProcessAsyncResults(undefined1 *param_1,char param_2,char param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  BOOL BVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_178 [32];
  char local_158;
  undefined8 *local_150;
  undefined8 local_148;
  LARGE_INTEGER local_140;
  undefined8 local_138;
  uint *puStack_130;
  undefined4 local_128;
  int iStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined8 uStack_110;
  uint *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  longlong *local_e8;
  undefined2 local_e0;
  longlong *local_d8;
  longlong lStack_d0;
  uint *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  uint local_a8;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (param_1[0x101] != '\0') {
    local_158 = param_2;
    FUN_142748240(*(undefined8 *)(param_1 + 0xe8));
    QueryPerformanceCounter(&local_140);
    puVar14 = (undefined8 *)0x0;
    if (param_3 != '\0') {
      local_150 = (undefined8 *)0x0;
      local_148 = 1;
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_150,0);
      *(undefined4 *)local_150 = 0;
      FUN_142747b30(DAT_146b09470,&local_150,param_1 + 0x98);
      if (local_150 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    }
    if (param_3 == '\0') {
      *param_1 = 1;
    }
    local_118 = (longlong *)(param_1 + 0x18);
    local_150 = (undefined8 *)0x0;
    iVar15 = *(int *)(param_1 + 0x40);
    puStack_130 = (uint *)(param_1 + 0x28);
    local_140.s.LowPart = 0;
    local_148 = local_148 & 0xffffffff;
    local_138 = 0x100000000;
    iStack_124 = 0;
    uStack_120 = 0;
    if (iVar15 != 0) {
      puVar13 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar13 = puStack_130;
      }
      uVar4 = *puVar13;
      puVar9 = puVar14;
      puVar12 = puVar14;
      while (uVar4 == 0) {
        iVar5 = (int)puVar9;
        uStack_120 = (int)puVar12 + 0x20;
        puVar12 = (undefined8 *)(ulonglong)uStack_120;
        puVar9 = (undefined8 *)(ulonglong)(iVar5 + 1U);
        uVar11 = (ulonglong)local_138 >> 0x20;
        local_138 = CONCAT44((int)uVar11,iVar5 + 1U);
        if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142757c54;
        uVar4 = puVar13[(longlong)iVar5 + 1];
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_138 = CONCAT44(uVar4,(undefined4)local_138);
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_124 = (uStack_120 - iVar5) + 0x1f;
      if (iVar15 < iStack_124) {
LAB_142757c54:
        iStack_124 = iVar15;
      }
    }
    local_128 = 0xffffffff;
    uStack_100 = CONCAT44(iStack_124,0xffffffff);
    auStack_c0._8_4_ = uStack_120;
    auStack_c0._0_8_ = uStack_100;
    auStack_c0._12_4_ = uStack_11c;
    lStack_d0 = local_138;
    local_e0 = 0;
    local_b0._0_4_ = SUB84(local_118,0);
    local_b0._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
    uStack_110 = local_138;
    local_f8._8_4_ = (undefined4)local_b0;
    local_f8._0_8_ = auStack_c0._8_8_;
    local_f8._12_4_ = local_b0._4_4_;
    local_108 = puStack_130;
    local_e8 = local_118;
    local_d8 = local_118;
    puStack_c8 = puStack_130;
    local_b0 = local_118;
    if (iStack_124 < *(int *)(param_1 + 0x40)) {
      uVar4 = 0;
      iVar15 = iStack_124;
      do {
        iVar5 = 0;
        lVar7 = (longlong)iVar15;
        iVar15 = 0;
        lVar1 = *local_118;
        if (0 < *(int *)(lVar1 + 0x18 + lVar7 * 0x28)) {
          lVar16 = 0;
          iVar5 = 0;
          do {
            lVar8 = (**(code **)(**(longlong **)
                                   (lVar16 + *(longlong *)(lVar1 + 0x10 + lVar7 * 0x28)) + 0x20))();
            if (lVar8 == 0) {
              iVar6 = 1;
            }
            else {
              iVar6 = *(int *)(lVar8 + 0x20);
            }
            iVar5 = iVar5 + iVar6;
            iVar15 = iVar15 + 1;
            lVar16 = lVar16 + 8;
            puVar14 = local_150;
          } while (iVar15 < *(int *)(lVar1 + 0x18 + lVar7 * 0x28));
        }
        if (iVar5 == *(int *)(lVar1 + 8 + lVar7 * 0x28)) {
          lVar16 = *local_118;
          lVar8 = (longlong)(int)uVar4;
          uVar10 = uVar4 + 1;
          local_148 = CONCAT44(local_148._4_4_,uVar10);
          if (local_148._4_4_ < (int)uVar10) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_150,uVar4);
            uVar10 = (uint)local_148;
          }
          uVar4 = uVar10;
          puVar14 = local_150;
          local_a0 = (void *)0x0;
          *(undefined4 *)((longlong)local_150 + lVar8 * 4) = *(undefined4 *)(lVar16 + lVar7 * 0x28);
          local_a8 = *(uint *)(lVar1 + 8 + lVar7 * 0x28);
          local_98 = *(int *)(lVar1 + 0x18 + lVar7 * 0x28);
          lVar16 = (longlong)local_98;
          local_a4 = *(undefined1 *)(lVar1 + 0xc + lVar7 * 0x28);
          local_a3 = *(undefined1 *)(lVar1 + 0xd + lVar7 * 0x28);
          local_a2 = *(undefined1 *)(lVar1 + 0xe + lVar7 * 0x28);
          _Src = *(void **)(lVar1 + 0x10 + lVar7 * 0x28);
          if (local_98 == 0) {
            local_94 = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (&local_a0,local_98,0);
            ::_guard_xfg_dispatch_icall_nop(local_a0,_Src,lVar16 << 3);
          }
          local_90 = 0;
          local_88[0] = 0;
          local_88[1] = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0xffffffff;
          local_54 = 0;
          local_48 = 0;
          local_40 = 0;
          local_138 = *local_118 + lVar7 * 0x28;
          puStack_130 = &local_a8;
          TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FShaderMapFinalizeResults_&&>_>
                    (param_1 + 0x98,&local_140,&local_138,0);
          local_40 = 0;
          if (local_48 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Empty(local_88,0);
          if (local_68 != 0) {
            FMemory::Free();
          }
          if (local_88[0] != 0) {
            FMemory::Free();
          }
          if (local_a0 != (void *)0x0) {
            FMemory::Free();
          }
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
        iVar15 = uStack_100._4_4_;
      } while (uStack_100._4_4_ < (int)local_108[6]);
      local_140.s.LowPart = uVar4;
      if (((char)local_e0 != '\0') && (local_e0._1_1_ != '\0')) {
        TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_e8,(int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34),1);
      }
      if (0 < (int)local_140.s.LowPart) {
        uVar11 = (ulonglong)local_140.s.LowPart;
        puVar9 = puVar14;
        do {
          TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 0x18,*(undefined4 *)puVar9);
          puVar9 = (undefined8 *)((longlong)puVar9 + 4);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      param_2 = local_158;
      if (puVar14 != (undefined8 *)0x0) {
        FMemory::Free(puVar14);
        param_2 = local_158;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    if (0 < *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xcc)) {
      do {
        cVar2 = FUN_142752a10(param_1,param_1 + 0x98);
      } while (cVar2 != '\0');
      if (param_2 == '\0') {
        uVar17 = 0x7f7fffff;
      }
      else {
        uVar17 = *(undefined4 *)(param_1 + 0x104);
      }
      FUN_1427588f0(param_1,param_1 + 0x98,uVar17);
    }
  }
  return;
}



// FUNCTION 142757f90 FUN_142757f90 body=2384 status=ok
// SIG undefined FUN_142757f90(void)

void FUN_142757f90(longlong *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint **ppuVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  undefined *puVar15;
  uint **ppuVar16;
  longlong *plVar17;
  uint **ppuVar18;
  longlong *plVar19;
  uint uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  ulonglong *puVar28;
  longlong *local_res8;
  uint local_res10 [2];
  uint *local_res18;
  ulonglong local_res20;
  uint *local_d8;
  uint local_d0;
  int local_cc;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  int local_b0;
  int local_ac;
  ulonglong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  uint **local_70;
  ulonglong *local_68;
  longlong **local_60;
  ulonglong *local_58;
  
  iVar4 = 0;
  local_d8 = (uint *)0x0;
  local_res10[0] = 0;
  local_cc = 0;
  local_b8 = (longlong *)0x0;
  local_ac = 0;
  local_res18 = (uint *)((ulonglong)local_res18 & 0xffffffff00000000);
  if (0 < (int)param_1[1]) {
    local_a0 = (longlong *)0x0;
    local_res8 = param_1;
    iVar27 = iVar4;
    do {
      iVar23 = local_cc;
      uVar20 = local_res10[0];
      plVar17 = *(longlong **)((longlong)local_a0 + *local_res8);
      lVar5 = (**(code **)(*plVar17 + 8))(plVar17);
      if (lVar5 == 0) {
        uVar25 = (**(code **)(*plVar17 + 0x18))(plVar17);
        iVar23 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_res20 = local_res20 & 0xffffffff00000000;
        local_a8 = uVar25;
        if (0 < *(int *)(uVar25 + 0x20)) {
          local_98 = 0;
          do {
            uVar22 = local_98;
            lVar26 = (**(code **)(**(longlong **)(local_98 + *(longlong *)(uVar25 + 0x18)) + 0x10))
                               ();
            puVar1 = *(undefined8 **)(uVar25 + 0x30);
            lVar5 = 0;
            if (*(int *)(*(longlong *)(lVar26 + 0x20) + 8) == 0) {
              lVar5 = *(longlong *)(lVar26 + 0x20);
            }
            local_80 = FUN_14274c4b0(lVar5,lVar26,puVar1);
            if (local_80 == 0) {
              if (puVar1 == (undefined8 *)0x0) {
                puVar15 = &DAT_14518a874;
              }
              else {
                puVar15 = (undefined *)*puVar1;
              }
              pwVar8 = L"";
              if (puVar1 != (undefined8 *)0x0) {
                pwVar8 = L"for pipeline";
              }
              LowLevelFatalErrorHandler
                        ("Unknown",0x11ec,
                         L"Failed to compile global shader %s %s %s.  Enable \'r.ShaderDevelopmentMode\' in ConsoleVariables.ini for retries."
                         ,*(undefined8 *)(lVar5 + 0x10),pwVar8,puVar15);
              if (puVar1 == (undefined8 *)0x0) {
                puVar15 = &DAT_14518a94c;
              }
              else {
                puVar15 = (undefined *)*puVar1;
              }
              pwVar8 = L"";
              if (puVar1 != (undefined8 *)0x0) {
                pwVar8 = L"for pipeline";
              }
              FDebug::AssertFailed
                        (&DAT_14518a2fe,"Unknown",0x11ec,
                         L"Failed to compile global shader %s %s %s.  Enable \'r.ShaderDevelopmentMode\' in ConsoleVariables.ini for retries."
                         ,*(undefined8 *)(lVar5 + 0x10),pwVar8,puVar15);
            }
            else {
              uVar12 = *(uint *)(lVar26 + 0x30) >> 3;
              uVar20 = uVar12 & 0x1f;
              local_88 = CONCAT44(local_88._4_4_,uVar12) & 0xffffffff0000001f;
              if (((puVar1 == (undefined8 *)0x0) || (*(char *)((longlong)puVar1 + 0x6c) == '\0')) &&
                 (FUN_1425836d0(*(undefined8 *)(&DAT_1469f5a10 + (ulonglong)uVar20 * 8),lVar5,
                                *(undefined4 *)(lVar26 + 0x28),local_80),
                 puVar1 == (undefined8 *)0x0)) {
                TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                ::FindId(lVar26 + 0x3f8,&local_8c,0);
                if (local_8c == -1) {
                  lVar5 = 0;
                }
                else {
                  lVar5 = (longlong)local_8c * 0x20 + *(longlong *)(lVar26 + 0x3f8);
                }
                puVar7 = (ulonglong *)(lVar5 + 8);
                if (lVar5 == 0) {
                  puVar7 = (ulonglong *)0x0;
                }
                if (puVar7 != (ulonglong *)0x0) {
                  plVar17 = (longlong *)*puVar7;
                  uVar25 = 0;
                  uVar22 = (longlong)(int)puVar7[1] & 0x1fffffffffffffff;
                  if (plVar17 + (int)puVar7[1] < plVar17) {
                    uVar22 = 0;
                  }
                  plVar21 = local_b8;
                  iVar27 = local_ac;
                  if (uVar22 != 0) {
                    do {
                      lVar5 = *plVar17;
                      for (plVar13 = plVar21; plVar13 != plVar21 + iVar4; plVar13 = plVar13 + 1) {
                        if (*plVar13 == lVar5) {
                          if ((int)((longlong)plVar13 - (longlong)plVar21 >> 3) != -1)
                          goto LAB_1427583d9;
                          break;
                        }
                      }
                      local_b0 = iVar4 + 1;
                      if (iVar27 < local_b0) {
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (&local_b8,iVar4);
                        plVar21 = local_b8;
                        iVar27 = local_ac;
                      }
                      plVar21[iVar4] = lVar5;
                      iVar4 = local_b0;
LAB_1427583d9:
                      plVar17 = plVar17 + 1;
                      uVar25 = uVar25 + 1;
                    } while (uVar25 != uVar22);
                    uVar20 = (uint)local_88;
                  }
                  uVar22 = local_98;
                  iVar23 = (int)local_res20;
                }
              }
              uVar12 = local_res10[0];
              lVar5 = (longlong)(int)local_res10[0];
              for (puVar14 = local_d8; puVar14 != local_d8 + lVar5; puVar14 = puVar14 + 1) {
                if (*puVar14 == uVar20) {
                  uVar25 = local_a8;
                  if ((int)((longlong)puVar14 - (longlong)local_d8 >> 2) != -1) goto LAB_14275844e;
                  break;
                }
              }
              local_res10[0] = local_res10[0] + 1;
              local_d0 = local_res10[0];
              if (local_cc < (int)local_res10[0]) {
                TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d8,uVar12);
              }
              local_d8[lVar5] = uVar20;
              uVar25 = local_a8;
              local_res10[0] = local_d0;
            }
LAB_14275844e:
            uVar2 = local_c0;
            lVar5 = (longlong)(int)local_c0;
            iVar27 = (int)local_c0 + 1;
            local_c0 = CONCAT44(local_c0._4_4_,iVar27);
            if (local_c0._4_4_ < iVar27) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_c8,uVar2 & 0xffffffff);
            }
            iVar23 = iVar23 + 1;
            local_98 = uVar22 + 8;
            local_res20 = CONCAT44(local_res20._4_4_,iVar23);
            *(longlong *)(local_c8 + lVar5 * 8) = local_80;
          } while (iVar23 < *(int *)(uVar25 + 0x20));
          iVar27 = (int)local_res18;
        }
        lVar5 = operator_new(0x30);
        if ((lVar5 != 0) &&
           (uVar22 = FShaderPipeline::FShaderPipeline
                               (lVar5,*(undefined8 *)(uVar25 + 0x30),&local_c8), uVar22 != 0)) {
          lVar5 = (**(code **)(*(longlong *)**(undefined8 **)(uVar25 + 0x18) + 0x10))();
          local_res18 = *(uint **)(uVar25 + 0x30);
          local_70 = &local_res18;
          local_68 = &local_res20;
          local_res20 = uVar22;
          FUN_14257b080(*(longlong *)
                         (&DAT_1469f5a10 + (ulonglong)(*(uint *)(lVar5 + 0x30) >> 3 & 0x1f) * 8) +
                        0x88,&local_78,&local_70,0);
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
      }
      else {
        lVar26 = 0;
        if (*(int *)(*(longlong *)(lVar5 + 0x20) + 8) == 0) {
          lVar26 = *(longlong *)(lVar5 + 0x20);
        }
        lVar6 = FUN_14274c4b0(lVar26,lVar5,0);
        if (lVar6 == 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x11ec,
                     L"Failed to compile global shader %s %s %s.  Enable \'r.ShaderDevelopmentMode\' in ConsoleVariables.ini for retries."
                     ,*(undefined8 *)(lVar26 + 0x10),&DAT_14518a924,&DAT_14518a874);
          FDebug::AssertFailed
                    (&DAT_14518a2fe,"Unknown",0x11ec,
                     L"Failed to compile global shader %s %s %s.  Enable \'r.ShaderDevelopmentMode\' in ConsoleVariables.ini for retries."
                     ,*(undefined8 *)(lVar26 + 0x10),&DAT_14518a97c,&DAT_14518a94c);
        }
        else {
          uVar12 = *(uint *)(lVar5 + 0x30) >> 3 & 0x1f;
          local_res20 = (ulonglong)uVar12;
          FUN_1425836d0(*(undefined8 *)(&DAT_1469f5a10 + (ulonglong)uVar12 * 8),lVar26,
                        *(undefined4 *)(lVar5 + 0x28),lVar6);
          TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
          ::FindId(lVar5 + 0x3f8,&local_90,0);
          if (local_90 == -1) {
            lVar5 = 0;
          }
          else {
            lVar5 = (longlong)local_90 * 0x20 + *(longlong *)(lVar5 + 0x3f8);
          }
          puVar24 = (ulonglong *)0x0;
          puVar7 = (ulonglong *)(lVar5 + 8);
          if (lVar5 == 0) {
            puVar7 = puVar24;
          }
          if (puVar7 != (ulonglong *)0x0) {
            plVar17 = (longlong *)*puVar7;
            puVar28 = (ulonglong *)((longlong)(int)puVar7[1] & 0x1fffffffffffffff);
            if (plVar17 + (int)puVar7[1] < plVar17) {
              puVar28 = puVar24;
            }
            plVar21 = local_b8;
            iVar27 = local_ac;
            if (puVar28 != (ulonglong *)0x0) {
              do {
                lVar5 = *plVar17;
                for (plVar13 = plVar21; plVar13 != plVar21 + iVar4; plVar13 = plVar13 + 1) {
                  if (*plVar13 == lVar5) {
                    if ((int)((longlong)plVar13 - (longlong)plVar21 >> 3) != -1) goto LAB_142758149;
                    break;
                  }
                }
                local_b0 = iVar4 + 1;
                if (iVar27 < local_b0) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4)
                  ;
                  plVar21 = local_b8;
                  iVar27 = local_ac;
                }
                plVar21[iVar4] = lVar5;
                iVar4 = local_b0;
LAB_142758149:
                plVar17 = plVar17 + 1;
                puVar24 = (ulonglong *)((longlong)puVar24 + 1);
              } while (puVar24 != puVar28);
              uVar12 = (uint)local_res20;
            }
            uVar20 = local_res10[0];
            iVar23 = local_cc;
            iVar27 = (int)local_res18;
          }
          for (puVar14 = local_d8; puVar14 != local_d8 + (int)uVar20; puVar14 = puVar14 + 1) {
            if (*puVar14 == uVar12) {
              if ((int)((longlong)puVar14 - (longlong)local_d8 >> 2) != -1) goto LAB_14275852e;
              break;
            }
          }
          local_res10[0] = uVar20 + 1;
          local_d0 = local_res10[0];
          if (iVar23 < (int)local_res10[0]) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d8,uVar20);
          }
          local_d8[(int)uVar20] = uVar12;
          local_res10[0] = local_d0;
        }
      }
LAB_14275852e:
      iVar27 = iVar27 + 1;
      local_a0 = local_a0 + 1;
      local_res18 = (uint *)CONCAT44(local_res18._4_4_,iVar27);
    } while (iVar27 < (int)local_res8[1]);
    if (0 < (int)local_res10[0]) {
      uVar25 = (ulonglong)((longlong)(local_b8 + iVar4) + (7 - (longlong)local_b8)) >> 3;
      local_res18 = local_d8;
      local_98 = (ulonglong)local_res10[0];
      local_88 = uVar25;
      if (local_b8 + iVar4 < local_b8) {
        uVar25 = 0;
        local_88 = uVar25;
      }
      do {
        uVar20 = *local_res18;
        uVar22 = (ulonglong)(int)uVar20;
        local_a8 = 0;
        local_a0 = local_b8;
        local_80 = *(longlong *)(&DAT_1469f5a10 + uVar22 * 8);
        if (uVar25 != 0) {
          plVar21 = (longlong *)(local_80 + 0x88);
          plVar17 = local_b8;
          local_78 = plVar21;
          do {
            lVar5 = local_80;
            plVar19 = (longlong *)0x0;
            plVar13 = (longlong *)*plVar17;
            iVar4 = 0;
            if ((int)plVar21[1] != *(int *)((longlong)plVar21 + 0x34)) {
              if (plVar13 != (longlong *)0x0) {
                iVar4 = (int)plVar13[0xd];
              }
              plVar9 = (longlong *)plVar21[8];
              if ((longlong *)plVar21[8] == (longlong *)0x0) {
                plVar9 = plVar21 + 7;
              }
              iVar4 = *(int *)((longlong)plVar9 +
                              ((longlong)(int)plVar21[9] - 1U & (longlong)iVar4) * 4);
              if (iVar4 != -1) {
                do {
                  plVar9 = (longlong *)(*plVar21 + (longlong)iVar4 * 0x18);
                  if (*(longlong **)(*plVar21 + (longlong)iVar4 * 0x18) == plVar13) {
                    if (iVar4 != -1) goto LAB_142758713;
                    break;
                  }
                  iVar4 = (int)plVar9[2];
                } while (iVar4 != -1);
              }
            }
            plVar9 = plVar19;
LAB_142758713:
            plVar10 = plVar9 + 1;
            if (plVar9 == (longlong *)0x0) {
              plVar10 = plVar19;
            }
            if ((plVar10 == (longlong *)0x0) || (uVar22 = local_a8, *plVar10 == 0)) {
              local_c8 = 0;
              local_c0 = 0;
              local_a0 = plVar17;
              if (0 < (int)plVar13[3]) {
                lVar26 = 0;
                do {
                  ppuVar18 = (uint **)0x0;
                  local_res20 = (ulonglong)uVar20;
                  ppuVar16 = ppuVar18;
                  if (*(int *)(*(uint ***)(lVar26 + plVar13[2]) + 1) == 0) {
                    ppuVar16 = *(uint ***)(lVar26 + plVar13[2]);
                  }
                  cVar3 = (*(code *)ppuVar16[0x27])(&local_res20);
                  plVar21 = local_78;
                  uVar25 = local_88;
                  if (cVar3 == '\0') break;
                  local_68 = (ulonglong *)((ulonglong)local_68 & 0xffffffff00000000);
                  local_70 = ppuVar16;
                  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
                  ::FindId(lVar5 + 0x38,&local_res8,&local_70);
                  ppuVar16 = ppuVar18;
                  if ((int)local_res8 != -1) {
                    ppuVar16 = (uint **)((longlong)(int)local_res8 * 0x20 +
                                        *(longlong *)(lVar5 + 0x38));
                  }
                  ppuVar11 = ppuVar16 + 2;
                  if (ppuVar16 == (uint **)0x0) {
                    ppuVar11 = ppuVar18;
                  }
                  if (ppuVar11 != (uint **)0x0) {
                    ppuVar18 = (uint **)*ppuVar11;
                  }
                  lVar6 = (longlong)(int)local_c0;
                  iVar4 = (int)local_c0 + 1;
                  local_c0 = CONCAT44(local_c0._4_4_,iVar4);
                  if (local_c0._4_4_ < iVar4) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_c8);
                  }
                  uVar12 = (int)plVar19 + 1;
                  plVar19 = (longlong *)(ulonglong)uVar12;
                  lVar26 = lVar26 + 8;
                  *(uint ***)(local_c8 + lVar6 * 8) = ppuVar18;
                  plVar21 = local_78;
                  uVar25 = local_88;
                } while ((int)uVar12 < (int)plVar13[3]);
              }
              plVar17 = local_a0;
              uVar22 = local_a8;
              lVar5 = operator_new(0x30);
              if (lVar5 == 0) {
                local_a8 = 0;
              }
              else {
                local_a8 = FShaderPipeline::FShaderPipeline(lVar5,plVar13,&local_c8);
              }
              local_60 = &local_a0;
              local_58 = &local_a8;
              local_a0 = plVar13;
              FUN_14257b080(plVar21,local_res10,&local_60,0);
              if (local_c8 != 0) {
                FMemory::Free();
              }
            }
            plVar17 = plVar17 + 1;
            local_a8 = uVar22 + 1;
          } while (local_a8 != uVar25);
          uVar22 = (ulonglong)*local_res18;
          local_a0 = plVar17;
        }
        FUN_14275b940(uVar22 & 0xffffffff);
        local_res18 = local_res18 + 1;
        local_98 = local_98 - 1;
      } while (local_98 != 0);
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_d8 != (uint *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1427588f0 FUN_1427588f0 body=3573 status=ok
// SIG undefined FUN_1427588f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1427588f0(undefined8 param_1,longlong *param_2,float param_3)

{
  void *pvVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  int *piVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined2 *puVar23;
  undefined1 *puVar24;
  int iVar25;
  longlong *plVar26;
  int *piVar27;
  undefined1 auStack_358 [32];
  undefined2 *local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  uint uStack_310;
  int iStack_30c;
  uint uStack_308;
  int iStack_304;
  int local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  void *local_2d8;
  int local_2d0;
  undefined4 local_2cc;
  longlong *local_2c8;
  longlong *local_2c0;
  int local_2b8;
  int local_2b4;
  undefined8 *local_2b0;
  undefined8 *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong *local_290;
  int local_288;
  uint uStack_284;
  uint *puStack_280;
  undefined4 local_278;
  int iStack_274;
  int iStack_270;
  int iStack_26c;
  void *local_268;
  int local_260;
  undefined4 local_25c;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 uStack_240;
  longlong *plStack_238;
  undefined1 auStack_230 [16];
  undefined8 uStack_220;
  longlong *local_218;
  undefined8 uStack_210;
  undefined *local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined8 *local_1e8;
  undefined2 local_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  uint *local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  longlong *local_1a8;
  undefined2 local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  undefined1 local_190 [8];
  undefined8 local_188;
  longlong **local_180;
  undefined8 *local_178;
  longlong **local_170;
  undefined8 **local_168;
  longlong **local_160;
  undefined8 **local_158;
  longlong local_150 [2];
  longlong local_140 [6];
  undefined1 local_110 [16];
  longlong local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  local_d0._0_4_ = 0;
  puStack_280 = (uint *)(param_2 + 2);
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  iVar25 = (int)param_2[5];
  local_2c0 = (longlong *)0x0;
  local_300 = 0;
  local_2b4 = 0;
  local_288 = 0;
  uStack_284 = 1;
  iStack_274 = 0;
  iStack_270 = 0;
  if (iVar25 != 0) {
    puVar22 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar22 = puStack_280;
    }
    uVar6 = *puVar22;
    while (uVar6 == 0) {
      lVar14 = (longlong)local_288;
      iStack_270 = iStack_270 + 0x20;
      iVar11 = local_288 + 1;
      bVar2 = (int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_288;
      local_288 = iVar11;
      if (bVar2) goto LAB_142758a7c;
      uVar6 = puVar22[lVar14 + 1];
    }
    uStack_284 = -uVar6 & uVar6;
    iVar11 = 0x1f;
    if (uStack_284 != 0) {
      for (; uStack_284 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_284 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    iStack_274 = (iStack_270 - iVar11) + 0x1f;
    if (iVar25 < iStack_274) {
LAB_142758a7c:
      iStack_274 = iVar25;
    }
  }
  local_278 = 0xffffffff;
  uStack_1c0 = CONCAT44(iStack_274,0xffffffff);
  auVar3._8_4_ = iStack_270;
  auVar3._0_8_ = uStack_1c0;
  auVar3._12_4_ = iStack_26c;
  uStack_320 = (longlong *)CONCAT44(uStack_284,local_288);
  uStack_310 = 0xffffffff;
  iStack_30c = iStack_274;
  uStack_308 = iStack_270;
  iStack_304 = iStack_26c;
  local_1a0 = 0;
  uStack_220._0_4_ = SUB84(param_2,0);
  uStack_220._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_1b8._8_4_ = (undefined4)uStack_220;
  local_1b8._0_8_ = auVar3._8_8_;
  local_1b8._12_4_ = uStack_220._4_4_;
  iVar25 = iStack_274;
  local_328 = param_2;
  local_2e0 = param_3;
  local_2c8 = param_2;
  local_250 = param_1;
  uStack_220 = param_2;
  local_1d8 = param_2;
  uStack_1d0 = uStack_320;
  local_1c8 = puStack_280;
  local_1a8 = param_2;
  uStack_318 = puStack_280;
  if (iStack_274 < (int)param_2[5]) {
    do {
      plVar26 = local_1d8;
      puVar16 = (undefined8 *)0x0;
      uStack_320 = (longlong *)&DAT_146533c60;
      local_2b0 = (undefined8 *)0x0;
      local_328 = (longlong *)0x100000000;
      uStack_318._4_4_ = 0;
      uStack_310 = 0;
      if (DAT_146533c78 != 0) {
        puVar22 = DAT_146533c70;
        if (DAT_146533c70 == (uint *)0x0) {
          puVar22 = (uint *)&DAT_146533c60;
        }
        uVar6 = *puVar22;
        puVar9 = puVar16;
        puVar20 = puVar16;
        while (uVar6 == 0) {
          iVar11 = (int)puVar9;
          uStack_310 = (int)puVar20 + 0x20;
          puVar20 = (undefined8 *)(ulonglong)uStack_310;
          puVar9 = (undefined8 *)(ulonglong)(iVar11 + 1U);
          local_328._4_4_ = (uint)((ulonglong)local_328 >> 0x20);
          local_328 = (longlong *)CONCAT44(local_328._4_4_,iVar11 + 1U);
          if ((int)(DAT_146533c78 + -1 + (DAT_146533c78 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11)
          goto LAB_142758bd2;
          uVar6 = puVar22[(longlong)iVar11 + 1];
        }
        uVar6 = -uVar6 & uVar6;
        iVar11 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        local_328 = (longlong *)CONCAT44(uVar6,(uint)local_328);
        if (uVar6 == 0) {
          iVar11 = 0x20;
        }
        else {
          iVar11 = 0x1f - iVar11;
        }
        uStack_318._4_4_ = ((int)puVar20 - iVar11) + 0x1f;
        if (DAT_146533c78 < uStack_318._4_4_) {
LAB_142758bd2:
          uStack_318._4_4_ = DAT_146533c78;
        }
      }
      uStack_318._0_4_ = 0xffffffff;
      uStack_200 = CONCAT44(uStack_318._4_4_,0xffffffff);
      auStack_230._8_4_ = uStack_310;
      auStack_230._0_8_ = uStack_200;
      auStack_230._12_4_ = iStack_30c;
      local_248 = &DAT_146533c50;
      uStack_240 = local_328;
      plStack_238 = (longlong *)&DAT_146533c60;
      local_1e8 = &DAT_146533c50;
      local_1e0 = 0;
      local_218 = &DAT_146533c50;
      uStack_210 = local_328;
      local_208 = &DAT_146533c60;
      local_110._8_4_ = 0x46533c50;
      local_110._0_8_ = auStack_230._8_8_;
      local_110._12_4_ = 1;
      local_1f8._8_4_ = 0x46533c50;
      local_1f8._0_8_ = auStack_230._8_8_;
      local_1f8._12_4_ = 1;
      if (uStack_318._4_4_ < DAT_146533c78) {
        lVar14 = (longlong)iVar25 * 0x80;
        local_2a0 = lVar14;
        iVar11 = uStack_318._4_4_;
        do {
          plVar10 = local_218;
          if (*(int *)(*(longlong *)((longlong)iVar11 * 0x20 + *local_218) + 0x358) ==
              *(int *)(lVar14 + *plVar26)) {
            puVar16 = *(undefined8 **)((longlong)iVar11 * 0x20 + *local_218);
            local_2b0 = puVar16;
            if (puVar16 != (undefined8 *)0x0) {
              FMaterialShaderMap::AddRef();
            }
            puVar9 = (undefined8 *)((longlong)iVar11 * 0x20 + *plVar10 + 8);
            break;
          }
          uStack_200 = CONCAT44(uStack_200._4_4_,(uint)uStack_200 & ~uStack_210._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
          puVar9 = puVar16;
          iVar11 = uStack_200._4_4_;
        } while (uStack_200._4_4_ < *(int *)(local_208 + 0x18));
        if (((char)local_1e0 != '\0') && (local_1e0._1_1_ != '\0')) {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_1e8,
                              *(int *)(local_1e8 + 1) - *(int *)((longlong)local_1e8 + 0x34),1);
        }
        if ((puVar16 == (undefined8 *)0x0) || (puVar9 == (undefined8 *)0x0)) goto LAB_14275925d;
        local_2d0 = *(int *)(puVar9 + 1);
        lVar17 = (longlong)local_2d0;
        pvVar1 = (void *)*puVar9;
        local_2f0 = (longlong *)0x0;
        local_2e8 = 0;
        lVar18 = *plVar26;
        local_2d8 = (void *)0x0;
        plVar26 = (longlong *)(lVar18 + 0x10 + lVar14);
        local_298 = lVar18;
        local_290 = plVar26;
        if (local_2d0 == 0) {
          local_2cc = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_2d8,local_2d0,0);
          _guard_xfg_dispatch_icall_nop(local_2d8,pvVar1,lVar17 << 3);
        }
        uVar12 = 0;
        bVar2 = true;
        uVar19 = uVar12;
        if ((int)plVar26[1] < 1) {
LAB_142758e3f:
          lVar14 = local_2a0;
          local_338 = (undefined2 *)(local_2a0 + 0x28 + lVar18);
          cVar5 = FUN_14259d2b0(puVar16,plVar26,local_2a0 + 0x20 + lVar18);
          if (cVar5 != '\0') goto LAB_142758e74;
        }
        else {
          do {
            plVar10 = *(longlong **)(uVar19 + *plVar26);
            if ((bVar2) && (*(char *)((longlong)plVar10 + 0x15) != '\0')) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            lVar14 = (**(code **)(*plVar10 + 0x10))(plVar10);
            if (lVar14 == 0) {
              lVar14 = (**(code **)(*plVar10 + 0x20))();
              iVar25 = 0;
              plVar26 = local_290;
              if (0 < *(int *)(lVar14 + 0x20)) {
                lVar18 = *(longlong *)(lVar14 + 0x18);
                lVar17 = 0;
                do {
                  uVar7 = (**(code **)(**(longlong **)(lVar18 + lVar17) + 0x10))();
                  cVar5 = CheckSingleJob(uVar7,&local_2d8,&local_2f0);
                  lVar18 = *(longlong *)(lVar14 + 0x18);
                  if ((*(char *)(*(longlong *)(lVar18 + lVar17) + 0x15) == '\0') || (cVar5 == '\0'))
                  {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  iVar25 = iVar25 + 1;
                  lVar17 = lVar17 + 8;
                  plVar26 = local_290;
                } while (iVar25 < *(int *)(lVar14 + 0x20));
              }
            }
            else {
              cVar5 = CheckSingleJob(lVar14,&local_2d8,&local_2f0);
              if ((cVar5 == '\0') || (bVar2 == false)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
            }
            uVar6 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar6;
            uVar19 = uVar19 + 8;
          } while ((int)uVar6 < (int)plVar26[1]);
          lVar14 = local_2a0;
          lVar18 = local_298;
          if (bVar2 != false) goto LAB_142758e3f;
LAB_142758e74:
          iVar25 = local_300;
          lVar17 = (longlong)local_300;
          *(uint *)((longlong)puVar16 + 0x364) = *(uint *)((longlong)puVar16 + 0x364) & 0xfffffffb;
          *(uint *)((longlong)puVar16 + 0x364) =
               *(uint *)((longlong)puVar16 + 0x364) | (uint)bVar2 << 2;
          local_300 = local_300 + 1;
          local_2b8 = local_300;
          if (local_2b4 < local_300) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_2c0,iVar25);
          }
          local_2c0[lVar17] = (longlong)puVar16;
          local_300 = local_2b8;
          FMaterialShaderMap::AddRef(puVar16);
          TSet<TTuple<TRefCountPtr<FMaterialShaderMap>,TArray<FMaterial_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterialShaderMap>,TArray<FMaterial_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::Remove(&DAT_146533c50,&local_2b0);
          iVar25 = 0;
          if (0 < local_2d0) {
            local_258 = 0;
            do {
              iVar11 = 0;
              local_2f8 = *(longlong **)((longlong)local_2d8 + local_258);
              local_2a8 = puVar16;
              piVar8 = (int *)(**(code **)(*local_2f8 + 0x3a0))(local_2f8,&local_288);
              if (((piVar8[3] == *(int *)((longlong)puVar16 + 0x10c) &&
                   piVar8[2] == *(int *)(puVar16 + 0x21)) &&
                  piVar8[1] == *(int *)((longlong)puVar16 + 0x104)) &&
                  *piVar8 == *(int *)(puVar16 + 0x20)) {
                if (bVar2 == false) {
                  local_180 = &local_2f8;
                  local_188 = 0;
                  local_178 = &local_188;
                  TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
                            (&local_f8,local_198,&local_180);
                  cVar5 = (**(code **)(*local_2f8 + 0x2d8))();
                  if (cVar5 != '\0') {
                    puVar9 = (undefined8 *)(**(code **)(*local_2f8 + 0x388))(local_2f8,local_150);
                    if (*(int *)(puVar9 + 1) == 0) {
                      puVar23 = &DAT_143f3eda8;
                    }
                    else {
                      puVar23 = (undefined2 *)*puVar9;
                    }
                    LowLevelFatalErrorHandler
                              ("Unknown",0x82c,L"Failed to compile default material %s!",puVar23);
                    if (local_150[0] != 0) {
                      FMemory::Free();
                    }
                    puVar9 = (undefined8 *)(**(code **)(*local_2f8 + 0x388))(local_2f8,local_140);
                    if (*(int *)(puVar9 + 1) == 0) {
                      local_338 = &DAT_143f3eda8;
                    }
                    else {
                      local_338 = (undefined2 *)*puVar9;
                    }
                    FDebug::AssertFailed(&DAT_14518a183,"Unknown",0x82c);
                    if (local_140[0] != 0) {
                      FMemory::Free();
                    }
                  }
                  if (0 < (int)local_2e8) {
                    lVar14 = 0;
                    do {
                      local_268 = (void *)0x0;
                      local_260 = *(int *)((longlong)local_2f0 + lVar14 + 8);
                      lVar18 = (longlong)local_260;
                      pvVar1 = *(void **)((longlong)local_2f0 + lVar14);
                      if (local_260 == 0) {
                        local_25c = 0;
                      }
                      else {
                        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_268,local_260,0);
                        _guard_xfg_dispatch_icall_nop(local_268,pvVar1,lVar18 * 2);
                      }
                      FString::ReplaceInline(&local_268,L"error ");
                      if (local_268 != (void *)0x0) {
                        FMemory::Free();
                      }
                      iVar11 = iVar11 + 1;
                      lVar14 = lVar14 + 0x10;
                      puVar16 = local_2b0;
                    } while (iVar11 < (int)local_2e8);
                  }
                }
                else {
                  cVar5 = FUN_14259b2e0(local_2a8,local_2f8,1);
                  if (cVar5 != '\0') {
                    local_170 = &local_2f8;
                    local_168 = &local_2a8;
                    TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
                              (&local_f8,local_194,&local_170);
                    if (*(char *)(lVar14 + 0xd + lVar18) != '\0') {
                      local_160 = &local_2f8;
                      local_158 = &local_2a8;
                      TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
                                (&local_a8,local_190,&local_160);
                    }
                  }
                }
              }
              iVar25 = iVar25 + 1;
              local_258 = local_258 + 8;
              lVar14 = local_2a0;
              plVar26 = local_290;
              lVar18 = local_298;
            } while (iVar25 < local_2d0);
          }
          uVar12 = 0;
          uVar19 = uVar12;
          if (0 < (int)plVar26[1]) {
            do {
              puVar9 = *(undefined8 **)(uVar19 + *plVar26);
              if (puVar9 != (undefined8 *)0x0) {
                (**(code **)*puVar9)(puVar9,1);
              }
              uVar6 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar6;
              uVar19 = uVar19 + 8;
            } while ((int)uVar6 < (int)plVar26[1]);
          }
          TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
          ::Remove(local_2c8,*(undefined4 *)(puVar16 + 0x6b));
        }
        if (0.0 <= local_2e0) {
          if (local_2d8 != (void *)0x0) {
            FMemory::Free();
          }
          plVar26 = local_2f0;
          for (iVar25 = (int)local_2e8; iVar25 != 0; iVar25 = iVar25 + -1) {
            if (*plVar26 != 0) {
              FMemory::Free();
            }
            plVar26 = plVar26 + 2;
          }
          if (local_2f0 != (longlong *)0x0) {
            FMemory::Free(local_2f0);
          }
          goto LAB_14275920e;
        }
        if (local_2d8 != (void *)0x0) {
          FMemory::Free();
        }
        plVar26 = local_2f0;
        for (iVar25 = (int)local_2e8; iVar25 != 0; iVar25 = iVar25 + -1) {
          if (*plVar26 != 0) {
            FMemory::Free();
          }
          plVar26 = plVar26 + 2;
        }
        if (local_2f0 != (longlong *)0x0) {
          FMemory::Free(local_2f0);
        }
        FUN_14259f650(puVar16);
LAB_142759380:
        if (((char)local_1a0 != '\0') && (local_1a0._1_1_ != '\0')) {
          TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_1a8,(int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34),1);
        }
        break;
      }
LAB_14275925d:
      plVar10 = local_2c8;
      if (*(int *)((longlong)iVar25 * 0x80 + *plVar26) == 0) {
        piVar8 = (int *)0x0;
        if ((int)local_2c8[1] != *(int *)((longlong)local_2c8 + 0x34)) {
          plVar26 = (longlong *)local_2c8[8];
          if ((longlong *)local_2c8[8] == (longlong *)0x0) {
            plVar26 = local_2c8 + 7;
          }
          iVar25 = (int)*plVar26;
          if (iVar25 != -1) {
            do {
              piVar15 = (int *)(*local_2c8 + (longlong)iVar25 * 0x80);
              if (*piVar15 == 0) {
                if (iVar25 != -1) goto LAB_1427592d1;
                break;
              }
              iVar25 = piVar15[0x1e];
            } while (iVar25 != -1);
          }
        }
        piVar15 = piVar8;
LAB_1427592d1:
        piVar27 = piVar15 + 2;
        if (piVar15 == (int *)0x0) {
          piVar27 = piVar8;
        }
        if (piVar27 != (int *)0x0) {
          FUN_142757f90(piVar27 + 2);
          piVar15 = piVar8;
          if (0 < piVar27[4]) {
            do {
              puVar9 = *(undefined8 **)((longlong)piVar15 + *(longlong *)(piVar27 + 2));
              if (puVar9 != (undefined8 *)0x0) {
                (**(code **)*puVar9)(puVar9,1);
              }
              uVar6 = (int)piVar8 + 1;
              piVar8 = (int *)(ulonglong)uVar6;
              piVar15 = piVar15 + 2;
            } while ((int)uVar6 < piVar27[4]);
          }
          TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
          ::Remove(plVar10,0);
        }
      }
LAB_14275920e:
      if (puVar16 != (undefined8 *)0x0) {
        FUN_14259f650(puVar16);
      }
      uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0 & ~uStack_1d0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d0);
      iVar25 = uStack_1c0._4_4_;
      if ((int)local_1c8[6] <= uStack_1c0._4_4_) goto LAB_142759380;
    } while( true );
  }
  uVar7 = local_250;
  plVar26 = local_2c0;
  iVar25 = local_300;
  puVar13 = (undefined1 *)0x0;
  if (0 < (int)local_f0 - local_c4) {
    local_328._0_4_ = 0;
    local_328._4_4_ = 1;
    plStack_238 = (longlong *)local_e8;
    uStack_318._4_4_ = 0;
    uStack_310 = 0;
    if ((int)local_d0 != 0) {
      puVar24 = local_e8;
      if (local_d8 != 0) {
        puVar24 = puVar13;
      }
      uVar6 = *(uint *)((ulonglong)puVar24 | local_d8);
      puVar21 = puVar13;
      while (uVar6 == 0) {
        iVar11 = (int)puVar13;
        uStack_310 = (int)puVar21 + 0x20;
        puVar21 = (undefined1 *)(ulonglong)uStack_310;
        local_328._0_4_ = iVar11 + 1;
        puVar13 = (undefined1 *)(ulonglong)(uint)local_328;
        uStack_318._4_4_ = (int)local_d0;
        if ((int)((int)local_d0 + -1 + ((int)local_d0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11)
        goto LAB_14275949b;
        uVar6 = ((uint *)((ulonglong)puVar24 | local_d8))[(longlong)iVar11 + 1];
      }
      local_328._4_4_ = -uVar6 & uVar6;
      iVar11 = 0x1f;
      if (local_328._4_4_ != 0) {
        for (; local_328._4_4_ >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      if (local_328._4_4_ == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      uStack_318._4_4_ = (uStack_310 - iVar11) + 0x1f;
      if ((int)local_d0 < uStack_318._4_4_) {
        uStack_318._4_4_ = (int)local_d0;
      }
    }
LAB_14275949b:
    local_248 = &local_f8;
    uStack_240._0_4_ = (uint)local_328;
    uStack_240._4_4_ = local_328._4_4_;
    auStack_230._4_4_ = uStack_318._4_4_;
    auStack_230._0_4_ = 0xffffffff;
    auStack_230._8_4_ = uStack_310;
    auStack_230._12_4_ = iStack_30c;
    uStack_320._0_4_ = (uint)local_328;
    uStack_320._4_4_ = local_328._4_4_;
    uStack_308 = uStack_310;
    iStack_304 = iStack_30c;
    uStack_310 = 0xffffffff;
    iStack_30c = uStack_318._4_4_;
    bVar2 = uStack_318._4_4_ < (int)local_d0;
    local_328 = local_248;
    uStack_318 = (uint *)plStack_238;
    if (bVar2) {
      do {
        lVar14 = *(longlong *)(*local_328 + (longlong)iStack_30c * 0x18);
        lVar18 = *(longlong *)(*local_328 + 8 + (longlong)iStack_30c * 0x18);
        lVar17 = *(longlong *)(lVar14 + 8);
        *(longlong *)(lVar14 + 8) = lVar18;
        if (lVar18 != 0) {
          FMaterialShaderMap::AddRef();
        }
        if (lVar17 != 0) {
          FUN_14259f650(lVar17);
        }
        uStack_310 = uStack_310 & ~uStack_320._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_320);
      } while (iStack_30c < *(int *)((longlong)uStack_318 + 0x18));
    }
    plVar10 = (longlong *)GetRendererModule();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0xa8))(plVar10);
    local_328 = (longlong *)0x100000000;
    uStack_318._0_4_ = 0xffffffff;
    uStack_320 = plVar10 + 2;
    uStack_318._4_4_ = 0;
    uStack_310 = 0;
    if ((int)plVar10[5] != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_328);
    }
    iVar11 = uStack_318._4_4_;
    uVar6 = (uint)uStack_318;
    plVar4 = uStack_320;
    auStack_230._4_4_ = uStack_318._4_4_;
    auStack_230._0_4_ = (uint)uStack_318;
    auStack_230._8_4_ = uStack_310;
    auStack_230._12_4_ = iStack_30c;
    uStack_240 = local_328;
    plStack_238 = uStack_320;
    uStack_320 = local_328;
    uStack_308 = uStack_310;
    iStack_304 = iStack_30c;
    uStack_318._0_4_ = (uint)plVar4;
    uStack_318._4_4_ = (int)((ulonglong)plVar4 >> 0x20);
    uStack_310 = uVar6;
    iStack_30c = iVar11;
    local_328 = plVar10;
    local_248 = plVar10;
    if (iVar11 < (int)plVar4[3]) {
      do {
        plVar10 = *(longlong **)(*local_328 + (longlong)iStack_30c * 0x10);
        (**(code **)(*plVar10 + 0x160))(plVar10,&local_a8);
        uStack_310 = uStack_310 & ~uStack_320._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_320);
      } while (iStack_30c < *(int *)(CONCAT44(uStack_318._4_4_,(uint)uStack_318) + 0x18));
    }
    FUN_142759900(uVar7,&local_f8);
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  local_b0 = 0;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_f8);
  plVar10 = plVar26;
  for (; iVar25 != 0; iVar25 = iVar25 + -1) {
    if (*plVar10 != 0) {
      FUN_14259f650();
    }
    plVar10 = plVar10 + 1;
  }
  if (plVar26 != (longlong *)0x0) {
    FMemory::Free(plVar26);
  }
  return;
}



// FUNCTION 1427596f0 FUN_1427596f0 body=112 status=ok
// SIG undefined FUN_1427596f0(void)

void FUN_1427596f0(longlong param_1)

{
  longlong local_res8 [4];
  undefined1 *local_18;
  longlong *plStack_10;
  
  if (*(int *)(param_1 + 0xf0) != 0) {
    plStack_10 = local_res8;
    local_18 = &LAB_142748060;
    local_res8[0] = param_1 + 0xe8;
    FUN_1406a7b10(*(int *)(param_1 + 0xf0),&local_18,0);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      FUN_140957580(param_1 + 0xe8,0);
    }
  }
  return;
}



// FUNCTION 142759760 FUN_142759760 body=100 status=ok
// SIG undefined FUN_142759760(void)

float * FUN_142759760(undefined4 param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  pfVar2 = (float *)FUN_1427633e0(param_1,local_18);
  fVar4 = pfVar2[3];
  if (fVar4 == 0.0) {
    fVar4 = 0.0001;
  }
  fVar3 = 1.0 / fVar4;
  param_2[3] = fVar4;
  fVar4 = pfVar2[1];
  fVar1 = pfVar2[2];
  *param_2 = fVar3 * *pfVar2;
  param_2[1] = fVar3 * fVar4;
  param_2[2] = fVar3 * fVar1;
  return param_2;
}



// FUNCTION 1427597d0 ProjectWorldToScreen body=292 status=ok
// SIG undefined ProjectWorldToScreen(void)

ulonglong FSceneView::ProjectWorldToScreen
                    (float *param_1,int *param_2,float *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong in_RAX;
  float fVar5;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar5 = param_3[0xf] * 1.0 + fVar3 * param_3[0xb] + fVar2 * param_3[7] + fVar1 * param_3[3];
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    iVar4 = param_2[3] - param_2[1];
    *param_4 = CONCAT44((0.5 - (param_3[0xd] * 1.0 + fVar3 * param_3[9] +
                               fVar2 * param_3[5] + fVar1 * param_3[1]) * fVar5 * 0.5) *
                        (float)iVar4 + (float)param_2[1],
                        ((param_3[0xc] * 1.0 + fVar3 * param_3[8] +
                         fVar2 * param_3[4] + fVar1 * *param_3) * fVar5 + 1.0) * 0.5 *
                        (float)(param_2[2] - *param_2) + (float)*param_2);
    return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142759900 FUN_142759900 body=1133 status=ok
// SIG undefined FUN_142759900(void)

void FUN_142759900(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  ulonglong local_c0;
  int local_b8;
  longlong local_b0;
  undefined8 local_a8;
  int local_a0;
  uint uStack_9c;
  uint *puStack_98;
  undefined4 local_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  longlong *local_80;
  undefined8 uStack_78;
  uint *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar14 = 0;
  iVar17 = 0;
  puVar18 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = -1;
  uVar7 = FUN_1429f11d0();
  FUN_1417a5560(uVar7,&local_c8,1,0x10,0);
  uVar12 = local_c0 & 0xffffffff;
  do {
    local_b8 = local_b8 + 1;
    lVar13 = local_c8;
    if ((int)local_c0 <= local_b8) break;
  } while (*(longlong *)(local_c8 + (longlong)local_b8 * 8) == 0);
  do {
    do {
      lVar5 = local_a8;
      if ((local_b8 < 0) || ((int)uVar12 <= local_b8)) {
        puVar19 = puVar18;
        if (lVar13 != 0) {
          FMemory::Free(lVar13);
        }
        for (; iVar17 != 0; iVar17 = iVar17 + -1) {
          plVar10 = (longlong *)*puVar19;
          plVar8 = (longlong *)*plVar10;
          if (((plVar8 != (longlong *)0x0) && ((*(byte *)(plVar8 + 0x17) & 2) == 0)) &&
             ((*(byte *)(plVar8 + 0x17) & 1) != 0)) {
            (**(code **)(*plVar8 + 0x2e8))(plVar8);
            plVar10 = (longlong *)*puVar19;
          }
          FMemory::Free(plVar10);
          puVar19 = puVar19 + 1;
        }
        local_d0 = 0;
        iVar17 = local_d0;
        iVar11 = 0;
        puVar19 = puVar18;
        if (iVar14 != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_d8,0);
          puVar18 = local_d8;
          iVar17 = local_d0;
          iVar11 = local_cc;
          puVar19 = local_d8;
        }
        for (; iVar17 != 0; iVar17 = iVar17 + -1) {
          plVar10 = (longlong *)*puVar18;
          plVar8 = (longlong *)*plVar10;
          if (((plVar8 != (longlong *)0x0) && ((*(byte *)(plVar8 + 0x17) & 2) == 0)) &&
             ((*(byte *)(plVar8 + 0x17) & 1) != 0)) {
            (**(code **)(*plVar8 + 0x2e8))(plVar8);
            plVar10 = (longlong *)*puVar18;
          }
          FMemory::Free(plVar10);
          puVar18 = puVar18 + 1;
        }
        local_d0 = 0;
        if (iVar11 != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_d8,0);
          puVar19 = local_d8;
        }
        if (puVar19 != (undefined8 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_b0 != 0) {
          FMemory::Free();
        }
        return;
      }
      plVar10 = *(longlong **)(lVar13 + (longlong)local_b8 * 8);
      if ((*(byte *)(plVar10 + 0x17) & 2) != 0) {
        uVar15 = local_a8._4_4_;
        local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
        if ((lVar5 < 0) && (uVar15 != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_b0,0);
        }
        bVar4 = false;
        (**(code **)(*plVar10 + 0x6a0))(plVar10,&local_b0);
        if (0 < (int)local_a8) {
          iVar11 = (int)param_2[5];
          puStack_98 = (uint *)(param_2 + 2);
          uStack_9c = 1;
          uVar15 = 0;
          local_a0 = 0;
          uStack_8c = 0;
          if (iVar11 != 0) {
            puVar16 = (uint *)param_2[4];
            if ((uint *)param_2[4] == (uint *)0x0) {
              puVar16 = puStack_98;
            }
            uVar1 = *puVar16;
            local_a0 = 0;
            while (uVar1 == 0) {
              lVar13 = (longlong)local_a0;
              uVar15 = uVar15 + 0x20;
              iVar9 = local_a0 + 1;
              uStack_8c = (ulonglong)uVar15 << 0x20;
              bVar3 = (int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_a0;
              local_a0 = iVar9;
              if (bVar3) goto LAB_142759aaf;
              uVar1 = puVar16[lVar13 + 1];
            }
            uStack_9c = -uVar1 & uVar1;
            iVar9 = 0x1f;
            if (uStack_9c != 0) {
              for (; uStack_9c >> iVar9 == 0; iVar9 = iVar9 + -1) {
              }
            }
            if (uStack_9c == 0) {
              iVar9 = 0x20;
            }
            else {
              iVar9 = 0x1f - iVar9;
            }
            iVar9 = (uVar15 - iVar9) + 0x1f;
            uStack_8c._4_4_ = (undefined4)((ulonglong)uStack_8c >> 0x20);
            uStack_8c = CONCAT44(uStack_8c._4_4_,iVar9);
            if (iVar11 < iVar9) {
LAB_142759aaf:
              uStack_8c = CONCAT44(uStack_8c._4_4_,iVar11);
            }
          }
          local_90 = 0xffffffff;
          uStack_78 = CONCAT44(uStack_9c,local_a0);
          uStack_40 = 0xffffffff;
          iStack_3c = (int)uStack_8c;
          uStack_38 = uStack_8c._4_4_;
          uStack_34 = uStack_84;
          uStack_68 = CONCAT44((int)uStack_8c,0xffffffff);
          local_60 = uStack_8c._4_4_;
          uStack_5c = uStack_84;
          iVar9 = (int)uStack_8c;
          local_80 = param_2;
          local_70 = puStack_98;
          local_58 = param_2;
          uStack_50 = uStack_78;
          puStack_48 = puStack_98;
          if ((int)uStack_8c < iVar11) {
            do {
              plVar8 = (longlong *)
                       (**(code **)(**(longlong **)(*local_80 + (longlong)iVar9 * 0x18) + 0x330))();
              if (plVar8 != (longlong *)0x0) {
                iVar14 = 0;
                if (0 < (int)local_a8) {
                  lVar13 = 0;
                  iVar11 = (int)local_a8;
                  do {
                    plVar2 = *(longlong **)(lVar13 + local_b0);
                    if (plVar2 != (longlong *)0x0) {
                      if ((plVar2 == plVar8) ||
                         (cVar6 = (**(code **)(*plVar2 + 0x2a0))(plVar2,plVar8), cVar6 != '\0')) {
                        bVar4 = true;
                        break;
                      }
                      iVar11 = (int)local_a8;
                    }
                    iVar14 = iVar14 + 1;
                    lVar13 = lVar13 + 8;
                  } while (iVar14 < iVar11);
                }
              }
              uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68 & ~uStack_78._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_78);
              iVar9 = uStack_68._4_4_;
            } while (uStack_68._4_4_ < (int)local_70[6]);
            iVar14 = local_cc;
            if (bVar4) {
              plVar8 = (longlong *)FMemory::Malloc(8);
              lVar13 = (longlong)iVar17;
              local_d0 = iVar17 + 1;
              if (local_cc < local_d0) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,iVar17);
                puVar18 = local_d8;
              }
              iVar14 = local_cc;
              iVar17 = local_d0;
              puVar18[lVar13] = plVar8;
              if (plVar8 != (longlong *)0x0) {
                if ((*(byte *)(plVar10 + 0x17) & 3) == 3) {
                  (**(code **)(*plVar10 + 0x300))(plVar10);
                  *plVar8 = (longlong)plVar10;
                }
                else {
                  *plVar8 = 0;
                }
              }
            }
          }
        }
        uVar12 = local_c0 & 0xffffffff;
        lVar13 = local_c8;
      }
      local_b8 = local_b8 + 1;
    } while ((int)uVar12 <= local_b8);
    do {
      if (*(longlong *)(lVar13 + (longlong)local_b8 * 8) != 0) break;
      local_b8 = local_b8 + 1;
    } while (local_b8 < (int)uVar12);
  } while( true );
}



// FUNCTION 142759d70 FUN_142759d70 body=635 status=ok
// SIG undefined FUN_142759d70(void)

void FUN_142759d70(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong local_res8;
  undefined8 local_38 [2];
  
  plVar5 = (longlong *)operator_new(0x30);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar3 = param_1[9];
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[3] = -1;
    plVar5[4] = -1;
    *(undefined4 *)(plVar5 + 5) = 0xffffffff;
    *(undefined2 *)((longlong)plVar5 + 0x2c) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x2e) = 0;
    plVar5[2] = *param_3;
    if ((*(int *)(DAT_146b095c8 + 4) == -1) ||
       (*(int *)(lVar3 + 0x1c) < *(int *)(DAT_146b095c8 + 4))) {
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (*(int *)(lVar3 + 0x10) == 0) {
        (**(code **)(*DAT_146ab6358 + 0x670))
                  (DAT_146ab6358,&local_res8,&DAT_146ab6e78,*(undefined4 *)(lVar3 + 0x18));
      }
      else {
        lVar4 = *(longlong *)(lVar3 + 8);
        local_res8 = *(longlong *)(lVar4 + -8 + (longlong)*(int *)(lVar3 + 0x10) * 8);
        *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar3 + 0x10) * 8 + -8) = 0;
        TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
                  ((longlong *)(lVar3 + 8),*(int *)(lVar3 + 0x10) + -1,1);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5,&local_res8);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (*(int *)(lVar3 + 0x10) == 0) {
        (**(code **)(*DAT_146ab6358 + 0x670))
                  (DAT_146ab6358,local_38,&DAT_146ab6e78,*(undefined4 *)(lVar3 + 0x18));
      }
      else {
        lVar4 = *(longlong *)(lVar3 + 8);
        local_38[0] = *(undefined8 *)(lVar4 + -8 + (longlong)*(int *)(lVar3 + 0x10) * 8);
        *(undefined8 *)(lVar4 + (longlong)*(int *)(lVar3 + 0x10) * 8 + -8) = 0;
        TArray<TRefCountPtr<FRHIShaderResourceView>,FDefaultAllocator>::RemoveAtImpl
                  ((longlong *)(lVar3 + 8),*(int *)(lVar3 + 0x10) + -1,1);
      }
      TRefCountPtr<FRHIIndexBuffer>::operator=(plVar5 + 1,local_38);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
    }
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,uVar1);
  }
  local_res8 = (ulonglong)uVar1 << 0x20;
  *(longlong **)(*param_1 + (longlong)(int)uVar1 * 8) = plVar5;
  iVar2 = (int)param_1[5];
  *(int *)(param_1 + 5) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar2);
  }
  *(longlong *)(param_1[4] + (longlong)iVar2 * 8) = local_res8;
  iVar2 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar2);
  }
  *(uint *)(param_1[2] + (longlong)iVar2 * 4) = uVar1;
  lVar3 = *plVar5;
  *(undefined1 *)((longlong)plVar5 + 0x2c) = 1;
  if (lVar3 != 0) {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59490;
    puVar7[2] = lVar3;
    *(undefined1 *)((longlong)plVar5 + 0x2d) = 1;
  }
  plVar5[3] = -1;
  plVar5[4] = -1;
  *(undefined4 *)(plVar5 + 5) = DAT_1464aaa90;
  return;
}



// FUNCTION 142759ff0 FUN_142759ff0 body=107 status=ok
// SIG undefined FUN_142759ff0(void)

void FUN_142759ff0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 0x750);
  *(int *)(param_1 + 0x750) = iVar2 + 1;
  if (*(int *)(param_1 + 0x754) < iVar2 + 1) {
    TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(param_1 + 0x6c8,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x748);
  if (*(longlong *)(param_1 + 0x748) == 0) {
    lVar3 = param_1 + 0x6c8;
  }
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
  *puVar1 = CONCAT44(uStack_14,param_3);
  puVar1[1] = param_2;
  return;
}



// FUNCTION 14275a060 QueryForCloudDocuments body=208 status=ok
// SIG undefined QueryForCloudDocuments(void)

undefined8 UCloudStorageBase::QueryForCloudDocuments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong local_58 [2];
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar1 = (longlong *)FUN_1415c3d50();
  puVar2 = (undefined8 *)FPaths::CloudDir(local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,param_1 + 0x38,puVar3,&DAT_14518e1e0,1,0,1);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    local_48[0] = 1;
    local_40 = 0;
    local_30 = 0;
    local_38 = 0;
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    FUN_142748070(param_1,3,local_48);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 14275a130 ReadCloudDocument body=195 status=ok
// SIG undefined ReadCloudDocument(void)

undefined8 UCloudStorageBase::ReadCloudDocument(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38;
  int local_34;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((param_3 == '\0') && (param_2 < *(int *)(param_1 + 0x40))) {
    plVar1 = (longlong *)FUN_1415c3d50();
    puVar4 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38));
    if (*(int *)(puVar4 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar4;
    }
    lVar2 = (**(code **)(*plVar1 + 0xe8))(plVar1,puVar3);
    if (lVar2 != -1) {
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        local_48[0] = 1;
        local_40 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_38 = 1;
        local_34 = param_2;
        FUN_142748070(param_1,4,local_48);
        if (local_28 != 0) {
          FMemory::Free();
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14275a200 FUN_14275a200 body=1011 status=ok
// SIG undefined FUN_14275a200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14275a200(undefined8 param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  short *psVar8;
  short *local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38 [4];
  
  local_50 = 0;
  local_40 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_58 = 1;
  local_48 = (ulonglong)(byte)param_3;
  (**(code **)(*DAT_1468b6148 + 0x10))();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b0a558) {
    _Init_thread_header(&DAT_146b0a558);
    if (DAT_146b0a558 == -1) {
      puVar2 = (undefined8 *)FPaths::CloudDir(local_68);
      iVar3 = *(int *)(puVar2 + 1);
      local_78 = (short *)*puVar2;
      *puVar2 = 0;
      local_70._0_4_ = *(int *)(puVar2 + 1);
      local_70._4_4_ = *(int *)((longlong)puVar2 + 0xc);
      puVar2[1] = 0;
      iVar6 = (int)local_70;
      if (local_70._4_4_ < (int)((0x11 - (uint)(iVar3 != 0)) + (int)local_70)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo();
        iVar6 = (int)local_70;
      }
      iVar3 = (0x11 - (uint)(iVar6 != 0)) + iVar6;
      local_70 = CONCAT44(local_70._4_4_,iVar3);
      iVar1 = local_70._4_4_;
      if (local_70._4_4_ < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar6);
        iVar3 = (int)local_70;
        iVar1 = local_70._4_4_;
      }
      _DAT_146b0a554 = iVar1;
      builtin_wcsncpy(local_78 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)),L"CloudStorage.ini",
                      0x11);
      DAT_146b0a548 = local_78;
      DAT_146b0a550 = iVar3;
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      atexit((_func_5014 *)&LAB_143eb9a80);
      _Init_thread_footer(&DAT_146b0a558);
    }
  }
  if (param_3 == 1) {
    puVar7 = &DAT_143f3eda8;
    local_78 = (short *)0x0;
    psVar8 = &DAT_143f3eda8;
    if (DAT_146b0a550 != 0) {
      psVar8 = DAT_146b0a548;
    }
    local_70 = 0;
    if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar8[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_70 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      FGenericPlatformString::Memcpy(local_78,psVar8,(longlong)(int)uVar4 * 2);
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    FConfigCacheIni::GetInt
              (DAT_1468b6148,L"CloudStorageEmulation",puVar7,(longlong)&local_48 + 4,&local_78);
  }
  else if (param_3 == 2) {
    puVar7 = &DAT_143f3eda8;
    local_78 = (short *)0x0;
    psVar8 = &DAT_143f3eda8;
    if (DAT_146b0a550 != 0) {
      psVar8 = DAT_146b0a548;
    }
    local_70 = 0;
    if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar8[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_70 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      FGenericPlatformString::Memcpy(local_78,psVar8,(longlong)(int)uVar4 * 2);
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    FConfigCacheIni::GetFloat(DAT_1468b6148,L"CloudStorageEmulation",puVar7,&local_40,&local_78);
  }
  else {
    if (param_3 != 3) goto LAB_14275a48e;
    puVar7 = &DAT_143f3eda8;
    local_78 = (short *)0x0;
    psVar8 = &DAT_143f3eda8;
    if (DAT_146b0a550 != 0) {
      psVar8 = DAT_146b0a548;
    }
    local_70 = 0;
    if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (psVar8[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_70 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      }
      FGenericPlatformString::Memcpy(local_78,psVar8,(longlong)(int)uVar4 * 2);
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    FConfigCacheIni::GetString(DAT_1468b6148,L"CloudStorageEmulation",puVar7,local_38,&local_78);
  }
  if (local_78 != (short *)0x0) {
    FMemory::Free();
  }
LAB_14275a48e:
  (**(code **)(*DAT_1468b6148 + 8))();
  FUN_142748070(param_1,0,&local_58);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14275a600 FUN_14275a600 body=81 status=ok
// SIG undefined FUN_14275a600(void)

void FUN_14275a600(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x228);
  *(int *)(param_1 + 0x228) = iVar1 + 1;
  if (*(int *)(param_1 + 0x22c) < iVar1 + 1) {
    FUN_140822430((longlong *)(param_1 + 0x220),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x220) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014275a64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2);
  return;
}



// FUNCTION 14275a660 FUN_14275a660 body=280 status=ok
// SIG undefined FUN_14275a660(void)

void FUN_14275a660(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 local_18;
  longlong *local_10;
  
  if (DAT_146b17150 != 0) {
    plVar2 = *(longlong **)(DAT_146b17150 + 0xad8);
    uVar8 = 0;
    uVar9 = uVar8;
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(longlong *)(uVar8 + *plVar2) == 0) ||
           (lVar3 = *(longlong *)(uVar8 + 8 + *plVar2), lVar3 == 0)) {
LAB_14275a6c6:
          TArray<TWeakPtr<IMediaClockSink,1>,FDefaultAllocator>::RemoveAtSwapImpl(plVar2,uVar9,1,1);
        }
        else {
          piVar1 = (int *)(lVar3 + 8);
          LOCK();
          iVar6 = *piVar1;
          if (iVar6 == 0) {
            *piVar1 = 0;
            iVar6 = 0;
          }
          UNLOCK();
          if (iVar6 < 1) goto LAB_14275a6c6;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar8 = uVar8 + 0x10;
        }
      } while ((int)uVar9 < (int)plVar2[1]);
    }
    plVar4 = (longlong *)param_1[1];
    uVar5 = *param_1;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    local_18 = uVar5;
    local_10 = plVar4;
    iVar6 = TArray<TWeakPtr<FImgMediaLoader,1>,FDefaultAllocator>::Find(plVar2,&local_18);
    if (iVar6 == -1) {
      iVar6 = (int)plVar2[1];
      *(int *)(plVar2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar6);
      }
      puVar7 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar2);
      *puVar7 = uVar5;
      puVar7[1] = plVar4;
    }
    else if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 14275a780 Rehash body=764 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  ulonglong *puVar16;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar10;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_14275a8bf;
        uVar10 = puVar15[lVar4 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
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
      if (iVar8 < iStack_44) {
LAB_14275a8bf:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar16 = (ulonglong *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar10 = (uint)puVar16[1];
        iVar8 = (int)(*puVar16 >> 4);
        uVar12 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar14 = -(uVar12 + iVar8) ^ uVar12 >> 0xd;
        uVar9 = (iVar8 - uVar12) - uVar14 ^ uVar14 >> 0xc;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar9 << 0x10;
        uVar14 = (uVar14 - uVar12) - uVar9 ^ uVar12 >> 5;
        uVar9 = (uVar9 - uVar12) - uVar14 ^ uVar14 >> 3;
        uVar12 = (uVar12 - uVar9) - uVar14 ^ uVar9 << 10;
        uVar14 = ((uVar14 - uVar12) - uVar9 ^ uVar12 >> 0xf) - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar14) - uVar10 ^ uVar14 << 8;
        uVar12 = (uVar10 - uVar9) - uVar14 ^ uVar9 >> 0xd;
        uVar14 = (uVar14 - uVar9) - uVar12 ^ uVar12 >> 0xc;
        uVar10 = (uVar9 - uVar14) - uVar12 ^ uVar14 << 0x10;
        uVar9 = (uVar12 - uVar10) - uVar14 ^ uVar10 >> 5;
        uVar12 = (uVar14 - uVar10) - uVar9 ^ uVar9 >> 3;
        uVar10 = (uVar10 - uVar12) - uVar9 ^ uVar12 << 10;
        uVar10 = ((uVar9 - uVar10) - uVar12 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar16 + 0x1c) = uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar16 + 3) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14275aa80 Release body=206 status=ok
// SIG undefined Release(void)

void FRealtimeGPUProfiler::Release(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *param_1);
      if (plVar1 != (longlong *)0x0) {
        FUN_142748420(plVar1,0);
        if (plVar1[6] != 0) {
          FMemory::Free();
        }
        if (plVar1[4] != 0) {
          FMemory::Free();
        }
        if (plVar1[2] != 0) {
          FMemory::Free();
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)param_1[1]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  puVar2 = (undefined8 *)param_1[4];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  param_1[4] = 0;
  return;
}



// FUNCTION 14275ab50 Release body=271 status=ok
// SIG undefined Release(void)

void FRenderQueryPool::Release(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = *(longlong **)(param_1 + 8);
  for (iVar7 = *(int *)(param_1 + 0x10); iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar3 = (undefined8 *)*plVar8;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar9 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar9) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar9) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar5 == 0) {
              lVar6 = 0;
            }
            else {
              lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar6 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    plVar8 = plVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 14275ac60 ReleaseQuery body=284 status=ok
// SIG undefined ReleaseQuery(void)

void FRenderQueryPool::ReleaseQuery(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (*param_2 != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    lVar7 = 0;
    if (*param_2 != 0) {
      piVar1 = (int *)(*param_2 + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (iVar5 == 1) {
        iVar5 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar5 + 1;
        if (*(int *)(param_1 + 0x14) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    ((longlong *)(param_1 + 8),iVar5);
        }
        lVar2 = *param_2;
        *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 8) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
      }
    }
    puVar3 = (undefined8 *)*param_2;
    *param_2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar8 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar8) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar8) {
            uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
            if (uVar6 != 0) {
              lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(lVar7 + 8) = puVar3;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            return;
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14275ad80 Remove body=252 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,FShaderMapCompileResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapCompileResults,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar7 + ((longlong)param_2 & uVar8) * 4);
  if (iVar6 != -1) {
    lVar4 = *param_1;
    do {
      lVar5 = (longlong)iVar6;
      if (*(int *)(lVar4 + lVar5 * 0x28) == param_2) {
        lVar5 = lVar5 * 0x28;
        uVar8 = (longlong)*(int *)(lVar5 + 0x24 + lVar4) & uVar8;
        puVar2 = (undefined4 *)((longlong)plVar7 + uVar8 * 4);
        iVar3 = *(int *)((longlong)plVar7 + uVar8 * 4);
        goto joined_r0x00014275ae17;
      }
      iVar6 = *(int *)(lVar4 + 0x20 + lVar5 * 0x28);
    } while (iVar6 != -1);
  }
  return 0;
joined_r0x00014275ae17:
  if (iVar3 == -1) {
LAB_14275ae42:
    if (*(longlong *)(lVar5 + 0x10 + *param_1) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar6,1);
    return 1;
  }
  if (iVar3 == iVar6) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar4 + 0x20);
    goto LAB_14275ae42;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x00014275ae17;
}



// FUNCTION 14275ae80 Remove body=247 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,FShaderMapFinalizeResults>,TDefaultMapHashableKeyFuncs<int,FShaderMapFinalizeResults,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x80;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x80;
        uVar7 = (longlong)*(int *)(lVar3 + 0x7c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x00014275af12;
      }
      iVar5 = *(int *)(lVar3 + 0x78 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x00014275af12:
  if (iVar1 == -1) {
LAB_14275af40:
    FShaderMapFinalizeResults::~FShaderMapFinalizeResults(*param_1 + 8 + lVar3);
    FUN_140483a60(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x78);
    goto LAB_14275af40;
  }
  piVar4 = (int *)(lVar2 + 0x78 + (longlong)iVar1 * 0x80);
  iVar1 = *piVar4;
  goto joined_r0x00014275af12;
}



// FUNCTION 14275af80 Remove body=499 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TRefCountPtr<FMaterialShaderMap>,TArray<FMaterial_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FMaterialShaderMap>,TArray<FMaterial_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar11 = (int)(*param_2 >> 4);
  uVar13 = (longlong)(int)param_1[9] - 1;
  uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
  uVar8 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
  uVar12 = (iVar11 - uVar10) - uVar8 ^ uVar8 >> 0xc;
  uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 << 0x10;
  uVar8 = (uVar8 - uVar10) - uVar12 ^ uVar10 >> 5;
  uVar12 = (uVar12 - uVar10) - uVar8 ^ uVar8 >> 3;
  uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 << 10;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar11 = *(int *)((longlong)plVar9 +
                   (((longlong)(int)((uVar8 - uVar10) - uVar12) ^ (ulonglong)(uVar10 >> 0xf)) &
                   uVar13) * 4);
  if (iVar11 != -1) {
    lVar3 = *param_1;
    do {
      lVar6 = (longlong)iVar11 * 0x20;
      if (*(ulonglong *)(lVar6 + lVar3) == *param_2) {
        lVar6 = (longlong)iVar11 * 0x20;
        uVar13 = (longlong)*(int *)(lVar3 + 0x1c + lVar6) & uVar13;
        piVar7 = (int *)((longlong)plVar9 + uVar13 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar13 * 4);
        goto joined_r0x00014275b0b0;
      }
      iVar11 = *(int *)(lVar6 + 0x18 + lVar3);
    } while (iVar11 != -1);
  }
  return 0;
joined_r0x00014275b0b0:
  if (iVar2 == -1) {
LAB_14275b0d2:
    lVar3 = *param_1;
    if (*(longlong *)(lVar3 + 8 + lVar6) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar3 + lVar6) != 0) {
      FUN_14259f650();
    }
    bVar4 = (byte)iVar11 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar11;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar6) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar6) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar11;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 +
                     (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar11) {
    *piVar7 = *(int *)(lVar3 + lVar6 + 0x18);
    goto LAB_14275b0d2;
  }
  piVar7 = (int *)(lVar3 + 0x18 + (longlong)iVar2 * 0x20);
  iVar2 = *piVar7;
  goto joined_r0x00014275b0b0;
}



// FUNCTION 14275b180 RemoveAllAnnotations body=134 status=ok
// SIG undefined RemoveAllAnnotations(void)

void FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAllAnnotations(longlong param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 8,0);
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014275b1ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 14275b210 FUN_14275b210 body=63 status=ok
// SIG undefined FUN_14275b210(void)

void FUN_14275b210(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x458);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(lVar1 + 0x60) = *param_3;
  *(undefined4 *)(lVar1 + 100) = uVar2;
  *(undefined4 *)(lVar1 + 0x68) = uVar3;
  *(undefined4 *)(lVar1 + 0x6c) = uVar4;
  FUN_14274a5f0(*(undefined8 *)(param_1 + 0x458),0,0,*(undefined4 *)(param_2 + 0xc0),
                *(undefined4 *)(param_2 + 0xc4),param_2);
  return;
}



// FUNCTION 14275b250 FUN_14275b250 body=376 status=ok
// SIG undefined FUN_14275b250(void)

void FUN_14275b250(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar10 = param_2 + -1;
    lVar11 = (longlong)iVar10;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar8 = lVar11 << 7;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x80 + *param_1) = iVar10;
        }
        *(undefined4 *)(lVar8 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar8 + 4 + *param_1) = uVar5;
        lVar8 = lVar8 + -0x80;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar10;
        iVar10 = iVar10 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar10 = (int)param_1[5];
        iVar6 = iVar10 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
          uVar2 = (int)(iVar10 + 0x20 + (iVar10 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar10;
        if (iVar10 < 0) {
          iVar6 = iVar10 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar10 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14275b3d0 ResizeGrow body=141 status=ok
// SIG undefined ResizeGrow(void)

void TArray<int,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (uVar1 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x8c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
    iVar2 = (int)(uVar3 >> 2);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  FUN_140767b70(param_1,param_2,iVar2,4);
  return;
}



// FUNCTION 14275b460 FUN_14275b460 body=314 status=ok
// SIG undefined FUN_14275b460(void)

void FUN_14275b460(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined *local_38;
  undefined1 *puStack_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  iVar6 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar2)) {
    iVar6 = uVar2 + 0x10 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3);
  }
  if (iVar6 < (int)uVar2) {
    iVar6 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  _Src = (void *)*param_1;
  if (iVar6 != 0) {
    puStack_30 = local_res8;
    local_38 = &DAT_14060d670;
    local_res8[0] = 0;
    iVar8 = iVar6 * 0x18;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    uVar5 = 8;
    uVar2 = uVar5;
    if (0xf < iVar8) {
      uVar2 = 0x10;
    }
    uVar7 = (ulonglong)uVar2;
    puVar1 = (ulonglong *)(lVar3 + 0x18);
    _Dst = (void *)(*(longlong *)(lVar3 + 0x18) + -1 + uVar7 & ~(uVar7 - 1));
    uVar4 = (longlong)iVar8 + (longlong)_Dst;
    if (*(ulonglong *)(lVar3 + 0x20) < uVar4) {
      if (0xf < iVar8) {
        uVar5 = 0x10;
      }
      FMemStackBase::AllocateNewChunk(puVar1,uVar5 + iVar8);
      _Dst = (void *)((*puVar1 - 1) + uVar7 & ~(uVar7 - 1));
      uVar4 = (longlong)iVar8 + (longlong)_Dst;
    }
    *puVar1 = uVar4;
    *param_1 = _Dst;
    if ((_Src != (void *)0x0) && (param_2 != 0)) {
      if (iVar6 <= param_2) {
        param_2 = iVar6;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)(param_2 * 0x18));
    }
  }
  return;
}



// FUNCTION 14275b5a0 ResizeShrink body=159 status=ok
// SIG undefined ResizeShrink(void)

void TArray<int,TInlineAllocator<32,FDefaultAllocator>_>::ResizeShrink(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x8c);
  if (uVar2 < 0x21) {
    uVar2 = 0x20;
    goto LAB_14275b612;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) << 2)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 << 2,0);
        uVar3 = *(uint *)(param_1 + 0x8c);
        uVar2 = (uint)(uVar1 >> 2);
      }
      goto LAB_14275b612;
    }
    if (uVar2 == 0) goto LAB_14275b612;
  }
  uVar2 = uVar3;
LAB_14275b612:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0x8c) = uVar2;
    FUN_140767b70(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 14275b640 SaveDocumentWithBytes body=111 status=ok
// SIG undefined SaveDocumentWithBytes(void)

ulonglong UCloudStorageBase::SaveDocumentWithBytes(longlong param_1,int param_2,undefined8 *param_3)

{
  ulonglong in_RAX;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined8 local_18;
  undefined4 uStack_10;
  
  if (*(int *)(param_1 + 0x40) <= param_2) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_18 = *param_3;
  uStack_10 = *(undefined4 *)(param_3 + 1);
  puVar1 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38));
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_1415c3d50();
  uVar3 = FUN_14167ef40(&local_18,puVar4,uVar2,0);
  return uVar3;
}



// FUNCTION 14275b6b0 FUN_14275b6b0 body=529 status=ok
// SIG undefined FUN_14275b6b0(void)

undefined8 FUN_14275b6b0(longlong *param_1,undefined4 param_2,longlong *param_3,undefined4 param_4)

{
  wint_t wVar1;
  wint_t wVar2;
  undefined8 *puVar3;
  int iVar4;
  wint_t *pwVar5;
  undefined2 *puVar6;
  undefined4 local_res20 [2];
  longlong local_198 [4];
  undefined **local_178;
  longlong *local_170;
  byte local_14f;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined **local_c8 [19];
  undefined1 local_30;
  
  local_res20[0] = param_4;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x2b0))(param_1,local_198 + 2,param_2);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  for (pwVar5 = &DAT_14518a33c;
      (wVar1 = *(wint_t *)((longlong)(puVar6 + -0xa28c519e) + (longlong)pwVar5), wVar1 != 0 ||
      (*pwVar5 != 0)); pwVar5 = pwVar5 + 1) {
    if (wVar1 != *pwVar5) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar5);
      if (wVar1 != wVar2) {
        iVar4 = (uint)wVar1 - (uint)wVar2;
LAB_14275b74e:
        if (local_198[2] != 0) {
          FMemory::Free();
        }
        if (iVar4 == 0) {
          return 0;
        }
        local_198[0] = 0;
        local_198[1] = 0;
        FArchive::FArchive(&local_178);
        local_e8 = 0;
        local_178 = &PTR_FUN_143f4a100;
        local_e0 = local_198;
        local_d8 = 0;
        FArchive::SetIsSaving(&local_178,1);
        FArchive::SetIsPersistent(&local_178,0);
        if ((undefined4 *)local_170[1] < (undefined4 *)*local_170 + 1) {
          (*(code *)local_178[10])(&local_178,local_res20,4);
          if ((local_14f & 0x10) != 0) {
            FArchive::ByteSwap(&local_178,local_res20,4);
          }
        }
        else {
          local_res20[0] = *(undefined4 *)*local_170;
          *local_170 = *local_170 + 4;
        }
        FArchiveProxy::FArchiveProxy(local_c8,&local_178);
        local_30 = 0;
        local_c8[0] = &PTR_FUN_143f4a5b0;
        (**(code **)(*param_3 + 0xa8))(param_3,local_c8);
        (**(code **)(*param_1 + 0x2f0))(param_1,param_2,local_198);
        FArchive::~FArchive(local_c8);
        FArchive::~FArchive(&local_178);
        if (local_198[0] != 0) {
          FMemory::Free();
        }
        return 1;
      }
    }
  }
  iVar4 = 0;
  goto LAB_14275b74e;
}



// FUNCTION 14275b8d0 SaveDocumentWithString body=97 status=ok
// SIG undefined SaveDocumentWithString(void)

ulonglong UCloudStorageBase::SaveDocumentWithString(longlong param_1,int param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  
  if (*(int *)(param_1 + 0x40) <= param_2) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar1 = (undefined8 *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38));
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  uVar2 = FUN_1415c3d50();
  uVar3 = FUN_14167efa0(param_3,puVar4,0,uVar2,0);
  return uVar3;
}



// FUNCTION 14275b940 FUN_14275b940 body=398 status=ok
// SIG undefined FUN_14275b940(void)

void FUN_14275b940(int param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  longlong local_108 [4];
  longlong local_e8 [2];
  longlong local_d8;
  undefined **local_c8;
  longlong *local_c0;
  byte local_a0;
  byte local_9f;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_108[0] = 0;
  local_108[1] = 0;
  local_res10 = 0;
  FArchive::FArchive(&local_c8);
  local_38 = 0;
  local_c8 = &PTR_FUN_143f4a100;
  local_30 = local_108;
  local_28 = 0;
  FArchive::SetIsSaving(&local_c8,1);
  FArchive::SetIsPersistent(&local_c8,1);
  plVar1 = *(longlong **)(&DAT_1469f5a10 + (longlong)param_1 * 8);
  local_res8[0] = 0;
  if ((local_a0 & 1) == 0) {
    local_res8[0] = 0x47534d42;
  }
  if ((undefined4 *)local_c0[1] < (undefined4 *)*local_c0 + 1) {
    (*(code *)local_c8[10])(&local_c8,local_res8,4);
    if ((local_9f & 0x10) != 0) {
      FArchive::ByteSwap(&local_c8,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*local_c0;
    *local_c0 = *local_c0 + 4;
  }
  FUN_141a0baa0(plVar1,&local_c8,1,0);
  (**(code **)(*plVar1 + 8))(plVar1);
  FUN_1419d58f0(local_e8,param_1);
  plVar1 = (longlong *)GetDerivedDataCacheRef();
  puVar2 = (undefined8 *)FUN_14274e860(local_108 + 2,local_e8,param_1);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,puVar3,local_108,0);
  if (local_108[2] != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_c8);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14275bad0 FUN_14275bad0 body=91 status=ok
// SIG undefined FUN_14275bad0(void)

void FUN_14275bad0(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if (((((*(byte *)(param_2 + 0x28) & 0x41) == 0x41) &&
       ((*(uint *)(param_2 + 0x30) & 0x401000) == 0)) &&
      (*(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xf8),
      *(longlong *)(param_1 + 0x28) == 0)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
  }
  return;
}



// FUNCTION 14275bb30 Serialize body=138 status=ok
// SIG undefined Serialize(void)

void USelection::Serialize(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141763960();
  FUN_1427466d0(param_2,param_1 + 0x28);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAllAnnotations
              (*(undefined8 *)(param_1 + 0x90));
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x30) * 8;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 8) {
      lVar2 = FWeakObjectPtr::Get(lVar3,1);
      if (lVar2 != 0) {
        FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
                  (*(undefined8 *)(param_1 + 0x90),lVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 14275bbc0 FUN_14275bbc0 body=149 status=ok
// SIG undefined FUN_14275bbc0(void)

void FUN_14275bbc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 local_res8 [2];
  
  plVar1 = (longlong *)param_1[1];
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = 0x47534d42;
  }
  if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(undefined4 *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  FUN_141a0baa0(param_2,param_1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00014275bc51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2);
  return;
}



// FUNCTION 14275bc80 FUN_14275bc80 body=153 status=ok
// SIG undefined FUN_14275bc80(void)

void FUN_14275bc80(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uStack_14;
  
  lVar1 = param_1 + 0x6c8;
  *(undefined4 *)(param_1 + 0x750) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x754)) {
    FUN_14245d780(lVar1,0);
  }
  iVar3 = *(int *)(param_1 + 0x750);
  *(int *)(param_1 + 0x750) = iVar3 + 1;
  if (*(int *)(param_1 + 0x754) < iVar3 + 1) {
    TArray<FObjectInitializer::FSubobjectsToInit::FSubobjectInit,TInlineAllocator<8,FDefaultAllocator>_>
    ::ResizeGrow(lVar1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x748);
  if (*(longlong *)(param_1 + 0x748) == 0) {
    lVar4 = lVar1;
  }
  puVar2 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x10);
  *puVar2 = CONCAT44(uStack_14,0x3f800000);
  puVar2[1] = param_2;
  return;
}



// FUNCTION 14275bd20 FUN_14275bd20 body=8 status=ok
// SIG undefined FUN_14275bd20(void)

void FUN_14275bd20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x60) = *param_2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 14275bd30 FUN_14275bd30 body=1351 status=ok
// SIG undefined FUN_14275bd30(void)

void FUN_14275bd30(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  
  lVar9 = DAT_146b09978;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  lVar12 = 0;
  iVar11 = 0;
  lVar14 = 4;
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), lVar7 = lVar14, DVar5 == DAT_1468c21c0)) {
    lVar7 = 0;
  }
  if (*(uint *)(lVar7 + lVar9) < 4) {
    *(uint *)(param_1 + 0x1a10) = *(uint *)(lVar7 + lVar9);
  }
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar13 < DAT_146b0a1a8) && (_Init_thread_header(&DAT_146b0a1a8), DAT_146b0a1a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileMSAA");
    lVar9 = lVar12;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_146b0a1a0 = lVar9;
    _Init_thread_footer(&DAT_146b0a1a8);
  }
  lVar9 = DAT_146b0a1a0;
  iVar10 = 0;
  if ((*(int *)(param_1 + 0x1a38) < 2) && (DAT_146b0a1a0 != 0)) {
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar4 != '\0') ||
       ((DAT_1468c21ae == '\0' ||
        (DVar5 = GetCurrentThreadId(), lVar7 = lVar14, DVar5 == DAT_1468c21c0)))) {
      lVar7 = lVar12;
    }
    if (1 < *(int *)(lVar7 + lVar9)) {
      *(undefined4 *)(param_1 + 0x1a10) = 0;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x1a10);
  if (((*(uint *)(lVar9 + 0x28) & 0x800000) != 0) || (iVar6 = 1, *piVar1 != 2)) {
    iVar6 = *piVar1;
  }
  *piVar1 = iVar6;
  if ((*(char *)(lVar9 + 0x6c) != '\0') && (iVar6 == 2)) {
    iVar6 = 1;
  }
  *piVar1 = iVar6;
  if ((*piVar13 < DAT_146b0a1b8) && (_Init_thread_header(&DAT_146b0a1b8), DAT_146b0a1b8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b0a1b0 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MSAACount");
    _Init_thread_footer(&DAT_146b0a1b8);
  }
  if ((((*piVar1 == 3) && (DAT_146ac3ac0 != 0)) && (2 < *(int *)(param_1 + 0x1a38))) &&
     (iVar6 = (**(code **)(*DAT_146b0a1b0 + 0x68))(), iVar6 < 1)) {
    *piVar1 = 2;
  }
  if ((*piVar13 < DAT_146b0a1c8) && (_Init_thread_header(&DAT_146b0a1c8), DAT_146b0a1c8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.PostProcessAAQuality");
    lVar9 = lVar12;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_146b0a1c0 = lVar9;
    _Init_thread_footer(&DAT_146b0a1c8);
  }
  if ((*piVar13 < DAT_146b0a1d8) && (_Init_thread_header(&DAT_146b0a1d8), DAT_146b0a1d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileHDR");
    lVar9 = lVar12;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_146b0a1d0 = lVar9;
    _Init_thread_footer(&DAT_146b0a1d8);
  }
  if ((*piVar13 < DAT_146b0a1e8) && (_Init_thread_header(&DAT_146b0a1e8), DAT_146b0a1e8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar8 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MobileMSAA");
    lVar9 = lVar12;
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    DAT_146b0a1e0 = lVar9;
    _Init_thread_footer(&DAT_146b0a1e8);
  }
  if ((*piVar13 < DAT_146b0a1f0) &&
     (_Init_thread_header(&DAT_146b0a1f0), lVar9 = DAT_146b0a1e0, DAT_146b0a1f0 == -1)) {
    if ((&DAT_1464c9c48)[*(int *)(param_1 + 0x1a38)] == 10) {
      DAT_146b0a1ec = 1;
    }
    else {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar5 = GetCurrentThreadId(), lVar7 = lVar14, DVar5 == DAT_1468c21c0)) {
        lVar7 = lVar12;
      }
      DAT_146b0a1ec = *(uint *)(lVar7 + lVar9);
    }
    _Init_thread_footer(&DAT_146b0a1f0);
  }
  lVar9 = DAT_146b0a1c0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), lVar7 = lVar14, DVar5 == DAT_1468c21c0)) {
    lVar7 = lVar12;
  }
  lVar3 = DAT_146b0a1d0;
  iVar6 = *(int *)(lVar7 + lVar9);
  if ((-1 < iVar6) && (iVar10 = 6, iVar6 < 6)) {
    iVar10 = iVar6;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x28);
  if (((((uVar2 & 1) == 0) && (*(char *)(param_1 + 0x1204) == '\0')) || ((uVar2 & 8) == 0)) ||
     (iVar10 < 1)) {
LAB_14275bf89:
    *piVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1a38) < 2) {
      cVar4 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
        lVar14 = lVar12;
      }
      if ((*(int *)(lVar14 + lVar3) == 0) ||
         ((*(int *)(param_1 + 0x1a38) < 2 && (1 < DAT_146b0a1ec)))) goto LAB_14275bf89;
    }
    iVar11 = *piVar1;
  }
  if ((iVar11 == 2) &&
     ((((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x10) == 0 ||
       (*(char *)(*(longlong *)(param_1 + 0x10) + 0x60) == '\0')) || (iVar10 < 3)))) {
    *piVar1 = 1;
    iVar11 = 1;
  }
  if (((*(char *)(param_1 + 0x1202) != '\0') && (iVar11 == 0)) &&
     (((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x28) & 8) != 0 && (iVar10 - 1U < 2)))) {
    *piVar1 = 1;
  }
  return;
}



// FUNCTION 14275c280 FUN_14275c280 body=8074 status=ok
// SIG undefined FUN_14275c280(void)

void FUN_14275c280(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,float *param_6,float *param_7)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float *pfVar20;
  bool bVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  undefined8 *puVar25;
  float *pfVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
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
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  
  pfVar20 = param_7;
  puVar22 = (undefined8 *)param_6;
  uVar17 = *(undefined8 *)(param_1 + 0xf80);
  uVar18 = *(undefined8 *)(param_1 + 0xf88);
  uVar32 = *(undefined4 *)(param_1 + 0xfb0);
  uVar35 = *(undefined4 *)(param_1 + 0xfb4);
  *(undefined4 *)(param_2 + 0x11c) = param_4;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x408);
  param_2[0x20] = *(undefined8 *)((longlong)param_6 + 0x400);
  param_2[0x21] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x418);
  param_2[0x22] = *(undefined8 *)((longlong)param_6 + 0x410);
  param_2[0x23] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x428);
  param_2[0x24] = *(undefined8 *)((longlong)param_6 + 0x420);
  param_2[0x25] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x438);
  param_2[0x26] = *(undefined8 *)((longlong)param_6 + 0x430);
  param_2[0x27] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x448);
  *param_2 = *(undefined8 *)((longlong)param_6 + 0x440);
  param_2[1] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x458);
  param_2[2] = *(undefined8 *)((longlong)param_6 + 0x450);
  param_2[3] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x468);
  param_2[4] = *(undefined8 *)((longlong)param_6 + 0x460);
  param_2[5] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x478);
  param_2[6] = *(undefined8 *)((longlong)param_6 + 0x470);
  param_2[7] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x488);
  param_2[8] = *(undefined8 *)((longlong)param_6 + 0x480);
  param_2[9] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x498);
  param_2[10] = *(undefined8 *)((longlong)param_6 + 0x490);
  param_2[0xb] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x4a8);
  param_2[0xc] = *(undefined8 *)((longlong)param_6 + 0x4a0);
  param_2[0xd] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x4b8);
  param_2[0xe] = *(undefined8 *)((longlong)param_6 + 0x4b0);
  param_2[0xf] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x208);
  param_2[0x10] = *(undefined8 *)((longlong)param_6 + 0x200);
  param_2[0x11] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x218);
  param_2[0x12] = *(undefined8 *)((longlong)param_6 + 0x210);
  param_2[0x13] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x228);
  param_2[0x14] = *(undefined8 *)((longlong)param_6 + 0x220);
  param_2[0x15] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x238);
  param_2[0x16] = *(undefined8 *)((longlong)param_6 + 0x230);
  param_2[0x17] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x3c8);
  param_2[0x18] = *(undefined8 *)((longlong)param_6 + 0x3c0);
  param_2[0x19] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x3d8);
  param_2[0x1a] = *(undefined8 *)((longlong)param_6 + 0x3d0);
  param_2[0x1b] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 1000);
  param_2[0x1c] = *(undefined8 *)((longlong)param_6 + 0x3e0);
  param_2[0x1d] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x3f8);
  param_2[0x1e] = *(undefined8 *)((longlong)param_6 + 0x3f0);
  param_2[0x1f] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x348);
  param_2[0x28] = *(undefined8 *)((longlong)param_6 + 0x340);
  param_2[0x29] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x358);
  param_2[0x2a] = *(undefined8 *)((longlong)param_6 + 0x350);
  param_2[0x2b] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x368);
  param_2[0x2c] = *(undefined8 *)((longlong)param_6 + 0x360);
  param_2[0x2d] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x378);
  param_2[0x2e] = *(undefined8 *)((longlong)param_6 + 0x370);
  param_2[0x2f] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x388);
  param_2[0x30] = *(undefined8 *)((longlong)param_6 + 0x380);
  param_2[0x31] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x398);
  param_2[0x32] = *(undefined8 *)((longlong)param_6 + 0x390);
  param_2[0x33] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x3a8);
  param_2[0x34] = *(undefined8 *)((longlong)param_6 + 0x3a0);
  param_2[0x35] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x3b8);
  param_2[0x36] = *(undefined8 *)((longlong)param_6 + 0x3b0);
  param_2[0x37] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 8);
  param_2[0x38] = *(undefined8 *)param_6;
  param_2[0x39] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x18);
  param_2[0x3a] = *(undefined8 *)((longlong)param_6 + 0x10);
  param_2[0x3b] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x28);
  param_2[0x3c] = *(undefined8 *)((longlong)param_6 + 0x20);
  param_2[0x3d] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x38);
  param_2[0x3e] = *(undefined8 *)((longlong)param_6 + 0x30);
  param_2[0x3f] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x48);
  param_2[0x40] = *(undefined8 *)((longlong)param_6 + 0x40);
  param_2[0x41] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x58);
  param_2[0x42] = *(undefined8 *)((longlong)param_6 + 0x50);
  param_2[0x43] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x68);
  param_2[0x44] = *(undefined8 *)((longlong)param_6 + 0x60);
  param_2[0x45] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x78);
  param_2[0x46] = *(undefined8 *)((longlong)param_6 + 0x70);
  param_2[0x47] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x88);
  param_2[0x48] = *(undefined8 *)((longlong)param_6 + 0x80);
  param_2[0x49] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x98);
  param_2[0x4a] = *(undefined8 *)((longlong)param_6 + 0x90);
  param_2[0x4b] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0xa8);
  param_2[0x4c] = *(undefined8 *)((longlong)param_6 + 0xa0);
  param_2[0x4d] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0xb8);
  param_2[0x4e] = *(undefined8 *)((longlong)param_6 + 0xb0);
  param_2[0x4f] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x4c8);
  param_2[0x50] = *(undefined8 *)((longlong)param_6 + 0x4c0);
  param_2[0x51] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x4d8);
  param_2[0x52] = *(undefined8 *)((longlong)param_6 + 0x4d0);
  param_2[0x53] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x4e8);
  param_2[0x54] = *(undefined8 *)((longlong)param_6 + 0x4e0);
  param_2[0x55] = uVar19;
  uVar19 = *(undefined8 *)((longlong)param_6 + 0x4f8);
  param_2[0x56] = *(undefined8 *)((longlong)param_6 + 0x4f0);
  param_2[0x57] = uVar19;
  uVar1 = *(undefined4 *)((longlong)param_6 + 1000);
  param_2[0x78] =
       CONCAT44(*(undefined4 *)((longlong)param_6 + 0x3d8),
                *(undefined4 *)((longlong)param_6 + 0x3c8));
  *(undefined4 *)(param_2 + 0x79) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_6 + 0x3e4);
  param_2[0x7a] =
       CONCAT44(*(undefined4 *)((longlong)param_6 + 0x3d4),
                *(undefined4 *)((longlong)param_6 + 0x3c4));
  *(undefined4 *)(param_2 + 0x7b) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_6 + 0x3e0);
  param_2[0x7c] =
       CONCAT44(*(undefined4 *)((longlong)param_6 + 0x3d0),
                *(undefined4 *)((longlong)param_6 + 0x3c0));
  *(undefined4 *)(param_2 + 0x7d) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_6 + 0x324);
  param_2[0x7e] =
       CONCAT44(*(undefined4 *)((longlong)param_6 + 0x314),
                *(undefined4 *)((longlong)param_6 + 0x304));
  *(undefined4 *)(param_2 + 0x7f) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_6 + 800);
  param_2[0x80] =
       CONCAT44(*(undefined4 *)((longlong)param_6 + 0x310),
                *(undefined4 *)((longlong)param_6 + 0x300));
  *(undefined4 *)(param_2 + 0x81) = uVar1;
  uVar19 = *(undefined8 *)(param_1 + 0x11c8);
  param_2[0x82] = *(undefined8 *)(param_1 + 0x11c0);
  param_2[0x83] = uVar19;
  uVar19 = *(undefined8 *)(param_1 + 0x11d8);
  param_2[0x84] = *(undefined8 *)(param_1 + 0x11d0);
  param_2[0x85] = uVar19;
  fVar42 = *(float *)((longlong)param_6 + 0x438);
  fVar44 = *(float *)((longlong)param_6 + 0x428);
  fVar46 = *(float *)((longlong)param_6 + 0x418);
  fVar41 = *(float *)((longlong)param_6 + 0x408);
  fVar40 = *(float *)((longlong)param_6 + 0x548);
  param_2[0x8c] =
       CONCAT44((*(float *)((longlong)param_6 + 0x434) * 1.0 +
                 *(float *)((longlong)param_6 + 0x424) * 0.0 +
                *(float *)((longlong)param_6 + 0x414) * 0.0 +
                *(float *)((longlong)param_6 + 0x404) * 0.0) - *(float *)((longlong)param_6 + 0x544)
                ,(*(float *)((longlong)param_6 + 0x430) * 1.0 +
                  *(float *)((longlong)param_6 + 0x420) * 0.0 +
                 *(float *)((longlong)param_6 + 0x410) * 0.0 +
                 *(float *)((longlong)param_6 + 0x400) * 0.0) -
                 *(float *)((longlong)param_6 + 0x540));
  *(float *)(param_2 + 0x8d) = (fVar42 * 1.0 + fVar44 * 0.0 + fVar46 * 0.0 + fVar41 * 0.0) - fVar40;
  param_2[0x88] = *(undefined8 *)((longlong)param_6 + 0x54c);
  *(undefined4 *)(param_2 + 0x89) = *(undefined4 *)((longlong)param_6 + 0x554);
  fVar40 = *(float *)((longlong)param_6 + 0x548);
  fVar42 = *(float *)((longlong)param_6 + 0x554);
  param_2[0x8a] =
       CONCAT44(*(float *)((longlong)param_6 + 0x544) + *(float *)((longlong)param_6 + 0x550),
                *(float *)((longlong)param_6 + 0x54c) + *(float *)((longlong)param_6 + 0x540));
  *(float *)(param_2 + 0x8b) = fVar40 + fVar42;
  param_2[0x8e] = *(undefined8 *)((longlong)param_6 + 0x540);
  *(undefined4 *)(param_2 + 0x8f) = *(undefined4 *)((longlong)param_6 + 0x548);
  uVar19 = *(undefined8 *)(param_7 + 2);
  param_2[0x90] = *(undefined8 *)param_7;
  param_2[0x91] = uVar19;
  uVar19 = *(undefined8 *)(param_7 + 6);
  param_2[0x92] = *(undefined8 *)(param_7 + 4);
  param_2[0x93] = uVar19;
  uVar19 = *(undefined8 *)(param_7 + 10);
  param_2[0x94] = *(undefined8 *)(param_7 + 8);
  param_2[0x95] = uVar19;
  uVar19 = *(undefined8 *)(param_7 + 0xe);
  param_2[0x96] = *(undefined8 *)(param_7 + 0xc);
  param_2[0x97] = uVar19;
  uVar19 = *(undefined8 *)(param_7 + 0x82);
  param_2[0x98] = *(undefined8 *)(param_7 + 0x80);
  param_2[0x99] = uVar19;
  uVar19 = *(undefined8 *)(param_7 + 0x86);
  param_2[0x9a] = *(undefined8 *)(param_7 + 0x84);
  param_2[0x9b] = uVar19;
  fVar40 = param_7[0x89];
  fVar42 = param_7[0x8a];
  fVar44 = param_7[0x8b];
  *(float *)(param_2 + 0x9c) = param_7[0x88];
  *(float *)((longlong)param_2 + 0x4e4) = fVar40;
  *(float *)(param_2 + 0x9d) = fVar42;
  *(float *)((longlong)param_2 + 0x4ec) = fVar44;
  fVar40 = param_7[0x8d];
  fVar42 = param_7[0x8e];
  fVar44 = param_7[0x8f];
  *(float *)(param_2 + 0x9e) = param_7[0x8c];
  *(float *)((longlong)param_2 + 0x4f4) = fVar40;
  *(float *)(param_2 + 0x9f) = fVar42;
  *(float *)((longlong)param_2 + 0x4fc) = fVar44;
  puVar25 = (undefined8 *)FUN_141c79670(param_7,&local_118);
  uVar19 = puVar25[1];
  param_2[0xa0] = *puVar25;
  param_2[0xa1] = uVar19;
  uVar19 = puVar25[3];
  param_2[0xa2] = puVar25[2];
  param_2[0xa3] = uVar19;
  uVar19 = puVar25[5];
  param_2[0xa4] = puVar25[4];
  param_2[0xa5] = uVar19;
  uVar19 = puVar25[7];
  param_2[0xa6] = puVar25[6];
  param_2[0xa7] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 2);
  param_2[0xa8] = *(undefined8 *)pfVar20;
  param_2[0xa9] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 6);
  param_2[0xaa] = *(undefined8 *)(pfVar20 + 4);
  param_2[0xab] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 10);
  param_2[0xac] = *(undefined8 *)(pfVar20 + 8);
  param_2[0xad] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xe);
  param_2[0xae] = *(undefined8 *)(pfVar20 + 0xc);
  param_2[0xaf] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x22);
  param_2[0xb0] = *(undefined8 *)(pfVar20 + 0x20);
  param_2[0xb1] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x26);
  param_2[0xb2] = *(undefined8 *)(pfVar20 + 0x24);
  param_2[0xb3] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x2a);
  param_2[0xb4] = *(undefined8 *)(pfVar20 + 0x28);
  param_2[0xb5] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x2e);
  param_2[0xb6] = *(undefined8 *)(pfVar20 + 0x2c);
  param_2[0xb7] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x112);
  param_2[0xb8] = *(undefined8 *)(pfVar20 + 0x110);
  param_2[0xb9] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x116);
  param_2[0xba] = *(undefined8 *)(pfVar20 + 0x114);
  param_2[0xbb] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x11a);
  param_2[0xbc] = *(undefined8 *)(pfVar20 + 0x118);
  param_2[0xbd] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x11e);
  param_2[0xbe] = *(undefined8 *)(pfVar20 + 0x11c);
  param_2[0xbf] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x122);
  param_2[0xc0] = *(undefined8 *)(pfVar20 + 0x120);
  param_2[0xc1] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x126);
  param_2[0xc2] = *(undefined8 *)(pfVar20 + 0x124);
  param_2[0xc3] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x12a);
  param_2[0xc4] = *(undefined8 *)(pfVar20 + 0x128);
  param_2[0xc5] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0x12e);
  param_2[0xc6] = *(undefined8 *)(pfVar20 + 300);
  param_2[199] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xd2);
  param_2[200] = *(undefined8 *)(pfVar20 + 0xd0);
  param_2[0xc9] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xd6);
  param_2[0xca] = *(undefined8 *)(pfVar20 + 0xd4);
  param_2[0xcb] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xda);
  param_2[0xcc] = *(undefined8 *)(pfVar20 + 0xd8);
  param_2[0xcd] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xde);
  param_2[0xce] = *(undefined8 *)(pfVar20 + 0xdc);
  param_2[0xcf] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xe2);
  param_2[0xd0] = *(undefined8 *)(pfVar20 + 0xe0);
  param_2[0xd1] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xe6);
  param_2[0xd2] = *(undefined8 *)(pfVar20 + 0xe4);
  param_2[0xd3] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xea);
  param_2[0xd4] = *(undefined8 *)(pfVar20 + 0xe8);
  param_2[0xd5] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xee);
  param_2[0xd6] = *(undefined8 *)(pfVar20 + 0xec);
  param_2[0xd7] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xd2);
  param_2[0xd8] = *(undefined8 *)(pfVar20 + 0xd0);
  param_2[0xd9] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xd6);
  param_2[0xda] = *(undefined8 *)(pfVar20 + 0xd4);
  param_2[0xdb] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xda);
  param_2[0xdc] = *(undefined8 *)(pfVar20 + 0xd8);
  param_2[0xdd] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xde);
  param_2[0xde] = *(undefined8 *)(pfVar20 + 0xdc);
  param_2[0xdf] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xe2);
  param_2[0xe0] = *(undefined8 *)(pfVar20 + 0xe0);
  param_2[0xe1] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xe6);
  param_2[0xe2] = *(undefined8 *)(pfVar20 + 0xe4);
  param_2[0xe3] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xea);
  param_2[0xe4] = *(undefined8 *)(pfVar20 + 0xe8);
  param_2[0xe5] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xee);
  param_2[0xe6] = *(undefined8 *)(pfVar20 + 0xec);
  param_2[0xe7] = uVar19;
  param_2[0xe8] = *(undefined8 *)(pfVar20 + 0x153);
  *(float *)(param_2 + 0xe9) = pfVar20[0x155];
  param_2[0xea] = *(undefined8 *)(pfVar20 + 0x153);
  *(float *)(param_2 + 0xeb) = pfVar20[0x155];
  param_2[0xec] = *(undefined8 *)(pfVar20 + 0x150);
  *(float *)(param_2 + 0xed) = pfVar20[0x152];
  uVar19 = *(undefined8 *)(pfVar20 + 0xa2);
  param_2[0xee] = *(undefined8 *)(pfVar20 + 0xa0);
  param_2[0xef] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xa6);
  param_2[0xf0] = *(undefined8 *)(pfVar20 + 0xa4);
  param_2[0xf1] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xaa);
  param_2[0xf2] = *(undefined8 *)(pfVar20 + 0xa8);
  param_2[0xf3] = uVar19;
  uVar19 = *(undefined8 *)(pfVar20 + 0xae);
  param_2[0xf4] = *(undefined8 *)(pfVar20 + 0xac);
  param_2[0xf5] = uVar19;
  uVar1 = *(undefined4 *)(param_1 + 0x1214);
  uVar16 = *(undefined4 *)(param_1 + 0x1218);
  uVar24 = *(uint *)(param_1 + 0x121c);
  *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_1 + 0x1210);
  *(undefined4 *)((longlong)param_2 + 0x884) = uVar1;
  *(undefined4 *)(param_2 + 0x111) = uVar16;
  *(uint *)((longlong)param_2 + 0x88c) = uVar24 ^ 0x80000000;
  pfVar26 = (float *)FUN_141c16400(puVar22,&param_6);
  fVar40 = pfVar26[1];
  *(float *)(param_2 + 0x112) = *pfVar26 + *pfVar26;
  *(float *)((longlong)param_2 + 0x894) = fVar40 + fVar40;
  pfVar26 = (float *)FUN_141c16400(pfVar20,&param_6);
  fVar40 = *pfVar26;
  fVar42 = pfVar26[1];
  param_2[0x11e] = uVar17;
  param_2[0x11f] = uVar18;
  *(float *)(param_2 + 0x113) = fVar40 + fVar40;
  *(float *)((longlong)param_2 + 0x89c) = fVar42 + fVar42;
  uVar17 = *(undefined8 *)(param_1 + 0xf98);
  param_2[0x120] = *(undefined8 *)(param_1 + 0xf90);
  param_2[0x121] = uVar17;
  uVar17 = *(undefined8 *)(param_1 + 4000);
  uVar18 = *(undefined8 *)(param_1 + 0xfa8);
  *(undefined4 *)(param_2 + 0x124) = uVar32;
  param_2[0x122] = uVar17;
  param_2[0x123] = uVar18;
  *(undefined4 *)((longlong)param_2 + 0x924) = uVar35;
  fVar40 = *(float *)((longlong)puVar22 + 0x554);
  fVar42 = pfVar20[0x155];
  param_2[0x128] =
       CONCAT44(*(float *)(puVar22 + 0xaa) - pfVar20[0x154],
                *(float *)((longlong)puVar22 + 0x54c) - pfVar20[0x153]);
  *(float *)(param_2 + 0x129) = fVar40 - fVar42;
  if (*(char *)(param_1 + 0x11b4) == '\0') {
    uVar32 = 0x3f800000;
  }
  else {
    uVar32 = 0xbf800000;
  }
  lVar31 = 0;
  *(undefined4 *)((longlong)param_2 + 0x94c) = uVar32;
  *(undefined4 *)(param_2 + 0x12a) = DAT_1464aaa4c;
  *(undefined4 *)((longlong)param_2 + 0x96c) = 0;
  *(undefined4 *)(param_2 + 0x12e) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xc4c) = 0;
  fVar44 = *(float *)(puVar22 + 0x52);
  fVar46 = *(float *)((longlong)puVar22 + 0x294);
  fVar41 = *(float *)(puVar22 + 0x53);
  fVar43 = *(float *)((longlong)puVar22 + 0x29c);
  fVar45 = *(float *)(puVar22 + 0x50);
  fVar2 = *(float *)((longlong)puVar22 + 0x284);
  fVar36 = *(float *)(puVar22 + 0x51);
  fVar37 = *(float *)((longlong)puVar22 + 0x28c);
  fVar38 = *(float *)(puVar22 + 0x54);
  fVar39 = *(float *)((longlong)puVar22 + 0x2a4);
  fVar51 = *(float *)(puVar22 + 0x55);
  fVar57 = *(float *)((longlong)puVar22 + 0x2ac);
  fVar63 = *(float *)(puVar22 + 0x56);
  fVar69 = *(float *)((longlong)puVar22 + 0x2b4);
  fVar13 = *(float *)(puVar22 + 0x57);
  fVar14 = *(float *)((longlong)puVar22 + 700);
  fVar40 = *(float *)(param_1 + 0xed8);
  fVar42 = *(float *)(param_1 + 0xee8);
  *(float *)(param_2 + 0x60) = fVar45 * 1.0 + fVar44 * 0.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x304) = fVar2 * 1.0 + fVar46 * 0.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 0x61) = fVar36 * 1.0 + fVar41 * 0.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x30c) = fVar37 * 1.0 + fVar43 * 0.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x62) = fVar45 * 0.0 + fVar44 * 1.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x314) = fVar2 * 0.0 + fVar46 * 1.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 99) = fVar36 * 0.0 + fVar41 * 1.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x31c) = fVar37 * 0.0 + fVar43 * 1.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 100) = fVar45 * 0.0 + fVar44 * 0.0 + fVar40 * fVar38 + fVar63 * 1.0;
  *(float *)((longlong)param_2 + 0x324) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar40 * fVar39 + fVar69 * 1.0;
  *(float *)(param_2 + 0x65) = fVar36 * 0.0 + fVar41 * 0.0 + fVar40 * fVar51 + fVar13 * 1.0;
  *(float *)((longlong)param_2 + 0x32c) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar40 * fVar57 + fVar14 * 1.0;
  *(float *)(param_2 + 0x66) = fVar45 * 0.0 + fVar44 * 0.0 + fVar42 * fVar38 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x334) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar42 * fVar39 + fVar69 * 0.0;
  *(float *)(param_2 + 0x67) = fVar36 * 0.0 + fVar41 * 0.0 + fVar42 * fVar51 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x33c) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar42 * fVar57 + fVar14 * 0.0;
  fVar44 = *(float *)(puVar22 + 0x5a);
  fVar46 = *(float *)((longlong)puVar22 + 0x2d4);
  fVar41 = *(float *)(puVar22 + 0x5b);
  fVar43 = *(float *)((longlong)puVar22 + 0x2dc);
  fVar45 = *(float *)(puVar22 + 0x58);
  fVar2 = *(float *)((longlong)puVar22 + 0x2c4);
  fVar36 = *(float *)(puVar22 + 0x59);
  fVar37 = *(float *)((longlong)puVar22 + 0x2cc);
  fVar38 = *(float *)(puVar22 + 0x5c);
  fVar39 = *(float *)((longlong)puVar22 + 0x2e4);
  fVar51 = *(float *)(puVar22 + 0x5d);
  fVar57 = *(float *)((longlong)puVar22 + 0x2ec);
  fVar63 = *(float *)(puVar22 + 0x5e);
  fVar69 = *(float *)((longlong)puVar22 + 0x2f4);
  fVar13 = *(float *)(puVar22 + 0x5f);
  fVar14 = *(float *)((longlong)puVar22 + 0x2fc);
  fVar40 = *(float *)(param_1 + 0xf18);
  fVar42 = *(float *)(param_1 + 0xf28);
  *(float *)(param_2 + 0x68) = fVar45 * 1.0 + fVar44 * 0.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x344) = fVar2 * 1.0 + fVar46 * 0.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 0x69) = fVar36 * 1.0 + fVar41 * 0.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x34c) = fVar37 * 1.0 + fVar43 * 0.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x6a) = fVar45 * 0.0 + fVar44 * 1.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x354) = fVar2 * 0.0 + fVar46 * 1.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 0x6b) = fVar36 * 0.0 + fVar41 * 1.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x35c) = fVar37 * 0.0 + fVar43 * 1.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x6c) = fVar45 * 0.0 + fVar44 * 0.0 + fVar40 * fVar38 + fVar63 * 1.0;
  *(float *)((longlong)param_2 + 0x364) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar40 * fVar39 + fVar69 * 1.0;
  *(float *)(param_2 + 0x6d) = fVar36 * 0.0 + fVar41 * 0.0 + fVar40 * fVar51 + fVar13 * 1.0;
  *(float *)((longlong)param_2 + 0x36c) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar40 * fVar57 + fVar14 * 1.0;
  *(float *)(param_2 + 0x6e) = fVar45 * 0.0 + fVar44 * 0.0 + fVar42 * fVar38 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x374) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar42 * fVar39 + fVar69 * 0.0;
  *(float *)(param_2 + 0x6f) = fVar36 * 0.0 + fVar41 * 0.0 + fVar42 * fVar51 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x37c) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar42 * fVar57 + fVar14 * 0.0;
  fVar44 = *(float *)(puVar22 + 0x9a);
  fVar46 = *(float *)((longlong)puVar22 + 0x4d4);
  fVar41 = *(float *)(puVar22 + 0x9b);
  fVar43 = *(float *)((longlong)puVar22 + 0x4dc);
  fVar45 = *(float *)(puVar22 + 0x98);
  fVar2 = *(float *)((longlong)puVar22 + 0x4c4);
  fVar36 = *(float *)(puVar22 + 0x99);
  fVar37 = *(float *)((longlong)puVar22 + 0x4cc);
  fVar38 = *(float *)(puVar22 + 0x9c);
  fVar39 = *(float *)((longlong)puVar22 + 0x4e4);
  fVar51 = *(float *)(puVar22 + 0x9d);
  fVar57 = *(float *)((longlong)puVar22 + 0x4ec);
  fVar63 = *(float *)(puVar22 + 0x9e);
  fVar69 = *(float *)((longlong)puVar22 + 0x4f4);
  fVar13 = *(float *)(puVar22 + 0x9f);
  fVar14 = *(float *)((longlong)puVar22 + 0x4fc);
  fVar40 = *(float *)(param_1 + 0xed8);
  fVar42 = *(float *)(param_1 + 0xee8);
  *(float *)(param_2 + 0x70) = fVar45 * 1.0 + fVar44 * 0.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 900) = fVar2 * 1.0 + fVar46 * 0.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 0x71) = fVar36 * 1.0 + fVar41 * 0.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x38c) = fVar37 * 1.0 + fVar43 * 0.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x72) = fVar45 * 0.0 + fVar44 * 1.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x394) = fVar2 * 0.0 + fVar46 * 1.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 0x73) = fVar36 * 0.0 + fVar41 * 1.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x39c) = fVar37 * 0.0 + fVar43 * 1.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x74) = fVar45 * 0.0 + fVar44 * 0.0 + fVar40 * fVar38 + fVar63 * 1.0;
  *(float *)((longlong)param_2 + 0x3a4) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar40 * fVar39 + fVar69 * 1.0;
  *(float *)(param_2 + 0x75) = fVar36 * 0.0 + fVar41 * 0.0 + fVar40 * fVar51 + fVar13 * 1.0;
  *(float *)((longlong)param_2 + 0x3ac) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar40 * fVar57 + fVar14 * 1.0;
  *(float *)(param_2 + 0x76) = fVar45 * 0.0 + fVar44 * 0.0 + fVar42 * fVar38 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x3b4) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar42 * fVar39 + fVar69 * 0.0;
  *(float *)(param_2 + 0x77) = fVar36 * 0.0 + fVar41 * 0.0 + fVar42 * fVar51 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x3bc) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar42 * fVar57 + fVar14 * 0.0;
  fVar44 = pfVar20[0x134];
  fVar46 = pfVar20[0x135];
  fVar41 = pfVar20[0x136];
  fVar43 = pfVar20[0x137];
  fVar45 = pfVar20[0x130];
  fVar2 = pfVar20[0x131];
  fVar36 = pfVar20[0x132];
  fVar37 = pfVar20[0x133];
  fVar38 = pfVar20[0x138];
  fVar39 = pfVar20[0x139];
  fVar51 = pfVar20[0x13a];
  fVar57 = pfVar20[0x13b];
  fVar63 = pfVar20[0x13c];
  fVar69 = pfVar20[0x13d];
  fVar13 = pfVar20[0x13e];
  fVar14 = pfVar20[0x13f];
  fVar40 = *(float *)(param_1 + 0xed8);
  fVar42 = *(float *)(param_1 + 0xee8);
  *(float *)(param_2 + 0xf6) = fVar45 * 1.0 + fVar44 * 0.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x7b4) = fVar2 * 1.0 + fVar46 * 0.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 0xf7) = fVar36 * 1.0 + fVar41 * 0.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x7bc) = fVar37 * 1.0 + fVar43 * 0.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0xf8) = fVar45 * 0.0 + fVar44 * 1.0 + fVar38 * 0.0 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x7c4) = fVar2 * 0.0 + fVar46 * 1.0 + fVar39 * 0.0 + fVar69 * 0.0;
  *(float *)(param_2 + 0xf9) = fVar36 * 0.0 + fVar41 * 1.0 + fVar51 * 0.0 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x7cc) = fVar37 * 0.0 + fVar43 * 1.0 + fVar57 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0xfa) = fVar45 * 0.0 + fVar44 * 0.0 + fVar40 * fVar38 + fVar63 * 1.0;
  *(float *)((longlong)param_2 + 0x7d4) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar40 * fVar39 + fVar69 * 1.0;
  *(float *)(param_2 + 0xfb) = fVar36 * 0.0 + fVar41 * 0.0 + fVar40 * fVar51 + fVar13 * 1.0;
  *(float *)((longlong)param_2 + 0x7dc) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar40 * fVar57 + fVar14 * 1.0;
  *(float *)(param_2 + 0xfc) = fVar45 * 0.0 + fVar44 * 0.0 + fVar42 * fVar38 + fVar63 * 0.0;
  *(float *)((longlong)param_2 + 0x7e4) =
       fVar2 * 0.0 + fVar46 * 0.0 + fVar42 * fVar39 + fVar69 * 0.0;
  *(float *)(param_2 + 0xfd) = fVar36 * 0.0 + fVar41 * 0.0 + fVar42 * fVar51 + fVar13 * 0.0;
  *(float *)((longlong)param_2 + 0x7ec) =
       fVar37 * 0.0 + fVar43 * 0.0 + fVar42 * fVar57 + fVar14 * 0.0;
  fVar33 = pfVar20[0x150] - *(float *)(puVar22 + 0xa8);
  fStack_160 = *(float *)(puVar22 + 5);
  fStack_15c = *(float *)((longlong)puVar22 + 0x2c);
  local_178 = *(undefined4 *)(puVar22 + 2);
  uStack_174 = *(undefined4 *)((longlong)puVar22 + 0x14);
  uStack_170 = *(undefined4 *)(puVar22 + 3);
  uStack_16c = *(undefined4 *)((longlong)puVar22 + 0x1c);
  fVar40 = *(float *)(puVar22 + 0x6a);
  fVar42 = *(float *)(puVar22 + 0x6c);
  fVar44 = *(float *)(puVar22 + 0x6e);
  fVar46 = *(float *)((longlong)puVar22 + 0x354);
  fVar41 = *(float *)((longlong)puVar22 + 0x364);
  fVar43 = *(float *)((longlong)puVar22 + 0x374);
  fVar45 = *(float *)(puVar22 + 0x6b);
  fVar2 = *(float *)(puVar22 + 0x6d);
  fVar36 = *(float *)(puVar22 + 0x6f);
  fVar37 = *(float *)((longlong)puVar22 + 0x35c);
  param_6 = (float *)CONCAT44(param_6._4_4_,pfVar20[0x151] - *(float *)((longlong)puVar22 + 0x544));
  param_7._0_4_ = pfVar20[0x152] - *(float *)(puVar22 + 0xa9);
  local_128 = ZEXT416(*(uint *)(puVar22 + 0x68));
  fVar38 = *(float *)((longlong)puVar22 + 0x344);
  _local_148 = ZEXT416(*(uint *)(puVar22 + 0x69));
  _local_138 = ZEXT416(*(uint *)((longlong)puVar22 + 0x34c));
  local_188 = *puVar22;
  uStack_180 = puVar22[1];
  uStack_150 = puVar22[7];
  uStack_158 = (undefined4)puVar22[6];
  uStack_154 = (undefined4)((ulonglong)puVar22[6] >> 0x20);
  local_168 = CONCAT44(*(float *)((longlong)puVar22 + 0x24) - *(float *)((longlong)puVar22 + 0x564),
                       *(float *)(puVar22 + 4) - *(float *)(puVar22 + 0xac));
  FViewMatrices::InvertProjectionMatrix(&local_118,&local_188);
  fVar39 = *(float *)((longlong)puVar22 + 0x36c);
  fVar57 = pfVar20[4];
  fVar63 = pfVar20[5];
  fVar69 = pfVar20[6];
  fVar13 = pfVar20[7];
  fVar51 = *(float *)((longlong)puVar22 + 0x37c);
  fVar47 = fStack_114 * fVar38 + local_118 * (float)local_128._0_4_ +
           fStack_110 * (float)local_148._0_4_ + fStack_10c * (float)local_138._0_4_;
  fVar52 = fStack_114 * fVar46 + local_118 * fVar40 + fStack_110 * fVar45 + fStack_10c * fVar37;
  fVar58 = fStack_114 * fVar41 + local_118 * fVar42 + fStack_110 * fVar2 + fStack_10c * fVar39;
  fVar64 = fStack_114 * fVar43 + local_118 * fVar44 + fStack_110 * fVar36 + fStack_10c * fVar51;
  fVar48 = fStack_104 * fVar38 + local_108 * (float)local_128._0_4_ +
           fStack_100 * (float)local_148._0_4_ + fStack_fc * (float)local_138._0_4_;
  fVar53 = fStack_104 * fVar46 + local_108 * fVar40 + fStack_100 * fVar45 + fStack_fc * fVar37;
  fVar59 = fStack_104 * fVar41 + local_108 * fVar42 + fStack_100 * fVar2 + fStack_fc * fVar39;
  fVar65 = fStack_104 * fVar43 + local_108 * fVar44 + fStack_100 * fVar36 + fStack_fc * fVar51;
  fVar49 = fStack_f4 * fVar38 + local_f8 * (float)local_128._0_4_ +
           fStack_f0 * (float)local_148._0_4_ + fStack_ec * (float)local_138._0_4_;
  fVar54 = fStack_f4 * fVar46 + local_f8 * fVar40 + fStack_f0 * fVar45 + fStack_ec * fVar37;
  fVar60 = fStack_f4 * fVar41 + local_f8 * fVar42 + fStack_f0 * fVar2 + fStack_ec * fVar39;
  fVar66 = fStack_f4 * fVar43 + local_f8 * fVar44 + fStack_f0 * fVar36 + fStack_ec * fVar51;
  fVar14 = pfVar20[10];
  fVar15 = pfVar20[0xb];
  fVar34 = pfVar20[8] - pfVar20[0x158];
  fVar50 = fStack_e4 * fVar38 + local_e8 * (float)local_128._0_4_ +
           fStack_e0 * (float)local_148._0_4_ + fStack_dc * (float)local_138._0_4_;
  fVar55 = fStack_e4 * fVar46 + local_e8 * fVar40 + fStack_e0 * fVar45 + fStack_dc * fVar37;
  fVar61 = fStack_e4 * fVar41 + local_e8 * fVar42 + fStack_e0 * fVar2 + fStack_dc * fVar39;
  fVar67 = fStack_e4 * fVar43 + local_e8 * fVar44 + fStack_e0 * fVar36 + fStack_dc * fVar51;
  fVar40 = pfVar20[0xd4];
  fVar42 = pfVar20[0xd5];
  fVar44 = pfVar20[0xd6];
  fVar46 = pfVar20[0xd7];
  fVar41 = pfVar20[0xd0];
  fVar43 = pfVar20[0xd1];
  fVar45 = pfVar20[0xd2];
  fVar2 = pfVar20[0xd3];
  fVar36 = pfVar20[0xd8];
  fVar37 = pfVar20[0xd9];
  fVar38 = pfVar20[0xda];
  fVar39 = pfVar20[0xdb];
  fVar51 = pfVar20[0xdc];
  fVar56 = pfVar20[0xdd];
  fVar62 = pfVar20[0xde];
  fVar68 = pfVar20[0xdf];
  fVar70 = pfVar20[9] - pfVar20[0x159];
  fVar71 = fVar41 * 1.0 + fVar40 * 0.0 + fVar36 * 0.0 + fVar51 * 0.0;
  fVar72 = fVar43 * 1.0 + fVar42 * 0.0 + fVar37 * 0.0 + fVar56 * 0.0;
  fVar73 = fVar45 * 1.0 + fVar44 * 0.0 + fVar38 * 0.0 + fVar62 * 0.0;
  fVar74 = fVar2 * 1.0 + fVar46 * 0.0 + fVar39 * 0.0 + fVar68 * 0.0;
  fVar75 = fVar41 * 0.0 + fVar40 * 1.0 + fVar36 * 0.0 + fVar51 * 0.0;
  fVar76 = fVar43 * 0.0 + fVar42 * 1.0 + fVar37 * 0.0 + fVar56 * 0.0;
  fVar77 = fVar45 * 0.0 + fVar44 * 1.0 + fVar38 * 0.0 + fVar62 * 0.0;
  fVar78 = fVar2 * 0.0 + fVar46 * 1.0 + fVar39 * 0.0 + fVar68 * 0.0;
  fVar79 = fVar41 * 0.0 + fVar40 * 0.0 + fVar36 * 1.0 + fVar51 * 0.0;
  fVar80 = fVar43 * 0.0 + fVar42 * 0.0 + fVar37 * 1.0 + fVar56 * 0.0;
  fVar81 = fVar45 * 0.0 + fVar44 * 0.0 + fVar38 * 1.0 + fVar62 * 0.0;
  fVar82 = fVar2 * 0.0 + fVar46 * 0.0 + fVar39 * 1.0 + fVar68 * 0.0;
  fStack_e4 = param_6._0_4_;
  fStack_e0 = param_7._0_4_;
  fStack_dc = 1.0;
  fVar36 = fVar33 * fVar41 + param_6._0_4_ * fVar40 + param_7._0_4_ * fVar36 + fVar51 * 1.0;
  fVar37 = fVar33 * fVar43 + param_6._0_4_ * fVar42 + param_7._0_4_ * fVar37 + fVar56 * 1.0;
  fVar38 = fVar33 * fVar45 + param_6._0_4_ * fVar44 + param_7._0_4_ * fVar38 + fVar62 * 1.0;
  fVar39 = fVar33 * fVar2 + param_6._0_4_ * fVar46 + param_7._0_4_ * fVar39 + fVar68 * 1.0;
  fVar40 = *pfVar20;
  fVar42 = pfVar20[1];
  fVar44 = pfVar20[2];
  fVar46 = pfVar20[3];
  fVar41 = pfVar20[0xc];
  fVar43 = pfVar20[0xd];
  fVar45 = pfVar20[0xe];
  fVar2 = pfVar20[0xf];
  fVar83 = fVar72 * fVar57 + fVar71 * fVar40 + fVar73 * fVar34 + fVar74 * fVar41;
  fVar84 = fVar72 * fVar63 + fVar71 * fVar42 + fVar73 * fVar70 + fVar74 * fVar43;
  fVar85 = fVar72 * fVar69 + fVar71 * fVar44 + fVar73 * fVar14 + fVar74 * fVar45;
  fVar86 = fVar72 * fVar13 + fVar71 * fVar46 + fVar73 * fVar15 + fVar74 * fVar2;
  fVar71 = fVar76 * fVar57 + fVar75 * fVar40 + fVar77 * fVar34 + fVar78 * fVar41;
  fVar72 = fVar76 * fVar63 + fVar75 * fVar42 + fVar77 * fVar70 + fVar78 * fVar43;
  fVar73 = fVar76 * fVar69 + fVar75 * fVar44 + fVar77 * fVar14 + fVar78 * fVar45;
  fVar74 = fVar76 * fVar13 + fVar75 * fVar46 + fVar77 * fVar15 + fVar78 * fVar2;
  fVar51 = fVar80 * fVar57 + fVar79 * fVar40 + fVar81 * fVar34 + fVar82 * fVar41;
  fVar56 = fVar80 * fVar63 + fVar79 * fVar42 + fVar81 * fVar70 + fVar82 * fVar43;
  fVar62 = fVar80 * fVar69 + fVar79 * fVar44 + fVar81 * fVar14 + fVar82 * fVar45;
  fVar68 = fVar80 * fVar13 + fVar79 * fVar46 + fVar81 * fVar15 + fVar82 * fVar2;
  fVar40 = fVar37 * fVar57 + fVar36 * fVar40 + fVar38 * fVar34 + fVar39 * fVar41;
  fVar42 = fVar37 * fVar63 + fVar36 * fVar42 + fVar38 * fVar70 + fVar39 * fVar43;
  fVar44 = fVar37 * fVar69 + fVar36 * fVar44 + fVar38 * fVar14 + fVar39 * fVar45;
  fVar46 = fVar37 * fVar13 + fVar36 * fVar46 + fVar38 * fVar15 + fVar39 * fVar2;
  *(float *)(param_2 + 0xfe) = fVar52 * fVar71 + fVar47 * fVar83 + fVar58 * fVar51 + fVar64 * fVar40
  ;
  *(float *)((longlong)param_2 + 0x7f4) =
       fVar52 * fVar72 + fVar47 * fVar84 + fVar58 * fVar56 + fVar64 * fVar42;
  *(float *)(param_2 + 0xff) = fVar52 * fVar73 + fVar47 * fVar85 + fVar58 * fVar62 + fVar64 * fVar44
  ;
  *(float *)((longlong)param_2 + 0x7fc) =
       fVar52 * fVar74 + fVar47 * fVar86 + fVar58 * fVar68 + fVar64 * fVar46;
  *(float *)(param_2 + 0x100) =
       fVar53 * fVar71 + fVar48 * fVar83 + fVar59 * fVar51 + fVar65 * fVar40;
  *(float *)((longlong)param_2 + 0x804) =
       fVar53 * fVar72 + fVar48 * fVar84 + fVar59 * fVar56 + fVar65 * fVar42;
  *(float *)(param_2 + 0x101) =
       fVar53 * fVar73 + fVar48 * fVar85 + fVar59 * fVar62 + fVar65 * fVar44;
  *(float *)((longlong)param_2 + 0x80c) =
       fVar53 * fVar74 + fVar48 * fVar86 + fVar59 * fVar68 + fVar65 * fVar46;
  *(float *)(param_2 + 0x102) =
       fVar54 * fVar71 + fVar49 * fVar83 + fVar60 * fVar51 + fVar66 * fVar40;
  *(float *)((longlong)param_2 + 0x814) =
       fVar54 * fVar72 + fVar49 * fVar84 + fVar60 * fVar56 + fVar66 * fVar42;
  *(float *)(param_2 + 0x103) =
       fVar54 * fVar73 + fVar49 * fVar85 + fVar60 * fVar62 + fVar66 * fVar44;
  *(float *)((longlong)param_2 + 0x81c) =
       fVar54 * fVar74 + fVar49 * fVar86 + fVar60 * fVar68 + fVar66 * fVar46;
  *(float *)(param_2 + 0x104) =
       fVar55 * fVar71 + fVar50 * fVar83 + fVar61 * fVar51 + fVar67 * fVar40;
  *(float *)((longlong)param_2 + 0x824) =
       fVar55 * fVar72 + fVar50 * fVar84 + fVar61 * fVar56 + fVar67 * fVar42;
  *(float *)(param_2 + 0x105) =
       fVar55 * fVar73 + fVar50 * fVar85 + fVar61 * fVar62 + fVar67 * fVar44;
  *(float *)((longlong)param_2 + 0x82c) =
       fVar55 * fVar74 + fVar50 * fVar86 + fVar61 * fVar68 + fVar67 * fVar46;
  fVar40 = pfVar20[0x158];
  fVar42 = pfVar20[0x159];
  uVar32 = *(undefined4 *)((longlong)puVar22 + 0x564);
  *(undefined4 *)(param_2 + 0x10e) = *(undefined4 *)(puVar22 + 0xac);
  *(undefined4 *)((longlong)param_2 + 0x874) = uVar32;
  *(float *)(param_2 + 0x10f) = fVar40;
  *(float *)((longlong)param_2 + 0x87c) = fVar42;
  local_178 = *(undefined4 *)(puVar22 + 0x1a);
  uStack_174 = *(undefined4 *)((longlong)puVar22 + 0xd4);
  uStack_170 = *(undefined4 *)(puVar22 + 0x1b);
  uStack_16c = *(undefined4 *)((longlong)puVar22 + 0xdc);
  fStack_160 = *(float *)(puVar22 + 0x1d);
  fStack_15c = *(float *)((longlong)puVar22 + 0xec);
  fVar40 = *(float *)(puVar22 + 0x6a);
  fVar42 = *(float *)(puVar22 + 0x6c);
  fVar44 = *(float *)(puVar22 + 0x6e);
  fVar46 = *(float *)((longlong)puVar22 + 0x354);
  fVar41 = *(float *)((longlong)puVar22 + 0x364);
  fVar43 = *(float *)((longlong)puVar22 + 0x374);
  fVar45 = *(float *)(puVar22 + 0x6b);
  fVar2 = *(float *)(puVar22 + 0x6d);
  fVar36 = *(float *)(puVar22 + 0x6f);
  fVar37 = *(float *)((longlong)puVar22 + 0x35c);
  _local_148 = ZEXT416(*(uint *)(puVar22 + 0x68));
  _local_138 = ZEXT416(*(uint *)((longlong)puVar22 + 0x344));
  local_128 = ZEXT416(*(uint *)(puVar22 + 0x69));
  _local_d8 = ZEXT416(*(uint *)((longlong)puVar22 + 0x34c));
  local_188 = puVar22[0x18];
  uStack_180 = puVar22[0x19];
  uStack_150 = puVar22[0x1f];
  uStack_158 = (undefined4)puVar22[0x1e];
  uStack_154 = (undefined4)((ulonglong)puVar22[0x1e] >> 0x20);
  local_168 = CONCAT44(*(float *)((longlong)puVar22 + 0xe4) - *(float *)((longlong)puVar22 + 0x564),
                       *(float *)(puVar22 + 0x1c) - *(float *)(puVar22 + 0xac));
  local_e8 = fVar33;
  FViewMatrices::InvertProjectionMatrix(&local_118,&local_188);
  fVar53 = fStack_dc;
  uVar32 = local_138._0_4_;
  uVar35 = local_d8._0_4_;
  fVar38 = *(float *)((longlong)puVar22 + 0x36c);
  fVar39 = *(float *)((longlong)puVar22 + 0x37c);
  fVar55 = fStack_114 * (float)local_138._0_4_ + local_118 * (float)local_148._0_4_ +
           fStack_110 * (float)local_128._0_4_ + fStack_10c * (float)local_d8._0_4_;
  fVar58 = fStack_114 * fVar46 + local_118 * fVar40 + fStack_110 * fVar45 + fStack_10c * fVar37;
  fVar59 = fStack_114 * fVar41 + local_118 * fVar42 + fStack_110 * fVar2 + fStack_10c * fVar38;
  fVar60 = fStack_114 * fVar43 + local_118 * fVar44 + fStack_110 * fVar36 + fStack_10c * fVar39;
  local_d8._0_4_ =
       fStack_104 * (float)local_138._0_4_ + local_108 * (float)local_148._0_4_ +
       fStack_100 * (float)local_128._0_4_ + fStack_fc * (float)local_d8._0_4_;
  local_d8._4_4_ =
       fStack_104 * fVar46 + local_108 * fVar40 + fStack_100 * fVar45 + fStack_fc * fVar37;
  fStack_d0 = fStack_104 * fVar41 + local_108 * fVar42 + fStack_100 * fVar2 + fStack_fc * fVar38;
  fStack_cc = fStack_104 * fVar43 + local_108 * fVar44 + fStack_100 * fVar36 + fStack_fc * fVar39;
  fVar51 = pfVar20[0xdc];
  fVar57 = pfVar20[0xdd];
  fVar63 = pfVar20[0xde];
  fVar69 = pfVar20[0xdf];
  fVar13 = pfVar20[0x34];
  fVar14 = pfVar20[0x35];
  fVar15 = pfVar20[0x36];
  fVar56 = pfVar20[0x37];
  local_138._0_4_ =
       fStack_f4 * (float)local_138._0_4_ + local_f8 * (float)local_148._0_4_ +
       fStack_f0 * (float)local_128._0_4_ + fStack_ec * (float)uVar35;
  local_138._4_4_ = fStack_f4 * fVar46 + local_f8 * fVar40 + fStack_f0 * fVar45 + fStack_ec * fVar37
  ;
  fStack_130 = fStack_f4 * fVar41 + local_f8 * fVar42 + fStack_f0 * fVar2 + fStack_ec * fVar38;
  fStack_12c = fStack_f4 * fVar43 + local_f8 * fVar44 + fStack_f0 * fVar36 + fStack_ec * fVar39;
  fStack_dc = 1.0;
  fVar62 = pfVar20[0xd0];
  fVar68 = pfVar20[0xd1];
  fVar34 = pfVar20[0xd2];
  fVar47 = pfVar20[0xd3];
  local_168 = *(undefined8 *)(pfVar20 + 0x38);
  fStack_160 = pfVar20[0x3a];
  fStack_15c = pfVar20[0x3b];
  fVar48 = pfVar20[0xd4];
  fVar49 = pfVar20[0xd5];
  fVar50 = pfVar20[0xd6];
  fVar52 = pfVar20[0xd7];
  fVar54 = pfVar20[0x38] - pfVar20[0x158];
  fVar61 = pfVar20[0x39] - pfVar20[0x159];
  local_148._0_4_ =
       fStack_e4 * (float)uVar32 + local_e8 * (float)local_148._0_4_ +
       fStack_e0 * (float)local_128._0_4_ + fVar53 * (float)uVar35;
  local_148._4_4_ = fStack_e4 * fVar46 + local_e8 * fVar40 + fStack_e0 * fVar45 + fVar53 * fVar37;
  fStack_140 = fStack_e4 * fVar41 + local_e8 * fVar42 + fStack_e0 * fVar2 + fVar53 * fVar38;
  fStack_13c = fStack_e4 * fVar43 + local_e8 * fVar44 + fStack_e0 * fVar36 + fVar53 * fVar39;
  fVar40 = pfVar20[0xd8];
  fVar42 = pfVar20[0xd9];
  fVar44 = pfVar20[0xda];
  fVar46 = pfVar20[0xdb];
  fVar53 = fVar62 * 1.0 + fVar48 * 0.0 + fVar40 * 0.0 + fVar51 * 0.0;
  fVar64 = fVar68 * 1.0 + fVar49 * 0.0 + fVar42 * 0.0 + fVar57 * 0.0;
  fVar65 = fVar34 * 1.0 + fVar50 * 0.0 + fVar44 * 0.0 + fVar63 * 0.0;
  fVar66 = fVar47 * 1.0 + fVar52 * 0.0 + fVar46 * 0.0 + fVar69 * 0.0;
  fVar67 = fVar62 * 0.0 + fVar48 * 1.0 + fVar40 * 0.0 + fVar51 * 0.0;
  fVar71 = fVar68 * 0.0 + fVar49 * 1.0 + fVar42 * 0.0 + fVar57 * 0.0;
  fVar72 = fVar34 * 0.0 + fVar50 * 1.0 + fVar44 * 0.0 + fVar63 * 0.0;
  fVar73 = fVar47 * 0.0 + fVar52 * 1.0 + fVar46 * 0.0 + fVar69 * 0.0;
  fVar74 = fVar62 * 0.0 + fVar48 * 0.0 + fVar40 * 1.0 + fVar51 * 0.0;
  fVar70 = fVar68 * 0.0 + fVar49 * 0.0 + fVar42 * 1.0 + fVar57 * 0.0;
  fVar75 = fVar34 * 0.0 + fVar50 * 0.0 + fVar44 * 1.0 + fVar63 * 0.0;
  fVar76 = fVar47 * 0.0 + fVar52 * 0.0 + fVar46 * 1.0 + fVar69 * 0.0;
  fVar41 = pfVar20[0x30];
  fVar43 = pfVar20[0x31];
  fVar45 = pfVar20[0x32];
  fVar2 = pfVar20[0x33];
  fVar36 = pfVar20[0x3c];
  fVar37 = pfVar20[0x3d];
  fVar38 = pfVar20[0x3e];
  fVar39 = pfVar20[0x3f];
  fVar40 = fVar33 * fVar62 + param_6._0_4_ * fVar48 + param_7._0_4_ * fVar40 + fVar51 * 1.0;
  fVar42 = fVar33 * fVar68 + param_6._0_4_ * fVar49 + param_7._0_4_ * fVar42 + fVar57 * 1.0;
  fVar44 = fVar33 * fVar34 + param_6._0_4_ * fVar50 + param_7._0_4_ * fVar44 + fVar63 * 1.0;
  fVar46 = fVar33 * fVar47 + param_6._0_4_ * fVar52 + param_7._0_4_ * fVar46 + fVar69 * 1.0;
  fVar48 = fVar64 * fVar13 + fVar53 * fVar41 + fVar65 * fVar54 + fVar66 * fVar36;
  fVar49 = fVar64 * fVar14 + fVar53 * fVar43 + fVar65 * fVar61 + fVar66 * fVar37;
  fVar50 = fVar64 * fVar15 + fVar53 * fVar45 + fVar65 * fStack_160 + fVar66 * fVar38;
  fVar52 = fVar64 * fVar56 + fVar53 * fVar2 + fVar65 * fStack_15c + fVar66 * fVar39;
  fVar62 = fVar71 * fVar13 + fVar67 * fVar41 + fVar72 * fVar54 + fVar73 * fVar36;
  fVar68 = fVar71 * fVar14 + fVar67 * fVar43 + fVar72 * fVar61 + fVar73 * fVar37;
  fVar34 = fVar71 * fVar15 + fVar67 * fVar45 + fVar72 * fStack_160 + fVar73 * fVar38;
  fVar47 = fVar71 * fVar56 + fVar67 * fVar2 + fVar72 * fStack_15c + fVar73 * fVar39;
  fVar51 = fVar70 * fVar13 + fVar74 * fVar41 + fVar75 * fVar54 + fVar76 * fVar36;
  fVar57 = fVar70 * fVar14 + fVar74 * fVar43 + fVar75 * fVar61 + fVar76 * fVar37;
  fVar63 = fVar70 * fVar15 + fVar74 * fVar45 + fVar75 * fStack_160 + fVar76 * fVar38;
  fVar69 = fVar70 * fVar56 + fVar74 * fVar2 + fVar75 * fStack_15c + fVar76 * fVar39;
  fVar41 = fVar42 * fVar13 + fVar40 * fVar41 + fVar44 * fVar54 + fVar46 * fVar36;
  fVar43 = fVar42 * fVar14 + fVar40 * fVar43 + fVar44 * fVar61 + fVar46 * fVar37;
  fVar45 = fVar42 * fVar15 + fVar40 * fVar45 + fVar44 * fStack_160 + fVar46 * fVar38;
  fVar40 = fVar42 * fVar56 + fVar40 * fVar2 + fVar44 * fStack_15c + fVar46 * fVar39;
  *(float *)(param_2 + 0x106) =
       fVar58 * fVar62 + fVar55 * fVar48 + fVar59 * fVar51 + fVar60 * fVar41;
  *(float *)((longlong)param_2 + 0x834) =
       fVar58 * fVar68 + fVar55 * fVar49 + fVar59 * fVar57 + fVar60 * fVar43;
  *(float *)(param_2 + 0x107) =
       fVar58 * fVar34 + fVar55 * fVar50 + fVar59 * fVar63 + fVar60 * fVar45;
  *(float *)((longlong)param_2 + 0x83c) =
       fVar58 * fVar47 + fVar55 * fVar52 + fVar59 * fVar69 + fVar60 * fVar40;
  *(float *)(param_2 + 0x108) =
       (float)local_d8._4_4_ * fVar62 + (float)local_d8._0_4_ * fVar48 + fStack_d0 * fVar51 +
       fStack_cc * fVar41;
  *(float *)((longlong)param_2 + 0x844) =
       (float)local_d8._4_4_ * fVar68 + (float)local_d8._0_4_ * fVar49 + fStack_d0 * fVar57 +
       fStack_cc * fVar43;
  *(float *)(param_2 + 0x109) =
       (float)local_d8._4_4_ * fVar34 + (float)local_d8._0_4_ * fVar50 + fStack_d0 * fVar63 +
       fStack_cc * fVar45;
  *(float *)((longlong)param_2 + 0x84c) =
       (float)local_d8._4_4_ * fVar47 + (float)local_d8._0_4_ * fVar52 + fStack_d0 * fVar69 +
       fStack_cc * fVar40;
  *(float *)(param_2 + 0x10a) =
       (float)local_138._4_4_ * fVar62 + (float)local_138._0_4_ * fVar48 + fStack_130 * fVar51 +
       fStack_12c * fVar41;
  *(float *)((longlong)param_2 + 0x854) =
       (float)local_138._4_4_ * fVar68 + (float)local_138._0_4_ * fVar49 + fStack_130 * fVar57 +
       fStack_12c * fVar43;
  *(float *)(param_2 + 0x10b) =
       (float)local_138._4_4_ * fVar34 + (float)local_138._0_4_ * fVar50 + fStack_130 * fVar63 +
       fStack_12c * fVar45;
  *(float *)((longlong)param_2 + 0x85c) =
       (float)local_138._4_4_ * fVar47 + (float)local_138._0_4_ * fVar52 + fStack_130 * fVar69 +
       fStack_12c * fVar40;
  *(float *)(param_2 + 0x10c) =
       (float)local_148._4_4_ * fVar62 + (float)local_148._0_4_ * fVar48 + fStack_140 * fVar51 +
       fStack_13c * fVar41;
  *(float *)((longlong)param_2 + 0x864) =
       (float)local_148._4_4_ * fVar68 + (float)local_148._0_4_ * fVar49 + fStack_140 * fVar57 +
       fStack_13c * fVar43;
  *(float *)(param_2 + 0x10d) =
       (float)local_148._4_4_ * fVar34 + (float)local_148._0_4_ * fVar50 + fStack_140 * fVar63 +
       fStack_13c * fVar45;
  *(float *)((longlong)param_2 + 0x86c) =
       (float)local_148._4_4_ * fVar47 + (float)local_148._0_4_ * fVar52 + fStack_140 * fVar69 +
       fStack_13c * fVar40;
  uVar24 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c);
  *(undefined4 *)(param_2 + 0x127) = 0;
  *(float *)((longlong)param_2 + 0x984) = (float)(~(uVar24 >> 0xc) & 1);
  iVar23 = rand();
  *(int *)((longlong)param_2 + 0x974) = iVar23;
  *(undefined4 *)(param_2 + 0x12f) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x5c);
  if (((*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) & 0x8000000) == 0) ||
     (*(float *)(param_1 + 0x17c4) <= 0.0)) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  if ((*(char *)(param_1 + 0x11f4) != '\0') || (bVar21)) {
    uVar32 = 0x3f800000;
  }
  else {
    uVar32 = 0;
  }
  *(undefined4 *)(param_2 + 0x130) = uVar32;
  param_2[0x1a8] = 0;
  *(undefined4 *)(param_2 + 0x1a9) = 0;
  lVar28 = *(longlong *)(param_1 + 0x1a40);
  if (lVar28 != 0) {
    param_2[0x1a8] = *(undefined8 *)(lVar28 + 0x18);
    *(undefined4 *)(param_2 + 0x1a9) = *(undefined4 *)(lVar28 + 0x20);
  }
  uVar27 = *(ulonglong *)(param_1 + 0x10);
  fVar40 = *(float *)(uVar27 + 0x50) - *(float *)(uVar27 + 0x54);
  dVar9 = (double)fVar40;
  lVar28 = (longlong)fVar40;
  dVar12 = dVar9;
  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar9)) {
    auVar10._8_4_ = SUB84(dVar9,0);
    auVar10._0_8_ = dVar9;
    auVar10._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar10);
    uVar27 = (ulonglong)(uVar24 & 1);
    dVar12 = (double)(longlong)(lVar28 - uVar27);
  }
  lVar30 = (longlong)dVar12;
  dVar9 = (dVar9 - (double)lVar30) * 2147483647.0;
  lVar28 = (longlong)dVar9;
  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar9)) {
    auVar5._8_4_ = SUB84(dVar9,0);
    auVar5._0_8_ = dVar9;
    auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar5);
    dVar9 = (double)(longlong)(lVar28 - (ulonglong)(uVar24 & 1));
  }
  lVar29 = (longlong)dVar9;
  lVar28 = lVar31;
  if ((-1 < lVar30) && (lVar28 = 0x7fffffff, lVar30 < 0x7fffffff)) {
    lVar28 = lVar30;
  }
  *(int *)(param_2 + 0x125) = (int)lVar28;
  lVar28 = lVar31;
  if ((-1 < lVar29) && (lVar28 = 0x7fffffff, lVar29 < 0x7fffffff)) {
    lVar28 = lVar29;
  }
  *(int *)((longlong)param_2 + 0x92c) = (int)lVar28;
  uVar27 = *(ulonglong *)(param_1 + 0x10);
  fVar40 = *(float *)(uVar27 + 0x58) - *(float *)(uVar27 + 0x54);
  dVar9 = (double)fVar40;
  lVar28 = (longlong)fVar40;
  dVar12 = dVar9;
  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar9)) {
    auVar11._8_4_ = SUB84(dVar9,0);
    auVar11._0_8_ = dVar9;
    auVar11._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar11);
    uVar27 = (ulonglong)(uVar24 & 1);
    dVar12 = (double)(longlong)(lVar28 - uVar27);
  }
  lVar30 = (longlong)dVar12;
  dVar9 = (dVar9 - (double)lVar30) * 2147483647.0;
  lVar28 = (longlong)dVar9;
  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar9)) {
    auVar6._8_4_ = SUB84(dVar9,0);
    auVar6._0_8_ = dVar9;
    auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar6);
    dVar9 = (double)(longlong)(lVar28 - (ulonglong)(uVar24 & 1));
  }
  lVar29 = (longlong)dVar9;
  lVar28 = lVar31;
  if ((-1 < lVar30) && (lVar28 = 0x7fffffff, lVar30 < 0x7fffffff)) {
    lVar28 = lVar30;
  }
  *(int *)(param_2 + 0x126) = (int)lVar28;
  lVar28 = lVar31;
  if ((-1 < lVar29) && (lVar28 = 0x7fffffff, lVar29 < 0x7fffffff)) {
    lVar28 = lVar29;
  }
  *(int *)((longlong)param_2 + 0x934) = (int)lVar28;
  uVar27 = *(ulonglong *)(param_1 + 0x10);
  dVar12 = (double)*(float *)(uVar27 + 0x50);
  lVar28 = (longlong)*(float *)(uVar27 + 0x50);
  dVar9 = dVar12;
  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar12)) {
    auVar3._8_4_ = SUB84(dVar12,0);
    auVar3._0_8_ = dVar12;
    auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar3);
    uVar27 = (ulonglong)(uVar24 & 1);
    dVar9 = (double)(longlong)(lVar28 - uVar27);
  }
  lVar30 = (longlong)dVar9;
  dVar9 = (dVar12 - (double)lVar30) * 2147483647.0;
  lVar28 = (longlong)dVar9;
  if ((lVar28 != -0x8000000000000000) && ((double)lVar28 != dVar9)) {
    auVar7._8_4_ = SUB84(dVar9,0);
    auVar7._0_8_ = dVar9;
    auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar7);
    dVar9 = (double)(longlong)(lVar28 - (ulonglong)(uVar24 & 1));
  }
  lVar29 = (longlong)dVar9;
  lVar28 = lVar31;
  if ((-1 < lVar30) && (lVar28 = 0x7fffffff, lVar30 < 0x7fffffff)) {
    lVar28 = lVar30;
  }
  *(int *)(param_2 + 299) = (int)lVar28;
  lVar28 = lVar31;
  if ((-1 < lVar29) && (lVar28 = 0x7fffffff, lVar29 < 0x7fffffff)) {
    lVar28 = lVar29;
  }
  *(int *)((longlong)param_2 + 0x95c) = (int)lVar28;
  uVar32 = 0;
  uVar27 = *(ulonglong *)(param_1 + 0x10);
  dVar12 = (double)*(float *)(uVar27 + 0x58);
  lVar28 = (longlong)*(float *)(uVar27 + 0x58);
  dVar9 = dVar12;
  if ((lVar28 != -0x8000000000000000) &&
     (uVar32 = SUB84((double)lVar28,0), (double)lVar28 != dVar12)) {
    auVar4._8_4_ = SUB84(dVar12,0);
    auVar4._0_8_ = dVar12;
    auVar4._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar4);
    uVar27 = (ulonglong)(uVar24 & 1);
    dVar9 = (double)(longlong)(lVar28 - uVar27);
  }
  lVar30 = (longlong)dVar9;
  uVar35 = 0;
  dVar9 = (dVar12 - (double)lVar30) * 2147483647.0;
  lVar28 = (longlong)dVar9;
  if ((lVar28 != -0x8000000000000000) && (uVar35 = SUB84((double)lVar28,0), (double)lVar28 != dVar9)
     ) {
    auVar8._8_4_ = SUB84(dVar9,0);
    auVar8._0_8_ = dVar9;
    auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uVar24 = movmskpd((int)uVar27,auVar8);
    dVar9 = (double)(longlong)(lVar28 - (ulonglong)(uVar24 & 1));
  }
  lVar29 = (longlong)dVar9;
  lVar28 = lVar31;
  if ((-1 < lVar30) && (lVar28 = 0x7fffffff, lVar30 < 0x7fffffff)) {
    lVar28 = lVar30;
  }
  *(int *)(param_2 + 300) = (int)lVar28;
  if ((-1 < lVar29) && (lVar31 = 0x7fffffff, lVar29 < 0x7fffffff)) {
    lVar31 = lVar29;
  }
  *(int *)((longlong)param_2 + 0x964) = (int)lVar31;
  param_6 = pfVar20;
  FUN_14275e210(uVar35,param_2,uVar32,param_5);
  return;
}



// FUNCTION 14275e210 FUN_14275e210 body=1210 status=ok
// SIG undefined FUN_14275e210(void)

void FUN_14275e210(longlong param_1,longlong param_2,int *param_3,int *param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  iVar1 = *param_4;
  iVar2 = param_4[1];
  fVar21 = 1.0 / (float)*param_3;
  fVar18 = (float)(param_4[2] - iVar1);
  fVar22 = 1.0 / (float)param_3[1];
  fVar16 = DAT_1464c9c24 * -2.0;
  fVar17 = (float)(param_4[3] - iVar2);
  *(float *)(param_2 + 0x430) = fVar18 * fVar21 * 0.5;
  *(float *)(param_2 + 0x434) = (fVar17 * fVar22) / fVar16;
  *(float *)(param_2 + 0x438) = (fVar17 * 0.5 + (float)iVar2) * fVar22;
  *(float *)(param_2 + 0x43c) = (fVar18 * 0.5 + (float)iVar1) * fVar21;
  iVar1 = param_4[1];
  *(float *)(param_2 + 0x8a0) = (float)*param_4;
  *(float *)(param_2 + 0x8a4) = (float)iVar1;
  *(undefined4 *)(param_2 + 0x8a8) = 0;
  *(undefined4 *)(param_2 + 0x8ac) = 0;
  iVar1 = param_4[2];
  iVar2 = *param_4;
  iVar3 = param_4[3];
  iVar4 = param_4[1];
  *(float *)(param_2 + 0x8b0) = (float)(iVar1 - iVar2);
  *(float *)(param_2 + 0x8b4) = (float)(iVar3 - iVar4);
  *(float *)(param_2 + 0x8b8) = 1.0 / (float)(iVar1 - iVar2);
  *(float *)(param_2 + 0x8bc) = 1.0 / (float)(iVar3 - iVar4);
  iVar1 = param_3[1];
  *(float *)(param_2 + 0x8c0) = (float)*param_3;
  *(float *)(param_2 + 0x8c4) = (float)iVar1;
  *(float *)(param_2 + 0x8c8) = fVar21;
  *(float *)(param_2 + 0x8cc) = fVar22;
  iVar1 = param_4[2];
  fVar16 = *(float *)(param_2 + 0x8b8);
  iVar2 = param_4[1];
  iVar3 = param_4[3];
  *(float *)(param_2 + 0x8d0) = ((float)*param_4 + 0.5) * fVar21;
  *(float *)(param_2 + 0x8d4) = ((float)iVar2 + 0.5) * fVar22;
  *(float *)(param_2 + 0x8d8) = ((float)iVar1 - 0.5) * fVar21;
  *(float *)(param_2 + 0x8dc) = ((float)iVar3 - 0.5) * fVar22;
  *(float *)(param_2 + 0xa3c) = (float)(param_4[2] - *param_4) * *(float *)(param_1 + 0x1780) * 0.01
  ;
  fVar17 = *(float *)(param_5 + 0x4d0);
  fVar18 = *(float *)(param_5 + 0x4d4);
  fVar21 = *(float *)(param_5 + 0x4d8);
  fVar22 = *(float *)(param_5 + 0x4dc);
  fVar20 = *(float *)(param_2 + 0x8bc) * -2.0;
  fVar24 = ((float)param_4[1] + (float)param_4[1]) * *(float *)(param_2 + 0x8bc) + 1.0;
  fVar19 = fVar16 + fVar16;
  fVar23 = -1.0 - ((float)*param_4 + (float)*param_4) * fVar16;
  fVar16 = *(float *)(param_5 + 0x4c0);
  fVar5 = *(float *)(param_5 + 0x4c4);
  fVar6 = *(float *)(param_5 + 0x4c8);
  fVar7 = *(float *)(param_5 + 0x4cc);
  fVar8 = *(float *)(param_5 + 0x4e0);
  fVar9 = *(float *)(param_5 + 0x4e4);
  fVar10 = *(float *)(param_5 + 0x4e8);
  fVar11 = *(float *)(param_5 + 0x4ec);
  fVar12 = *(float *)(param_5 + 0x4f0);
  fVar13 = *(float *)(param_5 + 0x4f4);
  fVar14 = *(float *)(param_5 + 0x4f8);
  fVar15 = *(float *)(param_5 + 0x4fc);
  *(undefined4 *)(param_2 + 0x954) = 0;
  *(float *)(param_2 + 0x2c0) = fVar19 * fVar16 + fVar17 * 0.0 + fVar8 * 0.0 + fVar12 * 0.0;
  *(float *)(param_2 + 0x2c4) = fVar19 * fVar5 + fVar18 * 0.0 + fVar9 * 0.0 + fVar13 * 0.0;
  *(float *)(param_2 + 0x2c8) = fVar19 * fVar6 + fVar21 * 0.0 + fVar10 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x2cc) = fVar19 * fVar7 + fVar22 * 0.0 + fVar11 * 0.0 + fVar15 * 0.0;
  *(float *)(param_2 + 0x2d0) = fVar16 * 0.0 + fVar20 * fVar17 + fVar8 * 0.0 + fVar12 * 0.0;
  *(float *)(param_2 + 0x2d4) = fVar5 * 0.0 + fVar20 * fVar18 + fVar9 * 0.0 + fVar13 * 0.0;
  *(float *)(param_2 + 0x2d8) = fVar6 * 0.0 + fVar20 * fVar21 + fVar10 * 0.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x2dc) = fVar7 * 0.0 + fVar20 * fVar22 + fVar11 * 0.0 + fVar15 * 0.0;
  *(float *)(param_2 + 0x2e0) = fVar16 * 0.0 + fVar17 * 0.0 + fVar8 * 1.0 + fVar12 * 0.0;
  *(float *)(param_2 + 0x2e4) = fVar5 * 0.0 + fVar18 * 0.0 + fVar9 * 1.0 + fVar13 * 0.0;
  *(float *)(param_2 + 0x2e8) = fVar6 * 0.0 + fVar21 * 0.0 + fVar10 * 1.0 + fVar14 * 0.0;
  *(float *)(param_2 + 0x2ec) = fVar7 * 0.0 + fVar22 * 0.0 + fVar11 * 1.0 + fVar15 * 0.0;
  *(float *)(param_2 + 0x2f0) = fVar23 * fVar16 + fVar24 * fVar17 + fVar8 * 0.0 + fVar12 * 1.0;
  *(float *)(param_2 + 0x2f4) = fVar23 * fVar5 + fVar24 * fVar18 + fVar9 * 0.0 + fVar13 * 1.0;
  *(float *)(param_2 + 0x2f8) = fVar23 * fVar6 + fVar24 * fVar21 + fVar10 * 0.0 + fVar14 * 1.0;
  *(float *)(param_2 + 0x2fc) = fVar23 * fVar7 + fVar24 * fVar22 + fVar11 * 0.0 + fVar15 * 1.0;
  *(float *)(param_2 + 0x954) =
       ((float)(param_4[3] - param_4[1]) * *(float *)(param_5 + 0x14) * 0.5) /
       SQRT(*(float *)(DAT_146b09a50 + 4) + *(float *)(DAT_146b09a50 + 4));
  return;
}



// FUNCTION 14275e6d0 ShouldCompilePermutation body=63 status=ok
// SIG undefined ShouldCompilePermutation(void)

ulonglong TScreenVSForGS<1>::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_1419ef5f0(uVar1);
  if (1 < (int)uVar2) {
    uVar2 = FUN_1419ef5f0(uVar1);
    if (((1 < (int)uVar2) && (uVar1 < 0x1c)) &&
       (uVar2 = 0x8c50000, (0x8c50000U >> (uVar1 & 0x1f) & 1) != 0)) {
      return 0x8c50001;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14275e710 FUN_14275e710 body=56 status=ok
// SIG undefined FUN_14275e710(void)

void FUN_14275e710(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xe8) + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014275e73e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}



// FUNCTION 14275e750 FUN_14275e750 body=178 status=ok
// SIG undefined FUN_14275e750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275e750(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  if (param_2 != (longlong *)0x0) {
    local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
    uVar1 = FUN_142a07000();
    lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    if (lVar2 != 0) {
      local_28 = _DAT_146b094e0 & _DAT_146b094a0;
      uStack_24 = uRam0000000146b094e4 & uRam0000000146b094a4;
      uStack_20 = uRam0000000146b094e8 & uRam0000000146b094a8;
      uStack_1c = uRam0000000146b094ec & uRam0000000146b094ac;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = uRam0000000146b094ec;
      local_38 = 0;
      uStack_30 = 0;
      local_68 = 1;
      FUN_14275eb80(*(undefined8 *)(param_1 + 0x458),local_58,*(undefined8 *)(lVar2 + 0x718),
                    &local_48);
    }
  }
  return;
}



// FUNCTION 14275e810 FUN_14275e810 body=434 status=ok
// SIG undefined FUN_14275e810(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14275e810(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  undefined1 local_d0 [40];
  undefined1 local_a8;
  ushort local_a6;
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined1 local_88 [16];
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
    local_48 = _DAT_146b094e0 & _DAT_146b094a0;
    uStack_44 = uRam0000000146b094e4 & uRam0000000146b094a4;
    uStack_40 = uRam0000000146b094e8 & uRam0000000146b094a8;
    uStack_3c = uRam0000000146b094ec & uRam0000000146b094ac;
    lVar2 = *(longlong *)(param_1 + 0x458);
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = uRam0000000146b094ec;
    local_58 = 0;
    uStack_50 = 0;
    local_f8 = 0xffffffff;
    local_f4 = 0;
    FActorSpawnParameters::FActorSpawnParameters(local_d0);
    local_108 = local_d0;
    local_a6 = local_a6 | 2;
    local_a8 = 1;
    local_a4 = 0x40;
    uVar5 = UWorld::SpawnActor(*(undefined8 *)(lVar2 + 0x30),param_2,0,0);
    FWeakObjectPtr::operator=(&local_f8,uVar5);
    iVar1 = *(int *)(lVar2 + 0x58);
    *(int *)(lVar2 + 0x58) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x5c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x50,iVar1);
    }
    lVar3 = *(longlong *)(lVar2 + 0x50);
    *(undefined4 *)(lVar3 + (longlong)iVar1 * 8) = local_f8;
    *(undefined4 *)(lVar3 + 4 + (longlong)iVar1 * 8) = local_f4;
    cVar4 = FWeakObjectPtr::IsValid(&local_f8);
    if (cVar4 != '\0') {
      FUN_14274f370(lVar2,&local_f0);
      local_78 = _DAT_146b094e0 & _DAT_146b094a0;
      uStack_74 = uRam0000000146b094e4 & uRam0000000146b094a4;
      uStack_70 = uRam0000000146b094e8 & uRam0000000146b094a8;
      uStack_6c = uRam0000000146b094ec & uRam0000000146b094ac;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = uRam0000000146b094ec;
      local_88._8_4_ = local_e8 ^ 0x80000000;
      local_88._0_8_ = CONCAT44(local_ec,local_f0) ^ 0x8000000080000000;
      local_88._12_4_ = 0;
      uVar5 = FWeakObjectPtr::Get(&local_f8);
      local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffffffffff00);
      FUN_14223d270(uVar5,&local_98,0,0);
    }
  }
  return;
}



// FUNCTION 14275e9d0 FUN_14275e9d0 body=421 status=ok
// SIG undefined FUN_14275e9d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_14275e9d0(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4,char param_5
             )

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_98 [40];
  undefined1 local_70;
  ushort local_6e;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  if (param_3 != 0) {
    FActorSpawnParameters::FActorSpawnParameters(local_98);
    local_c8 = local_98;
    local_6e = local_6e | 2;
    local_70 = 1;
    local_6c = 0x40;
    uVar4 = UWorld::SpawnActor(*(undefined8 *)(param_1 + 0x30),param_3,0,0);
    FWeakObjectPtr::operator=(param_2,uVar4);
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar1 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x50);
    *(undefined4 *)(lVar2 + (longlong)iVar1 * 8) = *param_2;
    *(undefined4 *)(lVar2 + 4 + (longlong)iVar1 * 8) = param_2[1];
    cVar3 = FWeakObjectPtr::IsValid(param_2);
    if (cVar3 != '\0') {
      if (param_5 == '\0') {
        uVar4 = FWeakObjectPtr::Get(param_2);
      }
      else {
        FUN_14274f370(param_1,&local_b8);
        local_48 = _DAT_146b094e0 & _DAT_146b094a0;
        uStack_44 = uRam0000000146b094e4 & uRam0000000146b094a4;
        uStack_40 = uRam0000000146b094e8 & uRam0000000146b094a8;
        uStack_3c = uRam0000000146b094ec & uRam0000000146b094ac;
        local_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = uRam0000000146b094ec;
        local_58._8_4_ = local_b0 ^ 0x80000000;
        local_58._0_8_ = CONCAT44(local_b4,local_b8) ^ 0x8000000080000000;
        local_58._12_4_ = 0;
        uVar4 = FWeakObjectPtr::Get(param_2);
        param_4 = &local_68;
      }
      local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
      FUN_14223d270(uVar4,param_4,0,0);
    }
  }
  return param_2;
}



// FUNCTION 14275eb80 FUN_14275eb80 body=583 status=ok
// SIG undefined FUN_14275eb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_14275eb80(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4,char param_5
             )

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [40];
  undefined1 local_80;
  ushort local_7e;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  if (param_3 != 0) {
    FActorSpawnParameters::FActorSpawnParameters(local_a8);
    local_7e = local_7e | 2;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    local_80 = 1;
    local_7c = 0x40;
    uVar5 = AEquipmentSkin::GetPrivateStaticClass();
    local_c8 = local_a8;
    lVar6 = UWorld::SpawnActor(uVar7,uVar5,0,0);
    FWeakObjectPtr::operator=(param_2,lVar6);
    iVar2 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar2 + 1;
    if (*(int *)(param_1 + 0x5c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x50,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x50);
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = *param_2;
    *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 8) = param_2[1];
    cVar4 = FWeakObjectPtr::IsValid(param_2);
    if (cVar4 != '\0') {
      lVar3 = *(longlong *)(lVar6 + 0x468);
      *(undefined4 *)(lVar3 + 0x6f8) = 0;
      if (*(int *)(lVar3 + 0x6fc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar3 + 0x6f0,0);
      }
      (**(code **)(**(longlong **)(lVar6 + 0x468) + 0x930))(*(longlong **)(lVar6 + 0x468),param_3,1)
      ;
      local_b8 = 0;
      local_b0 = 0;
      local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
      FUN_14223c850(lVar6,&local_b8,0,0);
      (**(code **)(**(longlong **)(lVar6 + 0x468) + 0x4b8))();
      if (param_5 == '\0') {
        uVar7 = FWeakObjectPtr::Get(param_2);
      }
      else {
        auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar6 + 0x468) + 0x1d0);
        local_58 = _DAT_146b094e0 & _DAT_146b094a0;
        uStack_54 = uRam0000000146b094e4 & uRam0000000146b094a4;
        uStack_50 = uRam0000000146b094e8 & uRam0000000146b094a8;
        uStack_4c = uRam0000000146b094ec & uRam0000000146b094ac;
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = uRam0000000146b094ec;
        local_68._8_4_ = auVar1._8_4_ ^ 0x80000000;
        local_68._0_8_ = auVar1._0_8_ ^ 0x8000000080000000;
        local_68._12_4_ = 0;
        uVar7 = FWeakObjectPtr::Get(param_2);
        param_4 = &local_78;
      }
      local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffffffffff00);
      FUN_14223d270(uVar7,param_4,0,0);
      FUN_14234b090(*(undefined8 *)(lVar6 + 0x468));
    }
  }
  return param_2;
}



// FUNCTION 14275edd0 FUN_14275edd0 body=560 status=ok
// SIG undefined FUN_14275edd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14275edd0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_668 [32];
  undefined8 local_648;
  undefined4 local_640;
  undefined **local_638;
  longlong local_630;
  undefined1 local_628 [1496];
  longlong local_50;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  uVar3 = FUN_142741540(local_628);
  FUN_140e6c260(param_1 + 0x1240,uVar3);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x1550) = 0;
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  *(undefined4 *)(param_1 + 0x1710) = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0xf0))();
    if (cVar2 == '\0') {
      lVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x208))();
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x968) != 0)) {
        local_648 = *param_2;
        local_638 = &PTR_FUN_14519bb50;
        local_640 = *(undefined4 *)(param_2 + 1);
        local_630 = *(longlong *)(lVar4 + 0x968);
        FUN_14274a4e0(&local_638,&local_648,param_1);
      }
    }
  }
  if (*DAT_146b098d0 == 0) {
    *(undefined4 *)(param_1 + 0x1468) = 0;
  }
  if (*DAT_146b098e8 == 0) {
    *(undefined4 *)(param_1 + 0x1660) = 0;
  }
  if (*DAT_146b09918 == 0) {
    *(undefined4 *)(param_1 + 0x1588) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x158c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1590) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1594) = 0x3f800000;
  }
  else if (*DAT_146b09930 < 3) {
    *(char *)(param_1 + 0x157c) = (char)*DAT_146b09930;
  }
  if (*DAT_146b09948 == 0) {
    *(undefined4 *)(param_1 + 0x177c) = 0;
  }
  if (*DAT_146b09960 == 0) {
    *(undefined4 *)(param_1 + 0x15ac) = 0;
  }
  if (*DAT_146b09900 == 0) {
    *(undefined4 *)(param_1 + 0x1664) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
  }
  lVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x208))();
  if (lVar4 != 0) {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20) + 0xf0))();
    if (cVar2 == '\0') {
      for (; (-1 < iVar5 && (iVar5 < *(int *)(lVar4 + 0x728))); iVar5 = iVar5 + 1) {
        local_640 = *(undefined4 *)(param_2 + 1);
        local_648 = *param_2;
        FUN_14274a4e0(*(undefined8 *)(*(longlong *)(lVar4 + 0x720) + (longlong)iVar5 * 8),&local_648
                      ,param_1);
      }
    }
  }
  return;
}



// FUNCTION 14275f000 StaticExec body=218 status=ok
// SIG undefined StaticExec(void)

undefined8 UPlatformInterfaceBase::StaticExec(wchar_t *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  wchar_t *local_res8 [4];
  
  local_res8[0] = param_1;
  cVar1 = FParse::Command(local_res8,&DAT_14518a184,1);
  if (cVar1 == '\0') {
    return 0;
  }
  plVar3 = (longlong *)FUN_14274ee70();
  cVar1 = FParse::Command(local_res8,L"Show",1);
  if (cVar1 != '\0') {
    iVar2 = _wtoi(local_res8[0]);
    (**(code **)(*plVar3 + 0x290))(plVar3,iVar2 != 0);
    return 1;
  }
  cVar1 = FParse::Command(local_res8,L"Hide",1);
  if (cVar1 != '\0') {
    (**(code **)(*plVar3 + 0x298))(plVar3);
    return 1;
  }
  cVar1 = FParse::Command(local_res8,L"Close",1);
  if (cVar1 != '\0') {
    (**(code **)(*plVar3 + 0x2a0))(plVar3);
  }
  return 1;
}



// FUNCTION 14275f0e0 FUN_14275f0e0 body=81 status=ok
// SIG undefined FUN_14275f0e0(void)

undefined8 FUN_14275f0e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xe0))();
  if (lVar4 != 0) {
    return 0;
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 8);
  if (iVar1 < 2) {
    iVar2 = DAT_1464c9c14;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      iVar2 = iVar1;
    }
    if ((iVar2 < 2) && (cVar3 = FUN_142753a10(), cVar3 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 14275f140 FUN_14275f140 body=331 status=ok
// SIG undefined FUN_14275f140(void)

undefined8 *
FUN_14275f140(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
             char param_9)

{
  undefined8 uVar1;
  
  FUN_141aaf600();
  *(char *)(param_1 + 0x25) = param_9;
  *(undefined4 *)(param_1 + 0x26) = 2;
  *(undefined4 *)((longlong)param_1 + 300) = 4;
  if (param_9 == '\0') {
    param_1[0x24] = param_2[1];
    uVar1 = param_5[9];
    param_1[0x14] = param_5[8];
    param_1[0x15] = uVar1;
    uVar1 = param_6[9];
    param_1[0x1c] = param_6[8];
    param_1[0x1d] = uVar1;
    uVar1 = param_5[0xb];
    param_1[0x16] = param_5[10];
    param_1[0x17] = uVar1;
    uVar1 = param_6[0xb];
    param_1[0x1e] = param_6[10];
    param_1[0x1f] = uVar1;
    uVar1 = param_5[0xd];
    param_1[0x18] = param_5[0xc];
    param_1[0x19] = uVar1;
    uVar1 = param_6[0xd];
    param_1[0x20] = param_6[0xc];
    param_1[0x21] = uVar1;
    uVar1 = param_5[0xf];
    param_1[0x1a] = param_5[0xe];
    param_1[0x1b] = uVar1;
    uVar1 = param_6[0xf];
    param_1[0x22] = param_6[0xe];
    param_1[0x23] = uVar1;
  }
  else {
    param_1[0x10] = *param_2;
    param_1[0x11] = param_3;
    param_1[0x12] = param_4;
    uVar1 = param_5[1];
    *param_1 = *param_5;
    param_1[1] = uVar1;
    uVar1 = param_6[1];
    param_1[8] = *param_6;
    param_1[9] = uVar1;
    uVar1 = param_5[3];
    param_1[2] = param_5[2];
    param_1[3] = uVar1;
    uVar1 = param_6[3];
    param_1[10] = param_6[2];
    param_1[0xb] = uVar1;
    uVar1 = param_5[5];
    param_1[4] = param_5[4];
    param_1[5] = uVar1;
    uVar1 = param_6[5];
    param_1[0xc] = param_6[4];
    param_1[0xd] = uVar1;
    uVar1 = param_5[7];
    param_1[6] = param_5[6];
    param_1[7] = uVar1;
    uVar1 = param_6[7];
    param_1[0xe] = param_6[6];
    param_1[0xf] = uVar1;
  }
  *(undefined8 *)((longlong)param_1 + 0x134) = *param_7;
  *(undefined8 *)((longlong)param_1 + 0x13c) = *param_8;
  return param_1;
}



// FUNCTION 14275f290 FUN_14275f290 body=334 status=ok
// SIG undefined FUN_14275f290(void)

void FUN_14275f290(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_48;
  undefined8 local_40;
  
  puVar8 = *(undefined4 **)(param_1 + 0x50);
  puVar1 = puVar8 + (longlong)*(int *)(param_1 + 0x58) * 2;
  if (puVar8 != puVar1) {
    do {
      local_res8 = *puVar8;
      local_resc = puVar8[1];
      cVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if ((cVar3 != '\0') &&
         (lVar4 = FWeakObjectPtr::Get(&local_res8), *(longlong *)(lVar4 + 0x168) != 0)) {
        local_48 = (longlong *)0x0;
        local_40 = 0;
        lVar4 = FWeakObjectPtr::Get(&local_res8);
        FUN_14238b380(*(undefined8 *)(lVar4 + 0x168),1,&local_48);
        uVar5 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
        if (local_48 + (int)local_40 < local_48) {
          uVar5 = 0;
        }
        uVar6 = 0;
        plVar7 = local_48;
        if (uVar5 != 0) {
          do {
            plVar2 = (longlong *)*plVar7;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x350))(plVar2,param_2,2,plVar2 + 6);
              FUN_14233a2e0(plVar2);
            }
            uVar6 = uVar6 + 1;
            plVar7 = plVar7 + 1;
          } while (uVar6 != uVar5);
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 14275f3e0 FUN_14275f3e0 body=350 status=ok
// SIG undefined FUN_14275f3e0(void)

void FUN_14275f3e0(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong *local_48;
  undefined8 local_40;
  
  puVar8 = *(undefined4 **)(*(longlong *)(param_1 + 0x458) + 0x50);
  puVar1 = puVar8 + (longlong)*(int *)(*(longlong *)(param_1 + 0x458) + 0x58) * 2;
  if (puVar8 != puVar1) {
    do {
      local_res8 = *puVar8;
      local_resc = puVar8[1];
      cVar3 = FWeakObjectPtr::IsValid(&local_res8);
      if ((cVar3 != '\0') &&
         (lVar4 = FWeakObjectPtr::Get(&local_res8), *(longlong *)(lVar4 + 0x168) != 0)) {
        local_48 = (longlong *)0x0;
        local_40 = 0;
        lVar4 = FWeakObjectPtr::Get(&local_res8);
        FUN_14238b380(*(undefined8 *)(lVar4 + 0x168),1,&local_48);
        uVar5 = (ulonglong)((longlong)(local_48 + (int)local_40) + (7 - (longlong)local_48)) >> 3;
        if (local_48 + (int)local_40 < local_48) {
          uVar5 = 0;
        }
        uVar6 = 0;
        plVar7 = local_48;
        if (uVar5 != 0) {
          do {
            plVar2 = (longlong *)*plVar7;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x350))(plVar2,param_2,2,plVar2 + 6);
              FUN_14233a2e0(plVar2);
            }
            uVar6 = uVar6 + 1;
            plVar7 = plVar7 + 1;
          } while (uVar6 != uVar5);
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar1);
  }
  return;
}



// FUNCTION 14275f540 FUN_14275f540 body=715 status=ok
// SIG undefined FUN_14275f540(void)

void FUN_14275f540(longlong param_1,float *param_2,float param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  bVar4 = false;
  uVar10 = 0;
  uVar12 = uVar10;
  iVar3 = 0;
  while( true ) {
    iVar11 = iVar3 + 1;
    iVar9 = (int)uVar10;
    if ((iVar9 < 0) || (*(int *)(param_1 + 0x6c0) <= iVar9)) break;
    lVar7 = *(longlong *)(param_1 + 0x6b8);
    if (*(longlong *)(param_1 + 0x6b8) == 0) {
      lVar7 = param_1 + 0x5f8;
    }
    pfVar8 = (float *)(lVar7 + uVar12);
    if (*(longlong *)(pfVar8 + 4) == *(longlong *)(param_2 + 4)) {
      bVar4 = true;
      fVar13 = param_2[1];
      fVar14 = param_2[2];
      fVar15 = param_2[3];
      *pfVar8 = (*param_2 - *pfVar8) * param_3 + *pfVar8;
      pfVar8[1] = (fVar13 - pfVar8[1]) * param_3 + pfVar8[1];
      pfVar8[2] = (fVar14 - pfVar8[2]) * param_3 + pfVar8[2];
      pfVar8[3] = (fVar15 - pfVar8[3]) * param_3 + pfVar8[3];
    }
    else {
      fVar13 = 1.0 - param_3;
      *pfVar8 = fVar13 * *pfVar8;
      pfVar8[1] = fVar13 * pfVar8[1];
      pfVar8[2] = fVar13 * pfVar8[2];
      pfVar8[3] = fVar13 * pfVar8[3];
    }
    if (((*pfVar8 * *pfVar8 < 1e-05) && (pfVar8[1] * pfVar8[1] < 1e-05)) &&
       (pfVar8[2] * pfVar8[2] < 1e-05)) {
      iVar5 = *(int *)(param_1 + 0x6c0);
      iVar6 = (iVar5 - iVar9) + -1;
      if (iVar6 != 0) {
        lVar7 = *(longlong *)(param_1 + 0x6b8);
        if (*(longlong *)(param_1 + 0x6b8) == 0) {
          lVar7 = param_1 + 0x5f8;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar7 + (longlong)iVar9 * 0x18),
                   (void *)(lVar7 + (longlong)iVar11 * 0x18),(longlong)iVar6 * 0x18);
        iVar5 = *(int *)(param_1 + 0x6c0);
      }
      iVar9 = iVar9 + -1;
      *(int *)(param_1 + 0x6c0) = iVar5 + -1;
      uVar12 = uVar12 - 0x18;
      iVar11 = iVar3;
    }
    uVar10 = (ulonglong)(iVar9 + 1);
    uVar12 = uVar12 + 0x18;
    iVar3 = iVar11;
  }
  if (!bVar4) {
    fVar13 = param_2[3];
    uVar2 = *(undefined8 *)(param_2 + 4);
    fVar14 = *param_2 * param_3;
    fVar16 = param_2[1] * param_3;
    fVar15 = param_2[2] * param_3;
    if (((1e-05 <= fVar14 * fVar14) || (1e-05 <= fVar16 * fVar16)) || (1e-05 <= fVar15 * fVar15)) {
      iVar3 = *(int *)(param_1 + 0x6c0);
      *(int *)(param_1 + 0x6c0) = iVar3 + 1;
      if (*(int *)(param_1 + 0x6c4) < iVar3 + 1) {
        TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                  (param_1 + 0x5f8,iVar3);
      }
      lVar7 = *(longlong *)(param_1 + 0x6b8);
      if (*(longlong *)(param_1 + 0x6b8) == 0) {
        lVar7 = param_1 + 0x5f8;
      }
      puVar1 = (undefined8 *)(lVar7 + (longlong)iVar3 * 0x18);
      *puVar1 = CONCAT44(fVar16,fVar14);
      puVar1[1] = CONCAT44(fVar13 * param_3,fVar15);
      *(undefined8 *)(lVar7 + 0x10 + (longlong)iVar3 * 0x18) = uVar2;
    }
  }
  return;
}



// FUNCTION 14275f810 FUN_14275f810 body=82 status=ok
// SIG undefined FUN_14275f810(void)

void FUN_14275f810(longlong param_1)

{
  FUN_14275f870(param_1 + 0x390);
  GetViewFrustumBounds(param_1 + 0x1070,param_1 + 0x590,0);
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x940),(void *)(param_1 + 0x390),0x570);
  return;
}



// FUNCTION 14275f870 FUN_14275f870 body=3969 status=ok
// SIG undefined FUN_14275f870(void)

void FUN_14275f870(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_198;
  float fStack_194;
  float fStack_190;
  float local_188;
  float fStack_184;
  float fStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_b8;
  undefined4 uStack_b0;
  float fStack_ac;
  
  fVar21 = *param_3;
  fVar28 = param_3[1];
  fVar32 = param_3[2];
  fVar22 = param_3[3];
  fVar1 = *(float *)(param_2 + 0x520);
  fVar2 = *(float *)(param_2 + 0x524);
  fVar3 = *(float *)(param_2 + 0x528);
  fVar4 = *(float *)(param_2 + 0x52c);
  fVar5 = *(float *)(param_2 + 0x510);
  fVar6 = *(float *)(param_2 + 0x514);
  fVar7 = *(float *)(param_2 + 0x518);
  fVar8 = *(float *)(param_2 + 0x51c);
  fVar9 = *(float *)(param_2 + 0x530);
  fVar10 = *(float *)(param_2 + 0x534);
  fVar11 = *(float *)(param_2 + 0x538);
  fVar12 = *(float *)(param_2 + 0x53c);
  fVar18 = *(float *)(param_2 + 0x540);
  fVar19 = *(float *)(param_2 + 0x544);
  fVar20 = *(float *)(param_2 + 0x548);
  fVar23 = *(float *)(param_2 + 0x54c);
  local_1f8 = fVar21 * fVar5 + fVar28 * fVar1 + fVar32 * fVar9 + fVar22 * fVar18;
  fStack_1f4 = fVar21 * fVar6 + fVar28 * fVar2 + fVar32 * fVar10 + fVar22 * fVar19;
  fStack_1f0 = fVar21 * fVar7 + fVar28 * fVar3 + fVar32 * fVar11 + fVar22 * fVar20;
  fStack_1ec = fVar21 * fVar8 + fVar28 * fVar4 + fVar32 * fVar12 + fVar22 * fVar23;
  fVar21 = param_3[4];
  fVar28 = param_3[5];
  fVar32 = param_3[6];
  fVar22 = param_3[7];
  local_1e8 = fVar21 * fVar5 + fVar28 * fVar1 + fVar32 * fVar9 + fVar22 * fVar18;
  fStack_1e4 = fVar21 * fVar6 + fVar28 * fVar2 + fVar32 * fVar10 + fVar22 * fVar19;
  fStack_1e0 = fVar21 * fVar7 + fVar28 * fVar3 + fVar32 * fVar11 + fVar22 * fVar20;
  fStack_1dc = fVar21 * fVar8 + fVar28 * fVar4 + fVar32 * fVar12 + fVar22 * fVar23;
  fVar21 = param_3[8];
  fVar28 = param_3[9];
  fVar32 = param_3[10];
  fVar22 = param_3[0xb];
  local_1d8 = fVar21 * fVar5 + fVar28 * fVar1 + fVar32 * fVar9 + fVar22 * fVar18;
  fStack_1d4 = fVar21 * fVar6 + fVar28 * fVar2 + fVar32 * fVar10 + fVar22 * fVar19;
  fStack_1d0 = fVar21 * fVar7 + fVar28 * fVar3 + fVar32 * fVar11 + fVar22 * fVar20;
  fStack_1cc = fVar21 * fVar8 + fVar28 * fVar4 + fVar32 * fVar12 + fVar22 * fVar23;
  fVar21 = param_3[0xc];
  fVar28 = param_3[0xd];
  fVar32 = param_3[0xe];
  fVar22 = param_3[0xf];
  local_1c8 = fVar21 * fVar5 + fVar28 * fVar1 + fVar32 * fVar9 + fVar22 * fVar18;
  fStack_1c4 = fVar21 * fVar6 + fVar28 * fVar2 + fVar32 * fVar10 + fVar22 * fVar19;
  fStack_1c0 = fVar21 * fVar7 + fVar28 * fVar3 + fVar32 * fVar11 + fVar22 * fVar20;
  fStack_1bc = fVar21 * fVar8 + fVar28 * fVar4 + fVar32 * fVar12 + fVar22 * fVar23;
  param_1[0xc0] = local_1f8;
  param_1[0xc1] = fStack_1f4;
  param_1[0xc2] = fStack_1f0;
  param_1[0xc3] = fStack_1ec;
  param_1[0xc4] = local_1e8;
  param_1[0xc5] = fStack_1e4;
  param_1[0xc6] = fStack_1e0;
  param_1[199] = fStack_1dc;
  local_b8 = 0;
  param_1[200] = local_1d8;
  param_1[0xc9] = fStack_1d4;
  param_1[0xca] = fStack_1d0;
  param_1[0xcb] = fStack_1cc;
  uStack_b0 = 0;
  param_1[0xcc] = 0.0;
  param_1[0xcd] = 0.0;
  param_1[0xce] = 0.0;
  param_1[0xcf] = fStack_1bc;
  local_118 = local_1f8;
  fStack_114 = fStack_1f4;
  fStack_110 = fStack_1f0;
  fStack_10c = fStack_1ec;
  local_108 = local_1e8;
  fStack_104 = fStack_1e4;
  fStack_100 = fStack_1e0;
  fStack_fc = fStack_1dc;
  local_f8 = local_1d8;
  fStack_f4 = fStack_1d4;
  fStack_f0 = fStack_1d0;
  fStack_ec = fStack_1cc;
  fStack_ac = fStack_1bc;
  FMatrix::InverseFast(&local_1f8,&local_198);
  fStack_170 = DAT_1468b5d98 * fStack_170;
  fStack_180 = DAT_1468b5d94 * fStack_180;
  fStack_190 = DAT_1468b5d90 * fStack_190;
  *(ulonglong *)(param_1 + 0x153) =
       CONCAT44(fStack_164 * 1.0 + DAT_1468b5d98 * fStack_174 +
                DAT_1468b5d94 * fStack_184 + DAT_1468b5d90 * fStack_194,
                local_168 * 1.0 + DAT_1468b5d98 * local_178 +
                DAT_1468b5d94 * local_188 + DAT_1468b5d90 * local_198);
  param_1[0x155] = fStack_160 * 1.0 + fStack_170 + fStack_180 + fStack_190;
  *(ulonglong *)(param_1 + 0x150) = *(ulonglong *)(param_1 + 0x153) ^ 0x8000000080000000;
  param_1[0x152] = -param_1[0x155];
  fVar18 = -param_1[0x153];
  fVar19 = -param_1[0x154];
  fVar21 = param_1[0xc0];
  fVar28 = param_1[0xc1];
  fVar32 = param_1[0xc2];
  fVar22 = param_1[0xc3];
  fVar20 = -param_1[0x155];
  fVar1 = param_1[0xc4];
  fVar2 = param_1[0xc5];
  fVar3 = param_1[0xc6];
  fVar4 = param_1[199];
  fVar5 = param_1[200];
  fVar6 = param_1[0xc9];
  fVar7 = param_1[0xca];
  fVar8 = param_1[0xcb];
  fVar9 = param_1[0xcc];
  fVar10 = param_1[0xcd];
  fVar11 = param_1[0xce];
  fVar12 = param_1[0xcf];
  fVar27 = fVar21 * 1.0 + fVar1 * 0.0 + fVar5 * 0.0 + fVar9 * 0.0;
  fVar29 = fVar28 * 1.0 + fVar2 * 0.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar30 = fVar32 * 1.0 + fVar3 * 0.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar31 = fVar22 * 1.0 + fVar4 * 0.0 + fVar8 * 0.0 + fVar12 * 0.0;
  fVar23 = fVar21 * 0.0 + fVar1 * 1.0 + fVar5 * 0.0 + fVar9 * 0.0;
  fVar24 = fVar28 * 0.0 + fVar2 * 1.0 + fVar6 * 0.0 + fVar10 * 0.0;
  fVar25 = fVar32 * 0.0 + fVar3 * 1.0 + fVar7 * 0.0 + fVar11 * 0.0;
  fVar26 = fVar22 * 0.0 + fVar4 * 1.0 + fVar8 * 0.0 + fVar12 * 0.0;
  fVar33 = fVar21 * 0.0 + fVar1 * 0.0 + fVar5 * 1.0 + fVar9 * 0.0;
  fVar34 = fVar28 * 0.0 + fVar2 * 0.0 + fVar6 * 1.0 + fVar10 * 0.0;
  fVar35 = fVar32 * 0.0 + fVar3 * 0.0 + fVar7 * 1.0 + fVar11 * 0.0;
  fVar36 = fVar22 * 0.0 + fVar4 * 0.0 + fVar8 * 1.0 + fVar12 * 0.0;
  param_1[0x60] = fVar27;
  param_1[0x61] = fVar29;
  param_1[0x62] = fVar30;
  param_1[99] = fVar31;
  param_1[100] = fVar23;
  param_1[0x65] = fVar24;
  param_1[0x66] = fVar25;
  param_1[0x67] = fVar26;
  fVar22 = fVar18 * fVar22 + fVar19 * fVar4 + fVar20 * fVar8 + fVar12 * 1.0;
  param_1[0x68] = fVar33;
  param_1[0x69] = fVar34;
  param_1[0x6a] = fVar35;
  param_1[0x6b] = fVar36;
  param_1[0x6c] = fVar18 * fVar21 + fVar19 * fVar1 + fVar20 * fVar5 + fVar9 * 1.0;
  param_1[0x6d] = fVar18 * fVar28 + fVar19 * fVar2 + fVar20 * fVar6 + fVar10 * 1.0;
  param_1[0x6e] = fVar18 * fVar32 + fVar19 * fVar3 + fVar20 * fVar7 + fVar11 * 1.0;
  param_1[0x6f] = fVar22;
  fVar21 = -param_1[0x6e];
  fVar28 = -param_1[0x6c];
  fVar32 = -param_1[0x6d];
  *(ulonglong *)(param_1 + 0x70) =
       CONCAT44(fVar24 * 0.0 + fVar23 * 1.0 + fVar25 * 0.0 + fVar26 * 0.0,
                fVar29 * 0.0 + fVar27 * 1.0 + fVar30 * 0.0 + fVar31 * 0.0);
  *(ulonglong *)(param_1 + 0x72) =
       CONCAT44(fVar22 * 0.0 + 0.0,fVar34 * 0.0 + fVar33 * 1.0 + fVar35 * 0.0 + fVar36 * 0.0);
  param_1[0x74] = fVar29 * 1.0 + fVar27 * 0.0 + fVar30 * 0.0 + fVar31 * 0.0;
  param_1[0x75] = fVar24 * 1.0 + fVar23 * 0.0 + fVar25 * 0.0 + fVar26 * 0.0;
  param_1[0x76] = fVar34 * 1.0 + fVar33 * 0.0 + fVar35 * 0.0 + fVar36 * 0.0;
  param_1[0x77] = fVar22 * 0.0 + 0.0;
  param_1[0x78] = fVar29 * 0.0 + fVar27 * 0.0 + fVar30 * 1.0 + fVar31 * 0.0;
  param_1[0x79] = fVar24 * 0.0 + fVar23 * 0.0 + fVar25 * 1.0 + fVar26 * 0.0;
  param_1[0x7a] = fVar34 * 0.0 + fVar33 * 0.0 + fVar35 * 1.0 + fVar36 * 0.0;
  param_1[0x7b] = fVar22 * 0.0 + 0.0;
  param_1[0x7c] = fVar32 * fVar29 + fVar28 * fVar27 + fVar21 * fVar30 + fVar31 * 1.0;
  param_1[0x7d] = fVar32 * fVar24 + fVar28 * fVar23 + fVar21 * fVar25 + fVar26 * 1.0;
  param_1[0x7e] = fVar32 * fVar34 + fVar28 * fVar33 + fVar21 * fVar35 + fVar36 * 1.0;
  param_1[0x7f] = fVar32 * 0.0 + fVar28 * 0.0 + fVar21 * 0.0 + fVar22 * 1.0;
  fVar21 = param_1[0xc4];
  fVar28 = param_1[200];
  fVar32 = param_1[0xcc];
  fVar22 = param_1[0xc0];
  fVar1 = param_1[0xc3];
  fVar2 = param_1[0x153];
  fVar3 = param_1[0x154];
  fVar4 = param_1[0x155];
  fVar5 = param_1[0xc1];
  fVar6 = param_1[0xc5];
  fVar7 = param_1[0xc9];
  fVar8 = param_1[0xcd];
  fVar9 = param_1[0xc2];
  fVar10 = param_1[0xc6];
  fVar11 = param_1[0xca];
  fVar12 = param_1[0xce];
  fVar18 = param_1[199];
  fVar19 = param_1[0xcb];
  fVar20 = param_1[0xcf];
  *(ulonglong *)(param_1 + 0x70) =
       CONCAT44(fVar21 * 1.0 + fVar22 * 0.0 + fVar28 * 0.0 + fVar32 * fVar3,
                fVar21 * 0.0 + fVar22 * 1.0 + fVar28 * 0.0 + fVar32 * fVar2);
  *(ulonglong *)(param_1 + 0x72) =
       CONCAT44(fVar21 * 0.0 + fVar22 * 0.0 + fVar28 * 0.0 + fVar32 * 1.0,
                fVar21 * 0.0 + fVar22 * 0.0 + fVar28 * 1.0 + fVar32 * fVar4);
  param_1[0x74] = fVar6 * 0.0 + fVar5 * 1.0 + fVar7 * 0.0 + fVar8 * fVar2;
  param_1[0x75] = fVar6 * 1.0 + fVar5 * 0.0 + fVar7 * 0.0 + fVar8 * fVar3;
  param_1[0x76] = fVar6 * 0.0 + fVar5 * 0.0 + fVar7 * 1.0 + fVar8 * fVar4;
  param_1[0x77] = fVar6 * 0.0 + fVar5 * 0.0 + fVar7 * 0.0 + fVar8 * 1.0;
  param_1[0x78] = fVar10 * 0.0 + fVar9 * 1.0 + fVar11 * 0.0 + fVar12 * fVar2;
  param_1[0x79] = fVar10 * 1.0 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12 * fVar3;
  param_1[0x7a] = fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * 1.0 + fVar12 * fVar4;
  param_1[0x7b] = fVar10 * 0.0 + fVar9 * 0.0 + fVar11 * 0.0 + fVar12 * 1.0;
  param_1[0x7c] = fVar18 * 0.0 + fVar1 * 1.0 + fVar19 * 0.0 + fVar20 * fVar2;
  param_1[0x7d] = fVar18 * 1.0 + fVar1 * 0.0 + fVar19 * 0.0 + fVar20 * fVar3;
  param_1[0x7e] = fVar18 * 0.0 + fVar1 * 0.0 + fVar19 * 1.0 + fVar20 * fVar4;
  param_1[0x7f] = fVar18 * 0.0 + fVar1 * 0.0 + fVar19 * 0.0 + fVar20 * 1.0;
  fVar21 = param_1[0x60];
  fVar28 = param_1[0x61];
  fVar32 = param_1[0x62];
  fVar22 = param_1[99];
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_1[8];
  fVar10 = param_1[9];
  fVar11 = param_1[10];
  fVar12 = param_1[0xb];
  fVar18 = param_1[0xc];
  fVar19 = param_1[0xd];
  fVar20 = param_1[0xe];
  fVar23 = param_1[0xf];
  fVar24 = param_1[100];
  fVar25 = param_1[0x65];
  fVar26 = param_1[0x66];
  fVar27 = param_1[0x67];
  fVar29 = param_1[0x68];
  fVar30 = param_1[0x69];
  fVar31 = param_1[0x6a];
  fVar33 = param_1[0x6b];
  fVar34 = param_1[0x6c];
  fVar35 = param_1[0x6d];
  fVar36 = param_1[0x6e];
  fVar13 = param_1[0x6f];
  param_1[0x80] = fVar21 * fVar5 + fVar28 * fVar1 + fVar32 * fVar9 + fVar22 * fVar18;
  param_1[0x81] = fVar21 * fVar6 + fVar28 * fVar2 + fVar32 * fVar10 + fVar22 * fVar19;
  param_1[0x82] = fVar21 * fVar7 + fVar28 * fVar3 + fVar32 * fVar11 + fVar22 * fVar20;
  param_1[0x83] = fVar21 * fVar8 + fVar28 * fVar4 + fVar32 * fVar12 + fVar22 * fVar23;
  param_1[0x84] = fVar24 * fVar5 + fVar25 * fVar1 + fVar26 * fVar9 + fVar27 * fVar18;
  param_1[0x85] = fVar24 * fVar6 + fVar25 * fVar2 + fVar26 * fVar10 + fVar27 * fVar19;
  param_1[0x86] = fVar24 * fVar7 + fVar25 * fVar3 + fVar26 * fVar11 + fVar27 * fVar20;
  param_1[0x87] = fVar24 * fVar8 + fVar25 * fVar4 + fVar26 * fVar12 + fVar27 * fVar23;
  param_1[0x88] = fVar29 * fVar5 + fVar30 * fVar1 + fVar31 * fVar9 + fVar33 * fVar18;
  param_1[0x89] = fVar29 * fVar6 + fVar30 * fVar2 + fVar31 * fVar10 + fVar33 * fVar19;
  param_1[0x8a] = fVar29 * fVar7 + fVar30 * fVar3 + fVar31 * fVar11 + fVar33 * fVar20;
  param_1[0x8b] = fVar29 * fVar8 + fVar30 * fVar4 + fVar31 * fVar12 + fVar33 * fVar23;
  param_1[0x8c] = fVar34 * fVar5 + fVar35 * fVar1 + fVar36 * fVar9 + fVar13 * fVar18;
  param_1[0x8d] = fVar34 * fVar6 + fVar35 * fVar2 + fVar36 * fVar10 + fVar13 * fVar19;
  param_1[0x8e] = fVar34 * fVar7 + fVar35 * fVar3 + fVar36 * fVar11 + fVar13 * fVar20;
  param_1[0x8f] = fVar34 * fVar8 + fVar35 * fVar4 + fVar36 * fVar12 + fVar13 * fVar23;
  fVar21 = param_1[0x20];
  fVar28 = param_1[0x21];
  fVar32 = param_1[0x22];
  fVar22 = param_1[0x23];
  fVar1 = param_1[0x70];
  fVar2 = param_1[0x71];
  fVar3 = param_1[0x72];
  fVar4 = param_1[0x73];
  fVar5 = param_1[0x74];
  fVar6 = param_1[0x75];
  fVar7 = param_1[0x76];
  fVar8 = param_1[0x77];
  fVar9 = param_1[0x78];
  fVar10 = param_1[0x79];
  fVar11 = param_1[0x7a];
  fVar12 = param_1[0x7b];
  fVar18 = param_1[0x7c];
  fVar19 = param_1[0x7d];
  fVar20 = param_1[0x7e];
  fVar23 = param_1[0x7f];
  fVar24 = param_1[0x24];
  fVar25 = param_1[0x25];
  fVar26 = param_1[0x26];
  fVar27 = param_1[0x27];
  fVar29 = param_1[0x28];
  fVar30 = param_1[0x29];
  fVar31 = param_1[0x2a];
  fVar33 = param_1[0x2b];
  fVar34 = param_1[0x2c];
  fVar35 = param_1[0x2d];
  fVar36 = param_1[0x2e];
  fVar13 = param_1[0x2f];
  param_1[0xa0] = fVar21 * fVar1 + fVar28 * fVar5 + fVar32 * fVar9 + fVar22 * fVar18;
  param_1[0xa1] = fVar21 * fVar2 + fVar28 * fVar6 + fVar32 * fVar10 + fVar22 * fVar19;
  param_1[0xa2] = fVar21 * fVar3 + fVar28 * fVar7 + fVar32 * fVar11 + fVar22 * fVar20;
  param_1[0xa3] = fVar21 * fVar4 + fVar28 * fVar8 + fVar32 * fVar12 + fVar22 * fVar23;
  param_1[0xa4] = fVar24 * fVar1 + fVar25 * fVar5 + fVar26 * fVar9 + fVar27 * fVar18;
  param_1[0xa5] = fVar24 * fVar2 + fVar25 * fVar6 + fVar26 * fVar10 + fVar27 * fVar19;
  param_1[0xa6] = fVar24 * fVar3 + fVar25 * fVar7 + fVar26 * fVar11 + fVar27 * fVar20;
  param_1[0xa7] = fVar24 * fVar4 + fVar25 * fVar8 + fVar26 * fVar12 + fVar27 * fVar23;
  param_1[0xa8] = fVar29 * fVar1 + fVar30 * fVar5 + fVar31 * fVar9 + fVar33 * fVar18;
  param_1[0xa9] = fVar29 * fVar2 + fVar30 * fVar6 + fVar31 * fVar10 + fVar33 * fVar19;
  param_1[0xaa] = fVar29 * fVar3 + fVar30 * fVar7 + fVar31 * fVar11 + fVar33 * fVar20;
  param_1[0xab] = fVar29 * fVar4 + fVar30 * fVar8 + fVar31 * fVar12 + fVar33 * fVar23;
  param_1[0xac] = fVar34 * fVar1 + fVar35 * fVar5 + fVar36 * fVar9 + fVar13 * fVar18;
  param_1[0xad] = fVar34 * fVar2 + fVar35 * fVar6 + fVar36 * fVar10 + fVar13 * fVar19;
  param_1[0xae] = fVar34 * fVar3 + fVar35 * fVar7 + fVar36 * fVar11 + fVar13 * fVar20;
  param_1[0xaf] = fVar34 * fVar4 + fVar35 * fVar8 + fVar36 * fVar12 + fVar13 * fVar23;
  *(ulonglong *)(param_1 + 0xd0) = CONCAT44(fStack_114,local_118);
  *(ulonglong *)(param_1 + 0xd2) = CONCAT44(fStack_10c,fStack_110);
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(fStack_114,local_118);
  *(ulonglong *)(param_1 + 0xf2) = CONCAT44(fStack_10c,fStack_110);
  *(ulonglong *)(param_1 + 0xd4) = CONCAT44(fStack_104,local_108);
  *(ulonglong *)(param_1 + 0xd6) = CONCAT44(fStack_fc,fStack_100);
  *(ulonglong *)(param_1 + 0xf4) = CONCAT44(fStack_104,local_108);
  *(ulonglong *)(param_1 + 0xf6) = CONCAT44(fStack_fc,fStack_100);
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(fStack_f4,local_f8);
  *(ulonglong *)(param_1 + 0xda) = CONCAT44(fStack_ec,fStack_f0);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(fStack_f4,local_f8);
  *(ulonglong *)(param_1 + 0xfa) = CONCAT44(fStack_ec,fStack_f0);
  *(undefined8 *)(param_1 + 0xdc) = local_b8;
  *(ulonglong *)(param_1 + 0xde) = CONCAT44(fStack_ac,uStack_b0);
  *(undefined8 *)(param_1 + 0xfc) = local_b8;
  *(ulonglong *)(param_1 + 0xfe) = CONCAT44(fStack_ac,uStack_b0);
  fVar21 = param_1[199];
  fVar28 = param_1[0xcb];
  fVar32 = param_1[0xc3];
  fVar22 = param_1[0xcf];
  param_1[0xe0] = param_1[0xc0];
  param_1[0xe1] = param_1[0xc4];
  param_1[0xe2] = param_1[200];
  param_1[0xe3] = param_1[0xcc];
  param_1[0x100] = param_1[0xc0];
  param_1[0x101] = param_1[0xc4];
  param_1[0x102] = param_1[200];
  param_1[0x103] = param_1[0xcc];
  param_1[0xe4] = param_1[0xc1];
  param_1[0xe5] = param_1[0xc5];
  param_1[0xe6] = param_1[0xc9];
  param_1[0xe7] = param_1[0xcd];
  param_1[0x104] = param_1[0xc1];
  param_1[0x105] = param_1[0xc5];
  param_1[0x106] = param_1[0xc9];
  param_1[0x107] = param_1[0xcd];
  param_1[0xe8] = param_1[0xc2];
  param_1[0xe9] = param_1[0xc6];
  param_1[0xea] = param_1[0xca];
  param_1[0xeb] = param_1[0xce];
  param_1[0x108] = param_1[0xc2];
  param_1[0x109] = param_1[0xc6];
  param_1[0x10a] = param_1[0xca];
  param_1[0x10b] = param_1[0xce];
  param_1[0xec] = fVar32;
  param_1[0xed] = fVar21;
  param_1[0xee] = fVar28;
  param_1[0xef] = fVar22;
  param_1[0x10c] = fVar32;
  param_1[0x10d] = fVar21;
  param_1[0x10e] = fVar28;
  param_1[0x10f] = fVar22;
  fVar1 = param_1[0xd0];
  fVar2 = param_1[0xd1];
  fVar3 = param_1[0xd2];
  fVar4 = param_1[0xd3];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  fVar12 = param_1[7];
  fVar18 = param_1[8];
  fVar19 = param_1[9];
  fVar20 = param_1[10];
  fVar23 = param_1[0xb];
  fVar24 = param_1[0xc];
  fVar25 = param_1[0xd];
  fVar26 = param_1[0xe];
  fVar27 = param_1[0xf];
  fVar29 = param_1[0xd4];
  fVar30 = param_1[0xd5];
  fVar31 = param_1[0xd6];
  fVar33 = param_1[0xd7];
  fVar34 = param_1[0xd8];
  fVar35 = param_1[0xd9];
  fVar36 = param_1[0xda];
  fVar13 = param_1[0xdb];
  fVar14 = param_1[0xdc];
  fVar15 = param_1[0xdd];
  fVar16 = param_1[0xde];
  fVar17 = param_1[0xdf];
  param_1[0x110] = fVar1 * fVar5 + fVar2 * fVar9 + fVar3 * fVar18 + fVar4 * fVar24;
  param_1[0x111] = fVar1 * fVar6 + fVar2 * fVar10 + fVar3 * fVar19 + fVar4 * fVar25;
  param_1[0x112] = fVar1 * fVar7 + fVar2 * fVar11 + fVar3 * fVar20 + fVar4 * fVar26;
  param_1[0x113] = fVar1 * fVar8 + fVar2 * fVar12 + fVar3 * fVar23 + fVar4 * fVar27;
  param_1[0x114] = fVar29 * fVar5 + fVar30 * fVar9 + fVar31 * fVar18 + fVar33 * fVar24;
  param_1[0x115] = fVar29 * fVar6 + fVar30 * fVar10 + fVar31 * fVar19 + fVar33 * fVar25;
  param_1[0x116] = fVar29 * fVar7 + fVar30 * fVar11 + fVar31 * fVar20 + fVar33 * fVar26;
  param_1[0x117] = fVar29 * fVar8 + fVar30 * fVar12 + fVar31 * fVar23 + fVar33 * fVar27;
  param_1[0x118] = fVar34 * fVar5 + fVar35 * fVar9 + fVar36 * fVar18 + fVar13 * fVar24;
  param_1[0x119] = fVar34 * fVar6 + fVar35 * fVar10 + fVar36 * fVar19 + fVar13 * fVar25;
  param_1[0x11a] = fVar34 * fVar7 + fVar35 * fVar11 + fVar36 * fVar20 + fVar13 * fVar26;
  param_1[0x11b] = fVar34 * fVar8 + fVar35 * fVar12 + fVar36 * fVar23 + fVar13 * fVar27;
  param_1[0x11c] = fVar14 * fVar5 + fVar15 * fVar9 + fVar16 * fVar18 + fVar17 * fVar24;
  param_1[0x11d] = fVar14 * fVar6 + fVar15 * fVar10 + fVar16 * fVar19 + fVar17 * fVar25;
  param_1[0x11e] = fVar14 * fVar7 + fVar15 * fVar11 + fVar16 * fVar20 + fVar17 * fVar26;
  param_1[0x11f] = fVar14 * fVar8 + fVar15 * fVar12 + fVar16 * fVar23 + fVar17 * fVar27;
  fVar1 = param_1[0x20];
  fVar2 = param_1[0x21];
  fVar3 = param_1[0x22];
  fVar4 = param_1[0x23];
  fVar5 = param_1[0xe4];
  fVar6 = param_1[0xe5];
  fVar7 = param_1[0xe6];
  fVar8 = param_1[0xe7];
  fVar9 = param_1[0xe0];
  fVar10 = param_1[0xe1];
  fVar11 = param_1[0xe2];
  fVar12 = param_1[0xe3];
  fVar18 = param_1[0xe8];
  fVar19 = param_1[0xe9];
  fVar20 = param_1[0xea];
  fVar23 = param_1[0xeb];
  fVar24 = param_1[0x24];
  fVar25 = param_1[0x25];
  fVar26 = param_1[0x26];
  fVar27 = param_1[0x27];
  fVar29 = param_1[0x28];
  fVar30 = param_1[0x29];
  fVar31 = param_1[0x2a];
  fVar33 = param_1[0x2b];
  fVar34 = param_1[0x2c];
  fVar35 = param_1[0x2d];
  fVar36 = param_1[0x2e];
  fVar13 = param_1[0x2f];
  param_1[0x130] = fVar1 * fVar9 + fVar2 * fVar5 + fVar3 * fVar18 + fVar4 * fVar32;
  param_1[0x131] = fVar1 * fVar10 + fVar2 * fVar6 + fVar3 * fVar19 + fVar4 * fVar21;
  param_1[0x132] = fVar1 * fVar11 + fVar2 * fVar7 + fVar3 * fVar20 + fVar4 * fVar28;
  param_1[0x133] = fVar1 * fVar12 + fVar2 * fVar8 + fVar3 * fVar23 + fVar4 * fVar22;
  param_1[0x134] = fVar24 * fVar9 + fVar25 * fVar5 + fVar26 * fVar18 + fVar27 * fVar32;
  param_1[0x135] = fVar24 * fVar10 + fVar25 * fVar6 + fVar26 * fVar19 + fVar27 * fVar21;
  param_1[0x136] = fVar24 * fVar11 + fVar25 * fVar7 + fVar26 * fVar20 + fVar27 * fVar28;
  param_1[0x137] = fVar24 * fVar12 + fVar25 * fVar8 + fVar26 * fVar23 + fVar27 * fVar22;
  param_1[0x138] = fVar29 * fVar9 + fVar30 * fVar5 + fVar31 * fVar18 + fVar33 * fVar32;
  param_1[0x139] = fVar29 * fVar10 + fVar30 * fVar6 + fVar31 * fVar19 + fVar33 * fVar21;
  param_1[0x13a] = fVar29 * fVar11 + fVar30 * fVar7 + fVar31 * fVar20 + fVar33 * fVar28;
  param_1[0x13b] = fVar29 * fVar12 + fVar30 * fVar8 + fVar31 * fVar23 + fVar33 * fVar22;
  param_1[0x13c] = fVar34 * fVar9 + fVar35 * fVar5 + fVar36 * fVar18 + fVar13 * fVar32;
  param_1[0x13d] = fVar34 * fVar10 + fVar35 * fVar6 + fVar36 * fVar19 + fVar13 * fVar21;
  param_1[0x13e] = fVar34 * fVar11 + fVar35 * fVar7 + fVar36 * fVar20 + fVar13 * fVar28;
  param_1[0x13f] = fVar34 * fVar12 + fVar35 * fVar8 + fVar36 * fVar23 + fVar13 * fVar22;
  return;
}



// FUNCTION 142760800 FUN_142760800 body=389 status=ok
// SIG undefined FUN_142760800(void)

void FUN_142760800(longlong param_1,undefined8 *param_2,char param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 local_5c8;
  float fStack_5c0;
  float fStack_5bc;
  undefined1 local_5b8 [64];
  undefined1 local_578 [1392];
  
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0xeb0) = *param_2;
  *(undefined8 *)(param_1 + 0xeb8) = uVar5;
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0xec0) = param_2[2];
  *(undefined8 *)(param_1 + 0xec8) = uVar5;
  uVar5 = param_2[5];
  *(undefined8 *)(param_1 + 0xed0) = param_2[4];
  *(undefined8 *)(param_1 + 0xed8) = uVar5;
  uVar5 = param_2[7];
  *(undefined8 *)(param_1 + 0xee0) = param_2[6];
  *(undefined8 *)(param_1 + 0xee8) = uVar5;
  fVar1 = *(float *)(param_1 + 0xee8);
  fStack_5c0 = fVar1;
  if (fVar1 == 0.0) {
    fStack_5c0 = 1e-08;
  }
  if (1.0 < *(float *)(param_1 + 0xeec) || *(float *)(param_1 + 0xeec) == 1.0) {
    fStack_5c0 = 0.0;
    fVar7 = 1.0 / *(float *)(param_1 + 0xed8);
    fStack_5bc = 1.0;
    local_5c8 = CONCAT44(1.0 - fVar7 * fVar1,fVar7);
  }
  else {
    fStack_5c0 = 1.0 / fStack_5c0;
    local_5c8 = 0;
    fStack_5bc = fStack_5c0 * *(float *)(param_1 + 0xed8) - 1e-08;
  }
  *(undefined8 *)(param_1 + 0x11c0) = local_5c8;
  *(ulonglong *)(param_1 + 0x11c8) = CONCAT44(fStack_5bc,fStack_5c0);
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0xe0) = *param_2;
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0xf0) = param_2[2];
  *(undefined8 *)(param_1 + 0xf8) = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  *(undefined4 *)(param_1 + 0x10c) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar3;
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  if (param_3 != '\0') {
    FUN_142743a80(local_578,param_1 + 0x90);
    _guard_xfg_dispatch_icall_nop((undefined8 *)(param_1 + 0x390),local_578,0x570);
    return;
  }
  uVar5 = param_2[1];
  *(undefined8 *)(param_1 + 0x390) = *param_2;
  *(undefined8 *)(param_1 + 0x398) = uVar5;
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x3a0) = param_2[2];
  *(undefined8 *)(param_1 + 0x3a8) = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x3b4) = uVar2;
  *(undefined4 *)(param_1 + 0x3b8) = uVar3;
  *(undefined4 *)(param_1 + 0x3bc) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(param_1 + 0x3c4) = uVar2;
  *(undefined4 *)(param_1 + 0x3c8) = uVar3;
  *(undefined4 *)(param_1 + 0x3cc) = uVar4;
  puVar6 = (undefined8 *)FViewMatrices::InvertProjectionMatrix(local_5b8);
  uVar5 = puVar6[1];
  *(undefined8 *)(param_1 + 0x410) = *puVar6;
  *(undefined8 *)(param_1 + 0x418) = uVar5;
  uVar5 = puVar6[3];
  *(undefined8 *)(param_1 + 0x420) = puVar6[2];
  *(undefined8 *)(param_1 + 0x428) = uVar5;
  uVar5 = puVar6[5];
  *(undefined8 *)(param_1 + 0x430) = puVar6[4];
  *(undefined8 *)(param_1 + 0x438) = uVar5;
  uVar5 = puVar6[7];
  *(undefined8 *)(param_1 + 0x440) = puVar6[6];
  *(undefined8 *)(param_1 + 0x448) = uVar5;
  return;
}



// FUNCTION 142760990 FUN_142760990 body=1397 status=ok
// SIG undefined FUN_142760990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142760990(ulonglong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined1 uVar18;
  undefined1 *puVar19;
  int *piVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong uVar23;
  longlong *plVar24;
  uint uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 local_178 [4];
  int local_174;
  longlong *local_170;
  undefined1 *local_168;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  int local_124;
  undefined1 local_120 [8];
  undefined1 *local_118;
  int local_110;
  undefined1 local_108 [128];
  undefined1 *local_88;
  uint local_80;
  int local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar23 = 0;
  bVar6 = true;
  local_174 = *(int *)(DAT_146b095e0 + 4);
  iVar10 = (int)param_1[1];
  uVar14 = uVar23;
  bVar7 = bVar6;
  if (0 < iVar10) {
    do {
      plVar3 = *(longlong **)(uVar23 + *param_1);
      plVar24 = plVar3 + 4;
      if ((plVar3[3] == -1) || (*plVar24 == -1)) {
        if (*plVar3 == 0) {
          plVar3[3] = 0;
          plVar3[4] = 0;
        }
        else {
          if (plVar3[3] == -1) {
            cVar9 = (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,*plVar3,plVar3 + 3,1);
            if (cVar9 == '\0') {
              plVar3[3] = -1;
            }
            *(undefined1 *)((longlong)plVar3 + 0x2d) = 0;
          }
          if (*plVar24 == -1) {
            cVar9 = (**(code **)(*DAT_146ab6358 + 0x340))(DAT_146ab6358,plVar3[1],plVar24,1);
            if (cVar9 == '\0') {
              *plVar24 = -1;
            }
            *(undefined1 *)((longlong)plVar3 + 0x2e) = 0;
          }
        }
      }
      if ((plVar3[3] == -1) || (plVar3[4] == -1)) {
        return 0;
      }
      bVar6 = false;
      if (*plVar3 != 0) {
        bVar6 = bVar7;
      }
      iVar10 = (int)param_1[1];
      uVar25 = (int)uVar14 + 1;
      uVar23 = uVar23 + 8;
      uVar14 = (ulonglong)uVar25;
      bVar7 = bVar6;
    } while ((int)uVar25 < iVar10);
  }
  if ((!bVar6) && (DAT_146b0a154 == '\0')) {
    DAT_146b0a154 = '\x01';
    iVar10 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0x3c) < iVar10) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 6,iVar10);
    iVar10 = (int)param_1[1];
  }
  uVar23 = 0;
  plVar24 = (longlong *)*param_1;
  local_88 = (undefined1 *)0x0;
  fVar28 = 0.0;
  local_80 = 0;
  local_7c = 0;
  uVar14 = (longlong)iVar10 & 0x1fffffffffffffff;
  if (plVar24 + iVar10 < plVar24) {
    uVar14 = uVar23;
  }
  if (uVar14 != 0) {
    do {
      uVar4 = *(ulonglong *)(*plVar24 + 0x20);
      uVar5 = *(ulonglong *)(*plVar24 + 0x18);
      if (uVar4 < uVar5) {
        fVar26 = 0.0;
      }
      else {
        lVar15 = uVar4 - uVar5;
        fVar26 = (float)lVar15;
        if (lVar15 < 0) {
          fVar26 = fVar26 + 1.8446744e+19;
        }
        fVar26 = fVar26 * 0.001;
      }
      iVar10 = (int)param_1[7];
      *(int *)(param_1 + 7) = iVar10 + 1;
      if (*(int *)((longlong)param_1 + 0x3c) < iVar10 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar10);
      }
      uVar4 = param_1[6];
      plVar24 = plVar24 + 1;
      uVar23 = uVar23 + 1;
      *(float *)(uVar4 + (longlong)iVar10 * 8) = fVar26;
      *(float *)(uVar4 + 4 + (longlong)iVar10 * 8) = fVar26;
    } while (uVar23 != uVar14);
    uVar23 = (ulonglong)local_80;
  }
  piVar20 = (int *)param_1[4];
  piVar1 = piVar20 + (longlong)(int)param_1[5] * 2;
  if (piVar20 != piVar1) {
    while( true ) {
      uVar25 = (uint)uVar23;
      if (*piVar20 == 0) {
        if (uVar25 != 0) {
          uVar14 = param_1[6];
          puVar16 = local_108;
          if (local_88 != (undefined1 *)0x0) {
            puVar16 = local_88;
          }
          *(float *)(uVar14 + (longlong)*(int *)(puVar16 + (longlong)(int)(uVar25 - 1) * 4) * 8) =
               *(float *)(uVar14 + (longlong)*(int *)(puVar16 + (longlong)(int)(uVar25 - 1) * 4) * 8
                         ) - *(float *)(uVar14 + 4 + (longlong)piVar20[1] * 8);
          uVar23 = (ulonglong)local_80;
        }
        local_80 = (int)uVar23 + 1;
        if (local_7c < (int)local_80) {
          TArray<int,TInlineAllocator<32,FDefaultAllocator>_>::ResizeGrow(local_108,uVar23);
        }
        puVar16 = local_108;
        if (local_88 != (undefined1 *)0x0) {
          puVar16 = local_88;
        }
        *(int *)(puVar16 + (longlong)(int)uVar23 * 4) = piVar20[1];
      }
      else {
        iVar10 = (uVar25 - (uVar25 - 1)) + -1;
        if (iVar10 != 0) {
          puVar16 = local_108;
          if (local_88 != (undefined1 *)0x0) {
            puVar16 = local_88;
          }
          _guard_xfg_dispatch_icall_nop
                    (puVar16 + (longlong)(int)(uVar25 - 1) * 4,puVar16 + (longlong)(int)uVar25 * 4,
                     (longlong)iVar10 << 2);
          uVar25 = local_80;
        }
        local_80 = uVar25 - 1;
        TArray<int,TInlineAllocator<32,FDefaultAllocator>_>::ResizeShrink(local_108);
      }
      piVar20 = piVar20 + 2;
      if (piVar20 == piVar1) break;
      uVar23 = (ulonglong)local_80;
    }
  }
  iVar8 = local_174;
  puVar19 = (undefined1 *)0x0;
  iVar10 = *(int *)(DAT_146b09620 + 4);
  local_158 = (undefined1 *)0x0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = (undefined1 *)0x0;
  local_110 = 0;
  puVar16 = puVar19;
  puVar21 = puVar19;
  puVar22 = puVar19;
  if (0 < (int)param_1[1]) {
    do {
      plVar24 = (longlong *)(*(longlong *)(puVar16 + *param_1) + 0x10);
      lVar15 = *plVar24;
      if ((int)local_150 != local_124) {
        puVar11 = local_120;
        if (puVar22 != (undefined1 *)0x0) {
          puVar11 = puVar22;
        }
        iVar2 = *(int *)(puVar11 +
                        (longlong)
                        (int)((int)((ulonglong)lVar15 >> 0x20) + (int)lVar15 & local_110 - 1U) * 4);
        while (iVar2 != -1) {
          lVar17 = (longlong)iVar2;
          if (*(longlong *)(puVar21 + lVar17 * 0x18) == lVar15) {
            if (iVar2 != -1) {
              puVar11 = puVar21 + lVar17 * 0x18;
              goto LAB_142760db9;
            }
            break;
          }
          iVar2 = *(int *)(puVar21 + lVar17 * 0x18 + 0x10);
        }
      }
      puVar11 = (undefined1 *)0x0;
LAB_142760db9:
      puVar12 = puVar11 + 8;
      if (puVar11 == (undefined1 *)0x0) {
        puVar12 = (undefined1 *)0x0;
      }
      if (puVar12 == (undefined1 *)0x0) {
        local_168 = local_178;
        local_178[0] = 1;
        local_170 = plVar24;
        FUN_1404a8630(&local_158,&local_174,&local_170,0);
        puVar21 = local_158;
        puVar22 = local_118;
      }
      uVar14 = param_1[6];
      if (iVar10 == 0) {
        uVar27 = *(undefined4 *)(puVar16 + uVar14);
      }
      else {
        uVar27 = *(undefined4 *)(puVar16 + uVar14 + 4);
      }
      if (iVar8 != 0) {
        uVar18 = 3;
        if (puVar12 == (undefined1 *)0x0) {
          uVar18 = 0;
        }
        uVar13 = FUN_14168db40();
        local_188 = uVar18;
        FCsvProfiler::RecordCustomStat(uVar13,plVar24,DAT_146b094c8,uVar27);
        uVar14 = param_1[6];
        puVar21 = local_158;
        puVar22 = local_118;
      }
      fVar28 = fVar28 + *(float *)(puVar16 + uVar14);
      uVar25 = (int)puVar19 + 1;
      puVar19 = (undefined1 *)(ulonglong)uVar25;
      puVar16 = puVar16 + 8;
    } while ((int)uVar25 < (int)param_1[1]);
  }
  if (iVar8 != 0) {
    uVar13 = FUN_14168db40();
    local_188 = 0;
    FCsvProfiler::RecordCustomStat(uVar13,&DAT_146b095e8,DAT_146b094c8,fVar28);
    puVar22 = local_118;
  }
  local_110 = 0;
  if (puVar22 != (undefined1 *)0x0) {
    FMemory::Free(puVar22);
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_158);
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142760f10 FUN_142760f10 body=246 status=ok
// SIG undefined FUN_142760f10(void)

void FUN_142760f10(undefined8 *param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_2 + 0x28cc) & 0x100) == 0) {
    fVar1 = *(float *)(DAT_146b09488 + 4);
    *(float *)(param_1 + 5) = fVar1;
    fVar2 = *(float *)((longlong)param_1 + 0x24);
    if (param_3 - fVar1 <= fVar2) {
      return;
    }
    if (*(float *)(param_1 + 4) <= fVar2 && fVar2 != *(float *)(param_1 + 4)) {
      *param_1 = *(undefined8 *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(float *)(param_1 + 4) = fVar2;
    }
    *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0x8dc);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x8e4);
    uVar3 = FUN_14274efb0(param_2);
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    *(float *)((longlong)param_1 + 0x24) = param_3;
    if (*(float *)(param_1 + 4) <= param_3 && param_3 != *(float *)(param_1 + 4)) {
      return;
    }
  }
  *param_1 = *(undefined8 *)(param_2 + 0x8dc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x8e4);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)(param_2 + 0x8dc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x8e4);
  uVar3 = FUN_14274efb0(param_2);
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(float *)(param_1 + 4) = param_3;
  *(float *)((longlong)param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 142761010 FUN_142761010 body=464 status=ok
// SIG undefined FUN_142761010(void)

void FUN_142761010(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *in_stack_ffffffffffffffa8;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  float local_20;
  undefined8 local_18;
  float local_10;
  float local_c;
  
  local_30 = *(undefined4 *)(param_1 + 0x908);
  local_38 = *(undefined8 *)(param_1 + 0x900);
  local_40 = *(undefined4 *)(param_1 + 0x914);
  local_48 = *(undefined8 *)(param_1 + 0x90c);
  plVar4 = *(longlong **)(DAT_146b17150 + 0xab8);
  if ((plVar4 != (longlong *)0x0) && (*(int *)(param_1 + 0xf60) != 0)) {
    in_stack_ffffffffffffffa8 = &local_38;
    (**(code **)(*plVar4 + 0x48))
              (plVar4,*(int *)(param_1 + 0xf60),&local_48,*(undefined4 *)(param_1 + 0x93c),
               in_stack_ffffffffffffffa8);
    *(undefined8 *)(param_1 + 0x900) = local_38;
    *(undefined4 *)(param_1 + 0x908) = local_30;
    *(undefined8 *)(param_1 + 0x90c) = local_48;
    *(undefined4 *)(param_1 + 0x914) = local_40;
  }
  FUN_1427611e0(param_1 + 0x390,&local_38,&local_48);
  if (((*(int *)(param_1 + 0xf60) - 1U < 2) &&
      (lVar5 = *(longlong *)(param_1 + 0x10), *(char *)(lVar5 + 0x4c) != '\0')) &&
     (*(int *)(lVar5 + 0x48) != 0)) {
    fVar1 = *(float *)(lVar5 + 0x34);
    fVar2 = *(float *)(param_1 + 0x528);
    fVar3 = *(float *)(param_1 + 0x518);
    local_20 = *(float *)(param_1 + 0x538);
    local_18 = CONCAT44(fVar2,fVar3);
    local_c = (fVar2 * fVar1 + *(float *)(param_1 + 0x8e0)) * fVar2 +
              (fVar3 * fVar1 + *(float *)(param_1 + 0x8dc)) * fVar3 +
              (local_20 * fVar1 + *(float *)(param_1 + 0x8e4)) * local_20;
    local_10 = local_20;
    GetViewFrustumBounds
              (param_1 + 0x1070,param_1 + 0x590,&local_18,1,
               (ulonglong)in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  }
  else {
    GetViewFrustumBounds(param_1 + 0x1070,param_1 + 0x590,*(int *)(param_1 + 0xf60) == 3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x940),(void *)(param_1 + 0x390),0x570);
  return;
}



// FUNCTION 1427611e0 FUN_1427611e0 body=6614 status=ok
// SIG undefined FUN_1427611e0(void)

void FUN_1427611e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
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
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  
  *(undefined8 *)(param_1 + 0x153) = *(undefined8 *)param_2;
  param_1[0x155] = param_2[2];
  uVar11 = __libm_sse2_sincosf_(param_3[2] * 0.017453292);
  fVar18 = (float)((ulonglong)uVar11 >> 0x20);
  fVar17 = (float)uVar11;
  fVar10 = -fVar17;
  uVar11 = __libm_sse2_sincosf_(*param_3 * 0.017453292);
  fVar16 = (float)((ulonglong)uVar11 >> 0x20);
  fVar14 = (float)uVar11;
  fVar19 = -fVar14;
  uVar11 = __libm_sse2_sincosf_(param_3[1] * 0.017453292);
  fVar22 = (float)((ulonglong)uVar11 >> 0x20);
  fVar15 = (float)uVar11;
  fVar13 = -fVar15;
  fVar43 = fVar13 * 0.0 + fVar22 * fVar16 + fVar14 * 0.0 + 0.0;
  fVar45 = fVar13 * 1.0 + fVar22 * 0.0 + 0.0 + 0.0;
  fVar47 = fVar13 * 0.0 + fVar22 * fVar19 + fVar16 * 0.0 + 0.0;
  fVar49 = fVar13 * 0.0 + fVar22 * 0.0 + 0.0 + 0.0;
  fVar13 = fVar22 * 0.0 + fVar15 * fVar16 + fVar14 * 0.0 + 0.0;
  fVar20 = fVar22 * 1.0 + fVar15 * 0.0 + 0.0 + 0.0;
  fVar21 = fVar22 * 0.0 + fVar15 * fVar19 + fVar16 * 0.0 + 0.0;
  fVar22 = fVar22 * 0.0 + fVar15 * 0.0 + 0.0 + 0.0;
  fVar23 = fVar16 * 0.0 + 0.0 + fVar14 * 1.0 + 0.0;
  fVar24 = fVar19 * 0.0 + 0.0 + fVar16 * 1.0 + 0.0;
  fVar25 = fVar16 * 0.0 + 0.0 + fVar14 * 0.0 + 0.0;
  fVar26 = fVar19 * 0.0 + 0.0 + fVar16 * 0.0 + 0.0;
  fVar27 = fVar45 * 0.0 + fVar43 * 1.0 + fVar47 * 0.0 + fVar49 * 0.0;
  fVar29 = fVar45 * fVar18 + fVar43 * 0.0 + fVar47 * fVar10 + fVar49 * 0.0;
  fVar30 = fVar45 * fVar17 + fVar43 * 0.0 + fVar47 * fVar18 + fVar49 * 0.0;
  fVar43 = fVar45 * 0.0 + fVar43 * 0.0 + fVar47 * 0.0 + fVar49 * 1.0;
  fVar14 = fVar20 * 0.0 + fVar13 * 1.0 + fVar21 * 0.0 + fVar22 * 0.0;
  fVar15 = fVar20 * fVar18 + fVar13 * 0.0 + fVar21 * fVar10 + fVar22 * 0.0;
  fVar16 = fVar20 * fVar17 + fVar13 * 0.0 + fVar21 * fVar18 + fVar22 * 0.0;
  fVar22 = fVar20 * 0.0 + fVar13 * 0.0 + fVar21 * 0.0 + fVar22 * 1.0;
  fVar13 = fVar23 * 1.0 + 0.0 + fVar24 * 0.0 + 0.0;
  fVar19 = fVar18 * 0.0 + fVar23 * 0.0 + fVar24 * fVar10 + 0.0;
  fVar20 = fVar17 * 0.0 + fVar23 * 0.0 + fVar24 * fVar18 + 0.0;
  fVar21 = fVar23 * 0.0 + 0.0 + fVar24 * 0.0 + 0.0;
  fVar23 = fVar25 * 1.0 + 0.0 + fVar26 * 0.0 + 0.0;
  fVar10 = fVar18 * 0.0 + fVar25 * 0.0 + fVar26 * fVar10 + 0.0;
  fVar17 = fVar17 * 0.0 + fVar25 * 0.0 + fVar26 * fVar18 + 0.0;
  fVar18 = fVar25 * 0.0 + 0.0 + fVar26 * 0.0 + 1.0;
  fVar44 = fVar29 * 1.0 + fVar27 * 0.0 + fVar30 * 0.0 + fVar43 * 0.0;
  fVar46 = fVar29 * 0.0 + fVar27 * 0.0 + fVar30 * 1.0 + fVar43 * 0.0;
  fVar48 = fVar29 * 0.0 + fVar27 * 1.0 + fVar30 * 0.0 + fVar43 * 0.0;
  fVar50 = fVar29 * 0.0 + fVar27 * 0.0 + fVar30 * 0.0 + fVar43 * 1.0;
  fVar39 = fVar15 * 1.0 + fVar14 * 0.0 + fVar16 * 0.0 + fVar22 * 0.0;
  fVar40 = fVar15 * 0.0 + fVar14 * 0.0 + fVar16 * 1.0 + fVar22 * 0.0;
  fVar41 = fVar15 * 0.0 + fVar14 * 1.0 + fVar16 * 0.0 + fVar22 * 0.0;
  fVar42 = fVar15 * 0.0 + fVar14 * 0.0 + fVar16 * 0.0 + fVar22 * 1.0;
  fVar15 = -param_2[2];
  fVar35 = fVar19 * 1.0 + fVar13 * 0.0 + fVar20 * 0.0 + fVar21 * 0.0;
  fVar36 = fVar19 * 0.0 + fVar13 * 0.0 + fVar20 * 1.0 + fVar21 * 0.0;
  fVar37 = fVar19 * 0.0 + fVar13 * 1.0 + fVar20 * 0.0 + fVar21 * 0.0;
  fVar38 = fVar19 * 0.0 + fVar13 * 0.0 + fVar20 * 0.0 + fVar21 * 1.0;
  fVar14 = -param_2[1];
  fVar31 = fVar10 * 1.0 + fVar23 * 0.0 + fVar17 * 0.0 + fVar18 * 0.0;
  fVar32 = fVar10 * 0.0 + fVar23 * 0.0 + fVar17 * 1.0 + fVar18 * 0.0;
  fVar33 = fVar10 * 0.0 + fVar23 * 1.0 + fVar17 * 0.0 + fVar18 * 0.0;
  fVar34 = fVar10 * 0.0 + fVar23 * 0.0 + fVar17 * 0.0 + fVar18 * 1.0;
  fVar17 = -*param_2;
  param_1[0x60] = fVar39 * 0.0 + fVar44 * 1.0 + fVar35 * 0.0 + fVar31 * 0.0;
  param_1[0x61] = fVar40 * 0.0 + fVar46 * 1.0 + fVar36 * 0.0 + fVar32 * 0.0;
  param_1[0x62] = fVar41 * 0.0 + fVar48 * 1.0 + fVar37 * 0.0 + fVar33 * 0.0;
  param_1[99] = fVar42 * 0.0 + fVar50 * 1.0 + fVar38 * 0.0 + fVar34 * 0.0;
  param_1[100] = fVar39 * 1.0 + fVar44 * 0.0 + fVar35 * 0.0 + fVar31 * 0.0;
  param_1[0x65] = fVar40 * 1.0 + fVar46 * 0.0 + fVar36 * 0.0 + fVar32 * 0.0;
  param_1[0x66] = fVar41 * 1.0 + fVar48 * 0.0 + fVar37 * 0.0 + fVar33 * 0.0;
  param_1[0x67] = fVar42 * 1.0 + fVar50 * 0.0 + fVar38 * 0.0 + fVar34 * 0.0;
  param_1[0x68] = fVar39 * 0.0 + fVar44 * 0.0 + fVar35 * 1.0 + fVar31 * 0.0;
  param_1[0x69] = fVar40 * 0.0 + fVar46 * 0.0 + fVar36 * 1.0 + fVar32 * 0.0;
  param_1[0x6a] = fVar41 * 0.0 + fVar48 * 0.0 + fVar37 * 1.0 + fVar33 * 0.0;
  param_1[0x6b] = fVar42 * 0.0 + fVar50 * 0.0 + fVar38 * 1.0 + fVar34 * 0.0;
  param_1[0x6c] = fVar14 * fVar39 + fVar17 * fVar44 + fVar15 * fVar35 + fVar31 * 1.0;
  param_1[0x6d] = fVar14 * fVar40 + fVar17 * fVar46 + fVar15 * fVar36 + fVar32 * 1.0;
  param_1[0x6e] = fVar14 * fVar41 + fVar17 * fVar48 + fVar15 * fVar37 + fVar33 * 1.0;
  param_1[0x6f] = fVar14 * fVar42 + fVar17 * fVar50 + fVar15 * fVar38 + fVar34 * 1.0;
  uVar11 = *(undefined8 *)param_3;
  uVar12 = __libm_sse2_sincosf_((float)uVar11 * 3.1415927 * 0.0055555557);
  fVar14 = (float)((ulonglong)uVar12 >> 0x20);
  fVar17 = (float)uVar12;
  fVar19 = -fVar17;
  uVar11 = __libm_sse2_sincosf_((float)((ulonglong)uVar11 >> 0x20) * 3.1415927 * 0.0055555557);
  fVar15 = (float)((ulonglong)uVar11 >> 0x20);
  fVar10 = (float)uVar11;
  fVar18 = -fVar10;
  fVar23 = fVar18 * 0.0 + fVar15 * fVar14 + fVar17 * 0.0 + 0.0;
  fVar24 = fVar18 * 1.0 + fVar15 * 0.0 + 0.0 + 0.0;
  fVar25 = fVar18 * 0.0 + fVar15 * fVar19 + fVar14 * 0.0 + 0.0;
  fVar26 = fVar18 * 0.0 + fVar15 * 0.0 + 0.0 + 0.0;
  fVar18 = fVar15 * 0.0 + fVar10 * fVar14 + fVar17 * 0.0 + 0.0;
  fVar16 = fVar15 * 1.0 + fVar10 * 0.0 + 0.0 + 0.0;
  fVar22 = fVar15 * 0.0 + fVar10 * fVar19 + fVar14 * 0.0 + 0.0;
  fVar13 = fVar15 * 0.0 + fVar10 * 0.0 + 0.0 + 0.0;
  fVar10 = fVar14 * 0.0 + 0.0 + fVar17 * 1.0 + 0.0;
  fVar15 = fVar19 * 0.0 + 0.0 + fVar14 * 1.0 + 0.0;
  fVar17 = fVar14 * 0.0 + 0.0 + fVar17 * 0.0 + 0.0;
  fVar14 = fVar19 * 0.0 + 0.0 + fVar14 * 0.0 + 0.0;
  fVar19 = fVar24 * 0.0 + fVar23 * 1.0 + fVar25 * 0.0 + fVar26 * 0.0;
  fVar20 = fVar24 * 1.0 + fVar23 * 0.0 + fVar25 * -0.0 + fVar26 * 0.0;
  fVar21 = fVar24 * -0.0 + fVar23 * 0.0 + fVar25 * 1.0 + fVar26 * 0.0;
  fVar23 = fVar24 * 0.0 + fVar23 * 0.0 + fVar25 * 0.0 + fVar26 * 1.0;
  fVar24 = fVar16 * 0.0 + fVar18 * 1.0 + fVar22 * 0.0 + fVar13 * 0.0;
  fVar25 = fVar16 * 1.0 + fVar18 * 0.0 + fVar22 * -0.0 + fVar13 * 0.0;
  fVar26 = fVar16 * -0.0 + fVar18 * 0.0 + fVar22 * 1.0 + fVar13 * 0.0;
  fVar18 = fVar16 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0 + fVar13 * 1.0;
  fVar16 = fVar10 * 1.0 + 0.0 + fVar15 * 0.0 + 0.0;
  fVar22 = fVar10 * 0.0 + 0.0 + fVar15 * -0.0 + 0.0;
  fVar13 = fVar10 * 0.0 + -0.0 + fVar15 * 1.0 + 0.0;
  fVar10 = fVar10 * 0.0 + 0.0 + fVar15 * 0.0 + 0.0;
  fVar15 = fVar17 * 1.0 + 0.0 + fVar14 * 0.0 + 0.0;
  fVar27 = fVar17 * 0.0 + 0.0 + fVar14 * -0.0 + 0.0;
  fVar29 = fVar17 * 0.0 + -0.0 + fVar14 * 1.0 + 0.0;
  fVar17 = fVar17 * 0.0 + 0.0 + fVar14 * 0.0 + 1.0;
  param_1[0xc0] = fVar20 * 1.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar23 * 0.0;
  param_1[0xc1] = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 1.0 + fVar23 * 0.0;
  param_1[0xc2] = fVar20 * 0.0 + fVar19 * 1.0 + fVar21 * 0.0 + fVar23 * 0.0;
  param_1[0xc3] = fVar20 * 0.0 + fVar19 * 0.0 + fVar21 * 0.0 + fVar23 * 1.0;
  param_1[0xc4] = fVar25 * 1.0 + fVar24 * 0.0 + fVar26 * 0.0 + fVar18 * 0.0;
  param_1[0xc5] = fVar25 * 0.0 + fVar24 * 0.0 + fVar26 * 1.0 + fVar18 * 0.0;
  param_1[0xc6] = fVar25 * 0.0 + fVar24 * 1.0 + fVar26 * 0.0 + fVar18 * 0.0;
  param_1[199] = fVar25 * 0.0 + fVar24 * 0.0 + fVar26 * 0.0 + fVar18 * 1.0;
  param_1[200] = fVar22 * 1.0 + fVar16 * 0.0 + fVar13 * 0.0 + fVar10 * 0.0;
  param_1[0xc9] = fVar22 * 0.0 + fVar16 * 0.0 + fVar13 * 1.0 + fVar10 * 0.0;
  param_1[0xca] = fVar22 * 0.0 + fVar16 * 1.0 + fVar13 * 0.0 + fVar10 * 0.0;
  param_1[0xcb] = fVar22 * 0.0 + fVar16 * 0.0 + fVar13 * 0.0 + fVar10 * 1.0;
  param_1[0xcc] = fVar27 * 1.0 + fVar15 * 0.0 + fVar29 * 0.0 + fVar17 * 0.0;
  param_1[0xcd] = fVar27 * 0.0 + fVar15 * 0.0 + fVar29 * 1.0 + fVar17 * 0.0;
  param_1[0xce] = fVar27 * 0.0 + fVar15 * 1.0 + fVar29 * 0.0 + fVar17 * 0.0;
  param_1[0xcf] = fVar27 * 0.0 + fVar15 * 0.0 + fVar29 * 0.0 + fVar17 * 1.0;
  fVar17 = param_1[0x60];
  fVar10 = param_1[0x61];
  fVar14 = param_1[0x62];
  fVar15 = param_1[99];
  fVar18 = param_1[4];
  fVar16 = param_1[5];
  fVar22 = param_1[6];
  fVar13 = param_1[7];
  fVar19 = *param_1;
  fVar20 = param_1[1];
  fVar21 = param_1[2];
  fVar23 = param_1[3];
  fVar24 = param_1[8];
  fVar25 = param_1[9];
  fVar26 = param_1[10];
  fVar27 = param_1[0xb];
  fVar29 = param_1[0xc];
  fVar30 = param_1[0xd];
  fVar43 = param_1[0xe];
  fVar45 = param_1[0xf];
  fVar47 = param_1[100];
  fVar49 = param_1[0x65];
  fVar28 = param_1[0x66];
  fVar1 = param_1[0x67];
  fVar2 = param_1[0x68];
  fVar3 = param_1[0x69];
  fVar4 = param_1[0x6a];
  fVar5 = param_1[0x6b];
  fVar6 = param_1[0x6c];
  fVar7 = param_1[0x6d];
  fVar8 = param_1[0x6e];
  fVar9 = param_1[0x6f];
  param_1[0x80] = fVar17 * fVar19 + fVar10 * fVar18 + fVar14 * fVar24 + fVar15 * fVar29;
  param_1[0x81] = fVar17 * fVar20 + fVar10 * fVar16 + fVar14 * fVar25 + fVar15 * fVar30;
  param_1[0x82] = fVar17 * fVar21 + fVar10 * fVar22 + fVar14 * fVar26 + fVar15 * fVar43;
  param_1[0x83] = fVar17 * fVar23 + fVar10 * fVar13 + fVar14 * fVar27 + fVar15 * fVar45;
  param_1[0x84] = fVar47 * fVar19 + fVar49 * fVar18 + fVar28 * fVar24 + fVar1 * fVar29;
  param_1[0x85] = fVar47 * fVar20 + fVar49 * fVar16 + fVar28 * fVar25 + fVar1 * fVar30;
  param_1[0x86] = fVar47 * fVar21 + fVar49 * fVar22 + fVar28 * fVar26 + fVar1 * fVar43;
  param_1[0x87] = fVar47 * fVar23 + fVar49 * fVar13 + fVar28 * fVar27 + fVar1 * fVar45;
  param_1[0x88] = fVar2 * fVar19 + fVar3 * fVar18 + fVar4 * fVar24 + fVar5 * fVar29;
  param_1[0x89] = fVar2 * fVar20 + fVar3 * fVar16 + fVar4 * fVar25 + fVar5 * fVar30;
  param_1[0x8a] = fVar2 * fVar21 + fVar3 * fVar22 + fVar4 * fVar26 + fVar5 * fVar43;
  param_1[0x8b] = fVar2 * fVar23 + fVar3 * fVar13 + fVar4 * fVar27 + fVar5 * fVar45;
  param_1[0x8c] = fVar6 * fVar19 + fVar7 * fVar18 + fVar8 * fVar24 + fVar9 * fVar29;
  param_1[0x8d] = fVar6 * fVar20 + fVar7 * fVar16 + fVar8 * fVar25 + fVar9 * fVar30;
  param_1[0x8e] = fVar6 * fVar21 + fVar7 * fVar22 + fVar8 * fVar26 + fVar9 * fVar43;
  param_1[0x8f] = fVar6 * fVar23 + fVar7 * fVar13 + fVar8 * fVar27 + fVar9 * fVar45;
  fVar17 = param_2[1];
  fVar10 = *param_2;
  fVar14 = param_2[2];
  param_1[0x70] = fVar39 * 0.0 + fVar44 * 1.0 + fVar35 * 0.0 + fVar31 * fVar10;
  param_1[0x71] = fVar39 * 1.0 + fVar44 * 0.0 + fVar35 * 0.0 + fVar31 * fVar17;
  param_1[0x72] = fVar39 * 0.0 + fVar44 * 0.0 + fVar35 * 1.0 + fVar31 * fVar14;
  param_1[0x73] = fVar39 * 0.0 + fVar44 * 0.0 + fVar35 * 0.0 + fVar31 * 1.0;
  param_1[0x74] = fVar40 * 0.0 + fVar46 * 1.0 + fVar36 * 0.0 + fVar32 * fVar10;
  param_1[0x75] = fVar40 * 1.0 + fVar46 * 0.0 + fVar36 * 0.0 + fVar32 * fVar17;
  param_1[0x76] = fVar40 * 0.0 + fVar46 * 0.0 + fVar36 * 1.0 + fVar32 * fVar14;
  param_1[0x77] = fVar40 * 0.0 + fVar46 * 0.0 + fVar36 * 0.0 + fVar32 * 1.0;
  param_1[0x78] = fVar41 * 0.0 + fVar48 * 1.0 + fVar37 * 0.0 + fVar33 * fVar10;
  param_1[0x79] = fVar41 * 1.0 + fVar48 * 0.0 + fVar37 * 0.0 + fVar33 * fVar17;
  param_1[0x7a] = fVar41 * 0.0 + fVar48 * 0.0 + fVar37 * 1.0 + fVar33 * fVar14;
  param_1[0x7b] = fVar41 * 0.0 + fVar48 * 0.0 + fVar37 * 0.0 + fVar33 * 1.0;
  param_1[0x7c] = fVar42 * 0.0 + fVar50 * 1.0 + fVar38 * 0.0 + fVar34 * fVar10;
  param_1[0x7d] = fVar42 * 1.0 + fVar50 * 0.0 + fVar38 * 0.0 + fVar34 * fVar17;
  param_1[0x7e] = fVar42 * 0.0 + fVar50 * 0.0 + fVar38 * 1.0 + fVar34 * fVar14;
  param_1[0x7f] = fVar42 * 0.0 + fVar50 * 0.0 + fVar38 * 0.0 + fVar34 * 1.0;
  fVar17 = param_1[0x20];
  fVar10 = param_1[0x21];
  fVar14 = param_1[0x22];
  fVar15 = param_1[0x23];
  fVar18 = param_1[0x74];
  fVar16 = param_1[0x75];
  fVar22 = param_1[0x76];
  fVar13 = param_1[0x77];
  fVar19 = param_1[0x70];
  fVar20 = param_1[0x71];
  fVar21 = param_1[0x72];
  fVar23 = param_1[0x73];
  fVar24 = param_1[0x78];
  fVar25 = param_1[0x79];
  fVar26 = param_1[0x7a];
  fVar27 = param_1[0x7b];
  fVar29 = param_1[0x7c];
  fVar30 = param_1[0x7d];
  fVar43 = param_1[0x7e];
  fVar45 = param_1[0x7f];
  fVar47 = param_1[0x24];
  fVar49 = param_1[0x25];
  fVar28 = param_1[0x26];
  fVar1 = param_1[0x27];
  fVar2 = param_1[0x28];
  fVar3 = param_1[0x29];
  fVar4 = param_1[0x2a];
  fVar5 = param_1[0x2b];
  fVar6 = param_1[0x2c];
  fVar7 = param_1[0x2d];
  fVar8 = param_1[0x2e];
  fVar9 = param_1[0x2f];
  param_1[0xa0] = fVar17 * fVar19 + fVar10 * fVar18 + fVar14 * fVar24 + fVar15 * fVar29;
  param_1[0xa1] = fVar17 * fVar20 + fVar10 * fVar16 + fVar14 * fVar25 + fVar15 * fVar30;
  param_1[0xa2] = fVar17 * fVar21 + fVar10 * fVar22 + fVar14 * fVar26 + fVar15 * fVar43;
  param_1[0xa3] = fVar17 * fVar23 + fVar10 * fVar13 + fVar14 * fVar27 + fVar15 * fVar45;
  param_1[0xa4] = fVar47 * fVar19 + fVar49 * fVar18 + fVar28 * fVar24 + fVar1 * fVar29;
  param_1[0xa5] = fVar47 * fVar20 + fVar49 * fVar16 + fVar28 * fVar25 + fVar1 * fVar30;
  param_1[0xa6] = fVar47 * fVar21 + fVar49 * fVar22 + fVar28 * fVar26 + fVar1 * fVar43;
  param_1[0xa7] = fVar47 * fVar23 + fVar49 * fVar13 + fVar28 * fVar27 + fVar1 * fVar45;
  param_1[0xa8] = fVar2 * fVar19 + fVar3 * fVar18 + fVar4 * fVar24 + fVar5 * fVar29;
  param_1[0xa9] = fVar2 * fVar20 + fVar3 * fVar16 + fVar4 * fVar25 + fVar5 * fVar30;
  param_1[0xaa] = fVar2 * fVar21 + fVar3 * fVar22 + fVar4 * fVar26 + fVar5 * fVar43;
  param_1[0xab] = fVar2 * fVar23 + fVar3 * fVar13 + fVar4 * fVar27 + fVar5 * fVar45;
  param_1[0xac] = fVar6 * fVar19 + fVar7 * fVar18 + fVar8 * fVar24 + fVar9 * fVar29;
  param_1[0xad] = fVar6 * fVar20 + fVar7 * fVar16 + fVar8 * fVar25 + fVar9 * fVar30;
  param_1[0xae] = fVar6 * fVar21 + fVar7 * fVar22 + fVar8 * fVar26 + fVar9 * fVar43;
  param_1[0xaf] = fVar6 * fVar23 + fVar7 * fVar13 + fVar8 * fVar27 + fVar9 * fVar45;
  *(ulonglong *)(param_1 + 0x150) = *(ulonglong *)(param_1 + 0x153) ^ 0x8000000080000000;
  *(ulonglong *)(param_1 + 0xd0) = CONCAT44(fVar46,fVar44);
  *(ulonglong *)(param_1 + 0xd2) = CONCAT44(fVar50,fVar48);
  param_1[0x152] = -param_1[0x155];
  *(ulonglong *)(param_1 + 0xd4) = CONCAT44(fVar40,fVar39);
  *(ulonglong *)(param_1 + 0xd6) = CONCAT44(fVar42,fVar41);
  *(ulonglong *)(param_1 + 0xd8) = CONCAT44(fVar36,fVar35);
  *(ulonglong *)(param_1 + 0xda) = CONCAT44(fVar38,fVar37);
  *(ulonglong *)(param_1 + 0xdc) = CONCAT44(fVar32,fVar31);
  *(ulonglong *)(param_1 + 0xde) = CONCAT44(fVar34,fVar33);
  fVar17 = param_1[0xd7];
  fVar10 = param_1[0xdb];
  fVar14 = param_1[0xdf];
  fVar15 = param_1[0xd3];
  param_1[0xe0] = param_1[0xd0];
  param_1[0xe1] = param_1[0xd4];
  param_1[0xe2] = param_1[0xd8];
  param_1[0xe3] = param_1[0xdc];
  param_1[0xe4] = param_1[0xd1];
  param_1[0xe5] = param_1[0xd5];
  param_1[0xe6] = param_1[0xd9];
  param_1[0xe7] = param_1[0xdd];
  param_1[0xe8] = param_1[0xd2];
  param_1[0xe9] = param_1[0xd6];
  param_1[0xea] = param_1[0xda];
  param_1[0xeb] = param_1[0xde];
  param_1[0xec] = fVar15;
  param_1[0xed] = fVar17;
  param_1[0xee] = fVar10;
  param_1[0xef] = fVar14;
  fVar18 = param_1[100];
  fVar16 = param_1[0x65];
  fVar22 = param_1[0x66];
  fVar13 = param_1[0x67];
  fVar19 = param_1[0x60];
  fVar20 = param_1[0x61];
  fVar21 = param_1[0x62];
  fVar23 = param_1[99];
  fVar28 = -param_1[0x152];
  fVar47 = -param_1[0x150];
  fVar24 = param_1[0x68];
  fVar25 = param_1[0x69];
  fVar26 = param_1[0x6a];
  fVar27 = param_1[0x6b];
  fVar49 = -param_1[0x151];
  fVar29 = param_1[0x6c];
  fVar30 = param_1[0x6d];
  fVar43 = param_1[0x6e];
  fVar45 = param_1[0x6f];
  param_1[0xf0] = fVar19 * 1.0 + fVar18 * 0.0 + fVar24 * 0.0 + fVar29 * 0.0;
  param_1[0xf1] = fVar20 * 1.0 + fVar16 * 0.0 + fVar25 * 0.0 + fVar30 * 0.0;
  param_1[0xf2] = fVar21 * 1.0 + fVar22 * 0.0 + fVar26 * 0.0 + fVar43 * 0.0;
  param_1[0xf3] = fVar23 * 1.0 + fVar13 * 0.0 + fVar27 * 0.0 + fVar45 * 0.0;
  param_1[0xf4] = fVar19 * 0.0 + fVar18 * 1.0 + fVar24 * 0.0 + fVar29 * 0.0;
  param_1[0xf5] = fVar20 * 0.0 + fVar16 * 1.0 + fVar25 * 0.0 + fVar30 * 0.0;
  param_1[0xf6] = fVar21 * 0.0 + fVar22 * 1.0 + fVar26 * 0.0 + fVar43 * 0.0;
  param_1[0xf7] = fVar23 * 0.0 + fVar13 * 1.0 + fVar27 * 0.0 + fVar45 * 0.0;
  param_1[0xf8] = fVar19 * 0.0 + fVar18 * 0.0 + fVar24 * 1.0 + fVar29 * 0.0;
  param_1[0xf9] = fVar20 * 0.0 + fVar16 * 0.0 + fVar25 * 1.0 + fVar30 * 0.0;
  param_1[0xfa] = fVar21 * 0.0 + fVar22 * 0.0 + fVar26 * 1.0 + fVar43 * 0.0;
  param_1[0xfb] = fVar23 * 0.0 + fVar13 * 0.0 + fVar27 * 1.0 + fVar45 * 0.0;
  param_1[0xfc] = fVar47 * fVar19 + fVar49 * fVar18 + fVar28 * fVar24 + fVar29 * 1.0;
  param_1[0xfd] = fVar47 * fVar20 + fVar49 * fVar16 + fVar28 * fVar25 + fVar30 * 1.0;
  param_1[0xfe] = fVar47 * fVar21 + fVar49 * fVar22 + fVar28 * fVar26 + fVar43 * 1.0;
  param_1[0xff] = fVar47 * fVar23 + fVar49 * fVar13 + fVar28 * fVar27 + fVar45 * 1.0;
  fVar13 = param_1[0x70];
  fVar19 = param_1[0x71];
  fVar20 = param_1[0x72];
  fVar21 = param_1[0x73];
  fVar18 = param_1[0x150];
  fVar16 = param_1[0x152];
  fVar23 = param_1[0x74];
  fVar24 = param_1[0x75];
  fVar25 = param_1[0x76];
  fVar26 = param_1[0x77];
  fVar22 = param_1[0x151];
  fVar27 = param_1[0x78];
  fVar29 = param_1[0x79];
  fVar30 = param_1[0x7a];
  fVar43 = param_1[0x7b];
  fVar45 = param_1[0x7c];
  fVar47 = param_1[0x7d];
  fVar49 = param_1[0x7e];
  fVar28 = param_1[0x7f];
  param_1[0x100] = fVar19 * 0.0 + fVar13 * 1.0 + fVar20 * 0.0 + fVar21 * fVar18;
  param_1[0x101] = fVar19 * 1.0 + fVar13 * 0.0 + fVar20 * 0.0 + fVar21 * fVar22;
  param_1[0x102] = fVar19 * 0.0 + fVar13 * 0.0 + fVar20 * 1.0 + fVar21 * fVar16;
  param_1[0x103] = fVar19 * 0.0 + fVar13 * 0.0 + fVar20 * 0.0 + fVar21 * 1.0;
  param_1[0x104] = fVar24 * 0.0 + fVar23 * 1.0 + fVar25 * 0.0 + fVar26 * fVar18;
  param_1[0x105] = fVar24 * 1.0 + fVar23 * 0.0 + fVar25 * 0.0 + fVar26 * fVar22;
  param_1[0x106] = fVar24 * 0.0 + fVar23 * 0.0 + fVar25 * 1.0 + fVar26 * fVar16;
  param_1[0x107] = fVar24 * 0.0 + fVar23 * 0.0 + fVar25 * 0.0 + fVar26 * 1.0;
  param_1[0x108] = fVar29 * 0.0 + fVar27 * 1.0 + fVar30 * 0.0 + fVar43 * fVar18;
  param_1[0x109] = fVar29 * 1.0 + fVar27 * 0.0 + fVar30 * 0.0 + fVar43 * fVar22;
  param_1[0x10a] = fVar29 * 0.0 + fVar27 * 0.0 + fVar30 * 1.0 + fVar43 * fVar16;
  param_1[0x10b] = fVar29 * 0.0 + fVar27 * 0.0 + fVar30 * 0.0 + fVar43 * 1.0;
  param_1[0x10c] = fVar47 * 0.0 + fVar45 * 1.0 + fVar49 * 0.0 + fVar28 * fVar18;
  param_1[0x10d] = fVar47 * 1.0 + fVar45 * 0.0 + fVar49 * 0.0 + fVar28 * fVar22;
  param_1[0x10e] = fVar47 * 0.0 + fVar45 * 0.0 + fVar49 * 1.0 + fVar28 * fVar16;
  param_1[0x10f] = fVar47 * 0.0 + fVar45 * 0.0 + fVar49 * 0.0 + fVar28 * 1.0;
  fVar18 = param_1[0xd0];
  fVar16 = param_1[0xd1];
  fVar22 = param_1[0xd2];
  fVar13 = param_1[0xd3];
  fVar19 = *param_1;
  fVar20 = param_1[1];
  fVar21 = param_1[2];
  fVar23 = param_1[3];
  fVar24 = param_1[4];
  fVar25 = param_1[5];
  fVar26 = param_1[6];
  fVar27 = param_1[7];
  fVar29 = param_1[8];
  fVar30 = param_1[9];
  fVar43 = param_1[10];
  fVar45 = param_1[0xb];
  fVar47 = param_1[0xc];
  fVar49 = param_1[0xd];
  fVar28 = param_1[0xe];
  fVar1 = param_1[0xf];
  fVar2 = param_1[0xd4];
  fVar3 = param_1[0xd5];
  fVar4 = param_1[0xd6];
  fVar5 = param_1[0xd7];
  fVar6 = param_1[0xd8];
  fVar7 = param_1[0xd9];
  fVar8 = param_1[0xda];
  fVar9 = param_1[0xdb];
  fVar31 = param_1[0xdc];
  fVar32 = param_1[0xdd];
  fVar33 = param_1[0xde];
  fVar34 = param_1[0xdf];
  param_1[0x110] = fVar18 * fVar19 + fVar16 * fVar24 + fVar22 * fVar29 + fVar13 * fVar47;
  param_1[0x111] = fVar18 * fVar20 + fVar16 * fVar25 + fVar22 * fVar30 + fVar13 * fVar49;
  param_1[0x112] = fVar18 * fVar21 + fVar16 * fVar26 + fVar22 * fVar43 + fVar13 * fVar28;
  param_1[0x113] = fVar18 * fVar23 + fVar16 * fVar27 + fVar22 * fVar45 + fVar13 * fVar1;
  param_1[0x114] = fVar2 * fVar19 + fVar3 * fVar24 + fVar4 * fVar29 + fVar5 * fVar47;
  param_1[0x115] = fVar2 * fVar20 + fVar3 * fVar25 + fVar4 * fVar30 + fVar5 * fVar49;
  param_1[0x116] = fVar2 * fVar21 + fVar3 * fVar26 + fVar4 * fVar43 + fVar5 * fVar28;
  param_1[0x117] = fVar2 * fVar23 + fVar3 * fVar27 + fVar4 * fVar45 + fVar5 * fVar1;
  param_1[0x118] = fVar6 * fVar19 + fVar7 * fVar24 + fVar8 * fVar29 + fVar9 * fVar47;
  param_1[0x119] = fVar6 * fVar20 + fVar7 * fVar25 + fVar8 * fVar30 + fVar9 * fVar49;
  param_1[0x11a] = fVar6 * fVar21 + fVar7 * fVar26 + fVar8 * fVar43 + fVar9 * fVar28;
  param_1[0x11b] = fVar6 * fVar23 + fVar7 * fVar27 + fVar8 * fVar45 + fVar9 * fVar1;
  param_1[0x11c] = fVar31 * fVar19 + fVar32 * fVar24 + fVar33 * fVar29 + fVar34 * fVar47;
  param_1[0x11d] = fVar31 * fVar20 + fVar32 * fVar25 + fVar33 * fVar30 + fVar34 * fVar49;
  param_1[0x11e] = fVar31 * fVar21 + fVar32 * fVar26 + fVar33 * fVar43 + fVar34 * fVar28;
  param_1[0x11f] = fVar31 * fVar23 + fVar32 * fVar27 + fVar33 * fVar45 + fVar34 * fVar1;
  fVar18 = param_1[0x20];
  fVar16 = param_1[0x21];
  fVar22 = param_1[0x22];
  fVar13 = param_1[0x23];
  fVar19 = param_1[0xe4];
  fVar20 = param_1[0xe5];
  fVar21 = param_1[0xe6];
  fVar23 = param_1[0xe7];
  fVar24 = param_1[0xe0];
  fVar25 = param_1[0xe1];
  fVar26 = param_1[0xe2];
  fVar27 = param_1[0xe3];
  fVar29 = param_1[0xe8];
  fVar30 = param_1[0xe9];
  fVar43 = param_1[0xea];
  fVar45 = param_1[0xeb];
  fVar47 = param_1[0x24];
  fVar49 = param_1[0x25];
  fVar28 = param_1[0x26];
  fVar1 = param_1[0x27];
  fVar2 = param_1[0x28];
  fVar3 = param_1[0x29];
  fVar4 = param_1[0x2a];
  fVar5 = param_1[0x2b];
  fVar6 = param_1[0x2c];
  fVar7 = param_1[0x2d];
  fVar8 = param_1[0x2e];
  fVar9 = param_1[0x2f];
  param_1[0x130] = fVar18 * fVar24 + fVar16 * fVar19 + fVar22 * fVar29 + fVar13 * fVar15;
  param_1[0x131] = fVar18 * fVar25 + fVar16 * fVar20 + fVar22 * fVar30 + fVar13 * fVar17;
  param_1[0x132] = fVar18 * fVar26 + fVar16 * fVar21 + fVar22 * fVar43 + fVar13 * fVar10;
  param_1[0x133] = fVar18 * fVar27 + fVar16 * fVar23 + fVar22 * fVar45 + fVar13 * fVar14;
  param_1[0x134] = fVar47 * fVar24 + fVar49 * fVar19 + fVar28 * fVar29 + fVar1 * fVar15;
  param_1[0x135] = fVar47 * fVar25 + fVar49 * fVar20 + fVar28 * fVar30 + fVar1 * fVar17;
  param_1[0x136] = fVar47 * fVar26 + fVar49 * fVar21 + fVar28 * fVar43 + fVar1 * fVar10;
  param_1[0x137] = fVar47 * fVar27 + fVar49 * fVar23 + fVar28 * fVar45 + fVar1 * fVar14;
  param_1[0x138] = fVar2 * fVar24 + fVar3 * fVar19 + fVar4 * fVar29 + fVar5 * fVar15;
  param_1[0x139] = fVar2 * fVar25 + fVar3 * fVar20 + fVar4 * fVar30 + fVar5 * fVar17;
  param_1[0x13a] = fVar2 * fVar26 + fVar3 * fVar21 + fVar4 * fVar43 + fVar5 * fVar10;
  param_1[0x13b] = fVar2 * fVar27 + fVar3 * fVar23 + fVar4 * fVar45 + fVar5 * fVar14;
  param_1[0x13c] = fVar6 * fVar24 + fVar7 * fVar19 + fVar8 * fVar29 + fVar9 * fVar15;
  param_1[0x13d] = fVar6 * fVar25 + fVar7 * fVar20 + fVar8 * fVar30 + fVar9 * fVar17;
  param_1[0x13e] = fVar6 * fVar26 + fVar7 * fVar21 + fVar8 * fVar43 + fVar9 * fVar10;
  param_1[0x13f] = fVar6 * fVar27 + fVar7 * fVar23 + fVar8 * fVar45 + fVar9 * fVar14;
  fVar18 = param_1[0xd0];
  fVar16 = param_1[0xd1];
  fVar22 = param_1[0xd2];
  fVar13 = param_1[0xd3];
  fVar19 = param_1[0x34];
  fVar20 = param_1[0x35];
  fVar21 = param_1[0x36];
  fVar23 = param_1[0x37];
  fVar24 = param_1[0x30];
  fVar25 = param_1[0x31];
  fVar26 = param_1[0x32];
  fVar27 = param_1[0x33];
  fVar29 = param_1[0x38];
  fVar30 = param_1[0x39];
  fVar43 = param_1[0x3a];
  fVar45 = param_1[0x3b];
  fVar47 = param_1[0x3c];
  fVar49 = param_1[0x3d];
  fVar28 = param_1[0x3e];
  fVar1 = param_1[0x3f];
  fVar2 = param_1[0xd4];
  fVar3 = param_1[0xd5];
  fVar4 = param_1[0xd6];
  fVar5 = param_1[0xd7];
  fVar6 = param_1[0xd8];
  fVar7 = param_1[0xd9];
  fVar8 = param_1[0xda];
  fVar9 = param_1[0xdb];
  fVar31 = param_1[0xdc];
  fVar32 = param_1[0xdd];
  fVar33 = param_1[0xde];
  fVar34 = param_1[0xdf];
  param_1[0x120] = fVar18 * fVar24 + fVar16 * fVar19 + fVar22 * fVar29 + fVar13 * fVar47;
  param_1[0x121] = fVar18 * fVar25 + fVar16 * fVar20 + fVar22 * fVar30 + fVar13 * fVar49;
  param_1[0x122] = fVar18 * fVar26 + fVar16 * fVar21 + fVar22 * fVar43 + fVar13 * fVar28;
  param_1[0x123] = fVar18 * fVar27 + fVar16 * fVar23 + fVar22 * fVar45 + fVar13 * fVar1;
  param_1[0x124] = fVar2 * fVar24 + fVar3 * fVar19 + fVar4 * fVar29 + fVar5 * fVar47;
  param_1[0x125] = fVar2 * fVar25 + fVar3 * fVar20 + fVar4 * fVar30 + fVar5 * fVar49;
  param_1[0x126] = fVar2 * fVar26 + fVar3 * fVar21 + fVar4 * fVar43 + fVar5 * fVar28;
  param_1[0x127] = fVar2 * fVar27 + fVar3 * fVar23 + fVar4 * fVar45 + fVar5 * fVar1;
  param_1[0x128] = fVar6 * fVar24 + fVar7 * fVar19 + fVar8 * fVar29 + fVar9 * fVar47;
  param_1[0x129] = fVar6 * fVar25 + fVar7 * fVar20 + fVar8 * fVar30 + fVar9 * fVar49;
  param_1[0x12a] = fVar6 * fVar26 + fVar7 * fVar21 + fVar8 * fVar43 + fVar9 * fVar28;
  param_1[299] = fVar6 * fVar27 + fVar7 * fVar23 + fVar8 * fVar45 + fVar9 * fVar1;
  param_1[300] = fVar31 * fVar24 + fVar32 * fVar19 + fVar33 * fVar29 + fVar34 * fVar47;
  param_1[0x12d] = fVar31 * fVar25 + fVar32 * fVar20 + fVar33 * fVar30 + fVar34 * fVar49;
  param_1[0x12e] = fVar31 * fVar26 + fVar32 * fVar21 + fVar33 * fVar43 + fVar34 * fVar28;
  param_1[0x12f] = fVar31 * fVar27 + fVar32 * fVar23 + fVar33 * fVar45 + fVar34 * fVar1;
  fVar18 = param_1[0x40];
  fVar16 = param_1[0x41];
  fVar22 = param_1[0x42];
  fVar13 = param_1[0x43];
  fVar19 = param_1[0xe4];
  fVar20 = param_1[0xe5];
  fVar21 = param_1[0xe6];
  fVar23 = param_1[0xe7];
  fVar24 = param_1[0xe0];
  fVar25 = param_1[0xe1];
  fVar26 = param_1[0xe2];
  fVar27 = param_1[0xe3];
  fVar29 = param_1[0xe8];
  fVar30 = param_1[0xe9];
  fVar43 = param_1[0xea];
  fVar45 = param_1[0xeb];
  fVar47 = param_1[0x44];
  fVar49 = param_1[0x45];
  fVar28 = param_1[0x46];
  fVar1 = param_1[0x47];
  fVar2 = param_1[0x48];
  fVar3 = param_1[0x49];
  fVar4 = param_1[0x4a];
  fVar5 = param_1[0x4b];
  fVar6 = param_1[0x4c];
  fVar7 = param_1[0x4d];
  fVar8 = param_1[0x4e];
  fVar9 = param_1[0x4f];
  param_1[0x140] = fVar18 * fVar24 + fVar16 * fVar19 + fVar22 * fVar29 + fVar13 * fVar15;
  param_1[0x141] = fVar18 * fVar25 + fVar16 * fVar20 + fVar22 * fVar30 + fVar13 * fVar17;
  param_1[0x142] = fVar18 * fVar26 + fVar16 * fVar21 + fVar22 * fVar43 + fVar13 * fVar10;
  param_1[0x143] = fVar18 * fVar27 + fVar16 * fVar23 + fVar22 * fVar45 + fVar13 * fVar14;
  param_1[0x144] = fVar47 * fVar24 + fVar49 * fVar19 + fVar28 * fVar29 + fVar1 * fVar15;
  param_1[0x145] = fVar47 * fVar25 + fVar49 * fVar20 + fVar28 * fVar30 + fVar1 * fVar17;
  param_1[0x146] = fVar47 * fVar26 + fVar49 * fVar21 + fVar28 * fVar43 + fVar1 * fVar10;
  param_1[0x147] = fVar47 * fVar27 + fVar49 * fVar23 + fVar28 * fVar45 + fVar1 * fVar14;
  param_1[0x148] = fVar2 * fVar24 + fVar3 * fVar19 + fVar4 * fVar29 + fVar5 * fVar15;
  param_1[0x149] = fVar2 * fVar25 + fVar3 * fVar20 + fVar4 * fVar30 + fVar5 * fVar17;
  param_1[0x14a] = fVar2 * fVar26 + fVar3 * fVar21 + fVar4 * fVar43 + fVar5 * fVar10;
  param_1[0x14b] = fVar2 * fVar27 + fVar3 * fVar23 + fVar4 * fVar45 + fVar5 * fVar14;
  param_1[0x14c] = fVar6 * fVar24 + fVar7 * fVar19 + fVar8 * fVar29 + fVar9 * fVar15;
  param_1[0x14d] = fVar6 * fVar25 + fVar7 * fVar20 + fVar8 * fVar30 + fVar9 * fVar17;
  param_1[0x14e] = fVar6 * fVar26 + fVar7 * fVar21 + fVar8 * fVar43 + fVar9 * fVar10;
  param_1[0x14f] = fVar6 * fVar27 + fVar7 * fVar23 + fVar8 * fVar45 + fVar9 * fVar14;
  fVar17 = param_1[0x60];
  fVar10 = param_1[0x61];
  fVar14 = param_1[0x62];
  fVar15 = param_1[99];
  fVar18 = param_1[0x30];
  fVar16 = param_1[0x31];
  fVar22 = param_1[0x32];
  fVar13 = param_1[0x33];
  fVar19 = param_1[0x34];
  fVar20 = param_1[0x35];
  fVar21 = param_1[0x36];
  fVar23 = param_1[0x37];
  fVar24 = param_1[0x38];
  fVar25 = param_1[0x39];
  fVar26 = param_1[0x3a];
  fVar27 = param_1[0x3b];
  fVar29 = param_1[0x3c];
  fVar30 = param_1[0x3d];
  fVar43 = param_1[0x3e];
  fVar45 = param_1[0x3f];
  fVar47 = param_1[100];
  fVar49 = param_1[0x65];
  fVar28 = param_1[0x66];
  fVar1 = param_1[0x67];
  fVar2 = param_1[0x68];
  fVar3 = param_1[0x69];
  fVar4 = param_1[0x6a];
  fVar5 = param_1[0x6b];
  fVar6 = param_1[0x6c];
  fVar7 = param_1[0x6d];
  fVar8 = param_1[0x6e];
  fVar9 = param_1[0x6f];
  param_1[0x90] = fVar17 * fVar18 + fVar10 * fVar19 + fVar14 * fVar24 + fVar15 * fVar29;
  param_1[0x91] = fVar17 * fVar16 + fVar10 * fVar20 + fVar14 * fVar25 + fVar15 * fVar30;
  param_1[0x92] = fVar17 * fVar22 + fVar10 * fVar21 + fVar14 * fVar26 + fVar15 * fVar43;
  param_1[0x93] = fVar17 * fVar13 + fVar10 * fVar23 + fVar14 * fVar27 + fVar15 * fVar45;
  param_1[0x94] = fVar47 * fVar18 + fVar49 * fVar19 + fVar28 * fVar24 + fVar1 * fVar29;
  param_1[0x95] = fVar47 * fVar16 + fVar49 * fVar20 + fVar28 * fVar25 + fVar1 * fVar30;
  param_1[0x96] = fVar47 * fVar22 + fVar49 * fVar21 + fVar28 * fVar26 + fVar1 * fVar43;
  param_1[0x97] = fVar47 * fVar13 + fVar49 * fVar23 + fVar28 * fVar27 + fVar1 * fVar45;
  param_1[0x98] = fVar2 * fVar18 + fVar3 * fVar19 + fVar4 * fVar24 + fVar5 * fVar29;
  param_1[0x99] = fVar2 * fVar16 + fVar3 * fVar20 + fVar4 * fVar25 + fVar5 * fVar30;
  param_1[0x9a] = fVar2 * fVar22 + fVar3 * fVar21 + fVar4 * fVar26 + fVar5 * fVar43;
  param_1[0x9b] = fVar2 * fVar13 + fVar3 * fVar23 + fVar4 * fVar27 + fVar5 * fVar45;
  param_1[0x9c] = fVar6 * fVar18 + fVar7 * fVar19 + fVar8 * fVar24 + fVar9 * fVar29;
  param_1[0x9d] = fVar6 * fVar16 + fVar7 * fVar20 + fVar8 * fVar25 + fVar9 * fVar30;
  param_1[0x9e] = fVar6 * fVar22 + fVar7 * fVar21 + fVar8 * fVar26 + fVar9 * fVar43;
  param_1[0x9f] = fVar6 * fVar13 + fVar7 * fVar23 + fVar8 * fVar27 + fVar9 * fVar45;
  fVar17 = param_1[0x40];
  fVar10 = param_1[0x41];
  fVar14 = param_1[0x42];
  fVar15 = param_1[0x43];
  fVar18 = param_1[0x70];
  fVar16 = param_1[0x71];
  fVar22 = param_1[0x72];
  fVar13 = param_1[0x73];
  fVar19 = param_1[0x74];
  fVar20 = param_1[0x75];
  fVar21 = param_1[0x76];
  fVar23 = param_1[0x77];
  fVar24 = param_1[0x78];
  fVar25 = param_1[0x79];
  fVar26 = param_1[0x7a];
  fVar27 = param_1[0x7b];
  fVar29 = param_1[0x7c];
  fVar30 = param_1[0x7d];
  fVar43 = param_1[0x7e];
  fVar45 = param_1[0x7f];
  fVar47 = param_1[0x44];
  fVar49 = param_1[0x45];
  fVar28 = param_1[0x46];
  fVar1 = param_1[0x47];
  fVar2 = param_1[0x48];
  fVar3 = param_1[0x49];
  fVar4 = param_1[0x4a];
  fVar5 = param_1[0x4b];
  fVar6 = param_1[0x4c];
  fVar7 = param_1[0x4d];
  fVar8 = param_1[0x4e];
  fVar9 = param_1[0x4f];
  param_1[0xb0] = fVar17 * fVar18 + fVar10 * fVar19 + fVar14 * fVar24 + fVar15 * fVar29;
  param_1[0xb1] = fVar17 * fVar16 + fVar10 * fVar20 + fVar14 * fVar25 + fVar15 * fVar30;
  param_1[0xb2] = fVar17 * fVar22 + fVar10 * fVar21 + fVar14 * fVar26 + fVar15 * fVar43;
  param_1[0xb3] = fVar17 * fVar13 + fVar10 * fVar23 + fVar14 * fVar27 + fVar15 * fVar45;
  param_1[0xb4] = fVar47 * fVar18 + fVar49 * fVar19 + fVar28 * fVar24 + fVar1 * fVar29;
  param_1[0xb5] = fVar47 * fVar16 + fVar49 * fVar20 + fVar28 * fVar25 + fVar1 * fVar30;
  param_1[0xb6] = fVar47 * fVar22 + fVar49 * fVar21 + fVar28 * fVar26 + fVar1 * fVar43;
  param_1[0xb7] = fVar47 * fVar13 + fVar49 * fVar23 + fVar28 * fVar27 + fVar1 * fVar45;
  param_1[0xb8] = fVar2 * fVar18 + fVar3 * fVar19 + fVar4 * fVar24 + fVar5 * fVar29;
  param_1[0xb9] = fVar2 * fVar16 + fVar3 * fVar20 + fVar4 * fVar25 + fVar5 * fVar30;
  param_1[0xba] = fVar2 * fVar22 + fVar3 * fVar21 + fVar4 * fVar26 + fVar5 * fVar43;
  param_1[0xbb] = fVar2 * fVar13 + fVar3 * fVar23 + fVar4 * fVar27 + fVar5 * fVar45;
  param_1[0xbc] = fVar6 * fVar18 + fVar7 * fVar19 + fVar8 * fVar24 + fVar9 * fVar29;
  param_1[0xbd] = fVar6 * fVar16 + fVar7 * fVar20 + fVar8 * fVar25 + fVar9 * fVar30;
  param_1[0xbe] = fVar6 * fVar22 + fVar7 * fVar21 + fVar8 * fVar26 + fVar9 * fVar43;
  param_1[0xbf] = fVar6 * fVar13 + fVar7 * fVar23 + fVar8 * fVar27 + fVar9 * fVar45;
  return;
}



// FUNCTION 142762bc0 FUN_142762bc0 body=1724 status=ok
// SIG undefined FUN_142762bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142762bc0(uint param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_110;
  uint local_108;
  longlong **local_100;
  ulonglong local_f8;
  int local_f0 [2];
  longlong *local_e8;
  int local_e0 [2];
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  int local_c4;
  longlong ***local_c0;
  longlong **local_b8;
  longlong local_b0;
  longlong **local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_108 = param_1;
  lVar3 = FUN_1419ef210();
  local_d8 = 0;
  local_d0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0xffffffff;
  local_b0 = lVar3;
  puVar4 = (undefined8 *)FUN_1419f19d0();
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4)
  {
    pplVar11 = (longlong **)0x0;
    if (*(int *)((longlong **)puVar4[2] + 1) == 0) {
      pplVar11 = (longlong **)puVar4[2];
    }
    if ((pplVar11 != (longlong **)0x0) &&
       (plVar14 = (longlong *)0x0, plVar10 = plVar14, 0 < *(int *)((longlong)pplVar11 + 0x34))) {
      do {
        iVar2 = (int)plVar10;
        local_c8 = param_1;
        local_c4 = iVar2;
        cVar1 = (*(code *)pplVar11[0x27])(&local_c8);
        if (cVar1 != '\0') {
          local_f8 = CONCAT44(local_f8._4_4_,iVar2);
          local_100 = pplVar11;
          TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
          ::FindId(lVar3 + 0x38,local_f0,&local_100);
          plVar6 = plVar14;
          if (local_f0[0] != -1) {
            plVar6 = (longlong *)((longlong)local_f0[0] * 0x20 + *(longlong *)(lVar3 + 0x38));
          }
          plVar13 = plVar6 + 2;
          if (plVar6 == (longlong *)0x0) {
            plVar13 = plVar14;
          }
          if ((plVar13 == (longlong *)0x0) || (*plVar13 == 0)) {
            local_118 = (longlong *)CONCAT44(local_118._4_4_,iVar2);
            LowLevelFatalErrorHandler
                      ("Unknown",0xf5c,
                       L"Missing global shader %s\'s permutation %i, Please make sure cooking was successful."
                       ,pplVar11[2]);
            local_118 = pplVar11[2];
            local_110 = iVar2;
            FDebug::AssertFailed
                      (&DAT_145189996,"Unknown",0xf5c,
                       L"Missing global shader %s\'s permutation %i, Please make sure cooking was successful."
                      );
            local_118 = &local_d8;
            local_e8 = (longlong *)FUN_142747930(pplVar11,plVar10,param_1,0);
            local_c0 = &local_a8;
            local_b8 = &local_e8;
            local_a8 = pplVar11;
            local_a0 = iVar2;
            FUN_142740050(&local_88,local_e0,&local_c0,0);
          }
        }
        plVar10 = (longlong *)(ulonglong)(iVar2 + 1U);
      } while ((int)(iVar2 + 1U) < *(int *)((longlong)pplVar11 + 0x34));
    }
  }
  puVar4 = (undefined8 *)FUN_1419f19c0();
  plVar10 = (longlong *)*puVar4;
  do {
    local_e8 = plVar10;
    if (plVar10 == (longlong *)0x0) {
      if (0 < (int)local_d0) {
        local_118 = (longlong *)((ulonglong)local_118 & 0xffffffffffffff00);
        FUN_142747080(DAT_146b09470,&local_d8,1);
        if (((DAT_146ab62cc < 0x1e) && ((0x3fffbf4aU >> (DAT_146ab62cc & 0x1f) & 1) != 0)) ||
           (*(char *)(DAT_146b09470 + 0x101) == '\0')) {
          local_100 = (longlong **)0x0;
          local_f8 = 1;
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_100,0);
          *(undefined4 *)local_100 = 0;
          FUN_14274bfb0(DAT_146b09470,L"Global",&local_100);
          if (local_100 != (longlong **)0x0) {
            FMemory::Free();
          }
        }
      }
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      if (local_d8 != 0) {
        FMemory::Free(local_d8);
      }
      return;
    }
    plVar6 = (longlong *)0x0;
    plVar14 = (longlong *)plVar10[2];
    plVar13 = plVar6;
    if ((int)(*(longlong **)plVar14[2])[1] == 0) {
      plVar13 = *(longlong **)plVar14[2];
    }
    if (plVar13 != (longlong *)0x0) {
      if (*(int *)(lVar3 + 0x90) != *(int *)(lVar3 + 0xbc)) {
        lVar9 = *(longlong *)(lVar3 + 200);
        if (*(longlong *)(lVar3 + 200) == 0) {
          lVar9 = lVar3 + 0xc0;
        }
        iVar2 = *(int *)(lVar9 + ((longlong)*(int *)(lVar3 + 0xd0) - 1U &
                                 (longlong)(int)plVar14[0xd]) * 4);
        if (iVar2 != -1) {
          do {
            plVar13 = (longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar2 * 0x18);
            if (*(longlong **)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar2 * 0x18) == plVar14) {
              if (iVar2 != -1) goto LAB_142762e53;
              break;
            }
            iVar2 = (int)plVar13[2];
          } while (iVar2 != -1);
        }
      }
      plVar13 = plVar6;
LAB_142762e53:
      plVar5 = plVar13 + 1;
      if (plVar13 == (longlong *)0x0) {
        plVar5 = plVar6;
      }
      if ((plVar5 == (longlong *)0x0) || (*plVar5 == 0)) {
        local_100 = (longlong **)0x0;
        local_f8 = local_f8 & 0xffffffff;
        plVar13 = plVar6;
        plVar10 = plVar6;
        plVar5 = plVar6;
        if (0 < (int)plVar14[3]) {
          do {
            local_c0 = (longlong ***)(ulonglong)local_108;
            plVar17 = (longlong *)0x0;
            if ((int)(*(longlong **)(plVar14[2] + (longlong)plVar5))[1] == 0) {
              plVar17 = *(longlong **)(plVar14[2] + (longlong)plVar5);
            }
            cVar1 = (*(code *)plVar17[0x27])(&local_c0);
            param_1 = local_108;
            if (cVar1 == '\0') break;
            iVar2 = (int)plVar13;
            uVar12 = iVar2 + 1;
            local_f8 = CONCAT44(local_f8._4_4_,uVar12);
            if ((int)plVar6 < (int)uVar12) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_100,plVar13);
              plVar6 = (longlong *)(local_f8 >> 0x20);
              uVar12 = (uint)local_f8;
            }
            plVar13 = (longlong *)(ulonglong)uVar12;
            uVar12 = (int)plVar10 + 1;
            local_100[iVar2] = plVar17;
            plVar10 = (longlong *)(ulonglong)uVar12;
            plVar5 = plVar5 + 1;
            param_1 = local_108;
          } while ((int)uVar12 < (int)plVar14[3]);
        }
        plVar10 = local_e8;
        pplVar11 = local_100;
        uVar15 = 0;
        iVar2 = (int)plVar13;
        if (iVar2 == (int)plVar14[3]) {
          LowLevelFatalErrorHandler
                    ("Unknown",0xf90,
                     L"Missing global shader pipeline %s, Please make sure cooking was successful.",
                     *plVar14);
          local_118 = (longlong *)*plVar14;
          FDebug::AssertFailed
                    (&DAT_1451899c6,"Unknown",0xf90,
                     L"Missing global shader pipeline %s, Please make sure cooking was successful.")
          ;
          if (*(char *)((longlong)plVar14 + 0x6c) == '\0') {
            puVar4 = (undefined8 *)plVar14[2];
            uVar16 = (longlong)(int)plVar14[3] & 0x1fffffffffffffff;
            if (puVar4 + (int)plVar14[3] < puVar4) {
              uVar16 = uVar15;
            }
            if (uVar16 != 0) {
              do {
                local_98 = *puVar4;
                local_90 = 0;
                TSet<TTuple<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType_const_>,FShaderCompileJob_*,0>,FDefaultSetAllocator>
                ::FindId(&local_88,local_f0,&local_98);
                puVar8 = (undefined8 *)0x0;
                if (local_f0[0] != -1) {
                  puVar8 = (undefined8 *)((longlong)local_f0[0] * 0x20 + local_88);
                }
                local_e8 = (longlong *)0x0;
                puVar7 = puVar8 + 2;
                if (puVar8 == (undefined8 *)0x0) {
                  puVar7 = (undefined8 *)0x0;
                }
                lVar3 = (**(code **)(*(longlong *)*puVar7 + 0x10))();
                TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                ::FindId(lVar3 + 0x3f8,&local_c8,0);
                if ((local_c8 == 0xffffffff) ||
                   (lVar9 = (longlong)(int)local_c8 * 0x20 + *(longlong *)(lVar3 + 0x3f8),
                   lVar9 == 0)) {
                  local_a8 = &local_e8;
                  TSet<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<FVertexFactoryType_const_*_const_&>_>
                            (lVar3 + 0x3f8,local_e0,&local_a8,0);
                  lVar9 = (longlong)local_e0[0] * 0x20 + *(longlong *)(lVar3 + 0x3f8);
                }
                iVar2 = *(int *)(lVar9 + 0x10);
                *(int *)(lVar9 + 0x10) = iVar2 + 1;
                if (*(int *)(lVar9 + 0x14) < iVar2 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            ((longlong *)(lVar9 + 8),iVar2);
                }
                puVar4 = puVar4 + 1;
                uVar15 = uVar15 + 1;
                *(longlong **)(*(longlong *)(lVar9 + 8) + (longlong)iVar2 * 8) = plVar14;
              } while (uVar15 != uVar16);
            }
          }
          else {
            puVar4 = (undefined8 *)operator_new(0x38);
            if (puVar4 == (undefined8 *)0x0) {
              puVar4 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(puVar4 + 2) = 0;
              *(undefined4 *)(puVar4 + 1) = 0;
              *(undefined2 *)((longlong)puVar4 + 0x14) = 0;
              *(undefined1 *)((longlong)puVar4 + 0x16) = 0;
              *puVar4 = &PTR__scalar_deleting_destructor__14510bf48;
              puVar4[3] = 0;
              *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
              *(undefined1 *)(puVar4 + 5) = 0;
              puVar4[6] = plVar14;
              *(undefined4 *)(puVar4 + 4) = 0;
              if (*(int *)((longlong)puVar4 + 0x24) != iVar2) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(puVar4 + 3,plVar13);
              }
            }
            if (0 < iVar2) {
              do {
                local_118 = puVar4 + 3;
                FUN_142747930(*pplVar11,0,param_1,plVar14);
                pplVar11 = pplVar11 + 1;
                plVar13 = (longlong *)((longlong)plVar13 + -1);
              } while (plVar13 != (longlong *)0x0);
            }
            uVar15 = local_d0;
            lVar3 = (longlong)(int)local_d0;
            iVar2 = (int)local_d0 + 1;
            local_d0 = CONCAT44(local_d0._4_4_,iVar2);
            if (local_d0._4_4_ < iVar2) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_d8,uVar15 & 0xffffffff);
            }
            *(undefined8 **)(local_d8 + lVar3 * 8) = puVar4;
          }
        }
        lVar3 = local_b0;
        param_1 = local_108;
        if (local_100 != (longlong **)0x0) {
          FMemory::Free(local_100);
          lVar3 = local_b0;
          param_1 = local_108;
        }
      }
    }
    plVar10 = (longlong *)*plVar10;
  } while( true );
}



// FUNCTION 142763280 FUN_142763280 body=350 status=ok
// SIG undefined FUN_142763280(void)

ulonglong FUN_142763280(longlong param_1,float *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong in_RAX;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar6 = *(float *)(param_1 + 0x5c4) * 1.0 + fVar3 * *(float *)(param_1 + 0x5b4) +
          fVar2 * *(float *)(param_1 + 0x5a4) + fVar1 * *(float *)(param_1 + 0x594);
  fVar7 = *(float *)(param_1 + 0x5cc) * 1.0 + fVar3 * *(float *)(param_1 + 0x5bc) +
          fVar2 * *(float *)(param_1 + 0x5ac) + fVar1 * *(float *)(param_1 + 0x59c);
  if (fVar7 == 0.0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (fVar7 <= 0.0) {
    fVar5 = -1.0;
  }
  else {
    fVar5 = 1.0;
  }
  if (DAT_1464c9c24 <= 0.0) {
    fVar6 = 1.0 - fVar6;
  }
  iVar4 = *(int *)(param_1 + 0x374) - *(int *)(param_1 + 0x36c);
  *param_3 = CONCAT44((0.5 - fVar6 * 0.5 * (fVar5 / fVar7)) * (float)iVar4 +
                      (float)*(int *)(param_1 + 0x36c),
                      (float)(*(int *)(param_1 + 0x370) - *(int *)(param_1 + 0x368)) *
                      ((*(float *)(param_1 + 0x5c0) * 1.0 + fVar3 * *(float *)(param_1 + 0x5b0) +
                       fVar2 * *(float *)(param_1 + 0x5a0) + fVar1 * *(float *)(param_1 + 0x590)) *
                       0.5 * (fVar5 / fVar7) + 0.5) + (float)*(int *)(param_1 + 0x368));
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



// FUNCTION 1427633e0 FUN_1427633e0 body=195 status=ok
// SIG undefined FUN_1427633e0(void)

float * FUN_1427633e0(longlong param_1,float *param_2,float *param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  if (param_4 != '\0') {
    fVar4 = *(float *)(param_1 + 0x604);
    fVar5 = *(float *)(param_1 + 0x608);
    fVar6 = *(float *)(param_1 + 0x60c);
    fVar7 = *(float *)(param_1 + 0x5f4);
    fVar8 = *(float *)(param_1 + 0x5f8);
    fVar9 = *(float *)(param_1 + 0x5fc);
    fVar10 = *(float *)(param_1 + 0x5e4);
    fVar11 = *(float *)(param_1 + 0x5e8);
    fVar12 = *(float *)(param_1 + 0x5ec);
    fVar13 = *(float *)(param_1 + 0x5d4);
    fVar14 = *(float *)(param_1 + 0x5d8);
    fVar15 = *(float *)(param_1 + 0x5dc);
    *param_2 = *(float *)(param_1 + 0x600) * 1.0 + fVar2 * *(float *)(param_1 + 0x5f0) +
               fVar1 * *(float *)(param_1 + 0x5e0) + fVar3 * *(float *)(param_1 + 0x5d0);
    param_2[1] = fVar4 * 1.0 + fVar2 * fVar7 + fVar1 * fVar10 + fVar3 * fVar13;
    param_2[2] = fVar5 * 1.0 + fVar2 * fVar8 + fVar1 * fVar11 + fVar3 * fVar14;
    param_2[3] = fVar6 * 1.0 + fVar2 * fVar9 + fVar1 * fVar12 + fVar3 * fVar15;
    return param_2;
  }
  fVar4 = *(float *)(param_1 + 0x5c4);
  fVar5 = *(float *)(param_1 + 0x5c8);
  fVar6 = *(float *)(param_1 + 0x5cc);
  fVar7 = *(float *)(param_1 + 0x5b4);
  fVar8 = *(float *)(param_1 + 0x5b8);
  fVar9 = *(float *)(param_1 + 0x5bc);
  fVar10 = *(float *)(param_1 + 0x5a4);
  fVar11 = *(float *)(param_1 + 0x5a8);
  fVar12 = *(float *)(param_1 + 0x5ac);
  fVar13 = *(float *)(param_1 + 0x594);
  fVar14 = *(float *)(param_1 + 0x598);
  fVar15 = *(float *)(param_1 + 0x59c);
  *param_2 = *(float *)(param_1 + 0x5c0) * 1.0 + fVar2 * *(float *)(param_1 + 0x5b0) +
             fVar1 * *(float *)(param_1 + 0x5a0) + fVar3 * *(float *)(param_1 + 0x590);
  param_2[1] = fVar4 * 1.0 + fVar2 * fVar7 + fVar1 * fVar10 + fVar3 * fVar13;
  param_2[2] = fVar5 * 1.0 + fVar2 * fVar8 + fVar1 * fVar11 + fVar3 * fVar14;
  param_2[3] = fVar6 * 1.0 + fVar2 * fVar9 + fVar1 * fVar12 + fVar3 * fVar15;
  return param_2;
}



// FUNCTION 1427634b0 WriteCloudDocument body=102 status=ok
// SIG undefined WriteCloudDocument(void)

undefined8 UCloudStorageBase::WriteCloudDocument(longlong param_1,int param_2)

{
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38;
  int local_34;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x40) <= param_2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    local_40 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_48[0] = 1;
    local_38 = 1;
    local_34 = param_2;
    FUN_142748070(0,5,local_48);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 142763520 FUN_142763520 body=1200 status=ok
// SIG undefined FUN_142763520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142763520(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  short *local_88;
  undefined8 local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 local_50;
  longlong local_48 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b0a570) {
    _Init_thread_header(&DAT_146b0a570);
    if (DAT_146b0a570 == -1) {
      puVar3 = (undefined8 *)FPaths::CloudDir(local_78);
      iVar4 = *(int *)(puVar3 + 1);
      local_88 = (short *)*puVar3;
      *puVar3 = 0;
      local_80._0_4_ = *(int *)(puVar3 + 1);
      local_80._4_4_ = *(int *)((longlong)puVar3 + 0xc);
      puVar3[1] = 0;
      iVar5 = (int)local_80;
      if (local_80._4_4_ < (int)((0x11 - (uint)(iVar4 != 0)) + (int)local_80)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo();
        iVar5 = (int)local_80;
      }
      iVar4 = (0x11 - (uint)(iVar5 != 0)) + iVar5;
      local_80 = CONCAT44(local_80._4_4_,iVar4);
      iVar2 = local_80._4_4_;
      if (local_80._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar5);
        iVar4 = (int)local_80;
        iVar2 = local_80._4_4_;
      }
      _DAT_146b0a56c = iVar2;
      builtin_wcsncpy(local_88 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)),L"CloudStorage.ini",
                      0x11);
      DAT_146b0a560 = local_88;
      DAT_146b0a568 = iVar4;
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      atexit((_func_5014 *)&LAB_143eb9aa0);
      _Init_thread_footer(&DAT_146b0a570);
    }
  }
  (**(code **)(*DAT_1468b6148 + 0x10))();
  cVar1 = *(char *)(param_3 + 1);
  lVar6 = -1;
  if (cVar1 == '\x01') {
    local_80 = 0;
    psVar7 = &DAT_143f3eda8;
    if (DAT_146b0a568 != 0) {
      psVar7 = DAT_146b0a560;
    }
    local_88 = (short *)0x0;
    if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar7[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_80 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      }
      FGenericPlatformString::Memcpy(local_88,psVar7,(longlong)(int)uVar8 * 2);
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_2;
    }
    FConfigCacheIni::SetInt
              (DAT_1468b6148,L"CloudStorageEmulation",puVar11,
               *(undefined4 *)((longlong)param_3 + 0xc),&local_88);
  }
  else if (cVar1 == '\x02') {
    local_80 = 0;
    psVar7 = &DAT_143f3eda8;
    if (DAT_146b0a568 != 0) {
      psVar7 = DAT_146b0a560;
    }
    local_88 = (short *)0x0;
    if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar7[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_80 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      }
      FGenericPlatformString::Memcpy(local_88,psVar7,(longlong)(int)uVar8 * 2);
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_2;
    }
    FConfigCacheIni::SetFloat
              (DAT_1468b6148,L"CloudStorageEmulation",puVar11,*(undefined4 *)(param_3 + 2),&local_88
              );
  }
  else {
    if (cVar1 != '\x03') goto LAB_142763793;
    local_80 = 0;
    psVar7 = &DAT_143f3eda8;
    if (DAT_146b0a568 != 0) {
      psVar7 = DAT_146b0a560;
    }
    local_88 = (short *)0x0;
    if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (psVar7[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_80 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      }
      FGenericPlatformString::Memcpy(local_88,psVar7,(longlong)(int)uVar8 * 2);
    }
    if (*(int *)(param_3 + 4) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)param_3[3];
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*param_2;
    }
    FConfigCacheIni::SetString(DAT_1468b6148,L"CloudStorageEmulation",puVar10,puVar11,&local_88);
  }
  if (local_88 != (short *)0x0) {
    FMemory::Free();
  }
LAB_142763793:
  psVar7 = &DAT_143f3eda8;
  if (DAT_146b0a568 != 0) {
    psVar7 = DAT_146b0a560;
  }
  local_88 = (short *)0x0;
  local_80 = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar7[lVar6] != 0);
    uVar8 = (int)lVar6 + 1;
    local_80 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Memcpy(local_88,psVar7,(longlong)(int)uVar8 * 2);
  }
  FConfigCacheIni::Flush(DAT_1468b6148,0,&local_88);
  if (local_88 != (short *)0x0) {
    FMemory::Free();
  }
  (**(code **)(*DAT_1468b6148 + 8))();
  local_60 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 2);
  local_58 = *(undefined1 *)(param_3 + 1);
  local_54 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_68[0] = 1;
  FString::operator=(local_48,param_3 + 3);
  local_48[2] = param_3[5];
  FUN_142748070(param_1,1,local_68);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1427639d0 FUN_1427639d0 body=531 status=ok
// SIG undefined FUN_1427639d0(void)

longlong * FUN_1427639d0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764020(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogSunPower";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa7c;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogPower";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa80;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogDensityScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa84;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogDensityOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000a88;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142763bf0 FUN_142763bf0 body=531 status=ok
// SIG undefined FUN_142763bf0(void)

longlong * FUN_142763bf0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_1427639d0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogGroundOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa8c;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogDistanceScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa90;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogAltitudeScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa94;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogHeightScaleRayleigh";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000a98;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142763e10 FUN_142763e10 body=525 status=ok
// SIG undefined FUN_142763e10(void)

longlong * FUN_142763e10(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142763bf0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogStartDistance";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa9c;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogDistanceOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xaa0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogSunDiscScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xaa4;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogRenderMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x300000aa8;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764020 FUN_142764020 body=519 status=ok
// SIG undefined FUN_142764020(void)

longlong * FUN_142764020(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764c30(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DemosaicVposOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa48;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectLightingColorScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa50;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HDR32bppEncodingMode";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa60;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogSunDirection";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000a70;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764230 FUN_142764230 body=507 status=ok
// SIG undefined FUN_142764230(void)

longlong * FUN_142764230(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142767700(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CameraViewToTranslatedWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x180;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewToClip";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x1c0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewToClipNoAA";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x200;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ClipToView";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000240;
  puVar1[1] = 0x400000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764430 FUN_142764430 body=507 status=ok
// SIG undefined FUN_142764430(void)

longlong * FUN_142764430(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142767960(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TemporalAAParams";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa00;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CircleDOFParams";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa10;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DepthOfFieldSensorWidth";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa20;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DepthOfFieldFocalDistance";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000a24;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764630 FUN_142764630 body=507 status=ok
// SIG undefined FUN_142764630(void)

longlong * FUN_142764630(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764430(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DepthOfFieldScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa28;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DepthOfFieldFocalLength";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa2c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DepthOfFieldFocalRegion";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa30;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DepthOfFieldNearTransitionRegion";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000a34;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764830 FUN_142764830 body=507 status=ok
// SIG undefined FUN_142764830(void)

longlong * FUN_142764830(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765260(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MaterialTextureMipBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x96c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MaterialTextureDerivativeMultiply";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x970;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"Random";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x974;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"FrameNumber";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x300000978;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764a30 FUN_142764a30 body=507 status=ok
// SIG undefined FUN_142764a30(void)

longlong * FUN_142764a30(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142768390(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindGustMax";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xce4;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindVectorFieldWorldMin";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xcf0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindVectorFieldWorldMax";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd00;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBXCustomLitLightingChannel";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x200000d10;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764c30 FUN_142764c30 body=507 status=ok
// SIG undefined FUN_142764c30(void)

longlong * FUN_142764c30(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764630(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DepthOfFieldFarTransitionRegion";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa38;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MotionBlurNormalizedToPixel";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa3c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"bSubsurfacePostprocessEnabled";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa40;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GeneralPurposeTweak";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000a44;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142764e30 FUN_142764e30 body=519 status=ok
// SIG undefined FUN_142764e30(void)

longlong * FUN_142764e30(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_1427670e0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GlobalVolumeCenterAndExtent";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xbc0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GlobalVolumeWorldToUVAddAndMul";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc00;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GlobalVolumeDimension";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc40;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GlobalVolumeTexelSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000c44;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765040 FUN_142765040 body=531 status=ok
// SIG undefined FUN_142765040(void)

longlong * FUN_142765040(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142766490(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewForward";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x3c0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewUp";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x3d0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewRight";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x3e0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HMDViewNoRollUp";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000003f0;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765260 FUN_142765260 body=507 status=ok
// SIG undefined FUN_142765260(void)

longlong * FUN_142765260(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765460(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AdaptiveTessellationFactor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x954;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GameTime";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x958;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"RealTime";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x960;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"LightDebugFlags";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x300000968;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765460 FUN_142765460 body=519 status=ok
// SIG undefined FUN_142765460(void)

longlong * FUN_142765460(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765a70(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OutOfBoundsMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x938;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WorldCameraMovementSinceLastFrame";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x940;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CullingSign";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x94c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"NearPlane";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000950;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765670 FUN_142765670 body=507 status=ok
// SIG undefined FUN_142765670(void)

longlong * FUN_142765670(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142767d80(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewSizeAndInvSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8b0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"BufferSizeAndInvSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8c0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"BufferBilinearUVMinMax";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8d0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"NumSceneColorMSAASamples";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x2000008e0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765870 FUN_142765870 body=507 status=ok
// SIG undefined FUN_142765870(void)

longlong * FUN_142765870(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765e80(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevViewProj";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x4c0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevViewRotationProj";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x500;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevViewToClip";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x540;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevClipToView";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000580;
  puVar1[1] = 0x400000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765a70 FUN_142765a70 body=519 status=ok
// SIG undefined FUN_142765a70(void)

longlong * FUN_142765a70(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142766cc0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"NormalOverrideParameter";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x910;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"RoughnessOverrideParameter";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x920;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevFrameGameTime";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x928;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevFrameRealTime";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x200000930;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 2;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765c80 FUN_142765c80 body=507 status=ok
// SIG undefined FUN_142765c80(void)

longlong * FUN_142765c80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142766080(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevCameraViewToTranslatedWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x700;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWorldCameraOrigin";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x740;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevWorldViewOrigin";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x750;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevPreViewTranslation";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000760;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142765e80 FUN_142765e80 body=507 status=ok
// SIG undefined FUN_142765e80(void)

longlong * FUN_142765e80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142768590(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TranslatedWorldCameraOrigin";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x450;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WorldViewOrigin";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x460;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PreViewTranslation";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x470;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevProjection";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000480;
  puVar1[1] = 0x400000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142766080 FUN_142766080 body=513 status=ok
// SIG undefined FUN_142766080(void)

longlong * FUN_142766080(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765870(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GbxPrevTranslatedWorldToClip";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x5c0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevTranslatedWorldToView";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x640;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevViewToTranslatedWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x680;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevTranslatedWorldToCameraView";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000006c0;
  puVar1[1] = 0x400000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142766290 FUN_142766290 body=507 status=ok
// SIG undefined FUN_142766290(void)

longlong * FUN_142766290(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142763e10(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogInscatterAltitudeSampleNum";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xaac;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AtmosphericFogSunColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xab0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"NormalCurvatureToRoughnessScaleBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xac0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"RenderingReflectionCaptureMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000acc;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142766490 FUN_142766490 body=513 status=ok
// SIG undefined FUN_142766490(void)

longlong * FUN_142766490(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764230(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ClipToTranslatedWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x280;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SVPositionToTranslatedWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x2c0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GbxScreenToWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x300;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ScreenToTranslatedWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000380;
  puVar1[1] = 0x400000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1427666a0 FUN_1427666a0 body=513 status=ok
// SIG undefined FUN_1427666a0(void)

longlong * FUN_1427666a0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_1427668b0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MobilePreviewMode";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb90;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HMDEyePaddingOffset";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb94;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ReflectionCubemapMaxMip";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb98;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ShowDecalsMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000b9c;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1427668b0 FUN_1427668b0 body=513 status=ok
// SIG undefined FUN_1427668b0(void)

longlong * FUN_1427668b0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142766ac0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyLightColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xaf0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyIrradianceEnvironmentMapOrder1Raw";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb00;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyIrradianceEnvironmentMapOrder1";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb10;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyIrradianceEnvironmentMap";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000b20;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 0x700000004;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142766ac0 FUN_142766ac0 body=507 status=ok
// SIG undefined FUN_142766ac0(void)

longlong * FUN_142766ac0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142766290(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AmbientCubemapTint";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xad0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"AmbientCubemapIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xae0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyLightParameters";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xae4;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SkyLightIndirectLightingIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000ae8;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142766cc0 FUN_142766cc0 body=531 status=ok
// SIG undefined FUN_142766cc0(void)

longlong * FUN_142766cc0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765670(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PreExposure";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8e4;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OneOverPreExposure";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8e8;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DiffuseOverrideParameter";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x8f0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"SpecularOverrideParameter";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000900;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142766ee0 FUN_142766ee0 body=507 status=ok
// SIG undefined FUN_142766ee0(void)

longlong * FUN_142766ee0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142768190(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricLightmapIndirectionTextureSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xca0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricLightmapBrickSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xcac;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricLightmapBrickTexelSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xcb0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"StereoIPD";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000cbc;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1427670e0 FUN_1427670e0 body=507 status=ok
// SIG undefined FUN_1427670e0(void)

longlong * FUN_1427670e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_1427666a0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DistanceFieldAOSpecularOcclusionMode";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xba0;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"IndirectCapsuleSelfShadowingIntensity";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xba4;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ReflectionEnvironmentRoughnessMixingScaleBiasAndLargestWeight";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xbb0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"StereoPassIndex";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x200000bbc;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1427672e0 FUN_1427672e0 body=513 status=ok
// SIG undefined FUN_1427672e0(void)

longlong * FUN_1427672e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765c80(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevInvViewProj";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x770;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevScreenToTranslatedWorld";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7b0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GbxClipToPrevClip";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x7f0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 4;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TemporalAAJitter";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000870;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1427674f0 FUN_1427674f0 body=525 status=ok
// SIG undefined FUN_1427674f0(void)

longlong * FUN_1427674f0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764830(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"StateFrameIndexMod8";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x97c;
  puVar2[1] = 3;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CameraCut";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x980;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"UnlitViewmodeMask";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x984;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TimeOfDayColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000990;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142767700 FUN_142767700 body=604 status=ok
// SIG undefined FUN_142767700(void)

longlong * FUN_142767700(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"GbxTranslatedWorldToClip";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 4;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 2;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"WorldToClip";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x80;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 4;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"TranslatedWorldToView";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0xc0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 4;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"ViewToTranslatedWorld";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x100;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 4;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"TranslatedWorldToCameraView";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000140;
  puVar3[1] = 0x400000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 142767960 FUN_142767960 body=531 status=ok
// SIG undefined FUN_142767960(void)

longlong * FUN_142767960(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_1427674f0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalLightColor";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x9a0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalLightDirection";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x9b0;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TranslucencyLightingVolumeMin";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x9c0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TranslucencyLightingVolumeInvSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000009e0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 0x200000004;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142767b80 FUN_142767b80 body=507 status=ok
// SIG undefined FUN_142767b80(void)

longlong * FUN_142767b80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764a30(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GBXCustomLitLightingExposureMod";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd14;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GbxColorRemapLUTScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd20;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"TimeOfDay";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd30;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewOwnerLocationWS";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000d40;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142767d80 FUN_142767d80 body=513 status=ok
// SIG undefined FUN_142767d80(void)

longlong * FUN_142767d80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_1427672e0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GlobalClippingPlane";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x880;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"FieldOfViewWideAngles";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x890;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"PrevFieldOfViewWideAngles";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x898;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ViewRectMin";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000008a0;
  puVar1[1] = 0x100000001;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142767f90 FUN_142767f90 body=507 status=ok
// SIG undefined FUN_142767f90(void)

longlong * FUN_142767f90(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142764e30(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MaxGlobalDistance";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc48;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"bCheckerboardSubsurfaceProfileRendering";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc4c;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricFogInvGridSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc50;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricFogGridZParams";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000c60;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142768190 FUN_142768190 body=507 status=ok
// SIG undefined FUN_142768190(void)

longlong * FUN_142768190(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142767f90(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricFogSVPosToVolumeUV";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc70;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricFogMaxDistance";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc78;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricLightmapWorldToUVScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xc80;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricLightmapWorldToUVAdd";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000c90;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142768390 FUN_142768390 body=507 status=ok
// SIG undefined FUN_142768390(void)

longlong * FUN_142768390(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142766ee0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"VolumetricLightmapsSkyBentNormalParams";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xcc0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindDirection";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xcd0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindSpeed";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xcdc;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WindGustMin";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000ce0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 142768590 FUN_142768590 body=525 status=ok
// SIG undefined FUN_142768590(void)

longlong * FUN_142768590(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_142765040(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"HMDViewNoRollRight";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x400;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"GbxInvDeviceZToWorldZTransform";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x410;
  puVar2[1] = 4;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 2;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"ScreenPositionScaleBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x430;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"WorldCameraOrigin";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000440;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 1427687a0 FUN_1427687a0 body=628 status=ok
// SIG undefined FUN_1427687a0(void)

longlong * FUN_1427687a0(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"DirectionalLightColor";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 1;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"DirectionalLightDirection";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 1;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"DirectionalLightShadowTransition";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x1c;
  puVar1[1] = 4;
  puVar1[2] = 1;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"DirectionalLightShadowSize";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 1;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"DirectionalLightScreenToShadow";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000030;
  puVar3[1] = 0x400000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 0x400000004;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 142768a20 FUN_142768a20 body=533 status=ok
// SIG undefined FUN_142768a20(void)

longlong * FUN_142768a20(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  FUN_1427687a0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalLightShadowDistances";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x130;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalLightDistanceFadeMAD";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x140;
  puVar2[1] = 4;
  puVar2[2] = 1;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalLightShadowTexture";
  puVar1[1] = L"Texture2D";
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x148;
  puVar2[1] = 9;
  puVar2[2] = 0;
  puVar2[3] = 1;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"DirectionalLightShadowSampler";
  puVar1[1] = L"SamplerState";
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x800000150;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}


