// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14262fcb0 FUN_14262fcb0 body=1390 status=ok
// SIG undefined FUN_14262fcb0(void)

void FUN_14262fcb0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined4 *)FUN_14261c440(&PTR_PTR_146534420,local_res8,param_2);
  *(undefined4 *)(param_1 + 0x48) = *puVar5;
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(puVar5 + 1);
  puVar5 = (undefined4 *)FUN_14261c440(&PTR_PTR_146534420,local_res8,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x4e) = *puVar5;
  *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(puVar5 + 1);
  puVar5 = (undefined4 *)FUN_14261c440(&PTR_PTR_146534420,local_res8,param_2 + 0x20);
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x54) = *puVar5;
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(puVar5 + 1);
  if (*(ushort *)(param_1 + 0x4c) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = 0;
  }
  *(float *)(param_1 + 0x60) =
       (float)(*(uint *)(param_1 + 0x48) & 0xffff) * 0.001953125 + 0.0009765625;
  *(float *)(param_1 + 100) =
       (float)(*(uint *)(param_1 + 0x48) >> 0x10) * 0.001953125 + 0.0009765625;
  *(float *)(param_1 + 0x68) = (float)(int)(*(ushort *)(param_1 + 0x4c) - 1) * 0.001953125;
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  if (*(ushort *)(param_1 + 0x52) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = 0;
  }
  *(float *)(param_1 + 0x90) =
       (float)(*(uint *)(param_1 + 0x4e) & 0xffff) * 0.001953125 + 0.0009765625;
  *(float *)(param_1 + 0x94) =
       (float)(*(uint *)(param_1 + 0x4e) >> 0x10) * 0.001953125 + 0.0009765625;
  *(float *)(param_1 + 0x98) = (float)(int)(*(ushort *)(param_1 + 0x52) - 1) * 0.001953125;
  *(undefined4 *)(param_1 + 0x9c) = uVar9;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 200) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  bVar2 = *(byte *)(param_2 + 0x145);
  uVar9 = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  cVar3 = *(char *)(param_2 + 0x144);
  if (cVar3 == '\x03') {
    *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  }
  else if (bVar2 == 0) {
    if (cVar3 == '\x01') {
      *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    }
    else if (cVar3 == '\0') {
      *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
    }
  }
  else {
    if (bVar2 - 7 < 3) {
      *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0xe0) = 0x3f800000;
    }
    if (bVar2 == 9) {
      uVar9 = 0x3fc90fdb;
    }
    *(undefined4 *)(param_1 + 0x104) = uVar9;
  }
  if ((*(byte *)(param_2 + 0x150) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar9;
  if (*(char *)(param_2 + 0x144) == '\x06') {
    fVar7 = *(float *)(param_2 + 0x154);
    fVar6 = *(float *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
    fVar7 = fVar7 * fVar7;
    fVar6 = fVar6 * fVar6 - fVar7;
    if (fVar6 <= 1.0) {
      fVar6 = 1.0;
    }
    fVar6 = 1.0 / fVar6;
    fVar7 = fVar6 * fVar7;
    uVar9 = 0x3f800000;
  }
  else {
    fVar7 = 0.0;
    fVar6 = 0.0;
    uVar9 = 0;
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar9;
  *(float *)(param_1 + 0xf4) = fVar6;
  *(float *)(param_1 + 0xf8) = fVar7;
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x148);
  if (*(ushort *)(param_1 + 0x58) == 0) {
    uVar8 = 0x3f800000;
  }
  *(float *)(param_1 + 0x120) =
       (float)(*(uint *)(param_1 + 0x54) & 0xffff) * 0.001953125 + 0.0009765625;
  *(float *)(param_1 + 0x124) =
       (float)(*(uint *)(param_1 + 0x54) >> 0x10) * 0.001953125 + 0.0009765625;
  *(float *)(param_1 + 0x128) = (float)(int)(*(ushort *)(param_1 + 0x58) - 1) * 0.001953125;
  *(undefined4 *)(param_1 + 300) = uVar8;
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  uVar8 = *(undefined4 *)(param_2 + 0x10c);
  uVar9 = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x154) = uVar8;
  *(undefined4 *)(param_1 + 0x158) = uVar9;
  *(undefined4 *)(param_1 + 0x15c) = 0x3f800000;
  uVar8 = *(undefined4 *)(param_2 + 0x118);
  uVar9 = *(undefined4 *)(param_2 + 0x110);
  uVar1 = *(undefined4 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x160) = uVar8;
  *(undefined4 *)(param_1 + 0x164) = uVar9;
  *(undefined4 *)(param_1 + 0x168) = uVar1;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_2 + 200);
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x108);
  return;
}



// FUNCTION 142630220 FUN_142630220 body=447 status=ok
// SIG undefined FUN_142630220(void)

void FUN_142630220(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *_Dst;
  ulonglong _Size;
  
  lVar3 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar3 + 0x28) == '\0') {
    FUN_1419f3850(lVar3);
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  uVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_5 + 0x10) + 0x20) + 0x2f8))();
  if (*(short *)(param_1 + 10) != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144d8e600;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 0x10);
  if (3 < *(ushort *)(param_1 + 0x10)) {
    uVar5 = 4;
  }
  _Size = (ulonglong)uVar5;
  if (uVar5 != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe);
    uVar2 = *(ushort *)(param_1 + 0xc);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar7 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar5 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar7 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar7;
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)(param_4 + 0x688),_Size);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f594b0;
    *(uint *)((longlong)puVar9 + 0x24) = (uint)uVar1;
    puVar9[2] = uVar4;
    puVar9[3] = _Dst;
    *(uint *)(puVar9 + 4) = (uint)uVar2;
    *(uint *)(puVar9 + 5) = uVar5;
  }
  return;
}



// FUNCTION 1426303e0 FUN_1426303e0 body=1675 status=ok
// SIG undefined FUN_1426303e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426303e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  
  lVar2 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  uVar4 = FUN_1404a0e20();
  uVar5 = FUN_141a156e0();
  uVar8 = 0;
  if (0 < *(int *)(param_3 + 0x10)) {
    uVar11 = uVar8;
    do {
      iVar10 = (int)uVar11;
      if (*(undefined **)(*(longlong *)(param_3 + 8) + uVar8 * 8) == &DAT_146b05820) {
        if (iVar10 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(param_3 + 0x18) + (longlong)iVar10 * 8);
          *puVar12 = *(undefined4 *)(param_3 + 0xb8);
          goto LAB_142630492;
        }
        break;
      }
      uVar11 = (ulonglong)(iVar10 + 1);
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)*(int *)(param_3 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b06d88) && (_Init_thread_header(&DAT_146b06d88), DAT_146b06d88 == -1))
  {
    _DAT_146b06d80 = 0;
    DAT_146b06d84 = 0;
    DAT_146b06d86 = 0;
    _Init_thread_footer(&DAT_146b06d88);
  }
  puVar12 = (undefined4 *)&DAT_146b06d80;
LAB_142630492:
  uVar6 = *(undefined8 *)(param_4 + 0x680);
  if (*(char *)((longlong)puVar12 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar12 + 1);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144dcb388;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  uVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_5 + 0x10) + 0x20) + 0x2f8))();
  if (*(short *)(param_1 + 0x34) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x32);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144165218;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  FUN_1404986d0(param_2,uVar3,param_1 + 0x36,param_4 + 0x688,0);
  if (*(short *)(param_1 + 10) != 0) {
    uVar1 = *(ushort *)(param_1 + 8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar6 = *(undefined8 *)(*(longlong *)(param_4 + 0x690) + 0x38);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_144165218;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  FUN_1404986d0(param_2,uVar3,param_1 + 0xc,param_4 + 0x698,0);
  uVar6 = *(undefined8 *)(param_4 + 0x6a0);
  if (*(short *)(param_1 + 0x14) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x12);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c50;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  if (*(short *)(param_1 + 0x18) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x16);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c60;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x6a8);
  if (*(short *)(param_1 + 0x1c) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1a);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    *puVar9 = &PTR_LAB_143f59c50;
    puVar9[2] = uVar3;
    puVar9[4] = uVar6;
  }
  if (*(short *)(param_1 + 0x20) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x1e);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c60;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x6b0);
  if (*(short *)(param_1 + 0x24) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x22);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c50;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar6;
  }
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x26);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c60;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  uVar4 = DAT_146534458;
  if (*(short *)(param_1 + 0x2c) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x2a);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c50;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar4;
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x2e);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c60;
    puVar9[4] = uVar5;
    puVar9[2] = uVar3;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 142630a70 FUN_142630a70 body=114 status=ok
// SIG undefined FUN_142630a70(void)

void FUN_142630a70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x210);
  if (puVar1 != param_2) {
    _Src = (void *)*param_2;
    iVar2 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 0x218) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x21c) == 0)) {
      *(undefined4 *)(param_1 + 0x21c) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
    _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
  }
  return;
}



// FUNCTION 142630af0 SetParameters body=1431 status=ok
// SIG undefined SetParameters(void)

void TParticleSimulationPS<1>::SetParameters
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar4 = FUN_1404a0e20();
  uVar5 = FUN_141a156e0();
  uVar6 = *(undefined8 *)(param_3 + 0x38);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    puVar8[4] = uVar6;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x48);
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar6;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x38);
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar6;
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  uVar6 = DAT_146534458;
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar6;
  }
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[4] = uVar5;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  FUN_141aa9590(param_1,param_2,uVar3,param_6);
  uVar6 = FUN_1426281d0(param_1,param_9);
  SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_2,uVar3,uVar6,param_10);
  uVar6 = *(undefined8 *)(param_5 + 0x38);
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar6;
  }
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0x126,&DAT_146534318);
  return;
}



// FUNCTION 142631090 SetParameters body=2687 status=ok
// SIG undefined SetParameters(void)

void TParticleSimulationPS<2>::SetParameters
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_res8;
  
  lVar8 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar8 + 0x28) == '\0') {
    FUN_1419f3850(lVar8);
  }
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  uVar4 = FUN_1404a0e20();
  local_res8 = FUN_141a156e0();
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    puVar7[4] = uVar5;
  }
  uVar5 = local_res8;
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[4] = uVar4;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[4] = uVar4;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x38);
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[4] = uVar4;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  uVar3 = DAT_146534458;
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar3;
  }
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  if ((*(short *)(param_1 + 0x150) != 0) || (*(short *)(param_1 + 0x156) != 0)) {
    lVar8 = *(longlong *)(param_8 + 0x80);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x12e) != 0) {
      uVar1 = *(ushort *)(param_1 + 300);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x13e) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x13c);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    lVar8 = *(longlong *)(param_8 + 0x88);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x132) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x130);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x142) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x140);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    lVar8 = *(longlong *)(param_8 + 0x90);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x136) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x134);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x146) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x144);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    lVar8 = *(longlong *)(param_8 + 0x98);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(DAT_146ac3e30 + 0x30);
    }
    uVar5 = FUN_141b33a40();
    if (*(short *)(param_1 + 0x13a) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x138);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = lVar8;
    }
    if (*(short *)(param_1 + 0x14a) != 0) {
      uVar1 = *(ushort *)(param_1 + 0x148);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar6 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar6;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = uVar2;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar5;
    }
    SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
              (param_2,uVar2,param_1 + 0x14c,param_8,4,0);
    SetShaderValueArray<FRHIPixelShader_*,FVector4,FRHICommandList>
              (param_2,uVar2,param_1 + 0x152,param_8 + 0x40,4,0);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x158,param_8 + 0xa0,0);
    local_res8 = CONCAT44(local_res8._4_4_,1.0 / *(float *)(param_8 + 0xa0));
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x15e,&local_res8,0);
    SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
              (param_2,uVar2,param_1 + 0x164,param_8 + 0xa4,0);
  }
  uVar5 = *(undefined8 *)(param_5 + 0x38);
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c80;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
    puVar7[4] = uVar5;
  }
  if (*(short *)(param_1 + 0xde) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xdc);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59c70;
    puVar7[4] = uVar4;
    puVar7[2] = uVar2;
    *(uint *)(puVar7 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 142631b10 SetParameters body=1081 status=ok
// SIG undefined SetParameters(void)

void TParticleSimulationPS<0>::SetParameters
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  uVar6 = FUN_141a156e0();
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x38);
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar5;
  }
  uVar4 = DAT_146534458;
  if (*(short *)(param_1 + 0xe2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe0);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c80;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xe6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xe4);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f59c70;
    puVar8[4] = uVar6;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 142631f50 FUN_142631f50 body=509 status=ok
// SIG undefined FUN_142631f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142631f50(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong local_res8;
  longlong local_res18 [2];
  float local_38;
  float local_34;
  
  uVar4 = 0;
  local_38 = 1.0 / (float)DAT_146534410;
  local_34 = 1.0 / (float)DAT_146534414;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_res8,&local_38,&DAT_146b05ed8,0);
  local_res18[0] = local_res8;
  if (local_res8 != 0) {
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res8);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = uVar4;
    do {
      iVar6 = (int)uVar7;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar4 * 8) == &DAT_146b05eb0) {
        if (iVar6 != -1) {
          puVar9 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8);
          *puVar9 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_142632062;
        }
        break;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b06d98) {
    _Init_thread_header(&DAT_146b06d98);
    if (DAT_146b06d98 == -1) {
      _DAT_146b06d90 = 0;
      DAT_146b06d94 = 0;
      DAT_146b06d96 = 0;
      _Init_thread_footer(&DAT_146b06d98);
    }
  }
  puVar9 = (undefined4 *)&DAT_146b06d90;
LAB_142632062:
  if (*(char *)((longlong)puVar9 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar9 + 1);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar8 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar8 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_144dcb388;
    puVar8[2] = uVar3;
    *(uint *)(puVar8 + 3) = (uint)uVar1;
    puVar8[4] = local_res8;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  return;
}



// FUNCTION 142632150 SetParameters body=594 status=ok
// SIG undefined SetParameters(void)

void FParticleSimVisualizePS::SetParameters
               (longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 local_res18 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_res18[0] = param_3;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,uVar3,param_1 + 0xc0,local_res18,0);
  uVar4 = FUN_1404a0e20();
  if (*(short *)(param_1 + 200) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc6);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = param_4;
  }
  if (*(short *)(param_1 + 0xcc) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xca);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  if (*(short *)(param_1 + 0xd0) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xce);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[4] = param_5;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xd4) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd2);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar3;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar4;
  }
  return;
}



// FUNCTION 1426323b0 SetParametersForVectorField body=433 status=ok
// SIG undefined SetParametersForVectorField(void)

void SetParametersForVectorField
               (longlong param_1,longlong *param_2,float param_3,float param_4,uint param_5)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  
  lVar7 = *param_2;
  fVar3 = *(float *)((longlong)param_2 + 0xf4);
  fVar4 = *(float *)(lVar7 + 0x44);
  if (param_4 == -1.0) {
    param_4 = *(float *)(param_2 + 0x1e);
    if (0.0 <= param_4) {
      if (1.0 <= param_4) {
        param_4 = 1.0;
      }
    }
    else {
      param_4 = 0.0;
    }
  }
  lVar8 = param_2[0xf];
  uVar10 = (ulonglong)param_5;
  lVar9 = uVar10 * 0x40;
  plVar2 = (longlong *)(lVar9 + 0x10 + param_1);
  *plVar2 = param_2[0xe];
  plVar2[1] = lVar8;
  lVar8 = param_2[0x11];
  plVar2 = (longlong *)(lVar9 + 0x20 + param_1);
  *plVar2 = param_2[0x10];
  plVar2[1] = lVar8;
  lVar8 = param_2[0x13];
  plVar2 = (longlong *)(lVar9 + 0x30 + param_1);
  *plVar2 = param_2[0x12];
  plVar2[1] = lVar8;
  lVar8 = param_2[0x15];
  plVar2 = (longlong *)(lVar9 + 0x40 + param_1);
  *plVar2 = param_2[0x14];
  plVar2[1] = lVar8;
  lVar8 = param_2[7];
  plVar2 = (longlong *)(lVar9 + 0x110 + param_1);
  *plVar2 = param_2[6];
  plVar2[1] = lVar8;
  lVar8 = param_2[9];
  plVar2 = (longlong *)(lVar9 + 0x120 + param_1);
  *plVar2 = param_2[8];
  plVar2[1] = lVar8;
  lVar8 = param_2[0xb];
  plVar2 = (longlong *)(lVar9 + 0x130 + param_1);
  *plVar2 = param_2[10];
  plVar2[1] = lVar8;
  lVar8 = param_2[0xd];
  plVar2 = (longlong *)(lVar9 + 0x140 + param_1);
  *plVar2 = param_2[0xc];
  plVar2[1] = lVar8;
  iVar5 = *(int *)(lVar7 + 0x3c);
  iVar6 = *(int *)(lVar7 + 0x40);
  pfVar1 = (float *)(param_1 + (uVar10 + 0x25) * 0x10);
  *pfVar1 = (float)*(int *)(lVar7 + 0x38);
  pfVar1[1] = (float)iVar5;
  pfVar1[2] = (float)iVar6;
  pfVar1[3] = 0.0;
  pfVar1 = (float *)(param_1 + (uVar10 + 0x21) * 0x10);
  *pfVar1 = fVar3 * fVar4 * param_3;
  pfVar1[1] = param_4;
  pfVar1[2] = 0.0;
  pfVar1[3] = 0.0;
  if ((*(byte *)((longlong)param_2 + 0xfc) & 1) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + (uVar10 + 0x29) * 0x10) = uVar11;
  if ((*(byte *)((longlong)param_2 + 0xfc) & 2) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x294 + uVar10 * 0x10) = uVar11;
  if ((*(byte *)((longlong)param_2 + 0xfc) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x298 + uVar10 * 0x10) = 0x3f800000;
    return;
  }
  *(undefined4 *)(param_1 + 0x298 + uVar10 * 0x10) = 0;
  return;
}



// FUNCTION 142632570 FUN_142632570 body=570 status=ok
// SIG undefined FUN_142632570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142632570(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  short *psVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar12 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar5 = uVar12;
    uVar10 = uVar12;
    do {
      iVar9 = (int)uVar10;
      if (*(undefined **)(*(longlong *)(param_1 + 8) + uVar5 * 8) == &DAT_146b05b80) {
        if (iVar9 != -1) {
          puVar13 = *(undefined4 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 8);
          *puVar13 = *(undefined4 *)(param_1 + 0xb8);
          goto LAB_142632606;
        }
        break;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x10));
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b06dc8) {
    _Init_thread_header(&DAT_146b06dc8);
    if (DAT_146b06dc8 == -1) {
      _DAT_146b06dc0 = 0;
      _DAT_146b06dc4 = 0;
      DAT_146b06dc6 = 0;
      _Init_thread_footer(&DAT_146b06dc8);
    }
  }
  puVar13 = (undefined4 *)&DAT_146b06dc0;
LAB_142632606:
  FUN_141aad5c0(param_2,uVar3,puVar13,param_3);
  uVar6 = FUN_141a156e0();
  psVar11 = (short *)(param_1 + 0xea);
  do {
    if (psVar11[8] != 0) {
      uVar1 = psVar11[7];
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *puVar7 = &PTR_LAB_143f59c70;
      puVar7[2] = uVar3;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      puVar7[4] = uVar6;
    }
    uVar4 = *(undefined8 *)(param_4 + uVar12 * 8);
    if (*psVar11 != 0) {
      uVar1 = psVar11[-1];
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar7 + 5;
      if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
        puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar7 + 5;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar8;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar7;
      *(undefined8 **)(param_2 + 8) = puVar7 + 1;
      puVar7[1] = 0;
      *(uint *)(puVar7 + 3) = (uint)uVar1;
      *puVar7 = &PTR_LAB_143f59c80;
      puVar7[2] = uVar3;
      puVar7[4] = uVar4;
    }
    uVar12 = uVar12 + 1;
    psVar11 = psVar11 + 2;
  } while ((longlong)uVar12 < 4);
  return;
}



// FUNCTION 1426327b0 FUN_1426327b0 body=492 status=ok
// SIG undefined FUN_1426327b0(void)

void FUN_1426327b0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar8 = 0;
    iVar5 = 0;
    if ((*(int *)(param_1 + 0x198) == 0) || (*(int *)(param_1 + 0x198) != *(int *)(lVar6 + 0x48))) {
      puVar1 = (undefined8 *)(param_1 + 400);
      *(undefined4 *)(param_1 + 0x198) = 0;
      if (*(int *)(param_1 + 0x19c) != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(puVar1,0);
        iVar5 = *(int *)(param_1 + 0x198);
      }
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x48);
      iVar4 = iVar5 + iVar2;
      *(int *)(param_1 + 0x198) = iVar4;
      if (*(int *)(param_1 + 0x19c) < iVar4) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(puVar1,iVar5);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)*puVar1 + (longlong)iVar2 * 4),(void *)*puVar1,
                 (longlong)iVar5 << 2);
      lVar6 = *(longlong *)(param_1 + 0x10);
    }
    uVar9 = uVar8;
    if (0 < *(int *)(lVar6 + 0x48)) {
      do {
        lVar6 = *(longlong *)(uVar9 + *(longlong *)(lVar6 + 0x40));
        lVar3 = *(longlong *)(lVar6 + 0x30);
        fVar10 = *(float *)(*(longlong *)(param_1 + 0x18) + 0x7dc) + *(float *)(lVar3 + 0xd0);
        *(float *)(param_1 + 0x1a0) = fVar10;
        if ((*(byte *)(lVar3 + 0xd8) & 1) != 0) {
          iVar5 = rand();
          fVar10 = (*(float *)(lVar3 + 0xd0) - *(float *)(lVar3 + 0xd4)) * (float)iVar5 *
                   3.051851e-05 + *(float *)(lVar3 + 0xd4) +
                   *(float *)(*(longlong *)(param_1 + 0x18) + 0x7dc);
          *(float *)(param_1 + 0x1a0) = fVar10;
        }
        if ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
          fVar10 = fVar10 + *(float *)(lVar3 + 0x70);
        }
        else {
          iVar5 = rand();
          fVar10 = (*(float *)(lVar3 + 0x70) - *(float *)(lVar3 + 0x74)) * (float)iVar5 *
                   3.051851e-05 + *(float *)(lVar3 + 0x74) + *(float *)(param_1 + 0x1a0);
        }
        *(float *)(*(longlong *)(param_1 + 400) + (longlong)*(int *)(lVar6 + 0x28) * 4) = fVar10;
        if ((((*(int *)(param_1 + 0x180) == 1) && ((*(byte *)(lVar3 + 0xd8) & 2) != 0)) &&
            (-1 < *(int *)(lVar3 + 0x7c))) && (*(int *)(lVar3 + 0x7c) != 1)) {
          *(float *)(*(longlong *)(param_1 + 400) + (longlong)*(int *)(lVar6 + 0x28) * 4) =
               *(float *)(*(longlong *)(param_1 + 400) + (longlong)*(int *)(lVar6 + 0x28) * 4) -
               *(float *)(param_1 + 0x1a0);
        }
        lVar6 = *(longlong *)(param_1 + 0x10);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar9 = uVar9 + 8;
      } while ((int)uVar7 < *(int *)(lVar6 + 0x48));
    }
    *(undefined4 *)(param_1 + 0x188) =
         *(undefined4 *)(*(longlong *)(param_1 + 400) + (longlong)*(int *)(param_1 + 0x20) * 4);
  }
  return;
}



// FUNCTION 1426329a0 ShouldCompilePermutation body=55 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TParticleInjectionPS<1>::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  cVar2 = FUN_1424866d0(uVar1,1);
  if ((cVar2 == '\0') && ((0x1b < uVar1 || ((0x8dfc1ebU >> (uVar1 & 0x1f) & 1) == 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1426329e0 ShouldCompilePermutation body=71 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TParticleSimulationPS<1>::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  cVar2 = FUN_1424866d0(uVar1,1);
  if ((cVar2 != '\0') || ((uVar1 < 0x1c && ((0x8dfc1ebU >> (uVar1 & 0x1f) & 1) != 0)))) {
    cVar2 = FUN_1424866d0(uVar1,2);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142632a30 ShouldCompilePermutation body=71 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TParticleSimulationPS<2>::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  cVar2 = FUN_1424866d0(uVar1,1);
  if ((cVar2 != '\0') || ((uVar1 < 0x1c && ((0x8dfc1ebU >> (uVar1 & 0x1f) & 1) != 0)))) {
    cVar2 = FUN_1424866d0(uVar1,3);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142632a80 ShouldCompilePermutation body=68 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined8 TParticleSimulationPS<0>::ShouldCompilePermutation(uint *param_1)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *param_1;
  cVar2 = FUN_1424866d0(uVar1,1);
  if ((cVar2 != '\0') || ((uVar1 < 0x1c && ((0x8dfc1ebU >> (uVar1 & 0x1f) & 1) != 0)))) {
    cVar2 = FUN_1424866d0(uVar1,0);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142632ad0 FUN_142632ad0 body=104 status=ok
// SIG undefined FUN_142632ad0(void)

undefined8 FUN_142632ad0(uint param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0xf0))(param_2);
  if ((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 200))(param_2), cVar1 == '\0')) {
    return 0;
  }
  cVar1 = FUN_1424866d0(param_1,1);
  if ((cVar1 == '\0') && ((0x1b < param_1 || ((0x8dfc1ebU >> (param_1 & 0x1f) & 1) == 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 142632b40 FUN_142632b40 body=9958 status=ok
// SIG undefined FUN_142632b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142632b40(longlong param_1,longlong param_2,int param_3,ulonglong param_4,ulonglong param_5
                  ,ulonglong param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  undefined8 *puVar28;
  uint *puVar29;
  ulonglong uVar30;
  float fVar31;
  undefined1 auStack_c18 [32];
  ulonglong local_bf8;
  ulonglong local_bf0;
  ulonglong local_be8;
  ulonglong local_be0;
  undefined8 local_bd8;
  int local_bd0;
  undefined1 local_bc8;
  undefined1 local_bc0;
  undefined1 local_bb8 [8];
  longlong local_bb0;
  int local_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  longlong local_b90;
  float local_b88;
  longlong local_b80;
  longlong local_b78;
  longlong local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  uint local_b58;
  uint uStack_b54;
  uint *puStack_b50;
  undefined4 local_b48;
  int iStack_b44;
  uint uStack_b40;
  undefined4 uStack_b3c;
  undefined8 *local_b38;
  undefined8 local_b30;
  longlong local_b28;
  char local_b20;
  undefined8 local_b18;
  longlong local_b10 [3];
  ulonglong local_af8;
  longlong local_af0;
  longlong local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined4 local_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined1 local_a50 [16];
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  longlong *local_a00;
  undefined8 local_9f8;
  uint *puStack_9f0;
  undefined1 local_9e8 [16];
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined4 local_9a8;
  undefined8 local_9a0;
  longlong local_998 [2];
  undefined4 local_988;
  undefined4 local_984;
  int local_980;
  undefined4 local_97c;
  undefined8 local_978;
  longlong *local_970;
  undefined1 local_968 [4];
  uint local_964;
  longlong local_960;
  uint local_958;
  int local_954;
  undefined8 local_948;
  undefined8 local_940;
  longlong local_938;
  undefined *local_928;
  undefined1 *puStack_920;
  undefined *local_918;
  undefined1 *puStack_910;
  undefined1 local_908 [8];
  longlong *local_900;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined4 local_8a0;
  undefined8 local_89c;
  undefined8 local_894;
  undefined4 local_88c;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined4 local_848;
  undefined8 local_844;
  undefined8 local_83c;
  undefined4 local_834;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined8 local_7dc;
  undefined8 local_7d4;
  undefined4 local_7cc;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined4 local_788;
  undefined8 local_784;
  undefined8 local_77c;
  undefined4 local_774;
  uint local_768 [4];
  undefined8 auStack_758 [4];
  undefined1 auStack_738 [16];
  undefined8 auStack_728 [26];
  undefined8 auStack_658 [4];
  undefined1 auStack_638 [16];
  undefined8 auStack_628 [26];
  undefined8 local_558 [24];
  undefined1 local_498 [48];
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined4 local_3d8 [4];
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368 [16];
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_c18;
  local_b10[2] = param_5;
  puStack_920 = local_bb8;
  local_928 = &DAT_14060d670;
  local_918 = &DAT_14060d670;
  local_bb8[0] = 0;
  local_bb0 = param_1;
  local_ba8 = param_3;
  local_af8 = param_4;
  puStack_910 = puStack_920;
  lVar17 = FUN_1415d8310(&local_918,&DAT_146216a38);
  local_b38 = (undefined8 *)(lVar17 + 0x18);
  local_b30 = *local_b38;
  local_b28 = *(longlong *)(lVar17 + 0x28);
  local_b20 = '\0';
  local_b18 = *(undefined8 *)(lVar17 + 0x30);
  *(undefined8 ***)(lVar17 + 0x30) = &local_b38;
  *(int *)(lVar17 + 0x38) = *(int *)(lVar17 + 0x38) + 1;
  lVar17 = *(longlong *)(param_1 + 0x78);
  fVar31 = *(float *)(DAT_146b057b0 + 4);
  local_b80 = (longlong)*(int *)(lVar17 + 0x228) * 0x58 + lVar17;
  uVar2 = *(undefined8 *)(local_b80 + 0x30);
  lVar17 = ((longlong)*(int *)(lVar17 + 0x228) ^ 1U) * 0x58 + lVar17;
  local_b98 = *(undefined8 *)(local_b80 + 0x40);
  uVar3 = *(undefined8 *)(lVar17 + 0x30);
  uVar4 = *(undefined8 *)(lVar17 + 0x40);
  local_ba0 = uVar2;
  local_b88 = fVar31;
  local_b70 = lVar17;
  if (*(char *)(local_b80 + 0x50) == '\0') {
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    uVar7 = local_b98;
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b868;
    puVar22[2] = uVar2;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    lVar18 = local_b80;
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_978 = 0;
    local_bf0 = local_bf0 & 0xffffffffffffff00;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[2] = uVar7;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b868;
    local_9a8 = 0x22;
    local_bf8._0_4_ = 0x22;
    FUN_141ad74f0(param_2,*(undefined8 *)(local_b80 + 0x30),0,5);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_978);
    local_bf0 = local_bf0 & 0xffffffffffffff00;
    local_988 = 0x22;
    local_9c8 = 0;
    local_bf8 = CONCAT44(local_bf8._4_4_,0x22);
    FUN_141ad74f0(param_2,*(undefined8 *)(lVar18 + 0x40),0,5);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_9c8);
    uVar2 = local_ba0;
    *(undefined1 *)(lVar18 + 0x50) = 1;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    uVar7 = local_b98;
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b878;
    puVar22[2] = uVar2;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b878;
    puVar22[2] = uVar7;
  }
  if (*(char *)(lVar17 + 0x50) == '\0') {
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b868;
    puVar22[2] = uVar3;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_bf0 = local_bf0 & 0xffffffffffffff00;
    local_984 = 0x22;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b868;
    puVar22[2] = uVar4;
    local_948 = 0;
    local_bf8 = CONCAT44(local_bf8._4_4_,0x22);
    FUN_141ad74f0(param_2,*(undefined8 *)(lVar17 + 0x30),0,5);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>();
    plVar19 = *(longlong **)(lVar17 + 0x30);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_a90 = 0xffffffff00000000;
    uStack_a88 = 0xffffffffffffffff;
    puVar21 = puVar22 + 10;
    local_a80 = 0xffffffffffffffff;
    uStack_a78 = 0xffffffffffffffff;
    local_a70 = 0xffffffff;
    uStack_a68 = 0;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar22 + 2) = (undefined4)local_a90;
    *(undefined4 *)((longlong)puVar22 + 0x14) = local_a90._4_4_;
    *(undefined4 *)(puVar22 + 3) = (undefined4)uStack_a88;
    *(undefined4 *)((longlong)puVar22 + 0x1c) = uStack_a88._4_4_;
    *(undefined4 *)(puVar22 + 4) = (undefined4)local_a80;
    *(undefined4 *)((longlong)puVar22 + 0x24) = local_a80._4_4_;
    *(undefined4 *)(puVar22 + 5) = (undefined4)uStack_a78;
    *(undefined4 *)((longlong)puVar22 + 0x2c) = uStack_a78._4_4_;
    *(undefined4 *)(puVar22 + 6) = (undefined4)local_a70;
    *(undefined4 *)((longlong)puVar22 + 0x34) = local_a70._4_4_;
    *(undefined4 *)(puVar22 + 7) = (undefined4)uStack_a68;
    *(undefined4 *)((longlong)puVar22 + 0x3c) = uStack_a68._4_4_;
    puVar22[8] = plVar19;
    puVar22[9] = plVar19;
    lVar17 = (**(code **)(*plVar19 + 8))(plVar19);
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[8] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[8] + 0x20))();
    }
    lVar17 = (**(code **)(*(longlong *)puVar22[9] + 8))();
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[9] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[9] + 0x20))();
    }
    lVar17 = local_b70;
    local_bf0 = local_bf0 & 0xffffffffffffff00;
    local_97c = 0x22;
    local_940 = 0;
    local_bf8 = CONCAT44(local_bf8._4_4_,0x22);
    FUN_141ad74f0(param_2,*(undefined8 *)(local_b70 + 0x40),0,5);
    TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>();
    plVar19 = *(longlong **)(lVar17 + 0x40);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_a60 = 0xffffffff00000000;
    uStack_a58 = 0xffffffffffffffff;
    puVar21 = puVar22 + 10;
    local_a50 = _DAT_143f39c70;
    local_a40 = 0xffffffff;
    uStack_a38 = 0;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar22 + 2) = (undefined4)local_a60;
    *(undefined4 *)((longlong)puVar22 + 0x14) = local_a60._4_4_;
    *(undefined4 *)(puVar22 + 3) = (undefined4)uStack_a58;
    *(undefined4 *)((longlong)puVar22 + 0x1c) = uStack_a58._4_4_;
    *(undefined4 *)(puVar22 + 4) = local_a50._0_4_;
    *(undefined4 *)((longlong)puVar22 + 0x24) = local_a50._4_4_;
    *(undefined4 *)(puVar22 + 5) = local_a50._8_4_;
    *(undefined4 *)((longlong)puVar22 + 0x2c) = local_a50._12_4_;
    *(undefined4 *)(puVar22 + 6) = (undefined4)local_a40;
    *(undefined4 *)((longlong)puVar22 + 0x34) = local_a40._4_4_;
    *(undefined4 *)(puVar22 + 7) = (undefined4)uStack_a38;
    *(undefined4 *)((longlong)puVar22 + 0x3c) = uStack_a38._4_4_;
    puVar22[8] = plVar19;
    puVar22[9] = plVar19;
    lVar17 = (**(code **)(*plVar19 + 8))(plVar19);
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[8] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[8] + 0x20))();
    }
    lVar17 = (**(code **)(*(longlong *)puVar22[9] + 8))();
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[9] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[9] + 0x20))();
    }
    *(undefined1 *)(local_b70 + 0x50) = 1;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    *puVar22 = &PTR_LAB_144e1b878;
    puVar22[2] = uVar3;
    puVar22[1] = 0;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b878;
    puVar22[2] = uVar4;
  }
  local_938 = param_1 + 0x40;
  local_b90 = 0;
  lVar17 = 0;
  if (0 < *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74)) {
    FVectorFieldUniformParameters::FVectorFieldUniformParameters(local_3d8);
    local_3c8 = DAT_1464aa7d0;
    uStack_3c4 = DAT_1464aa7d4;
    uStack_3c0 = DAT_1464aa7d8;
    uStack_3bc = uRam00000001464aa7dc;
    local_3b8 = DAT_1464aa7e0;
    uStack_3b4 = DAT_1464aa7e4;
    uStack_3b0 = DAT_1464aa7e8;
    uStack_3ac = uRam00000001464aa7ec;
    local_3a8 = _DAT_1464aa7f0;
    local_398 = _DAT_1464aa800;
    uStack_390 = uRam00000001464aa808;
    local_2c8 = DAT_1464aa7d0;
    uStack_2c4 = DAT_1464aa7d4;
    uStack_2c0 = DAT_1464aa7d8;
    uStack_2bc = uRam00000001464aa7dc;
    local_2b8 = DAT_1464aa7e0;
    uStack_2b4 = DAT_1464aa7e4;
    uStack_2b0 = DAT_1464aa7e8;
    uStack_2ac = uRam00000001464aa7ec;
    local_2a8 = _DAT_1464aa7f0;
    local_298 = _DAT_1464aa800;
    uStack_290 = uRam00000001464aa808;
    local_188 = 0x3f800000;
    uStack_180 = 0x3f80000000000000;
    local_1c8 = 0;
    uStack_1c0 = 0x3f80000000000000;
    local_388 = DAT_1464aa7d0;
    uStack_384 = DAT_1464aa7d4;
    uStack_380 = DAT_1464aa7d8;
    uStack_37c = uRam00000001464aa7dc;
    local_378 = DAT_1464aa7e0;
    uStack_374 = DAT_1464aa7e4;
    uStack_370 = DAT_1464aa7e8;
    uStack_36c = uRam00000001464aa7ec;
    local_368 = _DAT_1464aa7f0;
    local_358 = _DAT_1464aa800;
    uStack_350 = uRam00000001464aa808;
    local_288 = DAT_1464aa7d0;
    uStack_284 = DAT_1464aa7d4;
    uStack_280 = DAT_1464aa7d8;
    uStack_27c = uRam00000001464aa7dc;
    local_278 = DAT_1464aa7e0;
    uStack_274 = DAT_1464aa7e4;
    uStack_270 = DAT_1464aa7e8;
    uStack_26c = uRam00000001464aa7ec;
    local_268 = _DAT_1464aa7f0;
    local_258 = _DAT_1464aa800;
    uStack_250 = uRam00000001464aa808;
    local_178 = 0x3f800000;
    uStack_170 = 0x3f80000000000000;
    local_1b8 = 0;
    uStack_1b0 = 0x3f80000000000000;
    local_348 = DAT_1464aa7d0;
    uStack_344 = DAT_1464aa7d4;
    uStack_340 = DAT_1464aa7d8;
    uStack_33c = uRam00000001464aa7dc;
    local_338 = DAT_1464aa7e0;
    uStack_334 = DAT_1464aa7e4;
    uStack_330 = DAT_1464aa7e8;
    uStack_32c = uRam00000001464aa7ec;
    local_328 = _DAT_1464aa7f0;
    local_318 = _DAT_1464aa800;
    uStack_310 = uRam00000001464aa808;
    local_248 = DAT_1464aa7d0;
    uStack_244 = DAT_1464aa7d4;
    uStack_240 = DAT_1464aa7d8;
    uStack_23c = uRam00000001464aa7dc;
    local_238 = DAT_1464aa7e0;
    uStack_234 = DAT_1464aa7e4;
    uStack_230 = DAT_1464aa7e8;
    uStack_22c = uRam00000001464aa7ec;
    local_228 = _DAT_1464aa7f0;
    local_218 = _DAT_1464aa800;
    uStack_210 = uRam00000001464aa808;
    local_168 = 0x3f800000;
    uStack_160 = 0x3f80000000000000;
    local_1a8 = 0;
    uStack_1a0 = 0x3f80000000000000;
    local_308 = DAT_1464aa7d0;
    uStack_304 = DAT_1464aa7d4;
    uStack_300 = DAT_1464aa7d8;
    uStack_2fc = uRam00000001464aa7dc;
    local_2f8 = DAT_1464aa7e0;
    uStack_2f4 = DAT_1464aa7e4;
    uStack_2f0 = DAT_1464aa7e8;
    uStack_2ec = uRam00000001464aa7ec;
    local_2e8 = _DAT_1464aa7f0;
    local_2d8 = _DAT_1464aa800;
    uStack_2d0 = uRam00000001464aa808;
    local_208 = DAT_1464aa7d0;
    uStack_204 = DAT_1464aa7d4;
    uStack_200 = DAT_1464aa7d8;
    uStack_1fc = uRam00000001464aa7dc;
    local_1f8 = DAT_1464aa7e0;
    uStack_1f4 = DAT_1464aa7e4;
    uStack_1f0 = DAT_1464aa7e8;
    uStack_1ec = uRam00000001464aa7ec;
    local_1e8 = _DAT_1464aa7f0;
    local_1d8 = _DAT_1464aa800;
    uStack_1d0 = uRam00000001464aa808;
    local_158 = 0x3f800000;
    uStack_150 = 0x3f80000000000000;
    local_198 = 0;
    uStack_190 = 0x3f80000000000000;
    local_3d8[0] = 0;
    local_bf8 = CONCAT44(local_bf8._4_4_,1);
    (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_af0,local_3d8,&DAT_146b05ba8);
    local_b78 = local_af0;
    if (local_af0 != 0) {
      LOCK();
      *(int *)(local_af0 + 8) = *(int *)(local_af0 + 8) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_af0);
    local_b90 = local_af0;
    local_b78 = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b78);
    lVar17 = local_af0;
  }
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar18 + 0x38) < DAT_146b06d08) &&
     (_Init_thread_header(&DAT_146b06d08), DAT_146b06d08 == -1)) {
    atexit(`FFXSystem::SimulateGPUParticles'::`2'::
           _dynamic_atexit_destructor_for__SimulationCommands__);
    _Init_thread_footer(&DAT_146b06d08);
  }
  if ((*(int *)(lVar18 + 0x38) < DAT_146b06d20) &&
     (_Init_thread_header(&DAT_146b06d20), DAT_146b06d20 == -1)) {
    atexit((_func_5014 *)&LAB_143eb5c20);
    _Init_thread_footer(&DAT_146b06d20);
  }
  if ((*(int *)(lVar18 + 0x38) < DAT_146b06d38) &&
     (_Init_thread_header(&DAT_146b06d38), DAT_146b06d38 == -1)) {
    atexit((_func_5014 *)&LAB_143eb5b90);
    _Init_thread_footer(&DAT_146b06d38);
  }
  if ((*(int *)(lVar18 + 0x38) < DAT_146b06d48) &&
     (_Init_thread_header(&DAT_146b06d48), DAT_146b06d48 == -1)) {
    plVar19 = (longlong *)FUN_14164bd40();
    plVar20 = (longlong *)FMemory::Realloc(0,0x20);
    local_900 = plVar20;
    if (plVar20 != (longlong *)0x0) {
      *plVar20 = (longlong)&PTR_GetPoolName_14513b298;
      lVar18 = FDelegateHandle::GenerateNewID();
      plVar20[2] = lVar18;
      *plVar20 = (longlong)&PTR_GetPoolName_14513b2e0;
    }
    uVar25 = 0;
    _DAT_146b06d40 = 0;
    if (plVar20 != (longlong *)0x0) {
      if (*(int *)((longlong)plVar19 + 0x14) < 1) {
        *(int *)(plVar19 + 2) = (int)plVar19[2] + -1;
        iVar26 = (int)plVar19[1];
        param_1 = local_bb0;
        if ((int)plVar19[2] <= iVar26) {
          uVar30 = uVar25;
          iVar15 = iVar26;
          if (0 < iVar26) {
            do {
              if (((*(int *)(uVar25 + 8 + *plVar19) == 0) ||
                  (plVar5 = *(longlong **)(uVar25 + *plVar19), plVar5 == (longlong *)0x0)) ||
                 (cVar14 = (**(code **)(*plVar5 + 0x10))(), cVar14 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar19,uVar30,1,1);
              }
              else {
                uVar30 = (ulonglong)((int)uVar30 + 1);
                uVar25 = uVar25 + 0x10;
              }
              iVar15 = (int)plVar19[1];
            } while ((int)uVar30 < iVar15);
          }
          iVar16 = iVar15 * 2;
          if (iVar16 < 3) {
            iVar16 = 2;
          }
          *(int *)(plVar19 + 2) = iVar16;
          param_1 = local_bb0;
          if ((iVar16 < iVar26) && (*(int *)((longlong)plVar19 + 0xc) != iVar15)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar19);
            param_1 = local_bb0;
          }
        }
      }
      puVar21 = (undefined8 *)(**(code **)(*plVar20 + 0x20))(plVar20,local_908);
      iVar26 = (int)plVar19[1];
      uVar2 = *puVar21;
      *(int *)(plVar19 + 1) = iVar26 + 1;
      if (*(int *)((longlong)plVar19 + 0xc) < iVar26 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar19,iVar26);
      }
      puVar21 = (undefined8 *)((longlong)iVar26 * 0x10 + *plVar19);
      *puVar21 = plVar20;
      *(undefined4 *)(puVar21 + 1) = 2;
      _DAT_146b06d40 = uVar2;
    }
    _Init_thread_footer(&DAT_146b06d48);
  }
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_970);
  if (local_954 < *(int *)(local_960 + 0x18)) {
    do {
      puVar21 = (undefined8 *)0x0;
      lVar18 = *(longlong *)(*local_970 + (longlong)local_954 * 8);
      if (((*(int *)(lVar18 + 0x244) == local_ba8) && (0 < *(int *)(lVar18 + 0x44))) &&
         (*(char *)(lVar18 + 0x253) != '\0')) {
        lVar23 = (longlong)DAT_146b06d00;
        DAT_146b06d00 = DAT_146b06d00 + 1;
        if (DAT_146b06d04 < DAT_146b06d00) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                    (&DAT_146b06cf8);
        }
        puVar24 = (undefined8 *)(lVar23 * 0x90 + DAT_146b06cf8);
        puVar22 = puVar21;
        if (puVar24 != (undefined8 *)0x0) {
          uVar1 = *(undefined4 *)(lVar18 + 0x44);
          uVar2 = **(undefined8 **)(lVar18 + 0x50);
          *puVar24 = *(undefined8 *)(lVar18 + 0x38);
          puVar24[1] = uVar2;
          uVar2 = *(undefined8 *)(lVar18 + 0x68);
          puVar24[2] = *(undefined8 *)(lVar18 + 0x60);
          puVar24[3] = uVar2;
          uVar2 = *(undefined8 *)(lVar18 + 0x78);
          puVar24[4] = *(undefined8 *)(lVar18 + 0x70);
          puVar24[5] = uVar2;
          uVar2 = *(undefined8 *)(lVar18 + 0x88);
          puVar24[6] = *(undefined8 *)(lVar18 + 0x80);
          puVar24[7] = uVar2;
          uVar2 = *(undefined8 *)(lVar18 + 0x98);
          puVar24[8] = *(undefined8 *)(lVar18 + 0x90);
          puVar24[9] = uVar2;
          puVar24[10] = lVar17;
          if (lVar17 != 0) {
            LOCK();
            *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
            UNLOCK();
            lVar17 = local_b90;
          }
          puVar24[0xb] = 0;
          puVar24[0xc] = 0;
          *(undefined4 *)(puVar24 + 0x11) = uVar1;
          uVar2 = *(undefined8 *)(DAT_146ac3e30 + 0x30);
          puVar24[0xd] = uVar2;
          puVar24[0xe] = uVar2;
          puVar24[0xf] = uVar2;
          puVar24[0x10] = uVar2;
          puVar22 = puVar24;
        }
        plVar19 = *(longlong **)(lVar18 + 0xe0);
        local_ad0 = *(undefined8 *)(lVar18 + 0xb0);
        local_ac8 = *(undefined4 *)(lVar18 + 0xb8);
        local_558[0] = 0;
        local_558[1] = 0x3f80000000000000;
        local_558[2] = 0;
        local_558[3] = 0x3f80000000000000;
        local_558[4] = 0;
        local_558[5] = 0x3f80000000000000;
        local_558[6] = 0;
        local_558[7] = 0x3f80000000000000;
        local_558[8] = 0;
        local_558[9] = 0x3f80000000000000;
        local_558[10] = 0;
        local_558[0xb] = 0x3f80000000000000;
        local_558[0xc] = 0;
        local_558[0xd] = 0x3f80000000000000;
        local_558[0xe] = 0;
        local_558[0xf] = 0x3f80000000000000;
        local_558[0x10] = 0;
        local_558[0x11] = 0x3f80000000000000;
        local_558[0x12] = 0;
        local_558[0x13] = 0x3f80000000000000;
        local_558[0x14] = 0;
        local_558[0x15] = 0x3f80000000000000;
        local_558[0x16] = 0;
        local_558[0x17] = 0x3f80000000000000;
        local_768[0] = 0;
        local_ae0 = *(undefined8 *)(lVar18 + 0xa0);
        uStack_ad8 = *(undefined8 *)(lVar18 + 0xa8);
        puVar24 = puVar21;
        if ((plVar19 != (longlong *)0x0) &&
           (0.0 < ABS(*(float *)((longlong)plVar19 + 0x44) * *(float *)(lVar18 + 0x1d4)))) {
          (**(code **)(*plVar19 + 0x40))(plVar19,param_2,*(undefined4 *)(lVar18 + 0x98));
          puVar22[0xd] = *(undefined8 *)(*(longlong *)(lVar18 + 0xe0) + 0x30);
          local_bf8 = CONCAT44(local_bf8._4_4_,local_768[0]);
          SetParametersForVectorField(local_768,lVar18 + 0xe0,0x3f800000,0xbf800000);
          local_768[0] = local_768[0] + 1;
          puVar24 = (undefined8 *)(ulonglong)local_768[0];
        }
        fVar31 = *(float *)(*(longlong *)(lVar18 + 0x50) + 8);
        uVar1 = *(undefined4 *)(*(longlong *)(lVar18 + 0x50) + 0xc);
        if (0.0 < ABS(fVar31)) {
          local_a00 = (longlong *)(param_1 + 8);
          uStack_b54 = 1;
          iVar26 = *(int *)(param_1 + 0x30);
          puStack_b50 = (uint *)(param_1 + 0x18);
          local_b58 = 0;
          iStack_b44 = 0;
          uStack_b40 = 0;
          if (iVar26 != 0) {
            puVar29 = *(uint **)(param_1 + 0x28);
            if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
              puVar29 = puStack_b50;
            }
            uVar27 = *puVar29;
            puVar28 = puVar21;
            while (uVar27 == 0) {
              iVar15 = (int)puVar21;
              uStack_b40 = (int)puVar28 + 0x20;
              puVar28 = (undefined8 *)(ulonglong)uStack_b40;
              local_b58 = iVar15 + 1;
              puVar21 = (undefined8 *)(ulonglong)local_b58;
              if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar15)
              goto LAB_1426338b5;
              uVar27 = puVar29[(longlong)iVar15 + 1];
            }
            uStack_b54 = -uVar27 & uVar27;
            local_980 = 0x1f;
            if (uStack_b54 != 0) {
              for (; uStack_b54 >> local_980 == 0; local_980 = local_980 + -1) {
              }
            }
            if (uStack_b54 == 0) {
              iVar15 = 0x20;
            }
            else {
              iVar15 = 0x1f - local_980;
            }
            iStack_b44 = (uStack_b40 - iVar15) + 0x1f;
            if (iVar26 < iStack_b44) {
LAB_1426338b5:
              iStack_b44 = iVar26;
            }
          }
          local_b48 = 0xffffffff;
          local_9e8._4_4_ = iStack_b44;
          local_9e8._0_4_ = 0xffffffff;
          local_9e8._8_4_ = uStack_b40;
          local_9e8._12_4_ = uStack_b3c;
          local_9f8 = CONCAT44(uStack_b54,local_b58);
          puStack_9f0 = puStack_b50;
          if (iStack_b44 < iVar26) {
            fVar13 = local_ad0._4_4_;
            fVar12 = (float)local_ad0;
            fVar11 = uStack_ad8._4_4_;
            fVar10 = (float)uStack_ad8;
            fVar9 = local_ae0._4_4_;
            fVar8 = (float)local_ae0;
            iVar26 = iStack_b44;
            do {
              if (3 < (int)puVar24) break;
              plVar19 = *(longlong **)(*local_a00 + (longlong)iVar26 * 8);
              if (((((fVar8 < *(float *)((longlong)plVar19 + 0x14) ||
                      fVar8 == *(float *)((longlong)plVar19 + 0x14)) &&
                    (*(float *)(plVar19 + 1) <= fVar11)) &&
                   (fVar9 < *(float *)(plVar19 + 3) || fVar9 == *(float *)(plVar19 + 3))) &&
                  ((*(float *)((longlong)plVar19 + 0xc) <= fVar12 &&
                   (fVar10 < *(float *)((longlong)plVar19 + 0x1c) ||
                    fVar10 == *(float *)((longlong)plVar19 + 0x1c))))) &&
                 ((*(float *)(plVar19 + 2) <= fVar13 &&
                  (0.0 < ABS(*(float *)(*plVar19 + 0x44) * *(float *)((longlong)plVar19 + 0xf4))))))
              {
                puVar22[(longlong)(int)puVar24 + 0xd] = *(undefined8 *)(*plVar19 + 0x30);
                local_bf8 = CONCAT44(local_bf8._4_4_,local_768[0]);
                SetParametersForVectorField(local_768,plVar19,fVar31,uVar1);
                local_768[0] = local_768[0] + 1;
              }
              local_9e8._0_4_ = local_9e8._0_4_ & ~local_9f8._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9f8);
              puVar24 = (undefined8 *)(ulonglong)local_768[0];
              iVar26 = local_9e8._4_4_;
            } while ((int)local_9e8._4_4_ < (int)puStack_9f0[6]);
          }
        }
        if (0 < (int)puVar24) {
          if ((int)puVar24 < 4) {
            do {
              uVar27 = (int)puVar24 + 1;
              auStack_758[(longlong)puVar24 * 8] = CONCAT44(DAT_1464aa7d4,DAT_1464aa7d0);
              auStack_758[(longlong)puVar24 * 8 + 1] = CONCAT44(uRam00000001464aa7dc,DAT_1464aa7d8);
              auStack_758[(longlong)puVar24 * 8 + 2] = CONCAT44(DAT_1464aa7e4,DAT_1464aa7e0);
              auStack_758[(longlong)puVar24 * 8 + 3] = CONCAT44(uRam00000001464aa7ec,DAT_1464aa7e8);
              *(undefined1 (*) [16])(auStack_738 + (longlong)puVar24 * 0x40) = _DAT_1464aa7f0;
              auStack_728[(longlong)puVar24 * 8] = _DAT_1464aa800;
              auStack_728[(longlong)puVar24 * 8 + 1] = uRam00000001464aa808;
              auStack_658[(longlong)puVar24 * 8] = CONCAT44(DAT_1464aa7d4,DAT_1464aa7d0);
              auStack_658[(longlong)puVar24 * 8 + 1] = CONCAT44(uRam00000001464aa7dc,DAT_1464aa7d8);
              auStack_658[(longlong)puVar24 * 8 + 2] = CONCAT44(DAT_1464aa7e4,DAT_1464aa7e0);
              auStack_658[(longlong)puVar24 * 8 + 3] = CONCAT44(uRam00000001464aa7ec,DAT_1464aa7e8);
              *(undefined1 (*) [16])(auStack_638 + (longlong)puVar24 * 0x40) = _DAT_1464aa7f0;
              auStack_628[(longlong)puVar24 * 8] = _DAT_1464aa800;
              auStack_628[(longlong)puVar24 * 8 + 1] = uRam00000001464aa808;
              local_558[(longlong)puVar24 * 2 + 8] = 0x3f800000;
              local_558[(longlong)puVar24 * 2 + 9] = 0x3f80000000000000;
              local_558[(longlong)puVar24 * 2] = 0;
              local_558[(longlong)puVar24 * 2 + 1] = 0x3f80000000000000;
              puVar24 = (undefined8 *)(ulonglong)uVar27;
            } while ((int)uVar27 < 4);
          }
          local_bf8 = CONCAT44(local_bf8._4_4_,1);
          (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_ae8,local_768,&DAT_146b05ba8);
          local_b10[0] = local_ae8;
          if (local_ae8 != 0) {
            LOCK();
            *(int *)(local_ae8 + 8) = *(int *)(local_ae8 + 8) + 1;
            UNLOCK();
            lVar17 = local_b90;
          }
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_ae8);
          TRefCountPtr<FRHIIndexBuffer>::operator=(puVar22 + 10);
          TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_b10);
        }
        iVar26 = *(int *)(lVar18 + 0xd8);
        if (iVar26 != 0) {
          if (DAT_146b06d1c < iVar26 + DAT_146b06d18) {
            TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146b06d10);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146b06d10 + (longlong)DAT_146b06d18 * 4),*(void **)(lVar18 + 0xd0)
                     ,(longlong)iVar26 << 2);
          DAT_146b06d18 = DAT_146b06d18 + iVar26;
        }
        *(undefined4 *)(lVar18 + 0xd8) = 0;
        if (0x7fffffff < *(uint *)(lVar18 + 0xdc)) {
          TArray<float,FDefaultAllocator>::ResizeTo(lVar18 + 0xd0);
        }
        iVar26 = *(int *)(lVar18 + 200);
        if (iVar26 != 0) {
          if (DAT_146b06d34 < iVar26 + DAT_146b06d30) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::
            ResizeTo(&DAT_146b06d28);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(DAT_146b06d28 + (longlong)DAT_146b06d30 * 0x48),
                     *(void **)(lVar18 + 0xc0),(longlong)iVar26 * 0x48);
          DAT_146b06d30 = DAT_146b06d30 + iVar26;
        }
        *(undefined4 *)(lVar18 + 200) = 0;
        if ((*(int *)(lVar18 + 0xcc) < 0) && (*(int *)(lVar18 + 0xcc) != 0)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::
          ResizeTo(lVar18 + 0xc0);
        }
        *(undefined8 *)(lVar18 + 0x88) = 0;
        *(undefined8 *)(lVar18 + 0x90) = 0;
        *(undefined4 *)(lVar18 + 0x98) = 0;
      }
      local_958 = local_958 & ~local_964;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_968);
      fVar31 = local_b88;
    } while (local_954 < *(int *)(local_960 + 0x18));
  }
  uVar2 = local_ba0;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
  }
  uVar3 = local_b98;
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar22;
  *(undefined8 **)(param_2 + 8) = puVar22 + 1;
  *puVar22 = &PTR_LAB_144e1b868;
  puVar22[2] = uVar2;
  puVar22[1] = 0;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
  }
  lVar17 = local_bb0;
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar22;
  *(undefined8 **)(param_2 + 8) = puVar22 + 1;
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_144e1b868;
  puVar22[2] = uVar3;
  if ((DAT_146b06d00 != 0) || (DAT_146b06d18 != 0)) {
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_9d8 = *(undefined8 *)(*(longlong *)(local_bb0 + 0x78) + 0x128);
    puVar21 = puVar22 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_9d8;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar24;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[1] = 0;
    puVar24[3] = puVar22;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar24 + 2) = 1;
    *(undefined4 *)(puVar24 + 4) = 0;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_9d0 = *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0xe8);
    puVar21 = puVar22 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_9d0;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar24;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[1] = 0;
    puVar24[3] = puVar22;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar24 + 2) = 1;
    *(undefined4 *)(puVar24 + 4) = 0;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_ba0;
    puVar22[1] = local_b98;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    lVar18 = local_b70;
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar24;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[1] = 0;
    puVar24[3] = puVar22;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
    *(undefined4 *)(puVar24 + 2) = 2;
    *(undefined4 *)(puVar24 + 4) = 1;
    local_9a0 = *(undefined8 *)(local_b70 + 0x38);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_9a0;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar24;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[3] = puVar22;
    puVar24[1] = 0;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar24 + 2) = 1;
    *(undefined4 *)(puVar24 + 4) = 0;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
    local_9c0 = *(undefined8 *)(lVar18 + 0x48);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 1;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 1;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_9c0;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_be0 = local_be0 & 0xffffffffffffff00;
    local_be8 = local_be8 & 0xffffffffffffff00;
    **(undefined8 **)(param_2 + 8) = puVar24;
    local_bf0 = 0;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[1] = 0;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar24 + 2) = 1;
    puVar24[3] = puVar22;
    *(undefined4 *)(puVar24 + 4) = 0;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
    local_bf8 = local_bf8 & 0xffffffff00000000;
    FUN_141ad7ef0(param_2,2,&local_ba0,0);
    local_8a8 = 0;
    local_8e8 = 0;
    uStack_8e0 = 0;
    local_8d8 = 0;
    uStack_8d0 = 0;
    local_8c8 = 0;
    uStack_8c0 = 0;
    local_8b8 = 0;
    uStack_8b0 = 0;
    local_888 = 0;
    uStack_880 = 0;
    local_8a0 = 0;
    local_89c = 0x26;
    local_894 = 0;
    local_88c = 0;
    local_878 = 0;
    local_870 = 0;
    local_868 = 0;
    local_860 = 0;
    local_858 = 0;
    local_850 = 0;
    local_848 = 0;
    local_844 = 0;
    local_83c = 0;
    local_834 = 0;
    FUN_14049afe0(param_2);
    uVar6 = DAT_146534414;
    uVar1 = DAT_146534410;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f59420;
    puVar22[2] = 0;
    *(undefined4 *)(puVar22 + 3) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x1c) = uVar1;
    *(undefined4 *)(puVar22 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar22 + 0x24) = 0x3f800000;
    local_8a8 = FUN_1409853f0();
    uStack_8b0 = FUN_140985530();
    local_8b8 = FUN_1404a0ce0();
    if (DAT_146b06d00 != 0) {
      local_bc0 = 0;
      local_bc8 = 0.0 < fVar31;
      local_bd0 = local_ba8;
      local_bd8 = param_7;
      local_be0 = param_6;
      local_be8 = local_b10[2];
      local_bf0 = local_af8;
      local_bf8 = *(ulonglong *)(lVar17 + 0x78);
      FUN_142622840(param_2,&local_8e8,*(undefined4 *)(lVar17 + 0x80),&DAT_146b06cf8);
    }
    if (DAT_146b06d18 != 0) {
      FUN_142621010(param_2,&local_8e8,*(undefined4 *)(lVar17 + 0x80),&DAT_146b06d10);
    }
  }
  if (DAT_146b06d30 != 0) {
    local_b10[1] = 0;
    local_998[0] = 0;
    local_998[1] = 0;
    FScopedGPUStatEvent::Begin(local_998,param_2,&DAT_146b05770,local_b10 + 1);
    local_108 = *(undefined8 *)(local_b80 + 0x30);
    local_100 = *(undefined8 *)(local_b80 + 0x40);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0xe0);
    local_f0 = *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0x120);
    puVar21 = puVar22 + 3;
    local_f8 = uVar2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b868;
    puVar22[2] = uVar2;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0x120);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x20);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_be0 = local_be0 & 0xffffffffffffff00;
    local_be8 = CONCAT71(local_be8._1_7_,1);
    **(undefined8 **)(param_2 + 8) = puVar22;
    local_bf0 = 0;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b868;
    puVar22[2] = uVar2;
    local_bf8 = local_bf8 & 0xffffffff00000000;
    FUN_141ad7ef0(param_2,4,&local_108);
    local_7e8 = 0;
    local_828 = 0;
    uStack_820 = 0;
    local_818 = 0;
    uStack_810 = 0;
    local_808 = 0;
    uStack_800 = 0;
    local_7f8 = 0;
    uStack_7f0 = 0;
    local_7c8 = 0;
    uStack_7c0 = 0;
    local_7e0 = 0;
    local_7dc = 0x26;
    local_7d4 = 0;
    local_7cc = 0;
    local_7b8 = 0;
    local_7b0 = 0;
    local_7a8 = 0;
    local_7a0 = 0;
    local_798 = 0;
    local_790 = 0;
    local_788 = 0;
    local_784 = 0;
    local_77c = 0;
    local_774 = 0;
    FUN_14049afe0(param_2);
    uVar6 = DAT_146534414;
    uVar1 = DAT_146534410;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f59420;
    puVar22[2] = 0;
    *(undefined4 *)(puVar22 + 3) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x1c) = uVar1;
    *(undefined4 *)(puVar22 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar22 + 0x24) = 0x3f800000;
    local_7e8 = FUN_1409853f0();
    uStack_7f0 = FUN_140985530();
    local_7f8 = FUN_1404a0ce0();
    FUN_142618780(param_2,&local_828,*(undefined4 *)(lVar17 + 0x80),&DAT_146b06d28);
    local_ac0 = 0xffffffff00000000;
    uStack_ab8 = 0xffffffffffffffff;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_ab0 = 0xffffffffffffffff;
    uStack_aa8 = 0xffffffffffffffff;
    local_aa0 = 0xffffffff;
    uStack_a98 = 0;
    uVar2 = *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0xe8);
    plVar19 = *(longlong **)(*(longlong *)(lVar17 + 0x78) + 0xe0);
    puVar21 = puVar22 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk();
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar22 + 2) = (undefined4)local_ac0;
    *(undefined4 *)((longlong)puVar22 + 0x14) = local_ac0._4_4_;
    *(undefined4 *)(puVar22 + 3) = (undefined4)uStack_ab8;
    *(undefined4 *)((longlong)puVar22 + 0x1c) = uStack_ab8._4_4_;
    *(undefined4 *)(puVar22 + 4) = (undefined4)local_ab0;
    *(undefined4 *)((longlong)puVar22 + 0x24) = local_ab0._4_4_;
    *(undefined4 *)(puVar22 + 5) = (undefined4)uStack_aa8;
    *(undefined4 *)((longlong)puVar22 + 0x2c) = uStack_aa8._4_4_;
    *(undefined4 *)(puVar22 + 6) = (undefined4)local_aa0;
    *(undefined4 *)((longlong)puVar22 + 0x34) = local_aa0._4_4_;
    *(undefined4 *)(puVar22 + 7) = (undefined4)uStack_a98;
    *(undefined4 *)((longlong)puVar22 + 0x3c) = uStack_a98._4_4_;
    puVar22[8] = plVar19;
    puVar22[9] = uVar2;
    lVar17 = (**(code **)(*plVar19 + 8))(plVar19);
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[8] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[8] + 0x20))();
    }
    lVar17 = (**(code **)(*(longlong *)puVar22[9] + 8))();
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[9] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[9] + 0x20))();
    }
    local_a30 = 0xffffffff00000000;
    uStack_a28 = 0xffffffffffffffff;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_a20 = 0xffffffffffffffff;
    uStack_a18 = 0xffffffffffffffff;
    local_a10 = 0xffffffff;
    uStack_a08 = 0;
    uVar2 = *(undefined8 *)(*(longlong *)(local_bb0 + 0x78) + 0x128);
    plVar19 = *(longlong **)(*(longlong *)(local_bb0 + 0x78) + 0x120);
    puVar21 = puVar22 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk();
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar22 + 2) = (undefined4)local_a30;
    *(undefined4 *)((longlong)puVar22 + 0x14) = local_a30._4_4_;
    *(undefined4 *)(puVar22 + 3) = (undefined4)uStack_a28;
    *(undefined4 *)((longlong)puVar22 + 0x1c) = uStack_a28._4_4_;
    *(undefined4 *)(puVar22 + 4) = (undefined4)local_a20;
    *(undefined4 *)((longlong)puVar22 + 0x24) = local_a20._4_4_;
    *(undefined4 *)(puVar22 + 5) = (undefined4)uStack_a18;
    *(undefined4 *)((longlong)puVar22 + 0x2c) = uStack_a18._4_4_;
    *(undefined4 *)(puVar22 + 6) = (undefined4)local_a10;
    *(undefined4 *)((longlong)puVar22 + 0x34) = local_a10._4_4_;
    *(undefined4 *)(puVar22 + 7) = (undefined4)uStack_a08;
    *(undefined4 *)((longlong)puVar22 + 0x3c) = uStack_a08._4_4_;
    puVar22[8] = plVar19;
    puVar22[9] = uVar2;
    lVar17 = (**(code **)(*plVar19 + 8))(plVar19);
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[8] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[8] + 0x20))();
    }
    lVar17 = (**(code **)(*(longlong *)puVar22[9] + 8))();
    if ((lVar17 == 0) && (lVar17 = (**(code **)(*(longlong *)puVar22[9] + 0x18))(), lVar17 == 0)) {
      (**(code **)(*(longlong *)puVar22[9] + 0x20))();
    }
    lVar17 = local_bb0;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *(undefined8 *)(*(longlong *)(local_bb0 + 0x78) + 0xe0);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_144e1b878;
    puVar22[2] = uVar2;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    uVar2 = *(undefined8 *)(*(longlong *)(lVar17 + 0x78) + 0x120);
    puVar21 = puVar22 + 3;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 3;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar22;
    *(undefined8 **)(param_2 + 8) = puVar22 + 1;
    puVar22[1] = 0;
    puVar22[2] = uVar2;
    *puVar22 = &PTR_LAB_144e1b878;
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_ba0;
    puVar22[1] = local_b98;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar24;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[1] = 0;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar24 + 2) = 2;
    puVar24[3] = puVar22;
    *(undefined4 *)(puVar24 + 4) = 0;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
    if (local_998[0] != 0) {
      FScopedGPUStatEvent::End(local_998);
    }
  }
  uVar2 = local_ba0;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
  }
  uVar3 = local_b98;
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar22;
  *(undefined8 **)(param_2 + 8) = puVar22 + 1;
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_144e1b878;
  puVar22[2] = uVar2;
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 3;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 3;
  }
  lVar18 = local_b80;
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar22;
  *(undefined8 **)(param_2 + 8) = puVar22 + 1;
  puVar22[2] = uVar3;
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_144e1b878;
  local_9b8 = *(undefined8 *)(local_b80 + 0x38);
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *puVar22 = local_9b8;
  puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar24 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar24;
  *(undefined8 **)(param_2 + 8) = puVar24 + 1;
  puVar24[3] = puVar22;
  puVar24[1] = 0;
  *puVar24 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar24 + 2) = 1;
  *(undefined4 *)(puVar24 + 4) = 0;
  *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
  local_9b0 = *(undefined8 *)(lVar18 + 0x48);
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar22 + 1;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 1;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *puVar22 = local_9b0;
  puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar21 = puVar24 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar21;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar24;
  *(undefined8 **)(param_2 + 8) = puVar24 + 1;
  puVar24[1] = 0;
  *puVar24 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar24 + 2) = 1;
  puVar24[3] = puVar22;
  *(undefined4 *)(puVar24 + 4) = 0;
  *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
  if ((DAT_146b06d00 != 0) && (0.0 < fVar31)) {
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    lVar18 = ((longlong)*(int *)(*(longlong *)(lVar17 + 0x78) + 0x228) ^ 1U) * 0x58 +
             *(longlong *)(lVar17 + 0x78);
    local_b68 = *(undefined8 *)(lVar18 + 0x30);
    local_b60 = *(undefined8 *)(lVar18 + 0x40);
    puVar21 = puVar22 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_b68;
    puVar22[1] = local_b60;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    local_be0 = local_be0 & 0xffffffffffffff00;
    local_be8 = local_be8 & 0xffffffffffffff00;
    **(undefined8 **)(param_2 + 8) = puVar24;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[1] = 0;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar24 + 2) = 2;
    puVar24[3] = puVar22;
    *(undefined4 *)(puVar24 + 4) = 1;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
    local_bf0 = 0;
    local_bf8 = local_bf8 & 0xffffffff00000000;
    FUN_141ad7ef0(param_2,2,&local_b68,0);
    FUN_1419d5e00(local_498);
    FUN_14049afe0(param_2,local_498);
    local_458 = FUN_1409853f0();
    local_460 = FUN_140985530();
    local_468 = FUN_1404a0ce0();
    local_bc0 = 1;
    local_bc8 = 0;
    local_bd0 = local_ba8;
    local_bd8 = param_7;
    local_be0 = param_6;
    local_be8 = local_b10[2];
    local_bf0 = local_af8;
    local_bf8 = *(ulonglong *)(lVar17 + 0x78);
    FUN_142622840(param_2,local_498,*(undefined4 *)(lVar17 + 0x80),&DAT_146b06cf8);
    puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar22 + 2;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x18);
      puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar22 + 2;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *puVar22 = local_b68;
    puVar22[1] = local_b60;
    puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar21) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar24 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar21 = puVar24 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar21;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar24;
    *(undefined8 **)(param_2 + 8) = puVar24 + 1;
    puVar24[1] = 0;
    *puVar24 = &PTR_LAB_143f59470;
    *(undefined4 *)(puVar24 + 2) = 2;
    puVar24[3] = puVar22;
    *(undefined4 *)(puVar24 + 4) = 0;
    *(undefined1 *)((longlong)puVar24 + 0x24) = 0;
  }
  if (DAT_146b06d04 < 0) {
    FUN_1426227a0(&DAT_146b06cf8,0);
  }
  else {
    if (DAT_146b06d00 != 0) {
      lVar18 = DAT_146b06cf8 + 0x50;
      iVar26 = DAT_146b06d00;
      do {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar18 + 0x10);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar18);
        lVar18 = lVar18 + 0x90;
        iVar26 = iVar26 + -1;
      } while (iVar26 != 0);
    }
    DAT_146b06d00 = 0;
  }
  DAT_146b06d18 = 0;
  if ((DAT_146b06d1c < 0) && (DAT_146b06d1c != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146b06d10,0);
  }
  DAT_146b06d30 = 0;
  if ((DAT_146b06d34 < 0) && (DAT_146b06d34 != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (&DAT_146b06d28,0);
  }
  FUN_141a19150(param_2,0,0,0);
  uVar1 = *(undefined4 *)(lVar17 + 0x84);
  cVar14 = FUN_1424866d0(uVar1,2);
  if (cVar14 != '\0') {
    FUN_141ee4480(uVar1);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_b90);
  if (local_b20 == '\0') {
    local_b20 = 1;
    *(int *)(local_b38 + 4) = *(int *)(local_b38 + 4) + -1;
    if (local_b28 != local_b38[2]) {
      FMemStackBase::FreeChunks();
    }
    *local_b38 = local_b30;
    local_b38[3] = local_b18;
  }
  return;
}



// FUNCTION 142635230 FUN_142635230 body=1073 status=ok
// SIG undefined FUN_142635230(void)

void FUN_142635230(longlong param_1,longlong param_2,int param_3,float param_4)

{
  undefined8 uVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_a8;
  
  lVar6 = (longlong)param_3;
  lVar5 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + 0x140);
  fVar2 = *(float *)(*(longlong *)(param_1 + 0x1f8) + 0x148);
  fVar7 = (float)((ulonglong)uVar1 >> 0x20);
  local_a8 = (float)uVar1;
  if (3 < lVar6) {
    pfVar3 = (float *)(param_2 + 0x60);
    lVar4 = (lVar6 - 4U >> 2) + 1;
    lVar5 = lVar4 * 4;
    fVar8 = local_a8 * 0.5 * param_4;
    fVar9 = fVar7 * 0.5 * param_4;
    fVar10 = fVar2 * 0.5 * param_4;
    fVar11 = local_a8 * param_4;
    fVar12 = fVar7 * param_4;
    fVar13 = fVar2 * param_4;
    do {
      pfVar3[-0x18] = (fVar8 + pfVar3[-0x14]) * param_4 + pfVar3[-0x18];
      pfVar3[-0x17] = (fVar9 + pfVar3[-0x13]) * param_4 + pfVar3[-0x17];
      pfVar3[-0x16] = (fVar10 + pfVar3[-0x12]) * param_4 + pfVar3[-0x16];
      pfVar3[-0x14] = fVar11 + pfVar3[-0x14];
      pfVar3[-0x13] = fVar12 + pfVar3[-0x13];
      pfVar3[-0x12] = fVar13 + pfVar3[-0x12];
      pfVar3[-0x15] = param_4 * pfVar3[-0x11] + pfVar3[-0x15];
      pfVar3[-6] = (fVar8 + pfVar3[-2]) * param_4 + pfVar3[-6];
      pfVar3[-5] = (fVar9 + pfVar3[-1]) * param_4 + pfVar3[-5];
      pfVar3[-4] = (fVar10 + *pfVar3) * param_4 + pfVar3[-4];
      pfVar3[-2] = fVar11 + pfVar3[-2];
      pfVar3[-1] = fVar12 + pfVar3[-1];
      *pfVar3 = fVar13 + *pfVar3;
      pfVar3[-3] = param_4 * pfVar3[1] + pfVar3[-3];
      pfVar3[0xc] = (fVar8 + pfVar3[0x10]) * param_4 + pfVar3[0xc];
      pfVar3[0xd] = (fVar9 + pfVar3[0x11]) * param_4 + pfVar3[0xd];
      pfVar3[0xe] = (fVar10 + pfVar3[0x12]) * param_4 + pfVar3[0xe];
      pfVar3[0x10] = fVar11 + pfVar3[0x10];
      pfVar3[0x11] = fVar12 + pfVar3[0x11];
      pfVar3[0x12] = fVar13 + pfVar3[0x12];
      pfVar3[0xf] = param_4 * pfVar3[0x13] + pfVar3[0xf];
      pfVar3[0x1e] = (fVar8 + pfVar3[0x22]) * param_4 + pfVar3[0x1e];
      pfVar3[0x1f] = (fVar9 + pfVar3[0x23]) * param_4 + pfVar3[0x1f];
      pfVar3[0x20] = (fVar10 + pfVar3[0x24]) * param_4 + pfVar3[0x20];
      pfVar3[0x22] = fVar11 + pfVar3[0x22];
      pfVar3[0x23] = fVar12 + pfVar3[0x23];
      pfVar3[0x24] = fVar13 + pfVar3[0x24];
      pfVar3[0x21] = param_4 * pfVar3[0x25] + pfVar3[0x21];
      pfVar3 = pfVar3 + 0x48;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar5 < lVar6) {
    lVar6 = lVar6 - lVar5;
    pfVar3 = (float *)(param_2 + (lVar5 * 9 + 3) * 8);
    do {
      pfVar3[-6] = (local_a8 * 0.5 * param_4 + pfVar3[-2]) * param_4 + pfVar3[-6];
      pfVar3[-5] = (fVar7 * 0.5 * param_4 + pfVar3[-1]) * param_4 + pfVar3[-5];
      pfVar3[-4] = (fVar2 * 0.5 * param_4 + *pfVar3) * param_4 + pfVar3[-4];
      pfVar3[-1] = fVar7 * param_4 + pfVar3[-1];
      pfVar3[-2] = local_a8 * param_4 + pfVar3[-2];
      *pfVar3 = fVar2 * param_4 + *pfVar3;
      pfVar3[-3] = param_4 * pfVar3[1] + pfVar3[-3];
      pfVar3 = pfVar3 + 0x12;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 142635670 FUN_142635670 body=202 status=ok
// SIG undefined FUN_142635670(void)

void FUN_142635670(longlong param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (*(int *)(lVar3 + 0x238) < 1) {
    TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 0x160,*(undefined8 *)(lVar3 + 0x1d0));
    lVar3 = *(longlong *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(lVar3 + 0x1e0);
  }
  else {
    uVar2 = (longlong)*(int *)(lVar3 + 0x228) ^ 1;
    if (*(float *)(DAT_146b057b0 + 4) <= 0.0) {
      uVar2 = (longlong)*(int *)(lVar3 + 0x228);
    }
    iVar1 = SortParticlesGPU(param_2,lVar3 + 0x170,*(undefined8 *)(uVar2 * 0x58 + 0x38 + lVar3),
                             lVar3 + 0x230,*(undefined4 *)(param_1 + 0x80));
    TRefCountPtr<FRHIIndexBuffer>::operator=
              (*(longlong *)(param_1 + 0x78) + 0x160,
               *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x1d0 + (longlong)iVar1 * 8));
    lVar3 = *(longlong *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(lVar3 + 0x1e0 + (longlong)iVar1 * 8);
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(lVar3 + 0x168,uVar4);
  return;
}



// FUNCTION 142635740 FUN_142635740 body=1583 status=ok
// SIG undefined FUN_142635740(void)

void FUN_142635740(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  int local_128;
  int local_124;
  byte *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  longlong *local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  longlong *local_c8;
  byte **local_c0;
  
  fVar15 = 0.0;
  fVar16 = 0.0;
  iVar9 = 0;
  lVar1 = param_1[5];
  fVar17 = *(float *)((longlong)param_1 + 0x134);
  local_124 = 0;
  local_118 = **(longlong **)(param_1[2] + 0x40);
  local_res20[0] = (float)CONCAT71((int7)((ulonglong)local_118 >> 8),1);
  bVar3 = true;
  local_res10[0] = param_2;
  FUN_1426063d0(param_1[3]);
  if (*(float *)(param_1[2] + 0x60) <= 0.0) {
    return;
  }
  iVar11 = 0;
  if (0 < *(int *)(lVar1 + 0x68)) {
    lVar10 = 0;
    do {
      plVar2 = *(longlong **)(lVar10 + *(longlong *)(lVar1 + 0x60));
      if ((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 5) & 0x80) != 0)) {
        lVar7 = param_1[2];
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar7 + 0xb8,&local_120,*(undefined8 *)(*(longlong *)(local_118 + 0x60) + lVar10));
        if ((int)local_120 == -1) {
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)(lVar7 + 0xb8) + (longlong)(int)local_120 * 0x18;
        }
        puVar5 = (undefined4 *)(lVar7 + 8);
        if (lVar7 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        uVar8 = 0;
        if (puVar5 != (undefined4 *)0x0) {
          uVar8 = *puVar5;
        }
        local_res8[0] = 0.0;
        local_res18[0] = 0.0;
        cVar4 = (**(code **)(*plVar2 + 0x380))
                          (plVar2,param_1,uVar8,fVar17,local_res10[0],local_res8,local_res18);
        local_res20[0] = (float)((uint)local_res20[0] & 0xff);
        if (cVar4 == '\0') {
          local_res20[0] = 0.0;
        }
        if ((int)local_res8[0] < 1) {
          local_res8[0] = 0.0;
        }
        if (local_res18[0] <= 0.0) {
          local_res18[0] = 0.0;
        }
        fVar16 = fVar16 + local_res18[0];
        local_128 = 0;
        cVar4 = (**(code **)(*plVar2 + 0x388))
                          (plVar2,param_1,uVar8,fVar17,local_res10[0],&local_128);
        if (cVar4 == '\0') {
          bVar3 = false;
        }
        iVar9 = local_124 + local_128;
        local_124 = iVar9;
      }
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar11 < *(int *)(lVar1 + 0x68));
    if (local_res20[0]._0_1_ == '\0') goto LAB_142635997;
  }
  fVar12 = (float)FUN_1424116d0(*(longlong *)(lVar1 + 0x50) + 0x78,
                                *(undefined4 *)((longlong)param_1 + 0x13c),param_1[3],0);
  fVar13 = (float)FUN_1426710e0(*(undefined8 *)(lVar1 + 0x50));
  fVar14 = (float)FUN_1424116d0(*(longlong *)(lVar1 + 0x50) + 0x40,
                                *(undefined4 *)((longlong)param_1 + 0x13c),param_1[3],0);
  fVar16 = fVar14 * fVar12 * fVar13 + fVar16;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
LAB_142635997:
  if (bVar3) {
    local_res8[0] = 0.0;
    (**(code **)(*param_1 + 0x98))(param_1,local_res10,local_res8);
    iVar9 = iVar9 + (int)local_res8[0];
  }
  fVar12 = (float)FUN_1426072c0(param_1[2]);
  fVar13 = 1.0;
  fVar14 = *(float *)(param_1[3] + 0x8ec) * *(float *)(param_1[3] + 0x8e8);
  if (fVar14 < 3.4028235e+38) {
    fVar13 = (float)FUN_1424116d0(param_1[2] + 0x70,fVar14,0,0);
  }
  fVar14 = (float)iVar9 * fVar12 * fVar13 * *(float *)((longlong)param_1 + 0x1e4);
  fVar16 = fVar12 * fVar16 * fVar13 * *(float *)((longlong)param_1 + 0x1e4);
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  fVar12 = (float)-((int)ROUND(-0.5 - (fVar14 + fVar14)) >> 1);
  if ((0.0 < fVar16) || (0 < (int)fVar12)) {
    fVar13 = fVar16 * local_res10[0] + fVar17;
    fVar13 = (float)((int)ROUND((fVar13 + fVar13) - 0.5) >> 1);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = 1.0 / fVar16;
    }
    iVar9 = (int)param_1[0x25];
    iVar11 = iVar9 + (int)fVar13 + (int)fVar12;
    fVar17 = (fVar16 * fVar17 + local_res10[0]) - fVar16;
    if (DAT_14653430c < iVar11) {
      fVar14 = (float)(DAT_14653430c - iVar9);
      if ((int)fVar14 <= (int)fVar12) {
        fVar12 = fVar14;
      }
      if ((int)fVar14 - (int)fVar12 <= (int)fVar13) {
        fVar13 = (float)((int)fVar14 - (int)fVar12);
      }
      iVar11 = iVar9 + (int)fVar13 + (int)fVar12;
    }
    if ((*(byte *)(param_1[2] + 0xb0) & 1) == 0) {
      fVar14 = 0.0;
    }
    else {
      if (0.0 < (float)(int)fVar12) {
        fVar15 = 1.0 / (float)(int)fVar12;
      }
      fVar14 = fVar15 * local_res10[0];
    }
    if ((iVar11 < (int)param_1[0x26]) ||
       (cVar4 = (**(code **)(*param_1 + 0x18))
                          (param_1,(int)(SQRT(SQRT((float)iVar11)) + 1.0) + iVar11,
                           local_res10[0] < 0.05), cVar4 == '\x01')) {
      pbVar6 = (byte *)0x0;
      if ((*(longlong *)(lVar1 + 0x58) != 0) &&
         ((pbVar6 = (byte *)FUN_142627a50(param_1), pbVar6 != (byte *)0x0 && ((*pbVar6 & 9) == 0))))
      {
        pbVar6 = (byte *)0x0;
      }
      local_110 = (undefined4)param_1[0x14];
      local_10c = *(undefined4 *)((longlong)param_1 + 0xa4);
      local_108 = (undefined4)param_1[0x15];
      local_118 = param_1[5];
      local_res8[0] = fVar17;
      local_res18[0] = fVar13;
      local_res20[0] = fVar16;
      local_120 = pbVar6;
      if (((pbVar6 != (byte *)0x0) && ((*pbVar6 & 8) != 0)) && (0 < (int)fVar13)) {
        (**(code **)(**(longlong **)(local_118 + 0x58) + 0x398))
                  (*(longlong **)(local_118 + 0x58),param_1,pbVar6,fVar13);
      }
      local_f0 = local_res8;
      local_e8 = local_res18;
      local_d0 = &DAT_1468b5d90;
      local_e0 = local_res20;
      local_d8 = &local_110;
      local_c8 = &local_118;
      local_c0 = &local_120;
      local_f8 = param_1;
      FUN_14261b380(&local_f8,*(byte *)(param_1[2] + 0xb0) & 1);
      local_118 = param_1[5];
      local_res8[0] = fVar14;
      local_res18[0] = fVar12;
      local_res20[0] = fVar15;
      local_120 = pbVar6;
      if (((pbVar6 != (byte *)0x0) && ((*pbVar6 & 8) != 0)) && (0 < (int)fVar12)) {
        (**(code **)(**(longlong **)(local_118 + 0x58) + 0x398))
                  (*(longlong **)(local_118 + 0x58),param_1,pbVar6,fVar12);
      }
      local_f0 = local_res8;
      local_e8 = local_res18;
      local_d0 = &DAT_1468b5d90;
      local_e0 = local_res20;
      local_d8 = &local_110;
      local_c8 = &local_118;
      local_c0 = &local_120;
      local_f8 = param_1;
      FUN_14261b380(&local_f8,*(byte *)(param_1[2] + 0xb0) & 1);
    }
  }
  return;
}



// FUNCTION 142635d70 FUN_142635d70 body=190 status=ok
// SIG undefined FUN_142635d70(void)

void FUN_142635d70(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,byte *param_7)

{
  longlong local_res8;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_48;
  undefined4 *local_40;
  int *local_38;
  undefined4 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 *local_10;
  
  local_res8 = *(longlong *)(param_1 + 0x28);
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (((param_7 != (byte *)0x0) && ((*param_7 & 8) != 0)) && (0 < param_2)) {
    (**(code **)(**(longlong **)(local_res8 + 0x58) + 0x398))
              (*(longlong **)(local_res8 + 0x58),param_1,param_7,param_2);
  }
  local_40 = local_res18;
  local_38 = local_res10;
  local_30 = local_res20;
  local_28 = param_5;
  local_20 = param_6;
  local_18 = &local_res8;
  local_10 = &param_7;
  local_48 = param_1;
  FUN_14261b380(&local_48,*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb0) & 1);
  return;
}



// FUNCTION 142635e30 FUN_142635e30 body=671 status=ok
// SIG undefined FUN_142635e30(void)

void FUN_142635e30(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  void *_Src;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  LARGE_INTEGER local_res18;
  undefined8 local_res20;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_30 = *(int *)(param_1 + 0x70);
      lVar10 = (longlong)local_30;
      _Src = *(void **)(param_1 + 0x68);
      local_38 = (void *)0x0;
      if (local_30 == 0) {
        local_2c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar10 << 4);
      }
      uVar5 = FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res18);
      FUN_14262adb0(uVar5,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),&local_38)
      ;
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res18._0_4_);
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      plVar11 = (longlong *)0x0;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar11 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar11);
        plVar7 = plVar11;
      }
      plVar11 = (longlong *)plVar7[1];
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)*plVar7;
        if (plVar11 == (longlong *)0x0) {
          lVar10 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = lVar10;
          if (lVar10 == 0) {
            puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar8;
            lVar10 = 0x1f;
            do {
              puVar2 = puVar8 + 0x20;
              *puVar8 = puVar2;
              lVar10 = lVar10 + -1;
              puVar8 = puVar2;
            } while (lVar10 != 0);
            *puVar2 = 0;
          }
          plVar11 = (longlong *)plVar7[1];
          iVar9 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar9 = 0x20;
          plVar7[1] = (longlong)plVar11;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar9 = (int)plVar7[2];
      }
      plVar7[1] = *plVar11;
      local_res20 = 0;
      *(int *)(plVar7 + 2) = iVar9 + -1;
      *(undefined4 *)(plVar11 + 1) = 0xff;
      *plVar11 = (longlong)&PTR_FUN_143f3edd8;
      uVar5 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      *plVar11 = (longlong)&PTR_FUN_145138eb8;
      *(undefined1 *)(plVar11 + 5) = 0;
      plVar11[6] = 0;
      FUN_142619380(plVar11 + 2,param_1,param_1 + 0x68);
      lVar10 = plVar11[6];
      piVar1 = (int *)(lVar10 + 0x48);
      if (lVar10 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      local_res10 = lVar10;
      FUN_14048a160(plVar11,0,0xff,1,uVar5);
      if (lVar10 != 0) {
        LOCK();
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          FGraphEvent::Recycle(local_res10);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    if ((*(int *)(param_1 + 0x74) < 0) && (*(int *)(param_1 + 0x74) != 0)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x68,0);
    }
  }
  return;
}



// FUNCTION 1426360d0 FUN_1426360d0 body=1913 status=ok
// SIG undefined FUN_1426360d0(void)

void FUN_1426360d0(longlong *param_1,float param_2,char param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  int local_res20 [2];
  undefined4 local_c8 [2];
  ulonglong local_c0;
  float local_b8;
  int local_b0;
  float fStack_ac;
  float local_a8;
  ulonglong local_98;
  float local_90;
  
  plVar3 = param_1 + 0x4b;
  iVar13 = 0;
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x264)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (plVar3,0);
  }
  if ((((((DAT_146b047d0 == 0) && (DAT_146b047d4 == 0)) && (DAT_14653431c != 0)) &&
       ((DAT_1464c9c5b != '\0' && (DAT_1464c9c21 != '\0')))) && (DAT_1464ca478 != '\0')) &&
     (((DAT_1464c9c20 != '\0' && (DAT_1464c9c12 != '\0')) && (DAT_1464c9c6c != '\0')))) {
    fVar17 = (float)(**(code **)(*param_1 + 0x28))(param_1);
    *(byte *)(param_1[0x40] + 0x253) = *(byte *)(param_1 + 0x1e) & 1;
    if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
      *(float *)((longlong)param_1 + 0x13c) = fVar17 + *(float *)((longlong)param_1 + 0x13c);
      FUN_1426237c0(param_1);
    }
    else {
      lVar2 = param_1[3];
      if (((lVar2 != 0) && (*(char *)(lVar2 + 0x719) < '\0')) &&
         (fVar18 = *(float *)(lVar2 + 0x788) - *(float *)(param_1 + 0x27),
         *(float *)(param_1[0x3f] + 0x180) <= fVar18 && fVar18 != *(float *)(param_1[0x3f] + 0x180))
         ) {
        param_3 = '\x01';
      }
      uVar14 = 1;
      iVar16 = iVar13;
      iVar15 = iVar13;
      if (0 < (int)param_1[0x46]) {
        do {
          if (*(float *)(param_1 + 0x27) < *(float *)(param_1[0x47] + (longlong)iVar13 * 4)) {
            iVar8 = iVar15 + 1;
          }
          else {
            plVar12 = (longlong *)param_1[0x45];
            if ((longlong *)param_1[0x45] == (longlong *)0x0) {
              plVar12 = param_1 + 0x43;
            }
            puVar1 = (uint *)((longlong)plVar12 + (longlong)iVar16 * 4);
            *puVar1 = *puVar1 & ~uVar14;
            iVar8 = iVar15;
            if ((int)param_1[0x54] == iVar13) {
              *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
              *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
            }
          }
          uVar10 = uVar14 * 2;
          iVar13 = iVar13 + 1;
          iVar15 = iVar16 + 1;
          uVar14 = 1;
          if (uVar10 != 0) {
            iVar15 = iVar16;
            uVar14 = uVar10;
          }
          iVar16 = iVar15;
          iVar15 = iVar8;
        } while (iVar13 < (int)param_1[0x46]);
      }
      local_res20[0] = iVar8;
      (**(code **)(*param_1 + 0x38))(param_1);
      if (((*(uint *)(param_1 + 0x1e) & 0x30) == 0) && (param_3 == '\0')) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((int)param_1[0x56] == 0) || ((int)param_1[0x30] < (int)param_1[0x56])) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((bVar4) ||
          (*(float *)((longlong)param_1 + 0x13c) <= 0.0 &&
           *(float *)((longlong)param_1 + 0x13c) != 0.0)) || (!bVar5)) {
        if ((*(uint *)(param_1 + 0x1e) >> 10 & 1) != 0) {
          FUN_1426237c0(param_1);
        }
      }
      else {
        iVar16 = 0;
        local_c0 = 0;
        local_b8 = 0.0;
        local_res8[0] = param_2;
        (**(code **)(*param_1 + 0x98))(param_1,local_res8,&local_c0);
        iVar13 = (int)param_1[0x50] + (int)local_c0;
        iVar8 = iVar13;
        if (DAT_146534310 < iVar13) {
          iVar16 = iVar13 - DAT_146534310;
          iVar8 = DAT_146534310;
        }
        local_c0 = CONCAT44(local_c0._4_4_,iVar8);
        fVar18 = (float)FUN_1424116d0(*(longlong *)(param_1[5] + 0x50) + 0x78,iVar13,param_1[3],0);
        fVar19 = (float)FUN_1426710e0(*(undefined8 *)(param_1[5] + 0x50));
        fVar20 = (float)FUN_1424116d0(*(longlong *)(param_1[5] + 0x50) + 0x40);
        fVar20 = fVar20 * fVar18 * fVar19;
        plVar12 = *(longlong **)(param_1[0x3f] + 0x10);
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        local_a8 = fVar20;
        if (plVar12 != (longlong *)0x0) {
          local_c8[0] = 0;
          local_res8[0] = 0.0;
          cVar7 = (**(code **)(*plVar12 + 0x380))(plVar12,param_1,0,0,param_2,local_c8,local_res8);
          local_a8 = local_res8[0];
          if (cVar7 != '\0') {
            local_a8 = fVar20 + local_res8[0];
          }
        }
        fVar18 = local_a8 * param_2 + *(float *)((longlong)param_1 + 0x134);
        iVar13 = (int)fVar18;
        iVar8 = DAT_146534310;
        if (iVar13 <= DAT_146534310) {
          iVar8 = iVar13;
        }
        if (local_a8 <= 0.0) {
          local_a8 = 0.0;
        }
        else {
          local_a8 = 1.0 / local_a8;
        }
        lVar2 = param_1[0x4e];
        fStack_ac = (local_a8 * *(float *)((longlong)param_1 + 0x134) + param_2) - local_a8;
        *(float *)((longlong)param_1 + 0x134) = fVar18 - (float)iVar8;
        fVar18 = (float)FUN_1424116d0(param_1[2] + 0x70);
        fVar19 = (float)FUN_1426072c0(param_1[2]);
        lVar6 = param_1[0x4c];
        iVar13 = (int)((float)((int)lVar2 + iVar8) * fVar19 * fVar18);
        iVar8 = (int)((float)(int)local_c0 * fVar19 * fVar18);
        local_c0 = CONCAT44(local_c0._4_4_,iVar8);
        FUN_14262e390(param_1,iVar8 + iVar13 + (int)lVar6);
        uVar9 = FUN_14261e7b0(param_1,plVar3,local_c0 & 0xffffffff,local_res20);
        lVar2 = param_1[0x4c];
        local_c0 = CONCAT44(local_c0._4_4_,uVar9);
        iVar8 = FUN_14261e7b0(param_1,plVar3,iVar13,local_res20);
        *(float *)((longlong)param_1 + 0x134) =
             (float)iVar16 + *(float *)((longlong)param_1 + 0x134);
        local_b0 = iVar8;
        if (0 < (int)local_c0) {
          local_90 = local_b8;
          local_98 = local_c0;
          FUN_14261f150(param_1,*plVar3 + (longlong)(int)lVar6 * 0x48,&local_98,param_1 + 0x4f);
        }
        if (0 < iVar8) {
          local_98 = CONCAT44(fStack_ac,local_b0);
          local_90 = local_a8;
          FUN_14261f150(param_1,*plVar3 + (longlong)(int)lVar2 * 0x48,&local_98,param_1 + 0x4d);
        }
        *(undefined4 *)(param_1 + 0x4e) = 0;
        if ((*(int *)((longlong)param_1 + 0x274) < 0) && (*(int *)((longlong)param_1 + 0x274) != 0))
        {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::
          ResizeTo(param_1 + 0x4d,0);
        }
        *(undefined4 *)(param_1 + 0x50) = 0;
        if ((*(int *)((longlong)param_1 + 0x284) < 0) && (*(int *)((longlong)param_1 + 0x284) != 0))
        {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::
          ResizeTo(param_1 + 0x4f,0);
        }
        lVar2 = param_1[3];
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x719) < '\0')) {
          FUN_142635230(param_1,*plVar3 + (longlong)((int)param_1[0x4c] - ((int)local_c0 + iVar8)) *
                                          0x48,(int)local_c0 + iVar8,
                        *(float *)(lVar2 + 0x788) - *(float *)(param_1 + 0x27));
        }
      }
      FUN_142624f30(param_1);
      plVar3 = (longlong *)param_1[0x3f];
      if (*(longlong *)(*plVar3 + 0x38) != 0) {
        param_1[0x36] = *(longlong *)(*plVar3 + 0x38);
      }
      fVar18 = *(float *)((longlong)plVar3 + 0x8c);
      fVar19 = *(float *)(plVar3 + 0x12);
      *(float *)(param_1 + 0x51) = param_2 * *(float *)(plVar3 + 0x11) + *(float *)(param_1 + 0x51);
      *(float *)((longlong)param_1 + 0x28c) =
           fVar18 * param_2 + *(float *)((longlong)param_1 + 0x28c);
      *(float *)(param_1 + 0x52) = fVar19 * param_2 + *(float *)(param_1 + 0x52);
      lVar2 = param_1[0x3f];
      uVar14 = *(byte *)(lVar2 + 0xf1) - 1;
      fVar18 = (*(float *)((longlong)param_1 + 0x13c) - *(float *)(lVar2 + 0xf8)) *
               *(float *)(lVar2 + 0xf4);
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      uVar11 = (uint)fVar18;
      uVar10 = uVar14;
      if (uVar11 <= uVar14) {
        uVar10 = uVar11;
      }
      if (uVar11 + 1 <= uVar14) {
        uVar14 = uVar11 + 1;
      }
      fVar19 = *(float *)(*(longlong *)(lVar2 + 0x100) +
                         (longlong)(int)(uVar10 * *(byte *)(lVar2 + 0xf2)) * 4);
      *(float *)((longlong)param_1 + 0x294) =
           (*(float *)(*(longlong *)(lVar2 + 0x100) +
                      (longlong)(int)(uVar14 * *(byte *)(lVar2 + 0xf2)) * 4) - fVar19) *
           (fVar18 - (float)(int)fVar18) + fVar19;
      *(int *)(param_1 + 0x25) = local_res20[0] << 4;
      *(float *)(param_1 + 0x53) = param_2;
      *(float *)((longlong)param_1 + 0x13c) = fVar17 + *(float *)((longlong)param_1 + 0x13c);
      (**(code **)(*param_1 + 0x68))(param_1);
      (**(code **)(*param_1 + 0x48))(param_1);
      if (*(char *)(param_1[0x40] + 0x250) != '\0') {
        FUN_14262aac0(param_1[0x40],param_1 + 0x41,*(undefined8 *)(param_1[0x3f] + 0x2b0));
      }
      FUN_142620db0(param_1);
    }
  }
  return;
}



// FUNCTION 142636850 FUN_142636850 body=346 status=ok
// SIG undefined FUN_142636850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142636850(longlong *param_1,undefined4 param_2,undefined1 param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = *(float *)(param_1 + 0x27);
  lVar2 = param_1[5];
  fVar3 = (float)(**(code **)(*param_1 + 0x28))(0,param_2,lVar2);
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    FUN_1426237c0(param_1);
  }
  else {
    (**(code **)(*param_1 + 0xe0))();
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    param_1[0x36] = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x38);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,lVar2);
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,lVar2,param_3,fVar1 <= 0.0);
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar4;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,lVar2);
    if (0 < (int)param_1[0x25]) {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
      (**(code **)(*param_1 + 0x68))(param_1,param_2);
    }
    (**(code **)(*param_1 + 0x48))(param_1,param_2,lVar2);
    FUN_142620db0(param_1);
    *(undefined4 *)((longlong)param_1 + 0x184) = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(float *)((longlong)param_1 + 0x13c) = fVar3 + *(float *)((longlong)param_1 + 0x13c);
  param_1[0x37] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x38) = DAT_1468b5d98;
  return;
}



// FUNCTION 1426369b0 FUN_1426369b0 body=1799 status=ok
// SIG undefined FUN_1426369b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426369b0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  ushort *puVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  int local_res10 [2];
  undefined1 local_res18;
  longlong local_res20;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined4 local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e0;
  float local_d4;
  undefined1 local_c8 [136];
  
  uVar13 = *(uint *)(param_1 + 0x1e);
  puVar12 = (uint *)0x0;
  fVar18 = (float)param_2;
  if ((((uVar13 & 1) != 0) && ((int)param_1[0x40] != 0)) &&
     (puVar14 = puVar12, puVar15 = puVar12, 0 < (int)param_1[0x25])) {
    do {
      lVar11 = (longlong)
               (int)((uint)*(ushort *)((longlong)puVar15 + param_1[0x21]) *
                    *(int *)((longlong)param_1 + 0x124)) + param_1[0x20];
      iVar4 = *(int *)((longlong)param_1 + 0x1fc);
      puVar9 = (undefined8 *)((int)param_1[0x40] + lVar11);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(lVar11 + 0x38);
      *puVar9 = *(undefined8 *)(lVar11 + 0x3c);
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(lVar11 + 0x44);
      *(undefined8 *)((longlong)puVar9 + 0xc) = *(undefined8 *)(lVar11 + 0x5c);
      *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)(lVar11 + 100);
      puVar9[3] = *(undefined8 *)((longlong)iVar4 + 0x18 + lVar11);
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)((longlong)iVar4 + 0x20 + lVar11);
      if (*(int *)((longlong)param_1 + 0x4c) == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x4c) + 4 + lVar11);
      }
      *(undefined4 *)((longlong)puVar9 + 0x34) = uVar17;
      iVar4 = (int)param_1[9];
      if (iVar4 == 0) {
        *(longlong *)((longlong)puVar9 + 0x24) = _DAT_1468b5d90;
        uVar17 = DAT_1468b5d98;
      }
      else {
        *(undefined8 *)((longlong)puVar9 + 0x24) = *(undefined8 *)((longlong)iVar4 + 0xc + lVar11);
        uVar17 = *(undefined4 *)((longlong)iVar4 + 0x14 + lVar11);
      }
      uVar13 = (int)puVar14 + 1;
      *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar17;
      puVar14 = (uint *)(ulonglong)uVar13;
      puVar15 = (uint *)((longlong)puVar15 + 2);
    } while ((int)uVar13 < (int)param_1[0x25]);
    uVar13 = *(uint *)(param_1 + 0x1e);
  }
  lVar11 = param_1[5];
  local_res18 = param_3;
  local_res20 = lVar11;
  if ((((char)param_1[0x3f] != '\0') && ((uVar13 & 1) != 0)) &&
     (puVar14 = puVar12, puVar15 = puVar12, 0 < (int)param_1[0x25])) {
    do {
      iVar4 = *(int *)((longlong)param_1 + 0x1fc);
      pfVar10 = (float *)((longlong)
                          (int)((uint)*(ushort *)(param_1[0x21] + (longlong)puVar15) *
                               *(int *)((longlong)param_1 + 0x124)) + param_1[0x20]);
      *(undefined8 *)((longlong)pfVar10 + (longlong)iVar4 + 0x30) =
           *(undefined8 *)((longlong)pfVar10 + (longlong)iVar4 + 0x3c);
      *(undefined4 *)((longlong)pfVar10 + (longlong)iVar4 + 0x38) =
           *(undefined4 *)((longlong)pfVar10 + (longlong)iVar4 + 0x44);
      cVar3 = *(char *)(*(longlong *)(lVar11 + 0x30) + 0x58);
      if ((byte)(cVar3 - 3U) < 2) {
        local_118 = *(undefined8 *)(pfVar10 + 0xf);
        local_110 = pfVar10[0x11];
        if (cVar3 == '\x03') {
          if (((*(byte *)(*(longlong *)(lVar11 + 0x30) + 0x144) & 1) == 0) ||
             (*(int *)(lVar11 + 0x98) < 1)) {
LAB_142636d21:
            fVar22 = local_118._4_4_;
            goto LAB_142636d27;
          }
          plVar1 = (longlong *)(param_1[2] + 0xb8);
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(plVar1,local_res10,
                   *(undefined8 *)
                    (*(longlong *)(**(longlong **)(param_1[2] + 0x40) + 0x90) + -8 +
                    (longlong)*(int *)(lVar11 + 0x98) * 8));
          puVar7 = puVar12;
          if (local_res10[0] != -1) {
            puVar7 = (uint *)(*plVar1 + (longlong)local_res10[0] * 0x18);
          }
          puVar6 = puVar7 + 2;
          if (puVar7 == (uint *)0x0) {
            puVar6 = puVar12;
          }
          uVar8 = (ulonglong)*puVar6;
          if (*puVar6 == 0) goto LAB_142636d21;
          fVar16 = (*(float *)((longlong)pfVar10 + uVar8 + 0xc) + pfVar10[4]) -
                   (*pfVar10 + *(float *)((longlong)pfVar10 + uVar8 + 0x3c));
          fVar22 = (*(float *)((longlong)pfVar10 + uVar8 + 0x10) + pfVar10[5]) -
                   (*(float *)((longlong)pfVar10 + uVar8 + 0x40) + pfVar10[1]);
          local_118 = CONCAT44(fVar22,fVar16);
          local_110 = (*(float *)((longlong)pfVar10 + uVar8 + 0x14) + pfVar10[6]) -
                      (*(float *)((longlong)pfVar10 + uVar8 + 0x44) + pfVar10[2]);
        }
        else {
          if (cVar3 != '\x04') goto LAB_142636d21;
          local_118 = *(undefined8 *)(pfVar10 + 4);
          local_110 = pfVar10[6];
          fVar22 = (float)((ulonglong)local_118 >> 0x20);
LAB_142636d27:
          fVar16 = (float)local_118;
        }
        fVar19 = fVar22 * fVar22 + fVar16 * fVar16 + local_110 * local_110;
        if (1e-08 < fVar19) {
          auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
          fVar20 = auVar21._0_4_;
          fVar20 = fVar20 + fVar20 * (0.5 - fVar19 * 0.5 * fVar20 * fVar20);
          fVar20 = fVar20 + fVar20 * (0.5 - fVar19 * 0.5 * fVar20 * fVar20);
          local_110 = local_110 * fVar20;
          local_118 = CONCAT44(fVar22 * fVar20,fVar16 * fVar20);
        }
        local_108 = 0x3f800000;
        local_100 = 0;
        FQuat::FindBetweenNormals(local_c8,&local_108,&local_118);
        FQuat::Euler(local_c8,&local_f8);
        local_d4 = local_f0 + *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x14);
        *(ulonglong *)((longlong)pfVar10 + (longlong)iVar4 + 0x18) =
             CONCAT44(local_f4 + *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x10),
                      local_f8 + *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0xc));
        *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x20) = local_d4;
        *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x18) =
             *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x18) +
             *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x24);
        *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x1c) =
             *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x28) +
             *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x1c);
        *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x20) =
             *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x2c) +
             *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x20);
        lVar11 = local_res20;
      }
      else if (((uint)pfVar10[0x1a] & 0x20000000) == 0) {
        local_e0 = *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x2c) +
                   *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x14);
        *(ulonglong *)((longlong)pfVar10 + (longlong)iVar4 + 0x18) =
             CONCAT44(*(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x28) +
                      *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x10),
                      *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0xc) +
                      *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x24));
        *(float *)((longlong)pfVar10 + (longlong)iVar4 + 0x20) = local_e0;
      }
      uVar13 = (int)puVar14 + 1;
      puVar14 = (uint *)(ulonglong)uVar13;
      puVar15 = (uint *)((longlong)puVar15 + 2);
    } while ((int)uVar13 < (int)param_1[0x25]);
  }
  uVar5 = local_res18;
  fVar22 = *(float *)(param_1 + 0x27);
  lVar11 = param_1[5];
  fVar16 = (float)(**(code **)(*param_1 + 0x28))(param_1,param_2,lVar11);
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    FUN_1426237c0(param_1);
  }
  else {
    (**(code **)(*param_1 + 0xe0))();
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    param_1[0x36] = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x38);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,lVar11);
    uVar17 = (**(code **)(*param_1 + 0x30))(param_1,param_2,lVar11,uVar5,fVar22 <= 0.0);
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar17;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,lVar11);
    if (0 < (int)param_1[0x25]) {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
      (**(code **)(*param_1 + 0x68))(param_1,param_2);
    }
    (**(code **)(*param_1 + 0x48))(param_1,param_2,lVar11);
    FUN_142620db0(param_1);
    *(undefined4 *)((longlong)param_1 + 0x184) = 1;
  }
  *(float *)(param_1 + 0x28) = fVar18;
  *(float *)((longlong)param_1 + 0x13c) = fVar16 + *(float *)((longlong)param_1 + 0x13c);
  param_1[0x37] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x38) = DAT_1468b5d98;
  if ((((char)param_1[0x3f] != '\0') && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) &&
     (puVar14 = puVar12, 0 < (int)param_1[0x25])) {
    do {
      uVar13 = (int)puVar14 + 1;
      puVar2 = (ushort *)((longlong)puVar12 + param_1[0x21]);
      puVar12 = (uint *)((longlong)puVar12 + 2);
      lVar11 = (longlong)(int)((uint)*puVar2 * *(int *)((longlong)param_1 + 0x124)) +
               (longlong)*(int *)((longlong)param_1 + 0x1fc) + param_1[0x20];
      *(float *)(lVar11 + 0x24) = fVar18 * *(float *)(lVar11 + 0x30) + *(float *)(lVar11 + 0x24);
      *(float *)(lVar11 + 0x28) = *(float *)(lVar11 + 0x34) * fVar18 + *(float *)(lVar11 + 0x28);
      *(float *)(lVar11 + 0x2c) = *(float *)(lVar11 + 0x38) * fVar18 + *(float *)(lVar11 + 0x2c);
      puVar14 = (uint *)(ulonglong)uVar13;
    } while ((int)uVar13 < (int)param_1[0x25]);
  }
  return;
}



// FUNCTION 1426370c0 FUN_1426370c0 body=241 status=ok
// SIG undefined FUN_1426370c0(void)

void FUN_1426370c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  int local_res8 [2];
  
  puVar8 = (uint *)0x0;
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 200);
  uVar3 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x28) + 0xd0);
  puVar9 = (uint *)(uVar3 & 0x1fffffffffffffff);
  if (plVar7 + uVar3 < plVar7) {
    puVar9 = puVar8;
  }
  puVar6 = puVar8;
  if (puVar9 != (uint *)0x0) {
    do {
      plVar1 = (longlong *)*plVar7;
      if ((*(byte *)(plVar1 + 5) & 0x80) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x10);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar2 + 0xb8,local_res8,plVar1);
        puVar5 = puVar8;
        if (local_res8[0] != -1) {
          puVar5 = (uint *)(*(longlong *)(lVar2 + 0xb8) + (longlong)local_res8[0] * 0x18);
        }
        puVar4 = puVar5 + 2;
        if (puVar5 == (uint *)0x0) {
          puVar4 = puVar8;
        }
        puVar5 = puVar8;
        if (puVar4 != (uint *)0x0) {
          puVar5 = (uint *)(ulonglong)*puVar4;
        }
        (**(code **)(*plVar1 + 0x378))(plVar1,param_1,puVar5,param_2);
      }
      plVar7 = plVar7 + 1;
      puVar6 = (uint *)((longlong)puVar6 + 1);
    } while (puVar6 != puVar9);
  }
  return;
}



// FUNCTION 1426371c0 FUN_1426371c0 body=727 status=ok
// SIG undefined FUN_1426371c0(void)

void FUN_1426371c0(longlong *param_1,float param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = param_1[3];
  if ((*(byte *)(lVar2 + 0x719) & 2) == 0) {
    *(undefined8 *)((longlong)param_1 + 0x144) = *(undefined8 *)((longlong)param_1 + 0x5c);
    *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_1 + 100);
    uVar1 = SUB164(*(undefined1 (*) [16])(lVar2 + 0x220),8);
    uVar7 = SUB168(*(undefined1 (*) [16])(lVar2 + 0x220),0);
  }
  else {
    uVar1 = SUB164(*(undefined1 (*) [16])(lVar2 + 0x220),8);
    uVar7 = SUB168(*(undefined1 (*) [16])(lVar2 + 0x220),0);
    *(undefined8 *)((longlong)param_1 + 0x144) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x14c) = uVar1;
  }
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar7;
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  plVar3 = param_1;
  FUN_14263ab70();
  fVar9 = *(float *)(param_1 + 0x31);
  fVar8 = param_2 + *(float *)(param_1 + 0x27);
  uVar4 = (ulonglong)plVar3 & 0xffffffffffffff00;
  *(float *)(param_1 + 0x27) = fVar8;
  if ((*(byte *)(*(longlong *)(param_3 + 0x30) + 0x6c) & 1) == 0) {
    param_2 = param_2 + *(float *)((longlong)param_1 + 0x13c);
    *(float *)((longlong)param_1 + 0x13c) = param_2;
    if ((fVar9 <= 0.0) || (param_2 < fVar9)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    *(float *)((longlong)param_1 + 0x13c) = fVar8;
    param_2 = fVar8;
    if (0.0001 < fVar9) {
      if (1e-08 < ABS(fVar9)) {
        param_2 = (float)(int)(fVar8 / fVar9) * fVar9;
        if (ABS(fVar8) < ABS(param_2)) {
          param_2 = fVar8;
        }
        param_2 = fVar8 - param_2;
      }
      else {
        AK::MemoryMgr::StartProfileThreadUsage((long)uVar4);
        fVar9 = *(float *)(param_1 + 0x31);
        param_2 = 0.0;
        fVar8 = *(float *)(param_1 + 0x27);
      }
      *(float *)((longlong)param_1 + 0x13c) = param_2;
      uVar4 = (ulonglong)(fVar9 <= fVar8 - (float)(int)param_1[0x30] * fVar9);
    }
  }
  fVar9 = *(float *)(param_1 + 0x34);
  if ((char)uVar4 != '\0') {
    *(int *)(param_1 + 0x30) = (int)param_1[0x30] + 1;
    if ((*(byte *)(*(longlong *)(param_1[5] + 0x50) + 0x100) & 1) == 0) {
      (**(code **)(*param_1 + 0x90))(param_1);
      param_2 = *(float *)((longlong)param_1 + 0x13c);
    }
    lVar2 = *(longlong *)(param_3 + 0x30);
    if ((*(byte *)(lVar2 + 0x6c) & 1) == 0) {
      *(float *)((longlong)param_1 + 0x13c) = param_2 - *(float *)(param_1 + 0x31);
      lVar2 = *(longlong *)(param_3 + 0x30);
    }
    if (((*(byte *)(lVar2 + 0x78) & 2) != 0) ||
       (((*(byte *)(lVar2 + 0xd8) & 2) != 0 && ((int)param_1[0x30] == 1)))) {
      FUN_1426327b0(param_1);
    }
    if (((*(byte *)(param_1 + 0x1e) & 0x40) != 0) && (iVar6 = -3, -3 < *(int *)(param_3 + 0x40))) {
      do {
        if (iVar6 == -3) {
          iVar5 = -3;
        }
        else if (iVar6 == -2) {
          iVar5 = -4;
        }
        else {
          iVar5 = -2;
          if (iVar6 != -1) {
            iVar5 = iVar6;
          }
        }
        plVar3 = (longlong *)UParticleLODLevel::GetModuleAtIndex(param_3,iVar5);
        if ((plVar3 != (longlong *)0x0) && ((*(uint *)(plVar3 + 5) >> 0xb & 1) != 0)) {
          (**(code **)(*plVar3 + 0x310))(plVar3,param_1);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_3 + 0x40));
    }
  }
  if (((*(byte *)(*(longlong *)(param_3 + 0x30) + 0xd8) & 2) != 0) && (0 < (int)param_1[0x30])) {
    fVar9 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x13c) = *(float *)((longlong)param_1 + 0x13c) - fVar9;
  return;
}



// FUNCTION 1426374a0 FUN_1426374a0 body=243 status=ok
// SIG undefined FUN_1426374a0(void)

void FUN_1426374a0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if ((((*(longlong *)(param_1 + 0x28) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30), lVar1 != 0)) &&
      (lVar2 = *(longlong *)(param_1 + 0x18), lVar2 != 0)) &&
     ((lVar3 = *(longlong *)(lVar2 + 0x6f0), lVar3 != 0 && (0 < *(int *)(lVar1 + 0x158))))) {
    iVar5 = 0;
    if (0 < *(int *)(lVar3 + 0x130)) {
      lVar6 = 0;
      plVar4 = *(longlong **)(lVar3 + 0x128);
      do {
        if (**(longlong **)(lVar1 + 0x150) == *plVar4) {
          *(longlong *)(param_1 + 0x1b0) = (*(longlong **)(lVar3 + 0x128))[(longlong)iVar5 * 2 + 1];
          if (iVar5 < 0) {
            return;
          }
          if (*(int *)(lVar2 + 0x988) <= iVar5) {
            return;
          }
          lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x980) + (longlong)iVar5 * 8);
          if (lVar1 == 0) {
            return;
          }
          *(longlong *)(param_1 + 0x1b0) = lVar1;
          return;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 1;
        plVar4 = plVar4 + 2;
      } while (lVar6 < *(int *)(lVar3 + 0x130));
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (((lVar1 != 0) && (-1 < param_2)) &&
     ((param_2 < *(int *)(lVar1 + 0x700) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x6f8) + (longlong)param_2 * 8), lVar1 != 0)))) {
    *(longlong *)(param_1 + 0x1b0) = lVar1;
  }
  return;
}



// FUNCTION 1426375a0 FUN_1426375a0 body=531 status=ok
// SIG undefined FUN_1426375a0(void)

void FUN_1426375a0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar15 = 0;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if ((((lVar4 != 0) && (-1 < param_2)) && (param_2 < *(int *)(lVar4 + 0x700))) &&
     (*(longlong *)((longlong)param_2 * 8 + *(longlong *)(lVar4 + 0x6f8)) != 0)) {
    if (*(int *)(param_1 + 0x218) == 0) {
      TArray<UMaterialInterface_*,FDefaultAllocator>::AddZeroed(param_1 + 0x210,1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x210);
    uVar12 = (longlong)*(int *)(param_1 + 0x218) & 0x1fffffffffffffff;
    if (puVar9 + *(int *)(param_1 + 0x218) < puVar9) {
      uVar12 = uVar15;
    }
    uVar13 = uVar15;
    if (uVar12 != 0) {
      do {
        uVar13 = uVar13 + 1;
        *puVar9 = *(undefined8 *)
                   ((longlong)param_2 * 8 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x6f8));
        puVar9 = puVar9 + 1;
      } while (uVar13 != uVar12);
    }
  }
  if (((*(longlong *)(param_1 + 0x28) != 0) &&
      (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30), lVar4 != 0)) &&
     ((lVar5 = *(longlong *)(param_1 + 0x18), lVar5 != 0 &&
      ((lVar6 = *(longlong *)(lVar5 + 0x6f0), lVar6 != 0 &&
       (iVar2 = *(int *)(lVar4 + 0x158), 0 < iVar2)))))) {
    plVar1 = (longlong *)(param_1 + 0x210);
    iVar3 = *(int *)(param_1 + 0x218);
    if (iVar3 < iVar2) {
      *(int *)(param_1 + 0x218) = iVar2;
      if (*(int *)(param_1 + 0x21c) < iVar2) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar1 + (longlong)iVar3 * 8),0,(longlong)(iVar2 - iVar3) << 3);
    }
    else if ((iVar2 < iVar3) && (iVar2 != iVar3)) {
      *(int *)(param_1 + 0x218) = iVar2;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
    }
    uVar12 = uVar15;
    uVar13 = uVar15;
    if (0 < *(int *)(lVar4 + 0x158)) {
      do {
        if (0 < *(int *)(lVar6 + 0x130)) {
          plVar8 = *(longlong **)(lVar6 + 0x128);
          uVar10 = uVar15;
          uVar14 = uVar15;
          do {
            if (*(longlong *)(uVar13 + *(longlong *)(lVar4 + 0x150)) == *plVar8) {
              *(longlong *)(uVar13 + *plVar1) = (*(longlong **)(lVar6 + 0x128))[uVar10 * 2 + 1];
              if (((-1 < (longlong)uVar10) && ((int)uVar14 < *(int *)(lVar5 + 0x988))) &&
                 (lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x980) + uVar10 * 8), lVar7 != 0)) {
                *(longlong *)(uVar13 + *plVar1) = lVar7;
              }
              break;
            }
            uVar14 = (ulonglong)((int)uVar14 + 1);
            uVar10 = uVar10 + 1;
            plVar8 = plVar8 + 2;
          } while ((longlong)uVar10 < (longlong)*(int *)(lVar6 + 0x130));
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar13 = uVar13 + 8;
      } while ((int)uVar11 < *(int *)(lVar4 + 0x158));
    }
  }
  return;
}



// FUNCTION 1426377c0 FUN_1426377c0 body=199 status=ok
// SIG undefined FUN_1426377c0(void)

void FUN_1426377c0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
  if (0 < *(int *)(param_3 + 0x88)) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_3 + 0x80));
      if ((plVar2 != (longlong *)0x0) && (((byte)(int)plVar2[5] & 0x8c) == 0x8c)) {
        lVar3 = *plVar2;
        uVar4 = FUN_1426279f0(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + lVar6));
        (**(code **)(lVar3 + 0x290))(plVar2,param_1,uVar4,param_2);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_3 + 0x88));
  }
  return;
}



// FUNCTION 142637890 FUN_142637890 body=380 status=ok
// SIG undefined FUN_142637890(void)

void FUN_142637890(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int local_res8 [2];
  
  puVar9 = (uint *)0x0;
  uVar8 = 0;
  lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
  puVar7 = puVar9;
  puVar5 = puVar9;
  if (0 < *(int *)(param_3 + 0x88)) {
    do {
      plVar2 = *(longlong **)((longlong)puVar5 + *(longlong *)(param_3 + 0x80));
      if ((plVar2 != (longlong *)0x0) && (((byte)(int)plVar2[5] & 0x84) == 0x84)) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar3 + 0xb8,local_res8,
                 *(undefined8 *)(*(longlong *)(lVar1 + 0x80) + (longlong)puVar5));
        puVar6 = puVar9;
        if (local_res8[0] != -1) {
          puVar6 = (uint *)(*(longlong *)(lVar3 + 0xb8) + (longlong)local_res8[0] * 0x18);
        }
        puVar4 = puVar6 + 2;
        if (puVar6 == (uint *)0x0) {
          puVar4 = puVar9;
        }
        puVar6 = puVar9;
        if (puVar4 != (uint *)0x0) {
          puVar6 = (uint *)(ulonglong)*puVar4;
        }
        (**(code **)(*plVar2 + 0x290))(plVar2,param_1,puVar6,param_2);
      }
      uVar10 = (int)puVar7 + 1;
      puVar7 = (uint *)(ulonglong)uVar10;
      puVar5 = puVar5 + 2;
    } while ((int)uVar10 < *(int *)(param_3 + 0x88));
  }
  plVar2 = *(longlong **)(param_3 + 0x48);
  if ((plVar2 != (longlong *)0x0) && (((byte)(int)plVar2[5] & 0x84) == 0x84)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0xb8,local_res8,*(undefined8 *)(lVar1 + 0x48));
    puVar7 = puVar9;
    if (local_res8[0] != -1) {
      puVar7 = (uint *)(*(longlong *)(lVar3 + 0xb8) + (longlong)local_res8[0] * 0x18);
    }
    puVar5 = puVar7 + 2;
    if (puVar7 == (uint *)0x0) {
      puVar5 = puVar9;
    }
    if (puVar5 != (uint *)0x0) {
      uVar8 = *puVar5;
    }
    (**(code **)(*plVar2 + 0x290))(plVar2,param_1,uVar8,param_2);
  }
  return;
}



// FUNCTION 142637a10 Tick_ModulePostUpdate body=30 status=ok
// SIG undefined Tick_ModulePostUpdate(void)

void FParticleEmitterInstance::Tick_ModulePostUpdate
               (longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_3 + 0x48);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142637a26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x288))(plVar1,param_1,*(undefined4 *)(param_1 + 0x30),param_2);
    return;
  }
  return;
}



// FUNCTION 142637a30 FUN_142637a30 body=199 status=ok
// SIG undefined FUN_142637a30(void)

void FUN_142637a30(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
  if (0 < *(int *)(param_3 + 0x88)) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar6 + *(longlong *)(param_3 + 0x80));
      if ((plVar2 != (longlong *)0x0) && (((byte)(int)plVar2[5] & 0x8a) == 0x8a)) {
        lVar3 = *plVar2;
        uVar4 = FUN_1426279f0(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + lVar6));
        (**(code **)(lVar3 + 0x288))(plVar2,param_1,uVar4,param_2);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_3 + 0x88));
  }
  return;
}



// FUNCTION 142637b00 FUN_142637b00 body=265 status=ok
// SIG undefined FUN_142637b00(void)

void FUN_142637b00(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int local_res8 [2];
  
  puVar9 = (uint *)0x0;
  lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
  puVar7 = puVar9;
  puVar8 = puVar9;
  if (0 < *(int *)(param_3 + 0x88)) {
    do {
      plVar2 = *(longlong **)((longlong)puVar8 + *(longlong *)(param_3 + 0x80));
      if ((plVar2 != (longlong *)0x0) && (((byte)(int)plVar2[5] & 0x82) == 0x82)) {
        lVar3 = *(longlong *)(param_1 + 0x10);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar3 + 0xb8,local_res8,
                 *(undefined8 *)(*(longlong *)(lVar1 + 0x80) + (longlong)puVar8));
        puVar5 = puVar9;
        if (local_res8[0] != -1) {
          puVar5 = (uint *)(*(longlong *)(lVar3 + 0xb8) + (longlong)local_res8[0] * 0x18);
        }
        puVar4 = puVar5 + 2;
        if (puVar5 == (uint *)0x0) {
          puVar4 = puVar9;
        }
        puVar5 = puVar9;
        if (puVar4 != (uint *)0x0) {
          puVar5 = (uint *)(ulonglong)*puVar4;
        }
        (**(code **)(*plVar2 + 0x288))(plVar2,param_1,puVar5,param_2);
      }
      uVar6 = (int)puVar7 + 1;
      puVar7 = (uint *)(ulonglong)uVar6;
      puVar8 = puVar8 + 2;
    } while ((int)uVar6 < *(int *)(param_3 + 0x88));
  }
  return;
}



// FUNCTION 142637c10 FUN_142637c10 body=151 status=ok
// SIG undefined FUN_142637c10(void)

void FUN_142637c10(longlong *param_1,undefined8 param_2,longlong param_3,char param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(uint *)(param_1 + 0x1e) & 0x30) != 0) || (param_4 != '\0')) ||
     (*(float *)((longlong)param_1 + 0x13c) <= 0.0 && *(float *)((longlong)param_1 + 0x13c) != 0.0))
  {
    if ((*(uint *)(param_1 + 0x1e) >> 10 & 1) == 0) {
      return;
    }
    FUN_1426237c0();
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_3 + 0x30) + 0x7c);
    if (((iVar1 == 0) || ((int)param_1[0x30] < iVar1)) ||
       ((*(float *)(param_1 + 0x27) <= (float)iVar1 * *(float *)(param_1 + 0x31) &&
         (float)iVar1 * *(float *)(param_1 + 0x31) != *(float *)(param_1 + 0x27) ||
        (param_5 != '\0')))) {
      uVar2 = (**(code **)(*param_1 + 0xb8))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar2;
      return;
    }
  }
  return;
}



// FUNCTION 142637cb0 FUN_142637cb0 body=1874 status=ok
// SIG undefined FUN_142637cb0(void)

void FUN_142637cb0(longlong param_1,longlong *param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_168;
  float local_160;
  undefined1 local_138 [8];
  uint local_130;
  float local_124;
  float local_118;
  float local_10c;
  float local_100;
  float local_f4;
  undefined1 local_f0 [12];
  undefined1 local_e4 [172];
  
  lVar7 = FUN_142627a50(param_2,param_1);
  lVar4 = param_2[3];
  iVar6 = (**(code **)(*param_2 + 0x228))(param_2);
  if ((iVar6 == 4) && (1 < (int)param_2[0x25])) {
    iVar16 = 0;
    lVar17 = *(longlong *)(param_1 + 0x50);
    lVar13 = (longlong)*(int *)(param_1 + 0x58) * 0x50 + lVar17;
    local_168 = 0;
    fVar22 = 0.0;
    local_160 = 0.0;
    iVar6 = iVar16;
    for (; lVar17 != lVar13; lVar17 = lVar17 + 0x50) {
      if (*(longlong *)(lVar17 + 0x48) != 0) {
        lVar8 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
        lVar18 = *(longlong *)(*(longlong *)(lVar17 + 0x48) + 0x10);
        if ((*(int *)(lVar18 + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar18 + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar18 = *(longlong *)(lVar7 + 0x178);
          puVar9 = (undefined8 *)
                   FUN_1424118e0(lVar17,local_138,*(undefined4 *)((longlong)param_2 + 0x13c),
                                 param_2[3],0,0);
          *(undefined8 *)(lVar18 + (longlong)iVar6 * 0xc) = *puVar9;
          *(undefined4 *)(lVar18 + 8 + (longlong)iVar6 * 0xc) = *(undefined4 *)(puVar9 + 1);
        }
      }
      iVar6 = iVar6 + 1;
    }
    lVar17 = param_2[0x20];
    iVar15 = (int)param_2[0x25] + -1;
    lVar13 = param_2[0x21];
    iVar6 = *(int *)((longlong)param_2 + 0x124);
    lVar18 = (longlong)iVar15;
    if (-1 < iVar15) {
      do {
        puVar9 = (undefined8 *)
                 ((ulonglong)((uint)*(ushort *)(lVar13 + lVar18 * 2) * iVar6) + lVar17);
        if ((*(uint *)(puVar9 + 0xd) & 0x4000000) == 0) {
          bVar5 = ABS(*(float *)((longlong)puVar9 + 0xc) - (param_4 + param_4)) <= 1e-08;
          if ((*(char *)(param_1 + 0x43) == '\0') || (bVar5)) {
            cVar3 = *(char *)(param_1 + 0x41);
            fVar21 = (float)iVar16 / (float)((int)param_2[0x25] + -1);
            if (cVar3 == '\0') {
              fVar20 = (*(float *)(lVar7 + 0x88) - *(float *)(lVar7 + 0x40)) * fVar21 +
                       *(float *)(lVar7 + 0x40);
              puVar9[2] = CONCAT44((*(float *)(lVar7 + 0x84) - *(float *)(lVar7 + 0x3c)) * fVar21 +
                                   *(float *)(lVar7 + 0x3c),
                                   (*(float *)(lVar7 + 0x80) - *(float *)(lVar7 + 0x38)) * fVar21 +
                                   *(float *)(lVar7 + 0x38));
              local_124 = fVar20;
LAB_14263800e:
              *(float *)(puVar9 + 3) = fVar20;
            }
            else {
              if (cVar3 == '\x01') {
                puVar10 = (undefined8 *)FUN_14261ff20(param_1,local_e4,param_2,fVar21);
                puVar9[2] = *puVar10;
                fVar20 = *(float *)(puVar10 + 1);
                goto LAB_14263800e;
              }
              if (cVar3 == '\x02') {
                puVar10 = (undefined8 *)FUN_142620740(param_1,local_f0,param_2,fVar21);
                puVar9[2] = *puVar10;
                fVar20 = *(float *)(puVar10 + 1);
                goto LAB_14263800e;
              }
            }
            puVar9[4] = puVar9[2];
            *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(puVar9 + 3);
            if (bVar5) {
              *puVar9 = puVar9[2];
              *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + 3);
            }
            puVar14 = (uint *)((longlong)(int)param_2[6] + (longlong)puVar9);
            uVar11 = *puVar14;
            if (((uVar11 & 0xf0000000) != 0x40000000) || ((uVar11 & 0x3fff) != 0x3fff)) {
              uVar11 = uVar11 & 0xfffffff;
              if (lVar18 == 0) {
                uVar11 = uVar11 | 0x80000000;
                *puVar14 = uVar11;
                *puVar14 = ((uint)*(ushort *)(lVar13 + 2) << 0xe ^ uVar11) & 0xfffc000 ^ uVar11 |
                           0x3fff;
                lVar8 = (ulonglong)((uint)*(ushort *)(lVar13 + 2) * iVar6) + lVar17;
                fVar20 = 1.0 / (*(float *)((longlong)(int)param_2[6] + 0xc + lVar8) -
                               (float)puVar14[3]);
                local_118 = fVar20 * (*(float *)(lVar8 + 0x18) - *(float *)(puVar9 + 3));
                *(ulonglong *)(puVar14 + 10) =
                     CONCAT44(fVar20 * (*(float *)(lVar8 + 0x14) -
                                       *(float *)((longlong)puVar9 + 0x14)),
                              fVar20 * (*(float *)(lVar8 + 0x10) - *(float *)(puVar9 + 2)));
                puVar14[0xc] = (uint)local_118;
                local_168 = *(undefined8 *)(lVar8 + 0x10);
                local_160 = *(float *)(lVar8 + 0x18);
              }
              else if (iVar15 == (int)param_2[0x25] + -1) {
                uVar11 = uVar11 | 0x4fffc000;
                *puVar14 = uVar11;
                *puVar14 = (*(ushort *)(lVar13 + -2 + lVar18 * 2) ^ uVar11) & 0x3fff ^ uVar11;
                lVar8 = (ulonglong)((uint)*(ushort *)(lVar13 + -2 + lVar18 * 2) * iVar6) + lVar17;
                fVar20 = 1.0 / ((float)puVar14[3] -
                               *(float *)((longlong)(int)param_2[6] + 0xc + lVar8));
                local_10c = fVar20 * (*(float *)(puVar9 + 3) - *(float *)(lVar8 + 0x18));
                *(ulonglong *)(puVar14 + 10) =
                     CONCAT44(fVar20 * (*(float *)((longlong)puVar9 + 0x14) -
                                       *(float *)(lVar8 + 0x14)),
                              fVar20 * (*(float *)(puVar9 + 2) - *(float *)(lVar8 + 0x10)));
                puVar14[0xc] = (uint)local_10c;
                local_168 = puVar9[2];
                local_160 = *(float *)(puVar9 + 3);
              }
              else {
                uVar11 = uVar11 | 0x20000000;
                *puVar14 = uVar11;
                uVar11 = (*(ushort *)(lVar13 + -2 + lVar18 * 2) ^ uVar11) & 0x3fff ^ uVar11;
                *puVar14 = uVar11;
                *puVar14 = ((uint)*(ushort *)(lVar13 + 2 + lVar18 * 2) << 0xe ^ uVar11) & 0xfffc000
                           ^ uVar11;
                lVar12 = (ulonglong)((uint)*(ushort *)(lVar13 + 2 + lVar18 * 2) * iVar6) + lVar17;
                lVar8 = (ulonglong)((uint)*(ushort *)(lVar13 + -2 + lVar18 * 2) * iVar6) + lVar17;
                fVar20 = 1.0 / (*(float *)((longlong)(int)param_2[6] + 0xc + lVar12) -
                               *(float *)((longlong)(int)param_2[6] + 0xc + lVar8));
                local_100 = fVar20 * (*(float *)(lVar12 + 0x18) - *(float *)(lVar8 + 0x18));
                *(ulonglong *)(puVar14 + 10) =
                     CONCAT44(fVar20 * (*(float *)(lVar12 + 0x14) - *(float *)(lVar8 + 0x14)),
                              fVar20 * (*(float *)(lVar12 + 0x10) - *(float *)(lVar8 + 0x10)));
                puVar14[0xc] = (uint)local_100;
                local_168 = *(undefined8 *)(lVar12 + 0x10);
                local_160 = *(float *)(lVar12 + 0x18);
              }
            }
            if (0.0 < *(float *)(param_2[0x4d] + 0x58)) {
              fVar20 = *(float *)((longlong)puVar9 + 0x14) - local_168._4_4_;
              fVar22 = fVar22 + SQRT((*(float *)(puVar9 + 2) - (float)local_168) *
                                     (*(float *)(puVar9 + 2) - (float)local_168) + fVar20 * fVar20 +
                                     (*(float *)(puVar9 + 3) - local_160) *
                                     (*(float *)(puVar9 + 3) - local_160));
              puVar14[5] = (uint)(fVar22 / *(float *)(param_2[0x4d] + 0x58));
            }
            if (*(char *)(param_1 + 0x42) != '\0') {
              fVar19 = (float)FUN_1424116d0(param_1 + 0xa0,fVar21,lVar4,0);
              fVar20 = *(float *)((longlong)puVar9 + 0x5c);
              fVar1 = *(float *)(puVar9 + 0xc);
              fVar2 = *(float *)((longlong)puVar9 + 100);
              fVar21 = (float)FUN_1424116d0(param_1 + 0xd8,fVar21,lVar4,0);
              local_f4 = fVar21 * fVar19 * fVar2;
              *(ulonglong *)((longlong)puVar9 + 0x5c) =
                   CONCAT44(fVar21 * fVar19 * fVar1,fVar21 * fVar19 * fVar20);
              *(float *)((longlong)puVar9 + 100) = local_f4;
            }
            if (*(char *)(param_2[0x4d] + 0x4c) == '\x01') {
              local_130 = *(uint *)(param_2 + 0x13);
              *(longlong *)(puVar14 + 0xd) = param_2[0x12];
              puVar14[0xf] = local_130;
            }
          }
          iVar16 = iVar16 + 1;
        }
        iVar15 = iVar15 + -1;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
  }
  return;
}



// FUNCTION 142638410 FUN_142638410 body=1101 status=ok
// SIG undefined FUN_142638410(void)

void FUN_142638410(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_d0;
  float local_cc;
  float local_c8;
  
  if (1 < *(int *)(param_2 + 0x128)) {
    pfVar7 = (float *)FUN_142627a50(param_2,param_1);
    FUN_14263a000(param_1,param_2,param_4);
    iVar11 = 0;
    FUN_1424118e0(param_1 + 0xd8,&local_d0,*(undefined4 *)(param_2 + 0x13c),
                  *(undefined8 *)(param_2 + 0x18),0,0);
    fVar13 = (float)FUN_1424116d0(param_1 + 0x98);
    lVar3 = *(longlong *)(param_2 + 0x100);
    iVar6 = *(int *)(param_2 + 0x128) + -1;
    iVar2 = *(int *)(param_2 + 0x124);
    lVar4 = *(longlong *)(param_2 + 0x108);
    lVar12 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        lVar10 = (ulonglong)((uint)*(ushort *)(lVar4 + lVar12 * 2) * iVar2) + lVar3;
        if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
          iVar6 = (int)(((float)iVar11 / (float)(*(int *)(param_2 + 0x128) + -1)) *
                       (float)(*(int *)(param_1 + 0x3c) + -1));
          if ((0.0 < *(float *)(param_1 + 0x134) || *(float *)(param_1 + 0x134) == 0.0) &&
             ((*(byte *)(param_1 + 0x128) & 1) != 0)) {
            lVar8 = (longlong)iVar6;
            fVar22 = pfVar7[lVar8 * 3 + 0x181] - pfVar7[lVar8 * 3 + 1];
            fVar20 = pfVar7[lVar8 * 3 + 0x182] - pfVar7[lVar8 * 3 + 2];
            fVar21 = pfVar7[lVar8 * 3 + 0x183] - pfVar7[lVar8 * 3 + 3];
            fVar14 = fVar20 * fVar20 + fVar22 * fVar22 + fVar21 * fVar21;
            if (1e-08 < fVar14) {
              auVar19 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
              fVar18 = auVar19._0_4_;
              fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
              fVar18 = fVar18 + fVar18 * (0.5 - fVar14 * 0.5 * fVar18 * fVar18);
              fVar22 = fVar18 * fVar22;
              fVar20 = fVar18 * fVar20;
              fVar21 = fVar18 * fVar21;
            }
            fVar14 = *pfVar7;
            fVar23 = fVar22 * local_d0 * fVar14 + pfVar7[lVar8 * 3 + 1];
            fVar22 = *(float *)(param_1 + 300);
            fVar18 = fVar20 * local_cc * fVar14 + pfVar7[lVar8 * 3 + 2];
            fVar20 = fVar21 * local_c8 * fVar14 + pfVar7[lVar8 * 3 + 3];
            if (((fVar22 <= ABS(fVar23 - pfVar7[lVar8 * 3 + 0x181])) ||
                (fVar22 <= ABS(fVar18 - pfVar7[lVar8 * 3 + 0x182]))) ||
               (fVar22 <= ABS(fVar20 - pfVar7[lVar8 * 3 + 0x183]))) {
              uVar1 = CONCAT44(fVar18,fVar23);
            }
            else {
              uVar1 = *(undefined8 *)(pfVar7 + lVar8 * 3 + 0x181);
              fVar20 = pfVar7[lVar8 * 3 + 0x183];
            }
            *(undefined8 *)(pfVar7 + lVar8 * 3 + 1) = uVar1;
            pfVar7[lVar8 * 3 + 3] = fVar20;
          }
          lVar9 = (longlong)iVar6;
          iVar11 = iVar11 + 1;
          lVar8 = *(longlong *)(param_2 + 0x18);
          fVar22 = pfVar7[lVar9 * 3 + 3];
          fVar20 = pfVar7[lVar9 * 3 + 2];
          fVar14 = pfVar7[lVar9 * 3 + 1];
          fVar21 = *(float *)(lVar8 + 0x210);
          fVar18 = *(float *)(lVar8 + 0x214);
          fVar23 = *(float *)(lVar8 + 0x218);
          fVar5 = *(float *)(lVar8 + 0x21c);
          fVar15 = fVar22 * fVar18 - fVar20 * fVar23;
          fVar16 = fVar14 * fVar23 - fVar22 * fVar21;
          fVar17 = fVar20 * fVar21 - fVar14 * fVar18;
          fVar15 = fVar15 + fVar15;
          fVar16 = fVar16 + fVar16;
          fVar17 = fVar17 + fVar17;
          *(float *)(lVar10 + 0x18) =
               ((fVar16 * fVar21 - fVar15 * fVar18) + fVar5 * fVar17 + fVar22) * fVar13 +
               *(float *)(lVar10 + 0x18);
          *(float *)(lVar10 + 0x10) =
               ((fVar17 * fVar18 - fVar16 * fVar23) + fVar5 * fVar15 + fVar14) * fVar13 +
               *(float *)(lVar10 + 0x10);
          *(float *)(lVar10 + 0x14) =
               ((fVar15 * fVar23 - fVar17 * fVar21) + fVar5 * fVar16 + fVar20) * fVar13 +
               *(float *)(lVar10 + 0x14);
        }
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
  }
  return;
}



// FUNCTION 142638860 FUN_142638860 body=252 status=ok
// SIG undefined FUN_142638860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142638860(longlong param_1)

{
  longlong lVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_24;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = *(undefined8 *)(lVar1 + 0x220);
    local_50 = *(float *)(lVar1 + 0x228);
  }
  local_24 = CONCAT31(local_24._1_3_,1);
  *(float *)(param_1 + 0x150) = (float)local_58 - 1.0;
  *(float *)(param_1 + 0x154) = local_58._4_4_ - 1.0;
  *(float *)(param_1 + 0x158) = local_50 - 1.0;
  *(float *)(param_1 + 0x15c) = (float)local_58 + 1.0;
  *(ulonglong *)(param_1 + 0x160) = CONCAT44(local_50 + 1.0,local_58._4_4_ + 1.0);
  *(undefined4 *)(param_1 + 0x168) = local_24;
  return;
}



// FUNCTION 142638960 FUN_142638960 body=2215 status=ok
// SIG undefined FUN_142638960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142638960(longlong param_1,float param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  byte bVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
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
  float local_res8;
  float local_res18;
  float local_198;
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float fStack_164;
  undefined4 local_140;
  float local_128;
  float fStack_124;
  undefined8 local_118;
  float fStack_110;
  undefined8 local_108;
  float fStack_100;
  undefined8 local_f8;
  float fStack_f0;
  undefined8 local_e8;
  float fStack_e0;
  
  lVar10 = *(longlong *)(param_1 + 0x18);
  if (lVar10 != 0) {
    if (((*(char *)(lVar10 + 0x719) < '\0') || (*(longlong *)(lVar10 + 0x6f0) == 0)) ||
       ((*(byte *)(*(longlong *)(lVar10 + 0x6f0) + 0x98) & 1) != 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar4 = *(undefined8 *)(lVar10 + 0x230);
    lVar10 = *(longlong *)(param_1 + 0x28);
    if (bVar5) {
      *(undefined8 *)(param_1 + 0x15c) = _DAT_1468b5d90;
      uVar7 = DAT_1468b5d98;
      *(undefined4 *)(param_1 + 0x164) = DAT_1468b5d98;
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x158) = uVar7;
      *(undefined1 *)(param_1 + 0x168) = 0;
    }
    uVar16 = 0;
    local_res8 = -0.5;
    local_res18 = -0.5;
    lVar11 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    if ((bVar5) && (uVar17 = *(uint *)(lVar11 + 0x40), uVar15 = uVar16, uVar17 != 0)) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + (longlong)(int)uVar15 * 8);
        if (lVar3 != 0) {
          lVar9 = FUN_1429cbd80();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            local_res8 = *(float *)(lVar3 + 0x38) - 0.5;
            local_res18 = *(float *)(lVar3 + 0x3c) - 0.5;
            break;
          }
        }
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
      } while (uVar14 < uVar17);
    }
    iVar8 = FUN_142627ad0(param_1);
    fVar30 = 1048576.0;
    fVar31 = -1048576.0;
    fVar25 = 1048576.0;
    lVar11 = (longlong)iVar8;
    local_188 = 1048576.0;
    fStack_184 = 1048576.0;
    local_180 = 1048576.0;
    local_178 = -1048576.0;
    fStack_174 = -1048576.0;
    local_170 = -1048576.0;
    bVar13 = *(byte *)(*(longlong *)(lVar10 + 0x30) + 100) & 1;
    if (bVar13 == 0) {
      local_118 = _DAT_1464aa7d0;
      fStack_110 = (float)_DAT_1464aa7d8;
      local_108 = _DAT_1464aa7e0;
      fStack_100 = (float)_DAT_1464aa7e8;
      local_f8 = _DAT_1464aa7f0;
      fStack_f0 = (float)_DAT_1464aa7f8;
      local_e8 = _DAT_1464aa800;
      fStack_e0 = (float)uRam00000001464aa808;
    }
    else {
      lVar10 = *(longlong *)(param_1 + 0x18);
      fVar20 = *(float *)(lVar10 + 0x210);
      fVar27 = *(float *)(lVar10 + 0x214);
      fVar28 = *(float *)(lVar10 + 0x218);
      fVar29 = *(float *)(lVar10 + 0x21c);
      fVar21 = fVar27 + fVar27;
      fVar23 = fVar28 + fVar28;
      fVar24 = fVar20 * (fVar20 + fVar20);
      fVar22 = (fVar20 + fVar20) * fVar29;
      fVar26 = *(float *)(lVar10 + 0x230);
      fVar18 = *(float *)(lVar10 + 0x234);
      fVar19 = *(float *)(lVar10 + 0x238);
      fStack_100 = (fVar22 + fVar23 * fVar27) * fVar18;
      fStack_110 = fVar26 * (fVar23 * fVar20 - fVar21 * fVar29);
      fStack_f0 = (float)((uint)((fRam0000000146b056d8 - (fVar27 * fVar21 + fVar24)) * fVar19) &
                         uRam0000000146b056e8);
      local_e8 = *(undefined8 *)(lVar10 + 0x220);
      fStack_e0 = *(float *)(lVar10 + 0x228);
      local_118 = CONCAT44((fVar23 * fVar29 + fVar21 * fVar20) * fVar26,
                           (uint)((_DAT_146b056d0 - (fVar28 * fVar23 + fVar27 * fVar21)) * fVar26) &
                           _DAT_146b056e0);
      local_108 = CONCAT44((uint)((fRam0000000146b056d4 - (fVar28 * fVar23 + fVar24)) * fVar18) &
                           uRam0000000146b056e4,fVar18 * (fVar21 * fVar20 - fVar23 * fVar29));
      local_f8 = CONCAT44(fVar19 * (fVar23 * fVar27 - fVar22),
                          (fVar21 * fVar29 + fVar23 * fVar20) * fVar19);
    }
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xb0);
    uVar15 = uVar16;
    if (0 < *(int *)(param_1 + 0x128)) {
      do {
        pfVar12 = (float *)((longlong)
                            (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + uVar16) *
                                 *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100));
        fVar20 = pfVar12[0x1a];
        uVar1 = *(undefined8 *)(pfVar12 + 4);
        fVar27 = (float)((ulonglong)uVar1 >> 0x20);
        *(undefined8 *)pfVar12 = uVar1;
        pfVar12[2] = pfVar12[6];
        pfVar12[0x1a] = (float)((uint)fVar20 & 0xfdffffff);
        if ((((uint)fVar20 >> 0x19 & 1) == 0) || ((~bVar2 & 1) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        local_198 = (float)uVar1;
        if ((((uint)fVar20 >> 0x1a & 1) != 0) || (bVar6)) {
          fVar29 = pfVar12[6];
          fVar28 = pfVar12[0xe];
          fVar26 = fVar25;
        }
        else {
          if (((uint)fVar20 >> 0x1c & 1) == 0) {
            fVar28 = pfVar12[0x11];
            lVar10 = (longlong)*(int *)(param_1 + 0x58);
            local_168 = (float)*(undefined8 *)(pfVar12 + 0xf);
            fStack_164 = (float)((ulonglong)*(undefined8 *)(pfVar12 + 0xf) >> 0x20);
            if (*(int *)(param_1 + 0x58) != 0) {
              fVar25 = *(float *)(lVar10 + 0x14 + (longlong)pfVar12);
              fVar27 = *(float *)(lVar10 + 0x18 + (longlong)pfVar12);
              fVar29 = *(float *)(lVar10 + 0x10 + (longlong)pfVar12);
              fVar21 = fVar28 * fVar25 - fStack_164 * fVar27;
              fVar19 = local_168 * fVar27 - fVar28 * fVar29;
              fVar21 = fVar21 + fVar21;
              fVar18 = fStack_164 * fVar29 - local_168 * fVar25;
              fVar19 = fVar19 + fVar19;
              fVar18 = fVar18 + fVar18;
              fVar26 = *(float *)(lVar10 + 0x1c + (longlong)pfVar12);
              fVar28 = (fVar29 * fVar19 - fVar25 * fVar21) + fVar28 + fVar18 * fVar26;
              local_168 = (fVar25 * fVar18 - fVar27 * fVar19) + local_168 + fVar21 * fVar26;
              fStack_164 = (fVar27 * fVar21 - fVar29 * fVar18) + fStack_164 + fVar19 * fVar26;
              fVar25 = fStack_184;
            }
            local_198 = local_168 * param_2 + pfVar12[4];
            fVar27 = fStack_164 * param_2 + pfVar12[5];
            fVar29 = fVar28 * param_2 + pfVar12[6];
          }
          else {
            fVar29 = pfVar12[6];
          }
          fVar28 = pfVar12[0xe];
          fVar26 = fVar25;
          if (((uint)fVar20 >> 0x1d & 1) == 0) {
            fVar28 = param_2 * pfVar12[0x16] + fVar28;
          }
        }
        fVar20 = 0.0;
        if (bVar5) {
          if (lVar11 == -1) {
            local_128 = (float)uVar4;
            fStack_124 = (float)((ulonglong)uVar4 >> 0x20);
            fVar20 = ABS(local_128 * pfVar12[0x17]);
            fVar25 = ABS(fStack_124 * pfVar12[0x18]);
            if (fVar20 <= fVar25) {
              fVar20 = fVar25;
            }
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
          }
          else {
            fVar20 = ABS(*(float *)(lVar11 + 0x10 + (longlong)pfVar12));
            fVar25 = ABS(*(float *)(lVar11 + 0xc + (longlong)pfVar12));
            if (fVar20 <= fVar25) {
              fVar20 = fVar25;
            }
            fVar25 = ABS(*(float *)(lVar11 + 0x14 + (longlong)pfVar12));
            if (fVar20 <= fVar25) {
              fVar20 = fVar25;
            }
          }
          fVar25 = ABS(local_res8 * pfVar12[0x17]);
          fVar18 = ABS(local_res18 * pfVar12[0x18]);
          if (fVar25 <= fVar18) {
            fVar25 = fVar18;
          }
          if (fVar25 <= 0.0) {
            fVar25 = 0.0;
          }
          fVar20 = fVar20 + fVar25;
        }
        fVar27 = fVar27 + *(float *)(param_1 + 0x1bc);
        fVar29 = fVar29 + *(float *)(param_1 + 0x1c0);
        local_198 = *(float *)(param_1 + 0x1b8) + local_198;
        *pfVar12 = *(float *)(param_1 + 0x1b8) + *pfVar12;
        pfVar12[1] = *(float *)(param_1 + 0x1bc) + pfVar12[1];
        pfVar12[2] = pfVar12[2] + *(float *)(param_1 + 0x1c0);
        *(ulonglong *)(pfVar12 + 4) = CONCAT44(fVar27,local_198);
        *(ulonglong *)(pfVar12 + 8) = CONCAT44(fVar27,local_198);
        pfVar12[6] = fVar29;
        pfVar12[10] = fVar29;
        fVar25 = (float)(int)(fVar28 * 0.15915494) * 6.2831855;
        if (ABS(fVar28) < ABS(fVar25)) {
          fVar25 = fVar28;
        }
        pfVar12[0xe] = fVar28 - fVar25;
        fVar25 = fVar26;
        local_188 = fVar30;
        fVar28 = local_170;
        if (bVar5) {
          if (bVar13 != 0) {
            fVar25 = fVar27 * fStack_100;
            fVar28 = local_198 * local_118._4_4_;
            fVar18 = local_198 * fStack_110;
            local_198 = (float)local_e8 * 1.0 + fVar29 * (float)local_f8 +
                        fVar27 * (float)local_108 + local_198 * (float)local_118;
            fVar27 = local_e8._4_4_ * 1.0 + fVar29 * local_f8._4_4_ +
                     fVar27 * local_108._4_4_ + fVar28;
            fVar29 = fStack_e0 * 1.0 + fVar29 * fStack_f0 + fVar25 + fVar18;
          }
          fVar25 = local_198 + fVar20;
          if (local_198 + fVar20 <= fVar31) {
            fVar25 = fVar31;
          }
          fVar31 = fVar25;
          local_188 = local_198 - fVar20;
          if (fVar30 <= local_198 - fVar20) {
            local_188 = fVar30;
          }
          fVar25 = fVar27 - fVar20;
          if (fVar26 <= fVar27 - fVar20) {
            fVar25 = fVar26;
          }
          fVar30 = fVar27 + fVar20;
          if (fVar27 + fVar20 <= fStack_174) {
            fVar30 = fStack_174;
          }
          fVar27 = fVar29 - fVar20;
          if (local_180 <= fVar29 - fVar20) {
            fVar27 = local_180;
          }
          fStack_184 = fVar25;
          local_180 = fVar27;
          fStack_174 = fVar30;
          fVar28 = fVar29 + fVar20;
          if (fVar29 + fVar20 <= local_170) {
            fVar28 = local_170;
          }
        }
        local_170 = fVar28;
        uVar17 = (int)uVar15 + 1;
        uVar16 = uVar16 + 2;
        uVar15 = (ulonglong)uVar17;
        fVar30 = local_188;
        local_178 = fVar31;
      } while ((int)uVar17 < *(int *)(param_1 + 0x128));
    }
    if (bVar5) {
      local_140 = CONCAT31(local_140._1_3_,1);
      *(float *)(param_1 + 0x150) = local_188;
      *(float *)(param_1 + 0x154) = fStack_184;
      *(float *)(param_1 + 0x158) = local_180;
      *(float *)(param_1 + 0x15c) = local_178;
      *(ulonglong *)(param_1 + 0x160) = CONCAT44(local_170,fStack_174);
      *(undefined4 *)(param_1 + 0x168) = local_140;
    }
  }
  return;
}



// FUNCTION 142639210 FUN_142639210 body=2336 status=ok
// SIG undefined FUN_142639210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142639210(longlong param_1,float param_2)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res18;
  float local_1d8;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  float local_188;
  float fStack_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_130;
  undefined4 local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  lVar12 = *(longlong *)(param_1 + 0x18);
  if ((lVar12 != 0) && (0 < *(int *)(param_1 + 0x128))) {
    if ((*(char *)(lVar12 + 0x719) < '\0') ||
       ((*(longlong *)(lVar12 + 0x6f0) == 0 ||
        ((*(byte *)(*(longlong *)(lVar12 + 0x6f0) + 0x98) & 1) != 0)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_148 = *(undefined8 *)(lVar12 + 0x230);
    uStack_140 = *(undefined8 *)(lVar12 + 0x238);
    bVar10 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1;
    if (bVar10 == 0) {
      local_118 = _DAT_1464aa7d0;
      uStack_110 = _DAT_1464aa7d8;
      local_108 = _DAT_1464aa7e0;
      uStack_100 = _DAT_1464aa7e8;
      local_f8 = _DAT_1464aa7f0;
      uStack_f0 = _DAT_1464aa7f8;
      local_e8 = _DAT_1464aa800;
      fStack_e4 = fRam00000001464aa804;
      fStack_e0 = fRam00000001464aa808;
      fStack_dc = _DAT_1464aa80c;
    }
    else {
      fVar24 = *(float *)(lVar12 + 0x210);
      fVar23 = *(float *)(lVar12 + 0x214);
      fVar21 = *(float *)(lVar12 + 0x218);
      fVar18 = *(float *)(lVar12 + 0x21c);
      fVar13 = fVar23 + fVar23;
      fVar15 = fVar21 + fVar21;
      fVar17 = fVar24 * (fVar24 + fVar24);
      fVar14 = (fVar24 + fVar24) * fVar18;
      fVar20 = *(float *)(lVar12 + 0x230);
      fVar19 = *(float *)(lVar12 + 0x234);
      fVar22 = *(float *)(lVar12 + 0x238);
      uVar16 = (uint)((fRam0000000146b056dc - (fVar17 + fVar17)) * *(float *)(lVar12 + 0x23c)) &
               uRam0000000146b056ec;
      local_e8 = *(float *)(lVar12 + 0x220);
      fStack_e4 = *(float *)(lVar12 + 0x224);
      fStack_e0 = *(float *)(lVar12 + 0x228);
      fStack_dc = fRam0000000146b056dc;
      local_118 = CONCAT44((fVar15 * fVar18 + fVar13 * fVar24) * fVar20,
                           (uint)((_DAT_146b056d0 - (fVar21 * fVar15 + fVar23 * fVar13)) * fVar20) &
                           _DAT_146b056e0);
      uStack_110 = CONCAT44(uVar16,fVar20 * (fVar15 * fVar24 - fVar13 * fVar18));
      local_108 = CONCAT44((uint)((fRam0000000146b056d4 - (fVar21 * fVar15 + fVar17)) * fVar19) &
                           uRam0000000146b056e4,fVar19 * (fVar13 * fVar24 - fVar15 * fVar18));
      uStack_100 = CONCAT44(uVar16,(fVar14 + fVar15 * fVar23) * fVar19);
      local_f8 = CONCAT44(fVar22 * (fVar15 * fVar23 - fVar14),
                          (fVar13 * fVar18 + fVar15 * fVar24) * fVar22);
      uStack_f0 = CONCAT44(uVar16,(uint)((fRam0000000146b056d8 - (fVar23 * fVar13 + fVar17)) *
                                        fVar22) & uRam0000000146b056e8);
    }
    if (bVar4) {
      *(undefined8 *)(param_1 + 0x15c) = _DAT_1468b5d90;
      uVar6 = DAT_1468b5d98;
      *(undefined4 *)(param_1 + 0x164) = DAT_1468b5d98;
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x158) = uVar6;
      *(undefined1 *)(param_1 + 0x168) = 0;
    }
    fVar23 = -1048576.0;
    fVar24 = 1048576.0;
    local_1c8 = 1048576.0;
    fStack_1c4 = 1048576.0;
    local_1c0 = 1048576.0;
    local_res18 = -1048576.0;
    local_1b8 = -1048576.0;
    fStack_1b4 = -1048576.0;
    local_1b0 = -1048576.0;
    iVar11 = 0;
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0xb0);
    if (0 < *(int *)(param_1 + 0x128)) {
      lVar12 = 0;
      fVar21 = 1048576.0;
      do {
        pfVar9 = (float *)((longlong)
                           (int)((uint)*(ushort *)(lVar12 + *(longlong *)(param_1 + 0x108)) *
                                *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100));
        uVar1 = *(undefined8 *)(pfVar9 + 4);
        fVar20 = (float)((ulonglong)uVar1 >> 0x20);
        *(undefined8 *)pfVar9 = uVar1;
        pfVar9[2] = pfVar9[6];
        fVar18 = pfVar9[0x1a];
        pfVar9[0x1a] = (float)((uint)fVar18 & 0xfdffffff);
        if ((((uint)fVar18 >> 0x19 & 1) == 0) || ((~bVar2 & 1) == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        local_1d8 = (float)uVar1;
        if ((((uint)fVar18 >> 0x1a & 1) != 0) || (bVar5)) {
          fVar22 = pfVar9[6];
          fVar19 = pfVar9[0xe];
          fVar13 = fVar23;
          fVar14 = fVar24;
        }
        else {
          if (((uint)fVar18 >> 0x1c & 1) == 0) {
            fVar24 = pfVar9[0x11];
            lVar7 = (longlong)*(int *)(param_1 + 0x58);
            local_188 = (float)*(undefined8 *)(pfVar9 + 0xf);
            fStack_184 = (float)((ulonglong)*(undefined8 *)(pfVar9 + 0xf) >> 0x20);
            if (*(int *)(param_1 + 0x58) != 0) {
              fVar23 = *(float *)(lVar7 + 0x14 + (longlong)pfVar9);
              fVar20 = *(float *)(lVar7 + 0x18 + (longlong)pfVar9);
              fVar19 = *(float *)(lVar7 + 0x10 + (longlong)pfVar9);
              fVar22 = *(float *)(lVar7 + 0x1c + (longlong)pfVar9);
              fVar15 = fVar23 * fVar24 - fVar20 * fStack_184;
              fVar15 = fVar15 + fVar15;
              fVar14 = fVar20 * local_188 - fVar19 * fVar24;
              fVar13 = fVar19 * fStack_184 - fVar23 * local_188;
              fVar14 = fVar14 + fVar14;
              fVar13 = fVar13 + fVar13;
              local_188 = (fVar23 * fVar13 - fVar20 * fVar14) + fVar22 * fVar15 + local_188;
              fStack_184 = (fVar20 * fVar15 - fVar19 * fVar13) + fVar22 * fVar14 + fStack_184;
              fVar24 = (fVar19 * fVar14 - fVar23 * fVar15) + fVar22 * fVar13 + fVar24;
            }
            local_1d8 = local_188 * param_2 + pfVar9[4];
            fVar20 = fStack_184 * param_2 + pfVar9[5];
            fVar22 = fVar24 * param_2 + pfVar9[6];
            pfVar9[8] = local_188 * param_2 + pfVar9[8];
            pfVar9[10] = fVar24 * param_2 + pfVar9[10];
            pfVar9[9] = fStack_184 * param_2 + pfVar9[9];
            fVar23 = local_res18;
            fVar24 = fStack_1c4;
          }
          else {
            fVar22 = pfVar9[6];
          }
          fVar19 = pfVar9[0xe];
          fVar13 = fVar23;
          fVar14 = fVar24;
          if (((uint)fVar18 >> 0x1d & 1) == 0) {
            fVar19 = param_2 * pfVar9[0x16] + fVar19;
          }
        }
        if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x719) < '\0') {
          local_1a8 = 0;
          uStack_1a0 = 0;
          local_198 = 0;
        }
        else {
          lVar7 = 0;
          cVar3 = *(char *)((longlong)*(int *)(param_1 + 0x204) + (longlong)pfVar9);
          if ((int)cVar3 < *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x48)) {
            lVar7 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x1f0) + 0x40) + (longlong)cVar3 * 8);
          }
          if (lVar7 == 0) {
            local_130 = 0;
            uStack_168 = 0;
            uStack_1a0 = 0;
            local_124 = 0;
            uStack_164 = 0;
            local_178 = 0;
            uStack_170 = 0;
            uStack_16c = 0;
            local_160 = 0;
            local_1a8 = 0;
            local_198 = 0;
          }
          else {
            puVar8 = (undefined8 *)UStaticMesh::GetBounds(lVar7,&local_178);
            local_1a8 = *puVar8;
            uStack_1a0 = puVar8[1];
            local_198 = puVar8[2];
          }
        }
        fVar22 = fVar22 + *(float *)(param_1 + 0x1c0);
        local_1d8 = *(float *)(param_1 + 0x1b8) + local_1d8;
        fVar20 = fVar20 + *(float *)(param_1 + 0x1bc);
        fVar17 = (((float)local_1a8 + uStack_1a0._4_4_) - ((float)local_1a8 - uStack_1a0._4_4_)) *
                 pfVar9[0x17] * 0.5 * (float)local_148;
        fVar18 = ((local_1a8._4_4_ + (float)local_198) - (local_1a8._4_4_ - (float)local_198)) *
                 pfVar9[0x18] * 0.5 * local_148._4_4_;
        *pfVar9 = *(float *)(param_1 + 0x1b8) + *pfVar9;
        fVar15 = (((float)uStack_1a0 + local_198._4_4_) - ((float)uStack_1a0 - local_198._4_4_)) *
                 pfVar9[0x19] * 0.5 * (float)uStack_140;
        pfVar9[1] = *(float *)(param_1 + 0x1bc) + pfVar9[1];
        pfVar9[2] = *(float *)(param_1 + 0x1c0) + pfVar9[2];
        fVar24 = (float)(int)(fVar19 * 0.15915494) * 6.2831855;
        if (ABS(fVar19) < ABS(fVar24)) {
          fVar24 = fVar19;
        }
        *(ulonglong *)(pfVar9 + 4) = CONCAT44(fVar20,local_1d8);
        pfVar9[6] = fVar22;
        pfVar9[0xe] = fVar19 - fVar24;
        fVar23 = fVar13;
        fVar24 = fVar14;
        local_1c8 = fVar21;
        fVar19 = local_1c0;
        if (bVar4) {
          local_1c8 = local_1d8;
          fVar24 = fVar20;
          fVar19 = fVar22;
          if (bVar10 != 0) {
            uStack_14c = 0x3f800000;
            local_1c8 = local_e8 * 1.0 + fVar22 * (float)local_f8 +
                        fVar20 * (float)local_108 + local_1d8 * (float)local_118;
            fVar24 = fStack_e4 * 1.0 + fVar22 * local_f8._4_4_ +
                     fVar20 * local_108._4_4_ + local_1d8 * local_118._4_4_;
            fVar19 = fStack_e0 * 1.0 + fVar22 * (float)uStack_f0 +
                     fVar20 * (float)uStack_100 + local_1d8 * (float)uStack_110;
            local_158 = local_1d8;
            fStack_154 = fVar20;
            fStack_150 = fVar22;
          }
          fVar23 = local_1c8 + fVar17;
          local_1c8 = local_1c8 - fVar17;
          if (fVar23 <= fVar13) {
            fVar23 = fVar13;
          }
          if (fVar21 <= local_1c8) {
            local_1c8 = fVar21;
          }
          fVar21 = fVar24 + fVar18;
          fVar24 = fVar24 - fVar18;
          if (fVar21 <= fStack_1b4) {
            fVar21 = fStack_1b4;
          }
          if (fVar14 <= fVar24) {
            fVar24 = fVar14;
          }
          fVar18 = fVar19 + fVar15;
          fVar19 = fVar19 - fVar15;
          if (fVar18 <= local_1b0) {
            fVar18 = local_1b0;
          }
          local_res18 = fVar23;
          fStack_1c4 = fVar24;
          local_1b8 = fVar23;
          fStack_1b4 = fVar21;
          local_1b0 = fVar18;
          if (local_1c0 <= fVar19) {
            fVar19 = local_1c0;
          }
        }
        local_1c0 = fVar19;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 2;
        fVar21 = local_1c8;
      } while (iVar11 < *(int *)(param_1 + 0x128));
    }
    if (bVar4) {
      local_160 = CONCAT31(local_160._1_3_,1);
      *(float *)(param_1 + 0x150) = local_1c8;
      *(float *)(param_1 + 0x154) = fStack_1c4;
      *(float *)(param_1 + 0x158) = local_1c0;
      *(float *)(param_1 + 0x15c) = local_1b8;
      *(ulonglong *)(param_1 + 0x160) = CONCAT44(local_1b0,fStack_1b4);
      *(undefined4 *)(param_1 + 0x168) = local_160;
    }
  }
  return;
}



// FUNCTION 142639b30 FUN_142639b30 body=1217 status=ok
// SIG undefined FUN_142639b30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142639b30(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118 [11];
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (*(int *)(param_1 + 0x90) != 0) {
    local_118[0] = 0;
    local_118[1] = 0;
    local_128 = 0;
    FScopedGPUStatEvent::Begin(local_118,param_2,&DAT_146b05770,&local_128);
    local_160 = 0;
    local_168 = 1;
    local_170 = 0;
    local_128 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0xe0);
    local_120 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x120);
    local_178 = 0;
    FUN_141ad7ef0(param_2,2,&local_128,0);
    uVar4 = DAT_146534414;
    uVar3 = DAT_146534410;
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f59420;
    puVar7[2] = 0;
    *(undefined4 *)(puVar7 + 3) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar3;
    *(undefined4 *)(puVar7 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x3f800000;
    local_118[2] = 0;
    local_118[3] = 0;
    local_118[4] = 0;
    local_118[5] = 0;
    local_118[6] = 0;
    local_118[7] = 0;
    local_118[8] = 0;
    local_118[9] = 0;
    local_118[10] = 0;
    local_c0 = 0;
    local_bc = 0x26;
    local_b4 = 0;
    local_ac = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    FUN_14049afe0(param_2,local_118 + 2);
    local_118[10] = FUN_1409853f0();
    local_118[9] = FUN_140985530();
    local_118[8] = FUN_1404a0ce0();
    FUN_142618190(param_2,local_118 + 2,*(undefined4 *)(param_1 + 0x80),param_1 + 0x88);
    local_158 = 0xffffffff00000000;
    uStack_150 = 0xffffffffffffffff;
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_148 = 0xffffffffffffffff;
    uStack_140 = 0xffffffffffffffff;
    local_138 = 0xffffffff;
    uStack_130 = 0;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0xe8);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0xe0);
    puVar6 = puVar7 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar7 + 2) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_158._4_4_;
    *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_150._4_4_;
    *(undefined4 *)(puVar7 + 4) = (undefined4)local_148;
    *(undefined4 *)((longlong)puVar7 + 0x24) = local_148._4_4_;
    *(undefined4 *)(puVar7 + 5) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_140._4_4_;
    *(undefined4 *)(puVar7 + 6) = (undefined4)local_138;
    *(undefined4 *)((longlong)puVar7 + 0x34) = local_138._4_4_;
    *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_130._4_4_;
    puVar7[8] = plVar2;
    puVar7[9] = uVar1;
    lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)puVar7[8] + 0x18))();
      if (lVar5 == 0) {
        (**(code **)(*(longlong *)puVar7[8] + 0x20))();
      }
    }
    lVar5 = (**(code **)(*(longlong *)puVar7[9] + 8))();
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)puVar7[9] + 0x18))();
      if (lVar5 == 0) {
        (**(code **)(*(longlong *)puVar7[9] + 0x20))();
      }
    }
    local_158 = 0xffffffff00000000;
    uStack_150 = 0xffffffffffffffff;
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_148 = 0xffffffffffffffff;
    uStack_140 = 0xffffffffffffffff;
    local_138 = 0xffffffff;
    uStack_130 = 0;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x128);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x120);
    puVar6 = puVar7 + 10;
    if (*(undefined8 **)(param_2 + 0x38) < puVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x58);
      puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 10;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar6;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar7;
    *(undefined8 **)(param_2 + 8) = puVar7 + 1;
    puVar7[1] = 0;
    *puVar7 = &PTR_LAB_143f489f0;
    *(undefined4 *)(puVar7 + 2) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar7 + 0x14) = local_158._4_4_;
    *(undefined4 *)(puVar7 + 3) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_150._4_4_;
    *(undefined4 *)(puVar7 + 4) = (undefined4)local_148;
    *(undefined4 *)((longlong)puVar7 + 0x24) = local_148._4_4_;
    *(undefined4 *)(puVar7 + 5) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)puVar7 + 0x2c) = uStack_140._4_4_;
    *(undefined4 *)(puVar7 + 6) = (undefined4)local_138;
    *(undefined4 *)((longlong)puVar7 + 0x34) = local_138._4_4_;
    *(undefined4 *)(puVar7 + 7) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uStack_130._4_4_;
    puVar7[8] = plVar2;
    puVar7[9] = uVar1;
    lVar5 = (**(code **)(*plVar2 + 8))(plVar2);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)puVar7[8] + 0x18))();
      if (lVar5 == 0) {
        (**(code **)(*(longlong *)puVar7[8] + 0x20))();
      }
    }
    lVar5 = (**(code **)(*(longlong *)puVar7[9] + 8))();
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)puVar7[9] + 0x18))();
      if (lVar5 == 0) {
        (**(code **)(*(longlong *)puVar7[9] + 0x20))();
      }
    }
    if (local_118[0] != 0) {
      FScopedGPUStatEvent::End(local_118);
    }
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x94)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x88,0);
  }
  return;
}



// FUNCTION 14263a000 FUN_14263a000 body=497 status=ok
// SIG undefined FUN_14263a000(void)

void FUN_14263a000(longlong param_1,longlong param_2,float param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  undefined1 local_58 [48];
  
  pfVar1 = (float *)FUN_142627a50(param_2,param_1);
  iVar5 = 0;
  if (((*(byte *)(param_1 + 0x130) & 2) == 0) || (iVar3 = 1, *(char *)(param_1 + 0x4b) == '\0')) {
    iVar3 = 0;
  }
  if (0.0 <= *(float *)(param_1 + 0x134)) {
    fVar6 = 1.0 / (float)*(int *)(param_1 + 0x3c);
    if (*(float *)(param_1 + 0x134) <= 0.0001) {
      if (0 < *(int *)(param_1 + 0x3c)) {
        pfVar1 = pfVar1 + 1;
        do {
          iVar3 = -iVar3;
          puVar2 = (undefined8 *)
                   FUN_1424118e0(param_1 + 0x48,local_58,(float)iVar5 * fVar6,
                                 *(undefined8 *)(param_2 + 0x18),iVar3,0);
          iVar5 = iVar5 + 1;
          *(undefined8 *)pfVar1 = *puVar2;
          pfVar1[2] = *(float *)(puVar2 + 1);
          pfVar1 = pfVar1 + 3;
        } while (iVar5 < *(int *)(param_1 + 0x3c));
      }
    }
    else {
      param_3 = param_3 + *pfVar1;
      *pfVar1 = param_3;
      if (*(float *)(param_1 + 0x134) <= param_3 && param_3 != *(float *)(param_1 + 0x134)) {
        if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
          if (0 < *(int *)(param_1 + 0x3c)) {
            pfVar4 = pfVar1 + 1;
            do {
              iVar3 = -iVar3;
              puVar2 = (undefined8 *)
                       FUN_1424118e0(param_1 + 0x48,local_58,(float)iVar5 * fVar6,
                                     *(undefined8 *)(param_2 + 0x18),iVar3,0);
              iVar5 = iVar5 + 1;
              *(undefined8 *)pfVar4 = *puVar2;
              pfVar4[2] = *(float *)(puVar2 + 1);
              pfVar4 = pfVar4 + 3;
            } while (iVar5 < *(int *)(param_1 + 0x3c));
          }
        }
        else if (0 < *(int *)(param_1 + 0x3c)) {
          pfVar4 = pfVar1 + 0x181;
          do {
            iVar3 = -iVar3;
            puVar2 = (undefined8 *)
                     FUN_1424118e0(param_1 + 0x48,local_58,(float)iVar5 * fVar6,
                                   *(undefined8 *)(param_2 + 0x18),iVar3,0);
            iVar5 = iVar5 + 1;
            *(undefined8 *)pfVar4 = *puVar2;
            pfVar4[2] = *(float *)(puVar2 + 1);
            pfVar4 = pfVar4 + 3;
          } while (iVar5 < *(int *)(param_1 + 0x3c));
          *pfVar1 = 0.0;
          return;
        }
        *pfVar1 = 0.0;
      }
    }
  }
  return;
}



// FUNCTION 14263a200 FUN_14263a200 body=1847 status=ok
// SIG undefined FUN_14263a200(void)

void FUN_14263a200(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  char cVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  char cVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_res18 [2];
  int local_res20;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  int local_e0;
  int local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_b0 = *(longlong *)(param_1 + 0x28);
  local_res20 = *(int *)(local_b0 + 0x98);
  lVar21 = (longlong)local_res20;
  if (0 < local_res20) {
    iVar14 = local_res20 + 1;
    local_f8 = (undefined8 *)0x0;
    lVar12 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x40);
    local_ec = 0;
    local_f0 = iVar14;
    local_dc = iVar14;
    if (0 < iVar14) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_f8);
    }
    puVar19 = local_f8;
    _guard_xfg_dispatch_icall_nop(local_f8,0,(longlong)iVar14 * 0xc);
    local_d8 = (void *)0x0;
    local_cc = 0;
    local_d0 = iVar14;
    if (0 < iVar14) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_d8);
    }
    pvVar11 = local_d8;
    _guard_xfg_dispatch_icall_nop(local_d8,0,(longlong)iVar14 * 4);
    puVar16 = (undefined4 *)0x0;
    puVar9 = puVar16;
    local_e8 = lVar21;
    if (0 < lVar21) {
      do {
        lVar22 = *(longlong *)(param_1 + 0x10);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(lVar22 + 0xb8,local_res18,
                 *(undefined8 *)(*(longlong *)(lVar12 + 0x90) + (longlong)puVar9 * 8));
        puVar6 = puVar16;
        if (local_res18[0] != 0xffffffff) {
          puVar6 = (undefined4 *)
                   (*(longlong *)(lVar22 + 0xb8) + (longlong)(int)local_res18[0] * 0x18);
        }
        puVar3 = puVar6 + 2;
        if (puVar6 == (undefined4 *)0x0) {
          puVar3 = puVar16;
        }
        uVar5 = 0;
        if (puVar3 != (undefined4 *)0x0) {
          uVar5 = *puVar3;
        }
        *(undefined4 *)((longlong)local_d8 + (longlong)puVar9 * 4) = uVar5;
        puVar9 = (undefined4 *)((longlong)puVar9 + 1);
        pvVar11 = local_d8;
      } while ((longlong)puVar9 < lVar21);
    }
    iVar14 = *(int *)(param_1 + 0x128) + -1;
    local_b8 = (longlong)iVar14;
    if (-1 < iVar14) {
      do {
        uVar10 = 0;
        lVar12 = (longlong)
                 (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + local_b8 * 2) *
                      *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100);
        puVar19 = local_f8;
        local_c0 = lVar12;
        if ((*(uint *)(lVar12 + 0x68) & 0x4000000) == 0) {
          cVar8 = '\0';
          local_88 = 0x3f800000;
          uStack_80 = 0;
          local_78 = 0x3f80000000000000;
          uStack_70 = 0;
          lVar22 = 0;
          local_68 = 0;
          uStack_64 = 0;
          uStack_60 = 0x3f800000;
          uStack_5c = 0;
          local_58 = 0;
          uStack_50 = 0x3f80000000000000;
          local_108 = 0;
          local_100 = 0.0;
          local_118 = 0;
          local_110 = 0.0;
          local_128 = 0;
          local_120 = 0.0;
          local_c8 = 0;
          local_res18[0] = local_res18[0] & 0xffffff00;
          uVar13 = uVar10;
          uVar17 = uVar10;
          uVar18 = uVar10;
          puVar20 = local_f8;
          if (0 < lVar21) {
            do {
              iVar14 = *(int *)((longlong)pvVar11 + lVar22 * 4);
              lVar21 = *(longlong *)(*(longlong *)(local_b0 + 0x90) + lVar22 * 8);
              iVar15 = (int)uVar17;
              uVar4 = uVar10;
              if (iVar14 != 0) {
                uVar17 = lVar12 + iVar14;
                local_e0 = local_res20 + -1;
                uVar4 = uVar17;
                if (iVar15 != local_e0) {
                  uVar4 = uVar10;
                }
                cVar2 = *(char *)(lVar21 + 0x40);
                if (cVar2 == '\0') {
                  if ((*(byte *)(lVar21 + 0x28) & 0x80) != 0) {
                    local_100 = local_100 + *(float *)(uVar17 + 0x14);
                    local_108 = CONCAT44(local_108._4_4_ + *(float *)(uVar17 + 0x10),
                                         (float)local_108 + *(float *)(uVar17 + 0xc));
                    local_110 = local_110 + *(float *)(uVar17 + 0x20);
                    local_118 = CONCAT44(local_118._4_4_ + *(float *)(uVar17 + 0x1c),
                                         (float)local_118 + *(float *)(uVar17 + 0x18));
                    local_120 = local_120 + *(float *)(uVar17 + 0x38);
                    local_128 = CONCAT44(local_128._4_4_ + *(float *)(uVar17 + 0x34),
                                         (float)local_128 + *(float *)(uVar17 + 0x30));
                  }
                }
                else if (cVar2 == '\x01') {
                  if ((*(byte *)(lVar21 + 0x28) & 0x80) != 0) {
                    local_100 = local_100 * *(float *)(uVar17 + 0x14);
                    local_108 = CONCAT44(local_108._4_4_ * *(float *)(uVar17 + 0x10),
                                         (float)local_108 * *(float *)(uVar17 + 0xc));
                    local_110 = local_110 * *(float *)(uVar17 + 0x20);
                    local_118 = CONCAT44(local_118._4_4_ * *(float *)(uVar17 + 0x1c),
                                         (float)local_118 * *(float *)(uVar17 + 0x18));
                    local_120 = local_120 * *(float *)(uVar17 + 0x38);
                    local_128 = CONCAT44(local_128._4_4_ * *(float *)(uVar17 + 0x34),
                                         (float)local_128 * *(float *)(uVar17 + 0x30));
                  }
                }
                else if (cVar2 == '\x02') {
                  if ((0 < lVar22) && (cVar8 == '\x02')) {
                    FUN_142620330(param_1,uVar13,&local_108,&local_118,&local_128,param_2,&local_a8,
                                  &local_88);
                    if ((*(byte *)(lVar21 + 0x28) & 0x80) == 0) {
                      local_108 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                      local_100 = DAT_1468b5d98;
                      local_118 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                      local_110 = DAT_1468b5d98;
                      local_128 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                      local_120 = DAT_1468b5d98;
                    }
                    uVar18 = (ulonglong)((int)uVar18 + 1);
                    *puVar20 = local_a8;
                    *(undefined4 *)(puVar20 + 1) = local_a0;
                    puVar20 = (undefined8 *)((longlong)puVar20 + 0xc);
                  }
                  if ((*(byte *)(lVar21 + 0x28) & 0x80) != 0) {
                    local_108 = *(undefined8 *)(uVar17 + 0xc);
                    local_100 = *(float *)(uVar17 + 0x14);
                    local_118 = *(undefined8 *)(uVar17 + 0x18);
                    local_110 = *(float *)(uVar17 + 0x20);
                    local_128 = *(undefined8 *)(uVar17 + 0x30);
                    local_120 = *(float *)(uVar17 + 0x38);
                  }
                }
                if (iVar15 == local_e0) {
                  FUN_142620330(param_1,uVar17,&local_108,&local_118,&local_128,param_2,&local_98,
                                &local_88);
                  uVar18 = (ulonglong)((int)uVar18 + 1);
                  *puVar20 = local_98;
                  *(undefined4 *)(puVar20 + 1) = local_90;
                  puVar20 = (undefined8 *)((longlong)puVar20 + 0xc);
                }
                pvVar11 = local_d8;
                lVar12 = local_c0;
                if ((*(byte *)(lVar21 + 0x28) & 0x80) == 0) {
                  uVar13 = local_c8;
                  cVar8 = (char)local_res18[0];
                }
                else {
                  local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(char *)(lVar21 + 0x40));
                  uVar13 = uVar17;
                  local_c8 = uVar17;
                  cVar8 = *(char *)(lVar21 + 0x40);
                }
              }
              puVar19 = local_f8;
              lVar22 = lVar22 + 1;
              uVar10 = uVar4;
              uVar17 = (ulonglong)(iVar15 + 1);
            } while (lVar22 < local_e8);
            lVar12 = 0;
            lVar21 = local_e8;
            if (uVar4 != 0) {
              lVar21 = (longlong)(int)uVar18;
              *(ulonglong *)(uVar4 + 0xc) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              *(float *)(uVar4 + 0x14) = DAT_1468b5d98;
              if (3 < lVar21) {
                pfVar7 = (float *)((longlong)local_f8 + 0x14);
                lVar22 = (lVar21 - 4U >> 2) + 1;
                lVar12 = lVar22 * 4;
                do {
                  fVar25 = pfVar7[-5] + *(float *)(uVar4 + 0xc);
                  *(float *)(uVar4 + 0xc) = fVar25;
                  fVar24 = pfVar7[-4] + *(float *)(uVar4 + 0x10);
                  *(float *)(uVar4 + 0x10) = fVar24;
                  fVar23 = pfVar7[-3] + *(float *)(uVar4 + 0x14);
                  *(float *)(uVar4 + 0x14) = fVar23;
                  fVar25 = fVar25 + pfVar7[-2];
                  *(float *)(uVar4 + 0xc) = fVar25;
                  fVar24 = fVar24 + pfVar7[-1];
                  *(float *)(uVar4 + 0x10) = fVar24;
                  fVar23 = fVar23 + *pfVar7;
                  *(float *)(uVar4 + 0x14) = fVar23;
                  fVar25 = fVar25 + pfVar7[1];
                  *(float *)(uVar4 + 0xc) = fVar25;
                  fVar24 = fVar24 + pfVar7[2];
                  *(float *)(uVar4 + 0x10) = fVar24;
                  fVar23 = fVar23 + pfVar7[3];
                  *(float *)(uVar4 + 0x14) = fVar23;
                  *(float *)(uVar4 + 0xc) = fVar25 + pfVar7[4];
                  *(float *)(uVar4 + 0x10) = fVar24 + pfVar7[5];
                  pfVar1 = pfVar7 + 6;
                  pfVar7 = pfVar7 + 0xc;
                  *(float *)(uVar4 + 0x14) = fVar23 + *pfVar1;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
              if (lVar12 < lVar21) {
                pfVar7 = (float *)(lVar12 * 0xc + 8 + (longlong)local_f8);
                lVar21 = lVar21 - lVar12;
                do {
                  *(float *)(uVar4 + 0xc) = pfVar7[-2] + *(float *)(uVar4 + 0xc);
                  *(float *)(uVar4 + 0x10) = pfVar7[-1] + *(float *)(uVar4 + 0x10);
                  fVar23 = *pfVar7;
                  pfVar7 = pfVar7 + 3;
                  *(float *)(uVar4 + 0x14) = *(float *)(uVar4 + 0x14) + fVar23;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
              _guard_xfg_dispatch_icall_nop(local_f8,0,(longlong)local_dc * 0xc);
              lVar21 = local_e8;
            }
          }
        }
        local_b8 = local_b8 + -1;
      } while (-1 < local_b8);
    }
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
    if (puVar19 != (undefined8 *)0x0) {
      FMemory::Free(puVar19);
    }
  }
  return;
}



// FUNCTION 14263a940 UpdateRenderThreadResourcesEmitter body=556 status=ok
// SIG undefined UpdateRenderThreadResourcesEmitter(void)

void FGPUSpriteDynamicEmitterData::UpdateRenderThreadResourcesEmitter(longlong param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  char cVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iVar15;
  
  lVar14 = *(longlong *)(param_1 + 0x48);
  uVar11 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(lVar14 + 0x60) = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(lVar14 + 0x68) = uVar11;
  uVar11 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(lVar14 + 0x70) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(lVar14 + 0x78) = uVar11;
  uVar4 = *(undefined4 *)(param_1 + 0x104);
  uVar5 = *(undefined4 *)(param_1 + 0x108);
  uVar6 = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(lVar14 + 0x80) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(lVar14 + 0x84) = uVar4;
  *(undefined4 *)(lVar14 + 0x88) = uVar5;
  *(undefined4 *)(lVar14 + 0x8c) = uVar6;
  uVar4 = *(undefined4 *)(param_1 + 0x114);
  uVar5 = *(undefined4 *)(param_1 + 0x118);
  uVar6 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(lVar14 + 0x90) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(lVar14 + 0x94) = uVar4;
  *(undefined4 *)(lVar14 + 0x98) = uVar5;
  *(undefined4 *)(lVar14 + 0x9c) = uVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x1d4) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x1d0) = *(undefined4 *)(param_1 + 0xd4);
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc);
  *puVar2 = *puVar2 ^ (*(uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc) ^ *(uint *)(param_1 + 0x178)
                      ) & 1;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc);
  *puVar2 = *puVar2 ^ (*(uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc) ^ *(uint *)(param_1 + 0x178)
                      ) & 2;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc);
  *puVar2 = *puVar2 ^ (*(uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc) ^ *(uint *)(param_1 + 0x178)
                      ) & 4;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc);
  *puVar2 = *puVar2 ^ (*(uint *)(*(longlong *)(param_1 + 0x48) + 0x1dc) ^ *(uint *)(param_1 + 0x178)
                      ) & 8;
  lVar14 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar14 + 0xe0) != 0) {
    FUN_1428bf040((longlong *)(lVar14 + 0xe0),param_1 + 0x90);
    lVar14 = *(longlong *)(param_1 + 0x48);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar6 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(lVar14 + 0xa0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(lVar14 + 0xa4) = uVar4;
  *(undefined4 *)(lVar14 + 0xa8) = uVar5;
  *(undefined4 *)(lVar14 + 0xac) = uVar6;
  *(undefined8 *)(lVar14 + 0xb0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(lVar14 + 0xb8) = *(undefined4 *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x78) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x48);
    puVar1 = (undefined4 *)(param_1 + 0x70);
    puVar13 = (undefined4 *)(lVar14 + 0xc0);
    if (puVar13 != puVar1) {
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      uVar5 = *(undefined4 *)(param_1 + 0x78);
      uVar6 = *(undefined4 *)(param_1 + 0x7c);
      uVar7 = *puVar13;
      uVar8 = *(undefined4 *)(lVar14 + 0xc4);
      uVar9 = *(undefined4 *)(lVar14 + 200);
      uVar10 = *(undefined4 *)(lVar14 + 0xcc);
      *puVar13 = *puVar1;
      *(undefined4 *)(lVar14 + 0xc4) = uVar4;
      *(undefined4 *)(lVar14 + 200) = uVar5;
      *(undefined4 *)(lVar14 + 0xcc) = uVar6;
      *puVar1 = uVar7;
      *(undefined4 *)(param_1 + 0x74) = uVar8;
      *(undefined4 *)(param_1 + 0x78) = uVar9;
      *(undefined4 *)(param_1 + 0x7c) = uVar10;
    }
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x48);
    puVar1 = (undefined4 *)(param_1 + 0x80);
    puVar13 = (undefined4 *)(lVar14 + 0xd0);
    if (puVar13 != puVar1) {
      uVar4 = *(undefined4 *)(param_1 + 0x84);
      uVar5 = *(undefined4 *)(param_1 + 0x88);
      uVar6 = *(undefined4 *)(param_1 + 0x8c);
      uVar7 = *puVar13;
      uVar8 = *(undefined4 *)(lVar14 + 0xd4);
      uVar9 = *(undefined4 *)(lVar14 + 0xd8);
      uVar10 = *(undefined4 *)(lVar14 + 0xdc);
      *puVar13 = *puVar1;
      *(undefined4 *)(lVar14 + 0xd4) = uVar4;
      *(undefined4 *)(lVar14 + 0xd8) = uVar5;
      *(undefined4 *)(lVar14 + 0xdc) = uVar6;
      *puVar1 = uVar7;
      *(undefined4 *)(param_1 + 0x84) = uVar8;
      *(undefined4 *)(param_1 + 0x88) = uVar9;
      *(undefined4 *)(param_1 + 0x8c) = uVar10;
    }
  }
  cVar3 = *(char *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x84);
  cVar12 = FUN_1424866d0(uVar4,2);
  if (cVar12 != '\0') {
    cVar12 = FUN_141ee4480(uVar4);
    if (cVar12 == '\0') {
      iVar15 = 1;
      goto LAB_14263aad4;
    }
  }
  iVar15 = 0;
LAB_14263aad4:
  if (((cVar3 == '\0') ||
      (lVar14 = *(longlong *)(param_1 + 0x48), *(char *)(lVar14 + 0x248) == '\0')) ||
     (*(int *)(lVar14 + 0x24c) != 0)) {
    lVar14 = *(longlong *)(param_1 + 0x48);
    if ((*(char *)(lVar14 + 0x248) != '\0') && (*(int *)(lVar14 + 0x24c) == 1)) {
      cVar12 = FUN_1424866d0(*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x84),3);
      if (cVar12 == '\0') {
        if ((cVar3 == '\0') || ((char)iVar15 == '\0')) {
          *(undefined4 *)(lVar14 + 0x244) = 0;
        }
        else {
          *(undefined4 *)(lVar14 + 0x244) = 2;
        }
      }
      else {
        *(undefined4 *)(lVar14 + 0x244) = 1;
      }
    }
  }
  else {
    *(int *)(lVar14 + 0x244) = iVar15 * 2;
  }
  return;
}



// FUNCTION 14263ab70 FUN_14263ab70 body=1350 status=ok
// SIG undefined FUN_14263ab70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14263ab70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
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
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    local_c8 = _DAT_1464aa7d0;
    uStack_c0 = _DAT_1464aa7d8;
    local_b8 = _DAT_1464aa7e0;
    uStack_b0 = _DAT_1464aa7e8;
    local_a8 = _DAT_1464aa7f0;
    uStack_a0 = _DAT_1464aa7f8;
    fVar6 = _DAT_1464aa800;
    fVar11 = fRam00000001464aa804;
    fVar13 = fRam00000001464aa808;
    fVar14 = _DAT_1464aa80c;
  }
  else {
    fVar6 = *(float *)(lVar1 + 0x210);
    fVar11 = *(float *)(lVar1 + 0x214);
    fVar13 = *(float *)(lVar1 + 0x218);
    fVar14 = *(float *)(lVar1 + 0x21c);
    fVar10 = fVar11 + fVar11;
    fVar12 = fVar13 + fVar13;
    fVar16 = fVar6 * (fVar6 + fVar6);
    fVar15 = fVar14 * (fVar6 + fVar6);
    uVar19 = (uint)(fRam0000000146b056dc - (fVar16 + fVar16)) & uRam0000000146b056ec;
    local_c8 = CONCAT44(fVar14 * fVar12 + fVar6 * fVar10,
                        (uint)(_DAT_146b056d0 - (fVar13 * fVar12 + fVar11 * fVar10)) &
                        _DAT_146b056e0);
    uStack_c0 = CONCAT44(uVar19,fVar6 * fVar12 - fVar14 * fVar10);
    local_b8 = CONCAT44((uint)(fRam0000000146b056d4 - (fVar13 * fVar12 + fVar16)) &
                        uRam0000000146b056e4,fVar6 * fVar10 - fVar14 * fVar12);
    uStack_b0 = CONCAT44(uVar19,fVar15 + fVar11 * fVar12);
    local_a8 = CONCAT44(fVar11 * fVar12 - fVar15,fVar14 * fVar10 + fVar6 * fVar12);
    uStack_a0 = CONCAT44(uVar19,(uint)(fRam0000000146b056d8 - (fVar11 * fVar10 + fVar16)) &
                                uRam0000000146b056e8);
    fVar6 = *(float *)(lVar1 + 0x220);
    fVar11 = *(float *)(lVar1 + 0x224);
    fVar13 = *(float *)(lVar1 + 0x228);
    fVar14 = fRam0000000146b056dc;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30);
  fVar17 = *(float *)(lVar1 + 0x4c) * _DAT_146b05760;
  fVar15 = *(float *)(lVar1 + 0x50) * fRam0000000146b05764;
  fVar18 = *(float *)(lVar1 + 0x54) * fRam0000000146b05768;
  fVar17 = fVar17 - (float)(int)(fVar17 * _DAT_146b05750) * _DAT_146b05740;
  fVar15 = fVar15 - (float)(int)(fVar15 * fRam0000000146b05754) * fRam0000000146b05744;
  fVar18 = fVar18 - (float)(int)(fVar18 * fRam0000000146b05758) * fRam0000000146b05748;
  uVar19 = -(uint)(_DAT_146b05700 < (float)((uint)fVar17 & _DAT_146b05710));
  uVar3 = -(uint)(fRam0000000146b05704 < (float)((uint)fVar15 & uRam0000000146b05714));
  uVar4 = -(uint)(fRam0000000146b05708 < (float)((uint)fVar18 & uRam0000000146b05718));
  fVar17 = (float)(((uint)((float)((uint)fVar17 & _DAT_146b05730 | _DAT_146b05720) - fVar17) ^
                   (uint)fVar17) & uVar19 ^ (uint)fVar17);
  fVar15 = (float)(((uint)((float)((uint)fVar15 & uRam0000000146b05734 | uRam0000000146b05724) -
                          fVar15) ^ (uint)fVar15) & uVar3 ^ (uint)fVar15);
  fVar18 = (float)(((uint)((float)((uint)fVar18 & uRam0000000146b05738 | uRam0000000146b05728) -
                          fVar18) ^ (uint)fVar18) & uVar4 ^ (uint)fVar18);
  fVar10 = fVar17 * fVar17;
  fVar12 = fVar15 * fVar15;
  fVar16 = fVar18 * fVar18;
  fVar17 = (((((fVar10 * -2.3889859e-08 + 2.7525562e-06) * fVar10 + -0.00019840874) * fVar10 +
             0.008333331) * fVar10 + -0.16666667) * fVar10 + 1.0) * fVar17;
  fVar15 = (((((fVar12 * -2.3889859e-08 + 2.7525562e-06) * fVar12 + -0.00019840874) * fVar12 +
             0.008333331) * fVar12 + -0.16666667) * fVar12 + 1.0) * fVar15;
  fVar18 = (((((fVar16 * -2.3889859e-08 + 2.7525562e-06) * fVar16 + -0.00019840874) * fVar16 +
             0.008333331) * fVar16 + -0.16666667) * fVar16 + 1.0) * fVar18;
  fVar21 = (((((fVar10 * -2.6051615e-07 + 2.4760495e-05) * fVar10 + -0.0013888378) * fVar10 +
             0.041666638) * fVar10 + -0.5) * fVar10 + 1.0) *
           (float)((_DAT_146b056f0 ^ (uint)_DAT_146b056d0) & uVar19 ^ (uint)_DAT_146b056d0);
  fVar22 = (((((fVar12 * -2.6051615e-07 + 2.4760495e-05) * fVar12 + -0.0013888378) * fVar12 +
             0.041666638) * fVar12 + -0.5) * fVar12 + 1.0) *
           (float)((uRam0000000146b056f4 ^ (uint)fRam0000000146b056d4) & uVar3 ^
                  (uint)fRam0000000146b056d4);
  fVar23 = (((((fVar16 * -2.6051615e-07 + 2.4760495e-05) * fVar16 + -0.0013888378) * fVar16 +
             0.041666638) * fVar16 + -0.5) * fVar16 + 1.0) *
           (float)((uRam0000000146b056f8 ^ (uint)fRam0000000146b056d8) & uVar4 ^
                  (uint)fRam0000000146b056d8);
  fVar7 = fVar21 * fVar15;
  fVar16 = fVar22 * fVar21;
  fVar8 = fVar18 * fVar17 * fVar22 - fVar23 * fVar15;
  fVar5 = -(fVar21 * fVar18);
  fVar9 = fVar23 * fVar22 + fVar18 * fVar17 * fVar15;
  fVar21 = fVar23 * fVar21;
  fVar10 = *(float *)(lVar1 + 0x40);
  fVar12 = *(float *)(lVar1 + 0x48);
  fVar20 = fVar22 * fVar18 - fVar23 * fVar17 * fVar15;
  fVar18 = -(fVar23 * fVar17 * fVar22 + fVar18 * fVar15);
  fVar15 = *(float *)(lVar1 + 0x44);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  if ((*(byte *)(lVar1 + 100) & 1) == 0) {
    *(float *)(param_1 + 0x70) =
         fVar7 * (float)local_b8 + fVar16 * (float)local_c8 + fVar17 * (float)local_a8 + fVar6 * 0.0
    ;
    *(float *)(param_1 + 0x74) =
         fVar7 * local_b8._4_4_ + fVar16 * local_c8._4_4_ + fVar17 * local_a8._4_4_ + fVar11 * 0.0;
    *(float *)(param_1 + 0x78) =
         fVar7 * (float)uStack_b0 + fVar16 * (float)uStack_c0 + fVar17 * (float)uStack_a0 +
         fVar13 * 0.0;
    *(float *)(param_1 + 0x7c) =
         fVar7 * uStack_b0._4_4_ + fVar16 * uStack_c0._4_4_ + fVar17 * uStack_a0._4_4_ +
         fVar14 * 0.0;
    *(float *)(param_1 + 0x80) =
         fVar9 * (float)local_b8 + fVar8 * (float)local_c8 + fVar5 * (float)local_a8 + fVar6 * 0.0;
    *(float *)(param_1 + 0x84) =
         fVar9 * local_b8._4_4_ + fVar8 * local_c8._4_4_ + fVar5 * local_a8._4_4_ + fVar11 * 0.0;
    *(float *)(param_1 + 0x88) =
         fVar9 * (float)uStack_b0 + fVar8 * (float)uStack_c0 + fVar5 * (float)uStack_a0 +
         fVar13 * 0.0;
    *(float *)(param_1 + 0x8c) =
         fVar9 * uStack_b0._4_4_ + fVar8 * uStack_c0._4_4_ + fVar5 * uStack_a0._4_4_ + fVar14 * 0.0;
    *(float *)(param_1 + 0x90) =
         fVar20 * (float)local_b8 + fVar18 * (float)local_c8 + fVar21 * (float)local_a8 +
         fVar6 * 0.0;
    *(float *)(param_1 + 0x94) =
         fVar20 * local_b8._4_4_ + fVar18 * local_c8._4_4_ + fVar21 * local_a8._4_4_ + fVar11 * 0.0;
    *(float *)(param_1 + 0x98) =
         fVar20 * (float)uStack_b0 + fVar18 * (float)uStack_c0 + fVar21 * (float)uStack_a0 +
         fVar13 * 0.0;
    *(float *)(param_1 + 0x9c) =
         fVar20 * uStack_b0._4_4_ + fVar18 * uStack_c0._4_4_ + fVar21 * uStack_a0._4_4_ +
         fVar14 * 0.0;
    *(float *)(param_1 + 0xa0) =
         fVar15 * (float)local_b8 + fVar10 * (float)local_c8 + fVar12 * (float)local_a8 +
         fVar6 * 1.0;
    *(float *)(param_1 + 0xa4) =
         fVar15 * local_b8._4_4_ + fVar10 * local_c8._4_4_ + fVar12 * local_a8._4_4_ + fVar11 * 1.0;
    *(float *)(param_1 + 0xa8) =
         fVar15 * (float)uStack_b0 + fVar10 * (float)uStack_c0 + fVar12 * (float)uStack_a0 +
         fVar13 * 1.0;
    *(float *)(param_1 + 0xac) =
         fVar15 * uStack_b0._4_4_ + fVar10 * uStack_c0._4_4_ + fVar12 * uStack_a0._4_4_ +
         fVar14 * 1.0;
    uVar2 = _DAT_1464aa7d8;
    *(undefined8 *)(param_1 + 0xb0) = _DAT_1464aa7d0;
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    uVar2 = _DAT_1464aa7e8;
    *(undefined8 *)(param_1 + 0xc0) = _DAT_1464aa7e0;
    *(undefined8 *)(param_1 + 200) = uVar2;
    uVar2 = _DAT_1464aa7f8;
    *(undefined8 *)(param_1 + 0xd0) = _DAT_1464aa7f0;
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    uVar2 = CONCAT44(_DAT_1464aa80c,fRam00000001464aa808);
    *(ulonglong *)(param_1 + 0xe0) = CONCAT44(fRam00000001464aa804,_DAT_1464aa800);
    *(undefined8 *)(param_1 + 0xe8) = uVar2;
  }
  else {
    *(ulonglong *)(param_1 + 0x70) = CONCAT44(fVar7,fVar16);
    *(ulonglong *)(param_1 + 0x78) = (ulonglong)(uint)fVar17;
    *(ulonglong *)(param_1 + 0x80) = CONCAT44(fVar9,fVar8);
    *(ulonglong *)(param_1 + 0x88) = (ulonglong)(uint)fVar5;
    *(float *)(param_1 + 0xb0) = (float)local_c8;
    *(float *)(param_1 + 0xb4) = local_c8._4_4_;
    *(float *)(param_1 + 0xb8) = (float)uStack_c0;
    *(float *)(param_1 + 0xbc) = uStack_c0._4_4_;
    *(float *)(param_1 + 0xc0) = (float)local_b8;
    *(float *)(param_1 + 0xc4) = local_b8._4_4_;
    *(float *)(param_1 + 200) = (float)uStack_b0;
    *(float *)(param_1 + 0xcc) = uStack_b0._4_4_;
    *(ulonglong *)(param_1 + 0x90) = CONCAT44(fVar20,fVar18);
    *(ulonglong *)(param_1 + 0x98) = (ulonglong)(uint)fVar21;
    *(float *)(param_1 + 0xd0) = (float)local_a8;
    *(float *)(param_1 + 0xd4) = local_a8._4_4_;
    *(float *)(param_1 + 0xd8) = (float)uStack_a0;
    *(float *)(param_1 + 0xdc) = uStack_a0._4_4_;
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    *(ulonglong *)(param_1 + 0xa8) = CONCAT44(0x3f800000,fVar12);
    *(float *)(param_1 + 0xe0) = fVar6;
    *(float *)(param_1 + 0xe4) = fVar11;
    *(float *)(param_1 + 0xe8) = fVar13;
    *(float *)(param_1 + 0xec) = fVar14;
  }
  return;
}



// FUNCTION 14263b0c0 FUN_14263b0c0 body=15 status=ok
// SIG undefined FUN_14263b0c0(void)

byte FUN_14263b0c0(longlong param_1)

{
  return *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 100) & 1;
}



// FUNCTION 14263b0d0 FUN_14263b0d0 body=316 status=ok
// SIG undefined FUN_14263b0d0(void)

ulonglong FUN_14263b0d0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  uint uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 local_20 [16];
  
  uStack_54 = 1;
  uVar1 = *(uint *)(param_1 + 0x68);
  local_58 = 0;
  uStack_44 = 0;
  iStack_40 = 0;
  if (uVar1 != 0) {
    puVar6 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 0x50);
    }
    uVar2 = *puVar6;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar4 = local_58 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar4;
      if (bVar3) goto LAB_14263b18f;
      uVar2 = puVar6[lVar5 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    uStack_44 = (iStack_40 - iVar4) + 0x1f;
    if ((int)uVar1 < (int)uStack_44) {
LAB_14263b18f:
      uStack_44 = uVar1;
    }
  }
  local_20._4_4_ = uStack_44;
  local_20._0_4_ = 0xffffffff;
  local_20._8_4_ = iStack_40;
  local_20._12_4_ = uStack_3c;
  puStack_28 = (uint *)(ulonglong)uStack_44;
  local_30 = local_58;
  uStack_2c = uStack_54;
  puVar6 = (uint *)(param_1 + 0x50);
  if ((int)uStack_44 < (int)uVar1) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)uStack_44 * 8);
      if ((*(int *)(lVar5 + 0x244) == 1) && (0 < *(int *)(lVar5 + 0x44))) {
        return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1);
      }
      local_20._0_4_ = local_20._0_4_ & ~uStack_2c;
      puStack_28 = puVar6;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      uStack_44 = local_20._4_4_;
      puVar6 = puStack_28;
    } while ((int)local_20._4_4_ < (int)puStack_28[6]);
  }
  return (ulonglong)puStack_28 & 0xffffffffffffff00;
}



// FUNCTION 14263b210 FUN_14263b210 body=623 status=ok
// SIG undefined FUN_14263b210(void)

void FUN_14263b210(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  DWORD DVar8;
  undefined8 uVar9;
  DWORD *pDVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  LARGE_INTEGER local_res18;
  longlong local_res20;
  LARGE_INTEGER local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)))) {
    uVar6 = DAT_146b047cc;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x80);
    uVar9 = FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_48);
    uVar17 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x228);
    uVar14 = uVar17 ^ 1;
    if (*(float *)(DAT_146b057b0 + 4) <= 0.0) {
      uVar14 = uVar17;
    }
    FUN_14263b480(uVar9,uVar3,uVar6,uVar4,uVar14 * 0x58 + *(longlong *)(param_1 + 0x78),
                  DAT_146534458);
    QueryPerformanceCounter(&local_res18);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_48._0_4_);
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  lVar5 = *(longlong *)(param_2 + 0x58);
  pDVar10 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar11 = TlsGetValue(*pDVar10);
  plVar15 = (longlong *)0x0;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = (longlong *)operator_new(0x18);
    if (plVar11 != (longlong *)0x0) {
      *plVar11 = 0;
      plVar11[1] = 0;
      *(undefined4 *)(plVar11 + 2) = 0;
      plVar15 = plVar11;
    }
    TlsSetValue(*pDVar10,plVar15);
    plVar11 = plVar15;
  }
  plVar15 = (longlong *)plVar11[1];
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)*plVar11;
    if (plVar15 == (longlong *)0x0) {
      lVar12 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar10 + 2);
      plVar11[1] = lVar12;
      if (lVar12 == 0) {
        puVar13 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar11[1] = (longlong)puVar13;
        lVar12 = 0x1f;
        do {
          puVar2 = puVar13 + 0x20;
          *puVar13 = puVar2;
          lVar12 = lVar12 + -1;
          puVar13 = puVar2;
        } while (lVar12 != 0);
        *puVar2 = 0;
      }
      plVar15 = (longlong *)plVar11[1];
      iVar16 = 0x20;
      *(undefined4 *)(plVar11 + 2) = 0x20;
    }
    else {
      iVar16 = 0x20;
      plVar11[1] = (longlong)plVar15;
      *(undefined4 *)(plVar11 + 2) = 0x20;
      *plVar11 = 0;
    }
  }
  else {
    iVar16 = (int)plVar11[2];
  }
  plVar11[1] = *plVar15;
  *(int *)(plVar11 + 2) = iVar16 + -1;
  *plVar15 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar15 + 1) = 0xff;
  local_40 = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
  *(undefined1 *)(plVar15 + 6) = 0;
  *plVar15 = (longlong)&PTR_FUN_14513b288;
  plVar15[7] = 0;
  uVar6 = DAT_146b047cc;
  plVar15[2] = param_1;
  *(undefined4 *)(plVar15 + 3) = uVar6;
  plVar15[4] = lVar5;
  *(undefined4 *)(plVar15 + 5) = uVar3;
  lVar5 = plVar15[7];
  piVar1 = (int *)(lVar5 + 0x48);
  if (lVar5 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res20 = lVar5;
  FUN_14048a640(plVar15,0,0xff,1);
  if (lVar5 != 0) {
    LOCK();
    iVar16 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar16 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 14263b480 FUN_14263b480 body=1582 status=ok
// SIG undefined FUN_14263b480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14263b480(longlong param_1,int param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  int local_188 [2];
  int local_180;
  int local_17c;
  int local_178;
  undefined4 local_174;
  longlong local_170;
  longlong local_168 [2];
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulonglong local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  plVar14 = (longlong *)0x0;
  local_188[0] = 0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x26;
  local_c4 = 0;
  local_bc = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_64 = 0;
  local_174 = param_3;
  (**(code **)(*param_4 + 0x20))(param_4,&local_180);
  puVar5 = (undefined8 *)(**(code **)(*param_4 + 8))(param_4);
  FUN_141a19150(param_1,*puVar5,0,0);
  FUN_14049afe0(param_1,&local_118);
  iVar4 = local_17c;
  iVar10 = local_180;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f59420;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(int *)((longlong)puVar11 + 0x1c) = iVar10;
  *(int *)(puVar11 + 4) = iVar4;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_d8 = FUN_1409853f0();
  uStack_e0 = FUN_140985530();
  local_e8 = FUN_1404a0ce0();
  lVar6 = FUN_1419ef210((&DAT_1464c9c48)[param_2]);
  local_130 = 0;
  local_138 = &DAT_146b06120;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar6 + 0x38),&local_178,&local_138);
  plVar15 = plVar14;
  if (local_178 != -1) {
    plVar15 = (longlong *)((longlong)local_178 * 0x20 + *(longlong *)(lVar6 + 0x38));
  }
  plVar13 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  lVar6 = *plVar13;
  lVar7 = FUN_1419ef210((&DAT_1464c9c48)[param_2]);
  local_120 = 0;
  local_128 = &DAT_146b06270;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(lVar7 + 0x38),local_188,&local_128);
  plVar15 = plVar14;
  if (local_188[0] != -1) {
    plVar15 = (longlong *)((longlong)local_188[0] * 0x20 + *(longlong *)(lVar7 + 0x38));
  }
  plVar13 = plVar15 + 2;
  if (plVar15 == (longlong *)0x0) {
    plVar13 = plVar14;
  }
  lVar7 = *plVar13;
  local_118 = DAT_1465345a8;
  if (lVar6 == 0) {
    local_148 = 0;
    plVar15 = (longlong *)0x1;
    plStack_110 = plVar14;
  }
  else {
    lVar9 = *(longlong *)(lVar6 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    plStack_110 = *(longlong **)(lVar9 + 0x38);
    plVar15 = plVar14;
  }
  uVar8 = 0;
  if (plVar15 != (longlong *)0x0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_148);
  }
  bVar3 = false;
  if (lVar7 == 0) {
    bVar3 = true;
    local_140 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar7 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    uVar8 = *(undefined8 *)(lVar9 + 0x40);
  }
  lVar9 = 0;
  local_f8 = uVar8;
  if (bVar3) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_140);
  }
  local_cc = local_cc & 0xffffffff00000000;
  FUN_141ed6ac0(param_1,&local_118,2,1);
  local_198 = (ulonglong)local_198._4_4_ << 0x20;
  local_158 = 512.0 / (float)local_180;
  local_154 = 512.0 / (float)local_17c;
  local_150 = 120.0 / (float)local_180 - 1.0;
  local_14c = 120.0 / (float)local_17c - 1.0;
  (**(code **)(*DAT_146ab6358 + 0x110))(DAT_146ab6358,&local_170,&local_158,&DAT_146b060b8);
  local_168[0] = local_170;
  if (local_170 != 0) {
    LOCK();
    *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
    UNLOCK();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_170);
  lVar2 = *(longlong *)(lVar6 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  iVar10 = 0;
  uVar8 = *(undefined8 *)(lVar2 + 0x38);
  if (0 < *(int *)(lVar6 + 0x10)) {
    do {
      if (*(undefined **)(*(longlong *)(lVar6 + 8) + lVar9 * 8) == &DAT_146b06090) {
        if (iVar10 != -1) {
          puVar12 = *(undefined4 **)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar10 * 8);
          *puVar12 = *(undefined4 *)(lVar6 + 0xb8);
          goto LAB_14263b862;
        }
        break;
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar6 + 0x10));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b06da8) && (_Init_thread_header(&DAT_146b06da8), DAT_146b06da8 == -1))
  {
    _DAT_146b06da0 = 0;
    DAT_146b06da4 = 0;
    DAT_146b06da6 = 0;
    _Init_thread_footer(&DAT_146b06da8);
  }
  puVar12 = (undefined4 *)&DAT_146b06da0;
LAB_14263b862:
  if (*(char *)((longlong)puVar12 + 6) != '\0') {
    uVar1 = *(ushort *)(puVar12 + 1);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar5;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144dcb388;
    puVar11[2] = uVar8;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
    puVar11[4] = local_170;
  }
  local_198 = param_6;
  FParticleSimVisualizePS::SetParameters(lVar7,param_1,local_174,*(undefined8 *)(param_5 + 0x38));
  uVar8 = DAT_146534600;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar11 + 5;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar11 + 5;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f489e0;
  *(undefined4 *)(puVar11 + 2) = 0;
  puVar11[3] = uVar8;
  *(undefined4 *)(puVar11 + 4) = 0;
  lVar6 = DAT_146534670;
  if (DAT_146534670 == 0) {
    LowLevelFatalErrorHandler
              ("Unknown",0x8d8,L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x8d8,
               L"Tried to call DrawIndexedPrimitive with null IndexBuffer!");
  }
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar11 + 7;
  if (*(undefined8 **)(param_1 + 0x38) < puVar5) {
    FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x40);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar11 + 7;
  }
  *(undefined8 **)(param_1 + 0x30) = puVar5;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  **(undefined8 **)(param_1 + 8) = puVar11;
  *(undefined8 **)(param_1 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_143f489d0;
  puVar11[2] = lVar6;
  puVar11[3] = 0;
  *(undefined4 *)(puVar11 + 4) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x24) = 4;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = 2;
  *(undefined4 *)(puVar11 + 6) = 1;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_168);
  return;
}



// FUNCTION 14263bab0 FUN_14263bab0 body=598 status=ok
// SIG undefined FUN_14263bab0(void)

longlong * FUN_14263bab0(longlong *param_1)

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
  *puVar3 = L"LocalToWorldScale";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 2;
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
  *puVar3 = L"EmitterInstRandom";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 8;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"UseLocalSpace";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0xc;
  puVar1[1] = 2;
  puVar1[2] = 0;
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
  *puVar3 = L"AxisLockRight";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"AxisLockUp";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000020;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 14263bd10 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FGPUSpriteEmitterUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"ColorCurve";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
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
  *puVar3 = L"ColorScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"ColorBias";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"MiscCurve";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"MiscScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000040;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 14263bf70 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FGPUSpriteEmitterUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CameraFacingBlend";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
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
  *puVar1 = L"RemoveHMDRoll";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x9c;
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
  *puVar1 = L"RotationRateScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa0;
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
  *puVar1 = L"RotationBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000000a4;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 14263c170 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FGPUSpriteEmitterUniformParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MiscBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
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
  *puVar1 = L"SizeBySpeed";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
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
  *puVar1 = L"SubImageSize";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
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
  *puVar1 = L"TangentSelector";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000080;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 14263c370 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSimulationParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"MiscCurve";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x50;
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
  *puVar1 = L"MiscScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x60;
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
  *puVar1 = L"MiscBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x70;
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
  *puVar1 = L"Acceleration";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000080;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 14263c570 zzGetMembersBefore body=598 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSimulationParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"AttributeCurve";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
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
  *puVar3 = L"AttributeCurveScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"AttributeCurveBias";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"AttributeScale";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
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
  *puVar3 = L"AttributeBias";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000040;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 4;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 14263c7d0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSimulationParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OrbitPhaseBase";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xd0;
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
  *puVar1 = L"OrbitPhaseRange";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xe0;
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
  *puVar1 = L"CollisionRadiusScale";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xec;
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
  *puVar1 = L"CollisionRadiusBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000000f0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 14263c9d0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSimulationParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"CollisionTimeBias";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xf4;
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
  *puVar1 = L"CollisionRandomSpread";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xf8;
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
  *puVar1 = L"CollisionRandomDistribution";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xfc;
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
  *puVar1 = L"OneMinusFriction";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x400000100;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 14263cbd0 zzGetMembersBefore body=507 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FParticleSimulationParameters::zzGetMembersBefore(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8;
  
  zzGetMembersBefore(param_1,local_res8);
  iVar3 = (int)param_1[1];
  lVar5 = (longlong)iVar3;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar1 = L"OrbitOffsetBase";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0x90;
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
  *puVar1 = L"OrbitOffsetRange";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xa0;
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
  *puVar1 = L"OrbitFrequencyBase";
  puVar1[1] = &DAT_143f3eda8;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar2 = 0xb0;
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
  *puVar1 = L"OrbitFrequencyRange";
  puVar1[1] = &DAT_143f3eda8;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x4000000c0;
  puVar1[1] = 0x100000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 3;
  puVar1[1] = 0;
  return param_1;
}



// FUNCTION 14263cdd0 zzGetMembersBefore body=622 status=ok
// SIG undefined zzGetMembersBefore(void)

longlong * FVectorFieldUniformParameters::zzGetMembersBefore(longlong *param_1)

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
  *puVar3 = L"Count";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 2;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 1;
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
  *puVar3 = L"WorldToVolume";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 4;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 4;
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
  *puVar3 = L"VolumeToWorld";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x110;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 4;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 4;
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
  *puVar3 = L"IntensityAndTightness";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x210;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 4;
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
  *puVar3 = L"VolumeSize";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x400000250;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 0x400000004;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 14263d040 NewObject<UDistributionVectorConstantCurve> body=146 status=ok
// SIG undefined NewObject<UDistributionVectorConstantCurve>(void)

void NewObject<UDistributionVectorConstantCurve>
               (undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
               undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar1 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,param_2,param_3,0,param_4,param_5,param_6,0);
  return;
}



// FUNCTION 14263d0e0 FGPUSpriteEmitterInfo body=590 status=ok
// SIG undefined FGPUSpriteEmitterInfo(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FGPUSpriteEmitterInfo::FGPUSpriteEmitterInfo(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  uVar1 = uRam0000000146b06ddc;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(uint *)((longlong)param_1 + 0x4c) = uVar1;
  uVar1 = uRam0000000146b06dd4 & uRam0000000146b06de4;
  uVar2 = uRam0000000146b06dd8 & uRam0000000146b06de8;
  uVar3 = uRam0000000146b06ddc & uRam0000000146b06dec;
  *(uint *)(param_1 + 0xc) = _DAT_146b06dd0 & _DAT_146b06de0;
  *(uint *)((longlong)param_1 + 100) = uVar1;
  *(uint *)(param_1 + 0xd) = uVar2;
  *(uint *)((longlong)param_1 + 0x6c) = uVar3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(uint *)((longlong)param_1 + 0x9c) = *(uint *)((longlong)param_1 + 0x9c) & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x14);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x19);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x1e);
  FComposableFloatDistribution::FComposableFloatDistribution(param_1 + 0x23);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  *(uint *)((longlong)param_1 + 0x18c) = *(uint *)((longlong)param_1 + 0x18c) & 0xfffffffe;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(uint *)((longlong)param_1 + 0x194) = *(uint *)((longlong)param_1 + 0x194) & 0xfffffffe;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x3b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = DAT_1468b5d98;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x4c) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x264) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x26c) = DAT_1468b5d98;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  return param_1;
}



// FUNCTION 14263d330 FGPUSpriteResourceData body=292 status=ok
// SIG undefined FGPUSpriteResourceData(void)

undefined8 * FGPUSpriteResourceData::FGPUSpriteResourceData(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xbf000000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xbf000000;
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) & 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  return param_1;
}



// FUNCTION 14263d460 FUN_14263d460 body=127 status=ok
// SIG undefined FUN_14263d460(void)

undefined8 * FUN_14263d460(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FDistributionLookupTable::FDistributionLookupTable(param_1 + 3,param_2 + 3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_1[9] = param_2[9];
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)((longlong)param_2 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 14263d4e0 FUN_14263d4e0 body=189 status=ok
// SIG undefined FUN_14263d4e0(void)

undefined1 * FUN_14263d4e0(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(uint *)(param_1 + 0xc) =
       *(uint *)(param_1 + 0xc) ^ (*(uint *)(param_1 + 0xc) ^ *(uint *)(param_2 + 0xc)) & 1;
  uVar2 = (*(uint *)(param_2 + 0xc) ^ *(uint *)(param_1 + 0xc)) & 2 ^ *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0xc)) & 4 ^ uVar2;
  *(uint *)(param_1 + 0xc) = uVar2;
  *(uint *)(param_1 + 0xc) = (uVar2 ^ *(uint *)(param_2 + 0xc)) & 8 ^ uVar2;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 0x18,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 14263d5a0 FUN_14263d5a0 body=44 status=ok
// SIG undefined FUN_14263d5a0(void)

undefined8 * FUN_14263d5a0(undefined8 *param_1)

{
  FUN_142404a50();
  *param_1 = &PTR_FUN_14513efe8;
  param_1[5] = &PTR_SetMonitoring_145096c90;
  return param_1;
}



// FUNCTION 14263d5d0 FUN_14263d5d0 body=44 status=ok
// SIG undefined FUN_14263d5d0(void)

undefined8 * FUN_14263d5d0(undefined8 *param_1)

{
  FUN_142404bc0();
  *param_1 = &PTR_FUN_14513f298;
  param_1[5] = &PTR_SetMonitoring_1450972f8;
  return param_1;
}



// FUNCTION 14263d600 UParticleModule body=49 status=ok
// SIG undefined UParticleModule(void)

undefined8 * UParticleModule::UParticleModule(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fe39f8;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  return param_1;
}



// FUNCTION 14263d640 FUN_14263d640 body=135 status=ok
// SIG undefined FUN_14263d640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263d640(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14513f8d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 14263d6d0 FUN_14263d6d0 body=49 status=ok
// SIG undefined FUN_14263d6d0(void)

undefined8 * FUN_14263d6d0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_14513f550;
  return param_1;
}



// FUNCTION 14263d710 FUN_14263d710 body=47 status=ok
// SIG undefined FUN_14263d710(void)

undefined8 * FUN_14263d710(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 899;
  *param_1 = &PTR_FUN_14513fc50;
  return param_1;
}



// FUNCTION 14263d740 FUN_14263d740 body=89 status=ok
// SIG undefined FUN_14263d740(void)

undefined8 * FUN_14263d740(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14513ffd0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  return param_1;
}



// FUNCTION 14263d7a0 FUN_14263d7a0 body=81 status=ok
// SIG undefined FUN_14263d7a0(void)

undefined8 * FUN_14263d7a0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145140350;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 14263d800 FUN_14263d800 body=139 status=ok
// SIG undefined FUN_14263d800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263d800(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451406d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  return param_1;
}



// FUNCTION 14263d890 FUN_14263d890 body=49 status=ok
// SIG undefined FUN_14263d890(void)

undefined8 * FUN_14263d890(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_143fe39f8;
  return param_1;
}



// FUNCTION 14263d8d0 FUN_14263d8d0 body=149 status=ok
// SIG undefined FUN_14263d8d0(void)

undefined8 * FUN_14263d8d0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145140dd0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x42;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x41200000;
  *(undefined4 *)(param_1 + 9) = 0x42c80000;
  return param_1;
}



// FUNCTION 14263d970 FUN_14263d970 body=280 status=ok
// SIG undefined FUN_14263d970(void)

undefined8 * FUN_14263d970(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145141150;
  pvVar2 = ThreadLocalStoragePointer;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146b06f50) {
    _Init_thread_header(&DAT_146b06f50);
    if (DAT_146b06f50 == -1) {
      FName::FName(&DAT_146b06f48,L"Particle Emitter",1);
      _Init_thread_footer(&DAT_146b06f50);
    }
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | 1;
  *(uint *)(param_1 + 0x17) = *(uint *)(param_1 + 0x17) & 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[7] = DAT_146b06f48;
  return param_1;
}



// FUNCTION 14263da90 FUN_14263da90 body=246 status=ok
// SIG undefined FUN_14263da90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263da90(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451414d0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x42;
  *(uint *)(param_1 + 0x1f) = *(uint *)(param_1 + 0x1f) & 0xfffffff9 | 0x3f1;
  return param_1;
}



// FUNCTION 14263db90 FUN_14263db90 body=88 status=ok
// SIG undefined FUN_14263db90(void)

undefined8 * FUN_14263db90(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145140a50;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
  return param_1;
}



// FUNCTION 14263dbf0 FUN_14263dbf0 body=167 status=ok
// SIG undefined FUN_14263dbf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263dbf0(undefined8 *param_1)

{
  FUN_1425f9f70();
  *param_1 = &PTR_FUN_14513e1c0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x42;
  *(undefined4 *)(param_1 + 0x11) = 0x447a0000;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  return param_1;
}



// FUNCTION 14263dca0 FUN_14263dca0 body=49 status=ok
// SIG undefined FUN_14263dca0(void)

undefined8 * FUN_14263dca0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145141f50;
  return param_1;
}



// FUNCTION 14263dce0 FUN_14263dce0 body=92 status=ok
// SIG undefined FUN_14263dce0(void)

undefined8 * FUN_14263dce0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145148358;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) & 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  return param_1;
}



// FUNCTION 14263dd40 FUN_14263dd40 body=545 status=ok
// SIG undefined FUN_14263dd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263dd40(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 uVar3;
  
  FUN_141781840();
  plVar1 = param_1 + 0x23;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451486d8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xc4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_1468b5d98;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *plVar1 = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(uint *)(param_1 + 0x26) = *(uint *)(param_1 + 0x26) & 0xfffffffe;
  *(uint *)(param_1 + 0x26) = *(uint *)(param_1 + 0x26) | 2;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffdff;
  *(uint *)((longlong)param_1 + 0x174) = *(uint *)((longlong)param_1 + 0x174) | 1;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 7;
  *(undefined4 *)(param_1 + 0x2e) = 0x40600000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x447a0000;
  uVar3 = UEngineTypes::ConvertToTraceType();
  iVar2 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x24) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0x124) < iVar2 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined1 *)((longlong)iVar2 + *plVar1) = uVar3;
  return param_1;
}



// FUNCTION 14263df70 FUN_14263df70 body=160 status=ok
// SIG undefined FUN_14263df70(void)

undefined8 * FUN_14263df70(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145147fd8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  return param_1;
}



// FUNCTION 14263e010 FUN_14263e010 body=194 status=ok
// SIG undefined FUN_14263e010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263e010(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145148a60;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd | 0x11;
  return param_1;
}



// FUNCTION 14263e0e0 FUN_14263e0e0 body=197 status=ok
// SIG undefined FUN_14263e0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263e0e0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145148de0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x13;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd | 1;
  return param_1;
}



// FUNCTION 14263e1b0 FUN_14263e1b0 body=186 status=ok
// SIG undefined FUN_14263e1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263e1b0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145149160;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x13;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffffd;
  return param_1;
}



// FUNCTION 14263e270 FUN_14263e270 body=250 status=ok
// SIG undefined FUN_14263e270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263e270(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145148a60;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd | 0x11;
  *param_1 = &PTR__scalar_deleting_destructor__1451494e0;
  param_1[0x19] = 0;
  *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) & 0xfffffff4 | 4;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  return param_1;
}



// FUNCTION 14263e370 FUN_14263e370 body=49 status=ok
// SIG undefined FUN_14263e370(void)

undefined8 * FUN_14263e370(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_14513e8c8;
  return param_1;
}



// FUNCTION 14263e3b0 FUN_14263e3b0 body=63 status=ok
// SIG undefined FUN_14263e3b0(void)

undefined8 * FUN_14263e3b0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14513ec48;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 14263e3f0 FUN_14263e3f0 body=55 status=ok
// SIG undefined FUN_14263e3f0(void)

undefined8 * FUN_14263e3f0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145149860;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 14263e430 FUN_14263e430 body=59 status=ok
// SIG undefined FUN_14263e430(void)

undefined8 * FUN_14263e430(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  param_1[8] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *param_1 = &PTR_FUN_145149bf0;
  return param_1;
}



// FUNCTION 14263e470 FUN_14263e470 body=316 status=ok
// SIG undefined FUN_14263e470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263e470(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145149f80;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xc4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_1468b5d98;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar1 = (ulonglong)_tls_index;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd | 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146b06f60) {
    _Init_thread_header(&DAT_146b06f60);
    if (DAT_146b06f60 == -1) {
      FName::FName(&DAT_146b06f58,L"TestEvent",1);
      _Init_thread_footer(&DAT_146b06f60);
    }
  }
  param_1[8] = DAT_146b06f58;
  return param_1;
}



// FUNCTION 14263e5b0 UAIDataProvider body=33 status=ok
// SIG undefined UAIDataProvider(void)

undefined8 * UAIDataProvider::UAIDataProvider(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144288f08;
  return param_1;
}



// FUNCTION 14263e5e0 FUN_14263e5e0 body=242 status=ok
// SIG undefined FUN_14263e5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263e5e0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145141850;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xc4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_1468b5d98;
  param_1[0x1a] = 0;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) | 4;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x62;
  return param_1;
}



// FUNCTION 14263e6e0 FUN_14263e6e0 body=85 status=ok
// SIG undefined FUN_14263e6e0(void)

undefined8 * FUN_14263e6e0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145141bd0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x62;
  return param_1;
}



// FUNCTION 14263e740 UParticleModuleVelocityInheritParent body=85 status=ok
// SIG undefined UParticleModuleVelocityInheritParent(void)

undefined8 *
UParticleModuleVelocityInheritParent::UParticleModuleVelocityInheritParent(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145142e28;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 14263e7a0 FUN_14263e7a0 body=49 status=ok
// SIG undefined FUN_14263e7a0(void)

undefined8 * FUN_14263e7a0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_1451429d0;
  return param_1;
}



// FUNCTION 14263e7e0 FUN_14263e7e0 body=228 status=ok
// SIG undefined FUN_14263e7e0(void)

undefined8 * FUN_14263e7e0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_1451431b8;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06f40)
  {
    _Init_thread_header(&DAT_146b06f40);
    if (DAT_146b06f40 == -1) {
      FName::FName(&DAT_146b06f38,"LifetimeSeed",1);
      _Init_thread_footer(&DAT_146b06f40);
    }
  }
  param_1[0xe] = DAT_146b06f38;
  return param_1;
}



// FUNCTION 14263e8d0 FUN_14263e8d0 body=317 status=ok
// SIG undefined FUN_14263e8d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263e8d0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451422d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xf9 | 1;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x73;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return param_1;
}



// FUNCTION 14263ea10 FUN_14263ea10 body=482 status=ok
// SIG undefined FUN_14263ea10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263ea10(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451422d0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(byte *)(param_1 + 0x27) = *(byte *)(param_1 + 0x27) & 0xf9 | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x73;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145142650;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  param_1[0x29] = 0;
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06f30)
  {
    _Init_thread_header(&DAT_146b06f30);
    if (DAT_146b06f30 == -1) {
      FName::FName(&DAT_146b06f28,L"LightSeed",1);
      _Init_thread_footer(&DAT_146b06f30);
    }
  }
  param_1[0x29] = DAT_146b06f28;
  return param_1;
}



// FUNCTION 14263ec00 FUN_14263ec00 body=138 status=ok
// SIG undefined FUN_14263ec00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263ec00(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14514a310;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x41;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 14263ec90 FUN_14263ec90 body=638 status=ok
// SIG undefined FUN_14263ec90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263ec90(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  
  FUN_141781840();
  plVar1 = param_1 + 0x13;
  uVar6 = (ulonglong)_tls_index;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_14514a698;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x84) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x8c) = DAT_1468b5d98;
  pvVar5 = ThreadLocalStoragePointer;
  param_1[0x12] = 0;
  *plVar1 = 0;
  param_1[0x14] = 0;
  lVar3 = *(longlong *)((longlong)pvVar5 + uVar6 * 8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  if (*(int *)(lVar3 + 0x38) < DAT_146b06fd8) {
    _Init_thread_header(&DAT_146b06fd8);
    if (DAT_146b06fd8 == -1) {
      FName::FName(&DAT_146b06fd0,L"BoneSocketActor",1);
      _Init_thread_footer(&DAT_146b06fd8);
    }
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x4f;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar4 = DAT_146b06fd0;
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) | 2;
  param_1[0x1e] = uVar4;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 2;
  *(undefined4 *)(param_1 + 0x1f) = 10;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3f800000;
  local_40 = _DAT_1468b5d90;
  local_34 = _DAT_1468b5d90;
  local_70 = 0;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = DAT_1468b5d98;
  local_2c = DAT_1468b5d98;
  local_28 = 0;
  FName::FName(&local_res8,L"Root",1);
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xa4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar1,iVar2);
  }
  puVar7 = (undefined8 *)((longlong)iVar2 * 0x68 + *plVar1);
  *puVar7 = local_res8;
  puVar7[1] = local_80;
  *(undefined4 *)(puVar7 + 2) = local_78;
  FDistributionLookupTable::FDistributionLookupTable(puVar7 + 3,&local_70);
  *(undefined4 *)(puVar7 + 8) = (undefined4)local_48;
  puVar7[9] = local_40;
  *(undefined4 *)(puVar7 + 10) = local_38;
  *(undefined8 *)((longlong)puVar7 + 0x54) = local_34;
  *(undefined4 *)((longlong)puVar7 + 0x5c) = local_2c;
  puVar7[0xc] = local_28;
  *(undefined4 *)((longlong)puVar7 + 0x44) = local_48._4_4_;
  if (local_60 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14263ef10 FUN_14263ef10 body=441 status=ok
// SIG undefined FUN_14263ef10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263ef10(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14514aa18;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xc4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xcc) = DAT_1468b5d98;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x22) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x114) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x11c) = DAT_1468b5d98;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x2c) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x164) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x16c) = DAT_1468b5d98;
  param_1[0x2e] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 14263f0d0 FUN_14263f0d0 body=223 status=ok
// SIG undefined FUN_14263f0d0(void)

undefined8 * FUN_14263f0d0(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  FUN_141781840();
  uVar2 = (ulonglong)_tls_index;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14514ad98;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar2 * 8) + 0x38) <
      DAT_146b06f90) {
    _Init_thread_header(&DAT_146b06f90);
    if (DAT_146b06f90 == -1) {
      FName::FName(&DAT_146b06f88,L"Particle Emitter",1);
      _Init_thread_footer(&DAT_146b06f90);
    }
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *(undefined1 *)(param_1 + 8) = 0;
  uVar1 = DAT_146b06f88;
  *(uint *)((longlong)param_1 + 0x44) = *(uint *)((longlong)param_1 + 0x44) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) & 0xfffffffe;
  param_1[7] = uVar1;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  return param_1;
}



// FUNCTION 14263f1b0 FUN_14263f1b0 body=216 status=ok
// SIG undefined FUN_14263f1b0(void)

undefined8 * FUN_14263f1b0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  FUN_141781840();
  uVar1 = (ulonglong)_tls_index;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14514b118;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146b06fa8) {
    _Init_thread_header(&DAT_146b06fa8);
    if (DAT_146b06fa8 == -1) {
      FName::FName(&DAT_146b06f98,&DAT_143f3edc8,1);
      FName::FName(&DAT_146b06fa0,L"Particle Emitter",1);
      _Init_thread_footer(&DAT_146b06fa8);
    }
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  param_1[7] = DAT_146b06fa0;
  return param_1;
}



// FUNCTION 14263f290 FUN_14263f290 body=196 status=ok
// SIG undefined FUN_14263f290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263f290(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14514b498;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x16) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xb4) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_1468b5d98;
  param_1[0x18] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xffffff3f | 0x3f;
  return param_1;
}



// FUNCTION 14263f360 FUN_14263f360 body=151 status=ok
// SIG undefined FUN_14263f360(void)

undefined8 * FUN_14263f360(undefined8 *param_1)

{
  FUN_14263f290();
  *param_1 = &PTR__scalar_deleting_destructor__14514b820;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
  *(undefined1 *)(param_1 + 0x28) = 2;
  return param_1;
}



// FUNCTION 14263f400 FUN_14263f400 body=306 status=ok
// SIG undefined FUN_14263f400(void)

undefined8 * FUN_14263f400(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_14263f290();
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
  *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) | 1;
  *(undefined1 *)(param_1 + 0x28) = 2;
  *param_1 = &PTR__scalar_deleting_destructor__14514bba8;
  param_1[0x29] = 0;
  *(uint *)(param_1 + 0x2a) = *(uint *)(param_1 + 0x2a) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06fb8)
  {
    _Init_thread_header(&DAT_146b06fb8);
    if (DAT_146b06fb8 == -1) {
      FName::FName(&DAT_146b06fb0,L"CylinderSeed",1);
      _Init_thread_footer(&DAT_146b06fb8);
    }
  }
  param_1[0x29] = DAT_146b06fb0;
  return param_1;
}



// FUNCTION 14263f540 FUN_14263f540 body=90 status=ok
// SIG undefined FUN_14263f540(void)

undefined8 * FUN_14263f540(undefined8 *param_1)

{
  FUN_14263f290();
  *param_1 = &PTR__scalar_deleting_destructor__14514bf30;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
  return param_1;
}



// FUNCTION 14263f5a0 FUN_14263f5a0 body=245 status=ok
// SIG undefined FUN_14263f5a0(void)

undefined8 * FUN_14263f5a0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_14263f290();
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__14514c2b8;
  param_1[0x20] = 0;
  *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06fc8)
  {
    _Init_thread_header(&DAT_146b06fc8);
    if (DAT_146b06fc8 == -1) {
      FName::FName(&DAT_146b06fc0,L"SphereSeed",1);
      _Init_thread_footer(&DAT_146b06fc8);
    }
  }
  param_1[0x20] = DAT_146b06fc0;
  return param_1;
}



// FUNCTION 14263f6a0 FUN_14263f6a0 body=273 status=ok
// SIG undefined FUN_14263f6a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263f6a0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14514c640;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x61;
  return param_1;
}



// FUNCTION 14263f7c0 FUN_14263f7c0 body=228 status=ok
// SIG undefined FUN_14263f7c0(void)

undefined8 * FUN_14263f7c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  FUN_141781840();
  uVar4 = (ulonglong)_tls_index;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__14514c9c0;
  pvVar3 = ThreadLocalStoragePointer;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar4 * 8);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_146b06fe8) {
    _Init_thread_header(&DAT_146b06fe8);
    if (DAT_146b06fe8 == -1) {
      FName::FName(&DAT_146b06fe0,L"VertSurfaceActor",1);
      _Init_thread_footer(&DAT_146b06fe8);
    }
  }
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x4f;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar2 = DAT_146b06fe0;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 2;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xfffffffe;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffffd;
  param_1[10] = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  return param_1;
}



// FUNCTION 14263f8b0 FUN_14263f8b0 body=33 status=ok
// SIG undefined FUN_14263f8b0(void)

undefined8 * FUN_14263f8b0(undefined8 *param_1)

{
  FUN_14263ec00();
  *param_1 = &PTR__scalar_deleting_destructor__14514cd40;
  return param_1;
}



// FUNCTION 14263f8e0 FUN_14263f8e0 body=190 status=ok
// SIG undefined FUN_14263f8e0(void)

undefined8 * FUN_14263f8e0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_14263ec00();
  *param_1 = &PTR_FUN_14514d0c8;
  param_1[0x12] = 0;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06f80)
  {
    _Init_thread_header(&DAT_146b06f80);
    if (DAT_146b06f80 == -1) {
      FName::FName(&DAT_146b06f78,L"WorldOffsetSeed",1);
      _Init_thread_footer(&DAT_146b06f80);
    }
  }
  param_1[0x12] = DAT_146b06f78;
  return param_1;
}



// FUNCTION 14263f9a0 FUN_14263f9a0 body=190 status=ok
// SIG undefined FUN_14263f9a0(void)

undefined8 * FUN_14263f9a0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_14263ec00();
  *param_1 = &PTR_FUN_14514d450;
  param_1[0x12] = 0;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06f70)
  {
    _Init_thread_header(&DAT_146b06f70);
    if (DAT_146b06f70 == -1) {
      FName::FName(&DAT_146b06f68,L"InitialLocationSeed",1);
      _Init_thread_footer(&DAT_146b06f70);
    }
  }
  param_1[0x12] = DAT_146b06f68;
  return param_1;
}



// FUNCTION 14263fa60 FUN_14263fa60 body=139 status=ok
// SIG undefined FUN_14263fa60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263fa60(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145144348;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffe;
  return param_1;
}



// FUNCTION 14263faf0 UParticleModuleAcceleration body=132 status=ok
// SIG undefined UParticleModuleAcceleration(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UParticleModuleAcceleration::UParticleModuleAcceleration(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451454c8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 14263fb80 UParticleModuleAcceleration body=132 status=ok
// SIG undefined UParticleModuleAcceleration(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UParticleModuleAcceleration::UParticleModuleAcceleration(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145145f48;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 14263fc10 UParticleModuleAcceleration body=132 status=ok
// SIG undefined UParticleModuleAcceleration(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UParticleModuleAcceleration::UParticleModuleAcceleration(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451462c8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 14263fca0 FUN_14263fca0 body=297 status=ok
// SIG undefined FUN_14263fca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263fca0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451454c8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *param_1 = &PTR_FUN_145145bc8;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06ef8)
  {
    _Init_thread_header(&DAT_146b06ef8);
    if (DAT_146b06ef8 == -1) {
      FName::FName(&DAT_146b06ef0,L"MeshRotRateSeed",1);
      _Init_thread_footer(&DAT_146b06ef8);
    }
  }
  param_1[0x11] = DAT_146b06ef0;
  return param_1;
}



// FUNCTION 14263fdd0 FUN_14263fdd0 body=304 status=ok
// SIG undefined FUN_14263fdd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14263fdd0(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145144348;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffe;
  *param_1 = &PTR_FUN_1451446c8;
  param_1[0x12] = 0;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06ee8)
  {
    _Init_thread_header(&DAT_146b06ee8);
    if (DAT_146b06ee8 == -1) {
      FName::FName(&DAT_146b06ee0,L"InitRotationSeed",1);
      _Init_thread_footer(&DAT_146b06ee8);
    }
  }
  param_1[0x12] = DAT_146b06ee0;
  return param_1;
}



// FUNCTION 14263ff00 FUN_14263ff00 body=47 status=ok
// SIG undefined FUN_14263ff00(void)

undefined8 * FUN_14263ff00(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 899;
  *param_1 = &PTR_FUN_14513e540;
  return param_1;
}



// FUNCTION 14263ff30 FUN_14263ff30 body=63 status=ok
// SIG undefined FUN_14263ff30(void)

undefined8 * FUN_14263ff30(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_1451438c8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xbf000000;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff394 | 0x380;
  return param_1;
}



// FUNCTION 14263ff70 FUN_14263ff70 body=339 status=ok
// SIG undefined FUN_14263ff70(void)

undefined8 * FUN_14263ff70(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145147c58;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffffe;
  *(uint *)(param_1 + 0x1b) = *(uint *)(param_1 + 0x1b) & 0xfffffffe;
  *(uint *)(param_1 + 0x21) = *(uint *)(param_1 + 0x21) | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x203;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 1;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x42c80000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  param_1[0xe] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 500;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3ca3d70a;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return param_1;
}



// FUNCTION 1426400d0 UParticleModuleVelocityInheritParent body=85 status=ok
// SIG undefined UParticleModuleVelocityInheritParent(void)

undefined8 *
UParticleModuleVelocityInheritParent::UParticleModuleVelocityInheritParent(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145143c48;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 142640130 FUN_142640130 body=93 status=ok
// SIG undefined FUN_142640130(void)

undefined8 * FUN_142640130(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145144a48;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *(uint *)(param_1 + 0xe) = *(uint *)(param_1 + 0xe) | 1;
  return param_1;
}



// FUNCTION 142640190 UParticleModuleVelocityInheritParent body=85 status=ok
// SIG undefined UParticleModuleVelocityInheritParent(void)

undefined8 *
UParticleModuleVelocityInheritParent::UParticleModuleVelocityInheritParent(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145144dc8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 1426401f0 UParticleModuleSubUV body=85 status=ok
// SIG undefined UParticleModuleSubUV(void)

undefined8 * UParticleModuleSubUV::UParticleModuleSubUV(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145145148;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 142640250 FUN_142640250 body=228 status=ok
// SIG undefined FUN_142640250(void)

undefined8 * FUN_142640250(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_145145848;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06f18)
  {
    _Init_thread_header(&DAT_146b06f18);
    if (DAT_146b06f18 == -1) {
      FName::FName(&DAT_146b06f10,L"InitRotRateSeed",1);
      _Init_thread_footer(&DAT_146b06f18);
    }
  }
  param_1[0xe] = DAT_146b06f10;
  return param_1;
}



// FUNCTION 142640340 FUN_142640340 body=228 status=ok
// SIG undefined FUN_142640340(void)

undefined8 * FUN_142640340(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_145143fc8;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b06f08)
  {
    _Init_thread_header(&DAT_146b06f08);
    if (DAT_146b06f08 == -1) {
      FName::FName(&DAT_146b06f00,L"InitRotationSeed",1);
      _Init_thread_footer(&DAT_146b06f08);
    }
  }
  param_1[0xe] = DAT_146b06f00;
  return param_1;
}



// FUNCTION 142640430 FUN_142640430 body=132 status=ok
// SIG undefined FUN_142640430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142640430(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145143548;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 4;
  return param_1;
}



// FUNCTION 1426404c0 FUN_1426404c0 body=85 status=ok
// SIG undefined FUN_1426404c0(void)

undefined8 * FUN_1426404c0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__145146a08;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 142640520 FUN_142640520 body=49 status=ok
// SIG undefined FUN_142640520(void)

undefined8 * FUN_142640520(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *param_1 = &PTR_FUN_145146648;
  return param_1;
}



// FUNCTION 142640560 FUN_142640560 body=146 status=ok
// SIG undefined FUN_142640560(void)

undefined8 * FUN_142640560(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff397 | 0x380;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *param_1 = &PTR__scalar_deleting_destructor__145146d90;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(undefined4 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 142640600 UParticleModuleTypeDataBase body=49 status=ok
// SIG undefined UParticleModuleTypeDataBase(void)

undefined8 * UParticleModuleTypeDataBase::UParticleModuleTypeDataBase(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145147118;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff394 | 0x380;
  return param_1;
}



// FUNCTION 142640640 FUN_142640640 body=77 status=ok
// SIG undefined FUN_142640640(void)

undefined8 * FUN_142640640(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff394 | 0x380;
  *param_1 = &PTR__scalar_deleting_destructor__1451474d8;
  FGPUSpriteEmitterInfo::FGPUSpriteEmitterInfo(param_1 + 8);
  FGPUSpriteResourceData::FGPUSpriteResourceData(param_1 + 0x60);
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) & 0xfffffffe;
  return param_1;
}



// FUNCTION 142640690 FUN_142640690 body=201 status=ok
// SIG undefined FUN_142640690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142640690(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffff394 | 0x380;
  *param_1 = &PTR_FUN_145147898;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x15) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xac) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xb4) = DAT_1468b5d98;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffffc;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(uint *)((longlong)param_1 + 0xd4) = *(uint *)((longlong)param_1 + 0xd4) | 4;
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  return param_1;
}



// FUNCTION 142640760 ~TArray<FSBZCablePointAttachment,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FSBZCablePointAttachment,TSizedDefaultAllocator<32>_>(void)

void TArray<FSBZCablePointAttachment,TSizedDefaultAllocator<32>_>::
     ~TArray<FSBZCablePointAttachment,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x28);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xd;
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



// FUNCTION 1426407c0 ~FGPUSpriteEmitterInfo body=170 status=ok
// SIG undefined ~FGPUSpriteEmitterInfo(void)

void FGPUSpriteEmitterInfo::~FGPUSpriteEmitterInfo(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142640870 operator= body=87 status=ok
// SIG undefined operator=(void)

longlong FRawDistributionVector::operator=(longlong param_1,longlong param_2)

{
  FDistributionLookupTable::operator=();
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 1426408d0 FUN_1426408d0 body=304 status=ok
// SIG undefined FUN_1426408d0(void)

void FUN_1426408d0(longlong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  if ((*(byte *)(*param_1 + 0x130) & 1) != 0) {
    lVar7 = param_1[2];
    lVar8 = param_1[1];
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(lVar7 + 0x74);
    *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(lVar7 + 0x78);
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_3[2];
    fVar5 = param_3[1];
    fVar6 = *param_3;
    fVar9 = (float)FUN_1424116d0(*param_1 + 0x138,*(undefined4 *)(param_1[3] + 0xc),
                                 *(undefined8 *)(*(longlong *)param_1[4] + 0x18),0);
    lVar7 = param_1[1];
    *(ulonglong *)(lVar7 + 0x28) = CONCAT44((fVar5 - fVar2) * fVar9,(fVar6 - fVar1) * fVar9);
    *(float *)(lVar7 + 0x30) = (fVar4 - fVar3) * fVar9;
    lVar7 = param_1[2];
    lVar8 = param_1[1];
    *(undefined8 *)(lVar8 + 0x34) = *(undefined8 *)(lVar7 + 0x14);
    *(undefined4 *)(lVar8 + 0x3c) = *(undefined4 *)(lVar7 + 0x1c);
    *(undefined8 *)(param_1[1] + 0x40) = *(undefined8 *)(param_1[2] + 0x80);
  }
  return;
}



// FUNCTION 142640a00 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FSubUVBoundingGeometryBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 8);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142640a60 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleTypeDataMesh::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142640ab0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAttractorPointGravity::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142640b00 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAttractorLine::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142640b60 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAttractorParticle::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142640bc0 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAttractorPoint::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142640c30 FUN_142640c30 body=87 status=ok
// SIG undefined FUN_142640c30(void)

longlong FUN_142640c30(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142640c90 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleSubUV::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142640ce0 `scalar_deleting_destructor' body=155 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleCollision::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 142640d80 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationPrimitiveBase::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142640de0 FUN_142640de0 body=87 status=ok
// SIG undefined FUN_142640de0(void)

longlong FUN_142640de0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 142640e40 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleColor_Seeded::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 142640eb0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleEventGenerator::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142640ef0 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleEventReceiverSpawn::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142640f60 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleKillBox::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142640fc0 FUN_142640fc0 body=87 status=ok
// SIG undefined FUN_142640fc0(void)

longlong FUN_142640fc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142641020 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLight::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 1426410a0 `scalar_deleting_destructor' body=138 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLight_Seeded::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 142641130 FUN_142641130 body=99 status=ok
// SIG undefined FUN_142641130(void)

longlong FUN_142641130(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  TArray<FSBZCablePointAttachment,TSizedDefaultAllocator<32>_>::
  ~TArray<FSBZCablePointAttachment,TSizedDefaultAllocator<32>_>(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1426411a0 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationDirect::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 142641220 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USoundMix::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142641270 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationPrimitiveBase::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1426412d0 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationPrimitiveCylinder::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 142641350 `scalar_deleting_destructor' body=138 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationPrimitiveCylinder_Seeded::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1426413e0 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationPrimitiveSphere::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142641450 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationPrimitiveSphere_Seeded::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1426414d0 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleLocationPrimitiveTriangle::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 142641550 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleTrailSource::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1426415b0 FUN_1426415b0 body=87 status=ok
// SIG undefined FUN_1426415b0(void)

longlong FUN_1426415b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 142641610 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleAccelerationOverLifetime::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 142641660 FUN_142641660 body=87 status=ok
// SIG undefined FUN_142641660(void)

longlong FUN_142641660(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1426416c0 FUN_1426416c0 body=156 status=ok
// SIG undefined FUN_1426416c0(void)

longlong FUN_1426416c0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x170) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 142641760 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleSubUVMovie::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 1426417c0 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleTypeDataGpu::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  FGPUSpriteEmitterInfo::~FGPUSpriteEmitterInfo(param_1 + 0x40);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 142641840 FUN_142641840 body=87 status=ok
// SIG undefined FUN_142641840(void)

longlong FUN_142641840(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1426418a0 FUN_1426418a0 body=826 status=ok
// SIG undefined FUN_1426418a0(void)

void FUN_1426418a0(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  char cVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined4 uVar15;
  undefined1 local_68 [16];
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  local_58 = param_1[2];
  plVar11 = (longlong *)0x0;
  if (local_58 == 0) {
    local_50 = 0;
  }
  else {
    local_50 = *(longlong *)(local_58 + 0x38);
  }
  local_48 = 0xffffffff;
  local_44 = 0x101;
  local_42 = 0;
  FUN_14067b390(&local_58);
  if (local_50 != 0) {
    plVar7 = (longlong *)(param_2 + 0x720);
    do {
      lVar9 = local_50;
      plVar4 = (longlong *)
               FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty(local_50);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = UDistributionFloatParticleParameter::GetPrivateStaticClass();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        plVar12 = plVar11;
        if (bVar2) {
          plVar12 = plVar4;
        }
        lVar5 = UDistributionVectorParticleParameter::GetPrivateStaticClass();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        plVar14 = plVar11;
        if (bVar2) {
          plVar14 = plVar4;
        }
        if (plVar12 == (longlong *)0x0) {
          if (plVar14 == (longlong *)0x0) goto LAB_142641af4;
          lVar5 = plVar14[10];
          cVar10 = '\x03';
        }
        else {
          lVar5 = plVar12[8];
          cVar10 = '\x01';
        }
        if (0 < *(int *)(param_2 + 0x728)) {
          plVar4 = (longlong *)*plVar7;
          plVar8 = plVar11;
          do {
            if (*plVar4 == lVar5) goto LAB_142641af4;
            plVar8 = (longlong *)((longlong)plVar8 + 1);
            plVar4 = plVar4 + 0x12;
          } while ((longlong)plVar8 < (longlong)*(int *)(param_2 + 0x728));
        }
        iVar1 = *(int *)(param_2 + 0x728);
        iVar3 = iVar1 + 1;
        *(int *)(param_2 + 0x728) = iVar3;
        if (*(int *)(param_2 + 0x72c) < iVar3) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar7);
        }
        lVar13 = (longlong)iVar1 * 0x90;
        _guard_xfg_dispatch_icall_nop((void *)(*plVar7 + lVar13),0,0x90);
        *(longlong *)(lVar13 + *plVar7) = lVar5;
        *(char *)(lVar13 + 8 + *plVar7) = cVar10;
        *(undefined8 *)(lVar13 + 0x30 + *plVar7) = 0;
        if (cVar10 == '\x01') {
          lVar5 = *plVar7;
          uVar15 = (**(code **)(*plVar12 + 0x298))(plVar12,0,0,0);
          *(undefined4 *)(lVar13 + 0xc + lVar5) = uVar15;
          *(int *)(lVar13 + 0x10 + *plVar7) = (int)plVar12[10];
        }
        else if (cVar10 == '\x03') {
          lVar5 = *plVar7;
          puVar6 = (undefined8 *)(**(code **)(*plVar14 + 0x298))(plVar14,local_68,0,0,0,0);
          *(undefined8 *)(lVar13 + 0x14 + lVar5) = *puVar6;
          *(undefined4 *)(lVar13 + 0x1c + lVar5) = *(undefined4 *)(puVar6 + 1);
          lVar5 = *plVar7;
          *(longlong *)(lVar13 + 0x20 + lVar5) = plVar14[0xe];
          *(int *)(lVar13 + 0x28 + lVar5) = (int)plVar14[0xf];
        }
      }
LAB_142641af4:
      local_50 = *(longlong *)(lVar9 + 0x28);
      FUN_14067b390(&local_58);
    } while (local_50 != 0);
  }
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x358))(param_1);
  if ((plVar7 != (longlong *)0x0) && (*plVar7 != 0)) {
    if (0 < *(int *)(param_2 + 0x728)) {
      plVar4 = *(longlong **)(param_2 + 0x720);
      do {
        if (*plVar4 == *plVar7) {
          return;
        }
        plVar11 = (longlong *)((longlong)plVar11 + 1);
        plVar4 = plVar4 + 0x12;
      } while ((longlong)plVar11 < (longlong)*(int *)(param_2 + 0x728));
    }
    plVar11 = (longlong *)(param_2 + 0x720);
    iVar1 = *(int *)(param_2 + 0x728);
    iVar3 = iVar1 + 1;
    *(int *)(param_2 + 0x728) = iVar3;
    if (*(int *)(param_2 + 0x72c) < iVar3) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar11);
    }
    lVar9 = (longlong)iVar1 * 0x90;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar11 + lVar9),0,0x90);
    *(longlong *)(lVar9 + *plVar11) = *plVar7;
    *(undefined1 *)(lVar9 + 8 + *plVar11) = 1;
  }
  return;
}



// FUNCTION 142641be0 FUN_142641be0 body=178 status=ok
// SIG undefined FUN_142641be0(void)

void FUN_142641be0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_2 + 0x728)) {
    plVar3 = *(longlong **)(param_2 + 0x720);
    lVar4 = 0;
    do {
      if (*plVar3 == *(longlong *)(param_1 + 0xf0)) {
        return;
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 0x12;
    } while (lVar4 < *(int *)(param_2 + 0x728));
  }
  plVar3 = (longlong *)(param_2 + 0x720);
  iVar1 = *(int *)(param_2 + 0x728);
  iVar2 = iVar1 + 1;
  *(int *)(param_2 + 0x728) = iVar2;
  if (*(int *)(param_2 + 0x72c) < iVar2) {
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  lVar4 = (longlong)iVar1 * 0x90;
  _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar4),0,0x90);
  *(undefined8 *)(lVar4 + *plVar3) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined1 *)(lVar4 + 8 + *plVar3) = 6;
  *(undefined8 *)(lVar4 + 0x30 + *plVar3) = 0;
  return;
}



// FUNCTION 142641ca0 FUN_142641ca0 body=172 status=ok
// SIG undefined FUN_142641ca0(void)

void FUN_142641ca0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_2 + 0x728)) {
    plVar3 = *(longlong **)(param_2 + 0x720);
    lVar4 = 0;
    do {
      if (*plVar3 == *(longlong *)(param_1 + 0x50)) {
        return;
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 0x12;
    } while (lVar4 < *(int *)(param_2 + 0x728));
  }
  plVar3 = (longlong *)(param_2 + 0x720);
  iVar1 = *(int *)(param_2 + 0x728);
  iVar2 = iVar1 + 1;
  *(int *)(param_2 + 0x728) = iVar2;
  if (*(int *)(param_2 + 0x72c) < iVar2) {
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  lVar4 = (longlong)iVar1 * 0x90;
  _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar4),0,0x90);
  *(undefined8 *)(lVar4 + *plVar3) = *(undefined8 *)(param_1 + 0x50);
  *(undefined1 *)(lVar4 + 8 + *plVar3) = 6;
  *(undefined8 *)(lVar4 + 0x30 + *plVar3) = 0;
  return;
}



// FUNCTION 142641d50 FUN_142641d50 body=56 status=ok
// SIG undefined FUN_142641d50(void)

void FUN_142641d50(longlong param_1)

{
  FUN_1417502d0();
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_141edf360();
    FUN_141edede0(param_1 + 0x170,0);
    return;
  }
  return;
}



// FUNCTION 142641d90 FUN_142641d90 body=34 status=ok
// SIG undefined FUN_142641d90(void)

void FUN_142641d90(longlong param_1)

{
  BeginReleaseGPUSpriteResources(*(undefined8 *)(param_1 + 0x2f0));
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 142641dc0 FUN_142641dc0 body=62 status=ok
// SIG undefined FUN_142641dc0(void)

void FUN_142641dc0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    BeginUpdateGPUSpriteResources(*(longlong *)(param_1 + 0x2f0),param_1 + 0x300);
    return;
  }
  uVar1 = BeginCreateGPUSpriteResources();
  *(undefined8 *)(param_1 + 0x2f0) = uVar1;
  return;
}



// FUNCTION 142641e00 CompileModule body=77 status=ok
// SIG undefined CompileModule(void)

void UParticleModule::CompileModule(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    *(int *)(param_2 + 0x20) = iVar1 + 1;
    if (*(int *)(param_2 + 0x24) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_2 + 0x18),iVar1);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 142641e50 CompileModule body=67 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleAcceleration::CompileModule(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)FUN_1424118e0(param_1 + 0x40,local_18,0,0,0,0);
  *(undefined8 *)(param_2 + 0x41c) = *puVar1;
  *(undefined4 *)(param_2 + 0x424) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142641f40 CompileModule body=154 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleCollisionGPU::CompileModule(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x2b8) = 1;
  *(undefined1 *)(param_2 + 0x2ba) = *(undefined1 *)(param_1 + 0xbd);
  *(undefined1 *)(param_2 + 0x2b9) = *(undefined1 *)(param_1 + 0xbc);
  *(undefined4 *)(param_2 + 700) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_2 + 0x2c0) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_2 + 0x2c4) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_2 + 0x2c8) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_2 + 0x2cc) = *(undefined4 *)(param_1 + 0xa8);
  FUN_1424142b0(param_2 + 0x2d0,*(undefined8 *)(param_1 + 0x68));
  FUN_1424142b0(param_2 + 0x2f8,*(undefined8 *)(param_1 + 0xa0));
  return;
}



// FUNCTION 142641fe0 CompileModule body=223 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleColor::CompileModule(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 *local_28;
  int local_20;
  
  local_res10 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res10,&local_28);
  puVar2 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  local_res8 = FUN_140438070(puVar2);
  local_resc = local_res8;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)FUN_1424118e0(param_1 + 0x38,&local_28,0,0,0,&local_res8);
  local_38 = *puVar1;
  local_30 = *(undefined4 *)(puVar1 + 1);
  uVar3 = FUN_1424116d0(param_1 + 0x88,0,0,&local_res8);
  FComposableVectorDistribution::InitializeWithConstant(param_2 + 0xa0,&local_38);
  FComposableFloatDistribution::InitializeWithConstant(param_2 + 200,uVar3);
  return;
}



// FUNCTION 1426420c0 FUN_1426420c0 body=381 status=ok
// SIG undefined FUN_1426420c0(void)

void FUN_1426420c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  bVar2 = true;
  cVar4 = UParticleModule::IsUsedInGPUEmitter();
  bVar3 = bVar2;
  if (cVar4 != '\0') {
    lVar5 = UDistributionVectorParticleParameter::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    if (bVar2) {
      FRawDistributionVector::operator=(param_2 + 0xf0,param_1 + 0x38);
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_10 = 0x3f800000;
      FComposableVectorDistribution::InitializeWithConstant(param_2 + 0xa0,&local_18);
    }
    lVar5 = UDistributionFloatParticleParameter::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar3 = !bVar3;
    if (!bVar3) {
      FDistributionLookupTable::operator=(param_2 + 0x140,param_1 + 0x88);
      *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined8 *)(param_2 + 0x170) = *(undefined8 *)(param_1 + 0xb8);
      FComposableFloatDistribution::InitializeWithConstant(param_2 + 200,0x3f800000);
    }
    if (bVar2) goto LAB_142642211;
  }
  FUN_142414360(param_2 + 0xa0,*(undefined8 *)(param_1 + 0x80));
LAB_142642211:
  if (bVar3) {
    FUN_1424142b0(param_2 + 200,*(undefined8 *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 142642240 FUN_142642240 body=320 status=ok
// SIG undefined FUN_142642240(void)

void FUN_142642240(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  
  bVar2 = true;
  cVar4 = UParticleModule::IsUsedInGPUEmitter();
  bVar3 = bVar2;
  if (cVar4 != '\0') {
    lVar5 = UDistributionVectorParticleParameter::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    if (bVar2) {
      FRawDistributionVector::operator=(param_2 + 0x178,param_1 + 0x38);
    }
    lVar5 = UDistributionFloatParticleParameter::GetPrivateStaticClass();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar3 = !bVar3;
    if (!bVar3) {
      FDistributionLookupTable::operator=(param_2 + 0x1c8,param_1 + 0x88);
      *(undefined4 *)(param_2 + 0x1f0) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_2 + 500) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_1 + 0xb8);
    }
    if (bVar2) goto LAB_142642354;
  }
  FUN_142420940(param_2 + 0xa0,*(undefined8 *)(param_1 + 0x80));
LAB_142642354:
  if (bVar3) {
    FUN_142420840(param_2 + 200,*(undefined8 *)(param_1 + 0xb8));
  }
  return;
}



// FUNCTION 142642380 CompileModule body=122 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleLifetime::CompileModule(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  FUN_1424116d0(param_1 + 0x38,0,0,0);
  FRawDistributionFloat::GetOutRange(param_1 + 0x38,local_res10,local_res8);
  *(undefined4 *)(param_2 + 0x428) = local_res8[0];
  iVar1 = *(int *)(param_2 + 0x20);
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  if (*(int *)(param_2 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x18,iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  return;
}



// FUNCTION 142642430 CompileModule body=122 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleRotationRate::CompileModule(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  FUN_1424116d0(param_1 + 0x38,0,0,0);
  FRawDistributionFloat::GetOutRange(param_1 + 0x38,local_res10,local_res8);
  *(undefined4 *)(param_2 + 0x42c) = local_res8[0];
  iVar1 = *(int *)(param_2 + 0x20);
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  if (*(int *)(param_2 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x18,iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  return;
}



// FUNCTION 1426424e0 FUN_1426424e0 body=937 status=ok
// SIG undefined FUN_1426424e0(void)

undefined8 FUN_1426424e0(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  
  param_4 = param_4 * 0.01;
  if (param_2 == 0) {
LAB_14264253f:
    lVar3 = 0;
  }
  else {
    lVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = param_2;
    if (!bVar1) goto LAB_14264253f;
  }
  if (param_2 == 0) {
LAB_142642587:
    lVar4 = 0;
  }
  else {
    lVar4 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar4 = param_2;
    if (!bVar1) goto LAB_142642587;
  }
  if (param_2 == 0) {
LAB_1426425cf:
    lVar5 = 0;
  }
  else {
    lVar5 = UDistributionFloatUniform::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar5 = param_2;
    if (!bVar1) goto LAB_1426425cf;
  }
  if (param_2 == 0) {
LAB_142642616:
    lVar6 = 0;
  }
  else {
    lVar6 = UDistributionFloatUniformCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar6 = param_2;
    if (!bVar1) goto LAB_142642616;
  }
  if (param_2 != 0) {
    lVar7 = UDistributionFloatParticleParameter::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(float *)(param_2 + 0x50) = param_4 * *(float *)(param_2 + 0x50);
      *(float *)(param_2 + 0x54) = param_4 * *(float *)(param_2 + 0x54);
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
      return 1;
    }
  }
  if (lVar6 != 0) {
    plVar8 = (longlong *)(lVar6 + 0x28);
    iVar9 = 0;
    iVar2 = (*(code *)**(undefined8 **)(lVar6 + 0x28))(plVar8);
    if (0 < iVar2) {
      do {
        iVar10 = 0;
        iVar2 = (**(code **)(*plVar8 + 8))(plVar8);
        if (0 < iVar2) {
          do {
            fVar11 = (float)(**(code **)(*plVar8 + 0x20))(plVar8,iVar10,iVar9);
            (**(code **)(*plVar8 + 0x70))(plVar8,iVar10,iVar9,fVar11 * param_4);
            iVar10 = iVar10 + 1;
            iVar2 = (**(code **)(*plVar8 + 8))(plVar8);
          } while (iVar10 < iVar2);
        }
        iVar9 = iVar9 + 1;
        iVar2 = (**(code **)*plVar8)(plVar8);
      } while (iVar9 < iVar2);
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
      return 1;
    }
    goto LAB_142642862;
  }
  if (lVar3 != 0) {
    if (param_3 != 0) {
      lVar4 = UDistributionFloatConstant::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_14264272d;
    }
    param_3 = 0;
LAB_14264272d:
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x70))
              ((longlong *)(lVar3 + 0x28),0,0,param_4 * *(float *)(param_3 + 0x38));
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
    return 1;
  }
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x70))
              (lVar5 + 0x28,0,0,param_4 * *(float *)(lVar5 + 0x38));
    (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x70))
              (lVar5 + 0x28,1,0,param_4 * *(float *)(lVar5 + 0x3c));
    goto LAB_142642862;
  }
  if (param_3 == 0) {
LAB_142642793:
    param_3 = 0;
  }
  else {
    lVar3 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_142642793;
  }
  plVar8 = (longlong *)(param_3 + 0x28);
  iVar9 = 0;
  iVar2 = (*(code *)**(undefined8 **)(param_3 + 0x28))(plVar8);
  if (0 < iVar2) {
    do {
      lVar3 = *(longlong *)(lVar4 + 0x28);
      uVar12 = (**(code **)(*plVar8 + 0x18))(plVar8,iVar9);
      (**(code **)(lVar3 + 0x58))(lVar4 + 0x28,uVar12);
      iVar10 = 0;
      iVar2 = (**(code **)(*plVar8 + 8))(plVar8);
      if (0 < iVar2) {
        do {
          fVar11 = (float)(**(code **)(*plVar8 + 0x20))(plVar8,iVar10,iVar9);
          (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x70))
                    (lVar4 + 0x28,iVar10,iVar9,fVar11 * param_4);
          iVar10 = iVar10 + 1;
          iVar2 = (**(code **)(*plVar8 + 8))(plVar8);
        } while (iVar10 < iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar2 = (**(code **)*plVar8)(plVar8);
    } while (iVar9 < iVar2);
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
    return 1;
  }
LAB_142642862:
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
  return 1;
}



// FUNCTION 142642890 FUN_142642890 body=906 status=ok
// SIG undefined FUN_142642890(void)

undefined8 FUN_142642890(undefined8 param_1,longlong param_2,undefined8 param_3,float param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  param_4 = param_4 * 0.01;
  if (param_2 == 0) {
LAB_1426428ee:
    lVar3 = 0;
  }
  else {
    lVar3 = UDistributionVectorConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = param_2;
    if (!bVar1) goto LAB_1426428ee;
  }
  if (param_2 == 0) {
LAB_142642935:
    lVar4 = 0;
  }
  else {
    lVar4 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar4 = param_2;
    if (!bVar1) goto LAB_142642935;
  }
  if (param_2 == 0) {
LAB_14264297d:
    lVar5 = 0;
  }
  else {
    lVar5 = UDistributionVectorUniform::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar5 = param_2;
    if (!bVar1) goto LAB_14264297d;
  }
  if (param_2 != 0) {
    lVar6 = UDistributionVectorUniformCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar6 = param_2;
    if (bVar1) goto LAB_1426429c7;
  }
  lVar6 = 0;
LAB_1426429c7:
  if (param_2 != 0) {
    lVar7 = UDistributionVectorParticleParameter::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0x70) * param_4;
      *(float *)(param_2 + 0x74) = *(float *)(param_2 + 0x74) * param_4;
      *(float *)(param_2 + 0x78) = *(float *)(param_2 + 0x78) * param_4;
      *(float *)(param_2 + 0x7c) = *(float *)(param_2 + 0x7c) * param_4;
      *(float *)(param_2 + 0x84) = param_4 * *(float *)(param_2 + 0x84);
      *(float *)(param_2 + 0x80) = param_4 * *(float *)(param_2 + 0x80);
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
      return 1;
    }
  }
  if (lVar6 == 0) {
    if (lVar3 != 0) {
      *(float *)(lVar3 + 0x38) = param_4 * *(float *)(lVar3 + 0x38);
      *(float *)(lVar3 + 0x3c) = param_4 * *(float *)(lVar3 + 0x3c);
      *(float *)(lVar3 + 0x40) = param_4 * *(float *)(lVar3 + 0x40);
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
      return 1;
    }
    if (lVar4 == 0) {
      if (lVar5 == 0) {
        return 0;
      }
      *(float *)(lVar5 + 0x44) = param_4 * *(float *)(lVar5 + 0x44);
      *(float *)(lVar5 + 0x48) = param_4 * *(float *)(lVar5 + 0x48);
      *(float *)(lVar5 + 0x4c) = param_4 * *(float *)(lVar5 + 0x4c);
      *(float *)(lVar5 + 0x3c) = param_4 * *(float *)(lVar5 + 0x3c);
      *(float *)(lVar5 + 0x38) = param_4 * *(float *)(lVar5 + 0x38);
      *(float *)(lVar5 + 0x40) = param_4 * *(float *)(lVar5 + 0x40);
    }
    else {
      iVar8 = 0;
      iVar2 = (*(code *)**(undefined8 **)(lVar4 + 0x28))(lVar4 + 0x28);
      if (0 < iVar2) {
        do {
          iVar9 = 0;
          iVar2 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 8))(lVar4 + 0x28);
          if (0 < iVar2) {
            do {
              fVar10 = (float)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x20))
                                        (lVar4 + 0x28,iVar9,iVar8);
              (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x70))
                        (lVar4 + 0x28,iVar9,iVar8,fVar10 * param_4);
              iVar9 = iVar9 + 1;
              iVar2 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 8))(lVar4 + 0x28);
            } while (iVar9 < iVar2);
          }
          iVar8 = iVar8 + 1;
          iVar2 = (*(code *)**(undefined8 **)(lVar4 + 0x28))(lVar4 + 0x28);
        } while (iVar8 < iVar2);
        *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
        return 1;
      }
    }
  }
  else {
    iVar8 = 0;
    iVar2 = (*(code *)**(undefined8 **)(lVar6 + 0x28))(lVar6 + 0x28);
    if (0 < iVar2) {
      do {
        iVar9 = 0;
        iVar2 = (**(code **)(*(longlong *)(lVar6 + 0x28) + 8))(lVar6 + 0x28);
        if (0 < iVar2) {
          do {
            fVar10 = (float)(**(code **)(*(longlong *)(lVar6 + 0x28) + 0x20))
                                      (lVar6 + 0x28,iVar9,iVar8);
            (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x70))
                      (lVar6 + 0x28,iVar9,iVar8,fVar10 * param_4);
            iVar9 = iVar9 + 1;
            iVar2 = (**(code **)(*(longlong *)(lVar6 + 0x28) + 8))(lVar6 + 0x28);
          } while (iVar9 < iVar2);
        }
        iVar8 = iVar8 + 1;
        iVar2 = (*(code *)**(undefined8 **)(lVar6 + 0x28))(lVar6 + 0x28);
      } while (iVar8 < iVar2);
      *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
      return 1;
    }
  }
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | 2;
  return 1;
}



// FUNCTION 142642c20 FUN_142642c20 body=89 status=ok
// SIG undefined FUN_142642c20(void)

void FUN_142642c20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x70);
  if (cVar3 == '\0') {
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRollPitchYaw",1);
    uVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
  }
  return;
}



// FUNCTION 142642c80 FUN_142642c80 body=176 status=ok
// SIG undefined FUN_142642c80(void)

longlong * FUN_142642c80(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_3 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_3);
  }
  plVar2 = (longlong *)0x0;
  plVar3 = (longlong *)0x0;
  if (((((*(longlong *)(lVar1 + 0x1b8) != 0) && (DAT_14653431c != 0)) && (DAT_1464c9c5b != '\0')) &&
      ((plVar2 = plVar3, DAT_1464c9c21 != '\0' && (DAT_1464ca478 != '\0')))) &&
     ((DAT_1464c9c20 != '\0' && ((DAT_1464c9c12 != '\0' && (DAT_1464c9c6c != '\0')))))) {
    plVar2 = (longlong *)
             (**(code **)(**(longlong **)(param_3 + 0x8a0) + 0x28))
                       (*(longlong **)(param_3 + 0x8a0),param_1 + 0x40);
    (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3);
  }
  return plVar2;
}



// FUNCTION 142642d30 FUN_142642d30 body=181 status=ok
// SIG undefined FUN_142642d30(void)

longlong * FUN_142642d30(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  (**(code **)(*param_1 + 0x2c0))();
  lVar2 = operator_new(0x220);
  if (lVar2 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)FUN_142619ef0(lVar2);
  }
  (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3);
  cVar1 = FRawDistributionVector::IsCreated(param_1 + 0xe);
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)FName::FName(local_res8,L"DistributionRollPitchYaw",1);
    lVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar4,0,0,0,0);
    param_1[0x17] = lVar2;
  }
  return plVar3;
}



// FUNCTION 142642df0 FUN_142642df0 body=396 status=ok
// SIG undefined FUN_142642df0(void)

void FUN_142642df0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,int param_5
                  ,longlong param_6)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_5 - 1U < 2) {
    if (((*(byte *)(param_1 + 0x78) & 1) != 0) &&
       (((lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x120), lVar2 != 0 ||
         (lVar2 = FUN_1423407b0(*(longlong *)(param_2 + 0x18)), lVar2 != 0)) &&
        (lVar3 = UWorld::GetWorldSettings(lVar2,0,1), lVar3 != 0)))) {
      UWorld::GetWorldSettings(lVar2,0,1);
    }
    FUN_1424116d0(param_1 + 0x40);
  }
  else if ((param_5 - 3U < 2) &&
          (((fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 0xec),
            fVar1 == 0.0 || (fVar1 < *(float *)(param_4 + 0xc) - *(float *)(param_6 + 4))) ||
           (*(float *)(param_6 + 4) == 0.0)))) {
    FGenericPlatformMath::SRand();
    *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_4 + 0xc);
  }
  return;
}



// FUNCTION 142642f80 FUN_142642f80 body=246 status=ok
// SIG undefined FUN_142642f80(void)

void FUN_142642f80(longlong param_1,longlong param_2,int param_3,longlong param_4,undefined8 param_5
                  ,undefined8 param_6,float param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
    uVar3 = *(undefined4 *)(param_4 + 0xc);
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x13c);
  }
  FUN_1424116d0(param_1 + 0x88,uVar3,*(undefined8 *)(param_2 + 0x18),0);
  if (((*(byte *)(param_1 + 0x78) & 1) != 0) &&
     (((lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x120), lVar1 != 0 ||
       (lVar1 = FUN_1423407b0(), lVar1 != 0)) &&
      (lVar2 = UWorld::GetWorldSettings(lVar1,0,1), lVar2 != 0)))) {
    lVar1 = UWorld::GetWorldSettings(lVar1,0,1);
    param_7 = param_7 / (*(float *)(lVar1 + 0x5e4) * *(float *)(lVar1 + 0x5e0) *
                        *(float *)(lVar1 + 0x5e8));
  }
  *(float *)(param_3 + param_4) = param_7 + *(float *)(param_3 + param_4);
  return;
}



// FUNCTION 142643080 DetermineUnitDirection body=391 status=ok
// SIG undefined DetermineUnitDirection(void)

void UParticleModuleLocationPrimitiveBase::DetermineUnitDirection
               (longlong param_1,undefined8 param_2,float *param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_4 == 0) {
    fVar2 = (float)FGenericPlatformMath::SRand();
    fVar3 = (float)FGenericPlatformMath::SRand();
    fVar4 = (float)FGenericPlatformMath::SRand();
  }
  else {
    uVar1 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
    fVar3 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar2 = fVar2 - (float)(int)fVar2;
    fVar3 = fVar3 - (float)(int)fVar3;
    uVar1 = uVar1 * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar1;
    fVar4 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    fVar4 = fVar4 - (float)(int)fVar4;
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if (((byte)uVar1 & 9) == 9) {
    fVar2 = (fVar2 + fVar2) - 1.0;
  }
  else if ((uVar1 & 1) == 0) {
    if ((uVar1 & 8) == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = -fVar2;
    }
  }
  *param_3 = fVar2;
  uVar1 = *(uint *)(param_1 + 0x38);
  if (((byte)uVar1 & 0x12) == 0x12) {
    fVar3 = (fVar3 + fVar3) - 1.0;
  }
  else if ((uVar1 & 2) == 0) {
    if ((uVar1 & 0x10) == 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = -fVar3;
    }
  }
  param_3[1] = fVar3;
  uVar1 = *(uint *)(param_1 + 0x38);
  if (((byte)uVar1 & 0x24) == 0x24) {
    param_3[2] = (fVar4 + fVar4) - 1.0;
  }
  else {
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x20) == 0) {
        param_3[2] = 0.0;
        return;
      }
      fVar4 = -fVar4;
    }
    param_3[2] = fVar4;
  }
  return;
}



// FUNCTION 142643210 FUN_142643210 body=73 status=ok
// SIG undefined FUN_142643210(void)

void FUN_142643210(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x1a) & 4) != 0) {
    uVar1 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,uVar1,param_1 + 0x19);
  }
  return;
}



// FUNCTION 142643260 FUN_142643260 body=67 status=ok
// SIG undefined FUN_142643260(void)

void FUN_142643260(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xf) & 4) != 0) {
    uVar1 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,uVar1,param_1 + 0xe);
  }
  return;
}



// FUNCTION 1426432b0 FUN_1426432b0 body=96 status=ok
// SIG undefined FUN_1426432b0(void)

void FUN_1426432b0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x2a) & 4) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,0);
    lVar2 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,(ulonglong)uVar1 + lVar2,param_1 + 0x29);
  }
  return;
}



// FUNCTION 142643310 FUN_142643310 body=73 status=ok
// SIG undefined FUN_142643310(void)

void FUN_142643310(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x2a) & 4) != 0) {
    uVar1 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,uVar1,param_1 + 0x29);
  }
  return;
}



// FUNCTION 142643360 FUN_142643360 body=73 status=ok
// SIG undefined FUN_142643360(void)

void FUN_142643360(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x21) & 4) != 0) {
    uVar1 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,uVar1,param_1 + 0x20);
  }
  return;
}



// FUNCTION 1426433b0 FUN_1426433b0 body=73 status=ok
// SIG undefined FUN_1426433b0(void)

void FUN_1426433b0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x13) & 4) != 0) {
    uVar1 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,uVar1,param_1 + 0x12);
  }
  return;
}



// FUNCTION 142643400 FUN_142643400 body=73 status=ok
// SIG undefined FUN_142643400(void)

void FUN_142643400(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x12) & 4) != 0) {
    uVar1 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,uVar1,param_1 + 0x11);
  }
  return;
}



// FUNCTION 142643450 FUN_142643450 body=1410 status=ok
// SIG undefined FUN_142643450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142643450(longlong param_1,longlong *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined4 *local_110;
  int local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  float local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [48];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar17 = (longlong)param_3;
  uVar11 = FUN_142627a50(param_2,param_1);
  cVar7 = FWeakObjectPtr::IsValid(uVar11);
  if (cVar7 == '\0') {
    return;
  }
  lVar12 = FWeakObjectPtr::Get(uVar11);
  local_e0 = (undefined8 *)0x0;
  local_d8 = lVar12;
  if (lVar12 == 0) {
LAB_142643505:
    lVar12 = 0;
  }
  else {
    lVar13 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8
         ) != lVar13 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142643505;
  }
  local_f0 = lVar17;
  if (lVar12 != 0) {
    lVar13 = param_2[0x20];
    local_100 = lVar13;
    if ((lVar13 != 0) && (*(char *)(param_1 + 0x38) == '\x01')) {
      bVar5 = false;
      lVar16 = param_2[0x21];
      iVar8 = (int)param_2[0x25] + -1;
      local_108 = *(int *)((longlong)param_2 + 0x124);
      lVar18 = (longlong)iVar8;
      local_f8 = lVar16;
      iVar9 = local_108;
      if (-1 < iVar8) {
        do {
          lVar15 = (ulonglong)((uint)*(ushort *)(lVar16 + lVar18 * 2) * iVar9) + lVar13;
          if (((*(uint *)(lVar15 + 0x68) & 0x4000000) == 0) && (*(longlong *)(lVar12 + 0x718) != 0))
          {
            local_120 = (undefined8 *)local_b8;
            local_118 = (undefined8 *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar15 + 0xc));
            local_128 = &local_e8;
            local_110 = (undefined4 *)(lVar17 + lVar15);
            cVar7 = FUN_142646a00(param_1,uVar11,lVar12,*(undefined4 *)(lVar17 + lVar15));
            lVar13 = local_100;
            lVar16 = local_f8;
            iVar9 = local_108;
            if ((cVar7 != '\0') &&
               (iVar8 = FUN_1423ac950(lVar12,*(undefined8 *)(local_e8 + 0x30)), lVar13 = local_100,
               lVar16 = local_f8, lVar17 = local_f0, iVar9 = local_108, iVar8 != -1)) {
              cVar7 = FUN_1423b47e0(lVar12,iVar8);
              if (cVar7 == '\0') {
                lVar17 = FUN_1423acfd0(lVar12,local_88,iVar8);
                local_a8 = *(float *)(lVar17 + 0x20);
                fStack_a4 = *(float *)(lVar17 + 0x24);
                fStack_a0 = *(float *)(lVar17 + 0x28);
                uStack_9c = *(undefined4 *)(lVar17 + 0x2c);
                if (((local_a8 == DAT_1468b5d90) && (fStack_a4 == DAT_1468b5d94)) &&
                   (fStack_a0 == DAT_1468b5d98)) {
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
                lVar13 = local_100;
                lVar16 = local_f8;
                lVar17 = local_f0;
                iVar9 = local_108;
                if (!bVar6) goto LAB_142643674;
              }
              *(undefined4 *)(lVar15 + 0xc) = 0x3f8ccccd;
              bVar5 = true;
              lVar13 = local_100;
              lVar16 = local_f8;
              lVar17 = local_f0;
              iVar9 = local_108;
            }
          }
LAB_142643674:
          lVar18 = lVar18 + -1;
        } while (-1 < lVar18);
        if (bVar5) {
          (**(code **)(*param_2 + 0xe0))(param_2);
        }
      }
    }
    FUN_14264a110(param_1,uVar11,lVar12);
  }
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    return;
  }
  if (param_2[0x20] == 0) {
    return;
  }
  iVar9 = (**(code **)(*param_2 + 0x150))(param_2);
  lVar12 = (longlong)iVar9;
  if ((iVar9 < 1) || (cVar7 = (**(code **)(*param_2 + 0x158))(param_2), cVar7 == '\0')) {
    bVar5 = false;
    bVar6 = false;
    if ((*(byte *)(param_1 + 0xe8) & 4) != 0) goto LAB_1426436ed;
  }
  else {
    bVar6 = true;
LAB_1426436ed:
    bVar5 = bVar6;
    local_e0 = &local_98;
  }
  local_d0 = param_2[3];
  if ((*(byte *)(local_d0 + 0x71b) & 4) == 0) {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar7 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar10 = GetCurrentThreadId();
      bVar6 = false;
      if (DVar10 == DAT_1468c21c0) goto LAB_142643737;
    }
    else {
LAB_142643737:
      bVar6 = true;
    }
    local_e8 = 0x930;
    if (!bVar6) goto LAB_14264374f;
  }
  local_e8 = 0x210;
LAB_14264374f:
  lVar13 = param_2[0x20];
  iVar8 = (int)param_2[0x25] + -1;
  lVar16 = param_2[0x21];
  iVar9 = *(int *)((longlong)param_2 + 0x124);
  lVar18 = (longlong)iVar8;
  local_108 = iVar9;
  local_100 = lVar16;
  local_f8 = lVar13;
  if (-1 < iVar8) {
    do {
      lVar15 = (ulonglong)((uint)*(ushort *)(lVar16 + lVar18 * 2) * iVar9) + lVar13;
      if ((*(uint *)(lVar15 + 0x68) & 0x4000000) == 0) {
        lVar17 = lVar17 + lVar15;
        local_110 = (undefined4 *)CONCAT44(local_110._4_4_,*(undefined4 *)(lVar15 + 0xc));
        local_118 = local_e0;
        local_120 = &local_c8;
        local_128 = (longlong *)lVar17;
        cVar7 = FUN_142644c30(param_1,uVar11,param_2,local_d8);
        lVar13 = local_f8;
        lVar16 = local_100;
        iVar9 = local_108;
        if (cVar7 == '\x01') {
          *(undefined8 *)(lVar15 + 0x10) = local_c8;
          *(undefined4 *)(lVar15 + 0x18) = local_c0;
          iVar9 = _finite((double)*(float *)(lVar15 + 0x10));
          if ((iVar9 != 0) && (iVar9 = _finite((double)*(float *)(lVar15 + 0x14)), iVar9 != 0)) {
            _finite((double)*(float *)(lVar15 + 0x18));
          }
          *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar15 + 0x10);
          *(undefined4 *)(lVar15 + 0x28) = *(undefined4 *)(lVar15 + 0x18);
          if (((*(byte *)(param_1 + 0xe8) & 2) != 0) && (bVar5)) {
            puVar14 = (undefined8 *)FQuat::Euler(&local_98,&local_a8);
            *(undefined8 *)(lVar12 + 0x18 + lVar15) = *puVar14;
            *(undefined4 *)(lVar12 + 0x20 + lVar15) = *(undefined4 *)(puVar14 + 1);
            if ((*(byte *)(*(longlong *)(param_2[5] + 0x30) + 100) & 1) != 0) {
              fVar2 = *(float *)(lVar12 + 0x20 + lVar15);
              fVar3 = *(float *)(lVar12 + 0x1c + lVar15);
              fVar4 = *(float *)(lVar12 + 0x18 + lVar15);
              pfVar1 = (float *)(local_e8 + local_d0);
              fVar22 = _DAT_146b06e10 * *pfVar1;
              fVar23 = fRam0000000146b06e14 * pfVar1[1];
              fVar24 = fRam0000000146b06e18 * pfVar1[2];
              fVar25 = fRam0000000146b06e1c * pfVar1[3];
              fVar19 = fVar2 * fVar23 - fVar3 * fVar24;
              fVar20 = fVar4 * fVar24 - fVar2 * fVar22;
              fVar21 = fVar3 * fVar22 - fVar4 * fVar23;
              fVar19 = fVar19 + fVar19;
              fVar20 = fVar20 + fVar20;
              fVar21 = fVar21 + fVar21;
              local_b0 = (fVar20 * fVar22 - fVar19 * fVar23) + fVar25 * fVar21 + fVar2;
              *(ulonglong *)(lVar12 + 0x18 + lVar15) =
                   CONCAT44((fVar19 * fVar24 - fVar21 * fVar22) + fVar25 * fVar20 + fVar3,
                            (fVar21 * fVar23 - fVar20 * fVar24) + fVar25 * fVar19 + fVar4);
              *(float *)(lVar12 + 0x20 + lVar15) = local_b0;
            }
          }
          lVar13 = local_f8;
          lVar16 = local_100;
          iVar9 = local_108;
          if ((*(byte *)(param_1 + 0xe8) & 4) != 0) {
            *(undefined8 *)(lVar17 + 0x10) = local_98;
            *(undefined8 *)(lVar17 + 0x18) = uStack_90;
          }
        }
      }
      lVar18 = lVar18 + -1;
      lVar17 = local_f0;
    } while (-1 < lVar18);
  }
  return;
}



// FUNCTION 1426439e0 FUN_1426439e0 body=236 status=ok
// SIG undefined FUN_1426439e0(void)

void FUN_1426439e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_48 [48];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar3 = FUN_142627a50(param_2,param_1);
  cVar2 = FWeakObjectPtr::IsValid(lVar3);
  if (((cVar2 != '\0') && (uVar4 = FWeakObjectPtr::Get(lVar3), (*(byte *)(param_1 + 0x48) & 4) != 0)
      ) && (iVar5 = 0, 0 < *(int *)(lVar3 + 0x14))) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*(int *)(lVar7 + *(longlong *)(lVar3 + 0x20)) != -1) {
        FUN_1423acc10(uVar4,local_48);
        lVar1 = *(longlong *)(lVar3 + 0x30);
        *(ulonglong *)(lVar1 + lVar6) = CONCAT44(local_14,local_18);
        *(undefined4 *)(lVar1 + 8 + lVar6) = local_10;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + 0xc;
    } while (iVar5 < *(int *)(lVar3 + 0x14));
  }
  return;
}



// FUNCTION 142643ad0 FUN_142643ad0 body=448 status=ok
// SIG undefined FUN_142643ad0(void)

void FUN_142643ad0(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_78;
  float local_74;
  float local_70;
  
  if ((param_2 != 0) && (lVar12 = *(longlong *)(param_2 + 0x18), lVar12 != 0)) {
    lVar5 = *(longlong *)(param_2 + 0x100);
    iVar4 = *(int *)(param_2 + 0x124);
    lVar6 = *(longlong *)(param_2 + 0x108);
    fVar7 = *(float *)(lVar12 + 0x220);
    fVar8 = *(float *)(lVar12 + 0x224);
    fVar9 = *(float *)(lVar12 + 0x228);
    fVar1 = *(float *)(lVar12 + 0x774);
    fVar2 = *(float *)(lVar12 + 0x770);
    fVar3 = *(float *)(lVar12 + 0x778);
    iVar10 = *(int *)(param_2 + 0x128) + -1;
    lVar12 = (longlong)iVar10;
    if (-1 < iVar10) {
      do {
        lVar11 = (ulonglong)((uint)*(ushort *)(lVar6 + lVar12 * 2) * iVar4) + lVar5;
        if (((*(uint *)(lVar11 + 0x68) & 0x4000000) == 0) &&
           ((param_4 + param_4) * *(float *)(lVar11 + 0x1c) < *(float *)(lVar11 + 0xc))) {
          FUN_1424118e0(param_1 + 0x38,&local_78,*(float *)(lVar11 + 0xc),
                        *(undefined8 *)(param_2 + 0x18),0,0);
          fVar13 = (fVar7 - fVar2) * local_78;
          fVar14 = (fVar8 - fVar1) * local_74;
          fVar15 = (fVar9 - fVar3) * local_70;
          *(float *)(lVar11 + 0x10) = fVar13 + *(float *)(lVar11 + 0x10);
          *(float *)(lVar11 + 0x14) = fVar14 + *(float *)(lVar11 + 0x14);
          *(float *)(lVar11 + 0x18) = fVar15 + *(float *)(lVar11 + 0x18);
          *(float *)(lVar11 + 0x20) = fVar13 + *(float *)(lVar11 + 0x20);
          *(float *)(lVar11 + 0x24) = fVar14 + *(float *)(lVar11 + 0x24);
          *(float *)(lVar11 + 0x28) = fVar15 + *(float *)(lVar11 + 0x28);
        }
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
  }
  return;
}



// FUNCTION 142643c90 FUN_142643c90 body=306 status=ok
// SIG undefined FUN_142643c90(void)

void FUN_142643c90(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    iVar5 = *(int *)(param_2 + 0x128) + -1;
    lVar2 = *(longlong *)(param_2 + 0x100);
    iVar1 = *(int *)(param_2 + 0x124);
    lVar3 = *(longlong *)(param_2 + 0x108);
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar8 * 2) * iVar1) + lVar2;
        if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
          lVar6 = lVar6 + (param_3 & 0xffffffff);
          cVar4 = FWeakObjectPtr::IsValid(lVar6 + 0x20,0,0);
          if (cVar4 != '\0') {
            plVar7 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x20);
            cVar4 = (**(code **)(*plVar7 + 0x408))(plVar7);
            if (cVar4 != '\0') {
              plVar7 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x20);
              local_40 = *(undefined4 *)(lVar6 + 0x3c);
              local_48 = *(undefined8 *)(lVar6 + 0x34);
              local_30 = *(undefined4 *)(lVar6 + 0x30);
              local_38 = *(undefined8 *)(lVar6 + 0x28);
              (**(code **)(*plVar7 + 0x5f0))
                        (plVar7,&local_38,&local_48,*(undefined8 *)(lVar6 + 0x40));
              *(undefined4 *)(lVar6 + 0x20) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x24) = 0;
            }
          }
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
  }
  return;
}



// FUNCTION 142643dd0 FUN_142643dd0 body=869 status=ok
// SIG undefined FUN_142643dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142643dd0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 *local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_e8;
  uint local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  lVar7 = DAT_146b06e30;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar14 = (ulonglong)param_3;
  if (*(char *)(param_1 + 0x140) == '\0') {
    return;
  }
  local_e4 = param_3;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  uVar12 = 0;
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    uVar6 = 4;
    if (DVar4 != DAT_1468c21c0) goto LAB_142643e57;
  }
  uVar6 = uVar12;
LAB_142643e57:
  iVar13 = *(int *)(uVar6 + lVar7);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  lVar7 = FUN_142628290(param_2);
  local_d8 = 0;
  if (lVar7 != 0) {
    local_d8 = *(undefined8 *)(lVar7 + 0x1b8);
  }
  FUN_142628020(param_2,&local_e0,&local_b8);
  local_e8 = FUN_14263b0c0(param_2);
  local_c0 = *(longlong *)(param_2 + 0x108);
  iVar10 = *(int *)(param_2 + 0x128) + -1;
  local_dc = *(int *)(param_2 + 0x124);
  local_c8 = *(longlong *)(param_2 + 0x100);
  lVar7 = (longlong)iVar10;
  if (-1 < iVar10) {
    do {
      lVar11 = (ulonglong)((uint)*(ushort *)(local_c0 + lVar7 * 2) * local_dc) + local_c8;
      if ((*(uint *)(lVar11 + 0x68) & 0x4000000) == 0) {
        lVar15 = uVar14 + lVar11;
        if (*(longlong *)(lVar15 + 0x10) != 0) {
          FUN_14159dbf0(&local_98,local_d0,lVar15 + 0x10,0);
          local_a0 = local_b0;
          local_f8 = 1;
          local_100 = local_d8;
          local_108 = local_e8;
          local_110 = &local_a8;
          local_118 = local_e0;
          local_a8 = local_b8;
          FUN_142656e50(param_1,*(undefined8 *)(lVar15 + 0x10),lVar15);
        }
        if ((1 < iVar13) && (*(longlong *)(lVar15 + 0x10) == 0)) {
          uVar8 = FUN_1426508c0(param_1,lVar15,lVar11);
          *(undefined8 *)(lVar15 + 0x10) = uVar8;
          FUN_14159dbf0(&local_98,local_cc,lVar15 + 0x10,0);
        }
        uVar14 = (ulonglong)local_e4;
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  puVar16 = local_58;
  if (0 < *(int *)(param_2 + 0x1d8)) {
    plVar1 = (longlong *)(param_2 + 0x1d0);
    uVar14 = uVar12;
    lVar7 = local_98;
    do {
      iVar13 = (int)uVar14;
      plVar2 = *(longlong **)(uVar12 + *plVar1);
      if (plVar2 != (longlong *)0x0) {
        if ((int)local_90 != local_64) {
          puVar9 = local_60;
          if (puVar16 != (undefined1 *)0x0) {
            puVar9 = puVar16;
          }
          for (iVar10 = *(int *)(puVar9 + (longlong)
                                          (int)((int)((ulonglong)plVar2 >> 0x20) * 0x17 +
                                                (int)plVar2 & local_50 - 1U) * 4); iVar10 != -1;
              iVar10 = *(int *)(lVar7 + 8 + (longlong)iVar10 * 0x10)) {
            if (*(longlong **)(lVar7 + (longlong)iVar10 * 0x10) == plVar2) {
              if (iVar10 != -1) goto LAB_1426440cd;
              break;
            }
          }
        }
        (**(code **)(*plVar2 + 0x70))(plVar2,1);
        (**(code **)(*plVar2 + 0x3b0))(plVar2,0);
        iVar10 = *(int *)(param_2 + 0x1d8);
        iVar5 = (iVar10 - iVar13) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar13 * 8),
                     (void *)(*plVar1 + (longlong)(iVar10 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar10 = *(int *)(param_2 + 0x1d8);
        }
        *(int *)(param_2 + 0x1d8) = iVar10 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar13 = iVar13 + -1;
        uVar12 = uVar12 - 8;
        lVar7 = local_98;
        puVar16 = local_58;
      }
LAB_1426440cd:
      uVar14 = (ulonglong)(iVar13 + 1U);
      uVar12 = uVar12 + 8;
    } while ((int)(iVar13 + 1U) < *(int *)(param_2 + 0x1d8));
  }
  local_50 = 0;
  if (puVar16 != (undefined1 *)0x0) {
    FMemory::Free(puVar16);
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
}



// FUNCTION 142644140 FinishDestroy body=44 status=ok
// SIG undefined FinishDestroy(void)

void UParticleModuleRequired::FinishDestroy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x178);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_141755460(param_1);
  return;
}



// FUNCTION 142644170 FUN_142644170 body=285 status=ok
// SIG undefined FUN_142644170(void)

longlong *
FUN_142644170(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,char param_5,
             char param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_res8;
  longlong local_28 [4];
  
  cVar1 = (**(code **)(*param_1 + 800))();
  if ((cVar1 != '\0') && (param_6 == '\0')) {
    *(byte *)((longlong)param_1 + 0x2c) =
         *(byte *)((longlong)param_1 + 0x2c) | (byte)(1 << (*(uint *)(param_3 + 0x28) & 0x1f));
    return param_1;
  }
  local_res8 = 0;
  plVar2 = (longlong *)FUN_1417987a0(param_1,param_1[4],0,0xefffffff,0,0,0xff800000);
  plVar3 = (longlong *)0x0;
  if ((plVar2 != (longlong *)0x0) &&
     (*(char *)((longlong)plVar2 + 0x2c) = '\x01' << ((byte)*(undefined4 *)(param_3 + 0x28) & 0x1f),
     plVar3 = plVar2, param_5 != '\0')) {
    cVar1 = (**(code **)(*plVar2 + 0x2f0))(plVar2,param_1,param_4,param_3);
    if (cVar1 == '\0') {
      local_res8 = param_1[3];
      local_28[0] = 0;
      local_28[1] = 0;
      FName::ToString(&local_res8,local_28);
      plVar3 = (longlong *)0x0;
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return plVar3;
}



// FUNCTION 142644290 FUN_142644290 body=116 status=ok
// SIG undefined FUN_142644290(void)

ulonglong FUN_142644290(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    lVar2 = UCurveVector::GetPrivateStaticClass();
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
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142644310 FUN_142644310 body=506 status=ok
// SIG undefined FUN_142644310(void)

ulonglong FUN_142644310(longlong param_1,longlong param_2,undefined8 param_3,int param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined4 param_7,ulonglong param_8)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffff68;
  ulonglong uVar7;
  float local_78;
  float fStack_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined1 local_58 [64];
  
  if (*(char *)(param_1 + 0x38) == '\x01') {
    local_res8 = 0;
    param_8 = FUN_142646a00(param_7,param_2,param_3,param_4,&local_res8,&local_78,param_7,param_8);
    if ((char)param_8 != '\0') {
      param_8 = FUN_1423ac950(param_3,*(undefined8 *)(local_res8 + 0x30));
    }
  }
  else {
    uVar7 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    uVar3 = FUN_1424118e0(param_1 + 0x48,&local_68,param_7,0,uVar7,0);
    cVar1 = *(char *)(param_1 + 0xfc);
    if (cVar1 == '\0') {
      lVar6 = (longlong)param_4 * 0x68;
      param_4 = FUN_1423ac950(param_3,*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x98)));
      pfVar4 = (float *)FUN_1424118e0(*(longlong *)(param_1 + 0x98) + 0x18 + lVar6,&local_78,param_7
                                      ,0,uVar7 & 0xffffffff00000000,0);
      local_78 = local_68 + *pfVar4;
      fStack_74 = local_64 + pfVar4[1];
      local_70 = local_60 + pfVar4[2];
      if (param_8 != 0) {
        local_78 = local_78 + *(float *)(param_8 + 4);
        local_70 = local_70 + *(float *)(param_8 + 0xc);
        fStack_74 = fStack_74 + *(float *)(param_8 + 8);
      }
    }
    else {
      fStack_74 = local_64;
      if (cVar1 == '\x01') {
        param_8 = *(ulonglong *)(param_2 + 0x40);
        local_78 = local_68;
        param_4 = *(int *)(param_8 + (longlong)param_4 * 4);
        local_70 = local_60;
      }
      else {
        param_8 = uVar3;
        if (cVar1 != '\x02') goto LAB_14264438b;
        local_78 = local_68;
        local_70 = local_60;
      }
    }
    if (param_4 != -1) {
      puVar5 = (undefined8 *)FUN_1423acc10(param_3,local_58,param_4);
      uVar2 = puVar5[1];
      *param_5 = *puVar5;
      param_5[1] = uVar2;
      uVar2 = puVar5[3];
      param_5[2] = puVar5[2];
      param_5[3] = uVar2;
      uVar2 = puVar5[5];
      param_5[4] = puVar5[4];
      param_5[5] = uVar2;
      uVar2 = puVar5[7];
      param_5[6] = puVar5[6];
      param_5[7] = uVar2;
      *param_6 = CONCAT44(fStack_74,local_78);
      *(float *)(param_6 + 1) = local_70;
      return CONCAT71((uint7)(uint3)((uint)local_70 >> 8),1);
    }
  }
LAB_14264438b:
  return param_8 & 0xffffffffffffff00;
}



// FUNCTION 142644510 FUN_142644510 body=733 status=ok
// SIG undefined FUN_142644510(void)

void FUN_142644510(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_res8;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  
  local_40 = *(longlong *)(param_1 + 0x10);
  if (local_40 == 0) {
    local_38 = (longlong *)0x0;
  }
  else {
    local_38 = *(longlong **)(local_40 + 0x38);
  }
  local_30 = 0xffffffff;
  local_2c = 0x101;
  local_2a = 0;
  FUN_140472e10(&local_40);
  plVar3 = local_38;
  do {
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    local_38 = plVar3;
    lVar4 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty(plVar3,param_1);
      if (lVar4 == 0) {
        lVar5 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        plVar6 = (longlong *)0x0;
        if (bVar2) {
          plVar6 = plVar3;
        }
        local_58 = plVar6[0xe];
        if (local_58 == 0) {
          local_50 = 0;
        }
        else {
          local_50 = *(longlong *)(local_58 + 0x38);
        }
        local_48 = 0xffffffff;
        local_44 = 0x101;
        local_42 = 0;
        FUN_140472e10(&local_58);
        if (local_50 != 0) {
          do {
            lVar5 = local_50;
            lVar7 = UStructProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              lVar4 = FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty
                                (lVar5,param_1);
            }
            local_50 = *(longlong *)(lVar5 + 0x28);
            FUN_140472e10(&local_58);
          } while (local_50 != 0);
          goto LAB_142644718;
        }
      }
      else {
LAB_142644721:
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar1);
        }
        plVar6 = (longlong *)(*param_2 + (longlong)iVar1 * 0x18);
        plVar8 = (longlong *)0x0;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = 0;
          plVar6[1] = 0;
          plVar8 = plVar6;
        }
        plVar8[2] = lVar4;
        local_res8 = plVar3[3];
        FName::ToString(&local_res8,&local_68);
        if (plVar8 == &local_68) {
          if (local_68 != 0) {
            FMemory::Free();
          }
        }
        else {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          *plVar8 = local_68;
          *(undefined4 *)(plVar8 + 1) = (undefined4)local_60;
          *(undefined4 *)((longlong)plVar8 + 0xc) = local_60._4_4_;
          local_60 = 0;
          local_68 = 0;
        }
      }
    }
    else {
      lVar4 = UObjectPropertyBase::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         ((lVar4 = UDistributionFloat::GetPrivateStaticClass(), plVar3[0xe] == lVar4 ||
          (lVar4 = UDistributionVector::GetPrivateStaticClass(), plVar3[0xe] == lVar4)))) {
        lVar4 = (**(code **)(*plVar3 + 0x378))(plVar3,*(int *)((longlong)plVar3 + 0x44) + param_1);
LAB_142644718:
        if (lVar4 != 0) goto LAB_142644721;
      }
    }
    local_38 = (longlong *)plVar3[5];
    FUN_140472e10(&local_40);
    plVar3 = local_38;
  } while( true );
}



// FUNCTION 1426447f0 GetCurveObjects body=306 status=ok
// SIG undefined GetCurveObjects(void)

void UParticleModuleSubUVMovie::GetCurveObjects(undefined8 param_1,longlong *param_2)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  
  FUN_142644510();
  iVar6 = 0;
  if ((int)param_2[1] < 1) {
    return;
  }
  lVar8 = 0;
LAB_142644830:
  if (*(int *)(lVar8 + 8 + *param_2) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = *(undefined2 **)(lVar8 + *param_2);
  }
  pwVar5 = L"SubImageIndex";
  do {
    _C = *(wchar_t *)((longlong)(puVar7 + -0xa289daa4) + (longlong)pwVar5);
    if ((_C == L'\0') && (*pwVar5 == L'\0')) goto LAB_142644898;
    if (_C != *pwVar5) {
      wVar1 = towlower(_C);
      wVar2 = towlower(*pwVar5);
      if (wVar1 != wVar2) break;
    }
    pwVar5 = pwVar5 + 1;
  } while( true );
  if (wVar1 == wVar2) {
LAB_142644898:
    if (iVar6 == -1) {
      return;
    }
    if (*(longlong *)((longlong)iVar6 * 0x18 + *param_2) != 0) {
      FMemory::Free();
    }
    iVar4 = (int)param_2[1];
    iVar3 = (iVar4 - iVar6) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar6 * 0x18 + *param_2),
                 (void *)(*param_2 + (longlong)(iVar6 + 1) * 0x18),(longlong)iVar3 * 0x18);
      iVar4 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar4 + -1;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_2);
    return;
  }
  iVar6 = iVar6 + 1;
  lVar8 = lVar8 + 0x18;
  if ((int)param_2[1] <= iVar6) {
    return;
  }
  goto LAB_142644830;
}



// FUNCTION 142644950 GetLifetimeValue body=86 status=ok
// SIG undefined GetLifetimeValue(void)

undefined8 UParticleModuleLifetimeBase::GetLifetimeValue(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles/Lifetime/ParticleModuleLifetimeBase.h"
             ,0x23,L"Pure virtual not implemented (%s)",
             L"UParticleModuleLifetimeBase::GetLifetimeValue");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles/Lifetime/ParticleModuleLifetimeBase.h"
             ,0x23,L"Pure virtual not implemented (%s)",
             L"UParticleModuleLifetimeBase::GetLifetimeValue");
  return 0;
}



// FUNCTION 1426449b0 GetLifetimeValue body=81 status=ok
// SIG undefined GetLifetimeValue(void)

void UParticleModuleLifetime_Seeded::GetLifetimeValue
               (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_142627a50(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  FUN_1424116d0(param_1 + 0x38,param_3,param_4,lVar1);
  return;
}



// FUNCTION 142644a10 GetMaxLifetime body=34 status=ok
// SIG undefined GetMaxLifetime(void)

undefined4 UParticleModuleLifetime::GetMaxLifetime(longlong param_1)

{
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  FRawDistributionFloat::GetOutRange(param_1 + 0x38,local_res10,local_res8);
  return local_res8[0];
}



// FUNCTION 142644a40 FUN_142644a40 body=193 status=ok
// SIG undefined FUN_142644a40(void)

ulonglong FUN_142644a40(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  cVar1 = *(char *)(param_1 + 0xfc);
  if (cVar1 == '\0') {
    return (ulonglong)*(uint *)(param_1 + 0xa0);
  }
  if (cVar1 != '\x01') {
    if ((cVar1 == '\x02') && (param_3 != 0)) {
      lVar3 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (*(char *)(param_1 + 0x38) == '\x01') {
          uVar4 = FUN_14277f670(*(undefined8 *)(param_3 + 0x718));
          return uVar4;
        }
        uVar4 = FUN_1423af4d0(param_3);
        return uVar4;
      }
    }
    return 0;
  }
  return (ulonglong)*(uint *)(param_1 + 0xf8);
}



// FUNCTION 142644b10 FUN_142644b10 body=136 status=ok
// SIG undefined FUN_142644b10(void)

ulonglong FUN_142644b10(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142644b7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_2 + 0x960))(param_2,*(undefined8 *)(param_1 + 0x40),param_4);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142644ba0 FUN_142644ba0 body=136 status=ok
// SIG undefined FUN_142644ba0(void)

ulonglong FUN_142644ba0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = AGFreezeCharacterCue::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(param_2[2] + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142644c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_2 + 0x970))(param_2,*(undefined8 *)(param_1 + 0x50),param_4);
      return uVar3;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142644c30 FUN_142644c30 body=1659 status=ok
// SIG undefined FUN_142644c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142644c30(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                       int *param_5,float *param_6,float *param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
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
  float fVar19;
  float fVar20;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  float *local_1d0;
  undefined4 local_1c8;
  int *local_1c0;
  float local_1b8 [4];
  float local_1a8 [2];
  float local_1a0;
  undefined8 local_198;
  float local_190;
  longlong local_188;
  undefined8 local_178 [3];
  undefined1 local_160 [16];
  longlong local_150;
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
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  iVar1 = *param_5;
  local_188 = param_3;
  if (param_4 != (longlong *)0x0) {
    lVar4 = FUN_142a07000();
    iVar2 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar2;
    if ((*(int *)(param_4[2] + 0x90) < iVar2) ||
       (uVar5 = *(ulonglong *)(param_4[2] + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar2 * 8) != lVar4 + 0x88)) {
      uVar5 = uVar5 & 0xffffffffffffff00;
    }
    else {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((char)uVar5 == '\0') {
      if ((*(char *)(param_1 + 0x38) == '\x01') && (*(char *)(param_1 + 0xfc) == '\0')) {
        FUN_14263d460(local_178,(longlong)iVar1 * 0x68 + *(longlong *)(param_1 + 0x98));
        local_1d0 = (float *)0x0;
        local_1d8._0_4_ = 0;
        pfVar7 = (float *)FUN_1424118e0(local_160,local_1a8,param_8,0);
        local_1d0 = (float *)0x0;
        local_1d8 = (float *)((ulonglong)local_1d8._4_4_ << 0x20);
        pfVar8 = (float *)FUN_1424118e0(param_1 + 0x48,local_1b8,param_8,0);
        fVar9 = *pfVar7;
        fVar10 = pfVar8[1];
        fVar11 = pfVar8[2];
        fVar12 = *pfVar8;
        fVar13 = pfVar7[1];
        fVar14 = pfVar7[2];
        (**(code **)(*param_4 + 0x420))(param_4,&local_108,local_178[0],0);
        in_XMM5._0_4_ = (fVar9 + fVar12) * local_e8;
        in_XMM5._4_4_ = (fVar10 + fVar13) * fStack_e4;
        in_XMM5._8_4_ = (fVar11 + fVar14) * fStack_e0;
        in_XMM5._12_4_ = fStack_dc * 0.0;
        fVar9 = in_XMM5._8_4_ * fStack_104 - in_XMM5._4_4_ * fStack_100;
        fVar10 = in_XMM5._0_4_ * fStack_100 - in_XMM5._8_4_ * local_108;
        fVar11 = in_XMM5._4_4_ * local_108 - in_XMM5._0_4_ * fStack_104;
        fVar9 = fVar9 + fVar9;
        fVar10 = fVar10 + fVar10;
        fVar11 = fVar11 + fVar11;
        local_1a0 = fStack_f0 +
                    (fVar10 * local_108 - fVar9 * fStack_104) + fStack_fc * fVar11 + in_XMM5._8_4_;
        *(ulonglong *)param_6 =
             CONCAT44(fStack_f4 +
                      (fVar9 * fStack_100 - fVar11 * local_108) + fStack_fc * fVar10 + in_XMM5._4_4_
                      ,local_f8 +
                       (fVar11 * fStack_104 - fVar10 * fStack_100) +
                       fStack_fc * fVar9 + in_XMM5._0_4_);
        param_6[2] = local_1a0;
        if (param_7 != (float *)0x0) {
          *param_7 = local_108;
          param_7[1] = fStack_104;
          param_7[2] = fStack_100;
          param_7[3] = fStack_fc;
        }
        if (local_150 != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        if (param_4[0xe3] == 0) {
LAB_142644fe6:
          return uVar5 & 0xffffffffffffff00;
        }
        local_1c0 = param_5;
        local_1d0 = local_1a8;
        local_1c8 = param_8;
        local_1d8 = (float *)&local_198;
        uVar5 = FUN_142646a00(param_1,param_2,param_4,iVar1);
        if ((char)uVar5 == '\0') goto LAB_142644fe6;
        local_1d8 = local_1b8;
        local_1b8[0] = 0.0;
        local_1b8[1] = 0.0;
        local_1b8[2] = 0.0;
        uVar5 = USkeletalMeshSocket::GetSocketMatrixWithOffset
                          (local_198,&local_108,param_4,local_1a8);
        if ((char)uVar5 == '\0') goto LAB_142644fe6;
        local_190 = fStack_d0;
        *(ulonglong *)param_6 = CONCAT44(fStack_d4,local_d8);
        param_6[2] = fStack_d0;
        if (param_7 == (float *)0x0) goto LAB_142645158;
        FMatrix::RemoveScaling(&local_108);
        pfVar7 = (float *)&local_198;
      }
      else {
        local_1c0 = param_5;
        local_1d0 = local_1b8;
        local_1c8 = param_8;
        local_1d8 = &local_108;
        uVar5 = FUN_142644310(param_1,param_2,param_4,iVar1);
        if ((char)uVar5 == '\0') goto LAB_142644fe6;
        fVar20 = local_d8 * 0.0;
        fVar22 = fStack_d4 * 0.0;
        fVar25 = fStack_cc * 0.0;
        fVar9 = local_108 * 0.0;
        fVar11 = fStack_104 * 0.0;
        fVar13 = fStack_100 * 0.0;
        fVar17 = fStack_fc * 0.0;
        fVar21 = local_f8 * 0.0;
        fVar23 = fStack_f4 * 0.0;
        fVar24 = fStack_f0 * 0.0;
        fVar26 = fStack_ec * 0.0;
        fVar27 = local_d8 * 0.0;
        fVar15 = fStack_d4 * 0.0;
        fVar16 = fStack_cc * 0.0;
        fVar10 = local_108 * 0.0;
        fVar12 = fStack_104 * 0.0;
        fVar14 = fStack_100 * 0.0;
        fVar19 = fStack_fc * 0.0;
        in_XMM5._0_4_ = local_d8 * 0.0;
        in_XMM5._4_4_ = fStack_d4 * 0.0;
        in_XMM5._8_4_ = fStack_d0 * 0.0;
        in_XMM5._12_4_ = fStack_cc * 0.0;
        local_d8 = local_1b8[1] * local_f8 + local_1b8[0] * local_108 + local_1b8[2] * local_e8 +
                   local_d8 * 1.0;
        fStack_d4 = local_1b8[1] * fStack_f4 + local_1b8[0] * fStack_104 + local_1b8[2] * fStack_e4
                    + fStack_d4 * 1.0;
        local_1a0 = local_1b8[1] * fStack_f0 + local_1b8[0] * fStack_100 + local_1b8[2] * fStack_e0
                    + fStack_d0 * 1.0;
        fStack_cc = local_1b8[1] * fStack_ec + local_1b8[0] * fStack_fc + local_1b8[2] * fStack_dc +
                    fStack_cc * 1.0;
        *(ulonglong *)param_6 = CONCAT44(fStack_d4,local_d8);
        param_6[2] = local_1a0;
        if (param_7 == (float *)0x0) goto LAB_142645158;
        local_108 = local_f8 * 0.0 + local_108 * 1.0 + local_e8 * 0.0 + fVar20;
        fStack_104 = fStack_f4 * 0.0 + fStack_104 * 1.0 + fStack_e4 * 0.0 + fVar22;
        fStack_100 = fStack_f0 * 0.0 + fStack_100 * 1.0 + fStack_e0 * 0.0 + fStack_d0 * 0.0;
        fStack_fc = fStack_ec * 0.0 + fStack_fc * 1.0 + fStack_dc * 0.0 + fVar25;
        local_f8 = local_f8 * 1.0 + fVar9 + local_e8 * 0.0 + fVar27;
        fStack_f4 = fStack_f4 * 1.0 + fVar11 + fStack_e4 * 0.0 + fVar15;
        fStack_f0 = fStack_f0 * 1.0 + fVar13 + fStack_e0 * 0.0 + fStack_d0 * 0.0;
        fStack_ec = fStack_ec * 1.0 + fVar17 + fStack_dc * 0.0 + fVar16;
        local_e8 = fVar21 + fVar10 + local_e8 * 1.0 + in_XMM5._0_4_;
        fStack_e4 = fVar23 + fVar12 + fStack_e4 * 1.0 + in_XMM5._4_4_;
        fStack_e0 = fVar24 + fVar14 + fStack_e0 * 1.0 + in_XMM5._8_4_;
        fStack_dc = fVar26 + fVar19 + fStack_dc * 1.0 + in_XMM5._12_4_;
        fStack_d0 = local_1a0;
        FMatrix::RemoveScaling(&local_108);
        pfVar7 = local_1a8;
      }
      puVar6 = (undefined8 *)FMatrix::ToQuat(&local_108,pfVar7);
      uVar3 = puVar6[1];
      *(undefined8 *)param_7 = *puVar6;
      *(undefined8 *)(param_7 + 2) = uVar3;
    }
  }
LAB_142645158:
  uVar5 = *(ulonglong *)(local_188 + 0x28);
  if ((*(byte *)(*(longlong *)(uVar5 + 0x30) + 100) & 1) != 0) {
    lVar4 = *(longlong *)(local_188 + 0x18);
    auVar18 = *(undefined1 (*) [16])(lVar4 + 0x230);
    fVar9 = auVar18._0_4_;
    fVar10 = auVar18._4_4_;
    fVar11 = auVar18._8_4_;
    fVar21 = *(float *)(lVar4 + 0x210) * _DAT_146b06e10;
    fVar22 = *(float *)(lVar4 + 0x214) * fRam0000000146b06e14;
    fVar23 = *(float *)(lVar4 + 0x218) * fRam0000000146b06e18;
    fVar24 = *(float *)(lVar4 + 0x21c) * fRam0000000146b06e1c;
    auVar18 = rcpps(in_XMM5,auVar18);
    fVar25 = (float)((uint)(*param_6 - *(float *)(lVar4 + 0x220)) & _DAT_146b06de0);
    fVar26 = (float)((uint)(param_6[1] - *(float *)(lVar4 + 0x224)) & uRam0000000146b06de4);
    fVar27 = (float)((uint)(param_6[2] - *(float *)(lVar4 + 0x228)) & uRam0000000146b06de8);
    fVar12 = fVar27 * fVar22 - fVar26 * fVar23;
    fVar13 = fVar25 * fVar23 - fVar27 * fVar21;
    fVar14 = fVar26 * fVar21 - fVar25 * fVar22;
    fVar17 = auVar18._0_4_;
    fVar19 = auVar18._4_4_;
    fVar20 = auVar18._8_4_;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar14 = fVar14 + fVar14;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar9;
    fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar10;
    fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar11;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar9;
    fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar10;
    fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar11;
    fVar11 = ((fVar13 * fVar21 - fVar12 * fVar22) + fVar24 * fVar14 + fVar27) *
             (float)(-(uint)((float)((uint)fVar11 & uRam0000000146b06e08) <= fRam0000000146b06df8) &
                     (uint)fVar20 ^ (uint)fVar20);
    uVar5 = (ulonglong)(uint)fVar11;
    *(ulonglong *)param_6 =
         CONCAT44(((fVar12 * fVar23 - fVar14 * fVar21) + fVar24 * fVar13 + fVar26) *
                  (float)(-(uint)((float)((uint)fVar10 & uRam0000000146b06e04) <=
                                 fRam0000000146b06df4) & (uint)fVar19 ^ (uint)fVar19),
                  ((fVar14 * fVar22 - fVar13 * fVar23) + fVar24 * fVar12 + fVar25) *
                  (float)(-(uint)((float)((uint)fVar9 & _DAT_146b06e00) <= _DAT_146b06df0) &
                          (uint)fVar17 ^ (uint)fVar17));
    param_6[2] = fVar11;
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1426452b0 FUN_1426452b0 body=2723 status=ok
// SIG undefined FUN_1426452b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1426452b0(longlong param_1,longlong param_2,longlong param_3,int param_4,
                       float *param_5,undefined1 (*param_6) [16],char param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_1a8;
  float fStack_1a0;
  float fStack_19c;
  undefined8 local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  longlong local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
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
  
  local_178 = param_2;
  puVar6 = (undefined8 *)FUN_1423b08f0(param_3);
  if (puVar6 == (undefined8 *)0x0) goto LAB_142645437;
  lVar1 = *(longlong *)*puVar6;
  local_1a8 = lVar1;
  local_198 = FUN_1423b0910(param_3,0);
  if (*(char *)(param_1 + 0x38) == '\0') {
    USkeletalMeshComponent::GetSkinnedVertexPosition(&local_1a8,param_3,param_4,lVar1,local_198);
    fVar10 = *(float *)(param_3 + 0x210);
    fVar26 = *(float *)(param_3 + 0x214);
    fVar13 = *(float *)(param_3 + 0x218);
    fVar15 = *(float *)(param_3 + 0x21c);
    local_1a8._0_4_ = (float)local_1a8 * *(float *)(param_3 + 0x230);
    local_1a8._4_4_ = local_1a8._4_4_ * *(float *)(param_3 + 0x234);
    fStack_1a0 = fStack_1a0 * *(float *)(param_3 + 0x238);
    fVar18 = *(float *)(param_3 + 0x23c) * 0.0;
    fVar9 = fStack_1a0 * fVar26 - local_1a8._4_4_ * fVar13;
    fVar11 = (float)local_1a8 * fVar13 - fStack_1a0 * fVar10;
    fVar12 = local_1a8._4_4_ * fVar10 - (float)local_1a8 * fVar26;
    fVar14 = fVar18 * fVar15 - fVar18 * fVar15;
    fVar9 = fVar9 + fVar9;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    in_XMM5._0_4_ = fVar15 * fVar9 + (float)local_1a8;
    in_XMM5._4_4_ = fVar15 * fVar11 + local_1a8._4_4_;
    in_XMM5._8_4_ = fVar15 * fVar12 + fStack_1a0;
    in_XMM5._12_4_ = fVar15 * (fVar14 + fVar14) + fVar18;
    fVar15 = *(float *)(param_3 + 0x228);
    *(ulonglong *)param_5 =
         CONCAT44((fVar9 * fVar13 - fVar12 * fVar10) + in_XMM5._4_4_ + *(float *)(param_3 + 0x224),
                  (fVar12 * fVar26 - fVar11 * fVar13) + in_XMM5._0_4_ + *(float *)(param_3 + 0x220))
    ;
    param_5[2] = (fVar11 * fVar10 - fVar9 * fVar26) + in_XMM5._8_4_ + fVar15;
  }
  else {
    if (*(char *)(param_1 + 0x38) != '\x01') goto LAB_142645437;
    uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x60))
                      (*(longlong **)(lVar1 + 0x18),param_4);
    uVar4 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x60))
                      (*(longlong **)(lVar1 + 0x18),param_4 + 1);
    uVar5 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x60))
                      (*(longlong **)(lVar1 + 0x18),param_4 + 2);
    pfVar8 = (float *)USkeletalMeshComponent::GetSkinnedVertexPosition
                                (&local_188,param_3,uVar3,local_1a8,local_198);
    lVar1 = local_1a8;
    fVar10 = *(float *)(param_3 + 0x210);
    fVar26 = *(float *)(param_3 + 0x214);
    fVar13 = *(float *)(param_3 + 0x218);
    fVar15 = *(float *)(param_3 + 0x21c);
    fVar18 = *pfVar8 * *(float *)(param_3 + 0x230);
    fVar19 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20) * *(float *)(param_3 + 0x234);
    fVar20 = pfVar8[2] * *(float *)(param_3 + 0x238);
    fVar21 = *(float *)(param_3 + 0x23c) * 0.0;
    fVar9 = fVar20 * fVar26 - fVar19 * fVar13;
    fVar11 = fVar18 * fVar13 - fVar20 * fVar10;
    fVar12 = fVar19 * fVar10 - fVar18 * fVar26;
    fVar14 = fVar21 * fVar15 - fVar21 * fVar15;
    fVar9 = fVar9 + fVar9;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar14 = fVar14 + fVar14;
    fVar22 = (fVar12 * fVar26 - fVar11 * fVar13) + fVar15 * fVar9 + fVar18 +
             *(float *)(param_3 + 0x220);
    fVar23 = (fVar9 * fVar13 - fVar12 * fVar10) + fVar15 * fVar11 + fVar19 +
             *(float *)(param_3 + 0x224);
    fVar24 = (fVar11 * fVar10 - fVar9 * fVar26) + fVar15 * fVar12 + fVar20 +
             *(float *)(param_3 + 0x228);
    fStack_10c = (fVar14 * fVar15 - fVar14 * fVar15) + fVar15 * fVar14 + fVar21 +
                 *(float *)(param_3 + 0x22c);
    local_118 = fVar22;
    fStack_114 = fVar23;
    fStack_110 = fVar24;
    pfVar8 = (float *)USkeletalMeshComponent::GetSkinnedVertexPosition
                                (&local_188,param_3,uVar4,local_1a8,local_198);
    fVar10 = *(float *)(param_3 + 0x210);
    fVar26 = *(float *)(param_3 + 0x214);
    fVar13 = *(float *)(param_3 + 0x218);
    fVar15 = *(float *)(param_3 + 0x21c);
    fVar18 = *pfVar8 * *(float *)(param_3 + 0x230);
    fVar19 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20) * *(float *)(param_3 + 0x234);
    fVar20 = pfVar8[2] * *(float *)(param_3 + 0x238);
    fVar21 = *(float *)(param_3 + 0x23c) * 0.0;
    fVar9 = fVar20 * fVar26 - fVar19 * fVar13;
    fVar11 = fVar18 * fVar13 - fVar20 * fVar10;
    fVar12 = fVar19 * fVar10 - fVar18 * fVar26;
    fVar14 = fVar21 * fVar15 - fVar21 * fVar15;
    fVar9 = fVar9 + fVar9;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar14 = fVar14 + fVar14;
    local_1a8._0_4_ =
         (fVar12 * fVar26 - fVar11 * fVar13) + fVar15 * fVar9 + fVar18 + *(float *)(param_3 + 0x220)
    ;
    local_1a8._4_4_ =
         (fVar9 * fVar13 - fVar12 * fVar10) + fVar15 * fVar11 + fVar19 + *(float *)(param_3 + 0x224)
    ;
    fStack_1a0 = (fVar11 * fVar10 - fVar9 * fVar26) + fVar15 * fVar12 + fVar20 +
                 *(float *)(param_3 + 0x228);
    fStack_19c = (fVar14 * fVar15 - fVar14 * fVar15) + fVar15 * fVar14 + fVar21 +
                 *(float *)(param_3 + 0x22c);
    pfVar8 = (float *)USkeletalMeshComponent::GetSkinnedVertexPosition
                                (&local_188,param_3,uVar5,lVar1,local_198);
    fVar10 = *(float *)(param_3 + 0x210);
    fVar26 = *(float *)(param_3 + 0x214);
    fVar13 = *(float *)(param_3 + 0x218);
    fVar15 = *(float *)(param_3 + 0x21c);
    in_XMM5._0_4_ = *pfVar8 * *(float *)(param_3 + 0x230);
    in_XMM5._4_4_ = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20) * *(float *)(param_3 + 0x234);
    in_XMM5._8_4_ = pfVar8[2] * *(float *)(param_3 + 0x238);
    in_XMM5._12_4_ = *(float *)(param_3 + 0x23c) * 0.0;
    fVar9 = in_XMM5._8_4_ * fVar26 - in_XMM5._4_4_ * fVar13;
    fVar11 = in_XMM5._0_4_ * fVar13 - in_XMM5._8_4_ * fVar10;
    fVar12 = in_XMM5._4_4_ * fVar10 - in_XMM5._0_4_ * fVar26;
    fVar14 = in_XMM5._12_4_ * fVar15 - in_XMM5._12_4_ * fVar15;
    fVar9 = fVar9 + fVar9;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar14 = fVar14 + fVar14;
    local_188 = (fVar12 * fVar26 - fVar11 * fVar13) + fVar15 * fVar9 + in_XMM5._0_4_ +
                *(float *)(param_3 + 0x220);
    fStack_184 = (fVar9 * fVar13 - fVar12 * fVar10) + fVar15 * fVar11 + in_XMM5._4_4_ +
                 *(float *)(param_3 + 0x224);
    fStack_180 = (fVar11 * fVar10 - fVar9 * fVar26) + fVar15 * fVar12 + in_XMM5._8_4_ +
                 *(float *)(param_3 + 0x228);
    fStack_17c = (fVar14 * fVar15 - fVar14 * fVar15) + fVar15 * fVar14 + in_XMM5._12_4_ +
                 *(float *)(param_3 + 0x22c);
    fVar26 = fStack_184 - fVar23;
    fVar15 = local_188 - fVar22;
    fVar13 = fStack_180 - fVar24;
    fVar10 = fVar26 * fVar26 + fVar15 * fVar15 + fVar13 * fVar13;
    if (1e-08 < fVar10) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar9 = auVar17._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar10 * 0.5 * fVar9 * fVar9);
      fVar10 = 0.5 - fVar10 * 0.5 * fVar9 * fVar9;
      in_XMM5 = ZEXT416((uint)fVar10);
      fVar9 = fVar9 + fVar9 * fVar10;
      fVar26 = fVar26 * fVar9;
      fVar15 = fVar15 * fVar9;
      fVar13 = fVar13 * fVar9;
    }
    fVar22 = (float)local_1a8 - fVar22;
    fVar9 = local_1a8._4_4_ - fVar23;
    fVar11 = fStack_1a0 - fVar24;
    fVar10 = fVar9 * fVar9 + fVar22 * fVar22 + fVar11 * fVar11;
    if (1e-08 < fVar10) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar12 = auVar17._0_4_;
      in_XMM5._4_12_ = auVar17._4_12_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
      in_XMM5._0_4_ = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
      fVar22 = fVar22 * in_XMM5._0_4_;
      fVar9 = fVar9 * in_XMM5._0_4_;
      fVar11 = fVar11 * in_XMM5._0_4_;
    }
    local_138 = fVar11 * fVar26 - fVar9 * fVar13;
    fStack_134 = fVar22 * fVar13 - fVar11 * fVar15;
    fStack_130 = fVar9 * fVar15 - fVar22 * fVar26;
    fVar10 = fStack_134 * fStack_134 + local_138 * local_138 + fStack_130 * fStack_130;
    if (1e-08 < fVar10) {
      auVar17 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar26 = auVar17._0_4_;
      in_XMM5._4_12_ = auVar17._4_12_;
      fVar26 = fVar26 + fVar26 * (0.5 - fVar10 * 0.5 * fVar26 * fVar26);
      fVar26 = fVar26 + fVar26 * (0.5 - fVar10 * 0.5 * fVar26 * fVar26);
      local_138 = fVar26 * local_138;
      fStack_134 = fVar26 * fStack_134;
      in_XMM5._0_4_ = fVar26 * fStack_130;
      fStack_130 = in_XMM5._0_4_;
    }
    if ((((*(byte *)(param_1 + 0x6c) & 1) != 0) && (param_7 != '\0')) &&
       (fStack_134 * *(float *)(param_1 + 0x74) + local_138 * *(float *)(param_1 + 0x70) +
        fStack_130 * *(float *)(param_1 + 0x78) <
        (*(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x80)) - 1.0)) {
      return (ulonglong)pfVar8 & 0xffffffffffffff00;
    }
    fStack_1a0 = (fStack_1a0 + fVar24 + fStack_180) * 0.33333334;
    *(ulonglong *)param_5 =
         CONCAT44((local_1a8._4_4_ + fVar23 + fStack_184) * 0.33333334,
                  ((float)local_1a8 + local_118 + local_188) * 0.33333334);
    param_5[2] = fStack_1a0;
    if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
      fVar10 = fVar11 * fStack_134 - fVar9 * fStack_130;
      fVar26 = fVar22 * fStack_130 - fVar11 * local_138;
      fVar15 = local_138 * fVar9 - fVar22 * fStack_134;
      fVar13 = fVar26 * fVar26 + fVar10 * fVar10 + fVar15 * fVar15;
      if (1e-08 < fVar13) {
        auVar17 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
        fVar12 = auVar17._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar13 * 0.5 * fVar12 * fVar12);
        fVar10 = fVar12 * fVar10;
        fVar26 = fVar12 * fVar26;
        fVar15 = fVar12 * fVar15;
      }
      uStack_12c = uRam00000001464aa7fc;
      _local_158 = CONCAT44(fVar9,fVar22);
      _fStack_150 = CONCAT44((int)((ulonglong)_DAT_1464aa7d8 >> 0x20),fVar11);
      _local_148 = CONCAT44(fVar26,fVar10);
      _fStack_140 = CONCAT44((int)((ulonglong)_DAT_1464aa7e8 >> 0x20),fVar15);
      local_128 = _DAT_1464aa800;
      uStack_120 = uRam00000001464aa808;
      local_168 = fStack_180;
      fStack_164 = fStack_180;
      fStack_160 = fStack_180;
      fStack_15c = fStack_180;
      local_108 = fVar23;
      fStack_104 = fVar23;
      fStack_100 = fVar23;
      fStack_fc = fVar23;
      local_f8 = fStack_184;
      fStack_f4 = fStack_184;
      fStack_f0 = fStack_184;
      fStack_ec = fStack_184;
      local_e8 = fVar24;
      fStack_e4 = fVar24;
      fStack_e0 = fVar24;
      fStack_dc = fVar24;
      pfVar8 = (float *)FQuat::FQuat(&local_168,&local_158);
      fVar14 = fRam0000000146b06ecc;
      fVar12 = fRam0000000146b06ec8;
      fVar11 = fRam0000000146b06ec4;
      fVar9 = _DAT_146b06ec0;
      fVar10 = *pfVar8;
      fVar26 = pfVar8[1];
      fVar13 = pfVar8[2];
      fVar15 = pfVar8[3];
      *(float *)*param_6 = fVar10;
      *(float *)(*param_6 + 4) = fVar26;
      *(float *)(*param_6 + 8) = fVar13;
      *(float *)(*param_6 + 0xc) = fVar15;
      auVar17._0_4_ = fVar10 * fVar10 + fVar13 * fVar13;
      auVar17._4_4_ = fVar26 * fVar26 + fVar15 * fVar15;
      auVar17._8_4_ = fVar13 * fVar13 + fVar10 * fVar10;
      auVar17._12_4_ = fVar15 * fVar15 + fVar26 * fVar26;
      auVar16._0_4_ = auVar17._4_4_ + auVar17._0_4_;
      auVar16._4_4_ = auVar17._8_4_ + auVar17._4_4_;
      auVar16._8_4_ = auVar17._12_4_ + auVar17._8_4_;
      auVar16._12_4_ = auVar17._0_4_ + auVar17._12_4_;
      auVar17 = rsqrtps(auVar17,auVar16);
      fVar18 = auVar17._0_4_;
      fVar19 = auVar17._4_4_;
      fVar20 = auVar17._8_4_;
      fVar21 = auVar17._12_4_;
      fVar18 = (fVar9 - fVar18 * fVar18 * auVar16._0_4_ * fVar9) * fVar18 + fVar18;
      fVar19 = (fVar11 - fVar19 * fVar19 * auVar16._4_4_ * fVar11) * fVar19 + fVar19;
      fVar20 = (fVar12 - fVar20 * fVar20 * auVar16._8_4_ * fVar12) * fVar20 + fVar20;
      fVar21 = (fVar14 - fVar21 * fVar21 * auVar16._12_4_ * fVar14) * fVar21 + fVar21;
      in_XMM5._0_4_ =
           (float)(((uint)(((fVar9 - fVar18 * fVar18 * auVar16._0_4_ * fVar9) * fVar18 + fVar18) *
                          fVar10) ^ _DAT_146b06eb0) & -(uint)(1e-08 <= auVar16._0_4_) ^
                  _DAT_146b06eb0);
      in_XMM5._4_4_ =
           (float)(((uint)(((fVar11 - fVar19 * fVar19 * auVar16._4_4_ * fVar11) * fVar19 + fVar19) *
                          fVar26) ^ uRam0000000146b06eb4) & -(uint)(1e-08 <= auVar16._4_4_) ^
                  uRam0000000146b06eb4);
      in_XMM5._8_4_ =
           (float)(((uint)(((fVar12 - fVar20 * fVar20 * auVar16._8_4_ * fVar12) * fVar20 + fVar20) *
                          fVar13) ^ uRam0000000146b06eb8) & -(uint)(1e-08 <= auVar16._8_4_) ^
                  uRam0000000146b06eb8);
      in_XMM5._12_4_ =
           (float)(((uint)(((fVar14 - fVar21 * fVar21 * auVar16._12_4_ * fVar14) * fVar21 + fVar21)
                          * fVar15) ^ uRam0000000146b06ebc) & -(uint)(1e-08 <= auVar16._12_4_) ^
                  uRam0000000146b06ebc);
      *param_6 = in_XMM5;
      goto LAB_142645437;
    }
  }
  uVar2 = _DAT_1464aa818;
  *(undefined8 *)*param_6 = _DAT_1464aa810;
  *(undefined8 *)(*param_6 + 8) = uVar2;
LAB_142645437:
  uVar7 = *(ulonglong *)(local_178 + 0x28);
  if ((*(byte *)(*(longlong *)(uVar7 + 0x30) + 100) & 1) != 0) {
    lVar1 = *(longlong *)(local_178 + 0x18);
    auVar17 = *(undefined1 (*) [16])(lVar1 + 0x230);
    fVar10 = auVar17._0_4_;
    fVar26 = auVar17._4_4_;
    fVar13 = auVar17._8_4_;
    fVar19 = *(float *)(lVar1 + 0x210) * _DAT_146b06e10;
    fVar20 = *(float *)(lVar1 + 0x214) * fRam0000000146b06e14;
    fVar21 = *(float *)(lVar1 + 0x218) * fRam0000000146b06e18;
    fVar22 = *(float *)(lVar1 + 0x21c) * fRam0000000146b06e1c;
    auVar17 = rcpps(in_XMM5,auVar17);
    fVar23 = (float)((uint)(*param_5 - *(float *)(lVar1 + 0x220)) & _DAT_146b06de0);
    fVar24 = (float)((uint)(param_5[1] - *(float *)(lVar1 + 0x224)) & uRam0000000146b06de4);
    fVar25 = (float)((uint)(param_5[2] - *(float *)(lVar1 + 0x228)) & uRam0000000146b06de8);
    fVar15 = fVar25 * fVar20 - fVar24 * fVar21;
    fVar9 = fVar23 * fVar21 - fVar25 * fVar19;
    fVar11 = fVar24 * fVar19 - fVar23 * fVar20;
    fVar12 = auVar17._0_4_;
    fVar14 = auVar17._4_4_;
    fVar18 = auVar17._8_4_;
    fVar15 = fVar15 + fVar15;
    fVar9 = fVar9 + fVar9;
    fVar11 = fVar11 + fVar11;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar10;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar26;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar13;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar10;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar26;
    fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar13;
    fVar13 = ((fVar9 * fVar19 - fVar15 * fVar20) + fVar22 * fVar11 + fVar25) *
             (float)(-(uint)((float)((uint)fVar13 & uRam0000000146b06e08) <= fRam0000000146b06df8) &
                     (uint)fVar18 ^ (uint)fVar18);
    uVar7 = (ulonglong)(uint)fVar13;
    *(ulonglong *)param_5 =
         CONCAT44(((fVar15 * fVar21 - fVar11 * fVar19) + fVar22 * fVar9 + fVar24) *
                  (float)(-(uint)((float)((uint)fVar26 & uRam0000000146b06e04) <=
                                 fRam0000000146b06df4) & (uint)fVar14 ^ (uint)fVar14),
                  ((fVar11 * fVar20 - fVar9 * fVar21) + fVar22 * fVar15 + fVar23) *
                  (float)(-(uint)((float)((uint)fVar10 & _DAT_146b06e00) <= _DAT_146b06df0) &
                          (uint)fVar12 ^ (uint)fVar12));
    param_5[2] = fVar13;
  }
  *param_5 = *(float *)(param_1 + 0x3c) + *param_5;
  param_5[1] = *(float *)(param_1 + 0x40) + param_5[1];
  param_5[2] = *(float *)(param_1 + 0x44) + param_5[2];
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 142645d60 GetParticleParametersUtilized body=2188 status=ok
// SIG undefined GetParticleParametersUtilized(void)

/* WARNING: Removing unreachable block (ram,0x000142645f7d) */

void UParticleModule::GetParticleParametersUtilized(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  void *_Src;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  void *local_108;
  uint local_100;
  int local_fc;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  int local_b8;
  void *local_b0;
  int local_a8;
  void *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  void *local_80;
  int local_78;
  void *local_70;
  int local_68;
  longlong local_60 [2];
  longlong local_50 [3];
  
  local_f8 = *(longlong *)(param_1 + 0x10);
  lVar21 = 0;
  if (local_f8 == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = *(longlong *)(local_f8 + 0x38);
  }
  local_e8 = 0xffffffff;
  local_e4 = 0x101;
  local_e2 = 0;
  FUN_14067b390(&local_f8);
  while (local_f0 != 0) {
    lVar6 = FRawDistribution::TryGetDistributionObjectFromRawDistributionProperty(local_f0,param_1);
    if (lVar6 != 0) {
      lVar7 = UDistributionFloatParticleParameter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar7 = lVar21;
      if (bVar3) {
        lVar7 = lVar6;
      }
      lVar8 = UDistributionVectorParticleParameter::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar21 = lVar6;
      }
      if (lVar7 == 0) {
        if (lVar21 != 0) {
          puVar9 = (undefined8 *)FName::ToString(lVar21 + 0x50,local_50);
          if (*(int *)(puVar9 + 1) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = (undefined2 *)*puVar9;
          }
          FString::PrintfImpl(&local_d0,L"VECTOR: %32s - ",puVar13);
          uVar4 = local_c8;
          _Src = local_d0;
          iVar10 = 0;
          iVar16 = local_c8._4_4_;
          iVar11 = (int)local_c8;
          uVar19 = (ulonglong)(int)local_c8;
          local_108 = local_d0;
          local_d0 = (void *)0x0;
          local_fc = local_c8._4_4_;
          local_c8 = 0;
          if (local_50[0] != 0) {
            FMemory::Free();
          }
          FString::PrintfImpl(&local_c0,L"MinIn %10.5f,%10.5f,%10.5f, ",
                              (double)*(float *)(lVar21 + 0x58),(double)*(float *)(lVar21 + 0x5c),
                              (double)*(float *)(lVar21 + 0x60));
          pvVar5 = local_c0;
          if (local_b8 != 0) {
            iVar10 = local_b8 + -1;
          }
          uVar20 = uVar19;
          if (iVar10 != 0) {
            local_100 = iVar10 + (uint)(iVar11 == 0) + iVar11;
            if (iVar16 < (int)local_100) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar4 & 0xffffffff);
              _Src = local_108;
              iVar16 = local_fc;
            }
            uVar20 = (ulonglong)local_100;
            pvVar1 = (void *)((longlong)_Src + (uVar19 - (iVar11 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar10 * 2);
            *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
          }
          iVar11 = 0;
          if (local_c0 != (void *)0x0) {
            FMemory::Free(local_c0);
          }
          FString::PrintfImpl(&local_b0,L"MaxIn %10.5f,%10.5f,%10.5f, ",
                              (double)*(float *)(lVar21 + 100),(double)*(float *)(lVar21 + 0x68),
                              (double)*(float *)(lVar21 + 0x6c));
          pvVar5 = local_b0;
          if (local_a8 != 0) {
            iVar11 = local_a8 + -1;
          }
          if (iVar11 != 0) {
            iVar10 = (int)uVar20;
            local_100 = iVar10 + (uint)(iVar10 == 0) + iVar11;
            if (iVar16 < (int)local_100) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar20 & 0xffffffff);
              _Src = local_108;
              iVar16 = local_fc;
            }
            uVar20 = (ulonglong)local_100;
            pvVar1 = (void *)((longlong)_Src + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_b0 != (void *)0x0) {
            FMemory::Free(local_b0);
          }
          FString::PrintfImpl(&local_a0,L"MinOut %10.5f,%10.5f,%10.5f, ",
                              (double)*(float *)(lVar21 + 0x70),(double)*(float *)(lVar21 + 0x74),
                              (double)*(float *)(lVar21 + 0x78));
          pvVar5 = local_a0;
          if (local_98 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_98 + -1;
          }
          if (iVar11 != 0) {
            iVar10 = (int)uVar20;
            local_100 = iVar11 + (uint)(iVar10 == 0) + iVar10;
            if (iVar16 < (int)local_100) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar20 & 0xffffffff);
              _Src = local_108;
              iVar16 = local_fc;
            }
            uVar20 = (ulonglong)local_100;
            pvVar1 = (void *)((longlong)_Src + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_a0 != (void *)0x0) {
            FMemory::Free(local_a0);
          }
          FString::PrintfImpl(&local_90,L"MaxOut %10.5f,%10.5f,%10.5f, ",
                              (double)*(float *)(lVar21 + 0x7c),(double)*(float *)(lVar21 + 0x80),
                              (double)*(float *)(lVar21 + 0x84));
          pvVar5 = local_90;
          if (local_88 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_88 + -1;
          }
          if (iVar11 != 0) {
            iVar10 = (int)uVar20;
            local_100 = iVar11 + (uint)(iVar10 == 0) + iVar10;
            if (iVar16 < (int)local_100) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar20 & 0xffffffff);
              _Src = local_108;
              iVar16 = local_fc;
            }
            uVar20 = (ulonglong)local_100;
            pvVar1 = (void *)((longlong)_Src + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_90 != (void *)0x0) {
            FMemory::Free(local_90);
          }
          cVar2 = *(char *)(lVar21 + 0x8a);
          if (cVar2 == '\0') {
            pwVar12 = L"Normal";
          }
          else if (cVar2 == '\x01') {
            pwVar12 = L"Absolute";
          }
          else {
            pwVar12 = L"????";
            if (cVar2 == '\x02') {
              pwVar12 = L"Direct";
            }
          }
          cVar2 = *(char *)(lVar21 + 0x89);
          if (cVar2 == '\0') {
            pwVar15 = L"Normal";
          }
          else if (cVar2 == '\x01') {
            pwVar15 = L"Absolute";
          }
          else {
            pwVar15 = L"????";
            if (cVar2 == '\x02') {
              pwVar15 = L"Direct";
            }
          }
          cVar2 = *(char *)(lVar21 + 0x88);
          if (cVar2 == '\0') {
            pwVar14 = L"Normal";
          }
          else if (cVar2 == '\x01') {
            pwVar14 = L"Absolute";
          }
          else {
            pwVar14 = L"????";
            if (cVar2 == '\x02') {
              pwVar14 = L"Direct";
            }
          }
          FString::PrintfImpl(&local_80,L"Mode %10s,%10s,%10s, ",pwVar14,pwVar15,pwVar12);
          pvVar5 = local_80;
          if (local_78 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_78 + -1;
          }
          if (iVar11 != 0) {
            iVar10 = (int)uVar20;
            local_100 = iVar11 + (uint)(iVar10 == 0) + iVar10;
            if (iVar16 < (int)local_100) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar20 & 0xffffffff);
              _Src = local_108;
              iVar16 = local_fc;
            }
            uVar20 = (ulonglong)local_100;
            pvVar1 = (void *)((longlong)_Src + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          uVar17 = (uint)uVar20;
          if (local_80 != (void *)0x0) {
            FMemory::Free(local_80);
          }
          FString::PrintfImpl(&local_70,L"Constant %10.5f,%10.5f,%10.5f\n",
                              (double)*(float *)(lVar21 + 0x38),(double)*(float *)(lVar21 + 0x3c),
                              (double)*(float *)(lVar21 + 0x40));
          pvVar5 = local_70;
          if (local_68 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_68 + -1;
          }
          lVar21 = 0;
          uVar18 = uVar17;
          if (iVar11 != 0) {
            local_100 = iVar11 + (uint)(uVar17 == 0) + uVar17;
            if (iVar16 < (int)local_100) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar20 & 0xffffffff);
              _Src = local_108;
            }
            uVar18 = local_100;
            pvVar1 = (void *)((longlong)_Src +
                             ((longlong)(int)uVar17 - (ulonglong)(uVar17 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar5,(longlong)iVar11 * 2);
            *(undefined2 *)((longlong)iVar11 * 2 + (longlong)pvVar1) = 0;
          }
          if (local_70 != (void *)0x0) {
            FMemory::Free(local_70);
          }
          iVar11 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar11 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
          }
          puVar9 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
          *puVar9 = 0;
          *(uint *)(puVar9 + 1) = uVar18;
          if (uVar18 == 0) {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,uVar18,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,(longlong)(int)uVar18 * 2);
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
        }
      }
      else {
        cVar2 = *(char *)(lVar7 + 0x58);
        if (cVar2 == '\0') {
          pwVar12 = L"Normal";
        }
        else if (cVar2 == '\x01') {
          pwVar12 = L"Absolute";
        }
        else {
          pwVar12 = L"????";
          if (cVar2 == '\x02') {
            pwVar12 = L"Direct";
          }
        }
        puVar9 = (undefined8 *)FName::ToString(lVar7 + 0x40,local_60);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar9;
        }
        FString::PrintfImpl(&local_e0,
                            L"float : %32s - MinIn %10.5f, MaxIn %10.5f, MinOut %10.5f, MaxOut %10.5f, Mode %10s, Constant %10.5f\n"
                            ,puVar13,(double)*(float *)(lVar7 + 0x48),
                            (double)*(float *)(lVar7 + 0x4c),(double)*(float *)(lVar7 + 0x50),
                            (double)*(float *)(lVar7 + 0x54),pwVar12,
                            (double)*(float *)(lVar7 + 0x38));
        iVar11 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar11 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar11 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar11);
        }
        lVar21 = 0;
        puVar9 = (undefined8 *)((longlong)iVar11 * 0x10 + *param_2);
        *puVar9 = 0;
        *puVar9 = local_e0;
        *(undefined4 *)(puVar9 + 1) = (undefined4)local_d8;
        *(undefined4 *)((longlong)puVar9 + 0xc) = local_d8._4_4_;
        local_d8 = 0;
        local_e0 = 0;
        if (local_60[0] != 0) {
          FMemory::Free();
        }
      }
    }
    local_f0 = *(longlong *)(local_f0 + 0x28);
    FUN_14067b390(&local_f8);
  }
  return;
}



// FUNCTION 142646600 FUN_142646600 body=703 status=ok
// SIG undefined FUN_142646600(void)

void FUN_142646600(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong *local_res10 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  longlong *local_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
    FWeakObjectPtr::operator=(&local_res20);
    *param_3 = local_res20;
    param_3[1] = uStackX_24;
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    FWeakObjectPtr::operator=(&local_res20,0);
    *param_3 = local_res20;
    param_3[1] = uStackX_24;
    return;
  }
  local_res10[0] = (longlong *)0x0;
  (**(code **)(*plVar1 + 0x980))(plVar1,*(undefined8 *)(param_1 + 0xf0),local_res10);
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_3 + 2);
  bVar9 = local_res10[0] != plVar4;
  cVar3 = FWeakObjectPtr::IsValid(param_3);
  if ((cVar3 == '\0') || (bVar9)) {
    FWeakObjectPtr::operator=(&local_res20,0);
    *param_3 = local_res20;
    param_3[1] = uStackX_24;
    FWeakObjectPtr::operator=(param_3 + 2,local_res10[0]);
    plVar4 = local_res10[0];
    lVar8 = 0;
    if (local_res10[0] != (longlong *)0x0) {
      lVar5 = AEquipmentSkin::GetPrivateStaticClass();
      plVar2 = local_res10[0];
      lVar7 = plVar4[2];
      if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        lVar8 = plVar4[0x8d];
      }
      else if (local_res10[0] != (longlong *)0x0) {
        uVar6 = FUN_142a07000();
        lVar7 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
        lVar8 = 0;
        if (lVar7 != 0) {
          lVar8 = lVar7;
        }
      }
    }
    lVar7 = plVar1[0x32];
    if (lVar7 != 0) {
      lVar5 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        lVar8 = lVar7;
      }
    }
    if (lVar8 == 0) {
      local_48 = (longlong *)0x0;
      local_40 = 0;
      FUN_14238cc80(plVar1,&local_48);
      plVar1 = local_48 + (int)local_40;
      for (plVar4 = local_48; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        lVar7 = *plVar4;
        if (lVar7 != 0) {
          lVar5 = FUN_142a07000();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if ((bVar9) && (*(longlong *)(lVar7 + 0x718) != 0)) {
            lVar8 = lVar7;
          }
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
      if (lVar8 == 0) {
        plVar1 = *(longlong **)(param_2 + 0x18);
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        cVar3 = (**(code **)(*plVar1 + 0x980))(plVar1,*(undefined8 *)(param_1 + 0xf0),&local_res20);
        if ((cVar3 == '\0') || (CONCAT44(uStackX_24,local_res20) == 0)) {
          lVar8 = plVar1[0x32];
        }
        else {
          lVar8 = *(longlong *)(CONCAT44(uStackX_24,local_res20) + 0x168);
        }
        if (lVar8 == 0) {
          return;
        }
        FWeakObjectPtr::operator=(param_3);
        return;
      }
    }
    FWeakObjectPtr::operator=(param_3,lVar8);
    FUN_14264a110(param_1,param_3,lVar8);
  }
  return;
}



// FUNCTION 1426468c0 FUN_1426468c0 body=307 status=ok
// SIG undefined FUN_1426468c0(void)

void FUN_1426468c0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  longlong *local_res10 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((param_2 != 0) && (plVar3 = *(longlong **)(param_2 + 0x18), plVar3 != (longlong *)0x0)) {
    local_res10[0] = (longlong *)0x0;
    (**(code **)(*plVar3 + 0x980))(plVar3,*(undefined8 *)(param_1 + 0x50),local_res10);
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_3 + 2);
    bVar7 = plVar3 != local_res10[0];
    cVar2 = FWeakObjectPtr::IsValid(param_3);
    if ((cVar2 == '\0') || (bVar7)) {
      FWeakObjectPtr::operator=(&local_res20,0);
      *param_3 = local_res20;
      param_3[1] = local_res24;
      FWeakObjectPtr::operator=(param_3 + 2,local_res10[0]);
      plVar3 = local_res10[0];
      if (local_res10[0] != (longlong *)0x0) {
        lVar4 = AEquipmentSkin::GetPrivateStaticClass();
        plVar1 = local_res10[0];
        lVar6 = plVar3[2];
        if ((*(int *)(lVar6 + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          lVar6 = plVar3[0x8d];
        }
        else {
          uVar5 = FUN_142a07000();
          lVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar5);
          lVar6 = 0;
          if (lVar4 != 0) {
            lVar6 = lVar4;
          }
        }
        FWeakObjectPtr::operator=(param_3,lVar6);
        FUN_142656c30(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 142646a00 FUN_142646a00 body=448 status=ok
// SIG undefined FUN_142646a00(void)

bool FUN_142646a00(longlong param_1,longlong param_2,longlong param_3,int param_4,longlong *param_5,
                  float *param_6,undefined4 param_7,longlong param_8)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  undefined8 local_res8;
  float local_38;
  float fStack_34;
  float local_30;
  undefined1 local_28 [16];
  
  FUN_1424118e0(param_1 + 0x48,&local_38,param_7,0,0,0);
  cVar2 = *(char *)(param_1 + 0xfc);
  if (cVar2 == '\0') {
    if ((*(int *)(param_1 + 0xa0) <= param_4) || (*(longlong *)(param_3 + 0x718) == 0)) {
      return false;
    }
    lVar5 = (longlong)param_4 * 0x68;
    FUN_1423ac760(param_3,&local_res8,*(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x98)));
    lVar3 = FUN_142777810(*(undefined8 *)(param_3 + 0x718),local_res8);
    *param_5 = lVar3;
    pfVar4 = (float *)FUN_1424118e0(*(longlong *)(param_1 + 0x98) + 0x18 + lVar5,local_28,param_7,0,
                                    0,0);
    fVar1 = pfVar4[2];
    *(ulonglong *)param_6 = CONCAT44(fStack_34 + pfVar4[1],local_38 + *pfVar4);
    param_6[2] = local_30 + fVar1;
    if (param_8 != 0) {
      *param_6 = *param_6 + *(float *)(param_8 + 4);
      param_6[1] = *(float *)(param_8 + 8) + param_6[1];
      param_6[2] = *(float *)(param_8 + 0xc) + param_6[2];
    }
LAB_142646b9c:
    lVar3 = *param_5;
  }
  else {
    if (cVar2 == '\x01') {
      param_4 = *(int *)(*(longlong *)(param_2 + 0x40) + (longlong)param_4 * 4);
    }
    else if (cVar2 != '\x02') goto LAB_142646b9c;
    lVar3 = FUN_14277ab00(*(undefined8 *)(param_3 + 0x718),param_4);
    *param_5 = lVar3;
    *(ulonglong *)param_6 = CONCAT44(fStack_34,local_38);
    param_6[2] = local_30;
    lVar3 = *param_5;
  }
  return lVar3 != 0;
}



// FUNCTION 142646bc0 FUN_142646bc0 body=192 status=ok
// SIG undefined FUN_142646bc0(void)

undefined1 FUN_142646bc0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 local_28;
  undefined4 local_20;
  
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  uVar5 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      if ((*(char *)(lVar3 + lVar2) == '\x04') &&
         ((iVar1 = *(int *)(lVar3 + 4 + lVar2), iVar1 == 0 ||
          (*(int *)(param_3 + 0x10) % iVar1 == 0)))) {
        local_20 = *(undefined4 *)(param_2 + 100);
        local_28 = *(undefined8 *)(param_2 + 0x5c);
        FUN_14260b1e0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(lVar3 + 0x10 + lVar2),
                      *(undefined4 *)(param_2 + 0x13c),param_4,&local_28,lVar2 + 0x18 + lVar3);
        uVar5 = 1;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (iVar4 < *(int *)(param_1 + 0x40));
  }
  return uVar5;
}



// FUNCTION 142646c80 FUN_142646c80 body=586 status=ok
// SIG undefined FUN_142646c80(void)

undefined1
FUN_142646c80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6,undefined8 *param_7,char param_8)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
  uVar8 = 0;
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x38);
      if ((*(char *)(lVar7 + lVar3) == '\x03') ||
         ((*(char *)(lVar7 + lVar3) == '\x06' && (param_8 != '\0')))) {
        uVar1 = *(uint *)(lVar7 + 0xc + lVar3);
        if ((uVar1 & 1) == 0) {
          if ((((uVar1 & 2) == 0) || (param_4 == 0)) || (*(int *)(param_4 + 0x18) == 0))
          goto LAB_142646d1f;
        }
        else if ((param_6 == 0) || (-1 < *(int *)(param_6 + 0x68))) {
LAB_142646d1f:
          iVar2 = *(int *)(lVar7 + 4 + lVar3);
          if ((iVar2 == 0) || (*(int *)(param_3 + 0xc) % iVar2 == 0)) {
            if (param_6 == 0) {
              uVar9 = *(undefined4 *)(param_2 + 0x13c);
              puVar5 = &local_98;
              local_98 = 0;
              local_90 = 0;
            }
            else {
              puVar5 = &local_8c;
              uVar9 = *(undefined4 *)(param_6 + 0xc);
              local_8c = *(undefined8 *)(param_6 + 0x3c);
              local_84 = *(undefined4 *)(param_6 + 0x44);
            }
            local_70 = *(undefined4 *)(param_5 + 0x34);
            local_78 = *(undefined8 *)(param_5 + 0x2c);
            local_60 = *(undefined4 *)(puVar5 + 1);
            local_68 = *puVar5;
            local_58 = *param_7;
            local_50 = *(undefined4 *)(param_7 + 1);
            local_48 = *(undefined8 *)(param_5 + 0x14);
            local_40 = *(undefined4 *)(param_5 + 0x1c);
            uVar4 = FWeakObjectPtr::Get(param_5 + 100);
            FUN_14260b2a0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(lVar7 + 0x10 + lVar3),
                          *(undefined4 *)(param_2 + 0x13c),&local_48,&local_58,&local_68,
                          lVar3 + 0x18 + lVar7,uVar9,&local_78,*(undefined4 *)(param_5 + 0xc),
                          *(undefined4 *)(param_5 + 0x60),*(undefined8 *)(param_5 + 0x80),uVar4,
                          param_8);
            uVar8 = 1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while (iVar6 < *(int *)(param_1 + 0x40));
  }
  return uVar8;
}



// FUNCTION 142646ed0 FUN_142646ed0 body=313 status=ok
// SIG undefined FUN_142646ed0(void)

undefined1 FUN_142646ed0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined1 uVar6;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  uVar6 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      if ((*(char *)(lVar4 + lVar2) == '\x02') &&
         ((iVar1 = *(int *)(lVar4 + 4 + lVar2), iVar1 == 0 || (*(int *)(param_3 + 8) % iVar1 == 0)))
         ) {
        if ((*(byte *)(lVar4 + 0xc + lVar2) & 8) == 0) {
          puVar3 = &local_58;
          local_58 = *(undefined8 *)(param_4 + 0x10);
          local_50 = *(undefined4 *)(param_4 + 0x18);
        }
        else {
          puVar3 = (undefined8 *)
                   FParticleEmitterInstance::GetParticleLocationWithOrbitOffset
                             (param_2,local_28,param_4);
        }
        local_40 = *(undefined4 *)(param_4 + 0x44);
        local_30 = *(undefined4 *)(puVar3 + 1);
        local_48 = *(undefined8 *)(param_4 + 0x3c);
        local_38 = *puVar3;
        FUN_14260b400(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(lVar4 + 0x10 + lVar2),
                      *(undefined4 *)(param_2 + 0x13c),&local_38,&local_48,lVar2 + 0x18 + lVar4,
                      *(undefined4 *)(param_4 + 0xc));
        uVar6 = 1;
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 0x28;
    } while (iVar5 < *(int *)(param_1 + 0x40));
  }
  return uVar6;
}



// FUNCTION 142647010 FUN_142647010 body=521 status=ok
// SIG undefined FUN_142647010(void)

undefined1 FUN_142647010(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  uVar6 = 0;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x38);
      if ((*(char *)(lVar5 + lVar3) == '\x01') &&
         ((iVar1 = *(int *)(lVar5 + 4 + lVar3), iVar1 == 0 || (*(int *)(param_3 + 4) % iVar1 == 0)))
         ) {
        if ((*(byte *)(lVar5 + 0xc + lVar3) & 8) == 0) {
          local_80 = *(undefined4 *)(param_4 + 0x18);
          puVar4 = &local_88;
          local_88 = *(undefined8 *)(param_4 + 0x10);
        }
        else {
          puVar4 = (undefined8 *)
                   FParticleEmitterInstance::GetParticleLocationWithOrbitOffset
                             (param_2,local_58,param_4);
        }
        local_68 = *puVar4;
        fVar2 = *(float *)(puVar4 + 1);
        local_60 = fVar2;
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) != 0) {
          local_48 = (float)local_68;
          fStack_44 = (float)((ulonglong)local_68 >> 0x20);
          local_38 = 0;
          local_30 = 0;
          uStack_3c = 0x3f800000;
          local_60 = *(float *)(param_2 + 0xe8) * 1.0 + fVar2 * *(float *)(param_2 + 0xd8) +
                     fStack_44 * *(float *)(param_2 + 200) + local_48 * *(float *)(param_2 + 0xb8);
          local_68 = CONCAT44(*(float *)(param_2 + 0xe4) * 1.0 + fVar2 * *(float *)(param_2 + 0xd4)
                              + fStack_44 * *(float *)(param_2 + 0xc4) +
                                local_48 * *(float *)(param_2 + 0xb4),
                              *(float *)(param_2 + 0xe0) * 1.0 + fVar2 * *(float *)(param_2 + 0xd0)
                              + fStack_44 * *(float *)(param_2 + 0xc0) +
                                local_48 * *(float *)(param_2 + 0xb0));
          fStack_40 = fVar2;
        }
        local_70 = *(undefined4 *)(param_4 + 0x44);
        local_78 = *(undefined8 *)(param_4 + 0x3c);
        FUN_14260b4d0(*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(lVar5 + 0x10 + lVar3),
                      *(undefined4 *)(param_2 + 0x13c),&local_68,&local_78,lVar3 + 0x18 + lVar5,
                      local_68);
        uVar6 = 1;
      }
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 0x28;
    } while (iVar7 < *(int *)(param_1 + 0x40));
  }
  return uVar6;
}



// FUNCTION 142647220 FUN_142647220 body=508 status=ok
// SIG undefined FUN_142647220(void)

void FUN_142647220(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint local_res8;
  undefined4 uStackX_c;
  
  cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x38);
  uVar7 = 0;
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FName::FName(&local_res8,L"DistributionDampingFactorConstant",1);
    uVar4 = NewObject<UDistributionVectorConstant>(param_1,*puVar3,0,0,0,0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
  }
  cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x88);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FName::FName(&local_res8,L"DistributionDampingFactorRotation",1);
    lVar5 = NewObject<UDistributionVectorConstant>(param_1,*puVar3,0,0,0,0);
    *(undefined8 *)(lVar5 + 0x38) = 0x3f8000003f800000;
    *(undefined4 *)(lVar5 + 0x40) = 0x3f800000;
    *(longlong *)(param_1 + 0xd0) = lVar5;
  }
  cVar1 = FRawDistributionFloat::IsCreated(param_1 + 0xd8);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FName::FName(&local_res8,L"DistributionMaxCollisionsConstant",1);
    lVar5 = NewObject<UDistributionFloatConstant>(param_1,*puVar3,0,0,0,0);
    *(undefined4 *)(lVar5 + 0x38) = 0x3f800000;
    *(longlong *)(param_1 + 0x108) = lVar5;
  }
  cVar1 = FRawDistributionFloat::IsCreated(param_1 + 0x138);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FName::FName(&local_res8,L"DistributionParticleMass",1);
    lVar5 = NewObject<UDistributionFloatConstant>(param_1,*puVar3,0,0,0,0);
    *(undefined4 *)(lVar5 + 0x38) = 0x3dcccccd;
    *(longlong *)(param_1 + 0x168) = lVar5;
  }
  cVar1 = FRawDistributionFloat::IsCreated(param_1 + 0x180);
  uVar6 = uVar7;
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FName::FName(&local_res8,L"DistributionDelayAmount",1);
    lVar5 = NewObject<UDistributionFloatConstant>(param_1,*puVar3,0,0,0,0);
    *(undefined4 *)(lVar5 + 0x38) = 0;
    *(longlong *)(param_1 + 0x1b0) = lVar5;
  }
  for (; (-1 < (int)uVar6 && ((int)uVar6 < *(int *)(param_1 + 0x120))); uVar6 = uVar6 + 1) {
    local_res8 = uVar7;
    uVar2 = UEngineTypes::ConvertToCollisionChannel
                      (*(undefined1 *)((longlong)(int)uVar6 + *(longlong *)(param_1 + 0x118)));
    uVar7 = uVar7 | 1 << (uVar2 & 0x1f);
  }
  *(ulonglong *)(param_1 + 0x128) = CONCAT44(uStackX_c,uVar7) & 0xffffff00ffffffff;
  return;
}



// FUNCTION 142647420 FUN_142647420 body=480 status=ok
// SIG undefined FUN_142647420(void)

void FUN_142647420(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  uint in_stack_ffffffffffffff78;
  undefined2 *local_48;
  int local_40;
  
  cVar1 = FRawDistributionFloat::IsCreated(param_1 + 0xb0);
  iVar9 = 0;
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FName::FName(&local_res8,L"ManualSelectionIndex",1);
    in_stack_ffffffffffffff78 = in_stack_ffffffffffffff78 & 0xffffff00;
    lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar2,0,0,in_stack_ffffffffffffff78,0);
    *(undefined4 *)(lVar3 + 0x38) = 0;
    *(longlong *)(param_1 + 0xe0) = lVar3;
  }
  cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x48);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)FName::FName(&local_res8,L"UniversalOffset",1);
    lVar3 = NewObject<UDistributionVectorConstant>
                      (param_1,*puVar2,0,0,in_stack_ffffffffffffff78 & 0xffffff00,0);
    *(undefined8 *)(lVar3 + 0x38) = 0;
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(longlong *)(param_1 + 0x90) = lVar3;
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  lVar8 = (longlong)*(int *)(param_1 + 0xa0) * 0x68 + lVar3;
  for (; lVar3 != lVar8; lVar3 = lVar3 + 0x68) {
    cVar1 = FRawDistributionVector::IsCreated(lVar3 + 0x18);
    if (cVar1 == '\0') {
      FString::PrintfImpl(&local_48,L"Offset_%i",iVar9);
      iVar9 = iVar9 + 1;
      puVar7 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar7 = local_48;
      }
      plVar4 = (longlong *)FName::FName(local_res10,puVar7,1);
      local_res8 = 0;
      lVar6 = *plVar4;
      if (lVar6 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar5 = UDistributionVectorConstant::GetPrivateStaticClass();
      lVar6 = FUN_1417985e0(uVar5,param_1,lVar6,0,0,0,0,0,0);
      *(undefined8 *)(lVar6 + 0x38) = 0;
      *(undefined4 *)(lVar6 + 0x40) = 0;
      *(longlong *)(lVar3 + 0x60) = lVar6;
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142647600 FUN_142647600 body=66 status=ok
// SIG undefined FUN_142647600(void)

uint FUN_142647600(longlong param_1)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x60) & 2) != 0) {
    return *(uint *)(param_1 + 0x60) >> 2 & 0xffffff01;
  }
  if (-1 < *DAT_146b06e48) {
    lVar1 = FUN_1428742e0();
    if (*DAT_146b06e48 <= *(int *)(lVar1 + 4)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142647650 IsReadyForFinishDestroy body=26 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool UMapBuildDataRegistry::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x170);
  return cVar1 != '\0';
}



// FUNCTION 142647670 IsUsedInGPUEmitter body=381 status=ok
// SIG undefined IsUsedInGPUEmitter(void)

ulonglong UParticleModule::IsUsedInGPUEmitter(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar4 = UCameraShake::GetPrivateStaticClass();
    iVar7 = *(int *)(lVar4 + 0x90);
    uVar5 = (longlong)iVar7;
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < iVar7) ||
       (uVar5 = *(ulonglong *)(*(longlong *)(lVar1 + 0x10) + 0x88),
       *(longlong *)(uVar5 + (longlong)iVar7 * 8) != lVar4 + 0x88)) {
      in_RAX = (longlong *)(uVar5 & 0xffffffffffffff00);
    }
    else {
      in_RAX = (longlong *)CONCAT71((int7)(uVar5 >> 8),1);
    }
    if (((char)in_RAX != '\0') && (iVar7 = 0, 0 < *(int *)(lVar1 + 0x48))) {
      lVar4 = 0;
      do {
        in_RAX = *(longlong **)(lVar1 + 0x40);
        lVar2 = *(longlong *)(lVar4 + (longlong)in_RAX);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0x48) != 0)) {
          in_RAX = (longlong *)((ulonglong)in_RAX & 0xffffffffffffff00);
          iVar6 = 0;
          if (0 < *(int *)(lVar2 + 0x48)) {
            lVar10 = 0;
            do {
              if ((char)in_RAX != '\0') goto LAB_142647770;
              lVar3 = *(longlong *)(lVar10 + *(longlong *)(lVar2 + 0x40));
              if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x30) == param_1) {
                  in_RAX = (longlong *)0x1;
                }
                else {
                  iVar9 = 0;
                  if (0 < *(int *)(lVar3 + 0x40)) {
                    lVar8 = 0;
                    do {
                      if ((char)in_RAX != '\0') break;
                      in_RAX = (longlong *)((ulonglong)in_RAX & 0xff);
                      if (*(longlong *)(lVar8 + *(longlong *)(lVar3 + 0x38)) == param_1) {
                        in_RAX = (longlong *)0x1;
                      }
                      iVar9 = iVar9 + 1;
                      lVar8 = lVar8 + 8;
                    } while (iVar9 < *(int *)(lVar3 + 0x40));
                  }
                }
              }
              iVar6 = iVar6 + 1;
              lVar10 = lVar10 + 8;
            } while (iVar6 < *(int *)(lVar2 + 0x48));
            if ((char)in_RAX != '\0') {
LAB_142647770:
              in_RAX = *(longlong **)(lVar2 + 0x40);
              if ((*in_RAX != 0) && (lVar2 = *(longlong *)(*in_RAX + 0x48), lVar2 != 0)) {
                lVar10 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
                lVar2 = *(longlong *)(lVar2 + 0x10);
                iVar6 = *(int *)(lVar10 + 0x90);
                uVar5 = (longlong)iVar6;
                if ((*(int *)(lVar2 + 0x90) < iVar6) ||
                   (uVar5 = *(ulonglong *)(lVar2 + 0x88),
                   *(longlong *)(uVar5 + (longlong)iVar6 * 8) != lVar10 + 0x88)) {
                  in_RAX = (longlong *)(uVar5 & 0xffffffffffffff00);
                }
                else {
                  in_RAX = (longlong *)0x1;
                }
                if ((char)in_RAX != '\0') {
                  return 1;
                }
              }
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(lVar1 + 0x48));
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142647810 FUN_142647810 body=83 status=ok
// SIG undefined FUN_142647810(void)

void FUN_142647810(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  (**(code **)(**(longlong **)(param_2 + 0x18) + 0x998))
            (*(longlong **)(param_2 + 0x18),param_4,param_5,param_6,param_7,param_8,param_1 + 0x128)
  ;
  return;
}



// FUNCTION 142647870 FUN_142647870 body=165 status=ok
// SIG undefined FUN_142647870(void)

void FUN_142647870(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x40);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionAcceleration",1);
      lVar3 = NewObject<UDistributionVectorUniform>(param_1,*puVar2,0,0,0,0);
      *(longlong *)(param_1 + 0x88) = lVar3;
      *(undefined8 *)(lVar3 + 0x44) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined4 *)(lVar3 + 0x4c) = 0xc4160000;
      *(undefined4 *)(lVar3 + 0x40) = 0xc4160000;
    }
  }
  return;
}



// FUNCTION 142647920 PostInitProperties body=107 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleAttractorPointGravity::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x48);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionDragCoefficient",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0x78) = lVar3;
    }
  }
  return;
}



// FUNCTION 142647990 FUN_142647990 body=186 status=ok
// SIG undefined FUN_142647990(void)

void FUN_142647990(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x48);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res10,L"DistributionDragScaleCurve",1);
      lVar3 = NewObject<UDistributionFloatConstantCurve>(param_1,*puVar1,0,0,0,0);
      local_res8[0] = 0;
      FInterpCurve<float>::AddPoint(lVar3 + 0x38,0,local_res8);
      local_res8[0] = 0x3f800000;
      FInterpCurve<float>::AddPoint(lVar3 + 0x38,0x3f800000,local_res8);
      *(longlong *)(param_1 + 0x78) = lVar3;
    }
  }
  return;
}



// FUNCTION 142647a50 FUN_142647a50 body=214 status=ok
// SIG undefined FUN_142647a50(void)

void FUN_142647a50(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x40);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionAccelOverLife",1);
      lVar3 = NewObject<UDistributionVectorConstantCurve>(param_1,*puVar1,0,0,0,0);
      local_18 = 0x3f8000003f800000;
      local_10 = 0x3f800000;
      FInterpCurve<FVector>::AddPoint(lVar3 + 0x38,0,&local_18);
      local_18 = 0;
      local_10 = 0;
      FInterpCurve<FVector>::AddPoint(lVar3 + 0x38,0x3f800000,&local_18);
      *(longlong *)(param_1 + 0x88) = lVar3;
    }
  }
  return;
}



// FUNCTION 142647b30 FUN_142647b30 body=198 status=ok
// SIG undefined FUN_142647b30(void)

void FUN_142647b30(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x88);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStrength",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0xb8) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x50);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRange",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x43fa0000;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
  }
  return;
}



// FUNCTION 142647c00 FUN_142647c00 body=195 status=ok
// SIG undefined FUN_142647c00(void)

void FUN_142647c00(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x40);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRange",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x43fa0000;
      *(longlong *)(param_1 + 0x70) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x80);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStrength",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x447a0000;
      *(longlong *)(param_1 + 0xb0) = lVar3;
    }
  }
  return;
}



// FUNCTION 142647cd0 FUN_142647cd0 body=275 status=ok
// SIG undefined FUN_142647cd0(void)

void FUN_142647cd0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionPosition",1);
      uVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x88);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRange",1);
      lVar4 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar4 + 0x38) = 0x43fa0000;
      *(longlong *)(param_1 + 0xb8) = lVar4;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0xc0);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStrength",1);
      lVar4 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar4 + 0x38) = 0x447a0000;
      *(longlong *)(param_1 + 0xf0) = lVar4;
    }
  }
  return;
}



// FUNCTION 142647df0 FUN_142647df0 body=110 status=ok
// SIG undefined FUN_142647df0(void)

void FUN_142647df0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x50);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStrength",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
  }
  return;
}



// FUNCTION 142647e60 FUN_142647e60 body=212 status=ok
// SIG undefined FUN_142647e60(void)

void FUN_142647e60(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint local_res8;
  undefined4 uStackX_c;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    uVar6 = 0;
    uVar5 = uVar6;
    if (cVar1 == '\0') {
      puVar3 = (undefined8 *)FName::FName(&local_res8,L"DistributionTraceDirection",1);
      lVar4 = NewObject<UDistributionVectorConstant>(param_1,*puVar3,0,0,0,0);
      *(undefined8 *)(lVar4 + 0x38) = 0x3f800000;
      *(undefined4 *)(lVar4 + 0x40) = 0;
      *(longlong *)(param_1 + 0x80) = lVar4;
    }
    for (; (-1 < (int)uVar5 && ((int)uVar5 < *(int *)(param_1 + 0x98))); uVar5 = uVar5 + 1) {
      local_res8 = uVar6;
      uVar2 = UEngineTypes::ConvertToCollisionChannel
                        (*(undefined1 *)((longlong)(int)uVar5 + *(longlong *)(param_1 + 0x90)));
      uVar6 = uVar6 | 1 << (uVar2 & 0x1f);
    }
    *(ulonglong *)(param_1 + 0xa4) = CONCAT44(uStackX_c,uVar6) & 0xffffff00ffffffff;
  }
  return;
}



// FUNCTION 142647f40 FUN_142647f40 body=107 status=ok
// SIG undefined FUN_142647f40(void)

void FUN_142647f40(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x38);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionCameraOffset",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x42c80000;
      *(longlong *)(param_1 + 0x68) = lVar3;
    }
  }
  return;
}



// FUNCTION 142647fb0 FUN_142647fb0 body=42 status=ok
// SIG undefined FUN_142647fb0(void)

void FUN_142647fb0(longlong param_1)

{
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_142647220(param_1);
    return;
  }
  return;
}


