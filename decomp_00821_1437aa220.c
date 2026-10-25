// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437aa220 FUN_1437aa220 body=1189 status=ok
// SIG undefined FUN_1437aa220(void)

undefined8
FUN_1437aa220(uint *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,longlong *param_5
             )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint local_1f8;
  uint local_1f4;
  int local_1ec;
  uint local_1e8;
  uint local_1e4;
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  undefined1 *local_198;
  undefined1 *puStack_190;
  undefined1 local_188 [8];
  ulonglong local_180;
  undefined1 *local_178;
  undefined1 *puStack_170;
  ulonglong local_168;
  longlong lStack_160;
  undefined1 *local_158;
  int local_150;
  uint local_14c;
  undefined1 local_148 [264];
  
  local_1f4 = 0;
  if (param_1[2] != 0) {
    do {
      local_1f8 = 0;
      if (param_1[1] != 0) {
        do {
          local_1e4 = 0;
          if (*param_1 != 0) {
            do {
              bVar12 = (byte)local_1e4;
              uVar2 = *(uint *)(param_2 + 0xc) >> (bVar12 & 0x1f);
              uVar13 = 1;
              if (1 < uVar2) {
                uVar13 = uVar2;
              }
              uVar3 = *(uint *)(param_2 + 0x10) >> (bVar12 & 0x1f);
              uVar2 = 1;
              if (1 < uVar3) {
                uVar2 = uVar3;
              }
              uVar4 = FPakFile::IsPakValidatePruning(param_3);
              uVar5 = FPakFile::IsPakDelayPruning(param_3);
              uVar15 = param_1[3] >> (bVar12 & 0x1f);
              uVar6 = FPakFile::IsPakValidatePruning(param_1[6]);
              uVar3 = 1;
              if (1 < uVar15) {
                uVar3 = uVar15;
              }
              uVar15 = param_1[4] >> (bVar12 & 0x1f);
              uVar18 = (uVar3 - 1) / uVar6 + 1;
              uVar3 = FPakFile::IsPakDelayPruning(param_1[6]);
              uVar6 = 1;
              if (1 < uVar15) {
                uVar6 = uVar15;
              }
              uVar3 = (uVar6 - 1) / uVar3;
              uVar15 = *(uint *)(param_2 + 0xc) >> (bVar12 & 0x1f);
              uVar6 = 1;
              if (1 < uVar15) {
                uVar6 = uVar15;
              }
              uVar6 = FUN_1437a6ad0(*(undefined4 *)(param_2 + 0x18),uVar6);
              uVar15 = FPakFile::IsPakKeepFullDirectory(param_4);
              uVar15 = uVar15 >> 3;
              uVar7 = FUN_1437a68d0(param_3);
              local_158 = local_148;
              local_150 = 0;
              local_14c = 0x80000100;
              iVar16 = uVar15 * uVar18 * uVar5 * uVar4;
              uVar9 = FUN_143703a50();
              if ((int)(local_14c & 0x3fffffff) < iVar16) {
                iVar8 = (local_14c & 0x3fffffff) * 2;
                iVar19 = iVar16;
                if (iVar16 < iVar8) {
                  iVar19 = iVar8;
                }
                FUN_14370c310(uVar9,&local_158,iVar19,1);
              }
              local_1e8 = 0;
              uVar14 = param_1[5] >> (bVar12 & 0x1f);
              uVar17 = 1;
              if (1 < uVar14) {
                uVar17 = uVar14;
              }
              local_150 = iVar16;
              if (uVar17 != 0) {
                do {
                  uVar17 = 0;
                  if (uVar3 != 0xffffffff) {
                    iVar16 = 0;
                    local_180 = (ulonglong)((uVar7 >> 3) * uVar18);
                    do {
                      local_1a8 = FUN_1437a8bc0(param_1,local_1e4,local_1f8,local_1f4,0,uVar17,
                                                local_1e8);
                      puStack_190 = local_158 + local_150;
                      lStack_160 = local_1a8 + local_180;
                      local_178 = local_158;
                      local_198 = local_158;
                      puStack_170 = puStack_190;
                      local_168 = local_1a8;
                      uStack_1a0 = lStack_160;
                      piVar10 = (int *)(**(code **)(*param_5 + 0x18))
                                                 (param_5,local_188,&local_1a8,&local_198,uVar18,
                                                  param_3,param_4);
                      if (*piVar10 < 0) {
                        uVar9 = FUN_143703a50();
                        local_150 = 0;
                        if (-1 < (int)local_14c) {
                          FUN_143702e10(uVar9,local_158,1,local_14c & 0x3fffffff);
                        }
                        return 0x80040200;
                      }
                      if (uVar18 != 0) {
                        iVar19 = 0;
                        local_1ec = 0;
                        uVar14 = uVar2 - iVar16;
                        if (uVar5 < uVar2 - iVar16) {
                          uVar14 = uVar5;
                        }
                        local_198 = (undefined1 *)(ulonglong)uVar18;
                        do {
                          lVar11 = FUN_1437a0050(param_2,local_1e4,local_1f8,local_1f4,iVar19,iVar16
                                                 ,local_1e8);
                          uVar1 = uVar13 - iVar19;
                          if (uVar4 < uVar13 - iVar19) {
                            uVar1 = uVar4;
                          }
                          if (uVar14 != 0) {
                            iVar8 = local_1ec;
                            local_1a8 = (ulonglong)uVar14;
                            do {
                              FUN_14370c700(lVar11,local_158 + iVar8,uVar1 * uVar15);
                              iVar8 = iVar8 + uVar15 * uVar5;
                              lVar11 = lVar11 + (ulonglong)uVar6;
                              local_1a8 = local_1a8 - 1;
                            } while (local_1a8 != 0);
                            local_1a8 = 0;
                          }
                          iVar19 = iVar19 + uVar4;
                          local_1ec = local_1ec + uVar15 * uVar5 * uVar4;
                          local_198 = local_198 + -1;
                        } while (local_198 != (undefined1 *)0x0);
                        local_198 = (undefined1 *)0x0;
                      }
                      uVar17 = uVar17 + 1;
                      iVar16 = iVar16 + uVar5;
                    } while (uVar17 < uVar3 + 1);
                  }
                  local_1e8 = local_1e8 + 1;
                  uVar14 = param_1[5] >> (bVar12 & 0x1f);
                  uVar17 = 1;
                  if (1 < uVar14) {
                    uVar17 = uVar14;
                  }
                } while (local_1e8 < uVar17);
              }
              uVar9 = FUN_143703a50();
              local_150 = 0;
              if (-1 < (int)local_14c) {
                FUN_143702e10(uVar9,local_158,1,local_14c & 0x3fffffff);
              }
              local_1e4 = local_1e4 + 1;
            } while (local_1e4 < *param_1);
          }
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < param_1[1]);
      }
      local_1f4 = local_1f4 + 1;
    } while (local_1f4 < param_1[2]);
  }
  return 0;
}



// FUNCTION 1437aa6d0 FUN_1437aa6d0 body=276 status=ok
// SIG undefined FUN_1437aa6d0(void)

uint FUN_1437aa6d0(undefined4 param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined4 local_res10;
  uint local_res14;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_60;
  undefined8 local_48;
  
  if (DAT_146b89a00 == '\0') {
    FUN_1437aaaa0();
  }
  lVar4 = DAT_1467fd2f0;
  lVar3 = *param_2;
  uVar7 = 0;
  fVar10 = 3.40282e+38;
  uVar9 = (uint)(param_2[1] - lVar3 >> 2);
  local_res10 = param_1;
  uVar8 = uVar7;
  if (uVar9 != 0) {
    do {
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uVar2 = *(uint *)(lVar3 + (longlong)(int)uVar7 * 4);
      uStack_74 = 0x7f7fffee;
      local_res14 = uVar2;
      lVar5 = FUN_1437a9190(&DAT_1467fd2f0,&local_res10);
      if (lVar5 == 0) {
        puVar6 = &local_88;
      }
      else {
        puVar6 = (undefined8 *)(lVar4 + 8 + (longlong)*(int *)(lVar5 + 4) * 0x20);
      }
      uVar1 = puVar6[2];
      local_60._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      if (local_60._4_4_ < fVar10) {
        fVar10 = local_60._4_4_;
        local_48 = uVar1;
        uVar8 = uVar2;
      }
      uVar7 = uVar7 + 1;
      local_60 = uVar1;
    } while (uVar7 < uVar9);
  }
  return uVar8;
}



// FUNCTION 1437aa7f0 FUN_1437aa7f0 body=378 status=ok
// SIG undefined FUN_1437aa7f0(void)

longlong FUN_1437aa7f0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = *param_2;
  iVar2 = param_2[1];
  uVar9 = iVar2 * -0x61c8864f;
  uVar11 = iVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar11 = uVar11 * 0x40 + uVar9 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar11);
  puVar10 = (uint *)(param_1[2] + uVar7 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar7 * 8)) {
    lVar5 = *param_1;
    do {
      if ((*(int *)((longlong)(int)puVar10[1] * 0x20 + lVar5) == iVar1) &&
         (*(int *)((longlong)(int)puVar10[1] * 0x20 + 4 + lVar5) == iVar2)) {
        uVar9 = puVar10[1];
        uVar4 = param_3[1];
        lVar6 = (longlong)(int)uVar9 * 0x20;
        puVar8 = (undefined8 *)(lVar6 + 8 + lVar5);
        *puVar8 = *param_3;
        puVar8[1] = uVar4;
        *(undefined8 *)(lVar6 + 0x18 + lVar5) = param_3[2];
        return (((longlong)(int)uVar9 & 0x7ffffffffffffffU) >> 3) << 8;
      }
      lVar6 = param_1[2];
      uVar7 = ((longlong)puVar10 - lVar6 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar10 = (uint *)(lVar6 + uVar7 * 8);
    } while (-1 < *(int *)(lVar6 + 4 + uVar7 * 8));
  }
  uVar9 = *(uint *)(param_1 + 1);
  *puVar10 = uVar11;
  puVar10[1] = uVar9;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x20);
  }
  lVar5 = (longlong)(int)param_1[1] * 0x20 + *param_1;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x1c) = 0x7f7fffee;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
    *(undefined4 *)(lVar5 + 0x18) = 0;
  }
  puVar8 = (undefined8 *)((longlong)(int)param_1[1] * 0x20 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  uVar4 = *(undefined8 *)param_2;
  *puVar8 = uVar4;
  uVar3 = param_3[1];
  puVar8[1] = *param_3;
  puVar8[2] = uVar3;
  puVar8[3] = param_3[2];
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}



// FUNCTION 1437aa970 IsAligned body=7 status=ok
// SIG undefined IsAligned(void)

bool vraudio::IsAligned(byte param_1)

{
  return (param_1 & 0xf) == 0;
}



// FUNCTION 1437aa980 FUN_1437aa980 body=283 status=ok
// SIG undefined FUN_1437aa980(void)

void FUN_1437aa980(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  iVar6 = *(int *)(param_2 + 0x18) * *(int *)(param_1 + 0x40);
  uVar1 = *(int *)(param_1 + 0x40) + iVar6;
  if (*(uint *)(param_1 + 0x2c) < uVar1) {
    uVar1 = *(uint *)(param_1 + 0x2c);
  }
  iVar7 = uVar1 - iVar6;
  iVar2 = FPakFile::IsPakDelayPruning(*(undefined4 *)(param_1 + 0x34));
  iVar3 = FPakFile::IsPakValidatePruning(*(undefined4 *)(param_1 + 0x34));
  iVar4 = FUN_1437a6ad0(*(undefined4 *)(param_1 + 0x30),iVar3 * *(int *)(param_1 + 0x28));
  iVar3 = FUN_1437a6ad0(*(undefined4 *)(param_1 + 0x34),iVar3 * *(int *)(param_1 + 0x28));
  local_28 = (ulonglong)(uint)(iVar4 * iVar2 * iVar6) + *(longlong *)(param_1 + 8);
  lStack_20 = (ulonglong)(uint)(iVar4 * iVar2 * iVar7) + local_28;
  local_38 = (ulonglong)(uint)(iVar3 * iVar2 * iVar6) + *(longlong *)(param_1 + 0x18);
  lStack_30 = (ulonglong)(uint)(iVar3 * iVar2 * iVar7) + local_38;
  piVar5 = (int *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                            (*(longlong **)(param_1 + 0x38),local_res8,&local_28,&local_38,
                             *(undefined4 *)(param_1 + 0x28),iVar7,*(undefined4 *)(param_1 + 0x30),
                             *(undefined4 *)(param_1 + 0x34));
  if (*piVar5 < 0) {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}



// FUNCTION 1437aaaa0 FUN_1437aaaa0 body=1169 status=ok
// SIG undefined FUN_1437aaaa0(void)

void FUN_1437aaaa0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  uint local_res8;
  uint local_resc;
  uint local_res10;
  uint local_res14;
  uint local_res18;
  uint local_res1c;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  float local_a4;
  longlong *local_a0;
  undefined8 local_98;
  uint local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  
  uVar9 = 0;
  plVar1 = DAT_146b89b60;
  if (0 < DAT_1467fd2f8) {
    DAT_1467fd2f8 = 0;
    FUN_1437347e0(&DAT_1467fd300);
    plVar1 = DAT_146b89b60;
  }
  for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_b8);
    uVar10 = uVar9;
    if ((int)((CONCAT44(uStack_ac,local_b0) - (longlong)local_b8) / 0xc) != 0) {
      do {
        plVar2 = local_b8;
        lVar5 = (longlong)(int)uVar10;
        local_res8 = *(uint *)((longlong)local_b8 + lVar5 * 0xc);
        uVar4 = *(uint *)((longlong)local_b8 + lVar5 * 0xc + 4);
        local_98 = CONCAT44(uVar4,local_res8);
        local_resc = uVar4;
        local_a0 = plVar1;
        uVar3 = FPakFile::IsPakKeepFullDirectory();
        uVar4 = FPakFile::IsPakKeepFullDirectory(uVar4);
        local_90 = *(uint *)((longlong)plVar2 + lVar5 * 0xc + 8);
        local_8c = (float)(uVar4 + uVar3);
        if ((local_90 & 1) == 0) {
          local_8c = local_8c * 2.0;
        }
        if ((((uVar3 == 0) || ((uVar3 & uVar3 - 1) != 0)) || (uVar4 == 0)) ||
           ((uVar4 & uVar4 - 1) != 0)) {
          local_8c = local_8c * 2.0;
        }
        fVar11 = local_8c;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_74 = 0x7f7fffee;
        lVar5 = FUN_1437a9190(&DAT_1467fd2f0,&local_res8);
        if (lVar5 == 0) {
          puVar8 = &local_88;
        }
        else {
          puVar8 = (undefined8 *)(DAT_1467fd2f0 + 8 + (longlong)*(int *)(lVar5 + 4) * 0x20);
        }
        if (fVar11 < *(float *)((longlong)puVar8 + 0x14)) {
          FUN_1437aa7f0(&DAT_1467fd2f0,&local_res8,&local_a0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)((CONCAT44(uStack_ac,local_b0) - (longlong)local_b8) / 0xc));
    }
  }
  do {
    local_a0 = (longlong *)0x0;
    local_98 = CONCAT44(uVar9,uVar9);
    uVar10 = FPakFile::IsPakKeepFullDirectory(uVar9);
    uVar4 = FPakFile::IsPakKeepFullDirectory(uVar9);
    local_90 = 1;
    local_8c = (float)(uVar4 + uVar10);
    if (((uVar10 == 0) || ((uVar10 & uVar10 - 1) != 0)) ||
       ((uVar4 == 0 || ((uVar4 & uVar4 - 1) != 0)))) {
      local_8c = local_8c * 2.0;
    }
    local_res8 = uVar9;
    local_resc = uVar9;
    FUN_1437aa7f0(&DAT_1467fd2f0,&local_res8,&local_a0);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0xf1);
  uVar9 = 1;
  lVar5 = DAT_1467fd2f0;
  do {
    uVar10 = 1;
    do {
      if (uVar9 != uVar10) {
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_74 = 0x7f7fffee;
        local_res8 = uVar10;
        local_resc = uVar9;
        lVar6 = FUN_1437a9190(&DAT_1467fd2f0,&local_res8);
        if (lVar6 == 0) {
          puVar8 = &local_88;
        }
        else {
          puVar8 = (undefined8 *)((longlong)*(int *)(lVar6 + 4) * 0x20 + 8 + lVar5);
        }
        if (*(float *)((longlong)puVar8 + 0x14) <= 3.40282e+38 &&
            *(float *)((longlong)puVar8 + 0x14) != 3.40282e+38) {
          uVar4 = 1;
          do {
            if ((uVar4 != uVar10) && (uVar4 != uVar9)) {
              local_88 = 0;
              local_80 = 0;
              local_78 = 0;
              local_74 = 0x7f7fffee;
              local_res10 = uVar10;
              local_res14 = uVar4;
              local_res18 = uVar9;
              local_res1c = uVar4;
              lVar6 = FUN_1437a9190(&DAT_1467fd2f0,&local_res18);
              if (lVar6 == 0) {
                puVar8 = &local_88;
              }
              else {
                puVar8 = (undefined8 *)((longlong)*(int *)(lVar6 + 4) * 0x20 + 8 + lVar5);
              }
              if (*(float *)((longlong)puVar8 + 0x14) <= 3.40282e+38 &&
                  *(float *)((longlong)puVar8 + 0x14) != 3.40282e+38) {
                local_88 = 0;
                local_80 = 0;
                local_78 = 0;
                local_74 = 0x7f7fffee;
                if (lVar6 == 0) {
                  puVar8 = &local_88;
                }
                else {
                  puVar8 = (undefined8 *)((longlong)*(int *)(lVar6 + 4) * 0x20 + 8 + lVar5);
                }
                local_a0 = (longlong *)0x0;
                local_98 = 0;
                local_90 = 0;
                local_8c = 3.40282e+38;
                lVar6 = FUN_1437a9190(&DAT_1467fd2f0,&local_res8);
                if (lVar6 == 0) {
                  pplVar7 = &local_a0;
                }
                else {
                  pplVar7 = (longlong **)((longlong)*(int *)(lVar6 + 4) * 0x20 + 8 + lVar5);
                }
                local_b8 = *pplVar7;
                fVar11 = *(float *)((longlong)pplVar7 + 0x14) + *(float *)((longlong)puVar8 + 0x14);
                local_b0 = *(undefined4 *)(pplVar7 + 1);
                uStack_ac = *(undefined4 *)((longlong)pplVar7 + 0xc);
                local_a8 = *(undefined4 *)(pplVar7 + 2);
                local_a4 = fVar11;
                if (fVar11 < 3.40282e+38) {
                  local_88 = 0;
                  local_80 = 0;
                  local_78 = 0;
                  local_74 = 0x7f7fffee;
                  lVar6 = FUN_1437a9190(&DAT_1467fd2f0,&local_res10);
                  if (lVar6 == 0) {
                    puVar8 = &local_88;
                  }
                  else {
                    puVar8 = (undefined8 *)((longlong)*(int *)(lVar6 + 4) * 0x20 + 8 + lVar5);
                  }
                  if (fVar11 < *(float *)((longlong)puVar8 + 0x14)) {
                    FUN_1437aa7f0(&DAT_1467fd2f0,&local_res10,&local_b8);
                    lVar5 = DAT_1467fd2f0;
                  }
                }
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0xf1);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0xf1);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0xf1);
  DAT_146b89a00 = 1;
  return;
}



// FUNCTION 1437aaf40 FUN_1437aaf40 body=609 status=ok
// SIG undefined FUN_1437aaf40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1437aaf40(uint *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_res8;
  uint local_res10;
  undefined1 *local_1048;
  int local_1040;
  uint local_103c;
  undefined1 local_1038 [4096];
  
  local_1048 = local_1038;
  local_1040 = 0;
  local_103c = 0x80001000;
  local_res8 = 0;
  if (param_1[2] != 0) {
    do {
      local_res10 = 0;
      if (param_1[1] != 0) {
        do {
          uVar6 = 0;
          if (*param_1 != 0) {
            do {
              iVar2 = FUN_1437a6ad0(param_1[6]);
              uVar4 = FUN_143703a50();
              if ((int)(local_103c & 0x3fffffff) < iVar2) {
                iVar1 = (local_103c & 0x3fffffff) * 2;
                iVar7 = iVar2;
                if (iVar2 < iVar1) {
                  iVar7 = iVar1;
                }
                FUN_14370c310(uVar4,&local_1048,iVar7,1);
              }
              uVar3 = param_1[4] >> ((byte)uVar6 & 0x1f);
              uVar8 = 1;
              if (1 < uVar3) {
                uVar8 = uVar3;
              }
              uVar3 = 0;
              local_1040 = iVar2;
              if (uVar8 >> 1 != 0) {
                do {
                  uVar4 = FUN_1437a0050(param_1,uVar6,local_res10,local_res8,0,uVar3,0);
                  uVar5 = FUN_1437a0050(param_1,uVar6,local_res10,local_res8,0,(uVar8 - uVar3) + -1,
                                        0);
                  FUN_14370c700(local_1048,uVar4,iVar2);
                  FUN_14370c700(uVar4,uVar5,iVar2);
                  FUN_14370c700(uVar5,local_1048,iVar2);
                  uVar3 = uVar3 + 1;
                } while (uVar3 < uVar8 >> 1);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *param_1);
          }
          local_res10 = local_res10 + 1;
        } while (local_res10 < param_1[1]);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < param_1[2]);
  }
  uVar4 = FUN_143703a50();
  local_1040 = 0;
  if (-1 < (int)local_103c) {
    FUN_143702e10(uVar4,local_1048,1,local_103c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437ab1b0 FUN_1437ab1b0 body=55 status=ok
// SIG undefined FUN_1437ab1b0(void)

void FUN_1437ab1b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437a0190(param_1);
      }
      param_1 = param_1 + 0x1c;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ab1f0 FUN_1437ab1f0 body=18 status=ok
// SIG undefined FUN_1437ab1f0(void)

undefined8 * FUN_1437ab1f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ff4c0;
  return param_2;
}



// FUNCTION 1437ab210 FUN_1437ab210 body=18 status=ok
// SIG undefined FUN_1437ab210(void)

undefined8 * FUN_1437ab210(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fd7c0;
  return param_2;
}



// FUNCTION 1437ab290 FUN_1437ab290 body=55 status=ok
// SIG undefined FUN_1437ab290(void)

void FUN_1437ab290(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437b0680(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ab370 FUN_1437ab370 body=18 status=ok
// SIG undefined FUN_1437ab370(void)

undefined8 * FUN_1437ab370(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fd830;
  return param_2;
}



// FUNCTION 1437ab3f0 FUN_1437ab3f0 body=136 status=ok
// SIG undefined FUN_1437ab3f0(void)

longlong FUN_1437ab3f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af720();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x40;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1437ab4d0 FUN_1437ab4d0 body=75 status=ok
// SIG undefined FUN_1437ab4d0(void)

void FUN_1437ab4d0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437b07d0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x78;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ab540 FUN_1437ab540 body=18 status=ok
// SIG undefined FUN_1437ab540(void)

undefined8 * FUN_1437ab540(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fd8a0;
  return param_2;
}



// FUNCTION 1437ab5b0 func body=77 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiBalconyVaultAnalyzer>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x78 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0xf;
      plVar2 = plVar2 + -0xf;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437ab600 FUN_1437ab600 body=136 status=ok
// SIG undefined FUN_1437ab600(void)

longlong FUN_1437ab600(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af430();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x80;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1437ab690 FUN_1437ab690 body=55 status=ok
// SIG undefined FUN_1437ab690(void)

void FUN_1437ab690(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437afb70(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ab6d0 FUN_1437ab6d0 body=209 status=ok
// SIG undefined FUN_1437ab6d0(void)

longlong FUN_1437ab6d0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),1,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar3 = *(short *)(param_1 + 0x10);
      if (sVar3 == -1) {
        sVar3 = 0x38;
      }
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1437ab7b0 FUN_1437ab7b0 body=86 status=ok
// SIG undefined FUN_1437ab7b0(void)

undefined1 FUN_1437ab7b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143704060();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x58);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x68);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x78);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437ab810 FUN_1437ab810 body=51 status=ok
// SIG undefined FUN_1437ab810(void)

undefined1 FUN_1437ab810(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437afac0(param_1 + 4);
  if (cVar1 != '\0') {
    cVar1 = FUN_1437afad0(param_1 + 6);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437ab850 FUN_1437ab850 body=51 status=ok
// SIG undefined FUN_1437ab850(void)

undefined1 FUN_1437ab850(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437afae0(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437ab890 FUN_1437ab890 body=136 status=ok
// SIG undefined FUN_1437ab890(void)

longlong FUN_1437ab890(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af030();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x48;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1437ab920 FUN_1437ab920 body=18 status=ok
// SIG undefined FUN_1437ab920(void)

undefined8 * FUN_1437ab920(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fdb70;
  return param_2;
}



// FUNCTION 1437aba00 FUN_1437aba00 body=136 status=ok
// SIG undefined FUN_1437aba00(void)

longlong FUN_1437aba00(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af520();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1437aba90 FUN_1437aba90 body=18 status=ok
// SIG undefined FUN_1437aba90(void)

undefined8 * FUN_1437aba90(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fdbd0;
  return param_2;
}



// FUNCTION 1437abac0 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavVolume>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xe0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1c;
      plVar2 = plVar2 + -0x1c;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437abb20 FUN_1437abb20 body=200 status=ok
// SIG undefined FUN_1437abb20(void)

longlong FUN_1437abb20(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),1,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar3 = *(short *)(param_1 + 0x10);
      if (sVar3 == -1) {
        sVar3 = 0x28;
      }
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437abca0 FUN_1437abca0 body=51 status=ok
// SIG undefined FUN_1437abca0(void)

undefined1 FUN_1437abca0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437afb60(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437abce0 FUN_1437abce0 body=51 status=ok
// SIG undefined FUN_1437abce0(void)

undefined1 FUN_1437abce0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437afab0(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_1437afab0(param_1 + 0x31);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437abd20 FUN_1437abd20 body=18 status=ok
// SIG undefined FUN_1437abd20(void)

undefined8 * FUN_1437abd20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fdd10;
  return param_2;
}



// FUNCTION 1437abda0 FUN_1437abda0 body=136 status=ok
// SIG undefined FUN_1437abda0(void)

longlong FUN_1437abda0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af0c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x50;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1437abe30 FUN_1437abe30 body=136 status=ok
// SIG undefined FUN_1437abe30(void)

longlong FUN_1437abe30(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af640();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1437abec0 FUN_1437abec0 body=58 status=ok
// SIG undefined FUN_1437abec0(void)

void FUN_1437abec0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437b0c90(param_1);
      }
      param_1 = param_1 + 0x100;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437abf00 FUN_1437abf00 body=157 status=ok
// SIG undefined FUN_1437abf00(void)

longlong FUN_1437abf00(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af860(param_1 + 0x80);
  FUN_1437aed40(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x90;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1437abfa0 func body=83 status=ok
// SIG undefined func(void)

void hkReflect::Detail::
     ExplicitWrapper<256,hkaiNavMeshGeneration::Snapshotting::GenerationSnapshot<hkaiNavMeshGeneration::SimpleGeometrySource>_>
     ::func(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x100 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x20;
      plVar2 = plVar2 + -0x20;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437ac060 FUN_1437ac060 body=200 status=ok
// SIG undefined FUN_1437ac060(void)

longlong FUN_1437ac060(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),4,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar3 = *(short *)(param_1 + 0x10);
      if (sVar3 == -1) {
        sVar3 = 0x30;
      }
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1437ac140 FUN_1437ac140 body=51 status=ok
// SIG undefined FUN_1437ac140(void)

undefined1 FUN_1437ac140(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_1437adb10(param_1 + 0x30);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437ac1d0 thunk_FUN_143707170 body=5 status=ok
// SIG undefined thunk_FUN_143707170(void)

undefined1 thunk_FUN_143707170(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437ac230 FUN_1437ac230 body=18 status=ok
// SIG undefined FUN_1437ac230(void)

undefined8 * FUN_1437ac230(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fdf40;
  return param_2;
}



// FUNCTION 1437ac2a0 FUN_1437ac2a0 body=58 status=ok
// SIG undefined FUN_1437ac2a0(void)

void FUN_1437ac2a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437b0200(param_1);
      }
      param_1 = param_1 + 0x98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ac2e0 FUN_1437ac2e0 body=18 status=ok
// SIG undefined FUN_1437ac2e0(void)

undefined8 * FUN_1437ac2e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fdfb0;
  return param_2;
}



// FUNCTION 1437ac300 FUN_1437ac300 body=136 status=ok
// SIG undefined FUN_1437ac300(void)

longlong FUN_1437ac300(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437aee60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0xc0;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1437ac390 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiClusterGraph>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x98 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x13;
      plVar2 = plVar2 + -0x13;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437ac400 FUN_1437ac400 body=18 status=ok
// SIG undefined FUN_1437ac400(void)

undefined8 * FUN_1437ac400(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe090;
  return param_2;
}



// FUNCTION 1437ac460 FUN_1437ac460 body=55 status=ok
// SIG undefined FUN_1437ac460(void)

void FUN_1437ac460(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1437b00a0(param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ac580 FUN_1437ac580 body=200 status=ok
// SIG undefined FUN_1437ac580(void)

longlong FUN_1437ac580(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),4,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar3 = *(short *)(param_1 + 0x10);
      if (sVar3 == -1) {
        sVar3 = 0x28;
      }
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437ac650 FUN_1437ac650 body=136 status=ok
// SIG undefined FUN_1437ac650(void)

longlong FUN_1437ac650(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437aef90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437ac740 FUN_1437ac740 body=112 status=ok
// SIG undefined FUN_1437ac740(void)

void FUN_1437ac740(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x3c);
    do {
      if ((undefined8 *)(puVar1 + -0xf) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -0xd) = 0;
        puVar1[-0xb] = 0x1ffff;
        *(undefined ***)(puVar1 + -0xf) = hkxBlobMeshShape::vftable;
        *(undefined8 *)(puVar1 + -7) = 0;
        puVar1[-5] = 0x1ffff;
        *(undefined ***)(puVar1 + -9) = hkxBlob::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
      }
      puVar1 = puVar1 + 0x12;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437ac7b0 FUN_1437ac7b0 body=75 status=ok
// SIG undefined FUN_1437ac7b0(void)

void FUN_1437ac7b0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_1437afdf0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ac800 FUN_1437ac800 body=977 status=ok
// SIG undefined FUN_1437ac800(void)

void FUN_1437ac800(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int local_res20 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  int local_30 [2];
  
  if (0 < param_4) {
    piVar7 = (int *)(param_1 + 0x18);
    param_2 = param_2 - param_1;
    puVar13 = (undefined4 *)0x0;
    lVar14 = (longlong)param_4;
    do {
      piVar1 = piVar7 + -6;
      if (piVar1 != (int *)0x0) {
        piVar1[0] = 0;
        piVar1[1] = 0;
        piVar7[-4] = 0;
        piVar7[-3] = -0x80000000;
        local_res20[0] = *(int *)(param_2 + -0x10 + (longlong)piVar7);
        lVar8 = (longlong)local_res20[0];
        uVar4 = FUN_143703a50();
        iVar2 = local_res20[0];
        puVar5 = puVar13;
        if (local_res20[0] != 0) {
          puVar5 = (undefined4 *)FUN_143702d60(uVar4,4,local_res20);
        }
        *(undefined4 **)piVar1 = puVar5;
        piVar7[-4] = iVar2;
        iVar2 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar2 = local_res20[0];
        }
        piVar7[-3] = iVar2;
        lVar11 = *(longlong *)((longlong)piVar7 + param_2 + -0x18);
        puVar9 = puVar13;
        if (3 < lVar8) {
          lVar10 = lVar11 - (longlong)puVar5;
          lVar12 = (lVar8 - 4U >> 2) + 1;
          puVar6 = puVar5 + 1;
          puVar9 = (undefined4 *)(lVar12 * 4);
          do {
            puVar6[-1] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar6);
            *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
            puVar6[1] = *(undefined4 *)(lVar10 + 4 + (longlong)puVar6);
            puVar6[2] = *(undefined4 *)(lVar10 + 8 + (longlong)puVar6);
            puVar6 = puVar6 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if ((longlong)puVar9 < lVar8) {
          puVar6 = puVar5 + (longlong)puVar9;
          lVar8 = lVar8 - (longlong)puVar9;
          do {
            *puVar6 = *(undefined4 *)((longlong)puVar6 + (lVar11 - (longlong)puVar5));
            puVar6 = puVar6 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar7[-2] = 0;
        piVar7[-1] = 0;
        *piVar7 = 0;
        piVar7[1] = -0x80000000;
        local_48[0] = *(int *)(param_2 + (longlong)piVar7);
        lVar8 = (longlong)local_48[0];
        uVar4 = FUN_143703a50();
        iVar2 = local_48[0];
        puVar5 = puVar13;
        if (local_48[0] != 0) {
          puVar5 = (undefined4 *)FUN_143702d60(uVar4,4,local_48);
        }
        *piVar7 = iVar2;
        *(undefined4 **)(piVar7 + -2) = puVar5;
        iVar2 = -0x80000000;
        if (local_48[0] != 0) {
          iVar2 = local_48[0];
        }
        piVar7[1] = iVar2;
        lVar11 = *(longlong *)(param_2 + -8 + (longlong)piVar7);
        puVar9 = puVar13;
        if (3 < lVar8) {
          lVar10 = lVar11 - (longlong)puVar5;
          lVar12 = (lVar8 - 4U >> 2) + 1;
          puVar6 = puVar5 + 1;
          puVar9 = (undefined4 *)(lVar12 * 4);
          do {
            puVar6[-1] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar6);
            *puVar6 = *(undefined4 *)(lVar10 + (longlong)puVar6);
            puVar6[1] = *(undefined4 *)(lVar10 + 4 + (longlong)puVar6);
            puVar6[2] = *(undefined4 *)(lVar10 + 8 + (longlong)puVar6);
            puVar6 = puVar6 + 4;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if ((longlong)puVar9 < lVar8) {
          puVar6 = puVar5 + (longlong)puVar9;
          lVar8 = lVar8 - (longlong)puVar9;
          do {
            *puVar6 = *(undefined4 *)((longlong)puVar6 + (lVar11 - (longlong)puVar5));
            puVar6 = puVar6 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[4] = 0;
        piVar7[5] = -0x80000000;
        iVar2 = *(int *)(param_2 + 0x10 + (longlong)piVar7);
        lVar8 = (longlong)iVar2;
        local_40[0] = iVar2;
        uVar4 = FUN_143703a50();
        iVar3 = local_40[0];
        puVar5 = puVar13;
        if (local_40[0] != 0) {
          puVar5 = (undefined4 *)FUN_143702d60(uVar4,4,local_40);
        }
        *(undefined4 **)(piVar7 + 2) = puVar5;
        piVar7[4] = iVar3;
        iVar3 = -0x80000000;
        if (local_40[0] != 0) {
          iVar3 = local_40[0];
        }
        piVar7[5] = iVar3;
        if (0 < iVar2) {
          lVar11 = *(longlong *)(param_2 + 8 + (longlong)piVar7) - (longlong)puVar5;
          do {
            *puVar5 = *(undefined4 *)(lVar11 + (longlong)puVar5);
            puVar5 = puVar5 + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar7[6] = 0;
        piVar7[7] = 0;
        piVar7[8] = 0;
        piVar7[9] = -0x80000000;
        iVar2 = *(int *)(param_2 + 0x20 + (longlong)piVar7);
        lVar8 = (longlong)iVar2;
        local_38[0] = iVar2;
        uVar4 = FUN_143703a50();
        iVar3 = local_38[0];
        puVar5 = puVar13;
        if (local_38[0] != 0) {
          puVar5 = (undefined4 *)FUN_143702d60(uVar4,2,local_38);
        }
        *(undefined4 **)(piVar7 + 6) = puVar5;
        piVar7[8] = iVar3;
        iVar3 = -0x80000000;
        if (local_38[0] != 0) {
          iVar3 = local_38[0];
        }
        piVar7[9] = iVar3;
        if (0 < iVar2) {
          lVar11 = *(longlong *)(param_2 + 0x18 + (longlong)piVar7) - (longlong)puVar5;
          do {
            *(undefined2 *)puVar5 = *(undefined2 *)(lVar11 + (longlong)puVar5);
            puVar5 = (undefined4 *)((longlong)puVar5 + 2);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar7[10] = 0;
        piVar7[0xb] = 0;
        piVar7[0xc] = 0;
        piVar7[0xd] = -0x80000000;
        iVar2 = *(int *)(param_2 + 0x30 + (longlong)piVar7);
        lVar8 = (longlong)iVar2;
        local_30[0] = iVar2;
        uVar4 = FUN_143703a50();
        iVar3 = local_30[0];
        puVar5 = puVar13;
        if (local_30[0] != 0) {
          puVar5 = (undefined4 *)FUN_143702d60(uVar4,1,local_30);
        }
        *(undefined4 **)(piVar7 + 10) = puVar5;
        piVar7[0xc] = iVar3;
        iVar3 = -0x80000000;
        if (local_30[0] != 0) {
          iVar3 = local_30[0];
        }
        piVar7[0xd] = iVar3;
        if (0 < iVar2) {
          lVar11 = *(longlong *)(param_2 + 0x28 + (longlong)piVar7) - (longlong)puVar5;
          do {
            *(undefined1 *)puVar5 = *(undefined1 *)(lVar11 + (longlong)puVar5);
            puVar5 = (undefined4 *)((longlong)puVar5 + 1);
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        piVar7[0xe] = *(int *)(param_2 + 0x38 + (longlong)piVar7);
        piVar7[0xf] = *(int *)(param_2 + 0x3c + (longlong)piVar7);
        piVar7[0x10] = *(int *)(param_2 + 0x40 + (longlong)piVar7);
        piVar7[0x11] = *(int *)(param_2 + 0x44 + (longlong)piVar7);
        piVar7[0x12] = *(int *)(param_2 + 0x48 + (longlong)piVar7);
        piVar7[0x13] = *(int *)(param_2 + 0x4c + (longlong)piVar7);
      }
      piVar7 = piVar7 + 0x1a;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1437acbe0 FUN_1437acbe0 body=51 status=ok
// SIG undefined FUN_1437acbe0(void)

undefined1 FUN_1437acbe0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_1437afaf0(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437acc20 FUN_1437acc20 body=198 status=ok
// SIG undefined FUN_1437acc20(void)

void FUN_1437acc20(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_4) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    param_2 = param_2 + 0x18;
    uVar3 = (ulonglong)param_4;
    do {
      puVar1 = (undefined8 *)(puVar2 + -4);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(puVar2 + -2,param_2 + -0x10);
        *puVar2 = 0x1ffff;
        *puVar1 = hkxBlobMeshShape::vftable;
        FUN_1437aea10(puVar2 + 2,param_2);
        FUN_1437165f0(puVar2 + 0xc,param_2 + 0x28);
      }
      param_2 = param_2 + 0x48;
      puVar2 = puVar2 + 0x12;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1437accf0 FUN_1437accf0 body=60 status=ok
// SIG undefined FUN_1437accf0(void)

void FUN_1437accf0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x68 + param_1;
    do {
      FUN_1437aed40(param_1);
      param_1 = param_1 + -0x68;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437acd40 FUN_1437acd40 body=18 status=ok
// SIG undefined FUN_1437acd40(void)

undefined8 * FUN_1437acd40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe250;
  return param_2;
}



// FUNCTION 1437acdb0 FUN_1437acdb0 body=689 status=ok
// SIG undefined FUN_1437acdb0(void)

void FUN_1437acdb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar4 = (uint *)(param_1 + 0x1c);
    lVar5 = (longlong)param_4;
    do {
      uVar1 = *(uint *)((longlong)puVar4 + param_2 + -0x14);
      uVar2 = *(undefined8 *)((longlong)puVar4 + param_2 + -0x1c);
      uVar3 = FUN_143703a50();
      if ((int)(puVar4[-4] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + -7,uVar1,4);
      }
      FUN_143795760(*(undefined8 *)(puVar4 + -7),uVar2,uVar1);
      puVar4[-5] = uVar1;
      uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar4);
      uVar2 = *(undefined8 *)((longlong)puVar4 + param_2 + -0xc);
      uVar3 = FUN_143703a50();
      if ((int)(*puVar4 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + -3,uVar1,4);
      }
      FUN_143795760(*(undefined8 *)(puVar4 + -3),uVar2,uVar1);
      puVar4[-1] = uVar1;
      uVar1 = *(uint *)((longlong)puVar4 + param_2 + 0xc);
      uVar2 = *(undefined8 *)((longlong)puVar4 + param_2 + 4);
      uVar3 = FUN_143703a50();
      if ((int)(puVar4[4] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + 1,uVar1,4);
      }
      FUN_142f87c00(*(undefined8 *)(puVar4 + 1),uVar2,uVar1);
      puVar4[3] = uVar1;
      uVar1 = *(uint *)((longlong)puVar4 + param_2 + 0x1c);
      uVar2 = *(undefined8 *)((longlong)puVar4 + param_2 + 0x14);
      uVar3 = FUN_143703a50();
      if ((int)(puVar4[8] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + 5,uVar1,2);
      }
      FUN_143795730(*(undefined8 *)(puVar4 + 5),uVar2,uVar1);
      puVar4[7] = uVar1;
      uVar1 = *(uint *)((longlong)puVar4 + param_2 + 0x2c);
      uVar2 = *(undefined8 *)((longlong)puVar4 + param_2 + 0x24);
      uVar3 = FUN_143703a50();
      if ((int)(puVar4[0xc] & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + 9,uVar1,1);
      }
      FUN_143745160(*(undefined8 *)(puVar4 + 9),uVar2,uVar1);
      puVar4[0xb] = uVar1;
      puVar4[0xd] = *(uint *)((longlong)puVar4 + param_2 + 0x34);
      puVar4[0xe] = *(uint *)((longlong)puVar4 + param_2 + 0x38);
      puVar4[0xf] = *(uint *)((longlong)puVar4 + param_2 + 0x3c);
      puVar4[0x10] = *(uint *)((longlong)puVar4 + param_2 + 0x40);
      puVar4[0x11] = *(uint *)((longlong)puVar4 + param_2 + 0x44);
      puVar4[0x12] = *(uint *)((longlong)puVar4 + param_2 + 0x48);
      puVar4 = puVar4 + 0x1a;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1437ad070 FUN_1437ad070 body=18 status=ok
// SIG undefined FUN_1437ad070(void)

undefined8 * FUN_1437ad070(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe2c0;
  return param_2;
}



// FUNCTION 1437ad150 FUN_1437ad150 body=136 status=ok
// SIG undefined FUN_1437ad150(void)

longlong FUN_1437ad150(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af790();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0xd0;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1437ad1e0 FUN_1437ad1e0 body=18 status=ok
// SIG undefined FUN_1437ad1e0(void)

undefined8 * FUN_1437ad1e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe330;
  return param_2;
}



// FUNCTION 1437ad260 FUN_1437ad260 body=47 status=ok
// SIG undefined FUN_1437ad260(void)

undefined1 FUN_1437ad260(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143704060();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437ad290 FUN_1437ad290 body=136 status=ok
// SIG undefined FUN_1437ad290(void)

longlong FUN_1437ad290(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b0000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437ad360 FUN_1437ad360 body=136 status=ok
// SIG undefined FUN_1437ad360(void)

longlong FUN_1437ad360(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af140();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x78;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1437ad3f0 FUN_1437ad3f0 body=167 status=ok
// SIG undefined FUN_1437ad3f0(void)

void FUN_1437ad3f0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_4) {
    puVar2 = (undefined8 *)(param_1 + 0x30);
    param_2 = param_2 + 0x30;
    uVar3 = (ulonglong)param_4;
    do {
      puVar1 = puVar2 + -6;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_1437afdf0(puVar1,param_2 + -0x30);
        *puVar1 = hkxMesh::UserChannelInfo::vftable;
        puVar2[-1] = 0;
        *puVar2 = 0;
        FUN_143716660(puVar2 + -1,param_2 + -8);
        FUN_143716660(puVar2,param_2);
      }
      param_2 = param_2 + 0x38;
      puVar2 = puVar2 + 7;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



// FUNCTION 1437ad4f0 FUN_1437ad4f0 body=18 status=ok
// SIG undefined FUN_1437ad4f0(void)

undefined8 * FUN_1437ad4f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe3a0;
  return param_2;
}



// FUNCTION 1437ad510 FUN_1437ad510 body=18 status=ok
// SIG undefined FUN_1437ad510(void)

undefined8 * FUN_1437ad510(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe410;
  return param_2;
}



// FUNCTION 1437ad530 FUN_1437ad530 body=18 status=ok
// SIG undefined FUN_1437ad530(void)

undefined8 * FUN_1437ad530(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe4f0;
  return param_2;
}



// FUNCTION 1437ad550 FUN_1437ad550 body=87 status=ok
// SIG undefined FUN_1437ad550(void)

void FUN_1437ad550(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    lVar1 = param_1 + 0x28;
    uVar2 = (ulonglong)param_4;
    do {
      FUN_143716660(lVar1,(param_2 - param_1) + lVar1);
      FUN_143716660(lVar1 + 8,(param_2 - param_1) + 8 + lVar1);
      lVar1 = lVar1 + 0x38;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1437ad5b0 FUN_1437ad5b0 body=51 status=ok
// SIG undefined FUN_1437ad5b0(void)

undefined1 FUN_1437ad5b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 8);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x18);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437ad5f0 FUN_1437ad5f0 body=18 status=ok
// SIG undefined FUN_1437ad5f0(void)

undefined8 * FUN_1437ad5f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe5d0;
  return param_2;
}



// FUNCTION 1437ad610 FUN_1437ad610 body=18 status=ok
// SIG undefined FUN_1437ad610(void)

undefined8 * FUN_1437ad610(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe640;
  return param_2;
}



// FUNCTION 1437ad690 FUN_1437ad690 body=153 status=ok
// SIG undefined FUN_1437ad690(void)

longlong FUN_1437ad690(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_14370c150();
  }
  FUN_1437af5b0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x40;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1437ad730 FUN_1437ad730 body=18 status=ok
// SIG undefined FUN_1437ad730(void)

undefined8 * FUN_1437ad730(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe720;
  return param_2;
}



// FUNCTION 1437ad750 FUN_1437ad750 body=157 status=ok
// SIG undefined FUN_1437ad750(void)

longlong FUN_1437ad750(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143716650(param_1 + 0x30);
  FUN_143716650(param_1 + 0x28);
  FUN_1437b0000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1437ad800 FUN_1437ad800 body=18 status=ok
// SIG undefined FUN_1437ad800(void)

undefined8 * FUN_1437ad800(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe7e0;
  return param_2;
}



// FUNCTION 1437ad820 FUN_1437ad820 body=18 status=ok
// SIG undefined FUN_1437ad820(void)

undefined8 * FUN_1437ad820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe850;
  return param_2;
}



// FUNCTION 1437ad890 FUN_1437ad890 body=18 status=ok
// SIG undefined FUN_1437ad890(void)

undefined8 * FUN_1437ad890(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe8c0;
  return param_2;
}



// FUNCTION 1437ad8b0 FUN_1437ad8b0 body=18 status=ok
// SIG undefined FUN_1437ad8b0(void)

undefined8 * FUN_1437ad8b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe920;
  return param_2;
}



// FUNCTION 1437ad8d0 FUN_1437ad8d0 body=18 status=ok
// SIG undefined FUN_1437ad8d0(void)

undefined8 * FUN_1437ad8d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe990;
  return param_2;
}



// FUNCTION 1437ad940 FUN_1437ad940 body=136 status=ok
// SIG undefined FUN_1437ad940(void)

longlong FUN_1437ad940(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437aef20();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x48;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1437ad9f0 FUN_1437ad9f0 body=70 status=ok
// SIG undefined FUN_1437ad9f0(void)

undefined1 FUN_1437ad9f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437adb10(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0xb0);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0xc0);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1437ada40 FUN_1437ada40 body=203 status=ok
// SIG undefined FUN_1437ada40(void)

longlong FUN_1437ada40(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),4,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
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
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 1437adb10 FUN_1437adb10 body=54 status=ok
// SIG undefined FUN_1437adb10(void)

undefined1 FUN_1437adb10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437ae6f0(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = thunk_FUN_14370b790(param_1 + 0x80);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437adb50 FUN_1437adb50 body=136 status=ok
// SIG undefined FUN_1437adb50(void)

longlong FUN_1437adb50(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x70;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1437adc30 FUN_1437adc30 body=18 status=ok
// SIG undefined FUN_1437adc30(void)

undefined8 * FUN_1437adc30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fea00;
  return param_2;
}



// FUNCTION 1437adc50 FUN_1437adc50 body=90 status=ok
// SIG undefined FUN_1437adc50(void)

undefined1 FUN_1437adc50(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x38);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x48);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x58);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x68);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437adcb0 FUN_1437adcb0 body=136 status=ok
// SIG undefined FUN_1437adcb0(void)

longlong FUN_1437adcb0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af5b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1437add40 FUN_1437add40 body=136 status=ok
// SIG undefined FUN_1437add40(void)

longlong FUN_1437add40(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
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



// FUNCTION 1437addd0 FUN_1437addd0 body=89 status=ok
// SIG undefined FUN_1437addd0(void)

void FUN_1437addd0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    param_1 = param_1 + 6;
    lVar1 = (longlong)param_3;
    do {
      if ((undefined4 *)(param_1 + -6) != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + -6) = 0;
        *(undefined8 *)(param_1 + -2) = 0;
        FUN_143716620(param_1 + 10,&DAT_145af3922);
      }
      param_1 = param_1 + 0x18;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1437ade30 FUN_1437ade30 body=136 status=ok
// SIG undefined FUN_1437ade30(void)

longlong FUN_1437ade30(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b0b80();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x38;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1437adec0 FUN_1437adec0 body=200 status=ok
// SIG undefined FUN_1437adec0(void)

longlong FUN_1437adec0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x40,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar3 = *(short *)(param_1 + 0x10);
      if (sVar3 == -1) {
        sVar3 = 0x30;
      }
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1437ae040 FUN_1437ae040 body=18 status=ok
// SIG undefined FUN_1437ae040(void)

undefined8 * FUN_1437ae040(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467feb20;
  return param_2;
}



// FUNCTION 1437ae060 FUN_1437ae060 body=136 status=ok
// SIG undefined FUN_1437ae060(void)

longlong FUN_1437ae060(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b04f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0xe0;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1437ae0f0 FUN_1437ae0f0 body=18 status=ok
// SIG undefined FUN_1437ae0f0(void)

undefined8 * FUN_1437ae0f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467feb90;
  return param_2;
}



// FUNCTION 1437ae110 FUN_1437ae110 body=18 status=ok
// SIG undefined FUN_1437ae110(void)

undefined8 * FUN_1437ae110(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fec00;
  return param_2;
}



// FUNCTION 1437ae240 FUN_1437ae240 body=253 status=ok
// SIG undefined FUN_1437ae240(void)

void FUN_1437ae240(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x54);
    do {
      if ((undefined8 *)(puVar1 + -0x15) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -0x13) = 0;
        puVar1[-0x11] = 0x1ffff;
        *(undefined ***)(puVar1 + -0x15) = hkxVertexAnimation::vftable;
        puVar1[-0xf] = 0xbf800000;
        *(undefined8 *)(puVar1 + -0xb) = 0;
        puVar1[-9] = 0x1ffff;
        *(undefined ***)(puVar1 + -0xd) = hkxVertexBuffer::vftable;
        *(undefined8 *)(puVar1 + -7) = 0;
        puVar1[-5] = 0;
        puVar1[-4] = 0x80000000;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x80000000;
        *(undefined8 *)(puVar1 + 5) = 0;
        puVar1[7] = 0;
        puVar1[8] = 0x80000000;
        *(undefined8 *)(puVar1 + 9) = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0x80000000;
        *(undefined8 *)(puVar1 + 0xd) = 0;
        *(undefined8 *)(puVar1 + 0xf) = 0;
        *(undefined8 *)(puVar1 + 0x11) = 0;
        *(undefined8 *)(puVar1 + 0x13) = 0;
        puVar1[0x15] = 0;
        puVar1[0x16] = 0x80000000;
        *(undefined8 *)(puVar1 + 0x17) = 0;
        puVar1[0x19] = 0;
        puVar1[0x1a] = 0x80000000;
        *(undefined8 *)(puVar1 + 0x1b) = 0;
        puVar1[0x1d] = 0;
        puVar1[0x1e] = 0x80000000;
      }
      puVar1 = puVar1 + 0x34;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437ae340 FUN_1437ae340 body=104 status=ok
// SIG undefined FUN_1437ae340(void)

void FUN_1437ae340(undefined8 *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
        FUN_1437afc30(param_1,param_2);
      }
      param_2 = param_2 + 0x18;
      param_1 = param_1 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ae3c0 FUN_1437ae3c0 body=18 status=ok
// SIG undefined FUN_1437ae3c0(void)

undefined8 * FUN_1437ae3c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fee20;
  return param_2;
}



// FUNCTION 1437ae3e0 FUN_1437ae3e0 body=18 status=ok
// SIG undefined FUN_1437ae3e0(void)

undefined8 * FUN_1437ae3e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fee90;
  return param_2;
}



// FUNCTION 1437ae400 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiCollisionAvoidance::SimpleObstacleGenerator>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xd0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1a;
      plVar2 = plVar2 + -0x1a;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437ae460 FUN_1437ae460 body=70 status=ok
// SIG undefined FUN_1437ae460(void)

void FUN_1437ae460(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1437afc30(param_1,param_2 + param_1);
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437ae4b0 FUN_1437ae4b0 body=235 status=ok
// SIG undefined FUN_1437ae4b0(void)

void FUN_1437ae4b0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 100);
    do {
      if ((undefined8 *)(puVar1 + -0x19) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -0x17) = 0;
        puVar1[-0x15] = 0x1ffff;
        *(undefined ***)(puVar1 + -0x19) = hkxBlendShapeCollectionChannel::vftable;
        *(undefined8 *)(puVar1 + -0x13) = 0;
        *(undefined8 *)(puVar1 + -0x11) = 0;
        puVar1[-0xf] = 0;
        puVar1[-0xe] = 0x80000000;
        *(undefined8 *)(puVar1 + -0xb) = 0;
        puVar1[-9] = 0x1ffff;
        *(undefined ***)(puVar1 + -0xd) = hkxVertexBuffer::vftable;
        *(undefined8 *)(puVar1 + -7) = 0;
        puVar1[-5] = 0;
        puVar1[-4] = 0x80000000;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        *(undefined8 *)(puVar1 + 1) = 0;
        puVar1[3] = 0;
        puVar1[4] = 0x80000000;
        *(undefined8 *)(puVar1 + 5) = 0;
        puVar1[7] = 0;
        puVar1[8] = 0x80000000;
        *(undefined8 *)(puVar1 + 9) = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0x80000000;
        *(undefined8 *)(puVar1 + 0xd) = 0;
        *(undefined8 *)(puVar1 + 0xf) = 0;
        *(undefined8 *)(puVar1 + 0x11) = 0;
        *(undefined8 *)(puVar1 + 0x13) = 0;
        puVar1[0x15] = 0;
        puVar1[0x16] = 0x80000000;
      }
      puVar1 = puVar1 + 0x30;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1437ae5a0 FUN_1437ae5a0 body=18 status=ok
// SIG undefined FUN_1437ae5a0(void)

undefined8 * FUN_1437ae5a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fefe0;
  return param_2;
}



// FUNCTION 1437ae5c0 FUN_1437ae5c0 body=136 status=ok
// SIG undefined FUN_1437ae5c0(void)

longlong FUN_1437ae5c0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437af390();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x40;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1437ae650 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiPhysicsBodySilhouetteGeneratorBase>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xc0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x18;
      plVar2 = plVar2 + -0x18;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1437ae6b0 FUN_1437ae6b0 body=51 status=ok
// SIG undefined FUN_1437ae6b0(void)

undefined1 FUN_1437ae6b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437afb20(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x40);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437ae6f0 FUN_1437ae6f0 body=86 status=ok
// SIG undefined FUN_1437ae6f0(void)

undefined1 FUN_1437ae6f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x20);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x30);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x40);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1437ae750 FUN_1437ae750 body=18 status=ok
// SIG undefined FUN_1437ae750(void)

undefined8 * FUN_1437ae750(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ff1f0;
  return param_2;
}



// FUNCTION 1437ae770 FUN_1437ae770 body=166 status=ok
// SIG undefined FUN_1437ae770(void)

longlong FUN_1437ae770(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143716650(param_1 + 0x28);
  FUN_143716650(param_1 + 0x20);
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x30;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1437ae820 FUN_1437ae820 body=18 status=ok
// SIG undefined FUN_1437ae820(void)

undefined8 * FUN_1437ae820(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ff310;
  return param_2;
}



// FUNCTION 1437ae840 FUN_1437ae840 body=18 status=ok
// SIG undefined FUN_1437ae840(void)

undefined8 * FUN_1437ae840(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ff380;
  return param_2;
}



// FUNCTION 1437ae8c0 FUN_1437ae8c0 body=64 status=ok
// SIG undefined FUN_1437ae8c0(void)

undefined1 FUN_1437ae8c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1437afb00(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x20);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x30);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1437ae900 FUN_1437ae900 body=18 status=ok
// SIG undefined FUN_1437ae900(void)

undefined8 * FUN_1437ae900(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ff3f0;
  return param_2;
}



// FUNCTION 1437ae9d0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavVolumeDebugUtils::GeometryBuildSettings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        UCheatManagerGunfire::GetAllCheats(param_1);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437aea10 FUN_1437aea10 body=217 status=ok
// SIG undefined FUN_1437aea10(void)

undefined8 * FUN_1437aea10(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int local_res8 [2];
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkxBlob::vftable;
  puVar3 = (undefined1 *)0x0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x20);
  lVar6 = (longlong)iVar1;
  local_res8[0] = iVar1;
  uVar2 = FUN_143703a50();
  iVar5 = local_res8[0];
  if (local_res8[0] != 0) {
    puVar3 = (undefined1 *)FUN_143702d60(uVar2,1,local_res8);
  }
  param_1[3] = puVar3;
  *(int *)(param_1 + 4) = iVar5;
  iVar5 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar5 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0x24) = iVar5;
  if (0 < iVar1) {
    lVar4 = *(longlong *)(param_2 + 0x18) - (longlong)puVar3;
    do {
      *puVar3 = puVar3[lVar4];
      puVar3 = puVar3 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}



// FUNCTION 1437aeaf0 FUN_1437aeaf0 body=148 status=ok
// SIG undefined FUN_1437aeaf0(void)

void FUN_1437aeaf0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar4 = *(longlong *)(param_1 + 8) + lVar3 * 0x28;
    do {
      FUN_1437aeb90(lVar4);
      lVar4 = lVar4 + -0x28;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),0x28,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_143716650(param_1);
  return;
}



// FUNCTION 1437aeb90 FUN_1437aeb90 body=264 status=ok
// SIG undefined FUN_1437aeb90(void)

void FUN_1437aeb90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x18) + lVar3 * 0x28;
    do {
      FUN_1437aeca0(lVar4);
      lVar4 = lVar4 + -0x28;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x28,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar4 = *(longlong *)(param_1 + 8) + lVar3 * 0x18;
    do {
      FUN_143716650(lVar4);
      lVar4 = lVar4 + -0x18;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),0x18,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_143716650(param_1);
  return;
}



// FUNCTION 1437aeca0 FUN_1437aeca0 body=148 status=ok
// SIG undefined FUN_1437aeca0(void)

void FUN_1437aeca0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar4 = *(longlong *)(param_1 + 8) + lVar3 * 0x18;
    do {
      FUN_143716650(lVar4);
      lVar4 = lVar4 + -0x18;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),0x18,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_143716650(param_1);
  return;
}



// FUNCTION 1437aed40 FUN_1437aed40 body=287 status=ok
// SIG undefined FUN_1437aed40(void)

void FUN_1437aed40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 9) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) {
    FUN_143702e10(uVar1,param_1[8],1,*(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],2,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
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



// FUNCTION 1437aee60 FUN_1437aee60 body=187 status=ok
// SIG undefined FUN_1437aee60(void)

void FUN_1437aee60(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1437af860(param_1 + 0xb0);
  FUN_1437aed40(param_1 + 0x48);
  FUN_14370c000(param_1 + 0x30);
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x20) + lVar3 * 0x18;
    do {
      FUN_1437aeaf0(lVar4);
      lVar4 = lVar4 + -0x18;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),0x18,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437aef20 FUN_1437aef20 body=110 status=ok
// SIG undefined FUN_1437aef20(void)

void FUN_1437aef20(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143716650(param_1 + 0x40);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),1,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_14370c000(param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437aef90 FUN_1437aef90 body=157 status=ok
// SIG undefined FUN_1437aef90(void)

void FUN_1437aef90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar2 * 0x10;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -0x10;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
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



// FUNCTION 1437af030 FUN_1437af030 body=137 status=ok
// SIG undefined FUN_1437af030(void)

void FUN_1437af030(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),4,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),2,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af0c0 FUN_1437af0c0 body=119 status=ok
// SIG undefined FUN_1437af0c0(void)

void FUN_1437af0c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),1,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_143716650(param_1 + 0x38);
  FUN_143716650(param_1 + 0x30);
  FUN_143716650(param_1 + 0x28);
  FUN_143716650(param_1 + 0x18);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af140 FUN_1437af140 body=581 status=ok
// SIG undefined FUN_1437af140(void)

void FUN_1437af140(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x70) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar5 = (uint *)(*(longlong *)(param_1 + 0x68) + 0xc + lVar4 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar5[-1] = 0;
      if (-1 < (int)*puVar5) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar5 + -3),2,*puVar5 & 0x3fffffff);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
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
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x58),4,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar4 = *(longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x50) + -1;
  lVar6 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar4 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),8,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar4 = *(longlong *)(param_1 + 0x38);
  iVar3 = *(int *)(param_1 + 0x40) + -1;
  lVar6 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar4 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),8,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  lVar4 = *(longlong *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28) + -1;
  lVar6 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar4 + lVar6 * 8) != 0) {
        FUN_14370c150();
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af390 FUN_1437af390 body=151 status=ok
// SIG undefined FUN_1437af390(void)

void FUN_1437af390(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_143716650(param_1 + 0x38);
  uVar2 = FUN_143703a50();
  lVar1 = *(longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x30) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x28),8,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_1437b0000(param_1);
  return;
}



// FUNCTION 1437af430 FUN_1437af430 body=225 status=ok
// SIG undefined FUN_1437af430(void)

void FUN_1437af430(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),0x40,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x28) + -1;
  if (-1 < iVar3) {
    lVar2 = *(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8;
    do {
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -8;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af520 FUN_1437af520 body=137 status=ok
// SIG undefined FUN_1437af520(void)

void FUN_1437af520(longlong param_1)

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
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),1,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af5b0 FUN_1437af5b0 body=137 status=ok
// SIG undefined FUN_1437af5b0(void)

void FUN_1437af5b0(longlong param_1)

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
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),4,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af640 FUN_1437af640 body=212 status=ok
// SIG undefined FUN_1437af640(void)

void FUN_1437af640(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),4,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 8;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af720 FUN_1437af720 body=101 status=ok
// SIG undefined FUN_1437af720(void)

void FUN_1437af720(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143716650(param_1 + 0x38);
  FUN_143716650(param_1 + 0x30);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),1,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af790 FUN_1437af790 body=197 status=ok
// SIG undefined FUN_1437af790(void)

void FUN_1437af790(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 200) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xcc)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xc0),4,*(uint *)(param_1 + 0xcc) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xbc)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xb0),4,*(uint *)(param_1 + 0xbc) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  FUN_1437af860(param_1 + 0xa0);
  FUN_1437aed40(param_1 + 0x38);
  FUN_14370c000(param_1 + 0x20);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437af860 FUN_1437af860 body=148 status=ok
// SIG undefined FUN_1437af860(void)

void FUN_1437af860(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = *param_1 + (longlong)iVar2 * 0x18 + 0x10;
    do {
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x18,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1437af900 FUN_1437af900 body=18 status=ok
// SIG undefined FUN_1437af900(void)

undefined8 * FUN_1437af900(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe1f0;
  return param_2;
}



// FUNCTION 1437af920 FUN_1437af920 body=18 status=ok
// SIG undefined FUN_1437af920(void)

undefined8 * FUN_1437af920(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fec70;
  return param_2;
}



// FUNCTION 1437af940 FUN_1437af940 body=18 status=ok
// SIG undefined FUN_1437af940(void)

undefined8 * FUN_1437af940(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fded0;
  return param_2;
}



// FUNCTION 1437af960 FUN_1437af960 body=18 status=ok
// SIG undefined FUN_1437af960(void)

undefined8 * FUN_1437af960(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467fe560;
  return param_2;
}



// FUNCTION 1437af980 FUN_1437af980 body=18 status=ok
// SIG undefined FUN_1437af980(void)

undefined8 * FUN_1437af980(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1467ff050;
  return param_2;
}



// FUNCTION 1437af9a0 FUN_1437af9a0 body=111 status=ok
// SIG undefined FUN_1437af9a0(void)

undefined1 FUN_1437af9a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143704060();
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x30);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x80);
      if (cVar1 != '\0') {
        cVar1 = FUN_1437afb50(param_1 + 0xac);
        if (cVar1 != '\0') {
          cVar1 = FUN_1437afb40(param_1 + 0xb8);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 200);
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



// FUNCTION 1437afa10 FUN_1437afa10 body=154 status=ok
// SIG undefined FUN_1437afa10(void)

undefined1 FUN_1437afa10(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x38);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x58);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x68);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x78);
          if (cVar1 != '\0') {
            cVar1 = FUN_14370b790(param_1 + 0x88);
            if (cVar1 != '\0') {
              cVar1 = FUN_14370b790(param_1 + 0x98);
              if (cVar1 != '\0') {
                cVar1 = FUN_14370b790(param_1 + 0xa8);
                if (cVar1 != '\0') {
                  cVar1 = FUN_14370b790(param_1 + 0xb8);
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



// FUNCTION 1437afab0 FUN_1437afab0 body=15 status=ok
// SIG undefined FUN_1437afab0(void)

void FUN_1437afab0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145baf9b0,*param_1);
  return;
}



// FUNCTION 1437afac0 FUN_1437afac0 body=15 status=ok
// SIG undefined FUN_1437afac0(void)

void FUN_1437afac0(undefined2 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145bafb30,*param_1);
  return;
}



// FUNCTION 1437afad0 FUN_1437afad0 body=15 status=ok
// SIG undefined FUN_1437afad0(void)

void FUN_1437afad0(undefined2 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145bafd28,*param_1);
  return;
}



// FUNCTION 1437afae0 FUN_1437afae0 body=15 status=ok
// SIG undefined FUN_1437afae0(void)

void FUN_1437afae0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145bad1e0,*param_1);
  return;
}



// FUNCTION 1437afaf0 FUN_1437afaf0 body=15 status=ok
// SIG undefined FUN_1437afaf0(void)

void FUN_1437afaf0(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145baebc8,*param_1);
  return;
}



// FUNCTION 1437afb00 FUN_1437afb00 body=15 status=ok
// SIG undefined FUN_1437afb00(void)

void FUN_1437afb00(char *param_1)

{
  thunk_FUN_143744fb0(&DAT_145bad4b8,(int)*param_1);
  return;
}



// FUNCTION 1437afb20 FUN_1437afb20 body=15 status=ok
// SIG undefined FUN_1437afb20(void)

void FUN_1437afb20(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145badaf0,*param_1);
  return;
}



// FUNCTION 1437afb40 FUN_1437afb40 body=15 status=ok
// SIG undefined FUN_1437afb40(void)

void FUN_1437afb40(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145bafdd8,*param_1);
  return;
}



// FUNCTION 1437afb50 FUN_1437afb50 body=14 status=ok
// SIG undefined FUN_1437afb50(void)

void FUN_1437afb50(undefined4 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145bafc18,*param_1);
  return;
}



// FUNCTION 1437afb60 FUN_1437afb60 body=15 status=ok
// SIG undefined FUN_1437afb60(void)

void FUN_1437afb60(undefined1 *param_1)

{
  thunk_FUN_143744fb0(&DAT_145baf460,*param_1);
  return;
}



// FUNCTION 1437afb70 FUN_1437afb70 body=31 status=ok
// SIG undefined FUN_1437afb70(void)

undefined8 * FUN_1437afb70(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkAlignSceneToNodeOptions::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1437afb90 FUN_1437afb90 body=148 status=ok
// SIG undefined FUN_1437afb90(void)

longlong FUN_1437afb90(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143716650(param_1 + 0x28);
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x30;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1437afc30 FUN_1437afc30 body=368 status=ok
// SIG undefined FUN_1437afc30(void)

longlong FUN_1437afc30(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  FUN_143716660();
  FUN_143703a50();
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  lVar10 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar10 * 0x10 + *(longlong *)(param_1 + 8);
    do {
      if (*(longlong *)(lVar7 + 8) != 0) {
        FUN_14370c150();
      }
      FUN_143716650(lVar7);
      lVar7 = lVar7 + -0x10;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  uVar6 = -*(int *)(param_1 + 0x10);
  lVar10 = (longlong)*(int *)(param_1 + 0x10) * 0x10 + *(longlong *)(param_1 + 8);
  if (0 < (int)uVar6) {
    uVar11 = (ulonglong)uVar6;
    do {
      if (lVar10 != 0) {
        UCheatManagerGunfire::GetAllCheats(lVar10);
      }
      lVar10 = lVar10 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar4 = *(int *)(param_2 + 0x10);
  lVar10 = (longlong)iVar4;
  if (iVar4 != 0) {
    lVar7 = *(longlong *)(param_2 + 8);
    uVar5 = FUN_143703a50();
    iVar1 = *(int *)(param_1 + 0x10);
    uVar6 = *(uint *)(param_1 + 0x14) & 0x3fffffff;
    iVar4 = iVar1 + iVar4;
    if (((int)uVar6 < iVar4) && ((int)uVar6 < iVar4)) {
      iVar3 = iVar4;
      if (iVar4 < (int)(uVar6 * 2)) {
        iVar3 = uVar6 * 2;
      }
      FUN_14370c310(uVar5,param_1 + 8,iVar3,0x10);
    }
    FUN_143732890(lVar10 * 0x10 + *(longlong *)(param_1 + 8),*(longlong *)(param_1 + 8),
                  (longlong)iVar1 << 4);
    lVar8 = *(longlong *)(param_1 + 8);
    if (0 < lVar10) {
      lVar9 = lVar8 - lVar7;
      lVar7 = lVar7 - lVar8;
      do {
        if (lVar8 != 0) {
          FUN_1437165f0(lVar8,lVar7 + lVar8);
          lVar2 = *(longlong *)(lVar7 + 8 + lVar8);
          *(longlong *)(lVar7 + lVar8 + 8 + lVar9) = lVar2;
          if (lVar2 != 0) {
            FUN_14370c030();
          }
        }
        lVar8 = lVar8 + 0x10;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    *(int *)(param_1 + 0x10) = iVar4;
  }
  return param_1;
}



// FUNCTION 1437afda0 FUN_1437afda0 body=70 status=ok
// SIG undefined FUN_1437afda0(void)

void FUN_1437afda0(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_3;
    do {
      FUN_1437afc30(param_1,param_2 + param_1);
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1437afdf0 FUN_1437afdf0 body=342 status=ok
// SIG undefined FUN_1437afdf0(void)

undefined8 * FUN_1437afdf0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkxAttributeHolder::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  iVar1 = *(int *)(param_2 + 0x20);
  lVar7 = *(longlong *)(param_2 + 0x18);
  uVar2 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar2,param_1 + 3,iVar1,0x18);
  }
  iVar3 = (*(int *)(param_1 + 4) - iVar1) + -1;
  if (-1 < iVar3) {
    lVar6 = param_1[3] + (longlong)iVar1 * 0x18 + (longlong)iVar3 * 0x18;
    do {
      FUN_1437aff50(lVar6);
      lVar6 = lVar6 + -0x18;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = iVar1;
  if (*(int *)(param_1 + 4) < iVar1) {
    iVar3 = *(int *)(param_1 + 4);
  }
  FUN_1437afda0(param_1[3],lVar7,iVar3);
  puVar4 = (undefined8 *)(param_1[3] + (longlong)iVar3 * 0x18);
  if (0 < iVar1 - iVar3) {
    lVar7 = lVar7 + (longlong)iVar3 * 0x18;
    uVar5 = (ulonglong)(uint)(iVar1 - iVar3);
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)(puVar4 + 2) = 0;
        *(undefined4 *)((longlong)puVar4 + 0x14) = 0x80000000;
        FUN_1437afc30(puVar4,lVar7);
      }
      lVar7 = lVar7 + 0x18;
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  *(int *)(param_1 + 4) = iVar1;
  return param_1;
}



// FUNCTION 1437aff50 FUN_1437aff50 body=161 status=ok
// SIG undefined FUN_1437aff50(void)

void FUN_1437aff50(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    lVar3 = lVar4 * 0x10 + *(longlong *)(param_1 + 8);
    do {
      if (*(longlong *)(lVar3 + 8) != 0) {
        FUN_14370c150();
      }
      FUN_143716650(lVar3);
      lVar3 = lVar3 + -0x10;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 8),0x10,*(uint *)(param_1 + 0x14) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_143716650(param_1);
  return;
}



// FUNCTION 1437b0000 FUN_1437b0000 body=157 status=ok
// SIG undefined FUN_1437b0000(void)

void FUN_1437b0000(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = hkxAttributeHolder::vftable;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar2) {
    lVar3 = param_1[3] + (longlong)iVar2 * 0x18;
    do {
      FUN_1437aff50(lVar3);
      lVar3 = lVar3 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0x18,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437b00a0 FUN_1437b00a0 body=41 status=ok
// SIG undefined FUN_1437b00a0(void)

undefined8 * FUN_1437b00a0(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkxEnvironment::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 1437b00d0 FUN_1437b00d0 body=152 status=ok
// SIG undefined FUN_1437b00d0(void)

void FUN_1437b00d0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  if (-1 < iVar3) {
    lVar2 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x18);
    do {
      FUN_143716650(lVar2 + 8);
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
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



// FUNCTION 1437b0170 FUN_1437b0170 body=136 status=ok
// SIG undefined FUN_1437b0170(void)

longlong FUN_1437b0170(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b00d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437b0200 FUN_1437b0200 body=176 status=ok
// SIG undefined FUN_1437b0200(void)

undefined8 * FUN_1437b0200(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkxNode::vftable;
  param_1[5] = 0;
  FUN_14375ef60(param_1 + 6);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  FUN_14375f240(param_1 + 6);
  return param_1;
}



// FUNCTION 1437b02b0 FUN_1437b02b0 body=420 status=ok
// SIG undefined FUN_1437b02b0(void)

void FUN_1437b02b0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = hkxNode::vftable;
  FUN_143716650(param_1 + 0x11);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x84)) {
    FUN_143702e10(uVar1,param_1[0xf],4,*(uint *)((longlong)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0xe) + -1;
  if (-1 < iVar3) {
    lVar2 = param_1[0xd] + 8 + (longlong)iVar3 * 0x10;
    do {
      FUN_143716650(lVar2);
      lVar2 = lVar2 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar1,param_1[0xd],0x10,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar2 = param_1[0xb];
  lVar4 = (longlong)(*(int *)(param_1 + 0xc) + -1);
  if (-1 < *(int *)(param_1 + 0xc) + -1) {
    do {
      if (*(longlong *)(lVar2 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar1,param_1[0xb],8,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x54)) {
    FUN_143702e10(uVar1,param_1[9],0x40,*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  if (param_1[8] != 0) {
    FUN_14370c150();
  }
  FUN_143716650(param_1 + 5);
  FUN_1437b0000(param_1);
  return;
}



// FUNCTION 1437b0460 FUN_1437b0460 body=136 status=ok
// SIG undefined FUN_1437b0460(void)

longlong FUN_1437b0460(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b02b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x98;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1437b04f0 FUN_1437b04f0 body=389 status=ok
// SIG undefined FUN_1437b04f0(void)

void FUN_1437b04f0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = hkxMaterial::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xd4)) {
    FUN_143702e10(uVar1,param_1[0x19],8,*(uint *)((longlong)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  if (param_1[0x12] != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  lVar2 = param_1[0x10];
  lVar3 = (longlong)(*(int *)(param_1 + 0x11) + -1);
  if (-1 < *(int *)(param_1 + 0x11) + -1) {
    do {
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) {
    FUN_143702e10(uVar1,param_1[0x10],8,*(uint *)((longlong)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  lVar2 = (longlong)(*(int *)(param_1 + 7) + -1);
  if (-1 < *(int *)(param_1 + 7) + -1) {
    plVar4 = (longlong *)(lVar2 * 0x10 + param_1[6]);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) {
    FUN_143702e10(uVar1,param_1[6],0x10,*(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  FUN_143716650(param_1 + 5);
  FUN_1437b0000(param_1);
  return;
}



// FUNCTION 1437b0680 FUN_1437b0680 body=41 status=ok
// SIG undefined FUN_1437b0680(void)

undefined8 * FUN_1437b0680(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = hkxMaterialShaderSet::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  return param_1;
}



// FUNCTION 1437b06b0 FUN_1437b06b0 body=144 status=ok
// SIG undefined FUN_1437b06b0(void)

void FUN_1437b06b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_143703a50();
  lVar1 = *(longlong *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(lVar1 + lVar4 * 8) != 0) {
        FUN_14370c150();
      }
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437b0740 FUN_1437b0740 body=136 status=ok
// SIG undefined FUN_1437b0740(void)

longlong FUN_1437b0740(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b06b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x28;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1437b07d0 FUN_1437b07d0 body=934 status=ok
// SIG undefined FUN_1437b07d0(void)

undefined8 * FUN_1437b07d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  
  *param_1 = hkReferencedObject::vftable;
  FUN_143718270(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  plVar3 = param_1 + 0xd;
  uVar12 = 0;
  plVar2 = param_1 + 4;
  plVar4 = param_1 + 7;
  plVar5 = param_1 + 9;
  *param_1 = hkxMeshSection::vftable;
  param_1[3] = 0;
  *plVar2 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  param_1[6] = 0;
  *plVar4 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *plVar5 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *plVar3 = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_14370c030();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  uVar14 = uVar12;
  uVar17 = uVar12;
  if (0 < *(int *)(param_2 + 0x28)) {
    do {
      lVar15 = *(longlong *)(param_2 + 0x20);
      uVar9 = FUN_143703a50();
      if (*(uint *)(param_1 + 5) == (*(uint *)((longlong)param_1 + 0x2c) & 0x3fffffff)) {
        FUN_14370c460(uVar9,plVar2,8);
      }
      plVar1 = (longlong *)(*plVar2 + (longlong)*(int *)(param_1 + 5) * 8);
      if ((plVar1 != (longlong *)0x0) &&
         (lVar15 = *(longlong *)(lVar15 + uVar17), *plVar1 = lVar15, lVar15 != 0)) {
        FUN_14370c030();
      }
      *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar17 = uVar17 + 8;
    } while ((int)uVar13 < *(int *)(param_2 + 0x28));
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_14370c030();
  }
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar14 = uVar12;
  uVar17 = uVar12;
  if (0 < *(int *)(param_2 + 0x40)) {
    do {
      lVar15 = *(longlong *)(param_2 + 0x38);
      uVar9 = FUN_143703a50();
      if (*(uint *)(param_1 + 8) == (*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff)) {
        FUN_14370c460(uVar9,plVar4,8);
      }
      plVar2 = (longlong *)(*plVar4 + (longlong)*(int *)(param_1 + 8) * 8);
      if ((plVar2 != (longlong *)0x0) &&
         (lVar15 = *(longlong *)(lVar15 + uVar17), *plVar2 = lVar15, lVar15 != 0)) {
        FUN_14370c030();
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar17 = uVar17 + 8;
    } while ((int)uVar13 < *(int *)(param_2 + 0x40));
  }
  uVar14 = uVar12;
  uVar17 = uVar12;
  if (0 < *(int *)(param_2 + 0x50)) {
    do {
      lVar15 = *(longlong *)(param_2 + 0x48);
      uVar9 = FUN_143703a50();
      if (*(uint *)(param_1 + 10) == (*(uint *)((longlong)param_1 + 0x54) & 0x3fffffff)) {
        FUN_14370c460(uVar9,plVar5,8);
      }
      plVar2 = (longlong *)(*plVar5 + (longlong)*(int *)(param_1 + 10) * 8);
      if ((plVar2 != (longlong *)0x0) &&
         (lVar15 = *(longlong *)(lVar15 + uVar17), *plVar2 = lVar15, lVar15 != 0)) {
        FUN_14370c030();
      }
      *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + 1;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar17 = uVar17 + 8;
    } while ((int)uVar13 < *(int *)(param_2 + 0x50));
  }
  iVar6 = *(int *)(param_2 + 0x60);
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  uVar10 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 100) & 0x3fffffff) < iVar6) {
    FUN_14370c310(uVar10,param_1 + 0xb,iVar6,4);
  }
  FUN_143795760(param_1[0xb],uVar9,iVar6);
  *(int *)(param_1 + 0xc) = iVar6;
  iVar6 = *(int *)(param_2 + 0x70);
  uVar9 = FUN_143703a50();
  uVar13 = *(uint *)((longlong)param_1 + 0x74) & 0x3fffffff;
  if ((int)uVar13 < iVar6) {
    iVar7 = uVar13 * 2;
    iVar8 = iVar6;
    if (iVar6 < iVar7) {
      iVar8 = iVar7;
    }
    FUN_14370c310(uVar9,plVar3,iVar8,0x10);
  }
  iVar8 = (*(int *)(param_1 + 0xe) - iVar6) + -1;
  lVar15 = (longlong)iVar8;
  if (-1 < iVar8) {
    puVar16 = (uint *)((longlong)iVar6 * 0x10 + *plVar3 + 0xc + lVar15 * 0x10);
    do {
      uVar9 = FUN_143703a50();
      puVar16[-1] = 0;
      if (-1 < (int)*puVar16) {
        FUN_143702e10(uVar9,*(undefined8 *)(puVar16 + -3),2,*puVar16 & 0x3fffffff);
      }
      puVar16[-3] = 0;
      puVar16[-2] = 0;
      *puVar16 = 0x80000000;
      puVar16 = puVar16 + -4;
      lVar15 = lVar15 + -1;
    } while (-1 < lVar15);
  }
  iVar8 = iVar6 - *(int *)(param_1 + 0xe);
  puVar11 = (undefined8 *)((longlong)*(int *)(param_1 + 0xe) * 0x10 + *plVar3);
  lVar15 = (longlong)iVar8;
  if (0 < iVar8) {
    do {
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = 0;
        *(undefined4 *)(puVar11 + 1) = 0;
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0x80000000;
      }
      puVar11 = puVar11 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  *(int *)(param_1 + 0xe) = iVar6;
  if (0 < *(int *)(param_2 + 0x70)) {
    do {
      lVar15 = (longlong)(int)uVar12 * 0x10;
      FUN_143796480(lVar15 + *plVar3,*(longlong *)(param_2 + 0x68) + lVar15);
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
    } while ((int)uVar13 < *(int *)(param_2 + 0x70));
  }
  return param_1;
}



// FUNCTION 1437b0b80 FUN_1437b0b80 body=263 status=ok
// SIG undefined FUN_1437b0b80(void)

void FUN_1437b0b80(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkxMesh::vftable;
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
  uVar2 = FUN_143703a50();
  lVar1 = param_1[3];
  lVar3 = (longlong)(*(int *)(param_1 + 4) + -1);
  if (-1 < *(int *)(param_1 + 4) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],8,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437b0c90 FUN_1437b0c90 body=253 status=ok
// SIG undefined FUN_1437b0c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1437b0c90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *param_1 = hkxScene::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
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
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  uVar1 = uRam00000001467f0898;
  param_1[0x1a] = _DAT_1467f0890;
  param_1[0x1b] = uVar1;
  uVar1 = uRam00000001467f08a8;
  param_1[0x1c] = _DAT_1467f08a0;
  param_1[0x1d] = uVar1;
  uVar1 = uRam00000001467f08b8;
  param_1[0x1e] = _DAT_1467f08b0;
  param_1[0x1f] = uVar1;
  return param_1;
}



// FUNCTION 1437b0d90 FUN_1437b0d90 body=1047 status=ok
// SIG undefined FUN_1437b0d90(void)

void FUN_1437b0d90(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = hkxScene::vftable;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0x17];
  lVar3 = (longlong)(*(int *)(param_1 + 0x18) + -1);
  if (-1 < *(int *)(param_1 + 0x18) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc4)) {
    FUN_143702e10(uVar2,param_1[0x17],8,*(uint *)((longlong)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0x15];
  lVar3 = (longlong)(*(int *)(param_1 + 0x16) + -1);
  if (-1 < *(int *)(param_1 + 0x16) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xb4)) {
    FUN_143702e10(uVar2,param_1[0x15],8,*(uint *)((longlong)param_1 + 0xb4) & 0x3fffffff);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0x13];
  lVar3 = (longlong)(*(int *)(param_1 + 0x14) + -1);
  if (-1 < *(int *)(param_1 + 0x14) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) {
    FUN_143702e10(uVar2,param_1[0x13],8,*(uint *)((longlong)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0x11];
  lVar3 = (longlong)(*(int *)(param_1 + 0x12) + -1);
  if (-1 < *(int *)(param_1 + 0x12) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x94)) {
    FUN_143702e10(uVar2,param_1[0x11],8,*(uint *)((longlong)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0xf];
  lVar3 = (longlong)(*(int *)(param_1 + 0x10) + -1);
  if (-1 < *(int *)(param_1 + 0x10) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x84)) {
    FUN_143702e10(uVar2,param_1[0xf],8,*(uint *)((longlong)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0xd];
  lVar3 = (longlong)(*(int *)(param_1 + 0xe) + -1);
  if (-1 < *(int *)(param_1 + 0xe) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x74)) {
    FUN_143702e10(uVar2,param_1[0xd],8,*(uint *)((longlong)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar1 = param_1[0xb];
  lVar3 = (longlong)(*(int *)(param_1 + 0xc) + -1);
  if (-1 < *(int *)(param_1 + 0xc) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 100)) {
    FUN_143702e10(uVar2,param_1[0xb],8,*(uint *)((longlong)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
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
  lVar1 = param_1[7];
  lVar3 = (longlong)(*(int *)(param_1 + 8) + -1);
  if (-1 < *(int *)(param_1 + 8) + -1) {
    do {
      if (*(longlong *)(lVar1 + lVar3 * 8) != 0) {
        FUN_14370c150();
      }
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x44)) {
    FUN_143702e10(uVar2,param_1[7],8,*(uint *)((longlong)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  if (param_1[6] != 0) {
    FUN_14370c150();
  }
  FUN_143716650(param_1 + 4);
  FUN_143716650(param_1 + 3);
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437b11b0 FUN_1437b11b0 body=136 status=ok
// SIG undefined FUN_1437b11b0(void)

longlong FUN_1437b11b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b0d90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x100;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1437b1240 FUN_1437b1240 body=413 status=ok
// SIG undefined FUN_1437b1240(void)

undefined4 *
FUN_1437b1240(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    lVar8 = (longlong)*param_3 * 0x20;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220);
    uVar3 = *(ulonglong *)(lVar8 + 0x10 + lVar2);
    lVar2 = *(longlong *)(lVar8 + lVar2);
    if ((uVar3 & 1) != 0) {
      FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
    }
    if ((uVar3 & 1) != 0) {
      FUN_143733a60(uVar3 & 0xfffffffffffffffe);
    }
    if (lVar2 != 0) {
      puVar9 = (undefined8 *)(lVar8 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220));
      uVar3 = puVar9[2];
      uVar4 = *puVar9;
      lVar2 = puVar9[1];
      if ((uVar3 & 1) != 0) {
        FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
      }
      uVar1 = *(uint *)(puVar9 + 3);
      uVar7 = (int)uVar1 >> 0x1f;
      uVar5 = 0;
      uVar6 = 0;
      if (lVar2 != 0) {
        uVar5 = FUN_1437152f0(lVar2);
        uVar6 = FUN_1437151a0(lVar2);
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
      }
      *param_5 = uVar4;
      param_5[1] = lVar2;
      *(uint *)(param_5 + 2) = (uVar1 ^ uVar7) - uVar7;
      *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
      if ((*(byte *)(param_5 + 3) & 1) != 0) {
        FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
      }
      param_5[3] = uVar6;
      *param_2 = 0;
      if ((uVar3 & 1) == 0) {
        return param_2;
      }
      FUN_143733a60(uVar3 & 0xfffffffffffffffe);
      return param_2;
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  if ((*(byte *)(param_5 + 3) & 1) != 0) {
    FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
  }
  param_5[3] = 0;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437b13e0 FUN_1437b13e0 body=219 status=ok
// SIG undefined FUN_1437b13e0(void)

undefined8 * FUN_1437b13e0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    puVar3 = &local_20;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    local_30 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
    if (local_30 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_1437151a0();
    }
    if ((local_28 & 1) != 0) {
      FUN_1437329e0(local_28 & 0xfffffffffffffffe);
    }
    puVar3 = &local_38;
    bVar2 = true;
    bVar1 = false;
  }
  *param_2 = *puVar3;
  param_2[1] = puVar3[1];
  param_2[2] = puVar3[2];
  puVar3[2] = 0;
  if (bVar1) {
    if ((local_10 & 1) != 0) {
      FUN_143733a60(local_10 & 0xfffffffffffffffe);
    }
  }
  if ((bVar2) && ((local_28 & 1) != 0)) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437b14c0 FUN_1437b14c0 body=944 status=ok
// SIG undefined FUN_1437b14c0(void)

undefined4 *
FUN_1437b14c0(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 local_res8;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  int local_40;
  
  iVar11 = 0;
  if (param_3 != (int *)0x0) {
    iVar11 = *param_3;
  }
  iVar12 = 0;
  local_res8 = 0;
  if (iVar11 != 0) {
    lVar10 = (longlong)iVar11 * 0x20;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220);
    uVar2 = *(ulonglong *)(lVar10 + 0x10 + lVar5);
    uVar6 = *(undefined8 *)(lVar10 + 8 + lVar5);
    lVar5 = *(longlong *)(lVar10 + lVar5);
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    local_58 = lVar5;
    local_50 = uVar6;
    local_48 = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    FUN_1437be460(*(undefined8 *)(param_1 + 0x10),&local_58);
    if ((uVar2 & 1) != 0) {
      FUN_143733a60(uVar2 & 0xfffffffffffffffe);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220);
    uVar2 = *(ulonglong *)(lVar5 + 0x10 + lVar10);
    local_48 = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    uVar1 = *(uint *)(lVar5 + 0x18 + lVar10);
    uVar8 = (int)uVar1 >> 0x1f;
    iVar12 = (uVar1 ^ uVar8) - uVar8;
    if ((uVar2 & 1) != 0) {
      FUN_143733a60(uVar2 & 0xfffffffffffffffe);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220);
    uVar2 = *(ulonglong *)(lVar10 + 0x10 + lVar5);
    local_res8 = *(undefined8 *)(lVar10 + lVar5);
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
    }
    if ((uVar2 & 1) != 0) {
      FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
      if ((uVar2 & 1) != 0) {
        FUN_143733a60(uVar2 & 0xfffffffffffffffe);
        if ((uVar2 & 1) != 0) {
          FUN_143733a60(uVar2 & 0xfffffffffffffffe);
        }
      }
    }
  }
  puVar4 = (undefined8 *)FUN_143714420(param_4,2);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar4;
  }
  iVar3 = FUN_1437152f0(uVar6);
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x230);
  lVar5 = (**(code **)(*plVar7 + 8))(plVar7,iVar3 * param_5);
  if (iVar12 < param_5) {
    iVar9 = (param_5 - iVar12) * iVar3;
  }
  else {
    iVar9 = 0;
  }
  FUN_14370c720(iVar3 * iVar12 + lVar5,0,iVar9);
  plVar7 = (longlong *)FUN_143714420(param_4,2);
  if (plVar7 == (longlong *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = *plVar7;
  }
  local_58 = lVar5;
  if (local_50 == 0) {
    local_48 = 0;
  }
  else {
    local_48 = FUN_1437151a0();
  }
  if ((local_48 & 1) != 0) {
    FUN_1437329e0(local_48 & 0xfffffffffffffffe);
  }
  FUN_1437b9cd0(*(undefined8 *)(param_1 + 0x10),&local_58,param_5,iVar3,0xffffffff,iVar11);
  if (iVar11 == 0) {
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x228);
    plVar7 = (longlong *)FUN_143714420(param_4,2);
    if (plVar7 == (longlong *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = *plVar7;
    }
    if (local_50 == 0) {
      local_48 = 0;
      local_58 = lVar5;
    }
    else {
      local_58 = lVar5;
      local_48 = FUN_1437151a0();
    }
    if ((local_48 & 1) != 0) {
      FUN_1437329e0(local_48 & 0xfffffffffffffffe);
    }
    local_40 = param_5;
    FUN_1437bf160(*(longlong *)(param_1 + 0x10) + 0x1f8,iVar11,&local_58);
    if ((local_48 & 1) != 0) {
      FUN_143733a60(local_48 & 0xfffffffffffffffe);
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    uVar6 = FUN_143703a50();
    if (*(uint *)(lVar5 + 0x290) == (*(uint *)(lVar5 + 0x294) & 0x3fffffff)) {
      FUN_14370c460(uVar6,(longlong *)(lVar5 + 0x288),4);
    }
    *(undefined4 *)(*(longlong *)(lVar5 + 0x288) + (longlong)*(int *)(lVar5 + 0x290) * 4) = 1;
    *(int *)(lVar5 + 0x290) = *(int *)(lVar5 + 0x290) + 1;
    *param_3 = iVar11;
  }
  else {
    iVar9 = param_5;
    if (iVar12 < param_5) {
      iVar9 = iVar12;
    }
    FUN_14370c700(lVar5,local_res8,iVar9 * iVar3);
    plVar7 = (longlong *)FUN_143714420(param_4,2);
    if (plVar7 == (longlong *)0x0) {
      local_50 = 0;
    }
    else {
      local_50 = *plVar7;
    }
    if (local_50 == 0) {
      local_48 = 0;
      local_58 = lVar5;
    }
    else {
      local_58 = lVar5;
      local_48 = FUN_1437151a0();
    }
    if ((local_48 & 1) != 0) {
      FUN_1437329e0(local_48 & 0xfffffffffffffffe);
    }
    local_40 = param_5;
    FUN_1437bf160(*(longlong *)(param_1 + 0x10) + 0x1f8,iVar11,&local_58);
    if ((local_48 & 1) != 0) {
      FUN_143733a60(local_48 & 0xfffffffffffffffe);
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437b1870 FUN_1437b1870 body=424 status=ok
// SIG undefined FUN_1437b1870(void)

int FUN_1437b1870(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  *(undefined4 *)(param_2 + 1) = 0;
  iVar13 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x20) + -1;
  uVar8 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar10 < iVar13) {
    iVar15 = uVar10 * 2;
    if (iVar13 < iVar15) {
      iVar13 = iVar15;
    }
    FUN_14370c310(uVar8,param_2,iVar13,0x18);
  }
  iVar13 = *(int *)(param_1 + 0x20);
  lVar16 = (longlong)iVar13;
  lVar14 = *(longlong *)(param_1 + 0x18);
  uVar8 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
  iVar15 = (int)param_2[1] + iVar13;
  if (((int)uVar10 < iVar15) && ((int)uVar10 < iVar15)) {
    iVar4 = iVar15;
    if (iVar15 < (int)(uVar10 * 2)) {
      iVar4 = uVar10 * 2;
    }
    FUN_14370c310(uVar8,param_2,iVar4,0x18);
  }
  puVar12 = (undefined4 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
  if (0 < iVar13) {
    lVar14 = lVar14 - (longlong)puVar12;
    do {
      if (puVar12 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(lVar14 + (longlong)puVar12);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        *puVar12 = *puVar1;
        puVar12[1] = uVar5;
        puVar12[2] = uVar6;
        puVar12[3] = uVar7;
        *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(lVar14 + 0x10 + (longlong)puVar12);
      }
      puVar12 = puVar12 + 6;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  iVar13 = 1;
  *(int *)(param_2 + 1) = iVar15;
  if (1 < *(int *)(param_1 + 0x30)) {
    lVar14 = 0x20;
    do {
      lVar16 = *(longlong *)(param_1 + 0x28);
      uVar10 = *(uint *)(lVar16 + 0x18 + lVar14);
      uVar8 = *(undefined8 *)(lVar16 + 8 + lVar14);
      uVar11 = (int)uVar10 >> 0x1f;
      uVar3 = *(undefined8 *)(lVar16 + lVar14);
      uVar9 = FUN_143703a50();
      if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar9,param_2,0x18);
      }
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)(puVar2 + 2) = 0;
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
      }
      iVar13 = iVar13 + 1;
      lVar14 = lVar14 + 0x20;
      puVar2 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      *puVar2 = uVar3;
      puVar2[1] = uVar8;
      *(undefined1 *)(puVar2 + 2) = 1;
      *(uint *)((longlong)puVar2 + 0x14) = (uVar10 ^ uVar11) - uVar11;
    } while (iVar13 < *(int *)(param_1 + 0x30));
    iVar15 = (int)param_2[1];
  }
  return iVar15;
}



// FUNCTION 1437b1a20 FUN_1437b1a20 body=295 status=ok
// SIG undefined FUN_1437b1a20(void)

/* WARNING: Removing unreachable block (ram,0x0001437b1b33) */

longlong * FUN_1437b1a20(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar3 = 0;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)*param_3 * 0x18);
  if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x10 + (longlong)*(int *)*param_3 * 0x18) == '\x02'
      ) && (*(int *)((longlong)plVar1 + 0x14) != 0)) {
    lVar5 = plVar1[1];
    *param_2 = *plVar1;
    param_2[1] = lVar5;
  }
  else {
    lVar5 = *plVar1;
    uVar4 = uVar3;
    if (plVar1[1] != 0) {
      uVar4 = FUN_1437151a0();
    }
    if ((uVar4 & 1) != 0) {
      FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
    }
    if ((lVar5 == 0) && (*(int *)((longlong)plVar1 + 0x14) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((uVar4 & 1) != 0) {
      FUN_143733a60(uVar4 & 0xfffffffffffffffe);
    }
    if (!bVar2) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return param_2;
    }
    plVar1 = (longlong *)
             (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)((longlong)plVar1 + 0x14) * 0x18);
    lVar5 = plVar1[1];
    *param_2 = *plVar1;
    param_2[1] = lVar5;
  }
  if (lVar5 != 0) {
    uVar3 = FUN_1437151a0();
  }
  param_2[2] = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437b1b50 FUN_1437b1b50 body=125 status=ok
// SIG undefined FUN_1437b1b50(void)

undefined8 * FUN_1437b1b50(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = CompatPatcher::VersioningArrayImpl::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x18);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1437b1bd0 FUN_1437b1bd0 body=120 status=ok
// SIG undefined FUN_1437b1bd0(void)

longlong FUN_1437b1bd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1437b86e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x80);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 1437b1c50 FUN_1437b1c50 body=276 status=ok
// SIG undefined FUN_1437b1c50(void)

undefined4 *
FUN_1437b1c50(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if ((param_3 == (int *)0x0) || (iVar2 = *param_3, iVar2 == 0)) {
    *param_5 = 0;
    param_5[1] = 0;
    if ((*(byte *)(param_5 + 2) & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = 0;
    *param_2 = 0;
    return param_2;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x210);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
  if ((*(char *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) == '\x02') &&
     (iVar2 = *(int *)((longlong)puVar1 + 0x14), iVar2 != 0)) {
    lVar5 = *(longlong *)(lVar3 + 8 + (longlong)iVar2 * 0x18);
    uVar6 = *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x18);
    if (lVar5 != 0) {
      uVar4 = FUN_1437151a0(lVar5);
      goto LAB_1437b1ce0;
    }
  }
  else {
    lVar5 = puVar1[1];
    uVar6 = *puVar1;
    if (lVar5 != 0) {
      uVar4 = FUN_1437151a0(lVar5);
      goto LAB_1437b1ce0;
    }
  }
  uVar4 = 0;
LAB_1437b1ce0:
  if ((uVar4 & 1) != 0) {
    FUN_1437329e0(uVar4 & 0xfffffffffffffffe);
  }
  *param_5 = uVar6;
  param_5[1] = lVar5;
  if ((*(byte *)(param_5 + 2) & 1) != 0) {
    FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
  }
  param_5[2] = uVar4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1437b1d70 FUN_1437b1d70 body=144 status=ok
// SIG undefined FUN_1437b1d70(void)

undefined8 * FUN_1437b1d70(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkReflect::Version::PatcherInterface2014::vftable;
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



// FUNCTION 1437b1e00 FUN_1437b1e00 body=353 status=ok
// SIG undefined FUN_1437b1e00(void)

undefined4 *
FUN_1437b1e00(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined1 local_res8 [8];
  undefined8 local_48;
  longlong local_40;
  longlong local_38 [4];
  
  local_38[0] = 0;
  local_38[1] = 0;
  uVar6 = 0;
  local_38[2] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
            (*(longlong **)(param_1 + 0x10),local_res8,param_3,param_4,local_38);
  if (local_38[0] == 0) {
    *param_5 = 0;
    param_5[1] = 0;
    if ((*(byte *)(param_5 + 2) & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = 0;
  }
  else {
    local_48 = 0xffffffffffffffff;
    local_40 = local_38[0];
    piVar5 = (int *)FUN_14372d420(*(longlong *)(param_1 + 0x18) + 0x2a0,&local_40,&local_48);
    iVar1 = *piVar5;
    FUN_1437bdb20(*(undefined8 *)(param_1 + 0x18),local_res8,iVar1);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x210);
    lVar3 = *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x18);
    uVar4 = *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x18);
    if (lVar3 != 0) {
      uVar6 = FUN_1437151a0(lVar3);
    }
    if ((uVar6 & 1) != 0) {
      FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
    }
    *param_5 = uVar4;
    param_5[1] = lVar3;
    if ((*(byte *)(param_5 + 2) & 1) != 0) {
      FUN_143733a60(param_5[2] & 0xfffffffffffffffe);
    }
    param_5[2] = uVar6;
  }
  *param_2 = 0;
  if ((local_38[2] & 1U) != 0) {
    FUN_143733a60(local_38[2] & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437b1f70 FUN_1437b1f70 body=521 status=ok
// SIG undefined FUN_1437b1f70(void)

undefined4 *
FUN_1437b1f70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte local_res8 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_38;
  
  uVar9 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
            (*(longlong **)(param_1 + 0x10),local_res8,param_3,param_4,&local_68);
  puVar6 = (ulonglong *)FUN_143714420(param_4,1);
  uVar7 = uVar9;
  if (puVar6 != (ulonglong *)0x0) {
    uVar7 = *puVar6;
  }
  if ((int)(uVar7 >> 8) < 1) {
    local_78 = 0xffffffffffffffff;
    local_70 = local_68;
    piVar8 = (int *)FUN_14372d420(*(longlong *)(param_1 + 0x18) + 0x2a0,&local_70,&local_78);
    iVar1 = *piVar8;
    FUN_1437bd430(*(undefined8 *)(param_1 + 0x18),local_res8,iVar1);
    puVar11 = (undefined8 *)
              ((longlong)iVar1 * 0x20 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x220));
    uVar7 = puVar11[2];
    uVar3 = *puVar11;
    lVar4 = puVar11[1];
    local_res8[0] = (byte)uVar7 & 1;
    local_38 = uVar7;
    if ((uVar7 & 1) != 0) {
      FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
    }
    uVar2 = *(uint *)(puVar11 + 3);
    uVar10 = (int)uVar2 >> 0x1f;
    uVar5 = 0;
    if (lVar4 != 0) {
      uVar5 = FUN_1437152f0(lVar4);
      local_78 = CONCAT44(local_78._4_4_,uVar5);
      uVar9 = FUN_1437151a0(lVar4);
      if ((uVar9 & 1) != 0) {
        FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
      }
      uVar5 = (undefined4)local_78;
    }
    *(uint *)(param_5 + 2) = (uVar2 ^ uVar10) - uVar10;
    *param_5 = uVar3;
    param_5[1] = lVar4;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = uVar9;
    *param_2 = 0;
    if (local_res8[0] != 0) {
      FUN_143733a60(uVar7 & 0xfffffffffffffffe);
    }
  }
  else {
    *param_5 = local_68;
    param_5[1] = uStack_60;
    *(undefined4 *)(param_5 + 2) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_5 + 0x14) = local_58._4_4_;
    if ((local_50 & 1) != 0) {
      FUN_1437329e0(local_50 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_143733a60(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = local_50;
    *param_2 = 0;
  }
  if ((local_50 & 1) != 0) {
    FUN_143733a60(local_50 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437b2180 FUN_1437b2180 body=139 status=ok
// SIG undefined FUN_1437b2180(void)

longlong FUN_1437b2180(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b82e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x388;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x388);
    }
  }
  return param_1;
}



// FUNCTION 1437b2210 FUN_1437b2210 body=6861 status=ok
// SIG undefined FUN_1437b2210(void)

void FUN_1437b2210(ulonglong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int *piVar16;
  LPVOID pvVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  char *pcVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  byte bVar25;
  uint uVar26;
  int iVar27;
  undefined8 uVar28;
  longlong lVar29;
  longlong *plVar30;
  int iVar31;
  undefined8 uVar32;
  undefined4 *puVar33;
  undefined8 *puVar34;
  longlong lVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  ulonglong local_res8;
  longlong *local_res10;
  longlong *local_res18;
  int local_298;
  longlong local_290;
  uint local_284;
  longlong local_280;
  longlong *local_278;
  int local_270 [2];
  LPVOID local_268;
  undefined8 *local_260;
  undefined8 *puStack_258;
  undefined8 *local_250;
  longlong local_240;
  longlong local_238;
  undefined8 uStack_230;
  longlong local_228;
  int local_220;
  uint local_21c;
  undefined1 local_218 [16];
  longlong local_208;
  int local_200;
  uint local_1fc;
  longlong local_1f8;
  int local_1f0;
  uint local_1ec;
  longlong local_1e8;
  int local_1e0;
  uint local_1dc;
  undefined8 *local_1d8;
  undefined8 *puStack_1d0;
  ulonglong local_1c8;
  undefined4 local_1c0;
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 *local_188;
  undefined1 local_180 [8];
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [8];
  undefined8 *local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  ulonglong local_100;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  
  *(longlong **)(param_1 + 0x1f0) = param_3;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_1437367c0(param_1 + 0x230);
  FUN_14371f300(param_4,&local_178);
  iVar31 = 0;
  plVar30 = local_res18;
  if (0 < (int)((longlong)(int)local_res18[2] * 8 >> 3)) {
    lVar29 = 0;
    do {
      lVar35 = *(longlong *)(lVar29 + plVar30[1]);
      if (lVar35 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(lVar35,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar25 = 0;
        }
        else {
          bVar25 = (byte)*puVar8;
        }
        lVar14 = 0;
        if ((bVar25 & 0xf) == 7) {
          lVar14 = lVar35;
        }
        plVar30 = local_res18;
        if (lVar14 != 0) {
          uVar10 = *(undefined8 *)(lVar29 + local_res18[1]);
          puVar8 = (undefined8 *)FUN_143714490(uVar10,1);
          bVar25 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar25 = (byte)*puVar8;
          }
          uVar32 = 0;
          if ((bVar25 & 0xf) == 7) {
            uVar32 = uVar10;
          }
          puVar9 = (uint *)FUN_143715390(uVar32,&local_268);
          plVar30 = local_res18;
          if ((*puVar9 >> 5 & 1) == 0) {
            FUN_14377b000(param_1 + 0x68,uVar32);
            plVar30 = local_res18;
          }
        }
      }
      iVar31 = iVar31 + 1;
      lVar29 = lVar29 + 8;
    } while (iVar31 < (int)((longlong)(int)plVar30[2] * 8 >> 3));
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 0x80000000;
  (**(code **)(*plVar30 + 0x10))(plVar30,&local_228);
  uStack_230 = local_228 + (longlong)local_220 * 0x18;
  local_1a0 = param_1 + 0x1f8;
  local_238 = local_228;
  FUN_1437bce30(local_1a0,&local_238);
  plVar30 = (longlong *)(param_1 + 0x278);
  iVar31 = 1;
  if (1 < *(int *)(param_1 + 0x218)) {
    iVar31 = *(int *)(param_1 + 0x218);
  }
  local_1a8 = plVar30;
  uVar10 = FUN_143703a50();
  uVar26 = *(uint *)(param_1 + 0x284) & 0x3fffffff;
  if ((int)uVar26 < iVar31) {
    iVar3 = uVar26 * 2;
    iVar27 = iVar31;
    if (iVar31 < iVar3) {
      iVar27 = iVar3;
    }
    FUN_14370c310(uVar10,plVar30,iVar27,4);
  }
  iVar27 = iVar31 - *(int *)(param_1 + 0x280);
  if (0 < iVar27) {
    puVar33 = (undefined4 *)(*plVar30 + (longlong)*(int *)(param_1 + 0x280) * 4);
    for (lVar29 = (longlong)iVar27; lVar29 != 0; lVar29 = lVar29 + -1) {
      *puVar33 = 0;
      puVar33 = puVar33 + 1;
    }
  }
  *(int *)(param_1 + 0x280) = iVar31;
  plVar18 = (longlong *)(param_1 + 0x288);
  iVar31 = 1;
  if (1 < *(int *)(param_1 + 0x228)) {
    iVar31 = *(int *)(param_1 + 0x228);
  }
  uVar10 = FUN_143703a50();
  uVar26 = *(uint *)(param_1 + 0x294) & 0x3fffffff;
  if ((int)uVar26 < iVar31) {
    iVar3 = uVar26 * 2;
    iVar27 = iVar31;
    if (iVar31 < iVar3) {
      iVar27 = iVar3;
    }
    FUN_14370c310(uVar10,plVar18,iVar27,4);
  }
  iVar27 = iVar31 - *(int *)(param_1 + 0x290);
  if (0 < iVar27) {
    puVar33 = (undefined4 *)(*plVar18 + (longlong)*(int *)(param_1 + 0x290) * 4);
    for (lVar29 = (longlong)iVar27; lVar29 != 0; lVar29 = lVar29 + -1) {
      *puVar33 = 0;
      puVar33 = puVar33 + 1;
    }
  }
  *(int *)(param_1 + 0x290) = iVar31;
  *(undefined4 *)*plVar30 = 1;
  iVar31 = 0;
  *(undefined4 *)*plVar18 = 1;
  *(undefined1 *)(param_1 + 0x340) = 0;
  if (0 < (int)((longlong)(int)local_res18[2] * 8 >> 3)) {
    lVar29 = 0;
    do {
      lVar35 = *(longlong *)(lVar29 + local_res18[1]);
      if (lVar35 != 0) {
        puVar8 = (undefined8 *)FUN_143714490(lVar35,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar25 = 0;
        }
        else {
          bVar25 = (byte)*puVar8;
        }
        lVar14 = 0;
        if ((bVar25 & 0xf) == 7) {
          lVar14 = lVar35;
        }
        if (lVar14 != 0) {
          uVar10 = *(undefined8 *)(lVar29 + local_res18[1]);
          puVar8 = (undefined8 *)FUN_143714490(uVar10,1);
          bVar25 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar25 = (byte)*puVar8;
          }
          uVar32 = 0;
          if ((bVar25 & 0xf) == 7) {
            uVar32 = uVar10;
          }
          puVar9 = (uint *)FUN_143715390(uVar32,&local_268);
          if ((*puVar9 >> 5 & 1) == 0) {
            FUN_14377d260(param_1 + 0x68,0,0,uVar32);
          }
        }
      }
      iVar31 = iVar31 + 1;
      lVar29 = lVar29 + 8;
    } while (iVar31 < (int)((longlong)(int)local_res18[2] * 8 >> 3));
  }
  uVar12 = local_res8;
  iVar31 = 0;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar29 = 0;
    do {
      lVar35 = *(longlong *)(lVar29 + 8 + *(longlong *)(uVar12 + 0x210));
      lVar14 = *(longlong *)(lVar29 + *(longlong *)(uVar12 + 0x210));
      if (lVar35 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_1437151a0(lVar35);
      }
      if ((uVar11 & 1) != 0) {
        FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
      }
      if (lVar35 != 0) {
        local_280 = (longlong)iVar31;
        local_240 = lVar14;
        uVar10 = FUN_143703a50();
        FUN_14372d6e0(uVar12 + 0x2a0,uVar10,&local_240,&local_280);
      }
      if ((uVar11 & 1) != 0) {
        FUN_143733a60(uVar11 & 0xfffffffffffffffe);
      }
      iVar31 = iVar31 + 1;
      lVar29 = lVar29 + 0x18;
      param_1 = local_res8;
    } while (iVar31 < *(int *)(uVar12 + 0x218));
  }
  uVar12 = local_res8;
  iVar31 = 0;
  if (0 < *(int *)(param_1 + 0x228)) {
    lVar29 = 0;
    do {
      lVar35 = *(longlong *)(uVar12 + 0x220);
      uVar11 = *(ulonglong *)(lVar29 + 0x10 + lVar35);
      lVar14 = *(longlong *)(lVar29 + lVar35);
      lVar35 = *(longlong *)(lVar29 + 8 + lVar35);
      if ((uVar11 & 1) != 0) {
        FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
      }
      if (lVar35 != 0) {
        local_280 = (longlong)iVar31;
        local_240 = lVar14;
        uVar10 = FUN_143703a50();
        FUN_14372d6e0(uVar12 + 0x2a0,uVar10,&local_240,&local_280);
      }
      if ((uVar11 & 1) != 0) {
        FUN_143733a60(uVar11 & 0xfffffffffffffffe);
      }
      iVar31 = iVar31 + 1;
      lVar29 = lVar29 + 0x20;
      param_1 = local_res8;
    } while (iVar31 < *(int *)(uVar12 + 0x228));
  }
  uVar10 = FUN_143703a50();
  local_220 = 0;
  if (-1 < (int)local_21c) {
    FUN_143702e10(uVar10,local_228,0x18,local_21c & 0x3fffffff);
  }
  local_1b0 = param_1 + 0x68;
  FUN_14377f380(local_1b0,1);
  iVar31 = 0;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar29 = 0;
    local_290 = 0;
    do {
      lVar35 = *(longlong *)(lVar29 + 8 + *(longlong *)(param_1 + 0x210));
      lVar14 = *(longlong *)(lVar29 + *(longlong *)(param_1 + 0x210));
      local_280 = lVar14;
      if (lVar35 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = FUN_1437151a0(lVar35);
      }
      if ((uVar12 & 1) != 0) {
        FUN_1437329e0(uVar12 & 0xfffffffffffffffe);
      }
      if (lVar35 != 0) {
        lVar13 = FUN_143715410(lVar35);
        if ((lVar13 == 0) &&
           (lVar14 = FUN_1436f73d0(lVar14,lVar35), uVar11 = local_res8, lVar14 != 0)) {
          local_280 = FUN_1437b9f40(local_res8,lVar14);
          if (local_280 == 0) {
            FUN_1437bf3f0(uVar11,iVar31);
          }
          else {
            uVar11 = FUN_1437151a0(lVar35);
            if ((uVar11 & 1) != 0) {
              FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
            }
            lVar14 = local_1a0;
            local_250 = (undefined8 *)(((ulonglong)local_250 >> 8 & 0xffffff) << 8);
            local_260 = (undefined8 *)0x0;
            puStack_258 = (undefined8 *)0x0;
            FUN_1437b76f0(local_1a0 + 0x18,iVar31);
            *(longlong *)(lVar29 + *(longlong *)(lVar14 + 0x18)) = local_280;
            *(longlong *)(*(longlong *)(lVar14 + 0x18) + 8 + lVar29) = lVar35;
            if ((uVar11 & 1) != 0) {
              FUN_143733a60(uVar11 & 0xfffffffffffffffe);
            }
            *(undefined4 *)(local_290 + *local_1a8) = 1;
          }
        }
        else {
          puVar8 = (undefined8 *)FUN_143714490(lVar35);
          lVar14 = local_1b0;
          bVar25 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar25 = (byte)*puVar8;
          }
          lVar13 = 0;
          if ((bVar25 & 0xf) == 7) {
            lVar13 = lVar35;
          }
          if (lVar13 != 0) {
            cVar6 = FUN_14377b670(local_1b0);
            puVar9 = (uint *)FUN_143715390(lVar35,&local_268);
            if (((*puVar9 >> 5 & 1) == 0) &&
               (lVar14 = FUN_14377d260(lVar14,0,0,lVar35), lVar14 == 0)) {
              FUN_1437bf3f0(local_res8,iVar31);
            }
            else {
              uVar11 = local_res8;
              if (cVar6 == '\0') {
                lVar35 = FUN_1437bb150(local_res8,lVar35);
                if (lVar35 == 0) {
                  uVar37 = 0;
                }
                else {
                  uVar37 = FUN_1437151a0(lVar35);
                }
                if ((uVar37 & 1) != 0) {
                  FUN_1437329e0(uVar37 & 0xfffffffffffffffe);
                }
                local_250 = (undefined8 *)(((ulonglong)local_250 >> 8 & 0xffffff) << 8);
                local_260 = (undefined8 *)0x0;
                puStack_258 = (undefined8 *)0x0;
                FUN_1437b76f0(uVar11 + 0x210,iVar31);
                *(longlong *)(lVar29 + *(longlong *)(uVar11 + 0x210)) = local_280;
                *(longlong *)(*(longlong *)(uVar11 + 0x210) + 8 + lVar29) = lVar35;
                if ((uVar37 & 1) != 0) {
                  FUN_143733a60(uVar37 & 0xfffffffffffffffe);
                }
              }
              else {
                FUN_1437bdb20(local_res8,local_270);
              }
            }
          }
        }
      }
      if ((uVar12 & 1) != 0) {
        FUN_143733a60(uVar12 & 0xfffffffffffffffe);
      }
      local_290 = local_290 + 4;
      iVar31 = iVar31 + 1;
      lVar29 = lVar29 + 0x18;
      param_1 = local_res8;
    } while (iVar31 < *(int *)(local_res8 + 0x218));
  }
  bVar5 = false;
  local_284 = 0;
  if (0 < *(int *)(param_1 + 0x228)) {
    lVar29 = 0;
    do {
      uVar12 = *(ulonglong *)(lVar29 + 0x10 + *(longlong *)(local_res8 + 0x220));
      lVar35 = *(longlong *)(lVar29 + 8 + *(longlong *)(local_res8 + 0x220));
      if ((uVar12 & 1) != 0) {
        FUN_1437329e0(uVar12 & 0xfffffffffffffffe);
      }
      uVar11 = local_1c8;
      if (lVar35 == 0) {
LAB_1437b2a70:
        bVar4 = false;
      }
      else {
        bVar5 = true;
        uVar11 = *(ulonglong *)(lVar29 + 0x10 + *(longlong *)(local_res8 + 0x220));
        lVar35 = *(longlong *)(lVar29 + 8 + *(longlong *)(local_res8 + 0x220));
        if ((uVar11 & 1) != 0) {
          FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
        }
        puVar8 = (undefined8 *)FUN_143714490(lVar35,1);
        if (puVar8 == (undefined8 *)0x0) {
          bVar25 = 0;
        }
        else {
          bVar25 = (byte)*puVar8;
        }
        lVar14 = 0;
        if ((bVar25 & 0xf) == 3) {
          lVar14 = lVar35;
        }
        if (lVar14 != 0) goto LAB_1437b2a70;
        bVar4 = true;
      }
      if ((bVar5) && (bVar5 = false, (uVar11 & 1) != 0)) {
        FUN_143733a60(uVar11 & 0xfffffffffffffffe);
      }
      if ((uVar12 & 1) != 0) {
        FUN_143733a60(uVar12 & 0xfffffffffffffffe);
      }
      uVar12 = local_res8;
      if (bVar4) {
        lVar35 = *(longlong *)(local_res8 + 0x220);
        uVar11 = *(ulonglong *)(lVar29 + 0x10 + lVar35);
        local_240 = *(longlong *)(lVar29 + lVar35);
        lVar35 = *(longlong *)(lVar29 + 8 + lVar35);
        if ((uVar11 & 1) != 0) {
          FUN_1437329e0(uVar11 & 0xfffffffffffffffe);
        }
        if (((uVar11 & 1) != 0) && (FUN_1437329e0(uVar11 & 0xfffffffffffffffe), (uVar11 & 1) != 0))
        {
          FUN_143733a60(uVar11 & 0xfffffffffffffffe);
        }
        local_280 = *(longlong *)(uVar12 + 0x220) + lVar29;
        uVar12 = *(ulonglong *)(local_280 + 0x10);
        local_100 = uVar12;
        if ((uVar12 & 1) != 0) {
          FUN_1437329e0(uVar12 & 0xfffffffffffffffe);
        }
        uVar26 = (int)*(uint *)(local_280 + 0x18) >> 0x1f;
        local_270[0] = (*(uint *)(local_280 + 0x18) ^ uVar26) - uVar26;
        if ((uVar12 & 1) != 0) {
          FUN_143733a60(uVar12 & 0xfffffffffffffffe);
        }
        if (lVar35 != 0) {
          puVar8 = (undefined8 *)FUN_143714490(lVar35,1);
          bVar25 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            bVar25 = (byte)*puVar8;
          }
          lVar14 = 0;
          if ((bVar25 & 0xf) == 7) {
            lVar14 = lVar35;
          }
          if (lVar14 == 0) {
            puVar8 = (undefined8 *)FUN_143714490(lVar35,1);
            if (puVar8 == (undefined8 *)0x0) {
              bVar25 = 0;
            }
            else {
              bVar25 = (byte)*puVar8;
            }
            lVar14 = 0;
            if ((bVar25 & 0xf) == 6) {
              lVar14 = lVar35;
            }
            if (lVar14 != 0) {
LAB_1437b2c0e:
              FUN_1437bd430(local_res8,local_198,local_284);
              goto LAB_1437b2cf7;
            }
          }
          else {
            puVar9 = (uint *)FUN_143715390(lVar14,&local_268);
            lVar13 = local_1b0;
            if ((*puVar9 >> 5 & 1) == 0) {
              cVar6 = FUN_14377b670(local_1b0,lVar14);
              if (cVar6 != '\0') goto LAB_1437b2c0e;
              lVar14 = FUN_14377d260(lVar13,0,0,lVar14);
              if (lVar14 == 0) {
                FUN_1437bf270(local_res8,local_284);
                goto LAB_1437b2cf7;
              }
            }
          }
          uVar12 = local_res8;
          lVar35 = FUN_1437bb150(local_res8,lVar35);
          if (lVar35 == 0) {
            uVar37 = 0;
          }
          else {
            uVar37 = FUN_1437151a0(lVar35);
          }
          if ((uVar37 & 1) != 0) {
            FUN_1437329e0(uVar37 & 0xfffffffffffffffe);
          }
          local_1c8 = 0;
          local_1d8 = (undefined8 *)0x0;
          puStack_1d0 = (undefined8 *)0x0;
          local_1c0 = 0;
          FUN_1437b7790(uVar12 + 0x220,local_284);
          plVar30 = (longlong *)(*(longlong *)(uVar12 + 0x220) + lVar29);
          *plVar30 = local_240;
          plVar30[1] = lVar35;
          if ((uVar37 & 1) != 0) {
            FUN_1437329e0(uVar37 & 0xfffffffffffffffe);
          }
          if ((*(byte *)(plVar30 + 2) & 1) != 0) {
            FUN_143733a60(plVar30[2] & 0xfffffffffffffffe);
          }
          plVar30[2] = uVar37;
          *(int *)(plVar30 + 3) = local_270[0];
          if ((local_1c8 & 1) != 0) {
            FUN_143733a60(local_1c8 & 0xfffffffffffffffe);
          }
          if ((uVar37 & 1) != 0) {
            FUN_143733a60(uVar37 & 0xfffffffffffffffe);
          }
        }
LAB_1437b2cf7:
        if ((uVar11 & 1) != 0) {
          FUN_143733a60(uVar11 & 0xfffffffffffffffe);
        }
      }
      local_284 = local_284 + 1;
      lVar29 = lVar29 + 0x20;
      param_1 = local_res8;
    } while ((int)local_284 < *(int *)(local_res8 + 0x228));
  }
  lVar29 = param_1 + 0x68;
  FUN_14377f7c0(lVar29);
  local_270[0] = 0;
  if (0 < (int)(local_170 - local_178 >> 3)) {
    local_280 = 0;
    lVar35 = local_178;
    lVar14 = local_170;
    do {
      iVar31 = local_270[0];
      lVar13 = local_280;
      puVar8 = (undefined8 *)0x0;
      plVar30 = *(longlong **)(lVar35 + local_280 * 8);
      local_278 = plVar30;
      if (((int)plVar30[4] < 1) || (*(char *)((longlong)plVar30 + 0x24) == '\0')) {
        local_228 = 0;
        local_220 = 0;
        local_21c = 0x80000000;
        FUN_14377ee10(lVar29,*plVar30,(int)plVar30[2],&local_228);
        local_1a8 = (longlong *)0x0;
        local_284 = 0;
        local_240 = 0;
        puVar20 = puVar8;
        if (0 < local_220) {
          do {
            puVar36 = *(undefined8 **)(local_228 + local_240 * 8);
            uVar10 = *puVar36;
            local_120 = puVar36;
            puVar15 = (undefined8 *)FUN_143714490(uVar10,1);
            bVar25 = 0;
            if (puVar15 != (undefined8 *)0x0) {
              bVar25 = (byte)*puVar15;
            }
            uVar32 = 0;
            if ((bVar25 & 0xf) == 7) {
              uVar32 = uVar10;
            }
            FUN_14377aba0(local_110,plVar30);
            local_298 = 0;
            local_1a0 = 0;
            uVar26 = (uint)puVar20;
            if (0 < (int)plVar30[4]) {
              do {
                piVar16 = (int *)(local_1a0 * 0x10 + plVar30[3]);
                iVar31 = *piVar16;
                if ((iVar31 == 1) &&
                   (puVar20 = *(undefined8 **)(piVar16 + 2), puVar20 != (undefined8 *)0x0)) {
                  if (*(int *)(puVar20 + 1) == 0xb) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = FUN_14377ef20(local_110,puVar20[2]);
                  }
                  FUN_1437ba4d0(param_1,puVar36,uVar32,*puVar20,*(undefined4 *)(puVar20 + 1),
                                puVar20[2],*(undefined4 *)(puVar20 + 3),puVar20[4],uVar7);
                }
                else if ((iVar31 == 2) && (*(undefined8 **)(piVar16 + 2) != (undefined8 *)0x0)) {
                  FUN_1437ba9a0(param_1,puVar36,uVar32,**(undefined8 **)(piVar16 + 2));
                }
                else if ((iVar31 == 10) &&
                        (puVar20 = *(undefined8 **)(piVar16 + 2), puVar20 != (undefined8 *)0x0)) {
                  pvVar17 = TlsGetValue(DAT_146b8198c);
                  if (pvVar17 != (LPVOID)0x0) {
                    FUN_14370d5c0(pvVar17,"TtPATCH_TYPED_MEMBER_ADDED");
                  }
                  FUN_1437bc130(&local_188,uVar32,*puVar20);
                  puVar20 = local_188;
                  uVar11 = 0;
                  local_208 = 0;
                  local_200 = 0;
                  local_1fc = 0x80000000;
                  FUN_1437bb690(local_res8,puVar36);
                  uVar12 = uVar11;
                  if (0 < local_200) {
                    do {
                      lVar29 = local_208;
                      iVar31 = FUN_143715270(&local_188);
                      local_260 = (undefined8 *)((longlong)iVar31 + *(longlong *)(lVar29 + uVar11));
                      puStack_258 = puVar20;
                      if (puVar20 == (undefined8 *)0x0) {
                        local_250 = (undefined8 *)0x0;
                      }
                      else {
                        local_250 = (undefined8 *)FUN_1437151a0(puVar20);
                      }
                      if (((ulonglong)local_250 & 1) != 0) {
                        FUN_1437329e0((ulonglong)local_250 & 0xfffffffffffffffe);
                      }
                      FUN_1437449a0(&local_260);
                      if (((ulonglong)local_250 & 1) != 0) {
                        FUN_143733a60((ulonglong)local_250 & 0xfffffffffffffffe);
                      }
                      uVar26 = (int)uVar12 + 1;
                      uVar11 = uVar11 + 0x18;
                      uVar12 = (ulonglong)uVar26;
                    } while ((int)uVar26 < local_200);
                  }
                  local_200 = 0;
                  if (-1 < (int)local_1fc) {
                    FUN_143702e10(&PTR_vftable_1467f0638,local_208,0x18,local_1fc & 0x3fffffff);
                  }
                  local_208 = 0;
                  local_1fc = 0x80000000;
joined_r0x0001437b2ff3:
                  plVar30 = local_278;
                  if (pvVar17 != (LPVOID)0x0) {
                    FUN_14370d750(pvVar17,&DAT_145b8eda0);
                    plVar30 = local_278;
                  }
                }
                else if ((iVar31 == 0xb) && (*(longlong *)(piVar16 + 2) != 0)) {
                  puVar20 = (undefined8 *)FUN_1437bc130(local_f0,uVar32);
                  FUN_143714060(&local_148,*puVar20);
                  FUN_143714060(&local_140,local_148);
                  puVar20 = (undefined8 *)FUN_1437143d0(local_140,0x80000);
                  *puVar20 = 0;
                }
                else {
                  if ((iVar31 == 8) &&
                     (plVar18 = *(longlong **)(piVar16 + 2), plVar18 != (longlong *)0x0)) {
                    pvVar17 = TlsGetValue(DAT_146b8198c);
                    local_268 = pvVar17;
                    if (pvVar17 != (LPVOID)0x0) {
                      FUN_14370d5c0(pvVar17,"TtPATCH_PARENT_SET");
                    }
                    if (*plVar18 != 0) {
                      if ((puVar8 == (undefined8 *)0x0) && (iVar31 = 0, 0 < *(int *)(puVar36 + 7)))
                      {
                        lVar29 = 0;
                        do {
                          puVar20 = *(undefined8 **)(lVar29 + puVar36[6]);
                          if (puVar20 != (undefined8 *)0x0) {
                            uVar10 = FUN_1437151f0(*puVar20);
                            iVar27 = hkString::strCmp(uVar10,*plVar18);
                            if (iVar27 == 0) {
                              puVar8 = puVar20;
                            }
                          }
                          iVar31 = iVar31 + 1;
                          lVar29 = lVar29 + 8;
                        } while (iVar31 < *(int *)(puVar36 + 7));
                      }
                      uVar10 = *puVar8;
                      puVar20 = (undefined8 *)FUN_143714490(uVar10,1);
                      bVar25 = 0;
                      if (puVar20 != (undefined8 *)0x0) {
                        bVar25 = (byte)*puVar20;
                      }
                      uVar28 = 0;
                      if ((bVar25 & 0xf) == 7) {
                        uVar28 = uVar10;
                      }
                      hkReflect::DeclIterAll::DeclIterAll(&local_260,uVar28);
                      while ((puVar20 = local_260 + 1, local_260 + 1 < puStack_258 ||
                             (cVar6 = FUN_1437144f0(), puVar20 = local_260, cVar6 != '\0'))) {
                        local_260 = puVar20;
                        pbVar21 = (byte *)FUN_143714f30(local_260,local_198);
                        if ((*pbVar21 & 0x20) != 0) {
                          FUN_143714060(local_180,*local_260);
                          pcVar22 = (char *)FUN_1437151c0(local_180);
                          pbVar21 = (byte *)FUN_143714f30(local_180,local_150);
                          if ((((~*pbVar21 & 1) != 0) && (pcVar22 != (char *)0x0)) &&
                             (*pcVar22 != '#')) {
                            puVar20 = (undefined8 *)FUN_1437bc130(local_e0,uVar32);
                            FUN_143714060(&local_138,*puVar20);
                            FUN_143714060(&local_130,local_138);
                            puVar20 = (undefined8 *)FUN_1437143d0(local_130,0x80000);
                            *puVar20 = 0;
                          }
                        }
                      }
                      iVar31 = *(int *)(puVar8 + 9);
                      iVar27 = 0;
                      lVar29 = 0;
                      if (0 < iVar31) {
                        puVar20 = (undefined8 *)puVar8[8];
                        do {
                          if ((undefined8 *)*puVar20 == puVar36) break;
                          iVar27 = iVar27 + 1;
                          lVar29 = lVar29 + 1;
                          puVar20 = puVar20 + 1;
                        } while (iVar27 < iVar31);
                      }
                      if (iVar27 < iVar31) {
                        lVar29 = lVar29 * 8;
                        lVar35 = lVar29;
                        do {
                          lVar14 = puVar8[8];
                          if (*(undefined8 **)(lVar29 + lVar14) == puVar36) {
                            *(int *)(puVar8 + 9) = *(int *)(puVar8 + 9) + -1;
                          }
                          else {
                            iVar27 = iVar27 + 1;
                            *(undefined8 *)(lVar35 + lVar14) = *(undefined8 *)(lVar29 + lVar14);
                            lVar35 = lVar35 + 8;
                          }
                          lVar29 = lVar29 + 8;
                        } while (iVar27 < *(int *)(puVar8 + 9));
                      }
                      FUN_14377f170(puVar36,puVar8);
                    }
                    if (plVar18[1] != 0) {
                      plVar30 = local_1a8;
                      if ((local_1a8 == (longlong *)0x0) && (iVar31 = 0, 0 < *(int *)(puVar36 + 7)))
                      {
                        lVar29 = 0;
                        do {
                          plVar1 = *(longlong **)(lVar29 + puVar36[6]);
                          if (plVar1 != (longlong *)0x0) {
                            uVar10 = FUN_1437151f0(*plVar1);
                            iVar27 = hkString::strCmp(uVar10,plVar18[1]);
                            if (iVar27 == 0) {
                              plVar30 = plVar1;
                            }
                          }
                          iVar31 = iVar31 + 1;
                          lVar29 = lVar29 + 8;
                        } while (iVar31 < *(int *)(puVar36 + 7));
                      }
                      local_1a8 = plVar30;
                      lVar29 = *local_1a8;
                      puVar20 = (undefined8 *)FUN_143714490(lVar29,1);
                      bVar25 = 0;
                      if (puVar20 != (undefined8 *)0x0) {
                        bVar25 = (byte)*puVar20;
                      }
                      local_1f8 = 0;
                      local_1f0 = 0;
                      local_1ec = 0x80000000;
                      lVar35 = 0;
                      if ((bVar25 & 0xf) == 7) {
                        lVar35 = lVar29;
                      }
                      FUN_1437bb690(local_res8,puVar36);
                      iVar31 = 0;
                      if (0 < local_1f0) {
                        lVar29 = 0;
                        do {
                          hkReflect::DeclIterAll::DeclIterAll(&local_1d8,lVar35);
                          while ((puVar20 = local_1d8 + 1, local_1d8 + 1 < puStack_1d0 ||
                                 (cVar6 = FUN_1437144f0(&local_1d8), puVar20 = local_1d8,
                                 cVar6 != '\0'))) {
                            local_1d8 = puVar20;
                            pbVar21 = (byte *)FUN_143714f30(local_1d8,local_14c);
                            puVar20 = local_1d8;
                            if (((*pbVar21 & 0x20) != 0) &&
                               (lVar14 = FUN_1437151c0(local_1d8), lVar14 != 0)) {
                              FUN_1437151c0(puVar20);
                              FUN_1437bc130(local_128,uVar32);
                              lVar14 = local_1f8;
                              puVar20 = (undefined8 *)*puVar20;
                              iVar27 = FUN_143715270(local_128);
                              local_260 = (undefined8 *)
                                          ((longlong)iVar27 + *(longlong *)(lVar14 + lVar29));
                              puStack_258 = puVar20;
                              if (puVar20 == (undefined8 *)0x0) {
                                local_250 = (undefined8 *)0x0;
                              }
                              else {
                                local_250 = (undefined8 *)FUN_1437151a0(puVar20);
                              }
                              if (((ulonglong)local_250 & 1) != 0) {
                                FUN_1437329e0((ulonglong)local_250 & 0xfffffffffffffffe);
                              }
                              FUN_1437449a0(&local_260);
                              if (((ulonglong)local_250 & 1) != 0) {
                                FUN_143733a60((ulonglong)local_250 & 0xfffffffffffffffe);
                              }
                            }
                          }
                          iVar31 = iVar31 + 1;
                          lVar29 = lVar29 + 0x18;
                          puVar36 = local_120;
                        } while (iVar31 < local_1f0);
                      }
                      local_1f0 = 0;
                      if (-1 < (int)local_1ec) {
                        FUN_143702e10(&PTR_vftable_1467f0638,local_1f8,0x18,local_1ec & 0x3fffffff);
                      }
                      local_1f8 = 0;
                      local_1ec = 0x80000000;
                      pvVar17 = local_268;
                    }
                    goto joined_r0x0001437b2ff3;
                  }
                  if ((iVar31 == 4) &&
                     (puVar20 = *(undefined8 **)(piVar16 + 2), plVar30 = local_278,
                     puVar20 != (undefined8 *)0x0)) {
                    pvVar17 = TlsGetValue(DAT_146b8198c);
                    if (pvVar17 != (LPVOID)0x0) {
                      FUN_14370d5c0(pvVar17,"TtPATCH_MEMBER_DEFAULT_SET");
                    }
                    puVar15 = (undefined8 *)FUN_1437bc130(local_d8,uVar32,*puVar20);
                    FUN_143714060(&local_118,*puVar15);
                    FUN_14377c230(local_118,local_1b0,0x4000,puVar20[1]);
                    FUN_14374ac50(uVar32,*puVar20);
                    plVar30 = local_278;
                    if (pvVar17 != (LPVOID)0x0) {
                      FUN_14370d750(pvVar17,&DAT_145b8eda0);
                      plVar30 = local_278;
                    }
                  }
                  else {
                    if ((iVar31 == 5) && (lVar29 = *(longlong *)(piVar16 + 2), lVar29 != 0)) {
                      pvVar17 = TlsGetValue(DAT_146b8198c);
                      if (pvVar17 != (LPVOID)0x0) {
                        FUN_14370d5c0(pvVar17,"TtPATCH_DATAOBJECT_FUNCTION");
                      }
                      local_1dc = 0x80000000;
                      local_1e8 = 0;
                      local_1e0 = 0;
                      FUN_1437bb690(param_1,puVar36);
                      hkCachedHashMap<hkStringMapOperations,hkBuiltinContainerAllocator<0,0>_>::
                      clear(param_1 + 0x368);
                      FUN_14377b170(param_1 + 0x368,plVar30);
                      iVar31 = 0;
                      if (0 < local_1e0) {
                        lVar35 = 0;
                        do {
                          puStack_258 = (undefined8 *)*puVar36;
                          local_268 = (LPVOID)CONCAT44(local_268._4_4_,
                                                       *(undefined4 *)(local_1e8 + 0x10 + lVar35));
                          local_260 = *(undefined8 **)(local_1e8 + lVar35);
                          if (puStack_258 == (undefined8 *)0x0) {
                            local_250 = (undefined8 *)0x0;
                          }
                          else {
                            local_250 = (undefined8 *)FUN_1437151a0();
                          }
                          if (((ulonglong)local_250 & 1) != 0) {
                            FUN_1437329e0((ulonglong)local_250 & 0xfffffffffffffffe);
                          }
                          FUN_1437b80d0(&local_1d8,&local_260,param_1,&local_268);
                          (**(code **)(lVar29 + 8))(&local_1d8);
                          FUN_1437b87d0(&local_1d8);
                          iVar31 = iVar31 + 1;
                          lVar35 = lVar35 + 0x18;
                        } while (iVar31 < local_1e0);
                      }
                      local_1e0 = 0;
                      if (-1 < (int)local_1dc) {
                        FUN_143702e10(&PTR_vftable_1467f0638,local_1e8,0x18,local_1dc & 0x3fffffff);
                      }
                      local_1e8 = 0;
                      local_1dc = 0x80000000;
                      goto joined_r0x0001437b2ff3;
                    }
                    if ((iVar31 == 3) && (*(longlong *)(piVar16 + 2) != 0)) {
                      uVar10 = *(undefined8 *)(*(longlong *)(piVar16 + 2) + 8);
                      puVar20 = (undefined8 *)FUN_1437bc130(local_d0,uVar32);
                      FUN_143714060(&local_168,*puVar20);
                      FUN_143714060(&local_160,local_168);
                      puVar20 = (undefined8 *)FUN_1437143d0(local_160,0x80000);
                      *puVar20 = uVar10;
                    }
                    else {
                      puVar15 = (undefined8 *)0x0;
                      puVar20 = puVar15;
                      if (iVar31 == 0xc) {
                        puVar20 = *(undefined8 **)(piVar16 + 2);
                      }
                      plVar30 = local_278;
                      if (puVar20 != (undefined8 *)0x0) {
                        FUN_143745310(&local_c8,*puVar20);
                        FUN_143745710(&local_c8,&DAT_145b8fcbc,0xffffffff);
                        uVar10 = local_c8;
                        puVar23 = (undefined8 *)FUN_1437bc130(local_e8,uVar32,*puVar20);
                        FUN_143714060(&local_158,*puVar23);
                        FUN_143714060(&local_190,local_158);
                        puVar23 = (undefined8 *)FUN_1437143d0(local_190,0x80000);
                        *puVar23 = uVar10;
                        uVar7 = FUN_14377ef20(local_110,puVar20[4]);
                        FUN_1437ba4d0(param_1,puVar36,uVar32,*puVar20,
                                      *(undefined4 *)((longlong)puVar20 + 0x1c),puVar20[4],
                                      *(undefined4 *)(puVar20 + 5),0,uVar7);
                        local_238 = 0;
                        uStack_230 = -0x8000000000000000;
                        FUN_1437bb690(param_1,puVar36,&local_238);
                        puVar23 = puVar15;
                        puVar34 = puVar15;
                        if (0 < (int)uStack_230) {
                          do {
                            puStack_258 = (undefined8 *)*puVar36;
                            local_268 = (LPVOID)CONCAT44(local_268._4_4_,
                                                         *(undefined4 *)
                                                          (local_238 + 0x10 + (longlong)puVar34));
                            local_260 = *(undefined8 **)(local_238 + (longlong)puVar34);
                            puVar24 = puVar15;
                            if (puStack_258 != (undefined8 *)0x0) {
                              puVar24 = (undefined8 *)FUN_1437151a0();
                            }
                            local_250 = puVar24;
                            if (((ulonglong)puVar24 & 1) != 0) {
                              FUN_1437329e0((ulonglong)puVar24 & 0xfffffffffffffffe);
                            }
                            FUN_1437b80d0(&local_1d8,&local_260,param_1,&local_268);
                            (*(code *)puVar20[6])(&local_1d8,local_c8,*puVar20);
                            FUN_1437b87d0(&local_1d8);
                            uVar26 = (int)puVar23 + 1;
                            puVar23 = (undefined8 *)(ulonglong)uVar26;
                            puVar34 = puVar34 + 3;
                          } while ((int)uVar26 < (int)uStack_230);
                        }
                        FUN_1437ba9a0(param_1,puVar36,uVar32,local_c8);
                        lVar29 = uStack_230;
                        uVar26 = uStack_230._4_4_;
                        uStack_230 = (ulonglong)uStack_230._4_4_ << 0x20;
                        if (-1 < lVar29) {
                          FUN_143702e10(&PTR_vftable_1467f0638,local_238,0x18,uVar26 & 0x3fffffff);
                        }
                        local_238 = 0;
                        uStack_230 = CONCAT44(0x80000000,(int)uStack_230);
                        local_c0 = 0;
                        plVar30 = local_278;
                        if (-1 < (int)local_bc) {
                          FUN_143702e10(&PTR_vftable_1467f0638,local_c8,1,local_bc & 0x3fffffff);
                          plVar30 = local_278;
                        }
                      }
                    }
                  }
                }
                local_298 = local_298 + 1;
                local_1a0 = local_1a0 + 1;
                param_1 = local_res8;
                uVar26 = local_284;
              } while (local_298 < (int)plVar30[4]);
            }
            lVar29 = *plVar30;
            if (lVar29 != 0) {
              uVar10 = FUN_1437151f0(*puVar36);
              iVar31 = hkString::strCmp(uVar10,lVar29);
              if (iVar31 == 0) {
                iVar31 = *(int *)((longlong)plVar30 + 0x14);
                plVar18 = (longlong *)FUN_1437143d0(*puVar36,0x10);
                *plVar18 = (longlong)iVar31;
              }
            }
            if (((plVar30[1] != 0) && (*plVar30 != 0)) && (iVar31 = hkString::strCmp(), iVar31 != 0)
               ) {
              uVar10 = FUN_1437151f0(*puVar36);
              iVar31 = hkString::strCmp(uVar10,*plVar30);
              if (iVar31 == 0) {
                FUN_14377f200(puVar36,*plVar30);
              }
            }
            FUN_14373bf70(local_110);
            local_284 = uVar26 + 1;
            puVar20 = (undefined8 *)(ulonglong)local_284;
            local_240 = local_240 + 1;
            lVar13 = local_280;
            lVar29 = local_1b0;
            param_1 = local_res8;
            iVar31 = local_270[0];
          } while ((int)local_284 < local_220);
        }
        local_220 = 0;
        if (-1 < (int)local_21c) {
          FUN_143702e10(&PTR_vftable_1467f0638,local_228,8,local_21c & 0x3fffffff);
        }
        local_228 = 0;
        local_21c = 0x80000000;
        lVar35 = local_178;
        lVar14 = local_170;
      }
      local_270[0] = iVar31 + 1;
      local_280 = lVar13 + 1;
      param_1 = local_res8;
    } while (local_270[0] < (int)(lVar14 - lVar35 >> 3));
  }
  uVar12 = local_res8;
  uVar11 = 0;
  *(undefined1 *)(local_res8 + 0x340) = 1;
  FUN_1437bb570(local_res8);
  local_228 = 0;
  local_220 = 0;
  local_21c = 0x80000000;
  FUN_143734b10(local_218);
  FUN_1437bf070(uVar12 + 0x1f8,0,0);
  local_res8 = local_res8 & 0xffffffff00000000;
  local_190 = 0;
  FUN_1436e7110(&local_228,&local_190,&local_res8);
  if (0 < *(int *)(uVar12 + 0x218)) {
    lVar29 = 0;
    uVar37 = uVar11;
    do {
      uVar26 = *(uint *)(lVar29 + *(longlong *)(uVar12 + 0x278));
      if ((int)uVar26 < 0) {
        FUN_1437bf0f0(uVar12 + 0x1f8,uVar11,
                      *(longlong *)(uVar12 + 0x348) + (longlong)(int)~uVar26 * 0x18);
      }
      lVar35 = *(longlong *)(uVar37 + 8 + *(longlong *)(uVar12 + 0x210));
      if (lVar35 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = FUN_1437151a0(lVar35);
      }
      if ((uVar19 & 1) != 0) {
        FUN_1437329e0(uVar19 & 0xfffffffffffffffe);
      }
      if ((lVar35 == 0) || (iVar31 = FUN_143715430(lVar35), iVar31 != -1)) {
        FUN_1437be280(uVar12,&local_228,lVar35);
      }
      else {
        local_250 = (undefined8 *)(((ulonglong)local_250 >> 8 & 0xffffff) << 8);
        local_260 = (undefined8 *)0x0;
        puStack_258 = (undefined8 *)0x0;
        FUN_1437b76f0(uVar12 + 0x210,uVar11,&local_260);
        *(undefined8 *)(uVar37 + *(longlong *)(uVar12 + 0x210)) = 0;
        *(undefined8 *)(uVar37 + 8 + *(longlong *)(uVar12 + 0x210)) = 0;
      }
      if ((uVar19 & 1) != 0) {
        FUN_143733a60(uVar19 & 0xfffffffffffffffe);
      }
      uVar26 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar26;
      lVar29 = lVar29 + 4;
      uVar37 = uVar37 + 0x18;
    } while ((int)uVar26 < *(int *)(uVar12 + 0x218));
  }
  uVar19 = 0;
  uVar11 = uVar19;
  uVar37 = uVar19;
  if (0 < *(int *)(uVar12 + 0x228)) {
    do {
      uVar26 = *(uint *)(uVar37 + *(longlong *)(uVar12 + 0x288));
      if ((int)uVar26 < 0) {
        FUN_1437bf160(uVar12 + 0x1f8,uVar19,
                      (longlong)(int)~uVar26 * 0x20 + *(longlong *)(uVar12 + 0x358));
      }
      uVar2 = *(ulonglong *)(uVar11 + 0x10 + *(longlong *)(uVar12 + 0x220));
      lVar29 = *(longlong *)(uVar11 + 8 + *(longlong *)(uVar12 + 0x220));
      if ((uVar2 & 1) != 0) {
        FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
      }
      if ((lVar29 == 0) || (iVar31 = FUN_143715430(lVar29), iVar31 != -1)) {
        FUN_1437be280(uVar12,&local_228,lVar29);
      }
      else {
        local_1d8 = DAT_146b82728;
        puStack_1d0 = DAT_146b82730;
        local_1c8 = DAT_146b82738;
        if ((DAT_146b82738 & 1) != 0) {
          FUN_1437329e0(DAT_146b82738 & 0xfffffffffffffffe);
        }
        local_1c0 = DAT_146b82740;
        FUN_1437bf160(uVar12 + 0x1f8,uVar19,&local_1d8);
        if ((local_1c8 & 1) != 0) {
          FUN_143733a60(local_1c8 & 0xfffffffffffffffe);
        }
      }
      if ((uVar2 & 1) != 0) {
        FUN_143733a60(uVar2 & 0xfffffffffffffffe);
      }
      uVar26 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar26;
      uVar11 = uVar11 + 0x20;
      uVar37 = uVar37 + 4;
    } while ((int)uVar26 < *(int *)(uVar12 + 0x228));
  }
  thunk_FUN_143734820(local_218);
  uVar10 = FUN_143703a50();
  local_220 = 0;
  if (-1 < (int)local_21c) {
    FUN_143702e10(uVar10,local_228,0x10,local_21c & 0x3fffffff);
  }
  *local_res10 = uVar12 + 0x1f8;
  return;
}



// FUNCTION 1437b3cf0 FUN_1437b3cf0 body=421 status=ok
// SIG undefined FUN_1437b3cf0(void)

ulonglong FUN_1437b3cf0(ulonglong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong uVar8;
  
  uVar8 = 0;
  bVar7 = 0;
  bVar1 = 0;
  uVar5 = uVar8;
  if (param_1[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar2 = bVar1;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar5 = 0;
    if ((bVar2 & 0xf) == 4) {
      uVar9 = *param_1;
      uVar4 = param_1[1];
      if ((param_1[2] & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_1[2];
      if (uVar9 != 0) {
        local_38 = 0;
        uStack_30 = uStack_30 & 0xffffffffffffff00;
        (**(code **)(*(longlong *)(uVar5 & 0xfffffffffffffffe) + 0x38))
                  ((longlong *)(uVar5 & 0xfffffffffffffffe),local_res8,uVar9,uVar4,&local_38);
        uVar8 = local_38 & 0xffffffff;
        if ((char)uStack_30 != '\0') {
          uVar8 = (ulonglong)(uint)-(int)local_38;
        }
        goto LAB_1437b3e65;
      }
    }
  }
  uVar9 = param_1[1];
  puVar3 = (undefined8 *)FUN_143714490(uVar9,1);
  if (puVar3 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar3;
  }
  uVar4 = uVar8;
  if ((bVar1 & 0xf) == 2) {
    uVar4 = uVar9;
  }
  if (uVar4 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    uVar4 = uStack_30;
    uVar9 = local_38;
    uVar10 = uVar8;
    if (param_1[1] != 0) {
      puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar3 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar3;
      }
      uVar4 = uStack_30;
      uVar9 = local_38;
      if ((bVar7 & 0xf) == 2) {
        uVar9 = *param_1;
        uVar4 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar10 = param_1[2];
      }
    }
    local_res8[0] = 0;
    plVar6 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x38))(plVar6,local_res10,uVar9,uVar4,local_res8);
    uVar8 = (ulonglong)local_res8[0];
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(plVar6);
    }
  }
LAB_1437b3e65:
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  return uVar8;
}



// FUNCTION 1437b3ea0 FUN_1437b3ea0 body=404 status=ok
// SIG undefined FUN_1437b3ea0(void)

ulonglong FUN_1437b3ea0(ulonglong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar9;
  ulonglong uVar10;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong uVar8;
  
  uVar8 = 0;
  bVar7 = 0;
  bVar1 = 0;
  uVar5 = uVar8;
  if (param_1[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar2 = bVar1;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar5 = 0;
    if ((bVar2 & 0xf) == 4) {
      uVar9 = *param_1;
      uVar4 = param_1[1];
      if ((param_1[2] & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_1[2];
      if (uVar9 != 0) {
        local_38 = 0;
        uStack_30 = uStack_30 & 0xffffffffffffff00;
        (**(code **)(*(longlong *)(uVar5 & 0xfffffffffffffffe) + 0x38))
                  ((longlong *)(uVar5 & 0xfffffffffffffffe),local_res8,uVar9,uVar4,&local_38);
        uVar8 = local_38 & 0xffffffff;
        goto LAB_1437b4004;
      }
    }
  }
  uVar9 = param_1[1];
  puVar3 = (undefined8 *)FUN_143714490(uVar9,1);
  if (puVar3 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar3;
  }
  uVar4 = uVar8;
  if ((bVar1 & 0xf) == 2) {
    uVar4 = uVar9;
  }
  if (uVar4 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    uVar4 = uStack_30;
    uVar9 = local_38;
    uVar10 = uVar8;
    if (param_1[1] != 0) {
      puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar3 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar3;
      }
      uVar4 = uStack_30;
      uVar9 = local_38;
      if ((bVar7 & 0xf) == 2) {
        uVar9 = *param_1;
        uVar4 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar10 = param_1[2];
      }
    }
    local_res8[0] = 0;
    plVar6 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x38))(plVar6,local_res10,uVar9,uVar4,local_res8);
    uVar8 = (ulonglong)local_res8[0];
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(plVar6);
    }
  }
LAB_1437b4004:
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  return uVar8;
}



// FUNCTION 1437b4040 FUN_1437b4040 body=424 status=ok
// SIG undefined FUN_1437b4040(void)

ulonglong FUN_1437b4040(ulonglong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  ulonglong local_38;
  ulonglong uStack_30;
  
  uVar8 = 0;
  bVar7 = 0;
  bVar1 = 0;
  uVar5 = uVar8;
  if (param_1[1] != 0) {
    puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar2 = bVar1;
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = (byte)*puVar3;
    }
    uVar5 = 0;
    if ((bVar2 & 0xf) == 4) {
      uVar9 = *param_1;
      uVar4 = param_1[1];
      if ((param_1[2] & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar5 = param_1[2];
      if (uVar9 != 0) {
        local_38 = 0;
        uStack_30 = uStack_30 & 0xffffffffffffff00;
        (**(code **)(*(longlong *)(uVar5 & 0xfffffffffffffffe) + 0x38))
                  ((longlong *)(uVar5 & 0xfffffffffffffffe),local_res8,uVar9,uVar4,&local_38);
        uVar8 = local_38;
        if ((char)uStack_30 != '\0') {
          uVar8 = -local_38;
        }
        goto LAB_1437b41b7;
      }
    }
  }
  uVar9 = param_1[1];
  puVar3 = (undefined8 *)FUN_143714490(uVar9,1);
  if (puVar3 != (undefined8 *)0x0) {
    bVar1 = (byte)*puVar3;
  }
  uVar4 = uVar8;
  if ((bVar1 & 0xf) == 2) {
    uVar4 = uVar9;
  }
  if (uVar4 != 0) {
    local_38 = 0;
    uStack_30 = 0;
    uVar4 = uStack_30;
    uVar9 = local_38;
    uVar10 = uVar8;
    if (param_1[1] != 0) {
      puVar3 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar3 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar3;
      }
      uVar4 = uStack_30;
      uVar9 = local_38;
      if ((bVar7 & 0xf) == 2) {
        uVar9 = *param_1;
        uVar4 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar10 = param_1[2];
      }
    }
    local_res8[0] = 0;
    plVar6 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar6 + 0x38))(plVar6,local_res10,uVar9,uVar4,local_res8);
    uVar8 = (ulonglong)local_res8[0];
    if ((uVar10 & 1) != 0) {
      FUN_143733a60(plVar6);
    }
  }
LAB_1437b41b7:
  if ((uVar5 & 1) != 0) {
    FUN_143733a60(uVar5 & 0xfffffffffffffffe);
  }
  return uVar8;
}



// FUNCTION 1437b41f0 FUN_1437b41f0 body=70 status=ok
// SIG undefined FUN_1437b41f0(void)

void FUN_1437b41f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1,0x70);
  if (lVar1 != 0) {
    FUN_143736ce0(lVar1,param_2,param_3,0);
    return;
  }
  return;
}



// FUNCTION 1437b4240 FUN_1437b4240 body=101 status=ok
// SIG undefined FUN_1437b4240(void)

undefined8 * FUN_1437b4240(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    hkReflect::Detail::Impl::Impl(puVar1);
    puVar1[2] = param_2;
    *puVar1 = CompatPatcher::ForwardingArrayImpl::vftable;
    puVar1[3] = param_3;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1437b42b0 FUN_1437b42b0 body=101 status=ok
// SIG undefined FUN_1437b42b0(void)

undefined8 * FUN_1437b42b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x20);
  if (puVar1 != (undefined8 *)0x0) {
    hkReflect::Detail::Impl::Impl(puVar1);
    puVar1[2] = param_2;
    *puVar1 = CompatPatcher::ForwardingPointerImpl::vftable;
    puVar1[3] = param_3;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1437b4320 FUN_1437b4320 body=6249 status=ok
// SIG undefined FUN_1437b4320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001437b567d) */
/* WARNING: Removing unreachable block (ram,0x0001437b5696) */

undefined8
FUN_1437b4320(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  byte *pbVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  double dVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 *puVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  uchar *puVar17;
  undefined8 uVar18;
  uint uVar19;
  float *pfVar20;
  undefined2 *puVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  double *pdVar24;
  longlong lVar25;
  undefined8 uVar26;
  double *pdVar27;
  longlong *plVar28;
  WriteBytesMem *this;
  longlong *plVar29;
  ulonglong *puVar30;
  uint uVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  double *pdVar34;
  double *pdVar35;
  float *pfVar36;
  undefined4 *puVar37;
  undefined4 *puVar38;
  short *psVar39;
  short *psVar40;
  ulonglong uVar41;
  int iVar42;
  longlong lVar43;
  uint uVar44;
  ulonglong uVar45;
  bool bVar46;
  float fVar47;
  undefined8 in_stack_ffffffffffffd280;
  undefined4 uVar48;
  ulonglong in_stack_ffffffffffffd288;
  ulonglong in_stack_ffffffffffffd290;
  byte local_2d54 [4];
  WriteBytesMem *local_2d50;
  longlong *local_2d48;
  longlong local_2d40;
  longlong local_2d38;
  byte local_2d30;
  longlong *local_2d28;
  ulonglong local_2d20;
  double *local_2d18;
  int local_2d10;
  longlong *local_2d08;
  longlong *local_2cf8;
  uint uStack_2cf0;
  undefined4 uStack_2cec;
  ulonglong local_2ce8;
  WriteBytesMem *local_2cd8;
  undefined8 local_2cd0;
  double *local_2cc8;
  undefined1 local_2cc0 [4];
  int local_2cbc;
  int local_2cb8;
  byte *local_2cb0;
  int local_2c90;
  int local_2c8c;
  undefined1 local_2c88 [16];
  longlong *local_2c78;
  uint uStack_2c70;
  undefined4 uStack_2c6c;
  ulonglong local_2c68;
  undefined1 local_2c58 [4];
  undefined1 local_2c54 [4];
  undefined1 *local_2c50;
  uint local_2c48;
  uint local_2c44;
  undefined1 local_2c40 [3080];
  double local_2038 [1028];
  
  local_2c50 = local_2c40;
  local_2c48 = 0;
  local_2c44 = 0x80000040;
  local_2d10 = 0;
  if (0 < param_9) {
    uVar41 = (ulonglong)param_7;
    do {
      local_2d38 = local_2d10 * (int)uVar41 + param_3;
      local_2d40 = (int)(local_2d10 * param_8) + param_5;
      uVar8 = param_9 - local_2d10;
      if (0x400 < param_9 - local_2d10) {
        uVar8 = 0x400;
      }
      local_2cb8 = 0;
      lVar25 = local_2d40;
      lVar43 = local_2d38;
LAB_1437b43ef:
      for (; uVar48 = (undefined4)((ulonglong)in_stack_ffffffffffffd280 >> 0x20),
          local_2cb8 != (int)param_2[1]; local_2cb8 = local_2cb8 + 1) {
        this = (WriteBytesMem *)((longlong)local_2cb8 * 0x30 + *param_2);
        uVar44 = 0;
        if (lVar43 != 0) {
          uVar44 = (uint)*(ushort *)(this + 4);
        }
        pdVar24 = (double *)((int)uVar44 + lVar43);
        uVar44 = 0;
        if (lVar25 != 0) {
          uVar44 = (uint)*(ushort *)(this + 2);
        }
        pdVar27 = (double *)((int)uVar44 + local_2d40);
        local_2d50 = this;
        local_2d18 = pdVar24;
        switch(*this) {
        case (WriteBytesMem)0x1:
          FUN_1436f7090(this,&local_2cf8,pdVar24);
          FUN_1436f70e0(this,&local_2cd8,pdVar27);
          if ((int)uVar8 < 1) {
            if (((ulonglong)local_2cc8 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            }
            if ((local_2ce8 & 1) == 0) break;
            goto LAB_1437b44aa;
          }
          if (((ulonglong)local_2cc8 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2cc8 & 0xfffffffffffffffe);
          }
          if ((local_2ce8 & 1) != 0) {
            FUN_1437329e0(local_2ce8 & 0xfffffffffffffffe);
          }
          cVar10 = FUN_143755360(0x3d485f34,
                                 "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                 ,0x1c8,"hkTypeVm::FastCopyInterpreter::execArray",&DAT_145af3922,
                                 "Not implemented",&DAT_145b909f0,0);
          if (cVar10 != '\0') {
            pcVar7 = (code *)swi(3);
            uVar26 = (*pcVar7)();
            return uVar26;
          }
          if ((local_2ce8 & 1) != 0) {
            FUN_143733a60(local_2ce8 & 0xfffffffffffffffe);
          }
          if ((((ulonglong)local_2cc8 & 1) != 0) &&
             (FUN_143733a60((ulonglong)local_2cc8 & 0xfffffffffffffffe),
             ((ulonglong)local_2cc8 & 1) != 0)) {
            FUN_143733a60((ulonglong)local_2cc8 & 0xfffffffffffffffe);
          }
          if ((local_2ce8 & 1) == 0) goto LAB_1437b58d3;
          FUN_143733a60(local_2ce8 & 0xfffffffffffffffe);
          uVar26 = 0x80040200;
          goto LAB_1437b5ad1;
        case (WriteBytesMem)0x2:
          FUN_1436f7090(this,&local_2cd8,pdVar24);
          FUN_1436f70e0(this,&local_2cf8,pdVar27);
          uVar26 = local_2cd0;
          iVar12 = 0;
          local_2d20 = local_2ce8;
          local_2d18 = local_2cc8;
          if (0 < (int)uVar8) {
            uVar18 = CONCAT44(uStack_2cec,uStack_2cf0);
            local_2d48 = (longlong *)(local_2ce8 & 0xfffffffffffffffe);
            local_2d08 = (longlong *)((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            local_2d50 = local_2cd8;
            local_2d28 = local_2cf8;
            do {
              local_2d54[0] = 0;
              (**(code **)(*local_2d48 + 0x38))(local_2d48,local_2c58,local_2d28,uVar18,local_2d54);
              (**(code **)(*local_2d08 + 0x30))
                        (local_2d08,&local_2c90,local_2d50,uVar26,local_2d54[0]);
              if (local_2c90 < 0) goto LAB_1437b58af;
              iVar12 = iVar12 + 1;
              local_2d50 = local_2d50 + (int)param_7;
              local_2d28 = (longlong *)((longlong)local_2d28 + (longlong)(int)param_8);
            } while (iVar12 < (int)uVar8);
          }
          goto LAB_1437b45cf;
        case (WriteBytesMem)0x3:
          FUN_1436f7090(this,&local_2cd8,pdVar24);
          FUN_1436f70e0(this,&local_2cf8,pdVar27);
          uVar26 = local_2cd0;
          iVar12 = 0;
          local_2d20 = local_2ce8;
          local_2d18 = local_2cc8;
          if (0 < (int)uVar8) {
            uVar18 = CONCAT44(uStack_2cec,uStack_2cf0);
            local_2d48 = (longlong *)(local_2ce8 & 0xfffffffffffffffe);
            local_2d08 = (longlong *)((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            local_2d50 = local_2cd8;
            local_2d28 = local_2cf8;
            do {
              local_2c78 = (longlong *)0x0;
              uStack_2c70 = uStack_2c70 & 0xffffff00;
              (**(code **)(*local_2d48 + 0x38))(local_2d48,local_2c54,local_2d28,uVar18,&local_2c78)
              ;
              local_2cf8 = local_2c78;
              uStack_2cf0 = uStack_2c70;
              uStack_2cec = uStack_2c6c;
              (**(code **)(*local_2d08 + 0x30))
                        (local_2d08,&local_2c8c,local_2d50,uVar26,&local_2cf8);
              if (local_2c8c < 0) goto LAB_1437b58af;
              iVar12 = iVar12 + 1;
              local_2d50 = local_2d50 + (int)param_7;
              local_2d28 = (longlong *)((longlong)local_2d28 + (longlong)(int)param_8);
            } while (iVar12 < (int)uVar8);
          }
          goto LAB_1437b45cf;
        case (WriteBytesMem)0x4:
          FUN_1436f7090(this,&local_2cd8,pdVar24);
          FUN_1436f70e0(this,&local_2cf8,pdVar27);
          uVar26 = local_2cd0;
          local_2d20 = local_2ce8;
          iVar12 = 0;
          local_2d18 = local_2cc8;
          if (0 < (int)uVar8) {
            uVar18 = CONCAT44(uStack_2cec,uStack_2cf0);
            local_2cb0 = (byte *)(local_2ce8 & 0xfffffffffffffffe);
            local_2d08 = (longlong *)((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            local_2d50 = local_2cd8;
            local_2d48 = local_2cf8;
            do {
              local_2d28 = (longlong *)0x0;
              (**(code **)(*(longlong *)local_2cb0 + 0x38))
                        (local_2cb0,local_2c88,local_2d48,uVar18,&local_2d28);
              (**(code **)(*local_2d08 + 0x30))(local_2d08,&local_2cbc,local_2d50,uVar26,local_2d28)
              ;
              if (local_2cbc < 0) goto LAB_1437b58af;
              iVar12 = iVar12 + 1;
              local_2d50 = local_2d50 + (int)param_7;
              local_2d48 = (longlong *)((longlong)local_2d48 + (longlong)(int)param_8);
            } while (iVar12 < (int)uVar8);
          }
LAB_1437b45cf:
          pdVar24 = local_2d18;
          if ((local_2d20 & 1) != 0) {
            FUN_143733a60();
          }
          if (((ulonglong)pdVar24 & 1) != 0) {
LAB_1437b44aa:
            FUN_143733a60();
          }
          break;
        case (WriteBytesMem)0x5:
          FUN_1436f7090(this,&local_2c78,pdVar24);
          FUN_1436f70e0(this,&local_2cd8,pdVar27);
          if (((ulonglong)local_2cc8 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2cc8 & 0xfffffffffffffffe);
          }
          if ((local_2c68 & 1) != 0) {
            FUN_1437329e0(local_2c68 & 0xfffffffffffffffe);
          }
          cVar10 = FUN_143755360(0x2ecb65d7,
                                 "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Common/Base/Reflect/TypeVm/hkTypeVmFastCopyInterpreter.inl"
                                 ,0xb1,"hkTypeVm::FastCopyInterpreter::execPointer",&DAT_145af3922,
                                 "Not implemented",&DAT_145b909f0,0);
          if (cVar10 != '\0') {
            pcVar7 = (code *)swi(3);
            uVar26 = (*pcVar7)();
            return uVar26;
          }
          if ((local_2c68 & 1) != 0) {
            FUN_143733a60(local_2c68 & 0xfffffffffffffffe);
          }
          if ((((ulonglong)local_2cc8 & 1) != 0) &&
             (FUN_143733a60((ulonglong)local_2cc8 & 0xfffffffffffffffe),
             ((ulonglong)local_2cc8 & 1) != 0)) {
            FUN_143733a60((ulonglong)local_2cc8 & 0xfffffffffffffffe);
          }
          if ((local_2c68 & 1) == 0) goto LAB_1437b58d3;
          FUN_143733a60(local_2c68 & 0xfffffffffffffffe);
          uVar26 = 0x80040200;
          goto LAB_1437b5ad1;
        case (WriteBytesMem)0x6:
          uVar26 = *(undefined8 *)(this + 0x10);
          FUN_1437152f0(uVar26);
          uVar18 = FUN_1436f9ee0(this);
          FUN_1437152f0(uVar18);
          uVar18 = *(undefined8 *)(this + 0x20);
          uVar14 = FUN_1437152f0(uVar26);
          FUN_1436f9ee0(local_2d50);
          uVar15 = FUN_1437152f0();
          lVar25 = local_2d40;
          in_stack_ffffffffffffd290 = in_stack_ffffffffffffd290 & 0xffffffff00000000;
          in_stack_ffffffffffffd288 = in_stack_ffffffffffffd288 & 0xffffffff00000000;
          in_stack_ffffffffffffd280 = CONCAT44(uVar48,uVar14);
          iVar12 = FUN_1437b4320(local_2cc0,uVar18,local_2d38,uVar15,local_2d40,
                                 in_stack_ffffffffffffd280,in_stack_ffffffffffffd288,
                                 in_stack_ffffffffffffd290,1);
          if (-1 < iVar12) goto code_r0x0001437b5798;
          goto LAB_1437b5b7f;
        case (WriteBytesMem)0x7:
          iVar12 = local_2c48 + uVar8;
          uVar26 = FUN_143703a50();
          if ((int)(local_2c44 & 0x3fffffff) < iVar12) {
            iVar13 = (local_2c44 & 0x3fffffff) * 2;
            if (iVar12 < iVar13) {
              iVar12 = iVar13;
            }
            FUN_14370c310(uVar26,&local_2c50,iVar12,0x30);
          }
          if ((int)uVar8 < 1) break;
          iVar13 = 0;
          iVar12 = 0;
          local_2d48 = (longlong *)((ulonglong)local_2d48 & 0xffffffff00000000);
          local_2d28 = (longlong *)((ulonglong)local_2d28 & 0xffffffff00000000);
          local_2d20 = (ulonglong)uVar8;
          do {
            iVar42 = 0;
            if (pdVar24 != (double *)0x0) {
              iVar42 = iVar12;
            }
            FUN_1436f7090(local_2d50,&local_2cd8,(longlong)iVar42 + (longlong)pdVar24);
            iVar12 = 0;
            if (pdVar27 != (double *)0x0) {
              iVar12 = iVar13;
            }
            FUN_1436f70e0(local_2d50,&local_2cf8,(longlong)iVar12 + (longlong)pdVar27);
            uVar41 = local_2ce8;
            local_2d30 = (byte)local_2ce8 & 1;
            if ((local_2ce8 & 1) != 0) {
              FUN_1437329e0(local_2ce8 & 0xfffffffffffffffe);
            }
            pdVar24 = local_2cc8;
            local_2d54[0] = (byte)local_2cc8 & 1;
            if (((ulonglong)local_2cc8 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            }
            if (local_2d54[0] != 0) {
              FUN_143733a60((ulonglong)pdVar24 & 0xfffffffffffffffe);
            }
            if (local_2d30 != 0) {
              FUN_143733a60(uVar41 & 0xfffffffffffffffe);
            }
            uVar26 = FUN_143703a50();
            if (local_2c48 == (local_2c44 & 0x3fffffff)) {
              FUN_14370c460(uVar26,&local_2c50,0x30);
            }
            puVar16 = (undefined8 *)(local_2c50 + (longlong)(int)local_2c48 * 0x30);
            if (puVar16 != (undefined8 *)0x0) {
              *puVar16 = 0;
              puVar16[1] = 0;
              puVar16[2] = 0;
              puVar16[3] = 0;
              puVar16[4] = 0;
              puVar16[5] = 0;
            }
            lVar25 = (longlong)(int)local_2c48;
            local_2c48 = local_2c48 + 1;
            FUN_1436fa270(local_2c50 + lVar25 * 0x30,&local_2cd8,&local_2cf8);
            if ((local_2ce8 & 1) != 0) {
              FUN_143733a60(local_2ce8 & 0xfffffffffffffffe);
            }
            if (((ulonglong)local_2cc8 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2cc8 & 0xfffffffffffffffe);
            }
            uVar41 = (ulonglong)param_7;
            iVar12 = (int)local_2d28 + param_7;
            iVar13 = (int)local_2d48 + param_8;
            local_2d20 = local_2d20 - 1;
            local_2d28 = (longlong *)CONCAT44(local_2d28._4_4_,iVar12);
            local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,iVar13);
            pdVar24 = local_2d18;
          } while (local_2d20 != 0);
          local_2d20 = 0;
          lVar43 = local_2d38;
          goto switchD_1437b4458_default;
        case (WriteBytesMem)0x8:
          uVar44 = *(uint *)(this + 0x10);
          if ((uVar44 == (uint)uVar41) && (uVar44 == param_8)) {
            FUN_14370c700(pdVar24,pdVar27,uVar44 * uVar8);
          }
          else {
            lVar43 = local_2d38;
            if ((int)uVar8 < 1) goto switchD_1437b4458_default;
            uVar45 = (ulonglong)uVar8;
            do {
              if (0 < (longlong)(int)uVar44) {
                pdVar34 = pdVar24;
                lVar25 = (longlong)(int)uVar44;
                do {
                  *(undefined1 *)pdVar34 =
                       *(undefined1 *)(((longlong)pdVar27 - (longlong)pdVar24) + (longlong)pdVar34);
                  pdVar34 = (double *)((longlong)pdVar34 + 1);
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
              }
              pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)(uint)uVar41);
              pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)param_8);
              uVar45 = uVar45 - 1;
            } while (uVar45 != 0);
          }
          break;
        case (WriteBytesMem)0x9:
          uVar26 = FUniqueNetIdString::GetBytes(this);
          puVar30 = (ulonglong *)FUN_143714420(uVar26,1);
          if (puVar30 == (ulonglong *)0x0) {
            uVar41 = 0;
          }
          else {
            uVar41 = *puVar30;
          }
          puVar17 = AK::WriteBytesMem::Bytes(local_2d50);
          puVar30 = (ulonglong *)FUN_143714420(puVar17,1);
          if (puVar30 == (ulonglong *)0x0) {
            uVar45 = 0;
          }
          else {
            uVar45 = *puVar30;
          }
          uVar31 = ((uint)(uVar45 >> 10) & 0x3fffff) + 7 >> 3;
          uVar23 = (ulonglong)uVar31;
          uVar44 = ((uint)(uVar41 >> 10) & 0x3fffff) + 7 >> 3;
          local_2d54[0] = ((byte)(uVar45 >> 8) & 1) != ((byte)(uVar41 >> 8) & 1);
          local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,uVar31);
          iVar12 = uVar44 - uVar31;
          local_2d28 = (longlong *)CONCAT44(local_2d28._4_4_,iVar12);
          if (iVar12 < 1) {
            if ((uVar45 & 0x100) != 0) {
              pdVar27 = (double *)((longlong)pdVar27 + (longlong)-iVar12);
            }
            if ((bool)local_2d54[0]) {
              uVar41 = (ulonglong)uVar8;
              if (0 < (int)uVar8) {
                do {
                  if (uVar44 == 1) {
                    *(undefined1 *)pdVar24 = *(undefined1 *)pdVar27;
                  }
                  else if (uVar44 == 2) {
                    *(ushort *)pdVar24 = *(ushort *)pdVar27 >> 8 | *(ushort *)pdVar27 << 8;
                  }
                  else if (uVar44 == 4) {
                    fVar47 = *(float *)pdVar27;
                    *(uint *)pdVar24 =
                         (uint)fVar47 >> 0x18 | ((uint)fVar47 & 0xff0000) >> 8 |
                         ((uint)fVar47 & 0xff00) << 8 | (int)fVar47 << 0x18;
                  }
                  else if (uVar44 == 8) {
                    dVar6 = *pdVar27;
                    *pdVar24 = (double)((ulonglong)dVar6 >> 0x38 |
                                        ((ulonglong)dVar6 & 0xff000000000000) >> 0x28 |
                                        ((ulonglong)dVar6 & 0xff0000000000) >> 0x18 |
                                        ((ulonglong)dVar6 & 0xff00000000) >> 8 |
                                        ((ulonglong)dVar6 & 0xff000000) << 8 |
                                        ((ulonglong)dVar6 & 0xff0000) << 0x18 |
                                        ((ulonglong)dVar6 & 0xff00) << 0x28 |
                                       (longlong)dVar6 << 0x38);
                  }
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)param_8);
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_7);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else {
              uVar41 = (ulonglong)(int)param_7;
              if ((uVar44 == param_7) && (uVar44 == param_8)) {
                FUN_14370c700(pdVar24,pdVar27,uVar44 * uVar8);
              }
              else {
                lVar43 = local_2d38;
                if ((int)uVar8 < 1) goto switchD_1437b4458_default;
                uVar45 = (ulonglong)uVar8;
                do {
                  if ((ulonglong)uVar44 != 0) {
                    pdVar34 = pdVar24;
                    uVar23 = (ulonglong)uVar44;
                    do {
                      *(undefined1 *)pdVar34 =
                           *(undefined1 *)
                            (((longlong)pdVar27 - (longlong)pdVar24) + (longlong)pdVar34);
                      pdVar34 = (double *)((longlong)pdVar34 + 1);
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                  pdVar24 = (double *)((longlong)pdVar24 + uVar41);
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)param_8);
                  uVar45 = uVar45 - 1;
                } while (uVar45 != 0);
              }
            }
          }
          else {
            local_2d08 = (longlong *)0x1;
            local_2d18 = (double *)0x0;
            local_2d20 = (ulonglong)(int)(uVar31 - 1);
            if ((uVar41 & 0x100) != 0) {
              local_2d18 = (double *)(longlong)iVar12;
              local_2d20 = (ulonglong)uVar31;
              local_2d08 = (longlong *)(longlong)-iVar12;
            }
            if (0 < (int)uVar8) {
              local_2cf8 = (longlong *)(uVar45 >> 9 & 0x7fffff);
              local_2d50 = (WriteBytesMem *)(ulonglong)uVar8;
              do {
                puVar30 = (ulonglong *)((longlong)local_2d18 + (longlong)pdVar24);
                pbVar1 = (byte *)(local_2d20 + (longlong)pdVar24);
                local_2cb0 = (byte *)((longlong)local_2d08 + (longlong)pbVar1);
                iVar13 = (int)uVar23;
                if (local_2d54[0] == 0) {
                  if (iVar13 == 0) {
                    FUN_14370c700(puVar30,pdVar27);
                    iVar12 = (int)local_2d28;
                  }
                  else if (0 < (longlong)uVar23) {
                    lVar25 = (longlong)pdVar27 - (longlong)puVar30;
                    do {
                      *(undefined1 *)puVar30 = *(undefined1 *)(lVar25 + (longlong)puVar30);
                      puVar30 = (ulonglong *)((longlong)puVar30 + 1);
                      uVar23 = uVar23 - 1;
                    } while (uVar23 != 0);
                  }
                }
                else if (iVar13 == 1) {
                  *(undefined1 *)puVar30 = *(undefined1 *)pdVar27;
                }
                else if (iVar13 == 2) {
                  *(ushort *)puVar30 = *(ushort *)pdVar27 >> 8 | *(ushort *)pdVar27 << 8;
                }
                else if (iVar13 == 4) {
                  fVar47 = *(float *)pdVar27;
                  *(uint *)puVar30 =
                       (uint)fVar47 >> 0x18 | ((uint)fVar47 & 0xff0000) >> 8 |
                       ((uint)fVar47 & 0xff00) << 8 | (int)fVar47 << 0x18;
                }
                else if (iVar13 == 8) {
                  dVar6 = *pdVar27;
                  *puVar30 = (ulonglong)dVar6 >> 0x38 |
                             ((ulonglong)dVar6 & 0xff000000000000) >> 0x28 |
                             ((ulonglong)dVar6 & 0xff0000000000) >> 0x18 |
                             ((ulonglong)dVar6 & 0xff00000000) >> 8 |
                             ((ulonglong)dVar6 & 0xff000000) << 8 |
                             ((ulonglong)dVar6 & 0xff0000) << 0x18 |
                             ((ulonglong)dVar6 & 0xff00) << 0x28 | (longlong)dVar6 << 0x38;
                }
                if (((ulonglong)local_2cf8 & 1) != 0) {
                  FUN_14370c720(local_2cb0,-((*pbVar1 & 0x80) != 0),iVar12);
                }
                uVar23 = (ulonglong)(int)local_2d48;
                pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_7);
                pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)param_8);
                local_2d50 = (WriteBytesMem *)((longlong)local_2d50 - 1);
                iVar12 = (int)local_2d28;
              } while (local_2d50 != (WriteBytesMem *)0x0);
              local_2d50 = (WriteBytesMem *)0x0;
            }
          }
          break;
        case (WriteBytesMem)0xa:
          uVar26 = FUniqueNetIdString::GetBytes(this);
          puVar16 = (undefined8 *)FUN_143714420(uVar26,1);
          if (puVar16 == (undefined8 *)0x0) {
            local_2d50 = (WriteBytesMem *)0x0;
          }
          else {
            local_2d50 = (WriteBytesMem *)*puVar16;
          }
          puVar17 = AK::WriteBytesMem::Bytes(this);
          puVar30 = (ulonglong *)FUN_143714420(puVar17,1);
          if (puVar30 == (ulonglong *)0x0) {
            uVar41 = 0;
          }
          else {
            uVar41 = *puVar30;
          }
          lVar25 = (longlong)(int)param_8;
          uVar44 = (uint)uVar41;
          pdVar34 = local_2038;
          if ((uVar41 & 0x100) == 0) {
            pdVar34 = pdVar27;
          }
          bVar46 = (uVar41 & 0x100) != 0;
          uVar31 = param_8;
          if (bVar46) {
            uVar31 = 8;
          }
          local_2d28 = (longlong *)CONCAT44(local_2d28._4_4_,uVar31);
          if (bVar46) {
            pdVar35 = local_2038;
            uVar19 = ((uint)(uVar41 >> 0xb) & 0x1f) + 7 +
                     ((uint)(uVar41 >> 10) & 1) + ((uint)(uVar41 >> 0x10) & 0xff) >> 3;
            if (uVar19 == 1) {
              if (0 < (int)uVar8) {
                uVar41 = (ulonglong)uVar8;
                do {
                  uVar2 = *(undefined1 *)pdVar27;
                  pdVar27 = (double *)((longlong)pdVar27 + lVar25);
                  *(undefined1 *)pdVar35 = uVar2;
                  pdVar35 = pdVar35 + 1;
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar19 == 2) {
              if (0 < (int)uVar8) {
                uVar41 = (ulonglong)uVar8;
                do {
                  uVar5 = *(ushort *)pdVar27;
                  pdVar27 = (double *)((longlong)pdVar27 + lVar25);
                  *(ushort *)pdVar35 = uVar5 >> 8 | uVar5 << 8;
                  uVar41 = uVar41 - 1;
                  pdVar35 = pdVar35 + 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar19 == 4) {
              if (0 < (int)uVar8) {
                uVar41 = (ulonglong)uVar8;
                do {
                  fVar47 = *(float *)pdVar27;
                  pdVar27 = (double *)((longlong)pdVar27 + lVar25);
                  *(uint *)pdVar35 =
                       (uint)fVar47 >> 0x18 | ((uint)fVar47 & 0xff0000) >> 8 |
                       ((uint)fVar47 & 0xff00) << 8 | (int)fVar47 << 0x18;
                  uVar41 = uVar41 - 1;
                  pdVar35 = pdVar35 + 1;
                } while (uVar41 != 0);
              }
            }
            else if ((uVar19 == 8) && (0 < (int)uVar8)) {
              uVar41 = (ulonglong)uVar8;
              do {
                dVar6 = *pdVar27;
                pdVar27 = (double *)((longlong)pdVar27 + lVar25);
                *pdVar35 = (double)((ulonglong)dVar6 >> 0x38 |
                                    ((ulonglong)dVar6 & 0xff000000000000) >> 0x28 |
                                    ((ulonglong)dVar6 & 0xff0000000000) >> 0x18 |
                                    ((ulonglong)dVar6 & 0xff00000000) >> 8 |
                                    ((ulonglong)dVar6 & 0xff000000) << 8 |
                                    ((ulonglong)dVar6 & 0xff0000) << 0x18 |
                                    ((ulonglong)dVar6 & 0xff00) << 0x28 | (longlong)dVar6 << 0x38);
                uVar41 = uVar41 - 1;
                pdVar35 = pdVar35 + 1;
              } while (uVar41 != 0);
            }
            uVar44 = uVar44 & 0xfffffeff;
          }
          pdVar27 = local_2038;
          if (((ulonglong)local_2d50 & 0x100) == 0) {
            pdVar27 = pdVar24;
          }
          uVar19 = param_7;
          if (((ulonglong)local_2d50 & 0x100) != 0) {
            uVar19 = 8;
          }
          uVar11 = (uint)local_2d50 & 0xfffffeff;
          if (uVar44 == 0x74605) {
            if (uVar11 == 0x74605) {
              if (0 < (int)uVar8) {
                uVar41 = (ulonglong)uVar8;
                do {
                  uVar4 = *(undefined2 *)pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  *(undefined2 *)pdVar27 = uVar4;
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar11 == 0x174605) {
              if (0 < (int)uVar8) {
                uVar41 = (ulonglong)uVar8;
                do {
                  sVar3 = *(short *)pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  *(int *)pdVar27 = (int)sVar3 << 0x10;
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar11 == 0x345e05) {
              iVar12 = 0;
              if (3 < (int)uVar8) {
                lVar25 = (longlong)(int)uVar31;
                uVar44 = (uVar8 - 4 >> 2) + 1;
                lVar43 = (longlong)(int)uVar19;
                uVar41 = (ulonglong)uVar44;
                iVar12 = uVar44 * 4;
                do {
                  *pdVar27 = (double)(float)((int)*(short *)pdVar34 << 0x10);
                  psVar39 = (short *)((longlong)pdVar34 + lVar25 + lVar25);
                  *(double *)((longlong)pdVar27 + lVar43) =
                       (double)(float)((int)*(short *)((longlong)pdVar34 + lVar25) << 0x10);
                  pdVar27 = (double *)((longlong)pdVar27 + lVar43 + lVar43);
                  psVar40 = (short *)((longlong)psVar39 + lVar25);
                  *pdVar27 = (double)(float)((int)*psVar39 << 0x10);
                  pdVar27 = (double *)((longlong)pdVar27 + lVar43);
                  pdVar34 = (double *)((longlong)psVar40 + lVar25);
                  fVar47 = (float)((int)*psVar40 << 0x10);
                  local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,fVar47);
                  *pdVar27 = (double)fVar47;
                  pdVar27 = (double *)((longlong)pdVar27 + lVar43);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (iVar12 < (int)uVar8) {
                uVar41 = (ulonglong)(uVar8 - iVar12);
                do {
                  sVar3 = *(short *)pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,(int)sVar3 << 0x10);
                  *pdVar27 = (double)(float)((int)sVar3 << 0x10);
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
          }
          else if (uVar44 == 0x174605) {
            if (uVar11 == 0x74605) {
              iVar12 = 0;
              if (3 < (int)uVar8) {
                lVar25 = (longlong)(int)uVar31;
                uVar44 = (uVar8 - 4 >> 2) + 1;
                lVar43 = (longlong)(int)uVar19;
                uVar41 = (ulonglong)uVar44;
                iVar12 = uVar44 * 4;
                do {
                  *(short *)pdVar27 = (short)((uint)(*(float *)pdVar34 * 1.0039062) >> 0x10);
                  pfVar20 = (float *)((longlong)pdVar34 + lVar25 + lVar25);
                  *(undefined2 *)((longlong)pdVar27 + lVar43) =
                       (short)((uint)(*(float *)((longlong)pdVar34 + lVar25) * 1.0039062) >> 0x10);
                  puVar21 = (undefined2 *)((longlong)pdVar27 + lVar43 + lVar43);
                  pfVar36 = (float *)((longlong)pfVar20 + lVar25);
                  *puVar21 = (short)((uint)(*pfVar20 * 1.0039062) >> 0x10);
                  puVar21 = (undefined2 *)((longlong)puVar21 + lVar43);
                  pdVar34 = (double *)((longlong)pfVar36 + lVar25);
                  fVar47 = *pfVar36 * 1.0039062;
                  local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,fVar47);
                  *puVar21 = (short)((uint)fVar47 >> 0x10);
                  pdVar27 = (double *)((longlong)puVar21 + lVar43);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (iVar12 < (int)uVar8) {
                uVar41 = (ulonglong)(uVar8 - iVar12);
                do {
                  fVar47 = *(float *)pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,fVar47 * 1.0039062);
                  *(short *)pdVar27 = (short)((uint)(fVar47 * 1.0039062) >> 0x10);
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar11 == 0x174605) {
              iVar12 = 0;
              if (3 < (int)uVar8) {
                lVar25 = (longlong)(int)uVar31;
                uVar44 = (uVar8 - 4 >> 2) + 1;
                lVar43 = (longlong)(int)uVar19;
                uVar41 = (ulonglong)uVar44;
                iVar12 = uVar44 * 4;
                do {
                  *(float *)pdVar27 = *(float *)pdVar34;
                  puVar37 = (undefined4 *)((longlong)pdVar34 + lVar25 + lVar25);
                  *(undefined4 *)((longlong)pdVar27 + lVar43) =
                       *(undefined4 *)((longlong)pdVar34 + lVar25);
                  puVar22 = (undefined4 *)((longlong)pdVar27 + lVar43 + lVar43);
                  puVar38 = (undefined4 *)((longlong)puVar37 + lVar25);
                  *puVar22 = *puVar37;
                  puVar22 = (undefined4 *)((longlong)puVar22 + lVar43);
                  pdVar34 = (double *)((longlong)puVar38 + lVar25);
                  *puVar22 = *puVar38;
                  pdVar27 = (double *)((longlong)puVar22 + lVar43);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (iVar12 < (int)uVar8) {
                uVar41 = (ulonglong)(uVar8 - iVar12);
                do {
                  fVar47 = *(float *)pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  *(float *)pdVar27 = fVar47;
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar11 == 0x345e05) {
              iVar12 = 0;
              if (3 < (int)uVar8) {
                lVar25 = (longlong)(int)uVar31;
                uVar44 = (uVar8 - 4 >> 2) + 1;
                lVar43 = (longlong)(int)uVar19;
                uVar41 = (ulonglong)uVar44;
                iVar12 = uVar44 * 4;
                do {
                  *pdVar27 = (double)*(float *)pdVar34;
                  pfVar20 = (float *)((longlong)pdVar34 + lVar25 + lVar25);
                  *(double *)((longlong)pdVar27 + lVar43) =
                       (double)*(float *)((longlong)pdVar34 + lVar25);
                  pdVar27 = (double *)((longlong)pdVar27 + lVar43 + lVar43);
                  pfVar36 = (float *)((longlong)pfVar20 + lVar25);
                  *pdVar27 = (double)*pfVar20;
                  pdVar27 = (double *)((longlong)pdVar27 + lVar43);
                  pdVar34 = (double *)((longlong)pfVar36 + lVar25);
                  *pdVar27 = (double)*pfVar36;
                  pdVar27 = (double *)((longlong)pdVar27 + lVar43);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (iVar12 < (int)uVar8) {
                uVar41 = (ulonglong)(uVar8 - iVar12);
                do {
                  fVar47 = *(float *)pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  *pdVar27 = (double)fVar47;
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
          }
          else if (uVar44 == 0x345e05) {
            if (uVar11 == 0x74605) {
              iVar12 = 0;
              if (3 < (int)uVar8) {
                lVar25 = (longlong)(int)uVar31;
                uVar44 = (uVar8 - 4 >> 2) + 1;
                lVar43 = (longlong)(int)uVar19;
                uVar41 = (ulonglong)uVar44;
                iVar12 = uVar44 * 4;
                do {
                  *(short *)pdVar27 = (short)((uint)((float)*pdVar34 * 1.0039062) >> 0x10);
                  pdVar35 = (double *)((longlong)pdVar34 + lVar25 + lVar25);
                  *(undefined2 *)((longlong)pdVar27 + lVar43) =
                       (short)((uint)((float)*(double *)((longlong)pdVar34 + lVar25) * 1.0039062) >>
                              0x10);
                  puVar21 = (undefined2 *)((longlong)pdVar27 + lVar43 + lVar43);
                  pdVar27 = (double *)((longlong)pdVar35 + lVar25);
                  *puVar21 = (short)((uint)((float)*pdVar35 * 1.0039062) >> 0x10);
                  puVar21 = (undefined2 *)((longlong)puVar21 + lVar43);
                  pdVar34 = (double *)((longlong)pdVar27 + lVar25);
                  fVar47 = (float)*pdVar27 * 1.0039062;
                  local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,fVar47);
                  *puVar21 = (short)((uint)fVar47 >> 0x10);
                  pdVar27 = (double *)((longlong)puVar21 + lVar43);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (iVar12 < (int)uVar8) {
                uVar41 = (ulonglong)(uVar8 - iVar12);
                do {
                  dVar6 = *pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  local_2d48 = (longlong *)CONCAT44(local_2d48._4_4_,(float)dVar6 * 1.0039062);
                  *(short *)pdVar27 = (short)((uint)((float)dVar6 * 1.0039062) >> 0x10);
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar11 == 0x174605) {
              iVar12 = 0;
              if (3 < (int)uVar8) {
                lVar25 = (longlong)(int)uVar31;
                uVar44 = (uVar8 - 4 >> 2) + 1;
                lVar43 = (longlong)(int)uVar19;
                uVar41 = (ulonglong)uVar44;
                iVar12 = uVar44 * 4;
                do {
                  *(float *)pdVar27 = (float)*pdVar34;
                  pdVar35 = (double *)((longlong)pdVar34 + lVar25 + lVar25);
                  *(float *)((longlong)pdVar27 + lVar43) =
                       (float)*(double *)((longlong)pdVar34 + lVar25);
                  pfVar20 = (float *)((longlong)pdVar27 + lVar43 + lVar43);
                  pdVar27 = (double *)((longlong)pdVar35 + lVar25);
                  *pfVar20 = (float)*pdVar35;
                  pfVar20 = (float *)((longlong)pfVar20 + lVar43);
                  pdVar34 = (double *)((longlong)pdVar27 + lVar25);
                  *pfVar20 = (float)*pdVar27;
                  pdVar27 = (double *)((longlong)pfVar20 + lVar43);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (iVar12 < (int)uVar8) {
                uVar41 = (ulonglong)(uVar8 - iVar12);
                do {
                  dVar6 = *pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  *(float *)pdVar27 = (float)dVar6;
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar11 == 0x345e05) {
              iVar12 = 0;
              if (3 < (int)uVar8) {
                lVar25 = (longlong)(int)uVar31;
                uVar44 = (uVar8 - 4 >> 2) + 1;
                lVar43 = (longlong)(int)uVar19;
                uVar41 = (ulonglong)uVar44;
                iVar12 = uVar44 * 4;
                do {
                  *pdVar27 = *pdVar34;
                  puVar32 = (undefined8 *)((longlong)pdVar34 + lVar25 + lVar25);
                  *(undefined8 *)((longlong)pdVar27 + lVar43) =
                       *(undefined8 *)((longlong)pdVar34 + lVar25);
                  puVar16 = (undefined8 *)((longlong)pdVar27 + lVar43 + lVar43);
                  puVar33 = (undefined8 *)((longlong)puVar32 + lVar25);
                  *puVar16 = *puVar32;
                  puVar16 = (undefined8 *)((longlong)puVar16 + lVar43);
                  pdVar34 = (double *)((longlong)puVar33 + lVar25);
                  *puVar16 = *puVar33;
                  pdVar27 = (double *)((longlong)puVar16 + lVar43);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
              if (iVar12 < (int)uVar8) {
                uVar41 = (ulonglong)(uVar8 - iVar12);
                do {
                  dVar6 = *pdVar34;
                  pdVar34 = (double *)((longlong)pdVar34 + (longlong)(int)uVar31);
                  *pdVar27 = dVar6;
                  pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)uVar19);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
          }
          if (((ulonglong)local_2d50 & 0x100) != 0) {
            pdVar27 = local_2038;
            uVar44 = ((uint)local_2d50 >> 0xb & 0x1f) + 7 +
                     ((uint)((ulonglong)local_2d50 >> 10) & 1) +
                     ((uint)((ulonglong)local_2d50 >> 0x10) & 0xff) >> 3;
            if (uVar44 == 1) {
              uVar41 = (ulonglong)uVar8;
              if (0 < (int)uVar8) {
                do {
                  uVar2 = *(undefined1 *)pdVar27;
                  pdVar27 = pdVar27 + 1;
                  *(undefined1 *)pdVar24 = uVar2;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_7);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar44 == 2) {
              uVar41 = (ulonglong)uVar8;
              if (0 < (int)uVar8) {
                do {
                  uVar5 = *(ushort *)pdVar27;
                  pdVar27 = pdVar27 + 1;
                  *(ushort *)pdVar24 = uVar5 >> 8 | uVar5 << 8;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_7);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if (uVar44 == 4) {
              uVar41 = (ulonglong)uVar8;
              if (0 < (int)uVar8) {
                do {
                  uVar44 = *(uint *)pdVar27;
                  pdVar27 = pdVar27 + 1;
                  *(uint *)pdVar24 =
                       uVar44 >> 0x18 | (uVar44 & 0xff0000) >> 8 | (uVar44 & 0xff00) << 8 |
                       uVar44 << 0x18;
                  pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_7);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
              }
            }
            else if ((uVar44 == 8) && (uVar41 = (ulonglong)uVar8, 0 < (int)uVar8)) {
              do {
                dVar6 = *pdVar27;
                pdVar27 = pdVar27 + 1;
                *pdVar24 = (double)((ulonglong)dVar6 >> 0x38 |
                                    ((ulonglong)dVar6 & 0xff000000000000) >> 0x28 |
                                    ((ulonglong)dVar6 & 0xff0000000000) >> 0x18 |
                                    ((ulonglong)dVar6 & 0xff00000000) >> 8 |
                                    ((ulonglong)dVar6 & 0xff000000) << 8 |
                                    ((ulonglong)dVar6 & 0xff0000) << 0x18 |
                                    ((ulonglong)dVar6 & 0xff00) << 0x28 | (longlong)dVar6 << 0x38);
                pdVar24 = (double *)((longlong)pdVar24 + (longlong)(int)param_7);
                uVar41 = uVar41 - 1;
              } while (uVar41 != 0);
            }
          }
          break;
        case (WriteBytesMem)0xb:
          uVar26 = *(undefined8 *)(this + 0x10);
          FUN_1437152f0(uVar26);
          FUN_1437152f0(*(undefined8 *)(local_2d50 + 0x18));
          iVar12 = FUN_1437152f0(uVar26);
          iVar13 = FUN_1437152f0();
          iVar42 = 0;
          pdVar24 = local_2d18;
          if ((int)uVar8 < 1) break;
          do {
            if (iVar12 == 1) {
              bVar46 = *(char *)pdVar27 == '\0';
            }
            else if (iVar12 == 2) {
              bVar46 = *(short *)pdVar27 == 0;
            }
            else if (iVar12 == 4) {
              bVar46 = *(float *)pdVar27 == 0.0;
            }
            else {
              bVar46 = *pdVar27 == 0.0;
            }
            bVar46 = !bVar46;
            if (iVar13 == 1) {
              *(bool *)pdVar24 = bVar46;
            }
            else if (iVar13 == 2) {
              *(ushort *)pdVar24 = (ushort)bVar46;
            }
            else if (iVar13 == 4) {
              *(uint *)pdVar24 = (uint)bVar46;
            }
            else {
              *pdVar24 = (double)(ulonglong)bVar46;
            }
            uVar41 = (ulonglong)(int)param_7;
            iVar42 = iVar42 + 1;
            pdVar27 = (double *)((longlong)pdVar27 + (longlong)(int)param_8);
            pdVar24 = (double *)((longlong)pdVar24 + uVar41);
            lVar43 = local_2d38;
          } while (iVar42 < (int)uVar8);
        default:
          goto switchD_1437b4458_default;
        }
        uVar41 = (ulonglong)param_7;
        lVar43 = local_2d38;
switchD_1437b4458_default:
        lVar25 = local_2d40;
      }
      local_2d10 = local_2d10 + uVar8;
    } while (local_2d10 < param_9);
  }
  local_2d10 = 0;
  if (0 < (int)local_2c48) {
    lVar25 = 0;
    do {
      puVar9 = local_2c50;
      local_2cb0 = *(byte **)(local_2c50 + lVar25 + 0x18);
      uVar41 = *(ulonglong *)(local_2c50 + lVar25 + 0x28);
      local_2cf8 = *(longlong **)(local_2c50 + lVar25 + 0x20);
      local_2d30 = (byte)uVar41 & 1;
      if ((uVar41 & 1) != 0) {
        FUN_1437329e0(uVar41 & 0xfffffffffffffffe);
      }
      local_2d08 = *(longlong **)(puVar9 + lVar25);
      local_2d18 = *(double **)(puVar9 + lVar25 + 8);
      uVar45 = *(ulonglong *)(puVar9 + lVar25 + 0x10);
      if ((uVar45 & 1) != 0) {
        FUN_1437329e0(uVar45 & 0xfffffffffffffffe);
      }
      plVar28 = (longlong *)(uVar41 & 0xfffffffffffffffe);
      local_2d20 = 0;
      (**(code **)(*plVar28 + 0x38))(plVar28,local_2c88,local_2cb0,local_2cf8,&local_2d20);
      plVar29 = (longlong *)(uVar45 & 0xfffffffffffffffe);
      (**(code **)(*plVar29 + 0x30))(plVar29,&local_2cbc,local_2d08,local_2d18,local_2d20);
      if ((uVar45 & 1) != 0) {
        FUN_143733a60(plVar29);
      }
      if (local_2d30 != 0) {
        FUN_143733a60(plVar28);
      }
      if (local_2cbc < 0) goto LAB_1437b5b7f;
      lVar25 = lVar25 + 0x30;
      local_2d10 = local_2d10 + 1;
    } while (local_2d10 < (int)local_2c48);
  }
  uVar26 = 0;
LAB_1437b5ad1:
  local_2cf8 = (longlong *)FUN_143703a50();
  lVar25 = (longlong)(int)(local_2c48 - 1);
  if (-1 < (int)(local_2c48 - 1)) {
    puVar30 = (ulonglong *)(local_2c50 + lVar25 * 0x30 + 0x10);
    do {
      if ((puVar30[3] & 1) != 0) {
        FUN_143733a60(puVar30[3] & 0xfffffffffffffffe);
      }
      if ((*puVar30 & 1) != 0) {
        FUN_143733a60(*puVar30 & 0xfffffffffffffffe);
      }
      puVar30 = puVar30 + -6;
      lVar25 = lVar25 + -1;
    } while (-1 < lVar25);
  }
  local_2c48 = 0;
  if (-1 < (int)local_2c44) {
    FUN_143702e10(local_2cf8,local_2c50,0x30,local_2c44 & 0x3fffffff);
  }
  return uVar26;
code_r0x0001437b5798:
  local_2cb8 = local_2cb8 + 1;
  uVar41 = (ulonglong)param_7;
  lVar43 = local_2d38;
  goto LAB_1437b43ef;
LAB_1437b58af:
  if ((local_2d20 & 1) != 0) {
    FUN_143733a60(local_2d20 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_2d18 & 1) != 0) {
    FUN_143733a60((ulonglong)local_2d18 & 0xfffffffffffffffe);
  }
LAB_1437b58d3:
  uVar26 = 0x80040200;
  goto LAB_1437b5ad1;
LAB_1437b5b7f:
  uVar26 = 0x80040200;
  goto LAB_1437b5ad1;
}



// FUNCTION 1437b5bc0 FUN_1437b5bc0 body=6569 status=ok
// SIG undefined FUN_1437b5bc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001437b7082) */

undefined8
FUN_1437b5bc0(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,uint param_7,uint param_8,int param_9)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  double dVar4;
  WriteBytesMem WVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  uchar *puVar14;
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  WriteBytesMem *pWVar18;
  longlong lVar19;
  undefined8 uVar20;
  WriteBytesMem *pWVar21;
  longlong *plVar22;
  WriteBytesMem *pWVar23;
  longlong *plVar24;
  ulonglong *puVar25;
  uint uVar26;
  WriteBytesMem *pWVar27;
  WriteBytesMem *pWVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  bool bVar34;
  float fVar35;
  byte local_2d64 [4];
  WriteBytesMem *local_2d60;
  WriteBytesMem *local_2d58;
  byte local_2d50;
  byte local_2d4f;
  longlong local_2d48;
  longlong local_2d40;
  WriteBytesMem *local_2d38;
  WriteBytesMem *local_2d30;
  WriteBytesMem *local_2d28;
  WriteBytesMem *local_2d20;
  int local_2d18;
  WriteBytesMem *local_2d10;
  undefined8 uStack_2d08;
  WriteBytesMem *local_2d00;
  int local_2cf8 [2];
  WriteBytesMem *local_2cf0;
  WriteBytesMem *local_2ce8;
  uint uStack_2ce0;
  undefined4 uStack_2cdc;
  WriteBytesMem *local_2cd8;
  int local_2cc8;
  WriteBytesMem *local_2cc0;
  undefined8 uStack_2cb8;
  WriteBytesMem *local_2cb0;
  ulonglong local_2ca8;
  int local_2ca0;
  int local_2c9c;
  undefined1 local_2c98 [4];
  undefined1 local_2c94 [4];
  undefined1 local_2c90 [4];
  undefined1 local_2c8c [4];
  undefined1 local_2c88 [16];
  WriteBytesMem *local_2c78;
  uint uStack_2c70;
  undefined4 uStack_2c6c;
  WriteBytesMem *local_2c68;
  undefined8 local_2c60;
  WriteBytesMem *local_2c58;
  undefined1 local_2c50 [8];
  undefined1 *local_2c48;
  uint local_2c40;
  uint local_2c3c;
  undefined1 local_2c38 [3072];
  WriteBytesMem local_2038 [8224];
  
  local_2c48 = local_2c38;
  local_2c40 = 0;
  local_2c3c = 0x80000040;
  local_2d18 = 0;
  if (0 < param_9) {
    uVar29 = (ulonglong)param_7;
    do {
      local_2d40 = local_2d18 * (int)uVar29 + param_3;
      local_2d48 = (int)(local_2d18 * param_8) + param_5;
      uVar6 = param_9 - local_2d18;
      if (0x400 < param_9 - local_2d18) {
        uVar6 = 0x400;
      }
      local_2cc8 = 0;
      lVar19 = local_2d48;
      lVar31 = local_2d40;
LAB_1437b5c8f:
      for (; local_2cc8 != (int)param_2[1]; local_2cc8 = local_2cc8 + 1) {
        pWVar23 = (WriteBytesMem *)((longlong)local_2cc8 * 0x30 + *param_2);
        uVar32 = 0;
        if (lVar31 != 0) {
          uVar32 = (uint)*(ushort *)(pWVar23 + 4);
        }
        pWVar18 = (WriteBytesMem *)((int)uVar32 + lVar31);
        uVar32 = 0;
        if (lVar19 != 0) {
          uVar32 = (uint)*(ushort *)(pWVar23 + 2);
        }
        pWVar21 = (WriteBytesMem *)((int)uVar32 + local_2d48);
        local_2d60 = pWVar23;
        local_2d28 = pWVar18;
        switch(*pWVar23) {
        case (WriteBytesMem)0x1:
          FUN_1436f7090(pWVar23,&local_2cc0,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2d10,pWVar21);
          pWVar23 = local_2cb0;
          uVar20 = uStack_2d08;
          local_2d28 = local_2d00;
          pWVar18 = local_2d00;
          if (0 < (int)uVar6) {
            local_2d4f = (byte)local_2cb0 & 1;
            local_2d64[0] = (byte)local_2d00 & 1;
            local_2d60 = local_2cc0;
            plVar22 = (longlong *)((ulonglong)local_2d00 & 0xfffffffffffffffe);
            local_2d38 = local_2d10;
            local_2d58 = (WriteBytesMem *)(ulonglong)uVar6;
            do {
              if (local_2d64[0] != 0) {
                FUN_1437329e0(plVar22);
              }
              if (local_2d4f != 0) {
                FUN_1437329e0((ulonglong)pWVar23 & 0xfffffffffffffffe);
              }
              local_2cb0 = (WriteBytesMem *)0x0;
              local_2cc0 = (WriteBytesMem *)0x0;
              uStack_2cb8 = 0;
              local_2ca8 = 0;
              (**(code **)(*plVar22 + 0x68))(plVar22,local_2c94,local_2d38,uVar20,&local_2cc0);
              local_2d30 = local_2cc0;
              if ((local_2ca8 & 1) != 0) {
                FUN_143733a60(local_2ca8 & 0xfffffffffffffffe);
              }
              fVar35 = (float)FUN_1437bc600(*param_1,local_2d30);
              *(float *)local_2d60 = fVar35;
              if (local_2d4f != 0) {
                FUN_143733a60((ulonglong)pWVar23 & 0xfffffffffffffffe);
              }
              if (local_2d64[0] != 0) {
                FUN_143733a60(plVar22);
              }
              local_2d60 = local_2d60 + (int)param_7;
              local_2d38 = local_2d38 + (int)param_8;
              local_2d58 = (WriteBytesMem *)((longlong)local_2d58 - 1);
            } while (local_2d58 != (WriteBytesMem *)0x0);
            local_2d58 = (WriteBytesMem *)0x0;
            pWVar18 = local_2d28;
          }
          break;
        case (WriteBytesMem)0x2:
          FUN_1436f7090(pWVar23,&local_2d10,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2ce8,pWVar21);
          uVar20 = uStack_2d08;
          iVar9 = 0;
          local_2d30 = local_2cd8;
          local_2d28 = local_2d00;
          pWVar23 = local_2d00;
          pWVar18 = local_2cd8;
          if (0 < (int)uVar6) {
            uVar15 = CONCAT44(uStack_2cdc,uStack_2ce0);
            local_2d58 = (WriteBytesMem *)((ulonglong)local_2cd8 & 0xfffffffffffffffe);
            local_2d20 = (WriteBytesMem *)((ulonglong)local_2d00 & 0xfffffffffffffffe);
            local_2d60 = local_2d10;
            local_2d38 = local_2ce8;
            do {
              local_2d64[0] = 0;
              (**(code **)((longlong)*(double *)local_2d58 + 0x38))
                        (local_2d58,local_2c90,local_2d38,uVar15,local_2d64);
              (**(code **)((longlong)*(double *)local_2d20 + 0x30))
                        (local_2d20,&local_2ca0,local_2d60,uVar20,local_2d64[0]);
              if (local_2ca0 < 0) goto LAB_1437b737d;
              iVar9 = iVar9 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d38 = local_2d38 + (int)param_8;
              pWVar23 = local_2d28;
              pWVar18 = local_2d30;
            } while (iVar9 < (int)uVar6);
          }
          break;
        case (WriteBytesMem)0x3:
          FUN_1436f7090(pWVar23,&local_2d10,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2ce8,pWVar21);
          uVar20 = uStack_2d08;
          iVar9 = 0;
          local_2d30 = local_2cd8;
          local_2d28 = local_2d00;
          pWVar23 = local_2d00;
          pWVar18 = local_2cd8;
          if (0 < (int)uVar6) {
            uVar15 = CONCAT44(uStack_2cdc,uStack_2ce0);
            local_2d58 = (WriteBytesMem *)((ulonglong)local_2cd8 & 0xfffffffffffffffe);
            local_2d20 = (WriteBytesMem *)((ulonglong)local_2d00 & 0xfffffffffffffffe);
            local_2d60 = local_2d10;
            local_2d38 = local_2ce8;
            do {
              local_2c78 = (WriteBytesMem *)0x0;
              uStack_2c70 = uStack_2c70 & 0xffffff00;
              (**(code **)((longlong)*(double *)local_2d58 + 0x38))
                        (local_2d58,local_2c8c,local_2d38,uVar15,&local_2c78);
              local_2ce8 = local_2c78;
              uStack_2ce0 = uStack_2c70;
              uStack_2cdc = uStack_2c6c;
              (**(code **)((longlong)*(double *)local_2d20 + 0x30))
                        (local_2d20,&local_2c9c,local_2d60,uVar20,&local_2ce8);
              if (local_2c9c < 0) goto LAB_1437b737d;
              iVar9 = iVar9 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d38 = local_2d38 + (int)param_8;
              pWVar23 = local_2d28;
              pWVar18 = local_2d30;
            } while (iVar9 < (int)uVar6);
          }
          break;
        case (WriteBytesMem)0x4:
          FUN_1436f7090(pWVar23,&local_2d10,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2ce8,pWVar21);
          uVar20 = uStack_2d08;
          iVar9 = 0;
          local_2d30 = local_2cd8;
          local_2d28 = local_2d00;
          pWVar23 = local_2d00;
          pWVar18 = local_2cd8;
          if (0 < (int)uVar6) {
            uVar15 = CONCAT44(uStack_2cdc,uStack_2ce0);
            local_2cf0 = (WriteBytesMem *)((ulonglong)local_2cd8 & 0xfffffffffffffffe);
            local_2d20 = (WriteBytesMem *)((ulonglong)local_2d00 & 0xfffffffffffffffe);
            local_2d60 = local_2d10;
            local_2d58 = local_2ce8;
            do {
              local_2d38 = (WriteBytesMem *)0x0;
              (**(code **)((longlong)*(double *)local_2cf0 + 0x38))
                        (local_2cf0,local_2c88,local_2d58,uVar15,&local_2d38);
              (**(code **)((longlong)*(double *)local_2d20 + 0x30))
                        (local_2d20,local_2cf8,local_2d60,uVar20,local_2d38);
              if (local_2cf8[0] < 0) goto LAB_1437b737d;
              iVar9 = iVar9 + 1;
              local_2d60 = local_2d60 + (int)param_7;
              local_2d58 = local_2d58 + (int)param_8;
              pWVar23 = local_2d28;
              pWVar18 = local_2d30;
            } while (iVar9 < (int)uVar6);
          }
          break;
        case (WriteBytesMem)0x5:
          FUN_1436f7090(pWVar23,&local_2d10,pWVar18);
          FUN_1436f70e0(pWVar23,&local_2cc0,pWVar21);
          pWVar23 = local_2cb0;
          local_2d60 = local_2cc0;
          local_2d4f = (byte)local_2cb0 & 1;
          local_2d20 = local_2cb0;
          local_2d58 = local_2cb0;
          if (((ulonglong)local_2cb0 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2cb0 & 0xfffffffffffffffe);
          }
          pWVar18 = local_2d00;
          local_2ce8 = local_2d10;
          local_2d50 = (byte)local_2d00 & 1;
          local_2cf0 = local_2d00;
          local_2d38 = local_2d00;
          if (((ulonglong)local_2d00 & 1) != 0) {
            FUN_1437329e0((ulonglong)local_2d00 & 0xfffffffffffffffe);
          }
          uVar20 = uStack_2cb8;
          pWVar21 = local_2d58;
          pWVar27 = local_2ce8;
          pWVar28 = (WriteBytesMem *)(ulonglong)uVar6;
          if (0 < (int)uVar6) {
            do {
              local_2d28 = pWVar28;
              local_2d00 = (WriteBytesMem *)0x0;
              local_2d10 = (WriteBytesMem *)0x0;
              uStack_2d08 = 0;
              local_2d58 = (WriteBytesMem *)((ulonglong)pWVar21 & 0xfffffffffffffffe);
              (**(code **)((longlong)*(double *)local_2d58 + 0x50))
                        (local_2d58,local_2c98,local_2d60,uVar20,&local_2d10);
              local_2ce8 = local_2d10;
              local_2d64[0] = (byte)pWVar21 & 1;
              local_2c68 = local_2d60;
              local_2c60 = uVar20;
              local_2c58 = pWVar21;
              if (((ulonglong)pWVar21 & 1) != 0) {
                FUN_1437329e0(local_2d58);
              }
              fVar35 = (float)FUN_1437bc930(*param_1,&local_2c68);
              if (fVar35 == 0.0) {
                if (local_2ce8 == (WriteBytesMem *)0x0) {
                  *(float *)pWVar27 = 0.0;
                }
                else {
                  fVar35 = (float)FUN_1437bcb60(*param_1,local_2ce8);
                  *(float *)pWVar27 = fVar35;
                }
              }
              else {
                *(float *)pWVar27 = fVar35;
              }
              if (((ulonglong)local_2d00 & 1) != 0) {
                FUN_143733a60((ulonglong)local_2d00 & 0xfffffffffffffffe);
              }
              pWVar23 = local_2d58;
              local_2d60 = local_2d60 + (int)param_8;
              if (((ulonglong)local_2d58 & 1) != 0) {
                FUN_1437329e0();
              }
              if (local_2d64[0] != 0) {
                FUN_143733a60();
              }
              local_2d30 = (WriteBytesMem *)((ulonglong)local_2d38 & 0xfffffffffffffffe);
              if (((ulonglong)local_2d38 & 1) != 0) {
                FUN_143733a60();
              }
              local_2d38 = local_2d30;
              pWVar21 = pWVar23;
              pWVar27 = pWVar27 + (int)param_7;
              pWVar28 = (WriteBytesMem *)((longlong)local_2d28 - 1U);
            } while ((longlong)local_2d28 - 1U != 0);
            local_2d28 = (WriteBytesMem *)0x0;
            pWVar18 = local_2d30;
            local_2d58 = pWVar23;
          }
          if (((ulonglong)pWVar18 & 1) != 0) {
            FUN_143733a60();
          }
          if (((ulonglong)pWVar23 & 1) != 0) {
            FUN_143733a60();
          }
          if (local_2d4f != 0) {
            FUN_143733a60();
          }
          if (local_2d50 == 0) goto LAB_1437b5e60;
          goto LAB_1437b5e56;
        case (WriteBytesMem)0x6:
          uVar20 = *(undefined8 *)(pWVar23 + 0x10);
          FUN_1437152f0(uVar20);
          uVar15 = FUN_1436f9ee0(pWVar23);
          FUN_1437152f0(uVar15);
          uVar15 = *(undefined8 *)(pWVar23 + 0x20);
          uVar11 = FUN_1437152f0(uVar20);
          FUN_1436f9ee0(local_2d60);
          uVar12 = FUN_1437152f0();
          lVar19 = local_2d48;
          iVar9 = FUN_1437b5bc0(local_2c50,uVar15,local_2d40,uVar12,local_2d48,uVar11,0,0,1);
          if (-1 < iVar9) goto code_r0x0001437b7335;
          goto LAB_1437b73a1;
        case (WriteBytesMem)0x7:
          iVar9 = local_2c40 + uVar6;
          uVar20 = FUN_143703a50();
          if ((int)(local_2c3c & 0x3fffffff) < iVar9) {
            iVar10 = (local_2c3c & 0x3fffffff) * 2;
            if (iVar9 < iVar10) {
              iVar9 = iVar10;
            }
            FUN_14370c310(uVar20,&local_2c48,iVar9,0x30);
          }
          if ((int)uVar6 < 1) goto LAB_1437b5e60;
          iVar10 = 0;
          iVar9 = 0;
          local_2d58 = (WriteBytesMem *)((ulonglong)local_2d58 & 0xffffffff00000000);
          local_2d38 = (WriteBytesMem *)((ulonglong)local_2d38 & 0xffffffff00000000);
          local_2d30 = (WriteBytesMem *)(ulonglong)uVar6;
          do {
            iVar30 = 0;
            if (pWVar18 != (WriteBytesMem *)0x0) {
              iVar30 = iVar9;
            }
            FUN_1436f7090(local_2d60,&local_2d10,pWVar18 + iVar30);
            iVar9 = 0;
            if (pWVar21 != (WriteBytesMem *)0x0) {
              iVar9 = iVar10;
            }
            FUN_1436f70e0(local_2d60,&local_2cc0,pWVar21 + iVar9);
            pWVar23 = local_2cb0;
            local_2d64[0] = (byte)local_2cb0 & 1;
            if (((ulonglong)local_2cb0 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2cb0 & 0xfffffffffffffffe);
            }
            pWVar18 = local_2d00;
            local_2d50 = (byte)local_2d00 & 1;
            if (((ulonglong)local_2d00 & 1) != 0) {
              FUN_1437329e0((ulonglong)local_2d00 & 0xfffffffffffffffe);
            }
            if (local_2d50 != 0) {
              FUN_143733a60((ulonglong)pWVar18 & 0xfffffffffffffffe);
            }
            if (local_2d64[0] != 0) {
              FUN_143733a60((ulonglong)pWVar23 & 0xfffffffffffffffe);
            }
            uVar20 = FUN_143703a50();
            if (local_2c40 == (local_2c3c & 0x3fffffff)) {
              FUN_14370c460(uVar20,&local_2c48,0x30);
            }
            if (local_2c48 + (longlong)(int)local_2c40 * 0x30 != (undefined1 *)0x0) {
              FUN_143723b10();
            }
            lVar19 = (longlong)(int)local_2c40;
            local_2c40 = local_2c40 + 1;
            FUN_1436fa270(local_2c48 + lVar19 * 0x30,&local_2d10,&local_2cc0);
            if (((ulonglong)local_2cb0 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2cb0 & 0xfffffffffffffffe);
            }
            if (((ulonglong)local_2d00 & 1) != 0) {
              FUN_143733a60((ulonglong)local_2d00 & 0xfffffffffffffffe);
            }
            uVar29 = (ulonglong)param_7;
            iVar9 = (int)local_2d38 + param_7;
            iVar10 = (int)local_2d58 + param_8;
            local_2d30 = local_2d30 + -1;
            local_2d38 = (WriteBytesMem *)CONCAT44(local_2d38._4_4_,iVar9);
            local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,iVar10);
            pWVar18 = local_2d28;
          } while (local_2d30 != (WriteBytesMem *)0x0);
          local_2d30 = (WriteBytesMem *)0x0;
          lVar31 = local_2d40;
          goto switchD_1437b5cf8_default;
        case (WriteBytesMem)0x8:
          uVar32 = *(uint *)(pWVar23 + 0x10);
          if ((uVar32 == (uint)uVar29) && (uVar32 == param_8)) {
            FUN_14370c700(pWVar18,pWVar21,uVar32 * uVar6);
          }
          else {
            lVar31 = local_2d40;
            if ((int)uVar6 < 1) goto switchD_1437b5cf8_default;
            uVar33 = (ulonglong)uVar6;
            do {
              if (0 < (longlong)(int)uVar32) {
                pWVar23 = pWVar18;
                lVar19 = (longlong)(int)uVar32;
                do {
                  *pWVar23 = pWVar23[(longlong)pWVar21 - (longlong)pWVar18];
                  pWVar23 = pWVar23 + 1;
                  lVar19 = lVar19 + -1;
                } while (lVar19 != 0);
              }
              pWVar18 = pWVar18 + (int)(uint)uVar29;
              pWVar21 = pWVar21 + (int)param_8;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
          goto LAB_1437b5e60;
        case (WriteBytesMem)0x9:
          uVar20 = FUniqueNetIdString::GetBytes(pWVar23);
          puVar25 = (ulonglong *)FUN_143714420(uVar20,1);
          if (puVar25 == (ulonglong *)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *puVar25;
          }
          puVar14 = AK::WriteBytesMem::Bytes(local_2d60);
          puVar25 = (ulonglong *)FUN_143714420(puVar14,1);
          if (puVar25 == (ulonglong *)0x0) {
            uVar33 = 0;
          }
          else {
            uVar33 = *puVar25;
          }
          uVar26 = ((uint)(uVar33 >> 10) & 0x3fffff) + 7 >> 3;
          uVar17 = (ulonglong)uVar26;
          uVar32 = ((uint)(uVar29 >> 10) & 0x3fffff) + 7 >> 3;
          local_2d64[0] = ((byte)(uVar33 >> 8) & 1) != ((byte)(uVar29 >> 8) & 1);
          local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,uVar26);
          iVar9 = uVar32 - uVar26;
          local_2d38 = (WriteBytesMem *)CONCAT44(local_2d38._4_4_,iVar9);
          if (iVar9 < 1) {
            if ((uVar33 & 0x100) != 0) {
              pWVar21 = pWVar21 + -iVar9;
            }
            if ((bool)local_2d64[0]) {
              uVar29 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  if (uVar32 == 1) {
                    *pWVar18 = *pWVar21;
                  }
                  else if (uVar32 == 2) {
                    *(ushort *)pWVar18 = *(ushort *)pWVar21 >> 8 | *(ushort *)pWVar21 << 8;
                  }
                  else if (uVar32 == 4) {
                    fVar35 = *(float *)pWVar21;
                    *(uint *)pWVar18 =
                         (uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                         ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18;
                  }
                  else if (uVar32 == 8) {
                    dVar4 = *(double *)pWVar21;
                    *(ulonglong *)pWVar18 =
                         (ulonglong)dVar4 >> 0x38 | ((ulonglong)dVar4 & 0xff000000000000) >> 0x28 |
                         ((ulonglong)dVar4 & 0xff0000000000) >> 0x18 |
                         ((ulonglong)dVar4 & 0xff00000000) >> 8 |
                         ((ulonglong)dVar4 & 0xff000000) << 8 |
                         ((ulonglong)dVar4 & 0xff0000) << 0x18 | ((ulonglong)dVar4 & 0xff00) << 0x28
                         | (longlong)dVar4 << 0x38;
                  }
                  pWVar21 = pWVar21 + (int)param_8;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else {
              uVar29 = (ulonglong)(int)param_7;
              if ((uVar32 == param_7) && (uVar32 == param_8)) {
                FUN_14370c700(pWVar18,pWVar21,uVar32 * uVar6);
              }
              else {
                lVar31 = local_2d40;
                if ((int)uVar6 < 1) goto switchD_1437b5cf8_default;
                uVar33 = (ulonglong)uVar6;
                do {
                  if ((ulonglong)uVar32 != 0) {
                    pWVar23 = pWVar18;
                    uVar17 = (ulonglong)uVar32;
                    do {
                      *pWVar23 = pWVar23[(longlong)pWVar21 - (longlong)pWVar18];
                      pWVar23 = pWVar23 + 1;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  pWVar18 = pWVar18 + uVar29;
                  pWVar21 = pWVar21 + (int)param_8;
                  uVar33 = uVar33 - 1;
                } while (uVar33 != 0);
              }
            }
          }
          else {
            local_2d20 = (WriteBytesMem *)0x1;
            local_2d28 = (WriteBytesMem *)0x0;
            local_2d30 = (WriteBytesMem *)(longlong)(int)(uVar26 - 1);
            if ((uVar29 & 0x100) != 0) {
              local_2d28 = (WriteBytesMem *)(longlong)iVar9;
              local_2d30 = (WriteBytesMem *)(ulonglong)uVar26;
              local_2d20 = (WriteBytesMem *)(longlong)-iVar9;
            }
            if (0 < (int)uVar6) {
              local_2ce8 = (WriteBytesMem *)(uVar33 >> 9 & 0x7fffff);
              local_2d60 = (WriteBytesMem *)(ulonglong)uVar6;
              do {
                pWVar23 = local_2d28 + (longlong)pWVar18;
                pWVar27 = local_2d30 + (longlong)pWVar18;
                local_2cf0 = local_2d20 + (longlong)pWVar27;
                iVar10 = (int)uVar17;
                if (local_2d64[0] == 0) {
                  if (iVar10 == 0) {
                    FUN_14370c700(pWVar23,pWVar21);
                    iVar9 = (int)local_2d38;
                  }
                  else if (0 < (longlong)uVar17) {
                    lVar19 = (longlong)pWVar21 - (longlong)pWVar23;
                    do {
                      *pWVar23 = pWVar23[lVar19];
                      pWVar23 = pWVar23 + 1;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                }
                else if (iVar10 == 1) {
                  *pWVar23 = *pWVar21;
                }
                else if (iVar10 == 2) {
                  *(ushort *)pWVar23 = *(ushort *)pWVar21 >> 8 | *(ushort *)pWVar21 << 8;
                }
                else if (iVar10 == 4) {
                  fVar35 = *(float *)pWVar21;
                  *(uint *)pWVar23 =
                       (uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                       ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18;
                }
                else if (iVar10 == 8) {
                  dVar4 = *(double *)pWVar21;
                  *(ulonglong *)pWVar23 =
                       (ulonglong)dVar4 >> 0x38 | ((ulonglong)dVar4 & 0xff000000000000) >> 0x28 |
                       ((ulonglong)dVar4 & 0xff0000000000) >> 0x18 |
                       ((ulonglong)dVar4 & 0xff00000000) >> 8 | ((ulonglong)dVar4 & 0xff000000) << 8
                       | ((ulonglong)dVar4 & 0xff0000) << 0x18 | ((ulonglong)dVar4 & 0xff00) << 0x28
                       | (longlong)dVar4 << 0x38;
                }
                if (((ulonglong)local_2ce8 & 1) != 0) {
                  FUN_14370c720(local_2cf0,-(((byte)*pWVar27 & 0x80) != 0),iVar9);
                }
                uVar17 = (ulonglong)(int)local_2d58;
                pWVar18 = pWVar18 + (int)param_7;
                pWVar21 = pWVar21 + (int)param_8;
                local_2d60 = (WriteBytesMem *)((longlong)local_2d60 - 1);
                iVar9 = (int)local_2d38;
              } while (local_2d60 != (WriteBytesMem *)0x0);
              local_2d60 = (WriteBytesMem *)0x0;
            }
          }
          goto LAB_1437b5e60;
        case (WriteBytesMem)0xa:
          uVar20 = FUniqueNetIdString::GetBytes(pWVar23);
          puVar13 = (undefined8 *)FUN_143714420(uVar20,1);
          if (puVar13 == (undefined8 *)0x0) {
            local_2d60 = (WriteBytesMem *)0x0;
          }
          else {
            local_2d60 = (WriteBytesMem *)*puVar13;
          }
          puVar14 = AK::WriteBytesMem::Bytes(pWVar23);
          puVar25 = (ulonglong *)FUN_143714420(puVar14,1);
          if (puVar25 == (ulonglong *)0x0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *puVar25;
          }
          lVar19 = (longlong)(int)param_8;
          uVar32 = (uint)uVar29;
          pWVar23 = local_2038;
          if ((uVar29 & 0x100) == 0) {
            pWVar23 = pWVar21;
          }
          bVar34 = (uVar29 & 0x100) != 0;
          uVar26 = param_8;
          if (bVar34) {
            uVar26 = 8;
          }
          local_2d38 = (WriteBytesMem *)CONCAT44(local_2d38._4_4_,uVar26);
          if (bVar34) {
            pWVar27 = local_2038;
            uVar16 = ((uint)(uVar29 >> 0xb) & 0x1f) + 7 +
                     ((uint)(uVar29 >> 10) & 1) + ((uint)(uVar29 >> 0x10) & 0xff) >> 3;
            if (uVar16 == 1) {
              if (0 < (int)uVar6) {
                uVar29 = (ulonglong)uVar6;
                do {
                  WVar5 = *pWVar21;
                  pWVar21 = pWVar21 + lVar19;
                  *pWVar27 = WVar5;
                  pWVar27 = pWVar27 + 8;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar16 == 2) {
              if (0 < (int)uVar6) {
                uVar29 = (ulonglong)uVar6;
                do {
                  uVar3 = *(ushort *)pWVar21;
                  pWVar21 = pWVar21 + lVar19;
                  *(ushort *)pWVar27 = uVar3 >> 8 | uVar3 << 8;
                  uVar29 = uVar29 - 1;
                  pWVar27 = pWVar27 + 8;
                } while (uVar29 != 0);
              }
            }
            else if (uVar16 == 4) {
              if (0 < (int)uVar6) {
                uVar29 = (ulonglong)uVar6;
                do {
                  fVar35 = *(float *)pWVar21;
                  pWVar21 = pWVar21 + lVar19;
                  *(uint *)pWVar27 =
                       (uint)fVar35 >> 0x18 | ((uint)fVar35 & 0xff0000) >> 8 |
                       ((uint)fVar35 & 0xff00) << 8 | (int)fVar35 << 0x18;
                  uVar29 = uVar29 - 1;
                  pWVar27 = pWVar27 + 8;
                } while (uVar29 != 0);
              }
            }
            else if ((uVar16 == 8) && (0 < (int)uVar6)) {
              uVar29 = (ulonglong)uVar6;
              do {
                dVar4 = *(double *)pWVar21;
                pWVar21 = pWVar21 + lVar19;
                *(ulonglong *)pWVar27 =
                     (ulonglong)dVar4 >> 0x38 | ((ulonglong)dVar4 & 0xff000000000000) >> 0x28 |
                     ((ulonglong)dVar4 & 0xff0000000000) >> 0x18 |
                     ((ulonglong)dVar4 & 0xff00000000) >> 8 | ((ulonglong)dVar4 & 0xff000000) << 8 |
                     ((ulonglong)dVar4 & 0xff0000) << 0x18 | ((ulonglong)dVar4 & 0xff00) << 0x28 |
                     (longlong)dVar4 << 0x38;
                uVar29 = uVar29 - 1;
                pWVar27 = pWVar27 + 8;
              } while (uVar29 != 0);
            }
            uVar32 = uVar32 & 0xfffffeff;
          }
          pWVar21 = local_2038;
          if (((ulonglong)local_2d60 & 0x100) == 0) {
            pWVar21 = pWVar18;
          }
          uVar16 = param_7;
          if (((ulonglong)local_2d60 & 0x100) != 0) {
            uVar16 = 8;
          }
          uVar8 = (uint)local_2d60 & 0xfffffeff;
          if (uVar32 == 0x74605) {
            if (uVar8 == 0x74605) {
              if (0 < (int)uVar6) {
                uVar29 = (ulonglong)uVar6;
                do {
                  uVar2 = *(undefined2 *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(undefined2 *)pWVar21 = uVar2;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar8 == 0x174605) {
              if (0 < (int)uVar6) {
                uVar29 = (ulonglong)uVar6;
                do {
                  sVar1 = *(short *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(int *)pWVar21 = (int)sVar1 << 0x10;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar8 == 0x345e05) {
              iVar9 = 0;
              if (3 < (int)uVar6) {
                uVar32 = (uVar6 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar9 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = (double)(float)((int)*(short *)pWVar23 << 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(double *)pWVar21 = (double)(float)((int)*(short *)pWVar27 << 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(double *)pWVar21 = (double)(float)((int)*(short *)pWVar28 << 0x10);
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  fVar35 = (float)((int)*(short *)(pWVar28 + (int)uVar26) << 0x10);
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35);
                  *(double *)(pWVar21 + (int)uVar16) = (double)fVar35;
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar9 < (int)uVar6) {
                uVar29 = (ulonglong)(uVar6 - iVar9);
                do {
                  sVar1 = *(short *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,(int)sVar1 << 0x10);
                  *(double *)pWVar21 = (double)(float)((int)sVar1 << 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
          }
          else if (uVar32 == 0x174605) {
            if (uVar8 == 0x74605) {
              iVar9 = 0;
              if (3 < (int)uVar6) {
                uVar32 = (uVar6 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar9 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)(*(float *)pWVar23 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)(*(float *)pWVar27 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(short *)pWVar21 = (short)((uint)(*(float *)pWVar28 * 1.0039062) >> 0x10);
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  fVar35 = *(float *)(pWVar28 + (int)uVar26) * 1.0039062;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35);
                  *(short *)(pWVar21 + (int)uVar16) = (short)((uint)fVar35 >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar9 < (int)uVar6) {
                uVar29 = (ulonglong)(uVar6 - iVar9);
                do {
                  fVar35 = *(float *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35 * 1.0039062);
                  *(short *)pWVar21 = (short)((uint)(fVar35 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar8 == 0x174605) {
              iVar9 = 0;
              if (3 < (int)uVar6) {
                uVar32 = (uVar6 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar9 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = *(float *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(undefined4 *)pWVar21 = *(undefined4 *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(undefined4 *)pWVar21 = *(undefined4 *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(undefined4 *)(pWVar21 + (int)uVar16) = *(undefined4 *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar9 < (int)uVar6) {
                uVar29 = (ulonglong)(uVar6 - iVar9);
                do {
                  fVar35 = *(float *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = fVar35;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar8 == 0x345e05) {
              iVar9 = 0;
              if (3 < (int)uVar6) {
                uVar32 = (uVar6 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar9 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = (double)*(float *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(double *)pWVar21 = (double)*(float *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(double *)pWVar21 = (double)*(float *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(double *)(pWVar21 + (int)uVar16) = (double)*(float *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar9 < (int)uVar6) {
                uVar29 = (ulonglong)(uVar6 - iVar9);
                do {
                  fVar35 = *(float *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = (double)fVar35;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
          }
          else if (uVar32 == 0x345e05) {
            if (uVar8 == 0x74605) {
              iVar9 = 0;
              if (3 < (int)uVar6) {
                uVar32 = (uVar6 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar9 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)((float)*(double *)pWVar23 * 1.0039062) >> 0x10)
                  ;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(short *)pWVar21 = (short)((uint)((float)*(double *)pWVar27 * 1.0039062) >> 0x10)
                  ;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(short *)pWVar21 = (short)((uint)((float)*(double *)pWVar28 * 1.0039062) >> 0x10)
                  ;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  fVar35 = (float)*(double *)(pWVar28 + (int)uVar26) * 1.0039062;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,fVar35);
                  *(short *)(pWVar21 + (int)uVar16) = (short)((uint)fVar35 >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar9 < (int)uVar6) {
                uVar29 = (ulonglong)(uVar6 - iVar9);
                do {
                  dVar4 = *(double *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  local_2d58 = (WriteBytesMem *)CONCAT44(local_2d58._4_4_,(float)dVar4 * 1.0039062);
                  *(short *)pWVar21 = (short)((uint)((float)dVar4 * 1.0039062) >> 0x10);
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar8 == 0x174605) {
              iVar9 = 0;
              if (3 < (int)uVar6) {
                uVar32 = (uVar6 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar9 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = (float)*(double *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(float *)pWVar21 = (float)*(double *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(float *)pWVar21 = (float)*(double *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(float *)(pWVar21 + (int)uVar16) = (float)*(double *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar9 < (int)uVar6) {
                uVar29 = (ulonglong)(uVar6 - iVar9);
                do {
                  dVar4 = *(double *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(float *)pWVar21 = (float)dVar4;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar8 == 0x345e05) {
              iVar9 = 0;
              if (3 < (int)uVar6) {
                uVar32 = (uVar6 - 4 >> 2) + 1;
                uVar29 = (ulonglong)uVar32;
                iVar9 = uVar32 * 4;
                do {
                  pWVar27 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = *(double *)pWVar23;
                  pWVar21 = pWVar21 + (int)uVar16;
                  pWVar28 = pWVar27 + (int)uVar26;
                  *(undefined8 *)pWVar21 = *(undefined8 *)pWVar27;
                  pWVar21 = pWVar21 + (int)uVar16;
                  *(undefined8 *)pWVar21 = *(undefined8 *)pWVar28;
                  pWVar23 = pWVar28 + (int)uVar26 + (int)uVar26;
                  *(undefined8 *)(pWVar21 + (int)uVar16) = *(undefined8 *)(pWVar28 + (int)uVar26);
                  pWVar21 = pWVar21 + (int)uVar16 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              if (iVar9 < (int)uVar6) {
                uVar29 = (ulonglong)(uVar6 - iVar9);
                do {
                  dVar4 = *(double *)pWVar23;
                  pWVar23 = pWVar23 + (int)uVar26;
                  *(double *)pWVar21 = dVar4;
                  pWVar21 = pWVar21 + (int)uVar16;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
          }
          if (((ulonglong)local_2d60 & 0x100) != 0) {
            pWVar23 = local_2038;
            uVar32 = ((uint)local_2d60 >> 0xb & 0x1f) + 7 +
                     ((uint)((ulonglong)local_2d60 >> 10) & 1) +
                     ((uint)((ulonglong)local_2d60 >> 0x10) & 0xff) >> 3;
            if (uVar32 == 1) {
              uVar29 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  WVar5 = *pWVar23;
                  pWVar23 = pWVar23 + 8;
                  *pWVar18 = WVar5;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar32 == 2) {
              uVar29 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  uVar3 = *(ushort *)pWVar23;
                  pWVar23 = pWVar23 + 8;
                  *(ushort *)pWVar18 = uVar3 >> 8 | uVar3 << 8;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if (uVar32 == 4) {
              uVar29 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                do {
                  uVar32 = *(uint *)pWVar23;
                  pWVar23 = pWVar23 + 8;
                  *(uint *)pWVar18 =
                       uVar32 >> 0x18 | (uVar32 & 0xff0000) >> 8 | (uVar32 & 0xff00) << 8 |
                       uVar32 << 0x18;
                  pWVar18 = pWVar18 + (int)param_7;
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
            }
            else if ((uVar32 == 8) && (uVar29 = (ulonglong)uVar6, 0 < (int)uVar6)) {
              do {
                uVar33 = *(ulonglong *)pWVar23;
                pWVar23 = pWVar23 + 8;
                *(ulonglong *)pWVar18 =
                     uVar33 >> 0x38 | (uVar33 & 0xff000000000000) >> 0x28 |
                     (uVar33 & 0xff0000000000) >> 0x18 | (uVar33 & 0xff00000000) >> 8 |
                     (uVar33 & 0xff000000) << 8 | (uVar33 & 0xff0000) << 0x18 |
                     (uVar33 & 0xff00) << 0x28 | uVar33 << 0x38;
                pWVar18 = pWVar18 + (int)param_7;
                uVar29 = uVar29 - 1;
              } while (uVar29 != 0);
            }
          }
          goto LAB_1437b5e60;
        case (WriteBytesMem)0xb:
          uVar20 = *(undefined8 *)(pWVar23 + 0x10);
          FUN_1437152f0(uVar20);
          FUN_1437152f0(*(double *)(local_2d60 + 0x18));
          iVar9 = FUN_1437152f0(uVar20);
          iVar10 = FUN_1437152f0();
          iVar30 = 0;
          pWVar23 = local_2d28;
          if ((int)uVar6 < 1) goto LAB_1437b5e60;
          do {
            if (iVar9 == 1) {
              bVar34 = *pWVar21 == (WriteBytesMem)0x0;
            }
            else if (iVar9 == 2) {
              bVar34 = *(short *)pWVar21 == 0;
            }
            else if (iVar9 == 4) {
              bVar34 = *(float *)pWVar21 == 0.0;
            }
            else {
              bVar34 = *(double *)pWVar21 == 0.0;
            }
            WVar5 = (WriteBytesMem)!bVar34;
            if (iVar10 == 1) {
              *pWVar23 = WVar5;
            }
            else if (iVar10 == 2) {
              *(ushort *)pWVar23 = (ushort)(byte)WVar5;
            }
            else if (iVar10 == 4) {
              *(uint *)pWVar23 = (uint)(byte)WVar5;
            }
            else {
              *(ulonglong *)pWVar23 = (ulonglong)(byte)WVar5;
            }
            uVar29 = (ulonglong)(int)param_7;
            iVar30 = iVar30 + 1;
            pWVar21 = pWVar21 + (int)param_8;
            pWVar23 = pWVar23 + uVar29;
            lVar31 = local_2d40;
          } while (iVar30 < (int)uVar6);
        default:
          goto switchD_1437b5cf8_default;
        }
        if (((ulonglong)pWVar18 & 1) != 0) {
          FUN_143733a60();
        }
        if (((ulonglong)pWVar23 & 1) != 0) {
LAB_1437b5e56:
          FUN_143733a60();
        }
LAB_1437b5e60:
        uVar29 = (ulonglong)param_7;
        lVar31 = local_2d40;
switchD_1437b5cf8_default:
        lVar19 = local_2d48;
      }
      local_2d18 = local_2d18 + uVar6;
    } while (local_2d18 < param_9);
  }
  local_2d18 = 0;
  if (0 < (int)local_2c40) {
    lVar19 = 0;
    do {
      puVar7 = local_2c48;
      local_2cf0 = *(WriteBytesMem **)(local_2c48 + lVar19 + 0x18);
      uVar29 = *(ulonglong *)(local_2c48 + lVar19 + 0x28);
      local_2ce8 = *(WriteBytesMem **)(local_2c48 + lVar19 + 0x20);
      local_2d50 = (byte)uVar29 & 1;
      if ((uVar29 & 1) != 0) {
        FUN_1437329e0(uVar29 & 0xfffffffffffffffe);
      }
      local_2d20 = *(WriteBytesMem **)(puVar7 + lVar19);
      local_2d28 = *(WriteBytesMem **)(puVar7 + lVar19 + 8);
      uVar33 = *(ulonglong *)(puVar7 + lVar19 + 0x10);
      if ((uVar33 & 1) != 0) {
        FUN_1437329e0(uVar33 & 0xfffffffffffffffe);
      }
      plVar22 = (longlong *)(uVar29 & 0xfffffffffffffffe);
      local_2d30 = (WriteBytesMem *)0x0;
      (**(code **)(*plVar22 + 0x38))(plVar22,local_2c98,local_2cf0,local_2ce8,&local_2d30);
      plVar24 = (longlong *)(uVar33 & 0xfffffffffffffffe);
      (**(code **)(*plVar24 + 0x30))(plVar24,local_2cf8,local_2d20,local_2d28,local_2d30);
      if ((uVar33 & 1) != 0) {
        FUN_143733a60(plVar24);
      }
      if (local_2d50 != 0) {
        FUN_143733a60(plVar22);
      }
      if (local_2cf8[0] < 0) {
        uVar20 = 0x80040200;
        goto LAB_1437b74b1;
      }
      lVar19 = lVar19 + 0x30;
      local_2d18 = local_2d18 + 1;
    } while (local_2d18 < (int)local_2c40);
  }
  uVar20 = 0;
LAB_1437b74b1:
  local_2ce8 = (WriteBytesMem *)FUN_143703a50();
  lVar19 = (longlong)(int)(local_2c40 - 1);
  if (-1 < (int)(local_2c40 - 1)) {
    puVar25 = (ulonglong *)(local_2c48 + lVar19 * 0x30 + 0x10);
    do {
      if ((puVar25[3] & 1) != 0) {
        FUN_143733a60(puVar25[3] & 0xfffffffffffffffe);
      }
      if ((*puVar25 & 1) != 0) {
        FUN_143733a60(*puVar25 & 0xfffffffffffffffe);
      }
      puVar25 = puVar25 + -6;
      lVar19 = lVar19 + -1;
    } while (-1 < lVar19);
  }
  local_2c40 = 0;
  if (-1 < (int)local_2c3c) {
    FUN_143702e10(local_2ce8,local_2c48,0x30,local_2c3c & 0x3fffffff);
  }
  return uVar20;
code_r0x0001437b7335:
  local_2cc8 = local_2cc8 + 1;
  uVar29 = (ulonglong)param_7;
  lVar31 = local_2d40;
  goto LAB_1437b5c8f;
LAB_1437b737d:
  if (((ulonglong)local_2d30 & 1) != 0) {
    FUN_143733a60((ulonglong)local_2d30 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_2d28 & 1) != 0) {
    FUN_143733a60((ulonglong)local_2d28 & 0xfffffffffffffffe);
  }
LAB_1437b73a1:
  uVar20 = 0x80040200;
  goto LAB_1437b74b1;
}



// FUNCTION 1437b75a0 FUN_1437b75a0 body=332 status=ok
// SIG undefined FUN_1437b75a0(void)

uint * FUN_1437b75a0(longlong *param_1,uint *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  lVar1 = *param_3;
  uVar9 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = iVar3 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar9 + uVar7 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar7;
  uVar5 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  puVar8 = (uint *)(param_1[2] + uVar5 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar5 * 8)) {
    do {
      if (*(longlong *)(*param_1 + (longlong)(int)puVar8[1] * 0x10) == lVar1) {
        *param_2 = puVar8[1];
        goto LAB_1437b76bb;
      }
      lVar2 = param_1[2];
      uVar5 = ((longlong)puVar8 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar8 = (uint *)(lVar2 + uVar5 * 8);
    } while (-1 < *(int *)(lVar2 + 4 + uVar5 * 8));
  }
  uVar9 = *(uint *)(param_1 + 1);
  *puVar8 = uVar7;
  puVar8[1] = uVar9;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x10);
  }
  lVar1 = param_1[1];
  *param_2 = uVar9;
  plVar6 = (longlong *)((longlong)(int)lVar1 * 0x10 + *param_1);
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  *plVar6 = *param_3;
  *(undefined4 *)(plVar6 + 1) = *param_4;
LAB_1437b76bb:
  param_2[1] = (uint)((longlong)puVar8 - param_1[2] >> 3);
  return param_2;
}



// FUNCTION 1437b76f0 FUN_1437b76f0 body=154 status=ok
// SIG undefined FUN_1437b76f0(void)

void FUN_1437b76f0(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar1 = (int)param_1[1];
  if ((int)param_1[1] < param_2 + 1) {
    iVar1 = param_2 + 1;
  }
  uVar3 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar2 = uVar5 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar2) {
      iVar6 = iVar2;
    }
    FUN_14370c310(uVar3,param_1,iVar6,0x18);
  }
  puVar4 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
  iVar6 = iVar1 - (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (0 < iVar6) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar3 = param_3[1];
        *puVar4 = *param_3;
        puVar4[1] = uVar3;
        puVar4[2] = param_3[2];
      }
      puVar4 = puVar4 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 1437b7790 FUN_1437b7790 body=283 status=ok
// SIG undefined FUN_1437b7790(void)

void FUN_1437b7790(longlong *param_1,int param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  
  iVar2 = (int)param_1[1];
  if ((int)param_1[1] < param_2 + 1) {
    iVar2 = param_2 + 1;
  }
  uVar5 = FUN_143703a50();
  uVar6 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar6 < iVar2) {
    iVar3 = uVar6 * 2;
    iVar4 = iVar2;
    if (iVar2 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_14370c310(uVar5,param_1,iVar4,0x20);
  }
  iVar4 = ((int)param_1[1] - iVar2) + -1;
  lVar8 = (longlong)iVar4;
  if (-1 < iVar4) {
    puVar7 = (ulonglong *)((longlong)iVar2 * 0x20 + *param_1 + 0x10 + lVar8 * 0x20);
    do {
      if ((*puVar7 & 1) != 0) {
        FUN_143733a60(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + -4;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar4 = iVar2 - (int)param_1[1];
  lVar8 = (longlong)iVar4;
  if (0 < iVar4) {
    puVar7 = (ulonglong *)((longlong)(int)param_1[1] * 0x20 + 0x10 + *param_1);
    do {
      if (puVar7 + -2 != (ulonglong *)0x0) {
        puVar7[-2] = *param_3;
        puVar7[-1] = param_3[1];
        uVar1 = param_3[2];
        *puVar7 = uVar1;
        if ((uVar1 & 1) != 0) {
          FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
        }
        *(int *)(puVar7 + 1) = (int)param_3[3];
      }
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *(int *)(param_1 + 1) = iVar2;
  return;
}



// FUNCTION 1437b78b0 FUN_1437b78b0 body=210 status=ok
// SIG undefined FUN_1437b78b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1437b78b0(undefined8 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b8b4c8) {
    _Init_thread_header(&DAT_146b8b4c8);
    if (DAT_146b8b4c8 == -1) {
      _DAT_146b8b510 = FUN_1437bf730;
      _DAT_146b8b508 = FUN_1437bfb20;
      _DAT_146b8b500 = FUN_1437bfb20;
      _DAT_146b8b4f8 = FUN_1437bf9d0;
      _DAT_146b8b4f0 = FUN_1437bfa50;
      _DAT_146b8b4e8 = FUN_1437bfb60;
      _DAT_146b8b4e0 = FUN_1437bf760;
      _DAT_146b8b4d8 = AK::MemoryMgr::StartProfileThreadUsage;
      _DAT_146b8b4d0 = AK::MemoryMgr::StartProfileThreadUsage;
      _Init_thread_footer(&DAT_146b8b4c8);
    }
  }
  return param_1;
}



// FUNCTION 1437b7990 FUN_1437b7990 body=634 status=ok
// SIG undefined FUN_1437b7990(void)

undefined8 *
FUN_1437b7990(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,longlong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int *local_58;
  longlong local_50;
  ulonglong local_48;
  undefined8 local_40;
  longlong lStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  lVar13 = 0;
  param_1[1] = param_3;
  *param_1 = 0;
  param_1[2] = param_4;
  uVar8 = 0;
  *(undefined4 *)(param_1 + 6) = *param_5;
  lVar11 = param_1[1];
  puVar9 = (undefined8 *)FUN_143714490(lVar11,1);
  bVar4 = 0;
  bVar5 = bVar4;
  if (puVar9 != (undefined8 *)0x0) {
    bVar5 = (byte)*puVar9;
  }
  lVar12 = lVar13;
  if ((bVar5 & 0xf) == 8) {
    lVar12 = lVar11;
  }
  if (lVar12 != 0) {
    plVar10 = (longlong *)FUN_143714420(lVar12,1);
    lVar11 = lVar13;
    if (plVar10 != (longlong *)0x0) {
      lVar11 = *plVar10;
    }
    if ((int)((ulonglong)lVar11 >> 8) == 0) {
      *param_1 = param_2;
      if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
        FUN_1437bd430(param_1[2],&param_5);
      }
      FUN_1437bcce0(param_1,&local_40);
      lVar11 = lStack_38;
      if (lStack_38 == 0) {
        plVar10 = (longlong *)FUN_143714420(lVar12,2);
        if (plVar10 == (longlong *)0x0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *plVar10;
        }
      }
      uVar2 = local_30;
      param_1[5] = lVar11;
      uVar1 = local_30 & 1;
      if ((local_30 & 1) != 0) {
        FUN_1437329e0(local_30 & 0xfffffffffffffffe);
      }
      param_1[3] = local_40;
      if (uVar1 != 0) {
        FUN_143733a60(uVar2 & 0xfffffffffffffffe);
      }
      *(uint *)(param_1 + 4) =
           ((uint)local_28 ^ (int)(uint)local_28 >> 0x1f) - ((int)(uint)local_28 >> 0x1f);
    }
    else {
      local_58 = param_2;
      local_50 = lVar12;
      local_48 = FUN_1437151a0(lVar12);
      if ((local_48 & 1) != 0) {
        FUN_1437329e0(local_48 & 0xfffffffffffffffe);
      }
      puVar9 = (undefined8 *)FUN_1437429a0(&local_58,&param_5);
      local_40 = 0;
      lStack_38 = 0;
      param_1[5] = *puVar9;
      local_30 = 0;
      local_28 = 0;
      (**(code **)(*(longlong *)(local_48 & 0xfffffffffffffffe) + 0x68))
                ((longlong *)(local_48 & 0xfffffffffffffffe),&param_5,local_58,local_50,&local_40);
      uVar3 = local_40;
      if ((local_28 & 1) != 0) {
        FUN_143733a60(local_28 & 0xfffffffffffffffe);
      }
      param_1[3] = uVar3;
      uVar6 = FUN_143742950(&local_58);
      *(undefined4 *)(param_1 + 4) = uVar6;
      uVar2 = local_48;
    }
    if ((uVar2 & 1) != 0) {
      FUN_143733a60(uVar2 & 0xfffffffffffffffe);
    }
  }
  lVar11 = param_6;
  if (param_6 == 0) {
    if (param_1[5] != 0) {
      uVar8 = FUN_1437152f0();
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  }
  else {
    lVar12 = param_1[5];
    puVar9 = (undefined8 *)FUN_143714490(lVar12,1);
    if (puVar9 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar9;
    }
    if ((bVar4 & 0xf) == 7) {
      lVar13 = lVar12;
    }
    FUN_143714b80(lVar13,&param_6,lVar11,1);
    FUN_143714040(&param_5,param_6);
    iVar7 = FUN_143715270(&param_5);
    param_1[3] = param_1[3] + (longlong)iVar7;
    param_1[5] = param_5;
    uVar8 = FUN_1437152f0(lVar13);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
  }
  return param_1;
}



// FUNCTION 1437b7c10 FUN_1437b7c10 body=11 status=ok
// SIG undefined FUN_1437b7c10(void)

undefined8 * FUN_1437b7c10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_3;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 1437b7c20 FUN_1437b7c20 body=854 status=ok
// SIG undefined FUN_1437b7c20(void)

undefined8 * FUN_1437b7c20(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong local_res8;
  undefined8 local_res18 [2];
  
  puVar6 = (undefined8 *)0x0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = CompatPatcher::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_143734b10(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
  puVar5 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    hkReflect::Detail::Impl::Impl(puVar2);
    puVar2[2] = param_1;
    *puVar2 = CompatPatcher::VersioningArrayImpl::vftable;
    puVar5 = puVar2;
  }
  param_1[0xb] = puVar5;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x18);
  puVar5 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    hkReflect::Detail::Impl::Impl(puVar2);
    puVar2[2] = param_1;
    *puVar2 = CompatPatcher::VersioningPointerImpl::vftable;
    puVar5 = puVar2;
  }
  uVar4 = param_1[0xb];
  param_1[0xc] = puVar5;
  uVar3 = FUN_143703a50();
  FUN_14377aa20(param_1 + 0xd,param_3,param_2,uVar3,uVar4,uVar4,puVar5,param_1 + 0x38,0);
  FUN_14373f890(param_1 + 0x38,param_1 + 0xd);
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x80000000;
  param_1[0x3d] = param_3;
  param_1[0x3e] = 0;
  FUN_143734d20(param_1 + 0x3f);
  param_1[0x3f] = _anon_8B0B06A2::WorkBundle::vftable;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x80000000;
  uVar4 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x46,uVar4,0x4000);
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x80000000;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x80000000;
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>(param_1 + 0x53,param_1);
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xffffffff;
  FUN_14374e530(param_1 + 0x56);
  uVar4 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x5d,uVar4,0x4000);
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0xffffffff;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x80000000;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x80000000;
  FUN_14373bf20(param_1 + 0x6d,local_res8 & 0xff);
  param_1[0x70] = 0;
  local_res8 = 0;
  local_res18[0] = 0;
  uVar4 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0x54,uVar4,local_res18,&local_res8);
  FUN_143750180(param_1 + 0x56);
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = hkTypeVm::IntAndFloatConversionPass::vftable;
    puVar6 = puVar5;
  }
  FUN_14374e870(param_1 + 0x56,puVar6);
  *(undefined2 *)((longlong)param_1 + 0x2b1) = 0x100;
  return param_1;
}



// FUNCTION 1437b7f80 FUN_1437b7f80 body=180 status=ok
// SIG undefined FUN_1437b7f80(void)

longlong * FUN_1437b7f80(longlong *param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = *param_4;
  if (*param_1 != 0) {
    lVar2 = param_1[1];
    puVar4 = (undefined8 *)FUN_143714490(lVar2,1);
    if (puVar4 == (undefined8 *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)*puVar4;
    }
    lVar5 = 0;
    if ((bVar3 & 0xf) == 7) {
      lVar5 = lVar2;
    }
    if (lVar5 != 0) {
      FUN_1437b9940(param_1);
    }
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 1437b8040 FUN_1437b8040 body=62 status=ok
// SIG undefined FUN_1437b8040(void)

undefined8 * FUN_1437b8040(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1437151a0(param_3);
  }
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 1437b8080 FUN_1437b8080 body=80 status=ok
// SIG undefined FUN_1437b8080(void)

undefined8 * FUN_1437b8080(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 1437b80d0 FUN_1437b80d0 body=329 status=ok
// SIG undefined FUN_1437b80d0(void)

longlong * FUN_1437b80d0(longlong *param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_res8 [2];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = *param_4;
  lVar4 = param_1[1];
  if ((lVar4 != 0) && (*param_1 != 0)) {
    puVar3 = (undefined8 *)FUN_143714490(lVar4,1);
    if (puVar3 == (undefined8 *)0x0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)*puVar3;
    }
    lVar5 = 0;
    if ((bVar2 & 0xf) == 7) {
      lVar5 = lVar4;
    }
    if (lVar5 != 0) {
      lVar4 = FUN_14377f960(param_1[3] + 0x68,param_1[1]);
      if (lVar4 != 0) {
        local_res8[0] = *param_4;
        FUN_1437bc720(param_1[3],&local_28,param_1,local_res8);
        if (local_28 != 0) {
          *param_1 = local_28;
          param_1[1] = local_20;
          if ((local_18 & 1) != 0) {
            FUN_1437329e0(local_18 & 0xfffffffffffffffe);
          }
          if ((*(byte *)(param_1 + 2) & 1) != 0) {
            FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
          }
          param_1[2] = local_18;
        }
        if ((local_18 & 1) != 0) {
          FUN_143733a60(local_18 & 0xfffffffffffffffe);
        }
      }
    }
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 1437b8220 FUN_1437b8220 body=177 status=ok
// SIG undefined FUN_1437b8220(void)

void FUN_1437b8220(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*param_1 + 0x10 + lVar4 * 0x30);
    do {
      if ((puVar3[3] & 1) != 0) {
        FUN_143733a60(puVar3[3] & 0xfffffffffffffffe);
      }
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -6;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0x30,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1437b82e0 FUN_1437b82e0 body=1022 status=ok
// SIG undefined FUN_1437b82e0(void)

void FUN_1437b82e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  uint *puVar7;
  
  *param_1 = CompatPatcher::vftable;
  puVar1 = (undefined8 *)param_1[0xb];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_14373bf70(param_1 + 0x6d);
  uVar2 = FUN_143703a50();
  lVar5 = (longlong)(*(int *)(param_1 + 0x6c) + -1);
  if (-1 < *(int *)(param_1 + 0x6c) + -1) {
    puVar6 = (ulonglong *)(param_1[0x6b] + 0x10 + lVar5 * 0x20);
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_143733a60(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x364)) {
    FUN_143702e10(uVar2,param_1[0x6b],0x20,*(uint *)((longlong)param_1 + 0x364) & 0x3fffffff);
  }
  param_1[0x6b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x80000000;
  uVar2 = FUN_143703a50();
  lVar5 = (longlong)(*(int *)(param_1 + 0x6a) + -1);
  if (-1 < *(int *)(param_1 + 0x6a) + -1) {
    puVar6 = (ulonglong *)(param_1[0x69] + lVar5 * 0x18 + 0x10);
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_143733a60(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + -3;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x354)) {
    FUN_143702e10(uVar2,param_1[0x69],0x18,*(uint *)((longlong)param_1 + 0x354) & 0x3fffffff);
  }
  param_1[0x69] = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x80000000;
  uVar2 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x66,uVar2);
  iVar4 = (int)param_1;
  AK::MemoryMgr::StartProfileThreadUsage(iVar4 + 0x330);
  FUN_143736600(param_1 + 0x5d);
  FUN_14374e570(param_1 + 0x56);
  uVar2 = FUN_143703a50();
  FUN_143700a90(param_1 + 0x54,uVar2);
  AK::MemoryMgr::StartProfileThreadUsage(iVar4 + 0x2a0);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x294)) {
    FUN_143702e10(uVar2,param_1[0x51],4,*(uint *)((longlong)param_1 + 0x294) & 0x3fffffff);
  }
  param_1[0x51] = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x80000000;
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x284)) {
    FUN_143702e10(uVar2,param_1[0x4f],4,*(uint *)((longlong)param_1 + 0x284) & 0x3fffffff);
  }
  param_1[0x4f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x80000000;
  FUN_1437b86e0(param_1 + 0x3f);
  uVar2 = FUN_143703a50();
  lVar5 = (longlong)(*(int *)(param_1 + 0x3c) + -1);
  if (-1 < *(int *)(param_1 + 0x3c) + -1) {
    puVar7 = (uint *)(param_1[0x3b] + 0xc + lVar5 * 0x10);
    do {
      uVar3 = FUN_143703a50();
      puVar7[-1] = 0;
      if (-1 < (int)*puVar7) {
        FUN_143702e10(uVar3,*(undefined8 *)(puVar7 + -3),0x18,*puVar7 & 0x3fffffff);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1e4)) {
    FUN_143702e10(uVar2,param_1[0x3b],0x10,*(uint *)((longlong)param_1 + 0x1e4) & 0x3fffffff);
  }
  param_1[0x3b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x80000000;
  FUN_143732980(param_1 + 0x38);
  FUN_14377ac50(param_1 + 0xd);
  uVar2 = FUN_143703a50();
  FUN_143700a90(param_1 + 9,uVar2);
  AK::MemoryMgr::StartProfileThreadUsage(iVar4 + 0x48);
  thunk_FUN_143734820(param_1 + 7);
  uVar2 = FUN_143703a50();
  *(undefined4 *)(param_1 + 6) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x34)) {
    FUN_143702e10(uVar2,param_1[5],8,*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar2 = FUN_143703a50();
  iVar4 = *(int *)(param_1 + 4) + -1;
  if (-1 < iVar4) {
    lVar5 = (longlong)iVar4 * 0x10 + param_1[3];
    do {
      FUN_1437b8220(lVar5);
      lVar5 = lVar5 + -0x10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar2,param_1[3],0x10,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = hkReflect::Version::PatcherInterface2014::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1437b86e0 FUN_1437b86e0 body=225 status=ok
// SIG undefined FUN_1437b86e0(void)

void FUN_1437b86e0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  
  FUN_143736600(param_1 + 0x38);
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x30) + -1;
  lVar4 = (longlong)iVar2;
  if (-1 < iVar2) {
    puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar4 * 0x20);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_143733a60(*puVar3 & 0xfffffffffffffffe);
      }
      puVar3 = puVar3 + -4;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
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
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x18,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_143734f50(param_1);
  return;
}



// FUNCTION 1437b87d0 FUN_1437b87d0 body=20 status=ok
// SIG undefined FUN_1437b87d0(void)

void FUN_1437b87d0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_143733a60(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
    return;
  }
  return;
}



// FUNCTION 1437b87f0 FUN_1437b87f0 body=92 status=ok
// SIG undefined FUN_1437b87f0(void)

void FUN_1437b87f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong local_res8;
  
  FUN_1437b78b0(&local_res8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_res8 = param_1;
  puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
  uVar2 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = (uint)*puVar3;
  }
  (**(code **)(&DAT_146b8b4d0 + (ulonglong)(uVar2 & 0xf) * 8))(&local_res8,uVar1,param_2);
  return;
}



// FUNCTION 1437b8850 FUN_1437b8850 body=445 status=ok
// SIG undefined FUN_1437b8850(void)

void FUN_1437b8850(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  if (*param_2 != *param_1) {
    uVar1 = param_1[1];
    puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
    uVar5 = 0;
    uVar2 = 0;
    uVar8 = uVar2;
    if (puVar3 != (undefined8 *)0x0) {
      uVar8 = (int)*puVar3;
    }
    uVar4 = uVar5;
    if (((byte)uVar8 & 0xf) == 6) {
      uVar4 = uVar1;
    }
    if (uVar4 == 0) {
      uVar1 = param_1[1];
      puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
      bVar6 = 0;
      bVar7 = bVar6;
      if (puVar3 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar3;
      }
      uVar4 = uVar5;
      if ((bVar7 & 0xf) == 7) {
        uVar4 = uVar1;
      }
      if (uVar4 != 0) {
        uVar1 = param_2[1];
        puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
        bVar7 = bVar6;
        if (puVar3 != (undefined8 *)0x0) {
          bVar7 = (byte)*puVar3;
        }
        uVar4 = uVar5;
        if ((bVar7 & 0xf) == 6) {
          uVar4 = uVar1;
        }
        if (uVar4 == 0) {
          puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
          if (puVar3 != (undefined8 *)0x0) {
            bVar6 = (byte)*puVar3;
          }
          uVar4 = uVar5;
          if ((bVar6 & 0xf) == 7) {
            uVar4 = uVar1;
          }
          local_38 = uVar5;
          if (uVar4 != 0) {
            local_38 = *param_2;
          }
        }
        else {
          local_38 = FUN_1437be210(param_1[3],*(undefined4 *)*param_2);
        }
        local_res8[0] = (undefined4)param_1[4];
        local_30 = uVar1;
        if (uVar1 != 0) {
          uVar5 = FUN_1437151a0(uVar1);
        }
        local_28 = uVar5;
        if ((uVar5 & 1) != 0) {
          FUN_1437329e0(uVar5 & 0xfffffffffffffffe);
        }
        FUN_1437be590(param_1[3],param_1,&local_38,local_res8,local_res10);
      }
    }
    else {
      local_38 = *param_2;
      if (local_38 != 0) {
        local_28 = param_2[2];
        local_30 = param_2[1];
        if ((local_28 & 1) != 0) {
          FUN_1437329e0(local_28 & 0xfffffffffffffffe);
        }
        uVar2 = FUN_1437b9ae0(param_1[3],&local_38);
      }
      *(undefined4 *)*param_1 = uVar2;
    }
  }
  return;
}



// FUNCTION 1437b8a10 FUN_1437b8a10 body=1059 status=ok
// SIG undefined FUN_1437b8a10(void)

void FUN_1437b8a10(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffff08;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  iVar4 = FUN_1437bcc60(param_2);
  if (iVar4 < 0) {
    uVar16 = 0;
    local_b8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if (param_1[1] != 0) {
      puVar11 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar11 == (undefined8 *)0x0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (byte)*puVar11;
      }
      if ((bVar3 & 0xf) == 8) {
        local_c8 = *param_1;
        uStack_c0 = param_1[1];
        if ((*(byte *)(param_1 + 2) & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        if ((local_b8 & 1) != 0) {
          FUN_143733a60(local_b8 & 0xfffffffffffffffe);
        }
        local_b8 = param_1[2];
      }
    }
    iVar4 = FUN_143742950(&local_c8);
    iVar6 = FUN_1437bcb20(param_2);
    if (iVar4 != 0) {
      puVar12 = (ulonglong *)FUN_143714420(uStack_c0,1);
      uVar13 = uVar16;
      if (puVar12 != (ulonglong *)0x0) {
        uVar13 = *puVar12;
      }
      if ((int)(uVar13 >> 8) == 0) {
        local_b0 = local_c8;
        lStack_a8 = uStack_c0;
        local_a0 = local_b8;
        if ((local_b8 & 1) != 0) {
          FUN_1437329e0(local_b8 & 0xfffffffffffffffe);
        }
        FUN_1437be460(param_1[3],&local_b0);
      }
    }
    (**(code **)(*(longlong *)(local_b8 & 0xfffffffffffffffe) + 0x70))
              ((longlong *)(local_b8 & 0xfffffffffffffffe),&local_res18,local_c8,uStack_c0,
               CONCAT44(uVar5,iVar6));
    puVar11 = (undefined8 *)FUN_1437429a0(&local_c8,&local_res18);
    iVar4 = FUN_1437152f0(*puVar11);
    iVar7 = FUN_1437152f0(*(undefined8 *)(param_2 + 0x28));
    if (iVar7 == iVar4) {
      local_b0 = 0;
      lStack_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      (**(code **)(*(longlong *)(local_b8 & 0xfffffffffffffffe) + 0x68))
                ((longlong *)(local_b8 & 0xfffffffffffffffe),&local_res18,local_c8,uStack_c0,
                 &local_b0);
      uVar1 = local_b0;
      if ((local_98 & 1) != 0) {
        FUN_143733a60(local_98 & 0xfffffffffffffffe);
      }
      iVar4 = FUN_1437152f0(*(undefined8 *)(param_2 + 0x28));
      FGenericPlatformString::Memcpy
                (uVar1,*(undefined8 *)(param_2 + 0x18),(longlong)(iVar4 * iVar6));
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      puVar11 = (undefined8 *)FUN_1437429a0(&local_c8,local_58);
      puVar11 = (undefined8 *)FUN_14374ea80(param_1[3] + 0x2b0,local_50,uVar1,*puVar11);
      local_88 = *puVar11;
      puVar11 = (undefined8 *)FUN_1437429a0(&local_c8,local_48);
      uVar1 = *puVar11;
      puVar11 = (undefined8 *)FUN_1437429a0(&local_c8,local_80);
      local_res18 = *puVar11;
      local_b0 = 0;
      lStack_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      (**(code **)(*(longlong *)(local_b8 & 0xfffffffffffffffe) + 0x68))
                ((longlong *)(local_b8 & 0xfffffffffffffffe),local_res20,local_c8,uStack_c0,
                 &local_b0);
      local_90 = local_b0;
      if ((local_98 & 1) != 0) {
        FUN_143733a60(local_98 & 0xfffffffffffffffe);
      }
      uVar5 = FUN_1437152f0(*(undefined8 *)(param_2 + 0x28));
      uVar10 = FUN_1437152f0(uVar1);
      uVar8 = FUN_1437152f0(*(undefined8 *)(param_2 + 0x28));
      uVar9 = FUN_1437152f0(local_res18);
      FUN_1437b4320(&local_res18,local_88,local_90,uVar9,*(undefined8 *)(param_2 + 0x18),uVar8,
                    uVar10,uVar5,iVar6);
    }
    puVar12 = (ulonglong *)FUN_143714420(uStack_c0,1);
    uVar13 = uVar16;
    if (puVar12 != (ulonglong *)0x0) {
      uVar13 = *puVar12;
    }
    if ((int)(uVar13 >> 8) == 0) {
      puVar14 = (undefined8 *)FUN_1437429a0(&local_c8,local_res20);
      puVar11 = &local_78;
      uVar1 = *puVar14;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      (**(code **)(*(longlong *)(local_b8 & 0xfffffffffffffffe) + 0x68))
                ((longlong *)(local_b8 & 0xfffffffffffffffe),&local_res18,local_c8,uStack_c0,puVar11
                );
      uVar2 = local_78;
      uVar5 = (undefined4)((ulonglong)puVar11 >> 0x20);
      if ((local_60 & 1) != 0) {
        FUN_143733a60(local_60 & 0xfffffffffffffffe);
      }
      plVar15 = (longlong *)FUN_1437429a0(&local_c8,local_80);
      local_b0 = uVar2;
      lStack_a8 = *plVar15;
      if (lStack_a8 != 0) {
        uVar16 = FUN_1437151a0();
      }
      local_a0 = uVar16;
      if ((uVar16 & 1) != 0) {
        FUN_1437329e0(uVar16 & 0xfffffffffffffffe);
      }
      uVar10 = FUN_1437152f0(uVar1);
      FUN_1437b9cd0(param_1[3],&local_b0,iVar6,uVar10,CONCAT44(uVar5,0xffffffff),0xffffffff);
    }
    if ((local_b8 & 1) != 0) {
      FUN_143733a60(local_b8 & 0xfffffffffffffffe);
    }
    return;
  }
  uVar5 = FUN_1437bcc60(param_2);
  FUN_1437bf210(param_1,uVar5);
  return;
}



// FUNCTION 1437b8e40 FUN_1437b8e40 body=465 status=ok
// SIG undefined FUN_1437b8e40(void)

void FUN_1437b8e40(longlong *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong local_38;
  undefined8 uStack_30;
  
  uVar1 = param_1[1];
  lVar9 = (longlong)(int)param_2;
  puVar4 = (undefined8 *)FUN_143714490(uVar1,1);
  uVar10 = 0;
  bVar6 = 0;
  bVar7 = bVar6;
  if (puVar4 != (undefined8 *)0x0) {
    bVar7 = (byte)*puVar4;
  }
  uVar5 = uVar10;
  if ((bVar7 & 0xf) == 4) {
    uVar5 = uVar1;
  }
  if (uVar5 == 0) {
    uVar1 = param_1[1];
    puVar4 = (undefined8 *)FUN_143714490(uVar1,1);
    bVar7 = bVar6;
    if (puVar4 != (undefined8 *)0x0) {
      bVar7 = (byte)*puVar4;
    }
    uVar5 = uVar10;
    if ((bVar7 & 0xf) == 2) {
      uVar5 = uVar1;
    }
    if (uVar5 == 0) {
      return;
    }
    local_38 = 0;
    uStack_30 = 0;
    lVar8 = uStack_30;
    lVar9 = local_38;
    if (param_1[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar6 = (byte)*puVar4;
      }
      lVar8 = uStack_30;
      lVar9 = local_38;
      if ((bVar6 & 0xf) == 2) {
        lVar9 = *param_1;
        lVar8 = param_1[1];
        if ((*(byte *)(param_1 + 2) & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar10 = param_1[2];
      }
    }
    plVar11 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    (**(code **)(*plVar11 + 0x30))(plVar11,local_res8,lVar9,lVar8,param_2 != 0);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    lVar8 = uStack_30;
    if (param_1[1] != 0) {
      puVar4 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar6 = (byte)*puVar4;
      }
      lVar8 = uStack_30;
      if ((bVar6 & 0xf) == 4) {
        lVar2 = *param_1;
        lVar8 = param_1[1];
        if ((*(byte *)(param_1 + 2) & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar10 = param_1[2];
        local_38 = lVar2;
      }
    }
    lVar2 = uStack_30;
    if ((int)param_2 < 0) {
      lVar9 = (longlong)(int)~param_2 + 1;
    }
    uStack_30 = CONCAT71(uStack_30._1_7_,(byte)(param_2 >> 0x1f));
    uVar3 = uStack_30;
    uStack_30._4_4_ = SUB84(lVar2,4);
    plVar11 = (longlong *)(uVar10 & 0xfffffffffffffffe);
    uStack_30 = CONCAT44(uStack_30._4_4_,(int)uVar3);
    lVar2 = local_38;
    local_38 = lVar9;
    (**(code **)(*plVar11 + 0x30))(plVar11,local_res8,lVar2,lVar8,&local_38);
  }
  if ((uVar10 & 1) != 0) {
    FUN_143733a60(plVar11);
  }
  return;
}



// FUNCTION 1437b9020 FUN_1437b9020 body=447 status=ok
// SIG undefined FUN_1437b9020(void)

void FUN_1437b9020(ulonglong *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  ulonglong local_38;
  ulonglong uStack_30;
  
  uVar5 = param_1[1];
  puVar1 = (undefined8 *)FUN_143714490(uVar5,1);
  uVar6 = 0;
  bVar3 = 0;
  bVar4 = bVar3;
  if (puVar1 != (undefined8 *)0x0) {
    bVar4 = (byte)*puVar1;
  }
  uVar2 = uVar6;
  if ((bVar4 & 0xf) == 4) {
    uVar2 = uVar5;
  }
  if (uVar2 == 0) {
    uVar5 = param_1[1];
    puVar1 = (undefined8 *)FUN_143714490(uVar5,1);
    bVar4 = bVar3;
    if (puVar1 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar1;
    }
    uVar2 = uVar6;
    if ((bVar4 & 0xf) == 2) {
      uVar2 = uVar5;
    }
    if (uVar2 == 0) {
      return;
    }
    local_38 = 0;
    uStack_30 = 0;
    uVar2 = uStack_30;
    uVar5 = local_38;
    if (param_1[1] != 0) {
      puVar1 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar1 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar1;
      }
      uVar2 = uStack_30;
      uVar5 = local_38;
      if ((bVar3 & 0xf) == 2) {
        uVar5 = *param_1;
        uVar2 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar6 = param_1[2];
      }
    }
    plVar7 = (longlong *)(uVar6 & 0xfffffffffffffffe);
    (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,uVar5,uVar2,param_2 != 0);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    uVar2 = uStack_30;
    uVar5 = local_38;
    if (param_1[1] != 0) {
      puVar1 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar1 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar1;
      }
      uVar2 = uStack_30;
      uVar5 = local_38;
      if ((bVar3 & 0xf) == 4) {
        uVar5 = *param_1;
        uVar2 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar6 = param_1[2];
      }
    }
    plVar7 = (longlong *)(uVar6 & 0xfffffffffffffffe);
    local_38 = (ulonglong)param_2;
    uStack_30 = uStack_30 & 0xffffffffffffff00;
    (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,uVar5,uVar2,&local_38);
  }
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  return;
}



// FUNCTION 1437b91e0 FUN_1437b91e0 body=202 status=ok
// SIG undefined FUN_1437b91e0(void)

void FUN_1437b91e0(undefined8 *param_1,float param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 local_res10 [8];
  undefined8 uStack_30;
  
  uVar4 = 0;
  uStack_30 = 0;
  if (param_1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 5) {
      uVar3 = *param_1;
      uStack_30 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_1[2];
      goto LAB_1437b9259;
    }
  }
  uVar3 = 0;
LAB_1437b9259:
  plVar5 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x30))(plVar5,local_res10,uVar3,uStack_30,(double)param_2);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(plVar5);
  }
  return;
}



// FUNCTION 1437b92b0 FUN_1437b92b0 body=182 status=ok
// SIG undefined FUN_1437b92b0(void)

void FUN_1437b92b0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 uStack_30;
  
  uVar4 = 0;
  uStack_30 = 0;
  if (param_1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 3) {
      uVar3 = *param_1;
      uStack_30 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_1[2];
      goto LAB_1437b9322;
    }
  }
  uVar3 = 0;
LAB_1437b9322:
  plVar5 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x30))(plVar5,local_res8,uVar3,uStack_30,param_2);
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(plVar5);
  }
  return;
}



// FUNCTION 1437b9370 FUN_1437b9370 body=482 status=ok
// SIG undefined FUN_1437b9370(void)

void FUN_1437b9370(ulonglong *param_1,ushort param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  float local_res8 [2];
  ushort local_res10;
  ulonglong local_38;
  ulonglong uStack_30;
  
  uVar6 = param_1[1];
  local_res10 = param_2;
  puVar2 = (undefined8 *)FUN_143714490(uVar6,1);
  uVar1 = local_res10;
  uVar7 = 0;
  bVar4 = 0;
  bVar5 = bVar4;
  if (puVar2 != (undefined8 *)0x0) {
    bVar5 = (byte)*puVar2;
  }
  uVar3 = uVar7;
  if ((bVar5 & 0xf) == 4) {
    uVar3 = uVar6;
  }
  if (uVar3 == 0) {
    uVar6 = param_1[1];
    puVar2 = (undefined8 *)FUN_143714490(uVar6,1);
    bVar5 = bVar4;
    if (puVar2 != (undefined8 *)0x0) {
      bVar5 = (byte)*puVar2;
    }
    uVar3 = uVar7;
    if ((bVar5 & 0xf) == 5) {
      uVar3 = uVar6;
    }
    if (uVar3 == 0) {
      return;
    }
    local_38 = 0;
    uStack_30 = 0;
    uVar3 = uStack_30;
    uVar6 = local_38;
    if (param_1[1] != 0) {
      puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar2 != (undefined8 *)0x0) {
        bVar4 = (byte)*puVar2;
      }
      uVar3 = uStack_30;
      uVar6 = local_38;
      if ((bVar4 & 0xf) == 5) {
        uVar6 = *param_1;
        uVar3 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar7 = param_1[2];
      }
    }
    local_res8[0] = (float)((int)(short)local_res10 << 0x10);
    plVar8 = (longlong *)(uVar7 & 0xfffffffffffffffe);
    (**(code **)(*plVar8 + 0x30))(plVar8,local_res8,uVar6,uVar3,(double)local_res8[0]);
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    uVar3 = uStack_30;
    uVar6 = local_38;
    if (param_1[1] != 0) {
      puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar2 != (undefined8 *)0x0) {
        bVar4 = (byte)*puVar2;
      }
      uVar3 = uStack_30;
      uVar6 = local_38;
      if ((bVar4 & 0xf) == 4) {
        uVar6 = *param_1;
        uVar3 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar7 = param_1[2];
      }
    }
    plVar8 = (longlong *)(uVar7 & 0xfffffffffffffffe);
    local_38 = (ulonglong)uVar1;
    uStack_30 = uStack_30 & 0xffffffffffffff00;
    (**(code **)(*plVar8 + 0x30))(plVar8,local_res8,uVar6,uVar3,&local_38);
  }
  if ((uVar7 & 1) != 0) {
    FUN_143733a60(plVar8);
  }
  return;
}



// FUNCTION 1437b9560 FUN_1437b9560 body=223 status=ok
// SIG undefined FUN_1437b9560(void)

void FUN_1437b9560(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong local_38;
  undefined8 uStack_30;
  
  uVar6 = 0;
  local_38 = 0;
  uStack_30 = 0;
  lVar5 = uStack_30;
  if (param_1[1] != 0) {
    puVar4 = (undefined8 *)FUN_143714490(param_1[1],1);
    if (puVar4 == (undefined8 *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (byte)*puVar4;
    }
    lVar5 = uStack_30;
    if ((bVar3 & 0xf) == 4) {
      lVar1 = *param_1;
      lVar5 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_1[2];
      local_38 = lVar1;
    }
  }
  lVar1 = uStack_30;
  uStack_30 = CONCAT71(uStack_30._1_7_,(byte)(param_2 >> 0x3f));
  uVar2 = uStack_30;
  uStack_30._4_4_ = SUB84(lVar1,4);
  plVar7 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  uStack_30 = CONCAT44(uStack_30._4_4_,(int)uVar2);
  lVar1 = local_38;
  local_38 = (param_2 ^ (longlong)param_2 >> 0x3f) - ((longlong)param_2 >> 0x3f);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,lVar1,lVar5,&local_38);
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  return;
}



// FUNCTION 1437b9640 FUN_1437b9640 body=423 status=ok
// SIG undefined FUN_1437b9640(void)

void FUN_1437b9640(ulonglong *param_1,byte param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  ulonglong *puVar8;
  ulonglong local_38;
  ulonglong uStack_30;
  
  uVar5 = param_1[1];
  puVar1 = (undefined8 *)FUN_143714490(uVar5,1);
  uVar6 = 0;
  bVar3 = 0;
  bVar4 = bVar3;
  if (puVar1 != (undefined8 *)0x0) {
    bVar4 = (byte)*puVar1;
  }
  uVar2 = uVar6;
  if ((bVar4 & 0xf) == 2) {
    uVar2 = uVar5;
  }
  if (uVar2 == 0) {
    uVar5 = param_1[1];
    puVar1 = (undefined8 *)FUN_143714490(uVar5,1);
    bVar4 = bVar3;
    if (puVar1 != (undefined8 *)0x0) {
      bVar4 = (byte)*puVar1;
    }
    uVar2 = uVar6;
    if ((bVar4 & 0xf) == 4) {
      uVar2 = uVar5;
    }
    if (uVar2 == 0) {
      return;
    }
    local_38 = 0;
    uStack_30 = 0;
    uVar2 = uStack_30;
    uVar5 = local_38;
    if (param_1[1] != 0) {
      puVar1 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar1 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar1;
      }
      uVar2 = uStack_30;
      uVar5 = local_38;
      if ((bVar3 & 0xf) == 4) {
        uVar5 = *param_1;
        uVar2 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar6 = param_1[2];
      }
    }
    puVar8 = &local_38;
    local_38 = (ulonglong)param_2;
    uStack_30 = uStack_30 & 0xffffffffffffff00;
  }
  else {
    local_38 = 0;
    uStack_30 = 0;
    if (param_1[1] != 0) {
      puVar1 = (undefined8 *)FUN_143714490(param_1[1],1);
      if (puVar1 != (undefined8 *)0x0) {
        bVar3 = (byte)*puVar1;
      }
      if ((bVar3 & 0xf) == 2) {
        uVar5 = *param_1;
        uVar2 = param_1[1];
        if ((param_1[2] & 1) != 0) {
          FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
        }
        uVar6 = param_1[2];
        puVar8 = (ulonglong *)(ulonglong)param_2;
        goto LAB_1437b97a8;
      }
    }
    puVar8 = (ulonglong *)(ulonglong)param_2;
    uVar2 = uStack_30;
    uVar5 = local_38;
  }
LAB_1437b97a8:
  plVar7 = (longlong *)(uVar6 & 0xfffffffffffffffe);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_res8,uVar5,uVar2,puVar8);
  if ((uVar6 & 1) != 0) {
    FUN_143733a60(plVar7);
  }
  return;
}



// FUNCTION 1437b97f0 FUN_1437b97f0 body=209 status=ok
// SIG undefined FUN_1437b97f0(void)

undefined8 FUN_1437b97f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  longlong local_res10;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  uVar1 = param_1[1];
  puVar5 = (undefined8 *)FUN_143714490(uVar1,1);
  local_28 = 0;
  if (puVar5 == (undefined8 *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)*puVar5;
  }
  uVar6 = local_28;
  if ((bVar3 & 0xf) == 7) {
    uVar6 = uVar1;
  }
  FUN_1437bc130(&local_res10,uVar6,param_3);
  local_res8[0] = (undefined4)param_1[4];
  lVar2 = *param_1;
  iVar4 = FUN_143715270(&local_res10);
  local_38 = iVar4 + lVar2;
  local_30 = local_res10;
  if (local_res10 != 0) {
    local_28 = FUN_1437151a0(local_res10);
  }
  if ((local_28 & 1) != 0) {
    FUN_1437329e0(local_28 & 0xfffffffffffffffe);
  }
  FUN_1437b7f80(param_2,&local_38,param_1[3],local_res8);
  return param_2;
}



// FUNCTION 1437b98d0 FUN_1437b98d0 body=106 status=ok
// SIG undefined FUN_1437b98d0(void)

longlong FUN_1437b98d0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = FUN_1437bce20(param_2);
  uVar3 = (ulonglong)(uVar2 & *(uint *)(param_1 + 3));
  lVar1 = param_1[2];
  iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
  if (-1 < iVar4) {
    do {
      if (*(int *)(*param_1 + (longlong)iVar4 * 8) == *param_2) {
        return lVar1 + uVar3 * 8;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1U & *(uint *)(param_1 + 3));
      iVar4 = *(int *)(lVar1 + 4 + uVar3 * 8);
    } while (-1 < iVar4);
  }
  return 0;
}



// FUNCTION 1437b9940 FUN_1437b9940 body=137 status=ok
// SIG undefined FUN_1437b9940(void)

void FUN_1437b9940(longlong *param_1)

{
  undefined4 local_res8 [2];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_res8[0] = (undefined4)param_1[4];
  FUN_1437bc720(param_1[3],&local_28,param_1,local_res8);
  if (local_28 != 0) {
    *param_1 = local_28;
    param_1[1] = local_20;
    if ((local_18 & 1) != 0) {
      FUN_1437329e0(local_18 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      FUN_143733a60(param_1[2] & 0xfffffffffffffffe);
    }
    param_1[2] = local_18;
  }
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437b99d0 FUN_1437b99d0 body=266 status=ok
// SIG undefined FUN_1437b99d0(void)

void FUN_1437b99d0(ulonglong *param_1,ulonglong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  while( true ) {
    while (param_2 < *param_1) {
      param_1 = (ulonglong *)param_1[4];
      if (param_1 == (ulonglong *)0x0) {
        return;
      }
    }
    if (param_2 <= param_1[1]) break;
    param_1 = (ulonglong *)param_1[5];
    if (param_1 == (ulonglong *)0x0) {
      return;
    }
  }
  if ((*param_1 <= param_2) && (param_2 <= param_1[1])) {
    uVar2 = FUN_143703a50();
    if ((uint)param_1[3] == (*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff)) {
      FUN_14370c460(uVar2,param_1 + 2,4);
    }
    *(undefined4 *)(param_1[2] + (longlong)(int)param_1[3] * 4) = param_3;
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  }
  iVar3 = 0;
  if (0 < (int)param_1[7]) {
    lVar4 = 0;
    do {
      puVar1 = *(ulonglong **)(lVar4 + param_1[6]);
      if ((*puVar1 <= param_2) && (param_2 <= puVar1[1])) {
        uVar2 = FUN_143703a50();
        if ((uint)puVar1[3] == (*(uint *)((longlong)puVar1 + 0x1c) & 0x3fffffff)) {
          FUN_14370c460(uVar2,puVar1 + 2,4);
        }
        *(undefined4 *)(puVar1[2] + (longlong)(int)puVar1[3] * 4) = param_3;
        *(int *)(puVar1 + 3) = (int)puVar1[3] + 1;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < (int)param_1[7]);
  }
  return;
}



// FUNCTION 1437b9ae0 FUN_1437b9ae0 body=485 status=ok
// SIG undefined FUN_1437b9ae0(void)

int FUN_1437b9ae0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar6 + 8 + *(longlong *)(param_1 + 0x210));
      lVar2 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x210));
      if (lVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1437151a0(lVar1);
      }
      if ((uVar3 & 1) != 0) {
        FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
      }
      if ((lVar1 == param_2[1]) && (lVar2 == *param_2)) {
        if ((uVar3 & 1) != 0) {
          FUN_143733a60(uVar3 & 0xfffffffffffffffe);
        }
        if ((*(byte *)(param_2 + 2) & 1) == 0) {
          return iVar5;
        }
        FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
        return iVar5;
      }
      if ((uVar3 & 1) != 0) {
        FUN_143733a60(uVar3 & 0xfffffffffffffffe);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar5 < *(int *)(param_1 + 0x218));
  }
  iVar5 = *(int *)(param_1 + 0x218);
  local_38 = (local_38 >> 8 & 0xffffff) << 8;
  local_48 = 0;
  lStack_40 = 0;
  FUN_1437b76f0(param_1 + 0x210,iVar5,&local_48);
  *(longlong *)((longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 0x210)) = *param_2;
  *(longlong *)((longlong)iVar5 * 0x18 + 8 + *(longlong *)(param_1 + 0x210)) = param_2[1];
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 0x280) == (*(uint *)(param_1 + 0x284) & 0x3fffffff)) {
    FUN_14370c460(uVar4,(longlong *)(param_1 + 0x278),4);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x278) + (longlong)*(int *)(param_1 + 0x280) * 4) = 1;
  *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
  local_48 = *param_2;
  local_38 = param_2[2];
  lStack_40 = param_2[1];
  if ((local_38 & 1) != 0) {
    FUN_1437329e0(local_38 & 0xfffffffffffffffe);
  }
  FUN_1437b9cd0(param_1,&local_48,1,0,iVar5,0xffffffff);
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return iVar5;
}



// FUNCTION 1437b9cd0 FUN_1437b9cd0 body=624 status=ok
// SIG undefined FUN_1437b9cd0(void)

void FUN_1437b9cd0(longlong param_1,longlong *param_2,int param_3,undefined4 param_4,uint param_5,
                  uint param_6)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  if (0 < param_3) {
    lVar3 = param_2[1];
    iVar7 = FUN_1437bca50(param_1,lVar3);
    lVar13 = *param_2;
    plVar14 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x1d8));
    uVar9 = FUN_143703a50();
    if (*(uint *)(plVar14 + 1) == (*(uint *)((longlong)plVar14 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar9,plVar14,0x18);
    }
    lVar1 = *plVar14 + (longlong)(int)plVar14[1] * 0x18;
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x10) = 0;
    }
    plVar2 = (longlong *)(*plVar14 + (longlong)(int)plVar14[1] * 0x18);
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    uVar4 = param_5;
    if (param_5 == 0xffffffff) {
      uVar4 = param_6;
    }
    *(int *)(plVar2 + 1) = param_3;
    *(undefined4 *)((longlong)plVar2 + 0xc) = param_4;
    uVar8 = 0;
    *plVar2 = lVar13;
    if (param_5 == 0xffffffff) {
      uVar8 = 0x80000000;
    }
    *(uint *)(plVar2 + 2) = uVar4 & 0x7fffffff | uVar8;
    puVar10 = (undefined8 *)FUN_143714490(lVar3);
    bVar5 = 0;
    if (puVar10 != (undefined8 *)0x0) {
      bVar5 = (byte)*puVar10;
    }
    lVar13 = 0;
    if ((bVar5 & 0xf) == 7) {
      lVar13 = lVar3;
    }
    if (lVar13 != 0) {
      hkReflect::DeclIterAll::DeclIterAll(&local_50,lVar13,0);
      while ((puVar10 = local_50 + 1, local_50 + 1 < local_48 ||
             (cVar6 = FUN_1437144f0(&local_50), puVar10 = local_50, cVar6 != '\0'))) {
        local_50 = puVar10;
        pbVar11 = (byte *)FUN_143714f30(local_50,local_78);
        if ((*pbVar11 & 0x20) != 0) {
          FUN_143714060(&local_70,*local_50);
          lVar13 = local_70;
          lVar3 = *param_2;
          iVar7 = FUN_143715270(&local_70);
          if (lVar13 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = FUN_1437151a0(lVar13);
          }
          if ((uVar12 & 1) != 0) {
            FUN_1437329e0(uVar12 & 0xfffffffffffffffe);
          }
          local_60 = lVar13;
          local_68 = iVar7 + lVar3;
          local_58 = uVar12;
          if ((uVar12 & 1) != 0) {
            FUN_1437329e0(uVar12 & 0xfffffffffffffffe);
          }
          FUN_1437b9cd0(param_1,&local_68,param_3,param_4,param_5,param_6);
          if ((uVar12 & 1) != 0) {
            FUN_143733a60(uVar12 & 0xfffffffffffffffe);
          }
        }
      }
    }
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 1437b9f40 FUN_1437b9f40 body=369 status=ok
// SIG undefined FUN_1437b9f40(void)

undefined8 FUN_1437b9f40(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  byte bVar8;
  ulonglong local_res10;
  undefined1 local_res18 [16];
  
  FUN_143714060(&local_res10);
  if (1 < local_res10) {
    if (local_res10 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_143714de0();
    }
    lVar3 = FUN_1437b9f40(param_1,uVar2);
    if (lVar3 == 0) {
      return 0;
    }
    uVar2 = FUN_1437151c0(&local_res10);
    puVar4 = (undefined8 *)FUN_143714a90(lVar3,local_res18,uVar2,0);
    return *puVar4;
  }
  cVar1 = FUN_14377b670(param_1 + 0x68,param_2);
  if (cVar1 != '\0') {
    puVar4 = (undefined8 *)FUN_143714490(param_2,1);
    lVar3 = 0;
    bVar7 = 0;
    bVar8 = bVar7;
    if (puVar4 != (undefined8 *)0x0) {
      bVar8 = (byte)*puVar4;
    }
    lVar5 = lVar3;
    if ((bVar8 & 0xf) == 7) {
      lVar5 = param_2;
    }
    if (lVar5 == 0) {
      puVar4 = (undefined8 *)FUN_143714490(param_2,1);
      if (puVar4 != (undefined8 *)0x0) {
        bVar7 = (byte)*puVar4;
      }
      lVar5 = lVar3;
      if ((bVar7 & 0xf) == 6) {
        lVar5 = param_2;
      }
      if (lVar5 != 0) {
        plVar6 = (longlong *)FUN_143714420(lVar5,2);
        if (plVar6 != (longlong *)0x0) {
          lVar3 = *plVar6;
        }
        lVar3 = FUN_1437b9f40(param_1,lVar3);
        if (lVar3 != 0) {
          uVar2 = FUN_1437151f0(lVar5);
          uVar2 = FUN_1437b41f0(param_1 + 0x2e8,lVar3,uVar2);
          return uVar2;
        }
      }
    }
    else {
      puVar4 = (undefined8 *)FUN_14377d260(param_1 + 0x68,0,0,param_2);
      if (puVar4 != (undefined8 *)0x0) {
        return *puVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1437ba0c0 FUN_1437ba0c0 body=1032 status=ok
// SIG undefined FUN_1437ba0c0(void)

void FUN_1437ba0c0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint local_res18 [2];
  uint local_res20;
  longlong local_58;
  undefined1 local_50 [16];
  
  uVar18 = *(uint *)(param_2 + 1);
  lVar14 = (longlong)(int)uVar18;
  local_res18[0] = uVar18;
  uVar6 = FUN_143703a50();
  uVar24 = local_res18[0];
  puVar9 = (ulonglong *)0x0;
  local_res20 = local_res18[0];
  puVar7 = puVar9;
  if (local_res18[0] != 0) {
    puVar7 = (ulonglong *)FUN_143702d60(uVar6,0x40,local_res18);
  }
  uVar23 = 0x80000000;
  if (local_res18[0] != 0) {
    uVar23 = local_res18[0];
  }
  if (0 < (int)uVar18) {
    puVar11 = (undefined4 *)((longlong)puVar7 + 0x1c);
    do {
      if (puVar11 != (undefined4 *)0x1c) {
        *(undefined8 *)(puVar11 + -3) = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
        *(undefined8 *)(puVar11 + 1) = 0;
        *(undefined8 *)(puVar11 + 3) = 0;
        *(undefined8 *)(puVar11 + 5) = 0;
        puVar11[7] = 0;
        puVar11[8] = 0x80000000;
      }
      puVar11 = puVar11 + 0x10;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  puVar15 = puVar7;
  puVar19 = puVar9;
  if (0 < (int)param_2[1]) {
    do {
      lVar14 = *param_2;
      *puVar15 = *(ulonglong *)(lVar14 + 0x18 + (longlong)puVar9);
      iVar3 = FUN_1437152f0(*(undefined8 *)(lVar14 + 0x20 + (longlong)puVar9));
      puVar9 = puVar9 + 6;
      uVar18 = (int)puVar19 + 1;
      puVar15[1] = (longlong)iVar3 + -1 + *puVar15;
      puVar15 = puVar15 + 8;
      puVar19 = (ulonglong *)(ulonglong)uVar18;
    } while ((int)uVar18 < (int)param_2[1]);
  }
  if (1 < (int)uVar24) {
    uVar17 = (ulonglong)(uVar24 - 1);
    puVar9 = puVar7;
    do {
      puVar19 = puVar9 + 8;
      puVar15 = puVar7;
      do {
        while (puVar12 = puVar15, puVar9[9] < *puVar12) {
          puVar15 = (ulonglong *)puVar12[4];
          if ((ulonglong *)puVar12[4] == (ulonglong *)0x0) {
            puVar12[4] = (ulonglong)puVar19;
            goto LAB_1437ba26c;
          }
        }
        if (*puVar19 <= puVar12[1]) {
          uVar6 = FUN_143703a50();
          if ((uint)puVar12[7] == (*(uint *)((longlong)puVar12 + 0x3c) & 0x3fffffff)) {
            FUN_14370c460(uVar6,puVar12 + 6,8);
          }
          *(ulonglong **)(puVar12[6] + (longlong)(int)puVar12[7] * 8) = puVar19;
          *(int *)(puVar12 + 7) = (int)puVar12[7] + 1;
          goto LAB_1437ba26c;
        }
        puVar15 = (ulonglong *)puVar12[5];
      } while ((ulonglong *)puVar12[5] != (ulonglong *)0x0);
      puVar12[5] = (ulonglong)puVar19;
LAB_1437ba26c:
      uVar17 = uVar17 - 1;
      puVar9 = puVar19;
    } while (uVar17 != 0);
  }
  uVar13 = 0;
  uVar17 = uVar13;
  if (0 < (int)uVar24) {
    do {
      FUN_1437b99d0(puVar7,*(undefined8 *)(uVar17 + *param_2),uVar13);
      uVar18 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar18;
      uVar17 = uVar17 + 0x30;
    } while ((int)uVar18 < (int)uVar24);
  }
  uVar13 = 0;
  uVar17 = uVar13;
  if (0 < (int)uVar24) {
    do {
      iVar22 = (int)uVar17;
      puVar9 = puVar7 + uVar13 * 8;
      iVar3 = iVar22;
      if ((*puVar9 != 0) && ((int)puVar9[3] == 0)) {
        lVar14 = *param_2;
        uVar6 = *(undefined8 *)(lVar14 + 0x20 + uVar13 * 0x30);
        uVar10 = *(undefined8 *)(lVar14 + 0x18 + uVar13 * 0x30);
        uVar1 = *(undefined8 *)(lVar14 + uVar13 * 0x30);
        uVar2 = *(undefined8 *)(lVar14 + 8 + uVar13 * 0x30);
        uVar4 = FUN_1437152f0(uVar6);
        uVar5 = FUN_1437152f0(uVar2);
        puVar8 = (undefined8 *)FUN_14374ea80(param_1 + 0x2b0,local_50,uVar6,uVar2);
        uVar13 = 0;
        iVar3 = 0;
        local_58 = param_1;
        FUN_1437b5bc0(&local_58,*puVar8,uVar1,uVar5,uVar10,uVar4,0,0,1);
        *puVar9 = 0;
        uVar17 = (ulonglong)local_res20;
        puVar9 = puVar7 + 3;
        do {
          uVar20 = uVar13;
          uVar21 = uVar13;
          if (0 < (int)*puVar9) {
            do {
              if (*(int *)(uVar21 + puVar9[-1]) == iVar22) {
                *(int *)puVar9 = (int)*puVar9 + -1;
                if ((int)*puVar9 != (int)uVar20) {
                  *(undefined4 *)(puVar9[-1] + uVar21) =
                       *(undefined4 *)(puVar9[-1] + (longlong)(int)*puVar9 * 4);
                }
              }
              uVar18 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar18;
              uVar21 = uVar21 + 4;
            } while ((int)uVar18 < (int)*puVar9);
          }
          puVar9 = puVar9 + 8;
          uVar17 = uVar17 - 1;
          uVar24 = local_res20;
        } while (uVar17 != 0);
      }
      uVar13 = uVar13 + 1;
      uVar17 = (ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < (int)uVar24);
  }
  uVar6 = FUN_143703a50();
  lVar14 = (longlong)(int)(uVar24 - 1);
  if (-1 < (int)(uVar24 - 1)) {
    puVar16 = (uint *)((longlong)puVar7 + lVar14 * 0x40 + 0x3c);
    do {
      uVar10 = FUN_143703a50();
      puVar16[-1] = 0;
      if (-1 < (int)*puVar16) {
        FUN_143702e10(uVar10,*(undefined8 *)(puVar16 + -3),8,*puVar16 & 0x3fffffff);
      }
      puVar16[-3] = 0;
      puVar16[-2] = 0;
      *puVar16 = 0x80000000;
      uVar10 = FUN_143703a50();
      puVar16[-9] = 0;
      if (-1 < (int)puVar16[-8]) {
        FUN_143702e10(uVar10,*(undefined8 *)(puVar16 + -0xb),4,puVar16[-8] & 0x3fffffff);
      }
      puVar16[-0xb] = 0;
      puVar16[-10] = 0;
      puVar16[-8] = 0x80000000;
      puVar16 = puVar16 + -0x10;
      lVar14 = lVar14 + -1;
    } while (-1 < lVar14);
  }
  if (-1 < (int)uVar23) {
    FUN_143702e10(uVar6,puVar7,0x40,uVar23 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437ba4d0 FUN_1437ba4d0 body=1223 status=ok
// SIG undefined FUN_1437ba4d0(void)

void FUN_1437ba4d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6,int param_7,float *param_8,undefined4 param_9)

{
  longlong lVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong local_98;
  int local_90;
  uint local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined1 local_58 [8];
  LPVOID local_50;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_50 = TlsGetValue(DAT_146b8198c);
  if (local_50 != (LPVOID)0x0) {
    FUN_14370d5c0(local_50,"TtPATCH_MEMBER_ADDED");
  }
  FUN_1437bc130(&local_88,param_3,param_4);
  pfVar2 = param_8;
  if (param_8 != (float *)0x0) {
    local_98 = 0;
    local_90 = 0;
    local_8c = 0x80000000;
    FUN_1437bb690(param_1,param_2,&local_98);
    iVar15 = 0;
    if (0 < local_90) {
      lVar13 = 0;
      do {
        FUN_143714060(&local_80,local_88);
        lVar1 = local_80;
        lVar14 = *(longlong *)(local_98 + lVar13);
        iVar3 = FUN_143715270(&local_80);
        lVar14 = iVar3 + lVar14;
        puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
        bVar10 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          bVar10 = (byte)*puVar6;
        }
        lVar12 = 0;
        if ((bVar10 & 0xf) == 2) {
          lVar12 = lVar1;
        }
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
          bVar10 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            bVar10 = (byte)*puVar6;
          }
          lVar12 = 0;
          if ((bVar10 & 0xf) == 4) {
            lVar12 = lVar1;
          }
          if (lVar12 != 0) {
            uVar7 = FUN_1437151a0(lVar12);
            bVar10 = (byte)uVar7 & 1;
            if ((uVar7 & 1) != 0) {
              FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
            }
            lVar1 = *(longlong *)pfVar2;
            local_78 = lVar1;
            if (lVar1 < 0) {
              local_78 = -lVar1;
            }
            puVar6 = (undefined8 *)local_58;
            plVar8 = &local_78;
            uStack_40 = CONCAT31(uStack_40._1_3_,(byte)((ulonglong)lVar1 >> 0x3f));
            uStack_70 = CONCAT44(uStack_3c,uStack_40);
            local_48 = local_78;
            goto LAB_1437ba6e1;
          }
          puVar6 = (undefined8 *)FUN_143714490(lVar1,1);
          bVar10 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            bVar10 = (byte)*puVar6;
          }
          lVar12 = 0;
          if ((bVar10 & 0xf) == 5) {
            lVar12 = lVar1;
          }
          if (lVar12 != 0) {
            uVar7 = FUN_1437151a0(lVar12);
            bVar10 = (byte)uVar7 & 1;
            if ((uVar7 & 1) != 0) {
              FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
            }
            puVar6 = (undefined8 *)(local_58 + 4);
            plVar8 = (longlong *)(double)*pfVar2;
            goto LAB_1437ba6e1;
          }
          uVar4 = FUN_1437152f0(local_80);
          FUN_14370c700(lVar14,pfVar2,uVar4);
        }
        else {
          uVar7 = FUN_1437151a0(lVar12);
          bVar10 = (byte)uVar7 & 1;
          if ((uVar7 & 1) != 0) {
            FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
          }
          puVar6 = &param_8;
          plVar8 = (longlong *)(ulonglong)(*(longlong *)pfVar2 != 0);
LAB_1437ba6e1:
          plVar9 = (longlong *)(uVar7 & 0xfffffffffffffffe);
          (**(code **)(*plVar9 + 0x30))(plVar9,puVar6,lVar14,lVar12,plVar8);
          if (bVar10 != 0) {
            FUN_143733a60(plVar9);
          }
        }
        iVar15 = iVar15 + 1;
        lVar13 = lVar13 + 0x18;
      } while (iVar15 < local_90);
    }
    local_90 = 0;
    if (-1 < (int)local_8c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_98,0x18,local_8c & 0x3fffffff);
    }
  }
  if (param_5 == 9) {
    local_98 = 0;
    local_90 = 0;
    local_8c = 0x80000000;
    FUN_1437bb690(param_1,param_2,&local_98);
    iVar15 = 0;
    if (0 < local_90) {
      lVar13 = 0;
      do {
        lVar1 = local_88;
        lVar14 = local_98;
        iVar3 = FUN_143715270(&local_88);
        local_78 = (longlong)iVar3 + *(longlong *)(lVar13 + lVar14);
        uStack_70 = lVar1;
        if (lVar1 == 0) {
          local_68 = 0;
        }
        else {
          local_68 = FUN_1437151a0(lVar1);
        }
        if ((local_68 & 1) != 0) {
          FUN_1437329e0(local_68 & 0xfffffffffffffffe);
        }
        FUN_1437449a0(&local_78);
        if ((local_68 & 1) != 0) {
          FUN_143733a60(local_68 & 0xfffffffffffffffe);
        }
        iVar15 = iVar15 + 1;
        lVar13 = lVar13 + 0x18;
      } while (iVar15 < local_90);
    }
  }
  else {
    if (param_5 != 0x29) goto LAB_1437ba941;
    local_98 = 0;
    local_90 = 0;
    local_8c = 0x80000000;
    FUN_1437bb690(param_1,param_2,&local_98);
    plVar8 = (longlong *)FUN_14377edb0(param_1 + 0x68,param_6,param_9);
    lVar13 = *plVar8;
    puVar6 = (undefined8 *)FUN_143714490(lVar13,1);
    bVar10 = 0;
    if (puVar6 != (undefined8 *)0x0) {
      bVar10 = (byte)*puVar6;
    }
    lVar14 = 0;
    if ((bVar10 & 0xf) == 7) {
      lVar14 = lVar13;
    }
    iVar15 = 0;
    if (0 < local_90) {
      lVar13 = 0;
      iVar3 = local_90;
      do {
        iVar11 = 0;
        if (0 < param_7) {
          do {
            lVar1 = local_98;
            iVar3 = FUN_1437152f0(lVar14);
            iVar5 = FUN_143715270(&local_88);
            local_78 = (longlong)(iVar5 + iVar3 * iVar11) + *(longlong *)(lVar13 + lVar1);
            uStack_70 = lVar14;
            if (lVar14 == 0) {
              local_68 = 0;
            }
            else {
              local_68 = FUN_1437151a0(lVar14);
            }
            if ((local_68 & 1) != 0) {
              FUN_1437329e0(local_68 & 0xfffffffffffffffe);
            }
            FUN_1437449a0(&local_78);
            if ((local_68 & 1) != 0) {
              FUN_143733a60(local_68 & 0xfffffffffffffffe);
            }
            iVar11 = iVar11 + 1;
            iVar3 = local_90;
          } while (iVar11 < param_7);
        }
        iVar15 = iVar15 + 1;
        lVar13 = lVar13 + 0x18;
      } while (iVar15 < iVar3);
    }
  }
  local_90 = 0;
  if (-1 < (int)local_8c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_98,0x18,local_8c & 0x3fffffff);
  }
LAB_1437ba941:
  if (local_50 != (LPVOID)0x0) {
    FUN_14370d750(local_50,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1437ba9a0 FUN_1437ba9a0 body=602 status=ok
// SIG undefined FUN_1437ba9a0(void)

void FUN_1437ba9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  longlong *plVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong local_38;
  longlong local_30;
  int local_28;
  uint local_24;
  
  FUN_1437bc130(&local_38,param_3,param_4);
  FUN_143714060(&local_30,local_38);
  puVar4 = (undefined8 *)FUN_1437143d0(local_30,0x80000);
  uVar7 = local_38;
  uVar12 = 0;
  *puVar4 = 0;
  puVar4 = (undefined8 *)FUN_143714490(local_38,1);
  uVar14 = local_38;
  bVar11 = 0;
  bVar2 = bVar11;
  if (puVar4 != (undefined8 *)0x0) {
    bVar2 = (byte)*puVar4;
  }
  uVar8 = uVar12;
  if ((bVar2 & 0xf) == 8) {
    uVar8 = uVar7;
  }
  if (uVar8 == 0) {
    puVar4 = (undefined8 *)FUN_143714490(local_38,1);
    if (puVar4 != (undefined8 *)0x0) {
      bVar11 = (byte)*puVar4;
    }
    uVar7 = uVar12;
    if ((bVar11 & 0xf) == 6) {
      uVar7 = uVar14;
    }
    if (uVar7 == 0) {
      return;
    }
    local_30 = 0;
    local_28 = 0;
    local_24 = 0x80000000;
    FUN_1437bb690(param_1,param_2,&local_30);
    uVar7 = uVar12;
    uVar14 = uVar12;
    if (0 < local_28) {
      do {
        uVar8 = local_38;
        plVar10 = (longlong *)(local_30 + uVar14);
        iVar3 = FUN_143715270(&local_38);
        lVar1 = *plVar10;
        uVar6 = uVar12;
        if (uVar8 != 0) {
          uVar6 = FUN_1437151a0(uVar8);
        }
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
        *(undefined4 *)(iVar3 + lVar1) = 0;
        if ((uVar6 & 1) != 0) {
          FUN_143733a60(uVar6 & 0xfffffffffffffffe);
        }
        uVar13 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar13;
        uVar14 = uVar14 + 0x18;
      } while ((int)uVar13 < local_28);
    }
  }
  else {
    puVar5 = (ulonglong *)FUN_143714420();
    uVar7 = uVar12;
    if (puVar5 != (ulonglong *)0x0) {
      uVar7 = *puVar5;
    }
    if ((int)(uVar7 >> 8) != 0) {
      return;
    }
    local_30 = 0;
    local_28 = 0;
    local_24 = 0x80000000;
    FUN_1437bb690(param_1,param_2,&local_30);
    uVar7 = uVar12;
    uVar14 = uVar12;
    if (0 < local_28) {
      do {
        uVar8 = local_38;
        plVar10 = (longlong *)(local_30 + uVar14);
        iVar3 = FUN_143715270(&local_38);
        piVar9 = (int *)((longlong)iVar3 + *plVar10);
        uVar6 = uVar12;
        if (uVar8 != 0) {
          uVar6 = FUN_1437151a0(uVar8);
        }
        if ((uVar6 & 1) != 0) {
          FUN_1437329e0(uVar6 & 0xfffffffffffffffe);
        }
        if (*piVar9 != 0) {
          *piVar9 = 0;
        }
        if ((uVar6 & 1) != 0) {
          FUN_143733a60(uVar6 & 0xfffffffffffffffe);
        }
        uVar13 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar13;
        uVar14 = uVar14 + 0x18;
      } while ((int)uVar13 < local_28);
    }
  }
  local_28 = 0;
  if (-1 < (int)local_24) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_30,0x18,local_24 & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437bac00 FUN_1437bac00 body=63 status=ok
// SIG undefined FUN_1437bac00(void)

undefined8 FUN_1437bac00(undefined8 *param_1,undefined8 param_2)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 4);
  FUN_1437b7990(param_2,*param_1,param_1[1],param_1[3],local_res8,0);
  return param_2;
}



// FUNCTION 1437bac40 FUN_1437bac40 body=232 status=ok
// SIG undefined FUN_1437bac40(void)

undefined2 * FUN_1437bac40(undefined8 *param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  float local_res8 [2];
  double local_res10;
  undefined8 uStack_30;
  
  uVar3 = 0;
  uStack_30 = 0;
  if (param_1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 5) {
      uVar5 = *param_1;
      uStack_30 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_1[2];
      goto LAB_1437bacb2;
    }
  }
  uVar5 = 0;
LAB_1437bacb2:
  local_res10 = 0.0;
  plVar4 = (longlong *)(uVar3 & 0xfffffffffffffffe);
  (**(code **)(*plVar4 + 0x38))(plVar4,local_res8,uVar5,uStack_30,&local_res10);
  local_res8[0] = (float)local_res10 * 1.0039062;
  *param_2 = (short)((uint)local_res8[0] >> 0x10);
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(plVar4);
  }
  return param_2;
}



// FUNCTION 1437bad30 FUN_1437bad30 body=638 status=ok
// SIG undefined FUN_1437bad30(void)

/* WARNING: Removing unreachable block (ram,0x0001437bae4a) */

undefined8 FUN_1437bad30(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte bVar10;
  uint local_res8 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  uVar7 = param_1[1];
  puVar4 = (undefined8 *)FUN_143714490(uVar7,1);
  uVar8 = 0;
  bVar3 = 0;
  bVar10 = bVar3;
  if (puVar4 != (undefined8 *)0x0) {
    bVar10 = (byte)*puVar4;
  }
  uVar5 = uVar8;
  if ((bVar10 & 0xf) == 7) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    local_res8[0] = *(uint *)(param_1 + 4);
    local_38 = param_1[2];
    local_48 = *param_1;
    uStack_40 = param_1[1];
    if ((local_38 & 1) != 0) {
      FUN_1437329e0(local_38 & 0xfffffffffffffffe);
    }
    FUN_1437b80d0(param_2,&local_48,param_1[3],local_res8);
    return param_2;
  }
  uVar7 = param_1[1];
  puVar4 = (undefined8 *)FUN_143714490(uVar7,1);
  if (puVar4 != (undefined8 *)0x0) {
    bVar3 = (byte)*puVar4;
  }
  uVar5 = uVar8;
  if ((bVar3 & 0xf) == 6) {
    uVar5 = uVar7;
  }
  if (uVar5 != 0) {
    uVar1 = *(uint *)*param_1;
    puVar6 = (ulonglong *)FUN_143714420(uVar5,2);
    uVar7 = uVar8;
    if ((puVar6 != (ulonglong *)0x0) && (uVar5 = *puVar6, uVar5 != 0)) {
      puVar4 = (undefined8 *)FUN_143714490(uVar5,1);
      if (puVar4 == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else if (((byte)*puVar4 & 0xf) == 7) {
        uVar7 = uVar5;
      }
    }
    if (uVar1 != 0) {
      if (uVar7 == 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1[3] + 0x210) + 8 + (longlong)(int)uVar1 * 0x18);
        uVar7 = uVar8;
        if (lVar2 != 0) {
          uVar7 = FUN_1437151a0(lVar2);
        }
        if ((uVar7 & 1) != 0) {
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
        }
        if ((uVar7 & 1) != 0) {
          FUN_143733a60(uVar7 & 0xfffffffffffffffe);
        }
        if (lVar2 != 0) {
          FUN_143714490(lVar2,1);
        }
      }
      if (*(longlong *)(*(longlong *)(param_1[3] + 0x210) + 8 + (longlong)(int)uVar1 * 0x18) != 0) {
        uVar8 = FUN_1437151a0();
      }
      if ((uVar8 & 1) != 0) {
        FUN_1437329e0(uVar8 & 0xfffffffffffffffe);
      }
      lVar2 = param_1[3];
      local_res8[0] = uVar1 & 0x7fffffff;
      uVar9 = FUN_1437bf6e0(lVar2 + 0x1f8,&local_48,uVar1);
      FUN_1437b80d0(param_2,uVar9,lVar2,local_res8);
      if ((uVar8 & 1) == 0) {
        return param_2;
      }
      FUN_143733a60(uVar8 & 0xfffffffffffffffe);
      return param_2;
    }
    if (uVar7 != 0) {
      local_res8[0] = 0;
      puVar4 = (undefined8 *)FUN_1437b8040(&local_48,0);
      goto LAB_1437baf88;
    }
  }
  local_res8[0] = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  puVar4 = &local_48;
LAB_1437baf88:
  FUN_1437b80d0(param_2,puVar4,param_1[3],local_res8);
  return param_2;
}



// FUNCTION 1437bafb0 FUN_1437bafb0 body=216 status=ok
// SIG undefined FUN_1437bafb0(void)

float FUN_1437bafb0(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 local_res8 [8];
  double local_res10;
  undefined8 uStack_40;
  
  uVar4 = 0;
  uStack_40 = 0;
  if (param_1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
    if (puVar2 == (undefined8 *)0x0) {
      bVar1 = 0;
    }
    else {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 5) {
      uVar3 = *param_1;
      uStack_40 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar4 = param_1[2];
      goto LAB_1437bb01e;
    }
  }
  uVar3 = 0;
LAB_1437bb01e:
  local_res10 = 0.0;
  plVar5 = (longlong *)(uVar4 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x38))(plVar5,local_res8,uVar3,uStack_40,&local_res10);
  fVar6 = (float)local_res10;
  if ((uVar4 & 1) != 0) {
    FUN_143733a60(plVar5);
  }
  return fVar6;
}



// FUNCTION 1437bb090 FUN_1437bb090 body=184 status=ok
// SIG undefined FUN_1437bb090(void)

undefined8 FUN_1437bb090(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 uStack_30;
  
  uVar3 = 0;
  uStack_30 = 0;
  if (param_1[1] != 0) {
    puVar2 = (undefined8 *)FUN_143714490(param_1[1],1);
    bVar1 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar2;
    }
    if ((bVar1 & 0xf) == 3) {
      uVar4 = *param_1;
      uStack_30 = param_1[1];
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        FUN_1437329e0(param_1[2] & 0xfffffffffffffffe);
      }
      uVar3 = param_1[2];
      goto LAB_1437bb0f4;
    }
  }
  uVar4 = 0;
LAB_1437bb0f4:
  local_res10 = 0;
  plVar5 = (longlong *)(uVar3 & 0xfffffffffffffffe);
  (**(code **)(*plVar5 + 0x38))(plVar5,local_res8,uVar4,uStack_30,&local_res10);
  uVar4 = local_res10;
  if ((uVar3 & 1) != 0) {
    FUN_143733a60(plVar5);
  }
  return uVar4;
}



// FUNCTION 1437bb150 FUN_1437bb150 body=1054 status=ok
// SIG undefined FUN_1437bb150(void)

longlong FUN_1437bb150(longlong param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  short *psVar10;
  int iVar11;
  longlong local_res10;
  uint *local_res18;
  longlong local_res20;
  longlong local_408;
  uint local_400;
  uint local_3fc;
  longlong local_3f8;
  short *local_3f0;
  undefined1 local_3e8 [88];
  undefined8 local_390;
  ulonglong local_388;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_320;
  undefined1 local_208 [96];
  ulonglong local_1a8;
  longlong local_f8;
  
  local_res10 = 0;
  local_res18 = param_2;
  plVar3 = (longlong *)FUN_14372d420(param_1 + 0x330,&local_res18,&local_res10);
  if (*plVar3 != 0) {
    return *plVar3;
  }
  FUN_143737060(local_3e8);
  FUN_143737b00(local_3e8,param_2,0xffffffff);
  FUN_143738110(local_3e8,param_1);
  local_388 = local_388 | 0x1000;
  local_320 = 0;
  puVar4 = (undefined8 *)FUN_143714490(param_2,1);
  if (puVar4 == (undefined8 *)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (byte)*puVar4;
  }
  puVar6 = (uint *)0x0;
  if ((bVar1 & 0xf) == 6) {
    puVar6 = param_2;
  }
  if (puVar6 == (uint *)0x0) {
    puVar4 = (undefined8 *)FUN_143714490(param_2,1);
    bVar1 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      bVar1 = (byte)*puVar4;
    }
    puVar6 = (uint *)0x0;
    if ((bVar1 & 0xf) == 8) {
      puVar6 = param_2;
    }
    if (puVar6 == (uint *)0x0) goto LAB_1437bb2a4;
    uVar5 = FUN_1437151a0(puVar6);
    local_370 = FUN_1437b4240(param_1 + 0x2e8,uVar5,param_1);
  }
  else {
    uVar5 = FUN_1437151a0(puVar6);
    local_370 = FUN_1437b42b0(param_1 + 0x2e8,uVar5,param_1);
  }
  local_388 = local_388 | 4;
  plVar3 = (longlong *)FUN_143714420(puVar6,2);
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    puVar4 = (undefined8 *)FUN_143714420(puVar6,2);
    if (puVar4 == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *puVar4;
    }
    local_378 = FUN_1437bb150(param_1,uVar5);
    local_388 = local_388 | 2;
  }
LAB_1437bb2a4:
  if (*(longlong *)(param_2 + 2) != 0) {
    local_390 = FUN_1437bb150(param_1);
  }
  local_3f8 = param_1 + 0x2e8;
  local_res10 = FUN_143737a80(local_3e8,local_3f8);
  local_res18 = param_2;
  local_res20 = local_res10;
  uVar5 = FUN_143703a50();
  FUN_14372d6e0(param_1 + 0x330,uVar5,&local_res18,&local_res10);
  puVar4 = (undefined8 *)FUN_143714490(param_2,1);
  if (puVar4 == (undefined8 *)0x0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (byte)*puVar4;
  }
  puVar6 = (uint *)0x0;
  if ((bVar1 & 0xf) == 7) {
    puVar6 = param_2;
  }
  if ((((puVar6 != (uint *)0x0) && ((*param_2 >> 0x1a & 1) != 0)) &&
      (puVar4 = (undefined8 *)FUN_1437143d0(param_2), puVar4 != (undefined8 *)0x0)) &&
     (psVar10 = (short *)*puVar4, local_3f0 = psVar10, psVar10 != (short *)0x0)) {
    local_408 = 0;
    iVar11 = 0;
    local_400 = 0;
    local_3fc = 0x80000000;
    if (0 < (int)*psVar10 + (int)psVar10[1]) {
      do {
        FUN_143714060(&local_res18,*(undefined8 *)(psVar10 + (longlong)iVar11 * 4 + 4));
        lVar7 = FUN_1437151c0(&local_res18);
        if ((lVar7 != 0) &&
           (pbVar8 = (byte *)FUN_143714f30(&local_res18,&local_res10), (~*pbVar8 & 1) != 0)) {
          uVar5 = FUN_1437bb150(param_1,*(undefined8 *)(local_res18 + 2));
          uVar9 = FUN_1437151c0(&local_res18);
          uVar9 = FUN_14370c890(uVar9,param_1 + 0x2e8);
          FUN_143737060(local_208);
          UMovieScenePropertyTrack::SetSectionToKey(local_208,uVar5);
          uVar2 = FUN_143715270(&local_res18);
          FUN_1437380c0(local_208,uVar9,uVar2,0);
          local_1a8 = local_1a8 | 0x200000;
          local_f8 = local_res20;
          uVar5 = FUN_143737a80(local_208,local_3f8);
          uVar9 = FUN_143703a50();
          if (local_400 == (local_3fc & 0x3fffffff)) {
            FUN_14370c460(uVar9,&local_408,8);
          }
          *(undefined8 *)(local_408 + (longlong)(int)local_400 * 8) = uVar5;
          local_400 = local_400 + 1;
          FUN_143737160(local_208);
          psVar10 = local_3f0;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)*psVar10 + (int)psVar10[1]);
    }
    uVar5 = FUN_143714780(local_408,local_400,0,local_3f8);
    puVar4 = (undefined8 *)FUN_1437143d0(local_res20,0x4000000);
    *puVar4 = uVar5;
    uVar5 = FUN_143703a50();
    local_400 = 0;
    if (-1 < (int)local_3fc) {
      FUN_143702e10(uVar5,local_408,8,local_3fc & 0x3fffffff);
    }
  }
  FUN_143737160(local_3e8);
  return local_res20;
}



// FUNCTION 1437bb570 FUN_1437bb570 body=218 status=ok
// SIG undefined FUN_1437bb570(void)

void FUN_1437bb570(undefined8 param_1)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong local_18;
  int local_10;
  uint local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  FUN_1437bc240(param_1,&local_18);
  FUN_1437ba0c0(param_1,&local_18);
  uVar1 = FUN_143703a50();
  lVar3 = (longlong)(local_10 + -1);
  if (-1 < local_10 + -1) {
    puVar2 = (ulonglong *)(local_18 + 0x10 + lVar3 * 0x30);
    do {
      if ((puVar2[3] & 1) != 0) {
        FUN_143733a60(puVar2[3] & 0xfffffffffffffffe);
      }
      if ((*puVar2 & 1) != 0) {
        FUN_143733a60(*puVar2 & 0xfffffffffffffffe);
      }
      puVar2 = puVar2 + -6;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  local_10 = 0;
  if (-1 < (int)local_c) {
    FUN_143702e10(uVar1,local_18,0x30,local_c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1437bb650 FUN_1437bb650 body=58 status=ok
// SIG undefined FUN_1437bb650(void)

undefined1 FUN_1437bb650(undefined8 param_1)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  pbVar1 = (byte *)FUN_143714f30(param_1,local_res10);
  if ((~*pbVar1 & 1) != 0) {
    lVar2 = FUN_1437151c0(param_1);
    if (lVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1437bb690 FUN_1437bb690 body=2607 status=ok
// SIG undefined FUN_1437bb690(void)

void FUN_1437bb690(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 in_stack_fffffffffffffed8;
  longlong lVar26;
  longlong local_f8;
  longlong local_f0;
  int local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  longlong local_80;
  int local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_b8 = param_2[1];
  lVar14 = *param_2;
  local_80 = lVar14;
  piVar6 = (int *)FUN_14372adb0(param_1 + 0x48,local_88,&local_80);
  if (*piVar6 < 0) {
    iVar18 = *(int *)(param_1 + 0x1e0);
    local_e8[0] = iVar18;
    local_e0 = lVar14;
    uVar10 = FUN_143703a50();
    FUN_14372d6e0(param_1 + 0x48,uVar10,&local_e0);
    uVar10 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x1e0) == (*(uint *)(param_1 + 0x1e4) & 0x3fffffff)) {
      FUN_14370c460(uVar10,(longlong *)(param_1 + 0x1d8),0x10);
    }
    puVar7 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x1e0) * 0x10 + *(longlong *)(param_1 + 0x1d8));
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
    }
    iVar13 = 0;
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
    if (0 < *(int *)(param_1 + 0x218)) {
      lVar12 = 0;
      local_f8 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x210) + 8 + lVar12);
        lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x210) + lVar12);
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_1437151a0(lVar8);
        }
        if ((uVar9 & 1) != 0) {
          FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
        }
        if ((lVar26 != 0) && (lVar8 == local_b8)) {
          uVar3 = FUN_1437152f0(lVar14);
          lVar8 = (**(code **)(*(longlong *)(param_1 + 0x230) + 8))
                            ((longlong *)(param_1 + 0x230),uVar3);
          FUN_14370c720(lVar8,0,uVar3);
          puVar7 = (undefined8 *)FUN_14374ea80(param_1 + 0x2b0,&local_b0,local_b8,lVar14);
          uVar10 = *puVar7;
          local_e0 = param_1;
          uVar4 = FUN_1437152f0(local_b8);
          FUN_1437b5bc0(&local_e0,uVar10,lVar8,uVar3,lVar26,uVar4,uVar3,0,1);
          uVar3 = (undefined4)((ulonglong)lVar26 >> 0x20);
          local_d8 = lVar8;
          uStack_d0 = lVar14;
          if (lVar14 == 0) {
            local_c8 = 0;
          }
          else {
            local_c8 = FUN_1437151a0(lVar14);
          }
          if ((local_c8 & 1) != 0) {
            FUN_1437329e0(local_c8 & 0xfffffffffffffffe);
          }
          in_stack_fffffffffffffed8 = CONCAT44(uVar3,iVar13);
          FUN_1437b9cd0(param_1,&local_d8,1,0,in_stack_fffffffffffffed8,0xffffffff);
          *(undefined4 *)(local_f8 + *(longlong *)(param_1 + 0x278)) = 1;
          if (lVar14 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = FUN_1437151a0(lVar14);
          }
          if ((uVar17 & 1) != 0) {
            FUN_1437329e0(uVar17 & 0xfffffffffffffffe);
          }
          local_c8 = (local_c8 >> 8 & 0xffffff) << 8;
          local_d8 = 0;
          uStack_d0 = 0;
          FUN_1437b76f0(param_1 + 0x210,iVar13,&local_d8);
          *(longlong *)(*(longlong *)(param_1 + 0x210) + lVar12) = lVar8;
          *(longlong *)(*(longlong *)(param_1 + 0x210) + 8 + lVar12) = lVar14;
          if ((uVar17 & 1) != 0) {
            FUN_143733a60(uVar17 & 0xfffffffffffffffe);
          }
        }
        if ((uVar9 & 1) != 0) {
          FUN_143733a60(uVar9 & 0xfffffffffffffffe);
        }
        local_f8 = local_f8 + 4;
        iVar13 = iVar13 + 1;
        lVar12 = lVar12 + 0x18;
        iVar18 = local_e8[0];
      } while (iVar13 < *(int *)(param_1 + 0x218));
    }
    iVar13 = 0;
    local_78 = iVar18;
    if (0 < *(int *)(param_1 + 0x228)) {
      local_f0 = 0;
      local_c0 = 0;
      do {
        lVar12 = *(longlong *)(param_1 + 0x220);
        local_e0 = *(longlong *)(local_f0 + lVar12);
        uVar9 = *(ulonglong *)(local_f0 + 0x10 + lVar12);
        lVar12 = *(longlong *)(local_f0 + 8 + lVar12);
        if ((uVar9 & 1) != 0) {
          FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
        }
        if (((uVar9 & 1) != 0) && (FUN_1437329e0(uVar9 & 0xfffffffffffffffe), (uVar9 & 1) != 0)) {
          FUN_143733a60(uVar9 & 0xfffffffffffffffe);
        }
        lVar8 = *(longlong *)(param_1 + 0x220) + local_f0;
        uVar17 = *(ulonglong *)(lVar8 + 0x10);
        local_58 = uVar17;
        if ((uVar17 & 1) != 0) {
          FUN_1437329e0(uVar17 & 0xfffffffffffffffe);
        }
        uVar5 = *(uint *)(lVar8 + 0x18);
        uVar11 = (int)uVar5 >> 0x1f;
        iVar18 = (uVar5 ^ uVar11) - uVar11;
        if ((uVar17 & 1) != 0) {
          FUN_143733a60(uVar17 & 0xfffffffffffffffe);
        }
        lVar8 = local_b8;
        uVar3 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
        if ((local_e0 != 0) && (lVar12 == local_b8)) {
          iVar20 = FUN_1437152f0(*param_2);
          iVar20 = iVar20 * iVar18;
          uVar10 = (**(code **)(*(longlong *)(param_1 + 0x230) + 8))
                             ((longlong *)(param_1 + 0x230),iVar20);
          FUN_14370c720(uVar10,0,iVar20);
          puVar7 = (undefined8 *)FUN_14374ea80(param_1 + 0x2b0,&local_d8,lVar8,lVar14);
          local_70 = *puVar7;
          local_b0 = param_1;
          if (iVar18 != 0) {
            uVar3 = FUN_1437152f0(lVar8);
            uVar4 = FUN_1437152f0(lVar14);
            iVar22 = FUN_1437152f0(local_b8);
            lVar12 = local_e0;
            FUN_1437b5bc0(&local_b0,local_70,uVar10,iVar20,local_e0,iVar22 * iVar18,uVar4,uVar3,
                          iVar18);
            uVar3 = (undefined4)((ulonglong)lVar12 >> 0x20);
          }
          local_a8 = uVar10;
          lStack_a0 = lVar14;
          if (lVar14 == 0) {
            local_98 = 0;
          }
          else {
            local_98 = FUN_1437151a0(lVar14);
          }
          if ((local_98 & 1) != 0) {
            FUN_1437329e0(local_98 & 0xfffffffffffffffe);
          }
          uVar4 = FUN_1437152f0(lVar14);
          in_stack_fffffffffffffed8 = CONCAT44(uVar3,0xffffffff);
          FUN_1437b9cd0(param_1,&local_a8,iVar18,uVar4,in_stack_fffffffffffffed8,iVar13);
          *(undefined4 *)(local_c0 + *(longlong *)(param_1 + 0x288)) = 1;
          if (lVar14 == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = FUN_1437151a0(lVar14);
          }
          if ((uVar17 & 1) != 0) {
            FUN_1437329e0(uVar17 & 0xfffffffffffffffe);
          }
          local_98 = 0;
          local_a8 = 0;
          lStack_a0 = 0;
          local_90 = 0;
          FUN_1437b7790(param_1 + 0x220,iVar13,&local_a8);
          puVar7 = (undefined8 *)(local_f0 + *(longlong *)(param_1 + 0x220));
          *puVar7 = uVar10;
          puVar7[1] = lVar14;
          if ((uVar17 & 1) != 0) {
            FUN_1437329e0(uVar17 & 0xfffffffffffffffe);
          }
          if ((*(byte *)(puVar7 + 2) & 1) != 0) {
            FUN_143733a60(puVar7[2] & 0xfffffffffffffffe);
          }
          puVar7[2] = uVar17;
          *(int *)(puVar7 + 3) = iVar18;
          if ((local_98 & 1) != 0) {
            FUN_143733a60(local_98 & 0xfffffffffffffffe);
          }
          if ((uVar17 & 1) != 0) {
            FUN_143733a60(uVar17 & 0xfffffffffffffffe);
          }
        }
        if ((uVar9 & 1) != 0) {
          FUN_143733a60(uVar9 & 0xfffffffffffffffe);
        }
        iVar13 = iVar13 + 1;
        local_f0 = local_f0 + 0x20;
        local_c0 = local_c0 + 4;
        local_78 = local_e8[0];
      } while (iVar13 < *(int *)(param_1 + 0x228));
    }
  }
  if (-1 < local_78) {
    iVar13 = 0;
    plVar16 = (longlong *)((longlong)local_78 * 0x10 + *(longlong *)(param_1 + 0x1d8));
    uVar5 = *(uint *)(plVar16 + 1);
    uVar17 = (ulonglong)(int)uVar5;
    uVar9 = uVar17;
    iVar18 = iVar13;
    if ((0 < (int)uVar5) && (iVar18 = 0, 7 < uVar5)) {
      lVar14 = *plVar16;
      iVar18 = 0;
      iVar20 = 0;
      iVar22 = 0;
      iVar24 = 0;
      uVar11 = uVar5 & 0x80000007;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
      }
      lVar8 = 0;
      lVar12 = 0;
      iVar19 = iVar18;
      iVar21 = iVar20;
      iVar23 = iVar22;
      iVar25 = iVar24;
      do {
        iVar13 = iVar13 + 8;
        lVar8 = lVar8 + 8;
        iVar18 = *(int *)(lVar12 + 8 + lVar14) + iVar18;
        iVar20 = *(int *)(lVar12 + 0x20 + lVar14) + iVar20;
        iVar22 = *(int *)(lVar12 + 0x38 + lVar14) + iVar22;
        iVar24 = *(int *)(lVar12 + 0x50 + lVar14) + iVar24;
        iVar19 = *(int *)(lVar12 + 0x68 + lVar14) + iVar19;
        iVar21 = *(int *)(lVar12 + 0x80 + lVar14) + iVar21;
        iVar23 = *(int *)(lVar12 + 0x98 + lVar14) + iVar23;
        iVar25 = *(int *)(lVar12 + 0xb0 + lVar14) + iVar25;
        lVar12 = lVar12 + 0xc0;
      } while (lVar8 < (int)(uVar5 - uVar11));
      uVar9 = (ulonglong)
              (uVar5 + iVar18 + iVar19 + iVar22 + iVar23 + iVar20 + iVar21 + iVar24 + iVar25);
      iVar18 = iVar13;
    }
    iVar13 = (int)uVar9;
    iVar20 = 0;
    lVar14 = (longlong)iVar18;
    iVar18 = 0;
    if (lVar14 < (longlong)uVar17) {
      if (1 < (longlong)(uVar17 - lVar14)) {
        lVar12 = lVar14 * 0x18;
        lVar8 = ((uVar17 - lVar14) - 2 >> 1) + 1;
        lVar14 = lVar14 + lVar8 * 2;
        do {
          iVar20 = iVar20 + *(int *)(lVar12 + 8 + *plVar16);
          iVar18 = iVar18 + *(int *)(lVar12 + 0x20 + *plVar16);
          lVar12 = lVar12 + 0x30;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (lVar14 < (longlong)uVar17) {
        iVar13 = iVar13 + *(int *)(*plVar16 + 8 + lVar14 * 0x18);
      }
      uVar9 = (ulonglong)(uint)(iVar13 + iVar18 + iVar20);
    }
    uVar5 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    if ((int)uVar5 < (int)uVar9) {
      uVar5 = uVar5 * 2;
      uVar17 = uVar9 & 0xffffffff;
      if ((int)uVar9 < (int)uVar5) {
        uVar17 = (ulonglong)uVar5;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_3,uVar17,0x18);
    }
    iVar18 = 0;
    if (0 < (int)plVar16[1]) {
      local_f8 = 0;
      do {
        lVar14 = *plVar16;
        uVar5 = *(uint *)(lVar14 + 8 + local_f8);
        local_c0 = (ulonglong)uVar5;
        lVar12 = *(longlong *)(lVar14 + local_f8);
        if (0 < (int)uVar5) {
          local_b0 = (longlong)*(int *)(lVar14 + 0xc + local_f8);
          do {
            local_d8 = 0;
            uStack_d0 = -0x8000000000000000;
            local_e8[0] = *(int *)(*plVar16 + 0x10 + local_f8);
            local_e0 = lVar12;
            FUN_1437bc390(param_1,local_e8,&local_d8);
            iVar13 = 0;
            lVar14 = lVar12;
            if (0 < (int)uStack_d0) {
              lVar8 = 0;
              do {
                lVar14 = *param_2;
                if (lVar14 == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = FUN_1437151a0(lVar14);
                }
                if ((uVar9 & 1) != 0) {
                  FUN_1437329e0(uVar9 & 0xfffffffffffffffe);
                }
                if (((*(longlong *)(local_d8 + lVar8) == 0) && (lVar12 == 0)) ||
                   ((*(longlong *)(local_d8 + lVar8) == lVar12 &&
                    (*(longlong *)(local_d8 + 8 + lVar8) == lVar14)))) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if ((uVar9 & 1) != 0) {
                  FUN_143733a60(uVar9 & 0xfffffffffffffffe);
                }
                if (bVar2) {
                  lVar12 = *(longlong *)(local_d8 + 0x18 + lVar8);
                }
                iVar13 = iVar13 + 1;
                lVar8 = lVar8 + 0x30;
                lVar14 = local_e0;
              } while (iVar13 < (int)uStack_d0);
            }
            uVar3 = *(undefined4 *)(*plVar16 + 0x10 + local_f8);
            if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,param_3,0x18);
            }
            lVar8 = *param_3 + (longlong)(int)param_3[1] * 0x18;
            if (lVar8 != 0) {
              *(undefined4 *)(lVar8 + 0x10) = 0;
            }
            plVar1 = (longlong *)(*param_3 + (longlong)(int)param_3[1] * 0x18);
            *(int *)(param_3 + 1) = (int)param_3[1] + 1;
            *plVar1 = lVar12;
            plVar1[1] = 1;
            *(undefined4 *)(plVar1 + 2) = uVar3;
            uVar10 = FUN_143703a50();
            lVar12 = (longlong)((int)uStack_d0 + -1);
            if (-1 < (int)uStack_d0 + -1) {
              puVar15 = (ulonglong *)(local_d8 + 0x10 + lVar12 * 0x30);
              do {
                if ((puVar15[3] & 1) != 0) {
                  FUN_143733a60(puVar15[3] & 0xfffffffffffffffe);
                }
                if ((*puVar15 & 1) != 0) {
                  FUN_143733a60(*puVar15 & 0xfffffffffffffffe);
                }
                puVar15 = puVar15 + -6;
                lVar12 = lVar12 + -1;
              } while (-1 < lVar12);
            }
            lVar12 = uStack_d0;
            uVar5 = uStack_d0._4_4_;
            uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
            if (-1 < lVar12) {
              FUN_143702e10(uVar10,local_d8,0x30,uVar5 & 0x3fffffff);
            }
            lVar12 = lVar14 + local_b0;
            local_c0 = local_c0 - 1;
          } while (local_c0 != 0);
        }
        iVar18 = iVar18 + 1;
        local_f8 = local_f8 + 0x18;
      } while (iVar18 < (int)plVar16[1]);
    }
  }
  return;
}



// FUNCTION 1437bc0c0 FUN_1437bc0c0 body=102 status=ok
// SIG undefined FUN_1437bc0c0(void)

undefined8 FUN_1437bc0c0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_14377ef20(*param_1 + 0x368,param_3);
  puVar2 = (undefined8 *)FUN_14377edb0(*param_1 + 0x68,param_3,uVar1);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
  }
  FUN_1437b7c10(param_2,uVar3,*param_1);
  return param_2;
}



// FUNCTION 1437bc130 FUN_1437bc130 body=259 status=ok
// SIG undefined FUN_1437bc130(void)

undefined8 FUN_1437bc130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong local_res8;
  undefined8 local_res18;
  undefined8 local_98;
  undefined4 local_90;
  uint local_8c;
  
  FUN_143714b80(param_2,&local_res8,param_3,0);
  if (local_res8 < 2) {
    FUN_143745310(&local_98,&DAT_145b8f480);
    FUN_143745710(&local_98,param_3,0xffffffff);
    puVar1 = (ulonglong *)FUN_143714b80(param_2,&local_res18,local_98,0);
    local_res8 = *puVar1;
    local_90 = 0;
    if (-1 < (int)local_8c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_98,1,local_8c & 0x3fffffff);
    }
  }
  FUN_143714060(&local_res18,local_res8);
  puVar2 = (undefined8 *)FUN_1437143d0(local_res18,0x80000);
  *puVar2 = param_3;
  FUN_143714040(param_1,local_res8);
  return param_1;
}



// FUNCTION 1437bc240 FUN_1437bc240 body=321 status=ok
// SIG undefined FUN_1437bc240(void)

void FUN_1437bc240(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar10 = 0;
    do {
      iVar1 = *(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0x18));
      lVar7 = (longlong)iVar1;
      lVar9 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x18));
      uVar4 = FUN_143703a50();
      uVar5 = *(uint *)((longlong)param_2 + 0xc) & 0x3fffffff;
      iVar11 = (int)param_2[1] + iVar1;
      if (((int)uVar5 < iVar11) && ((int)uVar5 < iVar11)) {
        iVar3 = iVar11;
        if (iVar11 < (int)(uVar5 * 2)) {
          iVar3 = uVar5 * 2;
        }
        FUN_14370c310(uVar4,param_2,iVar3,0x30);
      }
      lVar6 = (longlong)(int)param_2[1] * 0x30 + *param_2;
      if (0 < iVar1) {
        puVar8 = (ulonglong *)(lVar6 + 0x28);
        lVar9 = lVar9 - lVar6;
        do {
          if (puVar8 + -5 != (ulonglong *)0x0) {
            puVar8[-5] = *(ulonglong *)(lVar9 + -0x28 + (longlong)puVar8);
            puVar8[-4] = *(ulonglong *)(lVar9 + -0x20 + (longlong)puVar8);
            uVar2 = *(ulonglong *)(lVar9 + -0x18 + (longlong)puVar8);
            puVar8[-3] = uVar2;
            if ((uVar2 & 1) != 0) {
              FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
            }
            puVar8[-2] = *(ulonglong *)(lVar9 + -0x10 + (longlong)puVar8);
            puVar8[-1] = *(ulonglong *)((longlong)puVar8 + lVar9 + -8);
            uVar2 = *(ulonglong *)(lVar9 + (longlong)puVar8);
            *puVar8 = uVar2;
            if ((uVar2 & 1) != 0) {
              FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
            }
          }
          puVar8 = puVar8 + 6;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar12 = iVar12 + 1;
      *(int *)(param_2 + 1) = iVar11;
      lVar10 = lVar10 + 0x10;
    } while (iVar12 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 1437bc390 FUN_1437bc390 body=295 status=ok
// SIG undefined FUN_1437bc390(void)

void FUN_1437bc390(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  
  lVar4 = FUN_1437b98d0(param_1 + 0x28);
  if (lVar4 != 0) {
    plVar10 = (longlong *)
              ((longlong)
               *(int *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)*(int *)(lVar4 + 4) * 8) *
               0x10 + *(longlong *)(param_1 + 0x18));
    iVar1 = (int)plVar10[1];
    lVar8 = (longlong)iVar1;
    lVar4 = *plVar10;
    uVar5 = FUN_143703a50();
    uVar6 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
    iVar11 = (int)param_3[1] + iVar1;
    if (((int)uVar6 < iVar11) && ((int)uVar6 < iVar11)) {
      iVar3 = iVar11;
      if (iVar11 < (int)(uVar6 * 2)) {
        iVar3 = uVar6 * 2;
      }
      FUN_14370c310(uVar5,param_3,iVar3,0x30);
    }
    lVar7 = (longlong)(int)param_3[1] * 0x30 + *param_3;
    if (0 < iVar1) {
      puVar9 = (ulonglong *)(lVar7 + 0x28);
      lVar4 = lVar4 - lVar7;
      do {
        if (puVar9 + -5 != (ulonglong *)0x0) {
          puVar9[-5] = *(ulonglong *)(lVar4 + -0x28 + (longlong)puVar9);
          puVar9[-4] = *(ulonglong *)(lVar4 + -0x20 + (longlong)puVar9);
          uVar2 = *(ulonglong *)(lVar4 + -0x18 + (longlong)puVar9);
          puVar9[-3] = uVar2;
          if ((uVar2 & 1) != 0) {
            FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
          }
          puVar9[-2] = *(ulonglong *)(lVar4 + -0x10 + (longlong)puVar9);
          puVar9[-1] = *(ulonglong *)((longlong)puVar9 + lVar4 + -8);
          uVar2 = *(ulonglong *)(lVar4 + (longlong)puVar9);
          *puVar9 = uVar2;
          if ((uVar2 & 1) != 0) {
            FUN_1437329e0(uVar2 & 0xfffffffffffffffe);
          }
        }
        puVar9 = puVar9 + 6;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    *(int *)(param_3 + 1) = iVar11;
  }
  return;
}



// FUNCTION 1437bc4c0 FUN_1437bc4c0 body=319 status=ok
// SIG undefined FUN_1437bc4c0(void)

void FUN_1437bc4c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong local_28;
  longlong local_20;
  
  lVar9 = *(longlong *)(param_1 + 8);
  puVar5 = (undefined8 *)FUN_143714490(lVar9,1);
  bVar3 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    bVar3 = (byte)*puVar5;
  }
  lVar7 = 0;
  if ((bVar3 & 0xf) == 7) {
    lVar7 = lVar9;
  }
  for (; lVar7 != 0; lVar7 = hkReflect::RecordType::getParentRecord(lVar7)) {
    FUN_143714ed0(lVar7,&local_28);
    iVar8 = 0;
    if (0 < (int)(local_20 - local_28 >> 3)) {
      do {
        FUN_143714060(local_res8,*(undefined8 *)((longlong)iVar8 * 8 + local_28));
        cVar4 = FUN_1437bb650(local_res8);
        if (cVar4 != '\0') {
          lVar9 = local_28 + (longlong)iVar8 * 8;
          uVar6 = FUN_143703a50();
          if (*(uint *)(param_2 + 1) == (*(uint *)((longlong)param_2 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar6,param_2,8);
          }
          lVar2 = param_2[1];
          lVar1 = *param_2;
          *(int *)(param_2 + 1) = (int)lVar2 + 1;
          uVar6 = FUN_1437151c0(lVar9);
          *(undefined8 *)(lVar1 + (longlong)(int)lVar2 * 8) = uVar6;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(local_20 - local_28 >> 3));
    }
  }
  return;
}



// FUNCTION 1437bc600 FUN_1437bc600 body=276 status=ok
// SIG undefined FUN_1437bc600(void)

int FUN_1437bc600(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  undefined4 local_10;
  
  local_res8 = (longlong)*(int *)(param_1 + 0x228);
  local_res10 = param_2;
  uVar2 = FUN_143703a50();
  iVar1 = FUN_14372ab60(param_1 + 0x2a0,uVar2,&local_res10,&local_res8);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2a0) + 8 + (longlong)iVar1 * 0x10);
  if (iVar1 == *(int *)(param_1 + 0x228)) {
    local_28 = DAT_146b82728;
    local_20 = DAT_146b82730;
    local_18 = DAT_146b82738;
    if ((DAT_146b82738 & 1) != 0) {
      FUN_1437329e0(DAT_146b82738 & 0xfffffffffffffffe);
    }
    local_10 = DAT_146b82740;
    FUN_1437bf160(param_1 + 0x1f8,*(undefined4 *)(param_1 + 0x228),&local_28);
    if ((local_18 & 1) != 0) {
      FUN_143733a60(local_18 & 0xfffffffffffffffe);
    }
    uVar2 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x290) == (*(uint *)(param_1 + 0x294) & 0x3fffffff)) {
      FUN_14370c460(uVar2,(longlong *)(param_1 + 0x288),4);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + (longlong)*(int *)(param_1 + 0x290) * 4) = 0;
    *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
  }
  return iVar1;
}



// FUNCTION 1437bc720 FUN_1437bc720 body=266 status=ok
// SIG undefined FUN_1437bc720(void)

/* WARNING: Removing unreachable block (ram,0x0001437bc7dc) */

longlong * FUN_1437bc720(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_res8 [2];
  
  local_res8[0] = -1;
  lVar4 = FUN_1437b98d0(param_1 + 0x28,param_4);
  if (lVar4 == 0) {
    piVar6 = local_res8;
  }
  else {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x28) + 4 + (longlong)*(int *)(lVar4 + 4) * 8);
  }
  iVar1 = *piVar6;
  uVar7 = 0;
  if (-1 < iVar1) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar1 * 0x10);
    if (0 < iVar2) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0x10);
      plVar5 = plVar3;
      uVar8 = uVar7;
      do {
        if (((*plVar5 == 0) && (*param_3 == 0)) ||
           ((*plVar5 == *param_3 && (plVar5[1] == param_3[1])))) {
          lVar4 = (longlong)(int)uVar8;
          *param_2 = plVar3[lVar4 * 6 + 3];
          param_2[1] = plVar3[lVar4 * 6 + 4];
          uVar7 = plVar3[lVar4 * 6 + 5];
          param_2[2] = uVar7;
          if ((uVar7 & 1) == 0) {
            return param_2;
          }
          FUN_1437329e0(uVar7 & 0xfffffffffffffffe);
          return param_2;
        }
        uVar8 = (ulonglong)((int)uVar8 + 1);
        uVar7 = uVar7 + 1;
        plVar5 = plVar5 + 6;
      } while ((longlong)uVar7 < (longlong)iVar2);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1437bc830 FUN_1437bc830 body=244 status=ok
// SIG undefined FUN_1437bc830(void)

undefined8 FUN_1437bc830(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined1 local_res18 [16];
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  FUN_1437bcce0(param_1,&local_30);
  if (local_30 == 0) {
    uVar1 = *(ulonglong *)(param_1 + 8);
    puVar3 = (undefined8 *)FUN_143714490(uVar1);
    local_38 = 0;
    if (puVar3 == (undefined8 *)0x0) {
      bVar2 = 0;
    }
    else {
      bVar2 = (byte)*puVar3;
    }
    local_48 = *(undefined8 *)(param_1 + 0x18);
    local_40 = local_38;
    if ((bVar2 & 0xf) == 8) {
      local_40 = uVar1;
    }
    if (local_40 != 0) {
      local_38 = FUN_1437151a0();
    }
    if ((local_38 & 1) != 0) {
      FUN_1437329e0(local_38 & 0xfffffffffffffffe);
    }
    puVar3 = (undefined8 *)FUN_1437429a0(&local_48,local_res18);
    FUN_1437b7c10(param_2,*puVar3,*(undefined8 *)(param_1 + 0x10));
    if ((local_38 & 1) != 0) {
      FUN_143733a60(local_38 & 0xfffffffffffffffe);
    }
  }
  else {
    FUN_1437b7c10(param_2,local_28,*(undefined8 *)(param_1 + 0x10));
  }
  if ((local_20 & 1) != 0) {
    FUN_143733a60(local_20 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1437bc930 FUN_1437bc930 body=288 status=ok
// SIG undefined FUN_1437bc930(void)

undefined4 FUN_1437bc930(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_38 [2];
  ulonglong local_28;
  
  if ((param_2[2] & 0xfffffffffffffffe) == *(ulonglong *)(param_1 + 0x60)) {
    plVar6 = (longlong *)(param_1 + 0x1f8);
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x1f0);
    lVar5 = FUN_143715410(param_2[1]);
    if (lVar5 == param_1) {
      uVar1 = param_2[1];
      uVar2 = *param_2;
      uVar3 = *(ulonglong *)((param_2[2] & 0xfffffffffffffffe) + 0x10);
      if ((uVar3 & 1) != 0) {
        FUN_1437329e0(uVar3 & 0xfffffffffffffffe);
      }
      *param_2 = uVar2;
      param_2[1] = uVar1;
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
      }
      param_2[2] = uVar3;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,local_38,param_2);
  if (local_38[0] != 0) {
    uVar4 = FUN_1437bcb60(param_1);
    if ((local_28 & 1) != 0) {
      FUN_143733a60(local_28 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
    }
    return uVar4;
  }
  if ((local_28 & 1) != 0) {
    FUN_143733a60(local_28 & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    FUN_143733a60(param_2[2] & 0xfffffffffffffffe);
  }
  return 0;
}



// FUNCTION 1437bca50 FUN_1437bca50 body=203 status=ok
// SIG undefined FUN_1437bca50(void)

int FUN_1437bca50(longlong param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong local_res8;
  byte *local_res10;
  
  bVar1 = *param_2;
  local_res10 = param_2;
  while ((~bVar1 & 1) != 0) {
    local_res10 = *(byte **)(local_res10 + 8);
    bVar1 = *local_res10;
  }
  local_res8 = (longlong)*(int *)(param_1 + 0x1e0);
  uVar3 = FUN_143703a50();
  iVar2 = FUN_14372ab60(param_1 + 0x48,uVar3,&local_res10,&local_res8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 8 + (longlong)iVar2 * 0x10);
  if (iVar2 == *(int *)(param_1 + 0x1e0)) {
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x1e0) == (*(uint *)(param_1 + 0x1e4) & 0x3fffffff)) {
      FUN_14370c460(uVar3,(longlong *)(param_1 + 0x1d8),0x10);
    }
    puVar4 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x1e0) * 0x10 + *(longlong *)(param_1 + 0x1d8));
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0x80000000;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
    }
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
  }
  return iVar2;
}



// FUNCTION 1437bcb20 FUN_1437bcb20 body=49 status=ok
// SIG undefined FUN_1437bcb20(void)

undefined4 FUN_1437bcb20(longlong param_1)

{
  undefined4 uVar1;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  FUN_1437bcce0(param_1,local_28);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if ((local_18 & 1) != 0) {
    FUN_143733a60(local_18 & 0xfffffffffffffffe);
  }
  return uVar1;
}



// FUNCTION 1437bcb60 FUN_1437bcb60 body=249 status=ok
// SIG undefined FUN_1437bcb60(void)

int FUN_1437bcb60(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  
  local_res8 = (longlong)*(int *)(param_1 + 0x218);
  local_res10 = param_2;
  uVar3 = FUN_143703a50();
  iVar2 = FUN_14372ab60(param_1 + 0x2a0,uVar3,&local_res10,&local_res8);
  iVar1 = *(int *)(param_1 + 0x218);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x2a0) + 8 + (longlong)iVar2 * 0x10);
  if (iVar2 == iVar1) {
    local_28 = 0;
    local_24 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_1437b76f0(param_1 + 0x210,iVar1,&local_38);
    *(undefined8 *)(*(longlong *)(param_1 + 0x210) + (longlong)iVar1 * 0x18) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x210) + 8 + (longlong)iVar1 * 0x18) = 0;
    uVar3 = FUN_143703a50();
    if (*(uint *)(param_1 + 0x280) == (*(uint *)(param_1 + 0x284) & 0x3fffffff)) {
      FUN_14370c460(uVar3,(longlong *)(param_1 + 0x278),4);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x278) + (longlong)*(int *)(param_1 + 0x280) * 4) = 0;
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
  }
  return iVar2;
}



// FUNCTION 1437bcc60 FUN_1437bcc60 body=128 status=ok
// SIG undefined FUN_1437bcc60(void)

undefined4 FUN_1437bcc60(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)FUN_143714490(uVar1,1);
  uVar5 = 0;
  if (puVar3 == (undefined8 *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (byte)*puVar3;
  }
  uVar4 = uVar5;
  if ((bVar2 & 0xf) == 8) {
    uVar4 = uVar1;
  }
  puVar3 = (undefined8 *)FUN_143714420(uVar4,1);
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = *puVar3;
  }
  if ((int)((ulonglong)uVar5 >> 8) == 0) {
    return *(undefined4 *)*param_1;
  }
  return 0xffffffff;
}



// FUNCTION 1437bcce0 FUN_1437bcce0 body=168 status=ok
// SIG undefined FUN_1437bcce0(void)

undefined8 * FUN_1437bcce0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = FUN_1437bcc60();
  if (-1 < iVar2) {
    puVar3 = (undefined8 *)
             ((longlong)iVar2 * 0x20 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x220));
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    uVar1 = puVar3[2];
    param_2[2] = uVar1;
    if ((uVar1 & 1) != 0) {
      FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
    }
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar3 + 3);
    return param_2;
  }
  *param_2 = DAT_146b82728;
  param_2[1] = DAT_146b82730;
  uVar1 = DAT_146b82738;
  param_2[2] = DAT_146b82738;
  if ((uVar1 & 1) != 0) {
    FUN_1437329e0(uVar1 & 0xfffffffffffffffe);
  }
  *(undefined4 *)(param_2 + 3) = DAT_146b82740;
  return param_2;
}


