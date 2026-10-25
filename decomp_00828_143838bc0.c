// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143838bc0 FUN_143838bc0 body=519 status=ok
// SIG undefined FUN_143838bc0(void)

void FUN_143838bc0(longlong param_1,int *param_2,undefined4 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int local_res8 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar6 = 0;
  local_68 = 0;
  local_60 = 0x8000000000000000;
  local_58 = 0;
  local_50 = 0x8000000000000000;
  local_48 = 0;
  local_40 = 0x8000000000000000;
  FUN_143835f50(param_1 + 0x188,local_res8,param_2,&local_68);
  FUN_14382bf40(&local_68);
  lVar7 = (longlong)*param_2 * 0x10 + *(longlong *)(param_1 + 0x18);
  lVar8 = *(longlong *)(param_1 + 0x188) + (longlong)local_res8[0] * 0x38;
  if (0 < *(int *)(lVar8 + 0x10)) {
    do {
      if ((*(byte *)(*(longlong *)(lVar8 + 8) + 0x10 + (longlong)iVar6 * 0x14) & 8) != 0) {
        *param_4 = *(longlong *)(lVar8 + 8) + (longlong)iVar6 * 0x14;
        param_4[1] = *(longlong *)(lVar8 + 0x18) + (longlong)(*(int *)(param_1 + 0x60) * iVar6) * 4;
        *(short *)(param_4 + 2) = *(short *)(lVar7 + 10) + *(short *)(lVar7 + 8) + (short)iVar6;
        *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + (longlong)iVar6 * 4) = param_3;
        return;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar8 + 0x10));
  }
  uVar4 = FUN_143703a50();
  if (*(uint *)(lVar8 + 0x10) == (*(uint *)(lVar8 + 0x14) & 0x3fffffff)) {
    FUN_14370c460(uVar4,lVar8 + 8,0x14);
  }
  iVar1 = *(int *)(lVar8 + 0x10);
  *(int *)(lVar8 + 0x10) = iVar1 + 1;
  *param_4 = *(longlong *)(lVar8 + 8) + (longlong)iVar1 * 0x14;
  iVar1 = *(int *)(param_1 + 0x60);
  uVar4 = FUN_143703a50();
  iVar2 = *(int *)(lVar8 + 0x20);
  uVar5 = *(uint *)(lVar8 + 0x24) & 0x3fffffff;
  iVar9 = iVar2 + iVar1;
  if ((int)uVar5 < iVar9) {
    iVar3 = uVar5 * 2;
    if (iVar9 < iVar3) {
      iVar9 = iVar3;
    }
    FUN_14370c310(uVar4,lVar8 + 0x18,iVar9,4);
  }
  *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + iVar1;
  param_4[1] = *(longlong *)(lVar8 + 0x18) + (longlong)iVar2 * 4;
  *(short *)(param_4 + 2) = *(short *)(lVar7 + 10) + *(short *)(lVar7 + 8) + (short)iVar6;
  uVar4 = FUN_143703a50();
  if (*(uint *)(lVar8 + 0x30) == (*(uint *)(lVar8 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar4,lVar8 + 0x28,4);
  }
  *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + (longlong)*(int *)(lVar8 + 0x30) * 4) = param_3;
  *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
  return;
}



// FUNCTION 143838dd0 FUN_143838dd0 body=148 status=ok
// SIG undefined FUN_143838dd0(void)

void FUN_143838dd0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
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
  FUN_143734820(param_1 + 2);
  return;
}



// FUNCTION 143838e70 FUN_143838e70 body=150 status=ok
// SIG undefined FUN_143838e70(void)

void FUN_143838e70(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    iVar6 = iVar1;
    if (4 < iVar1) {
      iVar6 = 4;
    }
    puVar2 = (undefined4 *)
             FUN_1438360c0(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x30),
                           param_1 + 0x130,param_1 + 0x150,param_1 + 0x70,*param_2,iVar1);
    puVar3 = (undefined4 *)(param_3 + 0x14);
    if (iVar6 == 1) {
      *puVar3 = *puVar2;
      return;
    }
    lVar4 = (longlong)iVar6;
    if (0 < lVar4) {
      lVar5 = (longlong)puVar2 - (longlong)puVar3;
      do {
        *puVar3 = *(undefined4 *)(lVar5 + (longlong)puVar3);
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143838f10 FUN_143838f10 body=171 status=ok
// SIG undefined FUN_143838f10(void)

void FUN_143838f10(longlong param_1,int *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int local_res8 [2];
  
  puVar2 = (undefined4 *)
           FUN_1437fb610(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                         param_1 + 0xb0,param_1 + 0xd0,param_1 + 0x90,*param_2);
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(puVar2 + 2);
  *(undefined2 *)((longlong)param_3 + 10) = *(undefined2 *)((longlong)puVar2 + 10);
  *(undefined2 *)(param_3 + 3) = *(undefined2 *)(puVar2 + 3);
  *(undefined2 *)((longlong)param_3 + 0xe) = *(undefined2 *)((longlong)puVar2 + 0xe);
  if (*(int *)(param_1 + 0x108) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)((longlong)*param_2 + *(longlong *)(param_1 + 0x100));
  }
  *(undefined1 *)(param_3 + 4) = uVar1;
  local_res8[0] = *param_2;
  FUN_143838fc0(param_1,local_res8,param_3);
  return;
}



// FUNCTION 143838fc0 FUN_143838fc0 body=150 status=ok
// SIG undefined FUN_143838fc0(void)

void FUN_143838fc0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    iVar6 = iVar1;
    if (4 < iVar1) {
      iVar6 = 4;
    }
    puVar2 = (undefined4 *)
             FUN_1438360c0(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x20),
                           param_1 + 0x120,param_1 + 0x140,param_1 + 0x90,*param_2,iVar1);
    puVar3 = (undefined4 *)(param_3 + 0x14);
    if (iVar6 == 1) {
      *puVar3 = *puVar2;
      return;
    }
    lVar4 = (longlong)iVar6;
    if (0 < lVar4) {
      lVar5 = (longlong)puVar2 - (longlong)puVar3;
      do {
        *puVar3 = *(undefined4 *)(lVar5 + (longlong)puVar3);
        puVar3 = puVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 143839060 FUN_143839060 body=129 status=ok
// SIG undefined FUN_143839060(void)

undefined1 *
FUN_143839060(longlong param_1,undefined1 *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x168) + (longlong)*param_3 * 4);
  if (iVar1 < 0) {
    *param_2 = 0;
    return param_2;
  }
  iVar4 = iVar1 + 1;
  if (iVar4 < *(int *)(param_1 + 0x170)) {
    lVar2 = (longlong)iVar4;
    piVar3 = (int *)(*(longlong *)(param_1 + 0x168) + lVar2 * 4);
    do {
      if (*piVar3 != *param_3) break;
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x170));
  }
  *param_4 = iVar1;
  *param_2 = 1;
  *param_5 = iVar4;
  return param_2;
}



// FUNCTION 1438390f0 FUN_1438390f0 body=575 status=ok
// SIG undefined FUN_1438390f0(void)

void FUN_1438390f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  
  *(undefined4 *)(param_1 + 0x178) = param_3;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_1 + 0x160) = 0;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x9c) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x90,iVar6,4);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x98);
  if (0 < iVar6) {
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x90) + (longlong)*(int *)(param_1 + 0x98) * 4);
    for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
  }
  *(int *)(param_1 + 0x98) = iVar1;
  iVar1 = *(int *)(param_1 + 0x30);
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x7c) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x70,iVar6,4);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x78);
  if (0 < iVar6) {
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x78) * 4);
    for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
  }
  *(int *)(param_1 + 0x78) = iVar1;
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x10c) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x100,iVar6,1);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x108);
  puVar7 = (undefined1 *)((longlong)*(int *)(param_1 + 0x108) + *(longlong *)(param_1 + 0x100));
  lVar5 = (longlong)iVar6;
  if (0 < iVar6) {
    for (; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x108) = iVar1;
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x174) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,(longlong *)(param_1 + 0x168),iVar6,4);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x170);
  if (0 < iVar6) {
    puVar8 = (undefined4 *)
             (*(longlong *)(param_1 + 0x168) + (longlong)*(int *)(param_1 + 0x170) * 4);
    for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = 0xffffffff;
      puVar8 = puVar8 + 1;
    }
  }
  *(int *)(param_1 + 0x170) = iVar1;
  return;
}



// FUNCTION 143839330 FUN_143839330 body=72 status=ok
// SIG undefined FUN_143839330(void)

void FUN_143839330(longlong param_1,undefined4 *param_2)

{
  FUN_143836120(*(undefined8 *)(param_1 + 0x28),param_1 + 0xc0,*(undefined8 *)(param_1 + 0x58),
                param_1 + 0x130,param_1 + 0x70,param_1 + 0x80,*param_2,
                *(undefined4 *)(param_1 + 0x60));
  return;
}



// FUNCTION 143839380 FUN_143839380 body=14 status=ok
// SIG undefined FUN_143839380(void)

void FUN_143839380(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143839387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
  return;
}



// FUNCTION 143839390 FUN_143839390 body=95 status=ok
// SIG undefined FUN_143839390(void)

void FUN_143839390(ulonglong param_1,ulonglong param_2)

{
  if (param_1 < param_2) {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x0001438393c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x1a8));
    return;
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x0001438393e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
  return;
}



// FUNCTION 1438393f0 FUN_1438393f0 body=384 status=ok
// SIG undefined FUN_1438393f0(void)

void FUN_1438393f0(longlong param_1,int param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  lVar6 = FUN_143838370(plVar1,param_3);
  if (lVar6 == 0) {
    iVar10 = -1;
    uVar7 = 0xffffffff;
  }
  else {
    iVar10 = *(int *)(lVar6 + 4);
    uVar7 = (uint)(lVar6 - *(longlong *)(param_1 + 0x198) >> 3);
  }
  lVar6 = *plVar1 + (longlong)iVar10 * 0x38;
  FUN_1437f14b0(param_4 + 2,0,*(undefined4 *)(lVar6 + 0x10),0);
  bVar9 = 0;
  bVar4 = false;
  iVar8 = 0;
  bVar5 = false;
  if (0 < *(int *)(lVar6 + 0x10)) {
    do {
      bVar4 = bVar5;
      lVar11 = (longlong)iVar8;
      bVar3 = *(byte *)(*(longlong *)(lVar6 + 8) + 0x10 + lVar11 * 0x14);
      if ((bVar3 & 8) == 0) {
        if (*(int *)(*(longlong *)(lVar6 + 0x28) + lVar11 * 4) == param_2) {
          *(undefined1 *)(*(longlong *)(lVar6 + 8) + lVar11 * 0x14 + 0x10) = 8;
          bVar9 = bVar9 | bVar3 & 0x40;
          if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_4,2);
          }
          *(short *)(*param_4 + (longlong)(int)param_4[1] * 2) = (short)iVar8;
          *(int *)(param_4 + 1) = (int)param_4[1] + 1;
          puVar2 = (uint *)(param_4[2] + (lVar11 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
        }
        else {
          bVar4 = true;
        }
      }
      iVar8 = iVar8 + 1;
      bVar5 = bVar4;
    } while (iVar8 < *(int *)(lVar6 + 0x10));
  }
  *(bool *)(param_4 + 5) = bVar9 != 0;
  if (!bVar4) {
    if ((*(uint *)(param_1 + 0x1a0) < uVar7) ||
       (lVar6 = *(longlong *)(param_1 + 0x198) + (longlong)(int)uVar7 * 8,
       *(int *)(*(longlong *)(param_1 + 0x198) + 4 + (longlong)(int)uVar7 * 8) != iVar10)) {
      lVar6 = FUN_143838370(plVar1,(longlong)iVar10 * 0x38 + *plVar1);
    }
    FUN_143838430(plVar1,lVar6);
  }
  return;
}



// FUNCTION 143839570 FUN_143839570 body=421 status=ok
// SIG undefined FUN_143839570(void)

void FUN_143839570(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  lVar5 = FUN_143838370(plVar1);
  if (lVar5 == 0) {
    iVar8 = -1;
    uVar7 = 0xffffffff;
  }
  else {
    iVar8 = *(int *)(lVar5 + 4);
    uVar7 = (uint)(lVar5 - *(longlong *)(param_1 + 0x198) >> 3);
  }
  lVar5 = *param_3;
  lVar14 = *plVar1 + (longlong)iVar8 * 0x38;
  uVar9 = param_3[1] - lVar5 >> 1;
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff) < (int)uVar9) {
    FUN_14370c310(&PTR_vftable_1467f0638,param_4,uVar9 & 0xffffffff,2);
  }
  FUN_143795730(*param_4,lVar5,uVar9 & 0xffffffff);
  *(int *)(param_4 + 1) = (int)uVar9;
  FUN_1437f14b0(param_4 + 2,0,*(undefined4 *)(lVar14 + 0x10),0);
  puVar10 = (ushort *)*param_3;
  uVar11 = 0;
  uVar12 = 0;
  uVar9 = (param_3[1] - (longlong)puVar10) + 1U >> 1;
  if ((ushort *)param_3[1] < puVar10) {
    uVar9 = uVar11;
  }
  uVar13 = uVar11;
  if (uVar9 != 0) {
    do {
      uVar4 = *puVar10;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 + 1;
      lVar5 = *(longlong *)(lVar14 + 8) + (ulonglong)uVar4 * 0x14;
      bVar3 = *(byte *)(lVar5 + 0x10);
      *(undefined1 *)(lVar5 + 0x10) = 8;
      uVar12 = (uint)uVar13 | bVar3 & 0x40;
      puVar2 = (uint *)(param_4[2] + (ulonglong)(uVar4 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar4 & 0x1f);
      uVar13 = (ulonglong)uVar12;
    } while (uVar11 != uVar9);
  }
  *(bool *)(param_4 + 5) = uVar12 != 0;
  lVar6 = *(longlong *)(lVar14 + 8);
  lVar5 = lVar6 + (longlong)*(int *)(lVar14 + 0x10) * 0x14;
  while( true ) {
    if (lVar6 == lVar5) {
      if ((*(uint *)(param_1 + 0x1a0) < uVar7) ||
         (lVar5 = *(longlong *)(param_1 + 0x198) + (longlong)(int)uVar7 * 8,
         *(int *)(*(longlong *)(param_1 + 0x198) + 4 + (longlong)(int)uVar7 * 8) != iVar8)) {
        lVar5 = FUN_143838370(plVar1,(longlong)iVar8 * 0x38 + *plVar1);
      }
      FUN_143838430(plVar1,lVar5);
      return;
    }
    if ((*(byte *)(lVar6 + 0x10) & 8) == 0) break;
    lVar6 = lVar6 + 0x14;
  }
  return;
}



// FUNCTION 143839720 FUN_143839720 body=415 status=ok
// SIG undefined FUN_143839720(void)

void FUN_143839720(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar9 = *(int *)(param_1 + 200) + -1;
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4);
    if (iVar7 != iVar9) {
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar9 * 0x14);
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar7 * 0x14);
      *puVar1 = *puVar3;
      puVar1[1] = puVar3[1];
      puVar1[2] = puVar3[2];
      puVar1[3] = puVar3[3];
      *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar3 + 4);
      *(undefined1 *)((longlong)puVar1 + 0x11) = *(undefined1 *)((longlong)puVar3 + 0x11);
      *(undefined2 *)((longlong)puVar1 + 0x12) = *(undefined2 *)((longlong)puVar3 + 0x12);
      iVar2 = *(int *)(param_1 + 0x60);
      lVar6 = (longlong)iVar2;
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x130) + (longlong)(iVar2 * iVar9) * 4);
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x130) + (longlong)(iVar2 * iVar7) * 4);
      if (iVar2 == 1) {
        *puVar3 = *puVar1;
      }
      else if (0 < lVar6) {
        lVar8 = (longlong)puVar1 - (longlong)puVar3;
        do {
          *puVar3 = *(undefined4 *)(lVar8 + (longlong)puVar3);
          puVar3 = puVar3 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar9 * 4);
      *(int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 4) = iVar9;
      *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 4) = iVar7;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4) = 0xffffffff;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
    iVar7 = *(int *)(param_1 + 200) + -1;
    uVar4 = FUN_143703a50();
    uVar5 = *(uint *)(param_1 + 0xcc) & 0x3fffffff;
    if ((int)uVar5 < iVar7) {
      iVar2 = uVar5 * 2;
      iVar9 = iVar7;
      if (iVar7 < iVar2) {
        iVar9 = iVar2;
      }
      FUN_14370c310(uVar4,param_1 + 0xc0,iVar9,0x14);
    }
    *(int *)(param_1 + 200) = iVar7;
    iVar7 = *(int *)(param_1 + 0x60) * iVar7;
    uVar4 = FUN_143703a50();
    uVar5 = *(uint *)(param_1 + 0x13c) & 0x3fffffff;
    if ((int)uVar5 < iVar7) {
      iVar2 = uVar5 * 2;
      iVar9 = iVar7;
      if (iVar7 < iVar2) {
        iVar9 = iVar2;
      }
      FUN_14370c310(uVar4,param_1 + 0x130,iVar9,4);
    }
    *(int *)(param_1 + 0x138) = iVar7;
  }
  return;
}



// FUNCTION 1438398c0 FUN_1438398c0 body=14 status=ok
// SIG undefined FUN_1438398c0(void)

void FUN_1438398c0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001438398c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
  return;
}



// FUNCTION 1438398d0 FUN_1438398d0 body=41 status=ok
// SIG undefined FUN_1438398d0(void)

void FUN_1438398d0(longlong param_1,longlong param_2)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1a8));
                    /* WARNING: Could not recover jumptable at 0x0001438398f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_2 + 0x1a8));
  return;
}



// FUNCTION 143839900 FUN_143839900 body=652 status=ok
// SIG undefined FUN_143839900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143839900(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  LPVOID pvVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshInstance::vftable;
  lVar12 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar8 = uRam00000001467f0898;
  param_1[8] = _DAT_1467f0890;
  param_1[9] = uVar8;
  uVar8 = uRam00000001467f08a8;
  param_1[10] = _DAT_1467f08a0;
  param_1[0xb] = uVar8;
  uVar6 = uRam00000001467f08bc;
  uVar5 = uRam00000001467f08b8;
  uVar4 = uRam00000001467f08b4;
  *(undefined4 *)(param_1 + 0xc) = _DAT_1467f08b0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0xd) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar6;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_14370c030();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x28) = 0;
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar8;
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  uVar5 = *(undefined4 *)(param_2 + 0x88);
  uVar6 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar4;
  *(undefined4 *)(param_1 + 0x11) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar6;
  uVar4 = *(undefined4 *)(param_2 + 0x94);
  uVar5 = *(undefined4 *)(param_2 + 0x98);
  uVar6 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x13) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar6;
  iVar1 = *(int *)(param_2 + 0x38);
  lVar14 = (longlong)iVar1;
  uVar8 = FUN_143703a50();
  uVar11 = *(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff;
  if ((int)uVar11 < iVar1) {
    iVar3 = uVar11 * 2;
    iVar7 = iVar1;
    if (iVar1 < iVar3) {
      iVar7 = iVar3;
    }
    FUN_14370c310(uVar8,param_1 + 6,iVar7,0x18);
  }
  iVar7 = (*(int *)(param_1 + 7) - iVar1) + -1;
  lVar13 = (longlong)iVar7;
  if (-1 < iVar7) {
    plVar15 = (longlong *)(param_1[6] + lVar14 * 0x18 + lVar13 * 0x18);
    do {
      lVar2 = plVar15[1];
      if (lVar2 != 0) {
        FUN_143718950(lVar2);
        pvVar9 = TlsGetValue(DAT_146b7bf70);
        if (pvVar9 == (LPVOID)0x0) {
          pvVar9 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar9 + 0x58),lVar2,0x40);
      }
      if (*plVar15 != 0) {
        FUN_14370c150();
      }
      plVar15 = plVar15 + -3;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  puVar10 = (undefined8 *)(param_1[6] + (longlong)*(int *)(param_1 + 7) * 0x18);
  iVar7 = iVar1 - *(int *)(param_1 + 7);
  lVar13 = (longlong)iVar7;
  if (0 < iVar7) {
    do {
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
        *(undefined1 *)(puVar10 + 2) = 1;
      }
      puVar10 = puVar10 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(int *)(param_1 + 7) = iVar1;
  if (0 < lVar14) {
    do {
      lVar13 = *(longlong *)(param_2 + 0x30);
      lVar2 = param_1[6];
      *(undefined1 *)(lVar2 + 0x10 + lVar12) = 0;
      if (*(longlong *)(lVar13 + lVar12) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar2 + lVar12) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(lVar2 + lVar12) = *(undefined8 *)(lVar13 + lVar12);
      *(undefined1 *)(lVar13 + 0x10 + lVar12) = 0;
      lVar12 = lVar12 + 0x18;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return param_1;
}



// FUNCTION 143839b90 FUN_143839b90 body=252 status=ok
// SIG undefined FUN_143839b90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143839b90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshInstance::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = uRam00000001467f0898;
  param_1[8] = _DAT_1467f0890;
  param_1[9] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[10] = _DAT_1467f08a0;
  param_1[0xb] = uVar1;
  uVar4 = uRam00000001467f08bc;
  uVar3 = uRam00000001467f08b8;
  uVar2 = uRam00000001467f08b4;
  *(undefined4 *)(param_1 + 0xc) = _DAT_1467f08b0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  lVar6 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar5 + 0x58),0x1b0);
  if (lVar6 != 0) {
    lVar7 = FUN_143836b70(lVar6);
  }
  *(undefined1 *)(param_1 + 5) = 1;
  if (lVar7 != 0) {
    FUN_14370c030(lVar7);
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = lVar7;
  if (lVar7 != 0) {
    FUN_14370c150(lVar7);
  }
  return param_1;
}



// FUNCTION 143839c90 FUN_143839c90 body=144 status=ok
// SIG undefined FUN_143839c90(void)

void FUN_143839c90(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  FUN_143837800(uVar1,param_2,param_3,param_4);
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143834a90(uVar1,4);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143839d20 FUN_143839d20 body=160 status=ok
// SIG undefined FUN_143839d20(void)

void FUN_143839d20(longlong param_1,undefined4 param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  FUN_143837a20(uVar1,param_2,param_3,param_4,param_5);
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143834a90(uVar1,2);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143839dc0 FUN_143839dc0 body=175 status=ok
// SIG undefined FUN_143839dc0(void)

undefined8 FUN_143839dc0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  uVar1 = FUN_143837ca0(uVar1,param_2,param_3);
  lVar5 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar5) {
    lVar4 = 0;
    do {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar4);
      if (*(char *)(puVar3 + 2) == '\x01') {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = FUN_143833c50(puVar3);
      }
      FUN_143834980(uVar2,param_3);
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar1;
}



// FUNCTION 143839e70 FUN_143839e70 body=208 status=ok
// SIG undefined FUN_143839e70(void)

void FUN_143839e70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = *param_2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  FUN_143837ed0(uVar1,local_res8,param_3,param_4);
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143834a10(uVar1,param_4);
      local_res10[0] = *param_2;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143835050(uVar1,param_1,local_res10);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143839f40 FUN_143839f40 body=146 status=ok
// SIG undefined FUN_143839f40(void)

void FUN_143839f40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  FUN_143838130(uVar1,param_2,param_3);
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143834a90(uVar1,param_3);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143839fe0 FUN_143839fe0 body=159 status=ok
// SIG undefined FUN_143839fe0(void)

undefined8 FUN_143839fe0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  uVar1 = FUN_1438381d0(uVar1,param_2);
  lVar5 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar5) {
    lVar4 = 0;
    do {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar4);
      if (*(char *)(puVar3 + 2) == '\x01') {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = FUN_143833c50(puVar3);
      }
      FUN_143834980(uVar2,param_2);
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return uVar1;
}



// FUNCTION 14383a080 FUN_14383a080 body=53 status=ok
// SIG undefined FUN_14383a080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14383a080(longlong param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = _DAT_1467f06e0;
  uStack_14 = uRam00000001467f06e4;
  uStack_10 = uRam00000001467f06e8;
  uStack_c = DAT_1467f06ec;
  FUN_143717ce0(param_1 + 0x40,*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) + 0x90,&local_18,
                param_2);
  return;
}



// FUNCTION 14383a0c0 FUN_14383a0c0 body=62 status=ok
// SIG undefined FUN_14383a0c0(void)

void FUN_14383a0c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  FUN_1438390f0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14383a100 FUN_14383a100 body=598 status=ok
// SIG undefined FUN_14383a100(void)

void FUN_14383a100(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  iVar2 = *(int *)(param_1 + 0x38) + -1;
  lVar9 = (longlong)param_2;
  lVar10 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar10 * 0x18);
    do {
      lVar6 = plVar8[1];
      if (lVar6 != 0) {
        FUN_143718950(lVar6);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar6,0x40);
      }
      if (*plVar8 != 0) {
        FUN_14370c150();
      }
      plVar8 = plVar8 + -3;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar4 = FUN_143703a50();
  uVar7 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
  if ((int)uVar7 < param_2) {
    iVar1 = uVar7 * 2;
    iVar2 = param_2;
    if (param_2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_14370c310(uVar4,param_1 + 0x30,iVar2,0x18);
  }
  iVar2 = (*(int *)(param_1 + 0x38) - param_2) + -1;
  lVar10 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar9 * 0x18 + lVar10 * 0x18);
    do {
      lVar6 = plVar8[1];
      if (lVar6 != 0) {
        FUN_143718950(lVar6);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar6,0x40);
      }
      if (*plVar8 != 0) {
        FUN_14370c150();
      }
      plVar8 = plVar8 + -3;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  puVar11 = (undefined8 *)
            (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(param_1 + 0x38) * 0x18);
  iVar2 = param_2 - *(int *)(param_1 + 0x38);
  lVar10 = (longlong)iVar2;
  if (0 < iVar2) {
    do {
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined1 *)(puVar11 + 2) = 1;
      }
      puVar11 = puVar11 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 0x38) = param_2;
  lVar10 = 0;
  if (0 < lVar9) {
    do {
      pvVar3 = TlsGetValue(DAT_146b7bf70);
      if (pvVar3 == (LPVOID)0x0) {
        pvVar3 = DAT_146b7bf68;
      }
      lVar5 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar3 + 0x58),0x78);
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = FUN_1438342c0(lVar5);
      }
      thunk_FUN_143719c70(0x33f6960);
      FUN_143834df0(lVar6,param_1,0x3f800000);
      lVar5 = *(longlong *)(param_1 + 0x30);
      *(undefined1 *)(lVar10 + 0x10 + lVar5) = 1;
      if (lVar6 != 0) {
        FUN_14370c030(lVar6);
      }
      if (*(longlong *)(lVar10 + lVar5) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar10 + lVar5) = lVar6;
      if (lVar6 != 0) {
        FUN_14370c150(lVar6);
      }
      lVar9 = lVar9 + -1;
      lVar10 = lVar10 + 0x18;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 14383a360 FUN_14383a360 body=91 status=ok
// SIG undefined FUN_14383a360(void)

void FUN_14383a360(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143834fd0(uVar1);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14383a3c0 FUN_14383a3c0 body=128 status=ok
// SIG undefined FUN_14383a3c0(void)

void FUN_14383a3c0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      local_res8[0] = *param_2;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143835050(uVar1,param_1,local_res8);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14383a440 FUN_14383a440 body=115 status=ok
// SIG undefined FUN_14383a440(void)

undefined1 * FUN_14383a440(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar3 = 0;
  lVar4 = lVar3;
  if (0 < (longlong)iVar1) {
    do {
      cVar2 = FUN_143835150(*(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x30)));
      if (cVar2 != '\0') {
        *param_2 = 1;
        return param_2;
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar3 < iVar1);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14383a4c0 FUN_14383a4c0 body=152 status=ok
// SIG undefined FUN_14383a4c0(void)

void FUN_14383a4c0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res8[0] = *param_2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar1 = FUN_142fbda20();
  }
  FUN_1438383e0(uVar1,local_res8);
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      local_res10[0] = *param_2;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143835050(uVar1,param_1,local_res10);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14383a560 FUN_14383a560 body=54 status=ok
// SIG undefined FUN_14383a560(void)

void FUN_14383a560(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  if (*param_1 != 0) {
    FUN_14370c150();
  }
  *param_1 = lVar1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



// FUNCTION 14383a5a0 FUN_14383a5a0 body=100 status=ok
// SIG undefined FUN_14383a5a0(void)

void FUN_14383a5a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_14383a560(param_1 + 0x18,param_2 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    lVar1 = 0;
    uVar2 = (ulonglong)*(uint *)(param_1 + 0x38);
    do {
      FUN_14383a560(*(longlong *)(param_1 + 0x30) + lVar1,*(longlong *)(param_2 + 0x30) + lVar1);
      lVar1 = lVar1 + 0x18;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 14383a610 FUN_14383a610 body=134 status=ok
// SIG undefined FUN_14383a610(void)

void FUN_14383a610(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      local_res8[0] = *param_3;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143835360(uVar1,param_2,local_res8,param_4);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14383a6a0 FUN_14383a6a0 body=134 status=ok
// SIG undefined FUN_14383a6a0(void)

void FUN_14383a6a0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      local_res8[0] = *param_3;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143835410(uVar1,param_2,local_res8,param_4);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14383a730 FUN_14383a730 body=134 status=ok
// SIG undefined FUN_14383a730(void)

void FUN_14383a730(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      local_res8[0] = *param_3;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_1438354e0(uVar1,param_2,local_res8,param_4);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14383a7c0 FUN_14383a7c0 body=176 status=ok
// SIG undefined FUN_14383a7c0(void)

void FUN_14383a7c0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int *piVar7;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x168);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x170);
  local_res8[0] = *param_2;
  FUN_14383a3c0(param_1,local_res8);
  iVar2 = *(int *)(lVar3 + (longlong)*param_2 * 4);
  uVar6 = (ulonglong)iVar2;
  if (-1 < iVar2) {
    piVar7 = (int *)(lVar3 + uVar6 * 4);
    do {
      local_res10[0] = (int)uVar6;
      FUN_14383a3c0(param_1,local_res10);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      piVar7 = piVar7 + 1;
      if ((int)((longlong)iVar1 * 4 >> 2) <= (int)uVar5) break;
    } while (*piVar7 == *param_2);
  }
  local_res18[0] = *param_2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar4 = FUN_142fbda20(param_1 + 0x18);
  }
  FUN_143838560(uVar4,local_res18);
  return;
}



// FUNCTION 14383a870 FUN_14383a870 body=91 status=ok
// SIG undefined FUN_14383a870(void)

void FUN_14383a870(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar3);
      if (*(char *)(puVar2 + 2) == '\x01') {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = FUN_143833c50();
      }
      FUN_143835770(uVar1);
      lVar3 = lVar3 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14383a8d0 FUN_14383a8d0 body=179 status=ok
// SIG undefined FUN_14383a8d0(void)

void FUN_14383a8d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar8 = (longlong)iVar1;
  uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar7 = iVar1;
    if (iVar1 < iVar3) {
      iVar7 = iVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar7,8);
  }
  iVar7 = 0;
  *(int *)(param_2 + 1) = iVar1;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      lVar2 = *param_2;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar9);
      if (*(char *)(puVar6 + 2) == '\x01') {
        uVar5 = *puVar6;
      }
      else {
        uVar5 = FUN_143833c50();
      }
      FUN_143835cd0(uVar5,lVar2 + (longlong)iVar7 * 8);
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 14383a990 FUN_14383a990 body=197 status=ok
// SIG undefined FUN_14383a990(void)

void FUN_14383a990(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x38);
  iVar6 = 0;
  if (0 < lVar4) {
    lVar5 = 0;
    do {
      lVar1 = *param_2;
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar5);
      if (*(char *)(puVar3 + 2) == '\x01') {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = FUN_143833c50();
      }
      FUN_143835ce0(uVar2,lVar1 + (longlong)iVar6 * 8);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_2 + 0xc)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*param_2,8,*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)
    ;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
  *param_2 = 0;
  return;
}



// FUNCTION 14383aa60 FUN_14383aa60 body=144 status=ok
// SIG undefined FUN_14383aa60(void)

void FUN_14383aa60(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_res8 [2];
  
  lVar5 = (longlong)*(int *)(param_1 + 0x38);
  iVar4 = 0;
  if (0 < lVar5) {
    lVar6 = 0;
    do {
      local_res8[0] = *param_3;
      lVar1 = *param_2;
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar6);
      if (*(char *)(puVar3 + 2) == '\x01') {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = FUN_143833c50();
      }
      FUN_143835d10(uVar2,lVar1 + (longlong)iVar4 * 8,param_1,local_res8);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14383aaf0 FUN_14383aaf0 body=115 status=ok
// SIG undefined FUN_14383aaf0(void)

undefined8 * FUN_14383aaf0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiDirectedGraphExplicitCost::vftable;
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
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  return param_1;
}



// FUNCTION 14383ab70 FUN_14383ab70 body=434 status=ok
// SIG undefined FUN_14383ab70(void)

void FUN_14383ab70(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = hkaiDirectedGraphExplicitCost::vftable;
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(*(int *)(param_1 + 0xf) + -1);
  if (-1 < *(int *)(param_1 + 0xf) + -1) {
    plVar2 = (longlong *)(param_1[0xe] + 8 + lVar3 * 0x10);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],0x10,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],4,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],4,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],8,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
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



// FUNCTION 14383ad30 FUN_14383ad30 body=139 status=ok
// SIG undefined FUN_14383ad30(void)

longlong FUN_14383ad30(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14383ab70();
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



// FUNCTION 14383adc0 FUN_14383adc0 body=168 status=ok
// SIG undefined FUN_14383adc0(void)

undefined8 * FUN_14383adc0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiDirectedGraphInstanceData::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
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
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 14383ae70 FUN_14383ae70 body=586 status=ok
// SIG undefined FUN_14383ae70(void)

longlong FUN_14383ae70(longlong param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong *local_res20;
  
  iVar4 = *(int *)(param_1 + 0x30);
  iVar13 = 0;
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4);
  local_res20 = param_4;
  if (iVar11 == -1) {
    iVar11 = *(int *)(param_1 + 0x88);
    *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4) = iVar11;
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x88) == (*(uint *)(param_1 + 0x8c) & 0x3fffffff)) {
      FUN_14370c460(uVar6,(longlong *)(param_1 + 0x80),8);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)*(int *)(param_1 + 0x88) * 8);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
  }
  piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar11 * 8);
  piVar7 = (int *)FUN_14383b340(param_1,local_res10,
                                *(int *)(*(longlong *)(param_1 + 0x80) + 4 + (longlong)iVar11 * 8) +
                                1);
  iVar11 = *piVar7;
  iVar10 = iVar11 - *(int *)(param_1 + 0x30);
  local_res18 = *(longlong *)(param_1 + 0x90) + (longlong)iVar10 * 8;
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar10 * 4);
  if (0 < piVar2[1]) {
    puVar15 = (undefined4 *)(local_res18 + 4);
    puVar16 = puVar1;
    do {
      iVar5 = *piVar2 + iVar13;
      if (iVar5 < *(int *)(param_1 + 0x30)) {
        lVar14 = *(longlong *)(param_1 + 0x28);
      }
      else {
        iVar5 = iVar5 - *(int *)(param_1 + 0x30);
        lVar14 = *(longlong *)(param_1 + 0x90);
      }
      lVar12 = lVar14 + (longlong)iVar5 * 8;
      *(undefined2 *)(puVar15 + -1) = *(undefined2 *)(lVar14 + (longlong)iVar5 * 8);
      *(undefined2 *)((longlong)puVar15 + -2) = *(undefined2 *)(lVar12 + 2);
      *puVar15 = *(undefined4 *)(lVar12 + 4);
      iVar9 = (*piVar2 - iVar4) + iVar13;
      *puVar16 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 4);
      iVar5 = *(int *)(param_1 + 0x58);
      lVar14 = (longlong)iVar5;
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)(iVar5 * iVar9) * 4);
      puVar8 = (undefined4 *)
               (*(longlong *)(param_1 + 0xa0) + (longlong)((iVar13 + iVar10) * iVar5) * 4);
      if (iVar5 == 1) {
        *puVar8 = *puVar3;
      }
      else if (0 < lVar14) {
        lVar12 = (longlong)puVar3 - (longlong)puVar8;
        do {
          *puVar8 = *(undefined4 *)(lVar12 + (longlong)puVar8);
          puVar8 = puVar8 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      iVar13 = iVar13 + 1;
      puVar15 = puVar15 + 2;
      puVar16 = puVar16 + 1;
      param_4 = local_res20;
    } while (iVar13 < piVar2[1]);
  }
  if (param_3 != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x58) == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = *(longlong *)(param_1 + 0xa0) +
                 (longlong)((piVar2[1] + iVar10) * *(int *)(param_1 + 0x58)) * 4;
    }
  }
  lVar14 = local_res18 + (longlong)piVar2[1] * 8;
  if (piVar2[1] != 0) {
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,*piVar2);
    FUN_14383b0c0(param_1,&local_res20);
  }
  if (param_4 != (longlong *)0x0) {
    *param_4 = (longlong)(puVar1 + piVar2[1]);
  }
  puVar1[piVar2[1]] = 0;
  piVar2[1] = piVar2[1] + 1;
  *piVar2 = iVar11;
  return lVar14;
}



// FUNCTION 14383b0c0 FUN_14383b0c0 body=383 status=ok
// SIG undefined FUN_14383b0c0(void)

void FUN_14383b0c0(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 200) < param_3) {
    plVar7 = (longlong *)(param_1 + 0xc0);
    uVar3 = FUN_143703a50();
    uVar5 = *(uint *)(param_1 + 0xcc) & 0x3fffffff;
    if ((int)uVar5 < param_3) {
      iVar2 = uVar5 * 2;
      iVar9 = param_3;
      if (param_3 < iVar2) {
        iVar9 = iVar2;
      }
      FUN_14370c310(uVar3,plVar7,iVar9,0x10);
    }
    iVar2 = (*(int *)(param_1 + 200) - param_3) + -1;
    lVar8 = (longlong)iVar2;
    if (-1 < iVar2) {
      puVar6 = (uint *)((longlong)param_3 * 0x10 + *plVar7 + 0xc + lVar8 * 0x10);
      do {
        uVar3 = FUN_143703a50();
        puVar6[-1] = 0;
        if (-1 < (int)*puVar6) {
          FUN_143702e10(uVar3,*(undefined8 *)(puVar6 + -3),4,*puVar6 & 0x3fffffff);
        }
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        *puVar6 = 0x80000000;
        puVar6 = puVar6 + -4;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
    iVar2 = param_3 - *(int *)(param_1 + 200);
    puVar4 = (undefined8 *)((longlong)*(int *)(param_1 + 200) * 0x10 + *plVar7);
    lVar8 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0x80000000;
        }
        puVar4 = puVar4 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    *(int *)(param_1 + 200) = param_3;
  }
  uVar1 = *param_2;
  plVar7 = (longlong *)((longlong)(param_3 + -1) * 0x10 + *(longlong *)(param_1 + 0xc0));
  uVar3 = FUN_143703a50();
  if (*(uint *)(plVar7 + 1) == (*(uint *)((longlong)plVar7 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,plVar7,4);
  }
  *(undefined4 *)(*plVar7 + (longlong)(int)plVar7[1] * 4) = uVar1;
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  return;
}



// FUNCTION 14383b290 FUN_14383b290 body=166 status=ok
// SIG undefined FUN_14383b290(void)

void FUN_14383b290(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_1 + 200) + -1;
  lVar4 = (longlong)iVar1;
  if (-1 < iVar1) {
    puVar3 = (uint *)(*(longlong *)(param_1 + 0xc0) + 0xc + lVar4 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar3 + -3),4,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 14383b340 FUN_14383b340 body=378 status=ok
// SIG undefined FUN_14383b340(void)

int * FUN_14383b340(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 local_res20 [8];
  
  piVar2 = (int *)FUN_14383b4c0(param_1,local_res20);
  iVar5 = *piVar2;
  if (iVar5 == -1) {
    iVar5 = *(int *)(param_1 + 0xb8);
    iVar8 = iVar5 + param_3;
    uVar3 = FUN_143703a50();
    uVar4 = *(uint *)(param_1 + 0xbc) & 0x3fffffff;
    if ((int)uVar4 < iVar8) {
      iVar1 = uVar4 * 2;
      iVar7 = iVar8;
      if (iVar8 < iVar1) {
        iVar7 = iVar1;
      }
      FUN_14370c310(uVar3,param_1 + 0xb0,iVar7,4);
    }
    iVar7 = iVar8 - *(int *)(param_1 + 0xb8);
    if (0 < iVar7) {
      puVar9 = (undefined4 *)
               (*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0xb8) * 4);
      for (lVar6 = (longlong)iVar7; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    *(int *)(param_1 + 0xb8) = iVar8;
    uVar3 = FUN_143703a50();
    iVar7 = *(int *)(param_1 + 0x98) + param_3;
    uVar4 = *(uint *)(param_1 + 0x9c) & 0x3fffffff;
    if ((int)uVar4 < iVar7) {
      iVar1 = uVar4 * 2;
      if (iVar7 < iVar1) {
        iVar7 = iVar1;
      }
      FUN_14370c310(uVar3,param_1 + 0x90,iVar7,8);
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + param_3;
    iVar8 = *(int *)(param_1 + 0x58) * iVar8;
    uVar3 = FUN_143703a50();
    uVar4 = *(uint *)(param_1 + 0xac) & 0x3fffffff;
    if ((int)uVar4 < iVar8) {
      iVar1 = uVar4 * 2;
      iVar7 = iVar8;
      if (iVar8 < iVar1) {
        iVar7 = iVar1;
      }
      FUN_14370c310(uVar3,param_1 + 0xa0,iVar7,4);
    }
    iVar7 = iVar8 - *(int *)(param_1 + 0xa8);
    if (0 < iVar7) {
      puVar9 = (undefined4 *)
               (*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_1 + 0xa8) * 4);
      for (lVar6 = (longlong)iVar7; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
    }
    *(int *)(param_1 + 0xa8) = iVar8;
    iVar5 = *(int *)(param_1 + 0x30) + iVar5;
  }
  *param_2 = iVar5;
  return param_2;
}



// FUNCTION 14383b4c0 FUN_14383b4c0 body=286 status=ok
// SIG undefined FUN_14383b4c0(void)

int * FUN_14383b4c0(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 200);
  iVar7 = param_3 + -1;
  if (iVar1 < param_3) {
    *param_2 = -1;
    return param_2;
  }
  if (iVar7 < iVar1) {
    lVar3 = (longlong)iVar7;
    piVar4 = (int *)(*(longlong *)(param_1 + 0xc0) + 8 + lVar3 * 0x10);
    iVar6 = iVar7;
    do {
      if (0 < *piVar4) {
        plVar5 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0xc0));
        iVar1 = *(int *)(*plVar5 + (longlong)((int)plVar5[1] + -1) * 4);
        *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
        if (iVar6 - iVar7 != 0) {
          plVar5 = (longlong *)
                   ((longlong)((iVar6 - iVar7) + -1) * 0x10 + *(longlong *)(param_1 + 0xc0));
          uVar2 = FUN_143703a50();
          if (*(uint *)(plVar5 + 1) == (*(uint *)((longlong)plVar5 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar2,plVar5,4);
          }
          *(int *)(*plVar5 + (longlong)(int)plVar5[1] * 4) = iVar1 + param_3;
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        }
        *param_2 = iVar1;
        return param_2;
      }
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (lVar3 < iVar1);
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14383b5e0 FUN_14383b5e0 body=243 status=ok
// SIG undefined FUN_14383b5e0(void)

void FUN_14383b5e0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 0x5c) = param_3;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x68) = param_2;
  iVar1 = *(int *)(param_2 + 0x30);
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x7c) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x70,iVar6,4);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x78);
  if (0 < iVar6) {
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x78) * 4);
    for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x78) = iVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x6c);
  return;
}



// FUNCTION 14383b6e0 FUN_14383b6e0 body=390 status=ok
// SIG undefined FUN_14383b6e0(void)

void FUN_14383b6e0(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int local_res8 [2];
  
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4);
  if (iVar9 == -1) {
    iVar9 = *(int *)(param_1 + 0x88);
    *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)*param_2 * 4) = iVar9;
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x88) == (*(uint *)(param_1 + 0x8c) & 0x3fffffff)) {
      FUN_14370c460(uVar5,(longlong *)(param_1 + 0x80),8);
    }
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x80) + (longlong)*(int *)(param_1 + 0x88) * 8);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
    puVar6[1] = 0;
    *puVar6 = 0xffffffff;
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x80) + 4 + (longlong)iVar9 * 8);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar9 * 8);
  iVar9 = *param_3 - *(int *)(param_1 + 0x30);
  local_res8[0] = iVar8 + -1 + *piVar1;
  iVar8 = (*piVar1 - *(int *)(param_1 + 0x30)) + -1 + iVar8;
  FUN_14383b0c0(param_1,local_res8,1);
  if (piVar1[1] == 1) {
    piVar1[1] = 0;
    *piVar1 = -1;
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 4) = 0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x90);
    lVar11 = (longlong)iVar8;
    puVar2 = (undefined2 *)(lVar10 + (longlong)iVar9 * 8);
    lVar7 = lVar10 + lVar11 * 8;
    *puVar2 = *(undefined2 *)(lVar10 + lVar11 * 8);
    puVar2[1] = *(undefined2 *)(lVar7 + 2);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(lVar7 + 4);
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + lVar11 * 4);
    iVar4 = *(int *)(param_1 + 0x58);
    lVar7 = (longlong)iVar4;
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)(iVar4 * iVar8) * 4);
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xa0) + (longlong)(iVar4 * iVar9) * 4);
    if (iVar4 == 1) {
      *puVar6 = *puVar3;
    }
    else if (0 < lVar7) {
      lVar10 = (longlong)puVar3 - (longlong)puVar6;
      do {
        *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    piVar1[1] = piVar1[1] + -1;
  }
  return;
}



// FUNCTION 14383b870 FUN_14383b870 body=159 status=ok
// SIG undefined FUN_14383b870(void)

undefined8 * FUN_14383b870(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiDirectedGraphInstance::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_14370c030();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar1;
  return param_1;
}



// FUNCTION 14383b910 FUN_14383b910 body=224 status=ok
// SIG undefined FUN_14383b910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14383b910(undefined8 *param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiDirectedGraphInstance::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  pvVar2 = TlsGetValue(DAT_146b7bf70);
  if (pvVar2 == (LPVOID)0x0) {
    pvVar2 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar2 + 0x58),0xd0);
  if (lVar3 != 0) {
    lVar4 = FUN_14383adc0(lVar3);
  }
  *(undefined1 *)(param_1 + 5) = 1;
  if (lVar4 != 0) {
    FUN_14370c030(lVar4);
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    FUN_14370c150(lVar4);
  }
  uVar1 = uRam00000001467f0898;
  param_1[6] = _DAT_1467f0890;
  param_1[7] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[8] = _DAT_1467f08a0;
  param_1[9] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[10] = _DAT_1467f08b0;
  param_1[0xb] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14383b9f0 FUN_14383b9f0 body=139 status=ok
// SIG undefined FUN_14383b9f0(void)

longlong FUN_14383b9f0(longlong param_1,ulonglong param_2)

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



// FUNCTION 14383ba80 CopyCurve body=13 status=ok
// SIG undefined CopyCurve(void)

void FFloatCurve::CopyCurve(longlong param_1,longlong param_2)

{
  FUN_14383a560(param_1 + 0x18,param_2 + 0x18);
  return;
}



// FUNCTION 14383ba90 FUN_14383ba90 body=391 status=ok
// SIG undefined FUN_14383ba90(void)

void FUN_14383ba90(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavVolume::vftable;
  FUN_14383bc20();
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(*(int *)(param_1 + 0xc) + -1);
  if (-1 < *(int *)(param_1 + 0xc) + -1) {
    plVar2 = (longlong *)(param_1[0xb] + 8 + lVar3 * 0x10);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],0x10,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],4,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],0x18,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],8,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x18,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14383bc20 FUN_14383bc20 body=296 status=ok
// SIG undefined FUN_14383bc20(void)

void FUN_14383bc20(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x18,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),8,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x60) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x58) + 8 + lVar4 * 0x10);
    do {
      if (*plVar3 != 0) {
        FUN_14370c150();
      }
      plVar3 = plVar3 + -2;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (-1 < (int)*(uint *)(param_1 + 100)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x58),0x10,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined8 *)(param_1 + 0xb4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  return;
}



// FUNCTION 14383bd50 FUN_14383bd50 body=694 status=ok
// SIG undefined FUN_14383bd50(void)

undefined8 * FUN_14383bd50(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  puVar1 = param_1 + 0x10;
  *param_1 = hkaiNavVolumeInstanceData::vftable;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *puVar1 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_14370c030();
  }
  if (param_1[7] != 0) {
    FUN_14370c150();
  }
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  iVar2 = *(int *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar4,param_1 + 8,iVar2,4);
  }
  FUN_142f87c00(param_1[8],uVar5,iVar2);
  *(int *)(param_1 + 9) = iVar2;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar3 = *(longlong *)(param_2 + 0x50);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,param_1 + 10,iVar2,8);
  }
  iVar8 = iVar2;
  if (*(int *)(param_1 + 0xb) < iVar2) {
    iVar8 = *(int *)(param_1 + 0xb);
  }
  FUN_143738e40(param_1[10],lVar3,iVar8);
  puVar6 = (undefined8 *)(param_1[10] + (longlong)iVar8 * 8);
  lVar7 = (longlong)(iVar2 - iVar8);
  if (0 < iVar2 - iVar8) {
    lVar9 = (longlong)iVar8 * 8 - (longlong)puVar6;
    do {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = *(undefined8 *)(lVar9 + lVar3 + (longlong)puVar6);
      }
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 0xb) = iVar2;
  iVar2 = *(int *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar4,param_1 + 0xc,iVar2,8);
  }
  FUN_143738e40(param_1[0xc],uVar5,iVar2);
  *(int *)(param_1 + 0xd) = iVar2;
  iVar2 = *(int *)(param_2 + 0x78);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar4,param_1 + 0xe,iVar2,0x18);
  }
  FUN_143738e70(param_1[0xe],uVar5,iVar2);
  *(int *)(param_1 + 0xf) = iVar2;
  iVar2 = *(int *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar4,puVar1,iVar2,4);
  }
  FUN_142f87c00(*puVar1,uVar5,iVar2);
  *(int *)(param_1 + 0x11) = iVar2;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  return param_1;
}



// FUNCTION 14383c010 FUN_14383c010 body=127 status=ok
// SIG undefined FUN_14383c010(void)

undefined8 * FUN_14383c010(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavVolumeInstanceData::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff80000000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 14383c090 FUN_14383c090 body=325 status=ok
// SIG undefined FUN_14383c090(void)

void FUN_14383c090(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x8c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x80),4,*(uint *)(param_1 + 0x8c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0x18,*(uint *)(param_1 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x6c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x60),8,*(uint *)(param_1 + 0x6c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),8,*(uint *)(param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),4,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14383c1e0 FUN_14383c1e0 body=139 status=ok
// SIG undefined FUN_14383c1e0(void)

longlong FUN_14383c1e0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14383c090();
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



// FUNCTION 14383c270 FUN_14383c270 body=545 status=ok
// SIG undefined FUN_14383c270(void)

longlong FUN_14383c270(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  iVar6 = *(int *)(param_1 + 0x30);
  iVar10 = *(int *)(param_1 + 0x68);
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)*param_2 * 4);
  if (iVar9 == -1) {
    iVar9 = *(int *)(param_1 + 0x58);
    *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)*param_2 * 4) = iVar9;
    uVar7 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
      FUN_14370c460(uVar7,param_1 + 0x50,8);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
  }
  piVar2 = (int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar9 * 8);
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (longlong)iVar9 * 8);
  if (iVar9 == 0) {
    lVar8 = FUN_14383c4d0(param_1,1);
    piVar2[1] = piVar2[1] + 1;
    *piVar2 = iVar10 + iVar6;
  }
  else {
    iVar9 = (*piVar2 - *(int *)(param_1 + 0x30)) + iVar9;
    uVar7 = FUN_143703a50();
    iVar10 = *(int *)(param_1 + 0x68);
    uVar5 = *(uint *)(param_1 + 0x6c) & 0x3fffffff;
    iVar6 = iVar10 + 1;
    if (((int)uVar5 < iVar6) && ((int)uVar5 < iVar6)) {
      iVar4 = iVar6;
      if (iVar6 < (int)(uVar5 * 2)) {
        iVar4 = uVar5 * 2;
      }
      FUN_14370c310(uVar7,param_1 + 0x60,iVar4,8);
    }
    lVar3 = (longlong)iVar9 * 8;
    lVar8 = *(longlong *)(param_1 + 0x60) + lVar3;
    FUN_143732890(lVar8 + 8,lVar8,(longlong)(iVar10 - iVar9) << 3);
    iVar10 = 0;
    *(int **)(*(longlong *)(param_1 + 0x60) + lVar3) = param_2;
    *(int *)(param_1 + 0x68) = iVar6;
    lVar8 = *(longlong *)(param_1 + 0x60);
    piVar2[1] = piVar2[1] + 1;
    lVar8 = lVar8 + lVar3;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        if (iVar10 != *param_2) {
          if ((*(int *)(param_1 + 0x48) == 0) ||
             (iVar6 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar10 * 4), iVar6 == -1))
          {
            iVar6 = -1;
          }
          else {
            iVar6 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 8);
          }
          if (iVar9 <= iVar6 - *(int *)(param_1 + 0x30)) {
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar10 * 4);
            if (iVar6 == -1) {
              iVar6 = *(int *)(param_1 + 0x58);
              *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar10 * 4) = iVar6;
              uVar7 = FUN_143703a50();
              if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
                FUN_14370c460(uVar7,param_1 + 0x50,8);
              }
              puVar1 = (undefined4 *)
                       (*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
              *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
              puVar1[1] = 0;
              *puVar1 = 0xffffffff;
            }
            piVar2 = (int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 8);
            *piVar2 = *piVar2 + 1;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x20));
    }
  }
  return lVar8;
}



// FUNCTION 14383c4d0 FUN_14383c4d0 body=100 status=ok
// SIG undefined FUN_14383c4d0(void)

longlong FUN_14383c4d0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = FUN_143703a50();
  iVar1 = *(int *)(param_1 + 0x68);
  uVar4 = *(uint *)(param_1 + 0x6c) & 0x3fffffff;
  iVar5 = iVar1 + param_2;
  if ((int)uVar4 < iVar5) {
    iVar2 = uVar4 * 2;
    if (iVar5 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_14370c310(uVar3,(longlong *)(param_1 + 0x60),iVar5,8);
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_2;
  return *(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 8;
}



// FUNCTION 14383c540 FUN_14383c540 body=57 status=ok
// SIG undefined FUN_14383c540(void)

longlong * FUN_14383c540(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  lVar1 = *(longlong *)(lVar3 + 0x48) +
          (longlong)
          (int)((uint)*(ushort *)(*(longlong *)(lVar3 + 0x28) + (longlong)*param_3 * 8) *
               *(int *)(lVar3 + 0xbc)) * 4;
  iVar2 = *(int *)(lVar3 + 0xbc);
  *param_2 = lVar1;
  param_2[1] = lVar1 + (longlong)iVar2 * 4;
  return param_2;
}



// FUNCTION 14383c580 FUN_14383c580 body=210 status=ok
// SIG undefined FUN_14383c580(void)

void FUN_14383c580(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 0x90) = param_3;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x4c) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_1 + 0x40,iVar6,4);
  }
  iVar6 = iVar1 - *(int *)(param_1 + 0x48);
  if (0 < iVar6) {
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 4);
    for (lVar5 = (longlong)iVar6; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
  }
  *(int *)(param_1 + 0x48) = iVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



// FUNCTION 14383c660 FUN_14383c660 body=441 status=ok
// SIG undefined FUN_14383c660(void)

void FUN_14383c660(longlong param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  
  uVar10 = 0;
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)*param_2 * 4);
  if (iVar12 == -1) {
    iVar12 = *(int *)(param_1 + 0x58);
    *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)*param_2 * 4) = iVar12;
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_1 + 0x50,8);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar12 * 8);
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x50) + 4 + (longlong)iVar12 * 8);
  if (iVar12 == 1) {
    puVar1[1] = 0;
    *puVar1 = 0xffffffff;
  }
  else {
    puVar1[1] = iVar12 + -1;
  }
  iVar12 = *param_3 - *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  lVar11 = (longlong)(*(int *)(param_1 + 0x68) - iVar12) * 8;
  lVar2 = *(longlong *)(param_1 + 0x60) + (longlong)iVar12 * 8;
  uVar6 = uVar10;
  uVar8 = uVar10;
  if (0 < lVar11) {
    do {
      uVar7 = (int)uVar8 + 4;
      *(undefined4 *)(uVar6 + lVar2) = *(undefined4 *)(uVar6 + 8 + lVar2);
      uVar6 = uVar6 + 4;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < lVar11);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      iVar9 = (int)uVar10;
      if (iVar9 != *param_2) {
        if ((*(int *)(param_1 + 0x48) == 0) ||
           (iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 4), iVar4 == -1)) {
          iVar4 = -1;
        }
        else {
          iVar4 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 8);
        }
        if (iVar12 < iVar4 - *(int *)(param_1 + 0x30)) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 4);
          if (iVar4 == -1) {
            iVar4 = *(int *)(param_1 + 0x58);
            *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 4) = iVar4;
            uVar5 = FUN_143703a50();
            if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
              FUN_14370c460(uVar5,param_1 + 0x50,8);
            }
            puVar1 = (undefined4 *)
                     (*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
            puVar1[1] = 0;
            *puVar1 = 0xffffffff;
          }
          piVar3 = (int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar4 * 8);
          *piVar3 = *piVar3 + -1;
        }
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14383c820 FUN_14383c820 body=142 status=ok
// SIG undefined FUN_14383c820(void)

undefined8 * FUN_14383c820(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavVolumeInstance::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_14370c030();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar1;
  return param_1;
}



// FUNCTION 14383c8b0 FUN_14383c8b0 body=195 status=ok
// SIG undefined FUN_14383c8b0(void)

undefined8 * FUN_14383c8b0(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavVolumeInstance::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0xa0);
  if (lVar2 != 0) {
    lVar3 = FUN_14383c010(lVar2);
  }
  *(undefined1 *)(param_1 + 5) = 1;
  if (lVar3 != 0) {
    FUN_14370c030(lVar3);
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    FUN_14370c150(lVar3);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 14383c980 FUN_14383c980 body=39 status=ok
// SIG undefined FUN_14383c980(void)

void FUN_14383c980(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 4);
    do {
      puVar1[-1] = *(undefined4 *)((param_2 - param_1) + -4 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)((param_2 - param_1) + (longlong)puVar1);
      puVar1 = puVar1 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14383c9b0 FUN_14383c9b0 body=115 status=ok
// SIG undefined FUN_14383c9b0(void)

void FUN_14383c9b0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_3;
    plVar1 = (longlong *)(param_1 + 8);
    do {
      *(undefined4 *)(plVar1 + -1) = *(undefined4 *)(param_2 + -8 + (longlong)plVar1);
      if (*(longlong *)(param_2 + (longlong)plVar1) != 0) {
        FUN_14370c030();
      }
      if (*plVar1 != 0) {
        FUN_14370c150();
      }
      *plVar1 = *(longlong *)(param_2 + (longlong)plVar1);
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14383ca30 FUN_14383ca30 body=395 status=ok
// SIG undefined FUN_14383ca30(void)

void FUN_14383ca30(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_3;
    puVar7 = (undefined8 *)(param_1 + 0x40);
    do {
      if (*(longlong *)((longlong)puVar7 + param_2 + -0x40) != 0) {
        FUN_14370c030();
      }
      if (puVar7[-8] != 0) {
        FUN_14370c150();
      }
      puVar7[-8] = *(undefined8 *)((longlong)puVar7 + param_2 + -0x40);
      if (*(longlong *)((longlong)puVar7 + param_2 + -0x38) != 0) {
        FUN_14370c030();
      }
      if (puVar7[-7] != 0) {
        FUN_14370c150();
      }
      puVar7[-7] = *(undefined8 *)((longlong)puVar7 + param_2 + -0x38);
      if (*(longlong *)((longlong)puVar7 + param_2 + -0x30) != 0) {
        FUN_14370c030();
      }
      if (puVar7[-6] != 0) {
        FUN_14370c150();
      }
      puVar7[-6] = *(undefined8 *)((longlong)puVar7 + param_2 + -0x30);
      if (*(longlong *)((longlong)puVar7 + param_2 + -0x28) != 0) {
        FUN_14370c030();
      }
      if (puVar7[-5] != 0) {
        FUN_14370c150();
      }
      puVar7[-5] = *(undefined8 *)((longlong)puVar7 + param_2 + -0x28);
      if (*(longlong *)((longlong)puVar7 + param_2 + -0x20) != 0) {
        FUN_14370c030();
      }
      if (puVar7[-4] != 0) {
        FUN_14370c150();
      }
      puVar7[-4] = *(undefined8 *)((longlong)puVar7 + param_2 + -0x20);
      *(undefined4 *)(puVar7 + -3) = *(undefined4 *)((longlong)puVar7 + param_2 + -0x18);
      *(undefined4 *)((longlong)puVar7 + -0x14) =
           *(undefined4 *)((longlong)puVar7 + param_2 + -0x14);
      puVar1 = (undefined8 *)((longlong)puVar7 + param_2 + -0x10);
      uVar6 = puVar1[1];
      puVar7[-2] = *puVar1;
      puVar7[-1] = uVar6;
      uVar6 = ((undefined8 *)(param_2 + (longlong)puVar7))[1];
      *puVar7 = *(undefined8 *)(param_2 + (longlong)puVar7);
      puVar7[1] = uVar6;
      puVar1 = (undefined8 *)(param_2 + 0x10 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[2] = *puVar1;
      puVar7[3] = uVar6;
      puVar1 = (undefined8 *)(param_2 + 0x20 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[4] = *puVar1;
      puVar7[5] = uVar6;
      puVar1 = (undefined8 *)(param_2 + 0x30 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[6] = *puVar1;
      puVar7[7] = uVar6;
      puVar2 = (undefined4 *)(param_2 + 0x40 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 8) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x44) = uVar3;
      *(undefined4 *)(puVar7 + 9) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = uVar5;
      *(undefined1 *)(puVar7 + 10) = *(undefined1 *)((longlong)puVar7 + param_2 + 0x50);
      puVar2 = (undefined4 *)((longlong)puVar7 + param_2 + 0x60);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 0xc) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 100) = uVar3;
      *(undefined4 *)(puVar7 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x6c) = uVar5;
      FUN_14383dd00(puVar7 + 0xe,param_2 + 0x70 + (longlong)puVar7);
      FUN_14383dde0(puVar7 + 0x12,param_2 + 0x90 + (longlong)puVar7);
      *(undefined1 *)(puVar7 + 0x16) = *(undefined1 *)((longlong)puVar7 + param_2 + 0xb0);
      puVar7 = puVar7 + 0x20;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 14383cc20 FUN_14383cc20 body=619 status=ok
// SIG undefined FUN_14383cc20(void)

void FUN_14383cc20(longlong param_1,uint param_2,ulonglong param_3,code *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  code *local_res20;
  undefined1 local_68 [4];
  uint local_64;
  uint local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined8 local_38;
  undefined4 local_30;
  
  local_res18 = (int)param_3;
  uVar5 = (ulonglong)(int)param_2;
  local_58 = (ulonglong)local_res18;
  uVar10 = uVar5;
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    uVar9 = uVar5 & 0xffffffff;
    uVar12 = param_3 & 0xffffffff;
    puVar7 = (undefined4 *)(((longlong)(int)((uint)uVar5 + (uint)param_3) >> 1) * 0xc + param_1);
    local_48 = *puVar7;
    local_44 = puVar7[1];
    local_40 = *(undefined2 *)(puVar7 + 2);
    local_3e = *(undefined2 *)((longlong)puVar7 + 10);
    local_64 = (uint)uVar5;
    local_60 = (uint)param_3;
    do {
      uVar8 = (uint)uVar9;
      local_50 = uVar10;
      pcVar6 = (char *)(*local_res20)(local_res8,(longlong)(int)uVar8 * 0xc + param_1,&local_48);
      pcVar4 = local_res20;
      if (*pcVar6 != '\0') {
        do {
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar10 = uVar10 + 1;
          pcVar6 = (char *)(*pcVar4)(local_res8,(longlong)(int)uVar8 * 0xc + param_1,&local_48);
        } while (*pcVar6 != '\0');
        uVar12 = (ulonglong)local_60;
        local_64 = uVar8;
        local_50 = uVar10;
      }
      uVar11 = (uint)uVar12;
      pcVar6 = (char *)(*local_res20)(local_68,&local_48,(longlong)(int)uVar11 * 0xc + param_1);
      pcVar4 = local_res20;
      cVar1 = *pcVar6;
      uVar5 = local_58;
      while (cVar1 != '\0') {
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
        uVar5 = uVar5 - 1;
        pcVar6 = (char *)(*pcVar4)(local_68,&local_48,(longlong)(int)uVar11 * 0xc + param_1);
        uVar10 = local_50;
        uVar8 = local_64;
        cVar1 = *pcVar6;
      }
      local_58 = uVar5;
      if ((int)uVar11 < (int)uVar8) break;
      if (uVar11 != uVar8) {
        puVar13 = (undefined8 *)(uVar5 * 0xc + param_1);
        puVar7 = (undefined4 *)(uVar10 * 0xc + param_1);
        uVar3 = *puVar13;
        uVar2 = *(undefined4 *)(puVar13 + 1);
        *(undefined4 *)puVar13 = *puVar7;
        *(undefined4 *)((longlong)puVar13 + 4) = puVar7[1];
        *(undefined2 *)(puVar13 + 1) = *(undefined2 *)(puVar7 + 2);
        *(undefined2 *)((longlong)puVar13 + 10) = *(undefined2 *)((longlong)puVar7 + 10);
        local_38._0_4_ = (undefined4)uVar3;
        *puVar7 = (undefined4)local_38;
        local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        puVar7[1] = local_38._4_4_;
        local_30._0_2_ = (undefined2)uVar2;
        *(undefined2 *)(puVar7 + 2) = (undefined2)local_30;
        local_30._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
        *(undefined2 *)((longlong)puVar7 + 10) = local_30._2_2_;
        local_38 = uVar3;
        local_30 = uVar2;
      }
      uVar11 = uVar11 - 1;
      uVar12 = (ulonglong)uVar11;
      local_58 = uVar5 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar10 = uVar10 + 1;
      local_64 = uVar8;
      local_60 = uVar11;
      local_50 = uVar10;
    } while ((int)uVar8 <= (int)uVar11);
    if ((int)local_res10 < (int)uVar11) {
      FUN_14383cc20(param_1,local_res10,uVar11,local_res20);
    }
    local_58 = (ulonglong)local_res18;
    if (local_res18 <= (int)uVar8) {
      return;
    }
    uVar5 = (ulonglong)uVar8;
    param_3 = local_58;
    local_res10 = uVar8;
  } while( true );
}



// FUNCTION 14383cea0 FUN_14383cea0 body=349 status=ok
// SIG undefined FUN_14383cea0(void)

undefined8 * FUN_14383cea0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  int local_res8 [2];
  
  puVar5 = (undefined4 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar1 = (int)param_2[1];
  lVar6 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar3 = FUN_143703a50();
  iVar9 = local_res8[0];
  puVar4 = puVar5;
  if (local_res8[0] != 0) {
    puVar4 = (undefined4 *)FUN_143702d60(uVar3,0x20,local_res8);
  }
  *(int *)(param_1 + 1) = iVar9;
  *param_1 = puVar4;
  iVar9 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar9 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar9;
  if (0 < iVar1) {
    puVar7 = puVar4 + 2;
    lVar8 = *param_2 - (longlong)puVar4;
    do {
      if ((undefined8 *)(puVar7 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar7 + -2) = *(undefined8 *)(lVar8 + -8 + (longlong)puVar7);
        *puVar7 = *(undefined4 *)(lVar8 + (longlong)puVar7);
        puVar7[1] = *(undefined4 *)(lVar8 + 4 + (longlong)puVar7);
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(lVar8 + 8 + (longlong)puVar7);
        lVar2 = *(longlong *)(lVar8 + 0x10 + (longlong)puVar7);
        *(longlong *)(puVar7 + 4) = lVar2;
        if (lVar2 != 0) {
          FUN_14370c030();
        }
      }
      puVar7 = puVar7 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  iVar1 = (int)param_2[3];
  lVar6 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar3 = FUN_143703a50();
  iVar9 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar5 = (undefined4 *)FUN_143702d60(uVar3,4,local_res8);
  }
  param_1[2] = puVar5;
  *(int *)(param_1 + 3) = iVar9;
  iVar9 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar9 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x1c) = iVar9;
  if (0 < iVar1) {
    lVar8 = param_2[2] - (longlong)puVar5;
    do {
      *puVar5 = *(undefined4 *)(lVar8 + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}



// FUNCTION 14383d000 FUN_14383d000 body=230 status=ok
// SIG undefined FUN_14383d000(void)

undefined8 * FUN_14383d000(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshClearanceCacheManager::vftable;
  lVar3 = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x20);
  uVar6 = (ulonglong)uVar1;
  local_res8[0] = uVar1;
  uVar2 = FUN_143703a50();
  uVar5 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar3 = FUN_143702d60(uVar2,0x20,local_res8);
  }
  param_1[3] = lVar3;
  *(uint *)(param_1 + 4) = uVar5;
  uVar5 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar5 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0x24) = uVar5;
  if (0 < (int)uVar1) {
    lVar4 = *(longlong *)(param_2 + 0x18) - lVar3;
    do {
      if (lVar3 != 0) {
        FUN_14383cea0(lVar3,lVar4 + lVar3);
      }
      lVar3 = lVar3 + 0x20;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 14383d0f0 FUN_14383d0f0 body=378 status=ok
// SIG undefined FUN_14383d0f0(void)

undefined8 * FUN_14383d0f0(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint local_res8 [2];
  
  puVar5 = (undefined2 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  uVar6 = *(uint *)(param_2 + 1);
  lVar10 = (longlong)(int)uVar6;
  puVar3 = puVar5;
  local_res8[0] = uVar6;
  if (uVar6 != 0) {
    puVar3 = (undefined2 *)FUN_143702d60(&PTR_vftable_1467f0638,2,local_res8);
  }
  *param_1 = puVar3;
  *(uint *)(param_1 + 1) = uVar6;
  uVar9 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar9 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar9;
  if (0 < (int)uVar6) {
    lVar11 = *param_2 - (longlong)puVar3;
    do {
      *puVar3 = *(undefined2 *)(lVar11 + (longlong)puVar3);
      puVar3 = puVar3 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  lVar10 = param_2[4];
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar9 = (int)lVar10 + 0x1f >> 5;
  local_res8[0] = uVar9;
  uVar4 = FUN_143703a50();
  uVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar5 = (undefined2 *)FUN_143702d60(uVar4,4,local_res8);
  }
  param_1[2] = puVar5;
  *(uint *)(param_1 + 3) = uVar6;
  uVar6 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar6 = local_res8[0];
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar6;
  *(int *)(param_1 + 4) = (int)lVar10;
  uVar4 = FUN_143703a50();
  uVar6 = *(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff;
  if ((int)uVar6 < (int)uVar9) {
    uVar6 = uVar6 * 2;
    uVar2 = uVar9;
    if ((int)uVar9 < (int)uVar6) {
      uVar2 = uVar6;
    }
    FUN_14370c310(uVar4,param_1 + 2,uVar2,4);
  }
  *(uint *)(param_1 + 3) = uVar9;
  puVar7 = (undefined4 *)param_2[2];
  puVar8 = (undefined4 *)param_1[2];
  uVar6 = *(uint *)(param_2 + 3);
  if ((int)uVar9 < (int)*(uint *)(param_2 + 3)) {
    uVar6 = uVar9;
  }
  if (0 < (int)uVar6) {
    uVar12 = (ulonglong)uVar6;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar8 = uVar1;
      puVar8 = puVar8 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *(char *)(param_1 + 5) = (char)param_2[5];
  return param_1;
}



// FUNCTION 14383d270 FUN_14383d270 body=848 status=ok
// SIG undefined FUN_14383d270(void)

undefined8 * FUN_14383d270(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiStreamingCollection::vftable;
  uVar7 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_14370c030();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x30) = 0;
  iVar2 = *(int *)(param_2 + 0x50);
  uVar3 = FUN_143703a50();
  uVar8 = *(uint *)((longlong)param_1 + 0x54) & 0x3fffffff;
  if ((int)uVar8 < iVar2) {
    iVar11 = uVar8 * 2;
    if (iVar2 < iVar11) {
      iVar2 = iVar11;
    }
    FUN_14370c310(uVar3,param_1 + 9,iVar2,0x18);
  }
  plVar12 = *(longlong **)(param_2 + 0x48);
  plVar1 = plVar12 + (longlong)*(int *)(param_2 + 0x50) * 3;
  for (; plVar12 != plVar1; plVar12 = plVar12 + 3) {
    iVar2 = *(int *)(param_1 + 10);
    *(int *)(param_1 + 10) = iVar2 + 1;
    lVar5 = (longlong)iVar2 * 0x18;
    puVar9 = (undefined8 *)(param_1[9] + lVar5);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined1 *)(puVar9 + 2) = 1;
    }
    plVar14 = (longlong *)(param_1[9] + lVar5);
    *(undefined1 *)(plVar14 + 2) = 0;
    if (*plVar12 != 0) {
      FUN_14370c030();
    }
    if (*plVar14 != 0) {
      FUN_14370c150();
    }
    *plVar14 = *plVar12;
    *(undefined1 *)(plVar12 + 2) = 0;
  }
  iVar2 = *(int *)(param_2 + 0x40);
  lVar5 = *(longlong *)(param_2 + 0x38);
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar3,param_1 + 7,iVar2,0x100);
  }
  iVar11 = (*(int *)(param_1 + 8) - iVar2) + -1;
  if (-1 < iVar11) {
    lVar15 = (longlong)iVar11 * 0x100 + (longlong)iVar2 * 0x100 + param_1[7];
    do {
      FUN_14383dc40(lVar15);
      lVar15 = lVar15 + -0x100;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  iVar11 = iVar2;
  if (*(int *)(param_1 + 8) < iVar2) {
    iVar11 = *(int *)(param_1 + 8);
  }
  FUN_14383ca30(param_1[7],lVar5,iVar11);
  lVar15 = param_1[7] + (longlong)iVar11 * 0x100;
  if (0 < iVar2 - iVar11) {
    lVar10 = (longlong)iVar11 * 0x100 - lVar15;
    uVar13 = (ulonglong)(uint)(iVar2 - iVar11);
    do {
      if (lVar15 != 0) {
        FUN_143874b50(lVar15,lVar5 + lVar10 + lVar15);
      }
      lVar15 = lVar15 + 0x100;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  *(int *)(param_1 + 8) = iVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x30);
  uVar6 = uVar7;
  if (lVar5 != 0) {
    uVar6 = FUN_14383d000(lVar5,uVar3);
  }
  if (param_1[0xb] != 0) {
    FUN_14370c150();
  }
  param_1[0xb] = uVar6;
  FGenericPlatformString::Memcpy(param_1 + 0xc,param_2 + 0x60,0x80);
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x28);
  uVar3 = uVar7;
  if (lVar5 != 0) {
    uVar3 = FUN_1438443a0(lVar5,param_1);
  }
  if (param_1[0x1c] != 0) {
    FUN_14370c150();
  }
  param_1[0x1c] = uVar3;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x20);
  if (lVar5 != 0) {
    uVar7 = FUN_1438746d0(lVar5,param_1);
  }
  if (param_1[0x1d] != 0) {
    FUN_14370c150();
  }
  param_1[0x1d] = uVar7;
  return param_1;
}



// FUNCTION 14383d5c0 FUN_14383d5c0 body=437 status=ok
// SIG undefined FUN_14383d5c0(void)

undefined8 * FUN_14383d5c0(undefined8 *param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar3 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiStreamingCollection::vftable;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar5 = param_1 + 0xc;
  for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined4 *)puVar5 = 0;
    puVar5 = (undefined8 *)((longlong)puVar5 + 4);
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  lVar4 = lVar3;
  if (lVar2 != 0) {
    lVar4 = FUN_1437e57c0(lVar2);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (lVar4 != 0) {
    FUN_14370c030(lVar4);
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    FUN_14370c150(lVar4);
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  lVar4 = lVar3;
  if (lVar2 != 0) {
    lVar4 = FUN_1438443a0(lVar2,param_1);
  }
  if (lVar4 != param_1[0x1c]) {
    if (param_1[0x1c] != 0) {
      FUN_14370c150();
    }
    param_1[0x1c] = lVar4;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar4 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar4 != 0) {
    lVar3 = FUN_1438746d0(lVar4,param_1);
  }
  if (lVar3 != param_1[0x1d]) {
    if (param_1[0x1d] != 0) {
      FUN_14370c150();
    }
    param_1[0x1d] = lVar3;
  }
  return param_1;
}



// FUNCTION 14383d780 FUN_14383d780 body=422 status=ok
// SIG undefined FUN_14383d780(void)

undefined8 * FUN_14383d780(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar3 = 0;
  param_1[1] = 0;
  *param_1 = hkaiStreamingCollection::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar5 = param_1 + 0xc;
  for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined4 *)puVar5 = 0;
    puVar5 = (undefined8 *)((longlong)puVar5 + 4);
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  lVar4 = lVar3;
  if (lVar2 != 0) {
    lVar4 = FUN_1437e57c0(lVar2);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  if (lVar4 != 0) {
    FUN_14370c030(lVar4);
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    FUN_14370c150(lVar4);
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  lVar4 = lVar3;
  if (lVar2 != 0) {
    lVar4 = FUN_1438443a0(lVar2,param_1);
  }
  if (lVar4 != param_1[0x1c]) {
    if (param_1[0x1c] != 0) {
      FUN_14370c150();
    }
    param_1[0x1c] = lVar4;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar4 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar4 != 0) {
    lVar3 = FUN_1438746d0(lVar4,param_1);
  }
  if (lVar3 != param_1[0x1d]) {
    if (param_1[0x1d] != 0) {
      FUN_14370c150();
    }
    param_1[0x1d] = lVar3;
  }
  return param_1;
}



// FUNCTION 14383d930 FUN_14383d930 body=308 status=ok
// SIG undefined FUN_14383d930(void)

undefined8 * FUN_14383d930(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  puVar4 = (undefined4 *)(param_2 + 0x18);
  *param_1 = hkaiStreamingSetInstance::vftable;
  lVar5 = 2;
  lVar3 = 0x18 - (longlong)puVar4;
  do {
    *(undefined4 *)((longlong)param_1 + lVar3 + (longlong)puVar4) = *puVar4;
    puVar4 = puVar4 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  lVar3 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    FUN_14370c030();
  }
  lVar3 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x30);
  lVar5 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    lVar3 = FUN_143702d60(uVar2,0xc,local_res8);
  }
  param_1[5] = lVar3;
  *(int *)(param_1 + 6) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x34) = iVar6;
  if (0 < iVar1) {
    puVar4 = (undefined4 *)(lVar3 + 4);
    lVar3 = *(longlong *)(param_2 + 0x28) - lVar3;
    do {
      puVar4[-1] = *(undefined4 *)(lVar3 + -4 + (longlong)puVar4);
      *puVar4 = *(undefined4 *)(lVar3 + (longlong)puVar4);
      *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(lVar3 + 4 + (longlong)puVar4);
      *(undefined2 *)((longlong)puVar4 + 6) = *(undefined2 *)(lVar3 + 6 + (longlong)puVar4);
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 14383da70 FUN_14383da70 body=462 status=ok
// SIG undefined FUN_14383da70(void)

void FUN_14383da70(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = hkaiStreamingCollection::vftable;
  FUN_14383f4a0();
  if (param_1[0x1d] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x1c] != 0) {
    FUN_14370c150();
  }
  if (param_1[0xb] != 0) {
    FUN_14370c150();
  }
  uVar2 = FUN_143703a50();
  lVar5 = (longlong)(*(int *)(param_1 + 10) + -1);
  if (-1 < *(int *)(param_1 + 10) + -1) {
    plVar6 = (longlong *)(param_1[9] + lVar5 * 0x18);
    do {
      lVar1 = plVar6[1];
      if (lVar1 != 0) {
        FUN_143718950(lVar1);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar1,0x40);
      }
      if (*plVar6 != 0) {
        FUN_14370c150();
      }
      plVar6 = plVar6 + -3;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar2,param_1[9],0x18,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar2 = FUN_143703a50();
  iVar4 = *(int *)(param_1 + 8) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 0x100 + param_1[7];
    do {
      FUN_14383dc40(lVar5);
      lVar5 = lVar5 + -0x100;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar2,param_1[7],0x100,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    FUN_143718950(lVar5);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar5,0x40);
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14383dc40 FUN_14383dc40 body=189 status=ok
// SIG undefined FUN_14383dc40(void)

void FUN_14383dc40(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_14375d9f0(param_1 + 0x1a);
  thunk_FUN_143734820(param_1 + 0x18);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) {
    FUN_143702e10(uVar1,param_1[0x16],8,*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  if (param_1[2] != 0) {
    FUN_14370c150();
  }
  if (param_1[1] != 0) {
    FUN_14370c150();
  }
  if (*param_1 != 0) {
    FUN_14370c150();
    return;
  }
  return;
}



// FUNCTION 14383dd00 FUN_14383dd00 body=221 status=ok
// SIG undefined FUN_14383dd00(void)

longlong * FUN_14383dd00(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,param_1,iVar2,8);
  }
  iVar7 = iVar2;
  if ((int)param_1[1] < iVar2) {
    iVar7 = (int)param_1[1];
  }
  FUN_14383c980(*param_1,lVar3,iVar7);
  lVar4 = *param_1;
  lVar8 = (longlong)(iVar2 - iVar7);
  if (0 < iVar2 - iVar7) {
    puVar6 = (undefined4 *)((longlong)iVar7 * 8 + lVar3);
    do {
      puVar1 = (undefined4 *)((lVar4 - lVar3) + (longlong)puVar6);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar6;
        *(undefined4 *)((lVar4 - lVar3) + 4 + (longlong)puVar6) = puVar6[1];
      }
      puVar6 = puVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14383dde0 FUN_14383dde0 body=301 status=ok
// SIG undefined FUN_14383dde0(void)

longlong * FUN_14383dde0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar6,param_1,iVar2,0x10);
  }
  iVar5 = ((int)param_1[1] - iVar2) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    plVar9 = (longlong *)((longlong)iVar2 * 0x10 + *param_1 + 8 + lVar7 * 0x10);
    do {
      if (*plVar9 != 0) {
        FUN_14370c150();
      }
      plVar9 = plVar9 + -2;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  iVar5 = iVar2;
  if ((int)param_1[1] < iVar2) {
    iVar5 = (int)param_1[1];
  }
  FUN_14383c9b0(*param_1,lVar3,iVar5);
  lVar7 = *param_1;
  lVar10 = (longlong)(iVar2 - iVar5);
  if (0 < iVar2 - iVar5) {
    puVar8 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar3);
    do {
      puVar1 = (undefined4 *)((lVar7 - lVar3) + (longlong)puVar8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar8;
        lVar4 = *(longlong *)(puVar8 + 2);
        *(longlong *)((lVar7 - lVar3) + 8 + (longlong)puVar8) = lVar4;
        if (lVar4 != 0) {
          FUN_14370c030();
        }
      }
      puVar8 = puVar8 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_1437347a0(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14383df10 FUN_14383df10 body=94 status=ok
// SIG undefined FUN_14383df10(void)

longlong FUN_14383df10(longlong *param_1,int *param_2)

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
      if (*(int *)(*param_1 + (longlong)iVar5 * 8) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 14383df70 FUN_14383df70 body=97 status=ok
// SIG undefined FUN_14383df70(void)

longlong FUN_14383df70(longlong *param_1,int *param_2)

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
      if (*(int *)(*param_1 + (longlong)iVar5 * 0x10) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 14383dfe0 FUN_14383dfe0 body=275 status=ok
// SIG undefined FUN_14383dfe0(void)

void FUN_14383dfe0(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_14383df10(param_1,*param_1 + (longlong)(int)uVar4 * 8);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined4 *)(*param_1 + (longlong)(int)uVar2 * 8);
    lVar5 = 2;
    lVar8 = (*param_1 + (longlong)(int)*(uint *)(param_1 + 1) * 8) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined4 *)(lVar8 + (longlong)puVar7);
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



// FUNCTION 14383e100 FUN_14383e100 body=312 status=ok
// SIG undefined FUN_14383e100(void)

void FUN_14383e100(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = param_2[1];
  uVar4 = (int)param_1[1] - 1;
  if (uVar2 != uVar4) {
    lVar5 = FUN_14383df70(param_1,(longlong)(int)uVar4 * 0x10 + *param_1);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  if (*(longlong *)(*param_1 + 8 + (longlong)(int)uVar2 * 0x10) != 0) {
    FUN_14370c150();
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    lVar5 = 2;
    puVar6 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x10);
    lVar8 = ((longlong)(int)*(uint *)(param_1 + 1) * 0x10 + *param_1) - (longlong)puVar6;
    do {
      *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  lVar5 = param_1[2];
  uVar7 = ((longlong)param_2 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
  puVar1 = (uint *)(lVar5 + uVar7 * 8);
  iVar3 = *(int *)(lVar5 + 4 + uVar7 * 8);
  while (-1 < iVar3) {
    lVar5 = param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & *puVar1) * 8;
    if ((ulonglong)((longlong)param_2 - lVar5 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar1 - lVar5 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      param_2 = puVar1;
    }
    lVar5 = param_1[2];
    uVar7 = ((longlong)puVar1 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
    puVar1 = (uint *)(lVar5 + uVar7 * 8);
    iVar3 = *(int *)(lVar5 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 14383e240 FUN_14383e240 body=981 status=ok
// SIG undefined FUN_14383e240(void)

void FUN_14383e240(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  short sVar10;
  longlong *plVar11;
  uint uVar12;
  float local_res18 [2];
  longlong local_res20;
  float local_98;
  int local_94;
  int local_90 [2];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  int local_64;
  longlong *local_60;
  undefined8 local_58;
  
  iVar9 = *(int *)(param_3 + 0x34);
  local_res20 = param_4;
  if (*(int *)(param_3 + 0x30) != iVar9) {
    FUN_14383f6a0(param_1,&local_94);
    FUN_14383f6a0(param_1,local_90,iVar9);
    iVar9 = local_94;
    uVar12 = (uint)*(short *)(param_3 + 0x48);
    sVar10 = *(short *)(param_3 + 0x4a);
    local_88 = (longlong)local_94 * 0x100;
    local_68 = local_94;
    local_64 = local_90[0];
    local_70 = *(longlong *)(local_88 + *(longlong *)(param_1 + 0x38));
    local_80 = (longlong)local_90[0] * 0x100;
    local_78 = *(longlong *)(local_80 + *(longlong *)(param_1 + 0x38));
    local_98 = (float)(uVar12 << 0x10);
    local_res18[0] = local_98;
    if ((local_98 < 0.0) || (local_res18[0] = (float)((int)sVar10 << 0x10), local_res18[0] < 0.0)) {
      FUN_143831d50(local_res18,local_70 + 0x40,local_78 + 0x40,param_3);
      if (local_98 < 0.0) {
        uVar12 = (uint)local_res18[0] & 0xffff;
      }
      local_98 = (float)((int)sVar10 << 0x10);
      if (local_98 < 0.0) {
        sVar10 = local_res18[0]._0_2_;
      }
    }
    FUN_143839d20(local_70,param_2,param_3,uVar12 & 0xffff,local_res20);
    lVar1 = local_res20;
    FUN_143839d20(local_78,param_2,param_3,sVar10,local_res20 + 0x18);
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + local_88 + 0xb0);
    local_60 = plVar11;
    lVar3 = FUN_14383df10(plVar11,local_90);
    if ((lVar3 == 0) || (*(int *)(lVar3 + 4) < 0)) {
      local_80 = *(longlong *)(param_1 + 0x38) + local_80 + 0xb0;
      local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x50));
      pvVar5 = TlsGetValue(DAT_146b7bf70);
      if (pvVar5 == (LPVOID)0x0) {
        pvVar5 = DAT_146b7bf68;
      }
      puVar6 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar5 + 0x58),0x38);
      puVar4 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = 0;
        *(undefined4 *)(puVar6 + 2) = 0x1ffff;
        *puVar6 = hkaiStreamingSetInstance::vftable;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined4 *)(puVar6 + 6) = 0;
        *(undefined4 *)((longlong)puVar6 + 0x34) = 0x80000000;
        puVar4 = puVar6;
      }
      *(int *)(puVar4 + 3) = iVar9;
      *(int *)((longlong)puVar4 + 0x1c) = local_90[0];
      local_70 = CONCAT44(local_70._4_4_,local_90[0]);
      plVar11 = (longlong *)(param_1 + 0x48);
      local_78 = CONCAT44(local_78._4_4_,iVar9);
      local_58 = 0;
      uVar7 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
        FUN_14370c460(uVar7,plVar11,0x18);
      }
      puVar6 = (undefined8 *)(*plVar11 + (longlong)*(int *)(param_1 + 0x50) * 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined1 *)(puVar6 + 2) = 1;
      }
      lVar8 = (longlong)*(int *)(param_1 + 0x50);
      lVar3 = *plVar11;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *(undefined1 *)(lVar3 + 0x10 + lVar8 * 0x18) = 1;
      FUN_14370c030(puVar4);
      if (*(longlong *)(lVar3 + lVar8 * 0x18) != 0) {
        FUN_14370c150();
      }
      *(undefined8 **)(lVar3 + lVar8 * 0x18) = puVar4;
      FUN_14370c150(puVar4);
      FUN_14383fbe0(local_60,local_90,&local_88);
      FUN_14383fbe0(local_80,&local_94,&local_88);
    }
    else {
      lVar3 = (longlong)*(int *)(*plVar11 + 4 + (longlong)*(int *)(lVar3 + 4) * 8);
      if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x10 + lVar3 * 0x18) == '\x01') {
        puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x48) + lVar3 * 0x18);
        iVar9 = local_94;
      }
      else {
        puVar4 = (undefined8 *)FUN_14383fe50();
        iVar9 = local_94;
      }
    }
    uVar7 = FUN_143703a50();
    if (*(uint *)(puVar4 + 6) == (*(uint *)((longlong)puVar4 + 0x34) & 0x3fffffff)) {
      FUN_14370c460(uVar7,puVar4 + 5,0xc);
    }
    lVar8 = (longlong)*(int *)(puVar4 + 6);
    lVar3 = puVar4[5];
    *(int *)(puVar4 + 6) = *(int *)(puVar4 + 6) + 1;
    if (*(int *)(puVar4 + 3) == iVar9) {
      *(undefined4 *)(lVar3 + lVar8 * 0xc) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(lVar3 + 4 + lVar8 * 0xc) = *(undefined4 *)(param_3 + 0x3c);
      *(undefined2 *)(lVar3 + 8 + lVar8 * 0xc) = *(undefined2 *)(lVar1 + 0x10);
      uVar2 = *(undefined2 *)(lVar1 + 0x28);
    }
    else {
      *(undefined4 *)(lVar3 + lVar8 * 0xc) = *(undefined4 *)(param_3 + 0x3c);
      *(undefined4 *)(lVar3 + 4 + lVar8 * 0xc) = *(undefined4 *)(param_3 + 0x38);
      *(undefined2 *)(lVar3 + 8 + lVar8 * 0xc) = *(undefined2 *)(lVar1 + 0x28);
      uVar2 = *(undefined2 *)(lVar1 + 0x10);
    }
    *(undefined2 *)(lVar3 + 10 + lVar8 * 0xc) = uVar2;
    return;
  }
  FUN_14383f6a0(param_1,&local_98);
  FUN_143839c90(*(undefined8 *)((longlong)(int)local_98 * 0x100 + *(longlong *)(param_1 + 0x38)),
                param_2,param_3,param_4);
  return;
}



// FUNCTION 14383e620 FUN_14383e620 body=218 status=ok
// SIG undefined FUN_14383e620(void)

void FUN_14383e620(longlong param_1,int *param_2,longlong param_3)

{
  int local_res18 [2];
  int local_res20 [2];
  longlong local_18 [2];
  
  FUN_14383f610(param_1,local_res20,*(undefined4 *)(param_3 + 0x18));
  FUN_14383f610(param_1,local_res18,*(undefined4 *)(param_3 + 0x1c));
  if (((local_res20[0] != -1) && (local_res18[0] != -1)) &&
     ((local_res20[0] == *param_2 || (local_res18[0] == *param_2)))) {
    local_18[0] = param_3;
    FUN_14370c030(param_3);
    FUN_14383fcf0((longlong)local_res20[0] * 0x100 + 0xd0 + *(longlong *)(param_1 + 0x38),
                  local_res18,local_18);
    FUN_14370c150(param_3);
    local_18[0] = param_3;
    FUN_14370c030(param_3);
    FUN_14383fcf0((longlong)local_res18[0] * 0x100 + 0xd0 + *(longlong *)(param_1 + 0x38),
                  local_res20,local_18);
    FUN_14370c150(param_3);
  }
  return;
}



// FUNCTION 14383e700 FUN_14383e700 body=1072 status=ok
// SIG undefined FUN_14383e700(void)

void FUN_14383e700(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4,
                  longlong param_5,ulonglong *param_6,byte param_7)

{
  undefined4 *puVar1;
  byte *pbVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong lVar10;
  LPVOID pvVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  float fVar19;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  ulonglong *local_res20;
  int local_88;
  int local_84;
  int local_80;
  undefined1 local_7c [4];
  undefined1 local_78 [56];
  
  uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x178);
  local_res20 = param_4;
  FUN_14383f660(param_1,local_res8,uVar4);
  if (local_res8[0] == -1) {
    piVar9 = (int *)FUN_143841470(param_1,local_7c,uVar4);
    local_res8[0] = *piVar9;
  }
  lVar15 = *(longlong *)(param_1 + 0x38);
  lVar16 = (longlong)local_res8[0] * 0x100;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar10 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar10 = FUN_142fbda20((longlong *)(param_2 + 0x18));
  }
  iVar13 = local_res8[0];
  *(int *)(lVar10 + 0x17c) = local_res8[0];
  FUN_14370c030(param_2);
  if (*(longlong *)(lVar16 + lVar15) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar16 + lVar15) = param_2;
  pbVar2 = (byte *)(lVar16 + 0xf0 + lVar15);
  *pbVar2 = *pbVar2 | 1;
  if ((param_7 & 2) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    puVar17 = (undefined8 *)(lVar16 + 0x30 + lVar15);
    *puVar17 = *(undefined8 *)(param_2 + 0x40);
    puVar17[1] = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    puVar17 = (undefined8 *)(lVar16 + 0x40 + lVar15);
    *puVar17 = *(undefined8 *)(param_2 + 0x50);
    puVar17[1] = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 0x68);
    puVar17 = (undefined8 *)(lVar16 + 0x50 + lVar15);
    *puVar17 = *(undefined8 *)(param_2 + 0x60);
    puVar17[1] = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 0x78);
    puVar17 = (undefined8 *)(lVar16 + 0x60 + lVar15);
    *puVar17 = *(undefined8 *)(param_2 + 0x70);
    puVar17[1] = uVar8;
    uVar4 = *(undefined4 *)(param_2 + 0x84);
    uVar6 = *(undefined4 *)(param_2 + 0x88);
    uVar7 = *(undefined4 *)(param_2 + 0x8c);
    puVar1 = (undefined4 *)(lVar16 + 0x70 + lVar15);
    *puVar1 = *(undefined4 *)(param_2 + 0x80);
    puVar1[1] = uVar4;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    uVar4 = *(undefined4 *)(param_2 + 0x94);
    uVar6 = *(undefined4 *)(param_2 + 0x98);
    uVar7 = *(undefined4 *)(param_2 + 0x9c);
    puVar1 = (undefined4 *)(lVar16 + 0x80 + lVar15);
    *puVar1 = *(undefined4 *)(param_2 + 0x90);
    puVar1[1] = uVar4;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  else {
    puVar17 = (undefined8 *)(lVar16 + 0x30 + lVar15);
    uVar8 = puVar17[1];
    *(undefined8 *)(param_2 + 0x40) = *puVar17;
    *(undefined8 *)(param_2 + 0x48) = uVar8;
    puVar17 = (undefined8 *)(lVar16 + 0x40 + lVar15);
    uVar8 = puVar17[1];
    *(undefined8 *)(param_2 + 0x50) = *puVar17;
    *(undefined8 *)(param_2 + 0x58) = uVar8;
    puVar17 = (undefined8 *)(lVar16 + 0x50 + lVar15);
    uVar8 = puVar17[1];
    *(undefined8 *)(param_2 + 0x60) = *puVar17;
    *(undefined8 *)(param_2 + 0x68) = uVar8;
    puVar17 = (undefined8 *)(lVar16 + 0x60 + lVar15);
    uVar8 = puVar17[1];
    *(undefined8 *)(param_2 + 0x70) = *puVar17;
    *(undefined8 *)(param_2 + 0x78) = uVar8;
    puVar1 = (undefined4 *)(lVar16 + 0x70 + lVar15);
    uVar4 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined4 *)(param_2 + 0x80) = *puVar1;
    *(undefined4 *)(param_2 + 0x84) = uVar4;
    *(undefined4 *)(param_2 + 0x88) = uVar6;
    *(undefined4 *)(param_2 + 0x8c) = uVar7;
    puVar1 = (undefined4 *)(lVar16 + 0x80 + lVar15);
    uVar4 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    *(undefined4 *)(param_2 + 0x90) = *puVar1;
    *(undefined4 *)(param_2 + 0x94) = uVar4;
    *(undefined4 *)(param_2 + 0x98) = uVar6;
    *(undefined4 *)(param_2 + 0x9c) = uVar7;
    if (param_5 != 0) {
      puVar17 = (undefined8 *)(lVar16 + 0x30 + lVar15);
      uVar8 = puVar17[1];
      *(undefined8 *)(param_5 + 0x30) = *puVar17;
      *(undefined8 *)(param_5 + 0x38) = uVar8;
      puVar17 = (undefined8 *)(lVar16 + 0x40 + lVar15);
      uVar8 = puVar17[1];
      *(undefined8 *)(param_5 + 0x40) = *puVar17;
      *(undefined8 *)(param_5 + 0x48) = uVar8;
      puVar1 = (undefined4 *)(lVar16 + 0x50 + lVar15);
      uVar4 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *(undefined4 *)(param_5 + 0x50) = *puVar1;
      *(undefined4 *)(param_5 + 0x54) = uVar4;
      *(undefined4 *)(param_5 + 0x58) = uVar6;
      *(undefined4 *)(param_5 + 0x5c) = uVar7;
      puVar1 = (undefined4 *)(lVar16 + 0x60 + lVar15);
      uVar4 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *(undefined4 *)(param_5 + 0x60) = *puVar1;
      *(undefined4 *)(param_5 + 100) = uVar4;
      *(undefined4 *)(param_5 + 0x68) = uVar6;
      *(undefined4 *)(param_5 + 0x6c) = uVar7;
    }
  }
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(lVar16 + 0x18 + lVar15) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar16 + 0x18 + lVar15) = param_3;
  uVar18 = 0;
  if ((param_5 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar16) == 0)) {
    if (*(char *)(param_5 + 0x28) == '\x01') {
      lVar10 = *(longlong *)(param_5 + 0x18);
    }
    else {
      lVar10 = FUN_142fbd8b0();
    }
    iVar13 = local_res8[0];
    *(int *)(lVar10 + 0x60) = local_res8[0];
    FUN_14370c030(param_5);
    if (*(longlong *)(lVar16 + 0x10 + lVar15) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(lVar16 + 0x10 + lVar15) = param_5;
    pbVar2 = (byte *)(lVar16 + 0xf0 + lVar15);
    *pbVar2 = *pbVar2 | 4;
    puVar17 = (undefined8 *)*param_6;
    uVar12 = (param_6[1] - (longlong)puVar17) + 7 >> 3;
    if ((undefined8 *)param_6[1] < puVar17) {
      uVar12 = uVar18;
    }
    if (uVar12 != 0) {
      local_res10[0] = iVar13;
      uVar14 = uVar18;
      do {
        FUN_14383e620(param_1,local_res10,*puVar17);
        uVar14 = uVar14 + 1;
        puVar17 = puVar17 + 1;
      } while (uVar14 != uVar12);
    }
    lVar15 = *(longlong *)(*(longlong *)(param_5 + 0x18) + 0x68);
    lVar16 = *(longlong *)(lVar15 + 0x70);
    lVar15 = (longlong)*(int *)(lVar15 + 0x78) * 0x10 + lVar16;
    if (lVar16 != lVar15) {
      local_res18[0] = iVar13;
      do {
        FUN_14383e620(param_1,local_res18,*(undefined8 *)(lVar16 + 8));
        lVar16 = lVar16 + 0x10;
      } while (lVar16 != lVar15);
    }
    FUN_143897120(param_5,param_1);
  }
  FUN_14383a080(param_2,local_78);
  local_88 = iVar13;
  FUN_14383ef10(param_1,&local_88,local_78);
  lVar15 = *(longlong *)(param_2 + 0x18);
  iVar5 = *(int *)(lVar15 + 0x180);
  fVar3 = *(float *)(*(longlong *)(lVar15 + 0x68) + 0xb0);
  fVar19 = (float)FUN_14383f740(param_1,iVar5);
  if (fVar19 != fVar3) {
    *(float *)(param_1 + 0x60 + (longlong)iVar5 * 4) = fVar3;
  }
  if ((param_7 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      pvVar11 = TlsGetValue(DAT_146b7bf70);
      if (pvVar11 == (LPVOID)0x0) {
        pvVar11 = DAT_146b7bf68;
      }
      lVar15 = (**(code **)(**(longlong **)((longlong)pvVar11 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar11 + 0x58),0x30);
      uVar12 = uVar18;
      if (lVar15 != 0) {
        uVar12 = FUN_14387b750(lVar15);
      }
      if (uVar12 != *(ulonglong *)(param_1 + 0x58)) {
        if (*(ulonglong *)(param_1 + 0x58) != 0) {
          FUN_14370c150();
        }
        *(ulonglong *)(param_1 + 0x58) = uVar12;
      }
    }
    FUN_143841960(param_1,param_2);
  }
  thunk_FUN_143719c70(0xb6ef8c0e);
  puVar17 = (undefined8 *)*local_res20;
  uVar12 = (ulonglong)((longlong)local_res20[1] + (7 - (longlong)puVar17)) >> 3;
  if ((undefined8 *)local_res20[1] < puVar17) {
    uVar12 = uVar18;
  }
  iVar5 = iVar13;
  if (uVar12 != 0) {
    do {
      local_84 = iVar5;
      FUN_14383ed00(param_1,&local_84,*puVar17);
      uVar18 = uVar18 + 1;
      puVar17 = puVar17 + 1;
      iVar5 = local_84;
    } while (uVar18 != uVar12);
  }
  thunk_FUN_143719c70(0x38c113d8);
  lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x68);
  lVar16 = *(longlong *)(lVar15 + 0x48);
  lVar15 = (longlong)*(int *)(lVar15 + 0x50) * 0x10 + lVar16;
  local_80 = iVar13;
  for (; lVar16 != lVar15; lVar16 = lVar16 + 0x10) {
    FUN_14383ed00(param_1,&local_80,*(undefined8 *)(lVar16 + 8));
  }
  return;
}



// FUNCTION 14383eb30 FUN_14383eb30 body=451 status=ok
// SIG undefined FUN_14383eb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14383eb30(longlong param_1,longlong param_2,ulonglong *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res8 [2];
  int local_res10 [2];
  undefined1 local_res18 [8];
  int local_res20 [2];
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x5c);
  FUN_14383f660(param_1,local_res20,uVar1);
  if (local_res20[0] == -1) {
    piVar6 = (int *)FUN_143841470(param_1,local_res18,uVar1);
    local_res20[0] = *piVar6;
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar8 = *(longlong *)(param_2 + 0x18);
  }
  else {
    lVar8 = FUN_142fbd8b0(param_2 + 0x18);
  }
  iVar5 = local_res20[0];
  *(int *)(lVar8 + 0x60) = local_res20[0];
  lVar8 = (longlong)local_res20[0] * 0x100 + *(longlong *)(param_1 + 0x38);
  FUN_14370c030(param_2);
  if (*(longlong *)(lVar8 + 0x10) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar8 + 0x10) = param_2;
  *(byte *)(lVar8 + 0xf0) = *(byte *)(lVar8 + 0xf0) | 4;
  uVar4 = uRam00000001467f0898;
  if (param_4 == '\0') {
    *(undefined8 *)(lVar8 + 0x30) = _DAT_1467f0890;
    *(undefined8 *)(lVar8 + 0x38) = uVar4;
    uVar4 = uRam00000001467f08a8;
    *(undefined8 *)(lVar8 + 0x40) = _DAT_1467f08a0;
    *(undefined8 *)(lVar8 + 0x48) = uVar4;
    uVar4 = uRam00000001467f08b8;
    *(undefined8 *)(lVar8 + 0x50) = _DAT_1467f08b0;
    *(undefined8 *)(lVar8 + 0x58) = uVar4;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0x80) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(lVar8 + 0x38) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar8 + 0x48) = uVar4;
    uVar1 = *(undefined4 *)(param_2 + 0x54);
    uVar2 = *(undefined4 *)(param_2 + 0x58);
    uVar3 = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(lVar8 + 0x54) = uVar1;
    *(undefined4 *)(lVar8 + 0x58) = uVar2;
    *(undefined4 *)(lVar8 + 0x5c) = uVar3;
    uVar4 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(lVar8 + 0x68) = uVar4;
  }
  else {
    uVar4 = *(undefined8 *)(lVar8 + 0x38);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
    *(undefined8 *)(param_2 + 0x38) = uVar4;
    uVar4 = *(undefined8 *)(lVar8 + 0x48);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar8 + 0x40);
    *(undefined8 *)(param_2 + 0x48) = uVar4;
    uVar1 = *(undefined4 *)(lVar8 + 0x54);
    uVar2 = *(undefined4 *)(lVar8 + 0x58);
    uVar3 = *(undefined4 *)(lVar8 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(lVar8 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    uVar4 = *(undefined8 *)(lVar8 + 0x68);
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(lVar8 + 0x60);
    *(undefined8 *)(param_2 + 0x68) = uVar4;
  }
  uVar7 = 0;
  puVar9 = (undefined8 *)*param_3;
  uVar11 = (ulonglong)((longlong)param_3[1] + (7 - (longlong)puVar9)) >> 3;
  if ((undefined8 *)param_3[1] < puVar9) {
    uVar11 = uVar7;
  }
  if (uVar11 != 0) {
    local_res8[0] = iVar5;
    do {
      FUN_14383e620(param_1,local_res8,*puVar9);
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar7 != uVar11);
  }
  lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x68);
  lVar10 = *(longlong *)(lVar8 + 0x70);
  lVar8 = (longlong)*(int *)(lVar8 + 0x78) * 0x10 + lVar10;
  if (lVar10 != lVar8) {
    local_res10[0] = iVar5;
    do {
      FUN_14383e620(param_1,local_res10,*(undefined8 *)(lVar10 + 8));
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != lVar8);
  }
  FUN_143897120(param_2,param_1);
  return;
}



// FUNCTION 14383ed00 FUN_14383ed00 body=521 status=ok
// SIG undefined FUN_14383ed00(void)

void FUN_14383ed00(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  int local_58 [4];
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_38;
  
  FUN_14383f6a0(param_1,local_58,*(undefined4 *)(param_3 + 0x18));
  FUN_14383f6a0(param_1,local_res18,*(undefined4 *)(param_3 + 0x1c));
  local_58[1] = 0xffffffff;
  if (local_58[0] != -1) {
    local_58[2] = 0xffffffff;
    if ((local_res18[0] != -1) &&
       ((local_58[3] = *param_2, local_58[0] == local_58[3] ||
        (local_48 = local_58[3], local_res18[0] == local_58[3])))) {
      local_res20[0] = *(undefined4 *)(param_1 + 0x50);
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      puVar3 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar2 + 0x58),0x38);
      puVar5 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 2) = 0x1ffff;
        *puVar3 = hkaiStreamingSetInstance::vftable;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *(undefined4 *)(puVar3 + 6) = 0;
        *(undefined4 *)((longlong)puVar3 + 0x34) = 0x80000000;
        puVar5 = puVar3;
      }
      *(int *)(puVar5 + 3) = local_58[0];
      *(int *)((longlong)puVar5 + 0x1c) = local_res18[0];
      local_38 = 0;
      local_44 = local_58[0];
      local_40 = local_res18[0];
      FUN_14370c030(param_3);
      if (puVar5[4] != 0) {
        FUN_14370c150();
      }
      puVar5[4] = param_3;
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1 + 0x48,0x18);
      }
      puVar3 = (undefined8 *)
               (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 1;
      }
      plVar1 = (longlong *)
               (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *(undefined1 *)(plVar1 + 2) = 1;
      FUN_14370c030(puVar5);
      if (*plVar1 != 0) {
        FUN_14370c150();
      }
      *plVar1 = (longlong)puVar5;
      FUN_14383fbe0(*(longlong *)(param_1 + 0x38) + (longlong)local_58[0] * 0x100 + 0xb0,local_res18
                    ,local_res20);
      FUN_14383fbe0(*(longlong *)(param_1 + 0x38) + (longlong)local_res18[0] * 0x100 + 0xb0,local_58
                    ,local_res20);
      FUN_14370c150(puVar5);
    }
  }
  return;
}



// FUNCTION 14383ef10 FUN_14383ef10 body=103 status=ok
// SIG undefined FUN_14383ef10(void)

void FUN_14383ef10(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = *param_2;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar3 = FUN_14383ffc0();
  }
  uVar2 = FUN_1437e5980(uVar3,param_3,iVar1);
  *(undefined4 *)((longlong)*param_2 * 0x100 + 0x28 + *(longlong *)(param_1 + 0x38)) = uVar2;
  return;
}



// FUNCTION 14383ef80 FUN_14383ef80 body=557 status=ok
// SIG undefined FUN_14383ef80(void)

void FUN_14383ef80(longlong param_1,longlong param_2,longlong param_3,ulonglong *param_4,int param_5
                  )

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x90);
  FUN_14383f660(param_1,local_res8,uVar2);
  if (local_res8[0] == -1) {
    piVar5 = (int *)FUN_143841470(param_1,local_res20,uVar2);
    local_res8[0] = *piVar5;
  }
  iVar4 = local_res8[0];
  lVar9 = (longlong)local_res8[0] * 0x100 + *(longlong *)(param_1 + 0x38);
  FUN_14370c030(param_2);
  if (*(longlong *)(lVar9 + 8) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar9 + 8) = param_2;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(lVar9 + 0x20) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar9 + 0x20) = param_3;
  puVar6 = (undefined1 *)(param_2 + 0x30);
  *(byte *)(lVar9 + 0xf0) = *(byte *)(lVar9 + 0xf0) | 2;
  if ((char)param_5 == '\0') {
    *(undefined1 *)(lVar9 + 0x90) = *puVar6;
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(lVar9 + 0xa8) = uVar3;
  }
  else {
    *puVar6 = *(undefined1 *)(lVar9 + 0x90);
    uVar3 = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(lVar9 + 0xa0);
    *(undefined8 *)(param_2 + 0x48) = uVar3;
  }
  lVar9 = *(longlong *)(*plVar1 + 0x38);
  local_58 = *(float *)(lVar9 + 0x70);
  fStack_54 = *(float *)(lVar9 + 0x74);
  fStack_50 = *(float *)(lVar9 + 0x78);
  fStack_4c = *(float *)(lVar9 + 0x7c);
  local_48 = *(float *)(lVar9 + 0x80);
  fStack_44 = *(float *)(lVar9 + 0x84);
  fStack_40 = *(float *)(lVar9 + 0x88);
  fStack_3c = *(float *)(lVar9 + 0x8c);
  FUN_142fbdd20(puVar6,&local_58);
  local_58 = local_58 + *(float *)(param_2 + 0x40);
  fStack_54 = fStack_54 + *(float *)(param_2 + 0x44);
  fStack_50 = fStack_50 + *(float *)(param_2 + 0x48);
  fStack_4c = fStack_4c + *(float *)(param_2 + 0x4c);
  local_48 = local_48 + *(float *)(param_2 + 0x40);
  fStack_44 = fStack_44 + *(float *)(param_2 + 0x44);
  fStack_40 = fStack_40 + *(float *)(param_2 + 0x48);
  fStack_3c = fStack_3c + *(float *)(param_2 + 0x4c);
  param_5 = iVar4;
  FUN_14383ef10(param_1,&param_5,&local_58);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar9 = *plVar1;
  }
  else {
    lVar9 = FUN_142fbdb90(plVar1);
  }
  iVar4 = local_res8[0];
  uVar7 = 0;
  *(int *)(lVar9 + 0x94) = local_res8[0];
  puVar10 = (undefined8 *)*param_4;
  uVar11 = (param_4[1] - (longlong)puVar10) + 7 >> 3;
  if ((undefined8 *)param_4[1] < puVar10) {
    uVar11 = uVar7;
  }
  if (uVar11 != 0) {
    local_res10[0] = local_res8[0];
    do {
      FUN_14383f1b0(param_1,local_res10,*puVar10);
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar7 != uVar11);
  }
  lVar9 = *(longlong *)(*(longlong *)(*plVar1 + 0x38) + 0x58);
  lVar8 = (longlong)*(int *)(*(longlong *)(*plVar1 + 0x38) + 0x60) * 0x10 + lVar9;
  if (lVar9 != lVar8) {
    local_res18[0] = iVar4;
    do {
      FUN_14383f1b0(param_1,local_res18,*(undefined8 *)(lVar9 + 8));
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != lVar8);
  }
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar9 = *plVar1;
  }
  else {
    lVar9 = FUN_142fbdb90(plVar1);
  }
  FUN_143897520(lVar9,param_1);
  return;
}



// FUNCTION 14383f1b0 FUN_14383f1b0 body=521 status=ok
// SIG undefined FUN_14383f1b0(void)

void FUN_14383f1b0(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int local_res18 [2];
  undefined4 local_res20 [2];
  int local_58 [4];
  int local_48;
  int local_44;
  int local_40;
  undefined8 local_38;
  
  FUN_14383f6f0(param_1,local_58,*(undefined4 *)(param_3 + 0x18));
  FUN_14383f6f0(param_1,local_res18,*(undefined4 *)(param_3 + 0x1c));
  local_58[1] = 0xffffffff;
  if (local_58[0] != -1) {
    local_58[2] = 0xffffffff;
    if ((local_res18[0] != -1) &&
       ((local_58[3] = *param_2, local_58[0] == local_58[3] ||
        (local_48 = local_58[3], local_res18[0] == local_58[3])))) {
      local_res20[0] = *(undefined4 *)(param_1 + 0x50);
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      puVar3 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar2 + 0x58),0x38);
      puVar5 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 2) = 0x1ffff;
        *puVar3 = hkaiStreamingSetInstance::vftable;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *(undefined4 *)(puVar3 + 6) = 0;
        *(undefined4 *)((longlong)puVar3 + 0x34) = 0x80000000;
        puVar5 = puVar3;
      }
      *(int *)(puVar5 + 3) = local_58[0];
      *(int *)((longlong)puVar5 + 0x1c) = local_res18[0];
      local_38 = 0;
      local_44 = local_58[0];
      local_40 = local_res18[0];
      FUN_14370c030(param_3);
      if (puVar5[4] != 0) {
        FUN_14370c150();
      }
      puVar5[4] = param_3;
      uVar4 = FUN_143703a50();
      if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
        FUN_14370c460(uVar4,param_1 + 0x48,0x18);
      }
      puVar3 = (undefined8 *)
               (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 1;
      }
      plVar1 = (longlong *)
               (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *(undefined1 *)(plVar1 + 2) = 1;
      FUN_14370c030(puVar5);
      if (*plVar1 != 0) {
        FUN_14370c150();
      }
      *plVar1 = (longlong)puVar5;
      FUN_14383fbe0(*(longlong *)(param_1 + 0x38) + (longlong)local_58[0] * 0x100 + 0xb0,local_res18
                    ,local_res20);
      FUN_14383fbe0(*(longlong *)(param_1 + 0x38) + (longlong)local_res18[0] * 0x100 + 0xb0,local_58
                    ,local_res20);
      FUN_14370c150(puVar5);
    }
  }
  return;
}



// FUNCTION 14383f3c0 FUN_14383f3c0 body=213 status=ok
// SIG undefined FUN_14383f3c0(void)

void FUN_14383f3c0(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  lVar4 = 0;
  lVar3 = lVar4;
  if (lVar2 != 0) {
    lVar3 = FUN_1438443a0(lVar2,param_1);
  }
  if (lVar3 != *(longlong *)(param_1 + 0xe0)) {
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0xe0) = lVar3;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar3 != 0) {
    lVar4 = FUN_1438746d0(lVar3,param_1);
  }
  if (lVar4 != *(longlong *)(param_1 + 0xe8)) {
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0xe8) = lVar4;
  }
  return;
}



// FUNCTION 14383f4a0 FUN_14383f4a0 body=141 status=ok
// SIG undefined FUN_14383f4a0(void)

void FUN_14383f4a0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x40) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x100 + *(longlong *)(param_1 + 0x38);
    do {
      FUN_14383dc40(lVar2);
      lVar2 = lVar2 + -0x100;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x100,*(uint *)(param_1 + 0x44) & 0x3fffffff
                 );
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  return;
}



// FUNCTION 14383f530 FUN_14383f530 body=162 status=ok
// SIG undefined FUN_14383f530(void)

void FUN_14383f530(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(*param_1 + 8 + lVar3 * 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x10,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  FUN_143734820(param_1 + 2);
  return;
}



// FUNCTION 14383f5e0 FUN_14383f5e0 body=35 status=ok
// SIG undefined FUN_14383f5e0(void)

undefined8 FUN_14383f5e0(longlong param_1,undefined8 param_2)

{
  FUN_14387ba00(*(undefined8 *)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 14383f610 FUN_14383f610 body=69 status=ok
// SIG undefined FUN_14383f610(void)

int * FUN_14383f610(longlong param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
    uVar3 = uVar2;
    do {
      if ((*(int *)((longlong)plVar1 + 0x1c) == param_3) && (*plVar1 != 0)) {
        *param_2 = (int)uVar3;
        return param_2;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x20;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x40));
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14383f660 FUN_14383f660 body=62 status=ok
// SIG undefined FUN_14383f660(void)

int * FUN_14383f660(longlong param_1,int *param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x2c);
    uVar3 = uVar2;
    do {
      if (*piVar1 == param_3) {
        *param_2 = (int)uVar3;
        return param_2;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x40;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x40));
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14383f6a0 FUN_14383f6a0 body=65 status=ok
// SIG undefined FUN_14383f6a0(void)

int * FUN_14383f6a0(longlong param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    uVar3 = uVar2;
    do {
      if ((*(int *)((longlong)plVar1 + 0x2c) == param_3) && (*plVar1 != 0)) {
        *param_2 = (int)uVar3;
        return param_2;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x20;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x40));
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14383f6f0 FUN_14383f6f0 body=69 status=ok
// SIG undefined FUN_14383f6f0(void)

int * FUN_14383f6f0(longlong param_1,int *param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar3 = uVar2;
    do {
      if ((*(int *)((longlong)plVar1 + 0x24) == param_3) && (*plVar1 != 0)) {
        *param_2 = (int)uVar3;
        return param_2;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 0x20;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x40));
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14383f740 FUN_14383f740 body=10 status=ok
// SIG undefined FUN_14383f740(void)

undefined4 FUN_14383f740(longlong param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x60 + (longlong)param_2 * 4);
}



// FUNCTION 14383f750 FUN_14383f750 body=9 status=ok
// SIG undefined FUN_14383f750(void)

void FUN_14383f750(longlong param_1)

{
  FUN_14387bf40(*(undefined8 *)(param_1 + 0x58));
  return;
}



// FUNCTION 14383f760 FUN_14383f760 body=21 status=ok
// SIG undefined FUN_14383f760(void)

undefined4 FUN_14383f760(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_14387be90(*(undefined8 *)(param_1 + 0x58));
  return *(undefined4 *)(lVar1 + 0x18);
}



// FUNCTION 14383f780 FUN_14383f780 body=135 status=ok
// SIG undefined FUN_14383f780(void)

void FUN_14383f780(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar8 = 0;
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x38);
      if ((*(longlong *)(lVar7 + lVar3) != 0) || (*(longlong *)(lVar7 + 0x10 + lVar3) != 0)) {
        puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar3);
        uVar5 = puVar1[1];
        lVar4 = *param_2;
        *(undefined8 *)(lVar8 + lVar4) = *puVar1;
        ((undefined8 *)(lVar8 + lVar4))[1] = uVar5;
        puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar3);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar3);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar7 + 0x60 + lVar3);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(lVar7 + 0x70 + lVar3);
        uVar5 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2 = (undefined8 *)(lVar7 + 0x80 + lVar3);
        uVar5 = puVar2[1];
        puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar4);
        *puVar1 = *puVar2;
        puVar1[1] = uVar5;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x100;
      lVar8 = lVar8 + 0x60;
    } while (iVar6 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 14383f810 FUN_14383f810 body=19 status=ok
// SIG undefined FUN_14383f810(void)

longlong FUN_14383f810(longlong param_1,int *param_2)

{
  return *(longlong *)(param_1 + 0x38) + 0x30 + (longlong)*param_2 * 0x100;
}



// FUNCTION 14383f830 FUN_14383f830 body=42 status=ok
// SIG undefined FUN_14383f830(void)

ulonglong FUN_14383f830(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    do {
      if (*(longlong *)((longlong)(int)uVar2 * 0x100 + *(longlong *)(param_1 + 0x38)) != 0) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((int)uVar1 < *(int *)(param_1 + 0x40));
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14383f860 FUN_14383f860 body=883 status=ok
// SIG undefined FUN_14383f860(void)

/* WARNING: Removing unreachable block (ram,0x00014383f8ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14383f860(longlong param_1,longlong param_2,longlong param_3,longlong param_4,char param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  undefined1 local_58 [48];
  
  FUN_14383f4a0();
  uVar6 = FUN_143703a50();
  if ((*(uint *)(param_1 + 0x44) & 0x3fffffff) == 0) {
    FUN_14370c310(uVar6,param_1 + 0x38,1,0x100);
  }
  iVar9 = *(int *)(param_1 + 0x40) + -2;
  lVar8 = *(longlong *)(param_1 + 0x38);
  if (-1 < iVar9) {
    lVar11 = (longlong)iVar9 << 8;
    do {
      FUN_14383dc40(lVar8 + 0x100 + lVar11);
      lVar11 = lVar11 + -0x100;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  iVar9 = 1 - *(int *)(param_1 + 0x40);
  lVar8 = 0;
  lVar11 = (longlong)iVar9;
  if (0 < iVar9) {
    puVar10 = (undefined4 *)
              ((longlong)*(int *)(param_1 + 0x40) * 0x100 + 0x50 + *(longlong *)(param_1 + 0x38));
    do {
      if ((undefined8 *)(puVar10 + -0x14) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar10 + -0x14) = 0;
        *(undefined8 *)(puVar10 + -0x12) = 0;
        *(undefined8 *)(puVar10 + -0x10) = 0;
        *(undefined8 *)(puVar10 + -0xe) = 0;
        *(undefined8 *)(puVar10 + -0xc) = 0;
        *(undefined8 *)(puVar10 + -10) = 0xffffffffffffffff;
        uVar6 = uRam00000001467f0898;
        *(undefined8 *)(puVar10 + -8) = _DAT_1467f0890;
        *(undefined8 *)(puVar10 + -6) = uVar6;
        uVar5 = uRam00000001467f08ac;
        uVar4 = uRam00000001467f08a8;
        uVar3 = uRam00000001467f08a4;
        puVar10[-4] = _DAT_1467f08a0;
        puVar10[-3] = uVar3;
        puVar10[-2] = uVar4;
        puVar10[-1] = uVar5;
        uVar5 = uRam00000001467f08bc;
        uVar4 = uRam00000001467f08b8;
        uVar3 = uRam00000001467f08b4;
        *puVar10 = _DAT_1467f08b0;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        *(undefined8 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 6) = 0;
        *(undefined8 *)(puVar10 + 8) = 0;
        *(undefined8 *)(puVar10 + 10) = 0;
        *(undefined8 *)(puVar10 + 0xc) = 0;
        *(undefined8 *)(puVar10 + 0xe) = 0;
        *(undefined8 *)(puVar10 + 0x18) = 0;
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0x80000000;
        FUN_143734b10(puVar10 + 0x1c);
        *(undefined8 *)(puVar10 + 0x20) = 0;
        puVar10[0x22] = 0;
        puVar10[0x23] = 0x80000000;
        FUN_143734b10(puVar10 + 0x24);
        *(undefined1 *)(puVar10 + 0x28) = 0;
        *(undefined1 *)(puVar10 + 0x10) = 0;
        *(undefined8 *)(puVar10 + 0x14) = 0;
        *(undefined8 *)(puVar10 + 0x16) = 0;
      }
      puVar10 = puVar10 + 0x40;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x28) == '\x01') {
      lVar11 = *(longlong *)(param_2 + 0x18);
    }
    else {
      lVar11 = FUN_142fbda20(param_2 + 0x18);
    }
    *(undefined4 *)(lVar11 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x60 + (longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 0x180) * 4)
         = *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x68) + 0xb0);
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*plVar2 != 0) {
    FUN_14370c150();
  }
  *plVar2 = param_2;
  lVar11 = *(longlong *)(param_1 + 0x38);
  if (param_4 != 0) {
    FUN_14370c030(param_4);
  }
  if (*(longlong *)(lVar11 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar11 + 0x18) = param_4;
  *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x2c) =
       *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x178);
  lVar11 = *(longlong *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar11 + 0x38) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar11 + 0x48) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar11 + 0x50) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar11 + 0x58) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar11 + 0x60) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar11 + 0x68) = uVar6;
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x88);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(lVar11 + 0x70) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(lVar11 + 0x74) = uVar3;
  *(undefined4 *)(lVar11 + 0x78) = uVar4;
  *(undefined4 *)(lVar11 + 0x7c) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(lVar11 + 0x80) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(lVar11 + 0x84) = uVar3;
  *(undefined4 *)(lVar11 + 0x88) = uVar4;
  *(undefined4 *)(lVar11 + 0x8c) = uVar5;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x38) + 0xf0);
  *pbVar1 = *pbVar1 | 1;
  if (param_3 != 0) {
    if (*(char *)(param_3 + 0x28) == '\x01') {
      lVar11 = *(longlong *)(param_3 + 0x18);
    }
    else {
      lVar11 = FUN_142fbd8b0();
    }
    *(undefined4 *)(lVar11 + 0x60) = 0;
    lVar11 = *(longlong *)(param_1 + 0x38);
    FUN_14370c030(param_3);
    if (*(longlong *)(lVar11 + 0x10) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(lVar11 + 0x10) = param_3;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x38) + 0xf0);
    *pbVar1 = *pbVar1 | 4;
  }
  FUN_14383a080(param_2,local_58);
  local_res8[0] = 0;
  FUN_14383ef10(param_1,local_res8,local_58);
  if (param_5 != '\0') {
    if (*(longlong *)(param_1 + 0x58) == 0) {
      pvVar7 = TlsGetValue(DAT_146b7bf70);
      if (pvVar7 == (LPVOID)0x0) {
        pvVar7 = DAT_146b7bf68;
      }
      lVar11 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar7 + 0x58),0x30);
      if (lVar11 != 0) {
        lVar8 = FUN_14387b750(lVar11);
      }
      if (lVar8 != *(longlong *)(param_1 + 0x58)) {
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_14370c150();
        }
        *(longlong *)(param_1 + 0x58) = lVar8;
      }
    }
    FUN_143841960(param_1,param_2);
  }
  return;
}



// FUNCTION 14383fbe0 FUN_14383fbe0 body=272 status=ok
// SIG undefined FUN_14383fbe0(void)

longlong FUN_14383fbe0(longlong *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_2;
  uVar8 = iVar2 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar6 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 8) == iVar2) {
        iVar2 = *param_3;
        *(int *)(*param_1 + 4 + (longlong)(int)puVar6[1] * 8) = iVar2;
        return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar6 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar6 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar6 = uVar8;
  puVar6[1] = uVar3;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,8);
  }
  piVar1 = (int *)(*param_1 + (longlong)(int)param_1[1] * 8);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar1 = *param_2;
  iVar2 = *param_3;
  piVar1[1] = iVar2;
  return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
}



// FUNCTION 14383fcf0 FUN_14383fcf0 body=347 status=ok
// SIG undefined FUN_14383fcf0(void)

ulonglong FUN_14383fcf0(longlong *param_1,int *param_2,ulonglong *param_3)

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
  iVar1 = *param_2;
  uVar8 = iVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar7 = (uint *)(param_1[2] + uVar5 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar5 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar7[1] * 0x10) == iVar1) {
        lVar4 = (longlong)(int)puVar7[1] * 0x10 + *param_1;
        if (*param_3 != 0) {
          FUN_14370c030();
        }
        if (*(longlong *)(lVar4 + 8) != 0) {
          FUN_14370c150();
        }
        uVar5 = *param_3;
        *(ulonglong *)(lVar4 + 8) = uVar5;
        return uVar5 & 0xffffffffffffff00;
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
    FUN_14370c460(uVar3,param_1,0x10);
  }
  lVar4 = (longlong)(int)param_1[1] * 0x10 + *param_1;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 8) = 0;
  }
  piVar6 = (int *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar6 = *param_2;
  if (*param_3 != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(piVar6 + 2) != 0) {
    FUN_14370c150();
  }
  uVar5 = *param_3;
  *(ulonglong *)(piVar6 + 2) = uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 14383fe50 FUN_14383fe50 body=357 status=ok
// SIG undefined FUN_14383fe50(void)

longlong FUN_14383fe50(longlong *param_1)

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
                        (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_14383d930(lVar4,lVar3);
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



// FUNCTION 14383ffc0 FUN_14383ffc0 body=357 status=ok
// SIG undefined FUN_14383ffc0(void)

longlong FUN_14383ffc0(longlong *param_1)

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
                        (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
      if (lVar4 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_1437e56f0(lVar4,lVar3);
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



// FUNCTION 143840130 FUN_143840130 body=402 status=ok
// SIG undefined FUN_143840130(void)

void FUN_143840130(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  lVar8 = 0;
  if (0 < (int)*(uint *)(param_2 + 0x40)) {
    uVar9 = (ulonglong)*(uint *)(param_2 + 0x40);
    lVar10 = lVar8;
    do {
      FUN_143874d60(*(longlong *)(param_1 + 0x38) + lVar10,*(longlong *)(param_2 + 0x38) + lVar10,
                    param_1 + 0x20);
      lVar10 = lVar10 + 0x100;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar1 = *(uint *)(param_2 + 0x50);
  uVar9 = (ulonglong)uVar1;
  uVar4 = FUN_143703a50();
  uVar7 = *(uint *)(param_1 + 0x54) & 0x3fffffff;
  if ((int)uVar7 < (int)uVar1) {
    uVar7 = uVar7 * 2;
    uVar12 = uVar9;
    if ((int)uVar1 < (int)uVar7) {
      uVar12 = (ulonglong)uVar7;
    }
    FUN_14370c310(uVar4,param_1 + 0x48,uVar12,0x18);
  }
  iVar3 = (*(int *)(param_1 + 0x50) - uVar1) + -1;
  lVar10 = (longlong)iVar3;
  if (-1 < iVar3) {
    plVar11 = (longlong *)
              (*(longlong *)(param_1 + 0x48) + (longlong)(int)uVar1 * 0x18 + lVar10 * 0x18);
    do {
      lVar2 = plVar11[1];
      if (lVar2 != 0) {
        FUN_143718950(lVar2);
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar5 + 0x58),lVar2,0x40);
      }
      if (*plVar11 != 0) {
        FUN_14370c150();
      }
      plVar11 = plVar11 + -3;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 0x18)
  ;
  iVar3 = uVar1 - *(int *)(param_1 + 0x50);
  lVar10 = (longlong)iVar3;
  if (0 < iVar3) {
    do {
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined1 *)(puVar6 + 2) = 1;
      }
      puVar6 = puVar6 + 3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(uint *)(param_1 + 0x50) = uVar1;
  if (0 < (int)uVar1) {
    do {
      FUN_14383a560(*(longlong *)(param_1 + 0x48) + lVar8,*(longlong *)(param_2 + 0x48) + lVar8);
      lVar8 = lVar8 + 0x18;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 1438402d0 FUN_1438402d0 body=269 status=ok
// SIG undefined FUN_1438402d0(void)

void FUN_1438402d0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = *(longlong *)((longlong)iVar7 * 0x100 + *(longlong *)(param_1 + 0x38));
      if (lVar3 != 0) {
        uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + 0x180);
        iVar5 = FUN_14383f760(param_1,uVar2);
        FUN_14383a100(lVar3,iVar5);
        uVar9 = 0;
        if (0 < iVar5) {
          do {
            uVar4 = *(undefined8 *)(param_1 + 0x58);
            if (*(char *)(*(longlong *)(lVar3 + 0x30) + 0x10 + (uVar9 & 0xff) * 0x18) == '\x01') {
              uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + (uVar9 & 0xff) * 0x18);
            }
            else {
              uVar6 = FUN_143833c50();
            }
            uVar10 = FUN_14387bbc0(uVar4,uVar2,uVar9 & 0xff);
            FUN_1438356f0(uVar6,uVar10,0);
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < iVar5);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}



// FUNCTION 1438403e0 FUN_1438403e0 body=955 status=ok
// SIG undefined FUN_1438403e0(void)

void FUN_1438403e0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint local_b4;
  ulonglong local_b0;
  uint local_a8;
  int local_a4;
  int *local_a0;
  uint local_98;
  uint local_94;
  int local_90 [4];
  int local_80;
  int local_7c;
  int *local_78;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  int local_60;
  int *local_58;
  longlong *local_50;
  int *local_48;
  int *local_40;
  
  uVar8 = param_3 >> 0x16 & 0x3ff;
  local_b4 = (uint)uVar8;
  lVar15 = uVar8 * 0x100;
  uVar13 = (uint)param_3 & 0x3fffff;
  uVar9 = 0;
  lVar5 = *(longlong *)(lVar15 + *(longlong *)(param_1 + 0x38));
  local_70 = local_b4;
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else if (*(char *)(lVar5 + 0x28) == '\x01') {
    lVar5 = *(longlong *)(lVar5 + 0x18);
    param_2 = param_2 & 0xffffffff;
  }
  else {
    lVar5 = FUN_142fbda20();
    param_2 = param_2 & 0xffffffff;
    uVar8 = (ulonglong)local_b4;
  }
  local_a8 = uVar13;
  FUN_1438393f0(lVar5,param_2,&local_a8,param_4);
  if (*(char *)(param_4 + 0x28) != '\0') {
    local_6c = uVar13;
    lVar5 = FUN_1437fb610(*(undefined8 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x20),lVar5 + 0xb0,
                          lVar5 + 0xd0,lVar5 + 0x90,uVar13);
    local_50 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xb0 + lVar15);
    sVar3 = *(short *)(lVar5 + 10);
    sVar4 = *(short *)(lVar5 + 8);
    local_a0 = local_90;
    local_98 = 0;
    local_94 = 0x80000004;
    local_78 = (int *)*local_50;
    local_58 = local_78 + (longlong)(int)local_50[1] * 2;
    local_48 = local_78;
    local_40 = local_58;
    if (local_78 != local_58) {
      local_68 = (undefined4)uVar8;
      do {
        local_7c = local_78[1];
        local_80 = *local_78;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)local_7c * 0x18);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)local_7c * 0x18);
        iVar16 = *(int *)(lVar5 + 0x30) + -1;
        lVar15 = (longlong)iVar16;
        if (-1 < iVar16) {
          uVar8 = (ulonglong)(*(int *)(lVar5 + 0x18) != (int)uVar8);
          lVar11 = lVar15 * 0xc;
          local_b0 = uVar8;
          local_64 = uVar13;
          do {
            lVar10 = *(longlong *)(lVar5 + 0x28) + lVar11;
            if (*(uint *)(lVar10 + uVar8 * 4) == uVar13) {
              if ((char)plVar1[2] == '\x01') {
                lVar14 = *plVar1;
              }
              else {
                lVar14 = FUN_14383fe50(plVar1);
                uVar8 = local_b0;
              }
              iVar7 = (int)*(short *)(lVar10 + 8 + uVar8 * 2) - (uint)(ushort)(sVar3 + sVar4);
              uVar8 = local_b0;
              if ((*(uint *)(*(longlong *)(param_4 + 0x10) + ((longlong)iVar7 >> 5) * 4) >>
                   ((byte)iVar7 & 0x1f) & 1) != 0) {
                *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + -1;
                if (*(int *)(lVar14 + 0x30) != iVar16) {
                  puVar6 = (undefined4 *)(*(longlong *)(lVar14 + 0x28) + lVar11);
                  lVar10 = 3;
                  lVar14 = (*(longlong *)(lVar14 + 0x28) + (longlong)*(int *)(lVar14 + 0x30) * 0xc)
                           - (longlong)puVar6;
                  do {
                    *puVar6 = *(undefined4 *)(lVar14 + (longlong)puVar6);
                    puVar6 = puVar6 + 1;
                    lVar10 = lVar10 + -1;
                  } while (lVar10 != 0);
                }
              }
            }
            iVar16 = iVar16 + -1;
            lVar11 = lVar11 + -0xc;
            lVar15 = lVar15 + -1;
          } while (-1 < lVar15);
          uVar8 = (ulonglong)local_b4;
          uVar9 = local_98;
        }
        iVar16 = local_80;
        if ((*(int *)(lVar5 + 0x30) == 0) && (*(longlong *)(lVar5 + 0x20) == 0)) {
          if (uVar9 == (local_94 & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,&local_a0);
            uVar9 = local_98;
          }
          local_a0[(int)uVar9] = iVar16;
          local_98 = local_98 + 1;
          local_60 = iVar16;
          uVar9 = local_98;
        }
        local_78 = local_78 + 2;
      } while (local_78 != local_58);
    }
    plVar1 = local_50;
    piVar2 = local_a0 + (int)uVar9;
    for (piVar12 = local_a0; piVar12 != piVar2; piVar12 = piVar12 + 1) {
      local_a4 = *piVar12;
      lVar15 = (longlong)local_a4;
      lVar5 = FUN_14383df10(plVar1,&local_a4);
      if (lVar5 == 0) {
        iVar16 = -1;
        uVar9 = 0xffffffff;
      }
      else {
        iVar16 = *(int *)(lVar5 + 4);
        uVar9 = (uint)(lVar5 - plVar1[2] >> 3);
      }
      lVar5 = *plVar1 + (longlong)iVar16 * 8;
      lVar11 = (longlong)*(int *)(lVar5 + 4);
      if ((*(uint *)(plVar1 + 3) < uVar9) ||
         (lVar10 = plVar1[2] + (longlong)(int)uVar9 * 8,
         *(int *)(plVar1[2] + 4 + (longlong)(int)uVar9 * 8) != iVar16)) {
        lVar10 = FUN_14383df10(plVar1,lVar5);
      }
      FUN_14383dfe0(plVar1,lVar10);
      lVar15 = lVar15 * 0x100 + *(longlong *)(param_1 + 0x38);
      lVar5 = FUN_14383df10(lVar15 + 0xb0,&local_b4);
      if (lVar5 != 0) {
        FUN_14383dfe0(lVar15 + 0xb0,lVar5);
      }
      lVar5 = *(longlong *)(param_1 + 0x48);
      *(undefined1 *)(lVar5 + 0x10 + lVar11 * 0x18) = 1;
      if (*(longlong *)(lVar5 + lVar11 * 0x18) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(lVar5 + lVar11 * 0x18) = 0;
    }
    local_98 = 0;
    if (-1 < (int)local_94) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_a0,4,local_94 & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 1438407a0 FUN_1438407a0 body=1958 status=ok
// SIG undefined FUN_1438407a0(void)

/* WARNING: Removing unreachable block (ram,0x000143840bd7) */

void FUN_1438407a0(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  short sVar17;
  short *psVar18;
  uint local_res10 [2];
  ulonglong local_res20;
  short *local_1b8;
  uint local_1b0;
  uint local_1ac;
  short local_1a8 [4];
  uint local_1a0 [2];
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  uint local_174;
  undefined8 local_170;
  uint local_168;
  uint local_164;
  undefined4 local_160;
  undefined8 local_150;
  undefined4 local_148;
  uint local_144;
  undefined8 local_140;
  int local_138;
  uint local_134;
  undefined4 local_130;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  uint local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_dc;
  uint local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  undefined8 local_88;
  short *psStack_80;
  undefined8 local_78;
  short *psStack_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  local_118 = *(longlong *)((longlong)*param_2 * 0x100 + 0xb0 + *(longlong *)(param_1 + 0x38));
  local_108 = local_118 +
              (longlong)*(int *)((longlong)*param_2 * 0x100 + 0xb8 + *(longlong *)(param_1 + 0x38))
              * 8;
  if (local_118 != local_108) {
    do {
      plVar1 = (longlong *)
               (*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(local_118 + 4) * 0x18);
      if ((char)plVar1[2] == '\x01') {
        local_120 = *plVar1;
      }
      else {
        local_120 = FUN_14383fe50();
      }
      local_110 = *(longlong *)(local_120 + 0x28);
      local_188 = local_110 + (longlong)*(int *)(local_120 + 0x30) * 0xc;
      if (local_110 != local_188) {
        local_68 = local_110 + 0xc;
        local_190 = 0;
        do {
          lVar6 = local_110;
          lVar8 = local_120;
          lVar11 = local_190;
          lVar7 = 0;
          iVar14 = (int)((local_188 - local_110) / 0xc);
          if (local_190 == 0) {
            if (1 < iVar14) {
              puVar16 = &LAB_14383cbf0;
LAB_1438408c8:
              FUN_14383cc20(local_110,0,iVar14 + -1,puVar16);
            }
          }
          else if (1 < iVar14) {
            puVar16 = &LAB_14383cbc0;
            goto LAB_1438408c8;
          }
          iVar14 = *(int *)(lVar8 + 0x18 + lVar11 * 4);
          lVar8 = *(longlong *)((longlong)iVar14 * 0x100 + *(longlong *)(param_1 + 0x38));
          if (lVar8 != 0) {
            if (*(char *)(lVar8 + 0x28) == '\x01') {
              lVar7 = *(longlong *)(lVar8 + 0x18);
            }
            else {
              lVar7 = FUN_142fbda20();
            }
          }
          uVar15 = *(uint *)(lVar6 + lVar11 * 4);
          lVar8 = FUN_1437fb610(*(undefined8 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x20),
                                lVar7 + 0xb0,lVar7 + 0xd0,lVar7 + 0x90,uVar15);
          sVar2 = *(short *)(lVar6 + 8 + lVar11 * 2);
          sVar17 = *(short *)(lVar8 + 10) + *(short *)(lVar8 + 8);
          local_1b8 = local_1a8;
          local_1b0 = 0;
          local_1ac = 0x80000004;
          uVar9 = FUN_143703a50();
          psVar4 = uStack_40;
          psVar3 = uStack_50;
          if (local_1b0 == (local_1ac & 0x3fffffff)) {
            FUN_14370c460(uVar9,&local_1b8,2);
            psVar4 = uStack_40;
            psVar3 = uStack_50;
          }
          local_1b8[(int)local_1b0] = sVar2 - sVar17;
          local_1b0 = local_1b0 + 1;
          if (local_68 != local_188) {
            psVar18 = (short *)(local_68 + 8 + lVar11 * 2);
            local_res20 = local_190 * 2 - 8;
            local_198 = (-4 - local_190) * 2;
            do {
              uStack_50 = psVar3;
              uStack_40 = psVar4;
              if (*(uint *)(local_res20 + (longlong)psVar18) == uVar15) {
                sVar2 = *psVar18;
                uVar9 = FUN_143703a50();
                psVar3 = uStack_50;
                psVar4 = uStack_40;
                if (local_1b0 == (local_1ac & 0x3fffffff)) {
                  FUN_14370c460(uVar9,&local_1b8,2);
                  psVar3 = uStack_50;
                  psVar4 = uStack_40;
                }
                local_1b8[(int)local_1b0] = sVar2 - sVar17;
                local_1b0 = local_1b0 + 1;
              }
              else {
                uVar10 = 0;
                local_174 = 0x80000000;
                local_180 = 0;
                local_178 = 0;
                local_170 = 0;
                local_168 = 0;
                local_res10[0] = 0;
                local_164 = 0x80000000;
                uVar9 = FUN_143703a50();
                uVar12 = local_res10[0];
                if (local_res10[0] != 0) {
                  uVar10 = FUN_143702d60(uVar9,4,local_res10);
                }
                local_168 = uVar12;
                local_160 = 0;
                local_164 = 0x80000000;
                if (local_res10[0] != 0) {
                  local_164 = local_res10[0];
                }
                local_88 = local_1b8;
                psVar3 = local_88;
                psStack_80 = local_1b8 + (int)local_1b0;
                local_88._0_4_ = SUB84(local_1b8,0);
                local_88._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
                local_58 = (undefined4)local_88;
                uStack_54 = local_88._4_4_;
                local_1a0[0] = uVar15;
                local_170 = uVar10;
                local_88 = psVar3;
                uStack_50 = psStack_80;
                FUN_143839570(lVar7,local_1a0,&local_58,&local_180);
                local_100 = iVar14 << 0x16 | uVar15;
                FUN_14383d0f0(&local_f8,&local_180);
                if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
                  FUN_14370c460(&PTR_vftable_1467f0638,param_3,0x38);
                }
                puVar13 = (uint *)((longlong)(int)param_3[1] * 0x38 + *param_3);
                if (puVar13 != (uint *)0x0) {
                  *puVar13 = local_100;
                  FUN_14383d0f0(puVar13 + 2,&local_f8);
                }
                *(int *)(param_3 + 1) = (int)param_3[1] + 1;
                uVar9 = FUN_143703a50();
                local_e0 = 0;
                if (-1 < (int)local_dc) {
                  FUN_143702e10(uVar9,local_e8,4,local_dc & 0x3fffffff);
                }
                local_e8 = 0;
                local_dc = 0x80000000;
                local_f0 = 0;
                if (-1 < (int)local_ec) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_f8,2,local_ec & 0x3fffffff);
                }
                uVar15 = *(uint *)(local_res20 + (longlong)psVar18);
                lVar11 = FUN_1437fb610(*(undefined8 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x20),
                                       lVar7 + 0xb0,lVar7 + 0xd0,lVar7 + 0x90,uVar15);
                sVar17 = *(short *)(lVar11 + 10) + *(short *)(lVar11 + 8);
                uVar9 = FUN_143703a50();
                if ((local_1ac & 0x3fffffff) == 0) {
                  FUN_14370c310(uVar9,&local_1b8,1,2);
                }
                local_1b0 = 1;
                *local_1b8 = *psVar18 - sVar17;
                uVar9 = FUN_143703a50();
                local_168 = 0;
                if (-1 < (int)local_164) {
                  FUN_143702e10(uVar9,local_170,4,local_164 & 0x3fffffff);
                }
                local_170 = 0;
                local_164 = 0x80000000;
                local_178 = 0;
                psVar3 = uStack_50;
                psVar4 = uStack_40;
                if (-1 < (int)local_174) {
                  FUN_143702e10(&PTR_vftable_1467f0638,local_180,2,local_174 & 0x3fffffff);
                  psVar3 = uStack_50;
                  psVar4 = uStack_40;
                }
              }
              psVar18 = psVar18 + 6;
              lVar11 = local_190;
            } while (local_198 + (longlong)psVar18 != local_188);
          }
          uVar10 = 0;
          local_144 = 0x80000000;
          local_150 = 0;
          local_148 = 0;
          local_140 = 0;
          local_138 = 0;
          local_res20 = local_res20 & 0xffffffff00000000;
          local_134 = 0x80000000;
          uStack_50 = psVar3;
          uStack_40 = psVar4;
          uVar9 = FUN_143703a50();
          iVar5 = (uint)local_res20;
          if ((uint)local_res20 == 0) {
            uVar12 = 0;
          }
          else {
            uVar10 = FUN_143702d60(uVar9,4,&local_res20);
            uVar12 = (uint)local_res20;
          }
          local_78 = local_1b8;
          psVar3 = local_78;
          local_134 = 0x80000000;
          if (uVar12 != 0) {
            local_134 = uVar12;
          }
          local_138 = iVar5;
          local_130 = 0;
          local_198 = CONCAT44(local_198._4_4_,uVar15);
          psStack_70 = local_1b8 + (int)local_1b0;
          local_78._0_4_ = SUB84(local_1b8,0);
          local_78._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
          local_48 = (undefined4)local_78;
          uStack_44 = local_78._4_4_;
          local_140 = uVar10;
          local_78 = psVar3;
          uStack_40 = psStack_70;
          FUN_143839570(lVar7,&local_198,&local_48,&local_150);
          local_c8 = iVar14 << 0x16 | uVar15;
          FUN_14383d0f0(&local_c0,&local_150);
          if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_3,0x38);
          }
          puVar13 = (uint *)((longlong)(int)param_3[1] * 0x38 + *param_3);
          if (puVar13 != (uint *)0x0) {
            *puVar13 = local_c8;
            FUN_14383d0f0(puVar13 + 2,&local_c0);
          }
          *(int *)(param_3 + 1) = (int)param_3[1] + 1;
          uVar9 = FUN_143703a50();
          local_a8 = 0;
          if (-1 < (int)local_a4) {
            FUN_143702e10(uVar9,local_b0,4,local_a4 & 0x3fffffff);
          }
          local_b0 = 0;
          local_a4 = 0x80000000;
          local_b8 = 0;
          if (-1 < (int)local_b4) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_c0,2,local_b4 & 0x3fffffff);
          }
          uVar9 = FUN_143703a50();
          local_138 = 0;
          if (-1 < (int)local_134) {
            FUN_143702e10(uVar9,local_140,4,local_134 & 0x3fffffff);
          }
          local_140 = 0;
          local_134 = 0x80000000;
          local_148 = 0;
          if (-1 < (int)local_144) {
            FUN_143702e10(&PTR_vftable_1467f0638,local_150,2,local_144 & 0x3fffffff);
          }
          uVar9 = FUN_143703a50();
          local_1b0 = 0;
          if (-1 < (int)local_1ac) {
            FUN_143702e10(uVar9,local_1b8,2,local_1ac & 0x3fffffff);
          }
          local_190 = lVar11 + 1;
        } while (local_190 < 2);
      }
      local_118 = local_118 + 8;
    } while (local_118 != local_108);
  }
  return;
}



// FUNCTION 143840f50 FUN_143840f50 body=242 status=ok
// SIG undefined FUN_143840f50(void)

void FUN_143840f50(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = (longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38);
  iVar1 = *(int *)(lVar6 + 0xd8);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    plVar5 = (longlong *)
             (*(longlong *)(param_1 + 0x38) + 0xd0 +
             (longlong)*(int *)(*(longlong *)(lVar6 + 0xd0) + (longlong)iVar1 * 0x10) * 0x100);
    lVar3 = FUN_14383df70(plVar5);
    if (lVar3 == 0) {
      iVar4 = -1;
      uVar2 = 0xffffffff;
    }
    else {
      iVar4 = *(int *)(lVar3 + 4);
      uVar2 = (uint)(lVar3 - plVar5[2] >> 3);
    }
    if ((*(uint *)(plVar5 + 3) < uVar2) ||
       (lVar3 = plVar5[2] + (longlong)(int)uVar2 * 8,
       *(int *)(plVar5[2] + 4 + (longlong)(int)uVar2 * 8) != iVar4)) {
      lVar3 = FUN_14383df70(plVar5,(longlong)iVar4 * 0x10 + *plVar5);
    }
    FUN_14383e100(plVar5,lVar3);
  }
  FUN_14383f530(lVar6 + 0xd0);
  return;
}



// FUNCTION 143841050 FUN_143841050 body=219 status=ok
// SIG undefined FUN_143841050(void)

void FUN_143841050(longlong param_1,int *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int local_res8 [2];
  int local_res10 [2];
  uint local_res18;
  
  plVar3 = (longlong *)((longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38));
  lVar1 = plVar3[5];
  local_res18 = param_3;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = FUN_14383ffc0();
  }
  FUN_1437e5cf0(uVar2,(int)lVar1);
  *(undefined4 *)(plVar3 + 5) = 0xffffffff;
  local_res8[0] = *param_2;
  FUN_1438411e0(param_1,local_res8);
  if (*plVar3 != 0) {
    FUN_14370c150();
  }
  *plVar3 = 0;
  if (plVar3[3] != 0) {
    FUN_14370c150();
  }
  plVar3[3] = 0;
  *(byte *)(plVar3 + 0x1e) = *(byte *)(plVar3 + 0x1e) | 1;
  if (plVar3[2] == 0) {
    if ((local_res18 & 2) == 0) {
      *(undefined4 *)((longlong)plVar3 + 0x2c) = 0xffffffff;
    }
  }
  else if ((local_res18 & 1) != 0) {
    local_res10[0] = *param_2;
    FUN_143841130(param_1,local_res10,(byte)(local_res18 >> 1) & 1);
    return;
  }
  return;
}



// FUNCTION 143841130 FUN_143841130 body=170 status=ok
// SIG undefined FUN_143841130(void)

void FUN_143841130(longlong param_1,int *param_2,char param_3)

{
  byte *pbVar1;
  longlong lVar2;
  int local_res18 [2];
  
  FUN_143896e00(*(undefined8 *)((longlong)*param_2 * 0x100 + 0x10 + *(longlong *)(param_1 + 0x38)),
                param_1);
  local_res18[0] = *param_2;
  FUN_143840f50(param_1,local_res18);
  lVar2 = (longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  pbVar1 = (byte *)((longlong)*param_2 * 0x100 + 0xf0 + *(longlong *)(param_1 + 0x38));
  *pbVar1 = *pbVar1 | 4;
  if (param_3 == '\0') {
    *(undefined4 *)((longlong)*param_2 * 0x100 + 0x2c + *(longlong *)(param_1 + 0x38)) = 0xffffffff;
  }
  return;
}



// FUNCTION 1438411e0 FUN_1438411e0 body=389 status=ok
// SIG undefined FUN_1438411e0(void)

void FUN_1438411e0(longlong param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  lVar8 = (longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38);
  piVar9 = *(int **)(lVar8 + 0xb0);
  piVar1 = piVar9 + (longlong)*(int *)(lVar8 + 0xb8) * 2;
  piVar10 = piVar9;
  piVar11 = piVar1;
  for (; piVar9 != piVar1; piVar9 = piVar9 + 2) {
    lVar7 = (longlong)piVar9[1];
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xb0 + (longlong)*piVar9 * 0x100);
    lVar3 = FUN_14383df10(plVar6);
    if (lVar3 == 0) {
      iVar5 = -1;
      uVar2 = 0xffffffff;
    }
    else {
      iVar5 = *(int *)(lVar3 + 4);
      uVar2 = (uint)(lVar3 - plVar6[2] >> 3);
    }
    if ((*(uint *)(plVar6 + 3) < uVar2) ||
       (lVar3 = plVar6[2] + (longlong)(int)uVar2 * 8,
       *(int *)(plVar6[2] + 4 + (longlong)(int)uVar2 * 8) != iVar5)) {
      lVar3 = FUN_14383df10(plVar6,*plVar6 + (longlong)iVar5 * 8);
    }
    FUN_14383dfe0(plVar6,lVar3);
    lVar3 = *(longlong *)(param_1 + 0x48);
    *(undefined1 *)(lVar3 + 0x10 + lVar7 * 0x18) = 1;
    if (*(longlong *)(lVar3 + lVar7 * 0x18) != 0) {
      FUN_14370c150();
    }
    *(undefined8 *)(lVar3 + lVar7 * 0x18) = 0;
  }
  uVar4 = FUN_143703a50();
  *(undefined4 *)(lVar8 + 0xb8) = 0;
  if (-1 < (int)*(uint *)(lVar8 + 0xbc)) {
    FUN_143702e10(uVar4,*(undefined8 *)(lVar8 + 0xb0),8,*(uint *)(lVar8 + 0xbc) & 0x3fffffff,piVar10
                  ,piVar11);
  }
  *(undefined8 *)(lVar8 + 0xb0) = 0;
  *(undefined4 *)(lVar8 + 0xbc) = 0x80000000;
  FUN_143734820(lVar8 + 0xc0);
  return;
}



// FUNCTION 143841370 FUN_143841370 body=250 status=ok
// SIG undefined FUN_143841370(void)

void FUN_143841370(longlong param_1,int *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_res8 [2];
  
  lVar4 = *(longlong *)((longlong)*param_2 * 0x100 + 8 + *(longlong *)(param_1 + 0x38));
  uVar2 = *(undefined4 *)((longlong)*param_2 * 0x100 + 0x28 + *(longlong *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar3 = FUN_14383ffc0();
  }
  FUN_1437e5cf0(uVar3,uVar2);
  *(undefined4 *)((longlong)*param_2 * 0x100 + 0x28 + *(longlong *)(param_1 + 0x38)) = 0xffffffff;
  if (*(char *)(lVar4 + 0x28) == '\x01') {
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
  }
  else {
    uVar3 = FUN_142fbdb90();
  }
  FUN_143897770(uVar3,param_1);
  local_res8[0] = *param_2;
  FUN_1438411e0(param_1,local_res8);
  lVar4 = (longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(lVar4 + 8) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar4 + 8) = 0;
  lVar4 = (longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(lVar4 + 0x20) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar4 + 0x20) = 0;
  pbVar1 = (byte *)((longlong)*param_2 * 0x100 + 0xf0 + *(longlong *)(param_1 + 0x38));
  *pbVar1 = *pbVar1 | 2;
  return;
}



// FUNCTION 143841470 FUN_143841470 body=430 status=ok
// SIG undefined FUN_143841470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_143841470(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar1 = *(int *)(param_1 + 0x40);
  uVar9 = 0;
  if (0 < iVar1) {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x38) + 0x2c);
    uVar11 = uVar9;
    uVar12 = uVar9;
    do {
      if (*piVar6 == param_3) {
        *param_2 = (int)uVar12;
        return param_2;
      }
      uVar12 = (ulonglong)((int)uVar12 + 1);
      uVar11 = uVar11 + 1;
      piVar6 = piVar6 + 0x40;
    } while ((longlong)uVar11 < (longlong)iVar1);
  }
  if (0 < iVar1) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    uVar11 = uVar9;
    do {
      if (*(int *)(lVar7 + 0x2c) == -1) {
        *(int *)(lVar7 + 0x2c) = param_3;
        *param_2 = (int)uVar11;
        return param_2;
      }
      uVar11 = (ulonglong)((int)uVar11 + 1);
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 0x100;
    } while ((longlong)uVar9 < (longlong)iVar1);
  }
  uVar8 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
    FUN_14370c460(uVar8,param_1 + 0x38,0x100);
  }
  puVar10 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x40) * 0x100 + *(longlong *)(param_1 + 0x38));
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0xffffffffffffffff;
    uVar8 = uRam00000001467f0898;
    puVar10[6] = _DAT_1467f0890;
    puVar10[7] = uVar8;
    uVar5 = uRam00000001467f08ac;
    uVar4 = uRam00000001467f08a8;
    uVar3 = uRam00000001467f08a4;
    *(undefined4 *)(puVar10 + 8) = _DAT_1467f08a0;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uVar3;
    *(undefined4 *)(puVar10 + 9) = uVar4;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uVar5;
    uVar5 = uRam00000001467f08bc;
    uVar4 = uRam00000001467f08b8;
    uVar3 = uRam00000001467f08b4;
    *(undefined4 *)(puVar10 + 10) = _DAT_1467f08b0;
    *(undefined4 *)((longlong)puVar10 + 0x54) = uVar3;
    *(undefined4 *)(puVar10 + 0xb) = uVar4;
    *(undefined4 *)((longlong)puVar10 + 0x5c) = uVar5;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x16] = 0;
    *(undefined4 *)(puVar10 + 0x17) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xbc) = 0x80000000;
    FUN_143734b10(puVar10 + 0x18);
    puVar10[0x1a] = 0;
    *(undefined4 *)(puVar10 + 0x1b) = 0;
    *(undefined4 *)((longlong)puVar10 + 0xdc) = 0x80000000;
    FUN_143734b10(puVar10 + 0x1c);
    *(undefined1 *)(puVar10 + 0x1e) = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    *(undefined1 *)(puVar10 + 0x12) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  lVar7 = *(longlong *)(param_1 + 0x38);
  *param_2 = iVar1;
  *(int *)(param_1 + 0x40) = iVar2 + 1;
  *(int *)((longlong)iVar2 * 0x100 + lVar7 + 0x2c) = param_3;
  return param_2;
}



// FUNCTION 143841620 FUN_143841620 body=285 status=ok
// SIG undefined FUN_143841620(void)

void FUN_143841620(longlong param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  plVar7 = (longlong *)((longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38));
  cVar5 = FUN_143889160(plVar7 + 6,param_3);
  if (cVar5 != '\0') {
    lVar1 = param_3[1];
    plVar7[6] = *param_3;
    plVar7[7] = lVar1;
    lVar1 = param_3[3];
    plVar7[8] = param_3[2];
    plVar7[9] = lVar1;
    lVar1 = param_3[5];
    plVar7[10] = param_3[4];
    plVar7[0xb] = lVar1;
    lVar1 = param_3[7];
    plVar7[0xc] = param_3[6];
    plVar7[0xd] = lVar1;
    lVar1 = param_3[9];
    plVar7[0xe] = param_3[8];
    plVar7[0xf] = lVar1;
    lVar1 = param_3[0xb];
    plVar7[0x10] = param_3[10];
    plVar7[0x11] = lVar1;
    lVar1 = *plVar7;
    if (lVar1 != 0) {
      lVar4 = param_3[1];
      *(longlong *)(lVar1 + 0x40) = *param_3;
      *(longlong *)(lVar1 + 0x48) = lVar4;
      lVar4 = param_3[3];
      *(longlong *)(lVar1 + 0x50) = param_3[2];
      *(longlong *)(lVar1 + 0x58) = lVar4;
      lVar4 = param_3[5];
      *(longlong *)(lVar1 + 0x60) = param_3[4];
      *(longlong *)(lVar1 + 0x68) = lVar4;
      lVar4 = param_3[7];
      *(longlong *)(lVar1 + 0x70) = param_3[6];
      *(longlong *)(lVar1 + 0x78) = lVar4;
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x44);
      lVar4 = param_3[9];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x4c);
      *(int *)(lVar1 + 0x80) = (int)param_3[8];
      *(undefined4 *)(lVar1 + 0x84) = uVar2;
      *(int *)(lVar1 + 0x88) = (int)lVar4;
      *(undefined4 *)(lVar1 + 0x8c) = uVar3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x54);
      lVar4 = param_3[0xb];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x5c);
      *(int *)(lVar1 + 0x90) = (int)param_3[10];
      *(undefined4 *)(lVar1 + 0x94) = uVar2;
      *(int *)(lVar1 + 0x98) = (int)lVar4;
      *(undefined4 *)(lVar1 + 0x9c) = uVar3;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_14383a080(lVar1,local_28);
        if (*(char *)(param_1 + 0x30) == '\x01') {
          uVar6 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          uVar6 = FUN_14383ffc0(param_1 + 0x20);
        }
        FUN_1437e6070(uVar6,(int)plVar7[5],local_28);
      }
    }
    lVar1 = plVar7[2];
    if (lVar1 != 0) {
      lVar4 = param_3[1];
      *(longlong *)(lVar1 + 0x30) = *param_3;
      *(longlong *)(lVar1 + 0x38) = lVar4;
      lVar4 = param_3[3];
      *(longlong *)(lVar1 + 0x40) = param_3[2];
      *(longlong *)(lVar1 + 0x48) = lVar4;
      lVar4 = param_3[5];
      *(longlong *)(lVar1 + 0x50) = param_3[4];
      *(longlong *)(lVar1 + 0x58) = lVar4;
      lVar4 = param_3[7];
      *(longlong *)(lVar1 + 0x60) = param_3[6];
      *(longlong *)(lVar1 + 0x68) = lVar4;
    }
  }
  return;
}



// FUNCTION 143841740 FUN_143841740 body=33 status=ok
// SIG undefined FUN_143841740(void)

void FUN_143841740(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x17c);
  FUN_143841770(param_1,local_res10);
  return;
}



// FUNCTION 143841770 FUN_143841770 body=222 status=ok
// SIG undefined FUN_143841770(void)

void FUN_143841770(longlong param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_28 [32];
  
  lVar1 = param_3[1];
  plVar6 = (longlong *)((longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38));
  plVar6[6] = *param_3;
  plVar6[7] = lVar1;
  lVar1 = param_3[3];
  plVar6[8] = param_3[2];
  plVar6[9] = lVar1;
  lVar1 = param_3[5];
  plVar6[10] = param_3[4];
  plVar6[0xb] = lVar1;
  lVar1 = param_3[7];
  plVar6[0xc] = param_3[6];
  plVar6[0xd] = lVar1;
  lVar1 = *plVar6;
  if (lVar1 != 0) {
    lVar4 = param_3[1];
    *(longlong *)(lVar1 + 0x40) = *param_3;
    *(longlong *)(lVar1 + 0x48) = lVar4;
    lVar4 = param_3[3];
    *(longlong *)(lVar1 + 0x50) = param_3[2];
    *(longlong *)(lVar1 + 0x58) = lVar4;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
    lVar4 = param_3[5];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(int *)(lVar1 + 0x60) = (int)param_3[4];
    *(undefined4 *)(lVar1 + 100) = uVar2;
    *(int *)(lVar1 + 0x68) = (int)lVar4;
    *(undefined4 *)(lVar1 + 0x6c) = uVar3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x34);
    lVar4 = param_3[7];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(int *)(lVar1 + 0x70) = (int)param_3[6];
    *(undefined4 *)(lVar1 + 0x74) = uVar2;
    *(int *)(lVar1 + 0x78) = (int)lVar4;
    *(undefined4 *)(lVar1 + 0x7c) = uVar3;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_14383a080(lVar1,local_28);
      if (*(char *)(param_1 + 0x30) == '\x01') {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar5 = FUN_14383ffc0(param_1 + 0x20);
      }
      FUN_1437e6070(uVar5,(int)plVar6[5],local_28);
    }
  }
  lVar1 = plVar6[2];
  if (lVar1 != 0) {
    lVar4 = param_3[1];
    *(longlong *)(lVar1 + 0x30) = *param_3;
    *(longlong *)(lVar1 + 0x38) = lVar4;
    lVar4 = param_3[3];
    *(longlong *)(lVar1 + 0x40) = param_3[2];
    *(longlong *)(lVar1 + 0x48) = lVar4;
    lVar4 = param_3[5];
    *(longlong *)(lVar1 + 0x50) = param_3[4];
    *(longlong *)(lVar1 + 0x58) = lVar4;
    lVar4 = param_3[7];
    *(longlong *)(lVar1 + 0x60) = param_3[6];
    *(longlong *)(lVar1 + 0x68) = lVar4;
  }
  return;
}



// FUNCTION 143841850 FUN_143841850 body=204 status=ok
// SIG undefined FUN_143841850(void)

void FUN_143841850(longlong param_1,int *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar5 = (longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38);
  *(undefined1 *)(lVar5 + 0x90) = *param_3;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar5 + 0xa0) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar5 + 0xa8) = uVar3;
  lVar4 = *(longlong *)(lVar5 + 8);
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    plVar1 = (longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(lVar4 + 0x48) = uVar3;
    if (*plVar1 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x38);
      local_28 = *(float *)(lVar2 + 0x70);
      fStack_24 = *(float *)(lVar2 + 0x74);
      fStack_20 = *(float *)(lVar2 + 0x78);
      fStack_1c = *(float *)(lVar2 + 0x7c);
      local_18 = *(float *)(lVar2 + 0x80);
      fStack_14 = *(float *)(lVar2 + 0x84);
      fStack_10 = *(float *)(lVar2 + 0x88);
      fStack_c = *(float *)(lVar2 + 0x8c);
      FUN_142fbdd20(lVar4 + 0x30,&local_28);
      local_28 = local_28 + *(float *)(lVar4 + 0x40);
      fStack_24 = fStack_24 + *(float *)(lVar4 + 0x44);
      fStack_20 = fStack_20 + *(float *)(lVar4 + 0x48);
      fStack_1c = fStack_1c + *(float *)(lVar4 + 0x4c);
      local_18 = local_18 + *(float *)(lVar4 + 0x40);
      fStack_14 = fStack_14 + *(float *)(lVar4 + 0x44);
      fStack_10 = fStack_10 + *(float *)(lVar4 + 0x48);
      fStack_c = fStack_c + *(float *)(lVar4 + 0x4c);
      if (*(char *)(param_1 + 0x30) == '\x01') {
        lVar4 = *plVar1;
      }
      else {
        lVar4 = FUN_14383ffc0(plVar1);
      }
      FUN_1437e6070(lVar4,*(undefined4 *)(lVar5 + 0x28),&local_28);
    }
  }
  return;
}



// FUNCTION 143841920 FUN_143841920 body=52 status=ok
// SIG undefined FUN_143841920(void)

void FUN_143841920(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 local_res10 [6];
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_28[0] = 0;
  local_res10[0] = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x94);
  FUN_143841850(local_18,local_res10,local_28);
  return;
}



// FUNCTION 143841960 FUN_143841960 body=38 status=ok
// SIG undefined FUN_143841960(void)

void FUN_143841960(undefined8 param_1,longlong param_2)

{
  int local_res10 [6];
  
  local_res10[0] = *(int *)(*(longlong *)(param_2 + 0x18) + 0x17c);
  if (local_res10[0] != -1) {
    FUN_143841990(param_1,local_res10);
  }
  return;
}



// FUNCTION 143841990 FUN_143841990 body=250 status=ok
// SIG undefined FUN_143841990(void)

void FUN_143841990(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  
  lVar3 = *(longlong *)((longlong)*param_2 * 0x100 + *(longlong *)(param_1 + 0x38));
  uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + 0x180);
  iVar5 = FUN_14383f760(param_1,uVar2);
  FUN_14383a100(lVar3,iVar5);
  uVar8 = 0;
  if (0 < iVar5) {
    do {
      uVar9 = FUN_14387bbc0(*(undefined8 *)(param_1 + 0x58),uVar2,uVar8 & 0xff);
      puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x30) + (uVar8 & 0xff) * 0x18);
      if (*(char *)(puVar1 + 2) == '\x01') {
        uVar6 = *puVar1;
      }
      else {
        uVar6 = FUN_143833c50();
      }
      FUN_1438356f0(uVar6,uVar9,0);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar5);
  }
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x68) + 0xc0);
  if (lVar4 != 0) {
    FUN_14370c030(lVar4);
    FUN_143833a70(lVar4,*(undefined8 *)(param_1 + 0x58),lVar3);
    FUN_14370c150(lVar4);
  }
  return;
}



// FUNCTION 143841a90 FUN_143841a90 body=141 status=ok
// SIG undefined FUN_143841a90(void)

int FUN_143841a90(float *param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = 0;
  fVar3 = *param_3 - *param_1;
  fVar4 = param_3[1] - param_1[1];
  fVar5 = param_3[2] - param_1[2];
  iVar1 = 1;
  fVar3 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
  if (1 < param_2) {
    do {
      fVar4 = *param_3 - param_1[4];
      fVar5 = param_3[1] - param_1[5];
      fVar6 = param_3[2] - param_1[6];
      fVar4 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
      if (fVar4 < fVar3) {
        fVar3 = fVar4;
        iVar2 = iVar1;
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 4;
    } while (iVar1 < param_2);
  }
  return iVar2;
}



// FUNCTION 143841b30 FUN_143841b30 body=447 status=ok
// SIG undefined FUN_143841b30(void)

/* WARNING: Removing unreachable block (ram,0x000143841b89) */

bool FUN_143841b30(longlong *param_1,undefined4 param_2,int param_3,longlong *param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  lVar2 = FUN_143843b40();
  if ((*(ushort *)(lVar2 + 0xe) & 4) == 0) {
    lVar4 = lVar2;
    uVar6 = 0;
    if (param_3 == 0) {
      uVar6 = (uint)((*(ushort *)(lVar2 + 0xe) & 8) != 0);
    }
    do {
      uVar5 = uVar6;
      if (*(short *)(lVar4 + 0xc) == -1) {
        lVar4 = 0;
      }
      else {
        lVar4 = (longlong)*(short *)(lVar4 + 0xc) * 0x10 + *param_1;
      }
      uVar6 = uVar5 + 1;
    } while ((*(byte *)(lVar4 + 0xe) & 4) == 0);
    if (param_3 == 0) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < (int)param_5) {
      param_5 = uVar5;
    }
    uVar3 = FUN_143703a50();
    uVar6 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
    if ((int)uVar6 < (int)param_5) {
      uVar6 = uVar6 * 2;
      uVar1 = param_5;
      if ((int)param_5 < (int)uVar6) {
        uVar1 = uVar6;
      }
      FUN_14370c310(uVar3,param_4,uVar1,4);
    }
    *(uint *)(param_4 + 1) = param_5;
    iVar7 = uVar5 - 1;
    if ((param_3 == 0) && ((*(byte *)(lVar2 + 0xe) & 8) != 0)) {
      if (iVar7 < (int)param_5) {
        *(undefined4 *)(*param_4 + (longlong)iVar7 * 4) = *(undefined4 *)(lVar2 + 8);
      }
      iVar7 = uVar5 - 2;
    }
    if ((*(byte *)(lVar2 + 0xe) & 4) == 0) {
      lVar4 = (longlong)iVar7;
      do {
        if (*(short *)(lVar2 + 0xc) == -1) {
          lVar2 = 0;
        }
        else {
          lVar2 = (longlong)*(short *)(lVar2 + 0xc) * 0x10 + *param_1;
        }
        if ((lVar4 < (int)param_5) && ((param_3 == 0 || ((*(byte *)(lVar2 + 0xe) & 4) == 0)))) {
          *(undefined4 *)(*param_4 + lVar4 * 4) = *(undefined4 *)(lVar2 + 8);
        }
        lVar4 = lVar4 + -1;
      } while ((*(byte *)(lVar2 + 0xe) & 4) == 0);
    }
    return param_5 == uVar5;
  }
  if (param_3 != 0) {
    return true;
  }
  if ((int)param_5 < 1) {
    return false;
  }
  uVar3 = FUN_143703a50();
  if ((*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff) == 0) {
    FUN_14370c310(uVar3,param_4,1,4);
  }
  *(undefined4 *)(param_4 + 1) = 1;
  *(undefined4 *)*param_4 = param_2;
  return true;
}



// FUNCTION 143841cf0 FUN_143841cf0 body=124 status=ok
// SIG undefined FUN_143841cf0(void)

undefined8 * FUN_143841cf0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 100000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 143841d70 FUN_143841d70 body=355 status=ok
// SIG undefined FUN_143841d70(void)

undefined8 * FUN_143841d70(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiPathfindingUtil::FindPathInput::vftable;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff80000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 100000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x10301;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x101;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x14) = 0x7f7fffee;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x15) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (0 < param_2) {
    uVar2 = FUN_143703a50();
    uVar3 = *(uint *)((longlong)param_1 + 0x54) & 0x3fffffff;
    if ((int)uVar3 < param_2) {
      iVar1 = uVar3 * 2;
      iVar4 = param_2;
      if (param_2 < iVar1) {
        iVar4 = iVar1;
      }
      FUN_14370c310(uVar2,param_1 + 9,iVar4,4);
    }
    *(int *)(param_1 + 10) = param_2;
    uVar2 = FUN_143703a50();
    uVar3 = *(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff;
    if ((int)uVar3 < param_2) {
      iVar1 = uVar3 * 2;
      iVar4 = param_2;
      if (param_2 < iVar1) {
        iVar4 = iVar1;
      }
      FUN_14370c310(uVar2,param_1 + 6,iVar4,0x10);
    }
    *(int *)(param_1 + 7) = param_2;
  }
  return param_1;
}



// FUNCTION 143841ee0 FUN_143841ee0 body=66 status=ok
// SIG undefined FUN_143841ee0(void)

undefined4 * FUN_143841ee0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 100000;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0xbf800000;
  *(undefined2 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0x3c23d70a;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 143841f30 FUN_143841f30 body=181 status=ok
// SIG undefined FUN_143841f30(void)

void FUN_143841f30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],0x10,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
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



// FUNCTION 143841ff0 FUN_143841ff0 body=208 status=ok
// SIG undefined FUN_143841ff0(void)

undefined8 * FUN_143841ff0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],4,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *param_1 = hkaiAstarCostModifier::vftable;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      sVar3 = 0x48;
      if (*(short *)(param_1 + 2) != -1) {
        sVar3 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1438420c0 FUN_1438420c0 body=144 status=ok
// SIG undefined FUN_1438420c0(void)

undefined8 * FUN_1438420c0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiAstarEdgeFilter::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x60;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143842150 FUN_143842150 body=2122 status=ok
// SIG undefined FUN_143842150(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143842150(longlong param_1,uint *param_2,longlong *param_3,int param_4,int *param_5)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  LPVOID pvVar12;
  uint uVar13;
  int iVar14;
  undefined ***pppuVar15;
  int iVar16;
  undefined ***pppuVar17;
  undefined8 local_res10;
  undefined4 local_16f8 [2];
  undefined8 local_16f0;
  undefined8 local_16e8;
  uint local_16e0;
  uint local_16dc;
  undefined8 local_16d8;
  int local_16d0;
  uint local_16cc;
  undefined8 local_16c8;
  int local_16c0;
  uint local_16bc;
  undefined8 local_16b0;
  undefined8 local_16a8;
  undefined8 local_16a0;
  undefined8 local_1698;
  undefined4 local_1690;
  uint local_168c;
  undefined8 local_1688;
  undefined4 local_1680;
  uint local_167c;
  undefined **local_1668;
  undefined8 local_1660;
  undefined4 local_1658;
  undefined ***local_1650;
  longlong *local_1648;
  undefined8 local_1640;
  undefined4 local_1638;
  uint local_1634;
  undefined4 local_1630;
  char local_1628;
  LPVOID local_1618;
  longlong local_1608;
  undefined4 local_1600;
  float local_15fc;
  uint local_15f8;
  uint uStack_15f4;
  uint uStack_15f0;
  uint uStack_15ec;
  undefined ***local_15e8;
  uint local_15e0;
  undefined1 local_15dc;
  undefined8 local_15d8;
  uint local_15d0;
  undefined1 local_15cc;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  undefined4 local_15b8;
  undefined4 uStack_15b4;
  undefined4 uStack_15b0;
  undefined4 uStack_15ac;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 *local_1598;
  uint local_1590;
  undefined4 *local_1588;
  undefined4 local_1580;
  undefined **local_1578;
  undefined8 local_1570;
  undefined4 local_1568;
  undefined ***local_1560;
  uint local_1558;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined8 local_1538;
  undefined8 uStack_1530;
  uint local_1528;
  uint uStack_1524;
  uint uStack_1520;
  uint uStack_151c;
  longlong local_1518;
  undefined1 *puStack_1510;
  undefined8 local_1508;
  undefined8 local_14e0;
  undefined4 local_14d8;
  undefined8 local_1490;
  undefined4 local_1488;
  uint local_1428;
  uint uStack_1424;
  uint uStack_1420;
  uint uStack_141c;
  undefined8 local_1418;
  undefined8 uStack_1410;
  uint local_1408;
  undefined4 local_1404;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined4 local_13c8;
  undefined8 local_13c0;
  undefined8 local_13b8;
  undefined4 local_1398;
  undefined8 local_1390;
  undefined8 local_1388;
  undefined4 local_1368;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined ***local_1348;
  undefined1 *puStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_12a4;
  uint local_129c;
  undefined8 local_1298;
  int local_1290;
  uint local_128c;
  undefined4 local_1288;
  longlong *local_1268 [2];
  undefined1 local_1258 [60];
  undefined4 local_121c;
  int local_11f0;
  int local_11ec;
  uint local_fa8;
  undefined1 local_d58 [16];
  undefined8 local_d48;
  undefined8 local_d40;
  
  if (*param_2 == 0xffffffff) {
    return;
  }
  local_1618 = TlsGetValue(DAT_146b8198c);
  if (local_1618 != (LPVOID)0x0) {
    FUN_14370d620(local_1618,"Lt_findNearestFeature","Stinit");
  }
  uVar5 = *(ulonglong *)(param_2 + 9);
  iVar14 = (int)uVar5;
  local_res10._4_4_ = (uint)(uVar5 >> 0x20);
  local_1698 = 0;
  if (iVar14 < 1) {
    iVar14 = 0x20000;
  }
  local_1690 = 0;
  local_168c = 0x80000000;
  local_1688 = 0;
  iVar9 = local_res10._4_4_;
  if ((int)local_res10._4_4_ < 1) {
    iVar9 = 0x90200;
  }
  local_1680 = 0;
  local_167c = 0x80000000;
  local_16b0 = 0;
  local_16a0 = 0;
  local_16a8 = 0;
  local_16d8 = 0;
  local_16d0 = 0;
  local_16cc = 0x80000000;
  local_16c8 = 0;
  local_16c0 = 0;
  local_16bc = 0x80000000;
  local_res10 = uVar5;
  if (0 < iVar14) {
    iVar16 = iVar14;
    if (iVar14 < 0) {
      iVar16 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_16d8,iVar16,1);
  }
  local_16d0 = iVar14;
  if ((int)(local_16bc & 0x3fffffff) < iVar9) {
    iVar16 = (local_16bc & 0x3fffffff) * 2;
    iVar14 = iVar9;
    if (iVar9 < iVar16) {
      iVar14 = iVar16;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_16c8,iVar14,1);
  }
  local_16f0 = local_16d8;
  local_16dc = local_16bc & 0x3fffffff;
  local_16e0 = local_16cc & 0x3fffffff;
  local_16e8 = local_16c8;
  local_16c0 = iVar9;
  FUN_14389ce30(local_1268,&local_16f0,&local_16b0);
  local_1548 = *(undefined8 *)(param_2 + 4);
  uStack_1540 = *(undefined8 *)(param_2 + 6);
  local_1538 = *(undefined8 *)(param_2 + 0x18);
  uStack_1530 = *(undefined8 *)(param_2 + 0x1a);
  local_1650 = *(undefined ****)(param_2 + 0xe);
  local_1560 = *(undefined ****)(param_2 + 0x10);
  local_1668 = FaceCallbackCostModifierWrapper::vftable;
  local_1578 = FaceCallbackEdgeFilterWrapper::vftable;
  local_1528 = param_2[0x12];
  local_1558 = (uint)((char)param_2[0x13] != '\0');
  local_1660 = 0;
  local_1658 = 0x1ffff;
  local_1640 = 0;
  local_1638 = 0;
  local_1634 = 0x80000000;
  local_1630 = 0;
  local_1628 = '\0';
  local_1570 = 0;
  local_1568 = 0x1ffff;
  pppuVar17 = local_1650;
  if (param_4 == 1) {
    pppuVar17 = &local_1668;
    pppuVar15 = &local_1578;
    if (0.0 < (float)param_2[0x12]) goto LAB_143842397;
  }
  pppuVar15 = local_1560;
LAB_143842397:
  local_1508 = 0;
  local_1518 = 0;
  puStack_1510 = (undefined1 *)0x0;
  local_13e8 = _DAT_1467f06d0;
  uStack_13e0 = uRam00000001467f06d8;
  local_13d8 = _DAT_1467f06d0;
  uStack_13d0 = uRam00000001467f06d8;
  local_1348 = (undefined ***)0x0;
  puStack_1340 = (undefined1 *)0x0;
  local_14e0 = 0xffffffffffffffff;
  local_14d8 = 4;
  local_1490 = 0xffffffffffffffff;
  local_1488 = 4;
  local_1408 = 0xffffffff;
  local_1404 = 0;
  local_13c8 = 0xffffffff;
  local_13c0 = 0;
  local_13b8 = 0;
  local_1398 = 0xffffffff;
  local_1390 = 0;
  local_1388 = 0;
  local_1368 = 0xffffffff;
  local_1360 = 0;
  local_1358 = 0;
  local_1338 = 0;
  uStack_1330 = 0;
  local_12a4 = 0xffffffffffffffff;
  local_129c = 0;
  local_1298 = 0;
  local_1290 = 0;
  local_128c = 0x80000000;
  local_res10 = local_res10 & 0xffffffff00000000;
  local_1648 = param_3;
  uStack_1524 = local_1528;
  uStack_1520 = local_1528;
  uStack_151c = local_1528;
  uVar10 = FUN_143703a50();
  iVar14 = (uint)local_res10;
  if ((uint)local_res10 == 0) {
    local_1298 = 0;
    uVar13 = 0;
  }
  else {
    local_1298 = FUN_143702d60(uVar10,4,&local_res10);
    uVar13 = (uint)local_res10;
  }
  local_15f8 = param_2[0x18];
  uStack_15f4 = param_2[0x19];
  uStack_15f0 = param_2[0x1a];
  uStack_15ec = param_2[0x1b];
  local_15fc = (float)param_2[0xb] * 0.5;
  local_128c = 0x80000000;
  if (uVar13 != 0) {
    local_128c = uVar13;
  }
  local_1288 = 0;
  local_1290 = iVar14;
  uVar3 = *(undefined4 *)
           (*(longlong *)
             (*(longlong *)((ulonglong)(*param_2 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38)) +
             0x18) + 0x180);
  local_1508 = *(undefined8 *)(param_2 + 0xb);
  puVar1 = param_2 + 0xb;
  uVar13 = param_2[0xc];
  local_15e0 = 0;
  local_15d8 = 0;
  local_1600 = 0xffffffff;
  local_15dc = 0xff;
  local_15d0 = 0;
  local_15cc = 0;
  local_1608 = param_1;
  local_15e8 = pppuVar15;
  local_1518 = param_1;
  local_1428 = local_15f8;
  uStack_1424 = uStack_15f4;
  uStack_1420 = uStack_15f0;
  uStack_141c = uStack_15ec;
  local_1348 = pppuVar17;
  puVar11 = (undefined1 *)
            FUN_14383f5e0(param_1,&local_res10,uVar3,*(undefined8 *)(param_2 + 0x10),uVar13);
  local_15d0 = param_2[0x14];
  local_15dc = *puVar11;
  local_15e0 = param_2[0xc];
  local_1600 = uVar3;
  FUN_143897b00(local_d58,&local_1608);
  fVar2 = (float)param_2[0x12];
  local_d40 = local_d48;
  puStack_1510 = local_d58;
  local_1268[0] = &local_1518;
  puStack_1340 = local_1258;
  local_d48 = 0;
  local_121c = 0;
  local_res10 = CONCAT44(local_res10._4_4_,fVar2);
  local_13e8 = CONCAT44(fVar2,fVar2);
  uStack_13e0 = CONCAT44(fVar2,fVar2);
  uVar4 = 0.0 <= fVar2 | 0x10;
  if ((char)param_2[0x13] == '\0') {
    uVar4 = (uint)(0.0 <= fVar2);
  }
  local_13d8 = 0xbf800000bf800000;
  uStack_13d0 = 0xbf800000bf800000;
  local_129c = uVar4 | local_129c & 0xffffffec;
  if (*(char *)((longlong)param_2 + 0x4d) != '\0') {
    local_129c = local_129c | 0x20;
  }
  uVar10 = *(undefined8 *)(param_2 + 4);
  uVar6 = *(undefined8 *)(param_2 + 6);
  local_1598 = &local_15c8;
  uVar4 = *param_2;
  local_1588 = local_16f8;
  local_15c8 = 0;
  uStack_15c0 = 0;
  local_16f8[0] = 0xffffffff;
  local_1580 = 1;
  local_15a8 = uVar10;
  uStack_15a0 = uVar6;
  local_1590 = uVar4;
  if (param_4 == 1) {
    local_res10 = (ulonglong)local_res10._4_4_ << 0x20;
    local_15b8 = 0;
    uStack_15b4 = 0;
    uStack_15b0 = 0;
    uStack_15ac = 0;
    cVar7 = (**(code **)(*param_3 + 0x10))(param_3,uVar4,puVar1,&local_15b8);
    local_1628 = cVar7 == '\0';
  }
  local_1418 = uVar10;
  uStack_1410 = uVar6;
  local_1408 = uVar4;
  FUN_14389d020(local_1268,&local_1518,puVar1,&local_15a8,uVar13 & 0xffffff00);
  FUN_143897e50(local_d58);
  uVar13 = param_2[8];
  pvVar12 = TlsGetValue(DAT_146b8198c);
  if (pvVar12 != (LPVOID)0x0) {
    FUN_14370d800(pvVar12,"StAStar");
  }
  iVar14 = 0;
  cVar7 = '\0';
  do {
    if ((int)uVar13 <= iVar14) {
      cVar7 = '\x01';
LAB_1438427ce:
      iVar9 = 3;
      break;
    }
    iVar14 = iVar14 + 1;
    iVar9 = FUN_14389d350(local_1268);
    if (iVar9 == 3) {
      cVar7 = (local_11f0 < local_11ec) + '\x02';
    }
    if (param_4 == 0) {
      if ((1 < (local_fa8 >> 0x16) - 0x3fd) &&
         (cVar8 = (**(code **)(*param_3 + 8))(param_3,local_fa8,puVar1), cVar8 == '\0')) {
LAB_1438427a8:
        cVar7 = '\x04';
        goto LAB_1438427ce;
      }
    }
    else if (local_1628 != '\0') goto LAB_1438427a8;
  } while (iVar9 == 0);
  if (param_5 != (int *)0x0) {
    *param_5 = iVar14;
    *(char *)(param_5 + 3) = (char)iVar9;
    *(char *)((longlong)param_5 + 0xd) = cVar7;
  }
  uVar10 = FUN_143703a50();
  local_1290 = 0;
  if (-1 < (int)local_128c) {
    FUN_143702e10(uVar10,local_1298,4,local_128c & 0x3fffffff);
  }
  local_1298 = 0;
  local_1578 = hkaiAstarEdgeFilter::vftable;
  local_128c = 0x80000000;
  FUN_14370c000(&local_1578);
  uVar10 = FUN_143703a50();
  local_1638 = 0;
  if (-1 < (int)local_1634) {
    FUN_143702e10(uVar10,local_1640,4,local_1634 & 0x3fffffff);
  }
  local_1640 = 0;
  local_1668 = hkaiAstarCostModifier::vftable;
  local_1634 = 0x80000000;
  FUN_14370c000(&local_1668);
  local_16c0 = 0;
  if (-1 < (int)local_16bc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_16c8,1,local_16bc & 0x3fffffff);
  }
  local_16c8 = 0;
  local_16bc = 0x80000000;
  local_16d0 = 0;
  if (-1 < (int)local_16cc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_16d8,1,local_16cc & 0x3fffffff);
  }
  local_16d8 = 0;
  local_16cc = 0x80000000;
  local_1680 = 0;
  if (-1 < (int)local_167c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1688,1,local_167c & 0x3fffffff);
  }
  local_1688 = 0;
  local_167c = 0x80000000;
  local_1690 = 0;
  if (-1 < (int)local_168c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1698,1,local_168c & 0x3fffffff);
  }
  local_1698 = 0;
  local_168c = 0x80000000;
  if (local_1618 != (LPVOID)0x0) {
    FUN_14370d7a0(local_1618,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 1438429a0 FUN_1438429a0 body=320 status=ok
// SIG undefined FUN_1438429a0(void)

void FUN_1438429a0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,int param_6)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  *(int *)(param_4 + 0x44) = param_6;
  *(undefined1 *)(param_4 + 0x4c) = 1;
  *(undefined4 *)(param_4 + 0x40) = 0;
  bVar2 = *(byte *)(param_3 + 0x91);
  if ((bVar2 & 1) != 0) {
    iVar6 = *(int *)(param_4 + 0x20) + 2;
    fVar1 = *(float *)(param_3 + 0x5c);
    uVar4 = FUN_143703a50();
    uVar5 = *(uint *)(param_4 + 0x34) & 0x3fffffff;
    if ((int)uVar5 < iVar6) {
      iVar3 = uVar5 * 2;
      if (iVar6 < iVar3) {
        iVar6 = iVar3;
      }
      FUN_14370c310(uVar4,param_4 + 0x28,iVar6,0x30);
    }
    FUN_14389ed10(param_1,param_2,param_4 + 0x18,*(undefined4 *)(param_3 + 0x40),param_3 + 0x20,
                  (longlong)param_6 * 0x10 + *(longlong *)(param_3 + 0x30),bVar2 & 2,bVar2 & 4,
                  param_5,fVar1 * 0.5,param_4 + 0x28,0,0);
  }
  return;
}



// FUNCTION 143842ae0 FUN_143842ae0 body=9 status=ok
// SIG undefined FUN_143842ae0(void)

void FUN_143842ae0(int param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage(param_1 + 0x70);
  return;
}



// FUNCTION 143842af0 FUN_143842af0 body=413 status=ok
// SIG undefined FUN_143842af0(void)

bool FUN_143842af0(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_7f;
  byte local_7e;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_58;
  int local_50;
  undefined1 local_28;
  undefined4 local_1c;
  
  FUN_143856580(&local_c8);
  local_c8 = *(undefined8 *)(param_2 + 0x20);
  uStack_c0 = *(undefined8 *)(param_2 + 0x28);
  local_b8 = *(undefined4 *)(param_2 + 0x70);
  uStack_b4 = *(undefined4 *)(param_2 + 0x74);
  uStack_b0 = *(undefined4 *)(param_2 + 0x78);
  uStack_ac = *(undefined4 *)(param_2 + 0x7c);
  puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)param_3 * 0x10);
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  local_a8 = *(undefined4 *)(param_2 + 0x40);
  local_98 = *(undefined4 *)(param_2 + 0xa4);
  local_68 = *(undefined4 *)(*(longlong *)(param_2 + 0x48) + (longlong)param_3 * 4);
  local_a4 = *(undefined4 *)(param_2 + 0x58);
  local_a0 = *(undefined8 *)(param_2 + 0x5c);
  local_7f = *(undefined1 *)(param_2 + 0x94);
  local_90 = *(undefined8 *)(param_2 + 0x80);
  local_88 = *(undefined8 *)(param_2 + 0x88);
  local_7e = *(byte *)(param_2 + 0x92) >> 1 & 1;
  local_94 = *(undefined4 *)(param_2 + 0xa0);
  FUN_1438565b0(&local_58);
  local_28 = 0;
  iVar2 = FUN_143859440(param_1,&local_c8,&local_58);
  if (param_4 != 0) {
    *(char *)(param_4 + 0x4c) = (iVar2 == 0) + '\x01';
    uVar3 = FUN_143703a50();
    if ((int)(*(uint *)(param_4 + 0x24) & 0x3fffffff) < local_50) {
      FUN_14370c310(uVar3,param_4 + 0x18,local_50,4);
    }
    FUN_142f87c00(*(undefined8 *)(param_4 + 0x18),local_58,local_50);
    *(int *)(param_4 + 0x20) = local_50;
    if (iVar2 == 0) {
      local_1c = *(undefined4 *)(param_4 + 0x48);
    }
    *(undefined4 *)(param_4 + 0x48) = local_1c;
  }
  FUN_143841f30(&local_58);
  return iVar2 != 0;
}



// FUNCTION 143842c90 IfftReal body=25 status=ok
// SIG undefined IfftReal(void)

void AkFft::IfftReal(void)

{
  FUN_143842150();
  return;
}



// FUNCTION 143842cb0 FUN_143842cb0 body=3139 status=ok
// SIG undefined FUN_143842cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143842cb0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  LPVOID pvVar18;
  LPVOID pvVar19;
  undefined8 uVar20;
  int *piVar21;
  float *pfVar22;
  ulonglong uVar23;
  undefined1 uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  bool bVar27;
  float fVar28;
  undefined8 local_res20;
  undefined8 in_stack_ffffffffffffe920;
  float local_1668;
  float fStack_1664;
  float fStack_1660;
  float fStack_165c;
  undefined8 local_1658;
  undefined8 local_1650;
  undefined8 local_1648;
  undefined8 local_1640;
  undefined4 local_1638;
  uint local_1634;
  undefined8 local_1630;
  undefined4 local_1628;
  uint local_1624;
  undefined4 local_1618;
  undefined4 uStack_1614;
  undefined4 uStack_1610;
  undefined4 uStack_160c;
  undefined1 local_1608 [24];
  undefined8 local_15f0;
  undefined4 local_15e8;
  uint local_15e4;
  undefined8 local_15e0;
  undefined4 local_15d8;
  uint local_15d4;
  undefined1 local_15c8 [8];
  LPVOID local_15c0;
  longlong local_15b8;
  undefined4 local_15b0;
  float local_15ac;
  undefined4 local_15a8;
  undefined4 uStack_15a4;
  undefined4 uStack_15a0;
  undefined4 uStack_159c;
  undefined8 local_1598;
  undefined4 local_1590;
  undefined1 local_158c;
  undefined8 local_1588;
  undefined4 local_1580;
  undefined1 local_157c;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined4 local_1560;
  undefined8 local_1558;
  undefined4 local_1550;
  longlong local_1548;
  undefined1 *puStack_1540;
  undefined8 local_1538;
  undefined8 local_1510;
  undefined4 local_1508;
  undefined8 local_14c0;
  undefined4 local_14b8;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined4 local_1438;
  undefined4 local_1434;
  undefined8 local_1430;
  undefined8 local_1428;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined4 local_13f8;
  undefined8 local_13f0;
  undefined8 local_13e8;
  undefined4 local_13c8;
  undefined8 local_13c0;
  undefined8 local_13b8;
  undefined4 local_1398;
  undefined8 local_1390;
  undefined8 local_1388;
  undefined8 local_1378;
  longlong *plStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_12d4;
  uint local_12cc;
  ulonglong local_12c8;
  int local_12c0;
  uint local_12bc;
  undefined4 local_12b8;
  longlong *local_1298 [2];
  longlong local_1288 [6];
  int local_1258;
  float local_1250;
  undefined4 local_124c;
  int local_1248;
  undefined4 *local_1240;
  undefined4 *local_1238;
  int local_1220;
  int local_121c;
  int local_fd8;
  undefined4 local_fd4;
  undefined1 local_d88 [16];
  undefined8 local_d78;
  undefined8 local_d70;
  undefined1 local_d40;
  longlong local_d38;
  
  pvVar18 = TlsGetValue(DAT_146b8198c);
  local_15c0 = pvVar18;
  if (pvVar18 != (LPVOID)0x0) {
    FUN_14370d620(pvVar18,"LtFindMeshPath","Stinit");
  }
  FUN_143842ae0(param_2);
  cVar14 = FUN_14389ef50(param_1,param_2,local_15c8);
  if (cVar14 == '\0') {
    *(undefined4 *)(param_3 + 0x44) = 0xffffffff;
    *(undefined4 *)(param_3 + 0x40) = 0;
    *(undefined1 *)(param_3 + 0x4c) = 5;
    goto LAB_1438438b4;
  }
  local_1618 = *(undefined4 *)(param_2 + 0x70);
  uStack_1614 = *(undefined4 *)(param_2 + 0x74);
  uStack_1610 = *(undefined4 *)(param_2 + 0x78);
  uStack_160c = *(undefined4 *)(param_2 + 0x7c);
  uVar23 = 0;
  uVar25 = *(undefined4 *)(param_2 + 0x38);
  local_15ac = *(float *)(param_2 + 0x5c) * 0.5;
  local_res20 = CONCAT44(local_res20._4_4_,uVar25);
  local_15b0 = *(undefined4 *)
                (*(longlong *)
                  (*(longlong *)
                    ((ulonglong)(*(uint *)(param_2 + 0x40) >> 0x16) * 0x100 +
                    *(longlong *)(param_1 + 0x38)) + 0x18) + 0x180);
  local_1598 = *(undefined8 *)(param_2 + 0x88);
  local_1580 = *(undefined4 *)(param_2 + 0x9c);
  local_1590 = *(undefined4 *)(param_2 + 0x60);
  local_158c = 0xff;
  local_1588 = 0;
  local_157c = 0;
  local_15b8 = param_1;
  local_15a8 = local_1618;
  uStack_15a4 = uStack_1614;
  uStack_15a0 = uStack_1610;
  uStack_159c = uStack_160c;
  FUN_143897b00(local_d88,&local_15b8);
  local_d70 = local_d78;
  *(undefined1 *)(param_3 + 0x60) = local_d40;
  local_d78 = 0;
  if (*(char *)(param_2 + 0x97) != '\0') {
    local_d38 = param_3 + 0x50;
  }
  fVar28 = 3.40282e+38;
  uVar15 = 0xffffffff;
  bVar13 = false;
  bVar12 = false;
  if ((*(byte *)(param_2 + 0x92) & 5) == 0) {
LAB_143842f28:
    pvVar18 = TlsGetValue(DAT_146b8198c);
    if (pvVar18 != (LPVOID)0x0) {
      FUN_14370d800(pvVar18,"StinitSearch");
    }
    local_1640 = 0;
    local_1638 = 0;
    local_1634 = 0x80000000;
    local_1630 = 0;
    local_1628 = 0;
    local_1624 = 0x80000000;
    if (*(char *)(param_2 + 0x93) == '\0') {
      local_1658 = 0;
      local_1648 = 0;
      local_1650 = 0;
    }
    else {
      iVar17 = (int)*(undefined8 *)(param_2 + 0xb4);
      if (iVar17 < 1) {
        iVar17 = 0x8000;
      }
      local_res20._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_2 + 0xb4) >> 0x20);
      if ((int)local_res20._4_4_ < 1) {
        local_res20._4_4_ = 0x24200;
      }
      local_res20 = CONCAT44(local_res20._4_4_,iVar17);
      FUN_143843c30(&local_1658,param_2 + 0xd0,&local_res20);
    }
    local_res20._0_4_ = (float)*(undefined8 *)(param_2 + 0xac);
    local_15f0 = 0;
    local_15e8 = 0;
    if ((int)(float)local_res20 < 1) {
      local_res20._0_4_ = 1.83671e-40;
    }
    local_15e4 = 0x80000000;
    local_res20._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_2 + 0xac) >> 0x20);
    local_15e0 = 0;
    if ((int)local_res20._4_4_ < 1) {
      local_res20._4_4_ = 0x90200;
    }
    local_15d8 = 0;
    local_15d4 = 0x80000000;
    FUN_143843c30(local_1608,param_2 + 0xc0,&local_res20);
    FUN_14389ce30(local_1298,local_1608,&local_1658);
    local_1538 = 0;
    local_1548 = 0;
    puStack_1540 = (undefined1 *)0x0;
    local_1418 = _DAT_1467f06d0;
    uStack_1410 = uRam00000001467f06d8;
    local_1408 = _DAT_1467f06d0;
    uStack_1400 = uRam00000001467f06d8;
    local_1378 = 0;
    plStack_1370 = (longlong *)0x0;
    local_1510 = 0xffffffffffffffff;
    local_1508 = 4;
    local_14c0 = 0xffffffffffffffff;
    local_14b8 = 4;
    local_1438 = 0xffffffff;
    local_1434 = 0;
    local_13f8 = 0xffffffff;
    local_13f0 = 0;
    local_13e8 = 0;
    local_13c8 = 0xffffffff;
    local_13c0 = 0;
    local_13b8 = 0;
    local_1398 = 0xffffffff;
    local_1390 = 0;
    local_1388 = 0;
    local_1368 = 0;
    uStack_1360 = 0;
    local_12d4 = 0xffffffffffffffff;
    local_12cc = 0;
    local_12c8 = 0;
    local_12c0 = 0;
    local_12bc = 0x80000000;
    local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
    uVar20 = FUN_143703a50();
    iVar17 = (int)(float)local_res20;
    if ((float)local_res20 == 0.0) {
      uVar16 = 0;
      local_12c8 = uVar23;
    }
    else {
      local_12c8 = FUN_143702d60(uVar20,4,&local_res20);
      uVar16 = (uint)(float)local_res20;
    }
    local_1458 = CONCAT44(uStack_1614,local_1618);
    uStack_1450 = CONCAT44(uStack_160c,uStack_1610);
    local_12bc = 0x80000000;
    if (uVar16 != 0) {
      local_12bc = uVar16;
    }
    local_12c0 = iVar17;
    local_1378 = *(undefined8 *)(param_2 + 0x80);
    local_1538 = *(undefined8 *)(param_2 + 0x5c);
    puStack_1540 = local_d88;
    local_12b8 = 0;
    if (*(char *)(param_2 + 0x95) != '\0') {
      local_12cc = local_12cc | 0x20;
    }
    fVar2 = *(float *)(param_2 + 0xa4);
    fVar3 = *(float *)(param_2 + 0xa8);
    local_1434 = *(undefined4 *)(param_2 + 0x38);
    local_1578 = *(undefined8 *)(param_2 + 0x20);
    uStack_1570 = *(undefined8 *)(param_2 + 0x28);
    local_1568 = *(undefined8 *)(param_2 + 0x30);
    local_1558 = *(undefined8 *)(param_2 + 0x48);
    local_1560 = *(undefined4 *)(param_2 + 0x40);
    uVar16 = (uint)(0.0 <= fVar2);
    local_1418 = CONCAT44(fVar2,fVar2);
    uStack_1410 = CONCAT44(fVar2,fVar2);
    local_1408 = CONCAT44(fVar3,fVar3);
    uStack_1400 = CONCAT44(fVar3,fVar3);
    if (0.0 <= fVar3) {
      uVar16 = uVar16 | 2;
    }
    local_124c = *(undefined4 *)(param_2 + 0x98);
    local_res20._0_4_ = *(float *)(param_2 + 0xa0);
    uVar8 = uVar16 | 0x10;
    if (*(char *)(param_2 + 0x94) == '\0') {
      uVar8 = uVar16;
    }
    local_1298[0] = &local_1548;
    local_12cc = uVar8 | local_12cc & 0xffffffec;
    plStack_1370 = local_1288;
    local_1250 = (float)local_res20;
    if (fVar28 <= (float)local_res20) {
      local_1250 = fVar28;
    }
    local_1550 = uVar25;
    local_1548 = param_1;
    local_1448 = local_1578;
    uStack_1440 = uStack_1570;
    local_1438 = local_1560;
    local_1430 = local_1568;
    local_1428 = local_1558;
    FUN_14389d020(local_1298,&local_1548,param_2 + 0x5c,&local_1578,
                  *(char *)(param_2 + 0x93) != '\0');
    local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(param_2 + 0x58));
    pvVar18 = TlsGetValue(DAT_146b8198c);
    if (pvVar18 != (LPVOID)0x0) {
      FUN_14370d800(pvVar18,"StAStar");
    }
    thunk_FUN_143719c70(0x81244054);
    uVar26 = uVar23;
    do {
      uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffe920 >> 0x20);
      uVar24 = (undefined1)uVar23;
      uVar16 = (uint)uVar26;
      if ((int)(float)local_res20 <= (int)uVar16) {
        if (local_1258 == -1) {
          iVar17 = 2;
        }
        else {
          iVar17 = 3;
          uVar24 = 1;
        }
        break;
      }
      uVar16 = uVar16 + 1;
      uVar26 = (ulonglong)uVar16;
      iVar17 = FUN_14389d350(local_1298);
      if (iVar17 == 3) {
        uVar23 = (ulonglong)((local_1220 < local_121c) + 2);
      }
      uVar24 = (undefined1)uVar23;
      thunk_FUN_143719c70(0xaece36eb);
      uVar25 = (undefined4)((ulonglong)in_stack_ffffffffffffe920 >> 0x20);
    } while (iVar17 == 0);
    pvVar18 = TlsGetValue(DAT_146b8198c);
    FUN_143897e80(local_d88,pvVar18);
    if ((bVar12) && (iVar17 != 1)) {
      FUN_1438429a0(param_1,local_d88,param_2,param_3,&local_1618,CONCAT44(uVar25,uVar15));
      uVar20 = 0x33f1878d;
    }
    else {
      if (iVar17 == 0) {
        iVar17 = (local_1258 != -1) + 2;
      }
      *(uint *)(param_3 + 0x40) = uVar16;
      *(char *)(param_3 + 0x4c) = (char)iVar17;
      *(undefined1 *)(param_3 + 0x4d) = uVar24;
      *(undefined4 *)(param_3 + 0x44) = 0xffffffff;
      if (((iVar17 - 1U & 0xfffffffd) == 0) ||
         ((iVar17 == 2 && (*(char *)(param_2 + 0x96) != '\0')))) {
        *(undefined4 *)(param_3 + 0x44) = local_fd4;
        iVar5 = local_1258;
        if (iVar17 == 1) {
          iVar5 = local_fd8;
        }
        local_1240 = (undefined4 *)FUN_143843a50(local_1288,iVar5);
        local_1248 = (int)(short)((longlong)local_1240 - local_1288[0] >> 4);
        *(undefined4 *)(param_3 + 0x48) = *local_1240;
        local_1238 = local_1240;
        pvVar18 = TlsGetValue(DAT_146b8198c);
        if (pvVar18 != (LPVOID)0x0) {
          FUN_14370d800(pvVar18,"Stoutput");
        }
        plVar1 = (longlong *)(param_3 + 0x18);
        FUN_143841b30(local_1288,iVar5,1,plVar1,0x7fffffff);
        if (iVar17 != 1) {
          if (*(int *)(param_3 + 0x20) == 0) {
            local_1668 = *(float *)(param_2 + 0x20);
            fStack_1664 = *(float *)(param_2 + 0x24);
            fStack_1660 = *(float *)(param_2 + 0x28);
            fStack_165c = *(float *)(param_2 + 0x2c);
          }
          else {
            uVar16 = *(uint *)(*plVar1 + (longlong)(*(int *)(param_3 + 0x20) + -1) * 4);
            lVar6 = *(longlong *)
                     ((ulonglong)(uVar16 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
            lVar7 = *(longlong *)(lVar6 + 0x18);
            piVar21 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar7 + 0x28),
                                           *(undefined4 *)(lVar7 + 0x30),lVar7 + 0xc0,lVar7 + 0xe0,
                                           lVar7 + 0x70,CONCAT44(uVar25,uVar16) & 0xffffffff003fffff
                                          );
            iVar17 = *(int *)(lVar7 + 0x40);
            iVar5 = *piVar21;
            if (iVar5 < iVar17) {
              pfVar22 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar7 + 0x38));
            }
            else {
              pfVar22 = (float *)((longlong)(iVar5 - iVar17) * 0x10 + *(longlong *)(lVar7 + 0xf0));
            }
            iVar5 = piVar21[1];
            fVar28 = *pfVar22;
            fVar2 = pfVar22[1];
            fVar3 = pfVar22[2];
            if (iVar5 < iVar17) {
              pfVar22 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar7 + 0x38));
            }
            else {
              pfVar22 = (float *)((longlong)(iVar5 - iVar17) * 0x10 + *(longlong *)(lVar7 + 0xf0));
            }
            fVar9 = *pfVar22;
            fVar10 = pfVar22[1];
            fVar11 = pfVar22[2];
            local_1668 = fVar2 * *(float *)(lVar6 + 0x50) + fVar28 * *(float *)(lVar6 + 0x40) +
                         fVar3 * *(float *)(lVar6 + 0x60) + *(float *)(lVar6 + 0x70);
            fStack_1664 = fVar2 * *(float *)(lVar6 + 0x54) + fVar28 * *(float *)(lVar6 + 0x44) +
                          fVar3 * *(float *)(lVar6 + 100) + *(float *)(lVar6 + 0x74);
            fStack_1660 = fVar2 * *(float *)(lVar6 + 0x58) + fVar28 * *(float *)(lVar6 + 0x48) +
                          fVar3 * *(float *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x78);
            fStack_165c = fVar2 * *(float *)(lVar6 + 0x5c) + fVar28 * *(float *)(lVar6 + 0x4c) +
                          fVar3 * *(float *)(lVar6 + 0x6c) + *(float *)(lVar6 + 0x7c);
            local_1668 = ((fVar10 * *(float *)(lVar6 + 0x50) + fVar9 * *(float *)(lVar6 + 0x40) +
                           fVar11 * *(float *)(lVar6 + 0x60) + *(float *)(lVar6 + 0x70)) -
                         local_1668) * _DAT_1467f07e0 + local_1668;
            fStack_1664 = ((fVar10 * *(float *)(lVar6 + 0x54) + fVar9 * *(float *)(lVar6 + 0x44) +
                            fVar11 * *(float *)(lVar6 + 100) + *(float *)(lVar6 + 0x74)) -
                          fStack_1664) * fRam00000001467f07e4 + fStack_1664;
            fStack_1660 = ((fVar10 * *(float *)(lVar6 + 0x58) + fVar9 * *(float *)(lVar6 + 0x48) +
                            fVar11 * *(float *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x78)) -
                          fStack_1660) * fRam00000001467f07e8 + fStack_1660;
            fStack_165c = ((fVar10 * *(float *)(lVar6 + 0x5c) + fVar9 * *(float *)(lVar6 + 0x4c) +
                            fVar11 * *(float *)(lVar6 + 0x6c) + *(float *)(lVar6 + 0x7c)) -
                          fStack_165c) * fRam00000001467f07ec + fStack_165c;
          }
        }
        else {
          pfVar22 = (float *)(*(longlong *)(param_2 + 0x30) +
                             (longlong)*(int *)(param_3 + 0x44) * 0x10);
          local_1668 = *pfVar22;
          fStack_1664 = pfVar22[1];
          fStack_1660 = pfVar22[2];
          fStack_165c = pfVar22[3];
        }
        if ((*(byte *)(param_2 + 0x91) & 1) != 0) {
          thunk_FUN_143719c70(0xf6f5bebc);
          pvVar18 = TlsGetValue(DAT_146b8198c);
          if (pvVar18 != (LPVOID)0x0) {
            FUN_14370d5c0(pvVar18,"Ttsmooth");
          }
          bVar4 = *(byte *)(param_2 + 0x91);
          iVar17 = *(int *)(param_3 + 0x20);
          fVar28 = *(float *)(param_2 + 0x5c) * 0.5;
          local_res20 = CONCAT71(local_res20._1_7_,
                                 fVar28 < *(float *)(param_2 + 0x9c) ||
                                 fVar28 == *(float *)(param_2 + 0x9c));
          uVar20 = FUN_143703a50();
          uVar16 = *(uint *)(param_3 + 0x34) & 0x3fffffff;
          if ((int)uVar16 < iVar17) {
            iVar5 = uVar16 * 2;
            if (iVar17 < iVar5) {
              iVar17 = iVar5;
            }
            FUN_14370c310(uVar20,param_3 + 0x28,iVar17,0x30);
          }
          FUN_14389e520(param_1,local_d88,plVar1,*(undefined4 *)(param_2 + 0x40),param_2 + 0x20,
                        &local_1668,bVar4 & 2,bVar4 & 4,&local_1618,fVar28,(undefined1)local_res20,
                        param_3 + 0x28,0,0,0);
          if (pvVar18 != (LPVOID)0x0) {
            FUN_14370d750(pvVar18,&DAT_145b8eda0);
          }
        }
      }
      uVar20 = 0x6d6b15cc;
    }
    thunk_FUN_143719c70(uVar20);
    uVar20 = FUN_143703a50();
    local_12c0 = 0;
    if (-1 < (int)local_12bc) {
      FUN_143702e10(uVar20,local_12c8,4,local_12bc & 0x3fffffff);
    }
    local_12c8 = 0;
    local_12bc = 0x80000000;
    local_15d8 = 0;
    if (-1 < (int)local_15d4) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_15e0,1,local_15d4 & 0x3fffffff);
    }
    local_15e0 = 0;
    local_15d4 = 0x80000000;
    local_15e8 = 0;
    if (-1 < (int)local_15e4) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_15f0,1,local_15e4 & 0x3fffffff);
    }
    local_15f0 = 0;
    local_15e4 = 0x80000000;
    local_1628 = 0;
    if (-1 < (int)local_1624) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_1630,1,local_1624 & 0x3fffffff);
    }
    local_1630 = 0;
    local_1624 = 0x80000000;
    local_1638 = 0;
    if (-1 < (int)local_1634) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_1640,1,local_1634 & 0x3fffffff);
    }
    local_1640 = 0;
    local_1634 = 0x80000000;
    pvVar18 = local_15c0;
  }
  else {
    pvVar19 = TlsGetValue(DAT_146b8198c);
    if (pvVar19 != (LPVOID)0x0) {
      FUN_14370d800(pvVar19,"StcheckLineOfSight");
    }
    local_1668 = *(float *)(param_2 + 0x20);
    fStack_1664 = *(float *)(param_2 + 0x24);
    fStack_1660 = *(float *)(param_2 + 0x28);
    fStack_165c = *(float *)(param_2 + 0x2c);
    uVar15 = FUN_143841a90(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38),
                           &local_1668);
    cVar14 = FUN_143842af0(param_1,param_2,uVar15,param_3);
    bVar27 = cVar14 == '\0';
    if (!bVar27) {
      fVar28 = *(float *)(param_3 + 0x48);
    }
    bVar12 = !bVar27;
    if (((*(byte *)(param_2 + 0x92) & 4) != 0) ||
       (((*(byte *)(param_2 + 0x92) & 1) != 0 && (*(longlong *)(param_2 + 0x80) == 0)))) {
      bVar13 = true;
    }
    if ((bVar27) || (!bVar13)) {
      uVar25 = (float)local_res20;
      goto LAB_143842f28;
    }
    FUN_1438429a0(param_1,local_d88,param_2,param_3,&local_1618,uVar15);
  }
  FUN_143897e50(local_d88);
LAB_1438438b4:
  if (pvVar18 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar18,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 143843900 FUN_143843900 body=297 status=ok
// SIG undefined FUN_143843900(void)

undefined8 * FUN_143843900(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x38) + 0xc);
    if (*(int *)(param_1 + 0x30) + -1 < *(int *)(param_1 + 0x38) * 2) {
      FUN_143843fc0(param_1 + 0x28,local_res8,*(int *)(param_1 + 0x30) * 2);
    }
    uVar11 = 0;
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar9 = *(int *)(param_1 + 0x30) - 1;
    uVar8 = iVar1 * -0x61c8864f;
    iVar10 = 1;
    uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000)
            & uVar9;
    lVar7 = (longlong)(int)uVar8;
    iVar2 = *(int *)(lVar3 + lVar7 * 4);
    while (iVar2 != -1) {
      if (*(int *)(lVar3 + lVar7 * 4) == iVar1) {
        iVar10 = 0;
        break;
      }
      uVar8 = uVar8 + 1 & uVar9;
      lVar7 = (longlong)(int)uVar8;
      iVar2 = *(int *)(lVar3 + lVar7 * 4);
    }
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar10;
    *(int *)(lVar3 + (longlong)(int)uVar8 * 4) = iVar1;
    if (iVar10 != 0) {
      if ((*(char *)(param_1 + 0x40) != '\0') ||
         (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
                            (*(longlong **)(param_1 + 0x20),iVar1,*(undefined8 *)(param_3 + 8),
                             param_3 + 0x20), cVar6 == '\0')) {
        uVar11 = 1;
      }
      *(undefined1 *)(param_1 + 0x40) = uVar11;
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3);
    return param_2;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  *param_2 = *(undefined8 *)(param_3 + 0x30);
  param_2[1] = uVar5;
  return param_2;
}



// FUNCTION 143843a30 FUN_143843a30 body=23 status=ok
// SIG undefined FUN_143843a30(void)

undefined8 FUN_143843a30(undefined8 param_1,undefined8 param_2)

{
  FUN_1438320f0();
  return param_2;
}



// FUNCTION 143843a50 FUN_143843a50 body=230 status=ok
// SIG undefined FUN_143843a50(void)

undefined4 * FUN_143843a50(longlong *param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  short sVar3;
  undefined4 *puVar4;
  
  uVar1 = (ushort)(byte)((uint)(param_2 * -0x61c8864f) >> 0x18);
  sVar3 = *(short *)(param_1[2] + (ulonglong)uVar1 * 2);
  if (-1 < sVar3) {
    do {
      lVar2 = (longlong)sVar3 * 0x10;
      if (*(int *)(*param_1 + 8 + lVar2) == param_2) {
        return (undefined4 *)(lVar2 + *param_1);
      }
      sVar3 = *(short *)(param_1[1] + (longlong)sVar3 * 2);
    } while (-1 < sVar3);
  }
  sVar3 = *(short *)((longlong)param_1 + 0x1c);
  puVar4 = (undefined4 *)((longlong)*(int *)((longlong)param_1 + 0x1c) * 0x10 + *param_1);
  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
  *(undefined2 *)(puVar4 + 3) = 0xffff;
  *(undefined2 *)((longlong)puVar4 + 0xe) = 0;
  puVar4[2] = 0xffffffff;
  *puVar4 = 0x7f7fffee;
  puVar4[1] = 0x7f7fffee;
  puVar4[2] = param_2;
  *(undefined2 *)(param_1[1] + (longlong)sVar3 * 2) =
       *(undefined2 *)(param_1[2] + (longlong)(short)uVar1 * 2);
  *(short *)(param_1[2] + (longlong)(short)uVar1 * 2) = sVar3;
  return puVar4;
}



// FUNCTION 143843b40 FUN_143843b40 body=90 status=ok
// SIG undefined FUN_143843b40(void)

longlong * FUN_143843b40(longlong *param_1,int param_2)

{
  longlong lVar1;
  short sVar2;
  
  sVar2 = *(short *)(param_1[2] + (ulonglong)((uint)(param_2 * -0x61c8864f) >> 0x18) * 2);
  if (-1 < sVar2) {
    do {
      lVar1 = (longlong)sVar2 * 0x10;
      if (*(int *)(*param_1 + 8 + lVar1) == param_2) {
        return (longlong *)(lVar1 + *param_1);
      }
      sVar2 = *(short *)(param_1[1] + (longlong)sVar2 * 2);
    } while (-1 < sVar2);
  }
  return param_1 + 4;
}



// FUNCTION 143843ba0 FUN_143843ba0 body=132 status=ok
// SIG undefined FUN_143843ba0(void)

void FUN_143843ba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_res8 = *param_1;
  iVar3 = 0x90200;
  if (param_4 != 0) {
    iVar3 = 0x24200;
  }
  if ((int)local_res8 < 1) {
    uVar2 = 0x20000;
    if (param_4 != 0) {
      uVar2 = 0x8000;
    }
    local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
    local_res8 = CONCAT44(local_res8._4_4_,uVar2);
  }
  iVar1 = local_res8._4_4_;
  if (local_res8._4_4_ < 1) {
    iVar1 = iVar3;
  }
  local_res8 = CONCAT44(iVar1,(int)local_res8);
  local_18 = 0;
  uStack_10 = 0;
  FUN_143843c30(param_2,&local_18,&local_res8);
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  return;
}



// FUNCTION 143843c30 FUN_143843c30 body=271 status=ok
// SIG undefined FUN_143843c30(void)

void FUN_143843c30(undefined8 *param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_3;
  if (*param_2 == 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x24) & 0x3fffffff;
    if ((int)uVar3 < (int)uVar1) {
      uVar3 = uVar3 * 2;
      uVar2 = uVar1;
      if ((int)uVar1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 3,uVar2,1);
    }
    *(uint *)(param_1 + 4) = uVar1;
  }
  else {
    param_1[3] = *param_2;
    *(uint *)((longlong)param_1 + 0x24) = uVar1 | 0x80000000;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  uVar1 = param_3[1];
  if (param_2[1] == 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0x34) & 0x3fffffff;
    if ((int)uVar3 < (int)uVar1) {
      uVar3 = uVar3 * 2;
      uVar2 = uVar1;
      if ((int)uVar1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 5,uVar2,1);
    }
    *(uint *)(param_1 + 6) = uVar1;
  }
  else {
    param_1[5] = param_2[1];
    *(uint *)((longlong)param_1 + 0x34) = uVar1 | 0x80000000;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  *param_1 = param_1[3];
  *(uint *)(param_1 + 2) = *(uint *)((longlong)param_1 + 0x24) & 0x3fffffff;
  param_1[1] = param_1[5];
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x34) & 0x3fffffff;
  return;
}



// FUNCTION 143843d40 FUN_143843d40 body=638 status=ok
// SIG undefined FUN_143843d40(void)

ulonglong FUN_143843d40(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  byte bVar8;
  float *pfVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  bVar8 = 1;
  if ((*(longlong **)(param_1 + 0x18) == (longlong *)0x0) ||
     (bVar8 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))(), bVar8 != 0)) {
    piVar3 = *(int **)(param_2[2] + 0x38);
    if (piVar3 != (int *)0x0) {
      fVar7 = *(float *)(param_1 + 0x50);
      if (0.0 < fVar7) {
        iVar1 = *piVar3;
        fVar32 = *(float *)(param_1 + 0x30);
        fVar33 = *(float *)(param_1 + 0x34);
        fVar34 = *(float *)(param_1 + 0x38);
        lVar4 = *(longlong *)
                 ((ulonglong)(*(uint *)(param_2[2] + 0x30) >> 0x16) * 0x100 +
                 *(longlong *)(*param_2 + 0x38));
        lVar5 = *(longlong *)(lVar4 + 0x18);
        iVar2 = *(int *)(lVar5 + 0x40);
        if (iVar1 < iVar2) {
          pfVar9 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar5 + 0x38));
        }
        else {
          pfVar9 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
        }
        fVar29 = *pfVar9;
        fVar30 = pfVar9[1];
        fVar31 = pfVar9[2];
        iVar1 = piVar3[1];
        if (iVar1 < iVar2) {
          pfVar9 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar5 + 0x38));
        }
        else {
          pfVar9 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
        }
        fVar16 = *pfVar9;
        fVar21 = pfVar9[1];
        fVar24 = pfVar9[2];
        fVar26 = fVar30 * *(float *)(lVar4 + 0x50) + fVar29 * *(float *)(lVar4 + 0x40) +
                 fVar31 * *(float *)(lVar4 + 0x60) + *(float *)(lVar4 + 0x70);
        fVar27 = fVar30 * *(float *)(lVar4 + 0x54) + fVar29 * *(float *)(lVar4 + 0x44) +
                 fVar31 * *(float *)(lVar4 + 100) + *(float *)(lVar4 + 0x74);
        fVar28 = fVar30 * *(float *)(lVar4 + 0x58) + fVar29 * *(float *)(lVar4 + 0x48) +
                 fVar31 * *(float *)(lVar4 + 0x68) + *(float *)(lVar4 + 0x78);
        fVar29 = fVar21 * *(float *)(lVar4 + 0x50) + fVar16 * *(float *)(lVar4 + 0x40) +
                 fVar24 * *(float *)(lVar4 + 0x60) + *(float *)(lVar4 + 0x70);
        fVar30 = fVar21 * *(float *)(lVar4 + 0x54) + fVar16 * *(float *)(lVar4 + 0x44) +
                 fVar24 * *(float *)(lVar4 + 100) + *(float *)(lVar4 + 0x74);
        fVar31 = fVar21 * *(float *)(lVar4 + 0x58) + fVar16 * *(float *)(lVar4 + 0x48) +
                 fVar24 * *(float *)(lVar4 + 0x68) + *(float *)(lVar4 + 0x78);
        if (*(int *)(param_1 + 0x20) != 0) {
          fVar16 = *(float *)(param_1 + 0x40);
          fVar21 = *(float *)(param_1 + 0x44);
          fVar24 = *(float *)(param_1 + 0x48);
          fVar14 = fVar32 * fVar16;
          fVar19 = fVar33 * fVar21;
          fVar22 = fVar34 * fVar24;
          fVar15 = fVar26 * fVar16;
          fVar20 = fVar27 * fVar21;
          fVar23 = fVar28 * fVar24;
          fVar32 = fVar32 - (fVar19 + fVar14 + fVar22) * fVar16;
          fVar33 = fVar33 - (fVar19 + fVar14 + fVar22) * fVar21;
          fVar34 = fVar34 - (fVar19 + fVar14 + fVar22) * fVar24;
          fVar14 = fVar29 * fVar16;
          fVar19 = fVar30 * fVar21;
          fVar22 = fVar31 * fVar24;
          fVar26 = fVar26 - (fVar20 + fVar15 + fVar23) * fVar16;
          fVar27 = fVar27 - (fVar20 + fVar15 + fVar23) * fVar21;
          fVar28 = fVar28 - (fVar20 + fVar15 + fVar23) * fVar24;
          fVar29 = fVar29 - (fVar19 + fVar14 + fVar22) * fVar16;
          fVar30 = fVar30 - (fVar19 + fVar14 + fVar22) * fVar21;
          fVar31 = fVar31 - (fVar19 + fVar14 + fVar22) * fVar24;
        }
        fVar29 = fVar26 - fVar29;
        fVar30 = fVar27 - fVar30;
        fVar31 = fVar28 - fVar31;
        fVar16 = fVar29 * fVar29;
        fVar21 = fVar30 * fVar30;
        fVar24 = fVar31 * fVar31;
        fVar14 = fVar21 + fVar16 + fVar24;
        fVar15 = fVar21 + fVar16 + fVar24;
        fVar19 = fVar21 + fVar16 + fVar24;
        fVar24 = fVar21 + fVar16 + fVar24;
        fVar16 = (fVar26 - fVar32) * fVar29;
        fVar21 = (fVar27 - fVar33) * fVar30;
        auVar17._8_4_ = (fVar28 - fVar34) * fVar31;
        auVar17._4_4_ = auVar17._8_4_;
        auVar17._0_4_ = auVar17._8_4_;
        auVar17._12_4_ = auVar17._8_4_;
        auVar18._4_4_ = fVar15;
        auVar18._0_4_ = fVar14;
        auVar18._8_4_ = fVar19;
        auVar18._12_4_ = fVar24;
        auVar18 = rcpps(auVar17,auVar18);
        fVar14 = (2.0 - auVar18._0_4_ * fVar14) * auVar18._0_4_ * (fVar21 + fVar16 + auVar17._8_4_);
        fVar15 = (2.0 - auVar18._4_4_ * fVar15) * auVar18._4_4_ * (fVar21 + fVar16 + auVar17._8_4_);
        fVar19 = (2.0 - auVar18._8_4_ * fVar19) * auVar18._8_4_ * (fVar21 + fVar16 + auVar17._8_4_);
        fVar16 = (2.0 - auVar18._12_4_ * fVar24) * auVar18._12_4_ *
                 (fVar21 + fVar16 + auVar17._8_4_);
        uVar10 = -(uint)(fVar14 < DAT_1467f06f0);
        uVar11 = -(uint)(fVar15 < fRam00000001467f06f4);
        uVar12 = -(uint)(fVar19 < fRam00000001467f06f8);
        uVar13 = -(uint)(fVar16 < fRam00000001467f06fc);
        auVar25._0_4_ = ~uVar10 & (uint)DAT_1467f06f0;
        auVar25._4_4_ = ~uVar11 & (uint)fRam00000001467f06f4;
        auVar25._8_4_ = ~uVar12 & (uint)fRam00000001467f06f8;
        auVar25._12_4_ = ~uVar13 & (uint)fRam00000001467f06fc;
        auVar6._4_4_ = (uint)fVar15 & uVar11;
        auVar6._0_4_ = (uint)fVar14 & uVar10;
        auVar6._8_4_ = (uint)fVar19 & uVar12;
        auVar6._12_4_ = (uint)fVar16 & uVar13;
        auVar18 = maxps(ZEXT816(0),auVar25 | auVar6);
        fVar32 = (fVar26 - fVar32) - auVar18._0_4_ * fVar29;
        fVar33 = (fVar27 - fVar33) - auVar18._4_4_ * fVar30;
        fVar34 = (fVar28 - fVar34) - auVar18._8_4_ * fVar31;
        if (fVar7 * fVar7 < fVar33 * fVar33 + fVar32 * fVar32 + fVar34 * fVar34) {
          return (ulonglong)pfVar9 & 0xffffffffffffff00;
        }
      }
    }
  }
  return (ulonglong)bVar8;
}



// FUNCTION 143843fc0 FUN_143843fc0 body=388 status=ok
// SIG undefined FUN_143843fc0(void)

undefined4 * FUN_143843fc0(longlong *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 local_res18 [8];
  longlong local_res20;
  
  lVar2 = *param_1;
  lVar10 = param_1[1];
  lVar9 = (longlong)(int)lVar10;
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  iVar8 = 8;
  if (8 < param_3) {
    iVar8 = param_3;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar5 = FUN_143703a50();
  if (((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar8) &&
     (iVar3 = FUN_14370c310(uVar5,param_1,iVar8,4), iVar3 < 0)) {
    *param_2 = 0x80040200;
  }
  else {
    lVar6 = 0;
    *(int *)(param_1 + 1) = iVar8;
    if (0 < iVar8) {
      do {
        *(undefined4 *)(*param_1 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar8);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    local_res20 = lVar9;
    if (0 < (int)lVar10) {
      lVar10 = 0;
      do {
        iVar8 = *(int *)(lVar2 + lVar10 * 4);
        if (iVar8 != -1) {
          if ((int)param_1[1] + -1 < (int)param_1[2] * 2) {
            FUN_143843fc0(param_1,local_res18,(int)param_1[1] * 2);
            lVar9 = local_res20;
          }
          iVar12 = 1;
          lVar6 = *param_1;
          uVar11 = (int)param_1[1] - 1;
          uVar4 = iVar8 * -0x61c8864f;
          uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                  iVar8 * -0x4f000000) & uVar11;
          lVar7 = (longlong)(int)uVar4;
          iVar3 = *(int *)(lVar6 + lVar7 * 4);
          while (iVar3 != -1) {
            if (*(int *)(lVar6 + lVar7 * 4) == iVar8) {
              iVar12 = 0;
              break;
            }
            uVar4 = uVar4 + 1 & uVar11;
            lVar7 = (longlong)(int)uVar4;
            iVar3 = *(int *)(lVar6 + lVar7 * 4);
          }
          *(int *)(param_1 + 2) = (int)param_1[2] + iVar12;
          *(int *)(lVar6 + (longlong)(int)uVar4 * 4) = iVar8;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar9);
    }
    *param_2 = 0;
  }
  uVar5 = FUN_143703a50();
  if (-1 < (int)uVar1) {
    FUN_143702e10(uVar5,lVar2,4,uVar1 & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 143844150 FUN_143844150 body=76 status=ok
// SIG undefined FUN_143844150(void)

void FUN_143844150(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143843ba0(param_1 + 0xac,param_2,param_1 + 0xc0,0);
  FUN_143843ba0(param_1 + 0xb4,param_3,param_1 + 0xd0,1);
  return;
}



// FUNCTION 1438441a0 FUN_1438441a0 body=244 status=ok
// SIG undefined FUN_1438441a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438441a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_1 = NavMeshSectionRaycaster::vftable;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = uRam00000001467f08d8;
  param_1[8] = _DAT_1467f08d0;
  param_1[9] = uVar2;
  uVar2 = uRam00000001467f08d8;
  param_1[10] = _DAT_1467f08d0;
  param_1[0xb] = uVar2;
  uVar2 = uRam00000001467f06d8;
  param_1[0xc] = _DAT_1467f06d0;
  param_1[0xd] = uVar2;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  uVar2 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar2;
  uVar2 = param_2[3];
  param_1[4] = param_2[2];
  param_1[5] = uVar2;
  param_1[6] = param_2[4];
  uVar2 = param_2[7];
  param_1[8] = param_2[6];
  param_1[9] = uVar2;
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)((longlong)param_2 + 0x44);
  fVar7 = *(float *)(param_2 + 9);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(float *)(param_1 + 10) = fVar5;
  *(float *)((longlong)param_1 + 0x54) = fVar6;
  *(float *)(param_1 + 0xb) = fVar7;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  auVar3._0_4_ = fVar5 - *(float *)(param_1 + 8);
  auVar3._4_4_ = fVar6 - *(float *)((longlong)param_1 + 0x44);
  auVar3._8_4_ = fVar7 - *(float *)(param_1 + 9);
  auVar3._12_4_ = fRam00000001467f06fc;
  fVar5 = (float)(~-(uint)(auVar3._0_4_ == 0.0) & (uint)auVar3._0_4_);
  fVar6 = (float)(~-(uint)(auVar3._4_4_ == 0.0) & (uint)auVar3._4_4_);
  fVar7 = (float)(~-(uint)(auVar3._8_4_ == 0.0) & (uint)auVar3._8_4_);
  fVar8 = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar4._4_4_ = fVar6;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar8;
  auVar4 = rcpps(auVar3,auVar4);
  *(float *)(param_1 + 0x10) = fVar5;
  *(float *)((longlong)param_1 + 0x84) = fVar6;
  *(float *)(param_1 + 0x11) = fVar7;
  *(float *)((longlong)param_1 + 0x8c) = fVar8;
  *(uint *)(param_1 + 0x12) =
       -(uint)(fVar5 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar5 == 0.0) & (uint)((2.0 - auVar4._0_4_ * fVar5) * auVar4._0_4_);
  *(uint *)((longlong)param_1 + 0x94) =
       -(uint)(fVar6 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar6 == 0.0) & (uint)((2.0 - auVar4._4_4_ * fVar6) * auVar4._4_4_);
  *(uint *)(param_1 + 0x13) =
       -(uint)(fVar7 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar7 == 0.0) & (uint)((2.0 - auVar4._8_4_ * fVar7) * auVar4._8_4_);
  *(uint *)((longlong)param_1 + 0x9c) =
       -(uint)(fVar8 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar8 == 0.0) & (uint)((2.0 - auVar4._12_4_ * fVar8) * auVar4._12_4_);
  param_1[0xe] = param_1[8];
  param_1[0xf] = param_1[9];
  uVar2 = CONCAT44(fRam00000001467f06fc,uRam00000001467f06f8);
  param_1[0x16] = _DAT_1467f06f0;
  param_1[0x17] = uVar2;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



// FUNCTION 1438442a0 FUN_1438442a0 body=253 status=ok
// SIG undefined FUN_1438442a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1438442a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *param_1 = NavMeshSectionRaycaster::vftable;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar2 = uRam00000001467f08d8;
  param_1[8] = _DAT_1467f08d0;
  param_1[9] = uVar2;
  uVar2 = uRam00000001467f08d8;
  param_1[10] = _DAT_1467f08d0;
  param_1[0xb] = uVar2;
  uVar2 = uRam00000001467f06d8;
  param_1[0xc] = _DAT_1467f06d0;
  param_1[0xd] = uVar2;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  uVar2 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar2;
  uVar2 = param_2[3];
  param_1[4] = param_2[2];
  param_1[5] = uVar2;
  param_1[6] = param_2[4];
  uVar2 = param_2[7];
  param_1[8] = param_2[6];
  param_1[9] = uVar2;
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)((longlong)param_2 + 0x44);
  fVar7 = *(float *)(param_2 + 9);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(float *)(param_1 + 10) = fVar5;
  *(float *)((longlong)param_1 + 0x54) = fVar6;
  *(float *)(param_1 + 0xb) = fVar7;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[10];
  param_1[0xd] = uVar2;
  auVar3._0_4_ = fVar5 - *(float *)(param_1 + 8);
  auVar3._4_4_ = fVar6 - *(float *)((longlong)param_1 + 0x44);
  auVar3._8_4_ = fVar7 - *(float *)(param_1 + 9);
  auVar3._12_4_ = fRam00000001467f06fc;
  fVar5 = (float)(~-(uint)(auVar3._0_4_ == 0.0) & (uint)auVar3._0_4_);
  fVar6 = (float)(~-(uint)(auVar3._4_4_ == 0.0) & (uint)auVar3._4_4_);
  fVar7 = (float)(~-(uint)(auVar3._8_4_ == 0.0) & (uint)auVar3._8_4_);
  fVar8 = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar4._4_4_ = fVar6;
  auVar4._0_4_ = fVar5;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar8;
  auVar4 = rcpps(auVar3,auVar4);
  *(float *)(param_1 + 0x10) = fVar5;
  *(float *)((longlong)param_1 + 0x84) = fVar6;
  *(float *)(param_1 + 0x11) = fVar7;
  *(float *)((longlong)param_1 + 0x8c) = fVar8;
  *(uint *)(param_1 + 0x12) =
       -(uint)(fVar5 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar5 == 0.0) & (uint)((2.0 - auVar4._0_4_ * fVar5) * auVar4._0_4_);
  *(uint *)((longlong)param_1 + 0x94) =
       -(uint)(fVar6 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar6 == 0.0) & (uint)((2.0 - auVar4._4_4_ * fVar6) * auVar4._4_4_);
  *(uint *)(param_1 + 0x13) =
       -(uint)(fVar7 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar7 == 0.0) & (uint)((2.0 - auVar4._8_4_ * fVar7) * auVar4._8_4_);
  *(uint *)((longlong)param_1 + 0x9c) =
       -(uint)(fVar8 == 0.0) & 0x7f7fffee |
       ~-(uint)(fVar8 == 0.0) & (uint)((2.0 - auVar4._12_4_ * fVar8) * auVar4._12_4_);
  param_1[0xe] = param_1[8];
  param_1[0xf] = param_1[9];
  uVar2 = CONCAT44(fRam00000001467f06fc,uRam00000001467f06f8);
  param_1[0x16] = _DAT_1467f06f0;
  param_1[0x17] = uVar2;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}



// FUNCTION 1438443a0 FUN_1438443a0 body=40 status=ok
// SIG undefined FUN_1438443a0(void)

undefined8 * FUN_1438443a0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = hkaiDynamicNavMeshQueryMediator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0x3d4ccccd;
  return param_1;
}



// FUNCTION 1438443d0 FUN_1438443d0 body=15 status=ok
// SIG undefined FUN_1438443d0(void)

void FUN_1438443d0(undefined8 *param_1)

{
  *param_1 = hkaiDynamicNavMeshQueryMediator::vftable;
  FUN_14370c000();
  return;
}



// FUNCTION 1438443e0 FUN_1438443e0 body=99 status=ok
// SIG undefined FUN_1438443e0(void)

undefined8 * FUN_1438443e0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 143844450 FUN_143844450 body=99 status=ok
// SIG undefined FUN_143844450(void)

undefined8 * FUN_143844450(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x20);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1438444c0 FUN_1438444c0 body=99 status=ok
// SIG undefined FUN_1438444c0(void)

undefined8 * FUN_1438444c0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x28);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 143844530 FUN_143844530 body=99 status=ok
// SIG undefined FUN_143844530(void)

undefined8 * FUN_143844530(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0xe0);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1438445a0 FUN_1438445a0 body=99 status=ok
// SIG undefined FUN_1438445a0(void)

undefined8 * FUN_1438445a0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 143844610 FUN_143844610 body=212 status=ok
// SIG undefined FUN_143844610(void)

uint * FUN_143844610(longlong param_1,uint *param_2,undefined4 *param_3,longlong param_4,
                    uint *param_5,uint *param_6)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_28 [16];
  
  puVar2 = param_6;
  uVar5 = *param_5;
  if (uVar5 != *param_6) {
    do {
      plVar1 = *(longlong **)(param_3 + 4);
      if (((plVar1 == (longlong *)0x0) ||
          (param_5._0_4_ = uVar5,
          iVar4 = (**(code **)(*plVar1 + 0x20))
                            (plVar1,param_4,&param_5,*param_3,*(undefined8 *)(param_3 + 2)),
          iVar4 != 0)) &&
         (param_5._0_4_ = uVar5, cVar3 = FUN_1438526b0(param_4,&param_5,param_1 + 0x60,local_28),
         cVar3 != '\0')) {
        *param_2 = *(int *)(*(longlong *)(param_4 + 0x18) + 0x17c) << 0x16 | uVar5;
        return param_2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *puVar2);
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 1438446f0 FUN_1438446f0 body=409 status=ok
// SIG undefined FUN_1438446f0(void)

bool FUN_1438446f0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  LPVOID pvVar3;
  undefined1 auVar4 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined **local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtDynMediator::castBidirectionalRay");
  }
  local_b8 = *(undefined1 (*) [16])(param_2 + 6);
  local_a8 = *(float *)(param_2 + 8);
  fStack_a4 = *(float *)((longlong)param_2 + 0x44);
  fStack_a0 = *(float *)(param_2 + 9);
  fStack_9c = *(float *)((longlong)param_2 + 0x4c);
  local_e8 = *param_2;
  uStack_e0 = param_2[1];
  local_f8[0] = NavMeshSectionBidirectionalRaycaster::vftable;
  local_d8 = param_2[2];
  uStack_d0 = param_2[3];
  local_68 = *(longlong *)(param_1 + 0x18);
  local_c8 = param_2[4];
  local_108 = (local_b8._0_4_ + local_b8._0_4_) - local_a8;
  fStack_104 = (local_b8._4_4_ + local_b8._4_4_) - fStack_a4;
  fStack_100 = (local_b8._8_4_ + local_b8._8_4_) - fStack_a0;
  fStack_fc = (local_b8._12_4_ + local_b8._12_4_) - fStack_9c;
  local_38 = DAT_1467f06f0;
  uStack_34 = uRam00000001467f06f4;
  uStack_30 = uRam00000001467f06f8;
  fStack_2c = fRam00000001467f06fc;
  local_58 = DAT_1467f06f0;
  uStack_54 = uRam00000001467f06f4;
  uStack_50 = uRam00000001467f06f8;
  fStack_4c = fRam00000001467f06fc;
  local_48 = 0xffffffff;
  local_88 = (float)(~-(uint)(local_a8 - local_108 == 0.0) & (uint)(local_a8 - local_108));
  fStack_84 = (float)(~-(uint)(fStack_a4 - fStack_104 == 0.0) & (uint)(fStack_a4 - fStack_104));
  fStack_80 = (float)(~-(uint)(fStack_a0 - fStack_100 == 0.0) & (uint)(fStack_a0 - fStack_100));
  fStack_7c = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar1._4_4_ = fStack_84;
  auVar1._0_4_ = local_88;
  auVar1._8_4_ = fStack_80;
  auVar1._12_4_ = fStack_7c;
  auVar4 = rcpps(local_b8,auVar1);
  local_78._0_4_ =
       ~-(uint)(local_88 == 0.0) & (uint)((2.0 - auVar4._0_4_ * local_88) * auVar4._0_4_);
  local_78._4_4_ =
       ~-(uint)(fStack_84 == 0.0) & (uint)((2.0 - auVar4._4_4_ * fStack_84) * auVar4._4_4_);
  local_78._8_4_ =
       ~-(uint)(fStack_80 == 0.0) & (uint)((2.0 - auVar4._8_4_ * fStack_80) * auVar4._8_4_);
  local_78._12_4_ =
       ~-(uint)(fStack_7c == 0.0) & (uint)((2.0 - auVar4._12_4_ * fStack_7c) * auVar4._12_4_);
  auVar4._8_4_ = -(uint)(fStack_80 == 0.0) & 0x7f7fffee;
  auVar4._0_8_ = CONCAT44(-(uint)(fStack_84 == 0.0),-(uint)(local_88 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar4._12_4_ = -(uint)(fStack_7c == 0.0) & 0x7f7fffee;
  local_78 = local_78 | auVar4;
  local_98 = local_108;
  fStack_94 = fStack_104;
  fStack_90 = fStack_100;
  fStack_8c = fStack_fc;
  iVar2 = hkcdDynamicAabbTree::getClosestPoint
                    (*(undefined8 *)(local_68 + 0x20),&local_108,param_2 + 8,local_f8);
  if (iVar2 != 0) {
    *param_3 = local_58;
    param_3[1] = uStack_54;
    param_3[2] = uStack_50;
    param_3[3] = fStack_4c;
    param_3[4] = local_48;
  }
  local_f8[0] = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return iVar2 != 0;
}



// FUNCTION 143844890 FUN_143844890 body=385 status=ok
// SIG undefined FUN_143844890(void)

undefined8 FUN_143844890(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_res8 [2];
  uint local_res10 [4];
  undefined4 local_res20 [2];
  uint local_a8;
  undefined1 local_a4 [12];
  float local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_78 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_58 = param_2 + 0x40;
  plVar1 = *(longlong **)
            ((longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 0x17c) * 0x100 + 0x18 +
            *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x38));
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  local_38 = *(undefined4 *)(param_1 + 0x50);
  uStack_34 = *(undefined4 *)(param_1 + 0x54);
  uStack_30 = *(undefined4 *)(param_1 + 0x58);
  uStack_2c = *(undefined4 *)(param_1 + 0x5c);
  local_48 = *(undefined4 *)(param_1 + 0x40);
  uStack_44 = *(undefined4 *)(param_1 + 0x44);
  uStack_40 = *(undefined4 *)(param_1 + 0x48);
  uStack_3c = *(undefined4 *)(param_1 + 0x4c);
  lStack_60 = param_2;
  cVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,&local_78,&local_98);
  if (cVar3 != '\0') {
    fVar6 = ABS(local_98);
    uVar7 = uStack_94 & 0x7fffffff;
    uVar8 = uStack_90 & 0x7fffffff;
    uVar9 = uStack_8c & 0x7fffffff;
    if (fVar6 < *(float *)(param_1 + 0xc0)) {
      lVar2 = *(longlong *)(param_2 + 0x18);
      local_res10[0] = local_88 & 0x3fffff;
      if (*(int *)(lVar2 + 0x108) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = *(byte *)((ulonglong)local_res10[0] + *(longlong *)(lVar2 + 0x100));
      }
      if ((bVar5 & 1) == 0) {
        *(float *)(param_1 + 0xa0) = local_98;
        *(uint *)(param_1 + 0xa4) = uStack_94;
        *(uint *)(param_1 + 0xa8) = uStack_90;
        *(uint *)(param_1 + 0xac) = uStack_8c;
        *(uint *)(param_1 + 0xb0) = local_88;
        *(float *)(param_1 + 0xc0) = fVar6;
        *(uint *)(param_1 + 0xc4) = uVar7;
        *(uint *)(param_1 + 200) = uVar8;
        *(uint *)(param_1 + 0xcc) = uVar9;
        return 1;
      }
      FUN_143839060(lVar2,local_res8,local_res10,&local_a8,local_res20);
      if ((char)local_res8[0] != '\0') {
        local_res8[0] = local_res20[0];
        local_res10[0] = local_a8;
        piVar4 = (int *)FUN_143844610(param_1,local_a4,&local_78,param_2,local_res10,local_res8);
        if (*piVar4 != -1) {
          *(int *)(param_1 + 0xb0) = *piVar4;
          *(ulonglong *)(param_1 + 0xa0) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(param_1 + 0xa8) = CONCAT44(uStack_8c,uStack_90);
          *(float *)(param_1 + 0xc0) = fVar6;
          *(uint *)(param_1 + 0xc4) = uVar7;
          *(uint *)(param_1 + 200) = uVar8;
          *(uint *)(param_1 + 0xcc) = uVar9;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143844a20 FUN_143844a20 body=205 status=ok
// SIG undefined FUN_143844a20(void)

bool FUN_143844a20(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined **local_e8 [20];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtDynMediator::castRay");
  }
  FUN_1438441a0(local_e8,param_2);
  local_48 = *(longlong *)(param_1 + 0x18);
  iVar1 = hkcdDynamicAabbTree::getClosestPoint
                    (*(undefined8 *)(local_48 + 0x20),param_2 + 0x30,param_2 + 0x40,local_e8);
  if (iVar1 != 0) {
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
    param_3[3] = uStack_2c;
    param_3[4] = local_28;
  }
  local_e8[0] = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return iVar1 != 0;
}



// FUNCTION 143844af0 FUN_143844af0 body=439 status=ok
// SIG undefined FUN_143844af0(void)

undefined8 FUN_143844af0(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  uint local_res20 [2];
  uint local_a8;
  undefined1 local_a4 [12];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 uStack_50;
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
  
  local_78 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_58 = param_2 + 0x40;
  plVar1 = *(longlong **)
            ((longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 0x17c) * 0x100 + 0x18 +
            *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x38));
  local_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  local_38 = *(undefined4 *)(param_1 + 0x50);
  uStack_34 = *(undefined4 *)(param_1 + 0x54);
  uStack_30 = *(undefined4 *)(param_1 + 0x58);
  uStack_2c = *(undefined4 *)(param_1 + 0x5c);
  local_28 = *(undefined4 *)(param_1 + 0x60);
  uStack_24 = *(undefined4 *)(param_1 + 100);
  uStack_20 = *(undefined4 *)(param_1 + 0x68);
  uStack_1c = *(undefined4 *)(param_1 + 0x6c);
  lVar2 = *plVar1;
  lStack_60 = param_2;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    cVar3 = (**(code **)(lVar2 + 0x28))(plVar1,&local_78,&local_98);
  }
  else {
    cVar3 = (**(code **)(lVar2 + 0x30))();
  }
  if ((cVar3 != '\0') && (local_98 < *(float *)(param_1 + 0xb0))) {
    lVar2 = *(longlong *)(param_2 + 0x18);
    local_a8 = local_88 & 0x3fffff;
    if (*(int *)(lVar2 + 0x108) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = *(byte *)((ulonglong)local_a8 + *(longlong *)(lVar2 + 0x100));
    }
    if ((bVar5 & 1) == 0) {
      *(float *)(param_1 + 0xb0) = local_98;
      *(float *)(param_1 + 0xb4) = fStack_94;
      *(float *)(param_1 + 0xb8) = fStack_90;
      *(float *)(param_1 + 0xbc) = fStack_8c;
      *(uint *)(param_1 + 0xc0) = local_88;
      *param_3 = local_98;
      param_3[1] = fStack_94;
      param_3[2] = fStack_90;
      param_3[3] = fStack_8c;
      return 1;
    }
    FUN_143839060(lVar2,local_res8,&local_a8,local_res20,local_res10);
    if ((char)local_res8[0] != '\0') {
      local_res8[0] = local_res10[0];
      local_a8 = local_res20[0];
      if (*(char *)(param_1 + 0xd0) == '\0') {
        piVar4 = (int *)FUN_143845710(param_1,local_a4,&local_78,param_2,&local_a8,local_res8);
      }
      else {
        piVar4 = (int *)FUN_1438457f0(param_1,local_a4,&local_78,param_2,&local_a8,local_res8,
                                      &local_98);
      }
      if (*piVar4 != -1) {
        *(int *)(param_1 + 0xc0) = *piVar4;
        *(ulonglong *)(param_1 + 0xb0) = CONCAT44(fStack_94,local_98);
        *(ulonglong *)(param_1 + 0xb8) = CONCAT44(fStack_8c,fStack_90);
        *(ulonglong *)param_3 = CONCAT44(fStack_94,local_98);
        *(ulonglong *)(param_3 + 2) = CONCAT44(fStack_8c,fStack_90);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143844cb0 FUN_143844cb0 body=219 status=ok
// SIG undefined FUN_143844cb0(void)

undefined8 FUN_143844cb0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined **local_e8 [20];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtDynMediator::castSphere");
  }
  FUN_1438442a0(local_e8,param_2);
  local_48 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(local_48 + 0x20) != 0) {
    iVar1 = hkcdDynamicAabbTree::getClosestPoint
                      (*(longlong *)(local_48 + 0x20),param_2 + 0x30,param_2 + 0x40,param_2 + 0x50,
                       local_e8);
    if (iVar1 != 0) {
      uVar3 = 1;
      *param_3 = local_38;
      param_3[1] = uStack_34;
      param_3[2] = uStack_30;
      param_3[3] = uStack_2c;
      param_3[4] = local_28;
      goto LAB_143844d4f;
    }
  }
  uVar3 = 0;
LAB_143844d4f:
  local_e8[0] = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return uVar3;
}



// FUNCTION 143844d90 FUN_143844d90 body=202 status=ok
// SIG undefined FUN_143844d90(void)

undefined4 * FUN_143844d90(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtDynMediator::GCBoundary");
  }
  local_18 = *(longlong *)(param_1 + 0x18);
  local_28 = NavMeshClosestBoundaryEdgeCollector::vftable;
  local_10 = 0xffffffff;
  local_20 = param_3;
  hkcdDynamicAabbTree::getClosestPoint
            (*(undefined8 *)(local_18 + 0x20),param_3 + 0x30,param_3 + 0x40,&local_28,param_4);
  *param_2 = local_10;
  local_28 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 143844e60 FUN_143844e60 body=202 status=ok
// SIG undefined FUN_143844e60(void)

undefined4 * FUN_143844e60(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  LPVOID pvVar1;
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtDynMediator::GCP");
  }
  local_18 = *(longlong *)(param_1 + 0x18);
  local_28 = NavMeshClosestPointCollector::vftable;
  local_10 = 0xffffffff;
  local_20 = param_3;
  hkcdDynamicAabbTree::getClosestPoint
            (*(undefined8 *)(local_18 + 0x20),param_3 + 0x30,param_3 + 0x40,&local_28,param_4);
  *param_2 = local_10;
  local_28 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 143844f30 FUN_143844f30 body=340 status=ok
// SIG undefined FUN_143844f30(void)

float * FUN_143844f30(longlong param_1,float *param_2,int param_3,undefined8 param_4,
                     undefined4 *param_5,undefined4 *param_6,undefined1 (*param_7) [16])

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  float fVar13;
  int local_res18 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  lStack_50 = *(longlong *)((longlong)param_3 * 0x100 + lVar1);
  plVar2 = *(longlong **)((longlong)param_3 * 0x100 + 0x18 + lVar1);
  if (lStack_50 == 0) {
    uVar8 = *(undefined8 *)(*param_7 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)*param_7;
    *(undefined8 *)(param_2 + 2) = uVar8;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 8);
    auVar10 = *param_7;
    fVar4 = auVar10._0_4_;
    fVar5 = auVar10._4_4_;
    fVar6 = auVar10._8_4_;
    fVar7 = auVar10._12_4_;
    auVar10 = rsqrtps(in_XMM2,auVar10);
    fVar9 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    local_68 = *puVar3;
    uStack_60 = puVar3[1];
    local_58 = puVar3[2];
    uStack_40 = puVar3[5];
    local_38 = puVar3[6];
    uStack_30 = puVar3[7];
    local_18 = *(undefined4 *)(puVar3 + 10);
    uStack_14 = *(undefined4 *)((longlong)puVar3 + 0x54);
    uStack_10 = *(undefined4 *)(puVar3 + 0xb);
    uStack_c = *(undefined4 *)((longlong)puVar3 + 0x5c);
    local_48 = lStack_50 + 0x40;
    _local_28 = CONCAT44(~-(uint)(fVar5 <= 0.0) &
                         (uint)((3.0 - fVar5 * fVar11 * fVar11) * fVar11 * 0.5 * fVar5),
                         ~-(uint)(fVar4 <= 0.0) &
                         (uint)((3.0 - fVar4 * fVar9 * fVar9) * fVar9 * 0.5 * fVar4));
    _uStack_20 = CONCAT44(~-(uint)(fVar7 <= 0.0) &
                          (uint)((3.0 - fVar7 * fVar13 * fVar13) * fVar13 * 0.5 * fVar7),
                          ~-(uint)(fVar6 <= 0.0) &
                          (uint)((3.0 - fVar6 * fVar12 * fVar12) * fVar12 * 0.5 * fVar6));
    local_78 = *param_5;
    uStack_74 = param_5[1];
    uStack_70 = param_5[2];
    fStack_6c = (float)param_5[3];
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res18,&local_68,&local_78);
    fVar4 = *(float *)(*param_7 + 4);
    fVar5 = *(float *)(*param_7 + 8);
    fVar6 = *(float *)(*param_7 + 0xc);
    if (local_res18[0] == -1) {
      *param_2 = *(float *)*param_7;
      param_2[1] = fVar4;
      param_2[2] = fVar5;
      param_2[3] = fVar6;
    }
    else {
      if (fStack_6c < *(float *)*param_7) {
        *(int *)(param_1 + 0x18) = local_res18[0];
        *param_6 = local_78;
        param_6[1] = uStack_74;
        param_6[2] = uStack_70;
        param_6[3] = fStack_6c;
      }
      *param_2 = fStack_6c;
      param_2[1] = fStack_6c;
      param_2[2] = fStack_6c;
      param_2[3] = fStack_6c;
    }
  }
  return param_2;
}



// FUNCTION 143845090 FUN_143845090 body=366 status=ok
// SIG undefined FUN_143845090(void)

float * FUN_143845090(longlong param_1,float *param_2,int param_3,undefined8 param_4,float *param_5,
                     float *param_6,undefined1 (*param_7) [16])

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  float fVar13;
  int local_res18 [2];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
  lStack_40 = *(longlong *)((longlong)param_3 * 0x100 + lVar1);
  plVar2 = *(longlong **)((longlong)param_3 * 0x100 + 0x18 + lVar1);
  if (lStack_40 == 0) {
    uVar4 = *(undefined8 *)(*param_7 + 8);
    *(undefined8 *)param_2 = *(undefined8 *)*param_7;
    *(undefined8 *)(param_2 + 2) = uVar4;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 8);
    auVar10 = *param_7;
    fVar5 = auVar10._0_4_;
    fVar6 = auVar10._4_4_;
    fVar7 = auVar10._8_4_;
    fVar9 = auVar10._12_4_;
    auVar10 = rsqrtps(in_XMM2,auVar10);
    fVar8 = auVar10._0_4_;
    fVar11 = auVar10._4_4_;
    fVar12 = auVar10._8_4_;
    fVar13 = auVar10._12_4_;
    local_18 = ~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar5 * fVar8 * fVar8) * fVar8 * 0.5 * fVar5);
    uStack_14 = ~-(uint)(fVar6 <= 0.0) &
                (uint)((3.0 - fVar6 * fVar11 * fVar11) * fVar11 * 0.5 * fVar6);
    uStack_10 = ~-(uint)(fVar7 <= 0.0) &
                (uint)((3.0 - fVar7 * fVar12 * fVar12) * fVar12 * 0.5 * fVar7);
    uStack_c = ~-(uint)(fVar9 <= 0.0) &
               (uint)((3.0 - fVar9 * fVar13 * fVar13) * fVar13 * 0.5 * fVar9);
    local_58 = *puVar3;
    uStack_50 = puVar3[1];
    local_48 = puVar3[2];
    uStack_30 = puVar3[5];
    local_28 = *(undefined4 *)(puVar3 + 6);
    uStack_24 = *(undefined4 *)((longlong)puVar3 + 0x34);
    uStack_20 = *(undefined4 *)(puVar3 + 7);
    uStack_1c = *(undefined4 *)((longlong)puVar3 + 0x3c);
    local_38 = lStack_40 + 0x40;
    local_68 = *param_5;
    fStack_64 = param_5[1];
    fStack_60 = param_5[2];
    fStack_5c = param_5[3];
    (**(code **)(*plVar2 + 0x18))(plVar2,local_res18,&local_58,&local_68);
    if (local_res18[0] == -1) {
      uVar4 = *(undefined8 *)(*param_7 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)*param_7;
      *(undefined8 *)(param_2 + 2) = uVar4;
    }
    else {
      fVar5 = (local_68 - *param_5) * (local_68 - *param_5);
      fVar6 = (fStack_64 - param_5[1]) * (fStack_64 - param_5[1]);
      fVar7 = (fStack_60 - param_5[2]) * (fStack_60 - param_5[2]);
      fVar9 = fVar6 + fVar5 + fVar7;
      if (fVar9 < *(float *)*param_7) {
        *(int *)(param_1 + 0x18) = local_res18[0];
        *param_6 = local_68;
        param_6[1] = fStack_64;
        param_6[2] = fStack_60;
        param_6[3] = fStack_5c;
      }
      *param_2 = fVar9;
      param_2[1] = fVar6 + fVar5 + fVar7;
      param_2[2] = fVar6 + fVar5 + fVar7;
      param_2[3] = fVar6 + fVar5 + fVar7;
    }
  }
  return param_2;
}



// FUNCTION 143845200 FUN_143845200 body=43 status=ok
// SIG undefined FUN_143845200(void)

undefined8 FUN_143845200(longlong param_1,int param_2)

{
  if (*(longlong *)((longlong)param_2 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38))
      != 0) {
    FUN_143845370();
  }
  return 1;
}



// FUNCTION 143845230 FUN_143845230 body=38 status=ok
// SIG undefined FUN_143845230(void)

undefined8 FUN_143845230(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x38));
  if (lVar1 != 0) {
    uVar2 = FUN_143844890(param_1,lVar1,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143845260 FUN_143845260 body=38 status=ok
// SIG undefined FUN_143845260(void)

undefined8 FUN_143845260(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x38));
  if (lVar1 != 0) {
    uVar2 = FUN_143844af0(param_1,lVar1,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143845290 FUN_143845290 body=209 status=ok
// SIG undefined FUN_143845290(void)

void FUN_143845290(longlong param_1,longlong param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_58 [32];
  undefined **local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtDynMediator::queryAabb");
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  local_18 = *(undefined4 *)(param_1 + 0x20);
  puVar3 = (undefined1 *)(param_2 + 0x30);
  local_38 = NavMeshSectionAabbQuery::vftable;
  local_30 = param_2;
  local_28 = lVar2;
  local_20 = param_3;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_143717be0(*(longlong *)(param_2 + 0x20),puVar3,local_58);
    lVar2 = *(longlong *)(param_1 + 0x18);
    puVar3 = local_58;
  }
  hkcdDynamicAabbTree::getClosestPoint(*(undefined8 *)(lVar2 + 0x20),puVar3,&local_38);
  local_38 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143845370 FUN_143845370 body=923 status=ok
// SIG undefined FUN_143845370(void)

void FUN_143845370(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  char local_res8 [8];
  int local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  longlong local_128;
  uint local_120;
  uint local_11c;
  longlong local_118;
  int local_110;
  uint local_10c;
  ulonglong local_108;
  ulonglong uStack_100;
  longlong *local_f8;
  longlong lStack_f0;
  undefined1 *local_e8;
  ulonglong uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [72];
  
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80000000;
  iVar10 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x17c);
  puVar1 = *(ulonglong **)(param_1 + 8);
  local_128 = 0;
  local_120 = 0;
  local_11c = 0x80000000;
  local_108 = *puVar1;
  uStack_100 = puVar1[1];
  local_f8 = (longlong *)puVar1[2];
  local_e8 = (undefined1 *)puVar1[4];
  uStack_e0 = puVar1[5];
  local_d8 = *(float *)(puVar1 + 6);
  fStack_d4 = *(float *)((longlong)puVar1 + 0x34);
  fStack_d0 = *(float *)(puVar1 + 7);
  fStack_cc = *(float *)((longlong)puVar1 + 0x3c);
  local_c8 = *(float *)(puVar1 + 8);
  fStack_c4 = *(float *)((longlong)puVar1 + 0x44);
  fStack_c0 = *(float *)(puVar1 + 9);
  fStack_bc = *(float *)((longlong)puVar1 + 0x4c);
  lStack_f0 = param_2;
  if (puVar1[4] == 0) {
    local_e8 = (undefined1 *)(param_2 + 0x40);
  }
  else {
    FUN_14375f6c0(local_88,puVar1[4],param_2 + 0x40);
    local_e8 = local_88;
  }
  plVar2 = *(longlong **)
            ((longlong)iVar10 * 0x100 + 0x18 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_108,&local_118);
  lVar13 = *(longlong *)(param_1 + 0x18);
  iVar11 = *(int *)(lVar13 + 8) + local_110;
  uVar5 = *(uint *)(lVar13 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar11) {
    iVar7 = uVar5 * 2;
    if (iVar11 < iVar7) {
      iVar11 = iVar7;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,lVar13,iVar11,4);
  }
  local_b8 = *(undefined4 *)(param_1 + 0x20);
  iVar11 = local_110 + -1;
  lVar13 = (longlong)iVar11;
  uStack_b4 = local_b8;
  uStack_b0 = local_b8;
  uStack_ac = local_b8;
  if (-1 < iVar11) {
    do {
      uVar5 = *(uint *)(local_118 + lVar13 * 4);
      uVar6 = uVar5 & 0x3fffff;
      if (*(int *)(*(longlong *)(param_2 + 0x18) + 0x108) == 0) {
        bVar12 = 0;
      }
      else {
        bVar12 = *(byte *)((longlong)(int)uVar6 +
                          *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x100));
      }
      if ((bVar12 & 1) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x18);
        *(uint *)(*plVar2 + (longlong)(int)plVar2[1] * 4) = uVar5;
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      }
      else {
        local_110 = local_110 + -1;
        if (local_110 != iVar11) {
          *(undefined4 *)(local_118 + lVar13 * 4) =
               *(undefined4 *)(local_118 + (longlong)local_110 * 4);
        }
        local_res18[0] = uVar6;
        FUN_143839060(*(undefined8 *)(param_2 + 0x18),local_res8,local_res18,local_res20,local_res10
                     );
        if ((local_res8[0] != '\0') &&
           (uVar5 = local_res20[0], (int)local_res20[0] < local_res10[0])) {
          do {
            if (local_f8 == (longlong *)0x0) {
LAB_14384556e:
              bVar4 = true;
            }
            else {
              local_res18[0] = uVar5;
              iVar7 = (**(code **)(*local_f8 + 0x20))
                                (local_f8,param_2,local_res18,local_108 & 0xffffffff,uStack_100);
              bVar4 = false;
              if (iVar7 != 0) goto LAB_14384556e;
            }
            if (bVar4) {
              local_res18[0] = uVar5;
              uVar8 = FUN_143852340(param_2,local_res18,&local_b8,&local_a8);
              auVar3._4_4_ = -(uint)(fStack_d4 <= fStack_94 && fStack_a4 <= fStack_c4);
              auVar3._0_4_ = -(uint)(local_d8 <= local_98 && local_a8 <= local_c8);
              auVar3._8_4_ = -(uint)(fStack_d0 <= fStack_90 && fStack_a0 <= fStack_c0);
              auVar3._12_4_ = -(uint)(fStack_cc <= fStack_8c && fStack_9c <= fStack_bc);
              uVar8 = movmskps(uVar8,auVar3);
              if (((byte)uVar8 & 7) == 7) {
                if (local_120 == (local_11c & 0x3fffffff)) {
                  FUN_14370c460(&PTR_vftable_1467f0638,&local_128,4);
                }
                *(uint *)(local_128 + (longlong)(int)local_120 * 4) = iVar10 << 0x16 | uVar5;
                local_120 = local_120 + 1;
              }
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < local_res10[0]);
        }
      }
      iVar11 = iVar11 + -1;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  uVar5 = local_120;
  lVar13 = local_128;
  plVar2 = *(longlong **)(param_1 + 0x18);
  lVar14 = (longlong)(int)local_120;
  iVar10 = (int)plVar2[1] + local_120;
  uVar6 = *(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff;
  if (((int)uVar6 < iVar10) && ((int)uVar6 < iVar10)) {
    iVar11 = iVar10;
    if (iVar10 < (int)(uVar6 * 2)) {
      iVar11 = uVar6 * 2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,plVar2,iVar11,4);
  }
  puVar9 = (undefined4 *)(*plVar2 + (longlong)(int)plVar2[1] * 4);
  if (0 < (int)uVar5) {
    lVar13 = lVar13 - (longlong)puVar9;
    do {
      *puVar9 = *(undefined4 *)(lVar13 + (longlong)puVar9);
      puVar9 = puVar9 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *(int *)(plVar2 + 1) = iVar10;
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_128,4,local_11c & 0x3fffffff);
  }
  local_128 = 0;
  local_11c = 0x80000000;
  local_110 = 0;
  if (-1 < (int)local_10c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_118,4,local_10c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143845710 FUN_143845710 body=212 status=ok
// SIG undefined FUN_143845710(void)

uint * FUN_143845710(longlong param_1,uint *param_2,undefined4 *param_3,longlong param_4,
                    uint *param_5,uint *param_6)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_28 [16];
  
  puVar2 = param_6;
  uVar5 = *param_5;
  if (uVar5 != *param_6) {
    do {
      plVar1 = *(longlong **)(param_3 + 4);
      if (((plVar1 == (longlong *)0x0) ||
          (param_5._0_4_ = uVar5,
          iVar4 = (**(code **)(*plVar1 + 0x20))
                            (plVar1,param_4,&param_5,*param_3,*(undefined8 *)(param_3 + 2)),
          iVar4 != 0)) &&
         (param_5._0_4_ = uVar5, cVar3 = FUN_143854090(param_4,&param_5,param_1 + 0x70,local_28),
         cVar3 != '\0')) {
        *param_2 = *(int *)(*(longlong *)(param_4 + 0x18) + 0x17c) << 0x16 | uVar5;
        return param_2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *puVar2);
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 1438457f0 FUN_1438457f0 body=281 status=ok
// SIG undefined FUN_1438457f0(void)

uint * FUN_1438457f0(longlong param_1,uint *param_2,undefined4 *param_3,longlong param_4,
                    uint *param_5,uint *param_6,float *param_7)

{
  longlong *plVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  puVar2 = param_6;
  fVar9 = fRam00000001467f06fc;
  fVar8 = fRam00000001467f06f8;
  fVar7 = fRam00000001467f06f4;
  fVar6 = DAT_1467f06f0;
  uVar5 = *param_5;
  *param_2 = 0xffffffff;
  if (uVar5 != *param_6) {
    do {
      plVar1 = *(longlong **)(param_3 + 4);
      if (plVar1 == (longlong *)0x0) {
LAB_143845873:
        local_38 = DAT_1467f06f0;
        fStack_34 = fRam00000001467f06f4;
        fStack_30 = fRam00000001467f06f8;
        fStack_2c = fRam00000001467f06fc;
        param_5._0_4_ = uVar5;
        cVar3 = FUN_1438527d0(param_4,&param_5,param_1 + 0x70,param_3 + 0x14,&local_38);
        if (cVar3 != '\0') {
          if (local_38 < fVar6) {
            *param_2 = *(int *)(*(longlong *)(param_4 + 0x18) + 0x17c) << 0x16 | uVar5;
            fVar6 = local_38;
            fVar7 = fStack_34;
            fVar8 = fStack_30;
            fVar9 = fStack_2c;
          }
        }
      }
      else {
        param_5._0_4_ = uVar5;
        iVar4 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,param_4,&param_5,*param_3,*(undefined8 *)(param_3 + 2));
        if (iVar4 != 0) goto LAB_143845873;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != *puVar2);
    if (*param_2 != 0xffffffff) {
      *param_7 = fVar6;
      param_7[1] = fVar7;
      param_7[2] = fVar8;
      param_7[3] = fVar9;
    }
  }
  return param_2;
}



// FUNCTION 143845910 FUN_143845910 body=42 status=ok
// SIG undefined FUN_143845910(void)

void FUN_143845910(longlong param_1,longlong param_2,undefined8 param_3)

{
  FUN_143713830(param_3,*(longlong *)
                         (*(longlong *)(*(longlong *)(param_2 + 0x130) + 0x38) +
                         (longlong)*(int *)(param_1 + 0x60) * 0x100) + 0x40,param_1 + 0x40);
  return;
}



// FUNCTION 143845940 FUN_143845940 body=132 status=ok
// SIG undefined FUN_143845940(void)

void FUN_143845940(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_res8 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_res8[0] = 0x3a83126f;
  local_58 = 0x3a83126f;
  uStack_54 = 0x3a83126f;
  uStack_50 = 0x3a83126f;
  uStack_4c = 0x3a83126f;
  FUN_143786e90(&local_48,local_res8,param_1,&local_58);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  *param_3 = fVar1 * local_48 + local_18 + fVar2 * local_38 + fVar3 * local_28;
  param_3[1] = fVar1 * fStack_44 + fStack_14 + fVar2 * fStack_34 + fVar3 * fStack_24;
  param_3[2] = fVar1 * fStack_40 + fStack_10 + fVar2 * fStack_30 + fVar3 * fStack_20;
  param_3[3] = fVar1 * fStack_3c + fStack_c + fVar2 * fStack_2c + fVar3 * fStack_1c;
  return;
}



// FUNCTION 1438459d0 unsubscribeAll body=103 status=ok
// SIG undefined unsubscribeAll(void)

void hkaiNavigatorSignals::unsubscribeAll(longlong param_1,undefined8 param_2)

{
  FUN_14370e870();
  FUN_14370e870(param_1 + 8,param_2);
  FUN_14370e870(param_1 + 0x10,param_2);
  FUN_14370e870(param_1 + 0x18,param_2);
  FUN_14370e870(param_1 + 0x20,param_2);
  FUN_14370e870(param_1 + 0x28,param_2);
  FUN_14370e870(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 143845a40 FUN_143845a40 body=205 status=ok
// SIG undefined FUN_143845a40(void)

undefined8 * FUN_143845a40(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_res8 [2];
  
  puVar2 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiReferencedArray<hkaiStreamingSet_const*___ptr64>::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  iVar5 = (int)(param_2[1] - *param_2 >> 3);
  local_res8[0] = iVar5;
  uVar1 = FUN_143703a50();
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar2 = (undefined8 *)FUN_143702d60(uVar1,8,local_res8);
  }
  param_1[3] = puVar2;
  *(int *)(param_1 + 4) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  lVar3 = (longlong)iVar5;
  *(int *)((longlong)param_1 + 0x24) = iVar6;
  if (0 < iVar5) {
    lVar4 = *param_2 - (longlong)puVar2;
    do {
      *puVar2 = *(undefined8 *)(lVar4 + (longlong)puVar2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



// FUNCTION 143845b10 FUN_143845b10 body=298 status=ok
// SIG undefined FUN_143845b10(void)

uint * FUN_143845b10(longlong *param_1,uint *param_2,int *param_3,undefined2 *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_3;
  uVar9 = iVar2 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  puVar8 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar8[1] * 8) == iVar2) {
        *param_2 = puVar8[1];
        goto LAB_143845c09;
      }
      lVar4 = param_1[2];
      uVar7 = ((longlong)puVar8 - lVar4 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar4 + uVar7 * 8);
    } while (-1 < *(int *)(lVar4 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar9;
  puVar8[1] = uVar3;
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,param_1,8);
  }
  lVar5 = param_1[1];
  lVar4 = *param_1;
  *param_2 = uVar3;
  piVar1 = (int *)(lVar4 + (longlong)(int)lVar5 * 8);
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *piVar1 = *param_3;
  *(undefined2 *)(piVar1 + 1) = *param_4;
LAB_143845c09:
  param_2[1] = (uint)((longlong)puVar8 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 143845c40 FUN_143845c40 body=185 status=ok
// SIG undefined FUN_143845c40(void)

undefined8 * FUN_143845c40(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)(param_1 + 2) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x13) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 100;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x17) = 0x400;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3f000000;
  FUN_143841d70(param_1 + 0x18,0);
  FUN_143875090(param_1 + 0x34,0);
  *param_1 = 0;
  param_1[1] = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x153) = 1;
  puVar2 = (undefined4 *)((longlong)param_1 + 0x14);
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0x3fc00000;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// FUNCTION 143845d00 FUN_143845d00 body=1951 status=ok
// SIG undefined FUN_143845d00(void)

undefined8 * FUN_143845d00(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  LPVOID pvVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 local_res8 [8];
  float local_e8 [4];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [32];
  undefined4 local_48;
  
  lVar13 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiWorld::vftable;
  FUN_14382bca0(param_1 + 3);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0x2d) = 0x42480000;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x80000000;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x80000000;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x80000000;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x80000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  FUN_143841d70(param_1 + 0x52,0);
  FUN_143875090(param_1 + 0x6e,0);
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  FRootMotionServerToLocalIDMapping::FRootMotionServerToLocalIDMapping(param_1 + 0x98);
  param_1[0x99] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0xa0] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
  *(undefined2 *)(param_1 + 0xa2) = 1;
  *(undefined1 *)((longlong)param_1 + 0x512) = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar1;
  *(undefined4 *)(param_1 + 0x25) = uVar2;
  *(undefined4 *)((longlong)param_1 + 300) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x14c) = *(undefined1 *)((longlong)param_2 + 0x11);
  FGenericPlatformString::Memcpy(param_1 + 0x34,param_2 + 5,0x80);
  *(undefined1 *)(param_1 + 0x44) = 0;
  lVar11 = *(longlong *)(param_2 + 0x2a);
  if (lVar11 != 0) {
    FUN_14370c030(lVar11);
  }
  if (param_1[0x4d] != 0) {
    FUN_14370c150();
  }
  param_1[0x4d] = lVar11;
  *(undefined4 *)((longlong)param_1 + 0x27c) = param_2[0x2c];
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x284) = param_2[0x2e];
  *(undefined4 *)(param_1 + 0x51) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x10;
  FUN_1438468b0(param_1 + 0x52,param_2 + 0x30);
  FUN_143846aa0(param_1 + 0x6e,param_2 + 0x68);
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x30);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_14387b750(lVar10);
  }
  if (lVar11 != param_1[0x28]) {
    if (param_1[0x28] != 0) {
      FUN_14370c150();
    }
    param_1[0x28] = lVar11;
  }
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0xf0);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_14383d5c0(lVar10,param_1[0x28]);
  }
  if (lVar11 != param_1[0x26]) {
    if (param_1[0x26] != 0) {
      FUN_14370c150();
    }
    param_1[0x26] = lVar11;
  }
  *(undefined4 *)(param_1 + 0x86) = 1;
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x100);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_1438630f0(lVar10);
  }
  if (lVar11 != param_1[0x27]) {
    if (param_1[0x27] != 0) {
      FUN_14370c150();
    }
    param_1[0x27] = lVar11;
  }
  FUN_1438644d0(param_1[0x27],param_1 + 0x24,param_1[0x26]);
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  *(undefined1 *)(param_1[0x27] + 0x98) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1[0x27] + 0xa0) = *(undefined1 *)((longlong)param_1 + 0x14c);
  uVar1 = param_2[0x2f];
  *(undefined4 *)(param_1[0x27] + 0xa4) = uVar1;
  fVar4 = *(float *)(param_1 + 0x24);
  fVar5 = *(float *)((longlong)param_1 + 0x124);
  fVar6 = *(float *)(param_1 + 0x25);
  fVar20 = ABS(fVar4);
  fVar21 = ABS(fVar5);
  fVar22 = ABS(fVar6);
  auVar18._0_8_ = CONCAT44(fVar5,fVar5) & 0x7fffffff7fffffff;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = fVar21;
  auVar16._0_8_ = CONCAT44(fVar6,fVar6) & 0x7fffffff7fffffff;
  auVar16._8_4_ = fVar22;
  auVar16._12_4_ = fVar22;
  auVar19._8_4_ = fVar20;
  auVar19._0_8_ = CONCAT44(fVar4,fVar4) & 0x7fffffff7fffffff;
  auVar19._12_4_ = fVar20;
  auVar19 = maxps(auVar18,auVar19);
  auVar19 = maxps(auVar16,auVar19);
  fVar4 = *(float *)(param_1 + 0x24);
  fVar5 = *(float *)((longlong)param_1 + 0x124);
  fVar6 = *(float *)(param_1 + 0x25);
  fVar7 = *(float *)((longlong)param_1 + 300);
  auVar17._4_4_ = -(uint)(auVar19._4_4_ <= fVar21);
  auVar17._0_4_ = -(uint)(auVar19._0_4_ <= fVar20);
  auVar17._8_4_ = -(uint)(auVar19._8_4_ <= fVar22);
  auVar17._12_4_ = -(uint)(auVar19._12_4_ <= ABS(*(float *)((longlong)param_1 + 300)));
  uVar8 = movmskps(uVar1,auVar17);
  iVar14 = (char)(&DAT_145ba0900)[uVar8 & 7] + 2;
  local_e8[iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                    (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3] = 1.0;
  fVar20 = local_e8[1] * fVar4;
  fVar21 = fVar5 * local_e8[0];
  fVar22 = fVar6 * local_e8[1];
  local_e8[1] = fVar4 * local_e8[2] - local_e8[0] * fVar6;
  local_e8[0] = fVar22 - local_e8[2] * fVar5;
  local_e8[3] = fVar7 * local_e8[3] - local_e8[3] * fVar7;
  local_e8[2] = fVar21 - fVar20;
  FUN_14389f5d0(param_1 + 0x2e,param_1 + 0x24,local_e8);
  *(undefined4 *)((longlong)param_1 + 0x164) = param_2[0x25];
  *(undefined4 *)(param_1 + 0x2d) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0x16c) = param_2[0x27];
  local_48 = 0xbf800000;
  local_d8 = 0;
  uStack_d0 = 0;
  puVar15 = local_c8;
  for (lVar11 = 0x20; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar15 = 0xbf800000;
    puVar15 = puVar15 + 1;
  }
  FUN_143848b00(param_1,&local_d8);
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x1f0);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_143870660(lVar10,&local_d8);
  }
  if (lVar11 != param_1[0x2a]) {
    if (param_1[0x2a] != 0) {
      FUN_14370c150();
    }
    param_1[0x2a] = lVar11;
  }
  *(undefined4 *)(param_1[0x2a] + 0x1d4) = param_2[0x28];
  *(undefined4 *)(param_1 + 0x29) = param_2[0x2d];
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x30);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_143876800(lVar10);
  }
  if (param_1[0x4e] != 0) {
    FUN_14370c150();
  }
  param_1[0x4e] = lVar11;
  puVar12 = (undefined1 *)FUN_143876d90(lVar11,local_res8);
  *(undefined1 *)(param_1 + 0x4f) = *puVar12;
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x30);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_1438a0880(lVar10,param_1);
  }
  if (lVar11 != param_1[0x87]) {
    if (param_1[0x87] != 0) {
      FUN_14370c150();
    }
    param_1[0x87] = lVar11;
  }
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x38);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_14389f660(lVar10,param_1);
  }
  if (lVar11 != param_1[0x8f]) {
    if (param_1[0x8f] != 0) {
      FUN_14370c150();
    }
    param_1[0x8f] = lVar11;
  }
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar10 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x68);
  lVar11 = lVar13;
  if (lVar10 != 0) {
    lVar11 = FUN_143dfc8b0(lVar10,0,0);
  }
  if (lVar11 != param_1[0x99]) {
    if (param_1[0x99] != 0) {
      FUN_14370c150();
    }
    param_1[0x99] = lVar11;
  }
  pvVar9 = TlsGetValue(DAT_146b7bf70);
  if (pvVar9 == (LPVOID)0x0) {
    pvVar9 = DAT_146b7bf68;
  }
  lVar11 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar9 + 0x58),0x50);
  if (lVar11 != 0) {
    lVar13 = FUN_143dfc450(lVar11,param_1[0x99]);
  }
  param_1[0x9a] = lVar13;
  *(undefined1 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3b449ba6;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  if (param_1[0xa0] != 0) {
    FUN_14370c150();
  }
  param_1[0xa0] = 0;
  return param_1;
}



// FUNCTION 1438464a0 FUN_1438464a0 body=1032 status=ok
// SIG undefined FUN_1438464a0(void)

void FUN_1438464a0(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = hkaiWorld::vftable;
  cVar2 = UPrimitiveComponent::IsWelded();
  if (cVar2 != '\0') {
    FUN_14384bfc0(param_1);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x46) + -1);
  if (-1 < *(int *)(param_1 + 0x46) + -1) {
    do {
      plVar1 = *(longlong **)(param_1[0x45] + lVar5 * 8);
      (**(code **)(*plVar1 + 0xd0))(plVar1,param_1);
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  FUN_143787740(param_1 + 3,param_1);
  lVar5 = param_1[0x9a];
  if (lVar5 != 0) {
    thunk_FUN_143dfc630(lVar5);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar5,0x50);
  }
  param_1[0x9a] = 0;
  if (param_1[0x99] != 0) {
    FUN_14370c150();
  }
  param_1[0x99] = 0;
  if (param_1[0xa0] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x9e] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x9d] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x99] != 0) {
    FUN_14370c150();
  }
  FUN_14370e7c0(param_1 + 0x96);
  FUN_14370e7c0(param_1 + 0x95);
  FUN_14370e7c0(param_1 + 0x94);
  FUN_14370e7c0(param_1 + 0x93);
  FUN_14370e7c0(param_1 + 0x92);
  FUN_14370e7c0(param_1 + 0x91);
  FUN_14370e7c0(param_1 + 0x90);
  if (param_1[0x8f] != 0) {
    FUN_14370c150();
  }
  FUN_14370e7c0(param_1 + 0x8e);
  FUN_14370e7c0(param_1 + 0x8d);
  FUN_14370e7c0(param_1 + 0x8c);
  FUN_14370e7c0(param_1 + 0x8b);
  FUN_14370e7c0(param_1 + 0x8a);
  FUN_14370e7c0(param_1 + 0x89);
  FUN_14370e7c0(param_1 + 0x88);
  if (param_1[0x87] != 0) {
    FUN_14370c150();
  }
  FUN_142f8ba30(param_1 + 0x6e);
  FUN_142f8b990(param_1 + 0x52);
  if (param_1[0x4e] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x4d] != 0) {
    FUN_14370c150();
  }
  uVar4 = FUN_143703a50();
  lVar5 = param_1[0x4b];
  lVar6 = (longlong)(*(int *)(param_1 + 0x4c) + -1);
  if (-1 < *(int *)(param_1 + 0x4c) + -1) {
    do {
      if (*(longlong *)(lVar5 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x264)) {
    FUN_143702e10(uVar4,param_1[0x4b],8,*(uint *)((longlong)param_1 + 0x264) & 0x3fffffff);
  }
  param_1[0x4b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0x80000000;
  uVar4 = FUN_143703a50();
  lVar5 = param_1[0x49];
  lVar6 = (longlong)(*(int *)(param_1 + 0x4a) + -1);
  if (-1 < *(int *)(param_1 + 0x4a) + -1) {
    do {
      if (*(longlong *)(lVar5 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x254)) {
    FUN_143702e10(uVar4,param_1[0x49],8,*(uint *)((longlong)param_1 + 0x254) & 0x3fffffff);
  }
  param_1[0x49] = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x80000000;
  uVar4 = FUN_143703a50();
  lVar5 = param_1[0x47];
  lVar6 = (longlong)(*(int *)(param_1 + 0x48) + -1);
  if (-1 < *(int *)(param_1 + 0x48) + -1) {
    do {
      if (*(longlong *)(lVar5 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x244)) {
    FUN_143702e10(uVar4,param_1[0x47],8,*(uint *)((longlong)param_1 + 0x244) & 0x3fffffff);
  }
  param_1[0x47] = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0x80000000;
  uVar4 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x234)) {
    FUN_143702e10(uVar4,param_1[0x45],8,*(uint *)((longlong)param_1 + 0x234) & 0x3fffffff);
  }
  param_1[0x45] = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x80000000;
  if (param_1[0x2a] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x28] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x27] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x26] != 0) {
    FUN_14370c150();
  }
  FUN_14382ca40(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438468b0 FUN_1438468b0 body=490 status=ok
// SIG undefined FUN_1438468b0(void)

longlong FUN_1438468b0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1437182e0(param_1 + 8,param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar6,param_1 + 0x30,iVar1,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_1 + 0x30),uVar2,iVar1);
  *(int *)(param_1 + 0x38) = iVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar6,param_1 + 0x48,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x48),uVar2,iVar1);
  *(int *)(param_1 + 0x50) = iVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
  *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 0x92);
  *(undefined1 *)(param_1 + 0x93) = *(undefined1 *)(param_2 + 0x93);
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 0x95);
  *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 0x96);
  *(undefined1 *)(param_1 + 0x97) = *(undefined1 *)(param_2 + 0x97);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  uVar2 = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  return param_1;
}



// FUNCTION 143846aa0 FUN_143846aa0 body=335 status=ok
// SIG undefined FUN_143846aa0(void)

longlong FUN_143846aa0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  FUN_1437182e0(param_1 + 8,param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar6,param_1 + 0x30,iVar1,0x10);
  }
  FUN_142ba3370(*(undefined8 *)(param_1 + 0x30),uVar2,iVar1);
  *(int *)(param_1 + 0x38) = iVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  iVar1 = *(int *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar6,param_1 + 0x48,iVar1,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 0x48),uVar2,iVar1);
  *(int *)(param_1 + 0x50) = iVar1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_2 + 0x5c);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  return param_1;
}



// FUNCTION 143846bf0 FUN_143846bf0 body=169 status=ok
// SIG undefined FUN_143846bf0(void)

void FUN_143846bf0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "The hkaiWorld::Listener interface is deprecated. You should use the hkaiWorldSignals interface instead."
            );
  FUN_143732520(0x798abc71,local_208,"World\\hkaiWorld.cpp",0x283);
  FUN_143713520(local_228);
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x230) == (*(uint *)(param_1 + 0x234) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0x228),8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x228) + (longlong)*(int *)(param_1 + 0x230) * 8) =
       param_2;
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + 1;
  return;
}



// FUNCTION 143846ca0 FUN_143846ca0 body=131 status=ok
// SIG undefined FUN_143846ca0(void)

void FUN_143846ca0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x240) == (*(uint *)(param_1 + 0x244) & 0x3fffffff)) {
    FUN_14370c460(uVar2,(longlong *)(param_1 + 0x238),8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x238) + (longlong)*(int *)(param_1 + 0x240) * 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 = param_2, param_2 != 0)) {
    FUN_14370c030(param_2);
  }
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  return;
}



// FUNCTION 143846d30 FUN_143846d30 body=237 status=ok
// SIG undefined FUN_143846d30(void)

void FUN_143846d30(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x68);
  lVar4 = 0;
  lVar3 = lVar4;
  if (lVar2 != 0) {
    lVar3 = FUN_143dfc8b0(lVar2,0,0);
  }
  if (lVar3 != *(longlong *)(param_1 + 0x4c8)) {
    if (*(longlong *)(param_1 + 0x4c8) != 0) {
      FUN_14370c150();
    }
    *(longlong *)(param_1 + 0x4c8) = lVar3;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar3 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x50);
  if (lVar3 != 0) {
    lVar4 = FUN_143dfc450(lVar3,*(undefined8 *)(param_1 + 0x4c8));
  }
  *(longlong *)(param_1 + 0x4d0) = lVar4;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x500) = 0;
  return;
}



// FUNCTION 143846e20 FUN_143846e20 body=213 status=ok
// SIG undefined FUN_143846e20(void)

undefined8 FUN_143846e20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  LPVOID pvVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    iVar3 = FUN_143dfc770();
    if (iVar3 != 0) {
      FUN_143dfc710(*(undefined8 *)(param_1 + 0x4e0));
      uVar1 = *(undefined8 *)(param_1 + 0x4d8);
      pvVar4 = TlsGetValue(DAT_146b7bf70);
      if (pvVar4 == (LPVOID)0x0) {
        pvVar4 = DAT_146b7bf68;
      }
      lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar4 + 0x58),0x100);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x4d0);
        *(longlong *)(lVar5 + 0x10) = lVar5 + 0x30;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(undefined4 *)(lVar5 + 0x1c) = 0x80000018;
        hkBlockStream::init(lVar5,uVar2,0);
      }
      *(longlong *)(param_1 + 0x4d8) = lVar5;
      FUN_143dfc780(*(undefined8 *)(param_1 + 0x4e0),*(undefined8 *)(param_1 + 0x4d0),lVar5);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 143846f00 FUN_143846f00 body=160 status=ok
// SIG undefined FUN_143846f00(void)

void FUN_143846f00(ulonglong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  
  uVar1 = *param_3;
  uVar2 = *param_1;
  *param_1 = uVar2 & 0xfffffffffffffffd | 1;
  puVar3 = param_1;
  plVar4 = (longlong *)(uVar2 & 0xfffffffffffffffc);
  while (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)(plVar4[1] & 0xfffffffffffffffc);
    if ((plVar4[1] & 3U) == 0) {
      local_res8[0] = uVar1;
      (*(code *)((undefined8 *)*plVar4)[2])(plVar4,param_2,local_res8);
      puVar3 = (ulonglong *)(plVar4 + 1);
      plVar4 = plVar5;
    }
    else {
      (**(code **)*plVar4)(plVar4,1);
      *puVar3 = (ulonglong)((uint)*puVar3 & 3) | (ulonglong)plVar5;
      plVar4 = plVar5;
    }
  }
  *param_1 = *param_1 & 0xfffffffffffffffc;
  return;
}



// FUNCTION 143846fa0 FUN_143846fa0 body=179 status=ok
// SIG undefined FUN_143846fa0(void)

void FUN_143846fa0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtfirePostStepCallbacks");
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar4 = 0;
    do {
      local_18 = *param_2;
      uStack_14 = param_2[1];
      uStack_10 = param_2[2];
      uStack_c = param_2[3];
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x228));
      (**(code **)(*plVar1 + 0x28))(plVar1,param_1,&local_18);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x230));
  }
  if (pvVar2 == (LPVOID)0x0) {
    return;
  }
  FUN_14370d750(pvVar2,&DAT_145b8eda0);
  return;
}



// FUNCTION 143847060 FUN_143847060 body=1058 status=ok
// SIG undefined FUN_143847060(void)

int * FUN_143847060(longlong param_1,int *param_2,longlong param_3,ulonglong param_4,
                   undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined4 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  char cVar7;
  LPVOID pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  ushort *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int local_res8 [2];
  int *local_res10;
  int local_res18;
  ulonglong local_res20;
  undefined8 *puVar20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ushort local_b8;
  undefined1 auStack_b6 [6];
  undefined4 auStack_b0 [2];
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uVar21;
  
  uVar19 = 0;
  local_res10 = param_2;
  local_res20 = param_4;
  uVar16 = uVar19;
  if ((*(int *)(param_1 + 0x240) != 0) ||
     (cVar7 = UPrimitiveComponent::IsWelded(), uVar10 = uVar19, cVar7 != '\0')) {
    pvVar8 = TlsGetValue(DAT_146b7bf70);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = DAT_146b7bf68;
    }
    lVar9 = (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar8 + 0x58),0x28);
    if (lVar9 != 0) {
      local_c8 = *param_5;
      uStack_c0 = param_5[1];
      uVar10 = FUN_143845a40(lVar9,&local_c8);
      uVar16 = 0;
      if (uVar10 != 0) {
        uVar16 = uVar10;
      }
    }
    pvVar8 = TlsGetValue(DAT_146b7bf70);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = DAT_146b7bf68;
    }
    lVar9 = (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))();
    uVar10 = 0;
    if (lVar9 != 0) {
      local_c8 = *param_7;
      uStack_c0 = param_7[1];
      uVar11 = FUN_143845a40(lVar9);
      if (uVar11 != 0) {
        uVar10 = uVar11;
      }
    }
  }
  auStack_b6._0_4_ = 0x800;
  local_b8 = 0x40;
  local_90 = CONCAT44(param_6._4_4_,(int)param_6);
  local_80 = -1;
  if (local_90 != 0) {
    local_80 = -1;
    if (*(int *)(*(longlong *)(local_90 + 0x18) + 0x60) != -1) {
      local_80 = *(int *)(*(longlong *)(local_90 + 0x18) + 0x60);
    }
  }
  puVar18 = *(undefined8 **)(param_1 + 0x238);
  puVar20 = puVar18 + *(int *)(param_1 + 0x240);
  local_98 = uVar16;
  local_88 = uVar10;
  local_a0 = param_4;
  local_a8 = param_3;
  for (; puVar18 != puVar20; puVar18 = puVar18 + 1) {
    (**(code **)(*(longlong *)*puVar18 + 0x18))((longlong *)*puVar18,&local_b8);
  }
  cVar7 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar7 == '\0') {
    local_c8 = *param_7;
    uStack_c0 = param_7[1];
    local_78 = *(undefined4 *)param_5;
    uStack_74 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_70 = *(undefined4 *)(param_5 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_5 + 0xc);
    puVar20 = &local_c8;
    FUN_14383e700(*(undefined8 *)(param_1 + 0x130),param_3,local_res20,&local_78,
                  CONCAT44(param_6._4_4_,(int)param_6),puVar20,1);
    uVar21 = (undefined4)((ulonglong)puVar20 >> 0x20);
    iVar17 = *(int *)(*(longlong *)(param_3 + 0x18) + 0x17c);
    local_res18 = iVar17;
    FUN_14375e570(local_68,param_3 + 0x40);
    lVar9 = *(longlong *)(param_3 + 0x18);
    local_58 = *(undefined4 *)(param_3 + 0x70);
    uStack_54 = *(undefined4 *)(param_3 + 0x74);
    uStack_50 = *(undefined4 *)(param_3 + 0x78);
    uStack_4c = *(undefined4 *)(param_3 + 0x7c);
    local_res8[0] = *(int *)(lVar9 + 0x17c);
    FUN_143871020(*(undefined8 *)(param_1 + 0x150),local_res8,*(undefined8 *)(lVar9 + 0x68),
                  local_res20,local_68,CONCAT44(uVar21,*(undefined4 *)(lVar9 + 0x180)));
    local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x17c))
    ;
    FUN_143864680(*(undefined8 *)(param_1 + 0x138),&local_res20,param_3);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0xf0);
    local_res20 = local_res20 & 0xffffffffffffff00;
    local_res8[0] = iVar17;
    FUN_143845b10(lVar9 + 0x18,&local_c8,local_res8,&local_res20);
    lVar9 = *(longlong *)(lVar9 + 0x18);
    pbVar2 = (byte *)(lVar9 + 4 + (longlong)(int)local_c8 * 8);
    *pbVar2 = *pbVar2 | 1;
    *(undefined1 *)(lVar9 + 5 + (longlong)(int)local_c8 * 8) = 0;
    lVar9 = 0;
    if (CONCAT44(param_6._4_4_,(int)param_6) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0xf0);
      local_res20 = local_res20 & 0xffffffffffffff00;
      local_res8[0] = iVar17;
      FUN_143845b10(lVar9 + 0x18,&local_c8,local_res8,&local_res20);
      lVar9 = *(longlong *)(lVar9 + 0x18);
      pbVar2 = (byte *)(lVar9 + 4 + (longlong)(int)local_c8 * 8);
      *pbVar2 = *pbVar2 | 4;
      *(undefined1 *)(lVar9 + 5 + (longlong)(int)local_c8 * 8) = 0;
      lVar9 = CONCAT44(param_6._4_4_,(int)param_6);
    }
    if (0 < *(int *)(param_1 + 0x230)) {
      uVar11 = uVar19;
      do {
        plVar3 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0x228));
        param_6._0_4_ = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x17c);
        (**(code **)(*plVar3 + 0x78))(plVar3,param_1,&param_6,lVar9 != 0);
        uVar15 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar15;
        uVar11 = uVar11 + 8;
        iVar17 = local_res18;
      } while ((int)uVar15 < *(int *)(param_1 + 0x230));
    }
    param_6._0_4_ = *(int *)(*(longlong *)(param_3 + 0x18) + 0x17c);
    FUN_143846f00(param_1 + 0x38,param_1,&param_6);
    *local_res10 = iVar17;
  }
  else {
    if (local_80 == -1) {
      piVar12 = (int *)FUN_143841470(*(undefined8 *)(param_1 + 0x130),&param_6,
                                     *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x178));
      local_80 = *piVar12;
    }
    lVar9 = *(longlong *)(param_1 + 0x4e0);
    FUN_1438699b0(&local_b8);
    uVar6 = local_b8;
    if ((int)(*(int *)(lVar9 + 0x18) + (uint)local_b8) < 0xee1) {
      lVar13 = *(longlong *)(lVar9 + 0x10) + 0x20 + (longlong)*(int *)(lVar9 + 0x18);
    }
    else {
      lVar13 = FUN_143dfc6c0(lVar9);
    }
    uVar15 = (uint)(uVar6 >> 4);
    puVar14 = &local_b8;
    do {
      uVar21 = *(undefined4 *)(puVar14 + 2);
      uVar4 = *(undefined4 *)(puVar14 + 4);
      uVar5 = *(undefined4 *)(puVar14 + 6);
      uVar15 = uVar15 - 1;
      puVar1 = (undefined4 *)((lVar13 - (longlong)&local_b8) + (longlong)puVar14);
      *puVar1 = *(undefined4 *)puVar14;
      puVar1[1] = uVar21;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar14 = puVar14 + 8;
    } while (0 < (int)uVar15);
    *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + (uint)uVar6;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    param_6._0_4_ = local_80;
    FUN_143841620(*(undefined8 *)(param_1 + 0x130),&param_6,param_3 + 0x40);
    *local_res10 = local_80;
  }
  piVar12 = local_res10;
  if (uVar10 != 0) {
    FUN_14370c150(uVar10);
  }
  if (uVar16 != 0) {
    FUN_14370c150(uVar16);
  }
  return piVar12;
}



// FUNCTION 143847490 FUN_143847490 body=683 status=ok
// SIG undefined FUN_143847490(void)

undefined4 *
FUN_143847490(longlong param_1,undefined4 *param_2,longlong param_3,ulonglong param_4,
             undefined4 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  char cVar9;
  LPVOID pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort *puVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined4 local_res8 [2];
  int local_res18 [2];
  ulonglong local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort local_68;
  undefined1 auStack_66 [6];
  undefined4 auStack_60 [2];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined4 local_40;
  
  uVar18 = 0;
  local_res20 = param_4;
  if ((*(int *)(param_1 + 0x240) != 0) ||
     (cVar9 = UPrimitiveComponent::IsWelded(), uVar16 = uVar18, cVar9 != '\0')) {
    pvVar10 = TlsGetValue(DAT_146b7bf70);
    if (pvVar10 == (LPVOID)0x0) {
      pvVar10 = DAT_146b7bf68;
    }
    lVar11 = (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar10 + 0x58),0x28);
    uVar16 = 0;
    if (lVar11 != 0) {
      local_78 = *param_5;
      uStack_74 = param_5[1];
      uStack_70 = param_5[2];
      uStack_6c = param_5[3];
      uVar12 = FUN_143845a40(lVar11,&local_78);
      if (uVar12 != 0) {
        uVar16 = uVar12;
      }
    }
  }
  puVar17 = *(undefined8 **)(param_1 + 0x238);
  local_68 = 0x30;
  auStack_66._0_4_ = 0x40800;
  puVar1 = puVar17 + *(int *)(param_1 + 0x240);
  local_40 = 0xffffffff;
  local_48 = uVar16;
  local_50 = param_4;
  local_58 = param_3;
  for (; puVar17 != puVar1; puVar17 = puVar17 + 1) {
    (**(code **)(*(longlong *)*puVar17 + 0x18))((longlong *)*puVar17,&local_68);
  }
  cVar9 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar9 == '\0') {
    local_78 = *param_5;
    uStack_74 = param_5[1];
    uStack_70 = param_5[2];
    uStack_6c = param_5[3];
    FUN_14383ef80(*(undefined8 *)(param_1 + 0x130),param_3,local_res20,&local_78,0);
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0xf0);
    local_res8[0] = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x94);
    local_res20 = local_res20 & 0xffffffffffffff00;
    FUN_143845b10(lVar11 + 0x18,local_res18,local_res8,&local_res20);
    lVar11 = *(longlong *)(lVar11 + 0x18);
    pbVar3 = (byte *)(lVar11 + 4 + (longlong)local_res18[0] * 8);
    *pbVar3 = *pbVar3 | 0x10;
    *(undefined1 *)(lVar11 + 5 + (longlong)local_res18[0] * 8) = 0;
    uVar12 = uVar18;
    if (0 < *(int *)(param_1 + 0x230)) {
      do {
        plVar4 = *(longlong **)(uVar18 + *(longlong *)(param_1 + 0x228));
        local_res20 = CONCAT44(local_res20._4_4_,
                               *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x94));
        (**(code **)(*plVar4 + 0x88))(plVar4,param_1,&local_res20);
        uVar15 = (int)uVar12 + 1;
        uVar18 = uVar18 + 8;
        uVar12 = (ulonglong)uVar15;
      } while ((int)uVar15 < *(int *)(param_1 + 0x230));
    }
    local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x94));
    FUN_143846f00(param_1 + 0x48,param_1,&local_res20);
    *param_2 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x94);
  }
  else {
    FUN_143841470(*(undefined8 *)(param_1 + 0x130),&local_res20,
                  *(undefined4 *)(*(longlong *)(param_3 + 0x18) + 0x90));
    lVar11 = *(longlong *)(param_1 + 0x4e0);
    local_40 = (undefined4)local_res20;
    FUN_143869a40(&local_68);
    uVar8 = local_68;
    if ((int)(*(int *)(lVar11 + 0x18) + (uint)local_68) < 0xee1) {
      lVar13 = *(longlong *)(lVar11 + 0x10) + 0x20 + (longlong)*(int *)(lVar11 + 0x18);
    }
    else {
      lVar13 = FUN_143dfc6c0(lVar11);
    }
    uVar15 = (uint)(uVar8 >> 4);
    puVar14 = &local_68;
    do {
      uVar5 = *(undefined4 *)(puVar14 + 2);
      uVar6 = *(undefined4 *)(puVar14 + 4);
      uVar7 = *(undefined4 *)(puVar14 + 6);
      uVar15 = uVar15 - 1;
      puVar2 = (undefined4 *)((lVar13 - (longlong)&local_68) + (longlong)puVar14);
      *puVar2 = *(undefined4 *)puVar14;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar14 = puVar14 + 8;
    } while (0 < (int)uVar15);
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + (uint)uVar8;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    local_res8[0] = (undefined4)local_res20;
    FUN_143841850(*(undefined8 *)(param_1 + 0x130),local_res8,param_3 + 0x30);
    *param_2 = (undefined4)local_res20;
  }
  if (uVar16 != 0) {
    FUN_14370c150(uVar16);
  }
  return param_2;
}



// FUNCTION 143847740 FUN_143847740 body=29 status=ok
// SIG undefined FUN_143847740(void)

undefined8 FUN_143847740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14389fe20(param_2,param_3);
  return param_2;
}



// FUNCTION 143847760 FUN_143847760 body=29 status=ok
// SIG undefined FUN_143847760(void)

undefined8 FUN_143847760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1438a01d0(param_2,param_3);
  return param_2;
}



// FUNCTION 143847780 FUN_143847780 body=29 status=ok
// SIG undefined FUN_143847780(void)

undefined8 FUN_143847780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1438a0440(param_2,param_3);
  return param_2;
}



// FUNCTION 1438477a0 makeProcessingContext body=37 status=ok
// SIG undefined makeProcessingContext(void)

undefined8
hkaiWorld::makeProcessingContext
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined4 param_5)

{
  FUN_14389fac0(param_2,param_1,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1438477d0 FUN_1438477d0 body=102 status=ok
// SIG undefined FUN_1438477d0(void)

void FUN_1438477d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    plVar1 = *(longlong **)(param_1 + 0x228);
    uVar4 = uVar2;
    while (iVar3 = (int)uVar4, *plVar1 != param_2) {
      uVar4 = (ulonglong)(iVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
      if ((longlong)*(int *)(param_1 + 0x230) <= (longlong)uVar2) {
        return;
      }
    }
    if (iVar3 != -1) {
      *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + -1;
      if (*(int *)(param_1 + 0x230) != iVar3) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar3 * 8) =
             *(undefined8 *)
              (*(longlong *)(param_1 + 0x228) + (longlong)*(int *)(param_1 + 0x230) * 8);
      }
    }
  }
  return;
}



// FUNCTION 143847840 FUN_143847840 body=187 status=ok
// SIG undefined FUN_143847840(void)

void FUN_143847840(longlong param_1,undefined8 param_2,byte param_3,byte param_4,undefined1 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  ushort local_res18 [8];
  
  local_res18[0] = local_res18[0] & 0xff00;
  plVar1 = (longlong *)(param_1 + 0x18);
  FUN_143845b10(plVar1,local_res8,param_2,local_res18);
  lVar3 = (longlong)local_res8._0_4_ * 8;
  lVar2 = lVar3 + *plVar1;
  bVar4 = *(byte *)(lVar3 + 4 + *plVar1);
  if ((param_3 & bVar4) == 0) {
    *(byte *)(lVar2 + 4) = bVar4 | param_4;
  }
  else {
    *(byte *)(lVar2 + 4) = ~param_3 & bVar4;
    if ((~param_3 & bVar4) == 0) {
      uVar6 = local_res8._4_4_;
      if ((*(uint *)(param_1 + 0x30) < uVar6) ||
         (lVar5 = *(longlong *)(param_1 + 0x28) + (longlong)(int)uVar6 * 8,
         *(int *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)(int)uVar6 * 8) != local_res8._0_4_)
         ) {
        lVar5 = FUN_14383df10(plVar1,*plVar1 + lVar3);
      }
      FUN_14383dfe0(plVar1,lVar5);
    }
  }
  *(undefined1 *)(lVar2 + 5) = param_5;
  return;
}



// FUNCTION 143847900 FUN_143847900 body=179 status=ok
// SIG undefined FUN_143847900(void)

void FUN_143847900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x240)) {
    plVar1 = *(longlong **)(param_1 + 0x238);
    uVar4 = uVar2;
    do {
      iVar3 = (int)uVar4;
      if (*plVar1 == param_2) goto LAB_143847956;
      uVar4 = (ulonglong)(iVar3 + 1);
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 1;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x240));
  }
  iVar3 = -1;
LAB_143847956:
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  if (*(longlong *)((longlong)iVar3 * 8 + *(longlong *)(param_1 + 0x238)) != 0) {
    FUN_14370c150();
  }
  *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + -1;
  if (*(int *)(param_1 + 0x240) != iVar3) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x238) + (longlong)iVar3 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x238) + (longlong)*(int *)(param_1 + 0x240) * 8);
  }
  return;
}



// FUNCTION 1438479c0 FUN_1438479c0 body=40 status=ok
// SIG undefined FUN_1438479c0(void)

void FUN_1438479c0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x17c);
  FUN_1438479f0(param_1,local_res10,param_3 != 0);
  return;
}



// FUNCTION 1438479f0 FUN_1438479f0 body=747 status=ok
// SIG undefined FUN_1438479f0(void)

void FUN_1438479f0(longlong param_1,int *param_2,byte param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ushort uVar5;
  char cVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  ushort local_68;
  undefined4 uStack_66;
  undefined8 uStack_60;
  int local_58;
  byte local_54;
  
  puVar10 = *(undefined8 **)(param_1 + 0x238);
  local_68 = 0x20;
  uStack_66 = 0x10800;
  local_58 = *param_2;
  puVar1 = puVar10 + *(int *)(param_1 + 0x240);
  local_54 = param_3;
  for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
    (**(code **)(*(longlong *)*puVar10 + 0x18))((longlong *)*puVar10,&local_68);
  }
  cVar6 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar6 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    AK::MemoryMgr::StartProfileThreadUsage((long)&local_68);
    uVar5 = local_68;
    if ((int)(*(int *)(lVar2 + 0x18) + (uint)local_68) < 0xee1) {
      lVar7 = *(longlong *)(lVar2 + 0x10) + 0x20 + (longlong)*(int *)(lVar2 + 0x18);
    }
    else {
      lVar7 = FUN_143dfc6c0(lVar2);
    }
    uVar9 = (uint)(uVar5 >> 4);
    puVar8 = &local_68;
    do {
      uVar4 = *(undefined8 *)(puVar8 + 4);
      uVar9 = uVar9 - 1;
      puVar1 = (undefined8 *)((longlong)puVar8 + (lVar7 - (longlong)&local_68));
      *puVar1 = *(undefined8 *)puVar8;
      puVar1[1] = uVar4;
      puVar8 = puVar8 + 8;
    } while (0 < (int)uVar9);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + (uint)uVar5;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  lVar2 = *(longlong *)
           ((longlong)*param_2 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38));
  if (lVar2 != 0) {
    FUN_14370c030(lVar2);
  }
  uVar13 = 0;
  bVar12 = 0;
  uVar11 = uVar13;
  if (param_3 != 0) {
    uVar14 = *(ulonglong *)
              ((longlong)*param_2 * 0x100 + 0x10 +
              *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38));
    bVar12 = param_3 & uVar14 != 0;
    uVar11 = 0;
    if ((bVar12 != 0) && (uVar11 = uVar14, uVar14 != 0)) {
      FUN_14370c030(uVar14);
    }
  }
  local_res18[0] = *param_2;
  FUN_143863ce0(*(undefined8 *)(param_1 + 0x138),local_res18);
  local_res8[0] = *param_2;
  FUN_143865080(*(undefined8 *)(param_1 + 0x138),local_res8);
  local_res10[0] = *param_2;
  FUN_143873430(*(undefined8 *)(param_1 + 0x150),local_res10);
  local_res20[0] = *param_2;
  FUN_143841050(*(undefined8 *)(param_1 + 0x130),local_res20,bVar12 != 0);
  local_78 = *param_2;
  FUN_143847840(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0xf0),&local_78,1,2,0);
  if (bVar12 != 0) {
    local_74 = *param_2;
    FUN_143847840(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0xf0),&local_74,4,8,0);
    if (*(char *)(uVar11 + 0x28) == '\x01') {
      lVar7 = *(longlong *)(uVar11 + 0x18);
    }
    else {
      lVar7 = FUN_142fbd8b0();
    }
    *(undefined4 *)(lVar7 + 0x60) = 0xffffffff;
    FUN_143896d90(uVar11);
  }
  if (*(char *)(lVar2 + 0x28) == '\x01') {
    lVar7 = *(longlong *)(lVar2 + 0x18);
  }
  else {
    lVar7 = FUN_142fbda20();
  }
  *(undefined4 *)(lVar7 + 0x17c) = 0xffffffff;
  uVar14 = uVar13;
  if (0 < *(int *)(param_1 + 0x230)) {
    do {
      plVar3 = *(longlong **)(uVar14 + *(longlong *)(param_1 + 0x228));
      local_70 = *param_2;
      (**(code **)(*plVar3 + 0x80))(plVar3,param_1,&local_70,bVar12);
      uVar9 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar9;
      uVar14 = uVar14 + 8;
    } while ((int)uVar9 < *(int *)(param_1 + 0x230));
  }
  local_6c = *param_2;
  FUN_143846f00(param_1 + 0x40,param_1,&local_6c);
  if (uVar11 != 0) {
    FUN_14370c150(uVar11);
  }
  if (lVar2 != 0) {
    FUN_14370c150(lVar2);
  }
  return;
}



// FUNCTION 143847ce0 FUN_143847ce0 body=33 status=ok
// SIG undefined FUN_143847ce0(void)

void FUN_143847ce0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + 0x94);
  FUN_143847d10(param_1,local_res10);
  return;
}



// FUNCTION 143847d10 FUN_143847d10 body=498 status=ok
// SIG undefined FUN_143847d10(void)

void FUN_143847d10(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ushort uVar5;
  char cVar6;
  longlong lVar7;
  ushort *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  ushort local_58;
  undefined4 uStack_56;
  undefined8 uStack_50;
  int local_48;
  
  local_48 = *param_2;
  puVar10 = *(undefined8 **)(param_1 + 0x238);
  local_58 = 0x20;
  uStack_56 = 0x50800;
  puVar1 = puVar10 + *(int *)(param_1 + 0x240);
  for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
    (**(code **)(*(longlong *)*puVar10 + 0x18))((longlong *)*puVar10,&local_58);
  }
  cVar6 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar6 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    AK::MemoryMgr::StartProfileThreadUsage((long)&local_58);
    uVar5 = local_58;
    if ((int)(*(int *)(lVar2 + 0x18) + (uint)local_58) < 0xee1) {
      lVar7 = *(longlong *)(lVar2 + 0x10) + 0x20 + (longlong)*(int *)(lVar2 + 0x18);
    }
    else {
      lVar7 = FUN_143dfc6c0(lVar2);
    }
    uVar9 = (uint)(uVar5 >> 4);
    puVar8 = &local_58;
    do {
      uVar4 = *(undefined8 *)(puVar8 + 4);
      uVar9 = uVar9 - 1;
      puVar1 = (undefined8 *)((lVar7 - (longlong)&local_58) + (longlong)puVar8);
      *puVar1 = *(undefined8 *)puVar8;
      puVar1[1] = uVar4;
      puVar8 = puVar8 + 8;
    } while (0 < (int)uVar9);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + (uint)uVar5;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  lVar2 = *(longlong *)
           ((longlong)*param_2 * 0x100 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38));
  if (lVar2 != 0) {
    FUN_14370c030(lVar2);
  }
  local_res8[0] = *param_2;
  FUN_143841370(*(undefined8 *)(param_1 + 0x130),local_res8);
  if (*(char *)(lVar2 + 0x28) == '\x01') {
    lVar7 = *(longlong *)(lVar2 + 0x18);
  }
  else {
    lVar7 = FUN_142fbdb90();
  }
  *(undefined4 *)(lVar7 + 0x94) = 0xffffffff;
  local_res10[0] = *param_2;
  FUN_143847840(*(undefined8 *)(*(longlong *)(param_1 + 0x138) + 0xf0),local_res10,0x10,0x20,0);
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x228));
      local_res18[0] = *param_2;
      (**(code **)(*plVar3 + 0x90))(plVar3,param_1,local_res18);
      iVar11 = iVar11 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar11 < *(int *)(param_1 + 0x230));
  }
  local_res20[0] = *param_2;
  FUN_143846f00(param_1 + 0x50,param_1,local_res20);
  if (lVar2 != 0) {
    FUN_14370c150(lVar2);
  }
  return;
}



// FUNCTION 143847f10 FUN_143847f10 body=365 status=ok
// SIG undefined FUN_143847f10(void)

undefined8 * FUN_143847f10(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  
  puVar3 = (undefined8 *)0x0;
  param_1[1] = 0;
  *param_1 = hkaiReferencedArray<hkaiUserEdgeUtils::UserEdgeSetup>::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  iVar1 = (int)((param_2[1] - *param_2) / 0xe0);
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar5 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar3 = (undefined8 *)FUN_143702d60(uVar2,0xe0,local_res8);
  }
  param_1[3] = puVar3;
  *(int *)(param_1 + 4) = iVar5;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  lVar4 = (longlong)iVar1;
  *(int *)((longlong)param_1 + 0x24) = iVar5;
  if (0 < iVar1) {
    lVar6 = *param_2 - (longlong)puVar3;
    do {
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = ((undefined8 *)(lVar6 + (longlong)puVar3))[1];
        *puVar3 = *(undefined8 *)(lVar6 + (longlong)puVar3);
        puVar3[1] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x18);
        puVar3[2] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x10);
        puVar3[3] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x28);
        puVar3[4] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x20);
        puVar3[5] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x38);
        puVar3[6] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x30);
        puVar3[7] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x48);
        puVar3[8] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x40);
        puVar3[9] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x58);
        puVar3[10] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x50);
        puVar3[0xb] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x68);
        puVar3[0xc] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x60);
        puVar3[0xd] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x78);
        puVar3[0xe] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x70);
        puVar3[0xf] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x88);
        puVar3[0x10] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x80);
        puVar3[0x11] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x98);
        puVar3[0x12] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0x90);
        puVar3[0x13] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0xa8);
        puVar3[0x14] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0xa0);
        puVar3[0x15] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0xb8);
        puVar3[0x16] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0xb0);
        puVar3[0x17] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 200);
        puVar3[0x18] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0xc0);
        puVar3[0x19] = uVar2;
        uVar2 = *(undefined8 *)((longlong)puVar3 + lVar6 + 0xd8);
        puVar3[0x1a] = *(undefined8 *)((longlong)puVar3 + lVar6 + 0xd0);
        puVar3[0x1b] = uVar2;
      }
      puVar3 = puVar3 + 0x1c;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return param_1;
}



// FUNCTION 143848080 FUN_143848080 body=711 status=ok
// SIG undefined FUN_143848080(void)

void FUN_143848080(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char cVar6;
  LPVOID pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ushort *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong local_88;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ushort local_48;
  undefined1 auStack_46 [6];
  undefined4 auStack_40 [4];
  ulonglong local_30;
  
  uVar17 = 0;
  if ((*(int *)(param_1 + 0x240) != 0) ||
     (cVar6 = UPrimitiveComponent::IsWelded(), uVar14 = uVar17, cVar6 != '\0')) {
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    lVar8 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar7 + 0x58),0x28);
    uVar14 = 0;
    if (lVar8 != 0) {
      local_78 = *param_3;
      lStack_70 = param_3[1];
      uVar9 = FUN_143847f10(lVar8,&local_78);
      if (uVar9 != 0) {
        uVar14 = uVar9;
      }
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x238);
  local_48 = 0x20;
  auStack_46._0_4_ = 0x80800;
  puVar16 = puVar15 + *(int *)(param_1 + 0x240);
  local_30 = uVar14;
  auStack_40[2] = param_2;
  for (; puVar15 != puVar16; puVar15 = puVar15 + 1) {
    (**(code **)(*(longlong *)*puVar15 + 0x18))((longlong *)*puVar15,&local_48);
  }
  cVar6 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar6 == '\0') {
    local_78 = *param_3;
    lStack_70 = param_3[1];
    local_88 = 0;
    local_80 = 0;
    local_7c = 0x80000000;
    FUN_1438317d0(&local_78,*(undefined8 *)(param_1 + 0x130),&local_88,0x3d4ccccd);
    lStack_70 = (longlong)local_80 * 0x50 + local_88;
    local_78 = local_88;
    FUN_143863bf0(*(undefined8 *)(param_1 + 0x138),param_2,&local_78);
    puVar16 = *(undefined8 **)(param_1 + 0x228);
    uVar9 = (ulonglong)((longlong)(puVar16 + *(int *)(param_1 + 0x230)) + (7 - (longlong)puVar16))
            >> 3;
    if (puVar16 + *(int *)(param_1 + 0x230) < puVar16) {
      uVar9 = uVar17;
    }
    if (uVar9 != 0) {
      do {
        lStack_70 = (longlong)local_80 * 0x50 + local_88;
        local_78 = local_88;
        lVar8 = local_78;
        local_78._0_4_ = (undefined4)local_88;
        local_78._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        local_68 = (undefined4)local_78;
        uStack_64 = local_78._4_4_;
        local_78 = lVar8;
        uStack_60 = lStack_70;
        (**(code **)(*(longlong *)*puVar16 + 0xc0))((longlong *)*puVar16,param_1,param_2,&local_68);
        uVar17 = uVar17 + 1;
        puVar16 = puVar16 + 1;
      } while (uVar17 != uVar9);
    }
    lStack_70 = (longlong)local_80 * 0x50 + local_88;
    local_78 = local_88;
    lVar8 = local_78;
    local_78._0_4_ = (undefined4)local_88;
    local_78._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_60._0_4_ = (undefined4)local_78;
    uStack_60._4_4_ = local_78._4_4_;
    local_78 = lVar8;
    local_68 = param_2;
    uStack_58 = lStack_70;
    FUN_1438484d0(param_1 + 0xc0,param_1,&local_68);
    uVar11 = FUN_143703a50();
    local_80 = 0;
    if (-1 < (int)local_7c) {
      FUN_143702e10(uVar11,local_88,0x50,local_7c & 0x3fffffff);
    }
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x4e0);
    CAkVPLSrcNode::Stop(&local_48);
    uVar5 = local_48;
    if ((int)(*(int *)(lVar8 + 0x18) + (uint)local_48) < 0xee1) {
      lVar10 = *(longlong *)(lVar8 + 0x10) + 0x20 + (longlong)*(int *)(lVar8 + 0x18);
    }
    else {
      lVar10 = FUN_143dfc6c0(lVar8);
    }
    uVar13 = (uint)(uVar5 >> 4);
    puVar12 = &local_48;
    do {
      uVar2 = *(undefined4 *)(puVar12 + 2);
      uVar3 = *(undefined4 *)(puVar12 + 4);
      uVar4 = *(undefined4 *)(puVar12 + 6);
      uVar13 = uVar13 - 1;
      puVar1 = (undefined4 *)((lVar10 - (longlong)&local_48) + (longlong)puVar12);
      *puVar1 = *(undefined4 *)puVar12;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      puVar12 = puVar12 + 8;
    } while (0 < (int)uVar13);
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + (uint)uVar5;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  }
  if (uVar14 != 0) {
    FUN_14370c150(uVar14);
  }
  return;
}



// FUNCTION 143848350 FUN_143848350 body=382 status=ok
// SIG undefined FUN_143848350(void)

int * FUN_143848350(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  char cVar7;
  longlong lVar8;
  ushort *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort local_28;
  undefined1 auStack_26 [6];
  int aiStack_20 [6];
  
  aiStack_20[2] = *(int *)(param_1 + 0x430);
  *param_2 = aiStack_20[2];
  auStack_26._0_4_ = 0x60800;
  *(int *)(param_1 + 0x430) = aiStack_20[2] + 1;
  puVar11 = *(undefined8 **)(param_1 + 0x238);
  local_28 = 0x20;
  puVar12 = puVar11 + *(int *)(param_1 + 0x240);
  for (; puVar11 != puVar12; puVar11 = puVar11 + 1) {
    (**(code **)(*(longlong *)*puVar11 + 0x18))((longlong *)*puVar11,&local_28);
  }
  cVar7 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar7 == '\0') {
    FUN_143863b90(*(undefined8 *)(param_1 + 0x138),*param_2);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
    uVar6 = local_28;
    if ((int)(*(int *)(lVar2 + 0x18) + (uint)local_28) < 0xee1) {
      lVar8 = *(longlong *)(lVar2 + 0x10) + 0x20 + (longlong)*(int *)(lVar2 + 0x18);
    }
    else {
      lVar8 = FUN_143dfc6c0(lVar2);
    }
    uVar10 = (uint)(uVar6 >> 4);
    puVar9 = &local_28;
    do {
      uVar3 = *(undefined4 *)(puVar9 + 2);
      uVar4 = *(undefined4 *)(puVar9 + 4);
      uVar5 = *(undefined4 *)(puVar9 + 6);
      uVar10 = uVar10 - 1;
      puVar1 = (undefined4 *)((lVar8 - (longlong)&local_28) + (longlong)puVar9);
      *puVar1 = *(undefined4 *)puVar9;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar9 = puVar9 + 8;
    } while (0 < (int)uVar10);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + (uint)uVar6;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x228);
  uVar14 = 0;
  uVar13 = (ulonglong)((longlong)(puVar12 + *(int *)(param_1 + 0x230)) + (7 - (longlong)puVar12)) >>
           3;
  if (puVar12 + *(int *)(param_1 + 0x230) < puVar12) {
    uVar13 = uVar14;
  }
  if (uVar13 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar12 + 0xb8))((longlong *)*puVar12,param_1,*param_2);
      uVar14 = uVar14 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar14 != uVar13);
  }
  FUN_143848570(param_1 + 0xb8,param_1,*param_2);
  return param_2;
}



// FUNCTION 1438484d0 FUN_1438484d0 body=154 status=ok
// SIG undefined FUN_1438484d0(void)

void FUN_1438484d0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  
  *param_1 = *param_1 & 0xfffffffffffffffd;
  *param_1 = *param_1 | 1;
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  puVar3 = param_1;
  while (plVar2 != (longlong *)0x0) {
    puVar1 = (ulonglong *)(plVar2 + 1);
    plVar4 = (longlong *)(plVar2[1] & 0xfffffffffffffffc);
    if ((*puVar1 & 3) == 0) {
      (*(code *)((undefined8 *)*plVar2)[2])(plVar2,param_2,param_3);
      plVar2 = plVar4;
      puVar3 = puVar1;
    }
    else {
      (**(code **)*plVar2)(plVar2,1);
      *puVar3 = (ulonglong)((uint)*puVar3 & 3) | (ulonglong)plVar4;
      plVar2 = plVar4;
    }
  }
  *param_1 = *param_1 & 0xfffffffffffffffc;
  return;
}



// FUNCTION 143848570 FUN_143848570 body=137 status=ok
// SIG undefined FUN_143848570(void)

void FUN_143848570(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  
  *param_1 = *param_1 & 0xfffffffffffffffd;
  *param_1 = *param_1 | 1;
  plVar1 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  uVar3 = param_3;
  puVar4 = param_1;
  if (plVar1 != (longlong *)0x0) {
    while( true ) {
      puVar5 = (ulonglong *)(plVar1 + 1);
      plVar2 = (longlong *)(plVar1[1] & 0xfffffffffffffffc);
      if ((*puVar5 & 3) == 0) {
        (*(code *)((undefined8 *)*plVar1)[2])(plVar1,param_2,uVar3);
      }
      else {
        (**(code **)*plVar1)(plVar1,1);
        *puVar4 = (ulonglong)((uint)*puVar4 & 3) | (ulonglong)plVar2;
        puVar5 = puVar4;
      }
      if (plVar2 == (longlong *)0x0) break;
      plVar1 = plVar2;
      uVar3 = param_3 & 0xffffffff;
      puVar4 = puVar5;
    }
  }
  *param_1 = *param_1 & 0xfffffffffffffffc;
  return;
}



// FUNCTION 143848600 FUN_143848600 body=283 status=ok
// SIG undefined FUN_143848600(void)

void FUN_143848600(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  ushort *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ushort local_28;
  undefined4 uStack_26;
  undefined8 uStack_20;
  undefined4 local_18;
  
  puVar9 = *(undefined8 **)(param_1 + 0x238);
  local_28 = 0x20;
  uStack_26 = 0x90800;
  puVar1 = puVar9 + *(int *)(param_1 + 0x240);
  local_18 = param_2;
  for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
    (**(code **)(*(longlong *)*puVar9 + 0x18))((longlong *)*puVar9,&local_28);
  }
  cVar5 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar5 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    AK::MemoryMgr::StartProfileThreadUsage((long)&local_28);
    uVar4 = local_28;
    if ((int)(*(int *)(lVar2 + 0x18) + (uint)local_28) < 0xee1) {
      lVar6 = *(longlong *)(lVar2 + 0x10) + 0x20 + (longlong)*(int *)(lVar2 + 0x18);
    }
    else {
      lVar6 = FUN_143dfc6c0(lVar2);
    }
    uVar8 = (uint)(uVar4 >> 4);
    puVar7 = &local_28;
    do {
      uVar3 = *(undefined8 *)(puVar7 + 4);
      uVar8 = uVar8 - 1;
      puVar1 = (undefined8 *)((lVar6 - (longlong)&local_28) + (longlong)puVar7);
      *puVar1 = *(undefined8 *)puVar7;
      puVar1[1] = uVar3;
      puVar7 = puVar7 + 8;
    } while (0 < (int)uVar8);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + (uint)uVar4;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    return;
  }
  FUN_143864d10(*(undefined8 *)(param_1 + 0x138),param_2);
  FUN_143848570(param_1 + 0xd0,param_1,param_2);
  return;
}



// FUNCTION 143848720 FUN_143848720 body=479 status=ok
// SIG undefined FUN_143848720(void)

void FUN_143848720(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ushort local_28;
  undefined4 uStack_26;
  longlong alStack_20 [3];
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x250) == (*(uint *)(param_1 + 0x254) & 0x3fffffff)) {
    FUN_14370c460(uVar5,(longlong *)(param_1 + 0x248),8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x248) + (longlong)*(int *)(param_1 + 0x250) * 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 = param_2, param_2 != 0)) {
    FUN_14370c030(param_2);
  }
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x238);
  local_28 = 0x20;
  uStack_26 = 0xa0800;
  puVar2 = puVar10 + *(int *)(param_1 + 0x240);
  alStack_20[1] = param_2;
  for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
    (**(code **)(*(longlong *)*puVar10 + 0x18))((longlong *)*puVar10,&local_28);
  }
  cVar4 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar4 != '\0') {
    lVar11 = *(longlong *)(param_1 + 0x4e0);
    FUN_1438699a0(&local_28);
    uVar3 = local_28;
    if ((int)(*(int *)(lVar11 + 0x18) + (uint)local_28) < 0xee1) {
      lVar6 = *(longlong *)(lVar11 + 0x10) + 0x20 + (longlong)*(int *)(lVar11 + 0x18);
    }
    else {
      lVar6 = FUN_143dfc6c0(lVar11);
    }
    uVar8 = (uint)(uVar3 >> 4);
    puVar7 = &local_28;
    do {
      uVar5 = *(undefined8 *)(puVar7 + 4);
      uVar8 = uVar8 - 1;
      puVar2 = (undefined8 *)((lVar6 - (longlong)&local_28) + (longlong)puVar7);
      *puVar2 = *(undefined8 *)puVar7;
      puVar2[1] = uVar5;
      puVar7 = puVar7 + 8;
    } while (0 < (int)uVar8);
    *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + (uint)uVar3;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    return;
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1438713a0(*(longlong *)(param_1 + 0x150),param_2);
  }
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar11 = 0;
    do {
      plVar1 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0x228));
      (**(code **)(*plVar1 + 0xa8))(plVar1,param_1,param_2);
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x230));
  }
  FUN_1438484d0(param_1 + 0x80,param_1,param_2);
  return;
}



// FUNCTION 143848900 FUN_143848900 body=504 status=ok
// SIG undefined FUN_143848900(void)

void FUN_143848900(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ushort local_38;
  undefined1 auStack_36 [6];
  undefined4 auStack_30 [2];
  longlong local_28;
  int local_20;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar17 = 0;
  if (0 < *(int *)(param_1 + 0x250)) {
    plVar9 = *(longlong **)(param_1 + 0x248);
    uVar11 = uVar17;
    uVar15 = uVar17;
    do {
      iVar14 = (int)uVar15;
      if (*plVar9 == param_2) goto LAB_143848966;
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar11 = uVar11 + 1;
      plVar9 = plVar9 + 1;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x250));
  }
  iVar14 = -1;
LAB_143848966:
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  puVar16 = *(undefined8 **)(param_1 + 0x238);
  local_38 = 0x20;
  auStack_36._0_4_ = 0xb0800;
  puVar1 = puVar16 + *(int *)(param_1 + 0x240);
  local_28 = param_2;
  local_20 = iVar14;
  for (; puVar16 != puVar1; puVar16 = puVar16 + 1) {
    (**(code **)(*(longlong *)*puVar16 + 0x18))((longlong *)*puVar16,&local_38);
  }
  cVar8 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar8 == '\0') {
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_143873530(*(longlong *)(param_1 + 0x150),param_2);
    }
    uVar11 = uVar17;
    if (0 < *(int *)(param_1 + 0x230)) {
      do {
        plVar9 = *(longlong **)(uVar17 + *(longlong *)(param_1 + 0x228));
        (**(code **)(*plVar9 + 0xb0))(plVar9,param_1,iVar14,param_2);
        uVar13 = (int)uVar11 + 1;
        uVar17 = uVar17 + 8;
        uVar11 = (ulonglong)uVar13;
      } while ((int)uVar13 < *(int *)(param_1 + 0x230));
    }
    FUN_1438484d0(param_1 + 0x88,param_1,param_2);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x4e0);
    FUN_1438699a0(&local_38);
    uVar7 = local_38;
    if ((int)(*(int *)(lVar3 + 0x18) + (uint)local_38) < 0xee1) {
      lVar10 = *(longlong *)(lVar3 + 0x10) + 0x20 + (longlong)*(int *)(lVar3 + 0x18);
    }
    else {
      lVar10 = FUN_143dfc6c0(lVar3);
    }
    uVar13 = (uint)(uVar7 >> 4);
    puVar12 = &local_38;
    do {
      uVar4 = *(undefined4 *)(puVar12 + 2);
      uVar5 = *(undefined4 *)(puVar12 + 4);
      uVar6 = *(undefined4 *)(puVar12 + 6);
      uVar13 = uVar13 - 1;
      puVar2 = (undefined4 *)((lVar10 - (longlong)&local_38) + (longlong)puVar12);
      *puVar2 = *(undefined4 *)puVar12;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar12 = puVar12 + 8;
    } while (0 < (int)uVar13);
    *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + (uint)uVar7;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  }
  if (*(longlong *)((longlong)iVar14 * 8 + *(longlong *)(param_1 + 0x248)) != 0) {
    FUN_14370c150();
  }
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + -1;
  if (*(int *)(param_1 + 0x250) != iVar14) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x248) + (longlong)iVar14 * 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0x248) + (longlong)*(int *)(param_1 + 0x250) * 8);
  }
  return;
}



// FUNCTION 143848b00 FUN_143848b00 body=45 status=ok
// SIG undefined FUN_143848b00(void)

void FUN_143848b00(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x124);
  uVar2 = *(undefined4 *)(param_1 + 0x128);
  uVar3 = *(undefined4 *)(param_1 + 300);
  *param_2 = *(undefined4 *)(param_1 + 0x120);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[0x24] = 0;
  FGenericPlatformString::Memcpy(param_2 + 4,param_1 + 0x1a0,0x80);
  return;
}



// FUNCTION 143848b30 FUN_143848b30 body=307 status=ok
// SIG undefined FUN_143848b30(void)

void FUN_143848b30(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint local_res8 [2];
  undefined2 local_38;
  undefined4 local_36;
  longlong local_28;
  longlong lStack_20;
  
  puVar4 = *(undefined8 **)(param_1 + 0x238);
  local_38 = 0x10;
  local_36 = 0x110800;
  puVar1 = puVar4 + *(int *)(param_1 + 0x240);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(longlong *)*puVar4 + 0x18))((longlong *)*puVar4,&local_38);
  }
  local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x130) + 0x40);
  lVar3 = (longlong)(int)local_res8[0];
  if (local_res8[0] == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_143702d60(&PTR_vftable_1467f0638,0x60,local_res8);
  }
  uVar5 = 0x80000000;
  if (local_res8[0] != 0) {
    uVar5 = local_res8[0];
  }
  lVar3 = lVar3 * 0x60 + lVar2;
  local_28 = lVar2;
  lStack_20 = lVar3;
  FUN_14383f780(*(undefined8 *)(param_1 + 0x130),&local_28);
  local_28 = lVar2;
  lStack_20 = lVar3;
  FUN_1438745b0(*(undefined8 *)(param_1 + 0x150),param_2,*(char *)(param_1 + 0x220) != '\0',
                &local_28);
  if (-1 < (int)uVar5) {
    FUN_143702e10(&PTR_vftable_1467f0638,lVar2,0x60,uVar5 & 0x3fffffff);
  }
  return;
}



// FUNCTION 143848c70 FUN_143848c70 body=539 status=ok
// SIG undefined FUN_143848c70(void)

void FUN_143848c70(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_48;
  uint local_40;
  uint local_3c;
  longlong local_38;
  uint local_30;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_30 = uVar3;
  if (uVar3 == 0) {
    local_38 = 0;
  }
  else {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    uVar6 = uVar3 * 8 + 0x7f & 0xffffff80;
    local_38 = *(longlong *)((longlong)pvVar4 + 0x18);
    uVar8 = (int)uVar6 + local_38;
    if ((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar6) ||
       (*(ulonglong *)((longlong)pvVar4 + 0x20) < uVar8)) {
      local_38 = FUN_1437138c0(pvVar4);
    }
    else {
      *(ulonglong *)((longlong)pvVar4 + 0x18) = uVar8;
    }
  }
  local_3c = uVar3 | 0x80000000;
  local_48 = local_38;
  uVar5 = FUN_143703a50();
  if ((int)(local_3c & 0x3fffffff) < (int)uVar3) {
    uVar1 = (local_3c & 0x3fffffff) * 2;
    uVar6 = uVar3;
    if ((int)uVar3 < (int)uVar1) {
      uVar6 = uVar1;
    }
    FUN_14370c310(uVar5,&local_48,uVar6,8);
  }
  local_40 = uVar3;
  (**(code **)(*param_2 + 8))(param_2,local_48,uVar3,8);
  uVar8 = uVar7;
  if (0 < (int)uVar3) {
    do {
      (**(code **)(*param_2 + 0x18))
                (param_2,*(undefined8 *)(local_48 + uVar7 * 8),
                 (longlong)(int)uVar8 * 0x40 + *param_1,0x40);
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while ((longlong)uVar7 < (longlong)(int)uVar3);
  }
  (**(code **)(*param_2 + 0x38))(param_2,local_48,uVar3,0,8);
  (**(code **)(*param_2 + 0x48))(param_2,local_48,uVar3);
  (**(code **)(*param_2 + 0x10))(param_2,local_48,uVar3,8);
  uVar3 = local_30;
  lVar2 = local_38;
  if (local_38 == local_48) {
    local_40 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = uVar3 * 8 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar2 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar2)) {
    FUN_143713ff0(pvVar4,lVar2);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar2;
  }
  uVar5 = FUN_143703a50();
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar5,local_48,8,local_3c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143848e90 FUN_143848e90 body=552 status=ok
// SIG undefined FUN_143848e90(void)

void FUN_143848e90(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong local_48;
  uint local_40;
  uint local_3c;
  longlong local_38;
  uint local_30;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar9 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  local_30 = uVar2;
  if (uVar2 == 0) {
    local_38 = 0;
  }
  else {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    uVar5 = uVar2 * 8 + 0x7f & 0xffffff80;
    local_38 = *(longlong *)((longlong)pvVar3 + 0x18);
    uVar6 = (int)uVar5 + local_38;
    if ((*(int *)((longlong)pvVar3 + 0x10) < (int)uVar5) ||
       (*(ulonglong *)((longlong)pvVar3 + 0x20) < uVar6)) {
      local_38 = FUN_1437138c0(pvVar3);
    }
    else {
      *(ulonglong *)((longlong)pvVar3 + 0x18) = uVar6;
    }
  }
  local_3c = uVar2 | 0x80000000;
  local_48 = local_38;
  uVar4 = FUN_143703a50();
  if ((int)(local_3c & 0x3fffffff) < (int)uVar2) {
    uVar1 = (local_3c & 0x3fffffff) * 2;
    uVar5 = uVar2;
    if ((int)uVar2 < (int)uVar1) {
      uVar5 = uVar1;
    }
    FUN_14370c310(uVar4,&local_48,uVar5,8);
  }
  local_40 = uVar2;
  (**(code **)(*param_2 + 8))(param_2,local_48,uVar2,8);
  uVar6 = uVar9;
  uVar10 = uVar9;
  if (0 < (int)uVar2) {
    do {
      lVar7 = (longlong)(int)uVar10 * 0x60 + *param_1;
      uVar8 = lVar7 + 0x20;
      if (lVar7 == 0) {
        uVar8 = uVar9;
      }
      (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(local_48 + uVar6 * 8),uVar8,0x40);
      uVar6 = uVar6 + 1;
      uVar10 = (ulonglong)((int)uVar10 + 1);
    } while ((longlong)uVar6 < (longlong)(int)uVar2);
  }
  (**(code **)(*param_2 + 0x38))(param_2,local_48,uVar2,0,8);
  (**(code **)(*param_2 + 0x48))(param_2,local_48,uVar2);
  (**(code **)(*param_2 + 0x10))(param_2,local_48,uVar2,8);
  uVar2 = local_30;
  lVar7 = local_38;
  if (local_38 == local_48) {
    local_40 = 0;
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  uVar2 = uVar2 * 8 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar3 + 0x10) < (int)uVar2) ||
      ((int)uVar2 + lVar7 != *(longlong *)((longlong)pvVar3 + 0x18))) ||
     (*(longlong *)((longlong)pvVar3 + 0x28) == lVar7)) {
    FUN_143713ff0(pvVar3,lVar7);
  }
  else {
    *(longlong *)((longlong)pvVar3 + 0x18) = lVar7;
  }
  uVar4 = FUN_143703a50();
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar4,local_48,8,local_3c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438490c0 FUN_1438490c0 body=51 status=ok
// SIG undefined FUN_1438490c0(void)

undefined8 *
FUN_1438490c0(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
  uVar1 = param_5[1];
  param_1[2] = *param_5;
  param_1[3] = uVar1;
  uVar1 = param_6[1];
  param_1[4] = *param_6;
  param_1[5] = uVar1;
  uVar1 = param_7[1];
  param_1[6] = *param_7;
  param_1[7] = uVar1;
  return param_1;
}



// FUNCTION 143849100 FUN_143849100 body=1504 status=ok
// SIG undefined FUN_143849100(void)

undefined8 * FUN_143849100(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int local_res8 [2];
  
  lVar19 = 0;
  param_1[1] = 0;
  *param_1 = hkaiWorld::CharacterStepSerializableContext::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = *param_2;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  lVar10 = (longlong)(param_2[7] - param_2[6]) / 0x12 +
           ((longlong)(param_2[7] - param_2[6]) >> 0x3f);
  iVar12 = (int)(lVar10 >> 3) - (int)(lVar10 >> 0x3f);
  local_res8[0] = iVar12;
  uVar7 = FUN_143703a50();
  iVar13 = local_res8[0];
  lVar10 = lVar19;
  if (local_res8[0] != 0) {
    lVar10 = FUN_143702d60(uVar7,0x90,local_res8);
  }
  lVar17 = (longlong)iVar12;
  param_1[7] = lVar10;
  iVar12 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar12 = local_res8[0];
  }
  *(int *)(param_1 + 8) = iVar13;
  *(int *)((longlong)param_1 + 0x44) = iVar12;
  lVar11 = param_2[6];
  if (3 < lVar17) {
    lVar18 = lVar11 - lVar10;
    lVar14 = (lVar17 - 4U >> 2) + 1;
    puVar9 = (undefined8 *)(lVar10 + 0xa0);
    lVar19 = lVar14 * 4;
    do {
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + -0xa0);
      uVar7 = puVar2[1];
      puVar9[-0x14] = *puVar2;
      puVar9[-0x13] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + -0x90);
      uVar7 = puVar2[1];
      puVar9[-0x12] = *puVar2;
      puVar9[-0x11] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + -0x80);
      uVar7 = puVar2[1];
      puVar9[-0x10] = *puVar2;
      puVar9[-0xf] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + -0x70);
      uVar7 = puVar2[1];
      puVar9[-0xe] = *puVar2;
      puVar9[-0xd] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + -0x60);
      uVar7 = puVar2[1];
      puVar9[-0xc] = *puVar2;
      puVar9[-0xb] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + -0x50);
      uVar7 = puVar2[1];
      puVar9[-10] = *puVar2;
      puVar9[-9] = uVar7;
      *(undefined4 *)(puVar9 + -8) = *(undefined4 *)((longlong)puVar9 + lVar18 + -0x40);
      puVar9[-7] = *(undefined8 *)((longlong)puVar9 + lVar18 + -0x38);
      puVar9[-6] = *(undefined8 *)((longlong)puVar9 + lVar18 + -0x30);
      puVar9[-5] = *(undefined8 *)((longlong)puVar9 + lVar18 + -0x28);
      *(undefined1 *)(puVar9 + -4) = *(undefined1 *)((longlong)puVar9 + lVar18 + -0x20);
      *(undefined1 *)((longlong)puVar9 + -0x1f) = *(undefined1 *)(lVar18 + -0x1f + (longlong)puVar9)
      ;
      *(undefined1 *)((longlong)puVar9 + -0x1e) = *(undefined1 *)(lVar18 + -0x1e + (longlong)puVar9)
      ;
      puVar2 = (undefined8 *)(lVar18 + -0x10 + (longlong)puVar9);
      uVar7 = puVar2[1];
      puVar9[-2] = *puVar2;
      puVar9[-1] = uVar7;
      uVar7 = ((undefined8 *)((longlong)puVar9 + lVar18))[1];
      *puVar9 = *(undefined8 *)((longlong)puVar9 + lVar18);
      puVar9[1] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x10);
      uVar7 = puVar2[1];
      puVar9[2] = *puVar2;
      puVar9[3] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x20);
      uVar7 = puVar2[1];
      puVar9[4] = *puVar2;
      puVar9[5] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x30);
      uVar7 = puVar2[1];
      puVar9[6] = *puVar2;
      puVar9[7] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x40);
      uVar7 = puVar2[1];
      puVar9[8] = *puVar2;
      puVar9[9] = uVar7;
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)((longlong)puVar9 + lVar18 + 0x50);
      puVar9[0xb] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0x58);
      puVar9[0xc] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0x60);
      puVar9[0xd] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0x68);
      *(undefined1 *)(puVar9 + 0xe) = *(undefined1 *)((longlong)puVar9 + lVar18 + 0x70);
      *(undefined1 *)((longlong)puVar9 + 0x71) = *(undefined1 *)((longlong)puVar9 + lVar18 + 0x71);
      *(undefined1 *)((longlong)puVar9 + 0x72) = *(undefined1 *)((longlong)puVar9 + lVar18 + 0x72);
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x80);
      uVar7 = puVar2[1];
      puVar9[0x10] = *puVar2;
      puVar9[0x11] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x90);
      uVar7 = puVar2[1];
      puVar9[0x12] = *puVar2;
      puVar9[0x13] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0xa0);
      uVar7 = puVar2[1];
      puVar9[0x14] = *puVar2;
      puVar9[0x15] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0xb0);
      uVar7 = puVar2[1];
      puVar9[0x16] = *puVar2;
      puVar9[0x17] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0xc0);
      uVar7 = puVar2[1];
      puVar9[0x18] = *puVar2;
      puVar9[0x19] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0xd0);
      uVar7 = puVar2[1];
      puVar9[0x1a] = *puVar2;
      puVar9[0x1b] = uVar7;
      *(undefined4 *)(puVar9 + 0x1c) = *(undefined4 *)((longlong)puVar9 + lVar18 + 0xe0);
      puVar9[0x1d] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0xe8);
      puVar9[0x1e] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0xf0);
      puVar9[0x1f] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0xf8);
      *(undefined1 *)(puVar9 + 0x20) = *(undefined1 *)(lVar18 + 0x100 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + 0x101) = *(undefined1 *)(lVar18 + 0x101 + (longlong)puVar9)
      ;
      *(undefined1 *)((longlong)puVar9 + 0x102) = *(undefined1 *)(lVar18 + 0x102 + (longlong)puVar9)
      ;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x110);
      uVar7 = puVar2[1];
      puVar9[0x22] = *puVar2;
      puVar9[0x23] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x120);
      uVar7 = puVar2[1];
      puVar9[0x24] = *puVar2;
      puVar9[0x25] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x130);
      uVar7 = puVar2[1];
      puVar9[0x26] = *puVar2;
      puVar9[0x27] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x140);
      uVar7 = puVar2[1];
      puVar9[0x28] = *puVar2;
      puVar9[0x29] = uVar7;
      puVar3 = (undefined4 *)((longlong)puVar9 + lVar18 + 0x150);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)(puVar9 + 0x2a) = *puVar3;
      *(undefined4 *)((longlong)puVar9 + 0x154) = uVar4;
      *(undefined4 *)(puVar9 + 0x2b) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x15c) = uVar6;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar18 + 0x160);
      uVar7 = puVar2[1];
      puVar9[0x2c] = *puVar2;
      puVar9[0x2d] = uVar7;
      *(undefined4 *)(puVar9 + 0x2e) = *(undefined4 *)((longlong)puVar9 + lVar18 + 0x170);
      puVar9[0x2f] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0x178);
      puVar9[0x30] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0x180);
      puVar9[0x31] = *(undefined8 *)((longlong)puVar9 + lVar18 + 0x188);
      *(undefined1 *)(puVar9 + 0x32) = *(undefined1 *)((longlong)puVar9 + lVar18 + 400);
      *(undefined1 *)((longlong)puVar9 + 0x191) = *(undefined1 *)((longlong)puVar9 + lVar18 + 0x191)
      ;
      *(undefined1 *)((longlong)puVar9 + 0x192) = *(undefined1 *)((longlong)puVar9 + lVar18 + 0x192)
      ;
      puVar9 = puVar9 + 0x48;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  if (lVar19 < lVar17) {
    lVar11 = lVar11 - lVar10;
    puVar9 = (undefined8 *)(lVar10 + 0x10 + lVar19 * 0x90);
    lVar17 = lVar17 - lVar19;
    do {
      puVar2 = (undefined8 *)(lVar11 + -0x10 + (longlong)puVar9);
      uVar7 = puVar2[1];
      puVar9[-2] = *puVar2;
      puVar9[-1] = uVar7;
      uVar7 = ((undefined8 *)((longlong)puVar9 + lVar11))[1];
      *puVar9 = *(undefined8 *)((longlong)puVar9 + lVar11);
      puVar9[1] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar11 + 0x10);
      uVar7 = puVar2[1];
      puVar9[2] = *puVar2;
      puVar9[3] = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar11 + 0x20);
      uVar7 = puVar2[1];
      puVar9[4] = *puVar2;
      puVar9[5] = uVar7;
      puVar3 = (undefined4 *)((longlong)puVar9 + lVar11 + 0x30);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)(puVar9 + 6) = *puVar3;
      *(undefined4 *)((longlong)puVar9 + 0x34) = uVar4;
      *(undefined4 *)(puVar9 + 7) = uVar5;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = uVar6;
      puVar2 = (undefined8 *)((longlong)puVar9 + lVar11 + 0x40);
      uVar7 = puVar2[1];
      puVar9[8] = *puVar2;
      puVar9[9] = uVar7;
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)((longlong)puVar9 + lVar11 + 0x50);
      puVar9[0xb] = *(undefined8 *)((longlong)puVar9 + lVar11 + 0x58);
      puVar9[0xc] = *(undefined8 *)((longlong)puVar9 + lVar11 + 0x60);
      puVar9[0xd] = *(undefined8 *)((longlong)puVar9 + lVar11 + 0x68);
      *(undefined1 *)(puVar9 + 0xe) = *(undefined1 *)((longlong)puVar9 + lVar11 + 0x70);
      *(undefined1 *)((longlong)puVar9 + 0x71) = *(undefined1 *)(lVar11 + 0x71 + (longlong)puVar9);
      *(undefined1 *)((longlong)puVar9 + 0x72) = *(undefined1 *)(lVar11 + 0x72 + (longlong)puVar9);
      puVar9 = puVar9 + 0x12;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  lVar19 = param_2[3];
  if (param_2[2] != lVar19) {
    lVar10 = param_2[2];
    uVar7 = FUN_143703a50();
    uVar8 = *(uint *)((longlong)param_1 + 0x34) & 0x3fffffff;
    iVar13 = (int)(lVar19 - lVar10 >> 3);
    if ((int)uVar8 < iVar13) {
      iVar12 = uVar8 * 2;
      if (iVar13 < iVar12) {
        iVar13 = iVar12;
      }
      FUN_14370c310(uVar7,param_1 + 5,iVar13,8);
    }
    plVar16 = (longlong *)param_2[3];
    for (plVar15 = (longlong *)param_2[2]; plVar15 != plVar16; plVar15 = plVar15 + 1) {
      lVar19 = *plVar15;
      if (lVar19 != 0) {
        FUN_14370c030(lVar19);
      }
      plVar1 = (longlong *)(param_1[5] + (longlong)*(int *)(param_1 + 6) * 8);
      if ((plVar1 != (longlong *)0x0) && (*plVar1 = lVar19, lVar19 != 0)) {
        FUN_14370c030(lVar19);
      }
      *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
      if (lVar19 != 0) {
        FUN_14370c150(lVar19);
      }
    }
  }
  iVar13 = *(int *)(param_1[3] + 0x260);
  lVar19 = *(longlong *)(param_1[3] + 600);
  uVar7 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff) < iVar13) {
    FUN_14370c310(uVar7,param_1 + 9,iVar13,8);
  }
  lVar10 = param_1[9];
  iVar12 = (*(int *)(param_1 + 10) - iVar13) + -1;
  lVar17 = (longlong)iVar12;
  if (-1 < iVar12) {
    do {
      if (*(longlong *)(lVar10 + (longlong)iVar13 * 8 + lVar17 * 8) != 0) {
        FUN_14370c150();
      }
      lVar17 = lVar17 + -1;
    } while (-1 < lVar17);
  }
  iVar12 = iVar13;
  if (*(int *)(param_1 + 10) < iVar13) {
    iVar12 = *(int *)(param_1 + 10);
  }
  FUN_1437f30b0(param_1[9],lVar19,iVar12);
  plVar16 = (longlong *)(param_1[9] + (longlong)iVar12 * 8);
  lVar10 = (longlong)(iVar13 - iVar12);
  if (0 < iVar13 - iVar12) {
    lVar17 = (longlong)iVar12 * 8 - (longlong)plVar16;
    do {
      if ((plVar16 != (longlong *)0x0) &&
         (lVar11 = *(longlong *)(lVar17 + lVar19 + (longlong)plVar16), *plVar16 = lVar11,
         lVar11 != 0)) {
        FUN_14370c030();
      }
      plVar16 = plVar16 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 10) = iVar13;
  return param_1;
}



// FUNCTION 1438496e0 FUN_1438496e0 body=220 status=ok
// SIG undefined FUN_1438496e0(void)

longlong FUN_1438496e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int local_res8 [2];
  
  uVar3 = 0;
  local_res8[0] = 8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar4 = local_res8[0];
  uVar2 = uVar3;
  if (local_res8[0] != 0) {
    uVar2 = FUN_143702d60(uVar1,8,local_res8);
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(int *)(param_1 + 0x28) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  local_res8[0] = 8;
  *(int *)(param_1 + 0x2c) = iVar4;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar2 = FUN_143703a50();
  iVar4 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar3 = FUN_143702d60(uVar2,8,local_res8);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(int *)(param_1 + 0x38) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  *(int *)(param_1 + 0x3c) = iVar4;
  FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}



// FUNCTION 1438497c0 FUN_1438497c0 body=314 status=ok
// SIG undefined FUN_1438497c0(void)

void FUN_1438497c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkaiWorld::CharacterStepSerializableContext::vftable;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[9];
  lVar3 = (longlong)(*(int *)(param_1 + 10) + -1);
  if (-1 < *(int *)(param_1 + 10) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar2,param_1[9],8,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar2,param_1[7],0x90,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[5];
  lVar3 = (longlong)(*(int *)(param_1 + 6) + -1);
  if (-1 < *(int *)(param_1 + 6) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar2,param_1[5],8,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438498fc FUN_1438498fc body=9 status=ok
// SIG undefined FUN_1438498fc(void)

void FUN_1438498fc(longlong param_1)

{
  FUN_143849980(param_1 + -0x20);
  return;
}



// FUNCTION 143849910 FUN_143849910 body=99 status=ok
// SIG undefined FUN_143849910(void)

undefined8 * FUN_143849910(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkTask::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x40);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143849980 FUN_143849980 body=147 status=ok
// SIG undefined FUN_143849980(void)

longlong FUN_143849980(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *(undefined ***)(param_1 + 0x20) = hkTask::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x60;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143849a20 FUN_143849a20 body=1098 status=ok
// SIG undefined FUN_143849a20(void)

void FUN_143849a20(longlong param_1,undefined4 param_2,int param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_d8;
  int local_d0;
  uint local_cc;
  uint local_c8;
  longlong local_c0;
  uint local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined **local_88;
  undefined8 local_78;
  undefined8 *local_68;
  uint local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong uVar13;
  
  uVar16 = 0;
  uVar3 = *(uint *)((longlong)param_6 + 0xc) & 0x3fffffff;
  *(undefined4 *)(param_6 + 1) = 0;
  if ((int)uVar3 < param_3) {
    iVar1 = uVar3 * 2;
    iVar4 = param_3;
    if (param_3 < iVar1) {
      iVar4 = iVar1;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_6,iVar4,0x90);
  }
  *(int *)(param_6 + 1) = param_3;
  if (param_5 == 0) {
    lVar6 = *param_6;
    local_c0 = (longlong)(int)(param_4[1] - *param_4 >> 3);
    uVar14 = uVar16;
    if (0 < local_c0) {
      do {
        plVar11 = *(longlong **)(*param_4 + uVar14 * 8);
        iVar4 = (**(code **)(*plVar11 + 0x70))(plVar11);
        uVar17 = uVar16;
        if (0 < iVar4) {
          do {
            lVar5 = (**(code **)(*plVar11 + 0x78))(plVar11,uVar17);
            if (*(int *)(lVar5 + 0xb4) != 7) {
              cVar2 = (**(code **)(*plVar11 + 0xc0))(plVar11);
              if (cVar2 == '\0') {
                FUN_14384b4b0(plVar11[4],lVar5);
              }
              else {
                FUN_14384b560();
              }
            }
            uVar3 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar3;
          } while ((int)uVar3 < iVar4);
        }
        iVar4 = (**(code **)(*plVar11 + 0x18))(plVar11,param_2,lVar6,param_3);
        uVar14 = uVar14 + 1;
        param_3 = param_3 - iVar4;
        lVar6 = lVar6 + (longlong)iVar4 * 0x90;
      } while ((longlong)uVar14 < local_c0);
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x288);
    local_a8 = hkaiBehaviorCalcVelocitiesTask::vftable;
    local_88 = hkaiBehaviorCalcVelocitiesTask::vftable;
    local_a0 = 0;
    local_98 = 0x1ffff;
    uVar14 = (longlong)(int)((int)(param_4[1] - *param_4 >> 3) + -1 + uVar3) / (longlong)(int)uVar3;
    local_78 = 0;
    local_68 = (undefined8 *)0x0;
    uVar8 = (uint)uVar14;
    uVar17 = uVar14 & 0xffffffff;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 0x80000000;
    local_b8 = uVar8;
    local_4c = param_2;
    if (0 < (int)uVar8) {
      uVar14 = uVar14 & 0xffffffff;
      if ((int)uVar8 < 0) {
        uVar14 = uVar16;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,&local_d8,uVar14,0x60);
    }
    local_c0 = *param_6;
    puVar15 = (undefined8 *)*param_4;
    if (0 < (int)uVar8) {
      local_c8 = 0;
      uVar14 = uVar16;
      uVar13 = uVar16;
      do {
        uVar12 = uVar3;
        if ((int)uVar13 == uVar8 - 1) {
          uVar12 = (int)(param_4[1] - *param_4 >> 3) - (uint)uVar14;
        }
        uVar8 = 0;
        uVar9 = (uint)uVar14;
        local_68 = puVar15;
        local_60 = uVar12;
        if (0 < (int)uVar12) {
          uVar17 = (ulonglong)uVar12;
          uVar14 = uVar16;
          puVar7 = puVar15;
          do {
            iVar4 = (**(code **)(*(longlong *)*puVar7 + 0x70))();
            uVar8 = (int)uVar14 + iVar4;
            uVar14 = (ulonglong)uVar8;
            puVar7 = puVar7 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
          uVar17 = (ulonglong)local_b8;
          uVar9 = local_c8;
        }
        puVar15 = puVar15 + (int)uVar12;
        lVar6 = local_c0 + (longlong)(int)uVar8 * 0x90;
        puVar7 = (undefined8 *)((longlong)local_d0 * 0x60 + local_d8);
        local_58 = local_c0;
        local_50 = uVar8;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = hkReferencedObject::vftable;
          local_c0 = lVar6;
          FUN_143718270(puVar7 + 1,&local_a0);
          *puVar7 = hkaiDefaultTask::vftable;
          puVar7[4] = hkaiDefaultTask::vftable;
          *(undefined4 *)(puVar7 + 2) = 0x1ffff;
          puVar7[6] = local_78;
          *puVar7 = hkaiBehaviorCalcVelocitiesTask::vftable;
          puVar7[4] = hkaiBehaviorCalcVelocitiesTask::vftable;
          puVar7[8] = local_68;
          *(uint *)(puVar7 + 9) = local_60;
          puVar7[10] = local_58;
          *(uint *)(puVar7 + 0xb) = local_50;
          *(undefined4 *)((longlong)puVar7 + 0x5c) = local_4c;
          lVar6 = local_c0;
        }
        local_c0 = lVar6;
        uVar8 = (uint)uVar17;
        local_d0 = local_d0 + 1;
        local_c8 = uVar9 + uVar3;
        uVar14 = (ulonglong)local_c8;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while ((int)uVar12 < (int)uVar8);
      if (0 < (int)uVar8) {
        FUN_143848e90(&local_d8,param_5);
      }
    }
    iVar4 = local_d0 + -1;
    if (-1 < iVar4) {
      plVar10 = (longlong *)((longlong)iVar4 * 0x60 + local_d8);
      plVar11 = plVar10;
      do {
        (**(code **)(*plVar11 + 8))(plVar10,0);
        plVar10 = plVar10 + -0xc;
        plVar11 = plVar11 + -0xc;
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    local_d0 = 0;
    if (-1 < (int)local_cc) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_d8,0x60,local_cc & 0x3fffffff);
    }
    local_d8 = 0;
    local_88 = hkTask::vftable;
    local_cc = 0x80000000;
    FUN_14370c000(&local_a8);
  }
  if (0 < (int)param_6[1]) {
    do {
      FUN_1438a0a00((longlong)(int)uVar16 * 0x90 + *param_6,1);
      uVar3 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar3;
    } while ((int)uVar3 < (int)param_6[1]);
  }
  return;
}



// FUNCTION 143849e70 FUN_143849e70 body=823 status=ok
// SIG undefined FUN_143849e70(void)

void FUN_143849e70(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  LPVOID pvVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [296];
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d800(pvVar7,"Ststeering");
  }
  FUN_1438a26a0(&local_1e8);
  iVar10 = 0;
  lVar11 = (longlong)(int)param_3[1];
  local_1f8 = param_2;
  uStack_1f4 = param_2;
  uStack_1f0 = param_2;
  uStack_1ec = param_2;
  if (0 < lVar11) {
    lVar8 = 0;
    lVar12 = 0;
    do {
      lVar9 = *param_3 + lVar12;
      if (*(char *)(lVar9 + 0x82) != '\0') {
        local_208 = *(undefined4 *)(lVar9 + 0x20);
        uStack_204 = *(undefined4 *)(lVar9 + 0x24);
        uStack_200 = *(undefined4 *)(lVar9 + 0x28);
        uStack_1fc = *(undefined4 *)(lVar9 + 0x2c);
        lVar3 = *(longlong *)(lVar9 + 0x68);
        lVar4 = *param_4;
        if (*(char *)(lVar9 + 0x81) == '\0') {
          FUN_1438a19b0(&local_1f8,&local_208,*(longlong *)(lVar3 + 0xa0) + 0x18,lVar9,
                        lVar4 + 0x10 + lVar8,&local_178);
          puVar1 = (undefined4 *)(lVar8 + lVar4);
          *puVar1 = local_178;
          puVar1[1] = uStack_174;
          puVar1[2] = uStack_170;
          puVar1[3] = uStack_16c;
          *(undefined4 *)(lVar8 + 0xc + lVar4) = 0x3f000000;
        }
        else {
          uVar2 = *(uint *)(lVar3 + 0x60);
          uVar13 = 0;
          if ((uVar2 != 0xffffffff) &&
             (lVar5 = *(longlong *)
                       ((ulonglong)(uVar2 >> 0x16) * 0x100 +
                       *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38)), lVar5 != 0)) {
            uVar13 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x68) + 0xb0);
          }
          FUN_1438a2cd0(&local_1e8,*(undefined4 *)(lVar8 + 0x28 + lVar4),lVar3 + 0x20,&local_208);
          FUN_1438a2020(lVar9,*(undefined8 *)(param_1 + 0x130),uVar2,uVar13,
                        *param_4 + 0x20 + (longlong)iVar10 * 0x40,
                        *param_4 + 0x30 + (longlong)iVar10 * 0x40,*(undefined8 *)(param_1 + 0x268),
                        local_168,&local_1e8);
          iVar6 = FUN_1438a1730(&local_1f8,&local_208,local_168,lVar4 + 0x10 + lVar8,&local_188);
          puVar1 = (undefined4 *)(lVar8 + lVar4);
          *puVar1 = local_188;
          puVar1[1] = uStack_184;
          puVar1[2] = uStack_180;
          puVar1[3] = uStack_17c;
          *(uint *)(lVar8 + 0xc + lVar4) = iVar6 < 0 | 0x3f000000;
        }
      }
      iVar10 = iVar10 + 1;
      lVar12 = lVar12 + 0x90;
      lVar8 = lVar8 + 0x40;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  local_1c0 = 0;
  if (-1 < (int)local_1bc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1c8,0x50,local_1bc & 0x3fffffff);
  }
  local_1c8 = 0;
  local_1bc = 0x80000000;
  local_1d0 = 0;
  if (-1 < (int)local_1cc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1d8,0x20,local_1cc & 0x3fffffff);
  }
  local_1d8 = 0;
  local_1cc = 0x80000000;
  local_1e0 = 0;
  if (-1 < (int)local_1dc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_1e8,0x20,local_1dc & 0x3fffffff);
  }
  return;
}



// FUNCTION 14384a1b0 FUN_14384a1b0 body=1183 status=ok
// SIG undefined FUN_14384a1b0(void)

void FUN_14384a1b0(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  LPVOID pvVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 local_res8;
  undefined4 local_res10 [2];
  longlong *local_res18;
  undefined8 local_90;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong local_68;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uVar22 = *(uint *)(param_3 + 1);
  lVar16 = (longlong)(int)uVar22;
  local_res10[0] = param_2;
  local_res18 = param_3;
  local_58 = param_2;
  uStack_54 = param_2;
  uStack_50 = param_2;
  uStack_4c = param_2;
  pvVar11 = TlsGetValue(DAT_146b8198c);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d800(pvVar11,"StsetupTasks");
  }
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  uVar18 = 0;
  lVar3 = *(longlong *)(param_1 + 0x268);
  bVar9 = false;
  local_90 = 0;
  local_res8 = 0;
  if (lVar3 != 0) {
    local_90 = *(undefined8 *)(lVar3 + 0x18);
    local_res8 = *(undefined4 *)(lVar3 + 0x20);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  if (0 < (int)uVar22) {
    uVar19 = (ulonglong)uVar22;
    if ((int)uVar22 < 0) {
      uVar19 = uVar18;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_68,uVar19);
  }
  uVar19 = uVar18;
  uVar14 = uVar18;
  if (0 < (int)uVar22) {
    do {
      puVar23 = (undefined8 *)(*local_res18 + uVar14);
      lVar3 = puVar23[0xd];
      iVar15 = (int)uVar18;
      if (*(char *)((longlong)puVar23 + 0x82) != '\0') {
        if (*(char *)((longlong)puVar23 + 0x81) == '\0') {
          FUN_1438a19b0(&local_58,lVar3 + 0x50,*(longlong *)(lVar3 + 0xa0) + 0x18,puVar23,
                        *param_4 + 0x10 + (longlong)iVar15 * 0x40,&local_78);
          lVar3 = *param_4;
          puVar1 = (undefined4 *)(uVar19 + lVar3);
          *puVar1 = (undefined4)local_78;
          puVar1[1] = local_78._4_4_;
          puVar1[2] = uStack_70;
          puVar1[3] = uStack_6c;
          *(undefined4 *)(uVar19 + 0xc + lVar3) = 0x3f000000;
        }
        else {
          lVar12 = (longlong)local_60;
          local_60 = local_60 + 1;
          uVar8 = puVar23[1];
          puVar17 = (undefined8 *)(lVar12 * 0xc0 + local_68);
          *puVar17 = *puVar23;
          puVar17[1] = uVar8;
          uVar8 = puVar23[3];
          puVar17[2] = puVar23[2];
          puVar17[3] = uVar8;
          uVar8 = puVar23[5];
          puVar17[4] = puVar23[4];
          puVar17[5] = uVar8;
          uVar8 = puVar23[7];
          puVar17[6] = puVar23[6];
          puVar17[7] = uVar8;
          uVar8 = puVar23[9];
          puVar17[8] = puVar23[8];
          puVar17[9] = uVar8;
          uVar25 = 0;
          uVar5 = *(undefined4 *)((longlong)puVar23 + 0x54);
          uVar6 = *(undefined4 *)(puVar23 + 0xb);
          uVar7 = *(undefined4 *)((longlong)puVar23 + 0x5c);
          *(undefined4 *)(puVar17 + 10) = *(undefined4 *)(puVar23 + 10);
          *(undefined4 *)((longlong)puVar17 + 0x54) = uVar5;
          *(undefined4 *)(puVar17 + 0xb) = uVar6;
          *(undefined4 *)((longlong)puVar17 + 0x5c) = uVar7;
          *(undefined4 *)(puVar17 + 0xc) = *(undefined4 *)(puVar23 + 0xc);
          puVar17[0xd] = puVar23[0xd];
          puVar17[0xe] = puVar23[0xe];
          puVar17[0xf] = puVar23[0xf];
          *(undefined1 *)(puVar17 + 0x10) = *(undefined1 *)(puVar23 + 0x10);
          *(undefined1 *)((longlong)puVar17 + 0x81) = *(undefined1 *)((longlong)puVar23 + 0x81);
          *(undefined1 *)((longlong)puVar17 + 0x82) = *(undefined1 *)((longlong)puVar23 + 0x82);
          puVar17[0x12] = *(undefined8 *)(*param_4 + 0x20 + uVar19);
          *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)(*param_4 + 0x28 + uVar19);
          puVar17[0x13] = *(undefined8 *)(*param_4 + 0x30 + uVar19);
          *(undefined4 *)((longlong)puVar17 + 0xa4) = *(undefined4 *)(*param_4 + 0x38 + uVar19);
          uVar22 = *(uint *)(lVar3 + 0x60);
          *(uint *)(puVar17 + 0x15) = uVar22;
          if ((uVar22 != 0xffffffff) &&
             (lVar12 = *(longlong *)
                        ((ulonglong)(uVar22 >> 0x16) * 0x100 +
                        *(longlong *)(*(longlong *)(param_1 + 0x130) + 0x38)), lVar12 != 0)) {
            uVar25 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x68) + 0xb0);
          }
          *(undefined4 *)((longlong)puVar17 + 0xac) = uVar25;
          puVar13 = (undefined1 *)
                    FUN_14384cef0(param_1,local_res10,*(undefined4 *)(lVar3 + 200),
                                  *(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x98));
          bVar9 = true;
          *(undefined1 *)(puVar17 + 0x16) = *puVar13;
          puVar17[0x17] = (longlong)iVar15 * 0x40 + *param_4;
        }
      }
      uVar18 = (ulonglong)(iVar15 + 1);
      lVar16 = lVar16 + -1;
      uVar19 = uVar19 + 0x40;
      uVar14 = uVar14 + 0x90;
    } while (lVar16 != 0);
  }
  uVar18 = 0;
  pvVar11 = TlsGetValue(DAT_146b8198c);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d800(pvVar11,"StqueueTasks");
  }
  iVar15 = *(int *)(param_1 + 0x28c);
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0x80000000;
  uVar19 = (longlong)(local_60 + -1 + iVar15) / (longlong)iVar15;
  iVar10 = (int)uVar19;
  uVar14 = uVar18;
  if (0 < iVar10) {
    uVar19 = uVar19 & 0xffffffff;
    if (iVar10 < 0) {
      uVar19 = uVar18;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_78,uVar19);
    uVar14 = (ulonglong)uStack_70;
  }
  if (0 < iVar10) {
    iVar24 = 0;
    lVar16 = 0;
    do {
      iVar4 = iVar15;
      if ((int)uVar18 == iVar10 + -1) {
        iVar4 = local_60 - iVar24;
      }
      puVar23 = (undefined8 *)((longlong)(int)(uint)uVar14 * 0x40 + local_78);
      uVar22 = (uint)uVar14;
      if (puVar23 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar23 + 1) = param_2;
        *puVar23 = hkaiAvoidanceSolverTask::vftable;
        puVar23[2] = uVar2;
        puVar23[3] = local_90;
        *(undefined4 *)(puVar23 + 4) = local_res8;
        puVar23[5] = local_68 + lVar16;
        *(int *)(puVar23 + 6) = iVar4;
        uVar22 = uStack_70;
      }
      uStack_70 = uVar22 + 1;
      uVar14 = (ulonglong)uStack_70;
      uVar22 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar22;
      iVar24 = iVar24 + iVar15;
      lVar16 = lVar16 + (longlong)iVar15 * 0xc0;
    } while ((int)uVar22 < iVar10);
  }
  pvVar11 = TlsGetValue(DAT_146b8198c);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d800(pvVar11,"StprocessTasks");
  }
  if (bVar9) {
    FUN_143848c70(&local_78,param_5);
  }
  iVar15 = uStack_70 - 1;
  if (-1 < iVar15) {
    plVar20 = (longlong *)((longlong)iVar15 * 0x40 + local_78);
    plVar21 = plVar20;
    do {
      (**(code **)(*plVar21 + 8))(plVar20,0);
      plVar20 = plVar20 + -8;
      plVar21 = plVar21 + -8;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  uStack_70 = 0;
  if (-1 < (int)uStack_6c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_78,0x40,uStack_6c & 0x3fffffff);
  }
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_68,0xc0,local_5c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14384a650 FUN_14384a650 body=268 status=ok
// SIG undefined FUN_14384a650(void)

void FUN_14384a650(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined2 local_18;
  undefined4 local_16;
  longlong local_10;
  
  puVar5 = *(undefined8 **)(param_1 + 0x238);
  local_18 = 0x10;
  local_16 = 0x130800;
  puVar1 = puVar5 + *(int *)(param_1 + 0x240);
  local_10 = param_2;
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_18);
  }
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x260)) {
    plVar2 = *(longlong **)(param_1 + 600);
    uVar6 = uVar3;
    do {
      iVar4 = (int)uVar6;
      if (*plVar2 == param_2) goto LAB_14384a6f6;
      uVar6 = (ulonglong)(iVar4 + 1);
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x260));
  }
  iVar4 = -1;
LAB_14384a6f6:
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  if (-1 < iVar4) {
    if (*(longlong *)((longlong)iVar4 * 8 + *(longlong *)(param_1 + 600)) != 0) {
      FUN_14370c150();
    }
    *(int *)(param_1 + 0x260) = *(int *)(param_1 + 0x260) + -1;
    if (*(int *)(param_1 + 0x260) != iVar4) {
      *(undefined8 *)(*(longlong *)(param_1 + 600) + (longlong)iVar4 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 600) + (longlong)*(int *)(param_1 + 0x260) * 8);
    }
  }
  return;
}



// FUNCTION 14384a760 FUN_14384a760 body=3397 status=ok
// SIG undefined FUN_14384a760(void)

/* WARNING: Removing unreachable block (ram,0x00014384b061) */

void FUN_14384a760(longlong param_1,undefined4 param_2,ulonglong *param_3,longlong *param_4,
                  longlong param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  LPVOID pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int *piVar23;
  float fVar25;
  float fVar26;
  undefined1 auVar24 [16];
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  longlong local_138;
  uint local_130;
  uint local_12c;
  uint local_128 [2];
  LPVOID local_120;
  int local_118;
  uint local_114;
  LPVOID local_108;
  LPVOID pvStack_100;
  int local_f8;
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  int local_c0;
  uint local_bc;
  ulonglong local_b8;
  ulonglong uStack_b0;
  LPVOID local_a8;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  pvVar8 = TlsGetValue(DAT_146b8198c);
  local_a8 = pvVar8;
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d620(pvVar8,"LtstepCharacters","Stsetup");
  }
  uVar21 = (longlong)(param_3[1] - *param_3) >> 3;
  uVar18 = (uint)uVar21;
  local_c8 = uVar21;
  if (uVar18 != 0) {
    uVar10 = 0;
    uVar19 = uVar10;
    if (0 < *(int *)(param_1 + 0x260)) {
      do {
        (**(code **)(**(longlong **)(uVar19 + *(longlong *)(param_1 + 600)) + 0x18))();
        uVar13 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar13;
        uVar19 = uVar19 + 8;
      } while ((int)uVar13 < *(int *)(param_1 + 0x260));
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 0x80000000;
    local_128[0] = uVar18;
    lVar9 = FUN_143702d60(&PTR_vftable_1467f0638,0x40,local_128);
    local_12c = 0x80000000;
    if (local_128[0] != 0) {
      local_12c = local_128[0];
    }
    local_138 = lVar9;
    local_130 = uVar18;
    if (0 < (int)uVar18) {
      uVar19 = uVar21 & 0xffffffff;
      do {
        if (lVar9 != 0) {
          FUN_1438496e0(lVar9);
        }
        lVar9 = lVar9 + 0x40;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    local_b8 = 1;
    if (*(int *)(param_1 + 0x230) != 0) {
      pvVar8 = TlsGetValue(DAT_146b8198c);
      if (pvVar8 != (LPVOID)0x0) {
        FUN_14370d800(pvVar8,"StpreCalcDesiredVelCallback");
      }
      local_108 = (LPVOID)0x0;
      pvStack_100 = (LPVOID)0x0;
      local_d8 = *param_4;
      lStack_d0 = param_4[1];
      local_e8 = *param_3;
      uStack_e0 = param_3[1];
      FUN_1438490c0(&local_98,1,param_1,param_2,&local_e8,&local_d8,&local_108);
      iVar17 = 0;
      if (0 < *(int *)(param_1 + 0x230)) {
        lVar9 = 0;
        do {
          plVar4 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x228));
          (**(code **)(*plVar4 + 0x10))(plVar4,&local_98);
          iVar17 = iVar17 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar17 < *(int *)(param_1 + 0x230));
      }
    }
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"StcalcDesiredVel");
    }
    local_108 = (LPVOID)*param_4;
    pvStack_100 = (LPVOID)param_4[1];
    local_120 = (LPVOID)0x0;
    local_118 = 0;
    local_114 = 0x80000000;
    FUN_143849a20(param_1,param_2,uVar21 & 0xffffffff,&local_108,param_5,&local_120);
    if (*(int *)(param_1 + 0x230) != 0) {
      pvVar8 = TlsGetValue(DAT_146b8198c);
      if (pvVar8 != (LPVOID)0x0) {
        FUN_14370d800(pvVar8,"StpreStepCallbacks");
      }
      pvStack_100 = (LPVOID)((longlong)local_118 * 0x90 + (longlong)local_120);
      local_108 = local_120;
      local_d8 = *param_4;
      lStack_d0 = param_4[1];
      local_e8 = *param_3;
      uStack_e0 = param_3[1];
      FUN_1438490c0(&local_98,1,param_1,param_2,&local_e8,&local_d8,&local_108);
      iVar17 = 0;
      if (0 < *(int *)(param_1 + 0x230)) {
        lVar9 = 0;
        do {
          plVar4 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x228));
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_98);
          iVar17 = iVar17 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar17 < *(int *)(param_1 + 0x230));
      }
    }
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"Stbroadphase");
    }
    local_108 = TlsGetValue(DAT_146b8198c);
    if (local_108 != (LPVOID)0x0) {
      FUN_14370d620(local_108,"Ltbroadphase");
    }
    iVar17 = *(int *)(param_1 + 0x260);
    iVar22 = iVar17 + uVar18;
    local_128[0] = iVar22 + 4;
    if (local_128[0] == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = FUN_143702d60(&PTR_vftable_1467f0638,0x20);
    }
    uVar19 = local_e8;
    local_bc = 0x80000000;
    if (local_128[0] != 0) {
      local_bc = local_128[0];
    }
    iVar14 = 0;
    lVar9 = (longlong)(int)uVar18;
    local_d8 = lVar9;
    if (0 < (int)uVar18) {
      lVar20 = 0;
      do {
        lVar5 = *(longlong *)(lVar20 + 0x68 + (longlong)local_120);
        lVar6 = *(longlong *)(lVar5 + 0xa0);
        uVar28 = *(undefined4 *)(lVar5 + 0x70);
        auVar24._4_4_ = uVar28;
        auVar24._0_4_ = uVar28;
        auVar24._8_4_ = uVar28;
        auVar24._12_4_ = uVar28;
        auVar24 = maxps(auVar24,*(undefined1 (*) [16])(lVar5 + 0x50));
        local_98 = *(float *)(lVar6 + 0x40) * auVar24._0_4_ + *(float *)(lVar5 + 0x20);
        fStack_94 = *(float *)(lVar6 + 0x44) * auVar24._4_4_ + *(float *)(lVar5 + 0x24);
        fStack_90 = *(float *)(lVar6 + 0x48) * auVar24._8_4_ + *(float *)(lVar5 + 0x28);
        fStack_8c = *(float *)(lVar6 + 0x4c) * auVar24._12_4_ + *(float *)(lVar5 + 0x2c);
        local_88 = *(float *)(lVar6 + 0x50) * auVar24._0_4_ + *(float *)(lVar5 + 0x20);
        fStack_84 = *(float *)(lVar6 + 0x54) * auVar24._4_4_ + *(float *)(lVar5 + 0x24);
        fStack_80 = *(float *)(lVar6 + 0x58) * auVar24._8_4_ + *(float *)(lVar5 + 0x28);
        fStack_7c = *(float *)(lVar6 + 0x5c) * auVar24._12_4_ + *(float *)(lVar5 + 0x2c);
        FUN_143df9900((longlong)iVar14 * 0x20 + uVar19,&local_98);
        iVar14 = iVar14 + 1;
        lVar20 = lVar20 + 0x90;
        lVar9 = lVar9 + -1;
        uVar21 = local_c8;
      } while (lVar9 != 0);
    }
    uVar19 = local_e8;
    lVar9 = 0;
    if (0 < iVar17) {
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 600) + lVar9 * 8);
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_98);
        FUN_143df9900((longlong)iVar14 * 0x20 + uVar19,&local_98);
        lVar9 = lVar9 + 1;
        iVar14 = iVar14 + 1;
      } while (lVar9 < iVar17);
    }
    *(undefined4 *)((longlong)iVar14 * 0x20 + local_e8) = 0xffffffff;
    *(undefined4 *)((longlong)(iVar14 + 1) * 0x20 + local_e8) = 0xffffffff;
    *(undefined4 *)((longlong)(iVar14 + 2) * 0x20 + local_e8) = 0xffffffff;
    *(undefined4 *)((longlong)(iVar14 + 3) * 0x20 + local_e8) = 0xffffffff;
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"StsortAabbs");
    }
    FUN_143df9960(local_e8,iVar22);
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"Stscan");
    }
    local_c0 = iVar22 + -1;
    local_f8 = 0;
    uVar10 = 1;
    piVar23 = (int *)(local_e8 + 4);
    uVar19 = local_e8;
    do {
      puVar16 = (uint *)(piVar23 + 7);
      iVar17 = (int)uVar21;
      local_c8 = uVar10;
      if (*puVar16 <= (uint)piVar23[3]) {
        do {
          if (-1 < (int)(puVar16[6] - piVar23[1] | piVar23[5] - puVar16[2] | piVar23[4] - puVar16[1]
                        | puVar16[5] - *piVar23)) {
            iVar22 = piVar23[2];
            lVar9 = (longlong)iVar22;
            uVar18 = puVar16[3];
            lVar20 = (longlong)(int)uVar18;
            if (iVar22 < iVar17) {
              if ((int)uVar18 < iVar17) {
                lVar5 = *(longlong *)((longlong)local_120 + lVar9 * 0x90 + 0x68);
                lVar6 = *(longlong *)((longlong)local_120 + lVar20 * 0x90 + 0x68);
                plVar4 = *(longlong **)(lVar5 + 0x90);
                if ((plVar4 == (longlong *)0x0) ||
                   (iVar22 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar6), iVar22 != 0)) {
                  lVar9 = lVar9 * 0x40 + local_138;
                  uVar11 = FUN_143703a50();
                  if (*(uint *)(lVar9 + 0x28) == (*(uint *)(lVar9 + 0x2c) & 0x3fffffff)) {
                    FUN_14370c460(uVar11,lVar9 + 0x20,8);
                  }
                  *(longlong *)(*(longlong *)(lVar9 + 0x20) + (longlong)*(int *)(lVar9 + 0x28) * 8)
                       = lVar6;
                  *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + 1;
                }
                plVar4 = *(longlong **)(lVar6 + 0x90);
                if ((plVar4 == (longlong *)0x0) ||
                   (iVar22 = (**(code **)(*plVar4 + 0x18))(plVar4,lVar6,lVar5), iVar22 != 0)) {
                  lVar9 = local_138 + lVar20 * 0x40;
                  uVar11 = FUN_143703a50();
                  if (*(uint *)(lVar9 + 0x28) == (*(uint *)(lVar9 + 0x2c) & 0x3fffffff)) {
                    FUN_14370c460(uVar11,lVar9 + 0x20,8);
                  }
                  *(longlong *)(*(longlong *)(lVar9 + 0x20) + (longlong)*(int *)(lVar9 + 0x28) * 8)
                       = lVar5;
                  *(int *)(lVar9 + 0x28) = *(int *)(lVar9 + 0x28) + 1;
                }
              }
              else {
                lVar5 = *(longlong *)((longlong)local_120 + lVar9 * 0x90 + 0x68);
                uVar11 = *(undefined8 *)
                          (*(longlong *)(param_1 + 600) + (longlong)(int)(uVar18 - iVar17) * 8);
                plVar4 = *(longlong **)(lVar5 + 0x90);
joined_r0x00014384ae29:
                if ((plVar4 == (longlong *)0x0) ||
                   (iVar22 = (**(code **)(*plVar4 + 0x20))(plVar4,lVar5,uVar11), iVar22 != 0)) {
                  lVar9 = lVar9 * 0x40 + local_138;
                  uVar12 = FUN_143703a50();
                  if (*(uint *)(lVar9 + 0x38) == (*(uint *)(lVar9 + 0x3c) & 0x3fffffff)) {
                    FUN_14370c460(uVar12,lVar9 + 0x30,8);
                  }
                  *(undefined8 *)
                   (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) = uVar11;
                  *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + 1;
                }
              }
            }
            else if ((int)uVar18 < iVar17) {
              lVar5 = *(longlong *)((longlong)local_120 + lVar20 * 0x90 + 0x68);
              uVar11 = *(undefined8 *)
                        (*(longlong *)(param_1 + 600) + (longlong)(iVar22 - iVar17) * 8);
              plVar4 = *(longlong **)(lVar5 + 0x90);
              lVar9 = lVar20;
              goto joined_r0x00014384ae29;
            }
          }
          local_c8 = local_c8 + 1;
          puVar16 = (uint *)(local_c8 * 0x20 + local_e8);
          uVar19 = local_e8;
        } while (*puVar16 <= (uint)piVar23[3]);
      }
      local_f8 = local_f8 + 1;
      uVar10 = local_b8 + 1;
      piVar23 = piVar23 + 8;
      local_b8 = uVar10;
    } while (local_f8 < local_c0);
    if (-1 < (int)local_bc) {
      FUN_143702e10(&PTR_vftable_1467f0638,uVar19,0x20,local_bc & 0x3fffffff);
    }
    if (local_108 != (LPVOID)0x0) {
      FUN_14370d7a0(local_108,&DAT_145b8dd34);
    }
    lVar9 = local_d8;
    uVar15 = 0;
    uVar21 = uVar15;
    uVar19 = uVar15;
    uVar10 = uVar15;
    if (0 < local_d8) {
      do {
        if (*(char *)(uVar21 + 0x82 + (longlong)local_120) != '\0') {
          lVar20 = *(longlong *)(uVar21 + 0x68 + (longlong)local_120);
          FUN_1438a42a0(lVar20 + 0x70,*(undefined4 *)(*(longlong *)(lVar20 + 0xa0) + 0x78),
                        *(undefined4 *)(uVar19 + 0x28 + local_138));
        }
        uVar10 = uVar10 + 1;
        uVar21 = uVar21 + 0x90;
        uVar19 = uVar19 + 0x40;
      } while ((longlong)uVar10 < lVar9);
    }
    if (*(int *)(param_1 + 0x230) != 0) {
      pvVar8 = TlsGetValue(DAT_146b8198c);
      if (pvVar8 != (LPVOID)0x0) {
        FUN_14370d800(pvVar8,"StpreCalcSteeringCallbacks");
      }
      uVar21 = uVar15;
      uVar19 = uVar15;
      if (0 < *(int *)(param_1 + 0x230)) {
        do {
          plVar4 = *(longlong **)(uVar21 + *(longlong *)(param_1 + 0x228));
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_120,&local_138);
          uVar18 = (int)uVar19 + 1;
          uVar21 = uVar21 + 8;
          uVar19 = (ulonglong)uVar18;
        } while ((int)uVar18 < *(int *)(param_1 + 0x230));
      }
    }
    if (param_5 == 0) {
      FUN_143849e70(param_1,param_2,&local_120,&local_138);
    }
    else {
      FUN_14384a1b0(param_1,param_2,&local_120,&local_138,param_5);
    }
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"StsetVel");
    }
    lVar20 = local_d8;
    uVar21 = uVar15;
    uVar19 = uVar15;
    if (0 < lVar9) {
      do {
        lVar9 = (longlong)local_120 + uVar21;
        if (*(char *)(lVar9 + 0x82) != '\0') {
          pfVar7 = *(float **)(lVar9 + 0x70);
          lVar5 = *(longlong *)(lVar9 + 0x68);
          puVar2 = (undefined8 *)(uVar15 + 0x10 + local_138);
          local_108 = (LPVOID)*puVar2;
          pvStack_100 = (LPVOID)puVar2[1];
          pfVar1 = (float *)(uVar15 + local_138);
          fVar31 = *pfVar1;
          fVar32 = pfVar1[1];
          fVar34 = pfVar1[2];
          fVar36 = 0.0;
          if (pfVar7 == (float *)0x0) {
            puVar3 = (undefined4 *)(uVar15 + 0x10 + local_138);
            uVar28 = *puVar3;
            uVar29 = puVar3[1];
            uVar30 = puVar3[2];
          }
          else {
            FUN_143889180(pfVar7,lVar9,&local_108,&local_d8);
            fVar33 = fVar32 * pfVar7[6];
            fVar35 = fVar32 * pfVar7[7];
            fVar25 = fVar31 * pfVar7[1];
            fVar26 = fVar31 * pfVar7[2];
            fVar27 = fVar31 * pfVar7[3];
            fVar36 = fVar34 * pfVar7[0xb];
            fVar31 = fVar32 * pfVar7[4] + fVar31 * *pfVar7 + fVar34 * pfVar7[8];
            fVar32 = fVar32 * pfVar7[5] + fVar25 + fVar34 * pfVar7[9];
            fVar34 = fVar33 + fVar26 + fVar34 * pfVar7[10];
            fVar36 = fVar35 + fVar27 + fVar36;
            uVar28 = (undefined4)local_d8;
            uVar29 = local_d8._4_4_;
            uVar30 = (undefined4)lStack_d0;
          }
          *(undefined4 *)(lVar5 + 0x40) = uVar28;
          *(undefined4 *)(lVar5 + 0x44) = uVar29;
          *(undefined4 *)(lVar5 + 0x48) = uVar30;
          *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)(lVar5 + 0x4c);
          if (*(char *)(*(longlong *)(lVar5 + 0xa0) + 0x38) == '\x01') {
            *(float *)(lVar5 + 0x30) = fVar31;
            *(float *)(lVar5 + 0x34) = fVar32;
            *(float *)(lVar5 + 0x38) = fVar34;
            *(float *)(lVar5 + 0x3c) = fVar36;
          }
          FUN_14387d030(lVar5,-(uint)((*(uint *)(uVar15 + 0xc + local_138) & 0xc0ffffff) != 0) &
                              0x80040200);
        }
        uVar19 = uVar19 + 1;
        uVar15 = uVar15 + 0x40;
        uVar21 = uVar21 + 0x90;
      } while ((longlong)uVar19 < lVar20);
    }
    uVar21 = 0;
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"StbehaviorUpdate");
    }
    lVar9 = *param_4;
    uVar19 = uVar21;
    uVar10 = uVar21;
    if (0 < (int)(param_4[1] - lVar9 >> 3)) {
      do {
        (**(code **)(**(longlong **)(uVar19 + lVar9) + 0x20))
                  (*(longlong **)(uVar19 + lVar9),param_2);
        lVar9 = *param_4;
        uVar18 = (int)uVar10 + 1;
        uVar19 = uVar19 + 8;
        uVar10 = (ulonglong)uVar18;
      } while ((int)uVar18 < (int)(param_4[1] - lVar9 >> 3));
    }
    pvVar8 = TlsGetValue(DAT_146b8198c);
    lVar9 = local_138;
    uVar18 = local_130;
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d800(pvVar8,"Stcleanup");
      lVar9 = local_138;
      uVar18 = local_130;
    }
    while (local_138 = lVar9, -1 < (int)(uVar18 - 1)) {
      lVar20 = (longlong)(int)local_130 * 0x40;
      uVar11 = FUN_143703a50();
      uVar13 = *(uint *)(lVar20 + -4 + lVar9);
      *(undefined4 *)(lVar20 + -8 + lVar9) = 0;
      if (-1 < (int)uVar13) {
        FUN_143702e10(uVar11,*(undefined8 *)(lVar20 + -0x10 + lVar9),8,uVar13 & 0x3fffffff);
      }
      *(undefined8 *)(lVar20 + -0x10 + lVar9) = 0;
      *(undefined4 *)(lVar20 + -4 + lVar9) = 0x80000000;
      uVar11 = FUN_143703a50();
      uVar13 = *(uint *)(lVar20 + -0x14 + lVar9);
      *(undefined4 *)(lVar20 + -0x18 + lVar9) = 0;
      if (-1 < (int)uVar13) {
        FUN_143702e10(uVar11,*(undefined8 *)(lVar20 + -0x20 + lVar9),8,uVar13 & 0x3fffffff);
      }
      *(undefined8 *)(lVar20 + -0x20 + lVar9) = 0;
      *(undefined4 *)(lVar20 + -0x14 + lVar9) = 0x80000000;
      local_130 = local_130 - 1;
      lVar9 = local_138;
      uVar18 = uVar18 - 1;
    }
    if (*(int *)(param_1 + 0x230) != 0) {
      pvVar8 = TlsGetValue(DAT_146b8198c);
      if (pvVar8 != (LPVOID)0x0) {
        FUN_14370d800(pvVar8,"StpostStepCallbacks");
      }
      local_108 = (LPVOID)0x0;
      pvStack_100 = (LPVOID)0x0;
      local_d8 = *param_4;
      lStack_d0 = param_4[1];
      local_b8 = *param_3;
      uStack_b0 = param_3[1];
      FUN_1438490c0(&local_98,2,param_1,param_2,&local_b8,&local_d8,&local_108);
      uVar19 = uVar21;
      if (0 < *(int *)(param_1 + 0x230)) {
        do {
          plVar4 = *(longlong **)(uVar21 + *(longlong *)(param_1 + 0x228));
          (**(code **)(*plVar4 + 0x20))(plVar4,&local_98);
          uVar18 = (int)uVar19 + 1;
          uVar21 = uVar21 + 8;
          uVar19 = (ulonglong)uVar18;
        } while ((int)uVar18 < *(int *)(param_1 + 0x230));
      }
    }
    local_118 = 0;
    if (-1 < (int)local_114) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_120,0x90,local_114 & 0x3fffffff);
    }
    local_120 = (LPVOID)0x0;
    lVar9 = (longlong)(int)(local_130 - 1);
    local_114 = 0x80000000;
    if (-1 < (int)(local_130 - 1)) {
      puVar16 = (uint *)(local_138 + 0x3c + lVar9 * 0x40);
      do {
        uVar11 = FUN_143703a50();
        puVar16[-1] = 0;
        if (-1 < (int)*puVar16) {
          FUN_143702e10(uVar11,*(undefined8 *)(puVar16 + -3),8,*puVar16 & 0x3fffffff);
        }
        puVar16[-3] = 0;
        puVar16[-2] = 0;
        *puVar16 = 0x80000000;
        uVar11 = FUN_143703a50();
        puVar16[-5] = 0;
        if (-1 < (int)puVar16[-4]) {
          FUN_143702e10(uVar11,*(undefined8 *)(puVar16 + -7),8,puVar16[-4] & 0x3fffffff);
        }
        puVar16[-7] = 0;
        puVar16[-6] = 0;
        puVar16[-4] = 0x80000000;
        puVar16 = puVar16 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    local_130 = 0;
    if (-1 < (int)local_12c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_138,0x40,local_12c & 0x3fffffff);
    }
    local_138 = 0;
    local_12c = 0x80000000;
    pvVar8 = local_a8;
  }
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar8,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 14384b4b0 FUN_14384b4b0 body=171 status=ok
// SIG undefined FUN_14384b4b0(void)

void FUN_14384b4b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  undefined1 local_48;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  FUN_1438a2d90(local_68);
  local_24 = *(undefined4 *)(param_2 + 200);
  local_20 = *(undefined8 *)(param_2 + 0x80);
  local_18 = *(undefined4 *)(param_2 + 0x98);
  local_48 = 0;
  local_28 = uVar1;
  puVar2 = (undefined4 *)
           FUN_1438a3410(local_res8,*(undefined8 *)(param_1 + 0x130),param_2 + 0x20,param_2 + 0x50,
                         local_68,local_78);
  *(undefined4 *)(param_2 + 0x60) = *puVar2;
  *(undefined4 *)(param_2 + 100) = 0xffffffff;
  return;
}



// FUNCTION 14384b560 FUN_14384b560 body=207 status=ok
// SIG undefined FUN_14384b560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14384b560(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  
  uVar1 = *(undefined4 *)(param_2 + 100);
  lVar2 = FUN_1412bf1c0(*(undefined8 *)(param_1 + 0x130));
  if (lVar2 == 0) {
    *(undefined8 *)(param_2 + 0x60) = 0xffffffffffffffff;
  }
  else {
    local_44 = 0xffffffff;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_1438a3b40(param_2,&local_48);
    FUN_1438a2d70(&local_28);
    local_28 = _DAT_1467f0700;
    uStack_24 = uRam00000001467f0704;
    uStack_20 = uRam00000001467f0708;
    uStack_1c = uRam00000001467f070c;
    local_14 = uVar1;
    puVar3 = (undefined4 *)
             FUN_1438a3140(local_res8,*(undefined8 *)(param_1 + 0x130),param_2 + 0x20,&local_48,
                           &local_28,local_58);
    *(undefined4 *)(param_2 + 100) = *puVar3;
    *(undefined4 *)(param_2 + 0x60) = 0xffffffff;
  }
  return;
}



// FUNCTION 14384b630 FUN_14384b630 body=36 status=ok
// SIG undefined FUN_14384b630(void)

void FUN_14384b630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_14384b660(0,param_2,&local_18,param_3,param_4);
  return;
}



// FUNCTION 14384b660 FUN_14384b660 body=924 status=ok
// SIG undefined FUN_14384b660(void)

void FUN_14384b660(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  undefined1 uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar10;
  float fVar11;
  undefined1 local_res8;
  undefined1 local_res9;
  longlong local_118;
  int local_110;
  uint local_10c;
  undefined **local_108;
  longlong lStack_100;
  undefined4 local_f8;
  uint local_f4;
  longlong local_e8;
  longlong lStack_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined4 local_c8;
  uint local_c4;
  int local_c0;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  ulonglong uVar9;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TthkaiWorld::stepWorld");
  }
  FUN_14384c7f0(param_1,local_88);
  if (*(char *)(param_1 + 0x4b8) == '\0') {
    FUN_143848b30(param_1,0);
  }
  else {
    FUN_14384c780(param_1,local_d8);
    local_res9 = FUN_14384c8f0(param_1,local_d8);
    local_res8 = APrimalCharacter::IsValidForStatusUpdate(param_1);
    FUN_14387c220(param_1 + 0x4c0,param_2,&local_res8);
    cVar1 = APrimalCharacter::IsValidForStatusUpdate(param_1);
    if (cVar1 == '\0') {
      puVar7 = &local_d0;
      if (local_c0 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      FUN_143848b30(param_1,puVar7);
      cVar1 = FUN_14384c8f0(param_1,local_d8);
      if (cVar1 != '\0') {
        uVar2 = FUN_14384cf20(param_1);
        *(undefined1 *)(param_1 + 0x512) = uVar2;
        *(undefined1 *)(param_1 + 0x511) = 0;
        FUN_14384cb60(param_1,local_d8,param_4,param_5);
        FUN_14387c280(param_1 + 0x4c0);
      }
    }
    cVar1 = APrimalCharacter::IsValidForStatusUpdate(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_14384c8b0(param_1);
      if ((cVar1 == '\0') && (*(char *)(param_1 + 0x510) != '\0')) {
        FUN_14384bc80(param_1,*(undefined4 *)(param_1 + 0x4bc));
      }
      cVar1 = FUN_14384c8b0(param_1);
      if (cVar1 != '\0') {
        lStack_100 = 0;
        local_108 = hkTrivialTaskQueue::vftable;
        local_f8 = 0;
        local_f4 = 0x80000000;
        FUN_14384bd20(param_1,&local_108,1);
        FUN_143260c40(param_1 + 0x4c0);
        *(undefined1 *)(param_1 + 0x512) = 0;
        uVar4 = FUN_143703a50();
        local_f8 = 0;
        if (-1 < (int)local_f4) {
          FUN_143702e10(uVar4,lStack_100,8,local_f4 & 0x3fffffff);
        }
      }
    }
    pvVar5 = TlsGetValue(DAT_146b8198c);
    if (pvVar5 != (LPVOID)0x0) {
      fVar11 = (float)FUN_14387c250(param_1 + 0x4c0);
      FUN_14370d190(pvVar5,"MfAsync latency",fVar11 * 1000.0);
    }
    uVar4 = FUN_143703a50();
    local_c8 = 0;
    if (-1 < (int)local_c4) {
      FUN_143702e10(uVar4,local_d0,4,local_c4 & 0x3fffffff);
    }
  }
  uVar9 = 0;
  FUN_14384c2a0(param_1,local_88,param_4,param_5);
  lVar6 = *param_3;
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80000000;
  uVar10 = uVar9;
  if (0 < (int)(param_3[1] - lVar6 >> 3)) {
    do {
      (**(code **)(**(longlong **)(uVar10 + lVar6) + 0x80))
                (*(longlong **)(uVar10 + lVar6),&local_118);
      lVar6 = *param_3;
      uVar10 = uVar10 + 8;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)(param_3[1] - lVar6 >> 3));
  }
  local_108 = (undefined **)*param_3;
  lStack_100 = param_3[1];
  lStack_e0 = local_118 + (longlong)local_110 * 8;
  local_e8 = local_118;
  FUN_14384a760(param_1,param_2,&local_e8,&local_108,param_4,param_5);
  local_110 = 0;
  if (-1 < (int)local_10c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_118,8,local_10c & 0x3fffffff);
  }
  local_108 = (undefined **)*param_3;
  lStack_100 = param_3[1];
  FUN_143846fa0(param_1,&local_108);
  uVar4 = FUN_143703a50();
  local_78 = 0;
  if (-1 < (int)local_74) {
    FUN_143702e10(uVar4,local_80,4,local_74 & 0x3fffffff);
  }
  local_80 = 0;
  local_74 = 0x80000000;
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384ba00 FUN_14384ba00 body=139 status=ok
// SIG undefined FUN_14384ba00(void)

void FUN_14384ba00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),1,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_143716650(param_1 + 0x20);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),4,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14384ba90 FUN_14384ba90 body=306 status=ok
// SIG undefined FUN_14384ba90(void)

undefined1 * FUN_14384ba90(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,param_1 + 8,iVar2,4);
  }
  FUN_142f87c00(*(undefined8 *)(param_1 + 8),uVar6,iVar2);
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_143716660(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  iVar2 = *(int *)(param_2 + 0x38);
  lVar3 = *(longlong *)(param_2 + 0x30);
  uVar6 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar6,param_1 + 0x30,iVar2,1);
  }
  iVar8 = iVar2;
  if (*(int *)(param_1 + 0x38) < iVar2) {
    iVar8 = *(int *)(param_1 + 0x38);
  }
  FUN_143745160(*(undefined8 *)(param_1 + 0x30),lVar3,iVar8);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (0 < iVar2 - iVar8) {
    lVar7 = 0;
    do {
      puVar1 = (undefined1 *)(lVar4 + iVar8 + lVar7);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = *(undefined1 *)(iVar8 + lVar7 + lVar3);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2 - iVar8);
  }
  *(int *)(param_1 + 0x38) = iVar2;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 14384bbc4 FUN_14384bbc4 body=9 status=ok
// SIG undefined FUN_14384bbc4(void)

void FUN_14384bbc4(longlong param_1)

{
  FUN_14384bbd0(param_1 + -0x20);
  return;
}



// FUNCTION 14384bbd0 FUN_14384bbd0 body=162 status=ok
// SIG undefined FUN_14384bbd0(void)

longlong FUN_14384bbd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14370c150();
  }
  *(undefined ***)(param_1 + 0x20) = hkTask::vftable;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14384bc80 FUN_14384bc80 body=145 status=ok
// SIG undefined FUN_14384bc80(void)

void FUN_14384bc80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  LPVOID pvVar2;
  undefined4 local_res10 [6];
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtadvanceAsyncProcessingRun");
  }
  cVar1 = FUN_14384c8b0(param_1);
  if (cVar1 == '\0') {
    FUN_143719650(*(undefined8 *)(param_1 + 0x4e8),param_2);
  }
  local_res10[0] = param_2;
  FUN_1438484d0(param_1 + 0xe0,param_1,local_res10);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384bd20 FUN_14384bd20 body=404 status=ok
// SIG undefined FUN_14384bd20(void)

void FUN_14384bd20(longlong param_1,undefined ***param_2)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  longlong local_res8;
  undefined2 local_48;
  undefined4 local_46;
  undefined **local_38;
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtcommitAsyncProcessingRun");
  }
  puVar6 = *(undefined8 **)(param_1 + 0x238);
  local_48 = 0x10;
  local_46 = 0x1f0800;
  puVar1 = puVar6 + *(int *)(param_1 + 0x240);
  for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    (**(code **)(*(longlong *)*puVar6 + 0x18))((longlong *)*puVar6,&local_48);
  }
  plVar3 = (longlong *)FUN_143719630(*(undefined8 *)(param_1 + 0x4e8));
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 0x4f8,1);
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  FUN_143847740(param_1,&local_res8,*(undefined8 *)(param_1 + 0x500));
  if (local_res8 != 0) {
    local_30 = 0;
    local_38 = hkTrivialTaskQueue::vftable;
    local_28 = 0;
    local_24 = 0x80000000;
    pppuVar5 = &local_38;
    if (param_2 != (undefined ***)0x0) {
      pppuVar5 = param_2;
    }
    (*(code *)(*pppuVar5)[0xe])(pppuVar5,local_res8,0);
    uVar4 = FUN_143703a50();
    local_28 = 0;
    if (-1 < (int)local_24) {
      FUN_143702e10(uVar4,local_30,8,local_24 & 0x3fffffff);
    }
    if (local_res8 != 0) {
      FUN_14370c150();
    }
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x500) = 0;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384bec0 FUN_14384bec0 body=241 status=ok
// SIG undefined FUN_14384bec0(void)

void FUN_14384bec0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  undefined4 local_res8 [2];
  undefined2 local_18;
  undefined4 local_16;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtcompleteAsyncProcessingRunImmediately");
  }
  puVar4 = *(undefined8 **)(param_1 + 0x238);
  local_18 = 0x10;
  local_16 = 0x1e0800;
  puVar1 = puVar4 + *(int *)(param_1 + 0x240);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    (**(code **)(*(longlong *)*puVar4 + 0x18))((longlong *)*puVar4,&local_18);
  }
  cVar2 = FUN_14384c8b0(param_1);
  if (cVar2 == '\0') {
    FUN_143719880(*(undefined8 *)(param_1 + 0x4e8),*(undefined8 *)(param_1 + 0x4f8));
  }
  local_res8[0] = 0xbf800000;
  FUN_1438484d0(param_1 + 0xe0,param_1,local_res8);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384bfc0 FUN_14384bfc0 body=723 status=ok
// SIG undefined FUN_14384bfc0(void)

void FUN_14384bfc0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined2 local_98;
  undefined4 local_96;
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_74;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  undefined4 local_48;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtdisableAsyncProcessing");
  }
  cVar3 = APrimalCharacter::IsValidForStatusUpdate(param_1);
  if (cVar3 != '\0') {
    FUN_14384bec0(param_1);
    local_88 = hkTrivialTaskQueue::vftable;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0x80000000;
    FUN_14384bd20(param_1,&local_88,1);
    uVar6 = FUN_143703a50();
    local_78 = 0;
    if (-1 < (int)local_74) {
      FUN_143702e10(uVar6,local_80,8,local_74 & 0x3fffffff);
    }
  }
  iVar4 = FUN_143dfc770(*(undefined8 *)(param_1 + 0x4e0));
  if (0 < iVar4) {
    FUN_14382bbe0(local_68);
    local_68[0] = 1;
    local_48 = 0;
    local_88 = hkTrivialTaskQueue::vftable;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0x80000000;
    FUN_14384c2a0(param_1,local_68,&local_88,1);
    uVar6 = FUN_143703a50();
    local_78 = 0;
    if (-1 < (int)local_74) {
      FUN_143702e10(uVar6,local_80,8,local_74 & 0x3fffffff);
    }
    local_80 = 0;
    local_88 = hkTaskQueue::vftable;
    local_74 = 0x80000000;
    uVar6 = FUN_143703a50();
    local_58 = 0;
    if (-1 < (int)local_54) {
      FUN_143702e10(uVar6,local_60,4,local_54 & 0x3fffffff);
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x238);
  local_98 = 0x10;
  local_96 = 0x1b0800;
  puVar1 = puVar8 + *(int *)(param_1 + 0x240);
  for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    (**(code **)(*(longlong *)*puVar8 + 0x18))((longlong *)*puVar8,&local_98);
  }
  FUN_143dfc710(*(undefined8 *)(param_1 + 0x4e0));
  lVar2 = *(longlong *)(param_1 + 0x4e0);
  if (lVar2 != 0) {
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar7 + 0x58),lVar2,0x28);
  }
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  FUN_143dfc350(*(undefined8 *)(param_1 + 0x4d8),*(undefined8 *)(param_1 + 0x4d0));
  lVar2 = *(longlong *)(param_1 + 0x4d8);
  if (lVar2 != 0) {
    uVar6 = FUN_143703a50();
    *(undefined4 *)(lVar2 + 0x18) = 0;
    if (-1 < (int)*(uint *)(lVar2 + 0x1c)) {
      FUN_143702e10(uVar6,*(undefined8 *)(lVar2 + 0x10),8,*(uint *)(lVar2 + 0x1c) & 0x3fffffff);
    }
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0x80000000;
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar7 + 0x58),lVar2,0x100);
  }
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))();
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384c2a0 FUN_14384c2a0 body=735 status=ok
// SIG undefined FUN_14384c2a0(void)

void FUN_14384c2a0(longlong param_1,undefined1 *param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_res8;
  longlong local_res10;
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  undefined2 local_88;
  undefined4 local_86;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtdoSynchronousProcessingRun");
  }
  local_86 = 0x200800;
  local_88 = 0x50;
  FUN_14382bbe0(local_80);
  local_80[0] = *param_2;
  FUN_143802ce0(&local_78,param_2 + 8);
  local_60 = *(undefined4 *)(param_2 + 0x20);
  puVar5 = *(undefined8 **)(param_1 + 0x238);
  local_5c = param_2[0x24];
  local_58 = *(undefined4 *)(param_2 + 0x28);
  local_54 = param_2[0x2c];
  local_50 = *(undefined4 *)(param_2 + 0x30);
  local_4c = *(undefined4 *)(param_2 + 0x34);
  local_48 = *(undefined4 *)(param_2 + 0x38);
  local_44 = param_2[0x3c];
  local_40 = *(undefined4 *)(param_2 + 0x40);
  puVar1 = puVar5 + *(int *)(param_1 + 0x240);
  for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
    (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_88);
  }
  hkaiWorld::makeProcessingContext(param_1,&local_res8,param_2,0,param_4);
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtInitialProcessing");
  }
  FUN_143847760(param_1,&local_res10,local_res8);
  if (local_res10 == 0) goto LAB_14384c3f4;
  do {
    (**(code **)(*param_3 + 0x70))(param_3,local_res10,0);
    if (local_res10 != 0) {
      FUN_14370c150();
    }
LAB_14384c3f4:
    if (pvVar3 != (LPVOID)0x0) {
      FUN_14370d750(pvVar3,&DAT_145b8eda0);
    }
    pvVar3 = TlsGetValue(DAT_146b8198c);
    if (pvVar3 != (LPVOID)0x0) {
      FUN_14370d5c0(pvVar3,"TtPhases");
    }
    FUN_143847780(param_1,&local_res10);
  } while (local_res10 != 0);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtFinalProcessing");
  }
  FUN_143847740(param_1,&local_res10,local_res8);
  if (local_res10 != 0) {
    local_a0 = 0;
    local_a8 = hkTrivialTaskQueue::vftable;
    local_98 = 0;
    local_94 = 0x80000000;
    FUN_14371a420(&local_a8,local_res10,0);
    uVar4 = FUN_143703a50();
    local_98 = 0;
    if (-1 < (int)local_94) {
      FUN_143702e10(uVar4,local_a0,8,local_94 & 0x3fffffff);
    }
    if (local_res10 != 0) {
      FUN_14370c150();
    }
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  if (local_res8 != 0) {
    FUN_14370c150();
  }
  uVar4 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar4,local_78,4,local_6c & 0x3fffffff);
  }
  local_78 = 0;
  local_6c = 0x80000000;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384c580 FUN_14384c580 body=503 status=ok
// SIG undefined FUN_14384c580(void)

void FUN_14384c580(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 local_78;
  undefined4 local_76;
  undefined1 local_70 [72];
  undefined1 local_28;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtenableAsyncProcessing");
  }
  local_76 = 0x1a0800;
  local_78 = 0x60;
  FUN_143718d80(local_70);
  FUN_14384ba90(local_70,param_2);
  puVar5 = *(undefined8 **)(param_1 + 0x238);
  puVar7 = puVar5 + *(int *)(param_1 + 0x240);
  local_28 = param_3;
  for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
    (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_78);
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  lVar4 = (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar3 + 0x58),0x78);
  puVar7 = (undefined8 *)0x0;
  puVar5 = puVar7;
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)FUN_143718df0(lVar4,param_2);
  }
  if (puVar5 != *(undefined8 **)(param_1 + 0x4e8)) {
    if (*(undefined8 **)(param_1 + 0x4e8) != (undefined8 *)0x0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0x4e8) = puVar5;
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar6 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x100);
  puVar5 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x4d0);
    puVar6[2] = puVar6 + 6;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x80000018;
    hkBlockStream::init(puVar6,uVar1,0);
    puVar5 = puVar6;
  }
  *(undefined8 **)(param_1 + 0x4d8) = puVar5;
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x28);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
    *puVar5 = 0;
    puVar7 = puVar5;
  }
  *(undefined8 **)(param_1 + 0x4e0) = puVar7;
  FUN_143dfc780(puVar7,*(undefined8 *)(param_1 + 0x4d0),*(undefined8 *)(param_1 + 0x4d8));
  *(undefined1 *)(param_1 + 0x4b8) = param_3;
  FUN_14384ba00(local_70);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 14384c780 FUN_14384c780 body=106 status=ok
// SIG undefined FUN_14384c780(void)

undefined1 * FUN_14384c780(longlong param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  FUN_14382bbe0(param_2);
  *param_2 = 1;
  if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x1d4);
  }
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  param_2[0x24] = 1;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x514);
  param_2[0x2c] = 1;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x27c);
  param_2[0x3c] = 0;
  return param_2;
}



// FUNCTION 14384c7f0 FUN_14384c7f0 body=110 status=ok
// SIG undefined FUN_14384c7f0(void)

undefined1 * FUN_14384c7f0(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  FUN_14382bbe0(param_2);
  cVar1 = UPrimitiveComponent::IsWelded(param_1);
  if (cVar1 == '\0') {
    *param_2 = 1;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x1d4);
    param_2[0x24] = 1;
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x514);
    param_2[0x2c] = 1;
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x27c);
  }
  param_2[0x3c] = 1;
  return param_2;
}



// FUNCTION 14384c860 FUN_14384c860 body=8 status=ok
// SIG undefined FUN_14384c860(void)

char * FUN_14384c860(void)

{
  return "DoProcessingPhases";
}


