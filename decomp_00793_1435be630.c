// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435be630 ForEachChild_GC body=97 status=ok
// SIG undefined ForEachChild_GC(void)

void Scaleform::GFx::AS3::VMAppDomain::ForEachChild_GC
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + uVar2 * 8);
      (**(code **)*puVar1)(puVar1,param_2,param_3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1435be6a0 FUN_1435be6a0 body=212 status=ok
// SIG undefined FUN_1435be6a0(void)

void FUN_1435be6a0(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 1U & 0x8fffffff;
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  while (lVar4 != 0) {
    FUN_1435bc990(*(undefined8 *)
                   (*(longlong *)(param_1 + 0x58) + -8 + *(longlong *)(param_1 + 0x60) * 8));
    uVar2 = *(ulonglong *)(param_1 + 0x60);
    uVar1 = uVar2 - 1;
    FUN_143613820(param_1 + 0x58,param_1 + 0x58,uVar1);
    if (uVar2 < uVar1) {
      puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar2 * 8);
      for (lVar4 = uVar1 - uVar2; lVar4 != 0; lVar4 = lVar4 + -1) {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
        }
        puVar3 = puVar3 + 1;
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x60);
  }
  if (((param_1 & 1) == 0) && ((*(uint *)(param_1 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) - 1;
    FUN_1434ef880(param_1);
    return;
  }
  return;
}



// FUNCTION 1435be780 FUN_1435be780 body=498 status=ok
// SIG undefined FUN_1435be780(void)

void FUN_1435be780(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong local_res10;
  longlong local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [2];
  int *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar8 = (ulonglong *)(*param_2 & 0xfffffffffffffffc);
  local_48 = (longlong)puVar8 + 0xc;
  if ((*(char *)((longlong)puVar8 + 0xc) == '*') && (*(char *)((longlong)puVar8 + 0xd) == '\0')) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_40 = *puVar8 & 0x7fffffffffffffff;
  FUN_1435ae830(local_38,uVar2,&local_48);
  uVar4 = FUN_1435cf440(uVar2);
  local_res10 = FUN_1435c82a0(uVar2,local_38,uVar4);
  lVar3 = *(longlong *)(param_1 + 0x48);
  lVar10 = 0x1505;
  lVar9 = 8;
  if (lVar3 != 0) {
    uVar5 = 0x1505;
    lVar7 = 8;
    do {
      pbVar1 = &stack0x0000000f + lVar7;
      lVar7 = lVar7 + -1;
      uVar5 = (ulonglong)*pbVar1 + uVar5 * 0x1003f;
    } while (lVar7 != 0);
    uVar5 = *(ulonglong *)(lVar3 + 8) & uVar5;
    lVar7 = uVar5 * 3 + 2;
    puVar8 = (ulonglong *)(lVar3 + lVar7 * 8);
    if ((*(longlong *)(lVar3 + lVar7 * 8) != -2) && (uVar6 = uVar5, puVar8[1] == uVar5)) {
      while ((puVar8[1] != uVar5 || (puVar8[2] != local_res10))) {
        uVar6 = *puVar8;
        if (uVar6 == 0xffffffffffffffff) goto LAB_1435be8c0;
        puVar8 = (ulonglong *)(lVar3 + uVar6 * 0x18 + 0x10);
      }
      if ((-1 < (longlong)uVar6) && (lVar3 + (uVar6 * 3 + 4) * 8 != 0)) goto LAB_1435be8ea;
    }
  }
LAB_1435be8c0:
  do {
    pbVar1 = &stack0x0000000f + lVar9;
    lVar9 = lVar9 + -1;
    lVar10 = lVar10 * 0x1003f + (ulonglong)*pbVar1;
  } while (lVar9 != 0);
  FUN_143606040(param_1 + 0x48,param_1 + 0x48,&local_res10,lVar10);
LAB_1435be8ea:
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_28[0] = local_28[0] & 0xfffffde0;
      local_20 = (int *)0x0;
      uStack_18 = 0;
      local_10 = 0;
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435be980 FUN_1435be980 body=279 status=ok
// SIG undefined FUN_1435be980(void)

void FUN_1435be980(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined8 local_res10 [3];
  longlong local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [2];
  int *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar3 = (ulonglong *)(*param_2 & 0xfffffffffffffffc);
  local_48 = (longlong)puVar3 + 0xc;
  if ((*(char *)((longlong)puVar3 + 0xc) == '*') && (*(char *)((longlong)puVar3 + 0xd) == '\0')) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = *puVar3 & 0x7fffffffffffffff;
  FUN_1435ae830(local_38,uVar1,&local_48);
  uVar2 = FUN_1435cf440(uVar1);
  local_res10[0] = FUN_1435c82a0(uVar1,local_38,uVar2);
  FUN_143313780(param_1 + 0x48,local_res10);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_28[0] = local_28[0] & 0xfffffde0;
      local_20 = (int *)0x0;
      uStack_18 = 0;
      local_10 = 0;
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435beaa0 FUN_1435beaa0 body=206 status=ok
// SIG undefined FUN_1435beaa0(void)

bool FUN_1435beaa0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  byte local_res8 [32];
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    return true;
  }
  uVar3 = FUN_1435ca910(*(undefined8 *)(param_1 + 8));
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    uVar4 = 0x1505;
    lVar7 = 8;
    do {
      lVar2 = lVar7 + -1;
      lVar7 = lVar7 + -1;
      uVar4 = (ulonglong)local_res8[lVar2] + uVar4 * 0x1003f;
    } while (lVar7 != 0);
    uVar4 = *(ulonglong *)(lVar1 + 8) & uVar4;
    puVar6 = (ulonglong *)(lVar1 + 0x10 + uVar4 * 0x18);
    if ((*(longlong *)(lVar1 + 0x10 + uVar4 * 0x18) != -2) && (uVar5 = uVar4, puVar6[1] == uVar4)) {
      while ((puVar6[1] != uVar4 || (puVar6[2] != uVar3))) {
        uVar5 = *puVar6;
        if (uVar5 == 0xffffffffffffffff) {
          return false;
        }
        puVar6 = (ulonglong *)(lVar1 + 0x10 + uVar5 * 0x18);
      }
      if (-1 < (longlong)uVar5) {
        return lVar1 + 0x20 + uVar5 * 0x18 != 0;
      }
    }
  }
  return false;
}



// FUNCTION 1435beb80 FUN_1435beb80 body=3491 status=ok
// SIG undefined FUN_1435beb80(void)

/* WARNING: Removing unreachable block (ram,0x0001435bf896) */

undefined8 *
FUN_1435beb80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *local_res8;
  longlong local_res10;
  undefined1 local_res18 [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined2 local_d8 [4];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [2];
  undefined8 local_50;
  
  *(undefined2 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_145b4ad88;
  puVar10 = (undefined8 *)0x0;
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_4;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar4 = (longlong *)(**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1);
  param_1[9] = plVar4;
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4,0x30,0);
  puVar7 = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[4] = param_1[6];
    *puVar5 = &PTR_LAB_145b4acf0;
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined1 *)(puVar5 + 5) = 0;
    puVar7 = puVar5;
  }
  param_1[10] = puVar7;
  FUN_1435a9a00(param_1 + 0xb);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  lVar6 = FUN_1435aa2d0(param_1 + 0xf,0);
  param_1[0x11] = lVar6;
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined8 *)(param_1[0x11] + 0x10) = 0;
  param_1[0xf] = param_1[0x11] + 0x18;
  param_1[0x10] = param_1[0x11] + 0x18;
  FUN_1435a9a00(param_1 + 0x13);
  plVar4 = param_1 + 0x1d;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  *plVar4 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = local_c0;
  param_1[0x2a] = local_b0;
  param_1[0x2b] = local_a8;
  local_d0 = 0;
  uStack_c8 = 0;
  param_1[0x2c] = local_a0;
  param_1[0x2d] = local_98;
  *(undefined2 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  param_1[0x2e] = 0;
  param_1[0x2f] = local_88;
  param_1[0x30] = uStack_80;
  local_d8[0] = 0;
  local_b8 = 0xffffffff;
  local_90 = 0;
  param_1[0x31] = local_78;
  param_1[0x32] = uStack_70;
  local_58[0] = 0;
  local_50 = 0;
  *(undefined4 *)(param_1 + 0x33) = local_68;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_64;
  *(undefined4 *)(param_1 + 0x34) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_5c;
  FUN_14360ab50(param_1 + 0x35,local_58);
  FUN_1435bcd30(local_d8);
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x78);
  puVar7 = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[4] = param_1[6];
    *puVar5 = &PTR_ForEachChild_GC_145b4ad68;
    *(undefined4 *)(puVar5 + 1) = 1;
    puVar5[5] = 0;
    puVar5[7] = param_1[9];
    puVar5[6] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    *(undefined4 *)(puVar5 + 0xe) = 0;
    puVar7 = puVar5;
  }
  param_1[0x39] = puVar7;
  param_1[0x3a] = 0;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x68);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_1434b22e0(lVar6,param_1,0,&DAT_145af3922);
  }
  param_1[0x3b] = puVar7;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x68);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)
             FUN_1434b22e0(lVar6,param_1,0,PTR_s_http___adobe_com_AS3_2006_builti_1467d9780);
  }
  param_1[0x3c] = puVar7;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x68);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_1434b22e0(lVar6,param_1,0,PTR_s___AS3___vec_1467d9790);
  }
  param_1[0x3d] = puVar7;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x68);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)
             FUN_1434b22e0(lVar6,param_1,0,PTR_s_http___www_adobe_com_2006_action_1467d9788);
  }
  param_1[0x3e] = puVar7;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x68);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)
             FUN_1434b22e0(lVar6,param_1,0,PTR_s_http___www_w3_org_XML_1998_names_1467d9798);
  }
  param_1[0x3f] = puVar7;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0xe0,0);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_1434b3450(lVar6,param_1);
  }
  plVar9 = (longlong *)puVar7[0x1b];
  lVar6 = param_1[0x39];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x40] = puVar7;
  plVar9 = (longlong *)FUN_1434af4e0(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x41] = puVar7;
  plVar9 = (longlong *)FUN_1434b2e20(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x42] = puVar7;
  plVar9 = (longlong *)FUN_1434b1c00(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x43] = puVar7;
  plVar9 = (longlong *)FUN_1434bef20(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x44] = puVar7;
  plVar9 = (longlong *)FUN_1434bc9d0(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x45] = puVar7;
  plVar9 = (longlong *)FUN_1434bd970(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x46] = puVar7;
  plVar9 = (longlong *)FUN_1434be890(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x47] = puVar7;
  plVar9 = (longlong *)FUN_1434c2310(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x48] = puVar7;
  plVar9 = (longlong *)FUN_1434ba940(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x49] = puVar7;
  plVar9 = (longlong *)FUN_1434bbb40(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x4a] = puVar7;
  plVar9 = (longlong *)FUN_1434bb020(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x4b] = puVar7;
  plVar9 = (longlong *)FUN_14361ef30(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x4c] = puVar7;
  plVar9 = (longlong *)FUN_143621c30(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x4d] = puVar7;
  plVar9 = (longlong *)FUN_143622c30(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x4e] = puVar7;
  plVar9 = (longlong *)FUN_143623be0(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x4f] = puVar7;
  plVar9 = (longlong *)FUN_143624b70(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x50] = puVar7;
  plVar9 = (longlong *)FUN_1435635b0(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x51] = puVar7;
  plVar9 = (longlong *)FUN_1434ddcb0(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x52] = puVar7;
  plVar9 = (longlong *)FUN_1434c3b30(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x53] = puVar7;
  param_1[0x54] = 0;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x110,0);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_1434b1680(lVar6,param_1,&PTR_DAT_145b159a0);
  }
  param_1[0x55] = puVar7;
  param_1[0x56] = 0;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0x100,0);
  puVar7 = puVar10;
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_1434e06a0(lVar6,param_1);
  }
  param_1[0x57] = puVar7;
  lVar6 = (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],0xe0,0);
  if (lVar6 != 0) {
    puVar10 = (undefined8 *)FUN_1434de3b0(lVar6,param_1,param_1[0x57]);
  }
  param_1[0x58] = puVar10;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  lVar6 = param_1[0x58];
  if (lVar6 != 0) {
    *(uint *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1U & 0x8fffffff;
  }
  *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x59) & 0xffffffec;
  *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x59) | 0xc;
  local_e8 = (undefined4)lVar6;
  uStack_e4 = (undefined4)((ulonglong)lVar6 >> 0x20);
  *(undefined4 *)(param_1 + 0x5b) = local_e8;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_e4;
  *(undefined4 *)(param_1 + 0x5c) = uStack_e0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_dc;
  plVar9 = (longlong *)FUN_14357b270(local_res18,param_1);
  lVar6 = param_1[0x39];
  puVar7 = (undefined8 *)*plVar9;
  plVar9 = (longlong *)puVar7[0x1b];
  lVar2 = plVar9[0x1b];
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_res10);
  local_res8 = puVar7;
  FUN_1434e7e70(lVar6 + 0x30,uVar8,lVar2,&local_res8);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[0x5d] = puVar7;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  FUN_1435cf3b0(param_1);
  plVar9 = *(longlong **)(param_1[0x43] + 0xd8);
  if (plVar9[0x15] == 0) {
    (**(code **)(*plVar9 + 0x50))(plVar9);
  }
  uVar3 = plVar9[0x15];
  if (uVar3 != 0) {
    *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
  }
  lVar6 = param_1[0x55];
  uVar11 = *(ulonglong *)(lVar6 + 0xa8);
  if (uVar3 != uVar11) {
    if (uVar11 != 0) {
      if ((uVar11 & 1) == 0) {
        if ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *(ulonglong *)(lVar6 + 0xa8) = uVar11 - 1;
      }
    }
    *(ulonglong *)(lVar6 + 0xa8) = uVar3;
  }
  uVar8 = param_1[0x58];
  *(undefined1 *)(param_1 + 1) = 1;
  uVar3 = param_1[0x1e] + 1;
  if (uVar3 < (ulonglong)param_1[0x1e]) {
    uVar11 = uVar3;
    if ((ulonglong)param_1[0x1f] >> 1 <= uVar3) goto LAB_1435bf84e;
  }
  else {
    if (uVar3 <= (ulonglong)param_1[0x1f]) goto LAB_1435bf84e;
    uVar11 = (uVar3 >> 2) + uVar3;
  }
  FUN_1432cfd30(plVar4,plVar4,uVar11);
LAB_1435bf84e:
  param_1[0x1e] = uVar3;
  puVar7 = (undefined8 *)(*plVar4 + -8 + uVar3 * 8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = uVar8;
  }
  FUN_1434f0700(param_1[0x40] + 0xb0,param_1[0x41]);
  lVar6 = param_1[0x40];
  if (*(longlong *)(lVar6 + 0xb0) != 0) {
    FUN_1435b44b0(lVar6 + 0x28,*(longlong *)(lVar6 + 0xb0) + 0x28);
    *(longlong *)(lVar6 + 0x70) = *(longlong *)(lVar6 + 0x40) + *(longlong *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(*(longlong *)(lVar6 + 0xb0) + 0x78);
  }
  FUN_1435b82b0(param_1[0x40]);
  plVar4 = *(longlong **)(param_1[0x40] + 0xd8);
  if (plVar4[0x15] == 0) {
    (**(code **)(*plVar4 + 0x50))(plVar4);
  }
  FUN_1434b33c0(plVar4[0x15]);
  FUN_1435b82b0(param_1[0x41]);
  FUN_1435b82b0(param_1[0x42]);
  return param_1;
}



// FUNCTION 1435bf930 FUN_1435bf930 body=2078 status=ok
// SIG undefined FUN_1435bf930(void)

void FUN_1435bf930(undefined8 *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[4];
  uVar5 = 0;
  *param_1 = &PTR_FUN_145b4ad88;
  if (uVar2 != 0) {
    do {
      lVar3 = *(longlong *)(param_1[3] + uVar5 * 8);
      if (lVar3 != 0) {
        FUN_1435be590(*(undefined8 *)(lVar3 + 0x30),lVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  FUN_14360b070(param_1 + 0x5f);
  FUN_1432ef9e0(param_1 + 0x5e);
  uVar2 = param_1[0x5d];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x5d] = uVar2 - 1;
    }
  }
  puVar1 = (uint *)(param_1 + 0x59);
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar1);
    }
    else {
      piVar4 = (int *)param_1[0x5a];
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      param_1[0x5a] = 0;
      param_1[0x5b] = 0;
      param_1[0x5c] = 0;
    }
  }
  uVar2 = param_1[0x58];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x58] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x57];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x57] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x56];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x56] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x55];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x55] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x54];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x54] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x53];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x53] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x52];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x52] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x51];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x51] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x50];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x50] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x4f];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x4f] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x4e];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x4e] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x4d];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x4d] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x4c];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x4c] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x4b];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x4b] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x4a];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x4a] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x49];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x49] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x48];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x48] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x47];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x47] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x46];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x46] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x45];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x45] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x44];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x44] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x43];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x43] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x42];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x42] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x41];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x41] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x40];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x40] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x3f];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x3f] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x3e];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x3e] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x3d];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x3d] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x3c];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x3c] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x3b];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x3b] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x3a];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x3a] = uVar2 - 1;
    }
  }
  uVar2 = param_1[0x39];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[0x39] = uVar2 - 1;
    }
  }
  FUN_1435bcd30(param_1 + 0x25);
  FUN_14360eca0(param_1 + 0x20);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x1d]);
  puVar1 = (uint *)(param_1 + 0x18);
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) == 0) {
      FUN_1435920c0(puVar1);
    }
    else {
      piVar4 = (int *)param_1[0x19];
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
    }
  }
  FUN_1435a9a70(param_1 + 0x13);
  FUN_1435a9f60(param_1 + 0xf);
  FUN_1435a9a70(param_1 + 0xb);
  uVar2 = param_1[10];
  if (uVar2 != 0) {
    if ((uVar2 & 1) == 0) {
      if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      param_1[10] = uVar2 - 1;
    }
  }
  FUN_1435aaef0(param_1[6],0,1);
                    /* WARNING: Could not recover jumptable at 0x0001435c014a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[3]);
  return;
}



// FUNCTION 1435c0160 FUN_1435c0160 body=173 status=ok
// SIG undefined FUN_1435c0160(void)

ulonglong FUN_1435c0160(undefined8 param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *param_2 & 0x1f;
  if (uVar2 != 0) {
    if (uVar2 == 0xc) {
      bVar5 = *(longlong *)(param_2 + 4) == 0;
    }
    else {
      if (uVar2 != 10) {
        return 1;
      }
      bVar5 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
    }
    if (!bVar5) {
      return 1;
    }
  }
  if (uVar2 == 0xc) {
    bVar5 = *(longlong *)(param_2 + 4) == 0;
  }
  else if (uVar2 == 10) {
    bVar5 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
  }
  else {
    bVar5 = false;
  }
  uVar3 = FUN_1435c8e40(local_18,0x3f2 - (uint)bVar5,param_1);
  uVar4 = FUN_1435ccf60(param_1,uVar3,&DAT_145b155b0);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar4 = FUN_14335f920();
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1435c0230 FUN_1435c0230 body=524 status=ok
// SIG undefined FUN_1435c0230(void)

void FUN_1435c0230(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  undefined1 local_78 [8];
  longlong local_70;
  uint local_68 [2];
  int *local_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 *local_48;
  undefined1 local_40 [48];
  uint *local_10;
  
  local_48 = (undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x58);
  FUN_1435ae740(local_40,param_2,param_4);
  FUN_1435f7f70(&local_48,*(undefined8 *)(param_2 + 0x28),local_40);
  local_10 = (uint *)*local_48;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c041a;
  local_68[0] = *local_10;
  local_60 = *(int **)(local_10 + 2);
  uStack_58 = *(ulonglong *)(local_10 + 4);
  uStack_50 = *(ulonglong *)(local_10 + 6);
  *local_10 = 0;
  pcVar3 = (char *)FUN_1435b31e0(local_res8,param_1,param_3,local_10,local_68,local_40,0);
  if (*pcVar3 == '\0') {
    uVar4 = FUN_1435c8e40(local_78,0x40b,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
    piVar1 = (int *)(local_70 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    uVar2 = local_68[0] & 0x1f;
    if (uVar2 < 10) goto LAB_1435c041a;
    if ((local_68[0] >> 9 & 1) != 0) {
LAB_1435c0391:
      *local_60 = *local_60 + -1;
      if (*local_60 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_68[0] = local_68[0] & 0xfffffde0;
      local_60 = (int *)0x0;
      uStack_58 = 0;
      uStack_50 = 0;
      goto LAB_1435c041a;
    }
    if (uVar2 == 10) {
LAB_1435c040b:
      piVar1 = (int *)(uStack_58 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_1435c041a;
    }
    if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
LAB_1435c03dd:
      uVar5 = uStack_58;
      if ((uStack_58 & 1) != 0) {
        uStack_58 = uStack_58 - 1;
        goto LAB_1435c041a;
      }
    }
    else {
LAB_1435c0353:
      if (1 < uVar2 - 0xd) goto LAB_1435c041a;
      uVar5 = uStack_50;
      if ((uStack_50 & 1) != 0) {
        uStack_50 = uStack_50 - 1;
        goto LAB_1435c041a;
      }
    }
  }
  else {
    uVar2 = local_68[0] & 0x1f;
    if (uVar2 < 10) goto LAB_1435c041a;
    if ((local_68[0] >> 9 & 1) != 0) goto LAB_1435c0391;
    if (uVar2 == 10) goto LAB_1435c040b;
    if (uVar2 == 0xb) goto LAB_1435c03dd;
    if (uVar2 != 0xc) goto LAB_1435c0353;
    uVar5 = uStack_58;
    if ((uStack_58 & 1) != 0) {
      uStack_58 = uStack_58 - 1;
      goto LAB_1435c041a;
    }
  }
  if ((uVar5 != 0) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1435c041a:
  FUN_1434e6250(local_40);
  return;
}



// FUNCTION 1435c0450 FUN_1435c0450 body=446 status=ok
// SIG undefined FUN_1435c0450(void)

void FUN_1435c0450(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_res8 [8];
  longlong *local_a8;
  uint local_a0 [2];
  int *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [48];
  uint local_50 [2];
  int *local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_28 [8];
  longlong local_20;
  
  local_a8 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_a0[0] = *(uint *)*local_a8;
  local_98 = *(int **)(*local_a8 + 8);
  lVar2 = *local_a8;
  local_90 = *(undefined4 *)(lVar2 + 0x10);
  uStack_8c = *(undefined4 *)(lVar2 + 0x14);
  uStack_88 = *(undefined4 *)(lVar2 + 0x18);
  uStack_84 = *(undefined4 *)(lVar2 + 0x1c);
  *local_a8 = *local_a8 + -0x20;
  FUN_1435ae740(local_80,param_2,param_4);
  FUN_1435f7f70(&local_a8,*(undefined8 *)(param_2 + 0x28),local_80);
  local_50[0] = *(uint *)*local_a8;
  local_48 = *(int **)(*local_a8 + 8);
  uStack_40 = *(undefined8 *)(*local_a8 + 0x10);
  uStack_38 = *(undefined8 *)(*local_a8 + 0x18);
  *local_a8 = *local_a8 + -0x20;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28),local_50);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    pcVar3 = (char *)FUN_1435b3420(local_res8,param_1,param_3,local_50,local_80,local_a0);
    if (*pcVar3 == '\0') {
      uVar4 = FUN_1435c8e40(local_28,0x40b,param_1);
      FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
      piVar1 = (int *)(local_20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  if (9 < ((byte)local_50[0] & 0x1f)) {
    if ((local_50[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_50);
    }
    else {
      *local_48 = *local_48 + -1;
      if (*local_48 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_50[0] = local_50[0] & 0xfffffde0;
      local_48 = (int *)0x0;
      uStack_40 = 0;
      uStack_38 = 0;
    }
  }
  FUN_1434e6250(local_80);
  if (9 < ((byte)local_a0[0] & 0x1f)) {
    if ((local_a0[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_a0);
    }
    else {
      *local_98 = *local_98 + -1;
      if (*local_98 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435c0620 FUN_1435c0620 body=532 status=ok
// SIG undefined FUN_1435c0620(void)

void FUN_1435c0620(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong local_res8;
  longlong local_res10;
  
  uVar9 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x58);
  local_res8._0_4_ = 0;
  puVar3 = (undefined4 *)*puVar1;
  if (((byte)*puVar3 & 0x1f) == 0xb) {
    uVar9 = *(ulonglong *)(puVar3 + 4);
    if (uVar9 != 0) {
      *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
    }
    puVar10 = (ulonglong *)(param_1 + 0x2b0);
    if (&local_res8 != puVar10) {
      if (uVar9 != 0) {
        *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
      }
      uVar4 = *puVar10;
      if (uVar4 != 0) {
        if ((uVar4 & 1) == 0) {
          if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
            *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *puVar10 = uVar4 - 1;
        }
      }
      *puVar10 = uVar9;
    }
    if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
      FUN_1434ef880(uVar9);
      FUN_143611f90(puVar1);
      return;
    }
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x218);
    local_res10 = lVar5 + 0x48;
    piVar2 = (int *)(lVar5 + 0x60);
    *piVar2 = *piVar2 + 1;
    pcVar6 = (char *)FUN_1435911f0(puVar3,&local_res8,&local_res10);
    if ((*pcVar6 != '\0') && (*(int *)(local_res10 + 0x20) != 0)) {
      uVar7 = FUN_143590540();
      local_res8._0_4_ = 0x148;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x210) + 0xd8);
      lVar8 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,lVar5,0x68,&local_res8);
      if (lVar8 != 0) {
        uVar9 = FUN_1434b2350(lVar8,*(undefined8 *)(lVar5 + 0x98),*(undefined8 *)(lVar5 + 0x100),0,
                              &local_res10,uVar7);
      }
      puVar10 = (ulonglong *)(param_1 + 0x2b0);
      if (&local_res8 != puVar10) {
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
        }
        uVar4 = *puVar10;
        if (uVar4 != 0) {
          if ((uVar4 & 1) == 0) {
            if ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar10 = uVar4 - 1;
          }
        }
        *puVar10 = uVar9;
      }
      if (((uVar9 != 0) && ((uVar9 & 1) == 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
        FUN_1434ef880(uVar9);
      }
    }
    piVar2 = (int *)(local_res10 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  FUN_143611f90(puVar1);
  return;
}



// FUNCTION 1435c0840 FUN_1435c0840 body=230 status=ok
// SIG undefined FUN_1435c0840(void)

void FUN_1435c0840(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  puVar2 = *(uint **)(param_1 + 0x58);
  uVar5 = *puVar2 & 0x1f;
  if (uVar5 != 0) {
    if (uVar5 == 0xc) {
      bVar6 = *(longlong *)(puVar2 + 4) == 0;
    }
    else {
      if (uVar5 != 10) goto LAB_1435c087f;
      bVar6 = *(longlong *)(puVar2 + 4) == *(longlong *)(*(longlong *)(puVar2 + 4) + 8) + 0x80;
    }
    if (!bVar6) {
LAB_1435c087f:
      *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0x20;
      **(undefined8 **)(param_1 + 0x98) = 0;
      puVar3 = *(uint **)(param_1 + 0x98);
      uVar4 = *(undefined8 *)(puVar2 + 2);
      *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
      *(undefined8 *)(puVar3 + 2) = uVar4;
      uVar4 = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
      *(undefined8 *)(puVar3 + 6) = uVar4;
      *puVar2 = 0;
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
      *puVar3 = *puVar3 | 0x100;
      return;
    }
  }
  if (uVar5 == 0xc) {
    bVar6 = *(longlong *)(puVar2 + 4) == 0;
  }
  else if (uVar5 == 10) {
    bVar6 = *(longlong *)(puVar2 + 4) == *(longlong *)(*(longlong *)(puVar2 + 4) + 8) + 0x80;
  }
  else {
    bVar6 = false;
  }
  uVar4 = FUN_1435c8e40(local_18,0x3f2 - (uint)bVar6,param_1);
  FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435c0930 FUN_1435c0930 body=162 status=ok
// SIG undefined FUN_1435c0930(void)

void FUN_1435c0930(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  local_res8[0] = 0;
  lVar4 = *plVar1;
  pcVar5 = (char *)FUN_143590b70(lVar4,local_res8,local_res10);
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    puVar6 = &DAT_146b7a8c0;
  }
  else {
    FUN_1434f0780(lVar4,local_res10[0]);
    puVar6 = (undefined4 *)(lVar4 + 0x10);
  }
  uVar3 = *puVar6;
  lVar4 = *plVar1;
  FUN_143611f90(plVar1);
  if (cVar2 != '\0') {
    if (((byte)*(undefined4 *)(lVar4 + -0x20) & 0x1f) == 0xb) {
      FUN_1434b28e0();
      return;
    }
    (**(code **)(**(longlong **)(lVar4 + -0x10) + 0x98))
              (*(longlong **)(lVar4 + -0x10),lVar4 + -0x20,uVar3);
  }
  return;
}



// FUNCTION 1435c09e0 FUN_1435c09e0 body=144 status=ok
// SIG undefined FUN_1435c09e0(void)

void FUN_1435c09e0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  local_res8[0] = 0;
  lVar4 = *plVar1;
  pcVar5 = (char *)FUN_143590b70(lVar4,local_res8,local_res10);
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    puVar6 = &DAT_146b7a8c0;
  }
  else {
    FUN_1434f0780(lVar4,local_res10[0]);
    puVar6 = (undefined4 *)(lVar4 + 0x10);
  }
  uVar3 = *puVar6;
  lVar4 = *plVar1;
  FUN_143611f90(plVar1);
  if (cVar2 != '\0') {
    plVar1 = *(longlong **)(lVar4 + -0x10);
    puVar6 = (undefined4 *)(**(code **)(*plVar1 + 0xa0))(plVar1,local_res8,uVar3);
    FUN_143614720(lVar4 + -0x20,*puVar6);
  }
  return;
}



// FUNCTION 1435c0a80 FUN_1435c0a80 body=162 status=ok
// SIG undefined FUN_1435c0a80(void)

void FUN_1435c0a80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x58);
  local_res8[0] = 0;
  lVar4 = *plVar1;
  pcVar5 = (char *)FUN_143590b70(lVar4,local_res8,local_res10);
  cVar2 = *pcVar5;
  if (cVar2 == '\0') {
    puVar6 = &DAT_146b7a8c0;
  }
  else {
    FUN_1434f0780(lVar4,local_res10[0]);
    puVar6 = (undefined4 *)(lVar4 + 0x10);
  }
  uVar3 = *puVar6;
  lVar4 = *plVar1;
  FUN_143611f90(plVar1);
  if (cVar2 != '\0') {
    if (((byte)*(undefined4 *)(lVar4 + -0x20) & 0x1f) == 0xb) {
      FUN_1434b2980();
      return;
    }
    (**(code **)(**(longlong **)(lVar4 + -0x10) + 0xa8))
              (*(longlong **)(lVar4 + -0x10),lVar4 + -0x20,uVar3);
  }
  return;
}



// FUNCTION 1435c0b30 FUN_1435c0b30 body=224 status=ok
// SIG undefined FUN_1435c0b30(void)

void FUN_1435c0b30(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_18 [8];
  longlong local_10;
  
  puVar2 = *(uint **)(param_1 + 0x58);
  uVar5 = *puVar2 & 0x1f;
  if (uVar5 != 0) {
    if (uVar5 == 0xc) {
      bVar6 = *(longlong *)(puVar2 + 4) == 0;
    }
    else {
      if (uVar5 != 10) goto LAB_1435c0b6f;
      bVar6 = *(longlong *)(puVar2 + 4) == *(longlong *)(*(longlong *)(puVar2 + 4) + 8) + 0x80;
    }
    if (!bVar6) {
LAB_1435c0b6f:
      *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 0x20;
      **(undefined8 **)(param_1 + 0x98) = 0;
      puVar3 = *(undefined8 **)(param_1 + 0x98);
      uVar4 = *(undefined8 *)(puVar2 + 2);
      *puVar3 = *(undefined8 *)puVar2;
      puVar3[1] = uVar4;
      uVar4 = *(undefined8 *)(puVar2 + 6);
      puVar3[2] = *(undefined8 *)(puVar2 + 4);
      puVar3[3] = uVar4;
      *puVar2 = 0;
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
      return;
    }
  }
  if (uVar5 == 0xc) {
    bVar6 = *(longlong *)(puVar2 + 4) == 0;
  }
  else if (uVar5 == 10) {
    bVar6 = *(longlong *)(puVar2 + 4) == *(longlong *)(*(longlong *)(puVar2 + 4) + 8) + 0x80;
  }
  else {
    bVar6 = false;
  }
  uVar4 = FUN_1435c8e40(local_18,0x3f2 - (uint)bVar6,param_1);
  FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435c0c20 FUN_1435c0c20 body=1199 status=ok
// SIG undefined FUN_1435c0c20(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1435c0c20(longlong param_1,uint param_2,ulonglong param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  uint local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  
  lVar11 = (ulonglong)param_2 * 0x20;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + lVar11);
  if (param_3 == param_2) {
    uVar4 = FUN_1435c8e40(&local_58,0x464,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
    piVar7 = (int *)(uStack_50 + 0x18);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  uVar3 = *puVar1 & 0x1f;
  if (uVar3 == 0) {
LAB_1435c1092:
    lVar11 = *(longlong *)(param_1 + 0x58);
    puVar9 = (undefined4 *)(lVar11 + 0x20);
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffffffffff00);
    *(undefined4 **)(param_1 + 0x58) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 1;
      *(undefined8 *)(lVar11 + 0x28) = 0;
      *(longlong **)(lVar11 + 0x30) = local_48;
      *(undefined8 *)(lVar11 + 0x38) = uStack_40;
      return;
    }
  }
  else {
    if (uVar3 == 0xc) {
      bVar14 = *(longlong *)(puVar1 + 4) == 0;
LAB_1435c0cbf:
      if (bVar14) goto LAB_1435c1092;
    }
    else if (uVar3 == 10) {
      bVar14 = *(longlong *)(puVar1 + 4) == *(longlong *)(*(longlong *)(puVar1 + 4) + 8) + 0x80;
      goto LAB_1435c0cbf;
    }
    lVar12 = param_3 * 0x20;
    local_res8[0] = 0;
    local_res18 = lVar12;
    pcVar5 = (char *)FUN_143590eb0(*(longlong *)(param_1 + 0x78) + lVar12,local_res10,local_res8);
    if (*pcVar5 != '\0') {
      if ((*puVar1 & 0x1f) == 0xc) {
        plVar8 = *(longlong **)(puVar1 + 4);
        (**(code **)(*plVar8 + 0xa0))(plVar8,local_res10,local_res8[0]);
        plVar6 = plVar8;
        for (plVar13 = (longlong *)plVar8[5]; plVar13 != (longlong *)0x0;
            plVar13 = (longlong *)plVar13[0x16]) {
          if (local_res10[0] != 0) goto LAB_1435c0d88;
          if (plVar13[0x15] == 0) {
            (**(code **)(*plVar13 + 0x50))(plVar13);
          }
          plVar6 = (longlong *)FUN_1435b3ae0(plVar13[0x15]);
          piVar7 = (int *)(**(code **)(*plVar6 + 0xa0))(plVar6,&local_res18,0);
          local_res10[0] = *piVar7;
        }
        if (local_res10[0] == 0) {
          uVar4 = FUN_1435905b0();
          FUN_143590140(*(longlong *)(param_1 + 0x78) + lVar11,uVar4);
        }
        else {
LAB_1435c0d88:
          if (plVar6 != plVar8) {
            local_58._0_4_ = 0xc;
            uStack_50 = 0;
            if (plVar6 != (longlong *)0x0) {
              *(uint *)(plVar6 + 1) = (int)plVar6[1] + 1U & 0x8fffffff;
            }
            puVar9 = (undefined4 *)(*(longlong *)(param_1 + 0x78) + lVar11);
            local_48 = plVar6;
            if (&local_58 != (undefined8 *)puVar9) {
              if (plVar6 != (longlong *)0x0) {
                *(uint *)(plVar6 + 1) = (int)plVar6[1] + 1U & 0x8fffffff;
              }
              FUN_143603d30(puVar9);
              *puVar9 = (undefined4)local_58;
              puVar9[1] = local_58._4_4_;
              puVar9[2] = (undefined4)uStack_50;
              puVar9[3] = uStack_50._4_4_;
              *(longlong **)(puVar9 + 4) = local_48;
              *(undefined8 *)(puVar9 + 6) = uStack_40;
            }
            if (((((ulonglong)plVar6 & 1) == 0) && (plVar6 != (longlong *)0x0)) &&
               ((*(uint *)(plVar6 + 1) & 0x3fffff) != 0)) {
              *(uint *)(plVar6 + 1) = *(uint *)(plVar6 + 1) - 1;
              FUN_1434ef880(plVar6);
            }
          }
        }
        local_48 = (longlong *)CONCAT44(local_48._4_4_,local_res10[0]);
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar12);
        local_58._0_4_ = 3;
        uStack_50 = 0;
        if (&local_58 != puVar10) {
          FUN_143603d30(puVar10);
          *puVar10 = CONCAT44(local_58._4_4_,(undefined4)local_58);
          puVar10[1] = uStack_50;
          puVar10[2] = local_48;
          puVar10[3] = uStack_40;
        }
        local_48 = (longlong *)CONCAT71(local_48._1_7_,local_res10[0] != 0);
      }
      else {
        if ((*puVar1 & 0x1f) != 0xb) {
          plVar8 = (longlong *)FUN_1435caba0(param_1,puVar1);
          plVar13 = plVar8;
          if ((((int)plVar8[0x12] == 6) && ((~(*(byte *)(plVar8 + 0x11) >> 5) & 1) != 0)) &&
             (local_res8[0] < 2)) {
            local_58._0_4_ = 3;
            uStack_50 = 0;
            local_48 = (longlong *)CONCAT44(local_48._4_4_,local_res8[0] + 1);
            FUN_143590140(*(longlong *)(param_1 + 0x78) + lVar12,&local_58);
            FUN_1434e64f0(&local_58);
            local_48 = (longlong *)CONCAT71(local_48._1_7_,1);
          }
          else {
            while( true ) {
              do {
                if (plVar8[0x15] == 0) {
                  (**(code **)(*plVar8 + 0x50))(plVar8);
                }
                plVar6 = (longlong *)FUN_1435b3ae0(plVar8[0x15]);
                piVar7 = (int *)(**(code **)(*plVar6 + 0xa0))(plVar6,local_res10,0);
                plVar8 = (longlong *)plVar8[0x16];
                iVar2 = *piVar7;
              } while ((plVar8 != (longlong *)0x0) && (iVar2 == 0));
              if (plVar8 != (longlong *)0x0) break;
              if (iVar2 != 0) goto LAB_1435c0fe9;
              if ((1 < (int)plVar13[0x12] - 2U) ||
                 (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0xd8), plVar13 = plVar8,
                 plVar8 == (longlong *)0x0)) break;
            }
            if (iVar2 == 0) {
              uVar4 = FUN_1435905b0();
              FUN_143590140(*(longlong *)(param_1 + 0x78) + lVar11,uVar4);
            }
            else {
LAB_1435c0fe9:
              local_58._0_4_ = 0xc;
              uStack_50 = 0;
              *(uint *)(plVar6 + 1) = (int)plVar6[1] + 1U & 0x8fffffff;
              local_48 = plVar6;
              FUN_143590140(*(longlong *)(param_1 + 0x78) + lVar11,&local_58);
              FUN_1434e64f0(&local_58);
            }
            local_58._0_4_ = 3;
            uStack_50 = 0;
            local_48 = (longlong *)CONCAT44(local_48._4_4_,iVar2);
            FUN_143590140(local_res18 + *(longlong *)(param_1 + 0x78),&local_58);
            FUN_1434e64f0(&local_58);
            local_48 = (longlong *)CONCAT71(local_48._1_7_,iVar2 != 0);
          }
          lVar11 = *(longlong *)(param_1 + 0x58) + 0x20;
          uStack_50 = 0;
          *(longlong *)(param_1 + 0x58) = lVar11;
          local_58._0_4_ = 1;
          if (lVar11 != 0) {
            FUN_14360ab50(lVar11,&local_58);
          }
          FUN_1434e64f0(&local_58);
          return;
        }
        Scaleform::GFx::AS3::Instances::fl::QName::GetNextDynPropIndex
                  (*(undefined8 *)(puVar1 + 4),local_res10,local_res8[0]);
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar12);
        local_58._0_4_ = 3;
        uStack_50 = 0;
        local_48 = (longlong *)CONCAT44(local_48._4_4_,local_res10[0]);
        if (&local_58 != puVar10) {
          FUN_143603d30(puVar10);
          *puVar10 = CONCAT44(local_58._4_4_,(undefined4)local_58);
          puVar10[1] = uStack_50;
          puVar10[2] = local_48;
          puVar10[3] = uStack_40;
        }
        local_48 = (longlong *)CONCAT71(local_48._1_7_,local_res10[0] != 0);
      }
      lVar11 = *(longlong *)(param_1 + 0x58);
      puVar9 = (undefined4 *)(lVar11 + 0x20);
      *(undefined4 **)(param_1 + 0x58) = puVar9;
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 1;
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(longlong **)(lVar11 + 0x30) = local_48;
        *(undefined8 *)(lVar11 + 0x38) = uStack_40;
      }
    }
  }
  return;
}



// FUNCTION 1435c10e0 FUN_1435c10e0 body=207 status=ok
// SIG undefined FUN_1435c10e0(void)

void FUN_1435c10e0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong local_res8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 0xd8);
  if (plVar3[0x15] == 0) {
    (**(code **)(*plVar3 + 0x50))(plVar3);
  }
  Scaleform::GFx::AS3::Classes::fl::Function::MakeInstance
            (plVar3[0x15],&local_res8,uVar2,param_3,uVar1);
  lVar4 = *(longlong *)(param_1 + 0x58);
  puVar5 = (undefined4 *)(lVar4 + 0x20);
  *(undefined4 **)(param_1 + 0x58) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xc;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    local_28 = (undefined4)local_res8;
    uStack_24 = (undefined4)(local_res8 >> 0x20);
    *(undefined4 *)(lVar4 + 0x30) = local_28;
    *(undefined4 *)(lVar4 + 0x34) = uStack_24;
    *(undefined4 *)(lVar4 + 0x38) = uStack_20;
    *(undefined4 *)(lVar4 + 0x3c) = uStack_1c;
    if (local_res8 != 0) {
      *(uint *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1U & 0x8fffffff;
    }
  }
  if ((((local_res8 & 1) == 0) && (local_res8 != 0)) &&
     ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435c11c0 FUN_1435c11c0 body=655 status=ok
// SIG undefined FUN_1435c11c0(void)

void FUN_1435c11c0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  uint local_198 [2];
  int *local_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  longlong *local_178;
  uint local_170 [2];
  undefined1 local_168 [256];
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_48 [2];
  int *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint *local_28;
  
  local_50 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x58);
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_178 = plVar1;
  local_170[0] = param_2;
  if (param_2 != 0) {
    if (param_2 < 9) {
      puVar4 = local_168;
    }
    else {
      FUN_1436130d0(&local_68,param_2);
      puVar4 = local_68;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar4,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_2 - 1) * -0x20),
               (ulonglong)param_2 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_2 * -0x20;
  }
  local_48[0] = *(uint *)*local_178;
  local_40 = *(int **)(*local_178 + 8);
  local_38 = *(undefined8 *)(*local_178 + 0x10);
  uStack_30 = *(undefined8 *)(*local_178 + 0x18);
  *local_178 = *local_178 + -0x20;
  FUN_14360e8c0(param_1,local_48);
  local_28 = (uint *)*local_178;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    local_198[0] = *local_28;
    local_190 = *(int **)(local_28 + 2);
    uStack_188 = *(ulonglong *)(local_28 + 4);
    uStack_180 = *(ulonglong *)(local_28 + 6);
    *local_28 = 0;
    puVar4 = local_168;
    if (8 < local_170[0]) {
      puVar4 = local_68;
    }
    FUN_1435ce880(param_1,local_198,local_48,local_28,local_170,puVar4,1,0);
    uVar3 = local_198[0] & 0x1f;
    if (9 < uVar3) {
      if ((local_198[0] >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar2 = (int *)(uStack_188 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
            uVar5 = uStack_188;
            if ((uStack_188 & 1) != 0) {
              uStack_188 = uStack_188 - 1;
              goto LAB_1435c13d8;
            }
          }
          else {
            if (1 < uVar3 - 0xd) goto LAB_1435c13d8;
            uVar5 = uStack_180;
            if ((uStack_180 & 1) != 0) {
              uStack_180 = uStack_180 - 1;
              goto LAB_1435c13d8;
            }
          }
          if ((uVar5 != 0) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_190 = *local_190 + -1;
        if (*local_190 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_198[0] = local_198[0] & 0xfffffde0;
        local_190 = (int *)0x0;
        uStack_188 = 0;
        uStack_180 = 0;
      }
    }
  }
LAB_1435c13d8:
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_48[0] = local_48[0] & 0xfffffde0;
      local_38 = 0;
      uStack_30 = 0;
      local_40 = (int *)0x0;
    }
  }
  FUN_14360bd50(&local_178);
  return;
}



// FUNCTION 1435c1460 FUN_1435c1460 body=483 status=ok
// SIG undefined FUN_1435c1460(void)

void FUN_1435c1460(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong *local_158;
  uint local_150 [2];
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint *local_28;
  
  local_30 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x58);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_158 = plVar1;
  local_150[0] = param_2;
  if (param_2 != 0) {
    if (param_2 < 9) {
      puVar10 = local_148;
    }
    else {
      FUN_1436130d0(&local_48,param_2);
      puVar10 = local_48;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar10,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_2 - 1) * -0x20),
               (ulonglong)param_2 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_2 * -0x20;
  }
  local_28 = (uint *)*local_158;
  FUN_14360e8c0(param_1);
  puVar7 = local_28;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    plVar1 = *(longlong **)(local_28 + 4);
    uVar6 = *(ulonglong *)(local_28 + 6);
    uVar3 = *local_28;
    piVar4 = *(int **)(local_28 + 2);
    *local_28 = 0;
    puVar10 = local_148;
    if (8 < local_150[0]) {
      puVar10 = local_48;
    }
    lVar5 = *plVar1;
    uVar9 = FUN_143590540();
    (**(code **)(lVar5 + 0x50))(plVar1,uVar9,puVar7,local_150,puVar10,0);
    uVar8 = uVar3 & 0x1f;
    if (9 < uVar8) {
      if ((uVar3 >> 9 & 1) == 0) {
        if (uVar8 == 10) {
          plVar2 = plVar1 + 3;
          *(int *)plVar2 = (int)*plVar2 + -1;
          if ((int)*plVar2 == 0) {
            FUN_14335f920(plVar1);
          }
        }
        else if ((uVar8 == 0xb) || (uVar8 == 0xc)) {
          if ((((ulonglong)plVar1 & 1) == 0) && ((*(uint *)(plVar1 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar1 + 1) = *(uint *)(plVar1 + 1) - 1;
            FUN_1434ef880(plVar1);
          }
        }
        else if ((((uVar8 - 0xd < 2) && ((uVar6 & 1) == 0)) && (uVar6 != 0)) &&
                ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar4);
        }
      }
    }
  }
  FUN_14360bd50(&local_158);
  return;
}



// FUNCTION 1435c1650 FUN_1435c1650 body=581 status=ok
// SIG undefined FUN_1435c1650(void)

void FUN_1435c1650(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 local_178 [8];
  longlong *local_170;
  longlong *local_168;
  ulonglong uStack_160;
  longlong *local_158;
  uint local_150 [2];
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint *local_28;
  
  local_30 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x58);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_158 = plVar1;
  local_150[0] = param_2;
  if (param_2 != 0) {
    if (param_2 < 9) {
      puVar7 = local_148;
    }
    else {
      FUN_1436130d0(&local_48,param_2);
      puVar7 = local_48;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar7,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_2 - 1) * -0x20),
               (ulonglong)param_2 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_2 * -0x20;
  }
  local_28 = (uint *)*local_158;
  FUN_14360e8c0(param_1);
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c1873;
  uVar3 = *local_28;
  uVar5 = uVar3 & 0x1f;
  if ((uVar5 == 7) || (uVar5 == 0xe)) {
    uVar6 = 0x428;
LAB_1435c1844:
    uVar6 = FUN_1435c8e40(local_178,uVar6,param_1);
    puVar8 = &DAT_145b155b0;
LAB_1435c1858:
    FUN_1435ccf60(param_1,uVar6,puVar8);
    plVar1 = local_170 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    iVar2 = (int)*plVar1;
  }
  else {
    if (uVar5 == 0xd) {
      uVar6 = FUN_1435c8e40(local_178,0x429,param_1);
      puVar8 = &DAT_145b14e70;
      goto LAB_1435c1858;
    }
    if (uVar5 != 0xc) {
      uVar6 = 0x45b;
      goto LAB_1435c1844;
    }
    local_170 = *(longlong **)(local_28 + 4);
    uStack_160 = *(ulonglong *)(local_28 + 6);
    piVar4 = *(int **)(local_28 + 2);
    *local_28 = 0;
    puVar7 = local_148;
    if (8 < local_150[0]) {
      puVar7 = local_48;
    }
    local_168 = local_170;
    (**(code **)(*local_170 + 0x68))(local_170,local_28,local_150,puVar7,0,0);
    uVar5 = uVar3 & 0x1f;
    if (uVar5 < 10) goto LAB_1435c1873;
    if ((uVar3 >> 9 & 1) != 0) {
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar4);
      }
      goto LAB_1435c1873;
    }
    if (uVar5 != 10) {
      if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
        if ((((ulonglong)local_168 & 1) == 0) && ((*(uint *)(local_170 + 1) & 0x3fffff) != 0)) {
          *(uint *)(local_170 + 1) = *(uint *)(local_170 + 1) - 1;
          FUN_1434ef880(local_170);
        }
      }
      else if ((((uVar5 - 0xd < 2) && ((uStack_160 & 1) == 0)) && (uStack_160 != 0)) &&
              ((*(uint *)(uStack_160 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uStack_160 + 8) = *(uint *)(uStack_160 + 8) - 1;
        FUN_1434ef880();
      }
      goto LAB_1435c1873;
    }
    plVar1 = local_170 + 3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    iVar2 = (int)*plVar1;
  }
  if (iVar2 == 0) {
    FUN_14335f920(local_170);
  }
LAB_1435c1873:
  FUN_14360bd50(&local_158);
  return;
}



// FUNCTION 1435c18a0 FUN_1435c18a0 body=447 status=ok
// SIG undefined FUN_1435c18a0(void)

void FUN_1435c18a0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong *local_158;
  uint local_150 [2];
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  uint *local_28;
  
  local_30 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x58);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_158 = plVar1;
  local_150[0] = param_2;
  if (param_2 != 0) {
    if (param_2 < 9) {
      puVar7 = local_148;
    }
    else {
      FUN_1436130d0(&local_48,param_2);
      puVar7 = local_48;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar7,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_2 - 1) * -0x20),
               (ulonglong)param_2 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_2 * -0x20;
  }
  local_28 = (uint *)*local_158;
  FUN_14360e8c0(param_1);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    plVar1 = *(longlong **)(local_28 + 4);
    uVar5 = *(ulonglong *)(local_28 + 6);
    uVar3 = *local_28;
    piVar4 = *(int **)(local_28 + 2);
    *local_28 = 0;
    puVar7 = local_148;
    if (8 < local_150[0]) {
      puVar7 = local_48;
    }
    (**(code **)(*plVar1 + 0x68))(plVar1,local_28,local_150,puVar7,0,1);
    uVar6 = uVar3 & 0x1f;
    if (9 < uVar6) {
      if ((uVar3 >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          plVar2 = plVar1 + 3;
          *(int *)plVar2 = (int)*plVar2 + -1;
          if ((int)*plVar2 == 0) {
            FUN_14335f920(plVar1);
          }
        }
        else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          if ((((ulonglong)plVar1 & 1) == 0) && ((*(uint *)(plVar1 + 1) & 0x3fffff) != 0)) {
            *(uint *)(plVar1 + 1) = *(uint *)(plVar1 + 1) - 1;
            FUN_1434ef880(plVar1);
          }
        }
        else if ((((uVar6 - 0xd < 2) && ((uVar5 & 1) == 0)) && (uVar5 != 0)) &&
                ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar4);
        }
      }
    }
  }
  FUN_14360bd50(&local_158);
  return;
}



// FUNCTION 1435c1a70 FUN_1435c1a70 body=267 status=ok
// SIG undefined FUN_1435c1a70(void)

void FUN_1435c1a70(longlong param_1,undefined4 param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 *_Dst;
  longlong *local_158;
  uint local_150;
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = *(undefined8 *)(param_1 + 0x48);
  local_158 = plVar1;
  local_150 = param_3;
  if (param_3 != 0) {
    if (param_3 < 9) {
      _Dst = local_148;
    }
    else {
      FUN_1436130d0(&local_48,param_3);
      _Dst = local_48;
    }
    _guard_xfg_dispatch_icall_nop
              (_Dst,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_3 - 1) * -0x20),
               (ulonglong)param_3 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_3 * -0x20;
  }
  local_28 = *local_158;
  FUN_14360e8c0(param_1);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar2 = FUN_1435caba0(param_1,local_28);
    FUN_1435cd6d0(param_1,param_2,uVar2,&local_158,param_4);
  }
  FUN_14360bd50(&local_158);
  return;
}



// FUNCTION 1435c1b90 FUN_1435c1b90 body=322 status=ok
// SIG undefined FUN_1435c1b90(void)

void FUN_1435c1b90(longlong param_1,longlong param_2,undefined4 param_3,uint param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 *_Dst;
  undefined1 local_168 [8];
  longlong local_160;
  longlong *local_158;
  uint local_150;
  undefined1 local_148 [256];
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  local_38 = 0;
  local_30 = *(undefined8 *)(param_1 + 0x48);
  local_158 = plVar1;
  local_150 = param_4;
  if (param_4 != 0) {
    if (param_4 < 9) {
      _Dst = local_148;
    }
    else {
      FUN_1436130d0(&local_48,param_4);
      _Dst = local_48;
    }
    _guard_xfg_dispatch_icall_nop
              (_Dst,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_4 - 1) * -0x20),
               (ulonglong)param_4 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_4 * -0x20;
  }
  local_28 = *local_158;
  FUN_14360e8c0(param_1);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if (*(longlong *)(param_2 + 0xb0) == 0) {
      uVar3 = FUN_1435c8e40(local_168,0x40b,param_1);
      FUN_1435ccf60(param_1,uVar3,&DAT_145b14e70);
      piVar2 = (int *)(local_160 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
    }
    else {
      FUN_1435cd6d0(param_1,param_3,*(longlong *)(param_2 + 0xb0),&local_158,param_5);
    }
  }
  FUN_14360bd50(&local_158);
  return;
}



// FUNCTION 1435c1ce0 FUN_1435c1ce0 body=585 status=ok
// SIG undefined FUN_1435c1ce0(void)

void FUN_1435c1ce0(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined4 local_res8 [2];
  uint local_188 [2];
  int *local_180;
  ulonglong uStack_178;
  ulonglong local_170;
  longlong *local_168;
  uint local_160 [2];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_40 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x58);
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_168 = plVar1;
  local_160[0] = param_3;
  if (param_3 != 0) {
    if (param_3 < 9) {
      puVar6 = local_158;
    }
    else {
      FUN_1436130d0(&local_58,param_3);
      puVar6 = local_58;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar6,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_3 - 1) * -0x20),
               (ulonglong)param_3 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_3 * -0x20;
  }
  local_38 = *local_168;
  FUN_14360e8c0(param_1);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar4 = FUN_1435caba0(param_1,local_38);
    lVar5 = FUN_1434ef190(uVar4);
    local_188[0] = 0;
    local_180 = (int *)0x0;
    local_res8[0] = 0;
    FUN_1435ce880(param_1,(ulonglong)param_2 * 0x20 + *(longlong *)(lVar5 + 8),local_38,local_188,
                  local_res8,0,0,0);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      puVar6 = local_158;
      if (8 < local_160[0]) {
        puVar6 = local_58;
      }
      FUN_1435ce880(param_1,local_188,local_38,local_38,local_160,puVar6,1,0);
    }
    uVar3 = local_188[0] & 0x1f;
    if (9 < uVar3) {
      if ((local_188[0] >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar2 = (int *)(uStack_178 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
            uVar7 = uStack_178;
            if ((uStack_178 & 1) != 0) {
              uStack_178 = uStack_178 - 1;
              goto LAB_1435c1f11;
            }
          }
          else {
            if (1 < uVar3 - 0xd) goto LAB_1435c1f11;
            uVar7 = local_170;
            if ((local_170 & 1) != 0) {
              local_170 = local_170 - 1;
              goto LAB_1435c1f11;
            }
          }
          if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_180 = *local_180 + -1;
        if (*local_180 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_188[0] = local_188[0] & 0xfffffde0;
        local_180 = (int *)0x0;
        uStack_178 = 0;
        local_170 = 0;
      }
    }
  }
LAB_1435c1f11:
  FUN_14360bd50(&local_168);
  return;
}



// FUNCTION 1435c1f30 FUN_1435c1f30 body=1070 status=ok
// SIG undefined FUN_1435c1f30(void)

void FUN_1435c1f30(longlong param_1,longlong param_2,undefined4 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  uint local_1b8 [2];
  int *local_1b0;
  ulonglong uStack_1a8;
  ulonglong local_1a0;
  uint local_198 [2];
  int *local_190;
  ulonglong uStack_188;
  ulonglong local_180;
  undefined1 local_178 [8];
  ulonglong local_170;
  longlong *local_168;
  uint local_160 [2];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_40 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x58);
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_168 = plVar1;
  local_160[0] = param_4;
  if (param_4 != 0) {
    if (param_4 < 9) {
      puVar5 = local_158;
    }
    else {
      FUN_1436130d0(&local_58,param_4);
      puVar5 = local_58;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar5,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_4 - 1) * -0x20),
               (ulonglong)param_4 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_4 * -0x20;
  }
  local_38 = *local_168;
  FUN_14360e8c0(param_1);
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c2345;
  if (*(ulonglong *)(param_2 + 0xb0) == 0) {
    uVar4 = FUN_1435c8e40(local_178,0x40b,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
  }
  else {
    local_1b8[0] = 7;
    local_1b0 = (int *)0x0;
    uStack_1a8 = CONCAT44(uStack_1a8._4_4_,param_3);
    local_198[0] = 0;
    local_190 = (int *)0x0;
    local_res8[0] = 0;
    local_1a0 = *(ulonglong *)(param_2 + 0xb0);
    FUN_1435ce880(param_1,local_1b8,local_38,local_198,local_res8,0,0,0);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      puVar5 = local_158;
      if (8 < local_160[0]) {
        puVar5 = local_58;
      }
      FUN_1435ce880(param_1,local_198,local_38,local_38,local_160,puVar5,1,0);
      uVar3 = local_198[0] & 0x1f;
      local_170 = uStack_1a8;
      if (9 < uVar3) {
        if ((local_198[0] >> 9 & 1) == 0) {
          if (uVar3 == 10) {
            piVar2 = (int *)(uStack_188 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
              local_170 = uStack_1a8;
            }
          }
          else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
            uVar6 = uStack_188;
            if ((uStack_188 & 1) == 0) {
LAB_1435c22eb:
              if ((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
                FUN_1434ef880();
                local_170 = uStack_1a8;
              }
            }
            else {
              uStack_188 = uStack_188 - 1;
            }
          }
          else if (uVar3 - 0xd < 2) {
            uVar6 = local_180;
            if ((local_180 & 1) == 0) goto LAB_1435c22eb;
            local_180 = local_180 - 1;
          }
        }
        else {
          *local_190 = *local_190 + -1;
          if (*local_190 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_198[0] = local_198[0] & 0xfffffde0;
          local_190 = (int *)0x0;
          uStack_188 = 0;
          local_180 = 0;
          local_170 = uStack_1a8;
        }
      }
    }
    else {
      uVar3 = local_198[0] & 0x1f;
      local_170 = uStack_1a8;
      if (9 < uVar3) {
        if ((local_198[0] >> 9 & 1) == 0) {
          if (uVar3 == 10) {
            piVar2 = (int *)(uStack_188 + 0x18);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FUN_14335f920();
              local_170 = uStack_1a8;
            }
          }
          else if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
            uVar6 = uStack_188;
            if ((uStack_188 & 1) == 0) {
LAB_1435c213a:
              if ((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
                *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
                FUN_1434ef880();
                local_170 = uStack_1a8;
              }
            }
            else {
              uStack_188 = uStack_188 - 1;
            }
          }
          else if (uVar3 - 0xd < 2) {
            uVar6 = local_180;
            if ((local_180 & 1) == 0) goto LAB_1435c213a;
            local_180 = local_180 - 1;
          }
        }
        else {
          *local_190 = *local_190 + -1;
          if (*local_190 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_198[0] = local_198[0] & 0xfffffde0;
          local_190 = (int *)0x0;
          uStack_188 = 0;
          local_180 = 0;
          local_170 = uStack_1a8;
        }
      }
    }
    uVar3 = local_1b8[0] & 0x1f;
    uStack_1a8 = local_170;
    if (uVar3 < 10) goto LAB_1435c2345;
    if ((local_1b8[0] >> 9 & 1) != 0) {
      *local_1b0 = *local_1b0 + -1;
      if (*local_1b0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_1b8[0] = local_1b8[0] & 0xfffffde0;
      local_1b0 = (int *)0x0;
      uStack_1a8 = 0;
      local_1a0 = 0;
      goto LAB_1435c2345;
    }
    if (uVar3 != 10) {
      if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
        if ((local_170 & 1) != 0) {
          uStack_1a8 = local_170 - 1;
          goto LAB_1435c2345;
        }
      }
      else {
        if (1 < uVar3 - 0xd) goto LAB_1435c2345;
        local_170 = local_1a0;
        if ((local_1a0 & 1) != 0) {
          local_1a0 = local_1a0 - 1;
          goto LAB_1435c2345;
        }
      }
      if ((local_170 != 0) && ((*(uint *)(local_170 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_170 + 8) = *(uint *)(local_170 + 8) - 1;
        FUN_1434ef880();
      }
      goto LAB_1435c2345;
    }
  }
  piVar2 = (int *)(local_170 + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    FUN_14335f920();
  }
LAB_1435c2345:
  FUN_14360bd50(&local_168);
  return;
}



// FUNCTION 1435c2370 FUN_1435c2370 body=775 status=ok
// SIG undefined FUN_1435c2370(void)

void FUN_1435c2370(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_1c8 [2];
  int *local_1c0;
  ulonglong uStack_1b8;
  ulonglong local_1b0;
  undefined1 local_1a8 [8];
  longlong local_1a0;
  longlong *local_198;
  uint local_190 [2];
  undefined1 local_188 [256];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  longlong local_38;
  
  uVar7 = param_5;
  local_190[0] = (uint)param_5;
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_70 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48);
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_198 = plVar1;
  if (local_190[0] != 0) {
    uVar8 = param_5 & 0xffffffff;
    if (local_190[0] < 9) {
      puVar6 = local_188;
    }
    else {
      FUN_1436130d0(&local_88,param_5 & 0xffffffff);
      puVar6 = local_88;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar6,(void *)(*plVar1 + (ulonglong)(ushort)((short)uVar7 - 1) * -0x20),uVar8 * 0x20
              );
    *plVar1 = *plVar1 + uVar8 * -0x20;
  }
  FUN_1435ae740(local_68,param_2,param_4);
  FUN_1435f7f70(&local_198,*(undefined8 *)(param_2 + 0x28),local_68);
  local_38 = *local_198;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c2640;
  local_1c8[0] = 0;
  local_1c0 = (int *)0x0;
  pcVar4 = (char *)FUN_1435b31e0(&param_5,param_1,param_3,local_1c8,local_38,local_68,1);
  if (*pcVar4 == '\0') {
    uVar5 = FUN_1435c8e40(local_1a8,0x42e,param_1);
    FUN_1435ccf60(param_1,uVar5,&DAT_145b14e70);
    piVar2 = (int *)(local_1a0 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
    uVar3 = local_1c8[0] & 0x1f;
    if (uVar3 < 10) goto LAB_1435c2640;
    if ((local_1c8[0] >> 9 & 1) != 0) {
LAB_1435c25a9:
      *local_1c0 = *local_1c0 + -1;
      if (*local_1c0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_1c8[0] = local_1c8[0] & 0xfffffde0;
      local_1c0 = (int *)0x0;
      uStack_1b8 = 0;
      local_1b0 = 0;
      goto LAB_1435c2640;
    }
    if (uVar3 == 10) {
LAB_1435c2630:
      piVar2 = (int *)(uStack_1b8 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
      goto LAB_1435c2640;
    }
    if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
LAB_1435c25ff:
      uVar7 = uStack_1b8;
      if ((uStack_1b8 & 1) != 0) {
        uStack_1b8 = uStack_1b8 - 1;
        goto LAB_1435c2640;
      }
    }
    else {
LAB_1435c2527:
      if (1 < uVar3 - 0xd) goto LAB_1435c2640;
      uVar7 = local_1b0;
      if ((local_1b0 & 1) != 0) {
        local_1b0 = local_1b0 - 1;
        goto LAB_1435c2640;
      }
    }
  }
  else {
    puVar6 = local_188;
    if (8 < local_190[0]) {
      puVar6 = local_88;
    }
    FUN_1435ce880(param_1,local_1c8,local_38,local_38,local_190,puVar6,1,0);
    uVar3 = local_1c8[0] & 0x1f;
    if (uVar3 < 10) goto LAB_1435c2640;
    if ((local_1c8[0] >> 9 & 1) != 0) goto LAB_1435c25a9;
    if (uVar3 == 10) goto LAB_1435c2630;
    if (uVar3 == 0xb) goto LAB_1435c25ff;
    if (uVar3 != 0xc) goto LAB_1435c2527;
    uVar7 = uStack_1b8;
    if ((uStack_1b8 & 1) != 0) {
      uStack_1b8 = uStack_1b8 - 1;
      goto LAB_1435c2640;
    }
  }
  if ((uVar7 != 0) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1435c2640:
  FUN_1434e6250(local_68);
  FUN_14360bd50(&local_198);
  return;
}



// FUNCTION 1435c2680 FUN_1435c2680 body=1114 status=ok
// SIG undefined FUN_1435c2680(void)

void FUN_1435c2680(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined1 local_res8 [8];
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar11;
  uint local_1f8;
  uint uStack_1f4;
  int *piStack_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8 [2];
  uint local_1c8 [2];
  int *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  uint local_190 [2];
  undefined1 local_188 [256];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  uint *local_38;
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_70 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48);
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_198 = plVar1;
  local_190[0] = param_4;
  if (param_4 != 0) {
    if (param_4 < 9) {
      puVar3 = local_188;
    }
    else {
      FUN_1436130d0(&local_88,param_4);
      puVar3 = local_88;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar3,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_4 - 1) * -0x20),
               (ulonglong)param_4 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_4 * -0x20;
  }
  FUN_1435ae740(local_68,param_2,param_3);
  FUN_1435f7f70(&local_198,*(undefined8 *)(param_2 + 0x28),local_68);
  local_38 = (uint *)*local_198;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c2ab8;
  local_1c8[0] = 0;
  local_1c0 = (int *)0x0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  FUN_1435b2320(local_1d8,param_1,local_38,local_68,CONCAT44(uVar11,2));
  puVar8 = local_38;
  if ((((local_1c8[0] & 0x1f) == 0) || (local_1d8[0] == 1)) ||
     ((((byte)local_1d8[0] >> 1 & 1) != 0 && ((local_1d8[0] & 0xfffffffffffffffd) == 0)))) {
    lVar5 = FUN_1435caba0(param_1,local_38);
    if ((((*(byte *)(lVar5 + 0x88) >> 1 & 1) == 0) && (4 < (*puVar8 & 0x1f))) &&
       ((*puVar8 & 0x1f) != 10)) {
      uVar6 = FUN_1435c8e40(&local_1a8,0x42d,param_1);
      puVar10 = &DAT_145b14e70;
    }
    else {
      uVar6 = FUN_1435c8e40(&local_1a8,0x3ee,param_1);
      puVar10 = &DAT_145b155b0;
    }
    FUN_1435ccf60(param_1,uVar6,puVar10);
    uVar7 = CONCAT44(uStack_19c,uStack_1a0);
LAB_1435c2a60:
    piVar2 = (int *)(uVar7 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  else {
    piStack_1f0 = (int *)0x0;
    local_1f8 = 0;
    uVar9 = (uint)local_1d8[0] & 3;
    if ((local_1d8[0] & 3) == 0) {
      pcVar4 = (char *)FUN_1435ac440(local_1d8[0],local_res8,param_1,&local_1f8,local_1c8,0,1);
      if (*pcVar4 != '\0') goto LAB_1435c284c;
    }
    else {
      if (uVar9 == 1) {
        puVar8 = (uint *)(local_1d8[0] & 0xfffffffffffffffe);
        if (puVar8 != &local_1f8) {
          local_1f8 = *puVar8;
          uStack_1f4 = puVar8[1];
          piStack_1f0 = *(int **)(puVar8 + 2);
          local_1e8 = *(ulonglong *)(puVar8 + 4);
          uStack_1e0 = *(ulonglong *)(puVar8 + 6);
          uVar9 = local_1f8 & 0x1f;
          if (9 < uVar9) {
            if ((local_1f8 >> 9 & 1) == 0) {
              if (uVar9 == 10) {
                *(int *)(local_1e8 + 0x18) = *(int *)(local_1e8 + 0x18) + 1;
              }
              else if (((10 < uVar9) &&
                       ((uVar7 = local_1e8, uVar9 < 0xd || (uVar7 = uStack_1e0, uVar9 < 0xf)))) &&
                      (uVar7 != 0)) {
                *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
                *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) & 0x8fffffff;
              }
            }
            else {
              *piStack_1f0 = *piStack_1f0 + 1;
            }
          }
        }
      }
      else if (uVar9 == 2) {
        uVar7 = local_1d8[0] & 0xfffffffffffffffd;
        if (uVar7 != 0) {
          *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
        }
        local_1a8._4_4_ = (undefined4)(uVar7 >> 0x20);
        local_1f8 = 0xc;
        local_1e8 = CONCAT44(local_1a8._4_4_,(uint)local_1d8[0]) & 0xfffffffffffffffd;
        uStack_1e0 = CONCAT44(uStack_19c,uStack_1a0);
        local_1a8 = uVar7;
      }
LAB_1435c284c:
      puVar3 = local_188;
      if (8 < local_190[0]) {
        puVar3 = local_88;
      }
      FUN_1435ce880(param_1,&local_1f8,local_38,local_38,local_190,puVar3,1,0);
    }
    uVar9 = local_1f8 & 0x1f;
    if (9 < uVar9) {
      if ((local_1f8 >> 9 & 1) == 0) {
        uVar7 = local_1e8;
        if (uVar9 == 10) goto LAB_1435c2a60;
        if ((((uVar9 == 0xb) || (uVar9 == 0xc)) || (uVar7 = uStack_1e0, uVar9 - 0xd < 2)) &&
           ((((uVar7 & 1) == 0 && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piStack_1f0 = *piStack_1f0 + -1;
        if (*piStack_1f0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  if (9 < ((byte)local_1c8[0] & 0x1f)) {
    if ((local_1c8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1c8);
    }
    else {
      *local_1c0 = *local_1c0 + -1;
      if (*local_1c0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_1c8[0] = local_1c8[0] & 0xfffffde0;
      local_1c0 = (int *)0x0;
      uStack_1b8 = 0;
      local_1b0 = 0;
    }
  }
LAB_1435c2ab8:
  FUN_1434e6250(local_68);
  FUN_14360bd50(&local_198);
  return;
}



// FUNCTION 1435c2ae0 FUN_1435c2ae0 body=226 status=ok
// SIG undefined FUN_1435c2ae0(void)

void FUN_1435c2ae0(longlong param_1,longlong param_2,int *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  lVar2 = FUN_1435caba0(param_1,param_4 * 0x20 + *(longlong *)(param_1 + 0x78));
  uVar4 = 0;
  piVar1 = param_3;
  if (param_3 != (int *)0x0) {
    do {
      piVar3 = piVar1;
      if (5 < uVar4) {
LAB_1435c2b3e:
        if (piVar3 != (int *)0x0) goto LAB_1435c2b83;
        break;
      }
      if (*(longlong *)(piVar3 + 2) == 0) {
        *(longlong *)(piVar3 + 2) = lVar2;
        goto LAB_1435c2b3e;
      }
      if (*(longlong *)(piVar3 + 2) == lVar2) goto LAB_1435c2b3e;
      uVar4 = uVar4 + 1;
      piVar1 = *(int **)(piVar3 + 4);
      param_3 = piVar3;
    } while (*(int **)(piVar3 + 4) != (int *)0x0);
    if (5 < uVar4) {
      return;
    }
  }
  puVar5 = (undefined1 *)(*(longlong *)(param_2 + 0x18) + 0xa8);
  piVar3 = (int *)FUN_1435ba1a0(puVar5,0x18,*puVar5);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = 0;
    *(longlong *)(piVar3 + 2) = lVar2;
    piVar3[4] = 0;
    piVar3[5] = 0;
  }
  *(int **)(param_3 + 4) = piVar3;
LAB_1435c2b83:
  if (*piVar3 != -1) {
    *piVar3 = *piVar3 + 1;
  }
  if (*piVar3 == 2) {
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x130) + 0x2e +
     (ulonglong)*(uint *)(param_2 + 0x20) * 0x50) = 1;
  }
  return;
}



// FUNCTION 1435c2be0 FUN_1435c2be0 body=391 status=ok
// SIG undefined FUN_1435c2be0(void)

void FUN_1435c2be0(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *local_168;
  uint local_160 [2];
  undefined1 local_158 [256];
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38 [2];
  int *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_40 = *(undefined8 *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x58);
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_168 = plVar1;
  local_160[0] = param_3;
  if (param_3 != 0) {
    if (param_3 < 9) {
      puVar2 = local_158;
    }
    else {
      FUN_1436130d0(&local_58,param_3);
      puVar2 = local_58;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar2,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_3 - 1) * -0x20),
               (ulonglong)param_3 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_3 * -0x20;
  }
  local_38[0] = *(uint *)*local_168;
  local_30 = *(int **)(*local_168 + 8);
  local_28 = *(undefined8 *)(*local_168 + 0x10);
  uStack_20 = *(undefined8 *)(*local_168 + 0x18);
  *local_168 = *local_168 + -0x20;
  FUN_14360e8c0(param_1,local_38);
  if ((*(char *)(param_1 + 0xb8) == '\0') &&
     (plVar1 = *(longlong **)(param_2 + 0xb0), plVar1 != (longlong *)0x0)) {
    puVar2 = local_158;
    if (8 < local_160[0]) {
      puVar2 = local_58;
    }
    (**(code **)(*plVar1 + 0x60))(plVar1,local_38,local_160,puVar2,0);
  }
  if (9 < ((byte)local_38[0] & 0x1f)) {
    if ((local_38[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_38);
    }
    else {
      *local_30 = *local_30 + -1;
      if (*local_30 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_38[0] = local_38[0] & 0xfffffde0;
      local_28 = 0;
      uStack_20 = 0;
      local_30 = (int *)0x0;
    }
  }
  FUN_14360bd50(&local_168);
  return;
}



// FUNCTION 1435c2d70 FUN_1435c2d70 body=1729 status=ok
// SIG undefined FUN_1435c2d70(void)

void FUN_1435c2d70(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  ulonglong in_stack_fffffffffffffde8;
  uint *puVar11;
  ulonglong in_stack_fffffffffffffdf0;
  uint local_1f8;
  uint uStack_1f4;
  int *piStack_1f0;
  longlong *plStack_1e8;
  undefined8 uStack_1e0;
  int *local_1d8;
  undefined8 uStack_1d0;
  uint local_1c8 [2];
  int *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  uint local_190 [2];
  undefined1 local_188 [256];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  uint *local_38;
  
  plVar7 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_70 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48);
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_198 = plVar7;
  local_190[0] = param_4;
  if (param_4 != 0) {
    if (param_4 < 9) {
      puVar6 = local_188;
    }
    else {
      FUN_1436130d0(&local_88,param_4);
      puVar6 = local_88;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar6,(void *)(*plVar7 + (ulonglong)(ushort)((short)param_4 - 1) * -0x20),
               (ulonglong)param_4 * 0x20);
    *plVar7 = *plVar7 + (ulonglong)param_4 * -0x20;
  }
  FUN_1435ae740(local_68,param_2,param_3);
  FUN_1435f7f70(&local_198,*(undefined8 *)(param_2 + 0x28),local_68);
  local_38 = (uint *)*local_198;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c340f;
  if (((*local_38 & 0x1f) == 7) || ((*local_38 & 0x1f) == 0xe)) {
    uVar4 = FUN_1435c8e40(&local_1a8,0x428,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
    piVar1 = (int *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    goto LAB_1435c340f;
  }
  local_1c8[0] = 0;
  local_1c0 = (int *)0x0;
  puVar11 = (uint *)(in_stack_fffffffffffffde8 & 0xffffffff00000000);
  local_1d8 = (int *)0x0;
  uStack_1d0 = 0;
  FUN_1435b2320(&local_1d8,param_1,local_38,local_68,puVar11);
  piVar1 = local_1d8;
  if ((((local_1c8[0] & 0x1f) == 0) || (local_1d8 == (int *)0x1)) ||
     ((((byte)local_1d8 >> 1 & 1) != 0 && (((ulonglong)local_1d8 & 0xfffffffffffffffd) == 0)))) {
    uVar4 = FUN_1435c8e40(&local_1a8,0x42d,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
    plVar7 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
LAB_1435c313d:
    plVar7 = plVar7 + 3;
    *(int *)plVar7 = (int)*plVar7 + -1;
    if ((int)*plVar7 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_1f8 = 0;
    piStack_1f0 = (int *)0x0;
    if (((((ulonglong)local_1d8 & 1) == 0) &&
        ((((*local_1d8 << 0x15) >> 0x1b) - 0xcU & 0xfffffffd) == 0)) &&
       (lVar3 = FUN_1435caba0(param_1,local_38), *(int *)(lVar3 + 0x90) == 0x17)) {
      uVar4 = FUN_1435c8e40(&local_1a8,0x40a,param_1);
      FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
      piVar1 = (int *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
LAB_1435c3091:
      uVar2 = local_1f8 & 0x1f;
      if (9 < uVar2) {
        if ((local_1f8 >> 9 & 1) == 0) {
          plVar7 = plStack_1e8;
          if (uVar2 == 10) goto LAB_1435c313d;
          if ((uVar2 != 0xb) && (uVar2 != 0xc)) {
            if (uVar2 - 0xd < 2) {
              plVar7 = uStack_1e0;
              if (((ulonglong)uStack_1e0 & 1) == 0) goto LAB_1435c311d;
              uStack_1e0 = (longlong *)((longlong)uStack_1e0 + -1);
            }
            goto LAB_1435c3148;
          }
          plVar7 = plStack_1e8;
          if (((ulonglong)plStack_1e8 & 1) != 0) {
            plStack_1e8 = (longlong *)((longlong)plStack_1e8 + -1);
            goto LAB_1435c3148;
          }
          goto LAB_1435c311d;
        }
        *piStack_1f0 = *piStack_1f0 + -1;
        if (*piStack_1f0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_1f8 = local_1f8 & 0xfffffde0;
        piStack_1f0 = (int *)0x0;
        plStack_1e8 = (longlong *)0x0;
        uStack_1e0 = (longlong *)0x0;
      }
    }
    else {
      uVar2 = (uint)piVar1 & 3;
      if (((ulonglong)piVar1 & 3) == 0) {
        puVar11 = local_1c8;
        in_stack_fffffffffffffdf0 = 0;
        pcVar5 = (char *)FUN_1435ac440(piVar1,local_res8,param_1,&local_1f8,puVar11,0,0);
        if (*pcVar5 == '\0') goto LAB_1435c3091;
      }
      else if (uVar2 == 1) {
        puVar9 = (uint *)((ulonglong)piVar1 & 0xfffffffffffffffe);
        if (puVar9 != &local_1f8) {
          local_1f8 = *puVar9;
          uStack_1f4 = puVar9[1];
          piStack_1f0 = *(int **)(puVar9 + 2);
          plStack_1e8 = *(longlong **)(puVar9 + 4);
          uStack_1e0 = *(longlong **)(puVar9 + 6);
          uVar2 = local_1f8 & 0x1f;
          if (9 < uVar2) {
            if ((local_1f8 >> 9 & 1) == 0) {
              if (uVar2 == 10) {
                *(int *)(plStack_1e8 + 3) = (int)plStack_1e8[3] + 1;
              }
              else if (((10 < uVar2) &&
                       ((plVar7 = plStack_1e8, uVar2 < 0xd || (plVar7 = uStack_1e0, uVar2 < 0xf))))
                      && (plVar7 != (longlong *)0x0)) {
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) & 0x8fffffff;
              }
            }
            else {
              *piStack_1f0 = *piStack_1f0 + 1;
            }
          }
        }
      }
      else if (uVar2 == 2) {
        uVar8 = (ulonglong)piVar1 & 0xfffffffffffffffd;
        if (uVar8 != 0) {
          *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
        }
        local_1a8._4_4_ = (undefined4)(uVar8 >> 0x20);
        local_1f8 = local_1f8 & 0xffffffec | 0xc;
        plStack_1e8 = (longlong *)(CONCAT44(local_1a8._4_4_,(uint)piVar1) & 0xfffffffffffffffd);
        uStack_1e0 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
        local_1a8 = uVar8;
      }
      uVar2 = local_1f8 & 0x1f;
      if (uVar2 == 0) {
LAB_1435c33aa:
        uVar4 = 0x3f1;
LAB_1435c335a:
        uVar4 = FUN_1435c8e40(&local_1a8,uVar4,param_1);
        FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
        piVar1 = (int *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        uVar2 = local_1f8 & 0x1f;
        if (9 < uVar2) {
          if ((local_1f8 >> 9 & 1) != 0) goto LAB_1435c3228;
LAB_1435c325a:
          plVar7 = plStack_1e8;
          if (uVar2 == 10) goto LAB_1435c313d;
          if ((uVar2 == 0xb) || (uVar2 == 0xc)) {
            if (((ulonglong)plStack_1e8 & 1) == 0) {
LAB_1435c311d:
              if ((plVar7 != (longlong *)0x0) && ((*(uint *)(plVar7 + 1) & 0x3fffff) != 0)) {
                *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) - 1;
                FUN_1434ef880();
              }
            }
            else {
              plStack_1e8 = (longlong *)((longlong)plStack_1e8 + -1);
            }
          }
          else if (uVar2 - 0xd < 2) {
            plVar7 = uStack_1e0;
            if (((ulonglong)uStack_1e0 & 1) == 0) goto LAB_1435c311d;
            uStack_1e0 = (longlong *)((longlong)uStack_1e0 + -1);
          }
        }
      }
      else {
        if (uVar2 == 0xc) {
          bVar10 = plStack_1e8 == (longlong *)0x0;
LAB_1435c31b6:
          if (bVar10) goto LAB_1435c33aa;
        }
        else if (uVar2 == 10) {
          bVar10 = plStack_1e8 == (longlong *)(plStack_1e8[1] + 0x80);
          goto LAB_1435c31b6;
        }
        if ((uVar2 == 7) || (uVar2 == 0xe)) {
          uVar4 = 0x428;
          goto LAB_1435c335a;
        }
        if (uVar2 == 0xc) {
          puVar6 = local_188;
          if (8 < local_190[0]) {
            puVar6 = local_88;
          }
          (**(code **)(*plStack_1e8 + 0x68))
                    (plStack_1e8,local_38,local_190,puVar6,(ulonglong)puVar11 & 0xffffffffffffff00,
                     in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
          uVar2 = local_1f8 & 0x1f;
          if (9 < uVar2) {
            if ((local_1f8 >> 9 & 1) == 0) {
              plVar7 = plStack_1e8;
              if (uVar2 == 10) goto LAB_1435c313d;
              if ((((uVar2 == 0xb) || (uVar2 == 0xc)) || (plVar7 = uStack_1e0, uVar2 - 0xd < 2)) &&
                 (((ulonglong)plVar7 & 1) == 0)) goto LAB_1435c311d;
            }
            else {
              *piStack_1f0 = *piStack_1f0 + -1;
              if (*piStack_1f0 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
            }
          }
          goto LAB_1435c3148;
        }
        uVar4 = FUN_1435c8e40(&local_1a8,0x429,param_1);
        FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
        piVar1 = (int *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        uVar2 = local_1f8 & 0x1f;
        if (uVar2 < 10) goto LAB_1435c3148;
        if ((local_1f8 >> 9 & 1) == 0) goto LAB_1435c325a;
LAB_1435c3228:
        *piStack_1f0 = *piStack_1f0 + -1;
        if (*piStack_1f0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_1f8 = local_1f8 & 0xfffffde0;
        piStack_1f0 = (int *)0x0;
        plStack_1e8 = (longlong *)0x0;
        uStack_1e0 = (longlong *)0x0;
      }
    }
  }
LAB_1435c3148:
  if (9 < ((byte)local_1c8[0] & 0x1f)) {
    if ((local_1c8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1c8);
    }
    else {
      *local_1c0 = *local_1c0 + -1;
      if (*local_1c0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_1c8[0] = local_1c8[0] & 0xfffffde0;
      local_1c0 = (int *)0x0;
      uStack_1b8 = 0;
      local_1b0 = 0;
    }
  }
LAB_1435c340f:
  FUN_1434e6250(local_68);
  FUN_14360bd50(&local_198);
  return;
}



// FUNCTION 1435c3440 FUN_1435c3440 body=1141 status=ok
// SIG undefined FUN_1435c3440(void)

void FUN_1435c3440(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar11;
  uint local_1f8;
  uint uStack_1f4;
  int *piStack_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  uint local_1c8 [2];
  int *local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  uint local_190 [2];
  undefined1 local_188 [256];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  longlong local_38;
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_70 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48);
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_198 = plVar1;
  local_190[0] = param_4;
  if (param_4 != 0) {
    if (param_4 < 9) {
      puVar7 = local_188;
    }
    else {
      FUN_1436130d0(&local_88,param_4);
      puVar7 = local_88;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar7,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_4 - 1) * -0x20),
               (ulonglong)param_4 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_4 * -0x20;
  }
  FUN_1435ae740(local_68,param_2,param_3);
  FUN_1435f7f70(&local_198,*(undefined8 *)(param_2 + 0x28),local_68);
  local_38 = *local_198;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c3892;
  local_1c8[0] = 0;
  local_1c0 = (int *)0x0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_1435b2320(&local_1d8,param_1,local_38,local_68,CONCAT44(uVar11,2));
  if ((((local_1c8[0] & 0x1f) == 0) || (local_1d8 == 1)) ||
     ((((byte)local_1d8 >> 1 & 1) != 0 && ((local_1d8 & 0xfffffffffffffffd) == 0)))) {
    lVar6 = FUN_1435caba0(param_1,local_38);
    if ((*(byte *)(lVar6 + 0x88) >> 1 & 1) != 0) {
      uVar4 = FUN_1435c8e40(&local_1a8,0x3ee,param_1);
      FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
      uVar8 = CONCAT44(uStack_19c,uStack_1a0);
LAB_1435c37f6:
      piVar2 = (int *)(uVar8 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
      goto LAB_1435c3801;
    }
    uVar4 = FUN_1435c8e40(&local_1a8,0x42d,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
    piVar2 = (int *)(CONCAT44(uStack_19c,uStack_1a0) + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
    bVar3 = (byte)local_1c8[0];
  }
  else {
    piStack_1f0 = (int *)0x0;
    local_1f8 = 0;
    uVar10 = (uint)local_1d8 & 3;
    if ((local_1d8 & 3) == 0) {
      pcVar5 = (char *)FUN_1435ac440(local_1d8,local_res8,param_1,&local_1f8,local_1c8,0,1);
      if (*pcVar5 != '\0') goto LAB_1435c3605;
    }
    else {
      if (uVar10 == 1) {
        puVar9 = (uint *)(local_1d8 & 0xfffffffffffffffe);
        if (puVar9 != &local_1f8) {
          local_1f8 = *puVar9;
          uStack_1f4 = puVar9[1];
          piStack_1f0 = *(int **)(puVar9 + 2);
          local_1e8 = *(ulonglong *)(puVar9 + 4);
          uStack_1e0 = *(ulonglong *)(puVar9 + 6);
          uVar10 = local_1f8 & 0x1f;
          if (9 < uVar10) {
            if ((local_1f8 >> 9 & 1) == 0) {
              if (uVar10 == 10) {
                *(int *)(local_1e8 + 0x18) = *(int *)(local_1e8 + 0x18) + 1;
              }
              else if ((10 < uVar10) &&
                      (((uVar8 = local_1e8, uVar10 < 0xd || (uVar8 = uStack_1e0, uVar10 < 0xf)) &&
                       (uVar8 != 0)))) {
                *(int *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1;
                *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) & 0x8fffffff;
              }
            }
            else {
              *piStack_1f0 = *piStack_1f0 + 1;
            }
          }
        }
      }
      else if (uVar10 == 2) {
        uVar8 = local_1d8 & 0xfffffffffffffffd;
        if (uVar8 != 0) {
          *(uint *)(uVar8 + 8) = *(int *)(uVar8 + 8) + 1U & 0x8fffffff;
        }
        local_1a8._4_4_ = (undefined4)(uVar8 >> 0x20);
        local_1f8 = 0xc;
        local_1e8 = CONCAT44(local_1a8._4_4_,(uint)local_1d8) & 0xfffffffffffffffd;
        uStack_1e0 = CONCAT44(uStack_19c,uStack_1a0);
        local_1a8 = uVar8;
      }
LAB_1435c3605:
      FUN_1435168c0(local_38);
      lVar6 = local_38;
      puVar7 = local_188;
      if (8 < local_190[0]) {
        puVar7 = local_88;
      }
      uVar4 = FUN_143590540();
      FUN_1435ce880(param_1,&local_1f8,uVar4,lVar6,local_190,puVar7,1,0);
    }
    uVar10 = local_1f8 & 0x1f;
    if (9 < uVar10) {
      if ((local_1f8 >> 9 & 1) == 0) {
        uVar8 = local_1e8;
        if (uVar10 == 10) goto LAB_1435c37f6;
        if ((((uVar10 == 0xb) || (uVar10 == 0xc)) || (uVar8 = uStack_1e0, uVar10 - 0xd < 2)) &&
           ((((uVar8 & 1) == 0 && (uVar8 != 0)) && ((*(uint *)(uVar8 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piStack_1f0 = *piStack_1f0 + -1;
        if (*piStack_1f0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
LAB_1435c3801:
    bVar3 = (byte)local_1c8[0];
  }
  if (9 < (bVar3 & 0x1f)) {
    if ((local_1c8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1c8);
    }
    else {
      *local_1c0 = *local_1c0 + -1;
      if (*local_1c0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_1c8[0] = local_1c8[0] & 0xfffffde0;
      local_1c0 = (int *)0x0;
      uStack_1b8 = 0;
      local_1b0 = 0;
    }
  }
LAB_1435c3892:
  FUN_1434e6250(local_68);
  FUN_14360bd50(&local_198);
  return;
}



// FUNCTION 1435c38c0 FUN_1435c38c0 body=1094 status=ok
// SIG undefined FUN_1435c38c0(void)

void FUN_1435c38c0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  ulonglong param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_1f8 [2];
  int *local_1f0;
  ulonglong uStack_1e8;
  ulonglong local_1e0;
  uint local_1d8 [2];
  int *local_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  longlong *local_1b8;
  uint local_1b0 [2];
  undefined1 local_1a8 [256];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [48];
  uint local_58 [2];
  int *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  uVar10 = param_5;
  local_1b0[0] = (uint)param_5;
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_90 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48);
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_1b8 = plVar1;
  if (local_1b0[0] != 0) {
    uVar11 = param_5 & 0xffffffff;
    if (local_1b0[0] < 9) {
      puVar7 = local_1a8;
    }
    else {
      FUN_1436130d0(&local_a8,param_5 & 0xffffffff);
      puVar7 = local_a8;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar7,(void *)(*plVar1 + (ulonglong)(ushort)((short)uVar10 - 1) * -0x20),
               uVar11 * 0x20);
    *plVar1 = *plVar1 + uVar11 * -0x20;
  }
  FUN_1435ae740(local_88,param_2,param_4);
  FUN_1435f7f70(&local_1b8,*(undefined8 *)(param_2 + 0x28),local_88);
  local_58[0] = *(uint *)*local_1b8;
  local_50 = *(int **)(*local_1b8 + 8);
  local_48 = *(undefined8 *)(*local_1b8 + 0x10);
  uStack_40 = *(undefined8 *)(*local_1b8 + 0x18);
  *local_1b8 = *local_1b8 + -0x20;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28),local_58);
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c3c76;
  uVar3 = 0;
  local_1f8[0] = 0;
  local_1f0 = (int *)0x0;
  pcVar4 = (char *)FUN_1435b31e0(&param_5,param_1,param_3,local_1f8,local_58,local_88,1);
  if (*pcVar4 == '\0') {
    uVar5 = FUN_1435c8e40(local_38,0x42e,param_1);
    FUN_1435ccf60(param_1,uVar5,&DAT_145b14e70);
LAB_1435c3bb4:
    piVar2 = (int *)(local_30 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  else {
    puVar6 = (uint *)FUN_143590540();
    local_1d8[0] = *puVar6;
    local_1d0 = *(int **)(puVar6 + 2);
    uStack_1c8 = *(ulonglong *)(puVar6 + 4);
    uStack_1c0 = *(ulonglong *)(puVar6 + 6);
    uVar8 = *puVar6 & 0x1f;
    if (9 < uVar8) {
      if ((*puVar6 >> 9 & 1) == 0) {
        if (uVar8 == 10) {
          *(int *)(*(longlong *)(puVar6 + 4) + 0x18) =
               *(int *)(*(longlong *)(puVar6 + 4) + 0x18) + 1;
        }
        else if (10 < uVar8) {
          if (uVar8 < 0xd) {
            lVar9 = *(longlong *)(puVar6 + 4);
          }
          else {
            if (0xe < uVar8) goto LAB_1435c3acb;
            lVar9 = *(longlong *)(puVar6 + 6);
          }
          if (lVar9 != 0) {
            *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        **(int **)(puVar6 + 2) = **(int **)(puVar6 + 2) + 1;
      }
    }
LAB_1435c3acb:
    puVar7 = local_1a8;
    if (8 < local_1b0[0]) {
      puVar7 = local_a8;
    }
    FUN_1435ce880(param_1,local_1f8,local_58,local_1d8,local_1b0,puVar7,uVar3 & 0xffffff00,0);
    uVar3 = local_1d8[0] & 0x1f;
    if (9 < uVar3) {
      if ((local_1d8[0] >> 9 & 1) == 0) {
        local_30 = uStack_1c8;
        if (uVar3 == 10) goto LAB_1435c3bb4;
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar10 = uStack_1c8;
          if ((uStack_1c8 & 1) == 0) {
LAB_1435c3b94:
            if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            uStack_1c8 = uStack_1c8 - 1;
          }
        }
        else if (uVar3 - 0xd < 2) {
          uVar10 = uStack_1c0;
          if ((uStack_1c0 & 1) == 0) goto LAB_1435c3b94;
          uStack_1c0 = uStack_1c0 - 1;
        }
      }
      else {
        *local_1d0 = *local_1d0 + -1;
        if (*local_1d0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_1d8[0] = local_1d8[0] & 0xfffffde0;
        local_1d0 = (int *)0x0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
      }
    }
  }
  uVar3 = local_1f8[0] & 0x1f;
  if (9 < uVar3) {
    if ((local_1f8[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar2 = (int *)(uStack_1e8 + 0x18);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar10 = uStack_1e8;
          if ((uStack_1e8 & 1) != 0) {
            uStack_1e8 = uStack_1e8 - 1;
            goto LAB_1435c3c76;
          }
        }
        else {
          if (1 < uVar3 - 0xd) goto LAB_1435c3c76;
          uVar10 = local_1e0;
          if ((local_1e0 & 1) != 0) {
            local_1e0 = local_1e0 - 1;
            goto LAB_1435c3c76;
          }
        }
        if ((uVar10 != 0) && ((*(uint *)(uVar10 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_1f0 = *local_1f0 + -1;
      if (*local_1f0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_1f8[0] = local_1f8[0] & 0xfffffde0;
      local_1f0 = (int *)0x0;
      uStack_1e8 = 0;
      local_1e0 = 0;
    }
  }
LAB_1435c3c76:
  if (9 < ((byte)local_58[0] & 0x1f)) {
    if ((local_58[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_58);
    }
    else {
      *local_50 = *local_50 + -1;
      if (*local_50 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_58[0] = local_58[0] & 0xfffffde0;
      local_48 = 0;
      uStack_40 = 0;
      local_50 = (int *)0x0;
    }
  }
  FUN_1434e6250(local_88);
  FUN_14360bd50(&local_1b8);
  return;
}



// FUNCTION 1435c3d10 FUN_1435c3d10 body=1713 status=ok
// SIG undefined FUN_1435c3d10(void)

void FUN_1435c3d10(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  uint *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined8 in_stack_fffffffffffffdb8;
  undefined4 uVar11;
  uint in_stack_fffffffffffffdc8;
  uint local_228;
  uint uStack_224;
  int *piStack_220;
  ulonglong local_218;
  undefined8 uStack_210;
  uint local_208 [2];
  int *local_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  uint local_1d8 [2];
  int *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong *local_1a8;
  uint local_1a0 [2];
  undefined1 local_198 [256];
  undefined1 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [48];
  uint local_48 [2];
  int *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdb8 >> 0x20);
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_80 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x48);
  local_98 = (undefined1 *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_1a8 = plVar1;
  local_1a0[0] = param_4;
  if (param_4 != 0) {
    if (param_4 < 9) {
      puVar6 = local_198;
    }
    else {
      FUN_1436130d0(&local_98,param_4);
      puVar6 = local_98;
    }
    _guard_xfg_dispatch_icall_nop
              (puVar6,(void *)(*plVar1 + (ulonglong)(ushort)((short)param_4 - 1) * -0x20),
               (ulonglong)param_4 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_4 * -0x20;
  }
  FUN_1435ae740(local_78,param_2,param_3);
  FUN_1435f7f70(&local_1a8,*(undefined8 *)(param_2 + 0x28),local_78);
  local_48[0] = *(uint *)*local_1a8;
  local_40 = *(int **)(*local_1a8 + 8);
  local_38 = *(undefined8 *)(*local_1a8 + 0x10);
  uStack_30 = *(undefined8 *)(*local_1a8 + 0x18);
  *local_1a8 = *local_1a8 + -0x20;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28),local_48);
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c42a6;
  local_1d8[0] = 0;
  local_1d0 = (int *)0x0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  FUN_1435b2320(&local_1e8,param_1,local_48,local_78,CONCAT44(uVar11,2));
  if ((((local_1d8[0] & 0x1f) == 0) || (local_1e8 == 1)) ||
     ((((byte)local_1e8 >> 1 & 1) != 0 && ((local_1e8 & 0xfffffffffffffffd) == 0)))) {
    lVar7 = FUN_1435caba0(param_1,local_48);
    if ((*(byte *)(lVar7 + 0x88) >> 1 & 1) == 0) {
      uVar8 = FUN_1435c8e40(&local_1b8,0x42d,param_1);
      FUN_1435ccf60(param_1,uVar8,&DAT_145b14e70);
      uVar9 = CONCAT44(uStack_1ac,uStack_1b0);
LAB_1435c4253:
      piVar2 = (int *)(uVar9 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
      goto LAB_1435c425e;
    }
    uVar8 = FUN_1435c8e40(&local_1b8,0x3ee,param_1);
    FUN_1435ccf60(param_1,uVar8,&DAT_145b155b0);
    uVar9 = CONCAT44(uStack_1ac,uStack_1b0);
LAB_1435c4343:
    piVar2 = (int *)(uVar9 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
LAB_1435c434e:
    bVar3 = (byte)local_1d8[0];
  }
  else {
    piStack_220 = (int *)0x0;
    local_228 = 0;
    uVar10 = (uint)local_1e8 & 3;
    if ((local_1e8 & 3) == 0) {
      in_stack_fffffffffffffdc8 = 0;
      pcVar5 = (char *)FUN_1435ac440(local_1e8,local_res8,param_1,&local_228,local_1d8,0,1);
      if (*pcVar5 == '\0') {
        uVar10 = local_228 & 0x1f;
        if (9 < uVar10) {
          if ((local_228 >> 9 & 1) == 0) {
            uVar9 = local_218;
            if (uVar10 == 10) goto LAB_1435c4343;
            if ((((uVar10 == 0xb) || (uVar10 == 0xc)) || (uVar9 = uStack_210, uVar10 - 0xd < 2)) &&
               ((((uVar9 & 1) == 0 && (uVar9 != 0)) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)))) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *piStack_220 = *piStack_220 + -1;
            if (*piStack_220 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
          }
        }
        goto LAB_1435c434e;
      }
    }
    else if (uVar10 == 1) {
      puVar4 = (uint *)(local_1e8 & 0xfffffffffffffffe);
      if (puVar4 != &local_228) {
        local_228 = *puVar4;
        uStack_224 = puVar4[1];
        piStack_220 = *(int **)(puVar4 + 2);
        local_218 = *(ulonglong *)(puVar4 + 4);
        uStack_210 = *(ulonglong *)(puVar4 + 6);
        uVar10 = local_228 & 0x1f;
        if (9 < uVar10) {
          if ((local_228 >> 9 & 1) == 0) {
            if (uVar10 == 10) {
              *(int *)(local_218 + 0x18) = *(int *)(local_218 + 0x18) + 1;
            }
            else if ((10 < uVar10) &&
                    (((uVar9 = local_218, uVar10 < 0xd || (uVar9 = uStack_210, uVar10 < 0xf)) &&
                     (uVar9 != 0)))) {
              *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) & 0x8fffffff;
            }
          }
          else {
            *piStack_220 = *piStack_220 + 1;
          }
        }
      }
    }
    else if (uVar10 == 2) {
      uVar9 = local_1e8 & 0xfffffffffffffffd;
      if (uVar9 != 0) {
        *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
      }
      local_1b8._4_4_ = (undefined4)(uVar9 >> 0x20);
      local_228 = 0xc;
      local_218 = CONCAT44(local_1b8._4_4_,(uint)local_1e8) & 0xfffffffffffffffd;
      uStack_210 = CONCAT44(uStack_1ac,uStack_1b0);
      local_1b8 = uVar9;
    }
    puVar4 = (uint *)FUN_143590540();
    local_208[0] = *puVar4;
    local_200 = *(int **)(puVar4 + 2);
    uStack_1f8 = *(ulonglong *)(puVar4 + 4);
    uStack_1f0 = *(ulonglong *)(puVar4 + 6);
    uVar10 = *puVar4 & 0x1f;
    if (9 < uVar10) {
      if ((*puVar4 >> 9 & 1) == 0) {
        if (uVar10 == 10) {
          *(int *)(*(longlong *)(puVar4 + 4) + 0x18) =
               *(int *)(*(longlong *)(puVar4 + 4) + 0x18) + 1;
        }
        else if (10 < uVar10) {
          if (uVar10 < 0xd) {
            lVar7 = *(longlong *)(puVar4 + 4);
          }
          else {
            if (0xe < uVar10) goto LAB_1435c40e5;
            lVar7 = *(longlong *)(puVar4 + 6);
          }
          if (lVar7 != 0) {
            *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        **(int **)(puVar4 + 2) = **(int **)(puVar4 + 2) + 1;
      }
    }
LAB_1435c40e5:
    puVar6 = local_198;
    if (8 < local_1a0[0]) {
      puVar6 = local_98;
    }
    FUN_1435ce880(param_1,&local_228,local_48,local_208,local_1a0,puVar6,
                  in_stack_fffffffffffffdc8 & 0xffffff00,0);
    uVar10 = local_208[0] & 0x1f;
    if (9 < uVar10) {
      if ((local_208[0] >> 9 & 1) == 0) {
        if (uVar10 == 10) {
          piVar2 = (int *)(uStack_1f8 + 0x18);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
          uVar9 = uStack_1f8;
          if ((uStack_1f8 & 1) == 0) {
LAB_1435c41ae:
            if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            uStack_1f8 = uStack_1f8 - 1;
          }
        }
        else if (uVar10 - 0xd < 2) {
          uVar9 = uStack_1f0;
          if ((uStack_1f0 & 1) == 0) goto LAB_1435c41ae;
          uStack_1f0 = uStack_1f0 - 1;
        }
      }
      else {
        *local_200 = *local_200 + -1;
        if (*local_200 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_208[0] = local_208[0] & 0xfffffde0;
        local_200 = (int *)0x0;
        uStack_1f8 = 0;
        uStack_1f0 = 0;
      }
    }
    uVar10 = local_228 & 0x1f;
    if (9 < uVar10) {
      if ((local_228 >> 9 & 1) == 0) {
        uVar9 = local_218;
        if (uVar10 == 10) goto LAB_1435c4253;
        if (((((uVar10 == 0xb) || (uVar10 == 0xc)) || (uVar9 = uStack_210, uVar10 - 0xd < 2)) &&
            (((uVar9 & 1) == 0 && (uVar9 != 0)))) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piStack_220 = *piStack_220 + -1;
        if (*piStack_220 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
LAB_1435c425e:
    bVar3 = (byte)local_1d8[0];
  }
  if (9 < (bVar3 & 0x1f)) {
    if ((local_1d8[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_1d8);
    }
    else {
      *local_1d0 = *local_1d0 + -1;
      if (*local_1d0 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_1d8[0] = local_1d8[0] & 0xfffffde0;
      local_1d0 = (int *)0x0;
      uStack_1c8 = 0;
      local_1c0 = 0;
    }
  }
LAB_1435c42a6:
  if (9 < ((byte)local_48[0] & 0x1f)) {
    if ((local_48[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_48);
    }
    else {
      *local_40 = *local_40 + -1;
      if (*local_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_48[0] = local_48[0] & 0xfffffde0;
      local_38 = 0;
      uStack_30 = 0;
      local_40 = (int *)0x0;
    }
  }
  FUN_1434e6250(local_78);
  FUN_14360bd50(&local_1a8);
  return;
}



// FUNCTION 1435c43d0 FUN_1435c43d0 body=398 status=ok
// SIG undefined FUN_1435c43d0(void)

void FUN_1435c43d0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  void *_Src;
  undefined1 local_158 [8];
  longlong local_150;
  longlong *local_148;
  uint local_140;
  undefined1 local_138 [256];
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 *local_18;
  
  plVar1 = (longlong *)(param_1 + 0x58);
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = *(undefined8 *)(param_1 + 0x48);
  local_148 = plVar1;
  local_140 = param_2;
  if (param_2 != 0) {
    if (param_2 < 9) {
      _Src = (void *)(*plVar1 + (ulonglong)(param_2 - 1 & 0xffff) * -0x20);
      puVar5 = local_138;
    }
    else {
      FUN_1436130d0(&local_38,param_2);
      _Src = (void *)(*plVar1 + (ulonglong)(param_2 - 1 & 0xffff) * -0x20);
      puVar5 = local_38;
    }
    _guard_xfg_dispatch_icall_nop(puVar5,_Src,(ulonglong)param_2 * 0x20);
    *plVar1 = *plVar1 + (ulonglong)param_2 * -0x20;
  }
  local_18 = (undefined4 *)*local_148;
  FUN_14360e8c0(param_1);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if ((((byte)*local_18 & 0x1f) == 0xc) &&
       (plVar1 = *(longlong **)(local_18 + 4), (*(byte *)(plVar1[5] + 0x88) >> 5 & 1) != 0)) {
      puVar5 = local_138;
      if (8 < local_140) {
        puVar5 = local_38;
      }
      lVar3 = (**(code **)(*plVar1 + 0xc0))(plVar1,param_2,puVar5);
      plVar1 = *(longlong **)(lVar3 + 0xd8);
      if (plVar1[0x15] == 0) {
        (**(code **)(*plVar1 + 0x50))(plVar1);
      }
      FUN_1435903c0(local_18,plVar1[0x15]);
    }
    else {
      uVar4 = FUN_1435c8e40(local_158,0x467,param_1);
      FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
      piVar2 = (int *)(local_150 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
    }
  }
  FUN_14360bd50(&local_148);
  return;
}



// FUNCTION 1435c4570 FUN_1435c4570 body=839 status=ok
// SIG undefined FUN_1435c4570(void)

void FUN_1435c4570(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  undefined *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iVar15;
  undefined4 local_res10 [2];
  ulonglong local_res18;
  ulonglong local_res20;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  int *local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_58;
  ulonglong uStack_50;
  
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 0xd8);
  lVar12 = *(longlong *)(lVar14 + 0xa0);
  if (lVar12 == 0) {
    local_res10[0] = 0x152;
    plVar4 = *(longlong **)(*(longlong *)(lVar14 + 0x98) + 0x48);
    lVar12 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(lVar14 + 0x80),local_res10);
  }
  else {
    *(undefined8 *)(lVar14 + 0xa0) = *(undefined8 *)(lVar12 + 0x28);
  }
  if (lVar12 == 0) {
    local_res20 = 0;
  }
  else {
    local_res20 = UInterpTrackInst::UInterpTrackInst(lVar12,lVar14);
  }
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(local_res20 + 0x30);
    local_res18 = (ulonglong)param_2;
    do {
      puVar5 = *(uint **)(param_1 + 0x58);
      local_98 = local_98 & 0xffffffff00000000;
      uVar3 = *puVar5;
      piVar6 = *(int **)(puVar5 + 2);
      local_78 = puVar5[4];
      uStack_74 = puVar5[5];
      uStack_70 = puVar5[6];
      uStack_6c = puVar5[7];
      *(uint **)(param_1 + 0x58) = puVar5 + -8;
      uVar11 = puVar5[-8];
      uVar9 = *(ulonglong *)(puVar5 + -4);
      uStack_50 = *(ulonglong *)(puVar5 + -2);
      piVar7 = *(int **)(puVar5 + -6);
      *(uint **)(param_1 + 0x58) = puVar5 + -0x10;
      *(int *)(uVar9 + 0x18) = *(int *)(uVar9 + 0x18) + 2;
      puVar8 = (undefined *)*puVar1;
      uStack_90 = uVar9;
      local_88 = uVar3;
      local_80 = piVar6;
      local_58 = uVar9;
      if (puVar8 == &DAT_1467d9aa0) {
        iVar15 = 8;
LAB_1435c46ab:
        FUN_143614420(puVar1,iVar15,0,0);
      }
      else if (*(uint *)(puVar8 + 0x18) <= *(uint *)(puVar8 + 8)) {
        iVar15 = *(int *)(puVar8 + 0x30) * 2 + 2;
        goto LAB_1435c46ab;
      }
      FUN_143613ea0(*puVar1,&local_98);
      piVar2 = (int *)(uVar9 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920(uVar9);
      }
      piVar2 = (int *)(uVar9 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920(uVar9);
      }
      uVar10 = uVar11 & 0x1f;
      if (9 < uVar10) {
        if ((uVar11 >> 9 & 1) == 0) {
          if (uVar10 == 10) {
            piVar7 = (int *)(uVar9 + 0x18);
            *piVar7 = *piVar7 + -1;
            if (*piVar7 == 0) {
              FUN_14335f920(uVar9);
            }
          }
          else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
            if (((local_58 & 1) == 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880(uVar9);
            }
          }
          else if ((((uVar10 - 0xd < 2) && ((uStack_50 & 1) == 0)) && (uStack_50 != 0)) &&
                  ((*(uint *)(uStack_50 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uStack_50 + 8) = *(uint *)(uStack_50 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar7);
          }
        }
      }
      uVar11 = uVar3 & 0x1f;
      if (9 < uVar11) {
        if ((uVar3 >> 9 & 1) == 0) {
          if (uVar11 == 10) {
            piVar6 = (int *)(CONCAT44(uStack_74,local_78) + 0x18);
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              FUN_14335f920();
            }
          }
          else if ((uVar11 == 0xb) || (uVar11 == 0xc)) {
            if ((local_78 & 1) == 0) {
              lVar14 = CONCAT44(uStack_74,local_78);
              goto LAB_1435c47db;
            }
          }
          else if ((uVar11 - 0xd < 2) && ((uStack_70 & 1) == 0)) {
            lVar14 = CONCAT44(uStack_6c,uStack_70);
LAB_1435c47db:
            if ((lVar14 != 0) && ((*(uint *)(lVar14 + 8) & 0x3fffff) != 0)) {
              *(uint *)(lVar14 + 8) = *(uint *)(lVar14 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *piVar6 = *piVar6 + -1;
          if (*piVar6 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar6);
          }
        }
      }
      local_res18 = local_res18 - 1;
    } while (local_res18 != 0);
    local_res18 = 0;
  }
  lVar14 = *(longlong *)(param_1 + 0x58);
  puVar13 = (undefined4 *)(lVar14 + 0x20);
  *(undefined4 **)(param_1 + 0x58) = puVar13;
  if (puVar13 != (undefined4 *)0x0) {
    *puVar13 = 0xc;
    *(undefined8 *)(lVar14 + 0x28) = 0;
    local_98._0_4_ = (undefined4)local_res20;
    local_98._4_4_ = (undefined4)(local_res20 >> 0x20);
    *(undefined4 *)(lVar14 + 0x30) = (undefined4)local_98;
    *(undefined4 *)(lVar14 + 0x34) = local_98._4_4_;
    *(undefined4 *)(lVar14 + 0x38) = (undefined4)uStack_90;
    *(undefined4 *)(lVar14 + 0x3c) = uStack_90._4_4_;
    if (local_res20 != 0) {
      *(uint *)(local_res20 + 8) = *(int *)(local_res20 + 8) + 1U & 0x8fffffff;
    }
  }
  if ((((local_res20 & 1) == 0) && (local_res20 != 0)) &&
     ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
    local_98 = local_res20;
    FUN_1434ef880(local_res20);
  }
  return;
}



// FUNCTION 1435c48c0 FUN_1435c48c0 body=254 status=ok
// SIG undefined FUN_1435c48c0(void)

void FUN_1435c48c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 local_res10 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x248) + 0xd8);
  lVar3 = *(longlong *)(lVar1 + 0xa0);
  if (lVar3 == 0) {
    local_res10[0] = 0x152;
    plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x98) + 0x48);
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar1 + 0x80),local_res10);
  }
  else {
    *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar3 + 0x28);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1434b64a0(lVar3,lVar1);
  }
  FUN_1434b4490(uVar4 + 0x40,param_1 + 0x58,param_2);
  lVar1 = *(longlong *)(param_1 + 0x58);
  puVar5 = (undefined4 *)(lVar1 + 0x20);
  *(undefined4 **)(param_1 + 0x58) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xc;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    local_18 = (undefined4)uVar4;
    uStack_14 = (undefined4)(uVar4 >> 0x20);
    *(undefined4 *)(lVar1 + 0x30) = local_18;
    *(undefined4 *)(lVar1 + 0x34) = uStack_14;
    *(undefined4 *)(lVar1 + 0x38) = uStack_10;
    *(undefined4 *)(lVar1 + 0x3c) = uStack_c;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
  }
  if ((((uVar4 & 1) == 0) && (uVar4 != 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
    FUN_1434ef880(uVar4);
  }
  return;
}



// FUNCTION 1435c49d0 FUN_1435c49d0 body=197 status=ok
// SIG undefined FUN_1435c49d0(void)

void FUN_1435c49d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 local_res8 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar2 = *(longlong *)(param_2 + 0xa0);
  if (lVar2 == 0) {
    local_res8[0] = 0x152;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x98) + 0x48);
    lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,*(undefined4 *)(param_2 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(lVar2 + 0x28);
  }
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_1435b9d40(lVar2,param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  puVar4 = (undefined4 *)(lVar2 + 0x20);
  *(undefined4 **)(param_1 + 0x58) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0xc;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    local_18 = (undefined4)uVar3;
    uStack_14 = (undefined4)(uVar3 >> 0x20);
    *(undefined4 *)(lVar2 + 0x30) = local_18;
    *(undefined4 *)(lVar2 + 0x34) = uStack_14;
    *(undefined4 *)(lVar2 + 0x38) = uStack_10;
    *(undefined4 *)(lVar2 + 0x3c) = uStack_c;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
  }
  if ((((uVar3 & 1) == 0) && (uVar3 != 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
    FUN_1434ef880();
  }
  return;
}



// FUNCTION 1435c4aa0 FUN_1435c4aa0 body=752 status=ok
// SIG undefined FUN_1435c4aa0(void)

void FUN_1435c4aa0(longlong param_1,longlong param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulonglong *puVar11;
  int *piVar12;
  bool bVar13;
  undefined8 local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res8 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x78) + (ulonglong)param_3 * 8);
  local_84 = 0xffffffffffffffff;
  local_7c = 0xffffffff;
  Scaleform::GFx::AS3::Abc::ReadInstanceHeader(&local_res8,local_88);
  puVar2 = *(uint **)(param_1 + 0x58);
  uVar6 = *puVar2 & 0x1f;
  if (uVar6 == 0) {
LAB_1435c4b7d:
    if (local_84._4_4_ == 0) goto LAB_1435c4b83;
  }
  else {
    if (uVar6 == 0xc) {
      bVar13 = *(longlong *)(puVar2 + 4) == 0;
LAB_1435c4b19:
      if (bVar13) goto LAB_1435c4b7d;
    }
    else if (uVar6 == 10) {
      bVar13 = *(longlong *)(puVar2 + 4) == *(longlong *)(*(longlong *)(puVar2 + 4) + 8) + 0x80;
      goto LAB_1435c4b19;
    }
    lVar8 = FUN_1435caba0(param_1,puVar2);
    if ((*(byte *)(lVar8 + 0x88) >> 5 & 1) != 0) {
LAB_1435c4b83:
      piVar12 = (int *)((longlong)(int)local_84 * 0x10 +
                       *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148));
      lVar8 = FUN_1435ba6d0(param_2,(longlong)*piVar12);
      if ((0xc < *(uint *)(*(undefined8 **)(lVar8 + 0x38) + 4)) &&
         (iVar7 = strncmp((char *)**(undefined8 **)(lVar8 + 0x38),"scaleform.gfx",0xd), iVar7 == 0))
      {
        FUN_1435ba8a0(param_2,&local_res10,(longlong)piVar12[2]);
        local_78 = CONCAT44(local_78._4_4_,10);
        lStack_70 = 0;
        local_68 = local_res10;
        lVar5 = local_68;
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        plVar3 = *(longlong **)(param_1 + 0x2c0);
        local_58 = 0;
        if (lVar8 != 0) {
          *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
        }
        local_68._0_4_ = (undefined4)local_res10;
        local_68._4_4_ = (undefined4)((ulonglong)local_res10 >> 0x20);
        local_48 = 10;
        uStack_44 = local_78._4_4_;
        uStack_40 = 0;
        uStack_3c = 0;
        local_38 = (undefined4)local_68;
        uStack_34 = local_68._4_4_;
        uStack_30 = uStack_60;
        uStack_2c = uStack_5c;
        *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
        local_68 = lVar5;
        uStack_50 = lVar8;
        FUN_1435aef90(&local_58,0);
        pcVar10 = (char *)(**(code **)(*plVar3 + 0x28))(plVar3,local_res18,&local_58,puVar2);
        cVar1 = *pcVar10;
        FUN_1434e6250(&local_58);
        piVar12 = (int *)(local_res10 + 0x18);
        *piVar12 = *piVar12 + -1;
        if (*piVar12 == 0) {
          FUN_14335f920(local_res10);
        }
        if (cVar1 == '\0') {
          uVar9 = FUN_1435c8e40(&local_78,0x42d,param_1);
          FUN_1435ccf60(param_1,uVar9,&DAT_145b14e70);
          piVar12 = (int *)(lStack_70 + 0x18);
          *piVar12 = *piVar12 + -1;
          if (*piVar12 == 0) {
            FUN_14335f920();
          }
        }
        piVar12 = (int *)(local_res10 + 0x18);
        *piVar12 = *piVar12 + -1;
        if (*piVar12 != 0) {
          return;
        }
        FUN_14335f920(local_res10);
        return;
      }
      lVar8 = FUN_1435cf010(param_1,param_2,local_84 & 0xffffffff);
      if (*(longlong *)(*(longlong *)(lVar8 + 0xd8) + 0xa8) != 0) {
        FUN_1435903c0(puVar2,*(undefined8 *)(*(longlong *)(lVar8 + 0xd8) + 0xa8));
        return;
      }
      local_58 = 0xc;
      uStack_50 = 0;
      puVar11 = (ulonglong *)FUN_1434e1250(lVar8,&local_res10);
      uVar4 = *puVar11;
      local_78 = uVar4;
      if (&local_58 != puVar2) {
        if (uVar4 != 0) {
          *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
        }
        FUN_143603d30(puVar2);
        *puVar2 = local_58;
        puVar2[1] = uStack_54;
        puVar2[2] = (uint)uStack_50;
        puVar2[3] = uStack_50._4_4_;
        *(ulonglong *)(puVar2 + 4) = local_78;
        *(longlong *)(puVar2 + 6) = lStack_70;
      }
      if ((uVar4 & 1) != 0) {
        return;
      }
      if (uVar4 == 0) {
        return;
      }
      if ((*(uint *)(uVar4 + 8) & 0x3fffff) == 0) {
        return;
      }
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
      return;
    }
  }
  uVar9 = FUN_1435c8e40(&local_78,0x3f1,param_1);
  FUN_1435ccf60(param_1,uVar9,&DAT_145b155b0);
  piVar12 = (int *)(lStack_70 + 0x18);
  *piVar12 = *piVar12 + -1;
  if (*piVar12 != 0) {
    return;
  }
  FUN_14335f920();
  return;
}



// FUNCTION 1435c4da0 FUN_1435c4da0 body=497 status=ok
// SIG undefined FUN_1435c4da0(void)

void FUN_1435c4da0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong local_res8;
  ulonglong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 *local_48;
  undefined1 local_40 [48];
  undefined4 *local_10;
  
  local_48 = (undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x58);
  FUN_1435ae740(local_40);
  FUN_1435f7f70(&local_48,*(undefined8 *)(param_2 + 0x28),local_40);
  local_10 = (undefined4 *)*local_48;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_1 + 0xb8) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x50);
    if ((char)plVar2[5] != '\0') {
      if ((((byte)*local_10 & 0x1f) == 0xc) &&
         (plVar3 = *(longlong **)(local_10 + 4), plVar3 != (longlong *)0x0)) {
        *(uint *)(plVar3 + 1) = (int)plVar3[1] + 1U & 0x8fffffff;
        uVar5 = (**(code **)(*plVar2 + 0x70))();
        FUN_1434ef540(&local_res8,uVar5);
        puVar4 = local_10;
        uStack_60 = 0;
        local_68 = 0xc;
        local_78 = local_res8;
        if (&local_68 != local_10) {
          if (local_res8 != 0) {
            *(uint *)(local_res8 + 8) = *(int *)(local_res8 + 8) + 1U & 0x8fffffff;
          }
          FUN_143603d30(local_10);
          *puVar4 = local_68;
          puVar4[1] = uStack_64;
          puVar4[2] = (undefined4)uStack_60;
          puVar4[3] = uStack_60._4_4_;
          *(ulonglong *)(puVar4 + 4) = local_78;
          *(longlong *)(puVar4 + 6) = lStack_70;
        }
        if ((((local_res8 & 1) == 0) && (local_res8 != 0)) &&
           ((*(uint *)(local_res8 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_res8 + 8) = *(uint *)(local_res8 + 8) - 1;
          FUN_1434ef880(local_res8);
        }
        (**(code **)(*plVar3 + 0x40))(plVar3,local_res8,local_40);
        if ((((ulonglong)plVar3 & 1) == 0) && ((*(uint *)(plVar3 + 1) & 0x3fffff) != 0)) {
          *(uint *)(plVar3 + 1) = *(uint *)(plVar3 + 1) - 1;
          FUN_1434ef880(plVar3);
        }
      }
      else {
        FUN_143611f90(param_1 + 0x58);
        uVar5 = FUN_1435c8e40(&local_78,0x3f8,param_1);
        FUN_1435ccf60(param_1,uVar5,&DAT_145b155b0);
        piVar1 = (int *)(lStack_70 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      FUN_1434e6250(local_40);
      return;
    }
    uVar5 = FUN_1435c8e40(&local_78,0x3e9,param_1);
    FUN_1435ccf60(param_1,uVar5,&DAT_145b15be8);
    piVar1 = (int *)(lStack_70 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  FUN_1434e6250(local_40);
  return;
}



// FUNCTION 1435c4fa0 FUN_1435c4fa0 body=806 status=ok
// SIG undefined FUN_1435c4fa0(void)

void FUN_1435c4fa0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong in_stack_ffffffffffffff58;
  undefined1 local_98 [8];
  longlong local_90;
  ulonglong local_88;
  undefined8 uStack_80;
  uint local_78 [2];
  int *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50 [56];
  
  local_58 = *(longlong *)(param_2 + 0x28) + 0x58;
  FUN_1435ae740(local_50);
  FUN_1435f7f70(&local_58,*(undefined8 *)(param_2 + 0x28),local_50);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    lVar3 = *(longlong *)(param_2 + 0x30);
    local_78[0] = 0;
    lVar8 = (*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0xa0)) + 0x20 >> 5;
    local_70 = (int *)0x0;
    local_88 = 0;
    uStack_80 = 0;
    if (lVar8 == 0) {
      bVar7 = 0;
    }
    else {
      lVar9 = lVar8 << 5;
      do {
        in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
        FUN_1435b2460(&local_88,param_1,*(longlong *)(param_1 + 0xa0) + -0x20 + lVar9,local_50,
                      in_stack_ffffffffffffff58);
        bVar7 = (byte)local_88;
        if ((((local_78[0] & 0x1f) != 0) && (local_88 != 1)) &&
           (((bVar7 >> 1 & 1) == 0 || ((local_88 & 0xfffffffffffffffd) != 0)))) break;
        lVar9 = lVar9 + -0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (((((local_78[0] & 0x1f) == 0) || (local_88 == 1)) ||
        (((bVar7 >> 1 & 1) != 0 && ((local_88 & 0xfffffffffffffffd) == 0)))) &&
       (lVar8 = (*param_4 - param_4[1]) + 0x20 >> 5, lVar8 != 0)) {
      lVar9 = lVar8 << 5;
      do {
        in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffff00000000;
        FUN_1435b2460(&local_88,param_1,param_4[1] + -0x20 + lVar9,local_50,
                      in_stack_ffffffffffffff58);
        bVar7 = (byte)local_88;
        if ((((local_78[0] & 0x1f) != 0) && (local_88 != 1)) &&
           (((bVar7 >> 1 & 1) == 0 || ((local_88 & 0xfffffffffffffffd) != 0)))) break;
        lVar9 = lVar9 + -0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((((local_78[0] & 0x1f) == 0) || (local_88 == 1)) ||
       (((bVar7 >> 1 & 1) != 0 && ((local_88 & 0xfffffffffffffffd) == 0)))) {
      cVar4 = Scaleform::GFx::AS3::Multiname::IsAnyType(local_50);
      if (cVar4 == '\0') {
        lVar8 = *(longlong *)(lVar3 + 0x28);
        if (((lVar8 == 0) ||
            (puVar5 = (undefined8 *)FUN_1435be300(lVar8,local_50), puVar5 == (undefined8 *)0x0)) &&
           (puVar5 = (undefined8 *)FUN_143610150(lVar3 + 0x30,local_50), puVar5 == (undefined8 *)0x0
           )) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar5;
        }
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 0x200);
      }
      FUN_1435b21f0(&local_88,param_1,param_1 + 0xe8,local_50,uVar6);
      bVar7 = (byte)local_88;
    }
    if ((((local_78[0] & 0x1f) == 0) || (local_88 == 1)) ||
       (((bVar7 >> 1 & 1) != 0 && ((local_88 & 0xfffffffffffffffd) == 0)))) {
      uVar6 = FUN_1435c8e40(local_98,0x429,param_1);
      FUN_1435ccf60(param_1,uVar6,&DAT_145b14e70);
      piVar2 = (int *)(local_90 + 0x18);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_14335f920();
      }
      bVar7 = (byte)local_78[0];
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x58);
      *plVar1 = *plVar1 + 0x20;
      if (*plVar1 != 0) {
        FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),local_78);
      }
      bVar7 = (byte)local_78[0];
    }
    if (9 < (bVar7 & 0x1f)) {
      if ((local_78[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_78);
      }
      else {
        *local_70 = *local_70 + -1;
        if (*local_70 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_78[0] = local_78[0] & 0xfffffde0;
        local_70 = (int *)0x0;
        uStack_68 = 0;
        local_60 = 0;
      }
    }
    FUN_1434e6250(local_50);
  }
  else {
    FUN_1434e6250(local_50);
  }
  return;
}



// FUNCTION 1435c52d0 FUN_1435c52d0 body=846 status=ok
// SIG undefined FUN_1435c52d0(void)

void FUN_1435c52d0(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong local_a8 [2];
  uint local_98 [2];
  int *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70 [64];
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_78 = *(longlong *)(param_2 + 0x28) + 0x58;
  FUN_1435ae740(local_70);
  FUN_1435f7f70(&local_78,*(undefined8 *)(param_2 + 0x28),local_70);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    lVar7 = *(longlong *)(param_2 + 0x30);
    local_98[0] = 0;
    lVar8 = (*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0xa0)) + 0x20 >> 5;
    local_90 = (int *)0x0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    if (lVar8 == 0) {
      bVar6 = 0;
    }
    else {
      lVar9 = lVar8 << 5;
      do {
        in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
        FUN_1435b2460(local_a8,param_1,*(longlong *)(param_1 + 0xa0) + -0x20 + lVar9,local_70,
                      in_stack_ffffffffffffff48);
        bVar6 = (byte)local_a8[0];
        if ((((local_98[0] & 0x1f) != 0) && (local_a8[0] != 1)) &&
           (((bVar6 >> 1 & 1) == 0 || ((local_a8[0] & 0xfffffffffffffffd) != 0)))) break;
        lVar9 = lVar9 + -0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (((((local_98[0] & 0x1f) == 0) || (local_a8[0] == 1)) ||
        (((bVar6 >> 1 & 1) != 0 && ((local_a8[0] & 0xfffffffffffffffd) == 0)))) &&
       (lVar8 = (*param_4 - param_4[1]) + 0x20 >> 5, lVar8 != 0)) {
      lVar9 = lVar8 << 5;
      do {
        in_stack_ffffffffffffff48 = in_stack_ffffffffffffff48 & 0xffffffff00000000;
        FUN_1435b2460(local_a8,param_1,param_4[1] + -0x20 + lVar9,local_70,in_stack_ffffffffffffff48
                     );
        bVar6 = (byte)local_a8[0];
        if ((((local_98[0] & 0x1f) != 0) && (local_a8[0] != 1)) &&
           (((bVar6 >> 1 & 1) == 0 || ((local_a8[0] & 0xfffffffffffffffd) != 0)))) break;
        lVar9 = lVar9 + -0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((((local_98[0] & 0x1f) == 0) || (local_a8[0] == 1)) ||
       (((bVar6 >> 1 & 1) != 0 && ((local_a8[0] & 0xfffffffffffffffd) == 0)))) {
      cVar2 = Scaleform::GFx::AS3::Multiname::IsAnyType(local_70);
      if (cVar2 == '\0') {
        lVar8 = *(longlong *)(lVar7 + 0x28);
        if (((lVar8 == 0) ||
            (puVar3 = (undefined8 *)FUN_1435be300(lVar8,local_70), puVar3 == (undefined8 *)0x0)) &&
           (puVar3 = (undefined8 *)FUN_143610150(lVar7 + 0x30,local_70), puVar3 == (undefined8 *)0x0
           )) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar3;
        }
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x200);
      }
      FUN_1435b21f0(local_a8,param_1,param_1 + 0xe8,local_70,uVar4);
      bVar6 = (byte)local_a8[0];
    }
    if ((((local_98[0] & 0x1f) == 0) || (local_a8[0] == 1)) ||
       (((bVar6 >> 1 & 1) != 0 && ((local_a8[0] & 0xfffffffffffffffd) == 0)))) {
      local_30 = param_5;
      uVar1 = local_30;
      if (param_5 != 0) {
        *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
      }
      lVar7 = *(longlong *)(param_1 + 0x58);
      puVar5 = (undefined4 *)(lVar7 + 0x20);
      *(undefined4 **)(param_1 + 0x58) = puVar5;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xc;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        local_30._0_4_ = (undefined4)param_5;
        local_30._4_4_ = (undefined4)(param_5 >> 0x20);
        *(undefined4 *)(lVar7 + 0x30) = (undefined4)local_30;
        *(undefined4 *)(lVar7 + 0x34) = local_30._4_4_;
        *(undefined4 *)(lVar7 + 0x38) = uStack_28;
        *(undefined4 *)(lVar7 + 0x3c) = uStack_24;
        if (param_5 != 0) {
          *(uint *)(param_5 + 8) = *(int *)(param_5 + 8) + 1U & 0x8fffffff;
        }
      }
      local_30 = uVar1;
      if ((((param_5 & 1) == 0) && (param_5 != 0)) && ((*(uint *)(param_5 + 8) & 0x3fffff) != 0)) {
        *(uint *)(param_5 + 8) = *(uint *)(param_5 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x58) + 0x20;
      *(longlong *)(param_1 + 0x58) = lVar7;
      if (lVar7 != 0) {
        FUN_14360ab50(lVar7,local_98);
      }
    }
    if (9 < ((byte)local_98[0] & 0x1f)) {
      if ((local_98[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_98);
      }
      else {
        *local_90 = *local_90 + -1;
        if (*local_90 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_98[0] = local_98[0] & 0xfffffde0;
        local_90 = (int *)0x0;
        uStack_88 = 0;
        local_80 = 0;
      }
    }
  }
  FUN_1434e6250(local_70);
  return;
}



// FUNCTION 1435c5630 FUN_1435c5630 body=1411 status=ok
// SIG undefined FUN_1435c5630(void)

void FUN_1435c5630(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res18 [16];
  ulonglong in_stack_ffffffffffffff28;
  uint local_b8;
  uint uStack_b4;
  int *piStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong local_98 [2];
  uint local_88 [2];
  int *local_80;
  longlong *local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [48];
  
  if ((((byte)*(uint *)(param_3 + 0xc) & 3) == 1) && ((*(uint *)(param_3 + 0xc) >> 2 & 1) == 0)) {
    uVar4 = FUN_1435c8e40(&local_68,0x436,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
    piVar1 = (int *)(CONCAT44(uStack_5c,uStack_60) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  local_88[0] = 0;
  local_80 = (int *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_1435ae740(local_58);
  lVar2 = *(longlong *)(param_2 + 0x30);
  lVar10 = (*(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0xa0)) + 0x20 >> 5;
  if (lVar10 == 0) {
    uVar9 = local_98[0] & 0xff;
  }
  else {
    lVar11 = lVar10 << 5;
    do {
      in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
      FUN_1435b2460(local_98,param_1,*(longlong *)(param_1 + 0xa0) + -0x20 + lVar11,local_58,
                    in_stack_ffffffffffffff28);
      uVar9 = local_98[0] & 0xff;
      if ((((local_88[0] & 0x1f) != 0) && (local_98[0] != 1)) &&
         ((((byte)local_98[0] >> 1 & 1) == 0 || ((local_98[0] & 0xfffffffffffffffd) != 0)))) break;
      lVar11 = lVar11 + -0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (((((local_88[0] & 0x1f) == 0) || (local_98[0] == 1)) ||
      ((((byte)uVar9 >> 1 & 1) != 0 && ((local_98[0] & 0xfffffffffffffffd) == 0)))) &&
     (lVar10 = (*param_4 - param_4[1]) + 0x20 >> 5, lVar10 != 0)) {
    lVar11 = lVar10 << 5;
    do {
      in_stack_ffffffffffffff28 = in_stack_ffffffffffffff28 & 0xffffffff00000000;
      FUN_1435b2460(local_98,param_1,param_4[1] + -0x20 + lVar11,local_58,in_stack_ffffffffffffff28)
      ;
      uVar9 = local_98[0] & 0xff;
      if ((((local_88[0] & 0x1f) != 0) && (local_98[0] != 1)) &&
         ((((byte)local_98[0] >> 1 & 1) == 0 || ((local_98[0] & 0xfffffffffffffffd) != 0)))) break;
      lVar11 = lVar11 + -0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((((local_88[0] & 0x1f) == 0) || (local_98[0] == 1)) ||
     ((((byte)uVar9 >> 1 & 1) != 0 && ((local_98[0] & 0xfffffffffffffffd) == 0)))) {
    cVar3 = Scaleform::GFx::AS3::Multiname::IsAnyType(local_58);
    if (cVar3 == '\0') {
      lVar10 = *(longlong *)(lVar2 + 0x28);
      if (((lVar10 == 0) ||
          (puVar5 = (undefined8 *)FUN_1435be300(lVar10,local_58), puVar5 == (undefined8 *)0x0)) &&
         (puVar5 = (undefined8 *)FUN_143610150(lVar2 + 0x30,local_58), puVar5 == (undefined8 *)0x0))
      {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar5;
      }
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x200);
    }
    FUN_1435b21f0(local_98,param_1,param_1 + 0xe8,local_58,uVar4);
    uVar9 = local_98[0] & 0xff;
  }
  if ((((local_88[0] & 0x1f) == 0) || (local_98[0] == 1)) ||
     (((uVar9 >> 1 & 1) != 0 && ((local_98[0] & 0xfffffffffffffffd) == 0)))) {
    uVar4 = FUN_1435c8e40(&local_68,0x429,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
    uVar9 = CONCAT44(uStack_5c,uStack_60);
LAB_1435c5b55:
    piVar1 = (int *)(uVar9 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    local_b8 = 0;
    piStack_b0 = (int *)0x0;
    if (((local_88[0] & 0x1f) == 0xc) && (local_78 != (longlong *)0x0)) {
      pcVar6 = (char *)(**(code **)(*local_78 + 0x28))(local_78,local_res18,local_58,&local_b8);
      if (*pcVar6 != '\0') goto LAB_1435c58f4;
LAB_1435c5a5b:
      uVar7 = local_b8 & 0x1f;
      if (uVar7 < 10) goto LAB_1435c5b60;
      if ((local_b8 >> 9 & 1) != 0) {
        *piStack_b0 = *piStack_b0 + -1;
        if (*piStack_b0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_b8 = local_b8 & 0xfffffde0;
        piStack_b0 = (int *)0x0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        goto LAB_1435c5b60;
      }
      uVar9 = uStack_a8;
      if (uVar7 == 10) goto LAB_1435c5b55;
      if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
        if ((uStack_a8 & 1) != 0) {
          uStack_a8 = uStack_a8 - 1;
          goto LAB_1435c5b60;
        }
      }
      else {
        if (1 < uVar7 - 0xd) goto LAB_1435c5b60;
        uVar9 = uStack_a0;
        if ((uStack_a0 & 1) != 0) {
          uStack_a0 = uStack_a0 - 1;
          goto LAB_1435c5b60;
        }
      }
    }
    else {
      uVar7 = (uint)local_98[0] & 3;
      if ((local_98[0] & 3) == 0) {
        pcVar6 = (char *)FUN_1435ac440(local_98[0],local_res18,param_1,&local_b8,local_88,0,0);
        if (*pcVar6 == '\0') goto LAB_1435c5a5b;
      }
      else if (uVar7 == 1) {
        puVar8 = (uint *)(local_98[0] & 0xfffffffffffffffe);
        if (puVar8 != &local_b8) {
          local_b8 = *puVar8;
          uStack_b4 = puVar8[1];
          piStack_b0 = *(int **)(puVar8 + 2);
          uStack_a8 = *(ulonglong *)(puVar8 + 4);
          uStack_a0 = *(ulonglong *)(puVar8 + 6);
          uVar7 = local_b8 & 0x1f;
          if (9 < uVar7) {
            if ((local_b8 >> 9 & 1) == 0) {
              if (uVar7 == 10) {
                *(int *)(uStack_a8 + 0x18) = *(int *)(uStack_a8 + 0x18) + 1;
              }
              else if ((10 < uVar7) &&
                      (((uVar9 = uStack_a8, uVar7 < 0xd || (uVar9 = uStack_a0, uVar7 < 0xf)) &&
                       (uVar9 != 0)))) {
                *(int *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1;
                *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) & 0x8fffffff;
              }
            }
            else {
              *piStack_b0 = *piStack_b0 + 1;
            }
          }
        }
      }
      else if (uVar7 == 2) {
        uVar9 = local_98[0] & 0xfffffffffffffffd;
        if (uVar9 != 0) {
          *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
        }
        local_68._4_4_ = (undefined4)(uVar9 >> 0x20);
        local_b8 = 0xc;
        uStack_a8 = CONCAT44(local_68._4_4_,(uint)local_98[0]) & 0xfffffffffffffffd;
        uStack_a0 = CONCAT44(uStack_5c,uStack_60);
        local_68 = uVar9;
      }
LAB_1435c58f4:
      lVar2 = *(longlong *)(param_1 + 0x58);
      puVar8 = (uint *)(lVar2 + 0x20);
      *(uint **)(param_1 + 0x58) = puVar8;
      if (puVar8 != (uint *)0x0) {
        *puVar8 = local_b8;
        *(int **)(lVar2 + 0x28) = piStack_b0;
        *(undefined4 *)(lVar2 + 0x30) = (undefined4)uStack_a8;
        *(undefined4 *)(lVar2 + 0x34) = uStack_a8._4_4_;
        *(undefined4 *)(lVar2 + 0x38) = (undefined4)uStack_a0;
        *(undefined4 *)(lVar2 + 0x3c) = uStack_a0._4_4_;
        local_b8 = 0;
      }
      uVar7 = local_b8 & 0x1f;
      if (uVar7 < 10) goto LAB_1435c5b60;
      if ((local_b8 >> 9 & 1) != 0) {
        *piStack_b0 = *piStack_b0 + -1;
        if (*piStack_b0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        goto LAB_1435c5b60;
      }
      uVar9 = uStack_a8;
      if (uVar7 == 10) goto LAB_1435c5b55;
      if ((((uVar7 != 0xb) && (uVar7 != 0xc)) && (uVar9 = uStack_a0, 1 < uVar7 - 0xd)) ||
         ((uVar9 & 1) != 0)) goto LAB_1435c5b60;
    }
    if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
      FUN_1434ef880();
    }
  }
LAB_1435c5b60:
  FUN_1434e6250(local_58);
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_88);
    }
    else {
      *local_80 = *local_80 + -1;
      if (*local_80 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435c5bc0 FUN_1435c5bc0 body=351 status=ok
// SIG undefined FUN_1435c5bc0(void)

void FUN_1435c5bc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  longlong *local_88;
  uint local_80 [2];
  int *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [48];
  uint local_30 [2];
  int *local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  local_88 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_80[0] = *(uint *)*local_88;
  local_78 = *(int **)(*local_88 + 8);
  lVar1 = *local_88;
  local_70 = *(undefined4 *)(lVar1 + 0x10);
  uStack_6c = *(undefined4 *)(lVar1 + 0x14);
  uStack_68 = *(undefined4 *)(lVar1 + 0x18);
  uStack_64 = *(undefined4 *)(lVar1 + 0x1c);
  *local_88 = *local_88 + -0x20;
  FUN_1435ae740(local_60);
  FUN_1435f7f70(&local_88,*(undefined8 *)(param_2 + 0x28),local_60);
  local_30[0] = *(uint *)*local_88;
  local_28 = *(int **)(*local_88 + 8);
  uStack_20 = *(undefined8 *)(*local_88 + 0x10);
  uStack_18 = *(undefined8 *)(*local_88 + 0x18);
  *local_88 = *local_88 + -0x20;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28),local_30);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    FUN_1435b2e30(local_res8,param_1,local_30,local_60,local_80);
  }
  if (9 < ((byte)local_30[0] & 0x1f)) {
    if ((local_30[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_30);
    }
    else {
      *local_28 = *local_28 + -1;
      if (*local_28 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_30[0] = local_30[0] & 0xfffffde0;
      local_28 = (int *)0x0;
      uStack_20 = 0;
      uStack_18 = 0;
    }
  }
  FUN_1434e6250(local_60);
  if (9 < ((byte)local_80[0] & 0x1f)) {
    if ((local_80[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_80);
    }
    else {
      *local_78 = *local_78 + -1;
      if (*local_78 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435c5d30 FUN_1435c5d30 body=1623 status=ok
// SIG undefined FUN_1435c5d30(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1435c5d30(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int *piVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint uVar13;
  char cVar14;
  ulonglong uVar15;
  char local_res20 [8];
  ulonglong in_stack_ffffffffffffff00;
  uint local_e8 [2];
  int *local_e0;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  uint local_b0 [12];
  uint *local_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  undefined8 uStack_60;
  uint local_58 [2];
  int *local_50;
  
  if (*(int *)(param_4 + 0xc) == 6) {
    puVar4 = *(uint **)(param_1 + 0x58);
    uVar3 = puVar4[-8];
    if ((((((byte)uVar3 & 0x1f) == 0xc) &&
         (plVar5 = *(longlong **)(puVar4 + -4), plVar5 != (longlong *)0x0)) &&
        ((*puVar4 & 0x1f) - 2 < 3)) && ((*(byte *)(plVar5[5] + 0x88) & 1) != 0)) {
      local_d8 = puVar4[-4];
      uStack_d4 = puVar4[-3];
      uStack_d0 = puVar4[-2];
      uStack_cc = puVar4[-1];
      piVar6 = *(int **)(puVar4 + -6);
      uVar15 = 0;
      puVar4[-8] = 0;
      uVar13 = *puVar4 & 0x1f;
      if ((uVar13 == 2) || (uVar13 == 3)) {
        uVar15 = (ulonglong)puVar4[4];
      }
      else if (uVar13 == 4) {
        uVar15 = (ulonglong)*(double *)(puVar4 + 4);
      }
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
      (**(code **)(*plVar5 + 0x30))(plVar5,local_res20,uVar15 & 0xffffffff);
      uVar13 = uVar3 & 0x1f;
      if (uVar13 < 10) {
        return;
      }
      if ((uVar3 >> 9 & 1) != 0) {
        *piVar6 = *piVar6 + -1;
        if (*piVar6 != 0) {
          return;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar6);
        return;
      }
      if (uVar13 == 10) {
        piVar6 = (int *)(CONCAT44(uStack_d4,local_d8) + 0x18);
        *piVar6 = *piVar6 + -1;
        if (*piVar6 != 0) {
          return;
        }
        FUN_14335f920();
        return;
      }
      if ((uVar13 == 0xb) || (uVar13 == 0xc)) {
        if ((local_d8 & 1) != 0) {
          return;
        }
        lVar9 = CONCAT44(uStack_d4,local_d8);
      }
      else {
        if (1 < uVar13 - 0xd) {
          return;
        }
        if ((uStack_d0 & 1) != 0) {
          return;
        }
        lVar9 = CONCAT44(uStack_cc,uStack_d0);
      }
      if (lVar9 == 0) {
        return;
      }
      if ((*(uint *)(lVar9 + 8) & 0x3fffff) == 0) {
        return;
      }
      *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) - 1;
      FUN_1434ef880();
      return;
    }
  }
  local_b8 = (undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x58);
  FUN_1435ae740(local_b0,param_3,param_4);
  FUN_1435f7f70(&local_b8,*(undefined8 *)(param_3 + 0x28),local_b0);
  local_80 = (uint *)*local_b8;
  FUN_14360e8c0();
  if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c6366;
  cVar14 = '\0';
  uVar3 = *local_80;
  local_d8 = local_80[4];
  uStack_d4 = local_80[5];
  plVar5 = *(longlong **)(local_80 + 4);
  uStack_d0 = local_80[6];
  uStack_cc = local_80[7];
  piVar6 = *(int **)(local_80 + 2);
  uVar13 = uVar3 & 0x1f;
  *local_80 = 0;
  if ((uVar13 == 0xc) && (plVar5 != (longlong *)0x0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  local_res20[0] = (param_5 != 0) + (param_7 != 0);
  local_e8[0] = uVar3;
  local_e0 = piVar6;
  if (bVar7) {
    lVar9 = plVar5[5];
    local_c8 = *(uint *)(lVar9 + 0x90);
    if ((local_c8 == 0xb) || (local_c8 - 0x12 < 2)) {
LAB_1435c60c5:
      pcVar11 = (char *)(**(code **)(*plVar5 + 0x28))(plVar5,local_res20,local_b0,local_80);
      goto LAB_1435c620f;
    }
    if ((local_res20[0] == '\0') ||
       (((param_5 == 0 || (lVar9 != param_5)) &&
        ((param_7 == 0 || (param_6 = param_8, lVar9 != param_7)))))) {
      local_c0 = 0;
      lVar10 = FUN_1435af580(param_1,lVar9,local_b0,&local_c0,plVar5);
      if (lVar10 != 0) {
        if (((local_res20[0] < '\x02') && (((byte)local_b0[0] & 3) != 1)) &&
           ((local_b0[0] >> 2 & 1) == 0)) {
          if (local_res20[0] == '\0') {
            *(longlong *)(param_2 + -0x20) = lVar9;
            *(ulonglong *)(param_2 + -0x18) = (ulonglong)((int)local_c0 + 1U);
          }
          else if (local_res20[0] == '\x01') {
            *(longlong *)(param_2 + -0x10) = lVar9;
            *(ulonglong *)(param_2 + -8) = (ulonglong)((int)local_c0 + 1U);
          }
        }
        pcVar11 = (char *)FUN_1435abe90(lVar10,local_res20,local_80,plVar5);
        goto LAB_1435c620f;
      }
      if ((local_c8 < 0x17) && ((0x41f100U >> (local_c8 & 0x1f) & 1) != 0)) goto LAB_1435c60c5;
      local_58[0] = 0;
      local_50 = (int *)0x0;
      local_68 = 0;
      uStack_60 = 0;
      FUN_1435b27d0(&local_68,param_1,plVar5,lVar9,local_b0,
                    in_stack_ffffffffffffff00 & 0xffffffff00000000);
      if ((((local_58[0] & 0x1f) != 0) && (local_68 != 1)) &&
         ((((byte)local_68 >> 1 & 1) == 0 || ((local_68 & 0xfffffffffffffffd) != 0)))) {
        cVar14 = '\x01';
        uVar8 = (uint)local_68 & 3;
        if ((local_68 & 3) == 0) {
          pcVar11 = (char *)FUN_1435ac440(local_68,local_res20,param_1,local_80,local_58,0,0);
          cVar14 = *pcVar11;
        }
        else if (uVar8 == 1) {
          FUN_1435901e0(local_80,local_68 & 0xfffffffffffffffe);
        }
        else if (uVar8 == 2) {
          uVar15 = local_68 & 0xfffffffffffffffd;
          if (uVar15 != 0) {
            *(uint *)(uVar15 + 8) = *(int *)(uVar15 + 8) + 1U & 0x8fffffff;
          }
          *local_80 = *local_80 & 0xffffffec;
          *local_80 = *local_80 | 0xc;
          local_78._0_4_ = (uint)uVar15;
          local_78._4_4_ = (uint)(uVar15 >> 0x20);
          local_80[4] = (uint)local_78;
          local_80[5] = local_78._4_4_;
          local_80[6] = uStack_70;
          local_80[7] = uStack_6c;
          local_78 = uVar15;
        }
      }
      if (9 < ((byte)local_58[0] & 0x1f)) {
        if ((local_58[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_58);
        }
        else {
          *local_50 = *local_50 + -1;
          if (*local_50 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
    }
    else {
      uVar15 = param_6 - 1;
      if (((longlong)uVar15 < 0) || (uVar15 < *(ulonglong *)(lVar9 + 0x28))) {
        lVar9 = FUN_1434ef150(*(undefined8 *)(lVar9 + 0x30));
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x38) + 0x10 +
                ((uVar15 & 0xffffffff) - *(ulonglong *)(lVar9 + 0x28)) * 0x40;
      }
      FUN_1435abe90(lVar9,local_res20,local_80,plVar5);
      cVar14 = local_res20[0];
    }
  }
  else {
    pcVar11 = (char *)FUN_1435b3030(local_res20,param_1,local_e8,local_b0,local_80);
LAB_1435c620f:
    cVar14 = *pcVar11;
  }
  if (((cVar14 == '\0') && (*(char *)(param_1 + 0xb8) == '\0')) && ((uVar13 < 5 || (uVar13 == 10))))
  {
    uVar12 = FUN_1435c8e40(&local_78,0x42d,param_1);
    FUN_1435ccf60(param_1,uVar12,&DAT_145b14e70);
    piVar1 = (int *)(CONCAT44(uStack_6c,uStack_70) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (9 < uVar13) {
    if ((uVar3 >> 9 & 1) == 0) {
      if (uVar13 == 10) {
        plVar2 = plVar5 + 3;
        *(int *)plVar2 = (int)*plVar2 + -1;
        if ((int)*plVar2 == 0) {
          FUN_14335f920(plVar5);
        }
      }
      else if ((uVar13 == 0xb) || (uVar13 == 0xc)) {
        if (((local_d8 & 1) == 0) &&
           ((plVar5 != (longlong *)0x0 && ((*(uint *)(plVar5 + 1) & 0x3fffff) != 0)))) {
          *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) - 1;
          FUN_1434ef880(plVar5);
        }
      }
      else if ((((uVar13 - 0xd < 2) && ((uStack_d0 & 1) == 0)) &&
               (lVar9 = CONCAT44(uStack_cc,uStack_d0), lVar9 != 0)) &&
              ((*(uint *)(lVar9 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar6);
      }
    }
  }
LAB_1435c6366:
  FUN_1434e6250(local_b0);
  return;
}



// FUNCTION 1435c6390 FUN_1435c6390 body=134 status=ok
// SIG undefined FUN_1435c6390(void)

void FUN_1435c6390(longlong param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar3 = (*(longlong **)(param_2 + 0x30))[1];
  if ((param_3 & 0xffffffff) < (ulonglong)((**(longlong **)(param_2 + 0x30) - lVar3) + 0x20 >> 5)) {
    plVar2 = (longlong *)(param_1 + 0x58);
    *plVar2 = *plVar2 + 0x20;
    if (*plVar2 != 0) {
      FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),(param_3 & 0xffffffff) * 0x20 + lVar3);
      return;
    }
  }
  else {
    uVar4 = FUN_1435c8e40(local_18,0x7d6,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1435c6420 FUN_1435c6420 body=357 status=ok
// SIG undefined FUN_1435c6420(void)

void FUN_1435c6420(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_res8 [8];
  longlong *local_88;
  uint local_80 [2];
  int *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [48];
  uint local_30 [2];
  int *local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  local_88 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x58);
  local_80[0] = *(uint *)*local_88;
  local_78 = *(int **)(*local_88 + 8);
  lVar1 = *local_88;
  local_70 = *(undefined4 *)(lVar1 + 0x10);
  uStack_6c = *(undefined4 *)(lVar1 + 0x14);
  uStack_68 = *(undefined4 *)(lVar1 + 0x18);
  uStack_64 = *(undefined4 *)(lVar1 + 0x1c);
  *local_88 = *local_88 + -0x20;
  FUN_1435ae740(local_60);
  FUN_1435f7f70(&local_88,*(undefined8 *)(param_2 + 0x28),local_60);
  local_30[0] = *(uint *)*local_88;
  local_28 = *(int **)(*local_88 + 8);
  uStack_20 = *(undefined8 *)(*local_88 + 0x10);
  uStack_18 = *(undefined8 *)(*local_88 + 0x18);
  *local_88 = *local_88 + -0x20;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28),local_30);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    FUN_1435b2e30(local_res8,param_1,local_30,local_60,local_80);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  }
  if (9 < ((byte)local_30[0] & 0x1f)) {
    if ((local_30[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_30);
    }
    else {
      *local_28 = *local_28 + -1;
      if (*local_28 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_30[0] = local_30[0] & 0xfffffde0;
      local_28 = (int *)0x0;
      uStack_20 = 0;
      uStack_18 = 0;
    }
  }
  FUN_1434e6250(local_60);
  if (9 < ((byte)local_80[0] & 0x1f)) {
    if ((local_80[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_80);
    }
    else {
      *local_78 = *local_78 + -1;
      if (*local_78 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435c6590 FUN_1435c6590 body=357 status=ok
// SIG undefined FUN_1435c6590(void)

void FUN_1435c6590(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  longlong local_50;
  undefined8 *local_48;
  undefined1 local_40 [16];
  byte local_30;
  longlong local_20;
  uint *local_10;
  
  local_48 = (undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x58);
  FUN_1435ae740(local_40);
  FUN_1435f7f70(&local_48,*(undefined8 *)(param_2 + 0x28));
  local_10 = (uint *)*local_48;
  FUN_14360e8c0(*(undefined8 *)(param_2 + 0x28));
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar6 = 0;
    if ((((*(char *)(*(longlong *)(param_1 + 0x50) + 0x28) == '\0') || ((local_30 & 0x1f) != 0xc))
        || (local_20 == 0)) ||
       ((*(int *)(*(longlong *)(local_20 + 0x28) + 0x90) != 0x13 ||
        ((~(*(byte *)(*(longlong *)(local_20 + 0x28) + 0x88) >> 5) & 1) == 0)))) {
      uVar3 = *local_10 & 0x1f;
      if ((4 < uVar3) && (uVar3 != 10)) {
        if (uVar3 == 0xc) {
          plVar2 = *(longlong **)(local_10 + 4);
          if ((*(byte *)(plVar2[5] + 0x88) >> 1 & 1) != 0) {
            puVar5 = (undefined1 *)(**(code **)(*plVar2 + 0x48))(plVar2,local_res8,local_40);
            uVar6 = *puVar5;
          }
          if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_1435c66dd;
        }
        FUN_1434f05f0(local_10,uVar6);
        goto LAB_1435c66dd;
      }
      uVar4 = FUN_1435c8e40(local_58,0x460,param_1);
      puVar7 = &DAT_145b14e70;
    }
    else {
      uVar4 = FUN_1435c8e40(local_58,0x45f,param_1);
      puVar7 = &DAT_145b155b0;
    }
    FUN_1435ccf60(param_1,uVar4,puVar7);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1435c66dd:
  FUN_1434e6250(local_40);
  return;
}



// FUNCTION 1435c6700 FUN_1435c6700 body=326 status=ok
// SIG undefined FUN_1435c6700(void)

void FUN_1435c6700(longlong param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  
  puVar2 = *(uint **)(param_1 + 0x58);
  FUN_14360e8c0(param_1,puVar2);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar4 = *(ulonglong *)(puVar2 + 4);
    uVar5 = *(ulonglong *)(puVar2 + 6);
    piVar3 = *(int **)(puVar2 + 2);
    uVar1 = *puVar2;
    *puVar2 = 0;
    lVar7 = *(longlong *)(uVar4 + 0x28);
    uVar8 = ((ulonglong)param_2 - 1) + (ulonglong)*(uint *)(lVar7 + 0x70);
    if (((longlong)uVar8 < 0) || (uVar8 < *(ulonglong *)(lVar7 + 0x28))) {
      lVar7 = FUN_1434ef150(*(undefined8 *)(lVar7 + 0x30));
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x38) + 0x10 +
              ((uVar8 & 0xffffffff) - *(ulonglong *)(lVar7 + 0x28)) * 0x40;
    }
    FUN_1435abe90(lVar7,local_res8,puVar2,uVar4);
    uVar6 = uVar1 & 0x1f;
    if (9 < uVar6) {
      if ((uVar1 >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          piVar3 = (int *)(uVar4 + 0x18);
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            FUN_14335f920(uVar4);
          }
        }
        else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
          if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
            FUN_1434ef880(uVar4);
          }
        }
        else if ((((uVar6 - 0xd < 2) && ((uVar5 & 1) == 0)) && (uVar5 != 0)) &&
                ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 1435c6850 FUN_1435c6850 body=267 status=ok
// SIG undefined FUN_1435c6850(void)

void FUN_1435c6850(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res8 [8];
  longlong *local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_58 = (longlong *)(param_1 + 0x58);
  local_50[0] = *(undefined4 *)*local_58;
  local_48 = *(undefined8 *)(*local_58 + 8);
  local_40 = *(undefined8 *)(*local_58 + 0x10);
  uStack_38 = *(undefined8 *)(*local_58 + 0x18);
  *local_58 = *local_58 + -0x20;
  local_30[0] = *(undefined4 *)*local_58;
  local_28 = *(undefined8 *)(*local_58 + 8);
  lVar3 = *local_58;
  local_20 = *(undefined4 *)(lVar3 + 0x10);
  uStack_1c = *(undefined4 *)(lVar3 + 0x14);
  uStack_18 = *(undefined4 *)(lVar3 + 0x18);
  uStack_14 = *(undefined4 *)(lVar3 + 0x1c);
  *local_58 = *local_58 + -0x20;
  FUN_14360e8c0(param_1,local_30);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    lVar2 = CONCAT44(uStack_1c,local_20);
    lVar3 = *(longlong *)(lVar2 + 0x28);
    uVar4 = ((ulonglong)param_2 - 1) + (ulonglong)*(uint *)(lVar3 + 0x70);
    uVar1 = *(undefined8 *)(lVar3 + 0x98);
    if (((longlong)uVar4 < 0) || (uVar4 < *(ulonglong *)(lVar3 + 0x28))) {
      lVar3 = FUN_1434ef150(*(undefined8 *)(lVar3 + 0x30));
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x38) + 0x10 +
              ((uVar4 & 0xffffffff) - *(ulonglong *)(lVar3 + 0x28)) * 0x40;
    }
    FUN_1435acaa0(lVar3,local_res8,uVar1,local_50,lVar2);
  }
  FUN_14360be80(&local_58);
  return;
}



// FUNCTION 1435c6970 FUN_1435c6970 body=178 status=ok
// SIG undefined FUN_1435c6970(void)

void FUN_1435c6970(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res10 [24];
  
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
  lVar3 = 0;
  **(undefined8 **)(param_1 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar4 = *(longlong *)(param_1 + 0x108) - 1;
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar4 >> 6) * 8) + 0x38 +
             (ulonglong)((uint)uVar4 & 0x3f) * 0xa0);
  }
  lVar2 = *(longlong *)(lVar3 + 0x28);
  uVar4 = ((ulonglong)param_2 - 1) + (ulonglong)*(uint *)(lVar2 + 0x70);
  if (((longlong)uVar4 < 0) || (uVar4 < *(ulonglong *)(lVar2 + 0x28))) {
    lVar2 = FUN_1434ef150(*(undefined8 *)(lVar2 + 0x30));
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x38) +
            ((uVar4 & 0xffffffff) - *(ulonglong *)(lVar2 + 0x28)) * 0x40 + 0x10;
  }
  FUN_1435abe90(lVar2,local_res10,uVar1,lVar3);
  return;
}



// FUNCTION 1435c6a30 FUN_1435c6a30 body=193 status=ok
// SIG undefined FUN_1435c6a30(void)

void FUN_1435c6a30(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 local_res10 [8];
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar4 = *(longlong *)(param_1 + 0x108) - 1;
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar4 >> 6) * 8) + 0x38 +
             (ulonglong)((uint)uVar4 & 0x3f) * 0xa0);
  }
  lVar2 = *(longlong *)(lVar3 + 0x28);
  uVar4 = ((ulonglong)param_2 - 1) + (ulonglong)*(uint *)(lVar2 + 0x70);
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  if (((longlong)uVar4 < 0) || (uVar4 < *(ulonglong *)(lVar2 + 0x28))) {
    lVar2 = FUN_1434ef150(*(undefined8 *)(lVar2 + 0x30));
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x38) + 0x10 +
            ((uVar4 & 0xffffffff) - *(ulonglong *)(lVar2 + 0x28)) * 0x40;
  }
  FUN_1435acaa0(lVar2,local_res10,uVar1,*(undefined8 *)(param_1 + 0x58),lVar3);
  FUN_143611f90((undefined8 *)(param_1 + 0x58));
  return;
}



// FUNCTION 1435c6b00 FUN_1435c6b00 body=98 status=ok
// SIG undefined FUN_1435c6b00(void)

void FUN_1435c6b00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_res8 [32];
  undefined1 local_18 [8];
  longlong local_10;
  
  plVar2 = *(longlong **)(param_1 + 0x50);
  if ((char)plVar2[5] == '\0') {
    uVar3 = FUN_1435c8e40(local_18,0x3e9);
    FUN_1435ccf60(param_1,uVar3,&DAT_145b15be8);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x48))(plVar2,local_res8,param_1,*(undefined8 *)(param_1 + 0x58));
  }
  return;
}



// FUNCTION 1435c6b70 FUN_1435c6b70 body=272 status=ok
// SIG undefined FUN_1435c6b70(void)

void FUN_1435c6b70(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong local_res8;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 *local_38;
  undefined8 local_30;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  puVar2 = *(uint **)(param_1 + 0x58);
  pcVar3 = (char *)FUN_143591c60(puVar2,&local_res8,lVar4);
  if (*pcVar3 != '\0') {
    FUN_1432c5960(&local_38,DAT_146b62f28);
    local_res8 = *(longlong *)(puVar2 + 4);
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    FUN_1434ca780(&local_38,&local_res8);
    piVar1 = (int *)(local_res8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    puVar5 = &DAT_145af3922;
    if (local_38 != (undefined1 *)0x0) {
      puVar5 = local_38;
    }
    lVar4 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x218),puVar5,local_30);
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
    if (9 < ((byte)*puVar2 & 0x1f)) {
      if ((*puVar2 >> 9 & 1) == 0) {
        FUN_1435920c0(puVar2);
      }
      else {
        piVar1 = *(int **)(puVar2 + 2);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *puVar2 = *puVar2 & 0xfffffde0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
      }
    }
    *puVar2 = *puVar2 & 0xffffffea;
    *puVar2 = *puVar2 | 10;
    local_48 = (uint)lVar4;
    uStack_44 = (uint)((ulonglong)lVar4 >> 0x20);
    puVar2[4] = local_48;
    puVar2[5] = uStack_44;
    puVar2[6] = uStack_40;
    puVar2[7] = uStack_3c;
    piVar1 = (int *)(lVar4 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar4);
    }
    Scaleform::StringBuffer::~StringBuffer(&local_38);
  }
  return;
}



// FUNCTION 1435c6c90 FUN_1435c6c90 body=165 status=ok
// SIG undefined FUN_1435c6c90(void)

void FUN_1435c6c90(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  puVar2 = *(uint **)(param_1 + 0x58);
  if (((*puVar2 & 0x1f) != 0xc) ||
     ((((*(longlong *)(puVar2 + 4) == 0 ||
        (lVar3 = *(longlong *)(*(longlong *)(puVar2 + 4) + 0x28), *(int *)(lVar3 + 0x90) != 0x12))
       || ((~(*(byte *)(lVar3 + 0x88) >> 5) & 1) == 0)) &&
      (((*(longlong *)(puVar2 + 4) == 0 ||
        (lVar3 = *(longlong *)(*(longlong *)(puVar2 + 4) + 0x28), *(int *)(lVar3 + 0x90) != 0x13))
       || ((~(*(byte *)(lVar3 + 0x88) >> 5) & 1) == 0)))))) {
    uVar4 = FUN_1435c8e40(local_18,0x463,param_1);
    FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1435c6d40 FUN_1435c6d40 body=133 status=ok
// SIG undefined FUN_1435c6d40(void)

void FUN_1435c6d40(longlong param_1,longlong *param_2,ushort param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined1 local_18 [8];
  longlong local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x58) + (ulonglong)param_3 * -0x20;
  if (param_2 == (longlong *)0x0) {
    uVar3 = FUN_1435c8e40(local_18,0x42d,param_1);
    puVar5 = &DAT_145b14e70;
  }
  else {
    cVar2 = (**(code **)(*param_2 + 0x58))(param_2,lVar4,lVar4);
    if (cVar2 != '\0') {
      return;
    }
    uVar3 = FUN_1435c8e40(local_18,0x40a,param_1);
    puVar5 = &DAT_145b155b0;
  }
  FUN_1435ccf60(param_1,uVar3,puVar5);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435c6dd0 FUN_1435c6dd0 body=102 status=ok
// SIG undefined FUN_1435c6dd0(void)

void FUN_1435c6dd0(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_res10 [24];
  
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + (param_2 & 0xffff) * -0x20);
  uVar2 = *puVar1 & 0x1f;
  if (uVar2 == 0xc) {
    bVar3 = *(longlong *)(puVar1 + 4) == 0;
  }
  else {
    if (uVar2 != 10) goto LAB_1435c6e15;
    bVar3 = *(longlong *)(puVar1 + 4) == *(longlong *)(*(longlong *)(puVar1 + 4) + 8) + 0x80;
  }
  if (bVar3) {
    return;
  }
LAB_1435c6e15:
  if (uVar2 != 0) {
    FUN_143591c60(puVar1,local_res10,*(undefined8 *)(param_1 + 0x10));
    return;
  }
  FUN_1434f0650();
  return;
}



// FUNCTION 1435c6e40 FUN_1435c6e40 body=134 status=ok
// SIG undefined FUN_1435c6e40(void)

void FUN_1435c6e40(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (param_2 != 0) {
    lVar2 = FUN_1435ca910(param_1,uVar3);
    if (param_2 != lVar2) {
      FUN_1434f0650(uVar3);
      return;
    }
  }
  uVar3 = FUN_1435c8e40(local_18,0x3f6,param_1);
  FUN_1435ccf60(param_1,uVar3,&DAT_145b155b0);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435c6ed0 FUN_1435c6ed0 body=449 status=ok
// SIG undefined FUN_1435c6ed0(void)

void FUN_1435c6ed0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  undefined1 local_48 [8];
  longlong local_40;
  uint local_38 [2];
  int *local_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  puVar3 = *(uint **)(param_1 + 0x58);
  uVar2 = *puVar3;
  local_28 = puVar3[4];
  uStack_24 = puVar3[5];
  lVar5 = *(longlong *)(puVar3 + 4);
  uStack_20 = puVar3[6];
  uStack_1c = puVar3[7];
  piVar4 = *(int **)(puVar3 + 2);
  *(uint **)(param_1 + 0x58) = puVar3 + -8;
  uVar10 = uVar2 & 0x1f;
  local_38[0] = uVar2;
  local_30 = piVar4;
  if (uVar10 == 0) {
LAB_1435c6f80:
    if (uVar10 == 0xc) {
      bVar11 = lVar5 == 0;
    }
    else if (uVar10 == 10) {
      bVar11 = lVar5 == *(longlong *)(lVar5 + 8) + 0x80;
    }
    else {
      bVar11 = false;
    }
    iVar9 = 0x3f2 - (uint)bVar11;
  }
  else {
    if (uVar10 == 0xc) {
      bVar11 = lVar5 == 0;
LAB_1435c6f2f:
      if (bVar11) goto LAB_1435c6f80;
    }
    else if (uVar10 == 10) {
      bVar11 = lVar5 == *(longlong *)(lVar5 + 8) + 0x80;
      goto LAB_1435c6f2f;
    }
    lVar7 = FUN_1435caba0(local_28,local_38);
    if ((*(byte *)(lVar7 + 0x88) >> 5 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      cVar6 = FUN_1435c8c20(param_1,uVar8,lVar7);
      if (cVar6 == '\0') {
        FUN_1434f0650(uVar8);
      }
      goto LAB_1435c6fdd;
    }
    iVar9 = 0x411;
  }
  uVar8 = FUN_1435c8e40(local_48,iVar9,param_1);
  FUN_1435ccf60(param_1,uVar8,&DAT_145b155b0);
  piVar1 = (int *)(local_40 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1435c6fdd:
  if (9 < uVar10) {
    if ((uVar2 >> 9 & 1) == 0) {
      if (uVar10 == 10) {
        piVar4 = (int *)(lVar5 + 0x18);
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          FUN_14335f920(lVar5);
        }
      }
      else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
        if (((local_28 & 1) == 0) && ((lVar5 != 0 && ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
          FUN_1434ef880(lVar5);
        }
      }
      else if ((((uVar10 - 0xd < 2) && ((uStack_20 & 1) == 0)) &&
               (lVar5 = CONCAT44(uStack_1c,uStack_20), lVar5 != 0)) &&
              ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar4);
      }
    }
  }
  return;
}



// FUNCTION 1435c70a0 FUN_1435c70a0 body=629 status=ok
// SIG undefined FUN_1435c70a0(void)

void FUN_1435c70a0(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 local_58 [8];
  longlong local_50;
  uint local_48 [2];
  int *local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar3 = *(uint **)(param_1 + 0x58);
  uVar2 = *puVar3;
  local_38 = puVar3[4];
  uStack_34 = puVar3[5];
  lVar5 = *(longlong *)(puVar3 + 4);
  uStack_30 = puVar3[6];
  uStack_2c = puVar3[7];
  piVar4 = *(int **)(puVar3 + 2);
  uVar12 = uVar2 & 0x1f;
  *(uint **)(param_1 + 0x58) = puVar3 + -8;
  local_48[0] = uVar2;
  local_40 = piVar4;
  if (((uVar12 == 0xc) && (lVar5 != 0)) &&
     ((*(int *)(*(longlong *)(lVar5 + 0x28) + 0x90) == 10 ||
      ((*(byte *)(*(longlong *)(lVar5 + 0x28) + 0x88) >> 5 & 1) != 0)))) {
    puVar3 = *(uint **)(param_1 + 0x58);
    uVar6 = *puVar3 & 0x1f;
    if (uVar6 == 0) {
LAB_1435c7200:
      uVar11 = 0;
      goto LAB_1435c7202;
    }
    if (uVar6 == 0xc) {
      bVar13 = *(longlong *)(puVar3 + 4) == 0;
LAB_1435c7151:
      if (bVar13) goto LAB_1435c7200;
    }
    else if (uVar6 == 10) {
      bVar13 = *(longlong *)(puVar3 + 4) == *(longlong *)(*(longlong *)(puVar3 + 4) + 8) + 0x80;
      goto LAB_1435c7151;
    }
    plVar7 = (longlong *)FUN_1435ca910(param_1,puVar3);
    plVar8 = (longlong *)FUN_1435caba0(param_1,local_48);
    if ((*(byte *)(plVar8 + 0x11) >> 5 & 1) == 0) {
      lVar9 = FUN_143610320(plVar8);
      for (; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[0x16]) {
        if (plVar7[0x15] == 0) {
          (**(code **)(*plVar7 + 0x50))(plVar7);
        }
        lVar10 = FUN_1435b3ae0(plVar7[0x15]);
        if (lVar10 == lVar9) goto LAB_1435c71b0;
      }
    }
    else if (plVar7 != (longlong *)0x0) {
      do {
        if (plVar7 == plVar8) goto LAB_1435c71b0;
        plVar7 = (longlong *)plVar7[0x16];
      } while (plVar7 != (longlong *)0x0);
      FUN_1434f05f0(puVar3,0);
      goto LAB_1435c7258;
    }
    FUN_1434f05f0(puVar3,0);
  }
  else {
    uVar11 = FUN_1435c8e40(local_58,0x410,param_1);
    FUN_1435ccf60(param_1,uVar11,&DAT_145b155b0);
    piVar1 = (int *)(local_50 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1435c7258:
  if (uVar12 < 10) {
    return;
  }
  if ((uVar2 >> 9 & 1) == 0) {
    if (uVar12 == 10) {
      piVar4 = (int *)(lVar5 + 0x18);
      *piVar4 = *piVar4 + -1;
      if (*piVar4 != 0) {
        return;
      }
      FUN_14335f920(lVar5);
      return;
    }
    if ((uVar12 != 0xb) && (uVar12 != 0xc)) {
      if (1 < uVar12 - 0xd) {
        return;
      }
      if ((uStack_30 & 1) != 0) {
        return;
      }
      lVar5 = CONCAT44(uStack_2c,uStack_30);
      if (lVar5 == 0) {
        return;
      }
      if ((*(uint *)(lVar5 + 8) & 0x3fffff) == 0) {
        return;
      }
      *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
      FUN_1434ef880();
      return;
    }
    if ((local_38 & 1) != 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
LAB_1435c72d0:
    if ((*(uint *)(lVar5 + 8) & 0x3fffff) == 0) {
      return;
    }
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
    FUN_1434ef880(lVar5);
    return;
  }
LAB_1435c726b:
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar4);
  }
  return;
LAB_1435c71b0:
  uVar11 = 1;
LAB_1435c7202:
  FUN_1434f05f0(puVar3,uVar11);
  if ((uVar2 >> 9 & 1) == 0) {
    if ((local_38 & 1) != 0) {
      return;
    }
    goto LAB_1435c72d0;
  }
  goto LAB_1435c726b;
}



// FUNCTION 1435c7320 FUN_1435c7320 body=37 status=ok
// SIG undefined FUN_1435c7320(void)

void FUN_1435c7320(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = FUN_1435c8c20(param_1,uVar1,param_2);
  FUN_1434f05f0(uVar1,uVar2);
  return;
}



// FUNCTION 1435c7350 FUN_1435c7350 body=643 status=ok
// SIG undefined FUN_1435c7350(void)

void FUN_1435c7350(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  uint uVar10;
  bool bVar11;
  ulonglong local_c8 [2];
  uint local_b8 [2];
  int *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_98 [2];
  longlong local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  uint local_68 [2];
  int *local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint *local_48;
  undefined1 local_40 [8];
  longlong local_38;
  
  puVar4 = *(uint **)(param_1 + 0x58);
  uVar3 = *puVar4;
  puVar1 = puVar4 + -8;
  local_58 = puVar4[4];
  uStack_54 = puVar4[5];
  plVar7 = *(longlong **)(puVar4 + 4);
  uStack_50 = puVar4[6];
  uStack_4c = puVar4[7];
  piVar5 = *(int **)(puVar4 + 2);
  *(uint **)(param_1 + 0x58) = puVar1;
  uVar10 = uVar3 & 0x1f;
  local_68[0] = uVar3;
  local_60 = piVar5;
  local_48 = puVar1;
  if (uVar10 == 0) {
LAB_1435c7557:
    uVar9 = FUN_1435c8e40(local_40,0x3f1,param_1);
    FUN_1435ccf60(param_1,uVar9,&DAT_145b155b0);
    piVar2 = (int *)(local_38 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (uVar10 == 0xc) {
      bVar11 = plVar7 == (longlong *)0x0;
LAB_1435c73bf:
      if (bVar11) goto LAB_1435c7557;
    }
    else if (uVar10 == 10) {
      bVar11 = plVar7 == (longlong *)(plVar7[1] + 0x80);
      goto LAB_1435c73bf;
    }
    local_90 = *(longlong *)(param_1 + 0x1d8);
    local_98[0] = 0;
    if (local_90 != 0) {
      *(uint *)(local_90 + 8) = *(int *)(local_90 + 8) + 1U & 0x8fffffff;
    }
    local_88[0] = 0;
    local_80 = 0;
    if ((((((byte)*puVar1 & 0x1f) == 0xc) && (lVar6 = *(longlong *)(puVar4 + -4), lVar6 != 0)) &&
        (*(int *)(*(longlong *)(lVar6 + 0x28) + 0x90) == 0x11)) &&
       ((~(*(byte *)(*(longlong *)(lVar6 + 0x28) + 0x88) >> 5) & 1) != 0)) {
      FUN_143590250(local_88,lVar6 + 0x40);
      FUN_1434f0700(&local_90,*(undefined8 *)(lVar6 + 0x48));
      local_98[0] = local_98[0] & 0xfffffff9;
    }
    else {
      FUN_1435901e0(local_88,puVar1);
      FUN_1435aef90(local_98,0);
    }
    if (uVar10 == 0xc) {
      uVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,local_98,1);
      FUN_1434f05f0(puVar1,uVar8);
      FUN_1434e6250(local_98);
      goto LAB_1435c758e;
    }
    local_b8[0] = 0;
    local_b0 = (int *)0x0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    FUN_1435b2320(local_c8,param_1,local_68,local_98,0);
    if ((((local_b8[0] & 0x1f) == 0) || (local_c8[0] == 1)) ||
       ((((byte)local_c8[0] >> 1 & 1) != 0 && ((local_c8[0] & 0xfffffffffffffffd) == 0)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    FUN_1434f05f0(puVar1,uVar8);
    if (9 < ((byte)local_b8[0] & 0x1f)) {
      if ((local_b8[0] >> 9 & 1) != 0) {
        *local_b0 = *local_b0 + -1;
        if (*local_b0 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_b8[0] = local_b8[0] & 0xfffffde0;
        local_a0 = 0;
        local_b0 = (int *)0x0;
        uStack_a8 = 0;
        FUN_1434e6250(local_98);
        goto LAB_1435c7589;
      }
      FUN_1435920c0(local_b8);
    }
    FUN_1434e6250(local_98);
  }
LAB_1435c7589:
  if (uVar10 < 10) {
    return;
  }
LAB_1435c758e:
  if ((uVar3 >> 9 & 1) == 0) {
    FUN_1435920c0(local_68);
  }
  else {
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar5);
    }
  }
  return;
}



// FUNCTION 1435c75e0 FUN_1435c75e0 body=264 status=ok
// SIG undefined FUN_1435c75e0(void)

void FUN_1435c75e0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_58 = (longlong *)(param_1 + 0x58);
  local_50[0] = *(undefined4 *)*local_58;
  local_48 = *(undefined8 *)(*local_58 + 8);
  local_40 = *(undefined8 *)(*local_58 + 0x10);
  uStack_38 = *(undefined8 *)(*local_58 + 0x18);
  *local_58 = *local_58 + -0x20;
  local_30[0] = *(undefined4 *)*local_58;
  local_28 = *(undefined8 *)(*local_58 + 8);
  lVar4 = *local_58;
  local_20 = *(undefined4 *)(lVar4 + 0x10);
  uStack_1c = *(undefined4 *)(lVar4 + 0x14);
  uStack_18 = *(undefined4 *)(lVar4 + 0x18);
  uStack_14 = *(undefined4 *)(lVar4 + 0x1c);
  *local_58 = *local_58 + -0x20;
  FUN_14360e8c0(param_1,local_30);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    lVar3 = CONCAT44(uStack_1c,local_20);
    uVar1 = param_2 - 1;
    lVar4 = *(longlong *)(lVar3 + 0x28);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    if (((longlong)uVar1 < 0) || (uVar1 < *(ulonglong *)(lVar4 + 0x28))) {
      lVar4 = FUN_1434ef150(*(undefined8 *)(lVar4 + 0x30));
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x38) + 0x10 +
              ((uVar1 & 0xffffffff) - *(ulonglong *)(lVar4 + 0x28)) * 0x40;
    }
    FUN_1435acaa0(lVar4,local_res8,uVar2,local_50,lVar3);
  }
  FUN_14360be80(&local_58);
  return;
}



// FUNCTION 1435c76f0 FUN_1435c76f0 body=290 status=ok
// SIG undefined FUN_1435c76f0(void)

void FUN_1435c76f0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  longlong *local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_58 = (longlong *)(param_1 + 0x58);
  local_50[0] = *(undefined4 *)*local_58;
  local_48 = *(undefined8 *)(*local_58 + 8);
  local_40 = *(undefined8 *)(*local_58 + 0x10);
  uStack_38 = *(undefined8 *)(*local_58 + 0x18);
  *local_58 = *local_58 + -0x20;
  local_30[0] = *(undefined4 *)*local_58;
  local_28 = *(undefined8 *)(*local_58 + 8);
  lVar4 = *local_58;
  local_20 = *(undefined4 *)(lVar4 + 0x10);
  uStack_1c = *(undefined4 *)(lVar4 + 0x14);
  uStack_18 = *(undefined4 *)(lVar4 + 0x18);
  uStack_14 = *(undefined4 *)(lVar4 + 0x1c);
  *local_58 = *local_58 + -0x20;
  FUN_14360e8c0(param_1,local_30);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    uVar1 = param_2 - 1;
    lVar3 = CONCAT44(uStack_1c,local_20);
    lVar4 = *(longlong *)(lVar3 + 0x28);
    uVar2 = *(undefined8 *)(lVar4 + 0x98);
    if (((longlong)uVar1 < 0) || (uVar1 < *(ulonglong *)(lVar4 + 0x28))) {
      lVar4 = FUN_1434ef150(*(undefined8 *)(lVar4 + 0x30));
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x38) + 0x10 +
              ((uVar1 & 0xffffffff) - *(ulonglong *)(lVar4 + 0x28)) * 0x40;
    }
    FUN_1435acaa0(lVar4,local_res8,uVar2,local_50,lVar3);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  }
  FUN_14360be80(&local_58);
  return;
}



// FUNCTION 1435c7820 FUN_1435c7820 body=923 status=ok
// SIG undefined FUN_1435c7820(void)

void FUN_1435c7820(longlong param_1,longlong param_2,short param_3,ulonglong param_4)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  short sVar14;
  ulonglong uVar15;
  undefined4 local_res8 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  uint local_48;
  undefined4 uStack_44;
  int *piStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x248) + 0xd8);
  lVar6 = *(longlong *)(lVar9 + 0xa0);
  if (lVar6 == 0) {
    local_res8[0] = 0x152;
    plVar3 = *(longlong **)(*(longlong *)(lVar9 + 0x98) + 0x48);
    lVar6 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(lVar9 + 0x80),local_res8);
  }
  else {
    *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(lVar6 + 0x28);
  }
  if (lVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1434b64a0(lVar6,lVar9);
  }
  uVar15 = (*(longlong *)(param_1 + 0x58) - *(longlong *)(param_1 + 0x60)) + 0x20 >> 5;
  sVar14 = (short)uVar15;
  uVar12 = sVar14 - param_3;
  if (param_4 != 0) {
    uVar13 = (param_3 - sVar14) + uVar12;
    do {
      if (uVar15 <= uVar12) break;
      FUN_1434b49b0(uVar7 + 0x40,*(longlong *)(param_1 + 0x58) + (ulonglong)uVar12 * -0x20);
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar13 < param_4);
  }
  lVar9 = *(longlong *)(param_1 + 0x58);
  puVar8 = (undefined4 *)(lVar9 + 0x20);
  *(undefined4 **)(param_1 + 0x58) = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    local_68._0_4_ = (undefined4)uVar7;
    local_68._4_4_ = (undefined4)(uVar7 >> 0x20);
    *puVar8 = 0xc;
    *(undefined8 *)(lVar9 + 0x28) = 0;
    *(undefined4 *)(lVar9 + 0x30) = (undefined4)local_68;
    *(undefined4 *)(lVar9 + 0x34) = local_68._4_4_;
    *(undefined4 *)(lVar9 + 0x38) = (undefined4)uStack_60;
    *(undefined4 *)(lVar9 + 0x3c) = uStack_60._4_4_;
    if (uVar7 != 0) {
      *(uint *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1U & 0x8fffffff;
    }
  }
  local_68 = uVar7;
  if ((((uVar7 & 1) == 0) && (uVar7 != 0)) && ((*(uint *)(uVar7 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar7 + 8) = *(uint *)(uVar7 + 8) - 1;
    FUN_1434ef880(uVar7);
  }
  puVar2 = (uint *)(param_2 + 0x80);
  local_48 = 0;
  piStack_40 = (int *)0x0;
  if (((byte)*puVar2 & 0x1f) == 7) {
    uStack_50 = *(ulonglong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    local_58 = *(undefined4 *)(param_2 + 0x90);
    uStack_60 = 0;
    if (uStack_50 != 0) {
      *(uint *)(uStack_50 + 8) = *(int *)(uStack_50 + 8) + 1U & 0x8fffffff;
    }
    local_38 = CONCAT44(uStack_54,local_58);
    local_68 = CONCAT44(local_68._4_4_,0xe);
    local_48 = 0xe;
    uStack_44 = local_68._4_4_;
    piStack_40 = (int *)0x0;
    uStack_30 = uStack_50;
  }
  else if (puVar2 != &local_48) {
    local_48 = *puVar2;
    uStack_44 = *(undefined4 *)(param_2 + 0x84);
    piStack_40 = *(int **)(param_2 + 0x88);
    local_38 = *(ulonglong *)(param_2 + 0x90);
    uStack_30 = *(ulonglong *)(param_2 + 0x98);
    uVar10 = local_48 & 0x1f;
    if (9 < uVar10) {
      if ((local_48 >> 9 & 1) == 0) {
        if (uVar10 == 10) {
          *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1;
        }
        else if (10 < uVar10) {
          if (uVar10 < 0xd) {
            if (local_38 != 0) {
              *(uint *)(local_38 + 8) = *(int *)(local_38 + 8) + 1U & 0x8fffffff;
            }
          }
          else if ((uVar10 < 0xf) && (uStack_30 != 0)) {
            *(uint *)(uStack_30 + 8) = *(int *)(uStack_30 + 8) + 1U & 0x8fffffff;
          }
        }
      }
      else {
        *piStack_40 = *piStack_40 + 1;
      }
    }
  }
  uVar15 = local_38;
  uVar5 = local_48;
  lVar9 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),"callee",6);
  local_68 = local_68 & 0xffffffff00000000;
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 2;
  uVar10 = *(uint *)(lVar9 + 0x1c);
  puVar4 = *(undefined **)(uVar7 + 0x30);
  uStack_60 = lVar9;
  if (puVar4 == &DAT_1467d9aa0) {
    iVar11 = 8;
  }
  else {
    if (*(uint *)(puVar4 + 8) < *(uint *)(puVar4 + 0x18)) goto LAB_1435c7ace;
    iVar11 = *(int *)(puVar4 + 0x30) * 2 + 2;
  }
  FUN_143614420(uVar7 + 0x30,iVar11,0,0);
LAB_1435c7ace:
  FUN_143613ea0(*(undefined8 *)(uVar7 + 0x30),&local_68,&local_48,uVar10 & 0xffffff);
  piVar1 = (int *)(lVar9 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9);
  }
  piVar1 = (int *)(lVar9 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar9);
  }
  uVar10 = uVar5 & 0x1f;
  if (9 < uVar10) {
    if ((uVar5 >> 9 & 1) == 0) {
      if (uVar10 == 10) {
        piVar1 = (int *)(uVar15 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920(uVar15);
        }
      }
      else if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
        if (((local_38 & 1) == 0) && ((uVar15 != 0 && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
          FUN_1434ef880(uVar15);
        }
      }
      else if ((((uVar10 - 0xd < 2) && ((uStack_30 & 1) == 0)) && (uStack_30 != 0)) &&
              ((*(uint *)(uStack_30 + 8) & 0x3fffff) != 0)) {
        *(uint *)(uStack_30 + 8) = *(uint *)(uStack_30 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *piStack_40 = *piStack_40 + -1;
      if (*piStack_40 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435c7bf0 FUN_1435c7bf0 body=194 status=ok
// SIG undefined FUN_1435c7bf0(void)

longlong * FUN_1435c7bf0(longlong param_1,longlong *param_2,uint *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  
  switch(*param_3 & 0x1f) {
  case 0:
    lVar3 = 8;
    break;
  case 1:
    lVar3 = 0x30;
    break;
  case 2:
  case 3:
  case 4:
    lVar3 = 0x38;
    break;
  default:
    lVar3 = 0x60;
    break;
  case 10:
    lVar2 = *(longlong *)(param_3 + 4);
    if ((lVar2 == 0) || (lVar2 == *(longlong *)(lVar2 + 8) + 0x80)) {
      lVar3 = 0x50;
    }
    else {
      lVar3 = 0x40;
    }
    break;
  case 0xb:
  case 0xc:
    lVar2 = FUN_1435caba0(param_1,param_3);
    if (*(int *)(lVar2 + 0x90) != 10) {
      lVar3 = 0x50;
      if (*(int *)(lVar2 + 0x90) - 0x12U < 2) {
        lVar3 = 0x58;
      }
      break;
    }
  case 5:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
    lVar3 = 0x48;
  }
  lVar2 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x10));
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_2;
}



// FUNCTION 1435c7d00 FUN_1435c7d00 body=243 status=ok
// SIG undefined FUN_1435c7d00(void)

ulonglong *
FUN_1435c7d00(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *(undefined1 *)(param_1 + 9) = 1;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))
                    (*(longlong **)(param_1 + 0x48),0x158,0);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1435baca0(lVar4,param_1,param_3,param_4);
  }
  cVar1 = FUN_1435bbf50(uVar5);
  if (((cVar1 == '\0') || (cVar1 = FUN_1435bc720(uVar5,param_5), cVar1 == '\0')) ||
     (cVar1 = FUN_1435be4e0(*(undefined8 *)(uVar5 + 0x30),uVar5), cVar1 == '\0')) {
    if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
      FUN_1434ef880(uVar5);
    }
    *(undefined1 *)(param_1 + 9) = 0;
    *param_2 = 0;
    return param_2;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = *(int *)(uVar5 + 8) + 1;
  *param_2 = uVar5;
  uVar3 = uVar2 & 0x8fffffff;
  *(uint *)(uVar5 + 8) = uVar3;
  if ((uVar5 & 1) != 0) {
    return param_2;
  }
  if ((uVar2 & 0x3fffff) == 0) {
    return param_2;
  }
  *(uint *)(uVar5 + 8) = uVar3 - 1;
  FUN_1434ef880(uVar5);
  return param_2;
}



// FUNCTION 1435c7e00 FUN_1435c7e00 body=133 status=ok
// SIG undefined FUN_1435c7e00(void)

undefined8 FUN_1435c7e00(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = Scaleform::GFx::AS3::Multiname::IsAnyType(param_2);
  if (cVar1 != '\0') {
    return *(undefined8 *)(param_1 + 0x200);
  }
  if (*(longlong *)(param_3 + 0x28) != 0) {
    puVar2 = (undefined8 *)FUN_1435be300(*(longlong *)(param_3 + 0x28),param_2);
    if (puVar2 != (undefined8 *)0x0) goto LAB_1435c7e62;
  }
  puVar2 = (undefined8 *)FUN_143610150(param_3 + 0x30,param_2);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
LAB_1435c7e62:
  return *puVar2;
}



// FUNCTION 1435c7e90 FUN_1435c7e90 body=98 status=ok
// SIG undefined FUN_1435c7e90(void)

undefined8 FUN_1435c7e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_4 + 0x28) != 0) {
    puVar1 = (undefined8 *)FUN_1435be2b0();
    if (puVar1 != (undefined8 *)0x0) goto LAB_1435c7ecf;
  }
  puVar1 = (undefined8 *)FUN_143610010(param_4 + 0x30,param_2,param_3);
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
LAB_1435c7ecf:
  return *puVar1;
}



// FUNCTION 1435c7f00 FUN_1435c7f00 body=379 status=ok
// SIG undefined FUN_1435c7f00(void)

longlong FUN_1435c7f00(longlong param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res18 [2];
  
  if (((param_3[3] == 0) && (param_3[2] == 0)) && (*param_3 == 0)) {
    return *(longlong *)(param_1 + 0x200);
  }
  FUN_1435ba8a0(param_2,local_res18,(longlong)param_3[2]);
  lVar2 = local_res18[0];
  if (local_res18[0] == *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18)) {
    lVar6 = *(longlong *)(param_1 + 0x208);
  }
  else {
    local_res18[0] = param_2[6];
    if (((*(longlong *)(local_res18[0] + 0x28) == 0) ||
        (plVar3 = (longlong *)FUN_1435be340(*(longlong *)(local_res18[0] + 0x28),param_2,param_3),
        plVar3 == (longlong *)0x0)) &&
       (plVar3 = (longlong *)FUN_14360ff40(local_res18[0] + 0x30,param_2,param_3),
       plVar3 == (longlong *)0x0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *plVar3;
    }
    if (lVar6 == *(longlong *)(param_1 + 0x260)) {
      if (param_3[1] < 1) {
        lVar4 = *(longlong *)(param_1 + 0x208);
      }
      else {
        uVar5 = (**(code **)(*param_2 + 0x20))(param_2,(longlong)param_3[1]);
        lVar4 = FUN_1435c7f00(param_1,param_2,uVar5);
      }
      if (lVar4 != 0) {
        if (lVar4 == *(longlong *)(param_1 + 0x230)) {
          lVar6 = *(longlong *)(param_1 + 0x268);
        }
        else if (lVar4 == *(longlong *)(param_1 + 0x238)) {
          lVar6 = *(longlong *)(param_1 + 0x270);
        }
        else if (lVar4 == *(longlong *)(param_1 + 0x228)) {
          lVar6 = *(longlong *)(param_1 + 0x278);
        }
        else if (lVar4 == *(longlong *)(param_1 + 0x240)) {
          lVar6 = *(longlong *)(param_1 + 0x280);
        }
        else if (*(longlong *)(lVar4 + 0xd8) != 0) {
          uVar5 = FUN_143610320(*(undefined8 *)(lVar6 + 0xd8));
          lVar6 = FUN_14361f050(uVar5,lVar4);
        }
      }
    }
  }
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return lVar6;
}



// FUNCTION 1435c8090 FUN_1435c8090 body=519 status=ok
// SIG undefined FUN_1435c8090(void)

longlong FUN_1435c8090(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_48;
  ulonglong local_40;
  longlong *local_38;
  longlong *local_30;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar6 = -1;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(char *)(*(longlong *)(param_2 + 0x10) + lVar7) != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),*(longlong *)(param_2 + 0x10),lVar7,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(*(longlong *)(param_2 + 0x18) + lVar6) != '\0');
  local_res10 = FUN_143360950(*(undefined8 *)(lVar5 + 0x218),*(longlong *)(param_2 + 0x18),lVar6,0);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  puVar3 = (ulonglong *)FUN_1435cc220(param_1,local_res20,0,&local_res10);
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  uVar2 = *puVar3;
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (lVar6 == 0) {
LAB_1435c8135:
    plVar4 = (longlong *)FUN_143610010(lVar5 + 0x30,&local_res8,uVar2);
    if (plVar4 != (longlong *)0x0) goto LAB_1435c814b;
  }
  else {
    plVar4 = (longlong *)FUN_1435be2b0(lVar6,&local_res8,uVar2);
    if (plVar4 == (longlong *)0x0) goto LAB_1435c8135;
LAB_1435c814b:
    lVar5 = *plVar4;
    if (lVar5 != 0) goto LAB_1435c824a;
  }
  lVar5 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),&local_res8,uVar2);
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1c8);
    local_48 = local_res8;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    if (uVar2 != 0) {
      *(uint *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1U & 0x8fffffff;
    }
    local_38 = &local_48;
    local_30 = &local_res18;
    local_res18 = lVar5;
    local_40 = uVar2;
    FUN_1434e5270(lVar6 + 0x30,*(undefined8 *)(lVar6 + 0x38),&local_38,
                  (uint)((*(longlong *)(uVar2 + 0x28) << 0x3c) >> 0x3c) ^
                  (*(uint *)(*(longlong *)(uVar2 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                  *(uint *)(local_res8 + 0x1c) & 0xffffff);
    if (local_40 != 0) {
      if ((local_40 & 1) == 0) {
        if ((*(uint *)(local_40 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_40 = local_40 - 1;
      }
    }
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1435c824a:
  if (((uVar2 != 0) && ((uVar2 & 1) == 0)) && ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
    FUN_1434ef880(uVar2);
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return lVar5;
}



// FUNCTION 1435c82a0 FUN_1435c82a0 body=392 status=ok
// SIG undefined FUN_1435c82a0(void)

longlong FUN_1435c82a0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong local_res20;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  longlong *local_20;
  longlong *local_18;
  
  lVar3 = FUN_1435c7e00();
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x218);
    local_38 = lVar3 + 0x48;
    piVar1 = (int *)(lVar3 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar4 = (char *)FUN_1435911f0(param_2 + 0x10,&local_res20,&local_38);
    if (*pcVar4 == '\0') {
      piVar1 = (int *)(local_38 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      return 0;
    }
    lVar3 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),&local_38,*(undefined8 *)(param_2 + 8));
    if (lVar3 != 0) {
      local_28 = *(ulonglong *)(param_2 + 8);
      lVar2 = *(longlong *)(param_1 + 0x1c8);
      local_30 = local_38;
      *(int *)(local_38 + 0x18) = *(int *)(local_38 + 0x18) + 1;
      if (local_28 != 0) {
        *(uint *)(local_28 + 8) = *(int *)(local_28 + 8) + 1U & 0x8fffffff;
      }
      local_20 = &local_30;
      local_18 = &local_res20;
      local_res20 = lVar3;
      FUN_1434e5270(lVar2 + 0x30,*(undefined8 *)(lVar2 + 0x38),&local_20,
                    (uint)((*(longlong *)(local_28 + 0x28) << 0x3c) >> 0x3c) ^
                    (*(uint *)(*(longlong *)(local_28 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                    *(uint *)(local_38 + 0x1c) & 0xffffff);
      if (local_28 != 0) {
        if ((local_28 & 1) == 0) {
          if ((*(uint *)(local_28 + 8) & 0x3fffff) != 0) {
            *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          local_28 = local_28 - 1;
        }
      }
      piVar1 = (int *)(local_30 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    piVar1 = (int *)(local_38 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return lVar3;
}



// FUNCTION 1435c8430 FUN_1435c8430 body=161 status=ok
// SIG undefined FUN_1435c8430(void)

longlong FUN_1435c8430(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_res20;
  
  if ((((*(longlong *)(param_4 + 0x28) != 0) &&
       (plVar1 = (longlong *)FUN_1435be2b0(), plVar1 != (longlong *)0x0)) ||
      (plVar1 = (longlong *)FUN_143610010(param_4 + 0x30,param_2,param_3), plVar1 != (longlong *)0x0
      )) && (*plVar1 != 0)) {
    return *plVar1;
  }
  lVar2 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),param_2,param_3);
  if (lVar2 != 0) {
    local_res20 = lVar2;
    FUN_1434e7e70(*(longlong *)(param_1 + 0x1c8) + 0x30,param_2,param_3,&local_res20);
  }
  return lVar2;
}



// FUNCTION 1435c84e0 FUN_1435c84e0 body=591 status=ok
// SIG undefined FUN_1435c84e0(void)

longlong FUN_1435c84e0(longlong param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_res18;
  longlong local_res20;
  longlong local_38;
  ulonglong local_30;
  longlong *local_28;
  longlong *local_20;
  
  if (((param_3[3] == 0) && (param_3[2] == 0)) && (*param_3 == 0)) {
    return *(longlong *)(param_1 + 0x200);
  }
  FUN_1435ba8a0(param_2,&local_res18,(longlong)param_3[2]);
  uVar3 = FUN_1435ba6d0(param_2,(longlong)*param_3);
  lVar5 = param_2[6];
  lVar6 = *(longlong *)(lVar5 + 0x28);
  if (lVar6 == 0) {
LAB_1435c855c:
    plVar4 = (longlong *)FUN_143610010(lVar5 + 0x30,&local_res18,uVar3);
    if (plVar4 != (longlong *)0x0) goto LAB_1435c8572;
  }
  else {
    plVar4 = (longlong *)FUN_1435be2b0(lVar6,&local_res18,uVar3);
    if (plVar4 == (longlong *)0x0) goto LAB_1435c855c;
LAB_1435c8572:
    lVar5 = *plVar4;
    if (lVar5 != 0) goto LAB_1435c8668;
  }
  lVar5 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),&local_res18,uVar3);
  if (lVar5 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1c8);
    local_38 = local_res18;
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
    }
    local_28 = &local_38;
    local_20 = &local_res20;
    local_res20 = lVar5;
    local_30 = uVar3;
    FUN_1434e5270(lVar6 + 0x30,*(undefined8 *)(lVar6 + 0x38),&local_28,
                  (uint)((*(longlong *)(uVar3 + 0x28) << 0x3c) >> 0x3c) ^
                  (*(uint *)(*(longlong *)(uVar3 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                  *(uint *)(local_res18 + 0x1c) & 0xffffff);
    if (local_30 != 0) {
      if ((local_30 & 1) == 0) {
        if ((*(uint *)(local_30 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_30 = local_30 - 1;
      }
    }
    piVar1 = (int *)(local_38 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1435c8668:
  if (lVar5 == *(longlong *)(param_1 + 0x260)) {
    if (param_3[1] < 1) {
      lVar6 = *(longlong *)(param_1 + 0x208);
    }
    else {
      uVar7 = (**(code **)(*param_2 + 0x20))(param_2,(longlong)param_3[1]);
      lVar6 = FUN_1435c84e0(param_1,param_2,uVar7);
    }
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x90);
      if (iVar2 == 2) {
        lVar5 = *(longlong *)(param_1 + 0x268);
      }
      else if (iVar2 == 3) {
        lVar5 = *(longlong *)(param_1 + 0x270);
      }
      else if (iVar2 == 4) {
        lVar5 = *(longlong *)(param_1 + 0x278);
      }
      else if (iVar2 == 5) {
        lVar5 = *(longlong *)(param_1 + 0x280);
      }
      else if (*(longlong *)(lVar6 + 0xd8) != 0) {
        uVar7 = FUN_143610320(*(undefined8 *)(lVar5 + 0xd8));
        lVar5 = FUN_14361f050(uVar7,lVar6);
      }
    }
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return lVar5;
}



// FUNCTION 1435c8740 FUN_1435c8740 body=206 status=ok
// SIG undefined FUN_1435c8740(void)

void FUN_1435c8740(longlong param_1,longlong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_1 + 0xf0);
  if (uVar1 != 0) {
    plVar2 = *(longlong **)(param_1 + 0xe8);
    while (*plVar2 != param_2) {
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 1;
      if (uVar1 <= uVar3) {
        return;
      }
    }
    if (uVar1 == 1) {
      if (((*(ulonglong *)(param_1 + 0xf8) & 0xfffffffffffffffe) != 0) &&
         (*(ulonglong *)(param_1 + 0xf8) != 0)) {
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *(undefined8 *)(param_1 + 0xe8) = 0;
        }
        *(undefined8 *)(param_1 + 0xf8) = 0;
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
      return;
    }
    _Dst = (void *)(*(longlong *)(param_1 + 0xe8) + uVar3 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(uVar1 - uVar3) * 8 - 8);
    *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -1;
  }
  return;
}



// FUNCTION 1435c8820 FUN_1435c8820 body=225 status=ok
// SIG undefined FUN_1435c8820(void)

longlong * FUN_1435c8820(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte local_res8 [8];
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x218);
  *param_2 = lVar7 + 0x48;
  piVar1 = (int *)(lVar7 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar7 = *(longlong *)(param_1 + 0x2f8);
  if (lVar7 != 0) {
    uVar3 = 0x1505;
    lVar5 = 8;
    do {
      pbVar2 = &stack0x00000007 + lVar5;
      lVar5 = lVar5 + -1;
      uVar3 = (ulonglong)*pbVar2 + uVar3 * 0x1003f;
    } while (lVar5 != 0);
    uVar3 = *(ulonglong *)(lVar7 + 8) & uVar3;
    puVar4 = (ulonglong *)(lVar7 + 0x10 + uVar3 * 0x20);
    if ((*puVar4 != 0xfffffffffffffffe) && (uVar6 = uVar3, puVar4[1] == uVar3)) {
      while ((puVar4[1] != uVar3 || (puVar4[2] != param_3))) {
        uVar6 = *puVar4;
        if (uVar6 == 0xffffffffffffffff) {
          return param_2;
        }
        puVar4 = (ulonglong *)(lVar7 + 0x10 + uVar6 * 0x20);
      }
      if ((-1 < (longlong)uVar6) && (lVar7 = (uVar6 + 1) * 0x20 + lVar7, lVar7 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 8);
        piVar1 = (int *)(lVar7 + 0x18);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(*param_2 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_2 = lVar7;
      }
    }
  }
  return param_2;
}



// FUNCTION 1435c8910 FUN_1435c8910 body=77 status=ok
// SIG undefined FUN_1435c8910(void)

undefined8 FUN_1435c8910(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  if (lVar1 != 0) {
    lVar2 = FUN_1432ef240((longlong *)(param_1 + 0x2f0),param_2,
                          (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar1 + 8));
    if ((-1 < lVar2) && (lVar1 = lVar1 + (lVar2 * 3 + 3) * 8, lVar1 != 0)) {
      return *(undefined8 *)(lVar1 + 8);
    }
  }
  return 0;
}



// FUNCTION 1435c8970 FUN_1435c8970 body=392 status=ok
// SIG undefined FUN_1435c8970(void)

void FUN_1435c8970(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  longlong *local_28;
  longlong *local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x2f0);
  if (((lVar2 == 0) ||
      (lVar1 = FUN_1432ef240(param_1 + 0x2f0,param_2,
                             (ulonglong)*(uint *)(*param_2 + 0x1c) & *(ulonglong *)(lVar2 + 8)),
      lVar1 < 0)) || (lVar2 = lVar2 + (lVar1 * 3 + 3) * 8, lVar2 == 0)) {
    lVar2 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x38))();
    if (lVar2 != 0) {
      FUN_143609890(lVar2 + 0x148,lVar2 + 0x148,param_2,*(undefined4 *)(*param_2 + 0x1c));
    }
    local_20 = &local_res8;
    local_res8 = param_3;
    local_28 = param_2;
    FUN_143608ad0(param_1 + 0x2f0,param_1 + 0x2f0,&local_28,*(undefined4 *)(*param_2 + 0x1c));
  }
  else {
    local_res8 = *(longlong *)(lVar2 + 8);
    if (local_res8 == param_3) {
      return;
    }
    lVar2 = (**(code **)(**(longlong **)(local_res8 + 0x28) + 0x38))();
    if (lVar2 != 0) {
      FUN_1436045e0(lVar2 + 0x148,param_2);
    }
    FUN_143604120(param_1 + 0x2f8,&local_res8);
    lVar2 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x38))();
    if (lVar2 != 0) {
      FUN_143609890(lVar2 + 0x148,lVar2 + 0x148,param_2,*(undefined4 *)(*param_2 + 0x1c));
    }
    local_res8 = param_3;
    FUN_143613b80(param_1 + 0x2f0,param_2,&local_res8);
  }
  local_28 = &local_res8;
  local_res8 = param_3;
  local_20 = param_2;
  FUN_143604a00(param_1 + 0x2f8,param_1 + 0x2f8,&local_28);
  return;
}



// FUNCTION 1435c8b00 FUN_1435c8b00 body=269 status=ok
// SIG undefined FUN_1435c8b00(void)

undefined8 FUN_1435c8b00(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [2];
  int *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  if (param_3 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = -1;
    do {
      local_40 = local_40 + 1;
    } while (*(char *)(param_3 + local_40) != '\0');
  }
  local_48 = param_3;
  FUN_1435ae830(local_38,param_1,&local_48);
  lVar2 = FUN_1435c82a0(param_1,local_38,param_4);
  if ((lVar2 == 0) || (cVar1 = FUN_1435c8c20(param_1,param_2,lVar2), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_28);
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      local_28[0] = local_28[0] & 0xfffffde0;
      local_10 = 0;
      local_20 = (int *)0x0;
      uStack_18 = 0;
    }
  }
  if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
    FUN_1434ef880();
  }
  return uVar3;
}



// FUNCTION 1435c8c20 FUN_1435c8c20 body=473 status=ok
// SIG undefined FUN_1435c8c20(void)

ulonglong FUN_1435c8c20(longlong param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  bool bVar5;
  double dVar6;
  double local_res10;
  
  iVar1 = *(int *)(param_3 + 0x90);
  switch(*param_2 & 0x1f) {
  default:
    return 0;
  case 1:
    if (iVar1 == 1) {
      return 1;
    }
    if (param_3 == *(longlong *)(param_1 + 0x208)) {
      return 1;
    }
    return 0;
  case 2:
    if (iVar1 == 3) {
      return (ulonglong)(~param_2[4] >> 0x1f);
    }
    if (iVar1 == 4) {
      return 1;
    }
    bVar5 = iVar1 == 2;
    break;
  case 3:
    if (iVar1 == 2) {
      return (ulonglong)(param_2[4] < 0x80000000);
    }
    if (iVar1 == 4) {
      return 1;
    }
    bVar5 = iVar1 == 3;
    break;
  case 4:
    dVar6 = modf(*(double *)(param_2 + 4),&local_res10);
    if (dVar6 == 0.0) {
      if (iVar1 == 3) {
        if (local_res10 < 0.0) {
          return 0;
        }
        if (4294967295.0 < local_res10) {
          return 0;
        }
        return 1;
      }
      if (iVar1 == 2) {
        if (local_res10 < -2147483648.0) {
          return 0;
        }
        if (local_res10 <= 2147483647.0) {
          return 1;
        }
        return 0;
      }
    }
    bVar5 = iVar1 == 4;
    break;
  case 10:
    if (*(longlong *)(param_2 + 4) == 0) {
      return 0;
    }
    bVar5 = iVar1 == 5;
    break;
  case 0xc:
    if (*(longlong *)(param_2 + 4) == 0) {
      return 0;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 4) + 0x28) + 0x88) >> 5 & 1) != 0) {
      lVar2 = FUN_143610320();
      uVar4 = FUN_1435b5020(param_3,*(undefined8 *)(lVar2 + 0x28));
      return uVar4;
    }
  case 0xb:
  case 0xd:
  case 0xe:
    uVar3 = FUN_1435ca910(param_1);
    uVar4 = FUN_1435b5020(param_3,uVar3);
    return uVar4;
  }
  if ((!bVar5) && (param_3 != *(longlong *)(param_1 + 0x208))) {
    return 0;
  }
  return 1;
}



// FUNCTION 1435c8e40 FUN_1435c8e40 body=319 status=ok
// SIG undefined FUN_1435c8e40(void)

undefined4 * FUN_1435c8e40(undefined4 *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong local_res8;
  undefined4 local_res10 [2];
  undefined4 local_428 [2];
  ulonglong *local_420;
  undefined1 local_408 [1024];
  
  *param_1 = param_2;
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x218);
  *(longlong *)(param_1 + 2) = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_1432c2f70(&local_res8);
  local_420 = &local_res8;
  local_428[0] = 0;
  local_res10[0] = param_2;
  FUN_1433561d0(local_408,local_428);
  FUN_1433563e0(local_408,"Error #{0}");
  FUN_1432e0b40(local_408,local_res10);
  Scaleform::MsgFormat::FinishFormatD(local_408);
  FUN_1433562f0(local_408);
  lVar3 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x218),
                        (longlong)(local_res8 & 0xfffffffffffffffc) + 0xc,
                        *(ulonglong *)(local_res8 & 0xfffffffffffffffc) & 0x7fffffffffffffff);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *(longlong *)(param_1 + 2) = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
  }
  return param_1;
}



// FUNCTION 1435c8f90 FUN_1435c8f90 body=5326 status=ok
// SIG undefined FUN_1435c8f90(void)

int FUN_1435c8f90(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char cVar21;
  undefined1 uVar22;
  int iVar23;
  int iVar24;
  char *pcVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  char local_res8 [8];
  int local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_144 [4];
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  uint uStack_110;
  uint uStack_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  
  lVar33 = *(longlong *)(param_1 + 0x108);
  do {
    if (lVar33 == 0) {
      return param_2;
    }
    uVar27 = *(longlong *)(param_1 + 0x108) - 1;
    lVar34 = (ulonglong)((uint)uVar27 & 0x3f) * 0xa0 +
             *(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar27 >> 6) * 8);
    lVar6 = *(longlong *)(lVar34 + 0x18);
    lVar7 = *(longlong *)(lVar6 + 0xa0);
    puVar29 = *(uint **)(lVar34 + 8);
    local_res10 = param_2;
    local_138 = lVar33;
    if (*(char *)(param_1 + 0xb8) == '\0') goto switchD_1435c90b3_caseD_2;
    lVar28 = **(longlong **)(lVar34 + 0x10);
    iVar23 = FUN_1435cd480(param_1,((longlong)*(uint **)(lVar34 + 8) - lVar28 >> 3) + -1);
    while (-1 < iVar23) {
      puVar29 = (uint *)(lVar28 + (longlong)iVar23 * 8);
switchD_1435c90b3_caseD_2:
      do {
        puVar30 = puVar29;
        puVar29 = puVar30 + 2;
        param_2 = local_res10;
        switch((uint)*(undefined8 *)puVar30 & 0xff) {
        case 1:
          *(uint **)(lVar34 + 8) = puVar30 + 4;
          return local_res10;
        default:
          goto switchD_1435c90b3_caseD_2;
        case 3:
          iVar23 = FUN_143619fa0(param_1,puVar29);
          param_2 = local_res10;
          if (iVar23 < 0) goto LAB_1435ca3cd;
          puVar29 = (uint *)(**(longlong **)(lVar34 + 0x10) + (longlong)iVar23 * 8);
          goto switchD_1435c90b3_caseD_2;
        case 4:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c0230(param_1,lVar6,*(undefined8 *)(lVar34 + 0x28),
                        (longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148));
          break;
        case 5:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c0450(param_1,lVar6,*(undefined8 *)(lVar34 + 0x28),
                        (longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148));
          break;
        case 6:
          FUN_143617c80(param_1,lVar6);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 7:
          FUN_1435c0620(param_1);
          break;
        case 8:
          FUN_1436193d0(param_1,*puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 10:
        case 0x81:
          piVar2 = (int *)((ulonglong)*puVar29 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x78));
          *piVar2 = *piVar2 + 1;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0xb:
        case 0x82:
          piVar2 = (int *)((ulonglong)*puVar29 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x78));
          *piVar2 = *piVar2 + -1;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0xc:
          iVar23 = FUN_143618eb0(param_1);
          goto LAB_1435c91da;
        case 0xd:
          iVar23 = FUN_143618da0(param_1);
          goto LAB_1435c91da;
        case 0xe:
          iVar23 = FUN_143618c90(param_1);
          goto LAB_1435c91da;
        case 0xf:
          iVar23 = FUN_143618b80(param_1);
          goto LAB_1435c91da;
        case 0x10:
          puVar29 = puVar29 + (longlong)(int)*puVar29 * 2;
        case 0xf0:
        case 0xf1:
          puVar29 = puVar29 + 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x11:
          iVar23 = FUN_143618fc0(param_1,*puVar29);
          puVar29 = puVar29 + (longlong)iVar23 * 2 + 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x12:
          iVar23 = FUN_143618600(param_1,*puVar29);
          puVar29 = puVar29 + (longlong)iVar23 * 2 + 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x13:
          iVar23 = FUN_143618510(param_1);
          goto LAB_1435c91da;
        case 0x14:
          iVar23 = FUN_143618a90(param_1);
          goto LAB_1435c91da;
        case 0x15:
          iVar23 = FUN_143618980(param_1);
          goto LAB_1435c91da;
        case 0x16:
          iVar23 = FUN_143618870(param_1);
          goto LAB_1435c91da;
        case 0x17:
          iVar23 = FUN_143618760(param_1);
          goto LAB_1435c91da;
        case 0x18:
          iVar23 = FUN_143618650(param_1);
LAB_1435c91da:
          puVar30 = puVar30 + 4;
          if (*(char *)(param_1 + 0xb8) != '\0') {
            lVar28 = **(longlong **)(lVar34 + 0x10);
            iVar24 = FUN_1435cd480(param_1,((longlong)puVar30 - lVar28 >> 3) + -1);
            param_2 = local_res10;
            if (iVar24 < 0) goto LAB_1435ca3cd;
            puVar30 = (uint *)(lVar28 + (longlong)iVar24 * 8);
          }
          puVar29 = puVar30 + (longlong)iVar23 * 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x19:
          uVar32 = *puVar29;
          cVar21 = FUN_1435927d0(*(longlong *)(param_1 + 0x58),*(longlong *)(param_1 + 0x58) + -0x20
                                );
          if (cVar21 == '\0') {
            uVar32 = 0;
          }
          FUN_143611c50(param_1 + 0x58);
          puVar29 = puVar29 + (longlong)(int)uVar32 * 2 + 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x1a:
          uVar32 = *puVar29;
          cVar21 = FUN_1435927d0(*(longlong *)(param_1 + 0x58),*(longlong *)(param_1 + 0x58) + -0x20
                                );
          if (cVar21 != '\0') {
            uVar32 = 0;
          }
          FUN_143611c50(param_1 + 0x58);
          puVar29 = puVar29 + (longlong)(int)uVar32 * 2 + 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x1b:
          uVar32 = *puVar29;
          uVar26 = puVar30[4];
          uVar4 = *(uint *)(*(longlong *)(param_1 + 0x58) + 0x10);
          FUN_143611f90(param_1 + 0x58);
          if ((-1 < (int)uVar4) && (uVar4 <= uVar26)) {
            uVar32 = puVar30[(longlong)(int)uVar4 * 2 + 6];
          }
          puVar29 = puVar30 + (longlong)(int)uVar32 * 2;
          lVar33 = local_138;
          goto switchD_1435c90b3_caseD_2;
        case 0x1c:
          FUN_1435c0840(param_1);
          break;
        case 0x1d:
          FUN_143611f90(param_1 + 0x98);
          goto switchD_1435c90b3_caseD_2;
        case 0x1e:
          FUN_1435c0930(param_1);
          break;
        case 0x1f:
          FUN_1435c09e0(param_1);
          break;
        case 0x20:
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          local_118 = 0;
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar30 = *(uint **)(param_1 + 0x58);
          *puVar30 = *puVar30 & 0xffffffec | 0xc;
          puVar30[4] = 0;
          puVar30[5] = 0;
          puVar30[6] = uStack_110;
          puVar30[7] = uStack_10c;
          goto switchD_1435c90b3_caseD_2;
        case 0x21:
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          **(undefined8 **)(param_1 + 0x58) = 0;
          **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) & 0xffffffe0;
          goto switchD_1435c90b3_caseD_2;
        case 0x22:
          *(bool *)(*(longlong *)(param_1 + 0x58) + 0x10) =
               *(char *)(*(longlong *)(param_1 + 0x58) + 0x10) == '\0';
          goto switchD_1435c90b3_caseD_2;
        case 0x23:
          FUN_1435c0a80(param_1);
          break;
        case 0x24:
          uVar32 = *puVar29;
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar29 = *(uint **)(param_1 + 0x58);
          *puVar29 = *puVar29 & 0xffffffe2 | 2;
          local_108 = (uint)(char)uVar32;
          puVar29[4] = local_108;
          puVar29[5] = uStack_104;
          puVar29[6] = uStack_100;
          puVar29[7] = uStack_fc;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x25:
          local_f8 = *puVar29;
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar29 = *(uint **)(param_1 + 0x58);
          *puVar29 = *puVar29 & 0xffffffe2 | 2;
          puVar29[4] = local_f8;
          puVar29[5] = uStack_f4;
          puVar29[6] = uStack_f0;
          puVar29[7] = uStack_ec;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x26:
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          local_e8 = CONCAT31(local_e8._1_3_,1);
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar30 = *(uint **)(param_1 + 0x58);
          *puVar30 = *puVar30 & 0xffffffe1 | 1;
          puVar30[4] = local_e8;
          puVar30[5] = uStack_e4;
          puVar30[6] = uStack_e0;
          puVar30[7] = uStack_dc;
          goto switchD_1435c90b3_caseD_2;
        case 0x27:
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          local_d8 = local_d8 & 0xffffff00;
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar30 = *(uint **)(param_1 + 0x58);
          *puVar30 = *puVar30 & 0xffffffe1 | 1;
          puVar30[4] = local_d8;
          puVar30[5] = uStack_d4;
          puVar30[6] = uStack_d0;
          puVar30[7] = uStack_cc;
          goto switchD_1435c90b3_caseD_2;
        case 0x28:
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar30 = *(uint **)(param_1 + 0x58);
          local_c8 = Scaleform::GFx::NumberUtil::NaN();
          *puVar30 = *puVar30 & 0xffffffe4;
          *puVar30 = *puVar30 | 4;
          *(undefined8 *)(puVar30 + 4) = local_c8;
          puVar30[6] = uStack_c0;
          puVar30[7] = uStack_bc;
          goto switchD_1435c90b3_caseD_2;
        case 0x29:
          FUN_143611f90(param_1 + 0x58);
          goto switchD_1435c90b3_caseD_2;
        case 0x2a:
          uVar11 = *(undefined8 *)(param_1 + 0x58);
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          if (*plVar1 != 0) {
            FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),uVar11);
          }
          goto switchD_1435c90b3_caseD_2;
        case 0x2b:
          puVar9 = *(undefined4 **)(param_1 + 0x58);
          local_88 = *puVar9;
          uVar19 = *(undefined8 *)(puVar9 + 4);
          uVar20 = *(undefined8 *)(puVar9 + 6);
          *puVar9 = 0;
          uVar11 = *(undefined8 *)(puVar9 + 2);
          puVar8 = *(undefined8 **)(param_1 + 0x58);
          *puVar8 = puVar8[-4];
          puVar8[1] = puVar8[-3];
          uStack_80._0_4_ = (undefined4)uVar11;
          uStack_80._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
          puVar8[2] = puVar8[-2];
          puVar8[3] = puVar8[-1];
          *(undefined4 *)(puVar8 + -4) = 0;
          lVar28 = *(longlong *)(param_1 + 0x58);
          *(undefined4 *)(lVar28 + -0x20) = local_88;
          *(undefined4 *)(lVar28 + -0x1c) = uStack_84;
          *(undefined4 *)(lVar28 + -0x18) = (undefined4)uStack_80;
          *(undefined4 *)(lVar28 + -0x14) = uStack_80._4_4_;
          *(undefined8 *)(lVar28 + -0x10) = uVar19;
          *(undefined8 *)(lVar28 + -8) = uVar20;
          uStack_80 = uVar11;
          goto switchD_1435c90b3_caseD_2;
        case 0x2c:
          FUN_143619b30(param_1,*(undefined8 *)puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x2d:
          local_b8 = *puVar29;
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar29 = *(uint **)(param_1 + 0x58);
          *puVar29 = *puVar29 & 0xffffffe2 | 2;
          puVar29[4] = local_b8;
          puVar29[5] = uStack_b4;
          puVar29[6] = uStack_b0;
          puVar29[7] = uStack_ac;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x2e:
          local_a8 = *puVar29;
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar29 = *(uint **)(param_1 + 0x58);
          *puVar29 = *puVar29 & 0xffffffe3 | 3;
          puVar29[4] = local_a8;
          puVar29[5] = uStack_a4;
          puVar29[6] = uStack_a0;
          puVar29[7] = uStack_9c;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x2f:
          local_130 = *(undefined8 *)puVar29;
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          local_98._0_4_ = (uint)local_130;
          local_98._4_4_ = (uint)((ulonglong)local_130 >> 0x20);
          **(undefined8 **)(param_1 + 0x58) = 0;
          puVar29 = *(uint **)(param_1 + 0x58);
          *puVar29 = *puVar29 & 0xffffffe4 | 4;
          puVar29[4] = (uint)local_98;
          puVar29[5] = local_98._4_4_;
          puVar29[6] = uStack_90;
          puVar29[7] = uStack_8c;
          puVar29 = puVar30 + 4;
          local_98 = local_130;
          goto switchD_1435c90b3_caseD_2;
        case 0x30:
          FUN_1435c0b30(param_1);
          break;
        case 0x31:
          uVar11 = *(undefined8 *)puVar29;
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 0x20;
          **(undefined8 **)(param_1 + 0x58) = 0;
          FUN_1434ae820(*(undefined8 *)(param_1 + 0x58),uVar11);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x32:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 6;
          FUN_1435c0c20(param_1,uVar32,*(undefined8 *)(puVar30 + 4));
          break;
        case 0x33:
          uVar32 = *puVar29;
          cVar21 = *(char *)(*(longlong *)(param_1 + 0x58) + 0x10);
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
          uVar26 = 0;
          if (cVar21 != '\0') {
            uVar26 = uVar32;
          }
          puVar29 = puVar29 + (longlong)(int)uVar26 * 2 + 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x34:
          uVar32 = *puVar29;
          cVar21 = *(char *)(*(longlong *)(param_1 + 0x58) + 0x10);
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
          uVar26 = 0;
          if (cVar21 == '\0') {
            uVar26 = uVar32;
          }
          puVar29 = puVar29 + (longlong)(int)uVar26 * 2 + 2;
          goto switchD_1435c90b3_caseD_2;
        case 0x35:
          *(double *)(*(longlong *)(param_1 + 0x58) + 0x10) =
               *(double *)(*(longlong *)(param_1 + 0x58) + 0x10) + 1.0;
          goto switchD_1435c90b3_caseD_2;
        case 0x36:
          *(double *)(*(longlong *)(param_1 + 0x58) + 0x10) =
               *(double *)(*(longlong *)(param_1 + 0x58) + 0x10) - 1.0;
          goto switchD_1435c90b3_caseD_2;
        case 0x37:
          *(double *)((ulonglong)*puVar29 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x78)) =
               *(double *)((ulonglong)*puVar29 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x78)) + 1.0;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x38:
          *(double *)((ulonglong)*puVar29 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x78)) =
               *(double *)((ulonglong)*puVar29 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x78)) - 1.0;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x3f:
          *(int *)(*(longlong *)(param_1 + 0x58) + 0x10) =
               -*(int *)(*(longlong *)(param_1 + 0x58) + 0x10);
          goto switchD_1435c90b3_caseD_2;
        case 0x40:
          FUN_1435c10e0(param_1,lVar34);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x41:
          puVar31 = puVar30 + 4;
          FUN_1435c11c0(param_1,*puVar29);
          goto LAB_1435c9798;
        case 0x42:
          puVar31 = puVar30 + 4;
          FUN_1435c1650(param_1,*puVar29);
          goto LAB_1435c9798;
        case 0x43:
          puVar31 = puVar30 + 8;
          FUN_1435c1a70(param_1,*puVar29,*(undefined8 *)(puVar30 + 4),*(undefined8 *)(puVar30 + 6));
          goto LAB_1435c9798;
        case 0x44:
          FUN_1435c2ae0(param_1,lVar34,*(undefined8 *)puVar29,*(undefined8 *)(puVar30 + 4));
          puVar29 = puVar30 + 6;
          goto switchD_1435c90b3_caseD_2;
        case 0x45:
          FUN_1435c2370(param_1,lVar6,*(undefined8 *)(lVar34 + 0x28),
                        (ulonglong)*puVar29 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(puVar30 + 4));
          goto LAB_1435c98a1;
        case 0x46:
          FUN_1435c2680(param_1,lVar6,(ulonglong)*puVar29 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(puVar30 + 4));
          goto LAB_1435c98a1;
        case 0x47:
          if (*(longlong *)(lVar34 + 0x40) != 0) {
            FUN_1435168c0();
            param_2 = local_res10;
          }
          goto LAB_1435ca3cd;
        case 0x48:
          puVar9 = *(undefined4 **)(lVar34 + 0x40);
          if (puVar9 != (undefined4 *)0x0) {
            puVar10 = *(undefined4 **)(param_1 + 0x58);
            uVar5 = *puVar10;
            uVar11 = *(undefined8 *)(puVar10 + 2);
            uVar12 = puVar10[4];
            uVar13 = puVar10[5];
            uVar14 = puVar10[6];
            uVar15 = puVar10[7];
            *puVar10 = *puVar9;
            *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar9 + 2);
            uVar16 = puVar9[5];
            uVar17 = puVar9[6];
            uVar18 = puVar9[7];
            puVar10[4] = puVar9[4];
            puVar10[5] = uVar16;
            puVar10[6] = uVar17;
            puVar10[7] = uVar18;
            *puVar9 = uVar5;
            *(undefined8 *)(puVar9 + 2) = uVar11;
            puVar9[4] = uVar12;
            puVar9[5] = uVar13;
            puVar9[6] = uVar14;
            puVar9[7] = uVar15;
            FUN_143611f90(param_1 + 0x58);
            param_2 = local_res10;
          }
          goto LAB_1435ca3cd;
        case 0x49:
          puVar31 = puVar30 + 4;
          FUN_1435c2be0(param_1,*(undefined8 *)(lVar34 + 0x28));
          goto LAB_1435c9798;
        case 0x4a:
          FUN_1435c2d70(param_1,lVar6,(ulonglong)*puVar29 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(puVar30 + 4));
          goto LAB_1435c98a1;
        case 0x4c:
          FUN_1435c3440(param_1,lVar6,(ulonglong)*puVar29 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(puVar30 + 4));
          goto LAB_1435c98a1;
        case 0x4e:
          FUN_1435c38c0(param_1,lVar6,*(undefined8 *)(lVar34 + 0x28),
                        (ulonglong)*puVar29 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(puVar30 + 4));
          goto LAB_1435c98a1;
        case 0x4f:
          FUN_1435c3d10(param_1,lVar6,(ulonglong)*puVar29 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(puVar30 + 4));
LAB_1435c98a1:
          puVar31 = puVar30 + 6;
          if (*(char *)(param_1 + 0xb8) != '\0') {
            lVar28 = **(longlong **)(lVar34 + 0x10);
            iVar23 = FUN_1435cd480(param_1,((longlong)puVar31 - lVar28 >> 3) + -1);
            param_2 = local_res10;
            if (iVar23 < 0) goto LAB_1435ca3cd;
            puVar31 = (uint *)(lVar28 + (longlong)iVar23 * 8);
          }
          lVar28 = *(longlong *)(param_1 + 0x108);
          goto joined_r0x0001435c98ea;
        case 0x50:
          puVar31 = puVar30 + 4;
          FUN_1435c18a0(param_1,*puVar29);
          goto LAB_1435c9798;
        case 0x52:
          iVar23 = FUN_143619010(param_1,*(undefined8 *)puVar29);
          puVar29 = puVar30 + (longlong)iVar23 * 2 + 6;
          goto switchD_1435c90b3_caseD_2;
        case 0x53:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c43d0(param_1,uVar32);
          break;
        case 0x54:
          *(ulonglong *)(*(longlong *)(param_1 + 0x58) + 0x10) =
               *(ulonglong *)(*(longlong *)(param_1 + 0x58) + 0x10) ^ 0x8000000000000000;
          goto switchD_1435c90b3_caseD_2;
        case 0x55:
          FUN_1435c4570(param_1,*puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x56:
          FUN_1435c48c0(param_1,*puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x57:
          FUN_1435c49d0(param_1,*(undefined8 *)puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x58:
          puVar31 = puVar30 + 4;
          FUN_1435c4aa0(param_1,lVar6);
          goto LAB_1435c9798;
        case 0x59:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c4da0(param_1,lVar6,(longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148));
          break;
        case 0x5a:
          FUN_143619a30(param_1,*(undefined8 *)puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x5d:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c4fa0(param_1,lVar6,(longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(lVar34 + 0x30));
          break;
        case 0x5e:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c52d0(param_1,lVar6,(longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(lVar34 + 0x30),*(undefined8 *)(lVar34 + 0x38));
          break;
        case 0x60:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c5630(param_1,lVar6,(longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(lVar34 + 0x30));
          break;
        case 0x61:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c5bc0(param_1,lVar6,(longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148));
          break;
        case 0x62:
          uVar32 = *puVar29;
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          puVar29 = puVar30 + 4;
          if (*plVar1 != 0) {
            FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),
                          (ulonglong)uVar32 * 0x20 + *(longlong *)(param_1 + 0x78));
          }
          goto switchD_1435c90b3_caseD_2;
        case 99:
          FUN_143619bb0(param_1,*puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 100:
          FUN_143618020(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0x65:
          uVar32 = *puVar29;
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          if (*plVar1 != 0) {
            FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),
                          (longlong)(int)uVar32 * 0x20 + *(longlong *)(param_1 + 0xa0));
          }
          **(uint **)(param_1 + 0x58) = **(uint **)(param_1 + 0x58) & 0xfffffeff;
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x66:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 0xc;
          FUN_1435c5d30(param_1,puVar29,lVar6,
                        (longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148),
                        *(undefined8 *)(puVar30 + 4),*(undefined8 *)(puVar30 + 6),
                        *(undefined8 *)(puVar30 + 8),*(undefined8 *)(puVar30 + 10));
          break;
        case 0x67:
          FUN_1435c6390(param_1,lVar34);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x68:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6420(param_1,lVar6,(longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148));
          break;
        case 0x69:
          puVar9 = *(undefined4 **)(param_1 + 0x58);
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          puVar10 = *(undefined4 **)(param_1 + 0x58);
          if (*plVar1 != 0) {
            *puVar10 = *puVar9;
            *(undefined8 *)(puVar10 + 2) = *(undefined8 *)(puVar9 + 2);
            uVar5 = puVar9[5];
            uVar12 = puVar9[6];
            uVar13 = puVar9[7];
            puVar10[4] = puVar9[4];
            puVar10[5] = uVar5;
            puVar10[6] = uVar12;
            puVar10[7] = uVar13;
          }
          goto switchD_1435c90b3_caseD_2;
        case 0x6a:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6590(param_1,lVar6,(longlong)(int)uVar32 * 0x10 + *(longlong *)(lVar7 + 0x148));
          break;
        case 0x6b:
          *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + -0x20;
          goto switchD_1435c90b3_caseD_2;
        case 0x6c:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6700(param_1,uVar32);
          break;
        case 0x6d:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6850(param_1,uVar32);
          break;
        case 0x6e:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6970(param_1,uVar32);
          break;
        case 0x6f:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6a30(param_1,uVar32);
          break;
        case 0x70:
          FUN_143591c60(*(undefined8 *)(param_1 + 0x58),local_res18,*(undefined8 *)(param_1 + 0x10))
          ;
          break;
        case 0x71:
          FUN_1435c6b00(param_1);
          break;
        case 0x72:
          FUN_1435c6b70(param_1);
          break;
        case 0x73:
          lVar28 = *(longlong *)(param_1 + 0x58) + (ulonglong)(*puVar29 & 0xffff) * -0x20;
          pcVar25 = (char *)FUN_143590b70(lVar28,local_res20,&local_140);
          if (*pcVar25 != '\0') {
            FUN_1434f0780(lVar28,local_140);
          }
LAB_1435c9d6c:
          puVar29 = puVar30 + 4;
          break;
        case 0x74:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          lVar28 = *(longlong *)(param_1 + 0x58) + (ulonglong)(uVar32 & 0xffff) * -0x20;
          pcVar25 = (char *)FUN_143590eb0(lVar28,local_144,&local_13c);
          if (*pcVar25 == '\0') goto LAB_1435c9d6c;
          FUN_143614720(lVar28,local_13c);
          break;
        case 0x75:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          lVar28 = *(longlong *)(param_1 + 0x58) + (ulonglong)(uVar32 & 0xffff) * -0x20;
          FUN_14360f380(lVar28,local_res8,&local_128);
          if (local_res8[0] == '\0') goto LAB_1435c9d6c;
          FUN_1434f06a0(lVar28,(int)local_128);
          break;
        case 0x76:
          lVar28 = *(longlong *)(param_1 + 0x58) + (ulonglong)(*puVar29 & 0xffff) * -0x20;
          uVar22 = FUN_1435909c0(lVar28);
          FUN_1434f05f0(lVar28,uVar22);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0x77:
          FUN_1436179a0(param_1);
          break;
        case 0x78:
          FUN_1435c6c90(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0x79:
          lVar28 = *(longlong *)(param_1 + 0x58);
          iVar23 = *(int *)(lVar28 + 0x10);
          *(longlong *)(param_1 + 0x58) = lVar28 + -0x20;
          *(int *)(lVar28 + -0x10) = *(int *)(lVar28 + -0x10) + iVar23;
          goto switchD_1435c90b3_caseD_2;
        case 0x7a:
          lVar28 = *(longlong *)(param_1 + 0x58);
          iVar23 = *(int *)(lVar28 + 0x10);
          *(longlong *)(param_1 + 0x58) = lVar28 + -0x20;
          *(int *)(lVar28 + -0x10) = *(int *)(lVar28 + -0x10) - iVar23;
          goto switchD_1435c90b3_caseD_2;
        case 0x7b:
          lVar28 = *(longlong *)(param_1 + 0x58);
          iVar23 = *(int *)(lVar28 + 0x10);
          *(longlong *)(param_1 + 0x58) = lVar28 + -0x20;
          *(int *)(lVar28 + -0x10) = *(int *)(lVar28 + -0x10) * iVar23;
          goto switchD_1435c90b3_caseD_2;
        case 0x7c:
          lVar28 = *(longlong *)(param_1 + 0x58);
          dVar3 = *(double *)(lVar28 + 0x10);
          *(longlong *)(param_1 + 0x58) = lVar28 + -0x20;
          *(double *)(lVar28 + -0x10) = dVar3 + *(double *)(lVar28 + -0x10);
          goto switchD_1435c90b3_caseD_2;
        case 0x7d:
          lVar28 = *(longlong *)(param_1 + 0x58);
          *(longlong *)(param_1 + 0x58) = lVar28 + -0x20;
          *(double *)(lVar28 + -0x10) = *(double *)(lVar28 + -0x10) - *(double *)(lVar28 + 0x10);
          goto switchD_1435c90b3_caseD_2;
        case 0x7e:
          lVar28 = *(longlong *)(param_1 + 0x58);
          dVar3 = *(double *)(lVar28 + 0x10);
          *(longlong *)(param_1 + 0x58) = lVar28 + -0x20;
          *(double *)(lVar28 + -0x10) = dVar3 * *(double *)(lVar28 + -0x10);
          goto switchD_1435c90b3_caseD_2;
        case 0x7f:
          lVar28 = *(longlong *)(param_1 + 0x58);
          *(longlong *)(param_1 + 0x58) = lVar28 + -0x20;
          *(double *)(lVar28 + -0x10) = *(double *)(lVar28 + -0x10) / *(double *)(lVar28 + 0x10);
          goto switchD_1435c90b3_caseD_2;
        case 0x80:
          uVar11 = *(undefined8 *)puVar29;
          puVar29 = puVar30 + 6;
          FUN_1435c6d40(param_1,uVar11,*(undefined8 *)(puVar30 + 4));
          break;
        case 0x85:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6dd0(param_1,uVar32);
          break;
        case 0x86:
          uVar11 = *(undefined8 *)puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c6e40(param_1,uVar11);
          break;
        case 0x87:
          FUN_1435c6ed0(param_1);
          break;
        case 0x88:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1436191d0(param_1,uVar32);
          break;
        case 0x89:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_143617b40(param_1,uVar32);
          break;
        case 0x90:
          FUN_1436199a0(param_1);
          break;
        case 0x91:
          FUN_143619240(param_1);
          break;
        case 0x92:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_1436190b0(param_1,uVar32);
          break;
        case 0x93:
          FUN_143617bb0(param_1);
          break;
        case 0x94:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_143617a20(param_1,uVar32);
          break;
        case 0x95:
          FUN_14361a000(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0x96:
          FUN_143619b00(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0x97:
          FUN_143617900(param_1);
          break;
        case 0x98:
          piVar2 = (int *)(*(longlong *)(param_1 + 0x58) + 0x10);
          *piVar2 = *piVar2 + 1;
          goto switchD_1435c90b3_caseD_2;
        case 0x99:
          piVar2 = (int *)(*(longlong *)(param_1 + 0x58) + 0x10);
          *piVar2 = *piVar2 + -1;
          goto switchD_1435c90b3_caseD_2;
        case 0x9a:
          FUN_1436180e0(param_1);
          break;
        case 0xa0:
          FUN_143617810(param_1);
          break;
        case 0xa1:
          FUN_143619db0(param_1);
          break;
        case 0xa2:
          FUN_1436197b0(param_1);
          break;
        case 0xa3:
          FUN_143617c40(param_1);
          break;
        case 0xa4:
          FUN_143619770(param_1);
          break;
        case 0xa5:
          FUN_143619740(param_1);
          break;
        case 0xa6:
          FUN_143619b80(param_1);
          break;
        case 0xa7:
          FUN_14361a040(param_1);
          break;
        case 0xa8:
          FUN_1436178d0(param_1);
          break;
        case 0xa9:
          FUN_143617940(param_1);
          break;
        case 0xaa:
          FUN_143617970(param_1);
          break;
        case 0xab:
          cVar21 = FUN_143617d30(param_1);
          goto LAB_1435ca0b3;
        case 0xac:
          FUN_143619cf0(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0xad:
          cVar21 = FUN_143619620(param_1);
          goto LAB_1435ca0b3;
        case 0xae:
          cVar21 = FUN_143619500(param_1);
          goto LAB_1435ca0b3;
        case 0xaf:
          cVar21 = FUN_1436183f0(param_1);
          goto LAB_1435ca0b3;
        case 0xb0:
          cVar21 = FUN_1436182d0(param_1);
LAB_1435ca0b3:
          if (cVar21 != '\0') {
            cVar21 = *(char *)(param_1 + 0xb8);
            goto LAB_1435c9132;
          }
          goto switchD_1435c90b3_caseD_2;
        case 0xb1:
          FUN_1435c70a0(param_1);
          break;
        case 0xb2:
          uVar11 = *(undefined8 *)(param_1 + 0x58);
          uVar22 = FUN_1435c8c20(param_1,uVar11);
          FUN_1434f05f0(uVar11,uVar22);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0xb3:
          FUN_1436192d0(param_1);
          break;
        case 0xb4:
          FUN_1435c7350(param_1);
          break;
        case 0xb5:
          FUN_143617e20(param_1,*(undefined8 *)puVar29);
          puVar29 = puVar30 + 4;
          goto switchD_1435c90b3_caseD_2;
        case 0xb6:
          uVar11 = *(undefined8 *)puVar29;
          puVar29 = puVar30 + 4;
          FUN_143617fa0(param_1,uVar11);
          break;
        case 0xb7:
          uVar11 = *(undefined8 *)puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c75e0(param_1,uVar11);
          break;
        case 0xb8:
          uVar11 = *(undefined8 *)puVar29;
          puVar29 = puVar30 + 4;
          FUN_1435c76f0(param_1,uVar11);
          break;
        case 0xb9:
          puVar31 = puVar30 + 8;
          FUN_1435c1b90(param_1,*(undefined8 *)(lVar34 + 0x28),*puVar29,*(undefined8 *)(puVar30 + 4)
                        ,*(undefined8 *)(puVar30 + 6));
          goto LAB_1435c9798;
        case 0xba:
          puVar31 = puVar30 + 6;
          FUN_1435c1ce0(param_1,*puVar29);
          goto LAB_1435c9798;
        case 0xbb:
          puVar31 = puVar30 + 6;
          FUN_1435c1f30(param_1,*(undefined8 *)(lVar34 + 0x28),*puVar29,*(undefined8 *)(puVar30 + 4)
                       );
          goto LAB_1435c9798;
        case 0xc0:
          FUN_143619290(param_1);
          break;
        case 0xc1:
          FUN_143617c00(param_1);
          break;
        case 0xc2:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_143619160(param_1,uVar32);
          break;
        case 0xc3:
          uVar32 = *puVar29;
          puVar29 = puVar30 + 4;
          FUN_143617ad0(param_1,uVar32);
          break;
        case 0xc4:
          FUN_1436199f0(param_1);
          break;
        case 0xc5:
          FUN_1436178a0(param_1);
          break;
        case 0xc6:
          FUN_143619f70(param_1);
          break;
        case 199:
          FUN_143619970(param_1);
          break;
        case 0xce:
          puVar31 = puVar30 + 4;
          FUN_1435c1460(param_1,*puVar29);
LAB_1435c9798:
          if (*(char *)(param_1 + 0xb8) != '\0') {
            lVar28 = **(longlong **)(lVar34 + 0x10);
            iVar23 = FUN_1435cd480(param_1,((longlong)puVar31 - lVar28 >> 3) + -1);
            param_2 = local_res10;
            if (iVar23 < 0) goto LAB_1435ca3cd;
            puVar31 = (uint *)(lVar28 + (longlong)iVar23 * 8);
          }
          lVar28 = *(longlong *)(param_1 + 0x108);
joined_r0x0001435c98ea:
          puVar29 = puVar31;
          if (lVar33 != lVar28) {
            local_res10 = local_res10 + 1;
            *(uint **)(*(longlong *)(*(longlong *)(param_1 + 0x120) + (lVar33 - 1U >> 6) * 8) + 8 +
                      (ulonglong)((uint)(lVar33 - 1U) & 0x3f) * 0xa0) = puVar31;
            goto LAB_1435ca412;
          }
          goto switchD_1435c90b3_caseD_2;
        case 0xd0:
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          if (*plVar1 != 0) {
            FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78));
          }
          goto switchD_1435c90b3_caseD_2;
        case 0xd1:
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          if (*plVar1 != 0) {
            FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),*(longlong *)(param_1 + 0x78) + 0x20);
          }
          goto switchD_1435c90b3_caseD_2;
        case 0xd2:
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          if (*plVar1 != 0) {
            FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),*(longlong *)(param_1 + 0x78) + 0x40);
          }
          goto switchD_1435c90b3_caseD_2;
        case 0xd3:
          plVar1 = (longlong *)(param_1 + 0x58);
          *plVar1 = *plVar1 + 0x20;
          if (*plVar1 != 0) {
            FUN_14360ab50(*(undefined8 *)(param_1 + 0x58),*(longlong *)(param_1 + 0x78) + 0x60);
          }
          goto switchD_1435c90b3_caseD_2;
        case 0xd5:
          FUN_143619c00(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0xd6:
          FUN_143619c50(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0xd7:
          FUN_143619ca0(param_1);
          goto switchD_1435c90b3_caseD_2;
        case 0xef:
          FUN_1435ba8a0(lVar6,&local_120,(longlong)(int)*puVar29);
          piVar2 = (int *)(local_120 + 0x18);
          *piVar2 = *piVar2 + -1;
          puVar29 = puVar30 + 6;
          if (*piVar2 == 0) {
            FUN_14335f920();
          }
          goto switchD_1435c90b3_caseD_2;
        }
        cVar21 = *(char *)(param_1 + 0xb8);
LAB_1435c9132:
      } while (cVar21 == '\0');
      lVar28 = **(longlong **)(lVar34 + 0x10);
      iVar23 = FUN_1435cd480(param_1,((longlong)puVar29 - lVar28 >> 3) + -1);
      param_2 = local_res10;
    }
LAB_1435ca3cd:
    if (*(longlong *)(param_1 + 0x108) != 0) {
      uVar27 = *(longlong *)(param_1 + 0x108) - 1;
      FUN_1435bcd30((ulonglong)((uint)uVar27 & 0x3f) * 0xa0 +
                    *(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar27 >> 6) * 8));
      *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + -1;
    }
    local_res10 = param_2 + -1;
    if (local_res10 == 0) {
      return 0;
    }
LAB_1435ca412:
    lVar33 = *(longlong *)(param_1 + 0x108);
    param_2 = local_res10;
  } while( true );
}



// FUNCTION 1435ca830 FUN_1435ca830 body=40 status=ok
// SIG undefined FUN_1435ca830(void)

undefined8 FUN_1435ca830(longlong param_1,undefined8 param_2)

{
  FUN_1436116c0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0xd8));
  return param_2;
}



// FUNCTION 1435ca860 FUN_1435ca860 body=40 status=ok
// SIG undefined FUN_1435ca860(void)

undefined8 FUN_1435ca860(longlong param_1,undefined8 param_2)

{
  FUN_143611460(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x248) + 0xd8));
  return param_2;
}



// FUNCTION 1435ca890 FUN_1435ca890 body=40 status=ok
// SIG undefined FUN_1435ca890(void)

undefined8 FUN_1435ca890(longlong param_1,undefined8 param_2)

{
  FUN_1436114f0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x2e8) + 0xd8));
  return param_2;
}



// FUNCTION 1435ca8c0 FUN_1435ca8c0 body=63 status=ok
// SIG undefined FUN_1435ca8c0(void)

undefined8 * FUN_1435ca8c0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_1436113d0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0xd8));
  FUN_143614080(*param_2,param_3);
  return param_2;
}



// FUNCTION 1435ca910 FUN_1435ca910 body=267 status=ok
// SIG undefined FUN_1435ca910(void)

longlong * FUN_1435ca910(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  
  switch(*param_2 & 0x1f) {
  case 0:
    return *(longlong **)(param_1 + 0x298);
  case 1:
    return *(longlong **)(param_1 + 0x220);
  case 2:
    return *(longlong **)(param_1 + 0x230);
  case 3:
    return *(longlong **)(param_1 + 0x238);
  case 4:
    return *(longlong **)(param_1 + 0x228);
  case 5:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
    return *(longlong **)(param_1 + 0x218);
  case 9:
    return *(longlong **)(param_2 + 4);
  case 10:
    if (*(longlong *)(param_2 + 4) != 0) {
      return *(longlong **)(param_1 + 0x240);
    }
    return *(longlong **)(param_1 + 0x208);
  case 0xb:
    return *(longlong **)(param_1 + 0x210);
  }
  if (*(longlong *)(param_2 + 4) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 4) + 0x28);
    if ((*(byte *)(plVar1 + 0x11) >> 5 & 1) != 0) {
      return plVar1;
    }
    if (plVar1[0x15] == 0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    return *(longlong **)(plVar1[0x15] + 0x28);
  }
  return *(longlong **)(param_1 + 0x208);
}



// FUNCTION 1435caa60 FUN_1435caa60 body=246 status=ok
// SIG undefined FUN_1435caa60(void)

longlong FUN_1435caa60(longlong param_1,uint *param_2)

{
  longlong lVar1;
  
  switch(*param_2 & 0x1f) {
  case 1:
    return *(longlong *)(*(longlong *)(param_1 + 0x220) + 0xd8);
  case 2:
    return *(longlong *)(*(longlong *)(param_1 + 0x230) + 0xd8);
  case 3:
    return *(longlong *)(*(longlong *)(param_1 + 0x238) + 0xd8);
  case 4:
    return *(longlong *)(*(longlong *)(param_1 + 0x228) + 0xd8);
  case 5:
  case 0xd:
    return *(longlong *)(*(longlong *)(param_1 + 0x218) + 0xe0);
  case 6:
  case 7:
  case 0xe:
    return *(longlong *)(*(longlong *)(param_1 + 0x218) + 0xf8);
  case 8:
    return *(longlong *)(param_2 + 4);
  case 9:
    if (*(longlong *)(*(longlong *)(param_2 + 4) + 0xd8) != 0) {
      return *(longlong *)(*(longlong *)(param_2 + 4) + 0xd8);
    }
  default:
    lVar1 = *(longlong *)(param_1 + 0x298);
    break;
  case 10:
    if (*(longlong *)(param_2 + 4) != 0) {
      return *(longlong *)(*(longlong *)(param_1 + 0x240) + 0xd8);
    }
LAB_1435caad9:
    return *(longlong *)(*(longlong *)(param_1 + 0x208) + 0xd8);
  case 0xb:
    return *(longlong *)(*(longlong *)(param_1 + 0x210) + 0xd8);
  case 0xc:
    if (*(longlong *)(param_2 + 4) == 0) goto LAB_1435caad9;
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x28);
    if ((*(byte *)(lVar1 + 0x88) >> 5 & 1) == 0) {
      return lVar1;
    }
  }
  return *(longlong *)(lVar1 + 0xd8);
}



// FUNCTION 1435caba0 FUN_1435caba0 body=358 status=ok
// SIG undefined FUN_1435caba0(void)

undefined8 FUN_1435caba0(longlong param_1,uint *param_2)

{
  char cVar1;
  
  switch(*param_2 & 0x1f) {
  case 1:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x220) + 0xd8);
  case 2:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x230) + 0xd8);
  case 3:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0xd8);
  case 4:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x228) + 0xd8);
  case 5:
  case 0xd:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0xe0);
  case 6:
  case 7:
  case 0xe:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0xf8);
  case 8:
  case 9:
    return *(undefined8 *)(param_2 + 4);
  case 10:
    if (*(longlong *)(param_2 + 4) != 0) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x240) + 0xd8);
    }
    break;
  case 0xb:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8);
  case 0xc:
    cVar1 = FUN_14353ffc0(param_2);
    if (cVar1 == '\0') {
      return *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28);
    }
    break;
  default:
    return *(undefined8 *)(*(longlong *)(param_1 + 0x298) + 0xd8);
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x208) + 0xd8);
}



// FUNCTION 1435cad50 FUN_1435cad50 body=58 status=ok
// SIG undefined FUN_1435cad50(void)

longlong * FUN_1435cad50(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x218);
  *param_2 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  FUN_1435911f0(param_3,local_res8,param_2);
  return param_2;
}



// FUNCTION 1435cad90 FUN_1435cad90 body=66 status=ok
// SIG undefined FUN_1435cad90(void)

void FUN_1435cad90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1435cade0 FUN_1435cade0 body=139 status=ok
// SIG undefined FUN_1435cade0(void)

void FUN_1435cade0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  uVar4 = *(longlong *)(param_1 + 0x108) - 1;
  puVar3 = (ulonglong *)
           (*(ulonglong *)
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar4 >> 6) * 8) + 0x18 +
                 (ulonglong)((uint)uVar4 & 0x3f) * 0xa0) + 0xa0) + 0x18) & 0xfffffffffffffffc);
  lVar2 = FUN_143360a90(*(undefined8 *)(*param_2 + 8),(longlong)puVar3 + 0xc,
                        *puVar3 & 0x7fffffffffffffff);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1435cae80 FUN_1435cae80 body=17 status=ok
// SIG undefined FUN_1435cae80(void)

longlong * FUN_1435cae80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = **(longlong **)(param_1 + 0x10);
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_2;
}



// FUNCTION 1435caea0 FUN_1435caea0 body=52 status=ok
// SIG undefined FUN_1435caea0(void)

longlong FUN_1435caea0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435caf00 FUN_1435caf00 body=52 status=ok
// SIG undefined FUN_1435caf00(void)

longlong FUN_1435caf00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x228) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435caf60 FUN_1435caf60 body=52 status=ok
// SIG undefined FUN_1435caf60(void)

longlong FUN_1435caf60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x230) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cafc0 FUN_1435cafc0 body=52 status=ok
// SIG undefined FUN_1435cafc0(void)

longlong FUN_1435cafc0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x238) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb020 FUN_1435cb020 body=52 status=ok
// SIG undefined FUN_1435cb020(void)

longlong FUN_1435cb020(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x240) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb080 FUN_1435cb080 body=52 status=ok
// SIG undefined FUN_1435cb080(void)

longlong FUN_1435cb080(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x248) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb0e0 FUN_1435cb0e0 body=52 status=ok
// SIG undefined FUN_1435cb0e0(void)

longlong FUN_1435cb0e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2e8) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb140 FUN_1435cb140 body=52 status=ok
// SIG undefined FUN_1435cb140(void)

longlong FUN_1435cb140(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb180 FUN_1435cb180 body=52 status=ok
// SIG undefined FUN_1435cb180(void)

longlong FUN_1435cb180(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x260) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb1c0 FUN_1435cb1c0 body=52 status=ok
// SIG undefined FUN_1435cb1c0(void)

longlong FUN_1435cb1c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x268) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb220 FUN_1435cb220 body=52 status=ok
// SIG undefined FUN_1435cb220(void)

longlong FUN_1435cb220(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb280 FUN_1435cb280 body=52 status=ok
// SIG undefined FUN_1435cb280(void)

longlong FUN_1435cb280(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x278) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb2e0 FUN_1435cb2e0 body=52 status=ok
// SIG undefined FUN_1435cb2e0(void)

longlong FUN_1435cb2e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x280) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb320 FUN_1435cb320 body=15 status=ok
// SIG undefined FUN_1435cb320(void)

undefined8 FUN_1435cb320(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0xd8);
}



// FUNCTION 1435cb340 FUN_1435cb340 body=15 status=ok
// SIG undefined FUN_1435cb340(void)

undefined8 FUN_1435cb340(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0xd8);
}



// FUNCTION 1435cb380 FUN_1435cb380 body=52 status=ok
// SIG undefined FUN_1435cb380(void)

longlong FUN_1435cb380(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x298) + 0xd8);
  if (plVar1[0x15] == 0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  return plVar1[0x15];
}



// FUNCTION 1435cb580 FUN_1435cb580 body=202 status=ok
// SIG undefined FUN_1435cb580(void)

undefined4 * FUN_1435cb580(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_3 + 0x90);
  if (iVar1 == 1) {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    return param_2;
  }
  if (iVar1 == 2) {
    *param_2 = 2;
    *(undefined8 *)(param_2 + 2) = 0;
    param_2[4] = 0;
    return param_2;
  }
  if (iVar1 == 3) {
    *param_2 = 3;
    *(undefined8 *)(param_2 + 2) = 0;
    param_2[4] = 0;
    return param_2;
  }
  if (iVar1 != 4) {
    if (param_3 == *(longlong *)(param_1 + 0x200)) {
      uVar2 = FUN_143590540();
      FUN_14360ab50(param_2,uVar2);
      return param_2;
    }
    uVar2 = FUN_1435905b0();
    FUN_14360ab50(param_2,uVar2);
    return param_2;
  }
  uVar2 = Scaleform::GFx::NumberUtil::NaN();
  *param_2 = 4;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = uVar2;
  return param_2;
}



// FUNCTION 1435cb650 FUN_1435cb650 body=113 status=ok
// SIG undefined FUN_1435cb650(void)

undefined8 FUN_1435cb650(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((param_4[3] != 0) || (param_4[2] != 0)) || (*param_4 != 0)) {
    lVar1 = FUN_1435c84e0(param_1,param_3,param_4);
    if (lVar1 != 0) {
      FUN_1435cb580(param_1,param_2,lVar1);
      return param_2;
    }
  }
  uVar2 = FUN_143590540();
  FUN_14360ab50(param_2,uVar2);
  return param_2;
}



// FUNCTION 1435cb6d0 FUN_1435cb6d0 body=222 status=ok
// SIG undefined FUN_1435cb6d0(void)

undefined8 FUN_1435cb6d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_38 [8];
  ulonglong local_30;
  uint local_28 [2];
  int *local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  uVar3 = 0;
  if (**(longlong **)(param_2 + 8) != 0) {
    FUN_1435ae9b0(local_38,param_1);
    cVar1 = Scaleform::GFx::AS3::Multiname::IsAnyType(local_38);
    if (cVar1 == '\0') {
      lVar2 = FUN_1435c82a0(param_1,local_38,*(undefined8 *)(param_1 + 0x1c8));
      if (lVar2 != 0) {
        uVar3 = *(undefined8 *)(lVar2 + 0xd8);
      }
    }
    if (9 < ((byte)local_28[0] & 0x1f)) {
      if ((local_28[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_28);
      }
      else {
        *local_20 = *local_20 + -1;
        if (*local_20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_28[0] = local_28[0] & 0xfffffde0;
        local_20 = (int *)0x0;
        uStack_18 = 0;
        local_10 = 0;
      }
    }
    if (((local_30 != 0) && ((local_30 & 1) == 0)) && ((*(uint *)(local_30 + 8) & 0x3fffff) != 0)) {
      *(uint *)(local_30 + 8) = *(uint *)(local_30 + 8) - 1;
      FUN_1434ef880();
    }
  }
  return uVar3;
}



// FUNCTION 1435cb7c0 FUN_1435cb7c0 body=396 status=ok
// SIG undefined FUN_1435cb7c0(void)

undefined8 FUN_1435cb7c0(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  uVar7 = 0;
  switch(*param_2 & 0x1f) {
  case 5:
  case 0xd:
switchD_1435cb7f8_caseD_5:
    uVar7 = FUN_1435cb6d0(param_1,*(undefined8 *)(param_2 + 4));
    return uVar7;
  case 6:
    if ((*param_2 & 0x1f) != 6) goto switchD_1435cb7f8_caseD_5;
    uVar1 = param_2[4];
    uVar5 = (**(code **)(**(longlong **)(param_2 + 6) + 0x38))();
    pcVar6 = (char *)FUN_1435bcc10(local_res10,uVar5,uVar1,&local_res18);
    if (*pcVar6 == '\0') {
      return 0;
    }
    break;
  case 7:
  case 0xe:
    lVar4 = FUN_1434ef190(*(undefined8 *)(param_2 + 6));
    puVar8 = (undefined4 *)((ulonglong)param_2[4] * 0x20 + *(longlong *)(lVar4 + 8));
    if (((byte)*puVar8 & 0x1f) != 6) {
      uVar7 = FUN_1435cb6d0(param_1,*(undefined8 *)(puVar8 + 4));
      return uVar7;
    }
    uVar2 = puVar8[4];
    uVar5 = (**(code **)(**(longlong **)(puVar8 + 6) + 0x38))();
    pcVar6 = (char *)FUN_1435bcc10(local_res10,uVar5,uVar2,&local_res18);
    if (*pcVar6 == '\0') {
      return 0;
    }
    break;
  default:
    goto switchD_1435cb7f8_caseD_8;
  case 0xc:
    plVar3 = *(longlong **)(param_2 + 4);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    lVar4 = plVar3[5];
    if ((*(byte *)(lVar4 + 0x88) >> 5 & 1) != 0) {
      return *(undefined8 *)(lVar4 + 0xd8);
    }
    if (*(int *)(lVar4 + 0x90) == 10) {
      uVar7 = (**(code **)(*plVar3 + 200))();
      return uVar7;
    }
    local_res18 = *(longlong *)(param_1 + 0x208);
    goto LAB_1435cb85c;
  }
  if (local_res18 != 0) {
LAB_1435cb85c:
    uVar7 = *(undefined8 *)(local_res18 + 0xd8);
  }
switchD_1435cb7f8_caseD_8:
  return uVar7;
}



// FUNCTION 1435cb980 FUN_1435cb980 body=319 status=ok
// SIG undefined FUN_1435cb980(void)

undefined8 FUN_1435cb980(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28 [2];
  int *local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (((byte)*param_2 & 0x78) != 0x48) {
    return *(undefined8 *)(param_2 + 2);
  }
  uVar5 = *(ulonglong *)(param_2 + 4);
  local_28[0] = 0;
  uVar2 = (uint)uVar5 & 2;
  local_20 = (int *)0x0;
  uVar4 = uVar5 - uVar2;
  if ((uVar5 & 2) == 0) {
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    local_28[0] = 0xc;
    uStack_10 = uStack_30;
    uStack_c = uStack_2c;
    local_18 = uVar4;
  }
  else {
    local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
    if (uVar2 == 2) {
      FUN_1434ae820(local_28,uVar4);
      local_18 = CONCAT44(local_18._4_4_,(undefined4)local_18);
    }
  }
  uVar3 = FUN_1435cb7c0(param_1,local_28);
  uVar2 = local_28[0] & 0x1f;
  if (9 < uVar2) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar2 == 10) {
        piVar1 = (int *)(local_18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        uVar5 = local_18;
        if ((uVar2 != 0xb) && (uVar2 != 0xc)) {
          if (1 < uVar2 - 0xd) {
            return uVar3;
          }
          uVar5 = CONCAT44(uStack_c,uStack_10);
        }
        if ((((uVar5 & 1) == 0) && (uVar5 != 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880();
          return uVar3;
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return uVar3;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1435cbad0 FUN_1435cbad0 body=724 status=ok
// SIG undefined FUN_1435cbad0(void)

void FUN_1435cbad0(longlong param_1,uint *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 local_res8 [2];
  undefined8 *local_res18 [2];
  uint local_98 [2];
  int *local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58 [2];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res8[0] = 0;
  lVar8 = *(longlong *)(param_1 + 0x10);
  local_98[0] = 0;
  local_90 = (int *)0x0;
  lVar2 = *(longlong *)(lVar8 + 0x218);
  local_res18[0] = (undefined8 *)(lVar2 + 0x48);
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  uVar6 = FUN_1435c8090(param_1,&DAT_145b152e8);
  uVar7 = FUN_1435ca910(param_1,param_2);
  cVar4 = FUN_1435b5020(uVar6,uVar7);
  if (cVar4 == '\0') {
    pcVar9 = (char *)FUN_1435911f0(param_2,local_res8,local_res18);
    if (*pcVar9 == '\0') goto LAB_1435cbcfe;
    FUN_143360130(local_res18,&DAT_145af0af0,1);
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x10);
    *(int *)(puVar3 + 3) = *(int *)(puVar3 + 3) + 1;
    piVar1 = (int *)(local_res18[0] + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    lVar8 = FUN_143360950(*(undefined8 *)(lVar8 + 0x218),"getStackTrace",0xd,0);
    local_78 = 10;
    uStack_70 = 0;
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 2;
    local_50 = *(longlong *)(param_1 + 0x1d8);
    local_58[0] = 0;
    if (local_50 != 0) {
      *(uint *)(local_50 + 8) = *(int *)(local_50 + 8) + 1U & 0x8fffffff;
    }
    local_68._0_4_ = (undefined4)lVar8;
    local_68._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    local_48 = 10;
    uStack_44 = uStack_74;
    uStack_40 = 0;
    uStack_3c = 0;
    local_38 = (undefined4)local_68;
    uStack_34 = local_68._4_4_;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    local_68 = lVar8;
    FUN_1435aef90(local_58,0);
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar8);
    }
    piVar1 = (int *)(lVar8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar8);
    }
    uVar5 = *param_2 & 0x1f;
    if (uVar5 != 0) {
      if (uVar5 == 0xc) {
        bVar10 = *(longlong *)(param_2 + 4) == 0;
LAB_1435cbbf5:
        if (bVar10) goto LAB_1435cbc3d;
      }
      else if (uVar5 == 10) {
        bVar10 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
        goto LAB_1435cbbf5;
      }
      pcVar9 = (char *)FUN_1435b29a0(local_res8,param_1,local_58,param_2,local_98,0,0);
      if ((*pcVar9 == '\0') ||
         (pcVar9 = (char *)FUN_1435911f0(local_98,local_res8,local_res18), *pcVar9 != '\0'))
      goto LAB_1435cbc3d;
LAB_1435cbc89:
      FUN_1434e6250(local_58);
      goto LAB_1435cbcfe;
    }
LAB_1435cbc3d:
    uVar5 = *param_2 & 0x1f;
    if (uVar5 == 0) {
LAB_1435cbc74:
      pcVar9 = (char *)FUN_1435911f0(param_2,local_res8,local_res18);
      if (*pcVar9 == '\0') goto LAB_1435cbc89;
    }
    else {
      if (uVar5 == 0xc) {
        bVar10 = *(longlong *)(param_2 + 4) == 0;
LAB_1435cbc63:
        if (bVar10) goto LAB_1435cbc74;
      }
      else if (uVar5 == 10) {
        bVar10 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
        goto LAB_1435cbc63;
      }
      if (*(int *)(local_res18[0] + 4) == 0) goto LAB_1435cbc74;
    }
    FUN_1434e6250(local_58);
    puVar3 = local_res18[0];
  }
  local_res18[0] = puVar3;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 8))
            (*(longlong **)(param_1 + 0x38),1,*local_res18[0]);
LAB_1435cbcfe:
  piVar1 = (int *)(local_res18[0] + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  uVar5 = local_98[0] & 0x1f;
  if (9 < uVar5) {
    if ((local_98[0] >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar1 = (int *)(local_88 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else if ((((uVar5 == 0xb) || (uVar5 == 0xc)) || (local_88 = local_80, uVar5 - 0xd < 2)) &&
              ((((local_88 & 1) == 0 && (local_88 != 0)) &&
               ((*(uint *)(local_88 + 8) & 0x3fffff) != 0)))) {
        *(uint *)(local_88 + 8) = *(uint *)(local_88 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *local_90 = *local_90 + -1;
      if (*local_90 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return;
}



// FUNCTION 1435cbdb0 FUN_1435cbdb0 body=12 status=ok
// SIG undefined FUN_1435cbdb0(void)

void FUN_1435cbdb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b152e8);
  return;
}



// FUNCTION 1435cbdd0 FUN_1435cbdd0 body=12 status=ok
// SIG undefined FUN_1435cbdd0(void)

void FUN_1435cbdd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b168d0);
  return;
}



// FUNCTION 1435cbdf0 FUN_1435cbdf0 body=12 status=ok
// SIG undefined FUN_1435cbdf0(void)

void FUN_1435cbdf0(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b16b90);
  return;
}



// FUNCTION 1435cbe10 FUN_1435cbe10 body=12 status=ok
// SIG undefined FUN_1435cbe10(void)

void FUN_1435cbe10(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b14e70);
  return;
}



// FUNCTION 1435cbe30 FUN_1435cbe30 body=12 status=ok
// SIG undefined FUN_1435cbe30(void)

void FUN_1435cbe30(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b15170);
  return;
}



// FUNCTION 1435cbe70 FUN_1435cbe70 body=12 status=ok
// SIG undefined FUN_1435cbe70(void)

void FUN_1435cbe70(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b155b0);
  return;
}



// FUNCTION 1435cbe90 FUN_1435cbe90 body=12 status=ok
// SIG undefined FUN_1435cbe90(void)

void FUN_1435cbe90(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b15880);
  return;
}



// FUNCTION 1435cbeb0 FUN_1435cbeb0 body=12 status=ok
// SIG undefined FUN_1435cbeb0(void)

void FUN_1435cbeb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b15be8);
  return;
}



// FUNCTION 1435cbef0 FUN_1435cbef0 body=12 status=ok
// SIG undefined FUN_1435cbef0(void)

void FUN_1435cbef0(undefined8 param_1,undefined8 param_2)

{
  FUN_1435ccf60(param_1,param_2,&DAT_145b15f30);
  return;
}



// FUNCTION 1435cbf30 FUN_1435cbf30 body=234 status=ok
// SIG undefined FUN_1435cbf30(void)

void FUN_1435cbf30(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) &&
      (lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x38))(), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x150), lVar3 != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0xc0);
    local_28 = *(undefined4 *)puVar1;
    local_18 = *(undefined4 *)(param_1 + 0xd0);
    uStack_14 = *(undefined4 *)(param_1 + 0xd4);
    uStack_10 = *(undefined4 *)(param_1 + 0xd8);
    uStack_c = *(undefined4 *)(param_1 + 0xdc);
    uStack_20 = *(undefined8 *)(param_1 + 200);
    *(undefined4 *)puVar1 = 0;
    uVar2 = *(undefined1 *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    uVar5 = *(ulonglong *)(lVar3 + 0x10 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
    if (uVar5 == 0) {
      uVar5 = *(ulonglong *)(lVar3 + 8 + (ulonglong)*(byte *)(lVar3 + 0x6d) * 4);
    }
    if ((uVar5 & 1) != 0) {
      uVar5 = uVar5 - 1;
    }
    lVar4 = FUN_1434f24f0(uVar5);
    FUN_14352a550(*(undefined8 *)(lVar4 + 0xa0),lVar3,lVar4,&local_28);
    FUN_1435168c0(puVar1);
    *(undefined1 *)(param_1 + 0xb8) = uVar2;
    *puVar1 = CONCAT44(uStack_24,local_28);
    *(undefined8 *)(param_1 + 200) = uStack_20;
    *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uStack_14,local_18);
    *(ulonglong *)(param_1 + 0xd8) = CONCAT44(uStack_c,uStack_10);
  }
  return;
}



// FUNCTION 1435cc020 FUN_1435cc020 body=175 status=ok
// SIG undefined FUN_1435cc020(void)

void FUN_1435cc020(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  
  FUN_1435cbf30();
  puVar1 = (uint *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_1435cbad0(param_1,puVar1);
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (9 < ((byte)*puVar1 & 0x1f)) {
    if ((*puVar1 >> 9 & 1) != 0) {
      piVar2 = *(int **)(param_1 + 200);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      *puVar1 = *puVar1 & 0xfffffde0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      goto LAB_1435cc0b8;
    }
    FUN_1435920c0(puVar1);
  }
  *puVar1 = *puVar1 & 0xffffffe0;
LAB_1435cc0b8:
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 1435cc0e0 FUN_1435cc0e0 body=47 status=ok
// SIG undefined FUN_1435cc0e0(void)

undefined8 FUN_1435cc0e0(longlong param_1,undefined8 param_2)

{
  FUN_143611620(*(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8));
  return param_2;
}



// FUNCTION 1435cc120 FUN_1435cc120 body=116 status=ok
// SIG undefined FUN_1435cc120(void)

undefined8 FUN_1435cc120(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong local_res8;
  
  puVar2 = &DAT_145af3922;
  if (param_4 != (undefined1 *)0x0) {
    puVar2 = param_4;
  }
  local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),puVar2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435cc220(param_1,param_2,param_3,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435cc1a0 FUN_1435cc1a0 body=109 status=ok
// SIG undefined FUN_1435cc1a0(void)

undefined8 FUN_1435cc1a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong local_res8;
  
  local_res8 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),*param_4,
                             param_4[1]);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_1435cc220(param_1,param_2,param_3,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1435cc220 FUN_1435cc220 body=335 status=ok
// SIG undefined FUN_1435cc220(void)

longlong * FUN_1435cc220(longlong param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  
  if (param_3 == 0) {
    if (*(int *)((undefined8 *)*param_4 + 4) == 0) {
      lVar7 = *(longlong *)(param_1 + 0x1d8);
      *param_2 = lVar7;
    }
    else {
      pcVar4 = *(char **)*param_4;
      pcVar6 = pcVar4;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[(longlong)PTR_s_http___adobe_com_AS3_2006_builti_1467d9780 - (longlong)pcVar4
                      ];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        lVar7 = *(longlong *)(param_1 + 0x1e0);
        *param_2 = lVar7;
      }
      else {
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          cVar2 = pcVar6[(longlong)PTR_s___AS3___vec_1467d9790 - (longlong)pcVar4];
          if (cVar1 != cVar2) break;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          lVar7 = *(longlong *)(param_1 + 0x1e8);
          *param_2 = lVar7;
        }
        else {
          lVar7 = (longlong)PTR_s_http___www_w3_org_XML_1998_names_1467d9798 - (longlong)pcVar4;
          do {
            cVar1 = *pcVar4;
            cVar2 = pcVar4[lVar7];
            if (cVar1 != cVar2) break;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
          if (cVar1 != cVar2) goto LAB_1435cc329;
          lVar7 = *(longlong *)(param_1 + 0x1f8);
          *param_2 = lVar7;
        }
      }
    }
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
      return param_2;
    }
  }
  else {
LAB_1435cc329:
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8);
    uVar5 = FUN_143590540();
    FUN_1434b2d90(uVar3,param_2,param_3,param_4,uVar5);
  }
  return param_2;
}



// FUNCTION 1435cc380 FUN_1435cc380 body=147 status=ok
// SIG undefined FUN_1435cc380(void)

undefined8 FUN_1435cc380(longlong param_1,int param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong local_res8;
  
  puVar4 = &DAT_145af3922;
  if (param_3 != (undefined1 *)0x0) {
    puVar4 = param_3;
  }
  local_res8 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),puVar4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if ((*(int *)(local_res8 + 0x20) == 0) && (param_2 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8);
    uVar2 = FUN_143590540();
    uVar3 = FUN_1434b2dc0(uVar3,param_2,&local_res8,uVar2);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar3;
}



// FUNCTION 1435cc420 FUN_1435cc420 body=101 status=ok
// SIG undefined FUN_1435cc420(void)

undefined8 FUN_1435cc420(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*param_3 + 0x20) == 0) && (param_2 == 0)) {
    return *(undefined8 *)(param_1 + 0x1d8);
  }
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8);
  uVar1 = FUN_143590540();
  uVar2 = FUN_1434b2dc0(uVar2,param_2,param_3,uVar1);
  return uVar2;
}



// FUNCTION 1435cc490 FUN_1435cc490 body=143 status=ok
// SIG undefined FUN_1435cc490(void)

undefined8 FUN_1435cc490(longlong param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  
  local_res8 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),*param_3,
                             param_3[1]);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  if ((*(int *)(local_res8 + 0x20) == 0) && (param_2 == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8);
    uVar2 = FUN_143590540();
    uVar3 = FUN_1434b2dc0(uVar3,param_2,&local_res8,uVar2);
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return uVar3;
}



// FUNCTION 1435cc580 FUN_1435cc580 body=634 status=ok
// SIG undefined FUN_1435cc580(void)

longlong FUN_1435cc580(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  char *_Str1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_48;
  longlong local_40;
  uint local_38 [2];
  int *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  lVar5 = 0;
  if (param_2[1] != 0) {
    uVar8 = param_2[1];
    if (DAT_1467d9b20 < uVar8) {
      _Str1 = (char *)*param_2;
      uVar4 = uVar8 - DAT_1467d9b20;
      if (uVar8 < uVar8 - DAT_1467d9b20) {
        uVar4 = uVar8;
      }
      if ((DAT_1467d9b20 == uVar8 - uVar4) &&
         ((PTR_s_Vector_<_1467d9b18 == _Str1 ||
          (((_Str1 != (char *)0x0 && (PTR_s_Vector_<_1467d9b18 != (undefined *)0x0)) &&
           (iVar2 = strncmp(_Str1,PTR_s_Vector_<_1467d9b18,uVar8 - uVar4), iVar2 == 0)))))) {
        lVar5 = FUN_1432c6260(param_2,0x3e,0xffffffffffffffff);
        if (lVar5 < 1) {
          return 0;
        }
        uVar8 = param_2[1];
        uVar4 = DAT_1467d9b20;
        if (uVar8 < DAT_1467d9b20) {
          uVar4 = uVar8;
        }
        uVar7 = uVar8 - uVar4;
        local_48 = *param_2 + uVar4;
        uVar4 = uVar8 - lVar5;
        if (uVar7 < uVar8 - lVar5) {
          uVar4 = uVar7;
        }
        local_40 = uVar7 - uVar4;
        local_28 = FUN_1435cc580(param_1,&local_48,param_3);
        if (local_28 == 0) {
          return 0;
        }
        local_38[0] = 0xc;
        local_30 = (int *)0x0;
        *(uint *)(local_28 + 8) = *(int *)(local_28 + 8) + 1U & 0x8fffffff;
        plVar6 = (longlong *)FUN_1435cb180(param_1);
        lVar5 = (**(code **)(*plVar6 + 0xc0))(plVar6,1,local_38);
        lVar5 = FUN_143610320(*(undefined8 *)(lVar5 + 0xd8));
        if (*(char *)(param_1 + 0xb8) != '\0') {
          FUN_1435cbf30(param_1);
        }
        uVar3 = local_38[0] & 0x1f;
        if (uVar3 < 10) {
          return lVar5;
        }
        if ((local_38[0] >> 9 & 1) != 0) {
          *local_30 = *local_30 + -1;
          if (*local_30 != 0) {
            return lVar5;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return lVar5;
        }
        if (uVar3 == 10) {
          piVar1 = (int *)(local_28 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 != 0) {
            return lVar5;
          }
          FUN_14335f920();
          return lVar5;
        }
        uVar8 = local_28;
        if (((uVar3 != 0xb) && (uVar3 != 0xc)) && (uVar8 = local_20, 1 < uVar3 - 0xd)) {
          return lVar5;
        }
        if ((uVar8 & 1) != 0) {
          return lVar5;
        }
        if (uVar8 == 0) {
          return lVar5;
        }
        if ((*(uint *)(uVar8 + 8) & 0x3fffff) == 0) {
          return lVar5;
        }
        *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) - 1;
        FUN_1434ef880();
        return lVar5;
      }
    }
    FUN_1435ae830(local_38,param_1,param_2);
    plVar6 = (longlong *)FUN_1435c82a0(param_1,local_38,param_3);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x50))(plVar6);
      plVar6 = (longlong *)plVar6[0x1b];
      if (plVar6[0x15] == 0) {
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      if (*(char *)(param_1 + 0xb8) == '\0') {
        lVar5 = plVar6[0x15];
      }
      else {
        FUN_1435cbf30(param_1);
      }
    }
    FUN_1434e6250(local_38);
  }
  return lVar5;
}



// FUNCTION 1435cc800 FUN_1435cc800 body=147 status=ok
// SIG undefined FUN_1435cc800(void)

undefined1 FUN_1435cc800(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_18 [8];
  longlong lStack_10;
  
  lVar3 = FUN_1435cc580();
  if (lVar3 != 0) {
    *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
    *param_4 = *param_4 & 0xffffffec;
    *param_4 = *param_4 | 0xc;
    *(longlong *)(param_4 + 4) = lVar3;
    *(longlong *)(param_4 + 6) = lStack_10;
    return 1;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar2 = FUN_1435c8e40(local_18,0x429,param_1);
    FUN_1435ccf60(param_1,uVar2,&DAT_145b14e70);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return 0;
}



// FUNCTION 1435cc8a0 FUN_1435cc8a0 body=628 status=ok
// SIG undefined FUN_1435cc8a0(void)

undefined1 *
FUN_1435cc8a0(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4,
             undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  longlong local_res8;
  longlong local_res10;
  longlong local_res20;
  longlong local_48;
  ulonglong local_40;
  longlong *local_38;
  longlong *local_30;
  
  lVar6 = *(longlong *)(param_1 + 0x1c8);
  puVar7 = &DAT_145af3922;
  if (*(undefined1 **)(param_4 + 0x18) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_4 + 0x18);
  }
  local_res10 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),puVar7);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  if (*(int *)(local_res10 + 0x20) == 0) {
    uVar4 = *(ulonglong *)(param_1 + 0x1d8);
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8);
    uVar3 = FUN_143590540();
    uVar4 = FUN_1434b2dc0(uVar2,0,&local_res10,uVar3);
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (*(char *)(*(longlong *)(param_4 + 0x10) + lVar8) != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),
                             *(longlong *)(param_4 + 0x10),lVar8,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  lVar8 = *(longlong *)(lVar6 + 0x28);
  if (lVar8 == 0) {
LAB_1435cc98d:
    plVar5 = (longlong *)FUN_143610010(lVar6 + 0x30,&local_res8,uVar4);
    if (plVar5 != (longlong *)0x0) goto LAB_1435cc9a3;
  }
  else {
    plVar5 = (longlong *)FUN_1435be2b0(lVar8,&local_res8,uVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_1435cc98d;
LAB_1435cc9a3:
    lVar6 = *plVar5;
    if (lVar6 != 0) goto LAB_1435cca9f;
  }
  lVar6 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),&local_res8,uVar4);
  if (lVar6 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x1c8);
    local_48 = local_res8;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
    }
    local_38 = &local_48;
    local_30 = &local_res20;
    local_res20 = lVar6;
    local_40 = uVar4;
    FUN_1434e5270(lVar8 + 0x30,*(undefined8 *)(lVar8 + 0x38),&local_38,
                  (uint)((*(longlong *)(uVar4 + 0x28) << 0x3c) >> 0x3c) ^
                  (*(uint *)(*(longlong *)(uVar4 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                  *(uint *)(local_res8 + 0x1c) & 0xffffff);
    if (local_40 != 0) {
      if ((local_40 & 1) == 0) {
        if ((*(uint *)(local_40 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_40 + 8) = *(uint *)(local_40 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_40 = local_40 - 1;
      }
    }
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1435cca9f:
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (lVar6 != 0) {
    plVar5 = *(longlong **)(lVar6 + 0xd8);
    (**(code **)(*plVar5 + 0x58))(plVar5,param_3,plVar5);
    (**(code **)(**(longlong **)(param_3 + 0x10) + 0x60))
              (*(longlong **)(param_3 + 0x10),param_5,param_6);
    *param_2 = 1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435ccb40 FUN_1435ccb40 body=490 status=ok
// SIG undefined FUN_1435ccb40(void)

/* WARNING: Removing unreachable block (ram,0x0001435ccc99) */
/* WARNING: Removing unreachable block (ram,0x0001435ccc9f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1435ccb40(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  longlong local_20;
  uint local_18;
  undefined4 uStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  uVar2 = *(ulonglong *)(param_1 + 0x108);
  uVar8 = 0;
  uVar7 = 0;
  if (param_2 == (longlong *)0x0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = -1;
    do {
      uStack_30 = uStack_30 + 1;
    } while (*(char *)((longlong)param_2 + uStack_30) != '\0');
  }
  local_38 = param_2;
  plVar3 = (longlong *)FUN_1435cc580(param_1,&local_38);
  if (plVar3 == (longlong *)0x0) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      uVar4 = FUN_1435c8e40(local_28,0x429,param_1);
      FUN_1435ccf60(param_1,uVar4,&DAT_145b14e70);
      goto LAB_1435ccc79;
    }
  }
  else {
    uVar8 = 0xc;
    uVar7 = 0xc;
    *(uint *)(plVar3 + 1) = (int)plVar3[1] + 1U & 0x8fffffff;
    local_38._0_4_ = (uint)plVar3;
    local_38._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
    local_18 = (uint)local_38;
    uStack_14 = local_38._4_4_;
    uStack_10 = (uint)uStack_30;
    uStack_c = uStack_30._4_4_;
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      uVar4 = FUN_1435c8e40(&local_38,0x3f1,param_1);
      FUN_1435ccf60(param_1,uVar4,&DAT_145b155b0);
      local_20 = uStack_30;
LAB_1435ccc79:
      piVar1 = (int *)(local_20 + 0x18);
      *piVar1 = *piVar1 + -1;
      uVar7 = uVar8;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_4,param_5,param_6,0,0);
      if (*(char *)(param_1 + 0xb8) == '\0') {
        bVar6 = uVar2 < *(ulonglong *)(param_1 + 0x108);
        goto LAB_1435ccc86;
      }
      FUN_1435cbf30(param_1);
      uVar7 = 0xc;
    }
  }
  bVar6 = false;
LAB_1435ccc86:
  if (9 < uVar7) {
    if (uVar7 == 10) {
      piVar1 = (int *)(CONCAT44(uStack_14,local_18) + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
    else {
      if ((uVar7 == 0xb) || (uVar7 == 0xc)) {
        if ((local_18 & 1) != 0) {
          return bVar6;
        }
        lVar5 = CONCAT44(uStack_14,local_18);
      }
      else {
        if (1 < uVar7 - 0xd) {
          return bVar6;
        }
        if ((uStack_10 & 1) != 0) {
          return bVar6;
        }
        lVar5 = CONCAT44(uStack_c,uStack_10);
      }
      if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) - 1;
        FUN_1434ef880();
      }
    }
  }
  return bVar6;
}



// FUNCTION 1435ccd30 FUN_1435ccd30 body=126 status=ok
// SIG undefined FUN_1435ccd30(void)

bool FUN_1435ccd30(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  ulonglong uVar1;
  undefined4 local_res20 [2];
  
  uVar1 = *(ulonglong *)(param_1 + 0x108);
  local_res20[0] = param_4;
  (**(code **)(*param_2 + 0x68))(param_2,param_3,local_res20,param_5,0,param_6);
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return false;
  }
  return uVar1 < *(ulonglong *)(param_1 + 0x108);
}



// FUNCTION 1435ccdc0 FUN_1435ccdc0 body=395 status=ok
// SIG undefined FUN_1435ccdc0(void)

undefined1 *
FUN_1435ccdc0(longlong param_1,undefined1 *param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  bool bVar6;
  uint local_28 [2];
  int *local_20;
  byte local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_28[0] = 0;
  local_20 = (int *)0x0;
  uVar5 = 0;
  FUN_1435ccb40(param_1,param_4,*(undefined8 *)(param_1 + 0x1c8),local_28,&param_5,param_6);
  uVar4 = CONCAT71(uStack_17,local_18);
  if ((*(char *)(param_1 + 0xb8) == '\0') && (uVar3 = local_28[0] & 0x1f, uVar3 != 0)) {
    if (uVar3 == 0xc) {
      bVar6 = uVar4 == 0;
LAB_1435cce4c:
      if (bVar6) goto LAB_1435cce63;
    }
    else if (uVar3 == 10) {
      bVar6 = uVar4 == *(longlong *)(uVar4 + 8) + 0x80U;
      goto LAB_1435cce4c;
    }
    FUN_1434f0700(param_3,uVar4);
    uVar5 = 1;
  }
  else {
LAB_1435cce63:
    uVar2 = *param_3;
    if (uVar2 != 0) {
      if ((uVar2 & 1) == 0) {
        if ((*(uint *)(uVar2 + 8) & 0x3fffff) != 0) {
          *(uint *)(uVar2 + 8) = *(uint *)(uVar2 + 8) - 1;
          FUN_1434ef880(uVar2);
          uVar4 = CONCAT71(uStack_17,local_18);
        }
      }
      else {
        *param_3 = uVar2 - 1;
      }
      *param_3 = 0;
    }
    if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_1435cceb2;
    FUN_1435cc020(param_1);
  }
  uVar4 = CONCAT71(uStack_17,local_18);
LAB_1435cceb2:
  uVar3 = local_28[0] & 0x1f;
  *param_2 = uVar5;
  if (9 < uVar3) {
    if ((local_28[0] >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(uVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          bVar6 = (local_18 & 1) == 0;
        }
        else {
          if (1 < uVar3 - 0xd) {
            return param_2;
          }
          bVar6 = (local_10 & 1) == 0;
          uVar4 = local_10;
        }
        if (((bVar6) && (uVar4 != 0)) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *local_20 = *local_20 + -1;
      if (*local_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return param_2;
}



// FUNCTION 1435ccf60 FUN_1435ccf60 body=1118 status=ok
// SIG undefined FUN_1435ccf60(void)

void FUN_1435ccf60(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong local_58;
  undefined4 local_48 [2];
  ulonglong local_40;
  undefined4 local_38 [2];
  ulonglong uStack_30;
  
  lVar8 = *(longlong *)(param_1 + 0x1c8);
  puVar10 = &DAT_145af3922;
  if (*(undefined1 **)(param_3 + 0x18) != (undefined1 *)0x0) {
    puVar10 = *(undefined1 **)(param_3 + 0x18);
  }
  local_res10 = FUN_143360a60(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),puVar10);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  if (*(int *)(local_res10 + 0x20) == 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x1d8);
  }
  else {
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 0xd8);
    uVar6 = FUN_143590540();
    uVar9 = FUN_1434b2dc0(uVar4,0,&local_res10,uVar6);
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  lVar12 = -1;
  do {
    lVar12 = lVar12 + 1;
  } while (*(char *)(*(longlong *)(param_3 + 0x10) + lVar12) != '\0');
  local_res8 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),
                             *(longlong *)(param_3 + 0x10),lVar12,0);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  lVar12 = *(longlong *)(lVar8 + 0x28);
  if (((((lVar12 == 0) ||
        (plVar7 = (longlong *)FUN_1435be2b0(lVar12,&local_res8,uVar9), plVar7 == (longlong *)0x0))
       && (plVar7 = (longlong *)FUN_143610010(lVar8 + 0x30,&local_res8,uVar9),
          plVar7 == (longlong *)0x0)) || (lVar8 = *plVar7, lVar8 == 0)) &&
     (lVar8 = FUN_1434decf0(*(undefined8 *)(param_1 + 0x2c0),&local_res8,uVar9), lVar8 != 0)) {
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    local_a8 = local_res8;
    *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
    if (uVar9 != 0) {
      *(uint *)(uVar9 + 8) = *(int *)(uVar9 + 8) + 1U & 0x8fffffff;
    }
    local_98 = &local_a8;
    local_90 = &local_res18;
    local_res18 = lVar8;
    local_a0 = uVar9;
    FUN_1434e5270(lVar12 + 0x30,*(undefined8 *)(lVar12 + 0x38),&local_98,
                  (uint)((*(longlong *)(uVar9 + 0x28) << 0x3c) >> 0x3c) ^
                  (*(uint *)(*(longlong *)(uVar9 + 0x38) + 0x1c) & 0xffffff) << 2 ^
                  *(uint *)(local_res8 + 0x1c) & 0xffffff);
    if (local_a0 != 0) {
      if ((local_a0 & 1) == 0) {
        if ((*(uint *)(local_a0 + 8) & 0x3fffff) != 0) {
          *(uint *)(local_a0 + 8) = *(uint *)(local_a0 + 8) - 1;
          FUN_1434ef880();
        }
      }
      else {
        local_a0 = local_a0 - 1;
      }
    }
    piVar1 = (int *)(local_a8 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_88 = 0;
  uStack_80 = (int *)0x0;
  plVar7 = *(longlong **)(lVar8 + 0xd8);
  (**(code **)(*plVar7 + 0x58))(plVar7,&local_88,plVar7);
  local_58 = *(longlong *)(param_2 + 2);
  lVar8 = 2;
  local_68[0] = 10;
  local_60 = 0;
  *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
  local_38[0] = *param_2;
  local_48[0] = 2;
  local_40 = 0;
  (**(code **)(*local_78 + 0x60))(local_78,2,local_68);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  puVar3 = (uint *)(param_1 + 0xc0);
  if (&local_88 != puVar3) {
    uVar5 = local_88 & 0x1f;
    if (9 < uVar5) {
      if ((local_88 >> 9 & 1) == 0) {
        if (uVar5 == 10) {
          *(int *)(local_78 + 3) = (int)local_78[3] + 1;
        }
        else if (((10 < uVar5) &&
                 ((plVar7 = local_78, uVar5 < 0xd || (plVar7 = plStack_70, uVar5 < 0xf)))) &&
                (plVar7 != (longlong *)0x0)) {
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) & 0x8fffffff;
        }
      }
      else {
        *uStack_80 = *uStack_80 + 1;
      }
    }
    FUN_143603d30(puVar3);
    *puVar3 = local_88;
    *(undefined4 *)(param_1 + 0xc4) = uStack_84;
    *(undefined4 *)(param_1 + 200) = (undefined4)uStack_80;
    *(undefined4 *)(param_1 + 0xcc) = uStack_80._4_4_;
    *(longlong **)(param_1 + 0xd0) = local_78;
    *(longlong **)(param_1 + 0xd8) = plStack_70;
  }
  if (*(longlong *)(param_1 + 0x108) == 0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  else {
    uVar9 = *(longlong *)(param_1 + 0x108) - 1;
    *(undefined8 *)(param_1 + 0xe0) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar9 >> 6) * 8) + 0x28 +
          (ulonglong)((uint)uVar9 & 0x3f) * 0xa0);
  }
  puVar11 = (ulonglong *)&stack0xffffffffffffffe8;
  do {
    puVar2 = puVar11 + -4;
    lVar8 = lVar8 + -1;
    uVar5 = (uint)puVar11[-6] & 0x1f;
    if (9 < uVar5) {
      if (((uint)puVar11[-6] >> 9 & 1) == 0) {
        if (uVar5 == 10) {
          piVar1 = (int *)(*puVar2 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
          uVar9 = *puVar2;
          if ((uVar9 & 1) == 0) {
LAB_1435cd2f5:
            if ((uVar9 != 0) && ((*(uint *)(uVar9 + 8) & 0x3fffff) != 0)) {
              *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *puVar2 = uVar9 - 1;
          }
        }
        else if (uVar5 - 0xd < 2) {
          uVar9 = puVar11[-3];
          if ((uVar9 & 1) == 0) goto LAB_1435cd2f5;
          puVar11[-3] = uVar9 - 1;
        }
      }
      else {
        piVar1 = (int *)puVar11[-5];
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        *(uint *)(puVar11 + -6) = (uint)puVar11[-6] & 0xfffffde0;
        puVar11[-5] = 0;
        *puVar2 = 0;
        puVar11[-3] = 0;
      }
    }
    puVar11 = puVar2;
    if (lVar8 == 0) {
      uVar5 = local_88 & 0x1f;
      if (9 < uVar5) {
        if ((local_88 >> 9 & 1) == 0) {
          if (uVar5 == 10) {
            local_78 = local_78 + 3;
            *(int *)local_78 = (int)*local_78 + -1;
            if ((int)*local_78 == 0) {
              FUN_14335f920();
            }
          }
          else if (((((uVar5 == 0xb) || (uVar5 == 0xc)) || (local_78 = plStack_70, uVar5 - 0xd < 2))
                   && ((((ulonglong)local_78 & 1) == 0 && (local_78 != (longlong *)0x0)))) &&
                  ((*(uint *)(local_78 + 1) & 0x3fffff) != 0)) {
            *(uint *)(local_78 + 1) = *(uint *)(local_78 + 1) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *uStack_80 = *uStack_80 + -1;
          if (*uStack_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 1435cd3d0 FUN_1435cd3d0 body=155 status=ok
// SIG undefined FUN_1435cd3d0(void)

bool FUN_1435cd3d0(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  FUN_143611bd0(param_1 + 0xc0,param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_3 + 0x28);
  iVar2 = FUN_1435cd480(param_1,(lVar1 - **(longlong **)(param_3 + 0x10) >> 3) + -1,param_3);
  if (-1 < iVar2) {
    *param_2 = **(longlong **)(param_3 + 0x10) + (longlong)iVar2 * 8;
  }
  else {
    *param_4 = 2;
  }
  return -1 >= iVar2;
}



// FUNCTION 1435cd480 FUN_1435cd480 body=501 status=ok
// SIG undefined FUN_1435cd480(void)

undefined4 FUN_1435cd480(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  
  lVar12 = *(longlong *)(param_3 + 0x18);
  uVar16 = 0;
  do {
    uVar7 = (ulonglong)*(uint *)(param_3 + 0x20);
    lVar1 = *(longlong *)(param_3 + 0x18);
    uVar15 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x130) + 0x24 + uVar7 * 0x50);
    if (uVar15 <= uVar16) {
LAB_1435cd502:
      uVar17 = 0xffffffff;
LAB_1435cd506:
      *(byte *)(param_1 + 0xb8) = (byte)((uint)uVar17 >> 0x1f);
      return uVar17;
    }
    puVar8 = (uint *)(*(longlong *)(lVar1 + 0x118) +
                     (*(uint *)(*(longlong *)(lVar1 + 0x130) + 0x20 + uVar7 * 0x50) + uVar16) * 0x18
                     );
    while ((param_2 < *puVar8 || (puVar8[1] <= param_2))) {
      uVar16 = uVar16 + 1;
      puVar8 = puVar8 + 6;
      if (uVar15 <= uVar16) goto LAB_1435cd502;
    }
    lVar2 = *(longlong *)(lVar1 + 0x118);
    lVar11 = *(uint *)(*(longlong *)(lVar1 + 0x130) + 0x20 + uVar7 * 0x50) + uVar16;
    lVar3 = *(longlong *)(lVar2 + 0x10 + lVar11 * 0x18);
    puVar8 = (uint *)(*(longlong *)(lVar12 + 0x100) + lVar3 * 0x18);
    if (*(int *)(*(longlong *)(lVar12 + 0x100) + lVar3 * 0x18) == 0) {
      lVar12 = *(longlong *)(lVar1 + 0x28);
LAB_1435cd5e6:
      FUN_143611e90(lVar12 + 0x58,
                    (*(longlong *)(lVar12 + 0x58) - *(longlong *)(lVar12 + 0x60)) + 0x20 >> 5);
      lVar12 = *(longlong *)(param_1 + 0x58);
      puVar13 = (undefined4 *)(lVar12 + 0x20);
      *(undefined4 **)(param_1 + 0x58) = puVar13;
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = *(undefined4 *)(param_1 + 0xc0);
        *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(param_1 + 200);
        uVar17 = *(undefined4 *)(param_1 + 0xd4);
        uVar4 = *(undefined4 *)(param_1 + 0xd8);
        uVar5 = *(undefined4 *)(param_1 + 0xdc);
        *(undefined4 *)(lVar12 + 0x30) = *(undefined4 *)(param_1 + 0xd0);
        *(undefined4 *)(lVar12 + 0x34) = uVar17;
        *(undefined4 *)(lVar12 + 0x38) = uVar4;
        *(undefined4 *)(lVar12 + 0x3c) = uVar5;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
      *(undefined8 *)(param_1 + 0xe0) = 0;
      lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x28);
      plVar14 = (longlong *)(lVar12 + 0x98);
      FUN_143611e90(plVar14,(*plVar14 - *(longlong *)(lVar12 + 0xa0)) + 0x20 >> 5);
      uVar17 = *(undefined4 *)(lVar2 + lVar11 * 0x18 + 8);
      goto LAB_1435cd506;
    }
    if ((*(byte *)(param_1 + 0xc0) & 0x1f) != 0) {
      uVar9 = FUN_1435ca910(param_1);
      *(undefined1 *)(param_1 + 0xb8) = 0;
      if (*(longlong *)(puVar8 + 2) == 0) {
        uVar10 = FUN_1435c84e0(*(undefined8 *)(lVar12 + 0x28),lVar12,
                               (ulonglong)*puVar8 * 0x10 +
                               *(longlong *)(*(longlong *)(lVar12 + 0xa0) + 0x148));
        *(undefined8 *)(puVar8 + 2) = uVar10;
      }
      lVar1 = *(longlong *)(puVar8 + 2);
      *(undefined1 *)(param_1 + 0xb8) = 1;
      if (lVar1 != 0) {
        cVar6 = FUN_1435b5020(lVar1,uVar9);
        if (cVar6 != '\0') {
          lVar12 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x28);
          goto LAB_1435cd5e6;
        }
      }
    }
    uVar16 = uVar16 + 1;
  } while( true );
}



// FUNCTION 1435cd680 FUN_1435cd680 body=71 status=ok
// SIG undefined FUN_1435cd680(void)

void FUN_1435cd680(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar1 = *(longlong *)(param_1 + 0x108) - 1;
    FUN_1435bcd30((ulonglong)((uint)uVar1 & 0x3f) * 0xa0 +
                  *(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar1 >> 6) * 8));
    *(longlong *)(param_1 + 0x108) = *(longlong *)(param_1 + 0x108) + -1;
  }
  return;
}



// FUNCTION 1435cd6d0 FUN_1435cd6d0 body=581 status=ok
// SIG undefined FUN_1435cd6d0(void)

void FUN_1435cd6d0(longlong param_1,uint param_2,ulonglong param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  uint local_38 [2];
  int *local_30;
  uint local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  lVar4 = FUN_1434ef190(param_3);
  puVar5 = (undefined4 *)((ulonglong)param_2 * 0x20 + *(longlong *)(lVar4 + 8));
  if (((byte)*puVar5 & 0x1f) == 6) {
    plVar2 = *(longlong **)(puVar5 + 6);
    uVar7 = 0;
    uVar3 = puVar5[4];
    local_38[0] = 7;
    local_30 = (int *)0x0;
    local_28 = param_2;
    local_20 = param_3;
    lVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
    if (((plVar2[0x19] - plVar2[0x1a]) + 0x20U & 0xffffffffffffffe0) == 0) {
      if (*(longlong *)(param_1 + 0x108) != 0) {
        uVar6 = *(longlong *)(param_1 + 0x108) - 1;
        uVar7 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar6 >> 6) * 8) + 0x38 +
                 (ulonglong)((uint)uVar6 & 0x3f) * 0xa0);
      }
    }
    else {
      uVar7 = *(undefined8 *)(plVar2[0x1a] + 0x10);
    }
    if (*(uint *)(param_4 + 8) < 9) {
      lVar8 = param_4 + 0x10;
    }
    else {
      lVar8 = *(longlong *)(param_4 + 0x110);
    }
    FUN_1434e80d0(param_1,local_res10,local_38,lVar4,
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0xa0) + 0xa8) + (ulonglong)uVar3 * 4),
                  *(undefined8 *)(param_4 + 0x130),uVar7,plVar2 + 0x19,plVar2,
                  *(undefined8 *)(param_4 + 0x130),param_4 + 8,param_5,lVar8,0,1,0);
    uVar3 = local_38[0] & 0x1f;
    if (9 < uVar3) {
      if ((local_38[0] >> 9 & 1) == 0) {
        if (uVar3 == 10) {
          piVar1 = (int *)(CONCAT44(uStack_24,local_28) + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
            if ((local_28 & 1) != 0) {
              return;
            }
            uVar6 = CONCAT44(uStack_24,local_28);
          }
          else {
            if (1 < uVar3 - 0xd) {
              return;
            }
            uVar6 = local_20;
            if ((local_20 & 1) != 0) {
              return;
            }
          }
          if ((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_30 = *local_30 + -1;
        if (*local_30 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  else {
    FUN_1435ce630(param_1,*(undefined8 *)(puVar5 + 4),param_4,0);
  }
  return;
}



// FUNCTION 1435cd920 FUN_1435cd920 body=3272 status=ok
// SIG undefined FUN_1435cd920(void)

void FUN_1435cd920(longlong param_1,undefined8 *param_2,uint *param_3,uint *param_4,uint *param_5,
                  longlong param_6)

{
  int *piVar1;
  undefined2 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_148 [2];
  int *local_140;
  undefined8 local_138;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  int *piStack_120;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  uint *local_e0;
  longlong local_d8;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 local_c0;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  uint uStack_88;
  uint uStack_84;
  undefined8 local_80;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  puVar17 = param_5;
  local_128 = 0;
  piStack_120 = (int *)0x0;
  local_e0 = param_3;
  if (param_3 == param_4) {
    local_128 = *param_4;
    uStack_124 = param_4[1];
    piStack_120 = *(int **)(param_4 + 2);
    local_e0 = &local_128;
    local_118 = param_4[4];
    uStack_114 = param_4[5];
    uStack_110 = param_4[6];
    uStack_10c = param_4[7];
    *param_4 = 0;
  }
  uVar14 = param_2[4];
  uVar20 = (uint)(uVar14 >> 9) & 0xfff;
  uVar21 = (ulonglong)uVar20;
  uVar9 = (uint)(uVar14 >> 6) & 7;
  uVar19 = *param_5;
  local_e8 = uVar21;
  if ((uVar19 < uVar9) || (((uVar14 >> 0x15 & 1) == 0 && (uVar20 < uVar19)))) {
    uVar7 = FUN_1435c8e40(&local_80,0x427,param_1);
    FUN_1435ccf60(param_1,uVar7,&DAT_145b15f30);
    piVar18 = (int *)(CONCAT44(uStack_74,uStack_78) + 0x18);
    *piVar18 = *piVar18 + -1;
    if (*piVar18 == 0) {
      FUN_14335f920();
    }
    uVar19 = local_128 & 0x1f;
    if (9 < uVar19) {
      if ((local_128 >> 9 & 1) == 0) {
        if (uVar19 == 10) {
          piVar18 = (int *)(CONCAT44(uStack_114,local_118) + 0x18);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            FUN_14335f920();
            return;
          }
        }
        else {
          if ((uVar19 == 0xb) || (uVar19 == 0xc)) {
            uVar14 = CONCAT44(uStack_114,local_118);
          }
          else {
            if (1 < uVar19 - 0xd) {
              return;
            }
            uVar14 = CONCAT44(uStack_10c,uStack_110);
          }
          if ((((uVar14 & 1) == 0) && (uVar14 != 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
            FUN_1434ef880();
            return;
          }
        }
      }
      else {
        *piStack_120 = *piStack_120 + -1;
        if (*piStack_120 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return;
        }
      }
    }
  }
  else {
    if ((uVar19 != 0) && ((uVar14 >> 0x15 & 1) == 0)) {
      uVar22 = uVar20;
      if (uVar20 == 0xfff) {
        uVar22 = uVar9;
      }
      if (uVar19 < uVar22) {
        uVar22 = uVar19;
      }
      *param_5 = uVar22;
      uVar13 = 0;
      if (uVar22 != 0) {
        do {
          uVar19 = (int)uVar13 + 1;
          if (((*(longlong *)(param_2[1] + (ulonglong)uVar19 * 8) != 0) &&
              (plVar6 = (longlong *)FUN_1435c8090(param_1), plVar6 != (longlong *)0x0)) &&
             (lVar16 = uVar13 * 0x20 + param_6,
             cVar5 = (**(code **)(*plVar6 + 0x58))(plVar6,lVar16,lVar16), cVar5 == '\0')) {
            uVar7 = FUN_1435c8e40(&local_e0,0x40a,param_1);
            FUN_1435ccf60(param_1,uVar7,&DAT_145b155b0);
            piVar18 = (int *)(local_d8 + 0x18);
            *piVar18 = *piVar18 + -1;
            if (*piVar18 == 0) {
              FUN_14335f920();
            }
            uVar19 = local_128 & 0x1f;
            if (uVar19 < 10) {
              return;
            }
            goto joined_r0x0001435cdb02;
          }
          uVar13 = (ulonglong)uVar19;
        } while (uVar19 < *param_5);
      }
    }
    if (((*(uint *)(param_2 + 4) >> 0x15 & 1) == 0) && (*param_5 < uVar20)) {
      local_f0 = *(undefined8 *)(param_1 + 0x48);
      local_100 = 0;
      local_108 = 0;
      local_f8 = 0;
      if ((uVar14 >> 9 & 0xfff) != 0) {
        FUN_1434efd80(&local_108,local_f0,uVar21);
      }
      uVar19 = 0;
      param_5._0_4_ = 0;
      lVar16 = local_108;
      if (*puVar17 != 0) {
        do {
          FUN_1434f0300(&local_108,local_f0,local_100 + 1);
          lVar16 = local_108;
          lVar11 = local_108 + -0x20 + local_100 * 0x20;
          if (lVar11 != 0) {
            FUN_14360ab50(lVar11,(ulonglong)uVar19 * 0x20 + param_6);
          }
          uVar19 = uVar19 + 1;
          param_5._0_4_ = uVar19;
        } while (uVar19 < *puVar17);
      }
      uVar19 = uVar20 - (*(uint *)(param_2 + 4) >> 0x16);
      if ((uint)param_5 < uVar19) {
        uVar14 = (ulonglong)_tls_index;
        uVar20 = uVar19 - (uint)param_5;
        lVar11 = (ulonglong)((uint)param_5 + 1) << 3;
        param_5._0_4_ = (uint)param_5 + uVar20;
        uVar21 = (ulonglong)uVar20;
        do {
          lVar16 = *(longlong *)(lVar11 + param_2[1]);
          if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
              DAT_146b7a928) {
            _Init_thread_header(&DAT_146b7a928);
            if (DAT_146b7a928 == -1) {
              DAT_146b7a908 = 0;
              DAT_146b7a910 = (int *)0x0;
              atexit(FUN_143ec4e30);
              _Init_thread_footer(&DAT_146b7a928);
            }
          }
          uVar15 = uStack_94;
          uVar24 = uStack_98;
          uVar23 = local_d0;
          uVar22 = DAT_146b7a920._4_4_;
          uVar9 = (uint)DAT_146b7a920;
          piVar18 = DAT_146b7a910;
          uVar20 = DAT_146b7a908;
          uVar13 = CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918);
          uVar10 = DAT_146b7a908 & 0x1f;
          local_148[0] = DAT_146b7a908;
          local_140 = DAT_146b7a910;
          local_138._0_4_ = (uint)DAT_146b7a918;
          local_138._4_4_ = DAT_146b7a918._4_4_;
          uVar4 = CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918);
          uStack_130 = (uint)DAT_146b7a920;
          uStack_12c = DAT_146b7a920._4_4_;
          if (9 < uVar10) {
            if ((DAT_146b7a908 >> 9 & 1) == 0) {
              if (uVar10 == 10) {
                piVar1 = (int *)(CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918) + 0x18);
                *piVar1 = *piVar1 + 1;
              }
              else if (10 < uVar10) {
                if (uVar10 < 0xd) {
                  lVar8 = CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918);
                }
                else {
                  if (0xe < uVar10) goto LAB_1435cdce0;
                  lVar8 = CONCAT44(DAT_146b7a920._4_4_,(uint)DAT_146b7a920);
                }
                if (lVar8 != 0) {
                  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                  *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0x8fffffff;
                }
              }
            }
            else {
              *DAT_146b7a910 = *DAT_146b7a910 + 1;
            }
          }
LAB_1435cdce0:
          if (lVar16 != 0) {
            pcVar3 = *(char **)(lVar16 + 0x18);
            if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
              lVar8 = 0;
              do {
                lVar12 = lVar8 + 1;
                if (*(char *)(*(longlong *)(lVar16 + 0x10) + lVar8) != "Boolean"[lVar8])
                goto LAB_1435cdd2c;
                lVar8 = lVar12;
              } while (lVar12 != 8);
              local_d0 = local_d0 & 0xffffff00;
              uStack_130 = uStack_c8;
              uStack_12c = uStack_c4;
              uVar9 = uStack_c8;
              uVar22 = uStack_c4;
              uVar20 = uVar20 & 0xffffffe1 | 1;
              uVar13 = CONCAT44(uStack_cc,uVar23) & 0xffffffffffffff00;
              uVar4 = CONCAT44(uStack_cc,uVar23) & 0xffffffffffffff00;
            }
            else {
LAB_1435cdd2c:
              if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                lVar8 = 0;
                do {
                  lVar12 = lVar8 + 1;
                  if (*(char *)(*(longlong *)(lVar16 + 0x10) + lVar8) != (&DAT_145af6ba4)[lVar8])
                  goto LAB_1435cdd6f;
                  lVar8 = lVar12;
                } while (lVar12 != 4);
                uVar23 = (uint)(local_c0 >> 0x20);
                local_c0 = local_c0 & 0xffffffff00000000;
                uStack_130 = uStack_b8;
                uStack_12c = uStack_b4;
                uVar9 = uStack_b8;
                uVar22 = uStack_b4;
                uVar20 = uVar20 & 0xffffffe2 | 2;
                uVar13 = (ulonglong)uVar23 << 0x20;
                uVar4 = (ulonglong)uVar23 << 0x20;
              }
              else {
LAB_1435cdd6f:
                if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                  lVar8 = 0;
                  do {
                    lVar12 = lVar8 + 1;
                    if (*(char *)(*(longlong *)(lVar16 + 0x10) + lVar8) != (&DAT_145b16f04)[lVar8])
                    goto LAB_1435cddbf;
                    lVar8 = lVar12;
                  } while (lVar12 != 5);
                  local_b0 = 0;
                  uStack_130 = uStack_a8;
                  uStack_12c = uStack_a4;
                  uVar9 = uStack_a8;
                  uVar22 = uStack_a4;
                  uVar20 = uVar20 & 0xffffffe3 | 3;
                  uVar13 = (ulonglong)uStack_ac << 0x20;
                  uVar4 = (ulonglong)uStack_ac << 0x20;
                }
                else {
LAB_1435cddbf:
                  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                    lVar8 = 0;
                    do {
                      lVar12 = lVar8 + 1;
                      if (*(char *)(*(longlong *)(lVar16 + 0x10) + lVar8) != "String"[lVar8])
                      goto LAB_1435cde2a;
                      lVar8 = lVar12;
                    } while (lVar12 != 7);
                    uVar20 = uVar20 & 0xffffffea | 10;
                    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x218);
                    uVar13 = lVar16 + 0x48;
                    piVar1 = (int *)(lVar16 + 0x60);
                    *piVar1 = *piVar1 + 1;
                    uStack_130 = uStack_98;
                    uStack_12c = uStack_94;
                    uVar9 = uVar24;
                    uVar22 = uVar15;
                    local_a0 = uVar13;
                    uVar4 = uVar13;
                    if (*piVar1 == 0) {
                      local_138 = uVar13;
                      FUN_14335f920();
                      uVar4 = local_138;
                    }
                  }
                  else {
LAB_1435cde2a:
                    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                      lVar8 = 0;
                      do {
                        lVar12 = lVar8 + 1;
                        if (*(char *)(*(longlong *)(lVar16 + 0x10) + lVar8) != "Number"[lVar8])
                        goto LAB_1435cde6f;
                        lVar8 = lVar12;
                      } while (lVar12 != 7);
                      local_90 = Scaleform::GFx::NumberUtil::NaN();
                      uStack_130 = uStack_88;
                      uStack_12c = uStack_84;
                      uVar9 = uStack_88;
                      uVar22 = uStack_84;
                      uVar20 = uVar20 & 0xffffffe4 | 4;
                      uVar13 = local_90;
                      uVar4 = local_90;
                    }
                    else {
LAB_1435cde6f:
                      FUN_1434f0650(local_148);
                      uVar4 = CONCAT44(local_138._4_4_,(uint)local_138);
                      uVar13 = CONCAT44(local_138._4_4_,(uint)local_138);
                      piVar18 = local_140;
                      uVar9 = uStack_130;
                      uVar22 = uStack_12c;
                      uVar20 = local_148[0];
                    }
                  }
                }
              }
            }
          }
          local_138 = uVar4;
          FUN_1434f0300(&local_108,local_f0,local_100 + 1);
          lVar16 = local_108;
          lVar8 = CONCAT44(uStack_12c,uStack_130);
          puVar17 = (uint *)(local_108 + -0x20 + local_100 * 0x20);
          if (puVar17 != (uint *)0x0) {
            *puVar17 = uVar20;
            *(int **)(puVar17 + 2) = piVar18;
            *(ulonglong *)(puVar17 + 4) = uVar13;
            puVar17[6] = uVar9;
            puVar17[7] = uVar22;
            uVar9 = uVar20 & 0x1f;
            if (9 < uVar9) {
              if ((uVar20 >> 9 & 1) == 0) {
                if (uVar9 == 10) {
                  *(int *)(local_138 + 0x18) = *(int *)(local_138 + 0x18) + 1;
                }
                else if (10 < uVar9) {
                  if (uVar9 < 0xd) {
                    if (local_138 != 0) {
                      *(uint *)(local_138 + 8) = *(int *)(local_138 + 8) + 1U & 0x8fffffff;
                    }
                  }
                  else if ((uVar9 < 0xf) && (lVar8 != 0)) {
                    *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
                  }
                }
              }
              else {
                *piVar18 = *piVar18 + 1;
              }
            }
          }
          uVar9 = uVar20 & 0x1f;
          if (9 < uVar9) {
            if ((uVar20 >> 9 & 1) == 0) {
              if (uVar9 == 10) {
                piVar18 = (int *)(local_138 + 0x18);
                *piVar18 = *piVar18 + -1;
                if (*piVar18 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar9 == 0xb) || (uVar9 == 0xc)) {
                if (((local_138 & 1) == 0) &&
                   ((local_138 != 0 && ((*(uint *)(local_138 + 8) & 0x3fffff) != 0)))) {
                  *(uint *)(local_138 + 8) = *(uint *)(local_138 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else if ((((uVar9 - 0xd < 2) && ((uStack_130 & 1) == 0)) && (lVar8 != 0)) &&
                      ((*(uint *)(lVar8 + 8) & 0x3fffff) != 0)) {
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) - 1;
                FUN_1434ef880(lVar8);
              }
            }
            else {
              *piVar18 = *piVar18 + -1;
              if (*piVar18 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar18);
              }
            }
          }
          lVar11 = lVar11 + 8;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
        uVar20 = (uint)local_e8;
      }
      if ((uint)param_5 < uVar20) {
        uVar14 = (ulonglong)_tls_index;
        do {
          lVar16 = param_2[5];
          uVar21 = (ulonglong)((uint)param_5 - uVar19);
          uVar2 = *(undefined2 *)(lVar16 + (ulonglong)((uint)param_5 - uVar19) * 4);
          if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar14 * 8) + 0x38) <
              DAT_146b7a928) {
            _Init_thread_header(&DAT_146b7a928);
            if (DAT_146b7a928 == -1) {
              DAT_146b7a908 = 0;
              DAT_146b7a910 = (int *)0x0;
              atexit(FUN_143ec4e30);
              _Init_thread_footer(&DAT_146b7a928);
            }
          }
          uVar24 = DAT_146b7a920._4_4_;
          uVar23 = (uint)DAT_146b7a920;
          uVar22 = DAT_146b7a918._4_4_;
          uVar20 = (uint)DAT_146b7a918;
          piVar18 = DAT_146b7a910;
          uVar9 = DAT_146b7a908;
          uVar15 = DAT_146b7a908 & 0x1f;
          local_138._0_4_ = (uint)DAT_146b7a918;
          local_138._4_4_ = DAT_146b7a918._4_4_;
          uStack_130 = (uint)DAT_146b7a920;
          uStack_12c = DAT_146b7a920._4_4_;
          if (9 < uVar15) {
            if ((DAT_146b7a908 >> 9 & 1) == 0) {
              if (uVar15 == 10) {
                piVar1 = (int *)(CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918) + 0x18);
                *piVar1 = *piVar1 + 1;
              }
              else if (10 < uVar15) {
                if (uVar15 < 0xd) {
                  lVar11 = CONCAT44(DAT_146b7a918._4_4_,(uint)DAT_146b7a918);
                }
                else {
                  if (0xe < uVar15) goto LAB_1435ce0ea;
                  lVar11 = CONCAT44(DAT_146b7a920._4_4_,(uint)DAT_146b7a920);
                }
                if (lVar11 != 0) {
                  *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                  *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) & 0x8fffffff;
                }
              }
            }
            else {
              *DAT_146b7a910 = *DAT_146b7a910 + 1;
            }
          }
LAB_1435ce0ea:
          switch(uVar2) {
          case 1:
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while ((&PTR_DAT_1467d0ad0)[*(ushort *)(lVar16 + 2 + uVar21 * 4)][lVar11] != '\0');
            uVar21 = FUN_143360950(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x218),
                                   (&PTR_DAT_1467d0ad0)[*(ushort *)(lVar16 + 2 + uVar21 * 4)],lVar11
                                   ,0);
            uVar24 = uStack_84;
            uVar23 = uStack_88;
            local_90._0_4_ = (uint)uVar21;
            uVar20 = (uint)local_90;
            local_90._4_4_ = (uint)(uVar21 >> 0x20);
            uVar22 = local_90._4_4_;
            uVar9 = uVar9 & 0xffffffea | 10;
            piVar1 = (int *)(uVar21 + 0x18);
            *piVar1 = *piVar1 + 1;
            local_138._0_4_ = (uint)local_90;
            local_138._4_4_ = local_90._4_4_;
            uStack_130 = uStack_88;
            uStack_12c = uStack_84;
            local_90 = uVar21;
            if (*piVar1 == 0) {
              FUN_14335f920(uVar21);
            }
            break;
          case 3:
            uVar9 = uVar9 & 0xffffffe2 | 2;
            uVar20 = *(uint *)(&DAT_1467d08f8 + (ulonglong)*(ushort *)(lVar16 + 2 + uVar21 * 4) * 4)
            ;
            local_a0 = CONCAT44(local_a0._4_4_,uVar20);
            uVar22 = local_a0._4_4_;
            uVar23 = uStack_98;
            uVar24 = uStack_94;
            local_138._0_4_ = uVar20;
            local_138._4_4_ = local_a0._4_4_;
            uStack_130 = uStack_98;
            uStack_12c = uStack_94;
            break;
          case 4:
            uVar9 = uVar9 & 0xffffffe3 | 3;
            uVar20 = *(uint *)(&DAT_1467d0a48 + (ulonglong)*(ushort *)(lVar16 + 2 + uVar21 * 4) * 4)
            ;
            uVar22 = uStack_ac;
            uVar23 = uStack_a8;
            uVar24 = uStack_a4;
            local_138._0_4_ = uVar20;
            local_138._4_4_ = uStack_ac;
            uStack_130 = uStack_a8;
            uStack_12c = uStack_a4;
            local_b0 = uVar20;
            break;
          case 6:
            uVar9 = uVar9 & 0xffffffe4 | 4;
            uVar21 = *(ulonglong *)
                      (&DAT_1467d3b60 + (ulonglong)*(ushort *)(lVar16 + 2 + uVar21 * 4) * 8);
            local_c0._0_4_ = (uint)uVar21;
            local_c0._4_4_ = (uint)(uVar21 >> 0x20);
            uVar20 = (uint)local_c0;
            uVar22 = local_c0._4_4_;
            uVar23 = uStack_b8;
            uVar24 = uStack_b4;
            local_138._0_4_ = (uint)local_c0;
            local_138._4_4_ = local_c0._4_4_;
            uStack_130 = uStack_b8;
            uStack_12c = uStack_b4;
            local_c0 = uVar21;
            break;
          case 10:
            local_70 = local_70 & 0xffffff00;
            uVar9 = uVar9 & 0xffffffe1 | 1;
            uVar20 = local_70;
            uVar22 = uStack_6c;
            uVar23 = uStack_68;
            uVar24 = uStack_64;
            local_138._0_4_ = local_70;
            local_138._4_4_ = uStack_6c;
            uStack_130 = uStack_68;
            uStack_12c = uStack_64;
            break;
          case 0xb:
            local_d0 = CONCAT31(local_d0._1_3_,1);
            uVar9 = uVar9 & 0xffffffe1 | 1;
            uVar20 = local_d0;
            uVar22 = uStack_cc;
            uVar23 = uStack_c8;
            uVar24 = uStack_c4;
            local_138._0_4_ = local_d0;
            local_138._4_4_ = uStack_cc;
            uStack_130 = uStack_c8;
            uStack_12c = uStack_c4;
            break;
          case 0xc:
            if (9 < uVar15) {
              if ((uVar9 >> 9 & 1) == 0) {
                if (uVar15 == 10) {
                  piVar1 = (int *)(CONCAT44(uVar22,uVar20) + 0x18);
                  *piVar1 = *piVar1 + -1;
                  if (*piVar1 == 0) {
                    FUN_14335f920();
                  }
                }
                else if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
                  if ((uVar20 & 1) == 0) {
                    lVar16 = CONCAT44(uVar22,uVar20);
                    goto LAB_1435ce252;
                  }
                }
                else if ((uVar15 - 0xd < 2) && ((uVar23 & 1) == 0)) {
                  lVar16 = CONCAT44(uVar24,uVar23);
LAB_1435ce252:
                  if ((lVar16 != 0) && ((*(uint *)(lVar16 + 8) & 0x3fffff) != 0)) {
                    *(uint *)(lVar16 + 8) = *(uint *)(lVar16 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
              }
              else {
                *piVar18 = *piVar18 + -1;
                if (*piVar18 == 0) {
                  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar18);
                }
                piVar18 = (int *)0x0;
                uVar9 = uVar9 & 0xfffffde0;
              }
            }
            local_80 = 0;
            local_80._0_4_ = 0;
            local_80._4_4_ = 0;
            uVar9 = uVar9 & 0xffffffec | 0xc;
            uVar20 = (uint)local_80;
            uVar22 = local_80._4_4_;
            uVar23 = uStack_78;
            uVar24 = uStack_74;
            local_138._0_4_ = (uint)local_80;
            local_138._4_4_ = local_80._4_4_;
            uStack_130 = uStack_78;
            uStack_12c = uStack_74;
          }
          FUN_1434f0300(&local_108,local_f0,local_100 + 1);
          lVar16 = local_108;
          lVar8 = CONCAT44(uStack_12c,uStack_130);
          lVar11 = CONCAT44(local_138._4_4_,(uint)local_138);
          puVar17 = (uint *)(local_108 + -0x20 + local_100 * 0x20);
          if (puVar17 != (uint *)0x0) {
            *puVar17 = uVar9;
            *(int **)(puVar17 + 2) = piVar18;
            puVar17[4] = uVar20;
            puVar17[5] = uVar22;
            puVar17[6] = uVar23;
            puVar17[7] = uVar24;
            uVar20 = uVar9 & 0x1f;
            if (9 < uVar20) {
              if ((uVar9 >> 9 & 1) == 0) {
                if (uVar20 == 10) {
                  *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
                }
                else if (10 < uVar20) {
                  if (uVar20 < 0xd) {
                    if (lVar11 != 0) {
                      *(uint *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1U & 0x8fffffff;
                    }
                  }
                  else if ((uVar20 < 0xf) && (lVar8 != 0)) {
                    *(uint *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1U & 0x8fffffff;
                  }
                }
              }
              else {
                *piVar18 = *piVar18 + 1;
              }
            }
          }
          uVar20 = uVar9 & 0x1f;
          if (9 < uVar20) {
            if ((uVar9 >> 9 & 1) == 0) {
              if (uVar20 == 10) {
                piVar18 = (int *)(lVar11 + 0x18);
                *piVar18 = *piVar18 + -1;
                if (*piVar18 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar20 == 0xb) || (uVar20 == 0xc)) {
                if ((((uint)local_138 & 1) == 0) &&
                   ((lVar11 != 0 && ((*(uint *)(lVar11 + 8) & 0x3fffff) != 0)))) {
                  *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else if ((((uVar20 - 0xd < 2) && ((uStack_130 & 1) == 0)) && (lVar8 != 0)) &&
                      ((*(uint *)(lVar8 + 8) & 0x3fffff) != 0)) {
                *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) - 1;
                FUN_1434ef880(lVar8);
              }
            }
            else {
              *piVar18 = *piVar18 + -1;
              if (*piVar18 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar18);
              }
            }
          }
          param_5._0_4_ = (uint)param_5 + 1;
          uVar20 = (uint)local_e8;
        } while ((uint)param_5 < (uint)local_e8);
      }
      (*(code *)*param_2)(param_2,param_1,local_e0,param_4,uVar20,lVar16);
      FUN_14360f5f0(lVar16,local_100);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lVar16);
    }
    else {
      (*(code *)*param_2)(param_2,param_1,local_e0,param_4,*param_5,param_6);
    }
    uVar19 = local_128 & 0x1f;
    if (9 < uVar19) {
joined_r0x0001435cdb02:
      if ((local_128 >> 9 & 1) == 0) {
        if (uVar19 == 10) {
          piVar18 = (int *)(CONCAT44(uStack_114,local_118) + 0x18);
          *piVar18 = *piVar18 + -1;
          if (*piVar18 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar19 == 0xb) || (uVar19 == 0xc)) {
            uVar14 = CONCAT44(uStack_114,local_118);
          }
          else {
            if (1 < uVar19 - 0xd) {
              return;
            }
            uVar14 = CONCAT44(uStack_10c,uStack_110);
          }
          if ((((uVar14 & 1) == 0) && (uVar14 != 0)) && ((*(uint *)(uVar14 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar14 + 8) = *(uint *)(uVar14 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *piStack_120 = *piStack_120 + -1;
        if (*piStack_120 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
  }
  return;
}



// FUNCTION 1435ce630 FUN_1435ce630 body=241 status=ok
// SIG undefined FUN_1435ce630(void)

void FUN_1435ce630(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint local_28;
  uint uStack_24;
  int *piStack_20;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  lVar4 = param_3 + 0x10;
  puVar2 = *(uint **)(param_3 + 0x130);
  if (8 < *(uint *)(param_3 + 8)) {
    lVar4 = *(longlong *)(param_3 + 0x110);
  }
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  piStack_20 = *(int **)(puVar2 + 2);
  local_18 = puVar2[4];
  uStack_14 = puVar2[5];
  uStack_10 = puVar2[6];
  uStack_c = puVar2[7];
  *puVar2 = 0;
  (*(code *)*param_2)(param_2,param_1,&local_28,puVar2,*(undefined4 *)(param_3 + 8),lVar4);
  uVar3 = local_28 & 0x1f;
  if (9 < uVar3) {
    if ((local_28 >> 9 & 1) == 0) {
      if (uVar3 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_14,local_18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      else {
        if ((uVar3 == 0xb) || (uVar3 == 0xc)) {
          uVar5 = CONCAT44(uStack_14,local_18);
        }
        else {
          if (1 < uVar3 - 0xd) {
            return;
          }
          uVar5 = CONCAT44(uStack_c,uStack_10);
        }
        if ((((uVar5 & 1) == 0) && (uVar5 != 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
          FUN_1434ef880();
          return;
        }
      }
    }
    else {
      *piStack_20 = *piStack_20 + -1;
      if (*piStack_20 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1435ce730 FUN_1435ce730 body=318 status=ok
// SIG undefined FUN_1435ce730(void)

void FUN_1435ce730(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7,undefined1 param_8)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 local_res18 [16];
  
  plVar2 = *(longlong **)(param_3 + 0x18);
  uVar1 = *(uint *)(param_3 + 0x10);
  lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2);
  if (((plVar2[0x19] - plVar2[0x1a]) + 0x20U & 0xffffffffffffffe0) == 0) {
    if (*(longlong *)(param_1 + 0x108) == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = *(longlong *)(param_1 + 0x108) - 1;
      uVar6 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar5 >> 6) * 8) + 0x38 +
               (ulonglong)((uint)uVar5 & 0x3f) * 0xa0);
    }
  }
  else {
    uVar6 = *(undefined8 *)(plVar2[0x1a] + 0x10);
  }
  pcVar4 = (char *)FUN_1434e80d0(param_1,local_res18,param_2,lVar3,
                                 *(undefined4 *)
                                  (*(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0xa8) +
                                  (ulonglong)uVar1 * 4),param_5,uVar6,plVar2 + 0x19,plVar2,param_4,
                                 param_6,*param_6,param_7,param_8,0,0);
  if (*pcVar4 != '\0') {
    FUN_1435c8f90(param_1,1);
  }
  return;
}



// FUNCTION 1435ce880 FUN_1435ce880 body=1073 status=ok
// SIG undefined FUN_1435ce880(void)

void FUN_1435ce880(longlong param_1,uint *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,char param_7,char param_8)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint local_28 [2];
  int *local_20;
  int *local_18;
  byte local_10;
  undefined7 uStack_f;
  
  uVar6 = *param_2 & 0x1f;
  switch(uVar6) {
  case 5:
    FUN_1435cd920(param_1,*(undefined8 *)(param_2 + 4),param_3,param_4,param_5,param_6,param_8);
    goto LAB_1435cec31;
  case 6:
    if (uVar6 == 6) {
      FUN_1435ce730(param_1,param_2,param_2,param_3,param_4,param_5,param_6,param_8);
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 4);
    break;
  case 7:
    lVar2 = FUN_1434ef190(*(undefined8 *)(param_2 + 6));
    puVar5 = (undefined4 *)((ulonglong)param_2[4] * 0x20 + *(longlong *)(lVar2 + 8));
    if (((byte)*puVar5 & 0x1f) == 6) {
      FUN_1435ce730(param_1,param_2,puVar5,param_3,param_4,param_5,param_6,param_8);
      return;
    }
    uVar3 = *(undefined8 *)(puVar5 + 4);
    break;
  case 0xc:
    plVar1 = *(longlong **)(param_2 + 4);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,param_3,param_4,param_5,param_6,param_8);
      goto LAB_1435cec31;
    }
  default:
    uVar3 = FUN_1435c8e40(local_28,0x3ee,param_1);
    FUN_1435ccf60(param_1,uVar3,&DAT_145b155b0);
    piVar4 = local_20;
LAB_1435cec8c:
    piVar4 = piVar4 + 6;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  case 0xd:
    uVar3 = *(undefined8 *)(param_2 + 4);
    local_18 = *(int **)(param_2 + 6);
    if (local_18 != (int *)0x0) {
      local_18[2] = local_18[2] + 1U & 0x8fffffff;
    }
    goto LAB_1435ceb86;
  case 0xe:
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 6) + 0x28);
    if ((*param_2 >> 10 & 1) != 0) {
      lVar2 = *(longlong *)(lVar2 + 0xb0);
    }
    lVar2 = FUN_1434ef190(lVar2);
    puVar5 = (undefined4 *)((ulonglong)param_2[4] * 0x20 + *(longlong *)(lVar2 + 8));
    local_18 = *(int **)(param_2 + 6);
    local_28[0] = 0xc;
    local_20 = (int *)0x0;
    if (local_18 != (int *)0x0) {
      local_18[2] = local_18[2] + 1U & 0x8fffffff;
    }
    if (((byte)*puVar5 & 0x1f) == 6) {
      FUN_1435ce730(param_1,param_2,puVar5,local_28,param_4,param_5,param_6,param_8);
      uVar6 = local_28[0] & 0x1f;
      if (uVar6 < 10) {
        return;
      }
      if ((local_28[0] >> 9 & 1) != 0) {
        *local_20 = *local_20 + -1;
        if (*local_20 != 0) {
          return;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))();
        return;
      }
      piVar4 = local_18;
      if (uVar6 != 10) {
        if ((uVar6 != 0xb) && (uVar6 != 0xc)) {
          if (1 < uVar6 - 0xd) {
            return;
          }
          piVar4 = (int *)CONCAT71(uStack_f,local_10);
        }
        if (((ulonglong)piVar4 & 1) != 0) {
          return;
        }
        if (piVar4 == (int *)0x0) {
          return;
        }
        if ((piVar4[2] & 0x3fffffU) == 0) {
          return;
        }
        piVar4[2] = piVar4[2] - 1;
        FUN_1434ef880();
        return;
      }
      goto LAB_1435cec8c;
    }
    uVar3 = *(undefined8 *)(puVar5 + 4);
LAB_1435ceb86:
    local_20 = (int *)0x0;
    local_28[0] = 0xc;
    FUN_1435cd920(param_1,uVar3,local_28,param_4,param_5,param_6,param_8);
    uVar6 = local_28[0] & 0x1f;
    if (9 < uVar6) {
      if ((local_28[0] >> 9 & 1) == 0) {
        if (uVar6 == 10) {
          piVar4 = local_18 + 6;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
            piVar4 = local_18;
            local_10 = (byte)local_18;
          }
          else {
            if (1 < uVar6 - 0xd) goto LAB_1435cec31;
            piVar4 = (int *)CONCAT71(uStack_f,local_10);
          }
          if ((((local_10 & 1) == 0) && (piVar4 != (int *)0x0)) && ((piVar4[2] & 0x3fffffU) != 0)) {
            piVar4[2] = piVar4[2] - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_20 = *local_20 + -1;
        if (*local_20 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
      }
    }
    goto LAB_1435cec31;
  }
  FUN_1435cd920(param_1,uVar3,param_3,param_4,param_5,param_6,param_8);
LAB_1435cec31:
  if ((param_7 != '\0') && (param_8 != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    puVar5 = (undefined4 *)(lVar2 + 0x20);
    *(undefined4 **)(param_1 + 0x58) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_4;
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_4 + 2);
      uVar3 = *(undefined8 *)(param_4 + 6);
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_4 + 4);
      *(undefined8 *)(lVar2 + 0x38) = uVar3;
      *param_4 = 0;
    }
  }
  return;
}



// FUNCTION 1435cecf0 FUN_1435cecf0 body=344 status=ok
// SIG undefined FUN_1435cecf0(void)

void FUN_1435cecf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined1 local_res20 [4];
  uint local_res24;
  undefined1 local_38 [8];
  longlong local_30;
  
  uVar9 = *(longlong *)(param_1 + 0x108) - 1;
  lVar10 = (ulonglong)((uint)uVar9 & 0x3f) * 0xa0 +
           *(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar9 >> 6) * 8);
  lVar1 = *(longlong *)(lVar10 + 0x18);
  local_res8 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar1 + 0xa0) + 0x90) +
                (ulonglong)*(uint *)(lVar10 + 0x20) * 8);
  uVar4 = FUN_14358f8b0(&local_res8);
  lVar10 = *(longlong *)(lVar1 + 0xa0);
  lVar2 = *(longlong *)(lVar1 + 0x28);
  local_res8 = *(undefined8 *)(*(longlong *)(lVar10 + 0x30) + (ulonglong)uVar4 * 8);
  Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader(&local_res8,local_res20);
  piVar7 = (int *)((ulonglong)local_res24 * 0x10 + *(longlong *)(lVar10 + 0x148));
  if (((piVar7[3] == 0) && (piVar7[2] == 0)) && (*piVar7 == 0)) {
    FUN_143590140(param_3,param_2);
    return;
  }
  plVar5 = (longlong *)FUN_1435c84e0(lVar2,lVar1);
  if (plVar5 == (longlong *)0x0) {
    uVar6 = FUN_1435c8e40(local_38,0x3f6,lVar2);
    puVar8 = &DAT_145b14e70;
    param_1 = lVar2;
  }
  else {
    cVar3 = (**(code **)(*plVar5 + 0x58))(plVar5,param_2,param_3);
    if (cVar3 != '\0') {
      return;
    }
    uVar6 = FUN_1435c8e40(local_38,0x40a,param_1);
    puVar8 = &DAT_145b155b0;
  }
  FUN_1435ccf60(param_1,uVar6,puVar8);
  piVar7 = (int *)(local_30 + 0x18);
  *piVar7 = *piVar7 + -1;
  if (*piVar7 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1435cee50 FUN_1435cee50 body=226 status=ok
// SIG undefined FUN_1435cee50(void)

void FUN_1435cee50(longlong param_1,ulonglong *param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  FUN_1435b2140(param_2,param_1,param_1 + 0x98,param_3);
  if (((((param_2[2] & 0x1f) == 0) ||
       (((*param_2 & 1) != 0 && ((*param_2 & 0xfffffffffffffffe) == 0)))) ||
      ((((byte)*param_2 >> 1 & 1) != 0 && ((*param_2 & 0xfffffffffffffffd) == 0)))) &&
     (((*param_4 - param_4[1]) + 0x20U & 0xffffffffffffffe0) != 0)) {
    FUN_1435b2140(param_2,param_1,param_4,param_3);
  }
  if ((((param_2[2] & 0x1f) == 0) || (uVar1 = *param_2, uVar1 == 1)) ||
     ((((byte)uVar1 >> 1 & 1) != 0 && ((uVar1 & 0xfffffffffffffffd) == 0)))) {
    uVar2 = FUN_1435c7e00(param_1,param_3,param_5);
    FUN_1435b21f0(param_2,param_1,param_1 + 0xe8,param_3,uVar2);
  }
  return;
}



// FUNCTION 1435cef40 FUN_1435cef40 body=80 status=ok
// SIG undefined FUN_1435cef40(void)

void FUN_1435cef40(longlong param_1)

{
  FUN_1435ce880();
  if (*(char *)(param_1 + 0xb8) != '\0') {
    FUN_1435cc020(param_1);
    return;
  }
  return;
}



// FUNCTION 1435cefa0 FUN_1435cefa0 body=98 status=ok
// SIG undefined FUN_1435cefa0(void)

undefined8 FUN_1435cefa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_4 + 0x28) != 0) {
    puVar1 = (undefined8 *)FUN_1435be2b0();
    if (puVar1 != (undefined8 *)0x0) goto LAB_1435cefef;
  }
  puVar1 = (undefined8 *)FUN_143610010(param_4 + 0x30,param_2,param_3);
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
LAB_1435cefef:
  return *puVar1;
}



// FUNCTION 1435cf010 FUN_1435cf010 body=249 status=ok
// SIG undefined FUN_1435cf010(void)

undefined8 FUN_1435cf010(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong local_res10;
  
  piVar4 = (int *)(**(code **)(*param_2 + 0x20))(param_2,param_3);
  FUN_1435ba8a0(param_2,&local_res10,(longlong)piVar4[2]);
  lVar5 = FUN_1435ba6d0(param_2,(longlong)*piVar4);
  lVar1 = param_2[6];
  lVar2 = *(longlong *)(lVar1 + 0x28);
  if (lVar2 == 0) {
LAB_1435cf086:
    puVar6 = (undefined8 *)FUN_143610010(lVar1 + 0x30,&local_res10,lVar5);
    if ((puVar6 == (undefined8 *)0x0) && (0xc < *(uint *)(*(undefined8 **)(lVar5 + 0x38) + 4))) {
      iVar3 = strncmp((char *)**(undefined8 **)(lVar5 + 0x38),"scaleform.gfx",0xd);
      if (iVar3 == 0) {
        uVar7 = FUN_1435c84e0(param_1,param_2,piVar4);
        goto LAB_1435cf0d7;
      }
    }
  }
  else {
    puVar6 = (undefined8 *)FUN_1435be2b0(lVar2,&local_res10,lVar5);
    if (puVar6 == (undefined8 *)0x0) goto LAB_1435cf086;
  }
  uVar7 = *puVar6;
LAB_1435cf0d7:
  piVar4 = (int *)(local_res10 + 0x18);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    FUN_14335f920();
  }
  return uVar7;
}



// FUNCTION 1435cf110 FUN_1435cf110 body=116 status=ok
// SIG undefined FUN_1435cf110(void)

void FUN_1435cf110(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x98) = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(longlong *)(param_1 + 0x20) + 1;
  if (uVar2 < *(ulonglong *)(param_1 + 0x20)) {
    uVar3 = uVar2;
    if (*(ulonglong *)(param_1 + 0x28) >> 1 <= uVar2) goto LAB_1435cf168;
  }
  else {
    if (uVar2 <= *(ulonglong *)(param_1 + 0x28)) goto LAB_1435cf168;
    uVar3 = (uVar2 >> 2) + uVar2;
  }
  FUN_1436127b0(plVar1,plVar1,uVar3);
LAB_1435cf168:
  *(ulonglong *)(param_1 + 0x20) = uVar2;
  *(longlong *)(*plVar1 + -8 + uVar2 * 8) = param_2;
  return;
}



// FUNCTION 1435cf1c0 FUN_1435cf1c0 body=184 status=ok
// SIG undefined FUN_1435cf1c0(void)

longlong * FUN_1435cf1c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  uVar6 = 0;
  if (*(ulonglong *)(param_1 + 0x20) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x18);
    do {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        pcVar4 = (char *)((*(ulonglong *)(*(longlong *)(lVar3 + 0xa0) + 0x18) & 0xfffffffffffffffc)
                         + 0xc);
        lVar5 = param_3 - (longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[lVar5];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if ((cVar1 == cVar2) && (*(longlong *)(lVar3 + 0x30) == param_4)) {
          lVar3 = (*(longlong **)(param_1 + 0x18))[uVar6];
          *param_2 = lVar3;
          if (lVar3 == 0) {
            return param_2;
          }
          *(uint *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1U & 0x8fffffff;
          return param_2;
        }
      }
      uVar6 = uVar6 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar6 < *(ulonglong *)(param_1 + 0x20));
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1435cf280 FUN_1435cf280 body=195 status=ok
// SIG undefined FUN_1435cf280(void)

ulonglong FUN_1435cf280(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  uVar4 = 0;
  uVar5 = uVar4;
  if (uVar2 != 0) {
    do {
      uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar5 * 8);
      if (uVar3 != 0) {
        *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
        FUN_1436134e0(param_2,param_2,param_2[1] + 1);
        puVar1 = (ulonglong *)(*param_2 + (param_2[1] + -1) * 8);
        if (puVar1 != (ulonglong *)0x0) {
          *puVar1 = uVar3;
          *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
        }
        if (((uVar3 & 1) == 0) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880(uVar3);
        }
        uVar4 = uVar4 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar4;
}



// FUNCTION 1435cf350 FUN_1435cf350 body=81 status=ok
// SIG undefined FUN_1435cf350(void)

void FUN_1435cf350(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x20);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar3 * 8);
      if (lVar2 != 0) {
        FUN_1435be590(*(undefined8 *)(lVar2 + 0x30),lVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



// FUNCTION 1435cf3b0 FUN_1435cf3b0 body=130 status=ok
// SIG undefined FUN_1435cf3b0(void)

void FUN_1435cf3b0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x50))(*(longlong **)(param_1 + 0x48),0x48)
  ;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1435ffd70(lVar2,param_1);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  if (uVar3 != uVar1) {
    if (uVar1 != 0) {
      if ((uVar1 & 1) != 0) {
        *(ulonglong *)(param_1 + 0x50) = uVar1 - 1;
        *(ulonglong *)(param_1 + 0x50) = uVar3;
        return;
      }
      if ((*(uint *)(uVar1 + 8) & 0x3fffff) != 0) {
        *(uint *)(uVar1 + 8) = *(uint *)(uVar1 + 8) - 1;
        FUN_1434ef880();
      }
    }
    *(ulonglong *)(param_1 + 0x50) = uVar3;
  }
  return;
}



// FUNCTION 1435cf440 FUN_1435cf440 body=95 status=ok
// SIG undefined FUN_1435cf440(void)

longlong FUN_1435cf440(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar1 = *(longlong *)(param_1 + 0x108) - 1;
    return *(longlong *)
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x120) + (uVar1 >> 6) * 8) + 0x18 +
              (ulonglong)((uint)uVar1 & 0x3f) * 0xa0) + 0x30);
  }
  if ((DAT_1467d97e8 != '\0') && (*(longlong *)(param_1 + 0x1d0) != 0)) {
    return *(longlong *)(param_1 + 0x1d0);
  }
  return *(longlong *)(param_1 + 0x1c8);
}



// FUNCTION 1435cf560 FUN_1435cf560 body=190 status=ok
// SIG undefined FUN_1435cf560(void)

ulonglong FUN_1435cf560(uint *param_1,uint *param_2)

{
  double dVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = *param_1 >> 3 & 0xf;
  uVar2 = 0;
  if ((((uVar3 == (*param_2 >> 3 & 0xf)) &&
       (uVar2 = *(ulonglong *)(param_2 + 2), *(ulonglong *)(param_1 + 2) == uVar2)) &&
      (((*param_2 ^ *param_1) & 6) == 0)) &&
     (uVar2 = 0, (((byte)*param_2 ^ (byte)*param_1) & 1) == 0)) {
    if (uVar3 - 4 < 6) {
      uVar2 = (ulonglong)(int)(uVar3 - 4);
      switch(uVar3) {
      case 4:
        return (ulonglong)((byte)param_1[4] == (byte)param_2[4]);
      case 5:
        goto switchD_1435cf5bc_caseD_5;
      default:
        return (ulonglong)CONCAT31((int3)(param_2[4] >> 8),param_1[4] == param_2[4]);
      case 8:
      case 9:
        return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 4) >> 8),
                        *(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4));
      }
    }
    goto LAB_1435cf61b;
  }
LAB_1435cf57f:
  return uVar2 & 0xffffffffffffff00;
switchD_1435cf5bc_caseD_5:
  dVar1 = *(double *)(param_1 + 4);
  if (dVar1 == *(double *)(param_2 + 4)) {
    if (dVar1 == 0.0) {
      return (ulonglong)(dVar1 == *(double *)(param_2 + 4));
    }
LAB_1435cf61b:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  goto LAB_1435cf57f;
}



// FUNCTION 1435cf640 FUN_1435cf640 body=38 status=ok
// SIG undefined FUN_1435cf640(void)

ulonglong FUN_1435cf640(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) &&
     (in_RAX = *(ulonglong *)(lVar1 + 0x98),
     *(longlong *)(*(longlong *)(in_RAX + 0x200) + 0xd8) == lVar1)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1435cf730 FUN_1435cf730 body=38 status=ok
// SIG undefined FUN_1435cf730(void)

ulonglong FUN_1435cf730(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) &&
     (in_RAX = *(ulonglong *)(lVar1 + 0x98),
     *(longlong *)(*(longlong *)(in_RAX + 0x240) + 0xd8) == lVar1)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1435cf7c0 FUN_1435cf7c0 body=73 status=ok
// SIG undefined FUN_1435cf7c0(void)

undefined1 FUN_1435cf7c0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if ((*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x98) + 0x220) + 0xd8) != lVar1) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x98) + 0x240) + 0xd8) != lVar1)) {
      cVar2 = FUN_1435cf880();
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1435cf810 FUN_1435cf810 body=106 status=ok
// SIG undefined FUN_1435cf810(void)

undefined8 FUN_1435cf810(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 2);
  if (((lVar1 != 0) &&
      (lVar2 = *(longlong *)(lVar1 + 0x98),
      *(longlong *)(*(longlong *)(lVar2 + 0x220) + 0xd8) != lVar1)) &&
     ((lVar1 == 0 ||
      (((*(longlong *)(*(longlong *)(lVar2 + 0x228) + 0xd8) != lVar1 &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x230) + 0xd8) != lVar1)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x238) + 0xd8) != lVar1)))))) {
    if (((byte)*param_1 & 6) != 2) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1435cf880 FUN_1435cf880 body=70 status=ok
// SIG undefined FUN_1435cf880(void)

ulonglong FUN_1435cf880(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_RAX;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x98);
    in_RAX = *(ulonglong *)(lVar2 + 0x228);
    if (((*(longlong *)(in_RAX + 0xd8) == lVar1) ||
        (in_RAX = *(ulonglong *)(lVar2 + 0x230), *(longlong *)(in_RAX + 0xd8) == lVar1)) ||
       (in_RAX = *(ulonglong *)(lVar2 + 0x238), *(longlong *)(in_RAX + 0xd8) == lVar1)) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1435cf950 FUN_1435cf950 body=124 status=ok
// SIG undefined FUN_1435cf950(void)

void FUN_1435cf950(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if ((~(*(byte *)(plVar1 + 0x11) >> 5) & 1) != 0) {
    if (plVar1[0x15] == 0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0001435cf9af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(plVar1[0x15] + 0x28) + 0x58))
              (*(longlong **)(plVar1[0x15] + 0x28),param_2,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435cf9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}



// FUNCTION 1435cfc60 FUN_1435cfc60 body=793 status=ok
// SIG undefined FUN_1435cfc60(void)

longlong * FUN_1435cfc60(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *local_res10;
  
  param_1[1] = param_3;
  param_1[2] = param_4;
  local_res10 = param_1 + 3;
  *param_1 = param_2;
  param_1[4] = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0xd8);
  *local_res10 = 0x52;
  plVar1 = param_1 + 0x1d;
  param_1[6] = *(longlong *)(*(longlong *)(param_2 + 0x298) + 0xd8);
  param_1[5] = 0;
  param_1[8] = *(longlong *)(*(longlong *)(param_2 + 0x200) + 0xd8);
  param_1[7] = 8;
  param_1[10] = *(longlong *)(*(longlong *)(param_2 + 0x200) + 0xd8);
  param_1[9] = 0x10;
  param_1[0xc] = *(longlong *)(*(longlong *)(param_2 + 0x200) + 0xd8);
  param_1[0xb] = 0x18;
  param_1[0xe] = *(longlong *)(*(longlong *)(param_2 + 0x220) + 0xd8);
  param_1[0xd] = 0x24;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined4 *)((longlong)param_1 + 0x79) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7f) = 0;
  param_1[0x11] = *(longlong *)(*(longlong *)(param_2 + 0x220) + 0xd8);
  param_1[0x10] = 0x24;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x91) = 0;
  *(undefined2 *)((longlong)param_1 + 0x95) = 0;
  *(undefined1 *)((longlong)param_1 + 0x97) = 0;
  param_1[0x14] = *(longlong *)(*(longlong *)(param_2 + 0x220) + 0xd8);
  param_1[0x13] = 0x54;
  param_1[0x16] = *(longlong *)(*(longlong *)(param_2 + 0x228) + 0xd8);
  param_1[0x15] = 0x54;
  param_1[0x18] = *(longlong *)(*(longlong *)(param_2 + 0x230) + 0xd8);
  param_1[0x17] = 0x54;
  param_1[0x1a] = *(longlong *)(*(longlong *)(param_2 + 0x238) + 0xd8);
  param_1[0x19] = 0x54;
  param_1[0x1c] = *(longlong *)(*(longlong *)(param_2 + 0x218) + 0xd8);
  param_1[0x1b] = 0x54;
  param_1[0x1e] = *(longlong *)(param_2 + 0x48);
  *plVar1 = 0;
  param_1[0x20] = *(longlong *)(param_2 + 0x48);
  param_1[0x1f] = 0;
  param_1[0x22] = *(longlong *)(param_2 + 0x48);
  param_1[0x21] = 0;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 5;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 7;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 9;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0xb;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0xd;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0x10;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0x13;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0x15;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0x17;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0x19;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  local_res10 = param_1 + 0x1b;
  FUN_143603c70(plVar1,param_1[0x1e],&local_res10);
  return param_1;
}



// FUNCTION 1435cff80 FUN_1435cff80 body=105 status=ok
// SIG undefined FUN_1435cff80(void)

ulonglong FUN_1435cff80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 0x220);
  if ((((param_2 != *(longlong *)(uVar2 + 0xd8)) &&
       (uVar2 = *(ulonglong *)(lVar1 + 0x298), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
      (uVar2 = *(ulonglong *)(lVar1 + 0x230), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
     (((uVar2 = *(ulonglong *)(lVar1 + 0x238), param_2 != *(longlong *)(uVar2 + 0xd8) &&
       (uVar2 = *(ulonglong *)(lVar1 + 0x228), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
      (uVar2 = *(ulonglong *)(lVar1 + 0x240), param_2 != *(longlong *)(uVar2 + 0xd8))))) {
    return uVar2 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1435cfff0 FUN_1435cfff0 body=57 status=ok
// SIG undefined FUN_1435cfff0(void)

ulonglong FUN_1435cfff0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 0x230);
  if (((param_2 != *(longlong *)(uVar2 + 0xd8)) &&
      (uVar2 = *(ulonglong *)(lVar1 + 0x238), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
     (uVar2 = *(ulonglong *)(lVar1 + 0x228), param_2 != *(longlong *)(uVar2 + 0xd8))) {
    return uVar2 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1435d0030 FUN_1435d0030 body=89 status=ok
// SIG undefined FUN_1435d0030(void)

ulonglong FUN_1435d0030(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 0x220);
  if ((((param_2 != *(longlong *)(uVar2 + 0xd8)) &&
       (uVar2 = *(ulonglong *)(lVar1 + 0x298), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
      (uVar2 = *(ulonglong *)(lVar1 + 0x230), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
     ((uVar2 = *(ulonglong *)(lVar1 + 0x238), param_2 != *(longlong *)(uVar2 + 0xd8) &&
      (uVar2 = *(ulonglong *)(lVar1 + 0x228), param_2 != *(longlong *)(uVar2 + 0xd8))))) {
    return uVar2 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1435d0090 FUN_1435d0090 body=105 status=ok
// SIG undefined FUN_1435d0090(void)

ulonglong FUN_1435d0090(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(lVar1 + 0x230);
  if ((((param_2 != *(longlong *)(uVar2 + 0xd8)) &&
       (uVar2 = *(ulonglong *)(lVar1 + 0x238), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
      (uVar2 = *(ulonglong *)(lVar1 + 0x228), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
     (((uVar2 = *(ulonglong *)(lVar1 + 0x220), param_2 != *(longlong *)(uVar2 + 0xd8) &&
       (uVar2 = *(ulonglong *)(lVar1 + 0x298), param_2 != *(longlong *)(uVar2 + 0xd8))) &&
      (uVar2 = *(ulonglong *)(lVar1 + 0x240), param_2 != *(longlong *)(uVar2 + 0xd8))))) {
    return uVar2 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1435d0280 FUN_1435d0280 body=90 status=ok
// SIG undefined FUN_1435d0280(void)

undefined8 FUN_1435d0280(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *param_1;
  uVar2 = *param_2 & 0x1f;
  if (uVar2 == 5) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x218) + 0xe0);
  }
  if (5 < uVar2) {
    if (7 < uVar2) {
      if (uVar2 == 0xd) {
        return *(undefined8 *)(*(longlong *)(lVar1 + 0x218) + 0xe8);
      }
      if (uVar2 != 0xe) goto LAB_1435d029e;
    }
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x218) + 0xf8);
  }
LAB_1435d029e:
  return *(undefined8 *)(*(longlong *)(lVar1 + 0x218) + 0xd8);
}



// FUNCTION 1435d02e0 FUN_1435d02e0 body=93 status=ok
// SIG undefined FUN_1435d02e0(void)

longlong FUN_1435d02e0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *param_2 & 0x1f;
  if (uVar2 == 0) {
    lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x298) + 0xd8);
  }
  else if ((uVar2 == 8) || (uVar2 == 9)) {
    lVar1 = *(longlong *)(param_2 + 4);
  }
  else {
    lVar1 = FUN_1435caba0(*param_1);
  }
  if ((lVar1 != 0) && (lVar1 == *(longlong *)(*param_1 + 0x200))) {
    lVar1 = *(longlong *)(*param_1 + 0x208);
  }
  return lVar1;
}



// FUNCTION 1435d0350 FUN_1435d0350 body=506 status=ok
// SIG undefined FUN_1435d0350(void)

longlong FUN_1435d0350(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint local_28 [2];
  int *local_20;
  uint local_18;
  uint uStack_14;
  ulonglong uStack_10;
  
  uVar3 = *param_1;
  iVar5 = (*param_3 << 0x15) >> 0x1b;
  if (10 < iVar5) {
    uVar2 = param_3[1];
    if (-1 < (int)uVar2) {
      if (iVar5 != 0xb) {
        lVar7 = FUN_1434ef190(param_2);
        lVar7 = FUN_1435cb7c0(uVar3,(ulonglong)uVar2 * 0x20 + *(longlong *)(lVar7 + 8));
        return lVar7;
      }
      puVar6 = (ulonglong *)FUN_1434ef190(param_2);
      puVar8 = (uint *)((ulonglong)uVar2 * 0x20 + puVar6[1]);
      local_28[0] = *puVar8;
      uVar10 = local_28[0] & 0x1f;
      if (uVar10 == 6) {
        uStack_10 = *puVar6;
        local_28[0] = 7;
        local_20 = (int *)0x0;
        local_18 = uVar2;
      }
      else {
        local_20 = *(int **)(puVar8 + 2);
        local_18 = puVar8[4];
        uStack_14 = puVar8[5];
        uStack_10 = *(ulonglong *)(puVar8 + 6);
        if (9 < uVar10) {
          if ((local_28[0] >> 9 & 1) == 0) {
            if (uVar10 == 10) {
              *(int *)(*(longlong *)(puVar8 + 4) + 0x18) =
                   *(int *)(*(longlong *)(puVar8 + 4) + 0x18) + 1;
            }
            else if (10 < uVar10) {
              if (uVar10 < 0xd) {
                lVar7 = *(longlong *)(puVar8 + 4);
              }
              else {
                if (0xe < uVar10) goto LAB_1435d0433;
                lVar7 = *(longlong *)(puVar8 + 6);
              }
              if (lVar7 != 0) {
                *(uint *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1U & 0x8fffffff;
              }
            }
          }
          else {
            *local_20 = *local_20 + 1;
          }
        }
      }
LAB_1435d0433:
      piVar1 = local_20;
      uVar2 = local_28[0];
      lVar7 = FUN_1435d0280(param_1,local_28);
      uVar10 = uVar2 & 0x1f;
      if (uVar10 < 10) {
        return lVar7;
      }
      if ((uVar2 >> 9 & 1) != 0) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return lVar7;
        }
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar1);
        return lVar7;
      }
      if (uVar10 == 10) {
        piVar1 = (int *)(CONCAT44(uStack_14,local_18) + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return lVar7;
        }
        FUN_14335f920();
        return lVar7;
      }
      if ((uVar10 == 0xb) || (uVar10 == 0xc)) {
        if ((local_18 & 1) != 0) {
          return lVar7;
        }
        uVar9 = CONCAT44(uStack_14,local_18);
      }
      else {
        if (1 < uVar10 - 0xd) {
          return lVar7;
        }
        uVar9 = uStack_10;
        if ((uStack_10 & 1) != 0) {
          return lVar7;
        }
      }
      if (uVar9 == 0) {
        return lVar7;
      }
      if ((*(uint *)(uVar9 + 8) & 0x3fffff) == 0) {
        return lVar7;
      }
      *(uint *)(uVar9 + 8) = *(uint *)(uVar9 + 8) - 1;
      FUN_1434ef880();
      return lVar7;
    }
  }
  lVar7 = FUN_1435adda0(param_3,uVar3);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    cVar4 = FUN_1435ab780(param_3);
    if ((cVar4 == '\0') && (cVar4 = FUN_1435ae060(param_3), cVar4 == '\0')) {
      lVar7 = *(longlong *)(lVar7 + 0xd8);
    }
  }
  return lVar7;
}



// FUNCTION 1435d0550 FUN_1435d0550 body=174 status=ok
// SIG undefined FUN_1435d0550(void)

undefined8 * FUN_1435d0550(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *local_res8;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0xe8);
  local_18 = 0x52;
  local_10 = param_2;
  lVar2 = FUN_143609aa0(plVar1,&local_18);
  if ((lVar2 < 0) ||
     (puVar3 = (undefined8 *)(*plVar1 + lVar2 * 0x18 + 0x20), puVar3 == (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)*puVar3;
  }
  if (puVar3 == (undefined8 *)0x0) {
    local_res8 = (undefined8 *)
                 FUN_1435ba1a0(*(undefined1 **)(param_1 + 0x10),0x10,
                               **(undefined1 **)(param_1 + 0x10));
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      *local_res8 = 0x52;
      local_res8[1] = param_2;
    }
    puVar3 = local_res8;
    FUN_143603c70(plVar1,*(undefined8 *)(param_1 + 0xf0),&local_res8);
  }
  return puVar3;
}



// FUNCTION 1435d0610 FUN_1435d0610 body=232 status=ok
// SIG undefined FUN_1435d0610(void)

undefined8 * FUN_1435d0610(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *local_res8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0x2c;
  local_30 = *(undefined8 *)(*(longlong *)(*param_1 + 0x228) + 0xd8);
  local_28 = param_2;
  lVar1 = FUN_143609aa0(param_1 + 0x1d,&local_38);
  if ((lVar1 < 0) ||
     (puVar2 = (undefined8 *)(param_1[0x1d] + lVar1 * 0x18 + 0x20), puVar2 == (undefined8 *)0x0)) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)*puVar2;
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_1435ba1a0((undefined1 *)param_1[2],0x18,*(undefined1 *)param_1[2]);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[1] = *(undefined8 *)(*(longlong *)(*param_1 + 0x228) + 0xd8);
      puVar2[2] = param_2;
      *puVar2 = 0x2c;
    }
    local_res8 = puVar2;
    FUN_143603c70(param_1 + 0x1d,param_1[0x1e],&local_res8);
  }
  return puVar2;
}



// FUNCTION 1435d0700 FUN_1435d0700 body=237 status=ok
// SIG undefined FUN_1435d0700(void)

undefined8 * FUN_1435d0700(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar4 = (undefined8 *)0x0;
  local_38 = 0x34;
  local_24 = 0;
  local_30 = *(undefined8 *)(*(longlong *)(*param_1 + 0x230) + 0xd8);
  local_28 = param_2;
  lVar1 = FUN_143609aa0(param_1 + 0x1d,&local_38);
  puVar3 = puVar4;
  if ((-1 < lVar1) &&
     (puVar2 = (undefined8 *)(param_1[0x1d] + lVar1 * 0x18 + 0x20), puVar2 != (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)*puVar2;
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_1435ba1a0((undefined1 *)param_1[2],0x18,*(undefined1 *)param_1[2]);
    puVar3 = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = *(undefined8 *)(*(longlong *)(*param_1 + 0x230) + 0xd8);
      *puVar2 = 0x34;
      *(undefined4 *)(puVar2 + 2) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      puVar3 = puVar2;
    }
    local_res8 = puVar3;
    FUN_143603c70(param_1 + 0x1d,param_1[0x1e],&local_res8);
  }
  return puVar3;
}



// FUNCTION 1435d0800 FUN_1435d0800 body=237 status=ok
// SIG undefined FUN_1435d0800(void)

undefined8 * FUN_1435d0800(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar4 = (undefined8 *)0x0;
  local_38 = 0x3c;
  local_24 = 0;
  local_30 = *(undefined8 *)(*(longlong *)(*param_1 + 0x238) + 0xd8);
  local_28 = param_2;
  lVar1 = FUN_143609aa0(param_1 + 0x1d,&local_38);
  puVar3 = puVar4;
  if ((-1 < lVar1) &&
     (puVar2 = (undefined8 *)(param_1[0x1d] + lVar1 * 0x18 + 0x20), puVar2 != (undefined8 *)0x0)) {
    puVar3 = (undefined8 *)*puVar2;
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_1435ba1a0((undefined1 *)param_1[2],0x18,*(undefined1 *)param_1[2]);
    puVar3 = puVar4;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = *(undefined8 *)(*(longlong *)(*param_1 + 0x238) + 0xd8);
      *puVar2 = 0x3c;
      *(undefined4 *)(puVar2 + 2) = param_2;
      *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      puVar3 = puVar2;
    }
    local_res8 = puVar3;
    FUN_143603c70(param_1 + 0x1d,param_1[0x1e],&local_res8);
  }
  return puVar3;
}



// FUNCTION 1435d0900 FUN_1435d0900 body=305 status=ok
// SIG undefined FUN_1435d0900(void)

undefined8 * FUN_1435d0900(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *local_res8;
  longlong local_res10;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  lVar3 = *param_1;
  lVar5 = *(longlong *)(lVar3 + 0x240);
  local_res10 = param_2;
  if (param_2 == 0) {
    puVar4 = (undefined8 *)FUN_1435d0550(param_1,*(undefined8 *)(lVar5 + 0xd8));
    return puVar4;
  }
  local_30 = *(undefined8 *)(lVar5 + 0xd8);
  local_38 = 0x44;
  local_28 = param_2;
  lVar5 = FUN_143609aa0(param_1 + 0x1d,&local_38);
  if ((lVar5 < 0) ||
     (puVar4 = (undefined8 *)(param_1[0x1d] + lVar5 * 0x18 + 0x20), puVar4 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_1435ba1a0((undefined1 *)param_1[2],0x18,*(undefined1 *)param_1[2]);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar3 + 0x240) + 0xd8);
      *puVar4 = 0x44;
      puVar4[2] = param_2;
    }
    local_res8 = puVar4;
    FUN_143603c70(param_1 + 0x1d,param_1[0x1e],&local_res8);
    lVar3 = param_1[0x20];
    *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    piVar1 = (int *)(param_2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(param_2);
    }
    FUN_1436055d0(param_1 + 0x1f,lVar3,&local_res10,uVar2);
  }
  return puVar4;
}



// FUNCTION 1435d0a40 FUN_1435d0a40 body=293 status=ok
// SIG undefined FUN_1435d0a40(void)

undefined8 * FUN_1435d0a40(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  lVar3 = *param_1;
  local_38 = 0x44;
  local_30 = *(undefined8 *)(*(longlong *)(lVar3 + 0x240) + 0xd8);
  local_28 = *param_2;
  lVar4 = FUN_143609aa0(param_1 + 0x1d,&local_38);
  if ((lVar4 < 0) ||
     (puVar5 = (undefined8 *)(param_1[0x1d] + lVar4 * 0x18 + 0x20), puVar5 == (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)*puVar5;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_1435ba1a0((undefined1 *)param_1[2],0x18,*(undefined1 *)param_1[2]);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      lVar4 = *param_2;
      puVar5[1] = *(undefined8 *)(*(longlong *)(lVar3 + 0x240) + 0xd8);
      *puVar5 = 0x44;
      puVar5[2] = lVar4;
    }
    local_res8 = puVar5;
    FUN_143603c70(param_1 + 0x1d,param_1[0x1e],&local_res8);
    local_res8 = (undefined8 *)*param_2;
    lVar3 = param_1[0x20];
    if (local_res8 != (undefined8 *)0x0) {
      *(int *)(local_res8 + 3) = *(int *)(local_res8 + 3) + 1;
    }
    piVar1 = (int *)(local_res8 + 3);
    *piVar1 = *piVar1 + -1;
    uVar2 = *(undefined4 *)((longlong)local_res8 + 0x1c);
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    FUN_1436055d0(param_1 + 0x1f,lVar3,&local_res8,uVar2);
  }
  return puVar5;
}



// FUNCTION 1435d0b70 FUN_1435d0b70 body=216 status=ok
// SIG undefined FUN_1435d0b70(void)

undefined8 * FUN_1435d0b70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  lVar2 = *param_1;
  plVar1 = param_1 + 0x1d;
  local_28 = 0x4c;
  local_20 = *(undefined8 *)(*(longlong *)(lVar2 + 0x210) + 0xd8);
  local_18 = param_2 + 2;
  lVar3 = FUN_143609aa0(plVar1,&local_28);
  if ((lVar3 < 0) ||
     (puVar4 = (undefined8 *)(*plVar1 + lVar3 * 0x18 + 0x20), puVar4 == (undefined8 *)0x0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)*puVar4;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_1435ba1a0((undefined1 *)param_1[2],0x18,*(undefined1 *)param_1[2]);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4[1] = *(undefined8 *)(*(longlong *)(lVar2 + 0x210) + 0xd8);
      *puVar4 = 0x4c;
      puVar4[2] = param_2 + 2;
    }
    local_res8 = puVar4;
    FUN_143603c70(plVar1,param_1[0x1e],&local_res8);
  }
  return puVar4;
}



// FUNCTION 1435d0c50 FUN_1435d0c50 body=294 status=ok
// SIG undefined FUN_1435d0c50(void)

undefined4 * FUN_1435d0c50(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  longlong local_18;
  
  local_18 = 0;
  local_28 = 0x4c;
  uStack_20 = *(undefined8 *)(*(longlong *)(param_2 + 4) + 0x28);
  if (((byte)*param_2 & 0x1f) == 0xb) {
    local_18 = 2;
  }
  local_18 = local_18 + *(longlong *)(param_2 + 4);
  lVar1 = FUN_143609aa0(param_1 + 0x1d,&local_28);
  if ((lVar1 < 0) ||
     (plVar2 = (longlong *)(param_1[0x1d] + lVar1 * 0x18 + 0x20), plVar2 == (longlong *)0x0)) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*plVar2;
  }
  if (puVar3 == (undefined4 *)0x0) {
    local_res8 = (undefined4 *)
                 FUN_1435ba1a0((undefined1 *)param_1[2],0x18,*(undefined1 *)param_1[2]);
    if (local_res8 == (undefined4 *)0x0) {
      local_res8 = (undefined4 *)0x0;
    }
    else {
      *local_res8 = (undefined4)local_28;
      local_res8[1] = local_28._4_4_;
      local_res8[2] = (undefined4)uStack_20;
      local_res8[3] = uStack_20._4_4_;
      *(longlong *)(local_res8 + 4) = local_18;
    }
    puVar3 = local_res8;
    FUN_143603c70(param_1 + 0x1d,param_1[0x1e],&local_res8);
    if ((((byte)*param_2 & 0x1f) == 0xc) &&
       (local_res8 = *(undefined4 **)(param_2 + 4), local_res8 != *(undefined4 **)(*param_1 + 0x2c0)
       )) {
      FUN_1436047c0(param_1 + 0x21,param_1[0x22],&local_res8);
    }
  }
  return puVar3;
}



// FUNCTION 1435d0db0 FUN_1435d0db0 body=186 status=ok
// SIG undefined FUN_1435d0db0(void)

uint * FUN_1435d0db0(longlong param_1,undefined8 param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *local_res8;
  uint local_18;
  uint uStack_14;
  undefined8 uStack_10;
  
  uStack_14 = 0;
  plVar1 = (longlong *)(param_1 + 0xe8);
  local_18 = (param_3 & 3 | 0x28) * 2 ^ param_4 & 1;
  uStack_10 = param_2;
  lVar2 = FUN_143609aa0(plVar1,&local_18);
  if ((lVar2 < 0) ||
     (plVar3 = (longlong *)(*plVar1 + lVar2 * 0x18 + 0x20), plVar3 == (longlong *)0x0)) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)*plVar3;
  }
  if (puVar4 == (uint *)0x0) {
    local_res8 = (uint *)FUN_1435ba1a0(*(undefined1 **)(param_1 + 0x10),0x10,
                                       **(undefined1 **)(param_1 + 0x10));
    if (local_res8 == (uint *)0x0) {
      local_res8 = (uint *)0x0;
    }
    else {
      *local_res8 = local_18;
      local_res8[1] = uStack_14;
      local_res8[2] = (uint)uStack_10;
      local_res8[3] = uStack_10._4_4_;
    }
    puVar4 = local_res8;
    FUN_143603c70(plVar1,*(undefined8 *)(param_1 + 0xf0),&local_res8);
  }
  return puVar4;
}



// FUNCTION 1435d0e70 FUN_1435d0e70 body=207 status=ok
// SIG undefined FUN_1435d0e70(void)

longlong FUN_1435d0e70(longlong param_1,uint *param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  switch(*param_2 & 0x1f) {
  case 0:
    return param_1 + 0x38;
  case 1:
    lVar1 = 0x80;
    if ((char)param_2[4] != '\0') {
      lVar1 = 0x68;
    }
    return lVar1 + param_1;
  case 2:
    lVar1 = FUN_1435d0700(param_1,param_2[4]);
    return lVar1;
  case 3:
    lVar1 = FUN_1435d0800(param_1,param_2[4]);
    return lVar1;
  case 4:
    lVar1 = FUN_1435d0610(param_1,*(undefined8 *)(param_2 + 4));
    return lVar1;
  case 8:
  case 9:
    lVar1 = FUN_1436107c0(param_1,*(undefined8 *)(param_2 + 4),0);
    return lVar1;
  case 10:
    lVar1 = FUN_1435d0900(param_1,*(undefined8 *)(param_2 + 4));
    return lVar1;
  case 0xb:
    lVar1 = FUN_1435d0b70(param_1,*(undefined8 *)(param_2 + 4));
    return lVar1;
  case 0xc:
  case 0xd:
  case 0xe:
    lVar1 = FUN_1435d0c50();
  }
  return lVar1;
}



// FUNCTION 1435d0f90 FUN_1435d0f90 body=190 status=ok
// SIG undefined FUN_1435d0f90(void)

uint * FUN_1435d0f90(longlong param_1,uint *param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *local_res8;
  uint local_18;
  uint uStack_14;
  undefined8 uStack_10;
  
  uStack_10 = *(undefined8 *)(param_2 + 2);
  plVar1 = (longlong *)(param_1 + 0xe8);
  uStack_14 = 0;
  local_18 = (*param_2 & 6 | 0x50) ^ param_3 & 1;
  lVar2 = FUN_143609aa0(plVar1,&local_18);
  if ((lVar2 < 0) ||
     (plVar3 = (longlong *)(*plVar1 + lVar2 * 0x18 + 0x20), plVar3 == (longlong *)0x0)) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)*plVar3;
  }
  if (puVar4 == (uint *)0x0) {
    local_res8 = (uint *)FUN_1435ba1a0(*(undefined1 **)(param_1 + 0x10),0x10,
                                       **(undefined1 **)(param_1 + 0x10));
    if (local_res8 == (uint *)0x0) {
      local_res8 = (uint *)0x0;
    }
    else {
      *local_res8 = local_18;
      local_res8[1] = uStack_14;
      local_res8[2] = (uint)uStack_10;
      local_res8[3] = uStack_10._4_4_;
    }
    puVar4 = local_res8;
    FUN_143603c70(plVar1,*(undefined8 *)(param_1 + 0xf0),&local_res8);
  }
  return puVar4;
}



// FUNCTION 1435d10b0 FUN_1435d10b0 body=59 status=ok
// SIG undefined FUN_1435d10b0(void)

void FUN_1435d10b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar3 = (ulonglong)(*(int *)(param_1 + 0x10) - 1);
  uVar2 = *(undefined8 *)(lVar1 + uVar3 * 8);
  *(undefined8 *)(lVar1 + uVar3 * 8) =
       *(undefined8 *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x10) - 2) * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x10) - 2) * 8) =
       uVar2;
  return;
}



// FUNCTION 1435d1120 FUN_1435d1120 body=875 status=ok
// SIG undefined FUN_1435d1120(void)

undefined8 * FUN_1435d1120(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong local_res8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_48 [2];
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_145b4ad90;
  puVar1 = param_1 + 0x24;
  param_1[2] = param_2;
  puVar2 = param_1 + 0x1f;
  param_1[3] = param_3;
  param_1[5] = 0;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_2;
  *puVar2 = puVar2;
  param_1[0x20] = puVar2;
  uVar4 = Scaleform::Alg::RoundUpToPowerOfTwo(0x10);
  *(undefined1 *)puVar1 = uVar4;
  param_1[0x25] = param_2;
  puVar2 = param_1 + 0x27;
  *(undefined1 *)((longlong)param_1 + 0x121) = 0x20;
  param_1[0x26] = 0;
  *puVar2 = puVar2;
  param_1[0x28] = puVar2;
  FUN_1435cfc60(param_1 + 0x29,*(undefined8 *)(*(longlong *)(param_3 + 0x18) + 0x28),
                *(longlong *)(param_3 + 0x18),puVar1);
  param_1[0x4c] = *(undefined8 *)(*(longlong *)(param_1[3] + 0x18) + 0x28);
  param_1[0x4d] = puVar1;
  param_1[0x4e] = param_1 + 0x29;
  param_1[0x4f] = 0;
  uVar7 = FUN_143597560(param_1 + 0x4c,0,0,0,0);
  param_1[0x50] = uVar7;
  puVar2 = param_1 + 0x54;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *puVar2 = puVar2;
  param_1[0x55] = puVar2;
  puVar2 = param_1 + 0x58;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *puVar2 = puVar2;
  param_1[0x59] = puVar2;
  puVar2 = param_1 + 0x5c;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *puVar2 = puVar2;
  param_1[0x5d] = puVar2;
  lVar3 = *(longlong *)(*(longlong *)(param_1[3] + 0x18) + 0x28);
  if (((*(longlong *)(param_4 + 0x40) != 0) &&
      ((*(ulonglong *)(param_4 + 0x48) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(param_4 + 0x48) != 0)) {
    if (*(longlong *)(param_4 + 0x38) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(param_4 + 0x38) = 0;
    }
    *(undefined8 *)(param_4 + 0x48) = 0;
  }
  *(undefined8 *)(param_4 + 0x40) = 0;
  lVar3 = *(longlong *)(lVar3 + 0x108);
  param_1[10] = lVar3;
  if (lVar3 != 0) {
    param_1[10] = lVar3 + -1;
  }
  local_res8 = *(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 0xa0) + 0x90) +
                (ulonglong)*(uint *)(param_3 + 0x20) * 8);
  Scaleform::GFx::AS3::Abc::Read(&local_res8,param_1 + 0x21);
  uVar5 = FUN_14358f8b0(&local_res8);
  local_58 = (undefined4)local_res8;
  uStack_54 = (undefined4)((ulonglong)local_res8 >> 0x20);
  param_1[9] = local_res8;
  local_res8 = local_res8 + (ulonglong)uVar5;
  *(uint *)(param_1 + 0x1e) = uVar5;
  *(undefined4 *)(param_1 + 7) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_54;
  *(uint *)(param_1 + 8) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  uVar6 = FUN_14358f8b0(&local_res8);
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar6;
  param_1[0xb] = local_res8;
  *(undefined4 *)(param_1[4] + 0x14) = *(undefined4 *)(param_1 + 0x22);
  *(undefined4 *)(param_1[4] + 0x18) = *(undefined4 *)(param_1 + 0x23);
  local_res8 = *(longlong *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 0xa0) + 0x30) +
                (ulonglong)*(uint *)(param_1 + 0x21) * 8);
  local_3c = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_14361cce0(&local_res8,local_48);
  *(undefined4 *)(param_1[4] + 0x1c) = local_48[0];
  *(undefined1 *)(param_1[4] + 0x2c) = local_40;
  lVar3 = param_1[4];
  if (((*(longlong *)(lVar3 + 0x40) != 0) &&
      ((*(ulonglong *)(lVar3 + 0x48) & 0xfffffffffffffffe) != 0)) &&
     (*(ulonglong *)(lVar3 + 0x48) != 0)) {
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
      *(undefined8 *)(lVar3 + 0x38) = 0;
    }
    *(undefined8 *)(lVar3 + 0x48) = 0;
  }
  *(undefined8 *)(lVar3 + 0x40) = 0;
  return param_1;
}



// FUNCTION 1435d14a0 FUN_1435d14a0 body=188 status=ok
// SIG undefined FUN_1435d14a0(void)

void FUN_1435d14a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_145b4ad90;
  FUN_14360bfd0(param_1 + 0x29);
  puVar1 = param_1 + 0x27;
  param_1[0x26] = 0;
  puVar3 = (undefined8 *)param_1[0x28];
  while (puVar3 != puVar1) {
    puVar2 = (undefined8 *)puVar3[1];
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar3);
    puVar3 = puVar2;
  }
  *puVar1 = puVar1;
  param_1[0x28] = puVar1;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x1a]);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x16]);
                    /* WARNING: Could not recover jumptable at 0x0001435d1558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x12]);
  return;
}



// FUNCTION 1435d1570 FUN_1435d1570 body=1088 status=ok
// SIG undefined FUN_1435d1570(void)

void FUN_1435d1570(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 local_res8 [8];
  undefined8 local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined1 *local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong lStack_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong lStack_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined4 local_168 [2];
  undefined4 *local_160;
  undefined1 local_158 [208];
  undefined1 *local_88;
  undefined1 *local_80;
  
  if ((*(char *)(param_1 + 8) == '\0') &&
     (pcVar7 = (char *)FUN_1435d2050(param_1,local_res8), *pcVar7 != '\0')) {
    FUN_1435d2b40(param_1);
    FUN_1435d30d0(param_1);
    uVar10 = 0;
    local_1e8 = 0xffffffffffffffff;
    lStack_1e0 = 0xffffffffffffffff;
    local_1d8 = 0;
    local_188 = &local_1e8;
    local_1d0 = 0;
    local_180 = &local_1e8;
    local_1c8 = (undefined1 *)0x0;
    local_1c0 = 0;
    local_1b8 = 0;
    lStack_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    lStack_190 = 0;
    FUN_1435ff5d0(*(undefined8 *)(param_1 + 0x100),&local_1e8);
    puVar8 = local_180;
    if (local_180 != &local_1e8) {
      do {
        pcVar7 = (char *)FUN_1435a1360(puVar8,local_res8);
        if (*pcVar7 == '\0') break;
        plVar2 = puVar8 + 0xd;
        puVar8 = (undefined8 *)*plVar2;
      } while ((undefined8 *)*plVar2 != &local_1e8);
    }
    if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) + 0xb8)
        == '\0') {
      puVar8 = local_180;
      if (local_180 != &local_1e8) {
        do {
          FUN_1435a1f00(puVar8);
          puVar8 = (undefined8 *)puVar8[0xd];
        } while (puVar8 != &local_1e8);
      }
      FUN_14360a350(local_158);
      local_88 = local_158;
      local_80 = local_158;
      FUN_1435ff6a0(*(undefined8 *)(param_1 + 0x278),local_158);
      lVar4 = *(longlong *)(param_1 + 0x288);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) == lVar4 + 0x10)) {
        lVar4 = *(longlong *)(param_1 + 0x20);
        if ((*(byte *)(lVar4 + 0x2c) & 4) == 0) {
          if ((*(byte *)(lVar4 + 0x2c) & 1) != 0) {
            *(byte *)(lVar4 + 0x2c) = *(byte *)(lVar4 + 0x2c) & 0xfe;
          }
        }
        else {
          *(byte *)(lVar4 + 0x2c) = *(byte *)(lVar4 + 0x2c) & 0xfb;
        }
      }
      if (DAT_146b7a930 == 0x7ffffff) {
        local_160 = local_168;
        local_168[0] = 0;
        uVar3 = *(uint *)(*(longlong *)(param_1 + 0x278) + 0x10);
        if ((uVar3 & 0xffffffe0) != 0) {
          *(uint *)(*(longlong *)(param_1 + 0x278) + 0x10) = uVar3 & 0x1f;
          FUN_143616bf0(&local_160);
        }
      }
      DAT_146b7a930 = DAT_146b7a930 + 1;
      local_1d8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
      local_1d0 = *(longlong *)(param_1 + 0x20);
      local_1e8 = CONCAT44(local_1e8._4_4_,DAT_146b7a930);
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(local_1d8 + 0x28) + 0x10) + 0x218);
      local_1c0 = lVar4 + 0x48;
      piVar1 = (int *)(lVar4 + 0x60);
      *piVar1 = *piVar1 + 1;
      local_1b8 = local_1b8 & 0xffffffff00000000;
      local_198 = *(undefined8 *)(*(longlong *)(local_1d8 + 0x28) + 0x48);
      lStack_1b0 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_178 = *(undefined8 *)(*(longlong *)(local_1d8 + 0x28) + 0x48);
      lStack_190 = 0;
      local_188 = (undefined8 *)0x0;
      local_180 = (undefined8 *)0x0;
      puVar9 = local_80;
      lStack_1e0 = param_1;
      if (local_80 != local_158) {
        do {
          if ((*(uint *)(puVar9 + 0x10) >> 5 != (uint)local_1e8) &&
             (*(uint *)(puVar9 + 0x10) = (uint)local_1e8 << 5 | *(uint *)(puVar9 + 0x10) & 0x1f,
             *(undefined1 **)(lStack_1e0 + 0x280) != puVar9)) {
            *(undefined4 *)(puVar9 + 0x28) = *(undefined4 *)(local_1d0 + 0x40);
            if (*(int *)(puVar9 + 0x34) == 0) {
              for (puVar5 = *(undefined1 **)(puVar9 + 200); puVar5 != puVar9 + 0x50;
                  puVar5 = *(undefined1 **)(puVar5 + 0x78)) {
                *(undefined4 *)(puVar9 + 0x34) = *(undefined4 *)(puVar5 + 0x1c);
              }
            }
            local_1c8 = puVar9;
            for (puVar5 = *(undefined1 **)(puVar9 + 0x48); puVar5 != puVar9 + 0x40;
                puVar5 = *(undefined1 **)(puVar5 + 8)) {
              FUN_1436038f0(&local_1e8,puVar5);
            }
            *(undefined4 *)(puVar9 + 0x2c) = *(undefined4 *)(local_1d0 + 0x40);
          }
          plVar2 = (longlong *)(puVar9 + 0xd8);
          puVar9 = (undefined1 *)*plVar2;
        } while ((undefined1 *)*plVar2 != local_158);
      }
      local_1c8 = (undefined1 *)0x0;
      if (local_1a8 != 0) {
        do {
          lVar6 = *(longlong *)(lStack_1b0 + uVar10 * 8);
          plVar2 = (longlong *)(*(longlong *)(local_1d0 + 0x38) + lVar6 * 8);
          lVar4 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          *plVar2 = ((longlong)*(int *)(lStack_190 + lVar4) + (ulonglong)*(uint *)(*plVar2 + 0x28))
                    - lVar6;
        } while (uVar10 < local_1a8);
      }
      FUN_1435d6ea0(&local_1e8,local_158);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lStack_190);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,lStack_1b0);
      piVar1 = (int *)(local_1c0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x2e) = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (((*(longlong *)(lVar4 + 0x40) != 0) &&
          ((*(ulonglong *)(lVar4 + 0x48) & 0xfffffffffffffffe) != 0)) &&
         (*(ulonglong *)(lVar4 + 0x48) != 0)) {
        if (*(longlong *)(lVar4 + 0x38) != 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
          *(undefined8 *)(lVar4 + 0x38) = 0;
        }
        *(undefined8 *)(lVar4 + 0x48) = 0;
      }
      *(undefined8 *)(lVar4 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 1435d19c0 FUN_1435d19c0 body=264 status=ok
// SIG undefined FUN_1435d19c0(void)

undefined8 * FUN_1435d19c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  undefined4 *local_18;
  undefined8 *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x20);
  local_res10[0] = param_2;
  lVar2 = FUN_143315540(lVar6 + 0x30,local_res10);
  puVar7 = (undefined8 *)0x0;
  puVar3 = puVar7;
  if (-1 < lVar2) {
    puVar3 = (undefined8 *)((lVar2 + 1) * 0x20 + *(longlong *)(lVar6 + 0x30));
  }
  puVar4 = puVar3 + 1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = puVar7;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0xa8);
    puVar3 = (undefined8 *)FUN_1435ba1a0(puVar5,0x18,*puVar5);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar7 = puVar3;
    }
    local_18 = local_res10;
    lVar6 = *(longlong *)(param_1 + 0x20) + 0x30;
    local_10 = &local_res8;
    lVar2 = 0x1505;
    lVar8 = 4;
    do {
      lVar1 = lVar8 + -1;
      lVar8 = lVar8 + -1;
      lVar2 = lVar2 * 0x1003f + (ulonglong)*(byte *)((longlong)local_res10 + lVar1);
    } while (lVar8 != 0);
    local_res8 = puVar7;
    FUN_143607990(lVar6,lVar6,&local_18,lVar2);
    return puVar7;
  }
  return (undefined8 *)*puVar4;
}



// FUNCTION 1435d1ad0 FUN_1435d1ad0 body=185 status=ok
// SIG undefined FUN_1435d1ad0(void)

undefined8 FUN_1435d1ad0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined4 local_res10 [2];
  undefined4 *local_18;
  undefined8 *local_10;
  
  plVar5 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x30);
  local_res10[0] = param_2;
  lVar2 = FUN_143315540(plVar5,local_res10);
  puVar3 = (undefined8 *)0x0;
  if (-1 < lVar2) {
    puVar3 = (undefined8 *)((lVar2 + 1) * 0x20 + *plVar5);
  }
  puVar4 = puVar3 + 1;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (puVar4 == (undefined8 *)0x0) {
    local_18 = local_res10;
    local_res8 = 0;
    lVar2 = 4;
    local_10 = &local_res8;
    lVar6 = 0x1505;
    do {
      lVar1 = lVar2 + -1;
      lVar2 = lVar2 + -1;
      lVar6 = (ulonglong)*(byte *)((longlong)local_res10 + lVar1) + lVar6 * 0x1003f;
    } while (lVar2 != 0);
    FUN_143607990(plVar5,plVar5,&local_18,lVar6);
    return 0;
  }
  return *puVar4;
}



// FUNCTION 1435d1c20 FUN_1435d1c20 body=528 status=ok
// SIG undefined FUN_1435d1c20(void)

byte FUN_1435d1c20(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong local_res10;
  
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  iVar8 = 1;
  local_res10 = param_2;
  if (uVar3 <= param_2) {
    return 2;
  }
  do {
    lVar4 = *(longlong *)(param_1 + 0x48);
    bVar2 = *(byte *)(lVar4 + local_res10);
    uVar7 = (ulonglong)bVar2;
    local_res10 = local_res10 + 1;
    if (bVar2 == 0x10) {
      iVar5 = FUN_14358f6d0(lVar4,&local_res10);
      local_res10 = local_res10 + (longlong)iVar5;
    }
    else {
      lVar1 = uVar7 * 2;
      iVar8 = iVar8 - (uint)((byte)(&DAT_145b4a350)[uVar7 * 2] >> 6);
      if (((&DAT_145b4a351)[lVar1] & 8) != 0) {
        iVar5 = FUN_14358f710(lVar4,&local_res10);
        switch(*(undefined4 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0xa0) + 0x148
                  ) + 0xc + (longlong)iVar5 * 0x10)) {
        case 1:
        case 6:
        case 9:
        case 0xe:
          iVar8 = iVar8 + -1;
          break;
        case 5:
        case 0xd:
          iVar8 = iVar8 + -2;
        }
      }
      if (((&DAT_145b4a351)[lVar1] & 4) != 0) {
        iVar5 = FUN_14358f710(*(undefined8 *)(param_1 + 0x48),&local_res10);
        if (bVar2 == 0x55) {
          iVar8 = iVar8 + iVar5 * -2;
        }
        else {
          iVar8 = iVar8 - iVar5;
        }
      }
      if (iVar8 < 1) {
        return bVar2;
      }
      iVar8 = iVar8 + ((byte)(&DAT_145b4a351)[uVar7 * 2] & 3);
      if ((((byte)(&DAT_145b4a351)[lVar1] >> 1 | (&DAT_145b4a351)[lVar1]) & 4) == 0) {
        if (bVar2 < 0xc) {
LAB_1435d1dc4:
          cVar6 = (char)((&DAT_145b4a350)[uVar7 * 2] << 4) >> 4;
          if (cVar6 != '\x01') {
            if (cVar6 != '\x02') goto LAB_1435d1dfa;
            FUN_14358f710(*(undefined8 *)(param_1 + 0x48),&local_res10);
          }
LAB_1435d1ded:
          FUN_14358f710(*(undefined8 *)(param_1 + 0x48),&local_res10);
        }
        else if (bVar2 < 0x1b) {
          FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res10);
        }
        else if (bVar2 == 0x1b) {
          FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res10);
          iVar5 = FUN_14358f710(*(undefined8 *)(param_1 + 0x48),&local_res10);
          if (-1 < iVar5) {
            uVar7 = (ulonglong)(iVar5 + 1);
            do {
              FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res10);
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
        }
        else {
          if (bVar2 != 0x24) {
            if (bVar2 != 0xef) goto LAB_1435d1dc4;
            local_res10 = local_res10 + 1;
            FUN_14358f710(*(undefined8 *)(param_1 + 0x48),&local_res10);
            local_res10 = local_res10 + 1;
            goto LAB_1435d1ded;
          }
          local_res10 = local_res10 + 1;
        }
      }
    }
LAB_1435d1dfa:
    if (uVar3 <= local_res10) {
      return bVar2;
    }
  } while( true );
}



// FUNCTION 1435d1ef0 FUN_1435d1ef0 body=84 status=ok
// SIG undefined FUN_1435d1ef0(void)

void FUN_1435d1ef0(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = ((ulonglong)param_2 - 1) + (ulonglong)*(uint *)(param_1 + 0x70);
  if (((longlong)uVar2 < 0) || (uVar2 < *(ulonglong *)(param_1 + 0x28))) {
    lVar1 = FUN_1434ef150(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38) + 0x10 +
            ((uVar2 & 0xffffffff) - *(ulonglong *)(param_1 + 0x28)) * 0x40;
  }
  FUN_1435adda0(lVar1,*(undefined8 *)(param_1 + 0x98));
  return;
}



// FUNCTION 1435d1f50 FUN_1435d1f50 body=242 status=ok
// SIG undefined FUN_1435d1f50(void)

undefined8 * FUN_1435d1f50(longlong param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(ulonglong *)(param_1 + 0x40) <= param_2) {
    return (undefined8 *)0x0;
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x100); puVar3 != (undefined8 *)(param_1 + 0xf8);
      puVar3 = (undefined8 *)puVar3[1]) {
    if (param_2 == puVar3[8]) goto LAB_1435d1fad;
    if (param_2 < (ulonglong)puVar3[8]) break;
  }
  puVar3 = (undefined8 *)*puVar3;
LAB_1435d1fad:
  if ((puVar3 == (undefined8 *)0x0) || (puVar3[8] != param_2)) {
    lVar1 = FUN_1435ba1a0((undefined1 *)(param_1 + 0x120),0x70,*(undefined1 *)(param_1 + 0x120));
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2 = (undefined8 *)
               FUN_143598980(lVar1,param_1,*(undefined4 *)(param_1 + 0x60),
                             *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),param_2)
      ;
    }
    *puVar2 = *(undefined8 *)puVar3[1];
    puVar2[1] = puVar3[1];
    *(undefined8 **)puVar3[1] = puVar2;
    puVar3[1] = puVar2;
    puVar3 = puVar2;
    if (param_3 != '\0') {
      FUN_1435d2d80(param_1,puVar2);
    }
  }
  return puVar3;
}



// FUNCTION 1435d2050 FUN_1435d2050 body=2699 status=ok
// SIG undefined FUN_1435d2050(void)

void FUN_1435d2050(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  uint *puVar19;
  byte bVar20;
  int *piVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined8 local_res8;
  undefined1 *local_res10;
  uint *local_res18;
  longlong local_res20;
  uint local_b8 [2];
  undefined8 uStack_b0;
  ulonglong local_a8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78 [2];
  byte local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar15 = (longlong *)0x0;
  local_res8 = (uint *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res20 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  local_6c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_98 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(local_res20 + 0xa0) + 0x30) +
              (ulonglong)*(uint *)(param_1 + 0x108) * 8);
  local_res10 = param_2;
  FUN_14361cce0(&local_98,local_78);
  local_88 = local_68;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x118);
  lVar8 = FUN_1435ba1a0((undefined1 *)(param_1 + 0x120),0x70,*(undefined1 *)(param_1 + 0x120));
  plVar9 = plVar15;
  if (lVar8 != 0) {
    plVar9 = (longlong *)
             FUN_143598980(lVar8,param_1,*(undefined4 *)(param_1 + 0x60),
                           *(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0);
  }
  plVar14 = (longlong *)(param_1 + 0xf8);
  *plVar9 = *plVar14;
  plVar9[1] = (longlong)plVar14;
  *(longlong **)(*plVar14 + 8) = plVar9;
  *plVar14 = (longlong)plVar9;
  local_80 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28);
  lVar8 = plVar9[0xb];
  *(longlong *)(param_1 + 0x278) = lVar8;
  if ((longlong *)(param_1 + 0x290) != (longlong *)0x0) {
    *(longlong *)(param_1 + 0x290) = lVar8;
    *(longlong *)(param_1 + 0x298) = param_1 + 400;
    lVar8 = param_1 + 0x2a0;
    *(longlong *)lVar8 = lVar8;
    *(longlong *)(param_1 + 0x2a8) = lVar8;
  }
  if ((undefined8 *)(param_1 + 0x2b0) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x278);
    *(longlong *)(param_1 + 0x2b8) = param_1 + 0x170;
    lVar8 = param_1 + 0x2c0;
    *(longlong *)lVar8 = lVar8;
    *(longlong *)(param_1 + 0x2c8) = lVar8;
  }
  uVar7 = *(uint *)(param_1 + 0x60);
  if (*(ulonglong *)(param_1 + 0x98) < (ulonglong)uVar7) {
    FUN_1433ab800(param_1 + 0x90,(ulonglong)uVar7);
  }
  *(uint *)(param_1 + 0x7c) = uVar7;
  if (uVar7 < *(uint *)(param_1 + 0x70)) {
    uVar7 = *(uint *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x70) = uVar7;
  if (*(uint *)(param_1 + 0x60) != 0) {
    uVar22 = (ulonglong)*(uint *)(param_1 + 0x60);
    plVar9 = plVar15;
    do {
      plVar14 = (longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x278) + 0xf0) + (longlong)plVar9);
      if (plVar14 != (longlong *)0x0) {
        *plVar14 = *(longlong *)(param_1 + 0x278);
        plVar14[1] = param_1 + 0x180;
        plVar1 = plVar14 + 2;
        *plVar1 = (longlong)plVar1;
        plVar14[3] = (longlong)plVar1;
      }
      plVar9 = plVar9 + 4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if (*(uint *)(param_1 + 100) != 0) {
    uVar22 = (ulonglong)*(uint *)(param_1 + 100);
    plVar9 = plVar15;
    do {
      plVar14 = (longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x278) + 0xf8) + (longlong)plVar9);
      if (plVar14 != (longlong *)0x0) {
        *plVar14 = *(longlong *)(param_1 + 0x278);
        plVar14[1] = param_1 + 400;
        plVar1 = plVar14 + 2;
        *plVar1 = (longlong)plVar1;
        plVar14[3] = (longlong)plVar1;
      }
      plVar9 = plVar9 + 4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if (*(uint *)(param_1 + 0x68) != 0) {
    uVar22 = (ulonglong)*(uint *)(param_1 + 0x68);
    do {
      plVar9 = (longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x100) + (longlong)plVar15);
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = *(longlong *)(param_1 + 0x278);
        plVar9[1] = param_1 + 400;
        plVar14 = plVar9 + 2;
        *plVar14 = (longlong)plVar14;
        plVar9[3] = (longlong)plVar14;
      }
      plVar15 = plVar15 + 4;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  lVar8 = 0x1505;
  puVar18 = *(undefined8 **)(*(longlong *)(param_1 + 0x278) + 0xf0);
  lVar25 = 0x10;
  piVar21 = *(int **)(*(longlong *)(param_1 + 0x18) + 0x28);
  local_90 = puVar18;
  if (piVar21[0x24] == 0x17) {
    uVar22 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x38);
    if (puVar18 == (undefined8 *)0x0) {
      uVar22 = local_a8;
      piVar21 = uStack_b0;
      uVar7 = local_b8[0];
      uVar6 = (uint)local_res8;
    }
    else {
      local_b8[0] = 0xc;
      uStack_b0 = (int *)0x0;
      if (uVar22 != 0) {
        *(uint *)(uVar22 + 8) = *(int *)(uVar22 + 8) + 1U & 0x8fffffff;
      }
      local_a8 = uVar22;
      uVar10 = FUN_1435d0e70(param_1 + 0x148,local_b8);
      *puVar18 = *(undefined8 *)(param_1 + 0x278);
      puVar18[1] = uVar10;
      puVar2 = puVar18 + 2;
      local_res8 = (uint *)CONCAT44(local_res8._4_4_,1);
      *puVar2 = puVar2;
      puVar18[3] = puVar2;
      piVar21 = (int *)0x0;
      uVar7 = 0xc;
      uVar6 = 1;
    }
    uVar13 = uVar6;
    if ((uVar6 & 1) == 0) goto LAB_1435d2395;
    uVar13 = uVar6 & 0xfffffffe;
    uVar5 = uVar7 & 0x1f;
    local_res8 = (uint *)(CONCAT44(local_res8._4_4_,uVar6) & 0xfffffffffffffffe);
    if (uVar5 < 10) goto LAB_1435d2395;
    if ((uVar7 >> 9 & 1) == 0) {
      if (uVar5 == 10) {
        piVar21 = (int *)(uVar22 + 0x18);
        *piVar21 = *piVar21 + -1;
        if (*piVar21 != 0) goto LAB_1435d2395;
        FUN_14335f920(uVar22);
      }
      else if ((uVar5 == 0xb) || (uVar5 == 0xc)) {
        if (((local_a8 & 1) != 0) || ((uVar22 == 0 || ((*(uint *)(uVar22 + 8) & 0x3fffff) == 0))))
        goto LAB_1435d2395;
        *(uint *)(uVar22 + 8) = *(uint *)(uVar22 + 8) - 1;
        FUN_1434ef880(uVar22);
      }
      else {
        if ((1 < uVar5 - 0xd) || ((local_a0 & 1) != 0)) goto LAB_1435d2395;
        lVar11 = CONCAT71(uStack_9f,local_a0);
        if ((lVar11 != 0) && ((*(uint *)(lVar11 + 8) & 0x3fffff) != 0)) {
          *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) - 1;
          FUN_1434ef880();
        }
      }
    }
    else {
      *piVar21 = *piVar21 + -1;
      if (*piVar21 != 0) goto LAB_1435d2395;
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar21);
    }
  }
  else if (puVar18 != (undefined8 *)0x0) {
    lVar11 = *(longlong *)(param_1 + 0x230);
    local_b8[0] = 0x54;
    local_b8[1] = 0;
    uStack_b0 = piVar21;
    if (lVar11 != 0) {
      uVar22 = 0x1505;
      lVar23 = lVar25;
      do {
        pbVar3 = &stack0xffffffffffffff47 + lVar23;
        lVar23 = lVar23 + -1;
        uVar22 = (ulonglong)*pbVar3 + uVar22 * 0x1003f;
      } while (lVar23 != 0);
      uVar22 = *(ulonglong *)(lVar11 + 8) & uVar22;
      lVar23 = uVar22 * 3 + 2;
      puVar17 = (ulonglong *)(lVar11 + lVar23 * 8);
      if ((*(longlong *)(lVar11 + lVar23 * 8) != -2) && (uVar24 = uVar22, puVar17[1] == uVar22)) {
        while ((puVar17[1] != uVar22 ||
               ((local_b8 != (uint *)puVar17[2] &&
                (cVar4 = FUN_1435cf560((uint *)puVar17[2],local_b8), cVar4 == '\0'))))) {
          uVar24 = *puVar17;
          if (uVar24 == 0xffffffffffffffff) goto LAB_1435d2575;
          puVar17 = (ulonglong *)(lVar11 + uVar24 * 0x18 + 0x10);
        }
        if ((-1 < (longlong)uVar24) &&
           (puVar18 = (undefined8 *)(lVar11 + uVar24 * 0x18 + 0x20), puVar18 != (undefined8 *)0x0))
        {
          puVar19 = (uint *)*puVar18;
          goto LAB_1435d257b;
        }
      }
    }
LAB_1435d2575:
    puVar19 = (uint *)0x0;
LAB_1435d257b:
    if (puVar19 == (uint *)0x0) {
      local_res18 = (uint *)FUN_1435ba1a0(*(undefined1 **)(param_1 + 0x158),0x10,
                                          **(undefined1 **)(param_1 + 0x158));
      if (local_res18 == (uint *)0x0) {
        local_res18 = (uint *)0x0;
      }
      else {
        *local_res18 = local_b8[0];
        local_res18[1] = local_b8[1];
        local_res18[2] = (uint)uStack_b0;
        local_res18[3] = uStack_b0._4_4_;
      }
      puVar19 = local_res18;
      lVar11 = 0;
      switch(*local_res18 >> 3 & 0xf) {
      case 0:
      case 1:
      case 2:
      case 3:
        lVar23 = 0x1505;
        lVar16 = lVar25;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
        lVar23 = 0x1505;
        lVar16 = 0x18;
        break;
      case 10:
        lVar11 = lVar25;
      default:
        lVar23 = 0x1505;
        goto joined_r0x0001435d25f4;
      }
      do {
        lVar11 = lVar16 + -1;
        lVar23 = lVar23 * 0x1003f + (ulonglong)*(byte *)(lVar16 + -1 + (longlong)local_res18);
joined_r0x0001435d25f4:
        lVar16 = lVar11;
      } while (lVar11 != 0);
      FUN_143605ee0(param_1 + 0x230,*(undefined8 *)(param_1 + 0x238),&local_res18,lVar23);
    }
    *local_90 = *(undefined8 *)(param_1 + 0x278);
    puVar18 = local_90 + 2;
    local_90[1] = puVar19;
    *puVar18 = puVar18;
    local_90[3] = puVar18;
    puVar18 = local_90;
  }
  uVar13 = (uint)local_res8;
LAB_1435d2395:
  **(longlong **)(param_1 + 0x90) = (longlong)puVar18;
  uVar24 = 1;
  local_res18 = (uint *)CONCAT44(local_res18._4_4_,1);
  uVar22 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  if ((undefined8 *)(param_1 + 0x2d0) == (undefined8 *)0x0) {
    uVar22 = local_a8;
    piVar21 = uStack_b0;
    uVar7 = local_b8[0];
  }
  else {
    local_res8 = (uint *)(CONCAT44(local_res8._4_4_,uVar13) | 2);
    local_b8[0] = 0xc;
    uStack_b0 = (int *)0x0;
    if (uVar22 != 0) {
      *(uint *)(uVar22 + 8) = *(int *)(uVar22 + 8) + 1U & 0x8fffffff;
    }
    local_a8 = uVar22;
    uVar10 = FUN_1435d0e70(param_1 + 0x148,local_b8);
    *(undefined8 *)(param_1 + 0x2d8) = uVar10;
    lVar11 = param_1 + 0x2e0;
    *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_1 + 0x278);
    *(longlong *)lVar11 = lVar11;
    *(longlong *)(param_1 + 0x2e8) = lVar11;
    piVar21 = (int *)0x0;
    uVar7 = 0xc;
  }
  if ((((ulonglong)local_res8 & 2) != 0) && (uVar6 = uVar7 & 0x1f, 9 < uVar6)) {
    if ((uVar7 >> 9 & 1) == 0) {
      if (uVar6 == 10) {
        piVar21 = (int *)(uVar22 + 0x18);
        *piVar21 = *piVar21 + -1;
        if (*piVar21 == 0) {
          FUN_14335f920(uVar22);
        }
      }
      else if ((uVar6 == 0xb) || (uVar6 == 0xc)) {
        if (((local_a8 & 1) == 0) && ((uVar22 != 0 && ((*(uint *)(uVar22 + 8) & 0x3fffff) != 0)))) {
          *(uint *)(uVar22 + 8) = *(uint *)(uVar22 + 8) - 1;
          FUN_1434ef880(uVar22);
        }
      }
      else if ((((uVar6 - 0xd < 2) && ((local_a0 & 1) == 0)) &&
               (lVar11 = CONCAT71(uStack_9f,local_a0), lVar11 != 0)) &&
              ((*(uint *)(lVar11 + 8) & 0x3fffff) != 0)) {
        *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) - 1;
        FUN_1434ef880();
      }
    }
    else {
      *piVar21 = *piVar21 + -1;
      if (*piVar21 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,piVar21);
      }
    }
  }
  if (1 < *(uint *)(param_1 + 0x60)) {
    uVar22 = (ulonglong)(*(uint *)(param_1 + 0x60) - 1);
    lVar23 = 0x20;
    lVar11 = 8;
    do {
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0xf0) + lVar23;
      lVar23 = lVar23 + 0x20;
      *(longlong *)(lVar11 + *(longlong *)(param_1 + 0x90)) = lVar16;
      uVar22 = uVar22 - 1;
      lVar11 = lVar11 + 8;
    } while (uVar22 != 0);
  }
  local_res8 = (uint *)(ulonglong)local_78[0];
  uVar22 = 0;
  if (local_res8 != (uint *)0x0) {
    do {
      uVar10 = *(undefined8 *)(local_res20 + 0x28);
      lVar11 = *(longlong *)(local_res20 + 0xa0);
      uVar7 = FUN_14358f8b0(&local_88);
      piVar21 = (int *)((ulonglong)uVar7 * 0x10 + *(longlong *)(lVar11 + 0x148));
      if (((piVar21[3] == 0) && (piVar21[2] == 0)) && (*piVar21 == 0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = FUN_1435c84e0(uVar10,local_res20);
        if (lVar11 == 0) {
          uVar12 = FUN_1435c8e40(local_b8,0x3f6,uVar10);
          FUN_1435ccf60(uVar10,uVar12,&DAT_145b14e70);
          piVar21 = uStack_b0 + 6;
          *piVar21 = *piVar21 + -1;
          if (*piVar21 == 0) {
            FUN_14335f920();
          }
          *local_res10 = 0;
          return;
        }
      }
      puVar18 = (undefined8 *)(uVar24 * 0x20 + *(longlong *)(*(longlong *)(param_1 + 0x278) + 0xf0))
      ;
      if (lVar11 == 0) {
        bVar20 = 0;
        lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x200) + 0xd8);
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0xd8);
        lVar23 = *(longlong *)(param_1 + 0x148);
        if (((lVar11 == *(longlong *)(*(longlong *)(lVar23 + 0x230) + 0xd8)) ||
            (lVar11 == *(longlong *)(*(longlong *)(lVar23 + 0x238) + 0xd8))) ||
           ((lVar11 == *(longlong *)(*(longlong *)(lVar23 + 0x228) + 0xd8) ||
            (lVar11 == *(longlong *)(*(longlong *)(lVar23 + 0x220) + 0xd8))))) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = '\0';
        }
        bVar20 = -cVar4 & 2;
      }
      uVar10 = FUN_1435d0db0(param_1 + 0x148,lVar11,bVar20,0);
      if (puVar18 != (undefined8 *)0x0) {
        *puVar18 = *(undefined8 *)(param_1 + 0x278);
        puVar2 = puVar18 + 2;
        puVar18[1] = uVar10;
        *puVar2 = puVar2;
        puVar18[3] = puVar2;
      }
      uVar22 = uVar22 + 1;
      *(undefined8 **)(*(longlong *)(param_1 + 0x90) + uVar24 * 8) = puVar18;
      uVar7 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar7;
      local_res18 = (uint *)CONCAT44(local_res18._4_4_,uVar7);
    } while (uVar22 < local_res8);
  }
  if (((local_70 & 4) != 0) || ((local_70 & 1) != 0)) {
    puVar18 = (undefined8 *)(uVar24 * 0x20 + *(longlong *)(*(longlong *)(param_1 + 0x278) + 0xf0));
    if (puVar18 != (undefined8 *)0x0) {
      lVar11 = *(longlong *)(param_1 + 0x230);
      local_b8[0] = 0x54;
      local_b8[1] = 0;
      uStack_b0 = (int *)*(undefined8 *)(*(longlong *)(local_80 + 0x248) + 0xd8);
      local_res8 = (uint *)lVar11;
      if (lVar11 != 0) {
        uVar22 = 0x1505;
        lVar23 = lVar25;
        do {
          pbVar3 = &stack0xffffffffffffff47 + lVar23;
          lVar23 = lVar23 + -1;
          uVar22 = (ulonglong)*pbVar3 + uVar22 * 0x1003f;
        } while (lVar23 != 0);
        uVar22 = *(ulonglong *)(lVar11 + 8) & uVar22;
        lVar23 = uVar22 * 3 + 2;
        puVar17 = (ulonglong *)(lVar11 + lVar23 * 8);
        if ((*(longlong *)(lVar11 + lVar23 * 8) != -2) && (uVar24 = uVar22, puVar17[1] == uVar22)) {
          while ((puVar17[1] != uVar22 ||
                 ((local_b8 != (uint *)puVar17[2] &&
                  (cVar4 = FUN_1435cf560((uint *)puVar17[2],local_b8), lVar11 = (longlong)local_res8
                  , cVar4 == '\0'))))) {
            uVar24 = *puVar17;
            if (uVar24 == 0xffffffffffffffff) goto LAB_1435d29e9;
            puVar17 = (ulonglong *)(lVar11 + uVar24 * 0x18 + 0x10);
          }
          if ((-1 < (longlong)uVar24) &&
             (puVar2 = (undefined8 *)(lVar11 + (uVar24 * 3 + 4) * 8), puVar2 != (undefined8 *)0x0))
          {
            puVar19 = (uint *)*puVar2;
            goto LAB_1435d29eb;
          }
        }
      }
LAB_1435d29e9:
      puVar19 = (uint *)0x0;
LAB_1435d29eb:
      if (puVar19 == (uint *)0x0) {
        local_res8 = (uint *)FUN_1435ba1a0(*(undefined1 **)(param_1 + 0x158),0x10,
                                           **(undefined1 **)(param_1 + 0x158));
        if (local_res8 == (uint *)0x0) {
          local_res8 = (uint *)0x0;
        }
        else {
          *local_res8 = local_b8[0];
          local_res8[1] = local_b8[1];
          local_res8[2] = (uint)uStack_b0;
          local_res8[3] = uStack_b0._4_4_;
        }
        puVar19 = local_res8;
        lVar11 = 0;
        switch(*local_res8 >> 3 & 0xf) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          lVar25 = 0x18;
        case 0:
        case 1:
        case 2:
        case 3:
          do {
            lVar11 = lVar25 + -1;
            lVar25 = lVar25 + -1;
            lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)((longlong)local_res8 + lVar11);
joined_r0x0001435d2a59:
          } while (lVar25 != 0);
          FUN_143605ee0(param_1 + 0x230,*(undefined8 *)(param_1 + 0x238),&local_res8,lVar8);
          break;
        case 10:
          lVar11 = lVar25;
        default:
          lVar25 = lVar11;
          goto joined_r0x0001435d2a59;
        }
      }
      *puVar18 = *(undefined8 *)(param_1 + 0x278);
      puVar2 = puVar18 + 2;
      puVar18[1] = puVar19;
      *puVar2 = puVar2;
      puVar18[3] = puVar2;
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x90) + ((ulonglong)local_res18 & 0xffffffff) * 8) =
         puVar18;
    *(undefined8 **)(param_1 + 0x288) = puVar18;
  }
  *local_res10 = 1;
  return;
}



// FUNCTION 1435d2b40 FUN_1435d2b40 body=564 status=ok
// SIG undefined FUN_1435d2b40(void)

void FUN_1435d2b40(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  undefined8 local_res10;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  uVar5 = *(ulonglong *)(param_1 + 0x40);
  uVar4 = *(uint *)(param_1 + 0xf4);
  uVar13 = (ulonglong)uVar4;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  *(undefined4 *)
   (*(longlong *)(lVar6 + 0x130) + 0x28 +
   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 0x20) * 0x50) =
       *(undefined4 *)(lVar6 + 0x108);
  local_res10 = *(undefined8 *)(param_1 + 0x58);
  if (uVar4 != 0) {
    plVar1 = (longlong *)(lVar6 + 0x100);
    uVar12 = uVar13;
    do {
      DSP::CAkRectifier::CAkRectifier(&local_58);
      Scaleform::GFx::AS3::Abc::Read(&local_res10,&local_58);
      uVar7 = local_4c;
      lVar10 = FUN_1435d1f50(param_1,local_58,0);
      *(uint *)(lVar10 + 0x14) = *(uint *)(lVar10 + 0x14) | 2;
      *(undefined4 *)(*(longlong *)(lVar10 + 0x58) + 0x18) = 1;
      local_res8 = (ulonglong)local_54;
      FUN_1435d2f80(param_1,&local_res8);
      if (local_res8 < uVar5) {
        FUN_1435d1f50(param_1,local_res8,0);
      }
      lVar10 = FUN_1435d1f50(param_1,local_50,0);
      uVar9 = local_48;
      uVar8 = local_4c;
      *(uint *)(lVar10 + 0x14) = *(uint *)(lVar10 + 0x14) | 4;
      *(undefined4 *)(lVar10 + 0x24) = uVar7;
      *(undefined4 *)(*(longlong *)(lVar10 + 0x58) + 0x18) = 2;
      FUN_143613210(plVar1,plVar1);
      puVar3 = (undefined4 *)(*plVar1 + (*(longlong *)(lVar6 + 0x108) * 3 + -3) * 8);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = uVar9;
        *(undefined8 *)(puVar3 + 2) = 0;
        *puVar3 = uVar8;
        *(undefined8 *)(puVar3 + 4) = 0;
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  local_res10 = *(undefined8 *)(param_1 + 0x58);
  if (uVar13 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0xf8);
    do {
      DSP::CAkRectifier::CAkRectifier(&local_58);
      Scaleform::GFx::AS3::Abc::Read(&local_res10,&local_58);
      for (puVar11 = *(undefined8 **)(param_1 + 0x100); puVar11 != puVar2;
          puVar11 = (undefined8 *)puVar11[1]) {
        if ((ulonglong)local_58 == puVar11[8]) goto LAB_1435d2ce7;
        if ((ulonglong)local_58 < (ulonglong)puVar11[8]) break;
      }
      puVar11 = (undefined8 *)*puVar11;
LAB_1435d2ce7:
      FUN_1435d2d80(param_1,puVar11);
      local_res8 = (ulonglong)local_54;
      FUN_1435d2f80(param_1,&local_res8);
      if (local_res8 < uVar5) {
        for (puVar11 = *(undefined8 **)(param_1 + 0x100); puVar11 != puVar2;
            puVar11 = (undefined8 *)puVar11[1]) {
          if (local_res8 == puVar11[8]) goto LAB_1435d2d2b;
          if (local_res8 < (ulonglong)puVar11[8]) break;
        }
        puVar11 = (undefined8 *)*puVar11;
LAB_1435d2d2b:
        FUN_1435d2d80(param_1,puVar11);
      }
      for (puVar11 = *(undefined8 **)(param_1 + 0x100); puVar11 != puVar2;
          puVar11 = (undefined8 *)puVar11[1]) {
        if ((ulonglong)local_50 == puVar11[8]) goto LAB_1435d2d57;
        if ((ulonglong)local_50 < (ulonglong)puVar11[8]) break;
      }
      puVar11 = (undefined8 *)*puVar11;
LAB_1435d2d57:
      FUN_1435d2d80(param_1,puVar11);
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 1435d2d80 FUN_1435d2d80 body=502 status=ok
// SIG undefined FUN_1435d2d80(void)

void FUN_1435d2d80(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 local_res10;
  longlong local_res18;
  uint local_58;
  uint local_54;
  uint local_50;
  ulonglong uVar9;
  
  if (*(longlong *)(param_2 + 0x38) == 0) {
    local_res10 = *(undefined8 *)(param_1 + 0x58);
    uVar1 = *(ulonglong *)(param_2 + 0x40);
    uVar10 = 0;
    uVar9 = uVar10;
    uVar12 = uVar10;
    if (*(int *)(param_1 + 0xf4) != 0) {
      do {
        DSP::CAkRectifier::CAkRectifier(&local_58);
        Scaleform::GFx::AS3::Abc::Read(&local_res10,&local_58);
        if ((local_58 <= uVar1) && (uVar1 < local_54)) {
          uVar12 = (ulonglong)((int)uVar12 + 1);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *(uint *)(param_1 + 0xf4));
      iVar11 = (int)uVar12;
      if (iVar11 != 0) {
        bVar4 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
        bVar7 = 0x40;
        if (bVar4 < 0x40) {
          bVar7 = bVar4;
        }
        if (bVar7 < 8) {
          bVar7 = 8;
        }
        local_res18 = FUN_1435ba1a0(param_1 + 0x120,uVar12 << 3,bVar7);
        bVar4 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
        bVar7 = 0x40;
        if (bVar4 < 0x40) {
          bVar7 = bVar4;
        }
        if (bVar7 < 8) {
          bVar7 = 8;
        }
        lVar5 = FUN_1435ba1a0(param_1 + 0x120,uVar12 << 3,bVar7);
        lVar3 = local_res18;
        lVar2 = *(longlong *)(param_2 + 0x58);
        *(longlong *)(param_2 + 0x38) = local_res18;
        *(int *)(param_2 + 0x20) = iVar11;
        *(longlong *)(lVar2 + 0x108) = lVar5;
        *(int *)(lVar2 + 0xec) = iVar11;
        local_res10 = *(undefined8 *)(param_1 + 0x58);
        uVar9 = uVar10;
        if (*(int *)(param_1 + 0xf4) != 0) {
          do {
            DSP::CAkRectifier::CAkRectifier(&local_58);
            Scaleform::GFx::AS3::Abc::Read(&local_res10,&local_58);
            if ((local_58 <= uVar1) && (uVar1 < local_54)) {
              for (puVar6 = *(undefined8 **)(param_1 + 0x100);
                  puVar6 != (undefined8 *)(param_1 + 0xf8); puVar6 = (undefined8 *)puVar6[1]) {
                if ((ulonglong)local_50 == puVar6[8]) goto LAB_1435d2f2a;
                if ((ulonglong)local_50 < (ulonglong)puVar6[8]) break;
              }
              puVar6 = (undefined8 *)*puVar6;
LAB_1435d2f2a:
              lVar2 = uVar9 * 8;
              uVar9 = (ulonglong)((int)uVar9 + 1);
              *(undefined8 **)(lVar2 + lVar3) = puVar6;
              *(undefined8 *)(lVar2 + lVar5) = puVar6[0xb];
            }
            uVar8 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(param_1 + 0xf4));
        }
      }
    }
  }
  return;
}



// FUNCTION 1435d2f80 FUN_1435d2f80 body=317 status=ok
// SIG undefined FUN_1435d2f80(void)

ulonglong FUN_1435d2f80(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar2 = *param_2;
  bVar1 = *(byte *)(lVar2 + *(longlong *)(param_1 + 0x48));
  uVar5 = (ulonglong)bVar1;
  *param_2 = lVar2 + 1;
  if (0xb < bVar1) {
    if (bVar1 < 0x1b) {
      FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48));
      return uVar5;
    }
    if (bVar1 == 0x1b) {
      FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48));
      iVar3 = FUN_14358f710(*(undefined8 *)(param_1 + 0x48),param_2);
      if (iVar3 < 0) {
        return 0x1b;
      }
      uVar5 = (ulonglong)(iVar3 + 1);
      do {
        FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),param_2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return 0x1b;
    }
    if (bVar1 == 0x24) {
      *param_2 = lVar2 + 2;
      return 0x24;
    }
    if (bVar1 == 0xef) {
      *param_2 = lVar2 + 2;
      FUN_14358f710(*(undefined8 *)(param_1 + 0x48));
      *param_2 = *param_2 + 1;
      goto LAB_1435d309f;
    }
  }
  cVar4 = (char)((&DAT_145b4a350)[uVar5 * 2] << 4) >> 4;
  if (cVar4 != '\x01') {
    if (cVar4 != '\x02') {
      return uVar5;
    }
    FUN_14358f710(*(undefined8 *)(param_1 + 0x48),param_2);
  }
LAB_1435d309f:
  FUN_14358f710(*(undefined8 *)(param_1 + 0x48),param_2);
  return uVar5;
}



// FUNCTION 1435d30d0 FUN_1435d30d0 body=1331 status=ok
// SIG undefined FUN_1435d30d0(void)

void FUN_1435d30d0(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  char cVar14;
  byte bVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined7 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar1 = *(ulonglong *)(param_1 + 0x40);
  puVar13 = *(undefined8 **)(param_1 + 0x100);
  bVar2 = false;
  puVar9 = (undefined8 *)0x0;
  local_res18 = 0;
  local_res8 = 2;
  if (uVar1 != 0) {
    do {
      if ((((bVar2) && (bVar2 = false, (*(uint *)((longlong)puVar13 + 0x14) >> 2 & 1) == 0)) &&
          (*(int *)(puVar13 + 3) == 0)) &&
         (*(char *)(local_res18 + *(longlong *)(param_1 + 0x48)) != '\t')) {
        FUN_1435d3720(param_1,&local_res18,puVar13);
        puVar10 = puVar13;
        goto LAB_1435d356e;
      }
      for (puVar10 = *(undefined8 **)(param_1 + 0x100); puVar10 != (undefined8 *)(param_1 + 0xf8);
          puVar10 = (undefined8 *)puVar10[1]) {
        if (local_res18 == puVar10[8]) goto LAB_1435d31a7;
        if (local_res18 < (ulonglong)puVar10[8]) break;
      }
      puVar10 = (undefined8 *)*puVar10;
LAB_1435d31a7:
      bVar15 = 0x40;
      uVar16 = local_res18;
      if ((puVar13 != (undefined8 *)0x0) && (puVar10 != puVar13)) {
        if (puVar13[9] == 0) {
          puVar13[9] = local_res18;
        }
        if (((0xf < local_res8 - 0xc) && (local_res8 != 3)) && (1 < local_res8 - 0x47)) {
          bVar4 = Scaleform::Alg::RoundUpToPowerOfTwo
                            (CONCAT71((int7)((ulonglong)(param_1 + 0xf8) >> 8),8));
          bVar5 = bVar15;
          if (bVar4 < 0x40) {
            bVar5 = bVar4;
          }
          if (bVar5 < 8) {
            bVar5 = 8;
          }
          puVar9 = (undefined8 *)FUN_1435ba1a0(param_1 + 0x120,8,bVar5);
          puVar13[6] = puVar9;
          *(undefined4 *)((longlong)puVar13 + 0x1c) = 1;
          *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
          *puVar9 = puVar10;
          uVar16 = local_res18;
        }
      }
      lVar11 = *(longlong *)(param_1 + 0x48);
      local_res18 = uVar16 + 1;
      local_res8 = (uint)*(byte *)(lVar11 + uVar16);
      uVar19 = (undefined7)((ulonglong)lVar11 >> 8);
      puVar9 = puVar13;
      switch(local_res8) {
      case 3:
      case 0x47:
      case 0x48:
        puVar10[9] = local_res18;
        puVar10 = (undefined8 *)FUN_1435d1f50(param_1,local_res18,CONCAT71(uVar19,1));
        bVar2 = true;
        break;
      default:
        cVar14 = (char)((&DAT_145b4a350)[(ulonglong)local_res8 * 2] << 4) >> 4;
        if (cVar14 != '\x01') {
          if (cVar14 != '\x02') break;
          FUN_14358f710(lVar11,&local_res18);
        }
        goto LAB_1435d354d;
      case 9:
        if (puVar10[8] != uVar16) {
          puVar10[9] = uVar16;
          FUN_1435d1f50(param_1,uVar16,CONCAT71(uVar19,1));
        }
        break;
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
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
        puVar10[9] = local_res18;
        iVar6 = FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res18);
        lVar11 = FUN_1435d1f50(param_1,(longlong)iVar6 + local_res18,1);
        *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
        puVar13 = (undefined8 *)FUN_1435d1f50(param_1,local_res18,1);
        *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
        bVar5 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
        if (bVar5 < 0x40) {
          bVar15 = bVar5;
        }
        if (bVar15 < 8) {
          bVar15 = 8;
        }
        plVar12 = (longlong *)FUN_1435ba1a0(param_1 + 0x120,0x10,bVar15);
        puVar10[6] = plVar12;
        *(undefined4 *)((longlong)puVar10 + 0x1c) = 2;
        *plVar12 = lVar11;
        plVar12[1] = (longlong)puVar13;
        puVar10 = puVar13;
        break;
      case 0x10:
        puVar10[9] = local_res18;
        iVar6 = FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res18);
        lVar11 = FUN_1435d1f50(param_1,(longlong)iVar6 + local_res18,1);
        if (lVar11 != 0) {
          *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
          bVar5 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
          if (bVar5 < 0x40) {
            bVar15 = bVar5;
          }
          if (bVar15 < 8) {
            bVar15 = 8;
          }
          plVar12 = (longlong *)FUN_1435ba1a0(param_1 + 0x120,8,bVar15);
          puVar10[6] = plVar12;
          *(undefined4 *)((longlong)puVar10 + 0x1c) = 1;
          *plVar12 = lVar11;
        }
        puVar10 = (undefined8 *)FUN_1435d1f50(param_1,local_res18,1);
        bVar2 = true;
        break;
      case 0x1b:
        puVar10[9] = local_res18;
        iVar6 = FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res18);
        lVar21 = (longlong)iVar6 + uVar16;
        iVar6 = FUN_14358f710(*(undefined8 *)(param_1 + 0x48),&local_res18);
        local_res20 = local_res18;
        iVar17 = 0;
        lVar11 = FUN_1435d1f50(param_1,lVar21,1);
        *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
        if (-1 < iVar6) {
          uVar20 = (ulonglong)(iVar6 + 1);
          do {
            iVar7 = FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res20);
            iVar3 = iVar17 + 1;
            if ((longlong)iVar7 + uVar16 == lVar21) {
              iVar3 = iVar17;
            }
            iVar17 = iVar3;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        bVar5 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
        bVar15 = 0x40;
        if (bVar5 < 0x40) {
          bVar15 = bVar5;
        }
        if (bVar15 < 8) {
          bVar15 = 8;
        }
        plVar12 = (longlong *)FUN_1435ba1a0(param_1 + 0x120,(ulonglong)(iVar17 + 1U) << 3,bVar15);
        puVar10[6] = plVar12;
        *(uint *)((longlong)puVar10 + 0x1c) = iVar17 + 1U;
        uVar20 = 1;
        *plVar12 = lVar11;
        if (-1 < iVar6) {
          uVar18 = (ulonglong)(iVar6 + 1);
          do {
            iVar6 = FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),&local_res18);
            if ((longlong)iVar6 + uVar16 != lVar21) {
              lVar11 = FUN_1435d1f50(param_1,(longlong)iVar6 + uVar16,1);
              *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
              plVar12[uVar20] = lVar11;
              uVar20 = (ulonglong)((int)uVar20 + 1);
            }
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        puVar10 = (undefined8 *)FUN_1435d1f50(param_1,local_res18,1);
        bVar2 = true;
        break;
      case 0x24:
        local_res18 = uVar16 + 2;
        break;
      case 0xef:
        local_res18 = uVar16 + 2;
        FUN_14358f710(lVar11,&local_res18);
        local_res18 = local_res18 + 1;
LAB_1435d354d:
        FUN_14358f710(*(undefined8 *)(param_1 + 0x48),&local_res18);
        break;
      case 0xf1:
        uVar8 = FUN_14358f710(lVar11,&local_res18);
        *(undefined4 *)(param_1 + 0x30) = uVar8;
      }
LAB_1435d356e:
      puVar13 = puVar10;
    } while (local_res18 < uVar1);
    if ((puVar9 != (undefined8 *)0x0) && (puVar10 != puVar9)) {
      if (puVar9[9] == 0) {
        puVar9[9] = local_res18;
      }
      if ((((puVar10 != (undefined8 *)0x0) && (0xf < local_res8 - 0xc)) && (local_res8 != 3)) &&
         (1 < local_res8 - 0x47)) {
        bVar5 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
        bVar15 = 0x40;
        if (bVar5 < 0x40) {
          bVar15 = bVar5;
        }
        if (bVar15 < 8) {
          bVar15 = 8;
        }
        puVar13 = (undefined8 *)FUN_1435ba1a0(param_1 + 0x120,8,bVar15);
        puVar9[6] = puVar13;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = 1;
        *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
        *puVar13 = puVar10;
      }
    }
  }
  return;
}



// FUNCTION 1435d3720 FUN_1435d3720 body=378 status=ok
// SIG undefined FUN_1435d3720(void)

void FUN_1435d3720(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x40);
  if (*param_2 < uVar6) {
    do {
      uVar2 = *param_2;
      for (puVar5 = *(undefined8 **)(param_1 + 0x100); puVar5 != (undefined8 *)(param_1 + 0xf8);
          puVar5 = (undefined8 *)puVar5[1]) {
        if (uVar2 == puVar5[8]) goto LAB_1435d3787;
        if (uVar2 < (ulonglong)puVar5[8]) break;
      }
      puVar5 = (undefined8 *)*puVar5;
LAB_1435d3787:
      if ((param_3 != (undefined8 *)0x0) && (puVar5 != param_3)) {
        if (param_3[9] == 0) {
          param_3[9] = uVar2;
        }
        break;
      }
      bVar1 = *(byte *)(uVar2 + *(longlong *)(param_1 + 0x48));
      *param_2 = uVar2 + 1;
      switch(bVar1) {
      case 3:
      case 0x47:
      case 0x48:
        goto switchD_1435d37c7_caseD_3;
      default:
        cVar4 = (char)((&DAT_145b4a350)[(ulonglong)bVar1 * 2] << 4) >> 4;
        if (cVar4 != '\x01') {
          if (cVar4 != '\x02') goto LAB_1435d381e;
          FUN_14358f710(*(undefined8 *)(param_1 + 0x48),param_2);
        }
        break;
      case 9:
        *param_2 = uVar2;
        goto switchD_1435d37c7_caseD_3;
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
        FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),param_2);
        goto switchD_1435d37c7_caseD_3;
      case 0x1b:
        FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),param_2);
        iVar3 = FUN_14358f710(*(undefined8 *)(param_1 + 0x48),param_2);
        if (-1 < iVar3) {
          uVar6 = (ulonglong)(iVar3 + 1);
          do {
            FUN_14358f6d0(*(undefined8 *)(param_1 + 0x48),param_2);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        goto switchD_1435d37c7_caseD_3;
      case 0x24:
        *param_2 = uVar2 + 2;
        goto LAB_1435d381e;
      case 0xef:
        *param_2 = uVar2 + 2;
        FUN_14358f710(*(undefined8 *)(param_1 + 0x48),param_2);
        *param_2 = *param_2 + 1;
      }
      FUN_14358f710(*(undefined8 *)(param_1 + 0x48),param_2);
LAB_1435d381e:
      param_3 = puVar5;
    } while (*param_2 < uVar6);
switchD_1435d37c7_caseD_3:
  }
  return;
}



// FUNCTION 1435d39b0 FUN_1435d39b0 body=153 status=ok
// SIG undefined FUN_1435d39b0(void)

void FUN_1435d39b0(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  
  lVar2 = FUN_1435d1f50(param_1,(longlong)param_4 + *param_2,1);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
    bVar1 = Scaleform::Alg::RoundUpToPowerOfTwo(8);
    bVar4 = 0x40;
    if (bVar1 < 0x40) {
      bVar4 = bVar1;
    }
    if (bVar4 < 8) {
      bVar4 = 8;
    }
    plVar3 = (longlong *)FUN_1435ba1a0(param_1 + 0x120,8,bVar4);
    *(longlong **)(param_3 + 0x30) = plVar3;
    *(undefined4 *)(param_3 + 0x1c) = 1;
    *plVar3 = lVar2;
  }
  FUN_1435d1f50(param_1,*param_2,1);
  return;
}



// FUNCTION 1435d3ac0 FUN_1435d3ac0 body=606 status=ok
// SIG undefined FUN_1435d3ac0(void)

undefined8 FUN_1435d3ac0(longlong *param_1,int *param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  int *local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  iVar2 = *param_2;
  while (iVar2 - 1U < 0x10) {
    switch(iVar2 - 1U) {
    case 0:
    case 8:
      lVar3 = param_1[1];
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      *param_3 = *(undefined8 *)
                  (*(longlong *)(lVar3 + 0x40) + (ulonglong)*(uint *)(lVar3 + 0x10) * 8);
      return 1;
    default:
      goto LAB_1435d3b32;
    case 4:
    case 0xc:
      lVar3 = param_1[1];
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      *param_3 = *(undefined8 *)
                  (*(longlong *)(lVar3 + 0x40) + (ulonglong)*(uint *)(lVar3 + 0x10) * 8);
      lVar3 = param_1[1];
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + (ulonglong)*(uint *)(lVar3 + 0x10) * 8);
      *param_4 = lVar3;
      uVar5 = FUN_1435944b0(&local_28,*(undefined8 *)(lVar3 + 8));
      FUN_143590140(param_2 + 4,uVar5);
      uVar4 = (uint)local_28 & 0x1f;
      if (9 < uVar4) {
        if (((uint)local_28 >> 9 & 1) == 0) {
          if (uVar4 == 10) {
            piVar1 = (int *)(local_18 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((((uVar4 == 0xb) || (uVar4 == 0xc)) || (local_18 = local_10, uVar4 - 0xd < 2)) &&
                  ((((local_18 & 1) == 0 && (local_18 != 0)) &&
                   ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
            FUN_1434ef880();
            return 2;
          }
        }
        else {
          *local_20 = *local_20 + -1;
          if (*local_20 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
            return 2;
          }
        }
      }
      return 2;
    case 5:
    case 0xd:
      lVar3 = param_1[1];
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + (ulonglong)*(uint *)(lVar3 + 0x10) * 8);
      *param_4 = lVar3;
      uVar5 = FUN_1435944b0(&local_28,*(undefined8 *)(lVar3 + 8));
      FUN_143590140(param_2 + 4,uVar5);
      uVar4 = (uint)local_28 & 0x1f;
      if (9 < uVar4) {
        if (((uint)local_28 >> 9 & 1) == 0) {
          if (uVar4 == 10) {
            piVar1 = (int *)(local_18 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((((uVar4 == 0xb) || (uVar4 == 0xc)) || (local_18 = local_10, uVar4 - 0xd < 2)) &&
                  ((((local_18 & 1) == 0 && (local_18 != 0)) &&
                   ((*(uint *)(local_18 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) - 1;
            FUN_1434ef880();
            return 1;
          }
        }
        else {
          *local_20 = *local_20 + -1;
          if (*local_20 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
            return 1;
          }
        }
      }
      return 1;
    case 0xf:
      (**(code **)(**(longlong **)(*param_1 + 0x38) + 8))
                (*(longlong **)(*param_1 + 0x38),2,"Reading chained multiname in itself.");
      iVar2 = *param_2;
    }
  }
LAB_1435d3b32:
  return 0;
}



// FUNCTION 1435d3d90 FUN_1435d3d90 body=312 status=ok
// SIG undefined FUN_1435d3d90(void)

longlong * FUN_1435d3d90(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  param_1[1] = param_3;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 3) = param_4;
  lVar1 = *(longlong *)(param_2 + 0x48);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = lVar1;
  if (param_4 == 0) {
    *(int *)(param_1 + 2) = (int)param_1[2];
    return param_1;
  }
  uVar6 = (ulonglong)*(uint *)(param_1[1] + 0x10);
  if (param_4 < 9) {
    uVar4 = 0;
    for (uVar3 = uVar6 - param_4; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      param_1[uVar4 + 8] = *(longlong *)(*(longlong *)(param_1[1] + 0x40) + uVar3 * 8);
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
  }
  else {
    for (uVar3 = uVar6 - param_4; uVar3 < uVar6; uVar3 = uVar3 + 1) {
      uVar4 = param_1[5] + 1;
      uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 0x40) + uVar3 * 8);
      if (uVar4 < (ulonglong)param_1[5]) {
        uVar5 = uVar4;
        if (uVar4 < (ulonglong)param_1[6] >> 1) {
LAB_1435d3e6e:
          FUN_1432f2240(param_1 + 4,param_1[7],uVar5);
        }
      }
      else if ((ulonglong)param_1[6] < uVar4) {
        uVar5 = (uVar4 >> 2) + uVar4;
        goto LAB_1435d3e6e;
      }
      param_1[5] = uVar4;
      *(undefined8 *)(param_1[4] + -8 + uVar4 * 8) = uVar2;
    }
  }
  *(int *)(param_1[1] + 0x10) = *(int *)(param_1[1] + 0x10) - param_4;
  *(uint *)(param_1 + 2) = (int)param_1[2] + param_4;
  return param_1;
}



// FUNCTION 1435d3ed0 FUN_1435d3ed0 body=453 status=ok
// SIG undefined FUN_1435d3ed0(void)

longlong * FUN_1435d3ed0(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_2;
  uVar4 = 0;
  *param_1 = lVar1;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 3) = (int)param_2[3] + param_3;
  lVar1 = *(longlong *)(lVar1 + 0x48);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = lVar1;
  if (*(uint *)(param_1 + 3) != 0) {
    uVar6 = (ulonglong)*(uint *)(param_1[1] + 0x10);
    if (*(uint *)(param_1 + 3) < 9) {
      uVar5 = (ulonglong)*(uint *)(param_2 + 3);
      if (uVar5 != 0) {
        param_2 = param_2 + 8;
        uVar3 = uVar4;
        do {
          lVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar4 = (ulonglong)((int)uVar3 + 1);
          param_1[uVar3 + 8] = lVar1;
          uVar5 = uVar5 - 1;
          uVar3 = uVar4;
        } while (uVar5 != 0);
      }
      for (uVar5 = uVar6 - param_3; uVar5 < uVar6; uVar5 = uVar5 + 1) {
        param_1[uVar4 + 8] = *(longlong *)(*(longlong *)(param_1[1] + 0x40) + uVar5 * 8);
        uVar4 = (ulonglong)((int)uVar4 + 1);
      }
    }
    else {
      uVar5 = (ulonglong)*(uint *)(param_2 + 3);
      if (*(uint *)(param_2 + 3) < 9) {
        if (uVar5 != 0) {
          param_2 = param_2 + 8;
          do {
            FUN_1436120a0(param_1 + 4,param_2);
            param_2 = param_2 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else if (uVar5 != 0) {
        do {
          FUN_1436120a0(param_1 + 4,param_2[4] + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      for (uVar4 = uVar6 - param_3; uVar4 < uVar6; uVar4 = uVar4 + 1) {
        uVar5 = param_1[5] + 1;
        uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 0x40) + uVar4 * 8);
        if (uVar5 < (ulonglong)param_1[5]) {
          uVar3 = uVar5;
          if (uVar5 < (ulonglong)param_1[6] >> 1) {
LAB_1435d404e:
            FUN_1432f2240(param_1 + 4,param_1[7],uVar3);
          }
        }
        else if ((ulonglong)param_1[6] < uVar5) {
          uVar3 = (uVar5 >> 2) + uVar5;
          goto LAB_1435d404e;
        }
        param_1[5] = uVar5;
        *(undefined8 *)(param_1[4] + -8 + uVar5 * 8) = uVar2;
      }
    }
    *(int *)(param_1[1] + 0x10) = *(int *)(param_1[1] + 0x10) - param_3;
  }
  return param_1;
}



// FUNCTION 1435d40a0 FUN_1435d40a0 body=59 status=ok
// SIG undefined FUN_1435d40a0(void)

longlong FUN_1435d40a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1435d3d90();
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x10) * 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return param_1;
}



// FUNCTION 1435d40f0 FUN_1435d40f0 body=83 status=ok
// SIG undefined FUN_1435d40f0(void)

longlong FUN_1435d40f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1435d3d90();
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x10) * 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x10) * 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return param_1;
}



// FUNCTION 1435d4150 FUN_1435d4150 body=134 status=ok
// SIG undefined FUN_1435d4150(void)

longlong FUN_1435d4150(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      uint param_5)

{
  int iVar1;
  
  FUN_1435d3d90(param_1,*(undefined8 *)(param_2 + 0x28));
  *(longlong *)(param_1 + 0x80) = param_2;
  FUN_1435ae740(param_1 + 0x88,param_2,
                (ulonglong)param_5 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  iVar1 = FUN_1435d3ac0(param_1,param_1 + 0x88);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar1;
  return param_1;
}



// FUNCTION 1435d41e0 FUN_1435d41e0 body=67 status=ok
// SIG undefined FUN_1435d41e0(void)

longlong FUN_1435d41e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1435d4150();
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x10) * 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(undefined8 *)(param_1 + 200) = uVar1;
  return param_1;
}



// FUNCTION 1435d4230 FUN_1435d4230 body=116 status=ok
// SIG undefined FUN_1435d4230(void)

undefined8 *
FUN_1435d4230(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  FUN_1435ae740(param_1 + 4,param_2,
                (param_4 & 0xffffffff) * 0x10 + *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148)
               );
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar2 = FUN_1435d3ac0(param_1,param_1 + 4);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar2;
  return param_1;
}



// FUNCTION 1435d4400 FUN_1435d4400 body=142 status=ok
// SIG undefined FUN_1435d4400(void)

undefined8 * FUN_1435d4400(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = uVar1;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x10) * 8);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  param_1[3] = uVar1;
  param_1[4] = param_2;
  FUN_1435ae740(param_1 + 5,param_2,
                (param_4 & 0xffffffff) * 0x10 + *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148)
               );
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar2 = FUN_1435d3ac0(param_1,param_1 + 5);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar2;
  return param_1;
}



// FUNCTION 1435d44a0 FUN_1435d44a0 body=56 status=ok
// SIG undefined FUN_1435d44a0(void)

longlong FUN_1435d44a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  FUN_1435d4400();
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x10) * 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  return param_1;
}



// FUNCTION 1435d44e0 FUN_1435d44e0 body=150 status=ok
// SIG undefined FUN_1435d44e0(void)

undefined8 * FUN_1435d44e0(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = param_3;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  FUN_1435ae740(param_1 + 4,param_2,
                (param_4 & 0xffffffff) * 0x10 + *(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x148)
               );
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar2 = FUN_1435d3ac0(param_1,param_1 + 4);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar2;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + -1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x10) * 8);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  param_1[0xc] = uVar1;
  return param_1;
}



// FUNCTION 1435d4600 FUN_1435d4600 body=69 status=ok
// SIG undefined FUN_1435d4600(void)

void FUN_1435d4600(longlong param_1)

{
  int *piVar1;
  
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x58));
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x38));
  piVar1 = (int *)(*(longlong *)(param_1 + 0x28) + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1435d4730 FUN_1435d4730 body=1274 status=ok
// SIG undefined FUN_1435d4730(void)

void FUN_1435d4730(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong local_res8;
  uint local_38 [2];
  int *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  puVar2 = *(uint **)(param_2 + 0x20);
  lVar8 = *(longlong *)(param_1 + 0x18);
  plVar9 = (longlong *)(lVar8 + 0x38);
  uVar3 = *(ulonglong *)(lVar8 + 0x40);
  if (((byte)*puVar2 & 6) != 2) {
    switch(*puVar2 >> 3 & 0xf) {
    case 0:
    case 1:
    case 2:
      uVar11 = uVar3 + 1;
      if (uVar11 < uVar3) {
        uVar10 = uVar11;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4800:
          FUN_143612e90(plVar9,plVar9,uVar10);
        }
      }
      else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
        uVar10 = (uVar11 >> 2) + uVar11;
        goto LAB_1435d4800;
      }
      *(ulonglong *)(lVar8 + 0x40) = uVar11;
      *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0x21;
    default:
      goto switchD_1435d47d4_caseD_3;
    case 4:
      uVar11 = uVar3 + 1;
      uVar10 = 0x27 - (ulonglong)((char)puVar2[4] != '\0');
      bVar13 = uVar11 < uVar3;
      break;
    case 5:
      uVar11 = uVar3 + 1;
      if (uVar11 < uVar3) {
        uVar10 = uVar11;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d489e:
          FUN_143612e90(plVar9,plVar9,uVar10);
        }
      }
      else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
        uVar10 = (uVar11 >> 2) + uVar11;
        goto LAB_1435d489e;
      }
      *(ulonglong *)(lVar8 + 0x40) = uVar11;
      *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0x2f;
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      if (((byte)*puVar4 & 0x78) == 0x28) {
        uVar10 = *(ulonglong *)(puVar4 + 4);
        uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
        bVar13 = uVar11 < *(ulonglong *)(lVar8 + 0x40);
        local_res8 = uVar10;
      }
      else {
        uVar10 = (ulonglong)(int)puVar4[4];
        uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
        bVar13 = uVar11 < *(ulonglong *)(lVar8 + 0x40);
      }
      break;
    case 6:
      uVar10 = (ulonglong)(int)puVar2[4];
      uVar11 = uVar3 + 1;
      if (uVar11 < uVar3) {
        uVar12 = uVar11;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4928:
          FUN_143612e90(plVar9,plVar9,uVar12);
        }
      }
      else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
        uVar12 = (uVar11 >> 2) + uVar11;
        goto LAB_1435d4928;
      }
      *(ulonglong *)(lVar8 + 0x40) = uVar11;
      *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0x2d;
      uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
      bVar13 = uVar11 < *(ulonglong *)(lVar8 + 0x40);
      break;
    case 7:
      uVar10 = (ulonglong)puVar2[4];
      uVar11 = uVar3 + 1;
      if (uVar11 < uVar3) {
        uVar12 = uVar11;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4981:
          FUN_143612e90(plVar9,plVar9,uVar12);
        }
      }
      else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
        uVar12 = (uVar11 >> 2) + uVar11;
        goto LAB_1435d4981;
      }
      *(ulonglong *)(lVar8 + 0x40) = uVar11;
      *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0x2e;
      uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
      bVar13 = uVar11 < *(ulonglong *)(lVar8 + 0x40);
      break;
    case 8:
      uVar10 = *(ulonglong *)(puVar2 + 4);
      lVar7 = *(longlong *)(param_1 + 0x10) + 0x90;
      local_res8 = uVar10;
      FUN_143604700(lVar7,lVar7,&local_res8);
      uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
      if (uVar11 < *(ulonglong *)(lVar8 + 0x40)) {
        uVar12 = uVar11;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d49fb:
          FUN_143612e90(plVar9,plVar9,uVar12);
        }
      }
      else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
        uVar12 = (uVar11 >> 2) + uVar11;
        goto LAB_1435d49fb;
      }
      *(ulonglong *)(lVar8 + 0x40) = uVar11;
      *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0x2c;
      uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
      bVar13 = uVar11 < *(ulonglong *)(lVar8 + 0x40);
      break;
    case 9:
      FUN_1436102b0(param_2,local_38);
      uVar12 = local_28;
      uVar10 = *(ulonglong *)(lVar8 + 0x40);
      uVar11 = uVar10 + 1;
      if (((byte)local_38[0] & 0x1f) == 0xb) {
        if (uVar11 < uVar10) {
          uVar10 = uVar11;
          if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4a75:
            FUN_143612e90(plVar9,plVar9,uVar10);
          }
        }
        else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
          uVar10 = (uVar11 >> 2) + uVar11;
          goto LAB_1435d4a75;
        }
        *(ulonglong *)(lVar8 + 0x40) = uVar11;
        *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0x31;
        uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x40)) {
          uVar10 = uVar11;
          if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4abe:
            FUN_143612e90(plVar9,plVar9,uVar10);
          }
        }
        else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
          uVar10 = (uVar11 >> 2) + uVar11;
          goto LAB_1435d4abe;
        }
        *(ulonglong *)(lVar8 + 0x40) = uVar11;
        *(ulonglong *)(*plVar9 + -8 + uVar11 * 8) = uVar12;
      }
      else {
        if (uVar11 < uVar10) {
          uVar10 = uVar11;
          if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4b00:
            FUN_143612e90(plVar9,plVar9,uVar10);
          }
        }
        else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
          uVar10 = (uVar11 >> 2) + uVar11;
          goto LAB_1435d4b00;
        }
        *(ulonglong *)(lVar8 + 0x40) = uVar11;
        *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0xb5;
        uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x10);
        uVar11 = *(ulonglong *)(lVar8 + 0x40) + 1;
        if (uVar11 < *(ulonglong *)(lVar8 + 0x40)) {
          uVar10 = uVar11;
          if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4b51:
            FUN_143612e90(plVar9,plVar9,uVar10);
          }
        }
        else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
          uVar10 = (uVar11 >> 2) + uVar11;
          goto LAB_1435d4b51;
        }
        *(ulonglong *)(lVar8 + 0x40) = uVar11;
        *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = uVar5;
        lVar8 = *(longlong *)(param_1 + 0x10) + 0xd0;
        local_res8 = local_28;
        FUN_1436048e0(lVar8,lVar8,&local_res8);
      }
      uVar6 = local_38[0] & 0x1f;
      if (9 < uVar6) {
        if ((local_38[0] >> 9 & 1) == 0) {
          if (uVar6 == 10) {
            piVar1 = (int *)(local_28 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else if ((((uVar6 == 0xb) || (uVar6 == 0xc)) || (local_28 = local_20, uVar6 - 0xd < 2)) &&
                  ((((local_28 & 1) == 0 && (local_28 != 0)) &&
                   ((*(uint *)(local_28 + 8) & 0x3fffff) != 0)))) {
            *(uint *)(local_28 + 8) = *(uint *)(local_28 + 8) - 1;
            FUN_1434ef880();
          }
        }
        else {
          *local_30 = *local_30 + -1;
          if (*local_30 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
        }
      }
      goto switchD_1435d47d4_caseD_3;
    }
    if (bVar13) {
      uVar12 = uVar11;
      if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4858:
        FUN_143612e90(plVar9,plVar9,uVar12);
      }
    }
    else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
      uVar12 = (uVar11 >> 2) + uVar11;
      goto LAB_1435d4858;
    }
    *(ulonglong *)(lVar8 + 0x40) = uVar11;
    *(ulonglong *)(*plVar9 + -8 + uVar11 * 8) = uVar10;
    goto switchD_1435d47d4_caseD_3;
  }
  uVar11 = uVar3 + 1;
  if (uVar11 < uVar3) {
    uVar10 = uVar11;
    if (uVar11 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d4796:
      FUN_143612e90(plVar9,plVar9,uVar10);
    }
  }
  else if (*(ulonglong *)(lVar8 + 0x48) < uVar11) {
    uVar10 = (uVar11 >> 2) + uVar11;
    goto LAB_1435d4796;
  }
  *(ulonglong *)(lVar8 + 0x40) = uVar11;
  *(undefined8 *)(*plVar9 + -8 + uVar11 * 8) = 0x20;
switchD_1435d47d4_caseD_3:
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d4c60 FUN_1435d4c60 body=332 status=ok
// SIG undefined FUN_1435d4c60(void)

void FUN_1435d4c60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar3 = *(int *)(param_2 + 0x18);
  uVar6 = 2;
  if (iVar3 == 0) {
    uVar6 = 100;
  }
  else if (iVar3 == 1) {
    uVar6 = 0x6e;
  }
  else if (iVar3 == 2) {
    uVar6 = 0x57;
  }
  else if (iVar3 == 3) {
    uVar6 = 0x67;
  }
  else if (iVar3 == 4) {
    uVar6 = 0x5a;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  plVar1 = (longlong *)(lVar4 + 0x38);
  uVar2 = *(ulonglong *)(lVar4 + 0x40) + 1;
  if (uVar2 < *(ulonglong *)(lVar4 + 0x40)) {
    uVar8 = uVar2;
    if (uVar2 < *(ulonglong *)(lVar4 + 0x48) >> 1) {
LAB_1435d4d05:
      FUN_143612e90(plVar1,plVar1,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar4 + 0x48) < uVar2) {
    uVar8 = (uVar2 >> 2) + uVar2;
    goto LAB_1435d4d05;
  }
  *(ulonglong *)(lVar4 + 0x40) = uVar2;
  *(undefined8 *)(*plVar1 + -8 + uVar2 * 8) = uVar6;
  if (iVar3 == 1) {
LAB_1435d4d56:
    lVar7 = (longlong)*(int *)(param_2 + 0x1c);
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) goto LAB_1435d4d56;
      if (iVar3 != 4) goto LAB_1435d4d83;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  }
  uVar2 = *(ulonglong *)(lVar4 + 0x40) + 1;
  if (uVar2 < *(ulonglong *)(lVar4 + 0x40)) {
    uVar8 = uVar2;
    if (uVar2 < *(ulonglong *)(lVar4 + 0x48) >> 1) {
LAB_1435d4d6c:
      FUN_143612e90(plVar1,plVar1,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar4 + 0x48) < uVar2) {
    uVar8 = (uVar2 >> 2) + uVar2;
    goto LAB_1435d4d6c;
  }
  *(ulonglong *)(lVar4 + 0x40) = uVar2;
  *(longlong *)(*plVar1 + -8 + uVar2 * 8) = lVar7;
LAB_1435d4d83:
  FUN_1435d76f0(param_1,uVar5);
  return;
}



// FUNCTION 1435d4dc0 FUN_1435d4dc0 body=325 status=ok
// SIG undefined FUN_1435d4dc0(void)

void FUN_1435d4dc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar6 = 2;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (iVar1 == 0) {
    uVar6 = 7;
  }
  else if (iVar1 == 1) {
    uVar6 = 0x6f;
  }
  else if (iVar1 == 2) {
    cVar4 = FUN_1435cf810(*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 8));
    uVar6 = 0x6b;
    if (cVar4 == '\0') {
      uVar6 = 0x29;
    }
  }
  else if (iVar1 == 3) {
    uVar6 = 0x1d;
  }
  plVar7 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar8 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d4e6f:
      FUN_143612e90(plVar7,plVar7,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar8 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d4e6f;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(*plVar7 + -8 + uVar5 * 8) = uVar6;
  if (iVar1 != 1) goto LAB_1435d4edc;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_2 + 0x1c);
  plVar7 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar8 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d4ec5:
      FUN_143612e90(plVar7,plVar7,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar8 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d4ec5;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(longlong *)(*plVar7 + -8 + uVar5 * 8) = (longlong)iVar1;
LAB_1435d4edc:
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d4f10 FUN_1435d4f10 body=290 status=ok
// SIG undefined FUN_1435d4f10(void)

void FUN_1435d4f10(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar7 = 2;
  if (uVar1 == 0) {
    uVar7 = 0x6d;
  }
  else if (uVar1 == 1) {
    uVar7 = 0xb7;
  }
  else if (uVar1 == 2) {
    uVar7 = 0xb8;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar5 = *(longlong *)(lVar3 + 0x40) + 1;
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  if (uVar5 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d4f9c:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar5) {
    uVar8 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d4f9c;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar5;
  *(undefined8 *)(*plVar6 + -8 + uVar5 * 8) = uVar7;
  if (2 < uVar1) goto LAB_1435d5009;
  lVar3 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar5 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d4ff2:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar5) {
    uVar8 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d4ff2;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar5;
  *(longlong *)(*plVar6 + -8 + uVar5 * 8) = (longlong)iVar2;
LAB_1435d5009:
  FUN_1435d76f0(param_1,uVar4);
  return;
}



// FUNCTION 1435d5040 FUN_1435d5040 body=289 status=ok
// SIG undefined FUN_1435d5040(void)

void FUN_1435d5040(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar7 = 2;
  if (uVar1 == 0) {
    uVar7 = 0x61;
  }
  else if (uVar1 == 1) {
    uVar7 = 5;
  }
  else if (uVar1 == 2) {
    uVar7 = 0x68;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar5 = *(longlong *)(lVar3 + 0x40) + 1;
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  if (uVar5 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d50cb:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar5) {
    uVar8 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d50cb;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar5;
  *(undefined8 *)(*plVar6 + -8 + uVar5 * 8) = uVar7;
  if (2 < uVar1) goto LAB_1435d5138;
  lVar3 = *(longlong *)(param_1 + 0x18);
  iVar2 = *(int *)(param_2 + 0x1c);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar5 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d5121:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar5) {
    uVar8 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d5121;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar5;
  *(longlong *)(*plVar6 + -8 + uVar5 * 8) = (longlong)iVar2;
LAB_1435d5138:
  FUN_1435d76f0(param_1,uVar4);
  return;
}



// FUNCTION 1435d5170 FUN_1435d5170 body=390 status=ok
// SIG undefined FUN_1435d5170(void)

void FUN_1435d5170(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  iVar10 = FUN_143596080(uVar2);
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 8);
  uVar5 = *(ulonglong *)(lVar3 + 0x40);
  lVar6 = *(longlong *)(lVar4 + 8);
  if ((lVar6 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x98) + 0x230) + 0xd8) != lVar6)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((lVar6 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x98) + 0x228) + 0xd8) != lVar6)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  switch(uVar2) {
  case 0:
    if ((lVar6 != 0) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x98) + 0x220) + 0xd8) == lVar6)) {
      iVar10 = 0x22;
    }
    break;
  case 1:
    if (bVar7) {
      iVar10 = 0x54;
    }
    break;
  case 2:
    if (bVar8) {
      iVar10 = 0x3f;
    }
    break;
  case 3:
    if (!bVar7) goto switchD_1435d5210_caseD_4;
    iVar10 = 0x35;
    break;
  case 4:
switchD_1435d5210_caseD_4:
    if (bVar8) {
      iVar10 = 0x98;
    }
    break;
  case 5:
    if (!bVar7) goto switchD_1435d5210_caseD_6;
    iVar10 = 0x36;
    break;
  case 6:
switchD_1435d5210_caseD_6:
    if (bVar8) {
      iVar10 = 0x99;
    }
    break;
  case 0xb:
    cVar9 = FUN_1435cf810(lVar4);
    if (cVar9 != '\0') {
      iVar10 = 0x69;
    }
  }
  uVar1 = uVar5 + 1;
  if (uVar1 < uVar5) {
    uVar11 = uVar1;
    if (*(ulonglong *)(lVar3 + 0x48) >> 1 <= uVar1) goto LAB_1435d52c6;
  }
  else {
    if (uVar1 <= *(ulonglong *)(lVar3 + 0x48)) goto LAB_1435d52c6;
    uVar11 = (uVar1 >> 2) + uVar1;
  }
  FUN_143612e90(lVar3 + 0x38,lVar3 + 0x38,uVar11);
LAB_1435d52c6:
  *(ulonglong *)(lVar3 + 0x40) = uVar1;
  *(longlong *)(*(longlong *)(lVar3 + 0x38) + -8 + uVar1 * 8) = (longlong)iVar10;
  FUN_1435d76f0(param_1,uVar5);
  return;
}



// FUNCTION 1435d5330 FUN_1435d5330 body=566 status=ok
// SIG undefined FUN_1435d5330(void)

void FUN_1435d5330(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  iVar1 = *(int *)(param_2 + 0x18);
  iVar8 = FUN_143596490(iVar1);
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 8) + 8);
  if ((lVar4 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x230) + 0xd8) != lVar4)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((lVar4 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x238) + 0xd8) != lVar4)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((lVar4 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x228) + 0xd8) != lVar4)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  switch(iVar1) {
  case 0:
    if (bVar5) {
      iVar8 = 10;
    }
    else if (bVar6) {
      iVar8 = 0x37;
    }
    break;
  case 1:
    if (bVar5) {
      iVar8 = 10;
    }
    break;
  case 2:
    if (bVar7) {
      iVar8 = 0x81;
    }
    break;
  case 3:
    if (bVar5) {
      iVar8 = 0xb;
    }
    else if (bVar6) {
      iVar8 = 0x38;
    }
    break;
  case 4:
    if (bVar5) {
      iVar8 = 0xb;
    }
    break;
  case 5:
    if (bVar7) {
      iVar8 = 0x82;
    }
    break;
  case 6:
    if (*(int *)(param_2 + 0x30) - 1U < 3) {
      iVar8 = *(int *)(param_2 + 0x30) + 0xd4;
    }
    break;
  case 7:
    if (*(int *)(param_2 + 0x30) < 4) {
      iVar8 = *(int *)(param_2 + 0x30) + 0xd0;
    }
  }
  plVar9 = (longlong *)(lVar2 + 0x38);
  uVar10 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar10 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar11 = uVar10;
    if (uVar10 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d54b9:
      FUN_143612e90(plVar9,plVar9,uVar11);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar10) {
    uVar11 = (uVar10 >> 2) + uVar10;
    goto LAB_1435d54b9;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar10;
  *(longlong *)(*plVar9 + -8 + uVar10 * 8) = (longlong)iVar8;
  if (iVar1 < 0) goto LAB_1435d553d;
  if (iVar1 < 6) {
    iVar8 = *(int *)(param_2 + 0x30);
  }
  else if ((7 < iVar1) || (iVar8 = *(int *)(param_2 + 0x30), iVar8 < 4)) goto LAB_1435d553d;
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar9 = (longlong *)(lVar2 + 0x38);
  uVar10 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar10 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar11 = uVar10;
    if (uVar10 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5526:
      FUN_143612e90(plVar9,plVar9,uVar11);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar10) {
    uVar11 = (uVar10 >> 2) + uVar10;
    goto LAB_1435d5526;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar10;
  *(longlong *)(*plVar9 + -8 + uVar10 * 8) = (longlong)iVar8;
LAB_1435d553d:
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d5590 FUN_1435d5590 body=696 status=ok
// SIG undefined FUN_1435d5590(void)

void FUN_1435d5590(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  iVar12 = FUN_1435967a0(uVar2);
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar13 = (longlong)iVar12;
  uVar4 = *(ulonglong *)(lVar3 + 0x40);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x40) + 8) + 8);
  lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 8);
  if ((((lVar5 == 0) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x230) + 0xd8) != lVar5)) ||
      (lVar7 = *(longlong *)(lVar6 + 8), lVar7 == 0)) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x98) + 0x230) + 0xd8) != lVar7)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (((lVar5 == 0) ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x238) + 0xd8) != lVar5)) ||
     ((lVar7 = *(longlong *)(lVar6 + 8), lVar7 == 0 ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x98) + 0x238) + 0xd8) != lVar7)))) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (((lVar5 == 0) ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x228) + 0xd8) != lVar5)) ||
     ((lVar7 = *(longlong *)(lVar6 + 8), lVar7 == 0 ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x98) + 0x228) + 0xd8) != lVar7)))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((((lVar5 == 0) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x240) + 0xd8) != lVar5)) ||
      (lVar5 = *(longlong *)(lVar6 + 8), lVar5 == 0)) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x98) + 0x240) + 0xd8) != lVar5)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  switch(uVar2) {
  case 0:
    if (bVar8) {
      lVar13 = 0x7c;
    }
    break;
  case 1:
    if (bVar9) {
      lVar13 = 0x79;
    }
    break;
  case 2:
    if (bVar9) {
      lVar13 = 0x7a;
    }
    else if (bVar8) {
      lVar13 = 0x7d;
    }
    break;
  case 3:
    if (bVar9) {
      lVar13 = 0x7a;
    }
    break;
  case 4:
    if (bVar8) {
      lVar13 = 0x7e;
    }
    break;
  case 5:
    if (bVar9) {
      lVar13 = 0x7b;
    }
    break;
  case 6:
    if (bVar8) {
      lVar13 = 0x7f;
    }
    break;
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    if (bVar9) {
      lVar13 = lVar13 + 0x200;
    }
    else if (bVar10) {
      lVar13 = lVar13 + 0x300;
    }
    else if (bVar8) {
      lVar13 = lVar13 + 0x400;
    }
    break;
  case 0x11:
    if (bVar9) {
      lVar13 = lVar13 + 0x200;
    }
    else if (bVar10) {
      lVar13 = lVar13 + 0x300;
    }
    else if (bVar8) {
      lVar13 = lVar13 + 0x400;
    }
    else if (bVar11) {
      lVar13 = lVar13 + 0xa00;
    }
  }
  uVar1 = uVar4 + 1;
  if (uVar1 < uVar4) {
    uVar14 = uVar1;
    if (*(ulonglong *)(lVar3 + 0x48) >> 1 <= uVar1) goto LAB_1435d5818;
  }
  else {
    if (uVar1 <= *(ulonglong *)(lVar3 + 0x48)) goto LAB_1435d5818;
    uVar14 = (uVar1 >> 2) + uVar1;
  }
  FUN_143612e90(lVar3 + 0x38,lVar3 + 0x38,uVar14);
LAB_1435d5818:
  *(ulonglong *)(lVar3 + 0x40) = uVar1;
  *(longlong *)(*(longlong *)(lVar3 + 0x38) + -8 + uVar1 * 8) = lVar13;
  FUN_1435d76f0(param_1,uVar4);
  return;
}



// FUNCTION 1435d58b0 FUN_1435d58b0 body=719 status=ok
// SIG undefined FUN_1435d58b0(void)

void FUN_1435d58b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar5 = 2;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (iVar1 == 0) {
    uVar5 = 0x66;
    if ((((*(longlong *)(param_2 + 0x80) == 0) && (*(longlong *)(param_2 + 0xa0) != 0)) &&
        (cVar4 = FUN_1435cf880(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8)), cVar4 != '\0'))
       && (uVar5 = 0x66,
          (*(byte *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x60) + 8) + 8) + 0x88) & 1
          ) != 0)) {
      uVar5 = 0x9a;
    }
  }
  else if (iVar1 == 1) {
    uVar5 = 4;
  }
  else if (iVar1 == 2) {
    uVar5 = 0x59;
  }
  else if (iVar1 == 3) {
    uVar5 = 0x6a;
  }
  plVar6 = (longlong *)(lVar2 + 0x38);
  uVar8 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar8 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar9 = uVar8;
    if (uVar8 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5988:
      FUN_143612e90(plVar6,plVar6,uVar9);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar8) {
    uVar9 = (uVar8 >> 2) + uVar8;
    goto LAB_1435d5988;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar8;
  *(ulonglong *)(*plVar6 + -8 + uVar8 * 8) = (ulonglong)uVar5;
  if (iVar1 == 0) {
    if (uVar5 == 0x9a) goto LAB_1435d5b58;
    lVar2 = *(longlong *)(param_1 + 0x18);
    iVar1 = *(int *)(param_2 + 0x1c);
    plVar6 = (longlong *)(lVar2 + 0x38);
    uVar8 = *(longlong *)(lVar2 + 0x40) + 1;
    if (uVar8 < *(ulonglong *)(lVar2 + 0x40)) {
      uVar9 = uVar8;
      if (uVar8 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5a2c:
        FUN_143612e90(plVar6,plVar6,uVar9);
      }
    }
    else if (*(ulonglong *)(lVar2 + 0x48) < uVar8) {
      uVar9 = (uVar8 >> 2) + uVar8;
      goto LAB_1435d5a2c;
    }
    *(ulonglong *)(lVar2 + 0x40) = uVar8;
    *(longlong *)(*plVar6 + -8 + uVar8 * 8) = (longlong)iVar1;
    lVar2 = *(longlong *)(param_1 + 0x18);
    plVar6 = (longlong *)(lVar2 + 0x38);
    uVar8 = *(longlong *)(lVar2 + 0x40) + 1;
    if (uVar8 < *(ulonglong *)(lVar2 + 0x40)) {
      uVar9 = uVar8;
      if (uVar8 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5a79:
        FUN_143612e90(plVar6,plVar6,uVar9);
      }
    }
    else if (*(ulonglong *)(lVar2 + 0x48) < uVar8) {
      uVar9 = (uVar8 >> 2) + uVar8;
      goto LAB_1435d5a79;
    }
    lVar7 = 0;
    *(ulonglong *)(lVar2 + 0x40) = uVar8;
    *(undefined8 *)(*plVar6 + -8 + uVar8 * 8) = 0;
    lVar2 = *(longlong *)(param_1 + 0x18);
    plVar6 = (longlong *)(lVar2 + 0x38);
    uVar8 = *(longlong *)(lVar2 + 0x40) + 1;
    if (uVar8 < *(ulonglong *)(lVar2 + 0x40)) {
      uVar9 = uVar8;
      if (uVar8 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5ac8:
        FUN_143612e90(plVar6,plVar6,uVar9);
      }
    }
    else if (*(ulonglong *)(lVar2 + 0x48) < uVar8) {
      uVar9 = (uVar8 >> 2) + uVar8;
      goto LAB_1435d5ac8;
    }
    *(ulonglong *)(lVar2 + 0x40) = uVar8;
    *(undefined8 *)(*plVar6 + -8 + uVar8 * 8) = 0;
    lVar2 = *(longlong *)(param_1 + 0x18);
    plVar6 = (longlong *)(lVar2 + 0x38);
    uVar8 = *(longlong *)(lVar2 + 0x40) + 1;
    if (uVar8 < *(ulonglong *)(lVar2 + 0x40)) {
      uVar9 = uVar8;
      if (uVar8 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5b15:
        FUN_143612e90(plVar6,plVar6,uVar9);
      }
    }
    else if (*(ulonglong *)(lVar2 + 0x48) < uVar8) {
      uVar9 = (uVar8 >> 2) + uVar8;
      goto LAB_1435d5b15;
    }
    *(ulonglong *)(lVar2 + 0x40) = uVar8;
    *(undefined8 *)(*plVar6 + -8 + uVar8 * 8) = 0;
  }
  else {
    if (2 < iVar1 - 1U) goto LAB_1435d5b58;
    lVar7 = (longlong)*(int *)(param_2 + 0x1c);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)(lVar2 + 0x38);
  uVar8 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar8 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar9 = uVar8;
    if (uVar8 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5b41:
      FUN_143612e90(plVar6,plVar6,uVar9);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar8) {
    uVar9 = (uVar8 >> 2) + uVar8;
    goto LAB_1435d5b41;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar8;
  *(longlong *)(*plVar6 + -8 + uVar8 * 8) = lVar7;
LAB_1435d5b58:
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d5b90 FUN_1435d5b90 body=506 status=ok
// SIG undefined FUN_1435d5b90(void)

void FUN_1435d5b90(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_2 + 0x18);
  uVar5 = 2;
  if (iVar1 == 0) {
    uVar5 = 0x86;
  }
  else if (iVar1 == 1) {
    uVar5 = 0x6c;
  }
  else if (iVar1 == 2) {
    uVar5 = 0x80;
  }
  else if (iVar1 == 4) {
    uVar5 = 0xb2;
  }
  else if (iVar1 == 5) {
    uVar5 = 0xb6;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  if (iVar1 == 2) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x90);
    if (iVar2 == 1) {
      uVar5 = 0x76;
    }
    else if (iVar2 == 2) {
      uVar5 = 0x73;
    }
    else if (iVar2 == 3) {
      uVar5 = 0x74;
    }
    else if (iVar2 == 4) {
      uVar5 = 0x75;
    }
    else if (iVar2 == 5) {
      uVar5 = 0x85;
    }
    else {
      uVar5 = 0x80;
    }
  }
  else if (iVar1 == 3) {
    return;
  }
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar8 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar8 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar9 = uVar8;
    if (uVar8 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d5c8e:
      FUN_143612e90(plVar6,plVar6,uVar9);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar8) {
    uVar9 = (uVar8 >> 2) + uVar8;
    goto LAB_1435d5c8e;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar8;
  *(ulonglong *)(*plVar6 + -8 + uVar8 * 8) = (ulonglong)uVar5;
  if (iVar1 == 0) {
LAB_1435d5cb8:
    uVar7 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    if (iVar1 == 2) {
      if (uVar5 == 0x80) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        uVar7 = *(undefined8 *)(param_2 + 0x20);
        plVar6 = (longlong *)(lVar3 + 0x38);
        uVar8 = *(longlong *)(lVar3 + 0x40) + 1;
        if (uVar8 < *(ulonglong *)(lVar3 + 0x40)) {
          uVar9 = uVar8;
          if (uVar8 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d5d00:
            FUN_143612e90(plVar6,plVar6,uVar9);
          }
        }
        else if (*(ulonglong *)(lVar3 + 0x48) < uVar8) {
          uVar9 = (uVar8 >> 2) + uVar8;
          goto LAB_1435d5d00;
        }
        *(ulonglong *)(lVar3 + 0x40) = uVar8;
        *(undefined8 *)(*plVar6 + -8 + uVar8 * 8) = uVar7;
      }
    }
    else if (iVar1 == 4) goto LAB_1435d5cb8;
    uVar7 = *(undefined8 *)(param_2 + 0x28);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar8 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar8 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar9 = uVar8;
    if (*(ulonglong *)(lVar3 + 0x48) >> 1 <= uVar8) goto LAB_1435d5d5c;
  }
  else {
    if (uVar8 <= *(ulonglong *)(lVar3 + 0x48)) goto LAB_1435d5d5c;
    uVar9 = (uVar8 >> 2) + uVar8;
  }
  FUN_143612e90(plVar6,plVar6,uVar9);
LAB_1435d5d5c:
  *(ulonglong *)(lVar3 + 0x40) = uVar8;
  *(undefined8 *)(*plVar6 + -8 + uVar8 * 8) = uVar7;
  FUN_1435d76f0(param_1,uVar4);
  return;
}



// FUNCTION 1435d5d90 FUN_1435d5d90 body=139 status=ok
// SIG undefined FUN_1435d5d90(void)

void FUN_1435d5d90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar1 = (longlong *)(lVar2 + 0x38);
  uVar4 = *(longlong *)(lVar2 + 0x40) + 1;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (uVar4 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar5 = uVar4;
    if (*(ulonglong *)(lVar2 + 0x48) >> 1 <= uVar4) goto LAB_1435d5dec;
  }
  else {
    if (uVar4 <= *(ulonglong *)(lVar2 + 0x48)) goto LAB_1435d5dec;
    uVar5 = (uVar4 >> 2) + uVar4;
  }
  FUN_143612e90(plVar1,plVar1,uVar5);
LAB_1435d5dec:
  *(ulonglong *)(lVar2 + 0x40) = uVar4;
  *(undefined8 *)(*plVar1 + -8 + uVar4 * 8) = 0x2b;
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d5e30 FUN_1435d5e30 body=312 status=ok
// SIG undefined FUN_1435d5e30(void)

void FUN_1435d5e30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar4 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar6 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5e88:
      FUN_143612e90(plVar4,plVar4,uVar6);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d5e88;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(*plVar4 + -8 + uVar5 * 8) = 0x32;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_2 + 0x18);
  plVar4 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar6 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5edd:
      FUN_143612e90(plVar4,plVar4,uVar6);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d5edd;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(longlong *)(*plVar4 + -8 + uVar5 * 8) = (longlong)iVar1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_2 + 0x1c);
  plVar4 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar6 = uVar5;
    if (*(ulonglong *)(lVar2 + 0x48) >> 1 <= uVar5) goto LAB_1435d5f39;
  }
  else {
    if (uVar5 <= *(ulonglong *)(lVar2 + 0x48)) goto LAB_1435d5f39;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_143612e90(plVar4,plVar4,uVar6);
LAB_1435d5f39:
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(longlong *)(*plVar4 + -8 + uVar5 * 8) = (longlong)iVar1;
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d5f70 FUN_1435d5f70 body=252 status=ok
// SIG undefined FUN_1435d5f70(void)

void FUN_1435d5f70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  plVar4 = (longlong *)(lVar2 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  uVar7 = 6;
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar7 = 2;
  }
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar6 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d5fdb:
      FUN_143612e90(plVar4,plVar4,uVar6);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d5fdb;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(*plVar4 + -8 + uVar5 * 8) = uVar7;
  if (*(int *)(param_2 + 0x18) != 0) goto LAB_1435d6049;
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_2 + 0x1c);
  plVar4 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar6 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d6032:
      FUN_143612e90(plVar4,plVar4,uVar6);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d6032;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(longlong *)(*plVar4 + -8 + uVar5 * 8) = (longlong)iVar1;
LAB_1435d6049:
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d6080 FUN_1435d6080 body=436 status=ok
// SIG undefined FUN_1435d6080(void)

void FUN_1435d6080(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_2 + 0x18);
  iVar5 = FUN_143595520(iVar1);
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  if (iVar1 == 0) {
    uVar2 = uVar2 >> 1;
  }
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar7 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar7 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar7;
    if (uVar7 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d60f7:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar7) {
    uVar8 = (uVar7 >> 2) + uVar7;
    goto LAB_1435d60f7;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar7;
  *(longlong *)(*plVar6 + -8 + uVar7 * 8) = (longlong)iVar5;
  if (iVar1 - 7U < 4) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    iVar5 = *(int *)(param_2 + 0x1c);
    plVar6 = (longlong *)(lVar3 + 0x38);
    uVar7 = *(longlong *)(lVar3 + 0x40) + 1;
    if (uVar7 < *(ulonglong *)(lVar3 + 0x40)) {
      uVar8 = uVar7;
      if (uVar7 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d6152:
        FUN_143612e90(plVar6,plVar6,uVar8);
      }
    }
    else if (*(ulonglong *)(lVar3 + 0x48) < uVar7) {
      uVar8 = (uVar7 >> 2) + uVar7;
      goto LAB_1435d6152;
    }
    *(ulonglong *)(lVar3 + 0x40) = uVar7;
    *(longlong *)(*plVar6 + -8 + uVar7 * 8) = (longlong)iVar5;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar7 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar7 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar7;
    if (uVar7 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d619f:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar7) {
    uVar8 = (uVar7 >> 2) + uVar7;
    goto LAB_1435d619f;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar7;
  *(ulonglong *)(*plVar6 + -8 + uVar7 * 8) = (ulonglong)uVar2;
  if (1 < iVar1 - 7U) goto LAB_1435d620d;
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x20);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar7 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar7 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar7;
    if (uVar7 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d61f6:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar7) {
    uVar8 = (uVar7 >> 2) + uVar7;
    goto LAB_1435d61f6;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar7;
  *(ulonglong *)(*plVar6 + -8 + uVar7 * 8) = (ulonglong)uVar2;
LAB_1435d620d:
  FUN_1435d76f0(param_1,uVar4);
  return;
}



// FUNCTION 1435d6240 FUN_1435d6240 body=337 status=ok
// SIG undefined FUN_1435d6240(void)

void FUN_1435d6240(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  iVar5 = FUN_143595770(uVar1);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar7 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar7 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar7;
    if (uVar7 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d62af:
      FUN_143612e90(plVar6,plVar6,uVar8);
    }
  }
  else if (*(ulonglong *)(lVar3 + 0x48) < uVar7) {
    uVar8 = (uVar7 >> 2) + uVar7;
    goto LAB_1435d62af;
  }
  *(ulonglong *)(lVar3 + 0x40) = uVar7;
  *(longlong *)(*plVar6 + -8 + uVar7 * 8) = (longlong)iVar5;
  if (uVar1 < 6) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    iVar5 = *(int *)(param_2 + 0x1c);
    plVar6 = (longlong *)(lVar3 + 0x38);
    uVar7 = *(longlong *)(lVar3 + 0x40) + 1;
    if (uVar7 < *(ulonglong *)(lVar3 + 0x40)) {
      uVar8 = uVar7;
      if (uVar7 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d6306:
        FUN_143612e90(plVar6,plVar6,uVar8);
      }
    }
    else if (*(ulonglong *)(lVar3 + 0x48) < uVar7) {
      uVar8 = (uVar7 >> 2) + uVar7;
      goto LAB_1435d6306;
    }
    *(ulonglong *)(lVar3 + 0x40) = uVar7;
    *(longlong *)(*plVar6 + -8 + uVar7 * 8) = (longlong)iVar5;
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)(lVar3 + 0x38);
  uVar7 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar7 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar7;
    if (*(ulonglong *)(lVar3 + 0x48) >> 1 <= uVar7) goto LAB_1435d635e;
  }
  else {
    if (uVar7 <= *(ulonglong *)(lVar3 + 0x48)) goto LAB_1435d635e;
    uVar8 = (uVar7 >> 2) + uVar7;
  }
  FUN_143612e90(plVar6,plVar6,uVar8);
LAB_1435d635e:
  *(ulonglong *)(lVar3 + 0x40) = uVar7;
  *(ulonglong *)(*plVar6 + -8 + uVar7 * 8) = (ulonglong)uVar2;
  FUN_1435d76f0(param_1,uVar4);
  return;
}



// FUNCTION 1435d63a0 FUN_1435d63a0 body=238 status=ok
// SIG undefined FUN_1435d63a0(void)

void FUN_1435d63a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  iVar3 = FUN_143595b10(*(undefined4 *)(param_2 + 0x18));
  plVar4 = (longlong *)(lVar1 + 0x38);
  uVar5 = *(longlong *)(lVar1 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar1 + 0x40)) {
    uVar6 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar1 + 0x48) >> 1) {
LAB_1435d6403:
      FUN_143612e90(plVar4,plVar4,uVar6);
    }
  }
  else if (*(ulonglong *)(lVar1 + 0x48) < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d6403;
  }
  *(ulonglong *)(lVar1 + 0x40) = uVar5;
  *(longlong *)(*plVar4 + -8 + uVar5 * 8) = (longlong)iVar3;
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_2 + 0x1c);
  plVar4 = (longlong *)(lVar1 + 0x38);
  uVar5 = *(longlong *)(lVar1 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar1 + 0x40)) {
    uVar6 = uVar5;
    if (*(ulonglong *)(lVar1 + 0x48) >> 1 <= uVar5) goto LAB_1435d645f;
  }
  else {
    if (uVar5 <= *(ulonglong *)(lVar1 + 0x48)) goto LAB_1435d645f;
    uVar6 = (uVar5 >> 2) + uVar5;
  }
  FUN_143612e90(plVar4,plVar4,uVar6);
LAB_1435d645f:
  *(ulonglong *)(lVar1 + 0x40) = uVar5;
  *(longlong *)(*plVar4 + -8 + uVar5 * 8) = (longlong)iVar3;
  FUN_1435d76f0(param_1,uVar2);
  return;
}



// FUNCTION 1435d64a0 FUN_1435d64a0 body=41 status=ok
// SIG undefined FUN_1435d64a0(void)

void FUN_1435d64a0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_143604c30();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 1435d64d0 FUN_1435d64d0 body=255 status=ok
// SIG undefined FUN_1435d64d0(void)

void FUN_1435d64d0(uint *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if (*(uint *)(param_2 + 0x10) >> 5 == *param_1) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f;
  if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8)) {
    return;
  }
  uVar5 = 2;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (*(int *)(param_2 + 0x80) == 1) {
    uVar5 = 0x10;
  }
  plVar6 = (longlong *)(lVar2 + 0x38);
  uVar4 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar4 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar7 = uVar4;
    if (*(ulonglong *)(lVar2 + 0x48) >> 1 <= uVar4) goto LAB_1435d6585;
  }
  else {
    if (uVar4 <= *(ulonglong *)(lVar2 + 0x48)) goto LAB_1435d6585;
    uVar7 = (uVar4 >> 2) + uVar4;
  }
  FUN_143612e90(plVar6,plVar6,uVar7);
LAB_1435d6585:
  *(ulonglong *)(lVar2 + 0x40) = uVar4;
  *(undefined8 *)(*plVar6 + -8 + uVar4 * 8) = uVar5;
  if (lVar1 != 0) {
    FUN_1435d6d00(param_1,lVar1,0xffffffff);
  }
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d65e0 FUN_1435d65e0 body=388 status=ok
// SIG undefined FUN_1435d65e0(void)

void FUN_1435d65e0(uint *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(uint *)(param_2 + 0x10) >> 5 == *param_1) {
    return;
  }
  *(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 6) + 0x40);
  if (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) ==
      *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8)) {
    FUN_143595400(param_2);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar3;
  }
  uVar3 = FUN_1435d7820(param_1,param_2);
  lVar2 = *(longlong *)(param_1 + 6);
  plVar4 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar6 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d6698:
      FUN_143612e90(plVar4,plVar4,uVar6);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d6698;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(*plVar4 + -8 + uVar5 * 8) = uVar3;
  FUN_1435d6d00(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x30),0xffffffff);
  if (*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x30) ==
      *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8)) goto LAB_1435d6742;
  lVar2 = *(longlong *)(param_1 + 6);
  plVar4 = (longlong *)(lVar2 + 0x38);
  uVar5 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar6 = uVar5;
    if (uVar5 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d6713:
      FUN_143612e90(plVar4,plVar4,uVar6);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar5) {
    uVar6 = (uVar5 >> 2) + uVar5;
    goto LAB_1435d6713;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar5;
  *(undefined8 *)(*plVar4 + -8 + uVar5 * 8) = 0x10;
  FUN_1435d6d00(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x30),0xffffffff);
LAB_1435d6742:
  FUN_1435d76f0(param_1,uVar1);
  return;
}



// FUNCTION 1435d6770 FUN_1435d6770 body=257 status=ok
// SIG undefined FUN_1435d6770(void)

void FUN_1435d6770(uint *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  if (*(uint *)(param_2 + 0x10) >> 5 == *param_1) {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f;
  uVar6 = 2;
  iVar1 = *(int *)(param_2 + 0x80);
  lVar3 = *(longlong *)(param_1 + 6);
  uVar4 = *(undefined8 *)(lVar3 + 0x40);
  if (iVar1 == 0) {
    uVar6 = 3;
  }
  else if (iVar1 == 1) {
    uVar6 = 0x47;
  }
  else if (iVar1 == 2) {
    uVar6 = 0x48;
  }
  plVar7 = (longlong *)(lVar3 + 0x38);
  uVar5 = *(longlong *)(lVar3 + 0x40) + 1;
  if (uVar5 < *(ulonglong *)(lVar3 + 0x40)) {
    uVar8 = uVar5;
    if (*(ulonglong *)(lVar3 + 0x48) >> 1 <= uVar5) goto LAB_1435d6826;
  }
  else {
    if (uVar5 <= *(ulonglong *)(lVar3 + 0x48)) goto LAB_1435d6826;
    uVar8 = (uVar5 >> 2) + uVar5;
  }
  FUN_143612e90(plVar7,plVar7,uVar8);
LAB_1435d6826:
  *(ulonglong *)(lVar3 + 0x40) = uVar5;
  *(undefined8 *)(*plVar7 + -8 + uVar5 * 8) = uVar6;
  if (lVar2 != 0) {
    FUN_1435d6d00(param_1,lVar2,0xffffffff);
  }
  FUN_1435d76f0(param_1,uVar4);
  return;
}



// FUNCTION 1435d6880 FUN_1435d6880 body=356 status=ok
// SIG undefined FUN_1435d6880(void)

void FUN_1435d6880(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(uint *)(param_2 + 0x10) >> 5 == *param_1) {
    return;
  }
  *(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f;
  lVar2 = *(longlong *)(param_1 + 6);
  plVar5 = (longlong *)(lVar2 + 0x38);
  uVar6 = *(longlong *)(lVar2 + 0x40) + 1;
  uVar3 = *(undefined8 *)(lVar2 + 0x40);
  if (uVar6 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar7 = uVar6;
    if (uVar6 < *(ulonglong *)(lVar2 + 0x48) >> 1) {
LAB_1435d68ff:
      FUN_143612e90(plVar5,plVar5,uVar7);
    }
  }
  else if (*(ulonglong *)(lVar2 + 0x48) < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1435d68ff;
  }
  *(ulonglong *)(lVar2 + 0x40) = uVar6;
  *(undefined8 *)(*plVar5 + -8 + uVar6 * 8) = 0x1b;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1435d6d00(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x30),1);
  }
  lVar2 = *(longlong *)(param_1 + 6);
  uVar1 = *(uint *)(param_2 + 0x18);
  plVar5 = (longlong *)(lVar2 + 0x38);
  uVar6 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar6 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar7 = uVar6;
    if (*(ulonglong *)(lVar2 + 0x48) >> 1 <= uVar6) goto LAB_1435d697e;
  }
  else {
    if (uVar6 <= *(ulonglong *)(lVar2 + 0x48)) goto LAB_1435d697e;
    uVar7 = (uVar6 >> 2) + uVar6;
  }
  FUN_143612e90(plVar5,plVar5,uVar7);
LAB_1435d697e:
  *(ulonglong *)(lVar2 + 0x40) = uVar6;
  uVar4 = 0;
  *(ulonglong *)(*plVar5 + -8 + uVar6 * 8) = (ulonglong)(uVar1 - 1);
  if (uVar1 != 0) {
    plVar5 = (longlong *)(param_2 + 0x48);
    do {
      FUN_1435d6d00(param_1,*(undefined8 *)(*plVar5 + 0x30),uVar4 + 3);
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 < uVar1);
  }
  FUN_1435d76f0(param_1,uVar3);
  return;
}



// FUNCTION 1435d69f0 FUN_1435d69f0 body=772 status=ok
// SIG undefined FUN_1435d69f0(void)

void FUN_1435d69f0(uint *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (*(uint *)(param_2 + 0x10) >> 5 == *param_1) {
    return;
  }
  *(uint *)(param_2 + 0x10) = *param_1 << 5 | *(uint *)(param_2 + 0x10) & 0x1f;
  lVar8 = *(longlong *)(param_1 + 6);
  plVar5 = (longlong *)(lVar8 + 0x38);
  uVar2 = *(undefined8 *)(lVar8 + 0x40);
  uVar10 = 0x52;
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar10 = 2;
  }
  uVar6 = *(longlong *)(lVar8 + 0x40) + 1;
  if (uVar6 < *(ulonglong *)(lVar8 + 0x40)) {
    uVar7 = uVar6;
    if (uVar6 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d6a7b:
      FUN_143612e90(plVar5,plVar5,uVar7);
    }
  }
  else if (*(ulonglong *)(lVar8 + 0x48) < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1435d6a7b;
  }
  *(ulonglong *)(lVar8 + 0x40) = uVar6;
  *(undefined8 *)(*plVar5 + -8 + uVar6 * 8) = uVar10;
  if (*(int *)(param_2 + 0x18) != 0) {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1435d6d00(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x30),1);
    }
    uVar1 = *(uint *)(param_2 + 0x20);
    lVar8 = *(longlong *)(param_1 + 6);
    plVar5 = (longlong *)(lVar8 + 0x38);
    uVar6 = *(longlong *)(lVar8 + 0x40) + 1;
    if (uVar6 < *(ulonglong *)(lVar8 + 0x40)) {
      uVar7 = uVar6;
      if (uVar6 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d6bee:
        FUN_143612e90(plVar5,plVar5,uVar7);
      }
    }
    else if (*(ulonglong *)(lVar8 + 0x48) < uVar6) {
      uVar7 = (uVar6 >> 2) + uVar6;
      goto LAB_1435d6bee;
    }
    *(ulonglong *)(lVar8 + 0x40) = uVar6;
    *(ulonglong *)(*plVar5 + -8 + uVar6 * 8) = (ulonglong)(uVar1 - 1);
    uVar9 = 0;
    if (uVar1 != 0) {
      lVar11 = 0;
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 6);
        plVar5 = (longlong *)(lVar3 + 0x38);
        lVar4 = *(longlong *)(lVar8 + *(longlong *)(param_2 + 0x38));
        uVar6 = *(longlong *)(lVar3 + 0x40) + 1;
        uVar10 = *(undefined8 *)(*(longlong *)(lVar11 + 8 + *(longlong *)(param_2 + 0x30)) + 8);
        if (uVar6 < *(ulonglong *)(lVar3 + 0x40)) {
          uVar7 = uVar6;
          if (uVar6 < *(ulonglong *)(lVar3 + 0x48) >> 1) {
LAB_1435d6c80:
            FUN_143612e90(plVar5,plVar5,uVar7);
          }
        }
        else if (*(ulonglong *)(lVar3 + 0x48) < uVar6) {
          uVar7 = (uVar6 >> 2) + uVar6;
          goto LAB_1435d6c80;
        }
        *(ulonglong *)(lVar3 + 0x40) = uVar6;
        *(undefined8 *)(*plVar5 + -8 + uVar6 * 8) = uVar10;
        FUN_1435d6d00(param_1,*(undefined8 *)(lVar4 + 0x30),uVar9 + 3);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 8;
        lVar11 = lVar11 + 0x20;
      } while (uVar9 < uVar1);
    }
    goto LAB_1435d6ccc;
  }
  lVar8 = *(longlong *)(param_1 + 6);
  lVar11 = *(longlong *)(param_2 + 0x28);
  plVar5 = (longlong *)(lVar8 + 0x38);
  lVar3 = **(longlong **)(param_2 + 0x38);
  uVar6 = *(longlong *)(lVar8 + 0x40) + 1;
  uVar10 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 8) + 8);
  if (uVar6 < *(ulonglong *)(lVar8 + 0x40)) {
    uVar7 = uVar6;
    if (uVar6 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d6aee:
      FUN_143612e90(plVar5,plVar5,uVar7);
    }
  }
  else if (*(ulonglong *)(lVar8 + 0x48) < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1435d6aee;
  }
  *(ulonglong *)(lVar8 + 0x40) = uVar6;
  *(undefined8 *)(*plVar5 + -8 + uVar6 * 8) = uVar10;
  FUN_1435d6d00(param_1,*(undefined8 *)(lVar3 + 0x30),0xffffffff);
  if (*(longlong *)(lVar11 + 0x30) == *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8))
  goto LAB_1435d6ccc;
  lVar8 = *(longlong *)(param_1 + 6);
  plVar5 = (longlong *)(lVar8 + 0x38);
  uVar6 = *(longlong *)(lVar8 + 0x40) + 1;
  if (uVar6 < *(ulonglong *)(lVar8 + 0x40)) {
    uVar7 = uVar6;
    if (uVar6 < *(ulonglong *)(lVar8 + 0x48) >> 1) {
LAB_1435d6b60:
      FUN_143612e90(plVar5,plVar5,uVar7);
    }
  }
  else if (*(ulonglong *)(lVar8 + 0x48) < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1435d6b60;
  }
  *(ulonglong *)(lVar8 + 0x40) = uVar6;
  *(undefined8 *)(*plVar5 + -8 + uVar6 * 8) = 0x10;
  FUN_1435d6d00(param_1,*(undefined8 *)(lVar11 + 0x30),0xffffffff);
LAB_1435d6ccc:
  FUN_1435d76f0(param_1,uVar2);
  return;
}



// FUNCTION 1435d6d00 FUN_1435d6d00 body=405 status=ok
// SIG undefined FUN_1435d6d00(void)

void FUN_1435d6d00(uint *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(longlong *)(*(longlong *)(param_1 + 2) + 0x280) == param_2) {
    return;
  }
  if (*(uint *)(param_2 + 0x10) >> 5 == *param_1) {
    lVar2 = *(longlong *)(param_1 + 6);
    uVar1 = *(uint *)(param_2 + 0x28);
    plVar5 = (longlong *)(lVar2 + 0x38);
    uVar6 = *(longlong *)(lVar2 + 0x40) + 1;
    lVar3 = *(longlong *)(lVar2 + 0x40);
    if (uVar6 < *(ulonglong *)(lVar2 + 0x40)) {
      uVar7 = uVar6;
      if (*(ulonglong *)(lVar2 + 0x48) >> 1 <= uVar6) goto LAB_1435d6d82;
    }
    else {
      if (uVar6 <= *(ulonglong *)(lVar2 + 0x48)) goto LAB_1435d6d82;
      uVar7 = (uVar6 >> 2) + uVar6;
    }
    FUN_143612e90(plVar5,plVar5,uVar7);
LAB_1435d6d82:
    *(ulonglong *)(lVar2 + 0x40) = uVar6;
    *(ulonglong *)(*plVar5 + -8 + uVar6 * 8) = ((ulonglong)uVar1 - lVar3) + (longlong)param_3;
    return;
  }
  uVar6 = *(longlong *)(param_1 + 0x10) + 1;
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 6) + 0x40);
  if (uVar6 < *(ulonglong *)(param_1 + 0x10)) {
    uVar7 = uVar6;
    if (uVar6 < *(ulonglong *)(param_1 + 0x12) >> 1) {
LAB_1435d6dd2:
      FUN_143612de0(param_1 + 0xe,*(undefined8 *)(param_1 + 0x14),uVar7);
    }
  }
  else if (*(ulonglong *)(param_1 + 0x12) < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1435d6dd2;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar6;
  *(undefined8 *)(*(longlong *)(param_1 + 0xe) + -8 + uVar6 * 8) = uVar4;
  uVar6 = *(longlong *)(param_1 + 0x18) + 1;
  if (uVar6 < *(ulonglong *)(param_1 + 0x18)) {
    uVar7 = uVar6;
    if (uVar6 < *(ulonglong *)(param_1 + 0x1a) >> 1) {
LAB_1435d6e1f:
      FUN_143612700(param_1 + 0x16,*(undefined8 *)(param_1 + 0x1c),uVar7);
    }
  }
  else if (*(ulonglong *)(param_1 + 0x1a) < uVar6) {
    uVar7 = (uVar6 >> 2) + uVar6;
    goto LAB_1435d6e1f;
  }
  *(ulonglong *)(param_1 + 0x18) = uVar6;
  *(int *)(*(longlong *)(param_1 + 0x16) + -4 + uVar6 * 4) = param_3;
  lVar2 = *(longlong *)(param_1 + 6);
  plVar5 = (longlong *)(lVar2 + 0x38);
  uVar6 = *(longlong *)(lVar2 + 0x40) + 1;
  if (uVar6 < *(ulonglong *)(lVar2 + 0x40)) {
    uVar7 = uVar6;
    if (*(ulonglong *)(lVar2 + 0x48) >> 1 <= uVar6) goto LAB_1435d6e76;
  }
  else {
    if (uVar6 <= *(ulonglong *)(lVar2 + 0x48)) goto LAB_1435d6e76;
    uVar7 = (uVar6 >> 2) + uVar6;
  }
  FUN_143612e90(plVar5,plVar5,uVar7);
LAB_1435d6e76:
  *(ulonglong *)(lVar2 + 0x40) = uVar6;
  *(longlong *)(*plVar5 + -8 + uVar6 * 8) = param_2;
  return;
}



// FUNCTION 1435d6ea0 FUN_1435d6ea0 body=1975 status=ok
// SIG undefined FUN_1435d6ea0(void)

void FUN_1435d6ea0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *****pppppuVar7;
  longlong lVar8;
  byte bVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  byte bVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 *****pppppuVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  undefined8 local_res10;
  ulonglong local_res18;
  longlong *local_res20;
  undefined8 local_f8;
  ulonglong *local_f0;
  longlong **local_e8;
  longlong local_e0;
  undefined1 local_d8 [8];
  uint local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_af;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 ****local_98;
  undefined8 ****local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  
  lVar21 = *(longlong *)(param_1 + 8);
  uVar6 = *(undefined8 *)(lVar21 + 0x10);
  local_res10 = param_2;
  local_e0 = lVar21;
  local_b0 = Scaleform::Alg::RoundUpToPowerOfTwo(0x18);
  uVar32 = *(ulonglong *)(param_2 + 0xd8);
  lVar30 = 0;
  local_98 = &local_98;
  local_90 = &local_98;
  local_af = 0x20;
  local_a0 = 0;
  uVar22 = *(undefined8 *)(lVar21 + 0x10);
  local_c0 = 0;
  local_f8 = uVar22;
  local_b8 = uVar22;
  local_a8 = uVar6;
  if (uVar32 != param_2) {
    do {
      lVar33 = 0;
      uVar26 = *(uint *)(uVar32 + 0x28);
      uVar34 = *(uint *)(uVar32 + 0x2c);
      local_c8 = *(longlong *)(uVar32 + 0x28);
      lVar21 = -1;
      lVar35 = -1;
      if (*(uint *)(uVar32 + 0xec) != 0) {
        uVar31 = (ulonglong)*(uint *)(uVar32 + 0xec);
        uVar27 = uVar26;
        uVar24 = uVar34;
        do {
          puVar18 = (ulonglong *)&DAT_00000008;
          puVar13 = (undefined8 *)0x0;
          local_res18 = *(ulonglong *)(lVar33 + *(longlong *)(uVar32 + 0x108));
          puVar20 = puVar13;
          if (lVar30 != 0) {
            uVar10 = 0x1505;
            do {
              pbVar3 = (byte *)((longlong)&local_res10 + 7 + (longlong)puVar18);
              puVar18 = (ulonglong *)((longlong)puVar18 + -1);
              uVar10 = (ulonglong)*pbVar3 + uVar10 * 0x1003f;
            } while (puVar18 != (ulonglong *)0x0);
            uVar10 = *(ulonglong *)(lVar30 + 8) & uVar10;
            puVar18 = (ulonglong *)(lVar30 + 0x10 + uVar10 * 0x20);
            if ((*puVar18 != 0xfffffffffffffffe) && (uVar19 = uVar10, puVar18[1] == uVar10)) {
              while ((puVar18[1] != uVar10 || (puVar18[2] != local_res18))) {
                uVar19 = *puVar18;
                if (uVar19 == 0xffffffffffffffff) goto LAB_1435d7029;
                puVar18 = (ulonglong *)(lVar30 + 0x10 + uVar19 * 0x20);
              }
              if (-1 < (longlong)uVar19) {
                puVar20 = (undefined8 *)((uVar19 + 1) * 0x20 + lVar30);
              }
            }
          }
LAB_1435d7029:
          puVar11 = puVar20 + 1;
          if (puVar20 == (undefined8 *)0x0) {
            puVar11 = puVar13;
          }
          if (puVar11 == (undefined8 *)0x0) {
            bVar9 = Scaleform::Alg::RoundUpToPowerOfTwo
                              (CONCAT71((int7)((ulonglong)puVar18 >> 8),0x10));
            bVar17 = 0x40;
            if (bVar9 < 0x40) {
              bVar17 = bVar9;
            }
            if (bVar17 < 8) {
              bVar17 = 8;
            }
            local_res20 = (longlong *)FUN_1435ba1a0(&local_b0,0x10,bVar17);
            if (local_res20 != (longlong *)0x0) {
              *local_res20 = (longlong)local_res20;
              local_res20[1] = (longlong)local_res20;
            }
            lVar29 = 0x1505;
            local_f0 = &local_res18;
            lVar30 = 8;
            local_e8 = &local_res20;
            do {
              lVar8 = lVar30 + 7;
              lVar30 = lVar30 + -1;
              lVar29 = lVar29 * 0x1003f + (ulonglong)*(byte *)((longlong)&local_res10 + lVar8);
            } while (lVar30 != 0);
            FUN_1436081b0(&local_c0,uVar22,&local_f0,lVar29);
            plVar14 = (longlong *)FUN_1435ba1a0(&local_b0,0x18,local_b0);
            plVar28 = (longlong *)0x0;
            if (plVar14 != (longlong *)0x0) {
              *plVar14 = lVar21;
              plVar14[1] = lVar35;
              plVar14[2] = CONCAT44(uVar34,uVar26);
              plVar28 = plVar14;
            }
            local_f8 = local_b8;
            *plVar28 = *local_res20;
            plVar28[1] = (longlong)local_res20;
            *(longlong **)(*local_res20 + 8) = plVar28;
            *local_res20 = (longlong)plVar28;
            lVar30 = local_c0;
          }
          else {
            plVar28 = (longlong *)*puVar11;
            plVar14 = (longlong *)plVar28[1];
            if (plVar14 != plVar28) {
              do {
                iVar25 = (int)puVar13;
                uVar4 = *(uint *)((longlong)plVar14 + 0x14);
                if (uVar27 <= uVar4) {
                  uVar5 = *(uint *)(plVar14 + 2);
                  if (uVar24 < uVar5) break;
                  if (uVar5 < uVar27) {
                    uVar27 = uVar5;
                  }
                  *(uint *)(plVar14 + 2) = uVar27;
                  if (uVar24 < uVar4) {
                    uVar24 = uVar4;
                  }
                  puVar13 = (undefined8 *)(ulonglong)(iVar25 + 1U);
                  *(uint *)((longlong)plVar14 + 0x14) = uVar24;
                  local_c8 = plVar14[2];
                  uVar26 = (uint)local_c8;
                  uVar34 = (uint)((ulonglong)local_c8 >> 0x20);
                  lVar21 = *plVar14;
                  lVar35 = plVar14[1];
                  uVar27 = uVar26;
                  uVar24 = uVar34;
                  if (1 < iVar25 + 1U) {
                    plVar12 = (longlong *)*plVar14;
                    *(longlong *)(*plVar12 + 8) = plVar12[1];
                    *(longlong *)plVar12[1] = *plVar12;
                    *plVar12 = -1;
                    plVar12[1] = -1;
                  }
                }
                iVar25 = (int)puVar13;
                plVar14 = (longlong *)plVar14[1];
              } while (plVar14 != plVar28);
              if (iVar25 != 0) goto LAB_1435d710f;
            }
            plVar12 = (longlong *)FUN_1435ba1a0(&local_b0,0x18,local_b0);
            plVar28 = (longlong *)0x0;
            if (plVar12 != (longlong *)0x0) {
              *plVar12 = lVar21;
              plVar12[1] = lVar35;
              plVar12[2] = CONCAT44(uVar34,uVar26);
              plVar28 = plVar12;
            }
            plVar28[1] = *(longlong *)plVar14[1];
            *plVar28 = *plVar14;
            *(longlong **)(*plVar14 + 8) = plVar28;
            *plVar14 = (longlong)plVar28;
          }
LAB_1435d710f:
          lVar33 = lVar33 + 8;
          uVar31 = uVar31 - 1;
          uVar22 = local_f8;
        } while (uVar31 != 0);
      }
      uVar32 = *(ulonglong *)(uVar32 + 0xd8);
      lVar21 = local_e0;
    } while (uVar32 != local_res10);
  }
  puVar18 = (ulonglong *)0x0;
  lVar35 = *(longlong *)(param_1 + 0x10);
  local_e8 = *(longlong ***)(lVar21 + 0x10);
  local_res20 = *(longlong **)(lVar21 + 0x58);
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x20) = *(undefined4 *)(lVar35 + 0x120);
  local_f0 = (ulonglong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x24) = 0;
  if (*(int *)(lVar21 + 0xf4) != 0) {
    puVar20 = (undefined8 *)(lVar21 + 0xf8);
    puVar16 = puVar18;
    local_88 = puVar20;
    do {
      iVar25 = (int)puVar16;
      DSP::CAkRectifier::CAkRectifier(local_d8);
      Scaleform::GFx::AS3::Abc::Read(&local_res20,local_d8);
      for (puVar13 = (undefined8 *)puVar20[1]; puVar13 != puVar20;
          puVar13 = (undefined8 *)puVar13[1]) {
        if ((ulonglong)local_d0 == puVar13[8]) goto LAB_1435d71e7;
        if ((ulonglong)local_d0 < (ulonglong)puVar13[8]) break;
      }
      puVar13 = (undefined8 *)*puVar13;
LAB_1435d71e7:
      uVar32 = puVar13[0xb];
      local_res18 = uVar32;
      if (puVar18 != (ulonglong *)0x0) {
        uVar31 = 0x1505;
        lVar21 = 8;
        do {
          lVar33 = lVar21 + 7;
          lVar21 = lVar21 + -1;
          uVar31 = (ulonglong)*(byte *)((longlong)&local_res10 + lVar33) + uVar31 * 0x1003f;
        } while (lVar21 != 0);
        uVar31 = puVar18[1] & uVar31;
        lVar21 = uVar31 * 3 + 2;
        puVar15 = puVar18 + lVar21;
        if ((puVar18[lVar21] != 0xfffffffffffffffe) && (uVar10 = uVar31, puVar15[1] == uVar31)) {
          while ((puVar15[1] != uVar31 || (puVar15[2] != uVar32))) {
            uVar10 = *puVar15;
            if (uVar10 == 0xffffffffffffffff) goto LAB_1435d737d;
            puVar15 = puVar18 + uVar10 * 3 + 2;
          }
          if ((-1 < (longlong)uVar10) && (puVar18 + uVar10 * 3 + 4 != (ulonglong *)0x0))
          goto LAB_1435d7559;
        }
      }
LAB_1435d737d:
      if (*(longlong *)(uVar32 + 0x48) != uVar32 + 0x40) {
        if (lVar30 != 0) {
          uVar31 = 0x1505;
          lVar21 = 8;
          do {
            lVar33 = lVar21 + 7;
            lVar21 = lVar21 + -1;
            uVar31 = (ulonglong)*(byte *)((longlong)&local_res10 + lVar33) + uVar31 * 0x1003f;
          } while (lVar21 != 0);
          uVar31 = *(ulonglong *)(lVar30 + 8) & uVar31;
          puVar15 = (ulonglong *)(lVar30 + 0x10 + uVar31 * 0x20);
          if ((*puVar15 != 0xfffffffffffffffe) && (uVar10 = uVar31, puVar15[1] == uVar31)) {
            while ((puVar15[1] != uVar31 || (puVar15[2] != uVar32))) {
              uVar10 = *puVar15;
              if (uVar10 == 0xffffffffffffffff) goto LAB_1435d7419;
              puVar15 = (ulonglong *)(lVar30 + 0x10 + uVar10 * 0x20);
            }
            if (-1 < (longlong)uVar10) {
              lVar30 = (uVar10 + 1) * 0x20 + lVar30;
              goto LAB_1435d741f;
            }
          }
        }
LAB_1435d7419:
        lVar30 = 0;
LAB_1435d741f:
        plVar28 = (longlong *)(lVar30 + 8);
        if (lVar30 == 0) {
          plVar28 = (longlong *)0x0;
        }
        if (plVar28 != (longlong *)0x0) {
          lVar21 = 8;
          lVar30 = 0x1505;
          do {
            lVar33 = lVar21 + 7;
            lVar21 = lVar21 + -1;
            lVar30 = lVar30 * 0x1003f + (ulonglong)*(byte *)((longlong)&local_res10 + lVar33);
          } while (lVar21 != 0);
          FUN_143605970(&local_f0,local_e8,&local_res18,lVar30);
          lVar21 = *plVar28;
          lVar30 = *(longlong *)(lVar21 + 8);
          lVar33 = (ulonglong)
                   *(uint *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(local_e0 + 0x18) + 0x18) + 0x130) + 0x28
                            + (ulonglong)*(uint *)(*(longlong *)(local_e0 + 0x18) + 0x20) * 0x50) +
                   (longlong)puVar16;
          if (lVar30 != lVar21) {
            plVar28 = (longlong *)(lVar35 + 0x118);
            do {
              local_80 = *(undefined4 *)(lVar30 + 0x10);
              lVar29 = *(longlong *)(lVar35 + 0x120);
              uVar31 = lVar29 + 1;
              uStack_7c = *(undefined4 *)(lVar30 + 0x14);
              uStack_78 = *(undefined4 *)(uVar32 + 0x28);
              local_70 = lVar33;
              if (uVar31 < *(ulonglong *)(lVar35 + 0x120)) {
                uVar10 = uVar31;
                if (uVar31 < *(ulonglong *)(lVar35 + 0x128) >> 1) {
LAB_1435d7505:
                  FUN_1436129c0(plVar28,plVar28,uVar10);
                }
              }
              else if (*(ulonglong *)(lVar35 + 0x128) < uVar31) {
                uVar10 = (uVar31 >> 2) + uVar31;
                goto LAB_1435d7505;
              }
              *(ulonglong *)(lVar35 + 0x120) = uVar31;
              puVar2 = (undefined4 *)(*plVar28 + lVar29 * 0x18);
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = local_80;
                puVar2[1] = uStack_7c;
                puVar2[2] = uStack_78;
                puVar2[3] = uStack_74;
                *(longlong *)(puVar2 + 4) = local_70;
              }
              piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x24);
              *piVar1 = *piVar1 + 1;
              lVar30 = *(longlong *)(lVar30 + 8);
              puVar20 = local_88;
            } while (lVar30 != lVar21);
          }
          puVar18 = local_f0;
          iVar25 = (int)local_res10;
        }
      }
LAB_1435d7559:
      uVar26 = iVar25 + 1;
      puVar16 = (ulonglong *)(ulonglong)uVar26;
      local_res10 = CONCAT44(local_res10._4_4_,uVar26);
      lVar30 = local_c0;
    } while (uVar26 < *(uint *)(local_e0 + 0xf4));
    if (puVar18 != (ulonglong *)0x0) {
      puVar16 = puVar18 + 2;
      lVar21 = puVar18[1] + 1;
      do {
        if (*puVar16 != 0xfffffffffffffffe) {
          *puVar16 = 0xfffffffffffffffe;
        }
        puVar16 = puVar16 + 3;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,puVar18);
    }
  }
  if (local_c0 != 0) {
    plVar28 = (longlong *)(local_c0 + 0x10);
    lVar21 = *(longlong *)(local_c0 + 8) + 1;
    do {
      if (*plVar28 != -2) {
        *plVar28 = -2;
      }
      plVar28 = plVar28 + 4;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  local_a0 = 0;
  pppppuVar23 = (undefined8 *****)local_90;
  if ((undefined8 *****)local_90 != &local_98) {
    do {
      pppppuVar7 = (undefined8 *****)pppppuVar23[1];
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,pppppuVar23);
      pppppuVar23 = pppppuVar7;
    } while (pppppuVar7 != &local_98);
  }
  return;
}



// FUNCTION 1435d7660 FUN_1435d7660 body=89 status=ok
// SIG undefined FUN_1435d7660(void)

void FUN_1435d7660(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar5 * 8);
      plVar2 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38) + lVar4 * 8);
      lVar1 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *plVar2 = ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + lVar1) +
                (ulonglong)*(uint *)(*plVar2 + 0x28)) - lVar4;
    } while (uVar5 < uVar3);
  }
  return;
}



// FUNCTION 1435d76f0 FUN_1435d76f0 body=236 status=ok
// SIG undefined FUN_1435d76f0(void)

void FUN_1435d76f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = param_2 + 1;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  uVar7 = *(uint *)(lVar6 + param_2 * 8) & 0xff;
  bVar3 = (&DAT_145b4a5e1)[(ulonglong)uVar7 * 2];
  iVar8 = -(uint)((byte)(&DAT_145b4a5e0)[(ulonglong)uVar7 * 2] >> 6);
  if ((bVar3 & 8) != 0) {
    lVar2 = lVar9 * 8;
    lVar9 = param_2 + 2;
    if ((uVar7 != 0x43) && (2 < uVar7 - 0xb9)) {
      switch(*(undefined4 *)
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa0) + 0x148) + 0xc +
              *(longlong *)(lVar6 + lVar2) * 0x10)) {
      case 1:
      case 6:
      case 9:
      case 0xe:
        iVar8 = iVar8 + -1;
        break;
      case 5:
      case 0xd:
        iVar8 = iVar8 + -2;
      }
    }
  }
  if ((bVar3 & 4) == 0) {
LAB_1435d77d0:
    if (uVar7 == 0x2f) {
      uVar7 = 2;
      goto LAB_1435d77a8;
    }
  }
  else {
    iVar4 = *(int *)(lVar6 + lVar9 * 8);
    if (uVar7 != 0x55) {
      iVar8 = iVar8 - iVar4;
      goto LAB_1435d77d0;
    }
    iVar8 = iVar8 + iVar4 * -2;
  }
  uVar7 = bVar3 & 3;
LAB_1435d77a8:
  piVar1 = (int *)(lVar5 + 0x34);
  *piVar1 = *piVar1 + uVar7 + iVar8;
  lVar9 = *(longlong *)(param_1 + 0x18);
  uVar7 = *(uint *)(lVar5 + 0x34);
  if (uVar7 < *(uint *)(lVar9 + 0x10)) {
    uVar7 = *(uint *)(lVar9 + 0x10);
  }
  *(uint *)(lVar9 + 0x10) = uVar7;
  return;
}



// FUNCTION 1435d7820 FUN_1435d7820 body=813 status=ok
// SIG undefined FUN_1435d7820(void)

longlong FUN_1435d7820(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  iVar9 = FUN_143595230(uVar1);
  lVar10 = (longlong)iVar9;
  lVar11 = 0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 8) + 8);
  if ((lVar2 == 0) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x220) + 0xd8) != lVar2)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (*(longlong *)(param_2 + 0x70) != 0) {
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 8);
  }
  if ((((lVar2 == 0) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x230) + 0xd8) != lVar2)) ||
      (lVar11 == 0)) ||
     ((lVar3 = *(longlong *)(lVar11 + 8), lVar3 == 0 ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x230) + 0xd8) != lVar3)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((lVar2 == 0) ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x238) + 0xd8) != lVar2)) ||
     ((lVar11 == 0 ||
      ((lVar3 = *(longlong *)(lVar11 + 8), lVar3 == 0 ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x238) + 0xd8) != lVar3)))))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((((lVar2 == 0) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x228) + 0xd8) != lVar2)) ||
      (lVar11 == 0)) ||
     ((lVar3 = *(longlong *)(lVar11 + 8), lVar3 == 0 ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x228) + 0xd8) != lVar3)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (((lVar2 == 0) ||
      (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x240) + 0xd8) != lVar2)) ||
     ((lVar11 == 0 ||
      ((lVar2 = *(longlong *)(lVar11 + 8), lVar2 == 0 ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x98) + 0x240) + 0xd8) != lVar2)))))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  switch(uVar1) {
  case 0:
    if (bVar4) {
      return 0x33;
    }
    break;
  case 1:
    if (bVar4) {
      return 0x34;
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    if (bVar5) {
      return lVar10 + 0x200;
    }
    if (bVar6) {
      return lVar10 + 0x300;
    }
    if (bVar7) {
      return lVar10 + 0x400;
    }
    break;
  case 0xc:
    if (bVar5) {
      return 0x213;
    }
    if (bVar6) {
      return 0x313;
    }
    if (bVar7) {
      return 0x413;
    }
    if (bVar8) {
      return 0xa13;
    }
    break;
  case 0xd:
    if (bVar5) {
      return 0x214;
    }
    if (bVar6) {
      return 0x314;
    }
    if (bVar7) {
      return 0x414;
    }
    if (bVar8) {
      lVar10 = 0xa14;
    }
  }
  return lVar10;
}



// FUNCTION 1435d7b90 FUN_1435d7b90 body=84 status=ok
// SIG undefined FUN_1435d7b90(void)

void FUN_1435d7b90(longlong param_1)

{
  undefined4 local_18 [2];
  undefined4 *local_10 [2];
  
  if (DAT_146b7a930 == 0x7ffffff) {
    local_10[0] = local_18;
    local_18[0] = 0;
    if ((*(uint *)(param_1 + 0x10) & 0xffffffe0) != 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x1f;
      FUN_143616bf0(local_10,param_1);
    }
  }
  DAT_146b7a930 = DAT_146b7a930 + 1;
  return;
}



// FUNCTION 1435d7bf0 FUN_1435d7bf0 body=74 status=ok
// SIG undefined FUN_1435d7bf0(void)

longlong * FUN_1435d7bf0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar1 = FUN_1434ef190();
    FUN_1434e6660(param_1 + 1,lVar1 + 8);
  }
  return param_1;
}



// FUNCTION 1435d7c40 FUN_1435d7c40 body=623 status=ok
// SIG undefined FUN_1435d7c40(void)

/* WARNING: Removing unreachable block (ram,0x0001435d7df2) */
/* WARNING: Removing unreachable block (ram,0x0001435d7df8) */
/* WARNING: Removing unreachable block (ram,0x0001435d7d37) */
/* WARNING: Removing unreachable block (ram,0x0001435d7d23) */
/* WARNING: Removing unreachable block (ram,0x0001435d7d28) */
/* WARNING: Removing unreachable block (ram,0x0001435d7cf7) */
/* WARNING: Removing unreachable block (ram,0x0001435d7d68) */
/* WARNING: Removing unreachable block (ram,0x0001435d7d6e) */
/* WARNING: Removing unreachable block (ram,0x0001435d7dd2) */
/* WARNING: Removing unreachable block (ram,0x0001435d7dd9) */
/* WARNING: Removing unreachable block (ram,0x0001435d7dde) */
/* WARNING: Removing unreachable block (ram,0x0001435d7de8) */

void FUN_1435d7c40(longlong param_1,uint *param_2,uint param_3,ulonglong param_4,byte param_5)

{
  uint uVar1;
  uint *puVar2;
  uint local_28;
  uint uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar2 = (uint *)((ulonglong)param_3 * 0x20 + *(longlong *)(param_1 + 8));
  uVar1 = *puVar2 & 0x1f;
  uStack_10 = param_4;
  if (uVar1 == 5) {
    local_18 = *(undefined8 *)(puVar2 + 4);
    local_28 = 0xd;
    uStack_20 = 0;
    if (param_4 != 0) {
      *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
    }
    if (&local_28 != param_2) {
      if (param_4 != 0) {
        *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
      }
      FUN_143603d30(param_2);
      *param_2 = local_28;
      param_2[1] = uStack_24;
      param_2[2] = (uint)uStack_20;
      param_2[3] = uStack_20._4_4_;
      param_2[4] = (uint)local_18;
      param_2[5] = local_18._4_4_;
      param_2[6] = (uint)uStack_10;
      param_2[7] = uStack_10._4_4_;
    }
    if ((((param_4 & 1) == 0) && (param_4 != 0)) && ((*(uint *)(param_4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) - 1;
      FUN_1434ef880(param_4);
      return;
    }
  }
  else {
    if (uVar1 != 6) {
      FUN_143590140(param_2);
      return;
    }
    uStack_20 = 0;
    if (param_4 != 0) {
      *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
    }
    local_28 = -(uint)param_5 & 0x400 | 0xe;
    local_18._0_4_ = param_3;
    if (&local_28 != param_2) {
      if (param_4 != 0) {
        *(uint *)(param_4 + 8) = *(int *)(param_4 + 8) + 1U & 0x8fffffff;
      }
      FUN_143603d30(param_2);
      *param_2 = local_28;
      param_2[1] = uStack_24;
      param_2[2] = (uint)uStack_20;
      param_2[3] = uStack_20._4_4_;
      param_2[4] = (uint)local_18;
      param_2[5] = local_18._4_4_;
      param_2[6] = (uint)uStack_10;
      param_2[7] = uStack_10._4_4_;
    }
    if ((((param_4 & 1) == 0) && (param_4 != 0)) && ((*(uint *)(param_4 + 8) & 0x3fffff) != 0)) {
      *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) - 1;
      FUN_1434ef880(param_4);
    }
  }
  return;
}



// FUNCTION 1435d7ec0 FUN_1435d7ec0 body=80 status=ok
// SIG undefined FUN_1435d7ec0(void)

undefined4 * FUN_1435d7ec0(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (((byte)*(undefined4 *)((ulonglong)param_3 * 0x20 + param_1[1]) & 0x1f) == 6) {
    uVar1 = *param_1;
    *param_2 = 7;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 6) = uVar1;
    param_2[4] = param_3;
    return param_2;
  }
  FUN_14360ab50(param_2);
  return param_2;
}



// FUNCTION 1435d7f20 FUN_1435d7f20 body=147 status=ok
// SIG undefined FUN_1435d7f20(void)

void FUN_1435d7f20(undefined8 *param_1,uint param_2,undefined4 *param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  puVar1 = (undefined8 *)0x0;
  if (10 < param_4) {
    if (0xc < param_4) {
      if (param_4 != 0xd) goto LAB_1435d7f49;
      param_2 = param_2 + 1;
    }
    puVar1 = (undefined8 *)((ulonglong)param_2 * 0x20 + param_1[1]);
  }
LAB_1435d7f49:
  if (((byte)*param_3 & 0x1f) == 3) {
    uStack_10 = *param_1;
    local_18 = param_3[4];
    local_28 = 6;
    uStack_20 = 0;
    if ((undefined8 *)&local_28 != puVar1) {
      FUN_143603d30(puVar1);
      *puVar1 = CONCAT44(uStack_24,local_28);
      puVar1[1] = uStack_20;
      puVar1[2] = CONCAT44(uStack_14,local_18);
      puVar1[3] = uStack_10;
      return;
    }
  }
  else {
    FUN_143590140(puVar1,param_3);
  }
  return;
}



// FUNCTION 1435d7fc0 FUN_1435d7fc0 body=259 status=ok
// SIG undefined FUN_1435d7fc0(void)

longlong * FUN_1435d7fc0(undefined8 *param_1,longlong *param_2,undefined4 *param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  lVar1 = 0;
  if (param_4 == 0xb) {
LAB_1435d800b:
    lVar1 = param_1[2];
  }
  else {
    if (param_4 != 0xc) {
      if (param_4 != 0xd) goto LAB_1435d8018;
      FUN_143612110(param_1 + 1);
      goto LAB_1435d800b;
    }
    lVar1 = param_1[2];
    FUN_143612110(param_1 + 1);
  }
  FUN_143612110(param_1 + 1);
LAB_1435d8018:
  puVar2 = (undefined8 *)(lVar1 * 0x20 + param_1[1]);
  if (((byte)*param_3 & 0x1f) == 3) {
    uStack_20 = *param_1;
    local_28 = param_3[4];
    local_38 = 6;
    uStack_30 = 0;
    if ((undefined8 *)&local_38 != puVar2) {
      FUN_143603d30(puVar2);
      *puVar2 = CONCAT44(uStack_34,local_38);
      puVar2[1] = uStack_30;
      puVar2[2] = CONCAT44(uStack_24,local_28);
      puVar2[3] = uStack_20;
    }
  }
  else {
    FUN_143590140(puVar2,param_3);
  }
  *param_2 = param_1[2] - ((ulonglong)(param_4 != 0xb) + 1);
  return param_2;
}



// FUNCTION 1435d80d0 FUN_1435d80d0 body=285 status=ok
// SIG undefined FUN_1435d80d0(void)

undefined8 FUN_1435d80d0(undefined8 *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != 0xb) {
    return param_3;
  }
  lVar6 = *(longlong *)*param_1;
  uVar1 = **(uint **)(param_4 + 8);
  if ((((byte)uVar1 & 0x78) == 8) ||
     ((lVar3 = *(longlong *)(*(uint **)(param_4 + 8) + 2), lVar7 = lVar3,
      (*(byte *)(lVar3 + 0x88) >> 5 & 1) == 0 &&
      (((uVar1 & 6) == 0 ||
       (lVar7 = *(longlong *)(lVar6 + 0x208), lVar3 != *(longlong *)(lVar7 + 0xd8))))))) {
    lVar7 = *(longlong *)(lVar6 + 0x208);
  }
  if (lVar7 != 0) {
    iVar2 = *(int *)(lVar7 + 0x90);
    if (iVar2 == 2) {
      lVar6 = *(longlong *)(lVar6 + 0x268);
    }
    else if (iVar2 == 3) {
      lVar6 = *(longlong *)(lVar6 + 0x270);
    }
    else if (iVar2 == 4) {
      lVar6 = *(longlong *)(lVar6 + 0x278);
    }
    else if (iVar2 == 5) {
      lVar6 = *(longlong *)(lVar6 + 0x280);
    }
    else {
      uVar5 = FUN_1435cb180();
      lVar6 = FUN_14361f050(uVar5,lVar7);
    }
    plVar4 = (longlong *)*param_1;
    if (lVar6 == 0) {
      uVar5 = FUN_1435d0db0(plVar4,*(undefined8 *)(*(longlong *)(*plVar4 + 0x200) + 0xd8),0);
      return uVar5;
    }
    uVar5 = FUN_1435d0db0(plVar4,lVar6,2);
    return uVar5;
  }
  return param_3;
}



// FUNCTION 1435d8230 FUN_1435d8230 body=2624 status=ok
// SIG undefined FUN_1435d8230(void)

undefined1 *
FUN_1435d8230(longlong *param_1,undefined1 *param_2,longlong *param_3,undefined4 param_4,
             double param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  double dVar11;
  char *pcVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int local_res8;
  undefined4 uStackX_c;
  char local_98;
  undefined7 uStack_97;
  undefined4 uStack_94;
  uint local_88 [2];
  int *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined8 local_60;
  
  param_1 = (longlong *)*param_1;
  lVar13 = *param_1;
  puVar2 = *(undefined4 **)((longlong)param_5 + 8);
  *param_3 = (longlong)puVar2;
  bVar7 = (byte)*puVar2;
  if ((0x4f < (bVar7 & 0x78)) && ((bVar7 & 6) != 2)) {
LAB_1435d8b15:
    lVar4 = *(longlong *)(*param_3 + 8);
    if ((lVar4 == 0) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x230) + 0xd8) != lVar4)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    switch(param_4) {
    case 0:
      *param_2 = 1;
      *param_3 = (longlong)(param_1 + 0x13);
      return param_2;
    case 2:
    case 4:
    case 6:
    case 10:
switchD_1435d8b53_caseD_2:
      *param_2 = 1;
      *param_3 = (longlong)(param_1 + 0x17);
      return param_2;
    case 3:
    case 5:
      if (bVar5) goto switchD_1435d8b53_caseD_2;
    case 1:
      *param_2 = 1;
      *param_3 = (longlong)(param_1 + 0x15);
      return param_2;
    case 7:
      lVar13 = *(longlong *)(lVar13 + 0x208);
      break;
    case 8:
    case 9:
    case 0xf:
    case 0x10:
      lVar13 = *(longlong *)(lVar13 + 0x240);
      break;
    default:
      goto switchD_1435d8b53_caseD_b;
    case 0xd:
      lVar13 = FUN_1435d0f90(param_1,*param_3,1);
      *param_3 = lVar13;
      *param_2 = 1;
      return param_2;
    }
    lVar13 = FUN_1435d0db0(param_1,*(undefined8 *)(lVar13 + 0xd8),2);
    *param_3 = lVar13;
switchD_1435d8b53_caseD_b:
    *param_2 = 1;
    return param_2;
  }
  FUN_1435944b0(local_88);
  uVar6 = uStack_94;
  bVar7 = (byte)local_88[0];
  switch(param_4) {
  case 0:
    cVar8 = FUN_1435909c0(local_88);
    uVar9 = local_88[0] & 0x1f;
    if (9 < uVar9) {
      if ((local_88[0] >> 9 & 1) == 0) {
        if (uVar9 == 10) {
          piVar1 = (int *)((longlong)local_78 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar9 != 0xb) && (uVar9 != 0xc)) {
            if (1 < uVar9 - 0xd) goto LAB_1435d8349;
            local_78 = (double)CONCAT44(uStack_6c,uStack_70);
          }
          if (((((ulonglong)local_78 & 1) == 0) && (local_78 != 0.0)) &&
             ((*(uint *)((longlong)local_78 + 8) & 0x3fffff) != 0)) {
            *(uint *)((longlong)local_78 + 8) = *(uint *)((longlong)local_78 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_80 = *local_80 + -1;
        if (*local_80 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_88[0] = local_88[0] & 0xfffffde0;
        local_80 = (int *)0x0;
      }
    }
LAB_1435d8349:
    _local_98 = CONCAT71(uStack_97,cVar8);
    local_88[0] = local_88[0] & 0xffffffe1 | 1;
    lVar13 = 0x80;
    if (cVar8 == '\0') {
      lVar13 = 0x68;
    }
    *param_3 = lVar13 + (longlong)param_1;
    local_78 = (double)CONCAT44(uVar6,(int)_local_98);
    break;
  case 1:
    FUN_14360f380(local_88,&param_5,&local_res8);
    uVar9 = local_88[0] & 0x1f;
    if (param_5._0_1_ != '\0') {
      if (9 < uVar9) {
        if ((local_88[0] >> 9 & 1) == 0) {
          if (uVar9 == 10) {
            piVar1 = (int *)((longlong)local_78 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar9 != 0xb) && (uVar9 != 0xc)) {
              if (1 < uVar9 - 0xd) goto LAB_1435d842d;
              local_78 = (double)CONCAT44(uStack_6c,uStack_70);
            }
            if (((((ulonglong)local_78 & 1) == 0) && (local_78 != 0.0)) &&
               ((*(uint *)((longlong)local_78 + 8) & 0x3fffff) != 0)) {
              *(uint *)((longlong)local_78 + 8) = *(uint *)((longlong)local_78 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_80 = *local_80 + -1;
          if (*local_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_88[0] = local_88[0] & 0xfffffde0;
          local_80 = (int *)0x0;
        }
      }
LAB_1435d842d:
      local_88[0] = local_88[0] & 0xffffffe4 | 4;
      local_78 = (double)CONCAT44(uStackX_c,local_res8);
      lVar13 = FUN_1435d0610(param_1,local_res8);
      *param_3 = lVar13;
      break;
    }
    *param_2 = 0;
joined_r0x0001435d85cb:
    if (uVar9 < 10) {
      return param_2;
    }
    if ((local_88[0] >> 9 & 1) == 0) {
      if (uVar9 == 10) {
        piVar1 = (int *)((longlong)local_78 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) {
          return param_2;
        }
        FUN_14335f920();
        return param_2;
      }
      if ((uVar9 != 0xb) && (uVar9 != 0xc)) {
        if (1 < uVar9 - 0xd) {
          return param_2;
        }
        local_78 = (double)CONCAT44(uStack_6c,uStack_70);
      }
      if (((ulonglong)local_78 & 1) != 0) {
        return param_2;
      }
      if (local_78 == 0.0) {
        return param_2;
      }
      if ((*(uint *)((longlong)local_78 + 8) & 0x3fffff) == 0) {
        return param_2;
      }
      *(uint *)((longlong)local_78 + 8) = *(uint *)((longlong)local_78 + 8) - 1;
      FUN_1434ef880();
      return param_2;
    }
    goto LAB_1435d8c2b;
  case 2:
    pcVar12 = (char *)FUN_143590b70(local_88,&param_5,&local_res8);
    if (*pcVar12 == '\0') {
LAB_1435d85c2:
      uVar9 = local_88[0] & 0x1f;
LAB_1435d85c5:
      *param_2 = 0;
      goto joined_r0x0001435d85cb;
    }
    uVar9 = local_88[0] & 0x1f;
    if (9 < uVar9) {
      if ((local_88[0] >> 9 & 1) == 0) {
        if (uVar9 == 10) {
          piVar1 = (int *)((longlong)local_78 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar9 != 0xb) && (uVar9 != 0xc)) {
            if (1 < uVar9 - 0xd) goto LAB_1435d8597;
            local_78 = (double)CONCAT44(uStack_6c,uStack_70);
          }
          if (((((ulonglong)local_78 & 1) == 0) && (local_78 != 0.0)) &&
             ((*(uint *)((longlong)local_78 + 8) & 0x3fffff) != 0)) {
            *(uint *)((longlong)local_78 + 8) = *(uint *)((longlong)local_78 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_80 = *local_80 + -1;
        if (*local_80 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_88[0] = local_88[0] & 0xfffffde0;
        local_80 = (int *)0x0;
      }
    }
LAB_1435d8597:
    local_88[0] = local_88[0] & 0xffffffe2 | 2;
    local_78 = (double)CONCAT44(uStack_94,local_res8);
    lVar13 = FUN_1435d0700(param_1,-local_res8);
    *param_3 = lVar13;
    break;
  case 3:
    if ((bVar7 & 0x1f) == 2) {
      local_78 = (double)CONCAT44(local_78._4_4_,(uint)local_78 + 1);
      lVar13 = FUN_1435d0700(param_1);
      *param_3 = lVar13;
    }
    else {
      FUN_14360f380(local_88,&param_5,&local_res8);
      uVar9 = local_88[0] & 0x1f;
      if (param_5._0_1_ == '\0') goto LAB_1435d85c5;
      if (9 < uVar9) {
        if ((local_88[0] >> 9 & 1) == 0) {
          if (uVar9 == 10) {
            piVar1 = (int *)((longlong)local_78 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar9 != 0xb) && (uVar9 != 0xc)) {
              if (1 < uVar9 - 0xd) goto LAB_1435d86b2;
              local_78 = (double)CONCAT44(uStack_6c,uStack_70);
            }
            if (((((ulonglong)local_78 & 1) == 0) && (local_78 != 0.0)) &&
               ((*(uint *)((longlong)local_78 + 8) & 0x3fffff) != 0)) {
              *(uint *)((longlong)local_78 + 8) = *(uint *)((longlong)local_78 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_80 = *local_80 + -1;
          if (*local_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_88[0] = local_88[0] & 0xfffffde0;
          local_80 = (int *)0x0;
        }
      }
LAB_1435d86b2:
      local_78 = (double)CONCAT44(uStackX_c,local_res8) + 1.0;
      local_88[0] = local_88[0] & 0xffffffe4 | 4;
      lVar13 = FUN_1435d0610(param_1,SUB84(local_78,0));
      *param_3 = lVar13;
    }
    break;
  case 4:
    pcVar12 = (char *)FUN_143590b70(local_88,&param_5,&local_res8);
    if (*pcVar12 == '\0') goto LAB_1435d85c2;
    uVar9 = local_88[0] & 0x1f;
    if (9 < uVar9) {
      if ((local_88[0] >> 9 & 1) == 0) {
        if (uVar9 == 10) {
          piVar1 = (int *)((longlong)local_78 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
        }
        else {
          if ((uVar9 != 0xb) && (uVar9 != 0xc)) {
            if (1 < uVar9 - 0xd) goto LAB_1435d879b;
            local_78 = (double)CONCAT44(uStack_6c,uStack_70);
          }
          if (((((ulonglong)local_78 & 1) == 0) && (local_78 != 0.0)) &&
             ((*(uint *)((longlong)local_78 + 8) & 0x3fffff) != 0)) {
            *(uint *)((longlong)local_78 + 8) = *(uint *)((longlong)local_78 + 8) - 1;
            FUN_1434ef880();
          }
        }
      }
      else {
        *local_80 = *local_80 + -1;
        if (*local_80 == 0) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        local_88[0] = local_88[0] & 0xfffffde0;
        local_80 = (int *)0x0;
      }
    }
LAB_1435d879b:
    local_88[0] = local_88[0] & 0xffffffe2 | 2;
    local_78 = (double)CONCAT44(uStack_94,local_res8 + 1);
    lVar13 = FUN_1435d0700(param_1);
    *param_3 = lVar13;
    break;
  case 5:
    if ((bVar7 & 0x1f) == 2) goto LAB_1435d8919;
    FUN_14360f380(local_88,&param_5,&local_res8);
    uVar9 = local_88[0] & 0x1f;
    if (param_5._0_1_ != '\0') {
      if (9 < uVar9) {
        if ((local_88[0] >> 9 & 1) == 0) {
          if (uVar9 == 10) {
            piVar1 = (int *)((longlong)local_78 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar9 != 0xb) && (uVar9 != 0xc)) {
              if (1 < uVar9 - 0xd) goto LAB_1435d8888;
              local_78 = (double)CONCAT44(uStack_6c,uStack_70);
            }
            if (((((ulonglong)local_78 & 1) == 0) && (local_78 != 0.0)) &&
               ((*(uint *)((longlong)local_78 + 8) & 0x3fffff) != 0)) {
              *(uint *)((longlong)local_78 + 8) = *(uint *)((longlong)local_78 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_80 = *local_80 + -1;
          if (*local_80 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_88[0] = local_88[0] & 0xfffffde0;
          local_80 = (int *)0x0;
        }
      }
LAB_1435d8888:
      local_78 = (double)CONCAT44(uStackX_c,local_res8) - 1.0;
      local_88[0] = local_88[0] & 0xffffffe4 | 4;
      lVar13 = FUN_1435d0610(param_1,SUB84(local_78,0));
      *param_3 = lVar13;
      break;
    }
    *param_2 = 0;
    if ((byte)uVar9 < 10) {
      return param_2;
    }
    if ((local_88[0] >> 9 & 1) != 0) {
      *local_80 = *local_80 + -1;
      if (*local_80 != 0) {
        return param_2;
      }
      (**(code **)(*DAT_146b62f28 + 0x60))();
      return param_2;
    }
    goto LAB_1435d8c43;
  case 6:
    pcVar12 = (char *)FUN_143590b70(local_88,&param_5,&local_res8);
    if (*pcVar12 == '\0') {
LAB_1435d8931:
      *param_2 = 0;
      FUN_1434e64f0(local_88);
      return param_2;
    }
    FUN_1434f0780(local_88,local_res8);
LAB_1435d8919:
    local_78 = (double)CONCAT44(local_78._4_4_,(uint)local_78 + -1);
    lVar13 = FUN_1435d0700(param_1);
    *param_3 = lVar13;
    break;
  case 7:
    if (((bVar7 & 0x1f) == 0xc) && (local_78 != 0.0)) {
      if (*(longlong *)(*param_3 + 8) == 0) {
        lVar13 = FUN_1435d0db0(param_1,*(undefined8 *)(*(longlong *)(*param_1 + 0x200) + 0xd8),0);
        *param_3 = lVar13;
      }
      else {
        lVar13 = FUN_1435d0db0(param_1,*(longlong *)(*param_3 + 8),2);
        *param_3 = lVar13;
      }
    }
    else {
      lVar13 = FUN_1435d0db0(param_1,*(undefined8 *)(*(longlong *)(lVar13 + 0x208) + 0xd8),2);
      *param_3 = lVar13;
    }
    break;
  case 8:
    pcVar12 = (char *)FUN_143591c60(local_88,&param_5,*(undefined8 *)(lVar13 + 0x10));
    goto LAB_1435d894f;
  case 9:
    uVar10 = FUN_1435c7bf0(lVar13,&param_5,local_88);
    lVar13 = FUN_1435d0a40(param_1,uVar10);
    *param_3 = lVar13;
    piVar1 = (int *)((longlong)param_5 + 0x18);
    *piVar1 = *piVar1 + -1;
    dVar11 = param_5;
    if (*piVar1 != 0) break;
    goto LAB_1435d8c0f;
  case 10:
    pcVar12 = (char *)FUN_143590b70(local_88,&param_5,&local_res8);
    if (*pcVar12 == '\0') goto LAB_1435d8931;
    FUN_1434f0780(local_88,local_res8);
    lVar13 = FUN_1435d0700(param_1,~(uint)local_78);
    *param_3 = lVar13;
    break;
  case 0xd:
  case 0xe:
switchD_1435d82a8_caseD_d:
    FUN_1434e64f0(local_88);
    goto LAB_1435d8b15;
  case 0xf:
    pcVar12 = (char *)FUN_143591c60(local_88,&param_5,*(undefined8 *)(lVar13 + 0x10));
    if (*pcVar12 == '\0') goto LAB_1435d8958;
    FUN_1432c5960(&local_68,DAT_146b62f28);
    lVar13 = *(longlong *)(lVar13 + 0x10);
    param_5 = local_78;
    *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
    FUN_1434ca780(&local_68,&param_5);
    piVar1 = (int *)((longlong)param_5 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    puVar14 = &DAT_145af3922;
    if (local_68 != (undefined1 *)0x0) {
      puVar14 = local_68;
    }
    dVar11 = (double)FUN_143360a90(*(undefined8 *)(lVar13 + 0x218),puVar14,local_60);
    *(int *)((longlong)dVar11 + 0x18) = *(int *)((longlong)dVar11 + 0x18) + 1;
    param_5 = dVar11;
    lVar13 = FUN_1435d0a40(param_1,&param_5);
    *param_3 = lVar13;
    piVar1 = (int *)((longlong)dVar11 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(dVar11);
    }
    Scaleform::StringBuffer::~StringBuffer(&local_68);
    break;
  case 0x10:
    plVar3 = *(longlong **)(lVar13 + 0x50);
    if ((char)plVar3[5] == '\0') goto switchD_1435d82a8_caseD_d;
    pcVar12 = (char *)(**(code **)(*plVar3 + 0x48))(plVar3,&param_5,lVar13,local_88);
LAB_1435d894f:
    dVar11 = local_78;
    if (*pcVar12 == '\0') {
LAB_1435d8958:
      *param_2 = 0;
      FUN_1434e64f0(local_88);
      return param_2;
    }
    param_5 = local_78;
    *(int *)((longlong)local_78 + 0x18) = *(int *)((longlong)local_78 + 0x18) + 1;
    lVar13 = FUN_1435d0a40(param_1,&param_5);
    *param_3 = lVar13;
    piVar1 = (int *)((longlong)dVar11 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
LAB_1435d8c0f:
      FUN_14335f920(dVar11);
    }
  }
  *param_2 = 1;
  if (9 < ((byte)local_88[0] & 0x1f)) {
    if ((local_88[0] >> 9 & 1) == 0) {
LAB_1435d8c43:
      FUN_1435920c0(local_88);
    }
    else {
LAB_1435d8c2b:
      *local_80 = *local_80 + -1;
      if (*local_80 == 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
    }
  }
  return param_2;
}



// FUNCTION 1435d8db0 FUN_1435d8db0 body=3913 status=ok
// SIG undefined FUN_1435d8db0(void)

undefined1 *
FUN_1435d8db0(longlong *param_1,undefined1 *param_2,longlong *param_3,undefined4 param_4,
             longlong param_5,longlong param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  uint *puVar14;
  uint uVar15;
  uint *puVar16;
  uint *local_res8;
  undefined8 local_c8;
  uint local_b8 [2];
  int *local_b0;
  uint *puStack_a8;
  uint *local_a0;
  uint local_98 [2];
  int *local_90;
  double dStack_88;
  double dStack_80;
  uint local_78 [2];
  int *local_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  param_1 = (longlong *)*param_1;
  puVar2 = *(undefined4 **)(param_6 + 8);
  lVar11 = *param_1;
  lVar3 = *(longlong *)(puVar2 + 2);
  local_res8 = *(uint **)(param_5 + 8);
  lVar4 = *(longlong *)(local_res8 + 2);
  if ((((lVar4 == 0) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x98) + 0x230) + 0xd8) != lVar4)) ||
      (lVar3 == 0)) ||
     (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x98) + 0x230) + 0xd8) != lVar3)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  *param_3 = 0;
  uVar15 = *local_res8 & 0x78;
  param_5 = lVar11;
  if (((uVar15 < 0x50) ||
      ((((bVar7 = (byte)*local_res8, (bVar7 & 6) == 2 || (((byte)*puVar2 & 0x78) < 0x50)) ||
        (((byte)*puVar2 & 6) == 2)) && ((uVar15 < 0x50 || ((bVar7 & 6) == 2)))))) &&
     ((((byte)*puVar2 & 0x78) < 0x50 || (((byte)*puVar2 & 6) == 2)))) {
    FUN_1435944b0(local_78,local_res8);
    FUN_1435944b0(local_b8,puVar2);
    local_98[0] = 0;
    local_90 = (int *)0x0;
    uVar6 = local_c8._4_4_;
    switch(param_4) {
    case 0:
      pcVar10 = (char *)FUN_143593540(&param_5,*(undefined8 *)(param_5 + 0x10),local_98,local_78,
                                      local_b8);
      if (*pcVar10 == '\0') {
LAB_1435d8f27:
        uVar15 = local_98[0] & 0x1f;
        *param_2 = 0;
        if (9 < uVar15) {
          if ((local_98[0] >> 9 & 1) == 0) {
            if (uVar15 == 10) {
              piVar1 = (int *)((longlong)dStack_88 + 0x18);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_14335f920();
              }
            }
            else if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
              dVar13 = dStack_88;
              if (((ulonglong)dStack_88 & 1) == 0) {
LAB_1435d8faf:
                if ((dVar13 != 0.0) && ((*(uint *)((longlong)dVar13 + 8) & 0x3fffff) != 0)) {
                  *(uint *)((longlong)dVar13 + 8) = *(uint *)((longlong)dVar13 + 8) - 1;
                  FUN_1434ef880();
                }
              }
              else {
                dStack_88 = (double)((longlong)dStack_88 + -1);
              }
            }
            else if (uVar15 - 0xd < 2) {
              dVar13 = dStack_80;
              if (((ulonglong)dStack_80 & 1) == 0) goto LAB_1435d8faf;
              dStack_80 = (double)((longlong)dStack_80 + -1);
            }
          }
          else {
            *local_90 = *local_90 + -1;
            if (*local_90 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_98[0] = local_98[0] & 0xfffffde0;
            local_90 = (int *)0x0;
            dStack_88 = 0.0;
            dStack_80 = 0.0;
          }
        }
        uVar15 = local_b8[0] & 0x1f;
        if (9 < uVar15) {
          if ((local_b8[0] >> 9 & 1) == 0) {
            if (uVar15 == 10) {
              puVar14 = puStack_a8 + 6;
              *puVar14 = *puVar14 - 1;
              if (*puVar14 == 0) {
                FUN_14335f920();
              }
            }
            else if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
              puVar14 = puStack_a8;
              if (((ulonglong)puStack_a8 & 1) == 0) {
LAB_1435d905e:
                if ((puVar14 != (uint *)0x0) && ((puVar14[2] & 0x3fffff) != 0)) {
                  puVar14[2] = puVar14[2] - 1;
                  FUN_1434ef880();
                }
              }
              else {
                puStack_a8 = (uint *)((longlong)puStack_a8 + -1);
              }
            }
            else if (uVar15 - 0xd < 2) {
              puVar14 = local_a0;
              if (((ulonglong)local_a0 & 1) == 0) goto LAB_1435d905e;
              local_a0 = (uint *)((longlong)local_a0 + -1);
            }
          }
          else {
            *local_b0 = *local_b0 + -1;
            if (*local_b0 == 0) {
              (**(code **)(*DAT_146b62f28 + 0x60))();
            }
            local_b8[0] = local_b8[0] & 0xfffffde0;
            local_b0 = (int *)0x0;
            puStack_a8 = (uint *)0x0;
            local_a0 = (uint *)0x0;
          }
        }
        uVar15 = local_78[0] & 0x1f;
        if (uVar15 < 10) {
          return param_2;
        }
        if ((local_78[0] >> 9 & 1) == 0) {
          if (uVar15 == 10) {
            piVar1 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 != 0) {
              return param_2;
            }
            FUN_14335f920();
            return param_2;
          }
          if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
            uVar12 = CONCAT44(uStack_64,local_68);
          }
          else {
            if (1 < uVar15 - 0xd) {
              return param_2;
            }
            uVar12 = CONCAT44(uStack_5c,uStack_60);
          }
          if ((uVar12 & 1) != 0) {
            return param_2;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if ((*(uint *)(uVar12 + 8) & 0x3fffff) == 0) {
            return param_2;
          }
          *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
          FUN_1434ef880();
          return param_2;
        }
        goto LAB_1435d90a1;
      }
      goto LAB_1435d9ad4;
    case 1:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590b70(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_1434f0780(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,local_68 + (uint)puStack_a8);
          goto LAB_1435d9acc;
        }
      }
      break;
    case 2:
      uVar15 = local_78[0] & 0x1f;
      if (uVar15 == 0) {
        local_res8 = (uint *)Scaleform::GFx::NumberUtil::NaN();
      }
      else if (uVar15 == 1) {
        if ((char)local_68 == '\0') {
          local_res8 = (uint *)Scaleform::GFx::NumberUtil::NaN();
        }
        else {
          local_res8 = (uint *)0x3ff0000000000000;
        }
      }
      else if (uVar15 == 2) {
        local_res8 = (uint *)(double)(int)local_68;
      }
      else if (uVar15 == 3) {
        local_res8 = (uint *)(double)local_68;
      }
      else if (uVar15 == 4) {
        local_res8 = (uint *)CONCAT44(uStack_64,local_68);
      }
      else {
        FUN_1435921c0(local_78,&param_5,&local_res8);
        if ((char)param_5 == '\0') goto LAB_1435d8f27;
      }
      puVar14 = local_res8;
      uVar15 = local_78[0] & 0x1f;
      if (9 < uVar15) {
        if ((local_78[0] >> 9 & 1) == 0) {
          if (uVar15 == 10) {
            piVar1 = (int *)(CONCAT44(uStack_64,local_68) + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
          }
          else {
            if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
              uVar12 = CONCAT44(uStack_64,local_68);
            }
            else {
              if (1 < uVar15 - 0xd) goto LAB_1435d925f;
              uVar12 = CONCAT44(uStack_5c,uStack_60);
            }
            if ((((uVar12 & 1) == 0) && (uVar12 != 0)) && ((*(uint *)(uVar12 + 8) & 0x3fffff) != 0))
            {
              *(uint *)(uVar12 + 8) = *(uint *)(uVar12 + 8) - 1;
              FUN_1434ef880();
            }
          }
        }
        else {
          *local_70 = *local_70 + -1;
          if (*local_70 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_78[0] = local_78[0] & 0xfffffde0;
          local_70 = (int *)0x0;
        }
      }
LAB_1435d925f:
      local_78[0] = local_78[0] & 0xffffffe4 | 4;
      local_c8._0_4_ = (uint)puVar14;
      local_c8._4_4_ = (undefined4)((ulonglong)puVar14 >> 0x20);
      uVar15 = local_b8[0] & 0x1f;
      local_68 = (uint)local_c8;
      uStack_64 = local_c8._4_4_;
      if (uVar15 == 0) {
        local_res8 = (uint *)Scaleform::GFx::NumberUtil::NaN();
      }
      else if (uVar15 == 1) {
        if ((char)puStack_a8 == '\0') {
          local_res8 = (uint *)Scaleform::GFx::NumberUtil::NaN();
        }
        else {
          local_res8 = (uint *)0x3ff0000000000000;
        }
      }
      else if (uVar15 == 2) {
        local_res8 = (uint *)(double)(int)(uint)puStack_a8;
      }
      else if (uVar15 == 3) {
        local_res8 = (uint *)(double)((ulonglong)puStack_a8 & 0xffffffff);
      }
      else if (uVar15 == 4) {
        local_res8 = puStack_a8;
      }
      else {
        FUN_1435921c0(local_b8,&param_5,&local_res8);
        if ((char)param_5 == '\0') {
          uVar15 = local_98[0] & 0x1f;
          *param_2 = 0;
          if (9 < uVar15) {
            if ((local_98[0] >> 9 & 1) == 0) {
              if (uVar15 == 10) {
                piVar1 = (int *)((longlong)dStack_88 + 0x18);
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
                dVar13 = dStack_88;
                if (((ulonglong)dStack_88 & 1) == 0) {
LAB_1435d934e:
                  if ((dVar13 != 0.0) && ((*(uint *)((longlong)dVar13 + 8) & 0x3fffff) != 0)) {
                    *(uint *)((longlong)dVar13 + 8) = *(uint *)((longlong)dVar13 + 8) - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  dStack_88 = (double)((longlong)dStack_88 + -1);
                }
              }
              else if (uVar15 - 0xd < 2) {
                dVar13 = dStack_80;
                if (((ulonglong)dStack_80 & 1) == 0) goto LAB_1435d934e;
                dStack_80 = (double)((longlong)dStack_80 + -1);
              }
            }
            else {
              *local_90 = *local_90 + -1;
              if (*local_90 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
              local_98[0] = local_98[0] & 0xfffffde0;
              local_90 = (int *)0x0;
              dStack_88 = 0.0;
              dStack_80 = 0.0;
            }
          }
          uVar15 = local_b8[0] & 0x1f;
          if (9 < uVar15) {
            if ((local_b8[0] >> 9 & 1) == 0) {
              if (uVar15 == 10) {
                puVar14 = puStack_a8 + 6;
                *puVar14 = *puVar14 - 1;
                if (*puVar14 == 0) {
                  FUN_14335f920();
                }
              }
              else if ((uVar15 == 0xb) || (uVar15 == 0xc)) {
                puVar14 = puStack_a8;
                if (((ulonglong)puStack_a8 & 1) == 0) {
LAB_1435d93fb:
                  if ((puVar14 != (uint *)0x0) && ((puVar14[2] & 0x3fffff) != 0)) {
                    puVar14[2] = puVar14[2] - 1;
                    FUN_1434ef880();
                  }
                }
                else {
                  puStack_a8 = (uint *)((longlong)puStack_a8 + -1);
                }
              }
              else if (uVar15 - 0xd < 2) {
                puVar14 = local_a0;
                if (((ulonglong)local_a0 & 1) == 0) goto LAB_1435d93fb;
                local_a0 = (uint *)((longlong)local_a0 + -1);
              }
            }
            else {
              *local_b0 = *local_b0 + -1;
              if (*local_b0 == 0) {
                (**(code **)(*DAT_146b62f28 + 0x60))();
              }
              local_b8[0] = local_b8[0] & 0xfffffde0;
              local_b0 = (int *)0x0;
              puStack_a8 = (uint *)0x0;
              local_a0 = (uint *)0x0;
            }
          }
          if (((byte)local_78[0] & 0x1f) < 10) {
            return param_2;
          }
          if ((local_78[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_78);
            return param_2;
          }
LAB_1435d90a1:
          *local_70 = *local_70 + -1;
          if (*local_70 != 0) {
            return param_2;
          }
          (**(code **)(*DAT_146b62f28 + 0x60))();
          return param_2;
        }
      }
      puVar14 = local_res8;
      uVar15 = local_b8[0] & 0x1f;
      if (9 < uVar15) {
        if ((local_b8[0] >> 9 & 1) == 0) {
          if (uVar15 == 10) {
            puStack_a8 = puStack_a8 + 6;
            *puStack_a8 = *puStack_a8 - 1;
            if (*puStack_a8 == 0) {
              FUN_14335f920();
            }
          }
          else if ((((uVar15 == 0xb) || (uVar15 == 0xc)) ||
                   (puStack_a8 = local_a0, uVar15 - 0xd < 2)) &&
                  (((((ulonglong)puStack_a8 & 1) == 0 && (puStack_a8 != (uint *)0x0)) &&
                   ((puStack_a8[2] & 0x3fffff) != 0)))) {
            puStack_a8[2] = puStack_a8[2] - 1;
            FUN_1434ef880();
          }
        }
        else {
          *local_b0 = *local_b0 + -1;
          if (*local_b0 == 0) {
            (**(code **)(*DAT_146b62f28 + 0x60))();
          }
          local_b8[0] = local_b8[0] & 0xfffffde0;
          local_b0 = (int *)0x0;
        }
      }
      local_b8[0] = local_b8[0] & 0xffffffe4 | 4;
      local_98[0] = local_98[0] & 0xffffffe4 | 4;
      local_c8 = (double)CONCAT44(uStack_64,local_68) - (double)puVar14;
      puStack_a8 = puVar14;
      goto LAB_1435d9acc;
    case 3:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590b70(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_1434f0780(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,local_68 - (uint)puStack_a8);
          goto LAB_1435d9acc;
        }
      }
      break;
    case 4:
      FUN_14360f380(local_78,&param_5,&local_res8);
      if ((char)param_5 != '\0') {
        FUN_1434f06a0(local_78,local_res8);
        FUN_14360f380(local_b8,&param_5,&local_res8);
        if ((char)param_5 != '\0') {
          FUN_1434f06a0(local_b8,local_res8);
          local_c8 = (double)CONCAT44(uStack_64,local_68) * (double)puStack_a8;
          local_98[0] = local_98[0] & 0xffffffe4 | 4;
          goto LAB_1435d9acc;
        }
      }
      break;
    case 5:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590b70(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_1434f0780(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,local_68 * (uint)puStack_a8);
          goto LAB_1435d9acc;
        }
      }
      break;
    case 6:
      FUN_14360f380(local_78,&param_5,&local_res8);
      if ((char)param_5 != '\0') {
        FUN_1434f06a0(local_78,local_res8);
        FUN_14360f380(local_b8,&param_5,&local_res8);
        if ((char)param_5 != '\0') {
          FUN_1434f06a0(local_b8,local_res8);
          local_c8 = (double)CONCAT44(uStack_64,local_68) / (double)puStack_a8;
          local_98[0] = local_98[0] & 0xffffffe4 | 4;
          goto LAB_1435d9acc;
        }
      }
      break;
    case 7:
      FUN_14360f380(local_78,&param_5,&local_res8);
      if ((char)param_5 != '\0') {
        FUN_1434f06a0(local_78,local_res8);
        FUN_14360f380(local_b8,&param_5,&local_res8);
        if ((char)param_5 != '\0') {
          FUN_1434f06a0(local_b8,local_res8);
          local_98[0] = local_98[0] & 0xffffffe4 | 4;
          local_c8 = _guard_xfg_dispatch_icall_nop
                               ((double)CONCAT44(uStack_64,local_68),(double)puStack_a8);
          goto LAB_1435d9acc;
        }
      }
      break;
    case 8:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590b70(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_1434f0780(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,local_68 | (uint)puStack_a8);
          goto LAB_1435d9acc;
        }
      }
      break;
    case 9:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590b70(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_1434f0780(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,local_68 ^ (uint)puStack_a8);
          goto LAB_1435d9acc;
        }
      }
      break;
    case 10:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590b70(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_1434f0780(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,local_68 & (uint)puStack_a8);
          goto LAB_1435d9acc;
        }
      }
      break;
    case 0xb:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590eb0(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_143614720(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,local_68 << ((byte)puStack_a8 & 0x1f));
          goto LAB_1435d9acc;
        }
      }
      break;
    case 0xc:
      pcVar10 = (char *)FUN_143590b70(local_78,&param_5,&local_res8);
      if (*pcVar10 != '\0') {
        FUN_1434f0780(local_78,(ulonglong)local_res8 & 0xffffffff);
        pcVar10 = (char *)FUN_143590eb0(local_b8,&param_5,&local_res8);
        if (*pcVar10 != '\0') {
          FUN_143614720(local_b8,(ulonglong)local_res8 & 0xffffffff);
          local_98[0] = local_98[0] & 0xffffffe2 | 2;
          local_c8 = (double)CONCAT44(uVar6,(int)local_68 >> ((byte)puStack_a8 & 0x1f));
          goto LAB_1435d9acc;
        }
      }
      break;
    default:
      FUN_1434e64f0(local_98);
      FUN_1434e64f0(local_b8);
      FUN_1434e64f0(local_78);
      goto LAB_1435d9b12;
    case 0x10:
      pcVar10 = (char *)FUN_1435929f0(&param_5,&param_6,local_78,local_b8);
      if (*pcVar10 != '\0') {
        local_98[0] = local_98[0] & 0xffffffe1 | 1;
        local_c8 = (double)CONCAT71(local_c8._1_7_,(undefined1)param_6);
        goto LAB_1435d9acc;
      }
      break;
    case 0x11:
      uVar8 = FUN_1435927d0(local_78,local_b8);
      local_c8 = (double)CONCAT71(local_c8._1_7_,uVar8);
      local_98[0] = 1;
LAB_1435d9acc:
      dStack_88 = local_c8;
LAB_1435d9ad4:
      lVar11 = FUN_1435d0e70(param_1,local_98);
      *param_3 = lVar11;
      *param_2 = 1;
      goto LAB_1435d9a6e;
    case 0x12:
      puVar14 = local_b8;
      puVar16 = local_78;
      goto LAB_1435d9a4d;
    case 0x13:
      puVar14 = local_78;
      puVar16 = local_b8;
      goto LAB_1435d9a96;
    case 0x14:
      puVar14 = local_78;
      puVar16 = local_b8;
LAB_1435d9a4d:
      pcVar10 = (char *)FUN_143593d70(&param_5,&local_res8,puVar16,puVar14);
      param_6._0_1_ = (int)local_res8 == 1;
LAB_1435d9a5e:
      if (*pcVar10 != '\0') {
        local_c8 = (double)CONCAT71(local_c8._1_7_,(undefined1)param_6);
        local_98[0] = local_98[0] & 0xffffffe1 | 1;
        goto LAB_1435d9acc;
      }
      break;
    case 0x15:
      puVar14 = local_b8;
      puVar16 = local_78;
LAB_1435d9a96:
      pcVar10 = (char *)FUN_143593d70(&param_5,&local_res8,puVar16,puVar14);
      param_6._0_1_ = (int)local_res8 == 2;
      goto LAB_1435d9a5e;
    }
    *param_2 = 0;
LAB_1435d9a6e:
    FUN_1434e64f0(local_98);
    FUN_1434e64f0(local_b8);
    FUN_1434e64f0(local_78);
    return param_2;
  }
LAB_1435d9b12:
  switch(param_4) {
  case 0:
    lVar11 = FUN_1435d0db0(param_1,*(undefined8 *)(*(longlong *)(*param_1 + 0x200) + 0xd8),2);
    *param_3 = lVar11;
    cVar9 = FUN_1435cf730(local_res8);
    if ((cVar9 == '\0') && (cVar9 = FUN_1435cf730(puVar2), cVar9 == '\0')) {
      cVar9 = FUN_1435cfff0(param_1,lVar4);
      if (((cVar9 != '\0') && (cVar9 = FUN_1435cfff0(param_1,lVar3), cVar9 != '\0')) ||
         ((cVar9 = FUN_1435cff80(param_1,lVar4), cVar9 != '\0' &&
          (cVar9 = FUN_1435cff80(param_1,lVar3), cVar9 != '\0')))) goto switchD_1435d9b2a_caseD_4;
      param_1 = (longlong *)
                FUN_1435d0db0(param_1,*(undefined8 *)(*(longlong *)(param_5 + 0x208) + 0xd8),2);
    }
    else {
LAB_1435d9bca:
      param_1 = (longlong *)
                FUN_1435d0db0(param_1,*(undefined8 *)(*(longlong *)(*param_1 + 0x240) + 0xd8),2);
    }
    break;
  case 1:
  case 3:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x1a:
switchD_1435d9b2a_caseD_1:
    param_1 = param_1 + 0x17;
    break;
  case 2:
    if (bVar5) goto switchD_1435d9b2a_caseD_1;
  case 4:
  case 6:
  case 7:
switchD_1435d9b2a_caseD_4:
    param_1 = param_1 + 0x15;
    break;
  case 0xe:
switchD_1435d9b2a_caseD_e:
    lVar11 = *(longlong *)(param_5 + 0x208);
    goto LAB_1435d9c0b;
  case 0xf:
    if (lVar3 != 0) {
      if ((~(*(byte *)(lVar3 + 0x88) >> 5) & 1) == 0) {
        lVar11 = FUN_1436107c0(param_1,*(undefined8 *)(lVar3 + 0xd8),0);
      }
      else {
        lVar11 = FUN_143610830(param_1,lVar3);
      }
      *param_3 = lVar11;
    }
    if ((*param_3 == 0) ||
       (cVar9 = FUN_1435d0030(param_1,*(undefined8 *)(*param_3 + 8)), cVar9 == '\0'))
    goto switchD_1435d9b2a_default;
    lVar11 = *(longlong *)(param_5 + 0x208);
LAB_1435d9c0b:
    param_1 = (longlong *)FUN_1435d0db0(param_1,*(undefined8 *)(lVar11 + 0xd8),0,0);
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x18:
  case 0x19:
    param_1 = param_1 + 0x13;
    break;
  case 0x16:
    if ((*(int *)(lVar4 + 0x90) == 0xb) && ((~(*(byte *)(lVar4 + 0x88) >> 5) & 1) != 0))
    goto switchD_1435d9b2a_caseD_e;
    if ((*(byte *)(lVar4 + 0x88) & 1) == 0) goto LAB_1435d9bca;
    param_1 = param_1 + 0x19;
    break;
  default:
    goto switchD_1435d9b2a_default;
  }
  *param_3 = (longlong)param_1;
switchD_1435d9b2a_default:
  *param_2 = 1;
  return param_2;
}



// FUNCTION 1435d9dd0 FUN_1435d9dd0 body=494 status=ok
// SIG undefined FUN_1435d9dd0(void)

undefined1 *
FUN_1435d9dd0(longlong *param_1,undefined1 *param_2,longlong *param_3,undefined4 param_4,
             longlong param_5,longlong param_6,uint param_7)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_28 [8];
  longlong local_20;
  
  param_1 = (longlong *)*param_1;
  lVar6 = *param_1;
  *param_3 = 0;
  switch(param_4) {
  case 0:
    lVar6 = FUN_1435d0db0(param_1,*(undefined8 *)(param_6 + 0xd8),0,0);
    break;
  case 1:
    lVar5 = *(longlong *)(param_5 + 8);
    *param_3 = lVar5;
    if (lVar5 == 0) goto switchD_1435d9e1a_default;
    lVar5 = *(longlong *)(lVar5 + 8);
    if ((ulonglong)(*(longlong *)(lVar5 + 0x40) + *(longlong *)(lVar5 + 0x28)) < (ulonglong)param_7)
    {
      lVar6 = FUN_1435d0db0(param_1,*(undefined8 *)(*(longlong *)(*param_1 + 0x208) + 0xd8),0,0);
    }
    else {
      uVar3 = FUN_143610710(lVar5,((ulonglong)param_7 - 1) + (ulonglong)*(uint *)(lVar5 + 0x70));
      lVar5 = FUN_1435adda0(uVar3,lVar6);
      if (lVar5 == 0) {
        uVar3 = FUN_1435c8e40(local_28,0x3f6,lVar6);
        FUN_1435ccf60(lVar6,uVar3,&DAT_145b15be8);
        piVar1 = (int *)(local_20 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        *param_2 = 0;
        return param_2;
      }
      uVar4 = *(undefined8 *)(lVar5 + 0xd8);
      cVar2 = FUN_1435ab780(uVar3);
      if (cVar2 != '\0') goto LAB_1435d9f96;
      lVar6 = FUN_1436107c0(param_1,uVar4,0);
    }
    break;
  case 2:
  case 3:
    lVar6 = FUN_1436107c0(param_1,*(undefined8 *)(param_6 + 0xd8),0);
    break;
  case 4:
    *param_3 = (longlong)(param_1 + 0x13);
    goto switchD_1435d9e1a_default;
  case 5:
    lVar6 = *(longlong *)(param_5 + 8);
    *param_3 = lVar6;
    if (lVar6 == 0) goto switchD_1435d9e1a_default;
    uVar3 = *(undefined8 *)(lVar6 + 8);
    uVar4 = FUN_143610710(uVar3,(ulonglong)param_7 - 1);
    lVar5 = FUN_1435d0350(param_1,uVar3,uVar4);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x208) + 0xd8);
    }
LAB_1435d9f96:
    lVar6 = FUN_143610830(param_1,lVar5,0);
    break;
  default:
    goto switchD_1435d9e1a_default;
  }
  *param_3 = lVar6;
switchD_1435d9e1a_default:
  *param_2 = 1;
  return param_2;
}


