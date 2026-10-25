// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143798ba0 FUN_143798ba0 body=188 status=ok
// SIG undefined FUN_143798ba0(void)

void FUN_143798ba0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkDefaultCompoundMeshBody::vftable;
  if (param_1[0xe] != 0) {
    FUN_14370c150();
  }
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = 0;
  if (0 < (longlong)iVar1) {
    do {
      if (*(longlong *)(param_1[3] + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  if (param_1[0xf] != 0) {
    FUN_14370c150();
  }
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143798c60 FUN_143798c60 body=261 status=ok
// SIG undefined FUN_143798c60(void)

void FUN_143798c60(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = 0;
  *param_1 = hkDefaultCompoundMeshShape::vftable;
  if (0 < (longlong)iVar1) {
    do {
      if (*(longlong *)(param_1[3] + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar2,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar2,param_1[5],0x40,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143798d70 FUN_143798d70 body=492 status=ok
// SIG undefined FUN_143798d70(void)

void FUN_143798d70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_28;
  undefined4 local_20;
  uint local_1c;
  ulonglong local_18;
  uint local_10;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  lVar6 = (longlong)(int)uVar5;
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    if ((int)uVar5 < 1) {
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    else {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar7 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < lVar6);
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
  }
  else {
    local_28 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    local_18 = uVar7;
    local_10 = uVar5;
    if (uVar5 != 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      uVar4 = uVar5 * 0x40 + 0x7f & 0xffffff80;
      local_18 = *(ulonglong *)((longlong)pvVar2 + 0x18);
      uVar8 = (longlong)(int)uVar4 + local_18;
      if ((*(int *)((longlong)pvVar2 + 0x10) < (int)uVar4) ||
         (*(ulonglong *)((longlong)pvVar2 + 0x20) < uVar8)) {
        local_18 = FUN_1437138c0();
      }
      else {
        *(ulonglong *)((longlong)pvVar2 + 0x18) = uVar8;
      }
    }
    local_1c = uVar5 | 0x80000000;
    local_28 = local_18;
    FUN_14379b480(*(undefined8 *)(param_1 + 0x78),param_2,&local_28);
    uVar8 = uVar7;
    if (0 < lVar6) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar7 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x80))(plVar1,(longlong)(int)uVar8 * 0x40 + local_28);
        }
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < lVar6);
    }
    uVar5 = local_10;
    uVar7 = local_18;
    if (local_18 == local_28) {
      local_20 = 0;
    }
    *(undefined1 *)(param_1 + 0x81) = 0;
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    uVar5 = uVar5 * 0x40 + 0x7f & 0xffffff80;
    if (((*(int *)((longlong)pvVar2 + 0x10) < (int)uVar5) ||
        ((longlong)(int)uVar5 + uVar7 != *(longlong *)((longlong)pvVar2 + 0x18))) ||
       (*(ulonglong *)((longlong)pvVar2 + 0x28) == uVar7)) {
      FUN_143713ff0(pvVar2,uVar7);
    }
    else {
      *(ulonglong *)((longlong)pvVar2 + 0x18) = uVar7;
    }
    uVar3 = FUN_143703a50();
    local_20 = 0;
    if (-1 < (int)local_1c) {
      FUN_143702e10(uVar3,local_28,0x40,local_1c & 0x3fffffff);
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 143798f60 FUN_143798f60 body=534 status=ok
// SIG undefined FUN_143798f60(void)

void FUN_143798f60(longlong param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong local_38;
  undefined4 local_30;
  uint local_2c;
  ulonglong local_28;
  uint local_20;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  lVar6 = (longlong)(int)uVar5;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    lVar8 = 0;
    if (0 < (int)uVar5) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar8 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1,param_1 + 0x30);
          (**(code **)(*plVar1 + 0x88))(plVar1);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar6);
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  else if ((*(char *)(param_1 + 0x80) != '\0') || (*(char *)(param_1 + 0x81) != '\0')) {
    uVar7 = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0x80000000;
    local_28 = uVar7;
    local_20 = uVar5;
    if (uVar5 != 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      uVar4 = uVar5 * 0x40 + 0x7f & 0xffffff80;
      local_28 = *(ulonglong *)((longlong)pvVar2 + 0x18);
      uVar9 = (longlong)(int)uVar4 + local_28;
      if ((*(int *)((longlong)pvVar2 + 0x10) < (int)uVar4) ||
         (*(ulonglong *)((longlong)pvVar2 + 0x20) < uVar9)) {
        local_28 = FUN_1437138c0();
      }
      else {
        *(ulonglong *)((longlong)pvVar2 + 0x18) = uVar9;
      }
    }
    local_2c = uVar5 | 0x80000000;
    local_38 = local_28;
    FUN_14379b480(*(undefined8 *)(param_1 + 0x78),param_1 + 0x30,&local_38);
    uVar9 = uVar7;
    if (0 < lVar6) {
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + uVar7 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1,(longlong)(int)uVar9 * 0x40 + local_38);
          (**(code **)(*plVar1 + 0x88))(plVar1);
        }
        uVar7 = uVar7 + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      } while ((longlong)uVar7 < lVar6);
    }
    uVar5 = local_20;
    uVar7 = local_28;
    *(undefined2 *)(param_1 + 0x80) = 0;
    if (local_28 == local_38) {
      local_30 = 0;
    }
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    uVar5 = uVar5 * 0x40 + 0x7f & 0xffffff80;
    if (((*(int *)((longlong)pvVar2 + 0x10) < (int)uVar5) ||
        ((longlong)(int)uVar5 + uVar7 != *(longlong *)((longlong)pvVar2 + 0x18))) ||
       (*(ulonglong *)((longlong)pvVar2 + 0x28) == uVar7)) {
      FUN_143713ff0(pvVar2,uVar7);
    }
    else {
      *(ulonglong *)((longlong)pvVar2 + 0x18) = uVar7;
    }
    uVar3 = FUN_143703a50();
    local_30 = 0;
    if (-1 < (int)local_2c) {
      FUN_143702e10(uVar3,local_38,0x40,local_2c & 0x3fffffff);
      return;
    }
  }
  return;
}



// FUNCTION 143799180 FUN_143799180 body=200 status=ok
// SIG undefined FUN_143799180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143799180(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x20), *(int *)(lVar2 + 0x30) != iVar1)) {
    uVar5 = FUN_143703a50();
    uVar7 = *(uint *)(lVar2 + 0x34) & 0x3fffffff;
    if ((int)uVar7 < iVar1) {
      iVar3 = uVar7 * 2;
      iVar4 = iVar1;
      if (iVar1 < iVar3) {
        iVar4 = iVar3;
      }
      FUN_14370c310(uVar5,(longlong *)(lVar2 + 0x28),iVar4,0x40);
    }
    iVar4 = iVar1 - *(int *)(lVar2 + 0x30);
    lVar8 = (longlong)iVar4;
    if (0 < iVar4) {
      puVar6 = (undefined8 *)
               ((longlong)*(int *)(lVar2 + 0x30) * 0x40 + *(longlong *)(lVar2 + 0x28) + 0x20);
      do {
        uVar5 = uRam00000001467f0898;
        puVar6[-4] = _DAT_1467f0890;
        puVar6[-3] = uVar5;
        uVar5 = uRam00000001467f08a8;
        puVar6[-2] = _DAT_1467f08a0;
        puVar6[-1] = uVar5;
        uVar5 = uRam00000001467f08b8;
        *puVar6 = _DAT_1467f08b0;
        puVar6[1] = uVar5;
        uVar5 = _DAT_1467f08c8;
        puVar6[2] = _DAT_1467f08c0;
        puVar6[3] = uVar5;
        lVar8 = lVar8 + -1;
        puVar6 = puVar6 + 8;
      } while (lVar8 != 0);
    }
    *(int *)(lVar2 + 0x30) = iVar1;
  }
  return;
}



// FUNCTION 143799250 FUN_143799250 body=32 status=ok
// SIG undefined FUN_143799250(void)

void FUN_143799250(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  param_2[2] = *(undefined8 *)(param_1 + 0x40);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  param_2[4] = *(undefined8 *)(param_1 + 0x50);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  param_2[6] = *(undefined8 *)(param_1 + 0x60);
  param_2[7] = uVar1;
  return;
}



// FUNCTION 143799270 FUN_143799270 body=38 status=ok
// SIG undefined FUN_143799270(void)

void FUN_143799270(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38);
  plVar2 = *(longlong **)
            (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(lVar1 + (longlong)param_2 * 8) * 8);
                    /* WARNING: Could not recover jumptable at 0x000143799292. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,*(undefined4 *)(lVar1 + (longlong)param_2 * 8 + 4));
  return;
}



// FUNCTION 1437992a0 FUN_1437992a0 body=74 status=ok
// SIG undefined FUN_1437992a0(void)

void FUN_1437992a0(longlong param_1,int param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8);
  plVar2 = *(longlong **)
            (*(longlong *)(param_1 + 0x18) +
            (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8) * 8);
  (**(code **)(*plVar2 + 0x20))(plVar2,puVar1[1]);
  *(undefined4 *)(param_4 + 0x10) = *puVar1;
  *(int *)(param_4 + 0x38) = param_2;
  return;
}



// FUNCTION 1437992f0 FUN_1437992f0 body=36 status=ok
// SIG undefined FUN_1437992f0(void)

void FUN_1437992f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14379bbc0();
    *(undefined1 *)(param_1 + 0x81) = 1;
  }
  return;
}



// FUNCTION 143799320 FUN_143799320 body=36 status=ok
// SIG undefined FUN_143799320(void)

void FUN_143799320(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_14379bc10();
    *(undefined1 *)(param_1 + 0x81) = 1;
  }
  return;
}



// FUNCTION 143799350 FUN_143799350 body=132 status=ok
// SIG undefined FUN_143799350(void)

int * FUN_143799350(longlong param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res8 [2];
  
  iVar1 = *(int *)(param_1 + 0x20);
  lVar3 = 0;
  if (0 < (longlong)iVar1) {
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
      if ((plVar2 != (longlong *)0x0) &&
         ((**(code **)(*plVar2 + 0x78))(plVar2,local_res8,param_3,param_4), local_res8[0] < 0)) {
        *param_2 = local_res8[0];
        return param_2;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437993e0 FUN_1437993e0 body=39 status=ok
// SIG undefined FUN_1437993e0(void)

void FUN_1437993e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x40) = param_2[2];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x50) = param_2[4];
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = param_2[7];
  *(undefined8 *)(param_1 + 0x60) = param_2[6];
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}



// FUNCTION 143799410 FUN_143799410 body=222 status=ok
// SIG undefined FUN_143799410(void)

void FUN_143799410(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  int local_10;
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_2 + 0x38) * 8);
  local_28 = *(longlong *)(param_2 + 0x20);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)*piVar1 * 8);
  local_48[0] = *param_2;
  local_44 = *(undefined4 *)(param_2 + 4);
  local_40 = *(undefined4 *)(param_2 + 8);
  local_3c = *(undefined4 *)(param_2 + 0xc);
  local_38 = *(undefined4 *)(param_2 + 0x10);
  local_34 = param_2[0x14];
  local_30 = *(undefined8 *)(param_2 + 0x18);
  if (local_28 != 0) {
    FUN_14370c030();
  }
  local_20 = *(longlong *)(param_2 + 0x28);
  if (local_20 != 0) {
    FUN_14370c030();
  }
  local_18 = *(undefined8 *)(param_2 + 0x30);
  local_38 = 0xffffffff;
  local_10 = piVar1[1];
  (**(code **)(*plVar2 + 0x28))(plVar2,local_48);
  if (local_20 != 0) {
    FUN_14370c150();
  }
  if (local_28 != 0) {
    FUN_14370c150();
  }
  return;
}



// FUNCTION 1437994f0 FUN_1437994f0 body=618 status=ok
// SIG undefined FUN_1437994f0(void)

void FUN_1437994f0(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  char cVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  uint local_res8;
  uint local_res10;
  uint local_78;
  longlong local_70;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar14 = (ulonglong)(int)param_2;
  uVar18 = uVar14;
  local_res10 = param_2;
  do {
    local_70 = (longlong)(int)param_3;
    local_res8 = (uint)uVar14;
    uVar14 = uVar14 & 0xffffffff;
    puVar15 = (undefined4 *)(((longlong)(int)(local_res8 + param_3) >> 1) * 0x30 + param_1);
    local_58 = *puVar15;
    local_38 = puVar15[8];
    uStack_34 = puVar15[9];
    uStack_30 = puVar15[10];
    uStack_2c = puVar15[0xb];
    local_54 = puVar15[1];
    local_50 = puVar15[2];
    local_4c = puVar15[3];
    local_48 = *(undefined2 *)(puVar15 + 4);
    local_46 = *(undefined2 *)((longlong)puVar15 + 0x12);
    local_78 = param_3;
    do {
      uVar17 = (uint)uVar14;
      cVar13 = (*param_4)((longlong)(int)uVar17 * 0x30 + param_1,&local_58);
      uVar12 = local_res8;
      while (cVar13 != '\0') {
        uVar17 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar17;
        uVar18 = uVar18 + 1;
        cVar13 = (*param_4)((longlong)(int)uVar17 * 0x30 + param_1,&local_58);
        uVar12 = uVar17;
      }
      cVar13 = (*param_4)(&local_58,(longlong)(int)local_78 * 0x30 + param_1);
      local_res8 = uVar17;
      while (cVar13 != '\0') {
        local_78 = local_78 - 1;
        local_70 = local_70 + -1;
        cVar13 = (*param_4)(&local_58,(longlong)(int)local_78 * 0x30 + param_1);
        local_res8 = uVar12;
      }
      if ((int)local_78 < (int)local_res8) break;
      if (local_78 != local_res8) {
        puVar16 = (undefined4 *)(uVar18 * 0x30 + param_1);
        puVar15 = (undefined4 *)(local_70 * 0x30 + param_1);
        uVar1 = *puVar15;
        uVar2 = puVar15[1];
        uVar3 = puVar15[2];
        uVar4 = puVar15[3];
        uVar5 = *(undefined2 *)(puVar15 + 4);
        uVar6 = *(undefined2 *)((longlong)puVar15 + 0x12);
        uVar10 = *(undefined8 *)(puVar15 + 8);
        uVar11 = *(undefined8 *)(puVar15 + 10);
        *puVar15 = *puVar16;
        puVar15[1] = puVar16[1];
        puVar15[2] = puVar16[2];
        puVar15[3] = puVar16[3];
        *(undefined2 *)(puVar15 + 4) = *(undefined2 *)(puVar16 + 4);
        *(undefined2 *)((longlong)puVar15 + 0x12) = *(undefined2 *)((longlong)puVar16 + 0x12);
        uVar7 = puVar16[9];
        uVar8 = puVar16[10];
        uVar9 = puVar16[0xb];
        puVar15[8] = puVar16[8];
        puVar15[9] = uVar7;
        puVar15[10] = uVar8;
        puVar15[0xb] = uVar9;
        *puVar16 = uVar1;
        puVar16[1] = uVar2;
        puVar16[2] = uVar3;
        puVar16[3] = uVar4;
        *(undefined2 *)(puVar16 + 4) = uVar5;
        *(undefined2 *)((longlong)puVar16 + 0x12) = uVar6;
        *(undefined8 *)(puVar16 + 8) = uVar10;
        *(undefined8 *)(puVar16 + 10) = uVar11;
      }
      local_78 = local_78 - 1;
      local_70 = local_70 + -1;
      local_res8 = local_res8 + 1;
      uVar14 = (ulonglong)local_res8;
      uVar18 = uVar18 + 1;
    } while ((int)local_res8 <= (int)local_78);
    if ((int)local_res10 < (int)local_78) {
      FUN_1437994f0(param_1,local_res10,local_78,param_4);
    }
    if ((int)param_3 <= (int)local_res8) {
      return;
    }
    uVar14 = (ulonglong)local_res8;
    local_res10 = local_res8;
  } while( true );
}



// FUNCTION 143799770 FUN_143799770 body=16 status=ok
// SIG undefined FUN_143799770(void)

undefined8 * FUN_143799770(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffff;
  return param_1;
}



// FUNCTION 143799780 FUN_143799780 body=29 status=ok
// SIG undefined FUN_143799780(void)

undefined8 * FUN_143799780(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkSkinnedMeshShape::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 1437997a0 FUN_1437997a0 body=95 status=ok
// SIG undefined FUN_1437997a0(void)

undefined8 * FUN_1437997a0(undefined8 *param_1)

{
  FUN_143799780();
  *param_1 = hkStorageSkinnedMeshShape::vftable;
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
  return param_1;
}



// FUNCTION 143799800 FUN_143799800 body=15 status=ok
// SIG undefined FUN_143799800(void)

void FUN_143799800(undefined8 *param_1)

{
  *param_1 = hkSkinnedMeshShape::vftable;
  FUN_14370c000();
  return;
}



// FUNCTION 143799810 FUN_143799810 body=173 status=ok
// SIG undefined FUN_143799810(void)

void FUN_143799810(longlong param_1,longlong param_2,undefined2 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0x38);
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x40) == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
    FUN_14370c460(uVar1,plVar2,0x10);
  }
  if ((longlong)*(int *)(param_1 + 0x40) * 0x10 + *plVar2 != 0) {
    FUN_143799770();
  }
  plVar2 = (longlong *)((longlong)*(int *)(param_1 + 0x40) * 0x10 + *plVar2);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*plVar2 != 0) {
    FUN_14370c150();
  }
  *plVar2 = param_2;
  *(undefined2 *)(plVar2 + 1) = param_3;
  *(undefined2 *)((longlong)plVar2 + 10) = param_4;
  return;
}



// FUNCTION 1437998c0 FUN_1437998c0 body=239 status=ok
// SIG undefined FUN_1437998c0(void)

undefined2 * FUN_1437998c0(longlong param_1,undefined2 *param_2,void *param_3,uint param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  *param_2 = *(undefined2 *)(param_1 + 0x30);
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1 + 0x28,4);
  }
  puVar1 = (undefined2 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30) * 4);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *puVar1 = *(undefined2 *)(param_1 + 0x20);
  puVar1[1] = (short)param_4;
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  iVar5 = *(int *)(param_1 + 0x20) + param_4;
  if (((int)uVar4 < iVar5) && ((int)uVar4 < iVar5)) {
    iVar2 = iVar5;
    if (iVar5 < (int)(uVar4 * 2)) {
      iVar2 = uVar4 * 2;
    }
    FUN_14370c310(uVar3,(longlong *)(param_1 + 0x18),iVar2,2);
  }
  if (0 < (int)param_4) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 2),
               param_3,(ulonglong)param_4 * 2);
  }
  *(int *)(param_1 + 0x20) = iVar5;
  return param_2;
}



// FUNCTION 1437999b0 FUN_1437999b0 body=106 status=ok
// SIG undefined FUN_1437999b0(void)

void FUN_1437999b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
    FUN_14370c460(uVar1,(longlong *)(param_1 + 0x48),0x30);
  }
  puVar2 = (undefined8 *)((longlong)*(int *)(param_1 + 0x50) * 0x30 + *(longlong *)(param_1 + 0x48))
  ;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *puVar2 = *param_2;
    puVar2[1] = uVar1;
    uVar1 = param_2[3];
    puVar2[2] = param_2[2];
    puVar2[3] = uVar1;
    uVar1 = param_2[5];
    puVar2[4] = param_2[4];
    puVar2[5] = uVar1;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 143799a20 FUN_143799a20 body=1861 status=ok
// SIG undefined FUN_143799a20(void)

void FUN_143799a20(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int local_res8 [2];
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  int local_588;
  uint local_584;
  int local_580;
  int local_57c;
  longlong local_578;
  int local_570;
  uint local_56c;
  longlong local_568;
  uint local_560;
  uint local_55c;
  int local_558;
  int local_554;
  int local_550;
  int local_54c;
  ushort local_548;
  undefined2 local_546 [23];
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  longlong *local_508;
  ushort local_500;
  short local_4fe [3];
  int local_4f8;
  int local_4f4;
  undefined2 local_4f0;
  undefined4 local_4ec;
  undefined1 local_4e8 [64];
  undefined1 local_4a8 [20];
  char local_494;
  longlong local_490;
  longlong *local_488;
  longlong lStack_480;
  undefined1 local_468 [272];
  undefined1 local_358 [792];
  
  local_57c = (**(code **)(*param_1 + 0x18))();
  local_580 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar18 = 0;
  if (4 < DAT_146b862b8) {
    FUN_14373a730(&local_558,&DAT_146b862b0,5);
    lVar10 = FUN_14373bbd0(&local_558,"---------------------------------------------------",
                           &DAT_145b909f0,0);
    *(char **)(lVar10 + 0x20) = "Mesh\\Skin\\hkSkinnedMeshShape.cpp";
    *(undefined8 *)(lVar10 + 0x28) = 0x34;
    FUN_14373a950(&local_558);
    if (4 < DAT_146b862b8) {
      FUN_14373a730(&local_558,&DAT_146b862b0,5);
      lVar10 = FUN_14373bbd0(&local_558,"Num bone sections: {}. Num parts: {}.",&DAT_145b75a88,
                             &local_57c,&local_580,0);
      *(char **)(lVar10 + 0x20) = "Mesh\\Skin\\hkSkinnedMeshShape.cpp";
      *(undefined8 *)(lVar10 + 0x28) = 0x35;
      FUN_14373a950(&local_558);
    }
  }
  local_588 = 0;
  if (0 < local_57c) {
    do {
      FUN_143799770(&local_508);
      (**(code **)(*param_1 + 0x20))(param_1,local_588,&local_508);
      plVar6 = local_508;
      local_578 = 0;
      local_570 = 0;
      local_56c = 0x80000000;
      local_518 = (**(code **)(*local_508 + 0x18))(local_508);
      if (4 < DAT_146b862b8) {
        local_res8[0] = CONCAT22(local_res8[0]._2_2_,local_500);
        FUN_14373a730(&local_558,&DAT_146b862b0,5);
        lVar10 = FUN_14373bbd0(&local_558,
                               "Bone section {}. Start boneSet {}, numBoneSets {}. Num sections {}",
                               &DAT_145baa360,&local_588,local_res8,local_4fe,&local_518,0);
        *(char **)(lVar10 + 0x20) = "Mesh\\Skin\\hkSkinnedMeshShape.cpp";
        *(undefined8 *)(lVar10 + 0x28) = 0x3f;
        FUN_14373a950(&local_558);
      }
      local_584 = 0;
      uVar13 = uVar18;
      if (0 < local_580) {
        do {
          (**(code **)(*param_1 + 0x40))(param_1,uVar13,&local_558);
          if ((local_500 <= local_548) &&
             ((int)(uint)local_548 < (int)((int)local_4fe[0] + (uint)local_500))) {
            local_488 = (longlong *)0x0;
            lStack_480 = 0;
            (**(code **)(*plVar6 + 0x20))
                      (plVar6,local_546[0],CONCAT71((uint7)(byte)(local_548 >> 8),3),local_4a8);
            if (4 < DAT_146b862b8) {
              local_res8[0] = CONCAT22(local_res8[0]._2_2_,local_548);
              FUN_14373a730(local_4e8,&DAT_146b862b0,5);
              lVar10 = FUN_14373bbd0(local_4e8,
                                     "Part {}. BoneSet {}. Sub-mesh {}. Start vertex {}. NumVerts {}. Start Index {}. NumIndices {}."
                                     ,&DAT_145baa390,&local_584,local_res8,local_546,&local_558,
                                     &local_554,&local_550,&local_54c,0);
              *(char **)(lVar10 + 0x20) = "Mesh\\Skin\\hkSkinnedMeshShape.cpp";
              *(undefined8 *)(lVar10 + 0x28) = 0x4d;
              FUN_14373a950(local_4e8);
            }
            plVar7 = local_488;
            local_4f8 = local_558;
            local_4f0 = 0;
            local_4f4 = local_554;
            local_4ec = 1;
            (**(code **)(*local_488 + 0x38))(local_488,&local_4f8,local_358);
            FUN_14379bdf0(local_468);
            (**(code **)(*plVar7 + 0x28))(plVar7,local_468);
            uVar8 = FUN_14379beb0(local_468,1);
            iVar9 = local_554;
            uVar11 = FUN_143703a50();
            if ((int)(local_56c & 0x3fffffff) < iVar9) {
              iVar3 = (local_56c & 0x3fffffff) * 2;
              iVar14 = iVar9;
              if (iVar9 < iVar3) {
                iVar14 = iVar3;
              }
              FUN_14370c310(uVar11,&local_578,iVar14,0x10);
            }
            local_570 = iVar9;
            local_568 = 0;
            local_560 = 0;
            uVar16 = local_554 * 4;
            local_55c = 0x80000000;
            if (0 < (int)uVar16) {
              uVar13 = (ulonglong)uVar16;
              if ((int)uVar16 < 0) {
                uVar13 = uVar18;
              }
              FUN_14370c310(&PTR_vftable_1467f0638,&local_568,uVar13,4);
            }
            local_560 = uVar16;
            (**(code **)(*plVar7 + 0x48))(plVar7,local_358,uVar8,local_568);
            uVar13 = uVar18;
            uVar15 = uVar18;
            uVar17 = uVar18;
            if (0 < local_554) {
              do {
                uVar16 = (int)uVar17 + 1;
                puVar1 = (undefined4 *)(local_568 + (longlong)(int)uVar15 * 4);
                uVar8 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                puVar2 = (undefined4 *)(local_578 + -0x10 + uVar13 + 0x10);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                puVar2[2] = uVar4;
                puVar2[3] = uVar5;
                uVar13 = uVar13 + 0x10;
                uVar15 = (ulonglong)((int)uVar15 + 4);
                uVar17 = (ulonglong)uVar16;
              } while ((int)uVar16 < local_554);
            }
            uVar13 = uVar18;
            iVar9 = local_554;
            if (0 < local_554) {
              do {
                iVar14 = (int)uVar13;
                if (4 < DAT_146b862b8) {
                  local_res8[0] = local_558 + iVar14;
                  lVar10 = (longlong)iVar14 * 0x10 + local_578;
                  FUN_14373a730(local_4e8,&DAT_146b862b0,5);
                  lVar10 = FUN_14373bbd0(local_4e8,"Vtx {}.\t{:,3}",&DAT_145baa3d0,local_res8,lVar10
                                         ,0);
                  *(char **)(lVar10 + 0x20) = "Mesh\\Skin\\hkSkinnedMeshShape.cpp";
                  *(undefined8 *)(lVar10 + 0x28) = 0x67;
                  FUN_14373a950(local_4e8);
                  iVar9 = local_554;
                }
                uVar13 = (ulonglong)(iVar14 + 1U);
              } while ((int)(iVar14 + 1U) < iVar9);
            }
            local_560 = 0;
            if (-1 < (int)local_55c) {
              FUN_143702e10(&PTR_vftable_1467f0638,local_568,4,local_55c & 0x3fffffff);
            }
            local_568 = 0;
            local_55c = 0x80000000;
            (**(code **)(*plVar7 + 0x68))(plVar7,local_358);
            lVar10 = local_490;
            if (local_494 == '\x01') {
              uVar13 = uVar18;
              iVar9 = local_54c;
              if (0 < local_54c) {
                do {
                  iVar14 = local_550 + (int)uVar13;
                  local_res20[0] = *(undefined2 *)(lVar10 + (longlong)iVar14 * 2);
                  local_res18[0] = *(undefined2 *)(lVar10 + (longlong)(iVar14 + 1) * 2);
                  local_res10[0] = *(undefined2 *)(lVar10 + (longlong)(iVar14 + 2) * 2);
                  if (4 < DAT_146b862b8) {
                    FUN_14373a730(local_4e8,&DAT_146b862b0,5);
                    lVar12 = FUN_14373bbd0(local_4e8,"Tri ({}, {}, {}).",&DAT_145baa3e8,local_res20,
                                           local_res18,local_res10,0);
                    *(char **)(lVar12 + 0x20) = "Mesh\\Skin\\hkSkinnedMeshShape.cpp";
                    *(undefined8 *)(lVar12 + 0x28) = 0x78;
                    FUN_14373a950(local_4e8);
                    iVar9 = local_54c;
                  }
                  uVar16 = (int)uVar13 + 3;
                  uVar13 = (ulonglong)uVar16;
                } while ((int)uVar16 < iVar9);
              }
            }
            else if ((local_494 == '\x02') && (uVar13 = uVar18, iVar9 = local_54c, 0 < local_54c)) {
              do {
                iVar14 = local_550 + (int)uVar13;
                local_50c = *(undefined4 *)(lVar10 + (longlong)iVar14 * 4);
                local_510 = *(undefined4 *)(lVar10 + (longlong)(iVar14 + 1) * 4);
                local_514 = *(undefined4 *)(lVar10 + (longlong)(iVar14 + 2) * 4);
                if (4 < DAT_146b862b8) {
                  FUN_14373a730(local_4e8,&DAT_146b862b0,5);
                  lVar12 = FUN_14373bbd0(local_4e8,"Tri ({}, {}, {}).",&DAT_145baa408,&local_50c,
                                         &local_510,&local_514,0);
                  *(char **)(lVar12 + 0x20) = "Mesh\\Skin\\hkSkinnedMeshShape.cpp";
                  *(undefined8 *)(lVar12 + 0x28) = 0x83;
                  FUN_14373a950(local_4e8);
                  iVar9 = local_54c;
                }
                uVar16 = (int)uVar13 + 3;
                uVar13 = (ulonglong)uVar16;
              } while ((int)uVar16 < iVar9);
            }
            (**(code **)(*plVar6 + 0x28))(plVar6,local_4a8);
            if (lStack_480 != 0) {
              FUN_14370c150();
            }
            if (local_488 != (longlong *)0x0) {
              FUN_14370c150();
            }
          }
          local_584 = local_584 + 1;
          uVar13 = (ulonglong)local_584;
        } while ((int)local_584 < local_580);
      }
      uVar11 = FUN_143703a50();
      local_570 = 0;
      if (-1 < (int)local_56c) {
        FUN_143702e10(uVar11,local_578,0x10,local_56c & 0x3fffffff);
      }
      local_578 = 0;
      local_56c = 0x80000000;
      if (local_508 != (longlong *)0x0) {
        FUN_14370c150();
      }
      local_588 = local_588 + 1;
    } while (local_588 < local_57c);
  }
  return;
}



// FUNCTION 14379a170 FUN_14379a170 body=83 status=ok
// SIG undefined FUN_14379a170(void)

void FUN_14379a170(longlong param_1,int param_2,longlong *param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x38));
  if (*plVar1 != 0) {
    FUN_14370c030();
  }
  if (*param_3 != 0) {
    FUN_14370c150();
  }
  *param_3 = *plVar1;
  *(short *)(param_3 + 1) = (short)plVar1[1];
  *(undefined2 *)((longlong)param_3 + 10) = *(undefined2 *)((longlong)plVar1 + 10);
  return;
}



// FUNCTION 14379a1d0 FUN_14379a1d0 body=16 status=ok
// SIG undefined FUN_14379a1d0(void)

void FUN_14379a1d0(longlong param_1,ushort param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)param_2 * 4);
  return;
}



// FUNCTION 14379a1e0 FUN_14379a1e0 body=187 status=ok
// SIG undefined FUN_14379a1e0(void)

void FUN_14379a1e0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  
  puVar1 = (ushort *)(*(longlong *)(param_1 + 0x28) + (param_2 & 0xffff) * 4);
  FUN_143703a50();
  *(undefined4 *)(param_3 + 1) = 0;
  uVar2 = *puVar1;
  lVar9 = *(longlong *)(param_1 + 0x18);
  uVar3 = puVar1[1];
  uVar8 = (ulonglong)uVar3;
  uVar5 = FUN_143703a50();
  uVar7 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  iVar10 = (int)param_3[1] + (uint)uVar3;
  if (((int)uVar7 < iVar10) && ((int)uVar7 < iVar10)) {
    iVar4 = iVar10;
    if (iVar10 < (int)(uVar7 * 2)) {
      iVar4 = uVar7 * 2;
    }
    FUN_14370c310(uVar5,param_3,iVar4,2);
  }
  puVar6 = (undefined2 *)(*param_3 + (longlong)(int)param_3[1] * 2);
  if (uVar3 != 0) {
    lVar9 = (lVar9 + (ulonglong)uVar2 * 2) - (longlong)puVar6;
    do {
      *puVar6 = *(undefined2 *)(lVar9 + (longlong)puVar6);
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(int *)(param_3 + 1) = iVar10;
  return;
}



// FUNCTION 14379a2a0 FUN_14379a2a0 body=9 status=ok
// SIG undefined FUN_14379a2a0(void)

ulonglong FUN_14379a2a0(longlong param_1)

{
  return *(ulonglong *)(param_1 + 0x58) & 0xfffffffffffffffe;
}



// FUNCTION 14379a2b0 FUN_14379a2b0 body=69 status=ok
// SIG undefined FUN_14379a2b0(void)

void FUN_14379a2b0(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x48));
  *param_3 = *puVar2;
  param_3[1] = puVar2[1];
  param_3[2] = puVar2[2];
  param_3[3] = puVar2[3];
  *(undefined2 *)(param_3 + 4) = *(undefined2 *)(puVar2 + 4);
  *(undefined2 *)((longlong)param_3 + 0x12) = *(undefined2 *)((longlong)puVar2 + 0x12);
  uVar1 = *(undefined8 *)(puVar2 + 10);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(param_3 + 10) = uVar1;
  return;
}



// FUNCTION 14379a310 FUN_14379a310 body=9 status=ok
// SIG undefined FUN_14379a310(void)

void FUN_14379a310(longlong param_1)

{
  FUN_1437166c0(param_1 + 0x58);
  return;
}



// FUNCTION 14379a320 FUN_14379a320 body=32 status=ok
// SIG undefined FUN_14379a320(void)

void FUN_14379a320(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x50)) {
    FUN_1437994f0(*(undefined8 *)(param_1 + 0x48),0,*(int *)(param_1 + 0x50) + -1,&LAB_14379a300);
    return;
  }
  return;
}



// FUNCTION 14379a340 FUN_14379a340 body=365 status=ok
// SIG undefined FUN_14379a340(void)

void FUN_14379a340(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  *param_1 = hkMemoryMeshShape::vftable;
  FUN_143716650(param_1 + 9);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],4,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],2,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    puVar3 = (uint *)(param_1[3] + 0x1c + lVar4 * 0x38);
    do {
      uVar2 = FUN_143703a50();
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar3 + -3),2,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      if (*(longlong *)(puVar3 + -5) != 0) {
        FUN_14370c150();
      }
      if (*(longlong *)(puVar3 + -7) != 0) {
        FUN_14370c150();
      }
      puVar3 = puVar3 + -0xe;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x38,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14379a4b0 FUN_14379a4b0 body=333 status=ok
// SIG undefined FUN_14379a4b0(void)

void FUN_14379a4b0(longlong param_1,int param_2,byte param_3,undefined1 *param_4)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong local_res8;
  longlong local_res20;
  
  plVar7 = (longlong *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0x18));
  *param_4 = (char)plVar7[4];
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)((longlong)plVar7 + 0x24);
  uVar4 = FUN_14379da80((char)plVar7[4],*(undefined4 *)((longlong)plVar7 + 0x24));
  *(undefined4 *)(param_4 + 8) = uVar4;
  *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0x2c);
  param_4[0x14] = (char)plVar7[5];
  *(int *)(param_4 + 0x10) = (int)plVar7[6];
  *(longlong **)(param_4 + 0x30) = plVar7 + 2;
  if (plVar7[1] != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(param_4 + 0x28) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_4 + 0x28) = plVar7[1];
  if ((param_3 & 2) == 0) {
    local_res8 = 0;
    plVar5 = &local_res8;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    local_res20 = *plVar7;
    if (*plVar7 != 0) {
      FUN_14370c030();
    }
    plVar5 = &local_res20;
    bVar3 = true;
    bVar2 = false;
  }
  lVar6 = *(longlong *)(param_4 + 0x20);
  lVar1 = *plVar5;
  *plVar5 = 0;
  if (lVar6 != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_4 + 0x20) = lVar1;
  if (bVar2) {
    if (local_res8 != 0) {
      FUN_14370c150();
    }
  }
  if ((bVar3) && (local_res20 != 0)) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_4 + 0x18) = 0;
  if (((param_3 & 1) != 0) && ((char)plVar7[5] != '\0')) {
    if ((char)plVar7[5] == '\x01') {
      lVar6 = *(longlong *)(param_1 + 0x28) + (longlong)*(int *)((longlong)plVar7 + 0x34) * 2;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x38) + (longlong)*(int *)((longlong)plVar7 + 0x34) * 4;
    }
    *(longlong *)(param_4 + 0x18) = lVar6;
  }
  *(int *)(param_4 + 0x38) = param_2;
  return;
}



// FUNCTION 14379a600 FUN_14379a600 body=72 status=ok
// SIG undefined FUN_14379a600(void)

void FUN_14379a600(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(int *)(param_2 + 0x38) * 0x38 + *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(lVar1 + 8) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_2 + 0x28);
  return;
}



// FUNCTION 14379a650 FUN_14379a650 body=82 status=ok
// SIG undefined FUN_14379a650(void)

undefined8 * FUN_14379a650(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*param_1)(param_1,&local_18);
  }
  cVar1 = FUN_143714870(&DAT_1467f9ad0,puVar2[1]);
  puVar2 = (undefined8 *)0x0;
  if (cVar1 != '\0') {
    puVar2 = param_1;
  }
  return puVar2;
}



// FUNCTION 14379a6b0 FUN_14379a6b0 body=82 status=ok
// SIG undefined FUN_14379a6b0(void)

undefined8 * FUN_14379a6b0(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*param_1)(param_1,&local_18);
  }
  cVar1 = FUN_143714870(&DAT_1467f9bb0,puVar2[1]);
  puVar2 = (undefined8 *)0x0;
  if (cVar1 != '\0') {
    puVar2 = param_1;
  }
  return puVar2;
}



// FUNCTION 14379a710 FUN_14379a710 body=121 status=ok
// SIG undefined FUN_14379a710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14379a710(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkMemoryMeshMaterial::vftable;
  FUN_143716620(param_1 + 3);
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar1 = uRam00000001467f06f8;
  param_1[6] = _DAT_1467f06f0;
  param_1[7] = uVar1;
  uVar1 = _DAT_1467f08c8;
  param_1[8] = _DAT_1467f08c0;
  param_1[9] = uVar1;
  uVar1 = _DAT_1467f08c8;
  param_1[10] = _DAT_1467f08c0;
  param_1[0xb] = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 14379a790 FUN_14379a790 body=169 status=ok
// SIG undefined FUN_14379a790(void)

void FUN_14379a790(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkMemoryMeshMaterial::vftable;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[4];
  lVar3 = (longlong)(*(int *)(param_1 + 5) + -1);
  if (-1 < *(int *)(param_1 + 5) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],8,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_143716650(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14379a840 FUN_14379a840 body=352 status=ok
// SIG undefined FUN_14379a840(void)

longlong FUN_14379a840(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  
  FUN_143716660(param_1 + 0x18,param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_143703a50();
  lVar7 = *(longlong *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x28) + -1;
  lVar10 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      if (*(longlong *)(lVar7 + lVar10 * 8) != 0) {
        FUN_14370c150();
      }
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8);
  iVar6 = -*(int *)(param_1 + 0x28);
  lVar7 = (longlong)iVar6;
  if (0 < iVar6) {
    do {
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = 0;
      }
      puVar12 = puVar12 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar6 = *(int *)(param_2 + 0x28);
  lVar10 = (longlong)iVar6;
  lVar7 = *(longlong *)(param_2 + 0x20);
  uVar8 = FUN_143703a50();
  uVar9 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  iVar6 = *(int *)(param_1 + 0x28) + iVar6;
  if (((int)uVar9 < iVar6) && ((int)uVar9 < iVar6)) {
    iVar2 = iVar6;
    if (iVar6 < (int)(uVar9 * 2)) {
      iVar2 = uVar9 * 2;
    }
    FUN_14370c310(uVar8,param_1 + 0x20,iVar2,8);
  }
  plVar11 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8);
  if (0 < lVar10) {
    lVar7 = lVar7 - (longlong)plVar11;
    do {
      if ((plVar11 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(lVar7 + (longlong)plVar11), *plVar11 = lVar1, lVar1 != 0)) {
        FUN_14370c030();
      }
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(param_1 + 0x28) = iVar6;
  return param_1;
}



// FUNCTION 14379a9a0 FUN_14379a9a0 body=46 status=ok
// SIG undefined FUN_14379a9a0(void)

void FUN_14379a9a0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14379abb0();
                    /* WARNING: Could not recover jumptable at 0x00014379a9ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,uVar1,param_2);
  return;
}



// FUNCTION 14379a9d0 GetPropertyTooltip body=26 status=ok
// SIG undefined GetPropertyTooltip(void)

undefined8 UPropertyValue::GetPropertyTooltip(undefined8 param_1,undefined8 param_2)

{
  FUN_14370c030(param_2);
  return param_2;
}



// FUNCTION 14379a9f0 FUN_14379a9f0 body=35 status=ok
// SIG undefined FUN_14379a9f0(void)

undefined4 *
FUN_14379a9f0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_14379bfb0(param_4,param_3);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14379aa20 FUN_14379aa20 body=292 status=ok
// SIG undefined FUN_14379aa20(void)

ulonglong FUN_14379aa20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  lVar5 = FUN_14379a650(param_2);
  uVar6 = 0;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
    if (extraout_XMM0_Da == *(float *)(param_1 + 0x7c)) {
      uVar6 = (**(code **)(*param_2 + 0x88))(param_2);
      if (extraout_XMM0_Da_00 == *(float *)(param_1 + 0x78)) {
        uVar7 = param_2[3] & 0xfffffffffffffffe;
        uVar8 = *(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffffe;
        if (uVar8 == 0) {
          uVar6 = (ulonglong)-(uint)(uVar7 != 0);
        }
        else {
          uVar6 = 0;
          if (uVar7 == 0) goto LAB_14379aa3d;
          uVar6 = hkString::strCmp(uVar8,uVar7);
        }
        if ((int)uVar6 == 0) {
          uVar3 = *(uint *)(param_1 + 0x28);
          uVar6 = (ulonglong)uVar3;
          if (uVar3 == *(uint *)(param_2 + 5)) {
            uVar3 = uVar3 - 1;
            uVar6 = (ulonglong)uVar3;
            lVar5 = (longlong)(int)uVar3;
            if (-1 < (int)uVar3) {
              do {
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar5 * 8);
                if (plVar1 == (longlong *)0x0) {
LAB_14379aac8:
                  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + lVar5 * 8);
                  uVar6 = (**(code **)(*plVar1 + 0x90))
                                    (plVar1,*(undefined8 *)(param_2[4] + lVar5 * 8));
                  if ((char)uVar6 == '\0') {
                    return uVar6 & 0xffffffffffffff00;
                  }
                }
                else {
                  uVar6 = (**(code **)(*plVar1 + 0x68))();
                  if ((int)uVar6 != 0xc) goto LAB_14379aac8;
                }
                lVar5 = lVar5 + -1;
              } while (-1 < lVar5);
            }
            auVar2._4_4_ = -(uint)((*(float *)((longlong)param_2 + 0x44) ==
                                    *(float *)(param_1 + 0x44) &&
                                   *(float *)((longlong)param_2 + 0x34) ==
                                   *(float *)(param_1 + 0x34)) &&
                                  (*(float *)((longlong)param_2 + 100) == *(float *)(param_1 + 100)
                                  && *(float *)((longlong)param_2 + 0x54) ==
                                     *(float *)(param_1 + 0x54)));
            auVar2._0_4_ = -(uint)((*(float *)(param_2 + 8) == *(float *)(param_1 + 0x40) &&
                                   *(float *)(param_2 + 6) == *(float *)(param_1 + 0x30)) &&
                                  (*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0x60) &&
                                  *(float *)(param_2 + 10) == *(float *)(param_1 + 0x50)));
            auVar2._8_4_ = -(uint)((*(float *)(param_2 + 9) == *(float *)(param_1 + 0x48) &&
                                   *(float *)(param_2 + 7) == *(float *)(param_1 + 0x38)) &&
                                  (*(float *)(param_2 + 0xd) == *(float *)(param_1 + 0x68) &&
                                  *(float *)(param_2 + 0xb) == *(float *)(param_1 + 0x58)));
            auVar2._12_4_ =
                 -(uint)((*(float *)((longlong)param_2 + 0x4c) == *(float *)(param_1 + 0x4c) &&
                         *(float *)((longlong)param_2 + 0x3c) == *(float *)(param_1 + 0x3c)) &&
                        (*(float *)((longlong)param_2 + 0x6c) == *(float *)(param_1 + 0x6c) &&
                        *(float *)((longlong)param_2 + 0x5c) == *(float *)(param_1 + 0x5c)));
            iVar4 = movmskps((int)uVar6,auVar2);
            return CONCAT71((int7)(CONCAT44((int)(uVar6 >> 0x20),iVar4) >> 8),iVar4 == 0xf);
          }
        }
      }
    }
  }
LAB_14379aa3d:
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 14379ab50 FUN_14379ab50 body=36 status=ok
// SIG undefined FUN_14379ab50(void)

void FUN_14379ab50(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *param_3 = *(undefined8 *)(param_1 + 0x40);
  param_3[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *param_4 = *(undefined8 *)(param_1 + 0x50);
  param_4[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *param_5 = *(undefined8 *)(param_1 + 0x60);
  param_5[1] = uVar1;
  return;
}



// FUNCTION 14379ab80 FUN_14379ab80 body=12 status=ok
// SIG undefined FUN_14379ab80(void)

undefined8 FUN_14379ab80(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
}



// FUNCTION 14379ab90 FUN_14379ab90 body=23 status=ok
// SIG undefined FUN_14379ab90(void)

bool FUN_14379ab90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14379a6b0(param_2);
  return lVar1 != 0;
}



// FUNCTION 14379abb0 FUN_14379abb0 body=390 status=ok
// SIG undefined FUN_14379abb0(void)

uint FUN_14379abb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  
  iVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  iVar10 = *(int *)(param_1 + 0x28);
  uVar8 = 0;
  uVar11 = 0;
  uVar12 = uVar8;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x20) + uVar8 * 8) + 0x68))();
      if (iVar2 < iVar3) break;
      uVar11 = uVar11 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar10);
  }
  if ((int)uVar11 < iVar10) {
    uVar4 = FUN_143703a50();
    iVar2 = *(int *)(param_1 + 0x28);
    uVar5 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
    iVar10 = iVar2 + 1;
    if (((int)uVar5 < iVar10) && ((int)uVar5 < iVar10)) {
      iVar3 = iVar10;
      if (iVar10 < (int)(uVar5 * 2)) {
        iVar3 = uVar5 * 2;
      }
      FUN_14370c310(uVar4,param_1 + 0x20,iVar3,8);
    }
    lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)(int)uVar11 * 8;
    FUN_143732890(lVar6 + 8,lVar6,(longlong)(int)(iVar2 - uVar11) << 3);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar11 * 8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
    }
    *(int *)(param_1 + 0x28) = iVar10;
  }
  else {
    iVar10 = uVar11 + 1;
    plVar1 = (longlong *)(param_1 + 0x20);
    uVar4 = FUN_143703a50();
    uVar5 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
    if ((int)uVar5 < iVar10) {
      iVar3 = uVar5 * 2;
      iVar2 = iVar10;
      if (iVar10 < iVar3) {
        iVar2 = iVar3;
      }
      FUN_14370c310(uVar4,plVar1,iVar2,8);
    }
    lVar6 = *plVar1;
    iVar2 = (*(int *)(param_1 + 0x28) - iVar10) + -1;
    lVar9 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        if (*(longlong *)(lVar6 + (longlong)iVar10 * 8 + lVar9 * 8) != 0) {
          FUN_14370c150();
        }
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
    puVar7 = (undefined8 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x28) * 8);
    iVar2 = iVar10 - *(int *)(param_1 + 0x28);
    lVar6 = (longlong)iVar2;
    if (0 < iVar2) {
      do {
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
        }
        puVar7 = puVar7 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    *(int *)(param_1 + 0x28) = iVar10;
  }
  return uVar11;
}



// FUNCTION 14379ad40 FUN_14379ad40 body=36 status=ok
// SIG undefined FUN_14379ad40(void)

void FUN_14379ad40(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x40) = *param_3;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = param_4[1];
  *(undefined8 *)(param_1 + 0x50) = *param_4;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = param_5[1];
  *(undefined8 *)(param_1 + 0x60) = *param_5;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return;
}



// FUNCTION 14379ad70 FUN_14379ad70 body=9 status=ok
// SIG undefined FUN_14379ad70(void)

void FUN_14379ad70(longlong param_1)

{
  FUN_1437166c0(param_1 + 0x18);
  return;
}



// FUNCTION 14379ad80 FUN_14379ad80 body=64 status=ok
// SIG undefined FUN_14379ad80(void)

void FUN_14379ad80(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 8);
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*plVar1 != 0) {
    FUN_14370c150();
  }
  *plVar1 = param_3;
  return;
}



// FUNCTION 14379adc0 FUN_14379adc0 body=400 status=ok
// SIG undefined FUN_14379adc0(void)

undefined8 *
FUN_14379adc0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkSkinBinding::vftable;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar11 = FUN_143703a50();
  uVar16 = (ulonglong)param_5;
  uVar10 = *(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff;
  iVar15 = *(int *)(param_1 + 5) + param_5;
  if (((int)uVar10 < iVar15) && ((int)uVar10 < iVar15)) {
    iVar3 = iVar15;
    if (iVar15 < (int)(uVar10 * 2)) {
      iVar3 = uVar10 * 2;
    }
    FUN_14370c310(uVar11,param_1 + 4,iVar3,0x40);
  }
  lVar14 = (longlong)*(int *)(param_1 + 5) * 0x40 + param_1[4];
  lVar13 = (longlong)(int)param_5;
  if (0 < (int)param_5) {
    puVar12 = (undefined8 *)(lVar14 + 0x10);
    param_3 = param_3 - lVar14;
    do {
      puVar1 = (undefined8 *)(param_3 + -0x10 + (longlong)puVar12);
      uVar11 = puVar1[1];
      uVar8 = *(undefined8 *)(param_3 + (longlong)puVar12);
      uVar9 = ((undefined8 *)(param_3 + (longlong)puVar12))[1];
      puVar12[-2] = *puVar1;
      puVar12[-1] = uVar11;
      puVar2 = (undefined4 *)(param_3 + 0x10 + (longlong)puVar12);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *puVar12 = uVar8;
      puVar12[1] = uVar9;
      puVar1 = (undefined8 *)(param_3 + 0x20 + (longlong)puVar12);
      uVar11 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined4 *)(puVar12 + 2) = uVar4;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uVar5;
      *(undefined4 *)(puVar12 + 3) = uVar6;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar7;
      puVar12[4] = uVar11;
      puVar12[5] = uVar8;
      puVar12 = puVar12 + 8;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(int *)(param_1 + 5) = iVar15;
  uVar11 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff;
  iVar15 = *(int *)(param_1 + 7) + param_5;
  if (((int)uVar10 < iVar15) && ((int)uVar10 < iVar15)) {
    iVar3 = iVar15;
    if (iVar15 < (int)(uVar10 * 2)) {
      iVar3 = uVar10 * 2;
    }
    FUN_14370c310(uVar11,param_1 + 6,iVar3,8);
  }
  lVar13 = param_1[6] + (longlong)*(int *)(param_1 + 7) * 8;
  if (0 < (int)param_5) {
    param_4 = param_4 - lVar13;
    do {
      if (lVar13 != 0) {
        FUN_1437165f0(lVar13,param_4 + lVar13);
      }
      lVar13 = lVar13 + 8;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  *(int *)(param_1 + 7) = iVar15;
  return param_1;
}



// FUNCTION 14379af50 FUN_14379af50 body=11 status=ok
// SIG undefined FUN_14379af50(void)

void FUN_14379af50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014379af57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  return;
}



// FUNCTION 14379af60 FUN_14379af60 body=11 status=ok
// SIG undefined FUN_14379af60(void)

void FUN_14379af60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014379af67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  return;
}



// FUNCTION 14379af70 FUN_14379af70 body=11 status=ok
// SIG undefined FUN_14379af70(void)

void FUN_14379af70(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014379af77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
  return;
}



// FUNCTION 14379af80 FUN_14379af80 body=11 status=ok
// SIG undefined FUN_14379af80(void)

void FUN_14379af80(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014379af87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))();
  return;
}



// FUNCTION 14379af90 FUN_14379af90 body=11 status=ok
// SIG undefined FUN_14379af90(void)

void FUN_14379af90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014379af97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  return;
}



// FUNCTION 14379afa0 FUN_14379afa0 body=82 status=ok
// SIG undefined FUN_14379afa0(void)

undefined8 * FUN_14379afa0(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)*param_1)(param_1,&local_18);
  }
  cVar1 = FUN_143714870(&DAT_1467fa1f0,puVar2[1]);
  puVar2 = (undefined8 *)0x0;
  if (cVar1 != '\0') {
    puVar2 = param_1;
  }
  return puVar2;
}



// FUNCTION 14379b000 FUN_14379b000 body=57 status=ok
// SIG undefined FUN_14379b000(void)

undefined8 * FUN_14379b000(undefined8 *param_1,undefined8 param_2)

{
  FUN_14379dab0();
  *param_1 = hkMemoryMeshTexture::Sampler::vftable;
  FUN_1437165f0(param_1 + 3,param_2);
  return param_1;
}



// FUNCTION 14379b040 FUN_14379b040 body=59 status=ok
// SIG undefined FUN_14379b040(void)

undefined8 * FUN_14379b040(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkMemoryMeshTexture::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0x20000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  return param_1;
}



// FUNCTION 14379b080 FUN_14379b080 body=151 status=ok
// SIG undefined FUN_14379b080(void)

longlong FUN_14379b080(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437a01c0(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0xe0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
    }
  }
  return param_1;
}



// FUNCTION 14379b120 FUN_14379b120 body=75 status=ok
// SIG undefined FUN_14379b120(void)

void FUN_14379b120(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
  if (lVar2 != 0) {
    FUN_14379b000(lVar2,param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 14379b170 FUN_14379b170 body=227 status=ok
// SIG undefined FUN_14379b170(void)

bool FUN_14379b170(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (lVar2 = FUN_14379afa0(param_2), lVar2 == 0)) {
    return false;
  }
  if (((*(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30)) &&
      ((((*(char *)(param_1 + 0x31) != '\0') == (*(char *)(param_2 + 0x31) != '\0') &&
        (*(char *)(param_1 + 0x32) == *(char *)(param_2 + 0x32))) &&
       (*(char *)(param_1 + 0x33) == *(char *)(param_2 + 0x33))))) &&
     (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) {
    uVar3 = *(ulonglong *)(param_2 + 0x18) & 0xfffffffffffffffe;
    uVar4 = *(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffffe;
    if (uVar4 == 0) {
      iVar1 = -(uint)(uVar3 != 0);
    }
    else {
      if (uVar3 == 0) {
        return false;
      }
      iVar1 = hkString::strCmp(uVar4,uVar3);
    }
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) {
      iVar1 = FUN_14370c6f0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20),
                            *(undefined4 *)(param_1 + 0x28));
      return iVar1 == 0;
    }
  }
  return false;
}



// FUNCTION 14379b260 FUN_14379b260 body=21 status=ok
// SIG undefined FUN_14379b260(void)

void FUN_14379b260(longlong param_1,undefined8 *param_2,undefined4 *param_3,int *param_4)

{
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  *param_3 = *(undefined4 *)(param_1 + 0x28);
  *param_4 = (int)*(char *)(param_1 + 0x30);
  return;
}



// FUNCTION 14379b280 FUN_14379b280 body=5 status=ok
// SIG undefined FUN_14379b280(void)

int FUN_14379b280(longlong param_1)

{
  return (int)*(char *)(param_1 + 0x32);
}



// FUNCTION 14379b290 FUN_14379b290 body=5 status=ok
// SIG undefined FUN_14379b290(void)

int FUN_14379b290(longlong param_1)

{
  return (int)*(char *)(param_1 + 0x30);
}



// FUNCTION 14379b2a0 FUN_14379b2a0 body=8 status=ok
// SIG undefined FUN_14379b2a0(void)

bool FUN_14379b2a0(longlong param_1)

{
  return *(char *)(param_1 + 0x31) != '\0';
}



// FUNCTION 14379b2b0 FUN_14379b2b0 body=185 status=ok
// SIG undefined FUN_14379b2b0(void)

undefined8 * FUN_14379b2b0(longlong param_1)

{
  LPVOID pvVar1;
  undefined8 *_Dst;
  int *piVar2;
  undefined1 local_res8 [8];
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  _Dst = (undefined8 *)(**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))();
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0xe0);
    *_Dst = hkReferencedObject::vftable;
    _Dst[1] = 0;
    *(undefined4 *)(_Dst + 2) = 0x1ffff;
    FUN_1437a0140(_Dst + 3);
    *_Dst = hkImageRef::vftable;
  }
  piVar2 = (int *)FUN_1437a04f0(_Dst + 3,local_res8,
                                *(ulonglong *)(param_1 + 0x18) & 0xfffffffffffffffe);
  if (*piVar2 < 0) {
    FUN_14370c150(_Dst);
    return (undefined8 *)0x0;
  }
  return _Dst;
}



// FUNCTION 14379b370 FUN_14379b370 body=5 status=ok
// SIG undefined FUN_14379b370(void)

int FUN_14379b370(longlong param_1)

{
  return (int)*(char *)(param_1 + 0x33);
}



// FUNCTION 14379b380 FUN_14379b380 body=195 status=ok
// SIG undefined FUN_14379b380(void)

void FUN_14379b380(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_3;
  *(char *)(param_1 + 0x30) = (char)param_4;
  if (param_4 == 5) {
    FUN_143703a50();
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar2 = FUN_143703a50();
    uVar4 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
    iVar5 = *(int *)(param_1 + 0x28) + param_3;
    if (((int)uVar4 < iVar5) && ((int)uVar4 < iVar5)) {
      iVar1 = iVar5;
      if (iVar5 < (int)(uVar4 * 2)) {
        iVar1 = uVar4 * 2;
      }
      FUN_14370c310(uVar2,(longlong *)(param_1 + 0x20),iVar1,1);
    }
    puVar3 = (undefined1 *)((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x20));
    if (0 < (int)param_3) {
      param_2 = param_2 - (longlong)puVar3;
      do {
        *puVar3 = puVar3[param_2];
        puVar3 = puVar3 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    *(int *)(param_1 + 0x28) = iVar5;
    return;
  }
  *(uint *)(param_1 + 0x28) = param_3;
  *(longlong *)(param_1 + 0x20) = param_2;
  *(uint *)(param_1 + 0x2c) = param_3 | 0x80000000;
  return;
}



// FUNCTION 14379b450 FUN_14379b450 body=4 status=ok
// SIG undefined FUN_14379b450(void)

void FUN_14379b450(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x32) = param_2;
  return;
}



// FUNCTION 14379b460 FUN_14379b460 body=4 status=ok
// SIG undefined FUN_14379b460(void)

void FUN_14379b460(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x31) = param_2;
  return;
}



// FUNCTION 14379b470 FUN_14379b470 body=4 status=ok
// SIG undefined FUN_14379b470(void)

void FUN_14379b470(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x33) = param_2;
  return;
}



// FUNCTION 14379b480 FUN_14379b480 body=1640 status=ok
// SIG undefined FUN_14379b480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379b480(longlong param_1,float *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  longlong lVar32;
  float *pfVar33;
  longlong lVar34;
  undefined8 *puVar35;
  longlong lVar36;
  longlong lVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
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
  
  iVar30 = *(int *)(param_1 + 0x20);
  lVar37 = (longlong)iVar30;
  uVar31 = FUN_143703a50();
  uVar38 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar38 < iVar30) {
    iVar4 = uVar38 * 2;
    iVar29 = iVar30;
    if (iVar30 < iVar4) {
      iVar29 = iVar4;
    }
    uVar31 = FUN_14370c310(uVar31,param_3,iVar29,0x40);
  }
  lVar36 = *param_3;
  *(int *)(param_3 + 1) = iVar30;
  puVar35 = *(undefined8 **)(param_1 + 0x18);
  auVar41._0_8_ =
       CONCAT44(param_2[9] - fRam00000001467f08b4,param_2[8] - _DAT_1467f08b0) & 0x7fffffff7fffffff;
  auVar41._8_4_ = ABS(param_2[10] - fRam00000001467f08b8);
  auVar41._12_4_ = ABS(param_2[0xb] - fRam00000001467f08bc);
  auVar40._8_4_ = ABS(param_2[0xe] - DAT_1467f08c8);
  auVar40._0_8_ =
       CONCAT44(param_2[0xd] - DAT_1467f08c4,param_2[0xc] - DAT_1467f08c0) & 0x7fffffff7fffffff;
  auVar40._12_4_ = ABS(param_2[0xf] - DAT_1467f08cc);
  auVar42 = maxps(auVar41,auVar40);
  auVar39._0_8_ =
       CONCAT44(param_2[1] - fRam00000001467f0894,*param_2 - _DAT_1467f0890) & 0x7fffffff7fffffff;
  auVar39._8_4_ = ABS(param_2[2] - fRam00000001467f0898);
  auVar39._12_4_ = ABS(param_2[3] - fRam00000001467f089c);
  auVar3._8_4_ = ABS(param_2[6] - fRam00000001467f08a8);
  auVar3._0_8_ = CONCAT44(param_2[5] - fRam00000001467f08a4,param_2[4] - _DAT_1467f08a0) &
                 0x7fffffff7fffffff;
  auVar3._12_4_ = ABS(param_2[7] - fRam00000001467f08ac);
  auVar40 = maxps(auVar39,auVar3);
  auVar40 = maxps(auVar40,auVar42);
  auVar42._4_4_ = -(uint)(auVar40._4_4_ <= 1e-05);
  auVar42._0_4_ = -(uint)(auVar40._0_4_ <= 1e-05);
  auVar42._8_4_ = -(uint)(auVar40._8_4_ <= 1e-05);
  auVar42._12_4_ = -(uint)(auVar40._12_4_ <= 1e-05);
  iVar29 = movmskps((int)uVar31,auVar42);
  if (iVar29 == 0xf) {
    if (*(int *)(param_1 + 0x30) < 1) {
      iVar30 = iVar30 * 4;
      if (iVar30 != 0) {
        lVar36 = lVar36 - (longlong)puVar35;
        do {
          uVar31 = puVar35[1];
          puVar1 = (undefined8 *)(lVar36 + (longlong)puVar35);
          *puVar1 = *puVar35;
          puVar1[1] = uVar31;
          puVar35 = puVar35 + 2;
          iVar30 = iVar30 + -1;
        } while (iVar30 != 0);
      }
    }
    else {
      lVar32 = *(longlong *)(param_1 + 0x28);
      if (0 < iVar30) {
        lVar34 = (longlong)puVar35 - lVar32;
        pfVar33 = (float *)(lVar32 + 0x20);
        lVar36 = lVar36 - lVar32;
        do {
          fVar5 = pfVar33[-4];
          fVar6 = pfVar33[-3];
          fVar7 = pfVar33[-2];
          fVar8 = pfVar33[-1];
          pfVar2 = (float *)(lVar34 + -0x10 + (longlong)pfVar33);
          fVar9 = *pfVar2;
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar2 = (float *)(lVar34 + -0x20 + (longlong)pfVar33);
          fVar47 = *pfVar2;
          fVar48 = pfVar2[1];
          fVar49 = pfVar2[2];
          fVar50 = pfVar2[3];
          pfVar2 = (float *)(lVar34 + (longlong)pfVar33);
          fVar13 = *pfVar2;
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar2 = (float *)(lVar34 + 0x10 + (longlong)pfVar33);
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          fVar21 = *pfVar33;
          fVar22 = pfVar33[1];
          fVar23 = pfVar33[2];
          fVar24 = pfVar33[3];
          fVar25 = pfVar33[4];
          fVar26 = pfVar33[5];
          fVar27 = pfVar33[6];
          fVar28 = pfVar33[7];
          fVar43 = pfVar33[-8];
          fVar44 = pfVar33[-7];
          fVar45 = pfVar33[-6];
          fVar46 = pfVar33[-5];
          pfVar2 = (float *)(lVar36 + -0x10 + (longlong)pfVar33);
          *pfVar2 = fVar5 * fVar47 + fVar6 * fVar9 + fVar7 * fVar13 + fVar8 * fVar17;
          pfVar2[1] = fVar5 * fVar48 + fVar6 * fVar10 + fVar7 * fVar14 + fVar8 * fVar18;
          pfVar2[2] = fVar5 * fVar49 + fVar6 * fVar11 + fVar7 * fVar15 + fVar8 * fVar19;
          pfVar2[3] = fVar5 * fVar50 + fVar6 * fVar12 + fVar7 * fVar16 + fVar8 * fVar20;
          pfVar2 = (float *)(lVar36 + (longlong)pfVar33);
          *pfVar2 = fVar21 * fVar47 + fVar22 * fVar9 + fVar23 * fVar13 + fVar24 * fVar17;
          pfVar2[1] = fVar21 * fVar48 + fVar22 * fVar10 + fVar23 * fVar14 + fVar24 * fVar18;
          pfVar2[2] = fVar21 * fVar49 + fVar22 * fVar11 + fVar23 * fVar15 + fVar24 * fVar19;
          pfVar2[3] = fVar21 * fVar50 + fVar22 * fVar12 + fVar23 * fVar16 + fVar24 * fVar20;
          pfVar2 = (float *)(lVar36 + 0x10 + (longlong)pfVar33);
          *pfVar2 = fVar25 * fVar47 + fVar26 * fVar9 + fVar27 * fVar13 + fVar28 * fVar17;
          pfVar2[1] = fVar25 * fVar48 + fVar26 * fVar10 + fVar27 * fVar14 + fVar28 * fVar18;
          pfVar2[2] = fVar25 * fVar49 + fVar26 * fVar11 + fVar27 * fVar15 + fVar28 * fVar19;
          pfVar2[3] = fVar25 * fVar50 + fVar26 * fVar12 + fVar27 * fVar16 + fVar28 * fVar20;
          pfVar2 = (float *)(lVar36 + -0x20 + (longlong)pfVar33);
          *pfVar2 = fVar43 * fVar47 + fVar44 * fVar9 + fVar45 * fVar13 + fVar46 * fVar17;
          pfVar2[1] = fVar43 * fVar48 + fVar44 * fVar10 + fVar45 * fVar14 + fVar46 * fVar18;
          pfVar2[2] = fVar43 * fVar49 + fVar44 * fVar11 + fVar45 * fVar15 + fVar46 * fVar19;
          pfVar2[3] = fVar43 * fVar50 + fVar44 * fVar12 + fVar45 * fVar16 + fVar46 * fVar20;
          pfVar33 = pfVar33 + 0x10;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) < 1) {
    if (0 < iVar30) {
      pfVar33 = (float *)(puVar35 + 4);
      lVar36 = lVar36 - (longlong)puVar35;
      do {
        fVar5 = pfVar33[-4];
        fVar6 = pfVar33[-3];
        fVar7 = pfVar33[-2];
        fVar8 = pfVar33[-1];
        fVar9 = param_2[4];
        fVar10 = param_2[5];
        fVar11 = param_2[6];
        fVar12 = param_2[7];
        fVar47 = *param_2;
        fVar48 = param_2[1];
        fVar49 = param_2[2];
        fVar50 = param_2[3];
        fVar13 = param_2[8];
        fVar14 = param_2[9];
        fVar15 = param_2[10];
        fVar16 = param_2[0xb];
        fVar17 = param_2[0xc];
        fVar18 = param_2[0xd];
        fVar19 = param_2[0xe];
        fVar20 = param_2[0xf];
        fVar21 = *pfVar33;
        fVar22 = pfVar33[1];
        fVar23 = pfVar33[2];
        fVar24 = pfVar33[3];
        fVar25 = pfVar33[4];
        fVar26 = pfVar33[5];
        fVar27 = pfVar33[6];
        fVar28 = pfVar33[7];
        fVar43 = pfVar33[-8];
        fVar44 = pfVar33[-7];
        fVar45 = pfVar33[-6];
        fVar46 = pfVar33[-5];
        pfVar2 = (float *)(lVar36 + -0x10 + (longlong)pfVar33);
        *pfVar2 = fVar5 * fVar47 + fVar6 * fVar9 + fVar7 * fVar13 + fVar8 * fVar17;
        pfVar2[1] = fVar5 * fVar48 + fVar6 * fVar10 + fVar7 * fVar14 + fVar8 * fVar18;
        pfVar2[2] = fVar5 * fVar49 + fVar6 * fVar11 + fVar7 * fVar15 + fVar8 * fVar19;
        pfVar2[3] = fVar5 * fVar50 + fVar6 * fVar12 + fVar7 * fVar16 + fVar8 * fVar20;
        pfVar2 = (float *)(lVar36 + (longlong)pfVar33);
        *pfVar2 = fVar21 * fVar47 + fVar22 * fVar9 + fVar23 * fVar13 + fVar24 * fVar17;
        pfVar2[1] = fVar21 * fVar48 + fVar22 * fVar10 + fVar23 * fVar14 + fVar24 * fVar18;
        pfVar2[2] = fVar21 * fVar49 + fVar22 * fVar11 + fVar23 * fVar15 + fVar24 * fVar19;
        pfVar2[3] = fVar21 * fVar50 + fVar22 * fVar12 + fVar23 * fVar16 + fVar24 * fVar20;
        pfVar2 = (float *)(lVar36 + 0x10 + (longlong)pfVar33);
        *pfVar2 = fVar25 * fVar47 + fVar26 * fVar9 + fVar27 * fVar13 + fVar28 * fVar17;
        pfVar2[1] = fVar25 * fVar48 + fVar26 * fVar10 + fVar27 * fVar14 + fVar28 * fVar18;
        pfVar2[2] = fVar25 * fVar49 + fVar26 * fVar11 + fVar27 * fVar15 + fVar28 * fVar19;
        pfVar2[3] = fVar25 * fVar50 + fVar26 * fVar12 + fVar27 * fVar16 + fVar28 * fVar20;
        pfVar2 = (float *)(lVar36 + -0x20 + (longlong)pfVar33);
        *pfVar2 = fVar43 * fVar47 + fVar44 * fVar9 + fVar45 * fVar13 + fVar46 * fVar17;
        pfVar2[1] = fVar43 * fVar48 + fVar44 * fVar10 + fVar45 * fVar14 + fVar46 * fVar18;
        pfVar2[2] = fVar43 * fVar49 + fVar44 * fVar11 + fVar45 * fVar15 + fVar46 * fVar19;
        pfVar2[3] = fVar43 * fVar50 + fVar44 * fVar12 + fVar45 * fVar16 + fVar46 * fVar20;
        pfVar33 = pfVar33 + 0x10;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
    }
  }
  else if (0 < iVar30) {
    pfVar33 = (float *)(puVar35 + 4);
    lVar32 = *(longlong *)(param_1 + 0x28) - (longlong)puVar35;
    lVar36 = lVar36 - (longlong)puVar35;
    do {
      fVar5 = pfVar33[-8];
      fVar6 = pfVar33[-7];
      fVar7 = pfVar33[-6];
      fVar8 = pfVar33[-5];
      fVar9 = param_2[8];
      fVar10 = param_2[9];
      fVar11 = param_2[10];
      fVar12 = param_2[0xb];
      fVar47 = param_2[0xc];
      fVar48 = param_2[0xd];
      fVar49 = param_2[0xe];
      fVar50 = param_2[0xf];
      fVar13 = param_2[4];
      fVar14 = param_2[5];
      fVar15 = param_2[6];
      fVar16 = param_2[7];
      fVar17 = *param_2;
      fVar18 = param_2[1];
      fVar19 = param_2[2];
      fVar20 = param_2[3];
      pfVar2 = (float *)(lVar32 + -0x10 + (longlong)pfVar33);
      fVar21 = *pfVar2;
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      pfVar2 = (float *)(lVar32 + 0x10 + (longlong)pfVar33);
      fVar25 = *pfVar2;
      fVar26 = pfVar2[1];
      fVar27 = pfVar2[2];
      fVar28 = pfVar2[3];
      fVar43 = fVar5 * fVar17 + fVar6 * fVar13 + fVar7 * fVar9 + fVar8 * fVar47;
      fVar44 = fVar5 * fVar18 + fVar6 * fVar14 + fVar7 * fVar10 + fVar8 * fVar48;
      fVar45 = fVar5 * fVar19 + fVar6 * fVar15 + fVar7 * fVar11 + fVar8 * fVar49;
      fVar46 = fVar5 * fVar20 + fVar6 * fVar16 + fVar7 * fVar12 + fVar8 * fVar50;
      fVar5 = pfVar33[-4];
      fVar6 = pfVar33[-3];
      fVar7 = pfVar33[-2];
      fVar8 = pfVar33[-1];
      fVar55 = fVar5 * fVar17 + fVar6 * fVar13 + fVar7 * fVar9 + fVar8 * fVar47;
      fVar56 = fVar5 * fVar18 + fVar6 * fVar14 + fVar7 * fVar10 + fVar8 * fVar48;
      fVar57 = fVar5 * fVar19 + fVar6 * fVar15 + fVar7 * fVar11 + fVar8 * fVar49;
      fVar58 = fVar5 * fVar20 + fVar6 * fVar16 + fVar7 * fVar12 + fVar8 * fVar50;
      fVar5 = *pfVar33;
      fVar6 = pfVar33[1];
      fVar7 = pfVar33[2];
      fVar8 = pfVar33[3];
      fVar51 = fVar5 * fVar17 + fVar6 * fVar13 + fVar7 * fVar9 + fVar8 * fVar47;
      fVar52 = fVar5 * fVar18 + fVar6 * fVar14 + fVar7 * fVar10 + fVar8 * fVar48;
      fVar53 = fVar5 * fVar19 + fVar6 * fVar15 + fVar7 * fVar11 + fVar8 * fVar49;
      fVar54 = fVar5 * fVar20 + fVar6 * fVar16 + fVar7 * fVar12 + fVar8 * fVar50;
      fVar5 = pfVar33[4];
      fVar6 = pfVar33[5];
      fVar7 = pfVar33[6];
      fVar8 = pfVar33[7];
      fVar47 = fVar5 * fVar17 + fVar6 * fVar13 + fVar7 * fVar9 + fVar8 * fVar47;
      fVar48 = fVar5 * fVar18 + fVar6 * fVar14 + fVar7 * fVar10 + fVar8 * fVar48;
      fVar49 = fVar5 * fVar19 + fVar6 * fVar15 + fVar7 * fVar11 + fVar8 * fVar49;
      fVar50 = fVar5 * fVar20 + fVar6 * fVar16 + fVar7 * fVar12 + fVar8 * fVar50;
      pfVar2 = (float *)(lVar32 + (longlong)pfVar33);
      fVar5 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      pfVar2 = (float *)(lVar32 + -0x20 + (longlong)pfVar33);
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      pfVar2 = (float *)((longlong)pfVar33 + lVar36);
      *pfVar2 = fVar6 * fVar55 + fVar5 * fVar43 + fVar7 * fVar51 + fVar8 * fVar47;
      pfVar2[1] = fVar6 * fVar56 + fVar5 * fVar44 + fVar7 * fVar52 + fVar8 * fVar48;
      pfVar2[2] = fVar6 * fVar57 + fVar5 * fVar45 + fVar7 * fVar53 + fVar8 * fVar49;
      pfVar2[3] = fVar6 * fVar58 + fVar5 * fVar46 + fVar7 * fVar54 + fVar8 * fVar50;
      pfVar2 = (float *)(lVar36 + -0x20 + (longlong)pfVar33);
      *pfVar2 = fVar10 * fVar55 + fVar9 * fVar43 + fVar11 * fVar51 + fVar12 * fVar47;
      pfVar2[1] = fVar10 * fVar56 + fVar9 * fVar44 + fVar11 * fVar52 + fVar12 * fVar48;
      pfVar2[2] = fVar10 * fVar57 + fVar9 * fVar45 + fVar11 * fVar53 + fVar12 * fVar49;
      pfVar2[3] = fVar10 * fVar58 + fVar9 * fVar46 + fVar11 * fVar54 + fVar12 * fVar50;
      pfVar2 = (float *)(lVar36 + -0x10 + (longlong)pfVar33);
      *pfVar2 = fVar43 * fVar21 + fVar22 * fVar55 + fVar23 * fVar51 + fVar24 * fVar47;
      pfVar2[1] = fVar44 * fVar21 + fVar22 * fVar56 + fVar23 * fVar52 + fVar24 * fVar48;
      pfVar2[2] = fVar45 * fVar21 + fVar22 * fVar57 + fVar23 * fVar53 + fVar24 * fVar49;
      pfVar2[3] = fVar46 * fVar21 + fVar22 * fVar58 + fVar23 * fVar54 + fVar24 * fVar50;
      pfVar2 = (float *)(lVar36 + 0x10 + (longlong)pfVar33);
      *pfVar2 = fVar43 * fVar25 + fVar26 * fVar55 + fVar27 * fVar51 + fVar28 * fVar47;
      pfVar2[1] = fVar44 * fVar25 + fVar26 * fVar56 + fVar27 * fVar52 + fVar28 * fVar48;
      pfVar2[2] = fVar45 * fVar25 + fVar26 * fVar57 + fVar27 * fVar53 + fVar28 * fVar49;
      pfVar2[3] = fVar46 * fVar25 + fVar26 * fVar58 + fVar27 * fVar54 + fVar28 * fVar50;
      pfVar33 = pfVar33 + 0x10;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
  }
  return;
}



// FUNCTION 14379baf0 FUN_14379baf0 body=136 status=ok
// SIG undefined FUN_14379baf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379baf0(longlong param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x30) < 1) {
    lVar4 = (longlong)param_4;
    if (0 < param_4) {
      puVar3 = param_3 + 4;
      do {
        uVar1 = uRam00000001467f0898;
        puVar3[-4] = _DAT_1467f0890;
        puVar3[-3] = uVar1;
        uVar1 = uRam00000001467f08a8;
        puVar3[-2] = _DAT_1467f08a0;
        puVar3[-1] = uVar1;
        uVar1 = uRam00000001467f08b8;
        *puVar3 = _DAT_1467f08b0;
        puVar3[1] = uVar1;
        uVar1 = _DAT_1467f08c8;
        puVar3[2] = _DAT_1467f08c0;
        puVar3[3] = uVar1;
        lVar4 = lVar4 + -1;
        puVar3 = puVar3 + 8;
      } while (lVar4 != 0);
    }
  }
  else if (0 < param_4) {
    puVar3 = (undefined8 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x28));
    param_4 = param_4 * 4;
    if (param_4 != 0) {
      do {
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        puVar3 = puVar3 + 2;
        *param_3 = uVar1;
        param_3[1] = uVar2;
        param_3 = param_3 + 2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  return;
}



// FUNCTION 14379bb80 FUN_14379bb80 body=53 status=ok
// SIG undefined FUN_14379bb80(void)

void FUN_14379bb80(longlong param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (0 < param_4) {
    puVar3 = (undefined8 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18));
    for (param_4 = param_4 * 4; param_4 != 0; param_4 = param_4 + -1) {
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      puVar3 = puVar3 + 2;
      *param_3 = uVar1;
      param_3[1] = uVar2;
      param_3 = param_3 + 2;
    }
  }
  return;
}



// FUNCTION 14379bbc0 FUN_14379bbc0 body=69 status=ok
// SIG undefined FUN_14379bbc0(void)

void FUN_14379bbc0(longlong param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((0 < *(int *)(param_1 + 0x30)) && (0 < param_4)) {
    puVar3 = (undefined8 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x28));
    for (param_4 = param_4 * 4; param_4 != 0; param_4 = param_4 + -1) {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      param_3 = param_3 + 2;
      *puVar3 = uVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
    }
  }
  return;
}



// FUNCTION 14379bc10 FUN_14379bc10 body=53 status=ok
// SIG undefined FUN_14379bc10(void)

void FUN_14379bc10(longlong param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (0 < param_4) {
    puVar3 = (undefined8 *)((longlong)param_2 * 0x40 + *(longlong *)(param_1 + 0x18));
    for (param_4 = param_4 * 4; param_4 != 0; param_4 = param_4 + -1) {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      param_3 = param_3 + 2;
      *puVar3 = uVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
    }
  }
  return;
}



// FUNCTION 14379bc50 FUN_14379bc50 body=375 status=ok
// SIG undefined FUN_14379bc50(void)

void FUN_14379bc50(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_res8;
  uint local_res10;
  uint local_58;
  longlong local_50;
  undefined8 local_48 [2];
  ulonglong local_38;
  
  uVar5 = (ulonglong)(int)param_2;
  uVar7 = uVar5;
  local_res10 = param_2;
  do {
    local_50 = (longlong)(int)param_3;
    local_res8 = (uint)uVar5;
    uVar5 = uVar5 & 0xffffffff;
    local_48[0] = *(undefined8 *)(param_1 + ((longlong)(int)(local_res8 + param_3) >> 1) * 8);
    local_58 = param_3;
    do {
      uVar6 = (uint)uVar5;
      local_38 = uVar7;
      cVar4 = (*param_4)(param_1 + (longlong)(int)uVar6 * 8,local_48);
      uVar2 = local_res8;
      uVar3 = local_38;
      while (cVar4 != '\0') {
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
        uVar7 = uVar7 + 1;
        cVar4 = (*param_4)(param_1 + (longlong)(int)uVar6 * 8,local_48);
        uVar2 = uVar6;
        uVar3 = uVar7;
      }
      local_38 = uVar3;
      cVar4 = (*param_4)(local_48,param_1 + (longlong)(int)local_58 * 8);
      local_res8 = uVar6;
      while (cVar4 != '\0') {
        local_58 = local_58 - 1;
        local_50 = local_50 + -1;
        cVar4 = (*param_4)(local_48,param_1 + (longlong)(int)local_58 * 8);
        uVar7 = local_38;
        local_res8 = uVar2;
      }
      if ((int)local_58 < (int)local_res8) break;
      if (local_58 != local_res8) {
        uVar1 = *(undefined8 *)(param_1 + local_50 * 8);
        *(undefined8 *)(param_1 + local_50 * 8) = *(undefined8 *)(param_1 + uVar7 * 8);
        *(undefined8 *)(param_1 + uVar7 * 8) = uVar1;
      }
      local_58 = local_58 - 1;
      local_50 = local_50 + -1;
      local_res8 = local_res8 + 1;
      uVar5 = (ulonglong)local_res8;
      uVar7 = uVar7 + 1;
      local_38 = uVar7;
    } while ((int)local_res8 <= (int)local_58);
    if ((int)local_res10 < (int)local_58) {
      FUN_14379bc50(param_1,local_res10,local_58,param_4);
    }
    if ((int)param_3 <= (int)local_res8) {
      return;
    }
    uVar5 = (ulonglong)local_res8;
    local_res10 = local_res8;
  } while( true );
}



// FUNCTION 14379bdd0 FUN_14379bdd0 body=23 status=ok
// SIG undefined FUN_14379bdd0(void)

undefined8 FUN_14379bdd0(undefined8 param_1)

{
  FUN_14379bfb0();
  return param_1;
}



// FUNCTION 14379bdf0 FUN_14379bdf0 body=14 status=ok
// SIG undefined FUN_14379bdf0(void)

longlong FUN_14379bdf0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  return param_1;
}



// FUNCTION 14379be00 thunk_FUN_14379bfb0 body=5 status=ok
// SIG undefined thunk_FUN_14379bfb0(void)

void thunk_FUN_14379bfb0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  lVar1 = (longlong)*(int *)(param_2 + 0x100);
  if (0 < lVar1) {
    param_2 = param_2 - (longlong)param_1;
    do {
      *param_1 = *(undefined8 *)(param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14379be10 FUN_14379be10 body=74 status=ok
// SIG undefined FUN_14379be10(void)

void FUN_14379be10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x100) < 0x20) {
    iVar1 = FUN_14379beb0(param_1,*(undefined1 *)((longlong)param_2 + 2),
                          *(undefined1 *)((longlong)param_2 + 3));
    if (iVar1 < 0) {
      *(undefined8 *)(param_1 + (longlong)*(int *)(param_1 + 0x100) * 8) = *param_2;
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
  }
  return;
}



// FUNCTION 14379be60 FUN_14379be60 body=73 status=ok
// SIG undefined FUN_14379be60(void)

int FUN_14379be60(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x100);
  lVar7 = (longlong)iVar2;
  iVar3 = 0;
  if (0 < iVar2) {
    pbVar6 = (byte *)(param_1 + 4);
    iVar5 = iVar3;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 8;
      iVar4 = iVar5 + 1;
      if ((bVar1 & 8) == 0) {
        iVar4 = iVar5;
      }
      lVar7 = lVar7 + -1;
      iVar5 = iVar4;
    } while (lVar7 != 0);
    if (iVar4 != 0) {
      iVar3 = (iVar4 != iVar2) + 1;
    }
  }
  return iVar3;
}



// FUNCTION 14379beb0 FUN_14379beb0 body=58 status=ok
// SIG undefined FUN_14379beb0(void)

ulonglong FUN_14379beb0(longlong param_1,byte param_2,uint param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x100)) {
    pbVar1 = (byte *)(param_1 + 3);
    uVar3 = uVar2;
    do {
      if ((pbVar1[-1] == param_2) && (*pbVar1 == param_3)) {
        return uVar3;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      uVar2 = uVar2 + 1;
      pbVar1 = pbVar1 + 8;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x100));
  }
  return 0xffffffff;
}



// FUNCTION 14379bf10 FUN_14379bf10 body=81 status=ok
// SIG undefined FUN_14379bf10(void)

undefined8 FUN_14379bf10(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  
  lVar4 = 1;
  if (1 < (longlong)*(int *)(param_1 + 0x100)) {
    pbVar3 = (byte *)(param_1 + 3);
    do {
      if ((pbVar3[7] < pbVar3[-1]) ||
         ((pbVar3[7] <= pbVar3[-1] &&
          ((bVar1 = *pbVar3, bVar2 = pbVar3[8], bVar2 <= bVar1 && bVar1 != bVar2 || (bVar1 == bVar2)
           ))))) {
        return 0;
      }
      lVar4 = lVar4 + 1;
      pbVar3 = pbVar3 + 8;
    } while (lVar4 < *(int *)(param_1 + 0x100));
  }
  return 1;
}



// FUNCTION 14379bf70 FUN_14379bf70 body=62 status=ok
// SIG undefined FUN_14379bf70(void)

void FUN_14379bf70(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14379bf10();
  if ((cVar1 == '\0') && (1 < *(int *)(param_1 + 0x100))) {
    FUN_14379bc50(param_1,0,*(int *)(param_1 + 0x100) + -1,&LAB_14379bef0);
    return;
  }
  return;
}



// FUNCTION 14379bfb0 FUN_14379bfb0 body=50 status=ok
// SIG undefined FUN_14379bfb0(void)

void FUN_14379bfb0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  lVar1 = (longlong)*(int *)(param_2 + 0x100);
  if (0 < lVar1) {
    param_2 = param_2 - (longlong)param_1;
    do {
      *param_1 = *(undefined8 *)(param_2 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14379bff0 FUN_14379bff0 body=196 status=ok
// SIG undefined FUN_14379bff0(void)

void FUN_14379bff0(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  *param_1 = hkMemoryMeshBody::vftable;
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar3 = 0;
    do {
      FUN_14370c150(*(undefined8 *)(param_1[0xe] + lVar3));
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0xf));
  }
  FUN_143716650(param_1 + 0x10);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],8,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  if (param_1[0xd] != 0) {
    FUN_14370c150();
  }
  if (param_1[0xc] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14379c0c0 FUN_14379c0c0 body=157 status=ok
// SIG undefined FUN_14379c0c0(void)

undefined8 * FUN_14379c0c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkMemoryMeshVertexBuffer::vftable;
  FUN_14379bdf0(param_1 + 3);
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  FUN_14370d870(param_1 + 0x38,0);
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  FUN_14379cab0(param_1,param_2);
  FUN_14379c9f0(param_1,param_3);
  *(undefined1 *)((longlong)param_1 + 0x1ec) = 0;
  return param_1;
}



// FUNCTION 14379c160 FUN_14379c160 body=124 status=ok
// SIG undefined FUN_14379c160(void)

undefined8 * FUN_14379c160(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkMemoryMeshVertexBuffer::vftable;
  FUN_14379bdf0(param_1 + 3);
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  FUN_14370d870(param_1 + 0x38,0);
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0x100;
  *(undefined4 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 14379c1e0 FUN_14379c1e0 body=120 status=ok
// SIG undefined FUN_14379c1e0(void)

void FUN_14379c1e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkMemoryMeshVertexBuffer::vftable;
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1ac)) {
    FUN_143702e10(uVar1,param_1[0x34],1,*(uint *)((longlong)param_1 + 0x1ac) & 0x3fffffff);
  }
  param_1[0x34] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14379c260 FUN_14379c260 body=276 status=ok
// SIG undefined FUN_14379c260(void)

longlong FUN_14379c260(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  puVar3 = (undefined4 *)(param_1 + 0x11c);
  lVar5 = 0x10;
  do {
    *puVar3 = *(undefined4 *)((param_2 - param_1) + (longlong)puVar3);
    puVar3[1] = *(undefined4 *)((param_2 - param_1) + 4 + (longlong)puVar3);
    puVar3 = puVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar1 = *(int *)(param_2 + 0x1a8);
  uVar2 = *(undefined8 *)(param_2 + 0x1a0);
  uVar4 = FUN_143703a50();
  if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar4,param_1 + 0x1a0,iVar1,1);
  }
  FUN_143745160(*(undefined8 *)(param_1 + 0x1a0),uVar2,iVar1);
  *(int *)(param_1 + 0x1a8) = iVar1;
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x1ec) = *(undefined1 *)(param_2 + 0x1ec);
  *(undefined1 *)(param_1 + 0x1ed) = *(undefined1 *)(param_2 + 0x1ed);
  return param_1;
}



// FUNCTION 14379c380 FUN_14379c380 body=139 status=ok
// SIG undefined FUN_14379c380(void)

longlong FUN_14379c380(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14379c1e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x1f0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1f0);
    }
  }
  return param_1;
}



// FUNCTION 14379c420 FUN_14379c420 body=179 status=ok
// SIG undefined FUN_14379c420(void)

uint FUN_14379c420(longlong param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)*(int *)(param_1 + 0x100);
  uVar6 = 0;
  iVar3 = 0;
  iVar4 = 4;
  uVar2 = uVar6;
  uVar5 = uVar6;
  if (0 < lVar7) {
    do {
      if (*(char *)(param_1 + uVar5 * 8) == '\v') {
        *(int *)(param_2 + uVar5 * 4) = (int)uVar2;
        iVar4 = 0x10;
        uVar2 = (ulonglong)((int)uVar2 + (uint)*(byte *)(param_1 + 1 + uVar5 * 8) * 0x10);
      }
      iVar3 = (int)uVar2;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < lVar7);
    if (0 < lVar7) {
      do {
        if (*(char *)(param_1 + uVar6 * 8) != '\v') {
          *(int *)(param_2 + uVar6 * 4) = (int)uVar2;
          bVar1 = *(byte *)(param_1 + uVar6 * 8);
          if (bVar1 == 8) {
            iVar3 = 4;
          }
          else {
            iVar3 = (uint)(byte)(&DAT_145baa780)[bVar1] * (uint)*(byte *)(param_1 + 1 + uVar6 * 8);
          }
          uVar2 = (ulonglong)((int)uVar2 + 3 + iVar3 & 0xfffffffc);
        }
        iVar3 = (int)uVar2;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < lVar7);
    }
  }
  return iVar3 + -1 + iVar4 & ~(iVar4 - 1U);
}



// FUNCTION 14379c4e0 FUN_14379c4e0 body=179 status=ok
// SIG undefined FUN_14379c4e0(void)

longlong FUN_14379c4e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x1ed) == '\0') {
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    lVar6 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar5 + 0x58),0x1f0);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_14379c0c0(lVar6,param_1 + 0x18,*(undefined4 *)(param_1 + 0x1e8));
    }
    iVar8 = *(int *)(param_1 + 0x1e8) * *(int *)(param_1 + 0x1b0);
    puVar1 = *(undefined8 **)(param_1 + 0x1a0);
    puVar2 = *(undefined8 **)(lVar6 + 0x1a0);
    for (iVar7 = iVar8 + 0xf >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = puVar1 + 2;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = puVar2 + 2;
    }
    *(int *)(lVar6 + 0x1a8) = iVar8;
    return lVar6;
  }
  FUN_14370c030();
  return param_1;
}



// FUNCTION 14379c5a0 FUN_14379c5a0 body=16 status=ok
// SIG undefined FUN_14379c5a0(void)

void FUN_14379c5a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_14379dfd0(param_2,param_3,param_4);
  return;
}



// FUNCTION 14379c5b0 FUN_14379c5b0 body=16 status=ok
// SIG undefined FUN_14379c5b0(void)

void FUN_14379c5b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_14379e6e0(param_2,param_3,param_4);
  return;
}



// FUNCTION 14379c5c0 FUN_14379c5c0 body=148 status=ok
// SIG undefined FUN_14379c5c0(void)

void FUN_14379c5c0(longlong param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  
  if (param_3 < 0) {
    param_3 = *(int *)(param_1 + 0x1e8) - param_2;
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  *(undefined1 *)(param_4 + 0x308) = 1;
  *(int *)(param_4 + 0x304) = param_3;
  iVar2 = *(int *)(param_1 + 0x118);
  lVar4 = (longlong)iVar2;
  *(int *)(param_4 + 0x300) = iVar2;
  if (0 < iVar2) {
    piVar7 = (int *)(param_1 + 0x11c);
    puVar5 = (undefined8 *)(param_4 + 0xc);
    puVar6 = (undefined8 *)(param_1 + 0x18);
    do {
      iVar2 = *piVar7;
      piVar7 = piVar7 + 1;
      *(longlong *)((longlong)puVar5 + -0xc) = (longlong)iVar2 + iVar1 * param_2 + lVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = *(undefined4 *)(param_1 + 0x1b0);
      *puVar5 = *puVar6;
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 3;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14379c660 FUN_14379c660 body=41 status=ok
// SIG undefined FUN_14379c660(void)

void FUN_14379c660(longlong param_1,int param_2,longlong *param_3)

{
  *param_3 = (longlong)*(int *)(param_1 + 0x11c + (longlong)param_2 * 4) +
             *(longlong *)(param_1 + 0x1a0);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined8 *)((longlong)param_3 + 0xc) = *(undefined8 *)(param_1 + 0x18 + (longlong)param_2 * 8)
  ;
  return;
}



// FUNCTION 14379c690 FUN_14379c690 body=330 status=ok
// SIG undefined FUN_14379c690(void)

void FUN_14379c690(longlong param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x1a0);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1e8)) {
    do {
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 0x118)) {
        pbVar8 = (byte *)(param_1 + 0x19);
        piVar3 = (int *)(param_1 + 0x11c);
        do {
          iVar7 = 0;
          puVar2 = (undefined1 *)(*piVar3 + lVar5);
          if (*pbVar8 != 0) {
            do {
              switch(pbVar8[-1]) {
              case 3:
              case 4:
              case 9:
                uVar1 = *puVar2;
                *puVar2 = puVar2[1];
                puVar2[1] = uVar1;
                puVar2 = puVar2 + 2;
                break;
              case 5:
              case 6:
              case 7:
              case 8:
              case 10:
                uVar1 = *puVar2;
                *puVar2 = puVar2[3];
                puVar2[3] = uVar1;
                uVar1 = puVar2[1];
                puVar2[1] = puVar2[2];
                puVar2[2] = uVar1;
                puVar2 = puVar2 + 4;
                break;
              case 0xb:
                lVar6 = 4;
                do {
                  uVar1 = *puVar2;
                  *puVar2 = puVar2[3];
                  puVar2[3] = uVar1;
                  uVar1 = puVar2[1];
                  puVar2[1] = puVar2[2];
                  puVar2[2] = uVar1;
                  puVar2 = puVar2 + 4;
                  lVar6 = lVar6 + -1;
                } while (lVar6 != 0);
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)(uint)*pbVar8);
          }
          iVar9 = iVar9 + 1;
          piVar3 = piVar3 + 1;
          pbVar8 = pbVar8 + 8;
        } while (iVar9 < *(int *)(param_1 + 0x118));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + *(int *)(param_1 + 0x1b0);
    } while (iVar4 < *(int *)(param_1 + 0x1e8));
  }
  return;
}



// FUNCTION 14379c800 FUN_14379c800 body=11 status=ok
// SIG undefined FUN_14379c800(void)

bool FUN_14379c800(longlong param_1)

{
  return *(char *)(param_1 + 0x1ed) != '\0';
}



// FUNCTION 14379c810 FUN_14379c810 body=147 status=ok
// SIG undefined FUN_14379c810(void)

undefined8 FUN_14379c810(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (*(int *)(param_1 + 0x1b8) < 1) {
    if ((*(byte *)(param_2 + 3) & 2) == 0) {
      *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
    }
    else {
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    FUN_14379c5c0(param_1,*param_2,param_2[1],param_3);
    uVar1 = 1;
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14379c8b0 FUN_14379c8b0 body=274 status=ok
// SIG undefined FUN_14379c8b0(void)

undefined8 FUN_14379c8b0(longlong param_1,int *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (*(int *)(param_1 + 0x1b8) < 1) {
    if ((*(byte *)(param_2 + 3) & 2) == 0) {
      *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
    }
    else {
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    iVar6 = param_2[1];
    if (iVar6 < 0) {
      iVar6 = *(int *)(param_1 + 0x1e8) - *param_2;
    }
    iVar1 = *param_2;
    iVar2 = *(int *)(param_1 + 0x1b0);
    lVar3 = *(longlong *)(param_1 + 0x1a0);
    *(undefined1 *)(param_4 + 0x308) = 1;
    *(int *)(param_4 + 0x304) = iVar6;
    iVar6 = *param_3;
    lVar4 = (longlong)iVar6;
    *(int *)(param_4 + 0x300) = iVar6;
    if (0 < iVar6) {
      puVar7 = (undefined8 *)(param_4 + 0xc);
      do {
        param_3 = param_3 + 1;
        iVar6 = *param_3;
        *(longlong *)((longlong)puVar7 + -0xc) =
             (longlong)*(int *)(param_1 + 0x11c + (longlong)iVar6 * 4) + iVar1 * iVar2 + lVar3;
        *(undefined4 *)((longlong)puVar7 + -4) = *(undefined4 *)(param_1 + 0x1b0);
        *puVar7 = *(undefined8 *)(param_1 + 0x18 + (longlong)iVar6 * 8);
        lVar4 = lVar4 + -1;
        puVar7 = puVar7 + 3;
      } while (lVar4 != 0);
    }
    uVar5 = 1;
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 14379c9d0 FUN_14379c9d0 body=16 status=ok
// SIG undefined FUN_14379c9d0(void)

void FUN_14379c9d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_14379f7a0(param_2,param_3,param_4);
  return;
}



// FUNCTION 14379c9e0 FUN_14379c9e0 body=16 status=ok
// SIG undefined FUN_14379c9e0(void)

void FUN_14379c9e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_14379fd20(param_2,param_3,param_4);
  return;
}



// FUNCTION 14379c9f0 FUN_14379c9f0 body=182 status=ok
// SIG undefined FUN_14379c9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379c9f0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x1b0) * param_2;
  uVar1 = iVar9 + 0xf;
  uVar7 = uVar1 & 0xfffffff0;
  uVar5 = FUN_143703a50();
  uVar6 = *(uint *)(param_1 + 0x1ac) & 0x3fffffff;
  if ((int)uVar6 < (int)uVar7) {
    uVar6 = uVar6 * 2;
    uVar2 = uVar7;
    if ((int)uVar7 < (int)uVar6) {
      uVar2 = uVar6;
    }
    FUN_14370c310(uVar5,param_1 + 0x1a0,uVar2,1);
  }
  *(uint *)(param_1 + 0x1a8) = uVar7;
  uVar4 = uRam00000001467f06e8;
  uVar5 = _DAT_1467f06e0;
  iVar8 = (int)uVar1 >> 4;
  puVar3 = *(undefined8 **)(param_1 + 0x1a0);
  while (iVar8 = iVar8 + -1, -1 < iVar8) {
    *puVar3 = uVar5;
    puVar3[1] = uVar4;
    puVar3 = puVar3 + 2;
  }
  *(int *)(param_1 + 0x1e8) = param_2;
  *(int *)(param_1 + 0x1a8) = iVar9;
  return;
}



// FUNCTION 14379cab0 FUN_14379cab0 body=86 status=ok
// SIG undefined FUN_14379cab0(void)

void FUN_14379cab0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  thunk_FUN_14379bfb0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  uVar1 = FUN_14379c420(param_2,param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x1b0) = uVar1;
  iVar2 = FUN_14379be60(param_2);
  *(bool *)(param_1 + 0x1ed) = iVar2 == 0;
  return;
}



// FUNCTION 14379cb10 FUN_14379cb10 body=77 status=ok
// SIG undefined FUN_14379cb10(void)

void FUN_14379cb10(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if (*(int *)(param_1 + 0x1b8) == 1) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  else {
    *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014379cb56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  return;
}



// FUNCTION 14379cb60 FUN_14379cb60 body=112 status=ok
// SIG undefined FUN_14379cb60(void)

void FUN_14379cb60(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_3;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      if (*(longlong *)(param_2 + -8 + (longlong)puVar1) != 0) {
        FUN_14370c030();
      }
      if (puVar1[-1] != 0) {
        FUN_14370c150();
      }
      puVar1[-1] = *(undefined8 *)(param_2 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_2 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 3;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14379cbd0 FUN_14379cbd0 body=473 status=ok
// SIG undefined FUN_14379cbd0(void)

void FUN_14379cbd0(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint local_res8;
  uint local_res10;
  uint local_58;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  longlong local_38;
  ulonglong local_30;
  
  uVar7 = (ulonglong)(int)param_2;
  uVar10 = uVar7;
  local_res10 = param_2;
  do {
    local_38 = (longlong)(int)param_3;
    local_res8 = (uint)uVar7;
    uVar7 = uVar7 & 0xffffffff;
    lVar8 = ((longlong)(int)(local_res8 + param_3) >> 1) * 7;
    local_48 = *(undefined4 *)(lVar8 + param_1);
    local_44 = *(undefined2 *)(lVar8 + 4 + param_1);
    local_42 = *(undefined1 *)(lVar8 + 6 + param_1);
    local_58 = param_3;
    do {
      uVar9 = (uint)uVar7;
      local_30 = uVar10;
      cVar6 = (*param_4)((longlong)(int)uVar9 * 7 + param_1,&local_48);
      uVar4 = local_res8;
      uVar5 = local_30;
      while (cVar6 != '\0') {
        uVar9 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar9;
        uVar10 = uVar10 + 1;
        cVar6 = (*param_4)((longlong)(int)uVar9 * 7 + param_1,&local_48);
        uVar4 = uVar9;
        uVar5 = uVar10;
      }
      local_30 = uVar5;
      cVar6 = (*param_4)(&local_48,(longlong)(int)local_58 * 7 + param_1);
      local_res8 = uVar9;
      lVar8 = local_38;
      while (cVar6 != '\0') {
        local_58 = local_58 - 1;
        lVar8 = lVar8 + -1;
        cVar6 = (*param_4)(&local_48,(longlong)(int)local_58 * 7 + param_1);
        uVar10 = local_30;
        local_res8 = uVar4;
      }
      local_38 = lVar8;
      if ((int)local_58 < (int)local_res8) break;
      if (local_58 != local_res8) {
        puVar11 = (undefined4 *)(lVar8 * 7 + param_1);
        uVar3 = *puVar11;
        uVar2 = *(undefined2 *)(puVar11 + 1);
        puVar12 = (undefined4 *)(uVar10 * 7 + param_1);
        uVar1 = *(undefined1 *)((longlong)puVar11 + 6);
        *puVar11 = *puVar12;
        *(undefined2 *)(puVar11 + 1) = *(undefined2 *)(puVar12 + 1);
        *(undefined1 *)((longlong)puVar11 + 6) = *(undefined1 *)((longlong)puVar12 + 6);
        *puVar12 = uVar3;
        *(undefined2 *)(puVar12 + 1) = uVar2;
        *(undefined1 *)((longlong)puVar12 + 6) = uVar1;
      }
      local_38 = lVar8 + -1;
      local_58 = local_58 - 1;
      local_res8 = local_res8 + 1;
      uVar7 = (ulonglong)local_res8;
      uVar10 = uVar10 + 1;
      local_30 = uVar10;
    } while ((int)local_res8 <= (int)local_58);
    if ((int)local_res10 < (int)local_58) {
      FUN_14379cbd0(param_1,local_res10,local_58,param_4);
    }
    if ((int)param_3 <= (int)local_res8) {
      return;
    }
    uVar7 = (ulonglong)local_res8;
    local_res10 = local_res8;
  } while( true );
}



// FUNCTION 14379cdc0 FUN_14379cdc0 body=754 status=ok
// SIG undefined FUN_14379cdc0(void)

undefined8 * FUN_14379cdc0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkMultipleVertexBuffer::vftable;
  FUN_14379bdf0(param_1 + 3);
  param_1[0x24] = 0;
  plVar11 = param_1 + 0x27;
  *(undefined4 *)(param_1 + 0x25) = 0;
  plVar1 = param_1 + 0x29;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  param_1[0x26] = 0;
  *plVar11 = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80000000;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80000000;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x158);
  thunk_FUN_14379bfb0(param_1 + 3,param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x140);
  lVar10 = *(longlong *)(param_2 + 0x138);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x144) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,plVar11,iVar2,2);
  }
  iVar4 = iVar2;
  if (*(int *)(param_1 + 0x28) < iVar2) {
    iVar4 = *(int *)(param_1 + 0x28);
  }
  FUN_143795730(*plVar11,lVar10,iVar4);
  puVar7 = (undefined2 *)(*plVar11 + (longlong)iVar4 * 2);
  lVar8 = (longlong)(iVar2 - iVar4);
  if (0 < iVar2 - iVar4) {
    lVar12 = (longlong)iVar4 * 2 - (longlong)puVar7;
    do {
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = *(undefined2 *)(lVar12 + lVar10 + (longlong)puVar7);
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 0x28) = iVar2;
  iVar2 = *(int *)(param_2 + 0x150);
  lVar10 = *(longlong *)(param_2 + 0x148);
  uVar5 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x154) & 0x3fffffff) < iVar2) {
    FUN_14370c310(uVar5,plVar1,iVar2,0x18);
  }
  iVar4 = (*(int *)(param_1 + 0x2a) - iVar2) + -1;
  lVar8 = (longlong)iVar4;
  if (-1 < iVar4) {
    plVar11 = (longlong *)(*plVar1 + (longlong)iVar2 * 0x18 + lVar8 * 0x18);
    do {
      if (*plVar11 != 0) {
        FUN_14370c150();
      }
      plVar11 = plVar11 + -3;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar4 = iVar2;
  if (*(int *)(param_1 + 0x2a) < iVar2) {
    iVar4 = *(int *)(param_1 + 0x2a);
  }
  FUN_14379cb60(*plVar1,lVar10,iVar4);
  lVar8 = (longlong)(iVar2 - iVar4);
  if (0 < iVar2 - iVar4) {
    puVar9 = (undefined1 *)(lVar10 + 0x10 + (longlong)iVar4 * 0x18);
    lVar10 = *plVar1 - lVar10;
    do {
      if ((longlong *)(puVar9 + lVar10 + -0x10) != (longlong *)0x0) {
        lVar12 = *(longlong *)(puVar9 + -0x10);
        *(longlong *)(puVar9 + lVar10 + -0x10) = lVar12;
        if (lVar12 != 0) {
          FUN_14370c030();
        }
        *(undefined8 *)(puVar9 + lVar10 + -8) = *(undefined8 *)(puVar9 + -8);
        puVar9[lVar10] = *puVar9;
      }
      puVar9 = puVar9 + 0x18;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 0x2a) = iVar2;
  lVar10 = (longlong)*(int *)(param_1 + 0x2a);
  if (0 < lVar10) {
    do {
      lVar8 = *plVar1;
      lVar12 = (**(code **)(**(longlong **)(lVar8 + lVar13) + 0x18))();
      if (lVar12 != 0) {
        FUN_14370c030(lVar12);
      }
      if (*(longlong *)(lVar8 + lVar13) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar8 + lVar13) = lVar12;
      FUN_14370c150(lVar12);
      lVar13 = lVar13 + 0x18;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x23);
  uVar5 = FUN_143703a50();
  uVar6 = *(uint *)((longlong)param_1 + 300) & 0x3fffffff;
  if ((int)uVar6 < iVar2) {
    iVar3 = uVar6 * 2;
    iVar4 = iVar2;
    if (iVar2 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_14370c310(uVar5,param_1 + 0x24,iVar4,7);
  }
  *(int *)(param_1 + 0x25) = iVar2;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  return param_1;
}



// FUNCTION 14379d0e0 FUN_14379d0e0 body=1219 status=ok
// SIG undefined FUN_14379d0e0(void)

int FUN_14379d0e0(longlong param_1,int *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte bVar10;
  int iVar11;
  LPVOID pvVar12;
  void *_Dst;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  void *pvVar17;
  uint uVar18;
  void *pvVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  int iVar23;
  void *pvVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 local_218;
  undefined4 local_210;
  int local_1f8;
  uint local_1f4 [32];
  byte local_174 [44];
  undefined1 local_148 [256];
  int local_48;
  
  pvVar24 = (void *)0x0;
  pvVar19 = pvVar24;
  pvVar13 = pvVar24;
  if (0 < *(int *)(param_1 + 0x150)) {
    do {
      pvVar12 = TlsGetValue(DAT_146b7bf70);
      if (pvVar12 == (LPVOID)0x0) {
        pvVar12 = DAT_146b7bf68;
      }
      _Dst = (void *)(**(code **)(**(longlong **)((longlong)pvVar12 + 0x58) + 8))();
      pvVar17 = pvVar24;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x310);
        pvVar17 = _Dst;
      }
      uVar18 = (int)pvVar19 + 1;
      *(void **)(*(longlong *)(param_1 + 0x148) + 8 + (longlong)pvVar13) = pvVar17;
      pvVar19 = (void *)(ulonglong)uVar18;
      pvVar13 = (void *)((longlong)pvVar13 + 0x18);
    } while ((int)uVar18 < *(int *)(param_1 + 0x150));
  }
  iVar23 = param_2[1];
  iVar5 = *(int *)(param_1 + 0x128);
  lVar25 = (longlong)iVar5;
  if (iVar23 < 0) {
    iVar23 = *(int *)(param_1 + 0x158) - *param_2;
  }
  if (1 < iVar5) {
    FUN_14379cbd0(*(undefined8 *)(param_1 + 0x120),0,iVar5 + -1,&LAB_14379d0c0);
  }
  pbVar21 = *(byte **)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x128) * 7;
  pbVar20 = *(byte **)(param_1 + 0x120);
  do {
    if (pbVar21 <= pbVar20) {
      *(int *)(param_3 + 0x300) = iVar5;
      *(int *)(param_3 + 0x304) = iVar23;
      *(undefined1 *)(param_3 + 0x308) = 0;
      FUN_14379bdf0(local_148);
      lVar26 = lVar25;
      if (0 < iVar5) {
        do {
          pbVar20 = (byte *)(*(longlong *)(param_1 + 0x120) + (longlong)pvVar24);
          puVar2 = (undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x148) + 8 + (ulonglong)*pbVar20 * 0x18) +
                   (ulonglong)pbVar20[2] * 0x18);
          cVar4 = *(char *)(param_1 + 0x18 + (ulonglong)pbVar20[3] * 8);
          lVar15 = param_1 + (ulonglong)pbVar20[3] * 8;
          puVar3 = (undefined4 *)(param_3 + (ulonglong)pbVar20[5] * 0x18);
          if ((cVar4 == *(char *)(puVar2 + 3)) &&
             (*(char *)(lVar15 + 0x19) == *(char *)((longlong)puVar2 + 0xd))) {
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
            pbVar20[6] = 0xff;
          }
          else if ((*(char *)(puVar2 + 3) == '\v') &&
                  (((*(char *)((longlong)puVar2 + 0xd) == '\x01' && (cVar4 == '\n')) &&
                   (*(byte *)(lVar15 + 0x19) < 5)))) {
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            *puVar3 = *puVar2;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
            *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(lVar15 + 0x18);
            *(undefined1 *)((longlong)puVar3 + 0xd) = *(undefined1 *)(lVar15 + 0x19);
            pbVar20[6] = 0xff;
          }
          else {
            FUN_14379be10(local_148,lVar15 + 0x18);
            pbVar20[6] = 0;
            *(undefined8 *)(puVar3 + 3) = *(undefined8 *)(lVar15 + 0x18);
          }
          pvVar24 = (void *)((longlong)pvVar24 + 7);
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      lVar26 = 0;
      if (0 < local_48) {
        FUN_14379bf70(local_148);
        pvVar12 = TlsGetValue(DAT_146b7bf70);
        if (pvVar12 == (LPVOID)0x0) {
          pvVar12 = DAT_146b7bf68;
        }
        lVar14 = (**(code **)(**(longlong **)((longlong)pvVar12 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar12 + 0x58),0x1f0);
        lVar15 = lVar26;
        if (lVar14 != 0) {
          lVar15 = FUN_14379c0c0(lVar14,local_148,iVar23);
        }
        if (lVar15 != 0) {
          FUN_14370c030(lVar15);
        }
        if (*(longlong *)(param_1 + 0x130) != 0) {
          FUN_14370c150();
        }
        *(longlong *)(param_1 + 0x130) = lVar15;
        FUN_14370c150(lVar15);
        if (0 < lVar25) {
          do {
            pbVar20 = (byte *)(*(longlong *)(param_1 + 0x120) + lVar26);
            if (-1 < (char)pbVar20[6]) {
              bVar10 = FUN_14379beb0(local_148,
                                     *(undefined1 *)(param_1 + 0x1a + (ulonglong)pbVar20[3] * 8),
                                     *(undefined1 *)(param_1 + 0x1b + (ulonglong)pbVar20[3] * 8));
              pbVar20[6] = bVar10;
              FUN_14379c660(*(undefined8 *)(param_1 + 0x130),(int)(char)bVar10,&local_218);
              if ((pbVar20[4] & 4) == 0) {
                FUN_14379db60(*(longlong *)
                               (*(longlong *)(param_1 + 0x148) + 8 + (ulonglong)*pbVar20 * 0x18) +
                              (ulonglong)pbVar20[2] * 0x18,&local_218,iVar23);
              }
              bVar10 = pbVar20[5];
              *(undefined8 *)(param_3 + (ulonglong)bVar10 * 0x18) = local_218;
              *(undefined4 *)(param_3 + 8 + (ulonglong)bVar10 * 0x18) = local_210;
            }
            lVar26 = lVar26 + 7;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
        }
      }
      *(undefined1 *)(param_1 + 0x15c) = 1;
      return 1;
    }
    pbVar9 = pbVar20;
    do {
      pbVar9 = pbVar9 + 7;
      if (pbVar21 <= pbVar9) break;
    } while (*pbVar9 == *pbVar20);
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x148) + (ulonglong)*pbVar20 * 0x18);
    local_1f8 = (int)(((longlong)pbVar9 - (longlong)pbVar20) / 7);
    if (0 < local_1f8) {
      puVar16 = local_1f4;
      pbVar20 = pbVar20 + 4;
      pvVar19 = pvVar24;
      pbVar22 = local_174;
      do {
        *puVar16 = (uint)pbVar20[-3];
        puVar16 = puVar16 + 1;
        bVar10 = *pbVar20;
        pbVar20[-2] = (byte)pvVar19;
        pbVar20 = pbVar20 + 7;
        uVar18 = (int)pvVar19 + 1;
        pvVar19 = (void *)(ulonglong)uVar18;
        *pbVar22 = bVar10;
        pbVar22 = pbVar22 + 1;
      } while ((int)uVar18 < local_1f8);
    }
    if (puVar1[1] == 0) {
      pvVar12 = TlsGetValue(DAT_146b7bf70);
      if (pvVar12 == (LPVOID)0x0) {
        pvVar12 = DAT_146b7bf68;
      }
      pvVar13 = (void *)(**(code **)(**(longlong **)((longlong)pvVar12 + 0x58) + 8))();
      pvVar19 = pvVar24;
      if (pvVar13 != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(pvVar13,0,0x310);
        pvVar19 = pvVar13;
      }
      puVar1[1] = pvVar19;
    }
    iVar11 = (**(code **)(*(longlong *)*puVar1 + 0x40))
                       ((longlong *)*puVar1,param_2,&local_1f8,puVar1[1]);
    if (iVar11 != 1) {
      FUN_14379d5b0(param_1);
      return iVar11;
    }
    *(undefined1 *)(puVar1 + 2) = 1;
    pbVar20 = pbVar9;
  } while( true );
}



// FUNCTION 14379d5b0 FUN_14379d5b0 body=193 status=ok
// SIG undefined FUN_14379d5b0(void)

void FUN_14379d5b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x150);
  if (0 < lVar4) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x148);
      if (*(char *)(lVar5 + 0x10 + lVar1) != '\0') {
        (**(code **)(**(longlong **)(lVar5 + lVar1) + 0x68))
                  (*(longlong **)(lVar5 + lVar1),*(undefined8 *)(lVar5 + 8 + lVar1));
        *(undefined1 *)(lVar5 + 0x10 + lVar1) = 0;
      }
      lVar2 = *(longlong *)(lVar5 + 8 + lVar1);
      if (lVar2 != 0) {
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar2,0x310);
        *(undefined8 *)(lVar5 + 8 + lVar1) = 0;
      }
      lVar5 = lVar5 + 0x18;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14379d680 FUN_14379d680 body=123 status=ok
// SIG undefined FUN_14379d680(void)

longlong FUN_14379d680(longlong param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x165) != '\0') {
    FUN_14370c030();
    return param_1;
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x168);
  if (lVar2 != 0) {
    lVar2 = FUN_14379cdc0(lVar2,param_1);
    FUN_14379d700(lVar2);
    return lVar2;
  }
  FUN_14379d700(0);
  return 0;
}



// FUNCTION 14379d700 FUN_14379d700 body=149 status=ok
// SIG undefined FUN_14379d700(void)

void FUN_14379d700(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x165) = 1;
  if (*(int *)(param_1 + 0x150) < 1) {
    *(undefined1 *)(param_1 + 0x166) = 1;
    return;
  }
  lVar2 = 0;
  do {
    cVar1 = (**(code **)(**(longlong **)(lVar2 + *(longlong *)(param_1 + 0x148)) + 0x20))();
    if (cVar1 == '\0') {
      *(undefined2 *)(param_1 + 0x165) = 0x100;
      return;
    }
    iVar3 = iVar3 + 1;
    lVar2 = lVar2 + 0x18;
  } while (iVar3 < *(int *)(param_1 + 0x150));
  *(undefined1 *)(param_1 + 0x166) = 1;
  return;
}



// FUNCTION 14379d7a0 FUN_14379d7a0 body=178 status=ok
// SIG undefined FUN_14379d7a0(void)

undefined8 FUN_14379d7a0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0x15c) != '\0') {
    return 0;
  }
  iVar6 = 0;
  *(byte *)(param_1 + 0x164) = (byte)(*(uint *)(param_2 + 0xc) >> 1) & 1;
  iVar2 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x128) = iVar2;
  if (0 < iVar2) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x138);
      lVar8 = lVar8 + 2;
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x120) + lVar7);
      lVar7 = lVar7 + 7;
      *puVar5 = *(undefined1 *)(lVar3 + -2 + lVar8);
      puVar5[1] = *(undefined1 *)(lVar3 + -1 + lVar8);
      uVar1 = *(undefined1 *)(param_2 + 0xc);
      puVar5[5] = (char)iVar6;
      puVar5[3] = (char)iVar6;
      iVar6 = iVar6 + 1;
      puVar5[4] = uVar1;
    } while (iVar6 < iVar2);
  }
  uVar4 = FUN_14379d0e0(param_1,param_2,param_3);
  return uVar4;
}



// FUNCTION 14379d860 FUN_14379d860 body=228 status=ok
// SIG undefined FUN_14379d860(void)

undefined8 FUN_14379d860(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0x15c) == '\0') {
    iVar3 = *param_3;
    uVar8 = 0;
    *(int *)(param_1 + 0x128) = iVar3;
    iVar9 = 0;
    if (0 < iVar3) {
      lVar6 = 0;
      pbVar7 = (byte *)(param_3 + 0x21);
      do {
        param_3 = param_3 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0x138) + (longlong)*param_3 * 2);
        puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x120) + lVar6);
        lVar6 = lVar6 + 7;
        *puVar5 = *puVar1;
        puVar5[1] = puVar1[1];
        bVar2 = *pbVar7;
        puVar5[5] = (char)iVar9;
        uVar8 = uVar8 | bVar2;
        puVar5[4] = bVar2;
        iVar9 = iVar9 + 1;
        puVar5[3] = (char)*param_3;
        pbVar7 = pbVar7 + 1;
      } while (iVar9 < iVar3);
    }
    *(byte *)(param_1 + 0x164) = (byte)(uVar8 >> 1) & 1;
    uVar4 = FUN_14379d0e0(param_1,param_2,param_4);
    return uVar4;
  }
  return 0;
}



// FUNCTION 14379d950 FUN_14379d950 body=295 status=ok
// SIG undefined FUN_14379d950(void)

void FUN_14379d950(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x15c) != '\0') {
    if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))();
      lVar3 = (longlong)*(int *)(param_1 + 0x128);
      if (0 < lVar3) {
        lVar4 = 0;
        do {
          pbVar5 = (byte *)(*(longlong *)(param_1 + 0x120) + lVar4);
          if (((pbVar5[4] & 2) != 0) && (-1 < (char)pbVar5[6])) {
            FUN_14379c660(*(undefined8 *)(param_1 + 0x130),(int)(char)pbVar5[6],local_28);
            FUN_14379db60(local_28,*(longlong *)
                                    (*(longlong *)(param_1 + 0x148) + 8 + (ulonglong)*pbVar5 * 0x18)
                                   + (ulonglong)pbVar5[2] * 0x18,uVar1);
          }
          lVar4 = lVar4 + 7;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      if (*(longlong *)(param_1 + 0x130) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
    FUN_14379d5b0(param_1);
    if (*(char *)(param_1 + 0x164) != '\0') {
      iVar2 = *(int *)(param_1 + 0x160) + 1;
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x160) = iVar2;
    }
    *(undefined1 *)(param_1 + 0x15c) = 0;
  }
  return;
}



// FUNCTION 14379da80 FUN_14379da80 body=38 status=ok
// SIG undefined FUN_14379da80(void)

int FUN_14379da80(int param_1,int param_2)

{
  if (param_1 == 1) {
    return param_2;
  }
  if (param_1 == 2) {
    return param_2 * 2;
  }
  if (param_1 == 3) {
    return param_2 * 3;
  }
  if (param_1 != 4) {
    return 0;
  }
  return param_2 + 2;
}



// FUNCTION 14379dab0 FUN_14379dab0 body=29 status=ok
// SIG undefined FUN_14379dab0(void)

undefined8 * FUN_14379dab0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkMeshTexture::Sampler::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  return param_1;
}



// FUNCTION 14379dad0 FUN_14379dad0 body=136 status=ok
// SIG undefined FUN_14379dad0(void)

longlong FUN_14379dad0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x18;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14379db60 FUN_14379db60 body=1127 status=ok
// SIG undefined FUN_14379db60(void)

void FUN_14379db60(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  byte bVar8;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined1 uStack_21c;
  undefined3 uStack_21b;
  undefined8 local_218;
  undefined1 local_208 [512];
  
  bVar1 = *(byte *)((longlong)param_1 + 0xc);
  bVar2 = *(byte *)((longlong)param_2 + 0xc);
  if ((bVar1 == bVar2) &&
     (bVar8 = *(byte *)((longlong)param_1 + 0xd), bVar8 == *(byte *)((longlong)param_2 + 0xd))) {
    if (bVar1 == 8) goto LAB_14379db92;
LAB_14379db9c:
    bVar2 = (&DAT_145baa780)[bVar1];
LAB_14379dbab:
    iVar7 = (uint)bVar2 * (uint)bVar8;
  }
  else {
    if (((byte)(bVar1 - 3) < 2) && ((byte)(bVar2 - 3) < 2)) {
      if (bVar1 != 8) {
        bVar2 = (&DAT_145baa780)[bVar1];
        bVar8 = *(byte *)((longlong)param_1 + 0xd);
        goto LAB_14379dbab;
      }
    }
    else {
      if ((bVar1 != bVar2) ||
         (bVar8 = *(byte *)((longlong)param_2 + 0xd), *(byte *)((longlong)param_1 + 0xd) < bVar8)) {
        if (bVar1 == 7) {
          if (bVar2 != 2) {
            if (bVar2 == 3) {
              FUN_14379ef20(param_1,param_2,param_3);
              return;
            }
            if (bVar2 != 8) {
              if (bVar2 != 10) {
                return;
              }
              FUN_14379ee60(param_1,param_2,param_3);
              return;
            }
            FUN_14379edf0(param_1,param_2,param_3);
            return;
          }
          goto LAB_14379dca5;
        }
        if (bVar1 == 2) {
          if (bVar2 == 3) {
            FUN_14379f350(param_1,param_2,param_3);
            return;
          }
          if (bVar2 == 4) {
            FUN_14379f3c0(param_1,param_2,param_3);
            return;
          }
          if (6 < bVar2) {
            if (bVar2 < 9) {
              FUN_14379f450(param_1,param_2,param_3);
              return;
            }
            if (bVar2 == 10) {
              FUN_14379f190(param_1,param_2,param_3);
              return;
            }
          }
          return;
        }
        if ((byte)(bVar1 - 3) < 2) {
          if (bVar2 == 2) {
            FUN_14379ece0(param_1,param_2,param_3);
            return;
          }
          if (1 < bVar2 - 7) {
            return;
          }
          FUN_14379ed50(param_1,param_2,param_3);
          return;
        }
        if (bVar1 == 10) {
          if (bVar2 == 2) {
            FUN_14379e9e0(param_1,param_2,param_3);
            return;
          }
          if (bVar2 == 8) {
            FUN_14379e900(param_1,param_2,param_3);
            return;
          }
          if (bVar2 == 10) {
            FUN_14379e7e0(param_1,param_2,param_3);
            return;
          }
          if (bVar2 != 0xb) {
            return;
          }
          FUN_14379eb90(param_1,param_2,param_3);
          return;
        }
        if (((bVar1 == 0xb) && (bVar2 == 10)) && (*(char *)((longlong)param_1 + 0xd) == '\x01')) {
          FUN_14379f690(param_1,param_2,*(undefined1 *)((longlong)param_2 + 0xd));
          return;
        }
        if ((bVar1 != 6) || (*(char *)((longlong)param_1 + 0xd) != '\x01')) {
LAB_14379deac:
          if (bVar1 != 8) goto LAB_14379def2;
          if (*(char *)((longlong)param_1 + 0xd) == '\x01') {
            if (bVar2 == 6) goto LAB_14379de51;
            if (bVar2 == 10) {
              FUN_14379e700(param_1,param_2,param_3);
              return;
            }
          }
          if ((*(char *)((longlong)param_1 + 0xd) == '\x04') && (bVar2 == 2)) {
LAB_14379dca5:
            FUN_14379efa0(param_1,param_2,param_3);
            return;
          }
LAB_14379def2:
          FUN_1437134a0(&local_228,local_208,0x200);
          uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
          uVar4 = *(undefined1 *)((longlong)param_1 + 0xc);
          uVar6 = Electra::FHTTPResourceRequest::URL
                            (&local_228,"Cannot convert vertex format from ");
          uVar6 = FUN_143715b10(uVar6,uVar4);
          uVar6 = Electra::FHTTPResourceRequest::URL(uVar6,&DAT_145baa874);
          FUN_143715b10(uVar6,uVar3);
          FUN_143732520(0xabba4523,local_208,
                        "Mesh\\Utils\\VertexBufferUtil\\hkMeshVertexBufferUtil.cpp",0x70f);
          FUN_143713520(&local_228);
          return;
        }
        if (bVar2 != 8) {
          if ((*(char *)((longlong)param_1 + 0xe) == '\x03') && (bVar2 == 10)) {
            local_228 = *(undefined4 *)param_1;
            uStack_224 = *(undefined4 *)((longlong)param_1 + 4);
            uStack_220 = *(undefined4 *)(param_1 + 1);
            local_218 = param_1[2];
            _uStack_21c = CONCAT31((int3)((uint)*(undefined4 *)((longlong)param_1 + 0xc) >> 8),8);
            FUN_14379e700(&local_228,param_2,param_3);
            return;
          }
          goto LAB_14379deac;
        }
LAB_14379de51:
        uVar5 = 4;
        goto LAB_14379dbbd;
      }
      bVar1 = bVar2;
      if (bVar2 != 8) goto LAB_14379db9c;
    }
LAB_14379db92:
    iVar7 = 4;
  }
  uVar5 = iVar7 + 3U & 0xfffffffc;
LAB_14379dbbd:
  FUN_14379fd40(*param_1,*(undefined4 *)(param_1 + 1),*param_2,*(undefined4 *)(param_2 + 1),uVar5,
                param_3);
  return;
}



// FUNCTION 14379dfd0 FUN_14379dfd0 body=1023 status=ok
// SIG undefined FUN_14379dfd0(void)

undefined8 FUN_14379dfd0(longlong param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  
  uVar5 = *(uint *)(param_1 + 0x304);
  uVar12 = (ulonglong)uVar5;
  lVar9 = (longlong)param_2;
  bVar3 = *(byte *)(param_1 + 0xc + lVar9 * 0x18);
  bVar4 = *(byte *)(param_1 + 0xd + lVar9 * 0x18);
  puVar14 = *(uint **)(param_1 + lVar9 * 0x18);
  lVar9 = (longlong)*(int *)(param_1 + 8 + lVar9 * 0x18);
  if (bVar3 - 1 < 10) {
    uVar11 = (ulonglong)(uint)bVar4;
    switch(bVar3) {
    case 1:
      if (0 < (int)uVar5) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              pbVar2 = (byte *)(lVar15 + (longlong)puVar14);
              lVar15 = lVar15 + 1;
              *param_3 = (int)(char)*pbVar2;
              param_3 = param_3 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 2:
      if (0 < (int)uVar5) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              pbVar2 = (byte *)(lVar15 + (longlong)puVar14);
              lVar15 = lVar15 + 1;
              *param_3 = (uint)*pbVar2;
              param_3 = param_3 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 3:
      if (0 < (int)uVar5) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              lVar1 = lVar15 * 2;
              lVar15 = lVar15 + 1;
              *param_3 = (int)*(short *)((longlong)puVar14 + lVar1);
              param_3 = param_3 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 4:
      if (0 < (int)uVar5) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              lVar1 = lVar15 * 2;
              lVar15 = lVar15 + 1;
              *param_3 = (uint)*(ushort *)((longlong)puVar14 + lVar1);
              param_3 = param_3 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 5:
      if (0 < (int)uVar5) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              puVar13 = puVar14 + lVar15;
              lVar15 = lVar15 + 1;
              *param_3 = *puVar13;
              param_3 = param_3 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 6:
      if (0 < (int)uVar5) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              puVar13 = puVar14 + lVar15;
              lVar15 = lVar15 + 1;
              *param_3 = *puVar13;
              param_3 = param_3 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 7:
      if (0 < (int)uVar5) {
        do {
          uVar5 = *puVar14;
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          *param_3 = uVar5 & 0xff;
          param_3[1] = uVar5 >> 8 & 0xff;
          param_3[2] = uVar5 >> 0x10 & 0xff;
          param_3[3] = uVar5 >> 0x18;
          uVar12 = uVar12 - 1;
          param_3 = param_3 + 4;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 8:
      if (0 < (int)uVar5) {
        puVar13 = param_3 + 2;
        do {
          puVar13[-2] = (uint)(byte)*puVar14;
          puVar13[-1] = (uint)*(byte *)((longlong)puVar14 + 1);
          *puVar13 = (uint)*(byte *)((longlong)puVar14 + 2);
          pbVar2 = (byte *)((longlong)puVar14 + 3);
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          puVar13[1] = (uint)*pbVar2;
          uVar12 = uVar12 - 1;
          puVar13 = puVar13 + 4;
        } while (uVar12 != 0);
      }
      break;
    case 9:
      goto switchD_14379e01e_caseD_9;
    case 10:
      if (0 < (int)uVar5) {
        do {
          lVar15 = 0;
          if (((bVar4 != 0) && (7 < bVar4)) &&
             ((puVar14 + (int)(bVar4 - 1) < param_3 || (param_3 + (int)(bVar4 - 1) < puVar14)))) {
            do {
              pfVar10 = (float *)(puVar14 + lVar15);
              fVar6 = pfVar10[1];
              fVar7 = pfVar10[2];
              fVar8 = pfVar10[3];
              *param_3 = (int)*pfVar10;
              param_3[1] = (int)fVar6;
              param_3[2] = (int)fVar7;
              param_3[3] = (int)fVar8;
              pfVar10 = (float *)(puVar14 + lVar15 + 4);
              fVar6 = pfVar10[1];
              fVar7 = pfVar10[2];
              fVar8 = pfVar10[3];
              lVar15 = lVar15 + 8;
              param_3[4] = (int)*pfVar10;
              param_3[5] = (int)fVar6;
              param_3[6] = (int)fVar7;
              param_3[7] = (int)fVar8;
              param_3 = param_3 + 8;
            } while (lVar15 < (longlong)((ulonglong)(uint)bVar4 & 0xfffffff8));
          }
          if (lVar15 < (longlong)uVar11) {
            if (3 < (longlong)(uVar11 - lVar15)) {
              lVar1 = lVar15 + 2;
              lVar16 = ((uVar11 - lVar15) - 4 >> 2) + 1;
              lVar15 = lVar15 + lVar16 * 4;
              pfVar10 = (float *)(puVar14 + lVar1);
              do {
                *param_3 = (int)pfVar10[-2];
                param_3[1] = (int)pfVar10[-1];
                param_3[2] = (int)*pfVar10;
                param_3[3] = (int)pfVar10[1];
                param_3 = param_3 + 4;
                lVar16 = lVar16 + -1;
                pfVar10 = pfVar10 + 4;
              } while (lVar16 != 0);
            }
            for (; lVar15 < (longlong)uVar11; lVar15 = lVar15 + 1) {
              *param_3 = (int)(float)puVar14[lVar15];
              param_3 = param_3 + 1;
            }
          }
          puVar14 = (uint *)((longlong)puVar14 + lVar9);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
    }
    return 0;
  }
switchD_14379e01e_caseD_9:
  return 0x80040200;
}



// FUNCTION 14379e400 FUN_14379e400 body=735 status=ok
// SIG undefined FUN_14379e400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14379e400(longlong *param_1,undefined1 (*param_2) [16],uint param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong uVar22;
  
  uVar6 = uRam00000001467f06e8;
  uVar5 = _DAT_1467f06e0;
  cVar2 = *(char *)((longlong)param_1 + 0xc);
  if (cVar2 == '\x02') {
    bVar3 = *(byte *)((longlong)param_1 + 0xd);
    if (bVar3 < 4) {
      auVar21._8_8_ = uRam00000001467f06e8;
      auVar21._0_8_ = _DAT_1467f06e0;
      pauVar13 = param_2;
      uVar14 = param_3;
      while (uVar14 = uVar14 - 1, -1 < (int)uVar14) {
        *pauVar13 = auVar21;
        pauVar13 = pauVar13 + 1;
      }
    }
    lVar8 = *param_1;
    uVar14 = (uint)bVar3;
    if (4 < bVar3) {
      uVar14 = 4;
    }
    lVar12 = 0;
    uVar11 = (ulonglong)uVar14;
    if (0 < (int)param_3) {
      lVar15 = lVar8 + 2;
      lVar4 = param_1[1];
      pauVar13 = param_2;
      do {
        lVar7 = 0;
        if (3 < uVar11) {
          pauVar9 = pauVar13;
          do {
            *(float *)*pauVar9 = (float)*(byte *)(lVar15 + -2 + lVar7) * 0.003921569;
            *(float *)(*pauVar9 + 4) = (float)*(byte *)(lVar15 + -1 + lVar7) * 0.003921569;
            *(float *)(*pauVar9 + 8) = (float)*(byte *)(lVar15 + lVar7) * 0.003921569;
            pbVar1 = (byte *)(lVar15 + 1 + lVar7);
            lVar7 = lVar7 + 4;
            *(float *)(*pauVar9 + 0xc) = (float)*pbVar1 * 0.003921569;
            pauVar9 = pauVar9 + 1;
          } while (lVar7 < (longlong)(uVar11 - 3));
        }
        if (lVar7 < (longlong)uVar11) {
          pfVar10 = (float *)(param_2[lVar12] + lVar7 * 4);
          do {
            pbVar1 = (byte *)(lVar7 + lVar8);
            lVar7 = lVar7 + 1;
            *pfVar10 = (float)*pbVar1 * 0.003921569;
            pfVar10 = pfVar10 + 1;
          } while (lVar7 < (longlong)uVar11);
        }
        lVar12 = lVar12 + 1;
        pauVar13 = pauVar13 + 1;
        lVar8 = lVar8 + (int)lVar4;
        lVar15 = lVar15 + (int)lVar4;
      } while (lVar12 < (int)param_3);
    }
  }
  else if (cVar2 == '\b') {
    puVar16 = (uint *)*param_1;
    if (0 < (int)param_3) {
      lVar8 = param_1[1];
      uVar11 = (ulonglong)param_3;
      pauVar13 = param_2;
      do {
        uVar14 = *puVar16;
        puVar16 = (uint *)((longlong)puVar16 + (longlong)(int)lVar8);
        uVar22 = CONCAT44(uVar14 >> 0x10,uVar14) & 0xff000000ff;
        fVar17 = (float)(uVar14 >> 8 & 0xff) * fRam00000001467f0884;
        fVar18 = (float)(int)(uVar22 >> 0x20) * fRam00000001467f0888;
        fVar19 = (float)(uVar14 >> 0x18) * fRam00000001467f088c;
        *(float *)*pauVar13 = (float)(int)uVar22 * _DAT_1467f0880;
        *(float *)(*pauVar13 + 4) = fVar17;
        *(float *)(*pauVar13 + 8) = fVar18;
        *(float *)(*pauVar13 + 0xc) = fVar19;
        uVar11 = uVar11 - 1;
        pauVar13 = pauVar13 + 1;
      } while (uVar11 != 0);
    }
  }
  else {
    if (cVar2 != '\n') {
      return 0x80040200;
    }
    bVar3 = *(byte *)((longlong)param_1 + 0xd);
    pauVar13 = param_2;
    uVar14 = param_3;
    if (bVar3 < 4) {
      while (-1 < (int)(uVar14 - 1)) {
        *(undefined8 *)*pauVar13 = uVar5;
        *(undefined8 *)(*pauVar13 + 8) = uVar6;
        pauVar13 = pauVar13 + 1;
        uVar14 = uVar14 - 1;
      }
    }
    uVar14 = (uint)bVar3;
    if (4 < bVar3) {
      uVar14 = 4;
    }
    FUN_14379fd40(*param_1,(int)param_1[1],param_2,0x10,uVar14 * 4,param_3);
  }
  if (*(char *)((longlong)param_1 + 0xe) == '\b') {
    while (param_3 = param_3 - 1, -1 < (int)param_3) {
      lVar8 = (longlong)(int)(param_3 * 4);
      fVar18 = *(float *)(*param_2 + lVar8 * 4);
      fVar19 = *(float *)((longlong)(*param_2 + lVar8 * 4) + 4);
      fVar17 = *(float *)(*param_2 + lVar8 * 4 + 8);
      auVar20._0_4_ = DAT_1467f06f0 - (fVar19 + fVar18 + fVar17);
      auVar20._4_4_ = fRam00000001467f06f4 - (fVar19 + fVar18 + fVar17);
      auVar20._8_4_ = fRam00000001467f06f8 - (fVar19 + fVar18 + fVar17);
      auVar20._12_4_ = fRam00000001467f06fc - (fVar19 + fVar18 + fVar17);
      auVar21 = maxps(auVar20,ZEXT816(0));
      pfVar10 = (float *)(*param_2 + lVar8 * 4);
      *pfVar10 = fVar18;
      pfVar10[1] = fVar19;
      pfVar10[2] = fVar17;
      pfVar10[3] = auVar21._12_4_;
    }
  }
  return 0;
}



// FUNCTION 14379e6e0 FUN_14379e6e0 body=29 status=ok
// SIG undefined FUN_14379e6e0(void)

void FUN_14379e6e0(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_14379e400(param_1 + (longlong)param_2 * 0x18,param_3,*(undefined4 *)(param_1 + 0x304));
  return;
}



// FUNCTION 14379e700 FUN_14379e700 body=215 status=ok
// SIG undefined FUN_14379e700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e700(undefined8 *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  
  if ((((*(char *)((longlong)param_1 + 0xd) == '\x01') ||
       (*(char *)((longlong)param_2 + 0xd) == '\x04')) &&
      (*(char *)((longlong)param_1 + 0xc) == '\b')) && (*(char *)((longlong)param_2 + 0xc) == '\n'))
  {
    iVar1 = *(int *)(param_1 + 1);
    puVar4 = (uint *)*param_1;
    lVar3 = param_2[1];
    pfVar6 = (float *)*param_2;
    if (0 < (int)param_3) {
      uVar5 = (ulonglong)param_3;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + (int)((ulonglong)(longlong)iVar1 >> 2);
        uVar10 = CONCAT44(uVar2 >> 0x10,uVar2) & 0xff000000ff;
        fVar7 = (float)(uVar2 >> 8 & 0xff) * fRam00000001467f0884;
        fVar8 = (float)(int)(uVar10 >> 0x20) * fRam00000001467f0888;
        fVar9 = (float)(uVar2 >> 0x18) * fRam00000001467f088c;
        *pfVar6 = (float)(int)uVar10 * _DAT_1467f0880;
        pfVar6[1] = fVar7;
        pfVar6[2] = fVar8;
        pfVar6[3] = fVar9;
        pfVar6 = pfVar6 + (int)((ulonglong)(longlong)(int)lVar3 >> 2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14379e7e0 FUN_14379e7e0 body=286 status=ok
// SIG undefined FUN_14379e7e0(void)

void FUN_14379e7e0(longlong *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  uVar7 = (ulonglong)bVar1;
  bVar2 = *(byte *)((longlong)param_2 + 0xd);
  if ((((uint)bVar1 <= (uint)bVar2) && (*(char *)((longlong)param_1 + 0xc) == '\n')) &&
     (*(char *)((longlong)param_2 + 0xc) == '\n')) {
    lVar3 = param_1[1];
    lVar12 = *param_1;
    lVar4 = param_2[1];
    lVar11 = *param_2;
    if (0 < (int)param_3) {
      uVar8 = (ulonglong)param_3;
      do {
        lVar6 = 0;
        if (3 < uVar7) {
          lVar9 = lVar12 - lVar11;
          lVar10 = (uVar7 - 4 >> 2) + 1;
          puVar5 = (undefined4 *)(lVar11 + 4);
          lVar6 = lVar10 * 4;
          do {
            puVar5[-1] = *(undefined4 *)(lVar9 + -4 + (longlong)puVar5);
            *puVar5 = *(undefined4 *)(lVar9 + (longlong)puVar5);
            puVar5[1] = *(undefined4 *)(lVar9 + 4 + (longlong)puVar5);
            puVar5[2] = *(undefined4 *)(lVar9 + 8 + (longlong)puVar5);
            puVar5 = puVar5 + 4;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        if (lVar6 < (longlong)uVar7) {
          puVar5 = (undefined4 *)(lVar11 + lVar6 * 4);
          do {
            lVar6 = lVar6 + 1;
            *puVar5 = *(undefined4 *)((longlong)puVar5 + (lVar12 - lVar11));
            puVar5 = puVar5 + 1;
          } while (lVar6 < (longlong)uVar7);
        }
        if ((uint)bVar1 < (uint)bVar2) {
          puVar5 = (undefined4 *)(lVar11 + uVar7 * 4);
          for (lVar6 = (longlong)(int)((uint)bVar2 - (uint)bVar1); lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
        }
        lVar12 = lVar12 + (longlong)(int)((ulonglong)(longlong)(int)lVar3 >> 2) * 4;
        lVar11 = lVar11 + (longlong)(int)((ulonglong)(longlong)(int)lVar4 >> 2) * 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 14379e900 FUN_14379e900 body=212 status=ok
// SIG undefined FUN_14379e900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e900(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  float *pfVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 auVar15 [16];
  
  auVar11 = _DAT_1467f0790;
  uVar13 = (ulonglong)param_3;
  if ((((*(char *)((longlong)param_1 + 0xd) == '\x04') &&
       (*(char *)((longlong)param_2 + 0xd) == '\x01')) &&
      (*(char *)((longlong)param_1 + 0xc) == '\n')) && (*(char *)((longlong)param_2 + 0xc) == '\b'))
  {
    iVar1 = *(int *)(param_1 + 1);
    puVar14 = (uint *)*param_2;
    fVar3 = (float)DAT_1467f0790;
    fVar4 = DAT_1467f0790._4_4_;
    fVar5 = DAT_1467f0790._8_4_;
    fVar6 = DAT_1467f0790._12_4_;
    pfVar12 = (float *)*param_1;
    iVar2 = *(int *)(param_2 + 1);
    if (0 < (int)param_3) {
      do {
        fVar7 = *pfVar12;
        pfVar8 = pfVar12 + 1;
        pfVar9 = pfVar12 + 2;
        pfVar10 = pfVar12 + 3;
        pfVar12 = pfVar12 + (int)((ulonglong)(longlong)iVar1 >> 2);
        auVar15._4_4_ = *pfVar8 * fVar4;
        auVar15._0_4_ = fVar7 * fVar3;
        auVar15._8_4_ = *pfVar9 * fVar5;
        auVar15._12_4_ = *pfVar10 * fVar6;
        auVar15 = maxps(ZEXT816(0),auVar15);
        auVar15 = minps(auVar11,auVar15);
        *puVar14 = (((uint)(auVar15._8_4_ + 8388608.0) & 0xff |
                    (int)(auVar15._12_4_ + 8388608.0) << 8) << 8 |
                   (uint)(auVar15._4_4_ + 8388608.0) & 0xff) << 8 |
                   (uint)(auVar15._0_4_ + 8388608.0) & 0xff;
        puVar14 = puVar14 + (int)((ulonglong)(longlong)iVar2 >> 2);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}



// FUNCTION 14379e9e0 FUN_14379e9e0 body=426 status=ok
// SIG undefined FUN_14379e9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379e9e0(longlong *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  bVar2 = *(byte *)((longlong)param_2 + 0xd);
  lVar6 = (longlong)(int)param_1[1];
  lVar7 = (longlong)(int)param_2[1];
  lVar9 = *param_1;
  lVar3 = *param_2;
  if (bVar1 == bVar2) {
    if (0 < (int)param_3) {
      uVar10 = (ulonglong)param_3;
      do {
        iVar8 = 0;
        lVar5 = 0;
        if ((ulonglong)bVar1 != 0) {
          do {
            lVar4 = (longlong)iVar8;
            iVar8 = iVar8 + 1;
            *(char *)(lVar5 + lVar3) = (char)(int)(*(float *)(lVar9 + lVar4 * 4) * _DAT_1467f0790);
            lVar5 = lVar5 + 1;
          } while (lVar5 < (longlong)(ulonglong)bVar1);
        }
        lVar3 = lVar3 + lVar7;
        lVar9 = lVar9 + lVar6;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      return;
    }
  }
  else if ((*(char *)((longlong)param_1 + 0xe) == '\a') &&
          (*(char *)((longlong)param_2 + 0xe) == '\b')) {
    if (((uint)bVar1 == bVar2 - 1) && (0 < (int)param_3)) {
      uVar10 = (ulonglong)param_3;
      do {
        iVar8 = 0;
        lVar5 = 0;
        if ((ulonglong)bVar2 != 0) {
          do {
            lVar4 = (longlong)iVar8;
            iVar8 = iVar8 + 1;
            *(char *)(lVar5 + lVar3) = (char)(int)(*(float *)(lVar9 + lVar4 * 4) * _DAT_1467f0790);
            lVar5 = lVar5 + 1;
          } while (lVar5 < (longlong)(ulonglong)bVar2);
        }
        lVar3 = lVar3 + lVar7;
        lVar9 = lVar9 + lVar6;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
      return;
    }
  }
  else if (((*(char *)((longlong)param_1 + 0xe) == '\b') ||
           (*(char *)((longlong)param_2 + 0xe) == '\a')) &&
          (((uint)bVar2 == bVar1 - 1 && (uVar10 = (ulonglong)(uint)bVar2, 0 < (int)param_3)))) {
    uVar11 = (ulonglong)param_3;
    do {
      iVar8 = 0;
      lVar5 = 0;
      fVar13 = 0.0;
      if (uVar10 != 0) {
        do {
          lVar4 = (longlong)iVar8;
          iVar8 = iVar8 + 1;
          fVar12 = *(float *)(lVar9 + lVar4 * 4) * _DAT_1467f0790;
          fVar13 = fVar13 + fVar12;
          *(char *)(lVar5 + lVar3) = (char)(int)fVar12;
          lVar5 = lVar5 + 1;
        } while (lVar5 < (longlong)uVar10);
      }
      lVar9 = lVar9 + lVar6;
      *(char *)(uVar10 + lVar3) = (char)(int)(_DAT_1467f0790 - fVar13);
      lVar3 = lVar3 + lVar7;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 14379eb90 FUN_14379eb90 body=330 status=ok
// SIG undefined FUN_14379eb90(void)

void FUN_14379eb90(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  if ((((*(char *)((longlong)param_1 + 0xd) == '\x03') &&
       (*(char *)((longlong)param_2 + 0xd) == '\x01')) &&
      (*(char *)((longlong)param_1 + 0xc) == '\n')) && (*(char *)((longlong)param_2 + 0xc) == '\v'))
  {
    puVar2 = (undefined4 *)*param_2;
    puVar4 = (undefined4 *)*param_1;
    iVar6 = 0;
    iVar8 = (int)((ulonglong)(longlong)*(int *)(param_1 + 1) >> 2);
    iVar5 = (int)((ulonglong)(longlong)*(int *)(param_2 + 1) >> 2);
    if (3 < param_3) {
      uVar1 = (param_3 - 4U >> 2) + 1;
      uVar7 = (ulonglong)uVar1;
      iVar6 = uVar1 * 4;
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + iVar8;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + iVar5;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + iVar8;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + iVar5;
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + iVar8;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + iVar5;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + iVar8;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + iVar5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (iVar6 < param_3) {
      uVar7 = (ulonglong)(uint)(param_3 - iVar6);
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + 2;
        puVar4 = puVar4 + iVar8;
        puVar2[2] = *puVar3;
        puVar2[3] = 0;
        puVar2 = puVar2 + iVar5;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}



// FUNCTION 14379ece0 FUN_14379ece0 body=102 status=ok
// SIG undefined FUN_14379ece0(void)

void FUN_14379ece0(longlong *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  lVar2 = param_2[1];
  lVar6 = *param_1;
  lVar7 = *param_2;
  if ((bVar1 == *(byte *)((longlong)param_2 + 0xd)) && (0 < (int)param_3)) {
    lVar3 = param_1[1];
    uVar5 = (ulonglong)param_3;
    do {
      lVar4 = 0;
      if ((ulonglong)bVar1 != 0) {
        do {
          *(undefined1 *)(lVar4 + lVar7) = *(undefined1 *)(lVar6 + lVar4 * 2);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (longlong)(ulonglong)bVar1);
      }
      lVar7 = lVar7 + (int)lVar2;
      lVar6 = lVar6 + (int)lVar3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14379ed50 FUN_14379ed50 body=147 status=ok
// SIG undefined FUN_14379ed50(void)

void FUN_14379ed50(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  uint *puVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_3;
  if ((((*(char *)((longlong)param_1 + 0xd) == '\x04') &&
       (*(char *)((longlong)param_2 + 0xd) == '\x04')) &&
      (*(char *)((longlong)param_1 + 0xc) == '\x03')) &&
     ((byte)(*(char *)((longlong)param_2 + 0xc) - 7U) < 2)) {
    iVar5 = *(int *)(param_2 + 1);
    psVar7 = (short *)*param_1;
    puVar8 = (uint *)*param_2;
    if (0 < (int)param_3) {
      iVar6 = *(int *)(param_1 + 1);
      do {
        psVar1 = psVar7 + 2;
        psVar2 = psVar7 + 3;
        psVar3 = psVar7 + 1;
        sVar4 = *psVar7;
        psVar7 = psVar7 + iVar6;
        *puVar8 = (((int)*psVar1 & 0xffU | (int)*psVar2 << 8) << 8 | (int)*psVar3 & 0xffU) << 8 |
                  (int)sVar4 & 0xffU;
        puVar8 = (uint *)((longlong)puVar8 + (longlong)(int)((ulonglong)(longlong)iVar5 >> 1));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14379edf0 FUN_14379edf0 body=103 status=ok
// SIG undefined FUN_14379edf0(void)

void FUN_14379edf0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  
  if (((*(char *)((longlong)param_1 + 0xd) == *(char *)((longlong)param_2 + 0xd)) &&
      (*(char *)((longlong)param_1 + 0xc) == '\a')) && (*(char *)((longlong)param_2 + 0xc) == '\b'))
  {
    puVar5 = (undefined1 *)*param_2;
    puVar4 = (undefined1 *)*param_1;
    if ((*(char *)((longlong)param_1 + 0xd) == '\x04') && (0 < (int)param_3)) {
      iVar2 = *(int *)(param_1 + 1);
      iVar3 = *(int *)(param_2 + 1);
      uVar6 = (ulonglong)param_3;
      do {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
        puVar1 = puVar4 + 3;
        puVar4 = puVar4 + iVar2;
        puVar5[3] = *puVar1;
        puVar5 = puVar5 + iVar3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14379ee60 FUN_14379ee60 body=177 status=ok
// SIG undefined FUN_14379ee60(void)

void FUN_14379ee60(undefined8 *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  float *pfVar9;
  
  if (((*(char *)((longlong)param_1 + 0xd) == *(char *)((longlong)param_2 + 0xd)) &&
      (*(char *)((longlong)param_1 + 0xc) == '\a')) && (*(char *)((longlong)param_2 + 0xc) == '\n'))
  {
    lVar6 = param_2[1];
    pfVar9 = (float *)*param_2;
    pbVar8 = (byte *)*param_1;
    if ((*(char *)((longlong)param_1 + 0xd) == '\x04') && (0 < (int)param_3)) {
      iVar5 = *(int *)(param_1 + 1);
      uVar7 = (ulonglong)param_3;
      do {
        bVar1 = *pbVar8;
        bVar2 = pbVar8[1];
        bVar3 = pbVar8[2];
        bVar4 = pbVar8[3];
        pbVar8 = pbVar8 + iVar5;
        *pfVar9 = (float)bVar1;
        pfVar9[1] = (float)bVar2;
        pfVar9[2] = (float)bVar3;
        pfVar9[3] = (float)bVar4;
        pfVar9 = pfVar9 + (int)((ulonglong)(longlong)(int)lVar6 >> 2);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}



// FUNCTION 14379ef20 FUN_14379ef20 body=117 status=ok
// SIG undefined FUN_14379ef20(void)

void FUN_14379ef20(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_3;
  if ((((*(char *)((longlong)param_1 + 0xd) == '\x04') &&
       (*(char *)((longlong)param_2 + 0xd) == '\x04')) &&
      (*(char *)((longlong)param_1 + 0xc) == '\a')) &&
     (*(char *)((longlong)param_2 + 0xc) == '\x03')) {
    puVar5 = (undefined4 *)*param_1;
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *(int *)(param_2 + 1);
    puVar4 = (ushort *)*param_2;
    if (0 < (int)param_3) {
      do {
        uVar3 = *puVar5;
        puVar5 = (undefined4 *)((longlong)puVar5 + (longlong)iVar1);
        *puVar4 = (ushort)uVar3 & 0xff;
        puVar4[1] = (ushort)((uint)uVar3 >> 8) & 0xff;
        puVar4[2] = (ushort)((uint)uVar3 >> 0x10) & 0xff;
        puVar4[3] = (ushort)(byte)((uint)uVar3 >> 0x18);
        puVar4 = puVar4 + (int)((ulonglong)(longlong)iVar2 >> 1);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 14379efa0 FUN_14379efa0 body=494 status=ok
// SIG undefined FUN_14379efa0(void)

void FUN_14379efa0(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  if (((bVar1 == *(byte *)((longlong)param_2 + 0xd)) &&
      ((byte)(*(char *)((longlong)param_1 + 0xc) - 7U) < 2)) &&
     (*(char *)((longlong)param_2 + 0xc) == '\x02')) {
    puVar5 = (undefined1 *)*param_2;
    puVar9 = (undefined4 *)*param_1;
    lVar10 = (longlong)*(int *)(param_1 + 1);
    iVar3 = *(int *)(param_2 + 1);
    if (bVar1 == 1) {
      if (0 < (int)param_3) {
        uVar6 = (ulonglong)param_3;
        do {
          uVar2 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((longlong)puVar9 + lVar10);
          *puVar5 = uVar2;
          puVar5 = puVar5 + iVar3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else if (bVar1 == 2) {
      if (0 < (int)param_3) {
        uVar6 = (ulonglong)param_3;
        do {
          uVar4 = *puVar9;
          puVar9 = (undefined4 *)((longlong)puVar9 + lVar10);
          *puVar5 = (char)uVar4;
          puVar5[1] = (char)((uint)uVar4 >> 8);
          puVar5 = puVar5 + iVar3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        return;
      }
    }
    else if (bVar1 == 3) {
      if (0 < (int)param_3) {
        uVar6 = (ulonglong)param_3;
        do {
          uVar4 = *puVar9;
          *puVar5 = (char)uVar4;
          puVar9 = (undefined4 *)((longlong)puVar9 + lVar10);
          puVar5[1] = (char)((uint)uVar4 >> 8);
          puVar5[2] = (char)((uint)uVar4 >> 0x10);
          puVar5 = puVar5 + iVar3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        return;
      }
    }
    else if (bVar1 == 4) {
      if (0 < (int)param_3) {
        uVar6 = (ulonglong)param_3;
        do {
          uVar4 = *puVar9;
          puVar9 = (undefined4 *)((longlong)puVar9 + lVar10);
          puVar5[1] = (char)((uint)uVar4 >> 8);
          *puVar5 = (char)uVar4;
          puVar5[2] = (char)((uint)uVar4 >> 0x10);
          puVar5[3] = (char)((uint)uVar4 >> 0x18);
          puVar5 = puVar5 + iVar3;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        return;
      }
    }
    else {
      bVar7 = bVar1 & 3;
      if (0 < (int)param_3) {
        uVar6 = (ulonglong)param_3;
        do {
          puVar8 = puVar5;
          puVar11 = puVar9;
          if (bVar1 >> 2 != 0) {
            uVar12 = (ulonglong)(bVar1 >> 2);
            do {
              uVar4 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar8[1] = (char)((uint)uVar4 >> 8);
              *puVar8 = (char)uVar4;
              puVar8[2] = (char)((uint)uVar4 >> 0x10);
              puVar8[3] = (char)((uint)uVar4 >> 0x18);
              puVar8 = puVar8 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (bVar7 == 1) {
            *puVar8 = *(undefined1 *)puVar11;
          }
          else if (bVar7 == 2) {
            uVar4 = *puVar11;
            *puVar8 = (char)uVar4;
            puVar8[1] = (char)((uint)uVar4 >> 8);
          }
          else if (bVar7 == 3) {
            uVar4 = *puVar11;
            *puVar8 = (char)uVar4;
            puVar8[2] = (char)((uint)uVar4 >> 0x10);
            puVar8[1] = (char)((uint)uVar4 >> 8);
          }
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14379f190 FUN_14379f190 body=445 status=ok
// SIG undefined FUN_14379f190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379f190(undefined8 *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  int iVar9;
  float *pfVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  bVar2 = *(byte *)((longlong)param_2 + 0xd);
  iVar3 = *(int *)(param_1 + 1);
  lVar8 = (longlong)(int)param_2[1];
  pbVar11 = (byte *)*param_1;
  pfVar4 = (float *)*param_2;
  if (bVar1 == bVar2) {
    if (0 < (int)param_3) {
      uVar13 = (ulonglong)param_3;
      do {
        iVar9 = 0;
        lVar6 = 0;
        if ((ulonglong)bVar1 != 0) {
          do {
            pbVar7 = pbVar11 + lVar6;
            lVar6 = lVar6 + 1;
            lVar5 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            pfVar4[lVar5] = (float)*pbVar7 * _DAT_1467f0880;
          } while (lVar6 < (longlong)(ulonglong)bVar1);
        }
        pfVar4 = (float *)((longlong)pfVar4 + lVar8);
        pbVar11 = pbVar11 + iVar3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      return;
    }
  }
  else if ((*(char *)((longlong)param_1 + 0xe) == '\a') &&
          (*(char *)((longlong)param_2 + 0xe) == '\b')) {
    if (((uint)bVar1 == bVar2 - 1) && (0 < (int)param_3)) {
      uVar13 = (ulonglong)param_3;
      do {
        iVar9 = 0;
        lVar6 = 0;
        if ((ulonglong)bVar2 != 0) {
          do {
            pbVar7 = pbVar11 + lVar6;
            lVar6 = lVar6 + 1;
            lVar5 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            pfVar4[lVar5] = (float)*pbVar7 * _DAT_1467f0880;
          } while (lVar6 < (longlong)(ulonglong)bVar2);
        }
        pfVar4 = (float *)((longlong)pfVar4 + lVar8);
        pbVar11 = pbVar11 + iVar3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      return;
    }
  }
  else if ((*(char *)((longlong)param_1 + 0xe) == '\b') ||
          (*(char *)((longlong)param_2 + 0xe) == '\a')) {
    if (((uint)bVar2 == bVar1 - 1) && (0 < (int)param_3)) {
      uVar13 = (ulonglong)param_3;
      do {
        fVar14 = 0.0;
        pbVar7 = pbVar11;
        pfVar10 = pfVar4;
        uVar12 = (ulonglong)bVar2;
        if (bVar2 != 0) {
          do {
            fVar14 = fVar14 + (float)*pbVar7;
            *pfVar10 = (float)*pbVar7 * _DAT_1467f0880;
            uVar12 = uVar12 - 1;
            pbVar7 = pbVar7 + 1;
            pfVar10 = pfVar10 + 1;
          } while (uVar12 != 0);
        }
        pbVar11 = pbVar11 + iVar3;
        pfVar4[bVar2] = (_DAT_1467f0790 - fVar14) * _DAT_1467f0880;
        pfVar4 = (float *)((longlong)pfVar4 + lVar8);
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  return;
}



// FUNCTION 14379f350 FUN_14379f350 body=103 status=ok
// SIG undefined FUN_14379f350(void)

void FUN_14379f350(longlong *param_1,longlong *param_2,uint param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  lVar2 = param_2[1];
  lVar6 = *param_1;
  lVar7 = *param_2;
  if ((bVar1 == *(byte *)((longlong)param_2 + 0xd)) && (0 < (int)param_3)) {
    lVar3 = param_1[1];
    uVar5 = (ulonglong)param_3;
    do {
      lVar4 = 0;
      if ((ulonglong)bVar1 != 0) {
        do {
          *(ushort *)(lVar7 + lVar4 * 2) = (ushort)*(byte *)(lVar4 + lVar6);
          lVar4 = lVar4 + 1;
        } while (lVar4 < (longlong)(ulonglong)bVar1);
      }
      lVar7 = lVar7 + (int)lVar2;
      lVar6 = lVar6 + (int)lVar3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14379f3c0 FUN_14379f3c0 body=138 status=ok
// SIG undefined FUN_14379f3c0(void)

void FUN_14379f3c0(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar1 = param_1[1];
  lVar8 = *param_1;
  lVar2 = param_2[1];
  lVar7 = *param_2;
  uVar9 = (ulonglong)param_3;
  uVar4 = (uint)*(byte *)((longlong)param_2 + 0xd);
  if (*(byte *)((longlong)param_1 + 0xd) <= uVar4) {
    uVar6 = (ulonglong)*(byte *)((longlong)param_1 + 0xd);
    if (0 < (int)param_3) {
      do {
        lVar3 = 0;
        if (uVar6 != 0) {
          do {
            *(ushort *)(lVar7 + lVar3 * 2) = (ushort)*(byte *)(lVar3 + lVar8);
            lVar3 = lVar3 + 1;
          } while (lVar3 < (longlong)uVar6);
        }
        uVar5 = uVar6;
        if (uVar6 < uVar4) {
          do {
            *(ushort *)(lVar7 + uVar5 * 2) = (ushort)*(byte *)((uVar6 - 1) + lVar8);
            uVar5 = uVar5 + 1;
          } while ((longlong)uVar5 < (longlong)(ulonglong)uVar4);
        }
        lVar7 = lVar7 + (int)lVar2;
        lVar8 = lVar8 + (int)lVar1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 14379f450 FUN_14379f450 body=576 status=ok
// SIG undefined FUN_14379f450(void)

void FUN_14379f450(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  
  bVar1 = *(byte *)((longlong)param_1 + 0xd);
  if (((bVar1 == *(byte *)((longlong)param_2 + 0xd)) &&
      (*(char *)((longlong)param_1 + 0xc) == '\x02')) &&
     ((byte)(*(char *)((longlong)param_2 + 0xc) - 7U) < 2)) {
    puVar8 = (uint *)*param_2;
    puVar3 = (uint *)*param_1;
    lVar9 = (longlong)*(int *)(param_1 + 1);
    lVar6 = (longlong)*(int *)(param_2 + 1);
    if (bVar1 == 1) {
      if (0 < (int)param_3) {
        uVar5 = (ulonglong)param_3;
        do {
          uVar2 = *puVar3;
          puVar3 = (uint *)((longlong)puVar3 + lVar9);
          *puVar8 = (uint)(byte)uVar2;
          puVar8 = (uint *)((longlong)puVar8 + lVar6);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else if (bVar1 == 2) {
      if (0 < (int)param_3) {
        uVar5 = (ulonglong)param_3;
        do {
          uVar2 = *puVar3;
          puVar3 = (uint *)((longlong)puVar3 + lVar9);
          *puVar8 = (uint)(ushort)uVar2;
          puVar8 = (uint *)((longlong)puVar8 + lVar6);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        return;
      }
    }
    else if (bVar1 == 3) {
      if (0 < (int)param_3) {
        uVar5 = (ulonglong)param_3;
        do {
          uVar2 = *puVar3;
          puVar3 = (uint *)((longlong)puVar3 + lVar9);
          *puVar8 = (uint)(uint3)uVar2;
          puVar8 = (uint *)((longlong)puVar8 + lVar6);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        return;
      }
    }
    else if (bVar1 == 4) {
      if (0 < (int)param_3) {
        uVar5 = (ulonglong)param_3;
        do {
          uVar2 = *puVar3;
          puVar3 = (uint *)((longlong)puVar3 + lVar9);
          *puVar8 = uVar2;
          puVar8 = (uint *)((longlong)puVar8 + lVar6);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        return;
      }
    }
    else {
      bVar4 = bVar1 & 3;
      if (0 < (int)param_3) {
        uVar5 = (ulonglong)param_3;
        do {
          puVar7 = puVar3;
          puVar10 = puVar8;
          if (bVar1 >> 2 != 0) {
            uVar11 = (ulonglong)(bVar1 >> 2);
            do {
              uVar2 = *puVar7;
              puVar7 = puVar7 + 1;
              *puVar10 = uVar2;
              puVar10 = puVar10 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (bVar4 == 1) {
            *puVar10 = (uint)(byte)*puVar7;
          }
          else if (bVar4 == 2) {
            *puVar10 = (uint)(ushort)*puVar7;
          }
          else if (bVar4 == 3) {
            *puVar10 = (uint)(uint3)*puVar7;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14379f690 FUN_14379f690 body=269 status=ok
// SIG undefined FUN_14379f690(void)

void FUN_14379f690(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((((*(char *)((longlong)param_1 + 0xd) == '\x01') &&
       (*(byte *)((longlong)param_2 + 0xd) == param_3)) &&
      (*(char *)((longlong)param_1 + 0xc) == '\v')) && (*(char *)((longlong)param_2 + 0xc) == '\n'))
  {
    lVar1 = param_1[1];
    lVar10 = *param_1;
    lVar2 = param_2[1];
    lVar9 = *param_2;
    lVar6 = (longlong)(int)param_3;
    if (0 < (int)param_4) {
      uVar7 = (ulonglong)param_4;
      do {
        lVar5 = 0;
        if (3 < lVar6) {
          lVar4 = lVar10 - lVar9;
          lVar8 = (lVar6 - 4U >> 2) + 1;
          puVar3 = (undefined4 *)(lVar9 + 4);
          lVar5 = lVar8 * 4;
          do {
            puVar3[-1] = *(undefined4 *)(lVar4 + -4 + (longlong)puVar3);
            *puVar3 = *(undefined4 *)(lVar4 + (longlong)puVar3);
            puVar3[1] = *(undefined4 *)(lVar4 + 4 + (longlong)puVar3);
            puVar3[2] = *(undefined4 *)(lVar4 + 8 + (longlong)puVar3);
            puVar3 = puVar3 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lVar5 < lVar6) {
          puVar3 = (undefined4 *)(lVar9 + lVar5 * 4);
          lVar5 = lVar6 - lVar5;
          do {
            *puVar3 = *(undefined4 *)((longlong)puVar3 + (lVar10 - lVar9));
            puVar3 = puVar3 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        lVar10 = lVar10 + (longlong)(int)((ulonglong)(longlong)(int)lVar1 >> 2) * 4;
        lVar9 = lVar9 + (longlong)(int)((ulonglong)(longlong)(int)lVar2 >> 2) * 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}



// FUNCTION 14379f7a0 FUN_14379f7a0 body=1039 status=ok
// SIG undefined FUN_14379f7a0(void)

undefined8 FUN_14379f7a0(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  
  uVar4 = *(uint *)(param_1 + 0x304);
  uVar12 = (ulonglong)uVar4;
  lVar8 = (longlong)param_2;
  bVar2 = *(byte *)(param_1 + 0xc + lVar8 * 0x18);
  bVar3 = *(byte *)(param_1 + 0xd + lVar8 * 0x18);
  piVar14 = *(int **)(param_1 + lVar8 * 0x18);
  lVar8 = (longlong)*(int *)(param_1 + 8 + lVar8 * 0x18);
  if (bVar2 - 1 < 10) {
    uVar11 = (ulonglong)(uint)bVar3;
    switch(bVar2) {
    case 1:
      if (0 < (int)uVar4) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              *(char *)(lVar15 + (longlong)piVar14) = (char)iVar5;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 2:
      if (0 < (int)uVar4) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              *(char *)(lVar15 + (longlong)piVar14) = (char)iVar5;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 3:
      if (0 < (int)uVar4) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              *(short *)((longlong)piVar14 + lVar15 * 2) = (short)iVar5;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 4:
      if (0 < (int)uVar4) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              *(short *)((longlong)piVar14 + lVar15 * 2) = (short)iVar5;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 5:
      if (0 < (int)uVar4) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              piVar14[lVar15] = iVar5;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 6:
      if (0 < (int)uVar4) {
        do {
          lVar15 = 0;
          if (uVar11 != 0) {
            do {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              piVar14[lVar15] = iVar5;
              lVar15 = lVar15 + 1;
            } while (lVar15 < (longlong)uVar11);
          }
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 7:
      if (0 < (int)uVar4) {
        do {
          *piVar14 = CONCAT31(CONCAT21(CONCAT11((char)*param_3,(char)param_3[1]),(char)param_3[2]),
                              (char)param_3[3]);
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
          param_3 = param_3 + 4;
        } while (uVar12 != 0);
        return 0;
      }
      break;
    case 8:
      if (0 < (int)uVar4) {
        piVar13 = param_3 + 2;
        do {
          *(char *)piVar14 = (char)piVar13[-2];
          *(char *)((longlong)piVar14 + 1) = (char)piVar13[-1];
          *(char *)((longlong)piVar14 + 2) = (char)*piVar13;
          *(char *)((longlong)piVar14 + 3) = (char)piVar13[1];
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      break;
    case 9:
      goto switchD_14379f7ee_caseD_9;
    case 10:
      if (0 < (int)uVar4) {
        do {
          lVar15 = 0;
          if (((bVar3 != 0) && (7 < bVar3)) &&
             ((param_3 + (int)(bVar3 - 1) < piVar14 || (piVar14 + (int)(bVar3 - 1) < param_3)))) {
            do {
              iVar5 = param_3[1];
              iVar6 = param_3[2];
              iVar7 = param_3[3];
              pfVar9 = (float *)(piVar14 + lVar15);
              *pfVar9 = (float)*param_3;
              pfVar9[1] = (float)iVar5;
              pfVar9[2] = (float)iVar6;
              pfVar9[3] = (float)iVar7;
              piVar13 = param_3 + 4;
              iVar5 = param_3[5];
              iVar6 = param_3[6];
              iVar7 = param_3[7];
              param_3 = param_3 + 8;
              pfVar9 = (float *)(piVar14 + lVar15 + 4);
              *pfVar9 = (float)*piVar13;
              pfVar9[1] = (float)iVar5;
              pfVar9[2] = (float)iVar6;
              pfVar9[3] = (float)iVar7;
              lVar15 = lVar15 + 8;
            } while (lVar15 < (longlong)((ulonglong)(uint)bVar3 & 0xfffffff8));
          }
          if (lVar15 < (longlong)uVar11) {
            if (3 < (longlong)(uVar11 - lVar15)) {
              lVar1 = lVar15 + 2;
              lVar10 = ((uVar11 - lVar15) - 4 >> 2) + 1;
              lVar15 = lVar15 + lVar10 * 4;
              pfVar9 = (float *)(piVar14 + lVar1);
              do {
                pfVar9[-2] = (float)*param_3;
                pfVar9[-1] = (float)param_3[1];
                *pfVar9 = (float)param_3[2];
                piVar13 = param_3 + 3;
                param_3 = param_3 + 4;
                pfVar9[1] = (float)*piVar13;
                lVar10 = lVar10 + -1;
                pfVar9 = pfVar9 + 4;
              } while (lVar10 != 0);
            }
            for (; lVar15 < (longlong)uVar11; lVar15 = lVar15 + 1) {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              piVar14[lVar15] = (int)(float)iVar5;
            }
          }
          piVar14 = (int *)((longlong)piVar14 + lVar8);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        return 0;
      }
    }
    return 0;
  }
switchD_14379f7ee_caseD_9:
  return 0x80040200;
}



// FUNCTION 14379fbe0 FUN_14379fbe0 body=306 status=ok
// SIG undefined FUN_14379fbe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14379fbe0(longlong *param_1,float *param_2,uint param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar9 = fRam00000001467f079c;
  fVar8 = fRam00000001467f0798;
  fVar7 = fRam00000001467f0794;
  fVar6 = _DAT_1467f0790;
  uVar12 = (ulonglong)param_3;
  if (*(char *)((longlong)param_1 + 0xc) == '\b') {
    puVar10 = (uint *)*param_1;
    if (0 < (int)param_3) {
      lVar5 = param_1[1];
      do {
        fVar1 = *param_2;
        pfVar2 = param_2 + 1;
        pfVar3 = param_2 + 2;
        pfVar4 = param_2 + 3;
        param_2 = param_2 + 4;
        uVar13 = -(uint)(fVar1 * fVar6 < fVar6);
        uVar14 = -(uint)(*pfVar2 * fVar7 < fVar7);
        uVar15 = -(uint)(*pfVar3 * fVar8 < fVar8);
        uVar16 = -(uint)(*pfVar4 * fVar9 < fVar9);
        auVar18._0_4_ = ~uVar13 & (uint)fVar6;
        auVar18._4_4_ = ~uVar14 & (uint)fVar7;
        auVar18._8_4_ = ~uVar15 & (uint)fVar8;
        auVar18._12_4_ = ~uVar16 & (uint)fVar9;
        auVar17._0_4_ = uVar13 & (uint)(fVar1 * fVar6);
        auVar17._4_4_ = uVar14 & (uint)(*pfVar2 * fVar7);
        auVar17._8_4_ = uVar15 & (uint)(*pfVar3 * fVar8);
        auVar17._12_4_ = uVar16 & (uint)(*pfVar4 * fVar9);
        auVar17 = maxps(ZEXT816(0),auVar17 | auVar18);
        *puVar10 = ((((int)auVar17._12_4_ ^ -(uint)(2.1474836e+09 <= auVar17._12_4_)) << 8 |
                    (int)auVar17._8_4_ ^ -(uint)(2.1474836e+09 <= auVar17._8_4_)) << 8 |
                   (int)auVar17._4_4_ ^ -(uint)(2.1474836e+09 <= auVar17._4_4_)) << 8 |
                   (int)auVar17._0_4_ ^ -(uint)(2.1474836e+09 <= auVar17._0_4_);
        puVar10 = (uint *)((longlong)puVar10 + (longlong)(int)lVar5);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    return 0;
  }
  if (*(char *)((longlong)param_1 + 0xc) != '\n') {
    return 0x80040200;
  }
  iVar11 = (uint)*(byte *)((longlong)param_1 + 0xd) * 4;
  if (4 < *(byte *)((longlong)param_1 + 0xd)) {
    FUN_14379fef0(*param_1 + 0x10,(int)param_1[1],iVar11 + -0x10,uVar12);
  }
  FUN_14379fd40(param_2,0x10,*param_1,(int)param_1[1],iVar11,param_3);
  return 0;
}



// FUNCTION 14379fd20 FUN_14379fd20 body=29 status=ok
// SIG undefined FUN_14379fd20(void)

void FUN_14379fd20(longlong param_1,int param_2,undefined8 param_3)

{
  FUN_14379fbe0(param_1 + (longlong)param_2 * 0x18,param_3,*(undefined4 *)(param_1 + 0x304));
  return;
}



// FUNCTION 14379fd40 FUN_14379fd40 body=432 status=ok
// SIG undefined FUN_14379fd40(void)

void FUN_14379fd40(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,uint param_5,
                  int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_5 == 0) {
    return;
  }
  if ((param_2 == param_4) && (param_2 == param_5)) {
    FUN_14370c700(param_3,param_1,param_5 * param_6);
    return;
  }
  if ((param_5 & 3) == 0) {
    iVar4 = (int)param_5 >> 2;
    puVar3 = (undefined4 *)((longlong)(int)(param_2 * param_6) + (longlong)param_1);
    if (iVar4 == 1) {
      if (param_1 == puVar3) {
        return;
      }
      do {
        uVar2 = *param_1;
        param_1 = (undefined4 *)((longlong)param_1 + (longlong)(int)param_2);
        *param_3 = uVar2;
        param_3 = (undefined4 *)((longlong)param_3 + (longlong)(int)param_4);
      } while (param_1 != puVar3);
      return;
    }
    if (iVar4 == 2) {
      if (param_1 == puVar3) {
        return;
      }
      do {
        *param_3 = *param_1;
        puVar1 = param_1 + 1;
        param_1 = (undefined4 *)((longlong)param_1 + (longlong)(int)param_2);
        param_3[1] = *puVar1;
        param_3 = (undefined4 *)((longlong)param_3 + (longlong)(int)param_4);
      } while (param_1 != puVar3);
      return;
    }
    if (iVar4 == 3) {
      if (param_1 == puVar3) {
        return;
      }
      param_3 = param_3 + 2;
      do {
        param_3[-2] = *param_1;
        param_3[-1] = param_1[1];
        puVar1 = param_1 + 2;
        param_1 = (undefined4 *)((longlong)param_1 + (longlong)(int)param_2);
        *param_3 = *puVar1;
        param_3 = (undefined4 *)((longlong)param_3 + (longlong)(int)param_4);
      } while (param_1 != puVar3);
      return;
    }
    if (iVar4 == 4) {
      if (param_1 == puVar3) {
        return;
      }
      param_1 = param_1 + 2;
      param_3 = param_3 + 2;
      do {
        param_3[-2] = param_1[-2];
        param_3[-1] = param_1[-1];
        *param_3 = *param_1;
        puVar1 = param_1 + 1;
        param_1 = (undefined4 *)((longlong)param_1 + (longlong)(int)param_2);
        param_3[1] = *puVar1;
        param_3 = (undefined4 *)((longlong)param_3 + (longlong)(int)param_4);
      } while (param_1 + -2 != puVar3);
      return;
    }
  }
  puVar3 = (undefined4 *)((longlong)(int)(param_2 * param_6) + (longlong)param_1);
  if (param_1 != puVar3) {
    do {
      FUN_14370c700(param_3,param_1,param_5);
      param_1 = (undefined4 *)((longlong)param_1 + (longlong)(int)param_2);
      param_3 = (undefined4 *)((longlong)param_3 + (longlong)(int)param_4);
    } while (param_1 != puVar3);
  }
  return;
}



// FUNCTION 14379fef0 FUN_14379fef0 body=346 status=ok
// SIG undefined FUN_14379fef0(void)

void FUN_14379fef0(undefined8 *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 == param_3) {
    FUN_14370c720(param_1,0,param_3 * param_4);
    return;
  }
  puVar2 = (undefined8 *)((longlong)(int)(param_3 * param_4) + (longlong)param_1);
  if ((param_3 & 3) == 0) {
    iVar1 = (int)param_3 >> 2;
    if (iVar1 == 1) {
      if (param_1 == puVar2) {
        return;
      }
      do {
        *(undefined4 *)param_1 = 0;
        param_1 = (undefined8 *)((longlong)param_1 + (longlong)(int)param_2);
      } while (param_1 != puVar2);
      return;
    }
    if (iVar1 == 2) {
      if (param_1 == puVar2) {
        return;
      }
      do {
        *param_1 = 0;
        param_1 = (undefined8 *)((longlong)param_1 + (longlong)(int)param_2);
      } while (param_1 != puVar2);
      return;
    }
    if (iVar1 == 3) {
      if (param_1 == puVar2) {
        return;
      }
      do {
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = 0;
        param_1 = (undefined8 *)((longlong)param_1 + (longlong)(int)param_2);
      } while (param_1 != puVar2);
      return;
    }
    if (iVar1 == 4) {
      if (param_1 == puVar2) {
        return;
      }
      do {
        *param_1 = 0;
        param_1[1] = 0;
        param_1 = (undefined8 *)((longlong)param_1 + (longlong)(int)param_2);
      } while (param_1 != puVar2);
      return;
    }
  }
  if (param_1 != puVar2) {
    do {
      FUN_14370c720(param_1,0,param_3);
      param_1 = (undefined8 *)((longlong)param_1 + (longlong)(int)param_2);
    } while (param_1 != puVar2);
  }
  return;
}



// FUNCTION 1437a0050 FUN_1437a0050 body=186 status=ok
// SIG undefined FUN_1437a0050(void)

longlong FUN_1437a0050(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                      int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar4 = FUN_1437a0110();
  uVar7 = *(uint *)(param_1 + 0x10) >> (param_2 & 0x1f);
  uVar6 = *(uint *)(param_1 + 0xc) >> (param_2 & 0x1f);
  uVar5 = 1;
  if (1 < uVar7) {
    uVar5 = uVar7;
  }
  uVar7 = 1;
  if (1 < uVar6) {
    uVar7 = uVar6;
  }
  iVar1 = FUN_1437a69a0(*(undefined4 *)(param_1 + 0x18),uVar7,uVar5);
  uVar6 = *(uint *)(param_1 + 0xc) >> (param_2 & 0x1f);
  uVar5 = 1;
  if (1 < uVar6) {
    uVar5 = uVar6;
  }
  iVar2 = FUN_1437a6ad0(*(undefined4 *)(param_1 + 0x18),uVar5);
  iVar3 = FPakFile::IsPakKeepFullDirectory(*(undefined4 *)(param_1 + 0x18));
  return (ulonglong)(uint)(iVar1 * param_7) +
         (ulonglong)(uint)(iVar2 * param_6) + lVar4 + (ulonglong)((uint)(iVar3 * param_5) >> 3);
}



// FUNCTION 1437a0110 FUN_1437a0110 body=34 status=ok
// SIG undefined FUN_1437a0110(void)

longlong FUN_1437a0110(int *param_1,int param_2,int param_3,int param_4)

{
  return (longlong)
         *(int *)(*(longlong *)(param_1 + 8) +
                 (longlong)((param_1[1] * param_4 + param_3) * *param_1 + param_2) * 8) +
         *(longlong *)(param_1 + 0x2c);
}



// FUNCTION 1437a0140 FUN_1437a0140 body=72 status=ok
// SIG undefined FUN_1437a0140(void)

longlong FUN_1437a0140(longlong param_1)

{
  FUN_1437a0190();
  *(undefined4 *)(param_1 + 0x2c) = 0x80000010;
  *(longlong *)(param_1 + 0x20) = param_1 + 0x30;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  return param_1;
}



// FUNCTION 1437a0190 FUN_1437a0190 body=38 status=ok
// SIG undefined FUN_1437a0190(void)

undefined4 * FUN_1437a0190(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[4] = 0;
  param_1[1] = 1;
  *(undefined8 *)(param_1 + 2) = 1;
  *(undefined8 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 1437a01c0 FUN_1437a01c0 body=145 status=ok
// SIG undefined FUN_1437a01c0(void)

void FUN_1437a01c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xbc)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xb0),1,*(uint *)(param_1 + 0xbc) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1437a0260 FUN_1437a0260 body=303 status=ok
// SIG undefined FUN_1437a0260(void)

undefined4 * FUN_1437a0260(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  iVar1 = param_2[0x2e];
  uVar7 = *(undefined8 *)(param_2 + 0x2c);
  uVar6 = FUN_143703a50();
  if ((int)(param_1[0x2f] & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar6,param_1 + 0x2c,iVar1,1);
  }
  FUN_143745160(*(undefined8 *)(param_1 + 0x2c),uVar7,iVar1);
  param_1[0x2e] = iVar1;
  iVar1 = param_2[10];
  lVar2 = *(longlong *)(param_2 + 8);
  uVar7 = FUN_143703a50();
  if ((int)(param_1[0xb] & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar7,param_1 + 8,iVar1,8);
  }
  iVar10 = iVar1;
  if ((int)param_1[10] < iVar1) {
    iVar10 = param_1[10];
  }
  FUN_143738e40(*(undefined8 *)(param_1 + 8),lVar2,iVar10);
  lVar9 = (longlong)(iVar1 - iVar10);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar10 * 8);
  if (0 < iVar1 - iVar10) {
    lVar11 = (longlong)iVar10 * 8 - (longlong)puVar8;
    do {
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = *(undefined8 *)(lVar11 + lVar2 + (longlong)puVar8);
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  param_1[10] = iVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 1437a0390 FUN_1437a0390 body=342 status=ok
// SIG undefined FUN_1437a0390(void)

int FUN_1437a0390(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar9 = param_1[1] * *param_1 * param_1[2];
  uVar4 = FUN_143703a50();
  if ((int)(param_1[0xb] & 0x3fffffff) < (int)uVar9) {
    FUN_14370c310(uVar4,param_1 + 8,uVar9,8);
  }
  uVar4 = FUN_143703a50();
  if ((int)(param_1[0xb] & 0x3fffffff) < (int)uVar9) {
    uVar6 = (param_1[0xb] & 0x3fffffff) * 2;
    uVar12 = uVar9;
    if ((int)uVar9 < (int)uVar6) {
      uVar12 = uVar6;
    }
    FUN_14370c310(uVar4,param_1 + 8,uVar12,8);
  }
  iVar13 = 0;
  param_1[10] = uVar9;
  uVar9 = 0;
  if (param_1[2] != 0) {
    do {
      uVar12 = 0;
      if (param_1[1] != 0) {
        uVar6 = *param_1;
        do {
          uVar8 = 0;
          if (uVar6 != 0) {
            do {
              lVar7 = (longlong)(int)((param_1[1] * uVar9 + uVar12) * uVar6 + uVar8);
              lVar1 = *(longlong *)(param_1 + 8);
              *(int *)(lVar1 + lVar7 * 8) = iVar13;
              bVar5 = (byte)uVar8;
              uVar2 = param_1[4] >> (bVar5 & 0x1f);
              uVar11 = param_1[3] >> (bVar5 & 0x1f);
              uVar10 = param_1[5] >> (bVar5 & 0x1f);
              uVar6 = 1;
              if (1 < uVar2) {
                uVar6 = uVar2;
              }
              uVar2 = 1;
              if (1 < uVar11) {
                uVar2 = uVar11;
              }
              iVar3 = FUN_1437a69a0(param_1[6],uVar2,uVar6);
              uVar6 = 1;
              if (1 < uVar10) {
                uVar6 = uVar10;
              }
              uVar8 = uVar8 + 1;
              *(uint *)(lVar1 + lVar7 * 8 + 4) = iVar3 * uVar6;
              iVar13 = iVar13 + iVar3 * uVar6;
              uVar6 = *param_1;
            } while (uVar8 < uVar6);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < param_1[1]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_1[2]);
  }
  return iVar13;
}



// FUNCTION 1437a04f0 FUN_1437a04f0 body=265 status=ok
// SIG undefined FUN_1437a04f0(void)

undefined4 * FUN_1437a04f0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  FUN_143745310(&local_98,param_3);
  puVar1 = (undefined8 *)FUN_143746570(&local_98);
  pcVar3 = (char *)*puVar1;
  if ((pcVar3 != (char *)0x0) && (*pcVar3 == '.')) {
    pcVar3 = pcVar3 + 1;
  }
  plVar2 = (longlong *)FUN_1437a51e0(pcVar3);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0x80040200;
  }
  else {
    local_b8 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)FUN_143734580(param_3);
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)(local_b8,1);
    }
    local_b0 = 0;
    uStack_a8 = 0;
    local_b8 = puVar1;
    (**(code **)(*plVar2 + 8))(plVar2,param_2,&local_b8,param_1);
    if (local_b8 != (undefined8 *)0x0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
  }
  return param_2;
}



// FUNCTION 1437a0600 FUN_1437a0600 body=147 status=ok
// SIG undefined FUN_1437a0600(void)

void FUN_1437a0600(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  iVar6 = FUN_1437a0390();
  uVar7 = FUN_143703a50();
  if ((int)(param_1[0x2f] & 0x3fffffff) < iVar6) {
    FUN_14370c310(uVar7,param_1 + 0x2c,iVar6,1);
  }
  uVar7 = FUN_143703a50();
  if ((int)(param_1[0x2f] & 0x3fffffff) < iVar6) {
    iVar2 = (param_1[0x2f] & 0x3fffffff) * 2;
    iVar1 = iVar6;
    if (iVar6 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar7,param_1 + 0x2c,iVar1,1);
  }
  param_1[0x2e] = iVar6;
  return;
}



// FUNCTION 1437a06a0 FUN_1437a06a0 body=220 status=ok
// SIG undefined FUN_1437a06a0(void)

undefined4 FUN_1437a06a0(uint param_1)

{
  if (param_1 < 0x32495442) {
    if (param_1 == 0x32495441) {
      return 0xa0;
    }
    if (param_1 < 0x70) {
      if (param_1 == 0x6f) {
        return 0x46;
      }
      if (param_1 == 0x24) {
        return 0x35;
      }
    }
    else if (param_1 < 0x74) {
      if (param_1 == 0x73) {
        return 0x1e;
      }
      if (param_1 == 0x70) {
        return 0x3c;
      }
      if (param_1 == 0x71) {
        return 0x32;
      }
      if (param_1 == 0x72) {
        return 0x28;
      }
    }
    else {
      if (param_1 == 0x74) {
        return 10;
      }
      if (param_1 == 0x31495441) {
        return 0x96;
      }
      if (param_1 == 0x31545844) {
        return 0x78;
      }
    }
  }
  else if (param_1 < 0x53344343) {
    if (param_1 == 0x53344342) {
      return 0x97;
    }
    if ((param_1 + 0xcdaba7bc & 0xfeffffff) == 0) {
      return 0x82;
    }
    if ((param_1 + 0xcbaba7bc & 0xfeffffff) == 0) {
      return 0x8c;
    }
  }
  else {
    if (param_1 == 0x53354342) {
      return 0xa1;
    }
    if (param_1 == 0x55344342) {
      return 0x96;
    }
    if (param_1 == 0x55354342) {
      return 0xa0;
    }
  }
  return 0;
}



// FUNCTION 1437a0780 FUN_1437a0780 body=42 status=ok
// SIG undefined FUN_1437a0780(void)

undefined8 * FUN_1437a0780(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_145baae68;
  param_2[1] = &DAT_145baae70;
  return param_2;
}



// FUNCTION 1437a07b0 GetRenderTargetTextureSizeXY body=24 status=ok
// SIG undefined GetRenderTargetTextureSizeXY(void)

undefined8 FViewport::GetRenderTargetTextureSizeXY(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x18))();
  return param_2;
}



// FUNCTION 1437a07d0 FUN_1437a07d0 body=1368 status=ok
// SIG undefined FUN_1437a07d0(void)

undefined8 FUN_1437a07d0(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  undefined1 local_resc;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar5;
  undefined4 local_78 [6];
  undefined1 local_60 [56];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  if (param_1[1] - *param_1 < 0x80) {
    lVar3 = hkIo::ReadBuffer::implRead(param_1,param_2);
    if (lVar3 != 0x80) {
      if (DAT_146b86338 != '\0') {
        FUN_14373a730(local_60,&DAT_146b86330,1);
        lVar3 = FUN_14373bbd0(local_60,"Failed to read file header.",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0xf6;
        FUN_14373a950(local_60);
        return 0x80040200;
      }
      return 0x80040200;
    }
  }
  else {
    FGenericPlatformString::Memcpy(param_2);
    *param_1 = *param_1 + 0x80;
  }
  if (*param_2 != 0x20534444) {
    if (DAT_146b86338 != '\0') {
      FUN_14373a730(local_60,&DAT_146b86330,1);
      lVar3 = FUN_14373bbd0(local_60,"The file is not a recognized DDS file.",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0xfc;
      FUN_14373a950(local_60);
      return 0x80040200;
    }
    return 0x80040200;
  }
  if (param_2[1] != 0x7c) {
    if (DAT_146b86338 == '\0') {
      return 0x80040200;
    }
    FUN_14373a730(local_60,&DAT_146b86330,1);
    lVar3 = FUN_14373bbd0(local_60,
                          "The file header size {} doesn\'t match the expected size of 124.",
                          &DAT_145baa9a0,param_2 + 1,0);
    *(char **)(lVar3 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x102;
    FUN_14373a950(local_60);
    return 0x80040200;
  }
  *(byte *)(param_2 + 0x20) = (byte)((uint)param_2[2] >> 3) & 1;
  if (param_2[0x13] != 0x20) {
    if (DAT_146b86338 == '\0') {
      return 0x80040200;
    }
    FUN_14373a730(local_60,&DAT_146b86330,1);
    lVar3 = FUN_14373bbd0(local_60,
                          "The pixel format size {} doesn\'t match the expected value of 32.",
                          &DAT_145baa9a0,param_2 + 0x13,0);
    *(char **)(lVar3 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x10a;
    FUN_14373a950(local_60);
    return 0x80040200;
  }
  if ((param_2[0x14] & 4U) == 0) {
    if ((param_2[0x14] & 0x20043U) == 0) {
      if (DAT_146b86338 == '\0') {
        return 0x80040200;
      }
      FUN_14373a730(local_60,&DAT_146b86330,1);
      lVar3 = FUN_14373bbd0(local_60,
                            "The image format is neither specified as a pixel mask nor as a FourCC code."
                            ,&DAT_145b909f0,0);
      *(undefined8 *)(lVar3 + 0x28) = 0x147;
      goto LAB_1437a0ce4;
    }
    iVar1 = FUN_1437a67e0(param_2[0x17],param_2[0x18],param_2[0x19],param_2[0x1a],
                          CONCAT44(uVar5,param_2[0x16]));
    if (iVar1 == 0) {
      if (DAT_146b86338 == '\0') {
        return 0x80040200;
      }
      FUN_14373a730(local_60,&DAT_146b86330,1);
      lVar3 = FUN_14373bbd0(local_60,
                            "The pixel mask specified was not recognized (R: 0x{%08x}, G: 0x{%08x}, B: 0x{%08x}, A: 0x{%08x}, BPP: {})."
                            ,&DAT_145baa9b0,param_2 + 0x17,param_2 + 0x18,param_2 + 0x19,
                            param_2 + 0x1a,param_2 + 0x16,0);
      *(undefined8 *)(lVar3 + 0x28) = 0x141;
      goto LAB_1437a0ce4;
    }
  }
  else {
    uVar2 = param_2[0x15];
    uVar4 = uVar2 >> 0x10;
    if (uVar2 == 0x30315844) {
      if (param_1[1] - *param_1 < 0x14) {
        lVar3 = hkIo::ReadBuffer::implRead(param_1,local_78);
        if (lVar3 != 0x14) {
          if (DAT_146b86338 == '\0') {
            return 0x80040200;
          }
          FUN_14373a730(local_60,&DAT_146b86330,1);
          lVar3 = FUN_14373bbd0(local_60,"Failed to read file header.",&DAT_145b909f0,0);
          *(undefined8 *)(lVar3 + 0x28) = 0x118;
          goto LAB_1437a0ce4;
        }
      }
      else {
        FGenericPlatformString::Memcpy(local_78);
        *param_1 = *param_1 + 0x14;
      }
      iVar1 = FUN_1437a67a0(local_78[0]);
      if (iVar1 == 0) {
        if (DAT_146b86338 == '\0') {
          return 0x80040200;
        }
        FUN_14373a730(local_60,&DAT_146b86330,1);
        lVar3 = FUN_14373bbd0(local_60,"The DXGI format {} has no equivalent image format.",
                              &DAT_145baa9a0,local_78,0);
        *(undefined8 *)(lVar3 + 0x28) = 0x120;
        goto LAB_1437a0ce4;
      }
    }
    else {
      iVar1 = FUN_1437a06a0(uVar2);
      if (iVar1 == 0) {
        local_res8 = (undefined1)uVar4;
        local_res9 = (undefined1)(uVar4 >> 8);
        local_resa = (undefined1)(uVar4 >> 0x10);
        local_resb = (undefined1)(uVar4 >> 0x18);
        local_resc = 0;
        if (DAT_146b86338 == '\0') {
          return 0x80040200;
        }
        FUN_14373a730(local_60,&DAT_146b86330,1);
        lVar3 = FUN_14373bbd0(local_60,"The FourCC code \'{}\' was not recognized.",&DAT_145b75208,
                              &local_res8,0);
        *(undefined8 *)(lVar3 + 0x28) = 0x131;
        goto LAB_1437a0ce4;
      }
    }
  }
  param_2[0x21] = iVar1;
  *(byte *)(param_2 + 0x22) = (byte)((uint)param_2[0x1b] >> 3) & 1;
  uVar4 = (uint)param_2[0x1c] >> 9;
  uVar2 = (uint)param_2[0x1c] >> 0x15;
  *(byte *)((longlong)param_2 + 0x89) = (byte)uVar4 & 1;
  *(byte *)((longlong)param_2 + 0x8a) = (byte)uVar2 & 1;
  if (((uVar2 & 1) == 0) || ((uVar4 & 1) == 0)) {
    return 0;
  }
  if (DAT_146b86338 == '\0') {
    return 0x80040200;
  }
  FUN_14373a730(local_60,&DAT_146b86330,1);
  lVar3 = FUN_14373bbd0(local_60,"The header specifies both the VOLUME and CUBEMAP flags.",
                        &DAT_145b909f0,0);
  *(undefined8 *)(lVar3 + 0x28) = 0x154;
LAB_1437a0ce4:
  *(char **)(lVar3 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
  FUN_14373a950(local_60);
  return 0x80040200;
}



// FUNCTION 1437a0d30 FUN_1437a0d30 body=569 status=ok
// SIG undefined FUN_1437a0d30(void)

undefined4 *
FUN_1437a0d30(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int local_148 [3];
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [64];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  int local_8c;
  char local_28;
  undefined4 local_24;
  char local_1f;
  
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_143734400(&local_128,param_3);
  iVar2 = FUN_1437a07d0(&local_128,local_a8);
  if (iVar2 < 0) {
    *param_2 = 0x80040200;
    FUN_143733ce0(&local_128);
    return param_2;
  }
  FUN_1437a0190(local_148);
  local_13c = local_98;
  local_138 = local_9c;
  local_130 = local_24;
  if (local_8c == 0) {
    local_8c = 1;
  }
  if (local_1f != '\0') {
    local_148[1] = 6;
  }
  local_148[0] = local_8c;
  FUN_1437a0600(param_4,local_148);
  if (local_28 == '\0') {
LAB_1437a0e8d:
    uVar1 = *(uint *)(param_4 + 0xb8);
    uVar7 = (ulonglong)uVar1;
    uVar4 = FUN_14057ade0(param_4);
    if (local_120 - local_128 < (longlong)uVar7) {
      uVar5 = hkIo::ReadBuffer::implRead(&local_128,uVar4,uVar1);
    }
    else {
      FGenericPlatformString::Memcpy(uVar4);
      local_128 = local_128 + uVar7;
      uVar5 = (ulonglong)uVar1;
    }
    if (uVar5 == uVar7) {
      *param_2 = 0;
      goto LAB_1437a0f40;
    }
    if (DAT_146b86338 != '\0') {
      FUN_14373a730(local_e8,&DAT_146b86330,1);
      lVar3 = FUN_14373bbd0(local_e8,"Failed to read image data.",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x1a3;
      FUN_14373a950(local_e8);
      *param_2 = 0x80040200;
      goto LAB_1437a0f40;
    }
  }
  else {
    uVar6 = 1;
    if (1 < *(uint *)(param_4 + 0xc)) {
      uVar6 = *(undefined4 *)(param_4 + 0xc);
    }
    iVar2 = FUN_1437a6ad0(*(undefined4 *)(param_4 + 0x18),uVar6);
    if (iVar2 == local_94) goto LAB_1437a0e8d;
    if (DAT_146b86338 != '\0') {
      FUN_14373a730(local_e8,&DAT_146b86330,1);
      lVar3 = FUN_14373bbd0(local_e8,
                            "The row pitch specified in the header doesn\'t match the expected pitch."
                            ,&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x19b;
      FUN_14373a950(local_e8);
    }
  }
  *param_2 = 0x80040200;
LAB_1437a0f40:
  FUN_143733ce0(&local_128);
  return param_2;
}



// FUNCTION 1437a0f70 FUN_1437a0f70 body=247 status=ok
// SIG undefined FUN_1437a0f70(void)

undefined4 * FUN_1437a0f70(undefined8 param_1,undefined4 *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [12];
  int local_ac;
  int local_a8;
  int local_a0;
  int local_9c;
  int local_34;
  char local_2f;
  char local_2e;
  undefined1 local_28 [32];
  
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_143734400(&local_f8,param_3);
  iVar3 = FUN_1437a07d0(&local_f8,local_b8);
  if (iVar3 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    piVar4 = (int *)FUN_1437a0190(local_28);
    iVar3 = piVar4[1];
    iVar1 = piVar4[2];
    iVar2 = piVar4[3];
    *param_4 = *piVar4;
    param_4[1] = iVar3;
    param_4[2] = iVar1;
    param_4[3] = iVar2;
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(piVar4 + 4);
    param_4[3] = local_a8;
    param_4[4] = local_ac;
    param_4[6] = local_34;
    if (local_9c == 0) {
      local_9c = 1;
    }
    *param_4 = local_9c;
    if (local_2f == '\0') {
      if (local_2e != '\0') {
        param_4[5] = local_a0;
      }
    }
    else {
      param_4[1] = 6;
    }
    *param_2 = 0;
  }
  FUN_143733ce0(&local_f8);
  return param_2;
}



// FUNCTION 1437a1070 FUN_1437a1070 body=116 status=ok
// SIG undefined FUN_1437a1070(void)

undefined8 FUN_1437a1070(undefined4 param_1)

{
  switch(param_1) {
  case 10:
    return 0x74;
  default:
    return 0;
  case 0x1e:
    return 0x73;
  case 0x28:
    return 0x72;
  case 0x32:
    return 0x71;
  case 0x35:
    return 0x24;
  case 0x3c:
    return 0x70;
  case 0x46:
    return 0x6f;
  case 0x78:
    return 0x31545844;
  case 0x82:
    return 0x33545844;
  case 0x8c:
    return 0x35545844;
  case 0x96:
    return 0x31495441;
  case 0xa0:
    return 0x32495441;
  }
}



// FUNCTION 1437a11b0 FUN_1437a11b0 body=1735 status=ok
// SIG undefined FUN_1437a11b0(void)

undefined4 *
FUN_1437a11b0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,uint *param_4,char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar18;
  uint local_160;
  int local_15c;
  undefined4 local_158;
  int local_154;
  int local_150;
  uint local_14c;
  uint local_148;
  int local_140;
  int local_13c;
  undefined4 local_138;
  uint local_134;
  undefined4 local_130;
  undefined1 local_128 [64];
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  Audio::FDelayStereo::FDelayStereo(&local_e8);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_143747cb0(&local_e8,param_3);
  local_160 = param_4[1];
  uVar10 = *param_4;
  local_9c = 1;
  if (1 < param_4[4]) {
    local_9c = param_4[4];
  }
  uVar2 = param_4[6];
  uVar17 = 1;
  if (1 < param_4[5]) {
    uVar17 = param_4[5];
  }
  uVar3 = param_4[2];
  uVar16 = param_4[3];
  local_res20 = CONCAT71(local_res20._1_7_,1 < local_160);
  local_14c = local_9c;
  local_148 = uVar3;
  FUN_14370c720(&local_a8,0,0x80);
  FUN_14370c720(&local_140,0,0x14);
  local_a8 = 0x20534444;
  local_98 = 1;
  if (1 < uVar16) {
    local_98 = uVar16;
  }
  local_a4 = 0x7c;
  if (1 < uVar10) {
    local_8c = uVar10;
  }
  uVar16 = 0x21007;
  if (uVar10 < 2) {
    uVar16 = 0x1007;
  }
  if (uVar17 < 2) {
LAB_1437a131e:
    cVar5 = FUN_1437a6b20(param_4[6]);
    uVar15 = 0;
    if (cVar5 == '\0') {
      uVar6 = 1;
      if (1 < param_4[3]) {
        uVar6 = param_4[3];
      }
      local_94 = FUN_1437a6ad0(param_4[6],uVar6);
      uVar6 = 8;
    }
    else {
      local_94 = 0;
      uVar6 = 0x80000;
    }
    uVar14 = 0x1000;
    if ((char)local_res20 == '\0') {
LAB_1437a1453:
      if (1 < uVar3) {
        uVar14 = uVar14 | 8;
        param_5 = '\x01';
      }
      if (1 < uVar17) {
        uVar14 = uVar14 | 8;
        uVar15 = uVar15 | 0x200000;
      }
      local_5c = 0x20;
      local_3c = uVar14 | 0x400008;
      if (uVar10 < 2) {
        local_3c = uVar14;
      }
      local_a0 = uVar6 | uVar16;
      local_38 = uVar15;
      iVar7 = FUN_1437a6960(uVar2,0);
      iVar8 = FUN_1437a6960(uVar2,1);
      iVar9 = FUN_1437a6960(uVar2,2);
      local_15c = FUN_1437a6960(uVar2,3);
      local_158 = FPakFile::IsPakKeepFullDirectory(uVar2);
      local_150 = FUN_1437a1070(uVar2);
      local_154 = GameParam::ComboAdjustRateMin(uVar2);
      if (param_5 == '\0') {
        if ((((local_15c == 0 && iVar9 == 0) && iVar8 == 0) && iVar7 == 0) ||
           (uVar10 = FUN_1437a67e0(iVar7,iVar8,iVar9,local_15c,CONCAT44(uVar18,local_158)),
           uVar2 != uVar10)) {
          if (local_150 == 0) {
            param_5 = '\x01';
            goto LAB_1437a157d;
          }
          local_54 = local_150;
          local_58 = 4;
        }
        else {
          local_40 = local_15c;
          local_50 = local_158;
          local_58 = 0x41;
          local_4c = iVar7;
          local_48 = iVar8;
          local_44 = iVar9;
        }
      }
      else {
LAB_1437a157d:
        if (local_154 == 0) {
          if (DAT_146b86338 != '\0') {
            local_res20 = FUN_1437a6a20(uVar2);
            FUN_14373a730(local_128,&DAT_146b86330,1);
            lVar11 = FUN_14373bbd0(local_128,
                                   "The image needs to be written as a DXT10 file, but no matching DXGI format was found for \'{}\'."
                                   ,&DAT_145b74470,&local_res20,0);
            *(char **)(lVar11 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
            *(undefined8 *)(lVar11 + 0x28) = 0x249;
            FUN_14373a950(local_128);
            *param_2 = 0x80040200;
            goto LAB_1437a184a;
          }
          goto LAB_1437a130b;
        }
        local_54 = 0x30315844;
        local_58 = 4;
        if (uVar17 < 2) {
          local_13c = (1 < local_14c) + 2;
        }
        else {
          local_13c = 4;
        }
        local_130 = 0;
        if ((char)local_res20 != '\0') {
          local_138 = 4;
        }
        local_134 = local_148;
        local_140 = local_154;
      }
      if (local_e0 < local_e8 + 0x80) {
        lVar11 = hkIo::WriteBuffer::implWriteRaw(&local_e8,&local_a8,0x80);
        if (lVar11 != 0x80) {
          if (DAT_146b86338 != '\0') {
            FUN_14373a730(local_128,&DAT_146b86330,1);
            lVar11 = FUN_14373bbd0(local_128,"Failed to write image header.",&DAT_145b909f0,0);
            *(char **)(lVar11 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
            *(undefined8 *)(lVar11 + 0x28) = 0x26d;
            FUN_14373a950(local_128);
            *param_2 = 0x80040200;
            goto LAB_1437a184a;
          }
          goto LAB_1437a130b;
        }
      }
      else {
        FGenericPlatformString::Memcpy();
        local_e8 = local_e8 + 0x80;
      }
      if (param_5 != '\0') {
        uVar1 = local_e8 + 0x14;
        if (local_e0 < uVar1) {
          lVar11 = hkIo::WriteBuffer::implWriteRaw(&local_e8,&local_140,0x14);
          if (lVar11 != 0x14) {
            if (DAT_146b86338 != '\0') {
              FUN_14373a730(local_128,&DAT_146b86330,1);
              lVar11 = FUN_14373bbd0(local_128,"Failed to write image DX10 header.",&DAT_145b909f0,0
                                    );
              *(char **)(lVar11 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
              *(undefined8 *)(lVar11 + 0x28) = 0x275;
              FUN_14373a950(local_128);
              *param_2 = 0x80040200;
              goto LAB_1437a184a;
            }
            goto LAB_1437a130b;
          }
        }
        else {
          FGenericPlatformString::Memcpy(local_e8);
          local_e8 = uVar1;
        }
      }
      uVar4 = local_e8;
      uVar13 = (ulonglong)param_4[0x2e];
      uVar12 = FUN_14057ade0(param_4);
      uVar1 = uVar4 + uVar13;
      if (local_e0 < uVar1) {
        uVar13 = hkIo::WriteBuffer::implWriteRaw(&local_e8,uVar12,uVar13);
      }
      else {
        FGenericPlatformString::Memcpy(uVar4);
        local_e8 = uVar1;
      }
      if (uVar13 == param_4[0x2e]) {
        *param_2 = 0;
        goto LAB_1437a184a;
      }
      if (DAT_146b86338 != '\0') {
        FUN_14373a730(local_128,&DAT_146b86330,1);
        lVar11 = FUN_14373bbd0(local_128,"Failed to write image data.",&DAT_145b909f0,0);
        *(char **)(lVar11 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
        *(undefined8 *)(lVar11 + 0x28) = 0x27c;
        FUN_14373a950(local_128);
        *param_2 = 0x80040200;
        goto LAB_1437a184a;
      }
    }
    else if (local_160 == 6) {
      if (uVar17 < 2) {
        uVar14 = 0x1008;
        uVar15 = 0xfe00;
        goto LAB_1437a1453;
      }
      if (DAT_146b86338 != '\0') {
        FUN_14373a730(local_128,&DAT_146b86330,1);
        lVar11 = FUN_14373bbd0(local_128,
                               "The image is both a cubemap and volume texture. This is not supported."
                               ,&DAT_145b909f0,0);
        *(char **)(lVar11 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
        *(undefined8 *)(lVar11 + 0x28) = 0x1fc;
        FUN_14373a950(local_128);
        *param_2 = 0x80040200;
        goto LAB_1437a184a;
      }
    }
    else if (DAT_146b86338 != '\0') {
      FUN_14373a730(local_128,&DAT_146b86330,1);
      lVar11 = FUN_14373bbd0(local_128,
                             "The image is a cubemap, but has {} faces instead of the expected 6.",
                             &DAT_145b73c70,&local_160,0);
      *(char **)(lVar11 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
      *(undefined8 *)(lVar11 + 0x28) = 0x1f6;
      FUN_14373a950(local_128);
      *param_2 = 0x80040200;
      goto LAB_1437a184a;
    }
  }
  else {
    if (uVar3 < 2) {
      uVar16 = uVar16 | 0x800000;
      local_90 = uVar17;
      goto LAB_1437a131e;
    }
    if (DAT_146b86338 != '\0') {
      FUN_14373a730(local_128,&DAT_146b86330,1);
      lVar11 = FUN_14373bbd0(local_128,
                             "The image is both an array and volume texture. This is not supported."
                             ,&DAT_145b909f0,0);
      *(char **)(lVar11 + 0x20) = "FileFormats\\hkDdsFileFormat.cpp";
      *(undefined8 *)(lVar11 + 0x28) = 0x1dc;
      FUN_14373a950(local_128);
    }
  }
LAB_1437a130b:
  *param_2 = 0x80040200;
LAB_1437a184a:
  UParticleModuleSubUV::PostLoad(&local_e8);
  return param_2;
}



// FUNCTION 1437a1880 ReleaseClusterParticlesNoInternalCluster body=28 status=ok
// SIG undefined ReleaseClusterParticlesNoInternalCluster(void)

undefined8
Chaos::FRigidClustering::ReleaseClusterParticlesNoInternalCluster
          (undefined8 param_1,undefined8 param_2)

{
  FUN_1437a11b0();
  return param_2;
}



// FUNCTION 1437a18a0 FUN_1437a18a0 body=50 status=ok
// SIG undefined FUN_1437a18a0(void)

uint FUN_1437a18a0(longlong param_1,ulonglong param_2,byte param_3)

{
  return (uint)(*(byte *)(((param_2 & 0xffffffff) >> 3) + param_1) >>
               (('\b' - ((byte)param_2 & 7)) - param_3 & 0x1f)) & (1 << (param_3 & 0x1f)) - 1U;
}



// FUNCTION 1437a18e0 FUN_1437a18e0 body=42 status=ok
// SIG undefined FUN_1437a18e0(void)

undefined8 * FUN_1437a18e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_145bab498;
  param_2[1] = &DAT_145bab4b0;
  return param_2;
}



// FUNCTION 1437a1910 FUN_1437a1910 body=1755 status=ok
// SIG undefined FUN_1437a1910(void)

undefined8 FUN_1437a1910(ulonglong *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 in_stack_ffffffffffffff38;
  undefined4 uVar7;
  undefined1 local_b8 [56];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  short local_70 [12];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  if ((longlong)(param_1[1] - *param_1) < 0xe) {
    lVar3 = hkIo::ReadBuffer::implRead(param_1,local_70);
    if (lVar3 != 0xe) {
      if (DAT_146b863b8 == '\0') {
        return 0x80040200;
      }
      FUN_14373a730(local_b8,&DAT_146b863b0,1);
      lVar3 = FUN_14373bbd0(local_b8,"Failed to read header data.",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x13a;
      FUN_14373a950(local_b8);
      return 0x80040200;
    }
  }
  else {
    FGenericPlatformString::Memcpy(local_70);
    *param_1 = *param_1 + 0xe;
  }
  if (local_70[0] != 0x4d42) {
    if (DAT_146b863b8 == '\0') {
      return 0x80040200;
    }
    FUN_14373a730(local_b8,&DAT_146b863b0,1);
    lVar3 = FUN_14373bbd0(local_b8,
                          "The file is not a BMP file. Expected magic number %04x, got %04x.",
                          &DAT_145bab030,&DAT_145baae74,local_70,0);
    *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x141;
    FUN_14373a950(local_b8);
    return 0x80040200;
  }
  uVar6 = 3;
  if ((longlong)(param_1[1] - *param_1) < 0x28) {
    lVar3 = hkIo::ReadBuffer::implRead(param_1,param_2);
    if (lVar3 != 0x28) {
      if (DAT_146b863b8 == '\0') {
        return 0x80040200;
      }
      FUN_14373a730(local_b8,&DAT_146b863b0,1);
      lVar3 = FUN_14373bbd0(local_b8,"Failed to read header data (V3).",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x149;
      FUN_14373a950(local_b8);
      return 0x80040200;
    }
  }
  else {
    FGenericPlatformString::Memcpy(param_2);
    *param_1 = *param_1 + 0x28;
  }
  iVar2 = *param_2;
  uVar5 = iVar2 - 0x28;
  if ((int)uVar5 < 0) {
    if (DAT_146b863b8 == '\0') {
      return 0x80040200;
    }
    FUN_14373a730(local_b8,&DAT_146b863b0,1);
    lVar3 = FUN_14373bbd0(local_b8,"The file header was shorter than expected.",&DAT_145b909f0,0);
    *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x152;
    FUN_14373a950(local_b8);
    return 0x80040200;
  }
  if (0x43 < uVar5) {
    uVar6 = 4;
    if ((longlong)(param_1[1] - *param_1) < 0x44) {
      lVar3 = hkIo::ReadBuffer::implRead(param_1,&local_58);
      if (lVar3 != 0x44) {
        if (DAT_146b863b8 == '\0') {
          return 0x80040200;
        }
        FUN_14373a730(local_b8,&DAT_146b863b0,1);
        lVar3 = FUN_14373bbd0(local_b8,"Failed to read header data (V4).",&DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x15d;
        FUN_14373a950(local_b8);
        return 0x80040200;
      }
    }
    else {
      FGenericPlatformString::Memcpy(&local_58);
      *param_1 = *param_1 + 0x44;
    }
    uVar5 = iVar2 - 0x6c;
  }
  lVar3 = (longlong)(int)uVar5;
  if (param_1[1] < *param_1 + lVar3) {
    lVar4 = hkIo::ReadBuffer::implSkip(param_1,lVar3);
  }
  else {
    *param_1 = *param_1 + lVar3;
    lVar4 = lVar3;
  }
  if (lVar4 != lVar3) {
    if (DAT_146b863b8 == '\0') {
      return 0x80040200;
    }
    FUN_14373a730(local_b8,&DAT_146b863b0,1);
    lVar3 = FUN_14373bbd0(local_b8,"Failed to skip remaining header data.",&DAT_145b909f0,0);
    *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x166;
    FUN_14373a950(local_b8);
    return 0x80040200;
  }
  uVar1 = *(ushort *)((longlong)param_2 + 0xe);
  iVar2 = param_2[4];
  uVar5 = (uint)uVar1;
  param_2[0xb] = uVar5;
  param_2[0xc] = 0;
  *(undefined2 *)(param_2 + 10) = 0;
  if (iVar2 == 0) {
    if (((uVar5 == 1) || (uVar5 == 4)) || (uVar5 == 8)) {
      *(undefined1 *)(param_2 + 10) = 1;
    }
    else {
      if (uVar5 == 0x18) {
        param_2[0xc] = 0x5e;
        goto LAB_1437a1d98;
      }
      if (uVar5 != 0x20) goto LAB_1437a1d98;
    }
  }
  else {
    uVar5 = (uint)uVar1;
    if (iVar2 == 1) {
      if (uVar5 != 8) goto LAB_1437a1d98;
      *(undefined2 *)(param_2 + 10) = 0x101;
    }
    else {
      if (iVar2 != 2) {
        if ((iVar2 == 3) && ((uVar1 - 0x10 & 0xffffffef) == 0)) {
          if (uVar6 < 4) {
            if ((longlong)(param_1[1] - *param_1) < 0xc) {
              lVar3 = hkIo::ReadBuffer::implRead(param_1,&local_80);
              if (lVar3 != 0xc) {
                return 0x80040200;
              }
            }
            else {
              FGenericPlatformString::Memcpy(&local_80);
              *param_1 = *param_1 + 0xc;
            }
            iVar2 = FUN_1437a67e0(local_80,local_7c,local_78,0,CONCAT44(uVar7,param_2[0xb]));
            param_2[0xc] = iVar2;
          }
          else {
            iVar2 = FUN_1437a67e0(local_58,local_54,local_50,local_4c,CONCAT44(uVar7,uVar5));
            param_2[0xc] = iVar2;
          }
        }
        goto LAB_1437a1d98;
      }
      if (uVar5 != 4) goto LAB_1437a1d98;
      *(undefined2 *)(param_2 + 10) = 0x101;
    }
  }
  param_2[0xc] = 0x5c;
LAB_1437a1d98:
  if (param_2[0xc] == 0) {
    if (DAT_146b863b8 != '\0') {
      FUN_14373a730(local_b8,&DAT_146b863b0,1);
      lVar3 = FUN_14373bbd0(local_b8,"Unknown or unsupported BMP encoding.",&DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x1c7;
      FUN_14373a950(local_b8);
      return 0x80040200;
    }
  }
  else if ((uint)param_2[1] < 0x10001) {
    if ((uint)param_2[2] < 0x10001) {
      uVar6 = param_2[5];
      param_2[0xd] = uVar6;
      if (uVar6 < 0x40000001) {
        iVar2 = (param_2[0xb] * param_2[1] + 0x1fU >> 5) * 4;
        param_2[0xe] = iVar2;
        if (uVar6 == 0) {
          if (param_2[4] != 0) {
            if (DAT_146b863b8 == '\0') {
              return 0x80040200;
            }
            FUN_14373a730(local_b8,&DAT_146b863b0,1);
            lVar3 = FUN_14373bbd0(local_b8,"The data size wasn\'t specified in the header.",
                                  &DAT_145b909f0,0);
            *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
            *(undefined8 *)(lVar3 + 0x28) = 0x1e9;
            FUN_14373a950(local_b8);
            return 0x80040200;
          }
          param_2[0xd] = iVar2 * param_2[2];
        }
        return 0;
      }
      if (DAT_146b863b8 != '\0') {
        FUN_14373a730(local_b8,&DAT_146b863b0,1);
        lVar3 = FUN_14373bbd0(local_b8,"Image specifies data size > 1GiB. Header corrupted?",
                              &DAT_145b909f0,0);
        *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
        *(undefined8 *)(lVar3 + 0x28) = 0x1df;
        FUN_14373a950(local_b8);
        return 0x80040200;
      }
    }
    else if (DAT_146b863b8 != '\0') {
      FUN_14373a730(local_b8,&DAT_146b863b0,1);
      lVar3 = FUN_14373bbd0(local_b8,"Image specifies height > 65536. Header corrupted?",
                            &DAT_145b909f0,0);
      *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
      *(undefined8 *)(lVar3 + 0x28) = 0x1d7;
      FUN_14373a950(local_b8);
      return 0x80040200;
    }
  }
  else if (DAT_146b863b8 != '\0') {
    FUN_14373a730(local_b8,&DAT_146b863b0,1);
    lVar3 = FUN_14373bbd0(local_b8,"Image specifies width > 65536. Header corrupted?",&DAT_145b909f0
                          ,0);
    *(char **)(lVar3 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
    *(undefined8 *)(lVar3 + 0x28) = 0x1cf;
    FUN_14373a950(local_b8);
    return 0x80040200;
  }
  return 0x80040200;
}



// FUNCTION 1437a1ff0 FUN_1437a1ff0 body=3603 status=ok
// SIG undefined FUN_1437a1ff0(void)

undefined4 *
FUN_1437a1ff0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  ulonglong in_stack_fffffffffffffea8;
  undefined8 in_stack_fffffffffffffeb0;
  undefined4 uVar19;
  ulonglong in_stack_fffffffffffffeb8;
  undefined4 *local_138;
  uint local_130;
  uint local_12c;
  byte *local_128;
  uint local_120;
  uint local_11c;
  uint local_118 [4];
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [56];
  byte *local_90;
  undefined1 local_88 [4];
  uint local_84;
  uint local_80;
  uint local_68;
  char local_60;
  char local_5f;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20);
  uVar18 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_143734400(&local_108,param_3);
  iVar4 = FUN_1437a1910(&local_108,local_88);
  if (iVar4 < 0) {
    *param_2 = 0x80040200;
    FUN_143733ce0(&local_108);
    return param_2;
  }
  FUN_1437a0190(&local_48);
  local_30 = local_58;
  local_48 = 1;
  local_40 = 1;
  local_44 = 1;
  local_3c = local_84;
  local_38 = local_80;
  local_34 = 1;
  FUN_1437a0600(param_4,&local_48);
  uVar8 = 1;
  if (1 < *(uint *)(param_4 + 0xc)) {
    uVar8 = *(undefined4 *)(param_4 + 0xc);
  }
  uVar5 = FUN_1437a6ad0(*(undefined4 *)(param_4 + 0x18),uVar8);
  uVar12 = (ulonglong)uVar5;
  if (local_60 == '\0') {
    iVar4 = FPakFile::IsPakKeepFullDirectory(local_58);
    if (iVar4 == local_5c) {
      lVar10 = (ulonglong)local_68 * 4;
      uVar15 = local_108 + lVar10;
      uVar18 = local_80;
      if ((local_100 < local_108 + lVar10) &&
         (lVar7 = hkIo::ReadBuffer::implSkip(&local_108,lVar10), uVar15 = local_108, lVar7 != lVar10
         )) {
        if (DAT_146b863b8 != '\0') {
          FUN_14373a730(local_c8,&DAT_146b863b0,1);
          lVar10 = FUN_14373bbd0(local_c8,"Failed to skip palette data.",&DAT_145b909f0,0);
          *(undefined8 *)(lVar10 + 0x28) = 0x2f8;
LAB_1437a21c2:
          *(char **)(lVar10 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
          FUN_14373a950(local_c8);
        }
      }
      else {
        do {
          local_108 = uVar15;
          uVar18 = uVar18 - 1;
          if ((int)uVar18 < 0) goto LAB_1437a2d31;
          in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
          in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffffff00000000;
          uVar6 = FUN_1437a0050(param_4,0,0,0,in_stack_fffffffffffffea8,uVar18,
                                in_stack_fffffffffffffeb8);
          if ((longlong)(local_100 - local_108) < (longlong)uVar12) {
            uVar15 = hkIo::ReadBuffer::implRead(&local_108,uVar6,uVar12);
          }
          else {
            FGenericPlatformString::Memcpy(uVar6);
            local_108 = local_108 + uVar12;
            uVar15 = uVar12;
          }
          if (uVar15 != uVar12) {
            if (DAT_146b863b8 == '\0') goto LAB_1437a21d6;
            FUN_14373a730(local_c8,&DAT_146b863b0,1);
            lVar10 = FUN_14373bbd0(local_c8,"Failed to read row data.",&DAT_145b909f0,0);
            *(undefined8 *)(lVar10 + 0x28) = 0x301;
            goto LAB_1437a21c2;
          }
          uVar14 = (ulonglong)(local_50 - uVar5);
          uVar15 = local_108 + uVar14;
          if (local_100 < local_108 + uVar14) {
            uVar14 = hkIo::ReadBuffer::implSkip(&local_108);
            uVar15 = local_108;
          }
          local_108 = uVar15;
          uVar15 = local_108;
        } while (uVar14 == local_50 - uVar5);
        if (DAT_146b863b8 != '\0') {
          FUN_14373a730(local_c8,&DAT_146b863b0,1);
          lVar10 = FUN_14373bbd0(local_c8,"Failed to skip row data.",&DAT_145b909f0,0);
          *(undefined8 *)(lVar10 + 0x28) = 0x306;
          goto LAB_1437a21c2;
        }
      }
    }
    else if (DAT_146b863b8 != '\0') {
      local_90 = (byte *)FUN_1437a6a20(local_58);
      local_118[0] = FPakFile::IsPakKeepFullDirectory(local_58);
      FUN_14373a730(local_c8,&DAT_146b863b0,1);
      lVar10 = FUN_14373bbd0(local_c8,
                             "The number of bits per pixel specified in the file ({}) does not match the expected value of {} for the format \'{}\'."
                             ,&DAT_145bab260,&local_5c,local_118,&local_90,0);
      *(undefined8 *)(lVar10 + 0x28) = 0x2f0;
      goto LAB_1437a21c2;
    }
LAB_1437a21d6:
    *param_2 = 0x80040200;
    goto LAB_1437a2d35;
  }
  if (local_68 == 0) {
    uVar5 = 1 << ((byte)local_5c & 0x1f);
  }
  else {
    uVar5 = local_68;
    if (0x10000 < local_68) {
      if (DAT_146b863b8 != '\0') {
        FUN_14373a730(local_c8,&DAT_146b863b0,1);
        lVar10 = FUN_14373bbd0(local_c8,"Palette size > 65536.",&DAT_145b909f0,0);
        *(undefined8 *)(lVar10 + 0x28) = 0x233;
        goto LAB_1437a21c2;
      }
      goto LAB_1437a21d6;
    }
  }
  local_138 = (undefined4 *)0x0;
  local_130 = 0;
  local_12c = 0x80000000;
  uVar6 = FUN_143703a50();
  if ((int)(local_12c & 0x3fffffff) < (int)uVar5) {
    uVar16 = (local_12c & 0x3fffffff) * 2;
    uVar12 = (ulonglong)uVar5;
    if ((int)uVar5 < (int)uVar16) {
      uVar12 = (ulonglong)uVar16;
    }
    FUN_14370c310(uVar6,&local_138,uVar12,4);
  }
  lVar10 = (ulonglong)uVar5 * 4;
  local_130 = uVar5;
  if ((longlong)(local_100 - local_108) < lVar10) {
    lVar7 = hkIo::ReadBuffer::implRead(&local_108,local_138,lVar10);
  }
  else {
    FGenericPlatformString::Memcpy(local_138);
    local_108 = local_108 + lVar10;
    lVar7 = lVar10;
  }
  uVar5 = local_54;
  if (lVar7 == lVar10) {
    if (local_5f == '\0') {
      local_128 = (byte *)0x0;
      local_120 = 0;
      local_11c = 0x80000000;
      uVar6 = FUN_143703a50();
      if ((int)(local_11c & 0x3fffffff) < (int)uVar5) {
        uVar3 = (local_11c & 0x3fffffff) * 2;
        uVar16 = uVar5;
        if ((int)uVar5 < (int)uVar3) {
          uVar16 = uVar3;
        }
        FUN_14370c310(uVar6,&local_128,uVar16,1);
      }
      local_120 = uVar5;
      uVar12 = (ulonglong)local_54;
      if ((longlong)(local_100 - local_108) < (longlong)uVar12) {
        uVar12 = hkIo::ReadBuffer::implRead(&local_108,local_128,local_54);
      }
      else {
        FGenericPlatformString::Memcpy(local_128);
        local_108 = local_108 + uVar12;
      }
      if (uVar12 == local_54) {
        if (local_80 != 0) {
          do {
            in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffff00000000;
            pbVar13 = local_128 + (int)(local_50 * uVar18);
            in_stack_fffffffffffffea8 = in_stack_fffffffffffffea8 & 0xffffffff00000000;
            lVar10 = FUN_1437a0050(param_4,0,0,0,in_stack_fffffffffffffea8,(local_80 - uVar18) + -1,
                                   in_stack_fffffffffffffeb8);
            iVar4 = 1;
            if (1 < *(uint *)(param_4 + 0xc)) {
              iVar4 = *(int *)(param_4 + 0xc);
            }
            uVar12 = 0;
            if (iVar4 != 0) {
              do {
                uVar5 = FUN_1437a18a0(pbVar13,(int)uVar12 * local_5c);
                if (local_130 <= uVar5) {
                  if (DAT_146b863b8 != '\0') {
                    FUN_14373a730(local_c8,&DAT_146b863b0,1);
                    lVar10 = FUN_14373bbd0(local_c8,"Image contains invalid palette indices.",
                                           &DAT_145b909f0,0);
                    *(char **)(lVar10 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
                    *(undefined8 *)(lVar10 + 0x28) = 0x2e2;
                    FUN_14373a950(local_c8);
                  }
                  *param_2 = 0x80040200;
                  uVar6 = FUN_143703a50();
                  local_120 = 0;
                  if (-1 < (int)local_11c) {
                    FUN_143702e10(uVar6,local_128,1,local_11c & 0x3fffffff);
                  }
                  local_128 = (byte *)0x0;
                  local_11c = 0x80000000;
                  uVar6 = FUN_143703a50();
                  local_130 = 0;
                  if (-1 < (int)local_12c) {
                    FUN_143702e10(uVar6,local_138,4,local_12c & 0x3fffffff);
                  }
                  local_138 = (undefined4 *)0x0;
                  local_12c = 0x80000000;
                  goto LAB_1437a2d35;
                }
                uVar16 = (int)uVar12 + 1;
                *(undefined4 *)(lVar10 + (uVar12 & 0xffffffff) * 4) = local_138[(int)uVar5];
                uVar5 = 1;
                if (1 < *(uint *)(param_4 + 0xc)) {
                  uVar5 = *(uint *)(param_4 + 0xc);
                }
                uVar12 = (ulonglong)uVar16;
              } while (uVar16 < uVar5);
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < local_80);
        }
        uVar6 = FUN_143703a50();
LAB_1437a2a45:
        local_120 = 0;
        if (-1 < (int)local_11c) {
          FUN_143702e10(uVar6,local_128,1,local_11c & 0x3fffffff);
        }
        uVar6 = FUN_143703a50();
        local_130 = 0;
        if (-1 < (int)local_12c) {
          FUN_143702e10(uVar6,local_138,4,local_12c & 0x3fffffff);
        }
LAB_1437a2d31:
        *param_2 = 0;
        goto LAB_1437a2d35;
      }
      if (DAT_146b863b8 != '\0') {
        FUN_14373a730(local_c8,&DAT_146b863b0,1);
        lVar10 = FUN_14373bbd0(local_c8,"Failed to read data.",&DAT_145b909f0,0);
        *(undefined8 *)(lVar10 + 0x28) = 0x2d2;
LAB_1437a23bd:
        *(char **)(lVar10 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
        FUN_14373a950(local_c8);
      }
    }
    else {
      if ((local_54 & 1) != 0) {
        if (DAT_146b863b8 != '\0') {
          FUN_14373a730(local_c8,&DAT_146b863b0,1);
          lVar10 = FUN_14373bbd0(local_c8,
                                 "The data size is not a multiple of 2 bytes in an RLE-compressed file."
                                 ,&DAT_145b909f0,0);
          *(undefined8 *)(lVar10 + 0x28) = 0x244;
          goto LAB_1437a223c;
        }
        goto LAB_1437a2250;
      }
      local_128 = (byte *)0x0;
      local_120 = 0;
      local_11c = 0x80000000;
      uVar6 = FUN_143703a50();
      if ((int)(local_11c & 0x3fffffff) < (int)uVar5) {
        uVar16 = (local_11c & 0x3fffffff) * 2;
        uVar18 = uVar5;
        if ((int)uVar5 < (int)uVar16) {
          uVar18 = uVar16;
        }
        FUN_14370c310(uVar6,&local_128,uVar18,1);
      }
      local_120 = uVar5;
      uVar12 = (ulonglong)local_54;
      if ((longlong)(local_100 - local_108) < (longlong)uVar12) {
        uVar12 = hkIo::ReadBuffer::implRead(&local_108,local_128,local_54);
      }
      else {
        FGenericPlatformString::Memcpy(local_128);
        local_108 = local_108 + uVar12;
      }
      pbVar13 = local_128;
      if (uVar12 == local_54) {
        pbVar17 = local_128 + local_54;
        uVar18 = local_80 - 1;
        uVar12 = 0;
        local_118[0] = uVar18;
        local_90 = pbVar17;
        lVar10 = FUN_1437a0050(param_4,0,0,0,in_stack_fffffffffffffea8 & 0xffffffff00000000,
                               CONCAT44(uVar19,uVar18),
                               in_stack_fffffffffffffeb8 & 0xffffffff00000000);
        if (pbVar13 < pbVar17) {
          do {
            bVar1 = *pbVar13;
            bVar2 = pbVar13[1];
            uVar15 = (ulonglong)bVar2;
            pbVar13 = pbVar13 + 2;
            uVar5 = (uint)uVar12;
            if (bVar1 == 0) {
              if (bVar2 != 0) {
                if (bVar2 == 1) {
                  if ((uVar18 == 0) || (uVar5 == local_118[0])) goto LAB_1437a26c3;
                  if (DAT_146b863b8 != '\0') {
                    FUN_14373a730(local_c8,&DAT_146b863b0,1);
                    lVar10 = FUN_14373bbd0(local_c8,"Unexpected end of image marker found.",
                                           &DAT_145b909f0,0);
                    *(char **)(lVar10 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
                    *(undefined8 *)(lVar10 + 0x28) = 0x29b;
                    FUN_14373a950(local_c8);
                  }
                  *param_2 = 0x80040200;
                  uVar6 = FUN_143703a50();
                  local_120 = 0;
                  if (-1 < (int)local_11c) {
                    FUN_143702e10(uVar6,local_128,1,local_11c & 0x3fffffff);
                  }
                  local_128 = (byte *)0x0;
                  local_11c = 0x80000000;
                  uVar6 = FUN_143703a50();
                  local_130 = 0;
                  if (-1 < (int)local_12c) {
                    FUN_143702e10(uVar6,local_138,4,local_12c & 0x3fffffff);
                    local_138 = (undefined4 *)0x0;
                    local_12c = 0x80000000;
                    goto LAB_1437a2d35;
                  }
                }
                else if (bVar2 == 2) {
                  if (DAT_146b863b8 != '\0') {
                    FUN_14373a730(local_c8,&DAT_146b863b0,1);
                    lVar10 = FUN_14373bbd0(local_c8,
                                           "Found a RLE compression position delta - this is not supported."
                                           ,&DAT_145b909f0,0);
                    *(char **)(lVar10 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
                    *(undefined8 *)(lVar10 + 0x28) = 0x2a1;
                    FUN_14373a950(local_c8);
                  }
                  *param_2 = 0x80040200;
                  uVar6 = FUN_143703a50();
                  local_120 = 0;
                  if (-1 < (int)local_11c) {
                    FUN_143702e10(uVar6,local_128,1,local_11c & 0x3fffffff);
                  }
                  local_128 = (byte *)0x0;
                  local_11c = 0x80000000;
                  uVar6 = FUN_143703a50();
                  local_130 = 0;
                  if (-1 < (int)local_12c) {
                    FUN_143702e10(uVar6,local_138,4,local_12c & 0x3fffffff);
                    local_138 = (undefined4 *)0x0;
                    local_12c = 0x80000000;
                    goto LAB_1437a2d35;
                  }
                }
                else {
                  if ((bVar2 + uVar5 <= local_84) && (pbVar13 + (bVar2 + 1 >> 1) <= pbVar17)) {
                    if (local_5c == 4) {
                      uVar5 = (uint)(bVar2 >> 1);
                      uVar15 = uVar12;
                      if (uVar5 != 0) {
                        uVar12 = (ulonglong)uVar5;
                        do {
                          bVar1 = *pbVar13;
                          pbVar13 = pbVar13 + 1;
                          *(undefined4 *)(lVar10 + uVar15 * 4) = local_138[bVar1 >> 4];
                          *(undefined4 *)(lVar10 + (ulonglong)((int)uVar15 + 1) * 4) =
                               local_138[bVar1 & 0xf];
                          uVar15 = (ulonglong)((int)uVar15 + 2);
                          uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                      }
                      uVar12 = uVar15;
                      if ((bVar2 & 1) != 0) {
                        bVar1 = *pbVar13;
                        uVar12 = (ulonglong)((int)uVar15 + 1);
                        pbVar13 = pbVar13 + 1;
                        *(undefined4 *)(lVar10 + uVar15 * 4) = local_138[bVar1 >> 4];
                      }
                      pbVar13 = pbVar13 + (uVar5 + bVar2 & 1);
                    }
                    else {
                      uVar14 = uVar12;
                      if (bVar2 != 0) {
                        do {
                          bVar1 = *pbVar13;
                          pbVar13 = pbVar13 + 1;
                          uVar12 = (ulonglong)((int)uVar14 + 1);
                          *(undefined4 *)(lVar10 + uVar14 * 4) = local_138[bVar1];
                          uVar15 = uVar15 - 1;
                          uVar14 = uVar12;
                        } while (uVar15 != 0);
                      }
                      pbVar13 = pbVar13 + (bVar2 & 1);
                    }
                    goto LAB_1437a26c3;
                  }
                  *param_2 = 0x80040200;
                  uVar6 = FUN_143703a50();
                  local_120 = 0;
                  if (-1 < (int)local_11c) {
                    FUN_143702e10(uVar6,local_128,1,local_11c & 0x3fffffff);
                  }
                  local_128 = (byte *)0x0;
                  local_11c = 0x80000000;
                  uVar6 = FUN_143703a50();
                  local_130 = 0;
                  if (-1 < (int)local_12c) {
                    FUN_143702e10(uVar6,local_138,4,local_12c & 0x3fffffff);
                  }
                }
                local_138 = (undefined4 *)0x0;
                local_12c = 0x80000000;
                goto LAB_1437a2d35;
              }
              if (uVar5 < local_84) {
                uVar15 = (ulonglong)(local_84 - uVar5);
                puVar9 = (undefined4 *)(lVar10 + uVar12 * 4);
                do {
                  *puVar9 = *local_138;
                  uVar15 = uVar15 - 1;
                  puVar9 = puVar9 + 1;
                } while (uVar15 != 0);
              }
              uVar12 = 0;
              uVar18 = uVar18 - 1;
              lVar10 = lVar10 + (ulonglong)local_84 * -4;
            }
            else {
              uVar16 = local_84 - uVar5;
              if ((uint)bVar1 < local_84 - uVar5) {
                uVar16 = (uint)bVar1;
              }
              uVar14 = (ulonglong)uVar16;
              if (local_5c == 4) {
                uVar15 = uVar12;
                if (uVar16 >> 1 != 0) {
                  uVar14 = (ulonglong)(uVar16 >> 1);
                  do {
                    *(undefined4 *)(lVar10 + uVar12 * 4) = local_138[bVar2 >> 4];
                    *(undefined4 *)(lVar10 + (ulonglong)((int)uVar12 + 1) * 4) =
                         local_138[bVar2 & 0xf];
                    uVar12 = (ulonglong)((int)uVar12 + 2);
                    uVar14 = uVar14 - 1;
                    uVar15 = uVar12;
                    pbVar17 = local_90;
                  } while (uVar14 != 0);
                }
                uVar12 = uVar15;
                if ((uVar16 & 1) != 0) {
                  uVar12 = (ulonglong)((int)uVar15 + 1);
                  *(undefined4 *)(lVar10 + uVar15 * 4) = local_138[bVar2 >> 4];
                }
              }
              else {
                uVar11 = uVar12;
                if (uVar16 != 0) {
                  do {
                    uVar12 = (ulonglong)((int)uVar11 + 1);
                    *(undefined4 *)(lVar10 + uVar11 * 4) = local_138[uVar15];
                    uVar14 = uVar14 - 1;
                    uVar11 = uVar12;
                  } while (uVar14 != 0);
                }
              }
            }
LAB_1437a26c3:
          } while (pbVar13 < pbVar17);
        }
        uVar6 = FUN_143703a50();
        goto LAB_1437a2a45;
      }
      if (DAT_146b863b8 != '\0') {
        FUN_14373a730(local_c8,&DAT_146b863b0,1);
        lVar10 = FUN_14373bbd0(local_c8,"Failed to read data.",&DAT_145b909f0,0);
        *(undefined8 *)(lVar10 + 0x28) = 0x24d;
        goto LAB_1437a23bd;
      }
    }
    *param_2 = 0x80040200;
    uVar6 = FUN_143703a50();
    local_120 = 0;
    if (-1 < (int)local_11c) {
      FUN_143702e10(uVar6,local_128,1,local_11c & 0x3fffffff);
    }
    local_128 = (byte *)0x0;
    local_11c = 0x80000000;
  }
  else {
    if (DAT_146b863b8 != '\0') {
      FUN_14373a730(local_c8,&DAT_146b863b0,1);
      lVar10 = FUN_14373bbd0(local_c8,"Failed to read palette data.",&DAT_145b909f0,0);
      *(undefined8 *)(lVar10 + 0x28) = 0x23b;
LAB_1437a223c:
      *(char **)(lVar10 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
      FUN_14373a950(local_c8);
    }
LAB_1437a2250:
    *param_2 = 0x80040200;
  }
  uVar6 = FUN_143703a50();
  local_130 = 0;
  if (-1 < (int)local_12c) {
    FUN_143702e10(uVar6,local_138,4,local_12c & 0x3fffffff);
  }
  local_138 = (undefined4 *)0x0;
  local_12c = 0x80000000;
LAB_1437a2d35:
  FUN_143733ce0(&local_108);
  return param_2;
}



// FUNCTION 1437a2e10 FUN_1437a2e10 body=222 status=ok
// SIG undefined FUN_1437a2e10(void)

undefined4 *
FUN_1437a2e10(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_38;
  undefined1 local_28 [32];
  
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_143734400(&local_a8,param_3);
  iVar4 = FUN_1437a1910(&local_a8,local_68);
  if (iVar4 < 0) {
    *param_2 = 0x80040200;
  }
  else {
    puVar5 = (undefined4 *)FUN_1437a0190(local_28);
    *param_2 = 0;
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_4 = *puVar5;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar5 + 4);
    param_4[6] = local_38;
    param_4[3] = local_64;
    param_4[4] = local_60;
    *param_4 = 1;
    param_4[2] = 1;
    param_4[1] = 1;
    param_4[5] = 1;
  }
  FUN_143733ce0(&local_a8);
  return param_2;
}



// FUNCTION 1437a2ef0 FUN_1437a2ef0 body=1638 status=ok
// SIG undefined FUN_1437a2ef0(void)

undefined4 *
FUN_1437a2ef0(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong local_res20;
  ulonglong in_stack_fffffffffffffd98;
  ulonglong in_stack_fffffffffffffda8;
  uint local_248;
  undefined2 local_238;
  int iStack_236;
  undefined2 uStack_232;
  undefined2 uStack_230;
  int iStack_22e;
  undefined2 uStack_22a;
  int local_228;
  int local_224;
  ulonglong local_218;
  ulonglong local_210;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 *puStack_1d0;
  int local_1c8;
  undefined4 local_1c4;
  int local_1c0;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined1 local_1a0 [56];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 local_14c [4];
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_f8 [208];
  
  local_1d8 = &local_168;
  local_238 = SUB82(local_1d8,0);
  iStack_236 = (int)((ulonglong)local_1d8 >> 0x10);
  uStack_232 = (undefined2)((ulonglong)local_1d8 >> 0x30);
  puStack_1d0 = local_14c;
  local_158 = 0x5e;
  uStack_230 = SUB82(puStack_1d0,0);
  iStack_22e = (int)((ulonglong)puStack_1d0 >> 0x10);
  uStack_22a = (undefined2)((ulonglong)puStack_1d0 >> 0x30);
  local_168 = 0x5d0000005c;
  uStack_160 = 0x5b0000005a;
  local_154 = 0x5f;
  local_150 = 0xbe;
  iVar4 = FUN_1437aa6d0(*(undefined4 *)(param_4 + 0x18),&local_1d8);
  if (iVar4 == 0) {
    if (DAT_146b863b8 != '\0') {
      local_res20 = FUN_1437a6a20(*(undefined4 *)(param_4 + 0x18));
      FUN_14373a730(local_1a0,&DAT_146b863b0,1);
      lVar6 = FUN_14373bbd0(local_1a0,
                            "No conversion from format \'{}\' to a format suitable for BMP files known."
                            ,&DAT_145b74470,&local_res20,0);
      *(char **)(lVar6 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x83;
      FUN_14373a950(local_1a0);
    }
    *param_2 = 0x80040200;
    return param_2;
  }
  if (iVar4 != *(int *)(param_4 + 0x18)) {
    FUN_1437a0140(local_f8);
    iVar4 = FUN_1437a9910(param_4,local_f8,iVar4,0);
    if (-1 < iVar4) {
      (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,local_f8);
      FUN_1437a01c0(local_f8);
      return param_2;
    }
    cVar3 = FUN_143755360(0x67a8058d,"FileFormats\\hkBmpFileFormat.cpp",0x8e,
                          "hkBmpFileFormat::writeImage",&DAT_145af3922,
                          "hkImageConversion::Convert failed even though the conversion was to the format returned by findClosestCompatibleFormat."
                          ,&DAT_145b909f0,0);
    if (cVar3 == '\0') {
      *param_2 = 0x80040200;
      FUN_1437a01c0(local_f8);
      return param_2;
    }
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined4 *)(*pcVar2)();
    return puVar7;
  }
  Audio::FDelayStereo::FDelayStereo(&local_218);
  local_1e8 = 0;
  uStack_1e0 = 0;
  FUN_143747cb0(&local_218,param_3);
  uVar5 = 1;
  if (1 < *(uint *)(param_4 + 0xc)) {
    uVar5 = *(undefined4 *)(param_4 + 0xc);
  }
  local_228 = FUN_1437a6ad0(*(undefined4 *)(param_4 + 0x18),uVar5);
  local_1bc = 1;
  local_224 = 1;
  if (1 < *(uint *)(param_4 + 0x10)) {
    local_224 = *(int *)(param_4 + 0x10);
  }
  iVar12 = local_224 * local_228;
  local_1c4 = 1;
  if (1 < *(uint *)(param_4 + 0xc)) {
    local_1c4 = *(undefined4 *)(param_4 + 0xc);
  }
  local_1c0 = local_224;
  local_1ba = FPakFile::IsPakKeepFullDirectory(iVar4);
  local_1b4 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  uVar10 = local_res20 >> 8;
  local_res20 = local_res20 & 0xffffffffffffff00;
  local_248 = 3;
  if (iVar4 < 0x5a) goto LAB_1437a3233;
  if (iVar4 < 0x5c) {
    local_248 = 4;
    iStack_22e = 0xe;
    local_1c8 = 0x6c;
LAB_1437a3184:
    local_1b8 = 3;
  }
  else {
    if (0x5f < iVar4) {
      if (iVar4 != 0xbe) goto LAB_1437a3233;
      local_res20 = CONCAT71((int7)uVar10,1);
      local_1c8 = 0x28;
      iStack_22e = 0x1a;
      goto LAB_1437a3184;
    }
    local_1c8 = 0x28;
    local_1b8 = 0;
    iStack_22e = 0xe;
  }
  iStack_22e = iStack_22e + local_1c8;
  local_238 = 0x4d42;
  uStack_232 = 0;
  uStack_230 = 0;
  iStack_236 = iStack_22e + iVar12;
  if (local_210 < local_218 + 0xe) {
    lVar6 = hkIo::WriteBuffer::implWriteRaw(&local_218,&local_238,0xe);
    if (lVar6 != 0xe) {
      if (DAT_146b863b8 != '\0') {
        FUN_14373a730(local_1a0,&DAT_146b863b0,1);
        lVar6 = FUN_14373bbd0(local_1a0,"Failed to write header.",&DAT_145b909f0,0);
        *(char **)(lVar6 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
        *(undefined8 *)(lVar6 + 0x28) = 0xe3;
        FUN_14373a950(local_1a0);
      }
LAB_1437a3233:
      *param_2 = 0x80040200;
      UParticleModuleSubUV::PostLoad(&local_218);
      return param_2;
    }
  }
  else {
    FGenericPlatformString::Memcpy();
    local_218 = local_218 + 0xe;
  }
  uVar10 = local_218 + 0x28;
  if (local_210 < uVar10) {
    lVar6 = hkIo::WriteBuffer::implWriteRaw(&local_218,&local_1c8,0x28);
    if (lVar6 == 0x28) goto LAB_1437a327b;
    if (DAT_146b863b8 != '\0') {
      FUN_14373a730(local_1a0,&DAT_146b863b0,1);
      lVar6 = FUN_14373bbd0(local_1a0,"Failed to write fileInfoHeader.",&DAT_145b909f0,0);
      *(undefined8 *)(lVar6 + 0x28) = 0xe9;
LAB_1437a3537:
      *(char **)(lVar6 + 0x20) = "FileFormats\\hkBmpFileFormat.cpp";
      FUN_14373a950(local_1a0);
    }
LAB_1437a354b:
    *param_2 = 0x80040200;
  }
  else {
    FGenericPlatformString::Memcpy(local_218);
    local_218 = uVar10;
LAB_1437a327b:
    if (local_248 < 4) {
      if ((char)local_res20 != '\0') {
        uVar5 = FUN_1437a6960(iVar4,0);
        local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,uVar5);
        uVar5 = FUN_1437a6960(iVar4,1);
        local_1d8 = (undefined8 *)CONCAT44(uVar5,(undefined4)local_1d8);
        uVar5 = FUN_1437a6960(iVar4,2);
        puVar9 = &local_1d8;
        puStack_1d0 = (undefined1 *)CONCAT44(puStack_1d0._4_4_,uVar5);
        uVar11 = 0xc;
        uVar10 = local_218 + 0xc;
        if (uVar10 <= local_210) goto LAB_1437a3446;
        lVar6 = hkIo::WriteBuffer::implWriteRaw(&local_218,puVar9,0xc);
        if (lVar6 != 0xc) {
          if (DAT_146b863b8 != '\0') {
            FUN_14373a730(local_1a0,&DAT_146b863b0,1);
            lVar6 = FUN_14373bbd0(local_1a0,"Failed to write colorMask.",&DAT_145b909f0,0);
            *(undefined8 *)(lVar6 + 0x28) = 0x10d;
            goto LAB_1437a3537;
          }
          goto LAB_1437a354b;
        }
      }
    }
    else {
      FUN_14370c720(&local_148,0,0x44);
      local_148 = FUN_1437a6960(iVar4,0);
      local_144 = FUN_1437a6960(iVar4,1);
      local_140 = FUN_1437a6960(iVar4,2);
      local_13c = FUN_1437a6960(iVar4,3);
      puVar9 = (undefined8 *)&local_148;
      uVar11 = 0x44;
      uVar10 = local_218 + 0x44;
      if (local_210 < uVar10) {
        lVar6 = hkIo::WriteBuffer::implWriteRaw(&local_218);
        if (lVar6 != 0x44) {
          if (DAT_146b863b8 != '\0') {
            FUN_14373a730(local_1a0,&DAT_146b863b0,1);
            lVar6 = FUN_14373bbd0(local_1a0,"Failed to write fileInfoHeaderV4.",&DAT_145b909f0,0);
            *(undefined8 *)(lVar6 + 0x28) = 0xf9;
            goto LAB_1437a3537;
          }
          goto LAB_1437a354b;
        }
      }
      else {
LAB_1437a3446:
        FGenericPlatformString::Memcpy(local_218,puVar9,uVar11);
        local_218 = uVar10;
      }
    }
    iVar4 = local_224 + -1;
    if (-1 < iVar4) {
      uVar10 = (ulonglong)((local_228 - 1U & 0xfffffffc) + 4);
      do {
        in_stack_fffffffffffffda8 = in_stack_fffffffffffffda8 & 0xffffffff00000000;
        in_stack_fffffffffffffd98 = in_stack_fffffffffffffd98 & 0xffffffff00000000;
        FUN_1437a0050(param_4,0,0,0,in_stack_fffffffffffffd98,iVar4,in_stack_fffffffffffffda8);
        uVar1 = local_218 + uVar10;
        if (local_210 < uVar1) {
          uVar8 = hkIo::WriteBuffer::implWriteRaw(&local_218);
        }
        else {
          FGenericPlatformString::Memcpy();
          uVar8 = uVar10;
          local_218 = uVar1;
        }
        if (uVar8 != uVar10) {
          if (DAT_146b863b8 == '\0') goto LAB_1437a354b;
          FUN_14373a730(local_1a0,&DAT_146b863b0,1);
          lVar6 = FUN_14373bbd0(local_1a0,"Failed to write data.",&DAT_145b909f0,0);
          *(undefined8 *)(lVar6 + 0x28) = 0x118;
          goto LAB_1437a3537;
        }
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    *param_2 = 0;
  }
  UParticleModuleSubUV::PostLoad(&local_218);
  return param_2;
}



// FUNCTION 1437a3560 FUN_1437a3560 body=82 status=ok
// SIG undefined FUN_1437a3560(void)

void FUN_1437a3560(ulonglong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = *param_2;
  uVar1 = *param_1;
  if (uVar1 + 1 <= param_1[1]) {
    FGenericPlatformString::Memcpy();
    *param_1 = uVar1 + 1;
    return;
  }
  hkIo::WriteBuffer::implWriteRaw(param_1,local_res8,1);
  return;
}



// FUNCTION 1437a35c0 FUN_1437a35c0 body=42 status=ok
// SIG undefined FUN_1437a35c0(void)

undefined8 * FUN_1437a35c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_145bab5f0;
  param_2[1] = &DAT_145bab5f8;
  return param_2;
}



// FUNCTION 1437a35f0 FUN_1437a35f0 body=1639 status=ok
// SIG undefined FUN_1437a35f0(void)

undefined4 *
FUN_1437a35f0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong in_stack_fffffffffffffef8;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  char local_de;
  undefined1 local_dd [9];
  short local_d4;
  ushort local_d2;
  char local_d0;
  byte local_cf;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_68 [64];
  ulonglong uVar12;
  
  iVar9 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_143734400(&local_c8,param_3);
  local_e8 = (ushort)local_e8._1_1_ << 8;
  if (local_c0 - local_c8 < 1) {
    hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_e8);
    local_c8 = local_c8 + 1;
  }
  local_e0 = (byte)local_e8;
  local_e8 = local_e8 & 0xff00;
  if (local_c0 - local_c8 < 1) {
    hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_e8);
    local_c8 = local_c8 + 1;
  }
  local_df = (byte)local_e8;
  local_e8 = local_e8 & 0xff00;
  if (local_c0 - local_c8 < 1) {
    hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_e8);
    local_c8 = local_c8 + 1;
  }
  local_de = (byte)local_e8;
  if (local_c0 - local_c8 < 9) {
    hkIo::ReadBuffer::implRead(&local_c8,local_dd);
  }
  else {
    FGenericPlatformString::Memcpy(local_dd);
    local_c8 = local_c8 + 9;
  }
  local_e8 = 0;
  if (local_c0 - local_c8 < 2) {
    hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_e8);
    local_c8 = local_c8 + 2;
  }
  local_d4 = local_e8;
  local_e8 = 0;
  if (local_c0 - local_c8 < 2) {
    hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_e8);
    local_c8 = local_c8 + 2;
  }
  local_d2 = local_e8;
  local_e8 = local_e8 & 0xff00;
  if (local_c0 - local_c8 < 1) {
    hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_e8);
    local_c8 = local_c8 + 1;
  }
  local_d0 = (byte)local_e8;
  local_e8 = local_e8 & 0xff00;
  if (local_c0 - local_c8 < 1) {
    hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_e8);
    local_c8 = local_c8 + 1;
  }
  local_cf = (byte)local_e8;
  uVar11 = (int)(((int)local_d0 >> 0x1f & 7U) + (int)local_d0) >> 3;
  uVar12 = (ulonglong)uVar11;
  if ((local_d4 < 1) || ((short)local_d2 < 1)) {
    if (DAT_146b86438 != '\0') {
      FUN_14373a730(local_68,&DAT_146b86430,1);
      lVar5 = FUN_14373bbd0(local_68,"TGA has an invalid header: Width = {}, Height = {}",
                            &DAT_145bab550,&local_d4,&local_d2,0);
      *(char **)(lVar5 + 0x20) = "FileFormats\\hkTgaFileFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x140;
      FUN_14373a950(local_68);
    }
    *param_2 = 0x80040200;
    FUN_143733ce0(&local_c8);
    return param_2;
  }
  bVar1 = false;
  bVar2 = false;
  if (local_de == '\x02') {
LAB_1437a38b8:
    bVar1 = bVar2;
    if (uVar11 == 3) {
      uVar8 = 0x5e;
    }
    else {
      if (uVar11 != 4) goto LAB_1437a3b6c;
      uVar8 = 0x5a;
    }
LAB_1437a38e2:
    FUN_1437a0190(&local_88);
    local_7c = (int)local_d4;
    local_78 = (int)(short)local_d2;
    local_88 = 1;
    local_80 = 1;
    local_84 = 1;
    local_74 = 1;
    local_70 = uVar8;
    FUN_1437a0600(param_4,&local_88);
    if (bVar1) {
      iVar3 = (int)local_d4;
      iVar6 = (int)(short)local_d2;
      do {
        local_e8 = local_e8 & 0xff00;
        if (local_c0 - local_c8 < 1) {
          hkIo::ReadBuffer::implRead(&local_c8,&local_e8);
        }
        else {
          FGenericPlatformString::Memcpy(&local_e8);
          local_c8 = local_c8 + 1;
        }
        if ((byte)local_e8 < 0x80) {
          if ((byte)((byte)local_e8 + 1) != 0) {
            uVar10 = (ulonglong)(byte)((byte)local_e8 + 1);
            do {
              uVar4 = FUN_1437a0050(param_4,0,0,0,iVar9 % (int)local_d4,
                                    ((int)(short)local_d2 - iVar9 / (int)local_d4) + -1,0);
              if (local_c0 - local_c8 < (longlong)uVar12) {
                hkIo::ReadBuffer::implRead(&local_c8,uVar4);
              }
              else {
                FGenericPlatformString::Memcpy(uVar4);
                local_c8 = local_c8 + uVar12;
              }
              iVar9 = iVar9 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
        else {
          bVar7 = (byte)local_e8 + 0x81;
          local_e4 = 0xffffffff;
          if (local_c0 - local_c8 < (longlong)uVar12) {
            hkIo::ReadBuffer::implRead(&local_c8,&local_e4,uVar12);
          }
          else {
            FGenericPlatformString::Memcpy(&local_e4);
            local_c8 = local_c8 + uVar12;
          }
          if (bVar7 != 0) {
            uVar10 = (ulonglong)bVar7;
            do {
              uVar4 = FUN_1437a0050(param_4,0,0,0,iVar9 % (int)local_d4,
                                    ((int)(short)local_d2 - iVar9 / (int)local_d4) + -1,0);
              FUN_14370c700(uVar4,&local_e4);
              iVar9 = iVar9 + 1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
        }
      } while (iVar9 < iVar6 * iVar3);
    }
    else {
      iVar6 = (int)local_d4;
      iVar3 = (int)(short)local_d2;
      if (0 < (short)local_d2) {
        do {
          in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 & 0xffffffff00000000;
          uVar4 = FUN_1437a0050(param_4,0,0,0,in_stack_fffffffffffffef8,(iVar3 - iVar9) + -1,0);
          if (local_c0 - local_c8 < (longlong)(ulonglong)(iVar6 * uVar11)) {
            hkIo::ReadBuffer::implRead(&local_c8);
          }
          else {
            FGenericPlatformString::Memcpy(uVar4);
            local_c8 = local_c8 + (ulonglong)(iVar6 * uVar11);
          }
          iVar3 = (int)(short)local_d2;
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar3);
      }
    }
    if ((local_cf & 0x20) != 0) {
      FUN_1437aaf40(param_4);
    }
    *param_2 = 0;
  }
  else {
    if (local_de == '\x03') {
      if (uVar11 == 1) {
        uVar8 = 0x70;
        goto LAB_1437a38e2;
      }
    }
    else if (local_de == '\n') {
      bVar2 = true;
      goto LAB_1437a38b8;
    }
LAB_1437a3b6c:
    if (DAT_146b86438 != '\0') {
      FUN_14373a730(local_68,&DAT_146b86430,1);
      lVar5 = FUN_14373bbd0(local_68,"TGA has an unsupported format: BPP = {}, ImageType = {}",
                            &DAT_145bab568,&local_d0,&local_de,0);
      *(char **)(lVar5 + 0x20) = "FileFormats\\hkTgaFileFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x162;
      FUN_14373a950(local_68);
    }
    *param_2 = 0x80040200;
  }
  FUN_143733ce0(&local_c8);
  return param_2;
}



// FUNCTION 1437a3c60 FUN_1437a3c60 body=1070 status=ok
// SIG undefined FUN_1437a3c60(void)

undefined4 *
FUN_1437a3c60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined2 local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  char local_9e;
  undefined1 local_9d [9];
  short local_94;
  ushort local_92;
  char local_90;
  undefined1 local_8f;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48 [64];
  
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_143734400(&local_88,param_3);
  local_a8 = (ushort)local_a8._1_1_ << 8;
  if (local_80 - local_88 < 1) {
    hkIo::ReadBuffer::implRead(&local_88,&local_a8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_a8);
    local_88 = local_88 + 1;
  }
  local_a0 = (char)local_a8;
  local_a8 = local_a8 & 0xff00;
  if (local_80 - local_88 < 1) {
    hkIo::ReadBuffer::implRead(&local_88,&local_a8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_a8);
    local_88 = local_88 + 1;
  }
  local_9f = (char)local_a8;
  local_a8 = local_a8 & 0xff00;
  if (local_80 - local_88 < 1) {
    hkIo::ReadBuffer::implRead(&local_88,&local_a8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_a8);
    local_88 = local_88 + 1;
  }
  local_9e = (char)local_a8;
  if (local_80 - local_88 < 9) {
    hkIo::ReadBuffer::implRead(&local_88,local_9d);
  }
  else {
    FGenericPlatformString::Memcpy(local_9d);
    local_88 = local_88 + 9;
  }
  local_a8 = 0;
  if (local_80 - local_88 < 2) {
    hkIo::ReadBuffer::implRead(&local_88,&local_a8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_a8);
    local_88 = local_88 + 2;
  }
  local_94 = local_a8;
  local_a8 = 0;
  if (local_80 - local_88 < 2) {
    hkIo::ReadBuffer::implRead(&local_88,&local_a8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_a8);
    local_88 = local_88 + 2;
  }
  local_92 = local_a8;
  local_a8 = local_a8 & 0xff00;
  if (local_80 - local_88 < 1) {
    hkIo::ReadBuffer::implRead(&local_88,&local_a8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_a8);
    local_88 = local_88 + 1;
  }
  local_90 = (char)local_a8;
  local_a8 = local_a8 & 0xff00;
  if (local_80 - local_88 < 1) {
    hkIo::ReadBuffer::implRead(&local_88,&local_a8);
  }
  else {
    FGenericPlatformString::Memcpy(&local_a8);
    local_88 = local_88 + 1;
  }
  local_8f = (char)local_a8;
  iVar4 = (int)((int)local_90 + ((int)local_90 >> 0x1f & 7U)) >> 3;
  if ((local_94 < 1) || ((short)local_92 < 1)) {
    if (DAT_146b86438 != '\0') {
      FUN_14373a730(local_48,&DAT_146b86430,1);
      lVar5 = FUN_14373bbd0(local_48,"TGA has an invalid header: Width = {}, Height = {}",
                            &DAT_145bab550,&local_94,&local_92,0);
      *(char **)(lVar5 + 0x20) = "FileFormats\\hkTgaFileFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0xfc;
      FUN_14373a950(local_48);
    }
    *param_2 = 0x80040200;
    FUN_143733ce0(&local_88);
    return param_2;
  }
  if (local_9e == '\x02') {
LAB_1437a3fb3:
    if (iVar4 == 3) {
      uVar7 = 0x5e;
    }
    else {
      if (iVar4 != 4) goto LAB_1437a3f0e;
      uVar7 = 0x5a;
    }
LAB_1437a3fc9:
    puVar6 = (undefined4 *)FUN_1437a0190(local_48);
    *param_2 = 0;
    uVar1 = puVar6[1];
    uVar2 = puVar6[2];
    uVar3 = puVar6[3];
    *param_4 = *puVar6;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    *(undefined8 *)(param_4 + 4) = *(undefined8 *)(puVar6 + 4);
    param_4[3] = (int)local_94;
    param_4[4] = (int)(short)local_92;
    param_4[6] = uVar7;
    *param_4 = 1;
    param_4[2] = 1;
    param_4[1] = 1;
    param_4[5] = 1;
  }
  else {
    if (local_9e == '\x03') {
      if (iVar4 == 1) {
        uVar7 = 0x70;
        goto LAB_1437a3fc9;
      }
    }
    else if (local_9e == '\n') goto LAB_1437a3fb3;
LAB_1437a3f0e:
    if (DAT_146b86438 != '\0') {
      FUN_14373a730(local_48,&DAT_146b86430,1);
      lVar5 = FUN_14373bbd0(local_48,"TGA has an unsupported format: BPP = {}, ImageType = {}",
                            &DAT_145bab568,&local_90,&local_9e,0);
      *(char **)(lVar5 + 0x20) = "FileFormats\\hkTgaFileFormat.cpp";
      *(undefined8 *)(lVar5 + 0x28) = 0x119;
      FUN_14373a950(local_48);
    }
    *param_2 = 0x80040200;
  }
  FUN_143733ce0(&local_88);
  return param_2;
}



// FUNCTION 1437a4090 FUN_1437a4090 body=1702 status=ok
// SIG undefined FUN_1437a4090(void)

undefined4 *
FUN_1437a4090(longlong *param_1,undefined4 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined1 **ppuVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong local_res20;
  undefined4 local_408;
  undefined4 local_404;
  char local_400 [8];
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8;
  uint local_3d8;
  ulonglong local_3c8;
  ulonglong local_3c0;
  undefined8 local_398;
  undefined8 uStack_390;
  uint local_388;
  uint local_384;
  int local_380;
  uint local_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 *local_368;
  uint local_360;
  uint local_35c;
  undefined1 local_358 [528];
  undefined1 local_148 [64];
  undefined1 local_108 [208];
  
  local_3f8 = &local_378;
  uStack_3f0 = &local_368;
  local_378 = 0x5b0000005a;
  uStack_370 = 0x5f0000005e;
  local_res20 = param_4;
  iVar3 = FUN_1437aa6d0(*(undefined4 *)(param_4 + 0x18),&local_3f8);
  if (iVar3 == 0) {
    if (DAT_146b86438 != '\0') {
      local_res20 = FUN_1437a6a20(*(undefined4 *)(param_4 + 0x18));
      FUN_14373a730(local_148,&DAT_146b86430,1);
      lVar6 = FUN_14373bbd0(local_148,
                            "No conversion from format \'{}\' to a format suitable for TGA files known."
                            ,&DAT_145b74470,&local_res20,0);
      *(char **)(lVar6 + 0x20) = "FileFormats\\hkTgaFileFormat.cpp";
      *(undefined8 *)(lVar6 + 0x28) = 0x39;
      FUN_14373a950(local_148);
    }
    *param_2 = 0x80040200;
    return param_2;
  }
  if (iVar3 != *(int *)(param_4 + 0x18)) {
    FUN_1437a0140(local_108);
    iVar3 = FUN_1437a9910(param_4,local_108,iVar3,0);
    if (iVar3 < 0) {
      *param_2 = 0x80040200;
      FUN_1437a01c0(local_108);
      return param_2;
    }
    (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,local_108);
    FUN_1437a01c0(local_108);
    return param_2;
  }
  Audio::FDelayStereo::FDelayStereo(&local_3c8);
  local_398 = 0;
  uStack_390 = 0;
  FUN_143747cb0(&local_3c8,param_3);
  uVar4 = FPakFile::IsPakKeepFullDirectory(*(undefined4 *)(param_4 + 0x18));
  FUN_14370c720(&local_3f8,0,0x12);
  ppuVar1 = uStack_3f0;
  uVar11 = *(uint *)(param_4 + 0xc);
  uVar10 = *(uint *)(param_4 + 0x10);
  local_3f8._0_3_ = CONCAT12(10,(undefined2)local_3f8);
  uVar13 = 0;
  if (1 < uVar11) {
    uVar13 = uVar11;
  }
  local_3e8 = (undefined1)uVar4;
  uVar5 = 0;
  if (1 < uVar10) {
    uVar5 = uVar10;
  }
  uVar2 = (undefined1)(uVar5 >> 8);
  uStack_3f0._0_7_ = (uint7)(byte)(uVar13 >> 8) << 0x28;
  uStack_3f0 = (undefined1 **)CONCAT17(uVar2,(int7)uStack_3f0);
  uVar8 = 1;
  if (1 < uVar11) {
    uVar8 = (char)uVar11;
  }
  uStack_3f0._0_5_ = CONCAT14(uVar8,(int)ppuVar1);
  uVar8 = 1;
  if (1 < uVar10) {
    uVar8 = (char)uVar10;
  }
  uStack_3f0._0_7_ = CONCAT16(uVar8,(undefined6)uStack_3f0);
  uStack_3f0 = (undefined1 **)CONCAT17(uVar2,(int7)uStack_3f0);
  if (local_3c0 < local_3c8 + 0x12) {
    hkIo::WriteBuffer::implWriteRaw(&local_3c8,&local_3f8,0x12);
  }
  else {
    FGenericPlatformString::Memcpy();
    local_3c8 = local_3c8 + 0x12;
  }
  local_368 = local_358;
  local_35c = 0x80000081;
  uVar11 = 1;
  if (1 < *(uint *)(local_res20 + 0xc)) {
    uVar11 = *(uint *)(local_res20 + 0xc);
  }
  local_37c = 1;
  if (1 < *(uint *)(local_res20 + 0x10)) {
    local_37c = *(uint *)(local_res20 + 0x10);
  }
  uVar14 = 0;
  local_3d8 = 0;
  local_360 = 0;
  uVar9 = local_res20;
  uVar10 = uVar14;
  uVar13 = uVar14;
  local_384 = uVar11;
  uVar5 = local_37c;
  if (local_37c == 0) goto LAB_1437a46e1;
  do {
    if (uVar11 != 0) {
      local_388 = uVar4 >> 3;
      local_380 = (uVar5 - local_3d8) + -1;
      uVar12 = uVar14;
      do {
        local_408 = CONCAT13(0xff,(undefined3)local_408);
        FUN_1437a0050(uVar9,0,0,0,uVar12,local_380,0);
        FUN_14370c700(&local_408);
        if (uVar10 == 0) {
LAB_1437a4544:
          uVar10 = 1;
LAB_1437a4549:
          local_404 = local_408;
          uVar7 = FUN_143703a50();
          if (local_360 == (local_35c & 0x3fffffff)) {
            FUN_14370c460(uVar7,&local_368,4);
          }
          if ((undefined4 *)(local_368 + (longlong)(int)local_360 * 4) != (undefined4 *)0x0) {
            *(undefined4 *)(local_368 + (longlong)(int)local_360 * 4) = local_408;
          }
LAB_1437a4595:
          local_360 = local_360 + 1;
        }
        else if (uVar10 == 1) {
          if (((((char)local_408 != (char)local_404) || (local_408._1_1_ != local_404._1_1_)) ||
              (local_408._2_1_ != local_404._2_1_)) || (local_408._3_1_ != local_404._3_1_)) {
            uVar10 = 3;
            goto LAB_1437a4549;
          }
          uVar10 = 2;
          uVar13 = 2;
        }
        else if (uVar10 == 2) {
          if ((((char)local_408 != (char)local_404) || (local_408._1_1_ != local_404._1_1_)) ||
             ((local_408._2_1_ != local_404._2_1_ ||
              ((local_408._3_1_ != local_404._3_1_ || (0x7f < (int)uVar13)))))) {
            local_400[0] = (char)uVar13 + '\x7f';
            FUN_1437a3560(&local_3c8,local_400);
            uVar9 = local_3c8 + (uVar4 >> 3);
            if (local_3c0 < uVar9) {
              hkIo::WriteBuffer::implWriteRaw(&local_3c8,&local_404);
            }
            else {
              FGenericPlatformString::Memcpy();
              local_3c8 = uVar9;
            }
LAB_1437a4540:
            local_360 = 0;
            goto LAB_1437a4544;
          }
          uVar13 = uVar13 + 1;
        }
        else if (uVar10 == 3) {
          if ((((((char)local_408 == (char)local_404) && (local_408._1_1_ == local_404._1_1_)) &&
               (local_408._2_1_ == local_404._2_1_)) && (local_408._3_1_ == local_404._3_1_)) ||
             (0x7f < (int)local_360)) {
            local_400[0] = (char)local_360 + -1;
            FUN_1437a3560(&local_3c8,local_400);
            iVar3 = 0;
            if (0 < (int)local_360) {
              do {
                uVar9 = local_3c8 + (uVar4 >> 3);
                if (local_3c0 < uVar9) {
                  hkIo::WriteBuffer::implWriteRaw
                            (&local_3c8,local_368 + (longlong)iVar3 * 4,(ulonglong)(uVar4 >> 3));
                }
                else {
                  FGenericPlatformString::Memcpy();
                  local_3c8 = uVar9;
                }
                iVar3 = iVar3 + 1;
                uVar11 = local_384;
              } while (iVar3 < (int)local_360);
            }
            goto LAB_1437a4540;
          }
          uVar7 = FUN_143703a50();
          if (local_360 == (local_35c & 0x3fffffff)) {
            FUN_14370c460(uVar7,&local_368,4);
          }
          if ((undefined4 *)(local_368 + (longlong)(int)local_360 * 4) != (undefined4 *)0x0) {
            *(undefined4 *)(local_368 + (longlong)(int)local_360 * 4) = local_408;
          }
          local_404 = local_408;
          goto LAB_1437a4595;
        }
        uVar12 = uVar12 + 1;
        uVar9 = local_res20;
        uVar5 = local_37c;
      } while (uVar12 < uVar11);
    }
    local_3d8 = local_3d8 + 1;
  } while (local_3d8 < uVar5);
  if (uVar10 == 1) {
    local_res20 = local_res20 & 0xffffffffffffff00;
    FUN_1437a3560(&local_3c8,&local_res20);
    uVar9 = local_3c8 + (uVar4 >> 3);
    if (uVar9 <= local_3c0) {
      FGenericPlatformString::Memcpy();
      local_3c8 = uVar9;
      goto LAB_1437a46e1;
    }
  }
  else {
    if (uVar10 != 2) {
      if (uVar10 == 3) {
        local_res20 = CONCAT71(local_res20._1_7_,(char)local_360 + -1);
        FUN_1437a3560(&local_3c8,&local_res20);
        iVar3 = 0;
        if (0 < (int)local_360) {
          do {
            uVar9 = local_3c8 + (uVar4 >> 3);
            if (local_3c0 < uVar9) {
              hkIo::WriteBuffer::implWriteRaw
                        (&local_3c8,local_368 + (longlong)iVar3 * 4,(ulonglong)(uVar4 >> 3));
            }
            else {
              FGenericPlatformString::Memcpy();
              local_3c8 = uVar9;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)local_360);
        }
      }
      goto LAB_1437a46e1;
    }
    local_res20 = CONCAT71(local_res20._1_7_,(char)uVar13 + '\x7f');
    FUN_1437a3560(&local_3c8,&local_res20);
    uVar9 = local_3c8 + (uVar4 >> 3);
    if (uVar9 <= local_3c0) {
      FGenericPlatformString::Memcpy(local_3c8,&local_404);
      local_3c8 = uVar9;
      goto LAB_1437a46e1;
    }
  }
  hkIo::WriteBuffer::implWriteRaw(&local_3c8,&local_404);
LAB_1437a46e1:
  uVar7 = FUN_143703a50();
  local_360 = 0;
  if (-1 < (int)local_35c) {
    FUN_143702e10(uVar7,local_368,4,local_35c & 0x3fffffff);
  }
  *param_2 = 0;
  UParticleModuleSubUV::PostLoad(&local_3c8);
  return param_2;
}



// FUNCTION 1437a4740 FUN_1437a4740 body=683 status=ok
// SIG undefined FUN_1437a4740(void)

undefined8 FUN_1437a4740(undefined1 *param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte local_res10 [16];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  
  if ((0x7ff7 < param_2 - 8U) || (*(char *)*param_3 != '\x02')) {
    uVar1 = FUN_1437a4a30(param_1,param_2);
    return uVar1;
  }
  if (param_3[1] - *param_3 < 1) {
    hkIo::ReadBuffer::implRead(param_3,local_res10);
  }
  else {
    FGenericPlatformString::Memcpy(local_res10);
    *param_3 = *param_3 + 1;
  }
  if (param_3[1] - *param_3 < 1) {
    hkIo::ReadBuffer::implRead(param_3,local_res10);
  }
  else {
    FGenericPlatformString::Memcpy(local_res10);
    *param_3 = *param_3 + 1;
  }
  param_1[1] = local_res10[0];
  if (param_3[1] - *param_3 < 1) {
    hkIo::ReadBuffer::implRead(param_3,local_res10);
  }
  else {
    FGenericPlatformString::Memcpy(local_res10);
    *param_3 = *param_3 + 1;
  }
  param_1[2] = local_res10[0];
  if (param_3[1] - *param_3 < 1) {
    hkIo::ReadBuffer::implRead(param_3,local_res10);
  }
  else {
    FGenericPlatformString::Memcpy(local_res10);
    *param_3 = *param_3 + 1;
  }
  if ((param_1[1] == '\x02') && (-1 < (char)param_1[2])) {
    lVar6 = 0;
    lVar5 = 4;
    do {
      lVar4 = 0;
      if (0 < (longlong)param_2) {
        do {
          if (param_3[1] - *param_3 < 1) {
            hkIo::ReadBuffer::implRead(param_3,local_res10);
          }
          else {
            FGenericPlatformString::Memcpy(local_res10);
            *param_3 = *param_3 + 1;
          }
          if (local_res10[0] < 0x81) {
            if (local_res10[0] != 0) {
              puVar2 = param_1 + lVar6 + lVar4 * 4;
              lVar4 = lVar4 + (ulonglong)local_res10[0];
              bVar3 = local_res10[0];
              do {
                bVar3 = bVar3 - 1;
                if (param_3[1] - *param_3 < 1) {
                  hkIo::ReadBuffer::implRead(param_3,local_48);
                }
                else {
                  FGenericPlatformString::Memcpy(local_48);
                  *param_3 = *param_3 + 1;
                }
                *puVar2 = local_48[0];
                puVar2 = puVar2 + 4;
              } while (bVar3 != 0);
            }
          }
          else {
            bVar3 = local_res10[0] & 0x7f;
            if (param_3[1] - *param_3 < 1) {
              hkIo::ReadBuffer::implRead(param_3,local_res20);
            }
            else {
              FGenericPlatformString::Memcpy(local_res20);
              *param_3 = *param_3 + 1;
            }
            if (bVar3 != 0) {
              puVar2 = param_1 + lVar6 + lVar4 * 4;
              lVar4 = lVar4 + (ulonglong)bVar3;
              do {
                *puVar2 = local_res20[0];
                puVar2 = puVar2 + 4;
                bVar3 = bVar3 - 1;
              } while (bVar3 != 0);
            }
          }
        } while (lVar4 < param_2);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return 1;
  }
  *param_1 = 2;
  param_1[3] = local_res10[0];
  uVar1 = FUN_1437a4a30(param_1 + 4,param_2 + -1,param_3);
  return uVar1;
}



// FUNCTION 1437a49f0 FUN_1437a49f0 body=42 status=ok
// SIG undefined FUN_1437a49f0(void)

undefined8 * FUN_1437a49f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_145bab640;
  param_2[1] = &DAT_145bab648;
  return param_2;
}



// FUNCTION 1437a4a20 FUN_1437a4a20 body=10 status=ok
// SIG undefined FUN_1437a4a20(void)

undefined8 * FUN_1437a4a20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1437a4a30 FUN_1437a4a30 body=378 status=ok
// SIG undefined FUN_1437a4a30(void)

undefined8 FUN_1437a4a30(char *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  byte bVar2;
  char local_res10 [8];
  char local_res20 [8];
  char local_28;
  byte local_27 [15];
  
  bVar2 = 0;
  while (0 < param_2) {
    if (param_3[1] - *param_3 < 1) {
      hkIo::ReadBuffer::implRead(param_3,local_res10);
    }
    else {
      FGenericPlatformString::Memcpy(local_res10);
      *param_3 = *param_3 + 1;
    }
    *param_1 = local_res10[0];
    if (param_3[1] - *param_3 < 1) {
      hkIo::ReadBuffer::implRead(param_3,local_res20);
    }
    else {
      FGenericPlatformString::Memcpy(local_res20);
      *param_3 = *param_3 + 1;
    }
    param_1[1] = local_res20[0];
    if (param_3[1] - *param_3 < 1) {
      hkIo::ReadBuffer::implRead(param_3,&local_28);
    }
    else {
      FGenericPlatformString::Memcpy(&local_28);
      *param_3 = *param_3 + 1;
    }
    param_1[2] = local_28;
    if (param_3[1] - *param_3 < 1) {
      hkIo::ReadBuffer::implRead(param_3,local_27);
    }
    else {
      FGenericPlatformString::Memcpy(local_27);
      *param_3 = *param_3 + 1;
    }
    param_1[3] = local_27[0];
    if (((*param_1 == '\x01') && (param_1[1] == '\x01')) && (param_1[2] == '\x01')) {
      iVar1 = (uint)local_27[0] << (bVar2 & 0x1f);
      if (0 < (int)((uint)local_27[0] << (bVar2 & 0x1f))) {
        param_2 = param_2 - iVar1;
        do {
          FUN_14370c700(param_1,param_1 + -4,4);
          param_1 = param_1 + 4;
          iVar1 = iVar1 + -1;
        } while (0 < iVar1);
      }
      bVar2 = bVar2 + 8;
    }
    else {
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
      bVar2 = 0;
    }
  }
  return 1;
}



// FUNCTION 1437a4bb0 FUN_1437a4bb0 body=473 status=ok
// SIG undefined FUN_1437a4bb0(void)

ulonglong FUN_1437a4bb0(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  char cVar3;
  char *pcVar4;
  char local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_298 [208];
  char local_1c8 [416];
  
  *param_3 = 0;
  *param_2 = 0;
  if (param_1[1] - *param_1 < 10) {
    hkIo::ReadBuffer::implRead(param_1,local_298);
  }
  else {
    FGenericPlatformString::Memcpy(local_298);
    *param_1 = *param_1 + 10;
  }
  uVar2 = FUN_14370c6f0(local_298,"#?RADIANCE",10);
  if ((int)uVar2 == 0) {
    cVar1 = '\0';
    if (param_1[1] - *param_1 < 1) {
      hkIo::ReadBuffer::implRead(param_1,local_res8);
    }
    else {
      FGenericPlatformString::Memcpy(local_res8);
      *param_1 = *param_1 + 1;
    }
    do {
      cVar3 = cVar1;
      if (param_1[1] - *param_1 < 1) {
        hkIo::ReadBuffer::implRead(param_1,local_res8);
      }
      else {
        FGenericPlatformString::Memcpy(local_res8);
        *param_1 = *param_1 + 1;
      }
      cVar1 = local_res8[0];
    } while ((local_res8[0] != '\n') || (cVar3 != '\n'));
    pcVar4 = local_1c8;
    do {
      if (param_1[1] - *param_1 < 1) {
        hkIo::ReadBuffer::implRead(param_1,local_res8);
      }
      else {
        FGenericPlatformString::Memcpy(local_res8);
        *param_1 = *param_1 + 1;
      }
      *pcVar4 = local_res8[0];
      pcVar4 = pcVar4 + 1;
    } while (local_res8[0] != '\n');
    uVar2 = FUN_143662c40(local_1c8,"-Y %ld +X %ld",local_res18,local_res10);
    if ((int)uVar2 != 0) {
      *param_2 = local_res10[0];
      *param_3 = local_res18[0];
      return CONCAT71((uint7)(uint3)((uint)local_res18[0] >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1437a4d90 FUN_1437a4d90 body=118 status=ok
// SIG undefined FUN_1437a4d90(void)

ulonglong FUN_1437a4d90(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 local_28 [32];
  
  uVar2 = FUN_1437a4bb0(param_1,local_res18,local_res20);
  if ((char)uVar2 != '\0') {
    puVar3 = (undefined8 *)FUN_1437a0190(local_28);
    uVar1 = puVar3[1];
    *param_2 = *puVar3;
    param_2[1] = uVar1;
    param_2[2] = puVar3[2];
    *(undefined4 *)((longlong)param_2 + 0xc) = local_res18[0];
    *(undefined4 *)(param_2 + 2) = local_res20[0];
    *(undefined4 *)(param_2 + 3) = 0x14;
    *(undefined4 *)param_2 = 1;
    *(undefined4 *)(param_2 + 1) = 1;
    *(undefined4 *)((longlong)param_2 + 4) = 1;
    *(undefined4 *)((longlong)param_2 + 0x14) = 1;
    return CONCAT71((uint7)(uint3)((uint)local_res20[0] >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1437a4e10 FUN_1437a4e10 body=219 status=ok
// SIG undefined FUN_1437a4e10(void)

undefined4 *
FUN_1437a4e10(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_68 [12];
  uint local_5c;
  uint local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_143734400(&local_48,param_3);
  FUN_1437346f0(&local_48);
  FUN_1437a0190(local_68);
  cVar3 = FUN_1437a4d90(&local_48,local_68);
  if (cVar3 != '\0') {
    FUN_1437a0600(param_4,local_68);
    uVar4 = FUN_14057ade0(param_4);
    uVar1 = 1;
    if (1 < local_58) {
      uVar1 = local_58;
    }
    uVar2 = 1;
    if (1 < local_5c) {
      uVar2 = local_5c;
    }
    cVar3 = FUN_1437a4ef0(&local_48,uVar2,uVar1,uVar4);
    if (cVar3 != '\0') {
      *param_2 = 0;
      goto LAB_1437a4ec9;
    }
  }
  *param_2 = 0x80040200;
LAB_1437a4ec9:
  FUN_143733ce0(&local_48);
  return param_2;
}



// FUNCTION 1437a4ef0 FUN_1437a4ef0 body=220 status=ok
// SIG undefined FUN_1437a4ef0(void)

undefined8 FUN_1437a4ef0(undefined8 param_1,uint param_2,int param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res10 [2];
  
  FUN_1437346f0();
  local_res10[0] = param_2;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_143702d60(&PTR_vftable_1467f0638,4,local_res10);
  }
  uVar3 = 0x80000000;
  if (local_res10[0] != 0) {
    uVar3 = local_res10[0];
  }
  while ((param_3 = param_3 + -1, -1 < param_3 &&
         (cVar1 = FUN_1437a4740(uVar2,param_2,param_1), cVar1 != '\0'))) {
    FUN_1437a5050(uVar2,param_2,param_4);
    param_4 = param_4 + (longlong)(int)(param_2 * 3) * 4;
  }
  if (-1 < (int)uVar3) {
    FUN_143702e10(&PTR_vftable_1467f0638,uVar2,4,uVar3 & 0x3fffffff);
  }
  return 1;
}



// FUNCTION 1437a4fd0 FUN_1437a4fd0 body=124 status=ok
// SIG undefined FUN_1437a4fd0(void)

undefined4 *
FUN_1437a4fd0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_143734400(&local_48,param_3);
  cVar1 = FUN_1437a4d90(&local_48,param_4);
  if (cVar1 == '\0') {
    *param_2 = 0x80040200;
  }
  else {
    *param_2 = 0;
  }
  FUN_143733ce0(&local_48);
  return param_2;
}



// FUNCTION 1437a5050 FUN_1437a5050 body=282 status=ok
// SIG undefined FUN_1437a5050(void)

void FUN_1437a5050(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  byte *pbVar2;
  float *pfVar3;
  double dVar4;
  double _Y;
  
  if (0 < param_2) {
    pbVar2 = (byte *)(param_1 + 1);
    pfVar3 = (float *)(param_3 + 8);
    do {
      bVar1 = pbVar2[-1];
      param_2 = param_2 + -1;
      _Y = (double)(int)(pbVar2[2] - 0x80);
      dVar4 = _guard_xfg_dispatch_icall_nop(2.0,_Y);
      pfVar3[-2] = (float)dVar4 * (float)bVar1 * 0.00390625;
      bVar1 = *pbVar2;
      dVar4 = _guard_xfg_dispatch_icall_nop(2.0,_Y);
      pfVar3[-1] = (float)dVar4 * (float)bVar1 * 0.00390625;
      bVar1 = pbVar2[1];
      dVar4 = _guard_xfg_dispatch_icall_nop(2.0,_Y);
      pbVar2 = pbVar2 + 4;
      *pfVar3 = (float)dVar4 * (float)bVar1 * 0.00390625;
      pfVar3 = pfVar3 + 3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1437a5170 FUN_1437a5170 body=108 status=ok
// SIG undefined FUN_1437a5170(void)

undefined8 FUN_1437a5170(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *local_18;
  undefined8 *local_10;
  
  (**(code **)(*param_1 + 0x18))(param_1,&local_18);
  while( true ) {
    if (local_18 == local_10) {
      return 0;
    }
    iVar1 = hkString::strCmp(*local_18,param_2);
    if (iVar1 == 0) break;
    local_18 = local_18 + 1;
  }
  return 1;
}



// FUNCTION 1437a51e0 FUN_1437a51e0 body=83 status=ok
// SIG undefined FUN_1437a51e0(void)

longlong FUN_1437a51e0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = DAT_146b86528;
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    cVar2 = FUN_1437a5170(lVar1,param_1);
    if (cVar2 != '\0') break;
    lVar1 = *(longlong *)(lVar1 + 8);
  }
  return lVar1;
}



// FUNCTION 1437a67a0 FUN_1437a67a0 body=63 status=ok
// SIG undefined FUN_1437a67a0(void)

uint FUN_1437a67a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = GameParam::ComboAdjustRateMin(uVar2);
    if (iVar1 == param_1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xf1);
  return 0;
}



// FUNCTION 1437a67e0 FUN_1437a67e0 body=237 status=ok
// SIG undefined FUN_1437a67e0(void)

uint FUN_1437a67e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (param_5 == 8) {
    if (param_1 == 0xff) {
      if ((param_2 == 0xff) && (param_3 == 0xff)) {
        return 0x70;
      }
    }
    else if ((((param_1 == 0) && (param_2 == 0)) && (param_3 == 0)) && (param_4 == 0xff)) {
      return 0x70;
    }
  }
  uVar3 = 0;
  while ((((iVar2 = FUN_1437a6960(uVar3,0), iVar2 != param_1 ||
           (iVar2 = FUN_1437a6960(uVar3,1), iVar2 != param_2)) ||
          ((iVar2 = FUN_1437a6960(uVar3,2), iVar2 != param_3 ||
           (((iVar2 = FUN_1437a6960(uVar3,3), iVar2 != param_4 ||
             (iVar2 = FPakFile::IsPakKeepFullDirectory(uVar3), iVar2 != param_5)) ||
            (iVar2 = FUN_1437a6980(uVar3), iVar2 != 3)))))) ||
         (cVar1 = FUN_1437a6b20(uVar3), cVar1 != '\0'))) {
    uVar3 = uVar3 + 1;
    if (0xf0 < uVar3) {
      return 0;
    }
  }
  return uVar3;
}



// FUNCTION 1437a68d0 FUN_1437a68d0 body=38 status=ok
// SIG undefined FUN_1437a68d0(void)

int FUN_1437a68d0(void)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_1437a6a00();
  return (uint)*pbVar1 * (uint)pbVar1[3] * (uint)pbVar1[2] * (uint)pbVar1[1];
}



// FUNCTION 1437a6900 IsPakKeepFullDirectory body=17 status=ok
// SIG undefined IsPakKeepFullDirectory(void)

undefined1 FPakFile::IsPakKeepFullDirectory(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_1437a6a00();
  return *puVar1;
}



// FUNCTION 1437a6920 IsPakDelayPruning body=18 status=ok
// SIG undefined IsPakDelayPruning(void)

undefined1 FPakFile::IsPakDelayPruning(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1437a6a00();
  return *(undefined1 *)(lVar1 + 2);
}



// FUNCTION 1437a6940 IsPakValidatePruning body=18 status=ok
// SIG undefined IsPakValidatePruning(void)

undefined1 FPakFile::IsPakValidatePruning(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1437a6a00();
  return *(undefined1 *)(lVar1 + 1);
}



// FUNCTION 1437a6960 FUN_1437a6960 body=25 status=ok
// SIG undefined FUN_1437a6960(void)

undefined4 FUN_1437a6960(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1437a6a00();
  return *(undefined4 *)(lVar1 + 0xc + (longlong)param_2 * 4);
}



// FUNCTION 1437a6980 FUN_1437a6980 body=17 status=ok
// SIG undefined FUN_1437a6980(void)

undefined4 FUN_1437a6980(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1437a6a00();
  return *(undefined4 *)(lVar1 + 0x28);
}



// FUNCTION 1437a69a0 FUN_1437a69a0 body=81 status=ok
// SIG undefined FUN_1437a69a0(void)

int FUN_1437a69a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FPakFile::IsPakDelayPruning();
  iVar2 = FUN_1437a6ad0(param_1,param_2);
  return (((param_3 - 1U) - (param_3 - 1U) % uVar1) + uVar1) * iVar2;
}



// FUNCTION 1437a6a00 FUN_1437a6a00 body=18 status=ok
// SIG undefined FUN_1437a6a00(void)

undefined4 * FUN_1437a6a00(int param_1)

{
  return &DAT_146b86530 + (longlong)param_1 * 0xe;
}



// FUNCTION 1437a6a20 FUN_1437a6a20 body=170 status=ok
// SIG undefined FUN_1437a6a20(void)

undefined8 FUN_1437a6a20(undefined4 param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 local_res8 [8];
  undefined1 local_38 [16];
  undefined8 local_28;
  longlong local_20;
  ulonglong uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  local_res8[0] = param_1;
  puVar1 = (undefined8 *)FUN_14371d5c0(local_38,local_res8,&DAT_1467fd570);
  local_28 = *puVar1;
  local_20 = puVar1[1];
  if (local_20 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1437151a0();
  }
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  if ((uStack_18 & 1) != 0) {
    FUN_143733a60(uStack_18 & 0xfffffffffffffffe);
  }
  uStack_18 = uVar2;
  uVar3 = FUN_143744ec0(&DAT_145bac280,&local_28);
  if ((uStack_18 & 1) != 0) {
    FUN_143733a60(uStack_18 & 0xfffffffffffffffe);
  }
  return uVar3;
}



// FUNCTION 1437a6ad0 FUN_1437a6ad0 body=69 status=ok
// SIG undefined FUN_1437a6ad0(void)

uint FUN_1437a6ad0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FPakFile::IsPakValidatePruning();
  iVar2 = FPakFile::IsPakKeepFullDirectory(param_1);
  return (uVar1 + ((param_2 - 1U) - (param_2 - 1U) % uVar1)) * iVar2 >> 3;
}



// FUNCTION 1437a6b20 FUN_1437a6b20 body=18 status=ok
// SIG undefined FUN_1437a6b20(void)

undefined1 FUN_1437a6b20(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1437a6a00();
  return *(undefined1 *)(lVar1 + 0x24);
}



// FUNCTION 1437a6b40 ComboAdjustRateMin body=17 status=ok
// SIG undefined ComboAdjustRateMin(void)

undefined4 GameParam::ComboAdjustRateMin(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1437a6a00();
  return *(undefined4 *)(lVar1 + 0x34);
}



// FUNCTION 1437a6b60 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FRuntimePhysXPlatformModule::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1437a8cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1437a6ba0 FUN_1437a6ba0 body=141 status=ok
// SIG undefined FUN_1437a6ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437a6ba0(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b899fc) {
    _Init_thread_header(&DAT_146b899fc);
    if (DAT_146b899fc == -1) {
      _DAT_146b899f0 = 0x14;
      _DAT_146b899f4 = 0x52;
      _Init_thread_footer(&DAT_146b899fc);
    }
  }
  *param_2 = &DAT_146b899f0;
  param_2[1] = &DAT_146b899fc;
  return param_2;
}



// FUNCTION 1437a6c30 FUN_1437a6c30 body=756 status=ok
// SIG undefined FUN_1437a6c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1437a6c30(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
             uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [12];
  ulonglong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  longlong local_378;
  longlong lStack_370;
  undefined **local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  uint uStack_34c;
  undefined **local_348;
  undefined **ppuStack_340;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined *local_318 [9];
  undefined1 *local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined1 local_2c0 [320];
  undefined1 *local_180;
  undefined4 local_178;
  uint local_174;
  undefined1 local_170 [328];
  
  lVar1 = *param_4;
  lVar2 = *param_3;
  uVar17 = param_5 >> 5;
  local_378 = lVar2;
  lStack_370 = lVar1;
  if (((uVar17 < 6) || (*(char *)(DAT_146bcc4f0 + 0x20) != '\0')) ||
     (plVar3 = *(longlong **)(DAT_146bcc4f0 + 0x18), plVar3 == (longlong *)0x0)) {
    local_2c4 = 0x80000005;
    local_2d0 = local_2c0;
    local_2c8 = 0;
    local_180 = local_170;
    local_178 = 0;
    local_174 = 0x80000005;
    FUN_143df9d10(local_318,1,uVar17);
    local_368 = local_318;
    uStack_360 = 0;
    uStack_354 = 1;
    uStack_350 = 0;
    local_358 = 1;
    local_338 = 0x100000001;
    lStack_330 = (ulonglong)uStack_34c << 0x20;
    ppuStack_340 = (undefined **)0x0;
    local_348 = local_368;
    FUN_1437a8e60(&local_378,&local_348);
    uVar13 = FUN_143703a50();
    local_178 = 0;
    if (-1 < (int)local_174) {
      FUN_143702e10(uVar13,local_180,0x40,local_174 & 0x3fffffff);
    }
    local_180 = (undefined1 *)0x0;
    local_174 = 0x80000000;
    uVar13 = FUN_143703a50();
    local_2c8 = 0;
    if (-1 < (int)local_2c4) {
      FUN_143702e10(uVar13,local_2d0,0x40,local_2c4 & 0x3fffffff);
    }
  }
  else {
    iVar12 = (**(code **)(*plVar3 + 0x80))(plVar3);
    local_2c4 = 0x80000005;
    local_2c8 = 0;
    local_178 = 0;
    uVar18 = iVar12 + 1;
    local_174 = 0x80000005;
    local_2d0 = local_2c0;
    local_180 = local_170;
    FUN_143df9d10(local_318,uVar18,uVar17);
    local_328 = 1;
    local_348 = hkConcurrencyInternals::BatchProcessorEx<<lambda_471bff05c2a9b48fb3308e032119458a>_>
                ::vftable;
    ppuStack_340 = local_318;
    local_338 = local_378;
    lStack_330 = lStack_370;
    uVar19 = uVar17;
    if ((int)uVar18 < (int)uVar17) {
      uVar19 = uVar18;
    }
    uVar13 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_348,uVar19,1,0x40);
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar13);
    local_348 = hkTask::vftable;
    FUN_1437967d0(local_318);
  }
  if (uVar17 * 0x20 < param_5) {
    pauVar14 = (undefined1 (*) [12])((ulonglong)(uVar17 * 0x60) * 4 + lVar2);
    puVar16 = (undefined4 *)((ulonglong)(uVar17 << 7) + lVar1);
    uVar15 = (ulonglong)(param_5 + uVar17 * -0x20);
    do {
      puVar10 = *pauVar14;
      fVar20 = (float)*(undefined8 *)puVar10;
      puVar11 = *pauVar14;
      auVar9 = *pauVar14;
      pauVar14 = pauVar14 + 1;
      uVar17 = -(uint)(fVar20 < DAT_1467f06f0);
      uVar19 = -(uint)((float)((ulonglong)*(undefined8 *)puVar10 >> 0x20) < fRam00000001467f06f4);
      uVar18 = -(uint)(*(float *)(puVar11 + 8) < fRam00000001467f06f8);
      auVar26._0_4_ = (uint)fVar20 & uVar17;
      auVar26._4_4_ = auVar9._4_4_ & uVar19;
      auVar26._8_4_ = auVar9._8_4_ & uVar18;
      auVar26._12_4_ = 0;
      auVar21._4_4_ = ~uVar19 & (uint)fRam00000001467f06f4;
      auVar21._0_4_ = ~uVar17 & (uint)DAT_1467f06f0;
      auVar21._8_4_ = ~uVar18 & (uint)fRam00000001467f06f8;
      auVar21._12_4_ = ~-(uint)(0.0 < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
      auVar21 = maxps(ZEXT816(0),auVar26 | auVar21);
      fVar20 = auVar21._0_4_ * _DAT_1467f0790 + _DAT_1467f07e0;
      fVar23 = auVar21._4_4_ * fRam00000001467f0794 + fRam00000001467f07e4;
      fVar24 = auVar21._8_4_ * fRam00000001467f0798 + fRam00000001467f07e8;
      fVar25 = fRam00000001467f06fc * fRam00000001467f079c + fRam00000001467f07ec;
      auVar22._0_4_ = (int)fVar20;
      auVar22._4_4_ = (int)fVar23;
      auVar22._8_4_ = (int)fVar24;
      auVar22._12_4_ = (int)fVar25;
      auVar8._4_4_ = -(uint)(2.1474836e+09 <= fVar23);
      auVar8._0_4_ = -(uint)(2.1474836e+09 <= fVar20);
      auVar8._8_4_ = -(uint)(2.1474836e+09 <= fVar24);
      auVar8._12_4_ = -(uint)(2.1474836e+09 <= fVar25);
      auVar21 = packssdw(auVar22 ^ auVar8,auVar22 ^ auVar8);
      sVar4 = auVar21._0_2_;
      sVar5 = auVar21._2_2_;
      sVar6 = auVar21._4_2_;
      sVar7 = auVar21._6_2_;
      *puVar16 = CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar21[6] - (0xff < sVar7),
                          CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar21[4] - (0xff < sVar6),
                                   CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar21[2] -
                                            (0xff < sVar5),
                                            (0 < sVar4) * (sVar4 < 0x100) * auVar21[0] -
                                            (0xff < sVar4))));
      puVar16 = puVar16 + 1;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a6f30 FUN_1437a6f30 body=42 status=ok
// SIG undefined FUN_1437a6f30(void)

undefined8 * FUN_1437a6f30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd380;
  param_2[1] = &DAT_1467fd3c8;
  return param_2;
}



// FUNCTION 1437a6f60 FUN_1437a6f60 body=195 status=ok
// SIG undefined FUN_1437a6f60(void)

undefined4 *
FUN_1437a6f60(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)*param_3;
  puVar4 = (uint *)*param_4;
  if (3 < param_5) {
    uVar5 = (ulonglong)(param_5 >> 2);
    do {
      uVar1 = *puVar6;
      param_5 = param_5 - 4;
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      *puVar4 = uVar1 | 0xff000000;
      puVar6 = puVar6 + 3;
      puVar4[1] = (uVar2 | 0xffff0000) << 8 | uVar1 >> 0x18;
      puVar4[3] = uVar3 >> 8 | 0xff000000;
      puVar4[2] = (uVar3 | 0xffffff00) << 0x10 | uVar2 >> 0x10;
      puVar4 = puVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  for (; param_5 != 0; param_5 = param_5 - 1) {
    *(char *)puVar4 = (char)*puVar6;
    *(undefined1 *)((longlong)puVar4 + 1) = *(undefined1 *)((longlong)puVar6 + 1);
    *(undefined1 *)((longlong)puVar4 + 2) = *(undefined1 *)((longlong)puVar6 + 2);
    *(undefined1 *)((longlong)puVar4 + 3) = 0xff;
    puVar4 = puVar4 + 1;
    puVar6 = (uint *)((longlong)puVar6 + 3);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7030 FUN_1437a7030 body=42 status=ok
// SIG undefined FUN_1437a7030(void)

undefined8 * FUN_1437a7030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd358;
  param_2[1] = &DAT_1467fd37c;
  return param_2;
}



// FUNCTION 1437a7060 FUN_1437a7060 body=300 status=ok
// SIG undefined FUN_1437a7060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1437a7060(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
             int param_5,undefined4 param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [15];
  undefined1 auVar3 [14];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  unkuint9 Var14;
  undefined1 auVar15 [11];
  undefined1 auVar16 [13];
  undefined1 auVar17 [14];
  undefined1 auVar18 [13];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  uint6 uVar21;
  undefined1 *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char cVar27;
  uint uVar28;
  ulonglong uVar29;
  float *pfVar30;
  undefined1 (*pauVar31) [16];
  ulonglong uVar32;
  ushort uVar33;
  uint uVar34;
  
  uVar28 = FPakFile::IsPakKeepFullDirectory(param_6);
  pauVar31 = (undefined1 (*) [16])*param_3;
  pfVar30 = (float *)*param_4;
  uVar32 = (ulonglong)(param_5 * (uVar28 >> 3));
  cVar27 = vraudio::IsAligned(pauVar31);
  if (((cVar27 != '\0') &&
      (cVar27 = vraudio::IsAligned(pfVar30), fVar26 = fRam00000001467f088c,
      fVar25 = fRam00000001467f0888, fVar24 = fRam00000001467f0884, fVar23 = _DAT_1467f0880,
      cVar27 != '\0')) && (0xf < (uint)uVar32)) {
    uVar29 = (uVar32 & 0xffffffff) >> 4;
    do {
      auVar1 = *pauVar31;
      uVar32 = (ulonglong)((int)uVar32 - 0x10);
      pauVar31 = pauVar31 + 1;
      auVar2[0xd] = 0;
      auVar2._0_13_ = auVar1._0_13_;
      auVar2[0xe] = auVar1[7];
      auVar4[0xc] = auVar1[6];
      auVar4._0_12_ = auVar1._0_12_;
      auVar4._13_2_ = auVar2._13_2_;
      auVar5[0xb] = 0;
      auVar5._0_11_ = auVar1._0_11_;
      auVar5._12_3_ = auVar4._12_3_;
      uVar28 = auVar5._11_4_;
      auVar9[10] = auVar1[5];
      auVar9._0_10_ = auVar1._0_10_;
      auVar9._11_4_ = uVar28;
      auVar10[9] = 0;
      auVar10._0_9_ = auVar1._0_9_;
      auVar10._10_5_ = auVar9._10_5_;
      auVar11[8] = auVar1[4];
      auVar11._0_8_ = auVar1._0_8_;
      auVar11._9_6_ = auVar10._9_6_;
      auVar13._7_8_ = 0;
      auVar13._0_7_ = auVar11._8_7_;
      Var14 = CONCAT81(SUB158(auVar13 << 0x40,7),auVar1[3]);
      auVar19._9_6_ = 0;
      auVar19._0_9_ = Var14;
      auVar15._1_10_ = SUB1510(auVar19 << 0x30,5);
      auVar15[0] = auVar1[2];
      auVar20._11_4_ = 0;
      auVar20._0_11_ = auVar15;
      auVar16._1_12_ = SUB1512(auVar20 << 0x20,3);
      auVar16[0] = auVar1[1];
      uVar33 = CONCAT11(0,auVar1[0]);
      auVar12._2_13_ = auVar16;
      auVar12._0_2_ = uVar33;
      uVar34 = CONCAT13(0,CONCAT12(auVar1[9],(ushort)auVar1[8]));
      auVar3._10_2_ = 0;
      auVar3._0_10_ = auVar12._0_10_;
      auVar3._12_2_ = (short)Var14;
      uVar21 = CONCAT42(auVar3._10_4_,auVar15._0_2_);
      auVar17._6_8_ = 0;
      auVar17._0_6_ = uVar21;
      *pfVar30 = (float)uVar33 * fVar23;
      pfVar30[1] = (float)(int)CONCAT82(SUB148(auVar17 << 0x40,6),auVar16._0_2_) * fVar24;
      pfVar30[2] = (float)(int)uVar21 * fVar25;
      pfVar30[3] = (float)(auVar3._10_4_ >> 0x10) * fVar26;
      pfVar30[4] = (float)auVar11._8_2_ * fVar23;
      pfVar30[5] = (float)auVar9._10_2_ * fVar24;
      pfVar30[6] = (float)(uVar28 >> 8 & 0xffff) * fVar25;
      pfVar30[7] = (float)(uVar28 >> 0x18) * fVar26;
      auVar6[0xc] = auVar1[0xb];
      auVar6._0_12_ = ZEXT112(auVar1[0xc]) << 0x40;
      auVar7._10_3_ = auVar6._10_3_;
      auVar7._0_10_ = (unkuint10)auVar1[10] << 0x40;
      auVar18._5_8_ = 0;
      auVar18._0_5_ = auVar7._8_5_;
      auVar8[4] = auVar1[9];
      auVar8._0_4_ = uVar34;
      auVar8[5] = 0;
      auVar8._6_7_ = SUB137(auVar18 << 0x40,6);
      pfVar30[8] = (float)(uVar34 & 0xffff) * fVar23;
      pfVar30[9] = (float)auVar8._4_4_ * fVar24;
      pfVar30[10] = (float)auVar7._8_4_ * fVar25;
      pfVar30[0xb] = (float)(uint3)(auVar6._10_3_ >> 0x10) * fVar26;
      pfVar30[0xc] = (float)auVar1[0xc] * fVar23;
      pfVar30[0xd] = (float)auVar1[0xd] * fVar24;
      pfVar30[0xe] = (float)auVar1[0xe] * fVar25;
      pfVar30[0xf] = (float)auVar1[0xf] * fVar26;
      pfVar30 = pfVar30 + 0x10;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  uVar28 = (uint)uVar32;
  while (uVar28 != 0) {
    puVar22 = *pauVar31;
    pauVar31 = (undefined1 (*) [16])(*pauVar31 + 1);
    *pfVar30 = (float)(byte)*puVar22 * 0.003921569;
    uVar28 = (int)uVar32 - 1;
    uVar32 = (ulonglong)uVar28;
    pfVar30 = pfVar30 + 1;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7190 FUN_1437a7190 body=42 status=ok
// SIG undefined FUN_1437a7190(void)

undefined8 * FUN_1437a7190(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd4b0;
  param_2[1] = &DAT_1467fd4d4;
  return param_2;
}



// FUNCTION 1437a71c0 FUN_1437a71c0 body=198 status=ok
// SIG undefined FUN_1437a71c0(void)

undefined4 *
FUN_1437a71c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
             int param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  uVar2 = FPakFile::IsPakKeepFullDirectory(param_6);
  uVar3 = FPakFile::IsPakKeepFullDirectory(param_7);
  puVar7 = (undefined4 *)*param_3;
  lVar6 = *param_4;
  uVar1 = uVar2 >> 5;
  if (param_5 != 0) {
    do {
      if (uVar1 != 0) {
        puVar4 = puVar7;
        uVar5 = (ulonglong)uVar1;
        do {
          *(undefined4 *)((lVar6 - (longlong)puVar7) + (longlong)puVar4) = *puVar4;
          puVar4 = puVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (-1 < (int)(-uVar1 + 2)) {
        puVar4 = (undefined4 *)(lVar6 + (ulonglong)uVar1 * 4);
        for (uVar5 = (ulonglong)(-uVar1 + 3); uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      *(undefined4 *)(lVar6 + 0xc) = 0x3f800000;
      puVar7 = (undefined4 *)((longlong)puVar7 + (ulonglong)(uVar2 >> 3));
      lVar6 = lVar6 + (ulonglong)(uVar3 >> 3);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7290 FUN_1437a7290 body=42 status=ok
// SIG undefined FUN_1437a7290(void)

undefined8 * FUN_1437a7290(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd4d8;
  param_2[1] = &DAT_1467fd4f0;
  return param_2;
}



// FUNCTION 1437a72c0 FUN_1437a72c0 body=176 status=ok
// SIG undefined FUN_1437a72c0(void)

undefined4 *
FUN_1437a72c0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,int param_5
             ,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FPakFile::IsPakKeepFullDirectory(param_6);
  uVar1 = uVar1 >> 3;
  uVar2 = FPakFile::IsPakKeepFullDirectory(param_7);
  lVar4 = *param_3;
  lVar3 = *param_4;
  if (param_5 != 0) {
    do {
      FUN_14370c700(lVar3,lVar4,(ulonglong)uVar1);
      FUN_14370c720((ulonglong)uVar1 + lVar3,0,3 - uVar1);
      *(undefined1 *)(lVar3 + 3) = 0xff;
      lVar4 = lVar4 + (ulonglong)uVar1;
      lVar3 = lVar3 + (ulonglong)(uVar2 >> 3);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7370 FUN_1437a7370 body=42 status=ok
// SIG undefined FUN_1437a7370(void)

undefined8 * FUN_1437a7370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd3c8;
  param_2[1] = &DAT_1467fd3ec;
  return param_2;
}



// FUNCTION 1437a73a0 FUN_1437a73a0 body=124 status=ok
// SIG undefined FUN_1437a73a0(void)

undefined4 *
FUN_1437a73a0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
             int param_5,undefined4 param_6)

{
  ushort uVar1;
  ushort *puVar2;
  float *pfVar3;
  uint uVar4;
  
  uVar4 = FPakFile::IsPakKeepFullDirectory(param_6);
  puVar2 = (ushort *)*param_3;
  pfVar3 = (float *)*param_4;
  for (param_5 = (uVar4 >> 4) * param_5; param_5 != 0; param_5 = param_5 + -1) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    *pfVar3 = (float)uVar1 * 1.5259022e-05;
    pfVar3 = pfVar3 + 1;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7420 FUN_1437a7420 body=42 status=ok
// SIG undefined FUN_1437a7420(void)

undefined8 * FUN_1437a7420(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd3f0;
  param_2[1] = &DAT_1467fd3fc;
  return param_2;
}



// FUNCTION 1437a7450 FUN_1437a7450 body=42 status=ok
// SIG undefined FUN_1437a7450(void)

undefined8 * FUN_1437a7450(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd4f0;
  param_2[1] = &DAT_1467fd508;
  return param_2;
}



// FUNCTION 1437a7480 FUN_1437a7480 body=1012 status=ok
// SIG undefined FUN_1437a7480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1437a7480(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             uint param_5)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  unkbyte10 Var16;
  undefined1 auVar17 [12];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  char cVar22;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  float *pfVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar41;
  undefined1 auVar43 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined2 uVar55;
  int iVar56;
  float fVar64;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar65 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  float local_e8 [7];
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar32 [16];
  undefined1 auVar37 [16];
  undefined1 auVar44 [16];
  undefined1 auVar42 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar51 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined6 uVar57;
  undefined8 uVar58;
  undefined1 auVar60 [12];
  undefined1 auVar59 [12];
  undefined1 auVar61 [14];
  undefined1 auVar63 [16];
  undefined1 auVar62 [16];
  
  pauVar26 = (undefined1 (*) [16])*param_3;
  pfVar27 = (float *)*param_4;
  cVar22 = vraudio::IsAligned(pauVar26);
  if (((cVar22 != '\0') &&
      (cVar22 = vraudio::IsAligned(pfVar27), fVar21 = fRam00000001467f088c,
      fVar20 = fRam00000001467f0888, fVar19 = fRam00000001467f0884, fVar18 = _DAT_1467f0880,
      cVar22 != '\0')) && (3 < param_5)) {
    uVar6 = CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ^
            CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)));
    uVar7 = CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ^
            CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)));
    uVar8 = CONCAT13(unaff_XMM6_Bl,CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ^
            CONCAT13(unaff_XMM6_Bl,CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi)));
    uVar9 = CONCAT13(unaff_XMM6_Bp,CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ^
            CONCAT13(unaff_XMM6_Bp,CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm)));
    uVar24 = (ulonglong)(param_5 >> 2);
    do {
      auVar53 = *pauVar26;
      pfVar23 = local_e8;
      lVar25 = 3;
      uVar55 = CONCAT11((char)uVar8,auVar53[8]);
      uVar28 = CONCAT13((char)(uVar8 >> 8),CONCAT12(auVar53[9],uVar55));
      uVar57 = CONCAT15((char)(uVar8 >> 0x10),CONCAT14(auVar53[10],uVar28));
      uVar58 = CONCAT17((char)(uVar8 >> 0x18),CONCAT16(auVar53[0xb],uVar57));
      auVar59._0_10_ = CONCAT19((char)uVar9,CONCAT18(auVar53[0xc],uVar58));
      auVar59[10] = auVar53[0xd];
      auVar59[0xb] = (char)(uVar9 >> 8);
      auVar61[0xc] = auVar53[0xe];
      auVar61._0_12_ = auVar59;
      auVar61[0xd] = (char)(uVar9 >> 0x10);
      auVar62[0xe] = auVar53[0xf];
      auVar62._0_14_ = auVar61;
      auVar62[0xf] = (char)(uVar9 >> 0x18);
      auVar50._0_14_ = auVar53._0_14_;
      auVar50[0xe] = auVar53[7];
      auVar50[0xf] = (char)(uVar7 >> 0x18);
      auVar49._14_2_ = auVar50._14_2_;
      auVar49._0_13_ = auVar53._0_13_;
      auVar49[0xd] = (char)(uVar7 >> 0x10);
      auVar48._13_3_ = auVar49._13_3_;
      auVar48._0_12_ = auVar53._0_12_;
      auVar48[0xc] = auVar53[6];
      auVar47._12_4_ = auVar48._12_4_;
      auVar47._0_11_ = auVar53._0_11_;
      auVar47[0xb] = (char)(uVar7 >> 8);
      auVar46._11_5_ = auVar47._11_5_;
      auVar46._0_10_ = auVar53._0_10_;
      auVar46[10] = auVar53[5];
      auVar45._10_6_ = auVar46._10_6_;
      auVar45._0_9_ = auVar53._0_9_;
      auVar45[9] = (char)uVar7;
      auVar44._9_7_ = auVar45._9_7_;
      auVar44._0_8_ = auVar53._0_8_;
      auVar44[8] = auVar53[4];
      Var16 = CONCAT91(CONCAT81(auVar44._8_8_,(char)(uVar6 >> 0x18)),auVar53[3]);
      auVar15._2_10_ = Var16;
      auVar15[1] = (char)(uVar6 >> 0x10);
      auVar15[0] = auVar53[2];
      auVar14._2_12_ = auVar15;
      auVar14[1] = (char)(uVar6 >> 8);
      auVar14[0] = auVar53[1];
      auVar43._0_2_ = CONCAT11((char)uVar6,auVar53[0]);
      auVar43._2_14_ = auVar14;
      iVar41 = CONCAT22((short)uVar8,auVar44._8_2_);
      uVar4 = (undefined2)(uVar8 >> 0x10);
      auVar42._0_8_ = CONCAT26(uVar4,CONCAT24(auVar46._10_2_,iVar41));
      auVar42._8_2_ = auVar48._12_2_;
      auVar42._10_2_ = (short)uVar9;
      auVar51._12_2_ = auVar49._14_2_;
      auVar51._0_12_ = auVar42;
      uVar5 = (undefined2)(uVar9 >> 0x10);
      auVar51._14_2_ = uVar5;
      uVar3 = (undefined2)(uVar7 >> 0x10);
      auVar32._0_12_ = auVar43._0_12_;
      auVar32._12_2_ = (short)Var16;
      auVar32._14_2_ = uVar3;
      auVar31._12_4_ = auVar32._12_4_;
      auVar31._0_10_ = auVar43._0_10_;
      auVar31._10_2_ = (short)uVar7;
      auVar53._10_6_ = auVar31._10_6_;
      auVar53._0_8_ = auVar43._0_8_;
      auVar53._8_2_ = auVar15._0_2_;
      uVar2 = (undefined2)(uVar6 >> 0x10);
      auVar17._4_8_ = auVar53._8_8_;
      auVar17._2_2_ = uVar2;
      auVar17._0_2_ = auVar14._0_2_;
      iVar56 = CONCAT22((short)uVar8,(short)((unkuint10)auVar59._0_10_ >> 0x40));
      auVar60._0_8_ = CONCAT26(uVar4,CONCAT24(auVar59._10_2_,iVar56));
      auVar60._8_2_ = auVar61._12_2_;
      auVar60._10_2_ = (short)uVar9;
      auVar63._12_2_ = auVar62._14_2_;
      auVar63._0_12_ = auVar60;
      auVar63._14_2_ = uVar5;
      auVar37._12_2_ = (short)((ulonglong)uVar58 >> 0x30);
      auVar37._0_12_ = auVar59;
      auVar37._14_2_ = uVar3;
      auVar36._12_4_ = auVar37._12_4_;
      auVar36._10_2_ = (short)uVar7;
      auVar36._0_10_ = auVar59._0_10_;
      auVar35._10_6_ = auVar36._10_6_;
      auVar35._8_2_ = (short)((uint6)uVar57 >> 0x20);
      auVar35._0_8_ = uVar58;
      auVar34._8_8_ = auVar35._8_8_;
      auVar34._6_2_ = uVar2;
      auVar34._0_6_ = uVar57;
      auVar33._6_10_ = auVar34._6_10_;
      auVar33._4_2_ = (short)((uint)uVar28 >> 0x10);
      auVar33._0_4_ = uVar28;
      local_e8[0] = (float)CONCAT22((short)uVar6,auVar43._0_2_) * fVar18;
      local_e8[1] = (float)iVar41 * fVar18;
      local_e8[2] = (float)CONCAT22((short)uVar6,uVar55) * fVar18;
      local_e8[3] = (float)iVar56 * fVar18;
      local_c8 = (float)auVar53._8_4_ * fVar20;
      fStack_c4 = (float)auVar42._8_4_ * fVar20;
      fStack_c0 = (float)auVar35._8_4_ * fVar20;
      fStack_bc = (float)auVar60._8_4_ * fVar20;
      local_e8[4] = (float)auVar17._0_4_ * fVar19;
      local_e8[5] = (float)(int)((ulonglong)auVar42._0_8_ >> 0x20) * fVar19;
      local_e8[6] = (float)auVar33._4_4_ * fVar19;
      fStack_cc = (float)(int)((ulonglong)auVar60._0_8_ >> 0x20) * fVar19;
      local_b8 = (float)auVar31._12_4_ * fVar21;
      fStack_b4 = (float)auVar51._12_4_ * fVar21;
      fStack_b0 = (float)auVar36._12_4_ * fVar21;
      fStack_ac = (float)auVar63._12_4_ * fVar21;
      do {
        fVar10 = *pfVar23;
        fVar11 = pfVar23[1];
        fVar12 = pfVar23[2];
        fVar13 = pfVar23[3];
        fVar64 = fVar10 + 0.055;
        fVar66 = fVar11 + 0.055;
        fVar67 = fVar12 + 0.055;
        fVar68 = fVar13 + 0.055;
        auVar65._0_4_ = fVar64 * fVar64 * fVar64 * fVar64;
        auVar65._4_4_ = fVar66 * fVar66 * fVar66 * fVar66;
        auVar65._8_4_ = fVar67 * fVar67 * fVar67 * fVar67;
        auVar65._12_4_ = fVar68 * fVar68 * fVar68 * fVar68;
        auVar52._0_4_ = (float)(int)(fVar64 * 3.6116227e+09) * 0.8;
        auVar52._4_4_ = (float)(int)(fVar66 * 3.6116227e+09) * 0.8;
        auVar52._8_4_ = (float)(int)(fVar67 * 3.6116227e+09) * 0.8;
        auVar52._12_4_ = (float)(int)(fVar68 * 3.6116227e+09) * 0.8;
        fVar64 = (float)((int)auVar52._0_4_ ^ -(uint)(2.1474836e+09 <= auVar52._0_4_));
        fVar66 = (float)((int)auVar52._4_4_ ^ -(uint)(2.1474836e+09 <= auVar52._4_4_));
        fVar67 = (float)((int)auVar52._8_4_ ^ -(uint)(2.1474836e+09 <= auVar52._8_4_));
        fVar68 = (float)((int)auVar52._12_4_ ^ -(uint)(2.1474836e+09 <= auVar52._12_4_));
        auVar38._0_4_ = fVar64 * fVar64 * fVar64 * fVar64;
        auVar38._4_4_ = fVar66 * fVar66 * fVar66 * fVar66;
        auVar38._8_4_ = fVar67 * fVar67 * fVar67 * fVar67;
        auVar38._12_4_ = fVar68 * fVar68 * fVar68 * fVar68;
        auVar53 = rcpps(auVar52,auVar38);
        auVar54._0_4_ = auVar53._0_4_ * auVar65._0_4_;
        auVar54._4_4_ = auVar53._4_4_ * auVar65._4_4_;
        auVar54._8_4_ = auVar53._8_4_ * auVar65._8_4_;
        auVar54._12_4_ = auVar53._12_4_ * auVar65._12_4_;
        fVar64 = fVar64 * _DAT_1467f0720 + auVar54._0_4_;
        fVar66 = fVar66 * fRam00000001467f0724 + auVar54._4_4_;
        fVar67 = fVar67 * fRam00000001467f0728 + auVar54._8_4_;
        fVar68 = fVar68 * fRam00000001467f072c + auVar54._12_4_;
        auVar39._0_4_ = fVar64 * fVar64 * fVar64 * fVar64;
        auVar39._4_4_ = fVar66 * fVar66 * fVar66 * fVar66;
        auVar39._8_4_ = fVar67 * fVar67 * fVar67 * fVar67;
        auVar39._12_4_ = fVar68 * fVar68 * fVar68 * fVar68;
        auVar53 = rcpps(auVar54,auVar39);
        fVar64 = fVar64 * 0.00128 + auVar53._0_4_ * auVar65._0_4_;
        fVar66 = fVar66 * 0.00128 + auVar53._4_4_ * auVar65._4_4_;
        fVar67 = fVar67 * 0.00128 + auVar53._8_4_ * auVar65._8_4_;
        fVar68 = fVar68 * 0.00128 + auVar53._12_4_ * auVar65._12_4_;
        auVar40._0_4_ = fVar64 * fVar64 * fVar64 * fVar64;
        auVar40._4_4_ = fVar66 * fVar66 * fVar66 * fVar66;
        auVar40._8_4_ = fVar67 * fVar67 * fVar67 * fVar67;
        auVar40._12_4_ = fVar68 * fVar68 * fVar68 * fVar68;
        auVar53 = divps(auVar65,auVar40);
        fVar64 = fVar64 * 1.2207031e+11 + auVar53._0_4_;
        fVar66 = fVar66 * 1.2207031e+11 + auVar53._4_4_;
        fVar67 = fVar67 * 1.2207031e+11 + auVar53._8_4_;
        fVar68 = fVar68 * 1.2207031e+11 + auVar53._12_4_;
        *pfVar23 = (float)(~-(uint)(fVar10 < 0.04045) &
                           (uint)(fVar64 * fVar64 * fVar64 * 4.834638e-28) |
                          (uint)(fVar10 * 0.07739938) & -(uint)(fVar10 < 0.04045));
        pfVar23[1] = (float)(~-(uint)(fVar11 < 0.04045) &
                             (uint)(fVar66 * fVar66 * fVar66 * 4.834638e-28) |
                            (uint)(fVar11 * 0.07739938) & -(uint)(fVar11 < 0.04045));
        pfVar23[2] = (float)(~-(uint)(fVar12 < 0.04045) &
                             (uint)(fVar67 * fVar67 * fVar67 * 4.834638e-28) |
                            (uint)(fVar12 * 0.07739938) & -(uint)(fVar12 < 0.04045));
        pfVar23[3] = (float)(~-(uint)(fVar13 < 0.04045) &
                             (uint)(fVar68 * fVar68 * fVar68 * 4.834638e-28) |
                            (uint)(fVar13 * 0.07739938) & -(uint)(fVar13 < 0.04045));
        pfVar23 = pfVar23 + 4;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      pauVar26 = pauVar26 + 1;
      param_5 = param_5 - 4;
      *pfVar27 = local_e8[0];
      pfVar27[1] = local_e8[4];
      pfVar27[2] = local_c8;
      pfVar27[3] = local_b8;
      pfVar27[4] = local_e8[1];
      pfVar27[5] = local_e8[5];
      pfVar27[6] = fStack_c4;
      pfVar27[7] = fStack_b4;
      pfVar27[8] = local_e8[2];
      pfVar27[9] = local_e8[6];
      pfVar27[10] = fStack_c0;
      pfVar27[0xb] = fStack_b0;
      pfVar27[0xc] = local_e8[3];
      pfVar27[0xd] = fStack_cc;
      pfVar27[0xe] = fStack_bc;
      pfVar27[0xf] = fStack_ac;
      pfVar27 = pfVar27 + 0x10;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  for (; param_5 != 0; param_5 = param_5 - 1) {
    uVar28 = FUN_14375fb60((float)(byte)(*pauVar26)[0] * 0.003921569);
    uVar29 = FUN_14375fb60((float)(byte)(*pauVar26)[1] * 0.003921569);
    uVar30 = FUN_14375fb60((float)(byte)(*pauVar26)[2] * 0.003921569);
    bVar1 = (*pauVar26)[3];
    pauVar26 = (undefined1 (*) [16])(*pauVar26 + 4);
    *(ulonglong *)pfVar27 = CONCAT44(uVar29,uVar28);
    *(ulonglong *)(pfVar27 + 2) = CONCAT44((float)bVar1 * 0.003921569,uVar30);
    pfVar27 = pfVar27 + 4;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7880 FUN_1437a7880 body=586 status=ok
// SIG undefined FUN_1437a7880(void)

undefined4 *
FUN_1437a7880(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             int param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint local_38 [4];
  undefined8 local_28;
  uint local_20;
  
  uVar2 = FPakFile::IsPakKeepFullDirectory(param_6);
  uVar3 = FPakFile::IsPakKeepFullDirectory(param_7);
  param_3 = (undefined8 *)*param_3;
  puVar5 = (uint *)*param_4;
  if (param_5 != 0) {
    do {
      uVar1 = *(uint *)(param_3 + 1);
      lVar8 = 2;
      local_28 = *param_3;
      local_20 = uVar1;
      lVar6 = 0;
      do {
        uVar7 = *(uint *)((longlong)&local_28 + lVar6);
        uVar4 = uVar7 & 0x7fffffff;
        if ((uVar7 & 0x7f800000) == 0x7f800000) {
          *(undefined4 *)((longlong)local_38 + lVar6) = 0x7c0;
          if ((uVar7 & 0x7fffff) == 0) {
            if ((uVar7 & 0x80000000) != 0) {
              *(undefined4 *)((longlong)local_38 + lVar6) = 0;
            }
          }
          else {
            *(uint *)((longlong)local_38 + lVar6) =
                 (((uVar4 >> 6 | uVar4) >> 5 | uVar4) >> 6 | uVar4) & 0x3f | 0x7c0;
          }
        }
        else if ((uVar7 & 0x80000000) == 0) {
          if (uVar4 < 0x477e0001) {
            if (uVar4 < 0x38800000) {
              uVar4 = (uVar7 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar4 >> 0x17) & 0x1f);
            }
            else {
              uVar4 = uVar4 + 0xc8000000;
            }
            *(uint *)((longlong)local_38 + lVar6) =
                 uVar4 + 0xffff + (uVar4 >> 0x11 & 1) >> 0x11 & 0x7ff;
          }
          else {
            *(undefined4 *)((longlong)local_38 + lVar6) = 0x7bf;
          }
        }
        else {
          *(undefined4 *)((longlong)local_38 + lVar6) = 0;
        }
        lVar6 = lVar6 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar7 = uVar1 & 0x7fffffff;
      if ((uVar1 & 0x7f800000) == 0x7f800000) {
        if ((uVar1 & 0x7fffff) == 0) {
          uVar4 = 0x3e0;
          if ((uVar1 & 0x80000000) != 0) {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = (((uVar7 >> 5 | uVar7) >> 10 | uVar7) >> 3 | uVar7) & 0x1f | 0x3e0;
        }
      }
      else {
        uVar4 = 0;
        if ((uVar1 & 0x80000000) == 0) {
          if (uVar7 < 0x477c0001) {
            if (uVar7 < 0x38800000) {
              uVar7 = (uVar1 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar7 >> 0x17) & 0x1f);
            }
            else {
              uVar7 = uVar7 + 0xc8000000;
            }
            uVar4 = (uVar7 >> 0x12 & 1) + 0x1ffff + uVar7 >> 0x12 & 0x3ff;
          }
          else {
            uVar4 = 0x3df;
          }
        }
      }
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)(uVar2 >> 3));
      *puVar5 = (local_38[1] & 0x7ff | uVar4 << 0xb) << 0xb | local_38[0] & 0x7ff;
      puVar5 = (uint *)((longlong)puVar5 + (ulonglong)(uVar3 >> 3));
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7ad0 FUN_1437a7ad0 body=42 status=ok
// SIG undefined FUN_1437a7ad0(void)

undefined8 * FUN_1437a7ad0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd400;
  param_2[1] = &DAT_1467fd424;
  return param_2;
}



// FUNCTION 1437a7b00 FUN_1437a7b00 body=603 status=ok
// SIG undefined FUN_1437a7b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1437a7b00(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             int param_5,undefined8 param_6,undefined4 param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  char *pcVar32;
  float *pfVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  uVar28 = FPakFile::IsPakKeepFullDirectory(param_7);
  pfVar33 = (float *)*param_3;
  pcVar32 = (char *)*param_4;
  uVar34 = (ulonglong)(param_5 * (uVar28 >> 3));
  lVar30 = vraudio::IsAligned(pfVar33);
  if ((((char)lVar30 != '\0') &&
      (lVar30 = vraudio::IsAligned(pcVar32), auVar21 = _DAT_143f39af0, (char)lVar30 != '\0')) &&
     (0xf < (uint)uVar34)) {
    uVar31 = (uVar34 & 0xffffffff) >> 4;
    do {
      auVar35._4_4_ = -(uint)!NAN(pfVar33[1]) & (uint)pfVar33[1];
      auVar35._0_4_ = -(uint)!NAN(*pfVar33) & (uint)*pfVar33;
      auVar35._8_4_ = -(uint)!NAN(pfVar33[2]) & (uint)pfVar33[2];
      auVar35._12_4_ = -(uint)!NAN(pfVar33[3]) & (uint)pfVar33[3];
      auVar35 = minps(auVar21,auVar35);
      uVar34 = (ulonglong)((int)uVar34 - 0x10);
      auVar37 = maxps(ZEXT816(0),auVar35);
      auVar38._4_4_ = -(uint)!NAN(pfVar33[5]) & (uint)pfVar33[5];
      auVar38._0_4_ = -(uint)!NAN(pfVar33[4]) & (uint)pfVar33[4];
      auVar38._8_4_ = -(uint)!NAN(pfVar33[6]) & (uint)pfVar33[6];
      auVar38._12_4_ = -(uint)!NAN(pfVar33[7]) & (uint)pfVar33[7];
      auVar35 = minps(auVar21,auVar38);
      auVar40._0_4_ = (int)(auVar37._0_4_ * 255.0 + 0.5);
      auVar40._4_4_ = (int)(auVar37._4_4_ * 255.0 + 0.5);
      auVar40._8_4_ = (int)(auVar37._8_4_ * 255.0 + 0.5);
      auVar40._12_4_ = (int)(auVar37._12_4_ * 255.0 + 0.5);
      auVar35 = maxps(ZEXT816(0),auVar35);
      auVar41._0_4_ = (int)(auVar35._0_4_ * 255.0 + 0.5);
      auVar41._4_4_ = (int)(auVar35._4_4_ * 255.0 + 0.5);
      auVar41._8_4_ = (int)(auVar35._8_4_ * 255.0 + 0.5);
      auVar41._12_4_ = (int)(auVar35._12_4_ * 255.0 + 0.5);
      auVar41 = packssdw(auVar40,auVar41);
      auVar37._4_4_ = -(uint)!NAN(pfVar33[9]) & (uint)pfVar33[9];
      auVar37._0_4_ = -(uint)!NAN(pfVar33[8]) & (uint)pfVar33[8];
      auVar37._8_4_ = -(uint)!NAN(pfVar33[10]) & (uint)pfVar33[10];
      auVar37._12_4_ = -(uint)!NAN(pfVar33[0xb]) & (uint)pfVar33[0xb];
      auVar35 = minps(auVar21,auVar37);
      pfVar1 = pfVar33 + 0xc;
      pfVar22 = pfVar33 + 0xd;
      pfVar23 = pfVar33 + 0xe;
      pfVar24 = pfVar33 + 0xf;
      auVar38 = maxps(ZEXT816(0),auVar35);
      pfVar2 = pfVar33 + 0xc;
      pfVar25 = pfVar33 + 0xd;
      pfVar26 = pfVar33 + 0xe;
      pfVar27 = pfVar33 + 0xf;
      pfVar33 = pfVar33 + 0x10;
      auVar20._4_4_ = -(uint)!NAN(*pfVar22) & (uint)*pfVar25;
      auVar20._0_4_ = -(uint)!NAN(*pfVar1) & (uint)*pfVar2;
      auVar20._8_4_ = -(uint)!NAN(*pfVar23) & (uint)*pfVar26;
      auVar20._12_4_ = -(uint)!NAN(*pfVar24) & (uint)*pfVar27;
      auVar35 = minps(auVar21,auVar20);
      auVar39._0_4_ = (int)(auVar38._0_4_ * 255.0 + 0.5);
      auVar39._4_4_ = (int)(auVar38._4_4_ * 255.0 + 0.5);
      auVar39._8_4_ = (int)(auVar38._8_4_ * 255.0 + 0.5);
      auVar39._12_4_ = (int)(auVar38._12_4_ * 255.0 + 0.5);
      auVar35 = maxps(ZEXT816(0),auVar35);
      auVar36._0_4_ = (int)(auVar35._0_4_ * 255.0 + 0.5);
      auVar36._4_4_ = (int)(auVar35._4_4_ * 255.0 + 0.5);
      auVar36._8_4_ = (int)(auVar35._8_4_ * 255.0 + 0.5);
      auVar36._12_4_ = (int)(auVar35._12_4_ * 255.0 + 0.5);
      auVar35 = packssdw(auVar39,auVar36);
      sVar4 = auVar41._0_2_;
      sVar5 = auVar41._2_2_;
      sVar6 = auVar41._4_2_;
      sVar7 = auVar41._6_2_;
      sVar8 = auVar41._8_2_;
      sVar9 = auVar41._10_2_;
      sVar10 = auVar41._12_2_;
      sVar11 = auVar41._14_2_;
      sVar12 = auVar35._0_2_;
      sVar13 = auVar35._2_2_;
      sVar14 = auVar35._4_2_;
      sVar15 = auVar35._6_2_;
      sVar16 = auVar35._8_2_;
      sVar17 = auVar35._10_2_;
      sVar18 = auVar35._12_2_;
      sVar19 = auVar35._14_2_;
      *pcVar32 = (0 < sVar4) * (sVar4 < 0x100) * auVar41[0] - (0xff < sVar4);
      pcVar32[1] = (0 < sVar5) * (sVar5 < 0x100) * auVar41[2] - (0xff < sVar5);
      pcVar32[2] = (0 < sVar6) * (sVar6 < 0x100) * auVar41[4] - (0xff < sVar6);
      pcVar32[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar41[6] - (0xff < sVar7);
      pcVar32[4] = (0 < sVar8) * (sVar8 < 0x100) * auVar41[8] - (0xff < sVar8);
      pcVar32[5] = (0 < sVar9) * (sVar9 < 0x100) * auVar41[10] - (0xff < sVar9);
      pcVar32[6] = (0 < sVar10) * (sVar10 < 0x100) * auVar41[0xc] - (0xff < sVar10);
      pcVar32[7] = (0 < sVar11) * (sVar11 < 0x100) * auVar41[0xe] - (0xff < sVar11);
      pcVar32[8] = (0 < sVar12) * (sVar12 < 0x100) * auVar35[0] - (0xff < sVar12);
      pcVar32[9] = (0 < sVar13) * (sVar13 < 0x100) * auVar35[2] - (0xff < sVar13);
      pcVar32[10] = (0 < sVar14) * (sVar14 < 0x100) * auVar35[4] - (0xff < sVar14);
      pcVar32[0xb] = (0 < sVar15) * (sVar15 < 0x100) * auVar35[6] - (0xff < sVar15);
      pcVar32[0xc] = (0 < sVar16) * (sVar16 < 0x100) * auVar35[8] - (0xff < sVar16);
      pcVar32[0xd] = (0 < sVar17) * (sVar17 < 0x100) * auVar35[10] - (0xff < sVar17);
      pcVar32[0xe] = (0 < sVar18) * (sVar18 < 0x100) * auVar35[0xc] - (0xff < sVar18);
      pcVar32[0xf] = (0 < sVar19) * (sVar19 < 0x100) * auVar35[0xe] - (0xff < sVar19);
      pcVar32 = pcVar32 + 0x10;
      uVar31 = uVar31 - 1;
    } while (uVar31 != 0);
    lVar30 = 0;
  }
  uVar28 = (uint)uVar34;
  while (uVar28 != 0) {
    fVar3 = *pfVar33;
    auVar21._4_4_ = -(uint)!NAN(fVar3);
    auVar21._0_4_ = -(uint)!NAN(fVar3);
    auVar21._8_4_ = -(uint)!NAN(fVar3);
    auVar21._12_4_ = -(uint)!NAN(fVar3);
    iVar29 = movmskps((int)lVar30,auVar21);
    if (iVar29 == 0) {
      *pcVar32 = '\0';
      lVar30 = 0;
    }
    else {
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      lVar30 = (longlong)(fVar3 * 255.0 + 0.5);
      *pcVar32 = (char)lVar30;
    }
    pfVar33 = pfVar33 + 1;
    pcVar32 = pcVar32 + 1;
    uVar28 = (int)uVar34 - 1;
    uVar34 = (ulonglong)uVar28;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7d60 FUN_1437a7d60 body=42 status=ok
// SIG undefined FUN_1437a7d60(void)

undefined8 * FUN_1437a7d60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd428;
  param_2[1] = &DAT_1467fd44c;
  return param_2;
}



// FUNCTION 1437a7d90 FUN_1437a7d90 body=210 status=ok
// SIG undefined FUN_1437a7d90(void)

undefined4 *
FUN_1437a7d90(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             int param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  float *pfVar5;
  float fVar6;
  
  uVar3 = FPakFile::IsPakKeepFullDirectory(param_7);
  pfVar5 = (float *)*param_3;
  puVar4 = (undefined2 *)*param_4;
  for (param_5 = ((uint)(uVar3 >> 4) & 0xfffffff) * param_5; param_5 != 0; param_5 = param_5 + -1) {
    fVar6 = *pfVar5;
    auVar1._4_4_ = -(uint)!NAN(fVar6);
    auVar1._0_4_ = -(uint)!NAN(fVar6);
    auVar1._8_4_ = -(uint)!NAN(fVar6);
    auVar1._12_4_ = -(uint)!NAN(fVar6);
    iVar2 = movmskps((int)uVar3,auVar1);
    if (iVar2 == 0) {
      *puVar4 = 0;
      uVar3 = 0;
    }
    else {
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      uVar3 = (ulonglong)(fVar6 * 65535.0 + 0.5);
      *puVar4 = (short)uVar3;
    }
    pfVar5 = pfVar5 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a7e70 FUN_1437a7e70 body=42 status=ok
// SIG undefined FUN_1437a7e70(void)

undefined8 * FUN_1437a7e70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd450;
  param_2[1] = &DAT_1467fd45c;
  return param_2;
}



// FUNCTION 1437a7ea0 FUN_1437a7ea0 body=574 status=ok
// SIG undefined FUN_1437a7ea0(void)

undefined4 *
FUN_1437a7ea0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             int param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  float fVar4;
  
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined1 *)*param_4;
  if (param_5 == 0) {
    *param_2 = 0;
  }
  else {
    do {
      fVar4 = (float)FUN_14375fc60(*puVar2);
      fVar4 = fVar4 * 255.0 + 0.5;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (255.0 <= fVar4) {
        fVar4 = 255.0;
      }
      *puVar3 = (char)(longlong)fVar4;
      fVar4 = (float)FUN_14375fc60(puVar2[1]);
      fVar4 = fVar4 * 255.0 + 0.5;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (255.0 <= fVar4) {
        fVar4 = 255.0;
      }
      puVar3[1] = (char)(longlong)fVar4;
      fVar4 = (float)FUN_14375fc60(puVar2[2]);
      fVar4 = fVar4 * 255.0 + 0.5;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (255.0 <= fVar4) {
        fVar4 = 255.0;
      }
      puVar3[2] = (char)(longlong)fVar4;
      pfVar1 = (float *)(puVar2 + 3);
      puVar2 = puVar2 + 4;
      fVar4 = *pfVar1 * 255.0 + 0.5;
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      if (255.0 <= fVar4) {
        fVar4 = 255.0;
      }
      puVar3[3] = (char)(longlong)fVar4;
      puVar3 = puVar3 + 4;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 1437a80e0 FUN_1437a80e0 body=42 status=ok
// SIG undefined FUN_1437a80e0(void)

undefined8 * FUN_1437a80e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd460;
  param_2[1] = &DAT_1467fd484;
  return param_2;
}



// FUNCTION 1437a8110 FUN_1437a8110 body=121 status=ok
// SIG undefined FUN_1437a8110(void)

undefined4 *
FUN_1437a8110(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
             int param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = FPakFile::IsPakKeepFullDirectory(param_6);
  puVar1 = (undefined4 *)*param_3;
  lVar3 = *param_4;
  for (param_5 = (uVar2 >> 5) * param_5; param_5 != 0; param_5 = param_5 + -1) {
    FUN_14375f8a0(lVar3,*puVar1);
    lVar3 = lVar3 + 2;
    puVar1 = puVar1 + 1;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a8190 FUN_1437a8190 body=77 status=ok
// SIG undefined FUN_1437a8190(void)

void FUN_1437a8190(longlong param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  local_18 = *(undefined4 *)(param_1 + 0x20);
  local_48 = (undefined4)*(undefined8 *)(param_1 + 8);
  uStack_44 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = local_18;
  FUN_1437a8fd0(param_1 + 0x10,&local_28);
  return;
}



// FUNCTION 1437a81e0 FUN_1437a81e0 body=42 status=ok
// SIG undefined FUN_1437a81e0(void)

undefined8 * FUN_1437a81e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd488;
  param_2[1] = &DAT_1467fd4ac;
  return param_2;
}



// FUNCTION 1437a8210 FUN_1437a8210 body=77 status=ok
// SIG undefined FUN_1437a8210(void)

void FUN_1437a8210(longlong param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  local_18 = *(undefined4 *)(param_1 + 0x20);
  local_48 = (undefined4)*(undefined8 *)(param_1 + 8);
  uStack_44 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = local_18;
  FUN_1437a8d20(param_1 + 0x10,&local_28);
  return;
}



// FUNCTION 1437a8260 FUN_1437a8260 body=121 status=ok
// SIG undefined FUN_1437a8260(void)

undefined4 *
FUN_1437a8260(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,int param_5
             ,undefined8 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar2 = FPakFile::IsPakKeepFullDirectory(param_7);
  lVar3 = *param_3;
  puVar1 = (undefined4 *)*param_4;
  for (param_5 = (uVar2 >> 5) * param_5; param_5 != 0; param_5 = param_5 + -1) {
    uVar4 = FUN_14375f960(lVar3);
    lVar3 = lVar3 + 2;
    *puVar1 = uVar4;
    puVar1 = puVar1 + 1;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a82e0 FUN_1437a82e0 body=77 status=ok
// SIG undefined FUN_1437a82e0(void)

void FUN_1437a82e0(longlong param_1,longlong param_2)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  local_18 = *(undefined4 *)(param_1 + 0x20);
  local_48 = (undefined4)*(undefined8 *)(param_1 + 8);
  uStack_44 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = local_18;
  FUN_1437a8e60(param_1 + 0x10,&local_28);
  return;
}



// FUNCTION 1437a8330 FUN_1437a8330 body=141 status=ok
// SIG undefined FUN_1437a8330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437a8330(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b89b3c) {
    _Init_thread_header(&DAT_146b89b3c);
    if (DAT_146b89b3c == -1) {
      _DAT_146b89b30 = 0x14;
      _DAT_146b89b34 = 0x5e;
      _Init_thread_footer(&DAT_146b89b3c);
    }
  }
  *param_2 = &DAT_146b89b30;
  param_2[1] = &DAT_146b89b3c;
  return param_2;
}



// FUNCTION 1437a83c0 FUN_1437a83c0 body=569 status=ok
// SIG undefined FUN_1437a83c0(void)

undefined4 *
FUN_1437a83c0(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             uint param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined **local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined8 uStack_344;
  undefined4 uStack_33c;
  undefined **local_338;
  undefined1 *puStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined *local_308 [9];
  undefined1 *local_2c0;
  undefined4 local_2b8;
  uint local_2b4;
  undefined1 local_2b0 [320];
  undefined1 *local_170;
  undefined4 local_168;
  uint local_164;
  undefined1 local_160 [328];
  
  local_368 = *param_3;
  uStack_360 = *param_4;
  if (((param_5 < 6) || (*(char *)(DAT_146bcc4f0 + 0x20) != '\0')) ||
     (plVar1 = *(longlong **)(DAT_146bcc4f0 + 0x18), plVar1 == (longlong *)0x0)) {
    local_2b4 = 0x80000005;
    local_2c0 = local_2b0;
    local_2b8 = 0;
    local_170 = local_160;
    local_168 = 0;
    local_164 = 0x80000005;
    FUN_143df9d10(local_308,1,param_5);
    local_358 = local_308;
    uStack_350 = 0;
    uStack_344 = 1;
    local_348 = 1;
    puStack_330 = (undefined1 *)0x0;
    local_328 = 1;
    uStack_324 = 1;
    uStack_320 = 0;
    uStack_31c = uStack_33c;
    local_338 = local_358;
    FUN_1437a8fd0(&local_368,&local_338);
    uVar3 = FUN_143703a50();
    local_168 = 0;
    if (-1 < (int)local_164) {
      FUN_143702e10(uVar3,local_170,0x40,local_164 & 0x3fffffff);
    }
    local_170 = (undefined1 *)0x0;
    local_164 = 0x80000000;
    uVar3 = FUN_143703a50();
    local_2b8 = 0;
    if (-1 < (int)local_2b4) {
      FUN_143702e10(uVar3,local_2c0,0x40,local_2b4 & 0x3fffffff);
    }
  }
  else {
    iVar2 = (**(code **)(*plVar1 + 0x80))(plVar1);
    local_2b4 = 0x80000005;
    local_2b8 = 0;
    local_168 = 0;
    uVar4 = iVar2 + 1;
    local_164 = 0x80000005;
    local_2c0 = local_2b0;
    local_170 = local_160;
    FUN_143df9d10(local_308,uVar4,param_5);
    local_318 = 1;
    local_338 = hkConcurrencyInternals::BatchProcessorEx<<lambda_48c38cabb6193027008ab17be3a7e7a5>_>
                ::vftable;
    puStack_330 = (undefined1 *)local_308;
    local_328 = (undefined4)local_368;
    uStack_324 = local_368._4_4_;
    uStack_320 = (undefined4)uStack_360;
    uStack_31c = uStack_360._4_4_;
    if ((int)uVar4 < (int)param_5) {
      param_5 = uVar4;
    }
    uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_338,param_5,1,0x40);
    (**(code **)(*plVar1 + 0x68))(plVar1,uVar3);
    local_338 = hkTask::vftable;
    FUN_1437967d0(local_308);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a8600 FUN_1437a8600 body=147 status=ok
// SIG undefined FUN_1437a8600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437a8600(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b89b58) {
    _Init_thread_header(&DAT_146b89b58);
    if (DAT_146b89b58 == -1) {
      _DAT_146b89b40 = 0x5500000014;
      uRam0000000146b89b48 = 0xa00000000;
      _DAT_146b89b50 = 0x52;
      _Init_thread_footer(&DAT_146b89b58);
    }
  }
  *param_2 = &DAT_146b89b40;
  param_2[1] = &DAT_146b89b58;
  return param_2;
}



// FUNCTION 1437a86a0 FUN_1437a86a0 body=953 status=ok
// SIG undefined FUN_1437a86a0(void)

undefined4 *
FUN_1437a86a0(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,int param_5
             ,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined **local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 uStack_354;
  undefined4 uStack_34c;
  undefined **local_348;
  undefined1 *puStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined *local_318 [9];
  undefined1 *local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined1 local_2c0 [320];
  undefined1 *local_180;
  undefined4 local_178;
  uint local_174;
  undefined1 local_170 [328];
  
  lVar1 = *param_4;
  lVar2 = *param_3;
  uVar4 = FPakFile::IsPakKeepFullDirectory(param_7);
  uVar4 = param_5 * (uVar4 >> 3);
  uVar10 = uVar4 >> 5;
  local_378 = lVar2;
  uStack_370 = lVar1;
  if (((uVar10 < 6) || (*(char *)(DAT_146bcc4f0 + 0x20) != '\0')) ||
     (plVar3 = *(longlong **)(DAT_146bcc4f0 + 0x18), plVar3 == (longlong *)0x0)) {
    local_2c4 = 0x80000005;
    local_2d0 = local_2c0;
    local_2c8 = 0;
    local_180 = local_170;
    local_178 = 0;
    local_174 = 0x80000005;
    FUN_143df9d10(local_318,1,uVar10);
    local_368 = local_318;
    uStack_360 = 0;
    uStack_354 = 1;
    local_358 = 1;
    puStack_340 = (undefined1 *)0x0;
    local_338 = 1;
    uStack_334 = 1;
    uStack_330 = 0;
    uStack_32c = uStack_34c;
    local_348 = local_368;
    FUN_1437a8d20(&local_378,&local_348);
    uVar6 = FUN_143703a50();
    local_178 = 0;
    if (-1 < (int)local_174) {
      FUN_143702e10(uVar6,local_180,0x40,local_174 & 0x3fffffff);
    }
    local_180 = (undefined1 *)0x0;
    local_174 = 0x80000000;
    uVar6 = FUN_143703a50();
    local_2c8 = 0;
    if (-1 < (int)local_2c4) {
      FUN_143702e10(uVar6,local_2d0,0x40,local_2c4 & 0x3fffffff);
    }
  }
  else {
    iVar5 = (**(code **)(*plVar3 + 0x80))(plVar3);
    local_2c4 = 0x80000005;
    local_2c8 = 0;
    local_178 = 0;
    uVar9 = iVar5 + 1;
    local_174 = 0x80000005;
    local_2d0 = local_2c0;
    local_180 = local_170;
    FUN_143df9d10(local_318,uVar9,uVar10);
    local_328 = 1;
    local_348 = hkConcurrencyInternals::BatchProcessorEx<<lambda_142e95b70f9987ded50c90beb3c2a83f>_>
                ::vftable;
    puStack_340 = (undefined1 *)local_318;
    local_338 = (undefined4)local_378;
    uStack_334 = local_378._4_4_;
    uStack_330 = (undefined4)uStack_370;
    uStack_32c = uStack_370._4_4_;
    uVar11 = uVar10;
    if ((int)uVar9 < (int)uVar10) {
      uVar11 = uVar9;
    }
    uVar6 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_348,uVar11,1,0x40);
    (**(code **)(*plVar3 + 0x68))(plVar3,uVar6);
    local_348 = hkTask::vftable;
    FUN_1437967d0(local_318);
  }
  uVar11 = uVar10 * 0x20;
  uVar13 = (ulonglong)uVar11;
  if (uVar11 < uVar4) {
    if (3 < uVar4 + uVar10 * -0x20) {
      pfVar8 = (float *)(lVar2 + 8 + uVar13 * 4);
      puVar7 = (undefined1 *)(uVar13 + 1 + lVar1);
      uVar10 = ((uVar4 + uVar10 * -0x20) - 4 >> 2) + 1;
      uVar12 = (ulonglong)uVar10;
      uVar13 = (ulonglong)(uVar11 + uVar10 * 4);
      do {
        fVar14 = pfVar8[-2] * 255.0 + 0.5;
        if (0.0 <= fVar14) {
          if (255.0 < fVar14) {
            fVar14 = 255.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        puVar7[-1] = (char)(longlong)fVar14;
        fVar14 = pfVar8[-1] * 255.0 + 0.5;
        if (0.0 <= fVar14) {
          if (255.0 < fVar14) {
            fVar14 = 255.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        *puVar7 = (char)(longlong)fVar14;
        fVar14 = *pfVar8 * 255.0 + 0.5;
        if (0.0 <= fVar14) {
          if (255.0 < fVar14) {
            fVar14 = 255.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        puVar7[1] = (char)(longlong)fVar14;
        fVar14 = pfVar8[1] * 255.0 + 0.5;
        if (0.0 <= fVar14) {
          if (255.0 < fVar14) {
            fVar14 = 255.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        pfVar8 = pfVar8 + 4;
        puVar7[2] = (char)(longlong)fVar14;
        puVar7 = puVar7 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if ((uint)uVar13 < uVar4) {
      pfVar8 = (float *)(uVar13 * 4 + lVar2);
      puVar7 = (undefined1 *)(uVar13 + lVar1);
      uVar13 = (ulonglong)(uVar4 - (uint)uVar13);
      do {
        fVar14 = *pfVar8 * 255.0 + 0.5;
        if (0.0 <= fVar14) {
          if (255.0 < fVar14) {
            fVar14 = 255.0;
          }
        }
        else {
          fVar14 = 0.0;
        }
        pfVar8 = pfVar8 + 1;
        *puVar7 = (char)(longlong)fVar14;
        puVar7 = puVar7 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a8a60 FUN_1437a8a60 body=42 status=ok
// SIG undefined FUN_1437a8a60(void)

undefined8 * FUN_1437a8a60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &DAT_1467fd310;
  param_2[1] = &DAT_1467fd358;
  return param_2;
}



// FUNCTION 1437a8a90 FUN_1437a8a90 body=299 status=ok
// SIG undefined FUN_1437a8a90(void)

undefined4 *
FUN_1437a8a90(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,
             uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint *puVar15;
  longlong lVar16;
  
  puVar14 = (uint *)*param_3;
  puVar15 = (uint *)*param_4;
  puVar13 = param_2;
  cVar11 = vraudio::IsAligned(puVar14);
  if (((cVar11 != '\0') && (cVar11 = vraudio::IsAligned(puVar15), cVar11 != '\0')) && (7 < param_5))
  {
    uVar12 = (ulonglong)(param_5 >> 3);
    do {
      uVar10 = *puVar14;
      uVar3 = puVar14[1];
      uVar4 = puVar14[2];
      uVar5 = puVar14[3];
      param_5 = param_5 - 8;
      uVar6 = puVar14[4];
      uVar7 = puVar14[5];
      uVar8 = puVar14[6];
      uVar9 = puVar14[7];
      puVar14 = puVar14 + 8;
      *puVar15 = (uVar10 << 0x10 | uVar10 >> 0x10) & 0xff00ff | uVar10 & 0xff00ff00;
      puVar15[1] = (uVar3 << 0x10 | uVar3 >> 0x10) & 0xff00ff | uVar3 & 0xff00ff00;
      puVar15[2] = (uVar4 << 0x10 | uVar4 >> 0x10) & 0xff00ff | uVar4 & 0xff00ff00;
      puVar15[3] = (uVar5 << 0x10 | uVar5 >> 0x10) & 0xff00ff | uVar5 & 0xff00ff00;
      puVar15[4] = (uVar6 << 0x10 | uVar6 >> 0x10) & 0xff00ff | uVar6 & 0xff00ff00;
      puVar15[5] = (uVar7 << 0x10 | uVar7 >> 0x10) & 0xff00ff | uVar7 & 0xff00ff00;
      puVar15[6] = (uVar8 << 0x10 | uVar8 >> 0x10) & 0xff00ff | uVar8 & 0xff00ff00;
      puVar15[7] = (uVar9 << 0x10 | uVar9 >> 0x10) & 0xff00ff | uVar9 & 0xff00ff00;
      puVar15 = puVar15 + 8;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (param_5 == 0) {
    *puVar13 = 0;
    return param_2;
  }
  lVar16 = (longlong)puVar15 - (longlong)puVar14;
  do {
    uVar1 = *(undefined1 *)((longlong)puVar14 + 1);
    uVar10 = *puVar14;
    uVar2 = *(undefined1 *)((longlong)puVar14 + 3);
    *(undefined1 *)(lVar16 + (longlong)puVar14) = *(undefined1 *)((longlong)puVar14 + 2);
    *(undefined1 *)(lVar16 + 1 + (longlong)puVar14) = uVar1;
    *(char *)(lVar16 + 2 + (longlong)puVar14) = (char)uVar10;
    *(undefined1 *)(lVar16 + 3 + (longlong)puVar14) = uVar2;
    puVar14 = puVar14 + 1;
    param_5 = param_5 - 1;
  } while (param_5 != 0);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437a8bc0 FUN_1437a8bc0 body=219 status=ok
// SIG undefined FUN_1437a8bc0(void)

longlong FUN_1437a8bc0(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                      int param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar4 = FUN_1437a0110();
  uVar7 = *(uint *)(param_1 + 0x10) >> (param_2 & 0x1f);
  uVar6 = *(uint *)(param_1 + 0xc) >> (param_2 & 0x1f);
  uVar5 = 1;
  if (1 < uVar7) {
    uVar5 = uVar7;
  }
  uVar7 = 1;
  if (1 < uVar6) {
    uVar7 = uVar6;
  }
  iVar1 = FUN_1437a69a0(*(undefined4 *)(param_1 + 0x18),uVar7,uVar5);
  uVar6 = FPakFile::IsPakValidatePruning(*(undefined4 *)(param_1 + 0x18));
  iVar2 = FPakFile::IsPakDelayPruning(*(undefined4 *)(param_1 + 0x18));
  iVar3 = FPakFile::IsPakKeepFullDirectory(*(undefined4 *)(param_1 + 0x18));
  uVar7 = *(uint *)(param_1 + 0xc) >> (param_2 & 0x1f);
  uVar5 = 1;
  if (1 < uVar7) {
    uVar5 = uVar7;
  }
  return (ulonglong)(uint)(iVar1 * param_7) +
         (ulonglong)
         (((int)(CONCAT44(0 >> (param_2 & 0x1f),uVar5) / (ulonglong)uVar6) * param_6 + param_5) *
          iVar3 * iVar2 * uVar6 >> 3) + lVar4;
}



// FUNCTION 1437a8ca0 FUN_1437a8ca0 body=39 status=ok
// SIG undefined FUN_1437a8ca0(void)

undefined8 * FUN_1437a8ca0(undefined8 *param_1)

{
  param_1[1] = DAT_146b89b60;
  DAT_146b89b60 = param_1;
  *param_1 = hkImageConversionStep::vftable;
  DAT_146b89a00 = 0;
  return param_1;
}



// FUNCTION 1437a8cd0 FUN_1437a8cd0 body=66 status=ok
// SIG undefined FUN_1437a8cd0(void)

void FUN_1437a8cd0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = hkImageConversionStep::vftable;
  DAT_146b89a00 = 0;
  plVar3 = &DAT_146b89b60;
  while( true ) {
    lVar1 = *plVar3;
    if (lVar1 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)(lVar1 + 8);
    }
    if (plVar2 == param_1 + 1) break;
    plVar3 = (longlong *)(lVar1 + 8);
  }
  *plVar3 = param_1[1];
  return;
}



// FUNCTION 1437a8d20 FUN_1437a8d20 body=319 status=ok
// SIG undefined FUN_1437a8d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a8d20(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar21 [16];
  int local_res10 [2];
  int local_res18 [2];
  
  puVar1 = (uint *)((longlong)param_2 + 0xc);
  puVar2 = (uint *)(param_2 + 1);
  if (*(uint *)((longlong)param_2 + 0xc) <= *puVar2) {
    FUN_143df9c40(*param_2,local_res10,*(undefined4 *)(param_2 + 3),param_2 + 2,puVar2,puVar1);
    if (local_res10[0] < 0) {
      return;
    }
    if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x14)) {
      *(uint *)(param_2 + 2) = *(uint *)((longlong)param_2 + 0x14);
    }
  }
  while( true ) {
    do {
      uVar10 = *puVar2;
      lVar9 = 8;
      *puVar2 = uVar10 + 1;
      lVar8 = (longlong)(int)(uVar10 << 5);
      do {
        pfVar3 = (float *)(*param_1 + lVar8 * 4);
        uVar10 = -(uint)(*pfVar3 < DAT_1467f06f0);
        uVar11 = -(uint)(pfVar3[1] < fRam00000001467f06f4);
        uVar12 = -(uint)(pfVar3[2] < fRam00000001467f06f8);
        uVar13 = -(uint)(pfVar3[3] < fRam00000001467f06fc);
        auVar21._0_4_ = (uint)*pfVar3 & uVar10;
        auVar21._4_4_ = (uint)pfVar3[1] & uVar11;
        auVar21._8_4_ = (uint)pfVar3[2] & uVar12;
        auVar21._12_4_ = (uint)pfVar3[3] & uVar13;
        auVar14._0_4_ = ~uVar10 & (uint)DAT_1467f06f0;
        auVar14._4_4_ = ~uVar11 & (uint)fRam00000001467f06f4;
        auVar14._8_4_ = ~uVar12 & (uint)fRam00000001467f06f8;
        auVar14._12_4_ = ~uVar13 & (uint)fRam00000001467f06fc;
        auVar17 = maxps(ZEXT816(0),auVar21 | auVar14);
        fVar16 = auVar17._0_4_ * _DAT_1467f0790 + _DAT_1467f07e0;
        fVar18 = auVar17._4_4_ * fRam00000001467f0794 + fRam00000001467f07e4;
        fVar19 = auVar17._8_4_ * fRam00000001467f0798 + fRam00000001467f07e8;
        fVar20 = auVar17._12_4_ * fRam00000001467f079c + fRam00000001467f07ec;
        auVar15._0_4_ = (int)fVar16;
        auVar15._4_4_ = (int)fVar18;
        auVar15._8_4_ = (int)fVar19;
        auVar15._12_4_ = (int)fVar20;
        auVar17._4_4_ = -(uint)(2.1474836e+09 <= fVar18);
        auVar17._0_4_ = -(uint)(2.1474836e+09 <= fVar16);
        auVar17._8_4_ = -(uint)(2.1474836e+09 <= fVar19);
        auVar17._12_4_ = -(uint)(2.1474836e+09 <= fVar20);
        auVar17 = packssdw(auVar15 ^ auVar17,auVar15 ^ auVar17);
        sVar4 = auVar17._0_2_;
        sVar5 = auVar17._2_2_;
        sVar6 = auVar17._4_2_;
        sVar7 = auVar17._6_2_;
        *(uint *)(lVar8 + param_1[1]) =
             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar17[6] - (0xff < sVar7),
                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar17[4] - (0xff < sVar6),
                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar17[2] - (0xff < sVar5),
                                        (0 < sVar4) * (sVar4 < 0x100) * auVar17[0] - (0xff < sVar4))
                              ));
        lVar8 = lVar8 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    } while (*puVar2 < *puVar1);
    FUN_143df9c40(*param_2,local_res18,*(undefined4 *)(param_2 + 3),param_2 + 2,puVar2,puVar1);
    if (local_res18[0] < 0) break;
    if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x14)) {
      *(uint *)(param_2 + 2) = *(uint *)((longlong)param_2 + 0x14);
    }
  }
  return;
}



// FUNCTION 1437a8e60 FUN_1437a8e60 body=362 status=ok
// SIG undefined FUN_1437a8e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a8e60(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  int local_res10 [2];
  int local_res18 [2];
  
  puVar1 = (uint *)((longlong)param_2 + 0xc);
  puVar2 = (uint *)(param_2 + 1);
  if (*(uint *)((longlong)param_2 + 0xc) <= *puVar2) {
    FUN_143df9c40(*param_2,local_res10,*(undefined4 *)(param_2 + 3),param_2 + 2,puVar2,puVar1);
    if (local_res10[0] < 0) {
      return;
    }
    if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x14)) {
      *(uint *)(param_2 + 2) = *(uint *)((longlong)param_2 + 0x14);
    }
  }
  while( true ) {
    do {
      uVar12 = *puVar2;
      *puVar2 = uVar12 + 1;
      lVar11 = (longlong)(int)(uVar12 << 7);
      lVar9 = 0x20;
      lVar10 = (longlong)(int)(uVar12 * 0x60) << 2;
      do {
        uVar3 = *(undefined8 *)(lVar10 + *param_1);
        fVar18 = (float)uVar3;
        fVar19 = (float)((ulonglong)uVar3 >> 0x20);
        fVar15 = *(float *)(lVar10 + 8 + *param_1);
        lVar10 = lVar10 + 0xc;
        uVar12 = -(uint)(fVar18 < DAT_1467f06f0);
        uVar13 = -(uint)(fVar19 < fRam00000001467f06f4);
        uVar14 = -(uint)(fVar15 < fRam00000001467f06f8);
        auVar21._0_4_ = (uint)fVar18 & uVar12;
        auVar21._4_4_ = (uint)fVar19 & uVar13;
        auVar21._8_4_ = (uint)fVar15 & uVar14;
        auVar21._12_4_ = 0;
        auVar16._4_4_ = ~uVar13 & (uint)fRam00000001467f06f4;
        auVar16._0_4_ = ~uVar12 & (uint)DAT_1467f06f0;
        auVar16._8_4_ = ~uVar14 & (uint)fRam00000001467f06f8;
        auVar16._12_4_ = ~-(uint)(0.0 < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
        auVar16 = maxps(ZEXT816(0),auVar21 | auVar16);
        fVar15 = auVar16._0_4_ * _DAT_1467f0790 + _DAT_1467f07e0;
        fVar18 = auVar16._4_4_ * fRam00000001467f0794 + fRam00000001467f07e4;
        fVar19 = auVar16._8_4_ * fRam00000001467f0798 + fRam00000001467f07e8;
        fVar20 = fRam00000001467f06fc * fRam00000001467f079c + fRam00000001467f07ec;
        auVar17._0_4_ = (int)fVar15;
        auVar17._4_4_ = (int)fVar18;
        auVar17._8_4_ = (int)fVar19;
        auVar17._12_4_ = (int)fVar20;
        auVar8._4_4_ = -(uint)(2.1474836e+09 <= fVar18);
        auVar8._0_4_ = -(uint)(2.1474836e+09 <= fVar15);
        auVar8._8_4_ = -(uint)(2.1474836e+09 <= fVar19);
        auVar8._12_4_ = -(uint)(2.1474836e+09 <= fVar20);
        auVar16 = packssdw(auVar17 ^ auVar8,auVar17 ^ auVar8);
        sVar4 = auVar16._0_2_;
        sVar5 = auVar16._2_2_;
        sVar6 = auVar16._4_2_;
        sVar7 = auVar16._6_2_;
        *(uint *)(lVar11 + param_1[1]) =
             CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar16[6] - (0xff < sVar7),
                      CONCAT12((0 < sVar6) * (sVar6 < 0x100) * auVar16[4] - (0xff < sVar6),
                               CONCAT11((0 < sVar5) * (sVar5 < 0x100) * auVar16[2] - (0xff < sVar5),
                                        (0 < sVar4) * (sVar4 < 0x100) * auVar16[0] - (0xff < sVar4))
                              ));
        lVar11 = lVar11 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    } while (*puVar2 < *puVar1);
    FUN_143df9c40(*param_2,local_res18,*(undefined4 *)(param_2 + 3),param_2 + 2,puVar2,puVar1);
    if (local_res18[0] < 0) break;
    if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x14)) {
      *(uint *)(param_2 + 2) = *(uint *)((longlong)param_2 + 0x14);
    }
  }
  return;
}



// FUNCTION 1437a8fd0 FUN_1437a8fd0 body=325 status=ok
// SIG undefined FUN_1437a8fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437a8fd0(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  int local_res10 [2];
  int local_res18 [2];
  
  puVar1 = (uint *)((longlong)param_2 + 0xc);
  puVar2 = (uint *)(param_2 + 1);
  if (*(uint *)((longlong)param_2 + 0xc) <= *puVar2) {
    FUN_143df9c40(*param_2,local_res10,*(undefined4 *)(param_2 + 3),param_2 + 2,puVar2,puVar1);
    if (local_res10[0] < 0) {
      return;
    }
    if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x14)) {
      *(uint *)(param_2 + 2) = *(uint *)((longlong)param_2 + 0x14);
    }
  }
  while( true ) {
    do {
      uVar7 = *puVar2;
      *puVar2 = uVar7 + 1;
      lVar5 = (longlong)(int)(uVar7 * 3);
      uVar3 = *(undefined8 *)(*param_1 + lVar5 * 4);
      fVar13 = (float)uVar3;
      fVar14 = (float)((ulonglong)uVar3 >> 0x20);
      fVar10 = *(float *)(*param_1 + 8 + lVar5 * 4);
      puVar6 = (undefined1 *)(lVar5 + param_1[1]);
      uVar7 = -(uint)(fVar13 < DAT_1467f06f0);
      uVar8 = -(uint)(fVar14 < fRam00000001467f06f4);
      uVar9 = -(uint)(fVar10 < fRam00000001467f06f8);
      auVar16._0_4_ = (uint)fVar13 & uVar7;
      auVar16._4_4_ = (uint)fVar14 & uVar8;
      auVar16._8_4_ = (uint)fVar10 & uVar9;
      auVar16._12_4_ = 0;
      auVar4._4_4_ = ~uVar8 & (uint)fRam00000001467f06f4;
      auVar4._0_4_ = ~uVar7 & (uint)DAT_1467f06f0;
      auVar4._8_4_ = ~uVar9 & (uint)fRam00000001467f06f8;
      auVar4._12_4_ = ~-(uint)(0.0 < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
      auVar11 = maxps(ZEXT816(0),auVar16 | auVar4);
      fVar10 = auVar11._0_4_ * _DAT_1467f0790 + _DAT_1467f07e0;
      fVar13 = auVar11._4_4_ * fRam00000001467f0794 + fRam00000001467f07e4;
      fVar14 = auVar11._8_4_ * fRam00000001467f0798 + fRam00000001467f07e8;
      fVar15 = auVar11._12_4_ * fRam00000001467f079c + fRam00000001467f07ec;
      auVar12._0_4_ = (int)fVar10;
      auVar12._4_4_ = (int)fVar13;
      auVar12._8_4_ = (int)fVar14;
      auVar12._12_4_ = (int)fVar15;
      auVar11._4_4_ = -(uint)(2.1474836e+09 <= fVar13);
      auVar11._0_4_ = -(uint)(2.1474836e+09 <= fVar10);
      auVar11._8_4_ = -(uint)(2.1474836e+09 <= fVar14);
      auVar11._12_4_ = -(uint)(2.1474836e+09 <= fVar15);
      auVar12 = auVar12 ^ auVar11;
      *puVar6 = auVar12[8];
      puVar6[1] = auVar12[4];
      puVar6[2] = auVar12[0];
    } while (*puVar2 < *puVar1);
    FUN_143df9c40(*param_2,local_res18,*(undefined4 *)(param_2 + 3),param_2 + 2,puVar2,puVar1);
    if (local_res18[0] < 0) break;
    if (*(uint *)(param_2 + 2) < *(uint *)((longlong)param_2 + 0x14)) {
      *(uint *)(param_2 + 2) = *(uint *)((longlong)param_2 + 0x14);
    }
  }
  return;
}



// FUNCTION 1437a9120 FUN_1437a9120 body=99 status=ok
// SIG undefined FUN_1437a9120(void)

undefined8 * FUN_1437a9120(undefined8 *param_1,ulonglong param_2)

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
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x50);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1437a9190 FUN_1437a9190 body=139 status=ok
// SIG undefined FUN_1437a9190(void)

longlong FUN_1437a9190(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  uVar7 = iVar1 * -0x61c8864f;
  uVar6 = iVar2 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar2 * -0x4f000000;
  lVar3 = param_1[2];
  uVar5 = (ulonglong)
          ((uVar7 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar7) & *(uint *)(param_1 + 3));
  iVar4 = *(int *)(lVar3 + 4 + uVar5 * 8);
  if (-1 < iVar4) {
    do {
      if ((*(int *)((longlong)iVar4 * 0x20 + *param_1) == iVar1) &&
         (*(int *)((longlong)iVar4 * 0x20 + 4 + *param_1) == iVar2)) {
        return lVar3 + uVar5 * 8;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1U & *(uint *)(param_1 + 3));
      iVar4 = *(int *)(lVar3 + 4 + uVar5 * 8);
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 1437a9220 FUN_1437a9220 body=134 status=ok
// SIG undefined FUN_1437a9220(void)

uint FUN_1437a9220(longlong *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  if (*(uint *)(param_1 + 1) != 0) {
    do {
      if ((uVar2 != param_3) && (*(int *)(*param_1 + (longlong)(int)uVar2 * 4) == param_2)) {
        if (-1 < (int)uVar2) {
          return uVar2;
        }
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 1));
  }
  uVar3 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar3,param_1,4);
  }
  piVar1 = (int *)(*param_1 + (longlong)(int)param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return (int)param_1[1] - 1;
}



// FUNCTION 1437a92b0 FUN_1437a92b0 body=979 status=ok
// SIG undefined FUN_1437a92b0(void)

undefined8 FUN_1437a92b0(ulonglong param_1,int param_2,char param_3,longlong *param_4,int *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined4 local_res20;
  int local_res24;
  undefined4 uStack_d0;
  undefined8 local_c8;
  uint7 uStack_bf;
  longlong local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 *local_98;
  uint local_90;
  uint local_8c;
  undefined1 local_88 [64];
  undefined8 local_48;
  undefined4 uStack_40;
  int iStack_3c;
  undefined8 local_38;
  byte bStack_30;
  undefined7 uStack_2f;
  
  *(undefined4 *)(param_4 + 1) = 0;
  iVar8 = (int)param_1;
  param_1 = param_1 & 0xffffffff;
  *param_5 = 0;
  if (iVar8 == param_2) {
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_4,0x20);
    }
    puVar10 = (undefined8 *)((longlong)(int)param_4[1] * 0x20 + *param_4);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = CONCAT44(param_2,iVar8);
      puVar10[2] = 0;
      puVar10[3] = CONCAT71(uStack_bf,param_3);
    }
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
  }
  else {
    local_res24 = param_2;
    if (DAT_146b89a00 == '\0') {
      FUN_1437aaaa0();
    }
    do {
      local_res20 = (undefined4)param_1;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_a8 = 0;
      uStack_a4 = 0x7f7fffee;
      lVar6 = FUN_1437a9190(&DAT_1467fd2f0,&local_res20);
      if (lVar6 == 0) {
        plVar11 = local_b8;
      }
      else {
        plVar11 = (longlong *)(DAT_1467fd2f0 + 8 + (longlong)*(int *)(lVar6 + 4) * 0x20);
      }
      local_48 = *plVar11;
      uVar3 = plVar11[1];
      if (local_48 == 0) {
        return 0x80040200;
      }
      uStack_d0 = (undefined4)uVar3;
      uStack_40 = uStack_d0;
      local_c8._0_1_ = (byte)plVar11[2];
      bStack_30 = (byte)local_c8 & 1;
      param_1 = uVar3 >> 0x20;
      iVar13 = (int)(uVar3 >> 0x20);
      iStack_3c = iVar13;
      uVar5 = FUN_143703a50();
      if (*(uint *)(param_4 + 1) == (*(uint *)((longlong)param_4 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar5,param_4,0x20);
      }
      puVar7 = (undefined4 *)((longlong)(int)param_4[1] * 0x20 + *param_4);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = (undefined4)local_48;
        puVar7[1] = local_48._4_4_;
        puVar7[2] = uStack_40;
        puVar7[3] = iStack_3c;
        *(undefined8 *)(puVar7 + 4) = local_38;
        *(ulonglong *)(puVar7 + 6) = CONCAT71(uStack_2f,bStack_30);
      }
      *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    } while (iVar13 != param_2);
    local_98 = local_88;
    local_90 = 0;
    local_8c = 0x80000010;
    uVar4 = FPakFile::IsPakKeepFullDirectory(param_2);
    uVar5 = FUN_143703a50();
    if (local_90 == (local_8c & 0x3fffffff)) {
      FUN_14370c460(uVar5,&local_98,4);
    }
    if ((undefined4 *)(local_98 + (longlong)(int)local_90 * 4) != (undefined4 *)0x0) {
      *(undefined4 *)(local_98 + (longlong)(int)local_90 * 4) = uVar4;
    }
    local_90 = local_90 + 1;
    iVar13 = (int)param_4[1] + -1;
    lVar6 = (longlong)iVar13;
    if (-1 < iVar13) {
      lVar12 = lVar6 << 5;
      do {
        if (iVar13 == (int)param_4[1] + -1) {
          *(undefined4 *)(*param_4 + 0x14 + lVar12) = 0;
        }
        else {
          *(undefined4 *)(*param_4 + 0x14 + lVar12) = *(undefined4 *)(*param_4 + 0x30 + lVar12);
        }
        if (0 < lVar6) {
          lVar1 = *param_4;
          if (*(char *)(lVar1 + 0x18 + lVar12) == '\0') {
            uVar4 = FPakFile::IsPakKeepFullDirectory(*(undefined4 *)(lVar1 + 8 + lVar12));
            lVar1 = *param_4;
            uVar4 = FUN_1437a9220(&local_98,uVar4,*(undefined4 *)(lVar1 + 0x14 + lVar12));
            *(undefined4 *)(lVar1 + 0x10 + lVar12) = uVar4;
          }
          else {
            *(undefined4 *)(lVar1 + 0x10 + lVar12) = *(undefined4 *)(lVar1 + 0x14 + lVar12);
          }
        }
        iVar13 = iVar13 + -1;
        lVar12 = lVar12 + -0x20;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
    if (param_3 == '\0') {
      *(uint *)(*param_4 + 0x10) = local_90;
    }
    else {
      *(undefined4 *)(*param_4 + 0x10) = 0;
      lVar6 = *param_4;
      iVar13 = *(int *)(lVar6 + 0x10);
      if ((iVar13 == *(int *)(lVar6 + 0x14)) && (*(char *)(lVar6 + 0x18) == '\0')) {
        if ((int)param_4[1] == 1) {
          uVar4 = FPakFile::IsPakKeepFullDirectory(*(undefined4 *)(lVar6 + 8));
          uVar4 = FUN_1437a9220(&local_98,uVar4,*(undefined4 *)(lVar6 + 0x10));
          local_c8 = CONCAT44(uVar4,iVar13);
          *(undefined4 *)(*param_4 + 0x10) = uVar4;
          uVar5 = FUN_143703a50();
          lVar6 = param_4[1];
          uVar9 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
          iVar13 = (int)lVar6 + 1;
          if (((int)uVar9 < iVar13) && ((int)uVar9 < iVar13)) {
            iVar2 = iVar13;
            if (iVar13 < (int)(uVar9 * 2)) {
              iVar2 = uVar9 * 2;
            }
            FUN_14370c310(uVar5,param_4,iVar2,0x20);
          }
          FUN_143732890(*param_4 + 0x20,*param_4,(longlong)(int)lVar6 << 5);
          puVar7 = (undefined4 *)*param_4;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = iVar8;
            puVar7[3] = iVar8;
            *(undefined8 *)(puVar7 + 4) = local_c8;
            *(ulonglong *)(puVar7 + 6) = (ulonglong)uStack_bf << 8;
          }
          *(int *)(param_4 + 1) = iVar13;
        }
        else {
          *(undefined1 *)(lVar6 + 0x38) = 0;
          lVar6 = *param_4;
          uVar4 = FPakFile::IsPakKeepFullDirectory(*(undefined4 *)(lVar6 + 0x28));
          uVar4 = FUN_1437a9220(&local_98,uVar4,*(undefined4 *)(lVar6 + 0x10));
          *(undefined4 *)(lVar6 + 0x30) = uVar4;
          *(undefined4 *)(*param_4 + 0x14) = *(undefined4 *)(*param_4 + 0x30);
        }
      }
    }
    *param_5 = local_90 + -1;
    uVar5 = FUN_143703a50();
    local_90 = 0;
    if (-1 < (int)local_8c) {
      FUN_143702e10(uVar5,local_98,4,local_8c & 0x3fffffff);
    }
  }
  return 0;
}



// FUNCTION 1437a9690 FUN_1437a9690 body=106 status=ok
// SIG undefined FUN_1437a9690(void)

undefined8 FUN_1437a9690(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  DAT_1467fd2f8 = 0;
  if (-1 < (int)DAT_1467fd2fc) {
    FUN_143702e10(uVar1,DAT_1467fd2f0,0x20,DAT_1467fd2fc & 0x3fffffff);
  }
  DAT_1467fd2f0 = 0;
  DAT_1467fd2fc = 0x80000000;
  FUN_143734820(&DAT_1467fd300);
  DAT_146b89a00 = 0;
  return 0;
}



// FUNCTION 1437a9700 FUN_1437a9700 body=526 status=ok
// SIG undefined FUN_1437a9700(void)

undefined8
FUN_1437a9700(undefined1 *param_1,undefined1 *param_2,longlong *param_3,int param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *local_ca8;
  int local_ca0;
  uint local_c9c;
  undefined1 local_c98 [3200];
  
  local_ca8 = local_c98;
  local_ca0 = 0;
  local_c9c = 0x80000010;
  uVar2 = FUN_143703a50();
  if ((int)(local_c9c & 0x3fffffff) < param_4) {
    iVar5 = (local_c9c & 0x3fffffff) * 2;
    iVar1 = param_4;
    if (param_4 < iVar5) {
      iVar1 = iVar5;
    }
    FUN_14370c310(uVar2,&local_ca8,iVar1,200);
  }
  iVar5 = (local_ca0 - param_4) + -1;
  if (-1 < iVar5) {
    puVar6 = local_ca8 + (longlong)iVar5 * 200 + (longlong)param_4 * 200;
    do {
      FUN_1437a01c0(puVar6);
      puVar6 = puVar6 + -200;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  puVar6 = local_ca8 + (longlong)local_ca0 * 200;
  if (0 < param_4 - local_ca0) {
    uVar7 = (ulonglong)(uint)(param_4 - local_ca0);
    do {
      if (puVar6 != (undefined1 *)0x0) {
        FUN_1437a0140(puVar6);
      }
      puVar6 = puVar6 + 200;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar4 = *param_3;
  iVar5 = 0;
  local_ca0 = param_4;
  if (0 < (int)(param_3[1] - lVar4 >> 5)) {
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar8 + 0x14 + lVar4);
      puVar6 = param_2;
      if (iVar1 != 0) {
        puVar6 = local_ca8 + (longlong)(iVar1 + -1) * 200;
      }
      iVar1 = FUN_1437a9a30(*(undefined8 *)(lVar8 + lVar4),param_1,puVar6,
                            *(undefined4 *)(lVar8 + 0xc + lVar4),param_5);
      if (iVar1 < 0) {
        uVar2 = 0x80040200;
        goto LAB_1437a9870;
      }
      lVar4 = *param_3;
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + 0x20;
      param_1 = puVar6;
    } while (iVar5 < (int)(param_3[1] - lVar4 >> 5));
  }
  uVar2 = 0;
LAB_1437a9870:
  uVar3 = FUN_143703a50();
  iVar5 = local_ca0 + -1;
  if (-1 < iVar5) {
    puVar6 = local_ca8 + (longlong)iVar5 * 200;
    do {
      FUN_1437a01c0(puVar6);
      puVar6 = puVar6 + -200;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  local_ca0 = 0;
  if (-1 < (int)local_c9c) {
    FUN_143702e10(uVar3,local_ca8,200,local_c9c & 0x3fffffff);
  }
  return uVar2;
}



// FUNCTION 1437a9910 FUN_1437a9910 body=282 status=ok
// SIG undefined FUN_1437a9910(void)

undefined4 FUN_1437a9910(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_res18 [4];
  undefined1 *local_228;
  undefined1 *puStack_220;
  undefined1 *local_218;
  int local_210;
  uint local_20c;
  undefined1 local_208 [512];
  
  if (*(int *)(param_1 + 0x18) == param_3) {
    if (param_1 != param_2) {
      FUN_1437a0260(param_2,param_1);
    }
    uVar2 = 0;
  }
  else {
    local_218 = local_208;
    local_210 = 0;
    local_20c = 0x80000010;
    local_res18[0] = 0;
    iVar1 = FUN_1437a92b0(*(int *)(param_1 + 0x18),param_3,param_1 == param_2,&local_218,local_res18
                         );
    if (iVar1 < 0) {
      uVar2 = 0x80040200;
    }
    else {
      puStack_220 = local_218 + (longlong)local_210 * 0x20;
      local_228 = local_218;
      uVar2 = FUN_1437a9700(param_1,param_2,&local_228,local_res18[0],param_4);
    }
    uVar3 = FUN_143703a50();
    local_210 = 0;
    if (-1 < (int)local_20c) {
      FUN_143702e10(uVar3,local_218,0x20,local_20c & 0x3fffffff);
    }
  }
  return uVar2;
}



// FUNCTION 1437a9a30 FUN_1437a9a30 body=376 status=ok
// SIG undefined FUN_1437a9a30(void)

ulonglong FUN_1437a9a30(longlong *param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
                       undefined8 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar10;
  undefined8 local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  if (param_1 == (longlong *)0x0) {
    FUN_1437a0260();
    uVar8 = 0;
  }
  else {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    local_28 = *(undefined8 *)(param_2 + 4);
    uVar1 = param_2[6];
    local_20 = param_4;
    FUN_1437a0600(param_3);
    cVar4 = FUN_1437a6b20(uVar1);
    if (cVar4 == '\0') {
      cVar4 = FUN_1437a6b20(param_4);
      if (cVar4 == '\0') {
        uVar2 = *(uint *)(param_3 + 0xb8);
        uVar5 = FPakFile::IsPakKeepFullDirectory(param_4);
        auVar3 = ZEXT416(uVar2) << 3;
        lVar6 = FUN_14057ade0(param_3,SUB168(auVar3 % ZEXT416(uVar5),0));
        lStack_50 = (ulonglong)*(uint *)(param_3 + 0xb8) + lVar6;
        local_58._0_4_ = (undefined4)lVar6;
        local_58._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
        local_48 = (undefined4)local_58;
        uStack_44 = local_58._4_4_;
        local_58 = lVar6;
        lStack_40 = lStack_50;
        local_58 = FUN_14057ade0(param_2);
        lStack_50 = (ulonglong)(uint)param_2[0x2e] + local_58;
        puVar7 = (uint *)(**(code **)(*param_1 + 0x18))
                                   (param_1,local_res8,&local_58,&local_48,
                                    CONCAT44(uVar9,SUB164(auVar3 / ZEXT416(uVar5),0)),
                                    CONCAT44(uVar10,uVar1),param_4);
        uVar8 = (ulonglong)*puVar7;
      }
      else {
        uVar8 = FUN_1437a9bb0(param_2,param_3,uVar1,param_4,param_1,param_5);
      }
    }
    else {
      uVar8 = FUN_1437aa220(param_2,param_3,uVar1,param_4,param_1);
    }
  }
  return uVar8;
}



// FUNCTION 1437a9bb0 FUN_1437a9bb0 body=1639 status=ok
// SIG undefined FUN_1437a9bb0(void)

uint FUN_1437a9bb0(uint *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5,longlong *param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_5e8;
  uint local_5e4;
  uint local_5dc;
  undefined8 local_5c8;
  uint local_5c0;
  undefined4 local_5bc;
  uint local_5b8;
  undefined **local_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined8 uStack_598;
  longlong local_590;
  longlong lStack_588;
  uint local_580;
  uint local_57c;
  undefined4 local_578;
  undefined4 local_574;
  longlong *local_570;
  uint local_568;
  char local_564;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined1 local_538 [8];
  ulonglong local_530;
  undefined8 local_528;
  longlong lStack_520;
  longlong local_518;
  longlong lStack_510;
  undefined8 local_508;
  longlong lStack_500;
  longlong local_4f8;
  longlong lStack_4f0;
  undefined1 local_4e8 [12];
  uint local_4dc;
  uint local_4d8;
  undefined4 local_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [184];
  uint local_400;
  undefined1 local_3e8 [24];
  undefined1 local_3d0 [912];
  
  uStack_550._0_4_ = 0x40;
  uVar22 = 0;
  local_558 = 0;
  local_548 = 0;
  FUN_143710be0(local_3e8,&local_558);
  local_5e4 = 0;
  if (param_1[2] != 0) {
    do {
      local_5e8 = 0;
      if (param_1[1] != 0) {
        do {
          uVar18 = uVar22;
          if (*param_1 != 0) {
            do {
              bVar13 = (byte)uVar18;
              uVar2 = param_1[3] >> (bVar13 & 0x1f);
              uVar19 = 1;
              if (1 < uVar2) {
                uVar19 = uVar2;
              }
              uVar2 = param_1[4] >> (bVar13 & 0x1f);
              local_5c0 = 1;
              if (1 < uVar2) {
                local_5c0 = uVar2;
              }
              uVar16 = *(uint *)(param_2 + 0xc) >> (bVar13 & 0x1f);
              uVar3 = FPakFile::IsPakValidatePruning(*(undefined4 *)(param_2 + 0x18));
              uVar2 = 1;
              if (1 < uVar16) {
                uVar2 = uVar16;
              }
              uVar20 = (uVar2 - 1) / uVar3 + 1;
              uVar16 = *(uint *)(param_2 + 0x10) >> (bVar13 & 0x1f);
              uVar3 = FPakFile::IsPakDelayPruning(*(undefined4 *)(param_2 + 0x18));
              uVar2 = 1;
              if (1 < uVar16) {
                uVar2 = uVar16;
              }
              uVar16 = (uVar2 - 1) / uVar3;
              uVar4 = uVar16 + 1;
              iVar5 = FPakFile::IsPakValidatePruning
                                (param_4,(ulonglong)(uVar2 - 1) % (ulonglong)uVar3);
              iVar6 = FPakFile::IsPakDelayPruning(param_4);
              uVar21 = iVar6 * uVar4;
              uVar3 = param_1[3] >> (bVar13 & 0x1f);
              uVar2 = 1;
              if (1 < uVar3) {
                uVar2 = uVar3;
              }
              local_5bc = FUN_1437a6ad0(param_1[6],uVar2);
              local_5b8 = FPakFile::IsPakKeepFullDirectory(param_3);
              local_5b8 = local_5b8 >> 3;
              uVar3 = FUN_1437a68d0(param_4);
              FUN_1437a0190(local_4e8);
              local_4dc = iVar5 * uVar20;
              local_4d8 = uVar21;
              local_4d0 = param_3;
              FUN_1437a0140(local_4b8);
              FUN_1437a0600(local_4b8,local_4e8);
              local_5dc = 0;
              uVar15 = param_1[5] >> (bVar13 & 0x1f);
              uVar2 = 1;
              if (1 < uVar15) {
                uVar2 = uVar15;
              }
              if (uVar2 != 0) {
                local_530 = (ulonglong)((uVar3 >> 3) * uVar4 * uVar20);
                do {
                  if (uVar21 != 0) {
                    uVar3 = local_5c0 - 1;
                    uVar2 = uVar22;
                    do {
                      uVar15 = uVar3;
                      if (uVar2 < uVar3) {
                        uVar15 = uVar2;
                      }
                      uVar9 = FUN_1437a0050(param_1,uVar18,local_5e8,local_5e4,0,uVar15,0);
                      uVar10 = FUN_1437a0050(local_4b8,0,0,0,0,uVar2,0);
                      FUN_14370c700(uVar10,uVar9,local_5bc);
                      for (uVar17 = uVar19; uVar17 < iVar5 * uVar20; uVar17 = uVar17 + 1) {
                        uVar9 = FUN_1437a0050(param_1,uVar18,local_5e8,local_5e4,uVar19 - 1,uVar15,0
                                             );
                        uVar10 = FUN_1437a0050(local_4b8,0,0,0,uVar17,uVar2,0);
                        FUN_14370c700(uVar10,uVar9,local_5b8);
                      }
                      uVar2 = uVar2 + 1;
                    } while (uVar2 < uVar21);
                  }
                  local_590 = 0;
                  local_5a8 = _anon_8C47B87F::CompressTask::vftable;
                  lStack_588 = 0;
                  lVar11 = FUN_14057ade0(local_4b8);
                  lStack_520 = (ulonglong)local_400 + lVar11;
                  local_528._0_4_ = (undefined4)lVar11;
                  local_528._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
                  local_5a0 = (undefined4)local_528;
                  uStack_59c = local_528._4_4_;
                  local_528 = lVar11;
                  uStack_598 = lStack_520;
                  local_590 = FUN_1437a8bc0(param_2,uVar18,local_5e8,local_5e4,0,0,local_5dc);
                  lStack_588 = local_590 + local_530;
                  local_570 = param_5;
                  local_564 = '\0';
                  local_580 = uVar20;
                  local_57c = uVar4;
                  local_578 = param_3;
                  local_574 = param_4;
                  local_518 = local_590;
                  lStack_510 = lStack_588;
                  if (param_6 == (longlong *)0x0) {
LAB_1437aa080:
                    uVar2 = uVar4;
                    if (local_57c < uVar4) {
                      uVar2 = local_57c;
                    }
                    local_568 = uVar4;
                    iVar6 = FPakFile::IsPakDelayPruning(local_574);
                    iVar7 = FPakFile::IsPakValidatePruning(local_574);
                    iVar8 = FUN_1437a6ad0(local_578,iVar7 * local_580);
                    iVar7 = FUN_1437a6ad0(local_574,iVar7 * local_580);
                    local_4f8 = CONCAT44(uStack_59c,local_5a0);
                    lStack_4f0 = (ulonglong)(iVar8 * iVar6 * uVar2) + local_4f8;
                    lStack_500 = (ulonglong)(iVar7 * iVar6 * uVar2) + local_590;
                    local_508 = local_590;
                    lVar11 = local_508;
                    local_508._0_4_ = (undefined4)local_590;
                    local_508._4_4_ = (undefined4)((ulonglong)local_590 >> 0x20);
                    local_4c8 = (undefined4)local_508;
                    uStack_4c4 = local_508._4_4_;
                    local_558 = CONCAT44(uStack_59c,local_5a0);
                    local_508 = lVar11;
                    uStack_550 = lStack_4f0;
                    uStack_4c0 = lStack_500;
                    piVar12 = (int *)(**(code **)(*local_570 + 0x18))
                                               (local_570,local_538,&local_558,&local_4c8,local_580,
                                                uVar2,local_578,local_574);
                    if (-1 < *piVar12) goto LAB_1437aa142;
                    local_564 = '\x01';
LAB_1437aa1c0:
                    local_5a8 = hkTask::vftable;
                    FUN_1437a01c0(local_4b8);
                    uVar22 = 0x80040200;
                    goto LAB_1437aa1fa;
                  }
                  cVar1 = (**(code **)(*param_5 + 0x10))(param_5);
                  if (cVar1 == '\0') goto LAB_1437aa080;
                  uVar14 = 0x80 / (ulonglong)uVar20;
                  if ((int)uVar14 == 0) {
                    uVar14 = 1;
                  }
                  uVar14 = uVar4 / uVar14;
                  if ((uint)uVar14 == 0) {
                    uVar14 = 1;
                  }
                  else if (0x20 < (uint)uVar14) {
                    uVar14 = 0x20;
                  }
                  local_568 = (int)(uVar16 / uVar14) + 1;
                  FUN_1437122e0(local_3d0,&local_5c8,1,8);
                  FUN_143712d40(local_3d0,local_5c8,&local_5a8,0x40);
                  FUN_1437130c0(local_3d0,local_5c8,uVar14,0);
                  FUN_1437130d0(local_3d0,&local_5c8,1,0,8);
                  (**(code **)(*param_6 + 0x20))(param_6,local_3e8);
                  FUN_143712e20(local_3d0,local_5c8);
                  FUN_143712420(local_3e8);
                  (**(code **)(*param_6 + 0x40))(param_6);
                  FUN_143712ff0(local_3e8);
LAB_1437aa142:
                  if (local_564 != '\0') goto LAB_1437aa1c0;
                  local_5dc = local_5dc + 1;
                  uVar3 = param_1[5] >> (bVar13 & 0x1f);
                  uVar2 = 1;
                  if (1 < uVar3) {
                    uVar2 = uVar3;
                  }
                } while (local_5dc < uVar2);
              }
              FUN_1437a01c0(local_4b8);
              uVar18 = uVar18 + 1;
            } while (uVar18 < *param_1);
          }
          local_5e8 = local_5e8 + 1;
        } while (local_5e8 < param_1[1]);
      }
      local_5e4 = local_5e4 + 1;
    } while (local_5e4 < param_1[2]);
  }
LAB_1437aa1fa:
  FUN_1437111e0(local_3e8);
  return uVar22;
}


