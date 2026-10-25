// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437f6460 FUN_1437f6460 body=64 status=ok
// SIG undefined FUN_1437f6460(void)

void FUN_1437f6460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 local_28 [32];
  
  hkaiIntervalPartition::Interval::setFromEndpoints(local_28);
  FUN_1437f63f0(param_1,local_28,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1437f64a0 FUN_1437f64a0 body=257 status=ok
// SIG undefined FUN_1437f64a0(void)

void FUN_1437f64a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar2 = (int)param_2[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 != 0) {
    lVar8 = *param_2;
    if ((int)param_1[1] == 0) {
      uVar4 = FUN_143703a50();
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar2) {
        FUN_14370c310(uVar4,param_1,iVar2,0x14);
      }
      FUN_1437f5280(*param_1,lVar8,iVar2);
      *(int *)(param_1 + 1) = iVar2;
      return;
    }
    uVar4 = FUN_143703a50();
    uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
    iVar7 = (int)param_1[1] + iVar2;
    if (((int)uVar6 < iVar7) && ((int)uVar6 < iVar7)) {
      iVar3 = iVar7;
      if (iVar7 < (int)(uVar6 * 2)) {
        iVar3 = uVar6 * 2;
      }
      FUN_14370c310(uVar4,param_1,iVar3,0x14);
    }
    puVar5 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
    if (0 < iVar2) {
      lVar8 = lVar8 - (longlong)puVar5;
      do {
        puVar1 = (undefined8 *)(lVar8 + (longlong)puVar5);
        uVar4 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar4;
        *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(lVar8 + -4 + (longlong)puVar5 + 0x14);
        lVar9 = lVar9 + -1;
        puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
      } while (lVar9 != 0);
    }
    *(int *)(param_1 + 1) = iVar7;
  }
  return;
}



// FUNCTION 1437f65b0 FUN_1437f65b0 body=225 status=ok
// SIG undefined FUN_1437f65b0(void)

bool FUN_1437f65b0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 <= param_2) {
    return false;
  }
  fVar4 = param_1[2];
  if (fVar4 <= 0.0) {
    if (0.0 <= fVar4) {
      if (param_1[3] < param_2) {
        return false;
      }
      if (param_3 <= param_1[3]) {
        return false;
      }
      return true;
    }
    fVar3 = (param_3 - param_1[3]) * (1.0 / fVar4);
  }
  else {
    fVar3 = (param_2 - param_1[3]) * (1.0 / fVar4);
    param_2 = param_3;
  }
  fVar1 = (param_2 - param_1[3]) * (1.0 / fVar4);
  fVar4 = *param_1;
  if (*param_1 <= fVar3) {
    fVar4 = fVar3;
  }
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  fVar2 = param_1[1];
  if (param_1[1] <= fVar3) {
    fVar2 = fVar3;
  }
  *param_1 = fVar4;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  param_1[1] = fVar2;
  return fVar4 < fVar2;
}



// FUNCTION 1437f66a0 FUN_1437f66a0 body=708 status=ok
// SIG undefined FUN_1437f66a0(void)

void FUN_1437f66a0(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  longlong local_a8;
  int local_a0;
  uint local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  
  iVar2 = (int)param_1[1];
  lVar19 = (longlong)iVar2;
  if (iVar2 != 0) {
    iVar3 = (int)param_2[1];
    if (iVar3 != 0) {
      iVar18 = (iVar3 + iVar2) * 2;
      pfVar5 = (float *)*param_2;
      local_98 = *pfVar5;
      fStack_94 = pfVar5[1];
      fStack_90 = pfVar5[2];
      fStack_8c = pfVar5[3];
      local_9c = 0x80000000;
      local_a8 = 0;
      local_a0 = 0;
      uVar12 = FUN_143703a50();
      uVar14 = local_9c & 0x3fffffff;
      if ((int)uVar14 < iVar18) {
        uVar6 = iVar3 + iVar2;
        if (iVar18 < (int)(uVar14 * 2)) {
          uVar6 = uVar14;
        }
        FUN_14370c310(uVar12,&local_a8,uVar6 * 2,0x14);
      }
      iVar18 = (int)param_1[1];
      lVar20 = (longlong)iVar18;
      lVar16 = *param_1;
      uVar12 = FUN_143703a50();
      uVar14 = local_9c & 0x3fffffff;
      iVar17 = local_a0 + iVar18;
      if (((int)uVar14 < iVar17) && ((int)uVar14 < iVar17)) {
        iVar7 = iVar17;
        if (iVar17 < (int)(uVar14 * 2)) {
          iVar7 = uVar14 * 2;
        }
        FUN_14370c310(uVar12,&local_a8,iVar7,0x14);
      }
      puVar15 = (undefined4 *)(local_a8 + (longlong)local_a0 * 0x14);
      if (0 < iVar18) {
        lVar16 = lVar16 - (longlong)puVar15;
        do {
          puVar1 = (undefined4 *)(lVar16 + (longlong)puVar15);
          uVar4 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          *puVar15 = *puVar1;
          puVar15[1] = uVar4;
          puVar15[2] = uVar8;
          puVar15[3] = uVar9;
          puVar15[4] = *(undefined4 *)(lVar16 + -4 + (longlong)(puVar15 + 5));
          lVar20 = lVar20 + -1;
          puVar15 = puVar15 + 5;
        } while (lVar20 != 0);
      }
      lVar16 = *param_1;
      uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
      *param_1 = local_a8;
      *(uint *)((longlong)param_1 + 0xc) = local_9c;
      *(int *)(param_1 + 1) = iVar17;
      local_a0 = 0;
      local_a8 = lVar16;
      local_9c = uVar4;
      iVar18 = 0;
      if (0 < iVar2) {
        lVar16 = 0;
        lVar20 = 0;
        fVar21 = fStack_94;
        do {
          pfVar5 = (float *)(lVar20 + *param_1);
          fVar10 = pfVar5[1];
          fStack_78 = pfVar5[2];
          fStack_74 = pfVar5[3];
          uVar4 = *(undefined4 *)(lVar20 + 0x10 + *param_1);
          local_70 = uVar4;
          fVar11 = *pfVar5;
          fStack_7c = fVar10;
          while (local_80 = fVar11, local_80 < fVar10) {
            if (iVar3 <= lVar16) {
LAB_1437f68af:
              FUN_1437f6320(&local_a8,&local_80);
              break;
            }
            lVar13 = lVar16 * 0x14;
            while (fVar21 <= local_80) {
              lVar16 = lVar16 + 1;
              lVar13 = lVar13 + 0x14;
              if (iVar3 <= lVar16) goto LAB_1437f68af;
              pfVar5 = (float *)(lVar13 + *param_2);
              local_98 = *pfVar5;
              fStack_90 = pfVar5[2];
              fStack_8c = pfVar5[3];
              fVar21 = pfVar5[1];
              fStack_94 = fVar21;
            }
            if (fVar10 <= local_98) goto LAB_1437f68af;
            fVar11 = fVar21;
            if (local_80 < local_98) {
              fStack_64 = local_98;
              local_68 = local_80;
              fStack_60 = fStack_78;
              fStack_5c = fStack_74;
              local_58 = uVar4;
              FUN_1437f6320(&local_a8,&local_68);
            }
          }
          lVar20 = lVar20 + 0x14;
          lVar19 = lVar19 + -1;
          iVar18 = local_a0;
        } while (lVar19 != 0);
      }
      lVar19 = *param_1;
      local_a0 = (int)param_1[1];
      uVar14 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)((longlong)param_1 + 0xc) = local_9c;
      *param_1 = local_a8;
      *(int *)(param_1 + 1) = iVar18;
      local_a8 = lVar19;
      local_9c = uVar14;
      uVar12 = FUN_143703a50();
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        FUN_143702e10(uVar12,local_a8,0x14,local_9c & 0x3fffffff);
      }
    }
  }
  return;
}



// FUNCTION 1437f6970 FUN_1437f6970 body=783 status=ok
// SIG undefined FUN_1437f6970(void)

void FUN_1437f6970(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  longlong local_c8;
  int local_c0;
  uint local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  iVar16 = (int)param_1[1];
  lVar19 = (longlong)iVar16;
  if (iVar16 != 0) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      pfVar4 = (float *)*param_2;
      iVar15 = (iVar16 + iVar2) * 2;
      local_b8 = *pfVar4;
      fStack_b4 = pfVar4[1];
      fStack_b0 = pfVar4[2];
      fStack_ac = pfVar4[3];
      local_bc = 0x80000000;
      local_c8 = 0;
      local_c0 = 0;
      uVar10 = FUN_143703a50();
      uVar12 = local_bc & 0x3fffffff;
      if ((int)uVar12 < iVar15) {
        uVar5 = iVar16 + iVar2;
        if (iVar15 < (int)(uVar12 * 2)) {
          uVar5 = uVar12;
        }
        FUN_14370c310(uVar10,&local_c8,uVar5 * 2,0x14);
      }
      iVar16 = (int)param_1[1];
      lVar17 = (longlong)iVar16;
      lVar14 = *param_1;
      uVar10 = FUN_143703a50();
      uVar12 = local_bc & 0x3fffffff;
      iVar15 = local_c0 + iVar16;
      if (((int)uVar12 < iVar15) && ((int)uVar12 < iVar15)) {
        iVar6 = iVar15;
        if (iVar15 < (int)(uVar12 * 2)) {
          iVar6 = uVar12 * 2;
        }
        FUN_14370c310(uVar10,&local_c8,iVar6,0x14);
      }
      puVar13 = (undefined4 *)(local_c8 + (longlong)local_c0 * 0x14);
      if (0 < iVar16) {
        lVar14 = lVar14 - (longlong)puVar13;
        do {
          puVar1 = (undefined4 *)(lVar14 + (longlong)puVar13);
          uVar3 = puVar1[1];
          uVar7 = puVar1[2];
          uVar8 = puVar1[3];
          *puVar13 = *puVar1;
          puVar13[1] = uVar3;
          puVar13[2] = uVar7;
          puVar13[3] = uVar8;
          puVar13[4] = *(undefined4 *)(lVar14 + -4 + (longlong)(puVar13 + 5));
          lVar17 = lVar17 + -1;
          puVar13 = puVar13 + 5;
        } while (lVar17 != 0);
      }
      lVar14 = *param_1;
      uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
      *param_1 = local_c8;
      *(int *)(param_1 + 1) = iVar15;
      *(uint *)((longlong)param_1 + 0xc) = local_bc;
      local_c0 = 0;
      local_c8 = lVar14;
      local_bc = uVar3;
      iVar16 = 0;
      if (0 < lVar19) {
        lVar17 = 0;
        lVar14 = 0;
        fVar20 = fStack_b4;
        do {
          pfVar4 = (float *)(*param_1 + lVar17 * 0x14);
          local_88 = *pfVar4;
          fVar9 = pfVar4[1];
          fStack_80 = pfVar4[2];
          fStack_7c = pfVar4[3];
          uVar3 = *(undefined4 *)(*param_1 + 0x10 + lVar17 * 0x14);
          lVar18 = lVar17;
          fStack_84 = fVar9;
          if (local_88 < fVar9) {
            while (lVar18 = lVar19, lVar14 < iVar2) {
              lVar11 = lVar14 * 0x14;
              while (fVar20 <= local_88) {
                lVar14 = lVar14 + 1;
                lVar11 = lVar11 + 0x14;
                if (iVar2 <= lVar14) goto LAB_1437f6bd1;
                pfVar4 = (float *)(lVar11 + *param_2);
                local_b8 = *pfVar4;
                fStack_b0 = pfVar4[2];
                fStack_ac = pfVar4[3];
                fVar20 = pfVar4[1];
                fStack_b4 = fVar20;
              }
              lVar18 = lVar17;
              if (fVar9 <= local_b8) break;
              local_a0 = local_88;
              if (local_88 <= local_b8) {
                local_a0 = local_b8;
              }
              fVar21 = fStack_84;
              if (fVar20 <= fStack_84) {
                fVar21 = fVar20;
              }
              fStack_9c = fVar21;
              fStack_98 = fStack_80;
              fStack_94 = fStack_7c;
              local_90 = uVar3;
              if (local_a0 < fVar21) {
                FUN_1437f6320(&local_c8,&local_a0);
              }
              local_88 = fVar21;
              if (fVar9 <= fVar21) break;
            }
          }
LAB_1437f6bd1:
          lVar17 = lVar18 + 1;
          iVar16 = local_c0;
        } while (lVar17 < lVar19);
      }
      lVar19 = *param_1;
      local_c0 = (int)param_1[1];
      uVar12 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)((longlong)param_1 + 0xc) = local_bc;
      *param_1 = local_c8;
      *(int *)(param_1 + 1) = iVar16;
      local_c8 = lVar19;
      local_bc = uVar12;
      uVar10 = FUN_143703a50();
      local_c0 = 0;
      if (-1 < (int)local_bc) {
        FUN_143702e10(uVar10,local_c8,0x14,local_bc & 0x3fffffff);
      }
    }
  }
  return;
}



// FUNCTION 1437f6c80 FUN_1437f6c80 body=291 status=ok
// SIG undefined FUN_1437f6c80(void)

void FUN_1437f6c80(longlong *param_1,float param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = (int)param_1[1];
  iVar6 = 0;
  iVar7 = 0;
  if (0 < iVar4) {
    puVar5 = (undefined4 *)*param_1;
    lVar3 = 0;
    pfVar2 = (float *)(puVar5 + 1);
    do {
      if (param_2 < *pfVar2) {
        if (-1 < iVar7) {
          if (0 < iVar7) {
            *(int *)(param_1 + 1) = iVar4 - iVar7;
            lVar3 = (longlong)(iVar4 - iVar7) * 0x14;
            if (0 < lVar3) {
              do {
                iVar6 = iVar6 + 4;
                *puVar5 = puVar5[(longlong)iVar7 * 5];
                puVar5 = puVar5 + 1;
              } while (iVar6 < lVar3);
            }
          }
          if ((int)param_1[1] != 0) {
            fVar1 = *(float *)*param_1;
            if (param_2 <= fVar1) {
              param_2 = fVar1;
            }
            *(float *)*param_1 = param_2;
            iVar4 = (int)param_1[1];
            while ((iVar4 != 0 &&
                   (iVar4 = (int)param_1[1] + -1,
                   pfVar2 = (float *)(*param_1 + (longlong)iVar4 * 0x14),
                   param_3 < *pfVar2 || param_3 == *pfVar2))) {
              *(int *)(param_1 + 1) = iVar4;
            }
          }
          if ((int)param_1[1] == 0) {
            return;
          }
          lVar3 = (longlong)((int)param_1[1] + -1);
          fVar1 = *(float *)(*param_1 + 4 + lVar3 * 0x14);
          if (fVar1 <= param_3) {
            param_3 = fVar1;
          }
          *(float *)(*param_1 + 4 + lVar3 * 0x14) = param_3;
          return;
        }
        break;
      }
      iVar7 = iVar7 + 1;
      lVar3 = lVar3 + 1;
      pfVar2 = pfVar2 + 5;
    } while (lVar3 < iVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1437f6db0 FUN_1437f6db0 body=174 status=ok
// SIG undefined FUN_1437f6db0(void)

void FUN_1437f6db0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(int)param_1[1];
  iVar11 = 0;
  iVar9 = 0;
  if (lVar12 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    lVar8 = 0;
    lVar10 = 0;
    do {
      iVar7 = FUN_1437f65b0(*param_1 + (longlong)iVar9 * 0x14,param_2,param_3);
      if (iVar7 != 0) {
        lVar3 = *param_1;
        iVar11 = iVar11 + 1;
        puVar1 = (undefined4 *)(lVar8 + lVar3);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(lVar10 + lVar3);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        *(undefined4 *)(lVar10 + 0x10 + lVar3) = *(undefined4 *)(lVar8 + 0x10 + lVar3);
        lVar10 = lVar10 + 0x14;
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 0x14;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *(int *)(param_1 + 1) = iVar11;
  }
  return;
}



// FUNCTION 1437f6e60 FUN_1437f6e60 body=547 status=ok
// SIG undefined FUN_1437f6e60(void)

void FUN_1437f6e60(longlong *param_1,float param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float local_48;
  float local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_44 = param_3;
  if ((int)param_1[1] == 0) {
    local_40 = 0;
    local_38 = 0xffffffff;
    local_48 = param_2;
    FUN_1437f63f0(param_1,&local_48);
    return;
  }
  pfVar2 = (float *)*param_1;
  fVar14 = *pfVar2;
  lVar12 = 1;
  fVar13 = pfVar2[1];
  if (param_2 < fVar14) {
    pfVar2[1] = fVar14;
    *(float *)*param_1 = param_2;
  }
  uVar9 = (uint)(param_2 < fVar14);
  lVar10 = (longlong)(int)param_1[1];
  if (1 < lVar10) {
    if (4 < lVar10) {
      lVar8 = 0x14;
      lVar7 = (ulonglong)uVar9 * 0x14;
      lVar11 = (lVar10 - 5U >> 2) + 1;
      lVar12 = lVar11 * 4 + 1;
      do {
        lVar3 = *param_1;
        fVar14 = *(float *)(lVar8 + lVar3);
        fVar1 = *(float *)(lVar8 + 4 + lVar3);
        if (fVar13 < fVar14) {
          *(float *)(lVar7 + lVar3) = fVar13;
          uVar9 = uVar9 + 1;
          *(float *)(lVar7 + 4 + *param_1) = fVar14;
          lVar7 = lVar7 + 0x14;
        }
        lVar3 = *param_1;
        fVar14 = *(float *)(lVar8 + 0x14 + lVar3);
        fVar13 = *(float *)(lVar8 + 0x18 + lVar3);
        if (fVar1 < fVar14) {
          *(float *)(lVar7 + lVar3) = fVar1;
          uVar9 = uVar9 + 1;
          *(float *)(lVar7 + 4 + *param_1) = fVar14;
          lVar7 = lVar7 + 0x14;
        }
        lVar3 = *param_1;
        fVar14 = *(float *)(lVar8 + 0x28 + lVar3);
        fVar1 = *(float *)(lVar8 + 0x2c + lVar3);
        if (fVar13 < fVar14) {
          *(float *)(lVar7 + lVar3) = fVar13;
          uVar9 = uVar9 + 1;
          *(float *)(lVar7 + 4 + *param_1) = fVar14;
          lVar7 = lVar7 + 0x14;
        }
        lVar3 = *param_1;
        fVar14 = *(float *)(lVar8 + 0x3c + lVar3);
        fVar13 = *(float *)(lVar8 + 0x40 + lVar3);
        if (fVar1 < fVar14) {
          *(float *)(lVar7 + lVar3) = fVar1;
          uVar9 = uVar9 + 1;
          *(float *)(lVar7 + 4 + *param_1) = fVar14;
          lVar7 = lVar7 + 0x14;
        }
        lVar8 = lVar8 + 0x50;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (lVar12 < lVar10) {
      lVar7 = lVar12 * 0x14;
      lVar8 = (longlong)(int)uVar9 * 0x14;
      lVar10 = lVar10 - lVar12;
      fVar14 = fVar13;
      do {
        lVar12 = *param_1;
        fVar1 = *(float *)(lVar7 + lVar12);
        fVar13 = *(float *)(lVar7 + 4 + lVar12);
        if (fVar14 < fVar1) {
          *(float *)(lVar8 + lVar12) = fVar14;
          uVar9 = uVar9 + 1;
          *(float *)(lVar8 + 4 + *param_1) = fVar1;
          lVar8 = lVar8 + 0x14;
        }
        lVar7 = lVar7 + 0x14;
        lVar10 = lVar10 + -1;
        fVar14 = fVar13;
      } while (lVar10 != 0);
    }
  }
  uVar5 = FUN_143703a50();
  uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar6 < (int)uVar9) {
    uVar6 = uVar6 * 2;
    uVar4 = uVar9;
    if ((int)uVar9 < (int)uVar6) {
      uVar4 = uVar6;
    }
    FUN_14370c310(uVar5,param_1,uVar4,0x14);
  }
  *(uint *)(param_1 + 1) = uVar9;
  if (fVar13 < param_3) {
    local_40 = 0;
    local_38 = 0xffffffff;
    local_48 = fVar13;
    FUN_1437f63f0(param_1,&local_48);
  }
  return;
}



// FUNCTION 1437f7090 FUN_1437f7090 body=25 status=ok
// SIG undefined FUN_1437f7090(void)

void FUN_1437f7090(undefined8 param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  FUN_1437f5700(param_1,local_res10);
  return;
}



// FUNCTION 1437f70b0 FUN_1437f70b0 body=98 status=ok
// SIG undefined FUN_1437f70b0(void)

void FUN_1437f70b0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1437f5280(*param_1,uVar2,iVar1);
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 1437f7120 FUN_1437f7120 body=651 status=ok
// SIG undefined FUN_1437f7120(void)

void FUN_1437f7120(longlong *param_1,longlong *param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  
  iVar14 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar16 = (int)param_2[1];
  if (iVar16 != 0) {
    pfVar8 = (float *)*param_2;
    if ((*pfVar8 <= param_3 && param_3 != *pfVar8) ||
       (param_4 < pfVar8[(longlong)(iVar16 + -1) * 5 + 1])) {
      if (0 < iVar16) {
        do {
          pfVar8 = (float *)FUN_1437f7500(param_2,iVar14);
          if (param_3 < pfVar8[1]) {
            fVar17 = pfVar8[1];
            fVar5 = pfVar8[2];
            fVar6 = pfVar8[3];
            fVar2 = pfVar8[4];
            fVar18 = *pfVar8;
            if (*pfVar8 <= param_3) {
              fVar18 = param_3;
            }
            uVar9 = FUN_143703a50();
            if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(uVar9,param_1,0x14);
            }
            lVar12 = param_1[1];
            lVar15 = *param_1;
            pfVar8 = (float *)(lVar15 + (longlong)(int)lVar12 * 0x14);
            *pfVar8 = fVar18;
            pfVar8[1] = fVar17;
            pfVar8[2] = fVar5;
            pfVar8[3] = fVar6;
            *(float *)(lVar15 + 0x10 + (longlong)(int)lVar12 * 0x14) = fVar2;
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
            iVar14 = iVar14 + 1;
            break;
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar16);
      }
      iVar7 = FUN_1437f74b0(param_2,param_4);
      if (iVar16 + -1 < iVar7) {
        iVar7 = iVar16 + -1;
      }
      if (iVar14 < iVar7) {
        lVar15 = *param_2;
        uVar9 = FUN_143703a50();
        uVar11 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
        iVar16 = (int)param_1[1] + (iVar7 - iVar14);
        if (((int)uVar11 < iVar16) && ((int)uVar11 < iVar16)) {
          iVar4 = iVar16;
          if (iVar16 < (int)(uVar11 * 2)) {
            iVar4 = uVar11 * 2;
          }
          FUN_14370c310(uVar9,param_1,iVar4,0x14);
        }
        puVar13 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x14);
        lVar12 = (longlong)(iVar7 - iVar14);
        if (0 < lVar12) {
          lVar15 = (lVar15 + (longlong)iVar14 * 0x14) - (longlong)puVar13;
          do {
            puVar1 = (undefined8 *)((longlong)puVar13 + lVar15);
            uVar9 = puVar1[1];
            *puVar13 = *puVar1;
            puVar13[1] = uVar9;
            *(undefined4 *)(puVar13 + 2) = *(undefined4 *)((longlong)puVar13 + lVar15 + 0x10);
            lVar12 = lVar12 + -1;
            puVar13 = (undefined8 *)((longlong)puVar13 + 0x14);
          } while (lVar12 != 0);
        }
        *(int *)(param_1 + 1) = iVar16;
      }
      if (iVar14 <= iVar7) {
        pfVar8 = (float *)(*param_2 + (longlong)iVar7 * 0x14);
        fVar2 = *pfVar8;
        uVar9 = *(undefined8 *)(pfVar8 + 2);
        uVar3 = *(undefined4 *)(*param_2 + 0x10 + (longlong)iVar7 * 0x14);
        if (fVar2 < param_4) {
          fVar17 = pfVar8[1];
          if (param_4 <= pfVar8[1]) {
            fVar17 = param_4;
          }
          uVar10 = FUN_143703a50();
          if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar10,param_1,0x14);
          }
          lVar12 = param_1[1];
          lVar15 = *param_1;
          puVar13 = (undefined8 *)(lVar15 + (longlong)(int)lVar12 * 0x14);
          *puVar13 = CONCAT44(fVar17,fVar2);
          puVar13[1] = uVar9;
          *(undefined4 *)(lVar15 + 0x10 + (longlong)(int)lVar12 * 0x14) = uVar3;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        }
      }
    }
    else {
      FUN_1437f70b0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1437f73b0 FUN_1437f73b0 body=81 status=ok
// SIG undefined FUN_1437f73b0(void)

bool FUN_1437f73b0(undefined8 *param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 1);
  if ((iVar2 != 0) && (pfVar3 = (float *)*param_1, *pfVar3 <= param_2)) {
    if (1 < iVar2) {
      lVar5 = 1;
      pfVar4 = pfVar3;
      do {
        fVar1 = pfVar4[5];
        if (pfVar4[1] <= fVar1 && fVar1 != pfVar4[1]) {
          return false;
        }
        lVar5 = lVar5 + 1;
        pfVar4 = pfVar4 + 5;
      } while (lVar5 < iVar2);
    }
    return param_3 < pfVar3[(longlong)(iVar2 + -1) * 5 + 1] ||
           param_3 == pfVar3[(longlong)(iVar2 + -1) * 5 + 1];
  }
  return false;
}



// FUNCTION 1437f7410 FUN_1437f7410 body=141 status=ok
// SIG undefined FUN_1437f7410(void)

void FUN_1437f7410(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (1 < (int)param_1[1]) {
    uVar4 = 0;
    iVar7 = 0;
    iVar5 = 1;
    if (1 < (int)param_1[1]) {
      lVar3 = 0x14;
      uVar6 = uVar4;
      uVar8 = uVar4;
      do {
        lVar1 = *param_1;
        if (*(float *)(lVar3 + lVar1) == *(float *)(lVar1 + 4 + uVar6)) {
          *(undefined4 *)(lVar1 + 4 + uVar6) = *(undefined4 *)(lVar3 + 4 + lVar1);
        }
        else {
          uVar2 = ((undefined8 *)(lVar3 + lVar1))[1];
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar4 = uVar4 + 1;
          uVar6 = uVar4 * 0x14;
          *(undefined8 *)(lVar1 + uVar6) = *(undefined8 *)(lVar3 + lVar1);
          ((undefined8 *)(lVar1 + uVar6))[1] = uVar2;
          *(undefined4 *)(lVar1 + 0x10 + uVar6) = *(undefined4 *)(lVar3 + 0x10 + lVar1);
        }
        iVar7 = (int)uVar8;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 0x14;
      } while (iVar5 < (int)param_1[1]);
    }
    *(int *)(param_1 + 1) = iVar7 + 1;
  }
  return;
}



// FUNCTION 1437f74a0 FUN_1437f74a0 body=14 status=ok
// SIG undefined FUN_1437f74a0(void)

float FUN_1437f74a0(longlong param_1,float param_2)

{
  return param_2 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0xc);
}



// FUNCTION 1437f74b0 FUN_1437f74b0 body=65 status=ok
// SIG undefined FUN_1437f74b0(void)

int FUN_1437f74b0(longlong *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1[1];
  iVar3 = -1;
  if (-1 < iVar2 + -1) {
    do {
      iVar1 = (iVar2 + iVar3) / 2;
      if (*(float *)(*param_1 + 4 + (longlong)iVar1 * 0x14) <= param_2) {
        iVar3 = iVar1;
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
    } while (iVar3 < iVar2 + -1);
  }
  return iVar2;
}



// FUNCTION 1437f7500 FUN_1437f7500 body=15 status=ok
// SIG undefined FUN_1437f7500(void)

longlong FUN_1437f7500(longlong *param_1,int param_2)

{
  return *param_1 + (longlong)param_2 * 0x14;
}



// FUNCTION 1437f7510 FUN_1437f7510 body=36 status=ok
// SIG undefined FUN_1437f7510(void)

undefined4 * FUN_1437f7510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *param_1;
  uVar1 = FUN_1437f74a0();
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1437f7540 FUN_1437f7540 body=37 status=ok
// SIG undefined FUN_1437f7540(void)

undefined4 * FUN_1437f7540(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 4);
  uVar1 = FUN_1437f74a0();
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1437f7570 FUN_1437f7570 body=72 status=ok
// SIG undefined FUN_1437f7570(void)

void FUN_1437f7570(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = fVar3 * *param_4 + *param_3;
  fVar8 = fVar3 * param_4[1] + param_3[1];
  fVar9 = fVar3 * param_4[2] + param_3[2];
  fVar10 = fVar3 * param_4[3] + param_3[3];
  fVar3 = fVar6 * *param_4 + *param_2;
  fVar4 = fVar6 * param_4[1] + param_2[1];
  fVar5 = fVar6 * param_4[2] + param_2[2];
  fVar6 = fVar6 * param_4[3] + param_2[3];
  *param_5 = fVar1 * fVar7 + fVar3;
  param_5[1] = fVar1 * fVar8 + fVar4;
  param_5[2] = fVar1 * fVar9 + fVar5;
  param_5[3] = fVar1 * fVar10 + fVar6;
  *param_6 = fVar2 * fVar7 + fVar3;
  param_6[1] = fVar2 * fVar8 + fVar4;
  param_6[2] = fVar2 * fVar9 + fVar5;
  param_6[3] = fVar2 * fVar10 + fVar6;
  return;
}



// FUNCTION 1437f75c0 FUN_1437f75c0 body=58 status=ok
// SIG undefined FUN_1437f75c0(void)

float * FUN_1437f75c0(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  
  *param_2 = (*(float *)(param_3 + 0xc) - *(float *)(param_1 + 0xc)) /
             (*(float *)(param_1 + 8) - *(float *)(param_3 + 8));
  fVar1 = (float)FUN_1437f74a0();
  param_2[1] = fVar1;
  return param_2;
}



// FUNCTION 1437f7600 FUN_1437f7600 body=663 status=ok
// SIG undefined FUN_1437f7600(void)

void FUN_1437f7600(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  
  lVar10 = (longlong)(int)param_1[1];
  lVar8 = 0;
  iVar7 = (int)param_1[1] / 2;
  lVar9 = (longlong)iVar7;
  if (0 < iVar7) {
    lVar11 = lVar10 * 0x14;
    lVar12 = lVar8;
    do {
      lVar3 = *param_1;
      lVar1 = lVar11 + -0x14;
      uVar2 = *(undefined4 *)(lVar12 + 0x10 + lVar3);
      uVar4 = ((undefined8 *)(lVar1 + lVar3))[1];
      uVar5 = *(undefined8 *)(lVar12 + lVar3);
      uVar6 = ((undefined8 *)(lVar12 + lVar3))[1];
      *(undefined8 *)(lVar12 + lVar3) = *(undefined8 *)(lVar1 + lVar3);
      ((undefined8 *)(lVar12 + lVar3))[1] = uVar4;
      *(undefined4 *)(lVar12 + 0x10 + lVar3) = *(undefined4 *)(lVar11 + -4 + lVar3);
      *(undefined8 *)(lVar1 + lVar3) = uVar5;
      ((undefined8 *)(lVar1 + lVar3))[1] = uVar6;
      *(undefined4 *)(lVar11 + -4 + lVar3) = uVar2;
      lVar9 = lVar9 + -1;
      lVar11 = lVar1;
      lVar12 = lVar12 + 0x14;
    } while (lVar9 != 0);
  }
  lVar9 = lVar8;
  if (3 < lVar10) {
    lVar11 = (lVar10 - 4U >> 2) + 1;
    fVar13 = param_2 * 2.0;
    lVar9 = lVar11 * 4;
    do {
      lVar12 = *param_1;
      *(float *)(lVar8 + lVar12) = fVar13 - *(float *)(lVar8 + lVar12);
      *(float *)(lVar8 + 4 + lVar12) = fVar13 - *(float *)(lVar8 + 4 + lVar12);
      uVar2 = *(undefined4 *)(lVar8 + lVar12);
      *(undefined4 *)(lVar8 + lVar12) = *(undefined4 *)(lVar8 + 4 + lVar12);
      *(undefined4 *)(lVar8 + 4 + lVar12) = uVar2;
      *(float *)(lVar8 + 0xc + lVar12) =
           fVar13 * *(float *)(lVar8 + 8 + lVar12) + *(float *)(lVar8 + 0xc + lVar12);
      *(uint *)(lVar8 + 8 + lVar12) = *(uint *)(lVar8 + 8 + lVar12) ^ 0x80000000;
      lVar12 = *param_1;
      *(float *)(lVar8 + 0x14 + lVar12) = fVar13 - *(float *)(lVar8 + 0x14 + lVar12);
      *(float *)(lVar8 + 0x18 + lVar12) = fVar13 - *(float *)(lVar8 + 0x18 + lVar12);
      uVar2 = *(undefined4 *)(lVar8 + 0x14 + lVar12);
      *(undefined4 *)(lVar8 + 0x14 + lVar12) = *(undefined4 *)(lVar8 + 0x18 + lVar12);
      *(undefined4 *)(lVar8 + 0x18 + lVar12) = uVar2;
      *(float *)(lVar8 + 0x20 + lVar12) =
           fVar13 * *(float *)(lVar8 + 0x1c + lVar12) + *(float *)(lVar8 + 0x20 + lVar12);
      *(uint *)(lVar8 + 0x1c + lVar12) = *(uint *)(lVar8 + 0x1c + lVar12) ^ 0x80000000;
      lVar12 = *param_1;
      *(float *)(lVar8 + 0x28 + lVar12) = fVar13 - *(float *)(lVar8 + 0x28 + lVar12);
      *(float *)(lVar8 + 0x2c + lVar12) = fVar13 - *(float *)(lVar8 + 0x2c + lVar12);
      uVar2 = *(undefined4 *)(lVar8 + 0x28 + lVar12);
      *(undefined4 *)(lVar8 + 0x28 + lVar12) = *(undefined4 *)(lVar8 + 0x2c + lVar12);
      *(undefined4 *)(lVar8 + 0x2c + lVar12) = uVar2;
      *(float *)(lVar8 + 0x34 + lVar12) =
           fVar13 * *(float *)(lVar8 + 0x30 + lVar12) + *(float *)(lVar8 + 0x34 + lVar12);
      *(uint *)(lVar8 + 0x30 + lVar12) = *(uint *)(lVar8 + 0x30 + lVar12) ^ 0x80000000;
      lVar12 = *param_1;
      *(float *)(lVar8 + 0x3c + lVar12) = fVar13 - *(float *)(lVar8 + 0x3c + lVar12);
      *(float *)(lVar8 + 0x40 + lVar12) = fVar13 - *(float *)(lVar8 + 0x40 + lVar12);
      uVar2 = *(undefined4 *)(lVar8 + 0x3c + lVar12);
      *(undefined4 *)(lVar8 + 0x3c + lVar12) = *(undefined4 *)(lVar8 + 0x40 + lVar12);
      *(undefined4 *)(lVar8 + 0x40 + lVar12) = uVar2;
      *(float *)(lVar8 + 0x48 + lVar12) =
           fVar13 * *(float *)(lVar8 + 0x44 + lVar12) + *(float *)(lVar8 + 0x48 + lVar12);
      *(uint *)(lVar8 + 0x44 + lVar12) = *(uint *)(lVar8 + 0x44 + lVar12) ^ 0x80000000;
      lVar8 = lVar8 + 0x50;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (lVar9 < lVar10) {
    param_2 = param_2 * 2.0;
    lVar8 = lVar9 * 0x14;
    lVar10 = lVar10 - lVar9;
    do {
      lVar9 = *param_1;
      fVar13 = param_2 - *(float *)(lVar8 + lVar9);
      *(float *)(lVar8 + lVar9) = fVar13;
      *(float *)(lVar8 + 4 + lVar9) = param_2 - *(float *)(lVar8 + 4 + lVar9);
      *(undefined4 *)(lVar8 + lVar9) = *(undefined4 *)(lVar8 + 4 + lVar9);
      *(float *)(lVar8 + 4 + lVar9) = fVar13;
      fVar13 = *(float *)(lVar8 + 8 + lVar9);
      *(float *)(lVar8 + 8 + lVar9) = -fVar13;
      *(float *)(lVar8 + 0xc + lVar9) = param_2 * fVar13 + *(float *)(lVar8 + 0xc + lVar9);
      lVar8 = lVar8 + 0x14;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 1437f78a0 FUN_1437f78a0 body=601 status=ok
// SIG undefined FUN_1437f78a0(void)

void FUN_1437f78a0(longlong *param_1,float param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = (longlong)(int)param_1[1];
  if ((int)param_1[1] != 0) {
    fVar7 = (param_5 - param_4) / (param_3 - param_2);
    param_4 = param_4 - fVar7 * param_2;
    if ((0.0001 <= ABS(1.0 - fVar7)) || (0.0001 <= ABS(param_4))) {
      lVar3 = 0;
      fVar8 = 1.0 / fVar7;
      lVar5 = lVar3;
      if (3 < lVar2) {
        lVar4 = (lVar2 - 4U >> 2) + 1;
        lVar5 = lVar4 * 4;
        do {
          lVar1 = *param_1;
          *(float *)(lVar3 + lVar1) = fVar7 * *(float *)(lVar3 + lVar1) + param_4;
          *(float *)(lVar3 + 4 + lVar1) = fVar7 * *(float *)(lVar3 + 4 + lVar1) + param_4;
          fVar6 = fVar8 * *(float *)(lVar3 + 8 + lVar1);
          *(float *)(lVar3 + 8 + lVar1) = fVar6;
          *(float *)(lVar3 + 0xc + lVar1) = *(float *)(lVar3 + 0xc + lVar1) - fVar6 * param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x14 + lVar1) = fVar7 * *(float *)(lVar3 + 0x14 + lVar1) + param_4;
          *(float *)(lVar3 + 0x18 + lVar1) = fVar7 * *(float *)(lVar3 + 0x18 + lVar1) + param_4;
          fVar6 = fVar8 * *(float *)(lVar3 + 0x1c + lVar1);
          *(float *)(lVar3 + 0x1c + lVar1) = fVar6;
          *(float *)(lVar3 + 0x20 + lVar1) = *(float *)(lVar3 + 0x20 + lVar1) - fVar6 * param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x28 + lVar1) = fVar7 * *(float *)(lVar3 + 0x28 + lVar1) + param_4;
          *(float *)(lVar3 + 0x2c + lVar1) = fVar7 * *(float *)(lVar3 + 0x2c + lVar1) + param_4;
          fVar6 = fVar8 * *(float *)(lVar3 + 0x30 + lVar1);
          *(float *)(lVar3 + 0x30 + lVar1) = fVar6;
          *(float *)(lVar3 + 0x34 + lVar1) = *(float *)(lVar3 + 0x34 + lVar1) - fVar6 * param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x3c + lVar1) = fVar7 * *(float *)(lVar3 + 0x3c + lVar1) + param_4;
          *(float *)(lVar3 + 0x40 + lVar1) = fVar7 * *(float *)(lVar3 + 0x40 + lVar1) + param_4;
          fVar6 = fVar8 * *(float *)(lVar3 + 0x44 + lVar1);
          *(float *)(lVar3 + 0x44 + lVar1) = fVar6;
          *(float *)(lVar3 + 0x48 + lVar1) = *(float *)(lVar3 + 0x48 + lVar1) - fVar6 * param_4;
          lVar3 = lVar3 + 0x50;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar5 < lVar2) {
        lVar3 = lVar5 * 0x14;
        lVar2 = lVar2 - lVar5;
        do {
          lVar5 = *param_1;
          fVar6 = fVar8 * *(float *)(lVar3 + 8 + lVar5);
          *(float *)(lVar3 + 8 + lVar5) = fVar6;
          *(float *)(lVar3 + lVar5) = fVar7 * *(float *)(lVar3 + lVar5) + param_4;
          *(float *)(lVar3 + 4 + lVar5) = fVar7 * *(float *)(lVar3 + 4 + lVar5) + param_4;
          *(float *)(lVar3 + 0xc + lVar5) = *(float *)(lVar3 + 0xc + lVar5) - fVar6 * param_4;
          lVar3 = lVar3 + 0x14;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1437f7b00 FUN_1437f7b00 body=386 status=ok
// SIG undefined FUN_1437f7b00(void)

void FUN_1437f7b00(longlong *param_1,float param_2,float param_3,float param_4,float param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar2 = (longlong)(int)param_1[1];
  if ((int)param_1[1] != 0) {
    fVar6 = (param_5 - param_4) / (param_3 - param_2);
    param_4 = param_4 - fVar6 * param_2;
    if ((0.0001 <= ABS(1.0 - param_4)) || (0.0001 <= ABS(fVar6))) {
      lVar3 = 0;
      lVar5 = lVar3;
      if (3 < lVar2) {
        lVar4 = (lVar2 - 4U >> 2) + 1;
        lVar5 = lVar4 * 4;
        do {
          lVar1 = *param_1;
          *(float *)(lVar3 + 8 + lVar1) = fVar6 * *(float *)(lVar3 + 8 + lVar1);
          *(float *)(lVar3 + 0xc + lVar1) = fVar6 * *(float *)(lVar3 + 0xc + lVar1) + param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x1c + lVar1) = fVar6 * *(float *)(lVar3 + 0x1c + lVar1);
          *(float *)(lVar3 + 0x20 + lVar1) = fVar6 * *(float *)(lVar3 + 0x20 + lVar1) + param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x30 + lVar1) = fVar6 * *(float *)(lVar3 + 0x30 + lVar1);
          *(float *)(lVar3 + 0x34 + lVar1) = fVar6 * *(float *)(lVar3 + 0x34 + lVar1) + param_4;
          lVar1 = *param_1;
          *(float *)(lVar3 + 0x44 + lVar1) = fVar6 * *(float *)(lVar3 + 0x44 + lVar1);
          *(float *)(lVar3 + 0x48 + lVar1) = fVar6 * *(float *)(lVar3 + 0x48 + lVar1) + param_4;
          lVar3 = lVar3 + 0x50;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (lVar5 < lVar2) {
        lVar3 = lVar5 * 0x14;
        lVar2 = lVar2 - lVar5;
        do {
          lVar5 = *param_1;
          *(float *)(lVar3 + 8 + lVar5) = fVar6 * *(float *)(lVar3 + 8 + lVar5);
          *(float *)(lVar3 + 0xc + lVar5) = fVar6 * *(float *)(lVar3 + 0xc + lVar5) + param_4;
          lVar3 = lVar3 + 0x14;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1437f7c90 FUN_1437f7c90 body=163 status=ok
// SIG undefined FUN_1437f7c90(void)

void FUN_1437f7c90(longlong *param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = (int)param_1[1] + -1;
  if (0 < iVar6) {
    lVar7 = 0;
    iVar5 = 0;
    do {
      iVar1 = iVar5 + 1;
      pfVar3 = (float *)FUN_1437f7500(param_1,iVar1);
      fVar2 = *pfVar3;
      lVar4 = FUN_1437f7500(param_1,iVar5);
      if (fVar2 - *(float *)(lVar4 + 4) < param_2) {
        *(float *)(lVar7 + 4 + *param_1) = fVar2;
      }
      lVar7 = lVar7 + 0x14;
      iVar5 = iVar1;
    } while (iVar1 < iVar6);
  }
  return;
}



// FUNCTION 1437f7d40 FUN_1437f7d40 body=219 status=ok
// SIG undefined FUN_1437f7d40(void)

void FUN_1437f7d40(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar3 = 0;
  iVar4 = 0;
  if ((int)param_1[1] != 0) {
    *(undefined4 *)(*param_1 + 0xc) = param_2;
    *(undefined4 *)(*param_1 + 8) = 0;
    *(undefined4 *)(*param_1 + 0x10) = param_3;
  }
  if (1 < (int)param_1[1]) {
    iVar7 = 1;
    if (1 < (int)param_1[1]) {
      lVar5 = 0x14;
      uVar6 = uVar3;
      uVar8 = uVar3;
      do {
        lVar1 = *param_1;
        if (*(float *)(lVar5 + lVar1) == *(float *)(lVar1 + 4 + uVar6)) {
          *(undefined4 *)(lVar1 + 4 + uVar6) = *(undefined4 *)(lVar5 + 4 + lVar1);
        }
        else {
          uVar2 = ((undefined8 *)(lVar5 + lVar1))[1];
          uVar3 = (ulonglong)((int)uVar3 + 1);
          uVar8 = uVar8 + 1;
          uVar6 = uVar8 * 0x14;
          *(undefined8 *)(lVar1 + uVar6) = *(undefined8 *)(lVar5 + lVar1);
          ((undefined8 *)(lVar1 + uVar6))[1] = uVar2;
          *(undefined4 *)(lVar1 + 0x10 + uVar6) = *(undefined4 *)(lVar5 + 0x10 + lVar1);
          *(undefined4 *)(uVar6 + 0xc + *param_1) = param_2;
          *(undefined4 *)(uVar6 + 8 + *param_1) = 0;
          *(undefined4 *)(uVar6 + 0x10 + *param_1) = param_3;
        }
        iVar4 = (int)uVar3;
        iVar7 = iVar7 + 1;
        lVar5 = lVar5 + 0x14;
      } while (iVar7 < (int)param_1[1]);
    }
    *(int *)(param_1 + 1) = iVar4 + 1;
  }
  return;
}



// FUNCTION 1437f7e20 FUN_1437f7e20 body=77 status=ok
// SIG undefined FUN_1437f7e20(void)

void FUN_1437f7e20(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = FUN_143703a50();
  uVar3 = *(uint *)(param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar3 < param_2) {
    iVar1 = uVar3 * 2;
    if (param_2 < iVar1) {
      param_2 = iVar1;
    }
    FUN_14370c310(uVar2,param_1,param_2,0x14);
  }
  return;
}



// FUNCTION 1437f7e70 setAllData body=35 status=ok
// SIG undefined setAllData(void)

void hkaiIntervalPartition::setAllData(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(int)param_1[1];
  if (0 < lVar2) {
    lVar1 = 0;
    do {
      *(undefined4 *)(lVar1 + 0x10 + *param_1) = param_2;
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 0x14;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437f7ea0 setFromEndpoints body=53 status=ok
// SIG undefined setFromEndpoints(void)

void hkaiIntervalPartition::Interval::setFromEndpoints
               (float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6
               )

{
  float fVar1;
  
  param_1[1] = param_4;
  *param_1 = param_2;
  param_1[4] = param_6;
  fVar1 = (param_5 - param_3) / (param_4 - param_2);
  param_1[2] = fVar1;
  param_1[3] = param_3 - fVar1 * param_2;
  return;
}



// FUNCTION 1437f7ee0 FUN_1437f7ee0 body=44 status=ok
// SIG undefined FUN_1437f7ee0(void)

void FUN_1437f7ee0(float *param_1,float param_2)

{
  *param_1 = param_2 + *param_1;
  param_1[1] = param_2 + param_1[1];
  param_1[3] = param_1[3] - param_2 * param_1[2];
  return;
}



// FUNCTION 1437f7f10 FUN_1437f7f10 body=182 status=ok
// SIG undefined FUN_1437f7f10(void)

void FUN_1437f7f10(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if ((int)param_1[1] != 0) {
    *(float *)*param_1 = *(float *)*param_1 - param_2;
    if (1 < (longlong)(int)param_1[1]) {
      lVar4 = (longlong)(int)param_1[1] + -1;
      lVar3 = 0x14;
      do {
        lVar2 = *param_1;
        fVar1 = *(float *)(lVar3 + -0x10 + lVar2);
        fVar5 = (*(float *)(lVar3 + lVar2) - fVar1) * 0.5;
        if (param_2 <= fVar5) {
          fVar5 = param_2;
        }
        *(float *)(lVar3 + -0x10 + lVar2) = fVar1 + fVar5;
        *(float *)(lVar3 + lVar2) = *(float *)(lVar3 + lVar2) - fVar5;
        lVar3 = lVar3 + 0x14;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    lVar4 = (longlong)((int)param_1[1] + -1);
    *(float *)(*param_1 + 4 + lVar4 * 0x14) = param_2 + *(float *)(*param_1 + 4 + lVar4 * 0x14);
  }
  return;
}



// FUNCTION 1437f7fd0 FUN_1437f7fd0 body=41 status=ok
// SIG undefined FUN_1437f7fd0(void)

void FUN_1437f7fd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = uVar1;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  return;
}



// FUNCTION 1437f8000 FUN_1437f8000 body=155 status=ok
// SIG undefined FUN_1437f8000(void)

void FUN_1437f8000(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar1,param_1[0x10],0x14,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],0x14,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 1437f80a0 FUN_1437f80a0 body=170 status=ok
// SIG undefined FUN_1437f80a0(void)

void FUN_1437f80a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) {
    FUN_143702e10(uVar1,param_1[0x16],0x14,*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) {
    FUN_143702e10(uVar1,param_1[0x13],0x14,*(uint *)((longlong)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 1437f8150 FUN_1437f8150 body=140 status=ok
// SIG undefined FUN_1437f8150(void)

void FUN_1437f8150(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar1,param_1[0xc],0x14,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar1,param_1[10],0x14,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 1437f81e0 FUN_1437f81e0 body=149 status=ok
// SIG undefined FUN_1437f81e0(void)

void FUN_1437f81e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x84)) {
    FUN_143702e10(uVar1,param_1[0xf],0x14,*(uint *)((longlong)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar1,param_1[0xd],0x14,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 1437f8280 FUN_1437f8280 body=164 status=ok
// SIG undefined FUN_1437f8280(void)

void FUN_1437f8280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x94)) {
    FUN_143702e10(uVar1,param_1[0x11],0x14,*(uint *)((longlong)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x84)) {
    FUN_143702e10(uVar1,param_1[0xf],0x14,*(uint *)((longlong)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 1437f8330 FUN_1437f8330 body=140 status=ok
// SIG undefined FUN_1437f8330(void)

void FUN_1437f8330(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar1,param_1[0xe],0x14,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar1,param_1[0xc],0x14,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  return;
}



// FUNCTION 1437f83c0 FUN_1437f83c0 body=99 status=ok
// SIG undefined FUN_1437f83c0(void)

undefined8 * FUN_1437f83c0(undefined8 *param_1,ulonglong param_2)

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
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1437f8430 FUN_1437f8430 body=120 status=ok
// SIG undefined FUN_1437f8430(void)

longlong FUN_1437f8430(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437f8000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 1437f84b0 FUN_1437f84b0 body=120 status=ok
// SIG undefined FUN_1437f84b0(void)

longlong FUN_1437f84b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437f80a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
    }
  }
  return param_1;
}



// FUNCTION 1437f8530 FUN_1437f8530 body=120 status=ok
// SIG undefined FUN_1437f8530(void)

longlong FUN_1437f8530(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437f8150();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
    }
  }
  return param_1;
}



// FUNCTION 1437f85b0 FUN_1437f85b0 body=181 status=ok
// SIG undefined FUN_1437f85b0(void)

undefined8 * FUN_1437f85b0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],0x14,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,8);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1437f8670 FUN_1437f8670 body=120 status=ok
// SIG undefined FUN_1437f8670(void)

longlong FUN_1437f8670(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437f81e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 1437f86f0 FUN_1437f86f0 body=120 status=ok
// SIG undefined FUN_1437f86f0(void)

longlong FUN_1437f86f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437f8280();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
    }
  }
  return param_1;
}



// FUNCTION 1437f8770 FUN_1437f8770 body=120 status=ok
// SIG undefined FUN_1437f8770(void)

longlong FUN_1437f8770(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437f8330();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 1437f87f0 FUN_1437f87f0 body=414 status=ok
// SIG undefined FUN_1437f87f0(void)

void FUN_1437f87f0(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  float *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined **local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  auVar6 = *param_2;
  iVar4 = 0;
  auVar16 = *param_3;
  fVar11 = auVar16._0_4_ + *param_4;
  fVar12 = auVar16._4_4_ + param_4[1];
  fVar13 = auVar16._8_4_ + param_4[2];
  fVar14 = auVar16._12_4_ + param_4[3];
  lVar3 = (longlong)*(int *)(param_1 + 0x20);
  fVar7 = *param_4 + auVar6._0_4_;
  fVar8 = param_4[1] + auVar6._4_4_;
  fVar9 = param_4[2] + auVar6._8_4_;
  fVar10 = param_4[3] + auVar6._12_4_;
  auVar5 = minps(auVar6,auVar16);
  auVar15 = maxps(auVar6,auVar16);
  auVar6._4_4_ = fVar8;
  auVar6._0_4_ = fVar7;
  auVar6._8_4_ = fVar9;
  auVar6._12_4_ = fVar10;
  auVar6 = minps(auVar5,auVar6);
  auVar16._4_4_ = fVar8;
  auVar16._0_4_ = fVar7;
  auVar16._8_4_ = fVar9;
  auVar16._12_4_ = fVar10;
  auVar16 = maxps(auVar15,auVar16);
  auVar5._4_4_ = fVar12;
  auVar5._0_4_ = fVar11;
  auVar5._8_4_ = fVar13;
  auVar5._12_4_ = fVar14;
  local_48 = minps(auVar6,auVar5);
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar11;
  auVar15._8_4_ = fVar13;
  auVar15._12_4_ = fVar14;
  local_38 = maxps(auVar16,auVar15);
  if (0 < lVar3) {
    lVar2 = 0;
    do {
      local_b8 = *(undefined8 *)*param_2;
      uStack_b0 = *(undefined8 *)(*param_2 + 8);
      local_88 = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18));
      local_a8 = *(undefined8 *)*param_3;
      uStack_a0 = *(undefined8 *)(*param_3 + 8);
      local_98 = *(undefined8 *)param_4;
      uStack_90 = *(undefined8 *)(param_4 + 2);
      local_c8[0] = _anon_E1691C37::GeometryCastSegmentQuery::vftable;
      local_80 = iVar4;
      FUN_1437f62c0(&local_78);
      FUN_1437f62c0(&local_68);
      FUN_1437f7fd0(param_5,&local_68);
      hkcdDynamicAabbTree::getClosestPoint
                (*(undefined8 *)(*(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x18),
                 local_48,local_c8);
      FUN_1437f7fd0(param_5,&local_68);
      uVar1 = FUN_143703a50();
      local_60 = 0;
      if (-1 < (int)local_5c) {
        FUN_143702e10(uVar1,local_68,0x14,local_5c & 0x3fffffff);
      }
      local_68 = 0;
      local_5c = 0x80000000;
      uVar1 = FUN_143703a50();
      local_70 = 0;
      if (-1 < (int)local_6c) {
        FUN_143702e10(uVar1,local_78,0x14,local_6c & 0x3fffffff);
      }
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437f8990 FUN_1437f8990 body=956 status=ok
// SIG undefined FUN_1437f8990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f8990(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  float *param_4,undefined1 (*param_5) [16],undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined **local_198 [2];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_140;
  int local_138;
  undefined8 local_130;
  undefined4 local_128;
  uint local_124;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  undefined **local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
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
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  auVar12 = *param_2;
  iVar4 = 0;
  auVar11 = *param_3;
  fVar6 = auVar11._0_4_ + *param_4;
  fVar7 = auVar11._4_4_ + param_4[1];
  fVar8 = auVar11._8_4_ + param_4[2];
  fVar9 = auVar11._12_4_ + param_4[3];
  auVar5._0_4_ = *param_4 + auVar12._0_4_;
  auVar5._4_4_ = param_4[1] + auVar12._4_4_;
  auVar5._8_4_ = param_4[2] + auVar12._8_4_;
  auVar5._12_4_ = param_4[3] + auVar12._12_4_;
  lVar3 = (longlong)*(int *)(param_1 + 0x20);
  auVar10 = minps(auVar12,auVar11);
  auVar12 = maxps(auVar12,auVar11);
  auVar11 = minps(auVar10,auVar5);
  auVar13 = maxps(auVar12,auVar5);
  auVar5 = maxps(*param_5,_DAT_1467f06e0);
  auVar10 = minps(*param_5,_DAT_1467f06e0);
  auVar12._4_4_ = fVar7;
  auVar12._0_4_ = fVar6;
  auVar12._8_4_ = fVar8;
  auVar12._12_4_ = fVar9;
  auVar12 = minps(auVar11,auVar12);
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = fVar6;
  auVar11._8_4_ = fVar8;
  auVar11._12_4_ = fVar9;
  auVar11 = maxps(auVar13,auVar11);
  local_58 = auVar12._0_4_ - auVar5._0_4_;
  fStack_54 = auVar12._4_4_ - auVar5._4_4_;
  fStack_50 = auVar12._8_4_ - auVar5._8_4_;
  fStack_4c = auVar12._12_4_ - auVar5._12_4_;
  local_48 = auVar11._0_4_ - auVar10._0_4_;
  fStack_44 = auVar11._4_4_ - auVar10._4_4_;
  fStack_40 = auVar11._8_4_ - auVar10._8_4_;
  fStack_3c = auVar11._12_4_ - auVar10._12_4_;
  if (0 < lVar3) {
    lVar2 = 0;
    do {
      local_f8 = *(undefined8 *)*param_2;
      uStack_f0 = *(undefined8 *)(*param_2 + 8);
      local_a8 = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18));
      local_e8 = *(undefined8 *)*param_3;
      uStack_e0 = *(undefined8 *)(*param_3 + 8);
      local_b8 = *(undefined8 *)param_4;
      uStack_b0 = *(undefined8 *)(param_4 + 2);
      local_108[0] = _anon_E1691C37::DoubledGeometryCastSegmentQuery::vftable;
      local_a0 = iVar4;
      FUN_1437f62c0(&local_98);
      FUN_1437f62c0(&local_88);
      local_d8 = *(float *)*param_2 - *(float *)*param_5;
      fStack_d4 = *(float *)(*param_2 + 4) - *(float *)(*param_5 + 4);
      fStack_d0 = *(float *)(*param_2 + 8) - *(float *)(*param_5 + 8);
      fStack_cc = *(float *)(*param_2 + 0xc) - *(float *)(*param_5 + 0xc);
      local_c8 = *(float *)*param_3 - *(float *)*param_5;
      fStack_c4 = *(float *)(*param_3 + 4) - *(float *)(*param_5 + 4);
      fStack_c0 = *(float *)(*param_3 + 8) - *(float *)(*param_5 + 8);
      fStack_bc = *(float *)(*param_3 + 0xc) - *(float *)(*param_5 + 0xc);
      FUN_1437f7fd0(param_6,&local_88);
      hkcdDynamicAabbTree::getClosestPoint
                (*(undefined8 *)(*(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x18),
                 &local_58,local_108);
      local_188 = *(undefined8 *)*param_2;
      uStack_180 = *(undefined8 *)(*param_2 + 8);
      local_148 = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18));
      local_178 = *(undefined8 *)*param_3;
      uStack_170 = *(undefined8 *)(*param_3 + 8);
      local_198[0] = _anon_E1691C37::GeometryExtrusionCastSegmentQuery::vftable;
      local_168 = *(undefined8 *)param_4;
      uStack_160 = *(undefined8 *)(param_4 + 2);
      local_140 = *(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x20;
      local_158 = *(undefined8 *)*param_5;
      uStack_150 = *(undefined8 *)(*param_5 + 8);
      local_138 = iVar4;
      FUN_1437f62c0(&local_130);
      FUN_1437f62c0(&local_120);
      FUN_1437f7fd0(&local_120,&local_88);
      hkcdDynamicAabbTree::getClosestPoint
                (*(undefined8 *)(*(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x30),
                 &local_58,local_198);
      FUN_1437f7fd0(param_6,&local_120);
      local_68 = *(uint *)*param_5 ^ 0x80000000;
      uStack_64 = *(uint *)(*param_5 + 4) ^ 0x80000000;
      uStack_60 = *(uint *)(*param_5 + 8) ^ 0x80000000;
      uStack_5c = *(uint *)(*param_5 + 0xc) ^ 0x80000000;
      FUN_1437f62c0(&local_1b8);
      FUN_1437f87f0(param_1,param_2,param_3,&local_68,&local_1b8);
      FUN_1437f7d40(&local_1b8,0,0);
      FUN_1437f4bb0(param_6,&local_1b8);
      uVar1 = FUN_143703a50();
      local_1b0 = 0;
      if (-1 < (int)local_1ac) {
        FUN_143702e10(uVar1,local_1b8,0x14,local_1ac & 0x3fffffff);
      }
      local_1b8 = 0;
      local_1ac = 0x80000000;
      uVar1 = FUN_143703a50();
      local_118 = 0;
      if (-1 < (int)local_114) {
        FUN_143702e10(uVar1,local_120,0x14,local_114 & 0x3fffffff);
      }
      local_120 = 0;
      local_114 = 0x80000000;
      uVar1 = FUN_143703a50();
      local_128 = 0;
      if (-1 < (int)local_124) {
        FUN_143702e10(uVar1,local_130,0x14,local_124 & 0x3fffffff);
      }
      local_130 = 0;
      local_198[0] = hkcdAabbTreeQueries::AabbCollector::vftable;
      local_124 = 0x80000000;
      uVar1 = FUN_143703a50();
      local_80 = 0;
      if (-1 < (int)local_7c) {
        FUN_143702e10(uVar1,local_88,0x14,local_7c & 0x3fffffff);
      }
      local_88 = 0;
      local_7c = 0x80000000;
      uVar1 = FUN_143703a50();
      local_90 = 0;
      if (-1 < (int)local_8c) {
        FUN_143702e10(uVar1,local_98,0x14,local_8c & 0x3fffffff);
      }
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437f8d50 FUN_1437f8d50 body=1491 status=ok
// SIG undefined FUN_1437f8d50(void)

void FUN_1437f8d50(longlong param_1,undefined8 *param_2,float *param_3,float *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 local_res8 [8];
  float fVar37;
  undefined8 local_1d8;
  int local_1d0;
  uint local_1cc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined **local_1a8;
  undefined1 *local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  longlong local_170;
  int local_168;
  undefined8 local_160;
  undefined4 local_158;
  uint local_154;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [48];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [112];
  
  FUN_143dff260(local_108);
  uVar1 = *(undefined4 *)(param_2 + 1);
  uVar5 = *param_2;
  uVar4 = FUN_143dff230(&local_1b8);
  FUN_143dff980(local_108,uVar5,uVar1,uVar4);
  fVar37 = 0.0;
  FUN_143e002a0(local_108,local_98,1,0x3f800000,0);
  pfVar9 = (float *)CONCAT44(param_7._4_4_,(int)param_7);
  pfVar6 = (float *)CONCAT44(param_6._4_4_,(int)param_6);
  fVar31 = *param_4 - *param_3;
  fVar33 = param_4[1] - param_3[1];
  fVar35 = param_4[2] - param_3[2];
  fVar25 = pfVar9[1] * *pfVar6 - pfVar6[1] * *pfVar9;
  fVar27 = pfVar9[2] * pfVar6[1] - pfVar6[2] * pfVar9[1];
  fVar28 = *pfVar9 * pfVar6[2] - *pfVar6 * pfVar9[2];
  fVar13 = fVar27 * fVar27;
  fVar17 = fVar28 * fVar28;
  auVar14._8_4_ = fVar25 * fVar25;
  auVar14._4_4_ = auVar14._8_4_;
  auVar14._0_4_ = auVar14._8_4_;
  auVar14._12_4_ = auVar14._8_4_;
  fVar22 = fVar17 + fVar13 + auVar14._8_4_;
  fVar23 = fVar17 + fVar13 + auVar14._8_4_;
  fVar24 = fVar17 + fVar13 + auVar14._8_4_;
  auVar3._4_4_ = fVar23;
  auVar3._0_4_ = fVar22;
  auVar3._8_4_ = fVar24;
  auVar3._12_4_ = fVar17 + fVar13 + auVar14._8_4_;
  auVar15 = rsqrtps(auVar14,auVar3);
  fVar13 = auVar15._0_4_;
  fVar17 = auVar15._4_4_;
  fVar18 = auVar15._8_4_;
  fVar27 = fVar27 * (float)(~-(uint)(fVar22 <= 0.0) &
                           (uint)((3.0 - fVar22 * fVar13 * fVar13) * fVar13 * 0.5));
  fVar28 = fVar28 * (float)(~-(uint)(fVar23 <= 0.0) &
                           (uint)((3.0 - fVar23 * fVar17 * fVar17) * fVar17 * 0.5));
  fVar25 = fVar25 * (float)(~-(uint)(fVar24 <= 0.0) &
                           (uint)((3.0 - fVar24 * fVar18 * fVar18) * fVar18 * 0.5));
  fVar13 = fVar27 * fVar31;
  fVar17 = fVar28 * fVar33;
  fVar18 = fVar25 * fVar35;
  fVar27 = (fVar17 + fVar13 + fVar18) * fVar27;
  fVar28 = (fVar17 + fVar13 + fVar18) * fVar28;
  fVar25 = (fVar17 + fVar13 + fVar18) * fVar25;
  fVar13 = fVar27 * fVar27;
  fVar17 = fVar28 * fVar28;
  auVar16._8_4_ = fVar25 * fVar25;
  auVar16._4_4_ = auVar16._8_4_;
  auVar16._0_4_ = auVar16._8_4_;
  auVar16._12_4_ = auVar16._8_4_;
  fVar18 = fVar17 + fVar13 + auVar16._8_4_;
  fVar22 = fVar17 + fVar13 + auVar16._8_4_;
  fVar23 = fVar17 + fVar13 + auVar16._8_4_;
  auVar15._4_4_ = fVar22;
  auVar15._0_4_ = fVar18;
  auVar15._8_4_ = fVar23;
  auVar15._12_4_ = fVar17 + fVar13 + auVar16._8_4_;
  auVar15 = rcpps(auVar16,auVar15);
  fVar27 = fVar27 * (2.0 - fVar18 * auVar15._0_4_) * auVar15._0_4_;
  fVar28 = fVar28 * (2.0 - fVar22 * auVar15._4_4_) * auVar15._4_4_;
  fVar25 = fVar25 * (2.0 - fVar23 * auVar15._8_4_) * auVar15._8_4_;
  fVar13 = 0.0 - (fVar28 * param_3[1] + fVar27 * *param_3 + fVar25 * param_3[2]);
  FUN_1437f62c0(&local_1d8);
  lVar10 = (longlong)*(int *)(param_1 + 0x20);
  iVar11 = 0;
  if (0 < lVar10) {
    lVar8 = 0;
    do {
      local_188 = *param_5;
      uStack_180 = param_5[1];
      local_178 = *(undefined8 *)(lVar8 + *(longlong *)(param_1 + 0x18));
      local_1a8 = _anon_E1691C37::GeometryExtremalProfileQuery::vftable;
      local_170 = *(longlong *)(lVar8 + 8 + *(longlong *)(param_1 + 0x18)) + 0x20;
      local_1a0 = local_108;
      local_198 = fVar27;
      fStack_194 = fVar28;
      fStack_190 = fVar25;
      fStack_18c = fVar13;
      local_168 = iVar11;
      FUN_1437f62c0(&local_160);
      FUN_1437f7fd0(&local_160,&local_1d8);
      hkcdDynamicAabbTree::getClosestPoint
                (*(undefined8 *)(*(longlong *)(lVar8 + 8 + *(longlong *)(param_1 + 0x18)) + 0x30),
                 local_98,&local_1a8);
      FUN_1437f7fd0(&local_160,&local_1d8);
      uVar5 = FUN_143703a50();
      local_158 = 0;
      if (-1 < (int)local_154) {
        FUN_143702e10(uVar5,local_160,0x14,local_154 & 0x3fffffff);
      }
      iVar11 = iVar11 + 1;
      lVar8 = lVar8 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    pfVar6 = (float *)CONCAT44(param_6._4_4_,(int)param_6);
    pfVar9 = (float *)CONCAT44(param_7._4_4_,(int)param_7);
  }
  if (local_1d0 != 0) {
    local_118 = *param_3;
    fStack_114 = param_3[1];
    fStack_110 = param_3[2];
    local_148 = *pfVar6;
    fStack_144 = pfVar6[1];
    fStack_140 = pfVar6[2];
    local_138 = *pfVar9;
    fStack_134 = pfVar9[1];
    fStack_130 = pfVar9[2];
    uStack_12c = 0;
    uStack_bc = 0;
    param_6._0_4_ = 0x3a83126f;
    uStack_13c = 0;
    uStack_cc = 0;
    uStack_11c = 0;
    local_1b8 = 0x3a83126f;
    uStack_1b4 = 0x3a83126f;
    uStack_1b0 = 0x3a83126f;
    uStack_1ac = 0x3a83126f;
    uStack_10c = uRam00000001467f06fc;
    uStack_ac = 0;
    uStack_9c = uRam00000001467f06fc;
    local_128 = fVar31;
    fStack_124 = fVar33;
    fStack_120 = fVar35;
    local_d8 = local_148;
    fStack_d4 = fStack_144;
    fStack_d0 = fStack_140;
    local_c8 = local_138;
    fStack_c4 = fStack_134;
    fStack_c0 = fStack_130;
    local_b8 = fVar31;
    fStack_b4 = fVar33;
    fStack_b0 = fVar35;
    local_a8 = local_118;
    fStack_a4 = fStack_114;
    fStack_a0 = fStack_110;
    FUN_143786e90(&local_148,&param_6,&local_d8,&local_1b8);
    uVar5 = param_8;
    FUN_1437f7e20(param_8,local_1d0);
    uVar4 = param_9;
    FUN_1437f7e20(param_9,local_1d0);
    iVar11 = 0;
    if (0 < local_1d0) {
      do {
        pfVar6 = (float *)FUN_1437f7500(&local_1d8,iVar11);
        fVar17 = *pfVar6;
        fVar18 = pfVar6[1];
        FUN_1437f9fa0(pfVar6[4],local_res8,&param_6,&param_7);
        plVar7 = (longlong *)((longlong)(int)param_6 * 0x10 + *(longlong *)(param_1 + 0x18));
        lVar10 = *(longlong *)(plVar7[1] + 0x20);
        lVar8 = *(longlong *)(*plVar7 + 0x18);
        pfVar6 = (float *)(lVar8 + (longlong)*(int *)(lVar10 + (longlong)(int)param_7 * 8) * 0x10);
        fVar22 = *pfVar6;
        fVar23 = pfVar6[1];
        fVar24 = pfVar6[2];
        pfVar6 = (float *)(lVar8 + (longlong)*(int *)(lVar10 + 4 + (longlong)(int)param_7 * 8) *
                                   0x10);
        fVar32 = *pfVar6 - fVar22;
        fVar34 = pfVar6[1] - fVar23;
        fVar36 = pfVar6[2] - fVar24;
        fVar31 = fVar24 * fVar25 + fVar22 * fVar27;
        fVar33 = fVar13 + fVar23 * fVar28;
        fVar37 = fVar27 * fVar32;
        fVar35 = fVar28 * fVar34;
        fVar19 = fVar25 * fVar36;
        fVar26 = fVar33 + fVar31;
        fVar31 = fVar31 + fVar33;
        fVar29 = fVar23 * fVar28 + fVar13 + fVar22 * fVar27 + fVar24 * fVar25;
        auVar12._4_4_ = fVar37;
        auVar12._0_4_ = fVar37;
        auVar12._8_4_ = fVar37;
        auVar12._12_4_ = fVar37;
        fVar33 = fVar35 + fVar37 + fVar19;
        fVar20 = fVar35 + fVar37 + fVar19;
        fVar21 = fVar35 + fVar37 + fVar19;
        auVar2._4_4_ = fVar20;
        auVar2._0_4_ = fVar33;
        auVar2._8_4_ = fVar21;
        auVar2._12_4_ = fVar35 + fVar37 + fVar19;
        auVar15 = rcpps(auVar12,auVar2);
        fVar33 = (2.0 - fVar33 * auVar15._0_4_) * auVar15._0_4_;
        fVar35 = (2.0 - fVar20 * auVar15._4_4_) * auVar15._4_4_;
        fVar19 = (2.0 - fVar21 * auVar15._8_4_) * auVar15._8_4_;
        fVar20 = (fVar18 - fVar26) * fVar33 * fVar32 + fVar22;
        fVar21 = (fVar18 - fVar31) * fVar35 * fVar34 + fVar23;
        fVar30 = (fVar18 - fVar29) * fVar19 * fVar36 + fVar24;
        fVar37 = fVar20 * fStack_144 + fStack_114 + fVar21 * fStack_134 + fVar30 * fStack_124;
        FUN_1437f6460(uVar5,lVar10,
                      ((fVar17 - fVar26) * fVar33 * fVar32 + fVar22) * local_148 + local_118 +
                      ((fVar17 - fVar31) * fVar35 * fVar34 + fVar23) * local_138 +
                      ((fVar17 - fVar29) * fVar19 * fVar36 + fVar24) * local_128,fVar18,
                      fVar20 * local_148 + local_118 + fVar21 * local_138 + fVar30 * local_128,
                      0xffffffff);
        FUN_1437f6460(uVar4);
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_1d0);
    }
  }
  uVar5 = FUN_143703a50();
  local_1d0 = 0;
  if (-1 < (int)local_1cc) {
    FUN_143702e10(uVar5,local_1d8,0x14,local_1cc & 0x3fffffff,fVar37);
  }
  local_1d8 = 0;
  local_1cc = 0x80000000;
  FUN_143dff4a0(local_108);
  return;
}



// FUNCTION 1437f9330 FUN_1437f9330 body=16 status=ok
// SIG undefined FUN_1437f9330(void)

uint FUN_1437f9330(int param_1,uint param_2,uint param_3)

{
  return (param_1 * 4 | param_2) << 0x1c | param_3;
}



// FUNCTION 1437f9340 FUN_1437f9340 body=238 status=ok
// SIG undefined FUN_1437f9340(void)

undefined8 FUN_1437f9340(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_1437f9330(0,*(undefined4 *)(param_1 + 0x68),param_2);
  lVar1 = param_1 + 0x70;
  iVar3 = FUN_1437fc420(param_1 + 0x10,param_1 + 0x20,param_1 + 0x50,*(undefined8 *)(param_1 + 0x60)
                        ,param_2,uVar2,lVar1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x88) < 1) {
      FUN_1437f7fd0(param_1 + 0x80,lVar1);
    }
    else {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
    }
  }
  uVar2 = FUN_1437f9330(1,*(undefined4 *)(param_1 + 0x68),param_2);
  iVar3 = FUN_1437fc420(param_1 + 0x30,param_1 + 0x40,param_1 + 0x50,*(undefined8 *)(param_1 + 0x60)
                        ,param_2,uVar2,lVar1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x88) < 1) {
      FUN_1437f7fd0(param_1 + 0x80,lVar1);
    }
    else {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
    }
  }
  return 1;
}



// FUNCTION 1437f9430 FUN_1437f9430 body=264 status=ok
// SIG undefined FUN_1437f9430(void)

undefined8 FUN_1437f9430(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_1437f9330(0,*(undefined4 *)(param_1 + 0xa8),param_2);
  lVar1 = param_1 + 0x98;
  iVar3 = FUN_1437fd0e0(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,
                        *(undefined8 *)(param_1 + 0x90),param_2,uVar2,lVar1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xb8) < 1) {
      FUN_1437f7fd0(param_1 + 0xb0,lVar1);
    }
    else {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
    }
  }
  uVar2 = FUN_1437f9330(1,*(undefined4 *)(param_1 + 0xa8),param_2);
  iVar3 = FUN_1437fd0e0(param_1 + 0x50,param_1 + 0x60,param_1 + 0x70,param_1 + 0x80,
                        *(undefined8 *)(param_1 + 0x90),param_2,uVar2,lVar1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xb8) < 1) {
      FUN_1437f7fd0(param_1 + 0xb0,lVar1);
    }
    else {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
    }
  }
  return 1;
}



// FUNCTION 1437f9540 FUN_1437f9540 body=129 status=ok
// SIG undefined FUN_1437f9540(void)

undefined8 FUN_1437f9540(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_1437f9330(0,*(undefined4 *)(param_1 + 0x48),param_2);
  lVar1 = param_1 + 0x50;
  iVar3 = FUN_1437fc420(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,*(undefined8 *)(param_1 + 0x40)
                        ,param_2,uVar2,lVar1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x68) < 1) {
      FUN_1437f7fd0(param_1 + 0x60,lVar1);
    }
    else {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
    }
  }
  return 1;
}



// FUNCTION 1437f95d0 FUN_1437f95d0 body=609 status=ok
// SIG undefined FUN_1437f95d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437f95d0(longlong param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8 [2];
  float local_res10 [2];
  float *pfVar15;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [96];
  undefined4 uVar16;
  
  pfVar15 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) +
                     (longlong)*(int *)(**(longlong **)(param_1 + 0x38) + (longlong)param_2 * 8) *
                     0x10);
  local_78 = *pfVar15;
  fStack_74 = pfVar15[1];
  fStack_70 = pfVar15[2];
  pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) +
                    (longlong)*(int *)(**(longlong **)(param_1 + 0x38) + 4 + (longlong)param_2 * 8)
                    * 0x10);
  fVar7 = *pfVar1;
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  local_88 = fVar7;
  fStack_84 = fVar8;
  fStack_80 = fVar9;
  fStack_7c = pfVar1[3];
  fStack_6c = pfVar15[3];
  if ((fVar8 - fStack_74) * *(float *)(param_1 + 0x14) +
      (fVar7 - local_78) * *(float *)(param_1 + 0x10) +
      (fVar9 - fStack_70) * *(float *)(param_1 + 0x18) < 0.0) {
    local_88 = local_78;
    fStack_84 = fStack_74;
    fStack_80 = fStack_70;
    fStack_7c = pfVar15[3];
    local_78 = fVar7;
    fStack_74 = fVar8;
    fStack_70 = fVar9;
    fStack_6c = pfVar1[3];
  }
  pfVar15 = local_res8;
  iVar5 = FUN_143dffe50(*(undefined8 *)(param_1 + 8),&local_78,&local_88,local_res10,pfVar15,0);
  uVar16 = (undefined4)((ulonglong)pfVar15 >> 0x20);
  if ((iVar5 != 0) && (local_res10[0] < local_res8[0])) {
    fVar7 = local_res10[0] * (local_88 - local_78) + local_78;
    fVar8 = local_res10[0] * (fStack_84 - fStack_74) + fStack_74;
    fVar9 = local_res10[0] * (fStack_80 - fStack_70) + fStack_70;
    fVar10 = local_res8[0] * (local_88 - local_78) + local_78;
    fVar11 = local_res8[0] * (fStack_84 - fStack_74) + fStack_74;
    fVar12 = local_res8[0] * (fStack_80 - fStack_70) + fStack_70;
    fVar13 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x14) * fVar8 +
             *(float *)(param_1 + 0x18) * fVar9 + *(float *)(param_1 + 0x10) * fVar7;
    fVar14 = *(float *)(param_1 + 0x1c) + *(float *)(param_1 + 0x14) * fVar11 +
             *(float *)(param_1 + 0x18) * fVar12 + *(float *)(param_1 + 0x10) * fVar10;
    if (_DAT_1467f0860 <= ABS(fVar13 - fVar14)) {
      fVar2 = *(float *)(param_1 + 0x20);
      fVar3 = *(float *)(param_1 + 0x24);
      fVar4 = *(float *)(param_1 + 0x28);
      uVar6 = FUN_1437f9330(2,*(undefined4 *)(param_1 + 0x40),param_2);
      hkaiIntervalPartition::Interval::setFromEndpoints
                (local_68,fVar13,fVar3 * fVar8 + fVar2 * fVar7 + fVar4 * fVar9,fVar14,
                 CONCAT44(uVar16,fVar3 * fVar11 + fVar2 * fVar10 + fVar4 * fVar12),uVar6);
      FUN_1437f59a0(param_1 + 0x48,local_68);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 1437f9840 FUN_1437f9840 body=211 status=ok
// SIG undefined FUN_1437f9840(void)

undefined8 FUN_1437f9840(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  piVar2 = (int *)(**(longlong **)(param_1 + 0x58) + (longlong)param_2 * 8);
  puVar3 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + (longlong)*piVar2 * 0x10);
  local_18 = *puVar3;
  uStack_10 = puVar3[1];
  puVar4 = (undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) + (longlong)piVar2[1] * 0x10);
  local_28 = *puVar4;
  uStack_24 = puVar4[1];
  uStack_20 = puVar4[2];
  uStack_1c = puVar4[3];
  uVar5 = FUN_1437f9330(2,*(undefined4 *)(param_1 + 0x60),param_2);
  lVar1 = param_1 + 0x68;
  iVar6 = FUN_1437fc2a0(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,&local_18,&local_28,
                        param_1 + 0x40,uVar5,lVar1);
  if (iVar6 != 0) {
    if (0 < *(int *)(param_1 + 0x80)) {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
      return 1;
    }
    FUN_1437f7fd0(param_1 + 0x78,lVar1);
  }
  return 1;
}



// FUNCTION 1437f9920 FUN_1437f9920 body=229 status=ok
// SIG undefined FUN_1437f9920(void)

undefined8 FUN_1437f9920(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  piVar2 = (int *)(**(longlong **)(param_1 + 0x68) + (longlong)param_2 * 8);
  puVar3 = (undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + (longlong)*piVar2 * 0x10);
  local_18 = *puVar3;
  uStack_10 = puVar3[1];
  puVar4 = (undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x18) + (longlong)piVar2[1] * 0x10);
  local_28 = *puVar4;
  uStack_24 = puVar4[1];
  uStack_20 = puVar4[2];
  uStack_1c = puVar4[3];
  uVar5 = FUN_1437f9330(2,*(undefined4 *)(param_1 + 0x70),param_2);
  lVar1 = param_1 + 0x78;
  iVar6 = FUN_1437fcf40(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,&local_18,
                        &local_28,param_1 + 0x50,uVar5,lVar1);
  if (iVar6 != 0) {
    if (0 < *(int *)(param_1 + 0x90)) {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
      return 1;
    }
    FUN_1437f7fd0(param_1 + 0x88,lVar1);
  }
  return 1;
}



// FUNCTION 1437f9a10 FUN_1437f9a10 body=138 status=ok
// SIG undefined FUN_1437f9a10(void)

undefined8 FUN_1437f9a10(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_1437f9330(0,*(undefined4 *)(param_1 + 0x58),param_2);
  lVar1 = param_1 + 0x60;
  iVar3 = FUN_1437fd0e0(param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,param_1 + 0x40,
                        *(undefined8 *)(param_1 + 0x50),param_2,uVar2,lVar1);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x78) < 1) {
      FUN_1437f7fd0(param_1 + 0x70,lVar1);
    }
    else {
      FUN_1437f4bb0();
      CAkSrcMediaCodecVorbis::ReleaseBuffer(lVar1);
    }
  }
  return 1;
}



// FUNCTION 1437f9aa0 FUN_1437f9aa0 body=428 status=ok
// SIG undefined FUN_1437f9aa0(void)

void FUN_1437f9aa0(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined8 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined **local_d8 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lVar3 = (longlong)*(int *)(param_1 + 0x20);
  auVar5 = minps(*param_2,*param_3);
  iVar4 = 0;
  auVar6 = maxps(*param_2,*param_3);
  auVar5 = minps(auVar5,*param_4);
  auVar6 = maxps(auVar6,*param_4);
  local_48 = minps(auVar5,*param_5);
  local_38 = maxps(auVar6,*param_5);
  if (0 < lVar3) {
    lVar2 = 0;
    do {
      local_c8 = *(undefined8 *)*param_2;
      uStack_c0 = *(undefined8 *)(*param_2 + 8);
      local_88 = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18));
      local_b8 = *(undefined8 *)*param_3;
      uStack_b0 = *(undefined8 *)(*param_3 + 8);
      local_a8 = *(undefined8 *)*param_4;
      uStack_a0 = *(undefined8 *)(*param_4 + 8);
      local_98 = *(undefined4 *)*param_5;
      uStack_94 = *(undefined4 *)(*param_5 + 4);
      uStack_90 = *(undefined4 *)(*param_5 + 8);
      uStack_8c = *(undefined4 *)(*param_5 + 0xc);
      local_d8[0] = _anon_E1691C37::GeometryTurnedSegmentQuery::vftable;
      local_80 = iVar4;
      FUN_1437f62c0(&local_78);
      FUN_1437f62c0(&local_68);
      FUN_1437f7fd0(param_6,&local_68);
      hkcdDynamicAabbTree::getClosestPoint
                (*(undefined8 *)(*(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x18),
                 local_48,local_d8);
      FUN_1437f7fd0(param_6,&local_68);
      uVar1 = FUN_143703a50();
      local_60 = 0;
      if (-1 < (int)local_5c) {
        FUN_143702e10(uVar1,local_68,0x14,local_5c & 0x3fffffff);
      }
      local_68 = 0;
      local_5c = 0x80000000;
      uVar1 = FUN_143703a50();
      local_70 = 0;
      if (-1 < (int)local_6c) {
        FUN_143702e10(uVar1,local_78,0x14,local_6c & 0x3fffffff);
      }
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437f9c50 FUN_1437f9c50 body=848 status=ok
// SIG undefined FUN_1437f9c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437f9c50(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                  undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined **local_1b8 [2];
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
  longlong local_150;
  int local_148;
  undefined8 local_140;
  undefined4 local_138;
  uint local_134;
  undefined8 local_130;
  undefined4 local_128;
  uint local_124;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
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
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
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
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  uint local_3c;
  
  auVar5 = minps(*param_2,*param_3);
  iVar4 = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0x20);
  auVar7 = maxps(*param_2,*param_3);
  auVar5 = minps(auVar5,*param_4);
  auVar7 = maxps(auVar7,*param_4);
  auVar6 = minps(auVar5,*param_5);
  auVar8 = maxps(auVar7,*param_5);
  auVar5 = maxps(*param_6,_DAT_1467f06e0);
  auVar7 = minps(*param_6,_DAT_1467f06e0);
  local_118 = auVar6._0_4_ - auVar5._0_4_;
  fStack_114 = auVar6._4_4_ - auVar5._4_4_;
  fStack_110 = auVar6._8_4_ - auVar5._8_4_;
  fStack_10c = auVar6._12_4_ - auVar5._12_4_;
  local_108 = auVar8._0_4_ - auVar7._0_4_;
  fStack_104 = auVar8._4_4_ - auVar7._4_4_;
  fStack_100 = auVar8._8_4_ - auVar7._8_4_;
  fStack_fc = auVar8._12_4_ - auVar7._12_4_;
  if (0 < lVar3) {
    lVar2 = 0;
    do {
      local_e8 = *(undefined8 *)*param_2;
      uStack_e0 = *(undefined8 *)(*param_2 + 8);
      local_68 = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18));
      local_d8 = *(undefined8 *)*param_3;
      uStack_d0 = *(undefined8 *)(*param_3 + 8);
      local_c8 = *(undefined8 *)*param_4;
      uStack_c0 = *(undefined8 *)(*param_4 + 8);
      local_b8 = *(undefined8 *)*param_5;
      uStack_b0 = *(undefined8 *)(*param_5 + 8);
      local_f8[0] = _anon_E1691C37::DoubledGeometryTurnedSegmentQuery::vftable;
      FUN_1437f62c0(&local_60);
      local_50 = iVar4;
      FUN_1437f62c0(&local_48);
      local_78 = *(float *)*param_6;
      fStack_74 = *(float *)(*param_6 + 4);
      fStack_70 = *(float *)(*param_6 + 8);
      fStack_6c = *(float *)(*param_6 + 0xc);
      local_a8 = *(float *)*param_2 - local_78;
      fStack_a4 = *(float *)(*param_2 + 4) - fStack_74;
      fStack_a0 = *(float *)(*param_2 + 8) - fStack_70;
      fStack_9c = *(float *)(*param_2 + 0xc) - fStack_6c;
      local_98 = *(float *)*param_3 - local_78;
      fStack_94 = *(float *)(*param_3 + 4) - fStack_74;
      fStack_90 = *(float *)(*param_3 + 8) - fStack_70;
      fStack_8c = *(float *)(*param_3 + 0xc) - fStack_6c;
      local_88 = *(float *)*param_4 - local_78;
      fStack_84 = *(float *)(*param_4 + 4) - fStack_74;
      fStack_80 = *(float *)(*param_4 + 8) - fStack_70;
      fStack_7c = *(float *)(*param_4 + 0xc) - fStack_6c;
      local_78 = *(float *)*param_5 - local_78;
      fStack_74 = *(float *)(*param_5 + 4) - fStack_74;
      fStack_70 = *(float *)(*param_5 + 8) - fStack_70;
      fStack_6c = *(float *)(*param_5 + 0xc) - fStack_6c;
      FUN_1437f7fd0(param_7,&local_48);
      hkcdDynamicAabbTree::getClosestPoint
                (*(undefined8 *)(*(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x18),
                 &local_118,local_f8);
      local_1a8 = *(undefined8 *)*param_2;
      uStack_1a0 = *(undefined8 *)(*param_2 + 8);
      local_158 = *(undefined8 *)(lVar2 + *(longlong *)(param_1 + 0x18));
      local_198 = *(undefined8 *)*param_3;
      uStack_190 = *(undefined8 *)(*param_3 + 8);
      local_1b8[0] = _anon_E1691C37::GeometryExtrusionTurnedSegmentQuery::vftable;
      local_188 = *(undefined8 *)*param_4;
      uStack_180 = *(undefined8 *)(*param_4 + 8);
      local_178 = *(undefined8 *)*param_5;
      uStack_170 = *(undefined8 *)(*param_5 + 8);
      local_168 = *(undefined8 *)*param_6;
      uStack_160 = *(undefined8 *)(*param_6 + 8);
      local_150 = *(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x20;
      local_148 = iVar4;
      FUN_1437f62c0(&local_140);
      FUN_1437f62c0(&local_130);
      FUN_1437f7fd0(&local_130,&local_48);
      hkcdDynamicAabbTree::getClosestPoint
                (*(undefined8 *)(*(longlong *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) + 0x30),
                 &local_118,local_1b8);
      FUN_1437f7fd0(param_7,&local_130);
      uVar1 = FUN_143703a50();
      local_128 = 0;
      if (-1 < (int)local_124) {
        FUN_143702e10(uVar1,local_130,0x14,local_124 & 0x3fffffff);
      }
      local_130 = 0;
      local_124 = 0x80000000;
      uVar1 = FUN_143703a50();
      local_138 = 0;
      if (-1 < (int)local_134) {
        FUN_143702e10(uVar1,local_140,0x14,local_134 & 0x3fffffff);
      }
      local_140 = 0;
      local_1b8[0] = hkcdAabbTreeQueries::AabbCollector::vftable;
      local_134 = 0x80000000;
      uVar1 = FUN_143703a50();
      local_40 = 0;
      if (-1 < (int)local_3c) {
        FUN_143702e10(uVar1,local_48,0x14,local_3c & 0x3fffffff);
      }
      local_48 = 0;
      local_3c = 0x80000000;
      uVar1 = FUN_143703a50();
      local_58 = 0;
      if (-1 < (int)local_54) {
        FUN_143702e10(uVar1,local_60,0x14,local_54 & 0x3fffffff);
      }
      iVar4 = iVar4 + 1;
      lVar2 = lVar2 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1437f9fa0 FUN_1437f9fa0 body=28 status=ok
// SIG undefined FUN_1437f9fa0(void)

void FUN_1437f9fa0(uint param_1,uint *param_2,uint *param_3,uint *param_4)

{
  *param_2 = param_1 >> 0x1e;
  *param_3 = param_1 >> 0x1c & 3;
  *param_4 = param_1 & 0xfffffff;
  return;
}



// FUNCTION 1437f9fc0 MaterialConstructionInfo body=24 status=ok
// SIG undefined MaterialConstructionInfo(void)

undefined4 *
hkaiNavVolumeGenerationSettings::MaterialConstructionInfo::MaterialConstructionInfo
          (undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 1;
  param_1[2] = 1;
  return param_1;
}



// FUNCTION 1437f9fe0 MergingSettings body=53 status=ok
// SIG undefined MergingSettings(void)

undefined4 * hkaiNavVolumeGenerationSettings::MergingSettings::MergingSettings(undefined4 *param_1)

{
  *param_1 = 0x41200000;
  param_1[1] = 0x3f800000;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[6] = 0x3f800000;
  param_1[5] = 0x7b;
  param_1[3] = 10;
  param_1[4] = 1000000;
  *(undefined1 *)(param_1 + 7) = 1;
  return param_1;
}



// FUNCTION 1437fa020 FUN_1437fa020 body=324 status=ok
// SIG undefined FUN_1437fa020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437fa020(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavVolumeGenerationSettings::vftable;
  *(undefined4 *)(param_1 + 8) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x447a0000;
  param_1[0xc] = 0x3fe00000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 1;
  hkaiNavVolumeGenerationSettings::ChunkSettings::ChunkSettings((longlong)param_1 + 0x72);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  hkaiNavVolumeGenerationSettings::MergingSettings::MergingSettings(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x16) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3f800000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  hkaiNavVolumeGenerationSettings::MaterialConstructionInfo::MaterialConstructionInfo
            (param_1 + 0x19);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  uVar1 = uRam00000001467f08d8;
  param_1[4] = _DAT_1467f08d0;
  param_1[5] = uVar1;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 4) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x24) ^ 0x80000000;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 5) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x2c) ^ 0x80000000;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  return param_1;
}



// FUNCTION 1437fa170 FUN_1437fa170 body=450 status=ok
// SIG undefined FUN_1437fa170(void)

void FUN_1437fa170(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavVolumeGenerationSettings::vftable;
  FUN_143716650(param_1 + 0x22);
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0x1f];
  lVar3 = (longlong)(*(int *)(param_1 + 0x20) + -1);
  if (-1 < *(int *)(param_1 + 0x20) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x104)) {
    FUN_143702e10(uVar2,param_1[0x1f],8,*(uint *)((longlong)param_1 + 0x104) & 0x3fffffff);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0x1d];
  lVar3 = (longlong)(*(int *)(param_1 + 0x1e) + -1);
  if (-1 < *(int *)(param_1 + 0x1e) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xf4)) {
    FUN_143702e10(uVar2,param_1[0x1d],8,*(uint *)((longlong)param_1 + 0xf4) & 0x3fffffff);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xe4)) {
    FUN_143702e10(uVar2,param_1[0x1b],0xc,*(uint *)((longlong)param_1 + 0xe4) & 0x3fffffff);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc4)) {
    FUN_143702e10(uVar2,param_1[0x17],0x10,*(uint *)((longlong)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437fa334 FUN_1437fa334 body=9 status=ok
// SIG undefined FUN_1437fa334(void)

void FUN_1437fa334(longlong param_1)

{
  FUN_1437fa350(param_1 + -0x20);
  return;
}



// FUNCTION 1437fa340 FUN_1437fa340 body=9 status=ok
// SIG undefined FUN_1437fa340(void)

void FUN_1437fa340(longlong param_1)

{
  FUN_1437fa3f0(param_1 + -0x20);
  return;
}



// FUNCTION 1437fa350 FUN_1437fa350 body=145 status=ok
// SIG undefined FUN_1437fa350(void)

longlong FUN_1437fa350(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *(undefined ***)(param_1 + 0x20) = hkTask::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1437fa3f0 FUN_1437fa3f0 body=145 status=ok
// SIG undefined FUN_1437fa3f0(void)

longlong FUN_1437fa3f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *(undefined ***)(param_1 + 0x20) = hkTask::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x40;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1437fa484 FUN_1437fa484 body=9 status=ok
// SIG undefined FUN_1437fa484(void)

void FUN_1437fa484(longlong param_1)

{
  FUN_14370b5d0(param_1 + -0x20);
  return;
}



// FUNCTION 1437fa490 FUN_1437fa490 body=1303 status=ok
// SIG undefined FUN_1437fa490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fa490(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int local_3008 [2];
  undefined8 auStack_3000 [127];
  int local_2c08 [2];
  undefined8 auStack_2c00 [127];
  int local_2808 [2];
  undefined8 auStack_2800 [127];
  int local_2408 [2];
  undefined8 auStack_2400 [127];
  longlong local_2008 [256];
  longlong local_1808 [256];
  longlong local_1008 [256];
  longlong local_808 [255];
  undefined8 uStack_10;
  
  uStack_10 = 0x1437fa4b2;
  iVar12 = 0x3f;
  lVar9 = (longlong)param_2;
  iVar7 = 0x3f;
  piVar6 = local_3008;
  iVar13 = iVar7;
  do {
    iVar13 = iVar13 + -1;
    *(undefined8 *)piVar6 = _DAT_1467f06e0;
    *(undefined8 *)((longlong)piVar6 + 8) = uRam00000001467f06e8;
    piVar6 = (int *)((longlong)piVar6 + 0x10);
  } while (-1 < iVar13);
  piVar6 = local_2c08;
  do {
    iVar7 = iVar7 + -1;
    *(undefined8 *)piVar6 = _DAT_1467f06e0;
    *(undefined8 *)(piVar6 + 2) = uRam00000001467f06e8;
    piVar6 = piVar6 + 4;
  } while (-1 < iVar7);
  iVar13 = 0x3f;
  piVar6 = local_2808;
  do {
    iVar13 = iVar13 + -1;
    *(undefined8 *)piVar6 = _DAT_1467f06e0;
    *(undefined8 *)(piVar6 + 2) = uRam00000001467f06e8;
    piVar6 = piVar6 + 4;
  } while (-1 < iVar13);
  piVar6 = local_2408;
  do {
    iVar12 = iVar12 + -1;
    *(undefined8 *)piVar6 = _DAT_1467f06e0;
    *(undefined8 *)(piVar6 + 2) = uRam00000001467f06e8;
    piVar6 = piVar6 + 4;
  } while (-1 < iVar12);
  if (0 < param_2) {
    uVar8 = (ulonglong)((param_2 - 1U >> 2) + 1);
    pbVar5 = (byte *)(param_1 + 1);
    do {
      local_3008[pbVar5[-1]] = local_3008[pbVar5[-1]] + 1;
      local_2c08[*pbVar5] = local_2c08[*pbVar5] + 1;
      local_2808[pbVar5[1]] = local_2808[pbVar5[1]] + 1;
      local_2408[pbVar5[2]] = local_2408[pbVar5[2]] + 1;
      local_3008[pbVar5[7]] = local_3008[pbVar5[7]] + 1;
      local_2c08[pbVar5[8]] = local_2c08[pbVar5[8]] + 1;
      local_2808[pbVar5[9]] = local_2808[pbVar5[9]] + 1;
      local_2408[pbVar5[10]] = local_2408[pbVar5[10]] + 1;
      local_3008[pbVar5[0xf]] = local_3008[pbVar5[0xf]] + 1;
      local_2c08[pbVar5[0x10]] = local_2c08[pbVar5[0x10]] + 1;
      local_2808[pbVar5[0x11]] = local_2808[pbVar5[0x11]] + 1;
      local_2408[pbVar5[0x12]] = local_2408[pbVar5[0x12]] + 1;
      local_3008[pbVar5[0x17]] = local_3008[pbVar5[0x17]] + 1;
      local_2c08[pbVar5[0x18]] = local_2c08[pbVar5[0x18]] + 1;
      local_2808[pbVar5[0x19]] = local_2808[pbVar5[0x19]] + 1;
      local_2408[pbVar5[0x1a]] = local_2408[pbVar5[0x1a]] + 1;
      uVar8 = uVar8 - 1;
      pbVar5 = pbVar5 + 0x20;
    } while (uVar8 != 0);
  }
  lVar10 = 0;
  local_2008[0] = param_3;
  local_1808[0] = param_1;
  local_1008[0] = param_3;
  local_808[0] = param_1;
  lVar11 = lVar10;
  do {
    lVar2 = *(longlong *)((longlong)local_1808 + lVar11);
    *(longlong *)((longlong)local_2008 + lVar11 + 8) =
         *(longlong *)((longlong)local_2008 + lVar11) +
         (longlong)*(int *)((longlong)local_3008 + lVar10) * 8;
    lVar3 = *(longlong *)((longlong)local_1008 + lVar11);
    *(longlong *)((longlong)local_1808 + lVar11 + 8) =
         lVar2 + (longlong)*(int *)((longlong)local_2c08 + lVar10) * 8;
    lVar2 = *(longlong *)((longlong)local_808 + lVar11);
    *(longlong *)((longlong)local_1008 + lVar11 + 8) =
         lVar3 + (longlong)*(int *)((longlong)local_2808 + lVar10) * 8;
    piVar6 = (int *)((longlong)local_2408 + lVar10);
    lVar10 = lVar10 + 4;
    *(longlong *)((longlong)local_808 + lVar11 + 8) = lVar2 + (longlong)*piVar6 * 8;
    lVar11 = lVar11 + 8;
  } while (lVar10 < 0x3fc);
  if (0 < param_2) {
    lVar11 = (lVar9 - 1U >> 2) + 1;
    pbVar5 = (byte *)(param_1 + 0x10);
    do {
      bVar1 = pbVar5[-0x10];
      puVar4 = (undefined8 *)local_2008[bVar1];
      *puVar4 = *(undefined8 *)(pbVar5 + -0x10);
      local_2008[bVar1] = (longlong)(puVar4 + 1);
      bVar1 = pbVar5[-8];
      puVar4 = (undefined8 *)local_2008[bVar1];
      *puVar4 = *(undefined8 *)(pbVar5 + -8);
      local_2008[bVar1] = (longlong)(puVar4 + 1);
      bVar1 = *pbVar5;
      puVar4 = (undefined8 *)local_2008[bVar1];
      *puVar4 = *(undefined8 *)pbVar5;
      local_2008[bVar1] = (longlong)(puVar4 + 1);
      bVar1 = pbVar5[8];
      puVar4 = (undefined8 *)local_2008[bVar1];
      *puVar4 = *(undefined8 *)(pbVar5 + 8);
      local_2008[bVar1] = (longlong)(puVar4 + 1);
      lVar11 = lVar11 + -1;
      pbVar5 = pbVar5 + 0x20;
    } while (lVar11 != 0);
    if (0 < param_2) {
      lVar11 = (lVar9 - 1U >> 2) + 1;
      pbVar5 = (byte *)(param_3 + 0x11);
      do {
        bVar1 = pbVar5[-0x10];
        puVar4 = (undefined8 *)local_1808[bVar1];
        *puVar4 = *(undefined8 *)(pbVar5 + -0x11);
        local_1808[bVar1] = (longlong)(puVar4 + 1);
        bVar1 = pbVar5[-8];
        puVar4 = (undefined8 *)local_1808[bVar1];
        *puVar4 = *(undefined8 *)(pbVar5 + -9);
        local_1808[bVar1] = (longlong)(puVar4 + 1);
        bVar1 = *pbVar5;
        puVar4 = (undefined8 *)local_1808[bVar1];
        *puVar4 = *(undefined8 *)(pbVar5 + -1);
        local_1808[bVar1] = (longlong)(puVar4 + 1);
        bVar1 = pbVar5[8];
        puVar4 = (undefined8 *)local_1808[bVar1];
        *puVar4 = *(undefined8 *)(pbVar5 + 7);
        local_1808[bVar1] = (longlong)(puVar4 + 1);
        lVar11 = lVar11 + -1;
        pbVar5 = pbVar5 + 0x20;
      } while (lVar11 != 0);
      if (0 < param_2) {
        lVar11 = (lVar9 - 1U >> 2) + 1;
        pbVar5 = (byte *)(param_1 + 0x12);
        do {
          bVar1 = pbVar5[-0x10];
          puVar4 = (undefined8 *)local_1008[bVar1];
          *puVar4 = *(undefined8 *)(pbVar5 + -0x12);
          local_1008[bVar1] = (longlong)(puVar4 + 1);
          bVar1 = pbVar5[-8];
          puVar4 = (undefined8 *)local_1008[bVar1];
          *puVar4 = *(undefined8 *)(pbVar5 + -10);
          local_1008[bVar1] = (longlong)(puVar4 + 1);
          bVar1 = *pbVar5;
          puVar4 = (undefined8 *)local_1008[bVar1];
          *puVar4 = *(undefined8 *)(pbVar5 + -2);
          local_1008[bVar1] = (longlong)(puVar4 + 1);
          bVar1 = pbVar5[8];
          puVar4 = (undefined8 *)local_1008[bVar1];
          *puVar4 = *(undefined8 *)(pbVar5 + 6);
          local_1008[bVar1] = (longlong)(puVar4 + 1);
          lVar11 = lVar11 + -1;
          pbVar5 = pbVar5 + 0x20;
        } while (lVar11 != 0);
        if (0 < param_2) {
          lVar9 = (lVar9 - 1U >> 2) + 1;
          pbVar5 = (byte *)(param_3 + 0x13);
          do {
            bVar1 = pbVar5[-0x10];
            puVar4 = (undefined8 *)local_808[bVar1];
            *puVar4 = *(undefined8 *)(pbVar5 + -0x13);
            local_808[bVar1] = (longlong)(puVar4 + 1);
            bVar1 = pbVar5[-8];
            puVar4 = (undefined8 *)local_808[bVar1];
            *puVar4 = *(undefined8 *)(pbVar5 + -0xb);
            local_808[bVar1] = (longlong)(puVar4 + 1);
            bVar1 = *pbVar5;
            puVar4 = (undefined8 *)local_808[bVar1];
            *puVar4 = *(undefined8 *)(pbVar5 + -3);
            local_808[bVar1] = (longlong)(puVar4 + 1);
            bVar1 = pbVar5[8];
            puVar4 = (undefined8 *)local_808[bVar1];
            *puVar4 = *(undefined8 *)(pbVar5 + 5);
            local_808[bVar1] = (longlong)(puVar4 + 1);
            lVar9 = lVar9 + -1;
            pbVar5 = pbVar5 + 0x20;
          } while (lVar9 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1437fa9b0 FUN_1437fa9b0 body=39 status=ok
// SIG undefined FUN_1437fa9b0(void)

longlong FUN_1437fa9b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_142f8c130();
  return param_1;
}



// FUNCTION 1437fa9e0 FUN_1437fa9e0 body=85 status=ok
// SIG undefined FUN_1437fa9e0(void)

undefined1 * FUN_1437fa9e0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 8) = 0x3903126f;
  *(undefined4 *)(param_1 + 0xc) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x10) = 0x14;
  *(undefined4 *)(param_1 + 0x14) = 0x3d4ccccd;
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  *(undefined4 *)(param_1 + 0x1c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x20) = 0x42480000;
  *(undefined4 *)(param_1 + 0x24) = 0x3a83126f;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  return param_1;
}



// FUNCTION 1437faa40 FUN_1437faa40 body=189 status=ok
// SIG undefined FUN_1437faa40(void)

undefined4 * FUN_1437faa40(undefined4 *param_1)

{
  *param_1 = 0x3fc00000;
  param_1[1] = 0x3e19999a;
  param_1[2] = 0x3ecccccd;
  param_1[3] = 0x3f19999a;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f99999a;
  param_1[6] = 0x3f400000;
  param_1[7] = 0x3fc00000;
  param_1[8] = 0x40000000;
  param_1[9] = 40000;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0x42c80000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x3c23d70a;
  param_1[0xe] = 0x3f7d70a4;
  param_1[0xf] = 0x3dcccccd;
  param_1[0x10] = 0x3dcccccd;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  FUN_1437fa9e0(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 1437fab00 FUN_1437fab00 body=232 status=ok
// SIG undefined FUN_1437fab00(void)

undefined4 * FUN_1437fab00(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_18 [16];
  
  *param_1 = 0x3f000000;
  param_1[1] = 0x3dcccccd;
  param_1[2] = 0x3c23d70a;
  param_1[3] = 0x38d1b717;
  local_18 = ZEXT416(0x3db2b8c3);
  uVar1 = FUN_143716040(local_18);
  param_1[4] = uVar1;
  local_18 = ZEXT416(0x3f860a92);
  uVar1 = FUN_143716040(local_18);
  param_1[5] = uVar1;
  local_18 = ZEXT416(0x40060a92);
  param_1[6] = 0x3ca3d70a;
  param_1[7] = 0x3c23d70a;
  param_1[8] = 0x3c23d70a;
  uVar1 = FUN_143716040(local_18);
  local_18 = ZEXT416(0x3db2b8c3);
  param_1[9] = uVar1;
  uVar1 = FUN_143716040(local_18);
  param_1[10] = uVar1;
  param_1[0xb] = 0x3fc25c20;
  param_1[0xc] = 0x3727c5ac;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 1437fabf0 setForNavMeshCutting body=22 status=ok
// SIG undefined setForNavMeshCutting(void)

void hkaiNavMeshEdgeMatchingParameters::setForNavMeshCutting(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x10) = 0x3f7d8235;
  *(undefined4 *)(param_1 + 0xc) = 0xff7fffee;
  return;
}



// FUNCTION 1437fac10 FUN_1437fac10 body=61 status=ok
// SIG undefined FUN_1437fac10(void)

undefined8 * FUN_1437fac10(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 2) = 0x3f860a92;
  FUN_1437fab00((longlong)param_1 + 0x14);
  FUN_1437faa40(param_1 + 10);
  return param_1;
}



// FUNCTION 1437fac50 FUN_1437fac50 body=60 status=ok
// SIG undefined FUN_1437fac50(void)

undefined4 * FUN_1437fac50(undefined4 *param_1)

{
  *param_1 = 0x40a00000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3dcccccd;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  return param_1;
}



// FUNCTION 1437fac90 FUN_1437fac90 body=432 status=ok
// SIG undefined FUN_1437fac90(void)

undefined8 * FUN_1437fac90(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshGenerationUtilsSettings::vftable;
  *(undefined4 *)(param_1 + 3) = 0x3fe00000;
  *(undefined4 *)(param_1 + 6) = 0x3c000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f860a92;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3ba3d70a;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 9) = 0xff;
  FUN_1437fab00((longlong)param_1 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x84) = 2;
  *(undefined4 *)(param_1 + 0x11) = 2;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  FUN_1437fac50(param_1 + 0x12);
  hkaiNavMeshDeprecatedGenerationUtilsSettings::WallClimbingSettings::WallClimbingSettings
            (param_1 + 0x18);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 3;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  *(undefined1 *)(param_1 + 0x26) = 1;
  hkaiOverlappingTriangles::Settings::Settings((longlong)param_1 + 0x134);
  *(undefined2 *)(param_1 + 0x28) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x2a) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0x101;
  FUN_1437faa40(param_1 + 0x2b);
  *(undefined4 *)(param_1 + 0x3f) = 0x8fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x8ffffffe;
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  uVar4 = uRam00000001467f08dc;
  uVar3 = uRam00000001467f08d8;
  uVar2 = uRam00000001467f08d4;
  uVar1 = DAT_1467f08d0;
  *(uint *)(param_1 + 0x1a) = DAT_1467f08d0;
  *(uint *)((longlong)param_1 + 0xd4) = uVar2;
  *(uint *)(param_1 + 0x1b) = uVar3;
  *(uint *)((longlong)param_1 + 0xdc) = uVar4;
  *(uint *)(param_1 + 0x1c) = uVar1 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xe4) = uVar2 ^ 0x80000000;
  *(uint *)(param_1 + 0x1d) = uVar3 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xec) = uVar4 ^ 0x80000000;
  return param_1;
}



// FUNCTION 1437fae40 FUN_1437fae40 body=42 status=ok
// SIG undefined FUN_1437fae40(void)

void FUN_1437fae40(longlong *param_1)

{
  FUN_1437f3ce0(param_1 + 10);
  if (*param_1 != 0) {
    FUN_14370c150();
    return;
  }
  return;
}



// FUNCTION 1437fae70 FUN_1437fae70 body=130 status=ok
// SIG undefined FUN_1437fae70(void)

void FUN_1437fae70(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),0x20,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x10),0x10,*(uint *)(param_1 + 0x1c) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1437faf00 FUN_1437faf00 body=532 status=ok
// SIG undefined FUN_1437faf00(void)

void FUN_1437faf00(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = hkaiNavMeshGenerationUtilsSettings::vftable;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x43) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0xf0 + param_1[0x42];
    do {
      FUN_1437fae40(lVar2);
      lVar2 = lVar2 + -0xf0;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x21c)) {
    FUN_143702e10(uVar1,param_1[0x42],0xf0,*(uint *)((longlong)param_1 + 0x21c) & 0x3fffffff);
  }
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  FUN_143716650(param_1 + 0x41);
  FUN_1437f3ce0(param_1 + 0x2b);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 300)) {
    FUN_143702e10(uVar1,param_1[0x24],8,*(uint *)((longlong)param_1 + 300) & 0x3fffffff);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar2 = param_1[0x20];
  lVar4 = (longlong)(*(int *)(param_1 + 0x21) + -1);
  if (-1 < *(int *)(param_1 + 0x21) + -1) {
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) {
    FUN_143702e10(uVar1,param_1[0x20],8,*(uint *)((longlong)param_1 + 0x10c) & 0x3fffffff);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar2 = param_1[0x1e];
  lVar4 = (longlong)(*(int *)(param_1 + 0x1f) + -1);
  if (-1 < *(int *)(param_1 + 0x1f) + -1) {
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) {
    FUN_143702e10(uVar1,param_1[0x1e],8,*(uint *)((longlong)param_1 + 0xfc) & 0x3fffffff);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  FUN_1437fae70(param_1 + 0x12);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437fb120 FUN_1437fb120 body=190 status=ok
// SIG undefined FUN_1437fb120(void)

void FUN_1437fb120(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x10,*(uint *)(param_1 + 0x44) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0xc,*(uint *)(param_1 + 0x34) & 0x3fffffff);
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



// FUNCTION 1437fb1e0 FUN_1437fb1e0 body=501 status=ok
// SIG undefined FUN_1437fb1e0(void)

void FUN_1437fb1e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySource::vftable;
  uVar1 = FUN_143703a50();
  lVar5 = (longlong)(*(int *)(param_1 + 0xd) + -1);
  if (-1 < *(int *)(param_1 + 0xd) + -1) {
    puVar3 = (uint *)(param_1[0xc] + 0xc + lVar5 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar3 + -3),0x10,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) {
    FUN_143702e10(uVar1,param_1[0xc],0x10,*(uint *)((longlong)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) {
    FUN_143702e10(uVar1,param_1[10],4,*(uint *)((longlong)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  if (param_1[9] != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  lVar5 = param_1[7];
  lVar4 = (longlong)(*(int *)(param_1 + 8) + -1);
  if (-1 < *(int *)(param_1 + 8) + -1) {
    do {
      if (*(longlong *)(lVar5 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar1,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar5 = param_1[5];
  lVar4 = (longlong)(*(int *)(param_1 + 6) + -1);
  if (-1 < *(int *)(param_1 + 6) + -1) {
    do {
      if (*(longlong *)(lVar5 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar1,param_1[5],8,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437fb3e0 FUN_1437fb3e0 body=211 status=ok
// SIG undefined FUN_1437fb3e0(void)

undefined8
FUN_1437fb3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6,undefined2 param_7)

{
  LPVOID pvVar1;
  longlong lVar2;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),200);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1438069b0(lVar2,param_1);
    if (lVar2 != 0) {
      FUN_14370c030(lVar2);
    }
  }
  if (*param_5 != 0) {
    FUN_14370c150();
  }
  *param_5 = lVar2;
  FUN_143803b70(param_2,param_3,lVar2,param_4,param_6,param_7);
  if (lVar2 != 0) {
    FUN_14370c150(lVar2);
  }
  return param_2;
}



// FUNCTION 1437fb4c0 FUN_1437fb4c0 body=87 status=ok
// SIG undefined FUN_1437fb4c0(void)

undefined8 * FUN_1437fb4c0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiEdgeGeometry::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = param_1 + 9;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000001;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 1437fb520 FUN_1437fb520 body=136 status=ok
// SIG undefined FUN_1437fb520(void)

longlong FUN_1437fb520(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437fb120();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x58;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1437fb5b0 FUN_1437fb5b0 body=83 status=ok
// SIG undefined FUN_1437fb5b0(void)

longlong FUN_1437fb5b0(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int param_6)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_6;
  if (param_2 <= param_6) {
    return *param_4 + (longlong)(param_6 - param_2) * 0x14;
  }
  if ((int)param_5[1] != 0) {
    param_6 = *(int *)(*param_5 + lVar1 * 4);
  }
  if (param_6 != -1) {
    return *param_3 + (longlong)param_6 * 0x14;
  }
  return param_1 + lVar1 * 0x14;
}



// FUNCTION 1437fb610 FUN_1437fb610 body=74 status=ok
// SIG undefined FUN_1437fb610(void)

longlong FUN_1437fb610(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                      longlong *param_5,int param_6)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_6;
  if (param_2 <= param_6) {
    return (longlong)(param_6 - param_2) * 0x10 + *param_4;
  }
  if ((int)param_5[1] != 0) {
    param_6 = *(int *)(*param_5 + lVar1 * 4);
  }
  if (param_6 != -1) {
    return (longlong)param_6 * 0x10 + *param_3;
  }
  return lVar1 * 0x10 + param_1;
}



// FUNCTION 1437fb660 FUN_1437fb660 body=203 status=ok
// SIG undefined FUN_1437fb660(void)

void FUN_1437fb660(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar5 = (longlong)param_2;
  uVar8 = param_4;
  do {
    fVar2 = *(float *)(param_1 + ((longlong)(param_2 + param_3) >> 1) * 4);
    lVar9 = (longlong)param_3;
    iVar6 = param_2;
    iVar7 = param_3;
    do {
      pfVar1 = (float *)(param_1 + lVar5 * 4);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        do {
          lVar5 = lVar5 + 1;
          iVar6 = iVar6 + 1;
          pfVar1 = (float *)(param_1 + lVar5 * 4);
        } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
      }
      fVar3 = *(float *)(param_1 + lVar9 * 4);
      while (fVar2 < fVar3) {
        lVar9 = lVar9 + -1;
        iVar7 = iVar7 + -1;
        fVar3 = *(float *)(param_1 + lVar9 * 4);
      }
      if (lVar9 < lVar5) break;
      if (lVar9 != lVar5) {
        uVar4 = *(undefined4 *)(param_1 + lVar9 * 4);
        *(undefined4 *)(param_1 + lVar9 * 4) = *(undefined4 *)(param_1 + lVar5 * 4);
        *(undefined4 *)(param_1 + lVar5 * 4) = uVar4;
      }
      iVar7 = iVar7 + -1;
      lVar9 = lVar9 + -1;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 <= lVar9);
    if (param_2 < iVar7) {
      FUN_1437fb660(param_1,fVar2,iVar7,uVar8);
      uVar8 = param_4 & 0xff;
    }
    param_2 = iVar6;
    if (param_3 <= iVar6) {
      return;
    }
  } while( true );
}



// FUNCTION 1437fb730 FUN_1437fb730 body=993 status=ok
// SIG undefined FUN_1437fb730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1437fb730(float *param_1,float *param_2,longlong param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar13;
  undefined1 in_XMM2 [16];
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  
  fVar11 = *param_1;
  fVar13 = param_1[2];
  auVar5._4_4_ = fVar11;
  auVar5._0_4_ = fVar11;
  auVar5._8_4_ = fVar11;
  auVar5._12_4_ = fVar11;
  if (fVar11 == 0.0) {
    if (fVar13 == 0.0) {
      return false;
    }
    fVar17 = (float)(-(uint)(0.0 < fVar13) & _DAT_1467f0920 |
                    ~-(uint)(0.0 < fVar13) & (uint)DAT_1467f08d0);
  }
  else {
    auVar5 = rcpps(in_XMM1,auVar5);
    in_XMM2._0_4_ = 0.0 - fVar13;
    in_XMM2._4_4_ = 0.0 - fVar13;
    in_XMM2._8_4_ = 0.0 - fVar13;
    in_XMM2._12_4_ = 0.0 - fVar13;
    fVar17 = (2.0 - fVar11 * auVar5._0_4_) * auVar5._0_4_ * in_XMM2._0_4_;
  }
  fVar18 = param_2[1] * fVar11;
  fVar19 = *param_2 * param_1[1];
  fVar20 = param_2[3] * fVar13;
  fVar21 = param_2[2] * param_1[3];
  bVar1 = 0.0 <= fVar11;
  auVar7._0_4_ = param_2[3] * fVar11 * _DAT_1467f0950;
  auVar7._4_4_ = param_2[2] * param_1[1] * fRam00000001467f0954;
  auVar7._8_4_ = param_2[1] * fVar13 * fRam00000001467f0958;
  auVar7._12_4_ = *param_2 * param_1[3] * fRam00000001467f095c;
  auVar16._0_4_ = auVar7._12_4_ + auVar7._4_4_ + auVar7._8_4_ + auVar7._0_4_;
  auVar16._4_4_ = auVar7._8_4_ + auVar7._0_4_ + auVar7._12_4_ + auVar7._4_4_;
  auVar16._8_4_ = auVar7._4_4_ + auVar7._12_4_ + auVar7._0_4_ + auVar7._8_4_;
  auVar16._12_4_ = auVar7._0_4_ + auVar7._8_4_ + auVar7._4_4_ + auVar7._12_4_;
  fVar25 = fVar18 - fVar19;
  fVar26 = fVar18 - fVar19;
  fVar27 = fVar18 - fVar19;
  fVar18 = fVar18 - fVar19;
  fVar19 = fVar20 - fVar21;
  fVar28 = auVar16._0_4_ * _DAT_1467f07e0;
  fVar29 = auVar16._4_4_ * fRam00000001467f07e4;
  fVar30 = auVar16._8_4_ * fRam00000001467f07e8;
  fVar31 = auVar16._12_4_ * fRam00000001467f07ec;
  fVar11 = fVar17;
  fVar13 = DAT_1467f08d0;
  if (fVar25 == 0.0) {
    if (auVar16._0_4_ == 0.0) {
      fVar18 = (float)(~-(uint)bVar1 & _DAT_1467f0920 | -(uint)bVar1 & (uint)DAT_1467f08d0);
      fVar17 = (float)(~-(uint)(0.0 < fVar19) & _DAT_1467f0920 |
                      -(uint)(0.0 < fVar19) & (uint)DAT_1467f08d0);
    }
    else {
      auVar5 = rcpps(auVar7,auVar16);
      uVar9 = -(uint)(0.0 < auVar16._0_4_ != bVar1);
      fVar18 = (float)(~uVar9 & _DAT_1467f0920 | uVar9 & (uint)DAT_1467f08d0);
      fVar11 = DAT_1467f08d0;
      fVar13 = (2.0 - auVar16._0_4_ * auVar5._0_4_) * auVar5._0_4_ * (0.0 - fVar19);
    }
  }
  else {
    fVar22 = fVar28 * fVar28 - fVar19 * fVar25;
    fVar23 = fVar29 * fVar29 - (fVar20 - fVar21) * fVar26;
    fVar24 = fVar30 * fVar30 - (fVar20 - fVar21) * fVar27;
    fVar20 = fVar31 * fVar31 - (fVar20 - fVar21) * fVar18;
    if (fVar22 <= 0.0) {
      uVar9 = -(uint)(0.0 < fVar19 != bVar1);
      fVar18 = (float)(uVar9 & _DAT_1467f0920 | ~uVar9 & (uint)DAT_1467f08d0);
      fVar17 = DAT_1467f08d0;
    }
    else {
      auVar2._4_4_ = fVar23;
      auVar2._0_4_ = fVar22;
      auVar2._8_4_ = fVar24;
      auVar2._12_4_ = fVar20;
      auVar5 = rsqrtps(in_XMM2,auVar2);
      fVar11 = auVar5._0_4_;
      fVar13 = auVar5._4_4_;
      fVar21 = auVar5._8_4_;
      fVar14 = auVar5._12_4_;
      uVar9 = -(uint)(0.0 < fVar25 != bVar1);
      auVar6._0_4_ = (3.0 - fVar22 * fVar11 * fVar11) * fVar11 * 0.5 * fVar22;
      auVar6._4_4_ = (3.0 - fVar23 * fVar13 * fVar13) * fVar13 * 0.5 * fVar23;
      auVar6._8_4_ = (3.0 - fVar24 * fVar21 * fVar21) * fVar21 * 0.5 * fVar24;
      auVar6._12_4_ = (3.0 - fVar20 * fVar14 * fVar14) * fVar14 * 0.5 * fVar20;
      auVar3._4_4_ = fVar26;
      auVar3._0_4_ = fVar25;
      auVar3._8_4_ = fVar27;
      auVar3._12_4_ = fVar18;
      auVar7 = rcpps(auVar6,auVar3);
      auVar12._0_4_ =
           0.0 - ((float)(~-(uint)(fVar22 <= 0.0) & (uint)auVar6._0_4_ ^ (uint)fVar28 & 0x80000000)
                 + fVar28);
      auVar12._4_4_ =
           0.0 - ((float)(~-(uint)(fVar23 <= 0.0) & (uint)auVar6._4_4_ ^ (uint)fVar29 & 0x80000000)
                 + fVar29);
      auVar12._8_4_ =
           0.0 - ((float)(~-(uint)(fVar24 <= 0.0) & (uint)auVar6._8_4_ ^ (uint)fVar30 & 0x80000000)
                 + fVar30);
      auVar12._12_4_ =
           0.0 - ((float)(~-(uint)(fVar20 <= 0.0) & (uint)auVar6._12_4_ ^ (uint)fVar31 & 0x80000000)
                 + fVar31);
      auVar4._0_4_ = fVar25 * auVar7._0_4_;
      auVar4._4_4_ = fVar26 * auVar7._4_4_;
      auVar4._8_4_ = fVar27 * auVar7._8_4_;
      auVar4._12_4_ = fVar18 * auVar7._12_4_;
      auVar5 = rcpps(auVar4,auVar12);
      fVar18 = (2.0 - auVar12._0_4_ * auVar5._0_4_) * auVar5._0_4_ * fVar19;
      fVar11 = (2.0 - auVar4._0_4_) * auVar7._0_4_ * auVar12._0_4_;
      fVar13 = (float)(uVar9 & _DAT_1467f0920 | ~uVar9 & (uint)DAT_1467f08d0);
    }
  }
  uVar9 = -(uint)(fVar17 < fVar11) ^ 0xffffffff;
  uVar10 = -(uint)(fVar13 < fVar18) ^ 0xffffffff;
  fVar19 = (float)(~-(uint)(fVar11 < fVar17) & (uint)fVar17 |
                  -(uint)(fVar11 < fVar17) & (uint)fVar11);
  fVar20 = (float)(~-(uint)(fVar18 < fVar13) & (uint)fVar13 |
                  -(uint)(fVar18 < fVar13) & (uint)fVar18);
  fVar11 = (float)(~uVar9 & (uint)fVar11 | uVar9 & (uint)fVar17);
  fVar13 = (float)(~uVar10 & (uint)fVar18 | uVar10 & (uint)fVar13);
  uVar9 = -(uint)(fVar20 < fVar19) ^ 0xffffffff;
  uVar10 = -(uint)(fVar13 < fVar11) ^ 0xffffffff;
  auVar8._0_4_ = -(uint)(fVar19 < fVar20) & (uint)fVar19;
  auVar8._4_4_ = uVar9 & (uint)fVar20;
  auVar8._8_4_ = -(uint)(fVar11 < fVar13) & (uint)fVar11;
  auVar8._12_4_ = uVar10 & (uint)fVar13;
  auVar15._0_4_ = ~-(uint)(fVar19 < fVar20) & (uint)fVar20;
  auVar15._4_4_ = ~uVar9 & (uint)fVar19;
  auVar15._8_4_ = ~-(uint)(fVar11 < fVar13) & (uint)fVar13;
  auVar15._12_4_ = ~uVar10 & (uint)fVar11;
  auVar15 = auVar15 | auVar8;
  local_b8 = auVar15._0_4_;
  fVar11 = auVar15._4_4_;
  fVar13 = auVar15._8_4_;
  uVar9 = -(uint)(fVar13 < fVar11) ^ 0xffffffff;
  local_b4 = (float)(~-(uint)(fVar11 < fVar13) & (uint)fVar13 |
                    -(uint)(fVar11 < fVar13) & (uint)fVar11);
  fVar11 = (float)(~uVar9 & (uint)fVar11 | uVar9 & (uint)fVar13);
  if (local_b8 < local_b4) {
    local_b0 = 0;
    local_a8 = 0xffffffff;
    FUN_1437f63f0(param_3,&local_b8);
  }
  if (fVar11 < auVar15._12_4_) {
    local_b0 = 0;
    local_a8 = 0xffffffff;
    local_b8 = fVar11;
    local_b4 = auVar15._12_4_;
    FUN_1437f63f0(param_3,&local_b8);
  }
  return *(int *)(param_3 + 8) != 0;
}



// FUNCTION 1437fbb20 FUN_1437fbb20 body=878 status=ok
// SIG undefined FUN_1437fbb20(void)

bool FUN_1437fbb20(float *param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined4 local_78;
  
  fVar3 = param_1[1];
  fVar5 = param_1[3];
  fVar1 = param_1[2];
  if (*param_1 == 0.0) {
    if (fVar1 != 0.0) {
      if (fVar3 == 0.0) {
        if ((0.0 < -fVar5 == 0.0 < fVar1) && (-fVar5 <= fVar1 == 0.0 < fVar1)) {
          local_88 = 0.0;
          fStack_84 = 1.0;
LAB_1437fbba5:
          uStack_80 = 0;
          local_78 = 0xffffffff;
          FUN_1437f63f0(param_2,&local_88);
          return true;
        }
      }
      else {
        fStack_84 = (-fVar1 - fVar5) * (1.0 / fVar3);
        fVar3 = -((1.0 / fVar3) * fVar5);
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        if (fStack_84 <= 0.0) {
          fStack_84 = 0.0;
        }
        if (1.0 <= fVar3) {
          fVar3 = 1.0;
        }
        if (1.0 <= fStack_84) {
          fStack_84 = 1.0;
        }
        local_88 = fVar3;
        if ((fVar3 < fStack_84) ||
           (bVar2 = fStack_84 < fVar3, local_88 = fStack_84, fStack_84 = fVar3, bVar2))
        goto LAB_1437fbba5;
      }
    }
    return false;
  }
  fVar4 = 1.0 / *param_1;
  fVar3 = fVar3 * fVar4;
  fVar5 = fVar5 * fVar4;
  fVar9 = -fVar3;
  fVar7 = -(fVar1 * fVar4);
  if (fVar3 == 0.0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = -(fVar5 / fVar3);
    if (-(fVar5 / fVar3) <= 0.0) {
      fVar8 = 0.0;
    }
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
  }
  if (fVar3 + 1.0 == 0.0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (fVar7 - fVar5) / (fVar3 + 1.0);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
  }
  if (fVar5 <= fVar1 * fVar4 * fVar3) {
    if ((0.0 < fVar7) && (0.0 < fVar9)) {
      local_88 = fVar6;
      if (fVar9 <= 1.0) {
        local_88 = 0.0;
      }
      if (local_88 < fVar8) {
        uStack_80 = 0;
        local_78 = 0xffffffff;
        fStack_84 = fVar8;
        FUN_1437f63f0(param_2,&local_88);
      }
    }
    if ((1.0 <= fVar7) || (1.0 <= fVar9)) goto LAB_1437fbe4f;
    if (0.0 <= fVar9) {
      fVar8 = 1.0;
    }
    local_88 = fVar6;
    fStack_84 = fVar8;
    if (fVar8 <= fVar6) goto LAB_1437fbe4f;
  }
  else {
    if ((0.0 < fVar7) && (fVar9 < 1.0)) {
      local_88 = fVar8;
      if (0.0 <= fVar9) {
        local_88 = 0.0;
      }
      if (local_88 < fVar6) {
        uStack_80 = 0;
        local_78 = 0xffffffff;
        fStack_84 = fVar6;
        FUN_1437f63f0(param_2,&local_88);
      }
    }
    if ((1.0 <= fVar7) || (fVar9 <= 0.0)) goto LAB_1437fbe4f;
    if (fVar9 <= 1.0) {
      fVar6 = 1.0;
    }
    local_88 = fVar8;
    fStack_84 = fVar6;
    if (fVar6 <= fVar8) goto LAB_1437fbe4f;
  }
  uStack_80 = 0;
  local_78 = 0xffffffff;
  FUN_1437f63f0(param_2,&local_88);
LAB_1437fbe4f:
  return *(int *)(param_2 + 8) != 0;
}



// FUNCTION 1437fbe90 FUN_1437fbe90 body=191 status=ok
// SIG undefined FUN_1437fbe90(void)

void FUN_1437fbe90(float *param_1,float *param_2,float *param_3,longlong *param_4)

{
  int iVar1;
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
  longlong lVar13;
  undefined8 uVar14;
  float *pfVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar14 = FUN_143703a50();
  lVar13 = param_4[1];
  uVar16 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  iVar17 = (int)lVar13 + 8;
  if ((int)uVar16 < iVar17) {
    iVar1 = uVar16 * 2;
    if (iVar17 < iVar1) {
      iVar17 = iVar1;
    }
    FUN_14370c310(uVar14,param_4,iVar17,0x10);
  }
  *(int *)(param_4 + 1) = (int)param_4[1] + 8;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  fVar18 = *param_1 + *param_3;
  fVar19 = fVar2 + param_3[1];
  fVar20 = fVar3 + param_3[2];
  fVar21 = fVar4 + param_3[3];
  pfVar15 = (float *)((longlong)(int)lVar13 * 0x10 + *param_4);
  *pfVar15 = *param_1;
  pfVar15[1] = fVar2;
  pfVar15[2] = fVar3;
  pfVar15[3] = fVar4;
  uVar14 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(pfVar15 + 4) = *(undefined8 *)param_2;
  *(undefined8 *)(pfVar15 + 6) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(pfVar15 + 8) = *(undefined8 *)param_2;
  *(undefined8 *)(pfVar15 + 10) = uVar14;
  pfVar15[0xc] = fVar5 + fVar9;
  pfVar15[0xd] = fVar6 + fVar10;
  pfVar15[0xe] = fVar7 + fVar11;
  pfVar15[0xf] = fVar8 + fVar12;
  pfVar15[0x10] = fVar5 + fVar9;
  pfVar15[0x11] = fVar6 + fVar10;
  pfVar15[0x12] = fVar7 + fVar11;
  pfVar15[0x13] = fVar8 + fVar12;
  pfVar15[0x14] = fVar18;
  pfVar15[0x15] = fVar19;
  pfVar15[0x16] = fVar20;
  pfVar15[0x17] = fVar21;
  pfVar15[0x18] = fVar18;
  pfVar15[0x19] = fVar19;
  pfVar15[0x1a] = fVar20;
  pfVar15[0x1b] = fVar21;
  uVar14 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(pfVar15 + 0x1c) = *(undefined8 *)param_1;
  *(undefined8 *)(pfVar15 + 0x1e) = uVar14;
  return;
}



// FUNCTION 1437fbf50 FUN_1437fbf50 body=97 status=ok
// SIG undefined FUN_1437fbf50(void)

void FUN_1437fbf50(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  piVar4 = (int *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x28));
  puVar1 = (undefined8 *)(lVar3 + (longlong)*piVar4 * 0x10);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  puVar1 = (undefined8 *)(lVar3 + (longlong)piVar4[1] * 0x10);
  local_28 = *puVar1;
  uStack_20 = puVar1[1];
  puVar2 = (undefined4 *)(lVar3 + (longlong)piVar4[2] * 0x10);
  local_18 = *puVar2;
  uStack_14 = puVar2[1];
  uStack_10 = puVar2[2];
  uStack_c = puVar2[3];
  FUN_1437fc1f0(&local_38,&local_28,&local_18,param_3);
  return;
}



// FUNCTION 1437fbfc0 FUN_1437fbfc0 body=554 status=ok
// SIG undefined FUN_1437fbfc0(void)

void FUN_1437fbfc0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
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
  int iVar19;
  int *piVar20;
  undefined8 uVar21;
  float *pfVar22;
  uint uVar23;
  float *pfVar24;
  uint uVar25;
  int iVar26;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  piVar20 = (int *)FUN_1437fb610(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x20),
                                 lVar2 + 0xb0,lVar2 + 0xd0,lVar2 + 0x90,*param_2);
  iVar19 = piVar20[2];
  uVar25 = (uint)(short)iVar19;
  iVar1 = *piVar20;
  uVar21 = FUN_143703a50();
  uVar23 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar23 < (int)(uVar25 * 2)) {
    uVar3 = uVar25;
    if ((int)(uVar25 * 2) < (int)(uVar23 * 2)) {
      uVar3 = uVar23;
    }
    FUN_14370c310(uVar21,param_3,uVar3 * 2,0x10);
  }
  iVar26 = 0;
  if (0 < (short)iVar19) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x18);
      piVar20 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x30),
                                     lVar2 + 0xc0,lVar2 + 0xe0,lVar2 + 0x70,iVar26 + iVar1);
      uVar21 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar21,param_3,0x10);
      }
      pfVar24 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar19 = *piVar20;
      if (iVar19 < *(int *)(lVar2 + 0x40)) {
        pfVar22 = (float *)((longlong)iVar19 * 0x10 + *(longlong *)(lVar2 + 0x38));
      }
      else {
        pfVar22 = (float *)((longlong)(iVar19 - *(int *)(lVar2 + 0x40)) * 0x10 +
                           *(longlong *)(lVar2 + 0xf0));
      }
      fVar4 = *pfVar22;
      fVar5 = pfVar22[1];
      fVar6 = pfVar22[2];
      fVar7 = *(float *)(param_1 + 0x54);
      fVar8 = *(float *)(param_1 + 0x58);
      fVar9 = *(float *)(param_1 + 0x5c);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar11 = *(float *)(param_1 + 0x48);
      fVar12 = *(float *)(param_1 + 0x4c);
      fVar13 = *(float *)(param_1 + 100);
      fVar14 = *(float *)(param_1 + 0x68);
      fVar15 = *(float *)(param_1 + 0x6c);
      fVar16 = *(float *)(param_1 + 0x74);
      fVar17 = *(float *)(param_1 + 0x78);
      fVar18 = *(float *)(param_1 + 0x7c);
      *pfVar24 = fVar5 * *(float *)(param_1 + 0x50) + fVar4 * *(float *)(param_1 + 0x40) +
                 fVar6 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
      pfVar24[1] = fVar5 * fVar7 + fVar4 * fVar10 + fVar6 * fVar13 + fVar16;
      pfVar24[2] = fVar5 * fVar8 + fVar4 * fVar11 + fVar6 * fVar14 + fVar17;
      pfVar24[3] = fVar5 * fVar9 + fVar4 * fVar12 + fVar6 * fVar15 + fVar18;
      uVar21 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar21,param_3,0x10);
      }
      pfVar24 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
      lVar2 = *(longlong *)(param_1 + 0x18);
      iVar19 = piVar20[1];
      if (iVar19 < *(int *)(lVar2 + 0x40)) {
        pfVar22 = (float *)((longlong)iVar19 * 0x10 + *(longlong *)(lVar2 + 0x38));
      }
      else {
        pfVar22 = (float *)((longlong)(iVar19 - *(int *)(lVar2 + 0x40)) * 0x10 +
                           *(longlong *)(lVar2 + 0xf0));
      }
      fVar4 = *pfVar22;
      fVar5 = pfVar22[1];
      fVar6 = pfVar22[2];
      iVar26 = iVar26 + 1;
      fVar7 = *(float *)(param_1 + 0x54);
      fVar8 = *(float *)(param_1 + 0x58);
      fVar9 = *(float *)(param_1 + 0x5c);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar11 = *(float *)(param_1 + 0x48);
      fVar12 = *(float *)(param_1 + 0x4c);
      fVar13 = *(float *)(param_1 + 100);
      fVar14 = *(float *)(param_1 + 0x68);
      fVar15 = *(float *)(param_1 + 0x6c);
      fVar16 = *(float *)(param_1 + 0x74);
      fVar17 = *(float *)(param_1 + 0x78);
      fVar18 = *(float *)(param_1 + 0x7c);
      *pfVar24 = fVar5 * *(float *)(param_1 + 0x50) + fVar4 * *(float *)(param_1 + 0x40) +
                 fVar6 * *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x70);
      pfVar24[1] = fVar5 * fVar7 + fVar4 * fVar10 + fVar6 * fVar13 + fVar16;
      pfVar24[2] = fVar5 * fVar8 + fVar4 * fVar11 + fVar6 * fVar14 + fVar17;
      pfVar24[3] = fVar5 * fVar9 + fVar4 * fVar12 + fVar6 * fVar15 + fVar18;
    } while (iVar26 < (int)uVar25);
  }
  return;
}



// FUNCTION 1437fc1f0 FUN_1437fc1f0 body=175 status=ok
// SIG undefined FUN_1437fc1f0(void)

void FUN_1437fc1f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = FUN_143703a50();
  lVar2 = param_4[1];
  uVar5 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  iVar6 = (int)lVar2 + 6;
  if ((int)uVar5 < iVar6) {
    iVar1 = uVar5 * 2;
    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }
    FUN_14370c310(uVar3,param_4,iVar6,0x10);
  }
  *(int *)(param_4 + 1) = (int)param_4[1] + 6;
  uVar3 = param_1[1];
  puVar4 = (undefined8 *)((longlong)(int)lVar2 * 0x10 + *param_4);
  *puVar4 = *param_1;
  puVar4[1] = uVar3;
  uVar3 = param_2[1];
  puVar4[2] = *param_2;
  puVar4[3] = uVar3;
  uVar3 = param_2[1];
  puVar4[4] = *param_2;
  puVar4[5] = uVar3;
  uVar3 = param_3[1];
  puVar4[6] = *param_3;
  puVar4[7] = uVar3;
  uVar3 = param_3[1];
  puVar4[8] = *param_3;
  puVar4[9] = uVar3;
  uVar3 = param_1[1];
  puVar4[10] = *param_1;
  puVar4[0xb] = uVar3;
  return;
}



// FUNCTION 1437fc2a0 FUN_1437fc2a0 body=383 status=ok
// SIG undefined FUN_1437fc2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1437fc2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4,float *param_5
             ,float *param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [128];
  
  local_a8 = local_98;
  local_a0 = 0;
  local_9c = 0x80000008;
  uVar2 = FUN_1437fbe90(param_4,param_5,param_6,&local_a8);
  fVar14 = param_6[1] * (*param_5 - *param_4) - (param_5[1] - param_4[1]) * *param_6;
  fVar15 = param_6[2] * (param_5[1] - param_4[1]) - (param_5[2] - param_4[2]) * param_6[1];
  fVar16 = *param_6 * (param_5[2] - param_4[2]) - (*param_5 - *param_4) * param_6[2];
  fVar17 = param_6[3] * (param_5[3] - param_4[3]) - (param_5[3] - param_4[3]) * param_6[3];
  auVar6._4_4_ = -(uint)(ABS(fVar16) <= fRam00000001467f08f4);
  auVar6._0_4_ = -(uint)(ABS(fVar15) <= _DAT_1467f08f0);
  auVar6._8_4_ = -(uint)(ABS(fVar14) <= fRam00000001467f08f8);
  auVar6._12_4_ = -(uint)(ABS(fVar17) <= fRam00000001467f08fc);
  uVar2 = movmskps(uVar2,auVar6);
  if (((byte)uVar2 & 7) == 7) {
    uVar2 = 0;
  }
  else {
    fVar4 = fVar15 * fVar15;
    fVar7 = fVar16 * fVar16;
    auVar5._8_4_ = fVar14 * fVar14;
    auVar5._4_4_ = auVar5._8_4_;
    auVar5._0_4_ = auVar5._8_4_;
    auVar5._12_4_ = auVar5._8_4_;
    fVar10 = fVar7 + fVar4 + auVar5._8_4_;
    fVar11 = fVar7 + fVar4 + auVar5._8_4_;
    fVar12 = fVar7 + fVar4 + auVar5._8_4_;
    fVar13 = fVar7 + fVar4 + auVar5._8_4_;
    auVar1._4_4_ = fVar11;
    auVar1._0_4_ = fVar10;
    auVar1._8_4_ = fVar12;
    auVar1._12_4_ = fVar13;
    auVar6 = rsqrtps(auVar5,auVar1);
    fVar4 = auVar6._0_4_;
    fVar7 = auVar6._4_4_;
    fVar8 = auVar6._8_4_;
    fVar9 = auVar6._12_4_;
    local_b8 = fVar15 * (float)(~-(uint)(fVar10 <= 0.0) &
                               (uint)((3.0 - fVar10 * fVar4 * fVar4) * fVar4 * 0.5));
    fStack_b4 = fVar16 * (float)(~-(uint)(fVar11 <= 0.0) &
                                (uint)((3.0 - fVar11 * fVar7 * fVar7) * fVar7 * 0.5));
    fStack_b0 = fVar14 * (float)(~-(uint)(fVar12 <= 0.0) &
                                (uint)((3.0 - fVar12 * fVar8 * fVar8) * fVar8 * 0.5));
    fStack_ac = fVar17 * (float)(~-(uint)(fVar13 <= 0.0) &
                                (uint)((3.0 - fVar13 * fVar9 * fVar9) * fVar9 * 0.5));
    uVar2 = FUN_1437fc6f0(param_1,param_2,param_3,&local_a8,&local_b8,param_7,param_8);
  }
  uVar3 = FUN_143703a50();
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(uVar3,local_a8,0x10,local_9c & 0x3fffffff);
  }
  return uVar2;
}



// FUNCTION 1437fc420 FUN_1437fc420 body=383 status=ok
// SIG undefined FUN_1437fc420(void)

undefined4
FUN_1437fc420(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int param_5,
             undefined4 param_6,undefined8 param_7)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined1 local_108 [256];
  
  local_118 = local_108;
  local_110 = 0;
  local_10c = 0x80000010;
  FUN_1437fbf50(param_4,param_5,&local_118);
  lVar3 = *(longlong *)(param_4 + 0x18);
  piVar6 = (int *)((longlong)param_5 * 0x10 + *(longlong *)(param_4 + 0x28));
  pfVar1 = (float *)(lVar3 + (longlong)*piVar6 * 0x10);
  pfVar2 = (float *)(lVar3 + (longlong)piVar6[1] * 0x10);
  fVar13 = *pfVar2 - *pfVar1;
  fVar14 = pfVar2[1] - pfVar1[1];
  fVar15 = pfVar2[2] - pfVar1[2];
  fVar16 = pfVar2[3] - pfVar1[3];
  pfVar2 = (float *)(lVar3 + (longlong)piVar6[2] * 0x10);
  fVar7 = *pfVar2 - *pfVar1;
  fVar10 = pfVar2[1] - pfVar1[1];
  fVar11 = pfVar2[2] - pfVar1[2];
  fVar12 = pfVar2[3] - pfVar1[3];
  fStack_120 = fVar10 * fVar13 - fVar14 * fVar7;
  local_128 = fVar11 * fVar14 - fVar15 * fVar10;
  fStack_124 = fVar7 * fVar15 - fVar13 * fVar11;
  fVar7 = local_128 * local_128;
  fVar10 = fStack_124 * fStack_124;
  auVar8._8_4_ = fStack_120 * fStack_120;
  auVar8._4_4_ = auVar8._8_4_;
  auVar8._0_4_ = auVar8._8_4_;
  auVar8._12_4_ = auVar8._8_4_;
  fVar14 = fVar10 + fVar7 + auVar8._8_4_;
  fVar15 = fVar10 + fVar7 + auVar8._8_4_;
  fVar17 = fVar10 + fVar7 + auVar8._8_4_;
  fVar18 = fVar10 + fVar7 + auVar8._8_4_;
  auVar9._4_4_ = fVar15;
  auVar9._0_4_ = fVar14;
  auVar9._8_4_ = fVar17;
  auVar9._12_4_ = fVar18;
  auVar9 = rsqrtps(auVar8,auVar9);
  fVar7 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar13 = auVar9._12_4_;
  local_128 = local_128 *
              (float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar14 * fVar7 * fVar7) * fVar7 * 0.5)
                     );
  fStack_124 = fStack_124 *
               (float)(~-(uint)(fVar15 <= 0.0) &
                      (uint)((3.0 - fVar15 * fVar10 * fVar10) * fVar10 * 0.5));
  fStack_120 = fStack_120 *
               (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar11 * fVar11) * fVar11 * 0.5));
  fStack_11c = (fVar12 * fVar16 - fVar16 * fVar12) *
               (float)(~-(uint)(fVar18 <= 0.0) &
                      (uint)((3.0 - fVar18 * fVar13 * fVar13) * fVar13 * 0.5));
  uVar4 = FUN_1437fc6f0(param_1,param_2,param_3,&local_118,&local_128,param_6,param_7);
  uVar5 = FUN_143703a50();
  local_110 = 0;
  if (-1 < (int)local_10c) {
    FUN_143702e10(uVar5,local_118,0x10,local_10c & 0x3fffffff);
  }
  return uVar4;
}



// FUNCTION 1437fc5a0 FUN_1437fc5a0 body=321 status=ok
// SIG undefined FUN_1437fc5a0(void)

undefined4
FUN_1437fc5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,int *param_5
             ,undefined4 param_6,undefined8 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined1 local_108 [256];
  
  piVar1 = param_5;
  param_5._0_4_ = *param_5;
  if (*(int *)(*(longlong *)(param_4 + 0x18) + 0x108) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)((longlong)(int)param_5 + *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x100))
    ;
  }
  if ((bVar4 & 1) == 0) {
    local_118 = local_108;
    local_110 = 0;
    local_10c = 0x80000010;
    FUN_1437fbfc0(param_4,&param_5,&local_118);
    param_5._0_4_ = *piVar1;
    FUN_143852420(local_128,param_4,&param_5,local_138);
    uVar2 = FUN_1437fc6f0(param_1,param_2,param_3,&local_118,local_138,param_6,param_7);
    uVar3 = FUN_143703a50();
    local_110 = 0;
    if (-1 < (int)local_10c) {
      FUN_143702e10(uVar3,local_118,0x10,local_10c & 0x3fffffff);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1437fc6f0 FUN_1437fc6f0 body=2115 status=ok
// SIG undefined FUN_1437fc6f0(void)

/* WARNING: Removing unreachable block (ram,0x0001437fc831) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1437fc6f0(float *param_1,float *param_2,undefined1 (*param_3) [16],longlong *param_4,
                       float *param_5,undefined4 param_6,longlong param_7)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 in_EAX;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  float local_res18 [2];
  longlong local_180;
  uint local_178;
  uint local_174;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 local_158;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  fVar17 = fRam00000001467f06fc;
  auVar19 = *param_3;
  fVar34 = auVar19._0_4_;
  fVar36 = auVar19._4_4_;
  fVar37 = auVar19._8_4_;
  auVar24._4_4_ = -(uint)(fVar36 == 0.0);
  auVar24._0_4_ = -(uint)(fVar34 == 0.0);
  auVar24._8_4_ = -(uint)(fVar37 == 0.0);
  auVar24._12_4_ = -(uint)(auVar19._12_4_ == 0.0);
  uVar6 = movmskps(in_EAX,auVar24);
  if ((char)(uVar6 & 7) == '\a') {
    return 0;
  }
  fVar35 = *param_1;
  fVar38 = param_1[1];
  fVar5 = param_1[2];
  local_108 = *param_2 - fVar35;
  fStack_104 = param_2[1] - fVar38;
  fStack_100 = param_2[2] - fVar5;
  fStack_fc = fRam00000001467f06fc - fRam00000001467f06fc;
  fVar31 = fVar36 * local_108 - fStack_104 * fVar34;
  fVar32 = fVar37 * fStack_104 - fStack_100 * fVar36;
  fVar33 = fVar34 * fStack_100 - local_108 * fVar37;
  fVar22 = fVar32 * fVar32;
  fVar26 = fVar33 * fVar33;
  auVar23._8_4_ = fVar31 * fVar31;
  auVar23._4_4_ = auVar23._8_4_;
  auVar23._0_4_ = auVar23._8_4_;
  auVar23._12_4_ = auVar23._8_4_;
  fVar28 = fVar26 + fVar22 + auVar23._8_4_;
  fVar29 = fVar26 + fVar22 + auVar23._8_4_;
  fVar30 = fVar26 + fVar22 + auVar23._8_4_;
  auVar2._4_4_ = fVar29;
  auVar2._0_4_ = fVar28;
  auVar2._8_4_ = fVar30;
  auVar2._12_4_ = fVar26 + fVar22 + auVar23._8_4_;
  auVar24 = rsqrtps(auVar23,auVar2);
  fVar22 = auVar24._0_4_;
  fVar26 = auVar24._4_4_;
  fVar27 = auVar24._8_4_;
  fVar32 = (float)(~-(uint)(fVar28 <= 0.0) & (uint)((3.0 - fVar28 * fVar22 * fVar22) * fVar22 * 0.5)
                  ) * fVar32;
  fVar33 = (float)(~-(uint)(fVar29 <= 0.0) & (uint)((3.0 - fVar29 * fVar26 * fVar26) * fVar26 * 0.5)
                  ) * fVar33;
  fVar31 = (float)(~-(uint)(fVar30 <= 0.0) & (uint)((3.0 - fVar30 * fVar27 * fVar27) * fVar27 * 0.5)
                  ) * fVar31;
  auVar18._4_4_ = -(uint)(ABS(fVar33) <= fRam00000001467f08f4);
  auVar18._0_4_ = -(uint)(ABS(fVar32) <= _DAT_1467f08f0);
  auVar18._8_4_ = -(uint)(ABS(fVar31) <= fRam00000001467f08f8);
  auVar18._12_4_ = -(uint)(0.0 <= fRam00000001467f08fc);
  uVar7 = movmskps(uVar6 & 7,auVar18);
  if (((byte)uVar7 & 7) == 7) {
    return 0;
  }
  local_res18[0] = 0.001;
  local_f8._0_8_ = auVar19._0_8_ << 0x20;
  local_f8._8_8_ = auVar19._8_8_ << 0x20 | auVar19._0_8_ >> 0x20;
  local_f8 = local_f8 >> 0x20;
  local_168 = 0.001;
  fStack_164 = 0.001;
  fStack_160 = 0.001;
  fStack_15c = 0.001;
  uStack_dc = 0;
  fStack_cc = fRam00000001467f06fc;
  local_e8 = fVar32;
  fStack_e4 = fVar33;
  fStack_e0 = fVar31;
  local_d8 = fVar35;
  fStack_d4 = fVar38;
  fStack_d0 = fVar5;
  FUN_143786e90(&local_148,local_res18,&local_108,&local_168);
  fVar22 = *param_5;
  fVar26 = param_5[1];
  fVar27 = param_5[2];
  pfVar9 = (float *)*param_4;
  fVar28 = fVar26 * fVar32 - fVar33 * fVar22;
  fVar29 = fVar27 * fVar33 - fVar31 * fVar26;
  fVar30 = fVar22 * fVar31 - fVar32 * fVar27;
  fVar31 = fVar30 * local_138 + fVar29 * local_148 + fVar28 * local_128;
  auVar19._0_4_ = fVar31 - _DAT_1467f06e0;
  auVar19._4_4_ = fVar31 - fRam00000001467f06e4;
  auVar19._8_4_ = fVar31 - fRam00000001467f06e8;
  auVar19._12_4_ = fVar31 - DAT_1467f06ec;
  if (ABS(auVar19._0_4_) < 0.001) {
    return 0;
  }
  auVar4._4_4_ = fVar31;
  auVar4._0_4_ = fVar31;
  auVar4._8_4_ = fVar31;
  auVar4._12_4_ = fVar31;
  auVar19 = rcpps(auVar19,auVar4);
  fVar32 = 0.0;
  fVar34 = fVar22 * fVar34;
  fVar36 = fVar26 * fVar36;
  fVar37 = fVar27 * fVar37;
  fVar28 = (2.0 - fVar31 * auVar19._0_4_) * auVar19._0_4_ *
           (fVar30 * fStack_134 + fVar29 * fStack_144 + fVar28 * fStack_124);
  auVar20._4_4_ = fVar34;
  auVar20._0_4_ = fVar34;
  auVar20._8_4_ = fVar34;
  auVar20._12_4_ = fVar34;
  fVar29 = fVar36 + fVar34 + fVar37;
  auVar3._4_4_ = fVar36 + fVar34 + fVar37;
  auVar3._0_4_ = fVar29;
  auVar3._8_4_ = fVar36 + fVar34 + fVar37;
  auVar3._12_4_ = fVar36 + fVar34 + fVar37;
  auVar19 = rcpps(auVar20,auVar3);
  fVar34 = (2.0 - fVar29 * auVar19._0_4_) * auVar19._0_4_ *
           (0.0 - ((0.0 - (pfVar9[1] * fVar26 + *pfVar9 * fVar22 + pfVar9[2] * fVar27)) * fVar17 +
                   fVar26 * fVar38 + fVar27 * fVar5 + fVar22 * fVar35));
  if (fVar28 <= 0.0) {
    if (0.0 <= fVar28) {
      if (fVar34 < 0.0) {
        return 0;
      }
      fVar17 = 1.0;
      if (1.0 < fVar34) {
        return 0;
      }
      fVar36 = 0.0;
      local_res18[0] = fVar34;
      goto LAB_1437fcb34;
    }
    fVar36 = (1.0 - fVar34) / fVar28;
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
    local_res18[0] = (-1.0 / fVar28) * fVar34;
    fVar17 = local_res18[0];
    if (1.0 <= local_res18[0]) {
      fVar17 = 1.0;
    }
  }
  else {
    fVar36 = (-1.0 / fVar28) * fVar34;
    local_res18[0] = (1.0 - fVar34) / fVar28;
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
    fVar17 = local_res18[0];
    if (1.0 <= local_res18[0]) {
      fVar17 = 1.0;
    }
  }
  if (fVar17 <= fVar36) {
    return 0;
  }
LAB_1437fcb34:
  uVar6 = *(uint *)(param_4 + 1);
  uVar10 = 0;
  local_180 = 0;
  local_178 = 0;
  local_174 = 0x80000000;
  uVar12 = uVar10;
  if (0 < (int)uVar6) {
    uVar12 = (ulonglong)uVar6;
    if ((int)uVar6 < 0) {
      uVar12 = uVar10;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_180,uVar12,4);
    uVar12 = (ulonglong)local_178;
  }
  uVar6 = (uint)uVar12;
  iVar8 = (int)param_4[1] / 2;
  lVar15 = (longlong)iVar8;
  uVar14 = uVar10;
  if (0 < iVar8) {
    do {
      pfVar9 = (float *)(*param_4 + uVar14);
      pfVar1 = (float *)(*param_4 + 0x10 + uVar14);
      fVar35 = *pfVar9 * local_148 + local_118 + pfVar9[1] * local_138 + pfVar9[2] * local_128;
      fVar38 = *pfVar9 * fStack_140 + fStack_110 + pfVar9[1] * fStack_130 + pfVar9[2] * fStack_120;
      fVar37 = *pfVar1 * fStack_140 + fStack_110 + pfVar1[1] * fStack_130 + pfVar1[2] * fStack_120;
      auVar21._4_4_ = fVar37;
      auVar21._0_4_ = fVar37;
      auVar21._8_4_ = fVar37;
      auVar21._12_4_ = fVar37;
      if (0.0 <= fVar38 != 0.0 <= fVar37) {
        local_178 = (int)uVar12 + 1;
        auVar25._0_4_ = fVar38 - fVar37;
        auVar25._4_4_ = fVar38 - fVar37;
        auVar25._8_4_ = fVar38 - fVar37;
        auVar25._12_4_ = fVar38 - fVar37;
        auVar19 = rcpps(auVar21,auVar25);
        *(float *)(local_180 + (longlong)(int)uVar12 * 4) =
             ((*pfVar1 * local_148 + local_118 + pfVar1[1] * local_138 + pfVar1[2] * local_128) -
             fVar35) * (2.0 - auVar25._0_4_ * auVar19._0_4_) * auVar19._0_4_ * fVar38 + fVar35;
        uVar12 = (ulonglong)local_178;
      }
      uVar6 = (uint)uVar12;
      lVar15 = lVar15 + -1;
      uVar14 = uVar14 + 0x20;
    } while (lVar15 != 0);
  }
  lVar15 = local_180;
  if (uVar6 != 0) {
    if (1 < (int)uVar6) {
      FUN_1437fb660(local_180,0,uVar6 - 1,local_res18[0]._0_1_);
      uVar6 = local_178;
    }
    fVar37 = 0.0;
    iVar8 = (int)uVar6 / 2;
    lVar16 = (longlong)iVar8;
    uVar12 = uVar10;
    if (3 < lVar16) {
      pfVar9 = (float *)(local_180 + 0xc);
      do {
        fVar37 = pfVar9[-2];
        if (fVar36 < fVar37) goto LAB_1437fcd93;
        fVar37 = *pfVar9;
        iVar11 = (int)uVar12;
        if (fVar36 < fVar37) {
          uVar12 = (ulonglong)(iVar11 + 1);
          goto LAB_1437fcd93;
        }
        fVar37 = pfVar9[2];
        if (fVar36 < fVar37) {
          uVar12 = (ulonglong)(iVar11 + 2);
          goto LAB_1437fcd93;
        }
        fVar37 = pfVar9[4];
        if (fVar36 < fVar37) {
          uVar12 = (ulonglong)(iVar11 + 3);
          goto LAB_1437fcd93;
        }
        uVar12 = (ulonglong)(iVar11 + 4);
        uVar10 = uVar10 + 4;
        pfVar9 = pfVar9 + 8;
      } while ((longlong)uVar10 < lVar16 + -3);
    }
    if ((longlong)uVar10 < lVar16) {
      pfVar9 = (float *)(uVar10 * 8 + 4 + local_180);
      do {
        fVar37 = *pfVar9;
        if (fVar36 < fVar37) break;
        uVar12 = (ulonglong)((int)uVar12 + 1);
        uVar10 = uVar10 + 1;
        pfVar9 = pfVar9 + 2;
      } while ((longlong)uVar10 < lVar16);
    }
LAB_1437fcd93:
    iVar11 = (int)uVar12;
    if ((iVar11 < iVar8) &&
       (fVar32 = *(float *)(local_180 + (longlong)(iVar11 * 2) * 4), fVar32 < fVar36)) {
      fStack_164 = fVar17;
      if (fVar37 <= fVar17) {
        fStack_164 = fVar37;
      }
      local_158 = param_6;
      local_res18[0] = fVar37;
      local_168 = fVar36;
      fStack_160 = fVar28;
      fStack_15c = fVar34;
      if (fVar36 != fStack_164) {
        FUN_1437f63f0(param_7,&local_168);
        uVar12 = (ulonglong)(iVar11 + 1);
      }
    }
    uVar6 = (uint)uVar12;
    lVar15 = local_180;
    fVar36 = fStack_164;
    for (lVar13 = (longlong)(int)uVar6; lVar13 < lVar16; lVar13 = lVar13 + 1) {
      uVar6 = (uint)uVar12;
      fStack_164 = *(float *)(lVar15 + 4 + lVar13 * 8);
      fVar32 = *(float *)(lVar15 + lVar13 * 8);
      if (fVar17 < fStack_164) break;
      if (fVar32 != fStack_164) {
        local_158 = param_6;
        local_168 = fVar32;
        fStack_160 = fVar28;
        fStack_15c = fVar34;
        FUN_1437f63f0(param_7,&local_168);
        lVar15 = local_180;
        fVar36 = fStack_164;
      }
      fStack_164 = fVar36;
      uVar6 = uVar6 + 1;
      uVar12 = (ulonglong)uVar6;
      fVar36 = fStack_164;
    }
    fStack_164 = fVar36;
    if (((int)uVar6 < iVar8) && (fVar32 < fVar17)) {
      local_158 = param_6;
      local_168 = fVar32;
      fStack_164 = fVar17;
      fStack_160 = fVar28;
      fStack_15c = fVar34;
      FUN_1437f63f0(param_7,&local_168);
      lVar15 = local_180;
    }
    uVar10 = (ulonglong)(0 < *(int *)(param_7 + 8));
  }
  local_178 = 0;
  if (-1 < (int)local_174) {
    FUN_143702e10(&PTR_vftable_1467f0638,lVar15,4,local_174 & 0x3fffffff);
  }
  return uVar10;
}



// FUNCTION 1437fcf40 FUN_1437fcf40 body=410 status=ok
// SIG undefined FUN_1437fcf40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1437fcf40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float *param_5,float *param_6,float *param_7,undefined4 param_8,undefined8 param_9)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [128];
  
  local_a8 = local_98;
  local_a0 = 0;
  local_9c = 0x80000008;
  uVar2 = FUN_1437fbe90(param_5,param_6,param_7,&local_a8);
  fVar14 = param_7[1] * (*param_6 - *param_5) - (param_6[1] - param_5[1]) * *param_7;
  fVar15 = param_7[2] * (param_6[1] - param_5[1]) - (param_6[2] - param_5[2]) * param_7[1];
  fVar16 = *param_7 * (param_6[2] - param_5[2]) - (*param_6 - *param_5) * param_7[2];
  fVar17 = param_7[3] * (param_6[3] - param_5[3]) - (param_6[3] - param_5[3]) * param_7[3];
  auVar6._4_4_ = -(uint)(ABS(fVar16) <= fRam00000001467f08f4);
  auVar6._0_4_ = -(uint)(ABS(fVar15) <= _DAT_1467f08f0);
  auVar6._8_4_ = -(uint)(ABS(fVar14) <= fRam00000001467f08f8);
  auVar6._12_4_ = -(uint)(ABS(fVar17) <= fRam00000001467f08fc);
  uVar2 = movmskps(uVar2,auVar6);
  if (((byte)uVar2 & 7) == 7) {
    uVar2 = 0;
  }
  else {
    fVar4 = fVar15 * fVar15;
    fVar7 = fVar16 * fVar16;
    auVar5._8_4_ = fVar14 * fVar14;
    auVar5._4_4_ = auVar5._8_4_;
    auVar5._0_4_ = auVar5._8_4_;
    auVar5._12_4_ = auVar5._8_4_;
    fVar10 = fVar7 + fVar4 + auVar5._8_4_;
    fVar11 = fVar7 + fVar4 + auVar5._8_4_;
    fVar12 = fVar7 + fVar4 + auVar5._8_4_;
    fVar13 = fVar7 + fVar4 + auVar5._8_4_;
    auVar1._4_4_ = fVar11;
    auVar1._0_4_ = fVar10;
    auVar1._8_4_ = fVar12;
    auVar1._12_4_ = fVar13;
    auVar6 = rsqrtps(auVar5,auVar1);
    fVar4 = auVar6._0_4_;
    fVar7 = auVar6._4_4_;
    fVar8 = auVar6._8_4_;
    fVar9 = auVar6._12_4_;
    local_b8 = fVar15 * (float)(~-(uint)(fVar10 <= 0.0) &
                               (uint)((3.0 - fVar10 * fVar4 * fVar4) * fVar4 * 0.5));
    fStack_b4 = fVar16 * (float)(~-(uint)(fVar11 <= 0.0) &
                                (uint)((3.0 - fVar11 * fVar7 * fVar7) * fVar7 * 0.5));
    fStack_b0 = fVar14 * (float)(~-(uint)(fVar12 <= 0.0) &
                                (uint)((3.0 - fVar12 * fVar8 * fVar8) * fVar8 * 0.5));
    fStack_ac = fVar17 * (float)(~-(uint)(fVar13 <= 0.0) &
                                (uint)((3.0 - fVar13 * fVar9 * fVar9) * fVar9 * 0.5));
    uVar2 = FUN_1437fd270(param_1,param_2,param_3,param_4,&local_a8,&local_b8,param_8,param_9);
  }
  uVar3 = FUN_143703a50();
  local_a0 = 0;
  if (-1 < (int)local_9c) {
    FUN_143702e10(uVar3,local_a8,0x10,local_9c & 0x3fffffff);
  }
  return uVar2;
}



// FUNCTION 1437fd0e0 FUN_1437fd0e0 body=396 status=ok
// SIG undefined FUN_1437fd0e0(void)

undefined4
FUN_1437fd0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [256];
  
  local_128 = local_118;
  local_120 = 0;
  local_11c = 0x80000010;
  FUN_1437fbf50(param_5,param_6,&local_128);
  lVar3 = *(longlong *)(param_5 + 0x18);
  piVar6 = (int *)((longlong)param_6 * 0x10 + *(longlong *)(param_5 + 0x28));
  pfVar1 = (float *)(lVar3 + (longlong)*piVar6 * 0x10);
  pfVar2 = (float *)(lVar3 + (longlong)piVar6[1] * 0x10);
  fVar13 = *pfVar2 - *pfVar1;
  fVar14 = pfVar2[1] - pfVar1[1];
  fVar15 = pfVar2[2] - pfVar1[2];
  fVar16 = pfVar2[3] - pfVar1[3];
  pfVar2 = (float *)(lVar3 + (longlong)piVar6[2] * 0x10);
  fVar7 = *pfVar2 - *pfVar1;
  fVar10 = pfVar2[1] - pfVar1[1];
  fVar11 = pfVar2[2] - pfVar1[2];
  fVar12 = pfVar2[3] - pfVar1[3];
  fStack_130 = fVar10 * fVar13 - fVar14 * fVar7;
  local_138 = fVar11 * fVar14 - fVar15 * fVar10;
  fStack_134 = fVar7 * fVar15 - fVar13 * fVar11;
  fVar7 = local_138 * local_138;
  fVar10 = fStack_134 * fStack_134;
  auVar8._8_4_ = fStack_130 * fStack_130;
  auVar8._4_4_ = auVar8._8_4_;
  auVar8._0_4_ = auVar8._8_4_;
  auVar8._12_4_ = auVar8._8_4_;
  fVar14 = fVar10 + fVar7 + auVar8._8_4_;
  fVar15 = fVar10 + fVar7 + auVar8._8_4_;
  fVar17 = fVar10 + fVar7 + auVar8._8_4_;
  fVar18 = fVar10 + fVar7 + auVar8._8_4_;
  auVar9._4_4_ = fVar15;
  auVar9._0_4_ = fVar14;
  auVar9._8_4_ = fVar17;
  auVar9._12_4_ = fVar18;
  auVar9 = rsqrtps(auVar8,auVar9);
  fVar7 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar13 = auVar9._12_4_;
  local_138 = local_138 *
              (float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar14 * fVar7 * fVar7) * fVar7 * 0.5)
                     );
  fStack_134 = fStack_134 *
               (float)(~-(uint)(fVar15 <= 0.0) &
                      (uint)((3.0 - fVar15 * fVar10 * fVar10) * fVar10 * 0.5));
  fStack_130 = fStack_130 *
               (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar11 * fVar11) * fVar11 * 0.5));
  fStack_12c = (fVar12 * fVar16 - fVar16 * fVar12) *
               (float)(~-(uint)(fVar18 <= 0.0) &
                      (uint)((3.0 - fVar18 * fVar13 * fVar13) * fVar13 * 0.5));
  uVar4 = FUN_1437fd270(param_1,param_2,param_3,param_4,&local_128,&local_138,param_7,param_8);
  uVar5 = FUN_143703a50();
  local_120 = 0;
  if (-1 < (int)local_11c) {
    FUN_143702e10(uVar5,local_128,0x10,local_11c & 0x3fffffff);
  }
  return uVar4;
}



// FUNCTION 1437fd270 FUN_1437fd270 body=880 status=ok
// SIG undefined FUN_1437fd270(void)

undefined8
FUN_1437fd270(float *param_1,float *param_2,float *param_3,float *param_4,longlong *param_5,
             float *param_6,undefined4 param_7,longlong param_8)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 in_EAX;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
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
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  fVar12 = fRam00000001467f06fc;
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  auVar4._4_4_ = -(uint)(fVar7 == fVar10);
  auVar4._0_4_ = -(uint)(fVar6 == fVar9);
  auVar4._8_4_ = -(uint)(fVar8 == fVar11);
  auVar4._12_4_ = -(uint)(param_1[3] == param_3[3]);
  uVar13 = movmskps(in_EAX,auVar4);
  if (((char)(uVar13 & 7) == '\a') &&
     (auVar5._4_4_ = -(uint)(param_2[1] == param_4[1]), auVar5._0_4_ = -(uint)(*param_2 == *param_4)
     , auVar5._8_4_ = -(uint)(param_2[2] == param_4[2]),
     auVar5._12_4_ = -(uint)(param_2[3] == param_4[3]), uVar14 = movmskps(uVar13 & 7,auVar5),
     ((byte)uVar14 & 7) == 7)) {
    return 0;
  }
  pfVar2 = (float *)*param_5;
  fVar22 = *param_6;
  fVar23 = param_6[1];
  fVar24 = param_6[2];
  fVar28 = *param_2 - fVar6;
  fVar29 = param_2[1] - fVar7;
  fVar30 = param_2[2] - fVar8;
  fVar25 = (*param_4 - fVar9) - fVar28;
  fVar26 = (param_4[1] - fVar10) - fVar29;
  fVar27 = (param_4[2] - fVar11) - fVar30;
  fVar21 = 0.0 - (pfVar2[1] * fVar23 + *pfVar2 * fVar22 + pfVar2[2] * fVar24);
  local_b8 = fVar21 * 0.0 + fVar27 * fVar24 + fVar26 * fVar23 + fVar25 * fVar22;
  fStack_b4 = fVar21 * 0.0 + fVar30 * fVar24 + fVar29 * fVar23 + fVar28 * fVar22;
  fStack_b0 = fVar21 * 0.0 + (fVar11 - fVar8) * fVar24 +
              (fVar10 - fVar7) * fVar23 + (fVar9 - fVar6) * fVar22;
  fStack_ac = fRam00000001467f06fc * fVar21 + fVar8 * fVar24 + fVar7 * fVar23 + fVar6 * fVar22;
  uVar17 = FUN_1437fbb20(&local_b8,param_8);
  if ((int)uVar17 != 0) {
    FUN_1437f62c0(&local_98);
    lVar19 = 0;
    iVar15 = (int)param_5[1] / 2;
    if (0 < iVar15) {
      lVar20 = 0;
      do {
        lVar3 = *param_5;
        pfVar1 = (float *)(lVar3 + 0x10 + lVar20);
        pfVar2 = (float *)(lVar3 + lVar20);
        fVar23 = (pfVar1[1] - pfVar2[1]) * *param_6 - param_6[1] * (*pfVar1 - *pfVar2);
        fVar24 = (pfVar1[2] - pfVar2[2]) * param_6[1] - param_6[2] * (pfVar1[1] - pfVar2[1]);
        fVar21 = (*pfVar1 - *pfVar2) * param_6[2] - *param_6 * (pfVar1[2] - pfVar2[2]);
        pfVar2 = (float *)(lVar3 + lVar20);
        fVar22 = 0.0 - (fVar21 * pfVar2[1] + fVar24 * *pfVar2 + fVar23 * pfVar2[2]);
        local_a8 = fVar22 * 0.0 + fVar23 * fVar27 + fVar21 * fVar26 + fVar24 * fVar25;
        fStack_a4 = fVar22 * 0.0 + fVar23 * fVar30 + fVar21 * fVar29 + fVar24 * fVar28;
        fStack_a0 = fVar22 * 0.0 + fVar23 * (fVar11 - fVar8) +
                    fVar21 * (fVar10 - fVar7) + fVar24 * (fVar9 - fVar6);
        fStack_9c = fVar22 * fVar12 + fVar23 * fVar8 + fVar21 * fVar7 + fVar24 * fVar6;
        iVar16 = FUN_1437fb730(&local_b8,&local_a8,&local_98);
        if (iVar16 == 0) {
          CAkSrcMediaCodecVorbis::ReleaseBuffer(param_8);
LAB_1437fd5d9:
          uVar17 = 0;
          goto LAB_1437fd53b;
        }
        FUN_1437f6970(param_8,&local_98);
        if (*(int *)(param_8 + 8) == 0) goto LAB_1437fd5d9;
        CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_98);
        lVar19 = lVar19 + 1;
        lVar20 = lVar20 + 0x20;
      } while (lVar19 < iVar15);
    }
    hkaiIntervalPartition::setAllData(param_8,param_7);
    uVar17 = 1;
LAB_1437fd53b:
    uVar18 = FUN_143703a50();
    local_90 = 0;
    if (-1 < (int)local_8c) {
      FUN_143702e10(uVar18,local_98,0x14,local_8c & 0x3fffffff);
    }
  }
  return uVar17;
}



// FUNCTION 1437fd5e0 FUN_1437fd5e0 body=387 status=ok
// SIG undefined FUN_1437fd5e0(void)

undefined4 *
FUN_1437fd5e0(undefined4 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  longlong local_68;
  int local_60;
  undefined8 local_58 [2];
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
  undefined4 local_18;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = *(undefined4 *)(param_3 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_30 = *(undefined4 *)(param_3 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_28 = *(undefined4 *)(param_3 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_20 = *(undefined4 *)(param_3 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_18 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  local_60 = 0x40;
  local_58[0] = param_4;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  local_68 = *(longlong *)((longlong)pvVar4 + 0x18);
  if ((*(int *)((longlong)pvVar4 + 0x10) < 0x100) ||
     (*(ulonglong *)((longlong)pvVar4 + 0x20) < local_68 + 0x100U)) {
    local_68 = FUN_1437138c0(pvVar4,0x100);
  }
  else {
    *(ulonglong *)((longlong)pvVar4 + 0x18) = local_68 + 0x100U;
  }
  local_6c = 0x80000040;
  local_78 = local_68;
  FUN_1437fd9b0(param_2,&local_78,local_58);
  iVar2 = local_60;
  lVar1 = local_68;
  if (local_68 == local_78) {
    local_70 = 0;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar4 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar4 + 0x18))) ||
     (*(longlong *)((longlong)pvVar4 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar4,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar4 + 0x18) = lVar1;
  }
  uVar5 = FUN_143703a50();
  local_70 = 0;
  if (-1 < (int)local_6c) {
    FUN_143702e10(uVar5,local_78,4,local_6c & 0x3fffffff);
  }
  *param_1 = uStack_2c;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_2c;
  param_1[3] = uStack_2c;
  return param_1;
}



// FUNCTION 1437fd770 FUN_1437fd770 body=574 status=ok
// SIG undefined FUN_1437fd770(void)

void FUN_1437fd770(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  float *local_48;
  float local_40;
  
  if ((int)param_1[4] != 0) {
    local_40 = *(float *)(param_1 + 4);
    uVar12 = param_2[1];
    local_48 = (float *)((ulonglong)(uint)local_40 * 0x30 + *param_1);
    local_68 = *local_48;
    fStack_64 = local_48[1];
    fStack_60 = local_48[2];
    fStack_5c = local_48[3];
    local_58 = *(undefined8 *)(local_48 + 4);
    uStack_50 = *(undefined8 *)(local_48 + 6);
    if (*(int *)(param_3 + 1) != 0) {
      auVar3._4_4_ = -(uint)(fStack_64 <= *(float *)((longlong)param_3 + 0x24) &&
                            *(float *)((longlong)param_3 + 0x14) <= local_48[5]);
      auVar3._0_4_ = -(uint)(local_68 <= *(float *)(param_3 + 4) &&
                            *(float *)(param_3 + 2) <= local_48[4]);
      auVar3._8_4_ = -(uint)(fStack_60 <= *(float *)(param_3 + 5) &&
                            *(float *)(param_3 + 3) <= local_48[6]);
      auVar3._12_4_ =
           -(uint)(fStack_5c <= *(float *)((longlong)param_3 + 0x2c) &&
                  *(float *)((longlong)param_3 + 0x1c) <= local_48[7]);
      uVar13 = movmskps(local_40,auVar3);
      uVar16 = (ulonglong)(uVar13 & 7);
      if ((char)(uVar13 & 7) == '\a') {
        do {
          while( true ) {
            uVar13 = (uint)uVar16;
            fVar1 = local_48[9];
            if (fVar1 == 0.0) break;
            fVar2 = local_48[10];
            pfVar19 = (float *)((ulonglong)(uint)fVar1 * 0x30 + *param_1);
            pfVar20 = (float *)((ulonglong)(uint)fVar2 * 0x30 + *param_1);
            fVar6 = *pfVar19;
            fVar7 = pfVar19[1];
            fVar8 = pfVar19[2];
            fVar9 = pfVar19[3];
            uVar10 = *(undefined8 *)(pfVar19 + 4);
            uVar11 = *(undefined8 *)(pfVar19 + 6);
            if (*(int *)(param_3 + 1) == 0) {
LAB_1437fd862:
              uVar15 = 0;
            }
            else {
              auVar4._4_4_ = -(uint)(fVar7 <= *(float *)((longlong)param_3 + 0x24) &&
                                    *(float *)((longlong)param_3 + 0x14) <= pfVar19[5]);
              auVar4._0_4_ = -(uint)(fVar6 <= *(float *)(param_3 + 4) &&
                                    *(float *)(param_3 + 2) <= pfVar19[4]);
              auVar4._8_4_ = -(uint)(fVar8 <= *(float *)(param_3 + 5) &&
                                    *(float *)(param_3 + 3) <= pfVar19[6]);
              auVar4._12_4_ =
                   -(uint)(fVar9 <= *(float *)((longlong)param_3 + 0x2c) &&
                          *(float *)((longlong)param_3 + 0x1c) <= pfVar19[7]);
              uVar13 = movmskps(uVar13,auVar4);
              uVar13 = uVar13 & 7;
              if ((char)uVar13 != '\a') goto LAB_1437fd862;
              uVar15 = 1;
            }
            if ((*(int *)(param_3 + 1) == 0) ||
               (auVar5._4_4_ = -(uint)(pfVar20[1] <= *(float *)((longlong)param_3 + 0x24) &&
                                      *(float *)((longlong)param_3 + 0x14) <= pfVar20[5]),
               auVar5._0_4_ = -(uint)(*pfVar20 <= *(float *)(param_3 + 4) &&
                                     *(float *)(param_3 + 2) <= pfVar20[4]),
               auVar5._8_4_ = -(uint)(pfVar20[2] <= *(float *)(param_3 + 5) &&
                                     *(float *)(param_3 + 3) <= pfVar20[6]),
               auVar5._12_4_ =
                    -(uint)(pfVar20[3] <= *(float *)((longlong)param_3 + 0x2c) &&
                           *(float *)((longlong)param_3 + 0x1c) <= pfVar20[7]),
               uVar14 = movmskps(uVar13,auVar5), ((byte)uVar14 & 7) != 7)) {
              uVar13 = 0;
            }
            else {
              uVar13 = 2;
            }
            uVar13 = uVar13 | uVar15;
            if (uVar13 == 0) goto LAB_1437fd939;
            uVar15 = 0;
            if (uVar13 == 1) {
LAB_1437fd8e2:
              uVar16 = (ulonglong)uVar15;
              local_68 = fVar6;
              fStack_64 = fVar7;
              fStack_60 = fVar8;
              fStack_5c = fVar9;
              local_58 = uVar10;
              uStack_50 = uVar11;
              local_48 = pfVar19;
              local_40 = fVar1;
            }
            else {
              if (uVar13 != 2) {
                if (uVar13 != 3) goto LAB_1437fd939;
                uVar17 = FUN_143703a50();
                if ((uint)param_2[1] == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
                  FUN_14370c460(uVar17,param_2,4);
                }
                uVar16 = param_2[1];
                uVar15 = (int)uVar16 + 1;
                *(uint *)(param_2 + 1) = uVar15;
                *(float *)(*param_2 + (longlong)(int)uVar16 * 4) = fVar2;
                goto LAB_1437fd8e2;
              }
              uVar16 = 0;
              local_68 = *pfVar20;
              fStack_64 = pfVar20[1];
              fStack_60 = pfVar20[2];
              fStack_5c = pfVar20[3];
              local_58 = *(undefined8 *)(pfVar20 + 4);
              uStack_50 = *(undefined8 *)(pfVar20 + 6);
              local_48 = pfVar20;
              local_40 = fVar2;
            }
          }
          if ((*(int *)(param_3 + 1) == 0) ||
             (iVar18 = FUN_1437fe680(*param_3,&local_68), iVar18 == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = 1;
          }
          *(undefined4 *)(param_3 + 1) = uVar14;
LAB_1437fd939:
          if ((int)param_2[1] <= (int)uVar12) {
            return;
          }
          uVar16 = *param_2;
          iVar18 = (int)param_2[1] + -1;
          *(int *)(param_2 + 1) = iVar18;
          local_40 = *(float *)(uVar16 + (longlong)iVar18 * 4);
          local_48 = (float *)((ulonglong)(uint)local_40 * 0x30 + *param_1);
          local_68 = *local_48;
          fStack_64 = local_48[1];
          fStack_60 = local_48[2];
          fStack_5c = local_48[3];
          local_58 = *(undefined8 *)(local_48 + 4);
          uStack_50 = *(undefined8 *)(local_48 + 6);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1437fd9b0 FUN_1437fd9b0 body=849 status=ok
// SIG undefined FUN_1437fd9b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437fd9b0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  float *pfVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
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
  float *local_88;
  float local_80 [4];
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float *local_58;
  float local_50;
  
  if ((int)param_1[4] != 0) {
    uVar35 = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar8 = param_2[1];
    pfVar13 = (float *)((ulonglong)*(uint *)(param_1 + 4) * 0x30 + *param_1);
    auVar31._0_8_ =
         CONCAT44((pfVar13[1] - *(float *)((longlong)param_3 + 0x14)) *
                  *(float *)((longlong)param_3 + 0x34),
                  (*pfVar13 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
    auVar31._8_4_ = (pfVar13[2] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar31._12_4_ =
         (pfVar13[3] - *(float *)((longlong)param_3 + 0x1c)) * *(float *)((longlong)param_3 + 0x3c);
    auVar25._0_4_ = (pfVar13[4] - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar25._4_4_ =
         (pfVar13[5] - *(float *)((longlong)param_3 + 0x14)) * *(float *)((longlong)param_3 + 0x34);
    auVar25._8_4_ = (pfVar13[6] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar25._12_4_ =
         (pfVar13[7] - *(float *)((longlong)param_3 + 0x1c)) * *(float *)((longlong)param_3 + 0x3c);
    auVar22._8_4_ = auVar31._8_4_;
    auVar22._0_8_ = auVar31._0_8_;
    auVar22._12_4_ = auVar31._12_4_;
    auVar23 = minps(auVar22,auVar25);
    auVar32 = maxps(auVar31,auVar25);
    uVar21 = auVar23._0_4_;
    uVar26 = auVar23._4_4_;
    auVar24._8_4_ = auVar23._8_4_;
    auVar44._4_4_ = uVar26;
    auVar44._0_4_ = uVar26;
    auVar44._8_4_ = uVar26;
    auVar44._12_4_ = uVar26;
    auVar23._4_4_ = uVar21;
    auVar23._0_4_ = uVar21;
    auVar23._8_4_ = uVar21;
    auVar23._12_4_ = uVar21;
    auVar23 = maxps(auVar44,auVar23);
    uVar21 = auVar32._0_4_;
    uVar26 = auVar32._4_4_;
    auVar33._8_4_ = auVar32._8_4_;
    auVar24._4_4_ = auVar24._8_4_;
    auVar24._0_4_ = auVar24._8_4_;
    auVar24._12_4_ = auVar24._8_4_;
    auVar23 = maxps(auVar24,auVar23);
    auVar25 = maxps(auVar23,_DAT_1467f06e0);
    auVar15._4_4_ = uVar26;
    auVar15._0_4_ = uVar26;
    auVar15._8_4_ = uVar26;
    auVar15._12_4_ = uVar26;
    auVar33._4_4_ = auVar33._8_4_;
    auVar33._0_4_ = auVar33._8_4_;
    auVar33._12_4_ = auVar33._8_4_;
    auVar32._4_4_ = uVar21;
    auVar32._0_4_ = uVar21;
    auVar32._8_4_ = uVar21;
    auVar32._12_4_ = uVar21;
    auVar23 = minps(auVar15,auVar32);
    auVar23 = minps(auVar33,auVar23);
    auVar39._4_4_ = uVar35;
    auVar39._0_4_ = uVar35;
    auVar39._8_4_ = uVar35;
    auVar39._12_4_ = uVar35;
    auVar23 = minps(auVar23,auVar39);
    if (auVar25._0_4_ <= auVar23._0_4_) {
LAB_1437fda70:
      while( true ) {
        do {
          fVar1 = pfVar13[9];
          if (fVar1 == 0.0) {
            local_b8 = *(undefined4 *)((longlong)param_3 + 0x2c);
            uStack_b4 = local_b8;
            uStack_b0 = local_b8;
            uStack_ac = local_b8;
            FUN_1437feea0(*(undefined8 *)*param_3,pfVar13[10],param_3 + 2,(undefined8 *)*param_3 + 2
                          ,&local_b8);
            *(int *)(param_3 + 4) = (int)param_3[4];
            *(undefined4 *)((longlong)param_3 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x24);
            *(int *)(param_3 + 5) = (int)param_3[5];
            *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_ac;
            goto LAB_1437fdc9e;
          }
          uVar35 = *(undefined4 *)((longlong)param_3 + 0x2c);
          local_88 = (float *)((ulonglong)(uint)fVar1 * 0x30 + *param_1);
          local_50 = pfVar13[10];
          local_a8 = *local_88;
          fStack_a4 = local_88[1];
          fStack_a0 = local_88[2];
          fStack_9c = local_88[3];
          local_98 = local_88[4];
          fStack_94 = local_88[5];
          fStack_90 = local_88[6];
          fStack_8c = local_88[7];
          local_58 = (float *)((ulonglong)(uint)local_50 * 0x30 + *param_1);
          auVar16._0_4_ = (local_98 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          auVar16._4_4_ =
               (fStack_94 - *(float *)((longlong)param_3 + 0x14)) *
               *(float *)((longlong)param_3 + 0x34);
          auVar16._8_4_ = (fStack_90 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar16._12_4_ =
               (fStack_8c - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          auVar38._0_8_ =
               CONCAT44((fStack_a4 - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        (local_a8 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
          auVar38._8_4_ = (fStack_a0 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar38._12_4_ =
               (fStack_9c - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          local_80[2] = *local_58;
          local_80[3] = local_58[1];
          fStack_70 = local_58[2];
          fStack_6c = local_58[3];
          local_68 = local_58[4];
          fStack_64 = local_58[5];
          fStack_60 = local_58[6];
          fStack_5c = local_58[7];
          auVar41._8_4_ = auVar38._8_4_;
          auVar41._0_8_ = auVar38._0_8_;
          auVar41._12_4_ = auVar38._12_4_;
          auVar23 = minps(auVar41,auVar16);
          auVar36._0_8_ =
               CONCAT44((local_80[3] - *(float *)((longlong)param_3 + 0x14)) *
                        *(float *)((longlong)param_3 + 0x34),
                        (local_80[2] - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6));
          auVar36._8_4_ = (fStack_70 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          auVar36._12_4_ =
               (fStack_6c - *(float *)((longlong)param_3 + 0x1c)) *
               *(float *)((longlong)param_3 + 0x3c);
          fVar27 = (local_68 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
          fVar28 = (fStack_64 - *(float *)((longlong)param_3 + 0x14)) *
                   *(float *)((longlong)param_3 + 0x34);
          fVar29 = (fStack_60 - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
          fVar30 = (fStack_5c - *(float *)((longlong)param_3 + 0x1c)) *
                   *(float *)((longlong)param_3 + 0x3c);
          uVar21 = auVar23._0_4_;
          uVar26 = auVar23._4_4_;
          auVar42._8_4_ = auVar23._8_4_;
          auVar39 = maxps(auVar38,auVar16);
          auVar43._8_4_ = auVar36._8_4_;
          auVar43._0_8_ = auVar36._0_8_;
          auVar43._12_4_ = auVar36._12_4_;
          auVar6._4_4_ = fVar28;
          auVar6._0_4_ = fVar27;
          auVar6._8_4_ = fVar29;
          auVar6._12_4_ = fVar30;
          auVar44 = minps(auVar43,auVar6);
          auVar7._4_4_ = fVar28;
          auVar7._0_4_ = fVar27;
          auVar7._8_4_ = fVar29;
          auVar7._12_4_ = fVar30;
          auVar32 = maxps(auVar36,auVar7);
          auVar34._4_4_ = uVar35;
          auVar34._0_4_ = uVar35;
          auVar34._8_4_ = uVar35;
          auVar34._12_4_ = uVar35;
          auVar17._4_4_ = uVar26;
          auVar17._0_4_ = uVar26;
          auVar17._8_4_ = uVar26;
          auVar17._12_4_ = uVar26;
          auVar2._4_4_ = uVar21;
          auVar2._0_4_ = uVar21;
          auVar2._8_4_ = uVar21;
          auVar2._12_4_ = uVar21;
          auVar23 = maxps(auVar17,auVar2);
          uVar35 = auVar39._0_4_;
          uVar21 = auVar39._4_4_;
          auVar40._8_4_ = auVar39._8_4_;
          auVar42._4_4_ = auVar42._8_4_;
          auVar42._0_4_ = auVar42._8_4_;
          auVar42._12_4_ = auVar42._8_4_;
          auVar23 = maxps(auVar42,auVar23);
          auVar25 = maxps(auVar23,_DAT_1467f06e0);
          auVar18._4_4_ = uVar21;
          auVar18._0_4_ = uVar21;
          auVar18._8_4_ = uVar21;
          auVar18._12_4_ = uVar21;
          auVar3._4_4_ = uVar35;
          auVar3._0_4_ = uVar35;
          auVar3._8_4_ = uVar35;
          auVar3._12_4_ = uVar35;
          auVar23 = minps(auVar18,auVar3);
          uVar35 = auVar44._0_4_;
          uVar21 = auVar44._4_4_;
          auVar45._8_4_ = auVar44._8_4_;
          auVar40._4_4_ = auVar40._8_4_;
          auVar40._0_4_ = auVar40._8_4_;
          auVar40._12_4_ = auVar40._8_4_;
          auVar39 = minps(auVar40,auVar23);
          auVar19._4_4_ = uVar21;
          auVar19._0_4_ = uVar21;
          auVar19._8_4_ = uVar21;
          auVar19._12_4_ = uVar21;
          auVar4._4_4_ = uVar35;
          auVar4._0_4_ = uVar35;
          auVar4._8_4_ = uVar35;
          auVar4._12_4_ = uVar35;
          auVar23 = maxps(auVar19,auVar4);
          uVar35 = auVar32._0_4_;
          uVar21 = auVar32._4_4_;
          auVar37._8_4_ = auVar32._8_4_;
          auVar45._4_4_ = auVar45._8_4_;
          auVar45._0_4_ = auVar45._8_4_;
          auVar45._12_4_ = auVar45._8_4_;
          auVar23 = maxps(auVar45,auVar23);
          auVar44 = maxps(auVar23,_DAT_1467f06e0);
          auVar20._4_4_ = uVar21;
          auVar20._0_4_ = uVar21;
          auVar20._8_4_ = uVar21;
          auVar20._12_4_ = uVar21;
          auVar37._4_4_ = auVar37._8_4_;
          auVar37._0_4_ = auVar37._8_4_;
          auVar37._12_4_ = auVar37._8_4_;
          auVar5._4_4_ = uVar35;
          auVar5._0_4_ = uVar35;
          auVar5._8_4_ = uVar35;
          auVar5._12_4_ = uVar35;
          auVar23 = minps(auVar20,auVar5);
          auVar32 = minps(auVar39,auVar34);
          auVar23 = minps(auVar37,auVar23);
          auVar23 = minps(auVar23,auVar34);
          bVar14 = -(auVar44._0_4_ <= auVar23._0_4_) & 2U | auVar25._0_4_ <= auVar32._0_4_;
          if (bVar14 == 3) {
            *(uint *)(param_3 + 8) = (uint)(auVar44._0_4_ < auVar25._0_4_);
          }
          local_80[0] = fVar1;
          if (bVar14 == 0) goto LAB_1437fdc9e;
          pfVar13 = local_88;
        } while ((bVar14 == 1) || (pfVar13 = local_58, bVar14 == 2));
        if (bVar14 != 3) break;
        lVar9 = param_3[8];
        uVar11 = FUN_143703a50();
        if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar11,param_2,4);
        }
        lVar10 = param_2[1];
        *(int *)(param_2 + 1) = (int)lVar10 + 1;
        *(float *)(*param_2 + (longlong)(int)lVar10 * 4) =
             local_80[(longlong)(1 - (int)lVar9) * 0xc];
        pfVar13 = *(float **)(local_80 + (longlong)(int)lVar9 * 0xc + -2);
      }
LAB_1437fdc9e:
      if ((int)lVar8 < (int)param_2[1]) {
        iVar12 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar12;
        pfVar13 = (float *)((ulonglong)*(uint *)(*param_2 + (longlong)iVar12 * 4) * 0x30 + *param_1)
        ;
        goto LAB_1437fda70;
      }
    }
  }
  return;
}



// FUNCTION 1437fdd10 FUN_1437fdd10 body=320 status=ok
// SIG undefined FUN_1437fdd10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1437fdd10(undefined8 *param_1,undefined1 (*param_2) [16],longlong param_3,float *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar4 = 9;
  param_1[2] = param_3;
  *param_1 = 0;
  param_3 = param_3 - (longlong)param_2;
  param_1[1] = param_2;
  uVar1 = *(undefined8 *)(param_4 + 2);
  param_1[0x3e] = *(undefined8 *)param_4;
  param_1[0x3f] = uVar1;
  *(undefined4 *)(param_1 + 0x40) = 0x1ff;
  puVar3 = (uint *)(param_1 + 8);
  auVar13._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar13._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar13._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  auVar14 = _DAT_1467f08d0;
  do {
    auVar8 = *param_2;
    auVar5 = *(undefined1 (*) [16])(param_3 + (longlong)param_2);
    auVar14 = minps(auVar14,auVar8);
    auVar13 = maxps(auVar13,auVar8);
    auVar14 = minps(auVar14,auVar5);
    auVar13 = maxps(auVar13,auVar5);
    auVar7._0_4_ = auVar5._0_4_ - auVar8._0_4_;
    auVar7._4_4_ = auVar5._4_4_ - auVar8._4_4_;
    auVar7._8_4_ = auVar5._8_4_ - auVar8._8_4_;
    auVar7._12_4_ = fRam00000001467f06fc;
    fVar9 = (float)(~-(uint)(auVar7._0_4_ == 0.0) & (uint)auVar7._0_4_);
    fVar10 = (float)(~-(uint)(auVar7._4_4_ == 0.0) & (uint)auVar7._4_4_);
    fVar11 = (float)(~-(uint)(auVar7._8_4_ == 0.0) & (uint)auVar7._8_4_);
    fVar12 = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
    auVar8._4_4_ = fVar10;
    auVar8._0_4_ = fVar9;
    auVar8._8_4_ = fVar11;
    auVar8._12_4_ = fVar12;
    auVar8 = rcpps(auVar7,auVar8);
    puVar3[-4] = (uint)fVar9;
    puVar3[-3] = (uint)fVar10;
    puVar3[-2] = (uint)fVar11;
    puVar3[-1] = (uint)fVar12;
    *puVar3 = -(uint)(fVar9 == 0.0) & 0x7f7fffee |
              ~-(uint)(fVar9 == 0.0) & (uint)((2.0 - fVar9 * auVar8._0_4_) * auVar8._0_4_);
    puVar3[1] = -(uint)(fVar10 == 0.0) & 0x7f7fffee |
                ~-(uint)(fVar10 == 0.0) & (uint)((2.0 - fVar10 * auVar8._4_4_) * auVar8._4_4_);
    puVar3[2] = -(uint)(fVar11 == 0.0) & 0x7f7fffee |
                ~-(uint)(fVar11 == 0.0) & (uint)((2.0 - fVar11 * auVar8._8_4_) * auVar8._8_4_);
    puVar3[3] = -(uint)(fVar12 == 0.0) & 0x7f7fffee |
                ~-(uint)(fVar12 == 0.0) & (uint)((2.0 - fVar12 * auVar8._12_4_) * auVar8._12_4_);
    puVar2 = *param_2;
    uVar1 = *(undefined8 *)(*param_2 + 8);
    param_2 = param_2 + 1;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)puVar2;
    *(undefined8 *)(puVar3 + -6) = uVar1;
    puVar3 = puVar3 + 0xc;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  auVar5._0_4_ = auVar13._0_4_ + -*param_4;
  auVar5._4_4_ = auVar13._4_4_ + -param_4[1];
  auVar5._8_4_ = auVar13._8_4_ + -param_4[2];
  auVar5._12_4_ = auVar13._12_4_ + param_4[3];
  auVar13 = maxps(auVar13,auVar5);
  auVar6._0_4_ = auVar14._0_4_ + -*param_4;
  auVar6._4_4_ = auVar14._4_4_ + -param_4[1];
  auVar6._8_4_ = auVar14._8_4_ + -param_4[2];
  auVar6._12_4_ = auVar14._12_4_ + param_4[3];
  *(undefined1 (*) [16])(param_1 + 0x3c) = auVar13;
  auVar14 = minps(auVar14,auVar6);
  *(undefined1 (*) [16])(param_1 + 0x3a) = auVar14;
  return param_1;
}



// FUNCTION 1437fde50 FUN_1437fde50 body=207 status=ok
// SIG undefined FUN_1437fde50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437fde50(undefined8 *param_1,int param_2)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  float fVar3;
  float fVar6;
  undefined1 auVar4 [12];
  float fVar7;
  undefined1 auVar5 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM3 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar8 [12];
  
  auVar8 = DAT_1467f08d0._0_12_;
  lVar2 = (longlong)param_2;
  auVar4._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar4._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar5._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  auVar5._0_12_ = auVar4;
  if (0 < param_2) {
    pauVar1 = (undefined1 (*) [16])*param_1;
    auVar9 = _DAT_1467f08d0;
    do {
      auVar9 = minps(auVar9,*pauVar1);
      auVar8 = auVar9._0_12_;
      auVar5 = maxps(auVar5,*pauVar1);
      auVar4 = auVar5._0_12_;
      pauVar1 = pauVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  fVar3 = (auVar4._0_4_ - auVar8._0_4_) * _DAT_1467f07e0;
  fVar6 = (auVar4._4_4_ - auVar8._4_4_) * fRam00000001467f07e4;
  fVar7 = (auVar4._8_4_ - auVar8._8_4_) * fRam00000001467f07e8;
  fVar3 = fVar3 * fVar3;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  fVar10 = fVar6 + fVar3 + fVar7;
  fVar11 = fVar6 + fVar3 + fVar7;
  auVar9._4_4_ = fVar11;
  auVar9._0_4_ = fVar10;
  auVar9._8_4_ = fVar6 + fVar3 + fVar7;
  auVar9._12_4_ = fVar6 + fVar3 + fVar7;
  auVar5 = rsqrtps(in_XMM3,auVar9);
  fVar3 = auVar5._0_4_;
  fVar6 = auVar5._4_4_;
  return CONCAT44((float)(~-(uint)(fVar11 <= 0.0) &
                         (uint)((3.0 - fVar11 * fVar6 * fVar6) * fVar6 * 0.5 * fVar11)) * 1e-05,
                  (float)(~-(uint)(fVar10 <= 0.0) &
                         (uint)((3.0 - fVar10 * fVar3 * fVar3) * fVar3 * 0.5 * fVar10)) * 1e-05);
}



// FUNCTION 1437fdf20 FUN_1437fdf20 body=219 status=ok
// SIG undefined FUN_1437fdf20(void)

bool FUN_1437fdf20(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float local_68 [4];
  longlong local_58 [2];
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
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    bVar2 = false;
  }
  else {
    uVar3 = hkcdDynamicAabbTree::getTreePtr();
    local_48 = *param_3;
    fStack_44 = param_3[1];
    fStack_40 = param_3[2];
    fStack_3c = param_3[3];
    local_38 = *param_2;
    fStack_34 = param_2[1];
    fStack_30 = param_2[2];
    fStack_2c = param_2[3];
    auVar4._0_4_ = local_48 - local_38;
    auVar4._4_4_ = fStack_44 - fStack_34;
    auVar4._8_4_ = fStack_40 - fStack_30;
    auVar4._12_4_ = fRam00000001467f06fc;
    local_28 = (float)(~-(uint)(auVar4._0_4_ == 0.0) & (uint)auVar4._0_4_);
    fStack_24 = (float)(~-(uint)(auVar4._4_4_ == 0.0) & (uint)auVar4._4_4_);
    fStack_20 = (float)(~-(uint)(auVar4._8_4_ == 0.0) & (uint)auVar4._8_4_);
    fStack_1c = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
    auVar1._4_4_ = fStack_24;
    auVar1._0_4_ = local_28;
    auVar1._8_4_ = fStack_20;
    auVar1._12_4_ = fStack_1c;
    auVar5 = rcpps(auVar4,auVar1);
    local_18._0_4_ =
         ~-(uint)(local_28 == 0.0) & (uint)((2.0 - auVar5._0_4_ * local_28) * auVar5._0_4_);
    local_18._4_4_ =
         ~-(uint)(fStack_24 == 0.0) & (uint)((2.0 - auVar5._4_4_ * fStack_24) * auVar5._4_4_);
    local_18._8_4_ =
         ~-(uint)(fStack_20 == 0.0) & (uint)((2.0 - auVar5._8_4_ * fStack_20) * auVar5._8_4_);
    local_18._12_4_ =
         ~-(uint)(fStack_1c == 0.0) & (uint)((2.0 - auVar5._12_4_ * fStack_1c) * auVar5._12_4_);
    auVar5._8_4_ = -(uint)(fStack_20 == 0.0) & 0x7f7fffee;
    auVar5._0_8_ = CONCAT44(-(uint)(fStack_24 == 0.0),-(uint)(local_28 == 0.0)) & 0x7f7fffee7f7fffee
    ;
    auVar5._12_4_ = -(uint)(fStack_1c == 0.0) & 0x7f7fffee;
    local_18 = local_18 | auVar5;
    local_58[0] = param_1;
    FUN_1437fd5e0(local_68,uVar3,&local_38,local_58);
    bVar2 = local_68[0] < DAT_1467f06f0;
  }
  return bVar2;
}



// FUNCTION 1437fe000 FUN_1437fe000 body=454 status=ok
// SIG undefined FUN_1437fe000(void)

bool FUN_1437fe000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  longlong local_278;
  undefined4 local_270;
  uint local_26c;
  longlong local_268;
  int local_260;
  longlong *local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong local_228 [58];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_28;
  
  uVar4 = hkcdDynamicAabbTree::getTreePtr(*(undefined8 *)(param_1 + 0x88));
  FUN_1437fdd10(local_228,param_2,param_3,param_4);
  local_258 = local_228;
  local_248 = local_58;
  uStack_244 = uStack_54;
  uStack_240 = uStack_50;
  uStack_23c = uStack_4c;
  local_238 = local_48;
  uStack_234 = uStack_44;
  uStack_230 = uStack_40;
  uStack_22c = uStack_3c;
  local_250 = 1;
  local_278 = 0;
  local_270 = 0;
  local_26c = 0x80000000;
  local_260 = 0x40;
  local_228[0] = param_1;
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  local_268 = *(longlong *)((longlong)pvVar5 + 0x18);
  if ((*(int *)((longlong)pvVar5 + 0x10) < 0x100) ||
     (*(ulonglong *)((longlong)pvVar5 + 0x20) < local_268 + 0x100U)) {
    local_268 = FUN_1437138c0(pvVar5,0x100);
  }
  else {
    *(ulonglong *)((longlong)pvVar5 + 0x18) = local_268 + 0x100U;
  }
  local_26c = 0x80000040;
  local_278 = local_268;
  FUN_1437fd770(uVar4,&local_278,&local_258);
  iVar2 = local_260;
  lVar1 = local_268;
  if (local_268 == local_278) {
    local_270 = 0;
  }
  pvVar5 = TlsGetValue(DAT_146b7bf70);
  if (pvVar5 == (LPVOID)0x0) {
    pvVar5 = DAT_146b7bf68;
  }
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar3) ||
      ((int)uVar3 + lVar1 != *(longlong *)((longlong)pvVar5 + 0x18))) ||
     (*(longlong *)((longlong)pvVar5 + 0x28) == lVar1)) {
    FUN_143713ff0(pvVar5,lVar1);
  }
  else {
    *(longlong *)((longlong)pvVar5 + 0x18) = lVar1;
  }
  uVar4 = FUN_143703a50();
  local_270 = 0;
  if (-1 < (int)local_26c) {
    FUN_143702e10(uVar4,local_278,4,local_26c & 0x3fffffff);
  }
  return local_28 == 0;
}



// FUNCTION 1437fe1d0 FUN_1437fe1d0 body=60 status=ok
// SIG undefined FUN_1437fe1d0(void)

undefined1 * FUN_1437fe1d0(longlong param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = 4;
    if (param_3 <= *(int *)(*(longlong *)(param_1 + 0x28) + 0x30)) {
      uVar1 = 1;
    }
    *param_2 = uVar1;
    return param_2;
  }
  *param_2 = *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) + 8 + (longlong)param_3 * 0xc);
  return param_2;
}



// FUNCTION 1437fe210 FUN_1437fe210 body=41 status=ok
// SIG undefined FUN_1437fe210(void)

ulonglong FUN_1437fe210(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return 3;
  }
  return *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)(param_2 + 1) * 8) -
         *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 8) >> 3 & 0xffffffff;
}



// FUNCTION 1437fe240 FUN_1437fe240 body=332 status=ok
// SIG undefined FUN_1437fe240(void)

void FUN_1437fe240(longlong param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar13 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 8);
    iVar12 = (int)(*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)(param_2 + 1) * 8) -
                   lVar5 >> 3);
    *(int *)(param_3 + 1) = iVar12 * 2;
    lVar10 = lVar13;
    if (0 < iVar12) {
      do {
        piVar11 = *(int **)(lVar5 + lVar13 * 8);
        lVar13 = lVar13 + 1;
        iVar4 = piVar11[1];
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38);
        lVar7 = *param_3;
        puVar2 = (undefined8 *)(lVar6 + (longlong)*piVar11 * 0x10);
        uVar8 = puVar2[1];
        *(undefined8 *)(lVar10 + lVar7) = *puVar2;
        ((undefined8 *)(lVar10 + lVar7))[1] = uVar8;
        puVar2 = (undefined8 *)(lVar6 + (longlong)iVar4 * 0x10);
        uVar8 = puVar2[1];
        puVar3 = (undefined8 *)(lVar10 + 0x10 + *param_3);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        lVar10 = lVar10 + 0x20;
      } while (lVar13 < iVar12);
    }
    return;
  }
  param_2 = param_2 + -1;
  *(undefined4 *)(param_3 + 1) = 6;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (param_2 < *(int *)(lVar5 + 0x30)) {
    lVar10 = *(longlong *)(lVar5 + 0x18);
    piVar11 = (int *)((longlong)param_2 * 0x10 + *(longlong *)(lVar5 + 0x28));
    puVar1 = (undefined4 *)(lVar10 + (longlong)*piVar11 * 0x10);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    uVar16 = puVar1[2];
    uVar17 = puVar1[3];
    puVar1 = (undefined4 *)(lVar10 + (longlong)piVar11[1] * 0x10);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    iVar12 = piVar11[2];
  }
  else {
    piVar11 = (int *)((longlong)(param_2 - *(int *)(lVar5 + 0x30)) * 0x10 +
                     *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28));
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
    puVar1 = (undefined4 *)(lVar10 + (longlong)*piVar11 * 0x10);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    uVar16 = puVar1[2];
    uVar17 = puVar1[3];
    puVar1 = (undefined4 *)(lVar10 + (longlong)piVar11[1] * 0x10);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    iVar12 = piVar11[2];
  }
  puVar2 = (undefined8 *)(lVar10 + (longlong)iVar12 * 0x10);
  uVar8 = *puVar2;
  uVar9 = puVar2[1];
  puVar1 = (undefined4 *)*param_3;
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  puVar1[2] = uVar16;
  puVar1[3] = uVar17;
  lVar5 = *param_3;
  *(undefined4 *)(lVar5 + 0x10) = uVar18;
  *(undefined4 *)(lVar5 + 0x14) = uVar19;
  *(undefined4 *)(lVar5 + 0x18) = uVar20;
  *(undefined4 *)(lVar5 + 0x1c) = uVar21;
  lVar5 = *param_3;
  *(undefined4 *)(lVar5 + 0x20) = uVar18;
  *(undefined4 *)(lVar5 + 0x24) = uVar19;
  *(undefined4 *)(lVar5 + 0x28) = uVar20;
  *(undefined4 *)(lVar5 + 0x2c) = uVar21;
  lVar5 = *param_3;
  *(undefined8 *)(lVar5 + 0x30) = uVar8;
  *(undefined8 *)(lVar5 + 0x38) = uVar9;
  lVar5 = *param_3;
  *(undefined8 *)(lVar5 + 0x40) = uVar8;
  *(undefined8 *)(lVar5 + 0x48) = uVar9;
  lVar5 = *param_3;
  *(undefined4 *)(lVar5 + 0x50) = uVar14;
  *(undefined4 *)(lVar5 + 0x54) = uVar15;
  *(undefined4 *)(lVar5 + 0x58) = uVar16;
  *(undefined4 *)(lVar5 + 0x5c) = uVar17;
  return;
}



// FUNCTION 1437fe390 FUN_1437fe390 body=752 status=ok
// SIG undefined FUN_1437fe390(void)

uint FUN_1437fe390(float *param_1,float *param_2,longlong *param_3,int param_4,float *param_5,
                  int param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 local_res8;
  undefined4 local_resc;
  
  iVar12 = 0;
  fVar35 = 0.0;
  local_res8 = 0x1e241;
  local_resc = 0x1e241;
  fVar26 = *param_5;
  fVar21 = param_5[1];
  fVar25 = param_5[2];
  fVar31 = ABS(fVar26);
  fVar33 = ABS(fVar21);
  fVar34 = ABS(fVar25);
  fVar6 = *param_1;
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  auVar27._0_8_ = CONCAT44(fVar21,fVar21) & 0x7fffffff7fffffff;
  auVar27._8_4_ = fVar33;
  auVar27._12_4_ = fVar33;
  auVar22._0_8_ = CONCAT44(fVar25,fVar25) & 0x7fffffff7fffffff;
  auVar22._8_4_ = fVar34;
  auVar22._12_4_ = fVar34;
  auVar28._8_4_ = fVar31;
  auVar28._0_8_ = CONCAT44(fVar26,fVar26) & 0x7fffffff7fffffff;
  auVar28._12_4_ = fVar31;
  auVar28 = maxps(auVar27,auVar28);
  auVar28 = maxps(auVar22,auVar28);
  auVar23._4_4_ = -(uint)(auVar28._4_4_ <= fVar33);
  auVar23._0_4_ = -(uint)(auVar28._0_4_ <= fVar31);
  auVar23._8_4_ = -(uint)(auVar28._8_4_ <= fVar34);
  auVar23._12_4_ = -(uint)(auVar28._12_4_ <= ABS(param_5[3]));
  uVar10 = movmskps((int)param_5,auVar23);
  iVar11 = (char)(&DAT_145ba0900)[uVar10 & 7] + 1;
  lVar3 = (longlong)iVar11;
  iVar16 = (char)(&DAT_145ba0900)[uVar10 & 7] + 2;
  lVar4 = (longlong)iVar16;
  if (param_6 < 1) {
    return 0;
  }
LAB_1437fe490:
  uVar10 = 0;
  lVar13 = 0;
  if (param_4 < 1) {
LAB_1437fe5d5:
    return uVar10 & 1;
  }
  pfVar14 = (float *)*param_3;
  lVar1 = (longlong)
          (4 << ((char)iVar11 +
                 ((char)((ulonglong)(lVar3 * 0x55555556) >> 0x20) +
                 (char)((lVar3 / 3 + (lVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3 & 0x1fU)) * 4;
  lVar2 = (longlong)
          (4 << ((char)iVar16 +
                 ((char)((ulonglong)(lVar4 * 0x55555556) >> 0x20) +
                 (char)((lVar4 / 3 + (lVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3 & 0x1fU)) * 4;
  pfVar15 = pfVar14 + 4;
  do {
    fVar21 = (*param_2 + *pfVar14) - fVar6;
    fVar25 = (param_2[1] + pfVar14[1]) - fVar7;
    fVar31 = (param_2[2] + pfVar14[2]) - fVar8;
    fVar33 = (param_2[3] + pfVar14[3]) - fVar9;
    fVar26 = (*pfVar15 + *param_2) - fVar6;
    fVar34 = (pfVar15[1] + param_2[1]) - fVar7;
    fVar29 = (pfVar15[2] + param_2[2]) - fVar8;
    fVar30 = (pfVar15[3] + param_2[3]) - fVar9;
    fVar32 = (float)(*(uint *)(&UNK_145b8de6c + lVar2) & (uint)fVar33 |
                     *(uint *)(&UNK_145b8de64 + lVar2) & (uint)fVar25 |
                    *(uint *)(&UNK_145b8de68 + lVar2) & (uint)fVar31 |
                    *(uint *)(&DAT_145b8de60 + lVar2) & (uint)fVar21) + fVar35;
    uVar17 = *(uint *)(&DAT_145b8de60 + lVar2) & (uint)fVar26;
    uVar18 = *(uint *)(&UNK_145b8de64 + lVar2) & (uint)fVar34;
    uVar19 = *(uint *)(&UNK_145b8de68 + lVar2) & (uint)fVar29;
    uVar20 = *(uint *)(&UNK_145b8de6c + lVar2) & (uint)fVar30;
    fVar29 = (float)(*(uint *)(&UNK_145b8de6c + lVar1) & (uint)fVar30 |
                     *(uint *)(&UNK_145b8de64 + lVar1) & (uint)fVar34 |
                    *(uint *)(&UNK_145b8de68 + lVar1) & (uint)fVar29 |
                    *(uint *)(&DAT_145b8de60 + lVar1) & (uint)fVar26);
    auVar24._4_4_ = uVar20;
    auVar24._0_4_ = uVar19;
    auVar24._8_4_ = uVar17;
    auVar24._12_4_ = uVar18;
    auVar5._4_4_ = uVar18;
    auVar5._0_4_ = uVar17;
    auVar5._8_4_ = uVar19;
    auVar5._12_4_ = uVar20;
    fVar34 = (float)(SUB164(auVar24 | auVar5,4) | SUB164(auVar24 | auVar5,0)) + fVar35;
    fVar26 = fVar34 * fVar32;
    if (0.0 <= fVar26) {
      if ((fVar26 == 0.0) && (param_6 != 1)) break;
    }
    else {
      fVar32 = fVar32 - fVar34;
      fVar26 = (float)(*(uint *)(&UNK_145b8de6c + lVar1) & (uint)fVar33 |
                       *(uint *)(&UNK_145b8de64 + lVar1) & (uint)fVar25 |
                      *(uint *)(&UNK_145b8de68 + lVar1) & (uint)fVar31 |
                      *(uint *)(&DAT_145b8de60 + lVar1) & (uint)fVar21) - fVar29;
      if ((fVar32 <= 0.0) || (fVar26 * fVar34 <= fVar32 * fVar29)) {
        if ((fVar32 < 0.0) && (fVar26 * fVar34 < fVar32 * fVar29)) {
          uVar10 = uVar10 + 1;
        }
      }
      else {
        uVar10 = uVar10 + 1;
      }
    }
    lVar13 = lVar13 + 1;
    pfVar14 = pfVar14 + 8;
    pfVar15 = pfVar15 + 8;
    if (param_4 <= lVar13) goto LAB_1437fe5d5;
  } while( true );
  fVar26 = (float)FUN_1437fde50(param_3,param_4);
  fVar21 = (float)FUN_1437616e0(&local_res8);
  iVar12 = iVar12 + 1;
  fVar35 = fVar21 * (fVar26 - -fVar26) + -fVar26;
  if (param_6 <= iVar12) {
    return 0;
  }
  goto LAB_1437fe490;
}



// FUNCTION 1437fe680 FUN_1437fe680 body=295 status=ok
// SIG undefined FUN_1437fe680(void)

undefined4 FUN_1437fe680(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  byte local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x28);
  FUN_1437fe1d0(*param_1,local_res8,uVar1);
  uVar4 = 1;
  uVar5 = 0;
  uVar7 = uVar5;
  do {
    iVar6 = (int)uVar7;
    if ((*(uint *)(param_1 + 0x40) & uVar4) != 0) {
      local_38 = DAT_1467f06f0;
      uStack_34 = uRam00000001467f06f4;
      uStack_30 = uRam00000001467f06f8;
      uStack_2c = uRam00000001467f06fc;
      if ((~(local_res8[0] >> 2) & 1) == 0) {
        iVar2 = FUN_1437feea0(*param_1,uVar1,param_1[1] + uVar5,param_1[2] + uVar5,&local_38);
      }
      else {
        iVar2 = FUN_1437fe7b0(*param_1);
      }
      if (iVar2 != 0) {
        if (iVar6 < 3) {
          uVar3 = 7;
        }
        else {
          uVar3 = 0x1c0;
          if (iVar6 < 6) {
            uVar3 = 0x38;
          }
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & ~uVar3;
      }
    }
    uVar4 = uVar4 * 2;
    uVar7 = (ulonglong)(iVar6 + 1U);
    uVar5 = uVar5 + 0x10;
  } while ((int)(iVar6 + 1U) < 9);
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 1437fe7b0 FUN_1437fe7b0 body=1100 status=ok
// SIG undefined FUN_1437fe7b0(void)

longlong FUN_1437fe7b0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                      longlong param_5,float *param_6,char param_7,undefined1 (*param_8) [16])

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  LPVOID pvVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  ulonglong in_stack_ffffffffffffff20;
  float *local_c8;
  undefined4 local_c0;
  uint local_bc;
  float *local_b8;
  uint local_b0;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  cVar3 = FUN_1437feee0();
  if (cVar3 != '\0') {
    return 0;
  }
  lVar11 = 0;
  iVar10 = 0;
  iVar4 = FUN_1437fe210(param_1,param_2);
  lVar14 = (longlong)iVar4;
  local_c0 = 0;
  uVar5 = iVar4 * 2;
  local_b0 = uVar5;
  if (uVar5 == 0) {
    local_c8 = (float *)0x0;
  }
  else {
    pvVar6 = TlsGetValue(DAT_146b7bf70);
    if (pvVar6 == (LPVOID)0x0) {
      pvVar6 = DAT_146b7bf68;
    }
    uVar9 = iVar4 * 0x20 + 0x7fU & 0xffffff80;
    local_c8 = *(float **)((longlong)pvVar6 + 0x18);
    uVar13 = (longlong)(int)uVar9 + (longlong)local_c8;
    if ((*(int *)((longlong)pvVar6 + 0x10) < (int)uVar9) ||
       (*(ulonglong *)((longlong)pvVar6 + 0x20) < uVar13)) {
      local_c8 = (float *)FUN_1437138c0(pvVar6);
    }
    else {
      *(ulonglong *)((longlong)pvVar6 + 0x18) = uVar13;
    }
  }
  local_bc = uVar5 | 0x80000000;
  local_b8 = local_c8;
  FUN_1437fe240(param_1,param_2,&local_c8);
  lVar12 = lVar11;
  pfVar15 = local_c8;
  lVar16 = lVar11;
  local_a0 = lVar14;
  if (0 < lVar14) {
    do {
      local_58 = *param_6 + *pfVar15;
      fStack_54 = param_6[1] + pfVar15[1];
      fStack_50 = param_6[2] + pfVar15[2];
      fStack_4c = param_6[3] + pfVar15[3];
      in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
      local_78 = *param_6 + pfVar15[4];
      fStack_74 = param_6[1] + pfVar15[5];
      fStack_70 = param_6[2] + pfVar15[6];
      fStack_6c = param_6[3] + pfVar15[7];
      local_88 = *(undefined4 *)(param_5 + 0x1c);
      local_68 = *(undefined4 *)(param_5 + 0x1c);
      uStack_84 = local_88;
      uStack_80 = local_88;
      uStack_7c = local_88;
      uStack_64 = local_68;
      uStack_60 = local_68;
      uStack_5c = local_68;
      piVar7 = (int *)FUN_143e0a1f0(local_a8,param_5,pfVar15,&local_58,&local_78,
                                    in_stack_ffffffffffffff20,&local_88,&local_98);
      iVar4 = *piVar7;
      if (iVar4 != 0) {
        auVar17._4_4_ = uStack_84;
        auVar17._0_4_ = local_88;
        auVar17._8_4_ = uStack_80;
        auVar17._12_4_ = uStack_7c;
        auVar17 = minps(auVar17,*param_8);
        *param_8 = auVar17;
        if (param_7 != '\0') goto LAB_1437fea39;
      }
      in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffff00000000;
      piVar7 = (int *)FUN_143e0a1f0(local_a4,param_5,&local_78,pfVar15 + 4,pfVar15,
                                    in_stack_ffffffffffffff20,&local_68,&local_98);
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        auVar1._4_4_ = uStack_64;
        auVar1._0_4_ = local_68;
        auVar1._8_4_ = uStack_60;
        auVar1._12_4_ = uStack_5c;
        auVar17 = minps(auVar1,*param_8);
        *param_8 = auVar17;
        if (param_7 != '\0') {
LAB_1437fea39:
          pvVar6 = TlsGetValue(DAT_146b7bf70);
          if (pvVar6 == (LPVOID)0x0) {
            pvVar6 = DAT_146b7bf68;
          }
          uVar5 = local_b0 * 0x10 + 0x7f & 0xffffff80;
          if (((*(int *)((longlong)pvVar6 + 0x10) < (int)uVar5) ||
              ((longlong)(int)uVar5 + (longlong)local_b8 != *(longlong *)((longlong)pvVar6 + 0x18)))
             || (*(float **)((longlong)pvVar6 + 0x28) == local_b8)) {
            FUN_143713ff0();
          }
          else {
            *(float **)((longlong)pvVar6 + 0x18) = local_b8;
          }
          uVar8 = FUN_143703a50();
          if (-1 < (int)local_bc) {
            FUN_143702e10(uVar8,local_c8,0x10,local_bc & 0x3fffffff);
          }
          return 1;
        }
      }
      if ((((int)lVar12 != 0) || (iVar4 != 0)) || (lVar12 = lVar11, iVar10 != 0)) {
        lVar12 = 1;
      }
      iVar10 = (int)lVar12;
      lVar16 = lVar16 + 1;
      pfVar15 = pfVar15 + 8;
    } while (lVar16 < local_a0);
  }
  pfVar15 = local_c8;
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  uVar5 = local_b0 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar6 + 0x10) < (int)uVar5) ||
      ((longlong)(int)uVar5 + (longlong)local_b8 != *(longlong *)((longlong)pvVar6 + 0x18))) ||
     (*(float **)((longlong)pvVar6 + 0x28) == local_b8)) {
    FUN_143713ff0();
  }
  else {
    *(float **)((longlong)pvVar6 + 0x18) = local_b8;
  }
  uVar8 = FUN_143703a50();
  if (-1 < (int)local_bc) {
    FUN_143702e10(uVar8,pfVar15,0x10,local_bc & 0x3fffffff);
  }
  if ((iVar10 == 0) &&
     (iVar4 = FUN_1437fec00(param_1,param_2,param_3,param_4,
                            (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x78),&DAT_1467f06e0,
                            param_8), iVar4 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (param_7 != '\0') {
      return 1;
    }
  }
  pfVar15 = (float *)(*(longlong *)(param_1 + 0x78) + (longlong)param_2 * 0x10);
  local_98 = *pfVar15;
  fStack_94 = pfVar15[1];
  fStack_90 = pfVar15[2];
  fStack_8c = pfVar15[3] - (param_6[1] * fStack_94 + *param_6 * local_98 + param_6[2] * fStack_90);
  if ((bVar2) ||
     (iVar4 = FUN_1437fec00(param_1,pfVar15[3] -
                                    (param_6[1] * fStack_94 + *param_6 * local_98 +
                                    param_6[2] * fStack_90),param_3,param_4,&local_98,param_6,
                            param_8), iVar4 != 0)) {
    lVar11 = 1;
  }
  return lVar11;
}



// FUNCTION 1437fec00 FUN_1437fec00 body=671 status=ok
// SIG undefined FUN_1437fec00(void)

undefined8
FUN_1437fec00(longlong param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
             undefined8 param_6,undefined1 (*param_7) [16])

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar12;
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar18;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong local_48;
  undefined4 local_40;
  uint local_3c;
  longlong local_38;
  uint local_30;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  cVar3 = FUN_1437feee0();
  if (cVar3 == '\0') {
    local_58 = *param_3;
    fStack_54 = param_3[1];
    fStack_50 = param_3[2];
    fVar17 = param_5[3];
    fStack_5c = *param_5 * local_58;
    fVar13 = param_5[1] * fStack_54;
    fVar15 = param_5[2] * fStack_50;
    fStack_64 = fVar15 + fStack_5c;
    fVar12 = fVar17 + fVar13;
    fStack_5c = fStack_5c + fVar15;
    fVar13 = fVar13 + fVar17;
    fVar15 = *param_4 * *param_5;
    fVar14 = param_4[1] * param_5[1];
    fVar16 = param_4[2] * param_5[2];
    local_68 = fVar12 + fStack_64;
    fStack_64 = fStack_64 + fVar12;
    fStack_60 = fVar13 + fStack_5c;
    fStack_5c = fStack_5c + fVar13;
    fVar12 = fVar16 + fVar15;
    fVar13 = fVar17 + fVar14;
    fVar15 = fVar15 + fVar16;
    fVar14 = fVar14 + fVar17;
    fVar17 = fVar13 + fVar12;
    if (0.0 <= fVar17 * local_68) {
      uVar8 = 0;
    }
    else {
      fVar17 = local_68 - fVar17;
      fVar12 = fStack_64 - (fVar12 + fVar13);
      fVar13 = fStack_60 - (fVar14 + fVar15);
      fVar15 = fStack_5c - (fVar15 + fVar14);
      auVar11._4_4_ = fVar12;
      auVar11._0_4_ = fVar17;
      auVar11._8_4_ = fVar13;
      auVar11._12_4_ = fVar15;
      auVar11 = rcpps(ZEXT816(0),auVar11);
      local_68 = (2.0 - fVar17 * auVar11._0_4_) * auVar11._0_4_ * local_68;
      fStack_64 = (2.0 - fVar12 * auVar11._4_4_) * auVar11._4_4_ * fStack_64;
      fStack_60 = (2.0 - fVar13 * auVar11._8_4_) * auVar11._8_4_ * fStack_60;
      fStack_5c = (2.0 - fVar15 * auVar11._12_4_) * auVar11._12_4_ * fStack_5c;
      local_58 = (*param_4 - local_58) * local_68 + local_58;
      fStack_54 = (param_4[1] - fStack_54) * fStack_64 + fStack_54;
      fStack_50 = (param_4[2] - fStack_50) * fStack_60 + fStack_50;
      fStack_4c = (param_4[3] - param_3[3]) * fStack_5c + param_3[3];
      iVar4 = FUN_1437fe210(param_1,param_2);
      uVar8 = 0;
      local_40 = 0;
      uVar9 = iVar4 * 2;
      local_30 = uVar9;
      if (uVar9 == 0) {
        local_48 = 0;
      }
      else {
        pvVar5 = TlsGetValue(DAT_146b7bf70);
        if (pvVar5 == (LPVOID)0x0) {
          pvVar5 = DAT_146b7bf68;
        }
        uVar7 = iVar4 * 0x20 + 0x7fU & 0xffffff80;
        local_48 = *(longlong *)((longlong)pvVar5 + 0x18);
        uVar10 = (int)uVar7 + local_48;
        if ((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar7) ||
           (*(ulonglong *)((longlong)pvVar5 + 0x20) < uVar10)) {
          local_48 = FUN_1437138c0(pvVar5);
        }
        else {
          *(ulonglong *)((longlong)pvVar5 + 0x18) = uVar10;
        }
      }
      local_3c = uVar9 | 0x80000000;
      local_38 = local_48;
      FUN_1437fe240(param_1,param_2,&local_48);
      iVar4 = FUN_1437fe390(&local_58,param_6,&local_48,iVar4,param_5,CONCAT44(uVar18,10));
      if ((iVar4 != 0) &&
         ((plVar1 = *(longlong **)(param_1 + 0x90), plVar1 == (longlong *)0x0 ||
          (cVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,param_4,&local_68,param_5),
          cVar3 == '\0')))) {
        uVar8 = 1;
        auVar2._4_4_ = fStack_64;
        auVar2._0_4_ = local_68;
        auVar2._8_4_ = fStack_60;
        auVar2._12_4_ = fStack_5c;
        auVar11 = minps(auVar2,*param_7);
        *param_7 = auVar11;
      }
      pvVar5 = TlsGetValue(DAT_146b7bf70);
      if (pvVar5 == (LPVOID)0x0) {
        pvVar5 = DAT_146b7bf68;
      }
      uVar9 = local_30 * 0x10 + 0x7f & 0xffffff80;
      if (((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar9) ||
          ((int)uVar9 + local_38 != *(longlong *)((longlong)pvVar5 + 0x18))) ||
         (*(longlong *)((longlong)pvVar5 + 0x28) == local_38)) {
        FUN_143713ff0();
      }
      else {
        *(longlong *)((longlong)pvVar5 + 0x18) = local_38;
      }
      uVar6 = FUN_143703a50();
      if (-1 < (int)local_3c) {
        FUN_143702e10(uVar6,local_48,0x10,local_3c & 0x3fffffff);
      }
    }
    return uVar8;
  }
  return 0;
}



// FUNCTION 1437feea0 FUN_1437feea0 body=52 status=ok
// SIG undefined FUN_1437feea0(void)

void FUN_1437feea0(void)

{
  FUN_1437fec00();
  return;
}



// FUNCTION 1437feee0 FUN_1437feee0 body=90 status=ok
// SIG undefined FUN_1437feee0(void)

undefined8 FUN_1437feee0(longlong param_1,int param_2)

{
  longlong lVar1;
  byte local_res8 [8];
  
  FUN_1437fe1d0(param_1,local_res8,param_2);
  lVar1 = 0;
  if ((local_res8[0] & *(byte *)(param_1 + 0x1c)) == 0) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28);
    param_2 = *(int *)(lVar1 + 4 + (longlong)param_2 * 0xc);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),param_2 == *(int *)(param_1 + 0x18));
}



// FUNCTION 1437fef40 FUN_1437fef40 body=3127 status=ok
// SIG undefined FUN_1437fef40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1437fef40(longlong param_1,float *param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6,undefined4 param_7,undefined4 param_8,float param_9,float param_10,
             undefined4 *param_11)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar38;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  float fVar47;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
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
  float local_res8 [2];
  undefined8 in_stack_fffffffffffffd50;
  undefined4 uVar63;
  undefined1 local_268 [8];
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 local_d8;
  
  uVar63 = (undefined4)((ulonglong)in_stack_fffffffffffffd50 >> 0x20);
  local_res8[0] = param_9;
  FUN_143852420(&local_208,param_4,local_res8,&local_1e8);
  local_res8[0] = param_10;
  FUN_143852420(&local_208,param_5,local_res8,&local_1f8);
  local_208 = local_1f8;
  fStack_204 = fStack_1f4;
  fStack_200 = fStack_1f0;
  uStack_1fc = uStack_1ec;
  local_1d8 = local_1e8;
  fStack_1d4 = fStack_1e4;
  fStack_1d0 = fStack_1e0;
  uStack_1cc = uStack_1dc;
  if (*(float *)(param_1 + 0x24) <=
      fStack_1f4 * fStack_1e4 + local_1f8 * local_1e8 + fStack_1f0 * fStack_1e0) {
    lVar3 = *(longlong *)(param_4 + 0x18);
    piVar8 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                  lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,CONCAT44(uVar63,param_7));
    lVar4 = *(longlong *)(param_5 + 0x18);
    piVar9 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x30),
                                  lVar4 + 0xc0,lVar4 + 0xe0,lVar4 + 0x70,param_8);
    iVar1 = *piVar8;
    iVar2 = *(int *)(lVar3 + 0x40);
    if (iVar1 < iVar2) {
      pfVar11 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
    }
    else {
      pfVar11 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
    }
    fVar21 = *pfVar11;
    fVar26 = pfVar11[1];
    fVar28 = pfVar11[2];
    iVar1 = piVar8[1];
    fVar60 = fVar26 * *(float *)(param_4 + 0x50) + fVar21 * *(float *)(param_4 + 0x40) +
             fVar28 * *(float *)(param_4 + 0x60) + *(float *)(param_4 + 0x70);
    fVar61 = fVar26 * *(float *)(param_4 + 0x54) + fVar21 * *(float *)(param_4 + 0x44) +
             fVar28 * *(float *)(param_4 + 100) + *(float *)(param_4 + 0x74);
    fVar62 = fVar26 * *(float *)(param_4 + 0x58) + fVar21 * *(float *)(param_4 + 0x48) +
             fVar28 * *(float *)(param_4 + 0x68) + *(float *)(param_4 + 0x78);
    fStack_23c = fVar26 * *(float *)(param_4 + 0x5c) + fVar21 * *(float *)(param_4 + 0x4c) +
                 fVar28 * *(float *)(param_4 + 0x6c) + *(float *)(param_4 + 0x7c);
    if (iVar1 < iVar2) {
      pfVar11 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
    }
    else {
      pfVar11 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
    }
    fVar21 = *pfVar11;
    fVar26 = pfVar11[1];
    fVar28 = pfVar11[2];
    iVar1 = *piVar9;
    iVar2 = *(int *)(lVar4 + 0x40);
    local_238 = fVar26 * *(float *)(param_4 + 0x50) + fVar21 * *(float *)(param_4 + 0x40) +
                fVar28 * *(float *)(param_4 + 0x60) + *(float *)(param_4 + 0x70);
    fStack_234 = fVar26 * *(float *)(param_4 + 0x54) + fVar21 * *(float *)(param_4 + 0x44) +
                 fVar28 * *(float *)(param_4 + 100) + *(float *)(param_4 + 0x74);
    fStack_230 = fVar26 * *(float *)(param_4 + 0x58) + fVar21 * *(float *)(param_4 + 0x48) +
                 fVar28 * *(float *)(param_4 + 0x68) + *(float *)(param_4 + 0x78);
    fStack_22c = fVar26 * *(float *)(param_4 + 0x5c) + fVar21 * *(float *)(param_4 + 0x4c) +
                 fVar28 * *(float *)(param_4 + 0x6c) + *(float *)(param_4 + 0x7c);
    if (iVar1 < iVar2) {
      pfVar11 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 0x38));
    }
    else {
      pfVar11 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
    }
    fVar21 = *pfVar11;
    fVar26 = pfVar11[1];
    fVar28 = pfVar11[2];
    iVar1 = piVar9[1];
    fVar57 = fVar26 * *(float *)(param_5 + 0x50) + fVar21 * *(float *)(param_5 + 0x40) +
             fVar28 * *(float *)(param_5 + 0x60) + *(float *)(param_5 + 0x70);
    fVar58 = fVar26 * *(float *)(param_5 + 0x54) + fVar21 * *(float *)(param_5 + 0x44) +
             fVar28 * *(float *)(param_5 + 100) + *(float *)(param_5 + 0x74);
    fVar59 = fVar26 * *(float *)(param_5 + 0x58) + fVar21 * *(float *)(param_5 + 0x48) +
             fVar28 * *(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x78);
    local_268._4_4_ = fVar58;
    local_268._0_4_ = fVar57;
    fStack_260 = fVar59;
    fStack_25c = fVar26 * *(float *)(param_5 + 0x5c) + fVar21 * *(float *)(param_5 + 0x4c) +
                 fVar28 * *(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x7c);
    if (iVar1 < iVar2) {
      pfVar11 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 0x38));
    }
    else {
      pfVar11 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
    }
    fVar21 = *pfVar11;
    fVar26 = pfVar11[1];
    fVar28 = pfVar11[2];
    auVar29._0_4_ =
         fVar26 * *(float *)(param_5 + 0x50) + fVar21 * *(float *)(param_5 + 0x40) +
         fVar28 * *(float *)(param_5 + 0x60) + *(float *)(param_5 + 0x70);
    auVar29._4_4_ =
         fVar26 * *(float *)(param_5 + 0x54) + fVar21 * *(float *)(param_5 + 0x44) +
         fVar28 * *(float *)(param_5 + 100) + *(float *)(param_5 + 0x74);
    auVar29._8_4_ =
         fVar26 * *(float *)(param_5 + 0x58) + fVar21 * *(float *)(param_5 + 0x48) +
         fVar28 * *(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x78);
    auVar29._12_4_ =
         fVar26 * *(float *)(param_5 + 0x5c) + fVar21 * *(float *)(param_5 + 0x4c) +
         fVar28 * *(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x7c);
    _local_258 = auVar29;
    local_248 = fVar60;
    fStack_244 = fVar61;
    fStack_240 = fVar62;
    FUN_143801170(&local_1c8,&local_248,&local_238,local_268,local_258);
    fVar53 = 0.0;
    fVar54 = 0.0;
    fVar55 = 0.0;
    fVar56 = 0.0;
    local_1b8 = local_1b8 - local_1c8;
    fStack_1b4 = fStack_1b4 - fStack_1c4;
    fStack_1b0 = fStack_1b0 - fStack_1c0;
    local_198 = local_198 - local_1a8;
    fStack_194 = fStack_194 - fStack_1a4;
    fStack_190 = fStack_190 - fStack_1a0;
    fVar21 = *param_2;
    fVar26 = param_2[1];
    fVar28 = param_2[2];
    fVar20 = local_1b8 * local_1b8;
    fVar25 = fStack_1b4 * fStack_1b4;
    fVar27 = fStack_1b0 * fStack_1b0;
    auVar40._0_4_ = fVar25 + fVar20 + fVar27;
    auVar40._4_4_ = fVar25 + fVar20 + fVar27;
    auVar40._8_4_ = fVar25 + fVar20 + fVar27;
    auVar40._12_4_ = fVar25 + fVar20 + fVar27;
    auVar30 = rsqrtps(auVar29,auVar40);
    fVar38 = auVar30._0_4_;
    fVar48 = auVar30._4_4_;
    fVar49 = auVar30._8_4_;
    fVar39 = auVar30._12_4_;
    auVar31._0_4_ = fVar38 * 0.5;
    auVar31._4_4_ = fVar48 * 0.5;
    auVar31._8_4_ = fVar49 * 0.5;
    auVar31._12_4_ = fVar39 * 0.5;
    fVar20 = local_198 * local_198;
    fVar25 = fStack_194 * fStack_194;
    fVar27 = fStack_190 * fStack_190;
    local_218 = (float)(~-(uint)(auVar40._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar38 * auVar40._0_4_ * fVar38) * auVar31._0_4_)) * local_1b8;
    fStack_214 = (float)(~-(uint)(auVar40._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar48 * auVar40._4_4_ * fVar48) * auVar31._4_4_)) *
                 fStack_1b4;
    fStack_210 = (float)(~-(uint)(auVar40._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar49 * auVar40._8_4_ * fVar49) * auVar31._8_4_)) *
                 fStack_1b0;
    fStack_20c = (float)(~-(uint)(auVar40._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar39 * auVar40._12_4_ * fVar39) * auVar31._12_4_)) *
                 (fStack_1ac - fStack_1bc);
    auVar41._0_4_ = fVar25 + fVar20 + fVar27;
    auVar41._4_4_ = fVar25 + fVar20 + fVar27;
    auVar41._8_4_ = fVar25 + fVar20 + fVar27;
    auVar41._12_4_ = fVar25 + fVar20 + fVar27;
    auVar30 = rsqrtps(auVar31,auVar41);
    fVar20 = auVar30._0_4_;
    fVar27 = auVar30._4_4_;
    fVar48 = auVar30._8_4_;
    fVar49 = auVar30._12_4_;
    fVar39 = fVar21 * local_198;
    fVar47 = fVar26 * fStack_194;
    auVar42._8_4_ = fVar28 * fStack_190;
    fVar25 = fVar21 * local_1b8;
    fVar38 = fVar26 * fStack_1b4;
    auVar32._8_4_ = fVar28 * fStack_1b0;
    local_228 = (float)(~-(uint)(auVar41._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar20 * auVar41._0_4_ * fVar20) * fVar20 * 0.5)) * local_198;
    fStack_224 = (float)(~-(uint)(auVar41._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar27 * auVar41._4_4_ * fVar27) * fVar27 * 0.5)) * fStack_194
    ;
    fStack_220 = (float)(~-(uint)(auVar41._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar48 * auVar41._8_4_ * fVar48) * fVar48 * 0.5)) * fStack_190
    ;
    fStack_21c = (float)(~-(uint)(auVar41._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar49 * auVar41._12_4_ * fVar49) * fVar49 * 0.5)) *
                 (fStack_18c - fStack_19c);
    auVar32._4_4_ = auVar32._8_4_;
    auVar32._0_4_ = auVar32._8_4_;
    auVar32._12_4_ = auVar32._8_4_;
    auVar42._4_4_ = auVar42._8_4_;
    auVar42._0_4_ = auVar42._8_4_;
    auVar42._12_4_ = auVar42._8_4_;
    local_1b8 = (0.0 - (fVar38 + fVar25 + auVar32._8_4_)) * fVar21 + local_1b8;
    fStack_1b4 = (0.0 - (fVar38 + fVar25 + auVar32._8_4_)) * fVar26 + fStack_1b4;
    fStack_1b0 = (0.0 - (fVar38 + fVar25 + auVar32._8_4_)) * fVar28 + fStack_1b0;
    fVar20 = local_1b8 * local_1b8;
    fVar25 = fStack_1b4 * fStack_1b4;
    fVar27 = fStack_1b0 * fStack_1b0;
    local_198 = (0.0 - (fVar47 + fVar39 + auVar42._8_4_)) * fVar21 + local_198;
    fStack_194 = (0.0 - (fVar47 + fVar39 + auVar42._8_4_)) * fVar26 + fStack_194;
    fStack_190 = (0.0 - (fVar47 + fVar39 + auVar42._8_4_)) * fVar28 + fStack_190;
    fVar38 = fVar25 + fVar20 + fVar27;
    fVar48 = fVar25 + fVar20 + fVar27;
    fVar49 = fVar25 + fVar20 + fVar27;
    fVar21 = local_198 * local_198;
    fVar26 = fStack_194 * fStack_194;
    fVar28 = fStack_190 * fStack_190;
    auVar30._4_4_ = fVar48;
    auVar30._0_4_ = fVar38;
    auVar30._8_4_ = fVar49;
    auVar30._12_4_ = fVar25 + fVar20 + fVar27;
    auVar30 = rsqrtps(auVar32,auVar30);
    fVar20 = auVar30._0_4_;
    fVar25 = auVar30._4_4_;
    fVar27 = auVar30._8_4_;
    fVar39 = fVar26 + fVar21 + fVar28;
    fVar47 = fVar26 + fVar21 + fVar28;
    fVar50 = fVar26 + fVar21 + fVar28;
    auVar51._4_4_ = fVar47;
    auVar51._0_4_ = fVar39;
    auVar51._8_4_ = fVar50;
    auVar51._12_4_ = fVar26 + fVar21 + fVar28;
    auVar30 = rsqrtps(auVar42,auVar51);
    fVar21 = auVar30._0_4_;
    fVar26 = auVar30._4_4_;
    fVar28 = auVar30._8_4_;
    fVar21 = 0.0 - ((float)(~-(uint)(fVar48 <= 0.0) &
                           (uint)((3.0 - fVar25 * fVar48 * fVar25) * fVar25 * 0.5)) * fStack_1b4 *
                    (float)(~-(uint)(fVar47 <= 0.0) &
                           (uint)((3.0 - fVar47 * fVar26 * fVar26) * fVar26 * 0.5)) * fStack_194 +
                    (float)(~-(uint)(fVar38 <= 0.0) &
                           (uint)((3.0 - fVar20 * fVar38 * fVar20) * fVar20 * 0.5)) * local_1b8 *
                    (float)(~-(uint)(fVar39 <= 0.0) &
                           (uint)((3.0 - fVar39 * fVar21 * fVar21) * fVar21 * 0.5)) * local_198 +
                   (float)(~-(uint)(fVar49 <= 0.0) &
                          (uint)((3.0 - fVar27 * fVar49 * fVar27) * fVar27 * 0.5)) * fStack_1b0 *
                   (float)(~-(uint)(fVar50 <= 0.0) &
                          (uint)((3.0 - fVar50 * fVar28 * fVar28) * fVar28 * 0.5)) * fStack_190);
    if (fVar21 < *(float *)(param_1 + 0x28)) {
      uVar10 = 0xd;
    }
    else {
      local_res8[0] = fVar21;
      uVar10 = FUN_1438011f0(&local_1c8,param_1,param_2,&local_218,&local_228,&local_238,&local_248,
                             local_268,local_258,local_res8);
      if ((int)uVar10 == -1) {
        uVar63 = local_258._0_4_;
        uVar6 = local_258._4_4_;
        fVar26 = fStack_250;
        fVar28 = fStack_24c;
        param_11[6] = local_res8[0];
        *param_11 = param_7;
        param_11[1] = param_8;
        param_11[5] = fVar21;
        auVar16._0_4_ = local_248 - local_238;
        auVar16._4_4_ = fStack_244 - fStack_234;
        auVar16._8_4_ = fStack_240 - fStack_230;
        auVar16._12_4_ = fStack_23c - fStack_22c;
        param_11[2] = param_9;
        param_11[3] = param_10;
        param_11[4] = 0xbf800000;
        *(undefined1 *)(param_11 + 7) = 1;
        auVar5._4_4_ = fRam00000001467f06f4;
        auVar5._0_4_ = DAT_1467f06f0;
        auVar5._8_4_ = fRam00000001467f06f8;
        auVar5._12_4_ = fRam00000001467f06fc;
        auVar51 = divps(auVar5,auVar16);
        auVar17._0_4_ = (float)local_258._0_4_ - (float)local_268._0_4_;
        auVar17._4_4_ = (float)local_258._4_4_ - (float)local_268._4_4_;
        auVar17._8_4_ = fStack_250 - fStack_260;
        auVar17._12_4_ = fStack_24c - fStack_25c;
        auVar30 = divps(auVar5,auVar17);
        if (0.001 <= ABS(local_238 - (float)local_268._0_4_)) {
          if (local_238 <= (float)local_268._0_4_) {
            local_258._4_4_ = ((float)local_268._4_4_ - fStack_234) * auVar51._4_4_;
            local_258._0_4_ = ((float)local_268._0_4_ - local_238) * auVar51._0_4_;
            fStack_250 = (fStack_260 - fStack_230) * auVar51._8_4_;
            fStack_24c = (fStack_25c - fStack_22c) * auVar51._12_4_;
          }
          else {
            _local_258 = ZEXT816(0);
            fVar53 = auVar30._0_4_ * (local_238 - (float)local_268._0_4_);
            fVar54 = auVar30._4_4_ * (fStack_234 - (float)local_268._4_4_);
            fVar55 = auVar30._8_4_ * (fStack_230 - fStack_260);
            fVar56 = auVar30._12_4_ * (fStack_22c - fStack_25c);
          }
        }
        else {
          _local_258 = ZEXT816(0);
        }
        auVar33 = auVar5;
        if (0.001 <= ABS(local_248 - (float)uVar63)) {
          if (local_248 <= (float)uVar63) {
            auVar33._0_4_ = (local_248 - (float)local_268._0_4_) * auVar30._0_4_;
            auVar33._4_4_ = (fStack_244 - (float)local_268._4_4_) * auVar30._4_4_;
            auVar33._8_4_ = (fStack_240 - fStack_260) * auVar30._8_4_;
            auVar33._12_4_ = (fStack_23c - fStack_25c) * auVar30._12_4_;
          }
          else {
            local_268._4_4_ = ((float)uVar6 - fStack_234) * auVar51._4_4_;
            local_268._0_4_ = ((float)uVar63 - local_238) * auVar51._0_4_;
            fStack_260 = (fVar26 - fStack_230) * auVar51._8_4_;
            fStack_25c = (fVar28 - fStack_22c) * auVar51._12_4_;
            auVar5 = _local_268;
          }
        }
        _local_268 = auVar5;
        local_248 = DAT_1467f06f0 - fVar53;
        fStack_244 = fRam00000001467f06f4 - fVar54;
        fStack_240 = fRam00000001467f06f8 - fVar55;
        fStack_23c = fRam00000001467f06fc - fVar56;
        local_238 = DAT_1467f06f0 - auVar33._0_4_;
        fStack_234 = fRam00000001467f06f4 - auVar33._4_4_;
        fStack_230 = fRam00000001467f06f8 - auVar33._8_4_;
        fStack_22c = fRam00000001467f06fc - auVar33._12_4_;
        FUN_143802b30(&local_1c8,local_258,local_268,&local_238,&local_248);
        cVar7 = FUN_143801800(&local_1c8);
        if (cVar7 == '\0') {
          FUN_1438025e0(&local_1c8,&local_248,&local_238);
          if (local_248 <= *(float *)(param_1 + 4) * *(float *)(param_1 + 4)) {
            if ((param_6 == 0) ||
               (uVar10 = FUN_143801400(&local_1c8,param_1,param_2,0), (int)uVar10 == -1)) {
              param_11[8] = local_108;
              param_11[9] = local_f8;
              param_11[10] = local_e8;
              param_11[0xb] = local_d8;
              FUN_143802ae0(&local_1c8,param_2);
              fVar27 = local_128 - local_118;
              fVar38 = fStack_124 - fStack_114;
              fVar48 = fStack_120 - fStack_110;
              fVar49 = local_128 - ((local_138 - local_148) * _DAT_1467f07e0 + local_148);
              fVar39 = fStack_124 - ((fStack_134 - fStack_144) * fRam00000001467f07e4 + fStack_144);
              fVar47 = fStack_120 - ((fStack_130 - fStack_140) * fRam00000001467f07e8 + fStack_140);
              fVar21 = fVar27 * fVar27;
              fVar26 = fVar38 * fVar38;
              fVar28 = fVar48 * fVar48;
              auVar34._0_4_ = fVar26 + fVar21 + fVar28;
              auVar34._4_4_ = fVar26 + fVar21 + fVar28;
              auVar34._8_4_ = fVar26 + fVar21 + fVar28;
              auVar34._12_4_ = fVar26 + fVar21 + fVar28;
              fVar21 = fVar49 * fVar27;
              fVar26 = fVar39 * fVar38;
              auVar22._8_4_ = fVar47 * fVar48;
              auVar22._4_4_ = auVar22._8_4_;
              auVar22._0_4_ = auVar22._8_4_;
              auVar22._12_4_ = auVar22._8_4_;
              auVar30 = rcpps(auVar22,auVar34);
              fVar28 = (2.0 - auVar30._0_4_ * auVar34._0_4_) * auVar30._0_4_ *
                       (fVar26 + fVar21 + auVar22._8_4_);
              fVar20 = (2.0 - auVar30._4_4_ * auVar34._4_4_) * auVar30._4_4_ *
                       (fVar26 + fVar21 + auVar22._8_4_);
              fVar25 = (2.0 - auVar30._8_4_ * auVar34._8_4_) * auVar30._8_4_ *
                       (fVar26 + fVar21 + auVar22._8_4_);
              fVar21 = (2.0 - auVar30._12_4_ * auVar34._12_4_) * auVar30._12_4_ *
                       (fVar26 + fVar21 + auVar22._8_4_);
              uVar12 = -(uint)(fVar28 < DAT_1467f06f0);
              uVar13 = -(uint)(fVar20 < fRam00000001467f06f4);
              uVar14 = -(uint)(fVar25 < fRam00000001467f06f8);
              uVar15 = -(uint)(fVar21 < fRam00000001467f06fc);
              auVar35._0_4_ = (uint)fVar28 & uVar12;
              auVar35._4_4_ = (uint)fVar20 & uVar13;
              auVar35._8_4_ = (uint)fVar25 & uVar14;
              auVar35._12_4_ = (uint)fVar21 & uVar15;
              auVar18._0_4_ = ~uVar12 & (uint)DAT_1467f06f0;
              auVar18._4_4_ = ~uVar13 & (uint)fRam00000001467f06f4;
              auVar18._8_4_ = ~uVar14 & (uint)fRam00000001467f06f8;
              auVar18._12_4_ = ~uVar15 & (uint)fRam00000001467f06fc;
              auVar30 = maxps(ZEXT816(0),auVar35 | auVar18);
              fVar49 = fVar49 - auVar30._0_4_ * fVar27;
              fVar39 = fVar39 - auVar30._4_4_ * fVar38;
              fVar47 = fVar47 - auVar30._8_4_ * fVar48;
              fVar49 = fVar49 * fVar49;
              fVar39 = fVar39 * fVar39;
              fVar47 = fVar47 * fVar47;
              auVar43._0_4_ = fVar39 + fVar49 + fVar47;
              auVar43._4_4_ = fVar39 + fVar49 + fVar47;
              auVar43._8_4_ = fVar39 + fVar49 + fVar47;
              auVar43._12_4_ = fVar39 + fVar49 + fVar47;
              auVar30 = rsqrtps(auVar35 | auVar18,auVar43);
              fVar25 = auVar30._0_4_;
              fVar27 = auVar30._4_4_;
              fVar38 = auVar30._8_4_;
              fVar48 = auVar30._12_4_;
              local_138 = local_148 - local_138;
              fStack_134 = fStack_144 - fStack_134;
              fStack_130 = fStack_140 - fStack_130;
              local_148 = local_148 - ((local_118 - local_128) * _DAT_1467f07e0 + local_128);
              fStack_144 = fStack_144 -
                           ((fStack_114 - fStack_124) * fRam00000001467f07e4 + fStack_124);
              fStack_140 = fStack_140 -
                           ((fStack_110 - fStack_120) * fRam00000001467f07e8 + fStack_120);
              fVar21 = local_138 * local_138;
              fVar26 = fStack_134 * fStack_134;
              fVar28 = fStack_130 * fStack_130;
              auVar44._0_4_ = fVar26 + fVar21 + fVar28;
              auVar44._4_4_ = fVar26 + fVar21 + fVar28;
              auVar44._8_4_ = fVar26 + fVar21 + fVar28;
              auVar44._12_4_ = fVar26 + fVar21 + fVar28;
              fVar21 = local_148 * local_138;
              fVar26 = fStack_144 * fStack_134;
              auVar23._8_4_ = fStack_140 * fStack_130;
              auVar23._4_4_ = auVar23._8_4_;
              auVar23._0_4_ = auVar23._8_4_;
              auVar23._12_4_ = auVar23._8_4_;
              auVar51 = rcpps(auVar23,auVar44);
              fVar28 = (2.0 - auVar51._0_4_ * auVar44._0_4_) * auVar51._0_4_ *
                       (fVar26 + fVar21 + auVar23._8_4_);
              fVar20 = (2.0 - auVar51._4_4_ * auVar44._4_4_) * auVar51._4_4_ *
                       (fVar26 + fVar21 + auVar23._8_4_);
              fVar49 = (2.0 - auVar51._8_4_ * auVar44._8_4_) * auVar51._8_4_ *
                       (fVar26 + fVar21 + auVar23._8_4_);
              fVar21 = (2.0 - auVar51._12_4_ * auVar44._12_4_) * auVar51._12_4_ *
                       (fVar26 + fVar21 + auVar23._8_4_);
              uVar12 = -(uint)(fVar28 < DAT_1467f06f0);
              uVar13 = -(uint)(fVar20 < fRam00000001467f06f4);
              uVar14 = -(uint)(fVar49 < fRam00000001467f06f8);
              uVar15 = -(uint)(fVar21 < fRam00000001467f06fc);
              auVar52._0_4_ = (uint)fVar28 & uVar12;
              auVar52._4_4_ = (uint)fVar20 & uVar13;
              auVar52._8_4_ = (uint)fVar49 & uVar14;
              auVar52._12_4_ = (uint)fVar21 & uVar15;
              auVar19._0_4_ = ~uVar12 & (uint)DAT_1467f06f0;
              auVar19._4_4_ = ~uVar13 & (uint)fRam00000001467f06f4;
              auVar19._8_4_ = ~uVar14 & (uint)fRam00000001467f06f8;
              auVar19._12_4_ = ~uVar15 & (uint)fRam00000001467f06fc;
              auVar30 = maxps(ZEXT816(0),auVar52 | auVar19);
              local_148 = local_148 - auVar30._0_4_ * local_138;
              fStack_144 = fStack_144 - auVar30._4_4_ * fStack_134;
              fStack_140 = fStack_140 - auVar30._8_4_ * fStack_130;
              local_148 = local_148 * local_148;
              fStack_144 = fStack_144 * fStack_144;
              fStack_140 = fStack_140 * fStack_140;
              auVar45._0_4_ = fStack_144 + local_148 + fStack_140;
              auVar45._4_4_ = fStack_144 + local_148 + fStack_140;
              auVar45._8_4_ = fStack_144 + local_148 + fStack_140;
              auVar45._12_4_ = fStack_144 + local_148 + fStack_140;
              auVar30 = rsqrtps(auVar51,auVar45);
              fVar21 = auVar30._0_4_;
              fVar26 = auVar30._4_4_;
              fVar28 = auVar30._8_4_;
              fVar20 = auVar30._12_4_;
              fVar21 = ((float)(~-(uint)(auVar45._0_4_ <= 0.0) &
                               (uint)((3.0 - fVar21 * auVar45._0_4_ * fVar21) * fVar21 * 0.5 *
                                     auVar45._0_4_)) +
                       (float)(~-(uint)(auVar43._0_4_ <= 0.0) &
                              (uint)((3.0 - fVar25 * auVar43._0_4_ * fVar25) * fVar25 * 0.5 *
                                    auVar43._0_4_))) * _DAT_1467f07e0;
              fVar26 = ((float)(~-(uint)(auVar45._4_4_ <= 0.0) &
                               (uint)((3.0 - fVar26 * auVar45._4_4_ * fVar26) * fVar26 * 0.5 *
                                     auVar45._4_4_)) +
                       (float)(~-(uint)(auVar43._4_4_ <= 0.0) &
                              (uint)((3.0 - fVar27 * auVar43._4_4_ * fVar27) * fVar27 * 0.5 *
                                    auVar43._4_4_))) * fRam00000001467f07e4;
              fVar28 = ((float)(~-(uint)(auVar45._8_4_ <= 0.0) &
                               (uint)((3.0 - fVar28 * auVar45._8_4_ * fVar28) * fVar28 * 0.5 *
                                     auVar45._8_4_)) +
                       (float)(~-(uint)(auVar43._8_4_ <= 0.0) &
                              (uint)((3.0 - fVar38 * auVar43._8_4_ * fVar38) * fVar38 * 0.5 *
                                    auVar43._8_4_))) * fRam00000001467f07e8;
              fVar20 = ((float)(~-(uint)(auVar45._12_4_ <= 0.0) &
                               (uint)((3.0 - fVar20 * auVar45._12_4_ * fVar20) * fVar20 * 0.5 *
                                     auVar45._12_4_)) +
                       (float)(~-(uint)(auVar43._12_4_ <= 0.0) &
                              (uint)((3.0 - fVar48 * auVar43._12_4_ * fVar48) * fVar48 * 0.5 *
                                    auVar43._12_4_))) * fRam00000001467f07ec;
              fVar25 = fStack_1d4 * local_218 - fStack_214 * local_1d8;
              fVar27 = fStack_1d0 * fStack_214 - fStack_210 * fStack_1d4;
              fVar38 = local_1d8 * fStack_210 - local_218 * fStack_1d0;
              auVar36._0_4_ = fVar21 * fVar21;
              auVar36._4_4_ = fVar26 * fVar26;
              auVar36._8_4_ = fVar28 * fVar28;
              auVar36._12_4_ = fVar20 * fVar20;
              fVar20 = fStack_204 * local_228 - fStack_224 * local_208;
              fVar48 = fStack_200 * fStack_224 - fStack_220 * fStack_204;
              fVar49 = local_208 * fStack_220 - local_228 * fStack_200;
              fVar21 = fVar27 * fVar27;
              fVar26 = fVar38 * fVar38;
              fVar28 = fVar25 * fVar25;
              param_11[4] = auVar36._0_4_;
              auVar46._0_4_ = fVar26 + fVar21 + fVar28;
              auVar46._4_4_ = fVar26 + fVar21 + fVar28;
              auVar46._8_4_ = fVar26 + fVar21 + fVar28;
              auVar46._12_4_ = fVar26 + fVar21 + fVar28;
              auVar30 = rsqrtps(auVar36,auVar46);
              fVar21 = auVar30._0_4_;
              fVar26 = auVar30._4_4_;
              fVar28 = auVar30._8_4_;
              fVar27 = fVar27 * (float)(~-(uint)(auVar46._0_4_ <= 0.0) &
                                       (uint)((3.0 - fVar21 * auVar46._0_4_ * fVar21) * fVar21 * 0.5
                                             ));
              fVar38 = fVar38 * (float)(~-(uint)(auVar46._4_4_ <= 0.0) &
                                       (uint)((3.0 - fVar26 * auVar46._4_4_ * fVar26) * fVar26 * 0.5
                                             ));
              fVar25 = fVar25 * (float)(~-(uint)(auVar46._8_4_ <= 0.0) &
                                       (uint)((3.0 - fVar28 * auVar46._8_4_ * fVar28) * fVar28 * 0.5
                                             ));
              fVar21 = 0.0 - (fVar38 * fVar61 + fVar27 * fVar60 + fVar25 * fVar62);
              fVar26 = fVar48 * fVar48;
              fVar28 = fVar49 * fVar49;
              auVar24._8_4_ = fVar20 * fVar20;
              auVar24._4_4_ = auVar24._8_4_;
              auVar24._0_4_ = auVar24._8_4_;
              auVar24._12_4_ = auVar24._8_4_;
              auVar37._0_4_ = fVar28 + fVar26 + auVar24._8_4_;
              auVar37._4_4_ = fVar28 + fVar26 + auVar24._8_4_;
              auVar37._8_4_ = fVar28 + fVar26 + auVar24._8_4_;
              auVar37._12_4_ = fVar28 + fVar26 + auVar24._8_4_;
              auVar30 = rsqrtps(auVar24,auVar37);
              fVar26 = auVar30._0_4_;
              fVar28 = auVar30._4_4_;
              fVar60 = auVar30._8_4_;
              fVar48 = fVar48 * (float)(~-(uint)(auVar37._0_4_ <= 0.0) &
                                       (uint)((3.0 - fVar26 * auVar37._0_4_ * fVar26) * fVar26 * 0.5
                                             ));
              fVar49 = fVar49 * (float)(~-(uint)(auVar37._4_4_ <= 0.0) &
                                       (uint)((3.0 - fVar28 * auVar37._4_4_ * fVar28) * fVar28 * 0.5
                                             ));
              fVar20 = fVar20 * (float)(~-(uint)(auVar37._8_4_ <= 0.0) &
                                       (uint)((3.0 - fVar60 * auVar37._8_4_ * fVar60) * fVar60 * 0.5
                                             ));
              fVar26 = 0.0 - (fVar49 * fVar58 + fVar48 * fVar57 + fVar20 * fVar59);
              fVar28 = 0.0 - *(float *)(param_1 + 8);
              if ((fVar21 + fStack_164 * fVar38 + fStack_160 * fVar25 + local_168 * fVar27 < fVar28)
                 || (((fVar21 + fStack_154 * fVar38 + fStack_150 * fVar25 + local_158 * fVar27 <
                       fVar28 ||
                      (fVar26 + fStack_184 * fVar49 + fStack_180 * fVar20 + local_188 * fVar48 <
                       fVar28)) ||
                     (fVar26 + fStack_174 * fVar49 + fStack_170 * fVar20 + local_178 * fVar48 <
                      fVar28)))) {
                uVar10 = 7;
              }
              else if (param_6 == 0) {
                uVar10 = 0xffffffff;
              }
              else {
                uVar10 = FUN_143801e80(param_1);
              }
            }
          }
          else {
            uVar10 = 2;
          }
        }
        else {
          uVar10 = 5;
        }
      }
    }
    return uVar10;
  }
  return 0xc;
}



// FUNCTION 1437ffb80 FUN_1437ffb80 body=4621 status=ok
// SIG undefined FUN_1437ffb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1437ffb80(float *param_1,float *param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6,float param_7,undefined4 param_8,undefined4 param_9,
             undefined4 param_10,undefined4 *param_11)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  float fVar41;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar54;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar71;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar84;
  float fVar85;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined4 local_res8 [2];
  undefined1 local_288 [8];
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [8];
  float fStack_270;
  float fStack_26c;
  undefined1 local_268 [8];
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
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
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
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
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 local_158;
  undefined4 local_148;
  undefined4 local_138;
  undefined4 local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [176];
  
  lVar3 = *(longlong *)(param_4 + 0x18);
  fVar29 = *param_2;
  fVar37 = param_2[1];
  fVar41 = param_2[2];
  piVar14 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                 lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,param_7);
  lVar4 = *(longlong *)(param_5 + 0x18);
  piVar15 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar4 + 0x28),*(undefined4 *)(lVar4 + 0x30),
                                 lVar4 + 0xc0,lVar4 + 0xe0,lVar4 + 0x70,param_8);
  iVar1 = *piVar14;
  iVar2 = *(int *)(lVar3 + 0x40);
  if (iVar1 < iVar2) {
    pfVar17 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar17 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar28 = *pfVar17;
  fVar36 = pfVar17[1];
  fVar38 = pfVar17[2];
  iVar1 = piVar14[1];
  fVar91 = fVar36 * *(float *)(param_4 + 0x50) + fVar28 * *(float *)(param_4 + 0x40) +
           fVar38 * *(float *)(param_4 + 0x60) + *(float *)(param_4 + 0x70);
  fVar92 = fVar36 * *(float *)(param_4 + 0x54) + fVar28 * *(float *)(param_4 + 0x44) +
           fVar38 * *(float *)(param_4 + 100) + *(float *)(param_4 + 0x74);
  fVar93 = fVar36 * *(float *)(param_4 + 0x58) + fVar28 * *(float *)(param_4 + 0x48) +
           fVar38 * *(float *)(param_4 + 0x68) + *(float *)(param_4 + 0x78);
  local_258._4_4_ = fVar92;
  local_258._0_4_ = fVar91;
  fStack_250 = fVar93;
  fStack_24c = fVar36 * *(float *)(param_4 + 0x5c) + fVar28 * *(float *)(param_4 + 0x4c) +
               fVar38 * *(float *)(param_4 + 0x6c) + *(float *)(param_4 + 0x7c);
  if (iVar1 < iVar2) {
    pfVar17 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar17 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar28 = *pfVar17;
  fVar36 = pfVar17[1];
  fVar38 = pfVar17[2];
  iVar1 = *piVar15;
  iVar2 = *(int *)(lVar4 + 0x40);
  local_278._4_4_ =
       fVar36 * *(float *)(param_4 + 0x54) + fVar28 * *(float *)(param_4 + 0x44) +
       fVar38 * *(float *)(param_4 + 100) + *(float *)(param_4 + 0x74);
  local_278._0_4_ =
       fVar36 * *(float *)(param_4 + 0x50) + fVar28 * *(float *)(param_4 + 0x40) +
       fVar38 * *(float *)(param_4 + 0x60) + *(float *)(param_4 + 0x70);
  fStack_270 = fVar36 * *(float *)(param_4 + 0x58) + fVar28 * *(float *)(param_4 + 0x48) +
               fVar38 * *(float *)(param_4 + 0x68) + *(float *)(param_4 + 0x78);
  fStack_26c = fVar36 * *(float *)(param_4 + 0x5c) + fVar28 * *(float *)(param_4 + 0x4c) +
               fVar38 * *(float *)(param_4 + 0x6c) + *(float *)(param_4 + 0x7c);
  if (iVar1 < iVar2) {
    pfVar17 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 0x38));
  }
  else {
    pfVar17 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
  }
  fVar28 = *pfVar17;
  fVar36 = pfVar17[1];
  fVar38 = pfVar17[2];
  iVar1 = piVar15[1];
  fVar88 = fVar36 * *(float *)(param_5 + 0x50) + fVar28 * *(float *)(param_5 + 0x40) +
           fVar38 * *(float *)(param_5 + 0x60) + *(float *)(param_5 + 0x70);
  fVar89 = fVar36 * *(float *)(param_5 + 0x54) + fVar28 * *(float *)(param_5 + 0x44) +
           fVar38 * *(float *)(param_5 + 100) + *(float *)(param_5 + 0x74);
  fVar90 = fVar36 * *(float *)(param_5 + 0x58) + fVar28 * *(float *)(param_5 + 0x48) +
           fVar38 * *(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x78);
  local_288._4_4_ = fVar89;
  local_288._0_4_ = fVar88;
  fStack_280 = fVar90;
  fStack_27c = fVar36 * *(float *)(param_5 + 0x5c) + fVar28 * *(float *)(param_5 + 0x4c) +
               fVar38 * *(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x7c);
  if (iVar1 < iVar2) {
    pfVar17 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 0x38));
  }
  else {
    pfVar17 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar4 + 0xf0));
  }
  fVar28 = *pfVar17;
  fVar36 = pfVar17[1];
  fVar38 = pfVar17[2];
  auVar61._0_4_ =
       fVar36 * *(float *)(param_5 + 0x50) + fVar28 * *(float *)(param_5 + 0x40) +
       fVar38 * *(float *)(param_5 + 0x60) + *(float *)(param_5 + 0x70);
  auVar61._4_4_ =
       fVar36 * *(float *)(param_5 + 0x54) + fVar28 * *(float *)(param_5 + 0x44) +
       fVar38 * *(float *)(param_5 + 100) + *(float *)(param_5 + 0x74);
  auVar61._8_4_ =
       fVar36 * *(float *)(param_5 + 0x58) + fVar28 * *(float *)(param_5 + 0x48) +
       fVar38 * *(float *)(param_5 + 0x68) + *(float *)(param_5 + 0x78);
  auVar61._12_4_ =
       fVar36 * *(float *)(param_5 + 0x5c) + fVar28 * *(float *)(param_5 + 0x4c) +
       fVar38 * *(float *)(param_5 + 0x6c) + *(float *)(param_5 + 0x7c);
  _local_268 = auVar61;
  FUN_143801170(&local_218,local_258,local_278,local_288,local_268);
  local_208 = local_208 - local_218;
  fStack_204 = fStack_204 - fStack_214;
  fStack_200 = fStack_200 - fStack_210;
  local_1e8 = local_1e8 - local_1f8;
  fStack_1e4 = fStack_1e4 - fStack_1f4;
  fStack_1e0 = fStack_1e0 - fStack_1f0;
  fVar28 = local_208 * local_208;
  fVar36 = fStack_204 * fStack_204;
  fVar38 = fStack_200 * fStack_200;
  auVar56._0_4_ = fVar36 + fVar28 + fVar38;
  auVar56._4_4_ = fVar36 + fVar28 + fVar38;
  auVar56._8_4_ = fVar36 + fVar28 + fVar38;
  auVar56._12_4_ = fVar36 + fVar28 + fVar38;
  auVar42 = rsqrtps(auVar61,auVar56);
  fVar54 = auVar42._0_4_;
  fVar39 = auVar42._4_4_;
  fVar40 = auVar42._8_4_;
  fVar55 = auVar42._12_4_;
  auVar82._0_4_ = fVar54 * 0.5;
  auVar82._4_4_ = fVar39 * 0.5;
  auVar82._8_4_ = fVar40 * 0.5;
  auVar82._12_4_ = fVar55 * 0.5;
  fVar28 = local_1e8 * local_1e8;
  fVar36 = fStack_1e4 * fStack_1e4;
  fVar38 = fStack_1e0 * fStack_1e0;
  local_238 = (float)(~-(uint)(auVar56._0_4_ <= 0.0) &
                     (uint)((3.0 - fVar54 * auVar56._0_4_ * fVar54) * auVar82._0_4_)) * local_208;
  fStack_234 = (float)(~-(uint)(auVar56._4_4_ <= 0.0) &
                      (uint)((3.0 - fVar39 * auVar56._4_4_ * fVar39) * auVar82._4_4_)) * fStack_204;
  fStack_230 = (float)(~-(uint)(auVar56._8_4_ <= 0.0) &
                      (uint)((3.0 - fVar40 * auVar56._8_4_ * fVar40) * auVar82._8_4_)) * fStack_200;
  fStack_22c = (float)(~-(uint)(auVar56._12_4_ <= 0.0) &
                      (uint)((3.0 - fVar55 * auVar56._12_4_ * fVar55) * auVar82._12_4_)) *
               (fStack_1fc - fStack_20c);
  auVar57._0_4_ = fVar36 + fVar28 + fVar38;
  auVar57._4_4_ = fVar36 + fVar28 + fVar38;
  auVar57._8_4_ = fVar36 + fVar28 + fVar38;
  auVar57._12_4_ = fVar36 + fVar28 + fVar38;
  auVar42 = rsqrtps(auVar82,auVar57);
  fVar28 = auVar42._0_4_;
  fVar38 = auVar42._4_4_;
  fVar39 = auVar42._8_4_;
  fVar40 = auVar42._12_4_;
  fVar55 = local_1e8 * fVar29;
  fVar71 = fStack_1e4 * fVar37;
  auVar58._8_4_ = fStack_1e0 * fVar41;
  fVar36 = fVar29 * local_208;
  fVar54 = fVar37 * fStack_204;
  auVar43._8_4_ = fVar41 * fStack_200;
  local_228 = (float)(~-(uint)(auVar57._0_4_ <= 0.0) &
                     (uint)((3.0 - fVar28 * auVar57._0_4_ * fVar28) * fVar28 * 0.5)) * local_1e8;
  fStack_224 = (float)(~-(uint)(auVar57._4_4_ <= 0.0) &
                      (uint)((3.0 - fVar38 * auVar57._4_4_ * fVar38) * fVar38 * 0.5)) * fStack_1e4;
  fStack_220 = (float)(~-(uint)(auVar57._8_4_ <= 0.0) &
                      (uint)((3.0 - fVar39 * auVar57._8_4_ * fVar39) * fVar39 * 0.5)) * fStack_1e0;
  fStack_21c = (float)(~-(uint)(auVar57._12_4_ <= 0.0) &
                      (uint)((3.0 - fVar40 * auVar57._12_4_ * fVar40) * fVar40 * 0.5)) *
               (fStack_1dc - fStack_1ec);
  auVar43._4_4_ = auVar43._8_4_;
  auVar43._0_4_ = auVar43._8_4_;
  auVar43._12_4_ = auVar43._8_4_;
  auVar58._4_4_ = auVar58._8_4_;
  auVar58._0_4_ = auVar58._8_4_;
  auVar58._12_4_ = auVar58._8_4_;
  local_208 = (0.0 - (fVar54 + fVar36 + auVar43._8_4_)) * fVar29 + local_208;
  fStack_204 = (0.0 - (fVar54 + fVar36 + auVar43._8_4_)) * fVar37 + fStack_204;
  fStack_200 = (0.0 - (fVar54 + fVar36 + auVar43._8_4_)) * fVar41 + fStack_200;
  fVar28 = local_208 * local_208;
  fVar38 = fStack_204 * fStack_204;
  fVar39 = fStack_200 * fStack_200;
  local_1e8 = (0.0 - (fVar71 + fVar55 + auVar58._8_4_)) * fVar29 + local_1e8;
  fStack_1e4 = (0.0 - (fVar71 + fVar55 + auVar58._8_4_)) * fVar37 + fStack_1e4;
  fStack_1e0 = (0.0 - (fVar71 + fVar55 + auVar58._8_4_)) * fVar41 + fStack_1e0;
  fVar55 = fVar38 + fVar28 + fVar39;
  fVar71 = fVar38 + fVar28 + fVar39;
  fVar72 = fVar38 + fVar28 + fVar39;
  fVar36 = local_1e8 * local_1e8;
  fVar54 = fStack_1e4 * fStack_1e4;
  fVar40 = fStack_1e0 * fStack_1e0;
  auVar42._4_4_ = fVar71;
  auVar42._0_4_ = fVar55;
  auVar42._8_4_ = fVar72;
  auVar42._12_4_ = fVar38 + fVar28 + fVar39;
  auVar42 = rsqrtps(auVar43,auVar42);
  fVar28 = auVar42._0_4_;
  fVar38 = auVar42._4_4_;
  fVar39 = auVar42._8_4_;
  auVar74._0_4_ = fVar54 + fVar36 + fVar40;
  auVar74._4_4_ = fVar54 + fVar36 + fVar40;
  auVar74._8_4_ = fVar54 + fVar36 + fVar40;
  auVar74._12_4_ = fVar54 + fVar36 + fVar40;
  auVar42 = rsqrtps(auVar58,auVar74);
  fVar36 = auVar42._0_4_;
  fVar54 = auVar42._4_4_;
  fVar40 = auVar42._8_4_;
  fVar28 = 0.0 - ((float)(~-(uint)(fVar71 <= 0.0) &
                         (uint)((3.0 - fVar38 * fVar71 * fVar38) * fVar38 * 0.5)) * fStack_204 *
                  (float)(~-(uint)(auVar74._4_4_ <= 0.0) &
                         (uint)((3.0 - auVar74._4_4_ * fVar54 * fVar54) * fVar54 * 0.5)) *
                  fStack_1e4 +
                  (float)(~-(uint)(fVar55 <= 0.0) &
                         (uint)((3.0 - fVar28 * fVar55 * fVar28) * fVar28 * 0.5)) * local_208 *
                  (float)(~-(uint)(auVar74._0_4_ <= 0.0) &
                         (uint)((3.0 - auVar74._0_4_ * fVar36 * fVar36) * fVar36 * 0.5)) * local_1e8
                 + (float)(~-(uint)(fVar72 <= 0.0) &
                          (uint)((3.0 - fVar39 * fVar72 * fVar39) * fVar39 * 0.5)) * fStack_200 *
                   (float)(~-(uint)(auVar74._8_4_ <= 0.0) &
                          (uint)((3.0 - auVar74._8_4_ * fVar40 * fVar40) * fVar40 * 0.5)) *
                   fStack_1e0);
  if (fVar28 < param_1[4]) {
    return 0;
  }
  fVar71 = fVar37 * (local_238 - local_228) - (fStack_234 - fStack_224) * fVar29;
  fVar72 = fVar41 * (fStack_234 - fStack_224) - (fStack_230 - fStack_220) * fVar37;
  fVar73 = fVar29 * (fStack_230 - fStack_220) - (local_238 - local_228) * fVar41;
  fVar36 = fVar72 * fVar72;
  fVar38 = fVar73 * fVar73;
  auVar30._8_4_ = fVar71 * fVar71;
  auVar30._4_4_ = auVar30._8_4_;
  auVar30._0_4_ = auVar30._8_4_;
  auVar30._12_4_ = auVar30._8_4_;
  auVar59._0_4_ = fVar38 + fVar36 + auVar30._8_4_;
  auVar59._4_4_ = fVar38 + fVar36 + auVar30._8_4_;
  auVar59._8_4_ = fVar38 + fVar36 + auVar30._8_4_;
  auVar59._12_4_ = fVar38 + fVar36 + auVar30._8_4_;
  auVar42 = rsqrtps(auVar30,auVar59);
  fVar36 = auVar42._0_4_;
  fVar38 = auVar42._4_4_;
  fVar54 = auVar42._8_4_;
  auVar60._0_4_ = auVar59._0_4_ * fVar36 * fVar36;
  auVar60._4_4_ = auVar59._4_4_ * fVar38 * fVar38;
  auVar60._8_4_ = auVar59._8_4_ * fVar54 * fVar54;
  auVar60._12_4_ = auVar59._12_4_ * auVar42._12_4_ * auVar42._12_4_;
  fVar72 = fVar72 * (float)(~-(uint)(auVar59._0_4_ <= 0.0) &
                           (uint)((3.0 - auVar60._0_4_) * fVar36 * 0.5));
  fVar73 = fVar73 * (float)(~-(uint)(auVar59._4_4_ <= 0.0) &
                           (uint)((3.0 - auVar60._4_4_) * fVar38 * 0.5));
  fVar71 = fVar71 * (float)(~-(uint)(auVar59._8_4_ <= 0.0) &
                           (uint)((3.0 - auVar60._8_4_) * fVar54 * 0.5));
  fVar36 = fVar72 * local_238;
  fVar38 = fVar73 * fStack_234;
  fVar54 = fVar71 * fStack_230;
  fVar39 = fVar72 * local_228;
  fVar40 = fVar73 * fStack_224;
  fVar55 = fVar71 * fStack_220;
  fVar80 = (0.0 - (fVar38 + fVar36 + fVar54)) * fVar72 + local_238;
  fVar84 = (0.0 - (fVar38 + fVar36 + fVar54)) * fVar73 + fStack_234;
  fVar85 = (0.0 - (fVar38 + fVar36 + fVar54)) * fVar71 + fStack_230;
  fVar36 = fVar80 * fVar80;
  fVar38 = fVar84 * fVar84;
  fVar54 = fVar85 * fVar85;
  fVar72 = (0.0 - (fVar40 + fVar39 + fVar55)) * fVar72 + local_228;
  fVar73 = (0.0 - (fVar40 + fVar39 + fVar55)) * fVar73 + fStack_224;
  fVar71 = (0.0 - (fVar40 + fVar39 + fVar55)) * fVar71 + fStack_220;
  auVar75._0_4_ = fVar38 + fVar36 + fVar54;
  auVar75._4_4_ = fVar38 + fVar36 + fVar54;
  auVar75._8_4_ = fVar38 + fVar36 + fVar54;
  auVar75._12_4_ = fVar38 + fVar36 + fVar54;
  fVar36 = fVar72 * fVar72;
  fVar38 = fVar73 * fVar73;
  auVar31._8_4_ = fVar71 * fVar71;
  auVar61 = rsqrtps(auVar60,auVar75);
  auVar31._4_4_ = auVar31._8_4_;
  auVar31._0_4_ = auVar31._8_4_;
  auVar31._12_4_ = auVar31._8_4_;
  auVar44._0_4_ = fVar38 + fVar36 + auVar31._8_4_;
  auVar44._4_4_ = fVar38 + fVar36 + auVar31._8_4_;
  auVar44._8_4_ = fVar38 + fVar36 + auVar31._8_4_;
  auVar44._12_4_ = fVar38 + fVar36 + auVar31._8_4_;
  auVar42 = rsqrtps(auVar31,auVar44);
  fVar36 = auVar42._0_4_;
  fVar38 = auVar42._4_4_;
  fVar54 = auVar42._8_4_;
  fVar39 = auVar61._0_4_;
  fVar40 = auVar61._4_4_;
  fVar55 = auVar61._8_4_;
  if (-((float)(~-(uint)(auVar44._4_4_ <= 0.0) &
               (uint)((3.0 - auVar44._4_4_ * fVar38 * fVar38) * fVar38 * 0.5)) * fVar73 *
        (float)(~-(uint)(auVar75._4_4_ <= 0.0) &
               (uint)((3.0 - auVar75._4_4_ * fVar40 * fVar40) * fVar40 * 0.5)) * fVar84 +
        (float)(~-(uint)(auVar44._0_4_ <= 0.0) &
               (uint)((3.0 - auVar44._0_4_ * fVar36 * fVar36) * fVar36 * 0.5)) * fVar72 *
        (float)(~-(uint)(auVar75._0_4_ <= 0.0) &
               (uint)((3.0 - auVar75._0_4_ * fVar39 * fVar39) * fVar39 * 0.5)) * fVar80 +
       (float)(~-(uint)(auVar44._8_4_ <= 0.0) &
              (uint)((3.0 - auVar44._8_4_ * fVar54 * fVar54) * fVar54 * 0.5)) * fVar71 *
       (float)(~-(uint)(auVar75._8_4_ <= 0.0) &
              (uint)((3.0 - auVar75._8_4_ * fVar55 * fVar55) * fVar55 * 0.5)) * fVar85) < param_1[5]
     ) {
    return 1;
  }
  uVar16 = FUN_1438011f0(&local_218,param_1,param_2,&local_238,&local_228,local_288,local_268,
                         local_258,local_278,local_res8);
  puVar10 = param_11;
  uVar9 = param_9;
  if ((int)uVar16 != -1) {
    return uVar16;
  }
  uVar11 = local_278._0_4_;
  uVar12 = local_278._4_4_;
  fVar36 = fStack_270;
  fVar38 = fStack_26c;
  param_11[5] = fVar28;
  param_11[6] = local_res8[0];
  auVar22._0_4_ = (float)local_268._0_4_ - (float)local_288._0_4_;
  auVar22._4_4_ = (float)local_268._4_4_ - (float)local_288._4_4_;
  auVar22._8_4_ = fStack_260 - fStack_280;
  auVar22._12_4_ = fStack_25c - fStack_27c;
  *param_11 = param_7;
  param_11[1] = param_8;
  param_11[4] = 0xbf800000;
  param_11[2] = param_9;
  param_11[3] = param_10;
  *(undefined1 *)(param_11 + 7) = 1;
  auVar8._4_4_ = fRam00000001467f06f4;
  auVar8._0_4_ = DAT_1467f06f0;
  auVar8._8_4_ = fRam00000001467f06f8;
  auVar8._12_4_ = fRam00000001467f06fc;
  auVar61 = divps(auVar8,auVar22);
  auVar23._0_4_ = (float)local_278._0_4_ - (float)local_258._0_4_;
  auVar23._4_4_ = (float)local_278._4_4_ - (float)local_258._4_4_;
  auVar23._8_4_ = fStack_270 - fStack_250;
  auVar23._12_4_ = fStack_26c - fStack_24c;
  auVar42 = divps(auVar8,auVar23);
  param_7 = 0.001;
  if (0.001 <= ABS((float)local_288._0_4_ - (float)local_258._0_4_)) {
    if ((float)local_258._0_4_ < (float)local_288._0_4_) {
      _local_278 = ZEXT816(0);
      fVar28 = auVar42._0_4_ * ((float)local_288._0_4_ - (float)local_258._0_4_);
      fVar54 = auVar42._4_4_ * ((float)local_288._4_4_ - (float)local_258._4_4_);
      fVar39 = auVar42._8_4_ * (fStack_280 - fStack_250);
      fVar40 = auVar42._12_4_ * (fStack_27c - fStack_24c);
      goto LAB_14380028c;
    }
    local_278._4_4_ = ((float)local_258._4_4_ - (float)local_288._4_4_) * auVar61._4_4_;
    local_278._0_4_ = ((float)local_258._0_4_ - (float)local_288._0_4_) * auVar61._0_4_;
    fStack_270 = (fStack_250 - fStack_280) * auVar61._8_4_;
    fStack_26c = (fStack_24c - fStack_27c) * auVar61._12_4_;
  }
  else {
    _local_278 = ZEXT816(0);
  }
  fVar28 = 0.0;
  fVar54 = 0.0;
  fVar39 = 0.0;
  fVar40 = 0.0;
LAB_14380028c:
  auVar45 = auVar8;
  if (0.001 <= ABS((float)local_268._0_4_ - (float)uVar11)) {
    if ((float)local_268._0_4_ <= (float)uVar11) {
      auVar45._0_4_ = ((float)local_268._0_4_ - (float)local_258._0_4_) * auVar42._0_4_;
      auVar45._4_4_ = ((float)local_268._4_4_ - (float)local_258._4_4_) * auVar42._4_4_;
      auVar45._8_4_ = (fStack_260 - fStack_250) * auVar42._8_4_;
      auVar45._12_4_ = (fStack_25c - fStack_24c) * auVar42._12_4_;
    }
    else {
      local_258._4_4_ = ((float)uVar12 - (float)local_288._4_4_) * auVar61._4_4_;
      local_258._0_4_ = ((float)uVar11 - (float)local_288._0_4_) * auVar61._0_4_;
      fStack_250 = (fVar36 - fStack_280) * auVar61._8_4_;
      fStack_24c = (fVar38 - fStack_27c) * auVar61._12_4_;
      auVar8 = _local_258;
    }
  }
  _local_258 = auVar8;
  local_268._4_4_ = fRam00000001467f06f4 - fVar54;
  local_268._0_4_ = DAT_1467f06f0 - fVar28;
  fStack_260 = fRam00000001467f06f8 - fVar39;
  fStack_25c = fRam00000001467f06fc - fVar40;
  local_288._4_4_ = fRam00000001467f06f4 - auVar45._4_4_;
  local_288._0_4_ = DAT_1467f06f0 - auVar45._0_4_;
  fStack_280 = fRam00000001467f06f8 - auVar45._8_4_;
  fStack_27c = fRam00000001467f06fc - auVar45._12_4_;
  FUN_143802b30(&local_218,local_278,local_258,local_288,local_268);
  cVar13 = FUN_143801800(&local_218);
  if (cVar13 != '\0') {
    return 5;
  }
  FUN_1438025e0(&local_218,&local_248,local_268);
  if (*param_1 <
      ABS((float)local_268._4_4_ * param_2[1] + (float)local_268._0_4_ * *param_2 +
          fStack_260 * param_2[2])) {
    return 6;
  }
  if ((param_6 != 0) && (uVar16 = FUN_143801400(&local_218,param_1,param_2,0), (int)uVar16 != -1)) {
    return uVar16;
  }
  FUN_143802ae0(&local_218,param_2);
  fVar28 = param_1[1] * param_1[1];
  param_7 = fVar28;
  FUN_143802870(&local_218,local_268);
  if (fVar28 < (float)local_268._0_4_) {
    return 2;
  }
  if ((param_6 != 0) && (uVar16 = FUN_143801400(&local_218,param_1,param_2,1), (int)uVar16 != -1)) {
    return uVar16;
  }
  puVar10[8] = local_158;
  puVar10[9] = local_148;
  puVar10[10] = local_138;
  puVar10[0xb] = local_128;
  FUN_143802ae0(&local_218,param_2);
  local_248 = local_178 - local_168;
  fStack_244 = fStack_174 - fStack_164;
  fStack_240 = fStack_170 - fStack_160;
  fStack_23c = fStack_16c - fStack_15c;
  fVar28 = local_248 * local_248;
  fVar36 = fStack_244 * fStack_244;
  fVar38 = fStack_240 * fStack_240;
  fVar40 = local_178 - ((local_188 - local_198) * _DAT_1467f07e0 + local_198);
  fVar55 = fStack_174 - ((fStack_184 - fStack_194) * fRam00000001467f07e4 + fStack_194);
  fVar71 = fStack_170 - ((fStack_180 - fStack_190) * fRam00000001467f07e8 + fStack_190);
  auVar46._0_4_ = fVar36 + fVar28 + fVar38;
  auVar46._4_4_ = fVar36 + fVar28 + fVar38;
  auVar46._8_4_ = fVar36 + fVar28 + fVar38;
  auVar46._12_4_ = fVar36 + fVar28 + fVar38;
  fVar28 = fVar40 * local_248;
  fVar36 = fVar55 * fStack_244;
  auVar32._8_4_ = fVar71 * fStack_240;
  auVar32._4_4_ = auVar32._8_4_;
  auVar32._0_4_ = auVar32._8_4_;
  auVar32._12_4_ = auVar32._8_4_;
  auVar42 = rcpps(auVar32,auVar46);
  fVar38 = (2.0 - auVar42._0_4_ * auVar46._0_4_) * auVar42._0_4_ * (fVar36 + fVar28 + auVar32._8_4_)
  ;
  fVar54 = (2.0 - auVar42._4_4_ * auVar46._4_4_) * auVar42._4_4_ * (fVar36 + fVar28 + auVar32._8_4_)
  ;
  fVar39 = (2.0 - auVar42._8_4_ * auVar46._8_4_) * auVar42._8_4_ * (fVar36 + fVar28 + auVar32._8_4_)
  ;
  fVar28 = (2.0 - auVar42._12_4_ * auVar46._12_4_) * auVar42._12_4_ *
           (fVar36 + fVar28 + auVar32._8_4_);
  uVar18 = -(uint)(fVar38 < DAT_1467f06f0);
  uVar19 = -(uint)(fVar54 < fRam00000001467f06f4);
  uVar20 = -(uint)(fVar39 < fRam00000001467f06f8);
  uVar21 = -(uint)(fVar28 < fRam00000001467f06fc);
  auVar47._0_4_ = (uint)fVar38 & uVar18;
  auVar47._4_4_ = (uint)fVar54 & uVar19;
  auVar47._8_4_ = (uint)fVar39 & uVar20;
  auVar47._12_4_ = (uint)fVar28 & uVar21;
  auVar24._0_4_ = ~uVar18 & (uint)DAT_1467f06f0;
  auVar24._4_4_ = ~uVar19 & (uint)fRam00000001467f06f4;
  auVar24._8_4_ = ~uVar20 & (uint)fRam00000001467f06f8;
  auVar24._12_4_ = ~uVar21 & (uint)fRam00000001467f06fc;
  auVar42 = maxps(ZEXT816(0),auVar47 | auVar24);
  fVar40 = fVar40 - auVar42._0_4_ * local_248;
  fVar55 = fVar55 - auVar42._4_4_ * fStack_244;
  fVar71 = fVar71 - auVar42._8_4_ * fStack_240;
  fVar40 = fVar40 * fVar40;
  fVar55 = fVar55 * fVar55;
  fVar71 = fVar71 * fVar71;
  auVar62._0_4_ = fVar55 + fVar40 + fVar71;
  auVar62._4_4_ = fVar55 + fVar40 + fVar71;
  auVar62._8_4_ = fVar55 + fVar40 + fVar71;
  auVar62._12_4_ = fVar55 + fVar40 + fVar71;
  auVar42 = rsqrtps(auVar47 | auVar24,auVar62);
  fVar39 = auVar42._0_4_;
  fVar40 = auVar42._4_4_;
  fVar55 = auVar42._8_4_;
  fVar71 = auVar42._12_4_;
  fVar54 = local_198 - ((local_168 - local_178) * _DAT_1467f07e0 + local_178);
  fVar72 = fStack_194 - ((fStack_164 - fStack_174) * fRam00000001467f07e4 + fStack_174);
  fVar73 = fStack_190 - ((fStack_160 - fStack_170) * fRam00000001467f07e8 + fStack_170);
  local_268._0_4_ = local_198 - local_188;
  local_268._4_4_ = fStack_194 - fStack_184;
  fStack_260 = fStack_190 - fStack_180;
  fStack_25c = fStack_18c - fStack_17c;
  fVar28 = (float)local_268._0_4_ * (float)local_268._0_4_;
  fVar36 = (float)local_268._4_4_ * (float)local_268._4_4_;
  fVar38 = fStack_260 * fStack_260;
  auVar63._0_4_ = fVar36 + fVar28 + fVar38;
  auVar63._4_4_ = fVar36 + fVar28 + fVar38;
  auVar63._8_4_ = fVar36 + fVar28 + fVar38;
  auVar63._12_4_ = fVar36 + fVar28 + fVar38;
  fVar28 = fVar54 * (float)local_268._0_4_;
  fVar36 = fVar72 * (float)local_268._4_4_;
  auVar33._8_4_ = fVar73 * fStack_260;
  auVar33._4_4_ = auVar33._8_4_;
  auVar33._0_4_ = auVar33._8_4_;
  auVar33._12_4_ = auVar33._8_4_;
  auVar61 = rcpps(auVar33,auVar63);
  fVar38 = (2.0 - auVar61._0_4_ * auVar63._0_4_) * auVar61._0_4_ * (fVar36 + fVar28 + auVar33._8_4_)
  ;
  fVar80 = (2.0 - auVar61._4_4_ * auVar63._4_4_) * auVar61._4_4_ * (fVar36 + fVar28 + auVar33._8_4_)
  ;
  fVar84 = (2.0 - auVar61._8_4_ * auVar63._8_4_) * auVar61._8_4_ * (fVar36 + fVar28 + auVar33._8_4_)
  ;
  fVar28 = (2.0 - auVar61._12_4_ * auVar63._12_4_) * auVar61._12_4_ *
           (fVar36 + fVar28 + auVar33._8_4_);
  uVar18 = -(uint)(fVar38 < DAT_1467f06f0);
  uVar19 = -(uint)(fVar80 < fRam00000001467f06f4);
  uVar20 = -(uint)(fVar84 < fRam00000001467f06f8);
  uVar21 = -(uint)(fVar28 < fRam00000001467f06fc);
  auVar87._0_4_ = (uint)fVar38 & uVar18;
  auVar87._4_4_ = (uint)fVar80 & uVar19;
  auVar87._8_4_ = (uint)fVar84 & uVar20;
  auVar87._12_4_ = (uint)fVar28 & uVar21;
  auVar25._0_4_ = ~uVar18 & (uint)DAT_1467f06f0;
  auVar25._4_4_ = ~uVar19 & (uint)fRam00000001467f06f4;
  auVar25._8_4_ = ~uVar20 & (uint)fRam00000001467f06f8;
  auVar25._12_4_ = ~uVar21 & (uint)fRam00000001467f06fc;
  auVar42 = maxps(ZEXT816(0),auVar87 | auVar25);
  fVar54 = fVar54 - auVar42._0_4_ * (float)local_268._0_4_;
  fVar72 = fVar72 - auVar42._4_4_ * (float)local_268._4_4_;
  fVar73 = fVar73 - auVar42._8_4_ * fStack_260;
  fVar54 = fVar54 * fVar54;
  fVar72 = fVar72 * fVar72;
  fVar73 = fVar73 * fVar73;
  auVar64._0_4_ = fVar72 + fVar54 + fVar73;
  auVar64._4_4_ = fVar72 + fVar54 + fVar73;
  auVar64._8_4_ = fVar72 + fVar54 + fVar73;
  auVar64._12_4_ = fVar72 + fVar54 + fVar73;
  auVar42 = rsqrtps(auVar61,auVar64);
  fVar28 = auVar42._0_4_;
  fVar36 = auVar42._4_4_;
  fVar38 = auVar42._8_4_;
  fVar54 = auVar42._12_4_;
  fVar28 = ((float)(~-(uint)(auVar64._0_4_ <= 0.0) &
                   (uint)((3.0 - fVar28 * auVar64._0_4_ * fVar28) * fVar28 * 0.5 * auVar64._0_4_)) +
           (float)(~-(uint)(auVar62._0_4_ <= 0.0) &
                  (uint)((3.0 - fVar39 * auVar62._0_4_ * fVar39) * fVar39 * 0.5 * auVar62._0_4_))) *
           _DAT_1467f07e0;
  fVar36 = ((float)(~-(uint)(auVar64._4_4_ <= 0.0) &
                   (uint)((3.0 - fVar36 * auVar64._4_4_ * fVar36) * fVar36 * 0.5 * auVar64._4_4_)) +
           (float)(~-(uint)(auVar62._4_4_ <= 0.0) &
                  (uint)((3.0 - fVar40 * auVar62._4_4_ * fVar40) * fVar40 * 0.5 * auVar62._4_4_))) *
           fRam00000001467f07e4;
  fVar38 = ((float)(~-(uint)(auVar64._8_4_ <= 0.0) &
                   (uint)((3.0 - fVar38 * auVar64._8_4_ * fVar38) * fVar38 * 0.5 * auVar64._8_4_)) +
           (float)(~-(uint)(auVar62._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar55 * auVar62._8_4_ * fVar55) * fVar55 * 0.5 * auVar62._8_4_))) *
           fRam00000001467f07e8;
  fVar54 = ((float)(~-(uint)(auVar64._12_4_ <= 0.0) &
                   (uint)((3.0 - fVar54 * auVar64._12_4_ * fVar54) * fVar54 * 0.5 * auVar64._12_4_))
           + (float)(~-(uint)(auVar62._12_4_ <= 0.0) &
                    (uint)((3.0 - fVar71 * auVar62._12_4_ * fVar71) * fVar71 * 0.5 * auVar62._12_4_)
                    )) * fRam00000001467f07ec;
  fVar39 = fVar37 * local_238 - fStack_234 * fVar29;
  fVar40 = fVar41 * fStack_234 - fStack_230 * fVar37;
  fVar55 = fVar29 * fStack_230 - local_238 * fVar41;
  auVar48._0_4_ = fVar28 * fVar28;
  auVar48._4_4_ = fVar36 * fVar36;
  auVar48._8_4_ = fVar38 * fVar38;
  auVar48._12_4_ = fVar54 * fVar54;
  fVar36 = fVar37 * local_228 - fStack_224 * fVar29;
  fVar38 = fVar41 * fStack_224 - fStack_220 * fVar37;
  fVar54 = fVar29 * fStack_220 - local_228 * fVar41;
  fVar29 = fVar40 * fVar40;
  fVar37 = fVar55 * fVar55;
  fVar41 = fVar39 * fVar39;
  puVar10[4] = auVar48._0_4_;
  auVar65._0_4_ = fVar37 + fVar29 + fVar41;
  auVar65._4_4_ = fVar37 + fVar29 + fVar41;
  auVar65._8_4_ = fVar37 + fVar29 + fVar41;
  auVar65._12_4_ = fVar37 + fVar29 + fVar41;
  auVar42 = rsqrtps(auVar48,auVar65);
  fVar29 = auVar42._0_4_;
  fVar37 = auVar42._4_4_;
  fVar41 = auVar42._8_4_;
  fVar40 = fVar40 * (float)(~-(uint)(auVar65._0_4_ <= 0.0) &
                           (uint)((3.0 - fVar29 * auVar65._0_4_ * fVar29) * fVar29 * 0.5));
  fVar55 = fVar55 * (float)(~-(uint)(auVar65._4_4_ <= 0.0) &
                           (uint)((3.0 - fVar37 * auVar65._4_4_ * fVar37) * fVar37 * 0.5));
  fVar39 = fVar39 * (float)(~-(uint)(auVar65._8_4_ <= 0.0) &
                           (uint)((3.0 - fVar41 * auVar65._8_4_ * fVar41) * fVar41 * 0.5));
  fVar29 = 0.0 - (fVar55 * fVar92 + fVar40 * fVar91 + fVar39 * fVar93);
  fVar37 = fVar38 * fVar38;
  fVar41 = fVar54 * fVar54;
  auVar34._8_4_ = fVar36 * fVar36;
  local_278._4_4_ = fVar55;
  local_278._0_4_ = fVar40;
  fStack_270 = fVar39;
  fStack_26c = fVar29;
  auVar34._4_4_ = auVar34._8_4_;
  auVar34._0_4_ = auVar34._8_4_;
  auVar34._12_4_ = auVar34._8_4_;
  auVar49._0_4_ = fVar41 + fVar37 + auVar34._8_4_;
  auVar49._4_4_ = fVar41 + fVar37 + auVar34._8_4_;
  auVar49._8_4_ = fVar41 + fVar37 + auVar34._8_4_;
  auVar49._12_4_ = fVar41 + fVar37 + auVar34._8_4_;
  auVar42 = rsqrtps(auVar34,auVar49);
  fVar37 = auVar42._0_4_;
  fVar41 = auVar42._4_4_;
  fVar28 = auVar42._8_4_;
  fVar38 = fVar38 * (float)(~-(uint)(auVar49._0_4_ <= 0.0) &
                           (uint)((3.0 - fVar37 * auVar49._0_4_ * fVar37) * fVar37 * 0.5));
  fVar54 = fVar54 * (float)(~-(uint)(auVar49._4_4_ <= 0.0) &
                           (uint)((3.0 - fVar41 * auVar49._4_4_ * fVar41) * fVar41 * 0.5));
  fVar36 = fVar36 * (float)(~-(uint)(auVar49._8_4_ <= 0.0) &
                           (uint)((3.0 - fVar28 * auVar49._8_4_ * fVar28) * fVar28 * 0.5));
  fVar37 = 0.0 - (fVar54 * fVar89 + fVar38 * fVar88 + fVar36 * fVar90);
  local_258._4_4_ = fVar54;
  local_258._0_4_ = fVar38;
  fStack_250 = fVar36;
  fStack_24c = fVar37;
  fVar41 = 0.0 - param_1[2];
  if ((((fVar29 + fStack_1b4 * fVar55 + fStack_1b0 * fVar39 + local_1b8 * fVar40 < fVar41) ||
       (fVar29 + fStack_1a4 * fVar55 + fStack_1a0 * fVar39 + local_1a8 * fVar40 < fVar41)) ||
      (fVar37 + fStack_1d4 * fVar54 + fStack_1d0 * fVar36 + local_1d8 * fVar38 < fVar41)) ||
     (fVar37 + fStack_1c4 * fVar54 + fStack_1c0 * fVar36 + local_1c8 * fVar38 < fVar41)) {
    return 7;
  }
  fVar41 = param_1[3];
  FUN_143800fa0(local_288,param_5,param_10,local_278,0);
  if (fVar41 <= (float)local_288._0_4_) {
    FUN_143800fa0(local_288,param_4,uVar9,local_258,0);
    if (fVar41 <= (float)local_288._0_4_) {
      if ((param_6 == 0) && (fVar41 <= 0.0)) {
        return 0xffffffff;
      }
      auVar81._0_8_ = CONCAT44(fVar55,fVar40) ^ 0x8000000080000000;
      auVar81._8_4_ = -fVar39;
      auVar81._12_4_ = -fVar29;
      local_258._4_4_ = -fVar54;
      local_258._0_4_ = -fVar38;
      fStack_250 = -fVar36;
      fStack_24c = -fVar37;
      _local_278 = auVar81;
      FUN_143800d90(local_118,param_4,uVar9,local_278,local_288);
      FUN_143800d90(local_108,param_5,param_10,local_258,local_278);
      if (0.0 < local_118._0_4_) {
        if (0.0 < local_108._0_4_) {
          if (*(char *)(param_1 + 0xd) == '\0') {
            _local_288 = local_118;
          }
          else {
            FUN_143802830(local_288,param_2,local_288);
            FUN_143802830(local_278);
            fVar29 = (float)local_268._0_4_ * (float)local_268._0_4_;
            fVar37 = (float)local_268._4_4_ * (float)local_268._4_4_;
            fVar41 = fStack_260 * fStack_260;
            auVar66._0_4_ = fVar37 + fVar29 + fVar41;
            auVar66._4_4_ = fVar37 + fVar29 + fVar41;
            auVar66._8_4_ = fVar37 + fVar29 + fVar41;
            auVar66._12_4_ = fVar37 + fVar29 + fVar41;
            fVar29 = (local_198 - (float)local_288._0_4_) * (float)local_268._0_4_;
            fVar37 = (fStack_194 - (float)local_288._4_4_) * (float)local_268._4_4_;
            fVar41 = (fStack_190 - fStack_280) * fStack_260;
            auVar26._4_4_ = fVar29;
            auVar26._0_4_ = fVar29;
            auVar26._8_4_ = fVar29;
            auVar26._12_4_ = fVar29;
            auVar42 = rcpps(auVar26,auVar66);
            auVar50._0_4_ = fVar37 + fVar29 + fVar41;
            auVar50._4_4_ = fVar37 + fVar29 + fVar41;
            auVar50._8_4_ = fVar37 + fVar29 + fVar41;
            auVar50._12_4_ = fVar37 + fVar29 + fVar41;
            fVar29 = (float)local_268._0_4_ * (float)local_268._0_4_;
            fVar37 = (float)local_268._4_4_ * (float)local_268._4_4_;
            auVar76._8_4_ = fStack_260 * fStack_260;
            fVar41 = ((local_198 - (float)local_288._0_4_) -
                     (2.0 - auVar66._0_4_ * auVar42._0_4_) * auVar42._0_4_ * auVar50._0_4_ *
                     (float)local_268._0_4_) + (float)local_288._0_4_;
            fVar28 = ((fStack_194 - (float)local_288._4_4_) -
                     (2.0 - auVar66._4_4_ * auVar42._4_4_) * auVar42._4_4_ * auVar50._4_4_ *
                     (float)local_268._4_4_) + (float)local_288._4_4_;
            fStack_280 = ((fStack_190 - fStack_280) -
                         (2.0 - auVar66._8_4_ * auVar42._8_4_) * auVar42._8_4_ * auVar50._8_4_ *
                         fStack_260) + fStack_280;
            local_188 = local_188 - fVar41;
            fStack_184 = fStack_184 - fVar28;
            fStack_180 = fStack_180 - fStack_280;
            auVar76._4_4_ = auVar76._8_4_;
            auVar76._0_4_ = auVar76._8_4_;
            auVar76._12_4_ = auVar76._8_4_;
            local_198 = local_198 - fVar41;
            fStack_194 = fStack_194 - fVar28;
            fStack_190 = fStack_190 - fStack_280;
            local_188 = local_188 * local_188;
            fStack_184 = fStack_184 * fStack_184;
            fStack_180 = fStack_180 * fStack_180;
            local_198 = local_198 * local_198;
            fStack_194 = fStack_194 * fStack_194;
            fStack_190 = fStack_190 * fStack_190;
            auVar86._0_4_ = fVar37 + fVar29 + auVar76._8_4_;
            auVar86._4_4_ = fVar37 + fVar29 + auVar76._8_4_;
            auVar86._8_4_ = fVar37 + fVar29 + auVar76._8_4_;
            auVar86._12_4_ = fVar37 + fVar29 + auVar76._8_4_;
            auVar82 = rsqrtps(auVar81,auVar86);
            auVar78._0_4_ = fStack_194 + local_198 + fStack_190;
            auVar78._4_4_ = fStack_194 + local_198 + fStack_190;
            auVar78._8_4_ = fStack_194 + local_198 + fStack_190;
            auVar78._12_4_ = fStack_194 + local_198 + fStack_190;
            auVar67._0_4_ = fStack_184 + local_188 + fStack_180;
            auVar67._4_4_ = fStack_184 + local_188 + fStack_180;
            auVar67._8_4_ = fStack_184 + local_188 + fStack_180;
            auVar67._12_4_ = fStack_184 + local_188 + fStack_180;
            auVar61 = rsqrtps(auVar76,auVar78);
            auVar42 = rsqrtps(auVar50,auVar67);
            fVar29 = auVar42._0_4_;
            fVar37 = auVar42._4_4_;
            fVar41 = auVar42._8_4_;
            fVar28 = auVar42._12_4_;
            fVar36 = auVar61._0_4_;
            fVar38 = auVar61._4_4_;
            fVar91 = auVar61._8_4_;
            fVar92 = auVar61._12_4_;
            fVar93 = auVar82._0_4_;
            fVar88 = auVar82._4_4_;
            fVar89 = auVar82._8_4_;
            fVar90 = auVar82._12_4_;
            auVar83._0_4_ = fVar93 * 0.5;
            auVar83._4_4_ = fVar88 * 0.5;
            auVar83._8_4_ = fVar89 * 0.5;
            auVar83._12_4_ = fVar90 * 0.5;
            auVar68._0_4_ =
                 ~-(uint)(auVar78._0_4_ <= 0.0) &
                 (uint)((3.0 - auVar78._0_4_ * fVar36 * fVar36) * fVar36 * 0.5 * auVar78._0_4_);
            auVar68._4_4_ =
                 ~-(uint)(auVar78._4_4_ <= 0.0) &
                 (uint)((3.0 - auVar78._4_4_ * fVar38 * fVar38) * fVar38 * 0.5 * auVar78._4_4_);
            auVar68._8_4_ =
                 ~-(uint)(auVar78._8_4_ <= 0.0) &
                 (uint)((3.0 - auVar78._8_4_ * fVar91 * fVar91) * fVar91 * 0.5 * auVar78._8_4_);
            auVar68._12_4_ =
                 ~-(uint)(auVar78._12_4_ <= 0.0) &
                 (uint)((3.0 - auVar78._12_4_ * fVar92 * fVar92) * fVar92 * 0.5 * auVar78._12_4_);
            auVar5._4_4_ = ~-(uint)(auVar67._4_4_ <= 0.0) &
                           (uint)((3.0 - auVar67._4_4_ * fVar37 * fVar37) * fVar37 * 0.5 *
                                 auVar67._4_4_);
            auVar5._0_4_ = ~-(uint)(auVar67._0_4_ <= 0.0) &
                           (uint)((3.0 - auVar67._0_4_ * fVar29 * fVar29) * fVar29 * 0.5 *
                                 auVar67._0_4_);
            auVar5._8_4_ = ~-(uint)(auVar67._8_4_ <= 0.0) &
                           (uint)((3.0 - auVar67._8_4_ * fVar41 * fVar41) * fVar41 * 0.5 *
                                 auVar67._8_4_);
            auVar5._12_4_ =
                 ~-(uint)(auVar67._12_4_ <= 0.0) &
                 (uint)((3.0 - auVar67._12_4_ * fVar28 * fVar28) * fVar28 * 0.5 * auVar67._12_4_);
            auVar42 = maxps(auVar68,auVar5);
            fVar29 = local_248 * local_248;
            fVar37 = fStack_244 * fStack_244;
            fVar41 = fStack_240 * fStack_240;
            auVar51._0_4_ =
                 (float)(~-(uint)(auVar86._0_4_ <= 0.0) &
                        (uint)((3.0 - auVar86._0_4_ * fVar93 * fVar93) * auVar83._0_4_ *
                              auVar86._0_4_)) * _DAT_1467f07e0 * local_118._0_4_;
            auVar51._4_4_ =
                 (float)(~-(uint)(auVar86._4_4_ <= 0.0) &
                        (uint)((3.0 - auVar86._4_4_ * fVar88 * fVar88) * auVar83._4_4_ *
                              auVar86._4_4_)) * fRam00000001467f07e4 * local_118._4_4_;
            auVar51._8_4_ =
                 (float)(~-(uint)(auVar86._8_4_ <= 0.0) &
                        (uint)((3.0 - auVar86._8_4_ * fVar89 * fVar89) * auVar83._8_4_ *
                              auVar86._8_4_)) * fRam00000001467f07e8 * local_118._8_4_;
            auVar51._12_4_ =
                 (float)(~-(uint)(auVar86._12_4_ <= 0.0) &
                        (uint)((3.0 - auVar86._12_4_ * fVar90 * fVar90) * auVar83._12_4_ *
                              auVar86._12_4_)) * fRam00000001467f07ec * local_118._12_4_;
            auVar42 = divps(auVar51,auVar42);
            _local_288 = minps(local_118,auVar42);
            auVar69._0_4_ = fVar37 + fVar29 + fVar41;
            auVar69._4_4_ = fVar37 + fVar29 + fVar41;
            auVar69._8_4_ = fVar37 + fVar29 + fVar41;
            auVar69._12_4_ = fVar37 + fVar29 + fVar41;
            fVar29 = (local_178 - (float)local_278._0_4_) * local_248;
            fVar37 = (fStack_174 - (float)local_278._4_4_) * fStack_244;
            fVar41 = (fStack_170 - fStack_270) * fStack_240;
            auVar27._4_4_ = fVar29;
            auVar27._0_4_ = fVar29;
            auVar27._8_4_ = fVar29;
            auVar27._12_4_ = fVar29;
            auVar42 = rcpps(auVar27,auVar69);
            auVar52._0_4_ = fVar37 + fVar29 + fVar41;
            auVar52._4_4_ = fVar37 + fVar29 + fVar41;
            auVar52._8_4_ = fVar37 + fVar29 + fVar41;
            auVar52._12_4_ = fVar37 + fVar29 + fVar41;
            auVar70._0_4_ = auVar69._0_4_ * auVar42._0_4_;
            auVar70._4_4_ = auVar69._4_4_ * auVar42._4_4_;
            auVar70._8_4_ = auVar69._8_4_ * auVar42._8_4_;
            auVar70._12_4_ = auVar69._12_4_ * auVar42._12_4_;
            fVar29 = local_248 * local_248;
            fVar37 = fStack_244 * fStack_244;
            fVar90 = fStack_240 * fStack_240;
            fVar41 = ((local_178 - (float)local_278._0_4_) -
                     (2.0 - auVar70._0_4_) * auVar42._0_4_ * auVar52._0_4_ * local_248) +
                     (float)local_278._0_4_;
            fVar28 = ((fStack_174 - (float)local_278._4_4_) -
                     (2.0 - auVar70._4_4_) * auVar42._4_4_ * auVar52._4_4_ * fStack_244) +
                     (float)local_278._4_4_;
            fVar36 = ((fStack_170 - fStack_270) -
                     (2.0 - auVar70._8_4_) * auVar42._8_4_ * auVar52._8_4_ * fStack_240) +
                     fStack_270;
            local_178 = local_178 - fVar41;
            fStack_174 = fStack_174 - fVar28;
            fStack_170 = fStack_170 - fVar36;
            local_178 = local_178 * local_178;
            fStack_174 = fStack_174 * fStack_174;
            fStack_170 = fStack_170 * fStack_170;
            fVar54 = fVar37 + fVar29 + fVar90;
            fVar39 = fVar37 + fVar29 + fVar90;
            fVar40 = fVar37 + fVar29 + fVar90;
            fVar90 = fVar37 + fVar29 + fVar90;
            auVar7._4_4_ = fVar39;
            auVar7._0_4_ = fVar54;
            auVar7._8_4_ = fVar40;
            auVar7._12_4_ = fVar90;
            auVar61 = rsqrtps(auVar83,auVar7);
            local_168 = local_168 - fVar41;
            fStack_164 = fStack_164 - fVar28;
            fStack_160 = fStack_160 - fVar36;
            local_168 = local_168 * local_168;
            fStack_164 = fStack_164 * fStack_164;
            fStack_160 = fStack_160 * fStack_160;
            auVar77._0_4_ = fStack_174 + local_178 + fStack_170;
            auVar77._4_4_ = fStack_174 + local_178 + fStack_170;
            auVar77._8_4_ = fStack_174 + local_178 + fStack_170;
            auVar77._12_4_ = fStack_174 + local_178 + fStack_170;
            auVar42 = rsqrtps(auVar52,auVar77);
            fVar93 = fStack_164 + local_168 + fStack_160;
            fVar88 = fStack_164 + local_168 + fStack_160;
            fVar89 = fStack_164 + local_168 + fStack_160;
            fStack_160 = fStack_164 + local_168 + fStack_160;
            fVar29 = auVar42._0_4_;
            fVar37 = auVar42._4_4_;
            fVar41 = auVar42._8_4_;
            fVar28 = auVar42._12_4_;
            auVar6._4_4_ = fVar88;
            auVar6._0_4_ = fVar93;
            auVar6._8_4_ = fVar89;
            auVar6._12_4_ = fStack_160;
            auVar42 = rsqrtps(auVar70,auVar6);
            fVar36 = auVar42._0_4_;
            fVar38 = auVar42._4_4_;
            fVar91 = auVar42._8_4_;
            fVar92 = auVar42._12_4_;
            auVar79._0_4_ =
                 ~-(uint)(auVar77._0_4_ <= 0.0) &
                 (uint)((3.0 - fVar29 * auVar77._0_4_ * fVar29) * fVar29 * 0.5 * auVar77._0_4_);
            auVar79._4_4_ =
                 ~-(uint)(auVar77._4_4_ <= 0.0) &
                 (uint)((3.0 - fVar37 * auVar77._4_4_ * fVar37) * fVar37 * 0.5 * auVar77._4_4_);
            auVar79._8_4_ =
                 ~-(uint)(auVar77._8_4_ <= 0.0) &
                 (uint)((3.0 - fVar41 * auVar77._8_4_ * fVar41) * fVar41 * 0.5 * auVar77._8_4_);
            auVar79._12_4_ =
                 ~-(uint)(auVar77._12_4_ <= 0.0) &
                 (uint)((3.0 - fVar28 * auVar77._12_4_ * fVar28) * fVar28 * 0.5 * auVar77._12_4_);
            fVar29 = auVar61._0_4_;
            fVar37 = auVar61._4_4_;
            fVar41 = auVar61._8_4_;
            fVar28 = auVar61._12_4_;
            auVar53._0_4_ =
                 ~-(uint)(fVar93 <= 0.0) &
                 (uint)((3.0 - fVar36 * fVar93 * fVar36) * fVar36 * 0.5 * fVar93);
            auVar53._4_4_ =
                 ~-(uint)(fVar88 <= 0.0) &
                 (uint)((3.0 - fVar38 * fVar88 * fVar38) * fVar38 * 0.5 * fVar88);
            auVar53._8_4_ =
                 ~-(uint)(fVar89 <= 0.0) &
                 (uint)((3.0 - fVar91 * fVar89 * fVar91) * fVar91 * 0.5 * fVar89);
            auVar53._12_4_ =
                 ~-(uint)(fStack_160 <= 0.0) &
                 (uint)((3.0 - fVar92 * fStack_160 * fVar92) * fVar92 * 0.5 * fStack_160);
            auVar42 = maxps(auVar79,auVar53);
            auVar35._0_4_ =
                 (float)(~-(uint)(fVar54 <= 0.0) &
                        (uint)((3.0 - fVar29 * fVar54 * fVar29) * fVar29 * 0.5 * fVar54)) *
                 _DAT_1467f07e0 * local_108._0_4_;
            auVar35._4_4_ =
                 (float)(~-(uint)(fVar39 <= 0.0) &
                        (uint)((3.0 - fVar37 * fVar39 * fVar37) * fVar37 * 0.5 * fVar39)) *
                 fRam00000001467f07e4 * local_108._4_4_;
            auVar35._8_4_ =
                 (float)(~-(uint)(fVar40 <= 0.0) &
                        (uint)((3.0 - fVar41 * fVar40 * fVar41) * fVar41 * 0.5 * fVar40)) *
                 fRam00000001467f07e8 * local_108._8_4_;
            auVar35._12_4_ =
                 (float)(~-(uint)(fVar90 <= 0.0) &
                        (uint)((3.0 - fVar28 * fVar90 * fVar28) * fVar28 * 0.5 * fVar90)) *
                 fRam00000001467f07ec * local_108._12_4_;
            auVar42 = divps(auVar35,auVar42);
            local_108 = minps(local_108,auVar42);
          }
          if (param_6 == 0) {
            return 0xffffffff;
          }
          param_7 = (float)uVar9;
          _local_268 = local_108;
          FUN_143852420(&local_248,param_4,&param_7,local_e8);
          param_7 = (float)param_10;
          FUN_143852420(&local_248,param_5,&param_7,local_f8);
          uVar16 = FUN_143801b30(param_1,param_2,param_3,param_6,&local_1d8,&local_1b8,&local_1c8,
                                 &local_1a8,local_e8,local_f8,local_288,local_268,puVar10);
          return uVar16;
        }
      }
      return 9;
    }
  }
  return 8;
}



// FUNCTION 143800d90 FUN_143800d90 body=527 status=ok
// SIG undefined FUN_143800d90(void)

float * FUN_143800d90(float *param_1,longlong param_2,undefined4 param_3,float *param_4,
                     uint *param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
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
  longlong lVar27;
  int *piVar28;
  float *pfVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
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
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  
  lVar5 = *(longlong *)(param_2 + 0x18);
  lVar27 = FUN_1437fb610(*(undefined8 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x20),lVar5 + 0xb0,
                         lVar5 + 0xd0,lVar5 + 0x90,param_3);
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  iVar30 = 0;
  fVar36 = 0.0 - fRam00000001467f08d4;
  fVar38 = 0.0 - fRam00000001467f08d8;
  fVar39 = 0.0 - fRam00000001467f08dc;
  sVar1 = *(short *)(lVar27 + 8);
  *param_1 = 0.0 - DAT_1467f08d0;
  param_1[1] = fVar36;
  param_1[2] = fVar38;
  param_1[3] = fVar39;
  if (0 < sVar1) {
    iVar2 = *(int *)(lVar5 + 0x40);
    uVar3 = *(undefined4 *)(lVar5 + 0x30);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    fVar36 = *param_4;
    fVar38 = param_4[1];
    fVar39 = param_4[2];
    fVar7 = param_4[3];
    fVar8 = *(float *)(param_2 + 0x50);
    fVar9 = *(float *)(param_2 + 0x54);
    fVar10 = *(float *)(param_2 + 0x58);
    fVar11 = *(float *)(param_2 + 0x5c);
    fVar12 = *(float *)(param_2 + 0x40);
    fVar13 = *(float *)(param_2 + 0x44);
    fVar14 = *(float *)(param_2 + 0x48);
    fVar15 = *(float *)(param_2 + 0x4c);
    fVar16 = *(float *)(param_2 + 0x60);
    fVar17 = *(float *)(param_2 + 100);
    fVar18 = *(float *)(param_2 + 0x68);
    fVar19 = *(float *)(param_2 + 0x6c);
    fVar20 = *(float *)(param_2 + 0x70);
    fVar21 = *(float *)(param_2 + 0x74);
    fVar22 = *(float *)(param_2 + 0x78);
    fVar23 = *(float *)(param_2 + 0x7c);
    do {
      piVar28 = (int *)FUN_1437fb5b0(uVar6,uVar3);
      iVar4 = *piVar28;
      if (iVar4 < iVar2) {
        pfVar29 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar5 + 0x38));
      }
      else {
        pfVar29 = (float *)((longlong)(iVar4 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
      }
      fVar24 = *pfVar29;
      fVar25 = pfVar29[1];
      fVar26 = pfVar29[2];
      iVar30 = iVar30 + 1;
      fVar43 = fVar24 * fVar12 + fVar25 * fVar8 + fVar26 * fVar16 + fVar20;
      fVar44 = fVar24 * fVar13 + fVar25 * fVar9 + fVar26 * fVar17 + fVar21;
      fVar45 = fVar24 * fVar14 + fVar25 * fVar10 + fVar26 * fVar18 + fVar22;
      fVar40 = fVar43 * fVar36;
      fVar41 = fVar44 * fVar38;
      fVar42 = fVar45 * fVar39;
      fVar35 = fVar42 + fVar40;
      fVar37 = fVar7 + fVar41;
      fVar40 = fVar40 + fVar42;
      fVar41 = fVar41 + fVar7;
      fVar42 = fVar37 + fVar35;
      fVar35 = fVar35 + fVar37;
      fVar37 = fVar41 + fVar40;
      fVar40 = fVar40 + fVar41;
      uVar31 = -(uint)(*param_1 < fVar42);
      uVar32 = -(uint)(param_1[1] < fVar35);
      uVar33 = -(uint)(param_1[2] < fVar37);
      uVar34 = -(uint)(param_1[3] < fVar40);
      *param_1 = (float)(uVar31 & (uint)fVar42 | ~uVar31 & (uint)*param_1);
      param_1[1] = (float)(uVar32 & (uint)fVar35 | ~uVar32 & (uint)param_1[1]);
      param_1[2] = (float)(uVar33 & (uint)fVar37 | ~uVar33 & (uint)param_1[2]);
      param_1[3] = (float)(uVar34 & (uint)fVar40 | ~uVar34 & (uint)param_1[3]);
      uVar46 = uVar31 & (uint)fVar43 | ~uVar31 & uVar46;
      uVar47 = uVar32 & (uint)fVar44 | ~uVar32 & uVar47;
      uVar48 = uVar33 & (uint)fVar45 | ~uVar33 & uVar48;
      uVar49 = uVar34 & (uint)(fVar24 * fVar15 + fVar25 * fVar11 + fVar26 * fVar19 + fVar23) |
               ~uVar34 & uVar49;
    } while (iVar30 < sVar1);
  }
  *param_5 = uVar46;
  param_5[1] = uVar47;
  param_5[2] = uVar48;
  param_5[3] = uVar49;
  return param_1;
}



// FUNCTION 143800fa0 FUN_143800fa0 body=455 status=ok
// SIG undefined FUN_143800fa0(void)

undefined1 (*) [16]
FUN_143800fa0(undefined1 (*param_1) [16],longlong param_2,undefined4 param_3,float *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
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
  longlong lVar20;
  int *piVar21;
  float *pfVar22;
  int iVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  
  lVar5 = *(longlong *)(param_2 + 0x18);
  lVar20 = FUN_1437fb610(*(undefined8 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x20),lVar5 + 0xb0,
                         lVar5 + 0xd0,lVar5 + 0x90,param_3);
  iVar23 = 0;
  fVar26 = 0.0 - fRam00000001467f08d4;
  fVar28 = 0.0 - fRam00000001467f08d8;
  fVar29 = 0.0 - fRam00000001467f08dc;
  sVar1 = *(short *)(lVar20 + 8);
  *(float *)*param_1 = 0.0 - DAT_1467f08d0;
  *(float *)(*param_1 + 4) = fVar26;
  *(float *)(*param_1 + 8) = fVar28;
  *(float *)(*param_1 + 0xc) = fVar29;
  if (0 < sVar1) {
    iVar2 = *(int *)(lVar5 + 0x40);
    uVar3 = *(undefined4 *)(lVar5 + 0x30);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    fVar26 = *param_4;
    fVar28 = param_4[1];
    fVar29 = param_4[2];
    fVar7 = param_4[3];
    fVar8 = *(float *)(param_2 + 0x50);
    fVar9 = *(float *)(param_2 + 0x54);
    fVar10 = *(float *)(param_2 + 0x58);
    fVar11 = *(float *)(param_2 + 0x40);
    fVar12 = *(float *)(param_2 + 0x44);
    fVar13 = *(float *)(param_2 + 0x48);
    fVar14 = *(float *)(param_2 + 0x60);
    fVar15 = *(float *)(param_2 + 100);
    fVar16 = *(float *)(param_2 + 0x68);
    fVar17 = *(float *)(param_2 + 0x70);
    fVar18 = *(float *)(param_2 + 0x74);
    fVar19 = *(float *)(param_2 + 0x78);
    do {
      piVar21 = (int *)FUN_1437fb5b0(uVar6,uVar3);
      iVar4 = *piVar21;
      if (iVar4 < iVar2) {
        pfVar22 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar5 + 0x38));
      }
      else {
        pfVar22 = (float *)((longlong)(iVar4 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
      }
      fVar24 = *pfVar22;
      fVar27 = pfVar22[1];
      fVar32 = pfVar22[2];
      iVar23 = iVar23 + 1;
      fVar30 = (fVar24 * fVar11 + fVar27 * fVar8 + fVar32 * fVar14 + fVar17) * fVar26;
      fVar31 = (fVar24 * fVar12 + fVar27 * fVar9 + fVar32 * fVar15 + fVar18) * fVar28;
      fVar32 = (fVar24 * fVar13 + fVar27 * fVar10 + fVar32 * fVar16 + fVar19) * fVar29;
      fVar24 = fVar32 + fVar30;
      fVar27 = fVar7 + fVar31;
      fVar30 = fVar30 + fVar32;
      fVar31 = fVar31 + fVar7;
      auVar25._4_4_ = fVar24 + fVar27;
      auVar25._0_4_ = fVar27 + fVar24;
      auVar25._8_4_ = fVar31 + fVar30;
      auVar25._12_4_ = fVar30 + fVar31;
      auVar25 = maxps(*param_1,auVar25);
      *param_1 = auVar25;
    } while (iVar23 < sVar1);
  }
  return param_1;
}



// FUNCTION 143801170 FUN_143801170 body=113 status=ok
// SIG undefined FUN_143801170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_143801170(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
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
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_3[1];
  param_1[2] = *param_3;
  param_1[3] = uVar1;
  uVar1 = param_4[1];
  param_1[4] = *param_4;
  param_1[5] = uVar1;
  uVar1 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar1;
  local_48 = DAT_1467f06f0;
  uStack_44 = uRam00000001467f06f4;
  uStack_40 = uRam00000001467f06f8;
  uStack_3c = uRam00000001467f06fc;
  local_38 = _DAT_1467f06e0;
  uStack_34 = uRam00000001467f06e4;
  uStack_30 = uRam00000001467f06e8;
  uStack_2c = DAT_1467f06ec;
  local_28 = DAT_1467f06f0;
  uStack_24 = uRam00000001467f06f4;
  uStack_20 = uRam00000001467f06f8;
  uStack_1c = uRam00000001467f06fc;
  local_18 = _DAT_1467f06e0;
  uStack_14 = uRam00000001467f06e4;
  uStack_10 = uRam00000001467f06e8;
  uStack_c = DAT_1467f06ec;
  FUN_143802b30(_DAT_1467f06e0,&local_18,&local_28,&local_38,&local_48);
  return param_1;
}



// FUNCTION 1438011f0 FUN_1438011f0 body=515 status=ok
// SIG undefined FUN_1438011f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1438011f0(longlong param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
             undefined1 (*param_6) [16],undefined1 (*param_7) [16],undefined1 (*param_8) [16],
             undefined1 (*param_9) [16],float *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 auVar6 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar12 = (*param_4 - *param_5) * _DAT_1467f07e0;
  fVar13 = (param_4[1] - param_5[1]) * fRam00000001467f07e4;
  fVar14 = (param_4[2] - param_5[2]) * fRam00000001467f07e8;
  fVar5 = *param_3 * fVar12;
  fVar7 = param_3[1] * fVar13;
  fVar8 = param_3[2] * fVar14;
  fVar12 = fVar12 + (0.0 - (fVar7 + fVar5 + fVar8)) * *param_3;
  fVar13 = fVar13 + (0.0 - (fVar7 + fVar5 + fVar8)) * param_3[1];
  fVar14 = fVar14 + (0.0 - (fVar7 + fVar5 + fVar8)) * param_3[2];
  fVar5 = fVar12 * fVar12;
  fVar7 = fVar13 * fVar13;
  auVar6._8_4_ = fVar14 * fVar14;
  auVar6._4_4_ = auVar6._8_4_;
  auVar6._0_4_ = auVar6._8_4_;
  auVar6._12_4_ = auVar6._8_4_;
  fVar9 = fVar7 + fVar5 + auVar6._8_4_;
  fVar10 = fVar7 + fVar5 + auVar6._8_4_;
  fVar11 = fVar7 + fVar5 + auVar6._8_4_;
  auVar4._4_4_ = fVar10;
  auVar4._0_4_ = fVar9;
  auVar4._8_4_ = fVar11;
  auVar4._12_4_ = fVar7 + fVar5 + auVar6._8_4_;
  auVar4 = rsqrtps(auVar6,auVar4);
  fVar5 = auVar4._0_4_;
  fVar7 = auVar4._4_4_;
  fVar8 = auVar4._8_4_;
  fVar12 = fVar12 * (float)(~-(uint)(fVar9 <= 0.0) &
                           (uint)((3.0 - fVar9 * fVar5 * fVar5) * fVar5 * 0.5));
  fVar13 = fVar13 * (float)(~-(uint)(fVar10 <= 0.0) &
                           (uint)((3.0 - fVar10 * fVar7 * fVar7) * fVar7 * 0.5));
  fVar14 = fVar14 * (float)(~-(uint)(fVar11 <= 0.0) &
                           (uint)((3.0 - fVar11 * fVar8 * fVar8) * fVar8 * 0.5));
  fVar5 = *(float *)(param_1 + 0x40) * fVar12;
  fVar7 = *(float *)(param_1 + 0x44) * fVar13;
  fVar8 = *(float *)(param_1 + 0x48) * fVar14;
  *(float *)*param_6 = fVar7 + fVar5 + fVar8;
  *(float *)(*param_6 + 4) = fVar7 + fVar5 + fVar8;
  *(float *)(*param_6 + 8) = fVar7 + fVar5 + fVar8;
  *(float *)(*param_6 + 0xc) = fVar7 + fVar5 + fVar8;
  fVar5 = *(float *)(param_1 + 0x50) * fVar12;
  fVar7 = *(float *)(param_1 + 0x54) * fVar13;
  fVar8 = *(float *)(param_1 + 0x58) * fVar14;
  *(float *)*param_7 = fVar7 + fVar5 + fVar8;
  *(float *)(*param_7 + 4) = fVar7 + fVar5 + fVar8;
  *(float *)(*param_7 + 8) = fVar7 + fVar5 + fVar8;
  *(float *)(*param_7 + 0xc) = fVar7 + fVar5 + fVar8;
  fVar5 = *(float *)(param_1 + 0x60) * fVar12;
  fVar7 = *(float *)(param_1 + 100) * fVar13;
  fVar8 = *(float *)(param_1 + 0x68) * fVar14;
  *(float *)*param_8 = fVar7 + fVar5 + fVar8;
  *(float *)(*param_8 + 4) = fVar7 + fVar5 + fVar8;
  *(float *)(*param_8 + 8) = fVar7 + fVar5 + fVar8;
  *(float *)(*param_8 + 0xc) = fVar7 + fVar5 + fVar8;
  fVar12 = *(float *)(param_1 + 0x70) * fVar12;
  fVar13 = *(float *)(param_1 + 0x74) * fVar13;
  fVar14 = *(float *)(param_1 + 0x78) * fVar14;
  fVar7 = fVar13 + fVar12 + fVar14;
  fVar8 = fVar13 + fVar12 + fVar14;
  fVar9 = fVar13 + fVar12 + fVar14;
  fVar14 = fVar13 + fVar12 + fVar14;
  *(float *)*param_9 = fVar7;
  *(float *)(*param_9 + 4) = fVar8;
  *(float *)(*param_9 + 8) = fVar9;
  *(float *)(*param_9 + 0xc) = fVar14;
  fVar5 = *(float *)*param_8;
  uVar1 = *(undefined4 *)(*param_8 + 4);
  uVar2 = *(undefined4 *)(*param_8 + 8);
  uVar3 = *(undefined4 *)(*param_8 + 0xc);
  if (fVar7 < fVar5) {
    *(float *)*param_8 = fVar7;
    *(float *)(*param_8 + 4) = fVar8;
    *(float *)(*param_8 + 8) = fVar9;
    *(float *)(*param_8 + 0xc) = fVar14;
    *(float *)*param_9 = fVar5;
    *(undefined4 *)(*param_9 + 4) = uVar1;
    *(undefined4 *)(*param_9 + 8) = uVar2;
    *(undefined4 *)(*param_9 + 0xc) = uVar3;
  }
  fVar5 = SUB164(*param_8,0);
  fVar7 = SUB164(*param_7,0);
  if (fVar5 <= fVar7) {
    fVar8 = SUB164(*param_9,0);
    fVar9 = SUB164(*param_6,0);
    if (((fVar9 <= fVar8) && (1e-06 <= fVar7 - fVar9)) && (1e-06 <= fVar8 - fVar5)) {
      auVar6 = minps(*param_7,*param_9);
      auVar4 = maxps(*param_6,*param_8);
      fVar5 = auVar6._0_4_ - auVar4._0_4_;
      *param_10 = fVar5;
      if (fVar5 < *(float *)(param_2 + 0x18)) {
        if ((1e-05 <= ABS(fVar5 - (*(float *)*param_7 - *(float *)*param_6))) &&
           (1e-05 <= ABS(fVar5 - (*(float *)*param_9 - *(float *)*param_8)))) {
          return 4;
        }
      }
      return 0xffffffff;
    }
  }
  return 3;
}



// FUNCTION 143801400 FUN_143801400 body=1013 status=ok
// SIG undefined FUN_143801400(void)

int FUN_143801400(float *param_1,float *param_2,float *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
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
  
  if (param_4 == 0) {
    fVar19 = *param_2;
    fVar7 = (param_1[0x1c] - param_1[0x10]) * *param_3;
    fVar11 = (param_1[0x1d] - param_1[0x11]) * param_3[1];
    fVar13 = (param_1[0x1e] - param_1[0x12]) * param_3[2];
    fVar27 = fVar11 + fVar7 + fVar13;
    fVar28 = fVar11 + fVar7 + fVar13;
    fVar29 = fVar11 + fVar7 + fVar13;
    fVar13 = fVar11 + fVar7 + fVar13;
    fVar8 = (param_1[0x18] - param_1[0x14]) * *param_3;
    fVar12 = (param_1[0x19] - param_1[0x15]) * param_3[1];
    fVar7 = (param_1[0x1a] - param_1[0x16]) * param_3[2];
    fVar30 = fVar12 + fVar8 + fVar7;
    fVar11 = fVar12 + fVar8 + fVar7;
    fVar31 = fVar12 + fVar8 + fVar7;
    fVar7 = fVar12 + fVar8 + fVar7;
  }
  else {
    fVar19 = param_2[1];
    fVar7 = (param_1[0x20] - param_1[0x2c]) * (param_1[0x20] - param_1[0x2c]);
    fVar11 = (param_1[0x21] - param_1[0x2d]) * (param_1[0x21] - param_1[0x2d]);
    fVar13 = (param_1[0x22] - param_1[0x2e]) * (param_1[0x22] - param_1[0x2e]);
    auVar26._0_4_ = fVar11 + fVar7 + fVar13;
    auVar26._4_4_ = fVar11 + fVar7 + fVar13;
    auVar26._8_4_ = fVar11 + fVar7 + fVar13;
    auVar26._12_4_ = fVar11 + fVar7 + fVar13;
    auVar14 = rsqrtps(in_XMM2,auVar26);
    fVar7 = auVar14._0_4_;
    fVar11 = auVar14._4_4_;
    fVar13 = auVar14._8_4_;
    fVar31 = auVar14._12_4_;
    fVar27 = (float)(~-(uint)(auVar26._0_4_ <= 0.0) &
                    (uint)((3.0 - auVar26._0_4_ * fVar7 * fVar7) * fVar7 * 0.5 * auVar26._0_4_));
    fVar28 = (float)(~-(uint)(auVar26._4_4_ <= 0.0) &
                    (uint)((3.0 - auVar26._4_4_ * fVar11 * fVar11) * fVar11 * 0.5 * auVar26._4_4_));
    fVar29 = (float)(~-(uint)(auVar26._8_4_ <= 0.0) &
                    (uint)((3.0 - auVar26._8_4_ * fVar13 * fVar13) * fVar13 * 0.5 * auVar26._8_4_));
    fVar13 = (float)(~-(uint)(auVar26._12_4_ <= 0.0) &
                    (uint)((3.0 - auVar26._12_4_ * fVar31 * fVar31) * fVar31 * 0.5 * auVar26._12_4_)
                    );
    fVar7 = (param_1[0x28] - param_1[0x24]) * (param_1[0x28] - param_1[0x24]);
    fVar11 = (param_1[0x29] - param_1[0x25]) * (param_1[0x29] - param_1[0x25]);
    auVar14._8_4_ = (param_1[0x2a] - param_1[0x26]) * (param_1[0x2a] - param_1[0x26]);
    auVar14._4_4_ = auVar14._8_4_;
    auVar14._0_4_ = auVar14._8_4_;
    auVar14._12_4_ = auVar14._8_4_;
    in_XMM2._0_4_ = fVar11 + fVar7 + auVar14._8_4_;
    in_XMM2._4_4_ = fVar11 + fVar7 + auVar14._8_4_;
    in_XMM2._8_4_ = fVar11 + fVar7 + auVar14._8_4_;
    in_XMM2._12_4_ = fVar11 + fVar7 + auVar14._8_4_;
    auVar14 = rsqrtps(auVar14,in_XMM2);
    fVar7 = auVar14._0_4_;
    fVar11 = auVar14._4_4_;
    fVar31 = auVar14._8_4_;
    fVar8 = auVar14._12_4_;
    fVar30 = (float)(~-(uint)(in_XMM2._0_4_ <= 0.0) &
                    (uint)((3.0 - in_XMM2._0_4_ * fVar7 * fVar7) * fVar7 * 0.5 * in_XMM2._0_4_));
    fVar11 = (float)(~-(uint)(in_XMM2._4_4_ <= 0.0) &
                    (uint)((3.0 - in_XMM2._4_4_ * fVar11 * fVar11) * fVar11 * 0.5 * in_XMM2._4_4_));
    fVar31 = (float)(~-(uint)(in_XMM2._8_4_ <= 0.0) &
                    (uint)((3.0 - in_XMM2._8_4_ * fVar31 * fVar31) * fVar31 * 0.5 * in_XMM2._8_4_));
    fVar7 = (float)(~-(uint)(in_XMM2._12_4_ <= 0.0) &
                   (uint)((3.0 - in_XMM2._12_4_ * fVar8 * fVar8) * fVar8 * 0.5 * in_XMM2._12_4_));
  }
  if ((fVar19 <= ABS(fVar27)) || (fVar19 <= ABS(fVar30))) {
    auVar25._0_4_ = fVar30 - fVar27;
    auVar25._4_4_ = fVar11 - fVar28;
    auVar25._8_4_ = fVar31 - fVar29;
    auVar25._12_4_ = fVar7 - fVar13;
    if (param_2[0xc] <= ABS(auVar25._0_4_)) {
      auVar14 = rcpps(in_XMM2,auVar25);
      fVar7 = auVar14._0_4_;
      fVar11 = auVar14._4_4_;
      fVar31 = auVar14._8_4_;
      fVar8 = auVar14._12_4_;
      fVar12 = (2.0 - auVar25._0_4_ * fVar7) * fVar7 * (fVar19 - fVar27);
      fVar22 = (2.0 - auVar25._4_4_ * fVar11) * fVar11 * (fVar19 - fVar28);
      fVar23 = (2.0 - auVar25._8_4_ * fVar31) * fVar31 * (fVar19 - fVar29);
      fVar24 = (2.0 - auVar25._12_4_ * fVar8) * fVar8 * (fVar19 - fVar13);
      fVar7 = (2.0 - auVar25._0_4_ * fVar7) * fVar7 * ((0.0 - fVar19) - fVar27);
      fVar11 = (2.0 - auVar25._4_4_ * fVar11) * fVar11 * ((0.0 - fVar19) - fVar28);
      fVar31 = (2.0 - auVar25._8_4_ * fVar31) * fVar31 * ((0.0 - fVar19) - fVar29);
      fVar19 = (2.0 - auVar25._12_4_ * fVar8) * fVar8 * ((0.0 - fVar19) - fVar13);
      if (fVar27 <= fVar30) {
        auVar17._0_4_ = (uint)fVar7 & -(uint)(fVar7 < DAT_1467f06f0);
        auVar17._4_4_ = (uint)fVar11 & -(uint)(fVar11 < fRam00000001467f06f4);
        auVar17._8_4_ = (uint)fVar31 & -(uint)(fVar31 < fRam00000001467f06f8);
        auVar17._12_4_ = (uint)fVar19 & -(uint)(fVar19 < fRam00000001467f06fc);
        auVar4._0_4_ = ~-(uint)(fVar7 < DAT_1467f06f0) & (uint)DAT_1467f06f0;
        auVar4._4_4_ = ~-(uint)(fVar11 < fRam00000001467f06f4) & (uint)fRam00000001467f06f4;
        auVar4._8_4_ = ~-(uint)(fVar31 < fRam00000001467f06f8) & (uint)fRam00000001467f06f8;
        auVar4._12_4_ = ~-(uint)(fVar19 < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
        auVar21._0_4_ = (uint)fVar12 & -(uint)(fVar12 < DAT_1467f06f0);
        auVar21._4_4_ = (uint)fVar22 & -(uint)(fVar22 < fRam00000001467f06f4);
        auVar21._8_4_ = (uint)fVar23 & -(uint)(fVar23 < fRam00000001467f06f8);
        auVar21._12_4_ = (uint)fVar24 & -(uint)(fVar24 < fRam00000001467f06fc);
        auVar5._0_4_ = ~-(uint)(fVar12 < DAT_1467f06f0) & (uint)DAT_1467f06f0;
        auVar5._4_4_ = ~-(uint)(fVar22 < fRam00000001467f06f4) & (uint)fRam00000001467f06f4;
        auVar5._8_4_ = ~-(uint)(fVar23 < fRam00000001467f06f8) & (uint)fRam00000001467f06f8;
        auVar5._12_4_ = ~-(uint)(fVar24 < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
        auVar26 = maxps(ZEXT816(0),auVar21 | auVar5);
        auVar14 = maxps(ZEXT816(0),auVar17 | auVar4);
      }
      else {
        auVar20._0_4_ = (uint)fVar12 & -(uint)(fVar12 < DAT_1467f06f0);
        auVar20._4_4_ = (uint)fVar22 & -(uint)(fVar22 < fRam00000001467f06f4);
        auVar20._8_4_ = (uint)fVar23 & -(uint)(fVar23 < fRam00000001467f06f8);
        auVar20._12_4_ = (uint)fVar24 & -(uint)(fVar24 < fRam00000001467f06fc);
        auVar9._0_4_ = ~-(uint)(fVar12 < DAT_1467f06f0) & (uint)DAT_1467f06f0;
        auVar9._4_4_ = ~-(uint)(fVar22 < fRam00000001467f06f4) & (uint)fRam00000001467f06f4;
        auVar9._8_4_ = ~-(uint)(fVar23 < fRam00000001467f06f8) & (uint)fRam00000001467f06f8;
        auVar9._12_4_ = ~-(uint)(fVar24 < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
        auVar16._0_4_ = (uint)fVar7 & -(uint)(fVar7 < DAT_1467f06f0);
        auVar16._4_4_ = (uint)fVar11 & -(uint)(fVar11 < fRam00000001467f06f4);
        auVar16._8_4_ = (uint)fVar31 & -(uint)(fVar31 < fRam00000001467f06f8);
        auVar16._12_4_ = (uint)fVar19 & -(uint)(fVar19 < fRam00000001467f06fc);
        auVar3._0_4_ = ~-(uint)(fVar7 < DAT_1467f06f0) & (uint)DAT_1467f06f0;
        auVar3._4_4_ = ~-(uint)(fVar11 < fRam00000001467f06f4) & (uint)fRam00000001467f06f4;
        auVar3._8_4_ = ~-(uint)(fVar31 < fRam00000001467f06f8) & (uint)fRam00000001467f06f8;
        auVar3._12_4_ = ~-(uint)(fVar19 < fRam00000001467f06fc) & (uint)fRam00000001467f06fc;
        auVar26 = maxps(ZEXT816(0),auVar16 | auVar3);
        auVar14 = maxps(ZEXT816(0),auVar9 | auVar20);
      }
      local_88 = param_1[0x30];
      fStack_84 = param_1[0x31];
      fStack_80 = param_1[0x32];
      fStack_7c = param_1[0x33];
      local_98 = (param_1[0x34] - local_88) * auVar26._0_4_ + local_88;
      fStack_94 = (param_1[0x35] - fStack_84) * auVar26._4_4_ + fStack_84;
      fStack_90 = (param_1[0x36] - fStack_80) * auVar26._8_4_ + fStack_80;
      fStack_8c = (param_1[0x37] - fStack_7c) * auVar26._12_4_ + fStack_7c;
      local_88 = (param_1[0x34] - local_88) * auVar14._0_4_ + local_88;
      fStack_84 = (param_1[0x35] - fStack_84) * auVar14._4_4_ + fStack_84;
      fStack_80 = (param_1[0x36] - fStack_80) * auVar14._8_4_ + fStack_80;
      fStack_7c = (param_1[0x37] - fStack_7c) * auVar14._12_4_ + fStack_7c;
      local_b8 = param_1[0x3c];
      fStack_b4 = param_1[0x3d];
      fStack_b0 = param_1[0x3e];
      fStack_ac = param_1[0x3f];
      local_a8 = (param_1[0x38] - local_b8) * auVar26._0_4_ + local_b8;
      fStack_a4 = (param_1[0x39] - fStack_b4) * auVar26._4_4_ + fStack_b4;
      fStack_a0 = (param_1[0x3a] - fStack_b0) * auVar26._8_4_ + fStack_b0;
      fStack_9c = (param_1[0x3b] - fStack_ac) * auVar26._12_4_ + fStack_ac;
      local_b8 = (param_1[0x38] - local_b8) * auVar14._0_4_ + local_b8;
      fStack_b4 = (param_1[0x39] - fStack_b4) * auVar14._4_4_ + fStack_b4;
      fStack_b0 = (param_1[0x3a] - fStack_b0) * auVar14._8_4_ + fStack_b0;
      fStack_ac = (param_1[0x3b] - fStack_ac) * auVar14._12_4_ + fStack_ac;
      FUN_143802b30(param_1,&local_88,&local_98,&local_a8,&local_b8);
      cVar1 = FUN_143801800();
      if (cVar1 != '\0') {
        return 5;
      }
      local_98 = param_1[4] - *param_1;
      fStack_94 = param_1[5] - param_1[1];
      fStack_90 = param_1[6] - param_1[2];
      fVar19 = local_98 * local_98;
      fVar7 = fStack_94 * fStack_94;
      auVar10._8_4_ = fStack_90 * fStack_90;
      auVar10._4_4_ = auVar10._8_4_;
      auVar10._0_4_ = auVar10._8_4_;
      auVar10._12_4_ = auVar10._8_4_;
      auVar18._0_4_ = fVar7 + fVar19 + auVar10._8_4_;
      auVar18._4_4_ = fVar7 + fVar19 + auVar10._8_4_;
      auVar18._8_4_ = fVar7 + fVar19 + auVar10._8_4_;
      auVar18._12_4_ = fVar7 + fVar19 + auVar10._8_4_;
      auVar14 = rsqrtps(auVar10,auVar18);
      fVar19 = auVar14._0_4_;
      fVar11 = auVar14._4_4_;
      fVar31 = auVar14._8_4_;
      fVar27 = auVar14._12_4_;
      local_88 = param_1[0xc] - param_1[8];
      fStack_84 = param_1[0xd] - param_1[9];
      fStack_80 = param_1[0xe] - param_1[10];
      fVar7 = local_88 * local_88;
      fVar13 = fStack_84 * fStack_84;
      fVar8 = fStack_80 * fStack_80;
      local_98 = (float)(~-(uint)(auVar18._0_4_ <= 0.0) &
                        (uint)((3.0 - auVar18._0_4_ * fVar19 * fVar19) * fVar19 * 0.5)) * local_98;
      fStack_94 = (float)(~-(uint)(auVar18._4_4_ <= 0.0) &
                         (uint)((3.0 - auVar18._4_4_ * fVar11 * fVar11) * fVar11 * 0.5)) * fStack_94
      ;
      fStack_90 = (float)(~-(uint)(auVar18._8_4_ <= 0.0) &
                         (uint)((3.0 - auVar18._8_4_ * fVar31 * fVar31) * fVar31 * 0.5)) * fStack_90
      ;
      fStack_8c = (float)(~-(uint)(auVar18._12_4_ <= 0.0) &
                         (uint)((3.0 - auVar18._12_4_ * fVar27 * fVar27) * fVar27 * 0.5)) *
                  (param_1[7] - param_1[3]);
      auVar6._4_4_ = fVar7;
      auVar6._0_4_ = fVar7;
      auVar6._8_4_ = fVar7;
      auVar6._12_4_ = fVar7;
      auVar15._0_4_ = fVar13 + fVar7 + fVar8;
      auVar15._4_4_ = fVar13 + fVar7 + fVar8;
      auVar15._8_4_ = fVar13 + fVar7 + fVar8;
      auVar15._12_4_ = fVar13 + fVar7 + fVar8;
      auVar14 = rsqrtps(auVar6,auVar15);
      fVar19 = auVar14._0_4_;
      fVar7 = auVar14._4_4_;
      fVar11 = auVar14._8_4_;
      fVar13 = auVar14._12_4_;
      local_88 = (float)(~-(uint)(auVar15._0_4_ <= 0.0) &
                        (uint)((3.0 - auVar15._0_4_ * fVar19 * fVar19) * fVar19 * 0.5)) * local_88;
      fStack_84 = (float)(~-(uint)(auVar15._4_4_ <= 0.0) &
                         (uint)((3.0 - auVar15._4_4_ * fVar7 * fVar7) * fVar7 * 0.5)) * fStack_84;
      fStack_80 = (float)(~-(uint)(auVar15._8_4_ <= 0.0) &
                         (uint)((3.0 - auVar15._8_4_ * fVar11 * fVar11) * fVar11 * 0.5)) * fStack_80
      ;
      fStack_7c = (float)(~-(uint)(auVar15._12_4_ <= 0.0) &
                         (uint)((3.0 - auVar15._12_4_ * fVar13 * fVar13) * fVar13 * 0.5)) *
                  (param_1[0xf] - param_1[0xb]);
      iVar2 = FUN_1438011f0();
      if (iVar2 == -1) {
        return -1;
      }
      return iVar2;
    }
  }
  return -1;
}



// FUNCTION 143801800 FUN_143801800 body=46 status=ok
// SIG undefined FUN_143801800(void)

undefined1 FUN_143801800(longlong param_1)

{
  if ((*(float *)(param_1 + 0xc0) < *(float *)(param_1 + 0xd0)) &&
     (*(float *)(param_1 + 0xe0) < *(float *)(param_1 + 0xf0))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143801830 FUN_143801830 body=764 status=ok
// SIG undefined FUN_143801830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143801830(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined8 uVar19;
  byte bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  bVar18 = *(byte *)(*(longlong *)(*(longlong *)(param_4 + 0x18) + 0x68) + 0x80) & 1;
  bVar20 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 0x68) + 0x80) & 1;
  if ((bVar20 == 0) && (bVar18 == 0)) {
    bVar15 = true;
  }
  else {
    bVar15 = false;
    if ((bVar20 != 0) && (bVar18 != 0)) {
      bVar17 = true;
      goto LAB_14380187f;
    }
  }
  bVar17 = false;
LAB_14380187f:
  if ((bVar20 == 0) || (bVar18 == 0)) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  if ((bVar20 == 0) && (bVar18 == 0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  local_a8 = _DAT_1467f06e0;
  uStack_a4 = uRam00000001467f06e4;
  uStack_a0 = uRam00000001467f06e8;
  uStack_9c = DAT_1467f06ec;
  if ((!bVar14) ||
     ((uVar19 = FUN_1437ffb80(param_1,param_2,&local_a8,param_3,param_4,0,param_5,param_6,param_7,
                              param_8,param_9), !bVar15 && ((int)uVar19 == -1)))) {
    uVar12 = *param_9;
    uVar13 = param_9[1];
    fVar1 = *(float *)(param_9 + 2);
    fVar2 = *(float *)((longlong)param_9 + 0x14);
    fVar3 = *(float *)(param_9 + 3);
    uVar4 = *(undefined4 *)((longlong)param_9 + 0x1c);
    fVar21 = *(float *)(param_9 + 4);
    fVar22 = *(float *)((longlong)param_9 + 0x24);
    fVar23 = *(float *)(param_9 + 5);
    fVar24 = *(float *)((longlong)param_9 + 0x2c);
    if ((!bVar16) ||
       ((uVar19 = FUN_1437fef40(param_1,&DAT_1467f06e0,&local_a8,param_3,param_4,0,param_5,param_6,
                                param_7,param_8,param_9), !bVar17 && ((int)uVar19 == -1)))) {
      fVar5 = *(float *)(param_9 + 4);
      fVar6 = *(float *)((longlong)param_9 + 0x24);
      fVar7 = *(float *)(param_9 + 5);
      fVar8 = *(float *)((longlong)param_9 + 0x2c);
      uVar19 = 0xffffffff;
      fVar9 = *(float *)(param_9 + 2);
      fVar10 = *(float *)((longlong)param_9 + 0x14);
      fVar11 = *(float *)(param_9 + 3);
      *param_9 = uVar12;
      param_9[1] = uVar13;
      *(float *)(param_9 + 2) = fVar1;
      *(float *)((longlong)param_9 + 0x14) = fVar2;
      *(float *)(param_9 + 3) = fVar3;
      *(undefined4 *)((longlong)param_9 + 0x1c) = uVar4;
      *(float *)(param_9 + 4) = fVar21;
      *(float *)((longlong)param_9 + 0x24) = fVar22;
      *(float *)(param_9 + 5) = fVar23;
      *(float *)((longlong)param_9 + 0x2c) = fVar24;
      *(float *)(param_9 + 2) = (fVar9 + fVar1) * 0.5;
      if (fVar21 <= fVar5) {
        fVar21 = fVar5;
      }
      *(float *)((longlong)param_9 + 0x14) = (fVar10 + fVar2) * 0.5;
      *(float *)(param_9 + 4) = fVar21;
      if (fVar6 <= fVar22) {
        fVar22 = fVar6;
      }
      *(float *)((longlong)param_9 + 0x24) = fVar22;
      if (fVar23 <= fVar7) {
        fVar23 = fVar7;
      }
      *(float *)(param_9 + 5) = fVar23;
      if (fVar8 <= fVar24) {
        fVar24 = fVar8;
      }
      *(float *)(param_9 + 3) = (fVar11 + fVar3) * 0.5;
      *(float *)((longlong)param_9 + 0x2c) = fVar24;
    }
  }
  return uVar19;
}



// FUNCTION 143801b30 FUN_143801b30 body=840 status=ok
// SIG undefined FUN_143801b30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143801b30(float *param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
             float *param_11,float *param_12)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar15;
  float fVar16;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
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
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8 [36];
  float local_118 [70];
  
  fVar32 = param_1[7];
  auVar34._4_4_ = fVar32;
  auVar34._0_4_ = fVar32;
  auVar34._8_4_ = fVar32;
  auVar34._12_4_ = fVar32;
  fVar32 = *param_5;
  fVar9 = param_5[1];
  fVar15 = param_5[2];
  fVar16 = param_5[3];
  fVar21 = fVar32 - *param_7;
  fVar23 = fVar9 - param_7[1];
  fVar26 = fVar15 - param_7[2];
  fVar29 = fVar16 - param_7[3];
  fVar22 = fVar23 * *param_9 - param_9[1] * fVar21;
  fVar24 = fVar26 * param_9[1] - param_9[2] * fVar23;
  fVar27 = fVar21 * param_9[2] - *param_9 * fVar26;
  fVar21 = fVar24 * fVar24;
  fVar23 = fVar27 * fVar27;
  auVar10._8_4_ = fVar22 * fVar22;
  auVar10._4_4_ = auVar10._8_4_;
  auVar10._0_4_ = auVar10._8_4_;
  auVar10._12_4_ = auVar10._8_4_;
  fVar17 = fVar23 + fVar21 + auVar10._8_4_;
  fVar18 = fVar23 + fVar21 + auVar10._8_4_;
  fVar19 = fVar23 + fVar21 + auVar10._8_4_;
  fVar20 = fVar23 + fVar21 + auVar10._8_4_;
  auVar11._4_4_ = fVar18;
  auVar11._0_4_ = fVar17;
  auVar11._8_4_ = fVar19;
  auVar11._12_4_ = fVar20;
  auVar11 = rsqrtps(auVar10,auVar11);
  fVar21 = auVar11._0_4_;
  fVar23 = auVar11._4_4_;
  fVar26 = auVar11._8_4_;
  fVar31 = auVar11._12_4_;
  auVar12._0_4_ = *param_11 * _DAT_1467f07e0;
  auVar12._4_4_ = param_11[1] * fRam00000001467f07e4;
  auVar12._8_4_ = param_11[2] * fRam00000001467f07e8;
  auVar12._12_4_ = param_11[3] * fRam00000001467f07ec;
  auVar11 = minps(auVar12,auVar34);
  fVar38 = (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar17 * fVar21 * fVar21) * fVar21 * 0.5)
                  ) * fVar24 * (0.0 - auVar11._0_4_) + (*param_7 - fVar32) * _DAT_1467f07e0 + fVar32
  ;
  fVar39 = (float)(~-(uint)(fVar18 <= 0.0) & (uint)((3.0 - fVar18 * fVar23 * fVar23) * fVar23 * 0.5)
                  ) * fVar27 * (0.0 - auVar11._4_4_) +
           (param_7[1] - fVar9) * fRam00000001467f07e4 + fVar9;
  fVar40 = (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar19 * fVar26 * fVar26) * fVar26 * 0.5)
                  ) * fVar22 * (0.0 - auVar11._8_4_) +
           (param_7[2] - fVar15) * fRam00000001467f07e8 + fVar15;
  fVar41 = (float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - fVar20 * fVar31 * fVar31) * fVar31 * 0.5)
                  ) * (fVar29 * param_9[3] - param_9[3] * fVar29) * (0.0 - auVar11._12_4_) +
           (param_7[3] - fVar16) * fRam00000001467f07ec + fVar16;
  fVar32 = *param_6;
  fVar9 = param_6[1];
  fVar15 = param_6[2];
  fVar16 = param_6[3];
  fVar21 = fVar32 - *param_8;
  fVar23 = fVar9 - param_8[1];
  fVar26 = fVar15 - param_8[2];
  fVar30 = fVar16 - param_8[3];
  fVar29 = fVar23 * *param_10 - param_10[1] * fVar21;
  fVar25 = fVar26 * param_10[1] - param_10[2] * fVar23;
  fVar28 = fVar21 * param_10[2] - *param_10 * fVar26;
  fVar21 = fVar25 * fVar25;
  fVar23 = fVar28 * fVar28;
  fVar19 = fVar29 * fVar29;
  auVar8._4_4_ = fVar21;
  auVar8._0_4_ = fVar21;
  auVar8._8_4_ = fVar21;
  auVar8._12_4_ = fVar21;
  local_1b8 = *param_2;
  fStack_1b4 = param_2[1];
  fStack_1b0 = param_2[2];
  fStack_1ac = param_2[3];
  fVar22 = fVar23 + fVar21 + fVar19;
  fVar24 = fVar23 + fVar21 + fVar19;
  fVar27 = fVar23 + fVar21 + fVar19;
  fVar19 = fVar23 + fVar21 + fVar19;
  auVar13._0_4_ = *param_12 * _DAT_1467f07e0;
  auVar13._4_4_ = param_12[1] * fRam00000001467f07e4;
  auVar13._8_4_ = param_12[2] * fRam00000001467f07e8;
  auVar13._12_4_ = param_12[3] * fRam00000001467f07ec;
  auVar14._4_4_ = fVar24;
  auVar14._0_4_ = fVar22;
  auVar14._8_4_ = fVar27;
  auVar14._12_4_ = fVar19;
  auVar11 = rsqrtps(auVar8,auVar14);
  auVar14 = minps(auVar13,auVar34);
  fVar21 = auVar11._0_4_;
  fVar23 = auVar11._4_4_;
  fVar26 = auVar11._8_4_;
  fVar31 = auVar11._12_4_;
  fVar17 = fVar38 * local_1b8;
  fVar18 = fVar39 * fStack_1b4;
  fVar20 = fVar40 * fStack_1b0;
  fVar25 = (float)(~-(uint)(fVar22 <= 0.0) & (uint)((3.0 - fVar22 * fVar21 * fVar21) * fVar21 * 0.5)
                  ) * fVar25 * (0.0 - auVar14._0_4_) + (*param_8 - fVar32) * _DAT_1467f07e0 + fVar32
  ;
  fVar24 = (float)(~-(uint)(fVar24 <= 0.0) & (uint)((3.0 - fVar24 * fVar23 * fVar23) * fVar23 * 0.5)
                  ) * fVar28 * (0.0 - auVar14._4_4_) +
           (param_8[1] - fVar9) * fRam00000001467f07e4 + fVar9;
  fVar27 = (float)(~-(uint)(fVar27 <= 0.0) & (uint)((3.0 - fVar27 * fVar26 * fVar26) * fVar26 * 0.5)
                  ) * fVar29 * (0.0 - auVar14._8_4_) +
           (param_8[2] - fVar15) * fRam00000001467f07e8 + fVar15;
  fVar29 = (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar19 * fVar31 * fVar31) * fVar31 * 0.5)
                  ) * (fVar30 * param_10[3] - param_10[3] * fVar30) * (0.0 - auVar14._12_4_) +
           (param_8[3] - fVar16) * fRam00000001467f07ec + fVar16;
  fVar31 = fVar18 + fVar17 + fVar20;
  fVar19 = fVar18 + fVar17 + fVar20;
  fVar22 = fVar18 + fVar17 + fVar20;
  fVar20 = fVar18 + fVar17 + fVar20;
  fVar9 = fVar25 * local_1b8;
  fVar15 = fVar24 * fStack_1b4;
  fVar16 = fVar27 * fStack_1b0;
  fVar32 = *param_1;
  fVar21 = fVar15 + fVar9 + fVar16;
  fVar23 = fVar15 + fVar9 + fVar16;
  fVar26 = fVar15 + fVar9 + fVar16;
  fVar16 = fVar15 + fVar9 + fVar16;
  uVar4 = -(uint)(fVar21 < fVar31);
  uVar5 = -(uint)(fVar23 < fVar19);
  uVar6 = -(uint)(fVar26 < fVar22);
  uVar7 = -(uint)(fVar16 < fVar20);
  fVar33 = (float)(uVar4 & (uint)fVar25 | ~uVar4 & (uint)fVar38);
  fVar35 = (float)(uVar5 & (uint)fVar24 | ~uVar5 & (uint)fVar39);
  fVar36 = (float)(uVar6 & (uint)fVar27 | ~uVar6 & (uint)fVar40);
  fVar37 = (float)(uVar7 & (uint)fVar29 | ~uVar7 & (uint)fVar41);
  fVar18 = (float)(~uVar4 & (uint)fVar25 | uVar4 & (uint)fVar38);
  fVar24 = (float)(~uVar5 & (uint)fVar24 | uVar5 & (uint)fVar39);
  fVar27 = (float)(~uVar6 & (uint)fVar27 | uVar6 & (uint)fVar40);
  fVar29 = (float)(~uVar7 & (uint)fVar29 | uVar7 & (uint)fVar41);
  fVar28 = (float)(~uVar4 & (uint)(fVar32 - (fVar21 - fVar31)) |
                  (uint)(fVar32 - (fVar31 - fVar21)) & uVar4);
  fVar30 = (float)(~uVar5 & (uint)(fVar32 - (fVar23 - fVar19)) |
                  (uint)(fVar32 - (fVar19 - fVar23)) & uVar5);
  fVar38 = (float)(~uVar6 & (uint)(fVar32 - (fVar26 - fVar22)) |
                  (uint)(fVar32 - (fVar22 - fVar26)) & uVar6);
  fVar39 = (float)(~uVar7 & (uint)(fVar32 - (fVar16 - fVar20)) |
                  (uint)(fVar32 - (fVar20 - fVar16)) & uVar7);
  fVar9 = param_1[8];
  fVar15 = fVar9 * _DAT_1467f07e0 * local_1b8;
  fVar16 = fVar9 * fRam00000001467f07e4 * fStack_1b4;
  fVar21 = fVar9 * fRam00000001467f07e8 * fStack_1b0;
  fVar23 = fVar9 * fRam00000001467f07ec * fStack_1ac;
  lVar2 = 0;
  fVar26 = (fVar32 - fVar28) * local_1b8 + fVar33 + fVar9 * local_1b8;
  fVar31 = (fVar32 - fVar30) * fStack_1b4 + fVar35 + fVar9 * fStack_1b4;
  fVar17 = (fVar32 - fVar38) * fStack_1b0 + fVar36 + fVar9 * fStack_1b0;
  fVar32 = (fVar32 - fVar39) * fStack_1ac + fVar37 + fVar9 * fStack_1ac;
  fVar19 = fVar18 + fVar9 * local_1b8;
  fVar20 = fVar24 + fVar9 * fStack_1b4;
  fVar22 = fVar27 + fVar9 * fStack_1b0;
  fVar25 = fVar29 + fVar9 * fStack_1ac;
  fVar28 = (fVar28 - fVar9) * _DAT_1467f07e0 * local_1b8;
  fVar30 = (fVar30 - fVar9) * fRam00000001467f07e4 * fStack_1b4;
  fVar38 = (fVar38 - fVar9) * fRam00000001467f07e8 * fStack_1b0;
  fVar9 = (fVar39 - fVar9) * fRam00000001467f07ec * fStack_1ac;
  do {
    *(float *)((longlong)local_1a8 + lVar2) = fVar26;
    *(float *)((longlong)local_1a8 + lVar2 + 4) = fVar31;
    *(float *)((longlong)local_1a8 + lVar2 + 8) = fVar17;
    *(float *)((longlong)local_1a8 + lVar2 + 0xc) = fVar32;
    *(float *)((longlong)local_118 + lVar2 + 0x10) = fVar26;
    *(float *)((longlong)local_118 + lVar2 + 0x14) = fVar31;
    *(float *)((longlong)local_118 + lVar2 + 0x18) = fVar17;
    *(float *)((longlong)local_118 + lVar2 + 0x1c) = fVar32;
    fVar26 = fVar26 + fVar28;
    fVar31 = fVar31 + fVar30;
    fVar17 = fVar17 + fVar38;
    fVar32 = fVar32 + fVar9;
    *(float *)((longlong)local_1a8 + lVar2 + 0x10) = fVar19;
    *(float *)((longlong)local_1a8 + lVar2 + 0x14) = fVar20;
    *(float *)((longlong)local_1a8 + lVar2 + 0x18) = fVar22;
    *(float *)((longlong)local_1a8 + lVar2 + 0x1c) = fVar25;
    *(float *)((longlong)local_118 + lVar2 + 0x20) = fVar19;
    *(float *)((longlong)local_118 + lVar2 + 0x24) = fVar20;
    *(float *)((longlong)local_118 + lVar2 + 0x28) = fVar22;
    *(float *)((longlong)local_118 + lVar2 + 0x2c) = fVar25;
    fVar19 = fVar19 + fVar28;
    fVar20 = fVar20 + fVar30;
    fVar22 = fVar22 + fVar38;
    fVar25 = fVar25 + fVar9;
    *(float *)((longlong)local_118 + lVar2) = fVar33 + fVar15;
    *(float *)((longlong)local_118 + lVar2 + 4) = fVar35 + fVar16;
    *(float *)((longlong)local_118 + lVar2 + 8) = fVar36 + fVar21;
    *(float *)((longlong)local_118 + lVar2 + 0xc) = fVar37 + fVar23;
    *(float *)((longlong)local_1a8 + lVar2 + 0x20) = fVar18 + fVar15;
    *(float *)((longlong)local_1a8 + lVar2 + 0x24) = fVar24 + fVar16;
    *(float *)((longlong)local_1a8 + lVar2 + 0x28) = fVar27 + fVar21;
    *(float *)((longlong)local_1a8 + lVar2 + 0x2c) = fVar29 + fVar23;
    lVar2 = lVar2 + 0x30;
  } while (lVar2 < 0x90);
  local_1b8 = (0.0 - *param_3) * local_1b8;
  fStack_1b4 = (0.0 - param_3[1]) * fStack_1b4;
  fStack_1b0 = (0.0 - param_3[2]) * fStack_1b0;
  fStack_1ac = (0.0 - param_3[3]) * fStack_1ac;
  iVar1 = FUN_1437fe000(param_4,local_118,local_1a8,&local_1b8);
  uVar3 = 0xffffffff;
  if (iVar1 != 0) {
    uVar3 = 0xb;
  }
  return uVar3;
}



// FUNCTION 143801e80 FUN_143801e80 body=1881 status=ok
// SIG undefined FUN_143801e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143801e80(float *param_1,undefined8 param_2,float *param_3,undefined8 param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,undefined1 (*param_9) [16],float *param_10
             ,undefined8 param_11,undefined8 param_12)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
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
  undefined1 local_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
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
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  fVar46 = *(float *)*param_9;
  fVar47 = *(float *)(*param_9 + 4);
  fVar48 = *(float *)(*param_9 + 8);
  fVar9 = *(float *)(*param_9 + 0xc);
  _local_168 = *param_9;
  local_158 = *param_10;
  fStack_154 = param_10[1];
  fStack_150 = param_10[2];
  fStack_14c = param_10[3];
  fVar32 = *param_5;
  fVar34 = param_5[1];
  fVar36 = param_5[2];
  fVar38 = param_5[3];
  fVar39 = *param_6;
  fVar41 = param_6[1];
  fVar43 = param_6[2];
  fVar45 = param_6[3];
  local_178._0_4_ = (*param_7 - fVar32) * _DAT_1467f07e0 + fVar32;
  local_178._4_4_ = (param_7[1] - fVar34) * fRam00000001467f07e4 + fVar34;
  fStack_170 = (param_7[2] - fVar36) * fRam00000001467f07e8 + fVar36;
  fStack_16c = (param_7[3] - fVar38) * fRam00000001467f07ec + fVar38;
  fVar32 = fVar32 - *param_7;
  fVar34 = fVar34 - param_7[1];
  fVar36 = fVar36 - param_7[2];
  fVar38 = fVar38 - param_7[3];
  local_148 = (*param_8 - fVar39) * _DAT_1467f07e0 + fVar39;
  fStack_144 = (param_8[1] - fVar41) * fRam00000001467f07e4 + fVar41;
  fStack_140 = (param_8[2] - fVar43) * fRam00000001467f07e8 + fVar43;
  fStack_13c = (param_8[3] - fVar45) * fRam00000001467f07ec + fVar45;
  fVar39 = fVar39 - *param_8;
  fVar41 = fVar41 - param_8[1];
  fVar43 = fVar43 - param_8[2];
  fVar45 = fVar45 - param_8[3];
  fVar33 = fVar34 * fVar46 - fVar47 * fVar32;
  fVar35 = fVar36 * fVar47 - fVar48 * fVar34;
  fVar37 = fVar32 * fVar48 - fVar46 * fVar36;
  fVar32 = fVar35 * fVar35;
  fVar34 = fVar37 * fVar37;
  auVar10._8_4_ = fVar33 * fVar33;
  auVar10._4_4_ = auVar10._8_4_;
  auVar10._0_4_ = auVar10._8_4_;
  auVar10._12_4_ = auVar10._8_4_;
  auVar18._0_4_ = fVar34 + fVar32 + auVar10._8_4_;
  auVar18._4_4_ = fVar34 + fVar32 + auVar10._8_4_;
  auVar18._8_4_ = fVar34 + fVar32 + auVar10._8_4_;
  auVar18._12_4_ = fVar34 + fVar32 + auVar10._8_4_;
  auVar10 = rsqrtps(auVar10,auVar18);
  fVar32 = auVar10._0_4_;
  fVar34 = auVar10._4_4_;
  fVar36 = auVar10._8_4_;
  fVar40 = auVar10._12_4_;
  fVar35 = (float)(~-(uint)(auVar18._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar18._0_4_ * fVar32 * fVar32) * fVar32 * 0.5)) * fVar35 * -0.001
           + (float)local_178._0_4_;
  fVar37 = (float)(~-(uint)(auVar18._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar18._4_4_ * fVar34 * fVar34) * fVar34 * 0.5)) * fVar37 * -0.001
           + (float)local_178._4_4_;
  fVar33 = (float)(~-(uint)(auVar18._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar18._8_4_ * fVar36 * fVar36) * fVar36 * 0.5)) * fVar33 * -0.001
           + fStack_170;
  fVar49 = (float)(~-(uint)(auVar18._12_4_ <= 0.0) &
                  (uint)((3.0 - auVar18._12_4_ * fVar40 * fVar40) * fVar40 * 0.5)) *
           (fVar38 * fVar9 - fVar9 * fVar38) * -0.001 + fStack_16c;
  fVar40 = fVar41 * local_158 - fStack_154 * fVar39;
  fVar41 = fVar43 * fStack_154 - fStack_150 * fVar41;
  fVar43 = fVar39 * fStack_150 - local_158 * fVar43;
  fVar32 = fVar41 * fVar41;
  fVar34 = fVar43 * fVar43;
  auVar11._8_4_ = fVar40 * fVar40;
  auVar11._4_4_ = auVar11._8_4_;
  auVar11._0_4_ = auVar11._8_4_;
  auVar11._12_4_ = auVar11._8_4_;
  auVar19._0_4_ = fVar34 + fVar32 + auVar11._8_4_;
  auVar19._4_4_ = fVar34 + fVar32 + auVar11._8_4_;
  auVar19._8_4_ = fVar34 + fVar32 + auVar11._8_4_;
  auVar19._12_4_ = fVar34 + fVar32 + auVar11._8_4_;
  auVar10 = rsqrtps(auVar11,auVar19);
  fVar34 = auVar10._0_4_;
  fVar36 = auVar10._4_4_;
  fVar38 = auVar10._8_4_;
  fVar39 = auVar10._12_4_;
  fVar32 = param_1[0xb];
  fVar34 = (float)(~-(uint)(auVar19._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar19._0_4_ * fVar34 * fVar34) * fVar34 * 0.5)) * fVar41 * -0.001
           + local_148;
  fVar36 = (float)(~-(uint)(auVar19._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar19._4_4_ * fVar36 * fVar36) * fVar36 * 0.5)) * fVar43 * -0.001
           + fStack_144;
  fVar38 = (float)(~-(uint)(auVar19._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar19._8_4_ * fVar38 * fVar38) * fVar38 * 0.5)) * fVar40 * -0.001
           + fStack_140;
  fVar39 = (float)(~-(uint)(auVar19._12_4_ <= 0.0) &
                  (uint)((3.0 - auVar19._12_4_ * fVar39 * fVar39) * fVar39 * 0.5)) *
           (fVar45 * fStack_14c - fStack_14c * fVar45) * -0.001 + fStack_13c;
  if (fVar32 < _DAT_1467f0a00) {
    fVar46 = local_158 + fVar46;
    fVar47 = fStack_154 + fVar47;
    fVar48 = fStack_150 + fVar48;
    local_178._0_4_ = fVar35 - (float)local_178._0_4_;
    local_178._4_4_ = fVar37 - (float)local_178._4_4_;
    fStack_170 = fVar33 - fStack_170;
    fVar26 = fVar34 - local_148;
    fVar27 = fVar36 - fStack_144;
    fVar28 = fVar38 - fStack_140;
    fVar9 = (float)local_178._0_4_ * (float)local_178._0_4_;
    fVar41 = (float)local_178._4_4_ * (float)local_178._4_4_;
    auVar12._8_4_ = fStack_170 * fStack_170;
    auVar12._4_4_ = auVar12._8_4_;
    auVar12._0_4_ = auVar12._8_4_;
    auVar12._12_4_ = auVar12._8_4_;
    fVar23 = fVar41 + fVar9 + auVar12._8_4_;
    fVar24 = fVar41 + fVar9 + auVar12._8_4_;
    fVar25 = fVar41 + fVar9 + auVar12._8_4_;
    auVar2._4_4_ = fVar24;
    auVar2._0_4_ = fVar23;
    auVar2._8_4_ = fVar25;
    auVar2._12_4_ = fVar41 + fVar9 + auVar12._8_4_;
    auVar10 = rsqrtps(auVar12,auVar2);
    fVar9 = auVar10._0_4_;
    fVar43 = auVar10._4_4_;
    fVar40 = auVar10._8_4_;
    fVar41 = fVar26 * fVar26;
    fVar45 = fVar27 * fVar27;
    auVar13._8_4_ = fVar28 * fVar28;
    fVar29 = (float)local_178._0_4_ *
             (float)(~-(uint)(fVar23 <= 0.0) & (uint)((3.0 - fVar23 * fVar9 * fVar9) * fVar9 * 0.5))
    ;
    fVar30 = (float)local_178._4_4_ *
             (float)(~-(uint)(fVar24 <= 0.0) &
                    (uint)((3.0 - fVar24 * fVar43 * fVar43) * fVar43 * 0.5));
    fVar31 = fStack_170 *
             (float)(~-(uint)(fVar25 <= 0.0) &
                    (uint)((3.0 - fVar25 * fVar40 * fVar40) * fVar40 * 0.5));
    auVar13._4_4_ = auVar13._8_4_;
    auVar13._0_4_ = auVar13._8_4_;
    auVar13._12_4_ = auVar13._8_4_;
    fVar23 = fVar45 + fVar41 + auVar13._8_4_;
    fVar24 = fVar45 + fVar41 + auVar13._8_4_;
    fVar25 = fVar45 + fVar41 + auVar13._8_4_;
    auVar3._4_4_ = fVar24;
    auVar3._0_4_ = fVar23;
    auVar3._8_4_ = fVar25;
    auVar3._12_4_ = fVar45 + fVar41 + auVar13._8_4_;
    auVar10 = rsqrtps(auVar13,auVar3);
    fVar9 = auVar10._0_4_;
    fVar43 = auVar10._4_4_;
    fVar40 = auVar10._8_4_;
    fVar41 = fVar46 * fVar46;
    fVar45 = fVar47 * fVar47;
    auVar14._8_4_ = fVar48 * fVar48;
    fVar26 = fVar26 * (float)(~-(uint)(fVar23 <= 0.0) &
                             (uint)((3.0 - fVar23 * fVar9 * fVar9) * fVar9 * 0.5));
    fVar27 = fVar27 * (float)(~-(uint)(fVar24 <= 0.0) &
                             (uint)((3.0 - fVar24 * fVar43 * fVar43) * fVar43 * 0.5));
    fVar28 = fVar28 * (float)(~-(uint)(fVar25 <= 0.0) &
                             (uint)((3.0 - fVar25 * fVar40 * fVar40) * fVar40 * 0.5));
    auVar14._4_4_ = auVar14._8_4_;
    auVar14._0_4_ = auVar14._8_4_;
    auVar14._12_4_ = auVar14._8_4_;
    fVar40 = fVar45 + fVar41 + auVar14._8_4_;
    fVar23 = fVar45 + fVar41 + auVar14._8_4_;
    fVar24 = fVar45 + fVar41 + auVar14._8_4_;
    fVar25 = (fVar26 - fVar29) * _DAT_1467f07e0;
    fVar42 = (fVar27 - fVar30) * fRam00000001467f07e4;
    fVar44 = (fVar28 - fVar31) * fRam00000001467f07e8;
    auVar5._4_4_ = fVar23;
    auVar5._0_4_ = fVar40;
    auVar5._8_4_ = fVar24;
    auVar5._12_4_ = fVar45 + fVar41 + auVar14._8_4_;
    auVar10 = rsqrtps(auVar14,auVar5);
    fVar41 = auVar10._0_4_;
    fVar43 = auVar10._4_4_;
    fVar45 = auVar10._8_4_;
    _local_178 = ZEXT416((uint)(fVar27 * fVar30 + fVar26 * fVar29 + fVar28 * fVar31));
    fVar9 = (float)FUN_143715de0(local_178);
    fVar9 = 1.5707964 - fVar9;
    if ((float)(~-(uint)(fVar23 <= 0.0) & (uint)((3.0 - fVar23 * fVar43 * fVar43) * fVar43 * 0.5)) *
        fVar47 * (fVar42 + fVar30) +
        (float)(~-(uint)(fVar40 <= 0.0) & (uint)((3.0 - fVar40 * fVar41 * fVar41) * fVar41 * 0.5)) *
        fVar46 * (fVar25 + fVar29) +
        (float)(~-(uint)(fVar24 <= 0.0) & (uint)((3.0 - fVar24 * fVar45 * fVar45) * fVar45 * 0.5)) *
        fVar48 * (fVar44 + fVar31) < 0.0) {
      fVar9 = _DAT_1467f0a30 - fVar9;
    }
    if ((fVar9 < _DAT_1467f0a00) && (fVar32 < fVar9)) {
      _local_178 = ZEXT416((uint)(fStack_154 * (float)local_168._4_4_ +
                                  local_158 * (float)local_168._0_4_ + fStack_150 * fStack_160));
      FUN_143715de0(local_178);
      FUN_14375e930(local_c8,param_11);
      FUN_14375e930(&local_138,param_12);
      FUN_143713650(&local_b8,local_c8,local_168);
      fVar32 = local_b8 * local_b8;
      fVar46 = fStack_b4 * fStack_b4;
      auVar15._8_4_ = fStack_b0 * fStack_b0;
      auVar15._4_4_ = auVar15._8_4_;
      auVar15._0_4_ = auVar15._8_4_;
      auVar15._12_4_ = auVar15._8_4_;
      auVar20._0_4_ = fVar46 + fVar32 + auVar15._8_4_;
      auVar20._4_4_ = fVar46 + fVar32 + auVar15._8_4_;
      auVar20._8_4_ = fVar46 + fVar32 + auVar15._8_4_;
      auVar20._12_4_ = fVar46 + fVar32 + auVar15._8_4_;
      auVar10 = rsqrtps(auVar15,auVar20);
      fVar32 = auVar10._0_4_;
      fVar46 = auVar10._4_4_;
      fVar47 = auVar10._8_4_;
      fVar48 = auVar10._12_4_;
      auVar21._0_4_ = (3.0 - fVar32 * auVar20._0_4_ * fVar32) * fVar32 * 0.5 * local_b8;
      auVar21._4_4_ = (3.0 - fVar46 * auVar20._4_4_ * fVar46) * fVar46 * 0.5 * fStack_b4;
      auVar21._8_4_ = (3.0 - fVar47 * auVar20._8_4_ * fVar47) * fVar47 * 0.5 * fStack_b0;
      auVar21._12_4_ = (3.0 - fVar48 * auVar20._12_4_ * fVar48) * fVar48 * 0.5 * fStack_ac;
      auVar16._0_4_ = ~-(uint)(auVar20._0_4_ < _DAT_1467f0900) & (uint)auVar21._0_4_;
      auVar16._4_4_ = ~-(uint)(auVar20._4_4_ < fRam00000001467f0904) & (uint)auVar21._4_4_;
      auVar16._8_4_ = ~-(uint)(auVar20._8_4_ < fRam00000001467f0908) & (uint)auVar21._8_4_;
      auVar16._12_4_ = ~-(uint)(auVar20._12_4_ < fRam00000001467f090c) & (uint)auVar21._12_4_;
      auVar1._4_4_ = uRam00000001467f0894 & -(uint)(auVar20._4_4_ < fRam00000001467f0904);
      auVar1._0_4_ = _DAT_1467f0890 & -(uint)(auVar20._0_4_ < _DAT_1467f0900);
      auVar1._8_4_ = uRam00000001467f0898 & -(uint)(auVar20._8_4_ < fRam00000001467f0908);
      auVar1._12_4_ = uRam00000001467f089c & -(uint)(auVar20._12_4_ < fRam00000001467f090c);
      _local_168 = auVar16 | auVar1;
      FUN_143713650(&local_128,&local_138,&local_158);
      fVar32 = local_128 * local_128;
      fVar46 = fStack_124 * fStack_124;
      fVar47 = fStack_120 * fStack_120;
      fVar41 = fVar46 + fVar32 + fVar47;
      fVar43 = fVar46 + fVar32 + fVar47;
      fVar45 = fVar46 + fVar32 + fVar47;
      fVar47 = fVar46 + fVar32 + fVar47;
      auVar4._4_4_ = fVar43;
      auVar4._0_4_ = fVar41;
      auVar4._8_4_ = fVar45;
      auVar4._12_4_ = fVar47;
      auVar10 = rsqrtps(auVar21,auVar4);
      fVar32 = auVar10._0_4_;
      fVar46 = auVar10._4_4_;
      fVar48 = auVar10._8_4_;
      fVar9 = auVar10._12_4_;
      local_158 = (float)(~-(uint)(fVar41 < _DAT_1467f0900) &
                          (uint)((3.0 - fVar32 * fVar41 * fVar32) * fVar32 * 0.5 * local_128) |
                         _DAT_1467f0890 & -(uint)(fVar41 < _DAT_1467f0900));
      fStack_154 = (float)(~-(uint)(fVar43 < fRam00000001467f0904) &
                           (uint)((3.0 - fVar46 * fVar43 * fVar46) * fVar46 * 0.5 * fStack_124) |
                          uRam00000001467f0894 & -(uint)(fVar43 < fRam00000001467f0904));
      fStack_150 = (float)(~-(uint)(fVar45 < fRam00000001467f0908) &
                           (uint)((3.0 - fVar48 * fVar45 * fVar48) * fVar48 * 0.5 * fStack_120) |
                          uRam00000001467f0898 & -(uint)(fVar45 < fRam00000001467f0908));
      fStack_14c = (float)(~-(uint)(fVar47 < fRam00000001467f090c) &
                           (uint)((3.0 - fVar9 * fVar47 * fVar9) * fVar9 * 0.5 * fStack_11c) |
                          uRam00000001467f089c & -(uint)(fVar47 < fRam00000001467f090c));
    }
    fVar46 = (float)local_168._0_4_;
    fVar47 = (float)local_168._4_4_;
    fVar48 = fStack_160;
    fVar9 = fStack_15c;
  }
  fVar32 = *param_3;
  fVar41 = param_3[1];
  fVar43 = param_3[2];
  fVar45 = param_3[3];
  fVar26 = local_158 + fVar46;
  fVar27 = fStack_154 + fVar47;
  fVar28 = fStack_150 + fVar48;
  fVar40 = fVar26 * fVar26;
  fVar23 = fVar27 * fVar27;
  auVar17._8_4_ = fVar28 * fVar28;
  local_e8 = (fVar34 - fVar35) * 0.45 + fVar35;
  fStack_e4 = (fVar36 - fVar37) * 0.45 + fVar37;
  fStack_e0 = (fVar38 - fVar33) * 0.45 + fVar33;
  fStack_dc = (fVar39 - fVar49) * 0.45 + fVar49;
  local_118 = fVar46 * fVar32 + fVar35;
  fStack_114 = fVar47 * fVar41 + fVar37;
  fStack_110 = fVar48 * fVar43 + fVar33;
  fStack_10c = fVar9 * fVar45 + fVar49;
  auVar17._4_4_ = auVar17._8_4_;
  auVar17._0_4_ = auVar17._8_4_;
  auVar17._12_4_ = auVar17._8_4_;
  auVar22._0_4_ = fVar23 + fVar40 + auVar17._8_4_;
  auVar22._4_4_ = fVar23 + fVar40 + auVar17._8_4_;
  auVar22._8_4_ = fVar23 + fVar40 + auVar17._8_4_;
  auVar22._12_4_ = fVar23 + fVar40 + auVar17._8_4_;
  auVar10 = rsqrtps(auVar17,auVar22);
  fVar40 = auVar10._0_4_;
  fVar23 = auVar10._4_4_;
  fVar24 = auVar10._8_4_;
  fVar25 = auVar10._12_4_;
  fVar26 = fVar26 * (float)(~-(uint)(auVar22._0_4_ <= 0.0) &
                           (uint)((3.0 - fVar40 * auVar22._0_4_ * fVar40) * fVar40 * 0.5));
  fVar27 = fVar27 * (float)(~-(uint)(auVar22._4_4_ <= 0.0) &
                           (uint)((3.0 - fVar23 * auVar22._4_4_ * fVar23) * fVar23 * 0.5));
  fVar28 = fVar28 * (float)(~-(uint)(auVar22._8_4_ <= 0.0) &
                           (uint)((3.0 - fVar24 * auVar22._8_4_ * fVar24) * fVar24 * 0.5));
  fVar40 = (fStack_14c + fVar9) *
           (float)(~-(uint)(auVar22._12_4_ <= 0.0) &
                  (uint)((3.0 - fVar25 * auVar22._12_4_ * fVar25) * fVar25 * 0.5));
  local_d8 = local_158 * fVar32 + fVar34;
  fStack_d4 = fStack_154 * fVar41 + fVar36;
  fStack_d0 = fStack_150 * fVar43 + fVar38;
  fStack_cc = fStack_14c * fVar45 + fVar39;
  local_f8 = fVar32 * fVar26 + local_e8;
  fStack_f4 = fVar41 * fVar27 + fStack_e4;
  fStack_f0 = fVar43 * fVar28 + fStack_e0;
  fStack_ec = fVar45 * fVar40 + fStack_dc;
  fVar32 = *param_1;
  local_108 = fVar46 * fVar32 + fVar35;
  fStack_104 = fVar47 * fVar32 + fVar37;
  fStack_100 = fVar48 * fVar32 + fVar33;
  fStack_fc = fVar9 * fVar32 + fVar49;
  local_e8 = local_e8 + fVar32 * fVar26;
  fStack_e4 = fStack_e4 + fVar32 * fVar27;
  fStack_e0 = fStack_e0 + fVar32 * fVar28;
  fStack_dc = fStack_dc + fVar32 * fVar40;
  local_148 = local_158 * fVar32 + fVar34;
  fStack_144 = fStack_154 * fVar32 + fVar36;
  fStack_140 = fStack_150 * fVar32 + fVar38;
  fStack_13c = fStack_14c * fVar32 + fVar39;
  iVar6 = FUN_1437fdf20(param_4,&local_108,&local_118);
  if (((iVar6 == 0) && (iVar6 = FUN_1437fdf20(param_4,&local_e8,&local_f8), iVar6 == 0)) &&
     (iVar6 = FUN_1437fdf20(param_4,&local_148,&local_d8), fVar48 = fRam00000001467f07fc,
     fVar47 = fRam00000001467f07f8, fVar46 = fRam00000001467f07f4, fVar32 = _DAT_1467f07f0,
     iVar6 == 0)) {
    iVar6 = 0;
    fVar9 = _DAT_1467f07e0;
    fVar34 = fRam00000001467f07e4;
    fVar36 = fRam00000001467f07e8;
    fVar38 = fRam00000001467f07ec;
    do {
      fVar39 = fVar9 * fVar32;
      fVar41 = fVar34 * fVar46;
      fVar43 = fVar36 * fVar47;
      fVar45 = fVar38 * fVar48;
      local_128 = (local_118 - local_108) * fVar39 + local_108;
      fStack_124 = (fStack_114 - fStack_104) * fVar41 + fStack_104;
      fStack_120 = (fStack_110 - fStack_100) * fVar43 + fStack_100;
      fStack_11c = (fStack_10c - fStack_fc) * fVar45 + fStack_fc;
      local_178._4_4_ = (fStack_f4 - fStack_e4) * fVar41 + fStack_e4;
      local_178._0_4_ = (local_f8 - local_e8) * fVar39 + local_e8;
      fStack_170 = (fStack_f0 - fStack_e0) * fVar43 + fStack_e0;
      fStack_16c = (fStack_ec - fStack_dc) * fVar45 + fStack_dc;
      local_138 = (local_d8 - local_148) * fVar39 + local_148;
      fStack_134 = (fStack_d4 - fStack_144) * fVar41 + fStack_144;
      fStack_130 = (fStack_d0 - fStack_140) * fVar43 + fStack_140;
      fStack_12c = (fStack_cc - fStack_13c) * fVar45 + fStack_13c;
      iVar7 = FUN_1437fdf20(param_4,&local_128,local_178);
      if ((iVar7 != 0) || (iVar7 = FUN_1437fdf20(param_4,local_178,&local_138), iVar7 != 0))
      goto LAB_143802583;
      fVar9 = fVar9 + DAT_1467f06f0;
      fVar34 = fVar34 + fRam00000001467f06f4;
      fVar36 = fVar36 + fRam00000001467f06f8;
      fVar38 = fVar38 + fRam00000001467f06fc;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    uVar8 = 0xffffffff;
  }
  else {
LAB_143802583:
    uVar8 = 0xb;
  }
  return uVar8;
}



// FUNCTION 1438025e0 FUN_1438025e0 body=587 status=ok
// SIG undefined FUN_1438025e0(void)

float * FUN_1438025e0(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
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
  undefined1 auVar39 [16];
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
  
  fVar21 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x40);
  fVar24 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x44);
  fVar25 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x48);
  auVar39._0_12_ = ZEXT812(0);
  auVar39._12_4_ = 0;
  fVar3 = *(float *)(param_1 + 0x5c);
  fVar4 = *(float *)(param_1 + 0x4c);
  fVar49 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x40);
  fVar50 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x44);
  fVar51 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x7c);
  fVar6 = *(float *)(param_1 + 0x6c);
  fVar52 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60);
  fVar53 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 100);
  fVar54 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68);
  fVar11 = fVar49 * fVar52;
  fVar17 = fVar50 * fVar53;
  fVar18 = fVar51 * fVar54;
  fVar46 = fVar17 + fVar11 + fVar18;
  fVar47 = fVar17 + fVar11 + fVar18;
  fVar48 = fVar17 + fVar11 + fVar18;
  fVar18 = fVar17 + fVar11 + fVar18;
  fVar11 = fVar49 * fVar21;
  fVar17 = fVar50 * fVar24;
  fVar19 = fVar51 * fVar25;
  fVar21 = fVar21 * fVar52;
  fVar24 = fVar24 * fVar53;
  fVar25 = fVar25 * fVar54;
  fVar43 = fVar17 + fVar11 + fVar19;
  fVar44 = fVar17 + fVar11 + fVar19;
  fVar45 = fVar17 + fVar11 + fVar19;
  fVar19 = fVar17 + fVar11 + fVar19;
  fVar11 = fVar49 * fVar49;
  fVar17 = fVar50 * fVar50;
  fVar20 = fVar51 * fVar51;
  fVar40 = fVar24 + fVar21 + fVar25;
  fVar41 = fVar24 + fVar21 + fVar25;
  fVar42 = fVar24 + fVar21 + fVar25;
  fVar25 = fVar24 + fVar21 + fVar25;
  fVar27 = fVar17 + fVar11 + fVar20;
  fVar28 = fVar17 + fVar11 + fVar20;
  fVar29 = fVar17 + fVar11 + fVar20;
  fVar20 = fVar17 + fVar11 + fVar20;
  fVar11 = fVar52 * fVar52;
  fVar17 = fVar53 * fVar53;
  auVar12._8_4_ = fVar54 * fVar54;
  auVar12._4_4_ = auVar12._8_4_;
  auVar12._0_4_ = auVar12._8_4_;
  auVar12._12_4_ = auVar12._8_4_;
  fVar35 = fVar17 + fVar11 + auVar12._8_4_;
  fVar36 = fVar17 + fVar11 + auVar12._8_4_;
  fVar37 = fVar17 + fVar11 + auVar12._8_4_;
  fVar38 = fVar17 + fVar11 + auVar12._8_4_;
  auVar2._4_4_ = fVar36;
  auVar2._0_4_ = fVar35;
  auVar2._8_4_ = fVar37;
  auVar2._12_4_ = fVar38;
  auVar13 = rcpps(auVar12,auVar2);
  fVar11 = fVar35 * fVar27 - fVar46 * fVar46;
  fVar17 = fVar36 * fVar28 - fVar47 * fVar47;
  fVar21 = fVar37 * fVar29 - fVar48 * fVar48;
  fVar24 = fVar38 * fVar20 - fVar18 * fVar18;
  auVar26._4_4_ = fVar17;
  auVar26._0_4_ = fVar11;
  auVar26._8_4_ = fVar21;
  auVar26._12_4_ = fVar24;
  auVar26 = rcpps(in_XMM3,auVar26);
  fVar31 = (2.0 - fVar35 * auVar13._0_4_) * auVar13._0_4_;
  fVar32 = (2.0 - fVar36 * auVar13._4_4_) * auVar13._4_4_;
  fVar33 = (2.0 - fVar37 * auVar13._8_4_) * auVar13._8_4_;
  fVar34 = (2.0 - fVar38 * auVar13._12_4_) * auVar13._12_4_;
  auVar1._4_4_ = fVar28;
  auVar1._0_4_ = fVar27;
  auVar1._8_4_ = fVar29;
  auVar1._12_4_ = fVar20;
  auVar13 = rcpps(auVar13,auVar1);
  fVar27 = (2.0 - auVar13._0_4_ * fVar27) * auVar13._0_4_;
  fVar28 = (2.0 - auVar13._4_4_ * fVar28) * auVar13._4_4_;
  fVar29 = (2.0 - auVar13._8_4_ * fVar29) * auVar13._8_4_;
  fVar30 = (2.0 - auVar13._12_4_ * fVar20) * auVar13._12_4_;
  fVar11 = (float)(~-(uint)(fVar11 == 0.0) & (uint)((2.0 - fVar11 * auVar26._0_4_) * auVar26._0_4_))
           * (fVar35 * fVar43 - fVar40 * fVar46);
  fVar17 = (float)(~-(uint)(fVar17 == 0.0) & (uint)((2.0 - fVar17 * auVar26._4_4_) * auVar26._4_4_))
           * (fVar36 * fVar44 - fVar41 * fVar47);
  fVar20 = (float)(~-(uint)(fVar21 == 0.0) & (uint)((2.0 - fVar21 * auVar26._8_4_) * auVar26._8_4_))
           * (fVar37 * fVar45 - fVar42 * fVar48);
  fVar21 = (float)(~-(uint)(fVar24 == 0.0) &
                  (uint)((2.0 - fVar24 * auVar26._12_4_) * auVar26._12_4_)) *
           (fVar38 * fVar19 - fVar25 * fVar18);
  uVar7 = -(uint)(fVar11 < DAT_1467f06f0);
  uVar8 = -(uint)(fVar17 < fRam00000001467f06f4);
  uVar9 = -(uint)(fVar20 < fRam00000001467f06f8);
  uVar10 = -(uint)(fVar21 < fRam00000001467f06fc);
  auVar14._0_4_ = (uint)fVar11 & uVar7;
  auVar14._4_4_ = (uint)fVar17 & uVar8;
  auVar14._8_4_ = (uint)fVar20 & uVar9;
  auVar14._12_4_ = (uint)fVar21 & uVar10;
  auVar13._4_4_ = ~uVar8 & (uint)fRam00000001467f06f4;
  auVar13._0_4_ = ~uVar7 & (uint)DAT_1467f06f0;
  auVar13._8_4_ = ~uVar9 & (uint)fRam00000001467f06f8;
  auVar13._12_4_ = ~uVar10 & (uint)fRam00000001467f06fc;
  auVar13 = maxps(ZEXT816(0),auVar14 | auVar13);
  fVar11 = auVar13._0_4_ * fVar31 * fVar46 - fVar31 * fVar40;
  fVar17 = auVar13._4_4_ * fVar32 * fVar47 - fVar32 * fVar41;
  fVar20 = auVar13._8_4_ * fVar33 * fVar48 - fVar33 * fVar42;
  fVar21 = auVar13._12_4_ * fVar34 * fVar18 - fVar34 * fVar25;
  uVar7 = -(uint)(fVar11 < DAT_1467f06f0);
  uVar8 = -(uint)(fVar17 < fRam00000001467f06f4);
  uVar9 = -(uint)(fVar20 < fRam00000001467f06f8);
  uVar10 = -(uint)(fVar21 < fRam00000001467f06fc);
  auVar22._0_4_ = (uint)fVar11 & uVar7;
  auVar22._4_4_ = (uint)fVar17 & uVar8;
  auVar22._8_4_ = (uint)fVar20 & uVar9;
  auVar22._12_4_ = (uint)fVar21 & uVar10;
  auVar15._0_4_ = ~uVar7 & (uint)DAT_1467f06f0;
  auVar15._4_4_ = ~uVar8 & (uint)fRam00000001467f06f4;
  auVar15._8_4_ = ~uVar9 & (uint)fRam00000001467f06f8;
  auVar15._12_4_ = ~uVar10 & (uint)fRam00000001467f06fc;
  auVar13 = maxps(ZEXT816(0),auVar15 | auVar22);
  fVar17 = fVar27 * fVar46 * auVar13._0_4_ + fVar27 * fVar43;
  fVar20 = fVar28 * fVar47 * auVar13._4_4_ + fVar28 * fVar44;
  fVar21 = fVar29 * fVar48 * auVar13._8_4_ + fVar29 * fVar45;
  fVar18 = fVar30 * fVar18 * auVar13._12_4_ + fVar30 * fVar19;
  fVar11 = *(float *)(param_1 + 0x6c);
  uVar7 = -(uint)(fVar17 < DAT_1467f06f0);
  uVar8 = -(uint)(fVar20 < fRam00000001467f06f4);
  uVar9 = -(uint)(fVar21 < fRam00000001467f06f8);
  uVar10 = -(uint)(fVar18 < fRam00000001467f06fc);
  auVar23._0_4_ = (uint)fVar17 & uVar7;
  auVar23._4_4_ = (uint)fVar20 & uVar8;
  auVar23._8_4_ = (uint)fVar21 & uVar9;
  auVar23._12_4_ = (uint)fVar18 & uVar10;
  auVar16._0_4_ = ~uVar7 & (uint)DAT_1467f06f0;
  auVar16._4_4_ = ~uVar8 & (uint)fRam00000001467f06f4;
  auVar16._8_4_ = ~uVar9 & (uint)fRam00000001467f06f8;
  auVar16._12_4_ = ~uVar10 & (uint)fRam00000001467f06fc;
  auVar26 = maxps(auVar39,auVar16 | auVar23);
  fVar17 = *(float *)(param_1 + 0x4c);
  fVar18 = (auVar26._0_4_ * fVar49 + *(float *)(param_1 + 0x40)) -
           (auVar13._0_4_ * fVar52 + *(float *)(param_1 + 0x60));
  fVar19 = (auVar26._4_4_ * fVar50 + *(float *)(param_1 + 0x44)) -
           (auVar13._4_4_ * fVar53 + *(float *)(param_1 + 100));
  fVar20 = (auVar26._8_4_ * fVar51 + *(float *)(param_1 + 0x48)) -
           (auVar13._8_4_ * fVar54 + *(float *)(param_1 + 0x68));
  *param_3 = fVar18;
  param_3[1] = fVar19;
  param_3[2] = fVar20;
  param_3[3] = (auVar26._12_4_ * (fVar3 - fVar4) + fVar17) -
               (auVar13._12_4_ * (fVar5 - fVar6) + fVar11);
  fVar18 = fVar18 * fVar18;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  *param_2 = fVar19 + fVar18 + fVar20;
  param_2[1] = fVar19 + fVar18 + fVar20;
  param_2[2] = fVar19 + fVar18 + fVar20;
  param_2[3] = fVar19 + fVar18 + fVar20;
  return param_2;
}



// FUNCTION 143802830 FUN_143802830 body=52 status=ok
// SIG undefined FUN_143802830(void)

void FUN_143802830(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)param_3 = *(undefined8 *)param_1;
  *(undefined8 *)(param_3 + 2) = uVar4;
  fVar5 = *param_1 * *param_2;
  fVar6 = param_1[1] * param_2[1];
  fVar7 = param_1[2] * param_2[2];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_3 = *param_3 - (fVar6 + fVar5 + fVar7) * *param_2;
  param_3[1] = param_3[1] - (fVar6 + fVar5 + fVar7) * fVar1;
  param_3[2] = param_3[2] - (fVar6 + fVar5 + fVar7) * fVar2;
  param_3[3] = param_3[3] - (fVar6 + fVar5 + fVar7) * fVar3;
  return;
}



// FUNCTION 143802870 FUN_143802870 body=609 status=ok
// SIG undefined FUN_143802870(void)

float * FUN_143802870(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
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
  undefined1 auVar35 [16];
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
  
  auVar35._0_12_ = ZEXT812(0);
  auVar35._12_4_ = 0;
  fVar17 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x80);
  fVar20 = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x84);
  fVar21 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x88);
  fVar45 = *(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x80);
  fVar46 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x84);
  fVar47 = *(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x88);
  fVar48 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa0);
  fVar49 = *(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa4);
  fVar50 = *(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8);
  fVar7 = fVar45 * fVar48;
  fVar13 = fVar46 * fVar49;
  fVar14 = fVar47 * fVar50;
  fVar42 = fVar13 + fVar7 + fVar14;
  fVar43 = fVar13 + fVar7 + fVar14;
  fVar44 = fVar13 + fVar7 + fVar14;
  fVar14 = fVar13 + fVar7 + fVar14;
  fVar7 = fVar45 * fVar17;
  fVar13 = fVar46 * fVar20;
  fVar15 = fVar47 * fVar21;
  fVar17 = fVar17 * fVar48;
  fVar20 = fVar20 * fVar49;
  fVar21 = fVar21 * fVar50;
  fVar39 = fVar13 + fVar7 + fVar15;
  fVar40 = fVar13 + fVar7 + fVar15;
  fVar41 = fVar13 + fVar7 + fVar15;
  fVar15 = fVar13 + fVar7 + fVar15;
  fVar7 = fVar45 * fVar45;
  fVar13 = fVar46 * fVar46;
  fVar16 = fVar47 * fVar47;
  fVar36 = fVar20 + fVar17 + fVar21;
  fVar37 = fVar20 + fVar17 + fVar21;
  fVar38 = fVar20 + fVar17 + fVar21;
  fVar21 = fVar20 + fVar17 + fVar21;
  fVar23 = fVar13 + fVar7 + fVar16;
  fVar24 = fVar13 + fVar7 + fVar16;
  fVar25 = fVar13 + fVar7 + fVar16;
  fVar16 = fVar13 + fVar7 + fVar16;
  fVar7 = fVar48 * fVar48;
  fVar13 = fVar49 * fVar49;
  auVar8._8_4_ = fVar50 * fVar50;
  auVar8._4_4_ = auVar8._8_4_;
  auVar8._0_4_ = auVar8._8_4_;
  auVar8._12_4_ = auVar8._8_4_;
  fVar31 = fVar13 + fVar7 + auVar8._8_4_;
  fVar32 = fVar13 + fVar7 + auVar8._8_4_;
  fVar33 = fVar13 + fVar7 + auVar8._8_4_;
  fVar34 = fVar13 + fVar7 + auVar8._8_4_;
  auVar2._4_4_ = fVar32;
  auVar2._0_4_ = fVar31;
  auVar2._8_4_ = fVar33;
  auVar2._12_4_ = fVar34;
  auVar9 = rcpps(auVar8,auVar2);
  fVar7 = fVar31 * fVar23 - fVar42 * fVar42;
  fVar13 = fVar32 * fVar24 - fVar43 * fVar43;
  fVar17 = fVar33 * fVar25 - fVar44 * fVar44;
  fVar20 = fVar34 * fVar16 - fVar14 * fVar14;
  auVar22._4_4_ = fVar13;
  auVar22._0_4_ = fVar7;
  auVar22._8_4_ = fVar17;
  auVar22._12_4_ = fVar20;
  auVar22 = rcpps(in_XMM3,auVar22);
  fVar27 = (2.0 - fVar31 * auVar9._0_4_) * auVar9._0_4_;
  fVar28 = (2.0 - fVar32 * auVar9._4_4_) * auVar9._4_4_;
  fVar29 = (2.0 - fVar33 * auVar9._8_4_) * auVar9._8_4_;
  fVar30 = (2.0 - fVar34 * auVar9._12_4_) * auVar9._12_4_;
  auVar1._4_4_ = fVar24;
  auVar1._0_4_ = fVar23;
  auVar1._8_4_ = fVar25;
  auVar1._12_4_ = fVar16;
  auVar9 = rcpps(auVar9,auVar1);
  fVar23 = (2.0 - auVar9._0_4_ * fVar23) * auVar9._0_4_;
  fVar24 = (2.0 - auVar9._4_4_ * fVar24) * auVar9._4_4_;
  fVar25 = (2.0 - auVar9._8_4_ * fVar25) * auVar9._8_4_;
  fVar26 = (2.0 - auVar9._12_4_ * fVar16) * auVar9._12_4_;
  fVar7 = (float)(~-(uint)(fVar7 == 0.0) & (uint)((2.0 - fVar7 * auVar22._0_4_) * auVar22._0_4_)) *
          (fVar31 * fVar39 - fVar36 * fVar42);
  fVar13 = (float)(~-(uint)(fVar13 == 0.0) & (uint)((2.0 - fVar13 * auVar22._4_4_) * auVar22._4_4_))
           * (fVar32 * fVar40 - fVar37 * fVar43);
  fVar16 = (float)(~-(uint)(fVar17 == 0.0) & (uint)((2.0 - fVar17 * auVar22._8_4_) * auVar22._8_4_))
           * (fVar33 * fVar41 - fVar38 * fVar44);
  fVar17 = (float)(~-(uint)(fVar20 == 0.0) &
                  (uint)((2.0 - fVar20 * auVar22._12_4_) * auVar22._12_4_)) *
           (fVar34 * fVar15 - fVar21 * fVar14);
  uVar3 = -(uint)(fVar7 < DAT_1467f06f0);
  uVar4 = -(uint)(fVar13 < fRam00000001467f06f4);
  uVar5 = -(uint)(fVar16 < fRam00000001467f06f8);
  uVar6 = -(uint)(fVar17 < fRam00000001467f06fc);
  auVar10._0_4_ = (uint)fVar7 & uVar3;
  auVar10._4_4_ = (uint)fVar13 & uVar4;
  auVar10._8_4_ = (uint)fVar16 & uVar5;
  auVar10._12_4_ = (uint)fVar17 & uVar6;
  auVar9._4_4_ = ~uVar4 & (uint)fRam00000001467f06f4;
  auVar9._0_4_ = ~uVar3 & (uint)DAT_1467f06f0;
  auVar9._8_4_ = ~uVar5 & (uint)fRam00000001467f06f8;
  auVar9._12_4_ = ~uVar6 & (uint)fRam00000001467f06fc;
  auVar9 = maxps(ZEXT816(0),auVar10 | auVar9);
  fVar7 = auVar9._0_4_ * fVar27 * fVar42 - fVar27 * fVar36;
  fVar13 = auVar9._4_4_ * fVar28 * fVar43 - fVar28 * fVar37;
  fVar16 = auVar9._8_4_ * fVar29 * fVar44 - fVar29 * fVar38;
  fVar17 = auVar9._12_4_ * fVar30 * fVar14 - fVar30 * fVar21;
  uVar3 = -(uint)(fVar7 < DAT_1467f06f0);
  uVar4 = -(uint)(fVar13 < fRam00000001467f06f4);
  uVar5 = -(uint)(fVar16 < fRam00000001467f06f8);
  uVar6 = -(uint)(fVar17 < fRam00000001467f06fc);
  auVar18._0_4_ = (uint)fVar7 & uVar3;
  auVar18._4_4_ = (uint)fVar13 & uVar4;
  auVar18._8_4_ = (uint)fVar16 & uVar5;
  auVar18._12_4_ = (uint)fVar17 & uVar6;
  auVar11._0_4_ = ~uVar3 & (uint)DAT_1467f06f0;
  auVar11._4_4_ = ~uVar4 & (uint)fRam00000001467f06f4;
  auVar11._8_4_ = ~uVar5 & (uint)fRam00000001467f06f8;
  auVar11._12_4_ = ~uVar6 & (uint)fRam00000001467f06fc;
  auVar9 = maxps(ZEXT816(0),auVar11 | auVar18);
  fVar7 = fVar23 * fVar42 * auVar9._0_4_ + fVar23 * fVar39;
  fVar13 = fVar24 * fVar43 * auVar9._4_4_ + fVar24 * fVar40;
  fVar16 = fVar25 * fVar44 * auVar9._8_4_ + fVar25 * fVar41;
  fVar14 = fVar26 * fVar14 * auVar9._12_4_ + fVar26 * fVar15;
  uVar3 = -(uint)(fVar7 < DAT_1467f06f0);
  uVar4 = -(uint)(fVar13 < fRam00000001467f06f4);
  uVar5 = -(uint)(fVar16 < fRam00000001467f06f8);
  uVar6 = -(uint)(fVar14 < fRam00000001467f06fc);
  auVar19._0_4_ = (uint)fVar7 & uVar3;
  auVar19._4_4_ = (uint)fVar13 & uVar4;
  auVar19._8_4_ = (uint)fVar16 & uVar5;
  auVar19._12_4_ = (uint)fVar14 & uVar6;
  auVar12._0_4_ = ~uVar3 & (uint)DAT_1467f06f0;
  auVar12._4_4_ = ~uVar4 & (uint)fRam00000001467f06f4;
  auVar12._8_4_ = ~uVar5 & (uint)fRam00000001467f06f8;
  auVar12._12_4_ = ~uVar6 & (uint)fRam00000001467f06fc;
  auVar22 = maxps(auVar35,auVar12 | auVar19);
  fVar7 = (auVar22._0_4_ * fVar45 + *(float *)(param_1 + 0x80)) -
          (auVar9._0_4_ * fVar48 + *(float *)(param_1 + 0xa0));
  fVar13 = (auVar22._4_4_ * fVar46 + *(float *)(param_1 + 0x84)) -
           (auVar9._4_4_ * fVar49 + *(float *)(param_1 + 0xa4));
  fVar14 = (auVar22._8_4_ * fVar47 + *(float *)(param_1 + 0x88)) -
           (auVar9._8_4_ * fVar50 + *(float *)(param_1 + 0xa8));
  fVar7 = fVar7 * fVar7;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  *param_2 = fVar13 + fVar7 + fVar14;
  param_2[1] = fVar13 + fVar7 + fVar14;
  param_2[2] = fVar13 + fVar7 + fVar14;
  param_2[3] = fVar13 + fVar7 + fVar14;
  return param_2;
}



// FUNCTION 143802ae0 FUN_143802ae0 body=75 status=ok
// SIG undefined FUN_143802ae0(void)

void FUN_143802ae0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_143802830(param_1 + 0x40,param_2,param_1 + 0x80);
  lVar1 = FUN_143802830(lVar1 + 0x50,param_2,lVar1 + 0x90);
  lVar1 = FUN_143802830(lVar1 + 0x60,param_2,lVar1 + 0xa0);
  FUN_143802830(lVar1 + 0x70,param_2,lVar1 + 0xb0);
  return;
}



// FUNCTION 143802b30 FUN_143802b30 body=120 status=ok
// SIG undefined FUN_143802b30(void)

void FUN_143802b30(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x32) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0x36) = uVar4;
  uVar4 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 0x3a) = uVar4;
  uVar4 = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)param_5;
  *(undefined8 *)(param_1 + 0x3e) = uVar4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  param_1[0x10] = (param_1[4] - *param_1) * *param_2 + *param_1;
  param_1[0x11] = (param_1[5] - param_1[1]) * fVar1 + param_1[1];
  param_1[0x12] = (param_1[6] - param_1[2]) * fVar2 + param_1[2];
  param_1[0x13] = (param_1[7] - param_1[3]) * fVar3 + param_1[3];
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  param_1[0x14] = (param_1[4] - *param_1) * *param_3 + *param_1;
  param_1[0x15] = (param_1[5] - param_1[1]) * fVar1 + param_1[1];
  param_1[0x16] = (param_1[6] - param_1[2]) * fVar2 + param_1[2];
  param_1[0x17] = (param_1[7] - param_1[3]) * fVar3 + param_1[3];
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  param_1[0x18] = (param_1[0xc] - param_1[8]) * *param_4 + param_1[8];
  param_1[0x19] = (param_1[0xd] - param_1[9]) * fVar1 + param_1[9];
  param_1[0x1a] = (param_1[0xe] - param_1[10]) * fVar2 + param_1[10];
  param_1[0x1b] = (param_1[0xf] - param_1[0xb]) * fVar3 + param_1[0xb];
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  param_1[0x1c] = (param_1[0xc] - param_1[8]) * *param_5 + param_1[8];
  param_1[0x1d] = (param_1[0xd] - param_1[9]) * fVar1 + param_1[9];
  param_1[0x1e] = (param_1[0xe] - param_1[10]) * fVar2 + param_1[10];
  param_1[0x1f] = (param_1[0xf] - param_1[0xb]) * fVar3 + param_1[0xb];
  return;
}



// FUNCTION 143802bb0 FUN_143802bb0 body=183 status=ok
// SIG undefined FUN_143802bb0(void)

void FUN_143802bb0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x20,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
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
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),4,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 143802c70 FUN_143802c70 body=99 status=ok
// SIG undefined FUN_143802c70(void)

undefined8 * FUN_143802c70(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkaiNavMeshSilhouetteSelector::vftable;
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



// FUNCTION 143802ce0 FUN_143802ce0 body=120 status=ok
// SIG undefined FUN_143802ce0(void)

undefined8 * FUN_143802ce0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1,iVar1,4);
  }
  FUN_142f87c00(*param_1,uVar2,iVar1);
  *(int *)(param_1 + 1) = iVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 143802d60 FUN_143802d60 body=118 status=ok
// SIG undefined FUN_143802d60(void)

undefined8 * FUN_143802d60(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<1>_>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<1>_>
               ::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xf] = param_1 + 0x11;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000005;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80000005;
  *(undefined4 *)(param_1 + 99) = param_2;
  FUN_143df9d10();
  return param_1;
}



// FUNCTION 143802de0 FUN_143802de0 body=118 status=ok
// SIG undefined FUN_143802de0(void)

undefined8 * FUN_143802de0(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<0>_>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<0>_>
               ::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xf] = param_1 + 0x11;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000005;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80000005;
  *(undefined4 *)(param_1 + 99) = param_2;
  FUN_143df9d10();
  return param_1;
}



// FUNCTION 143802e60 FUN_143802e60 body=118 status=ok
// SIG undefined FUN_143802e60(void)

undefined8 * FUN_143802e60(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask>
               ::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xf] = param_1 + 0x11;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000005;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80000005;
  *(undefined4 *)(param_1 + 99) = param_2;
  FUN_143df9d10();
  return param_1;
}



// FUNCTION 143802ee0 FUN_143802ee0 body=118 status=ok
// SIG undefined FUN_143802ee0(void)

undefined8 * FUN_143802ee0(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreasTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreasTask>
               ::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xf] = param_1 + 0x11;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000005;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80000005;
  *(undefined4 *)(param_1 + 99) = param_2;
  FUN_143df9d10();
  return param_1;
}



// FUNCTION 143802f60 FUN_143802f60 body=118 status=ok
// SIG undefined FUN_143802f60(void)

undefined8 * FUN_143802f60(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask>
               ::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xf] = param_1 + 0x11;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000005;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80000005;
  *(undefined4 *)(param_1 + 99) = param_2;
  FUN_143df9d10();
  return param_1;
}



// FUNCTION 143802fe0 FUN_143802fe0 body=909 status=ok
// SIG undefined FUN_143802fe0(void)

undefined8 * FUN_143802fe0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildContext::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = hkcdSimdTree::BuildContext::vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x319) = 0;
  param_1[0x31b] = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18e4) = 0x80000000;
  param_1[0x31e] = param_1 + 800;
  *(undefined4 *)(param_1 + 799) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18fc) = 0x80000010;
  param_1[0x338] = param_1 + 0x33a;
  *(undefined4 *)(param_1 + 0x339) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19cc) = 0x80000010;
  param_1[0x342] = 0;
  *(undefined1 *)(param_1 + 0x344) = 0;
  param_1[0x346] = 0;
  *(undefined4 *)(param_1 + 0x347) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a3c) = 0x80000000;
  param_1[0x348] = 0;
  *(undefined4 *)(param_1 + 0x349) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4c) = 0x80000000;
  param_1[0x34a] = hkcdSimdTree::BuildContext::vftable;
  param_1[0x34b] = 0;
  param_1[0x34c] = 0;
  *(undefined4 *)(param_1 + 0x34d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1a6c) = 1;
  param_1[0x34e] = 0;
  *(undefined4 *)(param_1 + 0x34f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a7c) = 0x80000000;
  param_1[0x350] = 0;
  *(undefined4 *)(param_1 + 0x653) = 0;
  param_1[0x655] = 0;
  *(undefined4 *)(param_1 + 0x656) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32b4) = 0x80000000;
  param_1[0x658] = param_1 + 0x65a;
  *(undefined4 *)(param_1 + 0x659) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32cc) = 0x80000010;
  param_1[0x672] = param_1 + 0x674;
  *(undefined4 *)(param_1 + 0x673) = 0;
  *(undefined4 *)((longlong)param_1 + 0x339c) = 0x80000010;
  param_1[0x67c] = 0;
  *(undefined1 *)(param_1 + 0x67e) = 0;
  param_1[0x680] = 0;
  *(undefined4 *)(param_1 + 0x681) = 0;
  *(undefined4 *)((longlong)param_1 + 0x340c) = 0x80000000;
  param_1[0x682] = 0;
  *(undefined4 *)(param_1 + 0x683) = 0;
  *(undefined4 *)((longlong)param_1 + 0x341c) = 0x80000000;
  param_1[0x684] = 0;
  *(undefined4 *)(param_1 + 0x685) = 0;
  *(undefined4 *)((longlong)param_1 + 0x342c) = 0x80000000;
  param_1[0x686] = 0;
  *(undefined4 *)(param_1 + 0x687) = 0;
  *(undefined4 *)((longlong)param_1 + 0x343c) = 0x80000000;
  param_1[0x688] = hkcdSimdTree::BuildContext::vftable;
  param_1[0x689] = 0;
  param_1[0x68a] = 0;
  *(undefined4 *)(param_1 + 0x68b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x345c) = 1;
  param_1[0x68c] = 0;
  *(undefined4 *)(param_1 + 0x68d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x346c) = 0x80000000;
  param_1[0x68e] = 0;
  *(undefined4 *)(param_1 + 0x991) = 0;
  param_1[0x993] = 0;
  *(undefined4 *)(param_1 + 0x994) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ca4) = 0x80000000;
  param_1[0x996] = param_1 + 0x998;
  *(undefined4 *)(param_1 + 0x997) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cbc) = 0x80000010;
  param_1[0x9b0] = param_1 + 0x9b2;
  *(undefined4 *)(param_1 + 0x9b1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4d8c) = 0x80000010;
  param_1[0x9ba] = 0;
  *(undefined1 *)(param_1 + 0x9bc) = 0;
  param_1[0x9be] = hkcdSimdTree::BuildContext::vftable;
  param_1[0x9bf] = 0;
  param_1[0x9c0] = 0;
  *(undefined4 *)(param_1 + 0x9c1) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4e0c) = 1;
  param_1[0x9c2] = 0;
  *(undefined4 *)(param_1 + 0x9c3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e1c) = 0x80000000;
  param_1[0x9c4] = 0;
  *(undefined4 *)(param_1 + 0xcc7) = 0;
  param_1[0xcc9] = 0;
  *(undefined4 *)(param_1 + 0xcca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6654) = 0x80000000;
  param_1[0xccc] = param_1 + 0xcce;
  *(undefined4 *)(param_1 + 0xccd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x666c) = 0x80000010;
  param_1[0xce6] = param_1 + 0xce8;
  *(undefined4 *)(param_1 + 0xce7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x673c) = 0x80000010;
  param_1[0xcf0] = 0;
  *(undefined1 *)(param_1 + 0xcf2) = 0;
  return param_1;
}



// FUNCTION 143803370 FUN_143803370 body=924 status=ok
// SIG undefined FUN_143803370(void)

void FUN_143803370(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143803710(param_1 + 0x4e30);
  *(undefined ***)(param_1 + 0x4df0) = hkcdSimdTree::BuildContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x4e18) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4e1c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x4e10),0x10,
                  *(uint *)(param_1 + 0x4e1c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x4e10) = 0;
  *(undefined4 *)(param_1 + 0x4e1c) = 0x80000000;
  FUN_143803710(param_1 + 0x3480);
  *(undefined ***)(param_1 + 0x3440) = hkcdSimdTree::BuildContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x3468) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x346c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x3460),0x10,
                  *(uint *)(param_1 + 0x346c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x3460) = 0;
  *(undefined4 *)(param_1 + 0x346c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x3438) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x343c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x3430),0x10,
                  *(uint *)(param_1 + 0x343c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x3430) = 0;
  *(undefined4 *)(param_1 + 0x343c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x3428) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x342c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x3420),0x20,
                  *(uint *)(param_1 + 0x342c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x3420) = 0;
  *(undefined4 *)(param_1 + 0x342c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x3418) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x341c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x3410),0x10,
                  *(uint *)(param_1 + 0x341c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x3410) = 0;
  *(undefined4 *)(param_1 + 0x341c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x3408) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x340c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x3400),0x20,
                  *(uint *)(param_1 + 0x340c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x3400) = 0;
  *(undefined4 *)(param_1 + 0x340c) = 0x80000000;
  FUN_143803710(param_1 + 0x1a90);
  *(undefined ***)(param_1 + 0x1a50) = hkcdSimdTree::BuildContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1a7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1a70),0x10,
                  *(uint *)(param_1 + 0x1a7c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1a70) = 0;
  *(undefined4 *)(param_1 + 0x1a7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1a4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1a40),0x10,
                  *(uint *)(param_1 + 0x1a4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1a40) = 0;
  *(undefined4 *)(param_1 + 0x1a4c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1a3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1a30),0x20,
                  *(uint *)(param_1 + 0x1a3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1a30) = 0;
  *(undefined4 *)(param_1 + 0x1a3c) = 0x80000000;
  FUN_143803710(param_1 + 0xc0);
  *(undefined ***)(param_1 + 0x80) = hkcdSimdTree::BuildContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xac)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xa0),0x10,*(uint *)(param_1 + 0xac) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0x10,*(uint *)(param_1 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x6c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x60),0x20,*(uint *)(param_1 + 0x6c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143803710 FUN_143803710 body=228 status=ok
// SIG undefined FUN_143803710(void)

void FUN_143803710(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1908) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x190c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1900),4,*(uint *)(param_1 + 0x190c) & 0x3fffffff
                 );
  }
  *(undefined8 *)(param_1 + 0x1900) = 0;
  *(undefined4 *)(param_1 + 0x190c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1838) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x183c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1830),0xc,
                  *(uint *)(param_1 + 0x183c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1830) = 0;
  *(undefined4 *)(param_1 + 0x183c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1820) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1824)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1818),0x20,
                  *(uint *)(param_1 + 0x1824) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x1824) = 0x80000000;
  *(undefined8 *)(param_1 + 0x1818) = 0;
  return;
}



// FUNCTION 1438037f4 FUN_1438037f4 body=9 status=ok
// SIG undefined FUN_1438037f4(void)

void FUN_1438037f4(longlong param_1)

{
  FUN_143803820(param_1 + -0x20);
  return;
}



// FUNCTION 143803800 FUN_143803800 body=9 status=ok
// SIG undefined FUN_143803800(void)

void FUN_143803800(longlong param_1)

{
  FUN_1438038d0(param_1 + -0x20);
  return;
}



// FUNCTION 14380380c FUN_14380380c body=9 status=ok
// SIG undefined FUN_14380380c(void)

void FUN_14380380c(longlong param_1)

{
  FUN_143803ac0(param_1 + -0x20);
  return;
}



// FUNCTION 143803820 FUN_143803820 body=174 status=ok
// SIG undefined FUN_143803820(void)

longlong FUN_143803820(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_14370c150();
  }
  FUN_1437967d0(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x20) = hkTask::vftable;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x330;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 1438038d0 FUN_1438038d0 body=157 status=ok
// SIG undefined FUN_1438038d0(void)

longlong FUN_1438038d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437967d0(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x20) = hkTask::vftable;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 800;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,800);
  }
  return param_1;
}



// FUNCTION 143803970 FUN_143803970 body=139 status=ok
// SIG undefined FUN_143803970(void)

longlong FUN_143803970(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143803370();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x67a0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x67a0);
    }
  }
  return param_1;
}



// FUNCTION 143803a00 FUN_143803a00 body=181 status=ok
// SIG undefined FUN_143803a00(void)

undefined8 * FUN_143803a00(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkcdSimdTree::BuildContext::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 5) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) {
    FUN_143702e10(uVar1,param_1[4],0x10,*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,0x38);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 143803ac0 FUN_143803ac0 body=162 status=ok
// SIG undefined FUN_143803ac0(void)

longlong FUN_143803ac0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
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
      sVar2 = 0x40;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 143803b70 FUN_143803b70 body=3837 status=ok
// SIG undefined FUN_143803b70(void)

short * FUN_143803b70(short *param_1,longlong param_2,longlong param_3,longlong param_4,
                     undefined4 param_5,short param_6)

{
  int iVar1;
  short *psVar2;
  undefined2 *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  LPVOID pvVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar22;
  short local_98 [2];
  short local_94 [2];
  short local_90 [2];
  short local_8c [2];
  short local_88 [2];
  short local_84 [2];
  undefined2 local_80 [2];
  undefined2 local_7c [2];
  undefined2 local_78 [2];
  undefined2 local_74 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  lVar11 = (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar10 + 0x58),0x67a0);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = FUN_143802fe0(lVar11);
  }
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(lVar11 + 0x18) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar11 + 0x18) = param_3;
  uVar12 = *(undefined8 *)(param_4 + 0x128);
  *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(param_4 + 0x120);
  *(undefined8 *)(lVar11 + 0x28) = uVar12;
  uVar12 = *(undefined8 *)(param_4 + 0x138);
  *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)(param_4 + 0x130);
  *(undefined8 *)(lVar11 + 0x38) = uVar12;
  uVar22 = *(undefined4 *)(param_4 + 0x144);
  uVar8 = *(undefined4 *)(param_4 + 0x148);
  uVar9 = *(undefined4 *)(param_4 + 0x14c);
  *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(param_4 + 0x140);
  *(undefined4 *)(lVar11 + 0x44) = uVar22;
  *(undefined4 *)(lVar11 + 0x48) = uVar8;
  *(undefined4 *)(lVar11 + 0x4c) = uVar9;
  uVar22 = *(undefined4 *)(param_4 + 0x154);
  uVar8 = *(undefined4 *)(param_4 + 0x158);
  uVar9 = *(undefined4 *)(param_4 + 0x15c);
  *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)(param_4 + 0x150);
  *(undefined4 *)(lVar11 + 0x54) = uVar22;
  *(undefined4 *)(lVar11 + 0x58) = uVar8;
  *(undefined4 *)(lVar11 + 0x5c) = uVar9;
  lVar17 = *(longlong *)(param_3 + 0x18);
  iVar19 = *(int *)(lVar17 + 0x30);
  iVar5 = *(int *)(lVar17 + 0x40);
  iVar6 = *(int *)(lVar17 + 0x68);
  iVar18 = *(int *)(*(longlong *)(lVar17 + 0x18) + 0x30);
  local_70 = (undefined8 *)
             CONCAT44(local_70._4_4_,*(undefined4 *)(*(longlong *)(lVar17 + 0x18) + 0x20));
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x6c) & 0x3fffffff;
  if ((int)uVar16 < iVar18) {
    iVar7 = uVar16 * 2;
    iVar1 = iVar18;
    if (iVar18 < iVar7) {
      iVar1 = iVar7;
    }
    FUN_14370c310(uVar12,lVar11 + 0x60,iVar1,0x20);
  }
  *(int *)(lVar11 + 0x68) = iVar18;
  iVar1 = iVar18 + 4;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x7c) & 0x3fffffff;
  if ((int)uVar16 < iVar1) {
    iVar7 = uVar16 * 2;
    if (iVar1 < iVar7) {
      iVar1 = iVar7;
    }
    FUN_14370c310(uVar12,lVar11 + 0x70,iVar1,0x10);
  }
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x7c) & 0x3fffffff;
  if ((int)uVar16 < iVar18) {
    iVar7 = uVar16 * 2;
    iVar1 = iVar18;
    if (iVar18 < iVar7) {
      iVar1 = iVar7;
    }
    FUN_14370c310(uVar12,lVar11 + 0x70,iVar1,0x10);
  }
  *(int *)(lVar11 + 0x78) = iVar18;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x1a3c) & 0x3fffffff;
  if ((int)uVar16 < iVar19) {
    iVar1 = uVar16 * 2;
    iVar18 = iVar19;
    if (iVar19 < iVar1) {
      iVar18 = iVar1;
    }
    FUN_14370c310(uVar12,lVar11 + 0x1a30,iVar18,0x20);
  }
  *(int *)(lVar11 + 0x1a38) = iVar19;
  iVar18 = iVar19 + 4;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x1a4c) & 0x3fffffff;
  if ((int)uVar16 < iVar18) {
    iVar1 = uVar16 * 2;
    if (iVar18 < iVar1) {
      iVar18 = iVar1;
    }
    FUN_14370c310(uVar12,lVar11 + 0x1a40,iVar18,0x10);
  }
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x1a4c) & 0x3fffffff;
  if ((int)uVar16 < iVar19) {
    iVar1 = uVar16 * 2;
    iVar18 = iVar19;
    if (iVar19 < iVar1) {
      iVar18 = iVar1;
    }
    FUN_14370c310(uVar12,lVar11 + 0x1a40,iVar18,0x10);
  }
  *(int *)(lVar11 + 0x1a48) = iVar19;
  plVar21 = (longlong *)(param_3 + 0x20);
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(param_3 + 0x2c) & 0x3fffffff;
  if ((int)uVar16 < iVar19) {
    iVar1 = uVar16 * 2;
    iVar18 = iVar19;
    if (iVar19 < iVar1) {
      iVar18 = iVar1;
    }
    FUN_14370c310(uVar12,plVar21,iVar18,8);
  }
  lVar17 = *plVar21;
  iVar18 = (*(int *)(param_3 + 0x28) - iVar19) + -1;
  lVar20 = (longlong)iVar18;
  if (-1 < iVar18) {
    do {
      if (*(longlong *)(lVar17 + (longlong)iVar19 * 8 + lVar20 * 8) != 0) {
        FUN_14370c150();
      }
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  puVar13 = (undefined8 *)(*plVar21 + (longlong)*(int *)(param_3 + 0x28) * 8);
  iVar18 = iVar19 - *(int *)(param_3 + 0x28);
  lVar17 = (longlong)iVar18;
  if (0 < iVar18) {
    do {
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  *(int *)(param_3 + 0x28) = iVar19;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x340c) & 0x3fffffff;
  if ((int)uVar16 < iVar5) {
    iVar18 = uVar16 * 2;
    iVar19 = iVar5;
    if (iVar5 < iVar18) {
      iVar19 = iVar18;
    }
    FUN_14370c310(uVar12,lVar11 + 0x3400,iVar19,0x20);
  }
  *(int *)(lVar11 + 0x3408) = iVar5;
  iVar19 = iVar5 + 4;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x341c) & 0x3fffffff;
  if ((int)uVar16 < iVar19) {
    iVar18 = uVar16 * 2;
    if (iVar19 < iVar18) {
      iVar19 = iVar18;
    }
    FUN_14370c310(uVar12,lVar11 + 0x3410,iVar19,0x10);
  }
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x341c) & 0x3fffffff;
  if ((int)uVar16 < iVar5) {
    iVar18 = uVar16 * 2;
    iVar19 = iVar5;
    if (iVar5 < iVar18) {
      iVar19 = iVar18;
    }
    FUN_14370c310(uVar12,lVar11 + 0x3410,iVar19,0x10);
  }
  *(int *)(lVar11 + 0x3418) = iVar5;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(param_3 + 0x3c) & 0x3fffffff;
  if ((int)uVar16 < iVar5) {
    iVar18 = uVar16 * 2;
    iVar19 = iVar5;
    if (iVar5 < iVar18) {
      iVar19 = iVar18;
    }
    FUN_14370c310(uVar12,param_3 + 0x30,iVar19,8);
  }
  lVar17 = *(longlong *)(param_3 + 0x30);
  iVar19 = (*(int *)(param_3 + 0x38) - iVar5) + -1;
  lVar20 = (longlong)iVar19;
  if (-1 < iVar19) {
    do {
      if (*(longlong *)(lVar17 + (longlong)iVar5 * 8 + lVar20 * 8) != 0) {
        FUN_14370c150();
      }
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8);
  iVar19 = iVar5 - *(int *)(param_3 + 0x38);
  lVar17 = (longlong)iVar19;
  if (0 < iVar19) {
    do {
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  *(int *)(param_3 + 0x38) = iVar5;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x342c) & 0x3fffffff;
  if ((int)uVar16 < iVar6) {
    iVar5 = uVar16 * 2;
    iVar19 = iVar6;
    if (iVar6 < iVar5) {
      iVar19 = iVar5;
    }
    FUN_14370c310(uVar12,lVar11 + 0x3420,iVar19,0x20);
  }
  *(int *)(lVar11 + 0x3428) = iVar6;
  iVar19 = iVar6 + 4;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x343c) & 0x3fffffff;
  if ((int)uVar16 < iVar19) {
    iVar5 = uVar16 * 2;
    if (iVar19 < iVar5) {
      iVar19 = iVar5;
    }
    FUN_14370c310(uVar12,lVar11 + 0x3430,iVar19,0x10);
  }
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(lVar11 + 0x343c) & 0x3fffffff;
  if ((int)uVar16 < iVar6) {
    iVar5 = uVar16 * 2;
    iVar19 = iVar6;
    if (iVar6 < iVar5) {
      iVar19 = iVar5;
    }
    FUN_14370c310(uVar12,lVar11 + 0x3430,iVar19,0x10);
  }
  *(int *)(lVar11 + 0x3438) = iVar6;
  uVar12 = FUN_143703a50();
  uVar16 = *(uint *)(param_3 + 0x4c) & 0x3fffffff;
  if ((int)uVar16 < iVar6) {
    iVar5 = uVar16 * 2;
    iVar19 = iVar6;
    if (iVar6 < iVar5) {
      iVar19 = iVar5;
    }
    FUN_14370c310(uVar12,param_3 + 0x40,iVar19,8);
  }
  uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  lVar17 = *(longlong *)(param_3 + 0x40);
  iVar19 = (*(int *)(param_3 + 0x48) - iVar6) + -1;
  lVar20 = (longlong)iVar19;
  if (-1 < iVar19) {
    do {
      if (*(longlong *)(lVar17 + (longlong)iVar6 * 8 + lVar20 * 8) != 0) {
        FUN_14370c150();
      }
      uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
      lVar20 = lVar20 + -1;
    } while (-1 < lVar20);
  }
  puVar13 = (undefined8 *)(*(longlong *)(param_3 + 0x40) + (longlong)*(int *)(param_3 + 0x48) * 8);
  iVar19 = iVar6 - *(int *)(param_3 + 0x48);
  lVar17 = (longlong)iVar19;
  if (0 < iVar19) {
    do {
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 0;
      }
      puVar13 = puVar13 + 1;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  *(int *)(param_3 + 0x48) = iVar6;
  uVar12 = FUN_143703a50();
  iVar19 = (int)local_70;
  uVar16 = *(uint *)(param_3 + 0x7c) & 0x3fffffff;
  if ((int)uVar16 < (int)local_70) {
    iVar6 = uVar16 * 2;
    iVar5 = (int)local_70;
    if ((int)local_70 < iVar6) {
      iVar5 = iVar6;
    }
    FUN_14370c310(uVar12,param_3 + 0x70,iVar5,0xc);
  }
  *(int *)(param_3 + 0x78) = iVar19;
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar13 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x330);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
  }
  else {
    local_58 = puVar13;
    FUN_143802f60(puVar13,param_5,
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x18) + 0x18) + 0x20)
                 );
    *puVar13 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask::vftable
    ;
    puVar13[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask::
                 vftable;
    puVar13[100] = lVar11;
    FUN_14370c030(lVar11);
  }
  uVar12 = CONCAT44(uVar22,1);
  FUN_143770200(param_2,local_98,puVar13,param_5,uVar12,0x40);
  sVar4 = local_98[0];
  uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (param_6 != -1) {
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar2 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = param_6;
    psVar2[1] = sVar4;
  }
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar13 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x330);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    local_60 = (undefined8 *)0x0;
  }
  else {
    local_60 = puVar13;
    FUN_143802e60(puVar13,param_5,
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x18) + 0x18) + 0x30)
                 );
    *puVar13 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask::
               vftable;
    puVar13[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask
                 ::vftable;
    puVar13[100] = lVar11;
    FUN_14370c030(lVar11);
  }
  FUN_143770200(param_2,local_94,puVar13,param_5,CONCAT44(uVar22,1),0x40);
  sVar4 = local_94[0];
  plVar21 = (longlong *)(param_2 + 0x1a8);
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar21,4);
  }
  lVar17 = lVar11 + 0x70;
  psVar2 = (short *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = local_98[0];
  psVar2[1] = sVar4;
  FUN_143e08070(local_94[0],lVar11 + 0x60,lVar11 + 0xc0,lVar11 + 0x80,lVar17,param_5,0x40,
                param_3 + 0x58,param_2,local_res20,local_80,0);
  uVar22 = (undefined4)((ulonglong)lVar17 >> 0x20);
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar13 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x330);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    local_68 = (undefined8 *)0x0;
  }
  else {
    local_68 = puVar13;
    FUN_143802d60(puVar13,param_5,
                  *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x18) + 0x30));
    *puVar13 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<1>::vftable;
    puVar13[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<1>::vftable;
    puVar13[100] = lVar11;
    FUN_14370c030(lVar11);
  }
  uVar12 = CONCAT44(uVar22,1);
  FUN_143770200(param_2,local_90,puVar13,param_5,uVar12,0x40);
  sVar4 = local_90[0];
  uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (param_6 != -1) {
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,plVar21,4);
    }
    psVar2 = (short *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = param_6;
    psVar2[1] = sVar4;
  }
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar13 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x330);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
    local_70 = (undefined8 *)0x0;
  }
  else {
    local_70 = puVar13;
    FUN_143802de0(puVar13,param_5,
                  *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x18) + 0x40));
    *puVar13 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<0>::vftable;
    puVar13[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertVolumesTask<0>::vftable;
    puVar13[100] = lVar11;
    FUN_14370c030(lVar11);
  }
  uVar12 = CONCAT44(uVar22,1);
  FUN_143770200(param_2,local_8c,puVar13,param_5,uVar12,0x40);
  sVar4 = local_8c[0];
  uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (param_6 != -1) {
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,plVar21,4);
    }
    psVar2 = (short *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = param_6;
    psVar2[1] = sVar4;
  }
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar13 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x40);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13[1] = 0;
    *(undefined2 *)(puVar13 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar13 + 0x12) = 1;
    *puVar13 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertInverseCarvingVolumeTask::
               vftable;
    puVar13[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertInverseCarvingVolumeTask
                 ::vftable;
    puVar13[6] = lVar11;
    if (lVar11 != 0) {
      FUN_14370c030(lVar11);
    }
  }
  FUN_143770130(param_2,local_84,puVar13,0x40);
  sVar4 = local_84[0];
  if (param_6 != -1) {
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,plVar21,4);
    }
    psVar2 = (short *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = param_6;
    psVar2[1] = sVar4;
  }
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar14 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x330);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    FUN_143802ee0(puVar14,param_5,
                  *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x18) + 0x18) + 0x68));
    *puVar14 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreasTask::vftable;
    puVar14[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreasTask::vftable;
    puVar14[100] = lVar11;
    FUN_14370c030(lVar11);
  }
  FUN_143770200(param_2,local_88,puVar14,param_5,CONCAT44(uVar22,1),0x40);
  sVar4 = local_88[0];
  if (param_6 != -1) {
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,plVar21,4);
    }
    psVar2 = (short *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = param_6;
    psVar2[1] = sVar4;
  }
  FUN_143e08070(local_90[0],lVar11 + 0x1a30,lVar11 + 0x1a90,lVar11 + 0x1a50,lVar11 + 0x1a40,param_5,
                0x40,param_3 + 0x80,param_2,local_res20,local_7c,0);
  FUN_143e08070(local_8c[0],lVar11 + 0x3400,lVar11 + 0x3480,lVar11 + 0x3440,lVar11 + 0x3410,param_5,
                0x40,param_3 + 0x98,param_2,local_res20,local_78,0);
  FUN_143e08070(local_88[0],lVar11 + 0x3420,lVar11 + 0x4e30,lVar11 + 0x4df0,lVar11 + 0x3430,param_5,
                0x40,param_3 + 0xb0,param_2,local_res20,local_74,0);
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar15 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x40);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar15[1] = 0;
    *(undefined4 *)(puVar15 + 2) = 0x1ffff;
    *puVar15 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::CleanUpTask::vftable;
    puVar15[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::CleanUpTask::vftable;
    puVar15[6] = lVar11;
    if (lVar11 != 0) {
      FUN_14370c030(lVar11);
    }
  }
  FUN_143770130(param_2,param_1,puVar15,0x40);
  sVar4 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar21,4);
  }
  puVar3 = (undefined2 *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *puVar3 = local_80[0];
  puVar3[1] = sVar4;
  sVar4 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar21,4);
  }
  puVar3 = (undefined2 *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *puVar3 = local_7c[0];
  puVar3[1] = sVar4;
  sVar4 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar21,4);
  }
  puVar3 = (undefined2 *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *puVar3 = local_78[0];
  puVar3[1] = sVar4;
  sVar4 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar21,4);
  }
  psVar2 = (short *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = local_84[0];
  psVar2[1] = sVar4;
  sVar4 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar21,4);
  }
  puVar3 = (undefined2 *)(*plVar21 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *puVar3 = local_74[0];
  puVar3[1] = sVar4;
  if (puVar15 != (undefined8 *)0x0) {
    FUN_14370c150(puVar15);
  }
  if (puVar14 != (undefined8 *)0x0) {
    FUN_14370c150(puVar14);
  }
  if (puVar13 != (undefined8 *)0x0) {
    FUN_14370c150(puVar13);
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_14370c150();
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_14370c150();
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_14370c150();
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_14370c150();
  }
  if (lVar11 != 0) {
    FUN_14370c150(lVar11);
  }
  return param_1;
}



// FUNCTION 143804a70 FUN_143804a70 body=8 status=ok
// SIG undefined FUN_143804a70(void)

char * FUN_143804a70(void)

{
  return "ConvertPaintingVolumes";
}



// FUNCTION 143804a80 FUN_143804a80 body=8 status=ok
// SIG undefined FUN_143804a80(void)

char * FUN_143804a80(void)

{
  return "ConvertCarvingVolumes";
}



// FUNCTION 143804a90 FUN_143804a90 body=8 status=ok
// SIG undefined FUN_143804a90(void)

char * FUN_143804a90(void)

{
  return "BuildAabbsAndPoints";
}



// FUNCTION 143804aa0 FUN_143804aa0 body=8 status=ok
// SIG undefined FUN_143804aa0(void)

char * FUN_143804aa0(void)

{
  return "CleanUp";
}



// FUNCTION 143804ab0 FUN_143804ab0 body=8 status=ok
// SIG undefined FUN_143804ab0(void)

char * FUN_143804ab0(void)

{
  return "ConvertAreas";
}



// FUNCTION 143804ac0 FUN_143804ac0 body=8 status=ok
// SIG undefined FUN_143804ac0(void)

char * FUN_143804ac0(void)

{
  return "ConvertInverseCarvingVolume";
}



// FUNCTION 143804ad0 FUN_143804ad0 body=8 status=ok
// SIG undefined FUN_143804ad0(void)

char * FUN_143804ad0(void)

{
  return "QuantizeInputVertices";
}



// FUNCTION 143804ae0 FUN_143804ae0 body=256 status=ok
// SIG undefined FUN_143804ae0(void)

void FUN_143804ae0(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  int local_18;
  
  uVar1 = *param_2;
  iVar3 = *(int *)(param_2 + 1);
  uVar2 = *(undefined8 *)param_1;
  local_28 = (int)uVar1;
  local_18 = (int)uVar2;
  if (local_18 < local_28) {
    local_28 = local_18;
  }
  *param_1 = local_28;
  iVar4 = (int)((ulonglong)uVar1 >> 0x20);
  iVar5 = (int)((ulonglong)uVar2 >> 0x20);
  if (iVar5 < iVar4) {
    iVar4 = iVar5;
  }
  param_1[1] = iVar4;
  if (param_1[2] < iVar3) {
    iVar3 = param_1[2];
  }
  param_1[2] = iVar3;
  uVar1 = *param_2;
  iVar3 = *(int *)(param_2 + 1);
  uVar2 = *(undefined8 *)(param_1 + 3);
  local_18 = (int)uVar1;
  local_28 = (int)uVar2;
  if (local_18 < local_28) {
    local_18 = local_28;
  }
  param_1[3] = local_18;
  iVar5 = (int)((ulonglong)uVar2 >> 0x20);
  iVar4 = (int)((ulonglong)uVar1 >> 0x20);
  if (iVar4 < iVar5) {
    iVar4 = iVar5;
  }
  param_1[4] = iVar4;
  if (iVar3 < param_1[5]) {
    iVar3 = param_1[5];
  }
  param_1[5] = iVar3;
  return;
}



// FUNCTION 143804be0 FUN_143804be0 body=239 status=ok
// SIG undefined FUN_143804be0(void)

void FUN_143804be0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  LPVOID pvVar4;
  
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar4,"TtBuildAabbsAndPoints");
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x70);
  iVar1 = *(int *)(lVar2 + 0x78);
  *param_2 = lVar3;
  param_2[1] = lVar3 + (longlong)iVar1 * 0xc;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 800) + 0x18) + 0x18) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x28);
  iVar1 = *(int *)(lVar2 + 0x30);
  param_2[2] = lVar3;
  param_2[3] = (longlong)iVar1 * 0x10 + lVar3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x60);
  iVar1 = *(int *)(*(longlong *)(param_1 + 800) + 0x68);
  param_2[4] = lVar2;
  param_2[5] = (longlong)iVar1 * 0x20 + lVar2;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x70);
  iVar1 = *(int *)(*(longlong *)(param_1 + 800) + 0x78);
  param_2[6] = lVar2;
  param_2[7] = (longlong)iVar1 * 0x10 + lVar2;
  return;
}



// FUNCTION 143804cd0 FUN_143804cd0 body=269 status=ok
// SIG undefined FUN_143804cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143804cd0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtQuantizeInputVertices");
  }
  lVar2 = *(longlong *)(param_1 + 800);
  uVar4 = *(undefined8 *)(lVar2 + 0x28);
  *param_2 = *(undefined8 *)(lVar2 + 0x20);
  param_2[1] = uVar4;
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  param_2[2] = *(undefined8 *)(lVar2 + 0x30);
  param_2[3] = uVar4;
  uVar4 = *(undefined8 *)(lVar2 + 0x48);
  param_2[4] = *(undefined8 *)(lVar2 + 0x40);
  param_2[5] = uVar4;
  uVar4 = *(undefined8 *)(lVar2 + 0x58);
  param_2[6] = *(undefined8 *)(lVar2 + 0x50);
  param_2[7] = uVar4;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 800) + 0x18) + 0x18) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  iVar1 = *(int *)(lVar2 + 0x20);
  param_2[8] = lVar3;
  param_2[9] = (longlong)iVar1 * 0x10 + lVar3;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x70);
  iVar1 = *(int *)(lVar2 + 0x78);
  param_2[10] = lVar3;
  param_2[0xb] = lVar3 + (longlong)iVar1 * 0xc;
  fVar6 = _guard_xfg_dispatch_icall_nop(2.0,23.0);
  fVar6 = fVar6 - 1.0;
  fVar7 = fRam00000001467f06e4 - fVar6;
  fVar8 = fRam00000001467f06e8 - fVar6;
  fVar9 = DAT_1467f06ec - fVar6;
  *(float *)(param_2 + 0xc) = _DAT_1467f06e0 - fVar6;
  *(float *)((longlong)param_2 + 100) = fVar7;
  *(float *)(param_2 + 0xd) = fVar8;
  *(float *)((longlong)param_2 + 0x6c) = fVar9;
  fVar7 = fVar6 + fRam00000001467f06e4;
  fVar8 = fVar6 + fRam00000001467f06e8;
  fVar9 = fVar6 + DAT_1467f06ec;
  *(float *)(param_2 + 0xe) = fVar6 + _DAT_1467f06e0;
  *(float *)((longlong)param_2 + 0x74) = fVar7;
  *(float *)(param_2 + 0xf) = fVar8;
  *(float *)((longlong)param_2 + 0x7c) = fVar9;
  return;
}



// FUNCTION 143804de0 FUN_143804de0 body=391 status=ok
// SIG undefined FUN_143804de0(void)

void FUN_143804de0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  
  iVar2 = *(int *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x300);
  local_a8 = *(undefined8 *)(lVar3 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x28);
  local_98 = *(undefined8 *)(lVar3 + 0x30);
  uStack_90 = *(undefined8 *)(lVar3 + 0x38);
  local_88 = *(undefined8 *)(lVar3 + 0x40);
  uStack_80 = *(undefined8 *)(lVar3 + 0x48);
  local_78 = *(undefined8 *)(lVar3 + 0x50);
  uStack_70 = *(undefined8 *)(lVar3 + 0x58);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x18);
  local_68 = *(longlong *)(lVar4 + 0x28);
  lStack_60 = local_68 + (longlong)*(int *)(lVar4 + 0x30) * 8;
  local_58 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x20);
  lStack_50 = local_58 + (longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + 0x28) * 8;
  local_48 = *(longlong *)(lVar3 + 0x1a30);
  lStack_40 = (longlong)*(int *)(lVar3 + 0x1a38) * 0x20 + local_48;
  local_38 = *(longlong *)(lVar3 + 0x1a40);
  lStack_30 = (longlong)*(int *)(lVar3 + 0x1a48) * 0x10 + local_38;
  while( true ) {
    while( true ) {
      puVar5 = (ulonglong *)
               ((longlong)*(int *)((longlong)iVar2 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x58)) *
                0x40 + *(longlong *)(param_1 + 0x1a8));
      LOCK();
      uVar1 = *puVar5;
      *puVar5 = *puVar5 + 1;
      UNLOCK();
      if ((uint)(uVar1 >> 0x20) <= (uint)uVar1) break;
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar1;
      FUN_143805410(param_1 + -0x20,&local_a8,uVar1 & 0xffffffff);
    }
    FUN_143df9e40(param_1 + 0x10,local_res8,iVar2 + 1,local_res10);
    if (local_res8[0] < 0) break;
    FUN_143805410(param_1 + -0x20,&local_a8,local_res10[0]);
  }
  return;
}



// FUNCTION 143804f70 FUN_143804f70 body=391 status=ok
// SIG undefined FUN_143804f70(void)

void FUN_143804f70(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  
  iVar2 = *(int *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x300);
  local_a8 = *(undefined8 *)(lVar3 + 0x20);
  uStack_a0 = *(undefined8 *)(lVar3 + 0x28);
  local_98 = *(undefined8 *)(lVar3 + 0x30);
  uStack_90 = *(undefined8 *)(lVar3 + 0x38);
  local_88 = *(undefined8 *)(lVar3 + 0x40);
  uStack_80 = *(undefined8 *)(lVar3 + 0x48);
  local_78 = *(undefined8 *)(lVar3 + 0x50);
  uStack_70 = *(undefined8 *)(lVar3 + 0x58);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x18);
  local_68 = *(longlong *)(lVar4 + 0x38);
  lStack_60 = local_68 + (longlong)*(int *)(lVar4 + 0x40) * 8;
  local_58 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x30);
  lStack_50 = local_58 + (longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + 0x38) * 8;
  local_48 = *(longlong *)(lVar3 + 0x3400);
  lStack_40 = (longlong)*(int *)(lVar3 + 0x3408) * 0x20 + local_48;
  local_38 = *(longlong *)(lVar3 + 0x3410);
  lStack_30 = (longlong)*(int *)(lVar3 + 0x3418) * 0x10 + local_38;
  while( true ) {
    while( true ) {
      puVar5 = (ulonglong *)
               ((longlong)*(int *)((longlong)iVar2 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x58)) *
                0x40 + *(longlong *)(param_1 + 0x1a8));
      LOCK();
      uVar1 = *puVar5;
      *puVar5 = *puVar5 + 1;
      UNLOCK();
      if ((uint)(uVar1 >> 0x20) <= (uint)uVar1) break;
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar1;
      FUN_143805410(param_1 + -0x20,&local_a8,uVar1 & 0xffffffff);
    }
    FUN_143df9e40(param_1 + 0x10,local_res8,iVar2 + 1,local_res10);
    if (local_res8[0] < 0) break;
    FUN_143805410(param_1 + -0x20,&local_a8,local_res10[0]);
  }
  return;
}



// FUNCTION 143805100 FUN_143805100 body=256 status=ok
// SIG undefined FUN_143805100(void)

void FUN_143805100(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong *puVar4;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_143804be0(param_1 + -0x20,&local_58);
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar4 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + 1;
    UNLOCK();
    if ((uint)uVar2 < (uint)(uVar2 >> 0x20)) {
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res8,iVar1 + 1,local_res10);
      if (local_res8[0] < 0) {
        pvVar3 = TlsGetValue(DAT_146b8198c);
        if (pvVar3 != (LPVOID)0x0) {
          FUN_14370d750(pvVar3,"EtBuildAabbsAndPoints");
        }
        return;
      }
      uVar2 = (ulonglong)local_res10[0];
    }
    FUN_143805630(param_1 + -0x20,&local_58,uVar2 & 0xffffffff);
  } while( true );
}



// FUNCTION 143805200 FUN_143805200 body=148 status=ok
// SIG undefined FUN_143805200(void)

void FUN_143805200(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined1 local_res8 [8];
  int local_res10 [2];
  uint local_res18 [4];
  
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar3 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    if ((uint)uVar2 < (uint)(uVar2 >> 0x20)) {
      local_res10[0] = 0;
      local_res18[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res10,iVar1 + 1,local_res18);
      if (local_res10[0] < 0) {
        return;
      }
      uVar2 = (ulonglong)local_res18[0];
    }
    FUN_143805850(param_1 + -0x20,local_res8,uVar2 & 0xffffffff);
  } while( true );
}



// FUNCTION 1438052a0 FUN_1438052a0 body=259 status=ok
// SIG undefined FUN_1438052a0(void)

void FUN_1438052a0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong *puVar4;
  int local_res8 [2];
  uint local_res10 [2];
  undefined1 local_98 [64];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_143804cd0(param_1 + -0x20,local_98);
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar4 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + 1;
    UNLOCK();
    if ((uint)uVar2 < (uint)(uVar2 >> 0x20)) {
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res8,iVar1 + 1,local_res10);
      if (local_res8[0] < 0) {
        pvVar3 = TlsGetValue(DAT_146b8198c);
        if (pvVar3 != (LPVOID)0x0) {
          FUN_14370d750(pvVar3,"EtQuantizeInputVertices");
        }
        return;
      }
      uVar2 = (ulonglong)local_res10[0];
    }
    FUN_143805a20(param_1 + -0x20,local_98,uVar2 & 0xffffffff);
  } while( true );
}



// FUNCTION 1438053b0 FUN_1438053b0 body=89 status=ok
// SIG undefined FUN_1438053b0(void)

void FUN_1438053b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x18) + 0x48);
  if (lVar1 != 0) {
    lVar3 = FUN_14381b050(lVar1,*(longlong *)(param_1 + 0x10) + 0x20);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
    lVar2 = *(longlong *)(lVar1 + 0x50);
    if (lVar3 != lVar2) {
      if (lVar2 != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar1 + 0x50) = lVar3;
    }
  }
  return;
}



// FUNCTION 143805410 FUN_143805410 body=530 status=ok
// SIG undefined FUN_143805410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143805410(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float fVar18;
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  int local_88;
  undefined8 local_58;
  longlong local_48;
  undefined8 local_3c;
  
  lVar16 = (longlong)param_3;
  lVar7 = FUN_14381b050(*(undefined8 *)(*(longlong *)(param_2 + 0x40) + lVar16 * 8));
  lVar8 = *(longlong *)(param_2 + 0x50);
  lVar3 = *(longlong *)(lVar8 + lVar16 * 8);
  if (lVar7 != lVar3) {
    if (lVar3 != 0) {
      FUN_14370c150();
    }
    *(longlong *)(lVar8 + lVar16 * 8) = lVar7;
  }
  plVar4 = *(longlong **)(lVar7 + 0x38);
  local_3c = *plVar4;
  iVar15 = (int)plVar4[1];
  lVar8 = (longlong)(int)(((longlong)*(int *)(lVar7 + 0x40) * 0xc) / 0xc);
  iVar12 = (int)local_3c;
  iVar13 = (int)local_3c;
  iVar14 = iVar15;
  if (lVar8 < 2) {
    local_3c._4_4_ = (uint)((ulonglong)local_3c >> 0x20);
    uVar10 = local_3c._4_4_;
    uVar11 = local_3c._4_4_;
  }
  else {
    lVar8 = lVar8 + -1;
    local_48 = local_3c;
    do {
      iVar2 = *(int *)((longlong)plVar4 + 0x14);
      lVar3 = *(longlong *)((longlong)plVar4 + 0xc);
      local_88 = (int)lVar3;
      uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
      iVar6 = local_88;
      if (iVar13 < local_88) {
        iVar6 = iVar13;
      }
      iVar13 = iVar6;
      uVar5 = (uint)((ulonglong)local_48 >> 0x20);
      uVar10 = uVar11;
      if ((int)uVar5 < (int)uVar11) {
        uVar10 = uVar5;
      }
      local_48 = (ulonglong)uVar10 << 0x20;
      iVar6 = iVar2;
      if (iVar14 < iVar2) {
        iVar6 = iVar14;
      }
      iVar14 = iVar6;
      if (local_88 < iVar12) {
        local_88 = iVar12;
      }
      iVar12 = local_88;
      uVar5 = (uint)((ulonglong)local_3c >> 0x20);
      if ((int)uVar11 < (int)uVar5) {
        uVar11 = uVar5;
      }
      local_3c = (ulonglong)uVar11 << 0x20;
      if (iVar2 < iVar15) {
        iVar2 = iVar15;
      }
      iVar15 = iVar2;
      lVar8 = lVar8 + -1;
      plVar4 = (longlong *)((longlong)plVar4 + 0xc);
    } while (lVar8 != 0);
  }
  pauVar9 = (undefined1 (*) [16])(lVar16 * 0x20 + *(longlong *)(param_2 + 0x60));
  auVar19._0_4_ = (float)iVar13;
  auVar17._0_4_ = (float)iVar12;
  auVar19._4_4_ = (float)(int)uVar10;
  auVar19._8_4_ = (float)iVar14;
  auVar19._12_4_ = 0;
  *pauVar9 = auVar19;
  auVar17._4_4_ = (float)(int)uVar11;
  auVar17._8_4_ = (float)iVar15;
  auVar17._12_4_ = 0;
  pauVar9[1] = auVar17;
  fVar18 = ((float)iVar15 + (float)iVar14) * fRam00000001467f07e8;
  local_58 = CONCAT44(((float)(int)uVar11 + (float)(int)uVar10) * fRam00000001467f07e4,
                      (auVar17._0_4_ + auVar19._0_4_) * _DAT_1467f07e0);
  puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + lVar16 * 0x10);
  *puVar1 = local_58;
  puVar1[1] = CONCAT44(param_3,fVar18) | 0x3f00000000000000;
  return;
}



// FUNCTION 143805630 FUN_143805630 body=531 status=ok
// SIG undefined FUN_143805630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143805630(undefined8 param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int local_res10;
  int local_68;
  undefined8 local_58;
  float fStack_50;
  uint uStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  lVar11 = (longlong)(int)param_3;
  thunk_FUN_143719c70(0xd4c567e0);
  lVar6 = *param_2;
  auVar12 = *(undefined1 (*) [16])(param_2[2] + lVar11 * 0x10);
  lVar7 = (longlong)auVar12._4_4_;
  lVar8 = (longlong)auVar12._0_4_;
  uVar2 = *(undefined8 *)(lVar6 + lVar7 * 0xc);
  iVar4 = *(int *)(lVar6 + 8 + lVar7 * 0xc);
  local_68 = (int)uVar2;
  uVar3 = *(undefined8 *)(lVar6 + lVar8 * 0xc);
  iVar5 = *(int *)(lVar6 + 8 + lVar8 * 0xc);
  local_58._0_4_ = (int)uVar3;
  local_48 = local_68;
  if ((int)local_58 < local_68) {
    local_48 = (int)local_58;
  }
  local_44 = (int)((ulonglong)uVar2 >> 0x20);
  iVar10 = (int)((ulonglong)uVar3 >> 0x20);
  if (iVar10 < local_44) {
    local_44 = iVar10;
  }
  iVar10 = iVar4;
  local_40 = local_res10;
  if (iVar5 < iVar4) {
    iVar10 = local_res10;
    local_40 = iVar5;
  }
  uVar2 = *(undefined8 *)(lVar6 + lVar7 * 0xc);
  uVar3 = *(undefined8 *)(lVar6 + lVar8 * 0xc);
  if (iVar4 <= iVar5) {
    local_40 = iVar10;
  }
  local_58._0_4_ = (int)uVar2;
  local_68 = (int)uVar3;
  if ((int)local_58 < local_68) {
    local_58._0_4_ = local_68;
  }
  iVar10 = (int)((ulonglong)uVar3 >> 0x20);
  local_38 = (int)((ulonglong)uVar2 >> 0x20);
  if (local_38 < iVar10) {
    local_38 = iVar10;
  }
  iVar10 = iVar4;
  if (iVar4 < iVar5) {
    iVar10 = local_res10;
    local_res10 = iVar5;
  }
  local_34 = local_res10;
  if (iVar5 <= iVar4) {
    local_34 = iVar10;
  }
  fStack_50 = *(float *)(lVar6 + 8 + (longlong)auVar12._8_4_ * 0xc);
  local_3c = (int)local_58;
  local_58 = *(undefined8 *)(lVar6 + (longlong)auVar12._8_4_ * 0xc);
  FUN_143804ae0(&local_48,&local_58);
  uStack_4c = param_3 | 0x3f000000;
  pauVar9 = (undefined1 (*) [16])(lVar11 * 0x20 + param_2[4]);
  auVar12._0_4_ = (float)local_3c;
  auVar13._0_4_ = (float)local_48;
  auVar13._4_4_ = (float)local_44;
  auVar13._8_4_ = (float)local_40;
  auVar13._12_4_ = 0;
  *pauVar9 = auVar13;
  auVar12._4_4_ = (float)local_38;
  auVar12._8_4_ = (float)local_34;
  auVar12._12_4_ = 0;
  pauVar9[1] = auVar12;
  fStack_50 = ((float)local_34 + (float)local_40) * fRam00000001467f07e8;
  local_58 = CONCAT44(((float)local_38 + (float)local_44) * fRam00000001467f07e4,
                      (auVar12._0_4_ + auVar13._0_4_) * _DAT_1467f07e0);
  puVar1 = (undefined8 *)(param_2[6] + lVar11 * 0x10);
  *puVar1 = local_58;
  puVar1[1] = CONCAT44(param_3,fStack_50) | 0x3f00000000000000;
  thunk_FUN_143719c70(0x5e09c539);
  return;
}



// FUNCTION 143805850 FUN_143805850 body=453 status=ok
// SIG undefined FUN_143805850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143805850(longlong param_1,undefined8 param_2,int param_3)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [16];
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_res8;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar8 = (longlong)param_3;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 800) + 0x18) + 0x18) + 0x60);
  local_28 = *(longlong *)(lVar2 + lVar8 * 0x10);
  uStack_20 = (longlong)*(int *)(lVar2 + 8 + lVar8 * 0x10) * 0x10 + local_28;
  FUN_14381bce0(&local_res8,&local_28);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 800) + 0x18) + 0x40);
  if (local_res8 != 0) {
    FUN_14370c030(local_res8);
  }
  if (*(longlong *)(lVar2 + lVar8 * 8) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar2 + lVar8 * 8) = local_res8;
  fVar16 = fRam00000001467f08ec;
  uVar6 = 0;
  auVar13._0_8_ = (ulonglong)DAT_1467f08d0 ^ 0x8000000080000000;
  auVar13._8_4_ = DAT_1467f08d0._8_4_ ^ 0x80000000;
  auVar13._12_4_ = DAT_1467f08d0._12_4_ ^ 0x80000000;
  puVar4 = *(undefined8 **)(local_res8 + 0x18);
  uVar7 = (ulonglong)((longlong)(puVar4 + *(int *)(local_res8 + 0x20)) + (7 - (longlong)puVar4)) >>
          3;
  if (puVar4 + *(int *)(local_res8 + 0x20) < puVar4) {
    uVar7 = uVar6;
  }
  auVar17 = _DAT_1467f08d0;
  if (uVar7 != 0) {
    do {
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar6 = uVar6 + 1;
      auVar11._0_4_ = (float)(int)uVar3;
      auVar11._4_4_ = (float)(int)((ulonglong)uVar3 >> 0x20);
      auVar11._8_8_ = 0;
      auVar17 = minps(auVar17,auVar11);
      auVar13 = maxps(auVar13,auVar11);
    } while (uVar6 != uVar7);
  }
  auVar18._12_4_ = auVar17._12_4_;
  fVar9 = 0.0 - _DAT_1467f08e0;
  fVar10 = 0.0 - fRam00000001467f08ec;
  pauVar5 = (undefined1 (*) [16])
            (lVar8 * 0x20 + *(longlong *)(*(longlong *)(param_1 + 800) + 0x3420));
  auVar18._0_8_ = auVar17._0_8_;
  auVar18._8_4_ = fVar10;
  auVar14._12_4_ = auVar13._12_4_;
  *pauVar5 = auVar18;
  auVar14._0_8_ = auVar13._0_8_;
  auVar14._8_4_ = fVar16;
  pauVar5[1] = auVar14;
  fVar12 = (auVar13._0_4_ + auVar17._0_4_) * _DAT_1467f07e0;
  fVar15 = (auVar13._4_4_ + auVar17._4_4_) * fRam00000001467f07e4;
  fVar16 = (fVar16 + fVar10) * fRam00000001467f07e8;
  local_28 = CONCAT44(fVar15,fVar12);
  uStack_20 = CONCAT44(param_3,fVar16) | 0x3f00000000000000;
  pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_1 + 800) + 0x3430) + lVar8 * 0x10);
  *pfVar1 = fVar12;
  pfVar1[1] = fVar15;
  pfVar1[2] = fVar16;
  pfVar1[3] = uStack_20._4_4_;
  if (local_res8 != 0) {
    FUN_14370c150(local_res8,fVar9);
  }
  return;
}



// FUNCTION 143805a20 FUN_143805a20 body=217 status=ok
// SIG undefined FUN_143805a20(void)

void FUN_143805a20(undefined8 param_1,float *param_2,int param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  thunk_FUN_143719c70(0x464c98da);
  lVar6 = (longlong)param_3 * 0x10;
  pfVar1 = (float *)(lVar6 + *(longlong *)(param_2 + 0x10));
  fVar10 = *pfVar1;
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar7 = fVar10 * *param_2 + param_2[0xc] + fVar3 * param_2[4] + fVar4 * param_2[8];
  fVar8 = fVar10 * param_2[1] + param_2[0xd] + fVar3 * param_2[5] + fVar4 * param_2[9];
  fVar9 = fVar10 * param_2[2] + param_2[0xe] + fVar3 * param_2[6] + fVar4 * param_2[10];
  fVar10 = fVar10 * param_2[3] + param_2[0xf] + fVar3 * param_2[7] + fVar4 * param_2[0xb];
  auVar2._4_4_ = -(uint)(fVar8 <= param_2[0x1d] && param_2[0x19] <= fVar8);
  auVar2._0_4_ = -(uint)(fVar7 <= param_2[0x1c] && param_2[0x18] <= fVar7);
  auVar2._8_4_ = -(uint)(fVar9 <= param_2[0x1e] && param_2[0x1a] <= fVar9);
  auVar2._12_4_ = -(uint)(fVar10 <= param_2[0x1f] && param_2[0x1b] <= fVar10);
  uVar5 = movmskps((int)*(longlong *)(param_2 + 0x10),auVar2);
  if (((byte)uVar5 & 7) != 7) {
    FUN_143732400(0x4fa4e68e,
                  "NavMesh\\Generation\\hkaiNavMeshGenerationSimpleGeometryView_build.cpp",0x82,
                  "For SimpleGeometrySource, transformed geometry must be contained within the domain extents. If your geometry is large, you may need to increase the quantum in the generation settings."
                  ,&DAT_145b909f0,0);
  }
  FUN_143819890(*(longlong *)(param_2 + 0x10) + lVar6,param_2,
                *(longlong *)(param_2 + 0x14) + (longlong)param_3 * 0xc);
  thunk_FUN_143719c70(0xc7dec42);
  return;
}



// FUNCTION 143805b00 FUN_143805b00 body=21 status=ok
// SIG undefined FUN_143805b00(void)

int * FUN_143805b00(int *param_1,int *param_2,int *param_3)

{
  *param_1 = *param_2 - *param_3;
  param_1[1] = param_2[1] - param_3[1];
  return param_1;
}



// FUNCTION 143805b20 FUN_143805b20 body=31 status=ok
// SIG undefined FUN_143805b20(void)

int * FUN_143805b20(int *param_1,int *param_2,int *param_3)

{
  *param_1 = *param_2 - *param_3;
  param_1[1] = param_2[1] - param_3[1];
  param_1[2] = param_2[2] - param_3[2];
  return param_1;
}



// FUNCTION 143805b40 thunk_FUN_143805c20 body=5 status=ok
// SIG undefined thunk_FUN_143805c20(void)

void thunk_FUN_143805c20(longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 aauStack_438 [2] [16];
  undefined4 uStack_418;
  undefined1 auStack_414 [1016];
  int iStack_1c;
  
  pauVar10 = (undefined1 (*) [16])auStack_414;
  lVar2 = *param_1;
  iStack_1c = -0x30dec7bc;
  uStack_418 = param_4;
  uVar7 = 1;
  if ((*(uint *)(DAT_146b83e88 + 0x20) & 0x820000) == 0x820000) {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        auVar24._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar24._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar24._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar24._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar24);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar22._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar22._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar22._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar22._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar22);
        aauStack_438[0] =
             pshufb(*(undefined1 (*) [16])(pfVar9 + 0x18),
                    *(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10));
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = aauStack_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807be0(param_3,aauStack_438,iVar6);
        }
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        auVar23._0_4_ =
             -(uint)(((param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc]) &&
                     (*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4])) &&
                    (pfVar11[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar11[0x14]));
        auVar23._4_4_ =
             -(uint)(((param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd]) &&
                     (pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5])) &&
                    (pfVar11[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar11[0x15]));
        auVar23._8_4_ =
             -(uint)(((param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe]) &&
                     (pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6])) &&
                    (pfVar11[0x12] <= param_2[0x16] && param_2[0x12] <= pfVar11[0x16]));
        auVar23._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf]) &&
                     (pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7])) &&
                    (pfVar11[0x13] <= param_2[0x17] && param_2[0x13] <= pfVar11[0x17]));
        iVar6 = movmskps(iVar6,auVar23);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      aauStack_438[0] =
           pshufb(auVar12,*(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10));
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      if (cVar1 == '\0') {
        *pauVar10 = aauStack_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807be0(param_3,aauStack_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  else {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar28._0_4_ =
             -(uint)((param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]) &&
                    ((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                    (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])));
        auVar28._4_4_ =
             -(uint)((param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]) &&
                    ((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                    (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])));
        auVar28._8_4_ =
             -(uint)((param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]) &&
                    ((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                    (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])));
        auVar28._12_4_ =
             -(uint)((param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]) &&
                    ((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                    (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar28);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar25._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]));
        auVar25._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]));
        auVar25._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar25._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar25);
        uVar18 = auVar12._0_4_;
        uVar19 = auVar12._4_4_;
        uVar20 = auVar12._8_4_;
        uVar21 = auVar12._12_4_;
        auVar26._4_4_ = uVar21;
        auVar26._0_4_ = uVar21;
        auVar26._8_4_ = uVar21;
        auVar26._12_4_ = uVar21;
        auVar12._4_4_ = uVar20;
        auVar12._0_4_ = uVar20;
        auVar12._8_4_ = uVar20;
        auVar12._12_4_ = uVar20;
        auVar16._4_4_ = uVar19;
        auVar16._0_4_ = uVar19;
        auVar16._8_4_ = uVar19;
        auVar16._12_4_ = uVar19;
        lVar8 = (longlong)iVar6 * 0x40;
        auVar13._4_4_ = uVar18;
        auVar13._0_4_ = uVar18;
        auVar13._8_4_ = uVar18;
        auVar13._12_4_ = uVar18;
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        aauStack_438[0] =
             auVar26 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
             auVar12 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
             auVar16 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
             auVar13 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = aauStack_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807be0(param_3,aauStack_438,iVar6);
        }
        auVar27._0_4_ =
             -(uint)(((*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4]) &&
                     (param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc])) &&
                    (param_2[0x10] <= pfVar11[0x14] && pfVar11[0x10] <= param_2[0x14]));
        auVar27._4_4_ =
             -(uint)(((pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5]) &&
                     (param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd])) &&
                    (param_2[0x11] <= pfVar11[0x15] && pfVar11[0x11] <= param_2[0x15]));
        auVar27._8_4_ =
             -(uint)(((pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6]) &&
                     (param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe])) &&
                    (param_2[0x12] <= pfVar11[0x16] && pfVar11[0x12] <= param_2[0x16]));
        auVar27._12_4_ =
             -(uint)(((pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7]) &&
                     (param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf])) &&
                    (param_2[0x13] <= pfVar11[0x17] && pfVar11[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        iVar6 = movmskps(iVar6,auVar27);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      lVar8 = (longlong)iVar6 * 0x40;
      uVar18 = auVar12._0_4_;
      uVar19 = auVar12._4_4_;
      uVar20 = auVar12._8_4_;
      uVar21 = auVar12._12_4_;
      auVar14._4_4_ = uVar20;
      auVar14._0_4_ = uVar20;
      auVar14._8_4_ = uVar20;
      auVar14._12_4_ = uVar20;
      auVar29._4_4_ = uVar21;
      auVar29._0_4_ = uVar21;
      auVar29._8_4_ = uVar21;
      auVar29._12_4_ = uVar21;
      auVar17._4_4_ = uVar19;
      auVar17._0_4_ = uVar19;
      auVar17._8_4_ = uVar19;
      auVar17._12_4_ = uVar19;
      auVar15._4_4_ = uVar18;
      auVar15._0_4_ = uVar18;
      auVar15._8_4_ = uVar18;
      auVar15._12_4_ = uVar18;
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      aauStack_438[0] =
           auVar29 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
           auVar14 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
           auVar17 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
           auVar15 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
      if (cVar1 == '\0') {
        *pauVar10 = aauStack_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807be0(param_3,aauStack_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  if (iStack_1c != -0x30dec7bc) {
    FUN_1437134a0(aauStack_438,&uStack_418,0x200);
    Electra::FHTTPResourceRequest::URL(aauStack_438,"Stack overflow");
    iVar6 = FUN_143732300(0xca3f6c0f,&uStack_418,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Geometry/Collide/DataStructures/SimdTree/hkcdSimdTree.inl"
                          ,0x141);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_143713520(aauStack_438);
  }
  return;
}



// FUNCTION 143805b50 FUN_143805b50 body=96 status=ok
// SIG undefined FUN_143805b50(void)

void FUN_143805b50(undefined8 param_1,undefined4 *param_2)

{
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
  
  local_68 = *param_2;
  local_48 = param_2[1];
  local_28 = param_2[2];
  local_58 = param_2[4];
  local_18 = param_2[6];
  local_38 = param_2[5];
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  uStack_54 = local_58;
  uStack_50 = local_58;
  uStack_4c = local_58;
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  uStack_34 = local_38;
  uStack_30 = local_38;
  uStack_2c = local_38;
  uStack_24 = local_28;
  uStack_20 = local_28;
  uStack_1c = local_28;
  uStack_14 = local_18;
  uStack_10 = local_18;
  uStack_c = local_18;
  thunk_FUN_143805c20(local_18,&local_68);
  return;
}



// FUNCTION 143805bb0 thunk_FUN_143806120 body=5 status=ok
// SIG undefined thunk_FUN_143806120(void)

void thunk_FUN_143806120(longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 aauStack_438 [2] [16];
  undefined4 uStack_418;
  undefined1 auStack_414 [1016];
  int iStack_1c;
  
  pauVar10 = (undefined1 (*) [16])auStack_414;
  lVar2 = *param_1;
  iStack_1c = -0x30dec7bc;
  uStack_418 = param_4;
  uVar7 = 1;
  if ((*(uint *)(DAT_146b83e88 + 0x20) & 0x820000) == 0x820000) {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        auVar24._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar24._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar24._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar24._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar24);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar22._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar22._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar22._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar22._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar22);
        aauStack_438[0] =
             pshufb(*(undefined1 (*) [16])(pfVar9 + 0x18),
                    *(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10));
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = aauStack_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807cc0(param_3,aauStack_438,iVar6);
        }
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        auVar23._0_4_ =
             -(uint)(((param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc]) &&
                     (*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4])) &&
                    (pfVar11[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar11[0x14]));
        auVar23._4_4_ =
             -(uint)(((param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd]) &&
                     (pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5])) &&
                    (pfVar11[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar11[0x15]));
        auVar23._8_4_ =
             -(uint)(((param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe]) &&
                     (pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6])) &&
                    (pfVar11[0x12] <= param_2[0x16] && param_2[0x12] <= pfVar11[0x16]));
        auVar23._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf]) &&
                     (pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7])) &&
                    (pfVar11[0x13] <= param_2[0x17] && param_2[0x13] <= pfVar11[0x17]));
        iVar6 = movmskps(iVar6,auVar23);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      aauStack_438[0] =
           pshufb(auVar12,*(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10));
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      if (cVar1 == '\0') {
        *pauVar10 = aauStack_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807cc0(param_3,aauStack_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  else {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar28._0_4_ =
             -(uint)((param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]) &&
                    ((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                    (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])));
        auVar28._4_4_ =
             -(uint)((param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]) &&
                    ((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                    (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])));
        auVar28._8_4_ =
             -(uint)((param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]) &&
                    ((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                    (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])));
        auVar28._12_4_ =
             -(uint)((param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]) &&
                    ((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                    (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar28);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar25._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]));
        auVar25._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]));
        auVar25._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar25._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar25);
        uVar18 = auVar12._0_4_;
        uVar19 = auVar12._4_4_;
        uVar20 = auVar12._8_4_;
        uVar21 = auVar12._12_4_;
        auVar26._4_4_ = uVar21;
        auVar26._0_4_ = uVar21;
        auVar26._8_4_ = uVar21;
        auVar26._12_4_ = uVar21;
        auVar12._4_4_ = uVar20;
        auVar12._0_4_ = uVar20;
        auVar12._8_4_ = uVar20;
        auVar12._12_4_ = uVar20;
        auVar16._4_4_ = uVar19;
        auVar16._0_4_ = uVar19;
        auVar16._8_4_ = uVar19;
        auVar16._12_4_ = uVar19;
        lVar8 = (longlong)iVar6 * 0x40;
        auVar13._4_4_ = uVar18;
        auVar13._0_4_ = uVar18;
        auVar13._8_4_ = uVar18;
        auVar13._12_4_ = uVar18;
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        aauStack_438[0] =
             auVar26 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
             auVar12 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
             auVar16 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
             auVar13 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = aauStack_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807cc0(param_3,aauStack_438,iVar6);
        }
        auVar27._0_4_ =
             -(uint)(((*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4]) &&
                     (param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc])) &&
                    (param_2[0x10] <= pfVar11[0x14] && pfVar11[0x10] <= param_2[0x14]));
        auVar27._4_4_ =
             -(uint)(((pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5]) &&
                     (param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd])) &&
                    (param_2[0x11] <= pfVar11[0x15] && pfVar11[0x11] <= param_2[0x15]));
        auVar27._8_4_ =
             -(uint)(((pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6]) &&
                     (param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe])) &&
                    (param_2[0x12] <= pfVar11[0x16] && pfVar11[0x12] <= param_2[0x16]));
        auVar27._12_4_ =
             -(uint)(((pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7]) &&
                     (param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf])) &&
                    (param_2[0x13] <= pfVar11[0x17] && pfVar11[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        iVar6 = movmskps(iVar6,auVar27);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      lVar8 = (longlong)iVar6 * 0x40;
      uVar18 = auVar12._0_4_;
      uVar19 = auVar12._4_4_;
      uVar20 = auVar12._8_4_;
      uVar21 = auVar12._12_4_;
      auVar14._4_4_ = uVar20;
      auVar14._0_4_ = uVar20;
      auVar14._8_4_ = uVar20;
      auVar14._12_4_ = uVar20;
      auVar29._4_4_ = uVar21;
      auVar29._0_4_ = uVar21;
      auVar29._8_4_ = uVar21;
      auVar29._12_4_ = uVar21;
      auVar17._4_4_ = uVar19;
      auVar17._0_4_ = uVar19;
      auVar17._8_4_ = uVar19;
      auVar17._12_4_ = uVar19;
      auVar15._4_4_ = uVar18;
      auVar15._0_4_ = uVar18;
      auVar15._8_4_ = uVar18;
      auVar15._12_4_ = uVar18;
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      aauStack_438[0] =
           auVar29 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
           auVar14 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
           auVar17 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
           auVar15 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
      if (cVar1 == '\0') {
        *pauVar10 = aauStack_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807cc0(param_3,aauStack_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  if (iStack_1c != -0x30dec7bc) {
    FUN_1437134a0(aauStack_438,&uStack_418,0x200);
    Electra::FHTTPResourceRequest::URL(aauStack_438,"Stack overflow");
    iVar6 = FUN_143732300(0xca3f6c0f,&uStack_418,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Geometry/Collide/DataStructures/SimdTree/hkcdSimdTree.inl"
                          ,0x141);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_143713520(aauStack_438);
  }
  return;
}



// FUNCTION 143805bc0 FUN_143805bc0 body=96 status=ok
// SIG undefined FUN_143805bc0(void)

void FUN_143805bc0(undefined8 param_1,undefined4 *param_2)

{
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
  
  local_68 = *param_2;
  local_48 = param_2[1];
  local_28 = param_2[2];
  local_58 = param_2[4];
  local_18 = param_2[6];
  local_38 = param_2[5];
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  uStack_54 = local_58;
  uStack_50 = local_58;
  uStack_4c = local_58;
  uStack_44 = local_48;
  uStack_40 = local_48;
  uStack_3c = local_48;
  uStack_34 = local_38;
  uStack_30 = local_38;
  uStack_2c = local_38;
  uStack_24 = local_28;
  uStack_20 = local_28;
  uStack_1c = local_28;
  uStack_14 = local_18;
  uStack_10 = local_18;
  uStack_c = local_18;
  thunk_FUN_143806120(local_18,&local_68);
  return;
}



// FUNCTION 143805c20 FUN_143805c20 body=1262 status=ok
// SIG undefined FUN_143805c20(void)

void FUN_143805c20(longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 local_438 [2] [16];
  undefined4 uStack_418;
  undefined1 auStack_414 [1016];
  int local_1c;
  
  pauVar10 = (undefined1 (*) [16])auStack_414;
  lVar2 = *param_1;
  local_1c = -0x30dec7bc;
  uStack_418 = param_4;
  uVar7 = 1;
  if ((*(uint *)(DAT_146b83e88 + 0x20) & 0x820000) == 0x820000) {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        auVar24._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar24._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar24._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar24._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar24);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar22._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar22._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar22._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar22._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar22);
        local_438[0] = pshufb(*(undefined1 (*) [16])(pfVar9 + 0x18),
                              *(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10));
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = local_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807be0(param_3,local_438,iVar6);
        }
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        auVar23._0_4_ =
             -(uint)(((param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc]) &&
                     (*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4])) &&
                    (pfVar11[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar11[0x14]));
        auVar23._4_4_ =
             -(uint)(((param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd]) &&
                     (pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5])) &&
                    (pfVar11[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar11[0x15]));
        auVar23._8_4_ =
             -(uint)(((param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe]) &&
                     (pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6])) &&
                    (pfVar11[0x12] <= param_2[0x16] && param_2[0x12] <= pfVar11[0x16]));
        auVar23._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf]) &&
                     (pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7])) &&
                    (pfVar11[0x13] <= param_2[0x17] && param_2[0x13] <= pfVar11[0x17]));
        iVar6 = movmskps(iVar6,auVar23);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      local_438[0] = pshufb(auVar12,*(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10))
      ;
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      if (cVar1 == '\0') {
        *pauVar10 = local_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807be0(param_3,local_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  else {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar28._0_4_ =
             -(uint)((param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]) &&
                    ((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                    (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])));
        auVar28._4_4_ =
             -(uint)((param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]) &&
                    ((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                    (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])));
        auVar28._8_4_ =
             -(uint)((param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]) &&
                    ((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                    (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])));
        auVar28._12_4_ =
             -(uint)((param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]) &&
                    ((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                    (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar28);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar25._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]));
        auVar25._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]));
        auVar25._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar25._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar25);
        uVar18 = auVar12._0_4_;
        uVar19 = auVar12._4_4_;
        uVar20 = auVar12._8_4_;
        uVar21 = auVar12._12_4_;
        auVar26._4_4_ = uVar21;
        auVar26._0_4_ = uVar21;
        auVar26._8_4_ = uVar21;
        auVar26._12_4_ = uVar21;
        auVar12._4_4_ = uVar20;
        auVar12._0_4_ = uVar20;
        auVar12._8_4_ = uVar20;
        auVar12._12_4_ = uVar20;
        auVar16._4_4_ = uVar19;
        auVar16._0_4_ = uVar19;
        auVar16._8_4_ = uVar19;
        auVar16._12_4_ = uVar19;
        lVar8 = (longlong)iVar6 * 0x40;
        auVar13._4_4_ = uVar18;
        auVar13._0_4_ = uVar18;
        auVar13._8_4_ = uVar18;
        auVar13._12_4_ = uVar18;
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        local_438[0] = auVar26 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
                       auVar12 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
                       auVar16 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
                       auVar13 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = local_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807be0(param_3,local_438,iVar6);
        }
        auVar27._0_4_ =
             -(uint)(((*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4]) &&
                     (param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc])) &&
                    (param_2[0x10] <= pfVar11[0x14] && pfVar11[0x10] <= param_2[0x14]));
        auVar27._4_4_ =
             -(uint)(((pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5]) &&
                     (param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd])) &&
                    (param_2[0x11] <= pfVar11[0x15] && pfVar11[0x11] <= param_2[0x15]));
        auVar27._8_4_ =
             -(uint)(((pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6]) &&
                     (param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe])) &&
                    (param_2[0x12] <= pfVar11[0x16] && pfVar11[0x12] <= param_2[0x16]));
        auVar27._12_4_ =
             -(uint)(((pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7]) &&
                     (param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf])) &&
                    (param_2[0x13] <= pfVar11[0x17] && pfVar11[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        iVar6 = movmskps(iVar6,auVar27);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      lVar8 = (longlong)iVar6 * 0x40;
      uVar18 = auVar12._0_4_;
      uVar19 = auVar12._4_4_;
      uVar20 = auVar12._8_4_;
      uVar21 = auVar12._12_4_;
      auVar14._4_4_ = uVar20;
      auVar14._0_4_ = uVar20;
      auVar14._8_4_ = uVar20;
      auVar14._12_4_ = uVar20;
      auVar29._4_4_ = uVar21;
      auVar29._0_4_ = uVar21;
      auVar29._8_4_ = uVar21;
      auVar29._12_4_ = uVar21;
      auVar17._4_4_ = uVar19;
      auVar17._0_4_ = uVar19;
      auVar17._8_4_ = uVar19;
      auVar17._12_4_ = uVar19;
      auVar15._4_4_ = uVar18;
      auVar15._0_4_ = uVar18;
      auVar15._8_4_ = uVar18;
      auVar15._12_4_ = uVar18;
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      local_438[0] = auVar29 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
                     auVar14 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
                     auVar17 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
                     auVar15 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
      if (cVar1 == '\0') {
        *pauVar10 = local_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807be0(param_3,local_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  if (local_1c != -0x30dec7bc) {
    FUN_1437134a0(local_438,&uStack_418,0x200);
    Electra::FHTTPResourceRequest::URL(local_438,"Stack overflow");
    iVar6 = FUN_143732300(0xca3f6c0f,&uStack_418,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Geometry/Collide/DataStructures/SimdTree/hkcdSimdTree.inl"
                          ,0x141);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_143713520(local_438);
  }
  return;
}



// FUNCTION 143806120 FUN_143806120 body=1262 status=ok
// SIG undefined FUN_143806120(void)

void FUN_143806120(longlong *param_1,float *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 local_438 [2] [16];
  undefined4 uStack_418;
  undefined1 auStack_414 [1016];
  int local_1c;
  
  pauVar10 = (undefined1 (*) [16])auStack_414;
  lVar2 = *param_1;
  local_1c = -0x30dec7bc;
  uStack_418 = param_4;
  uVar7 = 1;
  if ((*(uint *)(DAT_146b83e88 + 0x20) & 0x820000) == 0x820000) {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        auVar24._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar24._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar24._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar24._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar24);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar22._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (pfVar9[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar9[0x14]));
        auVar22._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (pfVar9[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar9[0x15]));
        auVar22._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar22._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        iVar6 = movmskps((int)uVar7,auVar22);
        local_438[0] = pshufb(*(undefined1 (*) [16])(pfVar9 + 0x18),
                              *(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10));
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = local_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807cc0(param_3,local_438,iVar6);
        }
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        auVar23._0_4_ =
             -(uint)(((param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc]) &&
                     (*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4])) &&
                    (pfVar11[0x10] <= param_2[0x14] && param_2[0x10] <= pfVar11[0x14]));
        auVar23._4_4_ =
             -(uint)(((param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd]) &&
                     (pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5])) &&
                    (pfVar11[0x11] <= param_2[0x15] && param_2[0x11] <= pfVar11[0x15]));
        auVar23._8_4_ =
             -(uint)(((param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe]) &&
                     (pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6])) &&
                    (pfVar11[0x12] <= param_2[0x16] && param_2[0x12] <= pfVar11[0x16]));
        auVar23._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf]) &&
                     (pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7])) &&
                    (pfVar11[0x13] <= param_2[0x17] && param_2[0x13] <= pfVar11[0x17]));
        iVar6 = movmskps(iVar6,auVar23);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      local_438[0] = pshufb(auVar12,*(undefined1 (*) [16])(&DAT_145dc9250 + (longlong)iVar6 * 0x10))
      ;
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      if (cVar1 == '\0') {
        *pauVar10 = local_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807cc0(param_3,local_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  else {
    do {
      if (uVar7 < 2) {
        pauVar4 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 0xc);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 0xc) * 0x80 + lVar2);
        auVar28._0_4_ =
             -(uint)((param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]) &&
                    ((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                    (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])));
        auVar28._4_4_ =
             -(uint)((param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]) &&
                    ((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                    (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])));
        auVar28._8_4_ =
             -(uint)((param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]) &&
                    ((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                    (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])));
        auVar28._12_4_ =
             -(uint)((param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]) &&
                    ((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                    (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar28);
        cVar1 = *(char *)(pfVar9 + 0x1d);
      }
      else {
        pauVar4 = pauVar10 + -1;
        pauVar5 = pauVar10 + -1;
        pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
        pfVar9 = (float *)((ulonglong)*(uint *)(*pauVar4 + 8) * 0x80 + lVar2);
        pfVar11 = (float *)((ulonglong)*(uint *)(*pauVar5 + 0xc) * 0x80 + lVar2);
        auVar25._0_4_ =
             -(uint)(((param_2[8] <= pfVar9[0xc] && pfVar9[8] <= param_2[0xc]) &&
                     (*param_2 <= pfVar9[4] && *pfVar9 <= param_2[4])) &&
                    (param_2[0x10] <= pfVar9[0x14] && pfVar9[0x10] <= param_2[0x14]));
        auVar25._4_4_ =
             -(uint)(((param_2[9] <= pfVar9[0xd] && pfVar9[9] <= param_2[0xd]) &&
                     (param_2[1] <= pfVar9[5] && pfVar9[1] <= param_2[5])) &&
                    (param_2[0x11] <= pfVar9[0x15] && pfVar9[0x11] <= param_2[0x15]));
        auVar25._8_4_ =
             -(uint)(((param_2[10] <= pfVar9[0xe] && pfVar9[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar9[6] && pfVar9[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar9[0x16] && pfVar9[0x12] <= param_2[0x16]));
        auVar25._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar9[0xf] && pfVar9[0xb] <= param_2[0xf]) &&
                     (param_2[3] <= pfVar9[7] && pfVar9[3] <= param_2[7])) &&
                    (param_2[0x13] <= pfVar9[0x17] && pfVar9[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar9 + 0x18);
        iVar6 = movmskps((int)uVar7,auVar25);
        uVar18 = auVar12._0_4_;
        uVar19 = auVar12._4_4_;
        uVar20 = auVar12._8_4_;
        uVar21 = auVar12._12_4_;
        auVar26._4_4_ = uVar21;
        auVar26._0_4_ = uVar21;
        auVar26._8_4_ = uVar21;
        auVar26._12_4_ = uVar21;
        auVar12._4_4_ = uVar20;
        auVar12._0_4_ = uVar20;
        auVar12._8_4_ = uVar20;
        auVar12._12_4_ = uVar20;
        auVar16._4_4_ = uVar19;
        auVar16._0_4_ = uVar19;
        auVar16._8_4_ = uVar19;
        auVar16._12_4_ = uVar19;
        lVar8 = (longlong)iVar6 * 0x40;
        auVar13._4_4_ = uVar18;
        auVar13._0_4_ = uVar18;
        auVar13._8_4_ = uVar18;
        auVar13._12_4_ = uVar18;
        iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
        local_438[0] = auVar26 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
                       auVar12 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
                       auVar16 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
                       auVar13 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
        if (*(char *)(pfVar9 + 0x1d) == '\0') {
          *pauVar10 = local_438[0];
          pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
        }
        else {
          iVar6 = FUN_143807cc0(param_3,local_438,iVar6);
        }
        auVar27._0_4_ =
             -(uint)(((*pfVar11 <= param_2[4] && *param_2 <= pfVar11[4]) &&
                     (param_2[8] <= pfVar11[0xc] && pfVar11[8] <= param_2[0xc])) &&
                    (param_2[0x10] <= pfVar11[0x14] && pfVar11[0x10] <= param_2[0x14]));
        auVar27._4_4_ =
             -(uint)(((pfVar11[1] <= param_2[5] && param_2[1] <= pfVar11[5]) &&
                     (param_2[9] <= pfVar11[0xd] && pfVar11[9] <= param_2[0xd])) &&
                    (param_2[0x11] <= pfVar11[0x15] && pfVar11[0x11] <= param_2[0x15]));
        auVar27._8_4_ =
             -(uint)(((pfVar11[2] <= param_2[6] && param_2[2] <= pfVar11[6]) &&
                     (param_2[10] <= pfVar11[0xe] && pfVar11[10] <= param_2[0xe])) &&
                    (param_2[0x12] <= pfVar11[0x16] && pfVar11[0x12] <= param_2[0x16]));
        auVar27._12_4_ =
             -(uint)(((pfVar11[3] <= param_2[7] && param_2[3] <= pfVar11[7]) &&
                     (param_2[0xb] <= pfVar11[0xf] && pfVar11[0xb] <= param_2[0xf])) &&
                    (param_2[0x13] <= pfVar11[0x17] && pfVar11[0x13] <= param_2[0x17]));
        auVar12 = *(undefined1 (*) [16])(pfVar11 + 0x18);
        iVar6 = movmskps(iVar6,auVar27);
        cVar1 = *(char *)(pfVar11 + 0x1d);
      }
      lVar8 = (longlong)iVar6 * 0x40;
      uVar18 = auVar12._0_4_;
      uVar19 = auVar12._4_4_;
      uVar20 = auVar12._8_4_;
      uVar21 = auVar12._12_4_;
      auVar14._4_4_ = uVar20;
      auVar14._0_4_ = uVar20;
      auVar14._8_4_ = uVar20;
      auVar14._12_4_ = uVar20;
      auVar29._4_4_ = uVar21;
      auVar29._0_4_ = uVar21;
      auVar29._8_4_ = uVar21;
      auVar29._12_4_ = uVar21;
      auVar17._4_4_ = uVar19;
      auVar17._0_4_ = uVar19;
      auVar17._8_4_ = uVar19;
      auVar17._12_4_ = uVar19;
      auVar15._4_4_ = uVar18;
      auVar15._0_4_ = uVar18;
      auVar15._8_4_ = uVar18;
      auVar15._12_4_ = uVar18;
      iVar6 = *(int *)(&DAT_145dc9750 + (longlong)iVar6 * 4);
      local_438[0] = auVar29 & *(undefined1 (*) [16])(&DAT_145dc9380 + lVar8) |
                     auVar14 & *(undefined1 (*) [16])(&DAT_145dc9370 + lVar8) |
                     auVar17 & *(undefined1 (*) [16])(&DAT_145dc9360 + lVar8) |
                     auVar15 & *(undefined1 (*) [16])(&DAT_145dc9350 + lVar8);
      if (cVar1 == '\0') {
        *pauVar10 = local_438[0];
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + (longlong)iVar6 * 4);
      }
      else {
        FUN_143807cc0(param_3,local_438,iVar6);
      }
      uVar7 = (longlong)pauVar10 - (longlong)&uStack_418 >> 2;
    } while (uVar7 != 0);
  }
  if (local_1c != -0x30dec7bc) {
    FUN_1437134a0(local_438,&uStack_418,0x200);
    Electra::FHTTPResourceRequest::URL(local_438,"Stack overflow");
    iVar6 = FUN_143732300(0xca3f6c0f,&uStack_418,
                          "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Geometry/Collide/DataStructures/SimdTree/hkcdSimdTree.inl"
                          ,0x141);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_143713520(local_438);
  }
  return;
}



// FUNCTION 143806620 FUN_143806620 body=50 status=ok
// SIG undefined FUN_143806620(void)

void FUN_143806620(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar4 = 2;
  param_2 = param_2 - (longlong)param_1;
  do {
    puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
    uVar2 = (ulonglong)bVar5;
    uVar3 = *param_1 + *puVar1;
    bVar5 = CARRY8(*param_1,*puVar1) || CARRY8(uVar3,uVar2);
    param_1 = param_1 + 1;
    *param_3 = uVar3 + uVar2;
    lVar4 = lVar4 + -1;
    param_3 = param_3 + 1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143806660 FUN_143806660 body=244 status=ok
// SIG undefined FUN_143806660(void)

uint FUN_143806660(ulonglong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = (longlong)*param_1 >> 0x3f;
  uVar3 = ((*param_1 ^ uVar3) - uVar3) - 1;
  uVar1 = (uint)(uVar3 >> 1) & 0x7fffffff | (uint)uVar3;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar5 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x55555555);
  uVar1 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  iVar2 = 0x20 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if (0x1f < iVar2) {
    iVar2 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f) * 0x1010101 >> 0x18);
  }
  return -iVar2 & 0x3f;
}



// FUNCTION 143806770 FUN_143806770 body=125 status=ok
// SIG undefined FUN_143806770(void)

longlong * FUN_143806770(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = *param_2;
  iVar5 = param_2[1];
  iVar6 = param_2[2];
  *param_1 = (longlong)iVar3 * (longlong)iVar5 - (longlong)iVar6 * (longlong)iVar2;
  param_1[1] = (longlong)iVar6 * (longlong)iVar1 - (longlong)iVar3 * (longlong)iVar4;
  param_1[2] = (longlong)iVar4 * (longlong)iVar2 - (longlong)iVar1 * (longlong)iVar5;
  return param_1;
}



// FUNCTION 1438067f0 FUN_1438067f0 body=51 status=ok
// SIG undefined FUN_1438067f0(void)

ulonglong FUN_1438067f0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 0;
  piVar1 = (int *)(param_1 + 0xc);
  while ((piVar1[-3] < *(int *)((param_2 - param_1) + (longlong)piVar1) &&
         (*(int *)((param_2 - param_1) + -0xc + (longlong)piVar1) < *piVar1))) {
    lVar2 = lVar2 + 1;
    piVar1 = piVar1 + 1;
    if (2 < lVar2) {
      return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
    }
  }
  return (ulonglong)piVar1 & 0xffffffffffffff00;
}



// FUNCTION 143806830 FUN_143806830 body=32 status=ok
// SIG undefined FUN_143806830(void)

longlong * FUN_143806830(longlong *param_1,int *param_2,int *param_3)

{
  *param_1 = (longlong)param_3[1] * (longlong)*param_2 - (longlong)param_2[1] * (longlong)*param_3;
  return param_1;
}



// FUNCTION 143806850 FUN_143806850 body=90 status=ok
// SIG undefined FUN_143806850(void)

undefined8 *
FUN_143806850(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  FUN_143805b20((longlong)param_1 + 0xc,param_3,param_2);
  FUN_143805b20(param_1 + 3,param_4,param_2);
  return param_1;
}



// FUNCTION 1438068b0 FUN_1438068b0 body=253 status=ok
// SIG undefined FUN_1438068b0(void)

longlong * FUN_1438068b0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  longlong local_18 [2];
  
  FUN_143806770(param_1,param_2 + 3,param_2 + 6);
  uStack_20 = SUB168(SEXT816((longlong)param_2[2]) * SEXT816(param_1[2]),8);
  local_28 = (longlong)param_2[2] * param_1[2];
  local_38 = (longlong)param_2[1] * param_1[1];
  uStack_30 = SUB168(SEXT816((longlong)param_2[1]) * SEXT816(param_1[1]),8);
  local_48 = (longlong)*param_2 * *param_1;
  uStack_40 = SUB168(SEXT816((longlong)*param_2) * SEXT816(*param_1),8);
  FUN_143806620(&local_48,&local_38,local_18);
  FUN_143806620(local_18,&local_28);
  plVar4 = local_18;
  local_18[0] = local_38;
  local_18[1] = uStack_30;
  bVar6 = false;
  lVar5 = 2;
  plVar3 = param_1 + 3;
  do {
    uVar2 = (ulonglong)bVar6;
    lVar1 = *plVar4;
    bVar6 = *plVar4 != 0 || (ulonglong)-lVar1 < uVar2;
    plVar4 = plVar4 + 1;
    *plVar3 = -lVar1 - uVar2;
    lVar5 = lVar5 + -1;
    plVar3 = plVar3 + 1;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 1438069b0 FUN_1438069b0 body=224 status=ok
// SIG undefined FUN_1438069b0(void)

undefined8 * FUN_1438069b0(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::SimpleGeometryView::vftable;
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
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  FUN_1437ea870();
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  FUN_1437ea870();
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  FUN_1437ea870();
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  FUN_1437ea870();
  return param_1;
}



// FUNCTION 143806a90 FUN_143806a90 body=709 status=ok
// SIG undefined FUN_143806a90(void)

void FUN_143806a90(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::SimpleGeometryView::vftable;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xbc)) {
    FUN_143702e10(uVar2,param_1[0x16],0x80,*(uint *)((longlong)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) {
    FUN_143702e10(uVar2,param_1[0x13],0x80,*(uint *)((longlong)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar2,param_1[0x10],0x80,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) {
    FUN_143702e10(uVar2,param_1[0xe],0xc,*(uint *)((longlong)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar2,param_1[0xb],0x80,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  if (param_1[10] != 0) {
    FUN_14370c150();
  }
  uVar2 = FUN_143703a50();
  lVar1 = param_1[8];
  lVar3 = (longlong)(*(int *)(param_1 + 9) + -1);
  if (-1 < *(int *)(param_1 + 9) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    FUN_143702e10(uVar2,param_1[8],8,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[6];
  lVar3 = (longlong)(*(int *)(param_1 + 7) + -1);
  if (-1 < *(int *)(param_1 + 7) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar2,param_1[6],8,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
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
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 143806d60 FUN_143806d60 body=139 status=ok
// SIG undefined FUN_143806d60(void)

longlong FUN_143806d60(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143806a90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 200;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,200);
    }
  }
  return param_1;
}



// FUNCTION 143806df0 FUN_143806df0 body=122 status=ok
// SIG undefined FUN_143806df0(void)

void FUN_143806df0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  FUN_1437ea870(param_1 + 0x58);
  *param_2 = 0;
  thunk_FUN_143719c70(0xea6e5d22);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0xc,*(uint *)(param_1 + 0x7c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  *param_2 = 0;
  thunk_FUN_143719c70(0x6de2b016);
  return;
}



// FUNCTION 143806e70 FUN_143806e70 body=1086 status=ok
// SIG undefined FUN_143806e70(void)

ulonglong FUN_143806e70(longlong param_1,longlong param_2,int *param_3,longlong param_4,
                       undefined8 param_5,longlong *param_6)

{
  int iVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  uVar10 = param_3[1];
  if (uVar10 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x70);
    auVar3 = *(undefined1 (*) [16])
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) +
              (longlong)*param_3 * 0x10);
    local_78 = *(undefined8 *)(lVar9 + (longlong)auVar3._8_4_ * 0xc);
    local_70 = *(undefined4 *)(lVar9 + 8 + (longlong)auVar3._8_4_ * 0xc);
    local_60 = *(undefined4 *)(lVar9 + 8 + (longlong)auVar3._4_4_ * 0xc);
    local_68 = *(undefined8 *)(lVar9 + (longlong)auVar3._4_4_ * 0xc);
    local_50 = *(undefined4 *)(lVar9 + 8 + (longlong)auVar3._0_4_ * 0xc);
    local_58 = *(undefined8 *)(lVar9 + (longlong)auVar3._0_4_ * 0xc);
    uVar11 = FUN_143816ed0(param_2,&local_58,&local_68,&local_78,param_4,param_5,param_6);
    return uVar11;
  }
  if (uVar10 < 3) {
    if (uVar10 == 1) {
      lVar9 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x30);
    }
    local_48 = *(undefined4 *)(param_2 + 0x40);
    uStack_44 = *(undefined4 *)(param_2 + 0x44);
    uStack_40 = *(undefined4 *)(param_2 + 0x48);
    uStack_3c = *(undefined4 *)(param_2 + 0x4c);
    local_38 = *(undefined8 *)(param_2 + 0x50);
    uStack_30 = *(undefined8 *)(param_2 + 0x58);
    local_28 = *(undefined4 *)(param_2 + 0x60);
    iVar16 = *(int *)(param_4 + 8);
    bVar7 = FUN_14381b5a0(*(undefined8 *)(lVar9 + (longlong)*param_3 * 8),&local_48,param_4,param_5)
    ;
    if (bVar7 == 0) goto LAB_1438071cf;
    iVar16 = *(int *)(param_4 + 8) - iVar16;
    iVar4 = (int)param_6[2];
    iVar1 = iVar4 + iVar16;
    *(int *)(param_6 + 2) = iVar1;
    iVar13 = iVar1 + 0x1f >> 5;
    uVar8 = FUN_143703a50();
    uVar10 = *(uint *)((longlong)param_6 + 0xc) & 0x3fffffff;
    if ((int)uVar10 < iVar13) {
      iVar6 = uVar10 * 2;
      iVar5 = iVar13;
      if (iVar13 < iVar6) {
        iVar5 = iVar6;
      }
      FUN_14370c310(uVar8,param_6,iVar5,4);
    }
    *(int *)(param_6 + 1) = iVar13;
    if (iVar16 < 1) goto LAB_1438071cf;
    lVar9 = *param_6;
    iVar13 = iVar4 >> 5;
    uVar14 = -1 << ((byte)iVar4 & 0x1f);
    iVar16 = iVar1 >> 5;
    uVar10 = -1 << ((byte)iVar1 & 0x1f);
    uVar12 = ~uVar10;
    if (iVar13 != iVar16) {
      puVar2 = (uint *)(lVar9 + (longlong)iVar13 * 4);
      *puVar2 = *puVar2 & ~uVar14;
      if (uVar12 != 0) {
        puVar2 = (uint *)(lVar9 + (longlong)iVar16 * 4);
        *puVar2 = *puVar2 & uVar10;
      }
      if (-1 < (iVar16 - iVar13) + -2) {
        puVar15 = (undefined4 *)(lVar9 + (longlong)(iVar13 + 1) * 4);
        for (uVar11 = (ulonglong)((iVar16 - iVar13) - 1); uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      goto LAB_1438071cf;
    }
  }
  else if (uVar10 == 3) {
    local_48 = *(undefined4 *)(param_2 + 0x40);
    uStack_44 = *(undefined4 *)(param_2 + 0x44);
    uStack_40 = *(undefined4 *)(param_2 + 0x48);
    uStack_3c = *(undefined4 *)(param_2 + 0x4c);
    local_28 = *(undefined4 *)(param_2 + 0x60);
    local_38 = *(undefined8 *)(param_2 + 0x50);
    uStack_30 = *(undefined8 *)(param_2 + 0x58);
    iVar16 = *(int *)(param_4 + 8);
    bVar7 = FUN_14381b5a0(*(undefined8 *)(param_1 + 0x50),&local_48,param_4,param_5);
    if (bVar7 == 0) goto LAB_1438071cf;
    iVar16 = *(int *)(param_4 + 8) - iVar16;
    iVar4 = (int)param_6[2];
    iVar1 = iVar4 + iVar16;
    *(int *)(param_6 + 2) = iVar1;
    iVar13 = iVar1 + 0x1f >> 5;
    uVar8 = FUN_143703a50();
    uVar10 = *(uint *)((longlong)param_6 + 0xc) & 0x3fffffff;
    if ((int)uVar10 < iVar13) {
      iVar6 = uVar10 * 2;
      iVar5 = iVar13;
      if (iVar13 < iVar6) {
        iVar5 = iVar6;
      }
      FUN_14370c310(uVar8,param_6,iVar5,4);
    }
    *(int *)(param_6 + 1) = iVar13;
    if (iVar16 < 1) goto LAB_1438071cf;
    lVar9 = *param_6;
    iVar13 = iVar4 >> 5;
    uVar14 = -1 << ((byte)iVar4 & 0x1f);
    iVar16 = iVar1 >> 5;
    uVar10 = -1 << ((byte)iVar1 & 0x1f);
    uVar12 = ~uVar10;
    if (iVar13 != iVar16) {
      puVar2 = (uint *)(lVar9 + (longlong)iVar13 * 4);
      *puVar2 = *puVar2 & ~uVar14;
      if (uVar12 != 0) {
        puVar2 = (uint *)(lVar9 + (longlong)iVar16 * 4);
        *puVar2 = *puVar2 & uVar10;
      }
      if (-1 < (iVar16 - iVar13) + -2) {
        puVar15 = (undefined4 *)(lVar9 + (longlong)(iVar13 + 1) * 4);
        for (uVar11 = (ulonglong)((iVar16 - iVar13) - 1); uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      goto LAB_1438071cf;
    }
  }
  else {
    local_48 = *(undefined4 *)(param_2 + 0x40);
    uStack_44 = *(undefined4 *)(param_2 + 0x44);
    uStack_40 = *(undefined4 *)(param_2 + 0x48);
    uStack_3c = *(undefined4 *)(param_2 + 0x4c);
    iVar16 = *(int *)(param_4 + 8);
    local_38 = *(undefined8 *)(param_2 + 0x50);
    uStack_30 = *(undefined8 *)(param_2 + 0x58);
    local_28 = *(undefined4 *)(param_2 + 0x60);
    bVar7 = FUN_14381be00(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)*param_3 * 8),
                          &local_48,param_4,param_5);
    if (bVar7 == 0) goto LAB_1438071cf;
    iVar16 = *(int *)(param_4 + 8) - iVar16;
    iVar4 = (int)param_6[2];
    iVar1 = iVar4 + iVar16;
    *(int *)(param_6 + 2) = iVar1;
    iVar13 = iVar1 + 0x1f >> 5;
    uVar8 = FUN_143703a50();
    uVar10 = *(uint *)((longlong)param_6 + 0xc) & 0x3fffffff;
    if ((int)uVar10 < iVar13) {
      iVar6 = uVar10 * 2;
      iVar5 = iVar13;
      if (iVar13 < iVar6) {
        iVar5 = iVar6;
      }
      FUN_14370c310(uVar8,param_6,iVar5,4);
    }
    *(int *)(param_6 + 1) = iVar13;
    if (iVar16 < 1) goto LAB_1438071cf;
    lVar9 = *param_6;
    iVar13 = iVar4 >> 5;
    uVar14 = -1 << ((byte)iVar4 & 0x1f);
    iVar16 = iVar1 >> 5;
    uVar10 = -1 << ((byte)iVar1 & 0x1f);
    uVar12 = ~uVar10;
    if (iVar13 != iVar16) {
      puVar2 = (uint *)(lVar9 + (longlong)iVar13 * 4);
      *puVar2 = *puVar2 & ~uVar14;
      if (uVar12 != 0) {
        puVar2 = (uint *)(lVar9 + (longlong)iVar16 * 4);
        *puVar2 = *puVar2 & uVar10;
      }
      if (-1 < (iVar16 - iVar13) + -2) {
        puVar15 = (undefined4 *)(lVar9 + (longlong)(iVar13 + 1) * 4);
        for (uVar11 = (ulonglong)((iVar16 - iVar13) - 1); uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
      }
      goto LAB_1438071cf;
    }
  }
  if ((uVar12 & uVar14) != 0) {
    puVar2 = (uint *)(lVar9 + (longlong)iVar13 * 4);
    *puVar2 = *puVar2 & ~(uVar12 & uVar14);
  }
LAB_1438071cf:
  return (ulonglong)bVar7;
}



// FUNCTION 1438072b0 FUN_1438072b0 body=191 status=ok
// SIG undefined FUN_1438072b0(void)

ulonglong FUN_1438072b0(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3[1] != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  auVar1 = *(undefined1 (*) [16])
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) +
            (longlong)*param_3 * 0x10);
  local_38 = *(undefined8 *)(lVar2 + (longlong)auVar1._8_4_ * 0xc);
  local_30 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._8_4_ * 0xc);
  local_20 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._4_4_ * 0xc);
  local_28 = *(undefined8 *)(lVar2 + (longlong)auVar1._4_4_ * 0xc);
  local_18 = *(undefined8 *)(lVar2 + (longlong)auVar1._0_4_ * 0xc);
  local_10 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._0_4_ * 0xc);
  uVar3 = FUN_143817c90(param_2,&local_18,&local_28,&local_38,param_4);
  return uVar3;
}



// FUNCTION 143807370 FUN_143807370 body=292 status=ok
// SIG undefined FUN_143807370(void)

undefined8
FUN_143807370(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8,longlong *param_9)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  local_18 = *(undefined1 (*) [16])
              (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) +
              (longlong)*param_3 * 0x10);
  local_28 = *(undefined8 *)(lVar1 + (longlong)local_18._0_4_ * 0xc);
  local_20 = *(undefined4 *)(lVar1 + 8 + (longlong)local_18._0_4_ * 0xc);
  local_38 = *(undefined8 *)(lVar1 + (longlong)local_18._4_4_ * 0xc);
  local_30 = *(undefined4 *)(lVar1 + 8 + (longlong)local_18._4_4_ * 0xc);
  local_48 = *(undefined8 *)(lVar1 + (longlong)local_18._8_4_ * 0xc);
  local_40 = *(undefined4 *)(lVar1 + 8 + (longlong)local_18._8_4_ * 0xc);
  FUN_143818ab0(&local_28,&local_38,&local_48,param_4,param_5,param_6,param_7,param_8);
  iVar3 = 0;
  lVar4 = (longlong)(int)(param_9[1] - *param_9 >> 2);
  lVar1 = 0;
  if (0 < lVar4) {
    do {
      uVar2 = 0;
      if (iVar3 == 0) {
        uVar2 = local_18._12_4_;
      }
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*param_9 + lVar1 * 4) = uVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 < lVar4);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 1438074a0 FUN_1438074a0 body=720 status=ok
// SIG undefined FUN_1438074a0(void)

void FUN_1438074a0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int *piVar15;
  undefined1 (*pauVar16) [16];
  int iVar17;
  int iVar18;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  thunk_FUN_143719c70(0x8fc7b2d2);
  bVar4 = *(byte *)(param_2 + 8);
  iVar18 = 0;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
  pauVar16 = *(undefined1 (**) [16])(lVar7 + 0x28);
  iVar17 = (int)(((longlong)*(int *)(lVar7 + 0x30) << 4) >> 4);
  if (0 < iVar17) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x70);
      auVar3 = *pauVar16;
      local_e8 = *(undefined8 *)(lVar7 + (longlong)auVar3._0_4_ * 0xc);
      puVar1 = (undefined8 *)(lVar7 + (longlong)auVar3._0_4_ * 0xc);
      iVar11 = *(int *)(puVar1 + 1);
      local_d8 = *(undefined8 *)(lVar7 + (longlong)auVar3._4_4_ * 0xc);
      puVar2 = (undefined8 *)(lVar7 + (longlong)auVar3._4_4_ * 0xc);
      iVar5 = *(int *)(puVar2 + 1);
      local_b0 = *(undefined8 *)(lVar7 + (longlong)auVar3._8_4_ * 0xc);
      uVar6 = *(undefined4 *)(lVar7 + 8 + (longlong)auVar3._8_4_ * 0xc);
      local_68 = local_b0;
      if ((bVar4 & 1) == 0) {
LAB_1438075e4:
        iVar8 = (int)local_e8;
        iVar9 = (int)local_d8;
        if ((bVar4 & 2) != 0) {
          local_c8 = (int)local_d8;
          if ((int)local_e8 < (int)local_d8) {
            local_c8 = (int)local_e8;
          }
          local_b8 = (int)((ulonglong)local_d8 >> 0x20);
          iVar14 = (int)((ulonglong)local_e8 >> 0x20);
          local_c4 = local_b8;
          if (iVar14 < local_b8) {
            local_c4 = iVar14;
          }
          local_c0 = iVar5;
          if (iVar11 < iVar5) {
            local_c0 = iVar11;
          }
          local_bc = (int)local_d8;
          if ((int)local_d8 < (int)local_e8) {
            local_bc = (int)local_e8;
          }
          if (local_b8 < iVar14) {
            local_b8 = iVar14;
          }
          local_b4 = iVar5;
          if (iVar5 < iVar11) {
            local_b4 = iVar11;
          }
          local_78 = local_b0;
          local_70 = uVar6;
          FUN_143804ae0(&local_c8,&local_78);
          cVar10 = FUN_1438067f0(param_2 + 0xc,&local_c8);
          if (cVar10 == '\0') goto LAB_14380773f;
        }
        uVar12 = FUN_143703a50();
        if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
          FUN_14370c460(uVar12,param_3,0x10);
        }
        local_104 = (undefined4)local_68;
        piVar15 = (int *)((longlong)(int)param_3[1] * 0x10 + *param_3);
        local_100 = local_68._4_4_;
        *(int *)(param_3 + 1) = (int)param_3[1] + 1;
        local_10c = iVar8;
        piVar15[1] = 0;
        piVar15[2] = 0;
        local_108 = local_e8._4_4_;
        local_f8 = local_e8._4_4_;
        local_f0 = local_d8._4_4_;
        *piVar15 = iVar18;
        local_fc = iVar8;
        local_f4 = iVar9;
        uVar12 = FUN_143805b00(local_58,&local_104,&local_10c);
        uVar13 = FUN_143805b00(local_50,&local_f4,&local_fc);
        uVar12 = FUN_143806830(local_48,uVar13,uVar12);
        iVar11 = FUN_143806660(uVar12);
        piVar15[3] = iVar11;
        thunk_FUN_143719c70(0xc2b46c25);
      }
      else {
        local_98 = *puVar2;
        local_88 = *puVar1;
        local_a8 = local_b0;
        local_a0 = uVar6;
        local_90 = iVar5;
        local_80 = iVar11;
        cVar10 = FUN_14381c110(&local_88,&local_98,&local_a8,*(undefined1 *)(param_2 + 9));
        if (cVar10 != '\0') goto LAB_1438075e4;
      }
LAB_14380773f:
      iVar18 = iVar18 + 1;
      pauVar16 = pauVar16 + 1;
    } while (iVar18 < iVar17);
  }
  return;
}



// FUNCTION 143807770 FUN_143807770 body=65 status=ok
// SIG undefined FUN_143807770(void)

void FUN_143807770(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  (**(code **)(*param_1 + 0x60))(param_1,param_2,local_58);
  puVar2 = (undefined8 *)FUN_1438068b0(local_30,local_58);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  param_3[4] = puVar2[4];
  return;
}



// FUNCTION 1438077c0 FUN_1438077c0 body=194 status=ok
// SIG undefined FUN_1438077c0(void)

void FUN_1438077c0(longlong param_1,int *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [48];
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  auVar1 = *(undefined1 (*) [16])
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) +
            (longlong)*param_2 * 0x10);
  local_40 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._0_4_ * 0xc);
  local_48 = *(undefined8 *)(lVar2 + (longlong)auVar1._0_4_ * 0xc);
  local_50 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._4_4_ * 0xc);
  local_58 = *(undefined8 *)(lVar2 + (longlong)auVar1._4_4_ * 0xc);
  local_68 = *(undefined8 *)(lVar2 + (longlong)auVar1._8_4_ * 0xc);
  local_60 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._8_4_ * 0xc);
  puVar4 = (undefined8 *)FUN_143806850(local_38,&local_48,&local_58,&local_68);
  uVar3 = puVar4[1];
  *param_3 = *puVar4;
  param_3[1] = uVar3;
  uVar3 = puVar4[3];
  param_3[2] = puVar4[2];
  param_3[3] = uVar3;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(puVar4 + 4);
  return;
}



// FUNCTION 143807890 FUN_143807890 body=212 status=ok
// SIG undefined FUN_143807890(void)

undefined8 FUN_143807890(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  
  piVar1 = (int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) +
                  (longlong)*param_3 * 0x10);
  iVar7 = *piVar1;
  iVar8 = piVar1[1];
  iVar9 = piVar1[2];
  uVar10 = FUN_143703a50();
  uVar11 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  if (uVar11 < 3) {
    uVar11 = uVar11 * 2;
    uVar6 = 3;
    if (3 < uVar11) {
      uVar6 = uVar11;
    }
    FUN_14370c310(uVar10,param_4,uVar6,0xc);
  }
  puVar3 = (undefined8 *)*param_4;
  *(undefined4 *)(param_4 + 1) = 3;
  lVar4 = *(longlong *)(param_1 + 0x70);
  *puVar3 = *(undefined8 *)(lVar4 + (longlong)iVar7 * 0xc);
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar4 + 8 + (longlong)iVar7 * 0xc);
  lVar4 = *param_4;
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(lVar4 + 0xc) = *(undefined8 *)(lVar5 + (longlong)iVar8 * 0xc);
  *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(lVar5 + 8 + (longlong)iVar8 * 0xc);
  lVar4 = *param_4;
  lVar5 = *(longlong *)(param_1 + 0x70);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar5 + (longlong)iVar9 * 0xc);
  uVar2 = *(undefined4 *)(lVar5 + 8 + (longlong)iVar9 * 0xc);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 143807970 FUN_143807970 body=18 status=ok
// SIG undefined FUN_143807970(void)

undefined8 * FUN_143807970(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return param_2;
}



// FUNCTION 143807990 FUN_143807990 body=67 status=ok
// SIG undefined FUN_143807990(void)

undefined8 * FUN_143807990(longlong *param_1,undefined8 *param_2)

{
  if (param_1[10] != 0) {
    *param_2 = 0x300000000;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  (**(code **)(*param_1 + 0x20))();
  return param_2;
}



// FUNCTION 1438079e0 FUN_1438079e0 body=443 status=ok
// SIG undefined FUN_1438079e0(void)

void FUN_1438079e0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  ulonglong uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((*(byte *)(param_2 + 8) & 2) == 0) {
    uStack_70 = uStack_70 & 0xffffffff00000000;
    local_78 = param_3;
    FUN_143805b50(param_1 + 0x58,param_2 + 0x10,&local_78,1);
  }
  else {
    local_78 = *(longlong *)(param_1 + 0x70);
    local_60 = *(undefined8 *)(param_2 + 0x30);
    uStack_70 = local_78 + (longlong)*(int *)(param_1 + 0x78) * 0xc;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    local_50 = *(longlong *)(lVar2 + 0x28);
    lStack_48 = (longlong)*(int *)(lVar2 + 0x30) * 0x10 + local_50;
    local_58 = *(undefined4 *)(param_2 + 0x38);
    auVar1 = *(undefined1 (*) [16])(local_50 + (longlong)*(int *)(param_2 + 0x30) * 0x10);
    local_30 = *(undefined8 *)(local_78 + (longlong)auVar1._0_4_ * 0xc);
    local_28 = *(undefined4 *)(local_78 + 8 + (longlong)auVar1._0_4_ * 0xc);
    local_24 = *(undefined8 *)(local_78 + (longlong)auVar1._4_4_ * 0xc);
    local_1c = *(undefined4 *)(local_78 + 8 + (longlong)auVar1._4_4_ * 0xc);
    local_18 = *(undefined8 *)(local_78 + (longlong)auVar1._8_4_ * 0xc);
    local_10 = *(undefined4 *)(local_78 + 8 + (longlong)auVar1._8_4_ * 0xc);
    local_68 = param_3;
    local_40 = local_78;
    uStack_38 = uStack_70;
    FUN_143805bc0(param_1 + 0x58,param_2 + 0x10,&local_68,1);
  }
  param_2 = param_2 + 0x10;
  uStack_70._0_4_ = 1;
  local_78 = param_3;
  FUN_143805b50(param_1 + 0x80,param_2,&local_78,1);
  uStack_70._0_4_ = 2;
  local_78 = param_3;
  FUN_143805b50(param_1 + 0x98,param_2,&local_78,1);
  uStack_70 = CONCAT44(uStack_70._4_4_,4);
  local_78 = param_3;
  FUN_143805b50(param_1 + 0xb0,param_2,&local_78,1);
  return;
}



// FUNCTION 143807ba0 FUN_143807ba0 body=60 status=ok
// SIG undefined FUN_143807ba0(void)

undefined8 FUN_143807ba0(longlong param_1,int *param_2,undefined8 *param_3)

{
  if (param_2[1] == 1) {
    FUN_142f87c00(*param_3,*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x50) +
                           (longlong)(*param_2 * *(int *)(*(longlong *)(param_1 + 0x18) + 0x20)) * 4
                 );
    return 1;
  }
  return 0;
}



// FUNCTION 143807be0 FUN_143807be0 body=211 status=ok
// SIG undefined FUN_143807be0(void)

void FUN_143807be0(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (0 < param_3) {
    iVar5 = 0;
    do {
      if (iVar5 == 1) {
        uVar4 = param_2[1];
      }
      else if (iVar5 == 2) {
        uVar4 = param_2[2];
      }
      else if (iVar5 == 3) {
        uVar4 = param_2[3];
      }
      else {
        uVar4 = *param_2;
      }
      plVar2 = (longlong *)*param_1;
      uVar3 = FUN_143703a50();
      if (*(uint *)(plVar2 + 1) == (*(uint *)((longlong)plVar2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar3,plVar2,0xc);
      }
      iVar5 = iVar5 + 1;
      puVar1 = (undefined4 *)(*plVar2 + (longlong)(int)plVar2[1] * 0xc);
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      *puVar1 = uVar4;
      puVar1[1] = (int)param_1[1];
      puVar1[2] = 0;
    } while (iVar5 < param_3);
  }
  return;
}



// FUNCTION 143807cc0 FUN_143807cc0 body=361 status=ok
// SIG undefined FUN_143807cc0(void)

void FUN_143807cc0(longlong *param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  if (0 < param_3) {
    iVar7 = 0;
    do {
      if (iVar7 == 1) {
        iVar8 = param_2[1];
      }
      else if (iVar7 == 2) {
        iVar8 = param_2[2];
      }
      else if (iVar7 == 3) {
        iVar8 = param_2[3];
      }
      else {
        iVar8 = *param_2;
      }
      if (iVar8 != (int)param_1[1]) {
        lVar3 = param_1[5];
        auVar2 = *(undefined1 (*) [16])(param_1[3] + (longlong)iVar8 * 0x10);
        local_48 = *(undefined8 *)(lVar3 + (longlong)auVar2._0_4_ * 0xc);
        local_40 = *(undefined4 *)(lVar3 + 8 + (longlong)auVar2._0_4_ * 0xc);
        local_3c = *(undefined8 *)(lVar3 + (longlong)auVar2._4_4_ * 0xc);
        local_34 = *(undefined4 *)(lVar3 + 8 + (longlong)auVar2._4_4_ * 0xc);
        local_30 = *(undefined8 *)(lVar3 + (longlong)auVar2._8_4_ * 0xc);
        local_28 = *(undefined4 *)(lVar3 + 8 + (longlong)auVar2._8_4_ * 0xc);
        cVar5 = FUN_14381ac50(param_1 + 7,&local_48);
        if (cVar5 == '\0') {
          plVar4 = (longlong *)*param_1;
          uVar6 = FUN_143703a50();
          if (*(uint *)(plVar4 + 1) == (*(uint *)((longlong)plVar4 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar6,plVar4,0xc);
          }
          piVar1 = (int *)(*plVar4 + (longlong)(int)plVar4[1] * 0xc);
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          *piVar1 = iVar8;
          piVar1[1] = 0;
          piVar1[2] = 0;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_3);
  }
  return;
}



// FUNCTION 143807e30 FUN_143807e30 body=186 status=ok
// SIG undefined FUN_143807e30(void)

ulonglong FUN_143807e30(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_3[1] != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar2 = *(longlong *)(param_1 + 0x70);
  auVar1 = *(undefined1 (*) [16])
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x28) +
            (longlong)*param_3 * 0x10);
  local_38 = *(undefined8 *)(lVar2 + (longlong)auVar1._8_4_ * 0xc);
  local_30 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._8_4_ * 0xc);
  local_20 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._4_4_ * 0xc);
  local_28 = *(undefined8 *)(lVar2 + (longlong)auVar1._4_4_ * 0xc);
  local_18 = *(undefined8 *)(lVar2 + (longlong)auVar1._0_4_ * 0xc);
  local_10 = *(undefined4 *)(lVar2 + 8 + (longlong)auVar1._0_4_ * 0xc);
  uVar3 = FUN_14381a8a0(param_2,&local_18,&local_28,&local_38);
  return uVar3;
}



// FUNCTION 143807ef0 FUN_143807ef0 body=9 status=ok
// SIG undefined FUN_143807ef0(void)

undefined4 FUN_143807ef0(undefined8 param_1,uint *param_2,uint *param_3)

{
  return CONCAT31((int3)(*param_3 >> 8),*param_2 < *param_3);
}



// FUNCTION 143807f00 FUN_143807f00 body=20 status=ok
// SIG undefined FUN_143807f00(void)

ulonglong FUN_143807f00(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if ((*param_1 == uVar1) && (uVar1 = param_2[1], param_1[1] == uVar1)) {
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  return (ulonglong)uVar1 & 0xffffffffffffff00;
}



// FUNCTION 143807f20 FUN_143807f20 body=1146 status=ok
// SIG undefined FUN_143807f20(void)

undefined8 FUN_143807f20(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  ulonglong auStack_130 [9];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong auStack_70 [4];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong auStack_30 [3];
  
  local_88 = *param_2;
  lStack_80 = param_2[1];
  lVar5 = 0;
  uStack_a0 = param_2[6];
  uStack_98 = param_2[7];
  auStack_130[3] = 0;
  local_a8 = param_2[2];
  local_e8 = (undefined4)*param_1;
  uStack_e4 = *(undefined4 *)((longlong)param_1 + 4);
  local_148 = *param_1;
  uStack_e0 = (undefined4)param_1[1];
  uStack_dc = *(undefined4 *)((longlong)param_1 + 0xc);
  lStack_140 = param_1[1];
  auStack_130[4] = 0;
  lStack_90 = param_2[8];
  auStack_130[5] = 0;
  auStack_130[6] = 0;
  local_138 = param_1[2];
  auStack_130[7] = 0;
  auStack_130[8] = 0;
  auStack_130[2] = param_1[8];
  auStack_130[0] = param_1[6];
  auStack_130[1] = param_1[7];
  local_d8 = local_138;
  uStack_d0 = auStack_130[0];
  lStack_c8 = auStack_130[1];
  lStack_c0 = auStack_130[2];
  local_78 = local_a8;
  auStack_70[0] = uStack_a0;
  auStack_70[1] = uStack_98;
  auStack_70[2] = lStack_90;
  auStack_70[3] = local_88;
  uStack_50 = lStack_80;
  FUN_14380a800(auStack_130 + 3,auStack_130,local_88);
  FUN_14380a5c0(auStack_130 + 4,auStack_130,uStack_50);
  lVar6 = local_a8;
  FUN_14380a4e0(auStack_130 + 5,auStack_130,local_a8);
  iVar7 = 3;
  if (lVar6 < 0) {
    puVar9 = auStack_130 + 6;
    uVar10 = lStack_c0 >> 0x3f;
    bVar11 = false;
    lVar6 = lVar5;
    iVar4 = iVar7;
    do {
      uVar8 = uVar10;
      if (iVar4 + -3 < 3) {
        uVar8 = *(ulonglong *)((longlong)auStack_130 + lVar6);
      }
      uVar1 = *(ulonglong *)((longlong)auStack_130 + lVar6 + 0x30);
      uVar2 = (ulonglong)bVar11;
      uVar3 = uVar1 - uVar8;
      bVar11 = uVar1 < uVar8 || uVar3 < uVar2;
      *puVar9 = uVar3 - uVar2;
      iVar4 = iVar4 + 1;
      puVar9 = puVar9 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < 6);
  }
  local_148 = 0;
  lStack_140 = 0;
  local_138 = 0;
  auStack_130[0] = 0;
  auStack_130[1] = 0;
  auStack_130[2] = 0;
  FUN_14380a800(&local_148,auStack_70,CONCAT44(uStack_e4,local_e8));
  FUN_14380a5c0(&lStack_140,auStack_70,CONCAT44(uStack_dc,uStack_e0));
  lVar6 = local_d8;
  FUN_14380a4e0(&local_138,auStack_70,local_d8);
  if (lVar6 < 0) {
    puVar9 = auStack_130;
    bVar11 = false;
    lVar6 = lVar5;
    iVar4 = iVar7;
    do {
      uVar10 = lStack_90 >> 0x3f;
      if (iVar4 + -3 < 3) {
        uVar10 = *(ulonglong *)((longlong)auStack_70 + lVar6);
      }
      uVar8 = (ulonglong)bVar11;
      uVar1 = *(ulonglong *)((longlong)auStack_130 + lVar6) - uVar10;
      bVar11 = *(ulonglong *)((longlong)auStack_130 + lVar6) < uVar10 || uVar1 < uVar8;
      *puVar9 = uVar1 - uVar8;
      iVar4 = iVar4 + 1;
      puVar9 = puVar9 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < 6);
  }
  if ((((lStack_140 == auStack_130[4] && local_148 == auStack_130[3]) &&
       auStack_130[1] == auStack_130[7]) && auStack_130[0] == auStack_130[6]) &&
      local_138 == auStack_130[5]) {
    auStack_70[3] = param_2[3];
    uStack_50 = param_2[4];
    local_148 = 0;
    uStack_a0 = param_2[6];
    uStack_98 = param_2[7];
    lStack_140 = 0;
    local_a8 = param_2[5];
    local_e8 = (undefined4)param_1[3];
    uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_88 = param_1[3];
    uStack_e0 = (undefined4)param_1[4];
    uStack_dc = *(undefined4 *)((longlong)param_1 + 0x24);
    lStack_80 = param_1[4];
    local_138 = 0;
    lStack_90 = param_2[8];
    auStack_130[0] = 0;
    auStack_130[1] = 0;
    local_d8 = param_1[5];
    auStack_130[2] = 0;
    lStack_c0 = param_1[8];
    uStack_d0 = param_1[6];
    lStack_c8 = param_1[7];
    local_78 = local_d8;
    auStack_70[0] = uStack_d0;
    auStack_70[1] = lStack_c8;
    auStack_70[2] = lStack_c0;
    local_48 = auStack_70[3];
    uStack_40 = uStack_50;
    local_38 = local_a8;
    auStack_30[0] = uStack_a0;
    auStack_30[1] = uStack_98;
    auStack_30[2] = lStack_90;
    FUN_14380a800(&local_148,auStack_70,auStack_70[3]);
    FUN_14380a5c0(&lStack_140,auStack_70,uStack_50);
    lVar6 = local_a8;
    FUN_14380a4e0(&local_138,auStack_70,local_a8);
    if (lVar6 < 0) {
      puVar9 = auStack_130;
      uVar10 = lStack_c0 >> 0x3f;
      bVar11 = false;
      lVar6 = lVar5;
      iVar4 = iVar7;
      do {
        uVar8 = uVar10;
        if (iVar4 + -3 < 3) {
          uVar8 = *(ulonglong *)((longlong)auStack_70 + lVar6);
        }
        uVar1 = (ulonglong)bVar11;
        uVar2 = *(ulonglong *)((longlong)auStack_130 + lVar6) - uVar8;
        bVar11 = *(ulonglong *)((longlong)auStack_130 + lVar6) < uVar8 || uVar2 < uVar1;
        *puVar9 = uVar2 - uVar1;
        iVar4 = iVar4 + 1;
        puVar9 = puVar9 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar4 < 6);
    }
    auStack_130[3] = 0;
    auStack_130[4] = 0;
    auStack_130[5] = 0;
    auStack_130[6] = 0;
    auStack_130[7] = 0;
    auStack_130[8] = 0;
    FUN_14380a800(auStack_130 + 3,auStack_30,CONCAT44(uStack_e4,local_e8));
    FUN_14380a5c0(auStack_130 + 4,auStack_30,CONCAT44(uStack_dc,uStack_e0));
    lVar6 = local_d8;
    FUN_14380a4e0(auStack_130 + 5,auStack_30,local_d8);
    if (lVar6 < 0) {
      puVar9 = auStack_130 + 6;
      bVar11 = false;
      do {
        uVar10 = lStack_90 >> 0x3f;
        if (iVar7 + -3 < 3) {
          uVar10 = *(ulonglong *)((longlong)auStack_30 + lVar5);
        }
        uVar8 = *(ulonglong *)((longlong)auStack_130 + lVar5 + 0x30);
        uVar1 = (ulonglong)bVar11;
        uVar2 = uVar8 - uVar10;
        bVar11 = uVar8 < uVar10 || uVar2 < uVar1;
        *puVar9 = uVar2 - uVar1;
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar7 < 6);
    }
    if ((((auStack_130[7] == auStack_130[1] && auStack_130[6] == auStack_130[0]) &&
         auStack_130[5] == local_138) && auStack_130[4] == lStack_140) &&
        auStack_130[3] == local_148) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438083a0 FUN_1438083a0 body=1298 status=ok
// SIG undefined FUN_1438083a0(void)

undefined8 FUN_1438083a0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  ulonglong local_1a8 [13];
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  ulonglong local_118 [4];
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  ulonglong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_38;
  longlong lStack_30;
  
  local_1a8[0xc] = param_2[2];
  lStack_140 = param_2[3];
  lVar5 = 0;
  local_118[2] = param_2[10];
  local_118[3] = param_2[0xb];
  local_1a8[4] = 0;
  local_118[0] = param_2[8];
  local_118[1] = param_2[9];
  local_1a8[5] = 0;
  local_1c8 = *param_1;
  lStack_1c0 = param_1[1];
  local_1a8[6] = 0;
  local_138 = *param_2;
  lStack_130 = param_2[1];
  local_1a8[7] = 0;
  local_1a8[8] = 0;
  local_1a8[9] = 0;
  local_1a8[10] = 0;
  local_1b8 = param_1[2];
  lStack_1b0 = param_1[3];
  local_1a8[0xb] = 0;
  local_1a8[0] = param_1[8];
  local_1a8[1] = param_1[9];
  local_1a8[2] = param_1[10];
  local_d8[2] = param_1[10];
  local_1a8[3] = param_1[0xb];
  local_d8[3] = param_1[0xb];
  local_128 = local_1a8[0xc];
  lStack_120 = lStack_140;
  local_f8 = local_1c8;
  lStack_f0 = lStack_1c0;
  local_e8 = local_1b8;
  lStack_e0 = lStack_1b0;
  local_b8 = local_138;
  uStack_b0 = lStack_130;
  local_78 = local_118[2];
  lStack_70 = local_118[3];
  FUN_14380acc0(local_1a8 + 4,local_1a8,local_138);
  FUN_14380ab80(local_1a8 + 5,local_1a8,uStack_b0);
  FUN_14380a920(local_1a8 + 6,local_1a8,local_1a8[0xc]);
  lVar6 = lStack_140;
  FUN_14380a6e0(local_1a8 + 7,local_1a8,lStack_140);
  iVar8 = 4;
  if (lVar6 < 0) {
    puVar7 = local_1a8 + 8;
    uVar10 = (longlong)local_d8[3] >> 0x3f;
    bVar11 = false;
    lVar6 = lVar5;
    iVar4 = iVar8;
    do {
      uVar9 = uVar10;
      if (iVar4 + -4 < 4) {
        uVar9 = *(ulonglong *)((longlong)local_1a8 + lVar6);
      }
      uVar1 = *(ulonglong *)((longlong)local_1a8 + lVar6 + 0x40);
      uVar2 = (ulonglong)bVar11;
      uVar3 = uVar1 - uVar9;
      bVar11 = uVar1 < uVar9 || uVar3 < uVar2;
      *puVar7 = uVar3 - uVar2;
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < 8);
  }
  local_1c8 = 0;
  lStack_1c0 = 0;
  local_1b8 = 0;
  lStack_1b0 = 0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_1a8[2] = 0;
  local_1a8[3] = 0;
  FUN_14380acc0(&local_1c8,local_118,local_f8);
  FUN_14380ab80(&lStack_1c0,local_118,lStack_f0);
  FUN_14380a920(&local_1b8,local_118,local_e8);
  lVar6 = lStack_e0;
  FUN_14380a6e0(&lStack_1b0,local_118,lStack_e0);
  if (lVar6 < 0) {
    puVar7 = local_1a8;
    bVar11 = false;
    lVar6 = lVar5;
    iVar4 = iVar8;
    do {
      uVar10 = lStack_70 >> 0x3f;
      if (iVar4 + -4 < 4) {
        uVar10 = *(ulonglong *)((longlong)local_118 + lVar6);
      }
      uVar9 = (ulonglong)bVar11;
      uVar1 = *(ulonglong *)((longlong)local_1a8 + lVar6) - uVar10;
      bVar11 = *(ulonglong *)((longlong)local_1a8 + lVar6) < uVar10 || uVar1 < uVar9;
      *puVar7 = uVar1 - uVar9;
      iVar4 = iVar4 + 1;
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < 8);
  }
  if ((((((local_1a8[2] == local_1a8[10] && local_1a8[1] == local_1a8[9]) &&
         local_1a8[0] == local_1a8[8]) && lStack_1b0 == local_1a8[7]) && local_1b8 == local_1a8[6])
      && lStack_1c0 == local_1a8[5]) && local_1c8 == local_1a8[4]) {
    local_1a8[0xc] = param_2[6];
    lStack_140 = param_2[7];
    local_1c8 = 0;
    local_d8[2] = param_2[10];
    local_d8[3] = param_2[0xb];
    lStack_1c0 = 0;
    local_f8 = param_2[4];
    lStack_f0 = param_2[5];
    local_1b8 = 0;
    local_d8[0] = param_2[8];
    local_d8[1] = param_2[9];
    lStack_1b0 = 0;
    local_138 = param_1[4];
    lStack_130 = param_1[5];
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_1a8[2] = 0;
    local_1a8[3] = 0;
    local_128 = param_1[6];
    lStack_120 = param_1[7];
    local_118[0] = param_1[8];
    local_118[1] = param_1[9];
    local_118[2] = param_1[10];
    local_78 = param_1[10];
    local_118[3] = param_1[0xb];
    lStack_70 = param_1[0xb];
    local_e8 = local_1a8[0xc];
    lStack_e0 = lStack_140;
    local_b8 = local_f8;
    uStack_b0 = lStack_f0;
    local_a8 = local_138;
    lStack_a0 = lStack_130;
    local_98 = local_128;
    lStack_90 = lStack_120;
    local_38 = local_d8[2];
    lStack_30 = local_d8[3];
    FUN_14380acc0(&local_1c8,local_118,local_f8);
    FUN_14380ab80(&lStack_1c0,local_118,uStack_b0);
    FUN_14380a920(&local_1b8,local_118,local_1a8[0xc]);
    lVar6 = lStack_140;
    FUN_14380a6e0(&lStack_1b0,local_118,lStack_140);
    if (lVar6 < 0) {
      puVar7 = local_1a8;
      uVar10 = lStack_70 >> 0x3f;
      bVar11 = false;
      lVar6 = lVar5;
      iVar4 = iVar8;
      do {
        uVar9 = uVar10;
        if (iVar4 + -4 < 4) {
          uVar9 = *(ulonglong *)((longlong)local_118 + lVar6);
        }
        uVar1 = (ulonglong)bVar11;
        uVar2 = *(ulonglong *)((longlong)local_1a8 + lVar6) - uVar9;
        bVar11 = *(ulonglong *)((longlong)local_1a8 + lVar6) < uVar9 || uVar2 < uVar1;
        *puVar7 = uVar2 - uVar1;
        iVar4 = iVar4 + 1;
        puVar7 = puVar7 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar4 < 8);
    }
    local_1a8[4] = 0;
    local_1a8[5] = 0;
    local_1a8[6] = 0;
    local_1a8[7] = 0;
    local_1a8[8] = 0;
    local_1a8[9] = 0;
    local_1a8[10] = 0;
    local_1a8[0xb] = 0;
    FUN_14380acc0(local_1a8 + 4,local_d8,local_a8);
    FUN_14380ab80(local_1a8 + 5,local_d8,lStack_a0);
    FUN_14380a920(local_1a8 + 6,local_d8,local_98);
    lVar6 = lStack_90;
    FUN_14380a6e0(local_1a8 + 7,local_d8);
    if (lVar6 < 0) {
      puVar7 = local_1a8 + 8;
      bVar11 = false;
      do {
        uVar10 = lStack_30 >> 0x3f;
        if (iVar8 + -4 < 4) {
          uVar10 = *(ulonglong *)((longlong)local_d8 + lVar5);
        }
        uVar9 = *(ulonglong *)((longlong)local_1a8 + lVar5 + 0x40);
        uVar1 = (ulonglong)bVar11;
        uVar2 = uVar9 - uVar10;
        bVar11 = uVar9 < uVar10 || uVar2 < uVar1;
        *puVar7 = uVar2 - uVar1;
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar8 < 8);
    }
    if ((((((local_1a8[10] == local_1a8[2] && local_1a8[9] == local_1a8[1]) &&
           local_1a8[8] == local_1a8[0]) && local_1a8[7] == lStack_1b0) && local_1a8[6] == local_1b8
         ) && local_1a8[5] == lStack_1c0) && local_1a8[4] == local_1c8) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438088c0 FUN_1438088c0 body=143 status=ok
// SIG undefined FUN_1438088c0(void)

undefined8 * FUN_1438088c0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_14380beb0(param_3,param_2[1],&local_48,1);
  local_30 = local_48;
  uStack_28 = uStack_40;
  FUN_14380beb0(param_3,*param_2,&local_20,1);
  *param_1 = local_20;
  param_1[1] = local_18;
  param_1[2] = local_30;
  param_1[3] = uStack_28;
  return param_1;
}



// FUNCTION 143808950 FUN_143808950 body=18 status=ok
// SIG undefined FUN_143808950(void)

int * FUN_143808950(int *param_1,int *param_2)

{
  *param_1 = -*param_2;
  param_1[1] = -param_2[1];
  return param_1;
}



// FUNCTION 143808970 FUN_143808970 body=35 status=ok
// SIG undefined FUN_143808970(void)

longlong * FUN_143808970(longlong *param_1,longlong *param_2)

{
  *param_1 = -*param_2;
  param_1[1] = -param_2[1];
  param_1[2] = -param_2[2];
  return param_1;
}



// FUNCTION 1438089a0 FUN_1438089a0 body=152 status=ok
// SIG undefined FUN_1438089a0(void)

longlong * FUN_1438089a0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_38 [6];
  
  plVar3 = local_38;
  lVar5 = 2;
  plVar4 = local_38 + 4;
  bVar7 = false;
  local_38[0] = param_2[2];
  local_38[1] = param_2[3];
  lVar6 = 2;
  local_38[2] = *param_2;
  local_38[3] = param_2[1];
  do {
    uVar2 = (ulonglong)bVar7;
    lVar1 = *plVar3;
    bVar7 = *plVar3 != 0 || (ulonglong)-lVar1 < uVar2;
    plVar3 = plVar3 + 1;
    *plVar4 = -lVar1 - uVar2;
    plVar4 = plVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  bVar7 = false;
  plVar3 = local_38 + 2;
  plVar4 = local_38;
  do {
    uVar2 = (ulonglong)bVar7;
    lVar6 = *plVar3;
    bVar7 = *plVar3 != 0 || (ulonglong)-lVar6 < uVar2;
    plVar3 = plVar3 + 1;
    *plVar4 = -lVar6 - uVar2;
    lVar5 = lVar5 + -1;
    plVar4 = plVar4 + 1;
  } while (lVar5 != 0);
  *param_1 = local_38[0];
  param_1[1] = local_38[1];
  param_1[2] = local_38[4];
  param_1[3] = local_38[5];
  return param_1;
}



// FUNCTION 143808a40 FUN_143808a40 body=260 status=ok
// SIG undefined FUN_143808a40(void)

/* WARNING: Removing unreachable block (ram,0x000143808a92) */
/* WARNING: Removing unreachable block (ram,0x000143808ae6) */

longlong * FUN_143808a40(longlong *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  bool bVar12;
  longlong local_38 [4];
  
  plVar7 = local_38;
  uVar1 = param_3[3];
  puVar11 = param_3 + 2;
  iVar9 = 0;
  bVar12 = false;
  lVar8 = (param_2 + 0x10) - (longlong)puVar11;
  plVar6 = local_38 + 2;
  iVar10 = 0;
  do {
    uVar2 = *(ulonglong *)(lVar8 + (longlong)puVar11);
    uVar5 = (longlong)uVar1 >> 0x3f;
    if (iVar10 < 2) {
      uVar5 = *puVar11;
    }
    uVar3 = (ulonglong)bVar12;
    uVar4 = uVar2 - uVar5;
    bVar12 = uVar2 < uVar5 || uVar4 < uVar3;
    *plVar6 = uVar4 - uVar3;
    iVar10 = iVar10 + 1;
    plVar6 = plVar6 + 1;
    puVar11 = puVar11 + 1;
  } while (iVar10 < 2);
  uVar1 = param_3[1];
  bVar12 = false;
  param_2 = param_2 - (longlong)param_3;
  do {
    uVar2 = *(ulonglong *)(param_2 + (longlong)param_3);
    uVar5 = (longlong)uVar1 >> 0x3f;
    if (iVar9 < 2) {
      uVar5 = *param_3;
    }
    uVar3 = (ulonglong)bVar12;
    uVar4 = uVar2 - uVar5;
    bVar12 = uVar2 < uVar5 || uVar4 < uVar3;
    *plVar7 = uVar4 - uVar3;
    iVar9 = iVar9 + 1;
    plVar7 = plVar7 + 1;
    param_3 = param_3 + 1;
  } while (iVar9 < 2);
  *param_1 = local_38[0];
  param_1[1] = local_38[1];
  param_1[2] = local_38[2];
  param_1[3] = local_38[3];
  return param_1;
}



// FUNCTION 143808b50 FUN_143808b50 body=294 status=ok
// SIG undefined FUN_143808b50(void)

longlong * FUN_143808b50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong local_88 [4];
  longlong local_68 [4];
  longlong local_48 [4];
  longlong local_28 [4];
  
  lVar5 = 3;
  plVar3 = local_88;
  local_88[0] = param_2[6];
  local_88[1] = param_2[7];
  bVar7 = false;
  lVar6 = 3;
  local_88[2] = param_2[8];
  local_68[0] = param_2[3];
  local_68[1] = param_2[4];
  local_68[2] = param_2[5];
  local_48[0] = *param_2;
  local_48[1] = param_2[1];
  local_48[2] = param_2[2];
  plVar4 = local_28;
  do {
    uVar2 = (ulonglong)bVar7;
    lVar1 = *plVar3;
    bVar7 = *plVar3 != 0 || (ulonglong)-lVar1 < uVar2;
    plVar3 = plVar3 + 1;
    *plVar4 = -lVar1 - uVar2;
    lVar6 = lVar6 + -1;
    plVar4 = plVar4 + 1;
  } while (lVar6 != 0);
  bVar7 = false;
  plVar3 = local_68;
  lVar6 = 3;
  plVar4 = local_88;
  do {
    uVar2 = (ulonglong)bVar7;
    lVar1 = *plVar3;
    bVar7 = *plVar3 != 0 || (ulonglong)-lVar1 < uVar2;
    plVar3 = plVar3 + 1;
    *plVar4 = -lVar1 - uVar2;
    lVar6 = lVar6 + -1;
    plVar4 = plVar4 + 1;
  } while (lVar6 != 0);
  bVar7 = false;
  plVar3 = local_48;
  plVar4 = local_68;
  do {
    uVar2 = (ulonglong)bVar7;
    lVar6 = *plVar3;
    bVar7 = *plVar3 != 0 || (ulonglong)-lVar6 < uVar2;
    plVar3 = plVar3 + 1;
    *plVar4 = -lVar6 - uVar2;
    lVar5 = lVar5 + -1;
    plVar4 = plVar4 + 1;
  } while (lVar5 != 0);
  *param_1 = local_68[0];
  param_1[1] = local_68[1];
  param_1[2] = local_68[2];
  param_1[3] = local_88[0];
  param_1[4] = local_88[1];
  param_1[5] = local_88[2];
  param_1[6] = local_28[0];
  param_1[7] = local_28[1];
  param_1[8] = local_28[2];
  return param_1;
}



// FUNCTION 143808c80 FUN_143808c80 body=50 status=ok
// SIG undefined FUN_143808c80(void)

void FUN_143808c80(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar4 = 3;
  param_2 = param_2 - (longlong)param_1;
  do {
    puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
    uVar2 = (ulonglong)bVar5;
    uVar3 = *param_1 + *puVar1;
    bVar5 = CARRY8(*param_1,*puVar1) || CARRY8(uVar3,uVar2);
    param_1 = param_1 + 1;
    *param_3 = uVar3 + uVar2;
    lVar4 = lVar4 + -1;
    param_3 = param_3 + 1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143808cc0 FUN_143808cc0 body=50 status=ok
// SIG undefined FUN_143808cc0(void)

void FUN_143808cc0(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar4 = 5;
  param_2 = param_2 - (longlong)param_1;
  do {
    puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
    uVar2 = (ulonglong)bVar5;
    uVar3 = *param_1 + *puVar1;
    bVar5 = CARRY8(*param_1,*puVar1) || CARRY8(uVar3,uVar2);
    param_1 = param_1 + 1;
    *param_3 = uVar3 + uVar2;
    lVar4 = lVar4 + -1;
    param_3 = param_3 + 1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143808d00 FUN_143808d00 body=50 status=ok
// SIG undefined FUN_143808d00(void)

void FUN_143808d00(ulonglong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar4 = 6;
  param_2 = param_2 - (longlong)param_1;
  do {
    puVar1 = (ulonglong *)(param_2 + (longlong)param_1);
    uVar2 = (ulonglong)bVar5;
    uVar3 = *param_1 + *puVar1;
    bVar5 = CARRY8(*param_1,*puVar1) || CARRY8(uVar3,uVar2);
    param_1 = param_1 + 1;
    *param_3 = uVar3 + uVar2;
    lVar4 = lVar4 + -1;
    param_3 = param_3 + 1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 143808d40 FUN_143808d40 body=32 status=ok
// SIG undefined FUN_143808d40(void)

longlong * FUN_143808d40(longlong *param_1,int *param_2,int *param_3)

{
  *param_1 = (longlong)param_2[1] * (longlong)param_3[1] + (longlong)*param_2 * (longlong)*param_3;
  return param_1;
}



// FUNCTION 143808d60 FUN_143808d60 body=589 status=ok
// SIG undefined FUN_143808d60(void)

undefined8 FUN_143808d60(undefined8 param_1,int *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  ulonglong local_a0 [4];
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  uVar18 = (ulonglong)param_2[1];
  uVar1 = param_3[4];
  puVar12 = param_3 + 5;
  lVar19 = 3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1;
  lVar20 = 3;
  bVar22 = false;
  uVar14 = SUB168(auVar3 * auVar7,8);
  puVar15 = local_a0;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *puVar12;
    uVar13 = SUB168(auVar4 * auVar8,8);
    uVar16 = *puVar12 * uVar18;
    uVar21 = (ulonglong)bVar22;
    uVar2 = uVar16 + uVar14;
    bVar22 = CARRY8(uVar16,uVar14) || CARRY8(uVar2,uVar21);
    *puVar15 = uVar2 + uVar21;
    puVar12 = puVar12 + 1;
    lVar20 = lVar20 + -1;
    uVar14 = uVar13;
    puVar15 = puVar15 + 1;
  } while (lVar20 != 0);
  uVar14 = param_3[7];
  local_a0[3] = bVar22 + uVar13;
  if ((longlong)uVar14 < 0) {
    local_a0[3] = local_a0[3] - uVar18;
  }
  iVar17 = 1;
  if (param_2[1] < 0) {
    bVar22 = false;
    puVar12 = local_a0;
    puVar15 = local_a0;
    iVar11 = 1;
    do {
      uVar21 = (longlong)uVar14 >> 0x3f;
      if (iVar11 + -1 < 4) {
        uVar21 = *(ulonglong *)(((longlong)(param_3 + 4) - (longlong)local_a0) + (longlong)puVar12);
      }
      uVar2 = (ulonglong)bVar22;
      uVar13 = *puVar12 - uVar21;
      bVar22 = *puVar12 < uVar21 || uVar13 < uVar2;
      *puVar15 = uVar13 - uVar2;
      iVar11 = iVar11 + 1;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar11 < 5);
  }
  iVar11 = *param_2;
  uVar21 = (ulonglong)iVar11;
  local_80 = uVar1 * uVar18;
  local_78 = local_a0[0];
  local_70 = local_a0[1];
  local_68 = local_a0[2];
  local_60 = local_a0[3];
  uVar1 = *param_3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar21;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  bVar22 = false;
  uVar14 = SUB168(auVar5 * auVar9,8);
  puVar15 = local_a0;
  puVar12 = param_3;
  do {
    puVar12 = puVar12 + 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar21;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *puVar12;
    uVar13 = SUB168(auVar6 * auVar10,8);
    uVar16 = *puVar12 * uVar21;
    uVar18 = (ulonglong)bVar22;
    uVar2 = uVar16 + uVar14;
    bVar22 = CARRY8(uVar16,uVar14) || CARRY8(uVar2,uVar18);
    *puVar15 = uVar2 + uVar18;
    lVar19 = lVar19 + -1;
    uVar14 = uVar13;
    puVar15 = puVar15 + 1;
  } while (lVar19 != 0);
  uVar14 = param_3[3];
  local_a0[3] = bVar22 + uVar13;
  if ((longlong)uVar14 < 0) {
    local_a0[3] = local_a0[3] - uVar21;
  }
  if (iVar11 < 0) {
    bVar22 = false;
    puVar12 = local_a0;
    puVar15 = local_a0;
    do {
      uVar18 = (longlong)uVar14 >> 0x3f;
      if (iVar17 + -1 < 4) {
        uVar18 = *(ulonglong *)(((longlong)param_3 - (longlong)local_a0) + (longlong)puVar12);
      }
      uVar2 = (ulonglong)bVar22;
      uVar13 = *puVar12 - uVar18;
      bVar22 = *puVar12 < uVar18 || uVar13 < uVar2;
      *puVar15 = uVar13 - uVar2;
      iVar17 = iVar17 + 1;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar17 < 5);
  }
  local_50 = local_a0[0];
  local_48 = local_a0[1];
  local_40 = local_a0[2];
  local_58 = uVar1 * uVar21;
  local_38 = local_a0[3];
  FUN_143808cc0(&local_58,&local_80,param_1);
  return param_1;
}



// FUNCTION 143808fb0 FUN_143808fb0 body=578 status=ok
// SIG undefined FUN_143808fb0(void)

undefined8 FUN_143808fb0(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  ulonglong local_a0 [4];
  longlong local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  uVar1 = param_2[1];
  uVar15 = param_3[4];
  puVar12 = param_3 + 5;
  lVar21 = 3;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar15;
  lVar20 = 3;
  bVar22 = false;
  uVar13 = SUB168(auVar3 * auVar7,8);
  puVar17 = local_a0;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar1;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *puVar12;
    uVar14 = SUB168(auVar4 * auVar8,8);
    uVar18 = *puVar12 * uVar1;
    uVar16 = (ulonglong)bVar22;
    uVar2 = uVar18 + uVar13;
    bVar22 = CARRY8(uVar18,uVar13) || CARRY8(uVar2,uVar16);
    *puVar17 = uVar2 + uVar16;
    puVar12 = puVar12 + 1;
    lVar20 = lVar20 + -1;
    uVar13 = uVar14;
    puVar17 = puVar17 + 1;
  } while (lVar20 != 0);
  uVar13 = param_3[7];
  local_a0[3] = bVar22 + uVar14;
  if ((longlong)uVar13 < 0) {
    local_a0[3] = local_a0[3] - uVar1;
  }
  iVar19 = 1;
  if ((longlong)uVar1 < 0) {
    bVar22 = false;
    puVar12 = local_a0;
    puVar17 = local_a0;
    iVar11 = 1;
    do {
      uVar16 = (longlong)uVar13 >> 0x3f;
      if (iVar11 + -1 < 4) {
        uVar16 = *(ulonglong *)(((longlong)(param_3 + 4) - (longlong)local_a0) + (longlong)puVar12);
      }
      uVar2 = (ulonglong)bVar22;
      uVar14 = *puVar12 - uVar16;
      bVar22 = *puVar12 < uVar16 || uVar14 < uVar2;
      *puVar17 = uVar14 - uVar2;
      iVar11 = iVar11 + 1;
      puVar17 = puVar17 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar11 < 5);
  }
  uVar13 = *param_2;
  local_80 = uVar15 * uVar1;
  local_78 = local_a0[0];
  local_70 = local_a0[1];
  local_68 = local_a0[2];
  local_60 = local_a0[3];
  uVar1 = *param_3;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  bVar22 = false;
  uVar15 = SUB168(auVar5 * auVar9,8);
  puVar17 = local_a0;
  puVar12 = param_3;
  do {
    puVar12 = puVar12 + 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar13;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *puVar12;
    uVar14 = SUB168(auVar6 * auVar10,8);
    uVar18 = *puVar12 * uVar13;
    uVar16 = (ulonglong)bVar22;
    uVar2 = uVar18 + uVar15;
    bVar22 = CARRY8(uVar18,uVar15) || CARRY8(uVar2,uVar16);
    *puVar17 = uVar2 + uVar16;
    lVar21 = lVar21 + -1;
    uVar15 = uVar14;
    puVar17 = puVar17 + 1;
  } while (lVar21 != 0);
  uVar15 = param_3[3];
  local_a0[3] = bVar22 + uVar14;
  if ((longlong)uVar15 < 0) {
    local_a0[3] = local_a0[3] - uVar13;
  }
  if ((longlong)uVar13 < 0) {
    bVar22 = false;
    puVar12 = local_a0;
    puVar17 = local_a0;
    do {
      uVar16 = (longlong)uVar15 >> 0x3f;
      if (iVar19 + -1 < 4) {
        uVar16 = *(ulonglong *)(((longlong)param_3 - (longlong)local_a0) + (longlong)puVar12);
      }
      uVar2 = (ulonglong)bVar22;
      uVar14 = *puVar12 - uVar16;
      bVar22 = *puVar12 < uVar16 || uVar14 < uVar2;
      *puVar17 = uVar14 - uVar2;
      iVar19 = iVar19 + 1;
      puVar17 = puVar17 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar19 < 5);
  }
  local_50 = local_a0[0];
  local_48 = local_a0[1];
  local_40 = local_a0[2];
  local_58 = uVar1 * uVar13;
  local_38 = local_a0[3];
  FUN_143808cc0(&local_58,&local_80,param_1);
  return param_1;
}



// FUNCTION 143809200 FUN_143809200 body=151 status=ok
// SIG undefined FUN_143809200(void)

undefined8 FUN_143809200(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FUN_14380beb0(param_2 + 0x10,param_3[1],&local_58,1);
  local_30 = local_48;
  local_40 = local_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  FUN_14380beb0(param_2,*param_3,&local_58,1);
  local_28 = local_58;
  uStack_24 = uStack_54;
  uStack_20 = uStack_50;
  uStack_1c = uStack_4c;
  local_18 = local_48;
  FUN_143808c80(&local_28,&local_40,param_1);
  return param_1;
}



// FUNCTION 1438092a0 FUN_1438092a0 body=557 status=ok
// SIG undefined FUN_1438092a0(void)

undefined8 FUN_1438092a0(undefined8 param_1,ulonglong *param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  ulonglong local_68 [4];
  ulonglong local_48 [4];
  
  uVar18 = (ulonglong)param_3[1];
  uVar14 = param_2[3];
  puVar12 = param_2 + 4;
  lVar19 = 2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar14;
  local_88 = uVar14 * uVar18;
  lVar20 = 2;
  bVar21 = false;
  uVar14 = SUB168(auVar3 * auVar7,8);
  puVar15 = local_68;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar18;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *puVar12;
    uVar13 = SUB168(auVar4 * auVar8,8);
    uVar16 = *puVar12 * uVar18;
    uVar1 = (ulonglong)bVar21;
    uVar2 = uVar16 + uVar14;
    bVar21 = CARRY8(uVar16,uVar14) || CARRY8(uVar2,uVar1);
    *puVar15 = uVar2 + uVar1;
    puVar12 = puVar12 + 1;
    lVar20 = lVar20 + -1;
    uVar14 = uVar13;
    puVar15 = puVar15 + 1;
  } while (lVar20 != 0);
  uVar14 = param_2[5];
  local_68[2] = bVar21 + uVar13;
  if ((longlong)uVar14 < 0) {
    local_68[2] = local_68[2] - uVar18;
  }
  iVar17 = 1;
  if (param_3[1] < 0) {
    bVar21 = false;
    puVar12 = local_68;
    puVar15 = local_68;
    iVar11 = 1;
    do {
      uVar18 = (longlong)uVar14 >> 0x3f;
      if (iVar11 + -1 < 3) {
        uVar18 = *(ulonglong *)(((longlong)(param_2 + 3) - (longlong)local_68) + (longlong)puVar12);
      }
      uVar1 = (ulonglong)bVar21;
      uVar2 = *puVar12 - uVar18;
      bVar21 = *puVar12 < uVar18 || uVar2 < uVar1;
      *puVar15 = uVar2 - uVar1;
      iVar11 = iVar11 + 1;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar11 < 4);
  }
  iVar11 = *param_3;
  uVar18 = (ulonglong)iVar11;
  local_80 = local_68[0];
  local_78 = local_68[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar18;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  local_70 = *param_2 * uVar18;
  bVar21 = false;
  local_68[3] = local_70;
  uVar14 = SUB168(auVar5 * auVar9,8);
  puVar15 = local_48;
  puVar12 = param_2;
  do {
    puVar12 = puVar12 + 1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar18;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *puVar12;
    uVar13 = SUB168(auVar6 * auVar10,8);
    uVar16 = *puVar12 * uVar18;
    uVar1 = (ulonglong)bVar21;
    uVar2 = uVar16 + uVar14;
    bVar21 = CARRY8(uVar16,uVar14) || CARRY8(uVar2,uVar1);
    *puVar15 = uVar2 + uVar1;
    lVar19 = lVar19 + -1;
    uVar14 = uVar13;
    puVar15 = puVar15 + 1;
  } while (lVar19 != 0);
  uVar14 = param_2[2];
  local_48[2] = bVar21 + uVar13;
  if ((longlong)uVar14 < 0) {
    local_48[2] = local_48[2] - uVar18;
  }
  if (iVar11 < 0) {
    bVar21 = false;
    puVar12 = local_48;
    puVar15 = local_48;
    do {
      uVar18 = (longlong)uVar14 >> 0x3f;
      if (iVar17 + -1 < 3) {
        uVar18 = *(ulonglong *)(((longlong)param_2 - (longlong)local_48) + (longlong)puVar12);
      }
      uVar1 = (ulonglong)bVar21;
      uVar2 = *puVar12 - uVar18;
      bVar21 = *puVar12 < uVar18 || uVar2 < uVar1;
      *puVar15 = uVar2 - uVar1;
      iVar17 = iVar17 + 1;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar17 < 4);
  }
  local_68[0] = local_48[0];
  local_68[1] = local_48[1];
  FUN_143808c80(&local_70,&local_88,param_1);
  return param_1;
}



// FUNCTION 1438094d0 FUN_1438094d0 body=88 status=ok
// SIG undefined FUN_1438094d0(void)

undefined8 * FUN_1438094d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 local_38 [48];
  
  uVar1 = *(undefined8 *)(param_3 + 0x40);
  uVar2 = *(undefined8 *)(param_3 + 0x48);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  uVar8 = *(undefined8 *)(param_3 + 0x58);
  puVar9 = (undefined8 *)FUN_143809530(local_38);
  uVar3 = puVar9[1];
  uVar4 = puVar9[2];
  uVar5 = puVar9[3];
  *param_1 = *puVar9;
  param_1[1] = uVar3;
  uVar3 = puVar9[4];
  uVar6 = puVar9[5];
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar7;
  param_1[9] = uVar8;
  return param_1;
}



// FUNCTION 143809530 FUN_143809530 body=209 status=ok
// SIG undefined FUN_143809530(void)

undefined8 FUN_143809530(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_14380c040(param_2 + 0x18,param_3 + 0x20,&local_a8);
  local_70 = local_a8;
  local_68 = local_a0;
  local_60 = local_98;
  local_58 = local_90;
  local_50 = local_88;
  local_48 = local_80;
  FUN_14380c040(param_2,param_3,&local_40);
  local_a8 = local_40;
  local_a0 = local_38;
  local_98 = local_30;
  local_90 = local_28;
  local_88 = local_20;
  local_80 = local_18;
  FUN_143808d00(&local_a8,&local_70,param_1);
  return param_1;
}



// FUNCTION 143809610 FUN_143809610 body=1896 status=ok
// SIG undefined FUN_143809610(void)

void FUN_143809610(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  char cVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  bool bVar24;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  int iStack_45c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  int iStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  int iStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  int iStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  int iStack_2bc;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  int iStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  int iStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int iStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int iStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  int iStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1fc;
  ulonglong local_1f8 [4];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  longlong lStack_1c0;
  ulonglong local_1b8 [4];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  
  lVar16 = *param_1;
  local_478 = *(undefined4 *)(lVar16 + 0x20);
  uStack_474 = *(undefined4 *)(lVar16 + 0x24);
  uStack_470 = *(undefined4 *)(lVar16 + 0x28);
  uStack_46c = *(undefined4 *)(lVar16 + 0x2c);
  local_468 = *(undefined4 *)(lVar16 + 0x30);
  uStack_464 = *(undefined4 *)(lVar16 + 0x34);
  uStack_460 = *(undefined4 *)(lVar16 + 0x38);
  iStack_45c = *(int *)(lVar16 + 0x3c);
  local_2f8 = *(undefined4 *)(lVar16 + 0x50);
  uStack_2f4 = *(undefined4 *)(lVar16 + 0x54);
  uStack_2f0 = *(undefined4 *)(lVar16 + 0x58);
  iStack_2ec = *(int *)(lVar16 + 0x5c);
  local_488 = *(undefined4 *)(lVar16 + 0x40);
  uStack_484 = *(undefined4 *)(lVar16 + 0x44);
  uStack_480 = *(undefined4 *)(lVar16 + 0x48);
  uStack_47c = *(undefined4 *)(lVar16 + 0x4c);
  lVar16 = (longlong)(int)((param_1[1] - lVar16) / 0x68);
  local_318 = local_478;
  uStack_314 = uStack_474;
  uStack_310 = uStack_470;
  uStack_30c = uStack_46c;
  local_308 = local_468;
  uStack_304 = uStack_464;
  uStack_300 = uStack_460;
  iStack_2fc = iStack_45c;
  local_2e8 = local_488;
  uStack_2e4 = uStack_484;
  uStack_2e0 = uStack_480;
  uStack_2dc = uStack_47c;
  local_448 = local_2f8;
  uStack_444 = uStack_2f4;
  uStack_440 = uStack_2f0;
  iStack_43c = iStack_2ec;
  if (1 < lVar16) {
    lVar23 = 0x68;
    lVar16 = lVar16 + -1;
    local_2d8 = local_478;
    uStack_2d4 = uStack_474;
    uStack_2d0 = uStack_470;
    uStack_2cc = uStack_46c;
    local_2c8 = local_468;
    uStack_2c4 = uStack_464;
    uStack_2c0 = uStack_460;
    iStack_2bc = iStack_45c;
    local_2a8 = local_2f8;
    uStack_2a4 = uStack_2f4;
    uStack_2a0 = uStack_2f0;
    iStack_29c = iStack_2ec;
    do {
      uStack_22c = uStack_2dc;
      uStack_230 = uStack_2e0;
      local_238._4_4_ = uStack_2e4;
      local_238._0_4_ = local_2e8;
      iStack_21c = iStack_2ec;
      uStack_220 = uStack_2f0;
      uStack_224 = uStack_2f4;
      local_228 = local_2f8;
      iStack_23c = iStack_2fc;
      uStack_240 = uStack_300;
      uStack_244 = uStack_304;
      local_248 = local_308;
      uStack_24c = uStack_30c;
      uStack_250 = uStack_310;
      uStack_254 = uStack_314;
      local_258 = local_318;
      lVar18 = 0;
      lVar3 = *param_1;
      puVar1 = (undefined4 *)(lVar23 + 0x50 + lVar3);
      local_328 = *puVar1;
      uStack_324 = puVar1[1];
      uStack_320 = puVar1[2];
      iStack_31c = puVar1[3];
      local_438 = 0;
      puVar2 = (undefined8 *)(lVar23 + 0x20 + lVar3);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uStack_430 = 0;
      puVar2 = (undefined8 *)(lVar23 + 0x30 + lVar3);
      uVar6 = *(undefined4 *)puVar2;
      uVar7 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar13 = *puVar2;
      uVar12 = *puVar2;
      plVar22 = puVar2 + 1;
      uVar8 = (undefined4)*plVar22;
      iVar9 = *(int *)((longlong)puVar2 + 0xc);
      lVar14 = *plVar22;
      lVar20 = *plVar22;
      local_428 = 0;
      puVar1 = (undefined4 *)(lVar23 + 0x40 + lVar3);
      local_338 = *puVar1;
      uStack_334 = puVar1[1];
      uStack_330 = puVar1[2];
      uStack_32c = puVar1[3];
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0;
      local_400 = 0;
      local_298 = uVar10;
      uStack_290 = uVar11;
      local_288 = uVar6;
      uStack_284 = uVar7;
      uStack_280 = uVar8;
      iStack_27c = iVar9;
      local_278._0_4_ = local_338;
      local_278._4_4_ = uStack_334;
      uStack_270 = uStack_330;
      uStack_26c = uStack_32c;
      local_268 = local_328;
      uStack_264 = uStack_324;
      uStack_260 = uStack_320;
      iStack_25c = iStack_31c;
      local_68 = local_328;
      uStack_64 = uStack_324;
      uStack_60 = uStack_320;
      iStack_5c = iStack_31c;
      FUN_14380acc0(&local_438,&local_278,CONCAT44(uStack_2d4,local_2d8));
      FUN_14380ab80(&uStack_430,&local_278,CONCAT44(uStack_2cc,uStack_2d0));
      FUN_14380a920(&local_428,&local_278,CONCAT44(uStack_2c4,local_2c8));
      iVar17 = iStack_2bc;
      FUN_14380a6e0(&uStack_420,&local_278,CONCAT44(iStack_2bc,uStack_2c0));
      lVar3 = (longlong)iStack_5c;
      if (iVar17 < 0) {
        plVar22 = &local_418;
        iVar17 = 4;
        bVar24 = false;
        do {
          uVar21 = lVar3 >> 0x1f;
          if (iVar17 + -4 < 4) {
            uVar21 = *(ulonglong *)((longlong)&local_278 + lVar18);
          }
          uVar4 = (ulonglong)bVar24;
          uVar5 = *(ulonglong *)((longlong)&local_418 + lVar18) - uVar21;
          bVar24 = *(ulonglong *)((longlong)&local_418 + lVar18) < uVar21 || uVar5 < uVar4;
          *plVar22 = uVar5 - uVar4;
          iVar17 = iVar17 + 1;
          plVar22 = plVar22 + 1;
          lVar18 = lVar18 + 8;
        } while (iVar17 < 8);
      }
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      local_3c0 = 0;
      local_168 = local_408;
      local_198 = local_438;
      uStack_190 = uStack_430;
      local_188 = (undefined4)local_428;
      uStack_184 = local_428._4_4_;
      uStack_180 = (undefined4)uStack_420;
      uStack_17c = uStack_420._4_4_;
      local_178 = (undefined4)local_418;
      uStack_174 = local_418._4_4_;
      uStack_170 = (undefined4)uStack_410;
      uStack_16c = uStack_410._4_4_;
      FUN_14380acc0(&local_3f8,&local_238,uVar10);
      FUN_14380ab80(&uStack_3f0,&local_238,uVar11);
      FUN_14380a920(&local_3e8,&local_238,uVar12);
      FUN_14380a6e0(&uStack_3e0,&local_238,lVar20);
      if (lVar20 < 0) {
        plVar22 = &local_3d8;
        lVar18 = (longlong)iStack_29c;
        bVar24 = false;
        lVar19 = 0;
        iVar17 = 4;
        do {
          uVar21 = lVar18 >> 0x1f;
          if (iVar17 + -4 < 4) {
            uVar21 = *(ulonglong *)((longlong)&local_238 + lVar19);
          }
          uVar4 = (ulonglong)bVar24;
          uVar5 = *(ulonglong *)((longlong)&local_3d8 + lVar19) - uVar21;
          bVar24 = *(ulonglong *)((longlong)&local_3d8 + lVar19) < uVar21 || uVar5 < uVar4;
          *plVar22 = uVar5 - uVar4;
          iVar17 = iVar17 + 1;
          plVar22 = plVar22 + 1;
          lVar19 = lVar19 + 8;
        } while (iVar17 < 8);
      }
      local_158 = local_3f8;
      uStack_150 = uStack_3f0;
      local_148 = (undefined4)local_3e8;
      uStack_144 = local_3e8._4_4_;
      uStack_140 = (undefined4)uStack_3e0;
      uStack_13c = uStack_3e0._4_4_;
      local_138 = (undefined4)local_3d8;
      uStack_134 = local_3d8._4_4_;
      uStack_130 = (undefined4)uStack_3d0;
      uStack_12c = uStack_3d0._4_4_;
      local_128 = local_3c8;
      cVar15 = FUN_14380b150(&local_158,&local_198);
      local_4a8 = (undefined4)uVar10;
      uStack_4a4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_4a0 = (undefined4)uVar11;
      uStack_49c = (undefined4)((ulonglong)uVar11 >> 0x20);
      if (cVar15 == '\0') {
        local_1d8 = local_4a8;
        uStack_1d4 = uStack_4a4;
        uStack_1d0 = uStack_4a0;
        uStack_1cc = uStack_49c;
        local_208 = local_468;
        uStack_204 = uStack_464;
        uStack_200 = uStack_460;
        iStack_1fc = iStack_45c;
        local_1b8[0] = CONCAT44(uStack_334,local_338);
        local_1b8[1] = CONCAT44(uStack_32c,uStack_330);
        local_3b8 = 0;
        uStack_3b0 = 0;
        local_1b8[2] = CONCAT44(uStack_324,local_328);
        local_1b8[3] = CONCAT44(iStack_31c,uStack_320);
        local_3a8 = 0;
        uStack_3a0 = 0;
        local_218 = CONCAT44(uStack_474,local_478);
        uStack_210 = CONCAT44(uStack_46c,uStack_470);
        local_1f8[0] = CONCAT44(uStack_484,local_488);
        local_1f8[1] = CONCAT44(uStack_47c,uStack_480);
        local_398 = 0;
        uStack_390 = 0;
        local_1f8[2] = CONCAT44(uStack_444,local_448);
        local_1f8[3] = CONCAT44(iStack_43c,uStack_440);
        local_388 = 0;
        local_380 = 0;
        local_1c8 = uVar13;
        lStack_1c0 = lVar14;
        FUN_14380acc0(&local_3b8,local_1f8,uVar10);
        FUN_14380ab80(&uStack_3b0,local_1f8,uVar11);
        FUN_14380a920(&local_3a8,local_1f8,uVar12);
        FUN_14380a6e0(&uStack_3a0,local_1f8,lVar20);
        if (lVar20 < 0) {
          plVar22 = &local_398;
          bVar24 = false;
          lVar20 = 0;
          iVar17 = 4;
          do {
            uVar21 = (longlong)iStack_43c >> 0x1f;
            if (iVar17 + -4 < 4) {
              uVar21 = *(ulonglong *)((longlong)local_1f8 + lVar20);
            }
            uVar4 = (ulonglong)bVar24;
            uVar5 = *(ulonglong *)((longlong)&local_398 + lVar20) - uVar21;
            bVar24 = *(ulonglong *)((longlong)&local_398 + lVar20) < uVar21 || uVar5 < uVar4;
            *plVar22 = uVar5 - uVar4;
            iVar17 = iVar17 + 1;
            plVar22 = plVar22 + 1;
            lVar20 = lVar20 + 8;
          } while (iVar17 < 8);
        }
        lVar20 = 0;
        local_118 = local_3b8;
        uStack_110 = uStack_3b0;
        local_378 = 0;
        local_108 = (undefined4)local_3a8;
        uStack_104 = local_3a8._4_4_;
        uStack_100 = (undefined4)uStack_3a0;
        uStack_fc = uStack_3a0._4_4_;
        uStack_370 = 0;
        local_f8 = (undefined4)local_398;
        uStack_f4 = local_398._4_4_;
        uStack_f0 = (undefined4)uStack_390;
        uStack_ec = uStack_390._4_4_;
        local_368 = 0;
        local_e8 = local_388;
        uStack_360 = 0;
        local_358 = 0;
        uStack_350 = 0;
        local_348 = 0;
        local_340 = 0;
        FUN_14380acc0(&local_378,local_1b8,CONCAT44(uStack_474,local_478));
        FUN_14380ab80(&uStack_370,local_1b8,CONCAT44(uStack_46c,uStack_470));
        FUN_14380a920(&local_368,local_1b8,CONCAT44(uStack_464,local_468));
        FUN_14380a6e0(&uStack_360,local_1b8,CONCAT44(iStack_45c,uStack_460));
        if (iStack_45c < 0) {
          plVar22 = &local_358;
          bVar24 = false;
          iVar17 = 4;
          do {
            uVar21 = lVar3 >> 0x1f;
            if (iVar17 + -4 < 4) {
              uVar21 = *(ulonglong *)((longlong)local_1b8 + lVar20);
            }
            uVar4 = (ulonglong)bVar24;
            uVar5 = *(ulonglong *)((longlong)&local_358 + lVar20) - uVar21;
            bVar24 = *(ulonglong *)((longlong)&local_358 + lVar20) < uVar21 || uVar5 < uVar4;
            *plVar22 = uVar5 - uVar4;
            iVar17 = iVar17 + 1;
            plVar22 = plVar22 + 1;
            lVar20 = lVar20 + 8;
          } while (iVar17 < 8);
        }
        local_d8 = local_378;
        uStack_d0 = uStack_370;
        local_c8 = (undefined4)local_368;
        uStack_c4 = local_368._4_4_;
        uStack_c0 = (undefined4)uStack_360;
        uStack_bc = uStack_360._4_4_;
        local_b8 = (undefined4)local_358;
        uStack_b4 = local_358._4_4_;
        uStack_b0 = (undefined4)uStack_350;
        uStack_ac = uStack_350._4_4_;
        local_a8 = local_348;
        cVar15 = FUN_14380b150(&local_d8,&local_118);
        if (cVar15 != '\0') {
          local_478 = local_4a8;
          uStack_474 = uStack_4a4;
          uStack_470 = uStack_4a0;
          uStack_46c = uStack_49c;
          local_488 = local_338;
          uStack_484 = uStack_334;
          uStack_480 = uStack_330;
          uStack_47c = uStack_32c;
          local_448 = local_328;
          uStack_444 = uStack_324;
          uStack_440 = uStack_320;
          iStack_43c = iStack_31c;
          local_468 = uVar6;
          uStack_464 = uVar7;
          uStack_460 = uVar8;
          iStack_45c = iVar9;
        }
      }
      else {
        local_2d8 = local_4a8;
        uStack_2d4 = uStack_4a4;
        uStack_2d0 = uStack_4a0;
        uStack_2cc = uStack_49c;
        local_318 = local_4a8;
        uStack_314 = uStack_4a4;
        uStack_310 = uStack_4a0;
        uStack_30c = uStack_49c;
        local_2e8 = local_338;
        uStack_2e4 = uStack_334;
        uStack_2e0 = uStack_330;
        uStack_2dc = uStack_32c;
        local_2a8 = local_328;
        uStack_2a4 = uStack_324;
        uStack_2a0 = uStack_320;
        iStack_29c = iStack_31c;
        local_2f8 = local_328;
        uStack_2f4 = uStack_324;
        uStack_2f0 = uStack_320;
        iStack_2ec = iStack_31c;
        local_308 = uVar6;
        uStack_304 = uVar7;
        uStack_300 = uVar8;
        iStack_2fc = iVar9;
        local_2c8 = uVar6;
        uStack_2c4 = uVar7;
        uStack_2c0 = uVar8;
        iStack_2bc = iVar9;
      }
      lVar23 = lVar23 + 0x68;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  *param_2 = local_318;
  param_2[1] = uStack_314;
  param_2[2] = uStack_310;
  param_2[3] = uStack_30c;
  param_2[4] = local_308;
  param_2[5] = uStack_304;
  param_2[6] = uStack_300;
  param_2[7] = iStack_2fc;
  param_2[8] = local_2e8;
  param_2[9] = uStack_2e4;
  param_2[10] = uStack_2e0;
  param_2[0xb] = uStack_2dc;
  param_2[0xc] = local_2f8;
  param_2[0xd] = uStack_2f4;
  param_2[0xe] = uStack_2f0;
  param_2[0xf] = iStack_2ec;
  *param_3 = local_478;
  param_3[1] = uStack_474;
  param_3[2] = uStack_470;
  param_3[3] = uStack_46c;
  param_3[4] = local_468;
  param_3[5] = uStack_464;
  param_3[6] = uStack_460;
  param_3[7] = iStack_45c;
  param_3[8] = local_488;
  param_3[9] = uStack_484;
  param_3[10] = uStack_480;
  param_3[0xb] = uStack_47c;
  param_3[0xc] = local_448;
  param_3[0xd] = uStack_444;
  param_3[0xe] = uStack_440;
  param_3[0xf] = iStack_43c;
  return;
}



// FUNCTION 143809d80 FUN_143809d80 body=1880 status=ok
// SIG undefined FUN_143809d80(void)

void FUN_143809d80(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  char cVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  bool bVar24;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  int iStack_45c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  int iStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  int iStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  int iStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  int iStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  int iStack_2bc;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  int iStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  int iStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  int iStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  int iStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  int iStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int iStack_1fc;
  ulonglong local_1f8 [4];
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  longlong lStack_1c0;
  ulonglong local_1b8 [4];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  
  puVar2 = (undefined4 *)*param_1;
  local_478 = *puVar2;
  uStack_474 = puVar2[1];
  uStack_470 = puVar2[2];
  uStack_46c = puVar2[3];
  local_468 = puVar2[4];
  uStack_464 = puVar2[5];
  uStack_460 = puVar2[6];
  iStack_45c = puVar2[7];
  local_2f8 = puVar2[0x14];
  uStack_2f4 = puVar2[0x15];
  uStack_2f0 = puVar2[0x16];
  iStack_2ec = puVar2[0x17];
  local_488 = puVar2[0x10];
  uStack_484 = puVar2[0x11];
  uStack_480 = puVar2[0x12];
  uStack_47c = puVar2[0x13];
  lVar16 = (longlong)(int)((param_1[1] - (longlong)puVar2) / 0x68);
  local_318 = local_478;
  uStack_314 = uStack_474;
  uStack_310 = uStack_470;
  uStack_30c = uStack_46c;
  local_308 = local_468;
  uStack_304 = uStack_464;
  uStack_300 = uStack_460;
  iStack_2fc = iStack_45c;
  local_2e8 = local_488;
  uStack_2e4 = uStack_484;
  uStack_2e0 = uStack_480;
  uStack_2dc = uStack_47c;
  local_448 = local_2f8;
  uStack_444 = uStack_2f4;
  uStack_440 = uStack_2f0;
  iStack_43c = iStack_2ec;
  if (1 < lVar16) {
    lVar23 = 0x68;
    lVar16 = lVar16 + -1;
    local_2d8 = local_478;
    uStack_2d4 = uStack_474;
    uStack_2d0 = uStack_470;
    uStack_2cc = uStack_46c;
    local_2c8 = local_468;
    uStack_2c4 = uStack_464;
    uStack_2c0 = uStack_460;
    iStack_2bc = iStack_45c;
    local_2a8 = local_2f8;
    uStack_2a4 = uStack_2f4;
    uStack_2a0 = uStack_2f0;
    iStack_29c = iStack_2ec;
    do {
      uStack_22c = uStack_2dc;
      uStack_230 = uStack_2e0;
      local_238._4_4_ = uStack_2e4;
      local_238._0_4_ = local_2e8;
      iStack_21c = iStack_2ec;
      uStack_220 = uStack_2f0;
      uStack_224 = uStack_2f4;
      local_228 = local_2f8;
      iStack_23c = iStack_2fc;
      uStack_240 = uStack_300;
      uStack_244 = uStack_304;
      local_248 = local_308;
      uStack_24c = uStack_30c;
      uStack_250 = uStack_310;
      uStack_254 = uStack_314;
      local_258 = local_318;
      lVar18 = 0;
      lVar3 = *param_1;
      puVar2 = (undefined4 *)(lVar23 + 0x50 + lVar3);
      local_328 = *puVar2;
      uStack_324 = puVar2[1];
      uStack_320 = puVar2[2];
      iStack_31c = puVar2[3];
      local_438 = 0;
      uVar10 = *(undefined8 *)(lVar23 + lVar3);
      uVar11 = ((undefined8 *)(lVar23 + lVar3))[1];
      uStack_430 = 0;
      puVar1 = (undefined8 *)(lVar23 + 0x10 + lVar3);
      uVar6 = *(undefined4 *)puVar1;
      uVar7 = *(undefined4 *)((longlong)puVar1 + 4);
      uVar13 = *puVar1;
      uVar12 = *puVar1;
      plVar22 = puVar1 + 1;
      uVar8 = (undefined4)*plVar22;
      iVar9 = *(int *)((longlong)puVar1 + 0xc);
      lVar14 = *plVar22;
      lVar20 = *plVar22;
      local_428 = 0;
      puVar2 = (undefined4 *)(lVar23 + 0x40 + lVar3);
      local_338 = *puVar2;
      uStack_334 = puVar2[1];
      uStack_330 = puVar2[2];
      uStack_32c = puVar2[3];
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0;
      local_400 = 0;
      local_298 = uVar10;
      uStack_290 = uVar11;
      local_288 = uVar6;
      uStack_284 = uVar7;
      uStack_280 = uVar8;
      iStack_27c = iVar9;
      local_278._0_4_ = local_338;
      local_278._4_4_ = uStack_334;
      uStack_270 = uStack_330;
      uStack_26c = uStack_32c;
      local_268 = local_328;
      uStack_264 = uStack_324;
      uStack_260 = uStack_320;
      iStack_25c = iStack_31c;
      local_68 = local_328;
      uStack_64 = uStack_324;
      uStack_60 = uStack_320;
      iStack_5c = iStack_31c;
      FUN_14380acc0(&local_438,&local_278,CONCAT44(uStack_2d4,local_2d8));
      FUN_14380ab80(&uStack_430,&local_278,CONCAT44(uStack_2cc,uStack_2d0));
      FUN_14380a920(&local_428,&local_278,CONCAT44(uStack_2c4,local_2c8));
      iVar17 = iStack_2bc;
      FUN_14380a6e0(&uStack_420,&local_278,CONCAT44(iStack_2bc,uStack_2c0));
      lVar3 = (longlong)iStack_5c;
      if (iVar17 < 0) {
        plVar22 = &local_418;
        iVar17 = 4;
        bVar24 = false;
        do {
          uVar21 = lVar3 >> 0x1f;
          if (iVar17 + -4 < 4) {
            uVar21 = *(ulonglong *)((longlong)&local_278 + lVar18);
          }
          uVar4 = (ulonglong)bVar24;
          uVar5 = *(ulonglong *)((longlong)&local_418 + lVar18) - uVar21;
          bVar24 = *(ulonglong *)((longlong)&local_418 + lVar18) < uVar21 || uVar5 < uVar4;
          *plVar22 = uVar5 - uVar4;
          iVar17 = iVar17 + 1;
          plVar22 = plVar22 + 1;
          lVar18 = lVar18 + 8;
        } while (iVar17 < 8);
      }
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      local_3c0 = 0;
      local_168 = local_408;
      local_198 = local_438;
      uStack_190 = uStack_430;
      local_188 = (undefined4)local_428;
      uStack_184 = local_428._4_4_;
      uStack_180 = (undefined4)uStack_420;
      uStack_17c = uStack_420._4_4_;
      local_178 = (undefined4)local_418;
      uStack_174 = local_418._4_4_;
      uStack_170 = (undefined4)uStack_410;
      uStack_16c = uStack_410._4_4_;
      FUN_14380acc0(&local_3f8,&local_238,uVar10);
      FUN_14380ab80(&uStack_3f0,&local_238,uVar11);
      FUN_14380a920(&local_3e8,&local_238,uVar12);
      FUN_14380a6e0(&uStack_3e0,&local_238,lVar20);
      if (lVar20 < 0) {
        plVar22 = &local_3d8;
        lVar18 = (longlong)iStack_29c;
        bVar24 = false;
        lVar19 = 0;
        iVar17 = 4;
        do {
          uVar21 = lVar18 >> 0x1f;
          if (iVar17 + -4 < 4) {
            uVar21 = *(ulonglong *)((longlong)&local_238 + lVar19);
          }
          uVar4 = (ulonglong)bVar24;
          uVar5 = *(ulonglong *)((longlong)&local_3d8 + lVar19) - uVar21;
          bVar24 = *(ulonglong *)((longlong)&local_3d8 + lVar19) < uVar21 || uVar5 < uVar4;
          *plVar22 = uVar5 - uVar4;
          iVar17 = iVar17 + 1;
          plVar22 = plVar22 + 1;
          lVar19 = lVar19 + 8;
        } while (iVar17 < 8);
      }
      local_158 = local_3f8;
      uStack_150 = uStack_3f0;
      local_148 = (undefined4)local_3e8;
      uStack_144 = local_3e8._4_4_;
      uStack_140 = (undefined4)uStack_3e0;
      uStack_13c = uStack_3e0._4_4_;
      local_138 = (undefined4)local_3d8;
      uStack_134 = local_3d8._4_4_;
      uStack_130 = (undefined4)uStack_3d0;
      uStack_12c = uStack_3d0._4_4_;
      local_128 = local_3c8;
      cVar15 = FUN_14380b150(&local_158,&local_198);
      local_4a8 = (undefined4)uVar10;
      uStack_4a4 = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_4a0 = (undefined4)uVar11;
      uStack_49c = (undefined4)((ulonglong)uVar11 >> 0x20);
      if (cVar15 == '\0') {
        local_1d8 = local_4a8;
        uStack_1d4 = uStack_4a4;
        uStack_1d0 = uStack_4a0;
        uStack_1cc = uStack_49c;
        local_208 = local_468;
        uStack_204 = uStack_464;
        uStack_200 = uStack_460;
        iStack_1fc = iStack_45c;
        local_1b8[0] = CONCAT44(uStack_334,local_338);
        local_1b8[1] = CONCAT44(uStack_32c,uStack_330);
        local_3b8 = 0;
        uStack_3b0 = 0;
        local_1b8[2] = CONCAT44(uStack_324,local_328);
        local_1b8[3] = CONCAT44(iStack_31c,uStack_320);
        local_3a8 = 0;
        uStack_3a0 = 0;
        local_218 = CONCAT44(uStack_474,local_478);
        uStack_210 = CONCAT44(uStack_46c,uStack_470);
        local_1f8[0] = CONCAT44(uStack_484,local_488);
        local_1f8[1] = CONCAT44(uStack_47c,uStack_480);
        local_398 = 0;
        uStack_390 = 0;
        local_1f8[2] = CONCAT44(uStack_444,local_448);
        local_1f8[3] = CONCAT44(iStack_43c,uStack_440);
        local_388 = 0;
        local_380 = 0;
        local_1c8 = uVar13;
        lStack_1c0 = lVar14;
        FUN_14380acc0(&local_3b8,local_1f8,uVar10);
        FUN_14380ab80(&uStack_3b0,local_1f8,uVar11);
        FUN_14380a920(&local_3a8,local_1f8,uVar12);
        FUN_14380a6e0(&uStack_3a0,local_1f8,lVar20);
        if (lVar20 < 0) {
          plVar22 = &local_398;
          bVar24 = false;
          lVar20 = 0;
          iVar17 = 4;
          do {
            uVar21 = (longlong)iStack_43c >> 0x1f;
            if (iVar17 + -4 < 4) {
              uVar21 = *(ulonglong *)((longlong)local_1f8 + lVar20);
            }
            uVar4 = (ulonglong)bVar24;
            uVar5 = *(ulonglong *)((longlong)&local_398 + lVar20) - uVar21;
            bVar24 = *(ulonglong *)((longlong)&local_398 + lVar20) < uVar21 || uVar5 < uVar4;
            *plVar22 = uVar5 - uVar4;
            iVar17 = iVar17 + 1;
            plVar22 = plVar22 + 1;
            lVar20 = lVar20 + 8;
          } while (iVar17 < 8);
        }
        lVar20 = 0;
        local_118 = local_3b8;
        uStack_110 = uStack_3b0;
        local_378 = 0;
        local_108 = (undefined4)local_3a8;
        uStack_104 = local_3a8._4_4_;
        uStack_100 = (undefined4)uStack_3a0;
        uStack_fc = uStack_3a0._4_4_;
        uStack_370 = 0;
        local_f8 = (undefined4)local_398;
        uStack_f4 = local_398._4_4_;
        uStack_f0 = (undefined4)uStack_390;
        uStack_ec = uStack_390._4_4_;
        local_368 = 0;
        local_e8 = local_388;
        uStack_360 = 0;
        local_358 = 0;
        uStack_350 = 0;
        local_348 = 0;
        local_340 = 0;
        FUN_14380acc0(&local_378,local_1b8,CONCAT44(uStack_474,local_478));
        FUN_14380ab80(&uStack_370,local_1b8,CONCAT44(uStack_46c,uStack_470));
        FUN_14380a920(&local_368,local_1b8,CONCAT44(uStack_464,local_468));
        FUN_14380a6e0(&uStack_360,local_1b8,CONCAT44(iStack_45c,uStack_460));
        if (iStack_45c < 0) {
          plVar22 = &local_358;
          bVar24 = false;
          iVar17 = 4;
          do {
            uVar21 = lVar3 >> 0x1f;
            if (iVar17 + -4 < 4) {
              uVar21 = *(ulonglong *)((longlong)local_1b8 + lVar20);
            }
            uVar4 = (ulonglong)bVar24;
            uVar5 = *(ulonglong *)((longlong)&local_358 + lVar20) - uVar21;
            bVar24 = *(ulonglong *)((longlong)&local_358 + lVar20) < uVar21 || uVar5 < uVar4;
            *plVar22 = uVar5 - uVar4;
            iVar17 = iVar17 + 1;
            plVar22 = plVar22 + 1;
            lVar20 = lVar20 + 8;
          } while (iVar17 < 8);
        }
        local_d8 = local_378;
        uStack_d0 = uStack_370;
        local_c8 = (undefined4)local_368;
        uStack_c4 = local_368._4_4_;
        uStack_c0 = (undefined4)uStack_360;
        uStack_bc = uStack_360._4_4_;
        local_b8 = (undefined4)local_358;
        uStack_b4 = local_358._4_4_;
        uStack_b0 = (undefined4)uStack_350;
        uStack_ac = uStack_350._4_4_;
        local_a8 = local_348;
        cVar15 = FUN_14380b150(&local_d8,&local_118);
        if (cVar15 != '\0') {
          local_478 = local_4a8;
          uStack_474 = uStack_4a4;
          uStack_470 = uStack_4a0;
          uStack_46c = uStack_49c;
          local_488 = local_338;
          uStack_484 = uStack_334;
          uStack_480 = uStack_330;
          uStack_47c = uStack_32c;
          local_448 = local_328;
          uStack_444 = uStack_324;
          uStack_440 = uStack_320;
          iStack_43c = iStack_31c;
          local_468 = uVar6;
          uStack_464 = uVar7;
          uStack_460 = uVar8;
          iStack_45c = iVar9;
        }
      }
      else {
        local_2d8 = local_4a8;
        uStack_2d4 = uStack_4a4;
        uStack_2d0 = uStack_4a0;
        uStack_2cc = uStack_49c;
        local_318 = local_4a8;
        uStack_314 = uStack_4a4;
        uStack_310 = uStack_4a0;
        uStack_30c = uStack_49c;
        local_2e8 = local_338;
        uStack_2e4 = uStack_334;
        uStack_2e0 = uStack_330;
        uStack_2dc = uStack_32c;
        local_2a8 = local_328;
        uStack_2a4 = uStack_324;
        uStack_2a0 = uStack_320;
        iStack_29c = iStack_31c;
        local_2f8 = local_328;
        uStack_2f4 = uStack_324;
        uStack_2f0 = uStack_320;
        iStack_2ec = iStack_31c;
        local_308 = uVar6;
        uStack_304 = uVar7;
        uStack_300 = uVar8;
        iStack_2fc = iVar9;
        local_2c8 = uVar6;
        uStack_2c4 = uVar7;
        uStack_2c0 = uVar8;
        iStack_2bc = iVar9;
      }
      lVar23 = lVar23 + 0x68;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  *param_2 = local_318;
  param_2[1] = uStack_314;
  param_2[2] = uStack_310;
  param_2[3] = uStack_30c;
  param_2[4] = local_308;
  param_2[5] = uStack_304;
  param_2[6] = uStack_300;
  param_2[7] = iStack_2fc;
  param_2[8] = local_2e8;
  param_2[9] = uStack_2e4;
  param_2[10] = uStack_2e0;
  param_2[0xb] = uStack_2dc;
  param_2[0xc] = local_2f8;
  param_2[0xd] = uStack_2f4;
  param_2[0xe] = uStack_2f0;
  param_2[0xf] = iStack_2ec;
  *param_3 = local_478;
  param_3[1] = uStack_474;
  param_3[2] = uStack_470;
  param_3[3] = uStack_46c;
  param_3[4] = local_468;
  param_3[5] = uStack_464;
  param_3[6] = uStack_460;
  param_3[7] = iStack_45c;
  param_3[8] = local_488;
  param_3[9] = uStack_484;
  param_3[10] = uStack_480;
  param_3[0xb] = uStack_47c;
  param_3[0xc] = local_448;
  param_3[0xd] = uStack_444;
  param_3[0xe] = uStack_440;
  param_3[0xf] = iStack_43c;
  return;
}



// FUNCTION 14380a4e0 FUN_14380a4e0 body=214 status=ok
// SIG undefined FUN_14380a4e0(void)

void FUN_14380a4e0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  
  bVar14 = false;
  lVar11 = 2;
  puVar7 = param_2;
  plVar13 = param_1;
  do {
    uVar12 = *puVar7;
    puVar7 = puVar7 + 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12;
    uVar8 = SUB168(auVar3 * auVar5,8);
    uVar12 = uVar12 * param_3;
    uVar1 = *(ulonglong *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar7);
    uVar2 = uVar1 + uVar12;
    *plVar13 = uVar2 + bVar14;
    uVar9 = *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar7);
    uVar12 = (ulonglong)(CARRY8(uVar1,uVar12) || CARRY8(uVar2,(ulonglong)bVar14));
    uVar1 = uVar9 + uVar8;
    bVar14 = CARRY8(uVar9,uVar8) || CARRY8(uVar1,uVar12);
    plVar13[1] = uVar1 + uVar12;
    lVar11 = lVar11 + -1;
    plVar13 = plVar13 + 2;
  } while (lVar11 != 0);
  lVar11 = 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  uVar9 = SUB168(auVar4 * auVar6,8);
  param_3 = param_2[1] * param_3;
  puVar7 = (ulonglong *)(param_1 + 1);
  uVar12 = *puVar7;
  *puVar7 = *puVar7 + param_3;
  uVar12 = (ulonglong)CARRY8(uVar12,param_3);
  uVar1 = param_1[2] + uVar9;
  bVar14 = CARRY8(param_1[2],uVar9) || CARRY8(uVar1,uVar12);
  param_1[2] = uVar1 + uVar12;
  puVar7 = (ulonglong *)(param_1 + 3);
  puVar10 = puVar7;
  do {
    uVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar1 = (ulonglong)bVar14;
    bVar14 = CARRY8(uVar12,uVar1);
    *puVar10 = uVar12 + uVar1;
    lVar11 = lVar11 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar11 != 0);
  return;
}



// FUNCTION 14380a5c0 FUN_14380a5c0 body=280 status=ok
// SIG undefined FUN_14380a5c0(void)

void FUN_14380a5c0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  
  bVar15 = false;
  lVar14 = 2;
  lVar8 = 2;
  plVar12 = param_1;
  puVar7 = param_2;
  do {
    uVar13 = *puVar7;
    puVar7 = puVar7 + 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar13;
    uVar9 = SUB168(auVar3 * auVar5,8);
    uVar13 = uVar13 * param_3;
    uVar1 = *(ulonglong *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar7);
    uVar2 = uVar1 + uVar13;
    *plVar12 = uVar2 + bVar15;
    uVar10 = *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar7);
    uVar13 = (ulonglong)(CARRY8(uVar1,uVar13) || CARRY8(uVar2,(ulonglong)bVar15));
    uVar1 = uVar10 + uVar9;
    bVar15 = CARRY8(uVar10,uVar9) || CARRY8(uVar1,uVar13);
    plVar12[1] = uVar1 + uVar13;
    lVar8 = lVar8 + -1;
    plVar12 = plVar12 + 2;
  } while (lVar8 != 0);
  puVar7 = (ulonglong *)(param_1 + 4);
  lVar8 = 1;
  puVar11 = puVar7;
  do {
    uVar13 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar1 = (ulonglong)bVar15;
    bVar15 = CARRY8(uVar13,uVar1);
    *puVar11 = uVar13 + uVar1;
    lVar8 = lVar8 + -1;
    puVar11 = puVar11 + 1;
  } while (lVar8 != 0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  uVar10 = SUB168(auVar4 * auVar6,8);
  param_3 = param_2[1] * param_3;
  puVar7 = (ulonglong *)(param_1 + 1);
  uVar13 = *puVar7;
  *puVar7 = *puVar7 + param_3;
  uVar13 = (ulonglong)CARRY8(uVar13,param_3);
  uVar1 = param_1[2] + uVar10;
  bVar15 = CARRY8(param_1[2],uVar10) || CARRY8(uVar1,uVar13);
  param_1[2] = uVar1 + uVar13;
  puVar7 = (ulonglong *)(param_1 + 3);
  puVar11 = puVar7;
  do {
    uVar13 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar1 = (ulonglong)bVar15;
    bVar15 = CARRY8(uVar13,uVar1);
    *puVar11 = uVar13 + uVar1;
    lVar14 = lVar14 + -1;
    puVar11 = puVar11 + 1;
  } while (lVar14 != 0);
  return;
}



// FUNCTION 14380a6e0 FUN_14380a6e0 body=274 status=ok
// SIG undefined FUN_14380a6e0(void)

void FUN_14380a6e0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  
  bVar16 = false;
  lVar13 = 2;
  lVar12 = (longlong)param_1 - (longlong)param_2;
  lVar8 = 2;
  plVar14 = param_1;
  puVar9 = param_2;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *puVar9;
    uVar10 = SUB168(auVar4 * auVar6,8);
    uVar15 = *puVar9 * param_3;
    uVar1 = *(ulonglong *)(lVar12 + (longlong)puVar9);
    uVar3 = uVar1 + uVar15;
    *plVar14 = uVar3 + bVar16;
    uVar2 = *(ulonglong *)(lVar12 + 8 + (longlong)puVar9);
    uVar1 = (ulonglong)(CARRY8(uVar1,uVar15) || CARRY8(uVar3,(ulonglong)bVar16));
    uVar3 = uVar2 + uVar10;
    bVar16 = CARRY8(uVar2,uVar10) || CARRY8(uVar3,uVar1);
    plVar14[1] = uVar3 + uVar1;
    puVar9 = puVar9 + 2;
    lVar8 = lVar8 + -1;
    plVar14 = plVar14 + 2;
  } while (lVar8 != 0);
  puVar9 = (ulonglong *)(param_1 + 4);
  lVar8 = 1;
  puVar11 = puVar9;
  do {
    uVar1 = *puVar9;
    puVar9 = puVar9 + 1;
    uVar2 = (ulonglong)bVar16;
    bVar16 = CARRY8(uVar1,uVar2);
    *puVar11 = uVar1 + uVar2;
    lVar8 = lVar8 + -1;
    puVar11 = puVar11 + 1;
  } while (lVar8 != 0);
  bVar16 = false;
  puVar9 = param_2 + 1;
  plVar14 = param_1 + 1;
  do {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_3;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *puVar9;
    uVar15 = SUB168(auVar5 * auVar7,8);
    uVar10 = *puVar9 * param_3;
    uVar1 = *(ulonglong *)((longlong)puVar9 + lVar12);
    uVar3 = uVar1 + uVar10;
    *plVar14 = uVar3 + bVar16;
    uVar2 = *(ulonglong *)((longlong)puVar9 + lVar12 + 8);
    uVar1 = (ulonglong)(CARRY8(uVar1,uVar10) || CARRY8(uVar3,(ulonglong)bVar16));
    uVar3 = uVar2 + uVar15;
    bVar16 = CARRY8(uVar2,uVar15) || CARRY8(uVar3,uVar1);
    plVar14[1] = uVar3 + uVar1;
    lVar13 = lVar13 + -1;
    puVar9 = puVar9 + 2;
    plVar14 = plVar14 + 2;
  } while (lVar13 != 0);
  return;
}



// FUNCTION 14380a800 FUN_14380a800 body=280 status=ok
// SIG undefined FUN_14380a800(void)

void FUN_14380a800(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  
  bVar15 = false;
  lVar14 = 2;
  lVar12 = 2;
  plVar11 = param_1;
  puVar7 = param_2;
  do {
    uVar13 = *puVar7;
    puVar7 = puVar7 + 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar13;
    uVar8 = SUB168(auVar3 * auVar5,8);
    uVar13 = uVar13 * param_3;
    uVar1 = *(ulonglong *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar7);
    uVar2 = uVar1 + uVar13;
    *plVar11 = uVar2 + bVar15;
    uVar9 = *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar7);
    uVar13 = (ulonglong)(CARRY8(uVar1,uVar13) || CARRY8(uVar2,(ulonglong)bVar15));
    uVar1 = uVar9 + uVar8;
    bVar15 = CARRY8(uVar9,uVar8) || CARRY8(uVar1,uVar13);
    plVar11[1] = uVar1 + uVar13;
    lVar12 = lVar12 + -1;
    plVar11 = plVar11 + 2;
  } while (lVar12 != 0);
  puVar7 = (ulonglong *)(param_1 + 4);
  puVar10 = puVar7;
  do {
    uVar13 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar1 = (ulonglong)bVar15;
    bVar15 = CARRY8(uVar13,uVar1);
    *puVar10 = uVar13 + uVar1;
    lVar14 = lVar14 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar14 != 0);
  lVar12 = 3;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  uVar9 = SUB168(auVar4 * auVar6,8);
  param_3 = param_2[1] * param_3;
  puVar7 = (ulonglong *)(param_1 + 1);
  uVar13 = *puVar7;
  *puVar7 = *puVar7 + param_3;
  uVar13 = (ulonglong)CARRY8(uVar13,param_3);
  uVar1 = param_1[2] + uVar9;
  bVar15 = CARRY8(param_1[2],uVar9) || CARRY8(uVar1,uVar13);
  param_1[2] = uVar1 + uVar13;
  puVar7 = (ulonglong *)(param_1 + 3);
  puVar10 = puVar7;
  do {
    uVar13 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar1 = (ulonglong)bVar15;
    bVar15 = CARRY8(uVar13,uVar1);
    *puVar10 = uVar13 + uVar1;
    lVar12 = lVar12 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar12 != 0);
  return;
}



// FUNCTION 14380a920 FUN_14380a920 body=326 status=ok
// SIG undefined FUN_14380a920(void)

void FUN_14380a920(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  
  bVar16 = false;
  lVar13 = 2;
  lVar14 = (longlong)param_1 - (longlong)param_2;
  lVar7 = 2;
  plVar12 = param_1;
  puVar8 = param_2;
  do {
    uVar15 = *puVar8;
    puVar8 = puVar8 + 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    uVar9 = SUB168(auVar3 * auVar5,8);
    uVar15 = uVar15 * param_3;
    uVar1 = *(ulonglong *)(lVar14 + -0x10 + (longlong)puVar8);
    uVar11 = uVar1 + uVar15;
    *plVar12 = uVar11 + bVar16;
    uVar2 = *(ulonglong *)(lVar14 + -8 + (longlong)puVar8);
    uVar15 = (ulonglong)(CARRY8(uVar1,uVar15) || CARRY8(uVar11,(ulonglong)bVar16));
    uVar1 = uVar2 + uVar9;
    bVar16 = CARRY8(uVar2,uVar9) || CARRY8(uVar1,uVar15);
    plVar12[1] = uVar1 + uVar15;
    lVar7 = lVar7 + -1;
    plVar12 = plVar12 + 2;
  } while (lVar7 != 0);
  puVar8 = (ulonglong *)(param_1 + 4);
  lVar7 = 2;
  puVar10 = puVar8;
  do {
    uVar15 = (ulonglong)bVar16;
    bVar16 = CARRY8(*puVar8,uVar15);
    *puVar10 = *puVar8 + uVar15;
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar7 != 0);
  bVar16 = false;
  puVar8 = param_2 + 1;
  plVar12 = param_1 + 1;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *puVar8;
    uVar11 = SUB168(auVar4 * auVar6,8);
    uVar9 = *puVar8 * param_3;
    uVar15 = *(ulonglong *)((longlong)puVar8 + lVar14);
    uVar2 = uVar15 + uVar9;
    *plVar12 = uVar2 + bVar16;
    uVar1 = *(ulonglong *)((longlong)puVar8 + lVar14 + 8);
    uVar15 = (ulonglong)(CARRY8(uVar15,uVar9) || CARRY8(uVar2,(ulonglong)bVar16));
    uVar2 = uVar1 + uVar11;
    bVar16 = CARRY8(uVar1,uVar11) || CARRY8(uVar2,uVar15);
    plVar12[1] = uVar2 + uVar15;
    lVar13 = lVar13 + -1;
    puVar8 = puVar8 + 2;
    plVar12 = plVar12 + 2;
  } while (lVar13 != 0);
  puVar8 = (ulonglong *)(param_1 + 5);
  lVar7 = 1;
  puVar10 = puVar8;
  do {
    uVar15 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar1 = (ulonglong)bVar16;
    bVar16 = CARRY8(uVar15,uVar1);
    *puVar10 = uVar15 + uVar1;
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 14380aa70 FUN_14380aa70 body=262 status=ok
// SIG undefined FUN_14380aa70(void)

void FUN_14380aa70(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  
  bVar14 = false;
  lVar8 = 2;
  puVar7 = param_2;
  plVar13 = param_1;
  do {
    uVar12 = *puVar7;
    puVar7 = puVar7 + 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12;
    uVar9 = SUB168(auVar3 * auVar5,8);
    uVar12 = uVar12 * param_3;
    uVar1 = *(ulonglong *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar7);
    uVar2 = uVar1 + uVar12;
    *plVar13 = uVar2 + bVar14;
    uVar10 = *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar7);
    uVar12 = (ulonglong)(CARRY8(uVar1,uVar12) || CARRY8(uVar2,(ulonglong)bVar14));
    uVar1 = uVar10 + uVar9;
    bVar14 = CARRY8(uVar10,uVar9) || CARRY8(uVar1,uVar12);
    plVar13[1] = uVar1 + uVar12;
    lVar8 = lVar8 + -1;
    plVar13 = plVar13 + 2;
  } while (lVar8 != 0);
  puVar7 = (ulonglong *)(param_1 + 4);
  lVar8 = 3;
  puVar11 = puVar7;
  do {
    uVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar1 = (ulonglong)bVar14;
    bVar14 = CARRY8(uVar12,uVar1);
    *puVar11 = uVar12 + uVar1;
    lVar8 = lVar8 + -1;
    puVar11 = puVar11 + 1;
  } while (lVar8 != 0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[1];
  uVar10 = SUB168(auVar4 * auVar6,8);
  param_3 = param_2[1] * param_3;
  lVar8 = 4;
  puVar7 = (ulonglong *)(param_1 + 1);
  uVar12 = *puVar7;
  *puVar7 = *puVar7 + param_3;
  uVar12 = (ulonglong)CARRY8(uVar12,param_3);
  uVar1 = param_1[2] + uVar10;
  bVar14 = CARRY8(param_1[2],uVar10) || CARRY8(uVar1,uVar12);
  param_1[2] = uVar1 + uVar12;
  puVar7 = (ulonglong *)(param_1 + 3);
  puVar11 = puVar7;
  do {
    uVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    uVar1 = (ulonglong)bVar14;
    bVar14 = CARRY8(uVar12,uVar1);
    *puVar11 = uVar12 + uVar1;
    lVar8 = lVar8 + -1;
    puVar11 = puVar11 + 1;
  } while (lVar8 != 0);
  return;
}



// FUNCTION 14380ab80 FUN_14380ab80 body=310 status=ok
// SIG undefined FUN_14380ab80(void)

void FUN_14380ab80(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  
  bVar16 = false;
  lVar15 = 2;
  lVar13 = (longlong)param_1 - (longlong)param_2;
  lVar7 = 2;
  plVar12 = param_1;
  puVar8 = param_2;
  do {
    uVar14 = *puVar8;
    puVar8 = puVar8 + 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar14;
    uVar9 = SUB168(auVar3 * auVar5,8);
    uVar14 = uVar14 * param_3;
    uVar1 = *(ulonglong *)(lVar13 + -0x10 + (longlong)puVar8);
    uVar11 = uVar1 + uVar14;
    *plVar12 = uVar11 + bVar16;
    uVar2 = *(ulonglong *)(lVar13 + -8 + (longlong)puVar8);
    uVar14 = (ulonglong)(CARRY8(uVar1,uVar14) || CARRY8(uVar11,(ulonglong)bVar16));
    uVar1 = uVar2 + uVar9;
    bVar16 = CARRY8(uVar2,uVar9) || CARRY8(uVar1,uVar14);
    plVar12[1] = uVar1 + uVar14;
    lVar7 = lVar7 + -1;
    plVar12 = plVar12 + 2;
  } while (lVar7 != 0);
  puVar8 = (ulonglong *)(param_1 + 4);
  lVar7 = 3;
  puVar10 = puVar8;
  do {
    uVar14 = (ulonglong)bVar16;
    bVar16 = CARRY8(*puVar8,uVar14);
    *puVar10 = *puVar8 + uVar14;
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar7 != 0);
  bVar16 = false;
  lVar7 = 2;
  puVar8 = param_2 + 1;
  plVar12 = param_1 + 1;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *puVar8;
    uVar11 = SUB168(auVar4 * auVar6,8);
    uVar9 = *puVar8 * param_3;
    uVar14 = *(ulonglong *)((longlong)puVar8 + lVar13);
    uVar2 = uVar14 + uVar9;
    *plVar12 = uVar2 + bVar16;
    uVar1 = *(ulonglong *)((longlong)puVar8 + lVar13 + 8);
    uVar14 = (ulonglong)(CARRY8(uVar14,uVar9) || CARRY8(uVar2,(ulonglong)bVar16));
    uVar2 = uVar1 + uVar11;
    bVar16 = CARRY8(uVar1,uVar11) || CARRY8(uVar2,uVar14);
    plVar12[1] = uVar2 + uVar14;
    lVar7 = lVar7 + -1;
    puVar8 = puVar8 + 2;
    plVar12 = plVar12 + 2;
  } while (lVar7 != 0);
  puVar8 = (ulonglong *)(param_1 + 5);
  puVar10 = puVar8;
  do {
    uVar14 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar1 = (ulonglong)bVar16;
    bVar16 = CARRY8(uVar14,uVar1);
    *puVar10 = uVar14 + uVar1;
    lVar15 = lVar15 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar15 != 0);
  return;
}



// FUNCTION 14380acc0 FUN_14380acc0 body=326 status=ok
// SIG undefined FUN_14380acc0(void)

void FUN_14380acc0(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  
  bVar16 = false;
  lVar13 = 2;
  lVar14 = (longlong)param_1 - (longlong)param_2;
  lVar7 = 2;
  plVar12 = param_1;
  puVar8 = param_2;
  do {
    uVar15 = *puVar8;
    puVar8 = puVar8 + 2;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_3;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    uVar9 = SUB168(auVar3 * auVar5,8);
    uVar15 = uVar15 * param_3;
    uVar1 = *(ulonglong *)(lVar14 + -0x10 + (longlong)puVar8);
    uVar11 = uVar1 + uVar15;
    *plVar12 = uVar11 + bVar16;
    uVar2 = *(ulonglong *)(lVar14 + -8 + (longlong)puVar8);
    uVar15 = (ulonglong)(CARRY8(uVar1,uVar15) || CARRY8(uVar11,(ulonglong)bVar16));
    uVar1 = uVar2 + uVar9;
    bVar16 = CARRY8(uVar2,uVar9) || CARRY8(uVar1,uVar15);
    plVar12[1] = uVar1 + uVar15;
    lVar7 = lVar7 + -1;
    plVar12 = plVar12 + 2;
  } while (lVar7 != 0);
  puVar8 = (ulonglong *)(param_1 + 4);
  lVar7 = 4;
  puVar10 = puVar8;
  do {
    uVar15 = (ulonglong)bVar16;
    bVar16 = CARRY8(*puVar8,uVar15);
    *puVar10 = *puVar8 + uVar15;
    puVar8 = puVar8 + 1;
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar7 != 0);
  bVar16 = false;
  puVar8 = param_2 + 1;
  plVar12 = param_1 + 1;
  do {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_3;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *puVar8;
    uVar11 = SUB168(auVar4 * auVar6,8);
    uVar9 = *puVar8 * param_3;
    uVar15 = *(ulonglong *)((longlong)puVar8 + lVar14);
    uVar2 = uVar15 + uVar9;
    *plVar12 = uVar2 + bVar16;
    uVar1 = *(ulonglong *)((longlong)puVar8 + lVar14 + 8);
    uVar15 = (ulonglong)(CARRY8(uVar15,uVar9) || CARRY8(uVar2,(ulonglong)bVar16));
    uVar2 = uVar1 + uVar11;
    bVar16 = CARRY8(uVar1,uVar11) || CARRY8(uVar2,uVar15);
    plVar12[1] = uVar2 + uVar15;
    lVar13 = lVar13 + -1;
    puVar8 = puVar8 + 2;
    plVar12 = plVar12 + 2;
  } while (lVar13 != 0);
  puVar8 = (ulonglong *)(param_1 + 5);
  lVar7 = 3;
  puVar10 = puVar8;
  do {
    uVar15 = *puVar8;
    puVar8 = puVar8 + 1;
    uVar1 = (ulonglong)bVar16;
    bVar16 = CARRY8(uVar15,uVar1);
    *puVar10 = uVar15 + uVar1;
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 1;
  } while (lVar7 != 0);
  return;
}



// FUNCTION 14380ae10 FUN_14380ae10 body=152 status=ok
// SIG undefined FUN_14380ae10(void)

byte FUN_14380ae10(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  bVar4 = -(char)((longlong)uVar1 >> 0x3f);
  bVar5 = -(char)((longlong)uVar2 >> 0x3f);
  uVar3 = param_1[1];
  bVar6 = bVar5 == bVar4 && (uVar2 <= uVar1 && uVar2 >= uVar1);
  return (uVar3 < param_2[1] && bVar6) | (bVar4 ^ 1) & bVar5 | (uVar2 < uVar1 && bVar5 == bVar4) |
         (((uVar3 <= param_2[1] && uVar3 >= param_2[1]) && *param_1 < *param_2) && bVar6);
}



// FUNCTION 14380aeb0 FUN_14380aeb0 body=185 status=ok
// SIG undefined FUN_14380aeb0(void)

byte FUN_14380aeb0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  bVar5 = -(char)((longlong)uVar1 >> 0x3f);
  bVar6 = -(char)((longlong)uVar2 >> 0x3f);
  uVar3 = param_1[2];
  uVar4 = param_1[1];
  bVar7 = bVar6 == bVar5 && (uVar2 <= uVar1 && uVar2 >= uVar1);
  bVar8 = bVar7 && (uVar3 <= param_2[2] && uVar3 >= param_2[2]);
  return (uVar4 < param_2[1] && bVar8) |
         (bVar5 ^ 1) & bVar6 | (uVar2 < uVar1 && bVar6 == bVar5) | (uVar3 < param_2[2] && bVar7) |
         (((uVar4 <= param_2[1] && uVar4 >= param_2[1]) && *param_1 < *param_2) && bVar8);
}



// FUNCTION 14380af70 FUN_14380af70 body=218 status=ok
// SIG undefined FUN_14380af70(void)

byte FUN_14380af70(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  bVar6 = -(char)((longlong)uVar1 >> 0x3f);
  bVar7 = -(char)((longlong)uVar2 >> 0x3f);
  uVar3 = param_1[3];
  uVar4 = param_1[1];
  bVar8 = bVar7 == bVar6 && (uVar2 <= uVar1 && uVar2 >= uVar1);
  uVar5 = param_1[2];
  bVar9 = bVar8 && (uVar3 <= param_2[3] && uVar3 >= param_2[3]);
  bVar10 = bVar9 && (uVar5 <= param_2[2] && uVar5 >= param_2[2]);
  return (uVar4 < param_2[1] && bVar10) |
         (bVar6 ^ 1) & bVar7 | (uVar2 < uVar1 && bVar7 == bVar6) | (uVar3 < param_2[3] && bVar8) |
         (uVar5 < param_2[2] && bVar9) |
         (((uVar4 <= param_2[1] && uVar4 >= param_2[1]) && *param_1 < *param_2) && bVar10);
}



// FUNCTION 14380b050 FUN_14380b050 body=251 status=ok
// SIG undefined FUN_14380b050(void)

byte FUN_14380b050(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  bVar7 = -(char)((longlong)uVar1 >> 0x3f);
  bVar8 = -(char)((longlong)uVar2 >> 0x3f);
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  bVar9 = bVar8 == bVar7 && (uVar2 <= uVar1 && uVar2 >= uVar1);
  uVar5 = param_1[3];
  bVar10 = bVar9 && (uVar3 <= param_2[4] && uVar3 >= param_2[4]);
  uVar6 = param_1[2];
  bVar11 = bVar10 && (uVar5 <= param_2[3] && uVar5 >= param_2[3]);
  bVar12 = bVar11 && (uVar6 <= param_2[2] && uVar6 >= param_2[2]);
  return (uVar4 < param_2[1] && bVar12) |
         (bVar7 ^ 1) & bVar8 | (uVar2 < uVar1 && bVar8 == bVar7) | (uVar3 < param_2[4] && bVar9) |
         (uVar5 < param_2[3] && bVar10) | (uVar6 < param_2[2] && bVar11) |
         (((uVar4 <= param_2[1] && uVar4 >= param_2[1]) && *param_1 < *param_2) && bVar12);
}



// FUNCTION 14380b150 FUN_14380b150 body=284 status=ok
// SIG undefined FUN_14380b150(void)

byte FUN_14380b150(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  bVar8 = -(char)((longlong)uVar1 >> 0x3f);
  bVar9 = -(char)((longlong)uVar2 >> 0x3f);
  uVar3 = param_1[5];
  uVar4 = param_1[1];
  bVar10 = bVar9 == bVar8 && (uVar2 <= uVar1 && uVar2 >= uVar1);
  uVar5 = param_1[4];
  bVar11 = bVar10 && (uVar3 <= param_2[5] && uVar3 >= param_2[5]);
  uVar6 = param_1[3];
  bVar12 = bVar11 && (uVar5 <= param_2[4] && uVar5 >= param_2[4]);
  uVar7 = param_1[2];
  bVar13 = bVar12 && (uVar6 <= param_2[3] && uVar6 >= param_2[3]);
  bVar14 = bVar13 && (uVar7 <= param_2[2] && uVar7 >= param_2[2]);
  return (uVar4 < param_2[1] && bVar14) |
         (bVar8 ^ 1) & bVar9 | (uVar2 < uVar1 && bVar9 == bVar8) | (uVar3 < param_2[5] && bVar10) |
         (uVar5 < param_2[4] && bVar11) | (uVar6 < param_2[3] && bVar12) |
         (uVar7 < param_2[2] && bVar13) |
         (((uVar4 <= param_2[1] && uVar4 >= param_2[1]) && *param_1 < *param_2) && bVar14);
}



// FUNCTION 14380b270 FUN_14380b270 body=1438 status=ok
// SIG undefined FUN_14380b270(void)

/* WARNING: Removing unreachable block (ram,0x00014380b4ea) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14380b270(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong local_178 [16];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  ulonglong auStack_d0 [5];
  longlong local_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong auStack_70 [4];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong auStack_30 [3];
  
  local_178[6] = *param_2;
  local_178[7] = param_2[1];
  uVar9 = 0;
  local_178[9] = param_2[6];
  local_178[10] = param_2[7];
  local_178[0] = 0;
  local_178[8] = param_2[2];
  local_178[0xb] = param_2[8];
  local_178[1] = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  uStack_a0 = param_1[6];
  uStack_98 = param_1[7];
  local_178[4] = 0;
  local_a8 = param_1[2];
  local_178[5] = 0;
  lStack_90 = param_1[8];
  local_88 = *param_1;
  uStack_80 = param_1[1];
  local_e8 = local_178[6];
  uStack_e0 = local_178[7];
  local_d8 = local_178[8];
  auStack_d0[0] = local_178[9];
  auStack_d0[1] = local_178[10];
  auStack_d0[2] = local_178[0xb];
  local_78 = local_a8;
  auStack_70[0] = uStack_a0;
  auStack_70[1] = uStack_98;
  auStack_70[2] = lStack_90;
  auStack_70[3] = local_88;
  uStack_50 = uStack_80;
  FUN_14380a800(local_178,auStack_d0,local_88);
  FUN_14380a5c0(local_178 + 1,auStack_d0,uStack_50);
  lVar4 = local_a8;
  FUN_14380a4e0(local_178 + 2,auStack_d0,local_a8);
  iVar10 = 3;
  if (lVar4 < 0) {
    plVar8 = local_178 + 3;
    uVar12 = local_178[0xb] >> 0x3f;
    bVar14 = false;
    uVar7 = uVar9;
    iVar6 = iVar10;
    do {
      uVar13 = uVar12;
      if (iVar6 + -3 < 3) {
        uVar13 = *(ulonglong *)((longlong)auStack_d0 + uVar7);
      }
      uVar1 = *(ulonglong *)((longlong)local_178 + uVar7 + 0x18);
      uVar11 = (ulonglong)bVar14;
      uVar2 = uVar1 - uVar13;
      bVar14 = uVar1 < uVar13 || uVar2 < uVar11;
      *plVar8 = uVar2 - uVar11;
      iVar6 = iVar6 + 1;
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 8;
    } while (iVar6 < 6);
  }
  local_178[0xc] = local_178[0];
  local_178[0xd] = local_178[1];
  local_178[0xe] = local_178[2];
  local_178[0xf] = local_178[3];
  local_f8 = local_178[4];
  local_178[0] = 0;
  local_178[1] = 0;
  local_178[2] = 0;
  local_178[3] = 0;
  local_178[4] = 0;
  local_178[5] = 0;
  FUN_14380a800(local_178,auStack_70,local_178[6]);
  FUN_14380a5c0(local_178 + 1,auStack_70,local_178[7]);
  lVar4 = local_178[8];
  FUN_14380a4e0(local_178 + 2,auStack_70,local_178[8]);
  if (lVar4 < 0) {
    plVar8 = local_178 + 3;
    bVar14 = false;
    uVar7 = uVar9;
    iVar6 = iVar10;
    do {
      uVar12 = lStack_90 >> 0x3f;
      if (iVar6 + -3 < 3) {
        uVar12 = *(ulonglong *)((longlong)auStack_70 + uVar7);
      }
      uVar13 = *(ulonglong *)((longlong)local_178 + uVar7 + 0x18);
      uVar1 = (ulonglong)bVar14;
      uVar11 = uVar13 - uVar12;
      bVar14 = uVar13 < uVar12 || uVar11 < uVar1;
      *plVar8 = uVar11 - uVar1;
      iVar6 = iVar6 + 1;
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 8;
    } while (iVar6 < 6);
  }
  plVar8 = local_178;
  bVar14 = false;
  local_178[6] = local_178[0];
  local_178[7] = local_178[1];
  local_178[8] = local_178[2];
  local_178[9] = local_178[3];
  local_178[10] = local_178[4];
  uVar13 = local_178[4] >> 0x3f;
  uVar7 = uVar9;
  uVar12 = uVar9;
  do {
    uVar1 = *(ulonglong *)((longlong)local_178 + uVar12 + 0x60);
    uVar11 = uVar13;
    if ((int)uVar7 < 5) {
      uVar11 = *(ulonglong *)((longlong)local_178 + uVar12 + 0x30);
    }
    uVar2 = (ulonglong)bVar14;
    uVar3 = uVar1 - uVar11;
    bVar14 = uVar1 < uVar11 || uVar3 < uVar2;
    *plVar8 = uVar3 - uVar2;
    uVar5 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar5;
    plVar8 = plVar8 + 1;
    uVar12 = uVar12 + 8;
  } while ((int)uVar5 < 5);
  if (((((local_178[3] == 0 && local_178[2] == 0) && local_178[1] == 0) && local_178[0] == 0) &&
      local_178[4] == 0) && -1 < local_178[4]) {
    auStack_70[3] = param_2[3];
    uStack_50 = param_2[4];
    local_178[0] = 0;
    uStack_a0 = param_2[6];
    uStack_98 = param_2[7];
    local_178[1] = 0;
    local_a8 = param_2[5];
    local_88 = param_1[3];
    local_e8 = param_1[3];
    uStack_80 = param_1[4];
    uStack_e0 = param_1[4];
    local_178[2] = 0;
    lStack_90 = param_2[8];
    local_178[3] = 0;
    local_178[4] = 0;
    local_d8 = param_1[5];
    local_178[5] = 0;
    auStack_d0[2] = param_1[8];
    auStack_d0[0] = param_1[6];
    auStack_d0[1] = param_1[7];
    local_78 = local_d8;
    auStack_70[0] = auStack_d0[0];
    auStack_70[1] = auStack_d0[1];
    auStack_70[2] = auStack_d0[2];
    local_48 = auStack_70[3];
    uStack_40 = uStack_50;
    local_38 = local_a8;
    auStack_30[0] = uStack_a0;
    auStack_30[1] = uStack_98;
    auStack_30[2] = lStack_90;
    FUN_14380a800(local_178,auStack_70,auStack_70[3]);
    FUN_14380a5c0(local_178 + 1,auStack_70,uStack_50);
    lVar4 = local_a8;
    FUN_14380a4e0(local_178 + 2,auStack_70,local_a8);
    if (lVar4 < 0) {
      plVar8 = local_178 + 3;
      uVar12 = (longlong)auStack_d0[2] >> 0x3f;
      bVar14 = false;
      uVar7 = uVar9;
      iVar6 = iVar10;
      do {
        uVar13 = uVar12;
        if (iVar6 + -3 < 3) {
          uVar13 = *(ulonglong *)((longlong)auStack_70 + uVar7);
        }
        uVar1 = *(ulonglong *)((longlong)local_178 + uVar7 + 0x18);
        uVar11 = (ulonglong)bVar14;
        uVar2 = uVar1 - uVar13;
        bVar14 = uVar1 < uVar13 || uVar2 < uVar11;
        *plVar8 = uVar2 - uVar11;
        iVar6 = iVar6 + 1;
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 + 8;
      } while (iVar6 < 6);
    }
    local_178[0xc] = local_178[0];
    local_178[0xd] = local_178[1];
    local_178[0xe] = local_178[2];
    local_178[0xf] = local_178[3];
    local_f8 = local_178[4];
    local_178[6] = 0;
    local_178[7] = 0;
    local_178[8] = 0;
    local_178[9] = 0;
    local_178[10] = 0;
    local_178[0xb] = 0;
    FUN_14380a800(local_178 + 6,auStack_30,local_e8);
    FUN_14380a5c0(local_178 + 7,auStack_30,uStack_e0);
    lVar4 = local_d8;
    FUN_14380a4e0(local_178 + 8,auStack_30);
    if (lVar4 < 0) {
      plVar8 = local_178 + 9;
      uVar7 = lStack_90 >> 0x3f;
      bVar14 = false;
      do {
        uVar12 = uVar7;
        if (iVar10 + -3 < 3) {
          uVar12 = *(ulonglong *)((longlong)auStack_30 + uVar9);
        }
        uVar13 = *(ulonglong *)((longlong)local_178 + uVar9 + 0x48);
        uVar1 = (ulonglong)bVar14;
        uVar11 = uVar13 - uVar12;
        bVar14 = uVar13 < uVar12 || uVar11 < uVar1;
        *plVar8 = uVar11 - uVar1;
        iVar10 = iVar10 + 1;
        plVar8 = plVar8 + 1;
        uVar9 = uVar9 + 8;
      } while (iVar10 < 6);
    }
    local_178[0xc] = local_178[6];
    local_178[0xd] = local_178[7];
    local_178[0xe] = local_178[8];
    local_178[0xf] = local_178[9];
    local_f8 = local_178[10];
    uVar9 = FUN_14380af70(local_178 + 6,local_178);
  }
  else {
    uVar9 = (ulonglong)((uint)(local_178[4] >> 0x3f) >> 0x1f);
  }
  return uVar9;
}



// FUNCTION 14380b810 FUN_14380b810 body=1662 status=ok
// SIG undefined FUN_14380b810(void)

/* WARNING: Removing unreachable block (ram,0x00014380bad9) */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14380b810(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong local_208 [20];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong lStack_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  ulonglong local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  ulonglong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 local_38;
  longlong lStack_30;
  
  local_208[10] = param_2[2];
  local_208[0xb] = param_2[3];
  uVar9 = 0;
  local_208[8] = *param_2;
  local_208[9] = param_2[1];
  local_208[0xe] = param_2[10];
  local_208[0xf] = param_2[0xb];
  local_208[0] = 0;
  local_208[0xc] = param_2[8];
  local_208[0xd] = param_2[9];
  local_208[1] = 0;
  local_208[2] = 0;
  local_208[3] = 0;
  local_138 = *param_1;
  uStack_130 = param_1[1];
  local_208[4] = 0;
  local_208[5] = 0;
  local_208[6] = 0;
  local_208[7] = 0;
  local_150 = param_1[2];
  lStack_148 = param_1[3];
  local_118[0] = param_1[8];
  local_118[1] = param_1[9];
  local_108 = *(undefined4 *)(param_1 + 10);
  uStack_104 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_100 = *(undefined4 *)(param_1 + 0xb);
  iStack_fc = *(int *)((longlong)param_1 + 0x5c);
  local_128 = local_150;
  lStack_120 = lStack_148;
  local_f8 = local_208[8];
  uStack_f0 = local_208[9];
  local_e8 = local_208[10];
  lStack_e0 = local_208[0xb];
  local_d8[2] = local_208[0xe];
  local_d8[3] = local_208[0xf];
  local_b8 = local_138;
  uStack_b0 = uStack_130;
  local_78 = local_108;
  uStack_74 = uStack_104;
  uStack_70 = uStack_100;
  iStack_6c = iStack_fc;
  FUN_14380acc0(local_208,local_208 + 0xc,local_138);
  FUN_14380ab80(local_208 + 1,local_208 + 0xc,uStack_b0);
  FUN_14380a920(local_208 + 2,local_208 + 0xc,local_150);
  lVar4 = lStack_148;
  FUN_14380a6e0(local_208 + 3,local_208 + 0xc,lStack_148);
  iVar10 = 4;
  if (lVar4 < 0) {
    plVar7 = local_208 + 4;
    uVar12 = (longlong)local_d8[3] >> 0x3f;
    bVar14 = false;
    uVar8 = uVar9;
    iVar6 = iVar10;
    do {
      uVar13 = uVar12;
      if (iVar6 + -4 < 4) {
        uVar13 = *(ulonglong *)((longlong)local_208 + uVar8 + 0x60);
      }
      uVar1 = *(ulonglong *)((longlong)local_208 + uVar8 + 0x20);
      uVar11 = (ulonglong)bVar14;
      uVar2 = uVar1 - uVar13;
      bVar14 = uVar1 < uVar13 || uVar2 < uVar11;
      *plVar7 = uVar2 - uVar11;
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 8;
    } while (iVar6 < 8);
  }
  local_208[0x10] = local_208[0];
  local_208[0x11] = local_208[1];
  local_208[0x12] = local_208[2];
  local_208[0x13] = local_208[3];
  local_168 = local_208[4];
  uStack_160 = local_208[5];
  local_158 = local_208[6];
  local_208[0] = 0;
  local_208[1] = 0;
  local_208[2] = 0;
  local_208[3] = 0;
  local_208[4] = 0;
  local_208[5] = 0;
  local_208[6] = 0;
  local_208[7] = 0;
  FUN_14380acc0(local_208,local_118,local_f8);
  FUN_14380ab80(local_208 + 1,local_118,uStack_f0);
  FUN_14380a920(local_208 + 2,local_118,local_e8);
  lVar4 = lStack_e0;
  FUN_14380a6e0(local_208 + 3,local_118,lStack_e0);
  if (lVar4 < 0) {
    plVar7 = local_208 + 4;
    bVar14 = false;
    uVar8 = uVar9;
    iVar6 = iVar10;
    do {
      uVar12 = (longlong)iStack_6c >> 0x1f;
      if (iVar6 + -4 < 4) {
        uVar12 = *(ulonglong *)((longlong)local_118 + uVar8);
      }
      uVar13 = *(ulonglong *)((longlong)local_208 + uVar8 + 0x20);
      uVar1 = (ulonglong)bVar14;
      uVar11 = uVar13 - uVar12;
      bVar14 = uVar13 < uVar12 || uVar11 < uVar1;
      *plVar7 = uVar11 - uVar1;
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 8;
    } while (iVar6 < 8);
  }
  plVar7 = local_208;
  bVar14 = false;
  local_208[8] = local_208[0];
  local_208[9] = local_208[1];
  local_208[10] = local_208[2];
  local_208[0xb] = local_208[3];
  local_208[0xc] = local_208[4];
  local_208[0xd] = local_208[5];
  local_208[0xe] = local_208[6];
  uVar13 = local_208[6] >> 0x3f;
  uVar8 = uVar9;
  uVar12 = uVar9;
  do {
    uVar1 = *(ulonglong *)((longlong)local_208 + uVar12 + 0x80);
    uVar11 = uVar13;
    if ((int)uVar8 < 7) {
      uVar11 = *(ulonglong *)((longlong)local_208 + uVar12 + 0x40);
    }
    uVar2 = (ulonglong)bVar14;
    uVar3 = uVar1 - uVar11;
    bVar14 = uVar1 < uVar11 || uVar3 < uVar2;
    *plVar7 = uVar3 - uVar2;
    uVar5 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar5;
    plVar7 = plVar7 + 1;
    uVar12 = uVar12 + 8;
  } while ((int)uVar5 < 7);
  if (((((((local_208[5] == 0 && local_208[4] == 0) && local_208[3] == 0) && local_208[2] == 0) &&
        local_208[1] == 0) && local_208[0] == 0) && local_208[6] == 0) && -1 < local_208[6]) {
    local_150 = param_2[6];
    lStack_148 = param_2[7];
    local_208[0] = 0;
    local_d8[2] = param_2[10];
    local_d8[3] = param_2[0xb];
    local_208[1] = 0;
    local_d8[0] = param_2[8];
    local_d8[1] = param_2[9];
    local_208[2] = 0;
    local_138 = param_1[4];
    uStack_130 = param_1[5];
    local_208[3] = 0;
    local_f8 = param_2[4];
    uStack_f0 = param_2[5];
    local_208[4] = 0;
    local_208[5] = 0;
    local_208[6] = 0;
    local_208[7] = 0;
    local_128 = param_1[6];
    lStack_120 = param_1[7];
    local_118[0] = param_1[8];
    local_118[1] = param_1[9];
    local_108 = *(undefined4 *)(param_1 + 10);
    uStack_104 = *(undefined4 *)((longlong)param_1 + 0x54);
    uStack_100 = *(undefined4 *)(param_1 + 0xb);
    iStack_fc = *(int *)((longlong)param_1 + 0x5c);
    local_e8 = local_150;
    lStack_e0 = lStack_148;
    local_b8 = local_f8;
    uStack_b0 = uStack_f0;
    local_a8 = local_138;
    uStack_a0 = uStack_130;
    local_98 = local_128;
    lStack_90 = lStack_120;
    local_78 = local_108;
    uStack_74 = uStack_104;
    uStack_70 = uStack_100;
    iStack_6c = iStack_fc;
    local_38 = local_d8[2];
    lStack_30 = local_d8[3];
    FUN_14380acc0(local_208,local_118,local_f8);
    FUN_14380ab80(local_208 + 1,local_118,uStack_b0);
    FUN_14380a920(local_208 + 2,local_118,local_150);
    lVar4 = lStack_148;
    FUN_14380a6e0(local_208 + 3,local_118,lStack_148);
    if (lVar4 < 0) {
      plVar7 = local_208 + 4;
      lVar4 = (longlong)iStack_6c;
      bVar14 = false;
      uVar8 = uVar9;
      iVar6 = iVar10;
      do {
        uVar12 = lVar4 >> 0x1f;
        if (iVar6 + -4 < 4) {
          uVar12 = *(ulonglong *)((longlong)local_118 + uVar8);
        }
        uVar13 = *(ulonglong *)((longlong)local_208 + uVar8 + 0x20);
        uVar1 = (ulonglong)bVar14;
        uVar11 = uVar13 - uVar12;
        bVar14 = uVar13 < uVar12 || uVar11 < uVar1;
        *plVar7 = uVar11 - uVar1;
        iVar6 = iVar6 + 1;
        plVar7 = plVar7 + 1;
        uVar8 = uVar8 + 8;
      } while (iVar6 < 8);
    }
    local_208[0x10] = local_208[0];
    local_208[0x11] = local_208[1];
    local_208[0x12] = local_208[2];
    local_208[0x13] = local_208[3];
    local_168 = local_208[4];
    uStack_160 = local_208[5];
    local_158 = local_208[6];
    local_208[8] = 0;
    local_208[9] = 0;
    local_208[10] = 0;
    local_208[0xb] = 0;
    local_208[0xc] = 0;
    local_208[0xd] = 0;
    local_208[0xe] = 0;
    local_208[0xf] = 0;
    FUN_14380acc0(local_208 + 8,local_d8,local_a8);
    FUN_14380ab80(local_208 + 9,local_d8,uStack_a0);
    FUN_14380a920(local_208 + 10,local_d8,local_98);
    lVar4 = lStack_90;
    FUN_14380a6e0(local_208 + 0xb,local_d8,lStack_90);
    if (lVar4 < 0) {
      plVar7 = local_208 + 0xc;
      uVar8 = lStack_30 >> 0x3f;
      bVar14 = false;
      do {
        uVar12 = uVar8;
        if (iVar10 + -4 < 4) {
          uVar12 = *(ulonglong *)((longlong)local_d8 + uVar9);
        }
        uVar13 = *(ulonglong *)((longlong)local_208 + uVar9 + 0x60);
        uVar1 = (ulonglong)bVar14;
        uVar11 = uVar13 - uVar12;
        bVar14 = uVar13 < uVar12 || uVar11 < uVar1;
        *plVar7 = uVar11 - uVar1;
        iVar10 = iVar10 + 1;
        plVar7 = plVar7 + 1;
        uVar9 = uVar9 + 8;
      } while (iVar10 < 8);
    }
    local_208[0x10] = local_208[8];
    local_208[0x11] = local_208[9];
    local_208[0x12] = local_208[10];
    local_208[0x13] = local_208[0xb];
    local_168 = local_208[0xc];
    uStack_160 = local_208[0xd];
    local_158 = local_208[0xe];
    uVar9 = FUN_14380b150(local_208 + 8,local_208);
  }
  else {
    uVar9 = (ulonglong)((uint)(local_208[6] >> 0x3f) >> 0x1f);
  }
  return uVar9;
}



// FUNCTION 14380be90 FUN_14380be90 body=21 status=ok
// SIG undefined FUN_14380be90(void)

ulonglong FUN_14380be90(int *param_1)

{
  int iVar1;
  uint7 uVar2;
  
  iVar1 = *param_1;
  uVar2 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (iVar1 < 0) {
    return CONCAT71(uVar2,1);
  }
  if (iVar1 == 0) {
    return (ulonglong)((uint)param_1[1] >> 0x1f);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 14380beb0 FUN_14380beb0 body=194 status=ok
// SIG undefined FUN_14380beb0(void)

void FUN_14380beb0(ulonglong *param_1,int param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  
  uVar9 = (ulonglong)param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_1;
  uVar8 = SUB168(auVar2 * auVar4,8);
  *param_3 = *param_1 * uVar9;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1[1];
  uVar10 = param_1[1] * uVar9;
  puVar6 = (ulonglong *)(param_3 + 1);
  *puVar6 = uVar10 + uVar8;
  lVar11 = (ulonglong)CARRY8(uVar10,uVar8) + SUB168(auVar3 * auVar5,8);
  param_3[2] = lVar11;
  if ((longlong)param_1[1] < 0) {
    param_3[2] = lVar11 - uVar9;
  }
  if (param_2 < 0) {
    uVar8 = param_1[1];
    bVar13 = false;
    iVar7 = 1;
    puVar12 = puVar6;
    do {
      uVar9 = (longlong)uVar8 >> 0x3f;
      if (iVar7 + -1 < 2) {
        uVar9 = *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_3) + (longlong)puVar6);
      }
      uVar10 = (ulonglong)bVar13;
      uVar1 = *puVar6 - uVar9;
      bVar13 = *puVar6 < uVar9 || uVar1 < uVar10;
      *puVar12 = uVar1 - uVar10;
      iVar7 = iVar7 + 1;
      puVar12 = puVar12 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar7 < 3);
  }
  return;
}



// FUNCTION 14380bf80 FUN_14380bf80 body=189 status=ok
// SIG undefined FUN_14380bf80(void)

void FUN_14380bf80(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  bool bVar13;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  uVar9 = SUB168(auVar3 * auVar5,8);
  *param_3 = *param_1 * param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[1];
  uVar11 = param_1[1] * param_2;
  puVar7 = (ulonglong *)(param_3 + 1);
  *puVar7 = uVar11 + uVar9;
  lVar10 = (ulonglong)CARRY8(uVar11,uVar9) + SUB168(auVar4 * auVar6,8);
  param_3[2] = lVar10;
  if ((longlong)param_1[1] < 0) {
    param_3[2] = lVar10 - param_2;
  }
  if ((longlong)param_2 < 0) {
    uVar9 = param_1[1];
    bVar13 = false;
    iVar8 = 1;
    puVar12 = puVar7;
    do {
      uVar11 = (longlong)uVar9 >> 0x3f;
      if (iVar8 + -1 < 2) {
        uVar11 = *(ulonglong *)((longlong)param_1 + (-8 - (longlong)param_3) + (longlong)puVar7);
      }
      uVar1 = (ulonglong)bVar13;
      uVar2 = *puVar7 - uVar11;
      bVar13 = *puVar7 < uVar11 || uVar2 < uVar1;
      *puVar12 = uVar2 - uVar1;
      iVar8 = iVar8 + 1;
      puVar12 = puVar12 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 < 3);
  }
  return;
}



// FUNCTION 14380c040 FUN_14380c040 body=228 status=ok
// SIG undefined FUN_14380c040(void)

void FUN_14380c040(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong *puVar7;
  bool bVar8;
  
  FUN_14380c270();
  if (*(longlong *)(param_1 + 0x10) < 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    puVar5 = (ulonglong *)(param_3 + 0x18);
    bVar8 = false;
    iVar6 = 3;
    puVar7 = puVar5;
    do {
      uVar4 = lVar1 >> 0x3f;
      if (iVar6 + -3 < 4) {
        uVar4 = *(ulonglong *)((param_2 - param_3) + -0x18 + (longlong)puVar5);
      }
      uVar2 = (ulonglong)bVar8;
      uVar3 = *puVar5 - uVar4;
      bVar8 = *puVar5 < uVar4 || uVar3 < uVar2;
      *puVar7 = uVar3 - uVar2;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 7);
  }
  if (*(longlong *)(param_2 + 0x18) < 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar5 = (ulonglong *)(param_3 + 0x20);
    bVar8 = false;
    iVar6 = 4;
    puVar7 = puVar5;
    do {
      uVar4 = lVar1 >> 0x3f;
      if (iVar6 + -4 < 3) {
        uVar4 = *(ulonglong *)((param_1 - param_3) + -0x20 + (longlong)puVar5);
      }
      uVar2 = (ulonglong)bVar8;
      uVar3 = *puVar5 - uVar4;
      bVar8 = *puVar5 < uVar4 || uVar3 < uVar2;
      *puVar7 = uVar3 - uVar2;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 7);
  }
  return;
}



// FUNCTION 14380c130 FUN_14380c130 body=173 status=ok
// SIG undefined FUN_14380c130(void)

void FUN_14380c130(longlong param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong *puVar7;
  bool bVar8;
  
  iVar6 = 1;
  FUN_14380c310(param_1,(longlong)param_2);
  if (*(longlong *)(param_1 + 0x10) < 0) {
    *(longlong *)(param_3 + 0x18) = *(longlong *)(param_3 + 0x18) - (longlong)param_2;
  }
  if (param_2 < 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar4 = (ulonglong *)(param_3 + 8);
    bVar8 = false;
    puVar7 = puVar4;
    do {
      uVar5 = lVar1 >> 0x3f;
      if (iVar6 + -1 < 3) {
        uVar5 = *(ulonglong *)((param_1 - param_3) + -8 + (longlong)puVar4);
      }
      uVar2 = (ulonglong)bVar8;
      uVar3 = *puVar4 - uVar5;
      bVar8 = *puVar4 < uVar5 || uVar3 < uVar2;
      *puVar7 = uVar3 - uVar2;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar6 < 4);
  }
  return;
}



// FUNCTION 14380c1e0 FUN_14380c1e0 body=133 status=ok
// SIG undefined FUN_14380c1e0(void)

void FUN_14380c1e0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong *puVar7;
  bool bVar8;
  
  FUN_14380c3a0();
  if (*(longlong *)(param_2 + 0x10) < 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar5 = (ulonglong *)(param_3 + 0x18);
    bVar8 = false;
    iVar6 = 3;
    puVar7 = puVar5;
    do {
      uVar4 = lVar1 >> 0x3f;
      if (iVar6 + -3 < 4) {
        uVar4 = *(ulonglong *)((param_1 - param_3) + -0x18 + (longlong)puVar5);
      }
      uVar2 = (ulonglong)bVar8;
      uVar3 = *puVar5 - uVar4;
      bVar8 = *puVar5 < uVar4 || uVar3 < uVar2;
      *puVar7 = uVar3 - uVar2;
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar6 < 7);
  }
  return;
}



// FUNCTION 14380c270 FUN_14380c270 body=158 status=ok
// SIG undefined FUN_14380c270(void)

void FUN_14380c270(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  FUN_14380aa70(param_3,param_1,*param_2);
  FUN_14380a800(param_3 + 1,param_1,param_2[1]);
  FUN_14380a5c0(param_3 + 2,param_1,param_2[2]);
  FUN_14380a4e0(param_3 + 3,param_1,param_2[3]);
  return;
}


