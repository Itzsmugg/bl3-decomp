// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1433402d0 FUN_1433402d0 body=795 status=ok
// SIG undefined FUN_1433402d0(void)

void FUN_1433402d0(longlong param_1,uint *param_2,uint *param_3,uint *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  float fVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined8 local_58;
  uint *puStack_50;
  uint *local_48;
  
  if (*(char *)(param_1 + 0x3b0) == '\0') {
    uVar11 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),*param_2 & 0xfffffff,
                           *(undefined4 *)(param_1 + 0x3a0),*(undefined4 *)(param_1 + 0x3a8));
    uVar12 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),*param_3 & 0xfffffff,
                           *(undefined4 *)(param_1 + 0x3a0),*(undefined4 *)(param_1 + 0x3a8));
    local_58 = (uint *)CONCAT44(uVar12,uVar11);
    uVar11 = FUN_14333c670(param_1,*(undefined4 *)(param_1 + 0x3a4),*param_4 & 0xfffffff,
                           *(undefined4 *)(param_1 + 0x3a0),*(undefined4 *)(param_1 + 0x3a8));
    puStack_50 = (uint *)CONCAT44(puStack_50._4_4_,uVar11);
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x338);
    pfVar1 = (float *)(*(longlong *)(lVar9 + (ulonglong)((*param_2 & 0xfffffff) >> 4) * 8) +
                      (ulonglong)(*param_2 & 0xf) * 0x14);
    pfVar2 = (float *)(*(longlong *)(lVar9 + (ulonglong)((*param_3 & 0xfffffff) >> 4) * 8) +
                      (ulonglong)(*param_3 & 0xf) * 0x14);
    uVar14 = (ulonglong)(*param_4 & 0xf);
    lVar15 = *(longlong *)(lVar9 + (ulonglong)((*param_4 & 0xfffffff) >> 4) * 8);
    fVar8 = *(float *)(lVar15 + 4 + uVar14 * 0x14);
    pfVar3 = (float *)(lVar15 + uVar14 * 0x14);
    uVar14 = (ulonglong)(param_2[1] & 0xf);
    lVar10 = *(longlong *)(lVar9 + (ulonglong)((param_2[1] & 0xfffffff) >> 4) * 8);
    lVar15 = lVar10 + uVar14 * 0x14;
    pfVar4 = (float *)(*(longlong *)(lVar9 + (ulonglong)((param_3[1] & 0xfffffff) >> 4) * 8) +
                      (ulonglong)(param_3[1] & 0xf) * 0x14);
    pfVar5 = (float *)(*(longlong *)(lVar9 + (ulonglong)((param_4[1] & 0xfffffff) >> 4) * 8) +
                      (ulonglong)(param_4[1] & 0xf) * 0x14);
    if (0.0 <= (*(float *)(lVar10 + uVar14 * 0x14) - *pfVar3) * (fVar8 - pfVar2[1]) -
               (*(float *)(lVar15 + 4) - fVar8) * (*pfVar3 - *pfVar2)) {
      FUN_1433400f0(param_1,pfVar1,lVar15,pfVar2,pfVar3);
    }
    if (0.0 <= (pfVar1[1] - pfVar3[1]) * (*pfVar4 - *pfVar1) -
               (pfVar4[1] - pfVar1[1]) * (*pfVar1 - *pfVar3)) {
      FUN_1433400f0(param_1,pfVar2,pfVar4,pfVar3,pfVar1);
    }
    local_58 = param_2;
    puStack_50 = param_3;
    local_48 = param_4;
    if (0.0 <= (*pfVar5 - *pfVar2) * (pfVar2[1] - pfVar1[1]) -
               (pfVar5[1] - pfVar2[1]) * (*pfVar2 - *pfVar1)) {
      FUN_1433400f0(param_1,pfVar3,pfVar5,pfVar1,pfVar2);
    }
  }
  lVar15 = (ulonglong)*(uint *)(param_1 + 0x3a4) * 0x20;
  puVar16 = (ulonglong *)(*(longlong *)(param_1 + 0x388) + lVar15);
  uVar14 = *puVar16 >> 4;
  if (puVar16[1] <= uVar14) {
    FUN_143343d10(param_1 + 0x380,puVar16,uVar14);
  }
  uVar13 = (ulonglong)((uint)*puVar16 & 0xf);
  lVar9 = *(longlong *)(puVar16[3] + uVar14 * 8);
  puVar6 = (undefined8 *)(lVar9 + uVar13 * 0x18);
  *puVar6 = local_58;
  puVar6[1] = puStack_50;
  *(uint **)(lVar9 + 0x10 + uVar13 * 0x18) = local_48;
  plVar7 = (longlong *)(*(longlong *)(param_1 + 0x388) + lVar15);
  *plVar7 = *plVar7 + 1;
  return;
}



// FUNCTION 143340600 FUN_143340600 body=2524 status=ok
// SIG undefined FUN_143340600(void)

void FUN_143340600(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_res18;
  uint local_res20;
  uint local_d8;
  uint local_d4;
  ulonglong local_c8;
  
  uVar19 = *(ulonglong *)(param_1 + 0x4f0);
  if (2 < uVar19) {
    lVar13 = *(longlong *)(param_1 + 0x338);
    puVar1 = *(undefined8 **)(param_1 + 0x508);
    fVar27 = 0.0;
    local_c8 = 1;
    uVar17 = (ulonglong)(**(uint **)*puVar1 & 0xf);
    lVar10 = *(longlong *)(lVar13 + (ulonglong)((**(uint **)*puVar1 & 0xfffffff) >> 4) * 8);
    uVar15 = **(uint **)(puVar1[uVar19 - 1 >> 4] + (ulonglong)((uint)(uVar19 - 1) & 0xf) * 8);
    uVar21 = (ulonglong)(uVar15 & 0xf);
    lVar2 = *(longlong *)(lVar13 + (ulonglong)((uVar15 & 0xfffffff) >> 4) * 8);
    if (2 < uVar19) {
      fVar23 = *(float *)(lVar2 + uVar21 * 0x14);
      fVar24 = *(float *)(lVar2 + 4 + uVar21 * 0x14);
      uVar21 = 1;
      do {
        uVar15 = **(uint **)(puVar1[uVar21 >> 4] + (ulonglong)((uint)uVar21 & 0xf) * 8);
        uVar14 = (ulonglong)(uVar15 & 0xf);
        lVar2 = *(longlong *)(lVar13 + (ulonglong)((uVar15 & 0xfffffff) >> 4) * 8);
        uVar11 = uVar21 + 2;
        fVar27 = fVar27 + ((*(float *)(lVar2 + uVar14 * 0x14) - fVar23) *
                           (fVar24 - *(float *)(lVar10 + 4 + uVar17 * 0x14)) -
                          (*(float *)(lVar2 + 4 + uVar14 * 0x14) - fVar24) *
                          (fVar23 - *(float *)(lVar10 + uVar17 * 0x14)));
        uVar21 = uVar21 + 1;
      } while (uVar11 < uVar19);
    }
    local_res18 = (uint)uVar19;
    uVar19 = uVar19 & 0xffffffff;
    iVar18 = -1;
    if (0.0 < fVar27) {
      iVar18 = 1;
    }
    local_d8 = 0;
    uVar15 = 0;
    if (3 < local_res18) {
      uVar21 = 2;
      local_d4 = 3;
      local_res20 = 2;
      do {
        lVar13 = *(longlong *)(param_1 + 0x338);
        lVar10 = *(longlong *)(param_1 + 0x508);
        uVar16 = (uint)local_c8;
        uVar15 = **(uint **)(*(longlong *)(lVar10 + (local_c8 >> 4) * 8) +
                            (ulonglong)(uVar16 & 0xf) * 8);
        uVar9 = **(uint **)(*(longlong *)(lVar10 + (ulonglong)(local_d8 >> 4) * 8) +
                           (ulonglong)(local_d8 & 0xf) * 8);
        uVar12 = **(uint **)(*(longlong *)(lVar10 + (uVar21 >> 4) * 8) +
                            (ulonglong)((uint)uVar21 & 0xf) * 8);
        uVar17 = (ulonglong)(uVar9 & 0xf);
        lVar10 = *(longlong *)(lVar13 + (ulonglong)((uVar15 & 0xfffffff) >> 4) * 8);
        lVar2 = *(longlong *)(lVar13 + (ulonglong)((uVar9 & 0xfffffff) >> 4) * 8);
        lVar3 = *(longlong *)(lVar13 + (ulonglong)((uVar12 & 0xfffffff) >> 4) * 8);
        fVar27 = (float)FUN_143343950(*(undefined4 *)(lVar3 + (ulonglong)(uVar12 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar3 + 4 + (ulonglong)(uVar12 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar2 + uVar17 * 0x14),
                                      *(undefined4 *)(lVar2 + 4 + uVar17 * 0x14),
                                      *(undefined4 *)(lVar10 + (ulonglong)(uVar15 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar10 + 4 + (ulonglong)(uVar15 & 0xf) * 0x14)
                                     );
        uVar9 = **(uint **)(*(longlong *)
                             (*(longlong *)(param_1 + 0x508) + (ulonglong)(local_d4 >> 4) * 8) +
                           (ulonglong)(local_d4 & 0xf) * 8);
        lVar10 = *(longlong *)(lVar13 + (ulonglong)((uVar12 & 0xfffffff) >> 4) * 8);
        lVar2 = *(longlong *)(lVar13 + (ulonglong)((uVar15 & 0xfffffff) >> 4) * 8);
        uVar17 = (ulonglong)(uVar9 & 0xf);
        lVar3 = *(longlong *)(lVar13 + (ulonglong)((uVar9 & 0xfffffff) >> 4) * 8);
        fVar23 = (float)FUN_143343950(*(undefined4 *)(lVar3 + uVar17 * 0x14),
                                      *(undefined4 *)(lVar3 + 4 + uVar17 * 0x14),
                                      *(undefined4 *)(lVar2 + (ulonglong)(uVar15 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar2 + 4 + (ulonglong)(uVar15 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar10 + (ulonglong)(uVar12 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar10 + 4 + (ulonglong)(uVar12 & 0xf) * 0x14)
                                     );
        lVar10 = *(longlong *)(param_1 + 0x508);
        iVar5 = (int)uVar19;
        uVar6 = iVar5 - 2;
        uVar7 = iVar5 - 3;
        uVar8 = iVar5 - 1;
        uVar15 = **(uint **)(*(longlong *)(lVar10 + (ulonglong)(uVar6 >> 4) * 8) +
                            (ulonglong)(uVar6 & 0xf) * 8);
        uVar9 = **(uint **)(*(longlong *)(lVar10 + (ulonglong)(uVar7 >> 4) * 8) +
                           (ulonglong)(uVar7 & 0xf) * 8);
        uVar12 = **(uint **)(*(longlong *)(lVar10 + (ulonglong)(uVar8 >> 4) * 8) +
                            (ulonglong)(uVar8 & 0xf) * 8);
        lVar10 = *(longlong *)(lVar13 + (ulonglong)((uVar15 & 0xfffffff) >> 4) * 8);
        uVar19 = (ulonglong)(uVar12 & 0xf);
        lVar2 = *(longlong *)(lVar13 + (ulonglong)((uVar9 & 0xfffffff) >> 4) * 8);
        lVar3 = *(longlong *)(lVar13 + (ulonglong)((uVar12 & 0xfffffff) >> 4) * 8);
        fVar24 = (float)FUN_143343950(*(undefined4 *)(lVar3 + uVar19 * 0x14),
                                      *(undefined4 *)(lVar3 + 4 + uVar19 * 0x14),
                                      *(undefined4 *)(lVar2 + (ulonglong)(uVar9 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar2 + 4 + (ulonglong)(uVar9 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar10 + (ulonglong)(uVar15 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar10 + 4 + (ulonglong)(uVar15 & 0xf) * 0x14)
                                     );
        uVar12 = **(uint **)(*(longlong *)
                              (*(longlong *)(param_1 + 0x508) +
                              (ulonglong)(local_res18 - 4 >> 4) * 8) +
                            (ulonglong)(local_res18 - 4 & 0xf) * 8);
        lVar10 = *(longlong *)(lVar13 + (ulonglong)((uVar9 & 0xfffffff) >> 4) * 8);
        uVar19 = (ulonglong)(uVar12 & 0xf);
        lVar2 = *(longlong *)(lVar13 + (ulonglong)((uVar12 & 0xfffffff) >> 4) * 8);
        lVar13 = *(longlong *)(lVar13 + (ulonglong)((uVar15 & 0xfffffff) >> 4) * 8);
        fVar25 = (float)FUN_143343950(*(undefined4 *)(lVar13 + (ulonglong)(uVar15 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar13 + 4 + (ulonglong)(uVar15 & 0xf) * 0x14)
                                      ,*(undefined4 *)(lVar2 + uVar19 * 0x14),
                                      *(undefined4 *)(lVar2 + 4 + uVar19 * 0x14),
                                      *(undefined4 *)(lVar10 + (ulonglong)(uVar9 & 0xf) * 0x14),
                                      *(undefined4 *)(lVar10 + 4 + (ulonglong)(uVar9 & 0xf) * 0x14))
        ;
        uVar15 = 0xffffffff;
        if (iVar18 < 1) {
          fVar26 = *(float *)(param_1 + 0x3ac);
          uVar9 = uVar15;
          if ((0.0 < fVar27) && (uVar9 = 0xffffffff, 0.0 < fVar23)) {
            if (fVar26 < fVar27) {
              fVar26 = fVar27;
              uVar15 = uVar16;
            }
            uVar9 = uVar15;
            if (fVar26 < fVar23) {
              fVar26 = fVar23;
              uVar9 = local_res20;
            }
          }
          uVar15 = uVar9;
          if ((0.0 < fVar24) && (0.0 < fVar25)) {
            if (fVar26 < fVar24) {
              fVar26 = fVar24;
              uVar15 = uVar6;
            }
            if (fVar26 < fVar25) {
              uVar15 = uVar7;
            }
          }
LAB_143340b89:
          if (uVar15 == 0xffffffff) goto LAB_143340d23;
          lVar13 = *(longlong *)(param_1 + 0x508);
          FUN_1433402d0(param_1,*(undefined8 *)
                                 (*(longlong *)(lVar13 + (ulonglong)(uVar15 - iVar18 >> 4) * 8) +
                                 (ulonglong)(uVar15 - iVar18 & 0xf) * 8),
                        *(undefined8 *)
                         (*(longlong *)(lVar13 + (ulonglong)(uVar15 >> 4) * 8) +
                         (ulonglong)(uVar15 & 0xf) * 8),
                        *(undefined8 *)
                         (*(longlong *)(lVar13 + (ulonglong)(iVar18 + uVar15 >> 4) * 8) +
                         (ulonglong)(iVar18 + uVar15 & 0xf) * 8),0);
          lVar13 = *(longlong *)(param_1 + 0x508);
          if (uVar15 == uVar16) {
            uVar19 = (ulonglong)(uVar16 & 0xf);
            lVar10 = *(longlong *)(lVar13 + (ulonglong)(local_d8 >> 4) * 8);
            lVar13 = *(longlong *)(lVar13 + (local_c8 >> 4) * 8);
LAB_143340c6c:
            local_res20 = local_res20 + 1;
            local_c8 = (ulonglong)(uVar16 + 1);
            *(undefined8 *)(lVar13 + uVar19 * 8) =
                 *(undefined8 *)(lVar10 + (ulonglong)(local_d8 & 0xf) * 8);
            local_d8 = local_d8 + 1;
            local_d4 = local_d4 + 1;
          }
          else {
            if (uVar15 == local_res20) {
              uVar19 = (ulonglong)(uVar16 & 0xf);
              *(undefined8 *)
               (*(longlong *)(lVar13 + (uVar21 >> 4) * 8) + (ulonglong)((uint)uVar21 & 0xf) * 8) =
                   *(undefined8 *)(*(longlong *)(lVar13 + (local_c8 >> 4) * 8) + uVar19 * 8);
              lVar10 = *(longlong *)
                        (*(longlong *)(param_1 + 0x508) + (ulonglong)(local_d8 >> 4) * 8);
              lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x508) + (local_c8 >> 4) * 8);
              goto LAB_143340c6c;
            }
            if (uVar15 == uVar6) {
              *(undefined8 *)
               (*(longlong *)(lVar13 + (ulonglong)(uVar6 >> 4) * 8) + (ulonglong)(uVar6 & 0xf) * 8)
                   = *(undefined8 *)
                      (*(longlong *)(lVar13 + (ulonglong)(uVar8 >> 4) * 8) +
                      (ulonglong)(uVar8 & 0xf) * 8);
              local_res18 = uVar8;
            }
            else {
              *(undefined8 *)
               (*(longlong *)(lVar13 + (ulonglong)(uVar7 >> 4) * 8) + (ulonglong)(uVar7 & 0xf) * 8)
                   = *(undefined8 *)
                      (*(longlong *)(lVar13 + (ulonglong)(uVar6 >> 4) * 8) +
                      (ulonglong)(uVar6 & 0xf) * 8);
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x508) + (ulonglong)(uVar6 >> 4) * 8) +
               (ulonglong)(uVar6 & 0xf) * 8) =
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x508) + (ulonglong)(uVar8 >> 4) * 8) +
                    (ulonglong)(uVar8 & 0xf) * 8);
              local_res18 = uVar8;
            }
          }
        }
        else {
          fVar26 = -*(float *)(param_1 + 0x3ac);
          if (0.0 <= fVar27) {
LAB_143340b01:
            if ((fVar23 < 0.0) && (fVar25 < 0.0)) {
              if (fVar24 < fVar26) {
                fVar26 = fVar24;
                uVar15 = uVar6;
              }
              if (fVar25 < fVar26) {
                uVar15 = uVar7;
              }
            }
            goto LAB_143340b89;
          }
          if (fVar23 < 0.0) {
            if (fVar27 < fVar26) {
              fVar26 = fVar27;
              uVar15 = uVar16;
            }
            if (fVar23 < fVar26) {
              fVar26 = fVar23;
              uVar15 = local_res20;
            }
            goto LAB_143340b01;
          }
LAB_143340d23:
          uVar21 = (ulonglong)local_res18;
          uVar19 = local_c8 + 1;
          fVar27 = 0.0;
          if (uVar21 <= uVar19) {
            return;
          }
          lVar13 = *(longlong *)(param_1 + 0x508);
          lVar10 = *(longlong *)(param_1 + 0x338);
          uVar17 = local_c8;
          do {
            uVar9 = **(uint **)(*(longlong *)(lVar13 + (uVar17 >> 4) * 8) +
                               (ulonglong)((uint)uVar17 & 0xf) * 8);
            uVar12 = **(uint **)(*(longlong *)(lVar13 + (uVar19 - 2 >> 4) * 8) +
                                (ulonglong)((uint)(uVar19 - 2) & 0xf) * 8);
            uVar20 = (ulonglong)(uVar9 & 0xf);
            uVar6 = **(uint **)(*(longlong *)(lVar13 + (uVar19 >> 4) * 8) +
                               (ulonglong)((uint)uVar19 & 0xf) * 8);
            lVar2 = *(longlong *)(lVar10 + (ulonglong)((uVar9 & 0xfffffff) >> 4) * 8);
            uVar14 = (ulonglong)(uVar12 & 0xf);
            lVar3 = *(longlong *)(lVar10 + (ulonglong)((uVar12 & 0xfffffff) >> 4) * 8);
            uVar11 = (ulonglong)(uVar6 & 0xf);
            lVar4 = *(longlong *)(lVar10 + (ulonglong)((uVar6 & 0xfffffff) >> 4) * 8);
            fVar23 = (float)FUN_143343950(*(undefined4 *)(lVar4 + uVar11 * 0x14),
                                          *(undefined4 *)(lVar4 + 4 + uVar11 * 0x14),
                                          *(undefined4 *)(lVar3 + uVar14 * 0x14),
                                          *(undefined4 *)(lVar3 + 4 + uVar14 * 0x14),
                                          *(undefined4 *)(lVar2 + uVar20 * 0x14),
                                          *(undefined4 *)(lVar2 + 4 + uVar20 * 0x14));
            if (iVar18 < 1) {
              bVar22 = fVar23 < fVar27;
            }
            else {
              bVar22 = fVar27 < fVar23;
            }
            if (!bVar22 && fVar27 != fVar23) {
              fVar27 = fVar23;
              uVar15 = (uint)uVar17;
            }
            uVar17 = uVar17 + 1;
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar21);
          if (uVar15 == 0xffffffff) {
            return;
          }
          FUN_1433402d0(param_1,*(undefined8 *)
                                 (*(longlong *)(lVar13 + (ulonglong)(uVar15 - iVar18 >> 4) * 8) +
                                 (ulonglong)(uVar15 - iVar18 & 0xf) * 8),
                        *(undefined8 *)
                         (*(longlong *)(lVar13 + (ulonglong)(uVar15 >> 4) * 8) +
                         (ulonglong)(uVar15 & 0xf) * 8),
                        *(undefined8 *)
                         (*(longlong *)(lVar13 + (ulonglong)(iVar18 + uVar15 >> 4) * 8) +
                         (ulonglong)(iVar18 + uVar15 & 0xf) * 8),0);
          uVar19 = (ulonglong)(uVar15 + 1);
          local_res18 = uVar8;
          if (uVar19 < uVar21) {
            uVar17 = (ulonglong)(uVar15 + 1) - 1;
            do {
              uVar11 = uVar19 >> 4;
              uVar14 = uVar17 >> 4;
              uVar9 = (uint)uVar19;
              uVar15 = (uint)uVar17;
              uVar19 = uVar19 + 1;
              uVar17 = uVar17 + 1;
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x508) + uVar14 * 8) +
               (ulonglong)(uVar15 & 0xf) * 8) =
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x508) + uVar11 * 8) +
                    (ulonglong)(uVar9 & 0xf) * 8);
            } while (uVar19 < uVar21);
          }
        }
        uVar21 = (ulonglong)local_res20;
        uVar19 = (ulonglong)local_res18;
        uVar15 = local_d8;
      } while (local_d4 < local_res18);
    }
    lVar13 = *(longlong *)(param_1 + 0x508);
    uVar9 = iVar18 + 1 + uVar15;
    uVar12 = (uVar15 - iVar18) + 1;
    FUN_1433402d0(param_1,*(undefined8 *)
                           (*(longlong *)(lVar13 + (ulonglong)(uVar12 >> 4) * 8) +
                           (ulonglong)(uVar12 & 0xf) * 8),
                  *(undefined8 *)
                   (*(longlong *)(lVar13 + (ulonglong)(uVar15 + 1 >> 4) * 8) +
                   (ulonglong)(uVar15 + 1 & 0xf) * 8),
                  *(undefined8 *)
                   (*(longlong *)(lVar13 + (ulonglong)(uVar9 >> 4) * 8) +
                   (ulonglong)(uVar9 & 0xf) * 8),0);
  }
  return;
}



// FUNCTION 143340ff0 FUN_143340ff0 body=634 status=ok
// SIG undefined FUN_143340ff0(void)

void FUN_143340ff0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar3 = *param_2;
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = FUN_14333c1a0();
  *(uint *)(param_1 + 0x3a4) = uVar6;
  uVar7 = 2;
  if (*(int *)(param_1 + 0x3a0) ==
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar6 >> 4) * 8) + 4 +
              (ulonglong)(uVar6 & 0xf) * 0x1c)) {
    uVar7 = 10;
  }
  *(uint *)(param_1 + 0x3a8) = uVar7;
  puVar2 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x378) + (ulonglong)(uVar6 >> 4) * 8) +
                    0xc + (ulonglong)(uVar6 & 0xf) * 0x1c);
  *puVar2 = *puVar2 | uVar7 & 8;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x3a4);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar3 + 8) + 8) != 0)) {
    lVar1 = param_1 + 0x4e8;
    *(undefined4 *)(param_2 + 1) =
         *(undefined4 *)
          ((ulonglong)*(uint *)(param_1 + 0x3a4) * 0x20 + *(longlong *)(param_1 + 0x388));
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    uVar9 = *(ulonglong *)(param_1 + 0x4f0) >> 4;
    if (*(ulonglong *)(param_1 + 0x4f8) <= uVar9) {
      FUN_143343f00(lVar1,uVar9);
    }
    *(longlong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x508) + uVar9 * 8) +
     (ulonglong)(*(uint *)(param_1 + 0x4f0) & 0xf) * 8) = lVar3;
    *(longlong *)(param_1 + 0x4f0) = *(longlong *)(param_1 + 0x4f0) + 1;
    lVar3 = *(longlong *)(lVar3 + 8);
    uVar9 = *(ulonglong *)(param_1 + 0x4f0) >> 4;
    if (*(ulonglong *)(param_1 + 0x4f8) <= uVar9) {
      FUN_143343f00(lVar1,uVar9);
    }
    *(longlong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x508) + uVar9 * 8) +
     (ulonglong)(*(uint *)(param_1 + 0x4f0) & 0xf) * 8) = lVar3;
    *(longlong *)(param_1 + 0x4f0) = *(longlong *)(param_1 + 0x4f0) + 1;
    for (puVar4 = *(undefined4 **)(lVar3 + 8); puVar4 != (undefined4 *)0x0;
        puVar4 = *(undefined4 **)(puVar4 + 2)) {
      uVar9 = *(longlong *)(param_1 + 0x4f0) - 1;
      uVar8 = *(ulonglong *)(param_1 + 0x4f0) >> 4;
      puVar5 = *(undefined4 **)
                (*(longlong *)(*(longlong *)(param_1 + 0x508) + (uVar9 >> 4) * 8) +
                (ulonglong)((uint)uVar9 & 0xf) * 8);
      if (*(ulonglong *)(param_1 + 0x4f8) <= uVar8) {
        FUN_143343f00(lVar1,uVar8);
      }
      *(undefined4 **)
       (*(longlong *)(*(longlong *)(param_1 + 0x508) + uVar8 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x4f0) & 0xf) * 8) = puVar4;
      *(longlong *)(param_1 + 0x4f0) = *(longlong *)(param_1 + 0x4f0) + 1;
      if ((char)((byte)((uint)*puVar5 >> 0x18) ^ (byte)((uint)*puVar4 >> 0x18)) < '\0') {
        FUN_143340600(param_1);
        *(undefined8 *)(param_1 + 0x4f0) = 0;
        uVar9 = *(ulonglong *)(param_1 + 0x4f0) >> 4;
        if (*(ulonglong *)(param_1 + 0x4f8) <= uVar9) {
          FUN_143343f00(lVar1,uVar9);
        }
        *(undefined4 **)
         (*(longlong *)(*(longlong *)(param_1 + 0x508) + uVar9 * 8) +
         (ulonglong)(*(uint *)(param_1 + 0x4f0) & 0xf) * 8) = puVar5;
        *(longlong *)(param_1 + 0x4f0) = *(longlong *)(param_1 + 0x4f0) + 1;
        uVar9 = *(ulonglong *)(param_1 + 0x4f0) >> 4;
        if (*(ulonglong *)(param_1 + 0x4f8) <= uVar9) {
          FUN_143343f00(lVar1,uVar9);
        }
        *(undefined4 **)
         (*(longlong *)(*(longlong *)(param_1 + 0x508) + uVar9 * 8) +
         (ulonglong)(*(uint *)(param_1 + 0x4f0) & 0xf) * 8) = puVar4;
        *(longlong *)(param_1 + 0x4f0) = *(longlong *)(param_1 + 0x4f0) + 1;
      }
    }
    FUN_143340600(param_1);
    *(int *)((longlong)param_2 + 0xc) =
         *(int *)((ulonglong)*(uint *)(param_1 + 0x3a4) * 0x20 + *(longlong *)(param_1 + 0x388)) -
         (int)param_2[1];
  }
  return;
}



// FUNCTION 143341270 FUN_143341270 body=1812 status=ok
// SIG undefined FUN_143341270(void)

void FUN_143341270(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  ulonglong uVar15;
  char cVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
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
  uint local_res18;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  
  local_res18 = 0;
  do {
    if (7 < local_res18) {
      return;
    }
    bVar13 = false;
    bVar14 = false;
    local_f8 = 0;
    if (*(longlong *)(param_1 + 0x390) != 0) {
      local_108 = 0;
      do {
        local_100 = 0;
        uVar3 = *(ulonglong *)(local_108 + *(longlong *)(param_1 + 0x388));
        if (uVar3 != 0) {
          do {
            lVar4 = *(longlong *)(param_1 + 0x338);
            uVar15 = (ulonglong)((uint)local_100 & 0xf);
            lVar5 = *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x388) + 0x18 + local_108) +
                     (local_100 >> 4) * 8);
            puVar6 = *(uint **)(lVar5 + uVar15 * 0x18);
            puVar7 = *(uint **)(lVar5 + 8 + uVar15 * 0x18);
            uVar1 = *puVar6;
            uVar17 = (ulonglong)(uVar1 & 0xf);
            uVar2 = *puVar7;
            lVar8 = *(longlong *)(lVar4 + (ulonglong)((uVar1 & 0xfffffff) >> 4) * 8);
            uVar18 = (ulonglong)(uVar2 & 0xf);
            lVar9 = *(longlong *)(lVar4 + (ulonglong)((uVar2 & 0xfffffff) >> 4) * 8);
            puVar10 = *(uint **)(lVar5 + 0x10 + uVar15 * 0x18);
            uVar1 = *puVar10;
            uVar15 = (ulonglong)(uVar1 & 0xf);
            lVar5 = *(longlong *)(lVar4 + (ulonglong)((uVar1 & 0xfffffff) >> 4) * 8);
            uVar1 = puVar6[1];
            uVar19 = (ulonglong)(uVar1 & 0xf);
            uVar2 = puVar7[1];
            lVar11 = *(longlong *)(lVar4 + (ulonglong)((uVar1 & 0xfffffff) >> 4) * 8);
            uVar20 = (ulonglong)(uVar2 & 0xf);
            fVar26 = *(float *)(lVar11 + uVar19 * 0x14);
            fVar25 = *(float *)(lVar11 + 4 + uVar19 * 0x14);
            lVar12 = *(longlong *)(lVar4 + (ulonglong)((uVar2 & 0xfffffff) >> 4) * 8);
            uVar1 = puVar10[1];
            fVar28 = *(float *)(lVar12 + uVar20 * 0x14);
            fVar29 = *(float *)(lVar12 + 4 + uVar20 * 0x14);
            fVar23 = fVar28 - fVar26;
            uVar21 = (ulonglong)(uVar1 & 0xf);
            fVar24 = fVar29 - fVar25;
            lVar4 = *(longlong *)(lVar4 + (ulonglong)((uVar1 & 0xfffffff) >> 4) * 8);
            fVar27 = *(float *)(lVar4 + uVar21 * 0x14);
            fVar30 = *(float *)(lVar4 + 4 + uVar21 * 0x14);
            fVar28 = fVar27 - fVar28;
            fVar29 = fVar30 - fVar29;
            bVar13 = bVar14;
            if (0.0 <= fVar28 * fVar24 - fVar23 * fVar29) {
              fVar34 = fVar26 - fVar27;
              fVar35 = fVar25 - fVar30;
              fVar33 = fVar24 * fVar24 + fVar23 * fVar23;
              fVar32 = fVar29 * fVar29 + fVar28 * fVar28;
              fVar31 = fVar35 * fVar35 + fVar34 * fVar34;
              fVar22 = _guard_xfg_dispatch_icall_nop(fVar32 + fVar33 + fVar31);
              fVar22 = fVar22 * *(float *)(param_1 + 0x3b4);
              if (fVar33 <= fVar32) {
                cVar16 = (fVar32 <= fVar31) + '\x02';
              }
              else {
                cVar16 = '\x03';
                if (fVar31 < fVar33) {
                  cVar16 = '\x01';
                }
              }
              if (cVar16 == '\x01') {
                fVar28 = *(float *)(lVar5 + uVar15 * 0x14);
                fVar31 = *(float *)(lVar5 + 4 + uVar15 * 0x14) - fVar30;
                fVar29 = (fVar28 - fVar27) * fVar24 - fVar31 * fVar23;
                if (((ABS(fVar29) < fVar22) ||
                    (fVar29 = ((fVar30 - fVar25) * fVar23 - (fVar27 - fVar26) * fVar24) / fVar29,
                    fVar29 <= 0.0)) || (1.0 <= fVar29)) {
                  *(float *)(lVar4 + uVar21 * 0x14) = fVar28;
                  *(undefined4 *)(lVar4 + 4 + uVar21 * 0x14) =
                       *(undefined4 *)(lVar5 + 4 + uVar15 * 0x14);
                }
                else {
                  fVar27 = (fVar28 - fVar27) * fVar29 + fVar27;
                  fVar30 = fVar31 * fVar29 + fVar30;
                  *(float *)(lVar4 + uVar21 * 0x14) = (fVar28 - fVar27) * 0.125 + fVar27;
                  *(float *)(lVar4 + 4 + uVar21 * 0x14) =
                       (*(float *)(lVar5 + 4 + uVar15 * 0x14) - fVar30) * 0.125 + fVar30;
                }
              }
              else if (cVar16 == '\x02') {
                fVar27 = *(float *)(lVar8 + uVar17 * 0x14);
                fVar23 = *(float *)(lVar8 + 4 + uVar17 * 0x14) - fVar25;
                fVar30 = (fVar27 - fVar26) * fVar29 - fVar23 * fVar28;
                if (((ABS(fVar30) < fVar22) ||
                    (fVar30 = ((fVar25 - *(float *)(lVar12 + 4 + uVar20 * 0x14)) * fVar28 -
                              (fVar26 - *(float *)(lVar12 + uVar20 * 0x14)) * fVar29) / fVar30,
                    fVar30 <= 0.0)) || (1.0 <= fVar30)) {
                  *(float *)(lVar11 + uVar19 * 0x14) = fVar27;
                  *(undefined4 *)(lVar11 + 4 + uVar19 * 0x14) =
                       *(undefined4 *)(lVar8 + 4 + uVar17 * 0x14);
                }
                else {
                  fVar26 = (fVar27 - fVar26) * fVar30 + fVar26;
                  fVar25 = fVar23 * fVar30 + fVar25;
                  *(float *)(lVar11 + uVar19 * 0x14) = (fVar27 - fVar26) * 0.125 + fVar26;
                  *(float *)(lVar11 + 4 + uVar19 * 0x14) =
                       (*(float *)(lVar8 + 4 + uVar17 * 0x14) - fVar25) * 0.125 + fVar25;
                }
              }
              else if (cVar16 == '\x03') {
                fVar26 = *(float *)(lVar9 + uVar18 * 0x14);
                fVar25 = *(float *)(lVar12 + uVar20 * 0x14);
                fVar28 = *(float *)(lVar12 + 4 + uVar20 * 0x14);
                fVar23 = *(float *)(lVar9 + 4 + uVar18 * 0x14) - fVar28;
                fVar29 = (fVar26 - fVar25) * fVar35 - fVar23 * fVar34;
                if (((ABS(fVar29) < fVar22) ||
                    (fVar29 = ((fVar28 - fVar30) * fVar34 - (fVar25 - fVar27) * fVar35) / fVar29,
                    fVar29 <= 0.0)) || (1.0 <= fVar29)) {
                  *(float *)(lVar12 + uVar20 * 0x14) = fVar26;
                  *(undefined4 *)(lVar12 + 4 + uVar20 * 0x14) =
                       *(undefined4 *)(lVar9 + 4 + uVar18 * 0x14);
                }
                else {
                  fVar25 = (fVar26 - fVar25) * fVar29 + fVar25;
                  fVar28 = fVar23 * fVar29 + fVar28;
                  *(float *)(lVar12 + uVar20 * 0x14) = (fVar26 - fVar25) * 0.125 + fVar25;
                  *(float *)(lVar12 + 4 + uVar20 * 0x14) =
                       (*(float *)(lVar9 + 4 + uVar18 * 0x14) - fVar28) * 0.125 + fVar28;
                }
              }
              fVar26 = *(float *)(lVar12 + 4 + uVar20 * 0x14);
              fVar25 = *(float *)(lVar12 + uVar20 * 0x14);
              if (0.0 <= (fVar26 - *(float *)(lVar11 + 4 + uVar19 * 0x14)) *
                         (*(float *)(lVar4 + uVar21 * 0x14) - fVar25) -
                         (*(float *)(lVar4 + 4 + uVar21 * 0x14) - fVar26) *
                         (fVar25 - *(float *)(lVar11 + uVar19 * 0x14))) {
                *(undefined4 *)(lVar11 + uVar19 * 0x14) = *(undefined4 *)(lVar8 + uVar17 * 0x14);
                *(undefined4 *)(lVar11 + 4 + uVar19 * 0x14) =
                     *(undefined4 *)(lVar8 + 4 + uVar17 * 0x14);
                *(undefined4 *)(lVar12 + uVar20 * 0x14) = *(undefined4 *)(lVar9 + uVar18 * 0x14);
                *(undefined4 *)(lVar12 + 4 + uVar20 * 0x14) =
                     *(undefined4 *)(lVar9 + 4 + uVar18 * 0x14);
                *(undefined4 *)(lVar4 + uVar21 * 0x14) = *(undefined4 *)(lVar5 + uVar15 * 0x14);
                *(undefined4 *)(lVar4 + 4 + uVar21 * 0x14) =
                     *(undefined4 *)(lVar5 + 4 + uVar15 * 0x14);
              }
              bVar13 = true;
            }
            local_100 = local_100 + 1;
            bVar14 = bVar13;
          } while (local_100 < uVar3);
        }
        local_f8 = local_f8 + 1;
        local_108 = local_108 + 0x20;
      } while (local_f8 < *(ulonglong *)(param_1 + 0x390));
    }
    local_res18 = local_res18 + 1;
  } while (bVar13);
  return;
}



// FUNCTION 143341990 FUN_143341990 body=349 status=ok
// SIG undefined FUN_143341990(void)

void FUN_143341990(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  
  uVar7 = param_2;
  do {
    uVar6 = uVar7 + 1;
    if (param_3 <= uVar6) {
      return;
    }
    lVar2 = (uVar7 >> 4) * 8;
    lVar3 = (ulonglong)((uint)uVar7 & 0xf) * 0xc;
    uVar10 = uVar7 + 1;
    cVar8 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar10 >> 4) * 8) +
                       (ulonglong)((uint)uVar10 & 0xf) * 0xc,
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
    while (uVar7 = uVar6, cVar8 != '\0') {
      uVar9 = (ulonglong)((uint)uVar10 & 0xf);
      puVar12 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar10 >> 4) * 8);
      uVar11 = uVar10 - 1;
      uVar4 = *(undefined8 *)(lVar2 + uVar9 * 0xc);
      puVar1 = (undefined8 *)(lVar2 + uVar9 * 0xc);
      uVar5 = *(undefined4 *)(lVar2 + 8 + uVar9 * 0xc);
      *puVar1 = *puVar12;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar12 + 1);
      *puVar12 = uVar4;
      *(undefined4 *)(puVar12 + 1) = uVar5;
      if (uVar11 <= param_2) break;
      lVar2 = (uVar10 - 2 >> 4) * 8;
      lVar3 = (ulonglong)((uint)(uVar10 - 2) & 0xf) * 0xc;
      cVar8 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8) +
                         (ulonglong)((uint)uVar11 & 0xf) * 0xc,
                         *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20)) + lVar3);
      uVar10 = uVar11;
    }
  } while( true );
}



// FUNCTION 143341af0 FUN_143341af0 body=1323 status=ok
// SIG undefined FUN_143341af0(void)

void FUN_143341af0(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar17 = local_2b8;
LAB_143341b40:
    while (uVar15 = param_2, 9 < (longlong)(param_3 - param_2)) {
      uVar15 = param_3 - 1;
      uVar7 = param_2 + 1;
      uVar14 = (ulonglong)((uint)param_2 & 0xf);
      uVar18 = param_2 >> 4;
      uVar13 = (ulonglong)((uint)uVar15 & 0xf);
      uVar11 = (longlong)(param_3 - param_2) / 2 + param_2;
      uVar9 = (ulonglong)((uint)uVar7 & 0xf);
      uVar12 = (ulonglong)((uint)uVar11 & 0xf);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar18 * 8);
      uVar3 = *(undefined4 *)(lVar10 + uVar14 * 4);
      *(undefined4 *)(lVar10 + uVar14 * 4) = *(undefined4 *)(lVar8 + uVar12 * 4);
      *(undefined4 *)(lVar8 + uVar12 * 4) = uVar3;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 4) * 8);
      uVar4 = *(uint *)(lVar8 + uVar13 * 4);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar7 >> 4) * 8);
      uVar5 = *(uint *)(lVar10 + uVar9 * 4);
      fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar5 >> 4) * 8)
                         + 4 + (ulonglong)(uVar5 & 0xf) * 8);
      pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar4 >> 4) * 8)
                         + 4 + (ulonglong)(uVar4 & 0xf) * 8);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        uVar3 = *(undefined4 *)(lVar8 + uVar13 * 4);
        *(undefined4 *)(lVar8 + uVar13 * 4) = *(undefined4 *)(lVar10 + uVar9 * 4);
        *(undefined4 *)(lVar10 + uVar9 * 4) = uVar3;
      }
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar18 * 8);
      uVar4 = *(uint *)(lVar8 + uVar14 * 4);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar7 >> 4) * 8);
      uVar5 = *(uint *)(lVar10 + uVar9 * 4);
      fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar5 >> 4) * 8)
                         + 4 + (ulonglong)(uVar5 & 0xf) * 8);
      pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar4 >> 4) * 8)
                         + 4 + (ulonglong)(uVar4 & 0xf) * 8);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        uVar3 = *(undefined4 *)(lVar8 + uVar14 * 4);
        *(undefined4 *)(lVar8 + uVar14 * 4) = *(undefined4 *)(lVar10 + uVar9 * 4);
        *(undefined4 *)(lVar10 + uVar9 * 4) = uVar3;
      }
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 4) * 8);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar18 * 8);
      uVar4 = *(uint *)(lVar8 + uVar13 * 4);
      uVar5 = *(uint *)(lVar10 + uVar14 * 4);
      fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar5 >> 4) * 8)
                         + 4 + (ulonglong)(uVar5 & 0xf) * 8);
      pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar4 >> 4) * 8)
                         + 4 + (ulonglong)(uVar4 & 0xf) * 8);
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        uVar3 = *(undefined4 *)(lVar8 + uVar13 * 4);
        *(undefined4 *)(lVar8 + uVar13 * 4) = *(undefined4 *)(lVar10 + uVar14 * 4);
        *(undefined4 *)(lVar10 + uVar14 * 4) = uVar3;
      }
      while( true ) {
        lVar8 = *(longlong *)(param_1 + 0x20);
        uVar4 = *(uint *)(*(longlong *)(lVar8 + uVar18 * 8) + uVar14 * 4);
        lVar10 = *(longlong *)(param_4 + 0x20);
        fVar2 = *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar4 >> 4) * 8) + 4 +
                          (ulonglong)(uVar4 & 0xf) * 8);
        do {
          uVar7 = uVar7 + 1;
          uVar4 = *(uint *)(*(longlong *)(lVar8 + (uVar7 >> 4) * 8) +
                           (ulonglong)((uint)uVar7 & 0xf) * 4);
          pfVar1 = (float *)(*(longlong *)(lVar10 + (ulonglong)(uVar4 >> 4) * 8) + 4 +
                            (ulonglong)(uVar4 & 0xf) * 8);
        } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        uVar4 = *(uint *)(*(longlong *)(lVar8 + uVar18 * 8) + uVar14 * 4);
        do {
          uVar15 = uVar15 - 1;
          uVar6 = (uint)uVar15;
          uVar5 = *(uint *)(*(longlong *)(lVar8 + (uVar15 >> 4) * 8) + (ulonglong)(uVar6 & 0xf) * 4)
          ;
        } while (*(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar4 >> 4) * 8) + 4 +
                           (ulonglong)(uVar4 & 0xf) * 8) <
                 *(float *)(*(longlong *)(lVar10 + (ulonglong)(uVar5 >> 4) * 8) + 4 +
                           (ulonglong)(uVar5 & 0xf) * 8));
        if ((longlong)uVar15 < (longlong)uVar7) break;
        lVar10 = *(longlong *)(lVar8 + (uVar15 >> 4) * 8);
        uVar11 = (ulonglong)((uint)uVar7 & 0xf);
        lVar8 = *(longlong *)(lVar8 + (uVar7 >> 4) * 8);
        uVar3 = *(undefined4 *)(lVar8 + uVar11 * 4);
        *(undefined4 *)(lVar8 + uVar11 * 4) = *(undefined4 *)(lVar10 + (ulonglong)(uVar6 & 0xf) * 4)
        ;
        *(undefined4 *)(lVar10 + (ulonglong)(uVar6 & 0xf) * 4) = uVar3;
      }
      lVar10 = *(longlong *)(lVar8 + (uVar15 >> 4) * 8);
      lVar8 = *(longlong *)(lVar8 + uVar18 * 8);
      uVar3 = *(undefined4 *)(lVar8 + uVar14 * 4);
      *(undefined4 *)(lVar8 + uVar14 * 4) = *(undefined4 *)(lVar10 + (ulonglong)(uVar6 & 0xf) * 4);
      *(undefined4 *)(lVar10 + (ulonglong)(uVar6 & 0xf) * 4) = uVar3;
      if ((longlong)(param_3 - uVar7) < (longlong)(uVar15 - param_2)) {
        *puVar17 = param_2;
        puVar17[1] = uVar15;
        param_2 = uVar7;
        puVar17 = puVar17 + 2;
      }
      else {
        puVar17[1] = param_3;
        *puVar17 = uVar7;
        puVar17 = puVar17 + 2;
        param_3 = uVar15;
      }
    }
joined_r0x000143341e7f:
    uVar7 = uVar15 + 1;
    if ((longlong)uVar7 < (longlong)param_3) {
      lVar16 = *(longlong *)(param_1 + 0x20);
      uVar11 = uVar15 + 1;
      uVar4 = *(uint *)(*(longlong *)(lVar16 + (uVar11 >> 4) * 8) +
                       (ulonglong)((uint)uVar11 & 0xf) * 4);
      lVar8 = (ulonglong)((uint)uVar15 & 0xf) * 4;
      lVar10 = (uVar15 >> 4) * 8;
      uVar5 = *(uint *)(*(longlong *)(lVar10 + lVar16) + lVar8);
      fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar5 >> 4) * 8)
                         + 4 + (ulonglong)(uVar5 & 0xf) * 8);
      pfVar1 = (float *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar4 >> 4) * 8)
                         + 4 + (ulonglong)(uVar4 & 0xf) * 8);
      uVar15 = uVar7;
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        do {
          lVar10 = *(longlong *)(lVar10 + lVar16);
          uVar7 = (ulonglong)((uint)uVar11 & 0xf);
          uVar14 = uVar11 - 1;
          lVar16 = *(longlong *)(lVar16 + (uVar11 >> 4) * 8);
          uVar3 = *(undefined4 *)(lVar16 + uVar7 * 4);
          *(undefined4 *)(lVar16 + uVar7 * 4) = *(undefined4 *)(lVar8 + lVar10);
          *(undefined4 *)(lVar8 + lVar10) = uVar3;
          if (uVar14 == param_2) break;
          lVar16 = *(longlong *)(param_1 + 0x20);
          uVar4 = *(uint *)(*(longlong *)(lVar16 + (uVar14 >> 4) * 8) +
                           (ulonglong)((uint)uVar14 & 0xf) * 4);
          lVar8 = (ulonglong)((uint)(uVar11 - 2) & 0xf) * 4;
          lVar10 = (uVar11 - 2 >> 4) * 8;
          uVar5 = *(uint *)(*(longlong *)(lVar10 + lVar16) + lVar8);
          fVar2 = *(float *)(*(longlong *)
                              (*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar5 >> 4) * 8) + 4 +
                            (ulonglong)(uVar5 & 0xf) * 8);
          pfVar1 = (float *)(*(longlong *)
                              (*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar4 >> 4) * 8) + 4 +
                            (ulonglong)(uVar4 & 0xf) * 8);
          uVar11 = uVar14;
        } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
      }
      goto joined_r0x000143341e7f;
    }
    if (local_2b8 < puVar17) {
      param_2 = puVar17[-2];
      param_3 = puVar17[-1];
      puVar17 = puVar17 + -2;
      goto LAB_143341b40;
    }
  }
  return;
}



// FUNCTION 143342020 FUN_143342020 body=1078 status=ok
// SIG undefined FUN_143342020(void)

void FUN_143342020(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  ulonglong *puVar27;
  longlong lVar28;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar27 = local_2b8;
    local_res10 = param_3;
LAB_143342068:
    while (uVar21 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar21 = local_res10 - 1;
      uVar23 = param_2 + 1;
      lVar28 = (ulonglong)((uint)param_2 & 0xf) * 0x10;
      lVar26 = (ulonglong)((uint)uVar21 & 0xf) * 0x10;
      uVar24 = (longlong)(local_res10 - param_2) / 2 + param_2;
      puVar18 = (undefined4 *)
                ((ulonglong)((uint)uVar24 & 0xf) * 0x10 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar24 >> 4) * 8));
      uVar6 = puVar18[1];
      uVar7 = puVar18[2];
      uVar8 = puVar18[3];
      lVar2 = (param_2 >> 4) * 8;
      lVar22 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
      puVar1 = (undefined4 *)(lVar28 + lVar22);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar1 = (undefined4 *)(lVar28 + lVar22);
      *puVar1 = *puVar18;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *puVar18 = uVar9;
      puVar18[1] = uVar10;
      puVar18[2] = uVar11;
      puVar18[3] = uVar12;
      lVar19 = (ulonglong)((uint)uVar23 & 0xf) * 0x10;
      lVar22 = (uVar23 >> 4) * 8;
      lVar3 = (uVar21 >> 4) * 8;
      cVar15 = (*param_4)(*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x20)) + lVar26,
                          lVar19 + *(longlong *)(lVar22 + *(longlong *)(param_1 + 0x20)));
      if (cVar15 != '\0') {
        lVar4 = *(longlong *)(lVar22 + *(longlong *)(param_1 + 0x20));
        lVar5 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x20));
        puVar1 = (undefined4 *)(lVar4 + lVar19);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar16 = (undefined8 *)(lVar26 + lVar5);
        uVar13 = *puVar16;
        uVar14 = puVar16[1];
        puVar18 = (undefined4 *)(lVar26 + lVar5);
        *puVar18 = *puVar1;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar16 = (undefined8 *)(lVar4 + lVar19);
        *puVar16 = uVar13;
        puVar16[1] = uVar14;
      }
      cVar15 = (*param_4)(*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20)) + lVar28,
                          *(longlong *)(lVar22 + *(longlong *)(param_1 + 0x20)) + lVar19);
      if (cVar15 != '\0') {
        puVar20 = (undefined8 *)(lVar19 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar22));
        lVar22 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
        uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
        uVar7 = *(undefined4 *)(puVar20 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
        puVar16 = (undefined8 *)(lVar28 + lVar22);
        uVar13 = *puVar16;
        uVar14 = puVar16[1];
        puVar1 = (undefined4 *)(lVar28 + lVar22);
        *puVar1 = *(undefined4 *)puVar20;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
        *puVar20 = uVar13;
        puVar20[1] = uVar14;
      }
      cVar15 = (*param_4)(lVar26 + *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar28);
      if (cVar15 != '\0') {
        lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        lVar3 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x20));
        puVar1 = (undefined4 *)(lVar22 + lVar28);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar16 = (undefined8 *)(lVar26 + lVar3);
        uVar13 = *puVar16;
        uVar14 = puVar16[1];
        puVar18 = (undefined4 *)(lVar26 + lVar3);
        *puVar18 = *puVar1;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar16 = (undefined8 *)(lVar22 + lVar28);
        *puVar16 = uVar13;
        puVar16[1] = uVar14;
      }
      while( true ) {
        do {
          uVar23 = uVar23 + 1;
          cVar15 = (*param_4)((ulonglong)((uint)uVar23 & 0xf) * 0x10 +
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar23 >> 4) * 8),
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar28);
        } while (cVar15 != '\0');
        do {
          uVar21 = uVar21 - 1;
          uVar17 = (uint)uVar21;
          cVar15 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar28,
                              (ulonglong)(uVar17 & 0xf) * 0x10 +
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar21 >> 4) * 8));
        } while (cVar15 != '\0');
        if ((longlong)uVar21 < (longlong)uVar23) break;
        puVar20 = (undefined8 *)
                  ((ulonglong)(uVar17 & 0xf) * 0x10 +
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar21 >> 4) * 8));
        uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
        uVar7 = *(undefined4 *)(puVar20 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
        puVar16 = (undefined8 *)
                  ((ulonglong)((uint)uVar23 & 0xf) * 0x10 +
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar23 >> 4) * 8));
        uVar13 = *puVar16;
        uVar14 = puVar16[1];
        *(undefined4 *)puVar16 = *(undefined4 *)puVar20;
        *(undefined4 *)((longlong)puVar16 + 4) = uVar6;
        *(undefined4 *)(puVar16 + 1) = uVar7;
        *(undefined4 *)((longlong)puVar16 + 0xc) = uVar8;
        *puVar20 = uVar13;
        puVar20[1] = uVar14;
      }
      puVar20 = (undefined8 *)
                ((ulonglong)(uVar17 & 0xf) * 0x10 +
                *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar21 >> 4) * 8));
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
      uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
      uVar7 = *(undefined4 *)(puVar20 + 1);
      uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
      puVar16 = (undefined8 *)(lVar28 + lVar2);
      uVar13 = *puVar16;
      uVar14 = puVar16[1];
      puVar1 = (undefined4 *)(lVar28 + lVar2);
      *puVar1 = *(undefined4 *)puVar20;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      *puVar20 = uVar13;
      puVar20[1] = uVar14;
      if ((longlong)(local_res10 - uVar23) < (longlong)(uVar21 - param_2)) {
        *puVar27 = param_2;
        puVar27[1] = uVar21;
        puVar27 = puVar27 + 2;
        param_2 = uVar23;
      }
      else {
        puVar27[1] = local_res10;
        *puVar27 = uVar23;
        puVar27 = puVar27 + 2;
        local_res10 = uVar21;
      }
    }
joined_r0x00014334231b:
    uVar23 = uVar21 + 1;
    if ((longlong)uVar23 < (longlong)local_res10) {
      lVar2 = (uVar21 >> 4) * 8;
      lVar22 = (ulonglong)((uint)uVar21 & 0xf) * 0x10;
      uVar24 = uVar21 + 1;
      cVar15 = (*param_4)((ulonglong)((uint)uVar24 & 0xf) * 0x10 +
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar24 >> 4) * 8),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar22);
      while (uVar21 = uVar23, cVar15 != '\0') {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        puVar18 = (undefined4 *)
                  ((ulonglong)((uint)uVar24 & 0xf) * 0x10 +
                  *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar24 >> 4) * 8));
        uVar25 = uVar24 - 1;
        puVar1 = (undefined4 *)(lVar2 + lVar22);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar9 = *puVar18;
        uVar10 = puVar18[1];
        uVar11 = puVar18[2];
        uVar12 = puVar18[3];
        *puVar18 = *puVar1;
        puVar18[1] = uVar6;
        puVar18[2] = uVar7;
        puVar18[3] = uVar8;
        puVar1 = (undefined4 *)(lVar2 + lVar22);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        if (uVar25 == param_2) break;
        lVar2 = (uVar24 - 2 >> 4) * 8;
        lVar22 = (ulonglong)((uint)(uVar24 - 2) & 0xf) * 0x10;
        cVar15 = (*param_4)((ulonglong)((uint)uVar25 & 0xf) * 0x10 +
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar25 >> 4) * 8),
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar22);
        uVar24 = uVar25;
      }
      goto joined_r0x00014334231b;
    }
    if (local_2b8 < puVar27) {
      local_res10 = puVar27[-1];
      puVar27 = puVar27 + -2;
      param_2 = *puVar27;
      goto LAB_143342068;
    }
  }
  return;
}



// FUNCTION 143342460 FUN_143342460 body=1062 status=ok
// SIG undefined FUN_143342460(void)

void FUN_143342460(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar16 = local_2b8;
    local_res10 = param_3;
LAB_1433424ab:
    while (uVar13 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar13 = local_res10 - 1;
      uVar15 = param_2 + 1;
      uVar11 = (longlong)(local_res10 - param_2) / 2 + param_2;
      puVar12 = (undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8) +
                (ulonglong)((uint)uVar11 & 0xf) * 8);
      lVar2 = (param_2 >> 4) * 8;
      lVar7 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
      uVar11 = (ulonglong)((uint)param_2 & 0xf);
      lVar3 = uVar11 * 8;
      uVar8 = *(undefined8 *)(lVar7 + uVar11 * 8);
      *(undefined8 *)(lVar7 + lVar3) = *puVar12;
      *puVar12 = uVar8;
      lVar7 = (uVar15 >> 4) * 8;
      lVar4 = (ulonglong)((uint)uVar15 & 0xf) * 8;
      lVar5 = (uVar13 >> 4) * 8;
      lVar6 = (ulonglong)((uint)uVar13 & 0xf) * 8;
      cVar10 = (*param_4)(*(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)) + lVar6,
                          *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20)) + lVar4);
      if (cVar10 != '\0') {
        lVar9 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20));
        puVar12 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar9 + lVar4);
        *(undefined8 *)(lVar9 + lVar4) = uVar8;
      }
      cVar10 = (*param_4)(*(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20)) + lVar3,
                          *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20)) + lVar4);
      if (cVar10 != '\0') {
        lVar9 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
        puVar12 = (undefined8 *)(lVar4 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7));
        uVar8 = *(undefined8 *)(lVar9 + lVar3);
        *(undefined8 *)(lVar9 + lVar3) = *puVar12;
        *puVar12 = uVar8;
      }
      cVar10 = (*param_4)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
      if (cVar10 != '\0') {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        puVar12 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar7 + lVar3);
        *(undefined8 *)(lVar7 + lVar3) = uVar8;
      }
      while( true ) {
        do {
          uVar15 = uVar15 + 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 4) * 8) +
                              (ulonglong)((uint)uVar15 & 0xf) * 8,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
        } while (cVar10 != '\0');
        do {
          uVar13 = uVar13 - 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar13 >> 4) * 8) +
                              (ulonglong)((uint)uVar13 & 0xf) * 8);
        } while (cVar10 != '\0');
        lVar7 = *(longlong *)(param_1 + 0x20);
        puVar12 = (undefined8 *)
                  (*(longlong *)(lVar7 + (uVar13 >> 4) * 8) + (ulonglong)((uint)uVar13 & 0xf) * 8);
        if ((longlong)uVar13 < (longlong)uVar15) break;
        puVar1 = (undefined8 *)
                 (*(longlong *)(lVar7 + (uVar15 >> 4) * 8) + (ulonglong)((uint)uVar15 & 0xf) * 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar12;
        *puVar12 = uVar8;
      }
      uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + lVar2) + lVar3);
      *(undefined8 *)(*(longlong *)(lVar7 + lVar2) + lVar3) = *puVar12;
      *puVar12 = uVar8;
      if ((longlong)(local_res10 - uVar15) < (longlong)(uVar13 - param_2)) {
        *puVar16 = param_2;
        puVar16[1] = uVar13;
        puVar16 = puVar16 + 2;
        param_2 = uVar15;
      }
      else {
        puVar16[1] = local_res10;
        *puVar16 = uVar15;
        puVar16 = puVar16 + 2;
        local_res10 = uVar13;
      }
    }
joined_r0x000143342744:
    uVar15 = uVar13 + 1;
    if ((longlong)uVar15 < (longlong)local_res10) {
      lVar2 = (uVar13 >> 4) * 8;
      lVar3 = (ulonglong)((uint)uVar13 & 0xf) * 8;
      uVar11 = uVar13 + 1;
      cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8) +
                          (ulonglong)((uint)uVar11 & 0xf) * 8,
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
      while (uVar13 = uVar15, cVar10 != '\0') {
        uVar14 = uVar11 - 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        puVar12 = (undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8) +
                  (ulonglong)((uint)uVar11 & 0xf) * 8);
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar2 + lVar3);
        *(undefined8 *)(lVar2 + lVar3) = uVar8;
        if (uVar14 == param_2) break;
        lVar2 = (uVar11 - 2 >> 4) * 8;
        lVar3 = (ulonglong)((uint)(uVar11 - 2) & 0xf) * 8;
        cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar14 >> 4) * 8) +
                            (ulonglong)((uint)uVar14 & 0xf) * 8,
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3);
        uVar11 = uVar14;
      }
      goto joined_r0x000143342744;
    }
    if (local_2b8 < puVar16) {
      local_res10 = puVar16[-1];
      puVar16 = puVar16 + -2;
      param_2 = *puVar16;
      goto LAB_1433424ab;
    }
  }
  return;
}



// FUNCTION 143342890 FUN_143342890 body=1311 status=ok
// SIG undefined FUN_143342890(void)

void FUN_143342890(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  ulonglong *puVar27;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar27 = local_2b8;
    local_res10 = param_3;
LAB_1433428db:
    while (uVar22 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar22 = local_res10 - 1;
      uVar25 = param_2 + 1;
      uVar1 = (longlong)(local_res10 - param_2) / 2 + param_2;
      uVar23 = (ulonglong)((uint)uVar1 & 7);
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar1 & 0xfffffffffffffff8));
      puVar2 = (undefined4 *)(lVar7 + uVar23 * 0x18);
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar26 = (undefined4 *)(lVar7 + uVar23 * 0x18);
      uVar1 = param_2 & 0xfffffffffffffff8;
      lVar7 = (ulonglong)((uint)param_2 & 7) * 0x18;
      lVar8 = *(longlong *)(uVar1 + *(longlong *)(param_1 + 0x20));
      puVar3 = (undefined4 *)(lVar7 + lVar8);
      uVar13 = *puVar3;
      uVar14 = puVar3[1];
      uVar15 = puVar3[2];
      uVar16 = puVar3[3];
      uVar6 = *(undefined8 *)(lVar7 + 0x10 + lVar8);
      puVar3 = (undefined4 *)(lVar7 + lVar8);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      puVar3[2] = uVar11;
      puVar3[3] = uVar12;
      *(undefined8 *)(lVar7 + 0x10 + lVar8) = *(undefined8 *)(puVar26 + 4);
      *puVar26 = uVar13;
      puVar26[1] = uVar14;
      puVar26[2] = uVar15;
      puVar26[3] = uVar16;
      *(undefined8 *)(puVar26 + 4) = uVar6;
      uVar23 = uVar25 & 0xfffffffffffffff8;
      lVar8 = (ulonglong)((uint)uVar25 & 7) * 0x18;
      uVar20 = uVar22 & 0xfffffffffffffff8;
      lVar5 = (ulonglong)((uint)uVar22 & 7) * 0x18;
      cVar19 = (*param_4)(*(longlong *)(uVar20 + *(longlong *)(param_1 + 0x20)) + lVar5,
                          *(longlong *)(uVar23 + *(longlong *)(param_1 + 0x20)) + lVar8);
      if (cVar19 != '\0') {
        lVar9 = *(longlong *)(uVar20 + *(longlong *)(param_1 + 0x20));
        puVar21 = (undefined8 *)(*(longlong *)(uVar23 + *(longlong *)(param_1 + 0x20)) + lVar8);
        uVar10 = *(undefined4 *)((longlong)puVar21 + 4);
        uVar11 = *(undefined4 *)(puVar21 + 1);
        uVar12 = *(undefined4 *)((longlong)puVar21 + 0xc);
        uVar17 = *(undefined8 *)(lVar5 + lVar9);
        uVar18 = ((undefined8 *)(lVar5 + lVar9))[1];
        uVar6 = *(undefined8 *)(lVar5 + 0x10 + lVar9);
        puVar2 = (undefined4 *)(lVar5 + lVar9);
        *puVar2 = *(undefined4 *)puVar21;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        *(undefined8 *)(lVar5 + 0x10 + lVar9) = puVar21[2];
        *puVar21 = uVar17;
        puVar21[1] = uVar18;
        puVar21[2] = uVar6;
      }
      cVar19 = (*param_4)(*(longlong *)(uVar1 + *(longlong *)(param_1 + 0x20)) + lVar7,
                          *(longlong *)(uVar23 + *(longlong *)(param_1 + 0x20)) + lVar8);
      if (cVar19 != '\0') {
        puVar21 = (undefined8 *)(lVar8 + *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar23));
        lVar8 = *(longlong *)(uVar1 + *(longlong *)(param_1 + 0x20));
        uVar10 = *(undefined4 *)((longlong)puVar21 + 4);
        uVar11 = *(undefined4 *)(puVar21 + 1);
        uVar12 = *(undefined4 *)((longlong)puVar21 + 0xc);
        uVar17 = *(undefined8 *)(lVar7 + lVar8);
        uVar18 = ((undefined8 *)(lVar7 + lVar8))[1];
        uVar6 = *(undefined8 *)(lVar7 + 0x10 + lVar8);
        puVar2 = (undefined4 *)(lVar7 + lVar8);
        *puVar2 = *(undefined4 *)puVar21;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        *(undefined8 *)(lVar7 + 0x10 + lVar8) = puVar21[2];
        *puVar21 = uVar17;
        puVar21[1] = uVar18;
        puVar21[2] = uVar6;
      }
      cVar19 = (*param_4)(lVar5 + *(longlong *)(uVar20 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar1) + lVar7);
      if (cVar19 != '\0') {
        lVar8 = *(longlong *)(uVar20 + *(longlong *)(param_1 + 0x20));
        puVar21 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar1) + lVar7);
        uVar10 = *(undefined4 *)((longlong)puVar21 + 4);
        uVar11 = *(undefined4 *)(puVar21 + 1);
        uVar12 = *(undefined4 *)((longlong)puVar21 + 0xc);
        uVar17 = *(undefined8 *)(lVar5 + lVar8);
        uVar18 = ((undefined8 *)(lVar5 + lVar8))[1];
        uVar6 = *(undefined8 *)(lVar5 + 0x10 + lVar8);
        puVar2 = (undefined4 *)(lVar5 + lVar8);
        *puVar2 = *(undefined4 *)puVar21;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        *(undefined8 *)(lVar5 + 0x10 + lVar8) = puVar21[2];
        *puVar21 = uVar17;
        puVar21[1] = uVar18;
        puVar21[2] = uVar6;
      }
      while( true ) {
        do {
          uVar25 = uVar25 + 1;
          cVar19 = (*param_4)(*(longlong *)
                               (*(longlong *)(param_1 + 0x20) + (uVar25 & 0xfffffffffffffff8)) +
                              (ulonglong)((uint)uVar25 & 7) * 0x18,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar1) + lVar7);
        } while (cVar19 != '\0');
        do {
          uVar22 = uVar22 - 1;
          cVar19 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar1) + lVar7,
                              *(longlong *)
                               (*(longlong *)(param_1 + 0x20) + (uVar22 & 0xfffffffffffffff8)) +
                              (ulonglong)((uint)uVar22 & 7) * 0x18);
        } while (cVar19 != '\0');
        lVar8 = *(longlong *)(param_1 + 0x20);
        uVar23 = (ulonglong)((uint)uVar22 & 7);
        lVar5 = *(longlong *)(lVar8 + (uVar22 & 0xfffffffffffffff8));
        if ((longlong)uVar22 < (longlong)uVar25) break;
        puVar2 = (undefined4 *)(lVar5 + uVar23 * 0x18);
        uVar10 = puVar2[1];
        uVar11 = puVar2[2];
        uVar12 = puVar2[3];
        puVar21 = (undefined8 *)(lVar5 + uVar23 * 0x18);
        uVar23 = (ulonglong)((uint)uVar25 & 7);
        lVar8 = *(longlong *)(lVar8 + (uVar25 & 0xfffffffffffffff8));
        puVar4 = (undefined8 *)(lVar8 + uVar23 * 0x18);
        uVar17 = *puVar4;
        uVar18 = puVar4[1];
        uVar6 = *(undefined8 *)(lVar8 + 0x10 + uVar23 * 0x18);
        puVar26 = (undefined4 *)(lVar8 + uVar23 * 0x18);
        *puVar26 = *puVar2;
        puVar26[1] = uVar10;
        puVar26[2] = uVar11;
        puVar26[3] = uVar12;
        *(undefined8 *)(lVar8 + 0x10 + uVar23 * 0x18) = puVar21[2];
        *puVar21 = uVar17;
        puVar21[1] = uVar18;
        puVar21[2] = uVar6;
      }
      puVar2 = (undefined4 *)(lVar5 + uVar23 * 0x18);
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar21 = (undefined8 *)(lVar5 + uVar23 * 0x18);
      lVar8 = *(longlong *)(lVar8 + uVar1);
      uVar17 = *(undefined8 *)(lVar7 + lVar8);
      uVar18 = ((undefined8 *)(lVar7 + lVar8))[1];
      uVar6 = *(undefined8 *)(lVar7 + 0x10 + lVar8);
      puVar26 = (undefined4 *)(lVar7 + lVar8);
      *puVar26 = *puVar2;
      puVar26[1] = uVar10;
      puVar26[2] = uVar11;
      puVar26[3] = uVar12;
      *(undefined8 *)(lVar7 + 0x10 + lVar8) = puVar21[2];
      *puVar21 = uVar17;
      puVar21[1] = uVar18;
      puVar21[2] = uVar6;
      if ((longlong)(local_res10 - uVar25) < (longlong)(uVar22 - param_2)) {
        *puVar27 = param_2;
        puVar27[1] = uVar22;
        puVar27 = puVar27 + 2;
        param_2 = uVar25;
      }
      else {
        puVar27[1] = local_res10;
        *puVar27 = uVar25;
        puVar27 = puVar27 + 2;
        local_res10 = uVar22;
      }
    }
joined_r0x000143342c37:
    uVar25 = uVar22 + 1;
    if ((longlong)uVar25 < (longlong)local_res10) {
      uVar1 = uVar22 & 0xfffffffffffffff8;
      lVar7 = (ulonglong)((uint)uVar22 & 7) * 0x18;
      uVar23 = uVar22 + 1;
      cVar19 = (*param_4)(*(longlong *)
                           (*(longlong *)(param_1 + 0x20) + (uVar23 & 0xfffffffffffffff8)) +
                          (ulonglong)((uint)uVar23 & 7) * 0x18,
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar1) + lVar7);
      while (uVar22 = uVar25, cVar19 != '\0') {
        uVar20 = (ulonglong)((uint)uVar23 & 7);
        puVar26 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar1) + lVar7);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar23 & 0xfffffffffffffff8));
        uVar24 = uVar23 - 1;
        uVar10 = puVar26[1];
        uVar11 = puVar26[2];
        uVar12 = puVar26[3];
        uVar6 = *(undefined8 *)(lVar7 + 0x10 + uVar20 * 0x18);
        puVar2 = (undefined4 *)(lVar7 + uVar20 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        uVar15 = puVar2[2];
        uVar16 = puVar2[3];
        puVar2 = (undefined4 *)(lVar7 + uVar20 * 0x18);
        *puVar2 = *puVar26;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        *(undefined8 *)(lVar7 + 0x10 + uVar20 * 0x18) = *(undefined8 *)(puVar26 + 4);
        *puVar26 = uVar13;
        puVar26[1] = uVar14;
        puVar26[2] = uVar15;
        puVar26[3] = uVar16;
        *(undefined8 *)(puVar26 + 4) = uVar6;
        if (uVar24 == param_2) break;
        uVar1 = uVar23 - 2 & 0xfffffffffffffff8;
        lVar7 = (ulonglong)((uint)(uVar23 - 2) & 7) * 0x18;
        cVar19 = (*param_4)(*(longlong *)
                             (*(longlong *)(param_1 + 0x20) + (uVar24 & 0xfffffffffffffff8)) +
                            (ulonglong)((uint)uVar24 & 7) * 0x18,
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar1) + lVar7);
        uVar23 = uVar24;
      }
      goto joined_r0x000143342c37;
    }
    if (local_2b8 < puVar27) {
      local_res10 = puVar27[-1];
      puVar27 = puVar27 + -2;
      param_2 = *puVar27;
      goto LAB_1433428db;
    }
  }
  return;
}



// FUNCTION 143342db0 FUN_143342db0 body=606 status=ok
// SIG undefined FUN_143342db0(void)

void FUN_143342db0(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong local_2a8 [80];
  
  if (1 < (ulonglong)(param_3 - param_2)) {
    plVar9 = local_2a8;
LAB_143342e00:
    while (lVar7 = param_2, 9 < param_3 - param_2) {
      lVar1 = *(longlong *)(param_1 + 0x10);
      lVar7 = param_2 + 1;
      lVar8 = param_3 + -1;
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      lVar4 = (param_3 - param_2) / 2 + param_2;
      *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar4 * 8);
      *(undefined8 *)(lVar1 + lVar4 * 8) = uVar2;
      cVar3 = (*param_4)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8 * 8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar7 * 8));
      if (cVar3 != '\0') {
        lVar1 = *(longlong *)(param_1 + 0x10);
        uVar2 = *(undefined8 *)(lVar1 + lVar8 * 8);
        *(undefined8 *)(lVar1 + lVar8 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar2;
      }
      cVar3 = (*param_4)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar7 * 8));
      if (cVar3 != '\0') {
        lVar1 = *(longlong *)(param_1 + 0x10);
        uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
        *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + lVar7 * 8);
        *(undefined8 *)(lVar1 + lVar7 * 8) = uVar2;
      }
      cVar3 = (*param_4)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8 * 8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 8));
      if (cVar3 == '\0') goto LAB_143342ec0;
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 8);
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8 * 8);
      while( true ) {
        uVar2 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar2;
LAB_143342ec0:
        do {
          lVar7 = lVar7 + 1;
          cVar3 = (*param_4)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar7 * 8),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 8));
        } while (cVar3 != '\0');
        do {
          lVar8 = lVar8 + -1;
          cVar3 = (*param_4)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_2 * 8),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar8 * 8));
        } while (cVar3 != '\0');
        lVar1 = *(longlong *)(param_1 + 0x10);
        puVar6 = (undefined8 *)(lVar1 + lVar8 * 8);
        if (lVar8 < lVar7) break;
        puVar5 = (undefined8 *)(lVar1 + lVar7 * 8);
      }
      uVar2 = *(undefined8 *)(lVar1 + param_2 * 8);
      *(undefined8 *)(lVar1 + param_2 * 8) = *puVar6;
      *puVar6 = uVar2;
      if (param_3 - lVar7 < lVar8 - param_2) {
        *plVar9 = param_2;
        plVar9[1] = lVar8;
        plVar9 = plVar9 + 2;
        param_2 = lVar7;
      }
      else {
        plVar9[1] = param_3;
        *plVar9 = lVar7;
        plVar9 = plVar9 + 2;
        param_3 = lVar8;
      }
    }
joined_r0x000143342f5e:
    lVar8 = lVar7 + 1;
    if (lVar8 < param_3) {
      lVar1 = lVar7 * 8;
      cVar3 = (*param_4)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + lVar1),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar1));
      lVar4 = lVar7;
      while (lVar7 = lVar8, cVar3 != '\0') {
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar1);
        uVar2 = puVar6[1];
        puVar6[1] = *puVar6;
        *puVar6 = uVar2;
        if (lVar4 == param_2) break;
        lVar4 = lVar4 + -1;
        lVar1 = lVar4 * 8;
        cVar3 = (*param_4)(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8 + lVar1),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar1));
      }
      goto joined_r0x000143342f5e;
    }
    if (local_2a8 < plVar9) {
      param_2 = plVar9[-2];
      param_3 = plVar9[-1];
      plVar9 = plVar9 + -2;
      goto LAB_143342e00;
    }
  }
  return;
}



// FUNCTION 143343010 FUN_143343010 body=1717 status=ok
// SIG undefined FUN_143343010(void)

void FUN_143343010(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  bool bVar24;
  bool bVar25;
  ulonglong local_2c8 [81];
  
  if (param_3 - param_2 < 2) {
    return;
  }
  puVar23 = local_2c8;
  do {
    while( true ) {
      uVar21 = param_2 + 1;
      uVar22 = param_2;
      if ((longlong)(param_3 - param_2) < 10) break;
      uVar22 = param_3 - 1;
      uVar15 = (longlong)(param_3 - param_2) / 2 + param_2;
      uVar16 = (ulonglong)((uint)uVar15 & 0xf);
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (uVar15 >> 4) * 8);
      uVar15 = (ulonglong)((uint)param_2 & 0xf);
      uVar18 = param_2 >> 4;
      puVar1 = (undefined8 *)(lVar8 + uVar16 * 0x18);
      uVar12 = puVar1[1];
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar18 * 8);
      puVar2 = (undefined8 *)(lVar9 + uVar15 * 0x18);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      uVar6 = *(undefined8 *)(lVar9 + 0x10 + uVar15 * 0x18);
      puVar2 = (undefined8 *)(lVar9 + uVar15 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar12;
      *(undefined8 *)(lVar9 + 0x10 + uVar15 * 0x18) = *(undefined8 *)(lVar8 + 0x10 + uVar16 * 0x18);
      puVar1 = (undefined8 *)(lVar8 + uVar16 * 0x18);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      uVar17 = (ulonglong)((uint)uVar22 & 0xf);
      *(undefined8 *)(lVar8 + 0x10 + uVar16 * 0x18) = uVar6;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (uVar22 >> 4) * 8);
      uVar7 = *(uint *)(lVar8 + uVar17 * 0x18);
      uVar20 = (ulonglong)(uVar7 & 0xf);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + (uVar21 >> 4) * 8);
      lVar10 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
      uVar16 = (ulonglong)((uint)uVar21 & 0xf);
      uVar7 = *(uint *)(lVar9 + uVar16 * 0x18);
      uVar19 = (ulonglong)(uVar7 & 0xf);
      lVar11 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
      fVar4 = *(float *)(lVar11 + 4 + uVar19 * 0x14);
      fVar5 = *(float *)(lVar10 + 4 + uVar20 * 0x14);
      if (fVar5 == fVar4) {
        fVar4 = *(float *)(lVar11 + uVar19 * 0x14);
        pfVar3 = (float *)(lVar10 + uVar20 * 0x14);
        bVar25 = fVar4 == *pfVar3;
        bVar24 = fVar4 < *pfVar3;
      }
      else {
        bVar25 = fVar4 == fVar5;
        bVar24 = fVar4 < fVar5;
      }
      if (!bVar24 && !bVar25) {
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        uVar6 = *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18);
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18) =
             *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18);
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18) = uVar6;
      }
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar18 * 8);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + (uVar21 >> 4) * 8);
      uVar7 = *(uint *)(lVar8 + uVar15 * 0x18);
      uVar20 = (ulonglong)(uVar7 & 0xf);
      lVar10 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
      uVar7 = *(uint *)(lVar9 + uVar16 * 0x18);
      uVar19 = (ulonglong)(uVar7 & 0xf);
      lVar11 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
      fVar4 = *(float *)(lVar11 + 4 + uVar19 * 0x14);
      fVar5 = *(float *)(lVar10 + 4 + uVar20 * 0x14);
      if (fVar5 == fVar4) {
        fVar4 = *(float *)(lVar11 + uVar19 * 0x14);
        pfVar3 = (float *)(lVar10 + uVar20 * 0x14);
        bVar25 = fVar4 == *pfVar3;
        bVar24 = fVar4 < *pfVar3;
      }
      else {
        bVar25 = fVar4 == fVar5;
        bVar24 = fVar4 < fVar5;
      }
      if (!bVar24 && !bVar25) {
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + uVar15 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        uVar6 = *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18);
        puVar2 = (undefined8 *)(lVar8 + uVar15 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar8 + 0x10 + uVar15 * 0x18) =
             *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18);
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18) = uVar6;
      }
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (uVar22 >> 4) * 8);
      uVar7 = *(uint *)(lVar8 + uVar17 * 0x18);
      uVar19 = (ulonglong)(uVar7 & 0xf);
      lVar9 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
      fVar4 = *(float *)(lVar9 + 4 + uVar19 * 0x14);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar18 * 8);
      uVar7 = *(uint *)(lVar10 + uVar15 * 0x18);
      uVar16 = (ulonglong)(uVar7 & 0xf);
      lVar11 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
      fVar5 = *(float *)(lVar11 + 4 + uVar16 * 0x14);
      if (fVar4 == fVar5) {
        fVar4 = *(float *)(lVar11 + uVar16 * 0x14);
        pfVar3 = (float *)(lVar9 + uVar19 * 0x14);
        bVar25 = fVar4 == *pfVar3;
        bVar24 = fVar4 < *pfVar3;
      }
      else {
        bVar25 = fVar5 == fVar4;
        bVar24 = fVar5 < fVar4;
      }
      if (!bVar24 && !bVar25) {
        puVar1 = (undefined8 *)(lVar10 + uVar15 * 0x18);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        uVar6 = *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18);
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18) =
             *(undefined8 *)(lVar10 + 0x10 + uVar15 * 0x18);
        puVar1 = (undefined8 *)(lVar10 + uVar15 * 0x18);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        *(undefined8 *)(lVar10 + 0x10 + uVar15 * 0x18) = uVar6;
      }
      while( true ) {
        lVar8 = *(longlong *)(param_1 + 8);
        lVar9 = *(longlong *)(param_4 + 0x20);
        uVar7 = *(uint *)(*(longlong *)(lVar8 + uVar18 * 8) + uVar15 * 0x18);
        uVar16 = (ulonglong)(uVar7 & 0xf);
        lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 4) * 8);
        fVar4 = *(float *)(lVar10 + 4 + uVar16 * 0x14);
        do {
          uVar21 = uVar21 + 1;
          uVar7 = *(uint *)(*(longlong *)(lVar8 + (uVar21 >> 4) * 8) +
                           (ulonglong)((uint)uVar21 & 0xf) * 0x18);
          uVar17 = (ulonglong)(uVar7 & 0xf);
          lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 4) * 8);
          fVar5 = *(float *)(lVar11 + 4 + uVar17 * 0x14);
          if (fVar5 == fVar4) {
            fVar5 = *(float *)(lVar10 + uVar16 * 0x14);
            pfVar3 = (float *)(lVar11 + uVar17 * 0x14);
            bVar25 = fVar5 == *pfVar3;
            bVar24 = fVar5 < *pfVar3;
          }
          else {
            bVar25 = fVar4 == fVar5;
            bVar24 = fVar4 < fVar5;
          }
        } while (!bVar24 && !bVar25);
        uVar7 = *(uint *)(*(longlong *)(lVar8 + uVar18 * 8) + uVar15 * 0x18);
        uVar16 = (ulonglong)(uVar7 & 0xf);
        lVar10 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 4) * 8);
        fVar4 = *(float *)(lVar10 + 4 + uVar16 * 0x14);
        do {
          uVar22 = uVar22 - 1;
          uVar7 = *(uint *)(*(longlong *)(lVar8 + (uVar22 >> 4) * 8) +
                           (ulonglong)((uint)uVar22 & 0xf) * 0x18);
          uVar17 = (ulonglong)(uVar7 & 0xf);
          lVar11 = *(longlong *)(lVar9 + (ulonglong)(uVar7 >> 4) * 8);
          fVar5 = *(float *)(lVar11 + 4 + uVar17 * 0x14);
          if (fVar4 == fVar5) {
            fVar5 = *(float *)(lVar11 + uVar17 * 0x14);
            pfVar3 = (float *)(lVar10 + uVar16 * 0x14);
            bVar25 = fVar5 == *pfVar3;
            bVar24 = fVar5 < *pfVar3;
          }
          else {
            bVar25 = fVar5 == fVar4;
            bVar24 = fVar5 < fVar4;
          }
        } while (!bVar24 && !bVar25);
        uVar16 = (ulonglong)((uint)uVar22 & 0xf);
        if ((longlong)uVar22 < (longlong)uVar21) break;
        lVar9 = *(longlong *)(lVar8 + (uVar22 >> 4) * 8);
        uVar17 = (ulonglong)((uint)uVar21 & 0xf);
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        uVar12 = puVar1[1];
        lVar8 = *(longlong *)(lVar8 + (uVar21 >> 4) * 8);
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        uVar6 = *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18);
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18) =
             *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18);
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18) = uVar6;
      }
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + (uVar22 >> 4) * 8);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar18 * 8);
      puVar1 = (undefined8 *)(lVar8 + uVar16 * 0x18);
      uVar12 = puVar1[1];
      puVar2 = (undefined8 *)(lVar9 + uVar15 * 0x18);
      uVar13 = *puVar2;
      uVar14 = puVar2[1];
      uVar6 = *(undefined8 *)(lVar9 + 0x10 + uVar15 * 0x18);
      puVar2 = (undefined8 *)(lVar9 + uVar15 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar12;
      *(undefined8 *)(lVar9 + 0x10 + uVar15 * 0x18) = *(undefined8 *)(lVar8 + 0x10 + uVar16 * 0x18);
      puVar1 = (undefined8 *)(lVar8 + uVar16 * 0x18);
      *puVar1 = uVar13;
      puVar1[1] = uVar14;
      *(undefined8 *)(lVar8 + 0x10 + uVar16 * 0x18) = uVar6;
      if ((longlong)(param_3 - uVar21) < (longlong)(uVar22 - param_2)) {
        *puVar23 = param_2;
        puVar23[1] = uVar22;
        param_2 = uVar21;
        puVar23 = puVar23 + 2;
      }
      else {
        puVar23[1] = param_3;
        *puVar23 = uVar21;
        param_3 = uVar22;
        puVar23 = puVar23 + 2;
      }
    }
    while (uVar15 = uVar21, (longlong)uVar15 < (longlong)param_3) {
      while( true ) {
        lVar8 = *(longlong *)(param_1 + 8);
        uVar21 = uVar22 + 1;
        uVar7 = *(uint *)(*(longlong *)(lVar8 + (uVar21 >> 4) * 8) +
                         (ulonglong)((uint)uVar21 & 0xf) * 0x18);
        lVar9 = *(longlong *)(lVar8 + (uVar22 >> 4) * 8);
        uVar18 = (ulonglong)(uVar7 & 0xf);
        lVar10 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
        uVar16 = (ulonglong)((uint)uVar22 & 0xf);
        fVar4 = *(float *)(lVar10 + 4 + uVar18 * 0x14);
        uVar7 = *(uint *)(lVar9 + uVar16 * 0x18);
        uVar17 = (ulonglong)(uVar7 & 0xf);
        lVar11 = *(longlong *)(*(longlong *)(param_4 + 0x20) + (ulonglong)(uVar7 >> 4) * 8);
        fVar5 = *(float *)(lVar11 + 4 + uVar17 * 0x14);
        if (fVar4 == fVar5) {
          fVar4 = *(float *)(lVar11 + uVar17 * 0x14);
          pfVar3 = (float *)(lVar10 + uVar18 * 0x14);
          bVar25 = fVar4 == *pfVar3;
          bVar24 = fVar4 < *pfVar3;
        }
        else {
          bVar25 = fVar5 == fVar4;
          bVar24 = fVar5 < fVar4;
        }
        if (bVar24 || bVar25) break;
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        uVar12 = puVar1[1];
        uVar17 = (ulonglong)((uint)uVar21 & 0xf);
        lVar8 = *(longlong *)(lVar8 + (uVar21 >> 4) * 8);
        uVar6 = *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18);
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        uVar13 = *puVar2;
        uVar14 = puVar2[1];
        puVar2 = (undefined8 *)(lVar8 + uVar17 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar12;
        *(undefined8 *)(lVar8 + 0x10 + uVar17 * 0x18) =
             *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18);
        puVar1 = (undefined8 *)(lVar9 + uVar16 * 0x18);
        *puVar1 = uVar13;
        puVar1[1] = uVar14;
        *(undefined8 *)(lVar9 + 0x10 + uVar16 * 0x18) = uVar6;
        if (uVar22 == param_2) break;
        uVar22 = uVar22 - 1;
      }
      uVar22 = uVar15;
      uVar21 = uVar15 + 1;
    }
    if (puVar23 <= local_2c8) {
      return;
    }
    param_2 = puVar23[-2];
    param_3 = puVar23[-1];
    puVar23 = puVar23 + -2;
  } while( true );
}



// FUNCTION 1433436d0 FUN_1433436d0 body=141 status=ok
// SIG undefined FUN_1433436d0(void)

float FUN_1433436d0(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_3 - *param_2;
  fVar2 = param_2[1] - param_1[1];
  fVar1 = param_3[1] - param_2[1];
  fVar4 = *param_2 - *param_1;
  fVar5 = (fVar1 * fVar2 + fVar3 * fVar4) / (param_4 * param_5 + param_4 * param_5);
  if (fVar1 * fVar4 < fVar3 * fVar2) {
    fVar5 = 1.0 - fVar5;
  }
  return fVar5 - 0.5;
}



// FUNCTION 143343760 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SGameLayerManager>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x568);
  }
  return param_1;
}



// FUNCTION 143343790 FUN_143343790 body=153 status=ok
// SIG undefined FUN_143343790(void)

void FUN_143343790(undefined8 *param_1)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_1[3] <= (ulonglong)param_1[2]) {
    if (param_1[2] == 0) {
      param_1[3] = 0x10;
      uVar1 = FUN_1433245e0(*param_1,0x200);
      param_1[1] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 6);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[1],param_1[2] << 5);
      param_1[1] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  puVar2 = (undefined8 *)(param_1[2] * 0x20 + param_1[1]);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143343830 FUN_143343830 body=91 status=ok
// SIG undefined FUN_143343830(void)

void FUN_143343830(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x78) >> 4;
  if (*(ulonglong *)(param_1 + 0x80) <= uVar1) {
    FUN_143324830(param_1 + 0x70,uVar1);
  }
  *(ulonglong *)
   (*(longlong *)(*(longlong *)(param_1 + 0x90) + uVar1 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf) * 8) = CONCAT44(param_3,param_2);
  *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
  return;
}



// FUNCTION 143343950 FUN_143343950 body=242 status=ok
// SIG undefined FUN_143343950(void)

float FUN_143343950(float param_1,float param_2,float param_3,float param_4,float param_5,
                   float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_4 - param_2;
  fVar2 = param_3 - param_1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar1 == 0.0) {
    fVar1 = _guard_xfg_dispatch_icall_nop
                      ((param_6 - param_2) * (param_6 - param_2) +
                       (param_5 - param_1) * (param_5 - param_1));
  }
  else {
    fVar1 = ((param_5 - param_3) * fVar3 - (param_6 - param_4) * fVar2) / fVar1;
  }
  return fVar1;
}



// FUNCTION 143343a50 FUN_143343a50 body=142 status=ok
// SIG undefined FUN_143343a50(void)

void FUN_143343a50(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  puVar7 = (ulonglong *)(*(longlong *)(param_1 + 8) + param_2 * 0x20);
  uVar6 = *puVar7 >> 4;
  if (puVar7[1] <= uVar6) {
    FUN_143343d10(param_1,puVar7,uVar6);
  }
  uVar5 = (ulonglong)((uint)*puVar7 & 0xf);
  uVar4 = param_3[1];
  lVar3 = *(longlong *)(puVar7[3] + uVar6 * 8);
  puVar1 = (undefined8 *)(lVar3 + uVar5 * 0x18);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x10 + uVar5 * 0x18) = param_3[2];
  plVar2 = (longlong *)(*(longlong *)(param_1 + 8) + param_2 * 0x20);
  *plVar2 = *plVar2 + 1;
  return;
}



// FUNCTION 143343ae0 FUN_143343ae0 body=145 status=ok
// SIG undefined FUN_143343ae0(void)

void FUN_143343ae0(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  
  if ((ulonglong)param_1[1] < param_2) {
    _Dst = (void *)FUN_1433245e0(*param_1);
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_2 * 4);
    if (((void *)param_1[2] != (void *)0x0) && (param_1[1] != 0)) {
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[2],param_1[1] * 4);
    }
    param_1[2] = _Dst;
    param_1[1] = param_2;
    return;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 143343b80 FUN_143343b80 body=223 status=ok
// SIG undefined FUN_143343b80(void)

ulonglong FUN_143343b80(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  param_2 = param_2 * 0x20;
  puVar6 = (ulonglong *)(*(longlong *)(param_1 + 8) + param_2);
  uVar1 = *puVar6;
  if (uVar1 <= param_3) {
    return (ulonglong)puVar6 & 0xffffffffffffff00;
  }
  uVar2 = puVar6[2];
  uVar8 = param_3 >> 4;
  uVar3 = puVar6[1];
  uVar4 = puVar6[3];
  FUN_143343790();
  *(ulonglong *)(*(longlong *)(param_1 + 8) + 8 + param_2) = uVar8;
  *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x10 + param_2) = uVar8;
  *(ulonglong *)(param_2 + *(longlong *)(param_1 + 8)) = param_3 & 0xfffffffffffffff0;
  lVar7 = (*(longlong *)(param_1 + 0x10) + -1) * 0x20;
  *(ulonglong *)(*(longlong *)(param_1 + 8) + 8 + lVar7) = uVar3 - uVar8;
  *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x10 + lVar7) = uVar2 - uVar8;
  *(ulonglong *)(lVar7 + *(longlong *)(param_1 + 8)) = uVar1 - (param_3 & 0xfffffffffffffff0);
  lVar5 = *(longlong *)(param_1 + 8);
  *(ulonglong *)(lVar5 + 0x18 + lVar7) = uVar4 + uVar8 * 8;
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}



// FUNCTION 143343c60 FUN_143343c60 body=175 status=ok
// SIG undefined FUN_143343c60(void)

int FUN_143343c60(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  fVar2 = *param_2;
  if (*(float *)(param_1 + 0x210) <= fVar2 && fVar2 != *(float *)(param_1 + 0x210)) {
    *(float *)(param_1 + 0x210) = fVar2;
    uVar6 = *(ulonglong *)(param_1 + 800) >> 4;
    fVar3 = param_2[1];
    if (*(ulonglong *)(param_1 + 0x328) <= uVar6) {
      FUN_143344360(param_1 + 0x318,uVar6);
    }
    uVar5 = (ulonglong)(*(uint *)(param_1 + 800) & 0xf);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x338) + uVar6 * 8);
    puVar1 = (undefined8 *)(lVar4 + uVar5 * 0x14);
    *puVar1 = CONCAT44(fVar3,fVar2);
    puVar1[1] = 0xffffffffffffffff;
    *(undefined4 *)(lVar4 + 0x10 + uVar5 * 0x14) = 2;
    *(longlong *)(param_1 + 800) = *(longlong *)(param_1 + 800) + 1;
  }
  return *(int *)(param_1 + 800) + -1;
}



// FUNCTION 143343d10 FUN_143343d10 body=168 status=ok
// SIG undefined FUN_143343d10(void)

void FUN_143343d10(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  void *_Dst;
  undefined8 uVar1;
  
  if (*(ulonglong *)(param_2 + 0x10) <= param_3) {
    if (*(longlong *)(param_2 + 0x18) == 0) {
      *(undefined8 *)(param_2 + 0x10) = 0x10;
      uVar1 = FUN_1433245e0(*param_1,0x80);
      *(undefined8 *)(param_2 + 0x18) = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,*(ulonglong *)(param_2 + 0x10) << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_2 + 0x18),*(longlong *)(param_2 + 8) << 3)
      ;
      *(void **)(param_2 + 0x18) = _Dst;
      *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x180);
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + param_3 * 8) = uVar1;
  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 1;
  return;
}



// FUNCTION 143343dc0 FUN_143343dc0 body=155 status=ok
// SIG undefined FUN_143343dc0(void)

void FUN_143343dc0(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 0x10;
      uVar1 = FUN_1433245e0(*param_1,0x80);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x40);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143343e60 FUN_143343e60 body=155 status=ok
// SIG undefined FUN_143343e60(void)

void FUN_143343e60(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 8;
      uVar1 = FUN_1433245e0(*param_1,0x40);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x80);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143343f00 FUN_143343f00 body=155 status=ok
// SIG undefined FUN_143343f00(void)

void FUN_143343f00(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 2;
      uVar1 = FUN_1433245e0(*param_1,0x10);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x80);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143343fa0 FUN_143343fa0 body=155 status=ok
// SIG undefined FUN_143343fa0(void)

void FUN_143343fa0(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 4;
      uVar1 = FUN_1433245e0(*param_1,0x20);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x1c0);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143344040 FUN_143344040 body=155 status=ok
// SIG undefined FUN_143344040(void)

void FUN_143344040(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 0x10;
      uVar1 = FUN_1433245e0(*param_1,0x80);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x2c0);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 1433440e0 FUN_1433440e0 body=155 status=ok
// SIG undefined FUN_1433440e0(void)

void FUN_1433440e0(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 0x10;
      uVar1 = FUN_1433245e0(*param_1,0x80);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x200);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143344180 FUN_143344180 body=155 status=ok
// SIG undefined FUN_143344180(void)

void FUN_143344180(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 4;
      uVar1 = FUN_1433245e0(*param_1,0x20);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x140);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143344220 FUN_143344220 body=155 status=ok
// SIG undefined FUN_143344220(void)

void FUN_143344220(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 4;
      uVar1 = FUN_1433245e0(*param_1,0x20);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x100);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 1433442c0 FUN_1433442c0 body=155 status=ok
// SIG undefined FUN_1433442c0(void)

void FUN_1433442c0(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 8;
      uVar1 = FUN_1433245e0(*param_1,0x40);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x180);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 143344360 FUN_143344360 body=155 status=ok
// SIG undefined FUN_143344360(void)

void FUN_143344360(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 0x10;
      uVar1 = FUN_1433245e0(*param_1,0x80);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x140);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 1433444d0 FUN_1433444d0 body=54 status=ok
// SIG undefined FUN_1433444d0(void)

longlong FUN_1433444d0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 != 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x208) + (lVar1 + -1) * 4);
    do {
      if (*piVar2 != 0) {
        return lVar1 + -1;
      }
      piVar2 = piVar2 + -1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return 0;
}



// FUNCTION 143344510 FUN_143344510 body=147 status=ok
// SIG undefined FUN_143344510(void)

undefined8 FUN_143344510(longlong param_1,uint param_2,int param_3)

{
  float fVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x90);
  fVar1 = *(float *)(*(longlong *)(lVar2 + ((ulonglong)(longlong)(int)param_2 >> 4) * 8) + 4 +
                    (ulonglong)(param_2 & 0xf) * 8);
  if ((int)param_2 <= param_3) {
    lVar2 = *(longlong *)(lVar2 + ((ulonglong)(longlong)(int)(param_2 + 1) >> 4) * 8);
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                    fVar1 < *(float *)(lVar2 + 4 + (ulonglong)(param_2 + 1 & 0xf) * 8));
  }
  if ((fVar1 <= *(float *)(*(longlong *)(lVar2 + ((ulonglong)(longlong)(int)(param_2 - 1) >> 4) * 8)
                           + 4 + (ulonglong)(param_2 - 1 & 0xf) * 8)) &&
     (fVar1 < *(float *)(*(longlong *)(lVar2 + ((ulonglong)(longlong)(int)(param_2 + 1) >> 4) * 8) +
                         4 + (ulonglong)(param_2 + 1 & 0xf) * 8))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1433445b0 FUN_1433445b0 body=346 status=ok
// SIG undefined FUN_1433445b0(void)

void FUN_1433445b0(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  
  if (*param_2 == 0) {
    uVar3 = *(ulonglong *)(param_1 + 0x2f8) >> 4;
    if (*(ulonglong *)(param_1 + 0x300) <= uVar3) {
      FUN_143329d20(param_1 + 0x2f0,uVar3);
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x310) + uVar3 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x2f8) & 0xf) * 0x10);
    *puVar1 = CONCAT44(param_3,param_3);
    puVar1[1] = 0;
    *(longlong *)(param_1 + 0x2f8) = *(longlong *)(param_1 + 0x2f8) + 1;
    uVar3 = *(longlong *)(param_1 + 0x2f8) - 1;
    *param_2 = (ulonglong)((uint)uVar3 & 0xf) * 0x10 +
               *(longlong *)(*(longlong *)(param_1 + 0x310) + (uVar3 >> 4) * 8);
    *(undefined8 *)((longlong)param_2 + 0xc) = 0xffffffffffffffff;
  }
  else {
    piVar2 = (int *)((ulonglong)(*(uint *)(param_2 + 1) & 0xf) * 0x10 +
                    *(longlong *)
                     (*(longlong *)(param_1 + 0x310) + (ulonglong)(*(uint *)(param_2 + 1) >> 4) * 8)
                    );
    if (*piVar2 == param_3) {
      return;
    }
    uVar3 = *(ulonglong *)(param_1 + 0x2f8) >> 4;
    if (*(ulonglong *)(param_1 + 0x300) <= uVar3) {
      FUN_143329d20(param_1 + 0x2f0,uVar3);
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x310) + uVar3 * 8) +
             (ulonglong)(*(uint *)(param_1 + 0x2f8) & 0xf) * 0x10);
    *puVar1 = CONCAT44(param_3,param_3);
    puVar1[1] = 0;
    *(longlong *)(param_1 + 0x2f8) = *(longlong *)(param_1 + 0x2f8) + 1;
    uVar3 = *(longlong *)(param_1 + 0x2f8) - 1;
    *(ulonglong *)(piVar2 + 2) =
         (ulonglong)((uint)uVar3 & 0xf) * 0x10 +
         *(longlong *)(*(longlong *)(param_1 + 0x310) + (uVar3 >> 4) * 8);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)((longlong)param_2 + 0xc) = (int)param_2[1];
  }
  *(int *)(param_2 + 1) = *(int *)(param_1 + 0x2f8) + -1;
  return;
}



// FUNCTION 143344710 FUN_143344710 body=177 status=ok
// SIG undefined FUN_143344710(void)

void FUN_143344710(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 8) == 0)) {
    return;
  }
  pfVar1 = *(float **)(*(longlong *)(param_2 + 8) + 0x18);
  if (pfVar1 == (float *)0x0) {
    FUN_1433445b0();
    return;
  }
  if (*pfVar1 !=
      *(float *)(*(longlong *)
                  (*(longlong *)(param_1 + 0x338) + (ulonglong)((param_3 & 0xfffffff) >> 4) * 8) + 4
                + (ulonglong)(param_3 & 0xf) * 0x14)) {
    if (-1 < (int)param_3) {
      FUN_14333a310(param_1,param_2,param_3);
      return;
    }
    FUN_14333a0b0();
    return;
  }
  pfVar1[3] = (float)(param_3 & 0xfffffff);
  return;
}



// FUNCTION 1433447d0 FUN_1433447d0 body=165 status=ok
// SIG undefined FUN_1433447d0(void)

undefined8 FUN_1433447d0(longlong param_1,uint param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  lVar2 = lVar1;
  if ((ulonglong)param_2 < *(ulonglong *)(param_1 + 0x230)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (ulonglong)(param_2 >> 4) * 8) +
            (ulonglong)(param_2 & 0xf) * 0x18;
  }
  if ((ulonglong)param_3 < *(ulonglong *)(param_1 + 600)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x270) + (ulonglong)(param_3 >> 4) * 8) +
            (ulonglong)(param_3 & 0xf) * 0x18;
  }
  if (lVar2 != 0) {
    if (lVar1 == 0) goto LAB_143344857;
    if (*(int *)(lVar2 + 0x10) == *(int *)(lVar1 + 0x10)) {
      return 0;
    }
  }
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == param_4)) {
    return 2;
  }
LAB_143344857:
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == param_4)) {
    return 3;
  }
  return 0;
}



// FUNCTION 143344880 FUN_143344880 body=228 status=ok
// SIG undefined FUN_143344880(void)

undefined8 * FUN_143344880(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 1) = 2;
  *param_1 = &PTR__scalar_deleting_destructor__145b00da8;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x40400000;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 5) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f000000;
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3c23d70a;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = param_2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x7149f2ca;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x1a) = 0xf149f2ca;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xf149f2ca;
  return param_1;
}



// FUNCTION 143344970 SetToleranceParam body=13 status=ok
// SIG undefined SetToleranceParam(void)

void Scaleform::Render::StrokerAA::SetToleranceParam(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0xc);
  return;
}



// FUNCTION 143344990 Clear body=119 status=ok
// SIG undefined Clear(void)

void Scaleform::Render::StrokerAA::Clear(longlong param_1)

{
  StrokePath::ClearAndRelease(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 200) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0xcc) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0xd0) = 0xf149f2ca;
  *(undefined4 *)(param_1 + 0xd4) = 0xf149f2ca;
  return;
}



// FUNCTION 143344a10 ClosePath body=28 status=ok
// SIG undefined ClosePath(void)

void Scaleform::Render::StrokerAA::ClosePath(longlong param_1)

{
  FUN_143326760(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 143344a40 FUN_143344a40 body=2564 status=ok
// SIG undefined FUN_143344a40(void)

void FUN_143344a40(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_fffffffffffffe60;
  uint7 uVar18;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined2 local_160;
  float local_158;
  float local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint6 local_78;
  undefined2 uStack_72;
  ushort local_70;
  undefined1 local_6e;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    uVar8 = FUN_143326760(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x38) = uVar8;
  }
  local_168 = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xfffffffc;
  *(undefined4 *)(param_1 + 0xbc) = 0xfffffffd;
  *(undefined8 *)(param_1 + 0xc0) = 0xfffffffffffffffe;
  local_198 = 0;
  uStack_190 = 0;
  local_164 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_143345b70(param_1,&local_198);
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  _local_78 = 0;
  local_70 = 0;
  local_6e = 0;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (1 < *(ulonglong *)(param_1 + 0x48)) {
      fVar15 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x20)) * 0.5;
      if (*(int *)(param_1 + 0xc) == 1) {
        pfVar5 = (float *)**(undefined8 **)(param_1 + 0x60);
        fVar1 = pfVar5[2];
        *pfVar5 = *pfVar5 - ((pfVar5[3] - *pfVar5) * fVar15) / fVar1;
        pfVar5[2] = fVar1 + fVar15;
        pfVar5[1] = pfVar5[1] - ((pfVar5[4] - pfVar5[1]) * fVar15) / fVar1;
      }
      if (*(int *)(param_1 + 0x10) == 1) {
        uVar10 = *(longlong *)(param_1 + 0x48) - 2;
        uVar13 = (ulonglong)((uint)uVar10 & 0xf);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar10 >> 4) * 8);
        uVar10 = *(longlong *)(param_1 + 0x48) - 1;
        uVar9 = (ulonglong)((uint)uVar10 & 0xf);
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar10 >> 4) * 8);
        fVar1 = *(float *)(lVar6 + uVar9 * 0xc);
        fVar16 = *(float *)(lVar6 + 4 + uVar9 * 0xc);
        *(float *)(lVar6 + uVar9 * 0xc) =
             ((fVar1 - *(float *)(lVar4 + uVar13 * 0xc)) * fVar15) /
             *(float *)(lVar4 + 8 + uVar13 * 0xc) + fVar1;
        *(float *)(lVar6 + 4 + uVar9 * 0xc) =
             ((fVar16 - *(float *)(lVar4 + 4 + uVar13 * 0xc)) * fVar15) /
             *(float *)(lVar4 + 8 + uVar13 * 0xc) + fVar16;
        *(float *)(lVar4 + 8 + uVar13 * 0xc) = fVar15 + *(float *)(lVar4 + 8 + uVar13 * 0xc);
      }
      lVar4 = **(longlong **)(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0xc);
      if (-1 < iVar2) {
        uVar18 = (uint7)((ulonglong)in_stack_fffffffffffffe60 >> 8);
        if (iVar2 < 2) {
          FUN_143345ce0(param_1,lVar4,lVar4 + 0xc,*(undefined4 *)(lVar4 + 8),&local_198,
                        (ulonglong)uVar18 << 8);
        }
        else if (iVar2 == 2) {
          FUN_143346160(param_1,lVar4,lVar4 + 0xc,*(undefined4 *)(lVar4 + 8),&local_198,
                        (ulonglong)uVar18 << 8);
        }
      }
      uVar10 = *(ulonglong *)(param_1 + 0x48);
      if (2 < uVar10) {
        pfVar5 = (float *)**(undefined8 **)(param_1 + 0x60);
        fVar15 = *pfVar5;
        fVar1 = pfVar5[1];
        local_98 = CONCAT44((float)local_188,uStack_190._4_4_);
        local_6e = 0;
        fVar16 = (fVar15 - pfVar5[3]) / pfVar5[2];
        local_70 = local_70 & 0xff00;
        local_78 = (uint6)(uint)local_78;
        fVar17 = (pfVar5[4] - fVar1) / pfVar5[2];
        local_128 = CONCAT44((float)local_198 * fVar16,(float)local_198 * fVar17);
        local_f8 = CONCAT44(local_198._4_4_ * fVar16,local_198._4_4_ * fVar17);
        uStack_120 = CONCAT44(uStack_190._4_4_ * fVar16,uStack_190._4_4_ * fVar17);
        uStack_f0 = CONCAT44((float)local_188 * fVar16,(float)local_188 * fVar17);
        local_a8 = CONCAT44(fVar1 - uStack_190._4_4_ * fVar16,fVar15 - uStack_190._4_4_ * fVar17);
        uStack_a0 = CONCAT44(fVar1 + (float)local_188 * fVar16,fVar15 + (float)local_188 * fVar17);
        FUN_143348240(param_1,pfVar5,pfVar5 + 3,pfVar5 + 6,&local_198,&local_148);
        uVar13 = uVar10 - 2;
        uVar9 = 1;
        if (1 < uVar13) {
          uVar11 = 2;
          do {
            lVar6 = *(longlong *)(param_1 + 0x60);
            lVar4 = *(longlong *)(lVar6 + (uVar9 >> 4) * 8) + (ulonglong)((uint)uVar9 & 0xf) * 0xc;
            FUN_143348240(param_1,lVar4,
                          *(longlong *)(lVar6 + (uVar11 >> 4) * 8) +
                          (ulonglong)((uint)uVar11 & 0xf) * 0xc,
                          *(longlong *)(lVar6 + (uVar11 + 1 >> 4) * 8) +
                          (ulonglong)((uint)(uVar11 + 1) & 0xf) * 0xc,&local_198,&local_148);
            iVar2 = *(int *)(param_1 + 8);
            if (-1 < iVar2) {
              if (iVar2 < 2) {
                FUN_143347c20(param_1,lVar4,&local_198,&local_148,iVar2);
              }
              else if (iVar2 == 2) {
                FUN_143346890(param_1,lVar4,&local_198,&local_148);
              }
              else if (iVar2 == 3) {
                FUN_143347130(param_1,lVar4,&local_198,&local_148,3);
              }
            }
            uVar9 = uVar9 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar9 < uVar13);
        }
        lVar6 = *(longlong *)(param_1 + 0x60);
        uVar11 = (ulonglong)((uint)uVar13 & 0xf);
        lVar7 = *(longlong *)(lVar6 + (uVar13 >> 4) * 8);
        uVar13 = (ulonglong)((uint)(uVar10 - 1) & 0xf);
        lVar4 = *(longlong *)(lVar6 + (uVar10 - 1 >> 4) * 8);
        fVar15 = *(float *)(lVar4 + uVar13 * 0xc);
        fVar1 = *(float *)(lVar4 + 4 + uVar13 * 0xc);
        local_158 = (fVar15 + fVar15) - *(float *)(lVar7 + uVar11 * 0xc);
        local_154 = (fVar1 + fVar1) - *(float *)(lVar7 + 4 + uVar11 * 0xc);
        lVar4 = *(longlong *)(lVar6 + (uVar9 >> 4) * 8) + (ulonglong)((uint)uVar9 & 0xf) * 0xc;
        local_150 = *(undefined4 *)(lVar7 + 8 + uVar11 * 0xc);
        FUN_143348240(param_1,lVar4,
                      *(longlong *)(lVar6 + (uVar9 + 1 >> 4) * 8) +
                      (ulonglong)((uint)(uVar9 + 1) & 0xf) * 0xc,&local_158,&local_198,&local_148);
        iVar2 = *(int *)(param_1 + 8);
        if (-1 < iVar2) {
          if (iVar2 < 2) {
            FUN_143347c20(param_1,lVar4,&local_198,&local_148,iVar2);
          }
          else if (iVar2 == 2) {
            FUN_143346890(param_1,lVar4,&local_198,&local_148);
          }
          else if (iVar2 == 3) {
            FUN_143347130(param_1,lVar4,&local_198,&local_148,3);
          }
        }
      }
      lVar4 = *(longlong *)(param_1 + 0x60);
      uVar10 = *(longlong *)(param_1 + 0x48) - 2;
      uVar9 = *(longlong *)(param_1 + 0x48) - 1;
      FUN_143348d00(param_1,*(longlong *)(lVar4 + (uVar10 >> 4) * 8) +
                            (ulonglong)((uint)uVar10 & 0xf) * 0xc,
                    *(longlong *)(lVar4 + (uVar9 >> 4) * 8) + (ulonglong)((uint)uVar9 & 0xf) * 0xc,
                    *(undefined4 *)
                     (*(longlong *)(lVar4 + (uVar10 >> 4) * 8) + 8 +
                     (ulonglong)((uint)uVar10 & 0xf) * 0xc),&local_198);
      lVar7 = *(longlong *)(param_1 + 0x60);
      uVar10 = *(longlong *)(param_1 + 0x48) - 2;
      uVar9 = *(longlong *)(param_1 + 0x48) - 1;
      lVar4 = *(longlong *)(lVar7 + (uVar10 >> 4) * 8) + (ulonglong)((uint)uVar10 & 0xf) * 0xc;
      uVar13 = (ulonglong)((uint)uVar9 & 0xf);
      lVar6 = *(longlong *)(lVar7 + (uVar9 >> 4) * 8) + uVar13 * 0xc;
      iVar2 = *(int *)(param_1 + 0x10);
      if (-1 < iVar2) {
        if (iVar2 < 2) {
          FUN_143345ce0(param_1,lVar6,lVar4,
                        *(undefined4 *)
                         (*(longlong *)(lVar7 + (uVar10 >> 4) * 8) + 8 +
                         (ulonglong)((uint)uVar10 & 0xf) * 0xc),&local_198,1);
        }
        else if (iVar2 == 2) {
          FUN_143346160(param_1,lVar6,lVar4,uVar13,&local_198,1);
        }
      }
    }
  }
  else {
    uVar10 = *(ulonglong *)(param_1 + 0x48);
    if (2 < uVar10) {
      plVar3 = *(longlong **)(param_1 + 0x60);
      uVar9 = uVar10 - 1;
      lVar4 = *plVar3;
      FUN_143348240(param_1,plVar3[uVar10 - 2 >> 4] + (ulonglong)((uint)(uVar10 - 2) & 0xf) * 0xc,
                    plVar3[uVar9 >> 4] + (ulonglong)((uint)uVar9 & 0xf) * 0xc,lVar4,&local_198,
                    &local_148);
      FUN_143348240(param_1,plVar3[uVar9 >> 4] + (ulonglong)((uint)uVar9 & 0xf) * 0xc,lVar4,
                    lVar4 + 0xc,&local_198,&local_148);
      uVar9 = *(ulonglong *)(param_1 + 0x98);
      if (uVar10 != 0) {
        uVar10 = 1;
        do {
          uVar13 = uVar10 + 1;
          uVar11 = uVar13;
          if (*(ulonglong *)(param_1 + 0x48) <= uVar13) {
            uVar11 = uVar13 - *(ulonglong *)(param_1 + 0x48);
          }
          uVar12 = uVar10;
          if (*(ulonglong *)(param_1 + 0x48) <= uVar10) {
            uVar12 = uVar10 - *(ulonglong *)(param_1 + 0x48);
          }
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar10 - 1 >> 4) * 8) +
                  (ulonglong)((uint)(uVar10 - 1) & 0xf) * 0xc;
          FUN_143348240(param_1,lVar4,
                        *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar12 >> 4) * 8) +
                        (ulonglong)((uint)uVar12 & 0xf) * 0xc,
                        *(longlong *)(*(longlong *)(param_1 + 0x60) + (uVar11 >> 4) * 8) +
                        (ulonglong)((uint)uVar11 & 0xf) * 0xc,&local_198,&local_148);
          iVar2 = *(int *)(param_1 + 8);
          if (-1 < iVar2) {
            if (iVar2 < 2) {
              FUN_143347c20(param_1,lVar4,&local_198,&local_148,iVar2);
            }
            else if (iVar2 == 2) {
              FUN_143346890(param_1,lVar4,&local_198,&local_148);
            }
            else if (iVar2 == 3) {
              FUN_143347130(param_1,lVar4,&local_198,&local_148,3);
            }
          }
          bVar14 = uVar10 < *(ulonglong *)(param_1 + 0x48);
          uVar10 = uVar13;
        } while (bVar14);
      }
      uVar10 = uVar9;
      do {
        if (*(ulonglong *)(param_1 + 0x98) <= uVar10) break;
        uVar13 = (ulonglong)((uint)uVar10 & 0xf);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + (uVar10 >> 4) * 8);
        if (*(int *)(lVar4 + uVar13 * 0xc) == -4) {
          *(undefined4 *)(lVar4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xb8);
        }
        if (*(int *)(lVar4 + uVar13 * 0xc) == -3) {
          *(undefined4 *)(lVar4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xbc);
        }
        if (*(int *)(lVar4 + uVar13 * 0xc) == -2) {
          *(undefined4 *)(lVar4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xc0);
        }
        if (*(int *)(lVar4 + uVar13 * 0xc) == -1) {
          *(undefined4 *)(lVar4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xc4);
        }
        if (*(int *)(lVar4 + 4 + uVar13 * 0xc) == -4) {
          *(undefined4 *)(lVar4 + 4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xb8);
        }
        if (*(int *)(lVar4 + 4 + uVar13 * 0xc) == -3) {
          *(undefined4 *)(lVar4 + 4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xbc);
        }
        if (*(int *)(lVar4 + 4 + uVar13 * 0xc) == -2) {
          *(undefined4 *)(lVar4 + 4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xc0);
        }
        if (*(int *)(lVar4 + 4 + uVar13 * 0xc) == -1) {
          *(undefined4 *)(lVar4 + 4 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xc4);
        }
        if (*(int *)(lVar4 + 8 + uVar13 * 0xc) == -4) {
          *(undefined4 *)(lVar4 + 8 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xb8);
        }
        if (*(int *)(lVar4 + 8 + uVar13 * 0xc) == -3) {
          *(undefined4 *)(lVar4 + 8 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xbc);
        }
        if (*(int *)(lVar4 + 8 + uVar13 * 0xc) == -2) {
          *(undefined4 *)(lVar4 + 8 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xc0);
        }
        if (*(int *)(lVar4 + 8 + uVar13 * 0xc) == -1) {
          *(undefined4 *)(lVar4 + 8 + uVar13 * 0xc) = *(undefined4 *)(param_1 + 0xc4);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 - uVar9 < 6);
    }
  }
  CAkVPLNode::Disconnect(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 143345580 FUN_143345580 body=651 status=ok
// SIG undefined FUN_143345580(void)

Matrix2x4<float> *
FUN_143345580(longlong param_1,Matrix2x4<float> *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar4 = 0;
  *(undefined8 *)param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0x3f800000;
  if ((*(float *)(param_1 + 0xd0) <= *(float *)(param_1 + 200)) ||
     (*(float *)(param_1 + 0xd4) <= *(float *)(param_1 + 0xcc))) {
    *(undefined4 *)(param_1 + 200) = 0x7149f2ca;
    *(undefined4 *)(param_1 + 0xcc) = 0x7149f2ca;
    *(undefined4 *)(param_1 + 0xd0) = 0xf149f2ca;
    *(undefined4 *)(param_1 + 0xd4) = 0xf149f2ca;
    if (*(ulonglong *)(param_1 + 0x70) != 0) {
      fVar9 = 1e+30;
      fVar6 = -1e+30;
      fVar8 = 1e+30;
      fVar7 = -1e+30;
      uVar5 = uVar4;
      do {
        uVar1 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x88) + (uVar5 >> 4) * 8) +
                 (ulonglong)((uint)uVar5 & 0xf) * 0xc);
        local_68 = (float)uVar1;
        if (local_68 < fVar9) {
          *(float *)(param_1 + 200) = local_68;
          fVar9 = local_68;
        }
        fStack_64 = (float)((ulonglong)uVar1 >> 0x20);
        if (fStack_64 < fVar8) {
          *(float *)(param_1 + 0xcc) = fStack_64;
          fVar8 = fStack_64;
        }
        if (fVar6 < local_68) {
          *(float *)(param_1 + 0xd0) = local_68;
          fVar6 = local_68;
        }
        if (fVar7 < fStack_64) {
          *(float *)(param_1 + 0xd4) = fStack_64;
          fVar7 = fStack_64;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x70));
    }
  }
  fVar6 = *(float *)(param_1 + 0xd0);
  if (*(float *)(param_1 + 200) < fVar6) {
    fVar7 = *(float *)(param_1 + 0xcc);
    if (fVar7 < *(float *)(param_1 + 0xd4)) {
      local_60 = param_5;
      local_58 = param_5;
      local_54 = param_6;
      local_48 = CONCAT44(fVar7,*(float *)(param_1 + 200));
      uStack_40 = CONCAT44(fVar7,fVar6);
      local_38 = CONCAT44(*(float *)(param_1 + 0xd4),fVar6);
      _local_68 = CONCAT44(param_4,param_3);
      local_5c = param_4;
      FUN_143326520(param_2,&local_48,&local_68);
      if (*(longlong *)(param_1 + 0x70) != 0) {
        do {
          uVar5 = (ulonglong)((uint)uVar4 & 0xf);
          uVar3 = uVar4 >> 4;
          uVar4 = uVar4 + 1;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar3 * 8);
          fVar6 = *(float *)(lVar2 + uVar5 * 0xc);
          fVar7 = *(float *)(lVar2 + 4 + uVar5 * 0xc);
          *(float *)(lVar2 + uVar5 * 0xc) =
               fVar6 * *(float *)param_2 + fVar7 * *(float *)(param_2 + 4) +
               *(float *)(param_2 + 0xc);
          *(float *)(lVar2 + 4 + uVar5 * 0xc) =
               fVar6 * *(float *)(param_2 + 0x10) + fVar7 * *(float *)(param_2 + 0x14) +
               *(float *)(param_2 + 0x1c);
        } while (uVar4 < *(ulonglong *)(param_1 + 0x70));
      }
      local_48 = *(undefined8 *)param_2;
      uStack_40 = *(undefined8 *)(param_2 + 8);
      local_38 = *(undefined8 *)(param_2 + 0x10);
      uStack_30 = *(undefined8 *)(param_2 + 0x18);
      Scaleform::Render::Matrix2x4<float>::SetInverse(param_2,(Matrix2x4<float> *)&local_48);
    }
  }
  return param_2;
}



// FUNCTION 143345850 FUN_143345850 body=653 status=ok
// SIG undefined FUN_143345850(void)

uint FUN_143345850(longlong param_1,longlong param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (3 < param_4) {
    do {
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x70) <= (ulonglong)uVar1) {
        return uVar4;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar1 >> 4) * 8);
      *param_3 = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[1] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[2] = 0;
      *(undefined2 *)(param_3 + 3) = *(undefined2 *)(lVar2 + 8 + uVar3 * 0xc);
      *(undefined2 *)((longlong)param_3 + 0xe) = 0;
      *(ushort *)(param_3 + 4) = -(ushort)(*(short *)(lVar2 + 10 + uVar3 * 0xc) != 0) & 2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x70) <= (ulonglong)uVar1) {
        return uVar4 + 1;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[5] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[6] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[7] = 0;
      *(undefined2 *)(param_3 + 8) = *(undefined2 *)(lVar2 + 8 + uVar3 * 0xc);
      *(undefined2 *)((longlong)param_3 + 0x22) = 0;
      *(ushort *)(param_3 + 9) = -(ushort)(*(short *)(lVar2 + 10 + uVar3 * 0xc) != 0) & 2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x70) <= (ulonglong)uVar1) {
        return uVar4 + 2;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[10] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[0xb] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[0xc] = 0;
      *(undefined2 *)(param_3 + 0xd) = *(undefined2 *)(lVar2 + 8 + uVar3 * 0xc);
      *(undefined2 *)((longlong)param_3 + 0x36) = 0;
      *(ushort *)(param_3 + 0xe) = -(ushort)(*(short *)(lVar2 + 10 + uVar3 * 0xc) != 0) & 2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x70) <= (ulonglong)uVar1) {
        return uVar4 + 3;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[0xf] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[0x10] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[0x11] = 0;
      *(undefined2 *)(param_3 + 0x12) = *(undefined2 *)(lVar2 + 8 + uVar3 * 0xc);
      *(undefined2 *)((longlong)param_3 + 0x4a) = 0;
      uVar4 = uVar4 + 4;
      *(ushort *)(param_3 + 0x13) = -(ushort)(*(short *)(lVar2 + 10 + uVar3 * 0xc) != 0) & 2;
      param_3 = param_3 + 0x14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    } while (uVar4 < param_4 - 3);
  }
  if (uVar4 < param_4) {
    param_3 = param_3 + 2;
    do {
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x70) <= (ulonglong)uVar1) {
        return uVar4;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x88) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[-2] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[-1] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      *param_3 = 0;
      *(undefined2 *)(param_3 + 1) = *(undefined2 *)(lVar2 + 8 + uVar3 * 0xc);
      *(undefined2 *)((longlong)param_3 + 6) = 0;
      uVar4 = uVar4 + 1;
      *(ushort *)(param_3 + 2) = -(ushort)(*(short *)(lVar2 + 10 + uVar3 * 0xc) != 0) & 2;
      param_3 = param_3 + 5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    } while (uVar4 < param_4);
  }
  return uVar4;
}



// FUNCTION 143345af0 FUN_143345af0 body=117 status=ok
// SIG undefined FUN_143345af0(void)

void FUN_143345af0(longlong param_1,undefined8 param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_5 != 0) {
    do {
      uVar1 = uVar5 + param_4;
      uVar5 = uVar5 + 1;
      uVar4 = (ulonglong)(uVar1 & 0xf);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + (ulonglong)(uVar1 >> 4) * 8);
      lVar2 = lVar3 + uVar4 * 0xc;
      *param_3 = *(undefined2 *)(lVar3 + uVar4 * 0xc);
      param_3[1] = *(undefined2 *)(lVar2 + 4);
      param_3[2] = *(undefined2 *)(lVar2 + 8);
      param_3 = param_3 + 3;
    } while (uVar5 < param_5);
  }
  return;
}



// FUNCTION 143345b70 FUN_143345b70 body=360 status=ok
// SIG undefined FUN_143345b70(void)

void FUN_143345b70(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *param_2 = *(float *)(param_1 + 0x20);
  uVar4 = 0;
  param_2[1] = *(float *)(param_1 + 0x24);
  if (*param_2 <= 0.0 && *param_2 != 0.0) {
    *param_2 = 0.0;
  }
  if (param_2[1] <= 0.0 && param_2[1] != 0.0) {
    param_2[1] = 0.0;
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = fVar1 + *(float *)(param_1 + 0x28);
  fVar6 = 1.0;
  param_2[3] = fVar7;
  param_2[4] = fVar2 + *(float *)(param_1 + 0x2c);
  if (fVar7 == 0.0) {
    fVar5 = 1.0;
  }
  else {
    fVar5 = fVar1 / fVar7;
  }
  fVar3 = param_2[4];
  param_2[7] = fVar5;
  if (fVar3 != 0.0) {
    fVar6 = fVar2 / fVar3;
  }
  param_2[8] = fVar6;
  param_2[9] = fVar1 * *(float *)(param_1 + 0x14);
  param_2[10] = fVar2 * *(float *)(param_1 + 0x14);
  param_2[0xb] = fVar7 * *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x14);
  *(bool *)(param_2 + 0xd) = 0.0 < fVar1;
  param_2[0xc] = fVar3 * fVar6;
  *(bool *)((longlong)param_2 + 0x35) = 0.0 < fVar2;
  param_2[5] = (fVar3 + fVar7) * 0.5;
  param_2[2] = (fVar2 + fVar1) * 0.5;
  *(bool *)((longlong)param_2 + 0x36) = 0.0 < *(float *)(param_1 + 0x28);
  *(bool *)((longlong)param_2 + 0x37) = 0.0 < *(float *)(param_1 + 0x2c);
  if (((0.0 < fVar1) || (0.0 < fVar2)) || (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c))) {
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 0xe) = uVar4;
  *(bool *)((longlong)param_2 + 0x39) = fVar7 < fVar3;
  if (fVar7 >= fVar3) {
    param_2[6] = fVar3 / fVar7;
    return;
  }
  param_2[6] = fVar7 / fVar3;
  return;
}



// FUNCTION 143345ce0 FUN_143345ce0 body=1132 status=ok
// SIG undefined FUN_143345ce0(void)

void FUN_143345ce0(longlong param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  char param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  char local_res20;
  
  cVar3 = param_6;
  pfVar9 = param_5 + 1;
  if (param_6 == '\0') {
    pfVar9 = param_5;
  }
  if (param_6 == '\0') {
    fVar15 = param_5[1];
    fVar18 = param_5[3];
    fVar11 = param_5[4];
  }
  else {
    fVar15 = *param_5;
    fVar18 = param_5[4];
    fVar11 = param_5[3];
  }
  uVar4 = 0;
  cVar1 = *(char *)((longlong)param_5 + 0x37);
  cVar2 = *(char *)((longlong)param_5 + 0x36);
  uVar5 = 0;
  uVar6 = 0;
  fVar13 = (*param_2 - *param_3) / param_4;
  param_4 = (param_3[1] - param_2[1]) / param_4;
  fVar16 = *pfVar9 * fVar13;
  fVar17 = *pfVar9 * param_4;
  fVar14 = param_4 * fVar15;
  fVar15 = fVar13 * fVar15;
  fVar19 = fVar13 * fVar18;
  fVar13 = fVar13 * fVar11;
  fVar18 = param_4 * fVar18;
  param_4 = param_4 * fVar11;
  fVar11 = ((fVar13 - fVar15) + (fVar19 - fVar16)) * 0.5;
  fVar12 = ((fVar14 - param_4) + (fVar17 - fVar18)) * 0.5;
  bVar10 = param_6 != '\0';
  local_res20 = cVar1;
  param_6 = cVar2;
  if (bVar10) {
    local_res20 = cVar2;
    param_6 = cVar1;
  }
  if ((cVar2 != '\0') || (uVar7 = 0, cVar1 != '\0')) {
    uVar4 = FUN_143349220(param_1,(*param_2 - fVar17) + fVar11,(param_2[1] - fVar16) + fVar12,
                          *(undefined4 *)(param_1 + 0x18),0);
    uVar5 = uVar4;
    if (*(char *)(param_5 + 0xe) != '\0') {
      uVar5 = FUN_143349220(param_1,fVar14 + *param_2 + fVar11,fVar15 + param_2[1] + fVar12,
                            *(undefined4 *)(param_1 + 0x1c),0);
    }
    uVar6 = uVar4;
    if (param_6 != '\0') {
      uVar6 = FUN_143349220(param_1,(*param_2 - fVar18) + fVar11,(param_2[1] - fVar19) + fVar12,
                            *(undefined4 *)(param_1 + 0x18),0);
    }
    uVar7 = uVar5;
    if (local_res20 != '\0') {
      uVar7 = FUN_143349220(param_1,param_4 + *param_2 + fVar11,fVar13 + param_2[1] + fVar12,
                            *(undefined4 *)(param_1 + 0x1c),0);
    }
  }
  if (cVar3 == '\0') {
    uVar8 = FUN_143349220(param_1,*param_2 - fVar17,param_2[1] - fVar16,
                          *(undefined4 *)(param_1 + 0x18),1);
    *(undefined4 *)(param_1 + 0xb8) = uVar8;
    if (*(char *)((longlong)param_5 + 0x36) != '\0') {
      uVar8 = FUN_143349220(param_1,*param_2 - fVar18,param_2[1] - fVar19,
                            *(undefined4 *)(param_1 + 0x18),0);
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar8;
    if (*(char *)(param_5 + 0xe) == '\0') {
      uVar8 = *(undefined4 *)(param_1 + 0xb8);
    }
    else {
      uVar8 = FUN_143349220(param_1,fVar14 + *param_2,fVar15 + param_2[1],
                            *(undefined4 *)(param_1 + 0x1c),1);
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar8;
    if (*(char *)((longlong)param_5 + 0x37) != '\0') {
      uVar8 = FUN_143349220(param_1,param_4 + *param_2,fVar13 + param_2[1],
                            *(undefined4 *)(param_1 + 0x1c),0);
    }
    *(undefined4 *)(param_1 + 0xc4) = uVar8;
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_1 + 0xc4) = uVar8;
    uVar8 = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0xbc) = uVar8;
  }
  if (((*(char *)((longlong)param_5 + 0x36) != '\0') ||
      (*(char *)((longlong)param_5 + 0x37) != '\0')) &&
     ((*(char *)(param_5 + 0xd) != '\0' || (*(char *)((longlong)param_5 + 0x35) != '\0')))) {
    FUN_1433491b0(param_1,uVar4,uVar5,*(undefined4 *)(param_1 + 0xb8));
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar5,*(undefined4 *)(param_1 + 0xbc));
  }
  if (param_6 != '\0') {
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),uVar6);
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar6,uVar4);
  }
  if (local_res20 != '\0') {
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar7,*(undefined4 *)(param_1 + 0xc4));
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar5,uVar7);
  }
  return;
}



// FUNCTION 143346160 FUN_143346160 body=1755 status=ok
// SIG undefined FUN_143346160(void)

void FUN_143346160(longlong param_1,float *param_2,float *param_3,float param_4,float *param_5,
                  char param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  undefined4 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  float _X;
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
  undefined4 local_140;
  uint local_134;
  
  pfVar13 = param_5 + 1;
  if (param_6 == '\0') {
    pfVar13 = param_5;
  }
  if (param_6 == '\0') {
    fVar1 = param_5[1];
    fVar26 = param_5[3];
    fVar24 = param_5[4];
  }
  else {
    fVar1 = *param_5;
    fVar26 = param_5[4];
    fVar24 = param_5[3];
  }
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar29 = (fVar2 - *param_3) / param_4;
  param_4 = (param_3[1] - fVar3) / param_4;
  fVar25 = *pfVar13 * fVar29;
  fVar27 = fVar29 * fVar26;
  fVar26 = param_4 * fVar26;
  fVar28 = *pfVar13 * param_4;
  _X = _guard_xfg_dispatch_icall_nop(-fVar27,-fVar26);
  fVar20 = (_X + 3.1415927) - _X;
  fVar21 = _guard_xfg_dispatch_icall_nop
                     (param_5[5] / (*(float *)(param_1 + 0x30) * 0.25 + param_5[5]));
  uVar16 = (int)(fVar20 / (fVar21 * 2.0)) + 1;
  if (param_6 == '\0') {
    uVar12 = FUN_143349220(param_1,fVar2 - fVar28,fVar3 - fVar25,*(undefined4 *)(param_1 + 0x18),1);
    *(undefined4 *)(param_1 + 0xbc) = uVar12;
    *(undefined4 *)(param_1 + 0xb8) = uVar12;
    if ((*(char *)((longlong)param_5 + 0x36) != '\0') ||
       (*(char *)((longlong)param_5 + 0x37) != '\0')) {
      uVar12 = FUN_143349220(param_1,*param_2 - fVar26,param_2[1] - fVar27,
                             *(undefined4 *)(param_1 + 0x18),0);
    }
    *(undefined4 *)(param_1 + 0xc4) = uVar12;
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xbc);
    uVar12 = *(undefined4 *)(param_1 + 0xc4);
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar12;
  fVar2 = param_2[1];
  fVar3 = *param_2;
  fVar21 = param_2[1];
  fVar4 = *param_2;
  if (0 < (int)uVar16) {
    uVar15 = (ulonglong)uVar16;
    do {
      _X = _X + fVar20 / (float)(int)uVar16;
      fVar22 = _guard_xfg_dispatch_icall_nop(_X);
      fVar23 = _guard_xfg_dispatch_icall_nop(_X);
      fVar5 = param_5[2];
      fVar6 = param_5[5];
      if (*(char *)(param_5 + 0xe) == '\0') {
        iVar17 = *(int *)(param_1 + 0xb8);
      }
      else {
        if (param_6 == '\0') {
          uVar10 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
        }
        else {
          uVar10 = (undefined2)*(undefined4 *)(param_1 + 0x18);
        }
        uVar18 = *(ulonglong *)(param_1 + 0x70) >> 4;
        local_140 = CONCAT22(1,uVar10);
        if (*(ulonglong *)(param_1 + 0x78) <= uVar18) {
          FUN_143329c80(param_1 + 0x68,uVar18);
        }
        uVar14 = (ulonglong)(*(uint *)(param_1 + 0x70) & 0xf);
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar18 * 8);
        *(ulonglong *)(lVar8 + uVar14 * 0xc) =
             CONCAT44(fVar5 * fVar23 + (fVar29 * fVar1 - fVar25) * 0.5 + fVar2,
                      fVar5 * fVar22 + (param_4 * fVar1 - fVar28) * 0.5 + fVar4);
        *(undefined4 *)(lVar8 + 8 + uVar14 * 0xc) = local_140;
        *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
        iVar17 = *(int *)(param_1 + 0x70) + -1;
      }
      if ((*(char *)((longlong)param_5 + 0x36) != '\0') ||
         (iVar19 = iVar17, *(char *)((longlong)param_5 + 0x37) != '\0')) {
        if (param_6 == '\0') {
          uVar11 = (ushort)*(undefined4 *)(param_1 + 0x1c);
        }
        else {
          uVar11 = (ushort)*(undefined4 *)(param_1 + 0x18);
        }
        uVar18 = *(ulonglong *)(param_1 + 0x70) >> 4;
        local_134 = (uint)uVar11;
        if (*(ulonglong *)(param_1 + 0x78) <= uVar18) {
          FUN_143329c80(param_1 + 0x68,uVar18);
        }
        uVar14 = (ulonglong)(*(uint *)(param_1 + 0x70) & 0xf);
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar18 * 8);
        *(ulonglong *)(lVar8 + uVar14 * 0xc) =
             CONCAT44(fVar6 * fVar23 + (fVar29 * fVar24 - fVar27) * 0.5 + fVar21,
                      fVar6 * fVar22 + (param_4 * fVar24 - fVar26) * 0.5 + fVar3);
        *(uint *)(lVar8 + 8 + uVar14 * 0xc) = local_134;
        *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
        iVar19 = *(int *)(param_1 + 0x70) + -1;
      }
      if (param_6 == '\0') {
        if ((*(char *)(param_5 + 0xd) != '\0') || (*(char *)((longlong)param_5 + 0x35) != '\0')) {
          uVar18 = *(ulonglong *)(param_1 + 0x98) >> 4;
          uVar9 = *(undefined8 *)(param_1 + 0xb8);
          if (*(ulonglong *)(param_1 + 0xa0) <= uVar18) {
            FUN_143329c80(param_1 + 0x90,uVar18);
          }
          uVar14 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar18 * 8);
          *(undefined8 *)(lVar8 + uVar14 * 0xc) = uVar9;
          *(int *)(lVar8 + 8 + uVar14 * 0xc) = iVar17;
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
        }
        if ((*(char *)((longlong)param_5 + 0x36) != '\0') ||
           (*(char *)((longlong)param_5 + 0x37) != '\0')) {
          uVar12 = *(undefined4 *)(param_1 + 0xbc);
          uVar18 = *(ulonglong *)(param_1 + 0x98) >> 4;
          uVar7 = *(undefined4 *)(param_1 + 0xc4);
          if (*(ulonglong *)(param_1 + 0xa0) <= uVar18) {
            FUN_143329c80(param_1 + 0x90,uVar18);
          }
          uVar14 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar18 * 8);
          *(ulonglong *)(lVar8 + uVar14 * 0xc) = CONCAT44(uVar7,uVar12);
          *(int *)(lVar8 + 8 + uVar14 * 0xc) = iVar19;
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
          uVar12 = *(undefined4 *)(param_1 + 0xbc);
          uVar18 = *(ulonglong *)(param_1 + 0x98) >> 4;
          if (*(ulonglong *)(param_1 + 0xa0) <= uVar18) {
            FUN_143329c80(param_1 + 0x90,uVar18);
          }
          uVar14 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar18 * 8);
          *(ulonglong *)(lVar8 + uVar14 * 0xc) = CONCAT44(iVar19,uVar12);
          *(int *)(lVar8 + 8 + uVar14 * 0xc) = iVar17;
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
        }
        *(int *)(param_1 + 0xbc) = iVar17;
        *(int *)(param_1 + 0xc4) = iVar19;
      }
      else {
        if ((*(char *)(param_5 + 0xd) != '\0') || (*(char *)((longlong)param_5 + 0x35) != '\0')) {
          uVar12 = *(undefined4 *)(param_1 + 0xb8);
          uVar7 = *(undefined4 *)(param_1 + 0xbc);
          uVar18 = *(ulonglong *)(param_1 + 0x98) >> 4;
          if (*(ulonglong *)(param_1 + 0xa0) <= uVar18) {
            FUN_143329c80(param_1 + 0x90,uVar18);
          }
          uVar14 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar18 * 8);
          *(ulonglong *)(lVar8 + uVar14 * 0xc) = CONCAT44(iVar17,uVar12);
          *(undefined4 *)(lVar8 + 8 + uVar14 * 0xc) = uVar7;
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
        }
        if ((*(char *)((longlong)param_5 + 0x36) != '\0') ||
           (*(char *)((longlong)param_5 + 0x37) != '\0')) {
          uVar12 = *(undefined4 *)(param_1 + 0xb8);
          uVar18 = *(ulonglong *)(param_1 + 0x98) >> 4;
          uVar7 = *(undefined4 *)(param_1 + 0xc0);
          if (*(ulonglong *)(param_1 + 0xa0) <= uVar18) {
            FUN_143329c80(param_1 + 0x90,uVar18);
          }
          uVar14 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar18 * 8);
          *(ulonglong *)(lVar8 + uVar14 * 0xc) = CONCAT44(uVar7,uVar12);
          *(int *)(lVar8 + 8 + uVar14 * 0xc) = iVar19;
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
          uVar12 = *(undefined4 *)(param_1 + 0xb8);
          uVar18 = *(ulonglong *)(param_1 + 0x98) >> 4;
          if (*(ulonglong *)(param_1 + 0xa0) <= uVar18) {
            FUN_143329c80(param_1 + 0x90,uVar18);
          }
          uVar14 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar18 * 8);
          *(ulonglong *)(lVar8 + uVar14 * 0xc) = CONCAT44(iVar19,uVar12);
          *(int *)(lVar8 + 8 + uVar14 * 0xc) = iVar17;
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
        }
        *(int *)(param_1 + 0xb8) = iVar17;
        *(int *)(param_1 + 0xc0) = iVar19;
      }
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}



// FUNCTION 143346890 FUN_143346890 body=2189 status=ok
// SIG undefined FUN_143346890(void)

void FUN_143346890(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_res20;
  
  if ((*(char *)((longlong)param_4 + 0xd9) == '\0') && (*(char *)((longlong)param_4 + 0xda) == '\0')
     ) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  fVar10 = *(float *)(param_1 + 0x30) * 0.125;
  if (*(char *)((longlong)param_4 + 0xd7) == '\0') {
    if (fVar10 <= (*param_3 + *param_3) - param_4[0x19]) {
      if (bVar4) {
        fVar12 = *param_2 - param_4[2];
        fVar13 = param_2[1] - param_4[3];
      }
      else {
        fVar12 = param_4[0x22];
        fVar13 = param_4[0x23];
      }
      fVar11 = *param_2;
      fVar1 = param_2[1];
      fVar2 = param_3[7];
      fVar3 = param_3[7];
      uVar5 = FUN_143349220(fVar10,fVar11 + param_4[0xc],fVar1 + param_4[0xd],
                            *(undefined4 *)(param_1 + 0x1c),1);
      local_res20 = uVar5;
      if (*(char *)((longlong)param_3 + 0x37) != '\0') {
        local_res20 = FUN_143349220(param_1,param_4[0xe] + *param_2,param_4[0xf] + param_2[1],
                                    *(undefined4 *)(param_1 + 0x1c),0);
      }
      uVar6 = uVar5;
      if (*(char *)(param_3 + 0xe) != '\0') {
        uVar6 = FUN_143349220(param_1,(fVar12 - fVar11) * fVar2 + fVar11,
                              (fVar13 - fVar1) * fVar3 + fVar1,*(undefined4 *)(param_1 + 0x18),1);
      }
      uVar7 = uVar6;
      if (*(char *)((longlong)param_3 + 0x36) != '\0') {
        uVar7 = FUN_143349220(param_1,fVar12,fVar13,*(undefined4 *)(param_1 + 0x18),0);
      }
      if ((*(char *)(param_3 + 0xd) != '\0') || (*(char *)((longlong)param_3 + 0x35) != '\0')) {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar5,uVar6);
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar6,*(undefined4 *)(param_1 + 0xb8))
        ;
      }
      if (*(char *)((longlong)param_3 + 0x37) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc4),uVar5,*(undefined4 *)(param_1 + 0xbc))
        ;
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc4),local_res20,uVar5);
      }
      if (*(char *)((longlong)param_3 + 0x36) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar6,uVar7);
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar7,*(undefined4 *)(param_1 + 0xc0))
        ;
      }
      *(undefined4 *)(param_1 + 0xc4) = local_res20;
      *(undefined4 *)(param_1 + 0xb8) = uVar6;
      *(undefined4 *)(param_1 + 0xc0) = uVar7;
      *(undefined4 *)(param_1 + 0xbc) = uVar5;
      if (bVar4) {
        uVar7 = FUN_143349220(param_1,*param_2 - param_4[4],param_2[1] - param_4[5],
                              *(undefined4 *)(param_1 + 0x18),1);
        *(undefined4 *)(param_1 + 0xb8) = uVar7;
        if (*(char *)((longlong)param_3 + 0x36) != '\0') {
          uVar6 = FUN_143349220(param_1,*param_2 - param_4[6],param_2[1] - param_4[7],
                                *(undefined4 *)(param_1 + 0x18),0);
        }
        *(undefined4 *)(param_1 + 0xc0) = uVar6;
      }
      fVar10 = _guard_xfg_dispatch_icall_nop(param_4[0xf],param_4[0xe]);
      fVar12 = _guard_xfg_dispatch_icall_nop(param_4[0x13],param_4[0x12]);
      if (fVar12 < fVar10) {
        fVar12 = fVar12 + 6.2831855;
      }
      fVar12 = fVar12 - fVar10;
      fVar13 = _guard_xfg_dispatch_icall_nop
                         (param_3[4] / (*(float *)(param_1 + 0x30) * 0.25 + param_3[4]));
      uVar8 = (int)(fVar12 / (fVar13 * 2.0)) + 1;
      if ((int)uVar8 < 1) {
        return;
      }
      uVar9 = (ulonglong)uVar8;
      do {
        fVar10 = fVar10 + fVar12 / (float)(int)uVar8;
        fVar13 = _guard_xfg_dispatch_icall_nop(fVar10);
        fVar11 = _guard_xfg_dispatch_icall_nop(fVar10);
        if (*(char *)(param_3 + 0xe) != '\0') {
          uVar5 = FUN_143349220(param_1,param_3[1] * fVar13 + *param_2,
                                param_3[1] * fVar11 + param_2[1],*(undefined4 *)(param_1 + 0x1c),1);
        }
        uVar6 = uVar5;
        if (*(char *)((longlong)param_3 + 0x37) != '\0') {
          uVar6 = FUN_143349220(param_1,param_3[4] * fVar13 + *param_2,
                                param_3[4] * fVar11 + param_2[1],*(undefined4 *)(param_1 + 0x1c),0);
        }
        if (*(char *)((longlong)param_3 + 0x35) != '\0') {
          FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),
                        uVar5);
        }
        if (*(char *)((longlong)param_3 + 0x37) != '\0') {
          FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc4),
                        uVar5);
          FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc4),uVar6,uVar5);
        }
        *(undefined4 *)(param_1 + 0xbc) = uVar5;
        *(undefined4 *)(param_1 + 0xc4) = uVar6;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      return;
    }
  }
  else if (fVar10 <= (param_3[1] + param_3[1]) - param_4[0x1b]) {
    if (bVar4) {
      fVar12 = param_4[0xe] + *param_2;
      fVar13 = param_4[0xf] + param_2[1];
    }
    else {
      fVar12 = param_4[0x24];
      fVar13 = param_4[0x25];
    }
    fVar11 = *param_2;
    fVar1 = param_2[1];
    fVar2 = param_3[8];
    fVar3 = param_3[8];
    uVar5 = FUN_143349220(fVar10,fVar11 - *param_4,fVar1 - param_4[1],
                          *(undefined4 *)(param_1 + 0x18),1);
    local_res20 = uVar5;
    if (*(char *)((longlong)param_3 + 0x36) != '\0') {
      local_res20 = FUN_143349220(param_1,*param_2 - param_4[2],param_2[1] - param_4[3],
                                  *(undefined4 *)(param_1 + 0x18),0);
    }
    uVar6 = uVar5;
    if (*(char *)(param_3 + 0xe) != '\0') {
      uVar6 = FUN_143349220(param_1,(fVar12 - fVar11) * fVar2 + fVar11,
                            (fVar13 - fVar1) * fVar3 + fVar1,*(undefined4 *)(param_1 + 0x1c),1);
    }
    uVar7 = uVar6;
    if (*(char *)((longlong)param_3 + 0x37) != '\0') {
      uVar7 = FUN_143349220(param_1,fVar12,fVar13,*(undefined4 *)(param_1 + 0x1c),0);
    }
    if ((*(char *)(param_3 + 0xd) != '\0') || (*(char *)((longlong)param_3 + 0x35) != '\0')) {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar6,uVar5);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),uVar6);
    }
    if (*(char *)((longlong)param_3 + 0x36) != '\0') {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xb8),uVar5);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),uVar5,local_res20);
    }
    if (*(char *)((longlong)param_3 + 0x37) != '\0') {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar7,uVar6);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc4),uVar7);
    }
    *(undefined4 *)(param_1 + 0xc0) = local_res20;
    *(undefined4 *)(param_1 + 0xb8) = uVar5;
    *(undefined4 *)(param_1 + 0xbc) = uVar6;
    *(undefined4 *)(param_1 + 0xc4) = uVar7;
    if (bVar4) {
      uVar7 = FUN_143349220(param_1,param_4[0x10] + *param_2,param_4[0x11] + param_2[1],
                            *(undefined4 *)(param_1 + 0x1c),1);
      *(undefined4 *)(param_1 + 0xbc) = uVar7;
      if (*(char *)((longlong)param_3 + 0x37) != '\0') {
        uVar6 = FUN_143349220(param_1,param_4[0x12] + *param_2,param_4[0x13] + param_2[1],
                              *(undefined4 *)(param_1 + 0x1c),0);
      }
      *(undefined4 *)(param_1 + 0xc4) = uVar6;
    }
    fVar10 = _guard_xfg_dispatch_icall_nop(-param_4[3],-param_4[2]);
    fVar12 = _guard_xfg_dispatch_icall_nop(-param_4[7],-param_4[6]);
    if (fVar10 < fVar12) {
      fVar12 = fVar12 + -6.2831855;
    }
    fVar12 = fVar10 - fVar12;
    fVar13 = _guard_xfg_dispatch_icall_nop
                       (param_3[3] / (*(float *)(param_1 + 0x30) * 0.25 + param_3[3]));
    uVar8 = (int)(fVar12 / (fVar13 * 2.0)) + 1;
    if ((int)uVar8 < 1) {
      return;
    }
    uVar9 = (ulonglong)uVar8;
    do {
      fVar10 = fVar10 - fVar12 / (float)(int)uVar8;
      fVar13 = _guard_xfg_dispatch_icall_nop(fVar10);
      fVar11 = _guard_xfg_dispatch_icall_nop(fVar10);
      if (*(char *)(param_3 + 0xe) != '\0') {
        uVar5 = FUN_143349220(param_1,*param_3 * fVar13 + *param_2,*param_3 * fVar11 + param_2[1],
                              *(undefined4 *)(param_1 + 0x18),1);
      }
      uVar6 = uVar5;
      if (*(char *)((longlong)param_3 + 0x36) != '\0') {
        uVar6 = FUN_143349220(param_1,param_3[3] * fVar13 + *param_2,
                              param_3[3] * fVar11 + param_2[1],*(undefined4 *)(param_1 + 0x18),0);
      }
      if (*(char *)(param_3 + 0xd) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar5,*(undefined4 *)(param_1 + 0xb8))
        ;
      }
      if (*(char *)((longlong)param_3 + 0x36) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar5,*(undefined4 *)(param_1 + 0xc0))
        ;
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),uVar5,uVar6);
      }
      *(undefined4 *)(param_1 + 0xb8) = uVar5;
      *(undefined4 *)(param_1 + 0xc0) = uVar6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    return;
  }
  FUN_143347c20();
  return;
}



// FUNCTION 143347130 FUN_143347130 body=2785 status=ok
// SIG undefined FUN_143347130(void)

void FUN_143347130(longlong param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_b8;
  
  fVar11 = 0.0;
  if ((*(char *)((longlong)param_4 + 0xd9) == '\0') && (*(char *)((longlong)param_4 + 0xda) == '\0')
     ) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (*(char *)((longlong)param_4 + 0xd7) == '\0') {
    if (bVar5) {
      fVar13 = *param_2 - param_4[2];
      fVar14 = param_2[1] - param_4[3];
    }
    else {
      fVar13 = param_4[0x22];
      fVar14 = param_4[0x23];
    }
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_3[7];
    fVar4 = param_3[7];
    if (param_5 == 0) {
      fVar11 = param_4[0x1a];
      fVar12 = param_4[0x33] - fVar11;
      if (fVar12 == 0.0) {
        fVar12 = 1.0;
      }
      fVar9 = ((param_3[0xc] - fVar11) - param_3[4]) + param_3[1];
      fVar10 = fVar12;
      if (fVar9 <= fVar12) {
        fVar10 = fVar9;
      }
      fVar11 = (fVar10 + (param_3[10] - fVar11)) / (fVar12 + fVar12);
      fVar12 = param_4[0x1b];
      fVar10 = param_4[0x27] - fVar12;
      if (fVar10 == 0.0) {
        fVar10 = 1.0;
      }
      fVar12 = ((((param_3[10] - fVar12) + param_3[4]) - param_3[1]) + (param_3[0xc] - fVar12)) /
               (fVar10 + fVar10);
      uVar6 = FUN_143349220(fVar10 + fVar10,
                            (param_4[0x30] - (fVar1 + param_4[0xc])) * fVar11 + fVar1 + param_4[0xc]
                            ,(param_4[0x31] - (fVar2 + param_4[0xd])) * fVar11 +
                             fVar2 + param_4[0xd],*(undefined4 *)(param_1 + 0x1c),1);
    }
    else {
      uVar6 = FUN_143349220(param_1,fVar1 + param_4[0xc],fVar2 + param_4[0xd],
                            *(undefined4 *)(param_1 + 0x1c),1);
      fVar12 = param_4[0x27] - param_4[0x1b];
      if (fVar12 == 0.0) {
        fVar12 = 1.0;
      }
      fVar12 = (((param_4[0x1a] + param_3[4]) - param_3[1]) - param_4[0x1b]) / fVar12;
    }
    local_b8 = uVar6;
    if (*(char *)((longlong)param_3 + 0x37) != '\0') {
      local_b8 = FUN_143349220(param_1,(param_4[0x24] - (param_4[0xe] + *param_2)) * fVar12 +
                                       param_4[0xe] + *param_2,
                               (param_4[0x25] - (param_4[0xf] + param_2[1])) * fVar12 +
                               param_4[0xf] + param_2[1],*(undefined4 *)(param_1 + 0x1c),0);
    }
    uVar7 = uVar6;
    if (*(char *)(param_3 + 0xe) != '\0') {
      uVar7 = FUN_143349220(param_1,(fVar13 - fVar1) * fVar3 + fVar1,
                            (fVar14 - fVar2) * fVar4 + fVar2,*(undefined4 *)(param_1 + 0x18),1);
    }
    uVar8 = uVar7;
    if (*(char *)((longlong)param_3 + 0x36) != '\0') {
      uVar8 = FUN_143349220(param_1,fVar13,fVar14,*(undefined4 *)(param_1 + 0x18),0);
    }
    if ((*(char *)(param_3 + 0xd) != '\0') || (*(char *)((longlong)param_3 + 0x35) != '\0')) {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar6,uVar7);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar7,*(undefined4 *)(param_1 + 0xb8));
    }
    if (*(char *)((longlong)param_3 + 0x37) != '\0') {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc4),uVar6,*(undefined4 *)(param_1 + 0xbc));
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc4),local_b8,uVar6);
    }
    if (*(char *)((longlong)param_3 + 0x36) != '\0') {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar7,uVar8);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar8,*(undefined4 *)(param_1 + 0xc0));
    }
    *(undefined4 *)(param_1 + 0xc4) = local_b8;
    *(undefined4 *)(param_1 + 0xb8) = uVar7;
    *(undefined4 *)(param_1 + 0xc0) = uVar8;
    *(undefined4 *)(param_1 + 0xbc) = uVar6;
    if (bVar5) {
      uVar8 = FUN_143349220(param_1,*param_2 - param_4[4],param_2[1] - param_4[5],
                            *(undefined4 *)(param_1 + 0x18),1);
      *(undefined4 *)(param_1 + 0xb8) = uVar8;
      if (*(char *)((longlong)param_3 + 0x36) != '\0') {
        uVar7 = FUN_143349220(param_1,*param_2 - param_4[6],param_2[1] - param_4[7],
                              *(undefined4 *)(param_1 + 0x18),0);
      }
      *(undefined4 *)(param_1 + 0xc0) = uVar7;
    }
    if (*(float *)(param_1 + 0x30) * 0.25 * 0.25 < param_3[4] - param_4[0x1b]) {
      if (*(char *)(param_3 + 0xe) != '\0') {
        if (param_5 == 0) {
          fVar13 = (param_4[0x30] - (param_4[0x10] + *param_2)) * fVar11 + param_4[0x10] + *param_2;
          fVar11 = (param_4[0x31] - (param_4[0x11] + param_2[1])) * fVar11 +
                   param_4[0x11] + param_2[1];
        }
        else {
          fVar11 = param_4[0x11] + param_2[1];
          fVar13 = param_4[0x10] + *param_2;
        }
        uVar6 = FUN_143349220(param_1,fVar13,fVar11,*(undefined4 *)(param_1 + 0x1c),1);
      }
      uVar7 = uVar6;
      if (*(char *)((longlong)param_3 + 0x37) != '\0') {
        uVar7 = FUN_143349220(param_1,(param_4[0x24] - (param_4[0x12] + *param_2)) * fVar12 +
                                      param_4[0x12] + *param_2,
                              (param_4[0x25] - (param_4[0x13] + param_2[1])) * fVar12 +
                              param_4[0x13] + param_2[1],*(undefined4 *)(param_1 + 0x1c),0);
      }
      if (*(char *)((longlong)param_3 + 0x35) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),uVar6)
        ;
      }
      if (*(char *)((longlong)param_3 + 0x37) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc4),uVar6)
        ;
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc4),uVar7,uVar6);
      }
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
      *(undefined4 *)(param_1 + 0xc4) = uVar7;
    }
  }
  else {
    if (bVar5) {
      fVar13 = param_4[0xe] + *param_2;
      fVar14 = param_4[0xf] + param_2[1];
    }
    else {
      fVar13 = param_4[0x24];
      fVar14 = param_4[0x25];
    }
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_3[8];
    fVar4 = param_3[8];
    if (param_5 == 0) {
      fVar11 = param_4[0x18];
      fVar12 = param_4[0x32] - fVar11;
      if (fVar12 == 0.0) {
        fVar12 = 1.0;
      }
      fVar9 = ((param_3[0xb] - fVar11) - param_3[3]) + *param_3;
      fVar10 = fVar12;
      if (fVar9 <= fVar12) {
        fVar10 = fVar9;
      }
      fVar11 = (fVar10 + (param_3[9] - fVar11)) / (fVar12 + fVar12);
      fVar12 = param_4[0x19];
      fVar10 = param_4[0x26] - fVar12;
      if (fVar10 == 0.0) {
        fVar10 = 1.0;
      }
      fVar12 = ((((param_3[9] - fVar12) + param_3[3]) - *param_3) + (param_3[0xb] - fVar12)) /
               (fVar10 + fVar10);
      uVar6 = FUN_143349220(fVar10 + fVar10,
                            (param_4[0x2e] - (fVar1 - *param_4)) * fVar11 + (fVar1 - *param_4),
                            (param_4[0x2f] - (fVar2 - param_4[1])) * fVar11 + (fVar2 - param_4[1]),
                            *(undefined4 *)(param_1 + 0x18),1);
    }
    else {
      uVar6 = FUN_143349220(param_1,fVar1 - *param_4,fVar2 - param_4[1],
                            *(undefined4 *)(param_1 + 0x18),1);
      fVar12 = param_4[0x26] - param_4[0x19];
      if (fVar12 == 0.0) {
        fVar12 = 1.0;
      }
      fVar12 = (((param_4[0x18] + param_3[3]) - *param_3) - param_4[0x19]) / fVar12;
    }
    local_b8 = uVar6;
    if (*(char *)((longlong)param_3 + 0x36) != '\0') {
      local_b8 = FUN_143349220(param_1,(param_4[0x22] - (*param_2 - param_4[2])) * fVar12 +
                                       (*param_2 - param_4[2]),
                               (param_4[0x23] - (param_2[1] - param_4[3])) * fVar12 +
                               (param_2[1] - param_4[3]),*(undefined4 *)(param_1 + 0x18),0);
    }
    uVar7 = uVar6;
    if (*(char *)(param_3 + 0xe) != '\0') {
      uVar7 = FUN_143349220(param_1,(fVar13 - fVar1) * fVar3 + fVar1,
                            (fVar14 - fVar2) * fVar4 + fVar2,*(undefined4 *)(param_1 + 0x1c),1);
    }
    uVar8 = uVar7;
    if (*(char *)((longlong)param_3 + 0x37) != '\0') {
      uVar8 = FUN_143349220(param_1,fVar13,fVar14,*(undefined4 *)(param_1 + 0x1c),0);
    }
    if ((*(char *)(param_3 + 0xd) != '\0') || (*(char *)((longlong)param_3 + 0x35) != '\0')) {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar7,uVar6);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),uVar7);
    }
    if (*(char *)((longlong)param_3 + 0x36) != '\0') {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xb8),uVar6);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),uVar6,local_b8);
    }
    if (*(char *)((longlong)param_3 + 0x37) != '\0') {
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar8,uVar7);
      FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc4),uVar8);
    }
    *(undefined4 *)(param_1 + 0xc0) = local_b8;
    *(undefined4 *)(param_1 + 0xb8) = uVar6;
    *(undefined4 *)(param_1 + 0xbc) = uVar7;
    *(undefined4 *)(param_1 + 0xc4) = uVar8;
    if (bVar5) {
      uVar8 = FUN_143349220(param_1,param_4[0x10] + *param_2,param_4[0x11] + param_2[1],
                            *(undefined4 *)(param_1 + 0x1c),1);
      *(undefined4 *)(param_1 + 0xbc) = uVar8;
      if (*(char *)((longlong)param_3 + 0x37) != '\0') {
        uVar7 = FUN_143349220(param_1,param_4[0x12] + *param_2,param_4[0x13] + param_2[1],
                              *(undefined4 *)(param_1 + 0x1c),0);
      }
      *(undefined4 *)(param_1 + 0xc4) = uVar7;
    }
    if (*(float *)(param_1 + 0x30) * 0.25 * 0.25 < param_3[3] - param_4[0x19]) {
      if (*(char *)(param_3 + 0xe) != '\0') {
        if (param_5 == 0) {
          fVar13 = (param_4[0x2e] - (*param_2 - param_4[4])) * fVar11 + (*param_2 - param_4[4]);
          fVar11 = (param_4[0x2f] - (param_2[1] - param_4[5])) * fVar11 + (param_2[1] - param_4[5]);
        }
        else {
          fVar11 = param_2[1] - param_4[5];
          fVar13 = *param_2 - param_4[4];
        }
        uVar6 = FUN_143349220(param_1,fVar13,fVar11,*(undefined4 *)(param_1 + 0x18),1);
      }
      uVar7 = uVar6;
      if (*(char *)((longlong)param_3 + 0x36) != '\0') {
        uVar7 = FUN_143349220(param_1,(param_4[0x22] - (*param_2 - param_4[6])) * fVar12 +
                                      (*param_2 - param_4[6]),
                              (param_4[0x23] - (param_2[1] - param_4[7])) * fVar12 +
                              (param_2[1] - param_4[7]),*(undefined4 *)(param_1 + 0x18),0);
      }
      if (*(char *)(param_3 + 0xd) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar6,*(undefined4 *)(param_1 + 0xb8))
        ;
      }
      if (*(char *)((longlong)param_3 + 0x36) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xb8),uVar6,*(undefined4 *)(param_1 + 0xc0))
        ;
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),uVar6,uVar7);
      }
      *(undefined4 *)(param_1 + 0xb8) = uVar6;
      *(undefined4 *)(param_1 + 0xc0) = uVar7;
    }
  }
  return;
}



// FUNCTION 143347c20 FUN_143347c20 body=1284 status=ok
// SIG undefined FUN_143347c20(void)

void FUN_143347c20(longlong param_1,float *param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_a8;
  undefined4 local_a4;
  
  if ((*(char *)(param_4 + 0xd9) == '\0') && (*(char *)(param_4 + 0xda) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (*(char *)(param_4 + 0xd7) == '\0') {
    fVar10 = *param_2;
    fVar11 = param_2[1];
    fVar16 = *(float *)(param_4 + 0x90);
    fVar17 = *(float *)(param_4 + 0x94);
    fVar9 = *(float *)(param_4 + 0x9c);
    fVar12 = (fVar16 - fVar10) * *(float *)(param_3 + 0x20) + fVar10;
    fVar13 = (fVar17 - fVar11) * *(float *)(param_3 + 0x20) + fVar11;
    if ((fVar9 < *(float *)(param_3 + 0x30) || fVar9 == *(float *)(param_3 + 0x30)) || (1 < param_5)
       ) {
      if (bVar4) {
        fVar14 = fVar10 - *(float *)(param_4 + 8);
        fVar15 = fVar11 - *(float *)(param_4 + 0xc);
      }
      else {
        fVar14 = *(float *)(param_4 + 0x88);
        fVar15 = *(float *)(param_4 + 0x8c);
      }
      fVar10 = (fVar14 - fVar10) * *(float *)(param_3 + 0x1c) + fVar10;
      fVar11 = (fVar15 - fVar11) * *(float *)(param_3 + 0x1c) + fVar11;
      goto LAB_143347e06;
    }
  }
  else {
    fVar12 = *param_2;
    fVar13 = param_2[1];
    fVar14 = *(float *)(param_4 + 0x88);
    fVar15 = *(float *)(param_4 + 0x8c);
    fVar9 = *(float *)(param_4 + 0x98);
    fVar10 = (fVar14 - fVar12) * *(float *)(param_3 + 0x1c) + fVar12;
    fVar11 = (fVar15 - fVar13) * *(float *)(param_3 + 0x1c) + fVar13;
    if ((fVar9 < *(float *)(param_3 + 0x2c) || fVar9 == *(float *)(param_3 + 0x2c)) || (1 < param_5)
       ) {
      if (bVar4) {
        fVar16 = fVar12 + *(float *)(param_4 + 0x38);
        fVar17 = fVar13 + *(float *)(param_4 + 0x3c);
      }
      else {
        fVar16 = *(float *)(param_4 + 0x90);
        fVar17 = *(float *)(param_4 + 0x94);
      }
      fVar12 = (fVar16 - fVar12) * *(float *)(param_3 + 0x20) + fVar12;
      fVar13 = (fVar17 - fVar13) * *(float *)(param_3 + 0x20) + fVar13;
LAB_143347e06:
      uVar5 = FUN_143349220(fVar9,fVar10,fVar11,*(undefined4 *)(param_1 + 0x18),1);
      local_a4 = uVar5;
      if (*(char *)(param_3 + 0x36) != '\0') {
        local_a4 = FUN_143349220(param_1,fVar14,fVar15,*(undefined4 *)(param_1 + 0x18),0);
      }
      uVar6 = uVar5;
      if (*(char *)(param_3 + 0x38) != '\0') {
        uVar6 = FUN_143349220(param_1,fVar12,fVar13,*(undefined4 *)(param_1 + 0x1c),1);
      }
      local_a8 = uVar6;
      if (*(char *)(param_3 + 0x37) != '\0') {
        local_a8 = FUN_143349220(param_1,fVar16,fVar17,*(undefined4 *)(param_1 + 0x1c),0);
      }
      if ((*(char *)(param_3 + 0x34) != '\0') || (*(char *)(param_3 + 0x35) != '\0')) {
        uVar1 = *(undefined4 *)(param_1 + 0xb8);
        uVar8 = *(ulonglong *)(param_1 + 0x98) >> 4;
        if (*(ulonglong *)(param_1 + 0xa0) <= uVar8) {
          FUN_143329c80(param_1 + 0x90,uVar8);
        }
        uVar7 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar8 * 8);
        *(ulonglong *)(lVar2 + uVar7 * 0xc) = CONCAT44(uVar6,uVar1);
        *(undefined4 *)(lVar2 + 8 + uVar7 * 0xc) = uVar5;
        *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
        uVar8 = *(ulonglong *)(param_1 + 0x98) >> 4;
        uVar3 = *(undefined8 *)(param_1 + 0xb8);
        if (*(ulonglong *)(param_1 + 0xa0) <= uVar8) {
          FUN_143329c80(param_1 + 0x90,uVar8);
        }
        uVar7 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar8 * 8);
        *(undefined8 *)(lVar2 + uVar7 * 0xc) = uVar3;
        *(undefined4 *)(lVar2 + 8 + uVar7 * 0xc) = uVar6;
        *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
      }
      if (*(char *)(param_3 + 0x36) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xb8),uVar5)
        ;
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),uVar5,local_a4);
      }
      if (*(char *)(param_3 + 0x37) != '\0') {
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),local_a8,uVar6);
        FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc4),
                      local_a8);
      }
      *(undefined4 *)(param_1 + 0xc4) = local_a8;
      *(undefined4 *)(param_1 + 0xc0) = local_a4;
      *(undefined4 *)(param_1 + 0xb8) = uVar5;
      *(undefined4 *)(param_1 + 0xbc) = uVar6;
      if (!bVar4) {
        return;
      }
      if (*(char *)(param_4 + 0xd7) != '\0') {
        uVar5 = FUN_143349220(param_1,*(float *)(param_4 + 0x40) + *param_2,
                              *(float *)(param_4 + 0x44) + param_2[1],
                              *(undefined4 *)(param_1 + 0x1c),1);
        *(undefined4 *)(param_1 + 0xbc) = uVar5;
        if (*(char *)(param_3 + 0x37) != '\0') {
          uVar6 = FUN_143349220(param_1,*(float *)(param_4 + 0x48) + *param_2,
                                *(float *)(param_4 + 0x4c) + param_2[1],
                                *(undefined4 *)(param_1 + 0x1c),0);
        }
        *(undefined4 *)(param_1 + 0xc4) = uVar6;
        return;
      }
      uVar6 = FUN_143349220(param_1,*param_2 - *(float *)(param_4 + 0x10),
                            param_2[1] - *(float *)(param_4 + 0x14),*(undefined4 *)(param_1 + 0x18),
                            1);
      *(undefined4 *)(param_1 + 0xb8) = uVar6;
      if (*(char *)(param_3 + 0x36) != '\0') {
        uVar5 = FUN_143349220(param_1,*param_2 - *(float *)(param_4 + 0x18),
                              param_2[1] - *(float *)(param_4 + 0x1c),
                              *(undefined4 *)(param_1 + 0x18),0);
      }
      *(undefined4 *)(param_1 + 0xc0) = uVar5;
      return;
    }
  }
  FUN_143347130();
  return;
}



// FUNCTION 143348130 FUN_143348130 body=260 status=ok
// SIG undefined FUN_143348130(void)

undefined8
FUN_143348130(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,float param_9)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (param_8 - param_6) * (param_3 - param_1) - (param_7 - param_5) * (param_4 - param_2);
  if (ABS(fVar2) < param_9) {
    return 1;
  }
  fVar1 = ((param_2 - param_6) * (param_7 - param_5) - (param_1 - param_5) * (param_8 - param_6)) /
          fVar2;
  fVar2 = ((param_2 - param_6) * (param_3 - param_1) - (param_1 - param_5) * (param_4 - param_2)) /
          fVar2;
  if ((((0.0 <= fVar1) && (fVar1 <= 1.0)) && (0.0 <= fVar2)) && (fVar2 <= 1.0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143348240 FUN_143348240 body=2309 status=ok
// SIG undefined FUN_143348240(void)

void FUN_143348240(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  undefined4 *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *param_6 = param_6[4];
  param_6[1] = param_6[5];
  param_6[0xc] = param_6[0x10];
  param_6[0xd] = param_6[0x11];
  param_6[2] = param_6[6];
  param_6[3] = param_6[7];
  param_6[0xe] = param_6[0x12];
  param_6[0xf] = param_6[0x13];
  param_6[4] = param_6[8];
  param_6[5] = param_6[9];
  param_6[0x10] = param_6[0x14];
  param_6[0x11] = param_6[0x15];
  param_6[6] = param_6[10];
  param_6[7] = param_6[0xb];
  param_6[0x12] = param_6[0x16];
  param_6[0x13] = param_6[0x17];
  fVar13 = (param_4[1] - param_3[1]) / param_3[2];
  fVar14 = (*param_3 - *param_4) / param_3[2];
  param_6[8] = fVar13 * *param_5;
  param_6[9] = fVar14 * *param_5;
  param_6[0x14] = fVar13 * param_5[1];
  param_6[0x15] = fVar14 * param_5[1];
  param_6[10] = fVar13 * param_5[3];
  param_6[0xb] = fVar14 * param_5[3];
  fVar13 = fVar13 * param_5[4];
  param_6[0x16] = fVar13;
  fVar14 = fVar14 * param_5[4];
  param_6[0x1c] = param_6[0x22];
  param_6[0x1d] = param_6[0x23];
  param_6[0x1e] = param_6[0x24];
  param_6[0x1f] = param_6[0x25];
  param_6[0x17] = fVar14;
  pfVar1 = (float *)(param_6 + 0x28);
  param_6[0x20] = param_6[0x26];
  pfVar2 = (float *)(param_6 + 0x29);
  pfVar3 = (float *)(param_6 + 0x2a);
  param_6[0x21] = param_6[0x27];
  pfVar4 = (float *)(param_6 + 0x2b);
  param_6[0x22] = *pfVar1;
  param_6[0x23] = *pfVar2;
  param_6[0x24] = *pfVar3;
  param_6[0x25] = *pfVar4;
  param_6[0x26] = param_6[0x2c];
  param_6[0x27] = param_6[0x2d];
  *(undefined1 *)(param_6 + 0x34) = *(undefined1 *)((longlong)param_6 + 0xd2);
  *(undefined1 *)((longlong)param_6 + 0xd1) = *(undefined1 *)((longlong)param_6 + 0xd3);
  *(undefined1 *)((longlong)param_6 + 0xd2) = *(undefined1 *)(param_6 + 0x35);
  *(undefined1 *)((longlong)param_6 + 0xd3) = *(undefined1 *)((longlong)param_6 + 0xd5);
  bVar6 = true;
  fVar15 = (param_4[2] + param_3[2]) * *(float *)(param_1 + 0x34);
  if (*(char *)((longlong)param_5 + 0x39) == '\0') {
    fVar13 = (float)param_6[6];
    fVar14 = (float)param_6[7];
    fVar12 = (fVar13 + (float)param_6[2]) * 0.5;
    fVar11 = (fVar14 + (float)param_6[3]) * 0.5;
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar11 * fVar11 + fVar12 * fVar12);
    param_6[0x19] = fVar12;
    param_6[0x18] = fVar12 * param_5[7];
    fVar11 = param_5[6];
    param_6[0x1b] = fVar12 * fVar11;
    param_6[0x1a] = fVar12 * fVar11 * param_5[8];
    cVar7 = FUN_1433490c0(*param_2 - fVar13,param_2[1] - fVar14,*param_3 - fVar13,
                          param_3[1] - fVar14,*param_3 - (float)param_6[10],
                          param_3[1] - (float)param_6[0xb],*param_4 - (float)param_6[10],
                          param_4[1] - (float)param_6[0xb],pfVar1,pfVar2,fVar15);
    if (cVar7 == '\0') goto LAB_143348736;
    fVar13 = *pfVar1;
    fVar14 = fVar13 - *param_3;
    fVar14 = _guard_xfg_dispatch_icall_nop
                       ((*pfVar2 - param_3[1]) * (*pfVar2 - param_3[1]) + fVar14 * fVar14);
    param_6[0x2c] = fVar14;
    param_6[0x2d] = fVar14 * param_5[6];
    *pfVar3 = *param_3 - (fVar13 - *param_3) * param_5[6];
    *pfVar4 = param_3[1] - (*pfVar2 - param_3[1]) * param_5[6];
  }
  else {
    fVar11 = (float)param_6[0x12];
    fVar12 = (float)param_6[0x13];
    fVar10 = (fVar11 + (float)param_6[0xe]) * 0.5;
    fVar9 = (fVar12 + (float)param_6[0xf]) * 0.5;
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar9 * fVar9 + fVar10 * fVar10);
    param_6[0x1b] = fVar10;
    param_6[0x1a] = fVar10 * param_5[8];
    fVar9 = param_5[6];
    param_6[0x19] = fVar10 * fVar9;
    param_6[0x18] = fVar10 * fVar9 * param_5[7];
    cVar7 = FUN_1433490c0(fVar11 + *param_2,fVar12 + param_2[1],fVar11 + *param_3,
                          fVar12 + param_3[1],fVar13 + *param_3,fVar14 + param_3[1],
                          fVar13 + *param_4,fVar14 + param_4[1],pfVar3,pfVar4,fVar15);
    if (cVar7 == '\0') goto LAB_143348736;
    fVar13 = *pfVar3;
    fVar14 = fVar13 - *param_3;
    fVar14 = _guard_xfg_dispatch_icall_nop
                       ((*pfVar4 - param_3[1]) * (*pfVar4 - param_3[1]) + fVar14 * fVar14);
    param_6[0x2d] = fVar14;
    param_6[0x2c] = fVar14 * param_5[6];
    *pfVar1 = *param_3 - (fVar13 - *param_3) * param_5[6];
    *pfVar2 = param_3[1] - (*pfVar4 - param_3[1]) * param_5[6];
  }
  bVar6 = false;
  *(undefined2 *)(param_6 + 0x35) = 0;
LAB_143348736:
  *(undefined1 *)((longlong)param_6 + 0xd6) = *(undefined1 *)((longlong)param_6 + 0xd7);
  *(undefined1 *)((longlong)param_6 + 0xd7) = *(undefined1 *)(param_6 + 0x36);
  bVar5 = 0.0 < (*param_4 - *param_3) * (param_3[1] - param_2[1]) -
                (*param_3 - *param_2) * (param_4[1] - param_3[1]);
  *(bool *)(param_6 + 0x36) = bVar5;
  if (bVar6) {
    fVar13 = *param_3;
    if (*(char *)((longlong)param_5 + 0x39) == '\0') {
      fVar14 = fVar13 - (float)param_6[6];
    }
    else {
      fVar14 = fVar13 + (float)param_6[0x12];
    }
    fVar11 = param_3[1];
    if (*(char *)((longlong)param_5 + 0x39) == '\0') {
      fVar12 = fVar11 - (float)param_6[7];
    }
    else {
      fVar12 = fVar11 + (float)param_6[0x13];
    }
    fVar9 = param_4[1];
    fVar10 = *param_4;
    if ((fVar11 - param_2[1]) * (fVar14 - fVar13) - (fVar13 - *param_2) * (fVar12 - fVar11) < 0.0 ==
        (fVar9 - fVar11) * (fVar14 - fVar10) - (fVar10 - fVar13) * (fVar12 - fVar9) < 0.0) {
      *pfVar1 = fVar13 - (float)param_6[6];
      *pfVar2 = param_3[1] - (float)param_6[7];
      param_6[0x2c] = param_5[0xb];
      *pfVar3 = *param_3 + (float)param_6[0x12];
      *pfVar4 = (float)param_6[0x13] + param_3[1];
      param_6[0x2d] = param_5[0xc];
      *(undefined2 *)(param_6 + 0x35) = 0;
    }
    else {
      fVar11 = (fVar11 - (fVar9 + param_2[1]) * 0.5) * 1024.0;
      fVar14 = (fVar13 - (fVar10 + *param_2) * 0.5) * 1024.0;
      if (bVar5) {
        *pfVar3 = fVar13 + (float)param_6[0x12];
        *pfVar4 = (float)param_6[0x13] + param_3[1];
        param_6[0x2d] = param_5[0xc];
        *(undefined1 *)((longlong)param_6 + 0xd5) = 1;
        fVar14 = fVar14 + *param_3;
        *pfVar1 = fVar14;
        fVar11 = fVar11 + param_3[1];
        *pfVar2 = fVar11;
        fVar11 = fVar11 - param_3[1];
        fVar14 = fVar14 - *param_3;
        fVar13 = _guard_xfg_dispatch_icall_nop(fVar11 * fVar11 + fVar14 * fVar14);
        param_6[0x2c] = fVar13;
        *(undefined1 *)(param_6 + 0x35) = 0;
      }
      else {
        *pfVar1 = fVar13 - (float)param_6[6];
        *pfVar2 = param_3[1] - (float)param_6[7];
        param_6[0x2c] = param_5[0xb];
        *(undefined1 *)(param_6 + 0x35) = 1;
        fVar14 = fVar14 + *param_3;
        *pfVar3 = fVar14;
        fVar11 = fVar11 + param_3[1];
        *pfVar4 = fVar11;
        fVar11 = fVar11 - param_3[1];
        fVar14 = fVar14 - *param_3;
        fVar13 = _guard_xfg_dispatch_icall_nop(fVar11 * fVar11 + fVar14 * fVar14);
        param_6[0x2d] = fVar13;
        *(undefined1 *)((longlong)param_6 + 0xd5) = 0;
      }
    }
  }
  *(undefined1 *)((longlong)param_6 + 0xd9) = *(undefined1 *)((longlong)param_6 + 0xda);
  if (*(char *)((longlong)param_6 + 0xd7) == '\0') {
    cVar7 = *(char *)((longlong)param_6 + 0xd2);
  }
  else {
    cVar7 = *(char *)((longlong)param_6 + 0xd3);
  }
  *(char *)((longlong)param_6 + 0xda) = cVar7;
  if (cVar7 == '\0') {
    uVar8 = FUN_143348130(param_6[0x22],param_6[0x23],param_6[0x24],param_6[0x25],*pfVar1,*pfVar2,
                          *pfVar3,*pfVar4,fVar15);
    *(undefined1 *)((longlong)param_6 + 0xda) = uVar8;
  }
  param_6[0x2e] = ((float)param_6[0x22] - *param_2) * param_5[7] + *param_2;
  param_6[0x2f] = ((float)param_6[0x23] - param_2[1]) * param_5[7] + param_2[1];
  param_6[0x30] = ((float)param_6[0x24] - *param_2) * param_5[8] + *param_2;
  param_6[0x31] = ((float)param_6[0x25] - param_2[1]) * param_5[8] + param_2[1];
  param_6[0x32] = (float)param_6[0x26] * param_5[7];
  param_6[0x33] = param_5[8] * (float)param_6[0x27];
  return;
}



// FUNCTION 143348c50 FUN_143348c50 body=157 status=ok
// SIG undefined FUN_143348c50(void)

void FUN_143348c50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_5;
  uVar3 = param_6;
  FUN_143348240();
  iVar1 = *(int *)(param_1 + 8);
  if (-1 < iVar1) {
    if (iVar1 < 2) {
      FUN_143347c20(param_1,param_2,param_5,param_6,iVar1,uVar3);
    }
    else if (iVar1 == 2) {
      FUN_143346890(param_1,param_2,param_5,param_6,uVar2);
    }
    else if (iVar1 == 3) {
      FUN_143347130(param_1,param_2,param_5,param_6,3);
    }
  }
  return;
}



// FUNCTION 143348d00 FUN_143348d00 body=752 status=ok
// SIG undefined FUN_143348d00(void)

void FUN_143348d00(longlong param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = param_5[1];
  fVar14 = (*param_2 - *param_3) / param_4;
  fVar2 = param_5[4];
  param_4 = (param_3[1] - param_2[1]) / param_4;
  fVar3 = param_5[3];
  fVar13 = *param_5 * fVar14;
  uVar7 = FUN_143349220(fVar13,*param_3 - *param_5 * param_4,param_3[1] - fVar13,
                        *(undefined4 *)(param_1 + 0x18),1);
  uVar8 = uVar7;
  if (*(char *)((longlong)param_5 + 0x36) != '\0') {
    uVar8 = FUN_143349220(param_1,*param_3 - fVar3 * param_4,param_3[1] - fVar3 * fVar14,
                          *(undefined4 *)(param_1 + 0x18),0);
  }
  uVar9 = uVar7;
  if (*(char *)(param_5 + 0xe) != '\0') {
    uVar9 = FUN_143349220(param_1,fVar1 * param_4 + *param_3,fVar1 * fVar14 + param_3[1],
                          *(undefined4 *)(param_1 + 0x1c),1);
  }
  uVar10 = uVar9;
  if (*(char *)((longlong)param_5 + 0x37) != '\0') {
    uVar10 = FUN_143349220(param_1,fVar2 * param_4 + *param_3,fVar2 * fVar14 + param_3[1],
                           *(undefined4 *)(param_1 + 0x1c),0);
  }
  if ((*(char *)(param_5 + 0xd) != '\0') || (*(char *)((longlong)param_5 + 0x35) != '\0')) {
    uVar4 = *(undefined4 *)(param_1 + 0xb8);
    uVar12 = *(ulonglong *)(param_1 + 0x98) >> 4;
    if (*(ulonglong *)(param_1 + 0xa0) <= uVar12) {
      FUN_143329c80(param_1 + 0x90,uVar12);
    }
    uVar11 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar12 * 8);
    *(ulonglong *)(lVar5 + uVar11 * 0xc) = CONCAT44(uVar9,uVar4);
    *(undefined4 *)(lVar5 + 8 + uVar11 * 0xc) = uVar7;
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
    uVar12 = *(ulonglong *)(param_1 + 0x98) >> 4;
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    if (*(ulonglong *)(param_1 + 0xa0) <= uVar12) {
      FUN_143329c80(param_1 + 0x90,uVar12);
    }
    uVar11 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar12 * 8);
    *(undefined8 *)(lVar5 + uVar11 * 0xc) = uVar6;
    *(undefined4 *)(lVar5 + 8 + uVar11 * 0xc) = uVar9;
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
  }
  if (*(char *)((longlong)param_5 + 0x36) != '\0') {
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xb8),uVar7);
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xc0),uVar7,uVar8);
  }
  if (*(char *)((longlong)param_5 + 0x37) != '\0') {
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),uVar10,uVar9);
    FUN_1433491b0(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined4 *)(param_1 + 0xc4),uVar10);
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar9;
  *(undefined4 *)(param_1 + 0xb8) = uVar7;
  *(undefined4 *)(param_1 + 0xc0) = uVar8;
  *(undefined4 *)(param_1 + 0xc4) = uVar10;
  return;
}



// FUNCTION 143348ff0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FUdpSerializedMessage>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 143349020 FUN_143349020 body=44 status=ok
// SIG undefined FUN_143349020(void)

void FUN_143349020(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = param_2;
  local_14 = param_3;
  FUN_143326690(param_1 + 0x40,&local_18);
  return;
}



// FUNCTION 1433490c0 FUN_1433490c0 body=225 status=ok
// SIG undefined FUN_1433490c0(void)

undefined8
FUN_1433490c0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
             float param_7,float param_8,float *param_9,float *param_10,float param_11)

{
  float fVar1;
  
  fVar1 = (param_8 - param_6) * (param_3 - param_1) - (param_7 - param_5) * (param_4 - param_2);
  if (ABS(fVar1) < param_11) {
    return 0;
  }
  fVar1 = ((param_2 - param_6) * (param_7 - param_5) - (param_1 - param_5) * (param_8 - param_6)) /
          fVar1;
  *param_9 = (param_3 - param_1) * fVar1 + param_1;
  *param_10 = (param_4 - param_2) * fVar1 + param_2;
  return 1;
}



// FUNCTION 1433491b0 FUN_1433491b0 body=112 status=ok
// SIG undefined FUN_1433491b0(void)

void FUN_1433491b0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x98) >> 4;
  if (*(ulonglong *)(param_1 + 0xa0) <= uVar3) {
    FUN_143329c80(param_1 + 0x90,uVar3);
  }
  uVar2 = (ulonglong)(*(uint *)(param_1 + 0x98) & 0xf);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + uVar3 * 8);
  *(ulonglong *)(lVar1 + uVar2 * 0xc) = CONCAT44(param_3,param_2);
  *(undefined4 *)(lVar1 + 8 + uVar2 * 0xc) = param_4;
  *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + 1;
  return;
}



// FUNCTION 143349220 FUN_143349220 body=139 status=ok
// SIG undefined FUN_143349220(void)

int FUN_143349220(longlong param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 local_10;
  
  uVar3 = *(ulonglong *)(param_1 + 0x70) >> 4;
  local_10 = CONCAT22(param_5,param_4);
  if (*(ulonglong *)(param_1 + 0x78) <= uVar3) {
    FUN_143329c80(param_1 + 0x68,uVar3);
  }
  uVar2 = (ulonglong)(*(uint *)(param_1 + 0x70) & 0xf);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar3 * 8);
  *(ulonglong *)(lVar1 + uVar2 * 0xc) = CONCAT44(param_3,param_2);
  *(undefined4 *)(lVar1 + 8 + uVar2 * 0xc) = local_10;
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
  return *(int *)(param_1 + 0x70) + -1;
}



// FUNCTION 1433492b0 FUN_1433492b0 body=599 status=ok
// SIG undefined FUN_1433492b0(void)

undefined8 * FUN_1433492b0(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b00e28;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 3) = 0x3f000000;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = param_2;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = param_2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = param_2;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_2;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xf149f2ca;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xf149f2ca;
  *(undefined4 *)(param_1 + 0x34) = 0x7149f2ca;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x35) = 0xf149f2ca;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0xf149f2ca;
  param_1[0x36] = param_2;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = param_2;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = param_2;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = param_2;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = param_2;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x4f] = param_2;
  return param_1;
}



// FUNCTION 143349510 SetToleranceParam body=12 status=ok
// SIG undefined SetToleranceParam(void)

void Scaleform::Render::Hairliner::SetToleranceParam(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  return;
}



// FUNCTION 143349700 FUN_143349700 body=117 status=ok
// SIG undefined FUN_143349700(void)

void FUN_143349700(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar3 = *(ulonglong *)(param_1 + 0x50) >> 4;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar1 >> 4) * 8);
  if (*(ulonglong *)(param_1 + 0x58) <= uVar3) {
    FUN_143324830(param_1 + 0x48,uVar3);
  }
  *(undefined8 *)
   (*(longlong *)(*(longlong *)(param_1 + 0x68) + uVar3 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x50) & 0xf) * 8) =
       *(undefined8 *)(lVar2 + (ulonglong)(uVar1 & 0xf) * 8);
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 143349780 FUN_143349780 body=140 status=ok
// SIG undefined FUN_143349780(void)

void FUN_143349780(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc0);
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 < uVar1 + 2) {
    if ((ulonglong)uVar1 < *(ulonglong *)(param_1 + 0x50)) {
      *(ulonglong *)(param_1 + 0x50) = (ulonglong)uVar1;
      return;
    }
  }
  else {
    uVar3 = *(ulonglong *)(param_1 + 0x28) >> 4;
    if (*(ulonglong *)(param_1 + 0x30) <= uVar3) {
      FUN_14334dc60(param_1 + 0x20,uVar3);
    }
    *(ulonglong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar3 * 8) +
     (ulonglong)(*(uint *)(param_1 + 0x28) & 0xf) * 8) = CONCAT44(uVar2 - 1,uVar1);
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  }
  return;
}



// FUNCTION 143349820 FUN_143349820 body=424 status=ok
// SIG undefined FUN_143349820(void)

void FUN_143349820(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0x7149f2ca;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0x7149f2ca;
  *(undefined4 *)(param_1 + 0x1a8) = 0xf149f2ca;
  *(undefined4 *)(param_1 + 0x1ac) = 0xf149f2ca;
  FUN_14334b640();
  if (1 < *(ulonglong *)(param_1 + 0x280)) {
    FUN_14334cdd0(param_1 + 0x278,0,*(undefined8 *)(param_1 + 0x280),&LAB_14334dda0);
    uVar8 = 1;
    uVar9 = 1;
    if (1 < *(ulonglong *)(param_1 + 0x280)) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x298);
        uVar5 = (ulonglong)((uint)(uVar8 - 1) & 0xf);
        lVar2 = *(longlong *)(lVar1 + (uVar8 - 1 >> 4) * 8);
        uVar4 = (ulonglong)((uint)uVar8 & 0xf);
        lVar3 = *(longlong *)(lVar1 + (uVar8 >> 4) * 8);
        if ((*(int *)(lVar2 + uVar5 * 0xc) != *(int *)(lVar3 + uVar4 * 0xc)) ||
           (*(int *)(lVar2 + 4 + uVar5 * 0xc) != *(int *)(lVar3 + 4 + uVar4 * 0xc))) {
          uVar5 = (ulonglong)((uint)uVar9 & 0xf);
          uVar6 = uVar9 >> 4;
          uVar9 = uVar9 + 1;
          lVar1 = *(longlong *)(lVar1 + uVar6 * 8);
          *(undefined8 *)(lVar1 + uVar5 * 0xc) = *(undefined8 *)(lVar3 + uVar4 * 0xc);
          *(undefined4 *)(lVar1 + 8 + uVar5 * 0xc) = *(undefined4 *)(lVar3 + 8 + uVar4 * 0xc);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ulonglong *)(param_1 + 0x280));
    }
    if (uVar9 < *(ulonglong *)(param_1 + 0x280)) {
      *(ulonglong *)(param_1 + 0x280) = uVar9;
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
      do {
        if (-1 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x298) + (uVar7 >> 4) * 8) +
                         (ulonglong)((uint)uVar7 & 0xf) * 0xc)) {
          FUN_14334c620(param_1,uVar7 & 0xffffffff);
          FUN_14334c230(param_1,*(uint *)(param_1 + 0x18) ^ 0x80000000);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulonglong *)(param_1 + 0x280));
    }
  }
  return;
}



// FUNCTION 143349b00 FUN_143349b00 body=651 status=ok
// SIG undefined FUN_143349b00(void)

Matrix2x4<float> *
FUN_143349b00(longlong param_1,Matrix2x4<float> *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar4 = 0;
  *(undefined8 *)param_2 = 0x3f800000;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0x3f800000;
  if ((*(float *)(param_1 + 0x1a8) <= *(float *)(param_1 + 0x1a0)) ||
     (*(float *)(param_1 + 0x1ac) <= *(float *)(param_1 + 0x1a4))) {
    *(undefined4 *)(param_1 + 0x1a0) = 0x7149f2ca;
    *(undefined4 *)(param_1 + 0x1a4) = 0x7149f2ca;
    *(undefined4 *)(param_1 + 0x1a8) = 0xf149f2ca;
    *(undefined4 *)(param_1 + 0x1ac) = 0xf149f2ca;
    if (*(ulonglong *)(param_1 + 0x78) != 0) {
      fVar9 = 1e+30;
      fVar6 = -1e+30;
      fVar8 = 1e+30;
      fVar7 = -1e+30;
      uVar5 = uVar4;
      do {
        uVar1 = *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x90) + (uVar5 >> 4) * 8) +
                 (ulonglong)((uint)uVar5 & 0xf) * 0xc);
        local_68 = (float)uVar1;
        if (local_68 < fVar9) {
          *(float *)(param_1 + 0x1a0) = local_68;
          fVar9 = local_68;
        }
        fStack_64 = (float)((ulonglong)uVar1 >> 0x20);
        if (fStack_64 < fVar8) {
          *(float *)(param_1 + 0x1a4) = fStack_64;
          fVar8 = fStack_64;
        }
        if (fVar6 < local_68) {
          *(float *)(param_1 + 0x1a8) = local_68;
          fVar6 = local_68;
        }
        if (fVar7 < fStack_64) {
          *(float *)(param_1 + 0x1ac) = fStack_64;
          fVar7 = fStack_64;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ulonglong *)(param_1 + 0x78));
    }
  }
  fVar6 = *(float *)(param_1 + 0x1a8);
  if (*(float *)(param_1 + 0x1a0) < fVar6) {
    fVar7 = *(float *)(param_1 + 0x1a4);
    if (fVar7 < *(float *)(param_1 + 0x1ac)) {
      local_60 = param_5;
      local_58 = param_5;
      local_54 = param_6;
      local_48 = CONCAT44(fVar7,*(float *)(param_1 + 0x1a0));
      uStack_40 = CONCAT44(fVar7,fVar6);
      local_38 = CONCAT44(*(float *)(param_1 + 0x1ac),fVar6);
      _local_68 = CONCAT44(param_4,param_3);
      local_5c = param_4;
      FUN_143326520(param_2,&local_48,&local_68);
      if (*(longlong *)(param_1 + 0x78) != 0) {
        do {
          uVar5 = (ulonglong)((uint)uVar4 & 0xf);
          uVar3 = uVar4 >> 4;
          uVar4 = uVar4 + 1;
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar3 * 8);
          fVar6 = *(float *)(lVar2 + uVar5 * 0xc);
          fVar7 = *(float *)(lVar2 + 4 + uVar5 * 0xc);
          *(float *)(lVar2 + uVar5 * 0xc) =
               fVar6 * *(float *)param_2 + fVar7 * *(float *)(param_2 + 4) +
               *(float *)(param_2 + 0xc);
          *(float *)(lVar2 + 4 + uVar5 * 0xc) =
               fVar6 * *(float *)(param_2 + 0x10) + fVar7 * *(float *)(param_2 + 0x14) +
               *(float *)(param_2 + 0x1c);
        } while (uVar4 < *(ulonglong *)(param_1 + 0x78));
      }
      local_48 = *(undefined8 *)param_2;
      uStack_40 = *(undefined8 *)(param_2 + 8);
      local_38 = *(undefined8 *)(param_2 + 0x10);
      uStack_30 = *(undefined8 *)(param_2 + 0x18);
      Scaleform::Render::Matrix2x4<float>::SetInverse(param_2,(Matrix2x4<float> *)&local_48);
    }
  }
  return param_2;
}



// FUNCTION 143349dd0 FUN_143349dd0 body=566 status=ok
// SIG undefined FUN_143349dd0(void)

uint FUN_143349dd0(longlong param_1,longlong param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (3 < param_4) {
    do {
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x78) <= (ulonglong)uVar1) {
        return uVar4;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar1 >> 4) * 8);
      *param_3 = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[1] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[2] = 0;
      param_3[3] = 1;
      *(ushort *)(param_3 + 4) = -(ushort)(*(int *)(lVar2 + 8 + uVar3 * 0xc) != 0) & 2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x78) <= (ulonglong)uVar1) {
        return uVar4 + 1;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[5] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[6] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[7] = 0;
      param_3[8] = 1;
      *(ushort *)(param_3 + 9) = -(ushort)(*(int *)(lVar2 + 8 + uVar3 * 0xc) != 0) & 2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x78) <= (ulonglong)uVar1) {
        return uVar4 + 2;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[10] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[0xb] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[0xc] = 0;
      param_3[0xd] = 1;
      *(ushort *)(param_3 + 0xe) = -(ushort)(*(int *)(lVar2 + 8 + uVar3 * 0xc) != 0) & 2;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x78) <= (ulonglong)uVar1) {
        return uVar4 + 3;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[0xf] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[0x10] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      param_3[0x11] = 0;
      param_3[0x12] = 1;
      uVar4 = uVar4 + 4;
      *(ushort *)(param_3 + 0x13) = -(ushort)(*(int *)(lVar2 + 8 + uVar3 * 0xc) != 0) & 2;
      param_3 = param_3 + 0x14;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    } while (uVar4 < param_4 - 3);
  }
  if (uVar4 < param_4) {
    param_3 = param_3 + 2;
    do {
      uVar1 = *(uint *)(param_2 + 0x14);
      if (*(ulonglong *)(param_1 + 0x78) <= (ulonglong)uVar1) {
        return uVar4;
      }
      uVar3 = (ulonglong)(uVar1 & 0xf);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar1 >> 4) * 8);
      param_3[-2] = *(undefined4 *)(lVar2 + uVar3 * 0xc);
      param_3[-1] = *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc);
      *param_3 = 0;
      param_3[1] = 1;
      uVar4 = uVar4 + 1;
      *(ushort *)(param_3 + 2) = -(ushort)(*(int *)(lVar2 + 8 + uVar3 * 0xc) != 0) & 2;
      param_3 = param_3 + 5;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    } while (uVar4 < param_4);
  }
  return uVar4;
}



// FUNCTION 14334a010 FUN_14334a010 body=117 status=ok
// SIG undefined FUN_14334a010(void)

void FUN_14334a010(longlong param_1,undefined8 param_2,undefined2 *param_3,int param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_5 != 0) {
    do {
      uVar1 = uVar5 + param_4;
      uVar5 = uVar5 + 1;
      uVar4 = (ulonglong)(uVar1 & 0xf);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)(uVar1 >> 4) * 8);
      lVar2 = lVar3 + uVar4 * 0xc;
      *param_3 = *(undefined2 *)(lVar3 + uVar4 * 0xc);
      param_3[1] = *(undefined2 *)(lVar2 + 4);
      param_3[2] = *(undefined2 *)(lVar2 + 8);
      param_3 = param_3 + 3;
    } while (uVar5 < param_5);
  }
  return;
}



// FUNCTION 14334a090 FUN_14334a090 body=1004 status=ok
// SIG undefined FUN_14334a090(void)

void FUN_14334a090(longlong param_1,uint *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  float local_58;
  float fStack_54;
  
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar10 = *(ulonglong *)(param_1 + 0x148) >> 4;
  fVar2 = *(float *)(*(longlong *)
                      (*(longlong *)(param_1 + 0x68) + ((ulonglong)(longlong)(int)uVar5 >> 4) * 8) +
                     4 + (ulonglong)(uVar5 & 0xf) * 8);
  if (*(ulonglong *)(param_1 + 0x150) <= uVar10) {
    FUN_143343dc0(param_1 + 0x140,uVar10);
  }
  *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + uVar10 * 8) +
           (ulonglong)(*(uint *)(param_1 + 0x148) & 0xf) * 4) = uVar5;
  *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + 1;
  uVar12 = uVar5;
  while (uVar13 = uVar12 + 1, uVar9 = uVar5, uVar13 <= uVar6) {
    uVar10 = (ulonglong)(uVar13 & 0xf);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar13 >> 4) * 8);
    fVar3 = *(float *)(lVar7 + 4 + uVar10 * 8);
    if (fVar3 == fVar2) {
      fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar12 >> 4) * 8)
                        + (ulonglong)(uVar12 & 0xf) * 8);
      fStack_54 = *(float *)(lVar7 + uVar10 * 8);
      uVar12 = uVar13;
      if (fVar4 != fStack_54) {
        local_58 = fVar4;
        if (fStack_54 < fVar4) {
          local_58 = fStack_54;
          fStack_54 = fVar4;
        }
        uVar10 = *(ulonglong *)(param_1 + 0x170) >> 2;
        if (*(ulonglong *)(param_1 + 0x178) <= uVar10) {
          FUN_14334db20(param_1 + 0x168,uVar10);
        }
        uVar11 = (ulonglong)(*(uint *)(param_1 + 0x170) & 3);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x188) + uVar10 * 8);
        pfVar1 = (float *)(lVar7 + uVar11 * 0x14);
        *pfVar1 = local_58;
        pfVar1[1] = fStack_54;
        pfVar1[2] = fVar3;
        pfVar1[3] = -NAN;
        *(undefined4 *)(lVar7 + 0x10 + uVar11 * 0x14) = 0xffffffff;
        *(longlong *)(param_1 + 0x170) = *(longlong *)(param_1 + 0x170) + 1;
      }
    }
    else {
      uVar11 = *(ulonglong *)(param_1 + 0x148) >> 4;
      if (*(ulonglong *)(param_1 + 0x150) <= uVar11) {
        FUN_143343dc0(param_1 + 0x140,uVar11);
      }
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + uVar11 * 8) +
               (ulonglong)(*(uint *)(param_1 + 0x148) & 0xf) * 4) = uVar13;
      *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + 1;
      fVar2 = *(float *)(lVar7 + 4 + uVar10 * 8);
      uVar12 = uVar13;
    }
  }
  for (; uVar12 = uVar6, (int)uVar9 < (int)uVar6; uVar9 = uVar9 + 1) {
    lVar7 = *(longlong *)(param_1 + 0x68);
    fVar2 = *(float *)(*(longlong *)(lVar7 + ((ulonglong)(longlong)(int)uVar9 >> 4) * 8) + 4 +
                      (ulonglong)(uVar9 & 0xf) * 8);
    if ((int)uVar5 < (int)uVar9) {
      if (fVar2 <= *(float *)(*(longlong *)
                               (lVar7 + ((ulonglong)(longlong)(int)(uVar9 - 1) >> 4) * 8) + 4 +
                             (ulonglong)(uVar9 - 1 & 0xf) * 8)) {
        fVar3 = *(float *)(*(longlong *)(lVar7 + ((ulonglong)(longlong)(int)(uVar9 + 1) >> 4) * 8) +
                           4 + (ulonglong)(uVar9 + 1 & 0xf) * 8);
        goto joined_r0x00014334a2ee;
      }
    }
    else {
      fVar3 = *(float *)(*(longlong *)(lVar7 + ((ulonglong)(longlong)(int)(uVar9 + 1) >> 4) * 8) + 4
                        + (ulonglong)(uVar9 + 1 & 0xf) * 8);
joined_r0x00014334a2ee:
      if (fVar2 < fVar3) {
        uVar12 = uVar9 + 1;
        iVar8 = 1;
        uVar13 = uVar12;
        while ((uVar13 = uVar13 + 1, (int)uVar12 < (int)uVar6 &&
               (*(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x68) +
                            ((ulonglong)(longlong)(int)uVar12 >> 4) * 8) + 4 +
                          (ulonglong)(uVar12 & 0xf) * 8) <
                *(float *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x68) +
                            ((ulonglong)(longlong)(int)uVar13 >> 4) * 8) + 4 +
                          (ulonglong)(uVar13 & 0xf) * 8)))) {
          iVar8 = iVar8 + 1;
          uVar12 = uVar12 + 1;
        }
        FUN_14334a490(param_1,uVar9,iVar8,1);
        uVar9 = (uVar9 - 1) + iVar8;
      }
    }
  }
  do {
    if ((int)uVar12 <= (int)uVar5) {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x68);
    uVar9 = uVar12 - 1;
    fVar2 = *(float *)(*(longlong *)(lVar7 + ((ulonglong)(longlong)(int)uVar12 >> 4) * 8) + 4 +
                      (ulonglong)(uVar12 & 0xf) * 8);
    fVar3 = *(float *)(*(longlong *)(lVar7 + ((ulonglong)(longlong)(int)uVar9 >> 4) * 8) + 4 +
                      (ulonglong)(uVar9 & 0xf) * 8);
    if ((int)uVar12 < (int)uVar6) {
      if ((fVar2 < fVar3) &&
         (fVar2 <= *(float *)(*(longlong *)
                               (lVar7 + ((ulonglong)(longlong)(int)(uVar12 + 1) >> 4) * 8) + 4 +
                             (ulonglong)(uVar12 + 1 & 0xf) * 8))) goto LAB_14334a3f3;
    }
    else if (fVar2 < fVar3) {
LAB_14334a3f3:
      iVar8 = 1;
      uVar13 = uVar9;
      while ((uVar13 = uVar13 - 1, (int)uVar5 < (int)uVar9 &&
             (*(float *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x68) +
                          ((ulonglong)(longlong)(int)uVar9 >> 4) * 8) + 4 +
                        (ulonglong)(uVar9 & 0xf) * 8) <
              *(float *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x68) +
                          ((ulonglong)(longlong)(int)uVar13 >> 4) * 8) + 4 +
                        (ulonglong)(uVar13 & 0xf) * 8)))) {
        iVar8 = iVar8 + 1;
        uVar9 = uVar9 - 1;
      }
      FUN_14334a490(param_1,uVar12,iVar8,0xffffffff);
      uVar12 = uVar12 + (1 - iVar8);
    }
    uVar12 = uVar12 - 1;
  } while( true );
}



// FUNCTION 14334a490 FUN_14334a490 body=574 status=ok
// SIG undefined FUN_14334a490(void)

void FUN_14334a490(longlong param_1,uint param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 local_48;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined4 uStack_2c;
  
  uVar15 = 0;
  uVar10 = *(uint *)(param_1 + 0xd0);
  if (param_3 != 0) {
    do {
      uVar17 = param_2 + param_4;
      uVar14 = *(ulonglong *)(param_1 + 0xd0) >> 4;
      local_48 = CONCAT44(uVar17,param_2);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(param_2 >> 4) * 8);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar17 >> 4) * 8);
      fVar4 = *(float *)(lVar12 + (ulonglong)(uVar17 & 0xf) * 8);
      fVar5 = *(float *)(lVar12 + 4 + (ulonglong)(uVar17 & 0xf) * 8);
      fVar6 = *(float *)(lVar11 + (ulonglong)(param_2 & 0xf) * 8);
      fVar7 = *(float *)(lVar11 + 4 + (ulonglong)(param_2 & 0xf) * 8);
      if (*(ulonglong *)(param_1 + 0xd8) <= uVar14) {
        FUN_14334dd00(param_1 + 200,uVar14);
      }
      uVar16 = (ulonglong)(*(uint *)(param_1 + 0xd0) & 0xf);
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar14 * 8);
      puVar1 = (undefined8 *)(lVar11 + uVar16 * 0x18);
      *puVar1 = local_48;
      puVar1[1] = CONCAT44(uStack_3c,(fVar4 - fVar6) / (fVar5 - fVar7));
      *(undefined8 *)(lVar11 + 0x10 + uVar16 * 0x18) = 0;
      *(longlong *)(param_1 + 0xd0) = *(longlong *)(param_1 + 0xd0) + 1;
      if (uVar15 != 0) {
        uVar14 = *(longlong *)(param_1 + 0xd0) - 1;
        uVar16 = *(longlong *)(param_1 + 0xd0) - 2;
        *(ulonglong *)
         (*(longlong *)(*(longlong *)(param_1 + 0xe8) + (uVar16 >> 4) * 8) + 0x10 +
         (ulonglong)((uint)uVar16 & 0xf) * 0x18) =
             *(longlong *)(*(longlong *)(param_1 + 0xe8) + (uVar14 >> 4) * 8) +
             (ulonglong)((uint)uVar14 & 0xf) * 0x18;
      }
      uVar15 = uVar15 + 1;
      param_2 = uVar17;
    } while (uVar15 < param_3);
  }
  uVar14 = (ulonglong)(uVar10 & 0xf);
  uVar16 = *(ulonglong *)(param_1 + 0xf8) >> 4;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)(uVar10 >> 4) * 8);
  uVar10 = *(uint *)(lVar11 + uVar14 * 0x18);
  lVar11 = lVar11 + uVar14 * 0x18;
  local_38 = (ulonglong)*(uint *)(lVar11 + 8);
  uVar8 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar10 >> 4) * 8) + 4 +
           (ulonglong)(uVar10 & 0xf) * 8);
  uVar9 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar10 >> 4) * 8) +
           (ulonglong)(uVar10 & 0xf) * 8);
  if (*(ulonglong *)(param_1 + 0x100) <= uVar16) {
    FUN_14334dbc0(param_1 + 0xf0,uVar16);
  }
  lVar13 = (ulonglong)(*(uint *)(param_1 + 0xf8) & 0xf) * 0x20;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x110) + uVar16 * 8);
  plVar2 = (longlong *)(lVar12 + lVar13);
  *plVar2 = lVar11;
  plVar2[1] = CONCAT44(uVar9,uVar8);
  puVar3 = (ulonglong *)(lVar12 + 0x10 + lVar13);
  *puVar3 = local_38;
  puVar3[1] = CONCAT44(uStack_2c,0xffffffff);
  *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 1;
  return;
}



// FUNCTION 14334a6e0 FUN_14334a6e0 body=2326 status=ok
// SIG undefined FUN_14334a6e0(void)

byte FUN_14334a6e0(longlong param_1,float param_2,float param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  byte bVar20;
  bool bVar21;
  float fVar22;
  ulonglong local_a8;
  float local_88;
  undefined4 uStack_84;
  
  uVar14 = 0;
  bVar20 = param_5 != 0;
  uVar15 = (ulonglong)param_4;
  *(undefined8 *)(param_1 + 0x208) = 0;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    do {
      uVar11 = (uint)uVar14;
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + (uVar14 >> 4) * 8) +
                (ulonglong)(uVar11 & 0xf) * 8);
      *(uint *)((longlong)puVar5 + 0x14) = *(uint *)((longlong)puVar5 + 0x14) & 0xfffffffd;
      puVar6 = (uint *)*puVar5;
      uVar13 = puVar6[1];
      if (*(float *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar13 >> 4) * 8) + 4
                    + (ulonglong)(uVar13 & 0xf) * 8) == param_2) {
        if (*(longlong *)(puVar6 + 4) == 0) {
          *(uint *)((longlong)puVar5 + 0x14) = *(uint *)((longlong)puVar5 + 0x14) | 1;
          bVar20 = bVar20 | 2;
          *(uint *)((longlong)puVar5 + 0x14) = *(uint *)((longlong)puVar5 + 0x14) | 2;
          *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(puVar5 + 2);
        }
        else {
          puVar6 = *(uint **)(puVar6 + 4);
          *puVar5 = puVar6;
          uVar18 = (ulonglong)(puVar6[1] & 0xf);
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(puVar6[1] >> 4) * 8);
          *(undefined4 *)((longlong)puVar5 + 0xc) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(*puVar6 >> 4) * 8) +
                (ulonglong)(*puVar6 & 0xf) * 8);
          if (*(float *)(lVar16 + 4 + uVar18 * 8) == param_3) {
            fVar22 = *(float *)(lVar16 + uVar18 * 8);
          }
          else {
            uVar13 = *(uint *)*puVar5;
            uVar18 = (ulonglong)(uVar13 & 0xf);
            lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar13 >> 4) * 8);
            fVar22 = (param_3 - *(float *)(lVar16 + 4 + uVar18 * 8)) * (float)((uint *)*puVar5)[2] +
                     *(float *)(lVar16 + uVar18 * 8);
          }
          *(float *)(puVar5 + 2) = fVar22;
          uVar18 = *(ulonglong *)(param_1 + 0x208) >> 4;
          if (*(ulonglong *)(param_1 + 0x210) <= uVar18) {
            FUN_143343dc0(param_1 + 0x200,uVar18);
          }
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x220) + uVar18 * 8) +
                   (ulonglong)(*(uint *)(param_1 + 0x208) & 0xf) * 4) = uVar11;
          *(longlong *)(param_1 + 0x208) = *(longlong *)(param_1 + 0x208) + 1;
          *(uint *)((longlong)puVar5 + 0x14) = *(uint *)((longlong)puVar5 + 0x14) | 2;
        }
      }
      else {
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar13 >> 4) * 8);
        *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(puVar5 + 2);
        if (*(float *)(lVar16 + 4 + (ulonglong)(uVar13 & 0xf) * 8) == param_3) {
          fVar22 = *(float *)(lVar16 + (ulonglong)(uVar13 & 0xf) * 8);
        }
        else {
          uVar18 = (ulonglong)(*puVar6 & 0xf);
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(*puVar6 >> 4) * 8);
          fVar22 = (param_3 - *(float *)(lVar16 + 4 + uVar18 * 8)) * (float)puVar6[2] +
                   *(float *)(lVar16 + uVar18 * 8);
        }
        *(float *)(puVar5 + 2) = fVar22;
        uVar18 = *(ulonglong *)(param_1 + 0x208) >> 4;
        if (*(ulonglong *)(param_1 + 0x210) <= uVar18) {
          FUN_143343dc0(param_1 + 0x200,uVar18);
        }
        *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x220) + uVar18 * 8) +
                 (ulonglong)(*(uint *)(param_1 + 0x208) & 0xf) * 4) = uVar11;
        *(longlong *)(param_1 + 0x208) = *(longlong *)(param_1 + 0x208) + 1;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(ulonglong *)(param_1 + 0x1b8));
  }
  if (param_5 != 0) {
    uVar14 = (ulonglong)param_5;
    do {
      puVar5 = *(undefined8 **)
                (*(longlong *)(*(longlong *)(param_1 + 0x138) + (uVar15 >> 4) * 8) +
                (ulonglong)((uint)uVar15 & 0xf) * 8);
      puVar6 = (uint *)*puVar5;
      uVar13 = *puVar6;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar13 >> 4) * 8);
      *(undefined4 *)((longlong)puVar5 + 0xc) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar13 >> 4) * 8) +
            (ulonglong)(uVar13 & 0xf) * 8);
      *(undefined4 *)((longlong)puVar5 + 0x14) = 2;
      if (*(float *)(lVar16 + 4 + (ulonglong)(uVar13 & 0xf) * 8) == param_3) {
        fVar22 = *(float *)(lVar16 + (ulonglong)(uVar13 & 0xf) * 8);
      }
      else {
        uVar18 = (ulonglong)(*puVar6 & 0xf);
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(*puVar6 >> 4) * 8);
        fVar22 = (param_3 - *(float *)(lVar16 + 4 + uVar18 * 8)) * (float)puVar6[2] +
                 *(float *)(lVar16 + uVar18 * 8);
      }
      *(float *)(puVar5 + 2) = fVar22;
      uVar18 = *(ulonglong *)(param_1 + 0x1b8) >> 4;
      if (*(ulonglong *)(param_1 + 0x1c0) <= uVar18) {
        FUN_143343e60(param_1 + 0x1b0,uVar18);
      }
      uVar15 = uVar15 + 1;
      *(undefined8 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + uVar18 * 8) +
       (ulonglong)(*(uint *)(param_1 + 0x1b8) & 0xf) * 8) = 0;
      *(longlong *)(param_1 + 0x1b8) = *(longlong *)(param_1 + 0x1b8) + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    lVar16 = *(longlong *)(param_1 + 0x1b8);
    uVar13 = param_4 + param_5;
    uVar15 = lVar16 - (ulonglong)param_5;
    uVar14 = uVar15 - 1;
    do {
      if (uVar15 == 0) {
LAB_14334aac9:
        uVar13 = uVar13 - 1;
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + (lVar16 - 1U >> 4) * 8);
        uVar10 = *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar13 >> 4) * 8) +
                  (ulonglong)(uVar13 & 0xf) * 8);
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x1d0);
        lVar12 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x138) + (ulonglong)(uVar13 - 1 >> 4) * 8)
                  + (ulonglong)(uVar13 - 1 & 0xf) * 8);
        fVar22 = *(float *)(lVar12 + 0xc);
        lVar8 = *(longlong *)
                 (*(longlong *)(lVar7 + (uVar14 >> 4) * 8) + (ulonglong)((uint)uVar14 & 0xf) * 8);
        fVar3 = *(float *)(lVar8 + 0xc);
        if (fVar3 == fVar22) {
          fVar22 = *(float *)(lVar12 + 0x10);
          pfVar1 = (float *)(lVar8 + 0x10);
          bVar21 = fVar22 == *pfVar1;
          bVar19 = fVar22 < *pfVar1;
        }
        else {
          bVar21 = fVar22 == fVar3;
          bVar19 = fVar22 < fVar3;
        }
        if (!bVar19 && !bVar21) goto LAB_14334aac9;
        uVar15 = uVar15 - 1;
        uVar14 = uVar14 - 1;
        lVar12 = *(longlong *)(lVar7 + (lVar16 - 1U >> 4) * 8);
        uVar10 = *(undefined8 *)
                  (*(longlong *)(lVar7 + (uVar15 >> 4) * 8) + (ulonglong)((uint)uVar15 & 0xf) * 8);
      }
      lVar16 = lVar16 + -1;
      *(undefined8 *)(lVar12 + (ulonglong)((uint)lVar16 & 0xf) * 8) = uVar10;
    } while (uVar13 != param_4);
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  if ((bVar20 & 1) != 0) {
    uVar14 = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      do {
        if ((*(byte *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + (uVar14 >> 4) * 8) +
                        (ulonglong)((uint)uVar14 & 0xf) * 8) + 0x14) & 1) == 0) {
          uVar15 = *(ulonglong *)(param_1 + 0x208) >> 4;
          if (*(ulonglong *)(param_1 + 0x210) <= uVar15) {
            FUN_143343dc0(param_1 + 0x200,uVar15);
          }
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x220) + uVar15 * 8) +
                   (ulonglong)(*(uint *)(param_1 + 0x208) & 0xf) * 4) = (uint)uVar14;
          *(longlong *)(param_1 + 0x208) = *(longlong *)(param_1 + 0x208) + 1;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(ulonglong *)(param_1 + 0x1b8));
    }
  }
  local_a8 = 1;
  if (1 < *(ulonglong *)(param_1 + 0x208)) {
    do {
      uVar13 = (uint)local_a8;
      uVar11 = uVar13;
      while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
        uVar17 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x220) +
                            ((ulonglong)(longlong)(int)uVar11 >> 4) * 8) +
                          (ulonglong)(uVar11 & 0xf) * 4);
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar17 >> 4) * 8) +
                  (ulonglong)(uVar17 & 0xf) * 8);
        uVar17 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x220) +
                            ((ulonglong)(longlong)(int)uVar13 >> 4) * 8) +
                          (ulonglong)(uVar13 & 0xf) * 4);
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar17 >> 4) * 8) +
                 (ulonglong)(uVar17 & 0xf) * 8);
        if (*(float *)(lVar16 + 0x10) <= *(float *)(lVar7 + 0x10)) break;
        if (*(longlong *)(param_1 + 0x230) == 0) {
          uVar14 = 0;
          *(undefined8 *)(param_1 + 0x1e0) = 0;
          if (*(longlong *)(param_1 + 0x1b8) != 0) {
            do {
              uVar17 = (uint)uVar14;
              uVar15 = *(ulonglong *)(param_1 + 0x1e0) >> 4;
              lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + (uVar14 >> 4) * 8);
              if (*(ulonglong *)(param_1 + 0x1e8) <= uVar15) {
                if (*(ulonglong *)(param_1 + 0x1f0) <= uVar15) {
                  if (*(longlong *)(param_1 + 0x1f8) == 0) {
                    *(undefined8 *)(param_1 + 0x1f0) = 8;
                    uVar10 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x1d8),0x40);
                    *(undefined8 *)(param_1 + 0x1f8) = uVar10;
                  }
                  else {
                    pvVar9 = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x1d8),
                                                   *(ulonglong *)(param_1 + 0x1f0) << 4);
                    _guard_xfg_dispatch_icall_nop
                              (pvVar9,*(void **)(param_1 + 0x1f8),
                               *(longlong *)(param_1 + 0x1e8) << 3);
                    *(void **)(param_1 + 0x1f8) = pvVar9;
                    *(longlong *)(param_1 + 0x1f0) = *(longlong *)(param_1 + 0x1f0) * 2;
                  }
                }
                uVar10 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x1d8),0x80);
                *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + uVar15 * 8) = uVar10;
                *(longlong *)(param_1 + 0x1e8) = *(longlong *)(param_1 + 0x1e8) + 1;
              }
              uVar14 = uVar14 + 1;
              *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar15 * 8) +
               (ulonglong)(*(uint *)(param_1 + 0x1e0) & 0xf) * 8) =
                   *(undefined8 *)(lVar12 + (ulonglong)(uVar17 & 0xf) * 8);
              *(longlong *)(param_1 + 0x1e0) = *(longlong *)(param_1 + 0x1e0) + 1;
            } while (uVar14 < *(ulonglong *)(param_1 + 0x1b8));
          }
        }
        fVar22 = ((*(float *)(lVar7 + 0x10) - *(float *)(lVar7 + 0xc)) - *(float *)(lVar16 + 0x10))
                 + *(float *)(lVar16 + 0xc);
        local_88 = param_2;
        if (fVar22 != 0.0) {
          local_88 = ((*(float *)(lVar16 + 0xc) - *(float *)(lVar7 + 0xc)) * (param_3 - param_2)) /
                     fVar22 + param_2;
        }
        if (local_88 < param_2) {
          local_88 = param_2;
        }
        if (param_3 < local_88) {
          local_88 = param_3;
        }
        uVar14 = *(ulonglong *)(param_1 + 0x230) >> 4;
        if (*(ulonglong *)(param_1 + 0x238) <= uVar14) {
          if (*(ulonglong *)(param_1 + 0x240) <= uVar14) {
            if (*(longlong *)(param_1 + 0x248) == 0) {
              *(undefined8 *)(param_1 + 0x240) = 4;
              uVar10 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x228),0x20);
              *(undefined8 *)(param_1 + 0x248) = uVar10;
            }
            else {
              pvVar9 = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x228),
                                             *(ulonglong *)(param_1 + 0x240) << 4);
              _guard_xfg_dispatch_icall_nop
                        (pvVar9,*(void **)(param_1 + 0x248),*(longlong *)(param_1 + 0x238) << 3);
              *(void **)(param_1 + 0x248) = pvVar9;
              *(longlong *)(param_1 + 0x240) = *(longlong *)(param_1 + 0x240) * 2;
            }
          }
          uVar10 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x228),0x180);
          *(undefined8 *)(*(longlong *)(param_1 + 0x248) + uVar14 * 8) = uVar10;
          *(longlong *)(param_1 + 0x238) = *(longlong *)(param_1 + 0x238) + 1;
        }
        uVar15 = (ulonglong)(*(uint *)(param_1 + 0x230) & 0xf);
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x248) + uVar14 * 8);
        plVar2 = (longlong *)(lVar12 + uVar15 * 0x18);
        *plVar2 = lVar16;
        plVar2[1] = lVar7;
        *(ulonglong *)(lVar12 + 0x10 + uVar15 * 0x18) = CONCAT44(uStack_84,local_88);
        *(longlong *)(param_1 + 0x230) = *(longlong *)(param_1 + 0x230) + 1;
        uVar17 = *(uint *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x220) +
                            ((ulonglong)(longlong)(int)uVar13 >> 4) * 8) +
                          (ulonglong)(uVar13 & 0xf) * 4);
        uVar4 = *(uint *)(*(longlong *)
                           (*(longlong *)(param_1 + 0x220) +
                           ((ulonglong)(longlong)(int)uVar11 >> 4) * 8) +
                         (ulonglong)(uVar11 & 0xf) * 4);
        uVar15 = (ulonglong)(uVar17 & 0xf);
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar17 >> 4) * 8);
        uVar14 = (ulonglong)(uVar4 & 0xf);
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar4 >> 4) * 8);
        uVar10 = *(undefined8 *)(lVar7 + uVar14 * 8);
        *(undefined8 *)(lVar7 + uVar14 * 8) = *(undefined8 *)(lVar16 + uVar15 * 8);
        *(undefined8 *)(lVar16 + uVar15 * 8) = uVar10;
        uVar13 = uVar13 - 1;
      }
      local_a8 = local_a8 + 1;
    } while (local_a8 < *(ulonglong *)(param_1 + 0x208));
  }
  return bVar20;
}



// FUNCTION 14334b000 FUN_14334b000 body=568 status=ok
// SIG undefined FUN_14334b000(void)

uint FUN_14334b000(longlong param_1,undefined8 *param_2,uint param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  float fVar13;
  float local_res8;
  float local_resc;
  float local_58;
  float local_54;
  
  bVar7 = false;
  uVar12 = 0;
  fVar13 = 0.0;
  if (*(int *)(param_1 + 0x194) != 0) {
    do {
      uVar8 = *(int *)(param_1 + 400) + uVar12;
      uVar10 = (ulonglong)(uVar8 & 3);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x188) + (ulonglong)(uVar8 >> 2) * 8);
      if (param_3 == 0xffffffff) {
LAB_14334b0f4:
        if (!bVar7) {
          puVar3 = (uint *)*param_2;
          lVar4 = *(longlong *)(param_1 + 0x68);
          uVar11 = (ulonglong)(*puVar3 & 0xf);
          lVar5 = *(longlong *)(lVar4 + (ulonglong)(*puVar3 >> 4) * 8);
          uVar9 = (ulonglong)(puVar3[1] & 0xf);
          lVar6 = *(longlong *)(lVar4 + (ulonglong)(puVar3[1] >> 4) * 8);
          if (param_4 == *(float *)(lVar5 + 4 + uVar11 * 8)) {
            fVar13 = *(float *)(lVar5 + uVar11 * 8);
          }
          else if (param_4 == *(float *)(lVar6 + 4 + uVar9 * 8)) {
            fVar13 = *(float *)(lVar6 + uVar9 * 8);
          }
          else {
            uVar9 = (ulonglong)(*puVar3 & 0xf);
            lVar4 = *(longlong *)(lVar4 + (ulonglong)(*puVar3 >> 4) * 8);
            fVar13 = (param_4 - *(float *)(lVar4 + 4 + uVar9 * 8)) * (float)puVar3[2] +
                     *(float *)(lVar4 + uVar9 * 8);
          }
          bVar7 = true;
        }
        fVar1 = *(float *)(lVar2 + uVar10 * 0x14);
        if (fVar13 == fVar1) {
          local_res8 = fVar13;
          local_resc = param_4;
          if (param_3 == 0xffffffff) {
            param_3 = FUN_14334d8b0(param_1,&local_res8);
          }
          *(uint *)(lVar2 + 0x10 + uVar10 * 0x14) = param_3;
        }
        else if ((fVar1 <= fVar13) && (fVar13 <= *(float *)(lVar2 + 4 + uVar10 * 0x14))) {
          local_58 = fVar13;
          local_54 = param_4;
          if (param_3 == 0xffffffff) {
            param_3 = FUN_14334d8b0(param_1,&local_58);
          }
          uVar8 = *(uint *)(lVar2 + 0x10 + uVar10 * 0x14);
          if ((uVar8 != 0xffffffff) && (uVar8 != param_3)) goto LAB_14334b1e5;
          goto LAB_14334b1f0;
        }
      }
      else {
        uVar8 = *(uint *)(lVar2 + 0x10 + uVar10 * 0x14);
        if ((uVar8 == 0xffffffff) &&
           (*(float *)(lVar2 + uVar10 * 0x14) ==
            *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(param_3 >> 4) * 8)
                      + (ulonglong)(param_3 & 0xf) * 0xc))) {
          *(uint *)(lVar2 + 0x10 + uVar10 * 0x14) = param_3;
        }
        else {
          if (*(float *)(lVar2 + 4 + uVar10 * 0x14) !=
              *(float *)(*(longlong *)
                          (*(longlong *)(param_1 + 0x90) + (ulonglong)(param_3 >> 4) * 8) +
                        (ulonglong)(param_3 & 0xf) * 0xc)) goto LAB_14334b0f4;
          if ((uVar8 != 0xffffffff) && (uVar8 != param_3)) {
LAB_14334b1e5:
            FUN_14334ddc0(param_1,uVar8,param_3);
          }
LAB_14334b1f0:
          *(uint *)(lVar2 + 0x10 + uVar10 * 0x14) = param_3;
          if (*(int *)(lVar2 + 0xc + uVar10 * 0x14) != -1) goto LAB_14334b1ff;
        }
        *(uint *)(lVar2 + 0xc + uVar10 * 0x14) = param_3;
      }
LAB_14334b1ff:
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_1 + 0x194));
  }
  return param_3;
}



// FUNCTION 14334b240 FUN_14334b240 body=1003 status=ok
// SIG undefined FUN_14334b240(void)

void FUN_14334b240(longlong param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  uVar9 = uVar11;
  if (*(longlong *)(param_2 + 8) != 0) {
    do {
      lVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x20) + (uVar9 >> 4) * 8) +
               (ulonglong)((uint)uVar9 & 0xf) * 8);
      iVar7 = FUN_14334d970(param_1,lVar5,param_3,*(byte *)(lVar5 + 0x14) & 1);
      if (*(int *)(param_1 + 0x194) != 0) {
        iVar7 = FUN_14334b000(param_1,lVar5,iVar7,param_3);
      }
      if (iVar7 != -1) {
        iVar3 = *(int *)(lVar5 + 0x18);
        if ((iVar3 != -1) && (iVar3 != iVar7)) {
          FUN_14334ddc0(param_1,iVar3,iVar7);
        }
        *(int *)(lVar5 + 0x18) = iVar7;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(ulonglong *)(param_2 + 8));
  }
  if (*(int *)(param_1 + 0x194) != 0) {
    do {
      uVar9 = *(uint *)(param_1 + 400) + uVar11;
      uVar10 = (ulonglong)((uint)uVar9 & 3);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x188) + (uVar9 >> 2) * 8);
      uVar4 = *(uint *)(lVar5 + 0xc + uVar10 * 0x14);
      if ((uVar4 != 0xffffffff) &&
         (fVar1 = *(float *)(lVar5 + uVar10 * 0x14),
         *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar4 >> 4) * 8) +
                   (ulonglong)(uVar4 & 0xf) * 0xc) != fVar1)) {
        if ((param_3 != *(float *)(param_1 + 0x19c)) || (fVar1 != *(float *)(param_1 + 0x198))) {
          *(float *)(param_1 + 0x198) = fVar1;
          *(float *)(param_1 + 0x19c) = param_3;
          uVar9 = *(ulonglong *)(param_1 + 0x78) >> 4;
          if (*(ulonglong *)(param_1 + 0x80) <= uVar9) {
            FUN_143329c80(param_1 + 0x70,uVar9);
          }
          uVar8 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar9 * 8);
          *(ulonglong *)(lVar6 + uVar8 * 0xc) = CONCAT44(param_3,fVar1);
          *(undefined4 *)(lVar6 + 8 + uVar8 * 0xc) = 1;
          *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
        }
        FUN_14334ddc0(param_1,*(undefined4 *)(lVar5 + 0xc + uVar10 * 0x14),
                      *(int *)(param_1 + 0x78) + -1);
      }
      uVar4 = *(uint *)(lVar5 + 0x10 + uVar10 * 0x14);
      if ((uVar4 != 0xffffffff) &&
         (fVar1 = *(float *)(lVar5 + 4 + uVar10 * 0x14),
         *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar4 >> 4) * 8) +
                   (ulonglong)(uVar4 & 0xf) * 0xc) != fVar1)) {
        if ((param_3 != *(float *)(param_1 + 0x19c)) || (fVar1 != *(float *)(param_1 + 0x198))) {
          *(float *)(param_1 + 0x198) = fVar1;
          *(float *)(param_1 + 0x19c) = param_3;
          uVar9 = *(ulonglong *)(param_1 + 0x78) >> 4;
          if (*(ulonglong *)(param_1 + 0x80) <= uVar9) {
            FUN_143329c80(param_1 + 0x70,uVar9);
          }
          uVar8 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar9 * 8);
          *(ulonglong *)(lVar6 + uVar8 * 0xc) = CONCAT44(param_3,fVar1);
          *(undefined4 *)(lVar6 + 8 + uVar8 * 0xc) = 1;
          *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
        }
        FUN_14334ddc0(param_1,*(undefined4 *)(lVar5 + 0x10 + uVar10 * 0x14),
                      *(int *)(param_1 + 0x78) + -1);
      }
      if ((*(int *)(lVar5 + 0xc + uVar10 * 0x14) == -1) &&
         (*(int *)(lVar5 + 0x10 + uVar10 * 0x14) == -1)) {
        fVar1 = *(float *)(lVar5 + uVar10 * 0x14);
        fVar2 = *(float *)(lVar5 + 4 + uVar10 * 0x14);
        if ((param_3 != *(float *)(param_1 + 0x19c)) || (fVar2 != *(float *)(param_1 + 0x198))) {
          *(float *)(param_1 + 0x198) = fVar2;
          *(float *)(param_1 + 0x19c) = param_3;
          uVar9 = *(ulonglong *)(param_1 + 0x78) >> 4;
          if (*(ulonglong *)(param_1 + 0x80) <= uVar9) {
            FUN_143329c80(param_1 + 0x70,uVar9);
          }
          uVar10 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar9 * 8);
          *(ulonglong *)(lVar5 + uVar10 * 0xc) = CONCAT44(param_3,fVar2);
          *(undefined4 *)(lVar5 + 8 + uVar10 * 0xc) = 1;
          *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
        }
        uVar9 = *(ulonglong *)(param_1 + 0x78);
        if ((param_3 != *(float *)(param_1 + 0x19c)) || (fVar1 != *(float *)(param_1 + 0x198))) {
          *(float *)(param_1 + 0x198) = fVar1;
          uVar10 = uVar9 >> 4;
          *(float *)(param_1 + 0x19c) = param_3;
          if (*(ulonglong *)(param_1 + 0x80) <= uVar10) {
            FUN_143329c80(param_1 + 0x70,uVar10);
          }
          uVar8 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar10 * 8);
          *(ulonglong *)(lVar5 + uVar8 * 0xc) = CONCAT44(param_3,fVar1);
          *(undefined4 *)(lVar5 + 8 + uVar8 * 0xc) = 1;
          *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
        }
        FUN_14334ddc0(param_1,*(int *)(param_1 + 0x78) + -1,(int)uVar9 + -1);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x194));
  }
  return;
}



// FUNCTION 14334b640 FUN_14334b640 body=1316 status=ok
// SIG undefined FUN_14334b640(void)

void FUN_14334b640(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  void *_Dst;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      do {
        uVar8 = *(ulonglong *)(param_1 + 0x148) >> 4;
        if (*(ulonglong *)(param_1 + 0x150) <= uVar8) {
          FUN_143343dc0(param_1 + 0x140);
        }
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + uVar8 * 8) +
                (ulonglong)(*(uint *)(param_1 + 0x148) & 0xf) * 4) = (int)uVar7;
        uVar7 = uVar7 + 1;
        *(longlong *)(param_1 + 0x148) = *(longlong *)(param_1 + 0x148) + 1;
      } while (uVar7 < *(ulonglong *)(param_1 + 0x50));
    }
    FUN_143341af0(param_1 + 0x140,0,*(undefined8 *)(param_1 + 0x148),param_1 + 0x48);
    fVar12 = -1e+30;
    uVar8 = 0;
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      do {
        uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + (uVar7 >> 4) * 8) +
                          (ulonglong)((uint)uVar7 & 0xf) * 4);
        uVar9 = (ulonglong)(uVar10 & 0xf);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar10 >> 4) * 8);
        fVar13 = *(float *)(lVar1 + 4 + uVar9 * 8);
        if (fVar13 - fVar12 <= ABS(fVar13) * *(float *)(param_1 + 0x10)) {
          *(float *)(lVar1 + 4 + uVar9 * 8) = fVar12;
        }
        else {
          uVar4 = uVar8 >> 4;
          uVar11 = (uint)uVar8;
          uVar8 = uVar8 + 1;
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + uVar4 * 8) +
                   (ulonglong)(uVar11 & 0xf) * 4) = uVar10;
          fVar12 = *(float *)(lVar1 + 4 + uVar9 * 8);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulonglong *)(param_1 + 0x148));
    }
    if (uVar8 < *(ulonglong *)(param_1 + 0x148)) {
      *(ulonglong *)(param_1 + 0x148) = uVar8;
    }
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      do {
        FUN_14334a090(param_1,*(longlong *)(*(longlong *)(param_1 + 0x40) + (uVar7 >> 4) * 8) +
                              (ulonglong)((uint)uVar7 & 0xf) * 8);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulonglong *)(param_1 + 0x28));
    }
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      do {
        uVar10 = (uint)uVar7;
        uVar8 = *(ulonglong *)(param_1 + 0x120) >> 4;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + (uVar7 >> 4) * 8);
        if (*(ulonglong *)(param_1 + 0x128) <= uVar8) {
          if (*(ulonglong *)(param_1 + 0x130) <= uVar8) {
            if (*(longlong *)(param_1 + 0x138) == 0) {
              *(undefined8 *)(param_1 + 0x130) = 8;
              uVar5 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x118),0x40);
              *(undefined8 *)(param_1 + 0x138) = uVar5;
            }
            else {
              _Dst = (void *)FUN_1433245e0(*(undefined8 *)(param_1 + 0x118),
                                           *(ulonglong *)(param_1 + 0x130) << 4);
              _guard_xfg_dispatch_icall_nop
                        (_Dst,*(void **)(param_1 + 0x138),*(longlong *)(param_1 + 0x128) << 3);
              *(void **)(param_1 + 0x138) = _Dst;
              *(longlong *)(param_1 + 0x130) = *(longlong *)(param_1 + 0x130) * 2;
            }
          }
          uVar5 = FUN_1433245e0(*(undefined8 *)(param_1 + 0x118),0x80);
          *(undefined8 *)(*(longlong *)(param_1 + 0x138) + uVar8 * 8) = uVar5;
          *(longlong *)(param_1 + 0x128) = *(longlong *)(param_1 + 0x128) + 1;
        }
        uVar7 = uVar7 + 1;
        *(ulonglong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x138) + uVar8 * 8) +
         (ulonglong)(*(uint *)(param_1 + 0x120) & 0xf) * 8) =
             (ulonglong)(uVar10 & 0xf) * 0x20 + lVar1;
        *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 1;
      } while (uVar7 < *(ulonglong *)(param_1 + 0xf8));
    }
    FUN_14334d2d0(param_1 + 0x168,0,*(undefined8 *)(param_1 + 0x170),&LAB_143344430);
    FUN_14334c980(param_1 + 0x118,0,*(undefined8 *)(param_1 + 0x120),&LAB_143344440);
    uVar10 = 0;
    uVar11 = 0;
    fVar12 = *(float *)(*(longlong *)
                         (*(longlong *)(param_1 + 0x68) +
                         (ulonglong)(*(uint *)**(undefined8 **)(param_1 + 0x160) >> 4) * 8) + 4 +
                       (ulonglong)(*(uint *)**(undefined8 **)(param_1 + 0x160) & 0xf) * 8);
    *(undefined4 *)(param_1 + 0x198) = 0xf149f2ca;
    *(undefined4 *)(param_1 + 0x19c) = 0xf149f2ca;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      uVar8 = 0;
      uVar9 = 0;
      uVar7 = 0;
      do {
        uVar10 = uVar10 + 1;
        fVar13 = fVar12;
        if ((ulonglong)uVar10 < *(ulonglong *)(param_1 + 0x148)) {
          uVar3 = *(uint *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x160) + (ulonglong)(uVar10 >> 4) * 8) +
                           (ulonglong)(uVar10 & 0xf) * 4);
          fVar13 = *(float *)(*(longlong *)
                               (*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar3 >> 4) * 8) + 4 +
                             (ulonglong)(uVar3 & 0xf) * 8);
        }
        uVar4 = uVar7;
        if (uVar8 < *(ulonglong *)(param_1 + 0x120)) {
          do {
            if (fVar12 < *(float *)(*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(param_1 + 0x138) + (uVar8 >> 4) * 8) +
                                     (ulonglong)((uint)uVar8 & 0xf) * 8) + 8)) break;
            uVar8 = (ulonglong)((int)uVar4 + 1);
            uVar4 = uVar8;
          } while (uVar8 < *(ulonglong *)(param_1 + 0x120));
        }
        *(uint *)(param_1 + 400) = uVar11;
        if (uVar9 < *(ulonglong *)(param_1 + 0x170)) {
          do {
            if (fVar12 < *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + (uVar9 >> 2) * 8)
                                    + 8 + (ulonglong)((uint)uVar9 & 3) * 0x14)) break;
            uVar11 = uVar11 + 1;
            uVar9 = (ulonglong)uVar11;
          } while (uVar9 < *(ulonglong *)(param_1 + 0x170));
        }
        *(uint *)(param_1 + 0x194) = uVar11 - *(int *)(param_1 + 400);
        uVar3 = FUN_14334a6e0(param_1,fVar12,fVar13,uVar7,(int)uVar4 - (int)uVar7);
        if (*(longlong *)(param_1 + 0x230) == 0) {
          FUN_14334b240(param_1,param_1 + 0x1b0,fVar12);
        }
        else {
          FUN_14334bb70(param_1,fVar12);
        }
        if ((uVar3 & 2) != 0) {
          uVar3 = 0;
          uVar7 = 0;
          if (*(longlong *)(param_1 + 0x1b8) != 0) {
            do {
              lVar1 = *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + (uVar7 >> 4) * 8) +
                       (ulonglong)((uint)uVar7 & 0xf) * 8);
              if ((*(byte *)(lVar1 + 0x14) & 1) == 0) {
                uVar6 = uVar3 & 0xf;
                uVar2 = uVar3 >> 4;
                uVar3 = uVar3 + 1;
                *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)uVar2 * 8) +
                 (ulonglong)uVar6 * 8) = lVar1;
              }
              uVar7 = (ulonglong)((uint)uVar7 + 1);
            } while (uVar7 < *(ulonglong *)(param_1 + 0x1b8));
          }
          if ((ulonglong)uVar3 < *(ulonglong *)(param_1 + 0x1b8)) {
            *(ulonglong *)(param_1 + 0x1b8) = (ulonglong)uVar3;
          }
        }
        uVar7 = uVar4;
        fVar12 = fVar13;
      } while ((ulonglong)uVar10 < *(ulonglong *)(param_1 + 0x148));
    }
  }
  return;
}



// FUNCTION 14334bb70 FUN_14334bb70 body=273 status=ok
// SIG undefined FUN_14334bb70(void)

void FUN_14334bb70(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  FUN_14334b240(param_1,param_1 + 0x1d8,param_2);
  uVar7 = 0;
  if (*(longlong *)(param_1 + 0x230) != 0) {
    do {
      uVar6 = (ulonglong)((uint)uVar7 & 0xf);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x248) + (uVar7 >> 4) * 8);
      fVar1 = *(float *)(lVar3 + 0x10 + uVar6 * 0x18);
      if (param_2 < fVar1) {
        iVar5 = FUN_14334d970(param_1,*(undefined8 *)(lVar3 + uVar6 * 0x18),fVar1,1);
        lVar4 = *(longlong *)(lVar3 + uVar6 * 0x18);
        iVar2 = *(int *)(lVar4 + 0x18);
        if ((iVar2 != -1) && (iVar2 != iVar5)) {
          FUN_14334ddc0(param_1,iVar2,iVar5);
        }
        *(int *)(lVar4 + 0x18) = iVar5;
        iVar5 = FUN_14334d970(param_1,*(undefined8 *)(lVar3 + 8 + uVar6 * 0x18),
                              *(undefined4 *)(lVar3 + 0x10 + uVar6 * 0x18),1);
        lVar3 = *(longlong *)(lVar3 + 8 + uVar6 * 0x18);
        iVar2 = *(int *)(lVar3 + 0x18);
        if ((iVar2 != -1) && (iVar2 != iVar5)) {
          FUN_14334ddc0(param_1,iVar2,iVar5);
        }
        *(int *)(lVar3 + 0x18) = iVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ulonglong *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 14334bc90 FUN_14334bc90 body=1429 status=ok
// SIG undefined FUN_14334bc90(void)

undefined8
FUN_14334bc90(longlong param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5,
             float param_6,float param_7,float param_8)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
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
  float fStack_fc;
  float local_f0;
  
  fVar6 = (float)FUN_1433436d0(param_3,param_4,param_5,param_6,param_7);
  fVar8 = param_4[1];
  fVar9 = *param_4;
  fStack_fc = ((param_3[1] - fVar8) * param_8) / param_6;
  fVar15 = ((fVar9 - *param_3) * param_8) / param_6;
  fVar16 = ((fVar8 - param_5[1]) * param_8) / param_7;
  local_f0 = ((*param_5 - fVar9) * param_8) / param_7;
  if (ABS(fVar6) < 0.125) {
    if (param_7 < param_6) {
      fVar16 = fStack_fc;
      local_f0 = fVar15;
    }
    uVar5 = *(ulonglong *)(param_1 + 0x78) >> 4;
    if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
      FUN_143329c80(param_1 + 0x70,uVar5);
    }
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar5 * 8);
    *(ulonglong *)(lVar2 + uVar3 * 0xc) = CONCAT44(fVar8 + local_f0,fVar9 + fVar16);
    *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc) = 0;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
    return 1;
  }
  fVar18 = *param_3 + fStack_fc;
  fVar10 = param_3[1] + fVar15;
  fVar14 = fVar9 + fStack_fc;
  fVar12 = fVar8 + local_f0;
  fVar17 = fVar9 + fVar16;
  fVar7 = (*param_5 + fVar16) - fVar17;
  fVar19 = fVar8 + fVar15;
  fVar11 = (param_5[1] + local_f0) - fVar12;
  fVar13 = fVar11 * (fVar14 - fVar18) - fVar7 * (fVar19 - fVar10);
  if (ABS(fVar13) < (param_6 + param_7) * *(float *)(param_1 + 0x14)) {
LAB_14334c0cf:
    local_f0 = local_f0 + fVar17;
    fStack_fc = fStack_fc + fVar19;
    uVar5 = *(ulonglong *)(param_1 + 0x78) >> 4;
    if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
      FUN_143329c80(param_1 + 0x70,uVar5);
    }
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar5 * 8);
    *(ulonglong *)(lVar2 + uVar3 * 0xc) = CONCAT44(fStack_fc,fVar14 - fVar15);
    *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc) = 0;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
    uVar5 = *(ulonglong *)(param_1 + 0x78) >> 4;
    if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
      FUN_143329c80(param_1 + 0x70,uVar5);
    }
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar5 * 8);
    *(ulonglong *)(lVar2 + uVar3 * 0xc) = CONCAT44(fVar12 - fVar16,local_f0);
    *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc) = 0;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
    iVar1 = *(int *)(param_1 + 0x78);
    uVar5 = *(ulonglong *)(param_1 + 0xa0) >> 4;
    if (*(ulonglong *)(param_1 + 0xa8) <= uVar5) {
      FUN_143329c80(param_1 + 0x98,uVar5);
    }
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0xa0) & 0xf);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar5 * 8);
    *(ulonglong *)(lVar2 + uVar3 * 0xc) = CONCAT44(iVar1 + -2,param_2);
    *(int *)(lVar2 + 8 + uVar3 * 0xc) = iVar1 + -1;
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
LAB_14334c1ce:
    uVar4 = 2;
  }
  else {
    fVar13 = ((fVar10 - fVar12) * fVar7 - (fVar18 - fVar17) * fVar11) / fVar13;
    fVar10 = (fVar19 - fVar10) * fVar13 + fVar10;
    fVar18 = (fVar14 - fVar18) * fVar13 + fVar18;
    fVar8 = fVar10 - fVar8;
    fVar9 = fVar18 - fVar9;
    fVar8 = _guard_xfg_dispatch_icall_nop(fVar8 * fVar8 + fVar9 * fVar9);
    if (fVar6 <= 0.0) {
      if (param_8 * -4.0 < fVar8) {
        fStack_fc = fStack_fc + fStack_fc;
        local_f0 = local_f0 + local_f0;
        fVar15 = fVar15 + fVar15;
        fVar16 = fVar16 + fVar16;
        goto LAB_14334c0cf;
      }
    }
    else {
      if (param_7 <= param_6) {
        param_6 = param_7;
      }
      if (param_6 / fVar6 < fVar8) {
        uVar5 = *(ulonglong *)(param_1 + 0x78) >> 4;
        if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
          FUN_143329c80(param_1 + 0x70,uVar5);
        }
        uVar3 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar5 * 8);
        *(ulonglong *)(lVar2 + uVar3 * 0xc) = CONCAT44(fVar19,fVar14);
        *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc) = 0;
        *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
        uVar5 = *(ulonglong *)(param_1 + 0x78) >> 4;
        if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
          FUN_143329c80(param_1 + 0x70,uVar5);
        }
        uVar3 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar5 * 8);
        *(ulonglong *)(lVar2 + uVar3 * 0xc) = CONCAT44(fVar12,fVar17);
        *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc) = 0;
        *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
        goto LAB_14334c1ce;
      }
    }
    uVar5 = *(ulonglong *)(param_1 + 0x78) >> 4;
    if (*(ulonglong *)(param_1 + 0x80) <= uVar5) {
      FUN_143329c80(param_1 + 0x70,uVar5);
    }
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar5 * 8);
    *(ulonglong *)(lVar2 + uVar3 * 0xc) = CONCAT44(fVar10,fVar18);
    *(undefined4 *)(lVar2 + 8 + uVar3 * 0xc) = 0;
    uVar4 = 1;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
  }
  return uVar4;
}



// FUNCTION 14334c230 FUN_14334c230 body=992 status=ok
// SIG undefined FUN_14334c230(void)

void FUN_14334c230(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  uint local_res8;
  float *local_res18;
  
  uVar6 = *(ulonglong *)(param_1 + 600);
  if (1 < uVar6) {
    lVar16 = *(longlong *)(param_1 + 0x270);
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (uVar6 - 1 >> 4) * 8) +
                     (ulonglong)((uint)(uVar6 - 1) & 0xf) * 4);
    uVar10 = *(uint *)(*(longlong *)(lVar16 + (uVar6 - 2 >> 4) * 8) +
                      (ulonglong)((uint)(uVar6 - 2) & 0xf) * 4);
    local_res18 = (float *)(*(longlong *)
                             (*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar10 >> 4) * 8) +
                           (ulonglong)(uVar10 & 0xf) * 0xc);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar2 >> 4) * 8);
    pfVar1 = (float *)(lVar4 + (ulonglong)(uVar2 & 0xf) * 0xc);
    fVar17 = pfVar1[1] - local_res18[1];
    fVar18 = *(float *)(lVar4 + (ulonglong)(uVar2 & 0xf) * 0xc) - *local_res18;
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17 * fVar17 + fVar18 * fVar18);
    uVar15 = 0xffffffff;
    uVar11 = 0;
    uVar10 = 0;
    iVar8 = -1;
    local_res8 = 0xffffffff;
    iVar14 = -1;
    if (uVar6 != 0) {
      do {
        uVar9 = uVar2;
        pfVar12 = pfVar1;
        uVar13 = (ulonglong)((uint)uVar11 & 0xf);
        uVar6 = uVar11 >> 4;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + uVar6 * 8) + uVar13 * 4);
        uVar7 = (ulonglong)(uVar2 & 0xf);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar2 >> 4) * 8);
        pfVar1 = (float *)(lVar4 + uVar7 * 0xc);
        fVar18 = *(float *)(lVar4 + uVar7 * 0xc) - *pfVar12;
        fVar18 = _guard_xfg_dispatch_icall_nop
                           ((pfVar1[1] - pfVar12[1]) * (pfVar1[1] - pfVar12[1]) + fVar18 * fVar18);
        iVar5 = FUN_14334bc90(param_1,uVar9,local_res18,pfVar12,pfVar1,fVar17,fVar18,param_2);
        if (uVar15 == 0xffffffff) {
          iVar14 = *(int *)(param_1 + 0x78) - iVar5;
          uVar10 = (uint)uVar11;
          local_res8 = uVar9;
        }
        else {
          iVar3 = *(int *)(param_1 + 0x78);
          uVar11 = *(ulonglong *)(param_1 + 0xa0) >> 4;
          if (*(ulonglong *)(param_1 + 0xa8) <= uVar11) {
            FUN_143329c80(param_1 + 0x98,uVar11);
          }
          uVar7 = (ulonglong)(*(uint *)(param_1 + 0xa0) & 0xf);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar11 * 8);
          *(ulonglong *)(lVar4 + uVar7 * 0xc) = CONCAT44(iVar8,uVar15);
          *(int *)(lVar4 + 8 + uVar7 * 0xc) = iVar3 - iVar5;
          *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
          iVar8 = *(int *)(param_1 + 0x78);
          uVar11 = *(ulonglong *)(param_1 + 0xa0) >> 4;
          if (*(ulonglong *)(param_1 + 0xa8) <= uVar11) {
            FUN_143329c80(param_1 + 0x98,uVar11);
          }
          uVar7 = (ulonglong)(*(uint *)(param_1 + 0xa0) & 0xf);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar11 * 8);
          *(ulonglong *)(lVar4 + uVar7 * 0xc) = CONCAT44(iVar8 - iVar5,uVar15);
          *(uint *)(lVar4 + 8 + uVar7 * 0xc) = uVar9;
          *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
        }
        uVar10 = uVar10 + 1;
        iVar8 = *(int *)(param_1 + 0x78) + -1;
        lVar16 = *(longlong *)(param_1 + 0x270);
        uVar11 = (ulonglong)uVar10;
        fVar17 = fVar18;
        uVar2 = *(uint *)(*(longlong *)(lVar16 + uVar6 * 8) + uVar13 * 4);
        uVar15 = uVar9;
        local_res18 = pfVar12;
      } while (uVar11 < *(ulonglong *)(param_1 + 600));
      if (uVar9 != 0xffffffff) {
        uVar6 = *(ulonglong *)(param_1 + 0xa0) >> 4;
        if (*(ulonglong *)(param_1 + 0xa8) <= uVar6) {
          FUN_143329c80(param_1 + 0x98,uVar6);
        }
        uVar11 = (ulonglong)(*(uint *)(param_1 + 0xa0) & 0xf);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar6 * 8);
        *(ulonglong *)(lVar4 + uVar11 * 0xc) = CONCAT44(iVar8,uVar9);
        *(int *)(lVar4 + 8 + uVar11 * 0xc) = iVar14;
        *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
        uVar6 = *(ulonglong *)(param_1 + 0xa0) >> 4;
        if (*(ulonglong *)(param_1 + 0xa8) <= uVar6) {
          FUN_143329c80(param_1 + 0x98,uVar6);
        }
        uVar11 = (ulonglong)(*(uint *)(param_1 + 0xa0) & 0xf);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar6 * 8);
        *(ulonglong *)(lVar4 + uVar11 * 0xc) = CONCAT44(iVar14,uVar9);
        *(uint *)(lVar4 + 8 + uVar11 * 0xc) = local_res8;
        *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 1;
      }
    }
  }
  return;
}



// FUNCTION 14334c620 FUN_14334c620 body=859 status=ok
// SIG undefined FUN_14334c620(void)

void FUN_14334c620(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = -1e+30;
  fVar12 = -1e+30;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x298) + (ulonglong)(param_2 >> 4) * 8);
  *(undefined8 *)(param_1 + 600) = 0;
  puVar1 = (uint *)(lVar7 + (ulonglong)(param_2 & 0xf) * 0xc);
  puVar5 = puVar1;
LAB_14334c682:
  uVar10 = *puVar5;
  if (-1 < (int)uVar10) {
    uVar11 = uVar10 & 0x7fffffff;
    uVar4 = (ulonglong)(uVar10 & 0xf);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar11 >> 4) * 8);
    if ((*(float *)(lVar7 + uVar4 * 0xc) != fVar13) ||
       (*(float *)(lVar7 + 4 + uVar4 * 0xc) != fVar12)) {
      uVar6 = *(ulonglong *)(param_1 + 600) >> 4;
      if (*(ulonglong *)(param_1 + 0x260) <= uVar6) {
        FUN_143343dc0(param_1 + 0x250,uVar6);
      }
      *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + uVar6 * 8) +
               (ulonglong)(*(uint *)(param_1 + 600) & 0xf) * 4) = uVar11;
      *(longlong *)(param_1 + 600) = *(longlong *)(param_1 + 600) + 1;
      fVar13 = *(float *)(lVar7 + uVar4 * 0xc);
      fVar12 = *(float *)(lVar7 + 4 + uVar4 * 0xc);
    }
    *puVar5 = *puVar5 | 0x80000000;
    uVar4 = 0;
    if (0 < *(longlong *)(param_1 + 0x280)) {
      lVar7 = *(longlong *)(param_1 + 0x280);
      do {
        lVar9 = lVar7 >> 1;
        uVar6 = lVar9 + uVar4;
        if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x298) + (uVar6 >> 4) * 8) +
                      (ulonglong)((uint)uVar6 & 0xf) * 0xc) & 0x7fffffff) < puVar5[1]) {
          uVar4 = uVar6 + 1;
          lVar9 = lVar7 + (-1 - lVar9);
        }
        lVar7 = lVar9;
      } while (0 < lVar9);
    }
    if (uVar4 < *(ulonglong *)(param_1 + 0x280)) {
      lVar7 = *(longlong *)(param_1 + 0x298);
      uVar8 = 0;
      uVar6 = uVar4;
      do {
        if ((*(uint *)(*(longlong *)(lVar7 + (uVar6 >> 4) * 8) +
                      (ulonglong)((uint)uVar6 & 0xf) * 0xc) & 0x7fffffff) != puVar5[1]) break;
        uVar8 = uVar8 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulonglong *)(param_1 + 0x280));
      if (uVar8 == 1) {
        puVar5 = (uint *)(*(longlong *)(lVar7 + (uVar4 >> 4) * 8) +
                         (ulonglong)((uint)uVar4 & 0xf) * 0xc);
      }
      else if (uVar8 == 2) {
        puVar5 = (uint *)(*(longlong *)(lVar7 + (uVar4 >> 4) * 8) +
                         (ulonglong)((uint)uVar4 & 0xf) * 0xc);
        puVar2 = (uint *)(*(longlong *)(lVar7 + (uVar4 + 1 >> 4) * 8) +
                         (ulonglong)((uint)(uVar4 + 1) & 0xf) * 0xc);
        if (puVar5[1] == puVar2[1]) {
          if ((int)*puVar5 < 0) {
            puVar5 = puVar2;
          }
        }
        else if (puVar5[1] == uVar11) {
          puVar5 = puVar2;
        }
      }
      else {
        uVar6 = 0;
        if (uVar8 != 0) {
          do {
            if (*(uint *)(*(longlong *)(lVar7 + (uVar6 + uVar4 >> 4) * 8) + 4 +
                         (ulonglong)((uint)(uVar6 + uVar4) & 0xf) * 0xc) == uVar11) {
              uVar10 = 0;
              goto LAB_14334c870;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
          } while (uVar6 < uVar8);
        }
      }
      goto LAB_14334c8af;
    }
  }
  goto LAB_14334c8b8;
  while (((int)*puVar5 < 0 && (uVar10 = uVar10 + 1, uVar6 = uVar3, uVar10 < uVar8))) {
LAB_14334c870:
    uVar3 = 0;
    uVar11 = (int)uVar6 + 1;
    if (uVar11 < uVar8) {
      uVar3 = (ulonglong)uVar11;
    }
    puVar5 = (uint *)(*(longlong *)(lVar7 + (uVar3 + uVar4 >> 4) * 8) +
                     (ulonglong)((uint)(uVar3 + uVar4) & 0xf) * 0xc);
    if (puVar5 == puVar1) goto LAB_14334c8b8;
  }
LAB_14334c8af:
  if (puVar5 == puVar1) {
LAB_14334c8b8:
    if (*(longlong *)(param_1 + 600) != 0) {
      uVar6 = (ulonglong)(*(uint *)**(undefined8 **)(param_1 + 0x270) & 0xf);
      lVar7 = *(longlong *)
               (*(longlong *)(param_1 + 0x90) +
               (ulonglong)(*(uint *)**(undefined8 **)(param_1 + 0x270) >> 4) * 8);
      uVar4 = *(longlong *)(param_1 + 600) - 1;
      uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x270) + (uVar4 >> 4) * 8) +
                        (ulonglong)((uint)uVar4 & 0xf) * 4);
      uVar4 = (ulonglong)(uVar10 & 0xf);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(uVar10 >> 4) * 8);
      if (((*(float *)(lVar7 + uVar6 * 0xc) == *(float *)(lVar9 + uVar4 * 0xc)) &&
          (*(float *)(lVar7 + 4 + uVar6 * 0xc) == *(float *)(lVar9 + 4 + uVar4 * 0xc))) &&
         (*(longlong *)(param_1 + 600) != 0)) {
        *(longlong *)(param_1 + 600) = *(longlong *)(param_1 + 600) + -1;
      }
    }
    return;
  }
  goto LAB_14334c682;
}



// FUNCTION 14334c980 FUN_14334c980 body=1095 status=ok
// SIG undefined FUN_14334c980(void)

void FUN_14334c980(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar16 = local_2b8;
    local_res10 = param_3;
LAB_14334c9cb:
    while (uVar13 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar13 = local_res10 - 1;
      uVar15 = param_2 + 1;
      uVar11 = (longlong)(local_res10 - param_2) / 2 + param_2;
      puVar12 = (undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8) +
                (ulonglong)((uint)uVar11 & 0xf) * 8);
      lVar2 = (param_2 >> 4) * 8;
      lVar7 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
      lVar3 = (ulonglong)((uint)param_2 & 0xf) * 8;
      uVar8 = *(undefined8 *)(lVar7 + lVar3);
      *(undefined8 *)(lVar7 + lVar3) = *puVar12;
      *puVar12 = uVar8;
      lVar7 = (uVar15 >> 4) * 8;
      lVar4 = (ulonglong)((uint)uVar15 & 0xf) * 8;
      lVar5 = (uVar13 >> 4) * 8;
      lVar6 = (ulonglong)((uint)uVar13 & 0xf) * 8;
      cVar10 = (*param_4)(*(undefined8 *)
                           (lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20))),
                          *(undefined8 *)
                           (*(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20)) + lVar4));
      if (cVar10 != '\0') {
        lVar9 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20));
        puVar12 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar9 + lVar4);
        *(undefined8 *)(lVar9 + lVar4) = uVar8;
      }
      cVar10 = (*param_4)(*(undefined8 *)
                           (lVar3 + *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20))),
                          *(undefined8 *)
                           (*(longlong *)(lVar7 + *(longlong *)(param_1 + 0x20)) + lVar4));
      if (cVar10 != '\0') {
        lVar9 = *(longlong *)(lVar2 + *(longlong *)(param_1 + 0x20));
        puVar12 = (undefined8 *)(lVar4 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7));
        uVar8 = *(undefined8 *)(lVar9 + lVar3);
        *(undefined8 *)(lVar9 + lVar3) = *puVar12;
        *puVar12 = uVar8;
      }
      cVar10 = (*param_4)(*(undefined8 *)
                           (lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20))),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3));
      if (cVar10 != '\0') {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        puVar12 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar7 + lVar3);
        *(undefined8 *)(lVar7 + lVar3) = uVar8;
      }
      while( true ) {
        do {
          uVar15 = uVar15 + 1;
          cVar10 = (*param_4)(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 4) * 8) +
                               (ulonglong)((uint)uVar15 & 0xf) * 8),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3));
        } while (cVar10 != '\0');
        do {
          uVar13 = uVar13 - 1;
          cVar10 = (*param_4)(*(undefined8 *)
                               (lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2)),
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar13 >> 4) * 8) +
                               (ulonglong)((uint)uVar13 & 0xf) * 8));
        } while (cVar10 != '\0');
        lVar7 = *(longlong *)(param_1 + 0x20);
        puVar12 = (undefined8 *)
                  (*(longlong *)(lVar7 + (uVar13 >> 4) * 8) + (ulonglong)((uint)uVar13 & 0xf) * 8);
        if ((longlong)uVar13 < (longlong)uVar15) break;
        puVar1 = (undefined8 *)
                 (*(longlong *)(lVar7 + (uVar15 >> 4) * 8) + (ulonglong)((uint)uVar15 & 0xf) * 8);
        uVar8 = *puVar1;
        *puVar1 = *puVar12;
        *puVar12 = uVar8;
      }
      uVar8 = *(undefined8 *)(*(longlong *)(lVar7 + lVar2) + lVar3);
      *(undefined8 *)(*(longlong *)(lVar7 + lVar2) + lVar3) = *puVar12;
      *puVar12 = uVar8;
      if ((longlong)(local_res10 - uVar15) < (longlong)(uVar13 - param_2)) {
        *puVar16 = param_2;
        puVar16[1] = uVar13;
        puVar16 = puVar16 + 2;
        param_2 = uVar15;
      }
      else {
        puVar16[1] = local_res10;
        *puVar16 = uVar15;
        puVar16 = puVar16 + 2;
        local_res10 = uVar13;
      }
    }
joined_r0x00014334cc78:
    uVar15 = uVar13 + 1;
    if ((longlong)uVar15 < (longlong)local_res10) {
      lVar2 = (uVar13 >> 4) * 8;
      lVar3 = (ulonglong)((uint)uVar13 & 0xf) * 8;
      uVar11 = uVar13 + 1;
      cVar10 = (*param_4)(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8) +
                           (ulonglong)((uint)uVar11 & 0xf) * 8),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3));
      while (uVar13 = uVar15, cVar10 != '\0') {
        uVar14 = uVar11 - 1;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2);
        puVar12 = (undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar11 >> 4) * 8) +
                  (ulonglong)((uint)uVar11 & 0xf) * 8);
        uVar8 = *puVar12;
        *puVar12 = *(undefined8 *)(lVar2 + lVar3);
        *(undefined8 *)(lVar2 + lVar3) = uVar8;
        if (uVar14 == param_2) break;
        lVar3 = (ulonglong)((uint)(uVar11 - 2) & 0xf) * 8;
        lVar2 = (uVar11 - 2 >> 4) * 8;
        cVar10 = (*param_4)(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar14 >> 4) * 8) +
                             (ulonglong)((uint)uVar14 & 0xf) * 8),
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar2) + lVar3));
        uVar11 = uVar14;
      }
      goto joined_r0x00014334cc78;
    }
    if (local_2b8 < puVar16) {
      local_res10 = puVar16[-1];
      puVar16 = puVar16 + -2;
      param_2 = *puVar16;
      goto LAB_14334c9cb;
    }
  }
  return;
}



// FUNCTION 14334cdd0 FUN_14334cdd0 body=1277 status=ok
// SIG undefined FUN_14334cdd0(void)

void FUN_14334cdd0(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar18 = local_2b8;
    local_res10 = param_3;
LAB_14334ce1b:
    while (uVar14 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar14 = local_res10 - 1;
      uVar17 = param_2 + 1;
      uVar15 = (longlong)(local_res10 - param_2) / 2 + param_2;
      uVar11 = (ulonglong)((uint)uVar15 & 0xf);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 4) * 8);
      puVar13 = (undefined8 *)(lVar9 + uVar11 * 0xc);
      lVar1 = (param_2 >> 4) * 8;
      lVar2 = (ulonglong)((uint)param_2 & 0xf) * 0xc;
      puVar12 = (undefined8 *)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + lVar2);
      uVar8 = *(undefined4 *)(puVar12 + 1);
      uVar6 = *puVar12;
      *puVar12 = *(undefined8 *)(lVar9 + uVar11 * 0xc);
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
      *puVar13 = uVar6;
      *(undefined4 *)(puVar13 + 1) = uVar8;
      lVar9 = (uVar17 >> 4) * 8;
      lVar3 = (ulonglong)((uint)uVar17 & 0xf) * 0xc;
      lVar4 = (uVar14 >> 4) * 8;
      lVar5 = (ulonglong)((uint)uVar14 & 0xf) * 0xc;
      cVar10 = (*param_4)(*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)) + lVar5,
                          *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar3);
      if (cVar10 != '\0') {
        puVar12 = (undefined8 *)(*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar3);
        puVar13 = (undefined8 *)(lVar5 + *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)));
        uVar6 = *puVar13;
        uVar8 = *(undefined4 *)(puVar13 + 1);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
      }
      cVar10 = (*param_4)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + lVar2,
                          *(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar3);
      if (cVar10 != '\0') {
        puVar12 = (undefined8 *)(lVar3 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9));
        puVar13 = (undefined8 *)(*(longlong *)(lVar1 + *(longlong *)(param_1 + 0x20)) + lVar2);
        uVar6 = *puVar13;
        uVar8 = *(undefined4 *)(puVar13 + 1);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
      }
      cVar10 = (*param_4)(lVar5 + *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
      if (cVar10 != '\0') {
        puVar12 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        puVar13 = (undefined8 *)(lVar5 + *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x20)));
        uVar6 = *puVar13;
        uVar8 = *(undefined4 *)(puVar13 + 1);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
      }
      while( true ) {
        do {
          uVar17 = uVar17 + 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar17 >> 4) * 8) +
                              (ulonglong)((uint)uVar17 & 0xf) * 0xc,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        } while (cVar10 != '\0');
        do {
          uVar14 = uVar14 - 1;
          cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar14 >> 4) * 8) +
                              (ulonglong)((uint)uVar14 & 0xf) * 0xc);
        } while (cVar10 != '\0');
        lVar9 = *(longlong *)(param_1 + 0x20);
        uVar15 = (ulonglong)((uint)uVar14 & 0xf);
        lVar3 = *(longlong *)(lVar9 + (uVar14 >> 4) * 8);
        uVar6 = *(undefined8 *)(lVar3 + uVar15 * 0xc);
        puVar13 = (undefined8 *)(lVar3 + uVar15 * 0xc);
        if ((longlong)uVar14 < (longlong)uVar17) break;
        uVar15 = (ulonglong)((uint)uVar17 & 0xf);
        lVar9 = *(longlong *)(lVar9 + (uVar17 >> 4) * 8);
        uVar7 = *(undefined8 *)(lVar9 + uVar15 * 0xc);
        puVar12 = (undefined8 *)(lVar9 + uVar15 * 0xc);
        uVar8 = *(undefined4 *)(lVar9 + 8 + uVar15 * 0xc);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
        *puVar13 = uVar7;
        *(undefined4 *)(puVar13 + 1) = uVar8;
      }
      puVar12 = (undefined8 *)(*(longlong *)(lVar9 + lVar1) + lVar2);
      uVar7 = *puVar12;
      uVar8 = *(undefined4 *)(puVar12 + 1);
      *puVar12 = uVar6;
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar13 + 1);
      *puVar13 = uVar7;
      *(undefined4 *)(puVar13 + 1) = uVar8;
      if ((longlong)(local_res10 - uVar17) < (longlong)(uVar14 - param_2)) {
        *puVar18 = param_2;
        puVar18[1] = uVar14;
        puVar18 = puVar18 + 2;
        param_2 = uVar17;
      }
      else {
        puVar18[1] = local_res10;
        *puVar18 = uVar17;
        puVar18 = puVar18 + 2;
        local_res10 = uVar14;
      }
    }
joined_r0x00014334d156:
    uVar17 = uVar14 + 1;
    if ((longlong)uVar17 < (longlong)local_res10) {
      lVar1 = (uVar14 >> 4) * 8;
      lVar2 = (ulonglong)((uint)uVar14 & 0xf) * 0xc;
      uVar15 = uVar14 + 1;
      cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 4) * 8) +
                          (ulonglong)((uint)uVar15 & 0xf) * 0xc,
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
      while (uVar14 = uVar17, cVar10 != '\0') {
        uVar11 = (ulonglong)((uint)uVar15 & 0xf);
        puVar12 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar15 >> 4) * 8);
        uVar16 = uVar15 - 1;
        uVar6 = *(undefined8 *)(lVar1 + uVar11 * 0xc);
        puVar13 = (undefined8 *)(lVar1 + uVar11 * 0xc);
        uVar8 = *(undefined4 *)(lVar1 + 8 + uVar11 * 0xc);
        *puVar13 = *puVar12;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar12 + 1);
        *puVar12 = uVar6;
        *(undefined4 *)(puVar12 + 1) = uVar8;
        if (uVar16 == param_2) break;
        lVar1 = (uVar15 - 2 >> 4) * 8;
        lVar2 = (ulonglong)((uint)(uVar15 - 2) & 0xf) * 0xc;
        cVar10 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar16 >> 4) * 8) +
                            (ulonglong)((uint)uVar16 & 0xf) * 0xc,
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar1) + lVar2);
        uVar15 = uVar16;
      }
      goto joined_r0x00014334d156;
    }
    if (local_2b8 < puVar18) {
      local_res10 = puVar18[-1];
      puVar18 = puVar18 + -2;
      param_2 = *puVar18;
      goto LAB_14334ce1b;
    }
  }
  return;
}



// FUNCTION 14334d2d0 FUN_14334d2d0 body=1242 status=ok
// SIG undefined FUN_14334d2d0(void)

void FUN_14334d2d0(longlong param_1,ulonglong param_2,ulonglong param_3,code *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char cVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  ulonglong *puVar28;
  ulonglong local_res10;
  ulonglong local_2b8 [80];
  
  if (1 < param_3 - param_2) {
    puVar28 = local_2b8;
    local_res10 = param_3;
LAB_14334d31b:
    while (uVar22 = param_2, 9 < (longlong)(local_res10 - param_2)) {
      uVar22 = local_res10 - 1;
      uVar25 = param_2 + 1;
      uVar23 = (longlong)(local_res10 - param_2) / 2 + param_2;
      uVar19 = (ulonglong)((uint)uVar23 & 3);
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar23 >> 2) * 8);
      puVar1 = (undefined4 *)(lVar9 + uVar19 * 0x14);
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar8 = puVar1[3];
      puVar27 = (undefined4 *)(lVar9 + uVar19 * 0x14);
      lVar9 = (param_2 >> 2) * 8;
      lVar2 = (ulonglong)((uint)param_2 & 3) * 0x14;
      puVar20 = (undefined4 *)(*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar2);
      uVar7 = puVar20[4];
      uVar12 = *puVar20;
      uVar13 = puVar20[1];
      uVar14 = puVar20[2];
      uVar15 = puVar20[3];
      *puVar20 = *puVar1;
      puVar20[1] = uVar10;
      puVar20[2] = uVar11;
      puVar20[3] = uVar8;
      puVar20[4] = puVar27[4];
      *puVar27 = uVar12;
      puVar27[1] = uVar13;
      puVar27[2] = uVar14;
      puVar27[3] = uVar15;
      puVar27[4] = uVar7;
      lVar3 = (uVar25 >> 2) * 8;
      lVar4 = (ulonglong)((uint)uVar25 & 3) * 0x14;
      lVar5 = (uVar22 >> 2) * 8;
      lVar6 = (ulonglong)((uint)uVar22 & 3) * 0x14;
      cVar18 = (*param_4)(*(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)) + lVar6,
                          *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x20)) + lVar4);
      if (cVar18 != '\0') {
        puVar26 = (undefined8 *)(*(longlong *)(lVar3 + *(longlong *)(param_1 + 0x20)) + lVar4);
        puVar21 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar10 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar11 = *(undefined4 *)(puVar26 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar26 + 0xc);
        uVar16 = *puVar21;
        uVar17 = puVar21[1];
        uVar7 = *(undefined4 *)(puVar21 + 2);
        *(undefined4 *)puVar21 = *(undefined4 *)puVar26;
        *(undefined4 *)((longlong)puVar21 + 4) = uVar10;
        *(undefined4 *)(puVar21 + 1) = uVar11;
        *(undefined4 *)((longlong)puVar21 + 0xc) = uVar8;
        *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar26 + 2);
        *puVar26 = uVar16;
        puVar26[1] = uVar17;
        *(undefined4 *)(puVar26 + 2) = uVar7;
      }
      cVar18 = (*param_4)(*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar2,
                          *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x20)) + lVar4);
      if (cVar18 != '\0') {
        puVar26 = (undefined8 *)(lVar4 + *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar3));
        puVar21 = (undefined8 *)(*(longlong *)(lVar9 + *(longlong *)(param_1 + 0x20)) + lVar2);
        uVar10 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar11 = *(undefined4 *)(puVar26 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar26 + 0xc);
        uVar7 = *(undefined4 *)(puVar21 + 2);
        uVar16 = *puVar21;
        uVar17 = puVar21[1];
        *(undefined4 *)puVar21 = *(undefined4 *)puVar26;
        *(undefined4 *)((longlong)puVar21 + 4) = uVar10;
        *(undefined4 *)(puVar21 + 1) = uVar11;
        *(undefined4 *)((longlong)puVar21 + 0xc) = uVar8;
        *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar26 + 2);
        *puVar26 = uVar16;
        puVar26[1] = uVar17;
        *(undefined4 *)(puVar26 + 2) = uVar7;
      }
      cVar18 = (*param_4)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)),
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) + lVar2);
      if (cVar18 != '\0') {
        puVar26 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) + lVar2);
        puVar21 = (undefined8 *)(lVar6 + *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x20)));
        uVar10 = *(undefined4 *)((longlong)puVar26 + 4);
        uVar11 = *(undefined4 *)(puVar26 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar26 + 0xc);
        uVar16 = *puVar21;
        uVar17 = puVar21[1];
        uVar7 = *(undefined4 *)(puVar21 + 2);
        *(undefined4 *)puVar21 = *(undefined4 *)puVar26;
        *(undefined4 *)((longlong)puVar21 + 4) = uVar10;
        *(undefined4 *)(puVar21 + 1) = uVar11;
        *(undefined4 *)((longlong)puVar21 + 0xc) = uVar8;
        *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar26 + 2);
        *puVar26 = uVar16;
        puVar26[1] = uVar17;
        *(undefined4 *)(puVar26 + 2) = uVar7;
      }
      while( true ) {
        do {
          uVar25 = uVar25 + 1;
          cVar18 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar25 >> 2) * 8) +
                              (ulonglong)((uint)uVar25 & 3) * 0x14,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) + lVar2);
        } while (cVar18 != '\0');
        do {
          uVar22 = uVar22 - 1;
          cVar18 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) + lVar2,
                              *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar22 >> 2) * 8) +
                              (ulonglong)((uint)uVar22 & 3) * 0x14);
        } while (cVar18 != '\0');
        lVar3 = *(longlong *)(param_1 + 0x20);
        puVar21 = (undefined8 *)
                  (*(longlong *)(lVar3 + (uVar22 >> 2) * 8) + (ulonglong)((uint)uVar22 & 3) * 0x14);
        uVar7 = *(undefined4 *)((longlong)puVar21 + 4);
        uVar10 = *(undefined4 *)(puVar21 + 1);
        uVar11 = *(undefined4 *)((longlong)puVar21 + 0xc);
        if ((longlong)uVar22 < (longlong)uVar25) break;
        uVar23 = (ulonglong)((uint)uVar25 & 3);
        lVar3 = *(longlong *)(lVar3 + (uVar25 >> 2) * 8);
        puVar26 = (undefined8 *)(lVar3 + uVar23 * 0x14);
        uVar16 = *puVar26;
        uVar17 = puVar26[1];
        puVar1 = (undefined4 *)(lVar3 + uVar23 * 0x14);
        uVar8 = *(undefined4 *)(lVar3 + 0x10 + uVar23 * 0x14);
        *puVar1 = *(undefined4 *)puVar21;
        puVar1[1] = uVar7;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        puVar1[4] = *(undefined4 *)(puVar21 + 2);
        *puVar21 = uVar16;
        puVar21[1] = uVar17;
        *(undefined4 *)(puVar21 + 2) = uVar8;
      }
      puVar26 = (undefined8 *)(*(longlong *)(lVar3 + lVar9) + lVar2);
      uVar16 = *puVar26;
      uVar17 = puVar26[1];
      uVar8 = *(undefined4 *)(puVar26 + 2);
      *(undefined4 *)puVar26 = *(undefined4 *)puVar21;
      *(undefined4 *)((longlong)puVar26 + 4) = uVar7;
      *(undefined4 *)(puVar26 + 1) = uVar10;
      *(undefined4 *)((longlong)puVar26 + 0xc) = uVar11;
      *(undefined4 *)(puVar26 + 2) = *(undefined4 *)(puVar21 + 2);
      *puVar21 = uVar16;
      puVar21[1] = uVar17;
      *(undefined4 *)(puVar21 + 2) = uVar8;
      if ((longlong)(local_res10 - uVar25) < (longlong)(uVar22 - param_2)) {
        *puVar28 = param_2;
        puVar28[1] = uVar22;
        puVar28 = puVar28 + 2;
        param_2 = uVar25;
      }
      else {
        puVar28[1] = local_res10;
        *puVar28 = uVar25;
        puVar28 = puVar28 + 2;
        local_res10 = uVar22;
      }
    }
joined_r0x00014334d63f:
    uVar25 = uVar22 + 1;
    if ((longlong)uVar25 < (longlong)local_res10) {
      lVar9 = (uVar22 >> 2) * 8;
      lVar2 = (ulonglong)((uint)uVar22 & 3) * 0x14;
      uVar23 = uVar22 + 1;
      cVar18 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar23 >> 2) * 8) +
                          (ulonglong)((uint)uVar23 & 3) * 0x14,
                          *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) + lVar2);
      while (uVar22 = uVar25, cVar18 != '\0') {
        uVar19 = (ulonglong)((uint)uVar23 & 3);
        puVar27 = (undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) + lVar2);
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar23 >> 2) * 8);
        uVar24 = uVar23 - 1;
        puVar1 = (undefined4 *)(lVar9 + uVar19 * 0x14);
        uVar7 = *(undefined4 *)(lVar9 + 0x10 + uVar19 * 0x14);
        uVar10 = puVar27[1];
        uVar11 = puVar27[2];
        uVar8 = puVar27[3];
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar14 = puVar1[2];
        uVar15 = puVar1[3];
        *puVar1 = *puVar27;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar8;
        puVar1[4] = puVar27[4];
        *puVar27 = uVar12;
        puVar27[1] = uVar13;
        puVar27[2] = uVar14;
        puVar27[3] = uVar15;
        puVar27[4] = uVar7;
        if (uVar24 == param_2) break;
        lVar9 = (uVar23 - 2 >> 2) * 8;
        lVar2 = (ulonglong)((uint)(uVar23 - 2) & 3) * 0x14;
        cVar18 = (*param_4)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (uVar24 >> 2) * 8) +
                            (ulonglong)((uint)uVar24 & 3) * 0x14,
                            *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar9) + lVar2);
        uVar23 = uVar24;
      }
      goto joined_r0x00014334d63f;
    }
    if (local_2b8 < puVar28) {
      local_res10 = puVar28[-1];
      puVar28 = puVar28 + -2;
      param_2 = *puVar28;
      goto LAB_14334d31b;
    }
  }
  return;
}



// FUNCTION 14334d7b0 FUN_14334d7b0 body=43 status=ok
// SIG undefined FUN_14334d7b0(void)

undefined8 * FUN_14334d7b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145af86a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 14334d7e0 FUN_14334d7e0 body=91 status=ok
// SIG undefined FUN_14334d7e0(void)

void FUN_14334d7e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x50) >> 4;
  if (*(ulonglong *)(param_1 + 0x58) <= uVar1) {
    FUN_143324830(param_1 + 0x48,uVar1);
  }
  *(ulonglong *)
   (*(longlong *)(*(longlong *)(param_1 + 0x68) + uVar1 * 8) +
   (ulonglong)(*(uint *)(param_1 + 0x50) & 0xf) * 8) = CONCAT44(param_3,param_2);
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
  return;
}



// FUNCTION 14334d8b0 FUN_14334d8b0 body=186 status=ok
// SIG undefined FUN_14334d8b0(void)

int FUN_14334d8b0(longlong param_1,float *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_2[1] != *(float *)(param_1 + 0x19c)) || (*param_2 != *(float *)(param_1 + 0x198))) {
    *(float *)(param_1 + 0x198) = *param_2;
    *(float *)(param_1 + 0x19c) = param_2[1];
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(ulonglong *)(param_1 + 0x78) >> 4;
    if (*(ulonglong *)(param_1 + 0x80) <= uVar4) {
      FUN_143329c80(param_1 + 0x70,uVar4);
    }
    uVar3 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar4 * 8);
    *(undefined8 *)(lVar1 + uVar3 * 0xc) = uVar2;
    *(undefined4 *)(lVar1 + 8 + uVar3 * 0xc) = 1;
    *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
  }
  return *(int *)(param_1 + 0x78) + -1;
}



// FUNCTION 14334d970 FUN_14334d970 body=432 status=ok
// SIG undefined FUN_14334d970(void)

ulonglong FUN_14334d970(longlong param_1,longlong *param_2,float param_3,char param_4)

{
  uint uVar1;
  uint *puVar2;
  float fVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  
  if (param_4 == '\0') {
    if ((*(byte *)((longlong)param_2 + 0x14) & 2) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x68);
      uVar1 = *(uint *)*param_2;
      if (*(float *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 4) * 8) + 4 +
                    (ulonglong)(uVar1 & 0xf) * 8) == param_3) goto LAB_14334d9a9;
    }
    return 0xffffffff;
  }
  if ((*(byte *)((longlong)param_2 + 0x14) & 1) != 0) {
    uVar1 = *(uint *)(*param_2 + 4);
    if (*(float *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar1 >> 4) * 8) + 4 +
                  (ulonglong)(uVar1 & 0xf) * 8) == param_3) {
      uVar4 = FUN_14334d8b0(param_1,*(longlong *)
                                     (*(longlong *)(param_1 + 0x68) + (ulonglong)(uVar1 >> 4) * 8) +
                                    (ulonglong)(uVar1 & 0xf) * 8);
      return uVar4;
    }
  }
  puVar2 = (uint *)*param_2;
  lVar6 = *(longlong *)(param_1 + 0x68);
  uVar1 = *puVar2;
  if (*(float *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 4) * 8) + 4 +
                (ulonglong)(uVar1 & 0xf) * 8) != param_3) {
    uVar4 = (ulonglong)(*puVar2 & 0xf);
    lVar6 = *(longlong *)(lVar6 + (ulonglong)(*puVar2 >> 4) * 8);
    fVar7 = (param_3 - *(float *)(lVar6 + 4 + uVar4 * 8)) * (float)puVar2[2] +
            *(float *)(lVar6 + uVar4 * 8);
    if ((param_3 != *(float *)(param_1 + 0x19c)) ||
       (fVar3 = ABS(fVar7 - *(float *)(param_1 + 0x198)),
       *(float *)(param_1 + 0x10) <= fVar3 && fVar3 != *(float *)(param_1 + 0x10))) {
      *(float *)(param_1 + 0x198) = fVar7;
      *(float *)(param_1 + 0x19c) = param_3;
      uVar4 = *(ulonglong *)(param_1 + 0x78) >> 4;
      if (*(ulonglong *)(param_1 + 0x80) <= uVar4) {
        FUN_143329c80(param_1 + 0x70,uVar4);
      }
      uVar5 = (ulonglong)(*(uint *)(param_1 + 0x78) & 0xf);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x90) + uVar4 * 8);
      *(ulonglong *)(lVar6 + uVar5 * 0xc) = CONCAT44(param_3,fVar7);
      *(undefined4 *)(lVar6 + 8 + uVar5 * 0xc) = 1;
      *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 1;
    }
    return (ulonglong)(*(int *)(param_1 + 0x78) - 1);
  }
LAB_14334d9a9:
  uVar4 = FUN_14334d8b0(param_1,*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 4) * 8) +
                                (ulonglong)(uVar1 & 0xf) * 8);
  return uVar4;
}



// FUNCTION 14334db20 FUN_14334db20 body=155 status=ok
// SIG undefined FUN_14334db20(void)

void FUN_14334db20(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 4;
      uVar1 = FUN_1433245e0(*param_1,0x20);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x50);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 14334dbc0 FUN_14334dbc0 body=155 status=ok
// SIG undefined FUN_14334dbc0(void)

void FUN_14334dbc0(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 8;
      uVar1 = FUN_1433245e0(*param_1,0x40);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x200);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 14334dc60 FUN_14334dc60 body=155 status=ok
// SIG undefined FUN_14334dc60(void)

void FUN_14334dc60(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 4;
      uVar1 = FUN_1433245e0(*param_1,0x20);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x80);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 14334dd00 FUN_14334dd00 body=155 status=ok
// SIG undefined FUN_14334dd00(void)

void FUN_14334dd00(undefined8 *param_1,ulonglong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((ulonglong)param_1[3] <= param_2) {
    if (param_1[4] == 0) {
      param_1[3] = 0x10;
      uVar1 = FUN_1433245e0(*param_1,0x80);
      param_1[4] = uVar1;
    }
    else {
      _Dst = (void *)FUN_1433245e0(*param_1,param_1[3] << 4);
      _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_1[4],param_1[2] << 3);
      param_1[4] = _Dst;
      param_1[3] = param_1[3] * 2;
    }
  }
  uVar1 = FUN_1433245e0(*param_1,0x180);
  *(undefined8 *)(param_1[4] + param_2 * 8) = uVar1;
  param_1[2] = param_1[2] + 1;
  return;
}



// FUNCTION 14334ddc0 FUN_14334ddc0 body=418 status=ok
// SIG undefined FUN_14334ddc0(void)

void FUN_14334ddc0(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_20;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(param_3 >> 4) * 8);
  fVar8 = 0.0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + (ulonglong)(param_2 >> 4) * 8);
  fVar7 = *(float *)(lVar1 + (ulonglong)(param_3 & 0xf) * 0xc) -
          *(float *)(lVar2 + (ulonglong)(param_2 & 0xf) * 0xc);
  fVar6 = *(float *)(lVar1 + 4 + (ulonglong)(param_3 & 0xf) * 0xc) -
          *(float *)(lVar2 + 4 + (ulonglong)(param_2 & 0xf) * 0xc);
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar5 = fVar5 + fVar5;
  if (fVar5 != 0.0) {
    fVar5 = (fVar7 * fVar7) / fVar5;
    if (fVar7 < 0.0) {
      fVar5 = -fVar5;
    }
    if (0.0 < fVar6) {
      fVar5 = 1.0 - fVar5;
    }
    fVar8 = fVar5 - 0.5;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x280) >> 4;
  if (*(ulonglong *)(param_1 + 0x288) <= uVar4) {
    FUN_143329c80(param_1 + 0x278,uVar4);
  }
  uVar3 = (ulonglong)(*(uint *)(param_1 + 0x280) & 0xf);
  local_20 = fVar8 - 1.0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x298) + uVar4 * 8);
  *(ulonglong *)(lVar1 + uVar3 * 0xc) = CONCAT44(param_3,param_2);
  *(float *)(lVar1 + 8 + uVar3 * 0xc) = fVar8;
  *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
  if (local_20 < -1.0) {
    local_20 = local_20 + 2.0;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x280) >> 4;
  if (*(ulonglong *)(param_1 + 0x288) <= uVar4) {
    FUN_143329c80(param_1 + 0x278,uVar4);
  }
  uVar3 = (ulonglong)(*(uint *)(param_1 + 0x280) & 0xf);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x298) + uVar4 * 8);
  *(ulonglong *)(lVar1 + uVar3 * 0xc) = CONCAT44(param_2,param_3);
  *(float *)(lVar1 + 8 + uVar3 * 0xc) = local_20;
  *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + 1;
  return;
}



// FUNCTION 14334df70 FUN_14334df70 body=88 status=ok
// SIG undefined FUN_14334df70(void)

undefined8 * FUN_14334df70(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = &PTR_FUN_145b00ea8;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined2 *)((longlong)param_1 + 0x4a) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7e0000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 14334dfd0 FUN_14334dfd0 body=124 status=ok
// SIG undefined FUN_14334dfd0(void)

void FUN_14334dfd0(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_145b00ea8;
  if (param_1[2] == 0) {
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(ushort *)(lVar1 + 0x4a) = *(ushort *)(lVar1 + 0x4a) & 0xffef;
    }
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    *(undefined8 *)(param_1[3] + 0x10) = param_1[2];
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0xffffffffffffffff;
  }
  if (param_1[8] != 0) {
    FUN_14334e2a0(param_1[8],0);
  }
  FUN_1433cc5c0(param_1 + 7);
  return;
}



// FUNCTION 14334e060 FUN_14334e060 body=391 status=ok
// SIG undefined FUN_14334e060(void)

void FUN_14334e060(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  longlong param_5,short param_6)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  
  plVar1 = (longlong *)param_1[6];
  if (plVar1 == param_3) {
    if (param_4 == 0) {
      if ((longlong *)param_3[8] == param_1) goto LAB_14334e1a8;
    }
    else if ((longlong *)param_3[8] != param_1) goto LAB_14334e1a8;
  }
  if (((plVar1 != (longlong *)0x0) && (FUN_14334e2a0(), plVar1[4] != 0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x58))(plVar1), cVar2 != '\0')) {
    uVar3 = 0x1000000;
    if (-1 < *(int *)((longlong)plVar1 + 0x4c)) {
      plVar1[10] = *(longlong *)(plVar1[4] + 0xb0);
      uVar3 = 0x81000000;
      *(longlong **)(plVar1[4] + 0xb0) = plVar1;
    }
    *(uint *)((longlong)plVar1 + 0x4c) = *(uint *)((longlong)plVar1 + 0x4c) | uVar3;
  }
  if (param_4 != 0) {
    param_1[2] = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x10);
    param_1[3] = *(longlong *)(param_4 + 0x18);
    *(longlong **)(*(longlong *)(param_4 + 0x18) + 0x10) = param_1;
    *(longlong **)(param_4 + 0x18) = param_1;
  }
  if (param_5 != 0) {
    if ((*(byte *)(param_5 + 10) >> 5 & 1) != 0) {
      plVar1 = (longlong *)param_3[8];
      if ((plVar1 != (longlong *)0x0) && (plVar1 != param_1)) {
        FUN_14334e2a0(plVar1,param_2);
      }
      *(ushort *)((longlong)param_3 + 0x4a) = *(ushort *)((longlong)param_3 + 0x4a) | 0x10;
      param_3[8] = (longlong)param_1;
      *(ushort *)((longlong)param_1 + 0x4a) = *(ushort *)((longlong)param_1 + 0x4a) | 0x20;
      (**(code **)(*param_1 + 0x28))(param_1,param_2,0x40);
    }
    uVar5 = *(ushort *)((longlong)param_3 + 0x4a) & 0x80;
    lVar4 = FUN_143321150(param_5 + 0x40,2);
    if (lVar4 != 0) {
      uVar5 = 0x80;
    }
    (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar5);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,*(ushort *)((longlong)param_3 + 0x4a) & 0xc);
  }
  param_1[6] = (longlong)param_3;
LAB_14334e1a8:
  *(short *)(param_1 + 9) = param_6;
  param_1[4] = param_3[4];
                    /* WARNING: Could not recover jumptable at 0x00014334e1e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_5,param_6 + 1);
  return;
}



// FUNCTION 14334e1f0 FUN_14334e1f0 body=166 status=ok
// SIG undefined FUN_14334e1f0(void)

void FUN_14334e1f0(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong lVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x4a);
  uVar2 = (uVar2 * 2 ^ uVar2) & 0x40 ^ uVar2;
  lVar1 = FUN_143321150(param_3 + 0x40,2);
  if (lVar1 != 0) {
    uVar2 = uVar2 | 0x80;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar2 = uVar2 | *(ushort *)(*(longlong *)(param_1 + 0x30) + 0x4a) & 0xc0;
  }
  if ((*(ushort *)(param_3 + 10) >> 9 & 1) != 0) {
    uVar2 = uVar2 | 0x200;
  }
  *(ushort *)(param_1 + 0x4a) = uVar2;
  FUN_14334e380(param_1,param_2,param_3,param_4,1);
  return;
}



// FUNCTION 14334e2a0 FUN_14334e2a0 body=175 status=ok
// SIG undefined FUN_14334e2a0(void)

void FUN_14334e2a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (param_1[2] == 0) {
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(ushort *)(lVar1 + 0x4a) = *(ushort *)(lVar1 + 0x4a) & 0xffef;
      *(ushort *)((longlong)param_1 + 0x4a) = *(ushort *)((longlong)param_1 + 0x4a) & 0xffdf;
    }
  }
  else {
    *(longlong *)(param_1[2] + 0x18) = param_1[3];
    *(longlong *)(param_1[3] + 0x10) = param_1[2];
    param_1[2] = -1;
    param_1[3] = -1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  if ((*(byte *)((longlong)param_1 + 0x4a) & 0x40) != 0) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,0);
  }
  if ((*(byte *)((longlong)param_1 + 0x4a) & 0x80) != 0) {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014334e34b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}



// FUNCTION 14334e380 FUN_14334e380 body=284 status=ok
// SIG undefined FUN_14334e380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334e380(longlong *param_1,undefined8 param_2,longlong param_3,undefined2 param_4,
                  char param_5)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  _DAT_146b643f0 = param_1;
  _DAT_146b643f8 = param_3;
  if ((*(byte *)(param_3 + 10) >> 4 & 1) == 0) {
    if (param_1[8] == 0) {
      return;
    }
    FUN_14334e2a0();
  }
  else {
    lVar3 = FUN_143321150(param_3 + 0x40,4);
    lVar3 = *(longlong *)(lVar3 + 8);
    _DAT_146b64400 = lVar3;
    if (param_5 != '\0') {
      plVar4 = (longlong *)FUN_1432cd220(lVar3);
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_1,0,lVar3,param_4);
      return;
    }
    if ((*(longlong *)(lVar3 + 0x28) == param_1[8]) && (param_1[8] != 0)) {
      return;
    }
    plVar4 = (longlong *)FUN_1432cd220(lVar3);
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_1,0,lVar3,param_4);
  }
  if ((param_1[4] != 0) && (cVar1 = (**(code **)(*param_1 + 0x58))(param_1), cVar1 != '\0')) {
    uVar2 = 0x1000000;
    if (-1 < *(int *)((longlong)param_1 + 0x4c)) {
      param_1[10] = *(longlong *)(param_1[4] + 0xb0);
      uVar2 = 0x81000000;
      *(longlong **)(param_1[4] + 0xb0) = param_1;
    }
    *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) | uVar2;
  }
  return;
}



// FUNCTION 14334e4b0 FUN_14334e4b0 body=185 status=ok
// SIG undefined FUN_14334e4b0(void)

void FUN_14334e4b0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  Matrix2x4<float> *pMVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = FUN_1432cd220(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28));
    if ((char)param_4 < '\0') {
      local_38 = *(undefined8 *)(param_3 + 0x10);
      uStack_30 = *(undefined8 *)(param_3 + 0x18);
      local_28 = *(undefined8 *)(param_3 + 0x20);
      uStack_20 = *(undefined8 *)(param_3 + 0x28);
      local_18 = *(undefined8 *)(param_3 + 0x30);
      uStack_10 = *(undefined8 *)(param_3 + 0x38);
      Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                ((Matrix3x4<float> *)(param_3 + 0x10),(Matrix3x4<float> *)&local_38,
                 (Matrix3x4<float> *)(lVar1 + 0x10));
    }
    else {
      pMVar2 = (Matrix2x4<float> *)FUN_1433620e0(lVar1);
      Scaleform::Render::Matrix2x4<float>::Prepend((Matrix2x4<float> *)(param_3 + 0xa0),pMVar2);
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x20))
              (*(longlong **)(param_1 + 0x40),param_2,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 14334e570 FUN_14334e570 body=125 status=ok
// SIG undefined FUN_14334e570(void)

void FUN_14334e570(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1433cc780(param_1 + 0x38,*(longlong *)(param_1 + 0x38),param_3,0);
    }
  }
  else {
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_28,0);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1433cc780(param_1 + 0x38,*(longlong *)(param_1 + 0x38),param_3,&local_28);
      return;
    }
  }
  return;
}



// FUNCTION 14334e620 FUN_14334e620 body=72 status=ok
// SIG undefined FUN_14334e620(void)

void FUN_14334e620(longlong param_1,undefined8 param_2,ushort param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  lVar1 = FUN_143321150(lVar1 + 0x40,2);
  if (lVar1 != 0) {
    param_3 = param_3 | 0x80;
  }
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xff7f;
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | param_3;
  return;
}



// FUNCTION 14334e670 FUN_14334e670 body=68 status=ok
// SIG undefined FUN_14334e670(void)

void FUN_14334e670(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  uVar1 = param_3;
  if ((param_3 != 0xc) &&
     (uVar1 = *(ushort *)(lVar2 + 10) & 0xc, (*(ushort *)(lVar2 + 10) & 0xc) == 0)) {
    uVar1 = param_3;
  }
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfff3;
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | (ushort)uVar1;
  return;
}



// FUNCTION 14334e6d0 FUN_14334e6d0 body=1778 status=ok
// SIG undefined FUN_14334e6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14334e6d0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  float *param_5,uint param_6)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  Matrix4x4<float> *pMVar12;
  bool bVar13;
  int local_res8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  Matrix4x4<float> local_88 [80];
  
  bVar6 = false;
  local_res8 = 0;
  uVar8 = param_6 >> 7;
  bVar2 = (byte)uVar8 & 1;
  iVar9 = 0;
  bVar13 = false;
  if ((param_6 & 0x10) == 0) goto LAB_14334ebeb;
  local_1d8 = 0;
  uStack_1d0 = 0;
  lVar10 = FUN_143321150(param_3 + 0x40,1);
  if (((*(longlong *)(param_1 + 0x40) != 0) || ((*(ushort *)(param_3 + 10) >> 10 & 1) != 0)) ||
     (lVar10 != 0)) {
    if ((char)param_6 < '\0') {
      if ((param_6 & 0x40) == 0) {
        local_198 = param_4[2];
        uStack_190 = param_4[3];
        local_188 = param_4[4];
        uStack_180 = param_4[5];
        local_178 = param_4[6];
        uStack_170 = param_4[7];
      }
      else {
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_198,(Matrix3x4<float> *)(param_4 + 2),
                   (Matrix2x4<float> *)(param_4 + 0x14));
      }
    }
    else {
      local_1c8 = param_4[0x14];
      uStack_1c0 = param_4[0x15];
      local_1b8 = param_4[0x16];
      uStack_1b0 = param_4[0x17];
      local_178 = 0;
      uStack_170 = 0x3f800000;
      local_198 = local_1c8;
      uStack_190 = uStack_1c0;
      local_188 = local_1b8;
      uStack_180 = uStack_1b0;
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x38);
    local_1c8 = 0x3f800000;
    uStack_1c0 = 0;
    local_1b8 = 0x3f80000000000000;
    uStack_1b0 = 0;
    for (; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      iVar9 = (**(code **)(*plVar5 + 8))(plVar5);
      if (iVar9 == 4) {
        if (plVar5 != (longlong *)0x0) {
          lVar10 = plVar5[3];
          uVar11 = FUN_1433535a0(param_4);
          iVar9 = FUN_14334f460(param_1,&local_1d8,&local_1c8,&local_198,uVar11,(char)lVar10);
          cVar7 = FUN_1433cc980(plVar5,iVar9,&local_1c8);
          if (cVar7 != '\0') {
            *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x40000;
            if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
              FUN_143351c00(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x30),0x1000000);
            }
          }
          goto LAB_14334e8d8;
        }
        break;
      }
    }
    lVar10 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
    uVar1 = *(undefined2 *)(lVar10 + 10);
    uVar11 = FUN_1433535a0(param_4);
    iVar9 = FUN_14334f460(param_1,&local_1d8,&local_1c8,&local_198,uVar11,
                          (byte)((ushort)uVar1 >> 0xf));
LAB_14334e8d8:
    if ((((uVar8 & 1) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
       ((lVar10 = FUN_1432cd220(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28)),
        (*(byte *)(lVar10 + 200) & 0x30) == 0 && (iVar9 != 0)))) {
      if (iVar9 == 1) {
        bVar6 = true;
        local_res8 = 1;
      }
      else {
        Scaleform::Render::Matrix2x4<float>::EncloseTransform
                  ((Matrix2x4<float> *)(param_4 + 0x14),(Rect<float> *)&local_1d8,
                   (Rect<float> *)&local_1d8);
        cVar7 = FUN_143353710(param_5,param_5,&local_1d8);
        if (cVar7 == '\0') {
          bVar6 = true;
          local_res8 = 1;
        }
      }
    }
  }
  FUN_14334edd0(param_1,param_2,param_3,param_4,param_6,param_5,&local_198,bVar2);
  FUN_14334ef60(param_1,param_2,param_3,param_4,param_6,param_5,&local_198,bVar2);
  iVar9 = local_res8;
  bVar13 = bVar6;
  if ((param_6 & 0x20) == 0) {
    if (bVar6) goto LAB_14334ebeb;
  }
  else {
    if (bVar6) goto LAB_14334ebeb;
    if (((ABS(*(float *)((longlong)param_4 + 0xcc)) < 0.001) &&
        (ABS(*(float *)((longlong)param_4 + 0xdc)) < 0.003921569)) &&
       ((*(byte *)(param_1 + 0x4a) & 0x40) == 0)) {
      iVar9 = 2;
      bVar13 = true;
      goto LAB_14334ebeb;
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if ((uVar8 & 1) == 0) {
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)(param_4 + 0x14),(Rect<float> *)&local_1d8,
                 (Rect<float> *)(param_3 + 0x70));
      if (((param_5[3] < local_1d8._4_4_) || (uStack_1d0._4_4_ < param_5[1])) ||
         (((float)uStack_1d0 < *param_5 || (param_5[2] < (float)local_1d8)))) {
        iVar9 = 3;
        bVar13 = true;
      }
    }
    else {
      Scaleform::Render::TransformArgs::GetMatrix3D(param_4,param_6,&local_198);
      lVar10 = FUN_1432cd220(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      pMVar12 = (Matrix4x4<float> *)FUN_1433535a0(param_4);
      local_1c8 = 0;
      uStack_1c0 = 0;
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
                (local_88,pMVar12,(Matrix3x4<float> *)&local_198);
      Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous
                (local_88,(Rect<float> *)&local_1c8,(Rect<float> *)(param_3 + 0x70));
      if (((*(uint *)(lVar10 + 200) & 0x30) - 0x10 & 0xffffffdf) == 0) {
        iVar3 = *(int *)(lVar10 + 0xb4);
        iVar4 = *(int *)(lVar10 + 0xb0);
      }
      else {
        iVar3 = *(int *)(lVar10 + 0xb0);
        iVar4 = *(int *)(lVar10 + 0xb4);
      }
      if (((param_5[3] < (1.0 - uStack_1c0._4_4_) * (float)iVar4 * 0.5) ||
          ((1.0 - local_1c8._4_4_) * (float)iVar4 * 0.5 < param_5[1])) ||
         ((((float)uStack_1c0 + 1.0) * (float)iVar3 * 0.5 < *param_5 ||
          (param_5[2] < ((float)local_1c8 + 1.0) * (float)iVar3 * 0.5)))) {
        iVar9 = 5;
        bVar13 = true;
      }
    }
  }
LAB_14334ebeb:
  if ((((((*(longlong *)(param_1 + 0x20) == 0) ||
         (lVar10 = FUN_1432cd220(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28)),
         (*(byte *)(lVar10 + 200) & 0x30) == 0)) && (bVar13)) && (iVar9 != 5)) &&
      ((iVar9 != 3 || ((*(ushort *)(param_3 + 10) & 0x4000) == 0)))) &&
     (lVar10 = *(longlong *)(param_1 + 0x20), param_1 != lVar10)) {
    if ((((*(ushort *)(param_1 + 0x4a) & 2) == 0) &&
        (*(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | 2, lVar10 != 0)) &&
       (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_143351c00(lVar10,*(longlong *)(param_1 + 0x30),0x1000000);
    }
    param_6 = param_6 & 0xffffffef;
  }
  else if ((*(ushort *)(param_1 + 0x4a) & 2) != 0) {
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfffd;
    if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      FUN_143351c00(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x30),0x1000000);
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if ((char)param_6 < '\0') {
      if ((param_6 & 0x40) == 0) {
        local_198 = param_4[2];
        uStack_190 = param_4[3];
        local_188 = param_4[4];
        uStack_180 = param_4[5];
        local_178 = param_4[6];
        uStack_170 = param_4[7];
      }
      else {
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_198,(Matrix3x4<float> *)(param_4 + 2),
                   (Matrix2x4<float> *)(param_4 + 0x14));
      }
      FUN_143353260(&local_168,param_4,&local_198);
      local_c8 = _DAT_14621c810;
      uStack_c0 = _DAT_14621c818;
      local_b8 = _DAT_14621c820;
      uStack_b0 = _DAT_14621c828;
    }
    else {
      local_168 = *param_4;
      uStack_160 = param_4[1];
      local_128 = param_4[8];
      local_98 = param_4[0x1a];
      uStack_90 = param_4[0x1b];
      local_c8 = param_4[0x14];
      uStack_c0 = param_4[0x15];
      local_120 = param_4[9];
      local_b8 = param_4[0x16];
      uStack_b0 = param_4[0x17];
      local_d8 = *(undefined1 *)(param_4 + 0x12);
      local_a8 = param_4[0x18];
      uStack_a0 = param_4[0x19];
      local_118 = param_4[10];
      uStack_110 = param_4[0xb];
      local_108 = param_4[0xc];
      uStack_100 = param_4[0xd];
      local_f8 = param_4[0xe];
      uStack_f0 = param_4[0xf];
      local_e8 = param_4[0x10];
      uStack_e0 = param_4[0x11];
    }
    FUN_14334e4b0(param_1,param_2,&local_168,param_6);
  }
  return param_6;
}



// FUNCTION 14334edd0 FUN_14334edd0 body=387 status=ok
// SIG undefined FUN_14334edd0(void)

void FUN_14334edd0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (((*(ushort *)(param_3 + 10) >> 10 & 1) != 0) && ((param_5 & 0x203) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    local_38 = 0x3f800000;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_28 = 0x3f80000000000000;
    uStack_20 = 0;
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
      iVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      if (iVar3 == 3) {
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        uVar4 = FUN_1433535a0(param_4);
        iVar3 = FUN_14334fa80(param_1,&local_48,&local_38,param_7,uVar4,param_6);
        if ((iVar3 == 0) && (param_8 == '\0')) {
          return;
        }
        cVar2 = '\0';
        FUN_1433cd450(plVar1,param_4 + 0xc0);
        if ((param_5 & 1) != 0) {
          if ((param_8 == '\0') && (iVar3 != 1)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          cVar2 = FUN_1433ccee0(plVar1,&local_38,param_4 + 0xa0,uVar4);
        }
        if ((param_5 >> 9 & 1) == 0 && cVar2 == '\0') {
          return;
        }
        uVar4 = FUN_143321150(param_3 + 0x40,3);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14334ef60 FUN_14334ef60 body=540 status=ok
// SIG undefined FUN_14334ef60(void)

void FUN_14334ef60(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  longlong *plVar1;
  undefined **ppuVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar5 = FUN_143321150(param_3 + 0x40,1);
  if ((lVar5 != 0) && ((param_5 & 0x203) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    local_58 = 0x3f800000;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 0x3f80000000000000;
    uStack_40 = 0;
    for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
      iVar4 = (**(code **)(*plVar1 + 8))(plVar1);
      if (iVar4 == 1) {
        if (plVar1 == (longlong *)0x0) {
          return;
        }
        uVar6 = FUN_1433535a0(param_4);
        iVar4 = FUN_14334fa80(param_1,&local_68,&local_58,param_7,uVar6,param_6);
        if (iVar4 == 0) {
          return;
        }
        ppuVar2 = (undefined **)plVar1[3];
        if (ppuVar2 != &PTR_LOOP_1467cd040) {
          *(int *)(*ppuVar2 + 8) = *(int *)(*ppuVar2 + 8) + 1;
        }
        puVar7 = *ppuVar2;
        if ((puVar7[0xf] & 1) == 0) {
          puVar7 = &DAT_1467ccfd0;
        }
        else {
          puVar7 = puVar7 + ((ulonglong)
                             (byte)(&DAT_1467ccff0)[(ulonglong)((byte)puVar7[0xf] & 0xf) * 5] + 1) *
                            0x10;
        }
        cVar3 = Scaleform::Render::Cxform::operator!=(puVar7,param_4 + 0xc0);
        if (ppuVar2 != &PTR_LOOP_1467cd040) {
          FUN_1432c03a0(*ppuVar2);
        }
        cVar3 = cVar3 != '\0';
        if ((bool)cVar3) {
          FUN_1433cd450(plVar1,param_4 + 0xc0);
        }
        if ((param_5 & 1) != 0) {
          if ((param_8 == '\0') && (iVar4 != 1)) {
            uVar6 = 0;
          }
          else {
            uVar6 = 1;
          }
          cVar3 = FUN_1433ccee0(plVar1,&local_58,param_4 + 0xa0,uVar6);
        }
        if ((param_5 >> 9 & 1) == 0 && cVar3 == '\0') {
          return;
        }
        uVar6 = FUN_143321150(param_3 + 0x40,1);
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14334f190 FUN_14334f190 body=704 status=ok
// SIG undefined FUN_14334f190(void)

undefined8 FUN_14334f190(longlong param_1,float *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  Matrix2x4<float> *pMVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar7 = *(longlong *)(param_3 + 0x40);
  lVar5 = FUN_1432cd220(*(undefined8 *)(lVar7 + 0x28));
  if ((*(float *)(lVar5 + 0x88) <= *(float *)(lVar5 + 0x80)) ||
     (*(float *)(lVar5 + 0x8c) <= *(float *)(lVar5 + 0x84))) {
    uVar8 = 0;
  }
  else {
    bVar4 = (byte)((ushort)*(undefined2 *)(lVar5 + 10) >> 8);
    for (lVar3 = param_1; bVar4 = bVar4 >> 1 & 1, lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (bVar4 != 0) goto LAB_14334f239;
      lVar6 = FUN_1432cd220(*(undefined8 *)(lVar3 + 0x28));
      bVar4 = (byte)((ushort)*(undefined2 *)(lVar6 + 10) >> 8);
    }
    if (bVar4 == 0) {
      uVar8 = FUN_1432cd220(*(undefined8 *)(param_3 + 0x28));
      puVar9 = (undefined4 *)FUN_1433620e0(lVar5);
      local_38 = *puVar9;
      local_34 = puVar9[1];
      local_30 = puVar9[2];
      local_2c = puVar9[3];
      local_28 = puVar9[4];
      local_24 = puVar9[5];
      local_20 = puVar9[6];
      local_1c = puVar9[7];
      if (*(longlong *)(lVar7 + 0x30) != param_1) {
        if (*(longlong *)(lVar7 + 0x30) == param_3) {
          pMVar10 = (Matrix2x4<float> *)FUN_1433620e0(uVar8);
        }
        else {
          uVar8 = FUN_1432cd220(*(undefined8 *)(lVar7 + 0x28));
          puVar9 = (undefined4 *)FUN_1433620e0(uVar8);
          local_38 = *puVar9;
          local_34 = puVar9[1];
          local_30 = puVar9[2];
          local_2c = puVar9[3];
          local_28 = puVar9[4];
          local_24 = puVar9[5];
          local_20 = puVar9[6];
          local_1c = puVar9[7];
          for (lVar7 = *(longlong *)(lVar7 + 0x30); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30))
          {
            uVar8 = FUN_1432cd220(*(undefined8 *)(lVar7 + 0x28));
            pMVar10 = (Matrix2x4<float> *)FUN_1433620e0(uVar8);
            Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_38,pMVar10);
          }
          local_58 = 0x3f800000;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_48 = 0;
          uStack_44 = 0x3f800000;
          uStack_40 = 0;
          uStack_3c = 0;
          FUN_14334fed0(param_1,&local_58);
          pMVar10 = (Matrix2x4<float> *)&local_58;
        }
        Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_38,pMVar10);
      }
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)&local_38,(Rect<float> *)&local_58,
                 (Rect<float> *)(lVar5 + 0x70));
      *(ulonglong *)param_2 = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(param_2 + 2) = CONCAT44(uStack_4c,uStack_50);
    }
    else {
LAB_14334f239:
      lVar7 = FUN_1432cd220(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28));
      if (((*(uint *)(lVar7 + 200) & 0x30) - 0x10 & 0xffffffdf) == 0) {
        iVar1 = *(int *)(lVar7 + 0xb4);
        iVar2 = *(int *)(lVar7 + 0xb0);
      }
      else {
        iVar1 = *(int *)(lVar7 + 0xb0);
        iVar2 = *(int *)(lVar7 + 0xb4);
      }
      param_2[1] = (float)iVar2 * 0.0 * 0.5;
      *param_2 = (float)iVar1 * 0.0 * 0.5;
      param_2[3] = (float)iVar2 * 2.0 * 0.5;
      param_2[2] = (float)iVar1 * 2.0 * 0.5;
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 14334f460 FUN_14334f460 body=1558 status=ok
// SIG undefined FUN_14334f460(void)

undefined8
FUN_14334f460(longlong param_1,float *param_2,Matrix2x4<float> *param_3,Matrix3x4<float> *param_4,
             Matrix4x4<float> *param_5,char param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_148 [4];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  Matrix4x4<float> local_c8 [160];
  
  lVar4 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  puVar7 = (undefined8 *)(param_1 + 0x40);
  lVar5 = FUN_1432cd220(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x28));
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar8 = 0;
  }
  else {
    bVar9 = (byte)((ushort)*(undefined2 *)(lVar5 + 10) >> 9) & 1;
    do {
      if (bVar9 != 0) goto LAB_14334f6e6;
      lVar6 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
      param_1 = *(longlong *)(param_1 + 0x30);
      bVar9 = (byte)((ushort)*(undefined2 *)(lVar6 + 10) >> 9) & 1;
    } while (param_1 != 0);
    if (bVar9 == 0) {
      local_138 = *(undefined8 *)param_4;
      uStack_130 = *(undefined8 *)(param_4 + 8);
      local_128 = *(undefined8 *)(param_4 + 0x10);
      uStack_120 = *(undefined8 *)(param_4 + 0x18);
      if (param_6 == '\0') {
        puVar7 = (undefined8 *)FUN_1433620e0(lVar5);
        local_108 = *puVar7;
        local_100 = puVar7[1];
        local_f8 = puVar7[2];
        local_f0 = puVar7[3];
        Scaleform::Render::Matrix2x4<float>::EncloseTransform
                  ((Matrix2x4<float> *)&local_108,(Rect<float> *)local_148,
                   (Rect<float> *)(lVar5 + 0x70));
        *param_2 = local_148[0];
        param_2[1] = local_148[1];
        param_2[2] = local_148[2];
        param_2[3] = local_148[3];
        if ((((local_148[3] < *(float *)(lVar4 + 0x74)) || (*(float *)(lVar4 + 0x7c) < local_148[1])
             ) || (*(float *)(lVar4 + 0x78) < local_148[0])) ||
           (local_148[2] < *(float *)(lVar4 + 0x70))) {
          return 1;
        }
        fVar10 = *(float *)(lVar4 + 0x70);
        if (local_148[0] <= *(float *)(lVar4 + 0x70)) {
          fVar10 = local_148[0];
        }
        fVar12 = local_148[2];
        if (local_148[2] <= *(float *)(lVar4 + 0x78)) {
          fVar12 = *(float *)(lVar4 + 0x78);
        }
        fVar13 = local_148[3];
        if (local_148[3] <= *(float *)(lVar4 + 0x7c)) {
          fVar13 = *(float *)(lVar4 + 0x7c);
        }
        fVar11 = *(float *)(lVar4 + 0x74);
        if (local_148[1] <= *(float *)(lVar4 + 0x74)) {
          fVar11 = local_148[1];
        }
        fVar10 = _guard_xfg_dispatch_icall_nop(fVar10 - 160.0);
        fVar11 = _guard_xfg_dispatch_icall_nop(fVar11 - 160.0);
        fVar12 = _guard_xfg_dispatch_icall_nop(fVar12 + 160.0);
        fVar13 = _guard_xfg_dispatch_icall_nop(fVar13 + 160.0);
      }
      else {
        fVar10 = *(float *)(lVar4 + 0x70);
        fVar11 = *(float *)(lVar4 + 0x74);
        fVar12 = *(float *)(lVar4 + 0x78);
        fVar13 = *(float *)(lVar4 + 0x7c);
      }
      *(float *)(param_3 + 0xc) = fVar10;
      *(float *)(param_3 + 0x1c) = fVar11;
      *(undefined8 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(float *)(param_3 + 0x14) = fVar13 - fVar11;
      *(float *)param_3 = fVar12 - fVar10;
      Scaleform::Render::Matrix2x4<float>::Append(param_3,(Matrix2x4<float> *)&local_138);
    }
    else {
LAB_14334f6e6:
      local_100 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_d8 = 0;
      uStack_130 = 0;
      uStack_120 = 0;
      local_118 = 0;
      local_108 = 0x3f800000;
      local_f8 = 0x3f80000000000000;
      local_e0 = 0x3f800000;
      local_d0 = 0x3f80000000000000;
      local_138 = 0x3f800000;
      local_128 = 0x3f80000000000000;
      local_110 = 0x3f800000;
      lVar6 = FUN_1432cd220(*(undefined8 *)(*plVar1 + 0x28));
      if (param_6 == '\0') {
        FUN_14334ff70(*puVar7,&local_138,&local_108);
        local_148[0] = 0.0;
        local_148[1] = 0.0;
        local_148[2] = 0.0;
        local_148[3] = 0.0;
        Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
                  (local_c8,(Matrix4x4<float> *)&local_108,(Matrix3x4<float> *)&local_138);
        Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous
                  (local_c8,(Rect<float> *)local_148,(Rect<float> *)(lVar5 + 0x70));
        iVar2 = *(int *)(lVar6 + 0xb0);
        iVar3 = *(int *)(lVar6 + 0xb4);
        fVar11 = 1.0 - local_148[3];
        fVar12 = local_148[0] + 1.0;
        fVar10 = local_148[2] + 1.0;
        param_2[3] = (1.0 - local_148[1]) * (float)iVar3 * 0.5;
        local_148[0] = 0.0;
        local_148[1] = 0.0;
        local_148[2] = 0.0;
        local_148[3] = 0.0;
        *param_2 = fVar12 * (float)iVar2 * 0.5;
        param_2[1] = fVar11 * (float)iVar3 * 0.5;
        param_2[2] = fVar10 * (float)iVar2 * 0.5;
        Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(local_c8,param_5,param_4);
        Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous
                  (local_c8,(Rect<float> *)local_148,(Rect<float> *)(lVar4 + 0x70));
        fVar10 = (local_148[0] + 1.0) * (float)*(int *)(lVar6 + 0xb0) * 0.5;
        fVar11 = (1.0 - local_148[3]) * (float)*(int *)(lVar6 + 0xb4) * 0.5;
        if (*param_2 <= fVar10) {
          fVar10 = *param_2;
        }
        if (param_2[1] <= fVar11) {
          fVar11 = param_2[1];
        }
        fVar13 = (local_148[2] + 1.0) * (float)*(int *)(lVar6 + 0xb0) * 0.5;
        fVar14 = (1.0 - local_148[1]) * (float)*(int *)(lVar6 + 0xb4) * 0.5;
        fVar12 = param_2[2];
        if (param_2[2] <= fVar13) {
          fVar12 = fVar13;
        }
        *param_2 = fVar10;
        fVar13 = param_2[3];
        if (param_2[3] <= fVar14) {
          fVar13 = fVar14;
        }
        param_2[1] = fVar11;
        param_2[2] = fVar12;
        param_2[3] = fVar13;
        fVar10 = _guard_xfg_dispatch_icall_nop(fVar10 - 8.0);
        fVar11 = _guard_xfg_dispatch_icall_nop(fVar11 - 8.0);
        fVar12 = _guard_xfg_dispatch_icall_nop(fVar12 + 8.0);
        fVar13 = _guard_xfg_dispatch_icall_nop(fVar13 + 8.0);
      }
      else {
        local_148[0] = 0.0;
        local_148[1] = 0.0;
        local_148[2] = 0.0;
        local_148[3] = 0.0;
        Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(local_c8,param_5,param_4);
        Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous
                  (local_c8,(Rect<float> *)local_148,(Rect<float> *)(lVar4 + 0x70));
        fVar10 = (local_148[0] + 1.0) * (float)*(int *)(lVar6 + 0xb0) * 0.5;
        fVar11 = (1.0 - local_148[3]) * (float)*(int *)(lVar6 + 0xb4) * 0.5;
        fVar12 = (local_148[2] + 1.0) * (float)*(int *)(lVar6 + 0xb0) * 0.5;
        fVar13 = (1.0 - local_148[1]) * (float)*(int *)(lVar6 + 0xb4) * 0.5;
      }
      *(float *)(param_3 + 0xc) = fVar10;
      *(float *)(param_3 + 0x1c) = fVar11;
      *(undefined8 *)(param_3 + 4) = 0;
      *(undefined4 *)(param_3 + 0x10) = 0;
      *(undefined4 *)(param_3 + 0x18) = 0;
      *(float *)param_3 = fVar12 - fVar10;
      *(float *)(param_3 + 0x14) = fVar13 - fVar11;
    }
    uVar8 = 2;
  }
  return uVar8;
}



// FUNCTION 14334fa80 FUN_14334fa80 body=1096 status=ok
// SIG undefined FUN_14334fa80(void)

char FUN_14334fa80(longlong param_1,Rect<float> *param_2,float *param_3,Matrix3x4<float> *param_4,
                  Matrix4x4<float> *param_5,float *param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8 [4];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  Matrix4x4<float> local_c8 [176];
  
  lVar6 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    cVar5 = '\0';
  }
  else {
    bVar8 = (byte)((ushort)*(undefined2 *)(lVar6 + 10) >> 9) & 1;
    do {
      if (bVar8 != 0) break;
      lVar7 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
      param_1 = *(longlong *)(param_1 + 0x30);
      bVar8 = (byte)((ushort)*(undefined2 *)(lVar7 + 10) >> 9) & 1;
    } while (param_1 != 0);
    local_f8[0] = 0.0;
    local_f8[1] = 0.0;
    local_f8[2] = 0.0;
    local_f8[3] = 0.0;
    local_e8 = 0.0;
    fStack_e4 = 0.0;
    fStack_e0 = 0.0;
    fStack_dc = 0.0;
    if (bVar8 == 0) {
      local_118 = *(undefined8 *)param_4;
      uStack_110 = *(undefined8 *)(param_4 + 8);
      uVar4 = *(undefined4 *)(lVar6 + 0x70);
      uVar2 = *(undefined4 *)(lVar6 + 0x7c);
      uVar3 = *(undefined4 *)(lVar6 + 0x78);
      local_108 = *(undefined8 *)(param_4 + 0x10);
      uStack_100 = *(undefined8 *)(param_4 + 0x18);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar6 + 0x74);
      *(undefined4 *)(param_2 + 8) = uVar3;
      *(undefined4 *)(param_2 + 0xc) = uVar2;
      *(undefined4 *)param_2 = uVar4;
      Scaleform::Render::Matrix2x4<float>::EncloseTransform
                ((Matrix2x4<float> *)&local_118,(Rect<float> *)&local_e8,param_2);
    }
    else {
      lVar7 = FUN_1432cd220(*(undefined8 *)(*plVar1 + 0x28));
      local_118 = 0;
      uStack_110 = 0;
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(local_c8,param_5,param_4);
      Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous
                (local_c8,(Rect<float> *)&local_118,(Rect<float> *)(lVar6 + 0x70));
      local_e8 = ((float)local_118 + 1.0) * (float)*(int *)(lVar7 + 0xb0) * 0.5;
      fStack_e4 = (1.0 - uStack_110._4_4_) * (float)*(int *)(lVar7 + 0xb4) * 0.5;
      fStack_e0 = ((float)uStack_110 + 1.0) * (float)*(int *)(lVar7 + 0xb0) * 0.5;
      fStack_dc = (1.0 - local_118._4_4_) * (float)*(int *)(lVar7 + 0xb4) * 0.5;
    }
    lVar7 = FUN_1432cd220(*(undefined8 *)(*plVar1 + 0x28));
    local_118 = 0;
    uStack_110 = 0;
    cVar5 = FUN_1432dcab0(lVar7 + 0xa0,&local_118,1);
    if (cVar5 == '\0') {
      fVar10 = local_f8[3];
      fVar11 = local_f8[2];
      fVar13 = local_f8[0];
      fVar12 = local_f8[1];
    }
    else {
      local_f8[0] = (float)((int)(float)local_118 - *(int *)(lVar7 + 0xa8));
      local_f8[1] = (float)((int)local_118._4_4_ - *(int *)(lVar7 + 0xac));
      local_f8[2] = (float)((int)(float)uStack_110 - *(int *)(lVar7 + 0xa8));
      local_f8[3] = (float)((int)uStack_110._4_4_ - *(int *)(lVar7 + 0xac));
      fVar10 = local_f8[3];
      fVar11 = local_f8[2];
      fVar13 = local_f8[0];
      fVar12 = local_f8[1];
    }
    pfVar9 = local_f8;
    if (param_6 != (float *)0x0) {
      pfVar9 = param_6;
    }
    fVar14 = pfVar9[1];
    fVar15 = *pfVar9;
    fVar16 = pfVar9[3];
    fVar17 = pfVar9[2];
    if (((*(uint *)(lVar7 + 200) & 0x30) - 0x10 & 0xffffffdf) == 0) {
      fVar14 = fVar13;
      fVar15 = fVar12;
      fVar16 = fVar11;
      fVar17 = fVar10;
    }
    local_d8 = fVar15;
    local_d4 = fVar14;
    local_d0 = fVar17;
    local_cc = fVar16;
    FUN_143361900(lVar6,&local_d8,0);
    cVar5 = '\x01';
    fVar17 = fVar17 + 32.0;
    fVar15 = fVar15 - 32.0;
    fVar14 = fVar14 - 32.0;
    fVar16 = fVar16 + 32.0;
    fVar13 = fStack_dc;
    fVar12 = fStack_e0;
    fVar10 = local_e8;
    if ((((fVar17 < fStack_e0) || (fVar16 < fStack_dc)) || (local_e8 < fVar15)) ||
       (fVar11 = fStack_e4, fStack_e4 < fVar14)) {
      cVar5 = '\0';
      if (((fVar16 < fStack_e4) || (fStack_dc < fVar14)) ||
         ((fStack_e0 < fVar15 || (fVar17 < local_e8)))) {
        return '\0';
      }
      if (local_e8 < fVar15) {
        fVar10 = fVar15;
      }
      fVar11 = fVar14;
      if (fVar14 <= fStack_e4) {
        fVar11 = fStack_e4;
      }
      if (fVar17 <= fStack_e0) {
        fVar12 = fVar17;
      }
      if (fVar16 <= fStack_dc) {
        fVar13 = fVar16;
      }
    }
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    fVar12 = _guard_xfg_dispatch_icall_nop(fVar12);
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
    *(float *)(param_2 + 0xc) = fVar13;
    *(float *)(param_2 + 8) = fVar12;
    *(float *)param_2 = fVar10;
    *(float *)(param_2 + 4) = fVar11;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[4] = 0.0;
    param_3[6] = 0.0;
    param_3[5] = fVar13 - fVar11;
    cVar5 = cVar5 + '\x01';
    *param_3 = fVar12 - fVar10;
    param_3[3] = fVar10;
    param_3[7] = fVar11;
  }
  return cVar5;
}



// FUNCTION 14334fed0 FUN_14334fed0 body=144 status=ok
// SIG undefined FUN_14334fed0(void)

void FUN_14334fed0(longlong param_1,Matrix2x4<float> *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  Matrix2x4<float> *pMVar4;
  
  uVar2 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  puVar3 = (undefined4 *)FUN_1433620e0(uVar2);
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(undefined4 *)param_2 = *puVar3;
  *(undefined4 *)(param_2 + 4) = puVar3[1];
  *(undefined4 *)(param_2 + 8) = puVar3[2];
  *(undefined4 *)(param_2 + 0xc) = puVar3[3];
  *(undefined4 *)(param_2 + 0x10) = puVar3[4];
  *(undefined4 *)(param_2 + 0x14) = puVar3[5];
  *(undefined4 *)(param_2 + 0x18) = puVar3[6];
  *(undefined4 *)(param_2 + 0x1c) = puVar3[7];
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
    uVar2 = FUN_1432cd220(*(undefined8 *)(lVar1 + 0x28));
    pMVar4 = (Matrix2x4<float> *)FUN_1433620e0(uVar2);
    Scaleform::Render::Matrix2x4<float>::Append(param_2,pMVar4);
  }
  return;
}



// FUNCTION 14334ff70 FUN_14334ff70 body=586 status=ok
// SIG undefined FUN_14334ff70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14334ff70(longlong param_1,Matrix3x4<float> *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar4 = 0;
  lVar3 = lVar4;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1432cd220();
    if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 10) >> 0xb & 1) != 0)) {
      lVar3 = FUN_143321150(lVar2 + 0x40,5);
    }
  }
  if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 10) >> 0xc & 1) != 0)) {
    lVar4 = FUN_143321150(lVar2 + 0x40,6);
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)param_2 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined8 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  plVar6 = (longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  lVar2 = *plVar6;
  uVar1 = uRam00000001464fade8;
  while (uRam00000001464fade8 = uVar1, lVar2 != 0) {
    lVar2 = *plVar6;
    lVar5 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28));
    local_c8 = *(undefined8 *)param_2;
    uStack_c0 = *(undefined8 *)(param_2 + 8);
    local_b8 = *(undefined8 *)(param_2 + 0x10);
    uStack_b0 = *(undefined8 *)(param_2 + 0x18);
    local_a8 = *(undefined8 *)(param_2 + 0x20);
    uStack_a0 = *(undefined8 *)(param_2 + 0x28);
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
              (param_2,(Matrix3x4<float> *)(lVar5 + 0x10),(Matrix3x4<float> *)&local_c8);
    if ((lVar3 == 0) &&
       (lVar5 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28)),
       (*(ushort *)(lVar5 + 10) >> 0xb & 1) != 0)) {
      lVar3 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28));
      lVar3 = FUN_143321150(lVar3 + 0x40,5);
    }
    if ((lVar4 == 0) &&
       (lVar5 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28)),
       (*(ushort *)(lVar5 + 10) >> 0xc & 1) != 0)) {
      lVar4 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28));
      lVar4 = FUN_143321150(lVar4 + 0x40,6);
    }
    plVar6 = (longlong *)(lVar2 + 0x30);
    uVar1 = uRam00000001464fade8;
    lVar2 = *plVar6;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    *param_3 = _DAT_1464fade0;
    param_3[1] = uVar1;
    uVar1 = uRam00000001464fadf8;
    param_3[2] = _DAT_1464fadf0;
    param_3[3] = uVar1;
    uVar1 = uRam00000001464fae08;
    param_3[4] = _DAT_1464fae00;
    param_3[5] = uVar1;
    local_28 = _DAT_1464fae10;
    uStack_24 = uRam00000001464fae14;
    uStack_20 = uRam00000001464fae18;
    uStack_1c = uRam00000001464fae1c;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 8);
    local_c8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_c0 = *(undefined8 *)(lVar3 + 0x18);
    local_b8 = *(undefined8 *)(lVar3 + 0x20);
    uStack_b0 = *(undefined8 *)(lVar3 + 0x28);
    local_a8 = *(undefined8 *)(lVar3 + 0x30);
    uStack_a0 = *(undefined8 *)(lVar3 + 0x38);
    lVar3 = *(longlong *)(lVar4 + 8);
    local_98 = *(undefined8 *)(lVar3 + 0x10);
    uStack_90 = *(undefined8 *)(lVar3 + 0x18);
    local_88 = *(undefined8 *)(lVar3 + 0x20);
    uStack_80 = *(undefined8 *)(lVar3 + 0x28);
    local_78 = *(undefined8 *)(lVar3 + 0x30);
    uStack_70 = *(undefined8 *)(lVar3 + 0x38);
    local_68 = *(undefined8 *)(lVar3 + 0x40);
    uStack_60 = *(undefined8 *)(lVar3 + 0x48);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_58,(Matrix4x4<float> *)&local_98,
               (Matrix3x4<float> *)&local_c8);
    *param_3 = local_58;
    param_3[1] = uStack_50;
    param_3[2] = local_48;
    param_3[3] = uStack_40;
    param_3[4] = local_38;
    param_3[5] = uStack_30;
  }
  *(undefined4 *)(param_3 + 6) = local_28;
  *(undefined4 *)((longlong)param_3 + 0x34) = uStack_24;
  *(undefined4 *)(param_3 + 7) = uStack_20;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_1c;
  return;
}



// FUNCTION 1433501c0 FUN_1433501c0 body=112 status=ok
// SIG undefined FUN_1433501c0(void)

void FUN_1433501c0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(lVar5 + 0x54);
  uVar2 = *(undefined4 *)(lVar5 + 0x58);
  uVar3 = *(undefined4 *)(lVar5 + 0x5c);
  *param_2 = *(undefined4 *)(lVar5 + 0x50);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar4 = *(undefined8 *)(lVar5 + 0x68);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(param_2 + 6) = uVar4;
  lVar5 = *(longlong *)(param_1 + 0x30);
  while ((lVar5 != 0 &&
         (lVar6 = FUN_1432cd220(*(undefined8 *)(lVar5 + 0x28)),
         (*(ushort *)(lVar6 + 10) >> 10 & 1) == 0))) {
    lVar6 = FUN_1432cd220(*(undefined8 *)(lVar5 + 0x28));
    FUN_1432bfbe0(param_2,lVar6 + 0x50);
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  return;
}



// FUNCTION 143350240 FUN_143350240 body=73 status=ok
// SIG undefined FUN_143350240(void)

ulonglong FUN_143350240(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  while( true ) {
    if (lVar1 == 0) {
      return in_RAX & 0xffffffffffffff00;
    }
    lVar1 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
    if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 10) >> 10 & 1) != 0)) break;
    in_RAX = 0;
    param_1 = *(longlong *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  return 1;
}



// FUNCTION 143350290 FUN_143350290 body=450 status=ok
// SIG undefined FUN_143350290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Matrix4x4<float> * FUN_143350290(longlong param_1,Matrix4x4<float> *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar4 = 0;
  lVar3 = lVar4;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1432cd220();
    if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 10) >> 0xb & 1) != 0)) {
      lVar3 = FUN_143321150(lVar2 + 0x40,5);
    }
  }
  if ((lVar2 != 0) && ((*(ushort *)(lVar2 + 10) >> 0xc & 1) != 0)) {
    lVar4 = FUN_143321150(lVar2 + 0x40,6);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  plVar6 = (longlong *)(param_1 + 0x30);
  uVar1 = uRam00000001464fade8;
  while ((uRam00000001464fade8 = uVar1, lVar2 != 0 && ((lVar3 == 0 || (lVar4 == 0))))) {
    lVar2 = *plVar6;
    if ((lVar3 == 0) &&
       (lVar5 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28)),
       (*(ushort *)(lVar5 + 10) >> 0xb & 1) != 0)) {
      lVar3 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28));
      lVar3 = FUN_143321150(lVar3 + 0x40,5);
    }
    if ((lVar4 == 0) &&
       (lVar5 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28)),
       (*(ushort *)(lVar5 + 10) >> 0xc & 1) != 0)) {
      lVar4 = FUN_1432cd220(*(undefined8 *)(lVar2 + 0x28));
      lVar4 = FUN_143321150(lVar4 + 0x40,6);
    }
    plVar6 = (longlong *)(lVar2 + 0x30);
    lVar2 = *plVar6;
    uVar1 = uRam00000001464fade8;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    *(undefined8 *)param_2 = _DAT_1464fade0;
    *(undefined8 *)(param_2 + 8) = uVar1;
    uVar1 = uRam00000001464fadf8;
    *(undefined8 *)(param_2 + 0x10) = _DAT_1464fadf0;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
    uVar1 = uRam00000001464fae08;
    *(undefined8 *)(param_2 + 0x20) = _DAT_1464fae00;
    *(undefined8 *)(param_2 + 0x28) = uVar1;
    uVar1 = uRam00000001464fae18;
    *(undefined8 *)(param_2 + 0x30) = _DAT_1464fae10;
    *(undefined8 *)(param_2 + 0x38) = uVar1;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 8);
    local_78 = *(undefined8 *)(lVar3 + 0x10);
    uStack_70 = *(undefined8 *)(lVar3 + 0x18);
    local_68 = *(undefined8 *)(lVar3 + 0x20);
    uStack_60 = *(undefined8 *)(lVar3 + 0x28);
    local_58 = *(undefined8 *)(lVar3 + 0x30);
    uStack_50 = *(undefined8 *)(lVar3 + 0x38);
    lVar3 = *(longlong *)(lVar4 + 8);
    local_48 = *(undefined8 *)(lVar3 + 0x10);
    uStack_40 = *(undefined8 *)(lVar3 + 0x18);
    local_38 = *(undefined8 *)(lVar3 + 0x20);
    uStack_30 = *(undefined8 *)(lVar3 + 0x28);
    local_28 = *(undefined8 *)(lVar3 + 0x30);
    uStack_20 = *(undefined8 *)(lVar3 + 0x38);
    local_18 = *(undefined8 *)(lVar3 + 0x40);
    uStack_10 = *(undefined8 *)(lVar3 + 0x48);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              (param_2,(Matrix4x4<float> *)&local_48,(Matrix3x4<float> *)&local_78);
  }
  return param_2;
}



// FUNCTION 143350470 FUN_143350470 body=120 status=ok
// SIG undefined FUN_143350470(void)

void FUN_143350470(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145af8b08;
  plVar1 = (longlong *)param_1[0xf];
  plVar3 = param_1 + 0xc;
  if (param_1 == (undefined8 *)0xffffffffffffff90) {
    plVar3 = (longlong *)0x0;
  }
  while (plVar2 = plVar1, plVar2 != plVar3) {
    plVar1 = (longlong *)plVar2[3];
    plVar2[3] = 0;
    plVar2[6] = 0;
    plVar2[2] = 0;
    if (plVar2[4] != 0) {
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  FUN_14334dfd0(param_1);
  return;
}



// FUNCTION 1433504f0 FUN_1433504f0 body=747 status=ok
// SIG undefined FUN_1433504f0(void)

void FUN_1433504f0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ushort uVar15;
  int iVar16;
  ulonglong local_res20;
  
  if ((param_3 & 0x20) == 0) goto LAB_14335054a;
  lVar7 = param_1[6];
  lVar6 = FUN_1432cd220(param_1[5]);
  if (lVar7 == 0) {
    uVar9 = 4;
LAB_143350531:
    uVar15 = *(ushort *)(lVar6 + 10) & 0xc;
    if ((*(ushort *)(lVar6 + 10) & 0xc) == 0) {
      uVar15 = uVar9;
    }
  }
  else {
    uVar9 = *(ushort *)(lVar7 + 0x4a) & 0xc;
    if (uVar9 != 0xc) goto LAB_143350531;
    uVar15 = 0xc;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar15);
LAB_14335054a:
  if ((param_3 & 0x300) != 0) {
    bVar3 = false;
    lVar7 = FUN_1432cd220(param_1[5]);
    uVar12 = 0;
    puVar1 = (ulonglong *)(lVar7 + 0x90);
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      local_res20 = 0;
    }
    else if ((uVar2 & 1) == 0) {
      local_res20 = (ulonglong)(*(longlong *)(lVar7 + 0x98) != 0) + 1;
    }
    else {
      local_res20 = *(ulonglong *)((uVar2 & 0xfffffffffffffffe) + 8);
    }
    plVar14 = (longlong *)param_1[0xf];
    if (local_res20 != 0) {
      do {
        iVar16 = (int)uVar12;
        puVar10 = puVar1;
        if ((*(byte *)puVar1 & 1) != 0) {
          puVar10 = (ulonglong *)((*puVar1 & 0xfffffffffffffffe) + 0x10);
        }
        uVar2 = puVar10[uVar12];
        plVar8 = *(longlong **)(uVar2 + 0x28);
        if (plVar8 == plVar14) {
          plVar14 = (longlong *)plVar14[3];
        }
        else {
          if (plVar8 != (longlong *)0x0) {
            plVar13 = (longlong *)plVar8[6];
            if ((plVar13 == param_1) && (plVar8[2] != 0)) {
              plVar13 = plVar14;
              do {
                plVar14 = (longlong *)plVar13[3];
                FUN_14334e2a0(plVar13);
                if (plVar14 == plVar8) break;
                plVar11 = param_1 + 0xc;
                if (param_1 == (longlong *)0xffffffffffffff90) {
                  plVar11 = (longlong *)0x0;
                }
                plVar13 = plVar14;
              } while (plVar14 != plVar11);
              iVar16 = iVar16 + -1;
              bVar3 = true;
              goto LAB_143350738;
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_14334e2a0(plVar8,param_2);
              lVar7 = plVar13[4];
              if (lVar7 != 0) {
                uVar5 = 0x1000000;
                if (-1 < *(int *)((longlong)plVar13 + 0x4c)) {
                  plVar13[10] = *(longlong *)(lVar7 + 0xb0);
                  uVar5 = 0x81000000;
                  *(longlong **)(lVar7 + 0xb0) = plVar13;
                }
                *(uint *)((longlong)plVar13 + 0x4c) = *(uint *)((longlong)plVar13 + 0x4c) | uVar5;
              }
            }
          }
          plVar8 = (longlong *)FUN_1432cd220(uVar2);
          lVar7 = (**(code **)(*plVar8 + 0x28))
                            (plVar8,param_2,param_1,plVar14[2],uVar2,(short)param_1[9] + 1);
          if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0x20), lVar6 != 0)) {
            uVar5 = 3;
            if (-1 < *(int *)(lVar7 + 0x4c)) {
              *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(lVar6 + 0xb0);
              uVar5 = 0x80000003;
              *(longlong *)(lVar6 + 0xb0) = lVar7;
            }
            *(uint *)(lVar7 + 0x4c) = *(uint *)(lVar7 + 0x4c) | uVar5;
          }
          plVar8 = param_1 + 0xc;
          bVar3 = true;
          if (param_1 == (longlong *)0xffffffffffffff90) {
            plVar8 = (longlong *)0x0;
          }
          if ((plVar14 != plVar8) && ((longlong *)plVar14[6] != param_1)) {
            plVar14 = (longlong *)param_1[0xf];
            iVar16 = -1;
          }
        }
LAB_143350738:
        uVar12 = (ulonglong)(iVar16 + 1);
      } while (uVar12 < local_res20);
    }
    uVar5 = 0x1000000;
    plVar8 = param_1 + 0xc;
    if (param_1 == (longlong *)0xffffffffffffff90) {
      plVar8 = (longlong *)0x0;
    }
    while (plVar14 != plVar8) {
      plVar13 = (longlong *)plVar14[3];
      FUN_14334e2a0(plVar14,param_2);
      bVar3 = true;
      plVar14 = plVar13;
    }
    if ((bVar3) && (cVar4 = (**(code **)(*param_1 + 0x58))(param_1), cVar4 != '\0')) {
      if (-1 < *(int *)((longlong)param_1 + 0x4c)) {
        uVar5 = 0x81000000;
        param_1[10] = *(longlong *)(param_1[4] + 0xb0);
        *(longlong **)(param_1[4] + 0xb0) = param_1;
      }
      *(uint *)((longlong)param_1 + 0x4c) = *(uint *)((longlong)param_1 + 0x4c) | uVar5;
    }
  }
  return;
}



// FUNCTION 1433507f0 FUN_1433507f0 body=118 status=ok
// SIG undefined FUN_1433507f0(void)

void FUN_1433507f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x80000000;
  plVar1 = *(longlong **)(param_1 + 0x78);
  plVar2 = (longlong *)(param_1 + 0x60);
  if (param_1 == -0x70) {
    plVar2 = (longlong *)0x0;
  }
  for (; plVar1 != plVar2; plVar1 = (longlong *)plVar1[3]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}



// FUNCTION 143350870 FUN_143350870 body=193 status=ok
// SIG undefined FUN_143350870(void)

void FUN_143350870(longlong param_1,undefined8 param_2,longlong param_3,undefined2 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  
  FUN_14334e1f0();
  puVar7 = (ulonglong *)(param_3 + 0x90);
  uVar6 = 0;
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x10);
  lVar1 = Scaleform::Render::TreeNodeArray::GetSize(puVar7);
  if (lVar1 != 0) {
    do {
      puVar2 = puVar7;
      if ((*(byte *)puVar7 & 1) != 0) {
        puVar2 = (ulonglong *)((*puVar7 & 0xfffffffffffffffe) + 0x10);
      }
      uVar5 = puVar2[uVar6];
      plVar3 = (longlong *)FUN_1432cd220(uVar5);
      uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_1,uVar4,uVar5,param_4);
      uVar6 = uVar6 + 1;
      uVar5 = Scaleform::Render::TreeNodeArray::GetSize(puVar7);
    } while (uVar6 < uVar5);
  }
  return;
}



// FUNCTION 143350940 FUN_143350940 body=980 status=ok
// SIG undefined FUN_143350940(void)

void FUN_143350940(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 uVar15;
  undefined8 *puVar14;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_188 = *param_4;
  uStack_180 = param_4[1];
  local_148 = param_4[8];
  local_128 = param_4[0xc];
  uStack_120 = param_4[0xd];
  local_140 = param_4[9];
  local_f8 = *(undefined1 *)(param_4 + 0x12);
  local_138 = param_4[10];
  uStack_130 = param_4[0xb];
  puVar14 = &local_188;
  local_118 = *(undefined4 *)(param_4 + 0xe);
  uStack_114 = *(undefined4 *)((longlong)param_4 + 0x74);
  uStack_110 = *(undefined4 *)(param_4 + 0xf);
  uStack_10c = *(undefined4 *)((longlong)param_4 + 0x7c);
  local_108 = *(undefined4 *)(param_4 + 0x10);
  uStack_104 = *(undefined4 *)((longlong)param_4 + 0x84);
  uStack_100 = *(undefined4 *)(param_4 + 0x11);
  uStack_fc = *(undefined4 *)((longlong)param_4 + 0x8c);
  uVar5 = FUN_14334e6d0();
  uVar15 = *(undefined4 *)(param_3 + 0x8c);
  uVar1 = *(undefined4 *)(param_3 + 0x88);
  uVar2 = *(undefined4 *)(param_3 + 0x84);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x80);
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar15;
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfbff;
  plVar13 = *(longlong **)(param_1 + 0x78);
  plVar10 = (longlong *)(param_1 + 0x60);
  if (param_1 == -0x70) {
    plVar10 = (longlong *)0x0;
  }
  do {
    uVar15 = (undefined4)((ulonglong)puVar14 >> 0x20);
    if (plVar13 == plVar10) {
      return;
    }
    lVar6 = FUN_1432cd220(plVar13[5]);
    uVar11 = *(uint *)((longlong)plVar13 + 0x4c);
    *(uint *)((longlong)plVar13 + 0x4c) = uVar11 & 0xfffffffc;
    uVar11 = uVar11 & 3;
    uVar12 = uVar11 | uVar5;
    cVar4 = (char)uVar5;
    if ((*(ushort *)(lVar6 + 10) >> 9 & 1) == 0) {
      if ((uVar5 & 0x40) == 0) {
        puVar8 = (undefined4 *)FUN_1433620e0(lVar6);
        local_e8 = *puVar8;
        local_e4 = puVar8[1];
        local_e0 = puVar8[2];
        local_dc = puVar8[3];
        local_d8 = puVar8[4];
        local_d4 = puVar8[5];
        local_d0 = puVar8[6];
        local_cc = puVar8[7];
      }
      else {
        uVar7 = FUN_1433620e0(lVar6);
        FUN_1432be670(&local_e8,uVar7,param_4 + 0x14);
      }
      uVar12 = uVar12 | 0x40;
      if (cVar4 < '\0') {
        local_178 = param_4[2];
        uStack_170 = param_4[3];
        local_168 = param_4[4];
        uStack_160 = param_4[5];
        local_158 = param_4[6];
        uStack_150 = param_4[7];
      }
    }
    else {
      if ((uVar5 & 0x40) == 0) {
        if (cVar4 < '\0') {
          local_78 = param_4[2];
          uStack_70 = param_4[3];
          local_68 = param_4[4];
          uStack_60 = param_4[5];
          local_58 = param_4[6];
          uStack_50 = param_4[7];
          Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                    ((Matrix3x4<float> *)&local_178,(Matrix3x4<float> *)&local_78,
                     (Matrix3x4<float> *)(lVar6 + 0x10));
        }
      }
      else {
        if (cVar4 < '\0') {
          Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                    ((Matrix3x4<float> *)&local_a8,(Matrix3x4<float> *)(param_4 + 2),
                     (Matrix2x4<float> *)(param_4 + 0x14));
        }
        else {
          local_a8 = param_4[0x14];
          uStack_a0 = param_4[0x15];
          local_98 = param_4[0x16];
          uStack_90 = param_4[0x17];
          local_88 = 0;
          uStack_80 = 0x3f800000;
        }
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_178,(Matrix3x4<float> *)&local_a8,
                   (Matrix3x4<float> *)(lVar6 + 0x10));
        uVar12 = uVar11 | uVar5 & 0xffffffbf;
      }
      uVar12 = uVar12 | 0x80;
    }
    FUN_143353830(&local_188,lVar6,param_4);
    bVar3 = true;
    if (((byte)((ushort)*(undefined2 *)(param_3 + 10) >> 10) & 1) != 0) {
      lVar9 = FUN_143321150(param_3 + 0x40,3);
      if ((lVar9 != 0) &&
         (lVar9 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
                  ::GetRawUserObject(lVar9), lVar9 != 0)) {
        cVar4 = Scaleform::Render::FilterSet::IsContributing(lVar9);
        bVar3 = true;
        if (cVar4 != '\0') {
          bVar3 = false;
        }
      }
      uVar12 = uVar12 | 0x100;
    }
    lVar9 = FUN_143321150(param_3 + 0x40,1);
    if ((lVar9 == 0) ||
       (cVar4 = FUN_1432d0100(*(undefined4 *)(lVar9 + 8),*(undefined4 *)(param_2 + 0x54)),
       cVar4 == '\0')) {
      if (!bVar3) goto LAB_143350c62;
      FUN_1432bfd80(&local_c8,lVar6 + 0x50,param_4 + 0x18);
    }
    else {
      uVar11 = uVar12 | 0x100;
      if (*(int *)(lVar9 + 8) == 2) {
        uVar12 = uVar12 | 0x500;
      }
      else {
        uVar12 = uVar11;
        if (((uVar5 >> 10 & 1) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
          *(byte *)(*(longlong *)(param_1 + 0x20) + 0xb9) =
               ~(byte)(*(uint *)(param_2 + 0x54) >> 0x16) & 1;
        }
      }
LAB_143350c62:
      local_c8 = *(undefined4 *)(lVar6 + 0x50);
      uStack_c4 = *(undefined4 *)(lVar6 + 0x54);
      uStack_c0 = *(undefined4 *)(lVar6 + 0x58);
      uStack_bc = *(undefined4 *)(lVar6 + 0x5c);
      local_b8 = *(undefined8 *)(lVar6 + 0x60);
      uStack_b0 = *(undefined8 *)(lVar6 + 0x68);
    }
    puVar14 = (undefined8 *)CONCAT44(uVar15,uVar12);
    (**(code **)(*plVar13 + 0x20))(plVar13,param_2,lVar6,&local_188,puVar14);
    plVar13 = (longlong *)plVar13[3];
  } while( true );
}



// FUNCTION 143350d20 FUN_143350d20 body=122 status=ok
// SIG undefined FUN_143350d20(void)

void FUN_143350d20(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xffbf;
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | (ushort)param_3;
  plVar2 = (longlong *)(param_1 + 0x60);
  if (param_1 == -0x70) {
    plVar2 = (longlong *)0x0;
  }
  for (; plVar1 != plVar2; plVar1 = (longlong *)plVar1[3]) {
    if ((*(byte *)((longlong)plVar1 + 0x4a) >> 5 & 1) == 0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 143350da0 FUN_143350da0 body=159 status=ok
// SIG undefined FUN_143350da0(void)

void FUN_143350da0(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  lVar1 = FUN_143321150(lVar1 + 0x40,2);
  if (lVar1 != 0) {
    param_3 = param_3 | 0x80;
  }
  if ((*(ushort *)(param_1 + 0x4a) & 0x80) != param_3) {
    plVar2 = *(longlong **)(param_1 + 0x78);
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xff7f | (ushort)param_3;
    plVar3 = (longlong *)(param_1 + 0x60);
    if (param_1 == -0x70) {
      plVar3 = (longlong *)0x0;
    }
    for (; plVar2 != plVar3; plVar2 = (longlong *)plVar2[3]) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 143350e50 FUN_143350e50 body=159 status=ok
// SIG undefined FUN_143350e50(void)

void FUN_143350e50(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  
  lVar1 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  uVar4 = param_3;
  if ((param_3 != 0xc) &&
     (uVar4 = *(ushort *)(lVar1 + 10) & 0xc, (*(ushort *)(lVar1 + 10) & 0xc) == 0)) {
    uVar4 = param_3;
  }
  if ((*(ushort *)(param_1 + 0x4a) & 0xc) != uVar4) {
    plVar2 = *(longlong **)(param_1 + 0x78);
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfff3 | (ushort)uVar4;
    plVar3 = (longlong *)(param_1 + 0x60);
    if (param_1 == -0x70) {
      plVar3 = (longlong *)0x0;
    }
    for (; plVar2 != plVar3; plVar2 = (longlong *)plVar2[3]) {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_2,uVar4);
    }
  }
  return;
}



// FUNCTION 143350f00 FUN_143350f00 body=118 status=ok
// SIG undefined FUN_143350f00(void)

void FUN_143350f00(longlong param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  if ((param_3 != 0x200) || ((uVar1 & 0x200) == 0)) {
    plVar2 = *(longlong **)(param_1 + 0x78);
    plVar3 = (longlong *)(param_1 + 0x60);
    if (param_1 == -0x70) {
      plVar3 = (longlong *)0x0;
    }
    for (; plVar2 != plVar3; plVar2 = (longlong *)plVar2[3]) {
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3 | uVar1 & 0x200);
    }
  }
  return;
}



// FUNCTION 143350f80 FUN_143350f80 body=2006 status=ok
// SIG undefined FUN_143350f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143350f80(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  Matrix2x4<float> *this;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res8 [2];
  undefined8 local_res10;
  undefined1 *local_res18;
  byte local_res20;
  float local_588;
  float fStack_584;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  longlong local_558;
  longlong lStack_550;
  uint local_548;
  undefined4 uStack_544;
  longlong local_538;
  longlong lStack_530;
  ulonglong local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined1 local_4d8 [8];
  undefined1 local_4d0 [1032];
  longlong local_c8;
  longlong local_c0;
  undefined1 *local_b8;
  char local_b0;
  
  local_res18 = local_4d0;
  param_3[1] = 0;
  bVar4 = false;
  *param_3 = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  local_520 = 0;
  local_518 = 0;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_c8 = 0;
  local_c0 = 0x20;
  local_b0 = '\0';
  local_538 = 0;
  lStack_530 = 0;
  local_528 = local_528 & 0xffffffff00000000;
  local_4e0 = 0;
  local_588 = 0.0;
  fStack_584 = 0.0;
  uStack_580 = 0;
  local_res10 = param_2;
  local_b8 = local_res18;
  lVar8 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
  lVar8 = FUN_143321150(lVar8 + 0x40,7);
  if (lVar8 != 0) {
    if (((*(byte *)(*(longlong *)(lVar8 + 8) + 0x20) & 4) == 0) ||
       (uVar7 = 1, *(char *)(*(longlong *)(lVar8 + 8) + 0x1c) == '\0')) {
      uVar7 = 0;
    }
    param_4 = param_4 | uVar7;
  }
  plVar10 = *(longlong **)(param_1 + 0x78);
  local_res20 = (byte)param_4 & 1;
  plVar11 = (longlong *)(param_1 + 0x60);
  if (param_1 == -0x70) {
    plVar11 = (longlong *)0x0;
  }
LAB_1433510c0:
  do {
    while( true ) {
      if (plVar10 == plVar11) {
        if (local_538 != 0) {
          if (*param_3 == 0) {
            *param_3 = local_538;
          }
          else {
            *(longlong *)param_3[1] = local_538;
          }
          param_3[1] = lStack_530;
          *(uint *)(param_3 + 2) = (int)param_3[2] + (uint)local_528;
        }
        if (bVar4) {
          lVar8 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
          if ((*(float *)(lVar8 + 0x70) < *(float *)(lVar8 + 0x78)) &&
             (*(float *)(lVar8 + 0x74) < *(float *)(lVar8 + 0x7c))) {
            if (*(float *)(lVar8 + 0x70) < local_588) {
              local_588 = *(float *)(lVar8 + 0x70);
            }
            if ((float)uStack_580 <= *(float *)(lVar8 + 0x78)) {
              uStack_580 = CONCAT44(uStack_580._4_4_,*(float *)(lVar8 + 0x78));
            }
            if (*(float *)(lVar8 + 0x74) < fStack_584) {
              fStack_584 = *(float *)(lVar8 + 0x74);
            }
            if (uStack_580._4_4_ <= *(float *)(lVar8 + 0x7c)) {
              uStack_580 = CONCAT44(*(float *)(lVar8 + 0x7c),(float)uStack_580);
            }
          }
          this = (Matrix2x4<float> *)FUN_1433620e0(lVar8);
          Scaleform::Render::Matrix2x4<float>::EncloseTransform
                    (this,(Rect<float> *)&local_588,(Rect<float> *)&local_588);
          if ((((local_588 != *(float *)(param_1 + 0x60)) ||
               ((float)uStack_580 != *(float *)(param_1 + 0x68))) ||
              (fStack_584 != *(float *)(param_1 + 100))) ||
             (uStack_580._4_4_ != *(float *)(param_1 + 0x6c))) {
            *(float *)(param_1 + 0x60) = local_588;
            *(float *)(param_1 + 100) = fStack_584;
            *(float *)(param_1 + 0x68) = (float)uStack_580;
            *(float *)(param_1 + 0x6c) = uStack_580._4_4_;
            *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) | 0x400;
          }
        }
        _DAT_146b643e8 = _DAT_146b643e8 + 1;
        local_c8 = 0;
        if (local_b8 != local_res18) {
          (**(code **)(*DAT_146b62f28 + 0x60))();
        }
        return;
      }
      local_548 = 0;
      local_558 = 0;
      lStack_550 = 0;
      cVar6 = (**(code **)(*plVar10 + 0x50))(plVar10,param_2,&local_558,param_4);
      if (cVar6 != '\0') break;
LAB_143351582:
      plVar10 = (longlong *)plVar10[3];
    }
    if ((local_548 & 0x7fffffff) < 9) {
      local_578 = 0;
      uStack_570 = 0;
      if (plVar10[5] == 0) {
        uStack_570._4_4_ = 0.0;
        uStack_570._0_4_ = 0.0;
        local_578._4_4_ = 0.0;
        local_578._0_4_ = 0.0;
        fVar13 = uStack_570._4_4_;
        fVar14 = local_578._4_4_;
        fVar15 = (float)uStack_570;
        fVar16 = (float)local_578;
      }
      else {
        local_578 = plVar10[0xc];
        uStack_570 = plVar10[0xd];
        fVar13 = *(float *)((longlong)plVar10 + 0x6c);
        fVar14 = *(float *)((longlong)plVar10 + 100);
        fVar15 = *(float *)(plVar10 + 0xd);
        fVar16 = *(float *)(plVar10 + 0xc);
      }
      if ((*(ushort *)((longlong)plVar10 + 0x4a) & 0x410) != 0) {
        if (plVar10[8] == 0) {
LAB_143351324:
          fVar12 = (float)uStack_580;
          fVar17 = uStack_580._4_4_;
        }
        else {
          local_568 = 0;
          uStack_560 = 0;
          cVar6 = FUN_14334f190(param_1,&local_568,plVar10);
          if (cVar6 == '\0') goto LAB_143351324;
          if (bVar4) {
            uStack_580 = uStack_560 & 0xffffffff;
            fStack_584 = local_568._4_4_;
            local_588 = (float)local_568;
            fVar12 = (float)uStack_560;
LAB_1433512a9:
            uStack_580 = CONCAT44(uStack_560._4_4_,(float)uStack_580);
            fVar17 = uStack_560._4_4_;
          }
          else {
            bVar4 = true;
            if ((float)local_568 < local_588) {
              local_588 = (float)local_568;
            }
            fVar12 = (float)uStack_580;
            if ((float)uStack_580 <= (float)uStack_560) {
              uStack_580 = CONCAT44(uStack_580._4_4_,(float)uStack_560);
              fVar12 = (float)uStack_560;
            }
            if (local_568._4_4_ < fStack_584) {
              fStack_584 = local_568._4_4_;
            }
            fVar17 = uStack_580._4_4_;
            if (uStack_580._4_4_ <= uStack_560._4_4_) goto LAB_1433512a9;
          }
          if ((fVar15 <= fVar16) || (fVar13 <= fVar14)) {
            local_578 = local_568;
            uStack_570 = uStack_560;
            fVar13 = uStack_560._4_4_;
            fVar14 = local_568._4_4_;
            fVar15 = (float)uStack_560;
            fVar16 = (float)local_568;
          }
          else {
            if ((float)local_568 < fVar16) {
              local_578 = CONCAT44(local_578._4_4_,(float)local_568);
              fVar16 = (float)local_568;
            }
            if (fVar15 <= (float)uStack_560) {
              uStack_570 = CONCAT44(uStack_570._4_4_,(float)uStack_560);
              fVar15 = (float)uStack_560;
            }
            if (local_568._4_4_ < fVar14) {
              local_578 = CONCAT44(local_568._4_4_,(float)local_578);
              fVar14 = local_568._4_4_;
            }
            if (fVar13 <= uStack_560._4_4_) {
              uStack_570 = CONCAT44(uStack_560._4_4_,(float)uStack_570);
              fVar13 = uStack_560._4_4_;
            }
          }
        }
        if (bVar4) {
          uStack_580 = (ulonglong)(uint)fVar15;
          local_588 = fVar16;
          fStack_584 = fVar14;
        }
        else {
          bVar4 = true;
          if (fVar16 < local_588) {
            local_588 = fVar16;
          }
          if (fVar12 <= fVar15) {
            uStack_580 = CONCAT44(uStack_580._4_4_,fVar15);
          }
          if (fVar14 < fStack_584) {
            fStack_584 = fVar14;
          }
          if (fVar13 < fVar17) goto LAB_14335138e;
        }
        uStack_580 = CONCAT44(fVar13,(float)uStack_580);
      }
LAB_14335138e:
      if (local_538 == 0) {
LAB_1433514aa:
        local_528 = CONCAT44(uStack_544,local_548);
        local_538 = local_558;
        lStack_530 = lStack_550;
        local_b0 = '\0';
        local_4e0 = 0;
        local_c8 = 0;
      }
      else {
        if ((local_res20 != 0) || ((*(ushort *)((longlong)plVar10 + 0x4a) >> 9 & 1) != 0)) {
LAB_1433513f8:
          if (local_538 != 0) {
            if (*param_3 == 0) {
              *param_3 = local_538;
            }
            else {
              *(longlong *)param_3[1] = local_538;
            }
            param_3[1] = lStack_530;
            *(uint *)(param_3 + 2) = (int)param_3[2] + (uint)local_528;
          }
          goto LAB_1433514aa;
        }
        cVar6 = FUN_143352d80(local_4d8);
        lVar8 = local_538;
        if (cVar6 != '\0') {
          if ((((uint)local_528 & 0x7fffffff) == 1) && ((local_548 & 0x7fffffff) == 1)) {
            cVar6 = Scaleform::Render::SortKey::MatchSingleItemOverlap(local_538 + 0x18);
            lVar5 = local_538;
            goto joined_r0x000143351449;
          }
LAB_1433513de:
          fVar13 = uStack_570._4_4_;
          fVar14 = local_578._4_4_;
          fVar15 = (float)uStack_570;
          fVar16 = (float)local_578;
          goto LAB_1433513f8;
        }
        cVar6 = FUN_1433cbe30(&local_538,&local_558,0);
        lVar8 = local_538;
        lVar5 = local_538;
joined_r0x000143351449:
        local_538 = lVar8;
        if (cVar6 == '\0') goto LAB_1433513de;
        local_res8[0] = (uint)*(ushort *)(param_1 + 0x48);
        local_538 = lVar5;
        FUN_1433cbe30(&local_538,&local_558,local_res8);
        fVar13 = uStack_570._4_4_;
        fVar14 = local_578._4_4_;
        fVar15 = (float)uStack_570;
        fVar16 = (float)local_578;
      }
      if ((fVar16 < fVar15) && (fVar14 < fVar13)) {
        if (local_b0 == '\0') {
          if (local_c8 == local_c0) {
            FUN_1433539c0(local_4d8);
          }
          puVar9 = (undefined4 *)(local_b8 + local_c8 * 0x20);
          local_c8 = local_c8 + 1;
          *puVar9 = (float)local_578;
          puVar9[1] = local_578._4_4_;
          puVar9[2] = puVar9[2];
          puVar9[3] = puVar9[3];
          puVar9[4] = (float)uStack_570;
          puVar9[5] = uStack_570._4_4_;
          puVar9[6] = puVar9[6];
          puVar9[7] = puVar9[7];
          local_b0 = '\x01';
          param_2 = local_res10;
          goto LAB_143351582;
        }
        lVar8 = local_c8 * 0x20;
        uVar1 = *(undefined4 *)((longlong)(local_b8 + lVar8 + -0x20) + 4);
        uVar2 = *(undefined4 *)(local_b8 + lVar8 + -0x10);
        uVar3 = *(undefined4 *)((longlong)(local_b8 + lVar8 + -0x10) + 4);
        puVar9 = (undefined4 *)(local_b8 + lVar8 + -0x20);
        *puVar9 = *(undefined4 *)(local_b8 + lVar8 + -0x20);
        puVar9[1] = uVar1;
        puVar9[2] = (float)local_578;
        puVar9[3] = local_578._4_4_;
        puVar9 = (undefined4 *)(local_b8 + lVar8 + -0x10);
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = (float)uStack_570;
        puVar9[3] = uStack_570._4_4_;
        local_b0 = '\0';
      }
      plVar10 = (longlong *)plVar10[3];
      param_2 = local_res10;
      goto LAB_1433510c0;
    }
    if (local_538 != 0) {
      if (*param_3 == 0) {
        *param_3 = local_538;
      }
      else {
        *(longlong *)param_3[1] = local_538;
      }
      param_3[1] = lStack_530;
      *(uint *)(param_3 + 2) = (int)param_3[2] + (uint)local_528;
    }
    if (local_558 != 0) {
      if (*param_3 == 0) {
        *param_3 = local_558;
      }
      else {
        *(longlong *)param_3[1] = local_558;
      }
      param_3[1] = lStack_550;
      *(uint *)(param_3 + 2) = (int)param_3[2] + local_548;
    }
    lStack_530 = 0;
    local_538 = 0;
    local_528 = local_528 & 0xffffffff00000000;
    local_c8 = 0;
    local_b0 = '\0';
    plVar10 = (longlong *)plVar10[3];
  } while( true );
}



// FUNCTION 143351760 FUN_143351760 body=438 status=ok
// SIG undefined FUN_143351760(void)

void FUN_143351760(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong local_78;
  longlong lStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  cVar5 = (**(code **)(*param_1 + 0x58))();
  if (cVar5 == '\0') {
    return;
  }
  local_68 = 0x80000000;
  local_78 = 0;
  lStack_70 = 0;
  FUN_143350f80(param_1,param_2,&local_78,param_3);
  lVar4 = lStack_70;
  lVar3 = local_78;
  lVar2 = CONCAT44(uStack_64,local_68);
  if ((param_1[7] != 0) && (local_78 != 0)) {
    plVar1 = (longlong *)param_1[8];
    local_48 = local_78;
    lStack_40 = lStack_70;
    local_38 = lVar2;
    if (plVar1 == (longlong *)0x0) {
      lVar6 = param_1[7];
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)0x0;
        goto LAB_143351831;
      }
    }
    else {
      local_50 = 0;
      local_60 = 0;
      uStack_58 = 0;
      (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_60,0);
      lVar6 = param_1[7];
      if (lVar6 != 0) {
        puVar8 = &local_60;
LAB_143351831:
        FUN_1433cc780(param_1 + 7,lVar6,&local_48,puVar8);
      }
    }
  }
  if ((((byte)*(ushort *)((longlong)param_1 + 0x4a) & 3) == 1) ||
     ((*(ushort *)((longlong)param_1 + 0x4a) & 0x40) != 0)) {
    if (((*(uint *)(param_1 + 0x12) & 0x7fffffff) < 9) ||
       ((((local_68 & 0x7fffffff) < 9 || (param_1[0x10] != lVar3)) || (param_1[0x11] != lVar4)))) {
      lVar6 = param_1[4];
      if (lVar6 == 0) goto LAB_1433518dd;
      lVar7 = param_1[6];
    }
    else if ((((*(uint *)(param_1 + 0x12) & 0x7fffffff) == (local_68 & 0x7fffffff)) ||
             ((longlong *)param_1[6] == (longlong *)0x0)) ||
            ((cVar5 = (**(code **)(*(longlong *)param_1[6] + 0x58))(), cVar5 == '\0' ||
             ((lVar7 = param_1[6], (*(uint *)(lVar7 + 0x4c) & 0x3000000) != 0 ||
              (lVar6 = param_1[4], lVar6 == 0)))))) goto LAB_1433518dd;
    if (lVar7 != 0) {
      FUN_143351c00(lVar6,lVar7,0x1000000);
    }
  }
LAB_1433518dd:
  param_1[0x10] = lVar3;
  param_1[0x11] = lVar4;
  param_1[0x12] = lVar2;
  return;
}



// FUNCTION 143351920 FUN_143351920 body=337 status=ok
// SIG undefined FUN_143351920(void)

bool FUN_143351920(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((((byte)*(ushort *)(param_1 + 0x4a) & 3) != 1) && ((*(ushort *)(param_1 + 0x4a) & 0x40) == 0))
  {
    param_3[1] = 0;
    *param_3 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    return false;
  }
  uVar5 = *(uint *)(param_1 + 0x4c) & 0x7e0000;
  if (*(int *)(param_1 + 0x90) == -0x80000000) {
    FUN_143350f80(param_1,param_2,param_1 + 0x80);
  }
  else {
    if (uVar5 == 0) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        plVar1 = *(longlong **)(param_1 + 0x38);
        if (plVar1 == (longlong *)0x0) {
          uVar2 = *(undefined4 *)(param_1 + 0x84);
          uVar3 = *(undefined4 *)(param_1 + 0x88);
          uVar4 = *(undefined4 *)(param_1 + 0x8c);
          *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x80);
          *(undefined4 *)((longlong)param_3 + 4) = uVar2;
          *(undefined4 *)(param_3 + 1) = uVar3;
          *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
          param_3[2] = *(undefined8 *)(param_1 + 0x90);
          Scaleform::Render::BundleEntryRange::StripChainsByDepth
                    (param_3,*(undefined2 *)(param_1 + 0x48));
        }
        else {
          (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
          Scaleform::Render::BundleEntryRange::StripChainsByDepth
                    (param_3,*(undefined2 *)(param_1 + 0x48));
        }
      }
      goto LAB_143351a4c;
    }
    Scaleform::Render::BundleEntryRange::StripChainsByDepth
              (param_1 + 0x80,*(undefined2 *)(param_1 + 0x48));
  }
  uVar2 = *(undefined4 *)(param_1 + 0x84);
  uVar3 = *(undefined4 *)(param_1 + 0x88);
  uVar4 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((longlong)param_3 + 4) = uVar2;
  *(undefined4 *)(param_3 + 1) = uVar3;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  param_3[2] = *(undefined8 *)(param_1 + 0x90);
  if (uVar5 != 0) {
    FUN_1433cc600(param_1 + 0x38,param_2,param_1,uVar5);
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xff81ffff;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14334e570(param_1,param_2,param_3);
  }
LAB_143351a4c:
  return (*(uint *)(param_3 + 2) & 0x7fffffff) != 0;
}



// FUNCTION 143351aa0 FUN_143351aa0 body=75 status=ok
// SIG undefined FUN_143351aa0(void)

void FUN_143351aa0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  plVar2 = (longlong *)(param_1 + 0x60);
  if (param_1 == -0x70) {
    plVar2 = (longlong *)0x0;
  }
  for (; plVar1 != plVar2; plVar1 = (longlong *)plVar1[3]) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  }
  return;
}



// FUNCTION 143351b00 ChainUpdatesByDepth body=190 status=ok
// SIG undefined ChainUpdatesByDepth(void)

void Scaleform::Render::TreeCacheRoot::ChainUpdatesByDepth(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar5 == 0) {
    *(undefined1 *)(param_1 + 0xba) = 1;
    return;
  }
  plVar1 = (longlong *)(param_1 + 0xc0);
  do {
    uVar2 = *(ushort *)(lVar5 + 0x48);
    lVar3 = *(longlong *)(lVar5 + 0x50);
    if ((uint)uVar2 < *(uint *)(param_1 + 0xcc)) {
LAB_143351b5c:
      uVar6 = uVar2 + 1;
      *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)((ulonglong)uVar2 * 8 + *plVar1);
      *(longlong *)((ulonglong)uVar2 * 8 + *plVar1) = lVar5;
      if (*(uint *)(param_1 + 200) < uVar6) {
        *(uint *)(param_1 + 200) = uVar6;
      }
    }
    else {
      cVar4 = FUN_143353910(plVar1,uVar2 + 1);
      if (cVar4 != '\0') goto LAB_143351b5c;
    }
    lVar5 = lVar3;
    if (lVar3 == 0) {
      *(undefined1 *)(param_1 + 0xba) = 1;
      return;
    }
  } while( true );
}



// FUNCTION 143351bd0 FUN_143351bd0 body=34 status=ok
// SIG undefined FUN_143351bd0(void)

void FUN_143351bd0(longlong param_1,longlong param_2,uint param_3)

{
  if (-1 < *(int *)(param_2 + 0x4c)) {
    param_3 = param_3 | 0x80000000;
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0xb0);
    *(longlong *)(param_1 + 0xb0) = param_2;
  }
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | param_3;
  return;
}



// FUNCTION 143351c00 FUN_143351c00 body=122 status=ok
// SIG undefined FUN_143351c00(void)

void FUN_143351c00(longlong param_1,longlong param_2,uint param_3)

{
  if (*(int *)(param_2 + 0x4c) < 0) {
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | param_3;
    return;
  }
  if (*(char *)(param_1 + 0xba) != '\0') {
    FUN_143353790(param_1 + 0xc0,*(undefined2 *)(param_2 + 0x48),param_2 + 0x50,param_2);
    *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | param_3 | 0x80000000;
    return;
  }
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_1 + 0xb0);
  *(longlong *)(param_1 + 0xb0) = param_2;
  *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | param_3 | 0x80000000;
  return;
}



// FUNCTION 143351c80 FUN_143351c80 body=115 status=ok
// SIG undefined FUN_143351c80(void)

void FUN_143351c80(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  
  if ((param_3 >> 0xc & 1) != 0) {
    lVar1 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
    if (lVar1 != 0) {
      lVar1 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
      uVar2 = FUN_143353440(lVar1 + 0xa0,param_1 + 0xa0,0);
      *(undefined1 *)(param_1 + 0xb8) = uVar2;
    }
  }
  FUN_1433504f0(param_1,param_2,param_3 & 0xffffefff);
  return;
}



// FUNCTION 143351d00 FUN_143351d00 body=2183 status=ok
// SIG undefined FUN_143351d00(void)

void FUN_143351d00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  Matrix2x4<float> *pMVar12;
  Matrix3x4<float> *pMVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong *plVar19;
  uint local_res20;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  longlong lStack_140;
  undefined1 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
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
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar16 = *(uint *)(param_1 + 200);
  local_res20 = 0;
  if (uVar16 != 0) {
    local_198 = 0;
    do {
      plVar19 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + local_198 * 8);
      local_1a0 = plVar19;
joined_r0x000143351d73:
      if (plVar19 != (longlong *)0x0) {
        uVar14 = *(uint *)((longlong)plVar19 + 0x4c) & 3;
        if ((*(uint *)((longlong)plVar19 + 0x4c) & 0x10000) != 0) {
          (**(code **)(*plVar19 + 0x30))(plVar19,param_2);
          *(uint *)((longlong)plVar19 + 0x4c) = *(uint *)((longlong)plVar19 + 0x4c) & 0xfffeffff;
          uVar14 = uVar14 | 1;
        }
        if ((*(uint *)((longlong)plVar19 + 0x4c) & 0x2000) != 0) {
          lVar7 = FUN_1432cd220(plVar19[5]);
          *(ushort *)((longlong)plVar19 + 0x4a) =
               (ushort)((byte)((ushort)*(undefined2 *)(lVar7 + 10) >> 9) & 1) << 9 |
               *(ushort *)((longlong)plVar19 + 0x4a) & 0xfdff;
          (**(code **)(*plVar19 + 0x40))(plVar19,param_2);
          *(uint *)((longlong)plVar19 + 0x4c) = *(uint *)((longlong)plVar19 + 0x4c) & 0xffffdfff;
          uVar14 = uVar14 | 1;
        }
        plVar15 = plVar19;
        uVar18 = uVar14 | 1;
        if ((*(uint *)((longlong)plVar19 + 0x4c) & 0x40000) == 0) {
          uVar18 = uVar14;
        }
        do {
          lVar7 = FUN_1432cd220(plVar15[5]);
          if ((((((*(ushort *)(lVar7 + 10) >> 10 & 1) != 0) &&
                (lVar8 = FUN_143321150(lVar7 + 0x40), lVar8 != 0)) &&
               (lVar8 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
                        ::GetRawUserObject(lVar8), lVar8 != 0)) &&
              (cVar6 = Scaleform::Render::FilterSet::IsContributing(lVar8), cVar6 != '\0')) ||
             ((lVar7 = FUN_143321150(lVar7 + 0x40), lVar7 != 0 &&
              (cVar6 = FUN_1432d0100(*(undefined4 *)(lVar7 + 8)), cVar6 != '\0')))) {
            uVar18 = uVar18 | 0x200;
            break;
          }
          plVar1 = plVar15 + 6;
          plVar15 = (longlong *)*plVar1;
        } while ((longlong *)*plVar1 != (longlong *)0x0);
        if (uVar18 != 0) goto code_r0x000143351ea0;
        goto LAB_14335242d;
      }
      local_res20 = local_res20 + 1;
      local_198 = local_198 + 1;
    } while (local_res20 < uVar16);
  }
  uVar16 = *(uint *)(param_1 + 200);
  uVar17 = (ulonglong)uVar16;
  while (uVar16 != 0) {
    uVar16 = (int)uVar17 - 1;
    uVar17 = (ulonglong)uVar16;
    for (plVar19 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + uVar17 * 8);
        plVar19 != (longlong *)0x0; plVar19 = (longlong *)plVar19[10]) {
      if ((*(uint *)((longlong)plVar19 + 0x4c) & 0x3000000) != 0) {
        (**(code **)(*plVar19 + 0x48))(plVar19,param_2);
        *(uint *)((longlong)plVar19 + 0x4c) = *(uint *)((longlong)plVar19 + 0x4c) & 0xfcffffff;
      }
      *(uint *)((longlong)plVar19 + 0x4c) = *(uint *)((longlong)plVar19 + 0x4c) & 0x7fffffff;
    }
  }
  uVar17 = 0;
  if (*(int *)(param_1 + 200) != 0) {
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + uVar17 * 8) = *(undefined8 *)(param_1 + 0xd8);
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while (uVar16 < *(uint *)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  puVar9 = *(undefined8 **)(param_1 + 0x88);
  for (puVar11 = *(undefined8 **)(param_1 + 0x80);
      (puVar11 != (undefined8 *)0x0 && (FUN_1433cbcb0(puVar11,param_2,param_1), puVar11 != puVar9));
      puVar11 = (undefined8 *)*puVar11) {
  }
  DAT_146b643e4 = DAT_146b643e4 + 1;
  return;
code_r0x000143351ea0:
  lVar7 = FUN_1432cd220(plVar19[5]);
  local_1a8 = lVar7;
  if (lVar7 != 0) {
    cVar6 = *(char *)(param_1 + 0xb8);
    bVar5 = true;
    uVar2 = *(ushort *)(lVar7 + 10);
    if ((uVar2 >> 9 & 1) == 0) {
      puVar11 = (undefined8 *)&DAT_146b63020;
      puVar9 = (undefined8 *)FUN_1433620e0(lVar7);
    }
    else {
      puVar11 = (undefined8 *)(lVar7 + 0x10);
      puVar9 = (undefined8 *)&DAT_14621c810;
    }
    local_188 = *(undefined8 *)(param_1 + 0xa0);
    uStack_180 = *(undefined8 *)(param_1 + 0xa8);
    local_178 = *puVar11;
    uStack_170 = puVar11[1];
    local_168 = puVar11[2];
    uStack_160 = puVar11[3];
    local_158 = puVar11[4];
    uStack_150 = puVar11[5];
    local_f8 = 0;
    local_148 = 0;
    lStack_140 = 0;
    local_e8 = *puVar9;
    uStack_e0 = puVar9[1];
    local_d8 = puVar9[2];
    uStack_d0 = puVar9[3];
    local_c8 = *(undefined4 *)(lVar7 + 0x50);
    uStack_c4 = *(undefined4 *)(lVar7 + 0x54);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x58);
    uStack_bc = *(undefined4 *)(lVar7 + 0x5c);
    local_b8 = *(undefined4 *)(lVar7 + 0x60);
    uStack_b4 = *(undefined4 *)(lVar7 + 100);
    uStack_b0 = *(undefined4 *)(lVar7 + 0x68);
    uStack_ac = *(undefined4 *)(lVar7 + 0x6c);
    if ((*(ushort *)(lVar7 + 10) >> 0xb & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_143321150(lVar7 + 0x40);
    }
    if ((*(ushort *)(lVar7 + 10) >> 0xc & 1) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = FUN_143321150(lVar7 + 0x40);
    }
    if (lVar8 != 0) {
      local_f8 = 1;
      local_148 = lVar8;
    }
    if (lVar10 != 0) {
      local_f8 = 1;
      lStack_140 = lVar10;
    }
    uVar14 = 0x40;
    if (((byte)(uVar2 >> 9) & 1) != 0) {
      uVar14 = 0x80;
    }
    if ((*(ushort *)(lVar7 + 10) >> 0xb & 1) == 0) {
      local_1f0 = 0;
    }
    else {
      local_1f0 = FUN_143321150(lVar7 + 0x40);
    }
    if ((*(ushort *)(lVar7 + 10) >> 0xc & 1) == 0) {
      local_1e8 = 0;
    }
    else {
      local_1e8 = FUN_143321150(lVar7 + 0x40,6);
    }
    lVar8 = plVar19[6];
    uVar14 = -(uint)(cVar6 != '\0') & 0x10 | uVar18 | uVar14;
    for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if ((((byte)*(ushort *)(lVar8 + 0x4a) & 3) != 1) && ((*(ushort *)(lVar8 + 0x4a) & 0x40) == 0))
      {
        uVar14 = uVar14 & 0xffffffef;
      }
      lVar7 = FUN_1432cd220(*(undefined8 *)(lVar8 + 0x28));
      if ((char)uVar14 < '\0') {
        if ((*(ushort *)(lVar7 + 10) >> 9 & 1) == 0) {
          puVar11 = (undefined8 *)FUN_1433620e0(lVar7);
          pMVar13 = (Matrix3x4<float> *)&local_1d8;
          local_1d8 = *puVar11;
          uStack_1d0 = puVar11[1];
          local_1c8 = puVar11[2];
          uStack_1c0 = puVar11[3];
          local_1b8 = 0;
          uStack_1b0 = 0x3f800000;
        }
        else {
          pMVar13 = (Matrix3x4<float> *)(lVar7 + 0x10);
        }
        local_a8 = local_178;
        uStack_a0 = uStack_170;
        local_88 = local_158;
        uStack_80 = uStack_150;
        local_98 = local_168;
        uStack_90 = uStack_160;
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_178,pMVar13,(Matrix3x4<float> *)&local_a8);
      }
      else if ((*(ushort *)(lVar7 + 10) >> 9 & 1) == 0) {
        pMVar12 = (Matrix2x4<float> *)FUN_1433620e0(lVar7);
        Scaleform::Render::Matrix2x4<float>::Append((Matrix2x4<float> *)&local_e8,pMVar12);
      }
      else {
        local_1d8 = local_e8;
        uStack_1d0 = uStack_e0;
        local_1c8 = local_d8;
        uStack_1c0 = uStack_d0;
        local_168 = local_d8;
        uStack_160 = uStack_d0;
        local_178 = local_e8;
        uStack_170 = uStack_e0;
        local_158 = 0;
        uStack_150 = 0x3f800000;
        local_58 = 0;
        uStack_50 = 0x3f800000;
        local_78 = local_e8;
        uStack_70 = uStack_e0;
        local_68 = local_d8;
        uStack_60 = uStack_d0;
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_178,(Matrix3x4<float> *)(lVar7 + 0x10),
                   (Matrix3x4<float> *)&local_78);
        uVar14 = uVar14 & 0xffffffbf | 0x80;
        local_e8 = 0x3f800000;
        uStack_e0 = 0;
        local_d8 = 0x3f80000000000000;
        uStack_d0 = 0;
      }
      bVar5 = (bool)(bVar5 | (*(byte *)(lVar8 + 0x4c) & 3) != 0);
      if (((((*(ushort *)(lVar7 + 10) >> 10 & 1) != 0) &&
           (lVar10 = FUN_143321150(lVar7 + 0x40,3), lVar10 != 0)) &&
          (lVar10 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FInputDeviceModule>,IModuleInterface_*___ptr64___cdecl(void)>
                    ::GetRawUserObject(lVar10), lVar10 != 0)) &&
         (cVar6 = Scaleform::Render::FilterSet::IsContributing(lVar10), cVar6 != '\0')) {
        if (bVar5) {
          *(uint *)(lVar8 + 0x4c) = *(uint *)(lVar8 + 0x4c) | 0x1200000;
          lVar10 = *(longlong *)(lVar8 + 0x20);
          if ((lVar10 != 0) && (lVar3 = *(longlong *)(lVar8 + 0x30), lVar3 != 0)) {
            uVar18 = 0x1000000;
            if (-1 < *(int *)(lVar3 + 0x4c)) {
              if (*(char *)(lVar10 + 0xba) == '\0') {
                *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar10 + 0xb0);
                *(longlong *)(lVar10 + 0xb0) = lVar3;
              }
              else {
                FUN_143353790(lVar10 + 0xc0,*(undefined2 *)(lVar3 + 0x48),lVar3 + 0x50,lVar3);
              }
              uVar18 = 0x81000000;
            }
            *(uint *)(lVar3 + 0x4c) = *(uint *)(lVar3 + 0x4c) | uVar18;
          }
        }
        uVar14 = uVar14 | 0x100;
      }
      lVar10 = FUN_143321150(lVar7 + 0x40,1);
      uVar18 = uVar14;
      if ((lVar10 != 0) &&
         (cVar6 = FUN_1432d0100(*(undefined4 *)(lVar10 + 8),*(undefined4 *)(param_2 + 0x54)),
         cVar6 != '\0')) {
        if (bVar5) {
          *(uint *)(lVar8 + 0x4c) = *(uint *)(lVar8 + 0x4c) | 0x1020000;
          lVar3 = *(longlong *)(lVar8 + 0x20);
          if ((lVar3 != 0) && (lVar4 = *(longlong *)(lVar8 + 0x30), lVar4 != 0)) {
            uVar18 = 0x1000000;
            if (-1 < *(int *)(lVar4 + 0x4c)) {
              if (*(char *)(lVar3 + 0xba) == '\0') {
                *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0xb0);
                *(longlong *)(lVar3 + 0xb0) = lVar4;
              }
              else {
                uVar2 = *(ushort *)(lVar4 + 0x48);
                plVar19 = (longlong *)(lVar3 + 0xc0);
                if (((uint)uVar2 < *(uint *)(lVar3 + 0xcc)) ||
                   (cVar6 = FUN_143353910(plVar19,uVar2 + 1), cVar6 != '\0')) {
                  *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(*plVar19 + (ulonglong)uVar2 * 8);
                  *(longlong *)(*plVar19 + (ulonglong)uVar2 * 8) = lVar4;
                  uVar18 = uVar2 + 1;
                  if (*(uint *)(lVar3 + 200) < uVar18) {
                    *(uint *)(lVar3 + 200) = uVar18;
                  }
                }
              }
              uVar18 = 0x81000000;
            }
            *(uint *)(lVar4 + 0x4c) = *(uint *)(lVar4 + 0x4c) | uVar18;
          }
        }
        uVar18 = uVar14 | 0x100;
        if (*(int *)(lVar10 + 8) == 2) {
          uVar18 = uVar14 | 0x500;
        }
      }
      if ((uVar18 >> 8 & 1) == 0) {
        FUN_1432bfbe0(&local_c8,lVar7 + 0x50);
      }
      if ((local_1f0 == 0) && ((*(ushort *)(lVar7 + 10) >> 0xb & 1) != 0)) {
        local_1f0 = FUN_143321150(lVar7 + 0x40,5);
      }
      if ((local_1e8 == 0) && ((*(ushort *)(lVar7 + 10) >> 0xc & 1) != 0)) {
        local_1e8 = FUN_143321150(lVar7 + 0x40,6);
      }
      uVar14 = uVar18;
      lVar7 = local_1a8;
      plVar19 = local_1a0;
    }
    if (local_1f0 != 0) {
      local_f8 = 1;
      local_148 = local_1f0;
    }
    if (local_1e8 != 0) {
      local_f8 = 1;
      lStack_140 = local_1e8;
    }
    (**(code **)(*plVar19 + 0x20))(plVar19,param_2,lVar7,&local_188,uVar14);
    *(uint *)((longlong)plVar19 + 0x4c) = *(uint *)((longlong)plVar19 + 0x4c) & 0xfffffffc;
LAB_14335242d:
    plVar19 = (longlong *)plVar19[10];
    local_1a0 = plVar19;
  }
  goto joined_r0x000143351d73;
}



// FUNCTION 143352590 FUN_143352590 body=456 status=ok
// SIG undefined FUN_143352590(void)

void FUN_143352590(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  float *pfVar3;
  undefined4 local_res8 [2];
  undefined8 local_68;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  if ((((byte)*(ushort *)(param_1 + 0x4a) & 3) == 1) || ((*(ushort *)(param_1 + 0x4a) & 0x40) != 0))
  {
    lVar2 = FUN_1432cd220(*(undefined8 *)(param_1 + 0x28));
    piVar1 = (int *)(lVar2 + 0xa0);
    if ((*piVar1 != 0) && (*(int *)(lVar2 + 0xa4) != 0)) {
      pfVar3 = (float *)FUN_1433620e0(lVar2);
      local_res8[0] = *(undefined4 *)(lVar2 + 0xcc);
      local_3c = pfVar3[7] * 20.0;
      local_58 = *pfVar3 * 20.0;
      local_54 = pfVar3[1] * 20.0;
      local_50 = pfVar3[2] * 20.0;
      local_4c = pfVar3[3] * 20.0;
      local_48 = pfVar3[4] * 20.0;
      local_44 = pfVar3[5] * 20.0;
      local_40 = pfVar3[6] * 20.0;
      FUN_1432d9c70(param_2,local_res8,piVar1,*(undefined1 *)(param_1 + 0xb9),&local_58);
    }
    local_68 = *(undefined8 *)(param_1 + 0x80);
    local_60 = *(undefined8 *)(param_1 + 0x88);
    (**(code **)(*param_2 + 0x188))(param_2,&local_68);
    if ((*piVar1 != 0) && (*(int *)(lVar2 + 0xa4) != 0)) {
      FUN_1432d9e40(param_2);
    }
  }
  return;
}



// FUNCTION 143352760 FUN_143352760 body=413 status=ok
// SIG undefined FUN_143352760(void)

void FUN_143352760(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined **local_res8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  if ((undefined **)*plVar1 == &PTR_LOOP_1467cd040) {
    cVar2 = Scaleform::Render::Cxform::operator==(param_2 + 0xc0,&DAT_1467ccfd0);
    if ((char)param_4 < '\0') {
      if ((param_4 & 0x40) == 0) {
        local_58 = *(undefined8 *)(param_2 + 0x10);
        uStack_50 = *(undefined8 *)(param_2 + 0x18);
        local_48 = *(undefined8 *)(param_2 + 0x20);
        uStack_40 = *(undefined8 *)(param_2 + 0x28);
        local_38 = *(undefined4 *)(param_2 + 0x30);
        uStack_34 = *(undefined4 *)(param_2 + 0x34);
        uStack_30 = *(undefined4 *)(param_2 + 0x38);
        uStack_2c = *(undefined4 *)(param_2 + 0x3c);
      }
      else {
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_58,(Matrix3x4<float> *)(param_2 + 0x10),
                   (Matrix2x4<float> *)(param_2 + 0xa0));
      }
      uVar3 = FUN_1432c0b60(param_3,&local_res8,&local_58,param_2 + 0xc0,cVar2 == '\0' | 0x10);
    }
    else {
      uVar3 = FUN_1432c0b20(param_3,&local_res8,param_2 + 0xa0,param_2 + 0xc0,cVar2 == '\0');
    }
    FUN_1432c03f0(plVar1,uVar3);
    if (local_res8 != &PTR_LOOP_1467cd040) {
      FUN_1432c03a0(*local_res8);
    }
  }
  else {
    if ((char)param_4 < '\0') {
      if ((param_4 & 0x40) == 0) {
        local_58 = *(undefined8 *)(param_2 + 0x10);
        uStack_50 = *(undefined8 *)(param_2 + 0x18);
        local_48 = *(undefined8 *)(param_2 + 0x20);
        uStack_40 = *(undefined8 *)(param_2 + 0x28);
        local_38 = *(undefined4 *)(param_2 + 0x30);
        uStack_34 = *(undefined4 *)(param_2 + 0x34);
        uStack_30 = *(undefined4 *)(param_2 + 0x38);
        uStack_2c = *(undefined4 *)(param_2 + 0x3c);
        FUN_1432c0740(plVar1,&local_58);
      }
      else {
        Scaleform::Render::Matrix3x4<float>::MultiplyMatrix
                  ((Matrix3x4<float> *)&local_58,(Matrix3x4<float> *)(param_2 + 0x10),
                   (Matrix2x4<float> *)(param_2 + 0xa0));
        FUN_1432c0740(plVar1,&local_58);
      }
    }
    else {
      FUN_1432c0490(plVar1,param_2 + 0xa0);
    }
    if ((param_4 & 2) != 0) {
      FUN_1432c0590(plVar1,param_2 + 0xc0);
      return;
    }
  }
  return;
}



// FUNCTION 143352910 FUN_143352910 body=187 status=ok
// SIG undefined FUN_143352910(void)

undefined8 *
FUN_143352910(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined2 param_4)

{
  longlong *plVar1;
  
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4a) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x7e0000;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145b00f10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar1 = (longlong *)*param_3;
  param_1[0x11] = plVar1;
  param_1[0x12] = param_3[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x13] = 0;
  param_1[0x15] = param_1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x16] = &PTR_LOOP_1467cd040;
  return param_1;
}



// FUNCTION 1433529e0 FUN_1433529e0 body=172 status=ok
// SIG undefined FUN_1433529e0(void)

void FUN_1433529e0(undefined8 *param_1)

{
  int *piVar1;
  RefCountNTSImpl *this;
  
  *param_1 = &PTR_FUN_145b00f10;
  if ((undefined **)param_1[0x16] != &PTR_LOOP_1467cd040) {
    FUN_1432c03a0(*(undefined **)param_1[0x16]);
  }
  if (param_1[0x13] != 0) {
    if (param_1[0x13] != 0) {
      piVar1 = (int *)(param_1[0x13] + 8);
      *piVar1 = *piVar1 + 1;
    }
    this = (RefCountNTSImpl *)param_1[0x13];
    Scaleform::Render::Bundle::RemoveEntry(this,param_1 + 0xe);
    if (this != (RefCountNTSImpl *)0x0) {
      Scaleform::RefCountNTSImpl::Release(this);
    }
  }
  if ((RefCountNTSImpl *)param_1[0x13] != (RefCountNTSImpl *)0x0) {
    Scaleform::RefCountNTSImpl::Release((RefCountNTSImpl *)param_1[0x13]);
  }
  (**(code **)(*(longlong *)param_1[0x11] + 0x10))((longlong *)param_1[0x11],param_1[0x12]);
  FUN_14334dfd0(param_1);
  return;
}



// FUNCTION 143352ab0 FUN_143352ab0 body=254 status=ok
// SIG undefined FUN_143352ab0(void)

undefined8 FUN_143352ab0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if ((((byte)*(ushort *)(param_1 + 0x4a) & 3) != 1) && ((*(ushort *)(param_1 + 0x4a) & 0x40) == 0))
  {
    param_3[1] = 0;
    *param_3 = 0;
    *(undefined4 *)(param_3 + 2) = 0;
    return 0;
  }
  *(undefined4 *)(param_3 + 2) = 1;
  param_3[1] = param_1 + 0x70;
  plVar1 = (longlong *)(param_1 + 0x38);
  *param_3 = param_1 + 0x70;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  if ((*plVar1 == 0) && ((*(uint *)(param_1 + 0x4c) & 0x7e0000) == 0)) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x30) = 1;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined2 *)(param_1 + 0x80) = 0;
    return 1;
  }
  if ((*(uint *)(param_1 + 0x4c) & 0x7e0000) == 0) {
    plVar1 = (longlong *)*plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
    }
  }
  else {
    FUN_1433cc600(plVar1,param_2,param_1);
    FUN_14334e570(param_1,param_2,param_3);
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xff81ffff;
  }
  Scaleform::Render::BundleEntryRange::StripChainsByDepth(param_3,*(undefined2 *)(param_1 + 0x48));
  return 1;
}



// FUNCTION 143352bc0 FUN_143352bc0 body=121 status=ok
// SIG undefined FUN_143352bc0(void)

void FUN_143352bc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    local_20 = param_1 + 0x70;
    local_10 = 1;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_18 = local_20;
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,&local_38,0);
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (lVar2 != 0) {
      FUN_1433cc780((longlong *)(param_1 + 0x38),lVar2,&local_20,&local_38);
    }
  }
  return;
}



// FUNCTION 143352cb0 FUN_143352cb0 body=191 status=ok
// SIG undefined FUN_143352cb0(void)

void FUN_143352cb0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  if (*(char *)(param_1 + 0x428) != '\0') {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    lVar2 = *(longlong *)(param_1 + 0x420);
    lVar11 = *(longlong *)(param_1 + 0x410) * 0x20;
    puVar10 = (undefined4 *)(lVar11 + -0x20 + lVar2);
    uVar7 = puVar10[1];
    puVar1 = (undefined4 *)(lVar11 + -0x10 + lVar2);
    uVar8 = *puVar1;
    uVar9 = puVar1[1];
    puVar1 = (undefined4 *)(lVar11 + -0x20 + lVar2);
    *puVar1 = *puVar10;
    puVar1[1] = uVar7;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    puVar10 = (undefined4 *)(lVar11 + -0x10 + lVar2);
    *puVar10 = uVar8;
    puVar10[1] = uVar9;
    puVar10[2] = uVar5;
    puVar10[3] = uVar6;
    *(undefined1 *)(param_1 + 0x428) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0x410) == *(longlong *)(param_1 + 0x418)) {
    FUN_1433539c0(param_1,*(longlong *)(param_1 + 0x410) * 2);
  }
  puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x410) * 0x20 + *(longlong *)(param_1 + 0x420));
  *(longlong *)(param_1 + 0x410) = *(longlong *)(param_1 + 0x410) + 1;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *puVar10 = *param_2;
  puVar10[1] = uVar3;
  puVar10[2] = puVar10[2];
  puVar10[3] = puVar10[3];
  puVar10[4] = uVar4;
  puVar10[5] = uVar5;
  puVar10[6] = puVar10[6];
  puVar10[7] = puVar10[7];
  *(undefined1 *)(param_1 + 0x428) = 1;
  return;
}



// FUNCTION 143352d80 FUN_143352d80 body=531 status=ok
// SIG undefined FUN_143352d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143352d80(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  float *pfVar8;
  ulonglong uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if ((param_2[2] <= *param_2) || (param_2[3] <= param_2[1])) goto LAB_143352f79;
  uVar9 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x38) <
       DAT_146b64430) && (_Init_thread_header(&DAT_146b64430), DAT_146b64430 == -1)) {
    _DAT_146b64420 = FUN_1433260a0();
    uRam0000000146b64428 = extraout_XMM0_Qb;
    _Init_thread_footer(&DAT_146b64430);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x38) <
       DAT_146b64450) && (_Init_thread_header(&DAT_146b64450), DAT_146b64450 == -1)) {
    _DAT_146b64440 = FUN_1433531f0();
    uRam0000000146b64448 = extraout_XMM0_Qb_00;
    _Init_thread_footer(&DAT_146b64450);
  }
  uVar5 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x38);
  in_RAX = (ulonglong)uVar5;
  if ((int)uVar5 < (int)DAT_146b64470) {
    _Init_thread_header();
    in_RAX = (ulonglong)DAT_146b64470;
    if (DAT_146b64470 == 0xffffffff) {
      _DAT_146b64460 = FUN_1432bec70();
      uRam0000000146b64468 = extraout_XMM0_Qb_01;
      in_RAX = _Init_thread_footer();
      goto LAB_143352eac;
    }
  }
  else {
LAB_143352eac:
  }
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  uVar7 = 0;
  uVar9 = *(ulonglong *)(param_1 + 0x410);
  if (*(char *)(param_1 + 0x428) != '\0') {
    uVar9 = uVar9 - 1;
  }
  if (uVar9 != 0) {
    pfVar8 = *(float **)(param_1 + 0x420);
    do {
      uVar13 = -(uint)(pfVar8[4] <= fVar1 || fVar3 <= *pfVar8);
      uVar14 = -(uint)(pfVar8[5] <= fVar2 || fVar4 <= pfVar8[1]);
      uVar15 = -(uint)(pfVar8[6] <= fVar1 || fVar3 <= pfVar8[2]);
      uVar16 = -(uint)(pfVar8[7] <= fVar2 || fVar4 <= pfVar8[3]);
      auVar10._4_4_ = -(uint)((float)(DAT_146b64440_4 & uVar14) == DAT_146b64420_4);
      auVar10._0_4_ = -(uint)((float)(_DAT_146b64440 & uVar13) == _DAT_146b64420);
      auVar10._8_4_ =
           -(uint)((float)((uint)uRam0000000146b64448 & uVar15) == (float)uRam0000000146b64428);
      auVar10._12_4_ =
           -(uint)((float)(uRam0000000146b64448._4_4_ & uVar16) == uRam0000000146b64428._4_4_);
      uVar5 = movmskps((int)in_RAX,auVar10);
      if ((char)(uVar5 & 0xf) == '\x0f') {
        return 1;
      }
      auVar11._4_4_ = -(uint)((float)(DAT_146b64460_4 & uVar14) == DAT_146b64420_4);
      auVar11._0_4_ = -(uint)((float)(_DAT_146b64460 & uVar13) == _DAT_146b64420);
      auVar11._8_4_ =
           -(uint)((float)((uint)uRam0000000146b64468 & uVar15) == (float)uRam0000000146b64428);
      auVar11._12_4_ =
           -(uint)((float)(uRam0000000146b64468._4_4_ & uVar16) == uRam0000000146b64428._4_4_);
      uVar5 = movmskps(uVar5 & 0xf,auVar11);
      in_RAX = (ulonglong)(uVar5 & 0xf);
      if ((char)(uVar5 & 0xf) == '\x0f') {
        return 1;
      }
      uVar7 = uVar7 + 1;
      pfVar8 = pfVar8 + 8;
    } while (uVar7 < uVar9);
  }
  if (*(char *)(param_1 + 0x428) != '\0') {
    pfVar8 = (float *)(uVar7 * 0x20 + *(longlong *)(param_1 + 0x420));
    auVar12._4_4_ =
         -(uint)((float)(-(uint)(pfVar8[5] <= fVar2 || fVar4 <= pfVar8[1]) & DAT_146b64440_4) ==
                DAT_146b64420_4);
    auVar12._0_4_ =
         -(uint)((float)(-(uint)(pfVar8[4] <= fVar1 || fVar3 <= *pfVar8) & _DAT_146b64440) ==
                _DAT_146b64420);
    auVar12._8_4_ =
         -(uint)((float)(-(uint)(pfVar8[6] <= fVar1 || fVar3 <= pfVar8[2]) &
                        (uint)uRam0000000146b64448) == (float)uRam0000000146b64428);
    auVar12._12_4_ =
         -(uint)((float)(-(uint)(pfVar8[7] <= fVar2 || fVar4 <= pfVar8[3]) &
                        uRam0000000146b64448._4_4_) == uRam0000000146b64428._4_4_);
    uVar6 = movmskps((int)in_RAX,auVar12);
    in_RAX = 0;
    if (((byte)uVar6 & 0xf) == 0xf) {
      return 1;
    }
  }
LAB_143352f79:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143352fc0 FUN_143352fc0 body=233 status=ok
// SIG undefined FUN_143352fc0(void)

float * FUN_143352fc0(float *param_1,Matrix4x4<float> *param_2,longlong param_3,
                     Matrix3x4<float> *param_4,Rect<float> *param_5,char param_6)

{
  int iVar1;
  int iVar2;
  float local_58 [4];
  Matrix4x4<float> local_48 [64];
  
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(local_48,param_2,param_4);
  Scaleform::Render::Matrix4x4<float>::EncloseTransformHomogeneous
            (local_48,(Rect<float> *)local_58,param_5);
  if ((((*(uint *)(param_3 + 0x28) & 0x30) - 0x10 & 0xffffffdf) == 0) && (param_6 != '\0')) {
    iVar1 = *(int *)(param_3 + 0x14);
    iVar2 = *(int *)(param_3 + 0x10);
  }
  else {
    iVar1 = *(int *)(param_3 + 0x10);
    iVar2 = *(int *)(param_3 + 0x14);
  }
  *param_1 = (local_58[0] + 1.0) * (float)iVar1 * 0.5;
  param_1[2] = (local_58[2] + 1.0) * (float)iVar1 * 0.5;
  param_1[1] = (1.0 - local_58[3]) * (float)iVar2 * 0.5;
  param_1[3] = (1.0 - local_58[1]) * (float)iVar2 * 0.5;
  return param_1;
}



// FUNCTION 1433530b0 FUN_1433530b0 body=306 status=ok
// SIG undefined FUN_1433530b0(void)

void FUN_1433530b0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  plVar2 = (longlong *)*param_1;
  uVar8 = 0;
  plVar3 = (longlong *)param_1[1];
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    lVar4 = plVar2[7];
    if (*(longlong *)(lVar4 + 0x20) == 0) {
      printf("Null pRoot in %p - %p node\n",plVar2,lVar4);
    }
    uVar7 = 0;
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    plVar6 = plVar2;
    while (lVar5 != 0) {
      if (*(longlong *)(plVar6[7] + 0x20) == 0) {
        printf("Null pRoot in %p - %p node - at chain loop %u\n",plVar2,plVar2[7],uVar7);
      }
      plVar6 = (longlong *)*plVar1;
      uVar7 = (ulonglong)((int)uVar7 + 1);
      plVar1 = plVar6 + 1;
      lVar5 = plVar6[1];
    }
    if ((plVar2 != (longlong *)param_1[1]) && (*plVar2 == 0)) {
      printf("Frame %u: Null NextPattern after %p, count = %u\n",(ulonglong)DAT_146b643e4,plVar2,
             uVar8);
      lVar5 = *(longlong *)(lVar4 + 0x30);
      printf("SourceNode = %p, parent = %p\n",lVar4,lVar5);
      for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        printf("%p Depth = %d\n",lVar5,(ulonglong)*(ushort *)(lVar5 + 0x48));
      }
    }
    if (plVar2 == plVar3) break;
    plVar2 = (longlong *)*plVar2;
    uVar8 = (ulonglong)((int)uVar8 + 1);
  }
  return;
}



// FUNCTION 1433531f0 FUN_1433531f0 body=102 status=ok
// SIG undefined FUN_1433531f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433531f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b64490) {
    _Init_thread_header(&DAT_146b64490);
    if (DAT_146b64490 == -1) {
      _DAT_146b64480 = 0xffffffffffffffff;
      uRam0000000146b64488 = 0;
      _Init_thread_footer(&DAT_146b64490);
    }
  }
  return;
}



// FUNCTION 143353260 FUN_143353260 body=287 status=ok
// SIG undefined FUN_143353260(void)

undefined4 * FUN_143353260(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_3[1];
  *(undefined8 *)(param_1 + 4) = *param_3;
  *(undefined8 *)(param_1 + 6) = uVar4;
  uVar4 = param_3[3];
  *(undefined8 *)(param_1 + 8) = param_3[2];
  *(undefined8 *)(param_1 + 10) = uVar4;
  uVar4 = param_3[5];
  *(undefined8 *)(param_1 + 0xc) = param_3[4];
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  param_1[0x28] = DAT_14621c810;
  param_1[0x29] = DAT_14621c814;
  param_1[0x2a] = DAT_14621c818;
  param_1[0x2b] = DAT_14621c81c;
  param_1[0x2c] = DAT_14621c820;
  param_1[0x2d] = DAT_14621c824;
  param_1[0x2e] = DAT_14621c828;
  param_1[0x2f] = DAT_14621c82c;
  uVar4 = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x32) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x36) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar4 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar4;
  return param_1;
}



// FUNCTION 143353380 FUN_143353380 body=89 status=ok
// SIG undefined FUN_143353380(void)

undefined8 FUN_143353380(undefined8 param_1,ulonglong param_2)

{
  FUN_1433529e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1433533e0 FUN_1433533e0 body=89 status=ok
// SIG undefined FUN_1433533e0(void)

undefined8 FUN_1433533e0(undefined8 param_1,ulonglong param_2)

{
  FUN_14334dfd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 143353440 FUN_143353440 body=138 status=ok
// SIG undefined FUN_143353440(void)

undefined8 FUN_143353440(longlong param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  uVar3 = FUN_1432dcab0(param_1,&local_18);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  local_18._0_4_ = (int)local_18 - *(int *)(param_1 + 8);
  param_2[1] = (float)(local_18._4_4_ - *(int *)(param_1 + 0xc));
  *param_2 = (float)(int)local_18;
  param_2[2] = (float)((int)uStack_10 - iVar2);
  param_2[3] = (float)(uStack_10._4_4_ - iVar1);
  return CONCAT71((uint7)(uint3)((uint)(int)local_18 >> 8),1);
}



// FUNCTION 1433534d0 GetMatrix3D body=130 status=ok
// SIG undefined GetMatrix3D(void)

void Scaleform::Render::TransformArgs::GetMatrix3D
               (longlong param_1,byte param_2,Matrix3x4<float> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (-1 < (char)param_2) {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_3 + 8) = uVar1;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    *(undefined8 *)(param_3 + 0x20) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0x3f800000;
    return;
  }
  if ((param_2 & 0x40) != 0) {
    Matrix3x4<float>::MultiplyMatrix
              (param_3,(Matrix3x4<float> *)(param_1 + 0x10),(Matrix2x4<float> *)(param_1 + 0xa0));
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_3 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_3 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_3 + 0x28) = uVar1;
  return;
}



// FUNCTION 143353570 GetSize body=35 status=ok
// SIG undefined GetSize(void)

longlong Scaleform::Render::TreeNodeArray::GetSize(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return 0;
  }
  if ((uVar1 & 1) != 0) {
    return *(longlong *)((uVar1 & 0xfffffffffffffffe) + 8);
  }
  return (ulonglong)(param_1[1] != 0) + 1;
}



// FUNCTION 1433535a0 FUN_1433535a0 body=317 status=ok
// SIG undefined FUN_1433535a0(void)

longlong FUN_1433535a0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    return param_1 + 0x50;
  }
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    local_b8 = *(undefined8 *)(lVar1 + 0x10);
    uStack_b0 = *(undefined8 *)(lVar1 + 0x18);
    local_a8 = *(undefined8 *)(lVar1 + 0x20);
    uStack_a0 = *(undefined8 *)(lVar1 + 0x28);
    local_98 = *(undefined8 *)(lVar1 + 0x30);
    uStack_90 = *(undefined8 *)(lVar1 + 0x38);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
    local_88 = *(undefined8 *)(lVar1 + 0x10);
    uStack_80 = *(undefined8 *)(lVar1 + 0x18);
    local_78 = *(undefined8 *)(lVar1 + 0x20);
    uStack_70 = *(undefined8 *)(lVar1 + 0x28);
    local_68 = *(undefined8 *)(lVar1 + 0x30);
    uStack_60 = *(undefined8 *)(lVar1 + 0x38);
    local_58 = *(undefined8 *)(lVar1 + 0x40);
    uStack_50 = *(undefined8 *)(lVar1 + 0x48);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix
              ((Matrix4x4<float> *)&local_48,(Matrix4x4<float> *)&local_88,
               (Matrix3x4<float> *)&local_b8);
    *(undefined8 *)(param_1 + 0x50) = local_48;
    *(undefined8 *)(param_1 + 0x58) = uStack_40;
    *(undefined8 *)(param_1 + 0x60) = local_38;
    *(undefined8 *)(param_1 + 0x68) = uStack_30;
    *(undefined8 *)(param_1 + 0x70) = local_28;
    *(undefined8 *)(param_1 + 0x78) = uStack_20;
    *(undefined8 *)(param_1 + 0x80) = local_18;
    *(undefined8 *)(param_1 + 0x88) = uStack_10;
    *(undefined1 *)(param_1 + 0x90) = 0;
    return param_1 + 0x50;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x90) = 0;
  return param_1 + 0x50;
}



// FUNCTION 1433536e0 FUN_1433536e0 body=45 status=ok
// SIG undefined FUN_1433536e0(void)

void FUN_1433536e0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



// FUNCTION 143353710 FUN_143353710 body=116 status=ok
// SIG undefined FUN_143353710(void)

undefined1 FUN_143353710(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  if ((((param_3[1] <= param_1[3]) && (param_1[1] <= param_3[3])) &&
      (fVar2 = *param_1, fVar2 <= param_3[2])) && (fVar1 = *param_3, fVar1 <= param_1[2])) {
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    *param_2 = fVar2;
    fVar2 = param_3[2];
    if (param_1[2] <= param_3[2]) {
      fVar2 = param_1[2];
    }
    param_2[2] = fVar2;
    fVar2 = param_1[1];
    if (param_1[1] <= param_3[1]) {
      fVar2 = param_3[1];
    }
    param_2[1] = fVar2;
    fVar2 = param_3[3];
    if (param_1[3] <= param_3[3]) {
      fVar2 = param_1[3];
    }
    param_2[3] = fVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 143353790 FUN_143353790 body=106 status=ok
// SIG undefined FUN_143353790(void)

void FUN_143353790(longlong *param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  
  if ((*(uint *)((longlong)param_1 + 0xc) <= param_2) &&
     (cVar1 = FUN_143353910(param_1,param_2 + 1), cVar1 == '\0')) {
    return;
  }
  *param_3 = *(undefined8 *)((ulonglong)param_2 * 8 + *param_1);
  *(undefined8 *)((ulonglong)param_2 * 8 + *param_1) = param_4;
  if (*(uint *)(param_1 + 1) < param_2 + 1) {
    *(uint *)(param_1 + 1) = param_2 + 1;
  }
  return;
}



// FUNCTION 143353800 MatchSingleItemOverlap body=48 status=ok
// SIG undefined MatchSingleItemOverlap(void)

ulonglong Scaleform::Render::SortKey::MatchSingleItemOverlap(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  
  uVar1 = *(uint *)(*param_1 + 0xc);
  if ((uVar1 >> 0xf & 1) != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (((param_1[1] == param_2[1]) && (*param_1 == *param_2)) && ((uVar1 >> 0xe & 1) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143353830 FUN_143353830 body=224 status=ok
// SIG undefined FUN_143353830(void)

void FUN_143353830(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_3 + 0x48);
    *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_3 + 0x90);
    uVar4 = *(undefined8 *)(param_3 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    uVar1 = *(undefined4 *)(param_3 + 0x74);
    uVar2 = *(undefined4 *)(param_3 + 0x78);
    uVar3 = *(undefined4 *)(param_3 + 0x7c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    uVar1 = *(undefined4 *)(param_3 + 0x84);
    uVar2 = *(undefined4 *)(param_3 + 0x88);
    uVar3 = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x8c) = uVar3;
  }
  if (param_2 != 0) {
    lVar6 = 0;
    lVar5 = lVar6;
    if ((*(ushort *)(param_2 + 10) >> 0xb & 1) != 0) {
      lVar5 = FUN_143321150(param_2 + 0x40,5);
    }
    if ((*(ushort *)(param_2 + 10) >> 0xc & 1) != 0) {
      lVar6 = FUN_143321150(param_2 + 0x40,6);
    }
    if (lVar5 != 0) {
      *(longlong *)(param_1 + 0x40) = lVar5;
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    if (lVar6 != 0) {
      *(longlong *)(param_1 + 0x48) = lVar6;
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
  }
  return;
}



// FUNCTION 143353910 FUN_143353910 body=169 status=ok
// SIG undefined FUN_143353910(void)

undefined8 FUN_143353910(undefined8 *param_1,int param_2)

{
  uint uVar1;
  void *_Dst;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  _Dst = (void *)(**(code **)(*(longlong *)param_1[2] + 0x50))
                           ((longlong *)param_1[2],(ulonglong)uVar5 << 3,0);
  uVar2 = 0;
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)*param_1,(ulonglong)*(uint *)(param_1 + 1) << 3);
    uVar4 = 0;
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar5 != uVar1) {
      do {
        uVar3 = *(int *)(param_1 + 1) + uVar4;
        uVar4 = uVar4 + 1;
        *(undefined8 *)((longlong)_Dst + (ulonglong)uVar3 * 8) = param_1[3];
      } while (uVar4 < uVar5 - uVar1);
    }
    if ((undefined8 *)*param_1 != param_1 + 4) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = _Dst;
    uVar2 = 1;
    *(int *)((longlong)param_1 + 0xc) = param_2;
  }
  return uVar2;
}



// FUNCTION 1433539c0 FUN_1433539c0 body=168 status=ok
// SIG undefined FUN_1433539c0(void)

undefined8 FUN_1433539c0(longlong param_1,longlong param_2)

{
  void *_Dst;
  ulonglong uVar1;
  
  uVar1 = param_2 + 0x1fU & 0xffffffffffffffe0;
  _Dst = (void *)(**(code **)(*DAT_146b62f28 + 0x48))(DAT_146b62f28,uVar1 << 5,0x10);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop
              (_Dst,*(void **)(param_1 + 0x420),*(longlong *)(param_1 + 0x410) << 5);
    if (*(ulonglong *)(param_1 + 0x420) != (param_1 + 0xfU & 0xfffffffffffffff0)) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *(void **)(param_1 + 0x420) = _Dst;
    *(ulonglong *)(param_1 + 0x418) = uVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 143353a80 FUN_143353a80 body=11 status=ok
// SIG undefined FUN_143353a80(void)

void FUN_143353a80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145b01048;
  return;
}



// FUNCTION 143353b70 FUN_143353b70 body=123 status=ok
// SIG undefined FUN_143353b70(void)

undefined8 * FUN_143353b70(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145b010d8;
  lVar2 = -1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 3) = 0x2000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  param_1[5] = lVar2;
  param_1[6] = param_2;
  lVar2 = -1;
  if (param_2 != 0) {
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar1;
    } while (*(char *)(param_2 + lVar1) != '\0');
  }
  param_1[7] = lVar1;
  FUN_1432c5960(param_1 + 8,DAT_146b62f28);
  return param_1;
}



// FUNCTION 143353c00 FUN_143353c00 body=85 status=ok
// SIG undefined FUN_143353c00(void)

undefined8 * FUN_143353c00(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145b010d8;
  *(undefined2 *)(param_1 + 3) = 0x2000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[5] = *(undefined8 *)(param_2 + 2);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 6) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_1432c5960(param_1 + 8,DAT_146b62f28);
  return param_1;
}



// FUNCTION 143353c60 FUN_143353c60 body=129 status=ok
// SIG undefined FUN_143353c60(void)

undefined8 * FUN_143353c60(undefined8 *param_1,ulonglong *param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145b010d8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 3) = 0x2000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[5] = *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff;
  param_1[6] = (*param_2 & 0xfffffffffffffffc) + 0xc;
  param_1[7] = *(ulonglong *)(*param_2 & 0xfffffffffffffffc) & 0x7fffffffffffffff;
  FUN_1432c5960(param_1 + 8,DAT_146b62f28);
  return param_1;
}



// FUNCTION 143353cf0 FUN_143353cf0 body=139 status=ok
// SIG undefined FUN_143353cf0(void)

undefined8 * FUN_143353cf0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145b010d8;
  lVar1 = -1;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = -1;
  *(undefined2 *)(param_1 + 3) = 0x2000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = 0;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_3 + lVar2) != '\0');
  param_1[5] = lVar2;
  param_1[6] = param_3;
  if (param_3 == 0) {
    lVar1 = 0;
  }
  else {
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_3 + lVar1) != '\0');
  }
  param_1[7] = lVar1;
  FUN_1432c5960(param_1 + 8,DAT_146b62f28);
  return param_1;
}



// FUNCTION 143353d90 FUN_143353d90 body=89 status=ok
// SIG undefined FUN_143353d90(void)

undefined8 * FUN_143353d90(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145b010d8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 3) = 0x2000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = 0;
  param_1[5] = *(undefined8 *)(param_3 + 2);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 6) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 7) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  FUN_1432c5960(param_1 + 8,DAT_146b62f28);
  return param_1;
}



// FUNCTION 143353df0 FUN_143353df0 body=132 status=ok
// SIG undefined FUN_143353df0(void)

undefined8 * FUN_143353df0(undefined8 *param_1,undefined8 param_2,ulonglong *param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145b010d8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 3) = 0x2000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  param_1[4] = 0;
  param_1[5] = *(ulonglong *)(*param_3 & 0xfffffffffffffffc) & 0x7fffffffffffffff;
  param_1[6] = (*param_3 & 0xfffffffffffffffc) + 0xc;
  param_1[7] = *(ulonglong *)(*param_3 & 0xfffffffffffffffc) & 0x7fffffffffffffff;
  FUN_1432c5960(param_1 + 8,DAT_146b62f28);
  return param_1;
}



// FUNCTION 143353e80 FUN_143353e80 body=403 status=ok
// SIG undefined FUN_143353e80(void)

void FUN_143353e80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_88;
  ulonglong uStack_80;
  byte *local_78;
  longlong lStack_70;
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_40;
  byte **local_38;
  
  local_88 = *param_2;
  uStack_80 = param_2[1];
  plVar6 = (longlong *)0x0;
  if (uStack_80 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_1432c6320(&local_88,local_58,0x3a);
      pbVar2 = (byte *)*puVar5;
      lVar3 = puVar5[1];
      if (pbVar2 == (byte *)0x0) {
        return;
      }
      if (lVar3 == 0) {
        return;
      }
      uVar7 = lVar3 + 1U;
      if (uStack_80 < lVar3 + 1U) {
        uVar7 = uStack_80;
      }
      local_88 = local_88 + uVar7;
      uStack_80 = uStack_80 - uVar7;
      iVar4 = isdigit((int)(char)*pbVar2);
      if ((iVar4 == 0) &&
         ((0x2e < *pbVar2 || ((0x680900000000U >> ((ulonglong)*pbVar2 & 0x3f) & 1) == 0)))) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20);
        if (plVar1 != (longlong *)0x0) {
          local_40 = &local_88;
          local_38 = &local_78;
          local_48 = *(longlong *)(param_1 + 8);
          plVar6 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,&local_48);
        }
      }
      else {
        local_78 = pbVar2;
        lStack_70 = lVar3;
        FUN_143354170(param_1,&local_78);
      }
    } while (uStack_80 != 0);
    if (plVar6 != (longlong *)0x0) {
      uVar7 = param_2[1];
      uVar8 = lVar3 + 1U;
      if (uVar7 < lVar3 + 1U) {
        uVar8 = uVar7;
      }
      local_78 = (byte *)(*param_2 + uVar8);
      lStack_70 = uVar7 - uVar8;
      if (lStack_70 != 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_78);
      }
      FUN_143356f00(*(undefined8 *)(param_1 + 8),param_1,plVar6,1);
    }
  }
  return;
}



// FUNCTION 143354020 FUN_143354020 body=188 status=ok
// SIG undefined FUN_143354020(void)

void FUN_143354020(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0x18) != '\0') {
      uVar1 = *(ulonglong *)(param_1 + 0x28);
      if (*(ulonglong *)(param_1 + 0x38) < *(ulonglong *)(param_1 + 0x28)) {
        uVar1 = *(ulonglong *)(param_1 + 0x38);
      }
      if ((*(int *)(param_1 + 0x1c) == 1) && (uVar1 < *(ulonglong *)(param_1 + 0x20))) {
        for (lVar2 = *(ulonglong *)(param_1 + 0x20) - uVar1; lVar2 != 0; lVar2 = lVar2 + -1) {
          FUN_1432c5df0(param_1 + 0x40,(int)*(char *)(param_1 + 0x19));
        }
      }
      Scaleform::StringBuffer::AppendString(param_1 + 0x40,*(undefined8 *)(param_1 + 0x30),uVar1);
      if ((*(int *)(param_1 + 0x1c) == 0) && (uVar1 < *(ulonglong *)(param_1 + 0x20))) {
        for (lVar2 = *(ulonglong *)(param_1 + 0x20) - uVar1; lVar2 != 0; lVar2 = lVar2 + -1) {
          FUN_1432c5df0(param_1 + 0x40,(int)*(char *)(param_1 + 0x19));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



// FUNCTION 1433540f0 FUN_1433540f0 body=89 status=ok
// SIG undefined FUN_1433540f0(void)

longlong * FUN_1433540f0(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  if ((char)param_1[3] != '\0') {
    puVar1 = (undefined1 *)param_1[8];
    param_2[1] = param_1[9];
    puVar4 = &DAT_145af3922;
    if (puVar1 != (undefined1 *)0x0) {
      puVar4 = puVar1;
    }
    *param_2 = (longlong)puVar4;
    return param_2;
  }
  lVar2 = param_1[6];
  lVar3 = (**(code **)(*param_1 + 0x28))();
  param_2[1] = lVar3;
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 143354170 FUN_143354170 body=294 status=ok
// SIG undefined FUN_143354170(void)

void FUN_143354170(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = param_2[1];
  if ((lVar1 == 0) || (puVar2 = (undefined1 *)*param_2, puVar2 == (undefined1 *)0x0)) {
    return;
  }
  switch(*puVar2) {
  case 0x20:
    *(undefined1 *)(param_1 + 0x19) = 0x20;
    break;
  default:
    local_18 = (undefined4)*param_2;
    uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_10 = (undefined4)param_2[1];
    uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_1433542f0(param_1,&local_18);
    return;
  case 0x23:
    param_2[1] = lVar1 - (ulonglong)(lVar1 != 0);
    *param_2 = (longlong)(puVar2 + (lVar1 != 0));
    goto LAB_1433541dc;
  case 0x2b:
    *(undefined4 *)(param_1 + 0x1c) = 1;
    break;
  case 0x2d:
    *(undefined4 *)(param_1 + 0x1c) = 0;
    break;
  case 0x2e:
    param_2[1] = lVar1 - (ulonglong)(lVar1 != 0);
    *param_2 = (longlong)(puVar2 + (lVar1 != 0));
    iVar3 = FUN_1433580a0(param_2,0,CONCAT71((int7)((ulonglong)puVar2 >> 8),0x3a));
    uVar4 = (ulonglong)iVar3;
    *(ulonglong *)(param_1 + 0x28) = uVar4;
    if (*(ulonglong *)(param_1 + 0x38) < uVar4) {
      uVar4 = *(ulonglong *)(param_1 + 0x38);
    }
    *(bool *)(param_1 + 0x18) = uVar4 < *(ulonglong *)(param_1 + 0x20);
    return;
  case 0x30:
    *(undefined1 *)(param_1 + 0x19) = 0x30;
  }
  uVar4 = (ulonglong)(param_2[1] != 0);
  *param_2 = *param_2 + uVar4;
  param_2[1] = param_2[1] - uVar4;
LAB_1433541dc:
  local_28 = (undefined4)*param_2;
  uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_20 = (undefined4)param_2[1];
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_143354170(param_1,&local_28);
  return;
}



// FUNCTION 1433542f0 FUN_1433542f0 body=197 status=ok
// SIG undefined FUN_1433542f0(void)

void FUN_1433542f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        if (*(char *)(*param_2 + uVar3) == '.') goto LAB_143354333;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    uVar3 = 0xffffffffffffffff;
LAB_143354333:
    iVar1 = FUN_1433580a0(param_2,*(undefined4 *)(param_1 + 0x20),0x3a);
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    if (*(ulonglong *)(param_1 + 0x38) < *(ulonglong *)(param_1 + 0x28)) {
      uVar2 = *(ulonglong *)(param_1 + 0x38);
    }
    *(longlong *)(param_1 + 0x20) = (longlong)iVar1;
    *(bool *)(param_1 + 0x18) = uVar2 < (ulonglong)(longlong)iVar1;
    if (-1 < (longlong)uVar3) {
      uVar2 = (ulonglong)(param_2[1] != 0);
      *param_2 = *param_2 + uVar2;
      param_2[1] = param_2[1] - uVar2;
      iVar1 = FUN_1433580a0(param_2,*(undefined4 *)(param_1 + 0x28),0x3a);
      uVar2 = (ulonglong)iVar1;
      *(ulonglong *)(param_1 + 0x28) = uVar2;
      if (*(ulonglong *)(param_1 + 0x38) < uVar2) {
        uVar2 = *(ulonglong *)(param_1 + 0x38);
      }
      *(bool *)(param_1 + 0x18) = uVar2 < *(ulonglong *)(param_1 + 0x20);
    }
  }
  return;
}



// FUNCTION 1433543c0 FUN_1433543c0 body=48 status=ok
// SIG undefined FUN_1433543c0(void)

undefined8 * FUN_1433543c0(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b01158;
  *(undefined1 *)(param_1 + 2) = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfc | param_3 & 1;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 143354400 FUN_143354400 body=365 status=ok
// SIG undefined FUN_143354400(void)

void FUN_143354400(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong local_48;
  ulonglong local_40;
  char *local_30;
  longlong local_28;
  longlong local_20;
  char **local_18;
  longlong *local_10;
  
  FUN_1432c6320(param_2,&local_30,0x3a);
  if ((local_30 != (char *)0x0) && (local_28 != 0)) {
    if ((*local_30 == 's') && (local_30[1] == 'w')) {
      local_40 = param_2[1];
      uVar8 = local_28 + 1U;
      if (local_40 < local_28 + 1U) {
        uVar8 = local_40;
      }
      local_48 = *param_2 + uVar8;
      local_40 = local_40 - uVar8;
      puVar5 = (undefined4 *)FUN_1432c6320(&local_48,&local_20,CONCAT71((int7)(uVar8 >> 8),0x3a));
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      *(undefined4 *)(param_1 + 0x20) = *puVar5;
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        uVar8 = *(longlong *)(param_1 + 0x28) + 1;
        if (local_40 < uVar8) {
          uVar8 = local_40;
        }
        local_48 = local_48 + uVar8;
        local_40 = local_40 - uVar8;
        puVar6 = (undefined8 *)FUN_1432c6320(&local_48,&local_20,0x3a);
        uVar4 = puVar6[1];
        *(undefined8 *)(param_1 + 0x20) = *puVar6;
        *(undefined8 *)(param_1 + 0x28) = uVar4;
      }
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
      return;
    }
    local_20 = *(longlong *)(param_1 + 8);
    plVar7 = *(longlong **)(local_20 + 0x20);
    if (plVar7 != (longlong *)0x0) {
      local_18 = &local_30;
      local_10 = &local_48;
      plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,&local_20);
      if (plVar7 != (longlong *)0x0) {
        local_40 = param_2[1];
        uVar8 = local_28 + 1U;
        if (local_40 < local_28 + 1U) {
          uVar8 = local_40;
        }
        local_48 = *param_2 + uVar8;
        local_40 = local_40 - uVar8;
        if (local_40 != 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_48);
        }
        FUN_143356f00(*(undefined8 *)(param_1 + 8),param_1,plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 143354580 Convert body=80 status=ok
// SIG undefined Convert(void)

void Scaleform::BoolFormatter::Convert(longlong param_1)

{
  char *pcVar1;
  undefined8 uStack_10;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
      if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
        pcVar1 = "false";
        uStack_10 = 5;
      }
      else {
        pcVar1 = "true";
        uStack_10 = 4;
      }
      *(char **)(param_1 + 0x20) = pcVar1;
      *(undefined8 *)(param_1 + 0x28) = uStack_10;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



// FUNCTION 143354650 FUN_143354650 body=250 status=ok
// SIG undefined FUN_143354650(void)

void FUN_143354650(uint *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_2[1] != 0) && ((undefined1 *)*param_2 != (undefined1 *)0x0)) {
    switch(*(undefined1 *)*param_2) {
    case 0x20:
      *(byte *)((longlong)param_1 + 6) = *(byte *)((longlong)param_1 + 6) | 2;
      break;
    default:
      local_18 = (undefined4)*param_2;
      uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_10 = (undefined4)param_2[1];
      uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_1433547a0(param_1,&local_18);
      return;
    case 0x23:
      *(byte *)((longlong)param_1 + 6) = *(byte *)((longlong)param_1 + 6) | 8;
      break;
    case 0x2b:
      *(byte *)((longlong)param_1 + 5) = *(byte *)((longlong)param_1 + 5) | 0x80;
      break;
    case 0x2d:
      *(byte *)((longlong)param_1 + 6) = *(byte *)((longlong)param_1 + 6) | 4;
      break;
    case 0x2e:
      *param_1 = *param_1 & 0xffffffe0;
      uVar2 = (ulonglong)(param_2[1] != 0);
      *param_2 = *param_2 + uVar2;
      param_2[1] = param_2[1] - uVar2;
      uVar1 = FUN_1433580a0(param_2,*param_1 & 0x1f,0x3a);
      *param_1 = *param_1 & 0xffffffe0;
      *param_1 = *param_1 | uVar1 & 0x1f;
      return;
    case 0x30:
      *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xb0;
      *(byte *)(param_1 + 1) = (byte)param_1[1] | 0x30;
    }
    uVar2 = (ulonglong)(param_2[1] != 0);
    *param_2 = *param_2 + uVar2;
    param_2[1] = param_2[1] - uVar2;
    local_28 = (undefined4)*param_2;
    uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_20 = (undefined4)param_2[1];
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_143354650(param_1,&local_28);
    return;
  }
  return;
}



// FUNCTION 1433547a0 FUN_1433547a0 body=173 status=ok
// SIG undefined FUN_1433547a0(void)

void FUN_1433547a0(uint *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = param_2[1];
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        if (*(char *)(*param_2 + uVar3) == '.') goto LAB_1433547e2;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    uVar3 = 0xffffffffffffffff;
LAB_1433547e2:
    uVar1 = FUN_1433580a0(param_2,*param_1 >> 5 & 0x1f,0x3a);
    *param_1 = *param_1 & 0xfffffc1f;
    *param_1 = *param_1 | (uVar1 & 0x1f) << 5;
    if (-1 < (longlong)uVar3) {
      *param_1 = *param_1 & 0xffffffe0;
      uVar2 = (ulonglong)(param_2[1] != 0);
      *param_2 = *param_2 + uVar2;
      param_2[1] = param_2[1] - uVar2;
      uVar1 = FUN_1433580a0(param_2,*param_1 & 0x1f,0x3a);
      *param_1 = *param_1 & 0xffffffe0;
      *param_1 = *param_1 | uVar1 & 0x1f;
    }
  }
  return;
}



// FUNCTION 143354860 FUN_143354860 body=173 status=ok
// SIG undefined FUN_143354860(void)

void FUN_143354860(longlong param_1,longlong param_2,ulonglong param_3,char param_4,uint param_5)

{
  char *pcVar1;
  ulonglong uVar2;
  char *pcVar3;
  int iVar4;
  
  if (((param_4 == '\0') || (param_5 != 10)) || (iVar4 = 3, (*(byte *)(param_1 + 5) & 0x7f) == 0)) {
    iVar4 = 1000;
  }
  pcVar3 = "0123456789ABCDEF";
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    pcVar3 = "0123456789abcdef";
  }
  if (param_5 - 2 < 0xf) {
    do {
      if (param_2 == *(longlong *)(param_1 + 8)) {
        return;
      }
      uVar2 = param_3 / param_5;
      if (iVar4 == 0) {
        pcVar1 = (char *)(*(longlong *)(param_1 + 8) + -1);
        *(char **)(param_1 + 8) = pcVar1;
        iVar4 = 3;
        *pcVar1 = (char)(*(char *)(param_1 + 5) * '\x02') >> 1;
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
      iVar4 = iVar4 + -1;
      **(char **)(param_1 + 8) = pcVar3[param_3 % (ulonglong)param_5 & 0xff];
      param_3 = uVar2;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 143354920 FUN_143354920 body=166 status=ok
// SIG undefined FUN_143354920(void)

void FUN_143354920(longlong param_1,longlong param_2,uint param_3,char param_4,uint param_5)

{
  ulonglong uVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  if (((param_4 == '\0') || (param_5 != 10)) || (iVar3 = 3, (*(byte *)(param_1 + 5) & 0x7f) == 0)) {
    iVar3 = 1000;
  }
  pcVar5 = "0123456789ABCDEF";
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    pcVar5 = "0123456789abcdef";
  }
  uVar4 = (ulonglong)param_3;
  if (param_5 - 2 < 0xf) {
    do {
      if (param_2 == *(longlong *)(param_1 + 8)) {
        return;
      }
      uVar1 = uVar4 / param_5;
      if (iVar3 == 0) {
        pcVar2 = (char *)(*(longlong *)(param_1 + 8) + -1);
        *(char **)(param_1 + 8) = pcVar2;
        iVar3 = 3;
        *pcVar2 = (char)(*(char *)(param_1 + 5) * '\x02') >> 1;
      }
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -1;
      iVar3 = iVar3 + -1;
      **(char **)(param_1 + 8) = pcVar5[uVar4 % (ulonglong)param_5 & 0xff];
      uVar4 = uVar1;
    } while ((int)uVar1 != 0);
  }
  return;
}



// FUNCTION 1433549d0 FUN_1433549d0 body=121 status=ok
// SIG undefined FUN_1433549d0(void)

undefined8 * FUN_1433549d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_145b01058;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd | 1;
  param_1[7] = (longlong)param_2;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354a50 FUN_143354a50 body=113 status=ok
// SIG undefined FUN_143354a50(void)

undefined8 * FUN_143354a50(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b01058;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfc;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  param_1[7] = (ulonglong)param_2;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354ad0 FUN_143354ad0 body=121 status=ok
// SIG undefined FUN_143354ad0(void)

undefined8 * FUN_143354ad0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_145b01058;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd | 1;
  param_1[7] = (longlong)param_2;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354b50 FUN_143354b50 body=113 status=ok
// SIG undefined FUN_143354b50(void)

undefined8 * FUN_143354b50(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_145b01058;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfc;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  param_1[7] = (ulonglong)param_2;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354bd0 FUN_143354bd0 body=111 status=ok
// SIG undefined FUN_143354bd0(void)

undefined8 * FUN_143354bd0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_145b01058;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 3;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  param_1[7] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354c50 FUN_143354c50 body=115 status=ok
// SIG undefined FUN_143354c50(void)

undefined8 * FUN_143354c50(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_145b01058;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  param_1[7] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354cd0 FUN_143354cd0 body=122 status=ok
// SIG undefined FUN_143354cd0(void)

undefined8 * FUN_143354cd0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b01058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd | 1;
  param_1[7] = (longlong)param_3;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354d50 FUN_143354d50 body=115 status=ok
// SIG undefined FUN_143354d50(void)

undefined8 * FUN_143354d50(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b01058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfc;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  param_1[7] = (ulonglong)param_3;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354dd0 FUN_143354dd0 body=122 status=ok
// SIG undefined FUN_143354dd0(void)

undefined8 * FUN_143354dd0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b01058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfd | 1;
  param_1[7] = (longlong)param_3;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354e50 FUN_143354e50 body=115 status=ok
// SIG undefined FUN_143354e50(void)

undefined8 * FUN_143354e50(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b01058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffea;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 10;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfc;
  *param_1 = &PTR_FUN_145b011d8;
  param_1[3] = &PTR_LAB_145b01258;
  param_1[7] = (ulonglong)param_3;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x5c);
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  return param_1;
}



// FUNCTION 143354fd0 FUN_143354fd0 body=830 status=ok
// SIG undefined FUN_143354fd0(void)

void FUN_143354fd0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char *_Str1;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong local_c8;
  ulonglong uStack_c0;
  byte *local_b8;
  ulonglong local_b0;
  char *local_a8;
  longlong lStack_a0;
  longlong local_88;
  longlong *local_80;
  char **local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  if (uStack_c0 != 0) {
    do {
      puVar6 = (undefined8 *)FUN_1432c6320(&local_c8,local_70,0x3a);
      _Str1 = (char *)*puVar6;
      lVar3 = puVar6[1];
      if (_Str1 == (char *)0x0) {
        return;
      }
      if (lVar3 == 0) {
        return;
      }
      uVar10 = lVar3 + 1U;
      if (uStack_c0 < lVar3 + 1U) {
        uVar10 = uStack_c0;
      }
      local_c8 = local_c8 + uVar10;
      uStack_c0 = uStack_c0 - uVar10;
      iVar4 = isdigit((int)*_Str1);
      if (iVar4 == 0) {
        switch(*_Str1) {
        case ' ':
        case '#':
        case '+':
        case '-':
        case '.':
          goto switchD_1433550b4_caseD_20;
        default:
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20);
          if (plVar2 != (longlong *)0x0) {
            local_80 = &local_c8;
            local_78 = &local_a8;
            local_88 = *(longlong *)(param_1 + 8);
            plVar7 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,&local_88);
          }
          break;
        case 'b':
          iVar4 = strncmp(_Str1,"base",4);
          if (iVar4 == 0) {
            uVar5 = FUN_1433580a0(&local_c8,10,0x3a);
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffe0;
            *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | uVar5 & 0x1f;
          }
          break;
        case 'o':
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffe8;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
          puVar6 = (undefined8 *)FUN_1432c6320(&local_c8,local_60,0x3a);
          local_a8 = (char *)*puVar6;
          lStack_a0 = puVar6[1];
          FUN_143354650(param_1 + 0x20,&local_a8);
          break;
        case 'r':
          lVar8 = FUN_143358520(0x60,*(longlong *)(param_1 + 8) + 0x1e0);
          if (lVar8 != 0) {
            plVar9 = (longlong *)
                     FUN_143358410(lVar8,*(undefined8 *)(param_1 + 8),
                                   *(undefined4 *)(param_1 + 0x38));
          }
LAB_14335528d:
          local_c8 = local_c8 + uStack_c0;
          uStack_c0 = 0;
          plVar7 = plVar9;
          goto LAB_143355299;
        case 's':
          if (_Str1[1] == 'w') {
            plVar7 = (longlong *)FUN_143358520(0x48,*(longlong *)(param_1 + 8) + 0x1e0);
            if (plVar7 != (longlong *)0x0) {
              uVar1 = *(undefined4 *)(param_1 + 0x38);
              plVar7[1] = *(longlong *)(param_1 + 8);
              *plVar7 = (longlong)&PTR_FUN_145b01388;
              *(undefined1 *)(plVar7 + 2) = 0;
              *(undefined4 *)(plVar7 + 3) = uVar1;
              plVar7[4] = 0;
              plVar7[5] = 0;
              plVar7[6] = 0;
              plVar7[7] = 0;
              plVar7[8] = 0;
              plVar9 = plVar7;
            }
            goto LAB_14335528d;
          }
          iVar4 = strncmp(_Str1,"sep",3);
          if (iVar4 == 0) {
            FUN_1432c6320(&local_c8,&local_b8,0x3a);
            if (local_b0 != 0) {
              *(byte *)(param_1 + 0x25) =
                   *(byte *)(param_1 + 0x25) ^ (*(byte *)(param_1 + 0x25) ^ *local_b8) & 0x7f;
            }
            uVar10 = local_b0;
            if (uStack_c0 < local_b0) {
              uVar10 = uStack_c0;
            }
            local_c8 = local_c8 + uVar10;
            uStack_c0 = uStack_c0 - uVar10;
          }
          break;
        case 'x':
          *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfe;
        case 'X':
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffff0;
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
          puVar6 = (undefined8 *)FUN_1432c6320(&local_c8,local_50,0x3a);
          local_a8 = (char *)*puVar6;
          lStack_a0 = puVar6[1];
          FUN_143354650(param_1 + 0x20,&local_a8);
        }
      }
      else {
switchD_1433550b4_caseD_20:
        local_a8 = _Str1;
        lStack_a0 = lVar3;
        FUN_143354650(param_1 + 0x20,&local_a8);
      }
    } while (uStack_c0 != 0);
LAB_143355299:
    if (plVar7 != (longlong *)0x0) {
      local_b0 = param_2[1];
      uVar10 = lVar3 + 1U;
      if (local_b0 < lVar3 + 1U) {
        uVar10 = local_b0;
      }
      local_b8 = (byte *)(*param_2 + uVar10);
      local_b0 = local_b0 - uVar10;
      if (local_b0 != 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_b8);
      }
      FUN_143356f00(*(undefined8 *)(param_1 + 8),param_1,plVar7,1);
    }
  }
  return;
}



// FUNCTION 143355390 FUN_143355390 body=637 status=ok
// SIG undefined FUN_143355390(void)

void FUN_143355390(longlong param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong _Size;
  void *_Dst;
  char *pcVar5;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (((*(byte *)(param_1 + 0x20) & 0x1f) != 0) || (*(longlong *)(param_1 + 0x38) != 0)) {
      if ((*(byte *)(param_1 + 0x34) & 2) == 0) {
        if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
          uVar3 = *(uint *)(param_1 + 0x30);
          iVar1 = *(int *)(param_1 + 0x38);
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x30);
          uVar2 = (int)*(uint *)(param_1 + 0x38) >> 0x1f;
          iVar1 = (*(uint *)(param_1 + 0x38) ^ uVar2) - uVar2;
        }
        FUN_143354920(param_1 + 0x20,param_1 + 0x40,iVar1,1,uVar3 & 0x1f);
      }
      else {
        uVar4 = (longlong)*(ulonglong *)(param_1 + 0x38) >> 0x3f;
        FUN_143354860(param_1 + 0x20,param_1 + 0x40,(*(ulonglong *)(param_1 + 0x38) ^ uVar4) - uVar4
                      ,1,*(uint *)(param_1 + 0x30) & 0x1f);
      }
    }
    uVar4 = (param_1 - *(longlong *)(param_1 + 0x28)) + 0x5c;
    if (uVar4 < (*(uint *)(param_1 + 0x20) & 0x1f)) {
      do {
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
        uVar4 = uVar4 + 1;
        **(undefined1 **)(param_1 + 0x28) = 0x30;
      } while (uVar4 < (*(uint *)(param_1 + 0x20) & 0x1f));
    }
    if ((*(byte *)(param_1 + 0x20) & 0x1f) == 0) {
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xa0;
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 0x20;
    }
    if (*(longlong *)(param_1 + 0x38) < 0) {
      if ((*(byte *)(param_1 + 0x24) & 0x7f) == 0x30) {
        uVar4 = (param_1 - *(longlong *)(param_1 + 0x28)) + 0x5c;
        while( true ) {
          if ((*(byte *)(param_1 + 0x25) < 0x80) && ((*(byte *)(param_1 + 0x26) & 2) == 0)) {
            iVar1 = 0;
          }
          else {
            iVar1 = 1;
          }
          if ((*(uint *)(param_1 + 0x20) >> 5 & 0x1f) - iVar1 <= uVar4) break;
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
          uVar4 = uVar4 + 1;
          **(char **)(param_1 + 0x28) = (char)(*(char *)(param_1 + 0x24) * '\x02') >> 1;
        }
      }
      FUN_143355690(param_1,*(ulonglong *)(param_1 + 0x38) >> 0x3f);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x30) & 0x1f;
      if ((((uVar3 - 8 & 0xfffffff7) == 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
         ((*(byte *)(param_1 + 0x26) & 8) != 0)) {
        if (uVar3 == 0x10) {
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
          **(byte **)(param_1 + 0x28) = (~*(byte *)(param_1 + 0x26) & 1) << 5 | 0x58;
        }
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
        **(undefined1 **)(param_1 + 0x28) = 0x30;
      }
    }
    if (((*(byte *)(param_1 + 0x26) & 2) != 0) && (*(byte *)(param_1 + 0x25) < 0x80)) {
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xa0;
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 0x20;
      if (((*(byte *)(param_1 + 0x34) & 1) != 0) && (-1 < *(longlong *)(param_1 + 0x38))) {
        *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
        **(undefined1 **)(param_1 + 0x28) = 0x20;
      }
    }
    _Size = (param_1 - (longlong)*(void **)(param_1 + 0x28)) + 0x5c;
    uVar4 = (ulonglong)(*(uint *)(param_1 + 0x20) >> 5 & 0x1f);
    if ((*(byte *)(param_1 + 0x26) & 4) == 0) {
      if (_Size < uVar4) {
        do {
          *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
          _Size = _Size + 1;
          **(char **)(param_1 + 0x28) = (char)(*(char *)(param_1 + 0x24) * '\x02') >> 1;
        } while (_Size < (*(uint *)(param_1 + 0x20) >> 5 & 0x1f));
      }
    }
    else if (_Size < uVar4) {
      _Dst = (void *)((param_1 - uVar4) + 0x5c);
      memmove(_Dst,*(void **)(param_1 + 0x28),_Size);
      *(void **)(param_1 + 0x28) = _Dst;
      pcVar5 = (char *)((longlong)_Dst + _Size);
      if (_Size < (*(uint *)(param_1 + 0x20) >> 5 & 0x1f)) {
        do {
          _Size = _Size + 1;
          *pcVar5 = (char)(*(char *)(param_1 + 0x24) * '\x02') >> 1;
          pcVar5 = pcVar5 + 1;
        } while (_Size < (*(uint *)(param_1 + 0x20) >> 5 & 0x1f));
      }
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



// FUNCTION 143355620 FUN_143355620 body=47 status=ok
// SIG undefined FUN_143355620(void)

longlong * FUN_143355620(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x28))();
  lVar1 = param_1[5];
  param_2[1] = lVar2;
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 143355660 GetSize body=9 status=ok
// SIG undefined GetSize(void)

longlong Scaleform::LongFormatter::GetSize(longlong param_1)

{
  return (param_1 - *(longlong *)(param_1 + 0x28)) + 0x5c;
}



// FUNCTION 143355670 InitString body=22 status=ok
// SIG undefined InitString(void)

void Scaleform::DoubleFormatter::InitString(longlong param_1,void *param_2,size_t param_3)

{
  if (*(char *)(param_1 + -8) != '\0') {
    ::_guard_xfg_dispatch_icall_nop(param_2,*(void **)(param_1 + 0x10),param_3);
    return;
  }
  return;
}



// FUNCTION 143355690 FUN_143355690 body=149 status=ok
// SIG undefined FUN_143355690(void)

void FUN_143355690(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20), plVar2 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (param_2 == '\0') {
      if (*(byte *)(param_1 + 0x25) < 0x80) {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x20);
    }
    else {
      uVar1 = *(undefined4 *)(lVar3 + 0x24);
    }
    uVar4 = FUN_143358c00(param_1 + 0x40,0x1d,*(undefined8 *)(param_1 + 0x28),uVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    return;
  }
  if (param_2 == '\0') {
    if (0x7f < *(byte *)(param_1 + 0x25)) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
      **(undefined1 **)(param_1 + 0x28) = 0x2b;
    }
    return;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
  **(undefined1 **)(param_1 + 0x28) = 0x2d;
  return;
}



// FUNCTION 143355730 FUN_143355730 body=110 status=ok
// SIG undefined FUN_143355730(void)

undefined8 * FUN_143355730(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_145b01058;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *param_1 = &PTR_FUN_145b01268;
  param_1[3] = &PTR_LAB_145b012e8;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x1a3);
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a3) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffe6;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 6;
  return param_1;
}



// FUNCTION 1433557b0 FUN_1433557b0 body=112 status=ok
// SIG undefined FUN_1433557b0(void)

undefined8 * FUN_1433557b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b01058;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffc21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xa0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x21;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) | 0x20;
  *(byte *)((longlong)param_1 + 0x26) = *(byte *)((longlong)param_1 + 0x26) & 0xf1 | 1;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  *param_1 = &PTR_FUN_145b01268;
  param_1[3] = &PTR_LAB_145b012e8;
  param_1[5] = (undefined1 *)((longlong)param_1 + 0x1a3);
  param_1[7] = param_3;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a3) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffe6;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 6;
  return param_1;
}



// FUNCTION 143355830 FUN_143355830 body=773 status=ok
// SIG undefined FUN_143355830(void)

void FUN_143355830(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char *_Str1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  double dVar9;
  longlong local_d8;
  ulonglong uStack_d0;
  char *local_c8;
  longlong lStack_c0;
  byte *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  char **local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  local_d8 = *param_2;
  uStack_d0 = param_2[1];
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (uStack_d0 != 0) {
    do {
      puVar4 = (undefined8 *)FUN_1432c6320(&local_d8,local_80,0x3a);
      _Str1 = (char *)*puVar4;
      lVar2 = puVar4[1];
      if (_Str1 == (char *)0x0) {
        return;
      }
      if (lVar2 == 0) {
        return;
      }
      uVar6 = lVar2 + 1U;
      if (uStack_d0 < lVar2 + 1U) {
        uVar6 = uStack_d0;
      }
      local_d8 = local_d8 + uVar6;
      uStack_d0 = uStack_d0 - uVar6;
      iVar3 = isdigit((int)*_Str1);
      if (iVar3 == 0) {
        switch(*_Str1) {
        case ' ':
        case '#':
        case '+':
        case '-':
        case '.':
          goto switchD_143355914_caseD_20;
        default:
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20);
          if (plVar1 != (longlong *)0x0) {
            local_90 = &local_d8;
            local_88 = &local_c8;
            local_98 = *(longlong *)(param_1 + 8);
            plVar5 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,&local_98);
          }
          break;
        case 'e':
          *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfe;
        case 'E':
          *(undefined4 *)(param_1 + 0x30) = 1;
          puVar4 = (undefined8 *)FUN_1432c6320(&local_d8,local_60,0x3a);
          local_c8 = (char *)*puVar4;
          lStack_c0 = puVar4[1];
          FUN_143354650(param_1 + 0x20,&local_c8);
          break;
        case 'f':
          *(undefined4 *)(param_1 + 0x30) = 0;
          puVar4 = (undefined8 *)FUN_1432c6320(&local_d8,local_70,0x3a);
          local_c8 = (char *)*puVar4;
          lStack_c0 = puVar4[1];
          FUN_143354650(param_1 + 0x20,&local_c8);
          break;
        case 'g':
          *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xfe;
        case 'G':
          *(undefined4 *)(param_1 + 0x30) = 2;
          puVar4 = (undefined8 *)FUN_1432c6320(&local_d8,local_50,0x3a);
          local_c8 = (char *)*puVar4;
          lStack_c0 = puVar4[1];
          FUN_143354650(param_1 + 0x20,&local_c8);
          break;
        case 's':
          if (_Str1[1] == 'w') {
            plVar5 = (longlong *)FUN_143358520(0x48,*(longlong *)(param_1 + 8) + 0x1e0);
            if (plVar5 != (longlong *)0x0) {
              dVar9 = *(double *)(param_1 + 0x38);
              if (dVar9 <= 0.0) {
                dVar9 = dVar9 - 0.5;
              }
              else {
                dVar9 = dVar9 + 0.5;
              }
              plVar5[1] = *(longlong *)(param_1 + 8);
              *plVar5 = (longlong)&PTR_FUN_145b01388;
              *(undefined1 *)(plVar5 + 2) = 0;
              *(int *)(plVar5 + 3) = (int)dVar9;
              plVar5[4] = 0;
              plVar5[5] = 0;
              plVar5[6] = 0;
              plVar5[7] = 0;
              plVar5[8] = 0;
              plVar7 = plVar5;
            }
            local_d8 = local_d8 + uStack_d0;
            uStack_d0 = 0;
            plVar5 = plVar7;
            goto LAB_143355ac0;
          }
          iVar3 = strncmp(_Str1,"sep",3);
          if ((iVar3 == 0) && (FUN_1432c6320(&local_d8,&local_a8,0x3a), local_a0 != 0)) {
            *(byte *)(param_1 + 0x25) =
                 *(byte *)(param_1 + 0x25) ^ (*(byte *)(param_1 + 0x25) ^ *local_a8) & 0x7f;
          }
        }
      }
      else {
switchD_143355914_caseD_20:
        local_c8 = _Str1;
        lStack_c0 = lVar2;
        FUN_143354650(param_1 + 0x20,&local_c8);
      }
    } while (uStack_d0 != 0);
LAB_143355ac0:
    if (plVar5 != (longlong *)0x0) {
      uVar6 = param_2[1];
      uVar8 = lVar2 + 1U;
      if (uVar6 < lVar2 + 1U) {
        uVar8 = uVar6;
      }
      local_a8 = (byte *)(*param_2 + uVar8);
      local_a0 = uVar6 - uVar8;
      if (local_a0 != 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_a8);
      }
      FUN_143356f00(*(undefined8 *)(param_1 + 8),param_1,plVar5,1);
    }
  }
  return;
}



// FUNCTION 143355bc0 FUN_143355bc0 body=368 status=ok
// SIG undefined FUN_143355bc0(void)

void FUN_143355bc0(longlong param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined2 local_48;
  undefined1 local_46 [2];
  byte local_44 [28];
  undefined1 local_28 [32];
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar4 = *(int *)(param_1 + 0x30);
    bVar9 = 0x20;
    if (iVar4 == 0) {
      bVar9 = 0x66;
    }
    else if (iVar4 == 1) {
      bVar9 = (~*(byte *)(param_1 + 0x26) & 1) << 5 | 0x45;
    }
    else if (iVar4 == 2) {
      bVar9 = (~*(byte *)(param_1 + 0x26) & 1) << 5 | 0x47;
    }
    puVar8 = (undefined4 *)local_46;
    local_48 = 0x2525;
    if (0x7f < *(byte *)(param_1 + 0x25)) {
      local_46[0] = 0x2b;
      puVar8 = (undefined4 *)(local_46 + 1);
    }
    bVar2 = *(byte *)(param_1 + 0x26);
    if ((bVar2 & 8) != 0) {
      *(undefined1 *)puVar8 = 0x23;
      puVar8 = (undefined4 *)((longlong)puVar8 + 1);
    }
    if ((bVar2 & 2) != 0) {
      *(undefined1 *)puVar8 = 0x20;
      puVar8 = (undefined4 *)((longlong)puVar8 + 1);
    }
    if ((bVar2 & 4) != 0) {
      *(undefined1 *)puVar8 = 0x2d;
      puVar8 = (undefined4 *)((longlong)puVar8 + 1);
    }
    if ((*(byte *)(param_1 + 0x24) & 0x7f) == 0x30) {
      *(undefined1 *)puVar8 = 0x30;
      puVar8 = (undefined4 *)((longlong)puVar8 + 1);
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    if ((uVar5 & 0x3e0) == 0x20) {
      *(undefined2 *)puVar8 = 0x252e;
      *(undefined1 *)((longlong)puVar8 + 2) = 100;
      *(byte *)((longlong)puVar8 + 3) = bVar9;
      *(undefined1 *)(puVar8 + 1) = 0;
      FUN_1432f2bf0(local_28,0x20,&local_48,uVar5 & 0x1f);
    }
    else {
      *puVar8 = 0x252e6425;
      *(undefined1 *)(puVar8 + 1) = 100;
      *(byte *)((longlong)puVar8 + 5) = bVar9;
      *(undefined1 *)((longlong)puVar8 + 6) = 0;
      FUN_1432f2bf0(local_28,0x20,&local_48,uVar5 >> 5 & 0x1f,uVar5 & 0x1f);
    }
    pcVar1 = (char *)(param_1 + 0x48);
    uVar7 = FUN_1432f2bf0(pcVar1,0x15c,local_28,*(undefined8 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    *(char **)(param_1 + 0x28) = pcVar1;
    cVar3 = *pcVar1;
    while (cVar3 != '\0') {
      pcVar6 = *(char **)(param_1 + 0x28);
      if (*pcVar6 == ',') {
        *pcVar6 = '.';
        break;
      }
      *(char **)(param_1 + 0x28) = pcVar6 + 1;
      cVar3 = pcVar6[1];
    }
    *(char **)(param_1 + 0x28) = pcVar1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



// FUNCTION 143355d40 FUN_143355d40 body=47 status=ok
// SIG undefined FUN_143355d40(void)

longlong * FUN_143355d40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x28))();
  lVar1 = param_1[5];
  param_2[1] = lVar2;
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 143355d80 GetSamples body=5 status=ok
// SIG undefined GetSamples(void)

undefined8 FWmfMediaPlayer::GetSamples(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 143355d90 FUN_143355d90 body=79 status=ok
// SIG undefined FUN_143355d90(void)

void FUN_143355d90(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong _Size;
  
  if (*(char *)(param_1 + -8) != '\0') {
    _Size = (**(code **)(*(longlong *)(param_1 + -0x18) + 0x28))(param_1 + -0x18);
    if (param_3 < _Size) {
      _Size = param_3;
    }
    _guard_xfg_dispatch_icall_nop(param_2,*(void **)(param_1 + 0x10),_Size);
  }
  return;
}



// FUNCTION 143355df0 FUN_143355df0 body=171 status=ok
// SIG undefined FUN_143355df0(void)

void FUN_143355df0(longlong param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20), plVar2 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x10))();
    if (param_2 == '\0') {
      if (param_3 == '\0') {
        return;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x20);
    }
    else {
      uVar1 = *(undefined4 *)(lVar3 + 0x24);
    }
    uVar4 = FUN_143358c00(param_1 + 0x48,0x15c,*(undefined8 *)(param_1 + 0x28),uVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    return;
  }
  if (param_2 == '\0') {
    if (param_3 != '\0') {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
      **(undefined1 **)(param_1 + 0x28) = 0x2b;
    }
    return;
  }
  *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -1;
  **(undefined1 **)(param_1 + 0x28) = 0x2d;
  return;
}



// FUNCTION 143355f70 FUN_143355f70 body=101 status=ok
// SIG undefined FUN_143355f70(void)

undefined8 * FUN_143355f70(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_145b012f8;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 3) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  uVar5 = *(undefined8 *)(param_3 + 4);
  param_1[6] = 0;
  param_1[5] = uVar5;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar1 = *(longlong *)(param_3 + 4);
  param_1[6] = lVar1;
  if ((lVar1 == 0) && (*(longlong **)(param_2 + 0x20) != (longlong *)0x0)) {
    uVar5 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x18))();
    param_1[6] = uVar5;
  }
  return param_1;
}



// FUNCTION 143356000 FUN_143356000 body=207 status=ok
// SIG undefined FUN_143356000(void)

void FUN_143356000(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong local_48;
  longlong lStack_40;
  undefined1 local_38 [8];
  longlong local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong local_18;
  
  plVar3 = (longlong *)0x0;
  local_48 = 0;
  lStack_40 = 0;
  FUN_1432c6320(param_2,local_38,0x3a);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20);
  if (plVar1 != (longlong *)0x0) {
    local_20 = local_38;
    local_18 = param_1 + 0x18;
    local_28 = *(longlong *)(param_1 + 8);
    plVar3 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,&local_28);
  }
  uVar2 = param_2[1];
  uVar4 = local_30 + 1U;
  if (uVar2 < local_30 + 1U) {
    uVar4 = uVar2;
  }
  local_48 = *param_2 + uVar4;
  lStack_40 = uVar2 - uVar4;
  if (plVar3 != (longlong *)0x0) {
    if (lStack_40 != 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
    }
    FUN_143356f00(*(undefined8 *)(param_1 + 8),param_1,plVar3,1);
  }
  return;
}



// FUNCTION 1433560e0 FUN_1433560e0 body=103 status=ok
// SIG undefined FUN_1433560e0(void)

void FUN_1433560e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x30);
    local_18[0] = 0;
    local_10 = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_28,param_1 + 0x18,local_18);
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined8 *)(param_1 + 0x38) = local_28;
      *(undefined8 *)(param_1 + 0x40) = uStack_20;
      return;
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 143356180 FUN_143356180 body=61 status=ok
// SIG undefined FUN_143356180(void)

undefined8 * FUN_143356180(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_1 + 0x18,param_3);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1433561d0 FUN_1433561d0 body=129 status=ok
// SIG undefined FUN_1433561d0(void)

undefined8 * FUN_1433561d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined2 *)(param_1 + 1) = 0x25;
  *param_1 = &PTR__scalar_deleting_destructor__145b01378;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0xffff0000;
  lVar2 = ((longlong)param_1 + 0x1e7U & 0xfffffffffffffff8) + 8;
  uVar1 = param_2[1];
  param_1[5] = *param_2;
  param_1[6] = uVar1;
  param_1[7] = param_2[2];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x3c] = 0;
  param_1[0x7d] = lVar2;
  param_1[0x7e] = (longlong)param_1 + (1000 - lVar2);
  return param_1;
}



// FUNCTION 1433562f0 FUN_1433562f0 body=222 status=ok
// SIG undefined FUN_1433562f0(void)

void FUN_1433562f0(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = param_1[8];
  uVar4 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145b01378;
  uVar5 = uVar4;
  if (uVar1 != 0) {
    do {
      if (uVar5 < 0x10) {
        puVar2 = param_1 + 0xc;
      }
      else {
        puVar2 = (undefined8 *)(param_1[9] + -0x180);
      }
      piVar3 = (int *)((longlong)puVar2 + uVar4);
      if ((((*piVar3 == 2) && ((char)piVar3[4] != '\0')) &&
          (puVar2 = *(undefined8 **)(piVar3 + 2), puVar2 != (undefined8 *)0x0)) &&
         (((**(code **)*puVar2)(puVar2,0), puVar2 < param_1 + 0x3d || (param_1 + 0x7d <= puVar2))))
      {
        (**(code **)(*DAT_146b62f28 + 0x60))();
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar4 + 0x18;
    } while (uVar5 < uVar1);
  }
  if (param_1[9] != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  *param_1 = &PTR_FUN_145af1858;
  return;
}



// FUNCTION 1433563e0 FUN_1433563e0 body=788 status=ok
// SIG undefined FUN_1433563e0(void)

void FUN_1433563e0(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar9;
  char *_Str;
  ulonglong uVar10;
  undefined1 uVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  char *local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  bVar7 = false;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  bVar6 = false;
  if (param_2 == (char *)0x0) {
    return;
  }
  *(undefined2 *)(param_1 + 10) = 0;
  _Str = param_2;
  if (*param_2 == '\0') {
    return;
  }
  do {
    if (bVar6) {
      pcVar12 = _Str;
      if (!bVar6) goto LAB_143356595;
      if (*param_2 != '}') goto LAB_143356592;
      if (_Str != param_2) {
        uVar11 = 0xff;
        iVar9 = isspace((int)*_Str);
        while (iVar9 != 0) {
          pcVar12 = _Str + 1;
          _Str = _Str + 1;
          iVar9 = isspace((int)*pcVar12);
        }
        iVar9 = isdigit((int)*_Str);
        if (iVar9 == 0) {
          *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
        }
        else {
          iVar9 = atoi(_Str);
          uVar11 = (undefined1)iVar9;
          cVar4 = *_Str;
          while (cVar4 != '\0') {
            if ((cVar4 == ':') || (cVar4 == '}')) {
              if (*_Str == ':') {
                _Str = _Str + 1;
              }
              break;
            }
            pcVar12 = _Str + 1;
            _Str = _Str + 1;
            cVar4 = *pcVar12;
          }
        }
        uStack_70 = CONCAT31(CONCAT21(uStack_70._2_2_,uVar11),(char)param_2 - (char)_Str);
        local_78 = SUB84(_Str,0);
        uStack_74 = (undefined4)((ulonglong)_Str >> 0x20);
        uVar10 = *(ulonglong *)(param_1 + 0x40);
        local_48 = 1;
        uStack_40 = local_78;
        uStack_3c = uStack_74;
        uStack_38 = uStack_70;
        uStack_34 = uStack_6c;
        if (uVar10 < 0x10) {
          puVar1 = (undefined4 *)(param_1 + 0x60 + uVar10 * 0x18);
          *puVar1 = 1;
          puVar1[1] = uStack_44;
          puVar1[2] = local_78;
          puVar1[3] = uStack_74;
          *(ulonglong *)(param_1 + 0x70 + uVar10 * 0x18) = CONCAT44(uStack_6c,uStack_70);
        }
        else {
          uVar10 = *(longlong *)(param_1 + 0x50) + 1;
          if (uVar10 < *(ulonglong *)(param_1 + 0x50)) {
            uVar13 = uVar10;
            if (uVar10 < *(ulonglong *)(param_1 + 0x58) >> 1) {
LAB_14335653a:
              FUN_143358d20(param_1 + 0x48,param_1 + 0x48,uVar13);
            }
          }
          else if (*(ulonglong *)(param_1 + 0x58) < uVar10) {
            uVar13 = (uVar10 >> 2) + uVar10;
            goto LAB_14335653a;
          }
          lVar5 = *(longlong *)(param_1 + 0x48);
          *(ulonglong *)(param_1 + 0x50) = uVar10;
          puVar1 = (undefined4 *)(lVar5 + -0x18 + uVar10 * 0x18);
          *puVar1 = local_48;
          puVar1[1] = uStack_44;
          puVar1[2] = uStack_40;
          puVar1[3] = uStack_3c;
          *(ulonglong *)(lVar5 + -8 + uVar10 * 0x18) = CONCAT44(uStack_34,uStack_38);
        }
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
        if (*(short *)(param_1 + 0xc) == -1) {
          *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0x40) + -1;
        }
      }
      bVar6 = false;
      pcVar12 = param_2 + 1;
      param_2 = param_2 + 1;
    }
    else if (bVar7) {
      bVar7 = false;
LAB_143356592:
      pcVar12 = _Str;
      param_2 = param_2 + 1;
    }
    else if (*param_2 == '{') {
      if (_Str != param_2) {
        local_60 = (longlong)param_2 - (longlong)_Str;
        local_68 = _Str;
        FUN_143357ce0(param_1,&local_68);
      }
      pcVar12 = param_2 + 1;
      bVar6 = true;
      param_2 = pcVar12;
    }
    else {
      if (((int)*param_2 != (uint)*(byte *)(param_1 + 8)) ||
         (pcVar12 = param_2 + 1, param_2[1] == '\0')) goto LAB_143356592;
      if (_Str != param_2) {
        uStack_50 = (longlong)param_2 - (longlong)_Str;
        local_58 = _Str;
        FUN_143357ce0(param_1,&local_58);
      }
      bVar7 = true;
      param_2 = pcVar12;
    }
LAB_143356595:
    lVar5 = uStack_50;
    _Str = pcVar12;
  } while (*param_2 != '\0');
  if (bVar6) {
    return;
  }
  if (pcVar12 == param_2) {
    return;
  }
  uVar10 = *(ulonglong *)(param_1 + 0x40);
  uStack_50 = CONCAT71(uStack_50._1_7_,(char)param_2 - (char)pcVar12);
  uVar8 = uStack_50;
  local_48 = 0;
  local_58._0_4_ = SUB84(pcVar12,0);
  local_58._4_4_ = (undefined4)((ulonglong)pcVar12 >> 0x20);
  uStack_50._4_4_ = SUB84(lVar5,4);
  uStack_40 = (undefined4)local_58;
  uStack_3c = local_58._4_4_;
  uStack_38 = (undefined4)uStack_50;
  uStack_34 = uStack_50._4_4_;
  if (uVar10 < 0x10) {
    plVar2 = (longlong *)(param_1 + 0x60 + uVar10 * 0x18);
    *plVar2 = (ulonglong)uStack_44 << 0x20;
    plVar2[1] = (longlong)pcVar12;
    *(ulonglong *)(param_1 + 0x70 + uVar10 * 0x18) = CONCAT44(uStack_50._4_4_,(undefined4)uStack_50)
    ;
    goto LAB_1433566d2;
  }
  uVar10 = *(ulonglong *)(param_1 + 0x50) + 1;
  if (uVar10 < *(ulonglong *)(param_1 + 0x50)) {
    uVar13 = uVar10;
    if (uVar10 < *(ulonglong *)(param_1 + 0x58) >> 1) {
LAB_1433566a5:
      local_58 = pcVar12;
      uStack_50 = uVar8;
      FUN_143358d20(param_1 + 0x48,param_1 + 0x48,uVar13);
    }
  }
  else if (*(ulonglong *)(param_1 + 0x58) < uVar10) {
    uVar13 = (uVar10 >> 2) + uVar10;
    goto LAB_1433566a5;
  }
  lVar5 = *(longlong *)(param_1 + 0x48);
  *(ulonglong *)(param_1 + 0x50) = uVar10;
  puVar3 = (undefined8 *)(lVar5 + -0x18 + uVar10 * 0x18);
  *puVar3 = CONCAT44(uStack_44,local_48);
  puVar3[1] = CONCAT44(uStack_3c,uStack_40);
  *(ulonglong *)(lVar5 + -8 + uVar10 * 0x18) = CONCAT44(uStack_34,uStack_38);
LAB_1433566d2:
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
  return;
}



// FUNCTION 143356700 FUN_143356700 body=1916 status=ok
// SIG undefined FUN_143356700(void)

void FUN_143356700(longlong param_1,longlong *param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  byte local_res10;
  uint local_res20;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  if (param_2[1] != 0) {
    lVar14 = *param_2;
    iVar16 = 0;
    lVar6 = uStack_88;
    for (uVar15 = param_2[1]; uStack_88 = lVar6, uVar15 != 0; uVar15 = uVar15 - uVar9) {
      uVar5 = 0;
      if (uVar15 == 0) {
LAB_14335677f:
        uVar5 = *(ulonglong *)(param_1 + 0x40);
        uStack_88 = CONCAT71((int7)((ulonglong)lVar6 >> 8),(char)uVar15);
        lVar3 = uStack_88;
        uVar15 = local_a8 >> 0x20;
        local_a8 = local_a8 & 0xffffffff00000000;
        local_90._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_88._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
        uStack_98 = (undefined4)uStack_88;
        uStack_94 = uStack_88._4_4_;
        uStack_a0 = lVar14;
        uStack_88 = lVar3;
        if (uVar5 < 0x10) {
          puVar1 = (undefined4 *)(param_1 + 0x60 + uVar5 * 0x18);
          *puVar1 = 0;
          puVar1[1] = (int)uVar15;
          puVar1[2] = (int)lVar14;
          puVar1[3] = local_90._4_4_;
          *(ulonglong *)(param_1 + 0x70 + uVar5 * 0x18) =
               CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
          local_90 = lVar14;
        }
        else {
          uVar15 = *(ulonglong *)(param_1 + 0x50) + 1;
          if (uVar15 < *(ulonglong *)(param_1 + 0x50)) {
            uVar5 = uVar15;
            local_90 = lVar14;
            if (uVar15 < *(ulonglong *)(param_1 + 0x58) >> 1) {
LAB_143356e0f:
              local_90 = lVar14;
              FUN_143358d20(param_1 + 0x48,param_1 + 0x48,uVar5);
            }
          }
          else {
            local_90 = lVar14;
            if (*(ulonglong *)(param_1 + 0x58) < uVar15) {
              uVar5 = (uVar15 >> 2) + uVar15;
              goto LAB_143356e0f;
            }
          }
          lVar14 = *(longlong *)(param_1 + 0x48);
          *(ulonglong *)(param_1 + 0x50) = uVar15;
          puVar1 = (undefined4 *)(lVar14 + -0x18 + uVar15 * 0x18);
          *puVar1 = (undefined4)local_a8;
          puVar1[1] = local_a8._4_4_;
          puVar1[2] = (undefined4)uStack_a0;
          puVar1[3] = uStack_a0._4_4_;
          *(ulonglong *)(lVar14 + -8 + uVar15 * 0x18) = CONCAT44(uStack_94,uStack_98);
        }
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 1;
        break;
      }
      while (*(char *)(lVar14 + uVar5) != '%') {
        uVar5 = uVar5 + 1;
        if (uVar15 <= uVar5) goto LAB_14335677f;
      }
      if ((longlong)uVar5 < 0) goto LAB_14335677f;
      uVar9 = uVar5 + 1;
      if (uVar9 < uVar15) {
        if (*(char *)(lVar14 + uVar9) == '%') {
          uVar10 = (uVar15 - uVar5) - 1;
          if (uVar15 < uVar10) {
            uVar10 = uVar15;
          }
          uVar5 = uVar9;
          local_90 = lVar14;
          uStack_88 = uVar15 - uVar10;
          goto LAB_143356db9;
        }
        bVar2 = false;
        local_res20 = 10;
        local_res10 = 0;
        local_c0 = 0;
        if (uVar9 != 0) {
          uVar10 = uVar15 - uVar5;
          if (uVar15 < uVar15 - uVar5) {
            uVar10 = uVar15;
          }
          local_70 = uVar15 - uVar10;
          local_78 = lVar14;
          FUN_143357ce0(param_1);
        }
        iVar11 = 0;
        uVar10 = 0;
        local_c8 = local_c8 & 0xffffffff00000000;
        uVar5 = uVar9;
        puVar12 = param_3;
        bVar4 = false;
        if (uVar9 < uVar15) {
          do {
            bVar2 = bVar4;
            iVar13 = (int)uVar10;
            param_3 = puVar12;
            switch(*(undefined1 *)(lVar14 + uVar5)) {
            case 0x45:
              local_res10 = 1;
            case 0x65:
              local_c0 = 1;
              goto LAB_143356998;
            case 0x47:
              local_res10 = 1;
            case 0x67:
              local_c0 = 2;
LAB_143356998:
              local_c8 = *puVar12;
              param_3 = puVar12 + 1;
              iVar16 = 3;
              goto LAB_1433569ab;
            case 0x49:
              iVar11 = 3;
              uVar10 = (ulonglong)(iVar13 + 1);
              break;
            case 0x58:
              local_res10 = 1;
            case 0x78:
              param_3 = puVar12 + 1;
              iVar16 = 1;
              local_c8 = CONCAT44(local_c8._4_4_,(int)*puVar12);
              bVar2 = true;
              local_res20 = 0x10;
              goto LAB_1433569ab;
            case 100:
            case 0x69:
              param_3 = puVar12 + 1;
              if (iVar11 == 2) {
                local_c8 = (ulonglong)(int)*puVar12;
                iVar16 = 2;
              }
              else {
                iVar16 = 1;
                local_c8 = CONCAT44(local_c8._4_4_,(int)*puVar12);
              }
              goto LAB_1433569ab;
            case 0x66:
              local_c0 = 0;
              goto LAB_143356998;
            case 0x68:
              iVar11 = 1;
              uVar10 = (ulonglong)(iVar13 + 1);
              break;
            case 0x6c:
              iVar11 = 2;
              uVar10 = (ulonglong)(iVar13 + 1);
              break;
            case 0x6e:
              param_3 = puVar12 + 1;
              iVar16 = 1;
              local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)*puVar12);
              goto LAB_1433569ab;
            case 0x6f:
              param_3 = puVar12 + 1;
              iVar16 = 1;
              local_c8 = CONCAT44(local_c8._4_4_,(int)*puVar12);
              local_res20 = 8;
              bVar2 = true;
              goto LAB_1433569ab;
            case 0x70:
              param_3 = puVar12 + 1;
              iVar16 = 1;
              local_res20 = 0x10;
              bVar2 = true;
              local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)*puVar12);
              goto LAB_1433569ab;
            case 0x73:
              local_c8 = *puVar12;
              param_3 = puVar12 + 1;
              iVar16 = 4;
              goto LAB_1433569ab;
            case 0x75:
              local_c8 = CONCAT44(local_c8._4_4_,(int)*puVar12);
              iVar16 = 2;
              if (iVar11 != 2) {
                iVar16 = 1;
              }
              bVar2 = true;
              param_3 = puVar12 + 1;
            }
            if ((iVar16 != 0) ||
               (uVar5 = uVar5 + 1, puVar12 = param_3, bVar4 = bVar2, uVar15 <= uVar5)) break;
          } while( true );
        }
LAB_1433569ab:
        local_80 = uVar9;
        if (iVar16 == 1) {
          local_a8 = lVar14 + uVar9;
          uStack_a0 = (uVar5 - uVar10) - uVar9;
          plVar7 = (longlong *)FUN_143358520(0x60,param_1 + 0x1e0);
          if (bVar2) {
            if (plVar7 == (longlong *)0x0) {
LAB_143356d57:
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7[1] = 0;
              *plVar7 = (longlong)&PTR_FUN_145b01058;
              *(undefined1 *)(plVar7 + 2) = 0;
              *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffc21;
              *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) & 0xa0;
              *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) | 0x21;
              *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) | 0x20;
              *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) & 0xf1 | 1;
              *(undefined1 *)((longlong)plVar7 + 0x25) = 0;
              plVar7[5] = 0;
              *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xffffffea;
              *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) | 10;
              *(byte *)((longlong)plVar7 + 0x34) = *(byte *)((longlong)plVar7 + 0x34) & 0xfc;
              *plVar7 = (longlong)&PTR_FUN_145b011d8;
              plVar7[3] = (longlong)&PTR_LAB_145b01258;
              plVar7[7] = local_c8 & 0xffffffff;
              plVar7[5] = (longlong)plVar7 + 0x5c;
              *(undefined1 *)((longlong)plVar7 + 0x5c) = 0;
            }
          }
          else {
            if (plVar7 == (longlong *)0x0) goto LAB_143356d57;
            plVar7[1] = 0;
            *plVar7 = (longlong)&PTR_FUN_145b01058;
            *(undefined1 *)(plVar7 + 2) = 0;
            *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffc21;
            *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) & 0xa0;
            *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) | 0x21;
            *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) | 0x20;
            *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) & 0xf1 | 1;
            *(undefined1 *)((longlong)plVar7 + 0x25) = 0;
            plVar7[5] = 0;
            *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xffffffea;
            *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) | 10;
            *plVar7 = (longlong)&PTR_FUN_145b011d8;
            plVar7[3] = (longlong)&PTR_LAB_145b01258;
            *(byte *)((longlong)plVar7 + 0x34) = *(byte *)((longlong)plVar7 + 0x34) & 0xfd | 1;
            plVar7[7] = (longlong)(int)local_c8;
            plVar7[5] = (longlong)plVar7 + 0x5c;
            *(undefined1 *)((longlong)plVar7 + 0x5c) = 0;
          }
          *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xffffffe0;
          *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) | local_res20;
          *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) & 0xfe;
          *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) | local_res10;
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_a8);
          FUN_143357dc0(param_1);
        }
        else if (iVar16 == 2) {
          local_48 = lVar14 + uVar9;
          local_40 = (uVar5 - uVar10) - uVar9;
          plVar7 = (longlong *)FUN_143358520(0x60,param_1 + 0x1e0);
          if (bVar2) {
            if (plVar7 == (longlong *)0x0) goto LAB_143356bfc;
            plVar7[1] = 0;
            *plVar7 = (longlong)&PTR_FUN_145b01058;
            *(undefined1 *)(plVar7 + 2) = 0;
            *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffc21;
            *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) & 0xa0;
            *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) | 0x21;
            *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) | 0x20;
            *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) & 0xf1 | 1;
            *(undefined1 *)((longlong)plVar7 + 0x25) = 0;
            plVar7[5] = 0;
            *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xffffffea;
            *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) | 10;
            *(byte *)((longlong)plVar7 + 0x34) = *(byte *)((longlong)plVar7 + 0x34) & 0xfe;
            *(byte *)((longlong)plVar7 + 0x34) = *(byte *)((longlong)plVar7 + 0x34) | 2;
LAB_143356bd3:
            *plVar7 = (longlong)&PTR_FUN_145b011d8;
            plVar7[3] = (longlong)&PTR_LAB_145b01258;
            plVar7[7] = local_c8;
            plVar7[5] = (longlong)plVar7 + 0x5c;
            *(undefined1 *)((longlong)plVar7 + 0x5c) = 0;
          }
          else {
            if (plVar7 != (longlong *)0x0) {
              plVar7[1] = 0;
              *plVar7 = (longlong)&PTR_FUN_145b01058;
              *(undefined1 *)(plVar7 + 2) = 0;
              *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffc21;
              *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) & 0xa0;
              *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) | 0x21;
              *(byte *)((longlong)plVar7 + 0x24) = *(byte *)((longlong)plVar7 + 0x24) | 0x20;
              *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) & 0xf1 | 1;
              *(undefined1 *)((longlong)plVar7 + 0x25) = 0;
              plVar7[5] = 0;
              *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xffffffea;
              *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) | 10;
              *(byte *)((longlong)plVar7 + 0x34) = *(byte *)((longlong)plVar7 + 0x34) | 3;
              goto LAB_143356bd3;
            }
LAB_143356bfc:
            plVar7 = (longlong *)0x0;
          }
          *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) & 0xffffffe0;
          *(uint *)(plVar7 + 6) = *(uint *)(plVar7 + 6) | local_res20;
          *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) & 0xfe;
          *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) | local_res10;
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_48);
          FUN_143357dc0(param_1);
        }
        else if (iVar16 == 3) {
          plVar8 = (longlong *)FUN_143358520(0x1a8,param_1 + 0x1e0);
          plVar7 = (longlong *)0x0;
          if (plVar8 != (longlong *)0x0) {
            *plVar8 = (longlong)&PTR_FUN_145b01058;
            plVar8[1] = 0;
            *(undefined1 *)(plVar8 + 2) = 0;
            *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xfffffc21;
            *(byte *)((longlong)plVar8 + 0x24) = *(byte *)((longlong)plVar8 + 0x24) & 0xa0;
            *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) | 0x21;
            *(byte *)((longlong)plVar8 + 0x24) = *(byte *)((longlong)plVar8 + 0x24) | 0x20;
            *(byte *)((longlong)plVar8 + 0x26) = *(byte *)((longlong)plVar8 + 0x26) & 0xf1 | 1;
            *(undefined1 *)((longlong)plVar8 + 0x25) = 0;
            *plVar8 = (longlong)&PTR_FUN_145b01268;
            plVar8[3] = (longlong)&PTR_LAB_145b012e8;
            plVar8[5] = (longlong)plVar8 + 0x1a3;
            plVar8[7] = local_c8;
            *(undefined4 *)(plVar8 + 6) = 0;
            plVar8[8] = 0;
            *(undefined1 *)((longlong)plVar8 + 0x1a3) = 0;
            *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) & 0xffffffe6;
            *(uint *)(plVar8 + 4) = *(uint *)(plVar8 + 4) | 6;
            plVar7 = plVar8;
          }
          local_58 = lVar14 + local_80;
          local_50 = uVar5 - local_80;
          *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) & 0xfe;
          *(byte *)((longlong)plVar7 + 0x26) = *(byte *)((longlong)plVar7 + 0x26) | local_res10;
          *(undefined4 *)(plVar7 + 6) = local_c0;
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_58);
          FUN_143357dc0(param_1);
        }
        else if (iVar16 == 4) {
          local_68 = lVar14 + uVar9;
          local_60 = (uVar5 - uVar10) - uVar9;
          lVar6 = FUN_143358520(0x70,param_1 + 0x1e0);
          if (lVar6 == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)FUN_143353b70(lVar6,local_c8);
          }
          (**(code **)(*plVar7 + 0x10))(plVar7,&local_68);
          FUN_143357dc0(param_1);
        }
      }
      else {
LAB_143356db9:
        FUN_143357ce0(param_1);
      }
      uVar9 = uVar5 + 1;
      if (uVar15 < uVar5 + 1) {
        uVar9 = uVar15;
      }
      lVar14 = lVar14 + uVar9;
      lVar6 = uStack_88;
    }
    FUN_1433571d0(param_1);
  }
  return;
}



// FUNCTION 143356f00 FUN_143356f00 body=131 status=ok
// SIG undefined FUN_143356f00(void)

ulonglong FUN_143356f00(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  int *in_RAX;
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined7 uStack_2f;
  undefined4 uStack_24;
  
  uVar2 = 0;
  uVar3 = uVar2;
  if (*(ulonglong *)(param_1 + 0x40) != 0) {
    do {
      if (uVar2 < 0x10) {
        lVar1 = param_1 + 0x60;
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x48) + -0x180;
      }
      in_RAX = (int *)(lVar1 + uVar3);
      if ((*in_RAX == 2) && (*(longlong *)(in_RAX + 2) == param_2)) {
        *(ulonglong *)in_RAX = CONCAT44(uStack_24,2);
        *(undefined8 *)(in_RAX + 2) = param_3;
        *(ulonglong *)(in_RAX + 4) = CONCAT71(uStack_2f,param_4);
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 + 0x18;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x40));
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143356f90 FinishFormatD body=21 status=ok
// SIG undefined FinishFormatD(void)

void Scaleform::MsgFormat::FinishFormatD(longlong param_1)

{
  if (*(short *)(param_1 + 10) != 0) {
    *(undefined1 *)(param_1 + 9) = 0xff;
    FUN_143357110();
    return;
  }
  FUN_1433571d0();
  return;
}



// FUNCTION 143356fb0 FUN_143356fb0 body=134 status=ok
// SIG undefined FUN_143356fb0(void)

ulonglong FUN_143356fb0(longlong param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = (ulonglong)*(ushort *)(param_1 + 0xc);
  bVar1 = true;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  if (uVar2 < *(ulonglong *)(param_1 + 0x40)) {
    lVar4 = uVar2 * 0x18;
    do {
      if (uVar2 < 0x10) {
        lVar3 = param_1 + 0x60;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x48) + -0x180;
      }
      if (*(int *)(lVar3 + lVar4) == 1) {
        if (*(char *)(lVar3 + lVar4 + 0x11) == *(char *)(param_1 + 9)) {
          if (bVar1) {
            *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
          }
          *(ulonglong *)(param_1 + 0x18) = uVar2;
          return CONCAT71((int7)(uVar2 >> 8),1);
        }
        bVar1 = false;
      }
      else if (bVar1) {
        *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x40));
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 143357040 FUN_143357040 body=189 status=ok
// SIG undefined FUN_143357040(void)

void FUN_143357040(longlong param_1,longlong *param_2,undefined1 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined7 uStack_3f;
  undefined8 local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar1 < 0x10) {
    lVar2 = param_1 + 0x40 + uVar1 * 0x18 + 0x20;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x48) + (uVar1 - 0x10) * 0x18;
  }
  local_28 = 2;
  local_38 = *(undefined8 *)(lVar2 + 8);
  uStack_30 = *(ulonglong *)(lVar2 + 0x10);
  uStack_18 = CONCAT71(uStack_3f,param_3);
  if (uVar1 < 0x10) {
    puVar3 = (undefined4 *)(param_1 + 0x40 + uVar1 * 0x18 + 0x20);
  }
  else {
    puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + (uVar1 - 0x10) * 0x18);
  }
  uStack_20._0_4_ = SUB84(param_2,0);
  uStack_20._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  *puVar3 = 2;
  puVar3[1] = uStack_24;
  puVar3[2] = (undefined4)uStack_20;
  puVar3[3] = uStack_20._4_4_;
  *(undefined8 *)(puVar3 + 4) = uStack_18;
  if ((char)uStack_30 != '\0') {
    uStack_30 = uStack_30 & 0xff;
    uStack_20 = param_2;
    (**(code **)(*param_2 + 0x10))(param_2,&local_38);
  }
  return;
}



// FUNCTION 143357110 FUN_143357110 body=172 status=ok
// SIG undefined FUN_143357110(void)

void FUN_143357110(longlong param_1)

{
  short *psVar1;
  char cVar2;
  undefined4 uStack_70;
  undefined **local_58;
  longlong local_50;
  undefined1 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  uStack_70 = CONCAT31(uStack_70._1_3_,1);
  local_58 = &PTR_FUN_145b012f8;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = uStack_70;
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  local_28 = 0;
  local_50 = param_1;
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    local_28 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  }
  cVar2 = FUN_143356fb0(param_1);
  if (cVar2 != '\0') {
    FUN_143357040(param_1,&local_58,0);
  }
  psVar1 = (short *)(param_1 + 10);
  *psVar1 = *psVar1 + -1;
  if (*psVar1 != 0) {
    FUN_143357110();
    return;
  }
  FUN_1433571d0(param_1);
  return;
}



// FUNCTION 1433571d0 FUN_1433571d0 body=442 status=ok
// SIG undefined FUN_1433571d0(void)

void FUN_1433571d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_28;
  ulonglong local_20;
  
  uVar9 = 0;
  uVar5 = param_1[8];
  param_1[2] = 0;
  uVar8 = uVar9;
  uVar10 = uVar9;
  if (uVar5 != 0) {
    do {
      if (uVar8 < 0x10) {
        plVar6 = param_1 + 0xc;
        plVar4 = param_1 + 0xc;
      }
      else {
        plVar6 = (longlong *)(param_1[9] + -0x180);
        plVar4 = (longlong *)(param_1[9] + -0x180);
      }
      if (*(int *)((longlong)plVar4 + uVar10) == 0) {
        uVar3 = (ulonglong)*(byte *)((longlong)plVar6 + uVar10 + 0x10);
LAB_143357263:
        param_1[2] = param_1[2] + uVar3;
      }
      else if (*(int *)((longlong)plVar4 + uVar10) == 2) {
        FUN_143357390(param_1,uVar8);
        plVar6 = *(longlong **)((longlong)plVar6 + uVar10 + 8);
        if (plVar6 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar6 + 0x28))();
          goto LAB_143357263;
        }
      }
      uVar8 = uVar8 + 1;
      uVar10 = uVar10 + 0x18;
    } while (uVar8 < uVar5);
  }
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    FUN_1432c3a60(param_1[6],param_1,param_1[2]);
  }
  else if (iVar1 == 1) {
    lVar2 = param_1[6];
    uVar5 = param_1[8];
    Scaleform::StringBuffer::Reserve(lVar2,*(longlong *)(lVar2 + 8) + param_1[2]);
    uVar8 = uVar9;
    if (uVar5 != 0) {
      do {
        if (uVar8 < 0x10) {
          plVar6 = param_1 + 0xc;
          plVar4 = param_1 + 0xc;
        }
        else {
          plVar6 = (longlong *)(param_1[9] + -0x180);
          plVar4 = (longlong *)(param_1[9] + -0x180);
        }
        if (*(int *)((longlong)plVar4 + uVar9) == 0) {
          uVar10 = (ulonglong)*(byte *)((longlong)plVar6 + uVar9 + 0x10);
          uVar7 = *(undefined8 *)((longlong)plVar6 + uVar9 + 8);
LAB_14335734b:
          Scaleform::StringBuffer::AppendString(lVar2,uVar7,uVar10);
        }
        else if ((*(int *)((longlong)plVar4 + uVar9) == 2) &&
                (plVar6 = *(longlong **)((longlong)plVar6 + uVar9 + 8), plVar6 != (longlong *)0x0))
        {
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_28);
          uVar7 = local_28;
          uVar10 = local_20;
          goto LAB_14335734b;
        }
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + 0x18;
      } while (uVar8 < uVar5);
    }
  }
  else if (iVar1 == 2) {
    lVar2 = param_1[6];
    (**(code **)(*param_1 + 8))(param_1,lVar2,param_1[7]);
    uVar5 = param_1[2];
    if (param_1[7] - 1U < (ulonglong)param_1[2]) {
      uVar5 = param_1[7] - 1U;
    }
    *(undefined1 *)(uVar5 + lVar2) = 0;
  }
  return;
}



// FUNCTION 143357390 FUN_143357390 body=2371 status=ok
// SIG undefined FUN_143357390(void)

void FUN_143357390(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  char cVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong uStack_a0;
  longlong *local_98 [2];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  ulonglong uStack_70;
  longlong *local_68;
  longlong *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  if (param_2 < 0x10) {
    piVar19 = (int *)(param_1 + (param_2 + 4) * 0x18);
  }
  else {
    piVar19 = (int *)(*(longlong *)(param_1 + 0x48) + (param_2 - 0x10) * 0x18);
  }
  if (*piVar19 != 2) {
    return;
  }
  if (param_2 < 0x10) {
    lVar16 = param_1 + (param_2 + 4) * 0x18;
  }
  else {
    lVar16 = *(longlong *)(param_1 + 0x48) + (param_2 - 0x10) * 0x18;
  }
  plVar12 = *(longlong **)(lVar16 + 8);
  local_b0 = plVar12;
  bVar5 = (**(code **)(*plVar12 + 0x30))(plVar12);
  if (bVar5 == 0) {
    if ((char)plVar12[2] != '\0') {
      return;
    }
    lVar16 = *plVar12;
    goto LAB_143357cb6;
  }
  if ((bVar5 & 2) != 0) {
    plVar14 = (longlong *)(param_2 - 1);
    bVar3 = false;
    bVar4 = false;
    local_b8 = plVar14;
    if (plVar14 != (longlong *)0xffffffff) {
      lVar16 = (longlong)plVar14 * 0x18;
      do {
        local_b8 = plVar14;
        if (bVar3) goto LAB_14335763b;
        if (plVar14 < (longlong *)0x10) {
          lVar18 = param_1 + 0x60;
        }
        else {
          lVar18 = *(longlong *)(param_1 + 0x48) + -0x180;
          bVar3 = bVar4;
        }
        if (*(int *)(lVar18 + lVar16) == 0) {
          if (plVar14 < (longlong *)0x10) {
            lVar18 = param_1 + 0x60;
          }
          else {
            lVar18 = *(longlong *)(param_1 + 0x48) + -0x180;
          }
          uStack_a0 = (ulonglong)*(byte *)(lVar18 + lVar16 + 0x10);
          local_a8 = *(longlong **)(lVar18 + lVar16 + 8);
          local_78 = local_a8;
          uStack_70 = uStack_a0;
          cVar6 = FUN_143358150(&local_78);
          bVar3 = bVar4;
          if (cVar6 == '\0') {
            (**(code **)(*plVar12 + 0x38))(plVar12);
            bVar4 = true;
            bVar3 = true;
          }
        }
        else if (*(int *)(lVar18 + lVar16) == 2) {
          if (plVar14 < (longlong *)0x10) {
            lVar18 = param_1 + 0x60 + lVar16;
          }
          else {
            lVar18 = lVar16 + -0x180 + *(longlong *)(param_1 + 0x48);
          }
          plVar15 = *(longlong **)(lVar18 + 8);
          uVar9 = (**(code **)(*plVar15 + 0x30))(plVar15);
          plVar12 = local_b0;
          if ((uVar9 & 4) == 0) {
            uVar9 = (**(code **)(*plVar15 + 0x30))(plVar15);
            if (((uVar9 & 8) == 0) ||
               (iVar8 = (**(code **)(*plVar15 + 0x58))(plVar15), plVar12 = local_b0, iVar8 != 2)) {
              FUN_143357390(param_1,plVar14);
              puVar10 = (undefined8 *)(**(code **)(*plVar15 + 0x20))(plVar15);
              local_78 = (longlong *)*puVar10;
              uStack_70 = puVar10[1];
              cVar6 = FUN_143358150(&local_78);
              plVar12 = local_b0;
              bVar3 = bVar4;
              if (cVar6 == '\0') {
                lVar18 = *local_b0;
                (**(code **)(*plVar15 + 0x20))(plVar15,local_98);
                plVar12 = local_b0;
                (**(code **)(lVar18 + 0x38))(local_b0);
                bVar4 = true;
                plVar14 = local_b8;
                bVar3 = true;
              }
            }
            else {
              local_58 = (longlong *)&DAT_145b014c0;
              local_50 = 4;
              (**(code **)(*local_b0 + 0x38))(local_b0);
              bVar4 = true;
              bVar3 = true;
            }
          }
          else {
            local_88 = (longlong *)&DAT_145b014c0;
            local_80 = 4;
            (**(code **)(*local_b0 + 0x38))(local_b0);
            bVar4 = true;
            bVar3 = true;
          }
        }
        plVar14 = (longlong *)((longlong)plVar14 + -1);
        lVar16 = lVar16 + -0x18;
      } while (plVar14 != (longlong *)0xffffffff);
      local_b8 = plVar14;
      if (bVar3) goto LAB_14335763b;
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    (**(code **)(*plVar12 + 0x38))();
  }
LAB_14335763b:
  if ((bVar5 & 1) != 0) {
    bVar3 = false;
    local_98[0] = (longlong *)(param_2 - 1);
    bVar4 = false;
    if (local_98[0] != (longlong *)0xffffffff) {
      lVar16 = (longlong)local_98[0] * 0x18;
      do {
        if (bVar3) goto LAB_143357883;
        if (local_98[0] < (longlong *)0x10) {
          lVar18 = param_1 + 0x60;
        }
        else {
          lVar18 = *(longlong *)(param_1 + 0x48) + -0x180;
        }
        if (*(int *)(lVar18 + lVar16) == 0) {
          if (local_98[0] < (longlong *)0x10) {
            lVar18 = param_1 + 0x60 + lVar16;
          }
          else {
            lVar18 = lVar16 + -0x180 + *(longlong *)(param_1 + 0x48);
          }
          uStack_a0 = (ulonglong)*(byte *)(lVar18 + 0x10);
          local_b8 = *(longlong **)(lVar18 + 8);
          plVar14 = (longlong *)((longlong)local_b8 + uStack_a0);
          local_a8 = local_b8;
          bVar3 = bVar4;
          if (local_b8 != plVar14) {
            do {
              uVar7 = FUN_143307250(&local_b8);
              if (((uVar7 == 0) ||
                  (uVar2 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar7 & 0xffff) >> 8) * 2),
                  uVar2 == 0)) ||
                 ((uVar2 != 1 &&
                  ((*(ushort *)
                     (&DAT_145afe6e0 + (ulonglong)(((uVar7 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2)
                    >> (uVar7 & 0xf) & 1) == 0)))) {
                (**(code **)(*plVar12 + 0x38))(plVar12,&local_a8);
                bVar4 = true;
                bVar3 = true;
                break;
              }
            } while (local_b8 < plVar14);
          }
        }
        else if (*(int *)(lVar18 + lVar16) == 2) {
          if (local_98[0] < (longlong *)0x10) {
            lVar18 = param_1 + 0x60;
          }
          else {
            lVar18 = *(longlong *)(param_1 + 0x48) + -0x180;
          }
          local_68 = *(longlong **)(lVar18 + lVar16 + 8);
          (**(code **)(*local_68 + 0x30))();
          FUN_143357390(param_1,local_98[0]);
          puVar10 = (undefined8 *)(**(code **)(*local_68 + 0x20))(local_68,&local_78);
          local_b8 = (longlong *)*puVar10;
          local_88 = (longlong *)(puVar10[1] + (longlong)local_b8);
          bVar3 = bVar4;
          if (local_b8 != local_88) {
            do {
              uVar7 = FUN_143307250(&local_b8);
              if (((uVar7 == 0) ||
                  (uVar2 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar7 & 0xffff) >> 8) * 2),
                  uVar2 == 0)) ||
                 ((uVar2 != 1 &&
                  ((*(ushort *)
                     (&DAT_145afe6e0 + (ulonglong)(((uVar7 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2)
                    >> (uVar7 & 0xf) & 1) == 0)))) {
                lVar18 = *plVar12;
                uVar11 = (**(code **)(*local_68 + 0x20))(local_68,&local_58);
                (**(code **)(lVar18 + 0x38))(plVar12,uVar11);
                bVar4 = true;
                bVar3 = true;
                break;
              }
            } while (local_b8 < local_88);
          }
        }
        lVar16 = lVar16 + -0x18;
        local_98[0] = (longlong *)((longlong)local_98[0] + -1);
      } while (local_98[0] != (longlong *)0xffffffff);
      if (bVar3) goto LAB_143357883;
    }
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    (**(code **)(*plVar12 + 0x38))();
  }
LAB_143357883:
  uVar9 = 0;
  if ((bVar5 & 4) != 0) {
    bVar3 = false;
    local_68 = (longlong *)(param_2 + 1);
    bVar4 = false;
    plVar14 = *(longlong **)(param_1 + 0x40);
    local_98[0] = plVar14;
    if (local_68 < plVar14) {
      plVar15 = (longlong *)((longlong)local_68 * 0x18);
      do {
        local_b8 = plVar15;
        if (bVar3) goto LAB_143357a09;
        if (local_68 < (longlong *)0x10) {
          lVar16 = param_1 + 0x60;
        }
        else {
          lVar16 = *(longlong *)(param_1 + 0x48) + -0x180;
        }
        if (*(int *)(lVar16 + (longlong)plVar15) == 0) {
          if (local_68 < (longlong *)0x10) {
            lVar16 = param_1 + 0x60;
          }
          else {
            lVar16 = *(longlong *)(param_1 + 0x48) + -0x180;
          }
          uStack_70 = (ulonglong)*(byte *)((longlong)plVar15 + lVar16 + 0x10);
          local_88 = *(longlong **)((longlong)plVar15 + lVar16 + 8);
          plVar1 = (longlong *)((longlong)local_88 + uStack_70);
          local_78 = local_88;
          bVar3 = bVar4;
          if (local_88 != plVar1) {
            do {
              uVar7 = FUN_143307250(&local_88);
              if (((uVar7 == 0) ||
                  (uVar2 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar7 & 0xffff) >> 8) * 2),
                  uVar2 == 0)) ||
                 ((uVar2 != 1 &&
                  ((*(ushort *)
                     (&DAT_145afe6e0 + (ulonglong)(((uVar7 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2)
                    >> (uVar7 & 0xf) & 1) == 0)))) {
                (**(code **)(*plVar12 + 0x48))(plVar12,&local_78);
                bVar4 = true;
                plVar14 = local_98[0];
                plVar15 = local_b8;
                bVar3 = bVar4;
                break;
              }
              plVar14 = local_98[0];
              plVar15 = local_b8;
            } while (local_88 < plVar1);
          }
        }
        else if (*(int *)(lVar16 + (longlong)plVar15) == 2) {
          if (local_68 < (longlong *)0x10) {
            lVar16 = param_1 + 0x60;
          }
          else {
            lVar16 = *(longlong *)(param_1 + 0x48) + -0x180;
          }
          local_88 = *(longlong **)((longlong)plVar15 + lVar16 + 8);
          (**(code **)(*local_88 + 0x30))();
          FUN_143357390(param_1,local_68);
          puVar10 = (undefined8 *)(**(code **)(*local_88 + 0x20))(local_88,local_48);
          local_58 = (longlong *)*puVar10;
          local_a8 = (longlong *)(puVar10[1] + (longlong)local_58);
          plVar14 = local_98[0];
          bVar3 = bVar4;
          if (local_58 != local_a8) {
            do {
              uVar7 = FUN_143307250(&local_58);
              if (((uVar7 == 0) ||
                  (uVar2 = *(ushort *)(&DAT_145afe6e0 + (ulonglong)((uVar7 & 0xffff) >> 8) * 2),
                  uVar2 == 0)) ||
                 ((uVar2 != 1 &&
                  ((*(ushort *)
                     (&DAT_145afe6e0 + (ulonglong)(((uVar7 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2)
                    >> (uVar7 & 0xf) & 1) == 0)))) {
                lVar16 = *plVar12;
                uVar11 = (**(code **)(*local_88 + 0x20))(local_88,local_38);
                (**(code **)(lVar16 + 0x48))(plVar12,uVar11);
                bVar4 = true;
                plVar14 = local_98[0];
                plVar15 = local_b8;
                bVar3 = bVar4;
                break;
              }
              plVar14 = local_98[0];
            } while (local_58 < local_a8);
          }
        }
        plVar15 = plVar15 + 3;
        local_68 = (longlong *)((longlong)local_68 + 1);
      } while (local_68 < plVar14);
      local_b8 = plVar15;
      if (bVar3) goto LAB_143357a09;
    }
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    (**(code **)(*plVar12 + 0x48))(plVar12);
  }
LAB_143357a09:
  if ((bVar5 & 8) != 0) {
    iVar8 = (**(code **)(*plVar12 + 0x58))(plVar12);
    if (iVar8 == 1) {
      param_2 = param_2 - 1;
      if (param_2 != 0xffffffff) {
        lVar16 = param_2 * 0x18;
        do {
          if (param_2 < 0x10) {
            lVar18 = param_1 + 0x60;
          }
          else {
            lVar18 = *(longlong *)(param_1 + 0x48) + -0x180;
          }
          if (*(int *)(lVar18 + lVar16) == 2) goto LAB_143357c60;
          param_2 = param_2 - 1;
          lVar16 = lVar16 + -0x18;
        } while (param_2 != 0xffffffff);
      }
    }
    else if (iVar8 == 2) {
      param_2 = param_2 + 1;
      if (param_2 < *(ulonglong *)(param_1 + 0x40)) {
        lVar16 = param_2 * 0x18;
        do {
          if (param_2 < 0x10) {
            lVar18 = param_1 + 0x60;
          }
          else {
            lVar18 = *(longlong *)(param_1 + 0x48) + -0x180;
          }
          if (*(int *)(lVar18 + lVar16) == 2) goto LAB_143357c60;
          param_2 = param_2 + 1;
          lVar16 = lVar16 + 0x18;
        } while (param_2 < *(ulonglong *)(param_1 + 0x40));
      }
    }
    else if (iVar8 == 3) {
      cVar6 = (**(code **)(*plVar12 + 0x60))(plVar12);
      cVar13 = '\0';
      uVar17 = uVar9;
      if (*(ulonglong *)(param_1 + 0x40) != 0) {
        do {
          if (uVar17 < 0x10) {
            lVar16 = param_1 + 0x60;
          }
          else {
            lVar16 = *(longlong *)(param_1 + 0x48) + -0x180;
          }
          if (*(int *)(lVar16 + uVar9) == 2) {
            if (cVar13 == cVar6) {
              if (uVar17 < 0x10) {
                lVar16 = param_1 + (uVar17 + 4) * 0x18;
              }
              else {
                lVar16 = *(longlong *)(param_1 + 0x48) + (uVar17 - 0x10) * 0x18;
              }
              plVar14 = *(longlong **)(lVar16 + 8);
              FUN_143357390(param_1,uVar17);
              lVar16 = *plVar12;
              goto LAB_143357ca3;
            }
            cVar13 = cVar13 + '\x01';
          }
          uVar17 = uVar17 + 1;
          uVar9 = uVar9 + 0x18;
        } while (uVar17 < *(ulonglong *)(param_1 + 0x40));
      }
    }
  }
  goto LAB_143357ca9;
LAB_143357c60:
  if (param_2 < 0x10) {
    lVar16 = param_1 + (param_2 + 4) * 0x18;
  }
  else {
    lVar16 = *(longlong *)(param_1 + 0x48) + (param_2 - 0x10) * 0x18;
  }
  plVar14 = *(longlong **)(lVar16 + 8);
  (**(code **)(*plVar14 + 0x30))(plVar14);
  FUN_143357390(param_1,param_2);
  lVar16 = *local_b0;
  plVar12 = local_b0;
LAB_143357ca3:
  (**(code **)(lVar16 + 0x68))(plVar12,plVar14);
LAB_143357ca9:
  if ((char)local_b0[2] != '\0') {
    return;
  }
  lVar16 = *local_b0;
  plVar12 = local_b0;
LAB_143357cb6:
  (**(code **)(lVar16 + 0x18))(plVar12);
  return;
}



// FUNCTION 143357ce0 FUN_143357ce0 body=210 status=ok
// SIG undefined FUN_143357ce0(void)

void FUN_143357ce0(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  
  lVar3 = *param_2;
  puVar1 = (ulonglong *)(param_1 + 0x40);
  uStack_30 = CONCAT31(uStack_30._1_3_,(char)param_2[1]);
  uVar4 = *puVar1;
  if (uVar4 < 0x10) {
    plVar2 = (longlong *)(param_1 + 0x60 + uVar4 * 0x18);
    *plVar2 = (ulonglong)uStack_24 << 0x20;
    plVar2[1] = lVar3;
    *(ulonglong *)(param_1 + 0x70 + uVar4 * 0x18) = CONCAT44(uStack_2c,uStack_30);
    *puVar1 = *puVar1 + 1;
    return;
  }
  uVar4 = *(ulonglong *)(param_1 + 0x50) + 1;
  if (uVar4 < *(ulonglong *)(param_1 + 0x50)) {
    uVar6 = uVar4;
    if (*(ulonglong *)(param_1 + 0x58) >> 1 <= uVar4) goto LAB_143357d7d;
  }
  else {
    if (uVar4 <= *(ulonglong *)(param_1 + 0x58)) goto LAB_143357d7d;
    uVar6 = (uVar4 >> 2) + uVar4;
  }
  FUN_143358d20(param_1 + 0x48,param_1 + 0x48,uVar6);
LAB_143357d7d:
  lVar5 = *(longlong *)(param_1 + 0x48);
  *(ulonglong *)(param_1 + 0x50) = uVar4;
  plVar2 = (longlong *)(lVar5 + -0x18 + uVar4 * 0x18);
  *plVar2 = (ulonglong)uStack_24 << 0x20;
  plVar2[1] = lVar3;
  *(ulonglong *)(lVar5 + -8 + uVar4 * 0x18) = CONCAT44(uStack_2c,uStack_30);
  *puVar1 = *puVar1 + 1;
  return;
}



// FUNCTION 143357dc0 FUN_143357dc0 body=205 status=ok
// SIG undefined FUN_143357dc0(void)

void FUN_143357dc0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  uVar3 = *(ulonglong *)(param_1 + 0x40);
  plVar1 = (longlong *)(param_1 + 0x40);
  uStack_30 = CONCAT31(uStack_30._1_3_,param_3);
  if (uVar3 < 0x10) {
    puVar2 = (undefined8 *)(param_1 + 0x60 + uVar3 * 0x18);
    *puVar2 = CONCAT44(uStack_24,2);
    puVar2[1] = param_2;
    *(ulonglong *)(param_1 + 0x70 + uVar3 * 0x18) = CONCAT44(uStack_2c,uStack_30);
    *plVar1 = *plVar1 + 1;
    return;
  }
  uVar3 = *(ulonglong *)(param_1 + 0x50) + 1;
  if (uVar3 < *(ulonglong *)(param_1 + 0x50)) {
    uVar5 = uVar3;
    if (*(ulonglong *)(param_1 + 0x58) >> 1 <= uVar3) goto LAB_143357e58;
  }
  else {
    if (uVar3 <= *(ulonglong *)(param_1 + 0x58)) goto LAB_143357e58;
    uVar5 = (uVar3 >> 2) + uVar3;
  }
  FUN_143358d20(param_1 + 0x48,param_1 + 0x48,uVar5);
LAB_143357e58:
  lVar4 = *(longlong *)(param_1 + 0x48);
  *(ulonglong *)(param_1 + 0x50) = uVar3;
  puVar2 = (undefined8 *)(lVar4 + -0x18 + uVar3 * 0x18);
  *puVar2 = CONCAT44(uStack_24,2);
  puVar2[1] = param_2;
  *(ulonglong *)(lVar4 + -8 + uVar3 * 0x18) = CONCAT44(uStack_2c,uStack_30);
  *plVar1 = *plVar1 + 1;
  return;
}



// FUNCTION 143357ea0 FUN_143357ea0 body=246 status=ok
// SIG undefined FUN_143357ea0(void)

void FUN_143357ea0(longlong param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong _Size;
  void *local_28;
  ulonglong local_20;
  
  if (param_3 != 0) {
    uVar1 = *(ulonglong *)(param_1 + 0x40);
    uVar5 = 0;
    uVar6 = uVar5;
    do {
      if (uVar1 <= uVar6) {
        return;
      }
      if (uVar6 < 0x10) {
        lVar4 = param_1 + 0x60;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x48) + -0x180;
      }
      lVar4 = lVar4 + uVar5;
      if (uVar6 < 0x10) {
        lVar3 = param_1 + 0x60;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x48) + -0x180;
      }
      if (*(int *)(lVar3 + uVar5) == 0) {
        _Size = (ulonglong)*(byte *)(lVar4 + 0x10);
        _Src = *(void **)(lVar4 + 8);
LAB_143357f4f:
        if (param_3 < _Size) {
          _Size = param_3;
        }
        _guard_xfg_dispatch_icall_nop(param_2,_Src,_Size);
        param_3 = param_3 - _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
      }
      else if ((*(int *)(lVar3 + uVar5) == 2) &&
              (plVar2 = *(longlong **)(lVar4 + 8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_28);
        _Src = local_28;
        _Size = local_20;
        goto LAB_143357f4f;
      }
      uVar6 = uVar6 + 1;
      uVar5 = uVar5 + 0x18;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 143357fa0 FUN_143357fa0 body=246 status=ok
// SIG undefined FUN_143357fa0(void)

undefined8 FUN_143357fa0(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_428;
  longlong local_420;
  undefined **local_418;
  undefined4 local_410;
  undefined2 local_40c;
  undefined8 local_408;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_238;
  undefined1 auStack_230 [512];
  undefined1 *local_30;
  longlong local_28;
  
  local_3f0 = *param_1;
  uStack_3ec = param_1[1];
  uStack_3e8 = param_1[2];
  uStack_3e4 = param_1[3];
  local_3e0 = *(undefined8 *)(param_1 + 4);
  local_418 = &PTR__scalar_deleting_destructor__145b01378;
  local_30 = auStack_230;
  local_410 = 0x25;
  local_40c = 0xffff;
  local_28 = (longlong)&local_30 - (longlong)local_30;
  local_408 = 0;
  local_3f8 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_238 = 0;
  if (param_2 == 0) {
    local_420 = 0;
  }
  else {
    local_420 = -1;
    do {
      local_420 = local_420 + 1;
    } while (*(char *)(param_2 + local_420) != '\0');
  }
  local_res18 = param_3;
  local_res20 = param_4;
  local_428 = param_2;
  FUN_143356700(&local_418,&local_428,&local_res18);
  uVar1 = local_408;
  FUN_1433562f0(&local_418);
  return uVar1;
}



// FUNCTION 1433580a0 FUN_1433580a0 body=168 status=ok
// SIG undefined FUN_1433580a0(void)

int FUN_1433580a0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  char *local_18;
  ulonglong local_10;
  
  FUN_1432c6320(param_1,&local_18);
  if ((local_10 != 0) && (local_18 != (char *)0x0)) {
    iVar2 = isdigit((int)*local_18);
    if (iVar2 != 0) {
      uVar3 = 1;
      if (1 < local_10) {
        do {
          iVar2 = isdigit((int)local_18[uVar3]);
          if (iVar2 == 0) break;
          uVar3 = uVar3 + 1;
        } while (uVar3 < local_10);
      }
      uVar1 = param_1[1];
      if (uVar1 < uVar3) {
        uVar3 = uVar1;
      }
      *param_1 = *param_1 + uVar3;
      param_1[1] = uVar1 - uVar3;
      iVar2 = atoi(local_18);
      return iVar2;
    }
  }
  return param_2;
}



// FUNCTION 143358150 FUN_143358150 body=140 status=ok
// SIG undefined FUN_143358150(void)

undefined8 FUN_143358150(ulonglong *param_1)

{
  ulonglong uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  local_res8 = *param_1;
  uVar1 = local_res8 + param_1[1];
  if (local_res8 != uVar1) {
    do {
      uVar4 = FUN_143307250(&local_res8);
      uVar3 = (uint)uVar4;
      if (((uVar3 == 0) ||
          (uVar2 = *(ushort *)(&DAT_145afe6e0 + ((uVar4 & 0xffff) >> 8) * 2), uVar2 == 0)) ||
         ((uVar2 != 1 &&
          ((*(ushort *)
             (&DAT_145afe6e0 + (ulonglong)(((uVar3 & 0xffff) >> 4 & 0xf) + (uint)uVar2) * 2) >>
            (uVar3 & 0xf) & 1) == 0)))) {
        return 0;
      }
    } while (local_res8 < uVar1);
  }
  return 1;
}



// FUNCTION 143358230 FUN_143358230 body=306 status=ok
// SIG undefined FUN_143358230(void)

void FUN_143358230(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char *_Str;
  bool bVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int local_res10 [6];
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38 [16];
  int *local_28;
  undefined1 *local_20;
  undefined1 local_18 [16];
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  bVar2 = false;
  local_38 = ZEXT816(0);
  local_res10[0] = 0;
  do {
    pauVar4 = (undefined1 (*) [16])FUN_1432c6320(&local_48,local_18,0x3a);
    local_38 = *pauVar4;
    uVar6 = local_38._8_8_ + 1;
    if (uStack_40 < uVar6) {
      uVar6 = uStack_40;
    }
    local_48 = local_48 + uVar6;
    uStack_40 = uStack_40 - uVar6;
    if (bVar2) {
      local_28 = local_res10;
      lVar7 = 0x1505;
      local_20 = local_38;
      lVar5 = 4;
      do {
        pbVar1 = &stack0x0000000f + lVar5;
        lVar5 = lVar5 + -1;
        lVar7 = lVar7 * 0x1003f + (ulonglong)*pbVar1;
      } while (lVar5 != 0);
      FUN_1433586e0(param_1 + 0x20,param_1 + 0x20,&local_28,lVar7);
      bVar2 = false;
    }
    else {
      _Str = local_38._0_8_;
      if ((local_38._8_8_ == 0) || (_Str == (char *)0x0)) {
LAB_143358353:
        *(undefined4 *)(param_1 + 0x38) = local_38._0_4_;
        *(undefined4 *)(param_1 + 0x3c) = local_38._4_4_;
        *(undefined4 *)(param_1 + 0x40) = local_38._8_4_;
        *(undefined4 *)(param_1 + 0x44) = local_38._12_4_;
        return;
      }
      iVar3 = isdigit((int)*_Str);
      if (iVar3 == 0) {
        goto LAB_143358353;
      }
      local_res10[0] = atoi(_Str);
      bVar2 = true;
    }
    if (uStack_40 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 143358370 Convert body=106 status=ok
// SIG undefined Convert(void)

void Scaleform::SwitchFormatter::Convert(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  lVar1 = FUN_143358870(param_1 + 0x20,param_1 + 0x18);
  if ((lVar1 < 0) || (lVar1 = *(longlong *)(param_1 + 0x20) + (lVar1 * 5 + 4) * 8, lVar1 == 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
  }
  else {
    if ((undefined4 *)(param_1 + 0x28) == (undefined4 *)0x0) goto LAB_1433583c6;
    uVar2 = *(undefined4 *)(lVar1 + 8);
    uVar3 = *(undefined4 *)(lVar1 + 0xc);
    uVar4 = *(undefined4 *)(lVar1 + 0x10);
    uVar5 = *(undefined4 *)(lVar1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar5;
LAB_1433583c6:
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 143358410 FUN_143358410 body=66 status=ok
// SIG undefined FUN_143358410(void)

undefined8 * FUN_143358410(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__145b01408;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1432c5960(param_1 + 6,DAT_146b62f28);
  return param_1;
}



// FUNCTION 143358470 FUN_143358470 body=93 status=ok
// SIG undefined FUN_143358470(void)

void FUN_143358470(longlong param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    Scaleform::StringBuffer::Reserve
              (param_1 + 0x30,(ulonglong)*(uint *)(param_1 + 0x18) * *(longlong *)(param_1 + 0x28));
    uVar1 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        Scaleform::StringBuffer::AppendString
                  (param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 0x18));
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



// FUNCTION 143358520 FUN_143358520 body=111 status=ok
// SIG undefined FUN_143358520(void)

longlong FUN_143358520(ulonglong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 <= (ulonglong)param_2[0x42]) {
    lVar3 = param_2[0x41];
    lVar1 = ((param_1 - 1) + lVar3 & 0xfffffffffffffff8) + 8;
    param_2[0x41] = lVar1;
    uVar2 = (lVar1 - (longlong)param_2) - 8;
    lVar1 = 0x200 - uVar2;
    if (0x1ff < uVar2) {
      lVar1 = 0;
    }
    param_2[0x42] = lVar1;
    return lVar3;
  }
  plVar4 = (longlong *)*param_2;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    plVar4 = DAT_146b62f28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014335858b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,param_1,8);
  return lVar3;
}



// FUNCTION 143358590 FUN_143358590 body=332 status=ok
// SIG undefined FUN_143358590(void)

longlong FUN_143358590(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  FUN_143358c70();
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x28);
  lVar1 = lVar5 + param_4 * 0x28;
  uVar10 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)param_3;
    uVar8 = param_3[2];
    *(undefined8 *)(lVar1 + 0x28) = param_3[1];
    *(undefined8 *)(lVar1 + 0x30) = uVar8;
  }
  else {
    do {
      uVar10 = uVar10 + 1 & plVar4[1];
      lVar2 = lVar5 + uVar10 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar10 * 0x28) != -2);
    if (*(ulonglong *)(lVar1 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      uVar8 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x30) = uVar8;
      uVar8 = param_3[1];
      *(undefined8 *)(lVar1 + 0x20) = *param_3;
      *(undefined8 *)(lVar1 + 0x28) = uVar8;
      *(undefined8 *)(lVar1 + 0x30) = param_3[2];
      *(ulonglong *)(lVar1 + 0x10) = uVar10;
    }
    else {
      lVar3 = *(ulonglong *)(lVar1 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      while (puVar9 = (ulonglong *)(lVar5 + lVar3 * 8), uVar7 != param_4) {
        lVar3 = *puVar9 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar3 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar6;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      uVar8 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x30) = uVar8;
      *puVar9 = uVar10;
      uVar8 = param_3[1];
      *(undefined8 *)(lVar1 + 0x20) = *param_3;
      *(undefined8 *)(lVar1 + 0x28) = uVar8;
      *(undefined8 *)(lVar1 + 0x30) = param_3[2];
      *(undefined8 *)(lVar1 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar1 + 0x18) = param_4;
  return lVar1 + 0x20;
}



// FUNCTION 1433586e0 FUN_1433586e0 body=398 status=ok
// SIG undefined FUN_1433586e0(void)

longlong FUN_1433586e0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar10 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_143358734;
    lVar10 = plVar3[1] * 2 + 2;
  }
  FUN_143358dd0(param_1,param_2,lVar10);
LAB_143358734:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x28);
  lVar10 = lVar4 + param_4 * 0x28;
  uVar9 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)*param_3;
    uVar7 = ((undefined8 *)param_3[1])[1];
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)param_3[1];
    *(undefined8 *)(lVar10 + 0x30) = uVar7;
  }
  else {
    do {
      uVar9 = uVar9 + 1 & plVar3[1];
      lVar1 = lVar4 + uVar9 * 0x28;
    } while (*(longlong *)(lVar4 + 0x10 + uVar9 * 0x28) != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *(longlong *)(lVar1 + 0x10) = lVar5;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
      uVar7 = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar1 + 0x30) = uVar7;
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)*param_3;
      uVar7 = ((undefined8 *)param_3[1])[1];
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar10 + 0x30) = uVar7;
      *(ulonglong *)(lVar10 + 0x10) = uVar9;
    }
    else {
      lVar2 = *(ulonglong *)(lVar10 + 0x18) * 5 + 2;
      uVar6 = *(ulonglong *)(lVar4 + lVar2 * 8);
      while (puVar8 = (ulonglong *)(lVar4 + lVar2 * 8), uVar6 != param_4) {
        lVar2 = *puVar8 * 5 + 2;
        uVar6 = *(ulonglong *)(lVar4 + lVar2 * 8);
      }
      *(longlong *)(lVar1 + 0x10) = lVar5;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar10 + 0x20);
      uVar7 = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(lVar1 + 0x30) = uVar7;
      *puVar8 = uVar9;
      *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)*param_3;
      uVar7 = ((undefined8 *)param_3[1])[1];
      *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)param_3[1];
      *(undefined8 *)(lVar10 + 0x30) = uVar7;
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return lVar10 + 0x20;
}



// FUNCTION 143358870 FUN_143358870 body=142 status=ok
// SIG undefined FUN_143358870(void)

ulonglong FUN_143358870(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar5 = 4;
    uVar3 = 0x1505;
    do {
      lVar1 = lVar5 + -1;
      lVar5 = lVar5 + -1;
      uVar3 = (ulonglong)*(byte *)(lVar1 + (longlong)param_2) + uVar3 * 0x1003f;
    } while (lVar5 != 0);
    uVar3 = *(ulonglong *)(lVar2 + 8) & uVar3;
    lVar5 = uVar3 * 5 + 2;
    puVar6 = (ulonglong *)(lVar2 + lVar5 * 8);
    if ((*(longlong *)(lVar2 + lVar5 * 8) != -2) && (uVar4 = uVar3, puVar6[1] == uVar3)) {
      while( true ) {
        if ((puVar6[1] == uVar3) && ((int)puVar6[2] == *param_2)) {
          return uVar4;
        }
        uVar4 = *puVar6;
        if (uVar4 == 0xffffffffffffffff) break;
        puVar6 = (ulonglong *)(lVar2 + uVar4 * 0x28 + 0x10);
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143358900 FUN_143358900 body=125 status=ok
// SIG undefined FUN_143358900(void)

void FUN_143358900(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[4] != 0) {
    lVar2 = 0;
    lVar1 = *(longlong *)(param_1[4] + 8) + 1;
    do {
      if (*(longlong *)(param_1[4] + 0x10 + lVar2) != -2) {
        *(undefined8 *)(param_1[4] + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    if (param_1[4] != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    param_1[4] = 0;
    *param_1 = &PTR_FUN_145b01048;
    return;
  }
  *param_1 = &PTR_FUN_145b01048;
  return;
}



// FUNCTION 1433589a0 FUN_1433589a0 body=43 status=ok
// SIG undefined FUN_1433589a0(void)

undefined8 * FUN_1433589a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1433589d0 FUN_1433589d0 body=54 status=ok
// SIG undefined FUN_1433589d0(void)

undefined8 * FUN_1433589d0(undefined8 *param_1,ulonglong param_2)

{
  param_1[3] = &PTR_FUN_145af1858;
  *param_1 = &PTR_FUN_145b01048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 143358a10 FUN_143358a10 body=43 status=ok
// SIG undefined FUN_143358a10(void)

undefined8 * FUN_143358a10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143358a40 FUN_143358a40 body=43 status=ok
// SIG undefined FUN_143358a40(void)

undefined8 * FUN_143358a40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143358a70 FUN_143358a70 body=54 status=ok
// SIG undefined FUN_143358a70(void)

undefined8 * FUN_143358a70(undefined8 *param_1,ulonglong param_2)

{
  param_1[3] = &PTR_FUN_145af1858;
  *param_1 = &PTR_FUN_145b01048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143358ab0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AInteractiveFoliageActor::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1433562f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f8);
  }
  return param_1;
}



// FUNCTION 143358af0 `scalar_deleting_destructor' body=66 status=ok
// SIG void * `scalar_deleting_destructor'(_AsyncTaskCollection * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::_AsyncTaskCollection::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2015 Release */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  Scaleform::StringBuffer::~StringBuffer(this + 0x30);
  *(undefined ***)this = &PTR_FUN_145b01048;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x60);
  }
  return this;
}



// FUNCTION 143358b40 FUN_143358b40 body=43 status=ok
// SIG undefined FUN_143358b40(void)

undefined8 * FUN_143358b40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145b01048;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143358b70 `scalar_deleting_destructor' body=66 status=ok
// SIG void * `scalar_deleting_destructor'(_AsyncTaskCollection * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::_AsyncTaskCollection::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2015 Release */

void * __thiscall
Concurrency::details::_AsyncTaskCollection::_scalar_deleting_destructor_
          (_AsyncTaskCollection *this,uint param_1)

{
  Scaleform::StringBuffer::~StringBuffer(this + 0x40);
  *(undefined ***)this = &PTR_FUN_145b01048;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x70);
  }
  return this;
}



// FUNCTION 143358bc0 FUN_143358bc0 body=52 status=ok
// SIG undefined FUN_143358bc0(void)

undefined8 FUN_143358bc0(undefined8 param_1,ulonglong param_2)

{
  FUN_143358900();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 143358c00 FUN_143358c00 body=112 status=ok
// SIG undefined FUN_143358c00(void)

ulonglong FUN_143358c00(ulonglong param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  undefined8 local_18 [2];
  
  if (param_4 != 0) {
    iVar1 = Scaleform::UTF8Util::GetEncodeCharSize(param_4);
    param_3 = param_3 - (longlong)iVar1;
    if (param_3 < param_1) {
      param_3 = 0;
    }
    else {
      local_18[0] = 0;
      FUN_143307100(param_3,param_2,local_18,param_4);
    }
  }
  return param_3;
}



// FUNCTION 143358c70 FUN_143358c70 body=67 status=ok
// SIG undefined FUN_143358c70(void)

void FUN_143358c70(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_143358dd0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_143358dd0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 143358cc0 FUN_143358cc0 body=96 status=ok
// SIG undefined FUN_143358cc0(void)

void FUN_143358cc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143358d20 FUN_143358d20 body=167 status=ok
// SIG undefined FUN_143358d20(void)

void FUN_143358d20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 local_res8 [2];
  
  if (param_3 != param_1[2]) {
    lVar1 = *param_1;
    if (param_3 == 0) {
      uVar2 = 0;
      if (lVar1 != 0) {
        (**(code **)(*DAT_146b62f28 + 0x60))();
        *param_1 = 0;
        param_1[2] = 0;
        return;
      }
    }
    else {
      uVar2 = param_3 + 3U & 0xfffffffffffffffc;
      if (lVar1 != 0) {
        lVar1 = (**(code **)(*DAT_146b62f28 + 0x58))(DAT_146b62f28,lVar1,uVar2 * 0x18);
        param_1[2] = uVar2;
        *param_1 = lVar1;
        return;
      }
      local_res8[0] = 2;
      lVar1 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,uVar2 * 0x18,local_res8);
      *param_1 = lVar1;
    }
    param_1[2] = uVar2;
  }
  return;
}



// FUNCTION 143358dd0 FUN_143358dd0 body=332 status=ok
// SIG undefined FUN_143358dd0(void)

void FUN_143358dd0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res18 [2];
  undefined8 *local_res20;
  
  if (param_3 == 0) {
    FUN_143358cc0();
    return;
  }
  if (param_3 < 8) {
    lVar5 = 8;
  }
  else {
    cVar3 = FUN_14207c6a0(param_3 - 1);
    lVar5 = 1L << (cVar3 + 1U & 0x3f);
  }
  local_res18[0] = 2;
  lVar6 = 0;
  local_res20 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)
                (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,lVar5 * 0x28 + 0x10,local_res18);
  *local_res20 = 0;
  local_res20[1] = lVar5 + -1;
  lVar2 = lVar6;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)(lVar2 + 0x10 + (longlong)local_res20) = 0xfffffffffffffffe;
    lVar2 = lVar2 + 0x28;
  }
  if (*param_1 != 0) {
    lVar5 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x10 + lVar6) != -2) {
        lVar4 = 4;
        lVar7 = lVar2 + 0x20 + lVar6;
        lVar8 = 0x1505;
        do {
          lVar1 = lVar4 + -1;
          lVar4 = lVar4 + -1;
          lVar8 = lVar8 * 0x1003f + (ulonglong)*(byte *)(lVar1 + lVar7);
        } while (lVar4 != 0);
        FUN_143358590(&local_res20,param_2,lVar7,lVar8);
        *(undefined8 *)(lVar2 + 0x10 + lVar6) = 0xfffffffffffffffe;
      }
      lVar6 = lVar6 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
  }
  *param_1 = (longlong)local_res20;
  return;
}



// FUNCTION 143358f20 GetFileStat body=194 status=ok
// SIG bool GetFileStat(FileStat * param_1, String * param_2)

/* public: static bool __cdecl Scaleform::SysFile::GetFileStat(struct Scaleform::FileStat *
   __ptr64,class Scaleform::String const & __ptr64) */

bool __cdecl Scaleform::SysFile::GetFileStat(FileStat *param_1,String *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *_Name;
  _stat64 local_48;
  
                    /* 0x3358f20  160
                       ?GetFileStat@SysFile@Scaleform@@SA_NPEAUFileStat@2@AEBVString@2@@Z */
  lVar2 = FUN_143305cd0((*(ulonglong *)param_2 & 0xfffffffffffffffc) + 0xc,0xffffffffffffffff);
  _Name = (wchar_t *)(**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,(lVar2 + 1) * 2,0);
  FUN_143306bc0(_Name,lVar2 + 1,(*(ulonglong *)param_2 & 0xfffffffffffffffc) + 0xc,
                0xffffffffffffffff);
  iVar1 = _wstat64(_Name,&local_48);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,_Name);
  if (iVar1 == 0) {
    *(__time64_t *)(param_1 + 8) = local_48.st_atime;
    *(__time64_t *)param_1 = local_48.st_mtime;
    *(longlong *)(param_1 + 0x10) = local_48.st_size;
  }
  return iVar1 == 0;
}



// FUNCTION 143358ff0 FUN_143358ff0 body=83 status=ok
// SIG undefined FUN_143358ff0(void)

undefined8 * FUN_143358ff0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b014c8;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1432c31e0(param_1 + 2);
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_143359860(param_1);
  return param_1;
}



// FUNCTION 143359050 FUN_143359050 body=83 status=ok
// SIG undefined FUN_143359050(void)

undefined8 * FUN_143359050(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_145b014c8;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1432c2fb0(param_1 + 2);
  *(undefined4 *)(param_1 + 5) = param_3;
  FUN_143359860(param_1);
  return param_1;
}



// FUNCTION 1433590b0 FUN_1433590b0 body=163 status=ok
// SIG undefined FUN_1433590b0(void)

undefined8 * FUN_1433590b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_FUN_145b014c8;
  FUN_1432c2f70(param_1 + 2);
  Scaleform::String::operator=(param_1 + 2,param_3);
  param_1[5] = 3;
  uVar1 = *(undefined4 *)(param_1 + 5);
  if (param_4 != 0) {
    uVar1 = 0x1003;
  }
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 143359190 IsWritable body=41 status=ok
// SIG undefined IsWritable(void)

undefined8 Scaleform::FILEFile::IsWritable(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 5) & 2) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1433591c0 Tell body=140 status=ok
// SIG undefined Tell(void)

long Scaleform::FILEFile::Tell(longlong param_1)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = ftell(*(FILE **)(param_1 + 0x20));
  if (lVar1 < 0) {
    piVar2 = _errno();
    if (*piVar2 == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 0x1001;
      return lVar1;
    }
    piVar2 = _errno();
    if (*piVar2 != 0xd) {
      piVar2 = _errno();
      if (*piVar2 != 1) {
        piVar2 = _errno();
        *(uint *)(param_1 + 0x2c) = (*piVar2 == 0x1c) + 0x1003;
        return lVar1;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0x1002;
  }
  return lVar1;
}



// FUNCTION 143359260 LTell body=144 status=ok
// SIG undefined LTell(void)

longlong Scaleform::FILEFile::LTell(longlong param_1)

{
  long lVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar1 = ftell(*(FILE **)(param_1 + 0x20));
  lVar3 = (longlong)lVar1;
  if (lVar1 < 0) {
    piVar2 = _errno();
    if (*piVar2 == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 0x1001;
      return lVar3;
    }
    piVar2 = _errno();
    if (*piVar2 != 0xd) {
      piVar2 = _errno();
      if (*piVar2 != 1) {
        piVar2 = _errno();
        *(uint *)(param_1 + 0x2c) = (*piVar2 == 0x1c) + 0x1003;
        return lVar3;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = 0x1002;
  }
  return lVar3;
}



// FUNCTION 143359300 FUN_143359300 body=104 status=ok
// SIG undefined FUN_143359300(void)

undefined4 FUN_143359300(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x70))(param_1,0,2);
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x70))(param_1,iVar1,0);
    return uVar2;
  }
  return 0xffffffff;
}



// FUNCTION 143359370 LGetLength body=17 status=ok
// SIG undefined LGetLength(void)

longlong Scaleform::GFx::ZLibFile::LGetLength(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  return (longlong)iVar1;
}


