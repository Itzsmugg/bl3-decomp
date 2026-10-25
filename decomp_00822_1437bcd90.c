// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437bcd90 FUN_1437bcd90 body=10 status=ok
// SIG undefined FUN_1437bcd90(void)

longlong FUN_1437bcd90(longlong *param_1)

{
  return *param_1 + 0x298;
}



// FUNCTION 1437bcda0 FUN_1437bcda0 body=11 status=ok
// SIG undefined FUN_1437bcda0(void)

longlong FUN_1437bcda0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x18) + 0x298;
}



// FUNCTION 1437bcdb0 FUN_1437bcdb0 body=103 status=ok
// SIG undefined FUN_1437bcdb0(void)

bool FUN_1437bcdb0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
  if (puVar3 == (undefined8 *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)*puVar3;
  }
  uVar5 = 0;
  if ((bVar2 & 0xf) == 7) {
    uVar5 = uVar1;
  }
  puVar4 = (ulonglong *)FUN_143714b80(uVar5,local_res8,param_2,0);
  return 1 < *puVar4;
}



// FUNCTION 1437bce20 FUN_1437bce20 body=7 status=ok
// SIG undefined FUN_1437bce20(void)

uint FUN_1437bce20(uint *param_1)

{
  return *param_1 & 0x7fffffff;
}



// FUNCTION 1437bce30 FUN_1437bce30 body=1134 status=ok
// SIG undefined FUN_1437bce30(void)

void FUN_1437bce30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  ulonglong uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  bool bVar26;
  int local_res18;
  longlong local_res20;
  ulonglong local_50;
  
  uVar14 = DAT_146b82738;
  uVar19 = DAT_146b82730;
  uVar17 = DAT_146b82728;
  bVar26 = false;
  uVar25 = DAT_146b82738 & 1;
  if ((DAT_146b82738 & 1) != 0) {
    FUN_1437329e0(DAT_146b82738 & 0xfffffffffffffffe);
  }
  uVar6 = DAT_146b82740;
  plVar1 = (longlong *)(param_1 + 0x28);
  uVar16 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
    FUN_14370c460(uVar16,plVar1,0x20);
  }
  puVar24 = (undefined8 *)((longlong)*(int *)(param_1 + 0x30) * 0x20 + *plVar1);
  if (puVar24 != (undefined8 *)0x0) {
    *puVar24 = uVar17;
    puVar24[1] = uVar19;
    puVar24[2] = uVar14;
    if ((uVar14 & 1) != 0) {
      FUN_1437329e0(uVar14 & 0xfffffffffffffffe);
    }
    *(undefined4 *)(puVar24 + 3) = uVar6;
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  if (uVar25 != 0) {
    FUN_143733a60(uVar14 & 0xfffffffffffffffe);
  }
  plVar2 = (longlong *)(param_1 + 0x18);
  lVar22 = (param_2[1] - *param_2) / 6 + (param_2[1] - *param_2 >> 0x3f);
  uVar25 = (lVar22 >> 2) - (lVar22 >> 0x3f);
  uVar17 = FUN_143703a50();
  uVar21 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  iVar23 = (int)uVar25;
  if ((int)uVar21 < iVar23) {
    uVar21 = uVar21 * 2;
    uVar25 = uVar25 & 0xffffffff;
    if (iVar23 < (int)uVar21) {
      uVar25 = (ulonglong)uVar21;
    }
    FUN_14370c310(uVar17,plVar2,uVar25,0x18);
  }
  iVar15 = iVar23 - *(int *)(param_1 + 0x20);
  lVar22 = (longlong)iVar15;
  if (0 < iVar15) {
    puVar18 = (undefined1 *)(*plVar2 + (longlong)*(int *)(param_1 + 0x20) * 0x18 + 0x10);
    do {
      if ((undefined8 *)(puVar18 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar18 + -0x10) = 0;
        *(undefined8 *)(puVar18 + -8) = 0;
        *puVar18 = 0;
        *(undefined4 *)(puVar18 + 4) = 0;
      }
      puVar18 = puVar18 + 0x18;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  *(int *)(param_1 + 0x20) = iVar23;
  lVar22 = *param_2;
  iVar23 = -1;
  local_res18 = 0;
  if (0 < (int)((param_2[1] - lVar22) / 0x18)) {
    local_res20 = 0;
    iVar23 = -1;
    do {
      if (*(char *)(local_res20 + 0x10 + lVar22) == '\x01') {
        lVar7 = *(longlong *)(local_res20 + 8 + lVar22);
        uVar6 = *(undefined4 *)(local_res20 + 0x14 + lVar22);
        uVar17 = *(undefined8 *)(local_res20 + lVar22);
        if (lVar7 == 0) {
          uVar25 = 0;
        }
        else {
          uVar25 = FUN_1437151a0(lVar7);
        }
        if ((uVar25 & 1) != 0) {
          FUN_1437329e0(uVar25 & 0xfffffffffffffffe);
        }
        uVar19 = FUN_143703a50();
        if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
          FUN_14370c460(uVar19,plVar1,0x20);
        }
        puVar24 = (undefined8 *)((longlong)*(int *)(param_1 + 0x30) * 0x20 + *plVar1);
        if (puVar24 != (undefined8 *)0x0) {
          *puVar24 = uVar17;
          puVar24[1] = lVar7;
          puVar24[2] = uVar25;
          if ((uVar25 & 1) != 0) {
            FUN_1437329e0(uVar25 & 0xfffffffffffffffe);
          }
          *(undefined4 *)(puVar24 + 3) = uVar6;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        if ((uVar25 & 1) != 0) {
          FUN_143733a60(uVar25 & 0xfffffffffffffffe);
        }
      }
      else {
        puVar3 = (undefined4 *)(local_res20 + lVar22);
        uVar6 = puVar3[1];
        uVar11 = puVar3[2];
        uVar12 = puVar3[3];
        iVar15 = local_res18;
        if (local_res18 < iVar23) {
          iVar15 = iVar23;
        }
        iVar23 = iVar15;
        lVar7 = *plVar2;
        puVar4 = (undefined4 *)(local_res20 + lVar7);
        *puVar4 = *puVar3;
        puVar4[1] = uVar6;
        puVar4[2] = uVar11;
        puVar4[3] = uVar12;
        *(undefined8 *)(local_res20 + 0x10 + lVar7) = *(undefined8 *)(local_res20 + 0x10 + lVar22);
        uVar25 = local_50;
        if (*(char *)(local_res20 + 0x10 + lVar22) == '\x02') {
          lVar20 = (longlong)*(int *)(local_res20 + 0x14 + lVar22);
          bVar26 = true;
          lVar7 = *param_2;
          lVar8 = *(longlong *)(lVar7 + lVar20 * 0x18);
          lVar9 = *(longlong *)(lVar7 + 8 + lVar20 * 0x18);
          if (lVar9 == 0) {
            uVar25 = 0;
          }
          else {
            uVar25 = FUN_1437151a0(lVar9,lVar7 + lVar20 * 0x18);
          }
          if ((uVar25 & 1) != 0) {
            FUN_1437329e0(uVar25 & 0xfffffffffffffffe);
          }
          if (lVar8 != 0) goto LAB_1437bd219;
          bVar13 = true;
        }
        else {
LAB_1437bd219:
          bVar13 = false;
        }
        if ((bVar26) && (bVar26 = false, (uVar25 & 1) != 0)) {
          FUN_143733a60(uVar25 & 0xfffffffffffffffe);
        }
        if (bVar13) {
          cVar5 = *(char *)(local_res20 + 0x10 + lVar22);
          if (cVar5 == '\x02') {
            iVar15 = *(int *)(local_res20 + 0x14 + lVar22);
          }
          else {
            iVar15 = 0;
          }
          if (iVar15 < iVar23) {
            iVar15 = iVar23;
          }
          iVar23 = iVar15;
          if (cVar5 == '\x02') {
            *(int *)(*plVar2 + 0x14 + (longlong)*(int *)(local_res20 + 0x14 + lVar22) * 0x18) =
                 local_res18;
          }
          else {
            *(int *)(*plVar2 + 0x14) = local_res18;
          }
        }
      }
      local_res18 = local_res18 + 1;
      local_res20 = local_res20 + 0x18;
      lVar22 = *param_2;
    } while (local_res18 < (int)((param_2[1] - lVar22) / 0x18));
  }
  iVar23 = iVar23 + 1;
  uVar17 = FUN_143703a50();
  uVar21 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  if ((int)uVar21 < iVar23) {
    iVar10 = uVar21 * 2;
    iVar15 = iVar23;
    if (iVar23 < iVar10) {
      iVar15 = iVar10;
    }
    FUN_14370c310(uVar17,plVar2,iVar15,0x18);
  }
  iVar15 = iVar23 - *(int *)(param_1 + 0x20);
  lVar22 = (longlong)iVar15;
  if (0 < iVar15) {
    puVar18 = (undefined1 *)(*plVar2 + (longlong)*(int *)(param_1 + 0x20) * 0x18 + 0x10);
    do {
      if ((undefined8 *)(puVar18 + -0x10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar18 + -0x10) = 0;
        *(undefined8 *)(puVar18 + -8) = 0;
        *puVar18 = 0;
        *(undefined4 *)(puVar18 + 4) = 0;
      }
      puVar18 = puVar18 + 0x18;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  *(int *)(param_1 + 0x20) = iVar23;
  return;
}



// FUNCTION 1437bd2a0 FUN_1437bd2a0 body=279 status=ok
// SIG undefined FUN_1437bd2a0(void)

longlong FUN_1437bd2a0(longlong *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  uVar6 = FUN_1437bce20(param_2);
  puVar8 = (uint *)(param_1[2] + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8);
  if (-1 < *(int *)(param_1[2] + 4 + (ulonglong)(*(uint *)(param_1 + 3) & uVar6) * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar8[1] * 8) == *param_2) {
        iVar4 = *param_3;
        *(int *)(*param_1 + 4 + (longlong)(int)puVar8[1] * 8) = iVar4;
        return (ulonglong)(uint3)((uint)iVar4 >> 8) << 8;
      }
      lVar5 = param_1[2];
      uVar7 = ((longlong)puVar8 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar5 + uVar7 * 8);
    } while (-1 < *(int *)(lVar5 + 4 + uVar7 * 8));
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar8 = uVar6;
  puVar8[1] = uVar3;
  uVar9 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar9,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  piVar2 = (int *)(*param_1 + (longlong)(int)param_1[1] * 8);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar2 = *param_2;
  iVar4 = *param_3;
  piVar2[1] = iVar4;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



// FUNCTION 1437bd3c0 FUN_1437bd3c0 body=98 status=ok
// SIG undefined FUN_1437bd3c0(void)

undefined8 FUN_1437bd3c0(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    lVar1 = param_1[1];
    puVar3 = (undefined8 *)FUN_143714490(lVar1,1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)*puVar3;
    }
    lVar4 = 0;
    if ((bVar2 & 0xf) == 6) {
      lVar4 = lVar1;
    }
    if ((lVar4 == 0) || (*(int *)*param_1 != 0)) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1437bd430 FUN_1437bd430 body=1772 status=ok
// SIG undefined FUN_1437bd430(void)

undefined4 * FUN_1437bd430(byte *param_1,undefined4 *param_2,int param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  byte **ppbVar18;
  byte *pbVar19;
  byte bVar20;
  byte **local_res20;
  undefined8 in_stack_fffffffffffffd28;
  undefined4 in_stack_fffffffffffffd30;
  int local_2a8 [2];
  byte *local_2a0;
  byte **local_298;
  byte *local_290;
  byte *local_288;
  byte **local_280;
  byte *local_278;
  undefined8 local_270;
  longlong local_268;
  byte **local_260;
  byte *local_258;
  byte *local_250;
  undefined4 local_248;
  undefined1 local_228 [16];
  undefined1 local_218 [480];
  
  local_280 = (byte **)(longlong)param_3;
  local_268 = (longlong)local_280 * 4;
  if ((*(int *)(local_268 + *(longlong *)(param_1 + 0x288)) != 0) || (param_1[0x340] != 0)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  lVar10 = *(longlong *)(param_1 + 0x220);
  lVar17 = (longlong)local_280 * 0x20;
  uVar1 = *(ulonglong *)(lVar17 + 0x10 + lVar10);
  local_270 = *(undefined8 *)(lVar17 + lVar10);
  pbVar2 = *(byte **)(lVar17 + 8 + lVar10);
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  if (((uVar1 & 1) != 0) && (FUN_1437329e0(uVar1 & 0xfffffffffffffffe), (uVar1 & 1) != 0)) {
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
  }
  local_res20 = (byte **)(*(longlong *)(param_1 + 0x220) + lVar17);
  pbVar12 = local_res20[2];
  local_250 = pbVar12;
  if (((ulonglong)pbVar12 & 1) != 0) {
    FUN_1437329e0((ulonglong)pbVar12 & 0xfffffffffffffffe);
  }
  uVar16 = (int)*(uint *)(local_res20 + 3) >> 0x1f;
  local_res20 = (byte **)CONCAT44(local_res20._4_4_,(*(uint *)(local_res20 + 3) ^ uVar16) - uVar16);
  if (((ulonglong)pbVar12 & 1) != 0) {
    FUN_143733a60((ulonglong)pbVar12 & 0xfffffffffffffffe);
  }
  pbVar12 = (byte *)0x0;
  bVar20 = 0;
  if (pbVar2 == (byte *)0x0) {
LAB_1437bdab7:
    *param_2 = 0;
  }
  else {
    ppbVar18 = &local_288;
    bVar3 = *pbVar2;
    local_288 = pbVar2;
    local_298 = ppbVar18;
    while (uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd28 >> 0x20), (~bVar3 & 1) != 0) {
      FUN_143737060(local_218);
      FUN_143737b00(local_218,pbVar2,0xffffffff);
      piVar8 = (int *)FUN_143737960(local_218,local_2a8,param_1 + 0x68,&local_278);
      if (*piVar8 < 0) {
        if (DAT_146b8b428 != '\0') {
          FUN_14373a730(&local_260,&DAT_146b8b420,1);
          lVar10 = FUN_14373bbd0(&local_260,"Failed to allocate type from builder",&DAT_145b909f0,0)
          ;
          *(char **)(lVar10 + 0x20) = "Version\\hkCompatPatcher.cpp";
          *(undefined8 *)(lVar10 + 0x28) = 0x566;
          FUN_14373a950(&local_260);
        }
        *param_2 = 0x80040200;
        FUN_143737160(local_218);
        goto LAB_1437bdabe;
      }
      *ppbVar18 = local_278;
      pbVar2 = *(byte **)(pbVar2 + 8);
      ppbVar18 = (byte **)(local_278 + 8);
      local_298 = ppbVar18;
      FUN_143737160(local_218);
      bVar3 = *pbVar2;
    }
    puVar9 = (undefined8 *)FUN_143714490(pbVar2,1);
    bVar3 = bVar20;
    if (puVar9 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar9;
    }
    pbVar13 = pbVar12;
    if ((bVar3 & 0xf) == 7) {
      pbVar13 = pbVar2;
    }
    if (pbVar13 == (byte *)0x0) {
      puVar9 = (undefined8 *)FUN_143714490(pbVar2,1);
      bVar3 = bVar20;
      if (puVar9 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar9;
      }
      pbVar13 = pbVar12;
      if ((bVar3 & 0xf) == 6) {
        pbVar13 = pbVar2;
      }
      if (pbVar13 == (byte *)0x0) {
        puVar9 = (undefined8 *)FUN_143714490(pbVar2,1);
        uVar16 = 0;
        bVar20 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          bVar20 = (byte)*puVar9;
        }
        if ((bVar20 & 0xf) == 3) {
          pbVar12 = pbVar2;
        }
        if (pbVar12 == (byte *)0x0) goto LAB_1437bd845;
        pbVar13 = (byte *)(**(code **)(*(longlong *)(param_1 + 0x68) + 8))(param_1 + 0x68,0x38);
        puVar9 = (undefined8 *)FUN_143714420(pbVar12,1);
        if (puVar9 != (undefined8 *)0x0) {
          uVar16 = (uint)*puVar9;
        }
        if (pbVar13 != (byte *)0x0) {
          uVar14 = FUN_1437151f0(pbVar2);
          FUN_143736d50(pbVar13,8,8,param_1 + 0x1c0,uVar14,
                        CONCAT31((int3)((uint)in_stack_fffffffffffffd30 >> 8),(char)(uVar16 >> 7)) &
                        0xffffff01,0);
          uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
        }
      }
      else {
        local_290 = (byte *)(**(code **)(*(longlong *)(param_1 + 0x68) + 8))(param_1 + 0x68,0x70);
        puVar9 = (undefined8 *)FUN_143714420(pbVar13,2);
        pbVar19 = pbVar12;
        if (puVar9 != (undefined8 *)0x0) {
          pbVar19 = (byte *)*puVar9;
        }
        local_2a0 = (byte *)FUN_1437151f0(pbVar13);
        puVar9 = (undefined8 *)FUN_143714490(pbVar19,1);
        if (puVar9 != (undefined8 *)0x0) {
          bVar20 = (byte)*puVar9;
        }
        if ((bVar20 & 0xf) == 7) {
          pbVar12 = pbVar19;
        }
        if (((pbVar12 != (byte *)0x0) &&
            (puVar11 = (uint *)FUN_143715390(pbVar12,local_2a8), (*puVar11 >> 5 & 1) == 0)) &&
           (puVar9 = (undefined8 *)FUN_14377d260(param_1 + 0x68,0,0,pbVar19),
           puVar9 != (undefined8 *)0x0)) {
          pbVar19 = (byte *)*puVar9;
        }
        pbVar13 = local_290;
        if (local_290 != (byte *)0x0) {
          FUN_143736ce0(local_290,pbVar19,local_2a0,0);
        }
        *(undefined8 *)(pbVar13 + 0x20) = *(undefined8 *)(param_1 + 0x60);
      }
      *local_298 = pbVar13;
    }
    else {
      puVar11 = (uint *)FUN_143715390(pbVar13,local_2a8);
      if ((*puVar11 >> 5 & 1) == 0) {
        puVar9 = (undefined8 *)FUN_14377d260(param_1 + 0x68,0,0,pbVar2);
        if (puVar9 == (undefined8 *)0x0) {
          FUN_1437bf270(param_1,param_3);
          *param_2 = 0x80040200;
          goto LAB_1437bdabe;
        }
        *ppbVar18 = (byte *)*puVar9;
      }
    }
LAB_1437bd845:
    pbVar12 = local_288;
    if (local_288 != (byte *)0x0) {
      local_2a0 = local_288;
      piVar8 = (int *)FUN_14372adb0(param_1 + 0x48,local_2a8,&local_2a0,&local_290);
      if (*piVar8 < 0) {
        local_2a0 = (byte *)(longlong)*(int *)(param_1 + 0x1e0);
        local_290 = pbVar12;
        uVar14 = FUN_143703a50();
        FUN_14372d6e0(param_1 + 0x48,uVar14,&local_290,&local_2a0);
        uVar14 = FUN_143703a50();
        if (*(uint *)(param_1 + 0x1e0) == (*(uint *)(param_1 + 0x1e4) & 0x3fffffff)) {
          FUN_14370c460(uVar14,param_1 + 0x1d8,0x10);
        }
        puVar9 = (undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x1e0) * 0x10 + *(longlong *)(param_1 + 0x1d8));
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0x80000000;
        }
        *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
      }
      plVar15 = (longlong *)FUN_14374ea80(param_1 + 0x2b0,local_228,pbVar2,pbVar12);
      local_2a0 = (byte *)*plVar15;
      if (local_2a0 != (byte *)0x0) {
        iVar4 = FUN_1437152f0(pbVar12);
        iVar4 = iVar4 * (int)local_res20;
        local_2a8[0] = iVar4;
        local_298 = (byte **)(**(code **)(*(longlong *)(param_1 + 0x230) + 8))
                                       (param_1 + 0x230,iVar4);
        FUN_14370c720(local_298,0,iVar4);
        ppbVar18 = local_298;
        local_290 = param_1;
        if ((int)local_res20 != 0) {
          uVar5 = FUN_1437152f0(pbVar2);
          uVar6 = FUN_1437152f0(local_288);
          iVar4 = FUN_1437152f0(pbVar2);
          ppbVar18 = local_298;
          uVar14 = local_270;
          FUN_1437b5bc0(&local_290,local_2a0,local_298,local_2a8[0],local_270,
                        iVar4 * (int)local_res20,uVar6,uVar5,(int)local_res20);
          uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
          pbVar12 = local_288;
        }
        uVar7 = FUN_1437152f0(pbVar12);
        uVar14 = FUN_1437b8040(&local_260,ppbVar18,pbVar12);
        uVar6 = (int)local_res20;
        FUN_1437b9cd0(param_1,uVar14,(ulonglong)local_res20 & 0xffffffff,uVar7,
                      CONCAT44(uVar5,0xffffffff),param_3);
        *(undefined4 *)(local_268 + *(longlong *)(param_1 + 0x288)) = 1;
        local_260 = ppbVar18;
        local_258 = pbVar12;
        local_250 = (byte *)FUN_1437151a0(pbVar12);
        if (((ulonglong)local_250 & 1) != 0) {
          FUN_1437329e0((ulonglong)local_250 & 0xfffffffffffffffe);
        }
        local_248 = uVar6;
        FUN_1437bf160(param_1 + 0x1f8,param_3,&local_260);
        if (((ulonglong)local_250 & 1) != 0) {
          FUN_143733a60((ulonglong)local_250 & 0xfffffffffffffffe);
        }
        local_res20 = local_280;
        local_280 = ppbVar18;
        uVar14 = FUN_143703a50();
        FUN_14372d6e0(param_1 + 0x2a0,uVar14,&local_280,&local_res20);
        goto LAB_1437bdab7;
      }
    }
    FUN_1437bf270(param_1,param_3);
    *param_2 = 0x80040200;
  }
LAB_1437bdabe:
  if ((uVar1 & 1) != 0) {
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437bdb20 FUN_1437bdb20 body=1001 status=ok
// SIG undefined FUN_1437bdb20(void)

undefined4 * FUN_1437bdb20(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_res8;
  byte local_res18 [8];
  longlong local_res20;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  
  lVar12 = (longlong)param_3;
  local_68 = lVar12 * 4;
  if ((*(int *)(local_68 + *(longlong *)(param_1 + 0x278)) == 0) &&
     (*(char *)(param_1 + 0x340) == '\0')) {
    local_60 = lVar12 * 0x18;
    lVar1 = *(longlong *)(local_60 + 8 + *(longlong *)(param_1 + 0x210));
    uVar10 = *(undefined8 *)(local_60 + *(longlong *)(param_1 + 0x210));
    if (lVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1437151a0(lVar1);
    }
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    plVar6 = (longlong *)FUN_14377d260(param_1 + 0x68,0,0,lVar1);
    if (plVar6 == (longlong *)0x0) {
      FUN_1437bf3f0(param_1,param_3);
      *param_2 = 0x80040200;
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
    }
    else {
      lVar2 = *plVar6;
      local_res8 = lVar2;
      piVar7 = (int *)FUN_14372adb0(param_1 + 0x48,local_res18,&local_res8,&local_res20);
      if (*piVar7 < 0) {
        local_res8 = (longlong)*(int *)(param_1 + 0x1e0);
        local_res20 = lVar2;
        uVar8 = FUN_143703a50();
        FUN_14372d6e0(param_1 + 0x48,uVar8,&local_res20,&local_res8);
        uVar8 = FUN_143703a50();
        if (*(uint *)(param_1 + 0x1e0) == (*(uint *)(param_1 + 0x1e4) & 0x3fffffff)) {
          FUN_14370c460(uVar8,(longlong *)(param_1 + 0x1d8),0x10);
        }
        puVar9 = (undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x1e0) * 0x10 + *(longlong *)(param_1 + 0x1d8));
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0x80000000;
          *puVar9 = 0;
          *(undefined4 *)(puVar9 + 1) = 0;
        }
        *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
      }
      plVar6 = (longlong *)FUN_14374ea80(param_1 + 0x2b0,local_58,lVar1,lVar2);
      local_res20 = *plVar6;
      if (local_res20 == 0) {
        FUN_1437bf3f0(param_1,param_3);
        *param_2 = 0x80040200;
      }
      else {
        uVar3 = FUN_1437152f0(lVar2);
        local_res8 = (**(code **)(*(longlong *)(param_1 + 0x230) + 8))
                               ((longlong *)(param_1 + 0x230),uVar3);
        FUN_14370c720(local_res8,0,uVar3);
        local_70 = param_1;
        uVar4 = FUN_1437152f0(lVar1);
        FUN_1437b5bc0(&local_70,local_res20,local_res8,uVar3,uVar10,uVar4,uVar3,0,1);
        uVar3 = (undefined4)((ulonglong)uVar10 >> 0x20);
        uVar10 = FUN_1437b8040(&local_50,local_res8,lVar2);
        FUN_1437b9cd0(param_1,uVar10,1,0,CONCAT44(uVar3,param_3),0xffffffff);
        *(undefined4 *)(local_68 + *(longlong *)(param_1 + 0x278)) = 1;
        if (lVar2 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_1437151a0(lVar2);
        }
        local_res18[0] = (byte)uVar11 & 1;
        if ((uVar11 & 1) != 0) {
          FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
        }
        local_40 = 0;
        local_3c = 0;
        local_50 = 0;
        uStack_48 = 0;
        FUN_1437b76f0(param_1 + 0x210,param_3,&local_50);
        *(longlong *)(local_60 + *(longlong *)(param_1 + 0x210)) = local_res8;
        *(longlong *)(local_60 + 8 + *(longlong *)(param_1 + 0x210)) = lVar2;
        if (local_res18[0] != 0) {
          FUN_143733a60(uVar11 & 0xfffffffffffffffe);
        }
        local_res20 = lVar12;
        uVar10 = FUN_143703a50();
        FUN_14372d6e0(param_1 + 0x2a0,uVar10,&local_res8,&local_res20);
        *param_2 = 0;
      }
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
    }
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1437bdf10 FUN_1437bdf10 body=524 status=ok
// SIG undefined FUN_1437bdf10(void)

int FUN_1437bdf10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  undefined8 local_30;
  longlong lStack_28;
  ulonglong local_20;
  
  uVar5 = FUN_14377ef20(param_1 + 0x368);
  plVar6 = (longlong *)FUN_14377edb0(param_1 + 0x68,param_2,uVar5);
  lVar2 = *plVar6;
  puVar7 = (undefined8 *)FUN_143714490(lVar2,1);
  bVar4 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    bVar4 = (byte)*puVar7;
  }
  lVar3 = *(longlong *)(param_1 + 0x230);
  lVar11 = 0;
  if ((bVar4 & 0xf) == 7) {
    lVar11 = lVar2;
  }
  uVar5 = FUN_1437152f0(lVar11);
  uVar8 = (**(code **)(lVar3 + 8))(param_1 + 0x230,uVar5);
  uVar5 = FUN_1437152f0(lVar11);
  FUN_14370c720(uVar8,0,uVar5);
  local_48 = uVar8;
  local_40 = lVar11;
  if (lVar11 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_1437151a0(lVar11);
  }
  if ((local_38 & 1) != 0) {
    FUN_1437329e0(local_38 & 0xfffffffffffffffe);
  }
  FUN_1437449a0(&local_48);
  iVar1 = *(int *)(param_1 + 0x218);
  if (lVar11 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_1437151a0(lVar11);
  }
  if ((uVar9 & 1) != 0) {
    FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
  }
  local_20 = (local_20 >> 8 & 0xffffff) << 8;
  local_30 = 0;
  lStack_28 = 0;
  FUN_1437b76f0(param_1 + 0x210,iVar1,&local_30);
  *(undefined8 *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar1 * 0x18) = uVar8;
  *(longlong *)(*(longlong *)(param_1 + 0x210) + 8 + (longlong)iVar1 * 0x18) = lVar11;
  uVar10 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x280) == (*(uint *)(param_1 + 0x284) & 0x3fffffff)) {
    FUN_14370c460(uVar10,(longlong *)(param_1 + 0x278),4);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + (longlong)*(int *)(param_1 + 0x280) * 4) = 1;
  *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
  local_30 = uVar8;
  lStack_28 = lVar11;
  local_20 = uVar9;
  if ((uVar9 & 1) != 0) {
    FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
  }
  FUN_1437b9cd0(param_1,&local_30,1,0,iVar1,0xffffffff);
  if ((uVar9 & 1) != 0) {
    FUN_143733a60(uVar9 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  return iVar1;
}



// FUNCTION 1437be120 FUN_1437be120 body=225 status=ok
// SIG undefined FUN_1437be120(void)

undefined8 FUN_1437be120(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint local_res8 [2];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar3 = FUN_1437151f0(*(undefined8 *)(param_3 + 8));
  uVar2 = FUN_1437bdf10(*param_1,uVar3);
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x210) + 8 + (longlong)(int)uVar2 * 0x18);
  uVar3 = *(undefined8 *)(*(longlong *)(*param_1 + 0x210) + (longlong)(int)uVar2 * 0x18);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1437151a0(lVar1);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  local_res8[0] = uVar2 & 0x7fffffff;
  local_48 = uVar3;
  local_40 = lVar1;
  local_38 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1437b80d0(param_2,&local_48,*param_1,local_res8);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437be210 FUN_1437be210 body=112 status=ok
// SIG undefined FUN_1437be210(void)

undefined8 FUN_1437be210(longlong param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x210) + (longlong)param_2 * 0x18);
  if (*(longlong *)(*(longlong *)(param_1 + 0x210) + 8 + (longlong)param_2 * 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1437151a0();
  }
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_143733a60(uVar2 & 0xfffffffffffffffe);
  }
  return uVar1;
}



// FUNCTION 1437be280 FUN_1437be280 body=473 status=ok
// SIG undefined FUN_1437be280(void)

ulonglong FUN_1437be280(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  longlong *local_res10;
  byte *local_res18;
  ulonglong local_res20;
  int local_38 [6];
  
  local_res18 = param_3;
  if (param_3 != (byte *)0x0) {
    bVar4 = *param_3;
    while ((~bVar4 & 1) != 0) {
      local_res18 = *(byte **)(local_res18 + 8);
      bVar4 = *local_res18;
    }
  }
  pbVar2 = local_res18;
  local_res20 = CONCAT44(local_res20._4_4_,0xffffffff);
  local_res10 = param_2;
  FUN_1437b75a0(param_2,local_38,&local_res18,&local_res20);
  local_res18 = (byte *)((longlong)local_38[0] * 0x10);
  if (*(uint *)(local_res18 + *param_2 + 8) != 0xffffffff) {
    return (ulonglong)*(uint *)(local_res18 + *param_2 + 8);
  }
  uVar9 = (longlong)*(int *)(param_1 + 0x208) * 8 >> 3;
  local_res20 = uVar9;
  FUN_1437bf070(param_1 + 0x1f8,uVar9 & 0xffffffff,pbVar2);
  *(int *)(local_res18 + *param_2 + 8) = (int)uVar9;
  puVar6 = (undefined8 *)FUN_143714490(pbVar2,1);
  pbVar11 = (byte *)0x0;
  bVar3 = 0;
  bVar4 = bVar3;
  if (puVar6 != (undefined8 *)0x0) {
    bVar4 = (byte)*puVar6;
  }
  pbVar8 = pbVar11;
  if ((bVar4 & 0xf) == 7) {
    pbVar8 = pbVar2;
  }
  if (pbVar8 == (byte *)0x0) {
    puVar6 = (undefined8 *)FUN_143714490(pbVar2,1);
    bVar4 = bVar3;
    if (puVar6 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar6;
    }
    pbVar8 = pbVar11;
    if ((bVar4 & 0xf) == 8) {
      pbVar8 = pbVar2;
    }
    if (pbVar8 == (byte *)0x0) {
      puVar6 = (undefined8 *)FUN_143714490(pbVar2,1);
      if (puVar6 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar6;
      }
      pbVar8 = pbVar11;
      if ((bVar3 & 0xf) == 6) {
        pbVar8 = pbVar2;
      }
      if (pbVar8 == (byte *)0x0) goto LAB_1437be44a;
    }
    puVar6 = (undefined8 *)FUN_143714420(pbVar8,2);
    if (puVar6 != (undefined8 *)0x0) {
      pbVar11 = (byte *)*puVar6;
    }
    FUN_1437be280(param_1,local_res10,pbVar11);
  }
  else {
    iVar5 = FUN_143715240(pbVar8);
    plVar1 = local_res10;
    if (0 < iVar5) {
      do {
        plVar7 = (longlong *)FUN_143714e90(pbVar8,&local_res10,pbVar11);
        FUN_1437be280(param_1,plVar1,*(undefined8 *)(*plVar7 + 8));
        uVar10 = (int)pbVar11 + 1;
        pbVar11 = (byte *)(ulonglong)uVar10;
        iVar5 = FUN_143715240(pbVar8);
      } while ((int)uVar10 < iVar5);
      return local_res20;
    }
  }
LAB_1437be44a:
  return uVar9 & 0xffffffff;
}



// FUNCTION 1437be460 FUN_1437be460 body=191 status=ok
// SIG undefined FUN_1437be460(void)

void FUN_1437be460(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar1 = FUN_1437bca50(param_1,param_2[1]);
  if (-1 < iVar1) {
    uVar4 = 0;
    plVar5 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x1d8));
    iVar1 = (int)plVar5[1];
    if (0 < iVar1) {
      plVar2 = (longlong *)*plVar5;
      uVar8 = uVar4;
      do {
        iVar7 = (int)uVar8;
        if (*plVar2 == *param_2) {
          iVar1 = iVar1 + -1;
          *(int *)(plVar5 + 1) = iVar1;
          if (iVar1 != iVar7) {
            puVar3 = (undefined8 *)(*plVar5 + (longlong)iVar7 * 0x18);
            lVar6 = 3;
            lVar9 = (*plVar5 + (longlong)iVar1 * 0x18) - (longlong)puVar3;
            do {
              *puVar3 = *(undefined8 *)(lVar9 + (longlong)puVar3);
              puVar3 = puVar3 + 1;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          break;
        }
        uVar8 = (ulonglong)(iVar7 + 1);
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 3;
      } while ((longlong)uVar4 < (longlong)iVar1);
    }
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437be520 FUN_1437be520 body=101 status=ok
// SIG undefined FUN_1437be520(void)

void FUN_1437be520(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  DAT_146b8b4c0._0_1_ = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x388);
  if (lVar2 != 0) {
    FUN_1437b7c20(lVar2,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1437be590 FUN_1437be590 body=1488 status=ok
// SIG undefined FUN_1437be590(void)

void FUN_1437be590(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  
  plVar9 = (longlong *)(param_1 + 0x28);
  local_40 = plVar9;
  lVar3 = FUN_1437b98d0(plVar9,param_4);
  if (lVar3 == 0) {
    uVar5 = param_2[2];
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x20));
    local_50 = *param_2;
    local_58 = param_2[1];
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    local_60 = *param_3;
    uVar2 = param_3[2];
    local_48 = param_3[1];
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar6,param_1 + 0x18,0x10);
    }
    uVar7 = 0;
    puVar8 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18));
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0x80000000;
    }
    plVar9 = (longlong *)((longlong)*(int *)(param_1 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x18))
    ;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    uVar6 = FUN_143703a50();
    if (*(uint *)(plVar9 + 1) == (*(uint *)((longlong)plVar9 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar6,plVar9,0x30);
    }
    puVar8 = (undefined8 *)((longlong)(int)plVar9[1] * 0x30 + *plVar9);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = local_50;
      puVar8[1] = local_58;
      puVar8[2] = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      puVar8[3] = local_60;
      puVar8[4] = local_48;
      puVar8[5] = uVar2;
      if ((uVar2 & 1) != 0) {
        FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
      }
    }
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    if ((uVar2 & 1) != 0) {
      FUN_143733a60(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(uVar5 & 0xfffffffffffffffe);
    }
    lVar3 = param_3[1];
    uVar6 = *param_2;
    if (lVar3 != 0) {
      uVar7 = FUN_1437151a0(lVar3);
    }
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    local_48 = *param_3;
    uVar5 = param_3[2];
    local_50 = param_3[1];
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    plVar9 = (longlong *)
             ((longlong)(*(int *)(param_1 + 0x20) + -1) * 0x10 + *(longlong *)(param_1 + 0x18));
    uVar4 = FUN_143703a50();
    if (*(uint *)(plVar9 + 1) == (*(uint *)((longlong)plVar9 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,plVar9,0x30);
    }
    puVar8 = (undefined8 *)((longlong)(int)plVar9[1] * 0x30 + *plVar9);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = uVar6;
      puVar8[1] = lVar3;
      puVar8[2] = uVar7;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      puVar8[3] = local_48;
      puVar8[4] = local_50;
      puVar8[5] = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
    }
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(uVar5 & 0xfffffffffffffffe);
    }
    if ((uVar7 & 1) != 0) {
      FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      if ((uVar7 & 1) != 0) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
    }
    FUN_1437bd2a0(local_40,param_4,&local_68);
  }
  else {
    uVar5 = param_2[2];
    iVar1 = *(int *)(*plVar9 + 4 + (longlong)*(int *)(lVar3 + 4) * 8);
    uVar6 = *param_2;
    local_68 = param_2[1];
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    local_60 = *param_3;
    uVar2 = param_3[2];
    local_58 = param_3[1];
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    local_50 = (longlong)iVar1 * 0x10;
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x18) + local_50);
    uVar4 = FUN_143703a50();
    if (*(uint *)(plVar9 + 1) == (*(uint *)((longlong)plVar9 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,plVar9,0x30);
    }
    puVar8 = (undefined8 *)((longlong)(int)plVar9[1] * 0x30 + *plVar9);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = uVar6;
      puVar8[1] = local_68;
      puVar8[2] = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      puVar8[3] = local_60;
      puVar8[4] = local_58;
      puVar8[5] = uVar2;
      if ((uVar2 & 1) != 0) {
        FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
      }
    }
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    if ((uVar2 & 1) != 0) {
      FUN_143733a60(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(uVar5 & 0xfffffffffffffffe);
    }
    lVar3 = param_3[1];
    uVar6 = *param_2;
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1437151a0(lVar3);
    }
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    local_58 = *param_3;
    uVar2 = param_3[2];
    local_60 = param_3[1];
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    plVar9 = (longlong *)(local_50 + *(longlong *)(param_1 + 0x18));
    uVar4 = FUN_143703a50();
    if (*(uint *)(plVar9 + 1) == (*(uint *)((longlong)plVar9 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar4,plVar9,0x30);
    }
    puVar8 = (undefined8 *)((longlong)(int)plVar9[1] * 0x30 + *plVar9);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = uVar6;
      puVar8[1] = lVar3;
      puVar8[2] = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      puVar8[3] = local_58;
      puVar8[4] = local_60;
      puVar8[5] = uVar2;
      if ((uVar2 & 1) != 0) {
        FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
      }
    }
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    if ((uVar2 & 1) != 0) {
      FUN_143733a60(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
    }
  }
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_143733a60(param_3[2] & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437beb60 FUN_1437beb60 body=1285 status=ok
// SIG undefined FUN_1437beb60(void)

void FUN_1437beb60(longlong param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong local_res8;
  int local_res10;
  undefined8 local_res18;
  ulonglong local_res20;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  int local_90;
  longlong local_88;
  ulonglong local_80;
  ulonglong local_78;
  uint local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  int local_50;
  
  if ((param_2 != *(int *)(param_1 + 0x20)) &&
     (local_res10 = param_2, iVar3 = FUN_1437bcc60(), -1 < iVar3)) {
    uVar12 = *(ulonglong *)(param_1 + 8);
    puVar5 = (undefined8 *)FUN_143714490(uVar12,1);
    uVar10 = 0;
    bVar1 = 0;
    bVar2 = bVar1;
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar5;
    }
    uVar14 = uVar10;
    if ((bVar2 & 0xf) == 8) {
      uVar14 = uVar12;
    }
    local_res20 = uVar14;
    iVar3 = FUN_1437bcc60(param_1);
    local_res18 = CONCAT44(local_res18._4_4_,iVar3);
    if (iVar3 == 0) {
      uVar12 = *(ulonglong *)(param_1 + 0x28);
      puVar5 = (undefined8 *)FUN_143714490(uVar12,1);
      if (puVar5 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar5;
      }
      uVar14 = uVar10;
      if ((bVar1 & 0xf) == 7) {
        uVar14 = uVar12;
      }
      if (uVar14 != 0) {
        puVar5 = (undefined8 *)
                 FUN_14377d260(*(longlong *)(param_1 + 0x10) + 0x68,0,0,
                               *(undefined8 *)(param_1 + 0x28));
        if (puVar5 == (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x28) = 0;
          return;
        }
        *(undefined8 *)(param_1 + 0x28) = *puVar5;
      }
      local_60 = *(longlong *)(param_1 + 0x28);
      local_68 = 0;
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x228);
      local_58 = uVar10;
      if (local_60 != 0) {
        local_58 = FUN_1437151a0();
      }
      if ((local_58 & 1) != 0) {
        FUN_1437329e0(local_58 & 0xfffffffffffffffe);
      }
      local_50 = 0;
      FUN_1437bf160(*(longlong *)(param_1 + 0x10) + 0x1f8,uVar4,&local_68);
      if ((local_58 & 1) != 0) {
        FUN_143733a60(local_58 & 0xfffffffffffffffe);
      }
      lVar9 = *(longlong *)(param_1 + 0x10);
      uVar6 = FUN_143703a50();
      if (*(uint *)(lVar9 + 0x290) == (*(uint *)(lVar9 + 0x294) & 0x3fffffff)) {
        FUN_14370c460(uVar6,(longlong *)(lVar9 + 0x288),4);
      }
      *(undefined4 *)(*(longlong *)(lVar9 + 0x288) + (longlong)*(int *)(lVar9 + 0x290) * 4) = 1;
      *(int *)(lVar9 + 0x290) = *(int *)(lVar9 + 0x290) + 1;
      FUN_1437bf210(param_1,uVar4);
      uVar14 = local_res20;
    }
    else {
      FUN_1437bd430(*(undefined8 *)(param_1 + 0x10),&local_res8,iVar3);
    }
    FUN_1437bcce0(param_1,&local_88);
    uVar12 = local_80;
    uVar8 = local_78;
    uVar15 = local_70;
    if ((*(int *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x28) == 0)) {
      puVar7 = (ulonglong *)FUN_143714420(uVar14,2);
      uVar12 = uVar10;
      if (puVar7 != (ulonglong *)0x0) {
        uVar12 = *puVar7;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar12;
      uVar15 = (local_70 ^ (int)local_70 >> 0x1f) - ((int)local_70 >> 0x1f);
      if ((local_78 & 1) != 0) {
        FUN_1437329e0(local_78 & 0xfffffffffffffffe);
      }
      uVar8 = uVar10;
      if (uVar12 != 0) {
        uVar8 = FUN_1437151a0(uVar12);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      local_80 = uVar12;
      if ((local_78 & 1) != 0) {
        FUN_143733a60(local_78 & 0xfffffffffffffffe);
      }
      uVar14 = uVar8;
      local_70 = uVar15;
      if ((local_78 & 1) != 0) {
        uVar14 = local_78 & 0xfffffffffffffffe;
        local_78 = uVar8;
        FUN_143733a60(uVar14);
        uVar14 = local_78;
      }
      local_78 = uVar14;
      if (*(longlong *)(param_1 + 0x28) == 0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      else {
        uVar4 = FUN_1437152f0();
        *(undefined4 *)(param_1 + 0x24) = uVar4;
      }
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar7 = (ulonglong *)FUN_143714420(local_res20,1);
      uVar14 = uVar10;
      if (puVar7 != (ulonglong *)0x0) {
        uVar14 = *puVar7;
      }
      if ((((int)(uVar14 >> 8) == 0) && (local_88 != 0)) &&
         (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x288) +
                  (longlong)(int)local_res18 * 4) != 0)) {
        local_a8 = local_88;
        local_a0 = uVar12;
        local_98 = uVar8;
        if ((local_78 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
        FUN_1437be460(*(undefined8 *)(param_1 + 0x10),&local_a8);
      }
    }
    iVar3 = FUN_1437152f0(uVar12);
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x230);
    local_res8 = CONCAT44(local_res8._4_4_,iVar3);
    lVar9 = (**(code **)(*plVar11 + 8))(plVar11,iVar3 * local_res10);
    iVar3 = local_res10;
    *(longlong *)(param_1 + 0x18) = lVar9;
    iVar13 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
    uVar14 = uVar10;
    if (iVar13 < local_res10) {
      uVar14 = (ulonglong)(uint)((local_res10 - iVar13) * (int)local_res8);
    }
    FUN_14370c720(iVar13 * (int)local_res8 + lVar9,0,uVar14);
    if (iVar13 < iVar3) {
      iVar3 = iVar13;
    }
    FUN_14370c700(*(undefined8 *)(param_1 + 0x18),local_88,iVar3 * (int)local_res8);
    lVar9 = *(longlong *)(param_1 + 0x18);
    local_68 = lVar9;
    local_60 = uVar12;
    if (uVar12 != 0) {
      uVar10 = FUN_1437151a0(uVar12);
    }
    local_58 = uVar10;
    if ((uVar10 & 1) != 0) {
      FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
    }
    local_50 = local_res10;
    *(int *)(param_1 + 0x20) = local_res10;
    *(int *)(param_1 + 0x24) = (int)local_res8;
    *(ulonglong *)(param_1 + 0x28) = uVar12;
    local_a8 = lVar9;
    local_a0 = uVar12;
    local_98 = uVar10;
    if ((uVar10 & 1) != 0) {
      FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
    }
    local_90 = local_res10;
    FUN_1437bf220(param_1,&local_a8);
    if (local_88 != 0) {
      FUN_1437bf5a0(*(undefined8 *)(param_1 + 0x10),&local_88,&local_68);
      uVar12 = local_60;
      lVar9 = local_68;
      uVar10 = local_58;
      uVar8 = local_78;
    }
    uVar14 = local_58 & 1;
    local_a8 = lVar9;
    local_a0 = uVar12;
    local_98 = uVar10;
    if ((local_58 & 1) != 0) {
      FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
    }
    FUN_1437b9cd0(*(undefined8 *)(param_1 + 0x10),&local_a8,local_res10,local_res8 & 0xffffffff,
                  0xffffffff,(int)local_res18);
    iVar3 = FUN_1437bcc60(param_1);
    lVar9 = *(longlong *)(param_1 + 0x10);
    local_res8 = (ulonglong)iVar3;
    local_res18 = *(undefined8 *)(param_1 + 0x18);
    uVar6 = FUN_143703a50();
    FUN_14372d6e0(lVar9 + 0x2a0,uVar6,&local_res18,&local_res8);
    if (uVar14 != 0) {
      FUN_143733a60(uVar10 & 0xfffffffffffffffe);
    }
    if ((local_78 & 1) != 0) {
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
    }
  }
  return;
}



// FUNCTION 1437bf070 FUN_1437bf070 body=128 status=ok
// SIG undefined FUN_1437bf070(void)

void FUN_1437bf070(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) <= param_2) {
    iVar5 = param_2 + 1;
    uVar3 = FUN_143703a50();
    uVar4 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
    if ((int)uVar4 < iVar5) {
      iVar2 = uVar4 * 2;
      iVar1 = iVar5;
      if (iVar5 < iVar2) {
        iVar1 = iVar2;
      }
      FUN_14370c310(uVar3,param_1 + 8,iVar1,8);
    }
    *(int *)(param_1 + 0x10) = iVar5;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 8) = param_3;
  return;
}



// FUNCTION 1437bf0f0 FUN_1437bf0f0 body=112 status=ok
// SIG undefined FUN_1437bf0f0(void)

void FUN_1437bf0f0(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_14;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  local_18 = 0;
  local_14 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1437b76f0(plVar1,param_2,&local_28);
  *(undefined8 *)((longlong)param_2 * 0x18 + *plVar1) = *param_3;
  *(undefined8 *)((longlong)param_2 * 0x18 + 8 + *plVar1) = param_3[1];
  return;
}



// FUNCTION 1437bf160 FUN_1437bf160 body=170 status=ok
// SIG undefined FUN_1437bf160(void)

void FUN_1437bf160(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1437b7790((longlong *)(param_1 + 0x28),param_2,&local_28);
  puVar1 = (undefined8 *)((longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x28));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
  }
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    FUN_143733a60(puVar1[2] & 0xfffffffffffffffe);
  }
  puVar1[2] = param_3[2];
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 3);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437bf210 FUN_1437bf210 body=6 status=ok
// SIG undefined FUN_1437bf210(void)

void FUN_1437bf210(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)*param_1 = param_2;
  return;
}



// FUNCTION 1437bf220 FUN_1437bf220 body=76 status=ok
// SIG undefined FUN_1437bf220(void)

void FUN_1437bf220(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_1437bcc60();
  if (-1 < iVar1) {
    FUN_1437bf160(*(longlong *)(param_1 + 0x10) + 0x1f8,iVar1,param_2);
  }
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437bf270 FUN_1437bf270 body=381 status=ok
// SIG undefined FUN_1437bf270(void)

void FUN_1437bf270(longlong param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined4 local_40;
  
  lVar7 = (longlong)param_2 * 0x20;
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x220) + lVar7);
  uVar2 = puVar6[2];
  uVar3 = puVar6[1];
  uVar4 = *puVar6;
  local_48 = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(undefined4 *)(puVar6 + 3);
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x360) == (*(uint *)(param_1 + 0x364) & 0x3fffffff)) {
    FUN_14370c460(uVar5,(longlong *)(param_1 + 0x358),0x20);
  }
  puVar6 = (undefined8 *)
           ((longlong)*(int *)(param_1 + 0x360) * 0x20 + *(longlong *)(param_1 + 0x358));
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = uVar3;
    *puVar6 = uVar4;
    puVar6[2] = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    *(undefined4 *)(puVar6 + 3) = uVar1;
  }
  *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
  if ((uVar2 & 1) != 0) {
    FUN_143733a60(uVar2 & 0xfffffffffffffffe);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  *(int *)(*(longlong *)(param_1 + 0x288) + (longlong)param_2 * 4) = -*(int *)(param_1 + 0x360);
  local_40 = 0;
  FUN_1437b7790(param_1 + 0x220,param_2,&local_58);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x220) + lVar7);
  *puVar6 = 0;
  puVar6[1] = 0;
  if ((*(byte *)(puVar6 + 2) & 1) != 0) {
    FUN_143733a60(puVar6[2] & 0xfffffffffffffffe);
  }
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437bf3f0 FUN_1437bf3f0 body=346 status=ok
// SIG undefined FUN_1437bf3f0(void)

void FUN_1437bf3f0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  lVar2 = (longlong)param_2 * 0x18;
  lVar3 = *(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x210));
  uVar4 = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x210));
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1437151a0(lVar3);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x350) == (*(uint *)(param_1 + 0x354) & 0x3fffffff)) {
    FUN_14370c460(uVar6,(longlong *)(param_1 + 0x348),0x18);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)(param_1 + 0x348) + (longlong)*(int *)(param_1 + 0x350) * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = uVar4;
    puVar1[1] = lVar3;
    puVar1[2] = uVar5;
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
  }
  *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + 1;
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(int *)(*(longlong *)(param_1 + 0x278) + (longlong)param_2 * 4) = -*(int *)(param_1 + 0x350);
  local_34 = 0;
  FUN_1437b76f0(param_1 + 0x210,param_2,&local_48);
  *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x210)) = 0;
  *(undefined8 *)(lVar2 + 8 + *(longlong *)(param_1 + 0x210)) = 0;
  return;
}



// FUNCTION 1437bf550 FUN_1437bf550 body=68 status=ok
// SIG undefined FUN_1437bf550(void)

undefined8 FUN_1437bf550(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 local_res8 [8];
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = param_1[3];
  }
  local_res8[0] = (undefined4)param_1[6];
  FUN_1437b7990(param_2,lVar1,param_1[1],param_1[2],local_res8,param_3);
  return param_2;
}



// FUNCTION 1437bf5a0 FUN_1437bf5a0 body=319 status=ok
// SIG undefined FUN_1437bf5a0(void)

void FUN_1437bf5a0(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  if ((uVar1 & 1) != 0) {
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
  }
  uVar10 = param_2[3];
  iVar5 = FUN_1437152f0(param_2[1]);
  uVar1 = param_3[2];
  lVar3 = *param_3;
  uVar8 = (int)(uint)uVar10 >> 0x1f;
  uVar10 = (longlong)(int)(iVar5 * (((uint)uVar10 ^ uVar8) - uVar8)) + uVar2;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  if ((uVar1 & 1) != 0) {
    FUN_143733a60(uVar1 & 0xfffffffffffffffe);
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar12 = 0;
    do {
      iVar9 = 0;
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar12);
      if (0 < (int)plVar6[1]) {
        lVar11 = 0;
        do {
          puVar7 = (ulonglong *)(*plVar6 + lVar11);
          uVar1 = *puVar7;
          uVar4 = puVar7[3];
          if ((uVar2 <= uVar1) && (uVar1 < uVar10)) {
            *puVar7 = (uVar1 - uVar2) + lVar3;
          }
          if ((uVar2 <= uVar4) && (uVar4 < uVar10)) {
            puVar7[3] = (uVar4 - uVar2) + lVar3;
          }
          iVar9 = iVar9 + 1;
          plVar6 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar12);
          lVar11 = lVar11 + 0x30;
        } while (iVar9 < (int)plVar6[1]);
      }
      iVar5 = iVar5 + 1;
      lVar12 = lVar12 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1437bf6e0 FUN_1437bf6e0 body=79 status=ok
// SIG undefined FUN_1437bf6e0(void)

undefined8 * FUN_1437bf6e0(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)param_3 * 0x18);
  *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_3 * 0x18);
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1437151a0();
  }
  param_2[2] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437bf730 FUN_1437bf730 body=39 status=ok
// SIG undefined FUN_1437bf730(void)

void FUN_1437bf730(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_48 [64];
  
  uVar1 = FUN_1437bac00(param_3,local_48);
  FUN_1437b8a10(*param_1,uVar1);
  return;
}



// FUNCTION 1437bf760 FUN_1437bf760 body=621 status=ok
// SIG undefined FUN_1437bf760(void)

void FUN_1437bf760(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 uVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong uStack_38;
  
  uVar6 = param_3[2];
  uVar7 = param_3[1];
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  puVar4 = (undefined8 *)FUN_143714490(uVar7,1);
  uVar9 = 0;
  bVar1 = 0;
  bVar2 = bVar1;
  if (puVar4 != (undefined8 *)0x0) {
    bVar2 = (byte)*puVar4;
  }
  uVar5 = uVar9;
  if ((bVar2 & 0xf) == 4) {
    uVar5 = uVar7;
  }
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  if (uVar5 == 0) {
    uVar6 = param_3[1];
    puVar4 = (undefined8 *)FUN_143714490(uVar6,1);
    bVar2 = bVar1;
    if (puVar4 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar4;
    }
    uVar7 = uVar9;
    if ((bVar2 & 0xf) == 2) {
      uVar7 = uVar6;
    }
    uVar6 = param_3[1];
    puVar4 = (undefined8 *)FUN_143714490(uVar6,1);
    bVar2 = bVar1;
    if (puVar4 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar4;
    }
    uVar5 = uVar9;
    if ((bVar2 & 0xf) == 4) {
      uVar5 = uVar6;
    }
    if (uVar7 == 0) {
      if (uVar5 == 0) {
        uVar11 = 0;
      }
      else {
        local_40 = 0;
        uStack_38 = 0;
        uVar6 = uStack_38;
        lVar8 = local_40;
        if (param_3[1] != 0) {
          puVar4 = (undefined8 *)FUN_143714490(param_3[1],1);
          if (puVar4 != (undefined8 *)0x0) {
            bVar1 = (byte)*puVar4;
          }
          uVar6 = uStack_38;
          lVar8 = local_40;
          if ((bVar1 & 0xf) == 4) {
            lVar8 = *param_3;
            uVar6 = param_3[1];
            if ((*(byte *)(param_3 + 2) & 1) != 0) {
              FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
            }
            uVar9 = param_3[2];
          }
        }
        local_40 = 0;
        uStack_38 = uStack_38 & 0xffffffffffffff00;
        plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
        (**(code **)(*plVar10 + 0x38))(plVar10,local_48,lVar8,uVar6,&local_40);
        uVar11 = local_40 != 0;
        if ((uVar9 & 1) != 0) {
          FUN_143733a60(plVar10);
        }
      }
    }
    else {
      local_40 = 0;
      uStack_38 = 0;
      uVar6 = uStack_38;
      lVar8 = local_40;
      if (param_3[1] != 0) {
        puVar4 = (undefined8 *)FUN_143714490(param_3[1],1);
        if (puVar4 != (undefined8 *)0x0) {
          bVar1 = (byte)*puVar4;
        }
        uVar6 = uStack_38;
        lVar8 = local_40;
        if ((bVar1 & 0xf) == 2) {
          lVar8 = *param_3;
          uVar6 = param_3[1];
          if ((*(byte *)(param_3 + 2) & 1) != 0) {
            FUN_1437329e0(param_3[2] & 0xfffffffffffffffe);
          }
          uVar9 = param_3[2];
        }
      }
      local_res18[0] = 0;
      plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
      (**(code **)(*plVar10 + 0x38))(plVar10,local_res20,lVar8,uVar6,local_res18);
      uVar11 = local_res18[0];
      if ((uVar9 & 1) != 0) {
        FUN_143733a60(plVar10);
      }
    }
    FUN_1437b9640(*param_1,uVar11);
  }
  else {
    uVar3 = FUN_1437b3cf0(param_3);
    FUN_1437b8e40(*param_1,uVar3);
  }
  return;
}



// FUNCTION 1437bf9d0 FUN_1437bf9d0 body=125 status=ok
// SIG undefined FUN_1437bf9d0(void)

void FUN_1437bf9d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined1 local_res20 [8];
  
  puVar2 = (undefined8 *)FUN_143714420(param_2,1);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = (int)*puVar2;
    if (iVar1 == 0x74605) {
      puVar3 = (undefined2 *)FUN_1437bac40(param_3,local_res20);
      FUN_1437b9370(*param_1,*puVar3);
    }
    else if ((iVar1 == 0x174605) || (iVar1 == 0x345e05)) {
      uVar4 = FUN_1437bafb0(param_3);
      FUN_1437b91e0(*param_1,uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1437bfa50 FUN_1437bfa50 body=202 status=ok
// SIG undefined FUN_1437bfa50(void)

void FUN_1437bfa50(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_143714420(param_2,1);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 0x10004)) {
    piVar3 = (int *)FUN_143714420(param_2,1);
    if ((piVar3 == (int *)0x0) || (*piVar3 != 0x10204)) {
      piVar3 = (int *)FUN_143714420(param_2,1);
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0x8004)) {
        uVar2 = FUN_1437b3ea0(param_3);
        FUN_1437b9020(*param_1,uVar2);
        return;
      }
      uVar2 = FUN_1437b3cf0(param_3);
      FUN_1437b8e40(*param_1,uVar2);
      return;
    }
  }
  uVar1 = FUN_1437b4040(param_3);
  FUN_1437b9560(*param_1,uVar1);
  return;
}



// FUNCTION 1437bfb20 FUN_1437bfb20 body=49 status=ok
// SIG undefined FUN_1437bfb20(void)

void FUN_1437bfb20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_1437bad30(param_3,local_38);
  FUN_1437b8850(*param_1,uVar1);
  FUN_1437b87d0(local_38);
  return;
}



// FUNCTION 1437bfb60 FUN_1437bfb60 body=33 status=ok
// SIG undefined FUN_1437bfb60(void)

void FUN_1437bfb60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1437bb090(param_3);
  FUN_1437b92b0(*param_1,uVar1);
  return;
}



// FUNCTION 1437bfb90 FUN_1437bfb90 body=59 status=ok
// SIG undefined FUN_1437bfb90(void)

undefined8 FUN_1437bfb90(void)

{
  longlong lVar1;
  
  if ((DAT_146b82398 != 0) && (DAT_146b834f8 != 0)) {
    lVar1 = FUN_1437bfbd0();
    if (lVar1 != 0) {
      FUN_143dfa070(lVar1);
    }
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 1437bfbd0 FUN_1437bfbd0 body=19 status=ok
// SIG undefined FUN_1437bfbd0(void)

ulonglong FUN_1437bfbd0(void)

{
  DAT_146b8b520 = 1;
  return DAT_146b8b518 & 0xfffffffffffffffc;
}



// FUNCTION 1437bfbf0 FUN_1437bfbf0 body=49 status=ok
// SIG undefined FUN_1437bfbf0(void)

undefined8 FUN_1437bfbf0(void)

{
  longlong lVar1;
  
  if (DAT_146b82398 != 0) {
    lVar1 = FUN_1437bfbd0();
    if (lVar1 != 0) {
      FUN_143dfa0c0(lVar1);
    }
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 1437bfc30 FUN_1437bfc30 body=588 status=ok
// SIG undefined FUN_1437bfc30(void)

void FUN_1437bfc30(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6d68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6d90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6db8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6de0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6e08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6e48);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6e70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6eb8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6ee0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6f08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6f30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6f58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6f80);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6fa8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6fd0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb6ff8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb7020);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb7048);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb7070);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSimpleLocalFrame_145bb70a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bb70c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4C1T10_145bb70f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4C1T12_145bb7130);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4C1T2_145bb7178);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4C1T6_145bb71b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4C1T2_145bb71f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4C1T6_145bb7238);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4C1T10_145bb7278);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4C1T4_145bb72b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4C1T8_145bb7300);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4C1T4_145bb7348);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4C1T8_145bb7388);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4C1T12_145bb73c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkUiAttribute_145bb7408);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHalf_145bb7430);
                    /* WARNING: Could not recover jumptable at 0x0001437bfe78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkUiAttribute_145bb7458);
  return;
}



// FUNCTION 1437bfe80 FUN_1437bfe80 body=652 status=ok
// SIG undefined FUN_1437bfe80(void)

void FUN_1437bfe80(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba290);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba2d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba318);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba340);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba378);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba3c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba3e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba428);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba450);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba478);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba4a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba4c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba4f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba518);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba540);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba568);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba590);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bba5b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bba5e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bba608);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCutNavMeshQueryMediator_145bba630);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bba658);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverMovementPrope_145bba680);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba6a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba6f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bba718);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bba740);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba768);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bba7a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bba7c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bba7f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bba818);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bba840);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145bba868);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba890);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba8b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bba8e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145bba920);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145bba948);
                    /* WARNING: Could not recover jumptable at 0x0001437c0108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bba970);
  return;
}



// FUNCTION 1437c0110 FUN_1437c0110 body=8612 status=ok
// SIG undefined FUN_1437c0110(void)

void FUN_1437c0110(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  undefined8 *puVar15;
  ulonglong *puVar16;
  byte bVar17;
  int iVar18;
  undefined8 uVar19;
  char *pcVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  char *pcVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined1 local_res8;
  char local_res9;
  undefined1 local_resa;
  undefined1 local_res10;
  char local_res11;
  undefined1 local_res12;
  int local_res18;
  int local_res20;
  int local_488 [2];
  longlong local_480;
  longlong local_478;
  ulonglong local_470;
  undefined1 local_468 [16];
  ulonglong local_458;
  longlong local_440;
  longlong local_438;
  ulonglong local_430;
  undefined8 local_428;
  int local_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  longlong local_400;
  int local_3f4;
  longlong local_3f0;
  int local_3e8;
  uint local_3e0;
  int local_3dc;
  int local_3d8;
  undefined4 local_3d0;
  undefined2 local_3cc;
  undefined1 local_3ca;
  char local_3c9;
  undefined1 local_3c8;
  undefined1 local_3c0 [16];
  undefined8 local_3b0;
  longlong local_3a8;
  int local_39c;
  longlong local_398;
  int local_390;
  ulonglong local_388;
  longlong local_380;
  longlong lStack_378;
  ulonglong local_370;
  undefined8 local_368;
  longlong lStack_360;
  ulonglong local_358;
  undefined1 local_350 [16];
  undefined8 local_340;
  longlong local_338;
  int local_32c;
  longlong local_328;
  int local_320;
  undefined1 local_318 [16];
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined1 local_2f8 [56];
  undefined1 local_2c0 [4];
  undefined1 local_2bc [4];
  undefined1 local_2b8 [40];
  undefined1 local_290 [40];
  undefined1 local_268 [16];
  undefined8 local_258;
  longlong local_250;
  int local_244;
  longlong local_240;
  int local_238;
  undefined1 local_230 [16];
  undefined8 local_220;
  longlong local_218;
  int local_20c;
  longlong local_208;
  int local_200;
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  longlong local_1d0;
  int local_1c4;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined1 local_1b0 [40];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [8];
  undefined1 local_150 [16];
  undefined8 local_140;
  longlong local_138;
  int local_12c;
  longlong local_128;
  int local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8 [40];
  undefined1 local_c0 [16];
  ulonglong local_b0;
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined1 local_90 [40];
  undefined1 local_68 [40];
  
  FUN_1437b7c10(&local_3d0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  uVar9 = FUN_1437bcd90(&local_3d0);
  uVar10 = FUN_1437b97f0(param_1,local_468,"vertexData");
  FUN_1437bac00(uVar10,local_2f8);
  if ((local_458 & 1) != 0) {
    FUN_143733a60(local_458 & 0xfffffffffffffffe);
  }
  FUN_1437bc830(local_2f8,local_1f8);
  FUN_1437bc0c0(uVar9,&local_168,"hkxVertexBufferVertexData");
  local_308 = local_168;
  uStack_304 = uStack_164;
  uStack_300 = uStack_160;
  uStack_2fc = uStack_15c;
  FUN_1437be120(uVar9,local_290,&local_308);
  uVar4 = FUN_1437bcb20(local_2f8);
  uVar10 = FUN_1437b97f0(local_290,local_468,"numVerts");
  FUN_1437b8e40(uVar10,uVar4);
  if ((local_458 & 1) != 0) {
    FUN_143733a60(local_458 & 0xfffffffffffffffe);
  }
  uVar10 = FUN_1437b97f0(param_1,local_468,&DAT_145b138b0);
  FUN_1437b8850(uVar10,local_290);
  if ((local_458 & 1) != 0) {
    FUN_143733a60(local_458 & 0xfffffffffffffffe);
  }
  uVar10 = FUN_1437b97f0(param_1,local_468,"vertexDesc");
  FUN_1437bad30(uVar10,local_90);
  if ((local_458 & 1) != 0) {
    FUN_143733a60(local_458 & 0xfffffffffffffffe);
  }
  uVar10 = FUN_1437b97f0(local_90,local_468,"decls");
  FUN_1437bac00(uVar10,local_1e8);
  if ((local_458 & 1) != 0) {
    FUN_143733a60(local_458 & 0xfffffffffffffffe);
  }
  FUN_1437bc0c0(uVar9,&local_178,"hkxVertexDescription");
  local_308 = local_178;
  uStack_304 = uStack_174;
  uStack_300 = uStack_170;
  uStack_2fc = uStack_16c;
  FUN_1437be120(uVar9,local_e8,&local_308);
  uVar9 = FUN_1437b97f0(param_1,local_468,&DAT_145b88210);
  FUN_1437b8850(uVar9,local_e8);
  if ((local_458 & 1) != 0) {
    FUN_143733a60(local_458 & 0xfffffffffffffffe);
  }
  uVar9 = FUN_1437b97f0(local_e8,local_468,"decls");
  FUN_1437bac00(uVar9,local_150);
  if ((local_458 & 1) != 0) {
    FUN_143733a60(local_458 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437bcb20(local_1e8);
  FUN_1437beb60(local_150,uVar4);
  iVar5 = FUN_1437bcb20(local_2f8);
  iVar18 = 0;
  local_res20 = 0;
  local_3d8 = 0;
  local_3dc = 0;
  local_res18 = iVar5;
  iVar6 = FUN_1437bcb20(local_1e8);
  if (0 < iVar6) {
    do {
      lVar22 = local_1c0;
      uVar11 = 0;
      lVar26 = local_1c4 * iVar18 + local_1d0;
      if (local_1c0 != 0) {
        uVar11 = FUN_1437151a0(local_1c0);
      }
      if ((uVar11 & 1) != 0) {
        FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
      }
      uVar4 = local_1b8;
      if ((uVar11 & 1) != 0) {
        FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
      }
      uVar9 = local_1d8;
      local_438 = lVar22;
      local_440 = lVar26;
      local_430 = uVar11;
      if ((uVar11 & 1) != 0) {
        FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
      }
      lVar22 = local_438;
      local_428 = uVar9;
      local_420 = uVar4;
      if (local_440 != 0) {
        puVar12 = (undefined8 *)FUN_143714490(local_438,1);
        bVar17 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          bVar17 = (byte)*puVar12;
        }
        lVar26 = 0;
        if ((bVar17 & 0xf) == 7) {
          lVar26 = lVar22;
        }
        if (lVar26 != 0) {
          FUN_1437b9940(&local_440);
        }
      }
      uVar13 = 0;
      if (((uVar11 & 1) != 0) && (FUN_143733a60(uVar11 & 0xfffffffffffffffe), (uVar11 & 1) != 0)) {
        FUN_143733a60(uVar11 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_440,local_1b0);
      if ((local_430 & 1) != 0) {
        FUN_143733a60(local_430 & 0xfffffffffffffffe);
      }
      lVar22 = local_128;
      lVar26 = local_12c * local_3d8 + local_138;
      if (local_128 != 0) {
        uVar13 = FUN_1437151a0(local_128);
      }
      if ((uVar13 & 1) != 0) {
        FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
      }
      iVar6 = local_120;
      if ((uVar13 & 1) != 0) {
        FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
      }
      uVar9 = local_140;
      local_438 = lVar22;
      local_440 = lVar26;
      local_430 = uVar13;
      if ((uVar13 & 1) != 0) {
        FUN_1437329e0(uVar13 & 0xfffffffffffffffe);
      }
      lVar22 = local_438;
      local_428 = uVar9;
      local_420 = iVar6;
      if (local_440 != 0) {
        puVar12 = (undefined8 *)FUN_143714490(local_438,1);
        if (puVar12 == (undefined8 *)0x0) {
          bVar17 = 0;
        }
        else {
          bVar17 = (byte)*puVar12;
        }
        lVar26 = 0;
        if ((bVar17 & 0xf) == 7) {
          lVar26 = lVar22;
        }
        if (lVar26 != 0) {
          FUN_1437b9940(&local_440);
        }
      }
      if (((uVar13 & 1) != 0) && (FUN_143733a60(uVar13 & 0xfffffffffffffffe), (uVar13 & 1) != 0)) {
        FUN_143733a60(uVar13 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_440,local_2b8);
      if ((local_430 & 1) != 0) {
        FUN_143733a60(local_430 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_1b0,&local_440,&DAT_145af4d3c);
      uVar4 = FUN_1437b3cf0(uVar9);
      uVar9 = FUN_1437b97f0(local_2b8,local_468,&DAT_145af4d3c);
      FUN_1437b8e40(uVar9,uVar4);
      if ((local_458 & 1) != 0) {
        FUN_143733a60(local_458 & 0xfffffffffffffffe);
      }
      if ((local_430 & 1) != 0) {
        FUN_143733a60(local_430 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_1b0,&local_440,"usage");
      uVar4 = FUN_1437b3cf0(uVar9);
      uVar9 = FUN_1437b97f0(local_2b8,local_468,"usage");
      FUN_1437b8e40(uVar9,uVar4);
      if ((local_458 & 1) != 0) {
        FUN_143733a60(local_458 & 0xfffffffffffffffe);
      }
      if ((local_430 & 1) != 0) {
        FUN_143733a60(local_430 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_1b0,&local_440,&DAT_145af4d3c);
      iVar6 = FUN_1437b3cf0(uVar9);
      uVar9 = FUN_1437b97f0(local_2b8,local_468,"byteStride");
      FUN_1437b8e40(uVar9,*(undefined4 *)(&DAT_145bbc960 + (longlong)iVar6 * 4));
      if ((local_458 & 1) != 0) {
        FUN_143733a60(local_458 & 0xfffffffffffffffe);
      }
      if ((local_430 & 1) != 0) {
        FUN_143733a60(local_430 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_1b0,local_468,"usage");
      iVar6 = FUN_1437b3cf0(uVar9);
      if ((local_458 & 1) != 0) {
        FUN_143733a60(local_458 & 0xfffffffffffffffe);
      }
      uVar9 = local_1f0;
      iVar7 = local_3dc;
      iVar18 = local_res20;
      switch(iVar6) {
      case 1:
      case 4:
      case 8:
      case 0x10:
        pcVar20 = (char *)0x0;
        if (iVar6 == 1) {
          pcVar24 = "position";
        }
        else if (iVar6 == 4) {
          pcVar24 = "normal";
        }
        else if (iVar6 == 0x10) {
          pcVar24 = "binormal";
        }
        else {
          pcVar24 = pcVar20;
          if (iVar6 == 8) {
            pcVar24 = "tangent";
          }
        }
        FUN_1437bf550(local_2f8,local_3c0,pcVar24);
        uVar9 = FUN_1437b97f0(local_290,local_468,"vectorData");
        FUN_1437bac00(uVar9,local_418);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        local_488[0] = FUN_1437bcb20(local_418);
        iVar6 = FUN_1437bcb20(local_418);
        uVar9 = FUN_1437b97f0(local_2b8,local_468,"byteOffset");
        FUN_1437b8e40(uVar9,iVar6 << 4);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar6 = FUN_1437bcb20(local_418);
        FUN_1437beb60(local_418,iVar6 + iVar5);
        local_3e0 = 0;
        if (0 < iVar5) {
          do {
            lVar22 = local_398;
            uVar11 = 0;
            lVar26 = local_39c * (int)pcVar20 + local_3a8;
            if (local_398 != 0) {
              uVar11 = FUN_1437151a0(local_398);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            iVar5 = local_390;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            uVar9 = local_3b0;
            local_438 = lVar22;
            local_440 = lVar26;
            local_430 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            lVar22 = local_438;
            local_428 = uVar9;
            local_420 = iVar5;
            if (local_440 != 0) {
              puVar12 = (undefined8 *)FUN_143714490(local_438,1);
              if (puVar12 == (undefined8 *)0x0) {
                bVar17 = 0;
              }
              else {
                bVar17 = (byte)*puVar12;
              }
              lVar26 = 0;
              if ((bVar17 & 0xf) == 7) {
                lVar26 = lVar22;
              }
              if (lVar26 != 0) {
                FUN_1437b9940(&local_440);
              }
            }
            if (((uVar11 & 1) != 0) &&
               (FUN_143733a60(uVar11 & 0xfffffffffffffffe), (uVar11 & 1) != 0)) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            pauVar14 = (undefined1 (*) [16])FUN_14371d5c0(local_68,local_188,&DAT_1467e5ab0);
            local_318 = *pauVar14;
            lVar22 = local_318._8_8_;
            if (lVar22 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(lVar22);
            }
            iVar5 = 0;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_358 = 0;
            local_368 = 0;
            lStack_360 = 0;
            bVar17 = 0;
            uVar13 = local_358;
            if (lVar22 != 0) {
              puVar12 = (undefined8 *)FUN_143714490(lVar22,1);
              bVar3 = bVar17;
              if (puVar12 != (undefined8 *)0x0) {
                bVar3 = (byte)*puVar12;
              }
              uVar13 = local_358;
              if ((bVar3 & 0xf) == 8) {
                local_368 = local_318._0_8_;
                lStack_360 = lVar22;
                if ((uVar11 & 1) != 0) {
                  FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
                }
                uVar13 = uVar11;
                if ((local_358 & 1) != 0) {
                  FUN_143733a60(local_358 & 0xfffffffffffffffe);
                }
              }
            }
            local_358 = uVar13;
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            local_370 = 0;
            local_380 = 0;
            lStack_378 = 0;
            if (local_438 != 0) {
              puVar12 = (undefined8 *)FUN_143714490(local_438,1);
              if (puVar12 != (undefined8 *)0x0) {
                bVar17 = (byte)*puVar12;
              }
              if ((bVar17 & 0xf) == 8) {
                local_380 = local_440;
                lStack_378 = local_438;
                if ((local_430 & 1) != 0) {
                  FUN_1437329e0(local_430 & 0xfffffffffffffffe);
                }
                if ((local_370 & 1) != 0) {
                  FUN_143733a60(local_370 & 0xfffffffffffffffe);
                }
                local_370 = local_430;
              }
            }
            do {
              uVar11 = 0;
              puVar12 = (undefined8 *)FUN_143741d50(&local_380,local_c0,iVar5);
              local_388 = 0;
              local_100 = 0;
              uStack_f8 = 0;
              bVar17 = 0;
              uVar10 = uStack_f8;
              uVar9 = local_100;
              if (puVar12[1] != 0) {
                puVar15 = (undefined8 *)FUN_143714490(puVar12[1],1);
                bVar3 = bVar17;
                if (puVar15 != (undefined8 *)0x0) {
                  bVar3 = (byte)*puVar15;
                }
                uVar10 = uStack_f8;
                uVar9 = local_100;
                if ((bVar3 & 0xf) == 5) {
                  uVar9 = *puVar12;
                  uVar10 = puVar12[1];
                  if ((*(byte *)(puVar12 + 2) & 1) != 0) {
                    FUN_1437329e0(puVar12[2] & 0xfffffffffffffffe);
                  }
                  local_388 = puVar12[2];
                }
              }
              if ((local_b0 & 1) != 0) {
                FUN_143733a60(local_b0 & 0xfffffffffffffffe);
              }
              puVar12 = (undefined8 *)FUN_143741d50(&local_368,local_a8,iVar5);
              local_118 = 0;
              uStack_110 = 0;
              uVar19 = uStack_110;
              uVar25 = local_118;
              if (puVar12[1] != 0) {
                puVar15 = (undefined8 *)FUN_143714490(puVar12[1],1);
                if (puVar15 != (undefined8 *)0x0) {
                  bVar17 = (byte)*puVar15;
                }
                uVar19 = uStack_110;
                uVar25 = local_118;
                if ((bVar17 & 0xf) == 5) {
                  uVar25 = *puVar12;
                  uVar19 = puVar12[1];
                  if ((*(byte *)(puVar12 + 2) & 1) != 0) {
                    FUN_1437329e0(puVar12[2] & 0xfffffffffffffffe);
                  }
                  uVar11 = puVar12[2];
                }
              }
              if ((local_98 & 1) != 0) {
                FUN_143733a60(local_98 & 0xfffffffffffffffe);
              }
              plVar21 = (longlong *)(local_388 & 0xfffffffffffffffe);
              auVar1._8_8_ = 0;
              auVar1._0_8_ = local_318._8_8_;
              local_318 = auVar1 << 0x40;
              (**(code **)(*plVar21 + 0x38))(plVar21,local_2c0,uVar9,uVar10,local_318);
              plVar23 = (longlong *)(uVar11 & 0xfffffffffffffffe);
              (**(code **)(*plVar23 + 0x30))(plVar23,local_2bc,uVar25,uVar19,local_318._0_8_);
              if ((uVar11 & 1) != 0) {
                FUN_143733a60(plVar23);
              }
              if ((local_388 & 1) != 0) {
                FUN_143733a60(plVar21);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 4);
            if ((local_370 & 1) != 0) {
              FUN_143733a60(local_370 & 0xfffffffffffffffe);
            }
            if ((local_358 & 1) != 0) {
              FUN_143733a60(local_358 & 0xfffffffffffffffe);
            }
            uVar2 = local_3e0;
            lVar22 = local_3f0;
            lVar26 = (int)((local_488[0] + local_3e0) * local_3f4) + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_3e0 = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437c29e0(local_468,local_188,4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            local_3e0 = uVar2 + 1;
            pcVar20 = (char *)(ulonglong)local_3e0;
            iVar5 = local_res18;
          } while ((int)local_3e0 < local_res18);
        }
        break;
      case 2:
        local_3d0 = 0x66666964;
        local_3cc = 0x7375;
        local_3ca = 0x65;
        local_3c9 = (char)local_3dc + 'A';
        local_3c8 = 0;
        if (local_res20 == 0) {
          puVar12 = (undefined8 *)FUN_143714490(local_1f0,1);
          if (puVar12 == (undefined8 *)0x0) {
            bVar17 = 0;
          }
          else {
            bVar17 = (byte)*puVar12;
          }
          uVar10 = 0;
          if ((bVar17 & 0xf) == 7) {
            uVar10 = uVar9;
          }
          puVar16 = (ulonglong *)FUN_143714b80(uVar10,local_158,&local_3d0,0);
          if (*puVar16 < 2) {
            local_3c9 = '\0';
          }
        }
        iVar5 = 0;
        FUN_1437bf550(local_2f8,local_3c0,&local_3d0);
        uVar9 = FUN_1437b97f0(local_290,local_468,"uint32Data");
        FUN_1437bac00(uVar9,local_418);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar6 = FUN_1437bcb20(local_418);
        iVar18 = FUN_1437bcb20(local_418);
        uVar9 = FUN_1437b97f0(local_2b8,local_468,"byteOffset");
        FUN_1437b8e40(uVar9,iVar18 << 2);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar8 = FUN_1437bcb20(local_418);
        iVar18 = local_res18;
        FUN_1437beb60(local_418,local_res18 + iVar8);
        if (0 < iVar18) {
          do {
            lVar22 = local_398;
            uVar11 = 0;
            lVar26 = local_39c * iVar5 + local_3a8;
            if (local_398 != 0) {
              uVar11 = FUN_1437151a0(local_398);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_390;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_3b0,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = (iVar5 + iVar6) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b9020(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            iVar5 = iVar5 + 1;
            iVar7 = local_3dc;
          } while (iVar5 < local_res18);
        }
        local_3dc = iVar7 + 1;
        iVar5 = local_res18;
        break;
      default:
        break;
      case 0x20:
        local_res8 = 0x75;
        local_resa = 0;
        local_res10 = 0x76;
        local_res9 = (char)local_res20 + '0';
        local_res12 = 0;
        local_res11 = local_res9;
        if (local_res20 == 0) {
          puVar12 = (undefined8 *)FUN_143714490(local_1f0,1);
          if (puVar12 == (undefined8 *)0x0) {
            bVar17 = 0;
          }
          else {
            bVar17 = (byte)*puVar12;
          }
          uVar10 = 0;
          if ((bVar17 & 0xf) == 7) {
            uVar10 = uVar9;
          }
          puVar16 = (ulonglong *)FUN_143714b80(uVar10,&local_308,&local_res8,0);
          if (*puVar16 < 2) {
            local_res9 = '\0';
            local_res11 = '\0';
          }
        }
        iVar6 = 0;
        FUN_1437bf550(local_2f8,local_3c0,&local_res8);
        FUN_1437bf550(local_2f8,local_350,&local_res10);
        uVar9 = FUN_1437b97f0(local_290,local_468,"floatData");
        FUN_1437bac00(uVar9,local_418);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar7 = FUN_1437bcb20(local_418);
        iVar5 = FUN_1437bcb20(local_418);
        uVar9 = FUN_1437b97f0(local_2b8,local_468,"byteOffset");
        FUN_1437b8e40(uVar9,iVar5 << 2);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar8 = FUN_1437bcb20(local_418);
        iVar5 = local_res18;
        FUN_1437beb60(local_418,iVar8 + local_res18 * 4);
        if (0 < iVar5) {
          do {
            lVar22 = local_398;
            uVar11 = 0;
            lVar26 = local_39c * iVar6 + local_3a8;
            if (local_398 != 0) {
              uVar11 = FUN_1437151a0(local_398);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_390;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_3b0,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            lVar22 = local_3f0;
            lVar26 = local_3f4 * iVar7 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437bafb0(&local_440);
            FUN_1437b91e0(local_468);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            lVar22 = local_328;
            lVar26 = local_32c * iVar6 + local_338;
            if (local_328 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_328);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_320;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_340,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            lVar22 = local_3f0;
            lVar26 = (iVar7 + 1) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437bafb0(&local_440);
            FUN_1437b91e0(local_468);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 2;
            iVar18 = local_res20;
          } while (iVar6 < iVar5);
        }
        local_res20 = iVar18 + 1;
        break;
      case 0x40:
        FUN_1437bf550(local_2f8,local_350,&DAT_145bbc9b8);
        FUN_1437bf550(local_2f8,local_3c0,&DAT_145bbc9bc);
        FUN_1437bf550(local_2f8,local_230,&DAT_145bbc9c0);
        FUN_1437bf550(local_2f8,local_268,&DAT_145bbc9c4);
        uVar9 = FUN_1437b97f0(local_290,local_468,"uint8Data");
        FUN_1437bac00(uVar9,local_418);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar6 = FUN_1437bcb20(local_418);
        uVar4 = FUN_1437bcb20(local_418);
        uVar9 = FUN_1437b97f0(local_2b8,local_468,"byteOffset");
        FUN_1437b8e40(uVar9,uVar4);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar18 = FUN_1437bcb20(local_418);
        FUN_1437beb60(local_418,iVar18 + iVar5 * 4);
        iVar18 = 0;
        if (0 < iVar5) {
          iVar6 = iVar6 + 2;
          do {
            lVar22 = local_328;
            uVar11 = 0;
            lVar26 = local_32c * iVar18 + local_338;
            if (local_328 != 0) {
              uVar11 = FUN_1437151a0(local_328);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_320;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_340,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = (iVar6 + -2) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            lVar22 = local_398;
            lVar26 = local_39c * iVar18 + local_3a8;
            if (local_398 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_398);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_390;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_3b0,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = (iVar6 + -1) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            lVar22 = local_208;
            lVar26 = local_20c * iVar18 + local_218;
            if (local_208 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_208);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_200;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_220,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = local_3f4 * iVar6 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            lVar22 = local_240;
            lVar26 = local_244 * iVar18 + local_250;
            if (local_240 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_240);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_238;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_258,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = (iVar6 + 1) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            iVar18 = iVar18 + 1;
            iVar6 = iVar6 + 4;
            iVar5 = local_res18;
          } while (iVar18 < local_res18);
        }
        break;
      case 0x80:
        FUN_1437bf550(local_2f8,local_268,&DAT_145bbc9c8);
        FUN_1437bf550(local_2f8,local_230,&DAT_145bbc9cc);
        FUN_1437bf550(local_2f8,local_350,&DAT_145bbc9d0);
        FUN_1437bf550(local_2f8,local_3c0,&DAT_145bbc9d4);
        uVar9 = FUN_1437b97f0(local_290,local_468,"uint8Data");
        FUN_1437bac00(uVar9,local_418);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar6 = FUN_1437bcb20(local_418);
        uVar4 = FUN_1437bcb20(local_418);
        uVar9 = FUN_1437b97f0(local_2b8,local_468,"byteOffset");
        FUN_1437b8e40(uVar9,uVar4);
        if ((local_458 & 1) != 0) {
          FUN_143733a60(local_458 & 0xfffffffffffffffe);
        }
        iVar18 = FUN_1437bcb20(local_418);
        FUN_1437beb60(local_418,iVar18 + iVar5 * 4);
        iVar18 = 0;
        if (0 < iVar5) {
          iVar6 = iVar6 + 2;
          do {
            lVar22 = local_240;
            uVar11 = 0;
            lVar26 = local_244 * iVar18 + local_250;
            if (local_240 != 0) {
              uVar11 = FUN_1437151a0(local_240);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_238;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_258,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = (iVar6 + -2) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            lVar22 = local_208;
            lVar26 = local_20c * iVar18 + local_218;
            if (local_208 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_208);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_200;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_220,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = (iVar6 + -1) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            lVar22 = local_328;
            lVar26 = local_32c * iVar18 + local_338;
            if (local_328 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_328);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_320;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_340,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = local_3f4 * iVar6 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            lVar22 = local_398;
            lVar26 = local_39c * iVar18 + local_3a8;
            if (local_398 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_398);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_390;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(&local_440,&local_480,local_3b0,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            uVar4 = FUN_1437b3cf0(&local_440);
            lVar22 = local_3f0;
            lVar26 = (iVar6 + 1) * local_3f4 + local_400;
            if (local_3f0 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_1437151a0(local_3f0);
            }
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            local_488[0] = local_3e8;
            local_478 = lVar22;
            local_480 = lVar26;
            local_470 = uVar11;
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b7f80(local_468,&local_480,local_408,local_488);
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            FUN_1437b8e40(local_468,uVar4);
            if ((local_458 & 1) != 0) {
              FUN_143733a60(local_458 & 0xfffffffffffffffe);
            }
            if ((local_430 & 1) != 0) {
              FUN_143733a60(local_430 & 0xfffffffffffffffe);
            }
            iVar18 = iVar18 + 1;
            iVar6 = iVar6 + 4;
            iVar5 = local_res18;
          } while (iVar18 < local_res18);
        }
      }
      FUN_1437b87d0(local_2b8);
      FUN_1437b87d0(local_1b0);
      iVar18 = local_3d8 + 1;
      local_3d8 = iVar18;
      iVar6 = FUN_1437bcb20(local_1e8);
    } while (iVar18 < iVar6);
  }
  FUN_1437b87d0(local_e8);
  FUN_1437b87d0(local_90);
  FUN_1437b87d0(local_290);
  return;
}



// FUNCTION 1437c2350 FUN_1437c2350 body=812 status=ok
// SIG undefined FUN_1437c2350(void)

void FUN_1437c2350(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  uVar4 = FUN_1437b97f0(param_1,&local_118,"old_bones");
  FUN_1437bac00(uVar4,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"bones");
  FUN_1437bac00(uVar4,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,uVar2);
  iVar8 = 0;
  iVar3 = FUN_1437bcb20(local_c8);
  if (0 < iVar3) {
    do {
      lVar1 = local_a0;
      lVar9 = local_a4 * iVar8 + local_b0;
      if (local_a0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_a0);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_98;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_b8;
      local_110 = lVar1;
      local_118 = lVar9;
      local_108 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_110;
      local_100 = uVar4;
      local_f8 = uVar2;
      if (local_118 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_110,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_118);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_68;
      lVar9 = local_6c * iVar8 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_e8 = lVar1;
      local_f0 = lVar9;
      local_e0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_e8;
      local_d8 = uVar4;
      local_d0 = uVar2;
      if (local_f0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_e8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_1437bad30(&local_118,local_58);
      FUN_1437b8850(&local_f0,uVar4);
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_58);
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
      iVar3 = FUN_1437bcb20(local_c8);
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c2680 FUN_1437c2680 body=857 status=ok
// SIG undefined FUN_1437c2680(void)

void FUN_1437c2680(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong local_d0;
  int local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong local_98;
  int local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  undefined1 local_50 [40];
  
  uVar4 = FUN_1437b97f0(param_1,&local_138,"old_strings");
  FUN_1437bac00(uVar4,local_e8);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_138,"strings");
  FUN_1437bac00(uVar4,local_b0);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437bcb20(local_e8);
  FUN_1437beb60(local_b0,uVar2);
  iVar8 = 0;
  iVar3 = FUN_1437bcb20(local_e8);
  if (0 < iVar3) {
    do {
      lVar1 = local_c0;
      lVar9 = local_c4 * iVar8 + local_d0;
      if (local_c0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_c0);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_b8;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_d8;
      local_130 = lVar1;
      local_138 = lVar9;
      local_128 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_130;
      local_120 = uVar4;
      local_118 = uVar2;
      if (local_138 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_130,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_138);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_88;
      lVar9 = local_8c * iVar8 + local_98;
      if (local_88 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_88);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_80;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_a0;
      local_108 = lVar1;
      local_110 = lVar9;
      local_100 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_108;
      local_f8 = uVar4;
      local_f0 = uVar2;
      if (local_110 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_108,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_110);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_1437bad30(&local_138,local_50);
      uVar4 = FUN_1437b97f0(uVar4,local_78,"string");
      uVar4 = FUN_1437bb090(uVar4);
      FUN_1437b92b0(&local_110,uVar4);
      if ((local_100 & 1) != 0) {
        FUN_143733a60(local_100 & 0xfffffffffffffffe);
      }
      if ((local_68 & 1) != 0) {
        FUN_143733a60(local_68 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_50);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
      iVar3 = FUN_1437bcb20(local_e8);
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c29e0 FUN_1437c29e0 body=475 status=ok
// SIG undefined FUN_1437c29e0(void)

void FUN_1437c29e0(undefined8 *param_1,float *param_2,int param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_res18 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  if (param_1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 8) {
      local_78 = *param_1;
      uStack_70 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      if ((local_68 & 1) != 0) {
        FUN_143733a60(local_68 & 0xfffffffffffffffe);
      }
      local_68 = param_1[2];
    }
  }
  iVar6 = 0;
  if (0 < param_3) {
    do {
      puVar2 = (undefined8 *)FUN_143741d50(&local_78,local_48,iVar6);
      uVar8 = 0;
      local_60 = 0;
      uStack_58 = 0;
      uVar4 = uStack_58;
      uVar5 = local_60;
      if (puVar2[1] != 0) {
        puVar3 = (undefined8 *)FUN_143714490(puVar2[1],1);
        bVar1 = 0;
        if (puVar3 != (undefined8 *)0x0) {
          bVar1 = (byte)*puVar3;
        }
        uVar4 = uStack_58;
        uVar5 = local_60;
        if ((bVar1 & 0xf) == 5) {
          uVar5 = *puVar2;
          uVar4 = puVar2[1];
          if ((*(byte *)(puVar2 + 2) & 1) != 0) {
            FUN_1437329e0(puVar2[2] & 0xfffffffffffffffe);
          }
          uVar8 = puVar2[2];
        }
      }
      if ((local_38 & 1) != 0) {
        FUN_143733a60(local_38 & 0xfffffffffffffffe);
      }
      plVar7 = (longlong *)(uVar8 & 0xfffffffffffffffe);
      (**(code **)(*plVar7 + 0x30))(plVar7,local_res18,uVar5,uVar4,(double)*param_2);
      if ((uVar8 & 1) != 0) {
        FUN_143733a60(plVar7);
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 1;
    } while (iVar6 < param_3);
  }
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c2bc0 FUN_1437c2bc0 body=1100 status=ok
// SIG undefined FUN_1437c2bc0(void)

void FUN_1437c2bc0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeleton_145bbf608);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeleton_145bbf630);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bbf658);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bbf680);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bbf6a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexDescriptionElementDecl_145bbf6d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexBuffer_145bbf6f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexDescription_145bbf720);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bbf748);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bbf770);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4C1T10_145bbf798);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4_145bbf7c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4C1T12_145bbf7f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4C1T2_145bbf820);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4C1T6_145bbf848);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4C1T2_145bbf870);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4C1T6_145bbf898);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4Q4_145bbf8c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4T6_145bbf900);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4C1T10_145bbf940);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4C1Q2_145bbf968);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4C1T4_145bbf9b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4W4I4C1T8_145bbf9d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4C1Q2_145bbfa00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4C1T4_145bbfa40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4C1T8_145bbfa68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4T4B4T4_145bbfa90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4C1T12_145bbfad0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSparselyAnimatedString_145bbfaf8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSparselyAnimatedStringStringT_145bbfb20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4T2_145bbfb48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexP4N4W4I4T6_145bbfb88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxTextureInplace_145bbfbc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxIndexBuffer_145bbfbf0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexIntDataChannel_145bbfc18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterialEffect_145bbfc40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMeshSection_145bbfc68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxEdgeSelectionChannel_145bbfc90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxScene_145bbfcb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSparselyAnimatedString_145bbfce0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSparselyAnimatedBool_145bbfd08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSparselyAnimatedInt_145bbfd30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMesh_145bbfd58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAnimatedFloat_145bbfd80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxTriangleSelectionChannel_145bbfda8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSparselyAnimatedEnum_145bbfdd0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterialShaderSet_145bbfdf8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexSelectionChannel_145bbfe20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAnimatedQuaternion_145bbfe48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexFloatDataChannel_145bbfe70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxTextureFile_145bbfe98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxLight_145bbfec0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAnimatedMatrix_145bbfee8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAttributeHolder_145bbff10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkAlignSceneToNodeOptions_145bbff38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterialShader_145bbff60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSkinBinding_145bbff88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxCamera_145bbffb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexVectorDataChannel_145bbffd8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAnimatedVector_145bc0000);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryResourceHandleExternalLi_145bc0028);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryResourceHandle_145bc0050);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryResourceContainer_145bc0078);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMeshSectionCinfo_145bc00a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMeshSection_145bc00c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxEnvironment_145bc00f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryResourceHandle_145bc0118);
                    /* WARNING: Could not recover jumptable at 0x0001437c3008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkAlignSceneToNodeOptions_145bc0140);
  return;
}



// FUNCTION 1437c3010 FUN_1437c3010 body=390 status=ok
// SIG undefined FUN_1437c3010(void)

void FUN_1437c3010(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  undefined1 local_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  FUN_1437b7c10(local_90,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_1437bcd90(local_90);
  FUN_1437bc0c0(uVar1,&local_78,"hkaiDefaultLocalSteering");
  local_68 = local_78;
  uStack_64 = uStack_74;
  uStack_60 = uStack_70;
  uStack_5c = uStack_6c;
  FUN_1437be120(uVar1,local_58,&local_68);
  uVar1 = FUN_1437b97f0(param_1,local_b8,"pathFollowingProperties");
  uVar2 = FUN_1437b97f0(local_58,local_30,"pathFollowingProperties");
  FUN_1437b87f0(uVar2,uVar1);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_30,"avoidanceProperties");
  uVar2 = FUN_1437b97f0(local_58,local_b8,"avoidanceProperties");
  FUN_1437b87f0(uVar2,uVar1);
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_b8,"localSteering");
  FUN_1437b8850(uVar1,local_58);
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437c31a0 FUN_1437c31a0 body=1489 status=ok
// SIG undefined FUN_1437c31a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437c31a0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  undefined8 *puVar10;
  byte bVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_188 [16];
  ulonglong local_178;
  undefined1 local_168 [16];
  longlong local_158;
  longlong lStack_150;
  ulonglong local_148;
  undefined8 local_140;
  longlong lStack_138;
  ulonglong local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong local_110;
  int local_104;
  longlong local_100;
  undefined4 local_f8;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8 [40];
  undefined1 local_80 [72];
  
  uVar6 = FUN_1437b97f0(param_1,&local_1b8,&DAT_145bc1590);
  FUN_1437bad30(uVar6,local_a8);
  if ((local_1a8 & 1) != 0) {
    FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
  }
  uVar6 = FUN_1437b97f0(param_1,&local_1b8,"vertices");
  FUN_1437bac00(uVar6,local_128);
  if ((local_1a8 & 1) != 0) {
    FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
  }
  auVar19 = _DAT_145bc4250;
  auVar18 = _DAT_145a0f650;
  local_188 = _DAT_145a0f650;
  local_168 = _DAT_145bc4250;
  local_res10 = 0;
  iVar5 = FUN_1437bcb20(local_128);
  auVar3 = local_188;
  auVar4 = local_168;
  if (0 < iVar5) {
    do {
      lVar1 = local_100;
      lVar16 = local_104 * local_res10 + local_110;
      if (local_100 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1437151a0(local_100);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar2 = local_f8;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar6 = local_118;
      local_1b0 = lVar1;
      local_1b8 = lVar16;
      local_1a8 = uVar7;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      lVar1 = local_1b0;
      local_1a0 = uVar6;
      local_198 = uVar2;
      if (local_1b8 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(local_1b0,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar8;
        }
        lVar16 = 0;
        if ((bVar11 & 0xf) == 7) {
          lVar16 = lVar1;
        }
        if (lVar16 != 0) {
          FUN_1437b9940(&local_1b8);
        }
      }
      if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      pauVar9 = (undefined1 (*) [16])FUN_14371d5c0(local_80,local_e8,&DAT_1467e5ab0);
      lVar1 = *(longlong *)(*pauVar9 + 8);
      local_188 = *pauVar9;
      if (lVar1 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1437151a0(lVar1);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      local_130 = 0;
      local_140 = 0;
      lStack_138 = 0;
      uVar15 = local_130;
      if (lVar1 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(lVar1,1);
        bVar11 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          bVar11 = (byte)*puVar8;
        }
        uVar15 = local_130;
        if ((bVar11 & 0xf) == 8) {
          local_140 = local_188._0_8_;
          lStack_138 = lVar1;
          if ((uVar7 & 1) != 0) {
            FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
          }
          uVar15 = uVar7;
          if ((local_130 & 1) != 0) {
            FUN_143733a60(local_130 & 0xfffffffffffffffe);
          }
        }
      }
      local_130 = uVar15;
      if ((uVar7 & 1) != 0) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      local_148 = 0;
      local_158 = 0;
      lStack_150 = 0;
      if (local_1b0 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(local_1b0,1);
        bVar11 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          bVar11 = (byte)*puVar8;
        }
        if ((bVar11 & 0xf) == 8) {
          local_158 = local_1b8;
          lStack_150 = local_1b0;
          if ((local_1a8 & 1) != 0) {
            FUN_1437329e0(local_1a8 & 0xfffffffffffffffe);
          }
          if ((local_148 & 1) != 0) {
            FUN_143733a60(local_148 & 0xfffffffffffffffe);
          }
          local_148 = local_1a8;
        }
      }
      iVar5 = 0;
      do {
        puVar8 = (undefined8 *)FUN_143741d50(&local_158,local_188,iVar5);
        uVar7 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        if (puVar8[1] == 0) {
LAB_1437c3515:
          local_168._0_8_ = local_d8;
          uVar6 = uStack_d0;
        }
        else {
          puVar10 = (undefined8 *)FUN_143714490(puVar8[1],1);
          bVar11 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            bVar11 = (byte)*puVar10;
          }
          if ((bVar11 & 0xf) != 5) goto LAB_1437c3515;
          uVar6 = puVar8[1];
          local_168._0_8_ = *puVar8;
          if ((*(byte *)(puVar8 + 2) & 1) != 0) {
            FUN_1437329e0(puVar8[2] & 0xfffffffffffffffe);
          }
          uVar7 = puVar8[2];
        }
        if ((local_178 & 1) != 0) {
          FUN_143733a60(local_178 & 0xfffffffffffffffe);
        }
        puVar8 = (undefined8 *)FUN_143741d50(&local_140,local_188,iVar5);
        uVar15 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        uVar12 = uStack_b8;
        uVar17 = local_c0;
        if (puVar8[1] != 0) {
          puVar10 = (undefined8 *)FUN_143714490(puVar8[1],1);
          bVar11 = 0;
          if (puVar10 != (undefined8 *)0x0) {
            bVar11 = (byte)*puVar10;
          }
          uVar12 = uStack_b8;
          uVar17 = local_c0;
          if ((bVar11 & 0xf) == 5) {
            uVar17 = *puVar8;
            uVar12 = puVar8[1];
            if ((*(byte *)(puVar8 + 2) & 1) != 0) {
              FUN_1437329e0(puVar8[2] & 0xfffffffffffffffe);
            }
            uVar15 = puVar8[2];
          }
        }
        if ((local_178 & 1) != 0) {
          FUN_143733a60(local_178 & 0xfffffffffffffffe);
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_188._8_8_;
        local_188 = auVar3 << 0x40;
        plVar13 = (longlong *)(uVar7 & 0xfffffffffffffffe);
        (**(code **)(*plVar13 + 0x38))(plVar13,local_res18,local_168._0_8_,uVar6,local_188);
        plVar14 = (longlong *)(uVar15 & 0xfffffffffffffffe);
        (**(code **)(*plVar14 + 0x30))(plVar14,local_res20,uVar17,uVar12,local_188._0_8_);
        if ((uVar15 & 1) != 0) {
          FUN_143733a60(plVar14);
        }
        if ((uVar7 & 1) != 0) {
          FUN_143733a60(plVar13);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      if ((local_130 & 1) != 0) {
        FUN_143733a60(local_130 & 0xfffffffffffffffe);
      }
      if ((local_1a8 & 1) != 0) {
        FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
      }
      auVar18 = minps(auVar18,local_e8);
      local_res10 = local_res10 + 1;
      auVar19 = maxps(auVar19,local_e8);
      iVar5 = FUN_1437bcb20(local_128);
      auVar3 = auVar18;
      auVar4 = auVar19;
    } while (local_res10 < iVar5);
  }
  local_168 = auVar4;
  local_188 = auVar3;
  uVar6 = FUN_1437b97f0(local_a8,&local_1b8,&DAT_145b09b50);
  FUN_1437c29e0(uVar6,local_188,4);
  if ((local_1a8 & 1) != 0) {
    FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
  }
  uVar6 = FUN_1437b97f0(local_a8,&local_1b8,&DAT_145b09b4c);
  FUN_1437c29e0(uVar6,local_168,4);
  if ((local_1a8 & 1) != 0) {
    FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_a8);
  return;
}



// FUNCTION 1437c3780 FUN_1437c3780 body=1116 status=ok
// SIG undefined FUN_1437c3780(void)

void FUN_1437c3780(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3720);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3748);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathFollowingProperties_145bc3770);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3798);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bc37c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bc37e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshFace_145bc3810);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bc3838);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiTriangleMesh_145bc3860);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiTriangleMeshTriangle_145bc3888);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc38b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc38d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3900);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3928);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3950);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145bc3978);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldPendingGoal_145bc39a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshUserEdge_145bc39c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bc39f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145bc3a18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3a40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3a68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bc3a90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bc3ab8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bc3ae0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145bc3b08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bc3b30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCompoundSilhouette_145bc3b58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bc3b80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bc3ba8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3bd0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3bf8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3c20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3c48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterDebugSnapshot_145bc3c70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bc3c98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bc3cc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3ce8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bc3d10);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3d38);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3d78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bc3da0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bc3dc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterOriginalEdgeInf_145bc3df0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldDynamicNavMeshInfo_145bc3e18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3e40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bc3e68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingMediator_145bc3e90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshManager_145bc3eb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCutNavMeshQueryMediator_145bc3ee0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCutNavMeshQueryMediator_145bc3f08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDynamicNavMeshQueryMediator_145bc3f50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidancePairProperties_145bc3f78);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3fa0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bc3fc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc3ff0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_145bc4018);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshManagerSectionInfo_145bc4040);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingDirectedGraph_145bc4068);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingDirectedGraphExtern_145bc4090);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshManager_145bc40b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bc40e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc4108);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bc4158);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bc4180);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bc41a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldDynamicNavMeshInfo_145bc41d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshManager_145bc41f8);
                    /* WARNING: Could not recover jumptable at 0x0001437c3bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCompoundSilhouette_145bc4220);
  return;
}



// FUNCTION 1437c3be0 FUN_1437c3be0 body=870 status=ok
// SIG undefined FUN_1437c3be0(void)

void FUN_1437c3be0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0 [16];
  ulonglong local_e0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar5 = FUN_1437b97f0(param_1,local_f0,"mapping");
  FUN_1437bac00(uVar5,local_c8);
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_1437b97f0(param_1,local_f0,"nodeNames");
  FUN_1437bac00(uVar5,local_90);
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,iVar3);
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_a0;
      lVar10 = local_a4 * iVar9 + local_b0;
      if (local_a0 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1437151a0(local_a0);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = local_98;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar5 = local_b8;
      local_110 = lVar1;
      local_118 = lVar10;
      local_108 = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      lVar1 = local_110;
      local_100 = uVar5;
      local_f8 = uVar2;
      if (local_118 != 0) {
        puVar7 = (undefined8 *)FUN_143714490(local_110,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = (byte)*puVar7;
        }
        lVar10 = 0;
        if ((bVar8 & 0xf) == 7) {
          lVar10 = lVar1;
        }
        if (lVar10 != 0) {
          FUN_1437b9940(&local_118);
        }
      }
      if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_118,local_f0);
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      iVar4 = FUN_1437bd3c0(local_f0);
      lVar1 = local_68;
      if (iVar4 == 0) {
        lVar10 = local_6c * iVar9 + local_78;
        if (local_68 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_1437151a0(local_68);
        }
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
        uVar2 = local_60;
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
        uVar5 = local_80;
        local_110 = lVar1;
        local_118 = lVar10;
        local_108 = uVar6;
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
        lVar1 = local_110;
        local_100 = uVar5;
        local_f8 = uVar2;
        if (local_118 != 0) {
          puVar7 = (undefined8 *)FUN_143714490(local_110,1);
          if (puVar7 == (undefined8 *)0x0) {
            bVar8 = 0;
          }
          else {
            bVar8 = (byte)*puVar7;
          }
          lVar10 = 0;
          if ((bVar8 & 0xf) == 7) {
            lVar10 = lVar1;
          }
          if (lVar10 != 0) {
            FUN_1437b9940(&local_118);
          }
        }
        if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
          FUN_143733a60(uVar6 & 0xfffffffffffffffe);
        }
        uVar5 = FUN_1437b97f0(local_f0,local_58,&DAT_145af95b0);
        uVar5 = FUN_1437bb090(uVar5);
        FUN_1437b92b0(&local_118,uVar5);
        if ((local_108 & 1) != 0) {
          FUN_143733a60(local_108 & 0xfffffffffffffffe);
        }
        if ((local_48 & 1) != 0) {
          FUN_143733a60(local_48 & 0xfffffffffffffffe);
        }
      }
      FUN_1437b87d0(local_f0);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  return;
}



// FUNCTION 1437c3f50 FUN_1437c3f50 body=44 status=ok
// SIG undefined FUN_1437c3f50(void)

void FUN_1437c3f50(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxNode_145bc4340);
                    /* WARNING: Could not recover jumptable at 0x0001437c3f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSkinBinding_145bc4368);
  return;
}



// FUNCTION 1437c3f80 FUN_1437c3f80 body=122 status=ok
// SIG undefined FUN_1437c3f80(void)

void FUN_1437c3f80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = FUN_1437b97f0(param_1,local_30,"old_flags");
  uVar2 = FUN_1437b3cf0(uVar1);
  uVar1 = FUN_1437b97f0(param_1,local_58,"flags");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c4000 FUN_1437c4000 body=620 status=ok
// SIG undefined FUN_1437c4000(void)

void FUN_1437c4000(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc71e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7210);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7238);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7260);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7288);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsEdgeMa_145bc72d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCostEdg_145bc72f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsSettin_145bc7320);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsSettin_145bc7348);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145bc7370);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7398);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bc73c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsSettin_145bc73e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7410);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7438);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7460);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7488);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bc74b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSnapshot_145bc74d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsEdgeMa_145bc7500);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsSettin_145bc7528);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsMateri_145bc7550);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc7578);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bc75a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bc75c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bc75f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bc7618);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bc7640);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshUserEdge_145bc7668);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultLocalSteeringPathFoll_145bc7690);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bc76b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc76e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCarver_145bc7708);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bc7730);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsLoc_145bc7758);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bc7780);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterCutOptions_145bc77a8);
                    /* WARNING: Could not recover jumptable at 0x0001437c4268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bc77d0);
  return;
}



// FUNCTION 1437c4270 FUN_1437c4270 body=507 status=ok
// SIG undefined FUN_1437c4270(void)

void FUN_1437c4270(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  int local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [64];
  
  uVar4 = FUN_1437b97f0(param_1,&local_c8,"floatSlots");
  uVar4 = FUN_1437bac00(uVar4,local_68);
  uVar2 = FUN_1437bcb20(uVar4);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_c8,"referenceFloats");
  FUN_1437bac00(uVar4,local_a0);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  FUN_1437beb60(local_a0,uVar2);
  iVar8 = 0;
  iVar3 = FUN_1437bcb20(local_a0);
  if (0 < iVar3) {
    do {
      lVar1 = local_78;
      lVar9 = local_7c * iVar8 + local_88;
      if (local_78 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_78);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_70;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_90;
      local_c0 = lVar1;
      local_c8 = lVar9;
      local_b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_c0;
      local_b0 = uVar4;
      local_a8 = uVar2;
      if (local_c8 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_c0,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_c8);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_c8,0);
      if ((local_b8 & 1) != 0) {
        FUN_143733a60(local_b8 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
      iVar3 = FUN_1437bcb20(local_a0);
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c4470 FUN_1437c4470 body=380 status=ok
// SIG undefined FUN_1437c4470(void)

void FUN_1437c4470(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeleton_145bc8e90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8eb8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8ee0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8f08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8f30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8f58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8f80);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8fa8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8fd0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc8ff8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc9020);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc9048);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc9070);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc9098);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc90c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkIndexedTransformSet_145bc90e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshTexture_145bc9110);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkPackfileHeader_145bc9138);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshTexture_145bc9178);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc91a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterial_145bc91c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bc91f0);
                    /* WARNING: Could not recover jumptable at 0x0001437c45e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshVertexBuffer_145bc9220);
  return;
}



// FUNCTION 1437c45f0 FUN_1437c45f0 body=168 status=ok
// SIG undefined FUN_1437c45f0(void)

void FUN_1437c45f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"numPathRequestsPerJob");
  FUN_1437b8e40(uVar1,0x10);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"numBehaviorUpdatesPerJob");
  FUN_1437b8e40(uVar1,0x10);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"numCharactersPerAvoidanceJob");
  FUN_1437b8e40(uVar1,0x10);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c46a0 FUN_1437c46a0 body=58 status=ok
// SIG undefined FUN_1437c46a0(void)

void FUN_1437c46a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"padding");
  FUN_1437b8e40(uVar1,0xcdcd);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c46e0 FUN_1437c46e0 body=116 status=ok
// SIG undefined FUN_1437c46e0(void)

void FUN_1437c46e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"maxPathSearchEdgesOut");
  FUN_1437b8e40(uVar1,0x40);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"maxPathSearchSegmentsOut");
  FUN_1437b8e40(uVar1,0x20);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c4760 FUN_1437c4760 body=58 status=ok
// SIG undefined FUN_1437c4760(void)

void FUN_1437c4760(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
  FUN_1437b8e40(uVar1,1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c47a0 FUN_1437c47a0 body=201 status=ok
// SIG undefined FUN_1437c47a0(void)

void FUN_1437c47a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined1 local_70 [40];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar1 = FUN_1437b97f0(param_1,local_98,"simplificationSettings");
  FUN_1437bad30(uVar1,local_70);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_70,local_48,"holeReplacementArea");
  uVar2 = FUN_1437bafb0(uVar1);
  uVar1 = FUN_1437b97f0(param_1,local_98,"loopReplacementArea");
  FUN_1437b91e0(uVar1,uVar2);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_70);
  return;
}



// FUNCTION 1437c4870 FUN_1437c4870 body=116 status=ok
// SIG undefined FUN_1437c4870(void)

void FUN_1437c4870(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"edgeMatchingMetric");
  FUN_1437b8e40(uVar1,2);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"edgeConnectionIterations");
  FUN_1437b8e40(uVar1,2);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c48f0 FUN_1437c48f0 body=66 status=ok
// SIG undefined FUN_1437c48f0(void)

void FUN_1437c48f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"desiredVelocity");
  FUN_1437c29e0(uVar1,&DAT_1467f06e0,4);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c4940 FUN_1437c4940 body=116 status=ok
// SIG undefined FUN_1437c4940(void)

void FUN_1437c4940(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"carvedMaterial");
  FUN_1437b8e40(uVar1,0x8fffffff);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"carvedCuttingMaterial");
  FUN_1437b8e40(uVar1,0x8ffffffe);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c49c0 FUN_1437c49c0 body=56 status=ok
// SIG undefined FUN_1437c49c0(void)

void FUN_1437c49c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"currentNavMeshFace");
  FUN_1437b8e40(uVar1,0xffffffff);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c4a00 FUN_1437c4a00 body=668 status=ok
// SIG undefined FUN_1437c4a00(void)

void FUN_1437c4a00(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bcb2d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145bcb2f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bcb320);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bcb348);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcb370);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldPendingGoal_145bcb398);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcb3c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bcb3e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bcb410);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145bcb438);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bcb460);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacterRepathInformation_145bcb488);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcb4b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultLocalSteeringPathFoll_145bcb4d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bcb500);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcb528);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bcb550);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bcb578);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145bcb5a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshFace_145bcb5c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcb5f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultNavMeshCostModifier_145bcb618);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCostModifier_145bcb640);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb668);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb690);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb6d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcb6f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb720);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb758);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCostModifier_145bcb798);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb7c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb7e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb828);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcb870);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bcb8b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacterRepathInformation_145bcb8e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bcb908);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bcb930);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bcb958);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bcb980);
                    /* WARNING: Could not recover jumptable at 0x0001437c4c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bcb9a8);
  return;
}



// FUNCTION 1437c4ca0 FUN_1437c4ca0 body=61 status=ok
// SIG undefined FUN_1437c4ca0(void)

void FUN_1437c4ca0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"timeFactor");
  FUN_1437b91e0(uVar1,0x3f800000);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c4ce0 FUN_1437c4ce0 body=707 status=ok
// SIG undefined FUN_1437c4ce0(void)

void FUN_1437c4ce0(undefined8 param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
  uVar1 = FUN_1437b4040(uVar2);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  switch(uVar1) {
  case 0:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    FUN_1437b8e40(uVar2,0);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b97f0(param_1,local_38,"numElements");
    uVar3 = 0;
    break;
  case 1:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    uVar3 = 1;
    goto LAB_1437c4f47;
  case 2:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    FUN_1437b8e40(uVar2,2);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b97f0(param_1,local_38,"numElements");
    uVar3 = 2;
    break;
  case 3:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    FUN_1437b8e40(uVar2,3);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b97f0(param_1,local_38,"numElements");
    uVar3 = 1;
    break;
  case 4:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    FUN_1437b8e40(uVar2,4);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b97f0(param_1,local_38,"numElements");
    uVar3 = 1;
    break;
  case 5:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    FUN_1437b8e40(uVar2,4);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b97f0(param_1,local_38,"numElements");
    uVar3 = 2;
    break;
  case 6:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    FUN_1437b8e40(uVar2,4);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b97f0(param_1,local_38,"numElements");
    uVar3 = 3;
    break;
  case 7:
    uVar2 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    uVar3 = 4;
LAB_1437c4f47:
    FUN_1437b8e40(uVar2,uVar3);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b97f0(param_1,local_38,"numElements");
    uVar3 = 4;
    break;
  default:
    goto switchD_1437c4d3f_default;
  }
  FUN_1437b8e40(uVar2,uVar3);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
switchD_1437c4d3f_default:
  return;
}



// FUNCTION 1437c4fd0 FUN_1437c4fd0 body=108 status=ok
// SIG undefined FUN_1437c4fd0(void)

void FUN_1437c4fd0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMotionState_145bcbc98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHalf8_145bcbcc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcbce8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexDescriptionElementDecl_145bcbd10);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcbd38);
                    /* WARNING: Could not recover jumptable at 0x0001437c5038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcbd60);
  return;
}



// FUNCTION 1437c5040 FUN_1437c5040 body=1052 status=ok
// SIG undefined FUN_1437c5040(void)

void FUN_1437c5040(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcf8a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bcf8d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshFace_145bcf8f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bcf920);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145bcf948);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcf970);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcf998);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcf9c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcf9e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfa10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bcfa38);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfa60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshManager_145bcfa88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshManagerSectionInfo_145bcfab0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfaf8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfb20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcfb48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManager_145bcfb70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterOriginalEdgeInf_145bcfb98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshFace_145bcfbc0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bcfbe8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManagerSectionInfo_145bcfc10);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfc38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollectionInstanceI_145bcfc60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bcfc88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeEdge_145bcfcb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManager_145bcfcd8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManagerSectionInfo_145bcfd00);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfd28);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfd50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bcfd98);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfdc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfde8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bcfe38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bcfe60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bcfe88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bcfeb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeFI_145bcfed8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsM_145bcff00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshFace_145bcff28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bcff50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bcff78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bcffa0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bcffc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bcfff0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bd0018);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd0040);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bd0068);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd0090);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bd00b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd00e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd0128);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd0150);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bd0178);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathSegment_145bd01a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd01c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bd01f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilPathPoint_145bd0218);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bd0240);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd0268);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bd0290);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bd02b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshTraversalInfo_145bd02e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bd0320);
                    /* WARNING: Could not recover jumptable at 0x0001437c5458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bd0348);
  return;
}



// FUNCTION 1437c5460 FUN_1437c5460 body=803 status=ok
// SIG undefined FUN_1437c5460(void)

void FUN_1437c5460(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  uVar4 = FUN_1437b97f0(param_1,&local_118,"old_userChannels");
  FUN_1437bac00(uVar4,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"userChannels");
  FUN_1437bac00(uVar4,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,iVar3);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_a0;
      lVar9 = local_a4 * iVar8 + local_b0;
      if (local_a0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_a0);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_98;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_b8;
      local_110 = lVar1;
      local_118 = lVar9;
      local_108 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_110;
      local_100 = uVar4;
      local_f8 = uVar2;
      if (local_118 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_110,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_118);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_68;
      lVar9 = local_6c * iVar8 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_e8 = lVar1;
      local_f0 = lVar9;
      local_e0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_e8;
      local_d8 = uVar4;
      local_d0 = uVar2;
      if (local_f0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_e8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_1437bad30(&local_118,local_58);
      FUN_1437b8850(&local_f0,uVar4);
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_58);
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c5790 FUN_1437c5790 body=148 status=ok
// SIG undefined FUN_1437c5790(void)

void FUN_1437c5790(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"old_variant");
  uVar1 = FUN_1437bad30(uVar1,local_60);
  uVar2 = FUN_1437b97f0(param_1,local_88,"variant");
  FUN_1437b8850(uVar2,uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c5830 FUN_1437c5830 body=148 status=ok
// SIG undefined FUN_1437c5830(void)

void FUN_1437c5830(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"old_value");
  uVar1 = FUN_1437bad30(uVar1,local_60);
  uVar2 = FUN_1437b97f0(param_1,local_88,"value");
  FUN_1437b8850(uVar2,uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c58d0 FUN_1437c58d0 body=148 status=ok
// SIG undefined FUN_1437c58d0(void)

void FUN_1437c58d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"old_object");
  uVar1 = FUN_1437bad30(uVar1,local_60);
  uVar2 = FUN_1437b97f0(param_1,local_88,"object");
  FUN_1437b8850(uVar2,uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c5970 FUN_1437c5970 body=803 status=ok
// SIG undefined FUN_1437c5970(void)

void FUN_1437c5970(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  uVar4 = FUN_1437b97f0(param_1,&local_118,"old_attributeGroups");
  FUN_1437bac00(uVar4,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"attributeGroups");
  FUN_1437bac00(uVar4,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,iVar3);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_a0;
      lVar9 = local_a4 * iVar8 + local_b0;
      if (local_a0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_a0);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_98;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_b8;
      local_110 = lVar1;
      local_118 = lVar9;
      local_108 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_110;
      local_100 = uVar4;
      local_f8 = uVar2;
      if (local_118 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_110,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_118);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_68;
      lVar9 = local_6c * iVar8 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_e8 = lVar1;
      local_f0 = lVar9;
      local_e0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_e8;
      local_d8 = uVar4;
      local_d0 = uVar2;
      if (local_f0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_e8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_1437bad30(&local_118,local_58);
      FUN_1437b8850(&local_f0,uVar4);
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_58);
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c5ca0 FUN_1437c5ca0 body=803 status=ok
// SIG undefined FUN_1437c5ca0(void)

void FUN_1437c5ca0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  uVar4 = FUN_1437b97f0(param_1,&local_118,"old_indexMappings");
  FUN_1437bac00(uVar4,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"indexMappings");
  FUN_1437bac00(uVar4,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,iVar3);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_a0;
      lVar9 = local_a4 * iVar8 + local_b0;
      if (local_a0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_a0);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_98;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_b8;
      local_110 = lVar1;
      local_118 = lVar9;
      local_108 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_110;
      local_100 = uVar4;
      local_f8 = uVar2;
      if (local_118 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_110,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_118);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_68;
      lVar9 = local_6c * iVar8 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_e8 = lVar1;
      local_f0 = lVar9;
      local_e0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_e8;
      local_d8 = uVar4;
      local_d0 = uVar2;
      if (local_f0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_e8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_1437bad30(&local_118,local_58);
      FUN_1437b8850(&local_f0,uVar4);
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_58);
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c5fd0 FUN_1437c5fd0 body=803 status=ok
// SIG undefined FUN_1437c5fd0(void)

void FUN_1437c5fd0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  uVar4 = FUN_1437b97f0(param_1,&local_118,"old_declaredEnums");
  FUN_1437bac00(uVar4,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"declaredEnums");
  FUN_1437bac00(uVar4,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,iVar3);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_a0;
      lVar9 = local_a4 * iVar8 + local_b0;
      if (local_a0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_a0);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_98;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_b8;
      local_110 = lVar1;
      local_118 = lVar9;
      local_108 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_110;
      local_100 = uVar4;
      local_f8 = uVar2;
      if (local_118 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_110,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_118);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_68;
      lVar9 = local_6c * iVar8 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_e8 = lVar1;
      local_f0 = lVar9;
      local_e0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_e8;
      local_d8 = uVar4;
      local_d0 = uVar2;
      if (local_f0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_e8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_1437bad30(&local_118,local_58);
      FUN_1437b8850(&local_f0,uVar4);
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_58);
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c6300 FUN_1437c6300 body=707 status=ok
// SIG undefined FUN_1437c6300(void)

void FUN_1437c6300(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  int local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  int local_44;
  longlong local_40;
  undefined4 local_38;
  
  uVar3 = FUN_1437b97f0(param_1,&local_c8,&DAT_145bcba50);
  FUN_1437bac00(uVar3,local_a0);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_1437b97f0(param_1,&local_c8,"halfs");
  FUN_1437bac00(uVar3,local_68);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  iVar7 = 0;
  do {
    lVar1 = local_78;
    lVar8 = local_7c * iVar7 + local_88;
    if (local_78 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(local_78);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar2 = local_70;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar3 = local_90;
    local_c0 = lVar1;
    local_c8 = lVar8;
    local_b8 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    lVar1 = local_c0;
    local_b0 = uVar3;
    local_a8 = uVar2;
    if (local_c8 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_c0,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (byte)*puVar5;
      }
      lVar8 = 0;
      if ((bVar6 & 0xf) == 7) {
        lVar8 = lVar1;
      }
      if (lVar8 != 0) {
        FUN_1437b9940(&local_c8);
      }
    }
    if ((uVar4 & 1) != 0) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      if ((uVar4 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
    }
    iVar9 = FUN_1437bafb0(&local_c8);
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    lVar1 = local_40;
    lVar8 = local_44 * iVar7 + local_50;
    if (local_40 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(local_40);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar2 = local_38;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    local_c0 = lVar1;
    local_c8 = lVar8;
    local_b8 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    lVar1 = local_c0;
    local_a8 = uVar2;
    if (local_c8 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_c0,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (byte)*puVar5;
      }
      lVar8 = 0;
      if ((bVar6 & 0xf) == 7) {
        lVar8 = lVar1;
      }
      if (lVar8 != 0) {
        FUN_1437b9940(&local_c8);
      }
    }
    if ((uVar4 & 1) != 0) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      if ((uVar4 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
    }
    FUN_1437b9370(&local_c8,iVar9 >> 0x10 & 0xffff);
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 8);
  return;
}



// FUNCTION 1437c65d0 FUN_1437c65d0 body=148 status=ok
// SIG undefined FUN_1437c65d0(void)

void FUN_1437c65d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"old_extraData");
  uVar1 = FUN_1437bad30(uVar1,local_60);
  uVar2 = FUN_1437b97f0(param_1,local_88,"extraData");
  FUN_1437b8850(uVar2,uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c6670 FUN_1437c6670 body=148 status=ok
// SIG undefined FUN_1437c6670(void)

void FUN_1437c6670(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"old_texture");
  uVar1 = FUN_1437bad30(uVar1,local_60);
  uVar2 = FUN_1437b97f0(param_1,local_88,"texture");
  FUN_1437b8850(uVar2,uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c6710 FUN_1437c6710 body=220 status=ok
// SIG undefined FUN_1437c6710(void)

void FUN_1437c6710(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd0fa0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHalf8_145bd0fe0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterial_145bd1008);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryResourceHandle_145bd1030);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterialTextureStage_145bd1058);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMeshSection_145bd1080);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkRootLevelContainerNamedVariant_145bd10a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAttribute_145bd10d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxNode_145bd10f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAttributeHolder_145bd1120);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkIndexedTransformSet_145bd1148);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkClass_145bd1170);
                    /* WARNING: Could not recover jumptable at 0x0001437c67e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshMaterial_145bd1198);
  return;
}



// FUNCTION 1437c67f0 FUN_1437c67f0 body=700 status=ok
// SIG undefined FUN_1437c67f0(void)

void FUN_1437c67f0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd2f60);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd2fa0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd2fc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd2ff0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3018);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3040);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3068);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd30b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd30d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3120);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3148);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3170);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3198);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd31c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd31e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3210);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3238);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3260);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3288);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd32b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd32d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3300);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3328);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3350);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3378);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd33a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd33c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd33f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3418);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3440);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3468);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd34b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd34d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3500);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3528);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3578);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd35c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3618);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3640);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3668);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3690);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd36e0);
                    /* WARNING: Could not recover jumptable at 0x0001437c6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd3730);
  return;
}



// FUNCTION 1437c6ab0 FUN_1437c6ab0 body=495 status=ok
// SIG undefined FUN_1437c6ab0(void)

void FUN_1437c6ab0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  uVar1 = FUN_1437b97f0(param_1,local_40,"maxOpenSetSizeBytes");
  uVar2 = FUN_1437b3cf0(uVar1);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_40,"maxSearchStateSizeBytes");
  uVar3 = FUN_1437b3cf0(uVar1);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_40,"maxHierarchyOpenSetSizeBytes");
  uVar4 = FUN_1437b3cf0(uVar1);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_40,"maxHierarchySearchStateSizeBytes");
  uVar5 = FUN_1437b3cf0(uVar1);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_40,"searchParameters");
  FUN_1437bad30(uVar1,local_68);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_68,local_40,"maxOpenSetSizeBytes");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_68,local_40,"maxSearchStateSizeBytes");
  FUN_1437b8e40(uVar1,uVar3);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_68,local_40,"maxHierarchyOpenSetSizeBytes");
  FUN_1437b8e40(uVar1,uVar4);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_68,local_40,"maxHierarchySearchStateSizeBytes");
  FUN_1437b8e40(uVar1,uVar5);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_68);
  return;
}



// FUNCTION 1437c6ca0 FUN_1437c6ca0 body=1376 status=ok
// SIG undefined FUN_1437c6ca0(void)

void FUN_1437c6ca0(undefined8 param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined1 local_138 [16];
  ulonglong local_128;
  undefined8 local_110;
  longlong lStack_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  ulonglong local_d0;
  undefined1 local_c8 [48];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = (undefined8 *)FUN_1437b97f0(param_1,local_138,&DAT_145b136b4);
  puVar7 = (undefined8 *)FUN_14371d5c0(&local_110,local_98,&DAT_1467e5ab0);
  local_110 = *puVar7;
  lVar1 = puVar7[1];
  lStack_108 = lVar1;
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1437151a0(lVar1);
  }
  if ((uVar8 & 1) != 0) {
    FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
  }
  local_d0 = 0;
  local_e0 = 0;
  lStack_d8 = 0;
  uVar14 = local_d0;
  if (lVar1 != 0) {
    puVar7 = (undefined8 *)FUN_143714490(lVar1,1);
    bVar2 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    uVar14 = local_d0;
    if ((bVar2 & 0xf) == 8) {
      local_e0 = local_110;
      lStack_d8 = lVar1;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar14 = uVar8;
      if ((local_d0 & 1) != 0) {
        FUN_143733a60(local_d0 & 0xfffffffffffffffe);
      }
    }
  }
  local_d0 = uVar14;
  if ((uVar8 & 1) != 0) {
    FUN_143733a60(uVar8 & 0xfffffffffffffffe);
  }
  local_e8 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if (puVar6[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
    bVar2 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    if ((bVar2 & 0xf) == 8) {
      local_f8 = *puVar6;
      uStack_f0 = puVar6[1];
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
      }
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      local_e8 = puVar6[2];
    }
  }
  iVar15 = 0;
  do {
    puVar6 = (undefined8 *)FUN_143741d50(&local_f8,&local_110,iVar15);
    uVar8 = 0;
    local_88 = 0;
    uStack_80 = 0;
    if (puVar6[1] == 0) {
LAB_1437c6e88:
      local_res20 = local_88;
      uVar9 = uStack_80;
    }
    else {
      puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
      bVar2 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar7;
      }
      if ((bVar2 & 0xf) != 5) goto LAB_1437c6e88;
      local_res20 = *puVar6;
      uVar9 = puVar6[1];
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
      }
      uVar8 = puVar6[2];
    }
    if ((local_100 & 1) != 0) {
      FUN_143733a60(local_100 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined8 *)FUN_143741d50(&local_e0,&local_110,iVar15);
    uVar14 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uVar10 = uStack_68;
    uVar13 = local_70;
    if (puVar6[1] != 0) {
      puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
      bVar2 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar7;
      }
      uVar10 = uStack_68;
      uVar13 = local_70;
      if ((bVar2 & 0xf) == 5) {
        uVar13 = *puVar6;
        uVar10 = puVar6[1];
        if ((*(byte *)(puVar6 + 2) & 1) != 0) {
          FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
        }
        uVar14 = puVar6[2];
      }
    }
    if ((local_100 & 1) != 0) {
      FUN_143733a60(local_100 & 0xfffffffffffffffe);
    }
    local_110 = 0;
    plVar11 = (longlong *)(uVar8 & 0xfffffffffffffffe);
    (**(code **)(*plVar11 + 0x38))(plVar11,local_res10,local_res20,uVar9,&local_110);
    plVar12 = (longlong *)(uVar14 & 0xfffffffffffffffe);
    (**(code **)(*plVar12 + 0x30))(plVar12,local_res18,uVar13,uVar10,local_110);
    if ((uVar14 & 1) != 0) {
      FUN_143733a60(plVar12);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(plVar11);
    }
    iVar15 = iVar15 + 1;
    if (3 < iVar15) {
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_d0 & 1) != 0) {
        FUN_143733a60(local_d0 & 0xfffffffffffffffe);
      }
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_138,"checkForDirectPath");
      uVar3 = FUN_1437b3cf0(uVar9);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_138,"heuristicWeight");
      FUN_1437bafb0(uVar9);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_138,"maxOpenSetSizeBytes");
      uVar4 = FUN_1437b3cf0(uVar9);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_138,"maxSearchStateSizeBytes");
      uVar5 = FUN_1437b3cf0(uVar9);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_138,"searchParameters");
      FUN_1437bad30(uVar9,local_c8);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_c8,local_138,&DAT_145b136b4);
      FUN_1437c29e0(uVar9,local_98,4);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_c8,local_138,"checkForDirectPath");
      FUN_1437b8e40(uVar9,uVar3);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_c8,local_138,"heuristicWeight");
      FUN_1437b91e0(uVar9);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_c8,local_138,"maxOpenSetSizeBytes");
      FUN_1437b8e40(uVar9,uVar4);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_c8,local_138,"maxSearchStateSizeBytes");
      FUN_1437b8e40(uVar9,uVar5);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_c8);
      return;
    }
  } while( true );
}



// FUNCTION 1437c7200 FUN_1437c7200 body=124 status=ok
// SIG undefined FUN_1437c7200(void)

void FUN_1437c7200(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"sectionUid");
  iVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if (iVar2 == -1) {
    uVar1 = FUN_1437b97f0(param_1,local_38,"sectionUid");
    FUN_1437b8e40(uVar1,0);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  return;
}



// FUNCTION 1437c7280 FUN_1437c7280 body=410 status=ok
// SIG undefined FUN_1437c7280(void)

void FUN_1437c7280(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  undefined1 local_78 [40];
  undefined1 local_50 [72];
  
  uVar1 = FUN_1437b97f0(param_1,local_c8,"regionPruningSettings");
  FUN_1437bad30(uVar1,local_78);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_a0,"minRegionArea");
  uVar3 = FUN_1437bafb0(uVar1);
  uVar1 = FUN_1437b97f0(local_78,local_c8,"minRegionArea");
  FUN_1437b91e0(uVar1,uVar3);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_c8,"minDistanceToSeedPoints");
  uVar3 = FUN_1437bafb0(uVar1);
  uVar1 = FUN_1437b97f0(local_78,local_a0,"minDistanceToSeedPoints");
  FUN_1437b91e0(uVar1,uVar3);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_c8,"regionSeedPoints");
  uVar1 = FUN_1437bac00(uVar1,local_50);
  uVar2 = FUN_1437b97f0(local_78,local_a0,"regionSeedPoints");
  FUN_1437b8a10(uVar2,uVar1);
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_78);
  return;
}



// FUNCTION 1437c7420 FUN_1437c7420 body=803 status=ok
// SIG undefined FUN_1437c7420(void)

void FUN_1437c7420(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  uVar4 = FUN_1437b97f0(param_1,&local_118,"old_meshInfos");
  FUN_1437bac00(uVar4,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"meshInfos");
  FUN_1437bac00(uVar4,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,iVar3);
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_a0;
      lVar9 = local_a4 * iVar8 + local_b0;
      if (local_a0 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_a0);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_98;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_b8;
      local_110 = lVar1;
      local_118 = lVar9;
      local_108 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_110;
      local_100 = uVar4;
      local_f8 = uVar2;
      if (local_118 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_110,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_118);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_68;
      lVar9 = local_6c * iVar8 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_e8 = lVar1;
      local_f0 = lVar9;
      local_e0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_e8;
      local_d8 = uVar4;
      local_d0 = uVar2;
      if (local_f0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_e8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar7 = 0;
        }
        else {
          bVar7 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar7 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_1437bad30(&local_118,local_58);
      FUN_1437b8850(&local_f0,uVar4);
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_58);
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  return;
}



// FUNCTION 1437c7750 FUN_1437c7750 body=1491 status=ok
// SIG undefined FUN_1437c7750(void)

void FUN_1437c7750(undefined8 param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined1 local_148 [16];
  ulonglong local_138;
  undefined8 local_120;
  longlong lStack_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined8 local_f0;
  longlong lStack_e8;
  ulonglong local_e0;
  undefined1 local_d8 [48];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar6 = (undefined8 *)FUN_1437b97f0(param_1,local_148,&DAT_145b136b4);
  puVar7 = (undefined8 *)FUN_14371d5c0(&local_120,local_a8,&DAT_1467e5ab0);
  local_120 = *puVar7;
  lVar1 = puVar7[1];
  lStack_118 = lVar1;
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1437151a0(lVar1);
  }
  if ((uVar8 & 1) != 0) {
    FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
  }
  local_e0 = 0;
  local_f0 = 0;
  lStack_e8 = 0;
  uVar14 = local_e0;
  if (lVar1 != 0) {
    puVar7 = (undefined8 *)FUN_143714490(lVar1,1);
    bVar2 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    uVar14 = local_e0;
    if ((bVar2 & 0xf) == 8) {
      local_f0 = local_120;
      lStack_e8 = lVar1;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar14 = uVar8;
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
    }
  }
  local_e0 = uVar14;
  if ((uVar8 & 1) != 0) {
    FUN_143733a60(uVar8 & 0xfffffffffffffffe);
  }
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  if (puVar6[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
    bVar2 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    if ((bVar2 & 0xf) == 8) {
      local_108 = *puVar6;
      uStack_100 = puVar6[1];
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
      }
      if ((local_f8 & 1) != 0) {
        FUN_143733a60(local_f8 & 0xfffffffffffffffe);
      }
      local_f8 = puVar6[2];
    }
  }
  iVar15 = 0;
  do {
    puVar6 = (undefined8 *)FUN_143741d50(&local_108,&local_120,iVar15);
    uVar8 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (puVar6[1] == 0) {
LAB_1437c7938:
      local_res20 = local_98;
      uVar9 = uStack_90;
    }
    else {
      puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
      bVar2 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar7;
      }
      if ((bVar2 & 0xf) != 5) goto LAB_1437c7938;
      local_res20 = *puVar6;
      uVar9 = puVar6[1];
      if ((*(byte *)(puVar6 + 2) & 1) != 0) {
        FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
      }
      uVar8 = puVar6[2];
    }
    if ((local_110 & 1) != 0) {
      FUN_143733a60(local_110 & 0xfffffffffffffffe);
    }
    puVar6 = (undefined8 *)FUN_143741d50(&local_f0,&local_120,iVar15);
    uVar14 = 0;
    local_80 = 0;
    uStack_78 = 0;
    uVar10 = uStack_78;
    uVar13 = local_80;
    if (puVar6[1] != 0) {
      puVar7 = (undefined8 *)FUN_143714490(puVar6[1],1);
      bVar2 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar7;
      }
      uVar10 = uStack_78;
      uVar13 = local_80;
      if ((bVar2 & 0xf) == 5) {
        uVar13 = *puVar6;
        uVar10 = puVar6[1];
        if ((*(byte *)(puVar6 + 2) & 1) != 0) {
          FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
        }
        uVar14 = puVar6[2];
      }
    }
    if ((local_110 & 1) != 0) {
      FUN_143733a60(local_110 & 0xfffffffffffffffe);
    }
    local_120 = 0;
    plVar11 = (longlong *)(uVar8 & 0xfffffffffffffffe);
    (**(code **)(*plVar11 + 0x38))(plVar11,local_res10,local_res20,uVar9,&local_120);
    plVar12 = (longlong *)(uVar14 & 0xfffffffffffffffe);
    (**(code **)(*plVar12 + 0x30))(plVar12,local_res18,uVar13,uVar10,local_120);
    if ((uVar14 & 1) != 0) {
      FUN_143733a60(plVar12);
    }
    if ((uVar8 & 1) != 0) {
      FUN_143733a60(plVar11);
    }
    iVar15 = iVar15 + 1;
    if (3 < iVar15) {
      if ((local_f8 & 1) != 0) {
        FUN_143733a60(local_f8 & 0xfffffffffffffffe);
      }
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_148,"outputPathType");
      uVar3 = FUN_1437b3cf0(uVar9);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_148,"checkForDirectPath");
      uVar4 = FUN_1437b3cf0(uVar9);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_148,"useHierarchyInfo");
      uVar5 = FUN_1437b3cf0(uVar9);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_148,"heuristicWeight");
      FUN_1437bafb0(uVar9);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_148,"simpleRadiusThreshold");
      FUN_1437bafb0(uVar9);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(param_1,local_148,"searchParameters");
      FUN_1437bad30(uVar9,local_d8);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_d8,local_148,&DAT_145b136b4);
      FUN_1437c29e0(uVar9,local_a8,4);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_d8,local_148,"outputPathType");
      FUN_1437b8e40(uVar9,uVar3);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_d8,local_148,"checkForDirectPath");
      FUN_1437b8e40(uVar9,uVar4);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_d8,local_148,"useHierarchicalHeuristic");
      FUN_1437b8e40(uVar9,uVar5);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_d8,local_148,"heuristicWeight");
      FUN_1437b91e0(uVar9);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_d8,local_148,"simpleRadiusThreshold");
      FUN_1437b91e0(uVar9);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_d8);
      return;
    }
  } while( true );
}



// FUNCTION 1437c7d30 FUN_1437c7d30 body=876 status=ok
// SIG undefined FUN_1437c7d30(void)

void FUN_1437c7d30(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd5da0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bd5dc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd5df0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd5e18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverMovementPrope_145bd5e40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsM_145bd5e68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsM_145bd5e90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtilFindPat_145bd5eb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bd5ee0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd5f08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd5f30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd5f58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bd5f80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd5fa8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd5fd0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bd5ff8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bd6020);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bd6048);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd6070);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtilFindPat_145bd6098);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtilFindPat_145bd60c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bd60e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManagerSectionInfo_145bd6110);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bd6138);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_145bd6160);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bd6188);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_145bd61b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bd61d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bd6200);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd6228);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd6268);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiUserEdgeUtilsUserEdgeSetup_145bd62a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_145bd62d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd62f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd6320);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd6370);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLoopFinderSettings_145bd6398);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd63c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd63e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bd6410);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bd6438);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bd6460);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bd6488);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathPathPoint_145bd64b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bd64d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd6500);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtilFindPat_145bd6528);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bd6550);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd6578);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsM_145bd65b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd65d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsInt_145bd6600);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollection_145bd6628);
                    /* WARNING: Could not recover jumptable at 0x0001437c8098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bd6650);
  return;
}



// FUNCTION 1437c80a0 FUN_1437c80a0 body=92 status=ok
// SIG undefined FUN_1437c80a0(void)

void FUN_1437c80a0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHalf8_145bd6950);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd6978);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd69a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd69c8);
                    /* WARNING: Could not recover jumptable at 0x0001437c80f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd69f0);
  return;
}



// FUNCTION 1437c8100 FUN_1437c8100 body=156 status=ok
// SIG undefined FUN_1437c8100(void)

void FUN_1437c8100(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd73e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd7410);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd7438);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd7460);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd74a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd74c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd7518);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd7540);
                    /* WARNING: Could not recover jumptable at 0x0001437c8198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseSection_145bd7568);
  return;
}



// FUNCTION 1437c81a0 FUN_1437c81a0 body=1207 status=ok
// SIG undefined FUN_1437c81a0(void)

void FUN_1437c81a0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120 [16];
  ulonglong local_110;
  undefined1 local_f8 [16];
  ulonglong local_e8;
  undefined1 local_d0 [40];
  undefined1 local_a8 [16];
  undefined8 local_98;
  longlong local_90;
  int local_84;
  longlong local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  longlong local_48;
  undefined4 local_40;
  
  uVar5 = FUN_1437b97f0(param_1,local_120,"materialSettingsMap");
  FUN_1437bac00(uVar5,local_70);
  if ((local_110 & 1) != 0) {
    FUN_143733a60(local_110 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_1437b97f0(param_1,local_120,"localSettings");
  FUN_1437bac00(uVar5,local_a8);
  if ((local_110 & 1) != 0) {
    FUN_143733a60(local_110 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_70);
  iVar4 = FUN_1437bcb20(local_a8);
  FUN_1437beb60(local_a8,iVar4 + iVar3);
  iVar10 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_80;
      lVar11 = (iVar4 + iVar10) * local_84 + local_90;
      if (local_80 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1437151a0(local_80);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = local_78;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar5 = local_98;
      local_140 = lVar1;
      local_148 = lVar11;
      local_138 = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      lVar1 = local_140;
      local_130 = uVar5;
      local_128 = uVar2;
      if (local_148 != 0) {
        puVar7 = (undefined8 *)FUN_143714490(local_140,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar7;
        }
        lVar11 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar11 = lVar1;
        }
        if (lVar11 != 0) {
          FUN_1437b9940(&local_148);
        }
      }
      if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_148,local_d0);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      lVar1 = local_48;
      lVar11 = local_4c * iVar10 + local_58;
      if (local_48 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1437151a0(local_48);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = local_40;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar5 = local_60;
      local_140 = lVar1;
      local_148 = lVar11;
      local_138 = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      lVar1 = local_140;
      local_130 = uVar5;
      local_128 = uVar2;
      if (local_148 != 0) {
        puVar7 = (undefined8 *)FUN_143714490(local_140,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar7;
        }
        lVar11 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar11 = lVar1;
        }
        if (lVar11 != 0) {
          FUN_1437b9940(&local_148);
        }
      }
      if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_148,local_120);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar5 = FUN_1437b97f0(local_120,local_f8,"materialIndex");
      uVar8 = FUN_1437b97f0(local_d0,&local_148,"material");
      FUN_1437b87f0(uVar8,uVar5);
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      uVar5 = FUN_1437b97f0(local_120,&local_148,"simplificationSettings");
      uVar8 = FUN_1437b97f0(local_d0,local_f8,"simplificationSettings");
      FUN_1437b87f0(uVar8,uVar5);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar5 = FUN_1437b97f0(param_1,&local_148,"maxWalkableSlope");
      uVar8 = FUN_1437b97f0(local_d0,local_f8,"maxWalkableSlope");
      FUN_1437b87f0(uVar8,uVar5);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar5 = FUN_1437b97f0(param_1,&local_148,"edgeMatchingParams");
      uVar8 = FUN_1437b97f0(local_d0,local_f8,"edgeMatchingParams");
      FUN_1437b87f0(uVar8,uVar5);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_120);
      FUN_1437b87d0(local_d0);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar3);
  }
  return;
}



// FUNCTION 1437c8660 FUN_1437c8660 body=882 status=ok
// SIG undefined FUN_1437c8660(void)

void FUN_1437c8660(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  longlong lVar9;
  int local_res10;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  longlong local_90;
  int local_84;
  longlong local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  longlong local_48;
  undefined4 local_40;
  
  uVar5 = FUN_1437b97f0(param_1,local_d0,"ownedEdges");
  FUN_1437bac00(uVar5,local_a8);
  if ((local_c0 & 1) != 0) {
    FUN_143733a60(local_c0 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_1437b97f0(param_1,local_d0,"cuttingInfo");
  FUN_1437bac00(uVar5,local_70);
  if ((local_c0 & 1) != 0) {
    FUN_143733a60(local_c0 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_a8);
  FUN_1437beb60(local_70,iVar3);
  local_res10 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_80;
      lVar9 = local_84 * local_res10 + local_90;
      if (local_80 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1437151a0(local_80);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = local_78;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar5 = local_98;
      local_f0 = lVar1;
      local_f8 = lVar9;
      local_e8 = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      lVar1 = local_f0;
      local_e0 = uVar5;
      local_d8 = uVar2;
      if (local_f8 != 0) {
        puVar7 = (undefined8 *)FUN_143714490(local_f0,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = (byte)*puVar7;
        }
        lVar9 = 0;
        if ((bVar8 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f8);
        }
      }
      if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_f8,local_d0);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      uVar5 = FUN_1437b97f0(local_d0,&local_f8,"cutInfo");
      iVar4 = FUN_1437b3cf0(uVar5);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      lVar1 = local_48;
      lVar9 = local_4c * local_res10 + local_58;
      if (local_48 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1437151a0(local_48);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = local_40;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar5 = local_60;
      local_f0 = lVar1;
      local_f8 = lVar9;
      local_e8 = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      lVar1 = local_f0;
      local_e0 = uVar5;
      local_d8 = uVar2;
      if (local_f8 != 0) {
        puVar7 = (undefined8 *)FUN_143714490(local_f0,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = (byte)*puVar7;
        }
        lVar9 = 0;
        if ((bVar8 & 0xf) == 7) {
          lVar9 = lVar1;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_f8);
        }
      }
      if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
      if (iVar4 == 0xff) {
        iVar4 = 0xffff;
      }
      FUN_1437b8e40(&local_f8,iVar4);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_d0);
      local_res10 = local_res10 + 1;
    } while (local_res10 < iVar3);
  }
  return;
}



// FUNCTION 1437c89e0 FUN_1437c89e0 body=126 status=ok
// SIG undefined FUN_1437c89e0(void)

void FUN_1437c89e0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"avoidanceEnabled");
  iVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"avoidanceEnabledMask");
  FUN_1437b8e40(uVar1,-(iVar2 != 0) & 7);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c8a60 FUN_1437c8a60 body=281 status=ok
// SIG undefined FUN_1437c8a60(void)

void FUN_1437c8a60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [40];
  undefined1 local_60 [16];
  ulonglong local_50;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  FUN_1437b7c10(local_b8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  uVar1 = FUN_1437bcd90(local_b8);
  FUN_1437bc0c0(uVar1,&local_a8,"hkaiReferenceFrame");
  local_98 = local_a8;
  uStack_94 = uStack_a4;
  uStack_90 = uStack_a0;
  uStack_8c = uStack_9c;
  FUN_1437be120(uVar1,local_88,&local_98);
  uVar1 = FUN_1437b97f0(param_1,local_60,"transform");
  uVar2 = FUN_1437b97f0(local_88,local_38,"transform");
  FUN_1437b87f0(uVar2,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_60,"referenceFrame");
  FUN_1437b8850(uVar1,local_88);
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_88);
  return;
}



// FUNCTION 1437c8b80 FUN_1437c8b80 body=588 status=ok
// SIG undefined FUN_1437c8b80(void)

void FUN_1437c8b80(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultLocalSteeringPathFoll_145bd9050);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultLocalSteering_145bd9078);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bd90a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteering_145bd90c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd90f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bd9118);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteeringInput_145bd9140);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bd9168);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bd9190);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bd91b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathFollowingProperties_145bd91e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd9208);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd9230);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd9258);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtilFindPat_145bd9280);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145bd92a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd92d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd9318);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bd9360);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPath_145bd9388);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathPathPoint_145bd93b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd93d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_145bd9400);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteeringInput_145bd9428);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bd9450);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsLoc_145bd9478);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd94d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsMat_145bd94f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd9520);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bd9548);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bd9570);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumePathSearchParameter_145bd9598);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bd95c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd95e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_145bd9638);
                    /* WARNING: Could not recover jumptable at 0x0001437c8dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145bd9660);
  return;
}



// FUNCTION 1437c8dd0 FUN_1437c8dd0 body=156 status=ok
// SIG undefined FUN_1437c8dd0(void)

void FUN_1437c8dd0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bd9fe8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda010);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda038);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda060);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda088);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda0b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda0d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda100);
                    /* WARNING: Could not recover jumptable at 0x0001437c8e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda128);
  return;
}



// FUNCTION 1437c8e70 FUN_1437c8e70 body=92 status=ok
// SIG undefined FUN_1437c8e70(void)

void FUN_1437c8e70(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda410);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda438);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda460);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bda488);
                    /* WARNING: Could not recover jumptable at 0x0001437c8ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseSection_145bda4c0);
  return;
}



// FUNCTION 1437c8ed0 FUN_1437c8ed0 body=128 status=ok
// SIG undefined FUN_1437c8ed0(void)

void FUN_1437c8ed0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"checkForLineOfSight");
  iVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"lineOfSightFlags");
  FUN_1437b8e40(uVar1,iVar2 == 1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c8f50 FUN_1437c8f50 body=129 status=ok
// SIG undefined FUN_1437c8f50(void)

void FUN_1437c8f50(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"outputPathType");
  iVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"outputPathFlags");
  iVar3 = 3;
  if (iVar2 != 2) {
    iVar3 = iVar2;
  }
  FUN_1437b8e40(uVar1,iVar3);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c8fe0 FUN_1437c8fe0 body=177 status=ok
// SIG undefined FUN_1437c8fe0(void)

void FUN_1437c8fe0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_88,"defaultConstructionInfo");
  FUN_1437bad30(uVar1,local_60);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"defaultConstructionProperties");
  uVar2 = FUN_1437b97f0(local_60,local_88,"flags");
  FUN_1437b87f0(uVar2,uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  return;
}



// FUNCTION 1437c90a0 FUN_1437c90a0 body=924 status=ok
// SIG undefined FUN_1437c90a0(void)

void FUN_1437c90a0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bdda40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bdda68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdda90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bddab8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathPathPoint_145bddae0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bddb08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bddb30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bddb58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddb80);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddba8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddbf8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddc20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollectionInstanceI_145bddc68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollection_145bddc90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddcb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDynamicNavMeshQueryMediator_145bddce0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bddd08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bddd30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_145bddd58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bddd80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145bddda8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManagerSectionInfo_145bdddd0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterSavedConnectivi_145bdddf8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdde20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdde48);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdde70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddec0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddee8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddf10);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddf58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddfa0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddfc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bddff0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde018);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde040);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde068);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bde090);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde0b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde0e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde138);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde190);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde1e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderSilhouette_145bde240);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde268);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde2c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde310);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bde360);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverMovementPrope_145bde3b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bde3e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bde408);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bde430);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bde458);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsM_145bde480);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bde4a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bde4d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteeringInput_145bde4f8);
                    /* WARNING: Could not recover jumptable at 0x0001437c9438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bde520);
  return;
}



// FUNCTION 1437c9440 FUN_1437c9440 body=1151 status=ok
// SIG undefined FUN_1437c9440(void)

void FUN_1437c9440(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  int local_7c;
  ulonglong local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong local_50;
  int local_44;
  ulonglong local_40;
  undefined4 local_38;
  
  uVar3 = FUN_1437b97f0(param_1,&local_c8,"uvMapScale");
  FUN_1437bac00(uVar3,local_a0);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_1437b97f0(param_1,&local_c8,"uvMapOffset");
  FUN_1437bac00(uVar3,local_68);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar6 = local_78;
  lVar1 = local_88;
  uVar10 = 0;
  uVar4 = uVar10;
  if (local_78 != 0) {
    uVar4 = FUN_1437151a0(local_78);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = local_70;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = local_90;
  local_c8 = lVar1;
  local_c0 = uVar6;
  local_b8 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar6 = local_c0;
  local_b0 = uVar3;
  local_a8 = uVar2;
  bVar8 = 0;
  if (local_c8 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_c0,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar7 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      FUN_1437b9940(&local_c8);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1437b91e0(&local_c8,0x3f800000);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar6 = uVar10;
  if (local_78 != 0) {
    uVar6 = FUN_1437151a0(local_78);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  local_c0 = local_78;
  local_c8 = local_7c + local_88;
  local_b8 = uVar6;
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  uVar4 = local_c0;
  local_b0 = local_90;
  local_a8 = local_70;
  if (local_c8 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_c0,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar7 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) {
      FUN_1437b9940(&local_c8);
    }
  }
  if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  FUN_1437b91e0(&local_c8,0x3f800000);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar6 = local_40;
  lVar1 = local_50;
  uVar4 = uVar10;
  if (local_40 != 0) {
    uVar4 = FUN_1437151a0(local_40);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = local_38;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = local_58;
  local_c8 = lVar1;
  local_c0 = uVar6;
  local_b8 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar6 = local_c0;
  local_b0 = uVar3;
  local_a8 = uVar2;
  if (local_c8 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_c0,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar7 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      FUN_1437b9940(&local_c8);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1437b91e0(&local_c8,0);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar6 = uVar10;
  if (local_40 != 0) {
    uVar6 = FUN_1437151a0(local_40);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  local_c0 = local_40;
  local_c8 = local_44 + local_50;
  local_b8 = uVar6;
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  uVar4 = local_c0;
  local_b0 = local_58;
  local_a8 = local_38;
  if (local_c8 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_c0,1);
    if (puVar5 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar5;
    }
    if ((bVar8 & 0xf) == 7) {
      uVar10 = uVar4;
    }
    if (uVar10 != 0) {
      FUN_1437b9940(&local_c8);
    }
  }
  if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  FUN_1437b91e0(&local_c8,0);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437c98c0 FUN_1437c98c0 body=364 status=ok
// SIG undefined FUN_1437c98c0(void)

void FUN_1437c98c0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf770);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeletonPartition_145bdf798);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf7c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeletonSegment_145bdf7e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeleton_145bdf810);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeleton_145bdf838);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf860);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf888);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxScene_145bdf8b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterial_145bdf8d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterial_145bdf900);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf928);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf950);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxNode_145bdf978);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMeshSection_145bdf9a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf9c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdf9f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdfa18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdfa58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bdfa80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxLight_145bdfac0);
                    /* WARNING: Could not recover jumptable at 0x0001437c9a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxNode_145bdfae8);
  return;
}



// FUNCTION 1437c9a30 FUN_1437c9a30 body=124 status=ok
// SIG undefined FUN_1437c9a30(void)

void FUN_1437c9a30(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be01e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be0208);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be0230);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be0258);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be0280);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be02a8);
                    /* WARNING: Could not recover jumptable at 0x0001437c9aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be02d0);
  return;
}



// FUNCTION 1437c9ad0 FUN_1437c9ad0 body=308 status=ok
// SIG undefined FUN_1437c9ad0(void)

void FUN_1437c9ad0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_88,"originalMesh");
  FUN_1437bad30(uVar1,local_60);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bd3c0(local_60);
  if (iVar3 == 0) {
    uVar1 = FUN_1437b97f0(local_60,local_38,"sectionUid");
    uVar2 = FUN_1437b97f0(param_1,local_88,"sectionUid");
    FUN_1437b87f0(uVar2,uVar1);
    if ((local_78 & 1) != 0) {
      FUN_143733a60(local_78 & 0xfffffffffffffffe);
    }
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    uVar1 = FUN_1437b97f0(local_60,local_88,"runtimeId");
    uVar2 = FUN_1437b97f0(param_1,local_38,"runtimeId");
    FUN_1437b87f0(uVar2,uVar1);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    if ((local_78 & 1) != 0) {
      FUN_143733a60(local_78 & 0xfffffffffffffffe);
    }
  }
  FUN_1437b87d0(local_60);
  return;
}



// FUNCTION 1437c9c10 FUN_1437c9c10 body=2206 status=ok
// SIG undefined FUN_1437c9c10(void)

void FUN_1437c9c10(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  longlong lVar12;
  int local_res10;
  longlong local_208;
  longlong local_200;
  ulonglong local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0 [16];
  ulonglong local_1d0;
  undefined1 local_1b8 [16];
  ulonglong local_1a8;
  undefined1 local_190 [40];
  undefined1 local_168 [40];
  undefined1 local_140 [16];
  undefined8 local_130;
  longlong local_128;
  int local_11c;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  longlong local_f0;
  int local_e4;
  longlong local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  longlong local_b8;
  int local_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong local_80;
  int local_74;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_60 [40];
  
  uVar7 = FUN_1437b97f0(param_1,local_1e0,"sectionUid");
  iVar3 = FUN_1437b3cf0(uVar7);
  if ((local_1d0 & 1) != 0) {
    FUN_143733a60(local_1d0 & 0xfffffffffffffffe);
  }
  uVar7 = FUN_1437b97f0(param_1,local_1e0,"faces");
  FUN_1437bac00(uVar7,local_108);
  if ((local_1d0 & 1) != 0) {
    FUN_143733a60(local_1d0 & 0xfffffffffffffffe);
  }
  uVar7 = FUN_1437b97f0(param_1,local_1e0,"edges");
  FUN_1437bac00(uVar7,local_98);
  if ((local_1d0 & 1) != 0) {
    FUN_143733a60(local_1d0 & 0xfffffffffffffffe);
  }
  uVar7 = FUN_1437b97f0(param_1,local_1e0,"streamingSets");
  FUN_1437bac00(uVar7,local_d0);
  if ((local_1d0 & 1) != 0) {
    FUN_143733a60(local_1d0 & 0xfffffffffffffffe);
  }
  local_res10 = 0;
  iVar4 = FUN_1437bcb20(local_108);
  if (0 < iVar4) {
    do {
      lVar1 = local_e0;
      lVar12 = local_e4 * local_res10 + local_f0;
      if (local_e0 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1437151a0(local_e0);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar2 = local_d8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar7 = local_f8;
      local_200 = lVar1;
      local_208 = lVar12;
      local_1f8 = uVar8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      lVar1 = local_200;
      local_1f0 = uVar7;
      local_1e8 = uVar2;
      if (local_208 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(local_200,1);
        if (puVar9 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar9;
        }
        lVar12 = 0;
        if ((bVar11 & 0xf) == 7) {
          lVar12 = lVar1;
        }
        if (lVar12 != 0) {
          FUN_1437b9940(&local_208);
        }
      }
      if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
        FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_208,local_60);
      if ((local_1f8 & 1) != 0) {
        FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_60,local_1e0,"startEdgeIndex");
      iVar4 = FUN_1437b3cf0(uVar7);
      if ((local_1d0 & 1) != 0) {
        FUN_143733a60(local_1d0 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_60,local_1e0,"numEdges");
      iVar5 = FUN_1437b3cf0(uVar7);
      if ((local_1d0 & 1) != 0) {
        FUN_143733a60(local_1d0 & 0xfffffffffffffffe);
      }
      iVar5 = iVar5 + iVar4;
      lVar1 = local_70;
      for (; local_70 = lVar1, iVar4 < iVar5; iVar4 = iVar4 + 1) {
        lVar12 = local_74 * iVar4 + local_80;
        if (lVar1 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1437151a0(lVar1);
        }
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
        uVar2 = local_68;
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
        uVar7 = local_88;
        local_208 = lVar12;
        local_200 = lVar1;
        local_1f8 = uVar8;
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
        lVar1 = local_200;
        local_1f0 = uVar7;
        local_1e8 = uVar2;
        if (local_208 != 0) {
          puVar9 = (undefined8 *)FUN_143714490(local_200,1);
          if (puVar9 == (undefined8 *)0x0) {
            bVar11 = 0;
          }
          else {
            bVar11 = (byte)*puVar9;
          }
          lVar12 = 0;
          if ((bVar11 & 0xf) == 7) {
            lVar12 = lVar1;
          }
          if (lVar12 != 0) {
            FUN_1437b9940(&local_208);
          }
        }
        if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
          FUN_143733a60(uVar8 & 0xfffffffffffffffe);
        }
        FUN_1437bad30(&local_208,local_190);
        if ((local_1f8 & 1) != 0) {
          FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
        }
        uVar7 = FUN_1437b97f0(local_190,local_1e0,"oppositeSectionUid");
        iVar6 = FUN_1437b3cf0(uVar7);
        if ((local_1d0 & 1) != 0) {
          FUN_143733a60(local_1d0 & 0xfffffffffffffffe);
        }
        if ((iVar6 != -1) && (iVar3 != iVar6)) {
          iVar6 = FUN_1437ca970(local_d0,iVar3,iVar6);
          lVar1 = local_a8;
          lVar12 = local_ac * iVar6 + local_b8;
          if (local_a8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_1437151a0(local_a8);
          }
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          uVar2 = local_a0;
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          uVar7 = local_c0;
          local_200 = lVar1;
          local_208 = lVar12;
          local_1f8 = uVar8;
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          lVar1 = local_200;
          local_1f0 = uVar7;
          local_1e8 = uVar2;
          if (local_208 != 0) {
            puVar9 = (undefined8 *)FUN_143714490(local_200,1);
            if (puVar9 == (undefined8 *)0x0) {
              bVar11 = 0;
            }
            else {
              bVar11 = (byte)*puVar9;
            }
            lVar12 = 0;
            if ((bVar11 & 0xf) == 7) {
              lVar12 = lVar1;
            }
            if (lVar12 != 0) {
              FUN_1437b9940(&local_208);
            }
          }
          if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
            FUN_143733a60(uVar8 & 0xfffffffffffffffe);
          }
          FUN_1437bad30(&local_208,local_1e0);
          if ((local_1f8 & 1) != 0) {
            FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_1e0,&local_208,"meshConnections");
          FUN_1437bac00(uVar7,local_140);
          if ((local_1f8 & 1) != 0) {
            FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
          }
          iVar6 = FUN_1437bcb20(local_140);
          FUN_1437beb60(local_140,iVar6 + 1);
          lVar1 = local_118;
          lVar12 = local_11c * iVar6 + local_128;
          if (local_118 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_1437151a0(local_118);
          }
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          uVar2 = local_110;
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          uVar7 = local_130;
          local_200 = lVar1;
          local_208 = lVar12;
          local_1f8 = uVar8;
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          lVar1 = local_200;
          local_1f0 = uVar7;
          local_1e8 = uVar2;
          if (local_208 != 0) {
            puVar9 = (undefined8 *)FUN_143714490(local_200,1);
            if (puVar9 == (undefined8 *)0x0) {
              bVar11 = 0;
            }
            else {
              bVar11 = (byte)*puVar9;
            }
            lVar12 = 0;
            if ((bVar11 & 0xf) == 7) {
              lVar12 = lVar1;
            }
            if (lVar12 != 0) {
              FUN_1437b9940(&local_208);
            }
          }
          if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
            FUN_143733a60(uVar8 & 0xfffffffffffffffe);
          }
          FUN_1437bad30(&local_208,local_168);
          if ((local_1f8 & 1) != 0) {
            FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_168,&local_208,"faceIndex");
          FUN_1437b8e40(uVar7,local_res10);
          if ((local_1f8 & 1) != 0) {
            FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_168,&local_208,"edgeIndex");
          FUN_1437b8e40(uVar7,iVar4);
          if ((local_1f8 & 1) != 0) {
            FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_190,local_1b8,"oppositeFace");
          uVar10 = FUN_1437b97f0(local_168,&local_208,"oppositeFaceIndex");
          FUN_1437b87f0(uVar10,uVar7);
          if ((local_1f8 & 1) != 0) {
            FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
          }
          if ((local_1a8 & 1) != 0) {
            FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_190,&local_208,"oppositeEdge");
          uVar10 = FUN_1437b97f0(local_168,local_1b8,"oppositeEdgeIndex");
          FUN_1437b87f0(uVar10,uVar7);
          if ((local_1a8 & 1) != 0) {
            FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
          }
          if ((local_1f8 & 1) != 0) {
            FUN_143733a60(local_1f8 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_190,local_1b8,"oppositeFace");
          FUN_1437b8e40(uVar7,0xffffffff);
          if ((local_1a8 & 1) != 0) {
            FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_190,local_1b8,"oppositeEdge");
          FUN_1437b8e40(uVar7,0xffffffff);
          if ((local_1a8 & 1) != 0) {
            FUN_143733a60(local_1a8 & 0xfffffffffffffffe);
          }
          FUN_1437b87d0(local_168);
          FUN_1437b87d0(local_1e0);
        }
        FUN_1437b87d0(local_190);
        lVar1 = local_70;
      }
      FUN_1437b87d0(local_60);
      local_res10 = local_res10 + 1;
      iVar4 = FUN_1437bcb20(local_108);
    } while (local_res10 < iVar4);
  }
  return;
}



// FUNCTION 1437ca4c0 FUN_1437ca4c0 body=128 status=ok
// SIG undefined FUN_1437ca4c0(void)

void FUN_1437ca4c0(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"useNewAvoidance");
  iVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"avoidanceSolverType");
  FUN_1437b8e40(uVar1,iVar2 == 0);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437ca540 FUN_1437ca540 body=127 status=ok
// SIG undefined FUN_1437ca540(void)

void FUN_1437ca540(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"useAngularConstraints");
  iVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"kinematicConstraintType");
  FUN_1437b8e40(uVar1,2 - (uint)(iVar2 != 0));
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437ca5c0 FUN_1437ca5c0 body=217 status=ok
// SIG undefined FUN_1437ca5c0(void)

void FUN_1437ca5c0(undefined8 param_1)

{
  undefined8 uVar1;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = FUN_1437b97f0(param_1,local_30,&DAT_145bc1590);
  FUN_1437bad30(uVar1,local_58);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  local_78 = DAT_1467f08d0;
  fStack_74 = fRam00000001467f08d4;
  fStack_70 = fRam00000001467f08d8;
  fStack_6c = fRam00000001467f08dc;
  local_68 = 0.0 - DAT_1467f08d0;
  fStack_64 = 0.0 - fRam00000001467f08d4;
  fStack_60 = 0.0 - fRam00000001467f08d8;
  fStack_5c = 0.0 - fRam00000001467f08dc;
  uVar1 = FUN_1437b97f0(local_58,local_30,&DAT_145b09b50);
  FUN_1437c29e0(uVar1,&local_78,4);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_58,local_30,&DAT_145b09b4c);
  FUN_1437c29e0(uVar1,&local_68,4);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437ca6a0 FUN_1437ca6a0 body=286 status=ok
// SIG undefined FUN_1437ca6a0(void)

void FUN_1437ca6a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_88,"searchParameters");
  FUN_1437bad30(uVar1,local_60);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"searchSphereRadius");
  uVar2 = FUN_1437b97f0(local_60,local_88,"searchSphereRadius");
  FUN_1437b87f0(uVar2,uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_88,"searchCapsuleRadius");
  uVar2 = FUN_1437b97f0(local_60,local_38,"searchCapsuleRadius");
  FUN_1437b87f0(uVar2,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  return;
}



// FUNCTION 1437ca7c0 FUN_1437ca7c0 body=417 status=ok
// SIG undefined FUN_1437ca7c0(void)

void FUN_1437ca7c0(longlong param_1,undefined2 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *local_res10;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  FUN_1437beb60(param_1,param_3);
  iVar8 = 0;
  local_res10 = param_2;
  if (0 < param_3) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar7 = (longlong)(iVar8 * *(int *)(param_1 + 0x24)) + *(longlong *)(param_1 + 0x18);
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0(lVar2);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      local_68 = lVar7;
      local_60 = lVar2;
      local_58 = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      lVar2 = local_60;
      local_50 = uVar3;
      local_48 = uVar1;
      if (local_68 != 0) {
        puVar5 = (undefined8 *)FUN_143714490(local_60,1);
        if (puVar5 == (undefined8 *)0x0) {
          bVar6 = 0;
        }
        else {
          bVar6 = (byte)*puVar5;
        }
        lVar7 = 0;
        if ((bVar6 & 0xf) == 7) {
          lVar7 = lVar2;
        }
        if (lVar7 != 0) {
          FUN_1437b9940(&local_68);
        }
      }
      if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      FUN_1437b8e40(&local_68,*local_res10);
      if ((local_58 & 1) != 0) {
        FUN_143733a60(local_58 & 0xfffffffffffffffe);
      }
      local_res10 = local_res10 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_3);
  }
  return;
}



// FUNCTION 1437ca970 FUN_1437ca970 body=934 status=ok
// SIG undefined FUN_1437ca970(void)

int FUN_1437ca970(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong lVar11;
  int local_res20;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  undefined1 local_a0 [40];
  undefined1 local_78 [56];
  
  bVar4 = false;
  iVar5 = FUN_1437bcb20();
  local_res20 = 0;
  if (0 < iVar5) {
    do {
      uVar7 = 0;
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar11 = (longlong)(local_res20 * *(int *)(param_1 + 0x24)) + *(longlong *)(param_1 + 0x18);
      if (lVar2 != 0) {
        uVar7 = FUN_1437151a0(lVar2);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x10);
      local_f0 = lVar11;
      local_e8 = lVar2;
      local_e0 = uVar7;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      lVar2 = local_e8;
      local_d8 = uVar9;
      local_d0 = uVar1;
      if (local_f0 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(local_e8);
        if (puVar8 == (undefined8 *)0x0) {
          bVar10 = 0;
        }
        else {
          bVar10 = (byte)*puVar8;
        }
        lVar11 = 0;
        if ((bVar10 & 0xf) == 7) {
          lVar11 = lVar2;
        }
        if (lVar11 != 0) {
          FUN_1437b9940(&local_f0);
        }
      }
      if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_f0,local_a0);
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      uVar9 = FUN_1437b97f0(local_a0,local_c8,"thisUid");
      iVar6 = FUN_1437b3cf0(uVar9);
      if (iVar6 == param_2) {
        bVar4 = true;
        uVar9 = FUN_1437b97f0(local_a0,&local_f0,"oppositeUid");
        iVar6 = FUN_1437b3cf0(uVar9);
        if (iVar6 != param_3) goto LAB_1437cab1b;
        bVar3 = true;
      }
      else {
LAB_1437cab1b:
        bVar3 = false;
      }
      if ((bVar4) && (bVar4 = false, (local_e0 & 1) != 0)) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      if ((local_b8 & 1) != 0) {
        FUN_143733a60(local_b8 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_a0);
      if (bVar3) {
        return local_res20;
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 < iVar5);
  }
  uVar7 = 0;
  FUN_1437beb60(param_1,iVar5 + 1);
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar11 = (longlong)(*(int *)(param_1 + 0x24) * iVar5) + *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    uVar7 = FUN_1437151a0(lVar2);
  }
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  local_f0 = lVar11;
  local_e8 = lVar2;
  local_e0 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  lVar2 = local_e8;
  local_d8 = uVar9;
  local_d0 = uVar1;
  if (local_f0 != 0) {
    puVar8 = (undefined8 *)FUN_143714490(local_e8);
    if (puVar8 == (undefined8 *)0x0) {
      bVar10 = 0;
    }
    else {
      bVar10 = (byte)*puVar8;
    }
    lVar11 = 0;
    if ((bVar10 & 0xf) == 7) {
      lVar11 = lVar2;
    }
    if (lVar11 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
    FUN_143733a60(uVar7 & 0xfffffffffffffffe);
  }
  FUN_1437bad30(&local_f0,local_78);
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  uVar9 = FUN_1437b97f0(local_78,local_c8,"thisUid");
  FUN_1437b8e40(uVar9,param_2);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar9 = FUN_1437b97f0(local_78,local_c8,"oppositeUid");
  FUN_1437b8e40(uVar9,param_3);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_78);
  return iVar5;
}



// FUNCTION 1437cad20 FUN_1437cad20 body=1028 status=ok
// SIG undefined FUN_1437cad20(void)

void FUN_1437cad20(undefined8 param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined2 local_res10;
  undefined2 local_res12;
  undefined2 local_res14;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 local_148;
  longlong lStack_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulonglong local_120;
  undefined8 local_118;
  longlong lStack_110;
  ulonglong local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  undefined1 local_90 [80];
  
  puVar3 = (undefined8 *)FUN_1437b97f0(param_1,local_b8,&DAT_145b136b4);
  puVar4 = (undefined8 *)FUN_14371d5c0(&local_148,&local_f8,&DAT_1467e5ab0);
  local_148 = *puVar4;
  lVar1 = puVar4[1];
  lStack_140 = lVar1;
  if (lVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1437151a0(lVar1);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_108 = 0;
  local_118 = 0;
  lStack_110 = 0;
  uVar11 = local_108;
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(lVar1,1);
    bVar2 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar4;
    }
    uVar11 = local_108;
    if ((bVar2 & 0xf) == 8) {
      local_118 = local_148;
      lStack_110 = lVar1;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar11 = uVar5;
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
    }
  }
  local_108 = uVar11;
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  local_120 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar2 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar4;
    }
    if ((bVar2 & 0xf) == 8) {
      local_130 = *puVar3;
      uStack_128 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_120 & 1) != 0) {
        FUN_143733a60(local_120 & 0xfffffffffffffffe);
      }
      local_120 = puVar3[2];
    }
  }
  iVar12 = 0;
  do {
    puVar3 = (undefined8 *)FUN_143741d50(&local_130,&local_148,iVar12);
    uVar5 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    if (puVar3[1] == 0) {
LAB_1437caf08:
      local_res20 = local_e8;
      uVar6 = uStack_e0;
    }
    else {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      bVar2 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar4;
      }
      if ((bVar2 & 0xf) != 5) goto LAB_1437caf08;
      local_res20 = *puVar3;
      uVar6 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar5 = puVar3[2];
    }
    if ((local_138 & 1) != 0) {
      FUN_143733a60(local_138 & 0xfffffffffffffffe);
    }
    puVar3 = (undefined8 *)FUN_143741d50(&local_118,&local_148,iVar12);
    uVar11 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uVar7 = uStack_c8;
    uVar10 = local_d0;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      bVar2 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar4;
      }
      uVar7 = uStack_c8;
      uVar10 = local_d0;
      if ((bVar2 & 0xf) == 5) {
        uVar10 = *puVar3;
        uVar7 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        uVar11 = puVar3[2];
      }
    }
    if ((local_138 & 1) != 0) {
      FUN_143733a60(local_138 & 0xfffffffffffffffe);
    }
    local_148 = 0;
    plVar8 = (longlong *)(uVar5 & 0xfffffffffffffffe);
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_res10,local_res20,uVar6,&local_148);
    plVar9 = (longlong *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x30))(plVar9,local_res18,uVar10,uVar7,local_148);
    if ((uVar11 & 1) != 0) {
      FUN_143733a60(plVar9);
    }
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(plVar8);
    }
    iVar12 = iVar12 + 1;
    if (3 < iVar12) {
      if ((local_120 & 1) != 0) {
        FUN_143733a60(local_120 & 0xfffffffffffffffe);
      }
      if ((local_108 & 1) != 0) {
        FUN_143733a60(local_108 & 0xfffffffffffffffe);
      }
      if ((local_a8 & 1) != 0) {
        FUN_143733a60(local_a8 & 0xfffffffffffffffe);
      }
      local_res10 = (undefined2)((uint)(-0x80000000 - (int)(local_f8 * -1.96608e+09)) >> 0x10);
      local_res12 = (undefined2)((uint)(-0x80000000 - (int)(local_f4 * -1.96608e+09)) >> 0x10);
      local_res14 = (undefined2)((uint)(-0x80000000 - (int)(local_f0 * -1.96608e+09)) >> 0x10);
      uVar6 = FUN_1437b97f0(param_1,local_b8,"new_up");
      FUN_1437bac00(uVar6,local_90);
      if ((local_a8 & 1) != 0) {
        FUN_143733a60(local_a8 & 0xfffffffffffffffe);
      }
      FUN_1437ca7c0(local_90,&local_res10,3);
      return;
    }
  } while( true );
}



// FUNCTION 1437cb130 FUN_1437cb130 body=860 status=ok
// SIG undefined FUN_1437cb130(void)

void FUN_1437cb130(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145be3a60);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3a88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145be3ab0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145be3ad8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverMovementPrope_145be3b00);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3b28);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3b50);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3b78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145be3bc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3be8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3c10);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3c38);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3c60);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3c88);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3cb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiUserEdgeUtilsUserEdgeSetup_145be3cd8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_145be3d00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_145be3d28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollectionInstanceI_145be3d50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderInstanceLo_145be3d78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderGraphLoade_145be3da0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145be3dc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145be3df0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCostExt_145be3e18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderSilhouette_145be3e40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3e68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be3e90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145be3eb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderWorldConne_145be3ee0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderVolumeLoad_145be3f08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollectionInstanceI_145be3f30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManager_145be3f58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingManagerSectionInfo_145be3f80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeExternalEdgeInfo_145be3fa8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145be3fd0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCostNod_145be3ff8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiUserEdgeUtilsUserEdgePair_145be4020);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumePathSearchParameter_145be4048);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPlaneVolume_145be4070);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145be4098);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteeringInput_145be40c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverMovementPrope_145be40e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPlaneVolume_145be4110);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145be4138);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be4160);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be41b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be41d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be4228);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145be4278);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145be42a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145be42c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145be42f0);
                    /* WARNING: Could not recover jumptable at 0x0001437cb488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldCharacterStepCallbackCo_145be4318);
  return;
}



// FUNCTION 1437cb490 FUN_1437cb490 body=3594 status=ok
// SIG undefined FUN_1437cb490(void)

void FUN_1437cb490(undefined8 param_1,char param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  longlong lVar15;
  bool bVar16;
  int local_res18;
  longlong local_288;
  longlong local_280;
  ulonglong local_278;
  undefined8 local_270;
  undefined4 local_268;
  int local_260;
  undefined1 local_258 [16];
  ulonglong local_248;
  char *local_230;
  undefined1 local_228 [16];
  ulonglong local_218;
  undefined1 local_200 [16];
  undefined8 local_1f0;
  longlong local_1e8;
  int local_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8 [40];
  char *local_1a0;
  char *local_198;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  undefined1 local_170 [40];
  undefined1 local_148 [40];
  undefined1 local_120 [16];
  undefined8 local_110;
  longlong local_108;
  int local_fc;
  longlong local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong local_d0;
  int local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong local_98;
  int local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  int local_54;
  longlong local_50;
  undefined4 local_48;
  
  bVar16 = param_2 != '\0';
  pcVar13 = "cells";
  if (bVar16) {
    pcVar13 = "nodes";
  }
  pcVar14 = "cellIndex";
  if (bVar16) {
    pcVar14 = "nodeIndex";
  }
  local_230 = "oppositeCell";
  local_1a0 = "edgeIndex";
  if (bVar16) {
    local_1a0 = "edgeKey";
  }
  local_198 = "oppositeUid";
  if (bVar16) {
    local_198 = "targetUid";
  }
  local_190 = "volumeConnections";
  if (bVar16) {
    local_190 = "graphConnections";
  }
  local_180 = "oppositeCellIndex";
  if (bVar16) {
    local_180 = "oppositeNodeIndex";
    local_230 = "target";
  }
  local_178 = "startEdgeIndex";
  if (bVar16) {
    local_178 = "edgeStartIndex";
  }
  local_188 = pcVar14;
  uVar7 = FUN_1437b97f0(param_1,local_258,"sectionUid");
  uVar3 = FUN_1437b3cf0(uVar7);
  if ((local_248 & 1) != 0) {
    FUN_143733a60(local_248 & 0xfffffffffffffffe);
  }
  uVar7 = FUN_1437b97f0(param_1,local_258,pcVar13);
  FUN_1437bac00(uVar7,local_b0);
  if ((local_248 & 1) != 0) {
    FUN_143733a60(local_248 & 0xfffffffffffffffe);
  }
  uVar7 = FUN_1437b97f0(param_1,local_258,"edges");
  FUN_1437bac00(uVar7,local_200);
  if ((local_248 & 1) != 0) {
    FUN_143733a60(local_248 & 0xfffffffffffffffe);
  }
  uVar7 = FUN_1437b97f0(param_1,local_258,"externalEdges");
  FUN_1437bac00(uVar7,local_e8);
  if ((local_248 & 1) != 0) {
    FUN_143733a60(local_248 & 0xfffffffffffffffe);
  }
  uVar7 = FUN_1437b97f0(param_1,local_258,"streamingSets");
  FUN_1437bac00(uVar7,local_78);
  if ((local_248 & 1) != 0) {
    FUN_143733a60(local_248 & 0xfffffffffffffffe);
  }
  local_res18 = 0;
  iVar4 = FUN_1437bcb20(local_e8);
  if (0 < iVar4) {
    do {
      lVar1 = local_c0;
      lVar15 = local_c4 * local_res18 + local_d0;
      if (local_c0 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1437151a0(local_c0);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar5 = local_b8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar7 = local_d8;
      local_280 = lVar1;
      local_288 = lVar15;
      local_278 = uVar8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      lVar1 = local_280;
      local_270 = uVar7;
      local_268 = uVar5;
      if (local_288 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(local_280,1);
        if (puVar9 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar9;
        }
        lVar15 = 0;
        if ((bVar11 & 0xf) == 7) {
          lVar15 = lVar1;
        }
        if (lVar15 != 0) {
          FUN_1437b9940(&local_288);
        }
      }
      if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
        FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_288,local_1c8);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_1c8,local_258,pcVar14);
      local_260 = FUN_1437b3cf0(uVar7);
      if ((local_248 & 1) != 0) {
        FUN_143733a60(local_248 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_1c8,local_258,local_1a0);
      iVar4 = FUN_1437b3cf0(uVar7);
      if ((local_248 & 1) != 0) {
        FUN_143733a60(local_248 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_1c8,local_258,local_198);
      uVar5 = FUN_1437b3cf0(uVar7);
      if ((local_248 & 1) != 0) {
        FUN_143733a60(local_248 & 0xfffffffffffffffe);
      }
      lVar1 = local_1d8;
      lVar15 = local_1dc * iVar4 + local_1e8;
      if (local_1d8 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1437151a0(local_1d8);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar2 = local_1d0;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar7 = local_1f0;
      local_280 = lVar1;
      local_288 = lVar15;
      local_278 = uVar8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      lVar1 = local_280;
      local_270 = uVar7;
      local_268 = uVar2;
      if (local_288 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(local_280,1);
        if (puVar9 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar9;
        }
        lVar15 = 0;
        if ((bVar11 & 0xf) == 7) {
          lVar15 = lVar1;
        }
        if (lVar15 != 0) {
          FUN_1437b9940(&local_288);
        }
      }
      if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
        FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_288,local_170);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      iVar4 = FUN_1437ca970(local_78,uVar3,uVar5);
      lVar1 = local_50;
      lVar15 = local_54 * iVar4 + local_60;
      if (local_50 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1437151a0(local_50);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar5 = local_48;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar7 = local_68;
      local_280 = lVar1;
      local_288 = lVar15;
      local_278 = uVar8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      lVar1 = local_280;
      local_270 = uVar7;
      local_268 = uVar5;
      if (local_288 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(local_280,1);
        if (puVar9 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar9;
        }
        lVar15 = 0;
        if ((bVar11 & 0xf) == 7) {
          lVar15 = lVar1;
        }
        if (lVar15 != 0) {
          FUN_1437b9940(&local_288);
        }
      }
      if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
        FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_288,local_258);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_258,&local_288,local_190);
      FUN_1437bac00(uVar7,local_120);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      iVar4 = FUN_1437bcb20(local_120);
      FUN_1437beb60(local_120,iVar4 + 1);
      lVar1 = local_f8;
      lVar15 = local_fc * iVar4 + local_108;
      if (local_f8 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1437151a0(local_f8);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar5 = local_f0;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar7 = local_110;
      local_280 = lVar1;
      local_288 = lVar15;
      local_278 = uVar8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      lVar1 = local_280;
      local_270 = uVar7;
      local_268 = uVar5;
      if (local_288 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(local_280,1);
        if (puVar9 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar9;
        }
        lVar15 = 0;
        if ((bVar11 & 0xf) == 7) {
          lVar15 = lVar1;
        }
        if (lVar15 != 0) {
          FUN_1437b9940(&local_288);
        }
      }
      if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
        FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_288,local_148);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      pcVar14 = local_188;
      uVar7 = FUN_1437b97f0(local_148,&local_288,local_188);
      FUN_1437b8e40(uVar7,local_260);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      pcVar13 = local_230;
      uVar7 = FUN_1437b97f0(local_170,local_228,local_230);
      uVar10 = FUN_1437b97f0(local_148,&local_288,local_180);
      FUN_1437b87f0(uVar10,uVar7);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      if ((local_218 & 1) != 0) {
        FUN_143733a60(local_218 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_170,local_228,pcVar13);
      FUN_1437b8e40(uVar7,0xffffffff);
      if ((local_218 & 1) != 0) {
        FUN_143733a60(local_218 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_148);
      FUN_1437b87d0(local_258);
      FUN_1437b87d0(local_170);
      FUN_1437b87d0(local_1c8);
      local_res18 = local_res18 + 1;
      iVar4 = FUN_1437bcb20(local_e8);
    } while (local_res18 < iVar4);
  }
  iVar12 = 0;
  local_260 = 0;
  iVar4 = FUN_1437bcb20(local_b0);
  if (0 < iVar4) {
    do {
      lVar1 = local_88;
      lVar15 = local_8c * iVar12 + local_98;
      if (local_88 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_1437151a0(local_88);
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar3 = local_80;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar7 = local_a0;
      local_280 = lVar1;
      local_288 = lVar15;
      local_278 = uVar8;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      lVar1 = local_280;
      local_270 = uVar7;
      local_268 = uVar3;
      if (local_288 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(local_280,1);
        if (puVar9 == (undefined8 *)0x0) {
          bVar11 = 0;
        }
        else {
          bVar11 = (byte)*puVar9;
        }
        lVar15 = 0;
        if ((bVar11 & 0xf) == 7) {
          lVar15 = lVar1;
        }
        if (lVar15 != 0) {
          FUN_1437b9940(&local_288);
        }
      }
      if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
        FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_288,local_148);
      if ((local_278 & 1) != 0) {
        FUN_143733a60(local_278 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_148,local_228,local_178);
      iVar4 = FUN_1437b3cf0(uVar7);
      if ((local_218 & 1) != 0) {
        FUN_143733a60(local_218 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_148,local_228,"numEdges");
      local_res18 = FUN_1437b3cf0(uVar7);
      if ((local_218 & 1) != 0) {
        FUN_143733a60(local_218 & 0xfffffffffffffffe);
      }
      lVar1 = local_1d8;
      for (iVar12 = iVar4 + -1 + local_res18; local_1d8 = lVar1, iVar4 <= iVar12;
          iVar12 = iVar12 + -1) {
        lVar15 = local_1dc * iVar12 + local_1e8;
        if (lVar1 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_1437151a0(lVar1);
        }
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
        uVar3 = local_1d0;
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
        uVar7 = local_1f0;
        local_288 = lVar15;
        local_280 = lVar1;
        local_278 = uVar8;
        if ((uVar8 & 1) != 0) {
          FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
        }
        lVar1 = local_280;
        local_270 = uVar7;
        local_268 = uVar3;
        if (local_288 != 0) {
          puVar9 = (undefined8 *)FUN_143714490(local_280,1);
          if (puVar9 == (undefined8 *)0x0) {
            bVar11 = 0;
          }
          else {
            bVar11 = (byte)*puVar9;
          }
          lVar15 = 0;
          if ((bVar11 & 0xf) == 7) {
            lVar15 = lVar1;
          }
          if (lVar15 != 0) {
            FUN_1437b9940(&local_288);
          }
        }
        if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
          FUN_143733a60(uVar8 & 0xfffffffffffffffe);
        }
        FUN_1437bad30(&local_288,local_1c8);
        if ((local_278 & 1) != 0) {
          FUN_143733a60(local_278 & 0xfffffffffffffffe);
        }
        uVar7 = FUN_1437b97f0(local_1c8,local_228,local_230);
        iVar6 = FUN_1437b3cf0(uVar7);
        if ((local_218 & 1) != 0) {
          FUN_143733a60(local_218 & 0xfffffffffffffffe);
        }
        lVar1 = local_1d8;
        if (iVar6 == -1) {
          lVar15 = (local_res18 + -1 + iVar4) * local_1dc + local_1e8;
          if (local_1d8 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_1437151a0(local_1d8);
          }
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          uVar3 = local_1d0;
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          uVar7 = local_1f0;
          local_280 = lVar1;
          local_288 = lVar15;
          local_278 = uVar8;
          if ((uVar8 & 1) != 0) {
            FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
          }
          lVar1 = local_280;
          local_270 = uVar7;
          local_268 = uVar3;
          if (local_288 != 0) {
            puVar9 = (undefined8 *)FUN_143714490(local_280,1);
            if (puVar9 == (undefined8 *)0x0) {
              bVar11 = 0;
            }
            else {
              bVar11 = (byte)*puVar9;
            }
            lVar15 = 0;
            if ((bVar11 & 0xf) == 7) {
              lVar15 = lVar1;
            }
            if (lVar15 != 0) {
              FUN_1437b9940(&local_288);
            }
          }
          if (((uVar8 & 1) != 0) && (FUN_143733a60(uVar8 & 0xfffffffffffffffe), (uVar8 & 1) != 0)) {
            FUN_143733a60(uVar8 & 0xfffffffffffffffe);
          }
          FUN_1437bad30(&local_288,local_170);
          if ((local_278 & 1) != 0) {
            FUN_143733a60(local_278 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_170,local_258,local_230);
          uVar10 = FUN_1437b97f0(local_1c8,local_228,local_230);
          FUN_1437b87f0(uVar10,uVar7);
          if ((local_218 & 1) != 0) {
            FUN_143733a60(local_218 & 0xfffffffffffffffe);
          }
          if ((local_248 & 1) != 0) {
            FUN_143733a60(local_248 & 0xfffffffffffffffe);
          }
          uVar7 = FUN_1437b97f0(local_170,local_258,"flags");
          uVar10 = FUN_1437b97f0(local_1c8,local_228,"flags");
          FUN_1437b87f0(uVar10,uVar7);
          if ((local_218 & 1) != 0) {
            FUN_143733a60(local_218 & 0xfffffffffffffffe);
          }
          if ((local_248 & 1) != 0) {
            FUN_143733a60(local_248 & 0xfffffffffffffffe);
          }
          if (param_2 != '\0') {
            uVar7 = FUN_1437b97f0(local_170,local_258,&DAT_145bb8b68);
            uVar10 = FUN_1437b97f0(local_1c8,local_228,&DAT_145bb8b68);
            FUN_1437b87f0(uVar10,uVar7);
            if ((local_218 & 1) != 0) {
              FUN_143733a60(local_218 & 0xfffffffffffffffe);
            }
            if ((local_248 & 1) != 0) {
              FUN_143733a60(local_248 & 0xfffffffffffffffe);
            }
          }
          local_res18 = local_res18 + -1;
          FUN_1437b87d0(local_170);
        }
        FUN_1437b87d0(local_1c8);
        lVar1 = local_1d8;
      }
      uVar7 = FUN_1437b97f0(local_148,local_228,"numEdges");
      FUN_1437b8e40(uVar7,local_res18);
      if ((local_218 & 1) != 0) {
        FUN_143733a60(local_218 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_148);
      iVar12 = local_260 + 1;
      local_260 = iVar12;
      iVar4 = FUN_1437bcb20(local_b0);
    } while (iVar12 < iVar4);
  }
  return;
}



// FUNCTION 1437cc2a0 FUN_1437cc2a0 body=363 status=ok
// SIG undefined FUN_1437cc2a0(void)

void FUN_1437cc2a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined1 local_80 [16];
  ulonglong local_70;
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  uVar1 = FUN_1437b97f0(param_1,local_a8,"friction_tmp");
  FUN_1437bad30(uVar1,local_30);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_80,"friction");
  uVar2 = FUN_1437b3cf0(uVar1);
  uVar1 = FUN_1437b97f0(local_30,local_a8,"value");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_80,"maxImpulse_tmp");
  FUN_1437bad30(uVar1,local_58);
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_a8,"maxImpulse");
  uVar2 = FUN_1437b3cf0(uVar1);
  uVar1 = FUN_1437b97f0(local_58,local_80,"value");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_58);
  FUN_1437b87d0(local_30);
  return;
}



// FUNCTION 1437cc410 FUN_1437cc410 body=363 status=ok
// SIG undefined FUN_1437cc410(void)

void FUN_1437cc410(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined1 local_80 [16];
  ulonglong local_70;
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  uVar1 = FUN_1437b97f0(param_1,local_a8,"maxLinearVelocity_tmp");
  FUN_1437bad30(uVar1,local_30);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_80,"maxLinearVelocity");
  uVar2 = FUN_1437b3cf0(uVar1);
  uVar1 = FUN_1437b97f0(local_30,local_a8,"value");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_80,"maxAngularVelocity_tmp");
  FUN_1437bad30(uVar1,local_58);
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_a8,"maxAngularVelocity");
  uVar2 = FUN_1437b3cf0(uVar1);
  uVar1 = FUN_1437b97f0(local_58,local_80,"value");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_58);
  FUN_1437b87d0(local_30);
  return;
}



// FUNCTION 1437cc580 FUN_1437cc580 body=108 status=ok
// SIG undefined FUN_1437cc580(void)

void FUN_1437cc580(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxLight_145be4800);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be4828);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkContactPointMaterial_145be4850);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMotionState_145be4890);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexDescriptionElementDecl_145be48b8);
                    /* WARNING: Could not recover jumptable at 0x0001437cc5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMeshSection_145be48e0);
  return;
}



// FUNCTION 1437cc600 FUN_1437cc600 body=55 status=ok
// SIG undefined FUN_1437cc600(void)

void FUN_1437cc600(undefined8 param_1)

{
  FUN_1437cc990(param_1,"faces","faceData");
  FUN_1437cc990(param_1,"edges","edgeData");
  return;
}



// FUNCTION 1437cc640 SerializeUserSettings body=99 status=ok
// SIG undefined SerializeUserSettings(void)

void FGenericCrashContext::SerializeUserSettings(undefined8 param_1)

{
  FUN_1437cc990(param_1,"ownedFaces","ownedFaceData");
  FUN_1437cc990(param_1,"ownedEdges","ownedEdgeData");
  FUN_1437cc990(param_1,"instancedFaces","instancedFaceData");
  FUN_1437cc990(param_1,"instancedEdges","instancedEdgeData");
  return;
}



// FUNCTION 1437cc6b0 FUN_1437cc6b0 body=350 status=ok
// SIG undefined FUN_1437cc6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437cc6b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  uVar1 = FUN_1437b97f0(param_1,local_40,"localSensorAabb");
  FUN_1437bad30(uVar1,local_68);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  local_78 = _DAT_1467f0730;
  fStack_74 = fRam00000001467f0734;
  fStack_70 = fRam00000001467f0738;
  fStack_6c = fRam00000001467f073c;
  local_88 = 0.0 - _DAT_1467f0730;
  fStack_84 = 0.0 - fRam00000001467f0734;
  fStack_80 = 0.0 - fRam00000001467f0738;
  fStack_7c = 0.0 - fRam00000001467f073c;
  uVar1 = FUN_1437b97f0(local_68,local_40,&DAT_145b09b50);
  FUN_1437c29e0(uVar1,&local_88,4);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_68,local_40,&DAT_145b09b4c);
  FUN_1437c29e0(uVar1,&local_78,4);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_40,"wallFollowingFactor");
  uVar2 = FUN_1437bafb0(uVar1);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437ccd30(uVar2);
  uVar1 = FUN_1437b97f0(param_1,local_40,"wallFollowingAngle");
  FUN_1437b91e0(uVar1,uVar2);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_68);
  return;
}



// FUNCTION 1437cc810 FUN_1437cc810 body=133 status=ok
// SIG undefined FUN_1437cc810(void)

void FUN_1437cc810(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar1 = FUN_1437b97f0(param_1,local_48,"wallFollowingFactor");
  uVar2 = FUN_1437bafb0(uVar1);
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437ccd30(uVar2);
  uVar1 = FUN_1437b97f0(param_1,local_48,"wallFollowingAngle");
  FUN_1437b91e0(uVar1,uVar2);
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437cc8a0 FUN_1437cc8a0 body=238 status=ok
// SIG undefined FUN_1437cc8a0(void)

void FUN_1437cc8a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = FUN_1437b97f0(param_1,local_30,&DAT_145bb9f40);
  uVar2 = FUN_1437b3cf0(uVar1);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_30,"facePersistent");
  FUN_1437bad30(uVar1,local_58);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_58,local_30,&DAT_145b4e200);
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_58,local_30,"offset");
  FUN_1437b8e40(uVar1,0xffffffff);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437cc990 FUN_1437cc990 body=150 status=ok
// SIG undefined FUN_1437cc990(void)

void FUN_1437cc990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined1 local_80 [56];
  undefined1 local_48 [64];
  
  uVar1 = FUN_1437b97f0(param_1,local_a8,param_2);
  FUN_1437bac00(uVar1,local_48);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_a8,param_3);
  FUN_1437bac00(uVar1,local_80);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  FUN_1437cca30(local_48,local_80);
  return;
}



// FUNCTION 1437cca30 FUN_1437cca30 body=768 status=ok
// SIG undefined FUN_1437cca30(void)

void FUN_1437cca30(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  int local_res18;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [40];
  undefined1 local_78 [16];
  ulonglong local_68;
  
  uVar3 = FUN_1437bcb20();
  FUN_1437beb60(param_2,uVar3);
  iVar4 = FUN_1437bcb20(param_1);
  local_res18 = 0;
  if (0 < iVar4) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar9 = (longlong)(local_res18 * *(int *)(param_1 + 0x24)) + *(longlong *)(param_1 + 0x18);
      if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar2);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x30);
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      local_c8 = lVar9;
      local_c0 = lVar2;
      local_b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar2 = local_c0;
      local_b0 = uVar7;
      local_a8 = uVar3;
      if (local_c8 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_c0,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar8 & 0xf) == 7) {
          lVar9 = lVar2;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_c8);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_c8,local_a0);
      if ((local_b8 & 1) != 0) {
        FUN_143733a60(local_b8 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_1437b97f0(local_a0,local_78,&DAT_145b138b0);
      uVar3 = FUN_1437b3cf0(uVar7);
      lVar2 = *(longlong *)(param_2 + 0x28);
      lVar9 = (longlong)(*(int *)(param_2 + 0x24) * local_res18) + *(longlong *)(param_2 + 0x18);
      if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar2);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar1 = *(undefined4 *)(param_2 + 0x30);
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      local_c8 = lVar9;
      local_c0 = lVar2;
      local_b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar2 = local_c0;
      local_b0 = uVar7;
      local_a8 = uVar1;
      if (local_c8 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_c0,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = (byte)*puVar6;
        }
        lVar9 = 0;
        if ((bVar8 & 0xf) == 7) {
          lVar9 = lVar2;
        }
        if (lVar9 != 0) {
          FUN_1437b9940(&local_c8);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b8e40(&local_c8,uVar3);
      if ((local_b8 & 1) != 0) {
        FUN_143733a60(local_b8 & 0xfffffffffffffffe);
      }
      if ((local_68 & 1) != 0) {
        FUN_143733a60(local_68 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_a0);
      local_res18 = local_res18 + 1;
    } while (local_res18 < iVar4);
  }
  return;
}



// FUNCTION 1437ccd30 FUN_1437ccd30 body=87 status=ok
// SIG undefined FUN_1437ccd30(void)

undefined8 FUN_1437ccd30(float param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 local_18 [16];
  
  fVar3 = 1.0 - param_1 * 0.5;
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = fVar3, 1.0 <= fVar3)) {
    fVar2 = 1.0;
  }
  local_18 = ZEXT416((uint)fVar2);
  uVar1 = FUN_143715de0(local_18);
  return CONCAT44(1.5707964 - (float)((ulonglong)uVar1 >> 0x20),1.5707964 - (float)uVar1);
}



// FUNCTION 1437ccd90 FUN_1437ccd90 body=684 status=ok
// SIG undefined FUN_1437ccd90(void)

void FUN_1437ccd90(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAstarOutputParameters_145be7098);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathFollowingProperties_145be70c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverMovementPrope_145be70e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145be7110);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteeringInput_145be7138);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145be7160);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_145be7188);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145be71b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshFace_145be71d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7200);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145be7228);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145be7250);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7278);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be72a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be72d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgePathEdge_145be7300);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7328);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7350);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7378);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be73c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145be73e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldCharacterStepSerializab_145be7410);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPointCloudSilhouetteGenerato_145be7438);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7460);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgeGeometryFace_145be74b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be74d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7520);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultNavMeshCostModifier_145be7548);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilInputBase_145be7570);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145be7598);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsEx_145be75c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCostModifier_145be75e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultNavMeshCostModifier_145be7628);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultNavVolumeCostModifier_145be7670);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeCostModifier_145be7698);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultAstarEdgeFilter_145be76c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumePathSearchParameter_145be76e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7710);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be7738);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsOve_145be7780);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsReg_145be77a8);
                    /* WARNING: Could not recover jumptable at 0x0001437cd038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145be77d0);
  return;
}



// FUNCTION 1437cd040 FUN_1437cd040 body=2659 status=ok
// SIG undefined FUN_1437cd040(void)

void FUN_1437cd040(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int local_res10 [2];
  int local_res18;
  undefined1 local_res20 [8];
  undefined8 local_278;
  longlong local_270;
  longlong lStack_268;
  ulonglong local_260;
  longlong local_258;
  longlong lStack_250;
  ulonglong local_248;
  longlong local_240;
  longlong lStack_238;
  ulonglong local_230;
  longlong local_228;
  longlong local_220;
  ulonglong local_218;
  undefined8 local_210;
  undefined4 local_208;
  longlong local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  int local_1e0;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  longlong local_1b0;
  int local_1a4;
  longlong local_1a0;
  int local_198;
  undefined1 local_190 [16];
  ulonglong local_180;
  undefined1 local_168 [16];
  ulonglong local_158;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  ulonglong local_80;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  
  uVar3 = FUN_1437b97f0(param_1,local_190,"localFromRootTransforms_old");
  FUN_1437bac00(uVar3,local_c8);
  if ((local_180 & 1) != 0) {
    FUN_143733a60(local_180 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_1437b97f0(param_1,local_190,"localFromRootTransforms");
  FUN_1437bac00(uVar3,local_1c8);
  if ((local_180 & 1) != 0) {
    FUN_143733a60(local_180 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_1437bcb20(local_c8);
  local_res18 = iVar2;
  FUN_1437beb60(local_1c8,iVar2 * 2);
  local_res10[0] = 0;
  if (0 < iVar2) {
    do {
      lVar12 = local_a0;
      lVar14 = local_a4 * local_res10[0] + local_b0;
      if (local_a0 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0(local_a0);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      uVar1 = local_98;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      uVar3 = local_b8;
      local_220 = lVar12;
      local_228 = lVar14;
      local_218 = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      lVar12 = local_220;
      local_210 = uVar3;
      local_208 = uVar1;
      if (local_228 != 0) {
        puVar5 = (undefined8 *)FUN_143714490(local_220,1);
        if (puVar5 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar5;
        }
        lVar14 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar14 = lVar12;
        }
        if (lVar14 != 0) {
          FUN_1437b9940(&local_228);
        }
      }
      if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_228,local_190);
      if ((local_218 & 1) != 0) {
        FUN_143733a60(local_218 & 0xfffffffffffffffe);
      }
      plVar6 = (longlong *)FUN_1437b97f0(local_190,local_90,"rotation");
      plVar7 = (longlong *)FUN_14371d5c0(local_68,local_148,&DAT_1467e5ab0);
      local_240 = *plVar7;
      lVar12 = plVar7[1];
      lStack_238 = lVar12;
      if (lVar12 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0(lVar12);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      local_248 = 0;
      local_258 = 0;
      lStack_250 = 0;
      uVar13 = local_248;
      if (lVar12 != 0) {
        puVar5 = (undefined8 *)FUN_143714490(lVar12,1);
        bVar9 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar5;
        }
        uVar13 = local_248;
        if ((bVar9 & 0xf) == 8) {
          local_258 = local_240;
          lStack_250 = lVar12;
          if ((uVar4 & 1) != 0) {
            FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
          }
          uVar13 = uVar4;
          if ((local_248 & 1) != 0) {
            FUN_143733a60(local_248 & 0xfffffffffffffffe);
          }
        }
      }
      local_248 = uVar13;
      if ((uVar4 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      local_260 = 0;
      local_270 = 0;
      lStack_268 = 0;
      if (plVar6[1] != 0) {
        puVar5 = (undefined8 *)FUN_143714490(plVar6[1],1);
        bVar9 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar5;
        }
        if ((bVar9 & 0xf) == 8) {
          local_270 = *plVar6;
          lStack_268 = plVar6[1];
          if ((*(byte *)(plVar6 + 2) & 1) != 0) {
            FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
          }
          if ((local_260 & 1) != 0) {
            FUN_143733a60(local_260 & 0xfffffffffffffffe);
          }
          local_260 = plVar6[2];
        }
      }
      iVar2 = 0;
      do {
        puVar5 = (undefined8 *)FUN_143741d50(&local_270,local_168,iVar2);
        uVar4 = 0;
        local_128 = 0;
        uStack_120 = 0;
        if (puVar5[1] == 0) {
LAB_1437cd3f9:
          local_278 = local_128;
          uVar3 = uStack_120;
        }
        else {
          puVar8 = (undefined8 *)FUN_143714490(puVar5[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          if ((bVar9 & 0xf) != 5) goto LAB_1437cd3f9;
          local_278 = *puVar5;
          uVar3 = puVar5[1];
          if ((*(byte *)(puVar5 + 2) & 1) != 0) {
            FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
          }
          uVar4 = puVar5[2];
        }
        if ((local_158 & 1) != 0) {
          FUN_143733a60(local_158 & 0xfffffffffffffffe);
        }
        puVar5 = (undefined8 *)FUN_143741d50(&local_258,&local_228,iVar2);
        uVar13 = 0;
        local_110 = 0;
        uStack_108 = 0;
        uVar10 = uStack_108;
        uVar11 = local_110;
        if (puVar5[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(puVar5[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          uVar10 = uStack_108;
          uVar11 = local_110;
          if ((bVar9 & 0xf) == 5) {
            uVar11 = *puVar5;
            uVar10 = puVar5[1];
            if ((*(byte *)(puVar5 + 2) & 1) != 0) {
              FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
            }
            uVar13 = puVar5[2];
          }
        }
        if ((local_218 & 1) != 0) {
          FUN_143733a60(local_218 & 0xfffffffffffffffe);
        }
        local_240 = 0;
        plVar6 = (longlong *)(uVar4 & 0xfffffffffffffffe);
        (**(code **)(*plVar6 + 0x38))(plVar6,local_res20,local_278,uVar3,&local_240);
        plVar7 = (longlong *)(uVar13 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x30))(plVar7,local_1d8,uVar11,uVar10,local_240);
        if ((uVar13 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        if ((uVar4 & 1) != 0) {
          FUN_143733a60(plVar6);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      if ((local_260 & 1) != 0) {
        FUN_143733a60(local_260 & 0xfffffffffffffffe);
      }
      if ((local_248 & 1) != 0) {
        FUN_143733a60(local_248 & 0xfffffffffffffffe);
      }
      lVar12 = local_1a0;
      lVar14 = local_1a4 * local_res10[0] * 2 + local_1b0;
      if (local_1a0 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0(local_1a0);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      iVar2 = local_198;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      uVar3 = local_1b8;
      local_1f8 = lVar12;
      local_200 = lVar14;
      local_1f0 = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      lVar12 = local_1f8;
      local_1e8 = uVar3;
      local_1e0 = iVar2;
      if (local_200 != 0) {
        puVar5 = (undefined8 *)FUN_143714490(local_1f8,1);
        if (puVar5 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar5;
        }
        lVar14 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar14 = lVar12;
        }
        if (lVar14 != 0) {
          FUN_1437b9940(&local_200);
        }
      }
      if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      FUN_1437c29e0(&local_200,local_148,4);
      if ((local_1f0 & 1) != 0) {
        FUN_143733a60(local_1f0 & 0xfffffffffffffffe);
      }
      if ((local_80 & 1) != 0) {
        FUN_143733a60(local_80 & 0xfffffffffffffffe);
      }
      plVar6 = (longlong *)FUN_1437b97f0(local_190,local_90,"translation");
      plVar7 = (longlong *)FUN_14371d5c0(local_58,local_138,&DAT_1467e5ab0);
      local_240 = *plVar7;
      lVar12 = plVar7[1];
      lStack_238 = lVar12;
      if (lVar12 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0(lVar12);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      local_260 = 0;
      local_270 = 0;
      lStack_268 = 0;
      uVar13 = local_260;
      if (lVar12 != 0) {
        puVar5 = (undefined8 *)FUN_143714490(lVar12,1);
        bVar9 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar5;
        }
        uVar13 = local_260;
        if ((bVar9 & 0xf) == 8) {
          local_270 = local_240;
          lStack_268 = lVar12;
          if ((uVar4 & 1) != 0) {
            FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
          }
          uVar13 = uVar4;
          if ((local_260 & 1) != 0) {
            FUN_143733a60(local_260 & 0xfffffffffffffffe);
          }
        }
      }
      local_260 = uVar13;
      if ((uVar4 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      local_248 = 0;
      local_258 = 0;
      lStack_250 = 0;
      if (plVar6[1] != 0) {
        puVar5 = (undefined8 *)FUN_143714490(plVar6[1],1);
        bVar9 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar5;
        }
        if ((bVar9 & 0xf) == 8) {
          local_258 = *plVar6;
          lStack_250 = plVar6[1];
          if ((*(byte *)(plVar6 + 2) & 1) != 0) {
            FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
          }
          if ((local_248 & 1) != 0) {
            FUN_143733a60(local_248 & 0xfffffffffffffffe);
          }
          local_248 = plVar6[2];
        }
      }
      iVar2 = 0;
      do {
        plVar6 = (longlong *)FUN_143741d50(&local_258,&local_228,iVar2);
        uVar4 = 0;
        local_f8 = 0;
        lStack_f0 = 0;
        if (plVar6[1] == 0) {
LAB_1437cd829:
          local_240 = local_f8;
          lVar12 = lStack_f0;
        }
        else {
          puVar5 = (undefined8 *)FUN_143714490(plVar6[1],1);
          bVar9 = 0;
          if (puVar5 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar5;
          }
          if ((bVar9 & 0xf) != 5) goto LAB_1437cd829;
          local_240 = *plVar6;
          lVar12 = plVar6[1];
          if ((*(byte *)(plVar6 + 2) & 1) != 0) {
            FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
          }
          uVar4 = plVar6[2];
        }
        if ((local_218 & 1) != 0) {
          FUN_143733a60(local_218 & 0xfffffffffffffffe);
        }
        puVar5 = (undefined8 *)FUN_143741d50(&local_270,local_168,iVar2);
        uVar13 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        uVar11 = uStack_d8;
        uVar3 = local_e0;
        if (puVar5[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(puVar5[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          uVar11 = uStack_d8;
          uVar3 = local_e0;
          if ((bVar9 & 0xf) == 5) {
            uVar3 = *puVar5;
            uVar11 = puVar5[1];
            if ((*(byte *)(puVar5 + 2) & 1) != 0) {
              FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
            }
            uVar13 = puVar5[2];
          }
        }
        if ((local_158 & 1) != 0) {
          FUN_143733a60(local_158 & 0xfffffffffffffffe);
        }
        local_278 = 0;
        plVar6 = (longlong *)(uVar4 & 0xfffffffffffffffe);
        (**(code **)(*plVar6 + 0x38))(plVar6,local_1d4,local_240,lVar12,&local_278);
        plVar7 = (longlong *)(uVar13 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x30))(plVar7,local_1d0,uVar3,uVar11,local_278);
        if ((uVar13 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        if ((uVar4 & 1) != 0) {
          FUN_143733a60(plVar6);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      if ((local_248 & 1) != 0) {
        FUN_143733a60(local_248 & 0xfffffffffffffffe);
      }
      if ((local_260 & 1) != 0) {
        FUN_143733a60(local_260 & 0xfffffffffffffffe);
      }
      lVar12 = local_1a0;
      iVar2 = local_res10[0];
      lVar14 = (local_res10[0] * 2 + 1) * local_1a4 + local_1b0;
      if (local_1a0 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0(local_1a0);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      local_res10[0] = local_198;
      lStack_238 = lVar12;
      local_240 = lVar14;
      local_230 = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_200,&local_240,local_1b8,local_res10);
      if ((uVar4 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      FUN_1437c29e0(&local_200,local_138,4);
      if ((local_1f0 & 1) != 0) {
        FUN_143733a60(local_1f0 & 0xfffffffffffffffe);
      }
      if ((local_80 & 1) != 0) {
        FUN_143733a60(local_80 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_190);
      local_res10[0] = iVar2 + 1;
    } while (local_res10[0] < local_res18);
  }
  return;
}



// FUNCTION 1437cdab0 FUN_1437cdab0 body=2315 status=ok
// SIG undefined FUN_1437cdab0(void)

void FUN_1437cdab0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_res10;
  undefined8 local_res18;
  int local_res20;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong lStack_158;
  ulonglong local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  longlong local_130;
  int local_124;
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  longlong lStack_108;
  ulonglong local_100;
  longlong local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [32];
  
  uVar4 = FUN_1437b97f0(param_1,&local_188,"old_vectorData");
  FUN_1437bac00(uVar4,local_90);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_188,"vectorData");
  FUN_1437bac00(uVar4,local_148);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_90);
  local_res20 = iVar3;
  FUN_1437beb60(local_148,iVar3 * 4);
  local_res10 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_68;
      lVar13 = local_6c * local_res10 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      plVar7 = (longlong *)FUN_14371d5c0(local_58,local_d8,&DAT_1467e5ab0);
      local_110 = *plVar7;
      lVar1 = plVar7[1];
      lStack_108 = lVar1;
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar1);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_150 = 0;
      local_160 = 0;
      lStack_158 = 0;
      uVar12 = local_150;
      if (lVar1 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        uVar12 = local_150;
        if ((bVar9 & 0xf) == 8) {
          local_160 = local_110;
          lStack_158 = lVar1;
          if ((uVar5 & 1) != 0) {
            FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
          }
          uVar12 = uVar5;
          if ((local_150 & 1) != 0) {
            FUN_143733a60(local_150 & 0xfffffffffffffffe);
          }
        }
      }
      local_150 = uVar12;
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      local_e8 = 0;
      local_f8 = 0;
      lStack_f0 = 0;
      if (local_180 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        if ((bVar9 & 0xf) == 8) {
          local_f8 = local_188;
          lStack_f0 = local_180;
          if ((local_178 & 1) != 0) {
            FUN_1437329e0(local_178 & 0xfffffffffffffffe);
          }
          if ((local_e8 & 1) != 0) {
            FUN_143733a60(local_e8 & 0xfffffffffffffffe);
          }
          local_e8 = local_178;
        }
      }
      iVar3 = 0;
      do {
        puVar6 = (undefined8 *)FUN_143741d50(&local_f8,&local_110,iVar3);
        uVar5 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        if (puVar6[1] == 0) {
LAB_1437cde37:
          local_res18 = local_c0;
          uVar4 = uStack_b8;
        }
        else {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          if ((bVar9 & 0xf) != 5) goto LAB_1437cde37;
          local_res18 = *puVar6;
          uVar4 = puVar6[1];
          if ((*(byte *)(puVar6 + 2) & 1) != 0) {
            FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
          }
          uVar5 = puVar6[2];
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        puVar6 = (undefined8 *)FUN_143741d50(&local_160,&local_110,iVar3);
        uVar12 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uVar10 = uStack_a0;
        uVar14 = local_a8;
        if (puVar6[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          uVar10 = uStack_a0;
          uVar14 = local_a8;
          if ((bVar9 & 0xf) == 5) {
            uVar14 = *puVar6;
            uVar10 = puVar6[1];
            if ((*(byte *)(puVar6 + 2) & 1) != 0) {
              FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
            }
            uVar12 = puVar6[2];
          }
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        local_110 = 0;
        plVar7 = (longlong *)(uVar5 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x38))(plVar7,local_c8,local_res18,uVar4,&local_110);
        plVar11 = (longlong *)(uVar12 & 0xfffffffffffffffe);
        (**(code **)(*plVar11 + 0x30))(plVar11,local_c4,uVar14,uVar10,local_110);
        if ((uVar12 & 1) != 0) {
          FUN_143733a60(plVar11);
        }
        if ((uVar5 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_150 & 1) != 0) {
        FUN_143733a60(local_150 & 0xfffffffffffffffe);
      }
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = local_124 * local_res10 * 4 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      iVar3 = local_res10 * 4;
      lVar13 = (iVar3 + 1) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 2) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 3) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_118);
      lStack_158 = lVar1;
      local_160 = lVar13;
      local_150 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_188,&local_160,local_138,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_res20);
  }
  return;
}



// FUNCTION 1437ce3c0 FUN_1437ce3c0 body=2315 status=ok
// SIG undefined FUN_1437ce3c0(void)

void FUN_1437ce3c0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_res10;
  undefined8 local_res18;
  int local_res20;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong lStack_158;
  ulonglong local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  longlong local_130;
  int local_124;
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  longlong lStack_108;
  ulonglong local_100;
  longlong local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [32];
  
  uVar4 = FUN_1437b97f0(param_1,&local_188,"old_perVertexVectors");
  FUN_1437bac00(uVar4,local_90);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_188,"perVertexVectors");
  FUN_1437bac00(uVar4,local_148);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_90);
  local_res20 = iVar3;
  FUN_1437beb60(local_148,iVar3 * 4);
  local_res10 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_68;
      lVar13 = local_6c * local_res10 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      plVar7 = (longlong *)FUN_14371d5c0(local_58,local_d8,&DAT_1467e5ab0);
      local_110 = *plVar7;
      lVar1 = plVar7[1];
      lStack_108 = lVar1;
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar1);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_150 = 0;
      local_160 = 0;
      lStack_158 = 0;
      uVar12 = local_150;
      if (lVar1 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        uVar12 = local_150;
        if ((bVar9 & 0xf) == 8) {
          local_160 = local_110;
          lStack_158 = lVar1;
          if ((uVar5 & 1) != 0) {
            FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
          }
          uVar12 = uVar5;
          if ((local_150 & 1) != 0) {
            FUN_143733a60(local_150 & 0xfffffffffffffffe);
          }
        }
      }
      local_150 = uVar12;
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      local_e8 = 0;
      local_f8 = 0;
      lStack_f0 = 0;
      if (local_180 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        if ((bVar9 & 0xf) == 8) {
          local_f8 = local_188;
          lStack_f0 = local_180;
          if ((local_178 & 1) != 0) {
            FUN_1437329e0(local_178 & 0xfffffffffffffffe);
          }
          if ((local_e8 & 1) != 0) {
            FUN_143733a60(local_e8 & 0xfffffffffffffffe);
          }
          local_e8 = local_178;
        }
      }
      iVar3 = 0;
      do {
        puVar6 = (undefined8 *)FUN_143741d50(&local_f8,&local_110,iVar3);
        uVar5 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        if (puVar6[1] == 0) {
LAB_1437ce747:
          local_res18 = local_c0;
          uVar4 = uStack_b8;
        }
        else {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          if ((bVar9 & 0xf) != 5) goto LAB_1437ce747;
          local_res18 = *puVar6;
          uVar4 = puVar6[1];
          if ((*(byte *)(puVar6 + 2) & 1) != 0) {
            FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
          }
          uVar5 = puVar6[2];
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        puVar6 = (undefined8 *)FUN_143741d50(&local_160,&local_110,iVar3);
        uVar12 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uVar10 = uStack_a0;
        uVar14 = local_a8;
        if (puVar6[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          uVar10 = uStack_a0;
          uVar14 = local_a8;
          if ((bVar9 & 0xf) == 5) {
            uVar14 = *puVar6;
            uVar10 = puVar6[1];
            if ((*(byte *)(puVar6 + 2) & 1) != 0) {
              FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
            }
            uVar12 = puVar6[2];
          }
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        local_110 = 0;
        plVar7 = (longlong *)(uVar5 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x38))(plVar7,local_c8,local_res18,uVar4,&local_110);
        plVar11 = (longlong *)(uVar12 & 0xfffffffffffffffe);
        (**(code **)(*plVar11 + 0x30))(plVar11,local_c4,uVar14,uVar10,local_110);
        if ((uVar12 & 1) != 0) {
          FUN_143733a60(plVar11);
        }
        if ((uVar5 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_150 & 1) != 0) {
        FUN_143733a60(local_150 & 0xfffffffffffffffe);
      }
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = local_124 * local_res10 * 4 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      iVar3 = local_res10 * 4;
      lVar13 = (iVar3 + 1) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 2) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 3) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_118);
      lStack_158 = lVar1;
      local_160 = lVar13;
      local_150 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_188,&local_160,local_138,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_res20);
  }
  return;
}



// FUNCTION 1437cecd0 FUN_1437cecd0 body=2315 status=ok
// SIG undefined FUN_1437cecd0(void)

void FUN_1437cecd0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_res10;
  undefined8 local_res18;
  int local_res20;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong lStack_158;
  ulonglong local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  longlong local_130;
  int local_124;
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  longlong lStack_108;
  ulonglong local_100;
  longlong local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [32];
  
  uVar4 = FUN_1437b97f0(param_1,&local_188,"old_vectors");
  FUN_1437bac00(uVar4,local_90);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_188,"vectors");
  FUN_1437bac00(uVar4,local_148);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_90);
  local_res20 = iVar3;
  FUN_1437beb60(local_148,iVar3 * 4);
  local_res10 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_68;
      lVar13 = local_6c * local_res10 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      plVar7 = (longlong *)FUN_14371d5c0(local_58,local_d8,&DAT_1467e5ab0);
      local_110 = *plVar7;
      lVar1 = plVar7[1];
      lStack_108 = lVar1;
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar1);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_150 = 0;
      local_160 = 0;
      lStack_158 = 0;
      uVar12 = local_150;
      if (lVar1 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        uVar12 = local_150;
        if ((bVar9 & 0xf) == 8) {
          local_160 = local_110;
          lStack_158 = lVar1;
          if ((uVar5 & 1) != 0) {
            FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
          }
          uVar12 = uVar5;
          if ((local_150 & 1) != 0) {
            FUN_143733a60(local_150 & 0xfffffffffffffffe);
          }
        }
      }
      local_150 = uVar12;
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      local_e8 = 0;
      local_f8 = 0;
      lStack_f0 = 0;
      if (local_180 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        if ((bVar9 & 0xf) == 8) {
          local_f8 = local_188;
          lStack_f0 = local_180;
          if ((local_178 & 1) != 0) {
            FUN_1437329e0(local_178 & 0xfffffffffffffffe);
          }
          if ((local_e8 & 1) != 0) {
            FUN_143733a60(local_e8 & 0xfffffffffffffffe);
          }
          local_e8 = local_178;
        }
      }
      iVar3 = 0;
      do {
        puVar6 = (undefined8 *)FUN_143741d50(&local_f8,&local_110,iVar3);
        uVar5 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        if (puVar6[1] == 0) {
LAB_1437cf057:
          local_res18 = local_c0;
          uVar4 = uStack_b8;
        }
        else {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          if ((bVar9 & 0xf) != 5) goto LAB_1437cf057;
          local_res18 = *puVar6;
          uVar4 = puVar6[1];
          if ((*(byte *)(puVar6 + 2) & 1) != 0) {
            FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
          }
          uVar5 = puVar6[2];
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        puVar6 = (undefined8 *)FUN_143741d50(&local_160,&local_110,iVar3);
        uVar12 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uVar10 = uStack_a0;
        uVar14 = local_a8;
        if (puVar6[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          uVar10 = uStack_a0;
          uVar14 = local_a8;
          if ((bVar9 & 0xf) == 5) {
            uVar14 = *puVar6;
            uVar10 = puVar6[1];
            if ((*(byte *)(puVar6 + 2) & 1) != 0) {
              FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
            }
            uVar12 = puVar6[2];
          }
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        local_110 = 0;
        plVar7 = (longlong *)(uVar5 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x38))(plVar7,local_c8,local_res18,uVar4,&local_110);
        plVar11 = (longlong *)(uVar12 & 0xfffffffffffffffe);
        (**(code **)(*plVar11 + 0x30))(plVar11,local_c4,uVar14,uVar10,local_110);
        if ((uVar12 & 1) != 0) {
          FUN_143733a60(plVar11);
        }
        if ((uVar5 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_150 & 1) != 0) {
        FUN_143733a60(local_150 & 0xfffffffffffffffe);
      }
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = local_124 * local_res10 * 4 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      iVar3 = local_res10 * 4;
      lVar13 = (iVar3 + 1) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 2) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 3) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_118);
      lStack_158 = lVar1;
      local_160 = lVar13;
      local_150 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_188,&local_160,local_138,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_res20);
  }
  return;
}



// FUNCTION 1437cf5e0 FUN_1437cf5e0 body=2315 status=ok
// SIG undefined FUN_1437cf5e0(void)

void FUN_1437cf5e0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_res10;
  undefined8 local_res18;
  int local_res20;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong lStack_158;
  ulonglong local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  longlong local_130;
  int local_124;
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  longlong lStack_108;
  ulonglong local_100;
  longlong local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [32];
  
  uVar4 = FUN_1437b97f0(param_1,&local_188,"old_quaternions");
  FUN_1437bac00(uVar4,local_90);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_188,"quaternions");
  FUN_1437bac00(uVar4,local_148);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_90);
  local_res20 = iVar3;
  FUN_1437beb60(local_148,iVar3 * 4);
  local_res10 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_68;
      lVar13 = local_6c * local_res10 + local_78;
      if (local_68 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_68);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_80;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      plVar7 = (longlong *)FUN_14371d5c0(local_58,local_d8,&DAT_1467e05b0);
      local_110 = *plVar7;
      lVar1 = plVar7[1];
      lStack_108 = lVar1;
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar1);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_150 = 0;
      local_160 = 0;
      lStack_158 = 0;
      uVar12 = local_150;
      if (lVar1 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        uVar12 = local_150;
        if ((bVar9 & 0xf) == 8) {
          local_160 = local_110;
          lStack_158 = lVar1;
          if ((uVar5 & 1) != 0) {
            FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
          }
          uVar12 = uVar5;
          if ((local_150 & 1) != 0) {
            FUN_143733a60(local_150 & 0xfffffffffffffffe);
          }
        }
      }
      local_150 = uVar12;
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      local_e8 = 0;
      local_f8 = 0;
      lStack_f0 = 0;
      if (local_180 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        if ((bVar9 & 0xf) == 8) {
          local_f8 = local_188;
          lStack_f0 = local_180;
          if ((local_178 & 1) != 0) {
            FUN_1437329e0(local_178 & 0xfffffffffffffffe);
          }
          if ((local_e8 & 1) != 0) {
            FUN_143733a60(local_e8 & 0xfffffffffffffffe);
          }
          local_e8 = local_178;
        }
      }
      iVar3 = 0;
      do {
        puVar6 = (undefined8 *)FUN_143741d50(&local_f8,&local_110,iVar3);
        uVar5 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        if (puVar6[1] == 0) {
LAB_1437cf967:
          local_res18 = local_c0;
          uVar4 = uStack_b8;
        }
        else {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          if ((bVar9 & 0xf) != 5) goto LAB_1437cf967;
          local_res18 = *puVar6;
          uVar4 = puVar6[1];
          if ((*(byte *)(puVar6 + 2) & 1) != 0) {
            FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
          }
          uVar5 = puVar6[2];
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        puVar6 = (undefined8 *)FUN_143741d50(&local_160,&local_110,iVar3);
        uVar12 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uVar10 = uStack_a0;
        uVar14 = local_a8;
        if (puVar6[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          uVar10 = uStack_a0;
          uVar14 = local_a8;
          if ((bVar9 & 0xf) == 5) {
            uVar14 = *puVar6;
            uVar10 = puVar6[1];
            if ((*(byte *)(puVar6 + 2) & 1) != 0) {
              FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
            }
            uVar12 = puVar6[2];
          }
        }
        if ((local_100 & 1) != 0) {
          FUN_143733a60(local_100 & 0xfffffffffffffffe);
        }
        local_110 = 0;
        plVar7 = (longlong *)(uVar5 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x38))(plVar7,local_c8,local_res18,uVar4,&local_110);
        plVar11 = (longlong *)(uVar12 & 0xfffffffffffffffe);
        (**(code **)(*plVar11 + 0x30))(plVar11,local_c4,uVar14,uVar10,local_110);
        if ((uVar12 & 1) != 0) {
          FUN_143733a60(plVar11);
        }
        if ((uVar5 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if ((local_e8 & 1) != 0) {
        FUN_143733a60(local_e8 & 0xfffffffffffffffe);
      }
      if ((local_150 & 1) != 0) {
        FUN_143733a60(local_150 & 0xfffffffffffffffe);
      }
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = local_124 * local_res10 * 4 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      iVar3 = local_res10 * 4;
      lVar13 = (iVar3 + 1) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 2) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_118;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_138;
      local_180 = lVar1;
      local_188 = lVar13;
      local_178 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_180;
      local_170 = uVar4;
      local_168 = uVar2;
      if (local_188 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_180,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_188);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      lVar1 = local_120;
      lVar13 = (iVar3 + 3) * local_124 + local_130;
      if (local_120 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_120);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_118);
      lStack_158 = lVar1;
      local_160 = lVar13;
      local_150 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_188,&local_160,local_138,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_188);
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_res20);
  }
  return;
}



// FUNCTION 1437cfef0 FUN_1437cfef0 body=4446 status=ok
// SIG undefined FUN_1437cfef0(void)

void FUN_1437cfef0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int local_res10;
  undefined8 local_res18;
  int local_res20;
  longlong local_1c8;
  longlong lStack_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [16];
  undefined8 local_178;
  longlong local_170;
  int local_164;
  longlong local_160;
  undefined4 local_158;
  longlong local_150;
  longlong lStack_148;
  ulonglong local_140;
  longlong local_138;
  longlong lStack_130;
  ulonglong local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  undefined1 local_118 [80];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong local_80;
  int local_74;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_60 [40];
  
  uVar4 = FUN_1437b97f0(param_1,&local_1b0,"old_matrices");
  FUN_1437bac00(uVar4,local_98);
  if ((local_1a0 & 1) != 0) {
    FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_1b0,"matrices");
  FUN_1437bac00(uVar4,local_188);
  if ((local_1a0 & 1) != 0) {
    FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_98);
  local_res20 = iVar3;
  FUN_1437beb60(local_188,iVar3 << 4);
  local_res10 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_70;
      lVar13 = local_74 * local_res10 + local_80;
      if (local_70 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_70);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_68;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_88;
      local_1a8 = lVar1;
      local_1b0 = lVar13;
      local_1a0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_1a8;
      local_198 = uVar4;
      local_190 = uVar2;
      if (local_1b0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_1a8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_1b0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      plVar7 = (longlong *)FUN_14371d5c0(local_60,local_118,&DAT_1467dce10);
      local_150 = *plVar7;
      lVar1 = plVar7[1];
      lStack_148 = lVar1;
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(lVar1);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_1b8 = 0;
      local_1c8 = 0;
      lStack_1c0 = 0;
      uVar12 = local_1b8;
      if (lVar1 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        uVar12 = local_1b8;
        if ((bVar9 & 0xf) == 8) {
          local_1c8 = local_150;
          lStack_1c0 = lVar1;
          if ((uVar5 & 1) != 0) {
            FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
          }
          uVar12 = uVar5;
          if ((local_1b8 & 1) != 0) {
            FUN_143733a60(local_1b8 & 0xfffffffffffffffe);
          }
        }
      }
      local_1b8 = uVar12;
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      local_128 = 0;
      local_138 = 0;
      lStack_130 = 0;
      if (local_1a8 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_1a8,1);
        bVar9 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar9 = (byte)*puVar6;
        }
        if ((bVar9 & 0xf) == 8) {
          local_138 = local_1b0;
          lStack_130 = local_1a8;
          if ((local_1a0 & 1) != 0) {
            FUN_1437329e0(local_1a0 & 0xfffffffffffffffe);
          }
          if ((local_128 & 1) != 0) {
            FUN_143733a60(local_128 & 0xfffffffffffffffe);
          }
          local_128 = local_1a0;
        }
      }
      iVar3 = 0;
      do {
        puVar6 = (undefined8 *)FUN_143741d50(&local_138,&local_150,iVar3);
        uVar5 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        if (puVar6[1] == 0) {
LAB_1437d0277:
          local_res18 = local_c8;
          uVar4 = uStack_c0;
        }
        else {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          if ((bVar9 & 0xf) != 5) goto LAB_1437d0277;
          local_res18 = *puVar6;
          uVar4 = puVar6[1];
          if ((*(byte *)(puVar6 + 2) & 1) != 0) {
            FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
          }
          uVar5 = puVar6[2];
        }
        if ((local_140 & 1) != 0) {
          FUN_143733a60(local_140 & 0xfffffffffffffffe);
        }
        puVar6 = (undefined8 *)FUN_143741d50(&local_1c8,&local_150,iVar3);
        uVar12 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        uVar10 = uStack_a8;
        uVar14 = local_b0;
        if (puVar6[1] != 0) {
          puVar8 = (undefined8 *)FUN_143714490(puVar6[1],1);
          bVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar9 = (byte)*puVar8;
          }
          uVar10 = uStack_a8;
          uVar14 = local_b0;
          if ((bVar9 & 0xf) == 5) {
            uVar14 = *puVar6;
            uVar10 = puVar6[1];
            if ((*(byte *)(puVar6 + 2) & 1) != 0) {
              FUN_1437329e0(puVar6[2] & 0xfffffffffffffffe);
            }
            uVar12 = puVar6[2];
          }
        }
        if ((local_140 & 1) != 0) {
          FUN_143733a60(local_140 & 0xfffffffffffffffe);
        }
        local_150 = 0;
        plVar7 = (longlong *)(uVar5 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x38))(plVar7,local_120,local_res18,uVar4,&local_150);
        plVar11 = (longlong *)(uVar12 & 0xfffffffffffffffe);
        (**(code **)(*plVar11 + 0x30))(plVar11,local_11c,uVar14,uVar10,local_150);
        if ((uVar12 & 1) != 0) {
          FUN_143733a60(plVar11);
        }
        if ((uVar5 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      if ((local_1b8 & 1) != 0) {
        FUN_143733a60(local_1b8 & 0xfffffffffffffffe);
      }
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = local_164 * local_res10 * 0x10 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_158;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_178;
      local_1a8 = lVar1;
      local_1b0 = lVar13;
      local_1a0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_1a8;
      local_198 = uVar4;
      local_190 = uVar2;
      if (local_1b0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_1a8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_1b0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      iVar3 = local_res10 * 0x10;
      lVar13 = (iVar3 + 1) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_158;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_178;
      local_1a8 = lVar1;
      local_1b0 = lVar13;
      local_1a0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_1a8;
      local_198 = uVar4;
      local_190 = uVar2;
      if (local_1b0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_1a8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_1b0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 2) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar2 = local_158;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar4 = local_178;
      local_1a8 = lVar1;
      local_1b0 = lVar13;
      local_1a0 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      lVar1 = local_1a8;
      local_198 = uVar4;
      local_190 = uVar2;
      if (local_1b0 != 0) {
        puVar6 = (undefined8 *)FUN_143714490(local_1a8,1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar6;
        }
        lVar13 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar13 = lVar1;
        }
        if (lVar13 != 0) {
          FUN_1437b9940(&local_1b0);
        }
      }
      if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 3) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 4) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 5) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 6) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 7) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 8) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 9) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 10) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 0xb) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 0xc) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 0xd) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 0xe) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      lVar1 = local_160;
      lVar13 = (iVar3 + 0xf) * local_164 + local_170;
      if (local_160 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_1437151a0(local_160);
      }
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      local_res18 = CONCAT44(local_res18._4_4_,local_158);
      lStack_1c0 = lVar1;
      local_1c8 = lVar13;
      local_1b8 = uVar5;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_1b0,&local_1c8,local_178,&local_res18);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
      FUN_1437b91e0(&local_1b0);
      if ((local_1a0 & 1) != 0) {
        FUN_143733a60(local_1a0 & 0xfffffffffffffffe);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < local_res20);
  }
  return;
}



// FUNCTION 1437d1050 FUN_1437d1050 body=119 status=ok
// SIG undefined FUN_1437d1050(void)

void FUN_1437d1050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"boneIndex");
  uVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"boneSetId");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d10d0 FUN_1437d10d0 body=1821 status=ok
// SIG undefined FUN_1437d10d0(void)

void FUN_1437d10d0(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  char *pcVar10;
  longlong lVar11;
  int local_res10;
  longlong local_138;
  longlong local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_110 [16];
  ulonglong local_100;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong local_d0;
  int local_c4;
  longlong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong local_98;
  int local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  int local_54;
  longlong local_50;
  undefined4 local_48;
  
  uVar6 = FUN_1437b97f0(param_1,local_110,"boneSections");
  FUN_1437bac00(uVar6,local_78);
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  local_res10 = 0;
  iVar3 = FUN_1437bcb20(local_78);
  lVar1 = local_50;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    lVar11 = local_54 * iVar3 + local_60;
    local_50 = lVar1;
    if (lVar1 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_1437151a0(lVar1);
    }
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    uVar2 = local_48;
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    uVar6 = local_68;
    local_138 = lVar11;
    local_130 = lVar1;
    local_128 = uVar7;
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    lVar1 = local_130;
    local_120 = uVar6;
    local_118 = uVar2;
    if (local_138 != 0) {
      puVar8 = (undefined8 *)FUN_143714490(local_130,1);
      if (puVar8 == (undefined8 *)0x0) {
        bVar9 = 0;
      }
      else {
        bVar9 = (byte)*puVar8;
      }
      lVar11 = 0;
      if ((bVar9 & 0xf) == 7) {
        lVar11 = lVar1;
      }
      if (lVar11 != 0) {
        FUN_1437b9940(&local_138);
      }
    }
    if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
      FUN_143733a60(uVar7 & 0xfffffffffffffffe);
    }
    FUN_1437bad30(&local_138,local_110);
    if ((local_128 & 1) != 0) {
      FUN_143733a60(local_128 & 0xfffffffffffffffe);
    }
    iVar4 = FUN_1437bcdb0(local_110,"startBoneIndex");
    pcVar10 = "startBoneSetId";
    if (iVar4 != 0) {
      pcVar10 = "startBoneIndex";
    }
    uVar6 = FUN_1437b97f0(local_110,&local_138,pcVar10);
    iVar4 = FUN_1437b3cf0(uVar6);
    if ((local_128 & 1) != 0) {
      FUN_143733a60(local_128 & 0xfffffffffffffffe);
    }
    iVar5 = FUN_1437bcdb0(local_110,"numBones");
    pcVar10 = "numBoneSets";
    if (iVar5 != 0) {
      pcVar10 = "numBones";
    }
    uVar6 = FUN_1437b97f0(local_110,&local_138,pcVar10);
    iVar5 = FUN_1437b3cf0(uVar6);
    if ((local_128 & 1) != 0) {
      FUN_143733a60(local_128 & 0xfffffffffffffffe);
    }
    if (local_res10 < iVar5 + iVar4) {
      local_res10 = iVar5 + iVar4;
    }
    FUN_1437b87d0(local_110);
    lVar1 = local_50;
  }
  uVar6 = FUN_1437b97f0(param_1,local_110,"bonesBuffer");
  FUN_1437bac00(uVar6,local_b0);
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  uVar6 = FUN_1437b97f0(param_1,local_110,"boneSets");
  FUN_1437bac00(uVar6,local_e8);
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  FUN_1437beb60(local_b0,local_res10);
  FUN_1437beb60(local_e8,local_res10);
  iVar3 = 0;
  if (0 < local_res10) {
    do {
      lVar1 = local_88;
      lVar11 = local_8c * iVar3 + local_98;
      if (local_88 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1437151a0(local_88);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar2 = local_80;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar6 = local_a0;
      local_130 = lVar1;
      local_138 = lVar11;
      local_128 = uVar7;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      lVar1 = local_130;
      local_120 = uVar6;
      local_118 = uVar2;
      if (local_138 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(local_130,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar8;
        }
        lVar11 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar11 = lVar1;
        }
        if (lVar11 != 0) {
          FUN_1437b9940(&local_138);
        }
      }
      if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      FUN_1437b8e40(&local_138,iVar3);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      lVar1 = local_c0;
      lVar11 = local_c4 * iVar3 + local_d0;
      if (local_c0 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1437151a0(local_c0);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar2 = local_b8;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar6 = local_d8;
      local_130 = lVar1;
      local_138 = lVar11;
      local_128 = uVar7;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      lVar1 = local_130;
      local_120 = uVar6;
      local_118 = uVar2;
      if (local_138 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(local_130,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar8;
        }
        lVar11 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar11 = lVar1;
        }
        if (lVar11 != 0) {
          FUN_1437b9940(&local_138);
        }
      }
      if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_138,local_110);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar6 = FUN_1437b97f0(local_110,&local_138,"boneBufferOffset");
      FUN_1437b8e40(uVar6,iVar3);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      uVar6 = FUN_1437b97f0(local_110,&local_138,"numBones");
      FUN_1437b8e40(uVar6,1);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      lVar1 = local_c0;
      lVar11 = local_c4 * iVar3 + local_d0;
      if (local_c0 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_1437151a0(local_c0);
      }
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar2 = local_b8;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      uVar6 = local_d8;
      local_130 = lVar1;
      local_138 = lVar11;
      local_128 = uVar7;
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      lVar1 = local_130;
      local_120 = uVar6;
      local_118 = uVar2;
      if (local_138 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(local_130,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar9 = 0;
        }
        else {
          bVar9 = (byte)*puVar8;
        }
        lVar11 = 0;
        if ((bVar9 & 0xf) == 7) {
          lVar11 = lVar1;
        }
        if (lVar11 != 0) {
          FUN_1437b9940(&local_138);
        }
      }
      if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
        FUN_143733a60(uVar7 & 0xfffffffffffffffe);
      }
      FUN_1437b8850(&local_138,local_110);
      if ((local_128 & 1) != 0) {
        FUN_143733a60(local_128 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_110);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_res10);
  }
  uVar6 = FUN_1437b97f0(param_1,local_110,"bonesBuffer");
  FUN_1437b8a10(uVar6,local_b0);
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  uVar6 = FUN_1437b97f0(param_1,local_110,"boneSets");
  FUN_1437b8a10(uVar6,local_e8);
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d17f0 FUN_1437d17f0 body=227 status=ok
// SIG undefined FUN_1437d17f0(void)

void FUN_1437d17f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"startBoneIndex");
  uVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"numBones");
  uVar3 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"startBoneSetId");
  FUN_1437b8e40(uVar1,uVar2);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"numBoneSets");
  FUN_1437b8e40(uVar1,uVar3);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d18e0 FUN_1437d18e0 body=4862 status=ok
// SIG undefined FUN_1437d18e0(void)

void FUN_1437d18e0(undefined8 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong local_res10;
  undefined1 local_res18 [8];
  ulonglong local_res20;
  longlong local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  ulonglong uStack_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  longlong local_158;
  ulonglong local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  longlong local_100;
  int local_f4;
  ulonglong local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  ulonglong local_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined1 local_70 [56];
  
  uVar5 = FUN_1437b97f0(param_1,&local_158,"sweptTransform_old");
  FUN_1437bad30(uVar5,local_70);
  if ((local_148 & 1) != 0) {
    FUN_143733a60(local_148 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_1437b97f0(param_1,&local_158,"sweptTransform");
  FUN_1437bac00(uVar5,local_118);
  if ((local_148 & 1) != 0) {
    FUN_143733a60(local_148 & 0xfffffffffffffffe);
  }
  plVar6 = (longlong *)FUN_1437b97f0(local_70,local_98,"centerOfMass0");
  plVar7 = (longlong *)FUN_14371d5c0(local_128,&local_178,&DAT_1467e5ab0);
  uVar12 = 0;
  local_188 = *plVar7;
  lVar15 = plVar7[1];
  uVar8 = uVar12;
  lStack_180 = lVar15;
  if (lVar15 != 0) {
    uVar8 = FUN_1437151a0(lVar15);
  }
  if ((uVar8 & 1) != 0) {
    FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
  }
  local_1c8 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  bVar2 = 0;
  uVar10 = local_1c8;
  if (lVar15 != 0) {
    puVar9 = (undefined8 *)FUN_143714490(lVar15,1);
    bVar3 = bVar2;
    if (puVar9 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar9;
    }
    uVar10 = local_1c8;
    if ((bVar3 & 0xf) == 8) {
      local_1d8 = local_188;
      uStack_1d0 = lVar15;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar10 = uVar8;
      if ((local_1c8 & 1) != 0) {
        FUN_143733a60(local_1c8 & 0xfffffffffffffffe);
      }
    }
  }
  local_1c8 = uVar10;
  if ((uVar8 & 1) != 0) {
    FUN_143733a60(uVar8 & 0xfffffffffffffffe);
  }
  local_198 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uVar8 = uVar12;
  if (plVar6[1] != 0) {
    puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
    bVar3 = bVar2;
    if (puVar9 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar9;
    }
    if ((bVar3 & 0xf) == 8) {
      local_1a8 = *plVar6;
      uStack_1a0 = plVar6[1];
      if ((*(byte *)(plVar6 + 2) & 1) != 0) {
        FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
      }
      if ((local_198 & 1) != 0) {
        FUN_143733a60(local_198 & 0xfffffffffffffffe);
      }
      local_198 = plVar6[2];
    }
  }
  do {
    plVar6 = (longlong *)FUN_143741d50(&local_1a8,local_e0,uVar8);
    local_1c0 = 0;
    uStack_1b8 = 0;
    if (plVar6[1] == 0) {
LAB_1437d1b3c:
      local_190 = local_1c0;
      uVar10 = uStack_1b8;
      uVar11 = uVar12;
    }
    else {
      puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
      bVar3 = bVar2;
      if (puVar9 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar9;
      }
      if ((bVar3 & 0xf) != 5) goto LAB_1437d1b3c;
      local_190 = *plVar6;
      uVar10 = plVar6[1];
      if ((*(byte *)(plVar6 + 2) & 1) != 0) {
        FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
      }
      uVar11 = plVar6[2];
    }
    if ((local_d0 & 1) != 0) {
      FUN_143733a60(local_d0 & 0xfffffffffffffffe);
    }
    plVar6 = (longlong *)FUN_143741d50(&local_1d8,local_c8,uVar8);
    local_res20 = 0;
    local_b0 = 0;
    lStack_a8 = 0;
    bVar3 = 0;
    lVar13 = lStack_a8;
    lVar15 = local_b0;
    if (plVar6[1] != 0) {
      puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
      bVar4 = bVar3;
      if (puVar9 != (undefined8 *)0x0) {
        bVar4 = (byte)*puVar9;
      }
      lVar13 = lStack_a8;
      lVar15 = local_b0;
      if ((bVar4 & 0xf) == 5) {
        lVar15 = *plVar6;
        lVar13 = plVar6[1];
        if ((*(byte *)(plVar6 + 2) & 1) != 0) {
          FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
        }
        local_res20 = plVar6[2];
      }
    }
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    local_188 = 0;
    plVar7 = (longlong *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_res10,local_190,uVar10,&local_188);
    plVar6 = (longlong *)(local_res20 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x30))(plVar6,local_res18,lVar15,lVar13,local_188);
    if ((local_res20 & 1) != 0) {
      FUN_143733a60(plVar6);
    }
    if ((uVar11 & 1) != 0) {
      FUN_143733a60(plVar7);
    }
    uVar14 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar14;
  } while ((int)uVar14 < 4);
  if ((local_198 & 1) != 0) {
    FUN_143733a60(local_198 & 0xfffffffffffffffe);
  }
  if ((local_1c8 & 1) != 0) {
    FUN_143733a60(local_1c8 & 0xfffffffffffffffe);
  }
  uVar8 = local_f0;
  lVar15 = local_100;
  uVar10 = uVar12;
  if (local_f0 != 0) {
    uVar10 = FUN_1437151a0(local_f0);
  }
  if ((uVar10 & 1) != 0) {
    FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
  }
  uVar1 = local_e8;
  if ((uVar10 & 1) != 0) {
    FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
  }
  uVar5 = local_108;
  local_158 = lVar15;
  local_150 = uVar8;
  local_148 = uVar10;
  if ((uVar10 & 1) != 0) {
    FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
  }
  uVar8 = local_150;
  local_140 = uVar5;
  local_138 = uVar1;
  if (local_158 != 0) {
    puVar9 = (undefined8 *)FUN_143714490(local_150,1);
    bVar2 = bVar3;
    if (puVar9 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar9;
    }
    uVar11 = uVar12;
    if ((bVar2 & 0xf) == 7) {
      uVar11 = uVar8;
    }
    if (uVar11 != 0) {
      FUN_1437b9940(&local_158);
    }
  }
  if (((uVar10 & 1) != 0) && (FUN_143733a60(uVar10 & 0xfffffffffffffffe), (uVar10 & 1) != 0)) {
    FUN_143733a60(uVar10 & 0xfffffffffffffffe);
  }
  FUN_1437c29e0(&local_158,&local_178,4);
  if ((local_148 & 1) != 0) {
    FUN_143733a60(local_148 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  plVar6 = (longlong *)FUN_1437b97f0(local_70,local_98,"centerOfMass1");
  plVar7 = (longlong *)FUN_14371d5c0(&local_1a8,local_128,&DAT_1467e5ab0);
  local_178 = *plVar7;
  lVar15 = plVar7[1];
  uVar8 = uVar12;
  uStack_170 = lVar15;
  if (lVar15 != 0) {
    uVar8 = FUN_1437151a0(lVar15);
  }
  if ((uVar8 & 1) != 0) {
    FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
  }
  local_1b0 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  uVar10 = local_1b0;
  if (lVar15 != 0) {
    puVar9 = (undefined8 *)FUN_143714490(lVar15,1);
    bVar2 = bVar3;
    if (puVar9 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar9;
    }
    uVar10 = local_1b0;
    if ((bVar2 & 0xf) == 8) {
      local_1c0 = local_178;
      uStack_1b8 = lVar15;
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      uVar10 = uVar8;
      if ((local_1b0 & 1) != 0) {
        FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
      }
    }
  }
  local_1b0 = uVar10;
  if ((uVar8 & 1) != 0) {
    FUN_143733a60(uVar8 & 0xfffffffffffffffe);
  }
  local_1c8 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uVar8 = uVar12;
  if (plVar6[1] != 0) {
    puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
    if (puVar9 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar9;
    }
    if ((bVar3 & 0xf) == 8) {
      local_1d8 = *plVar6;
      uStack_1d0 = plVar6[1];
      if ((*(byte *)(plVar6 + 2) & 1) != 0) {
        FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
      }
      if ((local_1c8 & 1) != 0) {
        FUN_143733a60(local_1c8 & 0xfffffffffffffffe);
      }
      local_1c8 = plVar6[2];
    }
  }
  do {
    plVar6 = (longlong *)FUN_143741d50(&local_1d8,local_c8,uVar8);
    local_b0 = 0;
    lStack_a8 = 0;
    bVar2 = 0;
    if (plVar6[1] == 0) {
LAB_1437d1f6b:
      local_188 = local_b0;
      lVar15 = lStack_a8;
      uVar10 = uVar12;
    }
    else {
      puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
      bVar3 = bVar2;
      if (puVar9 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar9;
      }
      if ((bVar3 & 0xf) != 5) goto LAB_1437d1f6b;
      local_188 = *plVar6;
      lVar15 = plVar6[1];
      if ((*(byte *)(plVar6 + 2) & 1) != 0) {
        FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
      }
      uVar10 = plVar6[2];
    }
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    plVar6 = (longlong *)FUN_143741d50(&local_1c0,local_e0,uVar8);
    local_res10 = 0;
    local_178 = 0;
    uStack_170 = 0;
    uVar11 = uStack_170;
    lVar13 = local_178;
    if (plVar6[1] != 0) {
      puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
      bVar3 = bVar2;
      if (puVar9 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar9;
      }
      uVar11 = uStack_170;
      lVar13 = local_178;
      if ((bVar3 & 0xf) == 5) {
        lVar13 = *plVar6;
        uVar11 = plVar6[1];
        if ((*(byte *)(plVar6 + 2) & 1) != 0) {
          FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
        }
        local_res10 = plVar6[2];
      }
    }
    if ((local_d0 & 1) != 0) {
      FUN_143733a60(local_d0 & 0xfffffffffffffffe);
    }
    local_190 = 0;
    plVar7 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar7 + 0x38))(plVar7,local_res18,local_188,lVar15,&local_190);
    plVar6 = (longlong *)(local_res10 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_res20,lVar13,uVar11,local_190);
    if ((local_res10 & 1) != 0) {
      FUN_143733a60(plVar6);
    }
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(plVar7);
    }
    uVar14 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar14;
  } while ((int)uVar14 < 4);
  if ((local_1c8 & 1) != 0) {
    FUN_143733a60(local_1c8 & 0xfffffffffffffffe);
  }
  if ((local_1b0 & 1) != 0) {
    FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
  }
  uVar8 = local_f0;
  lVar15 = local_f4 + local_100;
  uVar10 = uVar12;
  if (local_f0 != 0) {
    uVar10 = FUN_1437151a0(local_f0);
  }
  if ((uVar10 & 1) != 0) {
    FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
  }
  local_res10 = CONCAT44(local_res10._4_4_,local_e8);
  uStack_170 = uVar8;
  local_178 = lVar15;
  local_168 = uVar10;
  if ((uVar10 & 1) != 0) {
    FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(&local_158,&local_178,local_108,&local_res10);
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(uVar10 & 0xfffffffffffffffe);
  }
  FUN_1437c29e0(&local_158,local_128,4);
  if ((local_148 & 1) != 0) {
    FUN_143733a60(local_148 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  lVar15 = FUN_1437b97f0(local_70,local_98,"rotation0");
  FUN_1437d2be0(&local_1a8,local_128,local_res10 & 0xff);
  uVar10 = local_198;
  uVar8 = uStack_1a0;
  local_1b0 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  if (uStack_1a0 != 0) {
    puVar9 = (undefined8 *)FUN_143714490(uStack_1a0,1);
    bVar3 = bVar2;
    if (puVar9 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar9;
    }
    if ((bVar3 & 0xf) == 8) {
      local_1c0 = local_1a8;
      uStack_1b8 = uVar8;
      if ((uVar10 & 1) != 0) {
        FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
      }
      if ((local_1b0 & 1) != 0) {
        FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
      }
      local_1b0 = uVar10;
    }
  }
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(uVar10 & 0xfffffffffffffffe);
  }
  local_1c8 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uVar8 = uVar12;
  if (*(longlong *)(lVar15 + 8) != 0) {
    puVar9 = (undefined8 *)FUN_143714490(*(longlong *)(lVar15 + 8),1);
    bVar3 = bVar2;
    if (puVar9 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar9;
    }
    if ((bVar3 & 0xf) == 8) {
      FUN_1436fc440(&local_1d8,lVar15);
    }
  }
  do {
    plVar6 = (longlong *)FUN_143741d50(&local_1d8,local_c8,uVar8);
    local_b0 = 0;
    lStack_a8 = 0;
    if (plVar6[1] == 0) {
LAB_1437d22ea:
      local_188 = local_b0;
      lVar15 = lStack_a8;
      uVar10 = uVar12;
    }
    else {
      puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
      bVar3 = bVar2;
      if (puVar9 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar9;
      }
      if ((bVar3 & 0xf) != 5) goto LAB_1437d22ea;
      local_188 = *plVar6;
      lVar15 = plVar6[1];
      if ((*(byte *)(plVar6 + 2) & 1) != 0) {
        FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
      }
      uVar10 = plVar6[2];
    }
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    plVar6 = (longlong *)FUN_143741d50(&local_1c0,local_e0,uVar8);
    local_res10 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    uVar11 = uStack_1a0;
    lVar13 = local_1a8;
    if (plVar6[1] != 0) {
      puVar9 = (undefined8 *)FUN_143714490(plVar6[1],1);
      bVar3 = bVar2;
      if (puVar9 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar9;
      }
      uVar11 = uStack_1a0;
      lVar13 = local_1a8;
      if ((bVar3 & 0xf) == 5) {
        lVar13 = *plVar6;
        uVar11 = plVar6[1];
        if ((*(byte *)(plVar6 + 2) & 1) != 0) {
          FUN_1437329e0(plVar6[2] & 0xfffffffffffffffe);
        }
        local_res10 = plVar6[2];
      }
    }
    if ((local_d0 & 1) != 0) {
      FUN_143733a60(local_d0 & 0xfffffffffffffffe);
    }
    local_190 = 0;
    plVar7 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar7 + 0x38))(plVar7,local_res18,local_188,lVar15,&local_190);
    plVar6 = (longlong *)(local_res10 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_res20,lVar13,uVar11,local_190);
    if ((local_res10 & 1) != 0) {
      FUN_143733a60(plVar6);
    }
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(plVar7);
    }
    uVar14 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar14;
    if (3 < (int)uVar14) {
      if ((local_1c8 & 1) != 0) {
        FUN_143733a60(local_1c8 & 0xfffffffffffffffe);
      }
      if ((local_1b0 & 1) != 0) {
        FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
      }
      uVar8 = local_f0;
      lVar15 = local_f4 * 2 + local_100;
      uVar10 = uVar12;
      if (local_f0 != 0) {
        uVar10 = FUN_1437151a0(local_f0);
      }
      if ((uVar10 & 1) != 0) {
        FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
      }
      local_res10 = CONCAT44(local_res10._4_4_,local_e8);
      uStack_1a0 = uVar8;
      local_1a8 = lVar15;
      local_198 = uVar10;
      if ((uVar10 & 1) != 0) {
        FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_158,&local_1a8,local_108,&local_res10);
      if ((uVar10 & 1) != 0) {
        FUN_143733a60(uVar10 & 0xfffffffffffffffe);
      }
      FUN_1437c29e0(&local_158,local_128,4);
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      if ((local_88 & 1) != 0) {
        FUN_143733a60(local_88 & 0xfffffffffffffffe);
      }
      lVar15 = FUN_1437b97f0(local_70,local_98,"rotation1");
      FUN_1437d2be0(&local_1d8,local_128,local_res10 & 0xff);
      uVar10 = local_1c8;
      uVar8 = uStack_1d0;
      local_1b0 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      if (uStack_1d0 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(uStack_1d0,1);
        bVar3 = bVar2;
        if (puVar9 != (undefined8 *)0x0) {
          bVar3 = (byte)*puVar9;
        }
        if ((bVar3 & 0xf) == 8) {
          local_1c0 = local_1d8;
          uStack_1b8 = uVar8;
          if ((uVar10 & 1) != 0) {
            FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
          }
          if ((local_1b0 & 1) != 0) {
            FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
          }
          local_1b0 = uVar10;
        }
      }
      if ((uVar10 & 1) != 0) {
        FUN_143733a60(uVar10 & 0xfffffffffffffffe);
      }
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      uVar8 = uVar12;
      if (*(longlong *)(lVar15 + 8) != 0) {
        puVar9 = (undefined8 *)FUN_143714490(*(longlong *)(lVar15 + 8),1);
        if (puVar9 != (undefined8 *)0x0) {
          bVar2 = (byte)*puVar9;
        }
        if ((bVar2 & 0xf) == 8) {
          FUN_1436fc440(&local_178,lVar15);
        }
      }
      do {
        lVar15 = FUN_143741d50(&local_178,local_c8,uVar8);
        local_1c8 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        bVar2 = 0;
        uVar10 = uVar12;
        if (*(longlong *)(lVar15 + 8) != 0) {
          puVar9 = (undefined8 *)FUN_143714490(*(longlong *)(lVar15 + 8),1);
          bVar3 = bVar2;
          if (puVar9 != (undefined8 *)0x0) {
            bVar3 = (byte)*puVar9;
          }
          if ((bVar3 & 0xf) == 5) {
            FUN_1436fc440(&local_1d8,lVar15);
            uVar10 = local_1c8;
          }
        }
        if ((local_b8 & 1) != 0) {
          FUN_143733a60(local_b8 & 0xfffffffffffffffe);
        }
        lVar15 = FUN_143741d50(&local_1c0,local_e0,uVar8);
        local_198 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        uVar11 = uVar12;
        if (*(longlong *)(lVar15 + 8) != 0) {
          puVar9 = (undefined8 *)FUN_143714490(*(longlong *)(lVar15 + 8),1);
          bVar3 = bVar2;
          if (puVar9 != (undefined8 *)0x0) {
            bVar3 = (byte)*puVar9;
          }
          if ((bVar3 & 0xf) == 5) {
            FUN_1436fc440(&local_1a8,lVar15);
            uVar11 = local_198;
          }
        }
        if ((local_d0 & 1) != 0) {
          FUN_143733a60(local_d0 & 0xfffffffffffffffe);
        }
        local_188 = 0;
        plVar6 = (longlong *)(uVar10 & 0xfffffffffffffffe);
        (**(code **)(*plVar6 + 0x38))(plVar6,local_res18,local_1d8,uStack_1d0,&local_188);
        plVar7 = (longlong *)(uVar11 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_res20,local_1a8,uStack_1a0,local_188);
        if ((uVar11 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        if ((uVar10 & 1) != 0) {
          FUN_143733a60(plVar6);
        }
        uVar14 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar14;
      } while ((int)uVar14 < 4);
      if ((local_168 & 1) != 0) {
        FUN_143733a60(local_168 & 0xfffffffffffffffe);
      }
      if ((local_1b0 & 1) != 0) {
        FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
      }
      uVar8 = local_f0;
      lVar15 = local_f4 * 3 + local_100;
      uVar10 = uVar12;
      if (local_f0 != 0) {
        uVar10 = FUN_1437151a0(local_f0);
      }
      if ((uVar10 & 1) != 0) {
        FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
      }
      local_res10 = CONCAT44(local_res10._4_4_,local_e8);
      uStack_1d0 = uVar8;
      local_1d8 = lVar15;
      local_1c8 = uVar10;
      if ((uVar10 & 1) != 0) {
        FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_158,&local_1d8,local_108,&local_res10);
      if ((uVar10 & 1) != 0) {
        FUN_143733a60(uVar10 & 0xfffffffffffffffe);
      }
      FUN_1437c29e0(&local_158,local_128,4);
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      if ((local_88 & 1) != 0) {
        FUN_143733a60(local_88 & 0xfffffffffffffffe);
      }
      lVar15 = FUN_1437b97f0(local_70,local_98,"centerOfMassLocal");
      FUN_1437d2be0(&local_1d8,local_128,local_res10 & 0xff);
      uVar10 = local_1c8;
      uVar8 = uStack_1d0;
      local_1b0 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      if (uStack_1d0 != 0) {
        puVar9 = (undefined8 *)FUN_143714490(uStack_1d0,1);
        bVar3 = bVar2;
        if (puVar9 != (undefined8 *)0x0) {
          bVar3 = (byte)*puVar9;
        }
        if ((bVar3 & 0xf) == 8) {
          local_1c0 = local_1d8;
          uStack_1b8 = uVar8;
          if ((uVar10 & 1) != 0) {
            FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
          }
          if ((local_1b0 & 1) != 0) {
            FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
          }
          local_1b0 = uVar10;
        }
      }
      if ((uVar10 & 1) != 0) {
        FUN_143733a60(uVar10 & 0xfffffffffffffffe);
      }
      local_168 = 0;
      local_178 = 0;
      uStack_170 = 0;
      uVar8 = uVar12;
      if (*(longlong *)(lVar15 + 8) != 0) {
        puVar9 = (undefined8 *)FUN_143714490(*(longlong *)(lVar15 + 8),1);
        bVar3 = bVar2;
        if (puVar9 != (undefined8 *)0x0) {
          bVar3 = (byte)*puVar9;
        }
        if ((bVar3 & 0xf) == 8) {
          FUN_1436fc440(&local_178,lVar15);
        }
      }
      do {
        lVar15 = FUN_143741d50(&local_178,local_c8,uVar8);
        local_1c8 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        uVar10 = uVar12;
        if (*(longlong *)(lVar15 + 8) != 0) {
          puVar9 = (undefined8 *)FUN_143714490(*(longlong *)(lVar15 + 8),1);
          bVar3 = bVar2;
          if (puVar9 != (undefined8 *)0x0) {
            bVar3 = (byte)*puVar9;
          }
          if ((bVar3 & 0xf) == 5) {
            FUN_1436fc440(&local_1d8,lVar15);
            uVar10 = local_1c8;
          }
        }
        if ((local_b8 & 1) != 0) {
          FUN_143733a60(local_b8 & 0xfffffffffffffffe);
        }
        lVar15 = FUN_143741d50(&local_1c0,local_e0,uVar8);
        local_198 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        uVar11 = uVar12;
        if (*(longlong *)(lVar15 + 8) != 0) {
          puVar9 = (undefined8 *)FUN_143714490(*(longlong *)(lVar15 + 8),1);
          bVar3 = bVar2;
          if (puVar9 != (undefined8 *)0x0) {
            bVar3 = (byte)*puVar9;
          }
          if ((bVar3 & 0xf) == 5) {
            FUN_1436fc440(&local_1a8,lVar15);
            uVar11 = local_198;
          }
        }
        if ((local_d0 & 1) != 0) {
          FUN_143733a60(local_d0 & 0xfffffffffffffffe);
        }
        local_188 = 0;
        plVar6 = (longlong *)(uVar10 & 0xfffffffffffffffe);
        (**(code **)(*plVar6 + 0x38))(plVar6,local_res18,local_1d8,uStack_1d0,&local_188);
        plVar7 = (longlong *)(uVar11 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x30))(plVar7,&local_res20,local_1a8,uStack_1a0,local_188);
        if ((uVar11 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
        if ((uVar10 & 1) != 0) {
          FUN_143733a60(plVar6);
        }
        uVar14 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar14;
      } while ((int)uVar14 < 4);
      if ((local_168 & 1) != 0) {
        FUN_143733a60(local_168 & 0xfffffffffffffffe);
      }
      if ((local_1b0 & 1) != 0) {
        FUN_143733a60(local_1b0 & 0xfffffffffffffffe);
      }
      lVar15 = local_f4 * 4 + local_100;
      if (local_f0 != 0) {
        uVar12 = FUN_1437151a0(local_f0);
      }
      if ((uVar12 & 1) != 0) {
        FUN_1437329e0(uVar12 & 0xfffffffffffffffe);
      }
      local_res10 = CONCAT44(local_res10._4_4_,local_e8);
      uStack_1d0 = local_f0;
      local_1d8 = lVar15;
      local_1c8 = uVar12;
      if ((uVar12 & 1) != 0) {
        FUN_1437329e0(uVar12 & 0xfffffffffffffffe);
      }
      FUN_1437b7f80(&local_158,&local_1d8,local_108,&local_res10);
      if ((uVar12 & 1) != 0) {
        FUN_143733a60(uVar12 & 0xfffffffffffffffe);
      }
      FUN_1437c29e0(&local_158,local_128,4);
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      if ((local_88 & 1) != 0) {
        FUN_143733a60(local_88 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_70);
      return;
    }
  } while( true );
}



// FUNCTION 1437d2be0 FUN_1437d2be0 body=150 status=ok
// SIG undefined FUN_1437d2be0(void)

undefined8 * FUN_1437d2be0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == 0) {
    puVar2 = &local_18;
    local_18 = 0;
    uStack_10 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_14371d5c0(&local_18,param_2,&DAT_1467e5ab0);
  }
  lVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    uVar3 = FUN_1437151a0();
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  param_1[2] = uVar3;
  return param_1;
}



// FUNCTION 1437d2c80 FUN_1437d2c80 body=428 status=ok
// SIG undefined FUN_1437d2c80(void)

void FUN_1437d2c80(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexBufferVertexData_145be8990);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAnimatedQuaternion_145be89b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAnimatedMatrix_145be89e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexVectorDataChannel_145be8a08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxAnimatedVector_145be8a30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8a58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSweptTransform_145be8a80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkQTransform_145be8aa8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkFourTransposedPoints_145be8ad0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMotionState_145be8af8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSkinnedRefMeshShape_145be8b20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSymmetricMatrix3_145be8b48);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8b70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8b98);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8bc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8be8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8c10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSkinnedMeshShapePart_145be8c38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkStorageSkinnedMeshShape_145be8c60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSkinnedMeshShapeBoneSection_145be8c88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkGeometry_145be8cb0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8cd8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8d00);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8d28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkRefCountedProperties_145be8d50);
                    /* WARNING: Could not recover jumptable at 0x0001437d2e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145be8d78);
  return;
}



// FUNCTION 1437d2e30 FUN_1437d2e30 body=44 status=ok
// SIG undefined FUN_1437d2e30(void)

void FUN_1437d2e30(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStaticTree_145be8dc0);
                    /* WARNING: Could not recover jumptable at 0x0001437d2e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDynamicTree_145be8e00);
  return;
}



// FUNCTION 1437d2e60 FUN_1437d2e60 body=248 status=ok
// SIG undefined FUN_1437d2e60(void)

void FUN_1437d2e60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [48];
  
  uVar1 = FUN_1437b97f0(param_1,local_88,&DAT_145bb9f40);
  FUN_1437bad30(uVar1,local_38);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_88,&DAT_145beba70);
  FUN_1437bad30(uVar1,local_60);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_60,local_88,"faceKey");
  FUN_1437b8850(uVar1,local_38);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(local_60,local_88,"edgeOffset");
  FUN_1437b8e40(uVar1,0xffffffff);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_60);
  FUN_1437b87d0(local_38);
  return;
}



// FUNCTION 1437d2f60 FUN_1437d2f60 body=716 status=ok
// SIG undefined FUN_1437d2f60(void)

void FUN_1437d2f60(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverAvoidanceProp_145beba88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverMovementPrope_145bebac8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebb08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bebb48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGenerator_145bebb70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteeringInput_145bebb98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilInputBase_145bebbc0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiJumpDetectionSettingsTraject_145bebbe8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiJumpDetectionSettingsJumpDes_145bebc10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiJumpDetectionSettings_145bebc38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManagerSection_145bebc60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManager_145bebc88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsWal_145bebcb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bebcd8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGenerator_145bebd00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiConvexSilhouetteSet_145bebd28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiReferenceFrameAndExtrusion_145bebd50);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebd78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgePathEdge_145bebda0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsEx_145bebdc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bebdf0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsEx_145bebe18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bebe40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceProperties_145bebe68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebe90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebeb8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebef8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebf40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebf88);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebfc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bebff0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bec018);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bec058);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bec080);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSplitGenerationUtilsSettings_145bec0c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bec0e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgePath_145bec110);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathFollowingProperties_145bec138);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bec160);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bec1a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bec1f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145bec230);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiRigidBodySilhouetteGenerator_145bec258);
                    /* WARNING: Could not recover jumptable at 0x0001437d3228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bec2a8);
  return;
}



// FUNCTION 1437d3230 FUN_1437d3230 body=922 status=ok
// SIG undefined FUN_1437d3230(void)

void FUN_1437d3230(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [48];
  
  uVar4 = FUN_1437b97f0(param_1,&local_118,"storage");
  FUN_1437bad30(uVar4,local_58);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"numBits");
  uVar2 = FUN_1437b3cf0(uVar4);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(local_58,&local_118,"numBits");
  FUN_1437b8e40(uVar4,uVar2);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(param_1,&local_118,"words");
  FUN_1437bac00(uVar4,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar4 = FUN_1437b97f0(local_58,&local_118,"words");
  FUN_1437bac00(uVar4,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_c8);
  FUN_1437beb60(local_90,iVar3);
  lVar7 = local_a0;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    lVar9 = local_a4 * iVar3 + local_b0;
    local_a0 = lVar7;
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1437151a0(lVar7);
    }
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    uVar2 = local_98;
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    uVar4 = local_b8;
    local_118 = lVar9;
    local_110 = lVar7;
    local_108 = uVar5;
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    local_100 = uVar4;
    local_f8 = uVar2;
    if (local_118 != 0) {
      puVar6 = (undefined8 *)FUN_143714490(local_110,1);
      if (puVar6 == (undefined8 *)0x0) {
        bVar8 = 0;
      }
      else {
        bVar8 = (byte)*puVar6;
      }
      lVar7 = 0;
      if ((bVar8 & 0xf) == 7) {
        lVar7 = local_110;
      }
      if (lVar7 != 0) {
        FUN_1437b9940(&local_118);
      }
    }
    if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
      FUN_143733a60(uVar5 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b3cf0(&local_118);
    lVar7 = local_68;
    lVar9 = local_6c * iVar3 + local_78;
    if (local_68 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1437151a0(local_68);
    }
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    uVar1 = local_60;
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    uVar4 = local_80;
    local_e8 = lVar7;
    local_f0 = lVar9;
    local_e0 = uVar5;
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    lVar7 = local_e8;
    local_d8 = uVar4;
    local_d0 = uVar1;
    if (local_f0 != 0) {
      puVar6 = (undefined8 *)FUN_143714490(local_e8,1);
      if (puVar6 == (undefined8 *)0x0) {
        bVar8 = 0;
      }
      else {
        bVar8 = (byte)*puVar6;
      }
      lVar9 = 0;
      if ((bVar8 & 0xf) == 7) {
        lVar9 = lVar7;
      }
      if (lVar9 != 0) {
        FUN_1437b9940(&local_f0);
      }
    }
    if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
      FUN_143733a60(uVar5 & 0xfffffffffffffffe);
    }
    FUN_1437b9020(&local_f0,uVar2);
    if ((local_e0 & 1) != 0) {
      FUN_143733a60(local_e0 & 0xfffffffffffffffe);
    }
    lVar7 = local_a0;
    if ((local_108 & 1) != 0) {
      FUN_143733a60(local_108 & 0xfffffffffffffffe);
      lVar7 = local_a0;
    }
  }
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437d35d0 FUN_1437d35d0 body=220 status=ok
// SIG undefined FUN_1437d35d0(void)

void FUN_1437d35d0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145beca50);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145beca78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkBitField_145becaa0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145becad8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145becb00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshMaterial_145becb28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterial_145becb50);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145becb78);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145becbc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkBitField_new_145becbf0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkPackfileSectionHeader_145becc18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145becc58);
                    /* WARNING: Could not recover jumptable at 0x0001437d36a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145becc80);
  return;
}



// FUNCTION 1437d36b0 FUN_1437d36b0 body=60 status=ok
// SIG undefined FUN_1437d36b0(void)

void FUN_1437d36b0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bed000);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bed028);
                    /* WARNING: Could not recover jumptable at 0x0001437d36e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bed060);
  return;
}



// FUNCTION 1437d36f0 FUN_1437d36f0 body=208 status=ok
// SIG undefined FUN_1437d36f0(void)

void FUN_1437d36f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = FUN_1437b97f0(param_1,local_30,"maxOpenSetSizeBytes");
  uVar2 = FUN_1437b3cf0(uVar1);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_30,"maxSearchStateSizeBytes");
  uVar3 = FUN_1437b3cf0(uVar1);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_30,"bufferSizes");
  FUN_1437bad30(uVar1,local_58);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  FUN_1437d3ba0(local_58,uVar2,uVar3);
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437d37c0 FUN_1437d37c0 body=61 status=ok
// SIG undefined FUN_1437d37c0(void)

void FUN_1437d37c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"edgeCost");
  FUN_1437b91e0(uVar1,0xbf800000);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d3800 FUN_1437d3800 body=389 status=ok
// SIG undefined FUN_1437d3800(void)

void FUN_1437d3800(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_60 [40];
  undefined1 local_38 [48];
  
  uVar1 = FUN_1437b97f0(param_1,local_88,"maxOpenSetSizeBytes");
  uVar2 = FUN_1437b3cf0(uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_88,"maxSearchStateSizeBytes");
  uVar3 = FUN_1437b3cf0(uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_88,"bufferSizes");
  FUN_1437bad30(uVar1,local_38);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437d3ba0(local_38,uVar2,uVar3);
  uVar1 = FUN_1437b97f0(param_1,local_88,"maxHierarchyOpenSetSizeBytes");
  uVar2 = FUN_1437b3cf0(uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_88,"maxHierarchySearchStateSizeBytes");
  uVar3 = FUN_1437b3cf0(uVar1);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_88,"hierarchyBufferSizes");
  FUN_1437bad30(uVar1,local_60);
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  FUN_1437d3ba0(local_60,uVar2,uVar3);
  FUN_1437b87d0(local_60);
  FUN_1437b87d0(local_38);
  return;
}



// FUNCTION 1437d3990 FUN_1437d3990 body=524 status=ok
// SIG undefined FUN_1437d3990(void)

void FUN_1437d3990(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderSilhouette_145bee3d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCuttingGeometryInfo_145bee3f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bee420);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsEdg_145bee468);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsReg_145bee4b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGraphPathSearchParameters_145bee4e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_145bee508);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAstarOutputParameters_145bee530);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bee558);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bee5a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bee5e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bee610);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumePathSearchParameter_145bee638);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGraphPathSearchParameters_145bee660);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSetGraphConnection_145bee688);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphInstance_145bee6b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSetGraphConnection_145bee6d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindGraphPath_145bee700);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindGraphPath_145bee728);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSetGraphConnection_145bee750);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdgeMatchingParameter_145bee778);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSplitGenerationUtilsSettings_145bee7a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsEx_145bee7c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiHierarchyUtilsClusterSetting_145bee7f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bee818);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145bee868);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bee890);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiMovementProperties_145bee8b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bee8e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bee908);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bee930);
                    /* WARNING: Could not recover jumptable at 0x0001437d3b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bee958);
  return;
}



// FUNCTION 1437d3ba0 FUN_1437d3ba0 body=134 status=ok
// SIG undefined FUN_1437d3ba0(void)

void FUN_1437d3ba0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"maxOpenSetSizeBytes");
  FUN_1437b8e40(uVar1,param_2);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_1437b97f0(param_1,local_38,"maxSearchStateSizeBytes");
  FUN_1437b8e40(uVar1,param_3);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d3c30 FUN_1437d3c30 body=1820 status=ok
// SIG undefined FUN_1437d3c30(void)

void FUN_1437d3c30(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong local_138;
  ulonglong local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  longlong local_d0;
  int local_c4;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong local_98;
  int local_8c;
  ulonglong local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  longlong local_60;
  int local_54;
  ulonglong local_50;
  undefined4 local_48;
  
  uVar3 = FUN_1437b97f0(param_1,&local_138,"data_old");
  FUN_1437bac00(uVar3,local_78);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_1437b97f0(param_1,&local_138,"extras");
  FUN_1437bac00(uVar3,local_b0);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_1437b97f0(param_1,&local_138,&DAT_145b138b0);
  FUN_1437bac00(uVar3,local_e8);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  FUN_1437beb60(local_e8,8);
  uVar10 = 0;
  uVar4 = uVar10;
  do {
    uVar6 = local_50;
    iVar11 = (int)uVar4;
    lVar12 = local_54 * iVar11 + local_60;
    uVar4 = uVar10;
    if (local_50 != 0) {
      uVar4 = FUN_1437151a0(local_50);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar2 = local_48;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    local_130 = uVar6;
    local_138 = lVar12;
    local_128 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar6 = local_130;
    local_118 = uVar2;
    bVar8 = 0;
    if (local_138 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_130,1);
      bVar9 = bVar8;
      if (puVar5 != (undefined8 *)0x0) {
        bVar9 = (byte)*puVar5;
      }
      uVar7 = uVar10;
      if ((bVar9 & 0xf) == 7) {
        uVar7 = uVar6;
      }
      if (uVar7 != 0) {
        FUN_1437b9940(&local_138);
      }
    }
    if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_1437b3cf0(&local_138);
    uVar4 = local_c0;
    lVar12 = local_c4 * iVar11 + local_d0;
    uVar6 = uVar10;
    if (local_c0 != 0) {
      uVar6 = FUN_1437151a0(local_c0);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar1 = local_b8;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_108 = uVar4;
    local_110 = lVar12;
    local_100 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = local_108;
    local_f0 = uVar1;
    if (local_110 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_108,1);
      bVar9 = bVar8;
      if (puVar5 != (undefined8 *)0x0) {
        bVar9 = (byte)*puVar5;
      }
      uVar7 = uVar10;
      if ((bVar9 & 0xf) == 7) {
        uVar7 = uVar4;
      }
      if (uVar7 != 0) {
        FUN_1437b9940(&local_110);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b8e40(&local_110,uVar2);
    if ((local_100 & 1) != 0) {
      FUN_143733a60(local_100 & 0xfffffffffffffffe);
    }
    if ((local_128 & 1) != 0) {
      FUN_143733a60(local_128 & 0xfffffffffffffffe);
    }
    uVar6 = local_88;
    lVar12 = local_98;
    uVar4 = (ulonglong)(iVar11 + 1U);
  } while ((int)(iVar11 + 1U) < 6);
  uVar4 = uVar10;
  if (local_88 != 0) {
    uVar4 = FUN_1437151a0(local_88);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = local_80;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = local_a0;
  local_110 = lVar12;
  local_108 = uVar6;
  local_100 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar6 = local_108;
  local_f8 = uVar3;
  local_f0 = uVar2;
  if (local_110 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_108,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar7 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      FUN_1437b9940(&local_110);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b3cf0(&local_110);
  uVar4 = local_c0;
  lVar12 = local_c4 * 6 + local_d0;
  uVar6 = uVar10;
  if (local_c0 != 0) {
    uVar6 = FUN_1437151a0(local_c0);
  }
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  uVar1 = local_b8;
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  uVar3 = local_d8;
  local_130 = uVar4;
  local_138 = lVar12;
  local_128 = uVar6;
  if ((uVar6 & 1) != 0) {
    FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
  }
  uVar4 = local_130;
  local_120 = uVar3;
  local_118 = uVar1;
  if (local_138 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_130,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar7 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar7 = uVar4;
    }
    if (uVar7 != 0) {
      FUN_1437b9940(&local_138);
    }
  }
  if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
    FUN_143733a60(uVar6 & 0xfffffffffffffffe);
  }
  FUN_1437b8e40(&local_138,uVar2);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  uVar4 = uVar10;
  if (local_88 != 0) {
    uVar4 = FUN_1437151a0(local_88);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  local_108 = local_88;
  local_110 = local_8c + local_98;
  local_100 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar6 = local_108;
  local_f8 = local_a0;
  local_f0 = local_80;
  if (local_110 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_108,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar7 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      FUN_1437b9940(&local_110);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b3cf0(&local_110);
  lVar12 = local_c4 * 7 + local_d0;
  uVar4 = uVar10;
  if (local_c0 != 0) {
    uVar4 = FUN_1437151a0(local_c0);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  local_130 = local_c0;
  local_138 = lVar12;
  local_128 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar6 = local_130;
  local_120 = local_d8;
  local_118 = local_b8;
  if (local_138 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_130,1);
    if (puVar5 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar5;
    }
    if ((bVar8 & 0xf) == 7) {
      uVar10 = uVar6;
    }
    if (uVar10 != 0) {
      FUN_1437b9940(&local_138);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1437b8e40(&local_138,uVar2);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  if ((local_100 & 1) != 0) {
    FUN_143733a60(local_100 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d4350 FUN_1437d4350 body=108 status=ok
// SIG undefined FUN_1437d4350(void)

void FUN_1437d4350(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkPackfileHeader_145beeca0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkAabbHalf_145beecc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145beecf0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkUuid_145beed18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkUiAttribute_145beed40);
                    /* WARNING: Could not recover jumptable at 0x0001437d43b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145beed68);
  return;
}



// FUNCTION 1437d43c0 FUN_1437d43c0 body=284 status=ok
// SIG undefined FUN_1437d43c0(void)

void FUN_1437d43c0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumePathSearchParameter_145bef7b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bef7e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilInputBase_145bef808);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiHierarchyUtilsClusterSetting_145bef830);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bef858);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSplitGenerationUtilsSettings_145bef880);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bef8a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bef8d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilInputBase_145bef8f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiClimbUpAnalyzer_145bef920);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDuckUnderAnalyzer_145bef948);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVaultAnalyzer_145bef970);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDropDownAnalyzer_145bef998);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiJumpAnalyzer_145bef9c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceProperties_145bef9e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLocalSteeringInput_145befa10);
                    /* WARNING: Could not recover jumptable at 0x0001437d44d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsC_145befa38);
  return;
}



// FUNCTION 1437d44e0 FUN_1437d44e0 body=1403 status=ok
// SIG undefined FUN_1437d44e0(void)

void FUN_1437d44e0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  longlong local_98;
  int local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong local_60;
  int local_54;
  longlong local_50;
  undefined4 local_48;
  
  uVar3 = FUN_1437b97f0(param_1,&local_d8,"floatDataOld");
  FUN_1437bac00(uVar3,local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_1437b97f0(param_1,&local_d8,"floatData");
  FUN_1437bac00(uVar3,local_78);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_1437bcb20(local_b0);
  FUN_1437beb60(local_78,iVar2);
  lVar6 = local_88;
  while (iVar2 = iVar2 + -1, local_88 = lVar6, -1 < iVar2) {
    lVar8 = local_8c * iVar2 + local_98;
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(lVar6);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar9 = local_80;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar3 = local_a0;
    local_d8 = lVar8;
    local_d0 = lVar6;
    local_c8 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    local_c0 = uVar3;
    local_b8 = uVar9;
    if (local_d8 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_d0,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)*puVar5;
      }
      lVar6 = 0;
      if ((bVar7 & 0xf) == 7) {
        lVar6 = local_d0;
      }
      if (lVar6 != 0) {
        FUN_1437b9940(&local_d8);
      }
    }
    if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    }
    uVar9 = FUN_1437bafb0(&local_d8);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    lVar6 = local_50;
    lVar8 = local_54 * iVar2 + local_60;
    if (local_50 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(local_50);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar1 = local_48;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar3 = local_68;
    local_d0 = lVar6;
    local_d8 = lVar8;
    local_c8 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    lVar6 = local_d0;
    local_c0 = uVar3;
    local_b8 = uVar1;
    if (local_d8 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_d0,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)*puVar5;
      }
      lVar8 = 0;
      if ((bVar7 & 0xf) == 7) {
        lVar8 = lVar6;
      }
      if (lVar8 != 0) {
        FUN_1437b9940(&local_d8);
      }
    }
    if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    }
    FUN_1437b9020(&local_d8,uVar9);
    lVar6 = local_88;
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      lVar6 = local_88;
    }
  }
  uVar3 = FUN_1437b97f0(param_1,&local_d8,"vectorDataOld");
  FUN_1437bac00(uVar3,local_78);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_1437b97f0(param_1,&local_d8,"vectorData");
  FUN_1437bac00(uVar3,local_b0);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_1437bcb20(local_78);
  FUN_1437beb60(local_b0,iVar2);
  lVar6 = local_50;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    lVar8 = local_54 * iVar2 + local_60;
    local_50 = lVar6;
    if (lVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(lVar6);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar9 = local_48;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar3 = local_68;
    local_d8 = lVar8;
    local_d0 = lVar6;
    local_c8 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    local_c0 = uVar3;
    local_b8 = uVar9;
    if (local_d8 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_d0,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)*puVar5;
      }
      lVar6 = 0;
      if ((bVar7 & 0xf) == 7) {
        lVar6 = local_d0;
      }
      if (lVar6 != 0) {
        FUN_1437b9940(&local_d8);
      }
    }
    if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    }
    uVar9 = FUN_1437bafb0(&local_d8);
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
    }
    lVar6 = local_88;
    lVar8 = local_8c * iVar2 + local_98;
    if (local_88 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(local_88);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar1 = local_80;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar3 = local_a0;
    local_d0 = lVar6;
    local_d8 = lVar8;
    local_c8 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    lVar6 = local_d0;
    local_c0 = uVar3;
    local_b8 = uVar1;
    if (local_d8 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_d0,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)*puVar5;
      }
      lVar8 = 0;
      if ((bVar7 & 0xf) == 7) {
        lVar8 = lVar6;
      }
      if (lVar8 != 0) {
        FUN_1437b9940(&local_d8);
      }
    }
    if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    }
    FUN_1437b9020(&local_d8,uVar9);
    lVar6 = local_50;
    if ((local_c8 & 1) != 0) {
      FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      lVar6 = local_50;
    }
  }
  return;
}



// FUNCTION 1437d4a60 FUN_1437d4a60 body=156 status=ok
// SIG undefined FUN_1437d4a60(void)

void FUN_1437d4a60(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexDescriptionElementDecl_145bf01a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMeshSection_145bf01c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMeshSectionCinfo_145bf01f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMeshSection_145bf0218);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf0240);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshShape_145bf0268);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkUiAttribute_145bf0290);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexBufferVertexData_145bf02b8);
                    /* WARNING: Could not recover jumptable at 0x0001437d4af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf02e0);
  return;
}



// FUNCTION 1437d4b00 FUN_1437d4b00 body=1886 status=ok
// SIG undefined FUN_1437d4b00(void)

void FUN_1437d4b00(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 local_res20 [8];
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong lStack_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  longlong lStack_1a8;
  undefined8 local_1a0;
  longlong lStack_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined8 local_168;
  longlong lStack_160;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_130 [16];
  ulonglong local_120;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  undefined1 local_e0 [40];
  undefined1 local_b8 [40];
  undefined1 local_90 [16];
  ulonglong local_80;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  uVar2 = FUN_1437b97f0(param_1,local_130);
  FUN_1437bad30(uVar2,local_b8);
  if ((local_120 & 1) != 0) {
    FUN_143733a60(local_120 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(param_1,local_130,param_2);
  FUN_1437bad30(uVar2,local_e0);
  if ((local_120 & 1) != 0) {
    FUN_143733a60(local_120 & 0xfffffffffffffffe);
  }
  puVar3 = (undefined8 *)FUN_1437b97f0(local_b8,local_68,"translation");
  puVar4 = (undefined8 *)FUN_14371d5c0(local_108,&local_168,&DAT_1467e5ab0);
  local_1b0 = *puVar4;
  lVar7 = puVar4[1];
  lStack_1a8 = lVar7;
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1437151a0(lVar7);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_1c0 = 0;
  local_1d0 = 0;
  lStack_1c8 = 0;
  uVar10 = local_1c0;
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(lVar7,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    uVar10 = local_1c0;
    if ((bVar1 & 0xf) == 8) {
      local_1d0 = local_1b0;
      lStack_1c8 = lVar7;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar10 = uVar5;
      if ((local_1c0 & 1) != 0) {
        FUN_143733a60(local_1c0 & 0xfffffffffffffffe);
      }
    }
  }
  local_1c0 = uVar10;
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  local_178 = 0;
  local_188 = 0;
  uStack_180 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_188 = *puVar3;
      uStack_180 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_178 & 1) != 0) {
        FUN_143733a60(local_178 & 0xfffffffffffffffe);
      }
      local_178 = puVar3[2];
    }
  }
  iVar11 = 0;
  do {
    puVar3 = (undefined8 *)FUN_143741d50(&local_188,local_f8,iVar11);
    uVar5 = 0;
    local_1a0 = 0;
    lStack_198 = 0;
    if (puVar3[1] == 0) {
LAB_1437d4d45:
      local_1d8 = local_1a0;
      lVar7 = lStack_198;
    }
    else {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      bVar1 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar4;
      }
      if ((bVar1 & 0xf) != 5) goto LAB_1437d4d45;
      local_1d8 = *puVar3;
      lVar7 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar5 = puVar3[2];
    }
    if ((local_e8 & 1) != 0) {
      FUN_143733a60(local_e8 & 0xfffffffffffffffe);
    }
    puVar3 = (undefined8 *)FUN_143741d50(&local_1d0,local_130,iVar11);
    uVar10 = 0;
    local_148 = 0;
    uStack_140 = 0;
    uVar6 = uStack_140;
    uVar2 = local_148;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      bVar1 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar4;
      }
      uVar6 = uStack_140;
      uVar2 = local_148;
      if ((bVar1 & 0xf) == 5) {
        uVar2 = *puVar3;
        uVar6 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        uVar10 = puVar3[2];
      }
    }
    if ((local_120 & 1) != 0) {
      FUN_143733a60(local_120 & 0xfffffffffffffffe);
    }
    local_1b0 = 0;
    plVar8 = (longlong *)(uVar5 & 0xfffffffffffffffe);
    (**(code **)(*plVar8 + 0x38))(plVar8,local_res20,local_1d8,lVar7,&local_1b0);
    plVar9 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x30))(plVar9,local_1b8,uVar2,uVar6,local_1b0);
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(plVar9);
    }
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(plVar8);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  if ((local_1c0 & 1) != 0) {
    FUN_143733a60(local_1c0 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(local_e0,local_90,"translation");
  FUN_1437c29e0(uVar2,&local_168,4);
  if ((local_80 & 1) != 0) {
    FUN_143733a60(local_80 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  puVar3 = (undefined8 *)FUN_1437b97f0(local_b8,local_90,"rotation");
  puVar4 = (undefined8 *)FUN_14371d5c0(&local_188,local_108,&DAT_1467e5ab0);
  local_168 = *puVar4;
  lVar7 = puVar4[1];
  lStack_160 = lVar7;
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1437151a0(lVar7);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_190 = 0;
  local_1a0 = 0;
  lStack_198 = 0;
  uVar10 = local_190;
  if (lVar7 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(lVar7,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    uVar10 = local_190;
    if ((bVar1 & 0xf) == 8) {
      local_1a0 = local_168;
      lStack_198 = lVar7;
      if ((uVar5 & 1) != 0) {
        FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
      }
      uVar10 = uVar5;
      if ((local_190 & 1) != 0) {
        FUN_143733a60(local_190 & 0xfffffffffffffffe);
      }
    }
  }
  local_190 = uVar10;
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  local_1c0 = 0;
  local_1d0 = 0;
  lStack_1c8 = 0;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    if ((bVar1 & 0xf) == 8) {
      local_1d0 = *puVar3;
      lStack_1c8 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      if ((local_1c0 & 1) != 0) {
        FUN_143733a60(local_1c0 & 0xfffffffffffffffe);
      }
      local_1c0 = puVar3[2];
    }
  }
  iVar11 = 0;
  do {
    puVar3 = (undefined8 *)FUN_143741d50(&local_1d0,local_130,iVar11);
    uVar5 = 0;
    local_148 = 0;
    uStack_140 = 0;
    if (puVar3[1] == 0) {
LAB_1437d5095:
      local_1b0 = local_148;
      uVar2 = uStack_140;
    }
    else {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      bVar1 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar4;
      }
      if ((bVar1 & 0xf) != 5) goto LAB_1437d5095;
      local_1b0 = *puVar3;
      uVar2 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar5 = puVar3[2];
    }
    if ((local_120 & 1) != 0) {
      FUN_143733a60(local_120 & 0xfffffffffffffffe);
    }
    puVar3 = (undefined8 *)FUN_143741d50(&local_1a0,local_f8,iVar11);
    uVar10 = 0;
    local_168 = 0;
    lStack_160 = 0;
    lVar7 = lStack_160;
    uVar6 = local_168;
    if (puVar3[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
      bVar1 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        bVar1 = (byte)*puVar4;
      }
      lVar7 = lStack_160;
      uVar6 = local_168;
      if ((bVar1 & 0xf) == 5) {
        uVar6 = *puVar3;
        lVar7 = puVar3[1];
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
        }
        uVar10 = puVar3[2];
      }
    }
    if ((local_e8 & 1) != 0) {
      FUN_143733a60(local_e8 & 0xfffffffffffffffe);
    }
    local_1d8 = 0;
    plVar8 = (longlong *)(uVar5 & 0xfffffffffffffffe);
    (**(code **)(*plVar8 + 0x38))(plVar8,local_res20,local_1b0,uVar2,&local_1d8);
    plVar9 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x30))(plVar9,local_1b8,uVar6,lVar7,local_1d8);
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(plVar9);
    }
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(plVar8);
    }
    iVar11 = iVar11 + 1;
    if (3 < iVar11) {
      if ((local_1c0 & 1) != 0) {
        FUN_143733a60(local_1c0 & 0xfffffffffffffffe);
      }
      if ((local_190 & 1) != 0) {
        FUN_143733a60(local_190 & 0xfffffffffffffffe);
      }
      uVar2 = FUN_1437b97f0(local_e0,local_68,"rotation");
      FUN_1437c29e0(uVar2,local_108,4);
      if ((local_58 & 1) != 0) {
        FUN_143733a60(local_58 & 0xfffffffffffffffe);
      }
      if ((local_80 & 1) != 0) {
        FUN_143733a60(local_80 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_e0);
      FUN_1437b87d0(local_b8);
      return;
    }
  } while( true );
}



// FUNCTION 1437d5260 FUN_1437d5260 body=204 status=ok
// SIG undefined FUN_1437d5260(void)

void FUN_1437d5260(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf1268);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf1290);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf12b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf12e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf1308);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf1330);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf1358);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf1380);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf13a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf13d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf1410);
                    /* WARNING: Could not recover jumptable at 0x0001437d5328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdSimdTree_145bf1438);
  return;
}



// FUNCTION 1437d5350 FUN_1437d5350 body=125 status=ok
// SIG undefined FUN_1437d5350(void)

void FUN_1437d5350(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
  iVar2 = FUN_1437b3cf0(uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if (iVar2 == 3) {
    uVar1 = FUN_1437b97f0(param_1,local_38,&DAT_145af4d3c);
    FUN_1437b8e40(uVar1,5);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
  }
  return;
}



// FUNCTION 1437d5430 FUN_1437d5430 body=500 status=ok
// SIG undefined FUN_1437d5430(void)

void FUN_1437d5430(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  float *local_res10;
  float local_b8 [4];
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  longlong local_68;
  int local_5c;
  longlong local_58;
  undefined4 local_50;
  
  local_b8[0] = 0.0;
  local_b8[1] = 0.0;
  local_b8[2] = 0.0;
  local_b8[3] = 0.0;
  uVar4 = FUN_1437b97f0(param_1,&local_a8,"upOld");
  FUN_1437bac00(uVar4,local_80);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  local_res10 = local_b8;
  iVar8 = 0;
  do {
    lVar1 = local_58;
    lVar9 = local_5c * iVar8 + local_68;
    if (local_58 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1437151a0(local_58);
    }
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    uVar2 = local_50;
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    uVar4 = local_70;
    local_a0 = lVar1;
    local_a8 = lVar9;
    local_98 = uVar5;
    if ((uVar5 & 1) != 0) {
      FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
    }
    lVar1 = local_a0;
    local_90 = uVar4;
    local_88 = uVar2;
    if (local_a8 != 0) {
      puVar6 = (undefined8 *)FUN_143714490(local_a0,1);
      if (puVar6 == (undefined8 *)0x0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (byte)*puVar6;
      }
      lVar9 = 0;
      if ((bVar7 & 0xf) == 7) {
        lVar9 = lVar1;
      }
      if (lVar9 != 0) {
        FUN_1437b9940(&local_a8);
      }
    }
    if ((uVar5 & 1) != 0) {
      FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      if ((uVar5 & 1) != 0) {
        FUN_143733a60(uVar5 & 0xfffffffffffffffe);
      }
    }
    iVar3 = FUN_1437b3cf0(&local_a8);
    if ((local_98 & 1) != 0) {
      FUN_143733a60(local_98 & 0xfffffffffffffffe);
    }
    iVar8 = iVar8 + 1;
    *local_res10 = (float)(iVar3 * 0x10000 + -0x80000000) * 5.086263e-10;
    local_res10 = local_res10 + 1;
  } while (iVar8 < 3);
  uVar4 = FUN_1437b97f0(param_1,&local_a8,&DAT_145b136b4);
  FUN_1437c29e0(uVar4,local_b8,4);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d5630 FUN_1437d5630 body=948 status=ok
// SIG undefined FUN_1437d5630(void)

void FUN_1437d5630(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong local_158;
  longlong local_150;
  ulonglong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [16];
  ulonglong local_120;
  undefined1 local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  longlong local_c0;
  int local_b4;
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  int local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [48];
  
  FUN_1437b7c10(local_108,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  uVar4 = FUN_1437bcd90(local_108);
  FUN_1437bc0c0(uVar4,&local_f8,"hkaiCarver");
  uVar5 = FUN_1437b97f0(param_1,local_130,"carversOld");
  FUN_1437bac00(uVar5,local_d8);
  if ((local_120 & 1) != 0) {
    FUN_143733a60(local_120 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_1437b97f0(param_1,local_130,"carvers");
  FUN_1437bac00(uVar5,local_a0);
  if ((local_120 & 1) != 0) {
    FUN_143733a60(local_120 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_d8);
  FUN_1437beb60(local_a0,iVar3);
  iVar9 = 0;
  if (0 < iVar3) {
    do {
      lVar1 = local_b0;
      lVar10 = local_b4 * iVar9 + local_c0;
      if (local_b0 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1437151a0(local_b0);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = local_a8;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar5 = local_c8;
      local_150 = lVar1;
      local_158 = lVar10;
      local_148 = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      lVar1 = local_150;
      local_140 = uVar5;
      local_138 = uVar2;
      if (local_158 != 0) {
        puVar7 = (undefined8 *)FUN_143714490(local_150,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = (byte)*puVar7;
        }
        lVar10 = 0;
        if ((bVar8 & 0xf) == 7) {
          lVar10 = lVar1;
        }
        if (lVar10 != 0) {
          FUN_1437b9940(&local_158);
        }
      }
      if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
      FUN_1437bad30(&local_158,local_130);
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      local_e8 = local_f8;
      uStack_e4 = uStack_f4;
      uStack_e0 = uStack_f0;
      uStack_dc = uStack_ec;
      FUN_1437be120(uVar4,local_68,&local_e8);
      uVar5 = FUN_1437b97f0(local_68,&local_158,"volume");
      FUN_1437b8850(uVar5,local_130);
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      lVar1 = local_78;
      lVar10 = local_7c * iVar9 + local_88;
      if (local_78 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1437151a0(local_78);
      }
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar2 = local_70;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      uVar5 = local_90;
      local_150 = lVar1;
      local_158 = lVar10;
      local_148 = uVar6;
      if ((uVar6 & 1) != 0) {
        FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
      }
      lVar1 = local_150;
      local_140 = uVar5;
      local_138 = uVar2;
      if (local_158 != 0) {
        puVar7 = (undefined8 *)FUN_143714490(local_150,1);
        if (puVar7 == (undefined8 *)0x0) {
          bVar8 = 0;
        }
        else {
          bVar8 = (byte)*puVar7;
        }
        lVar10 = 0;
        if ((bVar8 & 0xf) == 7) {
          lVar10 = lVar1;
        }
        if (lVar10 != 0) {
          FUN_1437b9940(&local_158);
        }
      }
      if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
        FUN_143733a60(uVar6 & 0xfffffffffffffffe);
      }
      FUN_1437b8850(&local_158,local_68);
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      FUN_1437b87d0(local_68);
      FUN_1437b87d0(local_130);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  return;
}



// FUNCTION 1437d59f0 FUN_1437d59f0 body=460 status=ok
// SIG undefined FUN_1437d59f0(void)

void FUN_1437d59f0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bf2be0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumePathSearchParameter_145bf2c08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bf2c30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSplitGenerationUtilsSettings_145bf2c58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2c80);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2ca8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2cd0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2cf8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2d20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeInstance_145bf2d60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_145bf2d88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bf2db0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bf2dd8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2e00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationSnapsho_145bf2e28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bf2e50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings_145bf2e78);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2ea0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf2ee8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bf2f10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGenerator_145bf2f38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsOve_145bf2f60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bf2f88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiClimbUpAnalyzer_145bf2fb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDropDownAnalyzer_145bf2fd8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGenerator_145bf3000);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiConvexSilhouetteSet_145bf3028);
                    /* WARNING: Could not recover jumptable at 0x0001437d5bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGeneratorSectionCo_145bf3050);
  return;
}



// FUNCTION 1437d5bc0 FUN_1437d5bc0 body=109 status=ok
// SIG undefined FUN_1437d5bc0(void)

void FUN_1437d5bc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_68 [16];
  undefined1 local_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = FUN_1437b97f0(param_1,local_30,&DAT_145b8a188);
  FUN_1437bad30(uVar1,local_58);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  FUN_14375ef60(local_68);
  FUN_14375f240(local_68);
  FUN_1437d5c30(local_58,local_68);
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437d5c30 FUN_1437d5c30 body=1130 status=ok
// SIG undefined FUN_1437d5c30(void)

void FUN_1437d5c30(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  undefined4 local_40;
  
  uVar3 = FUN_1437b97f0(param_1,&local_98,&DAT_145b138b0);
  FUN_1437bac00(uVar3,local_70);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar7 = local_48;
  lVar11 = local_58;
  uVar10 = 0;
  uVar1 = *param_2;
  uVar4 = uVar10;
  if (local_48 != 0) {
    uVar4 = FUN_1437151a0(local_48);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = local_40;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = local_60;
  local_98 = lVar11;
  local_90 = uVar7;
  local_88 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar7 = local_90;
  local_80 = uVar3;
  local_78 = uVar2;
  bVar8 = 0;
  if (local_98 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_90,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar6 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_98);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1437b9020(&local_98,uVar1);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar7 = local_48;
  lVar11 = local_4c + local_58;
  uVar1 = param_2[1];
  uVar4 = uVar10;
  if (local_48 != 0) {
    uVar4 = FUN_1437151a0(local_48);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = local_40;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = local_60;
  local_90 = uVar7;
  local_98 = lVar11;
  local_88 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar7 = local_90;
  local_80 = uVar3;
  local_78 = uVar2;
  if (local_98 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_90,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar6 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_98);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1437b9020(&local_98,uVar1);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar7 = local_48;
  uVar1 = param_2[2];
  lVar11 = local_4c * 2 + local_58;
  uVar4 = uVar10;
  if (local_48 != 0) {
    uVar4 = FUN_1437151a0(local_48);
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar2 = local_40;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar3 = local_60;
  local_90 = uVar7;
  local_98 = lVar11;
  local_88 = uVar4;
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  uVar7 = local_90;
  local_80 = uVar3;
  local_78 = uVar2;
  if (local_98 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_90,1);
    bVar9 = bVar8;
    if (puVar5 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar5;
    }
    uVar6 = uVar10;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar7;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_98);
    }
  }
  if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
    FUN_143733a60(uVar4 & 0xfffffffffffffffe);
  }
  FUN_1437b9020(&local_98,uVar1);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar1 = param_2[3];
  lVar11 = local_4c * 3 + local_58;
  uVar7 = uVar10;
  if (local_48 != 0) {
    uVar7 = FUN_1437151a0(local_48);
  }
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  local_90 = local_48;
  local_98 = lVar11;
  local_88 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  uVar4 = local_90;
  local_80 = local_60;
  local_78 = local_40;
  if (local_98 != 0) {
    puVar5 = (undefined8 *)FUN_143714490(local_90,1);
    if (puVar5 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar5;
    }
    if ((bVar8 & 0xf) == 7) {
      uVar10 = uVar4;
    }
    if (uVar10 != 0) {
      FUN_1437b9940(&local_98);
    }
  }
  if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
    FUN_143733a60(uVar7 & 0xfffffffffffffffe);
  }
  FUN_1437b9020(&local_98,uVar1);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d60a0 FUN_1437d60a0 body=92 status=ok
// SIG undefined FUN_1437d60a0(void)

void FUN_1437d60a0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkAabbD_145bf32a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf32c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkDocumentationAttribute_145bf32f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf3318);
                    /* WARNING: Could not recover jumptable at 0x0001437d60f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxNode_145bf3340);
  return;
}



// FUNCTION 1437d6100 FUN_1437d6100 body=156 status=ok
// SIG undefined FUN_1437d6100(void)

void FUN_1437d6100(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf3a40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf3a68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf3ab0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf3b00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarCsgOperand_145bf3b28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarSolidNodeStorage_145bf3b50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarSolidNode_145bf3b78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarCsgOperandGeomSource_145bf3ba0);
                    /* WARNING: Could not recover jumptable at 0x0001437d6198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf3bc8);
  return;
}



// FUNCTION 1437d61a0 FUN_1437d61a0 body=275 status=ok
// SIG undefined FUN_1437d61a0(void)

void FUN_1437d61a0(undefined8 param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_40 [56];
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = *(undefined4 **)((longlong)pvVar1 + 0x18);
  if ((*(int *)((longlong)pvVar1 + 0x10) < 0x80) ||
     (*(undefined4 **)((longlong)pvVar1 + 0x20) < puVar2 + 0x20)) {
    puVar2 = (undefined4 *)FUN_1437138c0(pvVar1,0x80);
  }
  else {
    *(undefined4 **)((longlong)pvVar1 + 0x18) = puVar2 + 0x20;
  }
  puVar5 = puVar2;
  for (lVar4 = 0x20; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  uVar3 = FUN_1437b97f0(param_1,local_68,"faceMaskLookupTable");
  uVar3 = FUN_1437bac00(uVar3,local_40);
  FUN_1437d6380(uVar3,puVar2,0x20);
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  if (((*(int *)((longlong)pvVar1 + 0x10) < 0x80) ||
      (puVar2 + 0x20 != *(undefined4 **)((longlong)pvVar1 + 0x18))) ||
     (*(undefined4 **)((longlong)pvVar1 + 0x28) == puVar2)) {
    FUN_143713ff0(pvVar1,puVar2,0x80);
  }
  else {
    *(undefined4 **)((longlong)pvVar1 + 0x18) = puVar2;
  }
  FUN_143703a50();
  return;
}



// FUNCTION 1437d62c0 FUN_1437d62c0 body=57 status=ok
// SIG undefined FUN_1437d62c0(void)

void FUN_1437d62c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar1 = FUN_1437b97f0(param_1,local_38,"currentNavVolumeCell");
  FUN_1437b9560(uVar1,0xffffffffffffffff);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d6300 FUN_1437d6300 body=116 status=ok
// SIG undefined FUN_1437d6300(void)

void FUN_1437d6300(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = FUN_1437b97f0(param_1,local_30,"magic");
  uVar2 = FUN_1437b97f0(param_1,local_58,"faceMapping");
  FUN_1437b87f0(uVar2,uVar1);
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d6380 FUN_1437d6380 body=416 status=ok
// SIG undefined FUN_1437d6380(void)

void FUN_1437d6380(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *local_res10;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  FUN_1437beb60(param_1,param_3);
  iVar8 = 0;
  local_res10 = param_2;
  if (0 < param_3) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar7 = (longlong)(iVar8 * *(int *)(param_1 + 0x24)) + *(longlong *)(param_1 + 0x18);
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_1437151a0(lVar2);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      local_68 = lVar7;
      local_60 = lVar2;
      local_58 = uVar4;
      if ((uVar4 & 1) != 0) {
        FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
      }
      lVar2 = local_60;
      local_50 = uVar3;
      local_48 = uVar1;
      if (local_68 != 0) {
        puVar5 = (undefined8 *)FUN_143714490(local_60,1);
        if (puVar5 == (undefined8 *)0x0) {
          bVar6 = 0;
        }
        else {
          bVar6 = (byte)*puVar5;
        }
        lVar7 = 0;
        if ((bVar6 & 0xf) == 7) {
          lVar7 = lVar2;
        }
        if (lVar7 != 0) {
          FUN_1437b9940(&local_68);
        }
      }
      if (((uVar4 & 1) != 0) && (FUN_143733a60(uVar4 & 0xfffffffffffffffe), (uVar4 & 1) != 0)) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
      FUN_1437b9020(&local_68,*local_res10);
      if ((local_58 & 1) != 0) {
        FUN_143733a60(local_58 & 0xfffffffffffffffe);
      }
      local_res10 = local_res10 + 1;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_3);
  }
  return;
}



// FUNCTION 1437d6520 FUN_1437d6520 body=588 status=ok
// SIG undefined FUN_1437d6520(void)

void FUN_1437d6520(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6b90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6bb8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6be0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6c08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6c30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6c58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6c98);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6cc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6d08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6d50);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6d78);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6da0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6dc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6df0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6e18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6e40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6e68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6e90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6eb8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6ee0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6f28);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf6f50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsReg_145bf6f98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bf6fc0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145bf6fe8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_145bf7010);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145bf7038);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollection_145bf7060);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145bf7088);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDefaultAstarEdgeFilter_145bf70b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiClimbUpAnalyzer_145bf70d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVaultAnalyzer_145bf7100);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDropDownAnalyzer_145bf7128);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterMeshInfo_145bf7150);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145bf7178);
                    /* WARNING: Could not recover jumptable at 0x0001437d6768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_145bf71a0);
  return;
}



// FUNCTION 1437d6780 FUN_1437d6780 body=188 status=ok
// SIG undefined FUN_1437d6780(void)

void FUN_1437d6780(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  uVar1 = FUN_1437b97f0(param_1,local_30,"material");
  uVar1 = FUN_1437b4040(uVar1);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(param_1,local_30,"newMaterial");
  FUN_1437bad30(uVar2,local_58);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(local_58,local_30,&DAT_145b85670);
  FUN_1437b9560(uVar2,uVar1);
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437d6840 FUN_1437d6840 body=44 status=ok
// SIG undefined FUN_1437d6840(void)

void FUN_1437d6840(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf73f0);
                    /* WARNING: Could not recover jumptable at 0x0001437d6868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarSolidNode_145bf7418);
  return;
}



// FUNCTION 1437d6870 FUN_1437d6870 body=2247 status=ok
// SIG undefined FUN_1437d6870(void)

void FUN_1437d6870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  ulonglong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  ulonglong local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar2 = FUN_1437b97f0(param_1,&local_118,param_2);
  FUN_1437bac00(uVar2,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(param_1,local_58,param_3);
  uVar2 = FUN_1437bad30(uVar2,&local_f0);
  uVar2 = FUN_1437b97f0(uVar2,&local_118,&DAT_145b83630);
  FUN_1437bac00(uVar2,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(&local_f0);
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar5 = local_a0;
  lVar10 = local_b0;
  uVar9 = 0;
  uVar3 = uVar9;
  if (local_a0 != 0) {
    uVar3 = FUN_1437151a0(local_a0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_98;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_b8;
  local_118 = lVar10;
  local_110 = uVar5;
  local_108 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_110;
  local_100 = uVar2;
  local_f8 = uVar1;
  bVar7 = 0;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_68;
  lVar10 = local_78;
  uVar3 = uVar9;
  if (local_68 != 0) {
    uVar3 = FUN_1437151a0(local_68);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_60;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_80;
  local_f0 = lVar10;
  local_e8 = uVar5;
  local_e0 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  local_d8 = uVar2;
  local_d0 = uVar1;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_f0,&local_118);
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar5 = local_a0;
  lVar10 = local_a4 + local_b0;
  uVar3 = uVar9;
  if (local_a0 != 0) {
    uVar3 = FUN_1437151a0(local_a0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_98;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_b8;
  local_e8 = uVar5;
  local_f0 = lVar10;
  local_e0 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  local_d8 = uVar2;
  local_d0 = uVar1;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_68;
  lVar10 = local_6c + local_78;
  uVar3 = uVar9;
  if (local_68 != 0) {
    uVar3 = FUN_1437151a0(local_68);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_60;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_80;
  local_110 = uVar5;
  local_118 = lVar10;
  local_108 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_110;
  local_100 = uVar2;
  local_f8 = uVar1;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_118,&local_f0);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  uVar5 = local_a0;
  lVar10 = local_a4 * 2 + local_b0;
  uVar3 = uVar9;
  if (local_a0 != 0) {
    uVar3 = FUN_1437151a0(local_a0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_98;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_b8;
  local_e8 = uVar5;
  local_f0 = lVar10;
  local_e0 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  local_d8 = uVar2;
  local_d0 = uVar1;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_68;
  lVar10 = local_6c * 2 + local_78;
  uVar3 = uVar9;
  if (local_68 != 0) {
    uVar3 = FUN_1437151a0(local_68);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_60;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_80;
  local_110 = uVar5;
  local_118 = lVar10;
  local_108 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_110;
  local_100 = uVar2;
  local_f8 = uVar1;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_118,&local_f0);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  lVar10 = local_a4 * 3 + local_b0;
  uVar5 = uVar9;
  if (local_a0 != 0) {
    uVar5 = FUN_1437151a0(local_a0);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_e8 = local_a0;
  local_f0 = lVar10;
  local_e0 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  uVar3 = local_e8;
  local_d8 = local_b8;
  local_d0 = local_98;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  lVar10 = local_6c * 3 + local_78;
  uVar5 = uVar9;
  if (local_68 != 0) {
    uVar5 = FUN_1437151a0(local_68);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_110 = local_68;
  local_118 = lVar10;
  local_108 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  uVar3 = local_110;
  local_100 = local_80;
  local_f8 = local_60;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar7 = (byte)*puVar4;
    }
    if ((bVar7 & 0xf) == 7) {
      uVar9 = uVar3;
    }
    if (uVar9 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_118,&local_f0);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d7140 FUN_1437d7140 body=869 status=ok
// SIG undefined FUN_1437d7140(void)

void FUN_1437d7140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  byte bVar9;
  longlong lVar10;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  longlong local_e8;
  int local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  int local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined1 local_68 [64];
  
  uVar6 = FUN_1437b97f0(param_1,local_c8,param_2);
  FUN_1437bac00(uVar6,local_a0);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  uVar6 = FUN_1437b97f0(param_1,local_c8,param_3);
  FUN_1437bac00(uVar6,local_100);
  if ((local_b8 & 1) != 0) {
    FUN_143733a60(local_b8 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_1437bcb20(local_a0);
  if (iVar3 != 0) {
    FUN_1437beb60(local_100,iVar3);
    iVar4 = FUN_1437152f0(local_d8);
    iVar5 = FUN_1437152f0(local_78);
    if (iVar5 == iVar4) {
      FUN_14370c700(local_e8,local_88,local_dc * iVar3);
      return;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        lVar1 = local_78;
        lVar10 = local_7c * iVar4 + local_88;
        if (local_78 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_1437151a0(local_78);
        }
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        uVar2 = local_70;
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        uVar6 = local_90;
        local_120 = lVar1;
        local_128 = lVar10;
        local_118 = uVar7;
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        lVar1 = local_120;
        local_110 = uVar6;
        local_108 = uVar2;
        if (local_128 != 0) {
          puVar8 = (undefined8 *)FUN_143714490(local_120,1);
          if (puVar8 == (undefined8 *)0x0) {
            bVar9 = 0;
          }
          else {
            bVar9 = (byte)*puVar8;
          }
          lVar10 = 0;
          if ((bVar9 & 0xf) == 7) {
            lVar10 = lVar1;
          }
          if (lVar10 != 0) {
            FUN_1437b9940(&local_128);
          }
        }
        if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
          FUN_143733a60(uVar7 & 0xfffffffffffffffe);
        }
        FUN_1437bac00(&local_128,local_68);
        if ((local_118 & 1) != 0) {
          FUN_143733a60(local_118 & 0xfffffffffffffffe);
        }
        lVar1 = local_d8;
        lVar10 = iVar4 * local_dc + local_e8;
        if (local_d8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_1437151a0(local_d8);
        }
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        uVar2 = local_d0;
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        uVar6 = local_f0;
        local_120 = lVar1;
        local_128 = lVar10;
        local_118 = uVar7;
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        lVar1 = local_120;
        local_110 = uVar6;
        local_108 = uVar2;
        if (local_128 != 0) {
          puVar8 = (undefined8 *)FUN_143714490(local_120,1);
          if (puVar8 == (undefined8 *)0x0) {
            bVar9 = 0;
          }
          else {
            bVar9 = (byte)*puVar8;
          }
          lVar10 = 0;
          if ((bVar9 & 0xf) == 7) {
            lVar10 = lVar1;
          }
          if (lVar10 != 0) {
            FUN_1437b9940(&local_128);
          }
        }
        if (((uVar7 & 1) != 0) && (FUN_143733a60(uVar7 & 0xfffffffffffffffe), (uVar7 & 1) != 0)) {
          FUN_143733a60(uVar7 & 0xfffffffffffffffe);
        }
        FUN_1437bad30(&local_128,local_c8);
        if ((local_118 & 1) != 0) {
          FUN_143733a60(local_118 & 0xfffffffffffffffe);
        }
        FUN_1437d7d80(local_c8,local_68);
        FUN_1437b87d0(local_c8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  return;
}



// FUNCTION 1437d74b0 FUN_1437d74b0 body=2247 status=ok
// SIG undefined FUN_1437d74b0(void)

void FUN_1437d74b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_b0;
  int local_a4;
  ulonglong local_a0;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  longlong local_78;
  int local_6c;
  ulonglong local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar2 = FUN_1437b97f0(param_1,&local_118,param_2);
  FUN_1437bac00(uVar2,local_c8);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(param_1,local_58,param_3);
  uVar2 = FUN_1437bad30(uVar2,&local_f0);
  uVar2 = FUN_1437b97f0(uVar2,&local_118,"values");
  FUN_1437bac00(uVar2,local_90);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(&local_f0);
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar5 = local_a0;
  lVar10 = local_b0;
  uVar9 = 0;
  uVar3 = uVar9;
  if (local_a0 != 0) {
    uVar3 = FUN_1437151a0(local_a0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_98;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_b8;
  local_118 = lVar10;
  local_110 = uVar5;
  local_108 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_110;
  local_100 = uVar2;
  local_f8 = uVar1;
  bVar7 = 0;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_68;
  lVar10 = local_78;
  uVar3 = uVar9;
  if (local_68 != 0) {
    uVar3 = FUN_1437151a0(local_68);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_60;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_80;
  local_f0 = lVar10;
  local_e8 = uVar5;
  local_e0 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  local_d8 = uVar2;
  local_d0 = uVar1;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_f0,&local_118);
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  uVar5 = local_a0;
  lVar10 = local_a4 + local_b0;
  uVar3 = uVar9;
  if (local_a0 != 0) {
    uVar3 = FUN_1437151a0(local_a0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_98;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_b8;
  local_e8 = uVar5;
  local_f0 = lVar10;
  local_e0 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  local_d8 = uVar2;
  local_d0 = uVar1;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_68;
  lVar10 = local_6c + local_78;
  uVar3 = uVar9;
  if (local_68 != 0) {
    uVar3 = FUN_1437151a0(local_68);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_60;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_80;
  local_110 = uVar5;
  local_118 = lVar10;
  local_108 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_110;
  local_100 = uVar2;
  local_f8 = uVar1;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_118,&local_f0);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  uVar5 = local_a0;
  lVar10 = local_a4 * 2 + local_b0;
  uVar3 = uVar9;
  if (local_a0 != 0) {
    uVar3 = FUN_1437151a0(local_a0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_98;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_b8;
  local_e8 = uVar5;
  local_f0 = lVar10;
  local_e0 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  local_d8 = uVar2;
  local_d0 = uVar1;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_68;
  lVar10 = local_6c * 2 + local_78;
  uVar3 = uVar9;
  if (local_68 != 0) {
    uVar3 = FUN_1437151a0(local_68);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_60;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_80;
  local_110 = uVar5;
  local_118 = lVar10;
  local_108 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_110;
  local_100 = uVar2;
  local_f8 = uVar1;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_118,&local_f0);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  lVar10 = local_a4 * 3 + local_b0;
  uVar5 = uVar9;
  if (local_a0 != 0) {
    uVar5 = FUN_1437151a0(local_a0);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_e8 = local_a0;
  local_f0 = lVar10;
  local_e0 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  uVar3 = local_e8;
  local_d8 = local_b8;
  local_d0 = local_98;
  if (local_f0 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_e8,1);
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar9;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_f0);
    }
  }
  if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  lVar10 = local_6c * 3 + local_78;
  uVar5 = uVar9;
  if (local_68 != 0) {
    uVar5 = FUN_1437151a0(local_68);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_110 = local_68;
  local_118 = lVar10;
  local_108 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  uVar3 = local_110;
  local_100 = local_80;
  local_f8 = local_60;
  if (local_118 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_110,1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar7 = (byte)*puVar4;
    }
    if ((bVar7 & 0xf) == 7) {
      uVar9 = uVar3;
    }
    if (uVar9 != 0) {
      FUN_1437b9940(&local_118);
    }
  }
  if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_118,&local_f0);
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d7d80 FUN_1437d7d80 body=5084 status=ok
// SIG undefined FUN_1437d7d80(void)

void FUN_1437d7d80(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *local_res8;
  undefined8 local_res10;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong local_80;
  int local_74;
  ulonglong local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  uVar5 = param_1[1];
  local_res8 = param_1;
  iVar2 = FUN_1437152f0(*(undefined8 *)(param_2 + 0x28));
  iVar1 = *(int *)(param_2 + 0x20);
  iVar3 = FUN_1437152f0(uVar5);
  if (iVar3 != iVar2 * iVar1) {
    uVar5 = FUN_1437b97f0(param_1,local_60,"translation");
    FUN_1437bac00(uVar5,local_98);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    uVar9 = *(ulonglong *)(param_2 + 0x28);
    uVar10 = 0;
    lVar13 = *(longlong *)(param_2 + 0x18);
    uVar6 = uVar10;
    if (uVar9 != 0) {
      uVar6 = FUN_1437151a0(uVar9);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = *(undefined8 *)(param_2 + 0x10);
    local_c0 = lVar13;
    local_b8 = uVar9;
    local_b0 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_b8;
    bVar11 = 0;
    local_a8 = local_res10;
    local_a0 = uVar4;
    if (local_c0 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_b8,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_c0);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = local_68;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = local_88;
    local_e8 = lVar13;
    local_e0 = uVar9;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_e0;
    local_c8 = uVar4;
    local_d0 = local_res10;
    if (local_e8 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_e0,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_e8);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(&local_e8,&local_c0);
    if ((local_d8 & 1) != 0) {
      FUN_143733a60(local_d8 & 0xfffffffffffffffe);
    }
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    lVar13 = (longlong)*(int *)(param_2 + 0x24) + *(longlong *)(param_2 + 0x18);
    uVar9 = *(ulonglong *)(param_2 + 0x28);
    uVar6 = uVar10;
    if (uVar9 != 0) {
      uVar6 = FUN_1437151a0(uVar9);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = *(undefined8 *)(param_2 + 0x10);
    local_e8 = lVar13;
    local_e0 = uVar9;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_e0;
    local_d0 = local_res10;
    local_c8 = uVar4;
    if (local_e8 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_e0,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_e8);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = local_68;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = local_88;
    local_b8 = uVar9;
    local_c0 = lVar13;
    local_b0 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_b8;
    local_a0 = uVar4;
    local_a8 = local_res10;
    if (local_c0 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_b8,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_c0);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(&local_c0,&local_e8);
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    if ((local_d8 & 1) != 0) {
      FUN_143733a60(local_d8 & 0xfffffffffffffffe);
    }
    uVar9 = *(ulonglong *)(param_2 + 0x28);
    lVar13 = (longlong)(*(int *)(param_2 + 0x24) * 2) + *(longlong *)(param_2 + 0x18);
    uVar6 = uVar10;
    if (uVar9 != 0) {
      uVar6 = FUN_1437151a0(uVar9);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = *(undefined8 *)(param_2 + 0x10);
    local_e8 = lVar13;
    local_e0 = uVar9;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_e0;
    local_d0 = local_res10;
    local_c8 = uVar4;
    if (local_e8 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_e0,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_e8);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 * 2 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = local_68;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = local_88;
    local_b8 = uVar9;
    local_c0 = lVar13;
    local_b0 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_b8;
    local_a0 = uVar4;
    local_a8 = local_res10;
    if (local_c0 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_b8,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_c0);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(&local_c0,&local_e8);
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    if ((local_d8 & 1) != 0) {
      FUN_143733a60(local_d8 & 0xfffffffffffffffe);
    }
    uVar9 = *(ulonglong *)(param_2 + 0x28);
    lVar13 = (longlong)(*(int *)(param_2 + 0x24) * 3) + *(longlong *)(param_2 + 0x18);
    uVar6 = uVar10;
    if (uVar9 != 0) {
      uVar6 = FUN_1437151a0(uVar9);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = *(undefined8 *)(param_2 + 0x10);
    local_e8 = lVar13;
    local_e0 = uVar9;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_e0;
    local_d0 = local_res10;
    local_c8 = uVar4;
    if (local_e8 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_e0,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_e8);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 * 3 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = local_68;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = local_88;
    local_b8 = uVar9;
    local_c0 = lVar13;
    local_b0 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_b8;
    local_a0 = uVar4;
    local_a8 = local_res10;
    if (local_c0 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_b8,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_c0);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(&local_c0,&local_e8);
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    if ((local_d8 & 1) != 0) {
      FUN_143733a60(local_d8 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_1437b97f0(local_res8,local_60,"rotation");
    FUN_1437bac00(uVar5,local_98);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    uVar9 = *(ulonglong *)(param_2 + 0x28);
    lVar13 = (longlong)(*(int *)(param_2 + 0x24) << 2) + *(longlong *)(param_2 + 0x18);
    uVar6 = uVar10;
    if (uVar9 != 0) {
      uVar6 = FUN_1437151a0(uVar9);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = *(undefined8 *)(param_2 + 0x10);
    local_e8 = lVar13;
    local_e0 = uVar9;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_e0;
    local_d0 = local_res10;
    local_c8 = uVar4;
    if (local_e8 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_e0,1);
      bVar12 = bVar11;
      if (puVar7 != (undefined8 *)0x0) {
        bVar12 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar12 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_e8);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar4 = local_68;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = local_88;
    local_c0 = lVar13;
    local_b8 = uVar9;
    local_b0 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    uVar9 = local_b8;
    local_a0 = uVar4;
    local_a8 = local_res10;
    if (local_c0 != 0) {
      puVar7 = (undefined8 *)FUN_143714490(local_b8,1);
      if (puVar7 != (undefined8 *)0x0) {
        bVar11 = (byte)*puVar7;
      }
      uVar8 = uVar10;
      if ((bVar11 & 0xf) == 7) {
        uVar8 = uVar9;
      }
      if (uVar8 != 0) {
        FUN_1437b9940(&local_c0);
      }
    }
    if (((uVar6 & 1) != 0) && (FUN_143733a60(uVar6 & 0xfffffffffffffffe), (uVar6 & 1) != 0)) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(&local_c0,&local_e8);
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    if ((local_d8 & 1) != 0) {
      FUN_143733a60(local_d8 & 0xfffffffffffffffe);
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    lVar14 = (longlong)(*(int *)(param_2 + 0x24) * 5) + *(longlong *)(param_2 + 0x18);
    uVar9 = uVar10;
    if (lVar13 != 0) {
      uVar9 = FUN_1437151a0(lVar13);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_e8 = lVar14;
    local_e0 = lVar13;
    local_d8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(local_60,&local_e8,*(undefined8 *)(param_2 + 0x10),&local_res10);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = CONCAT44(local_res10._4_4_,local_68);
    local_e0 = uVar9;
    local_e8 = lVar13;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(&local_c0,&local_e8,local_88,&local_res10);
    if ((uVar6 & 1) != 0) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(&local_c0,local_60);
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    lVar14 = (longlong)(*(int *)(param_2 + 0x24) * 6) + *(longlong *)(param_2 + 0x18);
    uVar9 = uVar10;
    if (lVar13 != 0) {
      uVar9 = FUN_1437151a0(lVar13);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_e8 = lVar14;
    local_e0 = lVar13;
    local_d8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(&local_c0,&local_e8,*(undefined8 *)(param_2 + 0x10),&local_res10);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 * 2 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = CONCAT44(local_res10._4_4_,local_68);
    local_e0 = uVar9;
    local_e8 = lVar13;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(local_60,&local_e8,local_88,&local_res10);
    if ((uVar6 & 1) != 0) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(local_60,&local_c0);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    lVar14 = (longlong)(*(int *)(param_2 + 0x24) * 7) + *(longlong *)(param_2 + 0x18);
    uVar9 = uVar10;
    if (lVar13 != 0) {
      uVar9 = FUN_1437151a0(lVar13);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    local_res10 = CONCAT44(local_res10._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_e8 = lVar14;
    local_e0 = lVar13;
    local_d8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(&local_c0,&local_e8,*(undefined8 *)(param_2 + 0x10),&local_res10);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 * 3 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res10 = CONCAT44(local_res10._4_4_,local_68);
    local_e0 = uVar9;
    local_e8 = lVar13;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(local_60,&local_e8,local_88,&local_res10);
    if ((uVar6 & 1) != 0) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(local_60,&local_c0);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    uVar5 = FUN_1437b97f0(local_res8,local_60,"scale");
    FUN_1437bac00(uVar5,local_98);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    lVar14 = (longlong)(*(int *)(param_2 + 0x24) << 3) + *(longlong *)(param_2 + 0x18);
    uVar9 = uVar10;
    if (lVar13 != 0) {
      uVar9 = FUN_1437151a0(lVar13);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_e8 = lVar14;
    local_e0 = lVar13;
    local_d8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(&local_c0,&local_e8,*(undefined8 *)(param_2 + 0x10),&local_res8);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,local_68);
    local_e8 = lVar13;
    local_e0 = uVar9;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(local_60,&local_e8,local_88,&local_res8);
    if ((uVar6 & 1) != 0) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(local_60,&local_c0);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    lVar14 = (longlong)(*(int *)(param_2 + 0x24) * 9) + *(longlong *)(param_2 + 0x18);
    uVar9 = uVar10;
    if (lVar13 != 0) {
      uVar9 = FUN_1437151a0(lVar13);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_e8 = lVar14;
    local_e0 = lVar13;
    local_d8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(&local_c0,&local_e8,*(undefined8 *)(param_2 + 0x10),&local_res8);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,local_68);
    local_e0 = uVar9;
    local_e8 = lVar13;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(local_60,&local_e8,local_88,&local_res8);
    if ((uVar6 & 1) != 0) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(local_60,&local_c0);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    lVar14 = (longlong)(*(int *)(param_2 + 0x24) * 10) + *(longlong *)(param_2 + 0x18);
    uVar9 = uVar10;
    if (lVar13 != 0) {
      uVar9 = FUN_1437151a0(lVar13);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_e8 = lVar14;
    local_e0 = lVar13;
    local_d8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(&local_c0,&local_e8,*(undefined8 *)(param_2 + 0x10),&local_res8);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    uVar9 = local_70;
    lVar13 = local_74 * 2 + local_80;
    uVar6 = uVar10;
    if (local_70 != 0) {
      uVar6 = FUN_1437151a0(local_70);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,local_68);
    local_e0 = uVar9;
    local_e8 = lVar13;
    local_d8 = uVar6;
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(local_60,&local_e8,local_88,&local_res8);
    if ((uVar6 & 1) != 0) {
      FUN_143733a60(uVar6 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(local_60,&local_c0);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    lVar13 = *(longlong *)(param_2 + 0x28);
    lVar14 = (longlong)(*(int *)(param_2 + 0x24) * 0xb) + *(longlong *)(param_2 + 0x18);
    uVar9 = uVar10;
    if (lVar13 != 0) {
      uVar9 = FUN_1437151a0(lVar13);
    }
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,*(undefined4 *)(param_2 + 0x30));
    local_e8 = lVar14;
    local_e0 = lVar13;
    local_d8 = uVar9;
    if ((uVar9 & 1) != 0) {
      FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(&local_c0,&local_e8,*(undefined8 *)(param_2 + 0x10),&local_res8);
    if ((uVar9 & 1) != 0) {
      FUN_143733a60(uVar9 & 0xfffffffffffffffe);
    }
    lVar13 = local_74 * 3 + local_80;
    if (local_70 != 0) {
      uVar10 = FUN_1437151a0(local_70);
    }
    if ((uVar10 & 1) != 0) {
      FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
    }
    local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,local_68);
    local_e0 = local_70;
    local_e8 = lVar13;
    local_d8 = uVar10;
    if ((uVar10 & 1) != 0) {
      FUN_1437329e0(uVar10 & 0xfffffffffffffffe);
    }
    FUN_1437b7f80(local_60,&local_e8,local_88,&local_res8);
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(uVar10 & 0xfffffffffffffffe);
    }
    FUN_1437b87f0(local_60,&local_c0);
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    if ((local_b0 & 1) != 0) {
      FUN_143733a60(local_b0 & 0xfffffffffffffffe);
    }
    return;
  }
  uVar5 = *param_1;
  uVar4 = FUN_1437152f0(param_1[1]);
  FUN_14370c700(uVar5,*(undefined8 *)(param_2 + 0x18),uVar4);
  return;
}



// FUNCTION 1437d9160 FUN_1437d9160 body=1228 status=ok
// SIG undefined FUN_1437d9160(void)

void FUN_1437d9160(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeleton_145bf9500);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeletonPartition_145bf9528);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaSkeletonLocalFrameOnBone_145bf9550);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSweptTransformf_145bf9578);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkPackfileHeader_145bf95a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkPackfileSectionHeader_145bf95c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkDataObjectTypeAttribute_145bf95f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMonitorStreamStringMap_145bf9618);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkRefCountedProperties_145bf9640);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkClassEnum_145bf9668);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkClassEnumItem_145bf9690);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkRefCountedPropertiesEntry_145bf96b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkGeometryTriangle_145bf96e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryResourceHandleExternalLi_145bf9708);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMonitorStreamColorTableColorPa_145bf9730);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMonitorStreamStringMapStringMa_145bf9780);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxSplineControlPoint_145bf97d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexDescriptionElementDecl_145bf97f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexBufferVertexData_145bf9820);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexAnimationUsageMap_145bf9848);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMeshUserChannelInfo_145bf9870);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterialProperty_145bf9898);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxMaterialTextureStage_145bf98c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxNodeAnnotationData_145bf98e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxEnvironmentVariable_145bf9910);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxEnumItem_145bf9938);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkRootLevelContainerNamedVariant_145bf9960);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkVertexFormatElement_145bf9988);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMeshTextureRawBufferDescriptor_145bf99b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSkinnedMeshShapePart_145bf99d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSkinnedMeshShapeBoneSection_145bf9a00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSkinnedMeshShapeBoneSet_145bf9a28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMultipleVertexBufferLockedElem_145bf9a50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMultipleVertexBufferElementInf_145bf9a78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMultipleVertexBufferVertexBuff_145bf9aa0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshShapeSection_145bf9ac8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSethkIntRealPairhkContainerHea_145bf9af0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSetunsignedinthkContainerHeapA_145bf9b78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSetunsignedlonglonghkContainer_145bf9bf0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkBitFieldBasehkOffsetBitFieldSt_145bf9c70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkBitFieldBasehkBitFieldStorageh_145bf9d00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkBitFieldStoragehkArrayunsigned_145bf9d88);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9df8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9e20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9e48);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9e70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9e98);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9ed0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9ef8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9f20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9f48);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9f70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9f98);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9fc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bf9fe8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa010);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa038);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa060);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa088);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa0b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa0e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa120);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa148);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa170);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa198);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa1c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa1e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa210);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa238);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa260);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkCompressedMassProperties_145bfa288);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfa2b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarGeometryPrimitives_Pl_145bfa2d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkClass_145bfa328);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkClassMember_145bfa350);
                    /* WARNING: Could not recover jumptable at 0x0001437d9628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkClassMember_145bfa378);
  return;
}



// FUNCTION 1437d9630 FUN_1437d9630 body=288 status=ok
// SIG undefined FUN_1437d9630(void)

void FUN_1437d9630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  uVar1 = FUN_1437b97f0(param_1,local_a8,"treePtr_old");
  FUN_1437bad30(uVar1,local_58);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  puVar2 = (undefined8 *)FUN_1437bcda0(param_1);
  local_res10[0] = *puVar2;
  FUN_1437bc0c0(local_res10,&local_c8,"hkcdStaticAabbTree::Impl");
  local_b8 = local_c8;
  uStack_b4 = uStack_c4;
  uStack_b0 = uStack_c0;
  uStack_ac = uStack_bc;
  FUN_1437be120(local_res10,local_80,&local_b8);
  uVar1 = FUN_1437b8080(local_a8,local_80);
  uVar3 = FUN_1437b8080(local_30,local_58);
  FUN_1437d98c0(uVar3,uVar1);
  uVar1 = FUN_1437b97f0(param_1,local_a8,"treePtr");
  FUN_1437b8850(uVar1,local_80);
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(local_80);
  FUN_1437b87d0(local_58);
  return;
}



// FUNCTION 1437d9750 FUN_1437d9750 body=357 status=ok
// SIG undefined FUN_1437d9750(void)

void FUN_1437d9750(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_res10;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  undefined1 local_b0 [16];
  ulonglong local_a0;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [48];
  
  uVar1 = FUN_1437b97f0(param_1,local_d8,"treePtr_old");
  FUN_1437bad30(uVar1,local_60);
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  iVar4 = FUN_1437bd3c0(local_60);
  if (iVar4 == 0) {
    uVar1 = FUN_1437b97f0(param_1,local_b0,"treePtr_old");
    FUN_1437bad30(uVar1,local_d8);
    if ((local_a0 & 1) != 0) {
      FUN_143733a60(local_a0 & 0xfffffffffffffffe);
    }
    puVar2 = (undefined8 *)FUN_1437bcda0(param_1);
    local_res10 = *puVar2;
    FUN_1437bc0c0(&local_res10,&local_f8,"hkcdDynamicAabbTree::Impl");
    local_e8 = local_f8;
    uStack_e4 = uStack_f4;
    uStack_e0 = uStack_f0;
    uStack_dc = uStack_ec;
    FUN_1437be120(&local_res10,local_88,&local_e8);
    uVar1 = FUN_1437b8080(local_b0,local_88);
    uVar3 = FUN_1437b8080(local_38,local_d8);
    FUN_1437d98c0(uVar3,uVar1);
    uVar1 = FUN_1437b97f0(param_1,local_b0,"treePtr");
    FUN_1437b8850(uVar1,local_88);
    if ((local_a0 & 1) != 0) {
      FUN_143733a60(local_a0 & 0xfffffffffffffffe);
    }
    FUN_1437b87d0(local_88);
    FUN_1437b87d0(local_d8);
  }
  FUN_1437b87d0(local_60);
  return;
}



// FUNCTION 1437d98c0 FUN_1437d98c0 body=353 status=ok
// SIG undefined FUN_1437d98c0(void)

void FUN_1437d98c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar5;
  longlong local_88;
  int local_80;
  uint local_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_40 [16];
  ulonglong local_30;
  ulonglong uVar4;
  
  FUN_1437b7c10(local_78,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  uVar4 = 0;
  local_7c = 0x80000000;
  local_88 = 0;
  local_80 = 0;
  FUN_1437bc4c0(local_78,&local_88);
  uVar5 = uVar4;
  if (0 < local_80) {
    do {
      uVar2 = *(undefined8 *)(uVar5 + local_88);
      uVar1 = FUN_1437b97f0(param_1,local_40,uVar2);
      uVar2 = FUN_1437b97f0(param_2,local_68,uVar2);
      FUN_1437b87f0(uVar2,uVar1);
      if ((local_58 & 1) != 0) {
        FUN_143733a60(local_58 & 0xfffffffffffffffe);
      }
      if ((local_30 & 1) != 0) {
        FUN_143733a60(local_30 & 0xfffffffffffffffe);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar5 = uVar5 + 8;
    } while ((int)uVar3 < local_80);
  }
  uVar2 = FUN_143703a50();
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(uVar2,local_88,8,local_7c & 0x3fffffff);
  }
  local_88 = 0;
  local_7c = 0x80000000;
  FUN_1437b87d0(param_1);
  FUN_1437b87d0(param_2);
  return;
}



// FUNCTION 1437d9a30 FUN_1437d9a30 body=1036 status=ok
// SIG undefined FUN_1437d9a30(void)

void FUN_1437d9a30(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_145bfab10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticAabbTree_145bfab38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicAabbTree_145bfab60);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfab88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarSolid_145bfabb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarGeometry_145bfabd8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfac00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBasePrimitiveD_145bfac28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeTreehkcdStaticTree_145bfac90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeTreehkcdStaticTree_145bfacf0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodecRawunsignedi_145bfad50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodecRawunsignedl_145bfada8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodecRawUint_145bfadf8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodecRawUlong_145bfae40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarGeometryPrimitivesColl_145bfae88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeCodecRaw_145bfaee0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeCodec3Axis6_145bfaf28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeCodec3Axis5_145bfaf70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeCodec3Axis4_145bfafb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeCodec3Axis_145bfb000);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseConnectivi_145bfb048);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseConnectivi_145bfb0a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseLinks_145bfb0f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseEdge_145bfb140);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBasePrimitive_145bfb188);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseSectionDat_145bfb1d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseSectionPri_145bfb230);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseSectionSha_145bfb288);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBaseSection_145bfb2e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdSimdTreeNode_145bfb328);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeAnisotropicMetric_145bfb368);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeBalanceMetric_145bfb3b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCentroidMetric_145bfb400);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodecInt16IntAabb_145bfb448);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodecInt16_145bfb498);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodec18_145bfb4e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeCodec32_145bfb528);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDefaultTreeStorage_145bfb570);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultTree32Stor_145bfb5b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultTree48Stor_145bfb600);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeTreehkcdStaticTree_145bfb648);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStoragehkcd_145bfb6a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStorage4_145bfb710);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStoragehkcd_145bfb758);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStorage5_145bfb7c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStorage6_145bfb808);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStoragehkcd_145bfb850);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStorage0hk_145bfb8b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeTreehkcdDynamicTr_145bfb948);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStorage16_145bfb9b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultDynamicSto_145bfba00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStorage32_145bfba78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDynamicStoragehkcd_145bfbac8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDefaultTreeStorage_145bfbb30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTreeDefaultTreeStorage_145bfbb78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarSolidNode_145bfbbc0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarSolidNodeStorage_145bfbc00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarGeometryPrimitivesPlan_145bfbc48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdPlanarGeometryPolygonCollect_145bfbc70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145bfbcc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeTreehkcdDynamicTr_145bfbcf8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStorage32_145bfbd60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultDynamicSto_145bfbdb0);
                    /* WARNING: Could not recover jumptable at 0x0001437d9e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStorage0hk_145bfbe28);
  return;
}



// FUNCTION 1437d9e40 FUN_1437d9e40 body=178 status=ok
// SIG undefined FUN_1437d9e40(void)

void FUN_1437d9e40(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  uVar2 = FUN_1437b97f0(param_1,local_38,"layer");
  uVar1 = FUN_1437b3cf0(uVar2);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = (-uVar1 & uVar1) - 1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar2 = FUN_1437b97f0(param_1,local_38,"layerIndex");
  FUN_1437b8e40(uVar2,((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437d9f00 FUN_1437d9f00 body=874 status=ok
// SIG undefined FUN_1437d9f00(void)

void FUN_1437d9f00(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  longlong local_e8;
  int local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  undefined1 local_a0 [16];
  ulonglong local_90;
  undefined1 local_78 [16];
  ulonglong local_68;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  FUN_1437b97f0(param_1,local_50,"cacheInfos");
  FUN_1437b97f0(param_1,local_78,"registrations");
  uVar3 = FUN_1437b97f0(param_1,&local_128,"layerDatas");
  FUN_1437bac00(uVar3,local_100);
  if ((local_118 & 1) != 0) {
    FUN_143733a60(local_118 & 0xfffffffffffffffe);
  }
  FUN_1437beb60(local_100,0x20);
  iVar7 = 0;
  do {
    lVar1 = local_d8;
    lVar8 = local_dc * iVar7 + local_e8;
    if (local_d8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(local_d8);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar2 = local_d0;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar3 = local_f0;
    local_120 = lVar1;
    local_128 = lVar8;
    local_118 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    lVar1 = local_120;
    local_110 = uVar3;
    local_108 = uVar2;
    if (local_128 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_120,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (byte)*puVar5;
      }
      lVar8 = 0;
      if ((bVar6 & 0xf) == 7) {
        lVar8 = lVar1;
      }
      if (lVar8 != 0) {
        FUN_1437b9940(&local_128);
      }
    }
    if ((uVar4 & 1) != 0) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      if ((uVar4 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
    }
    uVar3 = FUN_1437bad30(&local_128,local_a0);
    uVar3 = FUN_1437b97f0(uVar3,local_c8,"cacheInfos");
    FUN_1437b87f0(uVar3,local_50);
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    FUN_1437b87d0(local_a0);
    if ((local_118 & 1) != 0) {
      FUN_143733a60(local_118 & 0xfffffffffffffffe);
    }
    lVar1 = local_d8;
    lVar8 = local_dc * iVar7 + local_e8;
    if (local_d8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_1437151a0(local_d8);
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar2 = local_d0;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    uVar3 = local_f0;
    local_120 = lVar1;
    local_128 = lVar8;
    local_118 = uVar4;
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    lVar1 = local_120;
    local_110 = uVar3;
    local_108 = uVar2;
    if (local_128 != 0) {
      puVar5 = (undefined8 *)FUN_143714490(local_120,1);
      if (puVar5 == (undefined8 *)0x0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (byte)*puVar5;
      }
      lVar8 = 0;
      if ((bVar6 & 0xf) == 7) {
        lVar8 = lVar1;
      }
      if (lVar8 != 0) {
        FUN_1437b9940(&local_128);
      }
    }
    if ((uVar4 & 1) != 0) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      if ((uVar4 & 1) != 0) {
        FUN_143733a60(uVar4 & 0xfffffffffffffffe);
      }
    }
    uVar3 = FUN_1437bad30(&local_128,local_c8);
    uVar3 = FUN_1437b97f0(uVar3,local_a0,"registrations");
    FUN_1437b87f0(uVar3,local_78);
    if ((local_90 & 1) != 0) {
      FUN_143733a60(local_90 & 0xfffffffffffffffe);
    }
    FUN_1437b87d0(local_c8);
    if ((local_118 & 1) != 0) {
      FUN_143733a60(local_118 & 0xfffffffffffffffe);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437da270 FUN_1437da270 body=3942 status=ok
// SIG undefined FUN_1437da270(void)

void FUN_1437da270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_res20 [2];
  longlong local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [16];
  ulonglong local_128;
  undefined1 local_110 [16];
  undefined8 local_100;
  longlong local_f8;
  int local_ec;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  longlong local_c0;
  int local_b4;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  longlong local_88;
  int local_7c;
  ulonglong local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong local_50;
  int local_44;
  longlong local_40;
  undefined4 local_38;
  
  uVar2 = FUN_1437b97f0(param_1,&local_188,param_2);
  uVar2 = FUN_1437bad30(uVar2,&local_160);
  uVar2 = FUN_1437b97f0(uVar2,local_138,"rotation");
  FUN_1437bac00(uVar2,local_110);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(&local_160);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(param_1,&local_188,param_3);
  uVar2 = FUN_1437bad30(uVar2,&local_160);
  uVar2 = FUN_1437b97f0(uVar2,local_138,"rotation");
  FUN_1437bac00(uVar2,local_d8);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(&local_160);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(param_1,&local_188,param_2);
  uVar2 = FUN_1437bad30(uVar2,&local_160);
  uVar2 = FUN_1437b97f0(uVar2,local_138,"translation");
  FUN_1437bac00(uVar2,local_a0);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(&local_160);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar2 = FUN_1437b97f0(param_1,&local_188,param_3);
  uVar2 = FUN_1437bad30(uVar2,&local_160);
  uVar2 = FUN_1437b97f0(uVar2,local_138,"translation");
  FUN_1437bac00(uVar2,local_68);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  FUN_1437b87d0(&local_160);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  lVar10 = local_f8;
  uVar7 = 0;
  uVar3 = uVar7;
  if (local_e8 != 0) {
    uVar3 = FUN_1437151a0(local_e8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_e0;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_100;
  local_160 = lVar10;
  local_158 = uVar5;
  local_150 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_158;
  local_148 = uVar2;
  local_140 = uVar1;
  bVar8 = 0;
  if (local_160 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_158,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_160);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_b0;
  lVar10 = local_c0;
  uVar3 = uVar7;
  if (local_b0 != 0) {
    uVar3 = FUN_1437151a0(local_b0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_a8;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_c8;
  local_188 = lVar10;
  local_180 = uVar5;
  local_178 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_180;
  local_170 = uVar2;
  local_168 = uVar1;
  if (local_188 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_180,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_188);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_188,&local_160);
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  lVar10 = local_ec + local_f8;
  uVar3 = uVar7;
  if (local_e8 != 0) {
    uVar3 = FUN_1437151a0(local_e8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_e0;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_100;
  local_180 = uVar5;
  local_188 = lVar10;
  local_178 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_180;
  local_170 = uVar2;
  local_168 = uVar1;
  if (local_188 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_180,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_188);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_b0;
  lVar10 = local_b4 + local_c0;
  uVar3 = uVar7;
  if (local_b0 != 0) {
    uVar3 = FUN_1437151a0(local_b0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_a8;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_c8;
  local_158 = uVar5;
  local_160 = lVar10;
  local_150 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_158;
  local_148 = uVar2;
  local_140 = uVar1;
  if (local_160 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_158,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_160);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_160,&local_188);
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar5 = local_e8;
  lVar10 = local_ec * 2 + local_f8;
  uVar3 = uVar7;
  if (local_e8 != 0) {
    uVar3 = FUN_1437151a0(local_e8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_e0;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_100;
  local_180 = uVar5;
  local_188 = lVar10;
  local_178 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_180;
  local_170 = uVar2;
  local_168 = uVar1;
  if (local_188 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_180,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_188);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_b0;
  lVar10 = local_b4 * 2 + local_c0;
  uVar3 = uVar7;
  if (local_b0 != 0) {
    uVar3 = FUN_1437151a0(local_b0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_a8;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_c8;
  local_158 = uVar5;
  local_160 = lVar10;
  local_150 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_158;
  local_148 = uVar2;
  local_140 = uVar1;
  if (local_160 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_158,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_160);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_160,&local_188);
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  lVar10 = local_ec * 3 + local_f8;
  uVar5 = uVar7;
  if (local_e8 != 0) {
    uVar5 = FUN_1437151a0(local_e8);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_180 = local_e8;
  local_188 = lVar10;
  local_178 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  uVar3 = local_180;
  local_170 = local_100;
  local_168 = local_e0;
  if (local_188 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_180,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_188);
    }
  }
  if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  lVar10 = local_b4 * 3 + local_c0;
  uVar5 = uVar7;
  if (local_b0 != 0) {
    uVar5 = FUN_1437151a0(local_b0);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_158 = local_b0;
  local_160 = lVar10;
  local_150 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  uVar3 = local_158;
  local_148 = local_c8;
  local_140 = local_a8;
  if (local_160 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_158,1);
    bVar9 = bVar8;
    if (puVar4 != (undefined8 *)0x0) {
      bVar9 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar9 & 0xf) == 7) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_160);
    }
  }
  if (((uVar5 & 1) != 0) && (FUN_143733a60(uVar5 & 0xfffffffffffffffe), (uVar5 & 1) != 0)) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(&local_160,&local_188);
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  if ((local_178 & 1) != 0) {
    FUN_143733a60(local_178 & 0xfffffffffffffffe);
  }
  uVar5 = local_78;
  lVar10 = local_88;
  uVar3 = uVar7;
  if (local_78 != 0) {
    uVar3 = FUN_1437151a0(local_78);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = local_70;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar2 = local_90;
  local_160 = lVar10;
  local_158 = uVar5;
  local_150 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  uVar5 = local_158;
  local_148 = uVar2;
  local_140 = uVar1;
  if (local_160 != 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_158,1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar6 = uVar7;
    if ((bVar8 & 0xf) == 7) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      FUN_1437b9940(&local_160);
    }
  }
  if (((uVar3 & 1) != 0) && (FUN_143733a60(uVar3 & 0xfffffffffffffffe), (uVar3 & 1) != 0)) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  lVar11 = local_40;
  lVar10 = local_50;
  uVar5 = uVar7;
  if (local_40 != 0) {
    uVar5 = FUN_1437151a0(local_40);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_res20[0] = local_38;
  local_188 = lVar10;
  local_180 = lVar11;
  local_178 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(local_138,&local_188,local_58,local_res20);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(local_138,&local_160);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  uVar5 = local_78;
  lVar10 = local_7c + local_88;
  uVar3 = uVar7;
  if (local_78 != 0) {
    uVar3 = FUN_1437151a0(local_78);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  local_res20[0] = local_70;
  local_180 = uVar5;
  local_188 = lVar10;
  local_178 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(&local_160,&local_188,local_90,local_res20);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  lVar10 = local_40;
  lVar11 = local_44 + local_50;
  uVar5 = uVar7;
  if (local_40 != 0) {
    uVar5 = FUN_1437151a0(local_40);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_res20[0] = local_38;
  local_180 = lVar10;
  local_188 = lVar11;
  local_178 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(local_138,&local_188,local_58,local_res20);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(local_138,&local_160);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  uVar5 = local_78;
  lVar10 = local_7c * 2 + local_88;
  uVar3 = uVar7;
  if (local_78 != 0) {
    uVar3 = FUN_1437151a0(local_78);
  }
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  local_res20[0] = local_70;
  local_180 = uVar5;
  local_188 = lVar10;
  local_178 = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(&local_160,&local_188,local_90,local_res20);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(uVar3 & 0xfffffffffffffffe);
  }
  lVar10 = local_40;
  lVar11 = local_44 * 2 + local_50;
  uVar5 = uVar7;
  if (local_40 != 0) {
    uVar5 = FUN_1437151a0(local_40);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_res20[0] = local_38;
  local_180 = lVar10;
  local_188 = lVar11;
  local_178 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(local_138,&local_188,local_58,local_res20);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(local_138,&local_160);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  lVar10 = local_7c * 3 + local_88;
  uVar5 = uVar7;
  if (local_78 != 0) {
    uVar5 = FUN_1437151a0(local_78);
  }
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  local_res20[0] = local_70;
  local_180 = local_78;
  local_188 = lVar10;
  local_178 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(&local_160,&local_188,local_90,local_res20);
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  lVar10 = local_44 * 3 + local_50;
  if (local_40 != 0) {
    uVar7 = FUN_1437151a0(local_40);
  }
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  local_res20[0] = local_38;
  local_180 = local_40;
  local_188 = lVar10;
  local_178 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(local_138,&local_188,local_58,local_res20);
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(uVar7 & 0xfffffffffffffffe);
  }
  FUN_1437b87f0(local_138,&local_160);
  if ((local_128 & 1) != 0) {
    FUN_143733a60(local_128 & 0xfffffffffffffffe);
  }
  if ((local_150 & 1) != 0) {
    FUN_143733a60(local_150 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437db1e0 FUN_1437db1e0 body=96 status=ok
// SIG undefined FUN_1437db1e0(void)

void FUN_1437db1e0(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "Upgrading hkaiNavMeshCutter from version 17 to 18 not implemented. Please reexport your data."
            );
  iVar2 = FUN_143732300(0x6167d2e7,local_208,"Patches\\2014_2_5\\hkaiPatches_2014_2_5.cpp",0x12);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  return;
}



// FUNCTION 1437db240 FUN_1437db240 body=96 status=ok
// SIG undefined FUN_1437db240(void)

void FUN_1437db240(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_228,"Versioning of silhouette records is not supported");
  iVar2 = FUN_143732300(0x88212f02,local_208,"Patches\\2014_2_5\\hkaiPatches_2014_2_5.cpp",0x17);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  return;
}



// FUNCTION 1437db2a0 FUN_1437db2a0 body=2284 status=ok
// SIG undefined FUN_1437db2a0(void)

void FUN_1437db2a0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterSavedConnectivi_145c00628);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145c00650);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00678);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c006a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c006e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00740);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00788);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c007d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeInstance_145c00828);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_145c00850);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCharacter_145c00878);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c008a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c008c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c008f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_145c00918);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollection_145c00940);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_145c00968);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshClearanceCacheManager_145c00990);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderSilhouette_145c009b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGeneratorSectionCo_145c009e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManagerSection_145c00a08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00a30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00a58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00a80);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00aa8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00af0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00b18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c00b40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManager_145c00b68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGateFollowingBehavior_145c00b90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiIntervalPartitionLibraryPart_145c00bb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiTraversalAnnotationLibraryAn_145c00c10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiTraversalAnalysisOutputSecti_145c00c68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiTraversalAnalysisInputSectio_145c00cb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderGraphUnloa_145c00d08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderGraphLoade_145c00d60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderVolumeUnlo_145c00db8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderVolumeLoad_145c00e10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderSilhouette_145c00e68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderInstanceUn_145c00ec0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderInstanceLo_145c00f18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderWorldConne_145c00f70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorderReplayEven_145c00fc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsM_145c00ff0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsC_145c01050);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettingsM_145c010a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsSe_145c01110);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshSimplificationUtilsEx_145c01168);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsWal_145c011c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsReg_145c01228);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsReg_145c01298);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsOve_145c012f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettingsMat_145c01350);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgeGeometryFace_145c013b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgeGeometryEdge_145c013f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldCharacterStepSerializab_145c01430);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtilFindPat_145c01488);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtilFindPat_145c014e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindGraphPath_145c01538);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathOutpu_145c01588);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtilFindPathInput_145c015d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSplitGenerationUtilsSettings_145c01628);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlappingTrianglesSettings_145c01678);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilLineOfSightOu_145c016c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilDirectPathInp_145c01718);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilLineOfSightIn_145c01768);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiLineOfSightUtilInputBase_145c017b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiHierarchyUtilsClusterSetting_145c01800);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeInstanceCellInstanc_145c01850);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeEdge_145c018a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeCell_145c018e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdge_145c01920);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshFace_145c01960);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiUserEdgeUtilsUserEdgePair_145c019a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiUserEdgeUtilsUserEdgeSetup_145c019e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiUserEdgeUtilsObb_145c01a38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSetVolumeConnection_145c01a78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSetGraphConnection_145c01ac8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSetNavMeshConnectio_145c01b18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshClearanceCacheManager_145c01b68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshClearanceCacheManager_145c01b90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshClearanceCacheMcpData_145c01bb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphInstanceFreeBlo_145c01c10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCostEdg_145c01c68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCostNod_145c01cb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManagerSection_145c01d08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdgeZipperBaseEdgeOve_145c01d50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdgeZipperBaseEdge_145c01da8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdgeZipperZipEdgesSet_145c01df0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdgeZipperZippedInter_145c01e40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdgeZipperInterval_145c01e90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathPathPoint_145c01ed8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverBoundaryObsta_145c01f18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidanceSolverSphereObstacl_145c01f68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAvoidancePairPropertiesPairD_145c01fb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgePathTraversalState_145c02008);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgePathEdge_145c02050);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgePathFollowingCornerInfo_145c02090);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSingleCharacterBehaviorReque_145c020e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgeFollowingBehaviorCornerP_145c02138);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGatePathUtilExponentialSched_145c02198);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGatePathUtilGate_145c021e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGatePathPathGate_145c02228);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGatePathSmoothOptions_145c02268);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGatePathTraversalState_145c022b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSearchParametersSearchBuffer_145c022f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSearchParametersBufferSizes_145c02348);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_145c02398);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_Edge_145c023c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c023e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02410);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtil_FindP_145c02438);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDynamicNavMeshQueryMediator_145c02460);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_145c02488);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c024b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02500);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02528);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02580);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c025d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02618);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02640);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_145c02668);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02690);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c026b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c026e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02708);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02730);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02758);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02780);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c027a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshClearanceCache_145c027d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c027f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02820);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c02878);
  (**(code **)(*param_1 + 8))(param_1,&DAT_145c028b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSet_145c028f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManager_Section_145c02920);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManager_Generator_145c02948);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGeneratorSectionCo_145c02970);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGenerator_145c02998);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiConvexSilhouetteSet_145c029c0);
                    /* WARNING: Could not recover jumptable at 0x0001437dbb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_Silhouet_145c029e8);
  return;
}



// FUNCTION 1437dbb90 FUN_1437dbb90 body=605 status=ok
// SIG undefined FUN_1437dbb90(void)

void FUN_1437dbb90(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 local_res8 [8];
  undefined4 uVar13;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  puVar5 = (undefined8 *)FUN_143741ed0(param_1,&local_48,"propertyBag");
  uVar11 = 0;
  local_60 = 0;
  uStack_58 = 0;
  bVar2 = 0;
  uVar8 = uStack_58;
  uVar10 = local_60;
  uVar7 = uVar11;
  if (puVar5[1] != 0) {
    puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
    bVar3 = bVar2;
    if (puVar6 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar6;
    }
    uVar8 = uStack_58;
    uVar10 = local_60;
    if ((bVar3 & 0xf) == 6) {
      uVar10 = *puVar5;
      uVar8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      uVar7 = puVar5[2];
    }
  }
  local_68 = 0;
  local_78 = 0;
  lStack_70 = 0;
  plVar9 = &local_78;
  plVar12 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x50))(plVar12,local_res8,uVar10,uVar8,plVar9);
  uVar13 = (undefined4)((ulonglong)plVar9 >> 0x20);
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(plVar12);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  if (local_78 != 0) {
    puVar5 = (undefined8 *)FUN_143741ed0(param_1,&local_48,"dynamicProperties");
    local_60 = 0;
    uStack_58 = 0;
    uVar8 = uStack_58;
    uVar10 = local_60;
    if (puVar5[1] != 0) {
      puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
      if (puVar6 != (undefined8 *)0x0) {
        bVar2 = (byte)*puVar6;
      }
      uVar8 = uStack_58;
      uVar10 = local_60;
      if ((bVar2 & 0xf) == 8) {
        uVar10 = *puVar5;
        uVar8 = puVar5[1];
        if ((*(byte *)(puVar5 + 2) & 1) != 0) {
          FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
        }
        uVar11 = puVar5[2];
      }
    }
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    lVar1 = lStack_70;
    local_48 = local_78;
    local_40 = lStack_70;
    local_38 = 1;
    local_30 = 0;
    uVar7 = local_30;
    if (lStack_70 != 0) {
      uVar4 = FUN_1437152f0(lStack_70);
      local_38 = CONCAT44(uVar4,(undefined4)local_38);
      uVar7 = FUN_1437151a0(lVar1);
      if ((uVar7 & 1) != 0) {
        FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
      }
      if ((local_30 & 1) != 0) {
        FUN_143733a60(local_30 & 0xfffffffffffffffe);
      }
    }
    local_30 = uVar7;
    plVar9 = (longlong *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x78))
              (plVar9,local_res8,uVar10,uVar8,CONCAT44(uVar13,0xffffffff),0,&local_48);
    if ((local_30 & 1) != 0) {
      FUN_143733a60(local_30 & 0xfffffffffffffffe);
    }
    if ((uVar11 & 1) != 0) {
      FUN_143733a60(plVar9);
    }
  }
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dbdf0 FUN_1437dbdf0 body=508 status=ok
// SIG undefined FUN_1437dbdf0(void)

void FUN_1437dbdf0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803430);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803458);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803480);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMemoryMeshVertexBuffer_1468034a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468034d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468034f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803520);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashMap<_hkPropertyBag_Key,_h_146803548);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803570);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803598);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468035c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkDefaultPropertyBag_1468035e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashMap<_hkPropertyId,_hkRefle_146803610);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkReferencedObject_146803638);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803660);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803688);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468036b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468036d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803700);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkCustomAttributes_146803728);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkCustomAttributesAttribute_146803750);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkArrayTypeAttribute_146803778);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkCamera3d_1468037a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkCameraData_1468037c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkOffsetBitFieldStoragehkArrayun_1468037f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hknpMaterial_FreeListArrayOpera_146803818);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hknpMotionProperties_FreeListAr_146803840);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkTraceStream_146803868);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkReferencedObject_146803890);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkReferencedObject_1468038b8);
                    /* WARNING: Could not recover jumptable at 0x0001437dbfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468038e0);
  return;
}



// FUNCTION 1437dbff0 FUN_1437dbff0 body=234 status=ok
// SIG undefined FUN_1437dbff0(void)

void FUN_1437dbff0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  uVar1 = FUN_143741ed0(param_1,local_20,"domain");
  uVar2 = FUN_143741ed0(param_1,local_38,"domain_keep");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_38,"nodes");
  uVar2 = FUN_143741ed0(param_1,local_20,"nodes_keep");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dc0e0 FUN_1437dc0e0 body=234 status=ok
// SIG undefined FUN_1437dc0e0(void)

void FUN_1437dc0e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  uVar1 = FUN_143741ed0(param_1,local_20,"domain_keep");
  uVar2 = FUN_143741ed0(param_1,local_38,"domain");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_38,"nodes_keep");
  uVar2 = FUN_143741ed0(param_1,local_20,"nodes");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dc1d0 FUN_1437dc1d0 body=284 status=ok
// SIG undefined FUN_1437dc1d0(void)

void FUN_1437dc1d0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultTreePtrSto_146803908);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeTreehkcdDynamicTr_146803930);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStorage0hk_146803958);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultDynamicSto_146803980);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStoragePtr_1468039a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<hkcdStaticT_1468039d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<hkcdStaticT_1468039f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTree_DefaultDynamicS_146803a20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTree_Tree<_hkcdDynam_146803a48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTree_CodecRaw<_unsig_146803a70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultTreeInt16S_146803a98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStorageInt_146803ac0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDynamicStorage0hk_146803ae8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeDefaultDynamicSto_146803b10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicTreeTreehkcdDynamicTr_146803b38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_146803b60);
                    /* WARNING: Could not recover jumptable at 0x0001437dc2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Section_146803b88);
  return;
}



// FUNCTION 1437dc2f0 FUN_1437dc2f0 body=121 status=ok
// SIG undefined FUN_1437dc2f0(void)

void FUN_1437dc2f0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "Upgrading a hkaiNavMeshCutter from version 19 to 20 not implemented. Please reexport your data."
            );
  iVar2 = FUN_143732300(0x4a10f6a9,local_208,"Patches\\2015_1\\hkaiPatches_2015_1.cpp",0x44);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dc370 FUN_1437dc370 body=121 status=ok
// SIG undefined FUN_1437dc370(void)

void FUN_1437dc370(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "Upgrading hkaiStreamingCollectionInstanceInfo from version 4 to 5 not implemented. Please reexport your data."
            );
  iVar2 = FUN_143732300(0x191e46ca,local_208,"Patches\\2015_1\\hkaiPatches_2015_1.cpp",0x3f);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dc3f0 FUN_1437dc3f0 body=234 status=ok
// SIG undefined FUN_1437dc3f0(void)

void FUN_1437dc3f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  uVar1 = FUN_143741ed0(param_1,local_20,"aEdgeCost");
  uVar2 = FUN_143741ed0(param_1,local_38,"bEdgeCost");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_38,"aEdgeData");
  uVar2 = FUN_143741ed0(param_1,local_20,"bEdgeData");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dc4e0 FUN_1437dc4e0 body=507 status=ok
// SIG undefined FUN_1437dc4e0(void)

void FUN_1437dc4e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  FUN_143741ed0(param_1,local_50,"aFaceEdgeIndex");
  uVar1 = FUN_143741ed0(param_1,local_20,"faceIndex");
  uVar2 = FUN_143741ed0(local_50,local_38,"faceIndex");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_38,"edgeIndex");
  uVar2 = FUN_143741ed0(local_50,local_20,"edgeIndex");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  FUN_143741ed0(param_1,local_68,"bFaceEdgeIndex");
  uVar1 = FUN_143741ed0(param_1,local_38,"oppositeFaceIndex");
  uVar2 = FUN_143741ed0(local_68,local_20,"faceIndex");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_38,"oppositeEdgeIndex");
  uVar2 = FUN_143741ed0(local_68,local_20,"edgeIndex");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dc6e0 FUN_1437dc6e0 body=1815 status=ok
// SIG undefined FUN_1437dc6e0(void)

void FUN_1437dc6e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 local_res8 [8];
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar12;
  undefined4 local_148;
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  undefined1 local_128 [16];
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [12];
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  puVar5 = (undefined8 *)FUN_143741ed0(param_1,&local_a8);
  iVar11 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  bVar1 = 0;
  if (puVar5[1] != 0) {
    puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
    bVar2 = bVar1;
    if (puVar6 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar6;
    }
    if ((bVar2 & 0xf) == 8) {
      local_d8 = *puVar5;
      uStack_d0 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      if ((local_c8 & 1) != 0) {
        FUN_143733a60(local_c8 & 0xfffffffffffffffe);
      }
      local_c8 = puVar5[2];
    }
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  puVar5 = (undefined8 *)FUN_143741ed0(param_1,&local_a8,param_4);
  local_e0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (puVar5[1] != 0) {
    puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
    if (puVar6 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar6;
    }
    if ((bVar1 & 0xf) == 8) {
      local_f0 = *puVar5;
      uStack_e8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      if ((local_e0 & 1) != 0) {
        FUN_143733a60(local_e0 & 0xfffffffffffffffe);
      }
      local_e0 = puVar5[2];
    }
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143742950(&local_d8);
  (**(code **)(*(longlong *)(local_e0 & 0xfffffffffffffffe) + 0x70))
            ((longlong *)(local_e0 & 0xfffffffffffffffe),local_res8,local_f0,uStack_e8,
             CONCAT44(uVar12,uVar3));
  iVar4 = FUN_143742950(&local_d8);
  if (0 < iVar4) {
    do {
      uVar9 = 0;
      FUN_143741d50(&local_d8,local_c0,iVar11);
      FUN_143741d50(&local_f0,local_58,iVar11);
      local_68 = 0;
      uStack_60 = uStack_60 & 0xffffff00;
      local_148 = 0;
      uStack_144 = 0;
      uStack_140 = uStack_60;
      uStack_13c = uStack_5c;
      puVar5 = (undefined8 *)FUN_143741ed0(local_58,local_128,&DAT_145c04288);
      local_40 = 0;
      uStack_38 = 0;
      uVar8 = uStack_38;
      uVar7 = local_40;
      if (puVar5[1] != 0) {
        puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
        if (puVar6 == (undefined8 *)0x0) {
          bVar1 = 0;
        }
        else {
          bVar1 = (byte)*puVar6;
        }
        uVar8 = uStack_38;
        uVar7 = local_40;
        if ((bVar1 & 0xf) == 4) {
          uVar7 = *puVar5;
          uVar8 = puVar5[1];
          if ((*(byte *)(puVar5 + 2) & 1) != 0) {
            FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
          }
          uVar9 = puVar5[2];
        }
      }
      plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
      (**(code **)(*plVar10 + 0x30))(plVar10,local_res8,uVar7,uVar8,&local_148);
      if ((uVar9 & 1) != 0) {
        FUN_143733a60(plVar10);
      }
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      puVar5 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,local_128,local_b8,0xffffffff);
      local_100 = puVar5[1];
      local_108 = *puVar5;
      local_f8 = (ulonglong)(*(byte *)(puVar5 + 3) & 1) | puVar5[3] & 0xfffffffffffffffe;
      if ((ulonglong)(*(byte *)(puVar5 + 3) & 1) != 0) {
        FUN_1437329e0(puVar5[3] & 0xfffffffffffffffe);
      }
      if ((local_110 & 1) != 0) {
        FUN_143733a60(local_110 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(local_c0,&local_148,"aSectionUid");
      uVar8 = FUN_143741ed0(&local_108,local_128,"aSectionUid");
      FUN_1437420f0(uVar8,local_90,uVar7);
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(local_c0,&local_148,"bSectionUid");
      uVar8 = FUN_143741ed0(&local_108,local_128,"bSectionUid");
      FUN_1437420f0(uVar8,local_8c,uVar7);
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(local_c0,&local_148,"aConnectionAabbs");
      uVar8 = FUN_143741ed0(&local_108,local_128,"aConnectionAabbs");
      FUN_1437420f0(uVar8,local_88,uVar7);
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(local_c0,&local_148,"bConnectionAabbs");
      uVar8 = FUN_143741ed0(&local_108,local_128,"bConnectionAabbs");
      FUN_1437420f0(uVar8,local_84,uVar7);
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(local_c0,&local_148,"meshConnections");
      uVar8 = FUN_143741ed0(&local_108,local_128,"meshConnections");
      FUN_1437420f0(uVar8,local_80,uVar7);
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(local_c0,&local_148,"graphConnections");
      uVar8 = FUN_143741ed0(&local_108,local_128,"graphConnections");
      FUN_1437420f0(uVar8,local_7c,uVar7);
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(local_c0,&local_148,"volumeConnections");
      uVar8 = FUN_143741ed0(&local_108,local_128,"volumeConnections");
      FUN_1437420f0(uVar8,local_78,uVar7);
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
      }
      puVar5 = (undefined8 *)FUN_143741ed0(local_58,local_128,"streamingSet");
      uVar9 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uVar8 = uStack_a0;
      uVar7 = local_a8;
      if (puVar5[1] != 0) {
        puVar6 = (undefined8 *)FUN_143714490(puVar5[1],1);
        bVar1 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar1 = (byte)*puVar6;
        }
        uVar8 = uStack_a0;
        uVar7 = local_a8;
        if ((bVar1 & 0xf) == 6) {
          uVar7 = *puVar5;
          uVar8 = puVar5[1];
          if ((*(byte *)(puVar5 + 2) & 1) != 0) {
            FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
          }
          uVar9 = puVar5[2];
        }
      }
      plVar10 = (longlong *)(uVar9 & 0xfffffffffffffffe);
      (**(code **)(*plVar10 + 0x48))(plVar10,local_74,uVar7,uVar8,&local_108);
      if ((uVar9 & 1) != 0) {
        FUN_143733a60(plVar10);
      }
      if ((local_118 & 1) != 0) {
        FUN_143733a60(local_118 & 0xfffffffffffffffe);
      }
      if ((local_f8 & 1) != 0) {
        FUN_143733a60(local_f8 & 0xfffffffffffffffe);
      }
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      if ((local_b0 & 1) != 0) {
        FUN_143733a60(local_b0 & 0xfffffffffffffffe);
      }
      iVar11 = iVar11 + 1;
      iVar4 = FUN_143742950(&local_d8);
    } while (iVar11 < iVar4);
  }
  if ((local_e0 & 1) != 0) {
    FUN_143733a60(local_e0 & 0xfffffffffffffffe);
  }
  if ((local_c8 & 1) != 0) {
    FUN_143733a60(local_c8 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dce00 FUN_1437dce00 body=988 status=ok
// SIG undefined FUN_1437dce00(void)

void FUN_1437dce00(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMesh_146803bb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolume_146803bd8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphExplicitCost_146803c00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_146803c28);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803c50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSet_146803c78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSet_NavMeshConnect_146803ca0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSet_VolumeConnecti_146803cc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingSet_GraphConnectio_146803cf0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803d18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803d40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803d68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollectionInstanceI_146803d90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_146803db8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803de0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutConfiguration_146803e08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutConfiguration_Big_146803e30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803e58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803e80);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803ea8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803ed0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803ef8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803f20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803f48);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803f70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803f98);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146803fc0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_146803fe8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804010);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804038);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804060);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804088);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468040b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468040d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804100);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804128);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804150);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804178);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468041a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCompactUtils_Compact_1468041c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshEdgeZipper_ZipEdgesS_1468041f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManagerSectionGenerat_146804218);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGateFollowingBehaviorRequest_146804240);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManager_Node_146804268);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutterMeshInfo_146804290);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtil_1468042b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumePathfindingUtil_1468042e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiHierarchyUtils_146804308);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_MeshInfo_146804330);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashBase<_hkHashMapDetail_Map_146804358);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashBase<_hkHashMapDetail_Map_146804380);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashMap<_hkInt32,_hkaiNavMeshC_1468043a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashMap<_hkInt32,_hkaiNavMeshC_1468043d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshClearanceResetter_1468043f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_146804420);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_Instance_146804448);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_VolumeLo_146804470);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_GraphLoa_146804498);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468044c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468044e8);
                    /* WARNING: Could not recover jumptable at 0x0001437dd1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804510);
  return;
}



// FUNCTION 1437dd1e0 FUN_1437dd1e0 body=234 status=ok
// SIG undefined FUN_1437dd1e0(void)

void FUN_1437dd1e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  uVar1 = FUN_143741ed0(param_1,local_20,"angle");
  uVar2 = FUN_143741ed0(param_1,local_38,"m_innerAngle");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_38,"angle");
  uVar2 = FUN_143741ed0(param_1,local_20,"m_outerAngle");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dd2d0 FUN_1437dd2d0 body=508 status=ok
// SIG undefined FUN_1437dd2d0(void)

void FUN_1437dd2d0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804538);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804560);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804588);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468045b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468045d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804600);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804628);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804650);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804678);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468046a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468046c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468046f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxLight_146804718);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804740);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804768);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804790);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468047b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468047e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804808);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804830);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804858);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804880);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468048a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468048d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468048f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804920);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkTuple<_T*<_hkReflect_Type_>,_c_146804948);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkSweptTransform_146804970);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkMotionState_146804998);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkTraceStream_Title_1468049c0);
                    /* WARNING: Could not recover jumptable at 0x0001437dd4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkContactPointMaterial_1468049e8);
  return;
}



// FUNCTION 1437dd4d0 FUN_1437dd4d0 body=428 status=ok
// SIG undefined FUN_1437dd4d0(void)

void FUN_1437dd4d0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804a10);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804a38);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804a60);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804a88);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804ab0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804ad8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804b00);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804b28);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804b50);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804b78);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804ba0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804bc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804bf0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804c18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804c40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804c68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804c90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804cb8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804ce0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804d08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804d30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804d58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdShape_146804d80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdShapeType_146804da8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdShapeInfoCodecType_146804dd0);
                    /* WARNING: Could not recover jumptable at 0x0001437dd678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdShapeDispatchType_146804df8);
  return;
}



// FUNCTION 1437dd680 FUN_1437dd680 body=380 status=ok
// SIG undefined FUN_1437dd680(void)

void FUN_1437dd680(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstanceCutter_146804e20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804e48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_146804e70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804e98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavigatorManager_146804ec0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDropDownAnalyzer_146804ee8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiClimbUpAnalyzer_146804f10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGatePath_PathGate_146804f38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_146804f60);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804f88);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804fb0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146804fd8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805000);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805028);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805050);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805078);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCollisionAvoidance_Characte_1468050a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468050c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468050f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805118);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805140);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805168);
                    /* WARNING: Could not recover jumptable at 0x0001437dd7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiGateFollowingBehavior_146805190);
  return;
}



// FUNCTION 1437dd810 FUN_1437dd810 body=471 status=ok
// SIG undefined FUN_1437dd810(void)

void FUN_1437dd810(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ushort local_res8 [4];
  undefined1 local_res18 [8];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  uVar4 = 0;
  local_68 = 0;
  local_60 = 0;
  puVar2 = (undefined8 *)FUN_143741ed0(param_1,local_40,"value");
  local_58 = 0;
  lStack_50 = 0;
  lVar6 = lStack_50;
  uVar8 = uVar4;
  uVar5 = local_58;
  if (puVar2[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(puVar2[1],1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = lStack_50;
    uVar5 = local_58;
    if ((bVar1 & 0xf) == 4) {
      uVar5 = *puVar2;
      lVar6 = puVar2[1];
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        FUN_1437329e0(puVar2[2] & 0xfffffffffffffffe);
      }
      uVar8 = puVar2[2];
    }
  }
  plVar7 = (longlong *)(uVar8 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x38))(plVar7,local_res18,uVar5,lVar6,&local_68);
  if ((uVar8 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  local_res8[0] = (ushort)local_68;
  if (((ushort)local_68 & 0x7c00) == 0x7c00) {
    local_res8[0] = (ushort)local_68 & 0xfbff | 0x7bff;
  }
  lStack_50 = 0;
  local_48 = 0;
  puVar2 = (undefined8 *)FUN_14371d5c0(&local_68,local_res8,&DAT_1467f00e0);
  local_58 = *puVar2;
  lStack_50 = puVar2[1];
  if (lStack_50 != 0) {
    uVar4 = FUN_1437151a0();
  }
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  local_48 = uVar4;
  uVar5 = FUN_143741ed0(param_1,local_40,"value");
  FUN_1437420f0(uVar5,local_res18,&local_58);
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dd9f0 FUN_1437dd9f0 body=462 status=ok
// SIG undefined FUN_1437dd9f0(void)

void FUN_1437dd9f0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined4 local_res8 [2];
  undefined1 local_res18 [8];
  longlong local_88;
  char local_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  undefined8 local_60;
  longlong lStack_58;
  ulonglong local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  uVar4 = 0;
  local_88 = 0;
  local_80 = '\0';
  puVar2 = (undefined8 *)FUN_143741ed0(param_1,local_78,&DAT_145b83658);
  local_60 = 0;
  lStack_58 = 0;
  lVar6 = lStack_58;
  uVar8 = uVar4;
  uVar5 = local_60;
  if (puVar2[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(puVar2[1],1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar3;
    }
    lVar6 = lStack_58;
    uVar5 = local_60;
    if ((bVar1 & 0xf) == 4) {
      uVar5 = *puVar2;
      lVar6 = puVar2[1];
      if ((*(byte *)(puVar2 + 2) & 1) != 0) {
        FUN_1437329e0(puVar2[2] & 0xfffffffffffffffe);
      }
      uVar8 = puVar2[2];
    }
  }
  plVar7 = (longlong *)(uVar8 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x38))(plVar7,local_res8,uVar5,lVar6,&local_88);
  if ((uVar8 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  if ((local_80 != '\0') || (local_88 != 0)) {
    local_res8[0] = 0x80040200;
    lStack_58 = 0;
    local_50 = 0;
    puVar2 = (undefined8 *)FUN_14371d5c0(local_78,local_res8,&DAT_1467f0140);
    local_60 = *puVar2;
    lStack_58 = puVar2[1];
    if (lStack_58 != 0) {
      uVar4 = FUN_1437151a0();
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
    local_50 = uVar4;
    uVar5 = FUN_143741ed0(param_1,local_48,&DAT_145b2b8e4);
    FUN_1437420f0(uVar5,local_res18,&local_60);
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
    if ((local_50 & 1) != 0) {
      FUN_143733a60(local_50 & 0xfffffffffffffffe);
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437ddbc0 FUN_1437ddbc0 body=124 status=ok
// SIG undefined FUN_1437ddbc0(void)

void FUN_1437ddbc0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468051b8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkxVertexFloatDataChannel_1468051e0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkResult_146805208);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805230);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805258);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805280);
                    /* WARNING: Could not recover jumptable at 0x0001437ddc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkFloat16_1468052a8);
  return;
}



// FUNCTION 1437ddc40 FUN_1437ddc40 body=1497 status=ok
// SIG undefined FUN_1437ddc40(void)

void FUN_1437ddc40(longlong param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_res18;
  undefined1 local_res20 [8];
  ulonglong local_1a8;
  longlong local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  undefined8 local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  undefined1 local_158 [16];
  ulonglong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined1 local_130 [16];
  ulonglong local_120;
  undefined8 local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [8];
  longlong local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  FUN_143741ed0(param_1,&local_118,"primitives");
  local_168 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uVar10 = local_168;
  if (local_110 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_110,1);
    bVar1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar3;
    }
    uVar10 = local_168;
    if ((bVar1 & 0xf) == 8) {
      local_178 = local_118;
      uStack_170 = local_110;
      if ((local_108 & 1) != 0) {
        FUN_1437329e0(local_108 & 0xfffffffffffffffe);
      }
      uVar10 = local_108;
      if ((local_168 & 1) != 0) {
        FUN_143733a60(local_168 & 0xfffffffffffffffe);
        uVar10 = local_108;
      }
    }
  }
  local_168 = uVar10;
  FUN_143742a00(&local_178,&local_c0);
  if ((local_168 & 1) != 0) {
    FUN_143733a60(local_168 & 0xfffffffffffffffe);
  }
  local_res18 = 0;
  if (0 < local_b0) {
    do {
      local_198 = local_ac * local_res18 + local_c0;
      uStack_190 = local_b8;
      local_188 = ((uint)local_a8 & 0xff ^ (uint)local_a8) & 1 ^ local_a8;
      if ((local_188 & 1) != 0) {
        FUN_1437329e0(local_188 & 0xfffffffffffffffe);
      }
      FUN_143741ed0(&local_198,local_130,"indices");
      if ((local_188 & 1) != 0) {
        FUN_143733a60(local_188 & 0xfffffffffffffffe);
      }
      uVar4 = FUN_143741dd0(local_130,local_158,3);
      uVar5 = FUN_143741dd0(local_130,&local_198,1);
      iVar2 = FUN_143742340(uVar5,uVar4);
      if ((local_188 & 1) != 0) {
        FUN_143733a60(local_188 & 0xfffffffffffffffe);
      }
      if ((local_148 & 1) != 0) {
        FUN_143733a60(local_148 & 0xfffffffffffffffe);
      }
      if (iVar2 == 0) {
        puVar3 = (undefined8 *)FUN_143741dd0(local_130,local_158,1);
        local_1a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        if (puVar3[1] == 0) {
LAB_1437dde8f:
          local_140 = local_a0;
          uVar4 = uStack_98;
        }
        else {
          puVar6 = (undefined8 *)FUN_143714490(puVar3[1],1);
          bVar1 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            bVar1 = (byte)*puVar6;
          }
          if ((bVar1 & 0xf) != 4) goto LAB_1437dde8f;
          local_140 = *puVar3;
          uVar4 = puVar3[1];
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
          }
          local_1a8 = puVar3[2];
        }
        if ((local_148 & 1) != 0) {
          FUN_143733a60(local_148 & 0xfffffffffffffffe);
        }
        plVar7 = (longlong *)FUN_143741dd0(local_130,local_158,2);
        uVar10 = 0;
        local_88 = 0;
        lStack_80 = 0;
        if (plVar7[1] == 0) {
LAB_1437ddf14:
          local_198 = local_88;
          lVar9 = lStack_80;
        }
        else {
          puVar3 = (undefined8 *)FUN_143714490(plVar7[1],1);
          bVar1 = 0;
          if (puVar3 != (undefined8 *)0x0) {
            bVar1 = (byte)*puVar3;
          }
          if ((bVar1 & 0xf) != 4) goto LAB_1437ddf14;
          local_198 = *plVar7;
          lVar9 = plVar7[1];
          if ((*(byte *)(plVar7 + 2) & 1) != 0) {
            FUN_1437329e0(plVar7[2] & 0xfffffffffffffffe);
          }
          uVar10 = plVar7[2];
        }
        if ((local_148 & 1) != 0) {
          FUN_143733a60(local_148 & 0xfffffffffffffffe);
        }
        puVar3 = (undefined8 *)FUN_143741dd0(local_130,local_158,3);
        uVar12 = 0;
        local_70 = 0;
        uStack_68 = 0;
        uVar8 = uStack_68;
        uVar5 = local_70;
        if (puVar3[1] != 0) {
          puVar6 = (undefined8 *)FUN_143714490(puVar3[1],1);
          bVar1 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            bVar1 = (byte)*puVar6;
          }
          uVar8 = uStack_68;
          uVar5 = local_70;
          if ((bVar1 & 0xf) == 4) {
            uVar5 = *puVar3;
            uVar8 = puVar3[1];
            if ((*(byte *)(puVar3 + 2) & 1) != 0) {
              FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
            }
            uVar12 = puVar3[2];
          }
        }
        if ((local_148 & 1) != 0) {
          FUN_143733a60(local_148 & 0xfffffffffffffffe);
        }
        plVar7 = (longlong *)(local_1a8 & 0xfffffffffffffffe);
        local_100 = 0;
        local_f8 = '\0';
        local_138 = plVar7;
        (**(code **)(*plVar7 + 0x38))(plVar7,local_res20,local_140,uVar4,&local_100);
        if ((local_100 == 0xad) && (local_f8 == '\0')) {
          local_f0 = 0;
          local_e8 = '\0';
          (**(code **)(*(longlong *)(uVar10 & 0xfffffffffffffffe) + 0x38))
                    ((longlong *)(uVar10 & 0xfffffffffffffffe),local_d0,local_198,lVar9,&local_f0);
          if ((local_f0 != 0xde) || (local_e8 != '\0')) goto LAB_1437de071;
          local_e0 = 0;
          local_d8 = '\0';
          (**(code **)(*(longlong *)(uVar12 & 0xfffffffffffffffe) + 0x38))
                    ((longlong *)(uVar12 & 0xfffffffffffffffe),local_cc,uVar5,uVar8,&local_e0);
          if ((local_e0 != 0xad) || (local_d8 != '\0')) goto LAB_1437de071;
        }
        else {
LAB_1437de071:
          local_178 = 3;
          uVar11 = uStack_170 >> 0x20;
          uStack_170 = uStack_170 & 0xffffffffffffff00;
          local_198 = 3;
          uStack_190 = CONCAT44((int)uVar11,(int)uStack_170);
          puVar3 = (undefined8 *)FUN_143741dd0(local_130,local_158,2);
          uVar11 = 0;
          local_58 = 0;
          uStack_50 = 0;
          uVar5 = uStack_50;
          uVar4 = local_58;
          if (puVar3[1] != 0) {
            puVar6 = (undefined8 *)FUN_143714490(puVar3[1],1);
            bVar1 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              bVar1 = (byte)*puVar6;
            }
            uVar5 = uStack_50;
            uVar4 = local_58;
            if ((bVar1 & 0xf) == 4) {
              uVar4 = *puVar3;
              uVar5 = puVar3[1];
              if ((*(byte *)(puVar3 + 2) & 1) != 0) {
                FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
              }
              uVar11 = puVar3[2];
            }
          }
          plVar7 = (longlong *)(uVar11 & 0xfffffffffffffffe);
          (**(code **)(*plVar7 + 0x30))(plVar7,local_c8,uVar4,uVar5,&local_198);
          if ((uVar11 & 1) != 0) {
            FUN_143733a60(plVar7);
          }
          plVar7 = local_138;
          if ((local_148 & 1) != 0) {
            FUN_143733a60(local_148 & 0xfffffffffffffffe);
            plVar7 = local_138;
          }
        }
        if ((uVar12 & 1) != 0) {
          FUN_143733a60(uVar12 & 0xfffffffffffffffe);
        }
        if ((uVar10 & 1) != 0) {
          FUN_143733a60(uVar10 & 0xfffffffffffffffe);
        }
        if ((local_1a8 & 1) != 0) {
          FUN_143733a60(plVar7);
        }
      }
      if ((local_120 & 1) != 0) {
        FUN_143733a60(local_120 & 0xfffffffffffffffe);
      }
      local_res18 = local_res18 + 1;
    } while (local_res18 < local_b0);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437de220 FUN_1437de220 body=108 status=ok
// SIG undefined FUN_1437de220(void)

void FUN_1437de220(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_1468052d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468052f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805320);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805348);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805370);
                    /* WARNING: Could not recover jumptable at 0x0001437de288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdSimdTree_146805398);
  return;
}



// FUNCTION 1437de290 FUN_1437de290 body=652 status=ok
// SIG undefined FUN_1437de290(void)

void FUN_1437de290(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_1468053c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_C_1468053e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_M_146805410);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_C_146805438);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_O_146805460);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_T_146805488);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_E_1468054b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_R_1468054d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_R_146805500);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationSettings_W_146805528);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAstarCostModifier_146805550);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteGenerator_146805578);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiReferenceFrameAndExtrusion_1468055a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeGenerationSettings__1468055c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_1468055f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiAstarEdgeFilter_146805618);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_146805640);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiEdgeFollowingBehavior_146805668);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805690);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468056b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468056e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805708);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805730);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805758);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805780);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468057a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468057d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468057f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805820);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805848);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805870);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805898);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468058c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468058e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805910);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805938);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805960);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805988);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468059b0);
                    /* WARNING: Could not recover jumptable at 0x0001437de518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468059d8);
  return;
}



// FUNCTION 1437de520 FUN_1437de520 body=137 status=ok
// SIG undefined FUN_1437de520(void)

void FUN_1437de520(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  uVar1 = FUN_143741ed0(param_1,local_20,"verticesOld");
  uVar2 = FUN_143741ed0(param_1,local_38,"vertices");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437de5b0 FUN_1437de5b0 body=76 status=ok
// SIG undefined FUN_1437de5b0(void)

void FUN_1437de5b0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkFourTransposedPointsf_146805a00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkScriptableAttribute_146805a28);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805a50);
                    /* WARNING: Could not recover jumptable at 0x0001437de5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805a78);
  return;
}



// FUNCTION 1437de600 FUN_1437de600 body=166 status=ok
// SIG undefined FUN_1437de600(void)

void FUN_1437de600(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 local_res8 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_30 = *(longlong *)(param_1[1] + 8);
  local_38 = *param_1;
  if (local_30 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_1437151a0();
  }
  if ((local_28 & 1) != 0) {
    FUN_1437329e0(local_28 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_20,&DAT_145bdbc28);
  FUN_1437420f0(uVar1,local_res8,&local_38);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437de6b0 FUN_1437de6b0 body=44 status=ok
// SIG undefined FUN_1437de6b0(void)

void FUN_1437de6b0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdDynamicAabbTree_Impl_146805aa0);
                    /* WARNING: Could not recover jumptable at 0x0001437de6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticAabbTree_Impl_146805ac8);
  return;
}



// FUNCTION 1437de6e0 FUN_1437de6e0 body=1569 status=ok
// SIG undefined FUN_1437de6e0(void)

void FUN_1437de6e0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined8 local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  ulonglong local_38;
  
  uVar3 = FUN_143741ed0(param_1,local_98,"instanceData");
  lVar4 = FUN_143741ed0(uVar3,&local_b8,&DAT_145b75d78);
  uVar3 = *(undefined8 *)(lVar4 + 8);
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  lVar4 = FUN_143715320(uVar3);
  puVar5 = (undefined8 *)
           (**(code **)(*param_2 + 8))(param_2,local_50,*(undefined8 *)(lVar4 + 0x10),0xffffffff);
  local_78 = puVar5[1];
  local_80 = *puVar5;
  local_70 = (ulonglong)(*(byte *)(puVar5 + 3) & 1) | puVar5[3] & 0xfffffffffffffffe;
  if ((ulonglong)(*(byte *)(puVar5 + 3) & 1) != 0) {
    FUN_1437329e0(puVar5[3] & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"freeEdgeBlocks");
  uVar6 = FUN_143741ed0(&local_80,local_98,"freeEdgeBlocks");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"userEdgeCount");
  uVar6 = FUN_143741ed0(&local_80,local_98,"userEdgeCount");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedEdges");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedEdges");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedEdgeData");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedEdgeData");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"instancedNodes");
  uVar6 = FUN_143741ed0(&local_80,local_98,"instancedNodes");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"nodeMap");
  uVar6 = FUN_143741ed0(&local_80,local_98,"nodeMap");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"originalGraph");
  uVar6 = FUN_143741ed0(&local_80,local_98,"originalGraph");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"runtimeId");
  uVar6 = FUN_143741ed0(&local_80,local_98,"runtimeId");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"sectionUid");
  uVar6 = FUN_143741ed0(&local_80,local_98,"sectionUid");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  FUN_143741ed0(param_1,local_68,"instanceData");
  puVar5 = (undefined8 *)FUN_143741ed0(local_68,local_98,&DAT_145b75d78);
  uVar10 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  bVar1 = 0;
  uVar8 = uStack_b0;
  uVar3 = local_b8;
  uVar11 = uVar10;
  if (puVar5[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
    bVar2 = bVar1;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    uVar8 = uStack_b0;
    uVar3 = local_b8;
    if ((bVar2 & 0xf) == 6) {
      uVar3 = *puVar5;
      uVar8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      uVar11 = puVar5[2];
    }
  }
  plVar9 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar9 + 0x48))(plVar9,local_res8,uVar3,uVar8,&local_80);
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar9);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(local_68,local_50,"ptrState");
  puVar5 = (undefined8 *)FUN_143741ed0(uVar3,local_98,&DAT_145b85670);
  local_b8 = 0;
  uStack_b0 = 0;
  uVar8 = uStack_b0;
  uVar3 = local_b8;
  if (puVar5[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
    if (puVar7 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar7;
    }
    uVar8 = uStack_b0;
    uVar3 = local_b8;
    if ((bVar1 & 0xf) == 4) {
      uVar3 = *puVar5;
      uVar8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      uVar10 = puVar5[2];
    }
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  plVar9 = (longlong *)(uVar10 & 0xfffffffffffffffe);
  local_b8 = 2;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  (**(code **)(*plVar9 + 0x30))(plVar9,local_res8,uVar3,uVar8,&local_b8);
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(plVar9);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437ded10 FUN_1437ded10 body=94 status=ok
// SIG undefined FUN_1437ded10(void)

void FUN_1437ded10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  uVar1 = FUN_143741ed0(param_1,local_38,"bigFaceInfos");
  uVar2 = FUN_143741ed0(param_1,local_20,"bigFaceInfos_new");
  FUN_1437e0dd0(uVar2,uVar1);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437ded70 FUN_1437ded70 body=94 status=ok
// SIG undefined FUN_1437ded70(void)

void FUN_1437ded70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  uVar1 = FUN_143741ed0(param_1,local_38,"dynamicUserEdges");
  uVar2 = FUN_143741ed0(param_1,local_20,"dynamicUserEdges_new");
  FUN_1437e0dd0(uVar2,uVar1);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dedd0 FUN_1437dedd0 body=94 status=ok
// SIG undefined FUN_1437dedd0(void)

void FUN_1437dedd0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  uVar1 = FUN_143741ed0(param_1,local_38,"faceInfos");
  uVar2 = FUN_143741ed0(param_1,local_20,"faceInfos_new");
  FUN_1437e0dd0(uVar2,uVar1);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dee30 FUN_1437dee30 body=121 status=ok
// SIG undefined FUN_1437dee30(void)

void FUN_1437dee30(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "hkaiNavMeshCutter cannot be patched from version 20 to 21. Re-export your data instead."
            );
  iVar2 = FUN_143732300(0x65b67b3b,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0xb8);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437deeb0 FUN_1437deeb0 body=121 status=ok
// SIG undefined FUN_1437deeb0(void)

void FUN_1437deeb0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "hkaiNavMeshInstanceCutter cannot be patched from version 1 to 2. Re-export your data instead."
            );
  iVar2 = FUN_143732300(0x59e4470d,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",199);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437def30 FUN_1437def30 body=2964 status=ok
// SIG undefined FUN_1437def30(void)

void FUN_1437def30(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined8 local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  ulonglong local_38;
  
  uVar3 = FUN_143741ed0(param_1,local_98,"instanceData");
  lVar4 = FUN_143741ed0(uVar3,&local_b8,&DAT_145b75d78);
  uVar3 = *(undefined8 *)(lVar4 + 8);
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  lVar4 = FUN_143715320(uVar3);
  puVar5 = (undefined8 *)
           (**(code **)(*param_2 + 8))(param_2,local_50,*(undefined8 *)(lVar4 + 0x10),0xffffffff);
  local_78 = puVar5[1];
  local_80 = *puVar5;
  local_70 = (ulonglong)(*(byte *)(puVar5 + 3) & 1) | puVar5[3] & 0xfffffffffffffffe;
  if ((ulonglong)(*(byte *)(puVar5 + 3) & 1) != 0) {
    FUN_1437329e0(puVar5[3] & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"originalMesh");
  uVar6 = FUN_143741ed0(&local_80,local_98,"originalMesh");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"edgeOrigToInstancedMap");
  uVar6 = FUN_143741ed0(&local_80,local_98,"edgeOrigToInstancedMap");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"edgeInstancedToOrigMap");
  uVar6 = FUN_143741ed0(&local_80,local_98,"edgeInstancedToOrigMap");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"faceOrigToInstancedMap");
  uVar6 = FUN_143741ed0(&local_80,local_98,"faceOrigToInstancedMap");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"faceInstancedToOrigMap");
  uVar6 = FUN_143741ed0(&local_80,local_98,"faceInstancedToOrigMap");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"instancedFaces");
  uVar6 = FUN_143741ed0(&local_80,local_98,"instancedFaces");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"instancedEdges");
  uVar6 = FUN_143741ed0(&local_80,local_98,"instancedEdges");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedFaces");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedFaces");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedEdges");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedEdges");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedVertices");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedVertices");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"faceFlags");
  uVar6 = FUN_143741ed0(&local_80,local_98,"faceFlags");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"origEdgeOffsets");
  uVar6 = FUN_143741ed0(&local_80,local_98,"origEdgeOffsets");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"instancedFaceData");
  uVar6 = FUN_143741ed0(&local_80,local_98,"instancedFaceData");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"instancedEdgeData");
  uVar6 = FUN_143741ed0(&local_80,local_98,"instancedEdgeData");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedFaceData");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedFaceData");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedEdgeData");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedEdgeData");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"numGarbageEdges");
  uVar6 = FUN_143741ed0(&local_80,local_98,"numGarbageEdges");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"numGarbageFaces");
  uVar6 = FUN_143741ed0(&local_80,local_98,"numGarbageFaces");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"faceMapping");
  uVar6 = FUN_143741ed0(&local_80,local_98,"faceMapping");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"sectionUid");
  uVar6 = FUN_143741ed0(&local_80,local_98,"sectionUid");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"runtimeId");
  uVar6 = FUN_143741ed0(&local_80,local_98,"runtimeId");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"layerIndex");
  uVar6 = FUN_143741ed0(&local_80,local_98,"layerIndex");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"clearanceCaches");
  uVar6 = FUN_143741ed0(&local_80,local_98,"clearanceCaches");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"dynUserEdgeBases");
  uVar6 = FUN_143741ed0(&local_80,local_98,"dynUserEdgeBases");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  FUN_143741ed0(param_1,local_68,"instanceData");
  puVar5 = (undefined8 *)FUN_143741ed0(local_68,local_98,&DAT_145b75d78);
  uVar10 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  bVar1 = 0;
  uVar8 = uStack_b0;
  uVar3 = local_b8;
  uVar11 = uVar10;
  if (puVar5[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
    bVar2 = bVar1;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    uVar8 = uStack_b0;
    uVar3 = local_b8;
    if ((bVar2 & 0xf) == 6) {
      uVar3 = *puVar5;
      uVar8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      uVar11 = puVar5[2];
    }
  }
  plVar9 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar9 + 0x48))(plVar9,local_res8,uVar3,uVar8,&local_80);
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar9);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(local_68,local_50,"ptrState");
  puVar5 = (undefined8 *)FUN_143741ed0(uVar3,local_98,&DAT_145b85670);
  local_b8 = 0;
  uStack_b0 = 0;
  uVar8 = uStack_b0;
  uVar3 = local_b8;
  if (puVar5[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
    if (puVar7 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar7;
    }
    uVar8 = uStack_b0;
    uVar3 = local_b8;
    if ((bVar1 & 0xf) == 4) {
      uVar3 = *puVar5;
      uVar8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      uVar10 = puVar5[2];
    }
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  plVar9 = (longlong *)(uVar10 & 0xfffffffffffffffe);
  local_b8 = 2;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  (**(code **)(*plVar9 + 0x30))(plVar9,local_res8,uVar3,uVar8,&local_b8);
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(plVar9);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dfad0 FUN_1437dfad0 body=121 status=ok
// SIG undefined FUN_1437dfad0(void)

void FUN_1437dfad0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "hkaiNavMeshPathRequestInfo cannot be patched from version 0 to 1. Re-export your data instead."
            );
  iVar2 = FUN_143732300(0x46dd62c0,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0xbd);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437dfb50 FUN_1437dfb50 body=1569 status=ok
// SIG undefined FUN_1437dfb50(void)

void FUN_1437dfb50(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  undefined8 local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined1 local_98 [16];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  ulonglong local_38;
  
  uVar3 = FUN_143741ed0(param_1,local_98,"instanceData");
  lVar4 = FUN_143741ed0(uVar3,&local_b8,&DAT_145b75d78);
  uVar3 = *(undefined8 *)(lVar4 + 8);
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  lVar4 = FUN_143715320(uVar3);
  puVar5 = (undefined8 *)
           (**(code **)(*param_2 + 8))(param_2,local_50,*(undefined8 *)(lVar4 + 0x10),0xffffffff);
  local_78 = puVar5[1];
  local_80 = *puVar5;
  local_70 = (ulonglong)(*(byte *)(puVar5 + 3) & 1) | puVar5[3] & 0xfffffffffffffffe;
  if ((ulonglong)(*(byte *)(puVar5 + 3) & 1) != 0) {
    FUN_1437329e0(puVar5[3] & 0xfffffffffffffffe);
  }
  if ((local_38 & 1) != 0) {
    FUN_143733a60(local_38 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedUserEdgeInfos");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedUserEdgeInfos");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedUserEdgeData");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedUserEdgeData");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"layerIndex");
  uVar6 = FUN_143741ed0(&local_80,local_98,"layerIndex");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"runtimeId");
  uVar6 = FUN_143741ed0(&local_80,local_98,"runtimeId");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"sectionUid");
  uVar6 = FUN_143741ed0(&local_80,local_98,"sectionUid");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"ownedEdges");
  uVar6 = FUN_143741ed0(&local_80,local_98,"ownedEdges");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"instancedCells");
  uVar6 = FUN_143741ed0(&local_80,local_98,"instancedCells");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"cellMap");
  uVar6 = FUN_143741ed0(&local_80,local_98,"cellMap");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,&local_b8,"originalVolume");
  uVar6 = FUN_143741ed0(&local_80,local_98,"originalVolume");
  FUN_1437420f0(uVar6,local_res8,uVar3);
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  FUN_143741ed0(param_1,local_68,"instanceData");
  puVar5 = (undefined8 *)FUN_143741ed0(local_68,local_98,&DAT_145b75d78);
  uVar10 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  bVar1 = 0;
  uVar8 = uStack_b0;
  uVar3 = local_b8;
  uVar11 = uVar10;
  if (puVar5[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
    bVar2 = bVar1;
    if (puVar7 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar7;
    }
    uVar8 = uStack_b0;
    uVar3 = local_b8;
    if ((bVar2 & 0xf) == 6) {
      uVar3 = *puVar5;
      uVar8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      uVar11 = puVar5[2];
    }
  }
  plVar9 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar9 + 0x48))(plVar9,local_res8,uVar3,uVar8,&local_80);
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar9);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(local_68,local_50,"ptrState");
  puVar5 = (undefined8 *)FUN_143741ed0(uVar3,local_98,&DAT_145b85670);
  local_b8 = 0;
  uStack_b0 = 0;
  uVar8 = uStack_b0;
  uVar3 = local_b8;
  if (puVar5[1] != 0) {
    puVar7 = (undefined8 *)FUN_143714490(puVar5[1],1);
    if (puVar7 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar7;
    }
    uVar8 = uStack_b0;
    uVar3 = local_b8;
    if ((bVar1 & 0xf) == 4) {
      uVar3 = *puVar5;
      uVar8 = puVar5[1];
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        FUN_1437329e0(puVar5[2] & 0xfffffffffffffffe);
      }
      uVar10 = puVar5[2];
    }
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  plVar9 = (longlong *)(uVar10 & 0xfffffffffffffffe);
  local_b8 = 2;
  uStack_b0 = uStack_b0 & 0xffffffffffffff00;
  (**(code **)(*plVar9 + 0x30))(plVar9,local_res8,uVar3,uVar8,&local_b8);
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(plVar9);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((local_70 & 1) != 0) {
    FUN_143733a60(local_70 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e0180 FUN_1437e0180 body=121 status=ok
// SIG undefined FUN_1437e0180(void)

void FUN_1437e0180(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "hkaiNavVolumePathRequestInfo cannot be patched from version 0 to 1. Re-export your data instead."
            );
  iVar2 = FUN_143732300(0x7795f21e,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0xc2);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e0200 FUN_1437e0200 body=121 status=ok
// SIG undefined FUN_1437e0200(void)

void FUN_1437e0200(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "hkaiOverlapManager cannot be patched from version 2 to 3. Re-export your data instead."
            );
  iVar2 = FUN_143732300(0x650bec38,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0xae);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e0280 FUN_1437e0280 body=121 status=ok
// SIG undefined FUN_1437e0280(void)

void FUN_1437e0280(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "hkaiOverlapManager::Section cannot be patched from version 3 to 4. Re-export your data instead."
            );
  iVar2 = FUN_143732300(0x13e1445c,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0xa9);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e0300 FUN_1437e0300 body=588 status=ok
// SIG undefined FUN_1437e0300(void)

void FUN_1437e0300(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_res8 [8];
  undefined1 local_2a8 [16];
  ulonglong local_298;
  undefined1 local_290 [16];
  ulonglong local_280;
  longlong local_270 [2];
  ulonglong local_260;
  longlong local_258 [2];
  ulonglong local_248;
  longlong local_240 [2];
  ulonglong local_230;
  undefined1 local_228 [16];
  ulonglong local_218;
  undefined1 local_208 [512];
  
  FUN_143741ed0(param_1,local_240,"instance");
  FUN_143741ed0(param_1,local_258,"clusterGraphInstance");
  FUN_143741ed0(param_1,local_270,"volumeInstance");
  if (local_240[0] == 0) {
    if (local_258[0] == 0) {
      if (local_270[0] == 0) {
        FUN_1437134a0(local_290,local_208,0x200);
        Electra::FHTTPResourceRequest::URL
                  (local_290,
                   "At least one of m_instance, m_clusterGraphInstance and m_volumeInstance must be non-null in version 5 or earlier."
                  );
        iVar4 = FUN_143732300(0x5c968f30,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0x7c);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FUN_143713520(local_290);
        goto LAB_1437e04e9;
      }
      uVar2 = FUN_143741ed0(local_270,local_2a8,"transform");
      uVar3 = FUN_143741ed0(param_1,local_290,"volumeTransform");
      FUN_1437420f0(uVar3,local_res8,uVar2);
      local_218 = local_280;
      goto LAB_1437e0477;
    }
    uVar2 = FUN_143741ed0(local_258,local_290,"transform");
    uVar3 = FUN_143741ed0(param_1,local_228,"sectionReferenceFrame");
    uVar3 = FUN_143741ed0(uVar3,local_2a8,"transform");
    FUN_1437420f0(uVar3,local_res8,uVar2);
    if ((local_298 & 1) != 0) {
      FUN_143733a60(local_298 & 0xfffffffffffffffe);
    }
    if ((local_218 & 1) != 0) {
      FUN_143733a60(local_218 & 0xfffffffffffffffe);
    }
  }
  else {
    uVar2 = FUN_143741ed0(local_240,local_2a8,"referenceFrame");
    uVar3 = FUN_143741ed0(param_1,local_228,"sectionReferenceFrame");
    FUN_1437420f0(uVar3,local_res8,uVar2);
LAB_1437e0477:
    local_280 = local_298;
    if ((local_218 & 1) != 0) {
      FUN_143733a60(local_218 & 0xfffffffffffffffe);
      local_280 = local_298;
    }
  }
  if ((local_280 & 1) != 0) {
    FUN_143733a60(local_280 & 0xfffffffffffffffe);
  }
LAB_1437e04e9:
  if ((local_260 & 1) != 0) {
    FUN_143733a60(local_260 & 0xfffffffffffffffe);
  }
  if ((local_248 & 1) != 0) {
    FUN_143733a60(local_248 & 0xfffffffffffffffe);
  }
  if ((local_230 & 1) != 0) {
    FUN_143733a60(local_230 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e0550 FUN_1437e0550 body=94 status=ok
// SIG undefined FUN_1437e0550(void)

void FUN_1437e0550(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_38 [24];
  undefined1 local_20 [24];
  
  uVar1 = FUN_143741ed0(param_1,local_38,"graphStreamingSets");
  uVar2 = FUN_143741ed0(param_1,local_20,"graphStreamingSets_new");
  FUN_1437e0dd0(uVar2,uVar1);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e05b0 FUN_1437e05b0 body=119 status=ok
// SIG undefined FUN_1437e05b0(void)

void FUN_1437e05b0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  
  cVar2 = FUN_143755360(0x1864e08,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0xa4,
                        "hkaiStreamingCollection_4_5",&DAT_145af3922,"Not implemented",
                        &DAT_145b909f0,0);
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
    return;
  }
  return;
}



// FUNCTION 1437e0630 FUN_1437e0630 body=121 status=ok
// SIG undefined FUN_1437e0630(void)

void FUN_1437e0630(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "hkaiWorld cannot be patched from version 40 to 41. Re-export your data instead.");
  iVar2 = FUN_143732300(0x4a047116,local_208,"Patches\\2017_1\\hkaiPatches_2017_1.cpp",0xb3);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e06b0 FUN_1437e06b0 body=1820 status=ok
// SIG undefined FUN_1437e06b0(void)

void FUN_1437e06b0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_146805af0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146805b18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_FaceDynUser_146805b40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashMap<_int,_hkaiNavMeshInsta_146805b68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashBase<_hkHashMapDetail_Map_146805b90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphInstance_146805bb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphInstance_FreeB_146805be0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeInstance_146805c08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeInstance_CellInsta_146805c30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDynamicNavMeshQueryMediator_146805c58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollectionInstanceI_146805c80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashBase<_hkHashMapDetail_Map_146805ca8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkHashMap<_int,_hkRefPtr<_hkaiSt_146805cd0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollection_146805cf8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_ReplayEv_146805d20);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_WorldCon_146805d48);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_Instance_146805d70);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_VolumeUn_146805d98);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_GraphUnl_146805dc0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_Generato_146805de8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_Generato_146805e10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_DynamicU_146805e38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_DynamicU_146805e60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_DynamicU_146805e88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_Silhouet_146805eb0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshClearanceCacheFiller_146805ed8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManager_Section_146805f00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiOverlapManager_146805f28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorld_146805f50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutter_146805f78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathRequestInfo_146805fa0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumePathRequestInfo_146805fc8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstanceCutter_146805ff0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGeneration_Settings_146806018);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshPathSearchParameters_146806040);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPathfindingUtil_FindPathOut_146806068);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDynamicNavVolumeMediator_146806090);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiPointCloudSilhouetteGenerato_1468060b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468060e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806108);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806130);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806158);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806180);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468061a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468061d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468061f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806220);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806248);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806270);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806298);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468062c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468062e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806310);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806338);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806360);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806388);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468063b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468063d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806400);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806428);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806450);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806478);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468064a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468064c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468064f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806518);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806540);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806568);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806590);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468065b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468065e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806608);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806630);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806658);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806680);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468066a8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468066d0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468066f8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806720);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806748);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806770);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806798);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468067c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468067e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806810);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806838);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806860);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806888);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468068b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468068d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806900);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806928);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiVolumeNavigatorStalenessChec_146806950);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806978);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468069a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468069c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468069f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806a18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavigator_PathRequest_146806a40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806a68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806a90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806ab8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806ae0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_GraphLoa_146806b08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_VolumeLo_146806b30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiSilhouetteRecorder_Instance_146806b58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiStreamingCollectionInstanceI_146806b80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshCutConfiguration_146806ba8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavigatorStalenessChecker_146806bd0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806bf8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806c20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806c48);
                    /* WARNING: Could not recover jumptable at 0x0001437e0dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806c70);
  return;
}



// FUNCTION 1437e0dd0 FUN_1437e0dd0 body=749 status=ok
// SIG undefined FUN_1437e0dd0(void)

void FUN_1437e0dd0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined1 local_70 [16];
  ulonglong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  puVar4 = (undefined8 *)FUN_143741ed0(param_2,local_88,"items");
  iVar8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  bVar1 = 0;
  if (puVar4[1] != 0) {
    puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
    bVar2 = bVar1;
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar5;
    }
    if ((bVar2 & 0xf) == 8) {
      local_a0 = *puVar4;
      uStack_98 = puVar4[1];
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
      }
      if ((local_90 & 1) != 0) {
        FUN_143733a60(local_90 & 0xfffffffffffffffe);
      }
      local_90 = puVar4[2];
    }
  }
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  puVar4 = (undefined8 *)FUN_143741ed0(param_1,local_88,"items");
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if (puVar4[1] != 0) {
    puVar5 = (undefined8 *)FUN_143714490(puVar4[1],1);
    if (puVar5 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar5;
    }
    if ((bVar1 & 0xf) == 8) {
      local_b8 = *puVar4;
      uStack_b0 = puVar4[1];
      if ((*(byte *)(puVar4 + 2) & 1) != 0) {
        FUN_1437329e0(puVar4[2] & 0xfffffffffffffffe);
      }
      if ((local_a8 & 1) != 0) {
        FUN_143733a60(local_a8 & 0xfffffffffffffffe);
      }
      local_a8 = puVar4[2];
    }
  }
  if ((local_78 & 1) != 0) {
    FUN_143733a60(local_78 & 0xfffffffffffffffe);
  }
  iVar3 = FUN_143742950(&local_a0);
  (**(code **)(*(longlong *)(local_a8 & 0xfffffffffffffffe) + 0x70))
            ((longlong *)(local_a8 & 0xfffffffffffffffe),local_res8,local_b8,uStack_b0,iVar3);
  if (0 < iVar3) {
    do {
      FUN_143741d50(&local_b8,local_88,iVar8);
      FUN_143741d50(&local_a0,local_70,iVar8);
      uVar6 = FUN_143741ed0(local_70,local_40,&DAT_145b0a5b8);
      uVar7 = FUN_143741ed0(local_88,local_58,&DAT_145b0a5b8);
      FUN_1437420f0(uVar7,local_res8,uVar6);
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      if ((local_30 & 1) != 0) {
        FUN_143733a60(local_30 & 0xfffffffffffffffe);
      }
      uVar6 = FUN_143741ed0(local_70,local_58,&DAT_145b0a5bc);
      uVar7 = FUN_143741ed0(local_88,local_40,&DAT_145b0a5bc);
      FUN_1437420f0(uVar7,local_res10,uVar6);
      if ((local_30 & 1) != 0) {
        FUN_143733a60(local_30 & 0xfffffffffffffffe);
      }
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      if ((local_60 & 1) != 0) {
        FUN_143733a60(local_60 & 0xfffffffffffffffe);
      }
      if ((local_78 & 1) != 0) {
        FUN_143733a60(local_78 & 0xfffffffffffffffe);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_90 & 1) != 0) {
    FUN_143733a60(local_90 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_2 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e10c0 FUN_1437e10c0 body=44 status=ok
// SIG undefined FUN_1437e10c0(void)

void FUN_1437e10c0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806c98);
                    /* WARNING: Could not recover jumptable at 0x0001437e10e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_146806cc0);
  return;
}



// FUNCTION 1437e10f0 FUN_1437e10f0 body=1887 status=ok
// SIG undefined FUN_1437e10f0(void)

void FUN_1437e10f0(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 local_res8 [8];
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  longlong *local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar5 = FUN_143741ed0(param_1,&local_98,"firstPackedVertex");
  uVar6 = FUN_143741ed0(param_1,&local_b8,"firstPackedVertexIndex");
  FUN_1437420f0(uVar6,local_res8,uVar5);
  if ((local_a8 & 1) != 0) {
    FUN_143733a60(local_a8 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_143741ed0(param_1,&local_78,"dataRuns");
  puVar7 = (ulonglong *)FUN_143741ed0(uVar5,&local_98,&DAT_145b138b0);
  uVar11 = 0;
  local_res20 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  bVar2 = 0;
  uVar9 = uStack_b0;
  uVar14 = local_b8;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    bVar3 = bVar2;
    if (puVar8 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar3 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      local_res20 = puVar7[2];
    }
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  local_98 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  plVar12 = (longlong *)(local_res20 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x38))(plVar12,local_res8,uVar14,uVar9,&local_98);
  puVar7 = (ulonglong *)FUN_143741ed0(param_1,&local_78,"firstDataRunIndex");
  local_res18 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = uStack_b0;
  uVar14 = local_b8;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    bVar3 = bVar2;
    if (puVar8 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar3 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      local_res18 = puVar7[2];
    }
  }
  if ((local_68 & 1) != 0) {
    FUN_143733a60(local_68 & 0xfffffffffffffffe);
  }
  uVar1 = uStack_70;
  local_78 = (longlong *)(local_res18 & 0xfffffffffffffffe);
  uStack_70 = uStack_70 & 0xffffff00;
  local_b8 = local_98 >> 8 & 0xffffff;
  uStack_b0 = CONCAT44(uStack_6c,uVar1) & 0xffffffffffffff00;
  (**(code **)(*local_78 + 0x30))(local_78,local_res8,uVar14,uVar9,&local_b8);
  puVar7 = (ulonglong *)FUN_143741ed0(param_1,local_58,"numDataRuns");
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = uStack_b0;
  uVar14 = local_b8;
  uVar13 = uVar11;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    bVar3 = bVar2;
    if (puVar8 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar3 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      uVar13 = puVar7[2];
    }
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar1 = uStack_90;
  uVar4 = (uint)local_98 & 0xff;
  local_98 = (ulonglong)uVar4;
  plVar10 = (longlong *)(uVar13 & 0xfffffffffffffffe);
  uStack_90 = uStack_90 & 0xffffff00;
  local_b8 = (ulonglong)uVar4;
  uStack_b0 = CONCAT44(uStack_8c,uVar1) & 0xffffffffffffff00;
  (**(code **)(*plVar10 + 0x30))(plVar10,local_res8,uVar14,uVar9,&local_b8);
  if ((uVar13 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  if ((local_res18 & 1) != 0) {
    FUN_143733a60(local_78);
  }
  if ((local_res20 & 1) != 0) {
    FUN_143733a60(plVar12);
  }
  uVar5 = FUN_143741ed0(param_1,&local_98,"primitives");
  puVar7 = (ulonglong *)FUN_143741ed0(uVar5,local_58,&DAT_145b138b0);
  local_res20 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = uStack_b0;
  uVar14 = local_b8;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    bVar3 = bVar2;
    if (puVar8 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar3 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      local_res20 = puVar7[2];
    }
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  local_98 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  plVar12 = (longlong *)(local_res20 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x38))(plVar12,local_res8,uVar14,uVar9,&local_98);
  puVar7 = (ulonglong *)FUN_143741ed0(param_1,local_58,"firstPrimitiveIndex");
  local_res18 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = uStack_b0;
  uVar14 = local_b8;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    bVar3 = bVar2;
    if (puVar8 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar3 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      local_res18 = puVar7[2];
    }
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar1 = uStack_70;
  local_78 = (longlong *)(local_res18 & 0xfffffffffffffffe);
  uStack_70 = uStack_70 & 0xffffff00;
  local_b8 = local_98 >> 8 & 0xffffff;
  uStack_b0 = CONCAT44(uStack_6c,uVar1) & 0xffffffffffffff00;
  (**(code **)(*local_78 + 0x30))(local_78,local_res8,uVar14,uVar9,&local_b8);
  puVar7 = (ulonglong *)FUN_143741ed0(param_1,local_58,"numPrimitives");
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = uStack_b0;
  uVar14 = local_b8;
  uVar13 = uVar11;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    bVar3 = bVar2;
    if (puVar8 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar3 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      uVar13 = puVar7[2];
    }
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar1 = uStack_90;
  uVar4 = (uint)local_98 & 0xff;
  local_98 = (ulonglong)uVar4;
  plVar10 = (longlong *)(uVar13 & 0xfffffffffffffffe);
  uStack_90 = uStack_90 & 0xffffff00;
  local_b8 = (ulonglong)uVar4;
  uStack_b0 = CONCAT44(uStack_8c,uVar1) & 0xffffffffffffff00;
  (**(code **)(*plVar10 + 0x30))(plVar10,local_res8,uVar14,uVar9,&local_b8);
  if ((uVar13 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  if ((local_res18 & 1) != 0) {
    FUN_143733a60(local_78);
  }
  if ((local_res20 & 1) != 0) {
    FUN_143733a60(plVar12);
  }
  uVar5 = FUN_143741ed0(param_1,&local_98,"sharedVertices");
  puVar7 = (ulonglong *)FUN_143741ed0(uVar5,local_58,&DAT_145b138b0);
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = uStack_b0;
  uVar13 = uVar11;
  uVar14 = local_b8;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    bVar3 = bVar2;
    if (puVar8 != (undefined8 *)0x0) {
      bVar3 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar3 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      uVar13 = puVar7[2];
    }
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_143733a60(local_88 & 0xfffffffffffffffe);
  }
  local_98 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  plVar12 = (longlong *)(uVar13 & 0xfffffffffffffffe);
  (**(code **)(*plVar12 + 0x38))(plVar12,local_res8,uVar14,uVar9,&local_98);
  puVar7 = (ulonglong *)FUN_143741ed0(param_1,local_58,"firstSharedVertexIndex");
  local_b8 = 0;
  uStack_b0 = 0;
  uVar9 = uStack_b0;
  uVar14 = local_b8;
  if (puVar7[1] != 0) {
    puVar8 = (undefined8 *)FUN_143714490(puVar7[1],1);
    if (puVar8 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar8;
    }
    uVar9 = uStack_b0;
    uVar14 = local_b8;
    if ((bVar2 & 0xf) == 4) {
      uVar14 = *puVar7;
      uVar9 = puVar7[1];
      if ((puVar7[2] & 1) != 0) {
        FUN_1437329e0(puVar7[2] & 0xfffffffffffffffe);
      }
      uVar11 = puVar7[2];
    }
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  uVar4 = uStack_90;
  uVar1 = (uint)local_98 >> 8;
  local_98 = (ulonglong)uVar1;
  plVar10 = (longlong *)(uVar11 & 0xfffffffffffffffe);
  uStack_90 = uStack_90 & 0xffffff00;
  local_b8 = (ulonglong)uVar1;
  uStack_b0 = CONCAT44(uStack_8c,uVar4) & 0xffffffffffffff00;
  (**(code **)(*plVar10 + 0x30))(plVar10,local_res8,uVar14,uVar9,&local_b8);
  if ((uVar11 & 1) != 0) {
    FUN_143733a60(plVar10);
  }
  if ((uVar13 & 1) != 0) {
    FUN_143733a60(plVar12);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e1850 FUN_1437e1850 body=386 status=ok
// SIG undefined FUN_1437e1850(void)

void FUN_1437e1850(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  puVar1 = (undefined8 *)FUN_143741ed0(param_1,local_28,"nodes");
  bVar4 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (puVar1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(puVar1[1],1);
    if (puVar2 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar2;
    }
    if ((bVar4 & 0xf) == 8) {
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_1437329e0(puVar1[2] & 0xfffffffffffffffe);
      }
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      local_48 = puVar1[2];
    }
  }
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,local_28,"nodes_temp");
  FUN_1437420f0(uVar3,local_res8,&local_58);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  FUN_143741ed0(param_1,local_40,"domain");
  uVar3 = FUN_143741ed0(param_1,local_28,"domain_temp");
  FUN_1437420f0(uVar3,local_res8,local_40);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e19e0 FUN_1437e19e0 body=386 status=ok
// SIG undefined FUN_1437e19e0(void)

void FUN_1437e19e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  puVar1 = (undefined8 *)FUN_143741ed0(param_1,local_28,"nodes_temp");
  bVar4 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (puVar1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(puVar1[1],1);
    if (puVar2 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar2;
    }
    if ((bVar4 & 0xf) == 8) {
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_1437329e0(puVar1[2] & 0xfffffffffffffffe);
      }
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      local_48 = puVar1[2];
    }
  }
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,local_28,"nodes");
  FUN_1437420f0(uVar3,local_res8,&local_58);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  FUN_143741ed0(param_1,local_40,"domain_temp");
  uVar3 = FUN_143741ed0(param_1,local_28,"domain");
  FUN_1437420f0(uVar3,local_res8,local_40);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e1b70 FUN_1437e1b70 body=386 status=ok
// SIG undefined FUN_1437e1b70(void)

void FUN_1437e1b70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_res8 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  puVar1 = (undefined8 *)FUN_143741ed0(param_1,local_28,"nodes_old");
  bVar4 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (puVar1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(puVar1[1],1);
    if (puVar2 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar2;
    }
    if ((bVar4 & 0xf) == 8) {
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        FUN_1437329e0(puVar1[2] & 0xfffffffffffffffe);
      }
      if ((local_48 & 1) != 0) {
        FUN_143733a60(local_48 & 0xfffffffffffffffe);
      }
      local_48 = puVar1[2];
    }
  }
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  uVar3 = FUN_143741ed0(param_1,local_28,"nodes_temp");
  FUN_1437420f0(uVar3,local_res8,&local_58);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  FUN_143741ed0(param_1,local_40,"domain_old");
  uVar3 = FUN_143741ed0(param_1,local_28,"domain_temp");
  FUN_1437420f0(uVar3,local_res8,local_40);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  if ((local_30 & 1) != 0) {
    FUN_143733a60(local_30 & 0xfffffffffffffffe);
  }
  if ((local_48 & 1) != 0) {
    FUN_143733a60(local_48 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e1d00 FUN_1437e1d00 body=908 status=ok
// SIG undefined FUN_1437e1d00(void)

void FUN_1437e1d00(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Codec3Axis_146806ce8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Codec3Axis4_146806d10);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Codec3Axis5_146806d38);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Codec3Axis6_146806d60);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage<_h_146806d88);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage<_h_146806db0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage<_h_146806dd8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146806e00);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146806e28);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146806e50);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146806e78);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146806ea0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DefaultTree4_146806ec8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DefaultTree5_146806ef0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DefaultTree6_146806f18);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Primitiv_146806f40);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Connecti_146806f68);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Connecti_146806f90);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage4_146806fb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage5_146806fe0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage6_146807008);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage<_h_146807030);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage<_h_146807058);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage<_h_146807080);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_1468070a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_1468070d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_1468070f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146807120);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146807148);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_CodecRaw_146807170);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage32_146807198);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DynamicStorage<_h_1468071c0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_1468071e8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_Tree<_hkcdStatic_146807210);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticTree_DefaultTree32_146807238);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_146807260);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Section_146807288);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Section__1468072b0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Section__1468072d8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Section__146807300);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Edge_146807328);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Links_146807350);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeDefaultDataRun_146807378);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeHiResConfig_1468073a0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeNormalConfig_1468073c8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeLoResConfig_1468073f0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeCommonConfig<_h_146807418);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Primitiv_146807440);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Primitiv_146807468);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdStaticMeshTreeBase_Primitiv_146807490);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468074b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468074e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807508);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807530);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdSimdTree_146807558);
                    /* WARNING: Could not recover jumptable at 0x0001437e2088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkcdSimdTree_Node_146807580);
  return;
}



// FUNCTION 1437e2090 FUN_1437e2090 body=410 status=ok
// SIG undefined FUN_1437e2090(void)

void FUN_1437e2090(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  uVar1 = FUN_143741ed0(param_1,local_20);
  uVar1 = FUN_143741ed0(uVar1,local_38,&DAT_145b75d78);
  uVar2 = FUN_143741ed0(param_1,local_50,param_4);
  uVar2 = FUN_143741ed0(uVar2,local_68,&DAT_145b75d78);
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  uVar1 = FUN_143741ed0(param_1,local_68,param_3);
  uVar1 = FUN_143741ed0(uVar1,local_50,"ptrState");
  uVar2 = FUN_143741ed0(param_1,local_38,param_4);
  uVar2 = FUN_143741ed0(uVar2,local_20,"ptrState");
  FUN_1437420f0(uVar2,local_res8,uVar1);
  if ((local_10 & 1) != 0) {
    FUN_143733a60(local_10 & 0xfffffffffffffffe);
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((local_40 & 1) != 0) {
    FUN_143733a60(local_40 & 0xfffffffffffffffe);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e2230 FUN_1437e2230 body=1317 status=ok
// SIG undefined FUN_1437e2230(void)

void FUN_1437e2230(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uVar14;
  undefined8 local_168;
  longlong lStack_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined8 local_148;
  longlong lStack_140;
  ulonglong local_138;
  undefined8 local_130;
  longlong local_128;
  ulonglong local_120;
  undefined8 local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  undefined1 local_e8 [16];
  ulonglong local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  undefined8 local_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  FUN_143741ed0(param_1,local_68,"instanceData");
  puVar3 = (undefined8 *)FUN_143741ed0(local_68,local_e8,&DAT_145b75d78);
  uVar13 = 0;
  local_150 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uVar9 = uStack_f8;
  uVar7 = local_100;
  if (puVar3[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
    bVar8 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    uVar9 = uStack_f8;
    uVar7 = local_100;
    if ((bVar8 & 0xf) == 6) {
      uVar7 = *puVar3;
      uVar9 = puVar3[1];
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
      }
      uVar13 = puVar3[2];
      local_150 = uVar13;
    }
  }
  if ((local_d8 & 1) != 0) {
    FUN_143733a60(local_d8 & 0xfffffffffffffffe);
  }
  uVar5 = FUN_143741ed0(local_68,&local_90,"ptrState");
  lVar6 = FUN_143741ed0(uVar5,local_e8,&DAT_145b85670);
  uVar12 = 0;
  if (*(longlong *)(lVar6 + 8) != 0) {
    puVar3 = (undefined8 *)FUN_143714490(*(longlong *)(lVar6 + 8),1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar8 = 0;
    }
    else {
      bVar8 = (byte)*puVar3;
    }
    if ((bVar8 & 0xf) == 4) {
      if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
        FUN_1437329e0(*(ulonglong *)(lVar6 + 0x10) & 0xfffffffffffffffe);
      }
      uVar12 = *(ulonglong *)(lVar6 + 0x10);
    }
  }
  if ((local_d8 & 1) != 0) {
    FUN_143733a60(local_d8 & 0xfffffffffffffffe);
  }
  if ((local_80 & 1) != 0) {
    FUN_143733a60(local_80 & 0xfffffffffffffffe);
  }
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  puVar3 = &local_a8;
  plVar11 = (longlong *)(uVar13 & 0xfffffffffffffffe);
  local_d0 = plVar11;
  (**(code **)(*plVar11 + 0x50))(plVar11,local_res18,uVar7,uVar9,puVar3);
  uVar14 = (undefined4)((ulonglong)puVar3 >> 0x20);
  FUN_143741ed0(&local_a8,&local_118,"clearanceCaches");
  local_138 = 0;
  local_148 = 0;
  lStack_140 = 0;
  uVar1 = local_138;
  if (local_110 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_110,1);
    bVar8 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar3;
    }
    uVar1 = local_138;
    if ((bVar8 & 0xf) == 8) {
      local_148 = local_118;
      lStack_140 = local_110;
      if ((local_108 & 1) != 0) {
        FUN_1437329e0(local_108 & 0xfffffffffffffffe);
      }
      uVar1 = local_108;
      if ((local_138 & 1) != 0) {
        FUN_143733a60(local_138 & 0xfffffffffffffffe);
        uVar1 = local_108;
      }
    }
  }
  local_138 = uVar1;
  FUN_143741ed0(param_1,&local_130,"clearanceCaches");
  local_158 = 0;
  local_168 = 0;
  lStack_160 = 0;
  uVar1 = local_158;
  if (local_128 != 0) {
    puVar3 = (undefined8 *)FUN_143714490(local_128,1);
    bVar8 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar3;
    }
    uVar1 = local_158;
    if ((bVar8 & 0xf) == 8) {
      local_168 = local_130;
      lStack_160 = local_128;
      if ((local_120 & 1) != 0) {
        FUN_1437329e0(local_120 & 0xfffffffffffffffe);
      }
      uVar1 = local_120;
      if ((local_158 & 1) != 0) {
        FUN_143733a60(local_158 & 0xfffffffffffffffe);
        uVar1 = local_120;
      }
    }
  }
  local_158 = uVar1;
  iVar2 = FUN_143742950(&local_148);
  (**(code **)(*(longlong *)(local_158 & 0xfffffffffffffffe) + 0x70))
            ((longlong *)(local_158 & 0xfffffffffffffffe),local_res18,local_168,lStack_160,
             CONCAT44(uVar14,iVar2));
  iVar10 = 0;
  if (0 < iVar2) {
    do {
      FUN_143741d50(&local_148,local_e8,iVar10);
      FUN_143741d50(&local_168,&local_100,iVar10);
      uVar7 = FUN_143741ed0(&local_100,&local_c8,&DAT_145b75d78);
      FUN_1437420f0(uVar7,local_res18,local_e8);
      if ((local_b8 & 1) != 0) {
        FUN_143733a60(local_b8 & 0xfffffffffffffffe);
      }
      uVar7 = FUN_143741ed0(&local_100,local_50,"ptrState");
      puVar3 = (undefined8 *)FUN_143741ed0(uVar7,&local_c8,&DAT_145b85670);
      uVar13 = 0;
      local_90 = 0;
      uStack_88 = 0;
      uVar9 = uStack_88;
      uVar7 = local_90;
      if (puVar3[1] != 0) {
        puVar4 = (undefined8 *)FUN_143714490(puVar3[1],1);
        bVar8 = 0;
        if (puVar4 != (undefined8 *)0x0) {
          bVar8 = (byte)*puVar4;
        }
        uVar9 = uStack_88;
        uVar7 = local_90;
        if ((bVar8 & 0xf) == 4) {
          uVar7 = *puVar3;
          uVar9 = puVar3[1];
          if ((*(byte *)(puVar3 + 2) & 1) != 0) {
            FUN_1437329e0(puVar3[2] & 0xfffffffffffffffe);
          }
          uVar13 = puVar3[2];
        }
      }
      if ((local_b8 & 1) != 0) {
        FUN_143733a60(local_b8 & 0xfffffffffffffffe);
      }
      if ((local_40 & 1) != 0) {
        FUN_143733a60(local_40 & 0xfffffffffffffffe);
      }
      local_78 = 1;
      uStack_70 = uStack_70 & 0xffffff00;
      plVar11 = (longlong *)(uVar13 & 0xfffffffffffffffe);
      local_c8 = 1;
      uStack_c4 = 0;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
      (**(code **)(*plVar11 + 0x30))(plVar11,local_res20,uVar7,uVar9,&local_c8);
      if ((uVar13 & 1) != 0) {
        FUN_143733a60(plVar11);
      }
      if ((local_f0 & 1) != 0) {
        FUN_143733a60(local_f0 & 0xfffffffffffffffe);
      }
      if ((local_d8 & 1) != 0) {
        FUN_143733a60(local_d8 & 0xfffffffffffffffe);
      }
      iVar10 = iVar10 + 1;
      plVar11 = local_d0;
      uVar13 = local_150;
    } while (iVar10 < iVar2);
  }
  if ((local_158 & 1) != 0) {
    FUN_143733a60(local_158 & 0xfffffffffffffffe);
  }
  if ((local_120 & 1) != 0) {
    FUN_143733a60(local_120 & 0xfffffffffffffffe);
  }
  if ((local_138 & 1) != 0) {
    FUN_143733a60(local_138 & 0xfffffffffffffffe);
  }
  if ((local_108 & 1) != 0) {
    FUN_143733a60(local_108 & 0xfffffffffffffffe);
  }
  if ((local_98 & 1) != 0) {
    FUN_143733a60(local_98 & 0xfffffffffffffffe);
  }
  if ((uVar12 & 1) != 0) {
    FUN_143733a60(uVar12 & 0xfffffffffffffffe);
  }
  if ((uVar13 & 1) != 0) {
    FUN_143733a60(plVar11);
  }
  if ((local_58 & 1) != 0) {
    FUN_143733a60(local_58 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e2760 FUN_1437e2760 body=121 status=ok
// SIG undefined FUN_1437e2760(void)

void FUN_1437e2760(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 local_228 [32];
  undefined1 local_208 [512];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL
            (local_228,
             "World replays from one version of Havok AI cannot be replayed in another version.");
  iVar2 = FUN_143732300(0x13e1445c,local_208,"Patches\\2017_2\\hkaiPatches_2017_2.cpp",0x14);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_143713520(local_228);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437e27e0 FUN_1437e27e0 body=1116 status=ok
// SIG undefined FUN_1437e27e0(void)

void FUN_1437e27e0(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiWorldCommands_ApiCommand_1468075a8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavigator_CapsuleLimit_1468075d0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavigator_CapsuleLimit_1468075f8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavigator_LengthLimit_146807620);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_146807648);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstanceData_146807670);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGenerationUtilsSettin_146807698);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshGeneration_SimpleGeo_1468076c0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468076e8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807710);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807738);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807760);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807788);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468077b0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468077d8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807800);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807828);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807850);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807878);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468078a0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468078c8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468078f0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807918);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807940);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807968);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807990);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468079b8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1468079e0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807a08);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807a30);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807a58);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807a80);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807aa8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807ad0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807af8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807b20);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807b48);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807b70);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807b98);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807bc0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807be8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807c10);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807c38);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807c60);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807c88);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807cb0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807cd8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807d00);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807d28);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807d50);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807d78);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807da0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807dc8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807df0);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807e18);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807e40);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807e68);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807e90);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807eb8);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavMeshInstance_146807ee0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiDirectedGraphInstance_146807f08);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavVolumeInstance_146807f30);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCopyOnWritePtr<_hkaiNavVolum_146807f58);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCopyOnWritePtr<_hkaiDirected_146807f80);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiCopyOnWritePtr<_hkaiNavMeshI_146807fa8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146807fd0);
  (**(code **)(*param_1 + 8))(param_1,&PTR_s_hkaiNavigator_NavigatorSettings_146807ff8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_146808020);
                    /* WARNING: Could not recover jumptable at 0x0001437e2c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,&DAT_146808048);
  return;
}



// FUNCTION 1437e2d70 FUN_1437e2d70 body=77 status=ok
// SIG undefined FUN_1437e2d70(void)

void FUN_1437e2d70(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437e3ba0(param_1,local_res18);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e2dc0 FUN_1437e2dc0 body=143 status=ok
// SIG undefined FUN_1437e2dc0(void)

void FUN_1437e2dc0(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x20,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        *(undefined2 *)(puVar3 + 1) = 0;
      }
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e2e50 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeGenerationSettings::MergingSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437e57c0(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e2e90 func body=75 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkcdDynamicAabbTree>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437e56f0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e2ee0 func body=70 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<512,hkcdDynamicAabbTree>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1437e58f0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e2f30 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::AddClearanceCache>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437e3c50(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e2f80 FUN_1437e2f80 body=126 status=ok
// SIG undefined FUN_1437e2f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437e2f80(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x28);
    do {
      if ((undefined8 *)(puVar2 + -10) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -8) = 0;
        puVar2[-6] = 0x1ffff;
        *(undefined ***)(puVar2 + -10) = hkcdStaticAabbTree::Impl::vftable;
        *(undefined8 *)(puVar2 + -2) = 0;
        *puVar2 = 0;
        puVar2[1] = 0x80000000;
        uVar1 = uRam00000001467f08d8;
        *(undefined8 *)(puVar2 + 2) = _DAT_1467f08d0;
        *(undefined8 *)(puVar2 + 4) = uVar1;
        puVar2[6] = puVar2[2] ^ 0x80000000;
        puVar2[7] = puVar2[3] ^ 0x80000000;
        puVar2[8] = puVar2[4] ^ 0x80000000;
        puVar2[9] = puVar2[5] ^ 0x80000000;
      }
      puVar2 = puVar2 + 0x14;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437e3000 FUN_1437e3000 body=74 status=ok
// SIG undefined FUN_1437e3000(void)

void FUN_1437e3000(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437e3b40(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437e3050 FUN_1437e3050 body=142 status=ok
// SIG undefined FUN_1437e3050(void)

void FUN_1437e3050(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x20,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
      }
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e30e0 FUN_1437e30e0 body=143 status=ok
// SIG undefined FUN_1437e30e0(void)

void FUN_1437e30e0(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x40,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e3170 FUN_1437e3170 body=299 status=ok
// SIG undefined FUN_1437e3170(void)

void FUN_1437e3170(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res20 [2];
  
  if (0 < param_4) {
    puVar11 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      plVar1 = puVar11 + -2;
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = 0;
        *(undefined4 *)(puVar11 + -1) = 0;
        *(undefined4 *)((longlong)puVar11 + -4) = 0x80000000;
        iVar3 = *(int *)(param_2 + -8 + (longlong)puVar11);
        lVar13 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar7 = local_res20[0];
        lVar9 = 0;
        if (local_res20[0] != 0) {
          lVar9 = FUN_143702d60(uVar8,0x40,local_res20);
        }
        *plVar1 = lVar9;
        *(int *)(puVar11 + -1) = iVar7;
        iVar7 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar7 = local_res20[0];
        }
        *(int *)((longlong)puVar11 + -4) = iVar7;
        if (0 < iVar3) {
          puVar10 = (undefined8 *)(lVar9 + 0x10);
          lVar9 = *(longlong *)(param_2 + -0x10 + (longlong)puVar11) - lVar9;
          do {
            puVar2 = (undefined4 *)(lVar9 + -0x10 + (longlong)puVar10);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            *(undefined4 *)(puVar10 + -2) = *puVar2;
            *(undefined4 *)((longlong)puVar10 + -0xc) = uVar4;
            *(undefined4 *)(puVar10 + -1) = uVar5;
            *(undefined4 *)((longlong)puVar10 + -4) = uVar6;
            uVar8 = ((undefined8 *)(lVar9 + (longlong)puVar10))[1];
            *puVar10 = *(undefined8 *)(lVar9 + (longlong)puVar10);
            puVar10[1] = uVar8;
            puVar10[2] = *(undefined8 *)(lVar9 + 0x10 + (longlong)puVar10);
            puVar10[3] = *(undefined8 *)(lVar9 + 0x18 + (longlong)puVar10);
            puVar10[4] = *(undefined8 *)(lVar9 + 0x20 + (longlong)puVar10);
            puVar10 = puVar10 + 8;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        *puVar11 = *(undefined8 *)(param_2 + (longlong)puVar11);
      }
      puVar11 = puVar11 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1437e32a0 FUN_1437e32a0 body=142 status=ok
// SIG undefined FUN_1437e32a0(void)

void FUN_1437e32a0(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  if (0 < param_3) {
    puVar3 = (uint *)(param_1 + 0xc);
    lVar4 = (longlong)param_3;
    do {
      puVar1 = puVar3 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        uVar2 = FUN_143703a50();
        puVar3[-1] = 0;
        if (-1 < (int)*puVar3) {
          FUN_143702e10(uVar2,*(undefined8 *)puVar1,0x30,*puVar3 & 0x3fffffff);
        }
        puVar1[0] = 0;
        puVar1[1] = 0;
        *puVar3 = 0x80000000;
        puVar3[1] = 0;
      }
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1437e3330 FUN_1437e3330 body=292 status=ok
// SIG undefined FUN_1437e3330(void)

void FUN_1437e3330(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res20 [2];
  
  if (0 < param_4) {
    puVar11 = (undefined4 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      plVar1 = (longlong *)(puVar11 + -4);
      if (plVar1 != (longlong *)0x0) {
        *plVar1 = 0;
        puVar11[-2] = 0;
        puVar11[-1] = 0x80000000;
        iVar3 = *(int *)(param_2 + -8 + (longlong)puVar11);
        lVar13 = (longlong)iVar3;
        local_res20[0] = iVar3;
        uVar8 = FUN_143703a50();
        iVar7 = local_res20[0];
        lVar9 = 0;
        if (local_res20[0] != 0) {
          lVar9 = FUN_143702d60(uVar8,0x30,local_res20);
        }
        *plVar1 = lVar9;
        puVar11[-2] = iVar7;
        iVar7 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar7 = local_res20[0];
        }
        puVar11[-1] = iVar7;
        if (0 < iVar3) {
          puVar10 = (undefined8 *)(lVar9 + 0x10);
          lVar9 = *(longlong *)(param_2 + -0x10 + (longlong)puVar11) - lVar9;
          do {
            puVar2 = (undefined4 *)(lVar9 + -0x10 + (longlong)puVar10);
            uVar4 = puVar2[1];
            uVar5 = puVar2[2];
            uVar6 = puVar2[3];
            *(undefined4 *)(puVar10 + -2) = *puVar2;
            *(undefined4 *)((longlong)puVar10 + -0xc) = uVar4;
            *(undefined4 *)(puVar10 + -1) = uVar5;
            *(undefined4 *)((longlong)puVar10 + -4) = uVar6;
            uVar8 = ((undefined8 *)(lVar9 + (longlong)puVar10))[1];
            *puVar10 = *(undefined8 *)(lVar9 + (longlong)puVar10);
            puVar10[1] = uVar8;
            *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(lVar9 + 0x10 + (longlong)puVar10);
            *(undefined4 *)((longlong)puVar10 + 0x14) =
                 *(undefined4 *)(lVar9 + 0x14 + (longlong)puVar10);
            *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(lVar9 + 0x18 + (longlong)puVar10);
            puVar10 = puVar10 + 6;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        *puVar11 = *(undefined4 *)(param_2 + (longlong)puVar11);
      }
      puVar11 = puVar11 + 6;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}


