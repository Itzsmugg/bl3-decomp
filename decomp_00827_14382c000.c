// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14382c000 FUN_14382c000 body=234 status=ok
// SIG undefined FUN_14382c000(void)

void FUN_14382c000(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],4,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],4,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],4,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,4,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 14382c0f0 FUN_14382c0f0 body=190 status=ok
// SIG undefined FUN_14382c0f0(void)

void FUN_14382c0f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x30,*(uint *)(param_1 + 0x44) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),4,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),4,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c1b0 FUN_14382c1b0 body=125 status=ok
// SIG undefined FUN_14382c1b0(void)

void FUN_14382c1b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),0x90,*(uint *)(param_1 + 0x54) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c230 FUN_14382c230 body=125 status=ok
// SIG undefined FUN_14382c230(void)

void FUN_14382c230(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),0x50,*(uint *)(param_1 + 0x54) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c2b0 FUN_14382c2b0 body=155 status=ok
// SIG undefined FUN_14382c2b0(void)

void FUN_14382c2b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14375d9f0(param_1 + 8);
  thunk_FUN_143734820(param_1 + 6);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],0xc,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,4,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 14382c350 FUN_14382c350 body=444 status=ok
// SIG undefined FUN_14382c350(void)

void FUN_14382c350(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0xc0) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0xb8) + 0x3c + lVar5 * 0x40);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -0x10;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xc4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xb8),0x40,*(uint *)(param_1 + 0xc4) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0xb0) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0xc + lVar5 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xb4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xa8),0x10,*(uint *)(param_1 + 0xb4) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14370c150();
    return;
  }
  return;
}



// FUNCTION 14382c510 FUN_14382c510 body=137 status=ok
// SIG undefined FUN_14382c510(void)

void FUN_14382c510(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),4,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c5a0 FUN_14382c5a0 body=220 status=ok
// SIG undefined FUN_14382c5a0(void)

void FUN_14382c5a0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),4,*(uint *)(param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined ***)(param_1 + 0x18) = hkGeometry::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),0x10,*(uint *)(param_1 + 0x4c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),0x10,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_14370c000(param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c680 FUN_14382c680 body=167 status=ok
// SIG undefined FUN_14382c680(void)

void FUN_14382c680(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_1 + 0x40) = hkGeometry::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x74)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x68),0x10,*(uint *)(param_1 + 0x74) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (-1 < (int)*(uint *)(param_1 + 100)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x58),0x10,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  FUN_14370c000(param_1 + 0x40);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c730 FUN_14382c730 body=214 status=ok
// SIG undefined FUN_14382c730(void)

void FUN_14382c730(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x18) + 0xc + lVar5 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),0x20,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c810 FUN_14382c810 body=223 status=ok
// SIG undefined FUN_14382c810(void)

void FUN_14382c810(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x18) + 0xc + lVar5 * 0x20);
    do {
      thunk_FUN_143734820(puVar4 + 1);
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -8;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x20,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c8f0 FUN_14382c8f0 body=104 status=ok
// SIG undefined FUN_14382c8f0(void)

void FUN_14382c8f0(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    FUN_143718950(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x40);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382c960 FUN_14382c960 body=220 status=ok
// SIG undefined FUN_14382c960(void)

void FUN_14382c960(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_1 + 0x28) = hkGeometry::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),0x10,*(uint *)(param_1 + 0x5c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),0x10,*(uint *)(param_1 + 0x4c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_14370c000(param_1 + 0x28);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14382ca40 FUN_14382ca40 body=349 status=ok
// SIG undefined FUN_14382ca40(void)

void FUN_14382ca40(longlong param_1)

{
  FUN_14370e7c0(param_1 + 0xf8);
  FUN_14370e7c0(param_1 + 0xf0);
  FUN_14370e7c0(param_1 + 0xe8);
  FUN_14370e7c0(param_1 + 0xe0);
  FUN_14370e7c0(param_1 + 0xd8);
  FUN_14370e7c0(param_1 + 0xd0);
  FUN_14370e7c0(param_1 + 200);
  FUN_14370e7c0(param_1 + 0xc0);
  FUN_14370e7c0(param_1 + 0xb8);
  FUN_14370e7c0(param_1 + 0xb0);
  FUN_14370e7c0(param_1 + 0xa8);
  FUN_14370e7c0(param_1 + 0xa0);
  FUN_14370e7c0(param_1 + 0x98);
  FUN_14370e7c0(param_1 + 0x90);
  FUN_14370e7c0(param_1 + 0x88);
  FUN_14370e7c0(param_1 + 0x80);
  FUN_14370e7c0(param_1 + 0x78);
  FUN_14370e7c0(param_1 + 0x70);
  FUN_14370e7c0(param_1 + 0x68);
  FUN_14370e7c0(param_1 + 0x60);
  FUN_14370e7c0(param_1 + 0x58);
  FUN_14370e7c0(param_1 + 0x50);
  FUN_14370e7c0(param_1 + 0x48);
  FUN_14370e7c0(param_1 + 0x40);
  FUN_14370e7c0(param_1 + 0x38);
  FUN_14370e7c0(param_1 + 0x30);
  FUN_14370e7c0(param_1 + 0x28);
  FUN_14370e7c0(param_1 + 0x20);
  FUN_14370e7c0(param_1 + 0x18);
  FUN_14370e7c0(param_1 + 0x10);
  FUN_14370e7c0(param_1 + 8);
  FUN_14370e7c0(param_1);
  return;
}



// FUNCTION 14382cba0 FUN_14382cba0 body=281 status=ok
// SIG undefined FUN_14382cba0(void)

longlong * FUN_14382cba0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar4,param_1,iVar2,0x38);
  }
  iVar5 = ((int)param_1[1] - iVar2) + -1;
  if (-1 < iVar5) {
    lVar7 = (longlong)iVar2 * 0x38 + *param_1 + 8 + (longlong)iVar5 * 0x38;
    do {
      FUN_14382bf40(lVar7);
      lVar7 = lVar7 + -0x38;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = iVar2;
  if ((int)param_1[1] < iVar2) {
    iVar5 = (int)param_1[1];
  }
  FUN_143828310(*param_1,lVar3,iVar5);
  lVar7 = *param_1;
  lVar8 = (longlong)(iVar2 - iVar5);
  if (0 < iVar2 - iVar5) {
    puVar6 = (undefined4 *)((longlong)iVar5 * 0x38 + lVar3);
    do {
      puVar1 = (undefined4 *)((lVar7 - lVar3) + (longlong)puVar6);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar6;
        FUN_143829a10((lVar7 - lVar3) + 8 + (longlong)puVar6,puVar6 + 2);
      }
      puVar6 = puVar6 + 0xe;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14382ccc0 FUN_14382ccc0 body=254 status=ok
// SIG undefined FUN_14382ccc0(void)

undefined8 * FUN_14382ccc0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1,iVar1,0x14);
  }
  FUN_1438283a0(*param_1,uVar2,iVar1);
  *(int *)(param_1 + 1) = iVar1;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 2,iVar1,4);
  }
  FUN_142f87c00(param_1[2],uVar2,iVar1);
  *(int *)(param_1 + 3) = iVar1;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 4,iVar1,4);
  }
  FUN_142f87c00(param_1[4],uVar2,iVar1);
  *(int *)(param_1 + 5) = iVar1;
  return param_1;
}



// FUNCTION 14382cdc0 FUN_14382cdc0 body=550 status=ok
// SIG undefined FUN_14382cdc0(void)

longlong * FUN_14382cdc0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  iVar3 = (int)param_2[1];
  lVar4 = *param_2;
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar3) {
    FUN_14370c310(uVar8,param_1,iVar3,0x50);
  }
  iVar11 = iVar3;
  if ((int)param_1[1] < iVar3) {
    iVar11 = (int)param_1[1];
  }
  FUN_1438284d0(*param_1,lVar4,iVar11);
  puVar9 = (undefined8 *)(*param_1 + (longlong)iVar11 * 0x50);
  lVar10 = (longlong)(iVar3 - iVar11);
  if (0 < iVar3 - iVar11) {
    lVar4 = ((longlong)iVar11 * 0x50 - (longlong)puVar9) + lVar4;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        uVar8 = ((undefined8 *)(lVar4 + (longlong)puVar9))[1];
        *puVar9 = *(undefined8 *)(lVar4 + (longlong)puVar9);
        puVar9[1] = uVar8;
        puVar1 = (undefined8 *)(lVar4 + 0x10 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[2] = *puVar1;
        puVar9[3] = uVar8;
        puVar1 = (undefined8 *)(lVar4 + 0x20 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[4] = *puVar1;
        puVar9[5] = uVar8;
        puVar1 = (undefined8 *)(lVar4 + 0x30 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[6] = *puVar1;
        puVar9[7] = uVar8;
        puVar2 = (undefined4 *)(lVar4 + 0x40 + (longlong)puVar9);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *(undefined4 *)(puVar9 + 8) = *puVar2;
        *(undefined4 *)((longlong)puVar9 + 0x44) = uVar5;
        *(undefined4 *)(puVar9 + 9) = uVar6;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar7;
      }
      puVar9 = puVar9 + 10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 1) = iVar3;
  iVar3 = (int)param_2[3];
  lVar4 = param_2[2];
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff) < iVar3) {
    FUN_14370c310(uVar8,param_1 + 2,iVar3,0x50);
  }
  iVar11 = iVar3;
  if ((int)param_1[3] < iVar3) {
    iVar11 = (int)param_1[3];
  }
  FUN_1438284d0(param_1[2],lVar4,iVar11);
  puVar9 = (undefined8 *)(param_1[2] + (longlong)iVar11 * 0x50);
  lVar10 = (longlong)(iVar3 - iVar11);
  if (0 < iVar3 - iVar11) {
    lVar4 = ((longlong)iVar11 * 0x50 - (longlong)puVar9) + lVar4;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        uVar8 = ((undefined8 *)(lVar4 + (longlong)puVar9))[1];
        *puVar9 = *(undefined8 *)(lVar4 + (longlong)puVar9);
        puVar9[1] = uVar8;
        puVar1 = (undefined8 *)(lVar4 + 0x10 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[2] = *puVar1;
        puVar9[3] = uVar8;
        puVar1 = (undefined8 *)(lVar4 + 0x20 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[4] = *puVar1;
        puVar9[5] = uVar8;
        puVar1 = (undefined8 *)(lVar4 + 0x30 + (longlong)puVar9);
        uVar8 = puVar1[1];
        puVar9[6] = *puVar1;
        puVar9[7] = uVar8;
        puVar2 = (undefined4 *)(lVar4 + 0x40 + (longlong)puVar9);
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *(undefined4 *)(puVar9 + 8) = *puVar2;
        *(undefined4 *)((longlong)puVar9 + 0x44) = uVar5;
        *(undefined4 *)(puVar9 + 9) = uVar6;
        *(undefined4 *)((longlong)puVar9 + 0x4c) = uVar7;
      }
      puVar9 = puVar9 + 10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 3) = iVar3;
  FUN_1437e58f0(param_1 + 4,param_2 + 4);
  FUN_1437e58f0(param_1 + 8,param_2 + 8);
  iVar3 = (int)param_2[0xd];
  lVar4 = param_2[0xc];
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff) < iVar3) {
    FUN_14370c310(uVar8,param_1 + 0xc,iVar3,8);
  }
  iVar11 = iVar3;
  if ((int)param_1[0xd] < iVar3) {
    iVar11 = (int)param_1[0xd];
  }
  FUN_143738e40(param_1[0xc],lVar4,iVar11);
  puVar9 = (undefined8 *)(param_1[0xc] + (longlong)iVar11 * 8);
  lVar10 = (longlong)(iVar3 - iVar11);
  if (0 < iVar3 - iVar11) {
    lVar12 = (longlong)iVar11 * 8 - (longlong)puVar9;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = *(undefined8 *)(lVar12 + lVar4 + (longlong)puVar9);
      }
      puVar9 = puVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 0xd) = iVar3;
  return param_1;
}



// FUNCTION 14382cff0 FUN_14382cff0 body=1568 status=ok
// SIG undefined FUN_14382cff0(void)

longlong FUN_14382cff0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1437182e0(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  iVar1 = *(int *)(param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x7c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x70,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x70),uVar2,iVar1);
  *(int *)(param_1 + 0x78) = iVar1;
  iVar1 = *(int *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x8c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x80,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x80),uVar2,iVar1);
  *(int *)(param_1 + 0x88) = iVar1;
  iVar1 = *(int *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x90,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x90),uVar2,iVar1);
  *(int *)(param_1 + 0x98) = iVar1;
  iVar1 = *(int *)(param_2 + 0xa8);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xac) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0xa0,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0xa0),uVar2,iVar1);
  *(int *)(param_1 + 0xa8) = iVar1;
  iVar1 = *(int *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0xb0,iVar1,0x10);
  }
  FUN_1438283f0(*(undefined8 *)(param_1 + 0xb0),uVar2,iVar1);
  *(int *)(param_1 + 0xb8) = iVar1;
  iVar1 = *(int *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xcc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0xc0,iVar1,0x14);
  }
  FUN_1438283a0(*(undefined8 *)(param_1 + 0xc0),uVar2,iVar1);
  *(int *)(param_1 + 200) = iVar1;
  iVar1 = *(int *)(param_2 + 0xd8);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xdc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0xd0,iVar1,0x10);
  }
  FUN_1438283f0(*(undefined8 *)(param_1 + 0xd0),uVar2,iVar1);
  *(int *)(param_1 + 0xd8) = iVar1;
  iVar1 = *(int *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0xe0,iVar1,0x14);
  }
  FUN_1438283a0(*(undefined8 *)(param_1 + 0xe0),uVar2,iVar1);
  *(int *)(param_1 + 0xe8) = iVar1;
  iVar1 = *(int *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xfc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0xf0,iVar1,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_1 + 0xf0),uVar2,iVar1);
  *(int *)(param_1 + 0xf8) = iVar1;
  iVar1 = *(int *)(param_2 + 0x108);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x10c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x100,iVar1,1);
  }
  FUN_143745160(*(undefined8 *)(param_1 + 0x100),uVar2,iVar1);
  *(int *)(param_1 + 0x108) = iVar1;
  iVar1 = *(int *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x11c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x110,iVar1,2);
  }
  FUN_143795730(*(undefined8 *)(param_1 + 0x110),uVar2,iVar1);
  *(int *)(param_1 + 0x118) = iVar1;
  iVar1 = *(int *)(param_2 + 0x128);
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 300) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x120,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x120),uVar2,iVar1);
  *(int *)(param_1 + 0x128) = iVar1;
  iVar1 = *(int *)(param_2 + 0x138);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x130,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x130),uVar2,iVar1);
  *(int *)(param_1 + 0x138) = iVar1;
  iVar1 = *(int *)(param_2 + 0x148);
  uVar2 = *(undefined8 *)(param_2 + 0x140);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x140,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x140),uVar2,iVar1);
  *(int *)(param_1 + 0x148) = iVar1;
  iVar1 = *(int *)(param_2 + 0x158);
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x15c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x150,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x150),uVar2,iVar1);
  *(int *)(param_1 + 0x158) = iVar1;
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  iVar1 = *(int *)(param_2 + 0x170);
  uVar2 = *(undefined8 *)(param_2 + 0x168);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x174) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x168,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x168),uVar2,iVar1);
  *(int *)(param_1 + 0x170) = iVar1;
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  FUN_14382cba0(param_1 + 0x188,param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  return param_1;
}



// FUNCTION 14382d610 FUN_14382d610 body=1117 status=ok
// SIG undefined FUN_14382d610(void)

longlong FUN_14382d610(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  
  FUN_1437182e0(param_1 + 8,param_2 + 8);
  FUN_14382cdc0(param_1 + 0x20,param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x98);
  plVar7 = (longlong *)(param_1 + 0x90);
  lVar15 = *(longlong *)(param_2 + 0x90);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x9c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar6,plVar7,iVar2,0xd0);
  }
  iVar10 = (*(int *)(param_1 + 0x98) - iVar2) + -1;
  if (-1 < iVar10) {
    lVar14 = (longlong)iVar10 * 0xd0 + (longlong)iVar2 * 0xd0 + *plVar7;
    do {
      FUN_14382c350(lVar14);
      lVar14 = lVar14 + -0xd0;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  iVar10 = iVar2;
  if (*(int *)(param_1 + 0x98) < iVar2) {
    iVar10 = *(int *)(param_1 + 0x98);
  }
  FUN_1438285d0(*plVar7,lVar15,iVar10);
  lVar14 = *plVar7 + (longlong)iVar10 * 0xd0;
  if (0 < iVar2 - iVar10) {
    lVar8 = (longlong)iVar10 * 0xd0 - lVar14;
    uVar11 = (ulonglong)(uint)(iVar2 - iVar10);
    do {
      if (lVar14 != 0) {
        FUN_14382a000(lVar14,lVar15 + lVar8 + lVar14);
      }
      lVar14 = lVar14 + 0xd0;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *(int *)(param_1 + 0x98) = iVar2;
  plVar7 = (longlong *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_2 + 0xa8);
  lVar15 = *(longlong *)(param_2 + 0xa0);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xac) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar6,plVar7,iVar2,0x50);
  }
  iVar10 = (*(int *)(param_1 + 0xa8) - iVar2) + -1;
  lVar14 = (longlong)iVar10;
  if (-1 < iVar10) {
    plVar12 = (longlong *)(lVar14 * 0x50 + (longlong)iVar2 * 0x50 + *plVar7);
    do {
      if (*plVar12 != 0) {
        FUN_14370c150();
      }
      plVar12 = plVar12 + -10;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  iVar10 = iVar2;
  if (*(int *)(param_1 + 0xa8) < iVar2) {
    iVar10 = *(int *)(param_1 + 0xa8);
  }
  FUN_143828440(*plVar7,lVar15,iVar10);
  lVar14 = (longlong)(iVar2 - iVar10);
  if (0 < iVar2 - iVar10) {
    puVar13 = (undefined8 *)(lVar15 + 0x10 + (longlong)iVar10 * 0x50);
    lVar15 = *plVar7 - lVar15;
    do {
      plVar7 = (longlong *)(lVar15 + -0x10 + (longlong)puVar13);
      if (plVar7 != (longlong *)0x0) {
        lVar8 = puVar13[-2];
        *plVar7 = lVar8;
        if (lVar8 != 0) {
          FUN_14370c030();
        }
        uVar6 = puVar13[1];
        *(undefined8 *)(lVar15 + (longlong)puVar13) = *puVar13;
        ((undefined8 *)(lVar15 + (longlong)puVar13))[1] = uVar6;
        uVar6 = puVar13[3];
        puVar1 = (undefined8 *)(lVar15 + 0x10 + (longlong)puVar13);
        *puVar1 = puVar13[2];
        puVar1[1] = uVar6;
        uVar6 = puVar13[5];
        puVar1 = (undefined8 *)(lVar15 + 0x20 + (longlong)puVar13);
        *puVar1 = puVar13[4];
        puVar1[1] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar13 + 0x34);
        uVar4 = *(undefined4 *)(puVar13 + 7);
        uVar5 = *(undefined4 *)((longlong)puVar13 + 0x3c);
        puVar9 = (undefined4 *)(lVar15 + 0x30 + (longlong)puVar13);
        *puVar9 = *(undefined4 *)(puVar13 + 6);
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
      }
      puVar13 = puVar13 + 10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *(int *)(param_1 + 0xa8) = iVar2;
  plVar7 = (longlong *)(param_1 + 0xb0);
  iVar2 = *(int *)(param_2 + 0xb8);
  lVar15 = *(longlong *)(param_2 + 0xb0);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar6,plVar7,iVar2,0x60);
  }
  iVar10 = (*(int *)(param_1 + 0xb8) - iVar2) + -1;
  lVar14 = (longlong)iVar10;
  if (-1 < iVar10) {
    plVar12 = (longlong *)((longlong)iVar2 * 0x60 + *plVar7 + 0x50 + lVar14 * 0x60);
    do {
      if (*plVar12 != 0) {
        FUN_14370c150();
      }
      plVar12 = plVar12 + -0xc;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  iVar10 = iVar2;
  if (*(int *)(param_1 + 0xb8) < iVar2) {
    iVar10 = *(int *)(param_1 + 0xb8);
  }
  FUN_143828520(*plVar7,lVar15,iVar10);
  lVar14 = (longlong)(iVar2 - iVar10);
  if (0 < iVar2 - iVar10) {
    plVar12 = (longlong *)(lVar15 + 0x50 + (longlong)iVar10 * 0x60);
    lVar15 = *plVar7 - lVar15;
    do {
      puVar9 = (undefined4 *)(lVar15 + -0x50 + (longlong)plVar12);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = (int)plVar12[-10];
        *(undefined4 *)((longlong)plVar12 + lVar15 + -0x4c) =
             *(undefined4 *)((longlong)plVar12 + -0x4c);
        *(char *)((longlong)plVar12 + lVar15 + -0x48) = (char)plVar12[-9];
        lVar8 = plVar12[-7];
        plVar7 = (longlong *)((longlong)plVar12 + lVar15 + -0x40);
        *plVar7 = plVar12[-8];
        plVar7[1] = lVar8;
        uVar3 = *(undefined4 *)((longlong)plVar12 + -0x2c);
        lVar8 = plVar12[-5];
        uVar4 = *(undefined4 *)((longlong)plVar12 + -0x24);
        puVar9 = (undefined4 *)((longlong)plVar12 + lVar15 + -0x30);
        *puVar9 = (int)plVar12[-6];
        puVar9[1] = uVar3;
        puVar9[2] = (int)lVar8;
        puVar9[3] = uVar4;
        lVar8 = plVar12[-3];
        plVar7 = (longlong *)((longlong)plVar12 + lVar15 + -0x20);
        *plVar7 = plVar12[-4];
        plVar7[1] = lVar8;
        uVar3 = *(undefined4 *)((longlong)plVar12 + -0xc);
        lVar8 = plVar12[-1];
        uVar4 = *(undefined4 *)((longlong)plVar12 + -4);
        puVar9 = (undefined4 *)((longlong)plVar12 + lVar15 + -0x10);
        *puVar9 = (int)plVar12[-2];
        puVar9[1] = uVar3;
        puVar9[2] = (int)lVar8;
        puVar9[3] = uVar4;
        lVar8 = *plVar12;
        *(longlong *)(lVar15 + (longlong)plVar12) = lVar8;
        if (lVar8 != 0) {
          FUN_14370c030();
        }
      }
      plVar12 = plVar12 + 0xc;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *(int *)(param_1 + 0xb8) = iVar2;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)(param_2 + 0xc4);
  *(undefined1 *)(param_1 + 0xc5) = *(undefined1 *)(param_2 + 0xc5);
  FUN_143802ce0(param_1 + 200,param_2 + 200);
  FUN_143802ce0(param_1 + 0xe0,param_2 + 0xe0);
  FUN_143802ce0(param_1 + 0xf8,param_2 + 0xf8);
  FUN_143802ce0(param_1 + 0x110,param_2 + 0x110);
  FUN_14382da70(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  if (*(longlong *)(param_2 + 0x1e0) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 14382da70 FUN_14382da70 body=141 status=ok
// SIG undefined FUN_14382da70(void)

undefined8 * FUN_14382da70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  puVar2 = param_1 + 2;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar3 = (longlong)param_2 - (longlong)param_1;
  lVar4 = 4;
  do {
    *(undefined4 *)puVar2 = *(undefined4 *)(lVar3 + (longlong)puVar2);
    *(undefined4 *)((longlong)puVar2 + 4) = *(undefined4 *)(lVar3 + 4 + (longlong)puVar2);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar3 + 8 + (longlong)puVar2);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(lVar3 + 0xc + (longlong)puVar2);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(lVar3 + 0x10 + (longlong)puVar2);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(lVar3 + 0x14 + (longlong)puVar2);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar3 + 0x18 + (longlong)puVar2);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar2 + lVar3 + 0x1c);
    puVar2 = puVar2 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x94) = *(undefined1 *)((longlong)param_2 + 0x94);
  return param_1;
}



// FUNCTION 14382db00 FUN_14382db00 body=139 status=ok
// SIG undefined FUN_14382db00(void)

longlong FUN_14382db00(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14387e1c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x60;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
    }
  }
  return param_1;
}



// FUNCTION 14382db90 FUN_14382db90 body=139 status=ok
// SIG undefined FUN_14382db90(void)

longlong FUN_14382db90(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 14382dc20 FUN_14382dc20 body=139 status=ok
// SIG undefined FUN_14382dc20(void)

longlong FUN_14382dc20(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438612b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14382dcb0 FUN_14382dcb0 body=139 status=ok
// SIG undefined FUN_14382dcb0(void)

longlong FUN_14382dcb0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14387cf70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xd0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
    }
  }
  return param_1;
}



// FUNCTION 14382dd40 FUN_14382dd40 body=139 status=ok
// SIG undefined FUN_14382dd40(void)

longlong FUN_14382dd40(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143861280();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14382ddd0 FUN_14382ddd0 body=139 status=ok
// SIG undefined FUN_14382ddd0(void)

longlong FUN_14382ddd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14387b960();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x30;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 14382de60 FUN_14382de60 body=139 status=ok
// SIG undefined FUN_14382de60(void)

longlong FUN_14382de60(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_142f8bde0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xa0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
    }
  }
  return param_1;
}



// FUNCTION 14382def0 FUN_14382def0 body=139 status=ok
// SIG undefined FUN_14382def0(void)

longlong FUN_14382def0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c8f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x50;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 14382df80 FUN_14382df80 body=203 status=ok
// SIG undefined FUN_14382df80(void)

longlong FUN_14382df80(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x30;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 14382e050 FUN_14382e050 body=139 status=ok
// SIG undefined FUN_14382e050(void)

longlong FUN_14382e050(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14387c3e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x80;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 14382e0e0 FUN_14382e0e0 body=213 status=ok
// SIG undefined FUN_14382e0e0(void)

longlong FUN_14382e0e0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x30,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x30;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
    }
  }
  return param_1;
}



// FUNCTION 14382e1c0 FUN_14382e1c0 body=139 status=ok
// SIG undefined FUN_14382e1c0(void)

longlong FUN_14382e1c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438769d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x60;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
    }
  }
  return param_1;
}



// FUNCTION 14382e250 FUN_14382e250 body=139 status=ok
// SIG undefined FUN_14382e250(void)

longlong FUN_14382e250(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14383da70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xf0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf0);
    }
  }
  return param_1;
}



// FUNCTION 14382e2e0 FUN_14382e2e0 body=212 status=ok
// SIG undefined FUN_14382e2e0(void)

longlong FUN_14382e2e0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      sVar3 = 0x38;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar3 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14382e3c0 FUN_14382e3c0 body=139 status=ok
// SIG undefined FUN_14382e3c0(void)

longlong FUN_14382e3c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143887b50();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x70;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 14382e450 FUN_14382e450 body=139 status=ok
// SIG undefined FUN_14382e450(void)

longlong FUN_14382e450(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438464a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x520;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x520);
    }
  }
  return param_1;
}



// FUNCTION 14382e4e0 FUN_14382e4e0 body=205 status=ok
// SIG undefined FUN_14382e4e0(void)

undefined8 FUN_14382e4e0(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0x28);
  }
  lVar7 = *param_1 + (longlong)param_2 * 0x28;
  FUN_143732890(lVar7 + 0x28,lVar7,(longlong)((int)lVar3 - param_2) * 0x28);
  puVar6 = (undefined4 *)(*param_1 + (longlong)param_2 * 0x28);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_3;
    FUN_143828ee0(puVar6 + 2,param_3 + 2);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382ec30(param_1);
  return 1;
}



// FUNCTION 14382e5b0 FUN_14382e5b0 body=195 status=ok
// SIG undefined FUN_14382e5b0(void)

undefined8 FUN_14382e5b0(longlong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = FUN_143703a50();
  lVar5 = param_1[1];
  uVar3 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar5 + 1;
  if (((int)uVar3 < iVar1) && ((int)uVar3 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar3 * 2)) {
      iVar2 = uVar3 * 2;
    }
    FUN_14370c310(uVar4,param_1,iVar2,0x18);
  }
  lVar6 = *param_1 + (longlong)param_2 * 0x18;
  FUN_143732890(lVar6 + 0x18,lVar6,(longlong)((int)lVar5 - param_2) * 0x18);
  lVar5 = *param_1 + (longlong)param_2 * 0x18;
  if (lVar5 != 0) {
    FUN_143829170(lVar5,param_3);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382ece0(param_1);
  return 1;
}



// FUNCTION 14382e680 FUN_14382e680 body=198 status=ok
// SIG undefined FUN_14382e680(void)

undefined8 FUN_14382e680(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0x10);
  }
  lVar6 = *param_1 + (longlong)param_2 * 0x10;
  FUN_143732890(lVar6 + 0x10,lVar6,(longlong)((int)lVar3 - param_2) << 4);
  puVar7 = (undefined4 *)(*param_1 + (longlong)param_2 * 0x10);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *param_3;
    lVar3 = *(longlong *)(param_3 + 2);
    *(longlong *)(puVar7 + 2) = lVar3;
    if (lVar3 != 0) {
      FUN_14370c030();
    }
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382ed90(param_1);
  return 1;
}



// FUNCTION 14382e750 FUN_14382e750 body=205 status=ok
// SIG undefined FUN_14382e750(void)

undefined8 FUN_14382e750(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0x28);
  }
  lVar7 = *param_1 + (longlong)param_2 * 0x28;
  FUN_143732890(lVar7 + 0x28,lVar7,(longlong)((int)lVar3 - param_2) * 0x28);
  puVar6 = (undefined4 *)(*param_1 + (longlong)param_2 * 0x28);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_3;
    FUN_1438292a0(puVar6 + 2,param_3 + 2);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382ec30(param_1);
  return 1;
}



// FUNCTION 14382e820 FUN_14382e820 body=193 status=ok
// SIG undefined FUN_14382e820(void)

undefined8 FUN_14382e820(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0x38);
  }
  lVar7 = *param_1 + (longlong)param_2 * 0x38;
  FUN_143732890(lVar7 + 0x38,lVar7,(longlong)((int)lVar3 - param_2) * 0x38);
  puVar6 = (undefined4 *)(*param_1 + (longlong)param_2 * 0x38);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_3;
    FUN_143829a10(puVar6 + 2,param_3 + 2);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382ee40(param_1);
  return 1;
}



// FUNCTION 14382e8f0 FUN_14382e8f0 body=219 status=ok
// SIG undefined FUN_14382e8f0(void)

undefined8 FUN_14382e8f0(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0x68);
  }
  lVar6 = *param_1 + (longlong)param_2 * 0x68;
  FUN_143732890(lVar6 + 0x68,lVar6,(longlong)((int)lVar3 - param_2) * 0x68);
  puVar7 = (undefined4 *)(*param_1 + (longlong)param_2 * 0x68);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *param_3;
    FUN_1438290b0(puVar7 + 2,param_3 + 2);
    FUN_143828d40(puVar7 + 10,param_3 + 10);
    FUN_143828ee0(puVar7 + 0x12,param_3 + 0x12);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382eef0(param_1);
  return 1;
}



// FUNCTION 14382e9d0 FUN_14382e9d0 body=208 status=ok
// SIG undefined FUN_14382e9d0(void)

undefined8 FUN_14382e9d0(longlong *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0x30);
  }
  lVar7 = *param_1 + (longlong)param_2 * 0x30;
  FUN_143732890(lVar7 + 0x30,lVar7,(longlong)((int)lVar3 - param_2) * 0x30);
  puVar6 = (undefined4 *)(*param_1 + (longlong)param_2 * 0x30);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_3;
    puVar6[2] = param_3[2];
    FUN_143828fc0(puVar6 + 4,param_3 + 4);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382efa0(param_1);
  return 1;
}



// FUNCTION 14382eaa0 FUN_14382eaa0 body=203 status=ok
// SIG undefined FUN_14382eaa0(void)

undefined8 FUN_14382eaa0(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,0xc);
  }
  lVar7 = *param_1 + (longlong)param_2 * 0xc;
  FUN_143732890(lVar7 + 0xc,lVar7,(longlong)((int)lVar3 - param_2) * 0xc);
  puVar6 = (undefined8 *)(*param_1 + (longlong)param_2 * 0xc);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_3;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
  }
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382f060(param_1);
  return 1;
}



// FUNCTION 14382eb70 FUN_14382eb70 body=181 status=ok
// SIG undefined FUN_14382eb70(void)

undefined8 FUN_14382eb70(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = FUN_143703a50();
  lVar3 = param_1[1];
  uVar4 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar1 = (int)lVar3 + 1;
  if (((int)uVar4 < iVar1) && ((int)uVar4 < iVar1)) {
    iVar2 = iVar1;
    if (iVar1 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar5,param_1,iVar2,8);
  }
  lVar6 = *param_1 + (longlong)param_2 * 8;
  FUN_143732890(lVar6 + 8,lVar6,(longlong)((int)lVar3 - param_2) << 3);
  *(undefined8 *)(*param_1 + (longlong)param_2 * 8) = *param_3;
  *(int *)(param_1 + 1) = iVar1;
  FUN_143734820(param_1 + 2);
  FUN_14382f130(param_1);
  return 1;
}



// FUNCTION 14382ec30 FUN_14382ec30 body=167 status=ok
// SIG undefined FUN_14382ec30(void)

void FUN_14382ec30(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = param_1[2];
      uVar5 = *(int *)(lVar6 + *param_1) * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
              *(int *)(lVar6 + *param_1) * -0x4f000000;
      uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
      puVar2 = (uint *)(lVar1 + uVar3 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar3 * 8)) {
        do {
          uVar3 = ((longlong)puVar2 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar2 = (uint *)(lVar1 + uVar3 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar3 * 8));
      }
      puVar2[1] = uVar4;
      lVar6 = lVar6 + 0x28;
      uVar4 = uVar4 + 1;
      *puVar2 = uVar5;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382ece0 FUN_14382ece0 body=167 status=ok
// SIG undefined FUN_14382ece0(void)

void FUN_14382ece0(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = param_1[2];
      uVar5 = *(int *)(lVar6 + *param_1) * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
              *(int *)(lVar6 + *param_1) * -0x4f000000;
      uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
      puVar2 = (uint *)(lVar1 + uVar3 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar3 * 8)) {
        do {
          uVar3 = ((longlong)puVar2 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar2 = (uint *)(lVar1 + uVar3 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar3 * 8));
      }
      puVar2[1] = uVar4;
      lVar6 = lVar6 + 0x18;
      uVar4 = uVar4 + 1;
      *puVar2 = uVar5;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382ed90 FUN_14382ed90 body=167 status=ok
// SIG undefined FUN_14382ed90(void)

void FUN_14382ed90(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = param_1[2];
      uVar5 = *(int *)(lVar6 + *param_1) * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
              *(int *)(lVar6 + *param_1) * -0x4f000000;
      uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
      puVar2 = (uint *)(lVar1 + uVar3 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar3 * 8)) {
        do {
          uVar3 = ((longlong)puVar2 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar2 = (uint *)(lVar1 + uVar3 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar3 * 8));
      }
      puVar2[1] = uVar4;
      lVar6 = lVar6 + 0x10;
      uVar4 = uVar4 + 1;
      *puVar2 = uVar5;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382ee40 FUN_14382ee40 body=167 status=ok
// SIG undefined FUN_14382ee40(void)

void FUN_14382ee40(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = param_1[2];
      uVar5 = *(int *)(lVar6 + *param_1) * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
              *(int *)(lVar6 + *param_1) * -0x4f000000;
      uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
      puVar2 = (uint *)(lVar1 + uVar3 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar3 * 8)) {
        do {
          uVar3 = ((longlong)puVar2 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar2 = (uint *)(lVar1 + uVar3 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar3 * 8));
      }
      puVar2[1] = uVar4;
      lVar6 = lVar6 + 0x38;
      uVar4 = uVar4 + 1;
      *puVar2 = uVar5;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382eef0 FUN_14382eef0 body=167 status=ok
// SIG undefined FUN_14382eef0(void)

void FUN_14382eef0(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar1 = param_1[2];
      uVar5 = *(int *)(lVar6 + *param_1) * -0x61c8864f;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
              *(int *)(lVar6 + *param_1) * -0x4f000000;
      uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
      puVar2 = (uint *)(lVar1 + uVar3 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar3 * 8)) {
        do {
          uVar3 = ((longlong)puVar2 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar2 = (uint *)(lVar1 + uVar3 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar3 * 8));
      }
      puVar2[1] = uVar4;
      lVar6 = lVar6 + 0x68;
      uVar4 = uVar4 + 1;
      *puVar2 = uVar5;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382efa0 FUN_14382efa0 body=181 status=ok
// SIG undefined FUN_14382efa0(void)

void FUN_14382efa0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar5 = 0;
  if (0 < (int)param_1[1]) {
    do {
      uVar2 = oo2net::OodleNetwork1_HashBack3
                        (*(undefined4 *)(*param_1 + (longlong)(int)uVar5 * 0x30));
      lVar1 = param_1[2];
      uVar4 = (ulonglong)(*(uint *)(param_1 + 3) & uVar2);
      puVar3 = (uint *)(lVar1 + uVar4 * 8);
      if (-1 < *(int *)(lVar1 + 4 + uVar4 * 8)) {
        do {
          uVar4 = ((longlong)puVar3 - lVar1 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar3 = (uint *)(lVar1 + uVar4 * 8);
        } while (-1 < *(int *)(lVar1 + 4 + uVar4 * 8));
      }
      puVar3[1] = uVar5;
      uVar5 = uVar5 + 1;
      *puVar3 = uVar2;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382f060 FUN_14382f060 body=199 status=ok
// SIG undefined FUN_14382f060(void)

void FUN_14382f060(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar8 = 0;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar9 + *param_1);
      uVar6 = iVar1 * -0x61c8864f;
      iVar2 = *(int *)(lVar9 + 4 + *param_1);
      uVar7 = iVar2 * -0x61c8864f;
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar1 * -0x4f000000;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar2 * -0x4f000000;
      lVar3 = param_1[2];
      uVar6 = uVar7 + uVar6 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar6;
      uVar4 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
      puVar5 = (uint *)(lVar3 + uVar4 * 8);
      if (-1 < *(int *)(lVar3 + 4 + uVar4 * 8)) {
        do {
          uVar4 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar5 = (uint *)(lVar3 + uVar4 * 8);
        } while (-1 < *(int *)(lVar3 + 4 + uVar4 * 8));
      }
      puVar5[1] = uVar8;
      lVar9 = lVar9 + 0xc;
      uVar8 = uVar8 + 1;
      *puVar5 = uVar6;
    } while ((int)uVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382f130 FUN_14382f130 body=199 status=ok
// SIG undefined FUN_14382f130(void)

void FUN_14382f130(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  FUN_143734820(param_1 + 2);
  if ((int)param_1[3] * 2 < (int)param_1[1] * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar8 = 0;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    do {
      iVar1 = *(int *)(lVar9 + *param_1);
      uVar6 = iVar1 * -0x61c8864f;
      iVar2 = *(int *)(lVar9 + 4 + *param_1);
      uVar7 = iVar2 * -0x61c8864f;
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar1 * -0x4f000000;
      uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar2 * -0x4f000000;
      lVar3 = param_1[2];
      uVar6 = uVar7 + uVar6 * 0x40 + (uVar7 >> 2) + 0x9e3779b9 ^ uVar6;
      uVar4 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
      puVar5 = (uint *)(lVar3 + uVar4 * 8);
      if (-1 < *(int *)(lVar3 + 4 + uVar4 * 8)) {
        do {
          uVar4 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
          puVar5 = (uint *)(lVar3 + uVar4 * 8);
        } while (-1 < *(int *)(lVar3 + 4 + uVar4 * 8));
      }
      puVar5[1] = uVar8;
      lVar9 = lVar9 + 8;
      uVar8 = uVar8 + 1;
      *puVar5 = uVar6;
    } while ((int)uVar8 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 14382f200 FUN_14382f200 body=18 status=ok
// SIG undefined FUN_14382f200(void)

undefined8 * FUN_14382f200(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816160;
  return param_2;
}



// FUNCTION 14382f220 FUN_14382f220 body=18 status=ok
// SIG undefined FUN_14382f220(void)

undefined8 * FUN_14382f220(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468160a0;
  return param_2;
}



// FUNCTION 14382f240 FUN_14382f240 body=18 status=ok
// SIG undefined FUN_14382f240(void)

undefined8 * FUN_14382f240(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813cd0;
  return param_2;
}



// FUNCTION 14382f260 FUN_14382f260 body=18 status=ok
// SIG undefined FUN_14382f260(void)

undefined8 * FUN_14382f260(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468158d0;
  return param_2;
}



// FUNCTION 14382f280 FUN_14382f280 body=18 status=ok
// SIG undefined FUN_14382f280(void)

undefined8 * FUN_14382f280(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812210;
  return param_2;
}



// FUNCTION 14382f2a0 FUN_14382f2a0 body=18 status=ok
// SIG undefined FUN_14382f2a0(void)

undefined8 * FUN_14382f2a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146816670;
  return param_2;
}



// FUNCTION 14382f2c0 FUN_14382f2c0 body=18 status=ok
// SIG undefined FUN_14382f2c0(void)

undefined8 * FUN_14382f2c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146814f60;
  return param_2;
}



// FUNCTION 14382f2e0 FUN_14382f2e0 body=18 status=ok
// SIG undefined FUN_14382f2e0(void)

undefined8 * FUN_14382f2e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813280;
  return param_2;
}



// FUNCTION 14382f300 FUN_14382f300 body=18 status=ok
// SIG undefined FUN_14382f300(void)

undefined8 * FUN_14382f300(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146814040;
  return param_2;
}



// FUNCTION 14382f320 FUN_14382f320 body=18 status=ok
// SIG undefined FUN_14382f320(void)

undefined8 * FUN_14382f320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680f6a0;
  return param_2;
}



// FUNCTION 14382f340 FUN_14382f340 body=18 status=ok
// SIG undefined FUN_14382f340(void)

undefined8 * FUN_14382f340(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680f140;
  return param_2;
}



// FUNCTION 14382f360 FUN_14382f360 body=18 status=ok
// SIG undefined FUN_14382f360(void)

undefined8 * FUN_14382f360(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146811d80;
  return param_2;
}



// FUNCTION 14382f380 FUN_14382f380 body=18 status=ok
// SIG undefined FUN_14382f380(void)

undefined8 * FUN_14382f380(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680ef20;
  return param_2;
}



// FUNCTION 14382f3a0 FUN_14382f3a0 body=18 status=ok
// SIG undefined FUN_14382f3a0(void)

undefined8 * FUN_14382f3a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468139f0;
  return param_2;
}



// FUNCTION 14382f3c0 FUN_14382f3c0 body=18 status=ok
// SIG undefined FUN_14382f3c0(void)

undefined8 * FUN_14382f3c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468123b0;
  return param_2;
}



// FUNCTION 14382f3e0 FUN_14382f3e0 body=18 status=ok
// SIG undefined FUN_14382f3e0(void)

undefined8 * FUN_14382f3e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146814480;
  return param_2;
}



// FUNCTION 14382f400 FUN_14382f400 body=18 status=ok
// SIG undefined FUN_14382f400(void)

undefined8 * FUN_14382f400(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146815140;
  return param_2;
}



// FUNCTION 14382f420 FUN_14382f420 body=18 status=ok
// SIG undefined FUN_14382f420(void)

undefined8 * FUN_14382f420(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812810;
  return param_2;
}



// FUNCTION 14382f440 FUN_14382f440 body=18 status=ok
// SIG undefined FUN_14382f440(void)

undefined8 * FUN_14382f440(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468170f0;
  return param_2;
}



// FUNCTION 14382f460 FUN_14382f460 body=18 status=ok
// SIG undefined FUN_14382f460(void)

undefined8 * FUN_14382f460(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146814bb0;
  return param_2;
}



// FUNCTION 14382f480 FUN_14382f480 body=18 status=ok
// SIG undefined FUN_14382f480(void)

undefined8 * FUN_14382f480(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812eb0;
  return param_2;
}



// FUNCTION 14382f4a0 FUN_14382f4a0 body=18 status=ok
// SIG undefined FUN_14382f4a0(void)

undefined8 * FUN_14382f4a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812fe0;
  return param_2;
}



// FUNCTION 14382f4c0 FUN_14382f4c0 body=18 status=ok
// SIG undefined FUN_14382f4c0(void)

undefined8 * FUN_14382f4c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146811c40;
  return param_2;
}



// FUNCTION 14382f4e0 FUN_14382f4e0 body=18 status=ok
// SIG undefined FUN_14382f4e0(void)

undefined8 * FUN_14382f4e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468153c0;
  return param_2;
}



// FUNCTION 14382f500 FUN_14382f500 body=18 status=ok
// SIG undefined FUN_14382f500(void)

undefined8 * FUN_14382f500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468133a0;
  return param_2;
}



// FUNCTION 14382f520 FUN_14382f520 body=18 status=ok
// SIG undefined FUN_14382f520(void)

undefined8 * FUN_14382f520(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146810e80;
  return param_2;
}



// FUNCTION 14382f540 FUN_14382f540 body=18 status=ok
// SIG undefined FUN_14382f540(void)

undefined8 * FUN_14382f540(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468165b0;
  return param_2;
}



// FUNCTION 14382f560 FUN_14382f560 body=18 status=ok
// SIG undefined FUN_14382f560(void)

undefined8 * FUN_14382f560(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146811f30;
  return param_2;
}



// FUNCTION 14382f580 FUN_14382f580 body=18 status=ok
// SIG undefined FUN_14382f580(void)

undefined8 * FUN_14382f580(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680f3e0;
  return param_2;
}



// FUNCTION 14382f5a0 FUN_14382f5a0 body=103 status=ok
// SIG undefined FUN_14382f5a0(void)

undefined1 FUN_14382f5a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x48);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x58);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0x70);
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14382f610 FUN_14382f610 body=118 status=ok
// SIG undefined FUN_14382f610(void)

undefined1 FUN_14382f610(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x70);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x80);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x90);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0xa0);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0xb0);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0xc0);
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14382f690 FUN_14382f690 body=119 status=ok
// SIG undefined FUN_14382f690(void)

undefined1 FUN_14382f690(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x38);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x48);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x58);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0x68);
            if (cVar1 != '\0') {
              cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x80);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14382f710 FUN_14382f710 body=118 status=ok
// SIG undefined FUN_14382f710(void)

undefined1 FUN_14382f710(longlong param_1)

{
  char cVar1;
  
  cVar1 = FAudioDeviceManager::RemoveSoundBufferForResourceID(param_1 + 0x28);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x98);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0xa8);
      if (cVar1 != '\0') {
        cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0xb8);
        if (cVar1 != '\0') {
          cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0xd8);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0xf8);
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14382f790 FUN_14382f790 body=310 status=ok
// SIG undefined FUN_14382f790(void)

undefined1 FUN_14382f790(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x70);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x80);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x90);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0xa0);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0xb0);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0xc0);
            if (cVar1 != '\0') {
              cVar1 = FUN_14370b790(param_1 + 0xd0);
              if (cVar1 != '\0') {
                cVar1 = FUN_14370b790(param_1 + 0xe0);
                if (cVar1 != '\0') {
                  cVar1 = FUN_14370b790(param_1 + 0xf0);
                  if (cVar1 != '\0') {
                    cVar1 = FUN_14370b790(param_1 + 0x100);
                    if (cVar1 != '\0') {
                      cVar1 = FUN_14370b790(param_1 + 0x110);
                      if (cVar1 != '\0') {
                        cVar1 = FUN_14370b790(param_1 + 0x120);
                        if (cVar1 != '\0') {
                          cVar1 = FUN_14370b790(param_1 + 0x130);
                          if (cVar1 != '\0') {
                            cVar1 = FUN_14370b790(param_1 + 0x140);
                            if (cVar1 != '\0') {
                              cVar1 = FUN_14370b790(param_1 + 0x150);
                              if (cVar1 != '\0') {
                                cVar1 = FUN_14370b790(param_1 + 0x168);
                                if (cVar1 != '\0') {
                                  return 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14382f8d0 FUN_14382f8d0 body=170 status=ok
// SIG undefined FUN_14382f8d0(void)

undefined1 FUN_14382f8d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143828290(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x90);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0xa0);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0xb0);
        if (cVar1 != '\0') {
          cVar1 = FUN_143704540(param_1 + 200);
          if (cVar1 != '\0') {
            cVar1 = FUN_143704540(param_1 + 0xe0);
            if (cVar1 != '\0') {
              cVar1 = FUN_143704540(param_1 + 0xf8);
              if (cVar1 != '\0') {
                cVar1 = FUN_143704540(param_1 + 0x110);
                if (cVar1 != '\0') {
                  cVar1 = FUN_14381eea0(param_1 + 0x130);
                  if (cVar1 != '\0') {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14382f980 FUN_14382f980 body=121 status=ok
// SIG undefined FUN_14382f980(void)

undefined1 FUN_14382f980(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x228);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x238);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x248);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 600);
        if (cVar1 != '\0') {
          cVar1 = FUN_1438279a0(param_1 + 0x290);
          if (cVar1 != '\0') {
            cVar1 = FUN_143821da0(param_1 + 0x370);
            if (cVar1 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14382fa00 FUN_14382fa00 body=14 status=ok
// SIG undefined FUN_14382fa00(void)

void FUN_14382fa00(undefined4 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2deb0,*param_1);
  return;
}



// FUNCTION 14382fa10 FUN_14382fa10 body=15 status=ok
// SIG undefined FUN_14382fa10(void)

void FUN_14382fa10(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c32ff8,*param_1);
  return;
}



// FUNCTION 14382fa20 FUN_14382fa20 body=15 status=ok
// SIG undefined FUN_14382fa20(void)

void FUN_14382fa20(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c33a58,*param_1);
  return;
}



// FUNCTION 14382fa30 FUN_14382fa30 body=15 status=ok
// SIG undefined FUN_14382fa30(void)

void FUN_14382fa30(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c32fa0,*param_1);
  return;
}



// FUNCTION 14382fa40 FUN_14382fa40 body=14 status=ok
// SIG undefined FUN_14382fa40(void)

void FUN_14382fa40(undefined4 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2cec8,*param_1);
  return;
}



// FUNCTION 14382fa50 FUN_14382fa50 body=15 status=ok
// SIG undefined FUN_14382fa50(void)

void FUN_14382fa50(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c30190,*param_1);
  return;
}



// FUNCTION 14382fa60 FUN_14382fa60 body=15 status=ok
// SIG undefined FUN_14382fa60(void)

void FUN_14382fa60(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2a6f8,*param_1);
  return;
}



// FUNCTION 14382fa70 FUN_14382fa70 body=15 status=ok
// SIG undefined FUN_14382fa70(void)

void FUN_14382fa70(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c31548,*param_1);
  return;
}



// FUNCTION 14382fa90 FUN_14382fa90 body=15 status=ok
// SIG undefined FUN_14382fa90(void)

void FUN_14382fa90(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2d9d8,*param_1);
  return;
}



// FUNCTION 14382faa0 FUN_14382faa0 body=15 status=ok
// SIG undefined FUN_14382faa0(void)

void FUN_14382faa0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c30118,*param_1);
  return;
}



// FUNCTION 14382fab0 FUN_14382fab0 body=15 status=ok
// SIG undefined FUN_14382fab0(void)

void FUN_14382fab0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2c758,*param_1);
  return;
}



// FUNCTION 14382fac0 FUN_14382fac0 body=15 status=ok
// SIG undefined FUN_14382fac0(void)

void FUN_14382fac0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2d518,*param_1);
  return;
}



// FUNCTION 14382fad0 FUN_14382fad0 body=15 status=ok
// SIG undefined FUN_14382fad0(void)

void FUN_14382fad0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2ac60,*param_1);
  return;
}



// FUNCTION 14382faf0 FUN_14382faf0 body=15 status=ok
// SIG undefined FUN_14382faf0(void)

void FUN_14382faf0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c34a28,*param_1);
  return;
}



// FUNCTION 14382fb00 FUN_14382fb00 body=15 status=ok
// SIG undefined FUN_14382fb00(void)

void FUN_14382fb00(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c33fa8,*param_1);
  return;
}



// FUNCTION 14382fb10 FUN_14382fb10 body=15 status=ok
// SIG undefined FUN_14382fb10(void)

void FUN_14382fb10(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2c388,*param_1);
  return;
}



// FUNCTION 14382fb20 FUN_14382fb20 body=14 status=ok
// SIG undefined FUN_14382fb20(void)

void FUN_14382fb20(undefined4 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2c388,*param_1);
  return;
}



// FUNCTION 14382fb30 FUN_14382fb30 body=15 status=ok
// SIG undefined FUN_14382fb30(void)

void FUN_14382fb30(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2b3b8,*param_1);
  return;
}



// FUNCTION 14382fb40 FUN_14382fb40 body=15 status=ok
// SIG undefined FUN_14382fb40(void)

void FUN_14382fb40(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2c1a8,*param_1);
  return;
}



// FUNCTION 14382fb50 FUN_14382fb50 body=15 status=ok
// SIG undefined FUN_14382fb50(void)

void FUN_14382fb50(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2afa0,*param_1);
  return;
}



// FUNCTION 14382fb60 FUN_14382fb60 body=15 status=ok
// SIG undefined FUN_14382fb60(void)

void FUN_14382fb60(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145c2b640,*param_1);
  return;
}



// FUNCTION 14382fb80 FUN_14382fb80 body=155 status=ok
// SIG undefined FUN_14382fb80(void)

undefined8 FUN_14382fb80(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14375d9f0(*param_1 + 8 + (longlong)param_2 * 0x28);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  uVar1 = 0;
  lVar4 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 0x28;
  uVar3 = uVar1;
  if (0 < lVar5) {
    do {
      uVar2 = (int)uVar3 + 8;
      *(undefined8 *)(uVar1 + lVar4) = *(undefined8 *)(uVar1 + 0x28 + lVar4);
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382ec30(param_1);
  return 1;
}



// FUNCTION 14382fc20 FUN_14382fc20 body=214 status=ok
// SIG undefined FUN_14382fc20(void)

undefined8 FUN_14382fc20(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_1 + (longlong)param_2 * 0x18;
  uVar1 = FUN_143703a50();
  uVar2 = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  if (-1 < (int)*(uint *)(lVar5 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(lVar5 + 8),8,*(uint *)(lVar5 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x14) = 0x80000000;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar5 = *param_1 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)((int)param_1[1] - param_2) * 0x18;
  uVar4 = uVar2;
  if (0 < lVar6) {
    do {
      uVar3 = (int)uVar4 + 8;
      *(undefined8 *)(uVar2 + lVar5) = *(undefined8 *)(uVar2 + 0x18 + lVar5);
      uVar2 = uVar2 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < lVar6);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382ece0(param_1);
  return 1;
}



// FUNCTION 14382fd00 FUN_14382fd00 body=139 status=ok
// SIG undefined FUN_14382fd00(void)

undefined8 FUN_14382fd00(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)((longlong)param_2 * 0x10 + 8 + *param_1) != 0) {
    FUN_14370c150();
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  uVar1 = 0;
  lVar4 = *param_1 + (longlong)param_2 * 0x10;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 0x10;
  uVar3 = uVar1;
  if (0 < lVar5) {
    do {
      uVar2 = (int)uVar3 + 8;
      *(undefined8 *)(uVar1 + lVar4) = *(undefined8 *)(uVar1 + 0x10 + lVar4);
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382ed90(param_1);
  return 1;
}



// FUNCTION 14382fd90 FUN_14382fd90 body=214 status=ok
// SIG undefined FUN_14382fd90(void)

undefined8 FUN_14382fd90(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_1 + (longlong)param_2 * 0x28;
  uVar1 = FUN_143703a50();
  uVar2 = 0;
  *(undefined4 *)(lVar5 + 0x18) = 0;
  if (-1 < (int)*(uint *)(lVar5 + 0x1c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(lVar5 + 0x10),4,*(uint *)(lVar5 + 0x1c) & 0x3fffffff);
  }
  *(undefined8 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x1c) = 0x80000000;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar5 = *param_1 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)((int)param_1[1] - param_2) * 0x28;
  uVar4 = uVar2;
  if (0 < lVar6) {
    do {
      uVar3 = (int)uVar4 + 8;
      *(undefined8 *)(uVar2 + lVar5) = *(undefined8 *)(uVar2 + 0x28 + lVar5);
      uVar2 = uVar2 + 8;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < lVar6);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382ec30(param_1);
  return 1;
}



// FUNCTION 14382fe70 FUN_14382fe70 body=139 status=ok
// SIG undefined FUN_14382fe70(void)

undefined8 FUN_14382fe70(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14382bf40(*param_1 + 8 + (longlong)param_2 * 0x38);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  uVar1 = 0;
  lVar4 = *param_1 + (longlong)param_2 * 0x38;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 0x38;
  uVar3 = uVar1;
  if (0 < lVar5) {
    do {
      uVar2 = (int)uVar3 + 8;
      *(undefined8 *)(uVar1 + lVar4) = *(undefined8 *)(uVar1 + 0x38 + lVar4);
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382ee40(param_1);
  return 1;
}



// FUNCTION 14382ff00 FUN_14382ff00 body=139 status=ok
// SIG undefined FUN_14382ff00(void)

undefined8 FUN_14382ff00(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14382c2b0(*param_1 + 8 + (longlong)param_2 * 0x68);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  uVar1 = 0;
  lVar4 = *param_1 + (longlong)param_2 * 0x68;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 0x68;
  uVar3 = uVar1;
  if (0 < lVar5) {
    do {
      uVar2 = (int)uVar3 + 8;
      *(undefined8 *)(uVar1 + lVar4) = *(undefined8 *)(uVar1 + 0x68 + lVar4);
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382eef0(param_1);
  return 1;
}



// FUNCTION 14382ff90 FUN_14382ff90 body=139 status=ok
// SIG undefined FUN_14382ff90(void)

undefined8 FUN_14382ff90(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14382bd60(*param_1 + 0x10 + (longlong)param_2 * 0x30);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  uVar1 = 0;
  lVar4 = *param_1 + (longlong)param_2 * 0x30;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 0x30;
  uVar3 = uVar1;
  if (0 < lVar5) {
    do {
      uVar2 = (int)uVar3 + 8;
      *(undefined8 *)(uVar1 + lVar4) = *(undefined8 *)(uVar1 + 0x30 + lVar4);
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382efa0(param_1);
  return 1;
}



// FUNCTION 143830020 FUN_143830020 body=113 status=ok
// SIG undefined FUN_143830020(void)

undefined8 FUN_143830020(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 0xc;
  lVar1 = *param_1 + (longlong)param_2 * 0xc;
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < lVar5) {
    do {
      uVar3 = (int)uVar4 + 4;
      *(undefined4 *)(uVar2 + lVar1) = *(undefined4 *)(uVar2 + 0xc + lVar1);
      uVar2 = uVar2 + 4;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382f060(param_1);
  return 1;
}



// FUNCTION 1438300a0 FUN_1438300a0 body=97 status=ok
// SIG undefined FUN_1438300a0(void)

undefined8 FUN_1438300a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  lVar5 = (longlong)((int)param_1[1] - param_2) * 8;
  lVar1 = *param_1 + (longlong)param_2 * 8;
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < lVar5) {
    do {
      uVar3 = (int)uVar4 + 4;
      *(undefined4 *)(uVar2 + lVar1) = *(undefined4 *)(uVar2 + 8 + lVar1);
      uVar2 = uVar2 + 4;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < lVar5);
  }
  FUN_143734820(param_1 + 2);
  FUN_14382f130(param_1);
  return 1;
}



// FUNCTION 143830110 FUN_143830110 body=142 status=ok
// SIG undefined FUN_143830110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143830110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkaiPlaneVolume::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[6] = 0;
  param_1[5] = hkGeometry::vftable;
  *(undefined4 *)(param_1 + 7) = 0x1ffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar1 = uRam00000001467f08d8;
  param_1[0xe] = _DAT_1467f08d0;
  param_1[0xf] = uVar1;
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0xe) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x74) ^ 0x80000000;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0xf) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x8c) = *(uint *)((longlong)param_1 + 0x7c) ^ 0x80000000;
  return param_1;
}



// FUNCTION 1438301c0 FUN_1438301c0 body=305 status=ok
// SIG undefined FUN_1438301c0(void)

int * FUN_1438301c0(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x48);
  uVar4 = FUN_143703a50();
  if (((int)(*(uint *)(param_3 + 0x24) & 0x3fffffff) < iVar3) &&
     (iVar3 = FUN_14370c310(uVar4,param_3 + 0x18,iVar3,0x10), iVar3 < 0)) {
    *param_2 = -0x7ffbfe00;
    return param_2;
  }
  iVar3 = *(int *)(param_1 + 0x48);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x24) & 0x3fffffff) < iVar3) {
    FUN_14370c310(uVar5,param_3 + 0x18,iVar3,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_3 + 0x18),uVar4,iVar3);
  *(int *)(param_3 + 0x20) = iVar3;
  puVar1 = (undefined8 *)(param_3 + 0x28);
  iVar3 = *(int *)(param_1 + 0x58);
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) < iVar3) {
    iVar3 = FUN_14370c310(uVar4,puVar1,iVar3,0x10);
    if (iVar3 < 0) goto LAB_1438302d9;
  }
  else {
    iVar3 = 0;
  }
  iVar2 = *(int *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,puVar1,iVar2,0x10);
  }
  FUN_1436ee950(*puVar1,uVar4,iVar2);
  *(int *)(param_3 + 0x30) = iVar2;
LAB_1438302d9:
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 143830300 FUN_143830300 body=132 status=ok
// SIG undefined FUN_143830300(void)

void FUN_143830300(longlong param_1,longlong param_2,uint param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0 < (int)param_3) {
    uVar3 = 1;
    lVar5 = 0;
    uVar4 = (ulonglong)param_3;
    do {
      iVar2 = FUN_143830390(param_1,param_2);
      if ((iVar2 != 0) != (*(char *)(param_1 + 0x60) != '\0')) {
        puVar1 = (uint *)(*param_4 + (lVar5 >> 5) * 4);
        *puVar1 = *puVar1 | uVar3;
      }
      lVar5 = lVar5 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      param_2 = param_2 + 0x10;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 143830390 FUN_143830390 body=125 status=ok
// SIG undefined FUN_143830390(void)

undefined8 FUN_143830390(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  undefined4 uVar5;
  longlong lVar6;
  float *pfVar7;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  auVar1._4_4_ = -(uint)(fVar3 <= *(float *)(param_1 + 0x84) && *(float *)(param_1 + 0x74) <= fVar3)
  ;
  auVar1._0_4_ = -(uint)(fVar2 <= *(float *)(param_1 + 0x80) && *(float *)(param_1 + 0x70) <= fVar2)
  ;
  auVar1._8_4_ = -(uint)(fVar4 <= *(float *)(param_1 + 0x88) && *(float *)(param_1 + 0x78) <= fVar4)
  ;
  auVar1._12_4_ =
       -(uint)(param_2[3] <= *(float *)(param_1 + 0x8c) && *(float *)(param_1 + 0x7c) <= param_2[3])
  ;
  uVar5 = movmskps(in_EAX,auVar1);
  if (((byte)uVar5 & 7) != 7) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    pfVar7 = *(float **)(param_1 + 0x18);
    lVar6 = 0;
    do {
      if (0.0 < pfVar7[3] + pfVar7[1] * fVar3 + pfVar7[2] * fVar4 + *pfVar7 * fVar2) {
        return 0;
      }
      lVar6 = lVar6 + 1;
      pfVar7 = pfVar7 + 4;
    } while (lVar6 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 143830410 FUN_143830410 body=291 status=ok
// SIG undefined FUN_143830410(void)

bool FUN_143830410(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  lVar4 = 0;
  auVar11._4_4_ =
       -(uint)(param_2[1] <= *(float *)(param_1 + 0x84) && *(float *)(param_1 + 0x74) <= param_2[5])
  ;
  auVar11._0_4_ =
       -(uint)(*param_2 <= *(float *)(param_1 + 0x80) && *(float *)(param_1 + 0x70) <= param_2[4]);
  auVar11._8_4_ =
       -(uint)(param_2[2] <= *(float *)(param_1 + 0x88) && *(float *)(param_1 + 0x78) <= param_2[6])
  ;
  auVar11._12_4_ =
       -(uint)(param_2[3] <= *(float *)(param_1 + 0x8c) && *(float *)(param_1 + 0x7c) <= param_2[7])
  ;
  uVar3 = movmskps(in_EAX,auVar11);
  if (((byte)uVar3 & 7) != 7) {
    return *(char *)(param_1 + 0x60) != '\0';
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    pfVar5 = *(float **)(param_1 + 0x18);
    do {
      fVar2 = pfVar5[3];
      auVar10._0_8_ = CONCAT44(pfVar5[1] * param_2[1],*pfVar5 * *param_2);
      auVar10._8_4_ = pfVar5[2] * param_2[2];
      auVar10._12_4_ = fVar2 * param_2[3];
      fVar6 = *pfVar5 * param_2[4];
      fVar7 = pfVar5[1] * param_2[5];
      fVar8 = pfVar5[2] * param_2[6];
      fVar9 = fVar2 * param_2[7];
      auVar12._8_4_ = auVar10._8_4_;
      auVar12._0_8_ = auVar10._0_8_;
      auVar12._12_4_ = auVar10._12_4_;
      auVar13._4_4_ = fVar7;
      auVar13._0_4_ = fVar6;
      auVar13._8_4_ = fVar8;
      auVar13._12_4_ = fVar9;
      auVar13 = minps(auVar12,auVar13);
      auVar1._4_4_ = fVar7;
      auVar1._0_4_ = fVar6;
      auVar1._8_4_ = fVar8;
      auVar1._12_4_ = fVar9;
      auVar11 = maxps(auVar10,auVar1);
      if (*(char *)(param_1 + 0x60) == '\0') {
        if (0.0 <= auVar11._4_4_ + auVar11._0_4_ + auVar11._8_4_ + fVar2) {
          return false;
        }
      }
      else if (0.0 <= auVar13._4_4_ + auVar13._0_4_ + auVar13._8_4_ + fVar2) {
        return true;
      }
      lVar4 = lVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  return *(char *)(param_1 + 0x60) == '\0';
}



// FUNCTION 143830540 FUN_143830540 body=427 status=ok
// SIG undefined FUN_143830540(void)

undefined8
FUN_143830540(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             undefined1 (*param_4) [16])

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 in_EAX;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar13 [16];
  float fVar20;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    auVar2 = *param_2;
    auVar3 = *param_3;
    auVar21 = minps(auVar2,auVar3);
    auVar13 = maxps(auVar2,auVar3);
    auVar4 = *param_4;
    auVar21 = minps(auVar21,auVar4);
    auVar13 = maxps(auVar13,auVar4);
    auVar22._0_4_ =
         -(uint)(*(float *)(param_1 + 0x70) <= auVar13._0_4_ &&
                auVar21._0_4_ <= *(float *)(param_1 + 0x80));
    auVar22._4_4_ =
         -(uint)(*(float *)(param_1 + 0x74) <= auVar13._4_4_ &&
                auVar21._4_4_ <= *(float *)(param_1 + 0x84));
    auVar22._8_4_ =
         -(uint)(auVar21._8_4_ <= *(float *)(param_1 + 0x88) &&
                *(float *)(param_1 + 0x78) <= auVar13._8_4_);
    auVar22._12_4_ =
         -(uint)(*(float *)(param_1 + 0x7c) <= auVar13._12_4_ &&
                auVar21._12_4_ <= *(float *)(param_1 + 0x8c));
    uVar6 = movmskps(in_EAX,auVar22);
    if (((byte)uVar6 & 7) == 7) {
      piVar1 = (int *)(param_1 + 0x20);
      if (0 < *piVar1) {
        pfVar10 = *(float **)(param_1 + 0x18);
        lVar8 = 0;
        do {
          fVar12 = *pfVar10;
          fVar16 = pfVar10[1];
          fVar19 = pfVar10[2];
          fVar5 = pfVar10[3];
          fVar11 = fVar12 * auVar2._0_4_;
          fVar14 = fVar16 * auVar2._4_4_;
          fVar17 = fVar19 * auVar2._8_4_;
          fVar25 = fVar17 + fVar11;
          fVar26 = fVar5 + fVar14;
          fVar11 = fVar11 + fVar17;
          fVar14 = fVar14 + fVar5;
          fVar17 = fVar12 * auVar3._0_4_;
          fVar15 = fVar16 * auVar3._4_4_;
          fVar18 = fVar19 * auVar3._8_4_;
          fVar20 = fVar18 + fVar17;
          fVar23 = fVar5 + fVar15;
          fVar17 = fVar17 + fVar18;
          fVar15 = fVar15 + fVar5;
          fVar12 = fVar12 * auVar4._0_4_;
          fVar16 = fVar16 * auVar4._4_4_;
          fVar19 = fVar19 * auVar4._8_4_;
          fVar18 = fVar19 + fVar12;
          fVar24 = fVar5 + fVar16;
          fVar12 = fVar12 + fVar19;
          fVar16 = fVar16 + fVar5;
          auVar13._0_4_ =
               -(uint)(0.0 < fVar24 + fVar18 && (0.0 < fVar26 + fVar25 && 0.0 < fVar23 + fVar20));
          auVar13._4_4_ =
               -(uint)((0.0 < fVar25 + fVar26 && 0.0 < fVar20 + fVar23) && 0.0 < fVar18 + fVar24);
          auVar13._8_4_ =
               -(uint)((0.0 < fVar15 + fVar17 && 0.0 < fVar14 + fVar11) && 0.0 < fVar16 + fVar12);
          auVar13._12_4_ =
               -(uint)((0.0 < fVar11 + fVar14 && 0.0 < fVar17 + fVar15) && 0.0 < fVar12 + fVar16);
          iVar9 = movmskps((int)param_1,auVar13);
          if (iVar9 != 0) {
            return 1;
          }
          lVar8 = lVar8 + 1;
          pfVar10 = pfVar10 + 4;
          param_1 = 0;
        } while (lVar8 < *piVar1);
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    return uVar7;
  }
  iVar9 = FUN_143830390();
  if (((iVar9 != 0) && (iVar9 = FUN_143830390(param_1,param_3), iVar9 != 0)) &&
     (iVar9 = FUN_143830390(param_1,param_4), iVar9 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1438306f0 FUN_1438306f0 body=62 status=ok
// SIG undefined FUN_1438306f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438306f0(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001467f08d8;
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined8 *)(param_2 + 4) = _DAT_1467f08d0;
    *(undefined8 *)(param_2 + 6) = uVar1;
    *param_2 = param_2[4] ^ 0x80000000;
    param_2[1] = param_2[5] ^ 0x80000000;
    param_2[2] = param_2[6] ^ 0x80000000;
    param_2[3] = param_2[7] ^ 0x80000000;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_2 + 2) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_2 + 6) = uVar1;
  return;
}



// FUNCTION 143830730 FUN_143830730 body=237 status=ok
// SIG undefined FUN_143830730(void)

bool FUN_143830730(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  longlong lVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  auVar12._4_4_ =
       -(uint)(param_2[1] <= *(float *)(param_1 + 0x84) && *(float *)(param_1 + 0x74) <= param_2[5])
  ;
  auVar12._0_4_ =
       -(uint)(*param_2 <= *(float *)(param_1 + 0x80) && *(float *)(param_1 + 0x70) <= param_2[4]);
  auVar12._8_4_ =
       -(uint)(param_2[2] <= *(float *)(param_1 + 0x88) && *(float *)(param_1 + 0x78) <= param_2[6])
  ;
  auVar12._12_4_ =
       -(uint)(param_2[3] <= *(float *)(param_1 + 0x8c) && *(float *)(param_1 + 0x7c) <= param_2[7])
  ;
  uVar3 = movmskps(in_EAX,auVar12);
  if (((byte)uVar3 & 7) != 7) {
    return *(char *)(param_1 + 0x60) != '\0';
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    pfVar5 = *(float **)(param_1 + 0x18);
    lVar4 = 0;
    do {
      fVar2 = pfVar5[3];
      auVar11._0_8_ = CONCAT44(pfVar5[1] * param_2[1],*pfVar5 * *param_2);
      auVar11._8_4_ = pfVar5[2] * param_2[2];
      auVar11._12_4_ = fVar2 * param_2[3];
      fVar7 = *pfVar5 * param_2[4];
      fVar8 = pfVar5[1] * param_2[5];
      fVar9 = pfVar5[2] * param_2[6];
      fVar10 = fVar2 * param_2[7];
      auVar13._8_4_ = auVar11._8_4_;
      auVar13._0_8_ = auVar11._0_8_;
      auVar13._12_4_ = auVar11._12_4_;
      auVar14._4_4_ = fVar8;
      auVar14._0_4_ = fVar7;
      auVar14._8_4_ = fVar9;
      auVar14._12_4_ = fVar10;
      auVar14 = minps(auVar13,auVar14);
      auVar1._4_4_ = fVar8;
      auVar1._0_4_ = fVar7;
      auVar1._8_4_ = fVar9;
      auVar1._12_4_ = fVar10;
      auVar12 = maxps(auVar11,auVar1);
      if (*(char *)(param_1 + 0x60) == '\0') {
        bVar6 = 0.0 < auVar14._4_4_ + auVar14._0_4_ + auVar14._8_4_ + fVar2;
      }
      else {
        bVar6 = auVar12._4_4_ + auVar12._0_4_ + auVar12._8_4_ + fVar2 < 0.0;
      }
      if (!bVar6) {
        return true;
      }
      lVar4 = lVar4 + 1;
      pfVar5 = pfVar5 + 4;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  return false;
}



// FUNCTION 143830830 FUN_143830830 body=37 status=ok
// SIG undefined FUN_143830830(void)

longlong FUN_143830830(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 3;
  *(undefined4 *)(param_1 + 0x48) = 0xbf80bf80;
  return param_1;
}



// FUNCTION 143830860 FUN_143830860 body=153 status=ok
// SIG undefined FUN_143830860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143830860(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001467f0898;
  *param_1 = _DAT_1467f0890;
  param_1[1] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[2] = _DAT_1467f08a0;
  param_1[3] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[4] = _DAT_1467f08b0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = uRam00000001467f0898;
  param_1[10] = _DAT_1467f0890;
  param_1[0xb] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[0xc] = _DAT_1467f08a0;
  param_1[0xd] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[0xe] = _DAT_1467f08b0;
  param_1[0xf] = uVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x1a) = 3;
  *(undefined1 *)((longlong)param_1 + 0xd2) = 1;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return param_1;
}



// FUNCTION 143830900 FUN_143830900 body=125 status=ok
// SIG undefined FUN_143830900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_143830900(uint *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar2;
  undefined1 in_XMM2 [16];
  undefined1 auVar1 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = ((*param_3 - *param_2) * _DAT_1467f07e0 + *param_2) -
          ((*param_5 - *param_4) * _DAT_1467f07e0 + *param_4);
  fVar5 = ((param_3[1] - param_2[1]) * fRam00000001467f07e4 + param_2[1]) -
          ((param_5[1] - param_4[1]) * fRam00000001467f07e4 + param_4[1]);
  fVar6 = ((param_3[2] - param_2[2]) * fRam00000001467f07e8 + param_2[2]) -
          ((param_5[2] - param_4[2]) * fRam00000001467f07e8 + param_4[2]);
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar5 + fVar4 + fVar6;
  fVar8 = fVar5 + fVar4 + fVar6;
  fVar9 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar1._4_4_ = fVar8;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = fVar9;
  auVar1._12_4_ = fVar6;
  auVar1 = rsqrtps(in_XMM2,auVar1);
  fVar4 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar2 = auVar1._8_4_;
  fVar3 = auVar1._12_4_;
  *param_1 = ~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar7 * fVar4 * fVar4) * fVar4 * 0.5 * fVar7);
  param_1[1] = ~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar8 * fVar5 * fVar5) * fVar5 * 0.5 * fVar8);
  param_1[2] = ~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar9 * fVar2 * fVar2) * fVar2 * 0.5 * fVar9);
  param_1[3] = ~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar6 * fVar3 * fVar3) * fVar3 * 0.5 * fVar6);
  return param_1;
}



// FUNCTION 143830980 FUN_143830980 body=106 status=ok
// SIG undefined FUN_143830980(void)

void FUN_143830980(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint local_28 [4];
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar2 = (longlong)param_2;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = *(uint *)(param_1 + 0x40 + lVar2 * 4);
  *(uint *)((longlong)&local_18 + lVar2 * 4) = uVar1;
  local_28[lVar2] = uVar1 ^ 0x80000000;
  FUN_143713830(param_3,param_1,local_28);
  FUN_143713830(param_4,param_1,&local_18);
  return;
}



// FUNCTION 1438309f0 FUN_1438309f0 body=205 status=ok
// SIG undefined FUN_1438309f0(void)

void FUN_1438309f0(undefined8 *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar3 = (undefined4 *)(*(longlong *)(param_2 + 0xe0) + (longlong)*param_3 * 0x14);
  puVar2 = (undefined4 *)*param_1;
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  puVar3[2] = puVar2[2];
  puVar3[3] = puVar2[3];
  *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar2 + 4);
  *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar2 + 0x11);
  *(undefined2 *)((longlong)puVar3 + 0x12) = *(undefined2 *)((longlong)puVar2 + 0x12);
  iVar1 = *(int *)(param_2 + 0x60);
  lVar4 = (longlong)iVar1;
  puVar3 = (undefined4 *)(*(longlong *)(param_2 + 0x150) + (longlong)(iVar1 * *param_3) * 4);
  if (iVar1 == 1) {
    *puVar3 = *(undefined4 *)param_1[1];
  }
  else if (0 < lVar4) {
    lVar5 = (longlong)param_1[1] - (longlong)puVar3;
    do {
      *puVar3 = *(undefined4 *)(lVar5 + (longlong)puVar3);
      puVar3 = puVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(undefined2 *)(*(longlong *)(param_2 + 0x110) + (longlong)*param_3 * 2) =
       *(undefined2 *)(param_1 + 2);
  return;
}



// FUNCTION 143830ac0 FUN_143830ac0 body=3332 status=ok
// SIG undefined FUN_143830ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143830ac0(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,float param_7)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 *puVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  undefined8 *puVar17;
  longlong lVar18;
  float *pfVar19;
  undefined1 (*pauVar20) [16];
  undefined8 uVar21;
  float fVar22;
  undefined8 *puVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *plVar26;
  int iVar27;
  uint uVar28;
  longlong lVar30;
  uint *puVar31;
  bool bVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  float fVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float *pfVar68;
  float local_388 [4];
  int local_378;
  longlong local_370;
  int local_368;
  uint local_364;
  undefined8 *local_360;
  undefined8 local_358;
  int local_350;
  uint local_34c;
  uint *local_348;
  int local_340;
  uint local_33c;
  longlong local_338;
  int local_330;
  uint local_32c;
  float local_328;
  float local_320;
  uint *local_318;
  float *local_308;
  undefined1 local_2f8 [8];
  float fStack_2f0;
  undefined1 local_2e8 [8];
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  undefined4 uStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  longlong lStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248 [4];
  float local_238 [4];
  undefined1 local_228 [8];
  float fStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
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
  float local_158;
  float fStack_154;
  float fStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined1 local_128 [32];
  undefined1 local_108 [80];
  ulonglong uVar29;
  
  iVar24 = 0;
  puVar23 = &local_218;
  local_218 = param_1[0x16];
  uStack_210 = param_1[0x17];
  local_208 = param_1[0x18];
  uStack_200 = param_1[0x19];
  local_338 = 0;
  local_330 = 0;
  local_370 = 0;
  local_368 = 0;
  local_32c = 0x80000000;
  local_364 = 0x80000000;
  local_248[0] = 0.0;
  local_248[1] = 0.0;
  local_248[2] = 0.0;
  local_248[3] = 0.0;
  local_238[0] = 0.0;
  local_238[1] = 0.0;
  local_238[2] = 0.0;
  local_238[3] = 0.0;
  do {
    puVar17 = param_1;
    puVar9 = local_128;
    pfVar19 = &local_2b8;
    if (iVar24 != 0) {
      puVar17 = param_1 + 10;
      puVar9 = local_108;
      pfVar19 = &local_2d8;
    }
    local_298 = *puVar17;
    uStack_290 = puVar17[1];
    local_288 = puVar17[2];
    lStack_280 = puVar17[3];
    local_278 = puVar17[4];
    uStack_270 = puVar17[5];
    local_258 = *(float *)(puVar17 + 8);
    fStack_254 = *(float *)((longlong)puVar17 + 0x44);
    fStack_250 = *(float *)(puVar17 + 9);
    fStack_24c = *(float *)((longlong)puVar17 + 0x4c);
    local_268 = *(undefined1 (*) [16])(puVar17 + 6);
    if (*(char *)((longlong)param_1 + 0xd1) == '\x01') {
      lVar30 = param_3;
      if (iVar24 == 0) {
        lVar30 = param_2;
      }
      FUN_14375f6c0(&local_1e8,lVar30 + 0x40,&local_298);
      local_298 = local_1e8;
      uStack_290 = uStack_1e0;
      local_288 = local_1d8;
      lStack_280 = uStack_1d0;
      local_278 = CONCAT44(uStack_1c4,local_1c8);
      uStack_270 = CONCAT44(uStack_1bc,uStack_1c0);
      local_268._8_8_ = uStack_1b0;
      local_268._0_8_ = local_1b8;
    }
    pfVar1 = pfVar19 + 4;
    pfVar68 = pfVar1;
    FUN_143831a80(&local_298,puVar23,puVar9,puVar9 + 0x10,pfVar19,pfVar1);
    uVar14 = uStack_29c;
    fVar57 = fStack_2a0;
    fVar63 = fStack_2a4;
    fVar22 = local_2a8;
    pauVar20 = (undefined1 (*) [16])local_248;
    if (iVar24 != 0) {
      pauVar20 = (undefined1 (*) [16])local_238;
    }
    iVar24 = iVar24 + 1;
    fVar33 = (*pfVar19 - *pfVar1) * (*pfVar19 - *pfVar1);
    fVar36 = (pfVar19[1] - pfVar19[5]) * (pfVar19[1] - pfVar19[5]);
    fVar37 = (pfVar19[2] - pfVar19[6]) * (pfVar19[2] - pfVar19[6]);
    puVar23 = puVar23 + 2;
    auVar56._0_4_ = fVar36 + fVar33 + fVar37;
    auVar56._4_4_ = fVar36 + fVar33 + fVar37;
    auVar56._8_4_ = fVar36 + fVar33 + fVar37;
    auVar56._12_4_ = fVar36 + fVar33 + fVar37;
    auVar38 = rsqrtps(in_XMM2,auVar56);
    fVar33 = auVar38._0_4_;
    fVar36 = auVar38._4_4_;
    fVar37 = auVar38._8_4_;
    fVar44 = auVar38._12_4_;
    auVar38._0_4_ =
         (3.0 - fVar33 * auVar56._0_4_ * fVar33) * fVar33 * (float)DAT_145b8e2b0 * auVar56._0_4_;
    auVar38._4_4_ =
         (3.0 - fVar36 * auVar56._4_4_ * fVar36) * fVar36 * DAT_145b8e2b0._4_4_ * auVar56._4_4_;
    auVar38._8_4_ =
         (3.0 - fVar37 * auVar56._8_4_ * fVar37) * fVar37 * DAT_145b8e2b0._8_4_ * auVar56._8_4_;
    auVar38._12_4_ =
         (3.0 - fVar44 * auVar56._12_4_ * fVar44) * fVar44 * DAT_145b8e2b0._12_4_ * auVar56._12_4_;
    auVar39._0_4_ = (float)(~-(uint)(auVar56._0_4_ <= 0.0) & (uint)auVar38._0_4_);
    auVar39._4_4_ = (float)(~-(uint)(auVar56._4_4_ <= 0.0) & (uint)auVar38._4_4_);
    auVar39._8_4_ = (float)(~-(uint)(auVar56._8_4_ <= 0.0) & (uint)auVar38._8_4_);
    auVar39._12_4_ = (float)(~-(uint)(auVar56._12_4_ <= 0.0) & (uint)auVar38._12_4_);
    auVar38 = rcpps(auVar38,auVar39);
    in_XMM2._0_4_ = (2.0 - auVar38._0_4_ * auVar39._0_4_) * auVar38._0_4_ * param_7;
    in_XMM2._4_4_ = (2.0 - auVar38._4_4_ * auVar39._4_4_) * auVar38._4_4_ * param_7;
    in_XMM2._8_4_ = (2.0 - auVar38._8_4_ * auVar39._8_4_) * auVar38._8_4_ * param_7;
    in_XMM2._12_4_ = (2.0 - auVar38._12_4_ * auVar39._12_4_) * auVar38._12_4_ * param_7;
    *pauVar20 = in_XMM2;
  } while (iVar24 < 2);
  if (*(char *)((longlong)param_1 + 0xd2) != '\0') {
    fVar33 = DAT_1467f06f0;
    fVar36 = fRam00000001467f06f4;
    fVar37 = fRam00000001467f06f8;
    if (local_218._4_4_ * local_208._4_4_ + (float)local_218 * (float)local_208 +
        (float)uStack_210 * (float)uStack_200 < 0.0) {
      fVar33 = _DAT_1467f06d0;
      fVar36 = fRam00000001467f06d4;
      fVar37 = fRam00000001467f06d8;
    }
    fVar45 = (float)local_208 * fVar33 + (float)local_218;
    fVar46 = local_208._4_4_ * fVar36 + local_218._4_4_;
    fVar47 = (float)uStack_200 * fVar37 + (float)uStack_210;
    fVar33 = fVar45 * fVar45;
    fVar36 = fVar46 * fVar46;
    auVar65._8_4_ = fVar47 * fVar47;
    auVar65._4_4_ = auVar65._8_4_;
    auVar65._0_4_ = auVar65._8_4_;
    auVar65._12_4_ = auVar65._8_4_;
    auVar43._0_4_ = fVar36 + fVar33 + auVar65._8_4_;
    auVar43._4_4_ = fVar36 + fVar33 + auVar65._8_4_;
    auVar43._8_4_ = fVar36 + fVar33 + auVar65._8_4_;
    auVar43._12_4_ = fVar36 + fVar33 + auVar65._8_4_;
    auVar38 = rsqrtps(auVar65,auVar43);
    fVar33 = auVar38._0_4_;
    fVar36 = auVar38._4_4_;
    fVar37 = auVar38._8_4_;
    fVar45 = fVar45 * (float)(~-(uint)(auVar43._0_4_ <= 0.0) &
                             (uint)((3.0 - fVar33 * auVar43._0_4_ * fVar33) *
                                   fVar33 * (float)DAT_145b8e2b0));
    fVar46 = fVar46 * (float)(~-(uint)(auVar43._4_4_ <= 0.0) &
                             (uint)((3.0 - fVar36 * auVar43._4_4_ * fVar36) *
                                   fVar36 * DAT_145b8e2b0._4_4_));
    fVar47 = fVar47 * (float)(~-(uint)(auVar43._8_4_ <= 0.0) &
                             (uint)((3.0 - fVar37 * auVar43._8_4_ * fVar37) *
                                   fVar37 * DAT_145b8e2b0._8_4_));
    fVar33 = ((local_2c8 - local_2d8) * _DAT_1467f07e0 + local_2d8) -
             ((local_2a8 - local_2b8) * _DAT_1467f07e0 + local_2b8);
    fVar36 = ((fStack_2c4 - fStack_2d4) * fRam00000001467f07e4 + fStack_2d4) -
             ((fStack_2a4 - fStack_2b4) * fRam00000001467f07e4 + fStack_2b4);
    fVar37 = ((fStack_2c0 - fStack_2d0) * fRam00000001467f07e8 + fStack_2d0) -
             ((fStack_2a0 - fStack_2b0) * fRam00000001467f07e8 + fStack_2b0);
    fVar44 = fVar36 * fVar45 - fVar46 * fVar33;
    fVar36 = fVar37 * fVar46 - fVar47 * fVar36;
    fVar33 = fVar33 * fVar47 - fVar45 * fVar37;
    if (fVar33 * (fStack_2a4 - fStack_2b4) + fVar36 * (local_2a8 - local_2b8) +
        fVar44 * (fStack_2a0 - fStack_2b0) < 0.0) {
      local_2a8 = local_2b8;
      fStack_2a4 = fStack_2b4;
      fStack_2a0 = fStack_2b0;
      uStack_29c = uStack_2ac;
      local_2b8 = fVar22;
      fStack_2b4 = fVar63;
      fStack_2b0 = fVar57;
      uStack_2ac = uVar14;
    }
    if (0.0 < fVar33 * (fStack_2c4 - fStack_2d4) + fVar36 * (local_2c8 - local_2d8) +
              fVar44 * (fStack_2c0 - fStack_2d0)) {
      local_2d8 = local_2c8;
      fStack_2d4 = fStack_2c4;
      fStack_2d0 = fStack_2c0;
      uStack_2cc = uStack_2bc;
    }
  }
  puVar23 = &local_218;
  local_388[0] = 0.05;
  local_378 = 0;
  local_360 = puVar23;
  do {
    iVar24 = local_378;
    bVar32 = local_378 == 0;
    local_348 = (uint *)0x0;
    local_340 = 0;
    pauVar20 = (undefined1 (*) [16])&local_2d8;
    plVar10 = param_5;
    if (bVar32) {
      pauVar20 = (undefined1 (*) [16])&local_2b8;
      plVar10 = param_4;
    }
    local_33c = 0x80000000;
    lVar30 = param_3;
    if (bVar32) {
      lVar30 = param_2;
    }
    local_298 = 0xffffffff00000000;
    uStack_290 = 0;
    _local_2f8 = *pauVar20;
    pauVar20 = (undefined1 (*) [16])&local_2c8;
    if (bVar32) {
      pauVar20 = (undefined1 (*) [16])&local_2a8;
    }
    local_288 = 0;
    _local_228 = *pauVar20;
    plVar26 = &local_338;
    if (!bVar32) {
      plVar26 = &local_370;
    }
    auVar38 = minps(_local_2f8,_local_228);
    pauVar20 = (undefined1 (*) [16])local_128;
    if (!bVar32) {
      pauVar20 = (undefined1 (*) [16])local_108;
    }
    auVar39 = maxps(_local_2f8,_local_228);
    auVar38 = minps(auVar38,*pauVar20);
    auVar39 = maxps(auVar39,*pauVar20);
    auVar38 = minps(auVar38,pauVar20[1]);
    auVar39 = maxps(auVar39,pauVar20[1]);
    local_278 = lVar30 + 0x40;
    local_268._0_4_ = auVar38._0_4_ - 0.05;
    local_268._4_4_ = auVar38._4_4_ - 0.05;
    local_268._8_4_ = auVar38._8_4_ - 0.05;
    local_268._12_4_ = auVar38._12_4_ - 0.05;
    local_258 = auVar39._0_4_ + 0.05;
    fStack_254 = auVar39._4_4_ + 0.05;
    fStack_250 = auVar39._8_4_ + 0.05;
    fStack_24c = auVar39._12_4_ + 0.05;
    local_360 = puVar23;
    lStack_280 = lVar30;
    (**(code **)(*plVar10 + 0x40))(local_228._0_4_,&local_298,&local_348);
    puVar17 = local_360;
    local_318 = local_348 + local_340;
    if (local_348 != local_318) {
      puVar31 = local_348;
      local_308 = local_248;
      if (iVar24 != 0) {
        local_308 = local_238;
      }
      do {
        lVar18 = *(longlong *)(lVar30 + 0x18);
        fVar22 = (float)(*puVar31 & 0x3fffff);
        lVar18 = FUN_1437fb610(*(undefined8 *)(lVar18 + 0x18),*(undefined4 *)(lVar18 + 0x20),
                               lVar18 + 0xb0,lVar18 + 0xd0,lVar18 + 0x90,
                               CONCAT44((int)((ulonglong)pfVar68 >> 0x20),*puVar31) &
                               0xffffffff003fffff);
        local_34c = 0x80000000;
        local_358 = 0;
        local_350 = 0;
        iVar24 = *(short *)(lVar18 + 8) + 1;
        if (0 < iVar24) {
          iVar27 = iVar24;
          if (iVar24 < 0) {
            iVar27 = 0;
          }
          FUN_14370c310(&PTR_vftable_1467f0638,&local_358,iVar27,0x10);
        }
        local_350 = iVar24;
        thunk_FUN_14384eb70(lVar30,lVar18,&local_358);
        pfVar68 = (float *)local_1f8;
        local_388[0] = fVar22;
        cVar16 = FUN_143888ba0(&local_358,local_388,local_2f8,local_228,puVar17,pfVar68,local_2e8);
        auVar38 = local_1f8;
        if (cVar16 != '\0') {
          fVar44 = (float)local_228._0_4_ - (float)local_2f8._0_4_;
          fVar45 = (float)local_228._4_4_ - (float)local_2f8._4_4_;
          fVar46 = fStack_220 - fStack_2f0;
          uVar14 = local_2e8._0_4_;
          uVar15 = local_2e8._4_4_;
          fVar63 = fStack_2e0;
          fVar57 = fStack_2dc;
          fVar33 = fVar44 * fVar44;
          fVar36 = fVar45 * fVar45;
          fVar37 = fVar46 * fVar46;
          fVar47 = fVar45 * (float)local_2f8._4_4_ + fVar44 * (float)local_2f8._0_4_ +
                   fVar46 * fStack_2f0;
          auVar40._0_4_ = fVar36 + fVar33 + fVar37;
          auVar40._4_4_ = fVar36 + fVar33 + fVar37;
          auVar40._8_4_ = fVar36 + fVar33 + fVar37;
          auVar40._12_4_ = fVar36 + fVar33 + fVar37;
          auVar34._8_4_ = local_1f8._8_4_ * fVar46;
          auVar34._4_4_ = auVar34._8_4_;
          auVar34._0_4_ = auVar34._8_4_;
          auVar34._12_4_ = auVar34._8_4_;
          auVar39 = rcpps(auVar34,auVar40);
          auVar35._8_4_ = fStack_2e0 * fVar46;
          auVar41._0_4_ = fVar36 + fVar33 + fVar37;
          auVar41._4_4_ = fVar36 + fVar33 + fVar37;
          auVar41._8_4_ = fVar36 + fVar33 + fVar37;
          auVar41._12_4_ = fVar36 + fVar33 + fVar37;
          fVar37 = (2.0 - auVar39._0_4_ * auVar40._0_4_) * auVar39._0_4_ *
                   ((local_1f8._4_4_ * fVar45 + local_1f8._0_4_ * fVar44 + auVar34._8_4_) - fVar47);
          auVar35._4_4_ = auVar35._8_4_;
          auVar35._0_4_ = auVar35._8_4_;
          auVar35._12_4_ = auVar35._8_4_;
          auVar39 = rcpps(auVar35,auVar41);
          fVar36 = (2.0 - auVar39._0_4_ * auVar41._0_4_) * auVar39._0_4_ *
                   (((float)local_2e8._4_4_ * fVar45 + (float)local_2e8._0_4_ * fVar44 +
                    auVar35._8_4_) - fVar47);
          fVar33 = fVar36 - fVar37;
          if (*local_308 <= fVar33 && fVar33 != *local_308) {
            if (*(uint *)(plVar26 + 1) == (*(uint *)((longlong)plVar26 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,plVar26,0x40);
            }
            pfVar19 = (float *)((longlong)(int)plVar26[1] * 0x40 + *plVar26);
            if (pfVar19 != (float *)0x0) {
              *pfVar19 = fVar37;
              pfVar19[1] = fVar36;
              *(undefined1 (*) [16])(pfVar19 + 4) = auVar38;
              pfVar19[8] = (float)uVar14;
              pfVar19[9] = (float)uVar15;
              pfVar19[10] = fVar63;
              pfVar19[0xb] = fVar57;
              pfVar19[0xc] = fVar22;
            }
            *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
          }
        }
        local_350 = 0;
        if (-1 < (int)local_34c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_358,0x10,local_34c & 0x3fffffff);
        }
        puVar31 = puVar31 + 1;
        local_358 = 0;
        local_34c = 0x80000000;
        puVar23 = local_360;
        iVar24 = local_378;
      } while (puVar31 != local_318);
    }
    lVar30 = 0;
    local_340 = 0;
    if (-1 < (int)local_33c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_348,4,local_33c & 0x3fffffff);
    }
    local_378 = iVar24 + 1;
    puVar23 = puVar23 + 2;
    local_348 = (uint *)0x0;
    local_33c = 0x80000000;
    local_360 = puVar23;
  } while (local_378 < 2);
  pauVar20 = (undefined1 (*) [16])
             FUN_143830900(local_2e8,&local_2b8,&local_2a8,&local_2d8,
                           (undefined1 (*) [16])&local_2c8);
  auVar38 = *pauVar20;
  FUN_14375f650(&local_1a8,param_2 + 0x40);
  FUN_14375f650(&local_168,param_3 + 0x40);
  local_378 = 0;
  if (0 < local_330) {
    auVar42._4_4_ = fRam00000001467f06f4;
    auVar42._0_4_ = DAT_1467f06f0;
    auVar42._8_4_ = fRam00000001467f06f8;
    auVar42._12_4_ = uRam00000001467f06fc;
    iVar24 = local_330;
    iVar27 = local_368;
    do {
      uVar25 = 0;
      if (0 < iVar27) {
        auVar11._8_4_ = local_248[2];
        auVar11._12_4_ = local_248[3];
        auVar11._0_4_ = local_248[0];
        auVar11._4_4_ = local_248[1];
        auVar12._8_4_ = local_238[2];
        auVar12._12_4_ = local_238[3];
        auVar12._0_4_ = local_238[0];
        auVar12._4_4_ = local_238[1];
        auVar39 = maxps(auVar11,auVar12);
        uVar29 = uVar25;
        _local_2e8 = auVar39;
        do {
          lVar13 = local_338;
          lVar18 = local_370;
          fVar22 = *(float *)(local_338 + lVar30);
          fVar63 = *(float *)(uVar25 + local_370);
          fVar57 = *(float *)(local_338 + 4 + lVar30);
          auVar64._4_4_ = fVar22;
          auVar64._0_4_ = fVar22;
          auVar64._8_4_ = fVar22;
          auVar64._12_4_ = fVar22;
          fVar33 = *(float *)(uVar25 + 4 + local_370);
          fVar37 = auVar42._0_4_ - fVar63;
          fVar44 = auVar42._4_4_ - fVar63;
          fVar45 = auVar42._8_4_ - fVar63;
          fVar63 = auVar42._12_4_ - fVar63;
          auVar55._4_4_ = fVar57;
          auVar55._0_4_ = fVar57;
          auVar55._8_4_ = fVar57;
          auVar55._12_4_ = fVar57;
          fVar47 = auVar42._0_4_ - fVar33;
          fVar66 = auVar42._4_4_ - fVar33;
          fVar67 = auVar42._8_4_ - fVar33;
          fVar33 = auVar42._12_4_ - fVar33;
          auVar6._4_4_ = fVar44;
          auVar6._0_4_ = fVar37;
          auVar6._8_4_ = fVar45;
          auVar6._12_4_ = fVar63;
          auVar56 = minps(auVar55,auVar6);
          auVar8._4_4_ = fVar66;
          auVar8._0_4_ = fVar47;
          auVar8._8_4_ = fVar67;
          auVar8._12_4_ = fVar33;
          auVar65 = maxps(auVar64,auVar8);
          fVar36 = auVar56._0_4_;
          fVar46 = auVar65._0_4_;
          if (auVar39._0_4_ < fVar36 - fVar46) {
            FUN_143830830(&local_298);
            fVar51 = fVar57 - fVar22;
            fVar52 = fVar57 - fVar22;
            fVar53 = fVar57 - fVar22;
            pfVar19 = (float *)(lVar13 + 0x20 + lVar30);
            fVar37 = fVar37 - fVar47;
            fVar44 = fVar44 - fVar66;
            fVar45 = fVar45 - fVar67;
            pfVar1 = (float *)(lVar13 + 0x10 + lVar30);
            pfVar68 = (float *)(lVar13 + 0x10 + lVar30);
            auVar5._4_4_ = fVar52;
            auVar5._0_4_ = fVar51;
            auVar5._8_4_ = fVar53;
            auVar5._12_4_ = fVar57 - fVar22;
            auVar43 = rcpps(auVar42,auVar5);
            local_308 = (float *)CONCAT44(local_308._4_4_,*(undefined4 *)(param_1 + 0x14));
            local_360 = (undefined8 *)
                        CONCAT44(local_360._4_4_,*(undefined4 *)((longlong)param_1 + 0xa4));
            fVar54 = auVar43._0_4_;
            fVar58 = auVar43._4_4_;
            fVar59 = auVar43._8_4_;
            auVar7._4_4_ = fVar44;
            auVar7._0_4_ = fVar37;
            auVar7._8_4_ = fVar45;
            auVar7._12_4_ = fVar63 - fVar33;
            auVar39 = rcpps(auVar39,auVar7);
            pfVar2 = (float *)(uVar25 + 0x20 + lVar18);
            pfVar3 = (float *)(lVar13 + 0x10 + lVar30);
            fVar48 = (*pfVar19 - *pfVar1) * (2.0 - fVar51 * fVar54) * fVar54 * (fVar46 - fVar22) +
                     *pfVar3;
            fVar49 = (pfVar19[1] - pfVar1[1]) *
                     (2.0 - fVar52 * fVar58) * fVar58 * (auVar65._4_4_ - fVar22) + pfVar3[1];
            fVar50 = (pfVar19[2] - pfVar1[2]) *
                     (2.0 - fVar53 * fVar59) * fVar59 * (auVar65._8_4_ - fVar22) + pfVar3[2];
            fVar60 = auVar39._0_4_;
            fVar61 = auVar39._4_4_;
            fVar62 = auVar39._8_4_;
            pfVar1 = (float *)(uVar25 + 0x10 + lVar18);
            fVar63 = *pfVar1;
            fVar57 = pfVar1[1];
            fVar33 = pfVar1[2];
            pfVar1 = (float *)(lVar13 + 0x10 + lVar30);
            fVar51 = (*pfVar19 - *pfVar68) * (2.0 - fVar51 * fVar54) * fVar54 * (fVar36 - fVar22) +
                     *pfVar1;
            fVar58 = (pfVar19[1] - pfVar68[1]) *
                     (2.0 - fVar52 * fVar58) * fVar58 * (auVar56._4_4_ - fVar22) + pfVar1[1];
            fVar59 = (pfVar19[2] - pfVar68[2]) *
                     (2.0 - fVar53 * fVar59) * fVar59 * (auVar56._8_4_ - fVar22) + pfVar1[2];
            fVar22 = (DAT_1467f06f0 - (2.0 - fVar37 * fVar60) * fVar60 * (fVar36 - fVar47)) *
                     (*pfVar2 - fVar63) + fVar63;
            fVar36 = (fRam00000001467f06f4 -
                     (2.0 - fVar44 * fVar61) * fVar61 * (auVar56._4_4_ - fVar66)) *
                     (pfVar2[1] - fVar57) + fVar57;
            fVar54 = (fRam00000001467f06f8 -
                     (2.0 - fVar45 * fVar62) * fVar62 * (auVar56._8_4_ - fVar67)) *
                     (pfVar2[2] - fVar33) + fVar33;
            fVar63 = (DAT_1467f06f0 - (2.0 - fVar37 * fVar60) * fVar60 * (fVar46 - fVar47)) *
                     (*pfVar2 - fVar63) + fVar63;
            fVar57 = (fRam00000001467f06f4 -
                     (2.0 - fVar44 * fVar61) * fVar61 * (auVar65._4_4_ - fVar66)) *
                     (pfVar2[1] - fVar57) + fVar57;
            fVar33 = (fRam00000001467f06f8 -
                     (2.0 - fVar45 * fVar62) * fVar62 * (auVar65._8_4_ - fVar67)) *
                     (pfVar2[2] - fVar33) + fVar33;
            fVar60 = fVar49 * local_198 + fVar48 * local_1a8 + fVar50 * local_188 + local_178;
            fVar61 = fVar49 * fStack_194 + fVar48 * fStack_1a4 + fVar50 * fStack_184 + fStack_174;
            fVar62 = fVar49 * fStack_190 + fVar48 * fStack_1a0 + fVar50 * fStack_180 + fStack_170;
            fVar47 = fVar58 * local_198 + fVar51 * local_1a8 + fVar59 * local_188 + local_178;
            fVar66 = fVar58 * fStack_194 + fVar51 * fStack_1a4 + fVar59 * fStack_184 + fStack_174;
            fVar67 = fVar58 * fStack_190 + fVar51 * fStack_1a0 + fVar59 * fStack_180 + fStack_170;
            local_320 = *(float *)(local_338 + 0x30 + lVar30);
            local_318 = (uint *)CONCAT44(local_318._4_4_,*(undefined4 *)(uVar25 + 0x30 + local_370))
            ;
            fVar44 = fVar36 * local_158 + fVar22 * local_168 + fVar54 * local_148 + local_138;
            fVar45 = fVar36 * fStack_154 + fVar22 * fStack_164 + fVar54 * fStack_144 + fStack_134;
            fVar46 = fVar36 * fStack_150 + fVar22 * fStack_160 + fVar54 * fStack_140 + fStack_130;
            fVar36 = fVar57 * local_158 + fVar63 * local_168 + fVar33 * local_148 + local_138;
            fVar37 = fVar57 * fStack_154 + fVar63 * fStack_164 + fVar33 * fStack_144 + fStack_134;
            fVar63 = fVar57 * fStack_150 + fVar63 * fStack_160 + fVar33 * fStack_140 + fStack_130;
            fVar22 = *(float *)(param_1 + 0x15);
            if (*(float *)(param_1 + 0x15) < 0.0) {
              fVar22 = auVar38._0_4_;
            }
            fVar57 = *(float *)((longlong)param_1 + 0xac);
            if (*(float *)((longlong)param_1 + 0xac) < 0.0) {
              fVar57 = auVar38._0_4_;
            }
            uVar4 = *(undefined1 *)(param_1 + 0x1a);
            local_388[0] = *(float *)(*(longlong *)(param_2 + 0x18) + 0x178);
            local_328 = *(float *)(*(longlong *)(param_3 + 0x18) + 0x178);
            uVar21 = FUN_143703a50();
            if (*(uint *)(param_6 + 1) == (*(uint *)((longlong)param_6 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(uVar21,param_6,0x50);
            }
            pfVar19 = (float *)((longlong)(int)param_6[1] * 0x50 + *param_6);
            if (pfVar19 != (float *)0x0) {
              pfVar19[0xc] = local_388[0];
              pfVar19[0xd] = local_328;
              *pfVar19 = fVar60;
              pfVar19[1] = fVar47;
              pfVar19[2] = fVar44;
              pfVar19[3] = fVar36;
              pfVar19[4] = fVar61;
              pfVar19[5] = fVar66;
              pfVar19[6] = fVar45;
              pfVar19[7] = fVar37;
              pfVar19[8] = fVar62;
              pfVar19[9] = fVar67;
              pfVar19[10] = fVar46;
              pfVar19[0xb] = fVar63;
              pfVar19[0xe] = local_320;
              pfVar19[0xf] = local_318._0_4_;
              pfVar19[0x10] = local_308._0_4_;
              pfVar19[0x11] = local_360._0_4_;
              *(short *)(pfVar19 + 0x12) = (short)((uint)(fVar22 * 1.0039062) >> 0x10);
              *(short *)((longlong)pfVar19 + 0x4a) = (short)((uint)(fVar57 * 1.0039062) >> 0x10);
              *(undefined1 *)(pfVar19 + 0x13) = uVar4;
            }
            *(int *)(param_6 + 1) = (int)param_6[1] + 1;
            auVar42._4_4_ = fRam00000001467f06f4;
            auVar42._0_4_ = DAT_1467f06f0;
            auVar42._8_4_ = fRam00000001467f06f8;
            auVar42._12_4_ = uRam00000001467f06fc;
            auVar39 = _local_2e8;
            iVar27 = local_368;
          }
          uVar28 = (int)uVar29 + 1;
          uVar29 = (ulonglong)uVar28;
          uVar25 = uVar25 + 0x40;
          iVar24 = local_330;
        } while ((int)uVar28 < iVar27);
      }
      local_378 = local_378 + 1;
      lVar30 = lVar30 + 0x40;
    } while (local_378 < iVar24);
  }
  local_368 = 0;
  if (-1 < (int)local_364) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_370,0x40,local_364 & 0x3fffffff);
  }
  local_370 = 0;
  local_330 = 0;
  local_364 = 0x80000000;
  if (-1 < (int)local_32c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_338,0x40,local_32c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438317d0 FUN_1438317d0 body=552 status=ok
// SIG undefined FUN_1438317d0(void)

void FUN_1438317d0(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint local_res8;
  longlong local_b8;
  int local_b0;
  uint local_ac;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  longlong local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [48];
  ulonglong uVar7;
  
  lVar10 = param_1[1];
  lVar14 = *param_1;
  local_90 = lVar10;
  if (lVar14 != lVar10) {
    do {
      uVar8 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 0x80000000;
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 0x80000000;
      FUN_143831a00(lVar14,local_88);
      FUN_143831a00(lVar14 + 0x50,local_68);
      FUN_1437e5ca0(*(undefined8 *)(param_2 + 0x20),local_98,local_88,&local_a8);
      FUN_1437e5ca0(*(undefined8 *)(param_2 + 0x20),local_94,local_68,&local_b8);
      local_res8 = 0;
      uVar13 = uVar8;
      iVar3 = local_a0;
      iVar11 = local_b0;
      if (0 < local_a0) {
        do {
          uVar7 = 0;
          uVar9 = uVar7;
          uVar12 = (uint)uVar8;
          if (0 < iVar11) {
            do {
              lVar10 = *(longlong *)(param_2 + 0x38);
              lVar5 = (longlong)*(int *)(uVar13 + local_a8) * 0x100;
              lVar1 = *(longlong *)(lVar5 + lVar10);
              lVar5 = *(longlong *)(lVar5 + 0x18 + lVar10);
              lVar4 = (longlong)*(int *)(uVar9 + local_b8) * 0x100;
              lVar2 = *(longlong *)(lVar4 + lVar10);
              lVar10 = *(longlong *)(lVar4 + 0x18 + lVar10);
              if ((((lVar1 != 0) && (lVar2 != 0)) && (lVar5 != 0)) && (lVar10 != 0)) {
                FUN_143830ac0(lVar14,lVar1,lVar2,lVar5,lVar10,param_3,param_4);
                iVar11 = local_b0;
              }
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
              uVar9 = uVar9 + 4;
              iVar3 = local_a0;
              uVar12 = local_res8;
            } while ((int)uVar6 < iVar11);
          }
          local_res8 = uVar12 + 1;
          uVar8 = (ulonglong)local_res8;
          lVar10 = local_90;
          uVar13 = uVar13 + 4;
        } while ((int)local_res8 < iVar3);
      }
      thunk_FUN_143719c70(0xca5b3771);
      local_b0 = 0;
      if (-1 < (int)local_ac) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_b8,4,local_ac & 0x3fffffff);
      }
      local_b8 = 0;
      local_ac = 0x80000000;
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_a8,4,local_9c & 0x3fffffff);
      }
      lVar14 = lVar14 + 0xe0;
    } while (lVar14 != lVar10);
  }
  return;
}



// FUNCTION 143831a00 FUN_143831a00 body=117 status=ok
// SIG undefined FUN_143831a00(void)

void FUN_143831a00(float *param_1,float *param_2)

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
  
  fVar1 = param_1[0x12];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = param_1[0xb];
  fVar5 = param_1[0x10];
  fVar6 = param_1[0x11];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = param_1[7];
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  param_2[4] = ABS(fVar6 * param_1[4]) + ABS(fVar5 * *param_1) + ABS(fVar1 * param_1[8]);
  param_2[5] = ABS(fVar6 * fVar7) + ABS(fVar5 * fVar10) + ABS(fVar1 * fVar2);
  param_2[6] = ABS(fVar6 * fVar8) + ABS(fVar5 * fVar11) + ABS(fVar1 * fVar3);
  param_2[7] = ABS(fVar6 * fVar9) + ABS(fVar5 * fVar12) + ABS(fVar1 * fVar4);
  *param_2 = -param_2[4];
  param_2[1] = -param_2[5];
  param_2[2] = -param_2[6];
  param_2[3] = -param_2[7];
  fVar1 = param_1[0xd];
  fVar2 = param_1[0xe];
  fVar3 = param_1[0xf];
  *param_2 = -param_2[4] + param_1[0xc];
  param_2[1] = -param_2[5] + fVar1;
  param_2[2] = -param_2[6] + fVar2;
  param_2[3] = -param_2[7] + fVar3;
  fVar1 = param_1[0xd];
  fVar2 = param_1[0xe];
  fVar3 = param_1[0xf];
  param_2[4] = param_1[0xc] + param_2[4];
  param_2[5] = fVar1 + param_2[5];
  param_2[6] = fVar2 + param_2[6];
  param_2[7] = fVar3 + param_2[7];
  return;
}



// FUNCTION 143831a80 FUN_143831a80 body=498 status=ok
// SIG undefined FUN_143831a80(void)

void FUN_143831a80(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  char cVar1;
  char cVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_88 [4];
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  local_88[0] = *(float *)(param_1 + 0x40);
  local_88[1] = *(float *)(param_1 + 0x44);
  local_88[2] = *(float *)(param_1 + 0x48);
  local_88[3] = *(float *)(param_1 + 0x4c);
  fVar18 = ABS(local_88[0]);
  fVar19 = ABS(local_88[1]);
  fVar20 = ABS(local_88[2]);
  auVar15._0_8_ = CONCAT44(local_88[1],local_88[1]) & 0x7fffffff7fffffff;
  auVar15._8_4_ = fVar19;
  auVar15._12_4_ = fVar19;
  auVar7._0_8_ = CONCAT44(local_88[2],local_88[2]) & 0x7fffffff7fffffff;
  auVar7._8_4_ = fVar20;
  auVar7._12_4_ = fVar20;
  auVar16._8_4_ = fVar18;
  auVar16._0_8_ = CONCAT44(local_88[0],local_88[0]) & 0x7fffffff7fffffff;
  auVar16._12_4_ = fVar18;
  auVar16 = maxps(auVar15,auVar16);
  auVar16 = maxps(auVar7,auVar16);
  auVar8._4_4_ = -(uint)(auVar16._4_4_ <= fVar19);
  auVar8._0_4_ = -(uint)(auVar16._0_4_ <= fVar18);
  auVar8._8_4_ = -(uint)(auVar16._8_4_ <= fVar20);
  auVar8._12_4_ = -(uint)(auVar16._12_4_ <= ABS(local_88[3]));
  uVar4 = movmskps((int)&stack0x00000000,auVar8);
  cVar1 = (&DAT_145ba0900)[uVar4 & 7];
  local_88[cVar1] = 0.0;
  fVar18 = ABS(local_88[0]);
  fVar19 = ABS(local_88[1]);
  fVar20 = ABS(local_88[2]);
  auVar17._0_8_ = CONCAT44(local_88[1],local_88[1]) & 0x7fffffff7fffffff;
  auVar17._8_4_ = fVar19;
  auVar17._12_4_ = fVar19;
  auVar9._0_8_ = CONCAT44(local_88[2],local_88[2]) & 0x7fffffff7fffffff;
  auVar9._8_4_ = fVar20;
  auVar9._12_4_ = fVar20;
  auVar3._8_4_ = fVar18;
  auVar3._0_8_ = CONCAT44(local_88[0],local_88[0]) & 0x7fffffff7fffffff;
  auVar3._12_4_ = fVar18;
  auVar16 = maxps(auVar17,auVar3);
  auVar16 = maxps(auVar9,auVar16);
  auVar10._4_4_ = -(uint)(auVar16._4_4_ <= fVar19);
  auVar10._0_4_ = -(uint)(auVar16._0_4_ <= fVar18);
  auVar10._8_4_ = -(uint)(auVar16._8_4_ <= fVar20);
  auVar10._12_4_ = -(uint)(auVar16._12_4_ <= ABS(local_88[3]));
  uVar4 = movmskps(uVar4 & 7,auVar10);
  cVar2 = (&DAT_145ba0900)[uVar4 & 7];
  FUN_143830980(param_1,(longlong)cVar1,&local_68,&local_58);
  FUN_143830980(param_1,(int)cVar2,local_88,&local_78);
  fVar18 = *param_2;
  fVar19 = param_2[1];
  fVar20 = param_2[2];
  fVar5 = fVar18 * (local_88[0] - local_78);
  fVar11 = fVar19 * (local_88[1] - fStack_74);
  fVar13 = fVar20 * (local_88[2] - fStack_70);
  fVar6 = fVar18 * (local_68 - local_58);
  fVar12 = fVar19 * (fStack_64 - fStack_54);
  fVar14 = fVar20 * (fStack_60 - fStack_50);
  fVar21 = (local_88[0] - local_78) - (fVar11 + fVar5 + fVar13) * fVar18;
  fVar22 = (local_88[1] - fStack_74) - (fVar11 + fVar5 + fVar13) * fVar19;
  fVar5 = (local_88[2] - fStack_70) - (fVar11 + fVar5 + fVar13) * fVar20;
  fVar18 = (local_68 - local_58) - (fVar12 + fVar6 + fVar14) * fVar18;
  fVar19 = (fStack_64 - fStack_54) - (fVar12 + fVar6 + fVar14) * fVar19;
  fVar20 = (fStack_60 - fStack_50) - (fVar12 + fVar6 + fVar14) * fVar20;
  if (fVar22 * fVar22 + fVar21 * fVar21 + fVar5 * fVar5 <=
      fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20) {
    *param_5 = local_68;
    param_5[1] = fStack_64;
    param_5[2] = fStack_60;
    param_5[3] = fStack_5c;
    *param_6 = local_58;
    param_6[1] = fStack_54;
    param_6[2] = fStack_50;
    param_6[3] = fStack_4c;
    *param_3 = local_88[0];
    param_3[1] = local_88[1];
    param_3[2] = local_88[2];
    param_3[3] = local_88[3];
    *param_4 = local_78;
    param_4[1] = fStack_74;
    param_4[2] = fStack_70;
    param_4[3] = fStack_6c;
  }
  else {
    *param_3 = local_68;
    param_3[1] = fStack_64;
    param_3[2] = fStack_60;
    param_3[3] = fStack_5c;
    *param_4 = local_58;
    param_4[1] = fStack_54;
    param_4[2] = fStack_50;
    param_4[3] = fStack_4c;
    *param_5 = local_88[0];
    param_5[1] = local_88[1];
    param_5[2] = local_88[2];
    param_5[3] = local_88[3];
    *param_6 = local_78;
    param_6[1] = fStack_74;
    param_6[2] = fStack_70;
    param_6[3] = fStack_6c;
  }
  return;
}



// FUNCTION 143831c80 FUN_143831c80 body=195 status=ok
// SIG undefined FUN_143831c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_143831c80(undefined2 *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  auVar2 = *(undefined1 (*) [16])(param_2 + 8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auVar2._8_8_;
  fVar4 = (*param_2 + param_2[1]) * _DAT_1467f07e0 - (param_2[2] + param_2[3]) * _DAT_1467f07e0;
  fVar5 = (param_2[4] + param_2[5]) * fRam00000001467f07e4 -
          (param_2[6] + param_2[7]) * fRam00000001467f07e4;
  fVar6 = (auVar2._0_4_ + auVar2._4_4_) * fRam00000001467f07e8 -
          (auVar2._8_4_ + auVar2._12_4_) * fRam00000001467f07e8;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar6 = fVar6 * fVar6;
  fVar3 = fVar5 + fVar4 + fVar6;
  auVar2._4_4_ = fVar5 + fVar4 + fVar6;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = fVar5 + fVar4 + fVar6;
  auVar2._12_4_ = fVar5 + fVar4 + fVar6;
  auVar2 = rsqrtps(auVar1,auVar2);
  fVar4 = auVar2._0_4_;
  *param_1 = (short)((uint)((float)(~-(uint)(fVar3 <= 0.0) &
                                   (uint)((3.0 - fVar3 * fVar4 * fVar4) * fVar4 * 0.5 * fVar3)) *
                           1.0039062) >> 0x10);
  return param_1;
}



// FUNCTION 143831d50 FUN_143831d50 body=278 status=ok
// SIG undefined FUN_143831d50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_143831d50(undefined2 *param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  
  auVar4._0_4_ = (*param_4 + param_4[1]) * _DAT_1467f07e0;
  auVar4._4_4_ = (param_4[4] + param_4[5]) * fRam00000001467f07e4;
  auVar4._8_4_ = (param_4[8] + param_4[9]) * fRam00000001467f07e8;
  auVar4._12_4_ = fRam00000001467f07ec * 0.0;
  local_48 = (param_4[2] + param_4[3]) * _DAT_1467f07e0;
  fStack_44 = (param_4[6] + param_4[7]) * fRam00000001467f07e4;
  fStack_40 = (param_4[10] + param_4[0xb]) * fRam00000001467f07e8;
  fStack_3c = fRam00000001467f07ec * 0.0;
  local_58 = auVar4;
  FUN_143713830(&local_38,local_48,local_58);
  FUN_143713830(&local_28,param_3,&local_48);
  fVar1 = (local_38 - local_28) * (local_38 - local_28);
  fVar2 = (fStack_34 - fStack_24) * (fStack_34 - fStack_24);
  fVar3 = (fStack_30 - fStack_20) * (fStack_30 - fStack_20);
  fVar6 = fVar2 + fVar1 + fVar3;
  auVar5._4_4_ = fVar2 + fVar1 + fVar3;
  auVar5._0_4_ = fVar6;
  auVar5._8_4_ = fVar2 + fVar1 + fVar3;
  auVar5._12_4_ = fVar2 + fVar1 + fVar3;
  auVar5 = rsqrtps(auVar4,auVar5);
  fVar1 = auVar5._0_4_;
  *param_1 = (short)((uint)((float)(~-(uint)(fVar6 <= 0.0) &
                                   (uint)((3.0 - fVar6 * fVar1 * fVar1) * fVar1 * 0.5 * fVar6)) *
                           1.0039062) >> 0x10);
  return param_1;
}



// FUNCTION 143831e70 FUN_143831e70 body=435 status=ok
// SIG undefined FUN_143831e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143831e70(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  
  fVar15 = *param_4;
  fVar16 = param_4[1];
  fVar17 = param_4[2];
  fVar29 = *param_3 - *param_2;
  fVar30 = param_3[1] - param_2[1];
  fVar31 = param_3[2] - param_2[2];
  fVar25 = fVar29 * _DAT_1467f07e0;
  fVar26 = fVar30 * fRam00000001467f07e4;
  fVar27 = fVar31 * fRam00000001467f07e8;
  fVar28 = (param_3[3] - param_2[3]) * fRam00000001467f07ec;
  fVar7 = fVar29 * fVar29;
  fVar8 = fVar30 * fVar30;
  fVar9 = fVar31 * fVar31;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fVar22 = fVar8 + fVar7 + fVar9;
  fVar23 = fVar8 + fVar7 + fVar9;
  fVar24 = fVar8 + fVar7 + fVar9;
  fVar9 = fVar8 + fVar7 + fVar9;
  auVar1._4_4_ = fVar23;
  auVar1._0_4_ = fVar22;
  auVar1._8_4_ = fVar24;
  auVar1._12_4_ = fVar9;
  auVar11 = rsqrtps(in_XMM2,auVar1);
  fVar7 = auVar11._0_4_;
  fVar14 = auVar11._4_4_;
  fVar19 = auVar11._8_4_;
  fVar20 = auVar11._12_4_;
  auVar12._0_4_ = fVar7 * 0.5;
  auVar12._4_4_ = fVar14 * 0.5;
  auVar12._8_4_ = fVar19 * 0.5;
  auVar12._12_4_ = fVar20 * 0.5;
  fVar21 = (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - fVar22 * fVar7 * fVar7) * auVar12._0_4_))
  ;
  fVar7 = fVar15 * fVar15;
  fVar8 = fVar16 * fVar16;
  fVar10 = fVar17 * fVar17;
  fVar29 = fVar29 * fVar21;
  fVar30 = fVar30 * (float)(~-(uint)(fVar23 <= 0.0) &
                           (uint)((3.0 - fVar23 * fVar14 * fVar14) * auVar12._4_4_));
  fVar31 = fVar31 * (float)(~-(uint)(fVar24 <= 0.0) &
                           (uint)((3.0 - fVar24 * fVar19 * fVar19) * auVar12._8_4_));
  fVar32 = (param_3[3] - param_2[3]) *
           (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar9 * fVar20 * fVar20) * auVar12._12_4_)
                  );
  fVar18 = fVar8 + fVar7 + fVar10;
  fVar19 = fVar8 + fVar7 + fVar10;
  fVar20 = fVar8 + fVar7 + fVar10;
  fVar10 = fVar8 + fVar7 + fVar10;
  auVar11._4_4_ = fVar19;
  auVar11._0_4_ = fVar18;
  auVar11._8_4_ = fVar20;
  auVar11._12_4_ = fVar10;
  auVar11 = rsqrtps(auVar12,auVar11);
  fVar7 = auVar11._0_4_;
  fVar8 = auVar11._4_4_;
  fVar9 = auVar11._8_4_;
  fVar14 = auVar11._12_4_;
  fVar23 = (float)(~-(uint)(fVar18 <= 0.0) & (uint)((3.0 - fVar18 * fVar7 * fVar7) * fVar7 * 0.5));
  fVar15 = fVar15 * fVar23;
  fVar16 = fVar16 * (float)(~-(uint)(fVar19 <= 0.0) &
                           (uint)((3.0 - fVar19 * fVar8 * fVar8) * fVar8 * 0.5));
  fVar17 = fVar17 * (float)(~-(uint)(fVar20 <= 0.0) &
                           (uint)((3.0 - fVar20 * fVar9 * fVar9) * fVar9 * 0.5));
  fVar24 = param_4[3] *
           (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar10 * fVar14 * fVar14) * fVar14 * 0.5)
                  );
  fVar14 = fVar16 * fVar29 - fVar30 * fVar15;
  fVar19 = fVar17 * fVar30 - fVar31 * fVar16;
  fVar20 = fVar15 * fVar31 - fVar29 * fVar17;
  fVar7 = fVar19 * fVar19;
  fVar8 = fVar20 * fVar20;
  fVar9 = fVar14 * fVar14;
  auVar6._4_4_ = fVar7;
  auVar6._0_4_ = fVar7;
  auVar6._8_4_ = fVar7;
  auVar6._12_4_ = fVar7;
  auVar13._0_4_ = fVar8 + fVar7 + fVar9;
  auVar13._4_4_ = fVar8 + fVar7 + fVar9;
  auVar13._8_4_ = fVar8 + fVar7 + fVar9;
  auVar13._12_4_ = fVar8 + fVar7 + fVar9;
  auVar11 = rsqrtps(auVar6,auVar13);
  fVar7 = auVar11._0_4_;
  fVar8 = auVar11._4_4_;
  fVar9 = auVar11._8_4_;
  fVar10 = auVar11._12_4_;
  *param_1 = fVar29;
  param_1[1] = fVar30;
  param_1[2] = fVar31;
  param_1[3] = fVar32;
  param_1[4] = fVar15;
  param_1[5] = fVar16;
  param_1[6] = fVar17;
  param_1[7] = fVar24;
  param_1[8] = (float)(~-(uint)(auVar13._0_4_ <= 0.0) &
                      (uint)((3.0 - auVar13._0_4_ * fVar7 * fVar7) * fVar7 * 0.5)) * fVar19;
  param_1[9] = (float)(~-(uint)(auVar13._4_4_ <= 0.0) &
                      (uint)((3.0 - auVar13._4_4_ * fVar8 * fVar8) * fVar8 * 0.5)) * fVar20;
  param_1[10] = (float)(~-(uint)(auVar13._8_4_ <= 0.0) &
                       (uint)((3.0 - auVar13._8_4_ * fVar9 * fVar9) * fVar9 * 0.5)) * fVar14;
  param_1[0xb] = (float)(~-(uint)(auVar13._12_4_ <= 0.0) &
                        (uint)((3.0 - auVar13._12_4_ * fVar10 * fVar10) * fVar10 * 0.5)) *
                 (fVar24 * fVar32 - fVar32 * fVar24);
  param_1[0xc] = fVar25 + fVar2;
  param_1[0xd] = fVar26 + fVar3;
  param_1[0xe] = fVar27 + fVar4;
  param_1[0xf] = fVar28 + fVar5;
  fVar16 = _DAT_1467f08f0;
  fVar15 = _DAT_1467f06e0;
  param_1[0x10] = fVar21 * fVar22 * _DAT_1467f07e0;
  param_1[0x11] = fVar23 * fVar18;
  param_1[0x12] = fVar16;
  param_1[0x13] = fVar15;
  return;
}



// FUNCTION 143832030 FUN_143832030 body=165 status=ok
// SIG undefined FUN_143832030(void)

void FUN_143832030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_143831e70(param_1,param_2,param_3,param_6);
  FUN_143831e70(param_1 + 0x50,param_4,param_5,param_6);
  fVar10 = *param_6;
  fVar11 = param_6[1];
  fVar12 = param_6[2];
  fVar1 = fVar10 * fVar10;
  fVar2 = fVar11 * fVar11;
  fVar3 = fVar12 * fVar12;
  fVar7 = fVar2 + fVar1 + fVar3;
  fVar8 = fVar2 + fVar1 + fVar3;
  fVar9 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  auVar4._4_4_ = fVar8;
  auVar4._0_4_ = fVar7;
  auVar4._8_4_ = fVar9;
  auVar4._12_4_ = fVar3;
  auVar4 = rsqrtps(in_XMM2,auVar4);
  fVar1 = auVar4._0_4_;
  fVar2 = auVar4._4_4_;
  fVar5 = auVar4._8_4_;
  fVar6 = auVar4._12_4_;
  fVar10 = fVar10 * (float)(~-(uint)(fVar7 <= 0.0) &
                           (uint)((3.0 - fVar1 * fVar7 * fVar1) * fVar1 * 0.5));
  fVar11 = fVar11 * (float)(~-(uint)(fVar8 <= 0.0) &
                           (uint)((3.0 - fVar2 * fVar8 * fVar2) * fVar2 * 0.5));
  fVar12 = fVar12 * (float)(~-(uint)(fVar9 <= 0.0) &
                           (uint)((3.0 - fVar5 * fVar9 * fVar5) * fVar5 * 0.5));
  fVar1 = param_6[3] *
          (float)(~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar6 * fVar3 * fVar6) * fVar6 * 0.5));
  *(float *)(param_1 + 0xb0) = fVar10;
  *(float *)(param_1 + 0xb4) = fVar11;
  *(float *)(param_1 + 0xb8) = fVar12;
  *(float *)(param_1 + 0xbc) = fVar1;
  *(float *)(param_1 + 0xc0) = fVar10;
  *(float *)(param_1 + 0xc4) = fVar11;
  *(float *)(param_1 + 200) = fVar12;
  *(float *)(param_1 + 0xcc) = fVar1;
  return;
}



// FUNCTION 1438320e0 FUN_1438320e0 body=13 status=ok
// SIG undefined FUN_1438320e0(void)

undefined8 * FUN_1438320e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x38);
  *param_2 = *(undefined8 *)(param_3 + 0x30);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1438320f0 FUN_1438320f0 body=17 status=ok
// SIG undefined FUN_1438320f0(void)

float * FUN_1438320f0(undefined8 param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_3 + 0x44);
  fVar2 = *(float *)(param_3 + 0x48);
  fVar3 = *(float *)(param_3 + 0x4c);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 0x38);
  fVar6 = *(float *)(param_3 + 0x3c);
  *param_2 = *(float *)(param_3 + 0x40) + *(float *)(param_3 + 0x30);
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  return param_2;
}



// FUNCTION 143832110 FUN_143832110 body=67 status=ok
// SIG undefined FUN_143832110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143832110(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkaiSilhouetteGenerator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xffffffff;
  param_1[5] = 0;
  uVar1 = _DAT_1467f08c8;
  param_1[6] = _DAT_1467f08c0;
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 143832160 FUN_143832160 body=46 status=ok
// SIG undefined FUN_143832160(void)

void FUN_143832160(undefined8 *param_1)

{
  *param_1 = hkaiSilhouetteGenerator::vftable;
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143832190 FUN_143832190 body=389 status=ok
// SIG undefined FUN_143832190(void)

float * FUN_143832190(float *param_1,longlong *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar3;
  float fVar4;
  undefined1 auVar2 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  
  fVar1 = *param_4;
  fVar3 = param_4[1];
  fVar4 = param_4[2];
  fVar5 = param_4[3];
  fVar8 = param_3[3];
  fVar11 = -*param_3;
  fVar12 = -param_3[1];
  fVar13 = -param_3[2];
  local_58 = (fVar4 * fVar12 - fVar13 * fVar3) + fVar8 * fVar1 + fVar11 * fVar5;
  fStack_54 = (fVar1 * fVar13 - fVar11 * fVar4) + fVar8 * fVar3 + fVar12 * fVar5;
  fStack_50 = (fVar3 * fVar11 - fVar12 * fVar1) + fVar8 * fVar4 + fVar13 * fVar5;
  fStack_4c = fVar5 * fVar8 - (fVar12 * fVar3 + fVar11 * fVar1 + fVar13 * fVar4);
  auVar2._0_4_ = fStack_50 * fStack_50 + local_58 * local_58;
  auVar2._4_4_ = fStack_4c * fStack_4c + fStack_54 * fStack_54;
  auVar2._8_4_ = local_58 * local_58 + fStack_50 * fStack_50;
  auVar2._12_4_ = fStack_54 * fStack_54 + fStack_4c * fStack_4c;
  auVar6._0_4_ = auVar2._4_4_ + auVar2._0_4_;
  auVar6._4_4_ = auVar2._0_4_ + auVar2._4_4_;
  auVar6._8_4_ = auVar2._12_4_ + auVar2._8_4_;
  auVar6._12_4_ = auVar2._8_4_ + auVar2._12_4_;
  auVar2 = rsqrtps(auVar2,auVar6);
  fVar1 = auVar2._0_4_;
  fVar3 = auVar2._4_4_;
  fVar4 = auVar2._8_4_;
  fVar5 = auVar2._12_4_;
  local_58 = local_58 * (3.0 - auVar6._0_4_ * fVar1 * fVar1) * fVar1 * 0.5;
  fStack_54 = fStack_54 * (3.0 - auVar6._4_4_ * fVar3 * fVar3) * fVar3 * 0.5;
  fStack_50 = fStack_50 * (3.0 - auVar6._8_4_ * fVar4 * fVar4) * fVar4 * 0.5;
  fStack_4c = fStack_4c * (3.0 - auVar6._12_4_ * fVar5 * fVar5) * fVar5 * 0.5;
  FUN_14375e490(&local_58,&local_48);
  (**(code **)(*param_2 + 0x40))(param_2,&local_38);
  local_38 = local_38 * local_38;
  fStack_34 = fStack_34 * fStack_34;
  fStack_30 = fStack_30 * fStack_30;
  local_28 = local_28 * local_28;
  fStack_24 = fStack_24 * fStack_24;
  auVar7._8_4_ = fStack_20 * fStack_20;
  auVar9._0_4_ = fStack_34 + local_38 + fStack_30;
  auVar9._4_4_ = fStack_34 + local_38 + fStack_30;
  auVar9._8_4_ = fStack_34 + local_38 + fStack_30;
  auVar9._12_4_ = fStack_34 + local_38 + fStack_30;
  auVar7._4_4_ = auVar7._8_4_;
  auVar7._0_4_ = auVar7._8_4_;
  auVar7._12_4_ = auVar7._8_4_;
  auVar10._0_4_ = fStack_24 + local_28 + auVar7._8_4_;
  auVar10._4_4_ = fStack_24 + local_28 + auVar7._8_4_;
  auVar10._8_4_ = fStack_24 + local_28 + auVar7._8_4_;
  auVar10._12_4_ = fStack_24 + local_28 + auVar7._8_4_;
  auVar10 = maxps(auVar9,auVar10);
  auVar2 = rsqrtps(auVar7,auVar10);
  fVar8 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  fVar1 = auVar2._0_4_;
  fVar3 = auVar2._4_4_;
  fVar4 = auVar2._8_4_;
  fVar5 = auVar2._12_4_;
  *param_1 = (float)(~-(uint)(fVar8 <= 0.0) &
                    (uint)((3.0 - fVar8 * fVar1 * fVar1) * fVar1 * 0.5 * fVar8)) * local_48;
  param_1[1] = (float)(~-(uint)(fVar11 <= 0.0) &
                      (uint)((3.0 - fVar11 * fVar3 * fVar3) * fVar3 * 0.5 * fVar11)) * fStack_44;
  param_1[2] = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar12 * fVar4 * fVar4) * fVar4 * 0.5 * fVar12)) * fStack_40;
  param_1[3] = (float)(~-(uint)(fVar13 <= 0.0) &
                      (uint)((3.0 - fVar13 * fVar5 * fVar5) * fVar5 * 0.5 * fVar13)) * fStack_3c;
  return param_1;
}



// FUNCTION 143832320 FUN_143832320 body=91 status=ok
// SIG undefined FUN_143832320(void)

uint * FUN_143832320(uint *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_3 + 0x10) - *(float *)(param_2 + 0x10);
  fVar2 = *(float *)(param_3 + 0x14) - *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x18);
  fVar1 = fVar1 * fVar1;
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar7 = fVar2 + fVar1 + fVar3;
  fVar8 = fVar2 + fVar1 + fVar3;
  fVar9 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  auVar4._4_4_ = fVar8;
  auVar4._0_4_ = fVar7;
  auVar4._8_4_ = fVar9;
  auVar4._12_4_ = fVar3;
  auVar4 = rsqrtps(in_XMM2,auVar4);
  fVar1 = auVar4._0_4_;
  fVar2 = auVar4._4_4_;
  fVar5 = auVar4._8_4_;
  fVar6 = auVar4._12_4_;
  *param_1 = ~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar1 * fVar7 * fVar1) * fVar1 * 0.5 * fVar7);
  param_1[1] = ~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar2 * fVar8 * fVar2) * fVar2 * 0.5 * fVar8);
  param_1[2] = ~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar5 * fVar9 * fVar5) * fVar5 * 0.5 * fVar9);
  param_1[3] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar6 * fVar3 * fVar6) * fVar6 * 0.5 * fVar3);
  return param_1;
}



// FUNCTION 143832380 FUN_143832380 body=177 status=ok
// SIG undefined FUN_143832380(void)

undefined8 FUN_143832380(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = *(float *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x30))) {
    auVar4._4_4_ = -(uint)(ABS(param_3[1] - *(float *)(lVar2 + 100)) <= fVar1);
    auVar4._0_4_ = -(uint)(ABS(*param_3 - *(float *)(lVar2 + 0x60)) <= fVar1);
    auVar4._8_4_ = -(uint)(ABS(param_3[2] - *(float *)(lVar2 + 0x68)) <= fVar1);
    auVar4._12_4_ = -(uint)(ABS(param_3[3] - *(float *)(lVar2 + 0x6c)) <= fVar1);
    uVar6 = movmskps((int)param_3,auVar4);
    if (((char)(uVar6 & 7) == '\a') &&
       ((fVar9 = *(float *)(lVar2 + 0x40) * *param_2, fVar10 = *(float *)(lVar2 + 0x44) * param_2[1]
        , fVar11 = *(float *)(lVar2 + 0x48) * param_2[2],
        fVar12 = *(float *)(lVar2 + 0x4c) * param_2[3], fVar13 = fVar11 + fVar9,
        fVar14 = fVar12 + fVar10, fVar9 = fVar9 + fVar11, fVar10 = fVar10 + fVar12,
        auVar3._4_4_ = -(uint)(ABS(param_2[1] -
                                   (float)((uint)*(float *)(lVar2 + 0x44) ^
                                          (uint)(fVar13 + fVar14) & 0x80000000)) <= fVar1),
        auVar3._0_4_ = -(uint)(ABS(*param_2 -
                                   (float)((uint)*(float *)(lVar2 + 0x40) ^
                                          (uint)(fVar14 + fVar13) & 0x80000000)) <= fVar1),
        auVar3._8_4_ = -(uint)(ABS(param_2[2] -
                                   (float)((uint)*(float *)(lVar2 + 0x48) ^
                                          (uint)(fVar10 + fVar9) & 0x80000000)) <= fVar1),
        auVar3._12_4_ =
             -(uint)(ABS(param_2[3] -
                         (float)((uint)*(float *)(lVar2 + 0x4c) ^
                                (uint)(fVar9 + fVar10) & 0x80000000)) <= fVar1),
        iVar7 = movmskps(uVar6 & 7,auVar3), iVar7 == 0xf &&
        (auVar5._4_4_ = -(uint)(ABS(param_2[5] - *(float *)(lVar2 + 0x54)) <= fVar1),
        auVar5._0_4_ = -(uint)(ABS(param_2[4] - *(float *)(lVar2 + 0x50)) <= fVar1),
        auVar5._8_4_ = -(uint)(ABS(param_2[6] - *(float *)(lVar2 + 0x58)) <= fVar1),
        auVar5._12_4_ = -(uint)(ABS(param_2[7] - *(float *)(lVar2 + 0x5c)) <= fVar1),
        uVar8 = movmskps(0xf,auVar5), ((byte)uVar8 & 7) == 7)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143832440 FUN_143832440 body=384 status=ok
// SIG undefined FUN_143832440(void)

/* WARNING: Removing unreachable block (ram,0x0001438324ba) */

void FUN_143832440(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  float *param_4,uint param_5)

{
  uint uVar1;
  float fVar2;
  float fVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar11 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  
  auVar22 = param_1[1];
  auVar23 = *param_1;
  fVar9 = auVar22._4_4_;
  fVar12 = auVar22._8_4_;
  fVar14 = auVar22._12_4_;
  fVar15 = auVar23._4_4_;
  fVar24 = auVar23._8_4_;
  fVar25 = auVar23._12_4_;
  if ((param_5 & 4) == 0) {
    if ((param_5 & 2) != 0) {
      auVar4 = *param_2;
      fVar19 = auVar4._0_4_;
      fVar20 = auVar4._4_4_;
      fVar21 = auVar4._8_4_;
      fVar2 = fVar19 * fVar19;
      fVar7 = fVar20 * fVar20;
      fVar8 = fVar19 * fVar19 + fVar21 * fVar21;
      fVar13 = fVar21 * fVar21 + fVar19 * fVar19;
      auVar6._0_4_ = fVar8 + 0.0;
      auVar6._4_4_ = fVar8 + 0.0;
      auVar6._8_4_ = fVar13 + 0.0;
      auVar6._12_4_ = fVar13 + 0.0;
      auVar10._4_4_ = fVar7 + fVar2;
      auVar10._0_4_ = fVar7 + fVar2;
      auVar10._8_4_ = fVar7 + fVar2;
      auVar10._12_4_ = fVar7 + fVar2;
      uVar1 = -(uint)(fVar7 + fVar2 < auVar6._0_4_);
      auVar10 = maxps(auVar10,auVar6);
      fVar17 = (float)(~-(uint)(fVar7 + fVar2 < auVar6._4_4_) & (uint)fVar19);
      fVar18 = (float)((uint)fVar19 & -(uint)(fVar7 + fVar2 < auVar6._8_4_));
      fVar16 = (float)(~uVar1 & (uint)-fVar20 | (uint)-fVar21 & uVar1);
      auVar5._0_4_ = fVar17 * fVar19;
      auVar5._4_4_ = fVar18 * fVar20;
      auVar5._8_4_ = fVar16 * fVar21;
      auVar5._12_4_ = auVar4._12_4_ * 0.0;
      auVar6 = rsqrtps(auVar5,auVar10);
      fVar2 = auVar6._0_4_;
      fVar7 = auVar6._4_4_;
      fVar8 = auVar6._8_4_;
      fVar13 = auVar6._12_4_;
      fVar2 = (3.0 - auVar10._0_4_ * fVar2 * fVar2) * fVar2 * 0.5;
      fVar7 = (3.0 - auVar10._4_4_ * fVar7 * fVar7) * fVar7 * 0.5;
      fVar8 = (3.0 - auVar10._8_4_ * fVar8 * fVar8) * fVar8 * 0.5;
      fVar13 = (3.0 - auVar10._12_4_ * fVar13 * fVar13) * fVar13 * 0.5;
      fVar2 = *param_4 * 1.45 *
              (ABS((fVar21 * fVar17 - auVar5._4_4_) * fVar2) + ABS(fVar2 * fVar16));
      fVar7 = param_4[1] * 1.45 *
              (ABS((fVar19 * fVar18 - auVar5._8_4_) * fVar7) + ABS(fVar7 * fVar17));
      fVar8 = param_4[2] * 1.45 *
              (ABS((fVar20 * fVar16 - auVar5._0_4_) * fVar8) + ABS(fVar8 * fVar18));
      fVar13 = param_4[3] * 1.45 *
               (ABS((auVar4._12_4_ * 0.0 - auVar5._12_4_) * fVar13) + ABS(fVar13 * 0.0));
      auVar23._0_4_ = auVar23._0_4_ - fVar2;
      auVar23._4_4_ = fVar15 - fVar7;
      auVar23._8_4_ = fVar24 - fVar8;
      auVar23._12_4_ = fVar25 - fVar13;
      auVar22._0_4_ = auVar22._0_4_ + fVar2;
      auVar22._4_4_ = fVar9 + fVar7;
      auVar22._8_4_ = fVar12 + fVar8;
      auVar22._12_4_ = fVar14 + fVar13;
    }
    if ((param_5 & 1) != 0) {
      fVar9 = (0.0 - *(float *)*param_3) * *(float *)*param_2;
      fVar12 = (0.0 - *(float *)(*param_3 + 4)) * *(float *)(*param_2 + 4);
      fVar14 = (0.0 - *(float *)(*param_3 + 8)) * *(float *)(*param_2 + 8);
      fVar15 = (0.0 - *(float *)(*param_3 + 0xc)) * *(float *)(*param_2 + 0xc);
      auVar11._0_4_ = fVar9 + auVar23._0_4_;
      auVar11._4_4_ = fVar12 + auVar23._4_4_;
      auVar11._8_4_ = fVar14 + auVar23._8_4_;
      auVar11._12_4_ = fVar15 + auVar23._12_4_;
      auVar4._0_4_ = fVar9 + auVar22._0_4_;
      auVar4._4_4_ = fVar12 + auVar22._4_4_;
      auVar4._8_4_ = fVar14 + auVar22._8_4_;
      auVar4._12_4_ = fVar15 + auVar22._12_4_;
      auVar23 = minps(auVar23,auVar11);
      auVar22 = maxps(auVar22,auVar4);
    }
  }
  else {
    auVar3._0_4_ = *param_4 * 1.45;
    auVar3._4_4_ = param_4[1] * 1.45;
    auVar3._8_4_ = param_4[2] * 1.45;
    auVar3._12_4_ = param_4[3] * 1.45;
    auVar4 = maxps(auVar3,*param_3);
    auVar22._0_4_ = auVar22._0_4_ + auVar4._0_4_;
    auVar22._4_4_ = fVar9 + auVar4._4_4_;
    auVar22._8_4_ = fVar12 + auVar4._8_4_;
    auVar22._12_4_ = fVar14 + auVar4._12_4_;
    auVar23._0_4_ = auVar23._0_4_ - auVar4._0_4_;
    auVar23._4_4_ = fVar15 - auVar4._4_4_;
    auVar23._8_4_ = fVar24 - auVar4._8_4_;
    auVar23._12_4_ = fVar25 - auVar4._12_4_;
  }
  *param_1 = auVar23;
  param_1[1] = auVar22;
  return;
}



// FUNCTION 1438325c0 FUN_1438325c0 body=65 status=ok
// SIG undefined FUN_1438325c0(void)

float * FUN_1438325c0(undefined8 param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  FUN_143832320(param_2,param_3,param_4);
  FUN_143832190(&local_18,param_1,param_3);
  *param_2 = *param_2 + local_18;
  param_2[1] = param_2[1] + fStack_14;
  param_2[2] = param_2[2] + fStack_10;
  param_2[3] = param_2[3] + fStack_c;
  return param_2;
}



// FUNCTION 143832610 FUN_143832610 body=117 status=ok
// SIG undefined FUN_143832610(void)

bool FUN_143832610(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float local_38 [14];
  
  fVar1 = *(float *)(param_1 + 0x20);
  FUN_143832320(local_38);
  fVar3 = local_38[0];
  bVar2 = fVar1 <= local_38[0];
  if (!bVar2) {
    FUN_143832190(local_38,param_1,param_2,param_3);
    bVar2 = fVar1 <= fVar3 + local_38[0];
  }
  return bVar2;
}



// FUNCTION 143832690 FUN_143832690 body=12 status=ok
// SIG undefined FUN_143832690(void)

void FUN_143832690(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x40) = *param_2 + *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x44) = fVar1 + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x48) = fVar2 + *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x4c) = fVar3 + *(float *)(param_1 + 0x4c);
  return;
}



// FUNCTION 1438326a0 FUN_1438326a0 body=139 status=ok
// SIG undefined FUN_1438326a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438326a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_143832110();
  *param_1 = hkaiPointCloudSilhouetteGenerator::vftable;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar1 = uRam00000001467f08d8;
  param_1[10] = _DAT_1467f08d0;
  param_1[0xb] = uVar1;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 10) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 100) = *(uint *)((longlong)param_1 + 0x54) ^ 0x80000000;
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xb) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x5c) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x1010101;
  *(undefined1 *)(param_1 + 0x13) = 1;
  return param_1;
}



// FUNCTION 143832730 FUN_143832730 body=162 status=ok
// SIG undefined FUN_143832730(void)

void FUN_143832730(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkaiPointCloudSilhouetteGenerator::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar1,param_1[0x10],4,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],0x10,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  FUN_143832160(param_1);
  return;
}



// FUNCTION 1438327e0 FUN_1438327e0 body=718 status=ok
// SIG undefined FUN_1438327e0(void)

longlong FUN_1438327e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint local_res18 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  uint local_3c;
  longlong local_38;
  uint local_30;
  
  iVar3 = FUN_143832380(param_1,param_2,param_3 + 0x10);
  if (iVar3 != 0) {
    return param_1[5];
  }
  local_res18[0] = 0x80;
  uVar5 = FUN_143702d60(&PTR_vftable_1467f0638,0x10,local_res18);
  uVar10 = 0x80000000;
  if (local_res18[0] != 0) {
    uVar10 = local_res18[0];
  }
  local_4c = 0x80000080;
  local_50 = 0;
  if ((*(uint *)(param_1 + 0x11) == 0) ||
     (uVar4 = *(uint *)(param_1 + 0x11), *(char *)((longlong)param_1 + 0x94) == '\x03')) {
    uVar4 = 1;
  }
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_58 = uVar5;
  local_30 = uVar4;
  if (uVar4 == 0) {
    local_48 = 0;
  }
  else {
    pvVar6 = TlsGetValue(DAT_146b7bf70);
    if (pvVar6 == (LPVOID)0x0) {
      pvVar6 = DAT_146b7bf68;
    }
    uVar11 = uVar4 * 4 + 0x7f & 0xffffff80;
    lVar1 = *(longlong *)((longlong)pvVar6 + 0x18);
    uVar9 = (int)uVar11 + lVar1;
    if ((*(int *)((longlong)pvVar6 + 0x10) < (int)uVar11) ||
       (*(ulonglong *)((longlong)pvVar6 + 0x20) < uVar9)) {
      local_48 = FUN_1437138c0(pvVar6,uVar11);
    }
    else {
      *(ulonglong *)((longlong)pvVar6 + 0x18) = uVar9;
      local_48 = lVar1;
    }
  }
  local_3c = uVar4 | 0x80000000;
  local_38 = local_48;
  (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,&local_58,&local_48);
  if (param_1[5] == 0) {
    pvVar6 = TlsGetValue(DAT_146b7bf70);
    if (pvVar6 == (LPVOID)0x0) {
      pvVar6 = DAT_146b7bf68;
    }
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar6 + 0x58),0x70);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7[1] = 0;
      *(undefined4 *)(puVar7 + 2) = 0x1ffff;
      *puVar7 = hkaiConvexSilhouetteSet::vftable;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x24) = 0x80000000;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x34) = 0x80000000;
    }
    if (puVar7 != (undefined8 *)param_1[5]) {
      if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      param_1[5] = (longlong)puVar7;
    }
  }
  FUN_143833020(param_1[5],&local_58,&local_48,param_2,param_3 + 0x10);
  uVar4 = local_30;
  lVar2 = local_38;
  lVar1 = param_1[5];
  if (local_38 == local_48) {
    local_40 = 0;
  }
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  uVar4 = uVar4 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar6 + 0x10) < (int)uVar4) ||
      ((int)uVar4 + lVar2 != *(longlong *)((longlong)pvVar6 + 0x18))) ||
     (*(longlong *)((longlong)pvVar6 + 0x28) == lVar2)) {
    FUN_143713ff0(pvVar6,lVar2);
  }
  else {
    *(longlong *)((longlong)pvVar6 + 0x18) = lVar2;
  }
  uVar8 = FUN_143703a50();
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar8,local_48,4,local_3c & 0x3fffffff);
  }
  local_48 = 0;
  local_3c = 0x80000000;
  if (-1 < (int)uVar10) {
    FUN_143702e10(&PTR_vftable_1467f0638,uVar5,0x10,uVar10 & 0x3fffffff);
  }
  return lVar1;
}



// FUNCTION 143832ab0 FUN_143832ab0 body=677 status=ok
// SIG undefined FUN_143832ab0(void)

void FUN_143832ab0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  uint local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_70;
  int local_68;
  uint local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  cVar2 = *(char *)(param_1 + 0x94);
  iVar10 = *(int *)(param_1 + 0x88);
  bVar16 = cVar2 == '\x02';
  if ((iVar10 == 0) || (iVar9 = iVar10, cVar2 == '\x03')) {
    iVar9 = 1;
  }
  uVar11 = 0;
  if ((iVar10 == 0) || (cVar2 == '\x03')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  local_58 = *(undefined4 *)(param_1 + 0x20);
  local_48 = *(undefined4 *)(param_1 + 0x90);
  uVar15 = uVar11;
  local_res10 = param_2;
  local_res18 = param_3;
  uStack_54 = local_58;
  uStack_50 = local_58;
  uStack_4c = local_58;
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  if (0 < iVar9) {
    do {
      if (bVar16) goto LAB_143832d0e;
      if (bVar6) {
        iVar10 = *(int *)(param_1 + 0x78);
      }
      else {
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x80) + uVar11 * 4);
      }
      local_70 = 0;
      local_68 = 0;
      local_64 = 0x80000000;
      local_res8[0] = 0x80;
      local_70 = FUN_143702d60(&PTR_vftable_1467f0638,0x10,local_res8);
      local_68 = 0x80;
      local_64 = 0x80000000;
      if (local_res8[0] != 0) {
        local_64 = local_res8[0];
      }
      iVar7 = FUN_143855e30((longlong)(int)uVar15 * 0x10 + *(longlong *)(param_1 + 0x70),iVar10,
                            local_res18,local_res10,&local_58,&local_48,&local_70);
      if (((iVar7 == 0) ||
          ((int)((*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff) - (int)param_4[1]) < local_68))
         || ((int)((*(uint *)((longlong)param_5 + 0xc) & 0x3fffffff) - (int)param_5[1]) < 1)) {
        bVar16 = true;
        *(undefined4 *)(param_4 + 1) = 0;
        *(undefined4 *)(param_5 + 1) = 0;
      }
      else {
        uVar12 = 0;
        uVar14 = uVar12;
        if (0 < local_68) {
          do {
            uVar13 = (int)uVar14 + 1;
            puVar8 = (undefined4 *)((longlong)(int)param_4[1] * 0x10 + *param_4);
            puVar1 = (undefined4 *)(uVar12 + local_70);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            *puVar8 = *puVar1;
            puVar8[1] = uVar3;
            puVar8[2] = uVar4;
            puVar8[3] = uVar5;
            *(int *)(param_4 + 1) = (int)param_4[1] + 1;
            uVar12 = uVar12 + 0x10;
            uVar14 = (ulonglong)uVar13;
          } while ((int)uVar13 < local_68);
        }
        *(int *)(*param_5 + (longlong)(int)param_5[1] * 4) = local_68;
        *(int *)(param_5 + 1) = (int)param_5[1] + 1;
        uVar15 = (ulonglong)(uint)((int)uVar15 + iVar10);
      }
      local_68 = 0;
      if (-1 < (int)local_64) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_70,0x10,local_64 & 0x3fffffff);
      }
      uVar11 = uVar11 + 1;
      local_70 = 0;
      local_64 = 0x80000000;
    } while ((longlong)uVar11 < (longlong)iVar9);
  }
  if (bVar16) {
LAB_143832d0e:
    FUN_1438554b0(local_res18,param_1 + 0x50,local_res10,&local_58,param_4);
    *(int *)(*param_5 + (longlong)(int)param_5[1] * 4) = (int)param_4[1];
    *(int *)(param_5 + 1) = (int)param_5[1] + 1;
  }
  return;
}



// FUNCTION 143832d60 FUN_143832d60 body=391 status=ok
// SIG undefined FUN_143832d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143832d60(longlong param_1,float *param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  
  local_88 = _DAT_1467f08d0;
  iVar1 = *(int *)(param_1 + 0x78);
  lVar8 = (longlong)iVar1;
  local_78._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  local_78._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  local_78._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  if ((0x7f < iVar1) && (*(char *)(param_1 + 0x94) != '\x02')) {
    FUN_143717ab0(param_2,param_1 + 0x50,local_88);
    *(undefined8 *)*param_3 = local_88._0_8_;
    *(undefined8 *)(*param_3 + 8) = local_88._8_8_;
    *(undefined8 *)param_3[1] = local_78._0_8_;
    *(undefined8 *)(param_3[1] + 8) = local_78._8_8_;
    return;
  }
  auVar19 = _DAT_1467f08d0;
  if (0 < iVar1) {
    pfVar9 = *(float **)(param_1 + 0x70);
    fVar4 = *param_2;
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    fVar7 = param_2[3];
    do {
      fVar14 = *pfVar9;
      fVar16 = pfVar9[1];
      fVar17 = pfVar9[2];
      fVar18 = pfVar9[3];
      pfVar9 = pfVar9 + 4;
      fVar10 = fVar4 * fVar14;
      fVar11 = fVar5 * fVar16;
      fVar12 = fVar6 * fVar17;
      fVar13 = (fVar11 + fVar10 + fVar12) * fVar4 + (fVar7 * fVar7 - _DAT_1467f07e0) * fVar14 +
               (fVar17 * fVar5 - fVar6 * fVar16) * fVar7;
      fVar15 = (fVar11 + fVar10 + fVar12) * fVar5 + (fVar7 * fVar7 - fRam00000001467f07e4) * fVar16
               + (fVar14 * fVar6 - fVar4 * fVar17) * fVar7;
      fVar17 = (fVar11 + fVar10 + fVar12) * fVar6 + (fVar7 * fVar7 - fRam00000001467f07e8) * fVar17
               + (fVar16 * fVar4 - fVar5 * fVar14) * fVar7;
      fVar18 = (fVar11 + fVar10 + fVar12) * fVar7 + (fVar7 * fVar7 - fRam00000001467f07ec) * fVar18
               + (fVar18 * fVar7 - fVar7 * fVar18) * fVar7;
      fVar14 = fVar13 + fVar13 + param_2[4];
      fVar16 = fVar15 + fVar15 + param_2[5];
      fVar17 = fVar17 + fVar17 + param_2[6];
      fVar18 = fVar18 + fVar18 + param_2[7];
      auVar2._4_4_ = fVar16;
      auVar2._0_4_ = fVar14;
      auVar2._8_4_ = fVar17;
      auVar2._12_4_ = fVar18;
      auVar19 = minps(auVar19,auVar2);
      auVar3._4_4_ = fVar16;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fVar17;
      auVar3._12_4_ = fVar18;
      local_78 = maxps(local_78,auVar3);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *param_3 = auVar19;
  param_3[1] = local_78;
  return;
}



// FUNCTION 143832ef0 FUN_143832ef0 body=16 status=ok
// SIG undefined FUN_143832ef0(void)

void FUN_143832ef0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *param_2 = *(undefined8 *)(param_1 + 0x50);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  param_2[2] = *(undefined8 *)(param_1 + 0x60);
  param_2[3] = uVar1;
  return;
}



// FUNCTION 143832f00 FUN_143832f00 body=266 status=ok
// SIG undefined FUN_143832f00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143832f00(longlong param_1,float *param_2,longlong *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar10 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  iVar11 = *(int *)(param_1 + 0x78);
  if ((int)uVar10 < iVar11) {
    iVar3 = uVar10 * 2;
    iVar2 = iVar11;
    if (iVar11 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar2,0x10);
  }
  *(int *)(param_3 + 1) = iVar11;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar12 = 0;
    do {
      fVar4 = *param_2;
      fVar5 = param_2[1];
      fVar6 = param_2[2];
      fVar19 = param_2[3];
      iVar11 = iVar11 + 1;
      pfVar1 = (float *)(lVar12 + *(longlong *)(param_1 + 0x70));
      fVar18 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar13 = fVar4 * fVar18;
      fVar14 = fVar5 * fVar7;
      fVar15 = fVar6 * fVar8;
      fVar16 = (fVar14 + fVar13 + fVar15) * fVar4 + (fVar19 * fVar19 - _DAT_1467f07e0) * fVar18 +
               (fVar8 * fVar5 - fVar6 * fVar7) * fVar19;
      fVar17 = (fVar14 + fVar13 + fVar15) * fVar5 + (fVar19 * fVar19 - fRam00000001467f07e4) * fVar7
               + (fVar18 * fVar6 - fVar4 * fVar8) * fVar19;
      fVar18 = (fVar14 + fVar13 + fVar15) * fVar6 + (fVar19 * fVar19 - fRam00000001467f07e8) * fVar8
               + (fVar7 * fVar4 - fVar5 * fVar18) * fVar19;
      fVar19 = (fVar14 + fVar13 + fVar15) * fVar19 +
               (fVar19 * fVar19 - fRam00000001467f07ec) * fVar9 +
               (fVar9 * fVar19 - fVar19 * fVar9) * fVar19;
      fVar4 = param_2[5];
      fVar5 = param_2[6];
      fVar6 = param_2[7];
      pfVar1 = (float *)(lVar12 + *param_3);
      *pfVar1 = fVar16 + fVar16 + param_2[4];
      pfVar1[1] = fVar17 + fVar17 + fVar4;
      pfVar1[2] = fVar18 + fVar18 + fVar5;
      pfVar1[3] = fVar19 + fVar19 + fVar6;
      lVar12 = lVar12 + 0x10;
    } while (iVar11 < *(int *)(param_1 + 0x78));
  }
  return;
}



// FUNCTION 143833010 FUN_143833010 body=11 status=ok
// SIG undefined FUN_143833010(void)

bool FUN_143833010(longlong param_1)

{
  return (*(byte *)(param_1 + 0x95) & 3) != 0;
}



// FUNCTION 143833020 FUN_143833020 body=255 status=ok
// SIG undefined FUN_143833020(void)

void FUN_143833020(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar5 = *param_2;
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar4,param_1 + 0x18,iVar1,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_1 + 0x18),uVar5);
  *(int *)(param_1 + 0x20) = iVar1;
  iVar1 = (int)param_3[1];
  uVar5 = FUN_143703a50();
  uVar6 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  if ((int)uVar6 < iVar1) {
    iVar3 = uVar6 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_14370c310(uVar5,param_1 + 0x28,iVar2,4);
  }
  uVar7 = 0;
  *(int *)(param_1 + 0x30) = iVar1;
  uVar8 = uVar7;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*param_3 + uVar7 * 4);
      *(int *)(*(longlong *)(param_1 + 0x28) + uVar7 * 4) = (int)uVar8;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)(uint)((int)uVar8 + iVar2);
    } while ((longlong)uVar7 < (longlong)iVar1);
  }
  uVar5 = param_4[1];
  *(undefined8 *)(param_1 + 0x40) = *param_4;
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar5 = param_4[3];
  *(undefined8 *)(param_1 + 0x50) = param_4[2];
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  uVar5 = param_5[1];
  *(undefined8 *)(param_1 + 0x60) = *param_5;
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  return;
}



// FUNCTION 143833120 FUN_143833120 body=54 status=ok
// SIG undefined FUN_143833120(void)

void FUN_143833120(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x95) = 0;
  if (*(char *)(param_1 + 0x96) != '\0') {
    *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) | 1;
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
  if (*(char *)(param_1 + 0x97) != '\0') {
    *(byte *)(param_1 + 0x95) = *(byte *)(param_1 + 0x95) | 2;
    *(undefined1 *)(param_1 + 0x97) = 0;
  }
  return;
}



// FUNCTION 143833160 IsDedicated body=11 status=ok
// SIG undefined IsDedicated(void)

bool FOnlineSubsystemImpl::IsDedicated(longlong param_1)

{
  return *(char *)(param_1 + 0x98) != '\0';
}



// FUNCTION 143833170 FUN_143833170 body=57 status=ok
// SIG undefined FUN_143833170(void)

undefined8 * FUN_143833170(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_1438326a0();
  *param_1 = hkaiPhysicsBodySilhouetteGeneratorBase::vftable;
  uVar1 = uRam00000001467f071c;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  return param_1;
}



// FUNCTION 1438331b0 FUN_1438331b0 body=15 status=ok
// SIG undefined FUN_1438331b0(void)

void FUN_1438331b0(undefined8 *param_1)

{
  *param_1 = hkaiPhysicsBodySilhouetteGeneratorBase::vftable;
  FUN_143832730();
  return;
}



// FUNCTION 1438331c0 FUN_1438331c0 body=136 status=ok
// SIG undefined FUN_1438331c0(void)

longlong FUN_1438331c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438331b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0xb0;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 143833250 thunk_FUN_143833280 body=5 status=ok
// SIG undefined thunk_FUN_143833280(void)

void thunk_FUN_143833280(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,auStack_18,auStack_28);
    (**(code **)(*param_1 + 0x78))(param_1,auStack_38);
    FUN_1438332e0(param_1,auStack_18,auStack_28,auStack_38);
  }
  return;
}



// FUNCTION 143833260 FUN_143833260 body=27 status=ok
// SIG undefined FUN_143833260(void)

void FUN_143833260(undefined8 param_1)

{
  FUN_143833120();
  FUN_143833280(param_1);
  return;
}



// FUNCTION 143833280 FUN_143833280 body=84 status=ok
// SIG undefined FUN_143833280(void)

void FUN_143833280(longlong *param_1)

{
  char cVar1;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x70))(param_1,local_18,local_28);
    (**(code **)(*param_1 + 0x78))(param_1,local_38);
    FUN_1438332e0(param_1,local_18,local_28,local_38);
  }
  return;
}



// FUNCTION 1438332e0 FUN_1438332e0 body=41 status=ok
// SIG undefined FUN_1438332e0(void)

void FUN_1438332e0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar3 = param_3[1];
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  *(undefined4 *)(param_1 + 0xa0) = *param_4;
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xac);
  return;
}



// FUNCTION 143833310 FUN_143833310 body=204 status=ok
// SIG undefined FUN_143833310(void)

bool FUN_143833310(longlong param_1,undefined4 *param_2,undefined8 param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_res10 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  
  local_res10[0] = *param_2;
  cVar1 = FOnlineSubsystemImpl::IsDedicated(param_1,local_res10);
  if (cVar1 == '\0') {
    return false;
  }
  FUN_1438895c0(param_3,param_1 + 0x40,param_1 + 0xa0,&local_18);
  fVar2 = *param_4 * local_18;
  fVar3 = param_4[1] * fStack_14;
  fVar4 = param_4[2] * fStack_10;
  local_18 = local_18 + (0.0 - (fVar3 + fVar2 + fVar4)) * *param_4;
  fStack_14 = fStack_14 + (0.0 - (fVar3 + fVar2 + fVar4)) * param_4[1];
  fStack_10 = fStack_10 + (0.0 - (fVar3 + fVar2 + fVar4)) * param_4[2];
  return fStack_14 * fStack_14 + local_18 * local_18 + fStack_10 * fStack_10 <
         *(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xac);
}



// FUNCTION 1438333e0 ClusterGraphConnection body=24 status=ok
// SIG undefined ClusterGraphConnection(void)

undefined8 * hkaiStreamingSet::ClusterGraphConnection::ClusterGraphConnection(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xbf80bf80;
  return param_1;
}



// FUNCTION 143833400 FUN_143833400 body=54 status=ok
// SIG undefined FUN_143833400(void)

undefined8 * FUN_143833400(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  return param_1;
}



// FUNCTION 143833440 FUN_143833440 body=12 status=ok
// SIG undefined FUN_143833440(void)

longlong FUN_143833440(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 143833450 FUN_143833450 body=607 status=ok
// SIG undefined FUN_143833450(void)

undefined8 * FUN_143833450(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshClearanceCache::vftable;
  puVar4 = (undefined4 *)0x0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x30);
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar5 = local_res8[0];
  puVar3 = puVar4;
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,4,local_res8);
  }
  param_1[5] = puVar3;
  *(int *)(param_1 + 6) = iVar5;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x34) = iVar5;
  if (0 < iVar1) {
    lVar6 = *(longlong *)(param_2 + 0x28) - (longlong)puVar3;
    do {
      *puVar3 = *(undefined4 *)(lVar6 + (longlong)puVar3);
      puVar3 = puVar3 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x40);
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar5 = local_res8[0];
  puVar3 = puVar4;
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,1,local_res8);
  }
  param_1[7] = puVar3;
  *(int *)(param_1 + 8) = iVar5;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x44) = iVar5;
  if (0 < iVar1) {
    lVar6 = *(longlong *)(param_2 + 0x38) - (longlong)puVar3;
    do {
      *(undefined1 *)puVar3 = *(undefined1 *)(lVar6 + (longlong)puVar3);
      puVar3 = (undefined4 *)((longlong)puVar3 + 1);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x58);
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar5 = local_res8[0];
  puVar3 = puVar4;
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,2,local_res8);
  }
  param_1[10] = puVar3;
  *(int *)(param_1 + 0xb) = iVar5;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x5c) = iVar5;
  if (0 < iVar1) {
    lVar6 = *(longlong *)(param_2 + 0x50) - (longlong)puVar3;
    do {
      *(undefined2 *)puVar3 = *(undefined2 *)(lVar6 + (longlong)puVar3);
      puVar3 = (undefined4 *)((longlong)puVar3 + 2);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x68);
  lVar7 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar5 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar4 = (undefined4 *)FUN_143702d60(uVar2,1,local_res8);
  }
  param_1[0xc] = puVar4;
  *(int *)(param_1 + 0xd) = iVar5;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x6c) = iVar5;
  if (0 < iVar1) {
    lVar6 = *(longlong *)(param_2 + 0x60) - (longlong)puVar4;
    do {
      *(undefined1 *)puVar4 = *(undefined1 *)(lVar6 + (longlong)puVar4);
      puVar4 = (undefined4 *)((longlong)puVar4 + 1);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 1438336b0 FUN_1438336b0 body=14 status=ok
// SIG undefined FUN_1438336b0(void)

void FUN_1438336b0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if ((short)plVar2[2] != 0) {
    uVar1 = *(uint *)(plVar2 + 2) - 0x10000;
    LOCK();
    bVar6 = *(uint *)(plVar2 + 2) == *(uint *)(plVar2 + 2);
    if (bVar6) {
      *(uint *)(plVar2 + 2) = uVar1;
    }
    UNLOCK();
    uVar4 = 0;
    while (!bVar6) {
      for (iVar5 = 1 << ((byte)uVar4 & 0x1f); 0 < iVar5; iVar5 = iVar5 + -1) {
      }
      uVar3 = uVar4 + 1;
      if (7 < uVar4) {
        uVar3 = uVar4;
      }
      uVar1 = *(uint *)(plVar2 + 2) - 0x10000;
      LOCK();
      bVar6 = *(uint *)(plVar2 + 2) == *(uint *)(plVar2 + 2);
      if (bVar6) {
        *(uint *)(plVar2 + 2) = uVar1;
      }
      UNLOCK();
      uVar4 = uVar3;
    }
    if ((uVar1 & 0xffff0000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014370c1b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1438336c0 FUN_1438336c0 body=253 status=ok
// SIG undefined FUN_1438336c0(void)

void FUN_1438336c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkaiNavMeshClearanceCache::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar1,param_1[0xc],1,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar1,param_1[10],2,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],1,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],4,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438337c0 FUN_1438337c0 body=84 status=ok
// SIG undefined FUN_1438337c0(void)

undefined8 * FUN_1438337c0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  if (param_2[2] != 0) {
    FUN_14370c030();
  }
  if (param_1[2] != 0) {
    FUN_14370c150();
  }
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 143833820 FUN_143833820 body=361 status=ok
// SIG undefined FUN_143833820(void)

longlong FUN_143833820(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1437182e0(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  iVar1 = *(int *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x34) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x28,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x28),uVar2,iVar1);
  *(int *)(param_1 + 0x30) = iVar1;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x44) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x38,iVar1,1);
  }
  FUN_143745160(*(undefined8 *)(param_1 + 0x38),uVar2,iVar1);
  *(int *)(param_1 + 0x40) = iVar1;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  iVar1 = *(int *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x50,iVar1,2);
  }
  FUN_143795730(*(undefined8 *)(param_1 + 0x50),uVar2,iVar1);
  *(int *)(param_1 + 0x58) = iVar1;
  iVar1 = *(int *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 0x60,iVar1,1);
  }
  FUN_143745160(*(undefined8 *)(param_1 + 0x60),uVar2,iVar1);
  *(int *)(param_1 + 0x68) = iVar1;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  return param_1;
}



// FUNCTION 143833990 FUN_143833990 body=139 status=ok
// SIG undefined FUN_143833990(void)

longlong FUN_143833990(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438336c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x78;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 143833a20 FUN_143833a20 body=77 status=ok
// SIG undefined FUN_143833a20(void)

undefined1 FUN_143833a20(longlong param_1,longlong param_2)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 0x18);
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x10) + 0x18);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    return 0;
  }
  FUN_143833820(param_2);
  FUN_1438356f0(param_2,fVar2,1);
  return 1;
}



// FUNCTION 143833a70 FUN_143833a70 body=472 status=ok
// SIG undefined FUN_143833a70(void)

void FUN_143833a70(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  byte local_res8 [8];
  undefined4 *local_58;
  uint local_50;
  uint local_4c;
  undefined4 *local_48;
  uint local_40;
  int local_38;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x180);
  lVar4 = thunk_FUN_14387be90(param_2,uVar1);
  lVar8 = 0;
  iVar2 = *(int *)(lVar4 + 0x18);
  local_58 = (undefined4 *)0x0;
  local_50 = 0;
  local_4c = 0x80000000;
  uVar9 = iVar2 + 0x1f >> 5;
  local_40 = uVar9;
  if (uVar9 == 0) {
    local_48 = (undefined4 *)0x0;
  }
  else {
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    uVar12 = uVar9 * 4 + 0x7f & 0xffffff80;
    local_48 = *(undefined4 **)((longlong)pvVar5 + 0x18);
    if ((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar12) ||
       (*(ulonglong *)((longlong)pvVar5 + 0x20) <
        (ulonglong)((longlong)(int)uVar12 + (longlong)local_48))) {
      local_48 = (undefined4 *)FUN_1437138c0(pvVar5,uVar12);
    }
    else {
      *(longlong *)((longlong)pvVar5 + 0x18) = (longlong)(int)uVar12 + (longlong)local_48;
    }
  }
  local_4c = uVar9 | 0x80000000;
  local_58 = local_48;
  local_38 = iVar2;
  uVar6 = FUN_143703a50();
  if ((int)(local_4c & 0x3fffffff) < (int)uVar9) {
    uVar3 = (local_4c & 0x3fffffff) * 2;
    uVar12 = uVar9;
    if ((int)uVar9 < (int)uVar3) {
      uVar12 = uVar3;
    }
    FUN_14370c310(uVar6,&local_58,uVar12,4);
  }
  if (-1 < (int)(uVar9 - 1)) {
    puVar10 = local_58;
    for (uVar7 = (ulonglong)uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x20);
  local_50 = uVar9;
  if (0 < lVar4) {
    do {
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar8);
      FUN_14387c1a0(param_2,local_res8,uVar1,*puVar11,*(undefined4 *)(puVar11 + 1),
                    *(undefined4 *)((longlong)puVar11 + 0xc));
      if (local_res8[0] < 0xfe) {
        if (*(char *)(*(longlong *)(param_3 + 0x30) + 0x10 + (ulonglong)local_res8[0] * 0x18) ==
            '\x01') {
          uVar6 = *(undefined8 *)(*(longlong *)(param_3 + 0x30) + (ulonglong)local_res8[0] * 0x18);
        }
        else {
          uVar6 = FUN_143833c50();
        }
        FUN_143833a20(puVar11,uVar6);
        local_58[local_res8[0] >> 5] = local_58[local_res8[0] >> 5] | 1 << (local_res8[0] & 0x1f);
      }
      lVar8 = lVar8 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  FUN_1437f12e0(&local_58);
  return;
}



// FUNCTION 143833c50 FUN_143833c50 body=357 status=ok
// SIG undefined FUN_143833c50(void)

longlong FUN_143833c50(longlong *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  LOCK();
  UNLOCK();
  lVar2 = param_1[1];
  if (param_1[1] == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x40);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_143718910(lVar2);
    }
    LOCK();
    lVar4 = param_1[1];
    bVar5 = lVar4 == 0;
    if (bVar5) {
      param_1[1] = lVar3;
      lVar4 = 0;
    }
    UNLOCK();
    lVar2 = lVar3;
    if ((!bVar5) && (lVar2 = lVar4, lVar3 != 0)) {
      FUN_143718950(lVar3);
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),lVar3,0x40);
    }
  }
  FUN_143718980(lVar2);
  LOCK();
  UNLOCK();
  if ((char)param_1[2] == '\0') {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    if (*(short *)(*param_1 + 0x12) != 1) {
      thunk_FUN_143719c70(0x21dbd06c);
      lVar3 = *param_1;
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      lVar4 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar1 + 0x58),0x78);
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_143833450(lVar4,lVar3);
      }
      thunk_FUN_143719c70(0x25659f08);
      LOCK();
      UNLOCK();
      if (*param_1 != 0) {
        FUN_14370c150();
      }
      *param_1 = lVar3;
    }
    LOCK();
    UNLOCK();
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_143718b00(lVar2);
  return *param_1;
}



// FUNCTION 143833dc0 FUN_143833dc0 body=205 status=ok
// SIG undefined FUN_143833dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143833dc0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkaiNavMesh::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0x18] = 0;
  uVar1 = uRam00000001467f08d8;
  param_1[0x12] = _DAT_1467f08d0;
  param_1[0x13] = uVar1;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x12) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0x94) ^ 0x80000000;
  *(uint *)(param_1 + 0x15) = *(uint *)(param_1 + 0x13) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0x9c) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 1;
  return param_1;
}



// FUNCTION 143833e90 FUN_143833e90 body=924 status=ok
// SIG undefined FUN_143833e90(void)

void FUN_143833e90(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavMesh::vftable;
  thunk_FUN_143719c70(0x6071fa79);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x10,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  thunk_FUN_143719c70(0x7ab58a07);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],0x14,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  thunk_FUN_143719c70(0x3fab8bde);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],0x10,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  thunk_FUN_143719c70(0x8c40af0e);
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(*(int *)(param_1 + 10) + -1);
  if (-1 < *(int *)(param_1 + 10) + -1) {
    plVar2 = (longlong *)(param_1[9] + 8 + lVar3 * 0x10);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],0x10,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],4,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar1,param_1[0xd],4,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  if (param_1[0x18] != 0) {
    FUN_14370c150();
  }
  param_1[0x18] = 0;
  thunk_FUN_143719c70(0x6b18a8ba);
  if (param_1[0x18] != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar1,param_1[0xd],4,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],4,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(*(int *)(param_1 + 10) + -1);
  if (-1 < *(int *)(param_1 + 10) + -1) {
    plVar2 = (longlong *)(param_1[9] + 8 + lVar3 * 0x10);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],0x10,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],0x10,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],0x14,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x10,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143834230 FUN_143834230 body=139 status=ok
// SIG undefined FUN_143834230(void)

longlong FUN_143834230(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143833e90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xd0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
    }
  }
  return param_1;
}



// FUNCTION 1438342c0 FUN_1438342c0 body=118 status=ok
// SIG undefined FUN_1438342c0(void)

undefined8 * FUN_1438342c0(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshClearanceCache::vftable;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_143835320(param_1);
  return param_1;
}



// FUNCTION 143834340 FUN_143834340 body=148 status=ok
// SIG undefined FUN_143834340(void)

longlong FUN_143834340(longlong param_1,float param_2)

{
  float fVar1;
  
  param_2 = param_2 * *(float *)(param_1 + 0x20);
  if (254.0 <= param_2) {
    param_2 = 254.0;
  }
  fVar1 = ((param_2 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  fVar1 = (float)(~-(uint)(8388608.0 < ABS(param_2)) &
                  (uint)((float)(int)-(uint)(param_2 < fVar1) + fVar1) |
                 -(uint)(8388608.0 < ABS(param_2)) & (uint)param_2);
  return (longlong)((float)(-(uint)(fVar1 != param_2) & 0x3f800000) + fVar1);
}



// FUNCTION 1438343e0 FUN_1438343e0 body=61 status=ok
// SIG undefined FUN_1438343e0(void)

void FUN_1438343e0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong local_18;
  longlong lStack_10;
  
  *(int *)(param_3 + 1) = (int)param_2[1];
  local_18 = *param_2;
  lStack_10 = local_18 + (longlong)(int)param_2[1] * 4;
  FUN_143834420((undefined4)local_18,&local_18,*param_3);
  return;
}



// FUNCTION 143834420 FUN_143834420 body=262 status=ok
// SIG undefined FUN_143834420(void)

void FUN_143834420(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar4 = *param_2;
  lVar8 = 0;
  fVar1 = *(float *)(param_1 + 0x20);
  lVar9 = (longlong)(int)(param_2[1] - lVar4 >> 2);
  if (3 < lVar9) {
    pfVar7 = (float *)(lVar4 + 8);
    do {
      fVar2 = pfVar7[-1];
      bVar5 = (byte)(longlong)(fVar1 * pfVar7[-2]);
      bVar6 = 0xfe;
      if (bVar5 < 0xfe) {
        bVar6 = bVar5;
      }
      *(byte *)(param_3 + lVar8) = bVar6;
      fVar3 = *pfVar7;
      bVar5 = (byte)(longlong)(fVar1 * fVar2);
      bVar6 = 0xfe;
      if (bVar5 < 0xfe) {
        bVar6 = bVar5;
      }
      *(byte *)(param_3 + 1 + lVar8) = bVar6;
      fVar2 = pfVar7[1];
      bVar5 = (byte)(longlong)(fVar1 * fVar3);
      bVar6 = 0xfe;
      if (bVar5 < 0xfe) {
        bVar6 = bVar5;
      }
      *(byte *)(param_3 + 2 + lVar8) = bVar6;
      bVar5 = (byte)(longlong)(fVar1 * fVar2);
      bVar6 = 0xfe;
      if (bVar5 < 0xfe) {
        bVar6 = bVar5;
      }
      *(byte *)(param_3 + 3 + lVar8) = bVar6;
      lVar8 = lVar8 + 4;
      pfVar7 = pfVar7 + 4;
    } while (lVar8 < lVar9 + -3);
  }
  for (; lVar8 < lVar9; lVar8 = lVar8 + 1) {
    bVar5 = (byte)(longlong)(fVar1 * *(float *)(lVar4 + lVar8 * 4));
    bVar6 = 0xfe;
    if (bVar5 < 0xfe) {
      bVar6 = bVar5;
    }
    *(byte *)(lVar8 + param_3) = bVar6;
  }
  return;
}



// FUNCTION 143834530 FUN_143834530 body=55 status=ok
// SIG undefined FUN_143834530(void)

float * FUN_143834530(longlong param_1,float *param_2,undefined2 param_3)

{
  param_2[1] = (float)(byte)((ushort)param_3 >> 8) * *(float *)(param_1 + 0x1c);
  *param_2 = (float)(byte)param_3 * 0.0039525693;
  return param_2;
}



// FUNCTION 143834570 FUN_143834570 body=61 status=ok
// SIG undefined FUN_143834570(void)

void FUN_143834570(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong local_18;
  longlong lStack_10;
  
  *(int *)(param_3 + 1) = (int)param_2[1];
  local_18 = *param_2;
  lStack_10 = local_18 + (longlong)(int)param_2[1] * 8;
  FUN_1438345b0((undefined4)local_18,&local_18,*param_3);
  return;
}



// FUNCTION 1438345b0 FUN_1438345b0 body=548 status=ok
// SIG undefined FUN_1438345b0(void)

void FUN_1438345b0(longlong param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 local_res8;
  float local_res10;
  float fStackX_14;
  
  lVar3 = *param_2;
  lVar6 = 0;
  fVar1 = *(float *)(param_1 + 0x20);
  lVar10 = (longlong)(int)(param_2[1] - lVar3 >> 3);
  cVar4 = '\x01';
  if (3 < lVar10) {
    puVar8 = (undefined2 *)(param_3 + 4);
    lVar9 = (lVar10 - 4U >> 2) + 1;
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    lVar6 = lVar9 * 4;
    do {
      fStackX_14 = (float)((ulonglong)puVar7[-2] >> 0x20);
      cVar5 = (char)(longlong)(fStackX_14 * fVar1);
      if ((0.0 < fStackX_14) && (cVar5 == '\0')) {
        cVar5 = cVar4;
      }
      local_res10 = (float)puVar7[-2];
      uVar2 = puVar7[-1];
      fStackX_14 = (float)((ulonglong)uVar2 >> 0x20);
      local_res8 = CONCAT11(cVar5,(char)(longlong)(local_res10 * 253.0 + 0.5));
      puVar8[-2] = local_res8;
      cVar5 = (char)(longlong)(fStackX_14 * fVar1);
      if ((0.0 < fStackX_14) && (cVar5 == '\0')) {
        cVar5 = cVar4;
      }
      local_res10 = (float)uVar2;
      uVar2 = *puVar7;
      fStackX_14 = (float)((ulonglong)uVar2 >> 0x20);
      local_res8 = CONCAT11(cVar5,(char)(longlong)(local_res10 * 253.0 + 0.5));
      puVar8[-1] = local_res8;
      cVar5 = (char)(longlong)(fStackX_14 * fVar1);
      if ((0.0 < fStackX_14) && (cVar5 == '\0')) {
        cVar5 = cVar4;
      }
      local_res10 = (float)uVar2;
      uVar2 = puVar7[1];
      fStackX_14 = (float)((ulonglong)uVar2 >> 0x20);
      local_res8 = CONCAT11(cVar5,(char)(longlong)(local_res10 * 253.0 + 0.5));
      *puVar8 = local_res8;
      cVar5 = (char)(longlong)(fStackX_14 * fVar1);
      if ((0.0 < fStackX_14) && (cVar5 == '\0')) {
        cVar5 = cVar4;
      }
      local_res10 = (float)uVar2;
      puVar7 = puVar7 + 4;
      local_res8 = CONCAT11(cVar5,(char)(longlong)(local_res10 * 253.0 + 0.5));
      puVar8[1] = local_res8;
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (lVar6 < lVar10) {
    puVar7 = (undefined8 *)(lVar3 + lVar6 * 8);
    do {
      fStackX_14 = (float)((ulonglong)*puVar7 >> 0x20);
      cVar5 = (char)(longlong)(fStackX_14 * fVar1);
      if ((0.0 < fStackX_14) && (cVar5 == '\0')) {
        cVar5 = cVar4;
      }
      local_res10 = (float)*puVar7;
      puVar7 = puVar7 + 1;
      local_res8 = CONCAT11(cVar5,(char)(longlong)(local_res10 * 253.0 + 0.5));
      *(undefined2 *)(param_3 + lVar6 * 2) = local_res8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar10);
  }
  return;
}



// FUNCTION 1438347e0 FUN_1438347e0 body=367 status=ok
// SIG undefined FUN_1438347e0(void)

void FUN_1438347e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar6 = (longlong)(int)param_2[1];
  fVar1 = *(float *)(param_1 + 0x1c);
  lVar4 = *param_3;
  *(int *)(param_3 + 1) = (int)param_2[1];
  lVar5 = *param_2;
  lVar7 = 0;
  if (3 < lVar6) {
    lVar9 = (lVar6 - 4U >> 2) + 1;
    lVar7 = lVar9 * 4;
    puVar8 = (undefined2 *)(lVar5 + 4);
    puVar10 = (undefined8 *)(lVar4 + 0x10);
    do {
      uVar2 = puVar8[-1];
      puVar10[-2] = CONCAT44((float)(byte)((ushort)puVar8[-2] >> 8) * fVar1,
                             (float)(byte)puVar8[-2] * 0.0039525693);
      uVar3 = *puVar8;
      puVar10[-1] = CONCAT44((float)(byte)((ushort)uVar2 >> 8) * fVar1,
                             (float)(byte)uVar2 * 0.0039525693);
      uVar2 = puVar8[1];
      *puVar10 = CONCAT44((float)(byte)((ushort)uVar3 >> 8) * fVar1,
                          (float)(byte)uVar3 * 0.0039525693);
      puVar10[1] = CONCAT44((float)(byte)((ushort)uVar2 >> 8) * fVar1,
                            (float)(byte)uVar2 * 0.0039525693);
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 4;
      puVar10 = puVar10 + 4;
    } while (lVar9 != 0);
  }
  if (lVar7 < lVar6) {
    puVar10 = (undefined8 *)(lVar4 + lVar7 * 8);
    do {
      uVar2 = *(undefined2 *)(lVar5 + lVar7 * 2);
      lVar7 = lVar7 + 1;
      *puVar10 = CONCAT44((float)(byte)((ushort)uVar2 >> 8) * fVar1,
                          (float)(byte)uVar2 * 0.0039525693);
      puVar10 = puVar10 + 1;
    } while (lVar7 < lVar6);
  }
  return;
}



// FUNCTION 143834950 FUN_143834950 body=37 status=ok
// SIG undefined FUN_143834950(void)

int FUN_143834950(longlong param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2);
  cVar1 = *pcVar2;
  iVar3 = param_2;
  while (cVar1 != -1) {
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return iVar3 - param_2;
}



// FUNCTION 143834980 FUN_143834980 body=130 status=ok
// SIG undefined FUN_143834980(void)

void FUN_143834980(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  param_2 = *(int *)(param_1 + 0x58) + param_2;
  uVar4 = FUN_143703a50();
  uVar6 = *(uint *)(param_1 + 0x5c) & 0x3fffffff;
  if ((int)uVar6 < param_2) {
    iVar3 = uVar6 * 2;
    iVar1 = param_2;
    if (param_2 < iVar3) {
      iVar1 = iVar3;
    }
    FUN_14370c310(uVar4,(longlong *)(param_1 + 0x50),iVar1,2);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar7 = (longlong)(param_2 - iVar1);
  lVar5 = 0;
  if (0 < lVar7) {
    do {
      *(undefined2 *)(lVar2 + (longlong)iVar1 * 2 + lVar5 * 2) = DAT_146829350;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  *(int *)(param_1 + 0x58) = param_2;
  return;
}



// FUNCTION 143834a10 FUN_143834a10 body=118 status=ok
// SIG undefined FUN_143834a10(void)

void FUN_143834a10(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  param_2 = *(int *)(param_1 + 0x30) + param_2;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar1 = uVar4 * 2;
    iVar2 = param_2;
    if (param_2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_14370c310(uVar3,(longlong *)(param_1 + 0x28),iVar2,4);
  }
  puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
  iVar2 = param_2 - *(int *)(param_1 + 0x30);
  lVar5 = (longlong)iVar2;
  if (0 < iVar2) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
  }
  *(int *)(param_1 + 0x30) = param_2;
  return;
}



// FUNCTION 143834a90 FUN_143834a90 body=117 status=ok
// SIG undefined FUN_143834a90(void)

void FUN_143834a90(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  param_2 = *(int *)(param_1 + 0x68) + param_2;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x6c) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar1 = uVar4 * 2;
    iVar2 = param_2;
    if (param_2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_14370c310(uVar3,(longlong *)(param_1 + 0x60),iVar2,1);
  }
  iVar2 = param_2 - *(int *)(param_1 + 0x68);
  puVar6 = (undefined1 *)((longlong)*(int *)(param_1 + 0x68) + *(longlong *)(param_1 + 0x60));
  lVar5 = (longlong)iVar2;
  if (0 < iVar2) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar6 = 0xff;
      puVar6 = puVar6 + 1;
    }
  }
  *(int *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 143834b10 FUN_143834b10 body=254 status=ok
// SIG undefined FUN_143834b10(void)

int FUN_143834b10(longlong param_1,int *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  iVar8 = 0;
  iVar7 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4);
  if (uVar1 != 0xffffffff) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (*(char *)((int)uVar1 + lVar2) != -1) {
      pcVar5 = (char *)((int)uVar1 + lVar2);
      iVar7 = iVar8;
      do {
        iVar7 = iVar7 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar5 != -1);
    }
    iVar8 = 1;
    uVar4 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    if (((int)uVar4 < iVar7) && ((int)uVar4 < iVar7)) {
      iVar3 = iVar7;
      if (iVar7 < (int)(uVar4 * 2)) {
        iVar3 = uVar4 * 2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar3,1);
    }
    puVar6 = (undefined1 *)((longlong)(int)param_3[1] + *param_3);
    lVar9 = (longlong)iVar7;
    if (0 < iVar7) {
      lVar10 = (ulonglong)uVar1 - (longlong)puVar6;
      do {
        *puVar6 = puVar6[lVar10 + lVar2];
        puVar6 = puVar6 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    *(int *)(param_3 + 1) = iVar7;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  return iVar8;
}



// FUNCTION 143834c10 FUN_143834c10 body=35 status=ok
// SIG undefined FUN_143834c10(void)

undefined8 FUN_143834c10(longlong param_1,undefined8 param_2,int *param_3)

{
  FUN_143834530(param_1,param_2,
                *(undefined2 *)(*(longlong *)(param_1 + 0x50) + (longlong)*param_3 * 2));
  return param_2;
}



// FUNCTION 143834c40 FUN_143834c40 body=138 status=ok
// SIG undefined FUN_143834c40(void)

void FUN_143834c40(longlong param_1,int *param_2,int param_3,int *param_4,int param_5,
                  longlong *param_6)

{
  *(int *)(param_6 + 1) = param_3 + param_5;
  FGenericPlatformString::Memcpy
            (*param_6,*(longlong *)(param_1 + 0x50) + (longlong)*param_2 * 2,(longlong)param_3 * 2);
  if (0 < param_5) {
    FGenericPlatformString::Memcpy
              (*param_6 + (longlong)param_3 * 2,
               *(longlong *)(param_1 + 0x50) + (longlong)*param_4 * 2,(longlong)param_5 * 2);
  }
  return;
}



// FUNCTION 143834cd0 FUN_143834cd0 body=208 status=ok
// SIG undefined FUN_143834cd0(void)

void FUN_143834cd0(longlong param_1,int param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int local_res8 [2];
  
  uVar3 = 0;
  thunk_FUN_143719c70(0xd9656d7a);
  *(undefined4 *)(param_3 + 1) = 0;
  iVar4 = *(int *)(param_1 + 0x70);
  if (iVar4 < *(int *)(param_1 + 0x30)) {
    do {
      if ((param_2 <= (int)param_3[1]) || (*param_4 < 1)) break;
      local_res8[0] = iVar4;
      iVar1 = FUN_143834dd0(param_1,local_res8);
      if (iVar1 == 0) {
        uVar2 = FUN_143703a50();
        if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar2,param_3,4);
        }
        *(int *)(*param_3 + (longlong)(int)param_3[1] * 4) = iVar4;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + 0x13a92a;
      if (uVar3 < 0x13a92a) {
        thunk_FUN_143719c70(0xc871f47e);
      }
      *param_4 = *param_4 + -1;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  *(int *)(param_1 + 0x70) = iVar4;
  return;
}



// FUNCTION 143834da0 FUN_143834da0 body=40 status=ok
// SIG undefined FUN_143834da0(void)

bool FUN_143834da0(longlong param_1,int *param_2,float *param_3)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x60));
  *param_3 = (float)bVar1 * *(float *)(param_1 + 0x1c);
  return bVar1 != 0xff;
}



// FUNCTION 143834dd0 FUN_143834dd0 body=18 status=ok
// SIG undefined FUN_143834dd0(void)

bool FUN_143834dd0(longlong param_1,int *param_2)

{
  return *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4) != -1;
}



// FUNCTION 143834df0 FUN_143834df0 body=470 status=ok
// SIG undefined FUN_143834df0(void)

void FUN_143834df0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtinitClearanceCache");
  }
  *(undefined4 *)(param_1 + 0x18) = param_3;
  FUN_143835320(param_1);
  lVar7 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar8 = *(int *)(*(longlong *)(param_2 + 0x18) + 0xd8) +
          *(int *)(*(longlong *)(param_2 + 0x18) + 0x20);
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  if ((int)uVar5 < iVar8) {
    iVar2 = uVar5 * 2;
    iVar1 = iVar8;
    if (iVar8 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar4,param_1 + 0x28,iVar1,4);
  }
  puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
  iVar1 = iVar8 - *(int *)(param_1 + 0x30);
  lVar6 = (longlong)iVar1;
  if (0 < iVar1) {
    for (; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar9 = 0xffffffff;
      puVar9 = puVar9 + 1;
    }
  }
  *(int *)(param_1 + 0x30) = iVar8;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  iVar8 = *(int *)(*(longlong *)(param_2 + 0x18) + 0xe8) +
          *(int *)(*(longlong *)(param_2 + 0x18) + 0x30);
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x5c) & 0x3fffffff;
  if ((int)uVar5 < iVar8) {
    iVar2 = uVar5 * 2;
    iVar1 = iVar8;
    if (iVar8 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar4,param_1 + 0x50,iVar1,2);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  lVar6 = *(longlong *)(param_1 + 0x50);
  iVar2 = iVar8 - iVar1;
  if (0 < iVar2) {
    do {
      *(undefined2 *)(lVar6 + (longlong)iVar1 * 2 + lVar7 * 2) = DAT_146829350;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
  }
  *(int *)(param_1 + 0x58) = iVar8;
  *(undefined4 *)(param_1 + 0x68) = 0;
  iVar8 = *(int *)(*(longlong *)(param_2 + 0x18) + 0xf8) +
          *(int *)(*(longlong *)(param_2 + 0x18) + 0x40);
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x6c) & 0x3fffffff;
  if ((int)uVar5 < iVar8) {
    iVar2 = uVar5 * 2;
    iVar1 = iVar8;
    if (iVar8 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar4,param_1 + 0x60,iVar1,1);
  }
  iVar1 = iVar8 - *(int *)(param_1 + 0x68);
  puVar10 = (undefined1 *)((longlong)*(int *)(param_1 + 0x68) + *(longlong *)(param_1 + 0x60));
  lVar7 = (longlong)iVar1;
  if (0 < iVar1) {
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = 0xff;
      puVar10 = puVar10 + 1;
    }
  }
  *(int *)(param_1 + 0x68) = iVar8;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143834fd0 FUN_143834fd0 body=117 status=ok
// SIG undefined FUN_143834fd0(void)

void FUN_143834fd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  lVar2 = lVar3;
  if (0 < (longlong)iVar1) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  lVar2 = lVar3;
  if (0 < (longlong)iVar1) {
    do {
      *(undefined2 *)(*(longlong *)(param_1 + 0x50) + lVar2 * 2) = 0xff00;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (0 < (longlong)iVar1) {
    do {
      *(undefined1 *)(lVar3 + *(longlong *)(param_1 + 0x60)) = 0xff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 143835050 FUN_143835050 body=256 status=ok
// SIG undefined FUN_143835050(void)

void FUN_143835050(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_3 * 4) != -1) {
    iVar3 = FUN_143834950();
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + iVar3 + 1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_3 * 4) = 0xffffffff;
  lVar1 = *(longlong *)(param_2 + 0x18);
  piVar4 = (int *)FUN_1437fb610(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20),
                                lVar1 + 0xb0,lVar1 + 0xd0,lVar1 + 0x90,*param_3);
  iVar3 = *piVar4;
  iVar2 = piVar4[2];
  uVar5 = (ulonglong)iVar3;
  uVar6 = uVar5;
  for (; uVar5 != (longlong)((short)iVar2 + iVar3); uVar5 = uVar5 + 1) {
    *(undefined2 *)(*(longlong *)(param_1 + 0x50) + uVar5 * 2) = 0xff00;
    lVar1 = *(longlong *)(param_2 + 0x18);
    piVar4 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30),
                                  lVar1 + 0xc0,lVar1 + 0xe0,lVar1 + 0x70,(int)uVar6);
    uVar6 = (ulonglong)((int)uVar6 + 1);
    *(undefined1 *)((longlong)*piVar4 + *(longlong *)(param_1 + 0x60)) = 0xff;
  }
  iVar3 = *param_3;
  if (*(int *)(param_1 + 0x70) < *param_3) {
    iVar3 = *(int *)(param_1 + 0x70);
  }
  *(int *)(param_1 + 0x70) = iVar3;
  return;
}



// FUNCTION 143835150 FUN_143835150 body=20 status=ok
// SIG undefined FUN_143835150(void)

undefined4 FUN_143835150(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40) * 2;
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x48)) * 3 < iVar1);
}



// FUNCTION 143835170 FUN_143835170 body=17 status=ok
// SIG undefined FUN_143835170(void)

int FUN_143835170(int param_1)

{
  return param_1 + 1;
}



// FUNCTION 143835190 FUN_143835190 body=398 status=ok
// SIG undefined FUN_143835190(void)

void FUN_143835190(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_18;
  int local_10;
  uint local_c;
  
  iVar9 = *(int *)(param_1 + 0x40);
  lVar10 = 0;
  lVar5 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x44);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  iVar9 = iVar9 - *(int *)(param_1 + 0x48);
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  uVar7 = FUN_143703a50();
  if ((int)(local_c & 0x3fffffff) < iVar9) {
    iVar6 = (local_c & 0x3fffffff) * 2;
    if (iVar9 < iVar6) {
      iVar9 = iVar6;
    }
    FUN_14370c310(uVar7,&local_18,iVar9,1);
  }
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x30);
    do {
      iVar6 = local_10;
      iVar9 = *(int *)(lVar10 + *(longlong *)(param_1 + 0x28));
      if (iVar9 != -1) {
        pcVar8 = (char *)(iVar9 + lVar5);
        while( true ) {
          cVar1 = *pcVar8;
          *(char *)(local_10 + local_18) = cVar1;
          local_10 = local_10 + 1;
          if (cVar1 == -1) break;
          pcVar8 = pcVar8 + 1;
        }
        *(int *)(lVar10 + *(longlong *)(param_1 + 0x28)) = iVar6;
      }
      lVar10 = lVar10 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  lVar10 = *(longlong *)(param_1 + 0x38);
  *(longlong *)(param_1 + 0x38) = local_18;
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  *(int *)(param_1 + 0x40) = local_10;
  uVar4 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_1 + 0x44) = local_c;
  *(undefined4 *)(param_1 + 0x48) = 0;
  local_18 = lVar10;
  local_10 = uVar3;
  local_c = uVar4;
  uVar7 = FUN_143703a50();
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(uVar7,local_18,1,local_c & 0x3fffffff);
  }
  local_18 = 0;
  local_c = 0x80000000;
  uVar7 = FUN_143703a50();
  if (-1 < (int)uVar2) {
    FUN_143702e10(uVar7,lVar5,1,uVar2 & 0x3fffffff);
  }
  return;
}



// FUNCTION 143835320 FUN_143835320 body=52 status=ok
// SIG undefined FUN_143835320(void)

void FUN_143835320(longlong param_1)

{
  undefined4 uVar1;
  
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x18) * 0.003937008;
  uVar1 = FUN_143835170(254.0 / *(float *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 143835360 FUN_143835360 body=169 status=ok
// SIG undefined FUN_143835360(void)

void FUN_143835360(longlong param_1,longlong *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  thunk_FUN_143719c70(0xb856f64d);
  lVar2 = param_2[1];
  iVar4 = 0;
  lVar3 = 0;
  if (0 < (longlong)(int)lVar2) {
    do {
      iVar1 = *(int *)(*param_2 + lVar3 * 4);
      if (-1 < iVar1) {
        *(undefined2 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 2) =
             *(undefined2 *)(*(longlong *)(param_1 + 0x50) + (longlong)(*param_3 + iVar4) * 2);
      }
      uVar5 = uVar5 + 0x7357e;
      if (uVar5 < 0x7357e) {
        thunk_FUN_143719c70(0x74b79905);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)lVar2);
  }
  *(undefined4 *)(param_1 + 0x58) = param_4;
  return;
}



// FUNCTION 143835410 FUN_143835410 body=195 status=ok
// SIG undefined FUN_143835410(void)

void FUN_143835410(longlong param_1,longlong *param_2,int *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = param_2[1];
  uVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x70);
  uVar8 = uVar7;
  if (0 < (longlong)(int)lVar3) {
    do {
      iVar5 = *param_3 + (int)uVar8;
      iVar2 = *(int *)(*param_2 + uVar7 * 4);
      iVar4 = iVar6;
      if ((-1 < iVar2) && (iVar5 != iVar2)) {
        lVar1 = (longlong)iVar5 * 4;
        *(undefined4 *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x28)) =
             *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 0x28));
        *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 0x28)) = 0xffffffff;
        if ((*(int *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x28)) == -1) &&
           (iVar4 = iVar2, iVar6 < iVar2)) {
          iVar4 = iVar6;
        }
      }
      iVar6 = iVar4;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while ((longlong)uVar7 < (longlong)(int)lVar3);
  }
  *(int *)(param_1 + 0x30) = param_4;
  if (iVar6 < param_4) {
    param_4 = iVar6;
  }
  *(int *)(param_1 + 0x70) = param_4;
  return;
}



// FUNCTION 1438354e0 FUN_1438354e0 body=127 status=ok
// SIG undefined FUN_1438354e0(void)

void FUN_1438354e0(longlong param_1,longlong *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar2 = param_2[1];
  uVar3 = 0;
  uVar4 = uVar3;
  if ((longlong)(int)lVar2 < 1) {
    *(undefined4 *)(param_1 + 0x68) = param_4;
  }
  else {
    do {
      iVar1 = *(int *)(*param_2 + uVar3 * 4);
      if (iVar1 != -1) {
        *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 0x60)) =
             *(undefined1 *)((longlong)(*param_3 + (int)uVar4) + *(longlong *)(param_1 + 0x60));
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
    } while ((longlong)uVar3 < (longlong)(int)lVar2);
    *(undefined4 *)(param_1 + 0x68) = param_4;
  }
  return;
}



// FUNCTION 143835560 FUN_143835560 body=397 status=ok
// SIG undefined FUN_143835560(void)

void FUN_143835560(longlong param_1,float param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  byte local_118 [255];
  undefined1 local_19;
  
  if (param_2 / param_3 <= 8.45466e+06) {
    pbVar4 = local_118;
    iVar3 = 1;
    local_118[0] = 0;
    local_19 = 0xff;
    do {
      pbVar4 = pbVar4 + 1;
      fVar6 = (float)iVar3 * (param_2 / param_3);
      fVar7 = ((fVar6 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
      iVar2 = (int)(float)(~-(uint)(8388608.0 < ABS(fVar6)) &
                           (uint)((float)(int)-(uint)(fVar6 < fVar7) + fVar7) |
                          -(uint)(8388608.0 < ABS(fVar6)) & (uint)fVar6);
      if (iVar2 < 1) {
        bVar1 = 1;
      }
      else {
        bVar1 = (byte)iVar2;
        if (0xfe < iVar2) {
          bVar1 = 0xfe;
        }
      }
      *pbVar4 = bVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xff);
    lVar5 = (longlong)*(int *)(param_1 + 0x40);
    pbVar4 = *(byte **)(param_1 + 0x38);
    if (0 < lVar5) {
      do {
        *pbVar4 = local_118[*pbVar4];
        lVar5 = lVar5 + -1;
        pbVar4 = pbVar4 + 1;
      } while (lVar5 != 0);
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x68);
    pbVar4 = *(byte **)(param_1 + 0x60);
    if (0 < lVar5) {
      do {
        *pbVar4 = local_118[*pbVar4];
        lVar5 = lVar5 + -1;
        pbVar4 = pbVar4 + 1;
      } while (lVar5 != 0);
    }
    lVar5 = (longlong)*(int *)(param_1 + 0x58);
    if (0 < lVar5) {
      pbVar4 = (byte *)(*(longlong *)(param_1 + 0x50) + 1);
      do {
        *pbVar4 = local_118[*pbVar4];
        lVar5 = lVar5 + -1;
        pbVar4 = pbVar4 + 2;
      } while (lVar5 != 0);
    }
    return;
  }
  FUN_143834fd0();
  return;
}



// FUNCTION 1438356f0 FUN_1438356f0 body=121 status=ok
// SIG undefined FUN_1438356f0(void)

void FUN_1438356f0(longlong param_1,float param_2,char param_3)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18);
  if (param_2 * 1.1920929e-07 < ABS(param_2 - fVar1)) {
    if (((param_3 == '\0') || (*(int *)(param_1 + 0x40) == 0)) || (fVar1 <= param_2)) {
      FUN_143834fd0();
    }
    else {
      FUN_143835560(param_2 * 1.1920929e-07,fVar1,param_2);
    }
  }
  *(float *)(param_1 + 0x18) = param_2;
  FUN_143835320(param_1);
  return;
}



// FUNCTION 143835770 FUN_143835770 body=37 status=ok
// SIG undefined FUN_143835770(void)

void FUN_143835770(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_143835150();
  if (cVar1 != '\0') {
    FUN_143835190(param_1);
    return;
  }
  return;
}



// FUNCTION 1438357a0 FUN_1438357a0 body=298 status=ok
// SIG undefined FUN_1438357a0(void)

void FUN_1438357a0(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res8 [2];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  if (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4) == -1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    lVar2 = param_3[1];
    lVar8 = (longlong)(int)lVar2;
    lVar7 = *param_3;
    uVar4 = FUN_143703a50();
    iVar6 = *(int *)(param_1 + 0x40) + (int)lVar2;
    uVar3 = *(uint *)(param_1 + 0x44) & 0x3fffffff;
    if (((int)uVar3 < iVar6) && ((int)uVar3 < iVar6)) {
      iVar1 = iVar6;
      if (iVar6 < (int)(uVar3 * 2)) {
        iVar1 = uVar3 * 2;
      }
      FUN_14370c310(uVar4,param_1 + 0x38,iVar1,1);
    }
    puVar5 = (undefined1 *)((longlong)*(int *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x38));
    if (0 < lVar8) {
      lVar7 = lVar7 - (longlong)puVar5;
      do {
        *puVar5 = puVar5[lVar7];
        puVar5 = puVar5 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    *(int *)(param_1 + 0x40) = iVar6;
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_1 + 0x38,1);
    }
    *(undefined1 *)((longlong)*(int *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x38)) = 0xff;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  local_res8[0] = *param_2;
  FUN_143835f00(param_1,local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001438358c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  return;
}



// FUNCTION 1438358d0 FUN_1438358d0 body=254 status=ok
// SIG undefined FUN_1438358d0(void)

void FUN_1438358d0(longlong param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  longlong local_38;
  uint local_30;
  uint local_2c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  if (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4) == -1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    uVar1 = *(uint *)(param_3 + 8);
    uVar4 = FUN_143703a50();
    iVar2 = *(int *)(param_1 + 0x40);
    uVar5 = *(uint *)(param_1 + 0x44) & 0x3fffffff;
    iVar7 = iVar2 + uVar1 + 1;
    if ((int)uVar5 < iVar7) {
      iVar3 = uVar5 * 2;
      if (iVar7 < iVar3) {
        iVar7 = iVar3;
      }
      FUN_14370c310(uVar4,param_1 + 0x38,iVar7,1);
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar1 + 1;
    local_2c = uVar1 | 0x80000000;
    lVar6 = (longlong)iVar2 + *(longlong *)(param_1 + 0x38);
    local_38 = lVar6;
    local_30 = uVar1;
    FUN_1438343e0(param_1,param_3,&local_38);
    *(undefined1 *)((int)uVar1 + lVar6) = 0xff;
  }
  local_res8[0] = *param_2;
  FUN_143835f00(param_1,local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001438359c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  return;
}



// FUNCTION 1438359d0 FUN_1438359d0 body=156 status=ok
// SIG undefined FUN_1438359d0(void)

void FUN_1438359d0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  int local_res8 [2];
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  if (*(int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4) == -1) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    uVar1 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
      FUN_14370c460(uVar1,param_1 + 0x38,1);
    }
    *(undefined1 *)((longlong)*(int *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x38)) = 0xff;
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  local_res8[0] = *param_2;
  FUN_143835f00(param_1,local_res8);
                    /* WARNING: Could not recover jumptable at 0x000143835a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b94ae8);
  return;
}



// FUNCTION 143835a70 FUN_143835a70 body=139 status=ok
// SIG undefined FUN_143835a70(void)

void FUN_143835a70(longlong param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      iVar1 = *param_2 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined2 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar1 * 2) = 0;
    } while (iVar3 < param_3);
  }
  if (param_5 < 1) {
    LOCK();
    UNLOCK();
    return;
  }
  do {
    iVar3 = *param_4 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined2 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar3 * 2) = 0;
  } while (iVar2 < param_5);
  LOCK();
  UNLOCK();
  return;
}



// FUNCTION 143835b00 FUN_143835b00 body=119 status=ok
// SIG undefined FUN_143835b00(void)

void FUN_143835b00(longlong param_1,int *param_2,int param_3,int *param_4,int param_5,
                  longlong *param_6)

{
  FGenericPlatformString::Memcpy
            (*(longlong *)(param_1 + 0x50) + (longlong)*param_2 * 2,*param_6,(longlong)param_3 * 2);
  if (0 < param_5) {
    FGenericPlatformString::Memcpy
              (*(longlong *)(param_1 + 0x50) + (longlong)*param_4 * 2,
               *param_6 + (longlong)param_3 * 2,(longlong)param_5 * 2);
  }
  return;
}



// FUNCTION 143835b80 FUN_143835b80 body=174 status=ok
// SIG undefined FUN_143835b80(void)

void FUN_143835b80(longlong param_1,int *param_2,int param_3,int *param_4,int param_5,
                  longlong *param_6)

{
  longlong lVar1;
  longlong local_18;
  longlong lStack_10;
  
  lVar1 = (longlong)param_3;
  local_18 = *param_6;
  lStack_10 = local_18 + lVar1 * 8;
  FUN_1438345b0((undefined4)local_18,&local_18,
                *(longlong *)(param_1 + 0x50) + (longlong)*param_2 * 2);
  if (0 < param_5) {
    local_18 = *param_6 + lVar1 * 8;
    lStack_10 = *param_6 + (lVar1 + param_5) * 8;
    FUN_1438345b0(param_1,&local_18,*(longlong *)(param_1 + 0x50) + (longlong)*param_4 * 2);
  }
  return;
}



// FUNCTION 143835c30 FUN_143835c30 body=12 status=ok
// SIG undefined FUN_143835c30(void)

void FUN_143835c30(longlong param_1,int *param_2,undefined1 param_3)

{
  *(undefined1 *)((longlong)*param_2 + *(longlong *)(param_1 + 0x60)) = param_3;
  return;
}



// FUNCTION 143835c40 FUN_143835c40 body=135 status=ok
// SIG undefined FUN_143835c40(void)

void FUN_143835c40(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 local_res8 [2];
  
  lVar2 = param_2[1];
  lVar4 = 0;
  fVar1 = *(float *)(param_1 + 0x20);
  if (0 < (longlong)(int)lVar2) {
    do {
      local_res8[0] = *(undefined4 *)(*param_2 + lVar4 * 8);
      lVar3 = (longlong)(fVar1 * *(float *)(*param_2 + 4 + lVar4 * 8));
      uVar5 = 0xfe;
      if ((byte)lVar3 < 0xfe) {
        uVar5 = (uint)lVar3 & 0xff;
      }
      FUN_143835c30(param_1,local_res8,uVar5);
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)lVar2);
  }
  return;
}



// FUNCTION 143835cd0 FUN_143835cd0 body=13 status=ok
// SIG undefined FUN_143835cd0(void)

void FUN_143835cd0(longlong param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = *(undefined4 *)(param_1 + 0x70);
  return;
}



// FUNCTION 143835ce0 FUN_143835ce0 body=40 status=ok
// SIG undefined FUN_143835ce0(void)

int FUN_143835ce0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar3;
  bool bVar4;
  int iVar2;
  
  LOCK();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *param_2;
  UNLOCK();
  iVar1 = *(int *)(param_1 + 0x70);
  iVar3 = param_2[1];
  if (iVar3 < iVar1) {
    do {
      LOCK();
      iVar2 = *(int *)(param_1 + 0x70);
      bVar4 = iVar1 == iVar2;
      if (bVar4) {
        *(int *)(param_1 + 0x70) = iVar3;
        iVar2 = iVar1;
      }
      UNLOCK();
      if (bVar4) {
        return iVar2;
      }
      iVar1 = *(int *)(param_1 + 0x70);
      iVar3 = param_2[1];
    } while (iVar3 < iVar1);
  }
  return iVar1;
}



// FUNCTION 143835d10 FUN_143835d10 body=263 status=ok
// SIG undefined FUN_143835d10(void)

void FUN_143835d10(longlong param_1,int *param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  
  LOCK();
  piVar4 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)*param_4 * 4);
  iVar2 = *piVar4;
  *piVar4 = -1;
  UNLOCK();
  if (iVar2 != -1) {
    iVar2 = FUN_143834950();
    *param_2 = *param_2 + iVar2 + 1;
  }
  lVar8 = *(longlong *)(param_3 + 0x18);
  puVar3 = (uint *)FUN_1437fb610(*(undefined8 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x20),
                                 lVar8 + 0xb0,lVar8 + 0xd0,lVar8 + 0x90,*param_4);
  uVar5 = *puVar3;
  uVar6 = (ulonglong)(int)uVar5;
  uVar7 = (int)(short)puVar3[2] + uVar5;
  if (uVar5 != uVar7) {
    lVar8 = uVar6 * 2;
    do {
      *(undefined2 *)(lVar8 + *(longlong *)(param_1 + 0x50)) = 0xff00;
      lVar1 = *(longlong *)(param_3 + 0x18);
      piVar4 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30),
                                    lVar1 + 0xc0,lVar1 + 0xe0,lVar1 + 0x70,(int)uVar6);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar8 = lVar8 + 2;
      *(undefined1 *)((longlong)*piVar4 + *(longlong *)(param_1 + 0x60)) = 0xff;
    } while (uVar5 != uVar7);
  }
  iVar2 = *param_4;
  if (param_2[1] < *param_4) {
    iVar2 = param_2[1];
  }
  param_2[1] = iVar2;
  return;
}



// FUNCTION 143835e20 FUN_143835e20 body=26 status=ok
// SIG undefined FUN_143835e20(void)

bool FUN_143835e20(longlong param_1,int *param_2,undefined2 *param_3)

{
  *param_3 = *(undefined2 *)(*(longlong *)(param_1 + 0x50) + (longlong)*param_2 * 2);
  return *(char *)((longlong)param_3 + 1) != -1;
}



// FUNCTION 143835e40 FUN_143835e40 body=179 status=ok
// SIG undefined FUN_143835e40(void)

undefined8
FUN_143835e40(longlong param_1,int *param_2,int param_3,int *param_4,int param_5,longlong *param_6)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = param_3 + param_5;
  *(int *)(param_6 + 1) = iVar3;
  FGenericPlatformString::Memcpy
            (*param_6,*(longlong *)(param_1 + 0x50) + (longlong)*param_2 * 2,(longlong)param_3 * 2);
  if (0 < param_5) {
    FGenericPlatformString::Memcpy
              (*param_6 + (longlong)param_3 * 2,
               *(longlong *)(param_1 + 0x50) + (longlong)*param_4 * 2,(longlong)param_5 * 2);
  }
  if (0 < iVar3) {
    lVar2 = 0;
    pcVar1 = (char *)(*param_6 + 1);
    do {
      if (*pcVar1 == -1) {
        return 0;
      }
      lVar2 = lVar2 + 1;
      pcVar1 = pcVar1 + 2;
    } while (lVar2 < iVar3);
  }
  return 1;
}



// FUNCTION 143835f00 FUN_143835f00 body=78 status=ok
// SIG undefined FUN_143835f00(void)

void FUN_143835f00(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_res8 [2];
  
  iVar3 = *(int *)(param_1 + 0x70);
  if (*param_2 == iVar3) {
    iVar1 = *(int *)(param_1 + 0x30);
    do {
      iVar3 = iVar3 + 1;
      if (iVar1 <= iVar3) break;
      local_res8[0] = iVar3;
      iVar2 = FUN_143834dd0(param_1,local_res8);
    } while (iVar2 != 0);
    *(int *)(param_1 + 0x70) = iVar3;
  }
  return;
}



// FUNCTION 143835f50 FUN_143835f50 body=360 status=ok
// SIG undefined FUN_143835f50(void)

uint * FUN_143835f50(longlong *param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = *param_3;
  uVar8 = iVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar7 = (uint *)(param_1[2] + uVar5 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar5 * 8)) {
    do {
      if (*(int *)((longlong)(int)puVar7[1] * 0x38 + *param_1) == iVar1) {
        *param_2 = puVar7[1];
        goto LAB_143836087;
      }
      lVar4 = param_1[2];
      uVar5 = ((longlong)puVar7 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar7 = (uint *)(lVar4 + uVar5 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar5 * 8));
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar7 = uVar8;
  puVar7[1] = uVar2;
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,0x38);
  }
  lVar4 = (longlong)(int)param_1[1] * 0x38 + *param_1;
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x14) = 0x80000000;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined4 *)(lVar4 + 0x20) = 0;
    *(undefined4 *)(lVar4 + 0x24) = 0x80000000;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined4 *)(lVar4 + 0x30) = 0;
    *(undefined4 *)(lVar4 + 0x34) = 0x80000000;
  }
  piVar6 = (int *)((longlong)(int)param_1[1] * 0x38 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar6 = *param_3;
  FUN_14382ccc0(piVar6 + 2,param_4);
  *param_2 = uVar2;
LAB_143836087:
  param_2[1] = (uint)((longlong)puVar7 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1438360c0 FUN_1438360c0 body=88 status=ok
// SIG undefined FUN_1438360c0(void)

longlong FUN_1438360c0(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int param_6,int param_7)

{
  int iVar1;
  
  if (param_2 <= param_6) {
    return *param_4 + (longlong)((param_6 - param_2) * param_7) * 4;
  }
  iVar1 = param_6;
  if ((int)param_5[1] != 0) {
    iVar1 = *(int *)(*param_5 + (longlong)param_6 * 4);
  }
  if (iVar1 != -1) {
    return *param_3 + (longlong)(iVar1 * param_7) * 4;
  }
  return param_1 + (longlong)(param_6 * param_7) * 4;
}



// FUNCTION 143836120 FUN_143836120 body=470 status=ok
// SIG undefined FUN_143836120(void)

undefined4 *
FUN_143836120(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,int param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong lVar9;
  
  lVar1 = (longlong)param_7 * 4;
  iVar8 = *(int *)(lVar1 + *param_5);
  if (iVar8 == -1) {
    lVar3 = param_2[1];
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_2,0x14);
    }
    puVar5 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 0x14);
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    puVar7 = (undefined4 *)((longlong)param_7 * 0x14 + param_1);
    *puVar5 = *puVar7;
    puVar5[1] = puVar7[1];
    puVar5[2] = puVar7[2];
    puVar5[3] = puVar7[3];
    *(undefined1 *)(puVar5 + 4) = *(undefined1 *)(puVar7 + 4);
    *(undefined1 *)((longlong)puVar5 + 0x11) = *(undefined1 *)((longlong)puVar7 + 0x11);
    *(undefined2 *)((longlong)puVar5 + 0x12) = *(undefined2 *)((longlong)puVar7 + 0x12);
    if (param_8 != 0) {
      uVar4 = FUN_143703a50();
      lVar9 = param_4[1];
      uVar6 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
      iVar8 = (int)lVar9 + param_8;
      if ((int)uVar6 < iVar8) {
        iVar2 = uVar6 * 2;
        if (iVar8 < iVar2) {
          iVar8 = iVar2;
        }
        FUN_14370c310(uVar4,param_4,iVar8,4);
      }
      *(int *)(param_4 + 1) = (int)param_4[1] + param_8;
      puVar7 = (undefined4 *)(*param_4 + (longlong)(int)lVar9 * 4);
      iVar8 = 0;
      if (0 < (longlong)param_8 * 4) {
        lVar9 = (param_3 + (longlong)(param_7 * param_8) * 4) - (longlong)puVar7;
        do {
          iVar8 = iVar8 + 4;
          *puVar7 = *(undefined4 *)(lVar9 + (longlong)puVar7);
          puVar7 = puVar7 + 1;
        } while ((longlong)iVar8 < (longlong)param_8 * 4);
      }
    }
    *(int *)(lVar1 + *param_5) = (int)lVar3;
    uVar4 = FUN_143703a50();
    if (*(uint *)(param_6 + 1) == (*(uint *)((longlong)param_6 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,param_6,4);
    }
    *(int *)(*param_6 + (longlong)(int)param_6[1] * 4) = param_7;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  }
  else {
    puVar5 = (undefined4 *)(*param_2 + (longlong)iVar8 * 0x14);
  }
  return puVar5;
}



// FUNCTION 143836300 FUN_143836300 body=2151 status=ok
// SIG undefined FUN_143836300(void)

undefined8 * FUN_143836300(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  LPVOID pvVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong local_res8;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  puVar1 = param_1 + 0x10;
  puVar2 = param_1 + 0x12;
  puVar3 = param_1 + 0x14;
  puVar4 = param_1 + 0x1a;
  *param_1 = hkaiNavMeshInstanceData::vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *puVar3 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x80000000;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x80000000;
  FUN_143734b10(param_1 + 0x33);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_14370c030();
  }
  if (param_1[0xd] != 0) {
    FUN_14370c150();
  }
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  thunk_FUN_143719c70(0xa4d3dc35);
  local_res8 = *(ulonglong *)(param_2 + 0x70);
  iVar5 = *(int *)(param_2 + 0x78);
  uVar8 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar8,param_1 + 0xe,iVar5,4);
  }
  FUN_142f87c00(param_1[0xe],local_res8,iVar5);
  *(int *)(param_1 + 0xf) = iVar5;
  iVar5 = *(int *)(param_2 + 0x88);
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,puVar1,iVar5,4);
  }
  FUN_142f87c00(*puVar1,uVar8,iVar5);
  *(int *)(param_1 + 0x11) = iVar5;
  iVar5 = *(int *)(param_2 + 0x98);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x9c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,puVar2,iVar5,4);
  }
  FUN_142f87c00(*puVar2,uVar8,iVar5);
  *(int *)(param_1 + 0x13) = iVar5;
  iVar5 = *(int *)(param_2 + 0xa8);
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xac) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,puVar3,iVar5,4);
  }
  FUN_142f87c00(*puVar3,uVar8,iVar5);
  *(int *)(param_1 + 0x15) = iVar5;
  thunk_FUN_143719c70(0xa0605297);
  iVar5 = *(int *)(param_2 + 0xb8);
  uVar8 = *(undefined8 *)(param_2 + 0xb0);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x16,iVar5,0x10);
  }
  FUN_1438283f0(param_1[0x16],uVar8,iVar5);
  *(int *)(param_1 + 0x17) = iVar5;
  iVar5 = *(int *)(param_2 + 200);
  uVar8 = *(undefined8 *)(param_2 + 0xc0);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xcc) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x18,iVar5,0x14);
  }
  FUN_1438283a0(param_1[0x18],uVar8,iVar5);
  *(int *)(param_1 + 0x19) = iVar5;
  thunk_FUN_143719c70(0x8fc98c46);
  iVar5 = *(int *)(param_2 + 0xd8);
  uVar8 = *(undefined8 *)(param_2 + 0xd0);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xdc) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,puVar4,iVar5,0x10);
  }
  FUN_1438283f0(*puVar4,uVar8,iVar5);
  *(int *)(param_1 + 0x1b) = iVar5;
  if (*(int *)(param_2 + 0xe8) != 0) {
    thunk_FUN_143719c70(0x9a23900a);
    iVar5 = *(int *)(param_2 + 0xe8);
    uVar8 = FUN_143703a50();
    uVar12 = *(uint *)((longlong)param_1 + 0xec) & 0x3fffffff;
    if ((int)uVar12 < iVar5) {
      iVar7 = uVar12 * 2;
      iVar6 = iVar5;
      if (iVar5 < iVar7) {
        iVar6 = iVar7;
      }
      FUN_14370c310(uVar8,param_1 + 0x1c,iVar6,0x14);
    }
    *(int *)(param_1 + 0x1d) = iVar5;
    local_res8 = local_res8 & 0xffffffff00000000;
    thunk_FUN_143719c70(0xc77f090d);
    hkAlgorithm::memCpy(param_1[0x1c],*(undefined8 *)(param_2 + 0xe0),
                        *(int *)(param_2 + 0xe8) * 0x14,&local_res8);
  }
  thunk_FUN_143719c70(0x82666d06);
  iVar5 = *(int *)(param_2 + 0xf8);
  uVar8 = *(undefined8 *)(param_2 + 0xf0);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xfc) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x1e,iVar5,0x10);
  }
  FUN_142ba3370(param_1[0x1e],uVar8,iVar5);
  *(int *)(param_1 + 0x1f) = iVar5;
  thunk_FUN_143719c70(0xf5acf2e6);
  iVar5 = *(int *)(param_2 + 0x108);
  uVar8 = *(undefined8 *)(param_2 + 0x100);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x10c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x20,iVar5,1);
  }
  FUN_143745160(param_1[0x20],uVar8,iVar5);
  *(int *)(param_1 + 0x21) = iVar5;
  iVar5 = *(int *)(param_2 + 0x118);
  uVar8 = *(undefined8 *)(param_2 + 0x110);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x11c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x22,iVar5,2);
  }
  FUN_143795730(param_1[0x22],uVar8,iVar5);
  *(int *)(param_1 + 0x23) = iVar5;
  iVar5 = *(int *)(param_2 + 0x128);
  uVar8 = *(undefined8 *)(param_2 + 0x120);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 300) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x24,iVar5,4);
  }
  FUN_142f87c00(param_1[0x24],uVar8,iVar5);
  *(int *)(param_1 + 0x25) = iVar5;
  iVar5 = *(int *)(param_2 + 0x138);
  uVar8 = *(undefined8 *)(param_2 + 0x130);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x13c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x26,iVar5,4);
  }
  FUN_142f87c00(param_1[0x26],uVar8,iVar5);
  *(int *)(param_1 + 0x27) = iVar5;
  iVar5 = *(int *)(param_2 + 0x148);
  uVar8 = *(undefined8 *)(param_2 + 0x140);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x14c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x28,iVar5,4);
  }
  FUN_142f87c00(param_1[0x28],uVar8,iVar5);
  *(int *)(param_1 + 0x29) = iVar5;
  iVar5 = *(int *)(param_2 + 0x158);
  uVar8 = *(undefined8 *)(param_2 + 0x150);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x15c) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x2a,iVar5,4);
  }
  FUN_142f87c00(param_1[0x2a],uVar8,iVar5);
  *(int *)(param_1 + 0x2b) = iVar5;
  iVar5 = *(int *)(param_2 + 0x170);
  uVar8 = *(undefined8 *)(param_2 + 0x168);
  uVar9 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x174) & 0x3fffffff) < iVar5) {
    FUN_14370c310(uVar9,param_1 + 0x2d,iVar5,4);
  }
  FUN_142f87c00(param_1[0x2d],uVar8,iVar5);
  *(int *)(param_1 + 0x2e) = iVar5;
  thunk_FUN_143719c70(0x8d79c543);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x180);
  thunk_FUN_143719c70(0xd1514cec);
  FUN_14382cba0(param_1 + 0x31,param_2 + 0x188);
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  lVar11 = (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar10 + 0x58),0x28);
  if (lVar11 == 0) {
    param_1[0x35] = 0;
  }
  else {
    uVar8 = FUN_14370d870(lVar11,0);
    param_1[0x35] = uVar8;
  }
  return param_1;
}



// FUNCTION 143836b70 FUN_143836b70 body=579 status=ok
// SIG undefined FUN_143836b70(void)

undefined8 * FUN_143836b70(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshInstanceData::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff80000000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x80000000;
  FUN_143734b10(param_1 + 0x33);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_14370d870(lVar2,0);
    param_1[0x35] = uVar3;
    return param_1;
  }
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 143836dc0 FUN_143836dc0 body=149 status=ok
// SIG undefined FUN_143836dc0(void)

void FUN_143836dc0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  thunk_FUN_143734820(param_1 + 2);
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = *param_1 + 8 + (longlong)iVar2 * 0x38;
    do {
      FUN_14382bf40(lVar3);
      lVar3 = lVar3 + -0x38;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x38,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 143836e60 FUN_143836e60 body=2317 status=ok
// SIG undefined FUN_143836e60(void)

void FUN_143836e60(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkaiNavMeshInstanceData::vftable;
  if (param_1[0xd] != 0) {
    FUN_14370c150();
  }
  param_1[0xd] = 0;
  thunk_FUN_143719c70(0xb549ca98);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],4,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar1,param_1[0x10],4,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) {
    FUN_143702e10(uVar1,param_1[0x12],4,*(uint *)((longlong)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xac)) {
    FUN_143702e10(uVar1,param_1[0x14],4,*(uint *)((longlong)param_1 + 0xac) & 0x3fffffff);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  thunk_FUN_143719c70(0xd0cd3ff6);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) {
    FUN_143702e10(uVar1,param_1[0x16],0x10,*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xcc)) {
    FUN_143702e10(uVar1,param_1[0x18],0x14,*(uint *)((longlong)param_1 + 0xcc) & 0x3fffffff);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xdc)) {
    FUN_143702e10(uVar1,param_1[0x1a],0x10,*(uint *)((longlong)param_1 + 0xdc) & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xec)) {
    FUN_143702e10(uVar1,param_1[0x1c],0x14,*(uint *)((longlong)param_1 + 0xec) & 0x3fffffff);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  thunk_FUN_143719c70(0x963d8ef2);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) {
    FUN_143702e10(uVar1,param_1[0x1e],0x10,*(uint *)((longlong)param_1 + 0xfc) & 0x3fffffff);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) {
    FUN_143702e10(uVar1,param_1[0x20],1,*(uint *)((longlong)param_1 + 0x10c) & 0x3fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x11c)) {
    FUN_143702e10(uVar1,param_1[0x22],2,*(uint *)((longlong)param_1 + 0x11c) & 0x3fffffff);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 300)) {
    FUN_143702e10(uVar1,param_1[0x24],4,*(uint *)((longlong)param_1 + 300) & 0x3fffffff);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  thunk_FUN_143719c70(0x3f177a37);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x13c)) {
    FUN_143702e10(uVar1,param_1[0x26],4,*(uint *)((longlong)param_1 + 0x13c) & 0x3fffffff);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14c)) {
    FUN_143702e10(uVar1,param_1[0x28],4,*(uint *)((longlong)param_1 + 0x14c) & 0x3fffffff);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x15c)) {
    FUN_143702e10(uVar1,param_1[0x2a],4,*(uint *)((longlong)param_1 + 0x15c) & 0x3fffffff);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  thunk_FUN_143719c70(0x8cc6118d);
  FUN_143838dd0(param_1 + 0x31);
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0x35];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FWindowsCriticalSection::~FWindowsCriticalSection(lpCriticalSection);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lpCriticalSection,0x28);
  }
  thunk_FUN_143719c70(0xeee7442);
  FUN_143836dc0(param_1 + 0x31);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x174)) {
    FUN_143702e10(uVar1,param_1[0x2d],4,*(uint *)((longlong)param_1 + 0x174) & 0x3fffffff);
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x15c)) {
    FUN_143702e10(uVar1,param_1[0x2a],4,*(uint *)((longlong)param_1 + 0x15c) & 0x3fffffff);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x14c)) {
    FUN_143702e10(uVar1,param_1[0x28],4,*(uint *)((longlong)param_1 + 0x14c) & 0x3fffffff);
  }
  param_1[0x28] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x13c)) {
    FUN_143702e10(uVar1,param_1[0x26],4,*(uint *)((longlong)param_1 + 0x13c) & 0x3fffffff);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 300)) {
    FUN_143702e10(uVar1,param_1[0x24],4,*(uint *)((longlong)param_1 + 300) & 0x3fffffff);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x11c)) {
    FUN_143702e10(uVar1,param_1[0x22],2,*(uint *)((longlong)param_1 + 0x11c) & 0x3fffffff);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) {
    FUN_143702e10(uVar1,param_1[0x20],1,*(uint *)((longlong)param_1 + 0x10c) & 0x3fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) {
    FUN_143702e10(uVar1,param_1[0x1e],0x10,*(uint *)((longlong)param_1 + 0xfc) & 0x3fffffff);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xec)) {
    FUN_143702e10(uVar1,param_1[0x1c],0x14,*(uint *)((longlong)param_1 + 0xec) & 0x3fffffff);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xdc)) {
    FUN_143702e10(uVar1,param_1[0x1a],0x10,*(uint *)((longlong)param_1 + 0xdc) & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xcc)) {
    FUN_143702e10(uVar1,param_1[0x18],0x14,*(uint *)((longlong)param_1 + 0xcc) & 0x3fffffff);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) {
    FUN_143702e10(uVar1,param_1[0x16],0x10,*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xac)) {
    FUN_143702e10(uVar1,param_1[0x14],4,*(uint *)((longlong)param_1 + 0xac) & 0x3fffffff);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) {
    FUN_143702e10(uVar1,param_1[0x12],4,*(uint *)((longlong)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar1,param_1[0x10],4,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],4,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  if (param_1[0xd] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143837770 FUN_143837770 body=139 status=ok
// SIG undefined FUN_143837770(void)

longlong FUN_143837770(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143836e60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x1b0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1b0);
    }
  }
  return param_1;
}



// FUNCTION 143837800 FUN_143837800 body=536 status=ok
// SIG undefined FUN_143837800(void)

void FUN_143837800(longlong param_1,undefined4 param_2,undefined4 *param_3,longlong *param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  short sVar5;
  short *psVar6;
  float fVar7;
  short sVar8;
  int iVar9;
  float local_res8 [2];
  undefined4 local_res10;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  iVar9 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x40);
  local_88._4_4_ = param_3[4];
  local_88._0_4_ = *param_3;
  local_88._8_4_ = param_3[8];
  local_88._12_4_ = 0;
  local_68._4_4_ = param_3[6];
  local_68._0_4_ = param_3[2];
  local_68._8_4_ = param_3[10];
  local_68._12_4_ = 0;
  local_78._4_4_ = param_3[5];
  local_78._0_4_ = param_3[1];
  local_78._8_4_ = param_3[9];
  local_78._12_4_ = 0;
  local_58._4_4_ = param_3[7];
  local_58._0_4_ = param_3[3];
  local_58._8_4_ = param_3[0xb];
  local_58._12_4_ = 0;
  local_res10 = param_2;
  FUN_143838130(param_3[2],local_88,4);
  local_res8[0] = (float)param_3[0xe];
  if (local_res8[0] == (float)param_3[0xf]) {
    FUN_1438387d0();
  }
  else {
    FUN_143838bc0(param_1,local_res8,local_res10,param_4);
    local_res8[0] = (float)param_3[0xf];
    FUN_143838bc0(param_1,local_res8,local_res10,param_4 + 3);
  }
  sVar8 = *(short *)(param_3 + 0x12);
  sVar1 = *(short *)((longlong)param_3 + 0x4a);
  uVar2 = param_3[0x10];
  uVar3 = param_3[0x11];
  fVar7 = (float)((int)sVar8 << 0x10);
  local_res8[0] = fVar7;
  if (0.0 <= fVar7) {
    local_res8[0] = (float)((int)sVar1 << 0x10);
    if (0.0 <= local_res8[0]) {
      sVar5 = 0;
      goto LAB_14383794d;
    }
  }
  psVar6 = (short *)FUN_143831c80(local_res8,param_3);
  sVar5 = *psVar6;
LAB_14383794d:
  piVar4 = (int *)*param_4;
  *piVar4 = iVar9;
  piVar4[1] = iVar9 + 1;
  piVar4[2] = -1;
  piVar4[3] = -1;
  piVar4[4] = 0x10;
  if ((*(byte *)(param_3 + 0x13) & 1) == 0) {
    *(byte *)(piVar4 + 4) = *(byte *)(piVar4 + 4) | 0x20;
  }
  if (fVar7 < 0.0) {
    sVar8 = sVar5;
  }
  *(short *)((longlong)piVar4 + 0x12) = sVar8;
  *(undefined4 *)param_4[1] = uVar2;
  piVar4 = (int *)param_4[3];
  *piVar4 = iVar9 + 2;
  piVar4[1] = iVar9 + 3;
  piVar4[2] = -1;
  piVar4[3] = -1;
  piVar4[4] = 0x10;
  if ((*(byte *)(param_3 + 0x13) & 2) == 0) {
    *(byte *)(piVar4 + 4) = *(byte *)(piVar4 + 4) | 0x20;
  }
  if (0.0 <= (float)((int)sVar1 << 0x10)) {
    sVar5 = sVar1;
  }
  *(short *)((longlong)piVar4 + 0x12) = sVar5;
  *(undefined4 *)param_4[4] = uVar3;
  return;
}



// FUNCTION 143837a20 FUN_143837a20 body=634 status=ok
// SIG undefined FUN_143837a20(void)

void FUN_143837a20(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int local_res8 [2];
  undefined4 local_res10;
  int local_res18 [2];
  undefined2 local_res20;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_88._4_4_ = param_3[4];
  local_88._0_4_ = *param_3;
  local_88._8_4_ = param_3[8];
  local_88._12_4_ = 0;
  local_68._4_4_ = param_3[6];
  local_68._0_4_ = param_3[2];
  local_68._8_4_ = param_3[10];
  local_68._12_4_ = 0;
  local_78._4_4_ = param_3[5];
  local_78._0_4_ = param_3[1];
  local_78._8_4_ = param_3[9];
  local_78._12_4_ = 0;
  local_58._4_4_ = param_3[7];
  local_58._0_4_ = param_3[3];
  local_58._8_4_ = param_3[0xb];
  local_58._12_4_ = 0;
  if (param_3[0xc] == *(int *)(param_1 + 0x178)) {
    iVar13 = param_3[0xe];
    puVar11 = local_88;
  }
  else {
    iVar13 = param_3[0xf];
    puVar11 = local_68;
  }
  local_c8 = 0;
  local_c0 = 0x8000000000000000;
  local_b0 = 0x8000000000000000;
  local_a0 = 0x8000000000000000;
  local_b8 = 0;
  local_a8 = 0;
  local_res8[0] = iVar13;
  local_res10 = param_2;
  local_res20 = param_4;
  FUN_143835f50(param_1 + 0x188,local_res18,local_res8,&local_c8);
  FUN_14382bf40(&local_c8);
  iVar12 = *(int *)(param_1 + 0xf8) + *(int *)(param_1 + 0x40);
  lVar14 = (longlong)local_res18[0] * 0x38 + *(longlong *)(param_1 + 0x188);
  FUN_143838130(param_1,puVar11,2);
  lVar8 = (longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x18);
  sVar2 = *(short *)(lVar8 + 10);
  sVar3 = *(short *)(lVar8 + 8);
  sVar4 = *(short *)(lVar14 + 0x10);
  uVar9 = FUN_143703a50();
  lVar8 = (longlong)*(int *)(lVar14 + 0x10);
  uVar10 = *(uint *)(lVar14 + 0x14) & 0x3fffffff;
  iVar13 = *(int *)(lVar14 + 0x10) + 1;
  if ((int)uVar10 < iVar13) {
    iVar7 = uVar10 * 2;
    if (iVar13 < iVar7) {
      iVar13 = iVar7;
    }
    FUN_14370c310(uVar9,lVar14 + 8,iVar13,0x14);
  }
  *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
  lVar5 = *(longlong *)(lVar14 + 8);
  *(int *)(lVar5 + lVar8 * 0x14) = iVar12;
  *(int *)(lVar5 + 4 + lVar8 * 0x14) = iVar12 + 1;
  *(undefined4 *)(lVar5 + 0x10 + lVar8 * 0x14) = 0x50;
  lVar5 = lVar5 + lVar8 * 0x14;
  *(undefined8 *)(lVar5 + 8) = 0xffffffffffffffff;
  *(undefined2 *)(lVar5 + 0x12) = local_res20;
  iVar12 = *(int *)(param_1 + 0x60);
  uVar9 = FUN_143703a50();
  local_res8[0] = *(int *)(lVar14 + 0x20);
  uVar10 = *(uint *)(lVar14 + 0x24) & 0x3fffffff;
  iVar13 = local_res8[0] + iVar12;
  if ((int)uVar10 < iVar13) {
    iVar7 = uVar10 * 2;
    if (iVar13 < iVar7) {
      iVar13 = iVar7;
    }
    FUN_14370c310(uVar9,lVar14 + 0x18,iVar13,4);
  }
  *(int *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + iVar12;
  puVar1 = (undefined4 *)(*(longlong *)(lVar14 + 0x18) + (longlong)local_res8[0] * 4);
  if (param_3[0xc] == *(int *)(param_1 + 0x178)) {
    *puVar1 = param_3[0x10];
    bVar6 = *(byte *)(param_3 + 0x13) & 1;
  }
  else {
    *puVar1 = param_3[0x11];
    bVar6 = *(byte *)(param_3 + 0x13) & 2;
  }
  if (bVar6 == 0) {
    *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) | 0x20;
  }
  *(short *)(param_5 + 2) = sVar2 + sVar3 + sVar4;
  *param_5 = lVar5;
  param_5[1] = (longlong)puVar1;
  uVar9 = FUN_143703a50();
  if (*(uint *)(lVar14 + 0x30) == (*(uint *)(lVar14 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar9,lVar14 + 0x28,4);
  }
  *(undefined4 *)(*(longlong *)(lVar14 + 0x28) + (longlong)*(int *)(lVar14 + 0x30) * 4) =
       local_res10;
  *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
  return;
}



// FUNCTION 143837ca0 FUN_143837ca0 body=552 status=ok
// SIG undefined FUN_143837ca0(void)

longlong FUN_143837ca0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < *(int *)(param_1 + 0xe8) + param_3) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
    uVar5 = FUN_143703a50();
    iVar1 = *(int *)(param_1 + 0xe8);
    uVar4 = *(uint *)(param_1 + 0xec) & 0x3fffffff;
    iVar9 = iVar1 + param_3;
    if ((int)uVar4 < iVar9) {
      iVar10 = uVar4 * 2;
      if (iVar9 < iVar10) {
        iVar9 = iVar10;
      }
      FUN_14370c310(uVar5,(longlong *)(param_1 + 0xe0),iVar9,0x14);
    }
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + param_3;
    lVar14 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar1 * 0x14;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar1 + param_3;
    lVar14 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar1 * 0x14;
  }
  iVar1 = *(int *)(param_1 + 0x60);
  uVar5 = FUN_143703a50();
  iVar9 = *(int *)(param_1 + 0x158);
  uVar4 = *(uint *)(param_1 + 0x15c) & 0x3fffffff;
  iVar10 = iVar9 + iVar1 * param_3;
  if ((int)uVar4 < iVar10) {
    iVar3 = uVar4 * 2;
    if (iVar10 < iVar3) {
      iVar10 = iVar3;
    }
    FUN_14370c310(uVar5,(longlong *)(param_1 + 0x150),iVar10,4);
  }
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + iVar1 * param_3;
  puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar9 * 4);
  uVar5 = FUN_143703a50();
  iVar9 = *(int *)(param_1 + 0x118);
  uVar4 = *(uint *)(param_1 + 0x11c) & 0x3fffffff;
  iVar10 = iVar9 + param_3;
  if ((int)uVar4 < iVar10) {
    iVar3 = uVar4 * 2;
    if (iVar10 < iVar3) {
      iVar10 = iVar3;
    }
    FUN_14370c310(uVar5,(longlong *)(param_1 + 0x110),iVar10,2);
  }
  lVar2 = *(longlong *)(param_1 + 0x110);
  lVar13 = 0;
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + param_3;
  if (0 < (longlong)param_3) {
    puVar12 = (undefined4 *)(lVar14 + 8);
    puVar7 = (undefined4 *)(param_2 + 8);
    do {
      puVar12[-2] = puVar7[-2];
      puVar12[-1] = puVar7[-1];
      *puVar12 = *puVar7;
      puVar12[1] = puVar7[1];
      *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar7 + 2);
      *(undefined1 *)((longlong)puVar12 + 9) = *(undefined1 *)((longlong)puVar7 + 9);
      *(undefined2 *)((longlong)puVar12 + 10) = *(undefined2 *)((longlong)puVar7 + 10);
      *(undefined2 *)(lVar2 + (longlong)iVar9 * 2 + lVar13 * 2) = *(undefined2 *)(puVar7 + 7);
      if (iVar1 == 1) {
        *puVar8 = puVar7[3];
      }
      else if (0 < iVar1) {
        puVar6 = puVar8;
        lVar11 = (longlong)iVar1;
        do {
          *puVar6 = *(undefined4 *)((longlong)puVar7 + (0xc - (longlong)puVar8) + (longlong)puVar6);
          puVar6 = puVar6 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      puVar8 = puVar8 + iVar1;
      lVar13 = lVar13 + 1;
      puVar12 = puVar12 + 5;
      puVar7 = puVar7 + 10;
    } while (lVar13 < param_3);
  }
  return lVar14;
}



// FUNCTION 143837ed0 FUN_143837ed0 body=596 status=ok
// SIG undefined FUN_143837ed0(void)

void FUN_143837ed0(longlong param_1,int *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte bVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined2 *puVar18;
  longlong lVar19;
  
  iVar3 = *(int *)(param_1 + 0x50);
  plVar1 = (longlong *)(param_1 + 0x100);
  uVar8 = FUN_143703a50();
  iVar4 = *(int *)(param_1 + 0x108);
  uVar10 = *(uint *)(param_1 + 0x10c) & 0x3fffffff;
  iVar14 = iVar4 + param_4;
  if ((int)uVar10 < iVar14) {
    iVar15 = uVar10 * 2;
    if (iVar14 < iVar15) {
      iVar14 = iVar15;
    }
    FUN_14370c310(uVar8,plVar1,iVar14,1);
  }
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + param_4;
  lVar5 = *plVar1;
  uVar8 = FUN_143703a50();
  iVar14 = *(int *)(param_1 + 0x148);
  uVar10 = *(uint *)(param_1 + 0x14c) & 0x3fffffff;
  iVar15 = iVar14 + iVar3 * param_4;
  if ((int)uVar10 < iVar15) {
    iVar16 = uVar10 * 2;
    if (iVar15 < iVar16) {
      iVar15 = iVar16;
    }
    FUN_14370c310(uVar8,(longlong *)(param_1 + 0x140),iVar15,4);
  }
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar3 * param_4;
  puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar14 * 4);
  uVar8 = FUN_143703a50();
  iVar14 = *(int *)(param_1 + 0xd8);
  uVar10 = *(uint *)(param_1 + 0xdc) & 0x3fffffff;
  iVar15 = iVar14 + param_4;
  if ((int)uVar10 < iVar15) {
    iVar16 = uVar10 * 2;
    if (iVar15 < iVar16) {
      iVar15 = iVar16;
    }
    FUN_14370c310(uVar8,(longlong *)(param_1 + 0xd0),iVar15,0x10);
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + param_4;
  lVar17 = *(longlong *)(param_1 + 0xd0);
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)((longlong)*param_2 + *plVar1);
  }
  plVar2 = (longlong *)(param_1 + 0x168);
  *(byte *)((longlong)*param_2 + *plVar1) = bVar11 | 1;
  *(undefined4 *)(*plVar2 + (longlong)*param_2 * 4) = *(undefined4 *)(param_1 + 0x170);
  uVar8 = FUN_143703a50();
  iVar15 = *(int *)(param_1 + 0x170);
  uVar10 = *(uint *)(param_1 + 0x174) & 0x3fffffff;
  iVar16 = iVar15 + param_4;
  if ((int)uVar10 < iVar16) {
    iVar7 = uVar10 * 2;
    if (iVar16 < iVar7) {
      iVar16 = iVar7;
    }
    FUN_14370c310(uVar8,plVar2,iVar16,4);
  }
  lVar6 = *plVar2;
  lVar19 = 0;
  *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + param_4;
  if (0 < (longlong)param_4) {
    puVar18 = (undefined2 *)((longlong)iVar14 * 0x10 + lVar17 + 8);
    puVar12 = (undefined4 *)(param_3 + 4);
    do {
      *(undefined1 *)(lVar19 + iVar4 + lVar5) = *(undefined1 *)(puVar12 + 3);
      *(undefined4 *)(puVar18 + -4) = puVar12[-1];
      *(undefined4 *)(puVar18 + -2) = *puVar12;
      *puVar18 = *(undefined2 *)(puVar12 + 1);
      puVar18[1] = *(undefined2 *)((longlong)puVar12 + 6);
      puVar18[2] = *(undefined2 *)(puVar12 + 2);
      puVar18[3] = *(undefined2 *)((longlong)puVar12 + 10);
      if (iVar3 == 1) {
        *puVar13 = puVar12[4];
      }
      else if (0 < iVar3) {
        puVar9 = puVar13;
        lVar17 = (longlong)iVar3;
        do {
          *puVar9 = *(undefined4 *)
                     ((longlong)puVar12 + (0x10 - (longlong)puVar13) + (longlong)puVar9);
          puVar9 = puVar9 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      puVar13 = puVar13 + iVar3;
      *(int *)(lVar6 + (longlong)iVar15 * 4 + lVar19 * 4) = *param_2;
      puVar18 = puVar18 + 8;
      lVar19 = lVar19 + 1;
      puVar12 = puVar12 + 9;
    } while (lVar19 < param_4);
  }
  return;
}



// FUNCTION 143838130 FUN_143838130 body=154 status=ok
// SIG undefined FUN_143838130(void)

void FUN_143838130(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_3;
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0xfc) & 0x3fffffff;
  iVar6 = *(int *)(param_1 + 0xf8) + param_3;
  if (((int)uVar5 < iVar6) && ((int)uVar5 < iVar6)) {
    iVar2 = iVar6;
    if (iVar6 < (int)(uVar5 * 2)) {
      iVar2 = uVar5 * 2;
    }
    FUN_14370c310(uVar3,(longlong *)(param_1 + 0xf0),iVar2,0x10);
  }
  puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 0xf8) * 0x10 + *(longlong *)(param_1 + 0xf0))
  ;
  if (0 < param_3) {
    param_2 = param_2 - (longlong)puVar4;
    do {
      puVar1 = (undefined8 *)(param_2 + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4 = puVar4 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 0xf8) = iVar6;
  return;
}



// FUNCTION 1438381d0 FUN_1438381d0 body=401 status=ok
// SIG undefined FUN_1438381d0(void)

longlong FUN_1438381d0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  
  iVar6 = *(int *)(param_1 + 0x118) + param_2;
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)(param_1 + 0x11c) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar1 = uVar5 * 2;
    iVar2 = iVar6;
    if (iVar6 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_14370c310(uVar3,param_1 + 0x110,iVar2,2);
  }
  puVar7 = (undefined2 *)(*(longlong *)(param_1 + 0x110) + (longlong)*(int *)(param_1 + 0x118) * 2);
  iVar2 = iVar6 - *(int *)(param_1 + 0x118);
  lVar4 = (longlong)iVar2;
  if (0 < iVar2) {
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = 0xffff;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x118) = iVar6;
  iVar2 = *(int *)(param_1 + 0x60) * param_2;
  uVar3 = FUN_143703a50();
  iVar6 = *(int *)(param_1 + 0x158) + iVar2;
  uVar5 = *(uint *)(param_1 + 0x15c) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar1 = uVar5 * 2;
    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }
    FUN_14370c310(uVar3,param_1 + 0x150,iVar6,4);
  }
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + iVar2;
  if ((int)(*(uint *)(param_1 + 0xec) & 0x3fffffff) < *(int *)(param_1 + 0xe8) + param_2) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
    uVar3 = FUN_143703a50();
    iVar6 = *(int *)(param_1 + 0xe8);
    uVar5 = *(uint *)(param_1 + 0xec) & 0x3fffffff;
    iVar2 = iVar6 + param_2;
    if ((int)uVar5 < iVar2) {
      iVar1 = uVar5 * 2;
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      FUN_14370c310(uVar3,(longlong *)(param_1 + 0xe0),iVar2,0x14);
    }
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + param_2;
    lVar4 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 0x14;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
  }
  else {
    iVar6 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar6 + param_2;
    lVar4 = *(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 0x14;
  }
  return lVar4;
}



// FUNCTION 143838370 FUN_143838370 body=98 status=ok
// SIG undefined FUN_143838370(void)

longlong FUN_143838370(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = (ulonglong)
          ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000) &
          *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if (*(int *)((longlong)iVar5 * 0x38 + *param_1) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 1438383e0 FUN_1438383e0 body=68 status=ok
// SIG undefined FUN_1438383e0(void)

void FUN_1438383e0(longlong param_1,int *param_2)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100));
  }
  *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100)) = bVar1 | 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_2 * 4) = 0xfffffffe;
  return;
}



// FUNCTION 143838430 FUN_143838430 body=296 status=ok
// SIG undefined FUN_143838430(void)

void FUN_143838430(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_143838370(param_1,(longlong)(int)uVar4 * 0x38 + *param_1);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  FUN_14382bf40(*param_1 + 8 + (longlong)(int)uVar2 * 0x38);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x38);
    lVar5 = 7;
    lVar8 = ((longlong)(int)*(uint *)(param_1 + 1) * 0x38 + *param_1) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar6 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar6 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar6 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar6 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 143838560 FUN_143838560 body=421 status=ok
// SIG undefined FUN_143838560(void)

void FUN_143838560(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_2 * 4);
  uVar5 = (ulonglong)iVar4;
  if (iVar4 != -1) {
    if (-1 < iVar4) {
      lVar8 = uVar5 * 4;
      do {
        iVar7 = 0;
        iVar4 = (int)uVar5;
        if (*(int *)(param_1 + 0x108) == 0) {
          bVar3 = 0;
        }
        else {
          bVar3 = *(byte *)((longlong)iVar4 + *(longlong *)(param_1 + 0x100));
        }
        *(byte *)((longlong)iVar4 + *(longlong *)(param_1 + 0x100)) = bVar3 | 1;
        lVar6 = (longlong)(iVar4 - *(int *)(param_1 + 0x20)) * 0x10 + *(longlong *)(param_1 + 0xd0);
        *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + (int)*(short *)(lVar6 + 8);
        if (0 < *(short *)(lVar6 + 10)) {
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          do {
            lVar2 = FUN_1437fb5b0(uVar1);
            if ((*(byte *)(lVar2 + 0x10) & 8) == 0) {
              *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(short *)(lVar6 + 10));
        }
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
        uVar5 = (ulonglong)(iVar4 + 1U);
        *(undefined4 *)(lVar8 + *(longlong *)(param_1 + 0x168)) = 0xffffffff;
        lVar8 = lVar8 + 4;
      } while (((int)(iVar4 + 1U) < *(int *)(param_1 + 0x170)) &&
              (*(int *)(lVar8 + *(longlong *)(param_1 + 0x168)) == *param_2));
      *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_2 * 4) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x108) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100));
    }
    *(byte *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100)) = bVar3 & 0xfe;
    *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_2 * 4) = 0xffffffff;
  }
  return;
}



// FUNCTION 143838710 FUN_143838710 body=177 status=ok
// SIG undefined FUN_143838710(void)

void FUN_143838710(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar2 + 0x78);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x68);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar2 + 0x7c);
  }
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
    if (lVar2 != 0) {
      uVar3 = FUN_14370d870(lVar2,0);
      *(undefined8 *)(param_1 + 0x1a8) = uVar3;
      return;
    }
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 1438387d0 FUN_1438387d0 body=995 status=ok
// SIG undefined FUN_1438387d0(void)

void FUN_1438387d0(longlong param_1,int *param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  longlong lVar10;
  int local_res10 [2];
  undefined4 local_res18;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  iVar8 = 0;
  local_70 = 0x8000000000000000;
  local_60 = 0x8000000000000000;
  local_50 = 0x8000000000000000;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_res18 = param_3;
  FUN_143835f50(param_1 + 0x188,local_res10,param_2,&local_78);
  FUN_14382bf40(&local_78);
  lVar10 = (longlong)local_res10[0] * 0x38 + *(longlong *)(param_1 + 0x188);
  lVar5 = (longlong)*param_2 * 0x10 + *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar10 + 0x10);
  sVar9 = *(short *)(lVar5 + 10) + *(short *)(lVar5 + 8);
  if (0 < iVar1) {
    lVar5 = *(longlong *)(lVar10 + 8);
    do {
      if ((*(byte *)(lVar5 + 0x10 + (longlong)iVar8 * 0x14) & 8) != 0) {
        iVar4 = iVar8;
        do {
          iVar4 = iVar4 + 1;
          if (iVar1 <= iVar4) {
            uVar6 = FUN_143703a50();
            if (*(uint *)(lVar10 + 0x10) == (*(uint *)(lVar10 + 0x14) & 0x3fffffff)) {
              FUN_14370c460(uVar6,lVar10 + 8,0x14);
            }
            iVar4 = *(int *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x10) = iVar4 + 1;
            param_4[3] = *(longlong *)(lVar10 + 8) + (longlong)iVar4 * 0x14;
            iVar2 = *(int *)(param_1 + 0x60);
            uVar6 = FUN_143703a50();
            local_res10[0] = *(int *)(lVar10 + 0x20);
            uVar7 = *(uint *)(lVar10 + 0x24) & 0x3fffffff;
            iVar4 = local_res10[0] + iVar2;
            if ((int)uVar7 < iVar4) {
              iVar3 = uVar7 * 2;
              if (iVar4 < iVar3) {
                iVar4 = iVar3;
              }
              FUN_14370c310(uVar6,lVar10 + 0x18,iVar4,4);
            }
            *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + iVar2;
            param_4[4] = *(longlong *)(lVar10 + 0x18) + (longlong)local_res10[0] * 4;
            *(short *)(param_4 + 5) = (short)iVar1 + sVar9;
            uVar6 = FUN_143703a50();
            if (*(uint *)(lVar10 + 0x30) == (*(uint *)(lVar10 + 0x34) & 0x3fffffff)) {
              FUN_14370c460(uVar6,lVar10 + 0x28,4);
            }
            *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)*(int *)(lVar10 + 0x30) * 4) =
                 local_res18;
            *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
            *param_4 = *(longlong *)(lVar10 + 8) + (longlong)iVar8 * 0x14;
            param_4[1] = *(longlong *)(lVar10 + 0x18) +
                         (longlong)(*(int *)(param_1 + 0x60) * iVar8) * 4;
            *(short *)(param_4 + 2) = (short)iVar8 + sVar9;
            *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)iVar8 * 4) = local_res18;
            return;
          }
        } while ((*(byte *)(lVar5 + 0x10 + (longlong)iVar4 * 0x14) & 8) == 0);
        *param_4 = lVar5 + (longlong)iVar8 * 0x14;
        param_4[1] = *(longlong *)(lVar10 + 0x18) + (longlong)(*(int *)(param_1 + 0x60) * iVar8) * 4
        ;
        *(short *)(param_4 + 2) = (short)iVar8 + sVar9;
        *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)iVar8 * 4) = local_res18;
        param_4[3] = *(longlong *)(lVar10 + 8) + (longlong)iVar4 * 0x14;
        param_4[4] = *(longlong *)(lVar10 + 0x18) + (longlong)(*(int *)(param_1 + 0x60) * iVar4) * 4
        ;
        *(short *)(param_4 + 5) = (short)iVar4 + sVar9;
        *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)iVar4 * 4) = local_res18;
        return;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  sVar9 = (short)iVar1 + sVar9;
  uVar6 = FUN_143703a50();
  iVar1 = *(int *)(lVar10 + 0x10);
  uVar7 = *(uint *)(lVar10 + 0x14) & 0x3fffffff;
  iVar8 = iVar1 + 2;
  if ((int)uVar7 < iVar8) {
    iVar4 = uVar7 * 2;
    if (iVar8 < iVar4) {
      iVar8 = iVar4;
    }
    FUN_14370c310(uVar6,lVar10 + 8,iVar8,0x14);
  }
  *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + 2;
  *param_4 = *(longlong *)(lVar10 + 8) + (longlong)iVar1 * 0x14;
  iVar4 = *(int *)(param_1 + 0x60) * 2;
  uVar6 = FUN_143703a50();
  iVar1 = *(int *)(lVar10 + 0x20);
  uVar7 = *(uint *)(lVar10 + 0x24) & 0x3fffffff;
  iVar8 = iVar4 + iVar1;
  if ((int)uVar7 < iVar8) {
    iVar2 = uVar7 * 2;
    if (iVar8 < iVar2) {
      iVar8 = iVar2;
    }
    FUN_14370c310(uVar6,lVar10 + 0x18,iVar8,4);
  }
  *(int *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + iVar4;
  param_4[1] = *(longlong *)(lVar10 + 0x18) + (longlong)iVar1 * 4;
  *(short *)(param_4 + 2) = sVar9;
  uVar6 = FUN_143703a50();
  if (*(uint *)(lVar10 + 0x30) == (*(uint *)(lVar10 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar6,lVar10 + 0x28,4);
  }
  *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)*(int *)(lVar10 + 0x30) * 4) =
       local_res18;
  *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
  param_4[3] = *param_4 + 0x14;
  param_4[4] = param_4[1] + (longlong)*(int *)(param_1 + 0x60) * 4;
  *(short *)(param_4 + 5) = sVar9 + 1;
  uVar6 = FUN_143703a50();
  if (*(uint *)(lVar10 + 0x30) == (*(uint *)(lVar10 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar6,lVar10 + 0x28,4);
  }
  *(undefined4 *)(*(longlong *)(lVar10 + 0x28) + (longlong)*(int *)(lVar10 + 0x30) * 4) =
       local_res18;
  *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + 1;
  return;
}


