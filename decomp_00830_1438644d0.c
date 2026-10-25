// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438644d0 FUN_1438644d0 body=429 status=ok
// SIG undefined FUN_1438644d0(void)

void FUN_1438644d0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  LPVOID pvVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  int local_res8 [2];
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x18) = param_3;
  if (param_3 == 0) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(param_3 + 0x40);
  }
  uVar8 = FUN_143703a50();
  uVar10 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  if ((int)uVar10 < iVar14) {
    iVar3 = uVar10 * 2;
    iVar7 = iVar14;
    if (iVar14 < iVar3) {
      iVar7 = iVar3;
    }
    FUN_14370c310(uVar8,param_1 + 0x20,iVar7,8);
  }
  lVar11 = *(longlong *)(param_1 + 0x20);
  iVar7 = (*(int *)(param_1 + 0x28) - iVar14) + -1;
  lVar12 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      if (*(longlong *)(lVar11 + (longlong)iVar14 * 8 + lVar12 * 8) != 0) {
        FUN_14370c150();
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8);
  iVar7 = iVar14 - *(int *)(param_1 + 0x28);
  lVar11 = (longlong)iVar7;
  if (0 < iVar7) {
    do {
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  iVar7 = 0;
  *(int *)(param_1 + 0x28) = iVar14;
  if (iVar14 < 1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  else {
    lVar11 = 0;
    do {
      if (*(longlong *)((longlong)iVar7 * 0x100 + *(longlong *)(param_3 + 0x38)) != 0) {
        pvVar9 = TlsGetValue(DAT_146b7bf70);
        if (pvVar9 == (LPVOID)0x0) {
          pvVar9 = DAT_146b7bf68;
        }
        lVar12 = (**(code **)(**(longlong **)((longlong)pvVar9 + 0x58) + 8))
                           (*(longlong **)((longlong)pvVar9 + 0x58),0x108);
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          local_res8[0] = iVar7;
          lVar12 = FUN_143882c70(lVar12,param_3,local_res8);
        }
        lVar1 = *(longlong *)(param_1 + 0x20);
        lVar2 = *(longlong *)(lVar1 + lVar11);
        if (lVar12 != lVar2) {
          if (lVar2 != 0) {
            FUN_14370c150();
          }
          *(longlong *)(lVar1 + lVar11) = lVar12;
        }
      }
      iVar7 = iVar7 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar7 < iVar14);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined1 *)(param_1 + 0x34) = 3;
  return;
}



// FUNCTION 143864680 FUN_143864680 body=1437 status=ok
// SIG undefined FUN_143864680(void)

void FUN_143864680(longlong param_1,int *param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  LPVOID pvVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  byte bVar19;
  undefined8 *puVar20;
  int *piVar21;
  longlong lVar22;
  int local_res20 [2];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong lStack_50;
  
  iVar17 = *param_2 + 1;
  if (*(int *)(param_1 + 0x28) < iVar17) {
    uVar7 = FUN_143703a50();
    uVar13 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
    if ((int)uVar13 < iVar17) {
      iVar2 = uVar13 * 2;
      iVar6 = iVar17;
      if (iVar17 < iVar2) {
        iVar6 = iVar2;
      }
      FUN_14370c310(uVar7,param_1 + 0x20,iVar6,8);
    }
    lVar14 = *(longlong *)(param_1 + 0x20);
    iVar6 = (*(int *)(param_1 + 0x28) - iVar17) + -1;
    lVar15 = (longlong)iVar6;
    if (-1 < iVar6) {
      do {
        if (*(longlong *)(lVar14 + (longlong)iVar17 * 8 + lVar15 * 8) != 0) {
          FUN_14370c150();
        }
        lVar15 = lVar15 + -1;
      } while (-1 < lVar15);
    }
    puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8)
    ;
    iVar6 = iVar17 - *(int *)(param_1 + 0x28);
    lVar14 = (longlong)iVar6;
    if (0 < iVar6) {
      do {
        if (puVar20 != (undefined8 *)0x0) {
          *puVar20 = 0;
        }
        puVar20 = puVar20 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    *(int *)(param_1 + 0x28) = iVar17;
  }
  pvVar8 = TlsGetValue(DAT_146b7bf70);
  if (pvVar8 == (LPVOID)0x0) {
    pvVar8 = DAT_146b7bf68;
  }
  lVar14 = (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar8 + 0x58),0x108);
  if (lVar14 == 0) {
    lVar14 = 0;
  }
  else {
    local_res20[0] = *param_2;
    lVar14 = FUN_143882c70(lVar14,*(undefined8 *)(param_1 + 0x18),local_res20);
  }
  iVar17 = *param_2;
  lVar15 = *(longlong *)(param_1 + 0x20);
  lVar18 = *(longlong *)(lVar15 + (longlong)iVar17 * 8);
  if (lVar14 != lVar18) {
    if (lVar18 != 0) {
      FUN_14370c150();
    }
    *(longlong *)(lVar15 + (longlong)iVar17 * 8) = lVar14;
  }
  lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  local_58 = *(longlong *)((longlong)*param_2 * 0x100 + 0xb0 + lVar14);
  local_60 = local_58 + (longlong)*(int *)((longlong)*param_2 * 0x100 + 0xb8 + lVar14) * 8;
  lStack_50 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
  if (local_58 != local_60) {
    do {
      lVar14 = *(longlong *)
                (*(longlong *)(lStack_50 + (longlong)*(int *)(local_58 + 4) * 0x18) + 0x20);
      iVar17 = *(int *)(*(longlong *)(param_3 + 0x18) + 0x178);
      if (*(int *)(lVar14 + 0x18) == iVar17) {
        iVar17 = *param_2;
        piVar9 = (int *)FUN_14383f6a0(*(undefined8 *)(param_1 + 0x18),local_78);
        iVar6 = *piVar9;
        iVar2 = iVar6;
LAB_143864884:
        if (iVar2 != -1) {
          lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar17 * 8);
          lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 8);
          lVar10 = *(longlong *)
                    ((longlong)iVar17 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38))
          ;
          local_70 = lVar15;
          local_68 = lVar18;
          if (lVar10 == 0) {
            lVar10 = 0;
          }
          else if (*(char *)(lVar10 + 0x28) == '\x01') {
            lVar10 = *(longlong *)(lVar10 + 0x18);
          }
          else {
            lVar10 = FUN_142fbda20();
          }
          lVar11 = *(longlong *)
                    ((longlong)iVar6 * 0x100 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else if (*(char *)(lVar11 + 0x28) == '\x01') {
            lVar11 = *(longlong *)(lVar11 + 0x18);
          }
          else {
            lVar11 = FUN_142fbda20();
          }
          iVar6 = *(int *)(lVar14 + 0x28) + *(int *)(lVar15 + 0xa0);
          uVar7 = FUN_143703a50();
          uVar13 = *(uint *)(lVar15 + 0xa4) & 0x3fffffff;
          if ((int)uVar13 < iVar6) {
            iVar2 = uVar13 * 2;
            if (iVar6 < iVar2) {
              iVar6 = iVar2;
            }
            FUN_14370c310(uVar7,(longlong *)(lVar15 + 0x98),iVar6,4);
          }
          iVar6 = *(int *)(lVar14 + 0x28) + *(int *)(lVar18 + 0xa0);
          uVar7 = FUN_143703a50();
          uVar13 = *(uint *)(lVar18 + 0xa4) & 0x3fffffff;
          if ((int)uVar13 < iVar6) {
            iVar2 = uVar13 * 2;
            if (iVar6 < iVar2) {
              iVar6 = iVar2;
            }
            FUN_14370c310(uVar7,(longlong *)(lVar18 + 0x98),iVar6,4);
          }
          piVar9 = *(int **)(lVar14 + 0x20);
          piVar21 = piVar9 + (longlong)*(int *)(lVar14 + 0x28) * 4;
          lVar16 = local_70;
          lVar22 = local_68;
          for (; local_70 = lVar16, local_68 = lVar22, piVar9 != piVar21; piVar9 = piVar9 + 4) {
            *(int *)(*(longlong *)(lVar15 + 0x98) + (longlong)*(int *)(lVar15 + 0xa0) * 4) = *piVar9
            ;
            *(int *)(lVar15 + 0xa0) = *(int *)(lVar15 + 0xa0) + 1;
            *(int *)(*(longlong *)(lVar18 + 0x98) + (longlong)*(int *)(lVar18 + 0xa0) * 4) =
                 piVar9[2];
            *(int *)(lVar18 + 0xa0) = *(int *)(lVar18 + 0xa0) + 1;
            if (*(int *)(lVar10 + 0x108) == 0) {
              bVar19 = 0;
            }
            else {
              bVar19 = *(byte *)((longlong)*piVar9 + *(longlong *)(lVar10 + 0x100));
            }
            *(byte *)((longlong)*piVar9 + *(longlong *)(lVar10 + 0x100)) = bVar19 | 4;
            if (*(int *)(lVar11 + 0x108) == 0) {
              bVar19 = 0;
            }
            else {
              bVar19 = *(byte *)((longlong)piVar9[2] + *(longlong *)(lVar11 + 0x100));
            }
            *(byte *)((longlong)piVar9[2] + *(longlong *)(lVar11 + 0x100)) = bVar19 | 4;
            thunk_FUN_143719c70(0x4133962b);
            lVar16 = local_70;
            lVar22 = local_68;
          }
          lVar15 = *(longlong *)(lVar14 + 0x20);
          if (*param_2 == iVar17) {
            lVar18 = (longlong)*(int *)(lVar14 + 0x28) * 0x10 + lVar15;
            for (; local_68 = lVar22, lVar15 != lVar18; lVar15 = lVar15 + 0x10) {
              FUN_143864c20(lVar16 + 0xd8,lVar15);
              lVar22 = local_68;
            }
          }
          else {
            lVar18 = (longlong)*(int *)(lVar14 + 0x28) * 0x10 + lVar15;
            for (; local_70 = lVar16, lVar15 != lVar18; lVar15 = lVar15 + 0x10) {
              FUN_143864c20(lVar22 + 0xd8,lVar15 + 8);
              lVar16 = local_70;
            }
          }
          iVar17 = *(int *)(lVar14 + 0x58);
          lVar18 = (longlong)iVar17;
          lVar15 = *(longlong *)(lVar14 + 0x50);
          uVar7 = FUN_143703a50();
          uVar13 = *(uint *)(lVar16 + 0x104) & 0x3fffffff;
          iVar6 = *(int *)(lVar16 + 0x100) + iVar17;
          if (((int)uVar13 < iVar6) && ((int)uVar13 < iVar6)) {
            iVar2 = iVar6;
            if (iVar6 < (int)(uVar13 * 2)) {
              iVar2 = uVar13 * 2;
            }
            FUN_14370c310(uVar7,(longlong *)(lVar16 + 0xf8),iVar2,0x20);
          }
          puVar12 = (undefined4 *)
                    ((longlong)*(int *)(lVar16 + 0x100) * 0x20 + *(longlong *)(lVar16 + 0xf8));
          if (0 < iVar17) {
            lVar15 = lVar15 - (longlong)puVar12;
            do {
              if (puVar12 != (undefined4 *)0x0) {
                puVar1 = (undefined4 *)(lVar15 + (longlong)puVar12);
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                *puVar12 = *puVar1;
                puVar12[1] = uVar3;
                puVar12[2] = uVar4;
                puVar12[3] = uVar5;
                puVar20 = (undefined8 *)(lVar15 + 0x10 + (longlong)puVar12);
                uVar7 = puVar20[1];
                *(undefined8 *)(puVar12 + 4) = *puVar20;
                *(undefined8 *)(puVar12 + 6) = uVar7;
              }
              puVar12 = puVar12 + 8;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
          }
          *(int *)(lVar16 + 0x100) = iVar6;
          iVar17 = *(int *)(lVar14 + 0x68);
          lVar15 = (longlong)iVar17;
          lVar14 = *(longlong *)(lVar14 + 0x60);
          uVar7 = FUN_143703a50();
          uVar13 = *(uint *)(lVar22 + 0x104) & 0x3fffffff;
          iVar6 = *(int *)(lVar22 + 0x100) + iVar17;
          if (((int)uVar13 < iVar6) && ((int)uVar13 < iVar6)) {
            iVar2 = iVar6;
            if (iVar6 < (int)(uVar13 * 2)) {
              iVar2 = uVar13 * 2;
            }
            FUN_14370c310(uVar7,(longlong *)(lVar22 + 0xf8),iVar2,0x20);
          }
          puVar12 = (undefined4 *)
                    ((longlong)*(int *)(lVar22 + 0x100) * 0x20 + *(longlong *)(lVar22 + 0xf8));
          if (0 < iVar17) {
            lVar14 = lVar14 - (longlong)puVar12;
            do {
              if (puVar12 != (undefined4 *)0x0) {
                puVar1 = (undefined4 *)(lVar14 + (longlong)puVar12);
                uVar3 = puVar1[1];
                uVar4 = puVar1[2];
                uVar5 = puVar1[3];
                *puVar12 = *puVar1;
                puVar12[1] = uVar3;
                puVar12[2] = uVar4;
                puVar12[3] = uVar5;
                puVar20 = (undefined8 *)(lVar14 + 0x10 + (longlong)puVar12);
                uVar7 = puVar20[1];
                *(undefined8 *)(puVar12 + 4) = *puVar20;
                *(undefined8 *)(puVar12 + 6) = uVar7;
              }
              puVar12 = puVar12 + 8;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          *(int *)(lVar22 + 0x100) = iVar6;
          thunk_FUN_143719c70(0x870bac88);
        }
      }
      else if (*(int *)(lVar14 + 0x1c) == iVar17) {
        iVar6 = *param_2;
        piVar9 = (int *)FUN_14383f6a0(*(undefined8 *)(param_1 + 0x18),local_74);
        iVar17 = *piVar9;
        iVar2 = iVar17;
        goto LAB_143864884;
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_60);
  }
  return;
}



// FUNCTION 143864c20 FUN_143864c20 body=238 status=ok
// SIG undefined FUN_143864c20(void)

longlong FUN_143864c20(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = *param_2;
  uVar7 = iVar1 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  puVar5 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      if (*(int *)(*param_1 + (longlong)(int)puVar5[1] * 4) == iVar1) {
        return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
      }
      lVar3 = param_1[2];
      uVar6 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar5 = (uint *)(lVar3 + uVar6 * 8);
    } while (-1 < *(int *)(lVar3 + 4 + uVar6 * 8));
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar5 = uVar7;
  puVar5[1] = uVar2;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,4);
  }
  iVar1 = *param_2;
  *(int *)(*param_1 + (longlong)(int)param_1[1] * 4) = iVar1;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 143864d10 FUN_143864d10 body=699 status=ok
// SIG undefined FUN_143864d10(void)

void FUN_143864d10(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18;
  uint local_res20;
  undefined4 *local_98;
  int local_90;
  uint local_8c;
  undefined4 *local_88;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  
  local_res10[0] = param_2;
  lVar2 = FUN_1438637a0((longlong *)(param_1 + 0xd0),local_res10);
  if (lVar2 == 0) {
    local_res18 = -1;
    uVar10 = 0xffffffff;
  }
  else {
    local_res18 = *(int *)(lVar2 + 4);
    uVar10 = (uint)(lVar2 - *(longlong *)(param_1 + 0xe0) >> 3);
  }
  lVar2 = (longlong)local_res18;
  uVar7 = 0;
  local_88 = (undefined4 *)0x0;
  local_80 = 0;
  local_7c = 0x80000000;
  lVar3 = *(longlong *)(param_1 + 0xd0) + 8 + lVar2 * 0x30;
  FUN_1438ad920(lVar3,&local_88);
  uVar9 = (ulonglong)((longlong)(local_88 + local_80) + (3 - (longlong)local_88)) >> 2;
  if (local_88 + local_80 < local_88) {
    uVar9 = uVar7;
  }
  if (uVar9 != 0) {
    puVar8 = local_88;
    do {
      uVar1 = *puVar8;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0x80000000;
      local_68 = 0;
      local_60 = 0;
      local_5c = 0x80000000;
      local_res8[0] = 0;
      uVar4 = FUN_143703a50();
      local_res20 = local_res8[0];
      uVar5 = 0;
      if (local_res8[0] != 0) {
        uVar5 = FUN_143702d60(uVar4,4,local_res8);
      }
      local_5c = 0x80000000;
      if (local_res8[0] != 0) {
        local_5c = local_res8[0];
      }
      local_58 = 0;
      local_68 = uVar5;
      local_60 = local_res20;
      FUN_1438403e0(*(undefined8 *)(param_1 + 0x18),local_res10[0],uVar1,&local_78);
      FUN_143864fd0(param_1,uVar1,&local_78);
      uVar5 = FUN_143703a50();
      local_60 = 0;
      if (-1 < (int)local_5c) {
        FUN_143702e10(uVar5,local_68,4,local_5c & 0x3fffffff);
      }
      local_68 = 0;
      local_5c = 0x80000000;
      local_70 = 0;
      if (-1 < (int)local_6c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_78,2,local_6c & 0x3fffffff);
      }
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar9);
  }
  plVar11 = (longlong *)(param_1 + 0xd0);
  local_8c = 0x80000000;
  local_98 = (undefined4 *)0x0;
  local_90 = 0;
  FUN_1438ad210(lVar3,&local_98);
  puVar8 = local_98 + (longlong)local_90 * 3;
  for (puVar6 = local_98; puVar6 != puVar8; puVar6 = puVar6 + 3) {
    FUN_14389f300(*(undefined8 *)(param_1 + 0x18),*puVar6,puVar6[1],-puVar6[2],0);
  }
  if ((*(uint *)(param_1 + 0xe8) < uVar10) ||
     (lVar3 = *(longlong *)(param_1 + 0xe0) + (longlong)(int)uVar10 * 8,
     *(int *)(lVar3 + 4) != local_res18)) {
    lVar3 = FUN_1438637a0(plVar11,lVar2 * 0x30 + *plVar11);
  }
  FUN_143863830(plVar11,lVar3);
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,0xc,local_8c & 0x3fffffff);
  }
  local_98 = (undefined4 *)0x0;
  local_8c = 0x80000000;
  local_80 = 0;
  if (-1 < (int)local_7c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_88,4,local_7c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143864fd0 FUN_143864fd0 body=44 status=ok
// SIG undefined FUN_143864fd0(void)

void FUN_143864fd0(longlong param_1,uint param_2)

{
  uint local_res8 [8];
  
  local_res8[0] = param_2 & 0x3fffff;
  FUN_143886e90(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(param_2 >> 0x16) * 8),
                local_res8);
  return;
}



// FUNCTION 143865000 FUN_143865000 body=125 status=ok
// SIG undefined FUN_143865000(void)

void FUN_143865000(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar2 + *(int *)(param_1 + 0x28);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    if (*plVar2 != 0) {
      FNULLSceneInterface::SetFXSystem(*plVar2,param_2);
    }
  }
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 143865080 FUN_143865080 body=1086 status=ok
// SIG undefined FUN_143865080(void)

void FUN_143865080(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 8);
  lVar9 = *(longlong *)((longlong)*param_2 * 0x100 + *(longlong *)(lVar4 + 0x38));
  plVar20 = (longlong *)(lVar9 + 0x18);
  if (*(char *)(lVar9 + 0x28) == '\x01') {
    lVar9 = *plVar20;
  }
  else {
    lVar9 = FUN_142fbda20(plVar20);
  }
  FUN_1438528b0(lVar9,lVar4,0);
  uVar10 = FUN_143703a50();
  *(undefined4 *)(lVar19 + 0xa0) = 0;
  if (-1 < (int)*(uint *)(lVar19 + 0xa4)) {
    FUN_143702e10(uVar10,*(undefined8 *)(lVar19 + 0x98),4,*(uint *)(lVar19 + 0xa4) & 0x3fffffff);
  }
  *(undefined8 *)(lVar19 + 0x98) = 0;
  *(undefined4 *)(lVar19 + 0xa4) = 0x80000000;
  uVar10 = FUN_143703a50();
  *(undefined4 *)(lVar19 + 0xb0) = 0;
  if (-1 < (int)*(uint *)(lVar19 + 0xb4)) {
    FUN_143702e10(uVar10,*(undefined8 *)(lVar19 + 0xa8),4,*(uint *)(lVar19 + 0xb4) & 0x3fffffff);
  }
  *(undefined8 *)(lVar19 + 0xa8) = 0;
  *(undefined4 *)(lVar19 + 0xb4) = 0x80000000;
  thunk_FUN_143719c70(0xd1843d6e);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  lVar19 = *(longlong *)((longlong)*param_2 * 0x100 + 0xb0 + lVar4);
  lVar4 = lVar19 + (longlong)*(int *)((longlong)*param_2 * 0x100 + 0xb8 + lVar4) * 8;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
  do {
    if (lVar19 == lVar4) {
      iVar3 = *param_2;
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(lVar4 + (longlong)iVar3 * 8) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 8) = 0;
      if (*(int *)(param_1 + 0x30) == *param_2) {
        *(undefined1 *)(param_1 + 0x34) = 3;
      }
      return;
    }
    lVar5 = *(longlong *)(lVar9 + (longlong)*(int *)(lVar19 + 4) * 0x18);
    lVar13 = *(longlong *)(lVar5 + 0x20);
    if (*(int *)(lVar5 + 0x18) == *(int *)(*plVar20 + 0x17c)) {
      if (lVar13 != 0) {
        lVar17 = *(longlong *)(lVar13 + 0x20);
        lVar15 = (longlong)*(int *)(lVar13 + 0x28) * 0x10 + lVar17;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar5 + 0x1c) * 8);
        if (lVar17 != lVar15) {
          do {
            uVar2 = *(undefined4 *)(lVar17 + 8);
            local_res18[0] = uVar2;
            uVar10 = FUN_143703a50();
            if (*(uint *)(lVar5 + 0xb0) == (*(uint *)(lVar5 + 0xb4) & 0x3fffffff)) {
              FUN_14370c460(uVar10,(longlong *)(lVar5 + 0xa8),4);
            }
            *(undefined4 *)(*(longlong *)(lVar5 + 0xa8) + (longlong)*(int *)(lVar5 + 0xb0) * 4) =
                 uVar2;
            *(int *)(lVar5 + 0xb0) = *(int *)(lVar5 + 0xb0) + 1;
            FUN_143864c20(lVar5 + 0xb8,local_res18);
            lVar17 = lVar17 + 0x10;
          } while (lVar17 != lVar15);
        }
        iVar3 = *(int *)(lVar13 + 0x68);
        lVar17 = (longlong)iVar3;
        plVar18 = (longlong *)(lVar5 + 0xf8);
        lVar13 = *(longlong *)(lVar13 + 0x60);
        uVar10 = FUN_143703a50();
        uVar12 = *(uint *)(lVar5 + 0x104) & 0x3fffffff;
        iVar14 = *(int *)(lVar5 + 0x100) + iVar3;
        if (((int)uVar12 < iVar14) && ((int)uVar12 < iVar14)) {
          iVar6 = iVar14;
          if (iVar14 < (int)(uVar12 * 2)) {
            iVar6 = uVar12 * 2;
          }
          FUN_14370c310(uVar10,plVar18,iVar6,0x20);
        }
        puVar11 = (undefined4 *)((longlong)*(int *)(lVar5 + 0x100) * 0x20 + *plVar18);
        if (0 < iVar3) {
          lVar13 = lVar13 - (longlong)puVar11;
          do {
            if (puVar11 != (undefined4 *)0x0) {
              puVar16 = (undefined4 *)(lVar13 + (longlong)puVar11);
              uVar2 = puVar16[1];
              uVar7 = puVar16[2];
              uVar8 = puVar16[3];
              *puVar11 = *puVar16;
              puVar11[1] = uVar2;
              puVar11[2] = uVar7;
              puVar11[3] = uVar8;
              puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)puVar11);
              uVar10 = puVar1[1];
              *(undefined8 *)(puVar11 + 4) = *puVar1;
              *(undefined8 *)(puVar11 + 6) = uVar10;
            }
            puVar11 = puVar11 + 8;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
LAB_143865446:
        *(int *)(plVar18 + 1) = iVar14;
      }
    }
    else if ((*(int *)(lVar5 + 0x1c) == *(int *)(*plVar20 + 0x17c)) && (lVar13 != 0)) {
      puVar11 = *(undefined4 **)(lVar13 + 0x20);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar5 + 0x18) * 8);
      puVar16 = puVar11 + (longlong)*(int *)(lVar13 + 0x28) * 4;
      if (puVar11 != puVar16) {
        do {
          uVar2 = *puVar11;
          local_res20[0] = uVar2;
          uVar10 = FUN_143703a50();
          if (*(uint *)(lVar5 + 0xb0) == (*(uint *)(lVar5 + 0xb4) & 0x3fffffff)) {
            FUN_14370c460(uVar10,(longlong *)(lVar5 + 0xa8),4);
          }
          *(undefined4 *)(*(longlong *)(lVar5 + 0xa8) + (longlong)*(int *)(lVar5 + 0xb0) * 4) =
               uVar2;
          *(int *)(lVar5 + 0xb0) = *(int *)(lVar5 + 0xb0) + 1;
          FUN_143864c20(lVar5 + 0xb8,local_res20);
          puVar11 = puVar11 + 4;
        } while (puVar11 != puVar16);
      }
      iVar3 = *(int *)(lVar13 + 0x58);
      lVar17 = (longlong)iVar3;
      plVar18 = (longlong *)(lVar5 + 0xf8);
      lVar13 = *(longlong *)(lVar13 + 0x50);
      uVar10 = FUN_143703a50();
      uVar12 = *(uint *)(lVar5 + 0x104) & 0x3fffffff;
      iVar14 = *(int *)(lVar5 + 0x100) + iVar3;
      if (((int)uVar12 < iVar14) && ((int)uVar12 < iVar14)) {
        iVar6 = iVar14;
        if (iVar14 < (int)(uVar12 * 2)) {
          iVar6 = uVar12 * 2;
        }
        FUN_14370c310(uVar10,plVar18,iVar6,0x20);
      }
      puVar11 = (undefined4 *)((longlong)*(int *)(lVar5 + 0x100) * 0x20 + *plVar18);
      if (0 < iVar3) {
        lVar13 = lVar13 - (longlong)puVar11;
        do {
          if (puVar11 != (undefined4 *)0x0) {
            puVar16 = (undefined4 *)(lVar13 + (longlong)puVar11);
            uVar2 = puVar16[1];
            uVar7 = puVar16[2];
            uVar8 = puVar16[3];
            *puVar11 = *puVar16;
            puVar11[1] = uVar2;
            puVar11[2] = uVar7;
            puVar11[3] = uVar8;
            puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)puVar11);
            uVar10 = puVar1[1];
            *(undefined8 *)(puVar11 + 4) = *puVar1;
            *(undefined8 *)(puVar11 + 6) = uVar10;
          }
          puVar11 = puVar11 + 8;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      goto LAB_143865446;
    }
    lVar19 = lVar19 + 8;
  } while( true );
}



// FUNCTION 1438654c0 FUN_1438654c0 body=35 status=ok
// SIG undefined FUN_1438654c0(void)

undefined8 * FUN_1438654c0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiStaticTreeNavMeshQueryMediator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1438654f0 FUN_1438654f0 body=60 status=ok
// SIG undefined FUN_1438654f0(void)

void FUN_1438654f0(undefined8 *param_1)

{
  *param_1 = hkaiStaticTreeNavMeshQueryMediator::vftable;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143865530 FUN_143865530 body=99 status=ok
// SIG undefined FUN_143865530(void)

undefined8 * FUN_143865530(undefined8 *param_1,ulonglong param_2)

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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1438655a0 FUN_1438655a0 body=99 status=ok
// SIG undefined FUN_1438655a0(void)

undefined8 * FUN_1438655a0(undefined8 *param_1,ulonglong param_2)

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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143865610 FUN_143865610 body=747 status=ok
// SIG undefined FUN_143865610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143865610(longlong param_1,undefined8 *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  LPVOID pvVar5;
  float *pfVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtStaticTree::castBidirectionalRay");
  }
  lVar2 = param_2[3];
  if ((lVar2 == 0) ||
     (((*(uint *)((longlong)param_2 + 4) >> (*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x180) & 0x1f)
       & 1) != 0 &&
      ((plVar3 = (longlong *)param_2[2], plVar3 == (longlong *)0x0 ||
       (iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,*(undefined4 *)param_2,param_2[1]),
       iVar4 != 0)))))) {
    local_e8 = *(float *)(param_2 + 6);
    fStack_e4 = *(float *)((longlong)param_2 + 0x34);
    fStack_e0 = *(float *)(param_2 + 7);
    uStack_dc = *(undefined4 *)((longlong)param_2 + 0x3c);
    pfVar6 = (float *)&DAT_1467f0890;
    if ((float *)param_2[4] != (float *)0x0) {
      pfVar6 = (float *)param_2[4];
    }
    local_d8 = *(float *)(param_2 + 8);
    fStack_d4 = *(float *)((longlong)param_2 + 0x44);
    fStack_d0 = *(float *)(param_2 + 9);
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x4c);
    fVar10 = ((local_e8 + local_e8) - local_d8) - pfVar6[0xc];
    fVar11 = ((fStack_e4 + fStack_e4) - fStack_d4) - pfVar6[0xd];
    fVar12 = ((fStack_e0 + fStack_e0) - fStack_d0) - pfVar6[0xe];
    local_138 = pfVar6[1] * fVar11 + fVar10 * *pfVar6 + fVar12 * pfVar6[2];
    fStack_134 = pfVar6[5] * fVar11 + fVar10 * pfVar6[4] + fVar12 * pfVar6[6];
    fStack_130 = pfVar6[9] * fVar11 + fVar10 * pfVar6[8] + fVar12 * pfVar6[10];
    fStack_12c = pfVar6[0xb] * fVar11 + fVar10 * pfVar6[9] + fVar12 * pfVar6[0xb];
    fVar10 = local_d8 - pfVar6[0xc];
    fVar11 = fStack_d4 - pfVar6[0xd];
    fVar12 = fStack_d0 - pfVar6[0xe];
    local_128 = NavMeshMediatorBidirectionalRayCastCollector::vftable;
    local_78 = CONCAT44(fRam00000001467f07e4,_DAT_1467f07e0);
    uStack_70 = CONCAT44(fRam00000001467f07ec,fRam00000001467f07e8);
    local_120 = *(undefined8 *)(param_1 + 0x20);
    local_118 = *param_2;
    uStack_110 = param_2[1];
    local_c8 = 0xffffffff;
    local_f8 = param_2[4];
    local_108 = *(undefined1 (*) [16])(param_2 + 2);
    local_68 = 0;
    local_88 = DAT_1467f06f0;
    fStack_84 = fRam00000001467f06f4;
    fStack_80 = fRam00000001467f06f8;
    fStack_7c = fRam00000001467f06fc;
    local_148 = pfVar6[1] * fVar11 + fVar10 * *pfVar6 + pfVar6[2] * fVar12;
    fStack_144 = pfVar6[5] * fVar11 + fVar10 * pfVar6[4] + pfVar6[6] * fVar12;
    fStack_140 = pfVar6[9] * fVar11 + fVar10 * pfVar6[8] + pfVar6[10] * fVar12;
    fStack_13c = pfVar6[0xb] * fVar11 + fVar10 * pfVar6[9] + pfVar6[0xb] * fVar12;
    local_a8._0_4_ = (float)(~-(uint)(local_148 - local_138 == 0.0) & (uint)(local_148 - local_138))
    ;
    local_a8._4_4_ =
         (float)(~-(uint)(fStack_144 - fStack_134 == 0.0) & (uint)(fStack_144 - fStack_134));
    local_a8._8_4_ =
         (float)(~-(uint)(fStack_140 - fStack_130 == 0.0) & (uint)(fStack_140 - fStack_130));
    local_a8._12_4_ = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
    auVar9 = rcpps(local_108,local_a8);
    local_98._0_4_ =
         ~-(uint)(local_a8._0_4_ == 0.0) &
         (uint)((2.0 - local_a8._0_4_ * auVar9._0_4_) * auVar9._0_4_);
    local_98._4_4_ =
         ~-(uint)(local_a8._4_4_ == 0.0) &
         (uint)((2.0 - local_a8._4_4_ * auVar9._4_4_) * auVar9._4_4_);
    local_98._8_4_ =
         ~-(uint)(local_a8._8_4_ == 0.0) &
         (uint)((2.0 - local_a8._8_4_ * auVar9._8_4_) * auVar9._8_4_);
    local_98._12_4_ =
         ~-(uint)(local_a8._12_4_ == 0.0) &
         (uint)((2.0 - local_a8._12_4_ * auVar9._12_4_) * auVar9._12_4_);
    auVar9._8_4_ = -(uint)(local_a8._8_4_ == 0.0) & 0x7f7fffee;
    auVar9._0_8_ = CONCAT44(-(uint)(local_a8._4_4_ == 0.0),-(uint)(local_a8._0_4_ == 0.0)) &
                   0x7f7fffee7f7fffee;
    auVar9._12_4_ = -(uint)(local_a8._12_4_ == 0.0) & 0x7f7fffee;
    local_98 = local_98 | auVar9;
    local_b8 = local_138;
    fStack_b4 = fStack_134;
    fStack_b0 = fStack_130;
    fStack_ac = fStack_12c;
    iVar4 = TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
            ::Execute(*(undefined8 *)(param_1 + 0x18),&local_138,&local_148,&local_128);
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      if (lVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x17c);
        iVar4 = 0;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
      }
      uVar7 = 1;
      fVar10 = (local_88 - _DAT_1467f07e0) * _DAT_1467f0700;
      fVar11 = (fStack_84 - fRam00000001467f07e4) * fRam00000001467f0704;
      fVar12 = (fStack_80 - fRam00000001467f07e8) * fRam00000001467f0708;
      fVar8 = (fStack_7c - fRam00000001467f07ec) * fRam00000001467f070c;
      param_3[4] = (float)(iVar4 << 0x16 | local_c8);
      *param_3 = fVar10;
      param_3[1] = fVar11;
      param_3[2] = fVar12;
      param_3[3] = fVar8;
    }
    local_128 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  }
  else {
    uVar7 = 0;
  }
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return uVar7;
}



// FUNCTION 143865900 FUN_143865900 body=726 status=ok
// SIG undefined FUN_143865900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143865900(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  LPVOID pvVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined1 local_68;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtStaticTree::castRay");
  }
  lVar2 = param_2[3];
  if ((lVar2 == 0) ||
     (((*(uint *)((longlong)param_2 + 4) >> (*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x180) & 0x1f)
       & 1) != 0 &&
      ((plVar3 = (longlong *)param_2[2], plVar3 == (longlong *)0x0 ||
       (iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,*(undefined4 *)param_2,param_2[1]),
       iVar4 != 0)))))) {
    local_d8 = *(float *)(param_2 + 8);
    fStack_d4 = *(float *)((longlong)param_2 + 0x44);
    fStack_d0 = *(float *)(param_2 + 9);
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x4c);
    pfVar6 = (float *)&DAT_1467f0890;
    if ((float *)param_2[4] != (float *)0x0) {
      pfVar6 = (float *)param_2[4];
    }
    local_e8 = *(float *)(param_2 + 6);
    fStack_e4 = *(float *)((longlong)param_2 + 0x34);
    fStack_e0 = *(float *)(param_2 + 7);
    uStack_dc = *(undefined4 *)((longlong)param_2 + 0x3c);
    fVar9 = local_e8 - pfVar6[0xc];
    fVar10 = fStack_e4 - pfVar6[0xd];
    fVar11 = fStack_e0 - pfVar6[0xe];
    local_138 = pfVar6[1] * fVar10 + fVar9 * *pfVar6 + fVar11 * pfVar6[2];
    fStack_134 = pfVar6[5] * fVar10 + fVar9 * pfVar6[4] + fVar11 * pfVar6[6];
    fStack_130 = pfVar6[9] * fVar10 + fVar9 * pfVar6[8] + fVar11 * pfVar6[10];
    fStack_12c = pfVar6[0xb] * fVar10 + fVar9 * pfVar6[9] + fVar11 * pfVar6[0xb];
    fVar9 = local_d8 - pfVar6[0xc];
    fVar10 = fStack_d4 - pfVar6[0xd];
    fVar11 = fStack_d0 - pfVar6[0xe];
    local_128 = NavMeshMediatorRayCastCollector::vftable;
    local_120 = *(undefined8 *)(param_1 + 0x20);
    local_c8 = _DAT_1467f06d0;
    uStack_c0 = uRam00000001467f06d8;
    local_118 = *param_2;
    uStack_110 = param_2[1];
    local_b8 = 0xffffffff;
    local_f8 = param_2[4];
    local_108 = *(undefined1 (*) [16])(param_2 + 2);
    local_68 = 0;
    local_78 = DAT_1467f06f0;
    uStack_74 = uRam00000001467f06f4;
    uStack_70 = uRam00000001467f06f8;
    fStack_6c = fRam00000001467f06fc;
    local_148 = pfVar6[1] * fVar10 + fVar9 * *pfVar6 + pfVar6[2] * fVar11;
    fStack_144 = pfVar6[5] * fVar10 + fVar9 * pfVar6[4] + pfVar6[6] * fVar11;
    fStack_140 = pfVar6[9] * fVar10 + fVar9 * pfVar6[8] + pfVar6[10] * fVar11;
    fStack_13c = pfVar6[0xb] * fVar10 + fVar9 * pfVar6[9] + pfVar6[0xb] * fVar11;
    local_98._0_4_ = (float)(~-(uint)(local_148 - local_138 == 0.0) & (uint)(local_148 - local_138))
    ;
    local_98._4_4_ =
         (float)(~-(uint)(fStack_144 - fStack_134 == 0.0) & (uint)(fStack_144 - fStack_134));
    local_98._8_4_ =
         (float)(~-(uint)(fStack_140 - fStack_130 == 0.0) & (uint)(fStack_140 - fStack_130));
    local_98._12_4_ = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
    auVar8 = rcpps(local_108,local_98);
    local_88._0_4_ =
         ~-(uint)(local_98._0_4_ == 0.0) &
         (uint)((2.0 - local_98._0_4_ * auVar8._0_4_) * auVar8._0_4_);
    local_88._4_4_ =
         ~-(uint)(local_98._4_4_ == 0.0) &
         (uint)((2.0 - local_98._4_4_ * auVar8._4_4_) * auVar8._4_4_);
    local_88._8_4_ =
         ~-(uint)(local_98._8_4_ == 0.0) &
         (uint)((2.0 - local_98._8_4_ * auVar8._8_4_) * auVar8._8_4_);
    local_88._12_4_ =
         ~-(uint)(local_98._12_4_ == 0.0) &
         (uint)((2.0 - local_98._12_4_ * auVar8._12_4_) * auVar8._12_4_);
    auVar8._8_4_ = -(uint)(local_98._8_4_ == 0.0) & 0x7f7fffee;
    auVar8._0_8_ = CONCAT44(-(uint)(local_98._4_4_ == 0.0),-(uint)(local_98._0_4_ == 0.0)) &
                   0x7f7fffee7f7fffee;
    auVar8._12_4_ = -(uint)(local_98._12_4_ == 0.0) & 0x7f7fffee;
    local_88 = local_88 | auVar8;
    local_a8 = local_138;
    fStack_a4 = fStack_134;
    fStack_a0 = fStack_130;
    fStack_9c = fStack_12c;
    iVar4 = TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
            ::Execute(*(undefined8 *)(param_1 + 0x18),&local_138,&local_148,&local_128);
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      if (lVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x17c);
        iVar4 = 0;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
      }
      uVar7 = 1;
      param_3[4] = iVar4 << 0x16 | local_b8;
      *param_3 = local_78;
      param_3[1] = uStack_74;
      param_3[2] = uStack_70;
      param_3[3] = fStack_6c;
    }
    local_128 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  }
  else {
    uVar7 = 0;
  }
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return uVar7;
}



// FUNCTION 143865be0 FUN_143865be0 body=731 status=ok
// SIG undefined FUN_143865be0(void)

undefined8 FUN_143865be0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  LPVOID pvVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined1 local_68;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtStaticTree::castSphere");
  }
  lVar2 = param_2[3];
  if ((lVar2 == 0) ||
     (((*(uint *)((longlong)param_2 + 4) >> (*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x180) & 0x1f)
       & 1) != 0 &&
      ((plVar3 = (longlong *)param_2[2], plVar3 == (longlong *)0x0 ||
       (iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,*(undefined4 *)param_2,param_2[1]),
       iVar4 != 0)))))) {
    local_d8 = *(float *)(param_2 + 8);
    fStack_d4 = *(float *)((longlong)param_2 + 0x44);
    fStack_d0 = *(float *)(param_2 + 9);
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x4c);
    pfVar6 = (float *)&DAT_1467f0890;
    if ((float *)param_2[4] != (float *)0x0) {
      pfVar6 = (float *)param_2[4];
    }
    local_e8 = *(float *)(param_2 + 6);
    fStack_e4 = *(float *)((longlong)param_2 + 0x34);
    fStack_e0 = *(float *)(param_2 + 7);
    uStack_dc = *(undefined4 *)((longlong)param_2 + 0x3c);
    fVar9 = local_e8 - pfVar6[0xc];
    fVar10 = fStack_e4 - pfVar6[0xd];
    fVar11 = fStack_e0 - pfVar6[0xe];
    local_138 = pfVar6[1] * fVar10 + fVar9 * *pfVar6 + fVar11 * pfVar6[2];
    fStack_134 = pfVar6[5] * fVar10 + fVar9 * pfVar6[4] + fVar11 * pfVar6[6];
    fStack_130 = pfVar6[9] * fVar10 + fVar9 * pfVar6[8] + fVar11 * pfVar6[10];
    fStack_12c = pfVar6[0xb] * fVar10 + fVar9 * pfVar6[9] + fVar11 * pfVar6[0xb];
    fVar9 = local_d8 - pfVar6[0xc];
    fVar10 = fStack_d4 - pfVar6[0xd];
    fVar11 = fStack_d0 - pfVar6[0xe];
    local_128 = NavMeshMediatorRayCastCollector::vftable;
    local_118 = *param_2;
    uStack_110 = param_2[1];
    local_120 = *(undefined8 *)(param_1 + 0x20);
    local_f8 = param_2[4];
    local_c8 = param_2[10];
    uStack_c0 = param_2[0xb];
    local_108 = *(undefined1 (*) [16])(param_2 + 2);
    local_b8 = 0xffffffff;
    local_68 = 1;
    local_78 = DAT_1467f06f0;
    uStack_74 = uRam00000001467f06f4;
    uStack_70 = uRam00000001467f06f8;
    fStack_6c = fRam00000001467f06fc;
    local_148 = pfVar6[1] * fVar10 + fVar9 * *pfVar6 + pfVar6[2] * fVar11;
    fStack_144 = pfVar6[5] * fVar10 + fVar9 * pfVar6[4] + pfVar6[6] * fVar11;
    fStack_140 = pfVar6[9] * fVar10 + fVar9 * pfVar6[8] + pfVar6[10] * fVar11;
    fStack_13c = pfVar6[0xb] * fVar10 + fVar9 * pfVar6[9] + pfVar6[0xb] * fVar11;
    local_98._0_4_ = (float)(~-(uint)(local_148 - local_138 == 0.0) & (uint)(local_148 - local_138))
    ;
    local_98._4_4_ =
         (float)(~-(uint)(fStack_144 - fStack_134 == 0.0) & (uint)(fStack_144 - fStack_134));
    local_98._8_4_ =
         (float)(~-(uint)(fStack_140 - fStack_130 == 0.0) & (uint)(fStack_140 - fStack_130));
    local_98._12_4_ = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
    auVar8 = rcpps(local_108,local_98);
    local_88._0_4_ =
         ~-(uint)(local_98._0_4_ == 0.0) &
         (uint)((2.0 - local_98._0_4_ * auVar8._0_4_) * auVar8._0_4_);
    local_88._4_4_ =
         ~-(uint)(local_98._4_4_ == 0.0) &
         (uint)((2.0 - local_98._4_4_ * auVar8._4_4_) * auVar8._4_4_);
    local_88._8_4_ =
         ~-(uint)(local_98._8_4_ == 0.0) &
         (uint)((2.0 - local_98._8_4_ * auVar8._8_4_) * auVar8._8_4_);
    local_88._12_4_ =
         ~-(uint)(local_98._12_4_ == 0.0) &
         (uint)((2.0 - local_98._12_4_ * auVar8._12_4_) * auVar8._12_4_);
    auVar8._8_4_ = -(uint)(local_98._8_4_ == 0.0) & 0x7f7fffee;
    auVar8._0_8_ = CONCAT44(-(uint)(local_98._4_4_ == 0.0),-(uint)(local_98._0_4_ == 0.0)) &
                   0x7f7fffee7f7fffee;
    auVar8._12_4_ = -(uint)(local_98._12_4_ == 0.0) & 0x7f7fffee;
    local_88 = local_88 | auVar8;
    local_a8 = local_138;
    fStack_a4 = fStack_134;
    fStack_a0 = fStack_130;
    fStack_9c = fStack_12c;
    iVar4 = TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
            ::Execute(*(undefined8 *)(param_1 + 0x18),&local_138,&local_148,param_2 + 10,&local_128)
    ;
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    else {
      if (lVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x17c);
        iVar4 = 0;
        if (0 < iVar1) {
          iVar4 = iVar1;
        }
      }
      uVar7 = 1;
      param_3[4] = iVar4 << 0x16 | local_b8;
      *param_3 = local_78;
      param_3[1] = uStack_74;
      param_3[2] = uStack_70;
      param_3[3] = fStack_6c;
    }
    local_128 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  }
  else {
    uVar7 = 0;
  }
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return uVar7;
}



// FUNCTION 143865ec0 FUN_143865ec0 body=561 status=ok
// SIG undefined FUN_143865ec0(void)

uint * FUN_143865ec0(longlong param_1,uint *param_2,undefined4 *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  LPVOID pvVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined **local_48;
  undefined8 local_40;
  undefined4 *local_38;
  uint local_30;
  int local_2c;
  
  pvVar12 = TlsGetValue(DAT_146b8198c);
  if (pvVar12 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar12,"TtStaticTree::GCBoundary");
  }
  lVar2 = *(longlong *)(param_3 + 6);
  if ((lVar2 == 0) ||
     ((((uint)param_3[1] >> (*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x180) & 0x1f) & 1) != 0 &&
      ((plVar3 = *(longlong **)(param_3 + 4), plVar3 == (longlong *)0x0 ||
       (iVar11 = (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,*param_3,*(undefined8 *)(param_3 + 2)),
       iVar11 != 0)))))) {
    pfVar13 = (float *)&DAT_1467f0890;
    if (*(float **)(param_3 + 8) != (float *)0x0) {
      pfVar13 = *(float **)(param_3 + 8);
    }
    fVar14 = (float)param_3[0xc] - pfVar13[0xc];
    fVar15 = (float)param_3[0xd] - pfVar13[0xd];
    fVar16 = (float)param_3[0xe] - pfVar13[0xe];
    local_68 = pfVar13[1] * fVar15 + fVar14 * *pfVar13 + fVar16 * pfVar13[2];
    fStack_64 = pfVar13[5] * fVar15 + fVar14 * pfVar13[4] + fVar16 * pfVar13[6];
    fStack_60 = pfVar13[9] * fVar15 + fVar14 * pfVar13[8] + fVar16 * pfVar13[10];
    fStack_5c = pfVar13[0xb] * fVar15 + fVar14 * pfVar13[9] + fVar16 * pfVar13[0xb];
    iVar11 = 0;
    if (lVar2 != 0) {
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x17c);
      iVar11 = 0;
      if (0 < iVar1) {
        iVar11 = iVar1;
      }
    }
    local_48 = NavMeshMediatorBoundaryCollector::vftable;
    local_40 = *(undefined8 *)(param_1 + 0x20);
    local_30 = 0xffffffff;
    local_38 = param_3;
    local_2c = iVar11;
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
    ::Execute(*(undefined8 *)(param_1 + 0x18),&local_68,param_3 + 0x10,&local_48,&local_58);
    if (local_30 == 0xffffffff) {
      fVar14 = (float)param_3[0xd];
      fVar15 = (float)param_3[0xe];
      fVar16 = (float)param_3[0xf];
      *param_4 = (float)param_3[0xc];
      param_4[1] = fVar14;
      param_4[2] = fVar15;
      param_4[3] = fVar16;
      *param_2 = 0xffffffff;
    }
    else {
      fVar14 = pfVar13[4];
      fVar15 = pfVar13[5];
      fVar16 = pfVar13[6];
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      fVar6 = pfVar13[2];
      *param_2 = iVar11 << 0x16 | local_30;
      fVar7 = pfVar13[9];
      fVar8 = pfVar13[10];
      fVar9 = pfVar13[0xd];
      fVar10 = pfVar13[0xe];
      *param_4 = fStack_54 * fVar14 + local_58 * fVar4 + fStack_50 * pfVar13[8] + pfVar13[0xc];
      param_4[1] = fStack_54 * fVar15 + local_58 * fVar5 + fStack_50 * fVar7 + fVar9;
      param_4[2] = fStack_54 * fVar16 + local_58 * fVar6 + fStack_50 * fVar8 + fVar10;
      param_4[3] = fStack_4c;
    }
    local_48 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
    if (pvVar12 != (LPVOID)0x0) {
      FUN_14370d750(pvVar12,&DAT_145b8eda0);
    }
  }
  else {
    *param_2 = 0xffffffff;
    if (pvVar12 != (LPVOID)0x0) {
      FUN_14370d750(pvVar12,&DAT_145b8eda0);
    }
  }
  return param_2;
}



// FUNCTION 143866100 FUN_143866100 body=539 status=ok
// SIG undefined FUN_143866100(void)

uint * FUN_143866100(longlong param_1,uint *param_2,undefined4 *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
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
  int iVar14;
  LPVOID pvVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined **local_48;
  undefined8 local_40;
  undefined4 *local_38;
  uint local_30;
  int local_2c;
  
  pvVar15 = TlsGetValue(DAT_146b8198c);
  if (pvVar15 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar15,"TtStaticTree::GCP");
  }
  lVar2 = *(longlong *)(param_3 + 6);
  if ((lVar2 == 0) ||
     ((((uint)param_3[1] >> (*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x180) & 0x1f) & 1) != 0 &&
      ((plVar3 = *(longlong **)(param_3 + 4), plVar3 == (longlong *)0x0 ||
       (iVar14 = (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,*param_3,*(undefined8 *)(param_3 + 2)),
       iVar14 != 0)))))) {
    pfVar16 = (float *)&DAT_1467f0890;
    if (*(float **)(param_3 + 8) != (float *)0x0) {
      pfVar16 = *(float **)(param_3 + 8);
    }
    fVar17 = (float)param_3[0xc] - pfVar16[0xc];
    fVar18 = (float)param_3[0xd] - pfVar16[0xd];
    fVar19 = (float)param_3[0xe] - pfVar16[0xe];
    local_68 = pfVar16[1] * fVar18 + fVar17 * *pfVar16 + fVar19 * pfVar16[2];
    fStack_64 = pfVar16[5] * fVar18 + fVar17 * pfVar16[4] + fVar19 * pfVar16[6];
    fStack_60 = pfVar16[9] * fVar18 + fVar17 * pfVar16[8] + fVar19 * pfVar16[10];
    fStack_5c = pfVar16[0xb] * fVar18 + fVar17 * pfVar16[9] + fVar19 * pfVar16[0xb];
    iVar14 = 0;
    if (lVar2 != 0) {
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0x17c);
      iVar14 = 0;
      if (0 < iVar1) {
        iVar14 = iVar1;
      }
    }
    local_48 = NavMeshMediatorCPCollector::vftable;
    local_40 = *(undefined8 *)(param_1 + 0x20);
    local_30 = 0xffffffff;
    local_38 = param_3;
    local_2c = iVar14;
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
    ::Execute(*(undefined8 *)(param_1 + 0x18),&local_68,param_3 + 0x10,&local_48,&local_58);
    if (local_30 == 0xffffffff) {
      fVar17 = (float)param_3[0xd];
      fVar18 = (float)param_3[0xe];
      fVar19 = (float)param_3[0xf];
      *param_4 = (float)param_3[0xc];
      param_4[1] = fVar17;
      param_4[2] = fVar18;
      param_4[3] = fVar19;
      *param_2 = 0xffffffff;
    }
    else {
      fVar17 = *pfVar16;
      fVar18 = pfVar16[1];
      fVar19 = pfVar16[2];
      fVar4 = pfVar16[3];
      *param_2 = iVar14 << 0x16 | local_30;
      fVar5 = pfVar16[5];
      fVar6 = pfVar16[6];
      fVar7 = pfVar16[7];
      fVar8 = pfVar16[9];
      fVar9 = pfVar16[10];
      fVar10 = pfVar16[0xb];
      fVar11 = pfVar16[0xd];
      fVar12 = pfVar16[0xe];
      fVar13 = pfVar16[0xf];
      *param_4 = local_58 * fVar17 + fStack_54 * pfVar16[4] + fStack_50 * pfVar16[8] + pfVar16[0xc];
      param_4[1] = local_58 * fVar18 + fStack_54 * fVar5 + fStack_50 * fVar8 + fVar11;
      param_4[2] = local_58 * fVar19 + fStack_54 * fVar6 + fStack_50 * fVar9 + fVar12;
      param_4[3] = local_58 * fVar4 + fStack_54 * fVar7 + fStack_50 * fVar10 + fVar13;
    }
    local_48 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
    if (pvVar15 != (LPVOID)0x0) {
      FUN_14370d750(pvVar15,&DAT_145b8eda0);
    }
  }
  else {
    *param_2 = 0xffffffff;
    if (pvVar15 != (LPVOID)0x0) {
      FUN_14370d750(pvVar15,&DAT_145b8eda0);
    }
  }
  return param_2;
}



// FUNCTION 143866320 FUN_143866320 body=224 status=ok
// SIG undefined FUN_143866320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143866320(longlong param_1,undefined4 param_2,undefined8 param_3,float *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_res10 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if ((plVar1 != (longlong *)0x0) &&
     (local_res10[0] = param_2,
     iVar3 = (**(code **)(*plVar1 + 0x20))
                       (plVar1,*(undefined8 *)(param_1 + 0x28),local_res10,
                        *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)), iVar3 == 0
     )) {
    return 0;
  }
  local_18 = DAT_1467f06f0;
  fStack_14 = fRam00000001467f06f4;
  fStack_10 = fRam00000001467f06f8;
  fStack_c = fRam00000001467f06fc;
  local_res10[0] = param_2;
  cVar2 = FUN_143852690(*(undefined8 *)(param_1 + 8),local_res10,param_1 + 0x70,&local_18);
  fVar4 = fStack_14 - fRam00000001467f07e4;
  fVar6 = fStack_10 - fRam00000001467f07e8;
  fVar8 = fStack_c - fRam00000001467f07ec;
  fVar10 = ABS(local_18 - _DAT_1467f07e0);
  if ((cVar2 != '\0') && (fVar10 < *(float *)(param_1 + 0xb0))) {
    fVar5 = ABS(fVar4) + fRam00000001467f07e4;
    fVar7 = ABS(fVar6) + fRam00000001467f07e8;
    fVar9 = ABS(fVar8) + fRam00000001467f07ec;
    *param_4 = fVar10 + _DAT_1467f07e0;
    param_4[1] = fVar5;
    param_4[2] = fVar7;
    param_4[3] = fVar9;
    *(float *)(param_1 + 0xa0) = local_18;
    *(float *)(param_1 + 0xa4) = fStack_14;
    *(float *)(param_1 + 0xa8) = fStack_10;
    *(float *)(param_1 + 0xac) = fStack_c;
    *(float *)(param_1 + 0xb0) = fVar10;
    *(float *)(param_1 + 0xb4) = ABS(fVar4);
    *(float *)(param_1 + 0xb8) = ABS(fVar6);
    *(float *)(param_1 + 0xbc) = ABS(fVar8);
    *(undefined4 *)(param_1 + 0x60) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 143866400 FUN_143866400 body=244 status=ok
// SIG undefined FUN_143866400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_143866400(longlong param_1,float *param_2,undefined4 param_3,undefined8 param_4,
                     undefined4 *param_5,undefined4 *param_6,float *param_7)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res8 [8];
  undefined4 local_res18 [2];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  plVar2 = *(longlong **)(puVar1 + 4);
  if (plVar2 != (longlong *)0x0) {
    local_res18[0] = param_3;
    iVar4 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,*(undefined8 *)(puVar1 + 6),local_res18,*puVar1,
                       *(undefined8 *)(puVar1 + 2));
    if (iVar4 == 0) goto LAB_143866492;
  }
  local_18 = *param_5;
  uStack_14 = param_5[1];
  uStack_10 = param_5[2];
  fStack_c = (float)param_5[3];
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) == 0) {
    local_res18[0] = param_3;
    piVar5 = (int *)hkaiNavMeshUtils::getClosestBoundaryOnFace
                              (local_res8,*(undefined8 *)(param_1 + 8),param_5,local_res18,
                               *(longlong *)(param_1 + 0x10) + 0x50,&local_18);
    iVar4 = *piVar5;
  }
  else {
    local_res18[0] = param_3;
    piVar5 = (int *)FUN_143853240();
    iVar4 = *piVar5;
    if (iVar4 == -1) {
LAB_143866492:
      uVar3 = uRam00000001467f08d8;
      *(undefined8 *)param_2 = _DAT_1467f08d0;
      *(undefined8 *)(param_2 + 2) = uVar3;
      return param_2;
    }
  }
  *param_6 = local_18;
  param_6[1] = uStack_14;
  param_6[2] = uStack_10;
  param_6[3] = fStack_c;
  if (fStack_c < *param_7) {
    *(int *)(param_1 + 0x18) = iVar4;
  }
  *param_2 = fStack_c;
  param_2[1] = fStack_c;
  param_2[2] = fStack_c;
  param_2[3] = fStack_c;
  return param_2;
}



// FUNCTION 143866500 FUN_143866500 body=297 status=ok
// SIG undefined FUN_143866500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_143866500(longlong param_1,float *param_2,int param_3,undefined8 param_4,float *param_5,
                     float *param_6,float *param_7)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_res18 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  pfVar4 = param_5;
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  local_18 = *param_5;
  fStack_14 = param_5[1];
  fStack_10 = param_5[2];
  fStack_c = param_5[3];
  local_res18[0] = param_3;
  if (*(longlong *)(puVar1 + 6) == 0) {
    plVar2 = *(longlong **)(puVar1 + 4);
    if ((plVar2 != (longlong *)0x0) &&
       (iVar5 = (**(code **)(*plVar2 + 0x20))
                          (plVar2,0,local_res18,*puVar1,*(undefined8 *)(puVar1 + 2)), iVar5 == 0))
    goto LAB_143866575;
    local_res18[0] = param_3;
    FUN_1438533f0(*(undefined8 *)(param_1 + 8),pfVar4,local_res18,&local_18);
  }
  else {
    piVar6 = (int *)FUN_1438534b0(&param_5,*(longlong *)(puVar1 + 6),param_5,local_res18,&local_18,
                                  *(undefined8 *)(puVar1 + 4),*puVar1,*(undefined8 *)(puVar1 + 2));
    param_3 = *piVar6;
    if (param_3 == -1) {
LAB_143866575:
      uVar3 = uRam00000001467f08d8;
      *(undefined8 *)param_2 = _DAT_1467f08d0;
      *(undefined8 *)(param_2 + 2) = uVar3;
      return param_2;
    }
  }
  *param_6 = local_18;
  param_6[1] = fStack_14;
  param_6[2] = fStack_10;
  param_6[3] = fStack_c;
  fVar7 = (*pfVar4 - local_18) * (*pfVar4 - local_18);
  fVar8 = (pfVar4[1] - fStack_14) * (pfVar4[1] - fStack_14);
  fVar9 = (pfVar4[2] - fStack_10) * (pfVar4[2] - fStack_10);
  fVar10 = fVar8 + fVar7 + fVar9;
  if (fVar10 < *param_7) {
    *(int *)(param_1 + 0x18) = param_3;
  }
  *param_2 = fVar10;
  param_2[1] = fVar8 + fVar7 + fVar9;
  param_2[2] = fVar8 + fVar7 + fVar9;
  param_2[3] = fVar8 + fVar7 + fVar9;
  return param_2;
}



// FUNCTION 143866630 FUN_143866630 body=213 status=ok
// SIG undefined FUN_143866630(void)

undefined8 FUN_143866630(longlong param_1,undefined4 param_2,undefined8 param_3,float *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 local_res10 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if ((plVar1 != (longlong *)0x0) &&
     (local_res10[0] = param_2,
     iVar3 = (**(code **)(*plVar1 + 0x20))
                       (plVar1,*(undefined8 *)(param_1 + 0x28),local_res10,
                        *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18)), iVar3 == 0
     )) {
    return 0;
  }
  local_18 = DAT_1467f06f0;
  fStack_14 = fRam00000001467f06f4;
  fStack_10 = fRam00000001467f06f8;
  fStack_c = fRam00000001467f06fc;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    local_res10[0] = param_2;
    cVar2 = FUN_143852780(*(undefined8 *)(param_1 + 8),local_res10,param_1 + 0x80,&local_18);
  }
  else {
    local_res10[0] = param_2;
    cVar2 = FUN_1438527a0(*(undefined8 *)(param_1 + 8),local_res10,param_1 + 0x80,param_1 + 0x60,
                          &local_18);
  }
  if ((cVar2 != '\0') && (local_18 < *param_4)) {
    *param_4 = local_18;
    param_4[1] = fStack_14;
    param_4[2] = fStack_10;
    param_4[3] = fStack_c;
    *(float *)(param_1 + 0xb0) = local_18;
    *(float *)(param_1 + 0xb4) = fStack_14;
    *(float *)(param_1 + 0xb8) = fStack_10;
    *(float *)(param_1 + 0xbc) = fStack_c;
    *(undefined4 *)(param_1 + 0x70) = param_2;
    return 1;
  }
  return 0;
}



// FUNCTION 143866710 FUN_143866710 body=807 status=ok
// SIG undefined FUN_143866710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143866710(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  float *pfVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  LPVOID pvVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_res10 [2];
  uint *local_a8;
  int local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
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
  float fStack_2c;
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TtStaticTree::queryAabb");
  }
  lVar1 = *(longlong *)(param_2 + 6);
  if ((lVar1 != 0) &&
     ((((uint)param_2[1] >> (*(uint *)(*(longlong *)(lVar1 + 0x18) + 0x180) & 0x1f) & 1) == 0 ||
      ((plVar2 = *(longlong **)(param_2 + 4), plVar2 != (longlong *)0x0 &&
       (iVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*param_2,*(undefined8 *)(param_2 + 2)),
       iVar5 == 0)))))) goto LAB_14386699b;
  if (*(longlong *)(param_2 + 8) == 0) {
LAB_143866869:
    local_88 = param_2[0xc];
    uStack_84 = param_2[0xd];
    uStack_80 = param_2[0xe];
    uStack_7c = param_2[0xf];
    local_78 = *(undefined8 *)(param_2 + 0x10);
    uStack_70 = *(undefined8 *)(param_2 + 0x12);
  }
  else {
    local_res10[0] = 0;
    cVar4 = FUN_14375f5f0(*(longlong *)(param_2 + 8),&DAT_1467f0890,local_res10);
    if (cVar4 != '\0') goto LAB_143866869;
    pfVar3 = *(float **)(param_2 + 8);
    fStack_60 = pfVar3[8];
    fStack_5c = pfVar3[9];
    fStack_40 = pfVar3[10];
    fStack_4c = pfVar3[0xb];
    local_68 = *pfVar3;
    local_58 = pfVar3[1];
    local_48 = pfVar3[2];
    fStack_64 = pfVar3[4];
    fStack_54 = pfVar3[5];
    fStack_44 = pfVar3[6];
    fVar13 = -pfVar3[0xc];
    fVar14 = -pfVar3[0xd];
    fVar15 = -pfVar3[0xe];
    local_98 = _DAT_1467f06e0;
    uStack_94 = uRam00000001467f06e4;
    uStack_90 = uRam00000001467f06e8;
    uStack_8c = DAT_1467f06ec;
    local_38 = fVar14 * local_58 + fVar13 * local_68 + fVar15 * local_48;
    fStack_34 = fVar14 * fStack_54 + fVar13 * fStack_64 + fVar15 * fStack_44;
    fStack_30 = fVar14 * fStack_5c + fVar13 * fStack_60 + fVar15 * fStack_40;
    fStack_2c = fVar14 * fStack_4c + fVar13 * fStack_5c + fVar15 * fStack_4c;
    fStack_50 = fStack_5c;
    fStack_3c = fStack_4c;
    FUN_143717ce0(&local_68,param_2 + 0xc,&local_98,&local_88);
  }
  uVar10 = 0;
  local_9c = 0x80000000;
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
  ::Execute(*(undefined8 *)(param_1 + 0x18),&local_88,&local_a8);
  uVar6 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  iVar5 = (int)param_3[1] + local_a0;
  if ((int)uVar6 < iVar5) {
    iVar12 = uVar6 * 2;
    if (iVar5 < iVar12) {
      iVar5 = iVar12;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar5,4);
  }
  if (lVar1 == 0) {
    uVar11 = (ulonglong)((longlong)(local_a8 + local_a0) + (3 - (longlong)local_a8)) >> 2;
    if (local_a8 + local_a0 < local_a8) {
      uVar11 = uVar10;
    }
    puVar9 = local_a8;
    if (uVar11 != 0) {
      do {
        lVar1 = param_3[1];
        uVar10 = uVar10 + 1;
        uVar6 = *puVar9;
        *(int *)(param_3 + 1) = (int)lVar1 + 1;
        *(uint *)(*param_3 + (longlong)(int)lVar1 * 4) = uVar6;
        puVar9 = puVar9 + 1;
      } while (uVar10 != uVar11);
    }
  }
  else {
    iVar5 = *(int *)(*(longlong *)(lVar1 + 0x18) + 0x17c);
    iVar12 = 0;
    if (0 < iVar5) {
      iVar12 = iVar5;
    }
    puVar9 = local_a8 + local_a0;
    for (puVar8 = local_a8; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      plVar2 = *(longlong **)(param_2 + 4);
      uVar6 = *puVar8;
      if ((plVar2 == (longlong *)0x0) ||
         (local_res10[0] = uVar6,
         iVar5 = (**(code **)(*plVar2 + 0x20))
                           (plVar2,*(undefined8 *)(param_2 + 6),local_res10,*param_2,
                            *(undefined8 *)(param_2 + 2)), iVar5 != 0)) {
        *(uint *)(*param_3 + (longlong)(int)param_3[1] * 4) = iVar12 << 0x16 | uVar6;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      }
    }
  }
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_a8,4,local_9c & 0x3fffffff);
  }
  local_a8 = (uint *)0x0;
  local_9c = 0x80000000;
LAB_14386699b:
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d750(pvVar7,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143866a40 FUN_143866a40 body=65 status=ok
// SIG undefined FUN_143866a40(void)

void FUN_143866a40(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_3;
  if (0 < param_3) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 - param_1;
    do {
      puVar1 = (undefined8 *)(param_2 + -0x10 + (longlong)puVar3);
      uVar2 = puVar1[1];
      puVar3[-2] = *puVar1;
      puVar3[-1] = uVar2;
      uVar2 = ((undefined8 *)(param_2 + (longlong)puVar3))[1];
      *puVar3 = *(undefined8 *)(param_2 + (longlong)puVar3);
      puVar3[1] = uVar2;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar3);
      *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)(param_2 + 0x14 + (longlong)puVar3);
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(param_2 + 0x18 + (longlong)puVar3);
      puVar3 = puVar3 + 6;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 143866a90 FUN_143866a90 body=1776 status=ok
// SIG undefined FUN_143866a90(void)

/* WARNING: Removing unreachable block (ram,0x000143866ebc) */
/* WARNING: Removing unreachable block (ram,0x000143866c0d) */

undefined8 FUN_143866a90(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  byte *pbVar9;
  undefined1 uVar10;
  uint uVar11;
  ulonglong uVar12;
  char cVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar37;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b6;
  undefined1 local_a8 [4];
  float local_a4;
  int local_a0;
  float local_88;
  float fStack_84;
  float fStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  FUN_143867b30();
  if (*(int *)(param_1[5] + 0xb4) == 7) {
    param_3[0xd] = param_1[5];
    *(undefined1 *)((longlong)param_3 + 0x82) = 0;
    return 1;
  }
  FUN_1438674a0(param_1);
  pfVar1 = (float *)(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1[5] + 0xb4);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)((longlong)param_1 + 0x7c);
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    fVar16 = *(float *)((longlong)param_1 + 0x84);
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_14387d140(*(longlong *)(param_1[5] + 0xa0) + 0x18);
    }
    *pfVar1 = fVar16;
  }
  uVar8 = 0;
  if (*(char *)((longlong)param_1 + 0x99) != '\x02') {
    uVar8 = FUN_1438a3290(param_1[5],param_1[4]);
  }
  FUN_14387dc00(param_1[5],uVar8,&local_88);
  FUN_1438a09b0(&local_138,param_1[5],uVar8,&local_88);
  lVar4 = param_1[0xc];
  fVar16 = *(float *)(lVar4 + 0x24);
  if (*(uint *)(param_1[5] + 0xb4) == 3) {
    fVar19 = local_68 * local_68;
    fVar22 = fStack_64 * fStack_64;
    auVar20._8_4_ = fStack_60 * fStack_60;
    auVar20._4_4_ = auVar20._8_4_;
    auVar20._0_4_ = auVar20._8_4_;
    auVar20._12_4_ = auVar20._8_4_;
    auVar24._0_4_ = fVar22 + fVar19 + auVar20._8_4_;
    auVar24._4_4_ = fVar22 + fVar19 + auVar20._8_4_;
    auVar24._8_4_ = fVar22 + fVar19 + auVar20._8_4_;
    auVar24._12_4_ = fVar22 + fVar19 + auVar20._8_4_;
    auVar20 = rsqrtps(auVar20,auVar24);
    fVar19 = auVar20._0_4_;
    fVar22 = auVar20._4_4_;
    fVar33 = auVar20._8_4_;
    fVar23 = auVar20._12_4_;
    fVar22 = (float)(~-(uint)(auVar24._4_4_ <= 0.0) &
                    (uint)((3.0 - auVar24._4_4_ * fVar22 * fVar22) * fVar22 * 0.5)) * fStack_64 *
             fVar16;
    auVar31._0_8_ =
         CONCAT44(fVar22,(float)(~-(uint)(auVar24._0_4_ <= 0.0) &
                                (uint)((3.0 - auVar24._0_4_ * fVar19 * fVar19) * fVar19 * 0.5)) *
                         local_68 * fVar16);
    auVar31._8_4_ =
         (float)(~-(uint)(auVar24._8_4_ <= 0.0) &
                (uint)((3.0 - auVar24._8_4_ * fVar33 * fVar33) * fVar33 * 0.5)) * fStack_60 * fVar16
    ;
    auVar31._12_4_ =
         (float)(~-(uint)(auVar24._12_4_ <= 0.0) &
                (uint)((3.0 - auVar24._12_4_ * fVar23 * fVar23) * fVar23 * 0.5)) * fStack_5c *
         fVar16;
    auVar32._0_8_ = auVar31._0_8_ << 0x20;
    auVar32._8_8_ = auVar31._8_8_ << 0x20 | (ulonglong)(uint)fVar22;
    local_f8 = auVar32 >> 0x20;
    if (*(char *)((longlong)param_1 + 0x9c) == '\0') {
      bVar15 = false;
      uVar10 = 0;
    }
    else {
      if (param_1[0xd] != 0) {
        pfVar1 = (float *)(*(longlong *)(param_1[0xe] + 0x18) +
                          (longlong)(*(int *)(param_1[0xe] + 0x20) + -1) * 0x30);
        fVar16 = (local_88 - *pfVar1) * (local_88 - *pfVar1);
        fVar19 = (fStack_84 - pfVar1[1]) * (fStack_84 - pfVar1[1]);
        auVar21._8_4_ = (fStack_80 - pfVar1[2]) * (fStack_80 - pfVar1[2]);
        auVar21._4_4_ = auVar21._8_4_;
        auVar21._0_4_ = auVar21._8_4_;
        auVar21._12_4_ = auVar21._8_4_;
        fVar22 = fVar19 + fVar16 + auVar21._8_4_;
        auVar5._4_4_ = fVar19 + fVar16 + auVar21._8_4_;
        auVar5._0_4_ = fVar22;
        auVar5._8_4_ = fVar19 + fVar16 + auVar21._8_4_;
        auVar5._12_4_ = fVar19 + fVar16 + auVar21._8_4_;
        auVar20 = rsqrtps(auVar21,auVar5);
        fVar16 = auVar20._0_4_;
        if (*(float *)(lVar4 + 0x28) + *(float *)(lVar4 + 0x28) <
            (float)(~-(uint)(fVar22 <= 0.0) &
                   (uint)((3.0 - fVar22 * fVar16 * fVar16) * fVar16 * 0.5 * fVar22))) {
          (**(code **)(*param_1 + 0xa0))(param_1,0);
        }
      }
      uVar10 = 1;
      bVar15 = *(char *)(*(longlong *)(param_1[5] + 0xa0) + 0x38) != '\0';
    }
    param_3[0xd] = local_d0;
    param_3[0xe] = local_c8;
    *param_3 = local_138;
    param_3[1] = uStack_130;
    param_3[2] = local_128;
    param_3[3] = uStack_120;
    param_3[0xf] = local_c0;
    param_3[4] = local_118;
    param_3[5] = uStack_110;
    param_3[6] = local_108;
    param_3[7] = uStack_100;
    *(undefined1 *)((longlong)param_3 + 0x82) = local_b6;
    *(float *)(param_3 + 0xc) = local_d8;
    *(undefined1 (*) [16])(param_3 + 8) = local_f8;
    param_3[10] = CONCAT44(fStack_e4,local_e8);
    param_3[0xb] = CONCAT44(uStack_dc,fStack_e0);
    *(bool *)(param_3 + 0x10) = bVar15;
    *(undefined1 *)((longlong)param_3 + 0x81) = uVar10;
    return 1;
  }
  if ((param_1[0xe] == 0) || ((*(uint *)(param_1[5] + 0xb4) & 0xfffffffb) == 0)) {
    param_3[0xd] = local_d0;
    param_3[0xe] = local_c8;
    *param_3 = local_138;
    param_3[1] = uStack_130;
    param_3[2] = local_128;
    param_3[3] = uStack_120;
    param_3[0xf] = local_c0;
    param_3[4] = local_118;
    param_3[5] = uStack_110;
    param_3[6] = local_108;
    param_3[7] = uStack_100;
    *(undefined1 *)((longlong)param_3 + 0x82) = local_b6;
    *(float *)(param_3 + 0xc) = local_d8;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = CONCAT44(fStack_e4,local_e8);
    param_3[0xb] = CONCAT44(uStack_dc,fStack_e0);
    *(undefined2 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return 1;
  }
  FUN_14387de20(&local_88,lVar4,param_1[0xe],*(undefined4 *)((longlong)param_1 + 0x7c),
                CONCAT44(uVar37,*pfVar1),local_a8);
  *(int *)(param_1 + 0xf) = local_a0;
  if ((*(char *)(param_1[0xc] + 0x31) != '\0') &&
     (uVar12 = (ulonglong)*(int *)((longlong)param_1 + 0x7c),
     *(int *)((longlong)param_1 + 0x7c) < local_a0)) {
    pbVar9 = (byte *)(*(longlong *)(param_1[0xe] + 0x18) + 0x58 + uVar12 * 0x30);
    do {
      if ((*pbVar9 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x10) = 7;
        param_3[0xd] = param_1[5];
        *(undefined1 *)((longlong)param_3 + 0x82) = 0;
        return 1;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      pbVar9 = pbVar9 + 0x30;
    } while ((int)uVar11 < local_a0);
  }
  fVar19 = (float)FUN_14387d190();
  iVar3 = *(int *)(param_1[5] + 0xb4);
  if (iVar3 == 1) {
    if (*(char *)((longlong)param_1 + 0x9a) == '\0') {
      iVar3 = *(int *)(param_1[0xc] + 0x1c);
      if (iVar3 < *(int *)(param_1[0xe] + 0x20)) {
        if (*(int *)(param_1[0xe] + 0x20) - local_a0 < iVar3) {
LAB_143866e81:
          *(undefined4 *)(param_1 + 0x10) = 6;
        }
      }
      else {
        fVar22 = *(float *)(param_1[0xc] + 0x18);
        if (fVar22 <= fVar19) {
          fVar22 = fVar19;
        }
        if (local_a4 < fVar22) goto LAB_143866e81;
      }
    }
    else if (local_a4 < fVar19) {
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
LAB_143866e8b:
    if ((local_a4 < *(float *)(param_1[0xc] + 0x28)) &&
       (*(char *)((longlong)param_1 + 0x9a) != '\0')) {
      *(undefined4 *)(param_1 + 0x10) = 3;
    }
  }
  else if ((iVar3 == 2) || (iVar3 == 5)) goto LAB_143866e8b;
  if ((int)param_1[0x10] == 3) {
    auVar17._0_8_ = CONCAT44(fStack_74 * fVar16,local_78 * fVar16);
    auVar17._8_4_ = fStack_70 * fVar16;
    auVar17._12_4_ = fStack_6c * fVar16;
    auVar18._0_8_ = auVar17._0_8_ << 0x20;
    auVar18._8_8_ = auVar17._8_8_ << 0x20 | (ulonglong)(uint)(fStack_74 * fVar16);
    local_f8 = auVar18 >> 0x20;
  }
  else {
    fVar16 = *(float *)((longlong)param_1 + 0x84);
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_14387d140(*(longlong *)(param_1[5] + 0xa0) + 0x18);
    }
    *pfVar1 = fVar16;
    FUN_14387d440(&local_88,*(longlong *)(param_1[5] + 0xa0) + 0x18,param_1[0xc],param_1[0xe],
                  local_a8,local_f8,pfVar1);
    if (*(char *)((longlong)param_1 + 0x99) != '\x02') {
      bVar15 = *(char *)(*(longlong *)(param_1[5] + 0xa0) + 0x38) != '\0';
      if (((*(byte *)(param_1[5] + 0xb2) & 7) == 0) ||
         (*(char *)((longlong)param_1 + 0x99) == '\x01')) {
        cVar13 = '\0';
      }
      else {
        cVar13 = '\x01';
      }
      if (cVar13 != '\0') {
        iVar3 = *(int *)((longlong)param_1 + 0x7c);
        iVar14 = 0;
        if (0 < iVar3) {
          iVar14 = iVar3;
        }
        lVar4 = *(longlong *)(param_1[0xe] + 0x18);
        pfVar2 = (float *)(lVar4 + 0x10 + (longlong)iVar14 * 0x30);
        pfVar1 = (float *)(lVar4 + (longlong)(iVar3 + 1) * 0x30);
        fVar16 = *pfVar2 * (*pfVar1 - local_88);
        fVar19 = pfVar2[1] * (pfVar1[1] - fStack_84);
        auVar25._8_4_ = pfVar2[2] * (pfVar1[2] - fStack_80);
        auVar25._4_4_ = auVar25._8_4_;
        auVar25._0_4_ = auVar25._8_4_;
        auVar25._12_4_ = auVar25._8_4_;
        fVar34 = (0.0 - (fVar19 + fVar16 + auVar25._8_4_)) * *pfVar2 + (*pfVar1 - local_88);
        fVar35 = (0.0 - (fVar19 + fVar16 + auVar25._8_4_)) * pfVar2[1] + (pfVar1[1] - fStack_84);
        fVar36 = (0.0 - (fVar19 + fVar16 + auVar25._8_4_)) * pfVar2[2] + (pfVar1[2] - fStack_80);
        fVar16 = fVar34 * fVar34;
        fVar19 = fVar35 * fVar35;
        fVar22 = fVar36 * fVar36;
        fVar28 = fVar19 + fVar16 + fVar22;
        fVar29 = fVar19 + fVar16 + fVar22;
        fVar30 = fVar19 + fVar16 + fVar22;
        fVar22 = fVar19 + fVar16 + fVar22;
        auVar6._4_4_ = fVar29;
        auVar6._0_4_ = fVar28;
        auVar6._8_4_ = fVar30;
        auVar6._12_4_ = fVar22;
        auVar20 = rsqrtps(auVar25,auVar6);
        fVar16 = auVar20._0_4_;
        fVar19 = auVar20._4_4_;
        fVar33 = auVar20._8_4_;
        fVar23 = auVar20._12_4_;
        fVar16 = (float)(~-(uint)(fVar28 <= 0.0) &
                        (uint)((3.0 - fVar28 * fVar16 * fVar16) * fVar16 * 0.5));
        fVar19 = (float)(~-(uint)(fVar29 <= 0.0) &
                        (uint)((3.0 - fVar29 * fVar19 * fVar19) * fVar19 * 0.5));
        fVar33 = (float)(~-(uint)(fVar30 <= 0.0) &
                        (uint)((3.0 - fVar30 * fVar33 * fVar33) * fVar33 * 0.5));
        auVar26._0_4_ = fVar16 * fVar28;
        auVar26._4_4_ = fVar19 * fVar29;
        auVar26._8_4_ = fVar33 * fVar30;
        auVar26._12_4_ =
             (float)(~-(uint)(fVar22 <= 0.0) &
                    (uint)((3.0 - fVar22 * fVar23 * fVar23) * fVar23 * 0.5)) * fVar22;
        fStack_e0 = -(fVar33 * fVar36);
        auVar27 = auVar26;
        if ((*(byte *)(*(longlong *)(param_1[0xe] + 0x18) + 0x28 + (longlong)(iVar3 + 1) * 0x30) & 1
            ) != 0) {
          fVar22 = *(float *)(param_1[0xc] + 0x2c);
          auVar7._4_8_ = auVar26._8_8_;
          auVar7._0_4_ = auVar26._4_4_ - fVar22;
          auVar27._0_8_ = auVar7._0_8_ << 0x20;
          auVar27._8_4_ = auVar26._8_4_ - fVar22;
          auVar27._12_4_ = auVar26._12_4_ - fVar22;
        }
        uStack_dc = auVar27._12_4_;
        local_e8 = -(fVar16 * fVar34);
        fStack_e4 = -(fVar19 * fVar35);
        local_d8 = auVar26._0_4_;
      }
      goto LAB_143866ed1;
    }
  }
  bVar15 = false;
  cVar13 = '\0';
LAB_143866ed1:
  *param_3 = local_138;
  param_3[1] = uStack_130;
  param_3[0xd] = local_d0;
  param_3[4] = local_118;
  param_3[5] = uStack_110;
  param_3[0xe] = local_c8;
  param_3[2] = local_128;
  param_3[3] = uStack_120;
  param_3[8] = local_f8._0_8_;
  param_3[9] = local_f8._8_8_;
  param_3[0xf] = local_c0;
  param_3[6] = local_108;
  param_3[7] = uStack_100;
  *(float *)(param_3 + 0xc) = local_d8;
  *(undefined1 *)((longlong)param_3 + 0x82) = local_b6;
  param_3[10] = CONCAT44(fStack_e4,local_e8);
  param_3[0xb] = CONCAT44(uStack_dc,fStack_e0);
  *(bool *)(param_3 + 0x10) = bVar15;
  *(char *)((longlong)param_3 + 0x81) = cVar13;
  return 1;
}



// FUNCTION 143867180 FUN_143867180 body=85 status=ok
// SIG undefined FUN_143867180(void)

void FUN_143867180(longlong param_1)

{
  FUN_14386af10();
  *(undefined4 *)(param_1 + 0x30) = 4;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xb4) = 3;
  return;
}



// FUNCTION 1438671e0 FUN_1438671e0 body=81 status=ok
// SIG undefined FUN_1438671e0(void)

void FUN_1438671e0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_14370c030(param_2);
  (**(code **)(*param_1 + 0xa8))(param_1);
  local_10 = 0;
  local_c = 1;
  local_18 = param_2;
  FUN_143867c70(param_1,&local_18);
  return;
}



// FUNCTION 143867240 FUN_143867240 body=294 status=ok
// SIG undefined FUN_143867240(void)

void FUN_143867240(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong local_18;
  int local_10;
  uint local_c;
  
  lVar9 = *(longlong *)(param_1 + 0x68);
  if (lVar9 != 0) {
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar10 = *(int *)(param_1 + 0x78);
    }
    if (iVar10 < *(int *)(lVar9 + 0x20)) {
      local_18 = 0;
      local_10 = 0;
      local_c = 0x80000000;
      FUN_1438ae010(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),lVar9,&local_18);
      iVar6 = local_10;
      lVar9 = param_3[1];
      uVar7 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
      iVar10 = (int)lVar9 + local_10;
      if ((int)uVar7 < iVar10) {
        iVar2 = uVar7 * 2;
        if (iVar10 < iVar2) {
          iVar10 = iVar2;
        }
        FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar10,0x10);
      }
      *(int *)(param_3 + 1) = (int)param_3[1] + iVar6;
      iVar10 = 0;
      if (0 < local_10) {
        puVar8 = (undefined4 *)((longlong)(int)lVar9 * 0x10 + *param_3);
        lVar9 = 0;
        do {
          iVar10 = iVar10 + 1;
          puVar1 = (undefined4 *)(lVar9 + local_18);
          uVar3 = puVar1[1];
          uVar4 = puVar1[2];
          uVar5 = puVar1[3];
          *puVar8 = *puVar1;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          puVar8[3] = uVar5;
          puVar8 = puVar8 + 4;
          lVar9 = lVar9 + 0x30;
        } while (iVar10 < local_10);
      }
      local_10 = 0;
      if (-1 < (int)local_c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_18,0x30,local_c & 0x3fffffff);
      }
    }
  }
  return;
}



// FUNCTION 143867370 FUN_143867370 body=289 status=ok
// SIG undefined FUN_143867370(void)

void FUN_143867370(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  longlong local_18;
  int local_10;
  uint local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  (**(code **)(*param_1 + 0x28))(param_1,0,&local_18);
  if (1 < local_10) {
    uVar3 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
    lVar4 = param_2[1];
    iVar7 = local_10 + -1;
    iVar6 = (int)lVar4 + iVar7;
    if ((int)uVar3 < iVar6) {
      iVar2 = uVar3 * 2;
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar6,0x20);
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar7;
    iVar7 = 1;
    lVar1 = *param_2;
    if (1 < local_10) {
      lVar4 = (longlong)(int)lVar4 << 5;
      lVar5 = 0x10;
      do {
        iVar7 = iVar7 + 1;
        auVar8 = minps(*(undefined1 (*) [16])(lVar5 + -0x10 + local_18),
                       *(undefined1 (*) [16])(lVar5 + local_18));
        *(undefined1 (*) [16])(lVar4 + lVar1) = auVar8;
        auVar8 = maxps(*(undefined1 (*) [16])(lVar5 + -0x10 + local_18),
                       *(undefined1 (*) [16])(lVar5 + local_18));
        *(undefined1 (*) [16])(lVar4 + 0x10 + lVar1) = auVar8;
        lVar4 = lVar4 + 0x20;
        lVar5 = lVar5 + 0x10;
      } while (iVar7 < local_10);
    }
  }
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_18,0x10,local_c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438674a0 FUN_1438674a0 body=187 status=ok
// SIG undefined FUN_1438674a0(void)

void FUN_1438674a0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18 [4];
  
  *(undefined4 *)(param_1 + 0x30) = 4;
  if (*(char *)(param_1 + 0x99) == '\x02') {
    lVar1 = FUN_14386afa0();
    if (lVar1 == 0) {
      return;
    }
    *(undefined1 *)(lVar1 + 0x35) = 1;
    FUN_1438a39b0(&local_28,lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    puVar3 = &local_28;
    uVar2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0x54);
  }
  else {
    lVar1 = FUN_14386af60();
    if (lVar1 == 0) {
      return;
    }
    *(undefined1 *)(lVar1 + 0x35) = 1;
    local_28 = *(undefined4 *)(param_1 + 0x94);
    uStack_24 = local_28;
    uStack_20 = local_28;
    uStack_1c = local_28;
    FUN_1438a3790(local_18,lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  &local_28);
    puVar3 = local_18;
    uVar2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0x44);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  FUN_143867c70(param_1,puVar3);
  return;
}



// FUNCTION 143867560 FUN_143867560 body=358 status=ok
// SIG undefined FUN_143867560(void)

void FUN_143867560(longlong param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_res8;
  undefined4 local_res10;
  float local_res18;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_res8 = *(undefined8 *)(param_1 + 0x28);
  local_res10 = param_2;
  local_res18 = param_3;
  local_38 = param_2;
  uStack_34 = param_2;
  uStack_30 = param_2;
  uStack_2c = param_2;
  FUN_1438a3760(&local_38,&local_res8,1);
  iVar3 = *(int *)(param_1 + 0x7c);
  if (-1 < iVar3) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18);
    fVar7 = *(float *)(lVar4 + 0x20);
    fVar8 = *(float *)(lVar4 + 0x24);
    fVar9 = *(float *)(lVar4 + 0x28);
    pfVar1 = (float *)(lVar5 + (longlong)iVar3 * 0x30);
    fVar27 = *pfVar1 - fVar7;
    fVar28 = pfVar1[1] - fVar8;
    fVar29 = pfVar1[2] - fVar9;
    pfVar2 = (float *)(lVar5 + (longlong)(iVar3 + 1) * 0x30);
    fVar24 = *pfVar1 - *pfVar2;
    fVar25 = pfVar1[1] - pfVar2[1];
    fVar26 = pfVar1[2] - pfVar2[2];
    fVar16 = fVar24 * fVar24;
    fVar17 = fVar25 * fVar25;
    fVar18 = fVar26 * fVar26;
    fVar21 = fVar17 + fVar16 + fVar18;
    fVar22 = fVar17 + fVar16 + fVar18;
    fVar23 = fVar17 + fVar16 + fVar18;
    fVar18 = fVar17 + fVar16 + fVar18;
    fVar16 = fVar24 * fVar27;
    fVar17 = fVar25 * fVar28;
    fVar19 = fVar26 * fVar29;
    auVar14._4_4_ = fVar16;
    auVar14._0_4_ = fVar16;
    auVar14._8_4_ = fVar16;
    auVar14._12_4_ = fVar16;
    auVar6._4_4_ = fVar22;
    auVar6._0_4_ = fVar21;
    auVar6._8_4_ = fVar23;
    auVar6._12_4_ = fVar18;
    auVar15 = rcpps(auVar14,auVar6);
    fVar21 = (2.0 - fVar21 * auVar15._0_4_) * auVar15._0_4_ * (fVar17 + fVar16 + fVar19);
    fVar22 = (2.0 - fVar22 * auVar15._4_4_) * auVar15._4_4_ * (fVar17 + fVar16 + fVar19);
    fVar23 = (2.0 - fVar23 * auVar15._8_4_) * auVar15._8_4_ * (fVar17 + fVar16 + fVar19);
    fVar16 = (2.0 - fVar18 * auVar15._12_4_) * auVar15._12_4_ * (fVar17 + fVar16 + fVar19);
    uVar10 = -(uint)(fVar21 < DAT_1467f06f0);
    uVar11 = -(uint)(fVar22 < fRam00000001467f06f4);
    uVar12 = -(uint)(fVar23 < fRam00000001467f06f8);
    uVar13 = -(uint)(fVar16 < fRam00000001467f06fc);
    auVar20._0_4_ = (uint)fVar21 & uVar10;
    auVar20._4_4_ = (uint)fVar22 & uVar11;
    auVar20._8_4_ = (uint)fVar23 & uVar12;
    auVar20._12_4_ = (uint)fVar16 & uVar13;
    auVar15._4_4_ = ~uVar11 & (uint)fRam00000001467f06f4;
    auVar15._0_4_ = ~uVar10 & (uint)DAT_1467f06f0;
    auVar15._8_4_ = ~uVar12 & (uint)fRam00000001467f06f8;
    auVar15._12_4_ = ~uVar13 & (uint)fRam00000001467f06fc;
    auVar15 = maxps(ZEXT816(0),auVar20 | auVar15);
    fVar16 = (fVar7 - ((fVar27 - auVar15._0_4_ * fVar24) + fVar7)) * *(float *)(lVar4 + 0x50);
    fVar17 = (fVar8 - ((fVar28 - auVar15._4_4_ * fVar25) + fVar8)) * *(float *)(lVar4 + 0x54);
    fVar18 = (fVar9 - ((fVar29 - auVar15._8_4_ * fVar26) + fVar9)) * *(float *)(lVar4 + 0x58);
    *(float *)(lVar4 + 0x20) =
         fVar7 - (fVar17 + fVar16 + fVar18) * local_res18 * *(float *)(lVar4 + 0x50);
    *(float *)(lVar4 + 0x24) =
         fVar8 - (fVar17 + fVar16 + fVar18) * local_res18 * *(float *)(lVar4 + 0x54);
    *(float *)(lVar4 + 0x28) =
         fVar9 - (fVar17 + fVar16 + fVar18) * local_res18 * *(float *)(lVar4 + 0x58);
    *(float *)(lVar4 + 0x2c) =
         *(float *)(lVar4 + 0x2c) -
         (fVar17 + fVar16 + fVar18) * local_res18 * *(float *)(lVar4 + 0x5c);
  }
  return;
}



// FUNCTION 1438676d0 FUN_1438676d0 body=199 status=ok
// SIG undefined FUN_1438676d0(void)

ulonglong FUN_1438676d0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 local_res8 [2];
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x20);
    uVar2 = *(uint *)(param_1 + 0x78);
    uVar4 = (ulonglong)uVar2;
    uVar6 = 0;
    if (0 < (int)uVar2) {
      uVar6 = uVar2;
    }
    if ((int)uVar6 < iVar1) {
      lVar7 = (longlong)(int)uVar6;
      if (lVar7 < iVar1) {
        lVar8 = lVar7 * 0x30;
        do {
          local_res8[0] =
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) + 0x24 + lVar8);
          lVar3 = FUN_14383df10(param_2 + 0x18,local_res8);
          uVar4 = 0;
          if ((lVar3 != 0) && (uVar4 = (ulonglong)*(int *)(lVar3 + 4), -1 < *(int *)(lVar3 + 4))) {
            bVar9 = (*(byte *)(*(longlong *)(param_2 + 0x18) + 4 + uVar4 * 8) & 0x22) != 0;
            uVar5 = (undefined7)((ulonglong)*(longlong *)(param_2 + 0x18) >> 8);
            uVar4 = CONCAT71(uVar5,bVar9);
            if (bVar9) {
              return CONCAT71(uVar5,1);
            }
          }
          lVar7 = lVar7 + 1;
          lVar8 = lVar8 + 0x30;
        } while (lVar7 < iVar1);
      }
      return uVar4 & 0xffffffffffffff00;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1438677a0 FUN_1438677a0 body=546 status=ok
// SIG undefined FUN_1438677a0(void)

undefined8 FUN_1438677a0(longlong param_1,longlong param_2,longlong param_3)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  undefined8 uVar16;
  float *pfVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(char *)(param_1 + 0x81) == '\x02') {
    return 0;
  }
  uVar18 = 0;
  uVar19 = uVar18;
  uVar21 = uVar18;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0xc0)) {
    do {
      plVar3 = *(longlong **)(uVar19 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8));
      cVar15 = (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      if (cVar15 == '\0') {
        return 0;
      }
      uVar20 = (int)uVar21 + 1;
      uVar19 = uVar19 + 8;
      uVar21 = (ulonglong)uVar20;
    } while ((int)uVar20 < *(int *)(*(longlong *)(param_1 + 0x10) + 0xc0));
  }
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (*(char *)(param_1 + 0x81) == '\x01') {
    *(undefined1 *)(lVar4 + 0x92) = 0;
    *(byte *)(lVar4 + 0x91) = *(byte *)(lVar4 + 0x91) | 4;
  }
  local_38 = *(undefined4 *)(param_1 + 0x74);
  uStack_34 = local_38;
  uStack_30 = local_38;
  uStack_2c = local_38;
  FUN_1438a3b70(param_3,*(longlong *)(param_1 + 8) + 0x120,*(undefined8 *)(param_1 + 0x10),lVar4,
                &local_38,*(undefined4 *)(param_1 + 0x78));
  if (*(int *)(lVar4 + 0x40) != -1) {
    iVar2 = *(int *)(lVar4 + 0x50);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      uVar16 = FUN_143703a50();
      uVar20 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
      if ((int)uVar20 < iVar2) {
        iVar7 = uVar20 * 2;
        iVar6 = iVar2;
        if (iVar2 < iVar7) {
          iVar6 = iVar7;
        }
        FUN_14370c310(uVar16,param_1 + 0x30,iVar6,0x20);
      }
      *(int *)(param_1 + 0x38) = iVar2;
      uVar19 = uVar18;
      uVar21 = uVar18;
      if (0 < iVar2) {
        do {
          pfVar1 = (float *)(uVar19 + *(longlong *)(lVar4 + 0x30));
          uVar20 = *(uint *)(*(longlong *)(lVar4 + 0x48) + uVar18 * 4) >> 0x16;
          if (((uVar20 == 0xffffffff) || (*(int *)(param_3 + 0x40) <= (int)uVar20)) ||
             (lVar5 = *(longlong *)((ulonglong)uVar20 * 0x100 + *(longlong *)(param_3 + 0x38)),
             lVar5 == 0)) {
            pfVar17 = (float *)&DAT_1467f0890;
          }
          else {
            pfVar17 = (float *)(lVar5 + 0x40);
          }
          fVar22 = *pfVar1 - pfVar17[0xc];
          fVar23 = pfVar1[1] - pfVar17[0xd];
          fVar24 = pfVar1[2] - pfVar17[0xe];
          fVar8 = pfVar17[8];
          fVar9 = pfVar17[9];
          fVar10 = pfVar17[10];
          fVar11 = pfVar17[0xb];
          uVar18 = uVar18 + 1;
          fVar12 = pfVar17[6];
          fVar13 = pfVar17[4];
          fVar14 = pfVar17[5];
          pfVar1 = (float *)(uVar21 + *(longlong *)(param_1 + 0x30));
          *pfVar1 = pfVar17[1] * fVar23 + fVar22 * *pfVar17 + pfVar17[2] * fVar24;
          pfVar1[1] = fVar14 * fVar23 + fVar22 * fVar13 + fVar12 * fVar24;
          pfVar1[2] = fVar9 * fVar23 + fVar22 * fVar8 + fVar10 * fVar24;
          pfVar1[3] = fVar11 * fVar23 + fVar22 * fVar9 + fVar11 * fVar24;
          *(uint *)(uVar21 + 0x10 + *(longlong *)(param_1 + 0x30)) = uVar20;
          uVar19 = uVar19 + 0x10;
          uVar21 = uVar21 + 0x20;
        } while ((longlong)uVar18 < (longlong)iVar2);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438679d0 FUN_1438679d0 body=340 status=ok
// SIG undefined FUN_1438679d0(void)

undefined8 FUN_1438679d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    return 0;
  }
  uVar10 = 0;
  uVar11 = uVar10;
  uVar13 = uVar10;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0xc0)) {
    do {
      plVar4 = *(longlong **)(uVar11 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8));
      cVar8 = (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
      if (cVar8 == '\0') {
        return 0;
      }
      uVar12 = (int)uVar13 + 1;
      uVar11 = uVar11 + 8;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(*(longlong *)(param_1 + 0x10) + 0xc0));
  }
  local_28 = *(undefined4 *)(param_1 + 0x74);
  lVar5 = *(longlong *)(param_2 + 0x18);
  uStack_24 = local_28;
  uStack_20 = local_28;
  uStack_1c = local_28;
  FUN_1438a3f40(param_3,*(undefined8 *)(param_1 + 0x10),lVar5,&local_28);
  iVar3 = *(int *)(lVar5 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
  if ((int)uVar12 < iVar3) {
    iVar7 = uVar12 * 2;
    iVar6 = iVar3;
    if (iVar3 < iVar7) {
      iVar6 = iVar7;
    }
    FUN_14370c310(uVar9,param_1 + 0x30,iVar6,0x20);
  }
  *(int *)(param_1 + 0x38) = iVar3;
  uVar11 = uVar10;
  uVar13 = uVar10;
  if (0 < iVar3) {
    do {
      puVar1 = (undefined8 *)(*(longlong *)(lVar5 + 0x30) + -0x10 + uVar13 + 0x10);
      uVar9 = puVar1[1];
      uVar12 = *(uint *)(*(longlong *)(lVar5 + 0x48) + uVar11 * 4);
      uVar11 = uVar11 + 1;
      puVar2 = (undefined8 *)(uVar10 + *(longlong *)(param_1 + 0x30));
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      *(uint *)(uVar10 + 0x10 + *(longlong *)(param_1 + 0x30)) = uVar12 >> 0x16;
      uVar10 = uVar10 + 0x20;
      uVar13 = uVar13 + 0x10;
    } while ((longlong)uVar11 < (longlong)iVar3);
  }
  return 1;
}



// FUNCTION 143867b30 FUN_143867b30 body=121 status=ok
// SIG undefined FUN_143867b30(void)

void FUN_143867b30(longlong param_1)

{
  longlong lVar1;
  uint local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x28) == '\x01')) {
    local_res8[0] = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x60);
    if (local_res8[0] != 0xffffffff) {
      local_res8[0] = local_res8[0] >> 0x16;
      FUN_1438ae1b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),local_res8,lVar1,
                    *(undefined8 *)(param_1 + 0x70));
      FUN_1438adf40(*(undefined8 *)(param_1 + 0x70));
      return;
    }
    FUN_1438ae410(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),lVar1,
                  *(undefined8 *)(param_1 + 0x70));
    FUN_1438adf40(*(undefined8 *)(param_1 + 0x70));
    return;
  }
  return;
}



// FUNCTION 143867bb0 FUN_143867bb0 body=25 status=ok
// SIG undefined FUN_143867bb0(void)

void FUN_143867bb0(longlong param_1)

{
  *(uint *)(*(longlong *)(param_1 + 0x28) + 0xb4) = (uint)*(byte *)(param_1 + 0x9d);
  *(undefined1 *)(param_1 + 0x9d) = 7;
  return;
}



// FUNCTION 143867bd0 FUN_143867bd0 body=155 status=ok
// SIG undefined FUN_143867bd0(void)

void FUN_143867bd0(longlong *param_1,undefined4 param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  uint local_c;
  
  if ((int)param_1[10] != 0) {
    local_18 = 0;
    local_10 = 0;
    local_c = 0x80000000;
    (**(code **)(*param_1 + 0x90))(param_1,&local_18);
    if (*(char *)((longlong)param_1 + 0x99) == '\x02') {
      (**(code **)(*param_1 + 0x60))();
    }
    else {
      (**(code **)(*param_1 + 0x48))(param_1,local_18,local_10,param_2);
    }
    local_10 = 0;
    if (-1 < (int)local_c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_18,0x10,local_c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 143867c70 FUN_143867c70 body=414 status=ok
// SIG undefined FUN_143867c70(void)

void FUN_143867c70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
  puVar4 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(int *)(param_1 + 0x30) = (int)param_2[1];
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if ((*(char *)(param_1 + 0x98) == '\0') || (*(char *)(param_1 + 0x99) == '\x02')) {
      if (lVar1 != *(longlong *)(param_1 + 0x68)) {
        if (*(longlong *)(param_1 + 0x68) != 0) {
          FUN_14370c150();
        }
        *(longlong *)(param_1 + 0x68) = lVar1;
      }
      lVar1 = *param_2;
      if (lVar1 != 0) {
        FUN_14370c030(lVar1);
      }
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(param_1 + 0x70) = lVar1;
      FUN_1438adf40(lVar1);
    }
    else {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      puVar3 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar2 + 0x58),0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = 0;
        *(undefined4 *)(puVar3 + 2) = 0x1ffff;
        *puVar3 = hkaiPath::vftable;
        puVar3[3] = 0;
        *(undefined4 *)(puVar3 + 4) = 0;
        *(undefined4 *)((longlong)puVar3 + 0x24) = 0x80000000;
        *(undefined1 *)(puVar3 + 5) = 1;
        puVar4 = puVar3;
      }
      FUN_1438ae5c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),*param_2,puVar4);
      if (puVar4 != *(undefined8 **)(param_1 + 0x68)) {
        if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
          FUN_14370c150();
        }
        *(undefined8 **)(param_1 + 0x68) = puVar4;
      }
      lVar1 = *param_2;
      if (lVar1 != *(longlong *)(param_1 + 0x70)) {
        if (*(longlong *)(param_1 + 0x70) != 0) {
          FUN_14370c150();
        }
        *(longlong *)(param_1 + 0x70) = lVar1;
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xb4) = 1;
    *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
    *(bool *)(param_1 + 0x9a) = *(int *)((longlong)param_2 + 0xc) != 0;
    FUN_143867b30(param_1,0);
  }
  return;
}



// FUNCTION 143867e10 FUN_143867e10 body=28 status=ok
// SIG undefined FUN_143867e10(void)

void FUN_143867e10(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x9d) = *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xb4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xb4) = 7;
  return;
}



// FUNCTION 143867e30 FUN_143867e30 body=1397 status=ok
// SIG undefined FUN_143867e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143867e30(longlong *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 local_c8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  
  lVar8 = param_1[0xf];
  lVar4 = param_1[5];
  iVar15 = *(int *)((longlong)param_1 + 0x7c);
  lVar16 = (longlong)iVar15;
  if ((*(int *)(lVar4 + 0xb4) == 5) ||
     (cVar9 = (**(code **)(*param_1 + 0xd8))(param_1,*(undefined4 *)(param_1[0xc] + 0x18)),
     cVar9 == '\0')) {
    if ((*(int *)(lVar4 + 0xb4) != 6) && ((int)param_1[0x10] == 6)) goto LAB_143867e99;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 5;
LAB_143867e99:
    (**(code **)(*param_1 + 0xa0))(param_1,0);
  }
  iVar2 = *(int *)(lVar4 + 0xc0);
  if (iVar2 < 1) {
    iVar15 = (int)param_1[0x10];
    if (iVar15 == 7) {
      (**(code **)(*param_1 + 0xb0))(param_1,0xffffffff);
      goto LAB_143868359;
    }
  }
  else {
    iVar3 = (int)param_1[6];
    uVar12 = 0;
    if (iVar3 == 0) {
      uVar11 = uVar12;
      uVar10 = uVar12;
      if (0 < iVar2) {
        do {
          plVar5 = *(longlong **)(uVar11 + *(longlong *)(lVar4 + 0xb8));
          (**(code **)(*plVar5 + 0x20))(plVar5,param_1,lVar4);
          uVar14 = (int)uVar10 + 1;
          uVar11 = uVar11 + 8;
          uVar10 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
      }
    }
    else if (iVar3 == 1) {
      uVar11 = uVar12;
      uVar10 = uVar12;
      if (0 < iVar2) {
        do {
          plVar5 = *(longlong **)(uVar11 + *(longlong *)(lVar4 + 0xb8));
          (**(code **)(*plVar5 + 0x18))(plVar5,param_1,lVar4,0);
          uVar14 = (int)uVar10 + 1;
          uVar11 = uVar11 + 8;
          uVar10 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
      }
    }
    else if (iVar3 == 2) {
      uVar11 = uVar12;
      uVar10 = uVar12;
      if (0 < iVar2) {
        do {
          plVar5 = *(longlong **)(uVar10 + *(longlong *)(lVar4 + 0xb8));
          (**(code **)(*plVar5 + 0x18))(plVar5,param_1,lVar4,1);
          uVar14 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar14;
          uVar10 = uVar10 + 8;
        } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
      }
    }
    else if ((iVar3 == 3) && (uVar11 = uVar12, uVar10 = uVar12, 0 < iVar2)) {
      do {
        plVar5 = *(longlong **)(uVar11 + *(longlong *)(lVar4 + 0xb8));
        (**(code **)(*plVar5 + 0x18))(plVar5,param_1,lVar4,2);
        uVar14 = (int)uVar10 + 1;
        uVar11 = uVar11 + 8;
        uVar10 = (ulonglong)uVar14;
      } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
    }
    if ((param_1[0xe] != 0) && (*(int *)(param_1[0xe] + 0x20) != 0)) {
      if (((int)param_1[0x10] == 7) && (*(int *)(lVar4 + 0xb4) != 7)) {
        (**(code **)(*param_1 + 0xb0))(param_1,0xffffffff);
      }
      if (lVar16 < (int)lVar8) {
        lVar13 = (lVar16 + 1) * 0x30;
        do {
          iVar15 = iVar15 + 1;
          if ((*(byte *)(*(longlong *)(param_1[0xe] + 0x18) + 0x28 + lVar13) & 3) != 0) {
            if (0 < *(int *)(lVar4 + 0xc0)) {
              uVar10 = uVar12;
              uVar11 = uVar12;
              do {
                plVar5 = *(longlong **)(uVar11 + *(longlong *)(lVar4 + 0xb8));
                (**(code **)(*plVar5 + 0x30))
                          (plVar5,param_1,lVar4,
                           *(longlong *)(param_1[0xe] + 0x18) + (longlong)iVar15 * 0x30);
                uVar14 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar14;
                uVar11 = uVar11 + 8;
              } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
            }
            lVar6 = *(longlong *)(param_1[0xe] + 0x18);
            if ((*(byte *)(lVar6 + 0x28 + lVar13) & 1) != 0) {
              lVar7 = *(longlong *)(param_1[0xd] + 0x18);
              FUN_143713730(&local_d8,
                            *(longlong *)
                             (*(longlong *)(*(longlong *)(param_1[4] + 0x130) + 0x38) +
                             (longlong)*(int *)(lVar7 + 0x54 + lVar13) * 0x100) + 0x40,
                            lVar7 + 0x30 + lVar13);
              pfVar1 = (float *)(lVar6 + lVar13);
              local_48 = param_1[4];
              local_58 = *pfVar1 - local_d8;
              fStack_54 = pfVar1[1] - fStack_d4;
              fStack_50 = pfVar1[2] - fStack_d0;
              local_c8[0] = *(undefined4 *)(lVar6 + 0x24 + lVar13);
              local_a8 = lVar6 + 0x20 + lVar13;
              local_b8 = *(undefined8 *)(lVar6 + lVar13);
              uStack_b0 = ((undefined8 *)(lVar6 + lVar13))[1];
              local_a0 = *(undefined4 *)(lVar7 + 0x54 + lVar13);
              local_78 = _DAT_1467f08a0;
              uStack_70 = uRam00000001467f08a8;
              local_88 = _DAT_1467f0890;
              uStack_80 = uRam00000001467f0898;
              local_68 = _DAT_1467f08b0;
              uStack_60 = uRam00000001467f08b8;
              uStack_4c = uRam00000001467f06fc;
              local_98 = 0;
              uStack_90 = 0;
              uVar11 = uVar12;
              uVar10 = uVar12;
              if (0 < *(int *)(lVar4 + 0xc0)) {
                do {
                  plVar5 = *(longlong **)(uVar11 + *(longlong *)(lVar4 + 0xb8));
                  (**(code **)(*plVar5 + 0x28))(plVar5,param_1,param_1[5],local_c8);
                  uVar14 = (int)uVar10 + 1;
                  uVar11 = uVar11 + 8;
                  uVar10 = (ulonglong)uVar14;
                } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
              }
            }
            if (param_1[0xe] == 0) break;
          }
          lVar16 = lVar16 + 1;
          lVar13 = lVar13 + 0x30;
        } while (lVar16 < (int)lVar8);
      }
      if (((int)param_1[0x10] == 7) != (*(int *)(lVar4 + 0xb4) == 7)) {
        *(int *)(param_1 + 0x10) = *(int *)(lVar4 + 0xb4);
      }
    }
    iVar15 = (int)param_1[0x10];
    if (*(int *)(lVar4 + 0xb4) == iVar15) goto LAB_143868359;
    if (iVar15 == 3) {
      if ((*(int *)(lVar4 + 0xb4) == 1) &&
         (*(undefined4 *)(lVar4 + 0xb4) = 2, uVar11 = uVar12, uVar10 = uVar12,
         0 < *(int *)(lVar4 + 0xc0))) {
        do {
          plVar5 = *(longlong **)(uVar11 + *(longlong *)(lVar4 + 0xb8));
          (**(code **)(*plVar5 + 8))(plVar5,param_1,lVar4);
          uVar14 = (int)uVar10 + 1;
          uVar11 = uVar11 + 8;
          uVar10 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
      }
      if ((*(int *)(lVar4 + 0xb4) == 2) &&
         (*(undefined4 *)(lVar4 + 0xb4) = 3, uVar11 = uVar12, 0 < *(int *)(lVar4 + 0xc0))) {
        do {
          plVar5 = *(longlong **)(uVar12 + *(longlong *)(lVar4 + 0xb8));
          (**(code **)(*plVar5 + 0x10))(plVar5,param_1,lVar4);
          uVar14 = (int)uVar11 + 1;
          uVar12 = uVar12 + 8;
          uVar11 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
      }
      goto LAB_143868359;
    }
    if (iVar15 == 2) {
      *(undefined4 *)(lVar4 + 0xb4) = 2;
      uVar11 = uVar12;
      if (0 < *(int *)(lVar4 + 0xc0)) {
        do {
          plVar5 = *(longlong **)(uVar12 + *(longlong *)(lVar4 + 0xb8));
          (**(code **)(*plVar5 + 8))(plVar5,param_1,lVar4);
          uVar14 = (int)uVar11 + 1;
          uVar12 = uVar12 + 8;
          uVar11 = (ulonglong)uVar14;
        } while ((int)uVar14 < *(int *)(lVar4 + 0xc0));
      }
      goto LAB_143868359;
    }
  }
  *(int *)(lVar4 + 0xb4) = iVar15;
LAB_143868359:
  if (*(char *)((longlong)param_1 + 0x99) == '\x01') {
    (**(code **)(*param_1 + 0xe0))(param_1);
  }
  *(int *)((longlong)param_1 + 0x7c) = (int)param_1[0xf];
  return;
}



// FUNCTION 1438683b0 FUN_1438683b0 body=898 status=ok
// SIG undefined FUN_1438683b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438683b0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
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
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_98 = *(undefined8 *)(lVar1 + 0x50);
  uStack_90 = *(undefined8 *)(lVar1 + 0x58);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_88 = *(float *)(param_1 + 0x88) * 1.25;
    fStack_84 = local_88;
    fStack_80 = local_88;
    fStack_7c = local_88;
    FUN_14387d980(lVar1,*(longlong *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78),&local_88,
                  &local_98);
    lVar1 = *(longlong *)(param_1 + 0x28);
    fVar11 = *(float *)(lVar1 + 0x50);
    fVar12 = *(float *)(lVar1 + 0x54);
    fVar24 = *(float *)(lVar1 + 0x58);
    fVar6 = (float)local_98 * fVar11;
    fVar7 = local_98._4_4_ * fVar12;
    fVar8 = (float)uStack_90 * fVar24;
    fVar13 = fVar7 + fVar6 + fVar8;
    fVar14 = fVar7 + fVar6 + fVar8;
    fVar16 = fVar7 + fVar6 + fVar8;
    fVar8 = fVar7 + fVar6 + fVar8;
    auVar9._8_4_ = 0x3f7fff58;
    auVar9._0_8_ = 0x3f7fff583f7fff58;
    auVar9._12_4_ = 0x3f7fff58;
    if (fVar13 <= 0.99999) {
      if (-0.99999 <= fVar13) {
        auVar5._4_4_ = fRam00000001467f07e4;
        auVar5._0_4_ = _DAT_1467f07e0;
        auVar5._8_4_ = fRam00000001467f07e8;
        auVar5._12_4_ = fRam00000001467f07ec;
        fVar7 = _DAT_1467f07e0 * fVar13 + _DAT_1467f07e0;
        fVar21 = fRam00000001467f07e4 * fVar14 + fRam00000001467f07e4;
        fVar22 = fRam00000001467f07e8 * fVar16 + fRam00000001467f07e8;
        fVar23 = fRam00000001467f07ec * fVar8 + fRam00000001467f07ec;
        auVar4._4_4_ = fVar21;
        auVar4._0_4_ = fVar7;
        auVar4._8_4_ = fVar22;
        auVar4._12_4_ = fVar23;
        auVar9 = rsqrtps(auVar9,auVar4);
        fVar18 = local_98._4_4_ * fVar11 - fVar12 * (float)local_98;
        fVar19 = (float)uStack_90 * fVar12 - fVar24 * local_98._4_4_;
        fVar20 = (float)local_98 * fVar24 - fVar11 * (float)uStack_90;
        fVar11 = auVar9._0_4_;
        fVar12 = auVar9._4_4_;
        fVar24 = auVar9._8_4_;
        fVar6 = auVar9._12_4_;
        auVar10._8_4_ = 0xbf7fbe77;
        auVar10._0_8_ = 0xbf7fbe77bf7fbe77;
        auVar10._12_4_ = 0xbf7fbe77;
        fVar11 = (float)(~-(uint)(fVar7 <= 0.0) &
                        (uint)((3.0 - fVar7 * fVar11 * fVar11) * fVar11 * 0.5)) * _DAT_1467f07e0;
        fVar12 = (float)(~-(uint)(fVar21 <= 0.0) &
                        (uint)((3.0 - fVar21 * fVar12 * fVar12) * fVar12 * 0.5)) *
                 fRam00000001467f07e4;
        fVar24 = (float)(~-(uint)(fVar22 <= 0.0) &
                        (uint)((3.0 - fVar22 * fVar24 * fVar24) * fVar24 * 0.5)) *
                 fRam00000001467f07e8;
        if (fVar13 < -0.999) {
          fVar7 = fVar7 - fVar13;
          fVar21 = fVar21 - fVar14;
          fVar22 = fVar22 - fVar16;
          fVar11 = fVar19 * fVar19;
          fVar12 = fVar20 * fVar20;
          fVar24 = fVar18 * fVar18;
          auVar2._4_4_ = fVar21;
          auVar2._0_4_ = fVar7;
          auVar2._8_4_ = fVar22;
          auVar2._12_4_ = fVar23 - fVar8;
          auVar9 = rsqrtps(auVar10,auVar2);
          fVar8 = auVar9._0_4_;
          fVar13 = auVar9._4_4_;
          fVar14 = auVar9._8_4_;
          fVar16 = fVar12 + fVar11 + fVar24;
          fVar15 = fVar12 + fVar11 + fVar24;
          fVar17 = fVar12 + fVar11 + fVar24;
          auVar3._4_4_ = fVar15;
          auVar3._0_4_ = fVar16;
          auVar3._8_4_ = fVar17;
          auVar3._12_4_ = fVar12 + fVar11 + fVar24;
          auVar9 = rsqrtps(auVar5,auVar3);
          fVar11 = auVar9._0_4_;
          fVar12 = auVar9._4_4_;
          fVar24 = auVar9._8_4_;
          fVar11 = (float)(~-(uint)(fVar7 <= 0.0) &
                          (uint)((3.0 - fVar7 * fVar8 * fVar8) * fVar8 * 0.5)) * fVar7 *
                   (float)(~-(uint)(fVar16 <= 0.0) &
                          (uint)((3.0 - fVar16 * fVar11 * fVar11) * fVar11 * 0.5));
          fVar12 = (float)(~-(uint)(fVar21 <= 0.0) &
                          (uint)((3.0 - fVar21 * fVar13 * fVar13) * fVar13 * 0.5)) * fVar21 *
                   (float)(~-(uint)(fVar15 <= 0.0) &
                          (uint)((3.0 - fVar15 * fVar12 * fVar12) * fVar12 * 0.5));
          fVar24 = (float)(~-(uint)(fVar22 <= 0.0) &
                          (uint)((3.0 - fVar22 * fVar14 * fVar14) * fVar14 * 0.5)) * fVar22 *
                   (float)(~-(uint)(fVar17 <= 0.0) &
                          (uint)((3.0 - fVar17 * fVar24 * fVar24) * fVar24 * 0.5));
        }
        local_a8 = CONCAT44(fVar20 * fVar12,fVar19 * fVar11);
        uStack_a0 = CONCAT44((float)(~-(uint)(fVar23 <= 0.0) &
                                    (uint)((3.0 - fVar23 * fVar6 * fVar6) * fVar6 * 0.5)) * fVar23,
                             fVar18 * fVar24);
      }
      else {
        FUN_14375e960(&local_a8);
      }
    }
    else {
      local_a8 = _DAT_1467f08c0;
      uStack_a0 = _DAT_1467f08c8;
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(float *)(lVar1 + 0x50) = (float)local_98;
    *(float *)(lVar1 + 0x54) = local_98._4_4_;
    *(float *)(lVar1 + 0x58) = (float)uStack_90;
    *(undefined4 *)(lVar1 + 0x5c) = uStack_90._4_4_;
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (*(char *)(*(longlong *)(lVar1 + 0xa0) + 0x38) == '\x01') {
      fVar11 = *(float *)(lVar1 + 0x30);
      fVar12 = *(float *)(lVar1 + 0x34);
      fVar24 = *(float *)(lVar1 + 0x38);
      fVar6 = *(float *)(lVar1 + 0x3c);
      fVar7 = (float)local_a8 * fVar11;
      fVar8 = local_a8._4_4_ * fVar12;
      fVar13 = (float)uStack_a0 * fVar24;
      fVar14 = (fVar8 + fVar7 + fVar13) * (float)local_a8 +
               (uStack_a0._4_4_ * uStack_a0._4_4_ - _DAT_1467f07e0) * fVar11 +
               (fVar24 * local_a8._4_4_ - (float)uStack_a0 * fVar12) * uStack_a0._4_4_;
      fVar16 = (fVar8 + fVar7 + fVar13) * local_a8._4_4_ +
               (uStack_a0._4_4_ * uStack_a0._4_4_ - fRam00000001467f07e4) * fVar12 +
               (fVar11 * (float)uStack_a0 - (float)local_a8 * fVar24) * uStack_a0._4_4_;
      fVar11 = (fVar8 + fVar7 + fVar13) * (float)uStack_a0 +
               (uStack_a0._4_4_ * uStack_a0._4_4_ - fRam00000001467f07e8) * fVar24 +
               (fVar12 * (float)local_a8 - local_a8._4_4_ * fVar11) * uStack_a0._4_4_;
      fVar12 = (fVar8 + fVar7 + fVar13) * uStack_a0._4_4_ +
               (uStack_a0._4_4_ * uStack_a0._4_4_ - fRam00000001467f07ec) * fVar6 +
               (fVar6 * uStack_a0._4_4_ - uStack_a0._4_4_ * fVar6) * uStack_a0._4_4_;
      *(float *)(lVar1 + 0x30) = fVar14 + fVar14;
      *(float *)(lVar1 + 0x34) = fVar16 + fVar16;
      *(float *)(lVar1 + 0x38) = fVar11 + fVar11;
      *(float *)(lVar1 + 0x3c) = fVar12 + fVar12;
    }
    lVar1 = *(longlong *)(param_1 + 0x28);
    fVar11 = *(float *)(lVar1 + 0x40);
    fVar12 = *(float *)(lVar1 + 0x44);
    fVar24 = *(float *)(lVar1 + 0x48);
    fVar6 = (float)local_a8 * fVar11;
    fVar7 = local_a8._4_4_ * fVar12;
    fVar8 = (float)uStack_a0 * fVar24;
    fVar13 = (fVar7 + fVar6 + fVar8) * (float)local_a8 +
             (uStack_a0._4_4_ * uStack_a0._4_4_ - _DAT_1467f07e0) * fVar11 +
             (fVar24 * local_a8._4_4_ - (float)uStack_a0 * fVar12) * uStack_a0._4_4_;
    fVar14 = (fVar7 + fVar6 + fVar8) * local_a8._4_4_ +
             (uStack_a0._4_4_ * uStack_a0._4_4_ - fRam00000001467f07e4) * fVar12 +
             (fVar11 * (float)uStack_a0 - (float)local_a8 * fVar24) * uStack_a0._4_4_;
    fVar11 = (fVar7 + fVar6 + fVar8) * (float)uStack_a0 +
             (uStack_a0._4_4_ * uStack_a0._4_4_ - fRam00000001467f07e8) * fVar24 +
             (fVar12 * (float)local_a8 - local_a8._4_4_ * fVar11) * uStack_a0._4_4_;
    *(float *)(lVar1 + 0x40) = fVar13 + fVar13;
    *(float *)(lVar1 + 0x44) = fVar14 + fVar14;
    *(float *)(lVar1 + 0x48) = fVar11 + fVar11;
    *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(lVar1 + 0x4c);
  }
  return;
}



// FUNCTION 143868740 FUN_143868740 body=377 status=ok
// SIG undefined FUN_143868740(void)

ulonglong FUN_143868740(longlong param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  ulonglong in_RAX;
  float *pfVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
LAB_1438688a7:
    return in_RAX & 0xffffffffffffff00;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 < 0) goto LAB_1438688a7;
  if (*(char *)(param_1 + 0x99) != '\x02') {
    pfVar4 = (float *)FUN_1438a3290(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20))
    ;
    if (pfVar4 != (float *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      fVar18 = *(float *)(lVar3 + 0x20) - pfVar4[0xc];
      fVar19 = *(float *)(lVar3 + 0x24) - pfVar4[0xd];
      fVar20 = *(float *)(lVar3 + 0x28) - pfVar4[0xe];
      fVar21 = pfVar4[1] * fVar19 + fVar18 * *pfVar4 + pfVar4[2] * fVar20;
      fVar22 = pfVar4[5] * fVar19 + fVar18 * pfVar4[4] + pfVar4[6] * fVar20;
      fVar18 = pfVar4[9] * fVar19 + fVar18 * pfVar4[8] + pfVar4[10] * fVar20;
      goto LAB_1438687ea;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  fVar21 = *(float *)(lVar3 + 0x20);
  fVar22 = *(float *)(lVar3 + 0x24);
  fVar18 = *(float *)(lVar3 + 0x28);
LAB_1438687ea:
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
  pfVar4 = (float *)(lVar3 + (longlong)iVar2 * 0x30);
  fVar21 = fVar21 - *pfVar4;
  fVar22 = fVar22 - pfVar4[1];
  fVar18 = fVar18 - pfVar4[2];
  lVar5 = (longlong)(iVar2 + 1) * 0x30;
  pfVar1 = (float *)(lVar5 + lVar3);
  fVar15 = *pfVar1 - *pfVar4;
  fVar16 = pfVar1[1] - pfVar4[1];
  fVar17 = pfVar1[2] - pfVar4[2];
  fVar19 = fVar15 * fVar15;
  fVar8 = fVar16 * fVar16;
  fVar10 = fVar17 * fVar17;
  fVar12 = fVar8 + fVar19 + fVar10;
  fVar13 = fVar8 + fVar19 + fVar10;
  fVar14 = fVar8 + fVar19 + fVar10;
  fVar20 = fVar21 * fVar15;
  fVar9 = fVar22 * fVar16;
  fVar11 = fVar18 * fVar17;
  auVar6._4_4_ = fVar20;
  auVar6._0_4_ = fVar20;
  auVar6._8_4_ = fVar20;
  auVar6._12_4_ = fVar20;
  auVar7._4_4_ = fVar13;
  auVar7._0_4_ = fVar12;
  auVar7._8_4_ = fVar14;
  auVar7._12_4_ = fVar8 + fVar19 + fVar10;
  auVar7 = rcpps(auVar6,auVar7);
  fVar21 = fVar21 - (2.0 - fVar12 * auVar7._0_4_) * auVar7._0_4_ * (fVar9 + fVar20 + fVar11) *
                    fVar15;
  fVar22 = fVar22 - (2.0 - fVar13 * auVar7._4_4_) * auVar7._4_4_ * (fVar9 + fVar20 + fVar11) *
                    fVar16;
  fVar18 = fVar18 - (2.0 - fVar14 * auVar7._8_4_) * auVar7._8_4_ * (fVar9 + fVar20 + fVar11) *
                    fVar17;
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),
                  param_2 * param_2 < fVar22 * fVar22 + fVar21 * fVar21 + fVar18 * fVar18);
}



// FUNCTION 1438688c0 FUN_1438688c0 body=1714 status=ok
// SIG undefined FUN_1438688c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438688c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  uint *puVar7;
  uint **ppuVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint local_res10;
  undefined4 local_res18 [2];
  longlong local_res20;
  longlong local_108;
  uint local_100;
  uint local_fc;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  int local_e0;
  uint local_dc;
  uint local_d8 [2];
  uint *local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *local_b8;
  int local_b0;
  int local_ac [9];
  LPVOID local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [40];
  
  local_res20 = param_4;
  local_88 = TlsGetValue(DAT_146b8198c);
  if (local_88 != (LPVOID)0x0) {
    FUN_14370d5c0(local_88,"TtcheckRepath");
  }
  uVar14 = 0;
  iVar17 = (int)(param_2[1] - *param_2 >> 3);
  lVar21 = (longlong)iVar17;
  if ((param_3 != 0) && (0 < iVar17)) {
    uVar13 = 1;
    uVar18 = uVar14;
    do {
      plVar3 = *(longlong **)(*param_2 + uVar18 * 8);
      cVar5 = (**(code **)(*plVar3 + 0x38))(plVar3,param_3);
      if (cVar5 != '\0') {
        puVar16 = (uint *)(*param_5 + ((longlong)(int)uVar14 >> 5) * 4);
        *puVar16 = *puVar16 | uVar13;
      }
      uVar14 = (ulonglong)((int)uVar14 + 1);
      uVar13 = uVar13 << 1 | (uint)((int)uVar13 < 0);
      uVar18 = uVar18 + 1;
      param_4 = local_res20;
    } while ((longlong)uVar18 < lVar21);
  }
  uVar14 = 0;
  if (param_4 == 0) goto LAB_143868f1c;
  lVar6 = *(longlong *)(param_4 + 0x18);
  lVar12 = (longlong)*(int *)(param_4 + 0x20) * 0x20 + lVar6;
  local_res10 = 0;
  uVar18 = uVar14;
  for (; lVar6 != lVar12; lVar6 = lVar6 + 0x20) {
    local_res10 = (int)uVar18 + *(int *)(lVar6 + 8);
    uVar18 = (ulonglong)local_res10;
  }
  local_108 = 0;
  local_dc = 0x80000000;
  local_100 = 0;
  local_fc = 0x80000000;
  local_e8 = 0;
  uVar19 = uVar14;
  uVar23 = uVar14;
  if (0 < lVar21) {
    do {
      local_e0 = 0;
      iVar17 = 0;
      if ((*(uint *)(*param_5 + ((longlong)(int)uVar19 >> 5) * 4) >> ((byte)uVar19 & 0x1f) & 1) == 0
         ) {
        plVar3 = *(longlong **)(*param_2 + uVar23 * 8);
        (**(code **)(*plVar3 + 0x30))(plVar3,&local_e8);
        iVar11 = local_e0 + local_100;
        if ((int)(local_fc & 0x3fffffff) < iVar11) {
          iVar4 = (local_fc & 0x3fffffff) * 2;
          if (iVar11 < iVar4) {
            iVar11 = iVar4;
          }
          FUN_14370c310(&PTR_vftable_1467f0638,&local_108,iVar11,0x20);
        }
        uVar14 = (ulonglong)local_100;
        lVar6 = (longlong)local_e0;
        if (0 < local_e0) {
          do {
            lVar12 = (longlong)iVar17 * 0x20 + local_e8;
            uVar13 = (uint)uVar14;
            if ((uint)uVar14 == (local_fc & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,&local_108,0x20);
              uVar13 = local_100;
            }
            local_100 = uVar13 + 1;
            FUN_143df9900((longlong)(int)uVar13 * 0x20 + local_108,lVar12,uVar19);
            uVar14 = (ulonglong)local_100;
            iVar17 = iVar17 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      uVar23 = uVar23 + 1;
      uVar19 = (ulonglong)((int)uVar19 + 1);
    } while ((longlong)uVar23 < lVar21);
    uVar18 = (ulonglong)local_res10;
    param_4 = local_res20;
  }
  uVar19 = 0;
  local_e0 = 0;
  if (-1 < (int)local_dc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_e8,0x20,local_dc & 0x3fffffff);
    uVar14 = (ulonglong)local_100;
  }
  local_e8 = 0;
  local_dc = 0x80000000;
  if ((int)uVar14 != 0) {
    iVar17 = (int)uVar18 + 4;
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 0x80000000;
    if (0 < iVar17) {
      if (iVar17 < 0) {
        iVar17 = 0;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,&local_f8,iVar17,0x20);
      uVar14 = (ulonglong)local_100;
    }
    uVar23 = uVar19;
    if (0 < *(int *)(param_4 + 0x20)) {
      do {
        puVar15 = *(undefined4 **)(uVar23 + *(longlong *)(param_4 + 0x18));
        puVar1 = puVar15 + *(int *)(uVar23 + 8 + *(longlong *)(param_4 + 0x18));
        if (puVar15 != puVar1) {
          do {
            uVar2 = *puVar15;
            local_78 = _DAT_1467f06e0;
            uStack_74 = uRam00000001467f06e4;
            uStack_70 = uRam00000001467f06e8;
            uStack_6c = DAT_1467f06ec;
            local_res18[0] = uVar2;
            FUN_143852340(*(undefined8 *)
                           ((longlong)(int)uVar19 * 0x100 + *(longlong *)(param_1 + 0x38)),
                          local_res18,&local_78,local_68);
            if (local_f0 == (local_ec & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,&local_f8,0x20);
            }
            lVar21 = (longlong)(int)local_f0;
            local_f0 = local_f0 + 1;
            FUN_143df9900(lVar21 * 0x20 + local_f8,local_68,uVar2);
            puVar15 = puVar15 + 1;
            param_4 = local_res20;
          } while (puVar15 != puVar1);
        }
        uVar13 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar13;
        uVar23 = uVar23 + 0x20;
      } while ((int)uVar13 < *(int *)(param_4 + 0x20));
      uVar14 = (ulonglong)local_100;
      uVar18 = (ulonglong)local_res10;
    }
    lVar21 = 4;
    uVar19 = uVar14;
    while( true ) {
      uVar13 = (uint)uVar19;
      if ((uint)uVar19 == (local_fc & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_108,0x20);
        uVar13 = local_100;
      }
      local_100 = uVar13 + 1;
      *(undefined4 *)((longlong)(int)uVar13 * 0x20 + local_108) = 0xffffffff;
      if (local_f0 == (local_ec & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,&local_f8,0x20);
      }
      lVar6 = (longlong)(int)local_f0;
      local_f0 = local_f0 + 1;
      *(undefined4 *)(lVar6 * 0x20 + local_f8) = 0xffffffff;
      lVar21 = lVar21 + -1;
      if (lVar21 == 0) break;
      uVar19 = (ulonglong)local_100;
    }
    FUN_143df9960(local_108,uVar14);
    FUN_143df9960(local_f8,uVar18);
    FUN_143df97b0(local_d8,local_108,uVar14,local_f8,(int)uVar18);
    uVar13 = local_d8[0];
    puVar16 = local_d0;
LAB_143868d70:
    do {
      local_d0 = puVar16;
      local_d8[0] = uVar13;
      if ((local_b0 < 1) || (local_ac[0] < 1)) goto LAB_143868e88;
      puVar16 = local_c0;
      if (local_d8[0] != 0) {
        puVar16 = local_c8;
      }
      puVar20 = (uint *)(*param_5 + ((longlong)(int)puVar16[3] >> 5) * 4);
      *puVar20 = *puVar20 | 1 << ((byte)puVar16[3] & 0x1f);
      puVar7 = local_c8 + 8;
      puVar10 = puVar7;
      puVar20 = local_d0;
      uVar22 = local_d8[0];
      do {
        if (*puVar10 < puVar20[4]) {
          do {
            uVar13 = uVar22;
            puVar16 = puVar20;
            local_c8 = puVar10;
            if (-1 < (int)(puVar20[5] - puVar10[1] | puVar20[6] - puVar10[2] |
                           puVar10[5] - puVar20[1] | puVar10[6] - puVar20[2])) goto LAB_143868d70;
            puVar10 = puVar10 + 8;
          } while (*puVar10 < puVar20[4]);
        }
        ppuVar8 = &local_c0;
        if (uVar22 != 0) {
          ppuVar8 = &local_b8;
        }
        *ppuVar8 = *ppuVar8 + 8;
        piVar9 = &local_b0;
        if (uVar22 != 0) {
          piVar9 = local_ac;
        }
        *piVar9 = *piVar9 + -1;
        uVar22 = (uint)(*local_b8 < *local_c0);
        puVar10 = local_b8;
        puVar20 = local_c0;
        if (*local_b8 < *local_c0) {
          puVar10 = local_c0;
          puVar20 = local_b8;
        }
        local_c8 = puVar7;
        if (local_b0 < 1) goto LAB_143868e88;
        uVar13 = local_d8[0];
        puVar16 = local_d0;
      } while (0 < local_ac[0]);
    } while( true );
  }
LAB_143868eba:
  local_e0 = 0;
  if (-1 < (int)local_dc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_e8,0x20,local_dc & 0x3fffffff);
  }
  local_e8 = 0;
  local_dc = 0x80000000;
  local_100 = 0;
  if (-1 < (int)local_fc) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_108,0x20,local_fc & 0x3fffffff);
  }
LAB_143868f1c:
  if (local_88 != (LPVOID)0x0) {
    FUN_14370d750(local_88,&DAT_145b8eda0);
  }
  return;
LAB_143868e88:
  local_f0 = 0;
  if (-1 < (int)local_ec) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_f8,0x20,local_ec & 0x3fffffff);
  }
  goto LAB_143868eba;
}



// FUNCTION 143868f80 FUN_143868f80 body=146 status=ok
// SIG undefined FUN_143868f80(void)

void FUN_143868f80(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x70))();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x78))(param_1,iVar3);
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,param_2,8);
      }
      iVar3 = iVar3 + 1;
      *(undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8) = uVar2;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    } while (iVar3 < iVar1);
  }
  return;
}



// FUNCTION 143869020 FUN_143869020 body=660 status=ok
// SIG undefined FUN_143869020(void)

void FUN_143869020(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_58;
  uint local_50;
  uint local_4c;
  undefined4 *local_48;
  uint local_40;
  int local_38;
  
  uVar14 = 0;
  local_58 = (undefined4 *)0x0;
  local_50 = 0;
  local_4c = 0x80000000;
  iVar7 = (int)(param_2[1] - *param_2 >> 3);
  uVar11 = iVar7 + 0x1f >> 5;
  local_40 = uVar11;
  if (uVar11 == 0) {
    local_48 = (undefined4 *)0x0;
  }
  else {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    uVar6 = uVar11 * 4 + 0x7f & 0xffffff80;
    local_48 = *(undefined4 **)((longlong)pvVar3 + 0x18);
    uVar13 = (longlong)(int)uVar6 + (longlong)local_48;
    if ((*(int *)((longlong)pvVar3 + 0x10) < (int)uVar6) ||
       (*(ulonglong *)((longlong)pvVar3 + 0x20) < uVar13)) {
      local_48 = (undefined4 *)FUN_1437138c0(pvVar3);
    }
    else {
      *(ulonglong *)((longlong)pvVar3 + 0x18) = uVar13;
    }
  }
  local_4c = uVar11 | 0x80000000;
  local_58 = local_48;
  local_38 = iVar7;
  uVar4 = FUN_143703a50();
  if ((int)(local_4c & 0x3fffffff) < (int)uVar11) {
    uVar2 = (local_4c & 0x3fffffff) * 2;
    uVar6 = uVar11;
    if ((int)uVar11 < (int)uVar2) {
      uVar6 = uVar2;
    }
    FUN_14370c310(uVar4,&local_58,uVar6,4);
  }
  if (-1 < (int)(uVar11 - 1)) {
    puVar12 = local_58;
    for (uVar13 = (ulonglong)uVar11; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  }
  local_68 = *param_2;
  uStack_60 = (undefined4)param_2[1];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_50 = uVar11;
  FUN_1438688c0(param_1,&local_68,param_3,param_4,&local_58);
  if (local_50 != 0) {
    iVar7 = local_38 + -1;
    local_68 = (longlong)(iVar7 >> 5);
    uVar11 = 0xffffffff;
    uVar13 = local_68 - 1;
    uVar5 = uVar14;
    uVar15 = uVar14;
    puVar12 = local_58;
    uVar6 = ~(iVar7 >> 0x1f) & 1;
    do {
      if ((longlong)uVar5 < local_68) {
        puVar8 = puVar12 + uVar5;
        iVar10 = ((int)uVar14 + (int)uVar15) * 0x20;
        lVar9 = local_68 - uVar5;
        do {
          uVar2 = *puVar8 & uVar11;
          while (uVar2 != 0) {
            uVar2 = (-uVar2 & uVar2) - 1;
            uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
            uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
            uVar2 = ((uVar2 >> 4) + uVar2 & 0xf0f0f0f) * 0x1010101;
            uVar11 = uVar11 & -2 << ((byte)(uVar2 >> 0x18) & 0x1f);
            plVar1 = *(longlong **)(*param_2 + (longlong)(int)(iVar10 + (uVar2 >> 0x18)) * 8);
            (**(code **)(*plVar1 + 0xa0))(plVar1,0);
            uVar2 = *puVar8 & uVar11;
          }
          iVar10 = iVar10 + 0x20;
          puVar8 = puVar8 + 1;
          uVar11 = 0xffffffff;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar11 = uVar11 & (~(-1 << ((byte)iVar7 & 0x1f)) * 2 | 1U);
      uVar15 = (ulonglong)((int)uVar15 + 1);
      puVar12 = puVar12 + 1;
      uVar14 = (ulonglong)((iVar7 >> 5) - 1);
      bVar16 = uVar6 != 0;
      uVar5 = uVar13;
      uVar6 = uVar6 - 1;
    } while (bVar16);
  }
  FUN_1437f12e0(&local_58);
  return;
}



// FUNCTION 1438692c0 FUN_1438692c0 body=16 status=ok
// SIG undefined FUN_1438692c0(void)

void FUN_1438692c0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001438692cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 1438692d0 FUN_1438692d0 body=16 status=ok
// SIG undefined FUN_1438692d0(void)

void FUN_1438692d0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001438692dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 1438692e0 FUN_1438692e0 body=35 status=ok
// SIG undefined FUN_1438692e0(void)

undefined8 * FUN_1438692e0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiAabbTreeNavVolumeMediator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 143869310 FUN_143869310 body=70 status=ok
// SIG undefined FUN_143869310(void)

void FUN_143869310(undefined8 *param_1)

{
  *param_1 = hkaiAabbTreeNavVolumeMediator::vftable;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  *param_1 = hkaiNavVolumeMediator::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143869360 FUN_143869360 body=484 status=ok
// SIG undefined FUN_143869360(void)

uint * FUN_143869360(longlong param_1,uint *param_2,undefined4 *param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  LPVOID pvVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined **local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 *local_20;
  
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar6,"TtgetClosestPoint");
  }
  lVar3 = *(longlong *)(param_3 + 6);
  if (lVar3 == 0) {
LAB_1438693e7:
    local_48 = (float)param_3[8];
    fStack_44 = (float)param_3[9];
    fStack_40 = (float)param_3[10];
    fStack_3c = (float)param_3[0xb];
    local_38 = NavVolumeClosestPointCollector::vftable;
    local_30 = *(undefined8 *)(param_1 + 0x18);
    if (lVar3 != 0) {
      local_48 = local_48 - *(float *)(lVar3 + 0x40);
      fStack_44 = fStack_44 - *(float *)(lVar3 + 0x44);
      fStack_40 = fStack_40 - *(float *)(lVar3 + 0x48);
      fStack_3c = fStack_3c - *(float *)(lVar3 + 0x4c);
      bVar1 = (&DAT_145dc9a30)[*(byte *)(lVar3 + 0x30)];
      if (bVar1 != 0) {
        uVar8 = (uint)bVar1;
        uVar9 = -(uint)(0x16a8300 << uVar8 < 0);
        uVar10 = -(uint)(0x502ab000 << uVar8 < 0);
        uVar11 = -(uint)(0xa2a8c00 << uVar8 < 0);
        uVar12 = -(uint)(0xa154c00 << uVar8 < 0);
        uVar13 = -(uint)(0x1554300 << uVar8 < 0);
        uVar14 = -(uint)(0x50157000 << uVar8 < 0);
        uVar8 = (uint)local_48 & uVar11;
        uVar15 = (uint)local_48 & uVar13;
        uVar16 = (uint)fStack_44 & uVar14;
        uVar7 = (ulonglong)bVar1;
        local_48 = (float)((0xae71e0U >> uVar7) << 0x1f ^
                          (~uVar12 & ((uint)fStack_44 & uVar9 | ~uVar9 & (uint)local_48) |
                          (uint)fStack_40 & uVar12));
        fStack_44 = (float)((0xb9e306U >> uVar7) << 0x1f ^
                           (~uVar13 & ((uint)fStack_40 & uVar10 | ~uVar10 & (uint)fStack_44) |
                           uVar15));
        fStack_40 = (float)((0xeb903cU >> uVar7) << 0x1f ^
                           (~uVar14 & (uVar8 | ~uVar11 & (uint)fStack_40) | uVar16));
        fStack_3c = (float)((0U >> uVar7) << 0x1f ^ (uint)fStack_3c);
      }
    }
    local_28 = lVar3;
    local_20 = param_3;
    thunk_FUN_143719c70(0xa3e942f4);
    uVar8 = TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
            ::Execute(*(undefined8 *)(param_1 + 0x20),&local_48,param_3 + 0xc,&local_38,param_4);
    if (uVar8 != 0xffffffff) {
      iVar5 = 0;
      if (*(longlong *)(param_3 + 6) != 0) {
        iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_3 + 6) + 0x18) + 0x94);
        iVar5 = 0;
        if (0 < iVar2) {
          iVar5 = iVar2;
        }
      }
      local_38 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
      *param_2 = iVar5 << 0x16 | uVar8;
      goto LAB_143869513;
    }
    local_38 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  }
  else if (((uint)param_3[1] >> (*(uint *)(*(longlong *)(lVar3 + 0x18) + 0x98) & 0x1f) & 1) != 0) {
    plVar4 = *(longlong **)(param_3 + 4);
    if (plVar4 != (longlong *)0x0) {
      iVar5 = (**(code **)(*plVar4 + 0x28))(plVar4,lVar3,*param_3,*(undefined8 *)(param_3 + 2));
      if (iVar5 == 0) goto LAB_14386950c;
    }
    goto LAB_1438693e7;
  }
LAB_14386950c:
  *param_2 = 0xffffffff;
LAB_143869513:
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d750(pvVar6,&DAT_145b8eda0);
  }
  return param_2;
}



// FUNCTION 143869550 FUN_143869550 body=304 status=ok
// SIG undefined FUN_143869550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_143869550(longlong param_1,float *param_2,int param_3,undefined8 param_4,
                     undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_res18 [4];
  
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  plVar2 = *(longlong **)(puVar1 + 4);
  if (plVar2 != (longlong *)0x0) {
    local_res18[0] = param_3;
    iVar9 = (**(code **)(*plVar2 + 0x30))
                      (plVar2,*(undefined8 *)(param_1 + 0x10),local_res18,*puVar1,
                       *(undefined8 *)(puVar1 + 2));
    uVar8 = uRam00000001467f08d8;
    if (iVar9 == 0) {
      *(undefined8 *)param_2 = _DAT_1467f08d0;
      *(undefined8 *)(param_2 + 2) = uVar8;
      return param_2;
    }
  }
  lVar3 = *(longlong *)(param_1 + 8);
  auVar12 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x18) + (longlong)param_3 * 0x18);
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar12._0_10_;
  auVar5._12_2_ = auVar12._6_2_;
  auVar6._8_2_ = auVar12._4_2_;
  auVar6._0_8_ = auVar12._0_8_;
  auVar6._10_4_ = auVar5._10_4_;
  auVar7._6_8_ = 0;
  auVar7._0_6_ = auVar6._8_6_;
  auVar11._4_4_ =
       ((float)auVar12._10_2_ + 0.0) * *(float *)(lVar3 + 0x94) + *(float *)(lVar3 + 0xa4);
  auVar11._0_4_ = ((float)auVar12._8_2_ + 0.0) * *(float *)(lVar3 + 0x90) + *(float *)(lVar3 + 0xa0)
  ;
  auVar11._8_4_ =
       ((float)auVar12._12_2_ + 0.0) * *(float *)(lVar3 + 0x98) + *(float *)(lVar3 + 0xa8);
  auVar11._12_4_ =
       ((float)auVar12._14_2_ + 0.0) * *(float *)(lVar3 + 0x9c) + *(float *)(lVar3 + 0xac);
  auVar11 = minps(*param_5,auVar11);
  auVar4._4_4_ = ((float)(int)CONCAT82(SUB148(auVar7 << 0x40,6),auVar12._2_2_) + 0.0) *
                 *(float *)(lVar3 + 0x94) + *(float *)(lVar3 + 0xa4);
  auVar4._0_4_ = ((float)auVar12._0_2_ + 0.0) * *(float *)(lVar3 + 0x90) + *(float *)(lVar3 + 0xa0);
  auVar4._8_4_ = ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) *
                 *(float *)(lVar3 + 0x98) + *(float *)(lVar3 + 0xa8);
  auVar4._12_4_ =
       ((float)(auVar5._10_4_ >> 0x10) + 0.0) * *(float *)(lVar3 + 0x9c) + *(float *)(lVar3 + 0xac);
  auVar12 = maxps(auVar11,auVar4);
  *param_6 = auVar12;
  fVar10 = auVar12._0_4_ - *(float *)*param_5;
  fVar13 = auVar12._4_4_ - *(float *)(*param_5 + 4);
  fVar14 = auVar12._8_4_ - *(float *)(*param_5 + 8);
  fVar10 = fVar10 * fVar10;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  *param_2 = fVar13 + fVar10 + fVar14;
  param_2[1] = fVar13 + fVar10 + fVar14;
  param_2[2] = fVar13 + fVar10 + fVar14;
  param_2[3] = fVar13 + fVar10 + fVar14;
  return param_2;
}



// FUNCTION 143869680 FUN_143869680 body=774 status=ok
// SIG undefined FUN_143869680(void)

void FUN_143869680(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  LPVOID pvVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint local_res10 [2];
  longlong local_68;
  int local_60;
  uint local_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TtqueryAabb");
  }
  lVar9 = *(longlong *)(param_2 + 6);
  if ((lVar9 == 0) ||
     ((((uint)param_2[1] >> (*(uint *)(*(longlong *)(lVar9 + 0x18) + 0x98) & 0x1f) & 1) != 0 &&
      ((plVar2 = *(longlong **)(param_2 + 4), plVar2 == (longlong *)0x0 ||
       (iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar9,*param_2,*(undefined8 *)(param_2 + 2)),
       iVar5 != 0)))))) {
    lVar3 = *(longlong *)(param_2 + 6);
    _local_58 = *(undefined1 (*) [16])(param_2 + 8);
    _local_48 = *(undefined1 (*) [16])(param_2 + 0xc);
    if (lVar3 != 0) {
      local_58._0_4_ = *(float *)*(undefined1 (*) [16])(param_2 + 8) - *(float *)(lVar3 + 0x40);
      local_58._4_4_ = (float)param_2[9] - *(float *)(lVar3 + 0x44);
      fStack_50 = (float)param_2[10] - *(float *)(lVar3 + 0x48);
      fStack_4c = (float)param_2[0xb] - *(float *)(lVar3 + 0x4c);
      local_48._0_4_ = *(float *)*(undefined1 (*) [16])(param_2 + 0xc) - *(float *)(lVar3 + 0x40);
      local_48._4_4_ = (float)param_2[0xd] - *(float *)(lVar3 + 0x44);
      fStack_40 = (float)param_2[0xe] - *(float *)(lVar3 + 0x48);
      fStack_3c = (float)param_2[0xf] - *(float *)(lVar3 + 0x4c);
      bVar1 = (&DAT_145dc9a30)[*(byte *)(lVar3 + 0x30)];
      if (bVar1 != 0) {
        uVar21 = (uint)bVar1;
        uVar15 = -(uint)(0x16a8300 << uVar21 < 0);
        uVar16 = -(uint)(0x502ab000 << uVar21 < 0);
        uVar17 = -(uint)(0xa2a8c00 << uVar21 < 0);
        uVar18 = -(uint)(0xa154c00 << uVar21 < 0);
        uVar19 = -(uint)(0x1554300 << uVar21 < 0);
        uVar20 = -(uint)(0x50157000 << uVar21 < 0);
        uVar21 = -(uint)(0 << uVar21 < 0);
        auVar14._0_4_ = (uint)fStack_50 & uVar18;
        auVar14._4_4_ = local_58._0_4_ & uVar19;
        auVar14._8_4_ = local_58._4_4_ & uVar20;
        auVar14._12_4_ = (uint)fStack_4c & uVar21;
        auVar13._0_4_ = ~uVar18 & (local_58._4_4_ & uVar15 | ~uVar15 & local_58._0_4_);
        auVar13._4_4_ = ~uVar19 & ((uint)fStack_50 & uVar16 | ~uVar16 & local_58._4_4_);
        auVar13._8_4_ = ~uVar20 & (local_58._0_4_ & uVar17 | ~uVar17 & (uint)fStack_50);
        auVar13._12_4_ = ~uVar21 & (uint)fStack_4c;
        uVar10 = (ulonglong)bVar1;
        auVar12._0_4_ = (0xae71e0U >> uVar10) << 0x1f;
        auVar12._4_4_ = (0xb9e306U >> uVar10) << 0x1f;
        auVar12._8_4_ = (0xeb903cU >> uVar10) << 0x1f;
        auVar12._12_4_ = (0U >> uVar10) << 0x1f;
        auVar14 = (auVar13 | auVar14) ^ auVar12;
        auVar11._0_4_ = ~uVar18 & (local_48._4_4_ & uVar15 | ~uVar15 & local_48._0_4_);
        auVar11._4_4_ = ~uVar19 & ((uint)fStack_40 & uVar16 | ~uVar16 & local_48._4_4_);
        auVar11._8_4_ = ~uVar20 & (local_48._0_4_ & uVar17 | ~uVar17 & (uint)fStack_40);
        auVar11._12_4_ = ~uVar21 & (uint)fStack_3c;
        auVar4._4_4_ = local_48._0_4_ & uVar19;
        auVar4._0_4_ = (uint)fStack_40 & uVar18;
        auVar4._8_4_ = local_48._4_4_ & uVar20;
        auVar4._12_4_ = (uint)fStack_3c & uVar21;
        auVar12 = (auVar11 | auVar4) ^ auVar12;
        _local_58 = minps(auVar14,auVar12);
        _local_48 = maxps(auVar14,auVar12);
      }
    }
    iVar5 = 0;
    if (lVar9 != 0) {
      iVar8 = *(int *)(*(longlong *)(lVar9 + 0x18) + 0x94);
      iVar5 = 0;
      if (0 < iVar8) {
        iVar5 = iVar8;
      }
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 0x80000000;
    TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,<lambda_293053dacb5d798d06c5e34f30b628ec>_>
    ::Execute(*(undefined8 *)(param_1 + 0x20),local_58,&local_68);
    uVar21 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    iVar8 = (int)param_3[1] + local_60;
    if ((int)uVar21 < iVar8) {
      iVar6 = uVar21 * 2;
      if (iVar8 < iVar6) {
        iVar8 = iVar6;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar8,4);
    }
    iVar8 = 0;
    if (0 < local_60) {
      lVar9 = 0;
      do {
        plVar2 = *(longlong **)(param_2 + 4);
        uVar21 = *(uint *)(local_68 + lVar9);
        if ((plVar2 == (longlong *)0x0) ||
           (local_res10[0] = uVar21,
           iVar6 = (**(code **)(*plVar2 + 0x30))
                             (plVar2,*(undefined8 *)(param_2 + 6),local_res10,*param_2,
                              *(undefined8 *)(param_2 + 2)), iVar6 != 0)) {
          *(uint *)(*param_3 + (longlong)(int)param_3[1] * 4) = iVar5 << 0x16 | uVar21;
          *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        }
        iVar8 = iVar8 + 1;
        lVar9 = lVar9 + 4;
      } while (iVar8 < local_60);
    }
    local_60 = 0;
    if (-1 < (int)local_5c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_68,4,local_5c & 0x3fffffff);
    }
    local_68 = 0;
    local_5c = 0x80000000;
  }
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d750(pvVar7,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143869990 Stop body=9 status=ok
// SIG undefined Stop(void)

void CAkVPLSrcNode::Stop(longlong param_1)

{
  FUN_14370c030(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 1438699a0 FUN_1438699a0 body=9 status=ok
// SIG undefined FUN_1438699a0(void)

void FUN_1438699a0(longlong param_1)

{
  FUN_14370c030(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1438699b0 FUN_1438699b0 body=139 status=ok
// SIG undefined FUN_1438699b0(void)

void FUN_1438699b0(longlong param_1)

{
  FUN_14370c030(*(undefined8 *)(param_1 + 0x10));
  FUN_14370c030(*(undefined8 *)(param_1 + 0x18));
  FUN_14370c030(*(undefined8 *)(param_1 + 0x20));
  FUN_14370c100(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),
                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20) * 8 >> 3,8);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c030();
  }
  FUN_14370c030(*(undefined8 *)(param_1 + 0x30));
  FUN_14370c100(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),
                (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x20) * 8 >> 3,8);
  return;
}



// FUNCTION 143869a40 FUN_143869a40 body=79 status=ok
// SIG undefined FUN_143869a40(void)

void FUN_143869a40(longlong param_1)

{
  FUN_14370c030(*(undefined8 *)(param_1 + 0x10));
  FUN_14370c030(*(undefined8 *)(param_1 + 0x18));
  FUN_14370c030(*(undefined8 *)(param_1 + 0x20));
  FUN_14370c100(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),
                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20) * 8 >> 3,8);
  return;
}



// FUNCTION 143869a90 FUN_143869a90 body=282 status=ok
// SIG undefined FUN_143869a90(void)

void FUN_143869a90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_28;
  int local_20;
  uint local_1c;
  longlong local_18;
  longlong lStack_10;
  
  thunk_FUN_143719c70(0x84dd9089);
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_18 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  lStack_10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x20) * 0xe0 + local_18;
  FUN_1438317d0(&local_18,param_2,&local_28,0x3d4ccccd);
  thunk_FUN_143719c70(0xf4fab4e);
  lStack_10 = (longlong)local_20 * 0x50 + local_28;
  local_18 = local_28;
  if (*(int *)(param_1 + 0x10) == -1) {
    FUN_143863c90(param_4,&local_18);
  }
  else {
    FUN_143863bf0(param_4,*(undefined4 *)(param_1 + 0x10),&local_18);
  }
  thunk_FUN_143719c70(0xcc38c1cb);
  uVar1 = FUN_143703a50();
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(uVar1,local_28,0x50,local_1c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143869bb0 FUN_143869bb0 body=167 status=ok
// SIG undefined FUN_143869bb0(void)

void FUN_143869bb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong local_18;
  longlong lStack_10;
  
  thunk_FUN_143719c70(0xaf9e2647);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x10) == -1) {
    local_18 = *(longlong *)(lVar1 + 0x18);
    lStack_10 = (longlong)*(int *)(lVar1 + 0x20) * 0x50 + local_18;
    FUN_143863c90(param_4,&local_18);
  }
  else {
    local_18 = *(longlong *)(lVar1 + 0x18);
    lStack_10 = (longlong)*(int *)(lVar1 + 0x20) * 0x50 + local_18;
    FUN_143863bf0(param_4,*(undefined4 *)(param_1 + 0x10),&local_18);
  }
  thunk_FUN_143719c70(0xf5d6a376);
  return;
}



// FUNCTION 143869c60 FUN_143869c60 body=58 status=ok
// SIG undefined FUN_143869c60(void)

void FUN_143869c60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_143719c70(0x6ebd075e);
  FUN_1438713a0(param_3,*(undefined8 *)(param_1 + 0x10));
  thunk_FUN_143719c70(0xd6fcff21);
  return;
}



// FUNCTION 143869cb0 FUN_143869cb0 body=173 status=ok
// SIG undefined FUN_143869cb0(void)

void FUN_143869cb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  longlong lVar2;
  undefined2 local_res8;
  undefined4 local_28 [4];
  longlong local_18;
  longlong lStack_10;
  
  thunk_FUN_143719c70(0x36cae262);
  local_18 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  lStack_10 = local_18 + (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x20) * 8;
  FUN_14383eb30(param_2,*(undefined8 *)(param_1 + 0x10),&local_18,
                CONCAT71((int7)((ulonglong)local_18 >> 8),1));
  local_28[0] = *(undefined4 *)(param_1 + 0x20);
  lVar2 = CONCAT44(param_5._4_4_,(int)param_5);
  local_res8 = (ushort)local_res8._1_1_ << 8;
  FUN_143845b10(lVar2 + 0x18,&param_5,local_28,&local_res8);
  lVar2 = *(longlong *)(lVar2 + 0x18);
  pbVar1 = (byte *)(lVar2 + 4 + (longlong)(int)param_5 * 8);
  *pbVar1 = *pbVar1 | 4;
  *(undefined1 *)(lVar2 + 5 + (longlong)(int)param_5 * 8) = 1;
  thunk_FUN_143719c70(0x924a287b);
  return;
}



// FUNCTION 143869d60 FUN_143869d60 body=461 status=ok
// SIG undefined FUN_143869d60(void)

void FUN_143869d60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_res8 [2];
  longlong *plVar5;
  undefined4 uVar6;
  int local_58;
  undefined4 uStack_54;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  thunk_FUN_143719c70(0x41758ba4);
  local_48 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
  lStack_40 = local_48 + (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x20) * 8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
  lStack_50 = lVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20) * 8;
  plVar5 = &local_48;
  uStack_54 = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_58 = (int)lVar2;
  FUN_14383e700(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_58,
                *(undefined8 *)(param_1 + 0x28),plVar5,3);
  uVar6 = (undefined4)((ulonglong)plVar5 >> 0x20);
  thunk_FUN_143719c70(0x311e2299);
  lVar2 = *(longlong *)(param_1 + 0x10);
  FUN_14375e570(local_38,lVar2 + 0x40);
  local_28 = *(undefined4 *)(lVar2 + 0x70);
  uStack_24 = *(undefined4 *)(lVar2 + 0x74);
  uStack_20 = *(undefined4 *)(lVar2 + 0x78);
  uStack_1c = *(undefined4 *)(lVar2 + 0x7c);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  local_res8[0] = *(uint *)(param_1 + 0x38);
  FUN_143871020(param_3,local_res8,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(param_1 + 0x18),
                local_38,CONCAT44(uVar6,*(undefined4 *)(lVar2 + 0x180)));
  thunk_FUN_143719c70(0xe53c1507);
  local_res8[0] = *(uint *)(param_1 + 0x38);
  FUN_143864680(param_4,local_res8,*(undefined8 *)(param_1 + 0x10));
  thunk_FUN_143719c70(0xadfa23a0);
  lVar3 = CONCAT44(param_5._4_4_,CONCAT22(param_5._2_2_,CONCAT11(param_5._1_1_,(undefined1)param_5))
                  );
  _local_58 = CONCAT44(uStack_54,*(undefined4 *)(param_1 + 0x38));
  local_res8[0] = local_res8[0] & 0xffffff00;
  FUN_143845b10(lVar3 + 0x18,&param_5,&local_58,local_res8);
  lVar4 = (longlong)CONCAT22(param_5._2_2_,CONCAT11(param_5._1_1_,(undefined1)param_5));
  lVar2 = *(longlong *)(lVar3 + 0x18);
  pbVar1 = (byte *)(lVar2 + 4 + lVar4 * 8);
  *pbVar1 = *pbVar1 | 1;
  *(undefined1 *)(lVar2 + 5 + lVar4 * 8) = 1;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_143719c70(0xad2ce5cd);
    local_res8[0] = *(uint *)(param_1 + 0x38);
    param_5._0_1_ = 0;
    FUN_143845b10(lVar3 + 0x18,&local_58,local_res8,&param_5);
    lVar2 = *(longlong *)(lVar3 + 0x18);
    pbVar1 = (byte *)(lVar2 + 4 + (longlong)local_58 * 8);
    *pbVar1 = *pbVar1 | 4;
    *(undefined1 *)(lVar2 + 5 + (longlong)local_58 * 8) = 1;
  }
  thunk_FUN_143719c70(0xda54497a);
  return;
}



// FUNCTION 143869f30 FUN_143869f30 body=188 status=ok
// SIG undefined FUN_143869f30(void)

void FUN_143869f30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  longlong lVar2;
  undefined2 local_res8;
  undefined4 local_28 [4];
  longlong local_18;
  longlong lStack_10;
  
  thunk_FUN_143719c70(0xd178bb30);
  local_18 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
  lStack_10 = local_18 + (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20) * 8;
  FUN_14383ef80(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),&local_18,1)
  ;
  local_28[0] = *(undefined4 *)(param_1 + 0x28);
  lVar2 = CONCAT44(param_5._4_4_,(int)param_5);
  local_res8 = (ushort)local_res8._1_1_ << 8;
  FUN_143845b10(lVar2 + 0x18,&param_5,local_28,&local_res8);
  lVar2 = *(longlong *)(lVar2 + 0x18);
  pbVar1 = (byte *)(lVar2 + 4 + (longlong)(int)param_5 * 8);
  *pbVar1 = *pbVar1 | 0x10;
  *(undefined1 *)(lVar2 + 5 + (longlong)(int)param_5 * 8) = 1;
  thunk_FUN_143719c70(0x4f9fb4a4);
  return;
}



// FUNCTION 143869ff0 FUN_143869ff0 body=57 status=ok
// SIG undefined FUN_143869ff0(void)

void FUN_143869ff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_143719c70(0xa370f740);
  FUN_143864d10(param_4,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_143719c70(0x1d65e3c1);
  return;
}



// FUNCTION 14386a030 FUN_14386a030 body=58 status=ok
// SIG undefined FUN_14386a030(void)

void FUN_14386a030(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_143719c70(0x48148f71);
  FUN_143873530(param_3,*(undefined8 *)(param_1 + 0x10));
  thunk_FUN_143719c70(0x44c78fca);
  return;
}



// FUNCTION 14386a070 FUN_14386a070 body=106 status=ok
// SIG undefined FUN_14386a070(void)

void FUN_14386a070(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 local_res8 [2];
  
  thunk_FUN_143719c70(0xec1d1972);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143841130(param_2,local_res8,1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143847840(param_5,local_res8,4,8,1);
  thunk_FUN_143719c70(0x297665c8);
  return;
}



// FUNCTION 14386a0e0 FUN_14386a0e0 body=292 status=ok
// SIG undefined FUN_14386a0e0(void)

void FUN_14386a0e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  thunk_FUN_143719c70(0x8a43661);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143863ce0(param_4,local_res8);
  thunk_FUN_143719c70(0x4ecbf7d2);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143865080(param_4,local_res8);
  thunk_FUN_143719c70(0x6cb8ea63);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143873430(param_3,local_res8);
  thunk_FUN_143719c70(0x94a3a18b);
  uVar1 = 2;
  if (*(char *)(param_1 + 0x14) != '\0') {
    uVar1 = 3;
  }
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143841050(param_2,local_res8,uVar1);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143847840(param_5,local_res8,1,2,1);
  if (*(char *)(param_1 + 0x14) != '\0') {
    thunk_FUN_143719c70(0x278e5a9);
    local_res8[0] = *(undefined4 *)(param_1 + 0x10);
    FUN_143847840(param_5,local_res8,4,8,1);
  }
  thunk_FUN_143719c70(0x584b9c28);
  return;
}



// FUNCTION 14386a210 FUN_14386a210 body=103 status=ok
// SIG undefined FUN_14386a210(void)

void FUN_14386a210(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 local_res8 [2];
  
  thunk_FUN_143719c70(0x396c6d11);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143841370(param_2,local_res8);
  local_res8[0] = *(undefined4 *)(param_1 + 0x10);
  FUN_143847840(param_5,local_res8,0x10,0x20,1);
  thunk_FUN_143719c70(0xfa952f39);
  return;
}



// FUNCTION 14386a280 FUN_14386a280 body=24 status=ok
// SIG undefined FUN_14386a280(void)

void FUN_14386a280(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014386a296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&LAB_14386a2d4 + (ulonglong)*(ushort *)(param_1 + 4) * 4)))();
  return;
}



// FUNCTION 14386a310 FUN_14386a310 body=24 status=ok
// SIG undefined FUN_14386a310(void)

void FUN_14386a310(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014386a326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_14386a9e8 + (ulonglong)*(ushort *)(param_2 + 4) * 4)))();
  return;
}



// FUNCTION 14386ab70 Stop body=9 status=ok
// SIG undefined Stop(void)

void CAkVPLSrcNode::Stop(longlong param_1)

{
  FUN_14370c150(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14386ab90 FUN_14386ab90 body=9 status=ok
// SIG undefined FUN_14386ab90(void)

void FUN_14386ab90(longlong param_1)

{
  FUN_14370c150(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14386aba0 FUN_14386aba0 body=148 status=ok
// SIG undefined FUN_14386aba0(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000147060106) overlaps instruction at (ram,0x000147060105)
    */
/* WARNING: Removing unreachable block (ram,0x000147060073) */
/* WARNING: Removing unreachable block (ram,0x0001470600b4) */
/* WARNING: Removing unreachable block (ram,0x0001470600f5) */

void FUN_14386aba0(longlong param_1)

{
  char *pcVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar12;
  byte bVar13;
  char *pcVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong unaff_RBX;
  ulonglong *puVar14;
  undefined1 *unaff_RBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  ulonglong auStack_28 [5];
  
  bVar13 = *(byte *)((longlong)&UINT_14386ac84 + (ulonglong)*(ushort *)(param_1 + 4));
  puVar9 = (undefined1 *)(ulonglong)bVar13;
  pcVar7 = IMAGE_DOS_HEADER_140000000.e_magic +
           (&switchD_14386abbf::switchdataD_14386ac2c)[(longlong)puVar9];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar13) {
  case 0:
    FUN_14386ad40();
    return;
  case 1:
    return;
  case 2:
    FUN_14386acf0();
    return;
  case 3:
    FUN_14386add0();
    return;
  case 4:
    CAkVPLSrcNode::Stop();
    return;
  case 5:
    CAkVPLSrcNode::Stop();
    return;
  case 6:
    FUN_14386ab90();
    return;
  case 7:
    FUN_14386ab90();
    return;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    FUN_14386ab90();
    return;
  case 0xc:
    FUN_14386ab90();
    return;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    FUN_14386ab90();
    return;
  case 0x11:
    FUN_14386ab90();
    return;
  case 0x12:
    FUN_14386ae20();
    return;
  case 0x13:
    FUN_14386ab90();
    return;
  case 0x14:
    FUN_14386ab90();
    return;
  case 0x15:
    FUN_14386ab90();
    return;
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    *unaff_RDI = *unaff_RDI + (char)unaff_RBX;
    *(char *)(unaff_RBX + 0xff00000000) =
         *(char *)(unaff_RBX + 0xff00000000) + (char)((ulonglong)pcVar7 >> 8);
    uVar3 = in((short)pcVar7);
    *(undefined4 *)unaff_RDI = uVar3;
    *unaff_RBP = *unaff_RBP;
    *puVar9 = *puVar9;
    *unaff_RSI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x18:
    uRama2e0a2d8a2d0a2c8 = uRamc0a2b8a2b0a2a8a2;
    auStack_28[3] = 0x147060133;
    bRama260a258a250a248 = bVar13;
    bRama298a290a288a280 = bVar13;
    uVar11 = func_0x00013fa8f1d5();
    uRama318a310a308a300 = (undefined1)uVar11;
    bVar13 = (byte)(uVar11 >> 8);
    *(byte *)(unaff_RBX + -0x5ccf5cd8) = *(byte *)(unaff_RBX + -0x5ccf5cd8) & bVar13;
    puVar14 = auStack_28 + 3;
    uRama370a368a360a358 = (undefined4)uVar11;
    bVar13 = *(char *)(unaff_RBX + -0x5cb75cc0) - bVar13;
    auStack_28[3] = uVar11;
    while ((char)bVar13 < '\0') {
      uRama228a220a218a210 = (undefined1)uVar11;
      while( true ) {
        pbVar2 = (byte *)(pcVar7 + -0x5dbf5dc8);
        bVar13 = (byte)(uVar11 >> 8);
        *pbVar2 = *pbVar2 ^ bVar13;
        uVar6 = (undefined1)uVar11;
        uRama268a260a258a250 = uVar6;
        if (-1 < (char)*pbVar2) break;
        *(byte *)(param_1 + -0x5ee75ef0) = *(byte *)(param_1 + -0x5ee75ef0) | bVar13;
        puVar9 = (undefined1 *)puVar14;
        while( true ) {
          bVar13 = (byte)(uVar11 >> 8);
          *(byte *)(param_1 + -0x5ecf5ed8) = *(byte *)(param_1 + -0x5ecf5ed8) & bVar13;
          cVar5 = *(char *)(param_1 + -0x5eb75ec0);
          puVar14 = (ulonglong *)(puVar9 + -8);
          *(ulonglong *)(puVar9 + -8) = uVar11;
          if (-1 < (char)(cVar5 - bVar13)) break;
          pcVar1 = (char *)((ulonglong)
                            CONCAT31((int3)((uint)uRama170a168a160a158 >> 8),uRama020a018a010a008) -
                           0x5fc75fd0);
          *pcVar1 = *pcVar1 - (char)((uint)uRama170a168a160a158 >> 8);
          *(undefined8 *)(puVar9 + -0x10) = 0x78a070a0;
          *(undefined8 *)(puVar9 + -0x18) = 0x1470600b3;
          uVar10 = func_0x00013fa6f153();
          uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),uRama118a110a108a100);
          puVar9 = puVar9 + -0x10;
        }
        *(byte *)(param_1 + -0x5e6f5e78) = *(byte *)(param_1 + -0x5e6f5e78) & 0x98;
        *(undefined1 *)(param_1 + -0x5e2f5e38) = 0;
        uVar11 = (ulonglong)uRama1f8a1f0a1e8a1e0;
        pbVar2 = (byte *)(pcVar7 + -0x5def5df8);
        bVar13 = *pbVar2;
        bVar12 = (byte)(uRama1f8a1f0a1e8a1e0 >> 8);
        *pbVar2 = *pbVar2 + bVar12;
        pcVar7[-0x5dd75de0] = (pcVar7[-0x5dd75de0] - bVar12) - CARRY1(bVar13,bVar12);
      }
      pcVar7[-0x5d6f5d78] = pcVar7[-0x5d6f5d78] & 0x98;
      uRama2b8a2b0a2a8a2a0 = uVar6;
      pcVar7[-0x5d2f5d38] = 0;
      pbVar2 = (byte *)(unaff_RBX + -0x5cef5cf8);
      bVar12 = *pbVar2;
      uRama2f8a2f0a2e8a2e0 = uVar6;
      *pbVar2 = *pbVar2 + bVar13;
      *(char *)(unaff_RBX + -0x5cd75ce0) =
           (*(char *)(unaff_RBX + -0x5cd75ce0) - bVar13) - CARRY1(bVar12,bVar13);
      pbVar2 = (byte *)(unaff_RBX + -0x5cbf5cc8);
      *pbVar2 = *pbVar2 ^ bVar13;
      uRama368a360a358a350 = uVar11;
      bVar13 = *pbVar2;
    }
    *(byte *)(unaff_RBX + -0x5c6f5c78) = *(byte *)(unaff_RBX + -0x5c6f5c78) & 0x98;
    uRama3f8a3f0a3e8a3e0 = (undefined4)uVar11;
    uRama3b8a3b0a3a8a3a0 = uRama3f8a3f0a3e8a3e0;
    *(undefined1 *)(unaff_RBX + -0x5c2f5c38) = 0;
    pcVar7 = (char *)(uVar11 + 0x18a410a4 + param_1);
    bVar13 = (byte)(uVar11 >> 8);
    *pcVar7 = *pcVar7 + bVar13;
    *unaff_RDI = *unaff_RSI;
    unaff_RBP[uVar11 + 0x38a430a4] = unaff_RBP[uVar11 + 0x38a430a4] & bVar13;
    unaff_RDI[1] = unaff_RSI[1];
    unaff_RDI[2] = unaff_RSI[2];
    unaff_RDI[3] = unaff_RSI[3];
    *(ulonglong *)((longlong)puVar14 + -8) = uVar11;
    unaff_RDI[4] = unaff_RSI[4];
    unaff_RDI[5] = unaff_RSI[5];
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    pcVar7 = (char *)((ulonglong)*unaff_RSI & 0xffffffffffffffa0);
    cVar5 = (char)pcVar7;
    *pcVar7 = *pcVar7 + cVar5;
    pcVar7[-0x77] = pcVar7[-0x77] + (char)param_1;
    *(char *)(ulonglong)CONCAT11(0x24,cVar5) = *(char *)(ulonglong)CONCAT11(0x24,cVar5) + cVar5;
    auStack_28[4] = 0x14101011e;
    FWeakObjectPtr::operator=();
    auStack_28[4] = 0x14101012e;
    FWeakObjectPtr::operator=(&stack0x00000090);
    uVar4 = uStack0000000000000098;
    uVar3 = uStack0000000000000090;
    in_stack_00000050 = 0;
    in_stack_00000060 = 0;
    auStack_28[4] = 0x141010163;
    puVar8 = (undefined8 *)FUN_140438ef0(0x20,&stack0x00000030);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_FUN_144605c80;
      puVar8[1] = unaff_RBX;
      *(undefined4 *)(puVar8 + 2) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uStack0000000000000094;
      *(undefined4 *)(puVar8 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack000000000000009c;
    }
    auStack_28[4] = 0x14101019c;
    FUN_14208c5d0();
    return;
  }
  FUN_14370c150(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 14386acf0 FUN_14386acf0 body=70 status=ok
// SIG undefined FUN_14386acf0(void)

void FUN_14386acf0(longlong param_1)

{
  FUN_14370c150(*(undefined8 *)(param_1 + 0x10));
  FUN_14370c1c0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18),
                (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x20) * 8 >> 3,8);
  FUN_14370c150(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14386ad40 FUN_14386ad40 body=139 status=ok
// SIG undefined FUN_14386ad40(void)

void FUN_14386ad40(longlong param_1)

{
  FUN_14370c150(*(undefined8 *)(param_1 + 0x10));
  FUN_14370c150(*(undefined8 *)(param_1 + 0x18));
  FUN_14370c1c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),
                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20) * 8 >> 3,8);
  FUN_14370c150(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  FUN_14370c1c0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18),
                (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x20) * 8 >> 3,8);
  FUN_14370c150(*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 14386add0 FUN_14386add0 body=79 status=ok
// SIG undefined FUN_14386add0(void)

void FUN_14386add0(longlong param_1)

{
  FUN_14370c150(*(undefined8 *)(param_1 + 0x10));
  FUN_14370c150(*(undefined8 *)(param_1 + 0x18));
  FUN_14370c1c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18),
                (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20) * 8 >> 3,8);
  FUN_14370c150(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14386ae20 FUN_14386ae20 body=32 status=ok
// SIG undefined FUN_14386ae20(void)

void FUN_14386ae20(longlong param_1)

{
  FUN_14370c150(*(undefined8 *)(param_1 + 0x10));
  FUN_14370c150(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 14386ae40 FUN_14386ae40 body=197 status=ok
// SIG undefined FUN_14386ae40(void)

void FUN_14386ae40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = hkaiSingleCharacterBehavior::vftable;
  param_1[3] = hkaiSingleCharacterBehavior::vftable;
  FUN_14386af10();
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],0x20,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  if (param_1[8] != 0) {
    FUN_14370c150();
  }
  if (param_1[7] != 0) {
    FUN_14370c150();
  }
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  *param_1 = hkaiBehavior::vftable;
  param_1[3] = hkaiBehavior::vftable;
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[3] = hkaiPathRequestInfoOwner::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14386af10 FUN_14386af10 body=70 status=ok
// SIG undefined FUN_14386af10(void)

void FUN_14386af10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1438a07e0(*(longlong *)(param_1 + 0x20),param_1 + 0x18);
    FUN_1438a07f0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14386af60 FUN_14386af60 body=52 status=ok
// SIG undefined FUN_14386af60(void)

longlong FUN_14386af60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
    lVar1 = FUN_1438a0800(*(undefined8 *)(param_1 + 0x20),param_1 + 0x18);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
      lVar1 = 0;
    }
  }
  return lVar1;
}



// FUNCTION 14386afa0 FUN_14386afa0 body=52 status=ok
// SIG undefined FUN_14386afa0(void)

longlong FUN_14386afa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
    lVar1 = FUN_1438a0810(*(undefined8 *)(param_1 + 0x20),param_1 + 0x18);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
      lVar1 = 0;
    }
  }
  return lVar1;
}



// FUNCTION 14386afe0 FUN_14386afe0 body=246 status=ok
// SIG undefined FUN_14386afe0(void)

void FUN_14386afe0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
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
  uint uVar20;
  float *pfVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
  
  iVar1 = *(int *)(param_1 + 0x50);
  lVar23 = (longlong)iVar1;
  uVar20 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar20 < iVar1) {
    iVar4 = uVar20 * 2;
    iVar3 = iVar1;
    if (iVar1 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar3,0x10);
  }
  if (0 < iVar1) {
    lVar24 = 0;
    do {
      pfVar21 = (float *)(lVar24 + *(longlong *)(param_1 + 0x48));
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      fVar7 = pfVar21[2];
      iVar1 = *(int *)(lVar24 + 0x10 + *(longlong *)(param_1 + 0x48));
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x130);
      if (((iVar1 == -1) || (*(int *)(lVar2 + 0x40) <= iVar1)) ||
         (lVar2 = *(longlong *)((longlong)iVar1 * 0x100 + *(longlong *)(lVar2 + 0x38)), lVar2 == 0))
      {
        pfVar21 = (float *)&DAT_1467f0890;
      }
      else {
        pfVar21 = (float *)(lVar2 + 0x40);
      }
      lVar24 = lVar24 + 0x20;
      fVar8 = pfVar21[5];
      fVar9 = pfVar21[6];
      fVar10 = pfVar21[7];
      fVar11 = pfVar21[1];
      fVar12 = pfVar21[2];
      fVar13 = pfVar21[3];
      fVar14 = pfVar21[9];
      fVar15 = pfVar21[10];
      fVar16 = pfVar21[0xb];
      fVar17 = pfVar21[0xd];
      fVar18 = pfVar21[0xe];
      fVar19 = pfVar21[0xf];
      pfVar22 = (float *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *pfVar22 = fVar6 * pfVar21[4] + fVar5 * *pfVar21 + fVar7 * pfVar21[8] + pfVar21[0xc];
      pfVar22[1] = fVar6 * fVar8 + fVar5 * fVar11 + fVar7 * fVar14 + fVar17;
      pfVar22[2] = fVar6 * fVar9 + fVar5 * fVar12 + fVar7 * fVar15 + fVar18;
      pfVar22[3] = fVar6 * fVar10 + fVar5 * fVar13 + fVar7 * fVar16 + fVar19;
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  return;
}



// FUNCTION 14386b0e0 FUN_14386b0e0 body=581 status=ok
// SIG undefined FUN_14386b0e0(void)

undefined8 FUN_14386b0e0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **local_158;
  undefined8 local_150;
  undefined4 local_148;
  longlong local_140;
  undefined ***pppuStack_138;
  longlong *local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined **local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_a8 [144];
  
  plVar1 = param_1 + 3;
  plVar4 = plVar1;
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  FUN_1438a07e0(param_1[4],plVar4);
  lVar3 = FUN_1438a2ea0(param_1[4],param_1[5],*param_2,*(undefined4 *)(param_2 + 1));
  local_d0 = 0x7f7fffee;
  local_110 = 0;
  local_108 = 0x1ffff;
  local_100 = 0;
  local_118 = hkaiPathfindingUtil::FindPathOutput::vftable;
  local_158 = hkaiNavMeshPathRequestInfo::vftable;
  local_140 = 0;
  if (lVar3 != 0) {
    local_140 = lVar3;
  }
  local_f8 = 0;
  pppuStack_138 = (undefined ***)0x0;
  local_f4 = 0x80000000;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_d8 = 0;
  local_d4 = 0xffffffff;
  local_cc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x80000000;
  local_150 = 0;
  local_148 = 0x1ffff;
  local_130 = (longlong *)0x0;
  local_128 = 0;
  local_124 = 0xff;
  FUN_14370c030(&local_118);
  if (pppuStack_138 != (undefined ***)0x0) {
    FUN_14370c150();
  }
  pppuStack_138 = &local_118;
  local_128 = 0;
  local_130 = plVar1;
  cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,&local_158,*(undefined8 *)(param_1[4] + 0x130));
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    lVar3 = param_1[5];
    *(undefined4 *)(lVar3 + 0x60) = *(undefined4 *)(local_140 + 0x40);
    *(undefined4 *)(lVar3 + 100) = 0xffffffff;
    FUN_143842cb0(*(undefined8 *)(param_1[4] + 0x130),local_140,pppuStack_138);
    puVar6 = local_a8;
    if ((undefined1 *)param_2[3] != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_2[3];
    }
    FUN_14370c030(&local_158);
    if (param_1[7] != 0) {
      FUN_14370c150();
    }
    param_1[7] = (longlong)&local_158;
    (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)((longlong)param_2 + 0xc),puVar6,1);
    if (param_1[7] != 0) {
      FUN_14370c150();
    }
    param_1[7] = 0;
    if (*(char *)(param_2 + 2) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,*(undefined4 *)((longlong)param_2 + 0xc));
    }
    uVar5 = 1;
  }
  if (pppuStack_138 != (undefined ***)0x0) {
    FUN_14370c150();
  }
  if (local_140 != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(&local_158);
  FUN_142f8bad0(&local_118);
  return uVar5;
}



// FUNCTION 14386b330 FUN_14386b330 body=559 status=ok
// SIG undefined FUN_14386b330(void)

undefined8 FUN_14386b330(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined **local_158;
  undefined8 local_150;
  undefined4 local_148;
  longlong local_140;
  undefined ***pppuStack_138;
  longlong *local_130;
  undefined4 local_128;
  undefined2 local_124;
  undefined **local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_a8 [144];
  
  plVar1 = param_1 + 3;
  plVar4 = plVar1;
  if (param_1 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  FUN_1438a07f0(param_1[4],plVar4);
  lVar3 = FUN_1438a2ff0(param_1[4],param_1[5],*param_2,*(undefined4 *)(param_2 + 1));
  local_c0 = 0x7f7fffee;
  local_110 = 0;
  local_108 = 0x1ffff;
  local_100 = 0;
  local_118 = hkaiVolumePathfindingUtil::FindPathOutput::vftable;
  local_158 = hkaiNavVolumePathRequestInfo::vftable;
  local_140 = 0;
  if (lVar3 != 0) {
    local_140 = lVar3;
  }
  local_f8 = 0;
  pppuStack_138 = (undefined ***)0x0;
  local_f4 = 0x80000000;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x80000000;
  local_c8 = 0;
  local_c4 = 0xffffffff;
  local_bc = 0;
  local_150 = 0;
  local_148 = 0x1ffff;
  local_130 = (longlong *)0x0;
  local_128 = 0;
  local_124 = 0xff;
  FUN_14370c030(&local_118);
  if (pppuStack_138 != (undefined ***)0x0) {
    FUN_14370c150();
  }
  pppuStack_138 = &local_118;
  local_128 = 0;
  local_130 = plVar1;
  cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,&local_158,*(undefined8 *)(param_1[4] + 0x130));
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_143875580(*(undefined8 *)(param_1[4] + 0x130),local_140,pppuStack_138);
    puVar6 = local_a8;
    if ((undefined1 *)param_2[3] != (undefined1 *)0x0) {
      puVar6 = (undefined1 *)param_2[3];
    }
    FUN_14370c030(&local_158);
    if (param_1[8] != 0) {
      FUN_14370c150();
    }
    param_1[8] = (longlong)&local_158;
    (**(code **)(*param_1 + 0x18))(param_1,*(undefined4 *)((longlong)param_2 + 0xc),puVar6,1);
    if (param_1[8] != 0) {
      FUN_14370c150();
    }
    param_1[8] = 0;
    if (*(char *)(param_2 + 2) != '\0') {
      (**(code **)(*param_1 + 0x20))(param_1,*(undefined4 *)((longlong)param_2 + 0xc));
    }
    uVar5 = 1;
  }
  if (pppuStack_138 != (undefined ***)0x0) {
    FUN_14370c150();
  }
  if (local_140 != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(&local_158);
  FUN_14382c0f0(&local_118);
  return uVar5;
}



// FUNCTION 14386b560 FUN_14386b560 body=20 status=ok
// SIG undefined FUN_14386b560(void)

undefined8 FUN_14386b560(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),
                  *(int *)(*(longlong *)(param_1 + 0x28) + 0xb4) - 2U < 2);
}



// FUNCTION 14386b580 FUN_14386b580 body=150 status=ok
// SIG undefined FUN_14386b580(void)

void FUN_14386b580(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_1438a07e0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x18);
  iVar3 = param_4;
  if ((lVar1 != 0) && (iVar3 = *(int *)(lVar1 + 0x30), *(int *)(lVar1 + 0x30) < param_4)) {
    iVar3 = param_4;
  }
  uVar2 = FUN_1438a2ea0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,
                        param_3);
  FUN_1438a0840(*(longlong *)(param_1 + 0x20),param_1 + 0x18,uVar2,
                *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x278),iVar3);
  FUN_14370c150(uVar2);
  return;
}



// FUNCTION 14386b620 FUN_14386b620 body=150 status=ok
// SIG undefined FUN_14386b620(void)

void FUN_14386b620(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_1438a07f0(*(undefined8 *)(param_1 + 0x20),param_1 + 0x18);
  iVar3 = param_4;
  if ((lVar1 != 0) && (iVar3 = *(int *)(lVar1 + 0x30), *(int *)(lVar1 + 0x30) < param_4)) {
    iVar3 = param_4;
  }
  uVar2 = FUN_1438a2ff0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2,
                        param_3);
  FUN_1438a0860(*(longlong *)(param_1 + 0x20),param_1 + 0x18,uVar2,
                *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x278),iVar3);
  FUN_14370c150(uVar2);
  return;
}



// FUNCTION 14386b6c0 FUN_14386b6c0 body=70 status=ok
// SIG undefined FUN_14386b6c0(void)

undefined8 * FUN_14386b6c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  param_1[1] = 0;
  *param_1 = hkaiDefaultAstarCostModifier::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  puVar2 = (undefined2 *)((longlong)param_1 + 0x1c);
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0x3f80;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}



// FUNCTION 14386b710 FUN_14386b710 body=74 status=ok
// SIG undefined FUN_14386b710(void)

float * FUN_14386b710(longlong param_1,float *param_2,longlong param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  
  uVar5 = 0;
  puVar1 = *(uint **)(*(longlong *)(param_3 + 0x10) + 0x70);
  if (puVar1 != (uint *)0x0) {
    uVar5 = *puVar1;
  }
  fVar6 = (float)uVar5 * 2.3283064e-10 * *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_3 + 0x34);
  fVar3 = *(float *)(param_3 + 0x38);
  fVar4 = *(float *)(param_3 + 0x3c);
  *param_2 = fVar6 + *(float *)(param_3 + 0x30);
  param_2[1] = fVar6 + fVar2;
  param_2[2] = fVar6 + fVar3;
  param_2[3] = fVar6 + fVar4;
  return param_2;
}



// FUNCTION 14386b760 FUN_14386b760 body=132 status=ok
// SIG undefined FUN_14386b760(void)

float * FUN_14386b760(longlong param_1,float *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
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
  
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 8);
  fVar9 = DAT_1467f06f0;
  fVar11 = fRam00000001467f06f4;
  fVar12 = fRam00000001467f06f8;
  fVar13 = fRam00000001467f06fc;
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x14), iVar1 < 0x20)) {
    fVar9 = (float)((int)*(short *)(param_1 + 0x1c + (longlong)iVar1 * 2) << 0x10);
    fVar11 = fVar9;
    fVar12 = fVar9;
    fVar13 = fVar9;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x48);
  fVar10 = DAT_1467f06f0;
  fVar14 = fRam00000001467f06f4;
  fVar15 = fRam00000001467f06f8;
  fVar16 = fRam00000001467f06fc;
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x14), iVar1 < 0x20)) {
    fVar10 = (float)((int)*(short *)(param_1 + 0x1c + (longlong)iVar1 * 2) << 0x10);
    fVar14 = fVar10;
    fVar15 = fVar10;
    fVar16 = fVar10;
  }
  fVar3 = *(float *)(param_3 + 0x34);
  fVar4 = *(float *)(param_3 + 0x38);
  fVar5 = *(float *)(param_3 + 0x3c);
  fVar6 = *(float *)(param_3 + 0x44);
  fVar7 = *(float *)(param_3 + 0x48);
  fVar8 = *(float *)(param_3 + 0x4c);
  *param_2 = *(float *)(param_3 + 0x30) * fVar9 + *(float *)(param_3 + 0x40) * fVar10;
  param_2[1] = fVar3 * fVar11 + fVar6 * fVar14;
  param_2[2] = fVar4 * fVar12 + fVar7 * fVar15;
  param_2[3] = fVar5 * fVar13 + fVar8 * fVar16;
  return param_2;
}



// FUNCTION 14386b7f0 FUN_14386b7f0 body=78 status=ok
// SIG undefined FUN_14386b7f0(void)

undefined8 * FUN_14386b7f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiDefaultAstarEdgeFilter::vftable;
  puVar2 = param_1 + 4;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined4 *)puVar2 = 0xffffffff;
    puVar2 = (undefined8 *)((longlong)puVar2 + 4);
  }
  puVar2 = param_1 + 0x14;
  for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined4 *)puVar2 = 0xffffffff;
    puVar2 = (undefined8 *)((longlong)puVar2 + 4);
  }
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return param_1;
}



// FUNCTION 14386b840 FUN_14386b840 body=69 status=ok
// SIG undefined FUN_14386b840(void)

ulonglong FUN_14386b840(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(*(longlong *)(param_2 + 0x10) + 0x70);
  uVar2 = 1 << ((byte)*(undefined4 *)(*(longlong *)(param_2 + 8) + 4) & 0x1f);
  if (((*(uint *)(param_1 + 0xa0 + (ulonglong)(*puVar1 & 0x1f) * 4) & uVar2) != 0) &&
     ((puVar1 = *(uint **)(*(longlong *)(param_2 + 0x10) + 0x40), puVar1 == (uint *)0x0 ||
      (puVar1 = (uint *)(ulonglong)(*puVar1 & 0x1f),
      (*(uint *)(param_1 + 0x20 + (longlong)puVar1 * 4) & uVar2) != 0)))) {
    return 1;
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// FUNCTION 14386b890 FUN_14386b890 body=54 status=ok
// SIG undefined FUN_14386b890(void)

bool FUN_14386b890(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48) == 0) {
    return true;
  }
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48) + 0x14);
  if (0x1f < uVar1) {
    return true;
  }
  return (*(uint *)(param_1 + 0x120) >> (uVar1 & 0x1f) & 1) != 0;
}



// FUNCTION 14386b8d0 FUN_14386b8d0 body=359 status=ok
// SIG undefined FUN_14386b8d0(void)

undefined4 * FUN_14386b8d0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined1 local_res20 [8];
  undefined **local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  uint local_44;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar5 = uVar4;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x20) < 1) {
    *param_2 = 0;
    return param_2;
  }
  do {
    local_70 = 0;
    local_68 = 0x1ffff;
    local_78 = hkGeometry::vftable;
    local_60 = 0;
    local_58 = 0;
    local_54 = -0x80000000;
    local_50 = 0;
    local_48 = 0;
    local_44 = 0x80000000;
    plVar1 = *(longlong **)(uVar5 + *(longlong *)(param_1 + 0x18));
    (**(code **)(*plVar1 + 0x28))(plVar1,local_res8,&local_78);
    FUN_1437170a0(param_3,local_res20,&local_78,0);
    local_78 = hkGeometry::vftable;
    uVar2 = FUN_143703a50();
    local_48 = 0;
    if (-1 < (int)local_44) {
      FUN_143702e10(uVar2,local_50,0x10,local_44 & 0x3fffffff);
    }
    local_50 = 0;
    local_44 = 0x80000000;
    uVar2 = FUN_143703a50();
    local_58 = 0;
    if (-1 < local_54) {
      FUN_143702e10(uVar2,local_60,0x10);
    }
    local_60 = 0;
    local_54 = 0x80000000;
    FUN_14370c000(&local_78);
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    uVar5 = uVar5 + 8;
  } while ((int)uVar3 < *(int *)(param_1 + 0x20));
  *local_res10 = 0;
  return local_res10;
}



// FUNCTION 14386ba40 FUN_14386ba40 body=683 status=ok
// SIG undefined FUN_14386ba40(void)

void FUN_14386ba40(longlong param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_res18 [2];
  undefined8 *local_res20;
  undefined4 *local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  undefined4 *local_50;
  uint local_48;
  uint local_44;
  int local_40;
  
  local_44 = 0x80000000;
  puVar8 = (undefined4 *)0x0;
  uVar10 = param_3 + 0x1f >> 5;
  local_50 = (undefined4 *)0x0;
  local_48 = 0;
  local_res18[0] = uVar10;
  local_res20 = param_4;
  uVar4 = FUN_143703a50();
  uVar11 = local_res18[0];
  puVar5 = puVar8;
  if (local_res18[0] != 0) {
    puVar5 = (undefined4 *)FUN_143702d60(uVar4,4,local_res18);
  }
  local_48 = uVar11;
  local_44 = 0x80000000;
  if (local_res18[0] != 0) {
    local_44 = local_res18[0];
  }
  local_50 = puVar5;
  local_40 = param_3;
  uVar4 = FUN_143703a50();
  if ((int)(local_44 & 0x3fffffff) < (int)uVar10) {
    uVar3 = (local_44 & 0x3fffffff) * 2;
    uVar11 = uVar10;
    if ((int)uVar10 < (int)uVar3) {
      uVar11 = uVar3;
    }
    FUN_14370c310(uVar4,&local_50,uVar11,4);
  }
  if (-1 < (int)(uVar10 - 1)) {
    puVar5 = local_50;
    for (uVar7 = (ulonglong)uVar10; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
  }
  local_68 = (undefined4 *)0x0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_res18[0] = uVar10;
  local_48 = uVar10;
  uVar4 = FUN_143703a50();
  uVar11 = local_res18[0];
  puVar5 = puVar8;
  if (local_res18[0] != 0) {
    puVar5 = (undefined4 *)FUN_143702d60(uVar4,4,local_res18);
  }
  local_60 = uVar11;
  local_5c = 0x80000000;
  if (local_res18[0] != 0) {
    local_5c = local_res18[0];
  }
  local_68 = puVar5;
  local_58 = param_3;
  uVar4 = FUN_143703a50();
  if ((int)(local_5c & 0x3fffffff) < (int)uVar10) {
    uVar3 = (local_5c & 0x3fffffff) * 2;
    uVar11 = uVar10;
    if ((int)uVar10 < (int)uVar3) {
      uVar11 = uVar3;
    }
    FUN_14370c310(uVar4,&local_68,uVar11,4);
  }
  if (-1 < (int)(uVar10 - 1)) {
    puVar5 = local_68;
    for (uVar7 = (ulonglong)uVar10; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  puVar5 = puVar8;
  local_60 = uVar10;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      if (-1 < (int)(local_60 - 1)) {
        puVar12 = local_68;
        for (uVar7 = (ulonglong)local_60; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
      plVar2 = *(longlong **)((longlong)puVar5 + *(longlong *)(param_1 + 0x18));
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,&local_68);
      uVar11 = local_48;
      if ((int)local_60 < (int)local_48) {
        uVar11 = local_60;
      }
      if ((-1 < (int)uVar11) && (lVar9 = (longlong)(int)uVar11, uVar11 != 0)) {
        puVar6 = local_50 + lVar9;
        do {
          puVar1 = (uint *)((longlong)local_68 + (-4 - (longlong)local_50) + (longlong)puVar6);
          puVar6 = puVar6 + -1;
          *puVar6 = *puVar6 & *puVar1;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      uVar11 = (int)puVar8 + 1;
      puVar8 = (undefined4 *)(ulonglong)uVar11;
      param_4 = local_res20;
      puVar5 = puVar5 + 2;
    } while ((int)uVar11 < *(int *)(param_1 + 0x20));
  }
  uVar11 = local_48;
  if (*(int *)(param_4 + 1) < (int)local_48) {
    uVar11 = *(uint *)(param_4 + 1);
  }
  uVar7 = (ulonglong)uVar11;
  puVar5 = (undefined4 *)*param_4;
  puVar8 = local_50;
  if (0 < (int)uVar11) {
    do {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar7 != 0);
  }
  uVar4 = FUN_143703a50();
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(uVar4,local_68,4,local_5c & 0x3fffffff);
  }
  local_68 = (undefined4 *)0x0;
  local_5c = 0x80000000;
  uVar4 = FUN_143703a50();
  local_48 = 0;
  if (-1 < (int)local_44) {
    FUN_143702e10(uVar4,local_50,4,local_44 & 0x3fffffff);
  }
  return;
}



// FUNCTION 14386bcf0 containsAabb body=110 status=ok
// SIG undefined containsAabb(void)

undefined8 hkaiIntersectionVolume::containsAabb(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
      iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 14386bd60 containsTriangle body=120 status=ok
// SIG undefined containsTriangle(void)

undefined8
hkaiIntersectionVolume::containsTriangle
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
      iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 14386bde0 FUN_14386bde0 body=155 status=ok
// SIG undefined FUN_14386bde0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14386bde0(longlong param_1,undefined1 (*param_2) [16])

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  uVar5 = uRam00000001467f08d8;
  *(undefined8 *)param_2[1] = _DAT_1467f08d0;
  *(undefined8 *)(param_2[1] + 8) = uVar5;
  iVar7 = 0;
  uVar2 = *(uint *)(param_2[1] + 4);
  uVar3 = *(uint *)(param_2[1] + 8);
  uVar4 = *(uint *)(param_2[1] + 0xc);
  *(uint *)*param_2 = *(uint *)param_2[1] ^ 0x80000000;
  *(uint *)(*param_2 + 4) = uVar2 ^ 0x80000000;
  *(uint *)(*param_2 + 8) = uVar3 ^ 0x80000000;
  *(uint *)(*param_2 + 0xc) = uVar4 ^ 0x80000000;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      (**(code **)(*plVar1 + 0x18))(plVar1,local_28);
      lVar6 = lVar6 + 8;
      iVar7 = iVar7 + 1;
      auVar8 = maxps(*param_2,local_28);
      auVar9 = minps(param_2[1],local_18);
      *param_2 = auVar8;
      param_2[1] = auVar9;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 14386be80 overlapsAabb body=110 status=ok
// SIG undefined overlapsAabb(void)

undefined8 hkaiIntersectionVolume::overlapsAabb(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
      iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 14386bef0 FUN_14386bef0 body=3211 status=ok
// SIG undefined FUN_14386bef0(void)

/* WARNING: Removing unreachable block (ram,0x00014386c9fa) */
/* WARNING: Removing unreachable block (ram,0x00014386c8a2) */
/* WARNING: Removing unreachable block (ram,0x00014386bf93) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14386bef0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  float *pfVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 local_res8 [8];
  undefined8 in_stack_fffffffffffff030;
  undefined4 uVar44;
  char local_f98;
  uint local_f94;
  undefined4 local_f90 [2];
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined1 local_f48 [16];
  float local_f38;
  float fStack_f34;
  float fStack_f30;
  undefined4 uStack_f2c;
  float local_f28;
  undefined8 local_f20;
  undefined8 local_f18;
  undefined8 local_f10;
  bool local_f08;
  bool local_f07;
  undefined1 local_f06;
  undefined1 local_ef8 [8];
  undefined8 uStack_ef0;
  undefined1 local_ee8 [16];
  undefined1 local_ed8 [12];
  float fStack_ecc;
  float local_ec8;
  float fStack_ec4;
  float fStack_ec0;
  float fStack_ebc;
  float local_eb8;
  float fStack_eb4;
  float fStack_eb0;
  float fStack_eac;
  undefined8 local_ea8;
  undefined4 local_ea0;
  undefined4 local_e9c;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined8 local_e78;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined1 local_e68 [16];
  undefined4 local_e58;
  undefined4 uStack_e54;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined1 local_e48 [16];
  undefined4 local_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined1 local_e28 [16];
  ulonglong local_e18;
  longlong lStack_e10;
  float local_e08;
  float fStack_e04;
  float fStack_e00;
  float fStack_dfc;
  float local_df8;
  float fStack_df4;
  float fStack_df0;
  undefined4 uStack_dec;
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined1 local_dc8 [3488];
  
  uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffff030 >> 0x20);
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0x30) = 4;
  FUN_14386d9d0();
  lVar14 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar14 + 0xb4) == 7) {
    *(undefined4 *)(param_1 + 0x84) = 7;
    param_3[0xd] = lVar14;
    *(undefined1 *)((longlong)param_3 + 0x82) = 0;
  }
  else {
    *(int *)(param_1 + 0x84) = *(int *)(lVar14 + 0xb4);
    uVar12 = FUN_1438a3290(lVar14,*(undefined8 *)(param_1 + 0x20));
    FUN_14387dc00(*(undefined8 *)(param_1 + 0x28),uVar12,&local_e18);
    auVar28._0_8_ = local_e18 << 0x20;
    auVar28._8_8_ = lStack_e10 << 0x20 | local_e18 >> 0x20;
    _local_ef8 = auVar28 >> 0x20;
    FUN_1438a09b0(&local_f88,*(undefined8 *)(param_1 + 0x28),uVar12,&local_e18);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      uVar9 = *(undefined1 *)(param_1 + 0x120);
      cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0) + 0x38);
      param_3[0xd] = local_f20;
      *param_3 = local_f88;
      param_3[1] = uStack_f80;
      param_3[2] = local_f78;
      param_3[3] = uStack_f70;
      param_3[0xe] = local_f18;
      param_3[4] = local_f68;
      param_3[5] = uStack_f60;
      param_3[6] = local_f58;
      param_3[7] = uStack_f50;
      *(undefined1 *)((longlong)param_3 + 0x81) = uVar9;
      param_3[0xf] = local_f10;
      *(float *)(param_3 + 0xc) = local_f28;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = CONCAT44(fStack_f34,local_f38);
      param_3[0xb] = CONCAT44(uStack_f2c,fStack_f30);
      *(bool *)(param_3 + 0x10) = cVar1 != '\0';
      *(undefined1 *)((longlong)param_3 + 0x82) = local_f06;
    }
    else {
      lVar14 = *(longlong *)(param_1 + 0x28);
      uVar2 = *(uint *)(lVar14 + 0x60);
      if (uVar2 == 0xffffffff) {
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = uVar2 >> 0x16;
      }
      iVar15 = *(int *)(lVar14 + 0xb4);
      if (iVar15 == 0) {
        cVar1 = *(char *)(*(longlong *)(lVar14 + 0xa0) + 0x38);
        param_3[0xd] = local_f20;
        param_3[0xe] = local_f18;
        *param_3 = local_f88;
        param_3[1] = uStack_f80;
        param_3[2] = local_f78;
        param_3[3] = uStack_f70;
        param_3[0xf] = local_f10;
        param_3[4] = local_f68;
        param_3[5] = uStack_f60;
        param_3[6] = local_f58;
        param_3[7] = uStack_f50;
        *(undefined1 *)((longlong)param_3 + 0x82) = local_f06;
        *(float *)(param_3 + 0xc) = local_f28;
        param_3[8] = CONCAT44(fStack_df4,local_df8);
        param_3[9] = CONCAT44(uStack_dec,fStack_df0);
        param_3[10] = CONCAT44(fStack_f34,local_f38);
        param_3[0xb] = CONCAT44(uStack_f2c,fStack_f30);
        *(bool *)(param_3 + 0x10) = cVar1 != '\0';
        *(undefined1 *)((longlong)param_3 + 0x81) = 1;
      }
      else {
        if (iVar15 == 3) {
          fVar41 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x24);
          auVar35._0_8_ = CONCAT44(fVar41 * fStack_e04,fVar41 * local_e08);
          auVar35._8_4_ = fVar41 * fStack_e00;
          auVar35._12_4_ = fVar41 * fStack_dfc;
          auVar36._0_8_ = auVar35._0_8_ << 0x20;
          auVar36._8_8_ = auVar35._8_8_ << 0x20 | (ulonglong)(uint)(fVar41 * fStack_e04);
          local_f48 = auVar36 >> 0x20;
          if (*(char *)(param_1 + 0x120) == '\0') {
            bVar17 = false;
            uVar9 = 0;
          }
          else {
            FUN_143879940(*(longlong *)(param_1 + 0x70),&local_f94,local_e28);
            local_e38 = *(undefined4 *)(param_1 + 0x68);
            uStack_e34 = local_e38;
            uStack_e30 = local_e38;
            uStack_e2c = local_e38;
            fVar18 = (float)FUN_1438a6b00(local_ef8,local_ef8,local_e28,&local_de8,&local_e38);
            fVar41 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x28);
            if (fVar41 + fVar41 < fVar18) {
              *(undefined4 *)(param_1 + 0x84) = 0;
            }
            uVar9 = 1;
            bVar17 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0) + 0x38) != '\0';
          }
          *param_3 = local_f88;
          param_3[1] = uStack_f80;
          param_3[2] = local_f78;
          param_3[3] = uStack_f70;
          param_3[0xd] = local_f20;
          param_3[4] = local_f68;
          param_3[5] = uStack_f60;
          param_3[6] = local_f58;
          param_3[7] = uStack_f50;
          param_3[0xe] = local_f18;
          *(float *)(param_3 + 0xc) = local_f28;
          param_3[10] = CONCAT44(fStack_f34,local_f38);
          param_3[0xb] = CONCAT44(uStack_f2c,fStack_f30);
          param_3[0xf] = local_f10;
          *(undefined1 (*) [16])(param_3 + 8) = local_f48;
          *(bool *)(param_3 + 0x10) = bVar17;
          *(undefined1 *)((longlong)param_3 + 0x81) = uVar9;
        }
        else {
          if (iVar15 != 4) {
            if ((uVar16 != 0xffffffff) &&
               (*(longlong *)
                 ((longlong)(int)uVar16 * 0x100 +
                 *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x130) + 0x38)) == 0))
            {
              param_3[0xd] = local_f20;
              param_3[0xe] = local_f18;
              *param_3 = local_f88;
              param_3[1] = uStack_f80;
              param_3[2] = local_f78;
              param_3[3] = uStack_f70;
              param_3[0xf] = local_f10;
              param_3[4] = local_f68;
              param_3[5] = uStack_f60;
              param_3[6] = local_f58;
              param_3[7] = uStack_f50;
              *(undefined1 *)((longlong)param_3 + 0x82) = local_f06;
              *(float *)(param_3 + 0xc) = local_f28;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = CONCAT44(fStack_f34,local_f38);
              param_3[0xb] = CONCAT44(uStack_f2c,fStack_f30);
              *(undefined2 *)(param_3 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x84) = 0;
              return 1;
            }
            iVar15 = 0;
            local_ea8 = 0;
            local_ea0 = 0xffffffff;
            local_e9c = 0;
            local_e98 = _DAT_1467f06e0;
            uStack_e90 = uRam00000001467f06e8;
            local_e88 = 0;
            local_e80 = 0;
            local_e7c = 0xff;
            local_e78 = 0;
            local_e70 = 0;
            local_e6c = 0;
            FUN_14389b0c0(&local_ea8,lVar14,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130));
            FUN_143897b00(local_dc8,&local_ea8);
            iVar10 = FUN_14387aa70(*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,local_ef8,uVar2,
                                   *(char *)(*(longlong *)(param_1 + 0x88) + 0x30) != '\0',
                                   CONCAT44(uVar44,*(undefined4 *)
                                                    (*(longlong *)(param_1 + 0x88) + 0x2c)),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),local_dc8)
            ;
            if ((*(int *)(param_1 + 0x90) < *(int *)(param_1 + 0x80)) &&
               (*(char *)(*(longlong *)(param_1 + 0x88) + 0x31) != '\0')) {
              *(undefined4 *)(param_1 + 0x84) = 7;
              param_3[0xd] = *(undefined8 *)(param_1 + 0x28);
              *(undefined1 *)((longlong)param_3 + 0x82) = 0;
            }
            else {
              local_f94 = uVar16;
              iVar11 = FUN_1438a6bd0(*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,local_ef8,
                                     &local_f94,
                                     *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),
                                     &local_ec8,local_e68,local_ed8,&local_eb8,local_f90,local_res8)
              ;
              while (((iVar11 != 2 && (iVar11 != 3)) && (iVar11 != 4))) {
                if (((iVar11 != 0) || (*(char *)(*(longlong *)(param_1 + 0x88) + 0x32) == '\0')) ||
                   (fStack_ecc != 0.0)) {
LAB_14386c475:
                  *(undefined1 (*) [8])(param_1 + 0xe0) = local_ef8;
                  *(undefined8 *)(param_1 + 0xe8) = uStack_ef0;
                  *(undefined8 *)(param_1 + 0x100) = local_de8;
                  *(undefined8 *)(param_1 + 0x108) = uStack_de0;
                  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(fStack_ec4,local_ec8);
                  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(fStack_ebc,fStack_ec0);
                  *(uint *)(param_1 + 0x110) = uVar16;
                  *(undefined4 *)(param_1 + 0x114) = local_f90[0];
                  *(undefined1 *)(param_1 + 0x118) = local_res8[0];
                  *(undefined1 *)(param_1 + 0x119) = 1;
                  iVar15 = FUN_143879940(*(undefined8 *)(param_1 + 0x70),local_ee8,local_e48);
                  bVar17 = iVar15 == 0;
                  if (bVar17) {
                    iVar15 = TMeshAttributeArraySet<int>::GetNumIndices
                                       (*(undefined8 *)(param_1 + 0x70));
                    iVar15 = iVar15 - *(int *)(param_1 + 0x78);
                    if (iVar15 < *(int *)(*(longlong *)(param_1 + 0x88) + 0x1c)) {
                      *(undefined4 *)(param_1 + 0x84) = 6;
                    }
                  }
                  local_e58 = *(undefined4 *)(param_1 + 0x68);
                  uStack_e54 = local_e58;
                  uStack_e50 = local_e58;
                  uStack_e4c = local_e58;
                  if (bVar17) {
                    fVar41 = 3.40282e+38;
                  }
                  else {
                    iVar15 = FUN_1438a6b00(local_ef8,local_ed8,local_e48,&local_de8,&local_e58);
                    fVar41 = extraout_XMM0_Da;
                  }
                  lVar14 = *(longlong *)(param_1 + 0x28);
                  local_df8 = local_df8 * local_df8;
                  fStack_df4 = fStack_df4 * fStack_df4;
                  fStack_df0 = fStack_df0 * fStack_df0;
                  auVar3._4_4_ = fStack_df4 + local_df8 + fStack_df0;
                  auVar3._0_4_ = fStack_df4 + local_df8 + fStack_df0;
                  auVar3._8_4_ = fStack_df4 + local_df8 + fStack_df0;
                  auVar3._12_4_ = fStack_df4 + local_df8 + fStack_df0;
                  auVar28 = rsqrtps(in_XMM2,auVar3);
                  auVar29._0_4_ = auVar28._0_4_ * 0.5;
                  auVar29._4_4_ = auVar28._4_4_ * 0.5;
                  auVar29._8_4_ = auVar28._8_4_ * 0.5;
                  auVar29._12_4_ = auVar28._12_4_ * 0.5;
                  if (*(char *)(*(longlong *)(lVar14 + 0xa0) + 0x38) == '\0') {
                    fVar18 = *(float *)(lVar14 + 0x6c);
                    local_f98 = '\0';
                  }
                  else {
                    auVar29 = ZEXT416(*(uint *)(lVar14 + 0x6c));
                    iVar15 = FUN_1438a9040();
                    fVar18 = extraout_XMM0_Da_00;
                  }
                  fVar21 = local_ec8 * local_ec8;
                  fVar24 = fStack_ec4 * fStack_ec4;
                  fVar26 = fStack_ec0 * fStack_ec0;
                  local_f28 = fVar24 + fVar21 + fVar26;
                  fVar37 = fVar24 + fVar21 + fVar26;
                  fVar38 = fVar24 + fVar21 + fVar26;
                  fVar26 = fVar24 + fVar21 + fVar26;
                  auVar4._4_4_ = fVar37;
                  auVar4._0_4_ = local_f28;
                  auVar4._8_4_ = fVar38;
                  auVar4._12_4_ = fVar26;
                  auVar28 = rsqrtps(auVar29,auVar4);
                  fVar21 = auVar28._0_4_;
                  fVar24 = auVar28._4_4_;
                  fVar42 = auVar28._8_4_;
                  fVar43 = auVar28._12_4_;
                  auVar20._4_4_ = -(uint)(fStack_eb4 == 0.0);
                  auVar20._0_4_ = -(uint)(local_eb8 == 0.0);
                  auVar20._8_4_ = -(uint)(fStack_eb0 == 0.0);
                  auVar20._12_4_ = -(uint)(fStack_eac == 0.0);
                  iVar15 = movmskps(iVar15,auVar20);
                  local_f94 = 0xba83126f;
                  fVar21 = (float)(~-(uint)(local_f28 <= 0.0) &
                                  (uint)((3.0 - fVar21 * local_f28 * fVar21) * fVar21 * 0.5));
                  fVar24 = (float)(~-(uint)(fVar37 <= 0.0) &
                                  (uint)((3.0 - fVar24 * fVar37 * fVar24) * fVar24 * 0.5));
                  fVar42 = (float)(~-(uint)(fVar38 <= 0.0) &
                                  (uint)((3.0 - fVar42 * fVar38 * fVar42) * fVar42 * 0.5));
                  fVar43 = (float)(~-(uint)(fVar26 <= 0.0) &
                                  (uint)((3.0 - fVar43 * fVar26 * fVar43) * fVar43 * 0.5));
                  local_f28 = fVar21 * local_f28;
                  fVar37 = fVar24 * fVar37;
                  if (iVar15 == 0xf) {
LAB_14386c760:
                    local_eb8 = -local_ec8;
                    fStack_eb4 = -fStack_ec4;
                    fStack_eb0 = -fStack_ec0;
                    fVar22 = local_eb8 * local_eb8;
                    fVar25 = fStack_eb4 * fStack_eb4;
                    auVar23._8_4_ = fStack_eb0 * fStack_eb0;
                    auVar23._4_4_ = auVar23._8_4_;
                    auVar23._0_4_ = auVar23._8_4_;
                    auVar23._12_4_ = auVar23._8_4_;
                    auVar33._0_4_ = fVar25 + fVar22 + auVar23._8_4_;
                    auVar33._4_4_ = fVar25 + fVar22 + auVar23._8_4_;
                    auVar33._8_4_ = fVar25 + fVar22 + auVar23._8_4_;
                    auVar33._12_4_ = fVar25 + fVar22 + auVar23._8_4_;
                    auVar28 = rsqrtps(auVar23,auVar33);
                    fVar22 = auVar28._0_4_;
                    fVar25 = auVar28._4_4_;
                    fVar27 = auVar28._8_4_;
                    auVar7._4_8_ = auVar33._8_8_;
                    auVar7._0_4_ = fVar37;
                    auVar32._0_8_ = auVar7._0_8_ << 0x20;
                    auVar32._8_4_ = fVar42 * fVar38;
                    auVar32._12_4_ = fVar43 * fVar26;
                    local_eb8 = local_eb8 *
                                (float)(~-(uint)(auVar33._0_4_ <= 0.0) &
                                       (uint)((3.0 - fVar22 * auVar33._0_4_ * fVar22) * fVar22 * 0.5
                                             ));
                    fStack_eb4 = fStack_eb4 *
                                 (float)(~-(uint)(auVar33._4_4_ <= 0.0) &
                                        (uint)((3.0 - fVar25 * auVar33._4_4_ * fVar25) *
                                              fVar25 * 0.5));
                    fStack_eb0 = fStack_eb0 *
                                 (float)(~-(uint)(auVar33._8_4_ <= 0.0) &
                                        (uint)((3.0 - fVar27 * auVar33._8_4_ * fVar27) *
                                              fVar27 * 0.5));
                  }
                  else {
                    if (-0.001 <= fStack_eac + ((float)local_ef8._4_4_ + fStack_ec4) * fStack_eb4 +
                                  ((float)uStack_ef0 + fStack_ec0) * fStack_eb0 +
                                  ((float)local_ef8._0_4_ + local_ec8) * local_eb8)
                    goto LAB_14386c760;
                    fVar37 = (float)uStack_ef0 * fStack_eb0 + (float)local_ef8._0_4_ * local_eb8;
                    fVar26 = fStack_eac + (float)local_ef8._4_4_ * fStack_eb4;
                    auVar30._4_4_ = fVar26;
                    auVar30._0_4_ = fVar37;
                    fVar38 = (float)local_ef8._0_4_ * local_eb8 + (float)uStack_ef0 * fStack_eb0;
                    fStack_eac = (float)local_ef8._4_4_ * fStack_eb4 + fStack_eac;
                    auVar30._8_4_ = fVar38;
                    auVar30._12_4_ = fStack_eac;
                    auVar5._4_8_ = auVar30._8_8_;
                    auVar5._0_4_ = fVar37;
                    auVar31._0_8_ = auVar5._0_8_ << 0x20;
                    auVar31._8_4_ = fStack_eac;
                    auVar31._12_4_ = fVar38;
                    fVar37 = fVar37 + fVar26;
                    auVar6._4_8_ = auVar31._8_8_;
                    auVar6._0_4_ = fVar37;
                    auVar32._0_8_ = auVar6._0_8_ << 0x20;
                    auVar32._8_4_ = fStack_eac + fVar38;
                    auVar32._12_4_ = fVar38 + fStack_eac;
                  }
                  auVar34 = auVar32;
                  if (iVar15 != 0xf) {
                    fVar26 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x2c);
                    auVar8._4_8_ = auVar32._8_8_;
                    auVar8._0_4_ = fVar37 - fVar26;
                    auVar34._0_8_ = auVar8._0_8_ << 0x20;
                    auVar34._8_4_ = auVar32._8_4_ - fVar26;
                    auVar34._12_4_ = auVar32._12_4_ - fVar26;
                  }
                  lVar14 = *(longlong *)(param_1 + 0x28);
                  local_f48._0_4_ = fVar21 * local_ec8 * fVar18;
                  local_f48._4_4_ = fVar24 * fStack_ec4 * fVar18;
                  local_f48._8_4_ = fVar42 * fStack_ec0 * fVar18;
                  local_f48._12_4_ = fVar43 * fStack_ebc * fVar18;
                  uStack_f2c = auVar34._12_4_;
                  local_f08 = *(char *)(*(longlong *)(lVar14 + 0xa0) + 0x38) != '\0';
                  local_f07 = (*(byte *)(lVar14 + 0xb2) & 7) != 0;
                  iVar15 = *(int *)(lVar14 + 0xb4);
                  if (iVar15 == 1) {
                    if (local_f98 != '\0') {
                      *(undefined4 *)(param_1 + 0x84) = 2;
                    }
LAB_14386c86c:
                    if (*(float *)(*(longlong *)(param_1 + 0x88) + 0x28) <= fVar41) {
                      if (iVar10 == 2) {
                        *(undefined4 *)(param_1 + 0x84) = 5;
                      }
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x84) = 3;
                      fVar41 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x24);
                      local_f08 = false;
                      auVar39._0_8_ = CONCAT44(fVar41 * fStack_e04,fVar41 * local_e08);
                      auVar39._8_4_ = fVar41 * fStack_e00;
                      auVar39._12_4_ = fVar41 * fStack_dfc;
                      local_f07 = false;
                      auVar40._0_8_ = auVar39._0_8_ << 0x20;
                      auVar40._8_8_ = auVar39._8_8_ << 0x20 | (ulonglong)(uint)(fVar41 * fStack_e04)
                      ;
                      local_f48 = auVar40 >> 0x20;
                    }
                  }
                  else if ((iVar15 == 2) || (iVar15 == 5)) goto LAB_14386c86c;
                  param_3[0xd] = local_f20;
                  param_3[0xe] = local_f18;
                  *param_3 = local_f88;
                  param_3[1] = uStack_f80;
                  param_3[2] = local_f78;
                  param_3[3] = uStack_f70;
                  *(float *)(param_3 + 0xc) = local_f28;
                  param_3[0xf] = local_f10;
                  param_3[4] = local_f68;
                  param_3[5] = uStack_f60;
                  param_3[6] = local_f58;
                  param_3[7] = uStack_f50;
                  *(undefined1 (*) [16])(param_3 + 8) = local_f48;
                  *(float *)(param_3 + 10) = local_eb8;
                  *(float *)((longlong)param_3 + 0x54) = fStack_eb4;
                  *(float *)(param_3 + 0xb) = fStack_eb0;
                  *(undefined4 *)((longlong)param_3 + 0x5c) = uStack_f2c;
                  *(bool *)(param_3 + 0x10) = local_f08;
                  *(bool *)((longlong)param_3 + 0x81) = local_f07;
                  local_f38 = local_eb8;
                  fStack_f34 = fStack_eb4;
                  fStack_f30 = fStack_eb0;
                  goto LAB_14386c44a;
                }
                pfVar13 = (float *)hkaiEdgePath::getEdge
                                             (*(undefined8 *)(param_1 + 0x70),local_f90[0]);
                auVar19._4_4_ = -(uint)(pfVar13[5] == pfVar13[1]);
                auVar19._0_4_ = -(uint)(pfVar13[4] == *pfVar13);
                auVar19._8_4_ = -(uint)(pfVar13[6] == pfVar13[2]);
                auVar19._12_4_ = -(uint)(pfVar13[7] == pfVar13[3]);
                iVar11 = movmskps((int)pfVar13,auVar19);
                if (((iVar11 == 0xf) ||
                    (lVar14 = hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x70),local_f90[0]),
                    (*(byte *)(lVar14 + 0x80) & 0x10) != 0)) ||
                   ((3 < iVar15 ||
                    (iVar11 = FUN_14387a0e0(*(undefined8 *)(param_1 + 0x70),local_f90[0],
                                            local_res8[0],param_1 + 0x78,
                                            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),
                                            local_dc8), iVar11 != 0)))) goto LAB_14386c475;
                iVar15 = iVar15 + 1;
                local_f94 = uVar16;
                iVar11 = FUN_1438a6bd0(*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,local_ef8,
                                       &local_f94,
                                       *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x130),
                                       &local_ec8,local_e68,local_ed8,&local_eb8,local_f90,
                                       local_res8);
              }
              local_f48 = ZEXT816(0);
              local_f08 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xa0) + 0x38) !=
                          '\0';
              *param_3 = local_f88;
              param_3[1] = uStack_f80;
              param_3[2] = local_f78;
              param_3[3] = uStack_f70;
              param_3[0xd] = local_f20;
              param_3[4] = local_f68;
              param_3[5] = uStack_f60;
              param_3[6] = local_f58;
              param_3[7] = uStack_f50;
              param_3[0xe] = local_f18;
              *(float *)(param_3 + 0xc) = local_f28;
              param_3[10] = CONCAT44(fStack_f34,local_f38);
              param_3[0xb] = CONCAT44(uStack_f2c,fStack_f30);
              param_3[0xf] = local_f10;
              local_f07 = false;
              param_3[8] = 0;
              param_3[9] = 0;
              *(bool *)(param_3 + 0x10) = local_f08;
              *(undefined1 *)((longlong)param_3 + 0x81) = 0;
LAB_14386c44a:
              *(undefined1 *)((longlong)param_3 + 0x82) = local_f06;
            }
            FUN_143897e50(local_dc8);
            return 1;
          }
          cVar1 = *(char *)(*(longlong *)(lVar14 + 0xa0) + 0x38);
          param_3[0xd] = local_f20;
          *param_3 = local_f88;
          param_3[1] = uStack_f80;
          param_3[2] = local_f78;
          param_3[3] = uStack_f70;
          param_3[0xe] = local_f18;
          param_3[4] = local_f68;
          param_3[5] = uStack_f60;
          param_3[6] = local_f58;
          param_3[7] = uStack_f50;
          param_3[0xf] = local_f10;
          *(float *)(param_3 + 0xc) = local_f28;
          param_3[8] = 0;
          param_3[9] = 0;
          param_3[10] = CONCAT44(fStack_f34,local_f38);
          param_3[0xb] = CONCAT44(uStack_f2c,fStack_f30);
          *(bool *)(param_3 + 0x10) = cVar1 != '\0';
          *(undefined1 *)((longlong)param_3 + 0x81) = 1;
        }
        *(undefined1 *)((longlong)param_3 + 0x82) = local_f06;
      }
    }
  }
  return 1;
}



// FUNCTION 14386cb80 FUN_14386cb80 body=88 status=ok
// SIG undefined FUN_14386cb80(void)

void FUN_14386cb80(longlong param_1)

{
  FUN_14386af10();
  *(undefined4 *)(param_1 + 0x30) = 4;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(int *)(*(longlong *)(param_1 + 0x28) + 0xb4) == 7) {
    *(undefined4 *)(param_1 + 0xd0) = 3;
    return;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xb4) = 3;
  return;
}



// FUNCTION 14386cbe0 FUN_14386cbe0 body=127 status=ok
// SIG undefined FUN_14386cbe0(void)

void FUN_14386cbe0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined8 *)hkaiEdgePath::getEdge(*(undefined8 *)(param_1 + 0x70));
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 200) = 1;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x38)) {
    puVar3 = (undefined4 *)FUN_143879720(*(longlong *)(param_1 + 0x70),param_2);
    *(undefined4 *)(param_1 + 0xc0) = *puVar3;
  }
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0xa0) = *puVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  return;
}



// FUNCTION 14386cc60 FUN_14386cc60 body=2509 status=ok
// SIG undefined FUN_14386cc60(void)

/* WARNING: Removing unreachable block (ram,0x00014386cdec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14386cc60(longlong param_1,undefined8 param_2,longlong *param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar41;
  float fVar42;
  undefined1 in_XMM2 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar54;
  undefined1 auVar53 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
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
  uint local_res8 [2];
  uint local_res20 [2];
  longlong local_1b8;
  uint local_1b0;
  uint local_1ac;
  longlong local_1a8 [2];
  undefined8 local_198;
  float fStack_190;
  undefined1 local_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  ulonglong local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_f8 [16];
  undefined1 local_e8 [144];
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    iVar13 = *(int *)(param_1 + 0x78);
    if (iVar13 < 0) {
      iVar13 = *(int *)(param_1 + 0x7c);
    }
    hkaiEdgePath::getFutureEdgeRange(*(longlong *)(param_1 + 0x70),iVar13,&local_1b8,local_1a8);
    lVar9 = (local_1a8[0] - local_1b8) / 0x12 + (local_1a8[0] - local_1b8 >> 0x3f);
    uVar17 = (int)(lVar9 >> 3) - (int)(lVar9 >> 0x3f);
    uVar6 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    iVar13 = uVar17 + 1;
    if ((int)uVar6 < iVar13) {
      iVar15 = uVar6 * 2;
      if (iVar13 < iVar15) {
        iVar13 = iVar15;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar13,0x10);
    }
    lVar9 = *(longlong *)(param_1 + 0x28);
    fVar27 = *(float *)(lVar9 + 0x20);
    fVar35 = *(float *)(lVar9 + 0x24);
    fVar38 = *(float *)(lVar9 + 0x28);
    fVar26 = *(float *)(lVar9 + 0x2c);
    local_158 = fVar27;
    fStack_154 = fVar35;
    fStack_150 = fVar38;
    fStack_14c = fVar26;
    if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(&PTR_vftable_1467f0638,param_3,0x10);
    }
    pfVar7 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
    *pfVar7 = fVar27;
    pfVar7[1] = fVar35;
    pfVar7[2] = fVar38;
    pfVar7[3] = fVar26;
    iVar15 = (int)param_3[1] + 1;
    uVar6 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    *(int *)(param_3 + 1) = iVar15;
    iVar13 = iVar15 + uVar17;
    if ((int)uVar6 < iVar13) {
      iVar5 = uVar6 * 2;
      if (iVar13 < iVar5) {
        iVar13 = iVar5;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_3,iVar13,0x10);
    }
    *(uint *)(param_3 + 1) = (int)param_3[1] + uVar17;
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x130);
    lVar14 = *param_3;
    local_168 = lVar9;
    pfVar7 = (float *)FUN_1438a3290(*(undefined8 *)(param_1 + 0x28));
    FUN_14387dc00(*(undefined8 *)(param_1 + 0x28),pfVar7,&local_148);
    auVar39._0_8_ = local_148 << 0x20;
    auVar39._8_8_ = lStack_140 << 0x20 | local_148 >> 0x20;
    _local_188 = auVar39 >> 0x20;
    if (*(uint *)(local_1b8 + 0x70) == 0xffffffff) {
      local_res8[0] = 0xffffffff;
    }
    else {
      local_res8[0] = *(uint *)(local_1b8 + 0x70) >> 0x16;
    }
    FUN_1438a6b60(*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,local_188,local_res8,lVar9,
                  &local_178,local_e8,&local_198,local_f8);
    local_198._0_4_ = (float)local_198 - (float)local_188._0_4_;
    local_198._4_4_ = local_198._4_4_ - (float)local_188._4_4_;
    fStack_190 = fStack_190 - fStack_180;
    fVar46 = (float)local_178 * (float)local_198;
    fVar49 = local_178._4_4_ * local_198._4_4_;
    fVar50 = fStack_170 * fStack_190;
    local_198._0_4_ = (float)local_198 * (float)local_198;
    local_198._4_4_ = local_198._4_4_ * local_198._4_4_;
    fStack_190 = fStack_190 * fStack_190;
    fVar57 = local_198._4_4_ + (float)local_198 + fStack_190;
    fVar59 = local_198._4_4_ + (float)local_198 + fStack_190;
    fVar61 = local_198._4_4_ + (float)local_198 + fStack_190;
    fStack_190 = local_198._4_4_ + (float)local_198 + fStack_190;
    fVar26 = (float)local_178 * (float)local_178;
    fVar34 = local_178._4_4_ * local_178._4_4_;
    fVar36 = fStack_170 * fStack_170;
    auVar55._4_4_ = fVar59;
    auVar55._0_4_ = fVar57;
    auVar55._8_4_ = fVar61;
    auVar55._12_4_ = fStack_190;
    auVar55 = rsqrtps(unaff_XMM7,auVar55);
    auVar43._0_4_ = fVar34 + fVar26 + fVar36;
    auVar43._4_4_ = fVar34 + fVar26 + fVar36;
    auVar43._8_4_ = fVar34 + fVar26 + fVar36;
    auVar43._12_4_ = fVar34 + fVar26 + fVar36;
    auVar39 = rsqrtps(in_XMM2,auVar43);
    fVar26 = auVar39._0_4_;
    fVar34 = auVar39._4_4_;
    fVar36 = auVar39._8_4_;
    fVar74 = auVar39._12_4_;
    fVar37 = auVar55._0_4_;
    fVar73 = auVar55._4_4_;
    fVar51 = auVar55._8_4_;
    fVar52 = auVar55._12_4_;
    auVar40._0_4_ = fVar49 + fVar46 + fVar50;
    auVar40._4_4_ = fVar49 + fVar46 + fVar50;
    auVar40._8_4_ = fVar49 + fVar46 + fVar50;
    auVar40._12_4_ = fVar49 + fVar46 + fVar50;
    fVar46 = (float)local_178 *
             (float)(~-(uint)(auVar43._0_4_ <= 0.0) &
                    (uint)((3.0 - fVar26 * auVar43._0_4_ * fVar26) * fVar26 * 0.5)) * auVar40._0_4_
             * (float)(~-(uint)(fVar57 <= 0.0) &
                      (uint)((3.0 - fVar37 * fVar57 * fVar37) * fVar37 * 0.5));
    fVar34 = local_178._4_4_ *
             (float)(~-(uint)(auVar43._4_4_ <= 0.0) &
                    (uint)((3.0 - fVar34 * auVar43._4_4_ * fVar34) * fVar34 * 0.5)) * auVar40._4_4_
             * (float)(~-(uint)(fVar59 <= 0.0) &
                      (uint)((3.0 - fVar73 * fVar59 * fVar73) * fVar73 * 0.5));
    fStack_170 = fStack_170 *
                 (float)(~-(uint)(auVar43._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar36 * auVar43._8_4_ * fVar36) * fVar36 * 0.5)) *
                 auVar40._8_4_ *
                 (float)(~-(uint)(fVar61 <= 0.0) &
                        (uint)((3.0 - fVar51 * fVar61 * fVar51) * fVar51 * 0.5));
    fStack_16c = fStack_16c *
                 (float)(~-(uint)(auVar43._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar74 * auVar43._12_4_ * fVar74) * fVar74 * 0.5)) *
                 auVar40._12_4_ *
                 (float)(~-(uint)(fStack_190 <= 0.0) &
                        (uint)((3.0 - fVar52 * fStack_190 * fVar52) * fVar52 * 0.5));
    local_178 = (float *)CONCAT44(fVar34,fVar46);
    fVar26 = fStack_170;
    if (pfVar7 != (float *)0x0) {
      fVar74 = fVar34 * pfVar7[6];
      fVar26 = fVar46 * pfVar7[1];
      fVar36 = fVar46 * pfVar7[2];
      fVar46 = fVar34 * pfVar7[4] + fVar46 * *pfVar7 + fStack_170 * pfVar7[8];
      fVar34 = fVar34 * pfVar7[5] + fVar26 + fStack_170 * pfVar7[9];
      fVar26 = fVar74 + fVar36 + fStack_170 * pfVar7[10];
    }
    pfVar12 = (float *)0x0;
    pfVar7 = pfVar12;
    local_res8[0] = uVar17;
    if (uVar17 != 0) {
      pfVar7 = (float *)FUN_143702d60(&PTR_vftable_1467f0638,0x10,local_res8);
    }
    uVar6 = 0x80000000;
    if (local_res8[0] != 0) {
      uVar6 = local_res8[0];
    }
    pfVar8 = pfVar12;
    local_res20[0] = uVar17;
    local_1b0 = uVar6;
    local_198 = pfVar7;
    if (uVar17 != 0) {
      pfVar8 = (float *)FUN_143702d60(&PTR_vftable_1467f0638,0x10,local_res20);
    }
    lVar9 = local_168;
    local_1ac = 0x80000000;
    if (local_res20[0] != 0) {
      local_1ac = local_res20[0];
    }
    lVar16 = local_1a8[0] - local_1b8 >> 0x3f;
    lVar10 = (local_1a8[0] - local_1b8) / 0x90 + lVar16;
    local_178 = pfVar8;
    if (lVar10 != lVar16 && -1 < lVar10 - lVar16) {
      lVar16 = ((longlong)iVar15 * 0x10 + lVar14) - (longlong)pfVar7;
      bVar4 = true;
      lVar14 = (longlong)pfVar8 - (longlong)local_198;
      pfVar8 = pfVar12;
      do {
        pfVar11 = (float *)((longlong)pfVar8 + local_1b8 + 0x10);
        fVar36 = pfVar11[3];
        pfVar1 = (float *)((longlong)pfVar8 + local_1b8);
        fVar74 = pfVar1[3];
        fVar57 = *pfVar11 - *pfVar1;
        fVar59 = pfVar11[1] - pfVar1[1];
        fVar61 = pfVar11[2] - pfVar1[2];
        fVar49 = fVar57 * fVar57;
        fVar50 = fVar59 * fVar59;
        fVar37 = fVar61 * fVar61;
        auVar44._0_4_ = fVar50 + fVar49 + fVar37;
        auVar44._4_4_ = fVar50 + fVar49 + fVar37;
        auVar44._8_4_ = fVar50 + fVar49 + fVar37;
        auVar44._12_4_ = fVar50 + fVar49 + fVar37;
        auVar39 = rsqrtps(auVar40,auVar44);
        fVar49 = auVar39._0_4_;
        fVar50 = auVar39._4_4_;
        fVar37 = auVar39._8_4_;
        fVar73 = auVar39._12_4_;
        auVar40._0_4_ = fVar49 * 0.5;
        auVar40._4_4_ = fVar50 * 0.5;
        auVar40._8_4_ = fVar37 * 0.5;
        auVar40._12_4_ = fVar73 * 0.5;
        fVar49 = (float)(~-(uint)(auVar44._0_4_ <= 0.0) &
                        (uint)((3.0 - fVar49 * auVar44._0_4_ * fVar49) * auVar40._0_4_));
        fVar50 = (float)(~-(uint)(auVar44._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar50 * auVar44._4_4_ * fVar50) * auVar40._4_4_));
        fVar51 = (float)(~-(uint)(auVar44._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar37 * auVar44._8_4_ * fVar37) * auVar40._8_4_));
        fVar52 = (float)(~-(uint)(auVar44._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar73 * auVar44._12_4_ * fVar73) * auVar40._12_4_));
        fVar37 = (0.0 - fVar74) * fVar49 * fVar57 + *pfVar1;
        fVar73 = (0.0 - fVar74) * fVar50 * fVar59 + pfVar1[1];
        fStack_160 = (0.0 - fVar74) * fVar51 * fVar61 + pfVar1[2];
        fStack_15c = (0.0 - fVar74) * fVar52 * (fVar36 - fVar74) + fVar74;
        local_188._0_4_ = ((0.0 - fVar36) * fVar49 * fVar57 + *pfVar11) - fVar37;
        local_188._4_4_ = ((0.0 - fVar36) * fVar50 * fVar59 + pfVar11[1]) - fVar73;
        fStack_180 = ((0.0 - fVar36) * fVar51 * fVar61 + pfVar11[2]) - fStack_160;
        fStack_17c = ((0.0 - fVar36) * fVar52 * (fVar36 - fVar74) + fVar36) - fStack_15c;
        local_168 = CONCAT44(fVar73,fVar37);
        uVar17 = *(uint *)((longlong)pfVar8 + local_1b8 + 0x70);
        fVar36 = (float)local_188._0_4_;
        fVar74 = (float)local_188._4_4_;
        fVar49 = fStack_180;
        fVar50 = fStack_17c;
        if ((uVar17 != 0xffffffff) &&
           (lVar10 = *(longlong *)
                      ((ulonglong)(uVar17 >> 0x16) * 0x100 + *(longlong *)(lVar9 + 0x38)),
           lVar10 != 0)) {
          local_148 = *(ulonglong *)(lVar10 + 0x40);
          lStack_140 = *(longlong *)(lVar10 + 0x48);
          local_138 = *(undefined8 *)(lVar10 + 0x50);
          uStack_130 = *(undefined8 *)(lVar10 + 0x58);
          local_128 = *(undefined8 *)(lVar10 + 0x60);
          uStack_120 = *(undefined8 *)(lVar10 + 0x68);
          local_118 = *(undefined8 *)(lVar10 + 0x70);
          uStack_110 = *(undefined8 *)(lVar10 + 0x78);
          FUN_143713830(&local_168,&local_148,&local_168);
          FUN_143713620(local_188,&local_148,local_188);
          fVar36 = (float)local_188._0_4_;
          fVar74 = (float)local_188._4_4_;
          fVar49 = fStack_180;
          fVar50 = fStack_17c;
          fVar37 = (float)local_168;
          fVar73 = local_168._4_4_;
        }
        fVar51 = fRam00000001467f07e8;
        fVar52 = fRam00000001467f07ec;
        fVar57 = _DAT_1467f07e0;
        fVar59 = fRam00000001467f07e4;
        if (bVar4) {
          fVar51 = fVar36 * fVar46;
          fVar52 = fVar74 * fVar34;
          fVar57 = fVar49 * fVar26;
          fVar70 = fVar52 + fVar51 + fVar57;
          fVar71 = fVar52 + fVar51 + fVar57;
          fVar72 = fVar52 + fVar51 + fVar57;
          fVar57 = fVar52 + fVar51 + fVar57;
          fVar51 = (fVar37 - fVar27) * fVar46;
          fVar52 = (fVar73 - fVar35) * fVar34;
          fVar59 = (fStack_160 - fVar38) * fVar26;
          fVar61 = (fVar37 - fVar27) * fVar36;
          fVar41 = (fVar73 - fVar35) * fVar74;
          fVar42 = (fStack_160 - fVar38) * fVar49;
          fVar67 = fVar52 + fVar51 + fVar59;
          fVar68 = fVar52 + fVar51 + fVar59;
          fVar69 = fVar52 + fVar51 + fVar59;
          fVar59 = fVar52 + fVar51 + fVar59;
          fVar27 = fVar46 * fVar46;
          fVar35 = fVar34 * fVar34;
          fVar38 = fVar26 * fVar26;
          fVar64 = fVar41 + fVar61 + fVar42;
          fVar65 = fVar41 + fVar61 + fVar42;
          fVar66 = fVar41 + fVar61 + fVar42;
          fVar42 = fVar41 + fVar61 + fVar42;
          auVar47._0_4_ = fVar35 + fVar27 + fVar38;
          auVar47._4_4_ = fVar35 + fVar27 + fVar38;
          auVar47._8_4_ = fVar35 + fVar27 + fVar38;
          auVar47._12_4_ = fVar35 + fVar27 + fVar38;
          fVar27 = fVar36 * fVar36;
          fVar35 = fVar74 * fVar74;
          auVar28._8_4_ = fVar49 * fVar49;
          auVar28._4_4_ = auVar28._8_4_;
          auVar28._0_4_ = auVar28._8_4_;
          auVar28._12_4_ = auVar28._8_4_;
          auVar56._0_4_ = fVar35 + fVar27 + auVar28._8_4_;
          auVar56._4_4_ = fVar35 + fVar27 + auVar28._8_4_;
          auVar56._8_4_ = fVar35 + fVar27 + auVar28._8_4_;
          auVar56._12_4_ = fVar35 + fVar27 + auVar28._8_4_;
          auVar39 = rcpps(auVar28,auVar56);
          fVar27 = auVar56._0_4_ * auVar47._0_4_ - fVar70 * fVar70;
          fVar35 = auVar56._4_4_ * auVar47._4_4_ - fVar71 * fVar71;
          fVar38 = auVar56._8_4_ * auVar47._8_4_ - fVar72 * fVar72;
          fVar51 = auVar56._12_4_ * auVar47._12_4_ - fVar57 * fVar57;
          auVar2._4_4_ = fVar35;
          auVar2._0_4_ = fVar27;
          auVar2._8_4_ = fVar38;
          auVar2._12_4_ = fVar51;
          auVar55 = rcpps(auVar44,auVar2);
          fVar52 = (2.0 - auVar39._0_4_ * auVar56._0_4_) * auVar39._0_4_;
          fVar61 = (2.0 - auVar39._4_4_ * auVar56._4_4_) * auVar39._4_4_;
          fVar41 = (2.0 - auVar39._8_4_ * auVar56._8_4_) * auVar39._8_4_;
          fVar54 = (2.0 - auVar39._12_4_ * auVar56._12_4_) * auVar39._12_4_;
          auVar39 = rcpps(auVar39,auVar47);
          fVar58 = (2.0 - auVar39._0_4_ * auVar47._0_4_) * auVar39._0_4_;
          fVar60 = (2.0 - auVar39._4_4_ * auVar47._4_4_) * auVar39._4_4_;
          fVar62 = (2.0 - auVar39._8_4_ * auVar47._8_4_) * auVar39._8_4_;
          fVar63 = (2.0 - auVar39._12_4_ * auVar47._12_4_) * auVar39._12_4_;
          fVar27 = (float)(~-(uint)(fVar27 == 0.0) &
                          (uint)((2.0 - auVar55._0_4_ * fVar27) * auVar55._0_4_)) *
                   (auVar56._0_4_ * fVar67 - fVar64 * fVar70);
          fVar35 = (float)(~-(uint)(fVar35 == 0.0) &
                          (uint)((2.0 - auVar55._4_4_ * fVar35) * auVar55._4_4_)) *
                   (auVar56._4_4_ * fVar68 - fVar65 * fVar71);
          fVar38 = (float)(~-(uint)(fVar38 == 0.0) &
                          (uint)((2.0 - auVar55._8_4_ * fVar38) * auVar55._8_4_)) *
                   (auVar56._8_4_ * fVar69 - fVar66 * fVar72);
          fVar51 = (float)(~-(uint)(fVar51 == 0.0) &
                          (uint)((2.0 - auVar55._12_4_ * fVar51) * auVar55._12_4_)) *
                   (auVar56._12_4_ * fVar59 - fVar42 * fVar57);
          uVar17 = -(uint)(fVar27 < DAT_1467f06f0);
          uVar6 = -(uint)(fVar35 < fRam00000001467f06f4);
          uVar18 = -(uint)(fVar38 < fRam00000001467f06f8);
          uVar19 = -(uint)(fVar51 < fRam00000001467f06fc);
          auVar21._0_4_ = ~uVar17 & (uint)DAT_1467f06f0;
          auVar21._4_4_ = ~uVar6 & (uint)fRam00000001467f06f4;
          auVar21._8_4_ = ~uVar18 & (uint)fRam00000001467f06f8;
          auVar21._12_4_ = ~uVar19 & (uint)fRam00000001467f06fc;
          auVar29._0_4_ = uVar17 & (uint)fVar27;
          auVar29._4_4_ = uVar6 & (uint)fVar35;
          auVar29._8_4_ = uVar18 & (uint)fVar38;
          auVar29._12_4_ = uVar19 & (uint)fVar51;
          auVar39 = maxps(ZEXT816(0),auVar21 | auVar29);
          fVar27 = auVar39._0_4_ * fVar52 * fVar70 - fVar52 * fVar64;
          fVar35 = auVar39._4_4_ * fVar61 * fVar71 - fVar61 * fVar65;
          fVar38 = auVar39._8_4_ * fVar41 * fVar72 - fVar41 * fVar66;
          fVar51 = auVar39._12_4_ * fVar54 * fVar57 - fVar54 * fVar42;
          uVar17 = -(uint)(fVar27 < DAT_1467f06f0);
          uVar6 = -(uint)(fVar35 < fRam00000001467f06f4);
          uVar18 = -(uint)(fVar38 < fRam00000001467f06f8);
          uVar19 = -(uint)(fVar51 < fRam00000001467f06fc);
          auVar30._0_4_ = ~uVar17 & (uint)DAT_1467f06f0;
          auVar30._4_4_ = ~uVar6 & (uint)fRam00000001467f06f4;
          auVar30._8_4_ = ~uVar18 & (uint)fRam00000001467f06f8;
          auVar30._12_4_ = ~uVar19 & (uint)fRam00000001467f06fc;
          auVar22._0_4_ = uVar17 & (uint)fVar27;
          auVar22._4_4_ = uVar6 & (uint)fVar35;
          auVar22._8_4_ = uVar18 & (uint)fVar38;
          auVar22._12_4_ = uVar19 & (uint)fVar51;
          auVar55 = maxps(ZEXT816(0),auVar22 | auVar30);
          auVar40._0_4_ = fVar58 * fVar70 * auVar55._0_4_ + fVar58 * fVar67;
          auVar40._4_4_ = fVar60 * fVar71 * auVar55._4_4_ + fVar60 * fVar68;
          auVar40._8_4_ = fVar62 * fVar72 * auVar55._8_4_ + fVar62 * fVar69;
          auVar40._12_4_ = fVar63 * fVar57 * auVar55._12_4_ + fVar63 * fVar59;
          auVar23._0_4_ = ~-(uint)(auVar40._0_4_ < DAT_1467f06f0) & (uint)DAT_1467f06f0;
          auVar23._4_4_ =
               ~-(uint)(auVar40._4_4_ < fRam00000001467f06f4) & (uint)fRam00000001467f06f4;
          auVar23._8_4_ =
               ~-(uint)(auVar40._8_4_ < fRam00000001467f06f8) & (uint)fRam00000001467f06f8;
          auVar23._12_4_ =
               ~-(uint)(auVar40._12_4_ < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
          auVar31._0_4_ = -(uint)(auVar40._0_4_ < DAT_1467f06f0) & (uint)auVar40._0_4_;
          auVar31._4_4_ = -(uint)(auVar40._4_4_ < fRam00000001467f06f4) & (uint)auVar40._4_4_;
          auVar31._8_4_ = -(uint)(auVar40._8_4_ < fRam00000001467f06f8) & (uint)auVar40._8_4_;
          auVar31._12_4_ = -(uint)(auVar40._12_4_ < fRam00000001467f06fc) & (uint)auVar40._12_4_;
          auVar39 = maxps(ZEXT816(0),auVar31 | auVar23);
          bVar4 = auVar39._0_4_ < DAT_1467f06f0;
          fVar27 = local_158;
          fVar35 = fStack_154;
          fVar38 = fStack_150;
          fVar51 = auVar55._8_4_;
          fVar52 = auVar55._12_4_;
          fVar57 = auVar55._0_4_;
          fVar59 = auVar55._4_4_;
        }
        uVar17 = (int)pfVar12 + 1;
        pfVar12 = (float *)(ulonglong)uVar17;
        pfVar8 = pfVar8 + 0x24;
        pfVar1 = (float *)(lVar16 + (longlong)pfVar7);
        *pfVar1 = fVar57 * fVar36 + fVar37;
        pfVar1[1] = fVar59 * fVar74 + fVar73;
        pfVar1[2] = fVar51 * fVar49 + fStack_160;
        pfVar1[3] = fVar52 * fVar50 + fStack_15c;
        *pfVar7 = fVar37;
        pfVar7[1] = fVar73;
        pfVar7[2] = fStack_160;
        pfVar7[3] = fStack_15c;
        pfVar1 = (float *)(lVar14 + (longlong)pfVar7);
        *pfVar1 = fVar36;
        pfVar1[1] = fVar74;
        pfVar1[2] = fVar49;
        pfVar1[3] = fVar50;
        pfVar7 = pfVar7 + 4;
        uVar6 = local_1b0;
      } while ((longlong)(int)uVar17 < (local_1a8[0] - local_1b8) / 0x90);
    }
    pfVar7 = local_198;
    iVar13 = 2;
    if (2 < (int)param_3[1] + -1) {
      pfVar12 = local_178;
      do {
        pfVar11 = pfVar12 + 4;
        fVar27 = *pfVar11;
        fVar35 = pfVar12[5];
        fVar38 = pfVar12[6];
        fVar26 = pfVar12[7];
        lVar9 = *param_3;
        pfVar12 = (float *)(((longlong)local_198 - (longlong)local_178) + (longlong)pfVar11);
        pfVar8 = (float *)((lVar9 - (longlong)local_178) + (longlong)pfVar11);
        pfVar1 = (float *)(lVar9 + (0x20 - (longlong)local_178) + (longlong)pfVar11);
        fVar36 = *pfVar12 - *pfVar8;
        fVar46 = pfVar12[1] - pfVar8[1];
        fVar50 = pfVar12[2] - pfVar8[2];
        fVar37 = *pfVar1 - *pfVar8;
        fVar73 = pfVar1[1] - pfVar8[1];
        fVar51 = pfVar1[2] - pfVar8[2];
        fVar34 = fVar27 * fVar37;
        fVar74 = fVar35 * fVar73;
        fVar49 = fVar38 * fVar51;
        fVar59 = fVar36 * fVar37;
        fVar61 = fVar46 * fVar73;
        fVar41 = fVar50 * fVar51;
        fVar37 = fVar37 * fVar37;
        fVar73 = fVar73 * fVar73;
        auVar45._8_4_ = fVar51 * fVar51;
        fVar60 = fVar74 + fVar34 + fVar49;
        fVar62 = fVar74 + fVar34 + fVar49;
        fVar63 = fVar74 + fVar34 + fVar49;
        fVar49 = fVar74 + fVar34 + fVar49;
        fVar36 = fVar27 * fVar36;
        fVar46 = fVar35 * fVar46;
        fVar50 = fVar38 * fVar50;
        auVar45._4_4_ = auVar45._8_4_;
        auVar45._0_4_ = auVar45._8_4_;
        auVar45._12_4_ = auVar45._8_4_;
        fVar42 = fVar46 + fVar36 + fVar50;
        fVar54 = fVar46 + fVar36 + fVar50;
        fVar58 = fVar46 + fVar36 + fVar50;
        fVar50 = fVar46 + fVar36 + fVar50;
        fVar34 = fVar27 * fVar27;
        fVar36 = fVar35 * fVar35;
        auVar32._8_4_ = fVar38 * fVar38;
        auVar32._4_4_ = auVar32._8_4_;
        auVar32._0_4_ = auVar32._8_4_;
        auVar32._12_4_ = auVar32._8_4_;
        fVar74 = fVar36 + fVar34 + auVar32._8_4_;
        fVar46 = fVar36 + fVar34 + auVar32._8_4_;
        fVar51 = fVar36 + fVar34 + auVar32._8_4_;
        fVar34 = fVar36 + fVar34 + auVar32._8_4_;
        auVar3._4_4_ = fVar46;
        auVar3._0_4_ = fVar74;
        auVar3._8_4_ = fVar51;
        auVar3._12_4_ = fVar34;
        auVar39 = rcpps(auVar32,auVar3);
        auVar48._0_4_ = fVar74 * (fVar73 + fVar37 + auVar45._8_4_) - fVar60 * fVar60;
        auVar48._4_4_ = fVar46 * (fVar73 + fVar37 + auVar45._8_4_) - fVar62 * fVar62;
        auVar48._8_4_ = fVar51 * (fVar73 + fVar37 + auVar45._8_4_) - fVar63 * fVar63;
        auVar48._12_4_ = fVar34 * (fVar73 + fVar37 + auVar45._8_4_) - fVar49 * fVar49;
        auVar55 = rcpps(auVar45,auVar48);
        fVar37 = (2.0 - fVar74 * auVar39._0_4_) * auVar39._0_4_;
        fVar73 = (2.0 - fVar46 * auVar39._4_4_) * auVar39._4_4_;
        fVar52 = (2.0 - fVar51 * auVar39._8_4_) * auVar39._8_4_;
        fVar57 = (2.0 - fVar34 * auVar39._12_4_) * auVar39._12_4_;
        fVar36 = ((fVar61 + fVar59 + fVar41) * fVar74 - fVar42 * fVar60) *
                 (float)(~-(uint)(auVar48._0_4_ == 0.0) &
                        (uint)((2.0 - auVar48._0_4_ * auVar55._0_4_) * auVar55._0_4_));
        fVar74 = ((fVar61 + fVar59 + fVar41) * fVar46 - fVar54 * fVar62) *
                 (float)(~-(uint)(auVar48._4_4_ == 0.0) &
                        (uint)((2.0 - auVar48._4_4_ * auVar55._4_4_) * auVar55._4_4_));
        fVar46 = ((fVar61 + fVar59 + fVar41) * fVar51 - fVar58 * fVar63) *
                 (float)(~-(uint)(auVar48._8_4_ == 0.0) &
                        (uint)((2.0 - auVar48._8_4_ * auVar55._8_4_) * auVar55._8_4_));
        fVar34 = ((fVar61 + fVar59 + fVar41) * fVar34 - fVar50 * fVar49) *
                 (float)(~-(uint)(auVar48._12_4_ == 0.0) &
                        (uint)((2.0 - auVar48._12_4_ * auVar55._12_4_) * auVar55._12_4_));
        uVar17 = -(uint)(fVar36 < DAT_1467f06f0);
        uVar18 = -(uint)(fVar74 < fRam00000001467f06f4);
        uVar19 = -(uint)(fVar46 < fRam00000001467f06f8);
        uVar20 = -(uint)(fVar34 < fRam00000001467f06fc);
        auVar53._0_4_ = (uint)fVar36 & uVar17;
        auVar53._4_4_ = (uint)fVar74 & uVar18;
        auVar53._8_4_ = (uint)fVar46 & uVar19;
        auVar53._12_4_ = (uint)fVar34 & uVar20;
        auVar24._0_4_ = ~uVar17 & (uint)DAT_1467f06f0;
        auVar24._4_4_ = ~uVar18 & (uint)fRam00000001467f06f4;
        auVar24._8_4_ = ~uVar19 & (uint)fRam00000001467f06f8;
        auVar24._12_4_ = ~uVar20 & (uint)fRam00000001467f06fc;
        auVar39 = maxps(ZEXT816(0),auVar53 | auVar24);
        iVar13 = iVar13 + 1;
        fVar34 = auVar39._0_4_ * fVar37 * fVar60 - fVar37 * fVar42;
        fVar36 = auVar39._4_4_ * fVar73 * fVar62 - fVar73 * fVar54;
        fVar74 = auVar39._8_4_ * fVar52 * fVar63 - fVar52 * fVar58;
        fVar46 = auVar39._12_4_ * fVar57 * fVar49 - fVar57 * fVar50;
        uVar17 = -(uint)(fVar34 < DAT_1467f06f0);
        uVar18 = -(uint)(fVar36 < fRam00000001467f06f4);
        uVar19 = -(uint)(fVar74 < fRam00000001467f06f8);
        uVar20 = -(uint)(fVar46 < fRam00000001467f06fc);
        auVar33._0_4_ = (uint)fVar34 & uVar17;
        auVar33._4_4_ = (uint)fVar36 & uVar18;
        auVar33._8_4_ = (uint)fVar74 & uVar19;
        auVar33._12_4_ = (uint)fVar46 & uVar20;
        auVar25._0_4_ = ~uVar17 & (uint)DAT_1467f06f0;
        auVar25._4_4_ = ~uVar18 & (uint)fRam00000001467f06f4;
        auVar25._8_4_ = ~uVar19 & (uint)fRam00000001467f06f8;
        auVar25._12_4_ = ~uVar20 & (uint)fRam00000001467f06fc;
        auVar39 = maxps(ZEXT816(0),auVar33 | auVar25);
        pfVar12 = (float *)(((longlong)local_198 - (longlong)local_178) + (longlong)pfVar11);
        fVar34 = pfVar12[1];
        fVar36 = pfVar12[2];
        fVar74 = pfVar12[3];
        pfVar8 = (float *)(lVar9 + (0x10 - (longlong)local_178) + (longlong)pfVar11);
        *pfVar8 = auVar39._0_4_ * fVar27 + *pfVar12;
        pfVar8[1] = auVar39._4_4_ * fVar35 + fVar34;
        pfVar8[2] = auVar39._8_4_ * fVar38 + fVar36;
        pfVar8[3] = auVar39._12_4_ * fVar26 + fVar74;
        pfVar12 = pfVar11;
      } while (iVar13 < (int)param_3[1] + -1);
    }
    if (-1 < (int)local_1ac) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_178,0x10,local_1ac & 0x3fffffff);
    }
    if (-1 < (int)uVar6) {
      FUN_143702e10(&PTR_vftable_1467f0638,pfVar7,0x10,uVar6 & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 14386d630 FUN_14386d630 body=923 status=ok
// SIG undefined FUN_14386d630(void)

/* WARNING: Removing unreachable block (ram,0x00014386d804) */
/* WARNING: Removing unreachable block (ram,0x00014386d7ff) */
/* WARNING: Removing unreachable block (ram,0x00014386d80a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14386d630(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 local_res8 [16];
  longlong local_res18;
  longlong local_res20;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1438798e0(*(longlong *)(param_1 + 0x70),param_1 + 0x78,&local_res20,&local_res18);
    lVar18 = param_2[1];
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x130);
    lVar14 = (local_res18 - local_res20) / 0x12 + (local_res18 - local_res20 >> 0x3f);
    iVar16 = (int)(lVar14 >> 3) - (int)(lVar14 >> 0x3f);
    uVar13 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
    iVar17 = (int)lVar18 + iVar16;
    if ((int)uVar13 < iVar17) {
      iVar3 = uVar13 * 2;
      if (iVar17 < iVar3) {
        iVar17 = iVar3;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_2,iVar17,0x20);
    }
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar16;
    iVar16 = 0;
    pauVar15 = (undefined1 (*) [16])((longlong)(int)lVar18 * 0x20 + *param_2);
    auVar20 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x28) + 0x20);
    lVar18 = local_res18 - local_res20 >> 0x3f;
    lVar14 = (local_res18 - local_res20) / 0x90 + lVar18;
    if (lVar14 != lVar18 && -1 < lVar14 - lVar18) {
      lVar18 = 0;
      auVar33 = auVar20;
      do {
        lVar14 = lVar18 + local_res20;
        FUN_143879770(lVar14,lVar1,&local_f8,&local_e8);
        auVar34._4_4_ = fStack_f4;
        auVar34._0_4_ = local_f8;
        auVar34._8_4_ = fStack_f0;
        auVar34._12_4_ = fStack_ec;
        auVar35._4_4_ = fStack_e4;
        auVar35._0_4_ = local_e8;
        auVar35._8_4_ = fStack_e0;
        auVar35._12_4_ = fStack_dc;
        auVar19 = minps(auVar20,auVar33);
        auVar33 = maxps(auVar20,auVar33);
        auVar20 = minps(auVar19,auVar34);
        auVar33 = maxps(auVar33,auVar34);
        auVar20 = minps(auVar20,auVar35);
        auVar33 = maxps(auVar33,auVar35);
        *pauVar15 = auVar20;
        pauVar15[1] = auVar33;
        fVar24 = fRam00000001467f06fc;
        if (((*(byte *)(lVar14 + 0x80) & 0x10) != 0) && (lVar14 + 0x90 != local_res18)) {
          lVar2 = *(longlong *)
                   ((ulonglong)(*(uint *)(lVar14 + 0x100) >> 0x16) * 0x100 +
                   *(longlong *)(lVar1 + 0x38));
          fVar21 = *(float *)(lVar2 + 0x70);
          fVar22 = *(float *)(lVar2 + 0x74);
          fVar23 = *(float *)(lVar2 + 0x78);
          fVar5 = *(float *)(lVar2 + 0x40);
          fVar6 = *(float *)(lVar2 + 0x44);
          fVar4 = *(float *)(lVar2 + 0x48);
          fVar8 = *(float *)(lVar2 + 0x50);
          fVar9 = *(float *)(lVar2 + 0x54);
          fVar7 = *(float *)(lVar2 + 0x58);
          fVar11 = *(float *)(lVar2 + 0x60);
          fVar12 = *(float *)(lVar2 + 100);
          fVar10 = *(float *)(lVar2 + 0x68);
          local_d8 = _DAT_1467f08f0;
          uStack_d0 = uRam00000001467f08f8;
          FUN_143786e90(&local_c8,local_res8,lVar14 + 0x30,&local_d8);
          fVar36 = fStack_c4 * fVar8 + local_c8 * fVar5 + fStack_c0 * fVar11;
          fVar37 = fStack_c4 * fVar9 + local_c8 * fVar6 + fStack_c0 * fVar12;
          fVar38 = fStack_c4 * fVar7 + local_c8 * fVar4 + fStack_c0 * fVar10;
          fVar39 = fStack_c4 * 0.0 + local_c8 * 0.0 + fStack_c0 * 0.0;
          fVar29 = fStack_b4 * fVar8 + local_b8 * fVar5 + fStack_b0 * fVar11;
          fVar30 = fStack_b4 * fVar9 + local_b8 * fVar6 + fStack_b0 * fVar12;
          fVar31 = fStack_b4 * fVar7 + local_b8 * fVar4 + fStack_b0 * fVar10;
          fVar32 = fStack_b4 * 0.0 + local_b8 * 0.0 + fStack_b0 * 0.0;
          fVar25 = fStack_a4 * fVar8 + local_a8 * fVar5 + fStack_a0 * fVar11;
          fVar26 = fStack_a4 * fVar9 + local_a8 * fVar6 + fStack_a0 * fVar12;
          fVar27 = fStack_a4 * fVar7 + local_a8 * fVar4 + fStack_a0 * fVar10;
          fVar28 = fStack_a4 * 0.0 + local_a8 * 0.0 + fStack_a0 * 0.0;
          fVar21 = local_98 * fVar5 + fVar21 + fStack_94 * fVar8 + fStack_90 * fVar11;
          fVar22 = local_98 * fVar6 + fVar22 + fStack_94 * fVar9 + fStack_90 * fVar12;
          fVar23 = local_98 * fVar4 + fVar23 + fStack_94 * fVar7 + fStack_90 * fVar10;
          fVar24 = local_98 * 0.0 + fVar24 + fStack_94 * 0.0 + fStack_90 * 0.0;
          auVar34._0_4_ =
               fStack_f4 * fVar29 + local_f8 * fVar36 + fStack_f0 * fVar25 + fStack_ec * fVar21;
          auVar34._4_4_ =
               fStack_f4 * fVar30 + local_f8 * fVar37 + fStack_f0 * fVar26 + fStack_ec * fVar22;
          auVar34._8_4_ =
               fStack_f4 * fVar31 + local_f8 * fVar38 + fStack_f0 * fVar27 + fStack_ec * fVar23;
          auVar34._12_4_ =
               fStack_f4 * fVar32 + local_f8 * fVar39 + fStack_f0 * fVar28 + fStack_ec * fVar24;
          auVar35._0_4_ =
               fStack_e4 * fVar29 + local_e8 * fVar36 + fStack_e0 * fVar25 + fStack_dc * fVar21;
          auVar35._4_4_ =
               fStack_e4 * fVar30 + local_e8 * fVar37 + fStack_e0 * fVar26 + fStack_dc * fVar22;
          auVar35._8_4_ =
               fStack_e4 * fVar31 + local_e8 * fVar38 + fStack_e0 * fVar27 + fStack_dc * fVar23;
          auVar35._12_4_ =
               fStack_e4 * fVar32 + local_e8 * fVar39 + fStack_e0 * fVar28 + fStack_dc * fVar24;
        }
        iVar16 = iVar16 + 1;
        lVar18 = lVar18 + 0x90;
        pauVar15 = pauVar15 + 2;
        auVar20 = auVar34;
        auVar33 = auVar35;
      } while ((longlong)iVar16 < (local_res18 - local_res20) / 0x90);
    }
  }
  return;
}



// FUNCTION 14386d9d0 FUN_14386d9d0 body=690 status=ok
// SIG undefined FUN_14386d9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14386d9d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  LPVOID pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_d78;
  undefined4 local_d70;
  undefined4 local_d6c;
  undefined4 local_d68;
  undefined4 uStack_d64;
  undefined4 uStack_d60;
  undefined4 uStack_d5c;
  undefined8 local_d58;
  undefined4 local_d50;
  undefined1 local_d4c;
  undefined8 local_d48;
  undefined4 local_d40;
  undefined1 local_d3c;
  undefined1 local_d38 [3360];
  
  *(undefined4 *)(param_1 + 6) = 4;
  lVar4 = FUN_14386af60();
  if (lVar4 != 0) {
    lVar6 = *(longlong *)(lVar4 + 0x20);
    lVar2 = *(longlong *)(lVar4 + 0x18);
    if (((*(char *)((longlong)param_1 + 0x121) == '\0') || (*(char *)(lVar6 + 0x4d) != '\x01')) ||
       (*(int *)(param_1[4] + 0x2e8) <= *(int *)(lVar6 + 0x40))) {
      if (param_1[0xe] != 0) {
        FUN_14370c150();
      }
      uVar7 = 0;
      param_1[0xe] = 0;
      if (*(int *)(param_1[5] + 0xb4) == 7) {
        *(undefined4 *)(param_1 + 0x1a) = 4;
      }
      else {
        *(undefined4 *)(param_1[5] + 0xb4) = 4;
      }
      *(undefined1 *)((longlong)param_1 + 0x119) = 0;
      if (*(int *)(lVar2 + 0x40) == -1) {
        *(undefined4 *)(param_1 + 6) = 1;
      }
      else {
        cVar1 = *(char *)(lVar6 + 0x4c);
        if (cVar1 == '\x05') {
          *(undefined4 *)(param_1 + 6) = 2;
        }
        else if ((cVar1 == '\x02') || ((cVar1 == '\x03' && (*(int *)(lVar6 + 0x20) == 0)))) {
          *(undefined4 *)(param_1 + 6) = 3;
        }
        else {
          *(undefined4 *)(param_1 + 6) = 0;
          *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(*(longlong *)(lVar4 + 0x20) + 0x44);
          pvVar5 = TlsGetValue(DAT_146b7bf70);
          if (pvVar5 == (LPVOID)0x0) {
            pvVar5 = DAT_146b7bf68;
          }
          lVar6 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                            (*(longlong **)((longlong)pvVar5 + 0x58),0x48);
          if (lVar6 != 0) {
            uVar7 = FUN_143878460(lVar6);
          }
          FUN_14386e170(param_1 + 0xe,uVar7);
          lVar6 = *(longlong *)(param_1[5] + 0xa0);
          local_d78 = 0;
          local_d70 = 0xffffffff;
          local_d6c = 0;
          local_d68 = _DAT_1467f06e0;
          uStack_d64 = uRam00000001467f06e4;
          uStack_d60 = uRam00000001467f06e8;
          uStack_d5c = DAT_1467f06ec;
          local_d58 = 0;
          local_d50 = 0;
          local_d4c = 0xff;
          local_d48 = 0;
          local_d40 = 0;
          local_d3c = 0;
          FUN_14389b0c0(&local_d78,param_1[5],*(undefined8 *)(param_1[4] + 0x130));
          FUN_143897b00(local_d38,&local_d78);
          FUN_1438794e0(param_1[0xe],*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),
                        *(undefined4 *)(param_1[5] + 0x68),*(undefined4 *)(lVar6 + 0x28),
                        *(undefined4 *)(lVar6 + 0x2c),param_1[4] + 0x120,
                        *(undefined8 *)(param_1[4] + 0x130),local_d38);
          iVar3 = FUN_143879a60(param_1[0xe]);
          if (iVar3 == 0) {
            TMeshAttributeArraySet<int>::GetNumIndices(param_1[0xe]);
          }
          FUN_143879c20(param_1[0xe],param_1 + 0xf);
          *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
          if (*(int *)(param_1[5] + 0xb4) == 7) {
            *(undefined4 *)(param_1 + 0x1a) = 1;
          }
          else {
            *(undefined4 *)(param_1[5] + 0xb4) = 1;
          }
          FUN_143897e50(local_d38);
        }
      }
      *(undefined1 *)(lVar4 + 0x35) = 1;
    }
    else {
      *(undefined1 *)(lVar4 + 0x35) = 1;
      (**(code **)(*param_1 + 0xa0))(param_1,*(int *)(lVar4 + 0x30) + 1);
    }
  }
  return;
}



// FUNCTION 14386dc90 FUN_14386dc90 body=9 status=ok
// SIG undefined FUN_14386dc90(void)

bool FUN_14386dc90(longlong param_1)

{
  return *(longlong *)(param_1 + 0x70) != 0;
}



// FUNCTION 14386dca0 FUN_14386dca0 body=277 status=ok
// SIG undefined FUN_14386dca0(void)

ulonglong FUN_14386dca0(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint local_res8 [2];
  longlong local_res18;
  longlong local_res20;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x60);
  if (uVar3 != 0xffffffff) {
    local_res8[0] = uVar3 >> 0x16;
    lVar1 = FUN_14383df10(param_2 + 0x18,local_res8);
    if (((lVar1 != 0) && (-1 < *(int *)(lVar1 + 4))) &&
       ((*(byte *)(*(longlong *)(param_2 + 0x18) + 4 + (longlong)*(int *)(lVar1 + 4) * 8) >> 1 & 1)
        != 0)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x18) >> 8),1);
    }
  }
  FUN_1438798e0(*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,&local_res20,&local_res18);
  uVar2 = 0xffffffff;
  lVar1 = local_res18;
  if (local_res20 != local_res18) {
    do {
      uVar3 = *(uint *)(local_res20 + 0x70) >> 0x16;
      if (uVar3 != (uint)uVar2) {
        local_res8[0] = uVar3;
        lVar1 = FUN_14383df10(param_2 + 0x18,local_res8);
        if (((lVar1 != 0) && (-1 < *(int *)(lVar1 + 4))) &&
           ((*(byte *)(*(longlong *)(param_2 + 0x18) + 4 + (longlong)*(int *)(lVar1 + 4) * 8) >> 1 &
            1) != 0)) {
          return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x18) >> 8),1);
        }
        uVar2 = (ulonglong)uVar3;
        lVar1 = local_res18;
      }
      local_res20 = local_res20 + 0x90;
    } while (local_res20 != lVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 14386ddc0 FUN_14386ddc0 body=486 status=ok
// SIG undefined FUN_14386ddc0(void)

undefined8 FUN_14386ddc0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar17 = 0;
  uVar18 = uVar17;
  uVar20 = uVar17;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0xc0)) {
    do {
      plVar4 = *(longlong **)(uVar18 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8));
      cVar15 = (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
      if (cVar15 == '\0') {
        return 0;
      }
      uVar19 = (int)uVar20 + 1;
      uVar18 = uVar18 + 8;
      uVar20 = (ulonglong)uVar19;
    } while ((int)uVar19 < *(int *)(*(longlong *)(param_1 + 0x10) + 0xc0));
  }
  local_38 = *(undefined4 *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_2 + 0x18);
  uStack_34 = local_38;
  uStack_30 = local_38;
  uStack_2c = local_38;
  FUN_1438a3b70(param_3,*(longlong *)(param_1 + 8) + 0x120,*(undefined8 *)(param_1 + 0x10),lVar5,
                &local_38,*(undefined4 *)(param_1 + 0x4c));
  if (*(int *)(lVar5 + 0x40) != -1) {
    iVar3 = *(int *)(lVar5 + 0x50);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      uVar16 = FUN_143703a50();
      uVar19 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
      if ((int)uVar19 < iVar3) {
        iVar7 = uVar19 * 2;
        iVar6 = iVar3;
        if (iVar3 < iVar7) {
          iVar6 = iVar7;
        }
        FUN_14370c310(uVar16,param_1 + 0x30,iVar6,0x20);
      }
      *(int *)(param_1 + 0x38) = iVar3;
      uVar18 = uVar17;
      uVar20 = uVar17;
      if (0 < iVar3) {
        do {
          pfVar2 = (float *)(uVar20 + *(longlong *)(lVar5 + 0x30));
          lVar1 = uVar17 * 4;
          uVar17 = uVar17 + 1;
          uVar19 = *(uint *)(*(longlong *)(lVar5 + 0x48) + lVar1) >> 0x16;
          lVar1 = *(longlong *)((ulonglong)uVar19 * 0x100 + *(longlong *)(param_3 + 0x38));
          fVar21 = *pfVar2 - *(float *)(lVar1 + 0x70);
          fVar22 = pfVar2[1] - *(float *)(lVar1 + 0x74);
          fVar23 = pfVar2[2] - *(float *)(lVar1 + 0x78);
          fVar8 = *(float *)(lVar1 + 0x60);
          fVar9 = *(float *)(lVar1 + 100);
          fVar10 = *(float *)(lVar1 + 0x68);
          fVar11 = *(float *)(lVar1 + 0x6c);
          fVar12 = *(float *)(lVar1 + 0x58);
          fVar13 = *(float *)(lVar1 + 0x50);
          fVar14 = *(float *)(lVar1 + 0x54);
          pfVar2 = (float *)(uVar18 + *(longlong *)(param_1 + 0x30));
          *pfVar2 = *(float *)(lVar1 + 0x44) * fVar22 + fVar21 * *(float *)(lVar1 + 0x40) +
                    *(float *)(lVar1 + 0x48) * fVar23;
          pfVar2[1] = fVar14 * fVar22 + fVar21 * fVar13 + fVar12 * fVar23;
          pfVar2[2] = fVar9 * fVar22 + fVar21 * fVar8 + fVar10 * fVar23;
          pfVar2[3] = fVar11 * fVar22 + fVar21 * fVar9 + fVar11 * fVar23;
          *(uint *)(uVar18 + 0x10 + *(longlong *)(param_1 + 0x30)) = uVar19;
          uVar18 = uVar18 + 0x20;
          uVar20 = uVar20 + 0x10;
        } while ((longlong)uVar17 < (longlong)iVar3);
      }
      *(undefined1 *)(lVar5 + 0x91) = 0;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14386dfb0 FUN_14386dfb0 body=98 status=ok
// SIG undefined FUN_14386dfb0(void)

uint FUN_14386dfb0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_228,"hkaiEdgeFollowingBehavior is not for volumes");
  iVar2 = FUN_143732300(0x478e0ff8,local_208,"Character\\Behavior\\hkaiEdgeFollowingBehavior.cpp",
                        0x3aa);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = FUN_143713520(local_228);
  return uVar3 & 0xffffff00;
}



// FUNCTION 14386e020 FUN_14386e020 body=52 status=ok
// SIG undefined FUN_14386e020(void)

void FUN_14386e020(longlong *param_1)

{
  *(int *)(param_1[5] + 0xb4) = (int)param_1[0x1a];
  *(undefined4 *)(param_1 + 0x1a) = 7;
  if (*(int *)(param_1[5] + 0xb4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014386e04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14386e060 FUN_14386e060 body=263 status=ok
// SIG undefined FUN_14386e060(void)

void FUN_14386e060(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_18;
  int local_10;
  uint local_c;
  
  if (param_1[0xe] != 0) {
    FUN_14370c150();
  }
  param_1[0xe] = 0;
  *(undefined1 *)((longlong)param_1 + 0x119) = 0;
  lVar1 = FUN_1438a0800(param_1[4],param_1 + 3);
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x30);
    if (*(int *)(lVar1 + 0x30) < param_2) {
      iVar2 = param_2;
    }
    *(int *)(lVar1 + 0x30) = iVar2;
    return;
  }
  if ((int)param_1[10] != 0) {
    if (*(int *)(param_1[5] + 0xb4) == 7) {
      *(undefined4 *)(param_1 + 0x1a) = 0;
      return;
    }
    *(undefined4 *)(param_1[5] + 0xb4) = 0;
    local_18 = 0;
    local_10 = 0;
    local_c = 0x80000000;
    (**(code **)(*param_1 + 0x90))(param_1,&local_18);
    if (0 < local_10) {
      (**(code **)(*param_1 + 0x48))(param_1,local_18,local_10,param_2);
    }
    local_10 = 0;
    if (-1 < (int)local_c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_18,0x10,local_c & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 14386e170 FUN_14386e170 body=48 status=ok
// SIG undefined FUN_14386e170(void)

void FUN_14386e170(longlong *param_1,longlong param_2)

{
  if (param_2 != *param_1) {
    if (*param_1 != 0) {
      FUN_14370c150();
    }
    *param_1 = param_2;
  }
  return;
}



// FUNCTION 14386e1a0 FUN_14386e1a0 body=34 status=ok
// SIG undefined FUN_14386e1a0(void)

void FUN_14386e1a0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xb4);
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xb4) = 7;
  return;
}



// FUNCTION 14386e1d0 FUN_14386e1d0 body=1587 status=ok
// SIG undefined FUN_14386e1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14386e1d0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_118;
  float fStack_114;
  float fStack_110;
  uint local_108 [4];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  uint local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar1 = param_1[5];
  iVar3 = *(int *)(lVar1 + 0xb4);
  if ((((iVar3 != 6) && (*(int *)((longlong)param_1 + 0x84) == 6)) ||
      ((iVar3 != 5 && (*(int *)((longlong)param_1 + 0x84) == 5)))) ||
     ((iVar3 != 0 && (*(int *)((longlong)param_1 + 0x84) == 0)))) {
    (**(code **)(*param_1 + 0xa0))(param_1,0);
  }
  iVar3 = *(int *)(lVar1 + 0xc0);
  if (iVar3 < 1) {
    if ((*(int *)((longlong)param_1 + 0x84) == 7) && (*(int *)(lVar1 + 0xb4) != 7)) {
      (**(code **)(*param_1 + 0xb0))(param_1,0xffffffff);
      *(int *)(param_1 + 0x12) = (int)param_1[0x10];
      return;
    }
    *(int *)(lVar1 + 0xb4) = *(int *)((longlong)param_1 + 0x84);
    *(int *)(param_1 + 0x12) = (int)param_1[0x10];
    return;
  }
  iVar9 = (int)param_1[6];
  uVar8 = 0;
  if (iVar9 == 0) {
    uVar7 = uVar8;
    uVar10 = uVar8;
    if (0 < iVar3) {
      do {
        plVar2 = *(longlong **)(uVar10 + *(longlong *)(lVar1 + 0xb8));
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1,lVar1);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 8;
      } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
    }
  }
  else if (iVar9 == 1) {
    uVar7 = uVar8;
    uVar10 = uVar8;
    if (0 < iVar3) {
      do {
        plVar2 = *(longlong **)(uVar10 + *(longlong *)(lVar1 + 0xb8));
        (**(code **)(*plVar2 + 0x18))(plVar2,param_1,lVar1,0);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 8;
      } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
    }
  }
  else if (iVar9 == 2) {
    uVar7 = uVar8;
    uVar10 = uVar8;
    if (0 < iVar3) {
      do {
        plVar2 = *(longlong **)(uVar10 + *(longlong *)(lVar1 + 0xb8));
        (**(code **)(*plVar2 + 0x18))(plVar2,param_1,lVar1,1);
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 8;
      } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
    }
  }
  else if ((iVar9 == 3) && (uVar7 = uVar8, uVar10 = uVar8, 0 < iVar3)) {
    do {
      plVar2 = *(longlong **)(uVar10 + *(longlong *)(lVar1 + 0xb8));
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,lVar1,2);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar10 = uVar10 + 8;
    } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
  }
  if (param_1[0xe] != 0) {
    iVar3 = (int)param_1[0x10];
    if ((int)param_1[0x12] < iVar3) {
      if ((*(int *)((longlong)param_1 + 0x84) == 7) && (*(int *)(lVar1 + 0xb4) != 7)) {
        (**(code **)(*param_1 + 0xb0))(param_1,0xffffffff);
      }
      pfVar4 = (float *)hkaiEdgePath::getEdge(param_1[0xe],(int)param_1[0x10]);
      local_88 = param_1[4];
      local_108[0] = (uint)pfVar4[0x1c] >> 0x16;
      lVar5 = *(longlong *)
               ((ulonglong)local_108[0] * 0x100 +
               *(longlong *)(*(longlong *)(local_88 + 0x130) + 0x38));
      local_78 = *(undefined8 *)(lVar5 + 0x40);
      uStack_70 = *(undefined8 *)(lVar5 + 0x48);
      local_68 = *(undefined8 *)(lVar5 + 0x50);
      uStack_60 = *(undefined8 *)(lVar5 + 0x58);
      local_58 = *(undefined4 *)(lVar5 + 0x60);
      uStack_54 = *(undefined4 *)(lVar5 + 100);
      uStack_50 = *(undefined4 *)(lVar5 + 0x68);
      uStack_4c = *(undefined4 *)(lVar5 + 0x6c);
      local_48 = *(undefined8 *)(lVar5 + 0x70);
      uStack_40 = *(undefined8 *)(lVar5 + 0x78);
      FUN_143713730(&local_118,&local_78,param_1[5] + 0x20);
      fVar25 = *pfVar4 - pfVar4[4];
      fVar26 = pfVar4[1] - pfVar4[5];
      fVar27 = pfVar4[2] - pfVar4[6];
      fVar28 = *pfVar4 - local_118;
      fVar29 = pfVar4[1] - fStack_114;
      fVar30 = pfVar4[2] - fStack_110;
      fVar14 = fVar25 * fVar25;
      fVar17 = fVar26 * fVar26;
      fVar18 = fVar27 * fVar27;
      auVar19._0_4_ = fVar17 + fVar14 + fVar18;
      auVar19._4_4_ = fVar17 + fVar14 + fVar18;
      auVar19._8_4_ = fVar17 + fVar14 + fVar18;
      auVar19._12_4_ = fVar17 + fVar14 + fVar18;
      fVar14 = fVar28 * fVar25;
      fVar17 = fVar29 * fVar26;
      auVar24._8_4_ = fVar30 * fVar27;
      auVar24._4_4_ = auVar24._8_4_;
      auVar24._0_4_ = auVar24._8_4_;
      auVar24._12_4_ = auVar24._8_4_;
      auVar15 = rcpps(auVar24,auVar19);
      fVar18 = (2.0 - auVar15._0_4_ * auVar19._0_4_) * auVar15._0_4_ *
               (fVar17 + fVar14 + auVar24._8_4_);
      fVar22 = (2.0 - auVar15._4_4_ * auVar19._4_4_) * auVar15._4_4_ *
               (fVar17 + fVar14 + auVar24._8_4_);
      fVar23 = (2.0 - auVar15._8_4_ * auVar19._8_4_) * auVar15._8_4_ *
               (fVar17 + fVar14 + auVar24._8_4_);
      fVar14 = (2.0 - auVar15._12_4_ * auVar19._12_4_) * auVar15._12_4_ *
               (fVar17 + fVar14 + auVar24._8_4_);
      uVar6 = -(uint)(fVar18 < DAT_1467f06f0);
      uVar11 = -(uint)(fVar22 < fRam00000001467f06f4);
      uVar12 = -(uint)(fVar23 < fRam00000001467f06f8);
      uVar13 = -(uint)(fVar14 < fRam00000001467f06fc);
      auVar20._0_4_ = (uint)fVar18 & uVar6;
      auVar20._4_4_ = (uint)fVar22 & uVar11;
      auVar20._8_4_ = (uint)fVar23 & uVar12;
      auVar20._12_4_ = (uint)fVar14 & uVar13;
      auVar15._0_4_ = ~uVar6 & (uint)DAT_1467f06f0;
      auVar15._4_4_ = ~uVar11 & (uint)fRam00000001467f06f4;
      auVar15._8_4_ = ~uVar12 & (uint)fRam00000001467f06f8;
      auVar15._12_4_ = ~uVar13 & (uint)fRam00000001467f06fc;
      auVar24 = maxps(ZEXT816(0),auVar20 | auVar15);
      uStack_ec = auVar24._12_4_;
      fVar28 = fVar28 - auVar24._0_4_ * fVar25;
      fVar29 = fVar29 - auVar24._4_4_ * fVar26;
      fVar30 = fVar30 - auVar24._8_4_ * fVar27;
      fVar14 = fVar28 * fVar28;
      fVar17 = fVar29 * fVar29;
      auVar16._8_4_ = fVar30 * fVar30;
      auVar16._4_4_ = auVar16._8_4_;
      auVar16._0_4_ = auVar16._8_4_;
      auVar16._12_4_ = auVar16._8_4_;
      auVar21._0_4_ = fVar17 + fVar14 + auVar16._8_4_;
      auVar21._4_4_ = fVar17 + fVar14 + auVar16._8_4_;
      auVar21._8_4_ = fVar17 + fVar14 + auVar16._8_4_;
      auVar21._12_4_ = fVar17 + fVar14 + auVar16._8_4_;
      iVar9 = (int)param_1[0x10] + 1;
      auVar24 = rsqrtps(auVar16,auVar21);
      fVar14 = auVar24._0_4_;
      fVar17 = auVar24._4_4_;
      fVar18 = auVar24._8_4_;
      local_f8 = (float)(~-(uint)(auVar21._0_4_ <= 0.0) &
                        (uint)((3.0 - auVar21._0_4_ * fVar14 * fVar14) * fVar14 * 0.5)) *
                 (local_118 - (fVar28 + local_118)) * _DAT_1467f06e0 + fVar28 + local_118;
      fStack_f4 = (float)(~-(uint)(auVar21._4_4_ <= 0.0) &
                         (uint)((3.0 - auVar21._4_4_ * fVar17 * fVar17) * fVar17 * 0.5)) *
                  (fStack_114 - (fVar29 + fStack_114)) * fRam00000001467f06e4 + fVar29 + fStack_114;
      fStack_f0 = (float)(~-(uint)(auVar21._8_4_ <= 0.0) &
                         (uint)((3.0 - auVar21._8_4_ * fVar18 * fVar18) * fVar18 * 0.5)) *
                  (fStack_110 - (fVar30 + fStack_110)) * fRam00000001467f06e8 + fVar30 + fStack_110;
      iVar3 = TMeshAttributeArraySet<int>::GetNumIndices(param_1[0xe]);
      if (iVar9 < iVar3) {
        lVar5 = hkaiEdgePath::getEdge(param_1[0xe],iVar9);
        local_e0 = *(uint *)(lVar5 + 0x70) >> 0x16;
      }
      else {
        local_e0 = 0xffffffff;
      }
      local_c8 = *(undefined8 *)(pfVar4 + 0xc);
      uStack_c0 = *(undefined8 *)(pfVar4 + 0xe);
      local_b8 = *(undefined8 *)(pfVar4 + 0x10);
      uStack_b0 = *(undefined8 *)(pfVar4 + 0x12);
      local_a8 = pfVar4[0x14];
      fStack_a4 = pfVar4[0x15];
      fStack_a0 = pfVar4[0x16];
      fStack_9c = pfVar4[0x17];
      local_98 = *(undefined8 *)(pfVar4 + 0x18);
      uStack_90 = *(undefined8 *)(pfVar4 + 0x1a);
      local_e8 = FUN_143879720(param_1[0xe],(int)param_1[0x10]);
      local_d8 = *pfVar4 - pfVar4[4];
      fStack_d4 = pfVar4[1] - pfVar4[5];
      fStack_d0 = pfVar4[2] - pfVar4[6];
      fStack_cc = pfVar4[3] - pfVar4[7];
      uVar7 = uVar8;
      uVar10 = uVar8;
      if (0 < *(int *)(lVar1 + 0xc0)) {
        do {
          plVar2 = *(longlong **)(uVar10 + *(longlong *)(lVar1 + 0xb8));
          (**(code **)(*plVar2 + 0x28))(plVar2,param_1,lVar1,local_108);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar10 = uVar10 + 8;
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
      }
      FUN_14386cbe0(param_1,(int)param_1[0x10]);
      uVar7 = uVar8;
      uVar10 = uVar8;
      if (0 < *(int *)(lVar1 + 0xc0)) {
        do {
          plVar2 = *(longlong **)(uVar10 + *(longlong *)(lVar1 + 0xb8));
          (**(code **)(*plVar2 + 0x30))(plVar2,param_1,lVar1,param_1 + 0x14);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar10 = uVar10 + 8;
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
      }
      *(int *)(param_1 + 0x12) = (int)param_1[0x10];
      if ((*(int *)((longlong)param_1 + 0x84) == 7) != (*(int *)(lVar1 + 0xb4) == 7)) {
        *(int *)((longlong)param_1 + 0x84) = *(int *)(lVar1 + 0xb4);
      }
    }
    else if (iVar3 < (int)param_1[0x12]) {
      *(int *)(param_1 + 0x12) = iVar3;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0x84);
  if (*(int *)(lVar1 + 0xb4) != iVar3) {
    if (iVar3 == 3) {
      if ((*(int *)(lVar1 + 0xb4) == 1) &&
         (*(undefined4 *)(lVar1 + 0xb4) = 2, uVar7 = uVar8, uVar10 = uVar8,
         0 < *(int *)(lVar1 + 0xc0))) {
        do {
          plVar2 = *(longlong **)(uVar10 + *(longlong *)(lVar1 + 0xb8));
          (**(code **)(*plVar2 + 8))(plVar2,param_1,lVar1);
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
          uVar10 = uVar10 + 8;
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
      }
      if ((*(int *)(lVar1 + 0xb4) == 2) &&
         (*(undefined4 *)(lVar1 + 0xb4) = 3, uVar7 = uVar8, 0 < *(int *)(lVar1 + 0xc0))) {
        do {
          plVar2 = *(longlong **)(uVar7 + *(longlong *)(lVar1 + 0xb8));
          (**(code **)(*plVar2 + 0x10))(plVar2,param_1,lVar1);
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
          uVar7 = uVar7 + 8;
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
      }
    }
    else if (iVar3 == 2) {
      *(undefined4 *)(lVar1 + 0xb4) = 2;
      uVar7 = uVar8;
      if (0 < *(int *)(lVar1 + 0xc0)) {
        do {
          plVar2 = *(longlong **)(uVar7 + *(longlong *)(lVar1 + 0xb8));
          (**(code **)(*plVar2 + 8))(plVar2,param_1,lVar1);
          uVar6 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar6;
          uVar7 = uVar7 + 8;
        } while ((int)uVar6 < *(int *)(lVar1 + 0xc0));
      }
    }
    else {
      *(int *)(lVar1 + 0xb4) = iVar3;
    }
  }
  return;
}



// FUNCTION 14386e810 FUN_14386e810 body=465 status=ok
// SIG undefined FUN_14386e810(void)

void FUN_14386e810(longlong *param_1,float *param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  float *pfVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  int *local_38;
  int local_30;
  uint local_2c;
  
  iVar3 = (int)param_1[3];
  uVar10 = FUN_143703a50();
  if (*(uint *)(param_1 + 3) == (*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff)) {
    FUN_14370c460(uVar10,param_1 + 2,0x50);
  }
  pfVar12 = (float *)((longlong)(int)param_1[3] * 0x50 + param_1[2]);
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  fVar8 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  *pfVar12 = *param_2;
  pfVar12[1] = fVar8;
  pfVar12[2] = fVar6;
  pfVar12[3] = fVar7;
  fVar8 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  pfVar12[4] = param_2[4];
  pfVar12[5] = fVar8;
  pfVar12[6] = fVar6;
  pfVar12[7] = fVar7;
  *(undefined1 *)(pfVar12 + 0x10) = 0;
  fVar8 = (float)FUN_1437e5980(param_1 + 8,param_2,iVar3);
  pfVar12[0x11] = fVar8;
  local_2c = 0x80000000;
  local_38 = (int *)0x0;
  local_30 = 0;
  FUN_1437e5ca0(param_1 + 4,local_res8,param_2,&local_38);
  uVar11 = (ulonglong)local_30;
  piVar1 = local_38 + uVar11;
  for (piVar13 = local_38; piVar13 != piVar1; piVar13 = piVar13 + 1) {
    iVar4 = *piVar13;
    pfVar12 = (float *)((longlong)iVar4 * 0x50 + *param_1);
    auVar5._4_4_ = -(uint)(param_2[1] <= pfVar12[5] && pfVar12[1] <= param_2[5]);
    auVar5._0_4_ = -(uint)(*param_2 <= pfVar12[4] && *pfVar12 <= param_2[4]);
    auVar5._8_4_ = -(uint)(param_2[2] <= pfVar12[6] && pfVar12[2] <= param_2[6]);
    auVar5._12_4_ = -(uint)(param_2[3] <= pfVar12[7] && pfVar12[3] <= param_2[7]);
    uVar9 = movmskps((int)uVar11,auVar5);
    uVar11 = (ulonglong)(uVar9 & 7);
    if ((char)(uVar9 & 7) == '\a') {
      uVar10 = FUN_143703a50();
      if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff)) {
        FUN_14370c460(uVar10,param_1 + 0xc,8);
      }
      piVar2 = (int *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      piVar2[1] = iVar3;
      *piVar2 = iVar4;
      uVar11 = FUN_143870f00(*param_3,iVar4,iVar3);
    }
  }
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_38,4,local_2c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14386e9f0 FUN_14386e9f0 body=465 status=ok
// SIG undefined FUN_14386e9f0(void)

void FUN_14386e9f0(longlong *param_1,float *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  float *pfVar12;
  int *piVar13;
  undefined1 local_res8 [8];
  int *local_38;
  int local_30;
  uint local_2c;
  
  uVar3 = (undefined4)param_1[1];
  uVar10 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar10,param_1,0x50);
  }
  pfVar12 = (float *)((longlong)(int)param_1[1] * 0x50 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  fVar8 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  *pfVar12 = *param_2;
  pfVar12[1] = fVar8;
  pfVar12[2] = fVar6;
  pfVar12[3] = fVar7;
  fVar8 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  pfVar12[4] = param_2[4];
  pfVar12[5] = fVar8;
  pfVar12[6] = fVar6;
  pfVar12[7] = fVar7;
  *(undefined1 *)(pfVar12 + 0x10) = 0;
  fVar8 = (float)FUN_1437e5980(param_1 + 4,param_2,uVar3);
  pfVar12[0x11] = fVar8;
  local_2c = 0x80000000;
  local_38 = (int *)0x0;
  local_30 = 0;
  FUN_1437e5ca0(param_1 + 8,local_res8,param_2,&local_38);
  uVar11 = (ulonglong)local_30;
  piVar1 = local_38 + uVar11;
  for (piVar13 = local_38; piVar13 != piVar1; piVar13 = piVar13 + 1) {
    iVar4 = *piVar13;
    pfVar12 = (float *)((longlong)iVar4 * 0x50 + param_1[2]);
    auVar5._4_4_ = -(uint)(param_2[1] <= pfVar12[5] && pfVar12[1] <= param_2[5]);
    auVar5._0_4_ = -(uint)(*param_2 <= pfVar12[4] && *pfVar12 <= param_2[4]);
    auVar5._8_4_ = -(uint)(param_2[2] <= pfVar12[6] && pfVar12[2] <= param_2[6]);
    auVar5._12_4_ = -(uint)(param_2[3] <= pfVar12[7] && pfVar12[3] <= param_2[7]);
    uVar9 = movmskps((int)uVar11,auVar5);
    uVar11 = (ulonglong)(uVar9 & 7);
    if ((char)(uVar9 & 7) == '\a') {
      uVar10 = FUN_143703a50();
      if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff)) {
        FUN_14370c460(uVar10,param_1 + 0xc,8);
      }
      puVar2 = (undefined4 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      *puVar2 = uVar3;
      puVar2[1] = iVar4;
      uVar11 = FUN_143870f00(*param_3,uVar3,iVar4);
    }
  }
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_38,4,local_2c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14386ebd0 FUN_14386ebd0 body=102 status=ok
// SIG undefined FUN_14386ebd0(void)

void FUN_14386ebd0(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  
  FUN_143870f00(*param_3,param_2,param_2 >> 0x20);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x68) == (*(uint *)(param_1 + 0x6c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x60,8);
  }
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  return;
}



// FUNCTION 14386ec40 FUN_14386ec40 body=424 status=ok
// SIG undefined FUN_14386ec40(void)

void FUN_14386ec40(undefined8 param_1,undefined8 param_2)

{
  longlong local_48;
  int local_40;
  uint local_3c;
  longlong local_38;
  int local_30;
  uint local_2c;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  local_2c = 0x80000000;
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  FUN_1438703a0(param_1,&local_38);
  FUN_1438702e0(param_1,&local_48);
  thunk_FUN_143719c70(0xe6d7d41f);
  if ((local_30 != 0) && (local_40 != 0)) {
    lStack_10 = local_48 + (longlong)local_40 * 4;
    local_18 = local_48;
    lStack_20 = local_38 + (longlong)local_30 * 4;
    local_28 = local_38;
    FUN_14386f890(param_1,&local_28,&local_18,param_2);
  }
  thunk_FUN_143719c70(0xe50c3cc9);
  local_28 = local_38;
  lStack_20 = local_38 + (longlong)local_30 * 4;
  local_18 = local_38;
  lStack_10 = lStack_20;
  FUN_14386f340(param_1,&local_18,param_2);
  local_28 = local_48;
  lStack_20 = local_48 + (longlong)local_40 * 4;
  local_18 = local_48;
  lStack_10 = lStack_20;
  FUN_14386edf0(param_1,&local_18,param_2);
  FUN_14386fea0(param_1,&local_38);
  FUN_14386fde0(param_1,&local_48);
  thunk_FUN_143719c70(0xa9a60353);
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
  }
  local_48 = 0;
  local_3c = 0x80000000;
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_38,4,local_2c & 0x3fffffff);
  }
  return;
}



// FUNCTION 14386edf0 FUN_14386edf0 body=1349 status=ok
// SIG undefined FUN_14386edf0(void)

void FUN_14386edf0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined8 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 local_res20 [8];
  longlong local_108;
  int local_100;
  uint local_fc;
  longlong local_f8;
  int local_f0;
  uint local_ec;
  undefined4 *local_e8;
  int local_e0;
  uint local_dc;
  ulonglong local_d8;
  undefined4 local_d0;
  int iStack_cc;
  uint local_c8;
  int iStack_c4;
  uint local_c0;
  int iStack_bc;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  int iStack_ac;
  longlong local_a8;
  undefined1 (*local_a0) [16];
  int local_98;
  int iStack_94;
  int *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  int *local_80;
  longlong local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_a8 = *param_1;
  local_78 = param_1[2];
  local_80 = (int *)param_2[1];
  local_90 = (int *)*param_2;
  if (local_90 != local_80) {
    do {
      uVar16 = 0;
      plVar15 = param_1 + 4;
      iVar5 = *local_90;
      pauVar12 = (undefined1 (*) [16])((longlong)iVar5 * 0x50 + local_78);
      pauVar1 = pauVar12 + 2;
      auVar3 = *pauVar12;
      auVar4 = pauVar12[1];
      auVar7._4_4_ = -(uint)(auVar3._4_4_ <= *(float *)(pauVar12[3] + 4) &&
                            *(float *)(pauVar12[2] + 4) <= auVar4._4_4_);
      auVar7._0_4_ = -(uint)(auVar3._0_4_ <= *(float *)pauVar12[3] &&
                            *(float *)pauVar12[2] <= auVar4._0_4_);
      auVar7._8_4_ = -(uint)(auVar3._8_4_ <= *(float *)(pauVar12[3] + 8) &&
                            *(float *)(pauVar12[2] + 8) <= auVar4._8_4_);
      auVar7._12_4_ =
           -(uint)(auVar3._12_4_ <= *(float *)(pauVar12[3] + 0xc) &&
                  *(float *)(pauVar12[2] + 0xc) <= auVar4._12_4_);
      uVar8 = movmskps(iVar5,auVar7);
      local_a0 = pauVar1;
      if (((byte)uVar8 & 7) == 7) {
        local_68 = minps(auVar3,*pauVar1);
        local_e8 = (undefined4 *)0x0;
        local_e0 = 0;
        local_dc = 0x80000000;
        local_58 = maxps(auVar4,pauVar12[3]);
        FUN_1437e5ca0(plVar15,local_res20,local_68,&local_e8);
        uVar13 = (ulonglong)((longlong)(local_e8 + local_e0) + (3 - (longlong)local_e8)) >> 2;
        if (local_e8 + local_e0 < local_e8) {
          uVar13 = 0;
        }
        puVar11 = local_e8;
        if (uVar13 != 0) {
          do {
            iStack_cc = iVar5;
            local_d0 = *puVar11;
            FUN_1438705b0(param_1,CONCAT44(iStack_cc,local_d0),param_3);
            thunk_FUN_143719c70(0x4d243d8f);
            uVar16 = uVar16 + 1;
            puVar11 = puVar11 + 1;
            iVar5 = iStack_cc;
          } while (uVar16 != uVar13);
        }
        local_e0 = 0;
        if (-1 < (int)local_dc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_e8,4,local_dc & 0x3fffffff);
        }
        local_e8 = (undefined4 *)0x0;
        local_dc = 0x80000000;
      }
      else {
        local_108 = 0;
        local_100 = 0;
        local_fc = 0x80000000;
        local_f8 = 0;
        local_f0 = 0;
        local_ec = 0x80000000;
        FUN_1437e5ca0(plVar15,local_88,pauVar12,&local_108);
        FUN_1437e5ca0(plVar15,local_84,pauVar1,&local_f8);
        if (1 < local_100) {
          FUN_1437ee100(local_108,0,local_100 + -1,(char)param_1);
        }
        if (1 < local_f0) {
          FUN_1437ee100(local_f8,0,local_f0 + -1,(char)param_1);
        }
        local_d8 = 0;
        uVar13 = uVar16;
        uVar17 = uVar16;
        uVar20 = uVar16;
        if (0 < local_100) {
          do {
            iVar18 = (int)uVar20;
            if (local_f0 <= iVar18) {
              if ((int)uVar17 < local_100) {
                lVar14 = uVar16 * 4;
                iStack_ac = iVar5;
                do {
                  local_b0 = *(undefined4 *)(local_108 + lVar14);
                  FUN_143870460(param_1,CONCAT44(iStack_ac,local_b0),param_3);
                  uVar19 = (int)uVar17 + 1;
                  uVar17 = (ulonglong)uVar19;
                  lVar14 = lVar14 + 4;
                } while ((int)uVar19 < local_100);
              }
              break;
            }
            uVar19 = *(uint *)(local_108 + uVar16 * 4);
            uVar6 = *(uint *)(local_f8 + uVar13 * 4);
            if (uVar19 < uVar6) {
              local_c8 = uVar19;
              iStack_c4 = iVar5;
              FUN_143870460(param_1,CONCAT44(iVar5,uVar19),param_3);
LAB_14386f13b:
              uVar17 = (ulonglong)((int)uVar17 + 1);
              uVar16 = uVar16 + 1;
              local_d8 = uVar16;
            }
            else {
              if (uVar19 <= uVar6) {
                local_b8 = uVar19;
                iStack_b4 = iVar5;
                FUN_1438705b0(param_1,CONCAT44(iVar5,uVar19),param_3);
                uVar20 = (ulonglong)(iVar18 + 1);
                uVar13 = uVar13 + 1;
                goto LAB_14386f13b;
              }
              pfVar10 = (float *)((longlong)(int)uVar6 * 0x50 + local_a8);
              auVar3._4_4_ = -(uint)(pfVar10[1] <= *(float *)(local_a0[1] + 4) &&
                                    *(float *)(*local_a0 + 4) <= pfVar10[5]);
              auVar3._0_4_ = -(uint)(*pfVar10 <= *(float *)local_a0[1] &&
                                    *(float *)*local_a0 <= pfVar10[4]);
              auVar3._8_4_ = -(uint)(pfVar10[2] <= *(float *)(local_a0[1] + 8) &&
                                    *(float *)(*local_a0 + 8) <= pfVar10[6]);
              auVar3._12_4_ =
                   -(uint)(pfVar10[3] <= *(float *)(local_a0[1] + 0xc) &&
                          *(float *)(*local_a0 + 0xc) <= pfVar10[7]);
              uVar8 = movmskps((int)local_a0,auVar3);
              if (((byte)uVar8 & 7) == 7) {
                local_c0 = uVar6;
                iStack_bc = iVar5;
                FUN_143870f00(*param_3,(longlong)(int)uVar6,iVar5);
                uVar9 = FUN_143703a50();
                if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff))
                {
                  FUN_14370c460(uVar9,param_1 + 0xc,8);
                }
                puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(iVar5,uVar6);
                }
                *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
                uVar16 = local_d8;
              }
              uVar20 = (ulonglong)(iVar18 + 1);
              uVar13 = uVar13 + 1;
            }
          } while ((int)uVar17 < local_100);
        }
        if ((int)uVar20 < local_f0) {
          lVar14 = uVar13 * 4;
          do {
            iVar18 = *(int *)(local_f8 + lVar14);
            pfVar10 = (float *)((longlong)iVar18 * 0x50 + local_a8);
            auVar4._4_4_ = -(uint)(*(float *)(*local_a0 + 4) <= pfVar10[5] &&
                                  pfVar10[1] <= *(float *)(local_a0[1] + 4));
            auVar4._0_4_ = -(uint)(*(float *)*local_a0 <= pfVar10[4] &&
                                  *pfVar10 <= *(float *)local_a0[1]);
            auVar4._8_4_ = -(uint)(*(float *)(*local_a0 + 8) <= pfVar10[6] &&
                                  pfVar10[2] <= *(float *)(local_a0[1] + 8));
            auVar4._12_4_ =
                 -(uint)(*(float *)(*local_a0 + 0xc) <= pfVar10[7] &&
                        pfVar10[3] <= *(float *)(local_a0[1] + 0xc));
            uVar8 = movmskps((int)local_a0,auVar4);
            if (((byte)uVar8 & 7) == 7) {
              local_98 = iVar18;
              iStack_94 = iVar5;
              FUN_143870f00(*param_3,(longlong)iVar18,iVar5);
              uVar9 = FUN_143703a50();
              if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff)) {
                FUN_14370c460(uVar9,param_1 + 0xc,8);
              }
              puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = CONCAT44(iVar5,iVar18);
              }
              *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
            }
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
            lVar14 = lVar14 + 4;
          } while ((int)uVar19 < local_f0);
        }
        local_f0 = 0;
        if (-1 < (int)local_ec) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_f8,4,local_ec & 0x3fffffff);
        }
        local_f8 = 0;
        local_ec = 0x80000000;
        local_100 = 0;
        if (-1 < (int)local_fc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_108,4,local_fc & 0x3fffffff);
        }
        local_108 = 0;
        local_fc = 0x80000000;
      }
      local_90 = local_90 + 1;
    } while (local_90 != local_80);
  }
  return;
}



// FUNCTION 14386f340 FUN_14386f340 body=1348 status=ok
// SIG undefined FUN_14386f340(void)

void FUN_14386f340(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 local_res20 [8];
  longlong local_108;
  int local_100;
  uint local_fc;
  longlong local_f8;
  int local_f0;
  uint local_ec;
  undefined4 *local_e8;
  int local_e0;
  uint local_dc;
  longlong local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined1 (*local_a0) [16];
  undefined4 local_98;
  int iStack_94;
  uint *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  uint *local_80;
  longlong local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  local_a8 = param_1[2];
  local_78 = *param_1;
  local_80 = (uint *)param_2[1];
  local_90 = (uint *)*param_2;
  if (local_90 != local_80) {
    do {
      plVar20 = param_1 + 8;
      uVar5 = *local_90;
      uVar17 = (ulonglong)(int)uVar5;
      pauVar16 = (undefined1 (*) [16])(uVar17 * 0x50 + local_78);
      pauVar1 = pauVar16 + 2;
      auVar3 = *pauVar16;
      auVar4 = pauVar16[1];
      auVar8._4_4_ = -(uint)(auVar3._4_4_ <= *(float *)(pauVar16[3] + 4) &&
                            *(float *)(pauVar16[2] + 4) <= auVar4._4_4_);
      auVar8._0_4_ = -(uint)(auVar3._0_4_ <= *(float *)pauVar16[3] &&
                            *(float *)pauVar16[2] <= auVar4._0_4_);
      auVar8._8_4_ = -(uint)(auVar3._8_4_ <= *(float *)(pauVar16[3] + 8) &&
                            *(float *)(pauVar16[2] + 8) <= auVar4._8_4_);
      auVar8._12_4_ =
           -(uint)(auVar3._12_4_ <= *(float *)(pauVar16[3] + 0xc) &&
                  *(float *)(pauVar16[2] + 0xc) <= auVar4._12_4_);
      uVar9 = movmskps((int)local_90,auVar8);
      local_a0 = pauVar1;
      if (((byte)uVar9 & 7) == 7) {
        local_68 = minps(auVar3,*pauVar1);
        local_e8 = (undefined4 *)0x0;
        local_e0 = 0;
        local_dc = 0x80000000;
        local_58 = maxps(auVar4,pauVar16[3]);
        FUN_1437e5ca0(plVar20,local_res20,local_68,&local_e8);
        uVar21 = 0;
        uVar17 = (ulonglong)((longlong)(local_e8 + local_e0) + (3 - (longlong)local_e8)) >> 2;
        if (local_e8 + local_e0 < local_e8) {
          uVar17 = uVar21;
        }
        puVar14 = local_e8;
        if (uVar17 != 0) {
          do {
            local_d0 = uVar5;
            uStack_cc = *puVar14;
            FUN_1438705b0(param_1,CONCAT44(uStack_cc,local_d0),param_3);
            thunk_FUN_143719c70(0x4d243d8f);
            uVar21 = uVar21 + 1;
            puVar14 = puVar14 + 1;
            uVar5 = local_d0;
          } while (uVar21 != uVar17);
        }
        local_e0 = 0;
        if (-1 < (int)local_dc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_e8,4,local_dc & 0x3fffffff);
        }
        local_e8 = (undefined4 *)0x0;
        local_dc = 0x80000000;
      }
      else {
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_fc = 0x80000000;
        local_ec = 0x80000000;
        FUN_1437e5ca0(plVar20,local_88,pauVar16,&local_108);
        FUN_1437e5ca0(plVar20,local_84,pauVar1,&local_f8);
        if (1 < local_100) {
          FUN_1437ee100(local_108,0,local_100 + -1,(char)param_1);
        }
        if (1 < local_f0) {
          FUN_1437ee100(local_f8,0,local_f0 + -1,(char)param_1);
        }
        lVar15 = 0;
        iVar19 = 0;
        iVar22 = 0;
        local_d8 = 0;
        lVar18 = 0;
        if (0 < local_100) {
          do {
            uVar9 = (undefined4)uVar17;
            if (local_f0 <= iVar22) {
              if (iVar19 < local_100) {
                lVar15 = lVar15 * 4;
                local_b0 = uVar9;
                do {
                  uStack_ac = *(undefined4 *)(local_108 + lVar15);
                  FUN_143870460(param_1,CONCAT44(uStack_ac,local_b0),param_3);
                  iVar19 = iVar19 + 1;
                  lVar15 = lVar15 + 4;
                } while (iVar19 < local_100);
              }
              break;
            }
            uVar6 = *(uint *)(local_108 + lVar15 * 4);
            uVar7 = *(uint *)(local_f8 + lVar18 * 4);
            if (uVar6 < uVar7) {
              local_c8 = uVar9;
              uStack_c4 = uVar6;
              FUN_143870460(param_1,CONCAT44(uVar6,uVar9),param_3);
LAB_14386f68e:
              iVar19 = iVar19 + 1;
              lVar15 = lVar15 + 1;
              local_d8 = lVar15;
            }
            else {
              if (uVar6 <= uVar7) {
                local_b8 = uVar9;
                uStack_b4 = uVar6;
                FUN_1438705b0(param_1,CONCAT44(uVar6,uVar9),param_3);
                iVar22 = iVar22 + 1;
                lVar18 = lVar18 + 1;
                goto LAB_14386f68e;
              }
              pfVar13 = (float *)((longlong)(int)uVar7 * 0x50 + local_a8);
              auVar3._4_4_ = -(uint)(pfVar13[1] <= *(float *)(local_a0[1] + 4) &&
                                    *(float *)(*local_a0 + 4) <= pfVar13[5]);
              auVar3._0_4_ = -(uint)(*pfVar13 <= *(float *)local_a0[1] &&
                                    *(float *)*local_a0 <= pfVar13[4]);
              auVar3._8_4_ = -(uint)(pfVar13[2] <= *(float *)(local_a0[1] + 8) &&
                                    *(float *)(*local_a0 + 8) <= pfVar13[6]);
              auVar3._12_4_ =
                   -(uint)(pfVar13[3] <= *(float *)(local_a0[1] + 0xc) &&
                          *(float *)(*local_a0 + 0xc) <= pfVar13[7]);
              uVar10 = movmskps((int)local_a0,auVar3);
              if (((byte)uVar10 & 7) == 7) {
                local_c0 = uVar9;
                uStack_bc = uVar7;
                FUN_143870f00(*param_3,uVar17 & 0xffffffff,uVar7);
                uVar11 = FUN_143703a50();
                if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff))
                {
                  FUN_14370c460(uVar11,param_1 + 0xc,8);
                }
                puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
                if (puVar2 != (undefined8 *)0x0) {
                  *puVar2 = CONCAT44(uVar7,uVar9);
                }
                *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
                uVar17 = (ulonglong)uVar5;
                lVar15 = local_d8;
              }
              iVar22 = iVar22 + 1;
              lVar18 = lVar18 + 1;
            }
          } while (iVar19 < local_100);
        }
        if (iVar22 < local_f0) {
          lVar18 = lVar18 * 4;
          do {
            iVar19 = *(int *)(local_f8 + lVar18);
            pfVar13 = (float *)((longlong)iVar19 * 0x50 + local_a8);
            auVar4._4_4_ = -(uint)(*(float *)(*local_a0 + 4) <= pfVar13[5] &&
                                  pfVar13[1] <= *(float *)(local_a0[1] + 4));
            auVar4._0_4_ = -(uint)(*(float *)*local_a0 <= pfVar13[4] &&
                                  *pfVar13 <= *(float *)local_a0[1]);
            auVar4._8_4_ = -(uint)(*(float *)(*local_a0 + 8) <= pfVar13[6] &&
                                  pfVar13[2] <= *(float *)(local_a0[1] + 8));
            auVar4._12_4_ =
                 -(uint)(*(float *)(*local_a0 + 0xc) <= pfVar13[7] &&
                        pfVar13[3] <= *(float *)(local_a0[1] + 0xc));
            uVar9 = movmskps((int)local_a0,auVar4);
            if (((byte)uVar9 & 7) == 7) {
              local_98 = (undefined4)uVar17;
              uVar11 = CONCAT44(iVar19,local_98);
              iStack_94 = iVar19;
              FUN_143870f00(*param_3,uVar17 & 0xffffffff,iVar19);
              uVar12 = FUN_143703a50();
              if (*(uint *)(param_1 + 0xd) == (*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff)) {
                FUN_14370c460(uVar12,param_1 + 0xc,8);
              }
              puVar2 = (undefined8 *)(param_1[0xc] + (longlong)(int)param_1[0xd] * 8);
              if (puVar2 != (undefined8 *)0x0) {
                *puVar2 = uVar11;
              }
              *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
            }
            iVar22 = iVar22 + 1;
            lVar18 = lVar18 + 4;
          } while (iVar22 < local_f0);
        }
        local_f0 = 0;
        if (-1 < (int)local_ec) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_f8,4,local_ec & 0x3fffffff);
        }
        local_f8 = 0;
        local_ec = 0x80000000;
        local_100 = 0;
        if (-1 < (int)local_fc) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_108,4,local_fc & 0x3fffffff);
        }
        local_108 = 0;
        local_fc = 0x80000000;
      }
      local_90 = local_90 + 1;
    } while (local_90 != local_80);
  }
  return;
}



// FUNCTION 14386f890 FUN_14386f890 body=919 status=ok
// SIG undefined FUN_14386f890(void)

void FUN_14386f890(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  int *piVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong local_b8;
  int local_b0;
  uint local_ac;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  uint local_98 [2];
  uint *local_90;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  int local_70;
  int local_6c [9];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  uVar18 = param_2[1] - *param_2 >> 2;
  uVar16 = param_3[1] - *param_3 >> 2;
  local_a8 = 0;
  local_a0 = 0;
  iVar13 = (int)uVar18 + 4;
  local_9c = 0x80000000;
  if (0 < iVar13) {
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_a8,iVar13,0x20);
  }
  piVar7 = (int *)param_2[1];
  for (piVar11 = (int *)*param_2; piVar11 != piVar7; piVar11 = piVar11 + 1) {
    pauVar9 = (undefined1 (*) [16])((longlong)*piVar11 * 0x50 + *param_1);
    _local_48 = minps(*pauVar9,pauVar9[2]);
    local_38 = maxps(pauVar9[1],pauVar9[3]);
    lVar10 = (longlong)local_a0;
    local_a0 = local_a0 + 1;
    FUN_143df9900(lVar10 * 0x20 + local_a8,local_48);
  }
  local_ac = 0x80000000;
  iVar13 = (int)uVar16;
  iVar14 = iVar13 + 4;
  local_b8 = 0;
  local_b0 = 0;
  if (0 < iVar14) {
    if (iVar14 < 0) {
      iVar14 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_b8,iVar14,0x20);
  }
  piVar7 = (int *)param_3[1];
  auVar1 = _local_48;
  for (piVar11 = (int *)*param_3; piVar11 != piVar7; piVar11 = piVar11 + 1) {
    pauVar9 = (undefined1 (*) [16])((longlong)*piVar11 * 0x50 + param_1[2]);
    _local_48 = minps(*pauVar9,pauVar9[2]);
    local_38 = maxps(pauVar9[1],pauVar9[3]);
    lVar10 = (longlong)local_b0;
    local_b0 = local_b0 + 1;
    FUN_143df9900(lVar10 * 0x20 + local_b8,local_48);
    auVar1 = _local_48;
  }
  lVar10 = 4;
  stack0xffffffffffffffbc = auVar1._4_12_;
  local_48._0_4_ = 0xffffffff;
  auVar2 = _local_48;
  uStack_40 = auVar1._8_8_;
  do {
    puVar4 = (undefined8 *)((longlong)local_a0 * 0x20 + local_a8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = local_48;
      puVar4[1] = uStack_40;
      puVar4[2] = local_38._0_8_;
      puVar4[3] = local_38._8_8_;
    }
    local_a0 = local_a0 + 1;
    puVar4 = (undefined8 *)((longlong)local_b0 * 0x20 + local_b8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = local_48;
      puVar4[1] = uStack_40;
      puVar4[2] = local_38._0_8_;
      puVar4[3] = local_38._8_8_;
    }
    local_b0 = local_b0 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  _local_48 = auVar2;
  FUN_143df9960(local_a8,uVar18 & 0xffffffff);
  FUN_143df9960(local_b8,uVar16 & 0xffffffff);
  FUN_143df97b0(local_98,local_a8,uVar18 & 0xffffffff,local_b8,iVar13);
  uVar3 = local_98[0];
  puVar12 = local_90;
LAB_14386fa90:
  do {
    local_90 = puVar12;
    local_98[0] = uVar3;
    if ((local_70 < 1) || (local_6c[0] < 1)) {
LAB_14386fba9:
      local_b0 = 0;
      if (-1 < (int)local_ac) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_b8,0x20,local_ac & 0x3fffffff);
      }
      local_b8 = 0;
      local_ac = 0x80000000;
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        FUN_143702e10(&PTR_vftable_1467f0638,local_a8,0x20,local_9c & 0x3fffffff);
      }
      return;
    }
    puVar12 = local_80;
    puVar15 = local_88;
    if (local_98[0] != 0) {
      puVar12 = local_88;
      puVar15 = local_78;
    }
    FUN_1438705b0(param_1,CONCAT44(puVar15[3],puVar12[3]),param_4);
    puVar5 = local_88 + 8;
    puVar8 = puVar5;
    puVar15 = local_90;
    uVar17 = local_98[0];
    do {
      if (*puVar8 < puVar15[4]) {
        do {
          uVar3 = uVar17;
          puVar12 = puVar15;
          local_88 = puVar8;
          if (-1 < (int)(puVar15[5] - puVar8[1] | puVar15[6] - puVar8[2] | puVar8[5] - puVar15[1] |
                        puVar8[6] - puVar15[2])) goto LAB_14386fa90;
          puVar8 = puVar8 + 8;
        } while (*puVar8 < puVar15[4]);
      }
      ppuVar6 = &local_80;
      if (uVar17 != 0) {
        ppuVar6 = &local_78;
      }
      *ppuVar6 = *ppuVar6 + 8;
      piVar7 = &local_70;
      if (uVar17 != 0) {
        piVar7 = local_6c;
      }
      *piVar7 = *piVar7 + -1;
      uVar17 = (uint)(*local_78 < *local_80);
      puVar8 = local_78;
      puVar15 = local_80;
      if (*local_78 < *local_80) {
        puVar8 = local_80;
        puVar15 = local_78;
      }
      local_88 = puVar5;
      if (local_70 < 1) goto LAB_14386fba9;
      uVar3 = local_98[0];
      puVar12 = local_90;
    } while (0 < local_6c[0]);
  } while( true );
}



// FUNCTION 14386fc30 FUN_14386fc30 body=419 status=ok
// SIG undefined FUN_14386fc30(void)

void FUN_14386fc30(longlong param_1,uint param_2,uint param_3,undefined1 param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10;
  longlong local_30;
  
  uVar5 = (ulonglong)(int)param_2;
  uVar7 = uVar5;
  local_res10 = param_2;
  do {
    local_30 = (longlong)(int)param_3;
    uVar9 = uVar5 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)(int)((int)uVar5 + param_3) >> 1) * 4);
    uVar4 = param_3;
    do {
      *param_5 = *param_5 + 0xe6afc;
      uVar6 = (uint)uVar9;
      if (*param_5 < 0xe6afc) {
        thunk_FUN_143719c70(0xa56c5f8);
      }
      iVar2 = *(int *)(param_1 + uVar7 * 4);
      uVar8 = uVar6;
      while (iVar2 < iVar1) {
        uVar7 = uVar7 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        iVar2 = *(int *)(param_1 + uVar7 * 4);
      }
      uVar6 = (uVar8 - uVar6) * 0xd1b71;
      *param_5 = *param_5 + uVar6;
      if (*param_5 < uVar6) {
        thunk_FUN_143719c70(0xa56c5f8);
      }
      *param_5 = *param_5 + 0xe6afc;
      if (*param_5 < 0xe6afc) {
        thunk_FUN_143719c70(0xa56c5f8);
      }
      iVar2 = *(int *)(param_1 + local_30 * 4);
      uVar6 = uVar4;
      while (iVar1 < iVar2) {
        local_30 = local_30 + -1;
        uVar6 = uVar6 - 1;
        iVar2 = *(int *)(param_1 + local_30 * 4);
      }
      uVar4 = (uVar4 - uVar6) * 0xd1b71;
      *param_5 = *param_5 + uVar4;
      if (*param_5 < uVar4) {
        thunk_FUN_143719c70(0xa56c5f8);
      }
      if ((int)uVar6 < (int)uVar8) break;
      if (uVar6 != uVar8) {
        uVar3 = *(undefined4 *)(param_1 + local_30 * 4);
        *(undefined4 *)(param_1 + local_30 * 4) = *(undefined4 *)(param_1 + uVar7 * 4);
        *(undefined4 *)(param_1 + uVar7 * 4) = uVar3;
      }
      local_30 = local_30 + -1;
      uVar6 = uVar6 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar7 = uVar7 + 1;
      uVar4 = uVar6;
    } while ((int)uVar8 <= (int)uVar6);
    if ((int)local_res10 < (int)uVar6) {
      FUN_14386fc30(param_1,local_res10,uVar6,param_4,param_5);
    }
    if ((int)param_3 <= (int)uVar8) {
      return;
    }
    uVar5 = (ulonglong)uVar8;
    local_res10 = uVar8;
  } while( true );
}



// FUNCTION 14386fde0 FUN_14386fde0 body=191 status=ok
// SIG undefined FUN_14386fde0(void)

void FUN_14386fde0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  uVar3 = 0;
  thunk_FUN_143719c70(0xd05a47ef);
  iVar2 = 0;
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    do {
      puVar5 = (undefined4 *)
               ((longlong)*(int *)(lVar4 + *param_2) * 0x50 + *(longlong *)(param_1 + 0x10));
      *puVar5 = puVar5[8];
      puVar5[1] = puVar5[9];
      puVar5[2] = puVar5[10];
      puVar5[3] = puVar5[0xb];
      puVar5[4] = puVar5[0xc];
      puVar5[5] = puVar5[0xd];
      puVar5[6] = puVar5[0xe];
      puVar5[7] = puVar5[0xf];
      *(undefined1 *)(puVar5 + 0x10) = 0;
      uVar1 = FUN_1437e5980(param_1 + 0x40,puVar5,*(undefined4 *)(lVar4 + *param_2));
      uVar3 = uVar3 + 0x1eb851e;
      puVar5[0x11] = uVar1;
      if (uVar3 < 0x1eb851e) {
        thunk_FUN_143719c70(0xbdf7f2f1);
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 4;
    } while (iVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14386fea0 FUN_14386fea0 body=190 status=ok
// SIG undefined FUN_14386fea0(void)

void FUN_14386fea0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  uVar3 = 0;
  thunk_FUN_143719c70(0xd05a47ef);
  iVar2 = 0;
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    do {
      puVar5 = (undefined4 *)((longlong)*(int *)(lVar4 + *param_2) * 0x50 + *param_1);
      *puVar5 = puVar5[8];
      puVar5[1] = puVar5[9];
      puVar5[2] = puVar5[10];
      puVar5[3] = puVar5[0xb];
      puVar5[4] = puVar5[0xc];
      puVar5[5] = puVar5[0xd];
      puVar5[6] = puVar5[0xe];
      puVar5[7] = puVar5[0xf];
      *(undefined1 *)(puVar5 + 0x10) = 0;
      uVar1 = FUN_1437e5980(param_1 + 4,puVar5,*(undefined4 *)(lVar4 + *param_2));
      uVar3 = uVar3 + 0x1eb851e;
      puVar5[0x11] = uVar1;
      if (uVar3 < 0x1eb851e) {
        thunk_FUN_143719c70(0xbdf7f2f1);
      }
      iVar2 = iVar2 + 1;
      lVar4 = lVar4 + 4;
    } while (iVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 14386ff60 FUN_14386ff60 body=444 status=ok
// SIG undefined FUN_14386ff60(void)

void FUN_14386ff60(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  undefined4 *local_48;
  int local_40;
  uint local_3c;
  
  local_3c = 0x80000000;
  uVar5 = 0;
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  lVar10 = (longlong)param_2 * 0x50;
  lVar2 = *(longlong *)(param_1 + 0x10) + lVar10;
  FUN_1437e5ca0(param_1 + 0x20,local_res10,lVar2,&local_48);
  uVar7 = (ulonglong)((longlong)(local_48 + local_40) + (3 - (longlong)local_48)) >> 2;
  if (local_48 + local_40 < local_48) {
    uVar7 = uVar5;
  }
  uVar3 = uVar5;
  puVar4 = local_48;
  if (uVar7 != 0) {
    do {
      FUN_143870510(param_1,CONCAT44(param_2,*puVar4),param_3);
      thunk_FUN_143719c70(0x3327e9c3);
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != uVar7);
  }
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
  }
  FUN_1437e5cf0(param_1 + 0x40,*(undefined4 *)(lVar2 + 0x44));
  iVar1 = *(int *)(param_1 + 0x18) + -1;
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 != param_2) {
    lVar9 = 10;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar10);
    lVar2 = ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x10)) - (longlong)puVar8;
    do {
      *puVar8 = *(undefined8 *)(lVar2 + (longlong)puVar8);
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  thunk_FUN_143719c70(0x97044d1f);
  if ((param_2 != *(int *)(param_1 + 0x18)) &&
     (FUN_1437e6050(param_1 + 0x40,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x44 + lVar10),
                    param_2), uVar7 = uVar5, 0 < *(int *)(param_1 + 0x68))) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x60) + 4 + uVar5) == *(int *)(param_1 + 0x18)) {
        *(int *)(*(longlong *)(param_1 + 0x60) + 4 + uVar5) = param_2;
        FUN_143872d90(*param_3,uVar7,*(undefined4 *)(uVar5 + *(longlong *)(param_1 + 0x60)),
                      *(undefined4 *)(uVar5 + 4 + *(longlong *)(param_1 + 0x60)));
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 8;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 143870120 FUN_143870120 body=442 status=ok
// SIG undefined FUN_143870120(void)

void FUN_143870120(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  undefined4 *local_48;
  int local_40;
  uint local_3c;
  
  lVar8 = *param_1;
  local_3c = 0x80000000;
  uVar4 = 0;
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  lVar10 = (longlong)param_2 * 0x50;
  FUN_1437e5ca0(param_1 + 8,local_res10,lVar8 + lVar10,&local_48);
  uVar6 = (ulonglong)((longlong)(local_48 + local_40) + (3 - (longlong)local_48)) >> 2;
  if (local_48 + local_40 < local_48) {
    uVar6 = uVar4;
  }
  uVar2 = uVar4;
  puVar3 = local_48;
  if (uVar6 != 0) {
    do {
      FUN_143870460(param_1,CONCAT44(*puVar3,param_2),param_3);
      thunk_FUN_143719c70(0x3327e9c3);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar2 != uVar6);
  }
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
  }
  FUN_1437e5cf0(param_1 + 4,*(undefined4 *)(lVar8 + lVar10 + 0x44));
  iVar1 = (int)param_1[1] + -1;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 != param_2) {
    lVar9 = 10;
    puVar7 = (undefined8 *)(*param_1 + lVar10);
    lVar8 = ((longlong)iVar1 * 0x50 + *param_1) - (longlong)puVar7;
    do {
      *puVar7 = *(undefined8 *)(lVar8 + (longlong)puVar7);
      puVar7 = puVar7 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  thunk_FUN_143719c70(0x97044d1f);
  if ((param_2 != (int)param_1[1]) &&
     (FUN_1437e6050(param_1 + 4,*(undefined4 *)(*param_1 + 0x44 + lVar10),param_2), uVar6 = uVar4,
     0 < (int)param_1[0xd])) {
    do {
      if (*(int *)(param_1[0xc] + uVar4) == (int)param_1[1]) {
        *(int *)(param_1[0xc] + uVar4) = param_2;
        FUN_143872d90(*param_3,uVar6,*(undefined4 *)(uVar4 + param_1[0xc]),
                      *(undefined4 *)(uVar4 + 4 + param_1[0xc]));
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)param_1[0xd]);
  }
  return;
}



// FUNCTION 1438702e0 FUN_1438702e0 body=184 status=ok
// SIG undefined FUN_1438702e0(void)

void FUN_1438702e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  thunk_FUN_143719c70(0xe5ab9676);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar1 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x40 + lVar1) != '\0') {
        FUN_1437e5cf0(param_1 + 0x40,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x44 + lVar1));
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,param_2,4);
        }
        *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = iVar3;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
      uVar2 = uVar2 + 0x83126e;
      if (uVar2 < 0x83126e) {
        thunk_FUN_143719c70(0x6cb9d45e);
      }
      iVar3 = iVar3 + 1;
      lVar1 = lVar1 + 0x50;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1438703a0 FUN_1438703a0 body=183 status=ok
// SIG undefined FUN_1438703a0(void)

void FUN_1438703a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  thunk_FUN_143719c70(0xe5ab9676);
  iVar3 = 0;
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      if (*(char *)(*param_1 + 0x40 + lVar1) != '\0') {
        FUN_1437e5cf0(param_1 + 4,*(undefined4 *)(*param_1 + 0x44 + lVar1));
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(&PTR_vftable_1467f0638,param_2,4);
        }
        *(int *)(*param_2 + (longlong)(int)param_2[1] * 4) = iVar3;
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      }
      uVar2 = uVar2 + 0x83126e;
      if (uVar2 < 0x83126e) {
        thunk_FUN_143719c70(0x6cb9d45e);
      }
      iVar3 = iVar3 + 1;
      lVar1 = lVar1 + 0x50;
    } while (iVar3 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 143870460 FUN_143870460 body=175 status=ok
// SIG undefined FUN_143870460(void)

void FUN_143870460(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iStackX_14;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    piVar1 = *(int **)(param_1 + 0x60);
    lVar5 = 0;
    while ((*piVar1 != (int)param_2 || (piVar1[1] != iStackX_14))) {
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 1;
      piVar1 = piVar1 + 2;
      if (*(int *)(param_1 + 0x68) <= lVar5) {
        return;
      }
    }
    if (iVar3 != -1) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      if (*(int *)(param_1 + 0x68) != iVar3) {
        lVar5 = 2;
        puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 8);
        lVar4 = (*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8) -
                (longlong)puVar2;
        do {
          *puVar2 = *(undefined4 *)(lVar4 + (longlong)puVar2);
          puVar2 = puVar2 + 1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      FUN_143873070(*param_3,iVar3);
      FUN_143872e20(*param_3,iVar3);
    }
  }
  return;
}



// FUNCTION 143870510 FUN_143870510 body=145 status=ok
// SIG undefined FUN_143870510(void)

void FUN_143870510(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iStackX_14;
  
  uVar6 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    piVar1 = *(int **)(param_1 + 0x60);
    uVar7 = uVar6;
    while ((iVar5 = (int)uVar6, *piVar1 != (int)param_2 || (piVar1[1] != iStackX_14))) {
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar7 = uVar7 + 1;
      piVar1 = piVar1 + 2;
      if ((longlong)*(int *)(param_1 + 0x68) <= (longlong)uVar7) {
        return;
      }
    }
    if (iVar5 != -1) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      if (*(int *)(param_1 + 0x68) != iVar5) {
        lVar3 = 2;
        puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8);
        lVar4 = (*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8) -
                (longlong)puVar2;
        do {
          *puVar2 = *(undefined4 *)(lVar4 + (longlong)puVar2);
          puVar2 = puVar2 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      FUN_143872e20(*param_3,uVar6);
    }
  }
  return;
}



// FUNCTION 1438705b0 FUN_1438705b0 body=162 status=ok
// SIG undefined FUN_1438705b0(void)

void FUN_1438705b0(longlong *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  pfVar8 = (float *)((longlong)(int)param_2 * 0x50 + *param_1);
  pfVar7 = (float *)((longlong)(int)((ulonglong)param_2 >> 0x20) * 0x50 + param_1[2]);
  pfVar6 = pfVar8 + 8;
  if (*(char *)(pfVar8 + 0x10) == '\0') {
    pfVar6 = pfVar8;
  }
  pfVar4 = pfVar7 + 8;
  if (*(char *)(pfVar7 + 0x10) == '\0') {
    pfVar4 = pfVar7;
  }
  auVar1._4_4_ = -(uint)(pfVar4[1] <= pfVar6[5] && pfVar6[1] <= pfVar4[5]);
  auVar1._0_4_ = -(uint)(*pfVar4 <= pfVar6[4] && *pfVar6 <= pfVar4[4]);
  auVar1._8_4_ = -(uint)(pfVar4[2] <= pfVar6[6] && pfVar6[2] <= pfVar4[6]);
  auVar1._12_4_ = -(uint)(pfVar4[3] <= pfVar6[7] && pfVar6[3] <= pfVar4[7]);
  uVar5 = movmskps((int)pfVar6,auVar1);
  auVar2._4_4_ = -(uint)(pfVar7[1] <= pfVar8[5] && pfVar8[1] <= pfVar7[5]);
  auVar2._0_4_ = -(uint)(*pfVar7 <= pfVar8[4] && *pfVar8 <= pfVar7[4]);
  auVar2._8_4_ = -(uint)(pfVar7[2] <= pfVar8[6] && pfVar8[2] <= pfVar7[6]);
  auVar2._12_4_ = -(uint)(pfVar7[3] <= pfVar8[7] && pfVar8[3] <= pfVar7[7]);
  uVar3 = movmskps((int)pfVar4,auVar2);
  if (((byte)uVar3 & 7) == 7) {
    if ((uVar5 & 7) != 7) {
      FUN_143870460(param_1);
      return;
    }
  }
  else if ((uVar5 & 7) == 7) {
    FUN_14386ebd0(param_1);
  }
  return;
}



// FUNCTION 143870660 FUN_143870660 body=710 status=ok
// SIG undefined FUN_143870660(void)

undefined8 * FUN_143870660(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int local_res8 [2];
  
  uVar7 = 0;
  param_1[1] = 0;
  *param_1 = hkaiOverlapManager::vftable;
  param_1[3] = hkaiOverlapManager::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  FUN_1438878f0(param_1 + 4);
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  local_res8[0] = 0;
  uVar5 = FUN_143703a50();
  iVar4 = local_res8[0];
  uVar6 = uVar7;
  if (local_res8[0] != 0) {
    uVar6 = FUN_143702d60(uVar5,4,local_res8);
  }
  param_1[0x19] = uVar6;
  *(int *)(param_1 + 0x1a) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  local_res8[0] = 0;
  *(int *)((longlong)param_1 + 0xd4) = iVar4;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  uVar5 = FUN_143703a50();
  iVar4 = local_res8[0];
  uVar6 = uVar7;
  if (local_res8[0] != 0) {
    uVar6 = FUN_143702d60(uVar5,4,local_res8);
  }
  param_1[0x1c] = uVar6;
  *(int *)(param_1 + 0x1d) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  local_res8[0] = 0;
  *(int *)((longlong)param_1 + 0xec) = iVar4;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  uVar5 = FUN_143703a50();
  iVar4 = local_res8[0];
  uVar6 = uVar7;
  if (local_res8[0] != 0) {
    uVar6 = FUN_143702d60(uVar5,4,local_res8);
  }
  param_1[0x1f] = uVar6;
  *(int *)(param_1 + 0x20) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  local_res8[0] = 0;
  *(int *)((longlong)param_1 + 0x104) = iVar4;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  uVar6 = FUN_143703a50();
  iVar4 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar7 = FUN_143702d60(uVar6,4,local_res8);
  }
  param_1[0x22] = uVar7;
  *(int *)(param_1 + 0x23) = iVar4;
  iVar4 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar4 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x11c) = iVar4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar6 = param_2[1];
  param_1[0x26] = *param_2;
  param_1[0x27] = uVar6;
  uVar6 = param_2[3];
  param_1[0x28] = param_2[2];
  param_1[0x29] = uVar6;
  uVar6 = param_2[5];
  param_1[0x2a] = param_2[4];
  param_1[0x2b] = uVar6;
  uVar6 = param_2[7];
  param_1[0x2c] = param_2[6];
  param_1[0x2d] = uVar6;
  uVar6 = param_2[9];
  param_1[0x2e] = param_2[8];
  param_1[0x2f] = uVar6;
  uVar6 = param_2[0xb];
  param_1[0x30] = param_2[10];
  param_1[0x31] = uVar6;
  uVar6 = param_2[0xd];
  param_1[0x32] = param_2[0xc];
  param_1[0x33] = uVar6;
  uVar6 = param_2[0xf];
  param_1[0x34] = param_2[0xe];
  param_1[0x35] = uVar6;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x11);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x37) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x13);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar1;
  *(undefined4 *)(param_1 + 0x39) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar3;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  FUN_143873630(param_1,param_2);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0;
  return param_1;
}



// FUNCTION 143870930 FUN_143870930 body=794 status=ok
// SIG undefined FUN_143870930(void)

void FUN_143870930(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = hkaiOverlapManager::vftable;
  param_1[3] = hkaiOverlapManager::vftable;
  if (param_1[0x3c] != 0) {
    FUN_14370c150();
  }
  if (param_1[0x3b] != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x11c)) {
    FUN_143702e10(uVar1,param_1[0x22],4,*(uint *)((longlong)param_1 + 0x11c) & 0x3fffffff);
  }
  param_1[0x22] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x104)) {
    FUN_143702e10(uVar1,param_1[0x1f],4,*(uint *)((longlong)param_1 + 0x104) & 0x3fffffff);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xec)) {
    FUN_143702e10(uVar1,param_1[0x1c],4,*(uint *)((longlong)param_1 + 0xec) & 0x3fffffff);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xd4)) {
    FUN_143702e10(uVar1,param_1[0x19],4,*(uint *)((longlong)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 0x17) + -1);
  if (-1 < *(int *)(param_1 + 0x17) + -1) {
    plVar2 = (longlong *)(param_1[0x16] + 0x50 + lVar4 * 0x60);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -0xc;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) {
    FUN_143702e10(uVar1,param_1[0x16],0x60,*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 0x15) + -1);
  if (-1 < *(int *)(param_1 + 0x15) + -1) {
    plVar2 = (longlong *)(lVar4 * 0x50 + param_1[0x14]);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -10;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xac)) {
    FUN_143702e10(uVar1,param_1[0x14],0x50,*(uint *)((longlong)param_1 + 0xac) & 0x3fffffff);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x13) + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 * 0xd0 + param_1[0x12];
    do {
      FUN_14382c350(lVar4);
      lVar4 = lVar4 + -0xd0;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) {
    FUN_143702e10(uVar1,param_1[0x12],0xd0,*(uint *)((longlong)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  FUN_143887950(param_1 + 4);
  param_1[3] = hkaiNavMeshSilhouetteSelector::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143870c50 FUN_143870c50 body=144 status=ok
// SIG undefined FUN_143870c50(void)

undefined8 * FUN_143870c50(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiSilhouettePriorityController::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x18;
      if (*(short *)(param_1 + 2) != -1) {
        sVar2 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143870ce0 FUN_143870ce0 body=161 status=ok
// SIG undefined FUN_143870ce0(void)

void FUN_143870ce0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (int)param_1[2] + -1;
  uVar5 = 1 << ((byte)param_2 & 0x1f);
  puVar1 = (uint *)(*param_1 + ((longlong)param_2 >> 5) * 4);
  iVar4 = (int)param_1[2] + 0x1e >> 5;
  *puVar1 = -(*(uint *)(*param_1 + ((longlong)iVar6 >> 5) * 4) >> ((byte)iVar6 & 0x1f) & 1) & uVar5
            | ~uVar5 & *puVar1;
  *(int *)(param_1 + 2) = iVar6;
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar4) {
    iVar2 = uVar5 * 2;
    iVar6 = iVar4;
    if (iVar4 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_1,iVar6,4);
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 143870d90 FUN_143870d90 body=56 status=ok
// SIG undefined FUN_143870d90(void)

int FUN_143870d90(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 * 2 + 2;
  iVar2 = param_2 * 2 + 1;
  if ((int)param_1[1] <= iVar1) {
    return iVar2;
  }
  if (**(float **)(*param_1 + 8 + (longlong)iVar2 * 0x10) <
      **(float **)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 143870dd0 FUN_143870dd0 body=188 status=ok
// SIG undefined FUN_143870dd0(void)

void FUN_143870dd0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 local_res8 [2];
  
  uVar9 = 0;
  iVar8 = 0;
  local_res8[0] = 0;
  thunk_FUN_143719c70(0x55d5c36a);
  if (1 < *(int *)(param_1 + 1)) {
    FUN_14386fc30(*param_1,0,*(int *)(param_1 + 1) + -1,(undefined1)local_res8[0],local_res8);
  }
  iVar1 = *(int *)(param_1 + 1);
  piVar2 = (int *)*param_1;
  if (iVar1 != 0) {
    if (1 < (longlong)iVar1) {
      lVar6 = 1;
      piVar7 = piVar2;
      uVar10 = uVar9;
      do {
        if (*piVar7 != piVar2[lVar6]) {
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar10 = uVar10 + 1;
          piVar7 = piVar2 + uVar10;
          *piVar7 = piVar2[lVar6];
        }
        iVar8 = (int)uVar9;
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar1);
    }
    iVar8 = iVar8 + 1;
  }
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar8) {
    iVar3 = uVar5 * 2;
    iVar1 = iVar8;
    if (iVar8 < iVar3) {
      iVar1 = iVar3;
    }
    FUN_14370c310(uVar4,param_1,iVar1,4);
  }
  *(int *)(param_1 + 1) = iVar8;
  return;
}



// FUNCTION 143870e90 FUN_143870e90 body=110 status=ok
// SIG undefined FUN_143870e90(void)

void FUN_143870e90(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  lVar4 = param_1[1];
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_1,0x10);
  }
  puVar6 = (undefined4 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
  if (puVar6 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *puVar6 = *param_2;
    puVar6[1] = uVar1;
    puVar6[2] = uVar2;
    puVar6[3] = uVar3;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  FUN_143873c50(param_1,(int)lVar4);
  return;
}



// FUNCTION 143870f00 FUN_143870f00 body=273 status=ok
// SIG undefined FUN_143870f00(void)

void FUN_143870f00(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar5 = (longlong *)(param_1 + 0xb0);
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xb8) == (*(uint *)(param_1 + 0xbc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,plVar5,0x60);
  }
  lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0x60 + *plVar5;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x50) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar1 + 1;
  piVar4 = (int *)((longlong)iVar1 * 0x60 + *plVar5);
  *piVar4 = param_2;
  piVar4[1] = param_3;
  *(undefined1 *)(piVar4 + 2) = 0;
  plVar5 = (longlong *)((longlong)*piVar4 * 0x50 + *(longlong *)(param_1 + 0xa0));
  FUN_14371a670(&local_28,*(longlong *)(param_1 + 0x90) + 0x80 + (longlong)piVar4[1] * 0xd0,
                plVar5 + 6);
  if (*plVar5 != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(piVar4 + 0x14) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(piVar4 + 0x14) = *plVar5;
  *(undefined8 *)(piVar4 + 0xc) = local_28;
  *(undefined8 *)(piVar4 + 0xe) = uStack_20;
  *(undefined8 *)(piVar4 + 0x10) = local_18;
  *(undefined8 *)(piVar4 + 0x12) = uStack_10;
  return;
}



// FUNCTION 143871020 FUN_143871020 body=893 status=ok
// SIG undefined FUN_143871020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143871020(longlong param_1,int *param_2,longlong param_3,longlong param_4,int *param_5,
                  float param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  
  plVar1 = (longlong *)(param_1 + 0x90);
  iVar11 = *param_2 + 1;
  if (*param_2 + 1 < *(int *)(param_1 + 0xc0)) {
    iVar11 = *(int *)(param_1 + 0xc0);
  }
  *(int *)(param_1 + 0xc0) = iVar11;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x98) == (*(uint *)(param_1 + 0x9c) & 0x3fffffff)) {
    FUN_14370c460(uVar7,plVar1,0xd0);
  }
  lVar8 = (longlong)*(int *)(param_1 + 0x98) * 0xd0 + *plVar1;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    uVar7 = uRam00000001467f0898;
    *(undefined8 *)(lVar8 + 0x20) = _DAT_1467f0890;
    *(undefined8 *)(lVar8 + 0x28) = uVar7;
    uVar7 = uRam00000001467f08a8;
    *(undefined8 *)(lVar8 + 0x30) = _DAT_1467f08a0;
    *(undefined8 *)(lVar8 + 0x38) = uVar7;
    uVar5 = uRam00000001467f08bc;
    uVar4 = uRam00000001467f08b8;
    uVar2 = uRam00000001467f08b4;
    *(undefined4 *)(lVar8 + 0x40) = _DAT_1467f08b0;
    *(undefined4 *)(lVar8 + 0x44) = uVar2;
    *(undefined4 *)(lVar8 + 0x48) = uVar4;
    *(undefined4 *)(lVar8 + 0x4c) = uVar5;
    *(undefined8 *)(lVar8 + 0x50) = 0;
    *(undefined8 *)(lVar8 + 0x58) = 0;
    *(undefined8 *)(lVar8 + 0x60) = 0;
    *(undefined8 *)(lVar8 + 0x68) = 0;
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined4 *)(lVar8 + 0xb0) = 0;
    *(undefined4 *)(lVar8 + 0xb4) = 0x80000000;
    *(undefined8 *)(lVar8 + 0xb8) = 0;
    *(undefined4 *)(lVar8 + 0xc0) = 0;
    *(undefined4 *)(lVar8 + 0xc4) = 0x80000000;
  }
  piVar12 = (int *)((longlong)*(int *)(param_1 + 0x98) * 0xd0 + *plVar1);
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  *piVar12 = *param_2;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(piVar12 + 2) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(piVar12 + 2) = param_3;
  if (param_4 != 0) {
    FUN_14370c030(param_4);
  }
  if (*(longlong *)(piVar12 + 4) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(piVar12 + 4) = param_4;
  plVar1 = (longlong *)(piVar12 + 0x2a);
  iVar11 = param_5[1];
  iVar6 = param_5[2];
  iVar3 = param_5[3];
  piVar12[0x20] = *param_5;
  piVar12[0x21] = iVar11;
  piVar12[0x22] = iVar6;
  piVar12[0x23] = iVar3;
  iVar11 = param_5[5];
  iVar6 = param_5[6];
  iVar3 = param_5[7];
  piVar12[0x24] = param_5[4];
  piVar12[0x25] = iVar11;
  piVar12[0x26] = iVar6;
  piVar12[0x27] = iVar3;
  piVar12[0x28] = (int)param_6;
  iVar11 = *(int *)(param_3 + 0x20);
  uVar7 = FUN_143703a50();
  if ((int)(piVar12[0x2d] & 0x3fffffffU) < iVar11) {
    iVar3 = (piVar12[0x2d] & 0x3fffffffU) * 2;
    iVar6 = iVar11;
    if (iVar11 < iVar3) {
      iVar6 = iVar3;
    }
    FUN_14370c310(uVar7,plVar1,iVar6,0x10);
  }
  iVar6 = (piVar12[0x2c] - iVar11) + -1;
  lVar8 = (longlong)iVar6;
  if (-1 < iVar6) {
    puVar10 = (uint *)((longlong)iVar11 * 0x10 + *plVar1 + 0xc + lVar8 * 0x10);
    do {
      uVar7 = FUN_143703a50();
      puVar10[-1] = 0;
      if (-1 < (int)*puVar10) {
        FUN_143702e10(uVar7,*(undefined8 *)(puVar10 + -3),4,*puVar10 & 0x3fffffff);
      }
      puVar10[-3] = 0;
      puVar10[-2] = 0;
      *puVar10 = 0x80000000;
      puVar10 = puVar10 + -4;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar6 = iVar11 - piVar12[0x2c];
  puVar9 = (undefined8 *)((longlong)piVar12[0x2c] * 0x10 + *plVar1);
  lVar8 = (longlong)iVar6;
  if (0 < iVar6) {
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0x80000000;
      }
      puVar9 = puVar9 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  piVar12[0x2c] = iVar11;
  FUN_143717ab0(piVar12 + 0x20,*(longlong *)(piVar12 + 2) + 0x90,local_48);
  uStack_4c = *(undefined4 *)(param_1 + 0x13c);
  uStack_50 = *(uint *)(param_1 + 0x138) ^ 0x80000000;
  local_58 = *(uint *)(param_1 + 0x130) ^ 0x80000000;
  uStack_54 = *(uint *)(param_1 + 0x134) ^ 0x80000000;
  param_6 = *(float *)(*(longlong *)(piVar12 + 2) + 0xb0) + *(float *)(param_1 + 0x1c0);
  local_68 = *(undefined4 *)(param_1 + 0x140 + (longlong)piVar12[0x28] * 4);
  local_78 = param_6;
  fStack_74 = param_6;
  fStack_70 = param_6;
  fStack_6c = param_6;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  FUN_143832440(local_48,&local_58,&local_68,&local_78,
                ((*(byte *)(*(longlong *)(piVar12 + 2) + 0x80) & 1) != 0) + '\x03');
  param_5 = (int *)param_1;
  FUN_14386e810(param_1 + 0x20,local_48,&param_5);
  uVar2 = *(undefined4 *)(param_1 + 0x98);
  FUN_1437f14b0(param_1 + 0xf8,0,uVar2,1);
  FUN_1437f14b0(param_1 + 0x110,0,uVar2,1);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}



// FUNCTION 1438713a0 FUN_1438713a0 body=377 status=ok
// SIG undefined FUN_1438713a0(void)

void FUN_1438713a0(longlong param_1,longlong *param_2)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong local_res8;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar6 = (longlong *)(param_1 + 0xa0);
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 0xa8) == (*(uint *)(param_1 + 0xac) & 0x3fffffff)) {
    FUN_14370c460(uVar4,plVar6,0x50);
  }
  puVar5 = (undefined8 *)((longlong)*(int *)(param_1 + 0xa8) * 0x50 + *plVar6);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
  }
  plVar6 = (longlong *)((longlong)*(int *)(param_1 + 0xa8) * 0x50 + *plVar6);
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  if (param_2 != (longlong *)0x0) {
    FUN_14370c030(param_2);
  }
  if (*plVar6 != 0) {
    FUN_14370c150();
  }
  *plVar6 = (longlong)param_2;
  local_28 = (undefined4)param_2[6];
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_20 = (undefined4)param_2[7];
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(plVar6 + 6) = local_28;
  *(undefined4 *)((longlong)plVar6 + 0x34) = uStack_24;
  *(undefined4 *)(plVar6 + 7) = uStack_20;
  *(undefined4 *)((longlong)plVar6 + 0x3c) = uStack_1c;
  lVar3 = param_2[9];
  plVar6[8] = param_2[8];
  plVar6[9] = lVar3;
  local_18 = 0;
  uStack_10 = 0;
  (**(code **)(*param_2 + 0x38))(param_2,&local_28,plVar6 + 2);
  fVar1 = *(float *)(*plVar6 + 0x20);
  local_48 = (*(float *)(plVar6 + 2) - fVar1) + *(float *)(plVar6 + 8);
  fStack_44 = (*(float *)((longlong)plVar6 + 0x14) - fVar1) + *(float *)((longlong)plVar6 + 0x44);
  fStack_40 = (*(float *)(plVar6 + 3) - fVar1) + *(float *)(plVar6 + 9);
  fStack_3c = (*(float *)((longlong)plVar6 + 0x1c) - fVar1) + *(float *)((longlong)plVar6 + 0x4c);
  local_38 = *(float *)(plVar6 + 4) + fVar1 + *(float *)(plVar6 + 8);
  fStack_34 = *(float *)((longlong)plVar6 + 0x24) + fVar1 + *(float *)((longlong)plVar6 + 0x44);
  fStack_30 = *(float *)(plVar6 + 5) + fVar1 + *(float *)(plVar6 + 9);
  fStack_2c = *(float *)((longlong)plVar6 + 0x2c) + fVar1 + *(float *)((longlong)plVar6 + 0x4c);
  local_res8 = param_1;
  FUN_14386e9f0(param_1 + 0x20,&local_48,&local_res8);
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  FUN_1437f14b0(param_1 + 200,0,uVar2,1);
  FUN_1437f14b0(param_1 + 0xe0,0,uVar2,1);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}



// FUNCTION 143871520 FUN_143871520 body=141 status=ok
// SIG undefined FUN_143871520(void)

int FUN_143871520(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar14 = param_1[1];
  iVar15 = FUN_143870d90();
  while( true ) {
    iVar13 = iVar15;
    if ((int)lVar14 <= iVar13) {
      return param_2;
    }
    lVar4 = *param_1;
    lVar17 = (longlong)param_2;
    lVar16 = (longlong)iVar13;
    pfVar5 = *(float **)(lVar4 + 8 + lVar16 * 0x10);
    fVar3 = **(float **)(lVar4 + 8 + lVar17 * 0x10);
    if (fVar3 < *pfVar5 || fVar3 == *pfVar5) break;
    puVar1 = (undefined4 *)(lVar4 + lVar16 * 0x10);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(lVar4 + lVar17 * 0x10);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    uVar11 = puVar2[2];
    uVar12 = puVar2[3];
    puVar2 = (undefined4 *)(lVar4 + lVar17 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    puVar1 = (undefined4 *)(lVar4 + lVar16 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    iVar15 = FUN_143870d90(param_1,iVar13);
    param_2 = iVar13;
  }
  return param_2;
}



// FUNCTION 1438715b0 FUN_1438715b0 body=1171 status=ok
// SIG undefined FUN_1438715b0(void)

/* WARNING: Removing unreachable block (ram,0x000143871830) */

void FUN_1438715b0(longlong param_1,ulonglong param_2,undefined ***param_3,longlong param_4,
                  longlong *param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined ***pppuVar4;
  undefined4 uVar5;
  undefined ***pppuVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res18;
  uint local_108 [4];
  ulonglong local_f8;
  uint local_f0;
  uint local_ec;
  undefined ***local_e8;
  float fStack_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined **local_98;
  undefined **ppuStack_90;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68;
  undefined **ppuStack_60;
  undefined1 local_58 [32];
  ulonglong uVar11;
  
  uVar3 = 0;
  local_108[0] = 0;
  iVar7 = -1;
  if (0 < *(int *)(param_1 + 0x80)) {
    puVar2 = *(uint **)(param_1 + 0x78);
    uVar13 = uVar3;
    do {
      iVar7 = (int)uVar13;
      if (*puVar2 == ((uint)(param_2 >> 0x16) & 0x3ff)) break;
      uVar13 = (ulonglong)((int)uVar13 + 1);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x34;
      iVar7 = -1;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x80));
  }
  pppuVar4 = *(undefined ****)(param_1 + 0x1c8);
  local_d0 = 0;
  lVar12 = (longlong)iVar7 * 0xd0 + *(longlong *)(param_1 + 0x78);
  local_c8 = 0x1ffff;
  local_d8 = hkaiDefaultSilhouettePriorityController::vftable;
  bVar15 = pppuVar4 == (undefined ***)0x0;
  local_res18 = param_3;
  if (bVar15) {
    pppuVar6 = &local_d8;
    FUN_14370c030(&local_d8);
    local_e8 = &local_d8;
    pppuVar4 = local_res18;
  }
  else {
    FUN_14370c030(pppuVar4);
    pppuVar6 = local_res18;
    local_e8 = pppuVar4;
  }
  if ((bVar15) && (pppuVar6 != (undefined ***)0x0)) {
    FUN_14370c150(pppuVar6);
  }
  if ((!bVar15) && (pppuVar4 != (undefined ***)0x0)) {
    FUN_14370c150(pppuVar4);
  }
  uVar13 = 0;
  plVar14 = (longlong *)
            ((ulonglong)((uint)param_2 & 0x3fffff) * 0x10 + *(longlong *)(lVar12 + 0xa8));
  local_108[0] = *(uint *)(plVar14 + 1);
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x80000000;
  uVar1 = FUN_143703a50();
  uVar10 = local_108[0];
  uVar3 = uVar13;
  if (local_108[0] != 0) {
    uVar3 = FUN_143702d60(uVar1,8,local_108);
  }
  local_f0 = uVar10;
  local_ec = 0x80000000;
  if (local_108[0] != 0) {
    local_ec = local_108[0];
  }
  uVar8 = uVar13;
  uVar9 = uVar13;
  uVar11 = uVar13;
  if (0 < (int)plVar14[1]) {
    do {
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      *(longlong *)(uVar8 + uVar3) =
           *(longlong *)(param_1 + 0x98) + 0x30 + (longlong)*(int *)(uVar9 + *plVar14) * 0x60;
      uVar8 = uVar8 + 8;
      uVar9 = uVar9 + 4;
    } while ((int)uVar10 < (int)plVar14[1]);
  }
  local_f8 = uVar3;
  local_108[0] = FUN_1438738d0(local_e8,&local_f8);
  local_98 = *local_res18;
  ppuStack_90 = local_res18[1];
  local_88 = local_res18[2];
  ppuStack_80 = local_res18[3];
  local_78 = *(undefined4 *)(local_res18 + 4);
  uStack_74 = *(undefined4 *)((longlong)local_res18 + 0x24);
  uStack_70 = *(undefined4 *)(local_res18 + 5);
  uStack_6c = *(undefined4 *)((longlong)local_res18 + 0x2c);
  local_68 = local_res18[6];
  ppuStack_60 = local_res18[7];
  if ((*(byte *)(*(longlong *)(lVar12 + 8) + 0x80) & 1) != 0) {
    local_res18 = (undefined ***)(CONCAT44(local_res18._4_4_,(uint)param_2) & 0xffffffff003fffff);
    hkaiNavMeshUtils::calcFaceNormal(local_58,*(undefined8 *)(lVar12 + 8),&local_res18,local_b8);
    FUN_143713650(&local_e8,lVar12 + 0x80,local_b8);
    fStack_a4 = SUB84(local_e8,0);
    fVar17 = (float)((ulonglong)local_e8 >> 0x20);
    fVar24 = fStack_a4 * fStack_a4;
    fVar25 = fVar17 * fVar17;
    fVar16 = fStack_a4 * fStack_a4 + fStack_e0 * fStack_e0;
    uVar10 = -(uint)(fVar25 + fVar24 < fVar16 + 0.0);
    fStack_a0 = (float)((uint)fStack_a4 &
                       -(uint)(fVar25 + fVar24 < fStack_e0 * fStack_e0 + fStack_a4 * fStack_a4 + 0.0
                              ));
    fStack_a4 = (float)(~-(uint)(fVar25 + fVar24 < fVar16 + 0.0) & (uint)fStack_a4);
    local_a8 = (float)(~uVar10 & (uint)-fVar17 | (uint)-fStack_e0 & uVar10);
    fVar17 = local_a8 * local_a8;
    fVar16 = fStack_a4 * fStack_a4;
    auVar18._8_4_ = fStack_a0 * fStack_a0;
    auVar18._4_4_ = auVar18._8_4_;
    auVar18._0_4_ = auVar18._8_4_;
    auVar18._12_4_ = auVar18._8_4_;
    fVar20 = fVar16 + fVar17 + auVar18._8_4_;
    fVar21 = fVar16 + fVar17 + auVar18._8_4_;
    fVar22 = fVar16 + fVar17 + auVar18._8_4_;
    fVar23 = fVar16 + fVar17 + auVar18._8_4_;
    auVar19._4_4_ = fVar21;
    auVar19._0_4_ = fVar20;
    auVar19._8_4_ = fVar22;
    auVar19._12_4_ = fVar23;
    auVar19 = rsqrtps(auVar18,auVar19);
    fVar17 = auVar19._0_4_;
    fVar16 = auVar19._4_4_;
    fVar24 = auVar19._8_4_;
    fVar25 = auVar19._12_4_;
    local_a8 = local_a8 *
               (float)(~-(uint)(fVar20 <= 0.0) &
                      (uint)((3.0 - fVar20 * fVar17 * fVar17) * fVar17 * 0.5));
    fStack_a4 = fStack_a4 *
                (float)(~-(uint)(fVar21 <= 0.0) &
                       (uint)((3.0 - fVar21 * fVar16 * fVar16) * fVar16 * 0.5));
    fStack_a0 = fStack_a0 *
                (float)(~-(uint)(fVar22 <= 0.0) &
                       (uint)((3.0 - fVar22 * fVar24 * fVar24) * fVar24 * 0.5));
    fStack_9c = (float)(~-(uint)(fVar23 <= 0.0) &
                       (uint)((3.0 - fVar23 * fVar25 * fVar25) * fVar25 * 0.5)) * 0.0;
    FUN_14389f5d0(&local_88,&local_e8,&local_a8);
  }
  local_98 = (undefined **)
             CONCAT44(local_98._4_4_,local_98._0_4_ + *(float *)(*(longlong *)(lVar12 + 8) + 0xb0));
  uVar3 = uVar13;
  if (0 < (int)plVar14[1]) {
    do {
      iVar7 = *(int *)(param_4 + 8);
      lVar12 = (longlong)*(int *)(*plVar14 + uVar13 * 4) * 0x60 + *(longlong *)(param_1 + 0x98);
      local_res18 = (undefined ***)(lVar12 + 0x30);
      FUN_1438ae920(&local_res18,1,&local_98,param_4);
      if ((longlong)uVar13 < (longlong)(int)local_108[0]) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(undefined4 *)(*(longlong *)(lVar12 + 0x50) + 0x24);
      }
      if (iVar7 < *(int *)(param_4 + 8)) {
        do {
          if (*(uint *)(param_5 + 1) == (*(uint *)((longlong)param_5 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_5,4);
          }
          iVar7 = iVar7 + 1;
          *(undefined4 *)(*param_5 + (longlong)(int)param_5[1] * 4) = uVar5;
          *(int *)(param_5 + 1) = (int)param_5[1] + 1;
        } while (iVar7 < *(int *)(param_4 + 8));
      }
      uVar10 = (int)uVar3 + 1;
      uVar13 = uVar13 + 1;
      uVar3 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)plVar14[1]);
  }
  uVar1 = FUN_143703a50();
  local_f0 = 0;
  if (-1 < (int)local_ec) {
    FUN_143702e10(uVar1,local_f8,8,local_ec & 0x3fffffff);
  }
  local_f8 = 0;
  local_d8 = hkaiSilhouettePriorityController::vftable;
  local_ec = 0x80000000;
  FUN_14370c000(&local_d8);
  return;
}



// FUNCTION 143871a50 FUN_143871a50 body=1189 status=ok
// SIG undefined FUN_143871a50(void)

void FUN_143871a50(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  int local_res18;
  int local_res20;
  longlong local_68;
  longlong local_60;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtgetAllUpdatedFaces");
  }
  iVar12 = *(int *)(param_1 + 0xc0);
  uVar6 = FUN_143703a50();
  uVar9 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar9 < iVar12) {
    iVar1 = uVar9 * 2;
    iVar10 = iVar12;
    if (iVar12 < iVar1) {
      iVar10 = iVar1;
    }
    FUN_14370c310(uVar6,param_2,iVar10);
  }
  iVar10 = ((int)param_2[1] - iVar12) + -1;
  if (-1 < iVar10) {
    lVar14 = (longlong)iVar10 * 0x38 + (longlong)iVar12 * 0x38 + *param_2;
    do {
      FUN_143802bb0(lVar14);
      lVar14 = lVar14 + -0x38;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  iVar10 = iVar12 - (int)param_2[1];
  lVar14 = (longlong)iVar10;
  if (0 < iVar10) {
    puVar7 = (undefined4 *)((longlong)(int)param_2[1] * 0x38 + *param_2 + 0x14);
    do {
      if (puVar7 != (undefined4 *)&DAT_00000014) {
        *(undefined8 *)(puVar7 + -3) = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        *(undefined8 *)(puVar7 + 1) = 0;
        puVar7[3] = 0;
        puVar7[4] = 0x80000000;
        *(undefined8 *)(puVar7 + 5) = 0;
        puVar7[7] = 0;
        puVar7[8] = 0x80000000;
      }
      puVar7 = puVar7 + 0xe;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  iVar10 = 0;
  *(int *)(param_2 + 1) = iVar12;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar14 = 0;
    do {
      *(int *)(lVar14 + *param_2) = iVar10;
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + 0x38;
    } while (iVar10 < *(int *)(param_1 + 0xc0));
  }
  local_res20 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    local_60 = 0;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0xf8) + ((longlong)local_res20 >> 5) * 4) >>
           ((byte)local_res20 & 0x1f) & 1) == 0) {
        piVar15 = (int *)(*(longlong *)(param_1 + 0x90) + local_60);
        iVar12 = piVar15[0x30];
        lVar14 = (longlong)*piVar15 * 0x38 + *param_2;
        uVar6 = FUN_143703a50();
        uVar9 = *(uint *)(lVar14 + 0x34) & 0x3fffffff;
        if ((int)uVar9 < iVar12) {
          iVar10 = uVar9 * 2;
          if (iVar12 < iVar10) {
            iVar12 = iVar10;
          }
          FUN_14370c310(uVar6,lVar14 + 0x28,iVar12,0x20);
        }
        local_res18 = 0;
        if (0 < piVar15[0x30]) {
          local_68 = 0;
          do {
            iVar12 = 0;
            lVar16 = *(longlong *)(piVar15 + 0x2e) + local_68;
            if (0 < *(int *)(lVar16 + 0x38)) {
              lVar13 = 0;
              do {
                iVar10 = *(int *)(lVar13 + *(longlong *)(lVar16 + 0x30));
                if (*(int *)(*(longlong *)(piVar15 + 0x2a) + 8 + (longlong)iVar10 * 0x10) == 0) {
                  uVar6 = FUN_143703a50();
                  if (*(uint *)(lVar14 + 0x20) == (*(uint *)(lVar14 + 0x24) & 0x3fffffff)) {
                    FUN_14370c460(uVar6,lVar14 + 0x18,4);
                  }
                  *(int *)(*(longlong *)(lVar14 + 0x18) + (longlong)*(int *)(lVar14 + 0x20) * 4) =
                       iVar10;
                  *(int *)(lVar14 + 0x20) = *(int *)(lVar14 + 0x20) + 1;
                }
                else {
                  uVar6 = FUN_143703a50();
                  if (*(uint *)(lVar14 + 0x10) == (*(uint *)(lVar14 + 0x14) & 0x3fffffff)) {
                    FUN_14370c460(uVar6,lVar14 + 8,4);
                  }
                  *(int *)(*(longlong *)(lVar14 + 8) + (longlong)*(int *)(lVar14 + 0x10) * 4) =
                       iVar10;
                  *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + 1;
                }
                iVar12 = iVar12 + 1;
                lVar13 = lVar13 + 4;
              } while (iVar12 < *(int *)(lVar16 + 0x38));
            }
            uVar6 = FUN_143703a50();
            if (*(uint *)(lVar14 + 0x30) == (*(uint *)(lVar14 + 0x34) & 0x3fffffff)) {
              FUN_14370c460(uVar6,lVar14 + 0x28,0x20);
            }
            puVar7 = (undefined4 *)
                     ((longlong)*(int *)(lVar14 + 0x30) * 0x20 + *(longlong *)(lVar14 + 0x28));
            if (puVar7 != (undefined4 *)0x0) {
              uVar2 = *(undefined4 *)(lVar16 + 0x14);
              uVar3 = *(undefined4 *)(lVar16 + 0x18);
              uVar4 = *(undefined4 *)(lVar16 + 0x1c);
              *puVar7 = *(undefined4 *)(lVar16 + 0x10);
              puVar7[1] = uVar2;
              puVar7[2] = uVar3;
              puVar7[3] = uVar4;
              uVar6 = *(undefined8 *)(lVar16 + 0x28);
              *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar16 + 0x20);
              *(undefined8 *)(puVar7 + 6) = uVar6;
            }
            *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
            local_res18 = local_res18 + 1;
            local_68 = local_68 + 0x40;
          } while (local_res18 < piVar15[0x30]);
        }
        uVar6 = FUN_143703a50();
        lVar16 = (longlong)(piVar15[0x30] + -1);
        if (-1 < piVar15[0x30] + -1) {
          puVar11 = (uint *)(*(longlong *)(piVar15 + 0x2e) + 0x3c + lVar16 * 0x40);
          do {
            uVar8 = FUN_143703a50();
            puVar11[-1] = 0;
            if (-1 < (int)*puVar11) {
              FUN_143702e10(uVar8,*(undefined8 *)(puVar11 + -3),4,*puVar11 & 0x3fffffff);
            }
            puVar11[-3] = 0;
            puVar11[-2] = 0;
            *puVar11 = 0x80000000;
            puVar11 = puVar11 + -0x10;
            lVar16 = lVar16 + -1;
          } while (-1 < lVar16);
        }
        piVar15[0x30] = 0;
        if (-1 < piVar15[0x31]) {
          FUN_143702e10(uVar6,*(undefined8 *)(piVar15 + 0x2e),0x40,piVar15[0x31] & 0x3fffffff);
        }
        piVar15[0x2e] = 0;
        piVar15[0x2f] = 0;
        piVar15[0x31] = -0x80000000;
        thunk_FUN_143719c70(0x52b70b67);
        FUN_143870dd0(lVar14 + 8);
        FUN_143870dd0(lVar14 + 0x18);
        thunk_FUN_143719c70(0x905ebc46);
      }
      local_res20 = local_res20 + 1;
      local_60 = local_60 + 0xd0;
    } while (local_res20 < *(int *)(param_1 + 0x98));
  }
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143871f00 FUN_143871f00 body=350 status=ok
// SIG undefined FUN_143871f00(void)

void FUN_143871f00(longlong param_1,int *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  float fVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  fVar1 = *(float *)(param_1 + 0x1d0);
  lVar5 = (longlong)param_2[1] * 0xd0 + *(longlong *)(param_1 + 0x90);
  plVar4 = (longlong *)((longlong)*param_2 * 0x50 + *(longlong *)(param_1 + 0xa0));
  auVar2._4_4_ = -(uint)(ABS(*(float *)(lVar5 + 0x84) - DAT_1467f08c4) <= fVar1);
  auVar2._0_4_ = -(uint)(ABS(*(float *)(lVar5 + 0x80) - DAT_1467f08c0) <= fVar1);
  auVar2._8_4_ = -(uint)(ABS(*(float *)(lVar5 + 0x88) - DAT_1467f08c8) <= fVar1);
  auVar2._12_4_ = -(uint)(ABS(*(float *)(lVar5 + 0x8c) - DAT_1467f08cc) <= fVar1);
  iVar3 = movmskps(*param_2,auVar2);
  if (iVar3 == 0xf) {
    local_18 = *(float *)(plVar4 + 8) - *(float *)(lVar5 + 0x90);
    fStack_14 = *(float *)((longlong)plVar4 + 0x44) - *(float *)(lVar5 + 0x94);
    fStack_10 = *(float *)(plVar4 + 9) - *(float *)(lVar5 + 0x98);
    fStack_c = *(float *)((longlong)plVar4 + 0x4c) - *(float *)(lVar5 + 0x9c);
    local_28 = *(float *)(plVar4 + 2) + local_18;
    fStack_24 = *(float *)((longlong)plVar4 + 0x14) + fStack_14;
    fStack_20 = *(float *)(plVar4 + 3) + fStack_10;
    fStack_1c = *(float *)((longlong)plVar4 + 0x1c) + fStack_c;
    local_18 = *(float *)(plVar4 + 4) + local_18;
    fStack_14 = *(float *)((longlong)plVar4 + 0x24) + fStack_14;
    fStack_10 = *(float *)(plVar4 + 5) + fStack_10;
    fStack_c = *(float *)((longlong)plVar4 + 0x2c) + fStack_c;
  }
  else {
    (**(code **)(*(longlong *)*plVar4 + 0x38))((longlong *)*plVar4,param_4,&local_28);
  }
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_48 = *(undefined4 *)((longlong)param_3 + (longlong)*(int *)(lVar5 + 0xa0) * 4 + 0x10);
  local_58 = *(float *)(*(longlong *)(lVar5 + 8) + 0xb0) + *(float *)(param_3 + 0x12) +
             *(float *)(*plVar4 + 0x20);
  fStack_54 = local_58;
  fStack_50 = local_58;
  fStack_4c = local_58;
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  FUN_143832440(&local_28,&local_38,&local_48,&local_58,
                ((*(byte *)(*(longlong *)(lVar5 + 8) + 0x80) & 1) != 0) + '\x03');
  *param_5 = CONCAT44(fStack_24,local_28);
  param_5[1] = CONCAT44(fStack_1c,fStack_20);
  param_5[2] = CONCAT44(fStack_14,local_18);
  param_5[3] = CONCAT44(fStack_c,fStack_10);
  return;
}



// FUNCTION 143872060 FUN_143872060 body=1755 status=ok
// SIG undefined FUN_143872060(void)

void FUN_143872060(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  int *piVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint local_res20;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  LPVOID local_70;
  longlong *local_68;
  int local_60;
  uint local_5c;
  
  local_70 = TlsGetValue(DAT_146b8198c);
  if (local_70 != (LPVOID)0x0) {
    FUN_14370d5c0(local_70,"TtgetUpdatedFacesLimited");
  }
  iVar20 = *(int *)(param_1 + 0xc0);
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar20) {
    iVar1 = uVar5 * 2;
    iVar9 = iVar20;
    if (iVar20 < iVar1) {
      iVar9 = iVar1;
    }
    FUN_14370c310(uVar3,param_2,iVar9,0x38);
  }
  iVar9 = ((int)param_2[1] - iVar20) + -1;
  if (-1 < iVar9) {
    lVar15 = (longlong)iVar9 * 0x38 + (longlong)iVar20 * 0x38 + *param_2;
    do {
      FUN_143802bb0(lVar15);
      lVar15 = lVar15 + -0x38;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  iVar9 = iVar20 - (int)param_2[1];
  uVar12 = 0;
  lVar15 = (longlong)iVar9;
  if (0 < iVar9) {
    puVar6 = (undefined4 *)((longlong)(int)param_2[1] * 0x38 + *param_2 + 0x14);
    do {
      if (puVar6 != (undefined4 *)&DAT_00000014) {
        *(undefined8 *)(puVar6 + -3) = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        *(undefined8 *)(puVar6 + 1) = 0;
        puVar6[3] = 0;
        puVar6[4] = 0x80000000;
        *(undefined8 *)(puVar6 + 5) = 0;
        puVar6[7] = 0;
        puVar6[8] = 0x80000000;
      }
      puVar6 = puVar6 + 0xe;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  *(int *)(param_2 + 1) = iVar20;
  FUN_143710920(&local_68);
  uVar11 = uVar12;
  uVar17 = uVar12;
  if (0 < *(int *)(param_1 + 0x98)) {
    do {
      piVar16 = (int *)(*(longlong *)(param_1 + 0x90) + uVar17);
      if (((*(uint *)(*(longlong *)(param_1 + 0xf8) + ((longlong)*piVar16 >> 5) * 4) >>
            ((byte)*piVar16 & 0x1f) & 1) != 0) && (uVar10 = uVar12, 0 < piVar16[0x30])) {
        do {
          lStack_78 = (longlong)(int)uVar10 * 0x40 + *(longlong *)(piVar16 + 0x2e);
          local_80 = CONCAT44(local_80._4_4_,(int)uVar11);
          FUN_143870e90(&local_68,&local_80);
          uVar5 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar5;
        } while ((int)uVar5 < piVar16[0x30]);
      }
      uVar5 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar5;
      uVar17 = uVar17 + 0xd0;
    } while ((int)uVar5 < *(int *)(param_1 + 0x98));
  }
  iVar20 = *(int *)(param_1 + 0x1d4);
  while ((0 < iVar20 && (local_60 != 0))) {
    local_80 = *local_68;
    lStack_78 = local_68[1];
    FUN_143872dc0(&local_68,0);
    lVar15 = lStack_78;
    piVar16 = (int *)((longlong)(int)local_80 * 0xd0 + *(longlong *)(param_1 + 0x90));
    lVar22 = (longlong)*piVar16 * 0x38 + *param_2;
    iVar9 = 0;
    if (0 < *(int *)(lStack_78 + 0x38)) {
      lVar21 = 0;
      do {
        iVar1 = *(int *)(lVar21 + *(longlong *)(lVar15 + 0x30));
        if (*(int *)(*(longlong *)(piVar16 + 0x2a) + 8 + (longlong)iVar1 * 0x10) == 0) {
          uVar3 = FUN_143703a50();
          if (*(uint *)(lVar22 + 0x20) == (*(uint *)(lVar22 + 0x24) & 0x3fffffff)) {
            FUN_14370c460(uVar3,lVar22 + 0x18,4);
          }
          *(int *)(*(longlong *)(lVar22 + 0x18) + (longlong)*(int *)(lVar22 + 0x20) * 4) = iVar1;
          *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
        }
        else {
          uVar3 = FUN_143703a50();
          if (*(uint *)(lVar22 + 0x10) == (*(uint *)(lVar22 + 0x14) & 0x3fffffff)) {
            FUN_14370c460(uVar3,lVar22 + 8,4);
          }
          *(int *)(*(longlong *)(lVar22 + 8) + (longlong)*(int *)(lVar22 + 0x10) * 4) = iVar1;
          *(int *)(lVar22 + 0x10) = *(int *)(lVar22 + 0x10) + 1;
        }
        iVar9 = iVar9 + 1;
        lVar21 = lVar21 + 4;
      } while (iVar9 < *(int *)(lVar15 + 0x38));
    }
    uVar3 = FUN_143703a50();
    if (*(uint *)(lVar22 + 0x30) == (*(uint *)(lVar22 + 0x34) & 0x3fffffff)) {
      FUN_14370c460(uVar3,lVar22 + 0x28,0x20);
    }
    puVar4 = (undefined8 *)((longlong)*(int *)(lVar22 + 0x30) * 0x20 + *(longlong *)(lVar22 + 0x28))
    ;
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(lVar15 + 0x18);
      *puVar4 = *(undefined8 *)(lVar15 + 0x10);
      puVar4[1] = uVar3;
      uVar3 = *(undefined8 *)(lVar15 + 0x28);
      puVar4[2] = *(undefined8 *)(lVar15 + 0x20);
      puVar4[3] = uVar3;
    }
    *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
    iVar20 = iVar20 - *(int *)(lVar15 + 0x38);
    uVar3 = FUN_143703a50();
    *(undefined4 *)(lVar15 + 0x38) = 0;
    if (-1 < (int)*(uint *)(lVar15 + 0x3c)) {
      FUN_143702e10(uVar3,*(undefined8 *)(lVar15 + 0x30),4,*(uint *)(lVar15 + 0x3c) & 0x3fffffff);
    }
    *(undefined8 *)(lVar15 + 0x30) = 0;
    *(undefined4 *)(lVar15 + 0x3c) = 0x80000000;
  }
  uVar17 = 0;
  uVar12 = uVar17;
  uVar11 = uVar17;
  if (0 < (int)param_2[1]) {
    do {
      iVar20 = (int)uVar11;
      *(int *)(uVar12 + *param_2) = iVar20;
      FUN_143870dd0(*param_2 + 8 + (longlong)iVar20 * 0x38);
      FUN_143870dd0(*param_2 + 0x18 + (longlong)iVar20 * 0x38);
      uVar12 = uVar12 + 0x38;
      uVar11 = (ulonglong)(iVar20 + 1U);
    } while ((int)(iVar20 + 1U) < (int)param_2[1]);
  }
  local_res20 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    local_80 = 0;
    do {
      piVar16 = (int *)(*(longlong *)(param_1 + 0x90) + local_80);
      uVar5 = (uint)uVar17;
      if ((*(uint *)(*(longlong *)(param_1 + 0xf8) + ((longlong)*piVar16 >> 5) * 4) >>
           ((byte)*piVar16 & 0x1f) & 1) != 0) {
        iVar20 = piVar16[0x30] + -1;
        local_88 = (longlong)iVar20;
        if (-1 < iVar20) {
          lVar15 = local_88 << 6;
          do {
            lVar22 = *(longlong *)(piVar16 + 0x2e) + lVar15;
            if (*(int *)(lVar22 + 0x38) == 0) {
              uVar3 = FUN_143703a50();
              *(undefined4 *)(lVar22 + 0x38) = 0;
              if (-1 < (int)*(uint *)(lVar22 + 0x3c)) {
                FUN_143702e10(uVar3,*(undefined8 *)(lVar22 + 0x30),4,
                              *(uint *)(lVar22 + 0x3c) & 0x3fffffff);
              }
              *(undefined8 *)(lVar22 + 0x30) = 0;
              *(undefined4 *)(lVar22 + 0x3c) = 0x80000000;
              piVar16[0x30] = piVar16[0x30] + -1;
              if (piVar16[0x30] != iVar20) {
                lVar21 = 8;
                puVar4 = (undefined8 *)(*(longlong *)(piVar16 + 0x2e) + lVar15);
                lVar22 = ((longlong)piVar16[0x30] * 0x40 + *(longlong *)(piVar16 + 0x2e)) -
                         (longlong)puVar4;
                do {
                  *puVar4 = *(undefined8 *)(lVar22 + (longlong)puVar4);
                  puVar4 = puVar4 + 1;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
              }
            }
            else {
              lVar7 = (longlong)*piVar16 * 0x38 + *param_2;
              iVar14 = *(int *)(lVar22 + 0x38) + -1;
              lVar13 = (longlong)iVar14;
              iVar9 = *(int *)(lVar7 + 0x20);
              lVar21 = *(longlong *)(lVar7 + 0x18);
              lVar2 = *(longlong *)(lVar7 + 8);
              iVar1 = *(int *)(lVar7 + 0x10);
              if (-1 < iVar14) {
                do {
                  lVar7 = *(longlong *)(lVar22 + 0x30);
                  iVar18 = (int)((longlong)iVar1 * 4 >> 2) + -1;
                  iVar19 = 0;
                  if (0 < iVar18) {
                    do {
                      iVar8 = iVar18 + iVar19 >> 1;
                      if (*(int *)(lVar2 + (longlong)iVar8 * 4) < *(int *)(lVar7 + lVar13 * 4)) {
                        iVar19 = iVar8 + 1;
                        iVar8 = iVar18;
                      }
                      iVar18 = iVar8;
                    } while (iVar19 < iVar18);
                  }
                  if (iVar19 == iVar18) {
                    iVar18 = *(int *)(lVar7 + lVar13 * 4);
                    iVar8 = *(int *)(lVar2 + (longlong)iVar19 * 4);
                    if (((iVar8 < iVar18) || (iVar18 < iVar8)) || (iVar19 == -1))
                    goto LAB_1438725bb;
LAB_14387261b:
                    *(int *)(lVar22 + 0x38) = *(int *)(lVar22 + 0x38) + -1;
                    if (*(int *)(lVar22 + 0x38) != iVar14) {
                      *(undefined4 *)(lVar7 + lVar13 * 4) =
                           *(undefined4 *)(lVar7 + (longlong)*(int *)(lVar22 + 0x38) * 4);
                    }
                  }
                  else {
LAB_1438725bb:
                    iVar19 = 0;
                    iVar18 = (int)((longlong)iVar9 * 4 >> 2) + -1;
                    if (0 < iVar18) {
                      do {
                        iVar8 = iVar18 + iVar19 >> 1;
                        if (*(int *)(lVar21 + (longlong)iVar8 * 4) < *(int *)(lVar7 + lVar13 * 4)) {
                          iVar19 = iVar8 + 1;
                          iVar8 = iVar18;
                        }
                        iVar18 = iVar8;
                      } while (iVar19 < iVar18);
                    }
                    if (iVar19 == iVar18) {
                      iVar18 = *(int *)(lVar7 + lVar13 * 4);
                      iVar8 = *(int *)(lVar21 + (longlong)iVar19 * 4);
                      if (((iVar18 <= iVar8) && (iVar8 <= iVar18)) && (iVar19 != -1))
                      goto LAB_14387261b;
                    }
                  }
                  iVar14 = iVar14 + -1;
                  lVar13 = lVar13 + -1;
                } while (-1 < lVar13);
              }
            }
            iVar20 = iVar20 + -1;
            local_88 = local_88 + -1;
            lVar15 = lVar15 + -0x40;
            uVar5 = local_res20;
          } while (-1 < local_88);
        }
      }
      local_res20 = uVar5 + 1;
      uVar17 = (ulonglong)local_res20;
      local_80 = local_80 + 0xd0;
    } while ((int)local_res20 < *(int *)(param_1 + 0x98));
  }
  uVar3 = FUN_143703a50();
  local_60 = 0;
  if (-1 < (int)local_5c) {
    FUN_143702e10(uVar3,local_68,0x10,local_5c & 0x3fffffff);
  }
  local_68 = (longlong *)0x0;
  local_5c = 0x80000000;
  if (local_70 != (LPVOID)0x0) {
    FUN_14370d750(local_70,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143872740 FUN_143872740 body=52 status=ok
// SIG undefined FUN_143872740(void)

ulonglong FUN_143872740(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xa0);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0xa8) * 10;
  while( true ) {
    if (plVar1 == plVar2) {
      return (ulonglong)plVar1 & 0xffffffffffffff00;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 10;
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}



// FUNCTION 143872780 FUN_143872780 body=73 status=ok
// SIG undefined FUN_143872780(void)

undefined8 FUN_143872780(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0xc4) != '\0') {
    return 1;
  }
  if (0 < *(int *)(param_1 + 0x1d4)) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = (longlong)*(int *)(param_1 + 0x98) * 0xd0 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0xd0) {
      if (*(int *)(lVar1 + 0xc0) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1438727d0 FUN_1438727d0 body=1458 status=ok
// SIG undefined FUN_1438727d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438727d0(longlong param_1,int param_2,char param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  LPVOID pvVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  int *piVar20;
  int iVar21;
  undefined4 *puVar22;
  longlong lVar23;
  float *pfVar24;
  longlong *plVar25;
  float *pfVar26;
  float *pfVar27;
  undefined8 *puVar28;
  float *pfVar29;
  int *piVar30;
  bool bVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  int local_res10 [2];
  char local_res18;
  int *local_res20;
  int *local_148;
  int local_140;
  uint local_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar33 = param_4[1];
  fVar34 = param_4[2];
  fVar35 = param_4[3];
  pfVar26 = (float *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0xb0));
  local_res20 = (int *)((longlong)(int)pfVar26[1] * 0xd0 + *(longlong *)(param_1 + 0x90));
  puVar28 = (undefined8 *)((longlong)(int)*pfVar26 * 0x50 + *(longlong *)(param_1 + 0xa0));
  pfVar26[0xc] = *param_4;
  pfVar26[0xd] = fVar33;
  pfVar26[0xe] = fVar34;
  pfVar26[0xf] = fVar35;
  fVar33 = param_4[5];
  fVar34 = param_4[6];
  fVar35 = param_4[7];
  pfVar26[0x10] = param_4[4];
  pfVar26[0x11] = fVar33;
  pfVar26[0x12] = fVar34;
  pfVar26[0x13] = fVar35;
  if (*(char *)(pfVar26 + 2) == '\0') {
    local_118._8_4_ = uRam00000001467f08d8;
    local_118._0_8_ = CONCAT44(uRam00000001467f08d4,DAT_1467f08d0);
    local_118._12_4_ = uRam00000001467f08dc;
    local_108._0_8_ = CONCAT44(uRam00000001467f08d4,DAT_1467f08d0) ^ 0x8000000080000000;
    local_108._8_4_ = uRam00000001467f08d8 ^ 0x80000000;
    local_108._12_4_ = uRam00000001467f08dc ^ 0x80000000;
  }
  else {
    local_118 = *(undefined1 (*) [16])(pfVar26 + 4);
    local_108 = *(undefined1 (*) [16])(pfVar26 + 8);
  }
  fVar33 = fStack_124;
  fVar34 = fStack_120;
  fVar35 = fStack_11c;
  local_res10[0] = param_2;
  local_res18 = param_3;
  if (param_3 != '\0') {
    FUN_143871f00(param_1,pfVar26,param_1 + 0x130,param_4,&local_138);
    auVar5._4_4_ = fStack_134;
    auVar5._0_4_ = local_138;
    auVar5._8_4_ = fStack_130;
    auVar5._12_4_ = fStack_12c;
    auVar6._4_4_ = fStack_124;
    auVar6._0_4_ = local_128;
    auVar6._8_4_ = fStack_120;
    auVar6._12_4_ = fStack_11c;
    local_118 = minps(local_118,auVar5);
    local_108 = maxps(local_108,auVar6);
    fVar33 = fStack_124;
    fVar34 = fStack_120;
    fVar35 = fStack_11c;
  }
  fVar14 = local_128;
  fVar13 = fStack_12c;
  fVar12 = fStack_130;
  fVar11 = fStack_134;
  fVar10 = local_138;
  if (*(int *)(param_1 + 0x1d4) < 1) {
    uVar32 = 0x3f800000;
  }
  else {
    pfVar29 = *(float **)(param_1 + 0x1e0);
    fStack_130 = 0.0;
    fStack_12c = 0.0;
    local_128 = 1.8367e-40;
    local_138 = 6305.3203;
    fStack_134 = 1.4013e-45;
    bVar31 = pfVar29 == (float *)0x0;
    if (bVar31) {
      pfVar27 = &local_138;
      FUN_14370c030(&local_138);
      pfVar29 = &local_138;
      pfVar24 = pfVar26;
    }
    else {
      FUN_14370c030(pfVar29);
      pfVar24 = pfVar29;
      pfVar27 = pfVar26;
    }
    if ((bVar31) && (pfVar27 != (float *)0x0)) {
      FUN_14370c150(pfVar27);
    }
    if ((!bVar31) && (pfVar24 != (float *)0x0)) {
      FUN_14370c150(pfVar24);
    }
    lVar18 = *(longlong *)pfVar29;
    uVar19 = *puVar28;
    if (*(char *)(pfVar26 + 2) == '\0') {
      uVar32 = (**(code **)(lVar18 + 0x18))(pfVar29,uVar19,local_118,param_1 + 0x130);
    }
    else if (local_res18 == '\0') {
      uVar32 = (**(code **)(lVar18 + 0x20))(pfVar29);
    }
    else {
      uVar32 = (**(code **)(lVar18 + 0x28))
                         (pfVar29,uVar19,local_118,param_1 + 0x130,pfVar26 + 0xc,param_4);
    }
    local_138 = 6305.289;
    fStack_134 = 1.4013e-45;
    FUN_14370c000(&local_138);
  }
  uStack_d0 = 0;
  local_e8 = 0;
  local_e4 = 0xffffffff;
  local_c8 = 0;
  local_e0 = *puVar28;
  local_d8 = *(undefined8 *)(param_1 + 0x1d8);
  local_b8 = local_118;
  local_a8 = local_108;
  pvVar16 = TlsGetValue(DAT_146b8198c);
  if (pvVar16 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar16,"TtqueryAabb");
  }
  local_148 = (int *)0x0;
  local_140 = 0;
  local_13c = 0x80000000;
  FUN_14370c310(&PTR_vftable_1467f0638,&local_148,0x20);
  piVar9 = local_res20;
  (**(code **)(**(longlong **)((longlong)local_res20 + 0x10) + 0x40))
            (*(longlong **)((longlong)local_res20 + 0x10),&local_e8,&local_148);
  pvVar16 = TlsGetValue(DAT_146b8198c);
  if (pvVar16 != (LPVOID)0x0) {
    FUN_14370d750(pvVar16,&DAT_145b8eda0);
  }
  uVar19 = *(undefined8 *)((longlong)piVar9 + 8);
  plVar25 = (longlong *)((longlong)piVar9 + 0xb8);
  local_f8 = uVar19;
  uVar17 = FUN_143703a50();
  if (*(uint *)((longlong)piVar9 + 0xc0) == (*(uint *)((longlong)piVar9 + 0xc4) & 0x3fffffff)) {
    FUN_14370c460(uVar17,plVar25,0x40);
  }
  iVar8 = local_res10[0];
  lVar18 = (longlong)*(int *)((longlong)piVar9 + 0xc0) * 0x40 + *plVar25;
  if (lVar18 != 0) {
    *(undefined8 *)(lVar18 + 0x30) = 0;
    *(undefined4 *)(lVar18 + 0x38) = 0;
    *(undefined4 *)(lVar18 + 0x3c) = 0x80000000;
  }
  puVar22 = (undefined4 *)((longlong)*(int *)((longlong)piVar9 + 0xc0) * 0x40 + *plVar25);
  *(int *)((longlong)piVar9 + 0xc0) = *(int *)((longlong)piVar9 + 0xc0) + 1;
  *puVar22 = uVar32;
  puVar22[4] = local_118._0_4_;
  puVar22[5] = local_118._4_4_;
  puVar22[6] = local_118._8_4_;
  puVar22[7] = local_118._12_4_;
  *(undefined8 *)(puVar22 + 8) = local_108._0_8_;
  *(undefined8 *)(puVar22 + 10) = local_108._8_8_;
  local_res20 = local_148 + local_140;
  if (local_148 != local_res20) {
    piVar30 = local_148;
    do {
      iVar1 = *piVar30;
      lVar18 = (longlong)iVar1;
      local_138 = _DAT_1467f06e0;
      fStack_134 = fRam00000001467f06e4;
      fStack_130 = fRam00000001467f06e8;
      fStack_12c = DAT_1467f06ec;
      local_res10[0] = iVar1;
      uVar15 = FUN_143852320(uVar19,local_res10,&local_138,&local_98);
      if (*(char *)(pfVar26 + 2) == '\0') {
LAB_143872bf1:
        bVar31 = false;
      }
      else {
        auVar4._4_4_ = -(uint)(fStack_94 <= pfVar26[9] && pfVar26[5] <= fStack_84);
        auVar4._0_4_ = -(uint)(local_98 <= pfVar26[8] && pfVar26[4] <= local_88);
        auVar4._8_4_ = -(uint)(fStack_90 <= pfVar26[10] && pfVar26[6] <= fStack_80);
        auVar4._12_4_ = -(uint)(fStack_8c <= pfVar26[0xb] && pfVar26[7] <= fStack_7c);
        uVar15 = movmskps(uVar15,auVar4);
        uVar15 = uVar15 & 7;
        if ((char)uVar15 != '\a') goto LAB_143872bf1;
        bVar31 = true;
      }
      if ((local_res18 == '\0') ||
         (auVar3._4_4_ = -(uint)(fVar11 <= fStack_84 && fStack_94 <= fVar33),
         auVar3._0_4_ = -(uint)(fVar10 <= local_88 && local_98 <= fVar14),
         auVar3._8_4_ = -(uint)(fVar12 <= fStack_80 && fStack_90 <= fVar34),
         auVar3._12_4_ = -(uint)(fVar13 <= fStack_7c && fStack_8c <= fVar35),
         uVar32 = movmskps(uVar15,auVar3), ((byte)uVar32 & 7) != 7)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      uVar19 = FUN_143703a50();
      if (puVar22[0xe] == (puVar22[0xf] & 0x3fffffff)) {
        FUN_14370c460(uVar19,puVar22 + 0xc,4);
      }
      *(int *)(*(longlong *)(puVar22 + 0xc) + (longlong)(int)puVar22[0xe] * 4) = iVar1;
      puVar22[0xe] = puVar22[0xe] + 1;
      if (bVar31) {
        if (!bVar7) {
          lVar2 = *(longlong *)((longlong)piVar9 + 0xa8);
          iVar21 = 0;
          lVar23 = 0;
          iVar1 = *(int *)(lVar2 + 8 + lVar18 * 0x10);
          if (0 < iVar1) {
            piVar20 = *(int **)(lVar2 + lVar18 * 0x10);
            do {
              if (*piVar20 == iVar8) goto LAB_143872c9a;
              iVar21 = iVar21 + 1;
              lVar23 = lVar23 + 1;
              piVar20 = piVar20 + 1;
            } while (lVar23 < iVar1);
          }
          iVar21 = -1;
          lVar23 = -1;
LAB_143872c9a:
          piVar20 = (int *)(lVar2 + 8 + lVar18 * 0x10);
          *piVar20 = *piVar20 + -1;
          iVar1 = *(int *)(lVar2 + 8 + lVar18 * 0x10);
          if (iVar1 != iVar21) {
            lVar18 = *(longlong *)(lVar2 + lVar18 * 0x10);
            *(undefined4 *)(lVar18 + lVar23 * 4) = *(undefined4 *)(lVar18 + (longlong)iVar1 * 4);
          }
        }
      }
      else if (bVar7) {
        plVar25 = (longlong *)(lVar18 * 0x10 + *(longlong *)((longlong)piVar9 + 0xa8));
        uVar19 = FUN_143703a50();
        if (*(uint *)(plVar25 + 1) == (*(uint *)((longlong)plVar25 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar19,plVar25,4);
        }
        *(int *)(*plVar25 + (longlong)(int)plVar25[1] * 4) = iVar8;
        *(int *)(plVar25 + 1) = (int)plVar25[1] + 1;
      }
      piVar30 = piVar30 + 1;
      uVar19 = local_f8;
    } while (piVar30 != local_res20);
  }
  *(char *)(pfVar26 + 2) = local_res18;
  pfVar26[4] = fVar10;
  pfVar26[5] = fVar11;
  pfVar26[6] = fVar12;
  pfVar26[7] = fVar13;
  pfVar26[8] = fVar14;
  pfVar26[9] = fVar33;
  pfVar26[10] = fVar34;
  pfVar26[0xb] = fVar35;
  local_140 = 0;
  if (-1 < (int)local_13c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_148,4,local_13c & 0x3fffffff);
  }
  return;
}



// FUNCTION 143872d90 FUN_143872d90 body=35 status=ok
// SIG undefined FUN_143872d90(void)

void FUN_143872d90(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0xb0)) = param_3;
  *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 4 + (longlong)param_2 * 0x60) = param_4;
  return;
}



// FUNCTION 143872dc0 FUN_143872dc0 body=94 status=ok
// SIG undefined FUN_143872dc0(void)

void FUN_143872dc0(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  longlong lVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar5;
  
  iVar11 = (int)param_1[1] + -1;
  if (param_2 == iVar11) {
    *(int *)(param_1 + 1) = iVar11;
    return;
  }
  lVar6 = *param_1;
  pfVar7 = *(float **)(lVar6 + 8 + (longlong)iVar11 * 0x10);
  fVar3 = **(float **)(lVar6 + 8 + (longlong)param_2 * 0x10);
  fVar4 = *pfVar7;
  fVar5 = *pfVar7;
  puVar1 = (undefined4 *)(lVar6 + (longlong)iVar11 * 0x10);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (undefined4 *)(lVar6 + (longlong)param_2 * 0x10);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (fVar5 <= fVar3 && fVar3 != fVar4) {
    FUN_143873c50();
    return;
  }
  FUN_143871520(param_1,param_2);
  return;
}



// FUNCTION 143872e20 FUN_143872e20 body=588 status=ok
// SIG undefined FUN_143872e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143872e20(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  int local_res10 [2];
  int *local_c8;
  int local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar14 = (longlong)param_2 * 0x60;
  iVar1 = *(int *)(lVar14 + *(longlong *)(param_1 + 0xb0));
  lVar10 = *(longlong *)(param_1 + 0xa0);
  if (*(longlong *)(lVar14 + 0x50 + *(longlong *)(param_1 + 0xb0)) != 0) {
    FUN_14370c150();
  }
  iVar3 = *(int *)(param_1 + 0xb8) + -1;
  *(int *)(param_1 + 0xb8) = iVar3;
  if (iVar3 != param_2) {
    puVar8 = (undefined8 *)(lVar14 + *(longlong *)(param_1 + 0xb0));
    lVar7 = 0xc;
    lVar12 = ((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 0xb0)) - (longlong)puVar8;
    do {
      *puVar8 = *(undefined8 *)(lVar12 + (longlong)puVar8);
      puVar8 = puVar8 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  iVar3 = *(int *)(param_1 + 0xb8);
  if ((param_2 < iVar3) &&
     (lVar14 = *(longlong *)(param_1 + 0xb0) + lVar14, *(char *)(lVar14 + 8) != '\0')) {
    local_78 = *(undefined4 *)(lVar14 + 0x10);
    uStack_74 = *(undefined4 *)(lVar14 + 0x14);
    uStack_70 = *(undefined4 *)(lVar14 + 0x18);
    uStack_6c = *(undefined4 *)(lVar14 + 0x1c);
    local_68 = *(undefined4 *)(lVar14 + 0x20);
    uStack_64 = *(undefined4 *)(lVar14 + 0x24);
    uStack_60 = *(undefined4 *)(lVar14 + 0x28);
    uStack_5c = *(undefined4 *)(lVar14 + 0x2c);
    local_a4 = 0xffffffff;
    local_bc = 0x80000000;
    lVar7 = (longlong)*(int *)(lVar14 + 4) * 0xd0 + *(longlong *)(param_1 + 0x90);
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_a0 = *(undefined8 *)((longlong)iVar1 * 0x50 + lVar10);
    local_98 = *(undefined8 *)(param_1 + 0x1d8);
    uVar16 = 0;
    local_c8 = (int *)0x0;
    local_c0 = 0;
    (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x40))
              (*(longlong **)(lVar7 + 0x10),&local_a8,&local_c8);
    uVar5 = (ulonglong)((longlong)(local_c8 + local_c0) + (3 - (longlong)local_c8)) >> 2;
    if (local_c8 + local_c0 < local_c8) {
      uVar5 = uVar16;
    }
    piVar15 = local_c8;
    if (uVar5 != 0) {
      do {
        local_res10[0] = *piVar15;
        lVar10 = (longlong)local_res10[0];
        local_b8 = _DAT_1467f06e0;
        uStack_b4 = uRam00000001467f06e4;
        uStack_b0 = uRam00000001467f06e8;
        uStack_ac = DAT_1467f06ec;
        uVar4 = FUN_143852320(*(undefined8 *)(lVar7 + 8),local_res10,&local_b8,&local_58);
        auVar2._4_4_ = -(uint)(*(float *)(lVar14 + 0x14) <= fStack_44 &&
                              fStack_54 <= *(float *)(lVar14 + 0x24));
        auVar2._0_4_ = -(uint)(*(float *)(lVar14 + 0x10) <= local_48 &&
                              local_58 <= *(float *)(lVar14 + 0x20));
        auVar2._8_4_ = -(uint)(*(float *)(lVar14 + 0x18) <= fStack_40 &&
                              fStack_50 <= *(float *)(lVar14 + 0x28));
        auVar2._12_4_ =
             -(uint)(*(float *)(lVar14 + 0x1c) <= fStack_3c &&
                    fStack_4c <= *(float *)(lVar14 + 0x2c));
        uVar4 = movmskps(uVar4,auVar2);
        if (((byte)uVar4 & 7) == 7) {
          uVar9 = 0;
          plVar6 = (longlong *)(lVar10 * 0x10 + *(longlong *)(lVar7 + 0xa8));
          uVar13 = uVar9;
          if (0 < (int)plVar6[1]) {
            do {
              if (*(int *)(uVar9 + *plVar6) == iVar3) {
                *(int *)(uVar9 + *plVar6) = param_2;
              }
              uVar11 = (int)uVar13 + 1;
              uVar9 = uVar9 + 4;
              uVar13 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)plVar6[1]);
          }
        }
        uVar16 = uVar16 + 1;
        piVar15 = piVar15 + 1;
      } while (uVar16 != uVar5);
    }
    local_c0 = 0;
    if (-1 < (int)local_bc) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_c8,4,local_bc & 0x3fffffff);
    }
  }
  return;
}



// FUNCTION 143873070 FUN_143873070 body=954 status=ok
// SIG undefined FUN_143873070(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143873070(longlong param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  uint *puVar13;
  undefined ***pppuVar14;
  float *pfVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  uint local_res10 [2];
  longlong local_res18;
  float *local_res20;
  uint *local_f8;
  int local_f0;
  uint local_ec;
  undefined **local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  local_res10[0] = 0;
  pppuVar14 = *(undefined ****)(param_1 + 0x1e0);
  piVar17 = (int *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0xb0));
  local_res18 = (longlong)piVar17[1] * 0xd0 + *(longlong *)(param_1 + 0x90);
  puVar16 = (undefined8 *)((longlong)*piVar17 * 0x50 + *(longlong *)(param_1 + 0xa0));
  local_e8 = hkaiDefaultSilhouettePriorityController::vftable;
  local_e0 = 0;
  local_d8 = 0x1ffff;
  bVar19 = pppuVar14 == (undefined ***)0x0;
  if (bVar19) {
    pppuVar14 = &local_e8;
    FUN_14370c030(&local_e8);
  }
  else {
    FUN_14370c030(pppuVar14);
  }
  if ((bVar19) && (pppuVar14 != (undefined ***)0x0)) {
    FUN_14370c150(pppuVar14);
  }
  if ((!bVar19) && (pppuVar14 != (undefined ***)0x0)) {
    FUN_14370c150(pppuVar14);
  }
  if ((char)piVar17[2] != '\0') {
    local_b0 = *puVar16;
    pfVar15 = (float *)(piVar17 + 4);
    local_88 = *pfVar15;
    iStack_84 = piVar17[5];
    iStack_80 = piVar17[6];
    iStack_7c = piVar17[7];
    local_78 = piVar17[8];
    iStack_74 = piVar17[9];
    iStack_70 = piVar17[10];
    iStack_6c = piVar17[0xb];
    local_a8 = *(undefined8 *)(param_1 + 0x1d8);
    local_b8 = 0;
    local_b4 = 0xffffffff;
    local_a0 = 0;
    local_98 = 0;
    local_res20 = pfVar15;
    pvVar6 = TlsGetValue(DAT_146b8198c);
    if (pvVar6 != (LPVOID)0x0) {
      FUN_14370d5c0(pvVar6,"TtqueryAabb");
    }
    local_f8 = (uint *)0x0;
    local_f0 = 0;
    local_ec = 0x80000000;
    FUN_14370c310(&PTR_vftable_1467f0638,&local_f8,0x20);
    lVar5 = local_res18;
    (**(code **)(**(longlong **)(local_res18 + 0x10) + 0x40))
              (*(longlong **)(local_res18 + 0x10),&local_b8,&local_f8);
    pvVar6 = TlsGetValue(DAT_146b8198c);
    if (pvVar6 != (LPVOID)0x0) {
      FUN_14370d750(pvVar6,&DAT_145b8eda0);
    }
    plVar12 = (longlong *)(lVar5 + 0xb8);
    uVar7 = FUN_143703a50();
    if (*(uint *)(lVar5 + 0xc0) == (*(uint *)(lVar5 + 0xc4) & 0x3fffffff)) {
      FUN_14370c460(uVar7,plVar12,0x40);
    }
    lVar8 = (longlong)*(int *)(lVar5 + 0xc0) * 0x40 + *plVar12;
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x30) = 0;
      *(undefined4 *)(lVar8 + 0x38) = 0;
      *(undefined4 *)(lVar8 + 0x3c) = 0x80000000;
    }
    puVar18 = (undefined4 *)((longlong)*(int *)(lVar5 + 0xc0) * 0x40 + *plVar12);
    *(int *)(lVar5 + 0xc0) = *(int *)(lVar5 + 0xc0) + 1;
    if (*(int *)(param_1 + 0x1d4) < 1) {
      uVar20 = 0x3f800000;
    }
    else {
      uVar20 = (*(code *)(*pppuVar14)[4])(pppuVar14,*puVar16,pfVar15,param_1 + 0x130);
    }
    lVar5 = local_res18;
    *puVar18 = uVar20;
    iVar2 = piVar17[5];
    iVar9 = piVar17[6];
    iVar4 = piVar17[7];
    puVar18[4] = *pfVar15;
    puVar18[5] = iVar2;
    puVar18[6] = iVar9;
    puVar18[7] = iVar4;
    uVar7 = *(undefined8 *)(piVar17 + 10);
    *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(piVar17 + 8);
    *(undefined8 *)(puVar18 + 10) = uVar7;
    puVar1 = local_f8 + local_f0;
    for (puVar13 = local_f8; puVar13 != puVar1; puVar13 = puVar13 + 1) {
      uVar11 = *puVar13 & 0x3fffff;
      local_res10[0] = uVar11;
      local_c8 = _DAT_1467f06e0;
      uStack_c4 = uRam00000001467f06e4;
      uStack_c0 = uRam00000001467f06e8;
      uStack_bc = DAT_1467f06ec;
      uVar20 = FUN_143852320(*(undefined8 *)(lVar5 + 8),local_res10,&local_c8,&local_68);
      auVar3._4_4_ = -(uint)(pfVar15[1] <= fStack_54 && fStack_64 <= pfVar15[5]);
      auVar3._0_4_ = -(uint)(*pfVar15 <= local_58 && local_68 <= pfVar15[4]);
      auVar3._8_4_ = -(uint)(pfVar15[2] <= fStack_50 && fStack_60 <= pfVar15[6]);
      auVar3._12_4_ = -(uint)(pfVar15[3] <= fStack_4c && fStack_5c <= pfVar15[7]);
      uVar20 = movmskps(uVar20,auVar3);
      if (((byte)uVar20 & 7) == 7) {
        lVar8 = *(longlong *)(lVar5 + 0xa8);
        iVar9 = 0;
        lVar10 = 0;
        iVar2 = *(int *)(lVar8 + 8 + (ulonglong)uVar11 * 0x10);
        if (0 < iVar2) {
          piVar17 = *(int **)(lVar8 + (ulonglong)uVar11 * 0x10);
          do {
            if (*piVar17 == param_2) {
              if (lVar10 != -1) {
                plVar12 = (longlong *)((ulonglong)uVar11 * 0x10 + lVar8);
                *(int *)(plVar12 + 1) = (int)plVar12[1] + -1;
                if ((int)plVar12[1] != iVar9) {
                  *(undefined4 *)(*plVar12 + lVar10 * 4) =
                       *(undefined4 *)(*plVar12 + (longlong)(int)plVar12[1] * 4);
                }
                uVar7 = FUN_143703a50();
                if (puVar18[0xe] == (puVar18[0xf] & 0x3fffffff)) {
                  FUN_14370c460(uVar7,puVar18 + 0xc,4);
                }
                *(uint *)(*(longlong *)(puVar18 + 0xc) + (longlong)(int)puVar18[0xe] * 4) = uVar11;
                puVar18[0xe] = puVar18[0xe] + 1;
                pfVar15 = local_res20;
              }
              break;
            }
            iVar9 = iVar9 + 1;
            lVar10 = lVar10 + 1;
            piVar17 = piVar17 + 1;
          } while (lVar10 < iVar2);
        }
      }
    }
    local_f0 = 0;
    if (-1 < (int)local_ec) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_f8,4,local_ec & 0x3fffffff);
    }
  }
  local_e8 = hkaiSilhouettePriorityController::vftable;
  FUN_14370c000(&local_e8);
  return;
}



// FUNCTION 143873430 FUN_143873430 body=244 status=ok
// SIG undefined FUN_143873430(void)

void FUN_143873430(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong local_res8;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    piVar2 = *(int **)(param_1 + 0x90);
    while (*piVar2 != *param_2) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 0x34;
      if (*(int *)(param_1 + 0x98) <= iVar4) {
        return;
      }
    }
    local_res8 = param_1;
    FUN_14386ff60(param_1 + 0x20,iVar4,&local_res8);
    FUN_14382c350(*(longlong *)(param_1 + 0x90) + (longlong)iVar4 * 0xd0);
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
    if (*(int *)(param_1 + 0x98) != iVar4) {
      lVar3 = 0x1a;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar4 * 0xd0);
      lVar5 = ((longlong)*(int *)(param_1 + 0x98) * 0xd0 + *(longlong *)(param_1 + 0x90)) -
              (longlong)puVar1;
      do {
        *puVar1 = *(undefined8 *)(lVar5 + (longlong)puVar1);
        puVar1 = puVar1 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    FUN_143870ce0(param_1 + 0xf8,iVar4);
    FUN_143870ce0(param_1 + 0x110,iVar4);
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}



// FUNCTION 143873530 FUN_143873530 body=244 status=ok
// SIG undefined FUN_143873530(void)

void FUN_143873530(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong local_res8;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    plVar1 = *(longlong **)(param_1 + 0xa0);
    while (*plVar1 != param_2) {
      iVar4 = iVar4 + 1;
      plVar1 = plVar1 + 10;
      if (*(int *)(param_1 + 0xa8) <= iVar4) {
        return;
      }
    }
    local_res8 = param_1;
    FUN_143870120(param_1 + 0x20,iVar4,&local_res8);
    if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar4 * 0x50) != 0) {
      FUN_14370c150();
    }
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    if (*(int *)(param_1 + 0xa8) != iVar4) {
      lVar3 = 10;
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar4 * 0x50);
      lVar5 = ((longlong)*(int *)(param_1 + 0xa8) * 0x50 + *(longlong *)(param_1 + 0xa0)) -
              (longlong)puVar2;
      do {
        *puVar2 = *(undefined8 *)(lVar5 + (longlong)puVar2);
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    FUN_143870ce0(param_1 + 200,iVar4);
    FUN_143870ce0(param_1 + 0xe0,iVar4);
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}



// FUNCTION 143873630 FUN_143873630 body=12 status=ok
// SIG undefined FUN_143873630(void)

void FUN_143873630(longlong param_1)

{
  FUN_14382da70(param_1 + 0x130);
  return;
}



// FUNCTION 143873640 FUN_143873640 body=650 status=ok
// SIG undefined FUN_143873640(void)

void FUN_143873640(longlong param_1,longlong param_2,undefined ***param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined ***local_res8;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  iVar1 = *(int *)(param_2 + 0x17c);
  uVar10 = 0;
  iVar7 = -1;
  if (0 < *(int *)(param_1 + 0x80)) {
    piVar5 = *(int **)(param_1 + 0x78);
    uVar13 = uVar10;
    uVar14 = uVar10;
    do {
      iVar7 = (int)uVar14;
      if (*piVar5 == iVar1) break;
      uVar14 = (ulonglong)((int)uVar14 + 1);
      uVar13 = uVar13 + 1;
      piVar5 = piVar5 + 0x34;
      iVar7 = -1;
    } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x80));
  }
  local_res8 = *(undefined ****)(param_1 + 0x1c8);
  local_50 = 0;
  lVar2 = *(longlong *)(param_1 + 0x78);
  local_48 = 0x1ffff;
  local_58 = hkaiDefaultSilhouettePriorityController::vftable;
  bVar15 = local_res8 == (undefined ***)0x0;
  if (bVar15) {
    pppuVar11 = &local_58;
    FUN_14370c030(&local_58);
    local_res8 = &local_58;
    pppuVar9 = param_3;
  }
  else {
    FUN_14370c030(local_res8);
    pppuVar9 = local_res8;
    pppuVar11 = param_3;
  }
  if ((bVar15) && (pppuVar11 != (undefined ***)0x0)) {
    FUN_14370c150(pppuVar11);
  }
  if ((!bVar15) && (pppuVar9 != (undefined ***)0x0)) {
    FUN_14370c150(pppuVar9);
  }
  plVar12 = (longlong *)
            ((longlong)(int)*(uint *)param_3 * 0x10 +
            *(longlong *)((longlong)iVar7 * 0xd0 + lVar2 + 0xa8));
  iVar7 = (int)plVar12[1];
  uVar6 = FUN_143703a50();
  uVar8 = *(uint *)((longlong)param_4 + 0x1c) & 0x3fffffff;
  if ((int)uVar8 < iVar7) {
    iVar3 = uVar8 * 2;
    if (iVar7 < iVar3) {
      iVar7 = iVar3;
    }
    FUN_14370c310(uVar6,param_4 + 2,iVar7,8);
  }
  uVar13 = uVar10;
  if (0 < (int)plVar12[1]) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x98);
      iVar7 = *(int *)(uVar13 + *plVar12);
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_4 + 3) == (*(uint *)((longlong)param_4 + 0x1c) & 0x3fffffff)) {
        FUN_14370c460(uVar6,param_4 + 2,8);
      }
      uVar8 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar8;
      *(longlong *)(param_4[2] + (longlong)(int)param_4[3] * 8) =
           lVar2 + 0x30 + (longlong)iVar7 * 0x60;
      *(int *)(param_4 + 3) = (int)param_4[3] + 1;
      uVar13 = uVar13 + 4;
    } while ((int)uVar8 < (int)plVar12[1]);
  }
  uVar4 = FUN_1438738d0(local_res8,param_4 + 2);
  uVar8 = *(uint *)param_3;
  *(undefined4 *)(param_4 + 4) = uVar4;
  *(uint *)(param_4 + 1) = iVar1 << 0x16 | uVar8;
  *param_4 = param_2;
  lVar2 = *(longlong *)(param_1 + 0x120);
  param_4[6] = *(longlong *)(param_1 + 0x118);
  param_4[7] = lVar2;
  *(undefined4 *)(param_4 + 8) =
       *(undefined4 *)(param_1 + 0x128 + (longlong)*(int *)(param_2 + 0x180) * 4);
  *(float *)((longlong)param_4 + 0x44) =
       *(float *)(*(longlong *)(param_2 + 0x68) + 0xb0) + *(float *)(param_1 + 0x1a8);
  *(undefined4 *)(param_4 + 9) = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + 0xb0);
  local_58 = hkaiSilhouettePriorityController::vftable;
  *(byte *)((longlong)param_4 + 0x4c) = *(byte *)(*(longlong *)(param_2 + 0x68) + 0x80) & 1;
  FUN_14370c000(&local_58);
  return;
}



// FUNCTION 1438738d0 FUN_1438738d0 body=892 status=ok
// SIG undefined FUN_1438738d0(void)

int FUN_1438738d0(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong local_48;
  int local_40;
  uint local_3c;
  longlong local_38;
  int local_30;
  uint local_2c;
  longlong local_28;
  int local_20;
  uint local_1c;
  
  (**(code **)(*param_1 + 0x30))();
  if ((int)param_2[1] < 0xe) {
    return -1;
  }
  uVar16 = 0;
  local_1c = 0x80000000;
  local_28 = 0;
  local_20 = 0;
  FUN_14370c310(&PTR_vftable_1467f0638,&local_28,0xe,4);
  uVar13 = *(uint *)(param_2 + 1);
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  if (0 < (int)uVar13) {
    uVar9 = (ulonglong)uVar13;
    if ((int)uVar13 < 0) {
      uVar9 = uVar16;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_48,uVar9,8);
  }
  uVar13 = *(uint *)(param_2 + 1);
  local_38 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  if (0 < (int)uVar13) {
    uVar9 = (ulonglong)uVar13;
    if ((int)uVar13 < 0) {
      uVar9 = uVar16;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_38,uVar9,8);
  }
  lVar10 = local_48;
  bVar1 = false;
  uVar9 = uVar16;
  uVar14 = uVar16;
  if (0 < (int)param_2[1]) {
    do {
      plVar12 = (longlong *)(*param_2 + uVar9);
      iVar6 = *(int *)(*(longlong *)(*plVar12 + 0x20) + 0x24);
      if (iVar6 == -1) {
        *(longlong *)(local_48 + (longlong)local_40 * 8) = *plVar12;
        local_40 = local_40 + 1;
LAB_143873a2e:
        if ((!bVar1) && (((int)param_2[1] - (int)uVar14) + -1 <= 0xe - local_20))
        goto LAB_143873a4f;
      }
      else {
        lVar15 = (longlong)local_20;
        uVar2 = uVar16;
        uVar4 = uVar16;
        if (0 < lVar15) {
          do {
            if (*(int *)(local_28 + uVar2 * 4) == iVar6) {
              if ((int)uVar4 != -1) {
                lVar15 = *plVar12;
                goto LAB_143873a28;
              }
              break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
            uVar2 = uVar2 + 1;
          } while ((longlong)uVar2 < lVar15);
        }
        if (local_20 < 0xe) {
          *(int *)(local_28 + lVar15 * 4) = iVar6;
          local_20 = local_20 + 1;
          lVar15 = *(longlong *)(*param_2 + uVar9);
LAB_143873a28:
          *(longlong *)(local_38 + (longlong)local_30 * 8) = lVar15;
          local_30 = local_30 + 1;
          goto LAB_143873a2e;
        }
        bVar1 = true;
        *(longlong *)(local_48 + (longlong)local_40 * 8) = *plVar12;
        local_40 = local_40 + 1;
      }
      iVar6 = local_40;
      uVar13 = (int)uVar14 + 1;
      uVar9 = uVar9 + 8;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)param_2[1]);
    if (bVar1) {
      lVar15 = (longlong)local_40;
      *(undefined4 *)(param_2 + 1) = 0;
      uVar3 = FUN_143703a50();
      uVar13 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
      iVar7 = (int)param_2[1] + iVar6;
      if (((int)uVar13 < iVar7) && ((int)uVar13 < iVar7)) {
        iVar8 = iVar7;
        if (iVar7 < (int)(uVar13 * 2)) {
          iVar8 = uVar13 * 2;
        }
        FUN_14370c310(uVar3,param_2,iVar8,8);
      }
      iVar8 = local_30;
      lVar11 = local_38;
      puVar5 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
      if (0 < iVar6) {
        lVar10 = lVar10 - (longlong)puVar5;
        do {
          *puVar5 = *(undefined8 *)(lVar10 + (longlong)puVar5);
          puVar5 = puVar5 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      lVar10 = (longlong)local_30;
      *(int *)(param_2 + 1) = iVar7;
      uVar3 = FUN_143703a50();
      uVar13 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
      iVar8 = (int)param_2[1] + iVar8;
      if (((int)uVar13 < iVar8) && ((int)uVar13 < iVar8)) {
        iVar6 = iVar8;
        if (iVar8 < (int)(uVar13 * 2)) {
          iVar6 = uVar13 * 2;
        }
        FUN_14370c310(uVar3,param_2,iVar6,8);
      }
      puVar5 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
      if (0 < lVar10) {
        lVar11 = lVar11 - (longlong)puVar5;
        do {
          *puVar5 = *(undefined8 *)(lVar11 + (longlong)puVar5);
          puVar5 = puVar5 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      *(int *)(param_2 + 1) = iVar8;
      iVar6 = local_40;
      goto LAB_143873a52;
    }
  }
LAB_143873a4f:
  iVar6 = -1;
LAB_143873a52:
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_38,8,local_2c & 0x3fffffff);
  }
  local_38 = 0;
  local_2c = 0x80000000;
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_48,8,local_3c & 0x3fffffff);
  }
  local_48 = 0;
  local_20 = 0;
  local_3c = 0x80000000;
  if (-1 < (int)local_1c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_28,4,local_1c & 0x3fffffff);
  }
  return iVar6;
}



// FUNCTION 143873c50 FUN_143873c50 body=106 status=ok
// SIG undefined FUN_143873c50(void)

int FUN_143873c50(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  while( true ) {
    iVar9 = param_2 + -1 >> 1;
    if (iVar9 < 0) {
      return param_2;
    }
    lVar4 = *param_1;
    lVar11 = (longlong)param_2;
    lVar10 = (longlong)iVar9;
    pfVar5 = *(float **)(lVar4 + 8 + lVar10 * 0x10);
    fVar3 = **(float **)(lVar4 + 8 + lVar11 * 0x10);
    if (*pfVar5 <= fVar3 && fVar3 != *pfVar5) break;
    puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x10);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x10);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x10);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    param_2 = iVar9;
  }
  return param_2;
}



// FUNCTION 143873cc0 FUN_143873cc0 body=958 status=ok
// SIG undefined FUN_143873cc0(void)

void FUN_143873cc0(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  LPVOID pvVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int *piVar16;
  undefined4 *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong local_res8;
  undefined8 local_res10;
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
  
  local_res10 = param_2;
  pvVar11 = TlsGetValue(DAT_146b8198c);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar11,"TtupdateOverlaps");
  }
  if (*(char *)(param_1 + 0xc4) != '\0') {
    thunk_FUN_143719c70(0x51b4fe02);
    if (*(char *)(param_1 + 0xc5) == '\0') {
      local_78 = *(float *)(param_1 + 0x1d0);
      fStack_74 = local_78;
      fStack_70 = local_78;
      fStack_6c = local_78;
    }
    else {
      local_78 = 0.0 - DAT_1467f06f0;
      fStack_74 = 0.0 - fRam00000001467f06f4;
      fStack_70 = 0.0 - fRam00000001467f06f8;
      fStack_6c = 0.0 - fRam00000001467f06fc;
    }
    fVar7 = fStack_6c;
    fVar6 = fStack_70;
    fVar5 = fStack_74;
    fVar4 = local_78;
    local_res8 = param_1;
    FUN_14386ec40(param_1 + 0x20,&local_res8);
    thunk_FUN_143719c70(0x9666fe1);
    iVar13 = 0;
    if (0 < *(int *)(param_1 + 0xb8)) {
      lVar15 = 0;
      do {
        piVar16 = (int *)(*(longlong *)(param_1 + 0xb0) + lVar15);
        iVar10 = piVar16[1];
        puVar17 = (undefined4 *)((longlong)iVar10 * 0xd0 + *(longlong *)(param_1 + 0x90));
        puVar14 = (undefined8 *)((longlong)*piVar16 * 0x50 + *(longlong *)(param_1 + 0xa0));
        if ((*(uint *)(*(longlong *)(param_1 + 0xf8) + ((longlong)iVar10 >> 5) * 4) >>
             ((byte)iVar10 & 0x1f) & 1) != 0) {
          local_78 = *(float *)(param_1 + 0x130);
          fStack_74 = *(float *)(param_1 + 0x134);
          fStack_70 = *(float *)(param_1 + 0x138);
          fStack_6c = *(float *)(param_1 + 0x13c);
          local_res8 = CONCAT44(local_res8._4_4_,*puVar17);
          cVar8 = (**(code **)(*(longlong *)*puVar14 + 0x50))
                            ((longlong *)*puVar14,&local_res8,puVar17 + 8,&local_78);
          if (((cVar8 != '\0') == ((char)piVar16[2] != '\0')) &&
             ((cVar8 == '\0' ||
              ((*(char *)(param_1 + 0xc5) == '\0' &&
               ((*(uint *)(*(longlong *)(param_1 + 200) + ((longlong)*piVar16 >> 5) * 4) >>
                 ((byte)*piVar16 & 0x1f) & 1) == 0)))))) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            FUN_14371a670(&local_68,puVar17 + 0x20,puVar14 + 6);
LAB_143873f70:
            FUN_1438727d0(param_1,iVar13,cVar8,&local_68);
          }
          else if ((cVar8 != '\0') &&
                  (((*(uint *)(*(longlong *)(param_1 + 0xe0) + ((longlong)*piVar16 >> 5) * 4) >>
                     ((byte)*piVar16 & 0x1f) & 1) != 0 ||
                   ((*(uint *)(*(longlong *)(param_1 + 0x110) + ((longlong)piVar16[1] >> 5) * 4) >>
                     ((byte)piVar16[1] & 0x1f) & 1) != 0)))) {
            uVar9 = FUN_14371a670(&local_68,puVar17 + 0x20,puVar14 + 6);
            fVar18 = (float)piVar16[0xc] * local_68;
            fVar19 = (float)piVar16[0xd] * fStack_64;
            fVar20 = (float)piVar16[0xe] * fStack_60;
            fVar21 = (float)piVar16[0xf] * fStack_5c;
            fVar22 = fVar20 + fVar18;
            fVar23 = fVar21 + fVar19;
            fVar18 = fVar18 + fVar20;
            fVar19 = fVar19 + fVar21;
            auVar1._4_4_ = -(uint)(ABS((float)piVar16[0xd] -
                                       (float)((uint)fStack_64 ^
                                              (uint)(fVar22 + fVar23) & 0x80000000)) <= fVar5);
            auVar1._0_4_ = -(uint)(ABS((float)piVar16[0xc] -
                                       (float)((uint)local_68 ^ (uint)(fVar23 + fVar22) & 0x80000000
                                              )) <= fVar4);
            auVar1._8_4_ = -(uint)(ABS((float)piVar16[0xe] -
                                       (float)((uint)fStack_60 ^
                                              (uint)(fVar19 + fVar18) & 0x80000000)) <= fVar6);
            auVar1._12_4_ =
                 -(uint)(ABS((float)piVar16[0xf] -
                             (float)((uint)fStack_5c ^ (uint)(fVar18 + fVar19) & 0x80000000)) <=
                        fVar7);
            iVar10 = movmskps(uVar9,auVar1);
            if (((iVar10 != 0xf) ||
                (auVar2._4_4_ = -(uint)(ABS((float)piVar16[0x11] - fStack_54) <= fVar5),
                auVar2._0_4_ = -(uint)(ABS((float)piVar16[0x10] - local_58) <= fVar4),
                auVar2._8_4_ = -(uint)(ABS((float)piVar16[0x12] - fStack_50) <= fVar6),
                auVar2._12_4_ = -(uint)(ABS((float)piVar16[0x13] - fStack_4c) <= fVar7),
                uVar9 = movmskps(0xf,auVar2), ((byte)uVar9 & 7) != 7)) &&
               (iVar10 = FUN_143832610(*puVar14,piVar16 + 0xc,&local_68), iVar10 != 0))
            goto LAB_143873f70;
          }
          thunk_FUN_143719c70(0xb00daf2f);
        }
        iVar13 = iVar13 + 1;
        lVar15 = lVar15 + 0x60;
      } while (iVar13 < *(int *)(param_1 + 0xb8));
    }
    *(undefined2 *)(param_1 + 0xc4) = 0;
    if (-1 < (int)(*(uint *)(param_1 + 0xd0) - 1)) {
      puVar17 = *(undefined4 **)(param_1 + 200);
      for (uVar12 = (ulonglong)*(uint *)(param_1 + 0xd0); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
    if (-1 < (int)(*(uint *)(param_1 + 0xe8) - 1)) {
      puVar17 = *(undefined4 **)(param_1 + 0xe0);
      for (uVar12 = (ulonglong)*(uint *)(param_1 + 0xe8); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
    if (-1 < (int)(*(uint *)(param_1 + 0x100) - 1)) {
      puVar17 = *(undefined4 **)(param_1 + 0xf8);
      for (uVar12 = (ulonglong)*(uint *)(param_1 + 0x100); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
    param_2 = local_res10;
    if (-1 < (int)(*(uint *)(param_1 + 0x118) - 1)) {
      puVar17 = *(undefined4 **)(param_1 + 0x110);
      for (uVar12 = (ulonglong)*(uint *)(param_1 + 0x118); uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x1d4) < 1) {
    FUN_143871a50(param_1,param_2);
  }
  else {
    FUN_143872060();
  }
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d750(pvVar11,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 143874080 FUN_143874080 body=570 status=ok
// SIG undefined FUN_143874080(void)

void FUN_143874080(longlong param_1,char param_2)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  float fVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int iVar31;
  undefined4 uVar32;
  LPVOID pvVar33;
  longlong lVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pvVar33 = TlsGetValue(DAT_146b8198c);
  if (pvVar33 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar33,"TtupdateGenerators");
  }
  if (param_2 == '\0') {
    local_68 = *(float *)(param_1 + 0x1d0);
    fStack_64 = local_68;
    fStack_60 = local_68;
    fStack_5c = local_68;
  }
  else {
    local_68 = 0.0 - DAT_1467f06f0;
    fStack_64 = 0.0 - fRam00000001467f06f4;
    fStack_60 = 0.0 - fRam00000001467f06f8;
    fStack_5c = 0.0 - fRam00000001467f06fc;
  }
  fVar30 = fStack_5c;
  fVar29 = fStack_60;
  fVar28 = fStack_64;
  fVar27 = local_68;
  local_68 = *(float *)(param_1 + 0x130);
  fStack_64 = *(float *)(param_1 + 0x134);
  fStack_60 = *(float *)(param_1 + 0x138);
  fStack_5c = *(float *)(param_1 + 0x13c);
  iVar37 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    uVar36 = 1;
    lVar35 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0xa0);
      (**(code **)(**(longlong **)(lVar35 + lVar8) + 0x30))
                (*(longlong **)(lVar35 + lVar8),&local_68);
      lVar34 = (**(code **)(**(longlong **)(lVar35 + lVar8) + 0x48))();
      if ((char)lVar34 != '\0') {
        lVar34 = *(longlong *)(param_1 + 200);
        *(undefined1 *)(param_1 + 0xc4) = 1;
        puVar1 = (uint *)(lVar34 + ((longlong)iVar37 >> 5) * 4);
        *puVar1 = *puVar1 | uVar36;
      }
      plVar9 = *(longlong **)(lVar35 + lVar8);
      pfVar2 = (float *)(lVar35 + 0x30 + lVar8);
      pfVar3 = (float *)(lVar35 + 0x40 + lVar8);
      auVar10._4_4_ = -(uint)(ABS(*(float *)((longlong)plVar9 + 0x34) - pfVar2[1]) <= fVar28);
      auVar10._0_4_ = -(uint)(ABS(*(float *)(plVar9 + 6) - *pfVar2) <= fVar27);
      auVar10._8_4_ = -(uint)(ABS(*(float *)(plVar9 + 7) - pfVar2[2]) <= fVar29);
      auVar10._12_4_ = -(uint)(ABS(*(float *)((longlong)plVar9 + 0x3c) - pfVar2[3]) <= fVar30);
      iVar31 = movmskps((int)lVar34,auVar10);
      auVar11._4_4_ = -(uint)(ABS(*(float *)((longlong)plVar9 + 0x44) - pfVar3[1]) <= fVar28);
      auVar11._0_4_ = -(uint)(ABS(*(float *)(plVar9 + 8) - *pfVar3) <= fVar27);
      auVar11._8_4_ = -(uint)(ABS(*(float *)(plVar9 + 9) - pfVar3[2]) <= fVar29);
      auVar11._12_4_ = -(uint)(ABS(*(float *)((longlong)plVar9 + 0x4c) - pfVar3[3]) <= fVar30);
      uVar32 = movmskps(iVar31,auVar11);
      if ((((byte)uVar32 & 7) != 7) || (iVar31 != 0xf)) {
        if (iVar31 != 0xf) {
          local_48 = 0;
          uStack_40 = 0;
          local_58 = *(float *)(plVar9 + 6);
          fStack_54 = *(float *)((longlong)plVar9 + 0x34);
          fStack_50 = *(float *)(plVar9 + 7);
          fStack_4c = *(float *)((longlong)plVar9 + 0x3c);
          (**(code **)(*plVar9 + 0x38))(plVar9,&local_58,lVar8 + 0x10 + lVar35);
        }
        pfVar2 = (float *)(lVar35 + 0x10 + lVar8);
        fVar12 = *pfVar2;
        fVar13 = pfVar2[1];
        fVar14 = pfVar2[2];
        fVar15 = pfVar2[3];
        fVar7 = *(float *)(*(longlong *)(lVar35 + lVar8) + 0x20);
        lVar34 = *(longlong *)(param_1 + 0x20);
        pfVar2 = (float *)(lVar35 + 0x20 + lVar8);
        fVar16 = pfVar2[1];
        fVar17 = pfVar2[2];
        fVar18 = pfVar2[3];
        pfVar3 = (float *)(lVar35 + 0x40 + lVar8);
        fVar19 = pfVar3[1];
        fVar20 = pfVar3[2];
        fVar21 = pfVar3[3];
        pfVar4 = (float *)(lVar35 + 0x40 + lVar8);
        fVar22 = *pfVar4;
        fVar23 = pfVar4[1];
        fVar24 = pfVar4[2];
        fVar25 = pfVar4[3];
        pfVar4 = (float *)(lVar35 + 0x30 + lVar34);
        *pfVar4 = *pfVar2 + fVar7 + *pfVar3;
        pfVar4[1] = fVar16 + fVar7 + fVar19;
        pfVar4[2] = fVar17 + fVar7 + fVar20;
        pfVar4[3] = fVar18 + fVar7 + fVar21;
        pfVar2 = (float *)(lVar35 + 0x20 + lVar34);
        *pfVar2 = (fVar12 - fVar7) + fVar22;
        pfVar2[1] = (fVar13 - fVar7) + fVar23;
        pfVar2[2] = (fVar14 - fVar7) + fVar24;
        pfVar2[3] = (fVar15 - fVar7) + fVar25;
        *(undefined1 *)(lVar35 + 0x40 + lVar34) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) + ((longlong)iVar37 >> 5) * 4);
        *puVar1 = *puVar1 | uVar36;
        uVar32 = *(undefined4 *)((longlong)plVar9 + 0x34);
        lVar34 = plVar9[7];
        uVar26 = *(undefined4 *)((longlong)plVar9 + 0x3c);
        puVar5 = (undefined4 *)(lVar35 + 0x30 + lVar8);
        *puVar5 = (int)plVar9[6];
        puVar5[1] = uVar32;
        puVar5[2] = (int)lVar34;
        puVar5[3] = uVar26;
        lVar34 = plVar9[9];
        plVar6 = (longlong *)(lVar35 + 0x40 + lVar8);
        *plVar6 = plVar9[8];
        plVar6[1] = lVar34;
      }
      iVar37 = iVar37 + 1;
      uVar36 = uVar36 << 1 | (uint)((int)uVar36 < 0);
      lVar35 = lVar35 + 0x50;
    } while (iVar37 < *(int *)(param_1 + 0xa8));
  }
  if (pvVar33 != (LPVOID)0x0) {
    FUN_14370d750(pvVar33,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438742c0 FUN_1438742c0 body=749 status=ok
// SIG undefined FUN_1438742c0(void)

void FUN_1438742c0(longlong param_1,char param_2,longlong *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  LPVOID pvVar16;
  float *pfVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  pvVar16 = TlsGetValue(DAT_146b8198c);
  if (pvVar16 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar16,"TtupdateSections");
  }
  if (param_2 == '\0') {
    local_b8 = *(float *)(param_1 + 0x1d0);
    fStack_b4 = local_b8;
    fStack_b0 = local_b8;
    fStack_ac = local_b8;
  }
  else {
    local_b8 = 0.0 - DAT_1467f06f0;
    fStack_b4 = 0.0 - fRam00000001467f06f4;
    fStack_b0 = 0.0 - fRam00000001467f06f8;
    fStack_ac = 0.0 - fRam00000001467f06fc;
  }
  fVar12 = fStack_ac;
  fVar11 = fStack_b0;
  fVar10 = fStack_b4;
  fVar9 = local_b8;
  FUN_1437f14b0(param_1 + 0x110,0,*(undefined4 *)(param_1 + 0x98),0);
  iVar21 = 0;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar22 = 0;
    uVar19 = 1;
    lVar20 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x90);
      puVar18 = (undefined8 *)((longlong)*(int *)(lVar20 + lVar4) * 0x60 + *param_3);
      uVar13 = FUN_14375e570(&local_88,puVar18);
      local_78 = *(float *)(puVar18 + 6);
      fStack_74 = *(float *)((longlong)puVar18 + 0x34);
      fStack_70 = *(float *)(puVar18 + 7);
      fStack_6c = *(float *)((longlong)puVar18 + 0x3c);
      pfVar17 = (float *)(lVar20 + 0x90 + lVar4);
      auVar6._4_4_ = -(uint)(ABS(fStack_74 - pfVar17[1]) <= fVar10);
      auVar6._0_4_ = -(uint)(ABS(local_78 - *pfVar17) <= fVar9);
      auVar6._8_4_ = -(uint)(ABS(fStack_70 - pfVar17[2]) <= fVar11);
      auVar6._12_4_ = -(uint)(ABS(fStack_6c - pfVar17[3]) <= fVar12);
      uVar14 = movmskps(uVar13,auVar6);
      if ((char)(uVar14 & 7) == '\a') {
        pfVar17 = (float *)(lVar20 + 0x80 + lVar4);
        auVar7._4_4_ = -(uint)(ABS(fStack_84 - pfVar17[1]) <= fVar10);
        auVar7._0_4_ = -(uint)(ABS(local_88 - *pfVar17) <= fVar9);
        auVar7._8_4_ = -(uint)(ABS(fStack_80 - pfVar17[2]) <= fVar11);
        auVar7._12_4_ = -(uint)(ABS(fStack_7c - pfVar17[3]) <= fVar12);
        iVar15 = movmskps(uVar14 & 7,auVar7);
        if (iVar15 != 0xf) goto LAB_143874402;
      }
      else {
LAB_143874402:
        uVar8 = puVar18[1];
        puVar2 = (undefined8 *)(lVar20 + 0x20 + lVar4);
        *puVar2 = *puVar18;
        puVar2[1] = uVar8;
        uVar8 = puVar18[3];
        pfVar17 = (float *)(lVar4 + 0x80 + lVar20);
        puVar2 = (undefined8 *)(lVar20 + 0x30 + lVar4);
        *puVar2 = puVar18[2];
        puVar2[1] = uVar8;
        uVar8 = puVar18[5];
        puVar2 = (undefined8 *)(lVar20 + 0x40 + lVar4);
        *puVar2 = puVar18[4];
        puVar2[1] = uVar8;
        uVar8 = puVar18[7];
        puVar2 = (undefined8 *)(lVar20 + 0x50 + lVar4);
        *puVar2 = puVar18[6];
        puVar2[1] = uVar8;
        uVar8 = puVar18[9];
        puVar2 = (undefined8 *)(lVar20 + 0x60 + lVar4);
        *puVar2 = puVar18[8];
        puVar2[1] = uVar8;
        uVar8 = puVar18[0xb];
        puVar2 = (undefined8 *)(lVar20 + 0x70 + lVar4);
        *puVar2 = puVar18[10];
        puVar2[1] = uVar8;
        *pfVar17 = local_88;
        pfVar17[1] = fStack_84;
        pfVar17[2] = fStack_80;
        pfVar17[3] = fStack_7c;
        pfVar17[4] = local_78;
        pfVar17[5] = fStack_74;
        pfVar17[6] = fStack_70;
        pfVar17[7] = fStack_6c;
        FUN_143717ab0(pfVar17,*(longlong *)(lVar20 + 8 + lVar4) + 0x90,&local_68);
        lVar5 = *(longlong *)(lVar20 + 8 + lVar4);
        uStack_8c = *(undefined4 *)(param_1 + 0x13c);
        uStack_90 = *(uint *)(param_1 + 0x138) ^ 0x80000000;
        local_98 = *(uint *)(param_1 + 0x130) ^ 0x80000000;
        uStack_94 = *(uint *)(param_1 + 0x134) ^ 0x80000000;
        local_b8 = *(float *)(lVar5 + 0xb0) + *(float *)(param_1 + 0x1c0);
        local_a8 = *(undefined4 *)(param_1 + 0x140 + (longlong)*(int *)(lVar20 + 0xa0 + lVar4) * 4);
        fStack_b4 = local_b8;
        fStack_b0 = local_b8;
        fStack_ac = local_b8;
        uStack_a4 = local_a8;
        uStack_a0 = local_a8;
        uStack_9c = local_a8;
        FUN_143832440(&local_68,&local_98,&local_a8,&local_b8,
                      ((*(byte *)(lVar5 + 0x80) & 1) != 0) + '\x03');
        lVar4 = *(longlong *)(param_1 + 0x30);
        puVar3 = (undefined4 *)(lVar4 + 0x20 + lVar22);
        *puVar3 = local_68;
        puVar3[1] = uStack_64;
        puVar3[2] = uStack_60;
        puVar3[3] = uStack_5c;
        puVar18 = (undefined8 *)(lVar4 + 0x30 + lVar22);
        *puVar18 = local_58;
        puVar18[1] = uStack_50;
        *(undefined1 *)(lVar4 + 0x40 + lVar22) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x110) + ((longlong)iVar21 >> 5) * 4);
        *puVar1 = *puVar1 | uVar19;
      }
      iVar21 = iVar21 + 1;
      uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      lVar20 = lVar20 + 0xd0;
      lVar22 = lVar22 + 0x50;
    } while (iVar21 < *(int *)(param_1 + 0x98));
  }
  if (pvVar16 != (LPVOID)0x0) {
    FUN_14370d750(pvVar16,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438745b0 FUN_1438745b0 body=286 status=ok
// SIG undefined FUN_1438745b0(void)

void FUN_1438745b0(longlong param_1,longlong *param_2,char param_3,undefined4 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_143874080(param_1,param_3);
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  FUN_1438742c0(param_1,param_3,&local_18);
  if (param_2 == (longlong *)0x0) {
    if (-1 < (int)(*(uint *)(param_1 + 0x100) - 1)) {
      puVar7 = *(undefined4 **)(param_1 + 0xf8);
      for (uVar4 = (ulonglong)*(uint *)(param_1 + 0x100); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
    }
  }
  else {
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x98)) {
      uVar8 = 1;
      lVar10 = 0;
      do {
        lVar6 = (longlong)iVar9;
        iVar9 = iVar9 + 1;
        iVar2 = *(int *)(lVar10 + *(longlong *)(param_1 + 0x90));
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xf8) + (lVar6 >> 5) * 4);
        uVar3 = ~uVar8;
        uVar5 = -(*(uint *)(*param_2 + ((longlong)iVar2 >> 5) * 4) >> ((byte)iVar2 & 0x1f) & 1) &
                uVar8;
        uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
        *puVar1 = uVar5 | uVar3 & *puVar1;
        lVar10 = lVar10 + 0xd0;
      } while (iVar9 < *(int *)(param_1 + 0x98));
    }
  }
  if ((*(char *)(param_1 + 0xc5) == '\0') && (param_3 == '\0')) {
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xc5) = 1;
  }
  return;
}



// FUNCTION 1438746d0 FUN_1438746d0 body=33 status=ok
// SIG undefined FUN_1438746d0(void)

undefined8 * FUN_1438746d0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  *param_1 = hkaiDynamicNavVolumeMediator::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 143874700 FUN_143874700 body=15 status=ok
// SIG undefined FUN_143874700(void)

void FUN_143874700(undefined8 *param_1)

{
  *param_1 = hkaiNavVolumeMediator::vftable;
  FUN_14370c000();
  return;
}



// FUNCTION 143874710 FUN_143874710 body=99 status=ok
// SIG undefined FUN_143874710(void)

undefined8 * FUN_143874710(undefined8 *param_1,ulonglong param_2)

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
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x20);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143874780 FUN_143874780 body=88 status=ok
// SIG undefined FUN_143874780(void)

undefined4 * FUN_143874780(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  local_20 = *(longlong *)(param_1 + 0x18);
  local_28 = DynVolumeClosestPointCollector::vftable;
  local_10 = 0xffffffff;
  local_18 = param_3;
  hkcdDynamicAabbTree::getClosestPoint
            (*(undefined8 *)(local_20 + 0x20),param_3 + 0x20,param_3 + 0x30,&local_28,param_4);
  *param_2 = local_10;
  return param_2;
}



// FUNCTION 1438747e0 FUN_1438747e0 body=44 status=ok
// SIG undefined FUN_1438747e0(void)

undefined8 FUN_1438747e0(longlong param_1,int param_2)

{
  if (*(longlong *)
       ((longlong)param_2 * 0x100 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38)) != 0) {
    FUN_143874a10();
  }
  return 1;
}



// FUNCTION 143874810 FUN_143874810 body=434 status=ok
// SIG undefined FUN_143874810(void)

float * FUN_143874810(longlong param_1,float *param_2,int param_3,undefined8 param_4,float *param_5,
                     float *param_6,undefined1 (*param_7) [16])

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int local_res18 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  lVar3 = *(longlong *)((longlong)param_3 * 0x100 + 8 + lVar2);
  plVar4 = *(longlong **)((longlong)param_3 * 0x100 + 0x20 + lVar2);
  if (lVar3 != 0) {
    auVar17 = *param_7;
    fVar6 = auVar17._0_4_;
    fVar10 = auVar17._4_4_;
    fVar11 = auVar17._8_4_;
    fVar12 = auVar17._12_4_;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    auVar17 = rsqrtps(in_XMM3,auVar17);
    local_58 = *puVar5;
    uStack_50 = puVar5[1];
    local_48 = puVar5[2];
    local_38 = puVar5[4];
    uStack_30 = puVar5[5];
    fVar13 = auVar17._0_4_;
    fVar18 = auVar17._4_4_;
    fVar20 = auVar17._8_4_;
    fVar22 = auVar17._12_4_;
    local_28 = ~-(uint)(fVar6 <= 0.0) &
               (uint)((3.0 - fVar6 * fVar13 * fVar13) * fVar13 * 0.5 * fVar6);
    uStack_24 = ~-(uint)(fVar10 <= 0.0) &
                (uint)((3.0 - fVar10 * fVar18 * fVar18) * fVar18 * 0.5 * fVar10);
    uStack_20 = ~-(uint)(fVar11 <= 0.0) &
                (uint)((3.0 - fVar11 * fVar20 * fVar20) * fVar20 * 0.5 * fVar11);
    uStack_1c = ~-(uint)(fVar12 <= 0.0) &
                (uint)((3.0 - fVar12 * fVar22 * fVar22) * fVar22 * 0.5 * fVar12);
    local_68 = *(undefined8 *)param_5;
    uStack_60 = *(undefined8 *)(param_5 + 2);
    lStack_40 = lVar3;
    (**(code **)(*plVar4 + 0x18))(plVar4,local_res18,&local_58,&local_68);
    if (local_res18[0] != -1) {
      bVar1 = *(byte *)(lVar3 + 0x30);
      if (bVar1 != 0) {
        uVar9 = (uint)bVar1;
        uVar16 = -(uint)(0x16a8300 << uVar9 < 0);
        uVar19 = -(uint)(0x502ab000 << uVar9 < 0);
        uVar21 = -(uint)(0xa2a8c00 << uVar9 < 0);
        uVar23 = -(uint)(0xa154c00 << uVar9 < 0);
        uVar24 = -(uint)(0x1554300 << uVar9 < 0);
        uVar25 = -(uint)(0x50157000 << uVar9 < 0);
        uVar9 = (uint)(float)local_68 & uVar21;
        uVar14 = (uint)(float)local_68 & uVar24;
        uVar15 = (uint)local_68._4_4_ & uVar25;
        uVar8 = (ulonglong)bVar1;
        local_68._0_4_ =
             (float)((0xae71e0U >> uVar8) << 0x1f ^
                    (~uVar23 & ((uint)local_68._4_4_ & uVar16 | ~uVar16 & (uint)(float)local_68) |
                    (uint)(float)uStack_60 & uVar23));
        local_68._4_4_ =
             (float)((0xb9e306U >> uVar8) << 0x1f ^
                    (~uVar24 & ((uint)(float)uStack_60 & uVar19 | ~uVar19 & (uint)local_68._4_4_) |
                    uVar14));
        uStack_60._0_4_ =
             (float)((0xeb903cU >> uVar8) << 0x1f ^
                    (~uVar25 & (uVar9 | ~uVar21 & (uint)(float)uStack_60) | uVar15));
        uStack_60._4_4_ = (float)((0U >> uVar8) << 0x1f ^ (uint)uStack_60._4_4_);
      }
      fVar6 = *(float *)(lVar3 + 0x4c);
      local_68._0_4_ = (float)local_68 + *(float *)(lVar3 + 0x40);
      local_68._4_4_ = local_68._4_4_ + *(float *)(lVar3 + 0x44);
      uStack_60._0_4_ = (float)uStack_60 + *(float *)(lVar3 + 0x48);
      fVar10 = (float)local_68 - *param_5;
      fVar11 = local_68._4_4_ - param_5[1];
      fVar12 = (float)uStack_60 - param_5[2];
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      fVar13 = fVar11 + fVar10 + fVar12;
      if (fVar13 < *(float *)*param_7) {
        *(int *)(param_1 + 0x18) = local_res18[0];
        *param_6 = (float)local_68;
        param_6[1] = local_68._4_4_;
        param_6[2] = (float)uStack_60;
        param_6[3] = uStack_60._4_4_ + fVar6;
      }
      *param_2 = fVar13;
      param_2[1] = fVar11 + fVar10 + fVar12;
      param_2[2] = fVar11 + fVar10 + fVar12;
      param_2[3] = fVar11 + fVar10 + fVar12;
      return param_2;
    }
  }
  uVar7 = *(undefined8 *)(*param_7 + 8);
  *(undefined8 *)param_2 = *(undefined8 *)*param_7;
  *(undefined8 *)(param_2 + 2) = uVar7;
  return param_2;
}



// FUNCTION 1438749d0 FUN_1438749d0 body=58 status=ok
// SIG undefined FUN_1438749d0(void)

void FUN_1438749d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = *(longlong *)(param_1 + 0x18);
  local_28 = DynVolumeAabbQuery::vftable;
  local_20 = param_2;
  local_10 = param_3;
  hkcdDynamicAabbTree::getClosestPoint(*(undefined8 *)(local_18 + 0x20),param_2 + 0x20,&local_28);
  return;
}



// FUNCTION 143874a10 FUN_143874a10 body=102 status=ok
// SIG undefined FUN_143874a10(void)

void FUN_143874a10(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  local_38 = puVar1[2];
  local_28 = *(undefined4 *)(puVar1 + 4);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_20 = *(undefined4 *)(puVar1 + 5);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  local_18 = *(undefined4 *)(puVar1 + 6);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x34);
  uStack_10 = *(undefined4 *)(puVar1 + 7);
  uStack_c = *(undefined4 *)((longlong)puVar1 + 0x3c);
  plVar2 = *(longlong **)
            ((longlong)*(int *)(*(longlong *)(param_2 + 0x18) + 0x94) * 0x100 + 0x20 +
            *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  lStack_30 = param_2;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_48,*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 143874a80 FUN_143874a80 body=196 status=ok
// SIG undefined FUN_143874a80(void)

undefined8 * FUN_143874a80(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  
  puVar3 = (undefined4 *)0x0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  iVar1 = (int)param_2[1];
  lVar5 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar6 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar3 = (undefined4 *)FUN_143702d60(uVar2,8,local_res8);
  }
  *param_1 = puVar3;
  *(int *)(param_1 + 1) = iVar6;
  iVar6 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar6 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xc) = iVar6;
  if (0 < iVar1) {
    lVar4 = *param_2 - (longlong)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(lVar4 + (longlong)puVar3);
        puVar3[1] = *(undefined4 *)(lVar4 + 4 + (longlong)puVar3);
      }
      puVar3 = puVar3 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  FUN_143734770(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 143874b50 FUN_143874b50 body=524 status=ok
// SIG undefined FUN_143874b50(void)

longlong * FUN_143874b50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  *param_1 = 0;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = param_2[4];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar1;
  lVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = lVar1;
  lVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = lVar1;
  lVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar1;
  lVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar1;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x84);
  lVar1 = param_2[0x11];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar2;
  *(int *)(param_1 + 0x11) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  *(char *)(param_1 + 0x12) = (char)param_2[0x12];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xa4);
  lVar1 = param_2[0x15];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xac);
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar2;
  *(int *)(param_1 + 0x15) = (int)lVar1;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  FUN_143874a80(param_1 + 0x16,param_2 + 0x16);
  FUN_143828ee0(param_1 + 0x1a,param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar4 + 0x58),0xa0);
    lVar6 = lVar7;
    if (lVar5 != 0) {
      lVar6 = FUN_143839900(lVar5,lVar1);
    }
    if (*param_1 != 0) {
      FUN_14370c150();
    }
    *param_1 = lVar6;
  }
  lVar1 = param_2[2];
  if (lVar1 != 0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar4 + 0x58),0x70);
    lVar6 = lVar7;
    if (lVar5 != 0) {
      lVar6 = FUN_14383b870(lVar5,lVar1);
    }
    if (param_1[2] != 0) {
      FUN_14370c150();
    }
    param_1[2] = lVar6;
  }
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    lVar6 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar4 + 0x58),0x50);
    if (lVar6 != 0) {
      lVar7 = FUN_14383c820(lVar6,lVar1);
    }
    if (param_1[1] != 0) {
      FUN_14370c150();
    }
    param_1[1] = lVar7;
  }
  return param_1;
}



// FUNCTION 143874d60 FUN_143874d60 body=815 status=ok
// SIG undefined FUN_143874d60(void)

void FUN_143874d60(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  if ((*(byte *)(param_2 + 0x1e) & 1) == 0) {
    if (*param_1 != 0) {
      FUN_14383a5a0(*param_1,*param_2);
    }
  }
  else {
    if (*param_1 != 0) {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_14383ffc0(param_3);
      }
      FUN_1437e5cf0(uVar5,(int)param_1[5]);
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
    }
    if (*param_2 != 0) {
      FUN_14370c030();
    }
    if (*param_1 != 0) {
      FUN_14370c150();
    }
    lVar1 = *param_2;
    *param_1 = lVar1;
    if (lVar1 != 0) {
      lVar2 = param_1[7];
      *(longlong *)(lVar1 + 0x40) = param_1[6];
      *(longlong *)(lVar1 + 0x48) = lVar2;
      lVar2 = param_1[9];
      *(longlong *)(lVar1 + 0x50) = param_1[8];
      *(longlong *)(lVar1 + 0x58) = lVar2;
      lVar2 = param_1[0xb];
      *(longlong *)(lVar1 + 0x60) = param_1[10];
      *(longlong *)(lVar1 + 0x68) = lVar2;
      lVar2 = param_1[0xd];
      *(longlong *)(lVar1 + 0x70) = param_1[0xc];
      *(longlong *)(lVar1 + 0x78) = lVar2;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x74);
      lVar2 = param_1[0xf];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x7c);
      *(int *)(lVar1 + 0x80) = (int)param_1[0xe];
      *(undefined4 *)(lVar1 + 0x84) = uVar4;
      *(int *)(lVar1 + 0x88) = (int)lVar2;
      *(undefined4 *)(lVar1 + 0x8c) = uVar3;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x84);
      lVar2 = param_1[0x11];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x8c);
      *(int *)(lVar1 + 0x90) = (int)param_1[0x10];
      *(undefined4 *)(lVar1 + 0x94) = uVar4;
      *(int *)(lVar1 + 0x98) = (int)lVar2;
      *(undefined4 *)(lVar1 + 0x9c) = uVar3;
      FUN_14383a080(*param_1,local_28);
      uVar4 = *(undefined4 *)(*(longlong *)(*param_1 + 0x18) + 0x17c);
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_14383ffc0(param_3);
      }
      uVar4 = FUN_1437e5980(uVar5,local_28,uVar4);
      *(undefined4 *)(param_1 + 5) = uVar4;
    }
  }
  if ((*(byte *)(param_2 + 0x1e) & 2) == 0) {
    if (param_1[1] != 0) {
      FFloatCurve::CopyCurve(param_1[1],param_2[1]);
    }
  }
  else {
    if (param_1[1] != 0) {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_14383ffc0(param_3);
      }
      FUN_1437e5cf0(uVar5,(int)param_1[5]);
      *(undefined4 *)(param_1 + 5) = 0xffffffff;
    }
    if (param_2[1] != 0) {
      FUN_14370c030();
    }
    if (param_1[1] != 0) {
      FUN_14370c150();
    }
    lVar1 = param_2[1];
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *(char *)(lVar1 + 0x30) = (char)param_1[0x12];
      lVar2 = param_1[0x15];
      *(longlong *)(lVar1 + 0x40) = param_1[0x14];
      *(longlong *)(lVar1 + 0x48) = lVar2;
      lVar1 = param_1[1];
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x38);
      local_48 = *(float *)(lVar2 + 0x70);
      fStack_44 = *(float *)(lVar2 + 0x74);
      fStack_40 = *(float *)(lVar2 + 0x78);
      fStack_3c = *(float *)(lVar2 + 0x7c);
      local_38 = *(float *)(lVar2 + 0x80);
      fStack_34 = *(float *)(lVar2 + 0x84);
      fStack_30 = *(float *)(lVar2 + 0x88);
      fStack_2c = *(float *)(lVar2 + 0x8c);
      FUN_142fbdd20(lVar1 + 0x30,&local_48);
      local_48 = local_48 + *(float *)(lVar1 + 0x40);
      fStack_44 = fStack_44 + *(float *)(lVar1 + 0x44);
      fStack_40 = fStack_40 + *(float *)(lVar1 + 0x48);
      fStack_3c = fStack_3c + *(float *)(lVar1 + 0x4c);
      local_38 = local_38 + *(float *)(lVar1 + 0x40);
      fStack_34 = fStack_34 + *(float *)(lVar1 + 0x44);
      fStack_30 = fStack_30 + *(float *)(lVar1 + 0x48);
      fStack_2c = fStack_2c + *(float *)(lVar1 + 0x4c);
      uVar4 = *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x94);
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_14383ffc0(param_3);
      }
      uVar4 = FUN_1437e5980(uVar5,&local_48,uVar4);
      *(undefined4 *)(param_1 + 5) = uVar4;
    }
  }
  if ((*(byte *)(param_2 + 0x1e) & 4) == 0) {
    if (param_1[2] != 0) {
      FFloatCurve::CopyCurve(param_1[2],param_2[2]);
    }
  }
  else {
    if (param_2[2] != 0) {
      FUN_14370c030();
    }
    if (param_1[2] != 0) {
      FUN_14370c150();
    }
    lVar1 = param_2[2];
    param_1[2] = lVar1;
    if (lVar1 != 0) {
      lVar2 = param_1[7];
      *(longlong *)(lVar1 + 0x30) = param_1[6];
      *(longlong *)(lVar1 + 0x38) = lVar2;
      lVar2 = param_1[9];
      *(longlong *)(lVar1 + 0x40) = param_1[8];
      *(longlong *)(lVar1 + 0x48) = lVar2;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0x54);
      lVar2 = param_1[0xb];
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x5c);
      *(int *)(lVar1 + 0x50) = (int)param_1[10];
      *(undefined4 *)(lVar1 + 0x54) = uVar4;
      *(int *)(lVar1 + 0x58) = (int)lVar2;
      *(undefined4 *)(lVar1 + 0x5c) = uVar3;
      lVar2 = param_1[0xd];
      *(longlong *)(lVar1 + 0x60) = param_1[0xc];
      *(longlong *)(lVar1 + 0x68) = lVar2;
    }
  }
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | *(byte *)(param_2 + 0x1e);
  if (param_2[3] != 0) {
    FUN_14370c030();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = param_2[3];
  if (param_2[4] != 0) {
    FUN_14370c030();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  param_1[4] = param_2[4];
  FUN_14383dd00(param_1 + 0x16,param_2 + 0x16);
  FUN_14383dde0(param_1 + 0x1a,param_2 + 0x1a);
  return;
}



// FUNCTION 143875090 FUN_143875090 body=291 status=ok
// SIG undefined FUN_143875090(void)

undefined8 * FUN_143875090(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiVolumePathfindingUtil::FindPathInput::vftable;
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
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  param_1[0x13] = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
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



// FUNCTION 1438751c0 FUN_1438751c0 body=382 status=ok
// SIG undefined FUN_1438751c0(void)

undefined8 FUN_1438751c0(longlong param_1,longlong param_2,int *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong local_108;
  longlong lStack_100;
  uint *local_f8;
  undefined1 local_f0;
  uint local_e8 [2];
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_108 = *(longlong *)(param_2 + 0x20);
  lStack_100 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = 0;
  iVar5 = FUN_143841a90(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38),&local_108);
  *param_3 = iVar5;
  local_e8[0] = *(uint *)(param_2 + 0x40);
  if (local_e8[0] == *(uint *)(*(longlong *)(param_2 + 0x48) + (longlong)iVar5 * 4)) {
    lVar2 = *(longlong *)
             ((ulonglong)(local_e8[0] >> 0x16) * 0x100 + 8 + *(longlong *)(param_1 + 0x38));
    local_58 = 0;
    uStack_50 = 0;
    local_f8 = local_e8;
    local_28 = DAT_1467f08d0;
    uStack_24 = uRam00000001467f08d4;
    uStack_20 = uRam00000001467f08d8;
    uStack_1c = uRam00000001467f08dc;
    local_a0 = (ulonglong)(local_e8[0] & 0x3fffff) * 0x18;
    uStack_10 = uRam00000001467f08d8 ^ 0x80000000;
    uStack_c = uRam00000001467f08dc ^ 0x80000000;
    local_d8 = *(undefined8 *)(param_2 + 0x20);
    uStack_d0 = *(undefined8 *)(param_2 + 0x28);
    local_18 = DAT_1467f08d0 ^ 0x80000000;
    uStack_14 = uRam00000001467f08d4 ^ 0x80000000;
    local_e0 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18) + local_a0;
    local_a0 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18) + local_a0;
    puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar5 * 0x10);
    local_98 = *puVar1;
    uStack_94 = puVar1[1];
    uStack_90 = puVar1[2];
    uStack_8c = puVar1[3];
    lStack_100 = param_2 + 0x5c;
    plVar3 = *(longlong **)(param_2 + 0x88);
    local_60 = 0;
    local_68 = 0xffffffff;
    local_f0 = 0x52;
    if ((plVar3 == (longlong *)0x0) ||
       (local_108 = param_1, local_a8 = local_e8[0],
       cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,&local_108), cVar4 != '\0')) {
      uVar6 = 1;
    }
  }
  return uVar6;
}



// FUNCTION 143875340 FUN_143875340 body=350 status=ok
// SIG undefined FUN_143875340(void)

void FUN_143875340(undefined8 param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(int *)(param_3 + 0x54) = param_4;
  *(undefined1 *)(param_3 + 0x5c) = 1;
  *(undefined4 *)(param_3 + 0x50) = 0;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_3 + 0x40) == (*(uint *)(param_3 + 0x44) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_3 + 0x38,0x30);
  }
  iVar1 = *(int *)(param_3 + 0x40);
  *(int *)(param_3 + 0x40) = iVar1 + 1;
  puVar6 = (undefined4 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_3 + 0x38));
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 10) = 0;
  puVar6[8] = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *puVar6 = *(undefined4 *)(param_2 + 0x20);
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  puVar6[9] = *(uint *)(param_2 + 0x40) >> 0x16;
  uVar5 = FUN_143703a50();
  if (*(uint *)(param_3 + 0x40) == (*(uint *)(param_3 + 0x44) & 0x3fffffff)) {
    FUN_14370c460(uVar5,param_3 + 0x38,0x30);
  }
  iVar1 = *(int *)(param_3 + 0x40);
  *(int *)(param_3 + 0x40) = iVar1 + 1;
  puVar7 = (undefined4 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_3 + 0x38));
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 0;
  *(undefined1 *)(puVar7 + 10) = 0;
  puVar7[8] = 0;
  puVar6 = (undefined4 *)(*(longlong *)(param_2 + 0x30) + (longlong)param_4 * 0x10);
  uVar2 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *puVar7 = *puVar6;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  puVar7[9] = *(uint *)(*(longlong *)(param_2 + 0x48) + (longlong)param_4 * 4) >> 0x16;
  if ((param_5 != 0) && (param_6 == 0)) {
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_3 + 0x20) == (*(uint *)(param_3 + 0x24) & 0x3fffffff)) {
      FUN_14370c460(uVar5,param_3 + 0x18,4);
    }
    *(undefined4 *)(*(longlong *)(param_3 + 0x18) + (longlong)*(int *)(param_3 + 0x20) * 4) =
         *(undefined4 *)(param_2 + 0x40);
    *(int *)(param_3 + 0x20) = *(int *)(param_3 + 0x20) + 1;
  }
  return;
}



// FUNCTION 1438754a0 FUN_1438754a0 body=224 status=ok
// SIG undefined FUN_1438754a0(void)

void FUN_1438754a0(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_1438b1350(&local_58);
  local_58 = *(undefined8 *)(param_2 + 0x20);
  uStack_50 = *(undefined8 *)(param_2 + 0x28);
  puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x30) + (longlong)param_3 * 0x10);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  lVar3 = 0;
  local_38 = *(undefined4 *)(param_2 + 0x40);
  local_34 = *(undefined4 *)(*(longlong *)(param_2 + 0x48) + (longlong)param_3 * 4);
  local_30 = *(undefined4 *)(param_2 + 0x58);
  local_2c = *(undefined8 *)(param_2 + 0x5c);
  local_18 = *(undefined8 *)(param_2 + 0x88);
  local_20 = *(undefined8 *)(param_2 + 0x80);
  lVar4 = lVar3;
  lVar5 = lVar3;
  if (param_4 != 0) {
    lVar5 = param_4 + 0x18;
    lVar3 = param_4 + 0x50;
    lVar4 = param_4 + 0x58;
  }
  cVar2 = FUN_1438b1370(param_1,&local_58,lVar5,0,lVar3,lVar4);
  if (param_4 != 0) {
    *(char *)(param_4 + 0x5c) = (cVar2 == '\0') + '\x01';
  }
  return;
}



// FUNCTION 143875580 FUN_143875580 body=1806 status=ok
// SIG undefined FUN_143875580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143875580(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  float *pfVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  LPVOID pvVar9;
  undefined8 uVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  float fVar14;
  ulonglong uVar15;
  int iVar16;
  float fVar17;
  float local_res10;
  int iStackX_14;
  int local_res18;
  float local_res20;
  undefined8 in_stack_fffffffffffffc08;
  undefined4 uVar18;
  undefined1 local_3c8 [24];
  undefined8 local_3b0;
  undefined4 local_3a8;
  uint local_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  uint local_394;
  LPVOID local_388;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  float fStack_350;
  float fStack_34c;
  undefined8 local_348;
  undefined4 local_340;
  longlong local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  float local_308;
  undefined4 local_304;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined8 local_2ce;
  undefined4 local_2c6;
  undefined8 local_2c0;
  undefined2 local_2a8;
  undefined8 local_2a6;
  undefined4 local_29e;
  undefined8 local_298;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  longlong *local_198 [2];
  longlong local_188 [6];
  int local_158;
  float local_150;
  undefined4 local_14c;
  int local_148;
  undefined4 *local_140;
  undefined4 *local_138;
  int local_120;
  int local_11c;
  undefined1 local_78 [16];
  int local_68;
  
  local_res20 = *(float *)(param_2 + 0x38);
  *(undefined4 *)(param_3 + 0x50) = 0;
  if ((*(int *)(param_2 + 0x50) == 0) || (*(int *)(param_2 + 0x40) == -1)) {
    *(undefined4 *)(param_3 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_3 + 0x5c) = 5;
    return;
  }
  bVar2 = *(byte *)(param_2 + 0x90);
  _local_res10 = CONCAT44(iStackX_14,0xffffffff);
  iVar16 = 0;
  fVar14 = -NAN;
  if ((bVar2 & 5) != 0) {
    iVar7 = FUN_1438751c0(param_1,param_2,&local_res10);
    iVar16 = 0;
    fVar14 = local_res10;
    if (iVar7 != 0) {
      iVar16 = 1;
    }
  }
  local_res18 = iVar16;
  if (((bVar2 & 5) == 0) || (cVar6 = FUN_1438754a0(param_1,param_2,fVar14,param_3), cVar6 == '\0'))
  {
    fVar17 = 3.40282e+38;
    iVar7 = 0;
  }
  else {
    fVar17 = *(float *)(param_3 + 0x58);
    iVar7 = 1;
  }
  cVar6 = '\0';
  bVar5 = false;
  if (((*(byte *)(param_2 + 0x90) & 4) != 0) ||
     (((*(byte *)(param_2 + 0x90) & 1) != 0 && (*(longlong *)(param_2 + 0x80) == 0)))) {
    bVar5 = true;
  }
  if (((iVar16 == 0) && (iVar7 == 0)) || (!bVar5)) {
    local_388 = TlsGetValue(DAT_146b8198c);
    if (local_388 != (LPVOID)0x0) {
      FUN_14370d620(local_388,"LtFindVolumePath","Stinit");
    }
    local_res10 = (float)*(undefined8 *)(param_2 + 0x9c);
    local_3b0 = 0;
    local_3a8 = 0;
    if ((int)local_res10 < 1) {
      local_res10 = 1.83671e-40;
    }
    local_3a4 = 0x80000000;
    iStackX_14 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x9c) >> 0x20);
    local_3a0 = 0;
    if (iStackX_14 < 1) {
      iStackX_14 = 0x90200;
    }
    local_398 = 0;
    local_394 = 0x80000000;
    FUN_143843c30(local_3c8,param_2 + 0xb0,&local_res10);
    FUN_1438af270(local_198,local_3c8);
    thunk_FUN_143719c70(0xca30930e);
    local_198[0] = &local_338;
    local_358 = *(undefined8 *)(param_2 + 0x30);
    fStack_350 = *(float *)(param_2 + 0x40);
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1c8 = DAT_1467f08d0;
    uStack_1c4 = uRam00000001467f08d4;
    uStack_1c0 = uRam00000001467f08d8;
    uStack_1bc = uRam00000001467f08dc;
    local_2f0 = local_188;
    local_2d8 = 0xffffffffffffffff;
    local_328 = *(undefined8 *)(param_2 + 0x80);
    local_320 = *(undefined8 *)(param_2 + 0x88);
    local_330 = *(undefined8 *)(param_2 + 0x5c);
    local_304 = *(undefined4 *)(param_2 + 0x38);
    uStack_1b0 = uRam00000001467f08d8 ^ 0x80000000;
    uStack_1ac = uRam00000001467f08dc ^ 0x80000000;
    local_348 = *(undefined8 *)(param_2 + 0x48);
    local_14c = *(undefined4 *)(param_2 + 0x94);
    local_1b8 = DAT_1467f08d0 ^ 0x80000000;
    uStack_1b4 = uRam00000001467f08d4 ^ 0x80000000;
    local_368 = *(undefined8 *)(param_2 + 0x20);
    uStack_360 = *(undefined8 *)(param_2 + 0x28);
    local_340 = local_res20;
    local_2ce = 0;
    local_2d0 = 0;
    local_2c6 = 0;
    local_2c0 = 0;
    local_2a6 = 0;
    local_2a8 = 0;
    local_29e = 0;
    local_298 = 0;
    local_288 = 0xffffffff;
    local_280 = 0;
    local_248 = 0xffffffff;
    local_240 = 0;
    local_208 = 0xffffffff;
    local_200 = 0;
    local_res10 = *(float *)(param_2 + 0x98);
    local_150 = local_res10;
    if (fVar17 <= local_res10) {
      local_150 = fVar17;
    }
    local_res20 = fVar17;
    local_338 = param_1;
    local_318 = local_368;
    uStack_310 = uStack_360;
    local_308 = fStack_350;
    local_300 = local_358;
    local_2f8 = local_348;
    FUN_1438af5e0(local_198,&local_338,(undefined8 *)(param_2 + 0x5c),&local_368);
    _local_res10 = CONCAT44(iStackX_14,*(undefined4 *)(param_2 + 0x58));
    pvVar9 = TlsGetValue(DAT_146b8198c);
    if (pvVar9 != (LPVOID)0x0) {
      FUN_14370d800(pvVar9,"StAStar");
    }
    iVar16 = 0;
    do {
      uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
      if ((int)local_res10 <= iVar16) {
        iVar8 = 3;
        cVar6 = '\x01';
        break;
      }
      iVar16 = iVar16 + 1;
      iVar8 = FUN_1438af720(local_198);
      if (iVar8 == 3) {
        cVar6 = (local_120 < local_11c) + '\x02';
      }
      thunk_FUN_143719c70(0x3c86ec3);
      uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
    } while (iVar8 == 0);
    if ((iVar7 == 0) || (iVar8 == 1)) {
      uVar13 = 0;
      if (iVar8 == 0) {
        iVar8 = (local_158 != -1) + 2;
      }
      *(int *)(param_3 + 0x50) = iVar16;
      *(char *)(param_3 + 0x5c) = (char)iVar8;
      *(char *)(param_3 + 0x5d) = cVar6;
      *(undefined4 *)(param_3 + 0x54) = 0xffffffff;
      if ((iVar8 - 1U & 0xfffffffd) == 0) {
        iVar16 = local_158;
        if ((iVar8 == 1) && (iVar16 = local_68, 0 < *(int *)(param_2 + 0x50))) {
          piVar12 = *(int **)(param_2 + 0x48);
          uVar15 = uVar13;
          do {
            iVar7 = (int)uVar15;
            if (*piVar12 == local_68) goto LAB_143875a37;
            uVar15 = (ulonglong)(iVar7 + 1);
            uVar13 = uVar13 + 1;
            piVar12 = piVar12 + 1;
          } while ((longlong)uVar13 < (longlong)*(int *)(param_2 + 0x50));
        }
        iVar7 = -1;
LAB_143875a37:
        *(int *)(param_3 + 0x54) = iVar7;
        local_140 = (undefined4 *)FUN_143843a50(local_188,iVar16);
        local_148 = (int)(short)((longlong)local_140 - local_188[0] >> 4);
        *(undefined4 *)(param_3 + 0x58) = *local_140;
        local_138 = local_140;
        pvVar9 = TlsGetValue(DAT_146b8198c);
        if (pvVar9 != (LPVOID)0x0) {
          FUN_14370d800(pvVar9,"Stoutput");
        }
        plVar1 = (longlong *)(param_3 + 0x18);
        FUN_143841b30(local_188,iVar16,0,plVar1,CONCAT44(uVar18,0x7fffffff));
        FUN_1438afb50(local_198,plVar1,param_3 + 0x28);
        pfVar3 = *(float **)(param_2 + 0x30);
        local_378 = *pfVar3;
        fStack_374 = pfVar3[1];
        fStack_370 = pfVar3[2];
        fStack_36c = pfVar3[3];
        if (iVar8 != 1) {
          if (*(int *)(param_3 + 0x20) != 0) {
            uVar11 = *(uint *)(*plVar1 + (longlong)(*(int *)(param_3 + 0x20) + -1) * 4);
            lVar4 = *(longlong *)
                     ((ulonglong)(uVar11 >> 0x16) * 0x100 + 8 + *(longlong *)(param_1 + 0x38));
            FUN_142fbd3f0(lVar4,*(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x18) +
                                (ulonglong)(uVar11 & 0x3fffff) * 0x18,&local_368);
            local_378 = ((float)local_358 + (float)local_368) * _DAT_1467f07e0;
            fStack_374 = (local_358._4_4_ + local_368._4_4_) * fRam00000001467f07e4;
            fStack_370 = (fStack_350 + (float)uStack_360) * fRam00000001467f07e8;
            fStack_36c = (fStack_34c + uStack_360._4_4_) * fRam00000001467f07ec;
          }
        }
        else {
          pfVar3 = pfVar3 + (longlong)*(int *)(param_3 + 0x54) * 4;
          local_378 = *pfVar3;
          fStack_374 = pfVar3[1];
          fStack_370 = pfVar3[2];
          fStack_36c = pfVar3[3];
        }
        iVar16 = *(int *)(param_3 + 0x20) + 1;
        uVar10 = FUN_143703a50();
        uVar11 = *(uint *)(param_3 + 0x44) & 0x3fffffff;
        if ((int)uVar11 < iVar16) {
          iVar7 = uVar11 * 2;
          if (iVar16 < iVar7) {
            iVar16 = iVar7;
          }
          FUN_14370c310(uVar10,param_3 + 0x38,iVar16,0x30);
        }
        thunk_FUN_143719c70(0x9db05698);
        FUN_1438b0360(param_1,plVar1,param_3 + 0x28,*(undefined4 *)(param_2 + 0x40),param_2 + 0x20,
                      &local_378,param_3 + 0x38,0,0);
      }
    }
    else {
      FUN_143875340(param_1,param_2,param_3,fVar14,local_res18,iVar7);
    }
    uVar10 = FUN_143703a50();
    FUN_14376d4c0(local_78,uVar10);
    local_398 = 0;
    if (-1 < (int)local_394) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_3a0,1,local_394 & 0x3fffffff);
    }
    local_3a0 = 0;
    local_394 = 0x80000000;
    local_3a8 = 0;
    if (-1 < (int)local_3a4) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_3b0,1,local_3a4 & 0x3fffffff);
    }
    local_3b0 = 0;
    local_3a4 = 0x80000000;
    if (local_388 != (LPVOID)0x0) {
      FUN_14370d7a0(local_388,&DAT_145b8dd34);
    }
  }
  else {
    FUN_143875340(param_1,param_2,param_3,fVar14,iVar16,iVar7);
  }
  return;
}



// FUNCTION 143875c90 FUN_143875c90 body=22 status=ok
// SIG undefined FUN_143875c90(void)

void FUN_143875c90(longlong param_1,undefined8 param_2)

{
  FUN_143843ba0(param_1 + 0x9c,param_2,param_1 + 0xb0,0);
  return;
}



// FUNCTION 143875cb0 FUN_143875cb0 body=230 status=ok
// SIG undefined FUN_143875cb0(void)

void FUN_143875cb0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] < (int)param_2[1]) {
    lVar8 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar8;
    lVar8 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar8;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  }
  iVar2 = (int)param_2[1];
  lVar9 = (longlong)iVar2;
  lVar8 = *param_2;
  uVar4 = FUN_143703a50();
  uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar7 = (int)param_1[1] + iVar2;
  if (((int)uVar6 < iVar7) && ((int)uVar6 < iVar7)) {
    iVar3 = iVar7;
    if (iVar7 < (int)(uVar6 * 2)) {
      iVar3 = uVar6 * 2;
    }
    FUN_14370c310(uVar4,param_1,iVar3,8);
  }
  puVar5 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (0 < iVar2) {
    lVar8 = lVar8 - (longlong)puVar5;
    do {
      *puVar5 = *(undefined8 *)(lVar8 + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(int *)(param_1 + 1) = iVar7;
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 143875da0 FUN_143875da0 body=281 status=ok
// SIG undefined FUN_143875da0(void)

void FUN_143875da0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((int)param_1[1] < (int)param_2[1]) {
    lVar11 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar11;
    lVar11 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  }
  uVar2 = *(uint *)(param_2 + 1);
  uVar8 = (ulonglong)uVar2;
  lVar11 = *param_2;
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar7 = (int)param_1[1] + uVar2;
  if (((int)uVar5 < iVar7) && ((int)uVar5 < iVar7)) {
    iVar3 = iVar7;
    if (iVar7 < (int)(uVar5 * 2)) {
      iVar3 = uVar5 * 2;
    }
    FUN_14370c310(uVar4,param_1,iVar3,0x38);
  }
  lVar6 = (longlong)(int)param_1[1] * 0x38 + *param_1;
  if (0 < (int)uVar2) {
    lVar11 = lVar11 - lVar6;
    do {
      if (lVar6 != 0) {
        FUN_1438766e0(lVar6,lVar11 + lVar6);
      }
      lVar6 = lVar6 + 0x38;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar7;
  iVar7 = (int)param_2[1] + -1;
  if (-1 < iVar7) {
    plVar9 = (longlong *)((longlong)iVar7 * 0x38 + *param_2);
    plVar10 = plVar9;
    do {
      (**(code **)(*plVar10 + 8))(plVar9,0);
      plVar9 = plVar9 + -7;
      plVar10 = plVar10 + -7;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 143875ec0 FUN_143875ec0 body=281 status=ok
// SIG undefined FUN_143875ec0(void)

void FUN_143875ec0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((int)param_1[1] < (int)param_2[1]) {
    lVar11 = *param_1;
    *param_1 = *param_2;
    *param_2 = lVar11;
    lVar11 = param_1[1];
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  }
  uVar2 = *(uint *)(param_2 + 1);
  uVar8 = (ulonglong)uVar2;
  lVar11 = *param_2;
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  iVar7 = (int)param_1[1] + uVar2;
  if (((int)uVar5 < iVar7) && ((int)uVar5 < iVar7)) {
    iVar3 = iVar7;
    if (iVar7 < (int)(uVar5 * 2)) {
      iVar3 = uVar5 * 2;
    }
    FUN_14370c310(uVar4,param_1,iVar3,0x38);
  }
  lVar6 = (longlong)(int)param_1[1] * 0x38 + *param_1;
  if (0 < (int)uVar2) {
    lVar11 = lVar11 - lVar6;
    do {
      if (lVar6 != 0) {
        FUN_143876770(lVar6,lVar11 + lVar6);
      }
      lVar6 = lVar6 + 0x38;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar7;
  iVar7 = (int)param_2[1] + -1;
  if (-1 < iVar7) {
    plVar9 = (longlong *)((longlong)iVar7 * 0x38 + *param_2);
    plVar10 = plVar9;
    do {
      (**(code **)(*plVar10 + 8))(plVar9,0);
      plVar9 = plVar9 + -7;
      plVar10 = plVar10 + -7;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}



// FUNCTION 143875fe0 FUN_143875fe0 body=262 status=ok
// SIG undefined FUN_143875fe0(void)

void FUN_143875fe0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  
  iVar7 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      if ((byte)(*(char *)(*(longlong *)(*param_1 + lVar6 * 8) + 0x20) - 2U) < 2) {
        if (*(longlong *)(*param_1 + lVar6 * 8) != 0) {
          FUN_14370c150();
        }
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        if ((int)param_1[1] != iVar7) {
          *(undefined8 *)(*param_1 + lVar6 * 8) =
               *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
        }
      }
      iVar7 = iVar7 + -1;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  iVar7 = (int)param_2[1] + (int)param_1[1];
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar4 < iVar7) {
    iVar2 = uVar4 * 2;
    if (iVar7 < iVar2) {
      iVar7 = iVar2;
    }
    FUN_14370c310(uVar3,param_2,iVar7,0x10);
  }
  plVar8 = (longlong *)*param_1;
  plVar1 = plVar8 + (int)param_1[1];
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar6 = *plVar8;
    if (*(char *)(lVar6 + 0x20) == '\0') {
      plVar5 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      *(undefined4 *)(plVar5 + 1) = param_3;
      *(undefined4 *)((longlong)plVar5 + 0xc) = *(undefined4 *)(lVar6 + 0x1c);
      *plVar5 = lVar6;
    }
  }
  return;
}



// FUNCTION 1438760f0 FUN_1438760f0 body=307 status=ok
// SIG undefined FUN_1438760f0(void)

void FUN_1438760f0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar7 = (int)param_1[1] + -1;
  lVar9 = (longlong)iVar7;
  if (-1 < iVar7) {
    lVar8 = lVar9 * 0x38;
    do {
      plVar5 = (longlong *)(*param_1 + lVar8);
      if (*(char *)((longlong)plVar5 + 0x35) != '\0') {
        (**(code **)(*plVar5 + 8))(plVar5,0);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        if ((int)param_1[1] != iVar7) {
          lVar6 = 7;
          puVar2 = (undefined8 *)(lVar8 + *param_1);
          lVar10 = ((longlong)(int)param_1[1] * 0x38 + *param_1) - (longlong)puVar2;
          do {
            *puVar2 = *(undefined8 *)(lVar10 + (longlong)puVar2);
            puVar2 = puVar2 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      iVar7 = iVar7 + -1;
      lVar8 = lVar8 + -0x38;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  iVar7 = (int)param_1[1] + (int)param_2[1];
  uVar3 = FUN_143703a50();
  uVar4 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar4 < iVar7) {
    iVar1 = uVar4 * 2;
    if (iVar7 < iVar1) {
      iVar7 = iVar1;
    }
    FUN_14370c310(uVar3,param_2,iVar7,0x10);
  }
  iVar7 = 0;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar9 + 0x20 + *param_1) == 0) {
        plVar5 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *param_2);
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        *(undefined4 *)(plVar5 + 1) = param_3;
        *(undefined4 *)((longlong)plVar5 + 0xc) = *(undefined4 *)(lVar9 + 0x30 + *param_1);
        *plVar5 = (longlong)iVar7 * 0x38 + *param_1;
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 0x38;
    } while (iVar7 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 143876230 FUN_143876230 body=314 status=ok
// SIG undefined FUN_143876230(void)

void FUN_143876230(longlong param_1,int param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int *piVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  
  uVar15 = (ulonglong)param_3;
  uVar21 = (ulonglong)param_2;
  uVar19 = uVar21;
  uVar20 = uVar15;
  do {
    uVar17 = uVar15 & 0xffffffff;
    uVar14 = uVar21 & 0xffffffff;
    iVar5 = *(int *)(param_1 + ((longlong)((int)uVar21 + (int)uVar15) >> 1) * 0x10 + 0xc);
    uVar11 = uVar20;
    uVar18 = uVar19;
    do {
      uVar13 = (uint)uVar14;
      uVar16 = (uint)uVar17;
      piVar12 = (int *)(param_1 + 0xc + uVar18 * 0x10);
      iVar4 = *piVar12;
      while (iVar5 < iVar4) {
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        piVar12 = piVar12 + 4;
        uVar18 = uVar18 + 1;
        iVar4 = *piVar12;
      }
      piVar12 = (int *)(param_1 + 0xc + uVar11 * 0x10);
      iVar4 = *piVar12;
      while (iVar4 < iVar5) {
        uVar16 = (int)uVar17 - 1;
        uVar17 = (ulonglong)uVar16;
        piVar12 = piVar12 + -4;
        uVar11 = uVar11 - 1;
        iVar4 = *piVar12;
      }
      if ((longlong)uVar11 < (longlong)uVar18) break;
      if (uVar11 != uVar18) {
        puVar1 = (undefined8 *)(param_1 + uVar11 * 0x10);
        uVar9 = *puVar1;
        uVar10 = puVar1[1];
        puVar2 = (undefined4 *)(param_1 + uVar18 * 0x10);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)(param_1 + uVar11 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
        puVar1 = (undefined8 *)(param_1 + uVar18 * 0x10);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
      }
      uVar16 = uVar16 - 1;
      uVar17 = (ulonglong)uVar16;
      uVar11 = uVar11 - 1;
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 <= (longlong)uVar11);
    if (((int)uVar21 < (int)uVar16) && (param_4 <= (int)uVar16)) {
      uVar15 = (ulonglong)uVar16;
      uVar20 = uVar11;
    }
    else {
      if (((int)uVar15 <= (int)uVar13) || (param_4 <= (int)uVar13)) {
        return;
      }
      uVar21 = (ulonglong)uVar13;
      uVar19 = uVar18;
    }
  } while( true );
}



// FUNCTION 143876370 FUN_143876370 body=607 status=ok
// SIG undefined FUN_143876370(void)

void FUN_143876370(longlong param_1,uint param_2,uint param_3,code *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint local_res8;
  uint local_res10;
  longlong local_60;
  undefined4 local_38 [2];
  longlong local_30;
  
  uVar6 = (ulonglong)(int)param_2;
  local_30 = 0;
  uVar10 = uVar6;
  local_res10 = param_2;
  do {
    local_60 = (longlong)(int)param_3;
    local_res8 = (uint)uVar6;
    uVar6 = uVar6 & 0xffffffff;
    puVar7 = (undefined4 *)(((longlong)(int)(local_res8 + param_3) >> 1) * 0x10 + param_1);
    local_38[0] = *puVar7;
    if (*(longlong *)(puVar7 + 2) != 0) {
      FUN_14370c030();
    }
    if (local_30 != 0) {
      FUN_14370c150(local_30);
    }
    local_30 = *(longlong *)(puVar7 + 2);
    uVar11 = param_3;
    do {
      uVar9 = (uint)uVar6;
      cVar5 = (*param_4)((longlong)(int)uVar9 * 0x10 + param_1,local_38);
      uVar4 = local_res8;
      while (cVar5 != '\0') {
        uVar9 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar9;
        uVar10 = uVar10 + 1;
        cVar5 = (*param_4)((longlong)(int)uVar9 * 0x10 + param_1,local_38);
        uVar4 = uVar9;
      }
      cVar5 = (*param_4)(local_38,(longlong)(int)uVar11 * 0x10 + param_1);
      local_res8 = uVar9;
      while (cVar5 != '\0') {
        uVar11 = uVar11 - 1;
        local_60 = local_60 + -1;
        cVar5 = (*param_4)(local_38,(longlong)(int)uVar11 * 0x10 + param_1);
        local_res8 = uVar4;
      }
      if ((int)uVar11 < (int)local_res8) break;
      if (uVar11 != local_res8) {
        puVar8 = (undefined4 *)(local_60 * 0x10 + param_1);
        puVar7 = (undefined4 *)(uVar10 * 0x10 + param_1);
        uVar1 = *puVar8;
        uVar2 = *(undefined8 *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
        *puVar8 = *puVar7;
        uVar3 = *(undefined8 *)(puVar7 + 2);
        *(undefined8 *)(puVar7 + 2) = 0;
        if (*(longlong *)(puVar8 + 2) != 0) {
          FUN_14370c150(*(longlong *)(puVar8 + 2));
        }
        *(undefined8 *)(puVar8 + 2) = uVar3;
        *puVar7 = uVar1;
        if (*(longlong *)(puVar7 + 2) != 0) {
          FUN_14370c150(*(longlong *)(puVar7 + 2));
        }
        *(undefined8 *)(puVar7 + 2) = uVar2;
      }
      local_60 = local_60 + -1;
      uVar11 = uVar11 - 1;
      local_res8 = local_res8 + 1;
      uVar6 = (ulonglong)local_res8;
      uVar10 = uVar10 + 1;
    } while ((int)local_res8 <= (int)uVar11);
    if ((int)local_res10 < (int)uVar11) {
      FUN_143876370(param_1,local_res10,uVar11,param_4);
    }
    if ((int)param_3 <= (int)local_res8) {
      if (local_30 != 0) {
        FUN_14370c150();
      }
      return;
    }
    uVar6 = (ulonglong)local_res8;
    local_res10 = local_res8;
  } while( true );
}



// FUNCTION 1438765d0 FUN_1438765d0 body=267 status=ok
// SIG undefined FUN_1438765d0(void)

void FUN_1438765d0(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  
  uVar15 = (ulonglong)param_2;
  uVar16 = uVar15;
  do {
    uVar13 = (ulonglong)param_3;
    uVar18 = uVar16 & 0xffffffff;
    puVar1 = (undefined4 *)(param_1 + ((longlong)(param_3 + (int)uVar16) >> 1) * 0x10);
    uVar5 = *puVar1;
    uVar6 = puVar1[2];
    iVar7 = puVar1[3];
    iVar19 = param_3;
    do {
      uVar17 = (uint)uVar18;
      piVar14 = (int *)(param_1 + 0xc + uVar15 * 0x10);
      iVar4 = *piVar14;
      while (iVar7 < iVar4) {
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        piVar14 = piVar14 + 4;
        uVar15 = uVar15 + 1;
        iVar4 = *piVar14;
      }
      piVar14 = (int *)(param_1 + 0xc + uVar13 * 0x10);
      iVar4 = *piVar14;
      while (iVar4 < iVar7) {
        iVar19 = iVar19 + -1;
        piVar14 = piVar14 + -4;
        uVar13 = uVar13 - 1;
        iVar4 = *piVar14;
      }
      if ((longlong)uVar13 < (longlong)uVar15) break;
      if (uVar13 != uVar15) {
        puVar2 = (undefined8 *)(param_1 + uVar13 * 0x10);
        uVar11 = *puVar2;
        uVar12 = puVar2[1];
        puVar1 = (undefined4 *)(param_1 + uVar15 * 0x10);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar3 = (undefined4 *)(param_1 + uVar13 * 0x10);
        *puVar3 = *puVar1;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined8 *)(param_1 + uVar15 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar12;
      }
      iVar19 = iVar19 + -1;
      uVar13 = uVar13 - 1;
      uVar17 = uVar17 + 1;
      uVar18 = (ulonglong)uVar17;
      uVar15 = uVar15 + 1;
    } while ((longlong)uVar15 <= (longlong)uVar13);
    if ((int)uVar16 < iVar19) {
      FUN_1438765d0(param_1,uVar16 & 0xffffffff,iVar19,param_4,uVar5,uVar6);
    }
    if (param_3 <= (int)uVar17) {
      return;
    }
    uVar16 = (ulonglong)uVar17;
  } while( true );
}



// FUNCTION 1438766e0 FUN_1438766e0 body=134 status=ok
// SIG undefined FUN_1438766e0(void)

undefined8 * FUN_1438766e0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshPathRequestInfo::vftable;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
  return param_1;
}



// FUNCTION 143876770 FUN_143876770 body=134 status=ok
// SIG undefined FUN_143876770(void)

undefined8 * FUN_143876770(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavVolumePathRequestInfo::vftable;
  lVar1 = *(longlong *)(param_2 + 0x18);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    FUN_14370c030();
  }
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
  return param_1;
}



// FUNCTION 143876800 FUN_143876800 body=137 status=ok
// SIG undefined FUN_143876800(void)

undefined8 * FUN_143876800(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiPathRequestManager::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  if (lVar2 != 0) {
    uVar3 = FUN_14370d870(lVar2,0);
    param_1[5] = uVar3;
    return param_1;
  }
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143876890 FUN_143876890 body=91 status=ok
// SIG undefined FUN_143876890(void)

undefined8 * FUN_143876890(undefined8 *param_1,undefined1 param_2)

{
  param_1[1] = 0;
  *param_1 = hkaiPathRequestQueue::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined1 *)(param_1 + 3) = param_2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  return param_1;
}



// FUNCTION 1438768f0 FUN_1438768f0 body=211 status=ok
// SIG undefined FUN_1438768f0(void)

void FUN_1438768f0(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[5];
  *param_1 = hkaiPathRequestManager::vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FWindowsCriticalSection::~FWindowsCriticalSection(lpCriticalSection);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lpCriticalSection,0x28);
  }
  uVar3 = FUN_143703a50();
  lVar1 = param_1[3];
  lVar4 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar3,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438769d0 FUN_1438769d0 body=489 status=ok
// SIG undefined FUN_1438769d0(void)

void FUN_1438769d0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = hkaiPathRequestQueue::vftable;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[10];
  lVar6 = (longlong)(*(int *)(param_1 + 0xb) + -1);
  if (-1 < *(int *)(param_1 + 0xb) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar2,param_1[10],8,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[8];
  lVar6 = (longlong)(*(int *)(param_1 + 9) + -1);
  if (-1 < *(int *)(param_1 + 9) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    FUN_143702e10(uVar2,param_1[8],8,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  uVar2 = FUN_143703a50();
  iVar5 = *(int *)(param_1 + 7) + -1;
  if (-1 < iVar5) {
    plVar3 = (longlong *)((longlong)iVar5 * 0x38 + param_1[6]);
    plVar4 = plVar3;
    do {
      (**(code **)(*plVar4 + 8))(plVar3,0);
      plVar3 = plVar3 + -7;
      plVar4 = plVar4 + -7;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar2,param_1[6],0x38,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar2 = FUN_143703a50();
  iVar5 = *(int *)(param_1 + 5) + -1;
  if (-1 < iVar5) {
    plVar3 = (longlong *)((longlong)iVar5 * 0x38 + param_1[4]);
    plVar4 = plVar3;
    do {
      (**(code **)(*plVar4 + 8))(plVar3,0);
      plVar3 = plVar3 + -7;
      plVar4 = plVar4 + -7;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar2,param_1[4],0x38,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143876bc0 FUN_143876bc0 body=191 status=ok
// SIG undefined FUN_143876bc0(void)

void FUN_143876bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *param_2;
  if (lVar1 != param_2[1]) {
    iVar3 = (int)(param_2[1] - lVar1 >> 4);
    if (1 < iVar3) {
      FUN_143876370(lVar1,0,iVar3 + -1,&LAB_1433cbbf0);
    }
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
    EnterCriticalSection(lpCriticalSection);
    lVar1 = param_2[1];
    for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
      lVar2 = *(longlong *)(lVar4 + 8);
      if (lVar2 != 0) {
        FUN_14370c030(lVar2);
        FUN_143878130(*(undefined8 *)
                       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(lVar2 + 0x18) * 8),
                      lVar2);
        FUN_14370c150(lVar2);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 143876c80 FUN_143876c80 body=191 status=ok
// SIG undefined FUN_143876c80(void)

void FUN_143876c80(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *param_2;
  if (lVar1 != param_2[1]) {
    iVar3 = (int)(param_2[1] - lVar1 >> 4);
    if (1 < iVar3) {
      FUN_143876370(lVar1,0,iVar3 + -1,&LAB_1433cbbf0);
    }
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
    EnterCriticalSection(lpCriticalSection);
    lVar1 = param_2[1];
    for (lVar4 = *param_2; lVar4 != lVar1; lVar4 = lVar4 + 0x10) {
      lVar2 = *(longlong *)(lVar4 + 8);
      if (lVar2 != 0) {
        FUN_14370c030(lVar2);
        FUN_1438781b0(*(undefined8 *)
                       (*(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(lVar2 + 0x18) * 8),
                      lVar2);
        FUN_14370c150(lVar2);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 143876d40 FUN_143876d40 body=65 status=ok
// SIG undefined FUN_143876d40(void)

void FUN_143876d40(longlong param_1,longlong param_2)

{
  FUN_143875da0(param_1 + 0x20,param_2 + 0x20);
  FUN_143875ec0(param_1 + 0x30,param_2 + 0x30);
  FUN_143875cb0(param_1 + 0x40,param_2 + 0x40);
  return;
}



// FUNCTION 143876d90 FUN_143876d90 body=243 status=ok
// SIG undefined FUN_143876d90(void)

byte * FUN_143876d90(longlong param_1,byte *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  *param_2 = 0xff;
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    uVar9 = uVar7;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar9 * 8) == 0) {
        *param_2 = (byte)uVar9;
        if ((byte)uVar9 != 0xff) goto LAB_143876e1c;
        break;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar3);
  }
  *param_2 = (byte)iVar3;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    FUN_14370c460(uVar4,(longlong *)(param_1 + 0x18),8);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x20) * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
LAB_143876e1c:
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  lVar6 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar5 + 0x58),0x60);
  if (lVar6 != 0) {
    uVar7 = FUN_143876890(lVar6,*param_2);
  }
  bVar2 = *param_2;
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar6 + (ulonglong)bVar2 * 8) != 0) {
    FUN_14370c150();
  }
  *(ulonglong *)(lVar6 + (ulonglong)bVar2 * 8) = uVar7;
  return param_2;
}



// FUNCTION 143876e90 FUN_143876e90 body=33 status=ok
// SIG undefined FUN_143876e90(void)

void FUN_143876e90(longlong param_1,char param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = *(char *)(param_1 + 0x20);
  do {
    if ((param_2 == '\0') && (cVar2 != '\0')) {
      return;
    }
    LOCK();
    cVar1 = *(char *)(param_1 + 0x20);
    bVar3 = cVar2 == cVar1;
    if (bVar3) {
      *(char *)(param_1 + 0x20) = '\x03';
      cVar1 = cVar2;
    }
    cVar2 = cVar1;
    UNLOCK();
  } while (!bVar3);
  return;
}



// FUNCTION 143876ec0 FUN_143876ec0 body=78 status=ok
// SIG undefined FUN_143876ec0(void)

longlong FUN_143876ec0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = puVar3 + *(int *)(param_1 + 0x20);
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    lVar2 = FUN_143876f10(*puVar3,param_2);
    if (lVar2 != 0) break;
    puVar3 = puVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 143876f10 FUN_143876f10 body=46 status=ok
// SIG undefined FUN_143876f10(void)

longlong FUN_143876f10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if ((*(longlong *)(lVar1 + 0x28) == param_2) && (*(char *)(lVar1 + 0x35) == '\0')) break;
    lVar1 = lVar1 + 0x38;
  }
  *(undefined1 *)(lVar1 + 0x35) = 1;
  return lVar1;
}



// FUNCTION 143876f40 FUN_143876f40 body=78 status=ok
// SIG undefined FUN_143876f40(void)

longlong FUN_143876f40(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = puVar3 + *(int *)(param_1 + 0x20);
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    lVar2 = FUN_143876f90(*puVar3,param_2);
    if (lVar2 != 0) break;
    puVar3 = puVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 143876f90 FUN_143876f90 body=46 status=ok
// SIG undefined FUN_143876f90(void)

longlong FUN_143876f90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if ((*(longlong *)(lVar1 + 0x28) == param_2) && (*(char *)(lVar1 + 0x35) == '\0')) break;
    lVar1 = lVar1 + 0x38;
  }
  *(undefined1 *)(lVar1 + 0x35) = 1;
  return lVar1;
}



// FUNCTION 143876fc0 FUN_143876fc0 body=527 status=ok
// SIG undefined FUN_143876fc0(void)

ulonglong * FUN_143876fc0(longlong param_1,ulonglong *param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  lVar6 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar5 + 0x58),0x30);
  uVar13 = 0;
  uVar7 = uVar13;
  if (lVar6 != 0) {
    uVar7 = FUN_143876800(lVar6);
  }
  *param_2 = uVar7;
  iVar3 = *(int *)(param_1 + 0x20);
  uVar8 = FUN_143703a50();
  uVar11 = *(uint *)(uVar7 + 0x24) & 0x3fffffff;
  if ((int)uVar11 < iVar3) {
    iVar4 = uVar11 * 2;
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(uVar8,uVar7 + 0x18,iVar3,8);
  }
  uVar7 = uVar13;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      uVar11 = (uint)uVar7;
      lVar6 = (longlong)(int)uVar11 * 8;
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar6) == 0) {
        uVar7 = *param_2;
        puVar2 = (undefined8 *)(*(longlong *)(uVar7 + 0x18) + (longlong)*(int *)(uVar7 + 0x20) * 8);
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
        }
        *(int *)(uVar7 + 0x20) = *(int *)(uVar7 + 0x20) + 1;
      }
      else if ((param_3 >> (uVar11 & 0x1f) & 1) == 0) {
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        lVar6 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar5 + 0x58),0x60);
        uVar10 = uVar13;
        if (lVar6 != 0) {
          uVar10 = FUN_143876890(lVar6,uVar7 & 0xff);
        }
        uVar7 = *param_2;
        puVar12 = (ulonglong *)(*(longlong *)(uVar7 + 0x18) + (longlong)*(int *)(uVar7 + 0x20) * 8);
        if ((puVar12 != (ulonglong *)0x0) && (*puVar12 = uVar10, uVar10 != 0)) {
          FUN_14370c030(uVar10);
        }
        *(int *)(uVar7 + 0x20) = *(int *)(uVar7 + 0x20) + 1;
        if (uVar10 != 0) {
          FUN_14370c150(uVar10);
        }
      }
      else {
        uVar10 = *param_2;
        plVar1 = (longlong *)(*(longlong *)(uVar10 + 0x18) + (longlong)*(int *)(uVar10 + 0x20) * 8);
        if ((plVar1 != (longlong *)0x0) &&
           (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar6), *plVar1 = lVar9,
           lVar9 != 0)) {
          FUN_14370c030();
        }
        *(int *)(uVar10 + 0x20) = *(int *)(uVar10 + 0x20) + 1;
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        lVar9 = (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar5 + 0x58),0x60);
        uVar10 = uVar13;
        if (lVar9 != 0) {
          uVar10 = FUN_143876890(lVar9,uVar7 & 0xff);
        }
        puVar12 = (ulonglong *)(lVar6 + *(longlong *)(param_1 + 0x18));
        if (*puVar12 != 0) {
          FUN_14370c150();
        }
        *puVar12 = uVar10;
      }
      uVar7 = (ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < *(int *)(param_1 + 0x20));
  }
  return param_2;
}



// FUNCTION 1438771d0 FUN_1438771d0 body=78 status=ok
// SIG undefined FUN_1438771d0(void)

longlong FUN_1438771d0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = puVar3 + *(int *)(param_1 + 0x20);
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    lVar2 = thunk_FUN_143877230(*puVar3,param_2);
    if (lVar2 != 0) break;
    puVar3 = puVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 143877220 thunk_FUN_143877230 body=5 status=ok
// SIG undefined thunk_FUN_143877230(void)

longlong thunk_FUN_143877230(longlong param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtlinearSearch");
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    if ((*(longlong *)(lVar3 + 0x28) == param_2) && (*(char *)(lVar3 + 0x35) == '\0'))
    goto LAB_143877298;
  }
  lVar3 = 0;
LAB_143877298:
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return lVar3;
}



// FUNCTION 143877230 FUN_143877230 body=148 status=ok
// SIG undefined FUN_143877230(void)

longlong FUN_143877230(longlong param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtlinearSearch");
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    if ((*(longlong *)(lVar3 + 0x28) == param_2) && (*(char *)(lVar3 + 0x35) == '\0'))
    goto LAB_143877298;
  }
  lVar3 = 0;
LAB_143877298:
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return lVar3;
}



// FUNCTION 1438772d0 FUN_1438772d0 body=78 status=ok
// SIG undefined FUN_1438772d0(void)

longlong FUN_1438772d0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = puVar3 + *(int *)(param_1 + 0x20);
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    lVar2 = thunk_FUN_143877330(*puVar3,param_2);
    if (lVar2 != 0) break;
    puVar3 = puVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 143877320 thunk_FUN_143877330 body=5 status=ok
// SIG undefined thunk_FUN_143877330(void)

longlong thunk_FUN_143877330(longlong param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtlinearSearch");
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    if ((*(longlong *)(lVar3 + 0x28) == param_2) && (*(char *)(lVar3 + 0x35) == '\0'))
    goto LAB_143877398;
  }
  lVar3 = 0;
LAB_143877398:
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return lVar3;
}



// FUNCTION 143877330 FUN_143877330 body=148 status=ok
// SIG undefined FUN_143877330(void)

longlong FUN_143877330(longlong param_1,longlong param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  longlong lVar3;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtlinearSearch");
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + lVar3;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0x38) {
    if ((*(longlong *)(lVar3 + 0x28) == param_2) && (*(char *)(lVar3 + 0x35) == '\0'))
    goto LAB_143877398;
  }
  lVar3 = 0;
LAB_143877398:
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return lVar3;
}



// FUNCTION 1438773d0 hasPathRequests body=79 status=ok
// SIG undefined hasPathRequests(void)

ulonglong hkaiPathRequestManager::hasPathRequests(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x20);
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      if (param_2 == 0) break;
      if ((param_2 & 1) != 0) {
        uVar3 = *(ulonglong *)(param_1 + 0x18);
        lVar1 = *(longlong *)(uVar3 + lVar4 * 8);
        if ((lVar1 != 0) &&
           ((((*(int *)(lVar1 + 0x28) != 0 || (*(int *)(lVar1 + 0x38) != 0)) ||
             (*(int *)(lVar1 + 0x48) != 0)) || (*(int *)(lVar1 + 0x58) != 0)))) {
          return CONCAT71((int7)(uVar3 >> 8),1);
        }
      }
      lVar4 = lVar4 + 1;
      param_2 = param_2 >> 1;
    } while (lVar4 < (longlong)uVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 143877420 FUN_143877420 body=95 status=ok
// SIG undefined FUN_143877420(void)

void FUN_143877420(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar1 = 0;
    do {
      if (param_2 == 0) {
        return;
      }
      if (((param_2 & 1) != 0) && (*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x18)) != 0)) {
        FUN_143877480();
      }
      iVar2 = iVar2 + 1;
      param_2 = param_2 >> 1;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 143877480 FUN_143877480 body=144 status=ok
// SIG undefined FUN_143877480(void)

void FUN_143877480(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x38) {
    *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar4 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + lVar3;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x38) {
    *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
  plVar1 = plVar2 + *(int *)(param_1 + 0x48);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    *(int *)(*plVar2 + 0x1c) = *(int *)(*plVar2 + 0x1c) + 1;
  }
  plVar2 = *(longlong **)(param_1 + 0x50);
  plVar1 = plVar2 + *(int *)(param_1 + 0x58);
  for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
    *(int *)(*plVar2 + 0x1c) = *(int *)(*plVar2 + 0x1c) + 1;
  }
  return;
}



// FUNCTION 143877510 FUN_143877510 body=173 status=ok
// SIG undefined FUN_143877510(void)

void FUN_143877510(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x18);
      lVar2 = *(longlong *)(lVar1 + uVar4);
      if (lVar2 != 0) {
        if ((((*(int *)(lVar2 + 0x28) == 0) && (*(int *)(lVar2 + 0x38) == 0)) &&
            (*(int *)(lVar2 + 0x48) == 0)) && (*(int *)(lVar2 + 0x58) == 0)) {
          uVar3 = *(undefined8 *)(uVar4 + *(longlong *)(param_2 + 0x18));
          *(undefined8 *)(uVar4 + *(longlong *)(param_2 + 0x18)) = 0;
          if (*(longlong *)(lVar1 + uVar4) != 0) {
            FUN_14370c150();
          }
          *(undefined8 *)(lVar1 + uVar4) = uVar3;
        }
        else {
          FUN_143876d40(lVar2,*(undefined8 *)(*(longlong *)(param_2 + 0x18) + uVar4));
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1438775c0 FUN_1438775c0 body=300 status=ok
// SIG undefined FUN_1438775c0(void)

void FUN_1438775c0(longlong param_1,uint param_2,int param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res18;
  
  uVar5 = (ulonglong)param_3;
  iVar4 = (int)param_5[1];
  if (iVar4 < param_3) {
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x20)) {
      lVar8 = 0;
      uVar7 = 1;
      do {
        lVar1 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x18));
        if ((lVar1 != 0) && ((param_2 & uVar7) != 0)) {
          FUN_1438776f0(lVar1,param_3,param_4,param_5);
        }
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
        lVar8 = lVar8 + 8;
      } while (iVar6 < *(int *)(param_1 + 0x20));
    }
    iVar6 = (int)param_5[1] - iVar4;
    if (1 < iVar6) {
      local_res18 = (undefined1)iVar4;
      FUN_1438765d0((longlong)iVar4 * 0x10 + *param_5,0,iVar6 + -1,local_res18);
    }
    if (param_3 < (int)param_5[1]) {
      piVar3 = (int *)(*param_5 + 0xc + uVar5 * 0x10);
      while (iVar4 = (int)uVar5, param_4 <= *piVar3) {
        uVar5 = (ulonglong)(iVar4 + 1U);
        piVar3 = piVar3 + 4;
        if ((int)param_5[1] <= (int)(iVar4 + 1U)) {
          return;
        }
      }
      uVar2 = FUN_143703a50();
      uVar7 = *(uint *)((longlong)param_5 + 0xc) & 0x3fffffff;
      if ((int)uVar7 < iVar4) {
        uVar7 = uVar7 * 2;
        uVar5 = uVar5 & 0xffffffff;
        if (iVar4 < (int)uVar7) {
          uVar5 = (ulonglong)uVar7;
        }
        FUN_14370c310(uVar2,param_5,uVar5,0x10);
      }
      *(int *)(param_5 + 1) = iVar4;
    }
  }
  return;
}



// FUNCTION 1438776f0 FUN_1438776f0 body=206 status=ok
// SIG undefined FUN_1438776f0(void)

void FUN_1438776f0(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 local_res10;
  
  FUN_1438760f0(param_1 + 0x20,param_4,0);
  FUN_1438760f0(param_1 + 0x30,param_4,2);
  FUN_143875fe0(param_1 + 0x40,param_4,1);
  FUN_143875fe0(param_1 + 0x50,param_4,3);
  iVar1 = *(int *)(param_4 + 1);
  if (param_2 < iVar1) {
    if (((1 < iVar1) && (0 < param_2)) && (param_2 < iVar1)) {
      FUN_143876230(*param_4,0,iVar1 + -1,param_2,local_res10);
    }
    uVar3 = FUN_143703a50();
    uVar4 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
    if ((int)uVar4 < param_2) {
      iVar2 = uVar4 * 2;
      iVar1 = param_2;
      if (param_2 < iVar2) {
        iVar1 = iVar2;
      }
      FUN_14370c310(uVar3,param_4,iVar1,0x10);
    }
    *(int *)(param_4 + 1) = param_2;
  }
  return;
}



// FUNCTION 1438777c0 FUN_1438777c0 body=482 status=ok
// SIG undefined FUN_1438777c0(void)

char FUN_1438777c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  LPVOID pvVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong local_28 [2];
  
  LOCK();
  cVar4 = (char)param_1[4];
  bVar9 = cVar4 == '\0';
  if (bVar9) {
    *(char *)(param_1 + 4) = '\x01';
    cVar4 = '\0';
  }
  UNLOCK();
  if (bVar9) {
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar5 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar5 + 0x58),0x70);
    puVar8 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0x1ffff;
      *puVar6 = hkaiPathfindingUtil::FindPathOutput::vftable;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x24) = 0x80000000;
      puVar6[5] = 0;
      *(undefined4 *)(puVar6 + 6) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x34) = 0x80000000;
      *(undefined4 *)(puVar6 + 8) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x44) = 0xffffffff;
      *(undefined4 *)(puVar6 + 9) = 0x7f7fffee;
      *(undefined2 *)((longlong)puVar6 + 0x4c) = 0;
      puVar6[10] = 0;
      *(undefined4 *)(puVar6 + 0xb) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x5c) = 0x80000000;
      puVar8 = puVar6;
    }
    if (puVar8 != (undefined8 *)param_1[6]) {
      if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      param_1[6] = (longlong)puVar8;
    }
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,local_28,param_2);
    lVar2 = *plVar7;
    *plVar7 = 0;
    if (param_1[5] != 0) {
      FUN_14370c150();
    }
    param_1[5] = lVar2;
    if (local_28[0] != 0) {
      FUN_14370c150();
    }
    thunk_FUN_143719c70(0x12d7a10c);
    if (param_1[5] == 0) {
      lVar2 = param_1[6];
      *(undefined4 *)(lVar2 + 0x44) = 0xffffffff;
      *(undefined4 *)(lVar2 + 0x40) = 0;
      *(undefined1 *)(lVar2 + 0x4c) = 5;
    }
    else {
      FUN_143844150(param_1[5],param_4,param_5);
      *(bool *)(param_1[5] + 0x97) = param_6 != (undefined8 *)0x0;
      FUN_143842ae0(param_1[5]);
      FUN_143842cb0(param_2,param_1[5],param_1[6]);
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1[6]);
      if (param_6 != (undefined8 *)0x0) {
        lVar2 = param_1[6];
        uVar3 = *param_6;
        *param_6 = *(undefined8 *)(lVar2 + 0x50);
        *(undefined8 *)(lVar2 + 0x50) = uVar3;
        uVar1 = *(undefined4 *)(param_6 + 1);
        *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar2 + 0x58);
        *(undefined4 *)(lVar2 + 0x58) = uVar1;
        uVar1 = *(undefined4 *)((longlong)param_6 + 0xc);
        *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)(lVar2 + 0x5c);
        *(undefined4 *)(lVar2 + 0x5c) = uVar1;
        *param_7 = *(undefined1 *)(param_1[6] + 0x60);
      }
    }
    LOCK();
    cVar4 = (char)param_1[4];
    if (cVar4 == '\x01') {
      *(char *)(param_1 + 4) = '\x02';
      cVar4 = '\x01';
    }
    UNLOCK();
  }
  return cVar4;
}



// FUNCTION 1438779b0 FUN_1438779b0 body=398 status=ok
// SIG undefined FUN_1438779b0(void)

char FUN_1438779b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong local_28 [2];
  
  thunk_FUN_143719c70(0xd6e89f9e);
  LOCK();
  cVar2 = (char)param_1[4];
  bVar7 = cVar2 == '\0';
  if (bVar7) {
    *(char *)(param_1 + 4) = '\x01';
    cVar2 = '\0';
  }
  UNLOCK();
  if (bVar7) {
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    puVar4 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar3 + 0x58),0x60);
    puVar6 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0x1ffff;
      *puVar4 = hkaiVolumePathfindingUtil::FindPathOutput::vftable;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0x80000000;
      puVar4[5] = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x34) = 0x80000000;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x44) = 0x80000000;
      *(undefined4 *)(puVar4 + 10) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x54) = 0xffffffff;
      *(undefined4 *)(puVar4 + 0xb) = 0x7f7fffee;
      *(undefined2 *)((longlong)puVar4 + 0x5c) = 0;
      puVar6 = puVar4;
    }
    if (puVar6 != (undefined8 *)param_1[6]) {
      if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      param_1[6] = (longlong)puVar6;
    }
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,local_28,param_2);
    lVar1 = *plVar5;
    *plVar5 = 0;
    if (param_1[5] != 0) {
      FUN_14370c150();
    }
    param_1[5] = lVar1;
    if (local_28[0] != 0) {
      FUN_14370c150();
    }
    if (param_1[5] == 0) {
      lVar1 = param_1[6];
      *(undefined4 *)(lVar1 + 0x54) = 0xffffffff;
      *(undefined4 *)(lVar1 + 0x50) = 0;
      *(undefined1 *)(lVar1 + 0x5c) = 5;
    }
    else {
      FUN_143875c90(param_1[5],param_4);
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1[5]);
      thunk_FUN_143719c70(0x18bdab04);
      FUN_143875580(param_2,param_1[5],param_1[6]);
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1[6]);
    }
    LOCK();
    cVar2 = (char)param_1[4];
    if (cVar2 == '\x01') {
      *(char *)(param_1 + 4) = '\x02';
      cVar2 = '\x01';
    }
    UNLOCK();
  }
  return cVar2;
}



// FUNCTION 143877b40 FUN_143877b40 body=613 status=ok
// SIG undefined FUN_143877b40(void)

void FUN_143877b40(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 *param_7)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined **local_f8 [6];
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  uint local_a4;
  int local_a0;
  undefined1 local_61;
  
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar6 + 0x58),0x70);
  puVar9 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    *(undefined4 *)(puVar7 + 2) = 0x1ffff;
    *puVar7 = hkaiPathfindingUtil::FindPathOutput::vftable;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x80000000;
    puVar7[5] = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0x80000000;
    *(undefined4 *)(puVar7 + 8) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x44) = 0xffffffff;
    *(undefined4 *)(puVar7 + 9) = 0x7f7fffee;
    *(undefined2 *)((longlong)puVar7 + 0x4c) = 0;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = 0x80000000;
    puVar9 = puVar7;
  }
  if (puVar9 != *(undefined8 **)(param_1 + 0x20)) {
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0x20) = puVar9;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  if ((plVar2 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2), cVar5 == '\0')) {
    *(undefined4 *)(lVar3 + 0x44) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x40) = 0;
    *(undefined1 *)(lVar3 + 0x4c) = 5;
  }
  else {
    FUN_143841d70(local_f8,0);
    FUN_1438468b0(local_f8,uVar8);
    iVar4 = local_a0;
    if ((-1 < param_3) && (iVar4 = 0x7fffffff, local_a0 < 0x7fffffff)) {
      iVar4 = local_a0;
    }
    local_a0 = iVar4;
    local_61 = param_6 != (undefined8 *)0x0;
    FUN_143844150(local_f8,param_4,param_5);
    FUN_143842ae0(local_f8);
    FUN_143842cb0(param_2,local_f8,lVar3);
    AK::MemoryMgr::StartProfileThreadUsage((long)lVar3);
    if (param_6 != (undefined8 *)0x0) {
      uVar8 = *param_6;
      *param_6 = *(undefined8 *)(lVar3 + 0x50);
      *(undefined8 *)(lVar3 + 0x50) = uVar8;
      uVar1 = *(undefined4 *)(param_6 + 1);
      *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar3 + 0x58);
      *(undefined4 *)(lVar3 + 0x58) = uVar1;
      uVar1 = *(undefined4 *)((longlong)param_6 + 0xc);
      *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)(lVar3 + 0x5c);
      *(undefined4 *)(lVar3 + 0x5c) = uVar1;
      *param_7 = *(undefined1 *)(lVar3 + 0x60);
    }
    local_f8[0] = hkaiPathfindingUtil::FindPathInput::vftable;
    uVar8 = FUN_143703a50();
    local_a8 = 0;
    if (-1 < (int)local_a4) {
      FUN_143702e10(uVar8,local_b0,4,local_a4 & 0x3fffffff);
    }
    local_b0 = 0;
    local_a4 = 0x80000000;
    uVar8 = FUN_143703a50();
    local_c0 = 0;
    if (-1 < (int)local_bc) {
      FUN_143702e10(uVar8,local_c8,0x10,local_bc & 0x3fffffff);
    }
    local_c8 = 0;
    local_bc = 0x80000000;
    FUN_14370c000(local_f8);
  }
  return;
}



// FUNCTION 143877db0 FUN_143877db0 body=501 status=ok
// SIG undefined FUN_143877db0(void)

void FUN_143877db0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined **local_d8 [6];
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  int local_80;
  
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x60);
  puVar7 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0x1ffff;
    *puVar5 = hkaiVolumePathfindingUtil::FindPathOutput::vftable;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0x80000000;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x34) = 0x80000000;
    puVar5[7] = 0;
    *(undefined4 *)(puVar5 + 8) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x44) = 0x80000000;
    *(undefined4 *)(puVar5 + 10) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0xb) = 0x7f7fffee;
    *(undefined2 *)((longlong)puVar5 + 0x5c) = 0;
    puVar7 = puVar5;
  }
  if (puVar7 != *(undefined8 **)(param_1 + 0x20)) {
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      FUN_14370c150();
    }
    *(undefined8 **)(param_1 + 0x20) = puVar7;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
  }
  FUN_143875090(local_d8,0);
  FUN_143846aa0(local_d8,uVar6);
  iVar3 = local_80;
  if ((-1 < param_3) && (iVar3 = 0x7fffffff, local_80 < 0x7fffffff)) {
    iVar3 = local_80;
  }
  local_80 = iVar3;
  FUN_143875c90(local_d8,param_4);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_d8);
  FUN_143875580(param_2,local_d8,uVar2);
  AK::MemoryMgr::StartProfileThreadUsage((long)uVar2);
  local_d8[0] = hkaiVolumePathfindingUtil::FindPathInput::vftable;
  uVar6 = FUN_143703a50();
  local_88 = 0;
  if (-1 < (int)local_84) {
    FUN_143702e10(uVar6,local_90,4,local_84 & 0x3fffffff);
  }
  local_90 = 0;
  local_84 = 0x80000000;
  uVar6 = FUN_143703a50();
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(uVar6,local_a8,0x10,local_9c & 0x3fffffff);
  }
  local_a8 = 0;
  local_9c = 0x80000000;
  FUN_14370c000(local_d8);
  return;
}



// FUNCTION 143877fb0 FUN_143877fb0 body=79 status=ok
// SIG undefined FUN_143877fb0(void)

void FUN_143877fb0(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  FUN_143878130(*(undefined8 *)
                 (*(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(param_2 + 0x18) * 8),param_2)
  ;
                    /* WARNING: Could not recover jumptable at 0x000143877ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 143878000 FUN_143878000 body=79 status=ok
// SIG undefined FUN_143878000(void)

void FUN_143878000(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  FUN_1438781b0(*(undefined8 *)
                 (*(longlong *)(param_1 + 0x18) + (ulonglong)*(byte *)(param_2 + 0x18) * 8),param_2)
  ;
                    /* WARNING: Could not recover jumptable at 0x000143878048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 143878050 FUN_143878050 body=106 status=ok
// SIG undefined FUN_143878050(void)

void FUN_143878050(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined4 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  FUN_143878230(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_4 * 8),param_2,
                param_3,param_5);
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1438780c0 FUN_1438780c0 body=106 status=ok
// SIG undefined FUN_1438780c0(void)

void FUN_1438780c0(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined4 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  FUN_143878340(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_4 * 8),param_2,
                param_3,param_5);
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 143878130 FUN_143878130 body=126 status=ok
// SIG undefined FUN_143878130(void)

void FUN_143878130(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x40,8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 = param_2, param_2 != 0)) {
    FUN_14370c030(param_2);
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  return;
}



// FUNCTION 1438781b0 FUN_1438781b0 body=126 status=ok
// SIG undefined FUN_1438781b0(void)

void FUN_1438781b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x58) == (*(uint *)(param_1 + 0x5c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x50,8);
  }
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 = param_2, param_2 != 0)) {
    FUN_14370c030(param_2);
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if (param_2 != 0) {
    FUN_14370c150(param_2);
  }
  return;
}



// FUNCTION 143878230 FUN_143878230 body=263 status=ok
// SIG undefined FUN_143878230(void)

void FUN_143878230(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + lVar1;
  for (; lVar1 != lVar4; lVar1 = lVar1 + 0x38) {
    if (*(longlong *)(lVar1 + 0x28) == param_2) {
      *(undefined1 *)(lVar1 + 0x35) = 1;
    }
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x20,0x38);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x28) * 0x38 + *(longlong *)(param_1 + 0x20))
  ;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0x1ffff;
    *puVar3 = hkaiNavMeshPathRequestInfo::vftable;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)((longlong)puVar3 + 0x34) = 0xff;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x28) * 0x38 + *(longlong *)(param_1 + 0x20);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar1 + 0x18) = param_3;
  *(undefined4 *)(lVar1 + 0x30) = param_4;
  *(undefined1 *)(lVar1 + 0x34) = *(undefined1 *)(param_1 + 0x18);
  *(longlong *)(lVar1 + 0x28) = param_2;
  return;
}



// FUNCTION 143878340 FUN_143878340 body=263 status=ok
// SIG undefined FUN_143878340(void)

void FUN_143878340(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar4 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + lVar1;
  for (; lVar1 != lVar4; lVar1 = lVar1 + 0x38) {
    if (*(longlong *)(lVar1 + 0x28) == param_2) {
      *(undefined1 *)(lVar1 + 0x35) = 1;
    }
  }
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1 + 0x30,0x38);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x38) * 0x38 + *(longlong *)(param_1 + 0x30))
  ;
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0x1ffff;
    *puVar3 = hkaiNavVolumePathRequestInfo::vftable;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 6) = 0;
    *(undefined2 *)((longlong)puVar3 + 0x34) = 0xff;
  }
  lVar1 = (longlong)*(int *)(param_1 + 0x38) * 0x38 + *(longlong *)(param_1 + 0x30);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar1 + 0x18) = param_3;
  *(undefined4 *)(lVar1 + 0x30) = param_4;
  *(undefined1 *)(lVar1 + 0x34) = *(undefined1 *)(param_1 + 0x18);
  *(longlong *)(lVar1 + 0x28) = param_2;
  return;
}



// FUNCTION 143878450 FUN_143878450 body=14 status=ok
// SIG undefined FUN_143878450(void)

uint * FUN_143878450(uint *param_1,int *param_2,uint *param_3)

{
  *param_1 = *param_2 << 0x16 | *param_3;
  return param_1;
}



// FUNCTION 143878460 FUN_143878460 body=62 status=ok
// SIG undefined FUN_143878460(void)

undefined8 * FUN_143878460(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiEdgePath::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1438784a0 FUN_1438784a0 body=137 status=ok
// SIG undefined FUN_1438784a0(void)

void FUN_1438784a0(longlong param_1)

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
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x90,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143878530 FUN_143878530 body=139 status=ok
// SIG undefined FUN_143878530(void)

longlong FUN_143878530(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438784a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x48;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 1438785c0 FUN_1438785c0 body=94 status=ok
// SIG undefined FUN_1438785c0(void)

longlong FUN_1438785c0(longlong *param_1,int *param_2)

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
      if (*(int *)(*param_1 + (longlong)iVar5 * 4) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 143878620 FUN_143878620 body=1951 status=ok
// SIG undefined FUN_143878620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143878620(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,float *param_5,
                  uint *param_6,uint *param_7,byte *param_8,float param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  float *pfVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint uVar19;
  byte bVar20;
  float *pfVar21;
  byte bVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 in_stack_fffffffffffffe80;
  undefined4 uVar33;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar34;
  undefined8 in_stack_fffffffffffffe98;
  undefined4 uVar35;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 uVar36;
  float local_148 [2];
  uint local_140;
  longlong local_138;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  uVar36 = (undefined4)((ulonglong)in_stack_fffffffffffffea0 >> 0x20);
  uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffe80 >> 0x20);
  lVar34 = *(longlong *)(param_2 + 0x38);
  pfVar21 = (float *)((longlong)(int)param_9 * 0x90 + *(longlong *)(param_1 + 0x18));
  local_128 = FUN_143879720();
  lVar31 = *(longlong *)(*(longlong *)((ulonglong)(param_4 >> 0x16) * 0x100 + lVar34) + 0x18);
  piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar31 + 0x28),*(undefined4 *)(lVar31 + 0x30),
                                 lVar31 + 0xc0,lVar31 + 0xe0,lVar31 + 0x70,
                                 CONCAT44(uVar33,param_4) & 0xffffffff003fffff);
  uVar14 = piVar15[2];
  local_138 = *(longlong *)((longlong)(int)*param_7 * 0x100 + lVar34);
  lVar34 = *(longlong *)(local_138 + 0x18);
  bVar20 = *(byte *)(piVar15 + 4) & 0x40;
  param_9 = (float)*(uint *)(lVar34 + 0x17c);
  if (bVar20 != 0) {
    param_9 = (float)(uVar14 >> 0x16);
  }
  if (uVar14 == 0xffffffff) {
    local_140 = 0xffffffff;
  }
  else {
    local_140 = (uint)param_9;
  }
  if ((bVar20 == 0) && (uVar14 != 0xffffffff)) {
    uVar14 = uVar14 & 0x3fffff;
  }
  uVar19 = piVar15[3];
  if ((bVar20 == 0) && (uVar19 != 0xffffffff)) {
    uVar19 = *(uint *)(lVar34 + 0x17c) << 0x16 | uVar19 & 0x3fffff;
  }
  iVar1 = *piVar15;
  iVar2 = *(int *)(lVar34 + 0x40);
  if (iVar1 < iVar2) {
    pfVar16 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar34 + 0x38));
  }
  else {
    pfVar16 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar34 + 0xf0));
  }
  fVar6 = *pfVar16;
  fVar7 = pfVar16[1];
  fVar8 = pfVar16[2];
  fStack_cc = pfVar16[3];
  iVar1 = piVar15[1];
  if (iVar1 < iVar2) {
    pfVar16 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar34 + 0x38));
  }
  else {
    pfVar16 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar34 + 0xf0));
  }
  fVar9 = *pfVar16;
  fVar10 = pfVar16[1];
  fVar11 = pfVar16[2];
  fStack_dc = pfVar16[3];
  uVar32 = CONCAT44(uVar35,*param_6) & 0xffffffff003fffff;
  local_e8 = fVar9;
  fStack_e4 = fVar10;
  fStack_e0 = fVar11;
  local_d8 = fVar6;
  fStack_d4 = fVar7;
  fStack_d0 = fVar8;
  local_f8 = FUN_14384fb00(*(undefined8 *)(lVar34 + 0x18),*(undefined4 *)(lVar34 + 0x20),
                           lVar34 + 0xb0,lVar34 + 0xd0,*(undefined8 *)(lVar34 + 0x48),lVar34 + 0x120
                           ,lVar34 + 0x140,lVar34 + 0x90,uVar32,
                           CONCAT44(uVar36,*(undefined4 *)(lVar34 + 0x50)),&local_100);
  lVar4 = *(longlong *)(local_138 + 0x18);
  lVar34 = lVar4 + 0x150;
  lVar31 = lVar4 + 0x130;
  uVar17 = FUN_14384fa30(*(undefined8 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x30),lVar4 + 0xc0,
                         lVar4 + 0xe0,*(undefined8 *)(lVar4 + 0x58),lVar31,lVar34,lVar4 + 0x70,
                         CONCAT44((int)(uVar32 >> 0x20),param_4) & 0xffffffff003fffff,
                         *(undefined4 *)(lVar4 + 0x60),&local_108);
  uVar33 = (undefined4)((ulonglong)lVar31 >> 0x20);
  uVar35 = (undefined4)((ulonglong)lVar34 >> 0x20);
  if ((*(byte *)(piVar15 + 4) & 0x10) == 0) {
    local_148[0] = *(float *)(param_1 + 0x40);
    param_9 = *(float *)(param_1 + 0x3c);
    fVar27 = param_9;
    if (param_9 <= local_148[0]) {
      fVar27 = local_148[0];
    }
    auVar25 = ZEXT416((uint)fVar27);
    FUN_14389a790(param_3,*param_6,local_f8,local_100,param_4,uVar17,local_108,fVar27,local_148,
                  &param_9);
    uVar33 = (undefined4)((ulonglong)uVar17 >> 0x20);
    uVar35 = (undefined4)((ulonglong)local_108 >> 0x20);
    fVar27 = *(float *)(param_1 + 0x44);
    fVar30 = fVar27 - local_148[0];
    fVar29 = fVar27 - param_9;
    fVar23 = (fVar9 - fVar6) * (fVar9 - fVar6);
    fVar28 = (fVar10 - fVar7) * (fVar10 - fVar7);
    fVar24 = (fVar11 - fVar8) * (fVar11 - fVar8);
    if (fVar30 <= 0.0) {
      fVar30 = 0.0;
    }
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
    fVar26 = fVar28 + fVar23 + fVar24;
    auVar5._4_4_ = fVar28 + fVar23 + fVar24;
    auVar5._0_4_ = fVar26;
    auVar5._8_4_ = fVar28 + fVar23 + fVar24;
    auVar5._12_4_ = fVar28 + fVar23 + fVar24;
    auVar25 = rsqrtps(auVar25,auVar5);
    fVar23 = auVar25._0_4_;
    fVar23 = (float)(~-(uint)(fVar26 <= 0.0) &
                    (uint)((3.0 - fVar26 * fVar23 * fVar23) * fVar23 * 0.5 * fVar26));
    if (fVar30 + fVar29 <= fVar23) {
      fVar28 = *(float *)(param_1 + 0x3c) - param_9;
      param_9 = *(float *)(param_1 + 0x40) - local_148[0];
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      if (param_9 <= 0.0) {
        param_9 = 0.0;
      }
      if (fVar23 < param_9 + fVar28) {
        fVar24 = *(float *)(param_1 + 0x40) - fVar27;
        fVar27 = *(float *)(param_1 + 0x3c) - fVar27;
        fVar23 = (fVar23 - (fVar30 + fVar29)) / (fVar24 + fVar27);
        fVar28 = fVar23 * fVar27 + fVar29;
        param_9 = fVar23 * fVar24 + fVar30;
      }
    }
    else if (param_9 == local_148[0]) {
      fVar28 = fVar23 * 0.5;
      param_9 = fVar28;
    }
    else {
      fVar23 = fVar23 / (local_148[0] + param_9);
      fVar28 = fVar23 * local_148[0];
      param_9 = fVar23 * param_9;
    }
  }
  else {
    fVar28 = 0.0;
    param_9 = 0.0;
  }
  local_148[0] = -fVar28;
  *pfVar21 = fVar9;
  pfVar21[1] = fVar10;
  pfVar21[2] = fVar11;
  pfVar21[3] = local_148[0];
  pfVar21[4] = fVar6;
  pfVar21[5] = fVar7;
  pfVar21[6] = fVar8;
  pfVar21[7] = param_9;
  fVar6 = param_5[1];
  fVar7 = param_5[2];
  fVar8 = param_5[3];
  pfVar21[8] = *param_5;
  pfVar21[9] = fVar6;
  pfVar21[10] = fVar7;
  pfVar21[0xb] = fVar8;
  if ((*(byte *)(piVar15 + 4) & 0x10) == 0) {
    FUN_1438b2060(pfVar21 + 0x1c,param_9,param_4,*param_6);
  }
  else {
    *(undefined2 *)(pfVar21 + 0x1e) = 0xffff;
    FUN_1438b20f0(pfVar21 + 0x1c,param_2,*param_6);
  }
  *(char *)(pfVar21 + 0x20) = (char)piVar15[4];
  uVar17 = 0;
  pfVar21[0x1f] = 0.0;
  lVar34 = *(longlong *)(local_138 + 0x18);
  if (*(int *)(lVar34 + 0x60) != 0) {
    uVar32 = CONCAT44(uVar33,param_4) & 0xffffffff003fffff;
    uVar17 = FUN_1438360c0(*(undefined8 *)(lVar34 + 0x58),*(undefined4 *)(lVar34 + 0x30),
                           lVar34 + 0x130,lVar34 + 0x150,lVar34 + 0x70,uVar32,
                           CONCAT44(uVar35,*(int *)(lVar34 + 0x60)));
    uVar33 = (undefined4)(uVar32 >> 0x20);
  }
  FUN_14370c700(local_128,uVar17,*(int *)(param_1 + 0x38) << 2);
  bVar20 = *(byte *)(piVar15 + 4);
  uVar3 = *param_7;
  lVar34 = *(longlong *)((longlong)(int)local_140 * 0x100 + *(longlong *)(param_2 + 0x38));
  bVar22 = *(byte *)(*(longlong *)(*(longlong *)(lVar34 + 0x18) + 0x68) + 0x80) & 1;
  if ((*param_8 == 0) && (bVar22 == 0)) {
    local_118 = *param_5;
    fStack_114 = param_5[1];
    fStack_110 = param_5[2];
    fStack_10c = param_5[3];
    bVar12 = false;
  }
  else {
    param_9 = (float)(uVar19 & 0x3fffff);
    FUN_143852420(&local_128,lVar34,&param_9,&local_118);
    bVar12 = true;
  }
  uVar13 = local_140;
  uVar17 = uRam00000001467f0898;
  if (((bVar20 & 0x10) == 0) && (local_140 == uVar3)) {
    if (bVar12) {
      FUN_143879160(&local_e8,param_5,&local_118,pfVar21 + 0xc);
    }
    else {
      *(undefined8 *)(pfVar21 + 0xc) = _DAT_1467f0890;
      *(undefined8 *)(pfVar21 + 0xe) = uVar17;
      uVar17 = uRam00000001467f08a8;
      *(undefined8 *)(pfVar21 + 0x10) = _DAT_1467f08a0;
      *(undefined8 *)(pfVar21 + 0x12) = uVar17;
      uVar17 = uRam00000001467f08b8;
      *(undefined8 *)(pfVar21 + 0x14) = _DAT_1467f08b0;
      *(undefined8 *)(pfVar21 + 0x16) = uVar17;
      uVar17 = _DAT_1467f08c8;
      *(undefined8 *)(pfVar21 + 0x18) = _DAT_1467f08c0;
      *(undefined8 *)(pfVar21 + 0x1a) = uVar17;
    }
  }
  else {
    lVar34 = *(longlong *)(lVar34 + 0x18);
    piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar34 + 0x28),*(undefined4 *)(lVar34 + 0x30),
                                   lVar34 + 0xc0,lVar34 + 0xe0,lVar34 + 0x70,
                                   CONCAT44(uVar33,uVar14) & 0xffffffff003fffff);
    iVar1 = *(int *)(lVar34 + 0x40);
    iVar2 = *piVar15;
    if (iVar2 < iVar1) {
      puVar18 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar34 + 0x38));
    }
    else {
      puVar18 = (undefined8 *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar34 + 0xf0));
    }
    iVar2 = piVar15[1];
    local_f8 = *puVar18;
    uStack_f0 = *(undefined4 *)(puVar18 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar18 + 0xc);
    if (iVar2 < iVar1) {
      puVar18 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar34 + 0x38));
    }
    else {
      puVar18 = (undefined8 *)((longlong)(iVar2 - iVar1) * 0x10 + *(longlong *)(lVar34 + 0xf0));
    }
    local_128 = *puVar18;
    uStack_120 = *(undefined4 *)(puVar18 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar18 + 0xc);
    FUN_143878dc0(&local_e8,&local_d8,param_5,&local_f8,&local_128,&local_118,pfVar21 + 0xc);
  }
  *param_7 = uVar13;
  *param_6 = uVar19;
  *param_8 = bVar22;
  *(ulonglong *)param_5 = CONCAT44(fStack_114,local_118);
  *(ulonglong *)(param_5 + 2) = CONCAT44(fStack_10c,fStack_110);
  return;
}



// FUNCTION 143878dc0 FUN_143878dc0 body=923 status=ok
// SIG undefined FUN_143878dc0(void)

void FUN_143878dc0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar7 = *param_3;
  fVar9 = param_3[1];
  fVar11 = param_3[2];
  fVar4 = param_3[3];
  fVar6 = (*param_2 - *param_1) * fVar7;
  fVar8 = (param_2[1] - param_1[1]) * fVar9;
  fVar10 = (param_2[2] - param_1[2]) * fVar11;
  fStack_130 = *param_6;
  fStack_12c = param_6[1];
  fStack_110 = param_6[2];
  fStack_11c = param_6[3];
  auVar12._0_4_ = (fVar8 + fVar6 + fVar10) * fVar7;
  auVar12._4_4_ = (fVar8 + fVar6 + fVar10) * fVar9;
  auVar12._8_4_ = (fVar8 + fVar6 + fVar10) * fVar11;
  auVar12._12_4_ = (fVar8 + fVar6 + fVar10) * fVar4;
  local_108 = (*param_2 - *param_1) - auVar12._0_4_;
  fStack_104 = (param_2[1] - param_1[1]) - auVar12._4_4_;
  fStack_100 = (param_2[2] - param_1[2]) - auVar12._8_4_;
  fVar6 = local_108 * local_108;
  fVar8 = fStack_104 * fStack_104;
  fVar10 = fStack_100 * fStack_100;
  fVar16 = fVar8 + fVar6 + fVar10;
  fVar17 = fVar8 + fVar6 + fVar10;
  fVar18 = fVar8 + fVar6 + fVar10;
  fVar10 = fVar8 + fVar6 + fVar10;
  auVar13._4_4_ = fVar17;
  auVar13._0_4_ = fVar16;
  auVar13._8_4_ = fVar18;
  auVar13._12_4_ = fVar10;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar6 = auVar13._0_4_;
  fVar8 = auVar13._4_4_;
  fVar19 = auVar13._8_4_;
  fVar20 = auVar13._12_4_;
  fVar24 = (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar16 * fVar6 * fVar6) * fVar6 * 0.5));
  fVar25 = (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar17 * fVar8 * fVar8) * fVar8 * 0.5));
  fVar26 = (float)(~-(uint)(fVar18 <= 0.0) & (uint)((3.0 - fVar18 * fVar19 * fVar19) * fVar19 * 0.5)
                  );
  fVar27 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar10 * fVar20 * fVar20) * fVar20 * 0.5)
                  );
  local_108 = local_108 * fVar24;
  fStack_104 = fStack_104 * fVar25;
  fStack_100 = fStack_100 * fVar26;
  fStack_fc = ((param_2[3] - param_1[3]) - auVar12._12_4_) * fVar27;
  fStack_f0 = fStack_104 * fVar7 - fVar9 * local_108;
  local_f8 = fStack_100 * fVar9 - fVar11 * fStack_104;
  fStack_f4 = local_108 * fVar11 - fVar7 * fStack_100;
  fVar7 = local_f8 * local_f8;
  fVar9 = fStack_f4 * fStack_f4;
  fVar11 = fStack_f0 * fStack_f0;
  fVar28 = fVar9 + fVar7 + fVar11;
  fVar29 = fVar9 + fVar7 + fVar11;
  fVar30 = fVar9 + fVar7 + fVar11;
  fVar11 = fVar9 + fVar7 + fVar11;
  fVar7 = (*param_5 - *param_4) * fStack_130;
  fVar9 = (param_5[1] - param_4[1]) * fStack_12c;
  fVar6 = (param_5[2] - param_4[2]) * fStack_110;
  auVar3._4_4_ = fVar29;
  auVar3._0_4_ = fVar28;
  auVar3._8_4_ = fVar30;
  auVar3._12_4_ = fVar11;
  auVar23 = rsqrtps(in_XMM5,auVar3);
  auVar14._0_4_ = (fVar9 + fVar7 + fVar6) * fStack_130;
  auVar14._4_4_ = (fVar9 + fVar7 + fVar6) * fStack_12c;
  auVar14._8_4_ = (fVar9 + fVar7 + fVar6) * fStack_110;
  auVar14._12_4_ = (fVar9 + fVar7 + fVar6) * fStack_11c;
  fVar31 = (*param_5 - *param_4) - auVar14._0_4_;
  local_128 = (param_5[1] - param_4[1]) - auVar14._4_4_;
  local_118 = (param_5[2] - param_4[2]) - auVar14._8_4_;
  fVar7 = fVar31 * fVar31;
  fVar9 = local_128 * local_128;
  fVar6 = local_118 * local_118;
  fVar20 = fVar9 + fVar7 + fVar6;
  fVar21 = fVar9 + fVar7 + fVar6;
  fVar22 = fVar9 + fVar7 + fVar6;
  fVar6 = fVar9 + fVar7 + fVar6;
  auVar2._4_4_ = fVar21;
  auVar2._0_4_ = fVar20;
  auVar2._8_4_ = fVar22;
  auVar2._12_4_ = fVar6;
  auVar13 = rsqrtps(auVar14,auVar2);
  fVar7 = auVar13._0_4_;
  fVar9 = auVar13._4_4_;
  fVar8 = auVar13._8_4_;
  fVar19 = auVar13._12_4_;
  auVar5._0_4_ = fVar20 * fVar7 * fVar7;
  auVar5._4_4_ = fVar21 * fVar9 * fVar9;
  auVar5._8_4_ = fVar22 * fVar8 * fVar8;
  auVar5._12_4_ = fVar6 * fVar19 * fVar19;
  auVar15._0_4_ = fVar7 * 0.5;
  auVar15._4_4_ = fVar9 * 0.5;
  auVar15._8_4_ = fVar8 * 0.5;
  auVar15._12_4_ = fVar19 * 0.5;
  fVar7 = (float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - auVar5._0_4_) * auVar15._0_4_));
  fVar9 = (float)(~-(uint)(fVar21 <= 0.0) & (uint)((3.0 - auVar5._4_4_) * auVar15._4_4_));
  fVar8 = (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - auVar5._8_4_) * auVar15._8_4_));
  fVar31 = fVar31 * fVar7;
  local_128 = local_128 * fVar9;
  local_118 = local_118 * fVar8;
  fVar7 = fVar7 * fVar20;
  fVar9 = fVar9 * fVar21;
  fVar8 = fVar8 * fVar22;
  fVar6 = (float)(~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - auVar5._12_4_) * auVar15._12_4_)) * fVar6;
  auVar1._4_4_ = fVar9;
  auVar1._0_4_ = fVar7;
  auVar1._8_4_ = fVar8;
  auVar1._12_4_ = fVar6;
  auVar13 = rcpps(auVar5,auVar1);
  fVar22 = (2.0 - fVar7 * auVar13._0_4_) * auVar13._0_4_ * fVar24 * fVar16;
  fVar24 = (2.0 - fVar9 * auVar13._4_4_) * auVar13._4_4_ * fVar25 * fVar17;
  fVar25 = (2.0 - fVar8 * auVar13._8_4_) * auVar13._8_4_ * fVar26 * fVar18;
  fVar26 = (2.0 - fVar6 * auVar13._12_4_) * auVar13._12_4_ * fVar27 * fVar10;
  fStack_114 = local_128 * fStack_130 - fStack_12c * fVar31;
  fVar20 = local_118 * fStack_12c - fStack_110 * local_128;
  fStack_124 = fVar31 * fStack_110 - fStack_130 * local_118;
  fVar7 = fVar20 * fVar20;
  fVar9 = fStack_124 * fStack_124;
  fVar6 = fStack_114 * fStack_114;
  fVar8 = fVar9 + fVar7 + fVar6;
  fVar10 = fVar9 + fVar7 + fVar6;
  fVar19 = fVar9 + fVar7 + fVar6;
  fVar16 = auVar23._0_4_;
  fVar17 = auVar23._4_4_;
  fVar18 = auVar23._8_4_;
  fVar21 = auVar23._12_4_;
  auVar23._4_4_ = fVar10;
  auVar23._0_4_ = fVar8;
  auVar23._8_4_ = fVar19;
  auVar23._12_4_ = fVar9 + fVar7 + fVar6;
  auVar13 = rsqrtps(auVar15,auVar23);
  local_e8 = *(undefined8 *)param_3;
  uStack_e0 = *(undefined8 *)(param_3 + 2);
  local_f8 = (float)(~-(uint)(fVar28 <= 0.0) &
                    (uint)((3.0 - fVar28 * fVar16 * fVar16) * fVar16 * 0.5)) * local_f8;
  fStack_f4 = (float)(~-(uint)(fVar29 <= 0.0) &
                     (uint)((3.0 - fVar29 * fVar17 * fVar17) * fVar17 * 0.5)) * fStack_f4;
  fStack_f0 = (float)(~-(uint)(fVar30 <= 0.0) &
                     (uint)((3.0 - fVar30 * fVar18 * fVar18) * fVar18 * 0.5)) * fStack_f0;
  fStack_ec = (float)(~-(uint)(fVar11 <= 0.0) &
                     (uint)((3.0 - fVar11 * fVar21 * fVar21) * fVar21 * 0.5)) *
              (fStack_fc * fVar4 - fVar4 * fStack_fc);
  fVar7 = auVar13._0_4_;
  fVar9 = auVar13._4_4_;
  fVar11 = auVar13._8_4_;
  fStack_124 = (float)(~-(uint)(fVar10 <= 0.0) &
                      (uint)((3.0 - fVar10 * fVar9 * fVar9) * fVar9 * 0.5)) * fStack_124;
  fStack_114 = (float)(~-(uint)(fVar19 <= 0.0) &
                      (uint)((3.0 - fVar19 * fVar11 * fVar11) * fVar11 * 0.5)) * fStack_114;
  local_138 = CONCAT44((float)(~-(uint)(fVar8 <= 0.0) &
                              (uint)((3.0 - fVar8 * fVar7 * fVar7) * fVar7 * 0.5)) * fVar20,fVar31);
  fStack_120 = fStack_12c;
  fStack_10c = fStack_11c;
  FUN_14376f710(&local_d8,&local_108,&local_138);
  fVar7 = *param_4;
  fVar9 = param_4[1];
  fVar11 = param_4[2];
  local_d8 = local_d8 * fVar22;
  fStack_d4 = fStack_d4 * fVar24;
  fStack_d0 = fStack_d0 * fVar25;
  local_c8 = local_c8 * fVar22;
  fStack_c4 = fStack_c4 * fVar24;
  fStack_c0 = fStack_c0 * fVar25;
  fVar4 = *param_1;
  fVar6 = param_1[1];
  fVar8 = param_1[2];
  fVar10 = param_1[3];
  *param_7 = local_d8;
  param_7[1] = fStack_d4;
  param_7[2] = fStack_d0;
  param_7[3] = fStack_cc * fVar26;
  param_7[4] = local_c8;
  param_7[5] = fStack_c4;
  param_7[6] = fStack_c0;
  param_7[7] = fStack_bc * fVar26;
  param_7[8] = local_b8 * fVar22;
  param_7[9] = fStack_b4 * fVar24;
  param_7[10] = fStack_b0 * fVar25;
  param_7[0xb] = fStack_ac * fVar26;
  param_7[0xc] = fVar4 - (fVar9 * local_c8 + fVar7 * local_d8 + fVar11 * local_b8 * fVar22);
  param_7[0xd] = fVar6 - (fVar9 * fStack_c4 + fVar7 * fStack_d4 + fVar11 * fStack_b4 * fVar24);
  param_7[0xe] = fVar8 - (fVar9 * fStack_c0 + fVar7 * fStack_d0 + fVar11 * fStack_b0 * fVar25);
  param_7[0xf] = fVar10 - (fVar9 * fStack_bc * fVar26 + fVar7 * fStack_cc * fVar26 +
                          fVar11 * fStack_ac * fVar26);
  *param_7 = local_d8;
  param_7[1] = fStack_d4;
  param_7[2] = fStack_d0;
  param_7[3] = 0.0;
  param_7[4] = local_c8;
  param_7[5] = fStack_c4;
  param_7[6] = fStack_c0;
  param_7[7] = 0.0;
  param_7[8] = param_7[8];
  param_7[9] = param_7[9];
  param_7[10] = param_7[10];
  param_7[0xb] = 0.0;
  fVar7 = fRam00000001467f06fc;
  param_7[0xc] = param_7[0xc];
  param_7[0xd] = param_7[0xd];
  param_7[0xe] = param_7[0xe];
  param_7[0xf] = fVar7;
  return;
}



// FUNCTION 143879160 FUN_143879160 body=440 status=ok
// SIG undefined FUN_143879160(void)

void FUN_143879160(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
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
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_78 = *param_2;
  fStack_74 = param_2[1];
  fStack_70 = param_2[2];
  fStack_6c = param_2[3];
  fStack_c0 = *param_3;
  fStack_bc = param_3[1];
  fStack_a0 = param_3[2];
  fStack_ac = param_3[3];
  local_a8 = fStack_c0 * fStack_74 - fStack_bc * local_78;
  local_c8 = fStack_bc * fStack_70 - fStack_a0 * fStack_74;
  local_b8 = fStack_a0 * local_78 - fStack_c0 * fStack_70;
  fVar1 = local_c8 * local_c8;
  fVar4 = local_b8 * local_b8;
  auVar2._8_4_ = local_a8 * local_a8;
  auVar2._4_4_ = auVar2._8_4_;
  auVar2._0_4_ = auVar2._8_4_;
  auVar2._12_4_ = auVar2._8_4_;
  fVar7 = fVar4 + fVar1 + auVar2._8_4_;
  fVar8 = fVar4 + fVar1 + auVar2._8_4_;
  fVar9 = fVar4 + fVar1 + auVar2._8_4_;
  fVar10 = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._4_4_ = fVar8;
  auVar3._0_4_ = fVar7;
  auVar3._8_4_ = fVar9;
  auVar3._12_4_ = fVar10;
  auVar3 = rsqrtps(auVar2,auVar3);
  fVar1 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar5 = auVar3._8_4_;
  fVar6 = auVar3._12_4_;
  local_c8 = local_c8 *
             (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar7 * fVar1 * fVar1) * fVar1 * 0.5));
  local_b8 = local_b8 *
             (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar8 * fVar4 * fVar4) * fVar4 * 0.5));
  local_a8 = local_a8 *
             (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar9 * fVar5 * fVar5) * fVar5 * 0.5));
  fStack_8c = (fStack_ac * fStack_6c - fStack_ac * fStack_6c) *
              (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar10 * fVar6 * fVar6) * fVar6 * 0.5)
                     );
  fStack_80 = local_b8 * local_78 - fStack_74 * local_c8;
  local_88 = local_a8 * fStack_74 - fStack_70 * local_b8;
  fStack_84 = local_c8 * fStack_70 - local_78 * local_a8;
  fStack_7c = fStack_8c * fStack_6c - fStack_6c * fStack_8c;
  fStack_a4 = local_b8 * fStack_c0 - fStack_bc * local_c8;
  fStack_c4 = local_a8 * fStack_bc - fStack_a0 * local_b8;
  fStack_b4 = local_c8 * fStack_a0 - fStack_c0 * local_a8;
  fStack_b0 = fStack_bc;
  fStack_9c = fStack_ac;
  local_98 = local_c8;
  fStack_94 = local_b8;
  fStack_90 = local_a8;
  FUN_14376f710(&local_68,&local_98,&local_c8);
  fVar1 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  param_4[8] = local_48;
  param_4[9] = fStack_44;
  param_4[10] = fStack_40;
  param_4[0xb] = fStack_3c;
  *param_4 = local_68;
  param_4[1] = fStack_64;
  param_4[2] = fStack_60;
  param_4[3] = fStack_5c;
  param_4[4] = local_58;
  param_4[5] = fStack_54;
  param_4[6] = fStack_50;
  param_4[7] = fStack_4c;
  param_4[0xc] = fVar1 - (fVar4 * local_58 + fVar1 * local_68 + fVar5 * local_48);
  param_4[0xd] = fVar4 - (fVar4 * fStack_54 + fVar1 * fStack_64 + fVar5 * fStack_44);
  param_4[0xe] = fVar5 - (fVar4 * fStack_50 + fVar1 * fStack_60 + fVar5 * fStack_40);
  param_4[0xf] = fVar6 - (fVar4 * fStack_4c + fVar1 * fStack_5c + fVar5 * fStack_3c);
  *param_4 = local_68;
  param_4[1] = fStack_64;
  param_4[2] = fStack_60;
  param_4[3] = 0.0;
  param_4[4] = local_58;
  param_4[5] = fStack_54;
  param_4[6] = fStack_50;
  param_4[7] = 0.0;
  param_4[8] = param_4[8];
  param_4[9] = param_4[9];
  param_4[10] = param_4[10];
  param_4[0xb] = 0.0;
  fVar1 = fRam00000001467f06fc;
  param_4[0xc] = param_4[0xc];
  param_4[0xd] = param_4[0xd];
  param_4[0xe] = param_4[0xe];
  param_4[0xf] = fVar1;
  return;
}



// FUNCTION 143879320 FUN_143879320 body=256 status=ok
// SIG undefined FUN_143879320(void)

bool FUN_143879320(undefined8 param_1,int param_2,char param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int local_res10 [2];
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28 [16];
  
  pfVar3 = (float *)hkaiEdgePath::getEdge();
  pfVar4 = (float *)hkaiEdgePath::getEdge(param_1,param_2 + 1);
  auVar1._4_4_ = -(uint)(pfVar3[5] == pfVar3[1]);
  auVar1._0_4_ = -(uint)(pfVar3[4] == *pfVar3);
  auVar1._8_4_ = -(uint)(pfVar3[6] == pfVar3[2]);
  auVar1._12_4_ = -(uint)(pfVar3[7] == pfVar3[3]);
  iVar5 = movmskps((int)param_1,auVar1);
  if ((((iVar5 != 0xf) && (((uint)pfVar3[0x20] & 0x10) == 0)) &&
      (auVar2._4_4_ = -(uint)(pfVar4[5] == pfVar4[1]), auVar2._0_4_ = -(uint)(pfVar4[4] == *pfVar4),
      auVar2._8_4_ = -(uint)(pfVar4[6] == pfVar4[2]),
      auVar2._12_4_ = -(uint)(pfVar4[7] == pfVar4[3]), iVar5 = movmskps((int)pfVar4,auVar2),
      iVar5 != 0xf)) &&
     ((((uint)pfVar4[0x20] & 0x10) == 0 &&
      (FUN_1438a93b0(&local_34,pfVar3,param_4,&local_30), local_34 != -1)))) {
    local_res10[0] = local_34;
    local_38 = local_30;
    if (param_3 == '\0') {
      iVar5 = FUN_143879e90(param_4,local_res10,&local_38,param_5);
    }
    else {
      iVar5 = FUN_143879c40();
    }
    if (iVar5 == 0) {
      FUN_1438a93b0(&local_2c,pfVar4,param_4,local_28);
      return local_res10[0] == local_2c;
    }
  }
  return false;
}



// FUNCTION 143879420 FUN_143879420 body=177 status=ok
// SIG undefined FUN_143879420(void)

longlong FUN_143879420(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x38) * param_2;
  uVar2 = FUN_143703a50();
  iVar5 = *(int *)(param_1 + 0x30) + iVar4;
  uVar3 = *(uint *)(param_1 + 0x34) & 0x3fffffff;
  if ((int)uVar3 < iVar5) {
    iVar1 = uVar3 * 2;
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    FUN_14370c310(uVar2,param_1 + 0x28,iVar5,4);
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4;
  uVar2 = FUN_143703a50();
  iVar5 = *(int *)(param_1 + 0x20);
  uVar3 = *(uint *)(param_1 + 0x24) & 0x3fffffff;
  iVar4 = iVar5 + param_2;
  if ((int)uVar3 < iVar4) {
    iVar1 = uVar3 * 2;
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    FUN_14370c310(uVar2,param_1 + 0x18,iVar4,0x90);
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + param_2;
  return (longlong)iVar5 * 0x90 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 1438794e0 FUN_1438794e0 body=559 status=ok
// SIG undefined FUN_1438794e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438794e0(longlong param_1,longlong param_2,longlong param_3,float param_4,float param_5,
                  float param_6,undefined4 *param_7,longlong param_8,undefined8 param_9)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  uint local_res8 [2];
  longlong local_res10;
  uint local_res20 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar7 = param_8;
  *(float *)(param_1 + 0x44) = param_4;
  if (param_5 <= param_4) {
    param_5 = param_4;
  }
  *(float *)(param_1 + 0x3c) = param_5;
  fVar11 = param_6;
  if (param_6 <= param_4) {
    fVar11 = param_4;
  }
  *(float *)(param_1 + 0x40) = fVar11;
  local_res8[0] = *(uint *)(param_2 + 0x40);
  local_res20[0] = local_res8[0] >> 0x16;
  lVar5 = *(longlong *)((ulonglong)local_res20[0] * 0x100 + *(longlong *)(param_8 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x60);
  bVar2 = *(byte *)(*(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x68) + 0x80);
  param_5._1_3_ = (undefined3)((uint)param_6 >> 8);
  param_5 = (float)(CONCAT31(param_5._1_3_,bVar2) & 0xffffff01);
  local_res10 = param_2;
  if ((bVar2 & 1) == 0) {
    local_58 = *param_7;
    uStack_54 = param_7[1];
    uStack_50 = param_7[2];
    uStack_4c = param_7[3];
  }
  else {
    param_6 = (float)(local_res8[0] & 0x3fffff);
    FUN_143852420(&local_48,lVar5,&param_6,&local_58);
  }
  FUN_143879420(param_1,*(undefined4 *)(param_3 + 0x20));
  uVar6 = param_9;
  iVar3 = *(int *)(param_3 + 0x20);
  uVar9 = 0;
  uVar10 = uVar9;
  if (0 < (longlong)iVar3) {
    do {
      FUN_143878620(param_1,lVar7,uVar6,*(undefined4 *)(*(longlong *)(param_3 + 0x18) + uVar9 * 4),
                    &local_58,local_res8,local_res20,&param_5,(int)uVar10);
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)((int)uVar10 + 1);
      param_2 = local_res10;
    } while ((longlong)uVar9 < (longlong)iVar3);
  }
  if (*(char *)(param_3 + 0x4c) == '\x01') {
    uVar4 = *(uint *)(*(longlong *)(param_2 + 0x48) + (longlong)*(int *)(param_3 + 0x44) * 4);
    puVar1 = (undefined4 *)
             (*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(param_3 + 0x44) * 0x10);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_143713730(&local_68,
                  *(longlong *)((ulonglong)(uVar4 >> 0x16) * 0x100 + *(longlong *)(lVar7 + 0x38)) +
                  0x40,&local_48);
    uStack_5c = 0;
    puVar8 = (undefined8 *)FUN_143879420(param_1,1);
    *puVar8 = CONCAT44(uStack_64,local_68);
    puVar8[1] = CONCAT44(uStack_5c,uStack_60);
    *(undefined4 *)(puVar8 + 2) = local_68;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_64;
    *(undefined4 *)(puVar8 + 3) = uStack_60;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_5c;
    *(undefined4 *)(puVar8 + 4) = local_58;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uStack_54;
    *(undefined4 *)(puVar8 + 5) = uStack_50;
    *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_4c;
    *(undefined2 *)(puVar8 + 0xf) = 0xffff;
    FUN_1438b20f0(puVar8 + 0xe,lVar7,uVar4);
    uVar6 = uRam00000001467f0898;
    puVar8[6] = _DAT_1467f0890;
    puVar8[7] = uVar6;
    uVar6 = uRam00000001467f08a8;
    puVar8[8] = _DAT_1467f08a0;
    puVar8[9] = uVar6;
    uVar6 = uRam00000001467f08b8;
    puVar8[10] = _DAT_1467f08b0;
    puVar8[0xb] = uVar6;
    uVar6 = _DAT_1467f08c8;
    puVar8[0xc] = _DAT_1467f08c0;
    puVar8[0xd] = uVar6;
    *(undefined1 *)(puVar8 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143879710 getEdge body=16 status=ok
// SIG undefined getEdge(void)

longlong hkaiEdgePath::getEdge(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 143879720 FUN_143879720 body=18 status=ok
// SIG undefined FUN_143879720(void)

longlong FUN_143879720(longlong param_1,int param_2)

{
  return *(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_1 + 0x38) * param_2) * 4;
}



// FUNCTION 143879740 FUN_143879740 body=43 status=ok
// SIG undefined FUN_143879740(void)

void FUN_143879740(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143879770((longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18),param_3,param_4,param_5);
  return;
}



// FUNCTION 143879770 FUN_143879770 body=119 status=ok
// SIG undefined FUN_143879770(void)

void FUN_143879770(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
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
  
  lVar1 = *(longlong *)
           ((ulonglong)(*(uint *)(param_1 + 0x70) >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38));
  local_48 = *(undefined8 *)(lVar1 + 0x40);
  uStack_40 = *(undefined8 *)(lVar1 + 0x48);
  local_38 = *(undefined8 *)(lVar1 + 0x50);
  uStack_30 = *(undefined8 *)(lVar1 + 0x58);
  local_28 = *(undefined4 *)(lVar1 + 0x60);
  uStack_24 = *(undefined4 *)(lVar1 + 100);
  uStack_20 = *(undefined4 *)(lVar1 + 0x68);
  uStack_1c = *(undefined4 *)(lVar1 + 0x6c);
  local_18 = *(undefined4 *)(lVar1 + 0x70);
  uStack_14 = *(undefined4 *)(lVar1 + 0x74);
  uStack_10 = *(undefined4 *)(lVar1 + 0x78);
  uStack_c = *(undefined4 *)(lVar1 + 0x7c);
  FUN_143713830(param_3,&local_48,param_1);
  FUN_143713830(param_4,&local_48,param_1 + 0x10);
  return;
}



// FUNCTION 1438797f0 FUN_1438797f0 body=89 status=ok
// SIG undefined FUN_1438797f0(void)

int * FUN_1438797f0(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int local_res20 [2];
  
  lVar1 = (longlong)param_4 * 0x90 + *(longlong *)(param_1 + 0x18);
  FUN_1438b2270(lVar1 + 0x70,local_res20);
  if ((local_res20[0] == -1) && ((*(byte *)(lVar1 + 0x80) & 0x10) != 0)) {
    local_res20[0] = *(int *)(lVar1 + 0x70);
  }
  *param_2 = local_res20[0];
  return param_2;
}



// FUNCTION 143879850 FUN_143879850 body=89 status=ok
// SIG undefined FUN_143879850(void)

undefined8
FUN_143879850(undefined8 param_1,int param_2,undefined8 param_3,int *param_4,byte *param_5)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)FUN_1438798b0();
  if ((*puVar1 & 0x4000) != 0) {
    *param_4 = (*puVar1 & 0x1fff) + param_2;
    *param_5 = (byte)(*puVar1 >> 0xd) & 1;
    return 1;
  }
  return 0;
}



// FUNCTION 1438798b0 FUN_1438798b0 body=38 status=ok
// SIG undefined FUN_1438798b0(void)

longlong FUN_1438798b0(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = 0x7e;
  if (param_3 != '\0') {
    lVar1 = 0x7c;
  }
  return lVar1 + *(longlong *)(param_1 + 0x18) + (longlong)param_2 * 0x90;
}



// FUNCTION 1438798e0 FUN_1438798e0 body=46 status=ok
// SIG undefined FUN_1438798e0(void)

void FUN_1438798e0(longlong param_1,longlong param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x90 + *(longlong *)(param_1 + 0x18);
  *param_4 = uVar2;
  uVar1 = (longlong)*(int *)(param_2 + 4) * 0x90 + *(longlong *)(param_1 + 0x18);
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 143879910 getFutureEdgeRange body=45 status=ok
// SIG undefined getFutureEdgeRange(void)

void hkaiEdgePath::getFutureEdgeRange
               (longlong param_1,int param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x90 + *(longlong *)(param_1 + 0x18);
  *param_4 = uVar2;
  uVar1 = (longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18);
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  *param_3 = uVar2;
  return;
}



// FUNCTION 143879940 FUN_143879940 body=84 status=ok
// SIG undefined FUN_143879940(void)

undefined8 FUN_143879940(longlong param_1,uint *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x90 + *(longlong *)(param_1 + 0x18);
    auVar1._4_4_ = -(uint)(*(float *)(lVar5 + -0x7c) == *(float *)(lVar5 + -0x8c));
    auVar1._0_4_ = -(uint)(*(float *)(lVar5 + -0x80) == *(float *)(lVar5 + -0x90));
    auVar1._8_4_ = -(uint)(*(float *)(lVar5 + -0x78) == *(float *)(lVar5 + -0x88));
    auVar1._12_4_ = -(uint)(*(float *)(lVar5 + -0x74) == *(float *)(lVar5 + -0x84));
    iVar3 = movmskps(*(int *)(param_1 + 0x20),auVar1);
    if (iVar3 == 0xf) {
      if (*(uint *)(lVar5 + -0x20) == 0xffffffff) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)(lVar5 + -0x20) >> 0x16;
      }
      *param_2 = uVar4;
      uVar2 = *(undefined8 *)(lVar5 + -0x88);
      *param_3 = *(undefined8 *)(lVar5 + -0x90);
      param_3[1] = uVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438799a0 FUN_1438799a0 body=157 status=ok
// SIG undefined FUN_1438799a0(void)

void FUN_1438799a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar2 = uVar5 * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar3,param_2,iVar1,4);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x90 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x90) {
    *(undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 4) = *(undefined4 *)(lVar4 + 0x70);
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  }
  return;
}



// FUNCTION 143879a40 FUN_143879a40 body=22 status=ok
// SIG undefined FUN_143879a40(void)

ushort FUN_143879a40(void)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)FUN_1438798b0();
  return *puVar1 & 0x8000;
}



// FUNCTION 143879a60 FUN_143879a60 body=53 status=ok
// SIG undefined FUN_143879a60(void)

bool FUN_143879a60(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  int iVar4;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return false;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x18) + -0x80 + (longlong)iVar4 * 0x90);
  pfVar2 = (float *)(*(longlong *)(param_1 + 0x18) + -0x90 + (longlong)iVar4 * 0x90);
  auVar3._4_4_ = -(uint)(pfVar1[1] == pfVar2[1]);
  auVar3._0_4_ = -(uint)(*pfVar1 == *pfVar2);
  auVar3._8_4_ = -(uint)(pfVar1[2] == pfVar2[2]);
  auVar3._12_4_ = -(uint)(pfVar1[3] == pfVar2[3]);
  iVar4 = movmskps(iVar4 * 0x12,auVar3);
  return iVar4 == 0xf;
}



// FUNCTION 143879aa0 FUN_143879aa0 body=375 status=ok
// SIG undefined FUN_143879aa0(void)

bool FUN_143879aa0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar18 = *param_1 - *param_2;
  fVar19 = param_1[1] - param_2[1];
  fVar20 = param_1[2] - param_2[2];
  fVar21 = *param_3 - *param_2;
  fVar22 = param_3[1] - param_2[1];
  fVar23 = param_3[2] - param_2[2];
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar10 = fVar1 * fVar21;
  fVar11 = fVar2 * fVar22;
  fVar12 = fVar3 * fVar23;
  fVar21 = fVar21 - (fVar11 + fVar10 + fVar12) * fVar1;
  fVar22 = fVar22 - (fVar11 + fVar10 + fVar12) * fVar2;
  fVar23 = fVar23 - (fVar11 + fVar10 + fVar12) * fVar3;
  fVar10 = fVar21 * fVar21;
  fVar11 = fVar22 * fVar22;
  fVar12 = fVar23 * fVar23;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar10;
  auVar8._8_4_ = fVar10;
  auVar8._12_4_ = fVar10;
  auVar14._0_4_ = fVar11 + fVar10 + fVar12;
  auVar14._4_4_ = fVar11 + fVar10 + fVar12;
  auVar14._8_4_ = fVar11 + fVar10 + fVar12;
  auVar14._12_4_ = fVar11 + fVar10 + fVar12;
  fVar10 = fVar1 * fVar18;
  fVar11 = fVar2 * fVar19;
  fVar12 = fVar3 * fVar20;
  auVar9 = rcpps(auVar8,auVar14);
  fVar18 = fVar18 - (fVar11 + fVar10 + fVar12) * fVar1;
  fVar19 = fVar19 - (fVar11 + fVar10 + fVar12) * fVar2;
  fVar20 = fVar20 - (fVar11 + fVar10 + fVar12) * fVar3;
  fVar10 = fVar18 * fVar21;
  fVar11 = fVar19 * fVar22;
  fVar12 = fVar20 * fVar23;
  fVar13 = (fVar11 + fVar10 + fVar12) * (2.0 - auVar14._0_4_ * auVar9._0_4_) * auVar9._0_4_;
  fVar16 = (fVar11 + fVar10 + fVar12) * (2.0 - auVar14._4_4_ * auVar9._4_4_) * auVar9._4_4_;
  fVar17 = (fVar11 + fVar10 + fVar12) * (2.0 - auVar14._8_4_ * auVar9._8_4_) * auVar9._8_4_;
  fVar10 = (fVar11 + fVar10 + fVar12) * (2.0 - auVar14._12_4_ * auVar9._12_4_) * auVar9._12_4_;
  uVar4 = -(uint)(fVar13 < DAT_1467f06f0);
  uVar5 = -(uint)(fVar16 < fRam00000001467f06f4);
  uVar6 = -(uint)(fVar17 < fRam00000001467f06f8);
  uVar7 = -(uint)(fVar10 < fRam00000001467f06fc);
  auVar15._0_4_ = (uint)fVar13 & uVar4;
  auVar15._4_4_ = (uint)fVar16 & uVar5;
  auVar15._8_4_ = (uint)fVar17 & uVar6;
  auVar15._12_4_ = (uint)fVar10 & uVar7;
  auVar9._4_4_ = ~uVar5 & (uint)fRam00000001467f06f4;
  auVar9._0_4_ = ~uVar4 & (uint)DAT_1467f06f0;
  auVar9._8_4_ = ~uVar6 & (uint)fRam00000001467f06f8;
  auVar9._12_4_ = ~uVar7 & (uint)fRam00000001467f06fc;
  auVar9 = maxps(ZEXT816(0),auVar15 | auVar9);
  fVar13 = ((0.0 - param_3[3]) - param_2[3]) * auVar9._0_4_ + param_2[3];
  fVar18 = fVar18 - auVar9._0_4_ * fVar21;
  fVar19 = fVar19 - auVar9._4_4_ * fVar22;
  fVar20 = fVar20 - auVar9._8_4_ * fVar23;
  fVar10 = fVar1 * fVar18;
  fVar11 = fVar2 * fVar19;
  fVar12 = fVar3 * fVar20;
  fVar18 = fVar18 - (fVar11 + fVar10 + fVar12) * fVar1;
  fVar19 = fVar19 - (fVar11 + fVar10 + fVar12) * fVar2;
  fVar20 = fVar20 - (fVar11 + fVar10 + fVar12) * fVar3;
  return fVar19 * fVar19 + fVar18 * fVar18 + fVar20 * fVar20 < fVar13 * fVar13;
}


