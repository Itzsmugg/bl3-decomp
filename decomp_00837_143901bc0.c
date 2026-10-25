// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143901bc0 FUN_143901bc0 body=3422 status=ok
// SIG undefined FUN_143901bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143901bc0(int *param_1,int *param_2,int *param_3,int param_4,float param_5,int param_6,
             int param_7,undefined4 param_8,float *param_9)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1b8 [32];
  float local_198;
  int *local_190;
  int *local_188;
  undefined4 local_180;
  float *local_178;
  char local_168 [8];
  char local_160;
  float local_15c;
  int local_158;
  int local_150;
  uint uStack_14c;
  int local_148;
  int local_140;
  int *local_138;
  int local_130;
  longlong local_128;
  int local_120 [2];
  longlong local_118;
  float *local_110;
  int local_108;
  int local_100;
  uint uStack_fc;
  int local_f8;
  int local_f0;
  uint uStack_ec;
  int local_e8;
  int local_e0;
  uint uStack_dc;
  int local_d0;
  uint uStack_cc;
  int local_c8;
  int local_c0;
  uint uStack_bc;
  int local_b8;
  int local_b0;
  uint uStack_ac;
  int local_a8;
  int local_a0;
  uint uStack_9c;
  int local_98;
  int local_90;
  uint uStack_8c;
  int local_88;
  float local_84;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *param_9 = 0.0;
  iVar14 = *param_2;
  iVar12 = param_1[3];
  local_158 = param_6;
  local_110 = param_9;
  if (((((iVar14 < 0) || (param_2[1] < 0)) || (param_2[2] < 0)) ||
      ((iVar12 * *param_1 <= iVar14 || (param_1[1] * iVar12 <= param_2[1])))) ||
     (local_168[0] = '\x01', param_1[2] * iVar12 <= param_2[2])) {
    local_168[0] = '\0';
  }
  if (((*param_3 < 0) || (param_3[1] < 0)) ||
     ((param_3[2] < 0 ||
      (((iVar12 * *param_1 <= *param_3 || (param_1[1] * iVar12 <= param_3[1])) ||
       (param_1[2] * iVar12 <= param_3[2])))))) {
    local_160 = '\0';
  }
  else {
    local_160 = '\x01';
  }
  local_138 = param_2;
  local_130 = param_4;
  if (local_168[0] == '\0') {
    if (local_160 != '\0') {
      local_178 = param_9;
      local_180 = param_8;
      local_188 = (int *)CONCAT44(local_188._4_4_,param_7);
      local_190 = (int *)CONCAT44(local_190._4_4_,param_6);
      local_198 = param_5;
      uVar4 = FUN_143901bc0(param_1,param_3,param_2,param_4);
      return uVar4;
    }
  }
  else {
    cVar3 = FUN_143900ff0(param_1,iVar14,param_2[1],param_2[2]);
    if ((cVar3 == '\x01') ||
       ((local_160 != '\0' &&
        (cVar3 = FUN_143900ff0(param_1,*param_3,param_3[1],param_3[2]), cVar3 == '\x01')))) {
      return 0;
    }
    local_c0 = *param_3;
    local_d0 = *local_138;
    if (((local_d0 != local_c0) || (local_138[1] != param_3[1])) || (local_138[2] != param_3[2])) {
      uStack_cc = local_138[1];
      local_c8 = local_138[2];
      uStack_bc = param_3[1];
      local_b8 = param_3[2];
      fVar20 = (float)local_130;
      fVar15 = (float)FUN_1438f8da0(&local_d0,&local_c0);
      iVar14 = param_1[3];
      if (fVar20 <= fVar15) {
        fVar20 = fVar15;
      }
      if (local_160 == '\0') {
        iVar12 = iVar14 * *param_1 + -1;
        uVar13 = param_1[1] * iVar14 - 1;
        iVar14 = param_1[2] * iVar14 + -1;
        fVar18 = (float)(local_c0 - local_d0) + 1.1920929e-07;
        fVar15 = (float)(int)(uStack_bc - uStack_cc) + 1.1920929e-07;
        fVar19 = (float)(local_b8 - local_c8) + 1.1920929e-07;
        if (fVar18 <= 0.0) {
          fVar16 = 0.0;
        }
        else {
          fVar16 = (float)iVar12;
        }
        fVar16 = (fVar16 - (float)local_d0) / fVar18;
        if (3.4028235e+38 <= fVar16) {
          fVar16 = 3.4028235e+38;
        }
        if (fVar15 <= 0.0) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = (float)(int)uVar13;
        }
        fVar17 = (fVar17 - (float)(int)uStack_cc) / fVar15;
        if (fVar16 <= fVar17) {
          fVar17 = fVar16;
        }
        if (fVar19 <= 0.0) {
          fVar16 = 0.0;
        }
        else {
          fVar16 = (float)iVar14;
        }
        fVar16 = (fVar16 - (float)local_c8) / fVar19;
        if (fVar17 <= fVar16) {
          fVar16 = fVar17;
        }
        local_c0 = (int)(fVar18 * fVar16) + local_d0;
        uStack_bc = (int)(fVar15 * fVar16) + uStack_cc;
        local_b8 = (int)(fVar19 * fVar16) + local_c8;
        if (local_c0 < 1) {
          local_c0 = 0;
        }
        if ((int)uStack_bc < 1) {
          uStack_bc = 0;
        }
        if (local_b8 < 1) {
          local_b8 = 0;
        }
        if (iVar12 <= local_c0) {
          local_c0 = iVar12;
        }
        if ((int)uVar13 <= (int)uStack_bc) {
          uStack_bc = uVar13;
        }
        if (iVar14 <= local_b8) {
          local_b8 = iVar14;
        }
      }
      local_188 = &local_150;
      local_190 = &local_b0;
      local_b0 = 0;
      uStack_ac = 0;
      local_198 = param_5;
      local_a8 = 0;
      local_150 = 0;
      uStack_14c = 0;
      local_148 = 0;
      FUN_143900080(param_1,&local_d0,&local_c0,local_130);
      uStack_fc = uStack_ac;
      local_f0 = (local_150 - local_b0) + 1;
      local_f8 = local_a8;
      uStack_ec = (uStack_14c - uStack_ac) + 1;
      local_e8 = (local_148 - local_a8) + 1;
      local_100 = local_b0;
      FUN_1439031b0(*(undefined8 *)(param_1 + 0xc),&local_100,&local_f0,param_6);
      lVar6 = *(longlong *)(param_1 + 0xc);
      local_90 = local_d0;
      uStack_8c = uStack_cc;
      local_98 = local_c8;
      local_138 = *(int **)(lVar6 + 0x48);
      lVar5 = (longlong)
              (((local_c8 - *(int *)(lVar6 + 0x68)) / *(int *)(lVar6 + 0x28)) *
               *(int *)(lVar6 + 0x18) +
              ((int)(uStack_cc - *(int *)(lVar6 + 100)) / *(int *)(lVar6 + 0x28)) *
              *(int *)(lVar6 + 0x1c) + (local_d0 - *(int *)(lVar6 + 0x60)) / *(int *)(lVar6 + 0x28))
      ;
      cVar3 = *(char *)(lVar5 + (longlong)local_138);
      if ((cVar3 != '\x02') &&
         ((cVar3 == '\0' || (0.0 < *(float *)(*(longlong *)(lVar6 + 0x30) + lVar5 * 4))))) {
        iVar14 = *(int *)(lVar6 + 0x28);
        lVar5 = (longlong)
                (((local_c8 - *(int *)(lVar6 + 0x68)) / iVar14) * *(int *)(lVar6 + 0x18) +
                ((int)(uStack_cc - *(int *)(lVar6 + 100)) / iVar14) * *(int *)(lVar6 + 0x1c) +
                (local_d0 - *(int *)(lVar6 + 0x60)) / iVar14);
        *(undefined4 *)(*(longlong *)(lVar6 + 0x30) + lVar5 * 4) = 0;
        *(undefined1 *)(lVar5 + (longlong)local_138) = 1;
      }
      local_140 = local_c8;
      local_88 = local_c8;
      uVar13 = local_c0 - local_d0 >> 0x1f;
      iVar14 = (local_c0 - local_d0 ^ uVar13) - uVar13;
      uVar13 = (int)(uStack_bc - uStack_cc) >> 0x1f;
      iVar11 = (uStack_bc - uStack_cc ^ uVar13) - uVar13;
      uVar13 = local_b8 - local_c8 >> 0x1f;
      iVar12 = iVar14;
      if (iVar11 < iVar14) {
        iVar12 = iVar11;
      }
      if (iVar14 < iVar11) {
        iVar14 = iVar11;
      }
      (*(undefined8 **)(param_1 + 0xe))[1] = **(undefined8 **)(param_1 + 0xe);
      puVar1 = *(ulonglong **)(param_1 + 0xe);
      piVar10 = (int *)puVar1[1];
      fVar15 = (float)(int)((local_b8 - local_c8 ^ uVar13) - uVar13) +
               ((float)iVar14 - (float)iVar12) + (float)iVar12 * DAT_146b95cf0;
      local_84 = fVar15;
      local_a0 = local_90;
      uStack_9c = uStack_8c;
      if ((&local_90 < piVar10) && (piVar7 = (int *)*puVar1, piVar7 <= &local_90)) {
        if (piVar10 == (int *)puVar1[2]) {
          FUN_1438fbe30(puVar1,1);
        }
        puVar2 = (undefined4 *)puVar1[1];
        if (puVar2 != (undefined4 *)0x0) {
          puVar9 = (undefined4 *)
                   (((longlong)&local_90 - (longlong)piVar7 & 0xfffffffffffffff0U) + *puVar1);
          *puVar2 = *puVar9;
          puVar2[1] = puVar9[1];
          puVar2[2] = puVar9[2];
          puVar2[3] = puVar9[3];
        }
      }
      else {
        if (piVar10 == (int *)puVar1[2]) {
          FUN_1438fbe30(puVar1,1);
        }
        piVar10 = (int *)puVar1[1];
        if (piVar10 != (int *)0x0) {
          *piVar10 = local_90;
          piVar10[1] = uStack_8c;
          piVar10[2] = local_140;
          piVar10[3] = (int)fVar15;
        }
      }
      puVar1[1] = puVar1[1] + 0x10;
      FUN_1438fe590(*puVar1,puVar1[1],local_168);
      local_140 = 0;
      lVar6 = (*(longlong **)(param_1 + 0xe))[1] - **(longlong **)(param_1 + 0xe);
      do {
        if (lVar6 >> 4 == 0) {
          return 0;
        }
        piVar10 = (int *)**(undefined8 **)(param_1 + 0xe);
        iVar14 = *piVar10;
        uStack_dc = piVar10[1];
        iVar12 = piVar10[2];
        local_e0 = iVar14;
        FUN_143903b40();
        lVar6 = *(longlong *)(param_1 + 0xc);
        local_a0 = local_e0;
        uStack_9c = uStack_dc;
        iVar11 = *(int *)(lVar6 + 0x28);
        *(undefined1 *)
         ((longlong)
          (*(int *)(lVar6 + 0x1c) * ((int)(uStack_dc - *(int *)(lVar6 + 100)) / iVar11) +
          ((iVar12 - *(int *)(lVar6 + 0x68)) / iVar11) * *(int *)(lVar6 + 0x18) +
          (iVar14 - *(int *)(lVar6 + 0x60)) / iVar11) + *(longlong *)(lVar6 + 0x48)) = 2;
        lVar6 = *(longlong *)(param_1 + 0xc);
        local_138 = (int *)(ulonglong)uStack_dc;
        iVar14 = *(int *)(lVar6 + 0x28);
        fVar15 = *(float *)(*(longlong *)(lVar6 + 0x30) +
                           (longlong)
                           (*(int *)(lVar6 + 0x1c) *
                            ((int)(uStack_dc - *(int *)(lVar6 + 100)) / iVar14) +
                           ((iVar12 - *(int *)(lVar6 + 0x68)) / iVar14) * *(int *)(lVar6 + 0x18) +
                           (local_e0 - *(int *)(lVar6 + 0x60)) / iVar14) * 4);
        if (((local_e0 == local_c0) && (uStack_dc == uStack_bc)) && (iVar12 == local_b8)) {
          *local_110 = fVar15;
          return 1;
        }
        iVar14 = local_c0 - local_e0;
        iVar11 = uStack_bc - uStack_dc;
        local_128 = CONCAT44(local_128._4_4_,iVar14);
        iVar8 = local_b8 - iVar12;
        local_98 = iVar12;
        if ((1 < local_158) &&
           (iVar8 * iVar8 + iVar11 * iVar11 + iVar14 * iVar14 <= local_158 * local_158 * 3)) {
          cVar3 = FUN_1439016b0(param_1,&local_a0,&local_c0,local_120);
          if (cVar3 == '\0') {
            local_178 = &local_15c;
            local_180 = 1;
            local_188 = (int *)CONCAT44(local_188._4_4_,param_8);
            local_190 = (int *)CONCAT44(local_190._4_4_,1);
            local_198 = param_5;
            local_15c = 0.0;
            uVar4 = FUN_143901bc0(param_1,&local_a0,&local_c0,local_130);
            *local_110 = local_15c + fVar15;
            return uVar4;
          }
          fVar20 = _guard_xfg_dispatch_icall_nop
                             ((float)iVar11 * (float)iVar11 +
                              (float)(int)local_128 * (float)(int)local_128 +
                              (float)iVar8 * (float)iVar8);
          *local_110 = fVar20 + fVar15;
          return 1;
        }
        local_140 = local_140 + 1;
        if (param_7 < local_140) {
          return 0;
        }
        local_118 = 0;
        piVar10 = &DAT_14682cc08;
        local_138 = &DAT_14682cc18;
        iVar14 = local_158;
        do {
          piVar7 = local_138;
          local_b0 = local_a0 + iVar14 * piVar10[-2];
          local_a8 = local_98 + iVar14 * *piVar10;
          uStack_ac = iVar14 * piVar10[-1] + uStack_9c;
          iVar12 = param_1[3];
          if (((-1 < local_b0) && (-1 < (int)uStack_ac)) &&
             ((-1 < local_a8 &&
              (((local_b0 < iVar12 * *param_1 && ((int)uStack_ac < param_1[1] * iVar12)) &&
               (local_a8 < param_1[2] * iVar12)))))) {
            lVar6 = *(longlong *)(param_1 + 0xc);
            iVar12 = *(int *)(lVar6 + 0x28);
            local_15c = (float)((local_b0 - *(int *)(lVar6 + 0x60)) / iVar12);
            iVar11 = (int)(uStack_ac - *(int *)(lVar6 + 100)) / iVar12;
            iVar12 = (local_a8 - *(int *)(lVar6 + 0x68)) / iVar12;
            if (((-1 < (int)local_15c) && (-1 < iVar11)) &&
               ((-1 < iVar12 &&
                ((((int)local_15c < *(int *)(lVar6 + 0x1c) && (iVar11 < *(int *)(lVar6 + 0x20))) &&
                 (iVar12 < *(int *)(lVar6 + 0x24))))))) {
              fVar18 = (float)FUN_1438f8da0(&local_c0,&local_b0);
              fVar19 = (float)FUN_1438f8da0(&local_d0,&local_b0);
              iVar14 = local_158;
              if (fVar18 + fVar19 <= fVar20 * param_5) {
                lVar6 = *(longlong *)(param_1 + 0xc);
                iVar12 = *(int *)(lVar6 + 0x28);
                fVar18 = (float)local_158 * *(float *)(&DAT_14682cc78 + local_118 * 4) + fVar15;
                lVar5 = *(longlong *)(param_1 + 0xc);
                lVar6 = (longlong)
                        (*(int *)(lVar5 + 0x1c) *
                         ((int)(uStack_ac - *(int *)(lVar6 + 100)) / iVar12) +
                        (local_b0 - *(int *)(lVar6 + 0x60)) / iVar12 +
                        *(int *)(lVar5 + 0x18) * ((local_a8 - *(int *)(lVar6 + 0x68)) / iVar12));
                cVar3 = *(char *)(lVar6 + *(longlong *)(lVar5 + 0x48));
                if ((cVar3 != '\x02') &&
                   ((local_168[0] = cVar3 == '\0', cVar3 == '\0' ||
                    (fVar18 < *(float *)(*(longlong *)(lVar5 + 0x30) + lVar6 * 4))))) {
                  local_150 = local_a0;
                  uStack_14c = uStack_9c;
                  local_15c = 0.0;
                  if (local_118 < 6) {
                    iVar12 = local_98;
                    if (0 < local_158) {
                      do {
                        local_100 = local_150 + piVar10[-2];
                        uStack_fc = uStack_14c + piVar10[-1];
                        iVar12 = iVar12 + *piVar10;
                        local_150 = local_100;
                        uStack_14c = uStack_fc;
                        cVar3 = FUN_143900ff0(param_1,local_100,uStack_fc,iVar12);
                        piVar7 = local_138;
                        iVar14 = local_158;
                        if (cVar3 != '\0') goto LAB_1439027db;
                        local_15c = (float)((int)local_15c + 1);
                      } while ((int)local_15c < local_158);
                    }
                  }
                  else {
                    iVar12 = local_98;
                    if (0 < local_158) {
                      do {
                        local_f0 = local_150 + piVar10[-2];
                        uStack_ec = uStack_14c + piVar10[-1];
                        local_128 = CONCAT44(local_128._4_4_,*piVar10 + iVar12);
                        cVar3 = FUN_143900ff0(param_1,local_f0,uStack_ec,*piVar10 + iVar12);
                        piVar7 = local_138;
                        iVar14 = local_158;
                        if (cVar3 != '\0') goto LAB_1439027db;
                        local_120[0] = local_138[1] + local_150;
                        iVar14 = local_138[3];
                        local_108 = local_138[2] + uStack_14c;
                        cVar3 = FUN_143900ff0(param_1,local_138[-2] + local_150,
                                              local_138[-1] + uStack_14c,*local_138 + iVar12);
                        if ((cVar3 != '\0') &&
                           (cVar3 = FUN_143900ff0(param_1,local_120[0],local_108,iVar12 + iVar14),
                           piVar7 = local_138, iVar14 = local_158, cVar3 != '\0'))
                        goto LAB_1439027db;
                        local_150 = local_f0;
                        uStack_14c = uStack_ec;
                        local_15c = (float)((int)local_15c + 1);
                        iVar12 = (int)local_128;
                      } while ((int)local_15c < local_158);
                    }
                  }
                  lVar6 = *(longlong *)(param_1 + 0xc);
                  iVar14 = *(int *)(lVar6 + 0x28);
                  lVar5 = (longlong)
                          (*(int *)(lVar6 + 0x1c) *
                           ((int)(uStack_ac - *(int *)(lVar6 + 100)) / iVar14) +
                          ((local_a8 - *(int *)(lVar6 + 0x68)) / iVar14) * *(int *)(lVar6 + 0x18) +
                          (local_b0 - *(int *)(lVar6 + 0x60)) / iVar14);
                  *(float *)(*(longlong *)(lVar6 + 0x30) + lVar5 * 4) = fVar18;
                  *(undefined1 *)(lVar5 + *(longlong *)(lVar6 + 0x48)) = 1;
                  piVar7 = local_138;
                  iVar14 = local_158;
                  if (local_168[0] != '\0') {
                    uVar13 = local_c0 - local_b0 >> 0x1f;
                    iVar14 = (local_c0 - local_b0 ^ uVar13) - uVar13;
                    puVar1 = *(ulonglong **)(param_1 + 0xe);
                    local_90 = local_b0;
                    uStack_8c = uStack_ac;
                    local_128 = CONCAT44(local_128._4_4_,local_a8);
                    uVar13 = (int)(uStack_bc - uStack_ac) >> 0x1f;
                    local_88 = local_a8;
                    iVar11 = (uStack_bc - uStack_ac ^ uVar13) - uVar13;
                    uVar13 = local_b8 - local_a8 >> 0x1f;
                    iVar12 = iVar14;
                    if (iVar11 < iVar14) {
                      iVar12 = iVar11;
                    }
                    piVar7 = (int *)puVar1[1];
                    if (iVar14 < iVar11) {
                      iVar14 = iVar11;
                    }
                    fVar18 = (float)(int)((local_b8 - local_a8 ^ uVar13) - uVar13) +
                             ((float)iVar14 - (float)iVar12) + (float)iVar12 * DAT_146b95cf0;
                    local_84 = fVar18;
                    if ((&local_90 < piVar7) && ((int *)*puVar1 <= &local_90)) {
                      local_128 = (longlong)&local_90 - (longlong)*puVar1 >> 4;
                      if (piVar7 == (int *)puVar1[2]) {
                        FUN_1438fbe30(puVar1,1);
                      }
                      puVar2 = (undefined4 *)puVar1[1];
                      if (puVar2 != (undefined4 *)0x0) {
                        puVar9 = (undefined4 *)(local_128 * 0x10 + *puVar1);
                        *puVar2 = *puVar9;
                        puVar2[1] = puVar9[1];
                        puVar2[2] = puVar9[2];
                        puVar2[3] = puVar9[3];
                      }
                    }
                    else {
                      iVar14 = local_a8;
                      if (piVar7 == (int *)puVar1[2]) {
                        FUN_1438fbe30(puVar1,1);
                        iVar14 = (int)local_128;
                      }
                      piVar7 = (int *)puVar1[1];
                      if (piVar7 != (int *)0x0) {
                        *piVar7 = local_90;
                        piVar7[1] = uStack_8c;
                        piVar7[2] = iVar14;
                        piVar7[3] = (int)fVar18;
                      }
                    }
                    puVar1[1] = puVar1[1] + 0x10;
                    FUN_1438fe590(*puVar1,puVar1[1],local_168);
                    piVar7 = local_138;
                    iVar14 = local_158;
                  }
                }
              }
            }
          }
LAB_1439027db:
          local_118 = local_118 + 1;
          local_138 = piVar7 + 6;
          piVar10 = piVar10 + 3;
        } while ((longlong)local_138 < 0x14682cd08);
        lVar6 = (*(longlong **)(param_1 + 0xe))[1] - **(longlong **)(param_1 + 0xe);
      } while( true );
    }
  }
  return 1;
}



// FUNCTION 143902920 FUN_143902920 body=505 status=ok
// SIG undefined FUN_143902920(void)

longlong FUN_143902920(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_68;
  longlong lStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  uVar9 = (ulonglong)param_2;
  lStack_60 = 0;
  local_68 = param_2;
  cVar5 = FUN_143900ca0(*(longlong *)(param_1 + 0xb0) + 0x10);
  if ((cVar5 != '\0') && (lStack_60 != 0)) {
    return lStack_60;
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    uVar3 = uVar9 % (ulonglong)*(uint *)(param_1 + 0x90);
    puVar8 = (uint *)((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x98) + uVar3 * 4) +
                     *(longlong *)(param_1 + 0xa0));
    puVar7 = (uint *)((ulonglong)
                      *(uint *)(*(longlong *)(param_1 + 0x98) + (ulonglong)((int)uVar3 + 1) * 4) +
                     *(longlong *)(param_1 + 0xa0));
    if (puVar8 != puVar7) {
      while ((*puVar8 & 0x7fffffff) != param_2) {
        puVar8 = (uint *)((longlong)puVar8 + (ulonglong)(ushort)puVar8[1] + 6);
        if (puVar8 == puVar7) {
          return 0;
        }
      }
      if (puVar8 != puVar7) {
        uVar1 = *puVar8;
        uVar4 = puVar8[1];
        lVar6 = FUN_143903130(*(undefined8 *)(param_1 + 0xb0),uVar9);
        if (lVar6 == 0) {
          return 0;
        }
        FUN_143900510(*(undefined8 *)(param_1 + 0x10),(longlong)puVar8 + 6,(short)uVar4,
                      (byte)(uVar1 >> 0x1f),lVar6);
        return lVar6;
      }
    }
  }
  else if (*(longlong *)(param_1 + 0x70) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x70);
    local_res10[0] = param_2;
    if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    cVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,local_res10,local_res8,local_res18,local_res20);
    if (cVar5 != '\0') {
      puVar7 = (uint *)**(undefined8 **)(param_1 + 0x28);
      if (puVar7 == (uint *)0x0) {
        local_68 = local_68 & 0xffff0000;
        lStack_60 = 0;
      }
      else {
        local_58 = *puVar7 >> 1;
        local_48 = local_res8[0];
        local_44 = local_res18[0];
        local_40 = local_res20[0];
        local_54 = local_58;
        local_50 = local_58;
        FUN_1439035c0(*(undefined8 **)(param_1 + 0x28),&local_68,&local_48,&local_58,*puVar7,
                      puVar7 + 1);
      }
      if (((lStack_60 != 0) && ((char)local_68 != '\0')) &&
         (lVar6 = FUN_143903130(*(undefined8 *)(param_1 + 0xb0),uVar9), lVar6 != 0)) {
        FUN_143900510(*(undefined8 *)(param_1 + 0x10),lStack_60,(char)local_68,local_68._1_1_,lVar6)
        ;
        return lVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 143902b20 FUN_143902b20 body=582 status=ok
// SIG undefined FUN_143902b20(void)

void FUN_143902b20(uint param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 *local_res18;
  
  local_res18 = param_3;
  local_res10[0] = param_2;
  uVar12 = 0;
  uVar5 = 0;
  *param_3 = 0;
  uVar4 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (param_1 != 0) {
    do {
      local_res8[0] = 0;
      uVar11 = (param_1 - uVar4) - 1;
      uVar9 = uVar11 * 3;
      bVar13 = ((byte)(1 << ((byte)uVar9 & 7)) &
               *(byte *)((longlong)local_res10 + (ulonglong)(uVar9 >> 3))) != 0;
      bVar2 = 0;
      if (((byte)(1 << ((byte)(uVar9 + 1) & 7)) &
          *(byte *)((longlong)local_res10 + (ulonglong)(uVar9 + 1 >> 3))) != 0) {
        bVar2 = 2;
      }
      bVar7 = 0;
      if (((byte)(1 << ((byte)(uVar9 + 2) & 7)) &
          *(byte *)((longlong)local_res10 + (ulonglong)(uVar9 + 2 >> 3))) != 0) {
        bVar7 = 4;
      }
      bVar7 = bVar13 | bVar2 | bVar7;
      local_res8[0] = (uint)bVar7;
      uVar9 = local_res8[0];
      bVar7 = bVar7 >> 1 ^ bVar7;
      cVar1 = (char)((uVar5 + 1) / 3);
      bVar2 = (char)(uVar5 + 1) + cVar1 * -3;
      bVar8 = 1;
      uVar10 = 0;
      local_res8[0] =
           ((uint)(bVar7 >> (3 - bVar2 & 0x1f)) | (uint)bVar7 << (bVar2 & 0x1f)) & 7 ^ uVar12;
      lVar6 = 3;
      do {
        param_3 = (undefined8 *)((longlong)param_3 + 4);
        bVar2 = *(byte *)((longlong)local_res8 + (uVar10 >> 3)) & bVar8;
        uVar10 = uVar10 + 1;
        bVar8 = bVar8 << 1 | (char)bVar8 < '\0';
        *(byte *)(((ulonglong)(uVar11 >> 3) - 4) + (longlong)param_3) =
             (bVar2 != 0) << (sbyte)(uVar11 & 7) |
             *(byte *)(((ulonglong)(uVar11 >> 3) - 4) + (longlong)param_3) &
             ~(byte)(1 << (uVar11 & 7));
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (uVar9 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar9 - 1 >> 1 ^ uVar9 - 1 & 0xfffffffe;
      }
      bVar2 = (char)uVar5 + cVar1 * -3 + 1;
      uVar3 = 0;
      uVar12 = uVar12 ^ (uVar11 >> (3 - bVar2 & 0x1f) | uVar11 << (bVar2 & 0x1f)) & 7;
      if (uVar9 != 0) {
        if (bVar13) {
          do {
            if (3 < uVar3) break;
            uVar9 = uVar9 >> 1;
            uVar3 = uVar3 + 1;
          } while ((uVar9 & 1) != 0);
        }
        else {
          uVar9 = uVar9 - 1;
          for (; ((uVar9 & 1) != 0 && (uVar3 < 4)); uVar3 = uVar3 + 1) {
            uVar9 = uVar9 >> 1;
          }
        }
        uVar3 = uVar3 % 3;
      }
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 + 1 + uVar3) % 3;
      param_3 = local_res18;
    } while (uVar4 < param_1);
  }
  return;
}



// FUNCTION 143902d70 FUN_143902d70 body=106 status=ok
// SIG undefined FUN_143902d70(void)

int FUN_143902d70(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)param_2 * 0x20;
  iVar1 = *(int *)(lVar4 + 0x1c + lVar3);
  iVar2 = *(int *)(lVar4 + 0x18 + lVar3);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0x20) = iVar2;
  }
  else {
    *(int *)((longlong)iVar1 * 0x20 + 0x18 + lVar3) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  else {
    *(int *)((longlong)iVar2 * 0x20 + 0x1c + *(longlong *)(param_1 + 8)) = iVar1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1c + lVar4) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18 + lVar4) = 0xffffffff;
  return iVar2;
}



// FUNCTION 143902de0 FUN_143902de0 body=108 status=ok
// SIG undefined FUN_143902de0(void)

int FUN_143902de0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = (longlong)param_2 * 0x18;
  lVar4 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(lVar1 + 0x14 + lVar4);
  iVar3 = *(int *)(lVar1 + 0x10 + lVar4);
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x20) = iVar3;
  }
  else {
    *(int *)(lVar4 + 0x10 + (longlong)iVar2 * 0x18) = iVar3;
  }
  if (iVar3 == -1) {
    *(int *)(param_1 + 0x24) = iVar2;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 8) + 0x14 + (longlong)iVar3 * 0x18) = iVar2;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14 + lVar1) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x10 + lVar1) = 0xffffffff;
  return iVar3;
}



// FUNCTION 143902e50 FUN_143902e50 body=359 status=ok
// SIG undefined FUN_143902e50(void)

undefined8 FUN_143902e50(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  
  lVar10 = (longlong)param_2 * 0x20;
  pbVar11 = (byte *)(*(longlong *)(param_1 + 0x40) + lVar10);
  uVar6 = ((((uint)pbVar11[1] ^ (*pbVar11 ^ 0x84222325) * 0x1b3) * 0x1b3 ^ (uint)pbVar11[2]) * 0x1b3
          ^ (uint)pbVar11[3]) * 0x1b3;
  uVar9 = (int)uVar6 >> 0x1f;
  iVar2 = ((int)((uVar6 ^ uVar9) - uVar9) % (*(int *)(param_1 + 0x60) + -1) + 1) * 2;
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar1 = (longlong)iVar2 * 4;
  lVar8 = (longlong)(iVar2 + 1);
  iVar2 = *(int *)(lVar4 + lVar8 * 4);
  if (*(int *)(lVar4 + lVar1) == iVar2) {
    *(undefined4 *)(lVar4 + lVar8 * 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + *(longlong *)(param_1 + 0x68)) = 0xffffffff;
  }
  else if (param_2 == *(int *)(lVar4 + lVar1)) {
    *(undefined4 *)(lVar4 + lVar1) = *(undefined4 *)(pbVar11 + 0x18);
  }
  else if (param_2 == iVar2) {
    if (param_2 == -1) {
      uVar7 = *(undefined4 *)(param_1 + 0x5c);
    }
    else {
      uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1c + lVar10);
    }
    *(undefined4 *)(lVar4 + lVar8 * 4) = uVar7;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  iVar2 = *(int *)(lVar1 + 0x1c + lVar10);
  iVar3 = *(int *)(lVar1 + 0x18 + lVar10);
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x58) = iVar3;
  }
  else {
    *(int *)((longlong)iVar2 * 0x20 + 0x18 + lVar1) = iVar3;
  }
  if (iVar3 == -1) {
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  else {
    *(int *)((longlong)iVar3 * 0x20 + 0x1c + *(longlong *)(param_1 + 0x40)) = iVar2;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1c + lVar10) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar10) = 0xffffffff;
  if (**(int **)(param_1 + 0x68) == -1) {
    FUN_143901580(param_1 + 0x38,*(undefined4 *)(param_1 + 0x58),param_2);
    *(int *)(*(longlong *)(param_1 + 0x68) + 4) = param_2;
  }
  else {
    FUN_143901580(param_1 + 0x38,**(int **)(param_1 + 0x68),param_2);
  }
  piVar5 = *(int **)(param_1 + 0x68);
  *piVar5 = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return CONCAT71((int7)((ulonglong)piVar5 >> 8),1);
}



// FUNCTION 143902fc0 FUN_143902fc0 body=361 status=ok
// SIG undefined FUN_143902fc0(void)

undefined8 FUN_143902fc0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  
  lVar1 = (longlong)param_2 * 0x18;
  pbVar11 = (byte *)(*(longlong *)(param_1 + 0x30) + lVar1);
  uVar7 = ((((uint)pbVar11[1] ^ (*pbVar11 ^ 0x84222325) * 0x1b3) * 0x1b3 ^ (uint)pbVar11[2]) * 0x1b3
          ^ (uint)pbVar11[3]) * 0x1b3;
  uVar10 = (int)uVar7 >> 0x1f;
  iVar3 = ((int)((uVar7 ^ uVar10) - uVar10) % (*(int *)(param_1 + 0x50) + -1) + 1) * 2;
  lVar5 = *(longlong *)(param_1 + 0x58);
  lVar2 = (longlong)iVar3 * 4;
  lVar9 = (longlong)(iVar3 + 1);
  iVar3 = *(int *)(lVar5 + lVar9 * 4);
  if (*(int *)(lVar5 + lVar2) == iVar3) {
    *(undefined4 *)(lVar5 + lVar9 * 4) = 0xffffffff;
    *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x58)) = 0xffffffff;
  }
  else if (param_2 == *(int *)(lVar5 + lVar2)) {
    *(undefined4 *)(lVar5 + lVar2) = *(undefined4 *)(pbVar11 + 0x10);
  }
  else if (param_2 == iVar3) {
    if (param_2 == -1) {
      uVar8 = *(undefined4 *)(param_1 + 0x4c);
    }
    else {
      uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x14 + lVar1);
    }
    *(undefined4 *)(lVar5 + lVar9 * 4) = uVar8;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(lVar2 + 0x14 + lVar1);
  iVar4 = *(int *)(lVar2 + 0x10 + lVar1);
  if (iVar3 == -1) {
    *(int *)(param_1 + 0x48) = iVar4;
  }
  else {
    *(int *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18) = iVar4;
  }
  if (iVar4 == -1) {
    *(int *)(param_1 + 0x4c) = iVar3;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x30) + 0x14 + (longlong)iVar4 * 0x18) = iVar3;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x14 + lVar1) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar1) = 0xffffffff;
  if (**(int **)(param_1 + 0x58) == -1) {
    FUN_143901600(param_1 + 0x28,*(undefined4 *)(param_1 + 0x48),param_2);
    *(int *)(*(longlong *)(param_1 + 0x58) + 4) = param_2;
  }
  else {
    FUN_143901600(param_1 + 0x28,**(int **)(param_1 + 0x58),param_2);
  }
  piVar6 = *(int **)(param_1 + 0x58);
  *piVar6 = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return CONCAT71((int7)((ulonglong)piVar6 >> 8),1);
}



// FUNCTION 143903130 FUN_143903130 body=126 status=ok
// SIG undefined FUN_143903130(void)

undefined8 FUN_143903130(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    puVar1 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x9c) * 0x20 + *(longlong *)(param_1 + 0x58));
    local_18 = *puVar1;
    uStack_10 = puVar1[1];
    FUN_143903970(param_1 + 0x10);
    uVar2 = uStack_10;
    local_20 = uStack_10;
    local_28[0] = param_2;
    FUN_1438ffa50(param_1 + 0x10,local_28,&local_18);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1439031b0 FUN_1439031b0 body=381 status=ok
// SIG undefined FUN_1439031b0(void)

void FUN_1439031b0(longlong param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined8 *)(param_1 + 0x60) = *param_2;
  iVar6 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 0x68) = iVar6;
  iVar7 = *(int *)(param_1 + 0x60) + *param_3;
  iVar5 = *(int *)(param_1 + 100) + param_3[1];
  iVar6 = iVar6 + param_3[2];
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x60) = iVar1;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 100)) {
    iVar1 = *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 100) = iVar1;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    iVar2 = *(int *)(param_1 + 0x68);
  }
  *(int *)(param_1 + 0x68) = iVar2;
  if (*(int *)(param_1 + 8) <= iVar7) {
    iVar7 = *(int *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0xc) <= iVar5) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0x10) <= iVar6) {
    iVar6 = *(int *)(param_1 + 0x10);
  }
  iVar3 = param_4 + -1;
  *(ulonglong *)param_3 = CONCAT44(iVar5 - iVar1,iVar7 - *(int *)(param_1 + 0x60));
  param_3[2] = iVar6 - iVar2;
  *(ulonglong *)param_3 = CONCAT44(param_3[1] + iVar3,*param_3 + iVar3);
  param_3[2] = iVar3 + (iVar6 - iVar2);
  iVar6 = *param_3;
  *param_3 = iVar6 / param_4;
  iVar1 = param_3[1];
  param_3[1] = iVar1 / param_4;
  iVar7 = param_3[2];
  param_3[2] = iVar7 / param_4;
  uVar4 = (iVar7 / param_4) * (iVar1 / param_4) * (iVar6 / param_4);
  if ((ulonglong)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 2) <
      (ulonglong)uVar4) {
    FUN_143903ce0(param_1 + 0x30,(ulonglong)uVar4);
    FUN_143903c00(param_1 + 0x48);
  }
  *(uint *)(param_1 + 0x14) = uVar4;
  *(int *)(param_1 + 0x18) = param_3[1] * *param_3;
  *(int *)(param_1 + 0x1c) = *param_3;
  *(int *)(param_1 + 0x20) = param_3[1];
  *(int *)(param_1 + 0x24) = param_3[2];
  *(int *)(param_1 + 0x28) = param_4;
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x30),0,(longlong)(int)uVar4 << 2);
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x48),0,(longlong)*(int *)(param_1 + 0x14));
  return;
}



// FUNCTION 143903330 FUN_143903330 body=18 status=ok
// SIG undefined FUN_143903330(void)

void FUN_143903330(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  *param_3 = *(undefined4 *)(param_1 + 0x20);
  *param_4 = *(undefined4 *)(param_1 + 0x24);
  return;
}



// FUNCTION 143903350 FUN_143903350 body=23 status=ok
// SIG undefined FUN_143903350(void)

undefined1 FUN_143903350(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  if (((param_2 < *(uint *)(param_1 + 0x1c)) && (param_3 < *(uint *)(param_1 + 0x20))) &&
     (param_4 < *(uint *)(param_1 + 0x24))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143903370 FUN_143903370 body=27 status=ok
// SIG undefined FUN_143903370(void)

undefined8 * FUN_143903370(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = std::
               _Func_impl<<lambda_a090a8d8c52ec00213a8d43dbaddef06>,std::allocator<int>,bool,unsigned_int,unsigned_int&___ptr64,unsigned_int&___ptr64,unsigned_int&___ptr64>
               ::vftable;
    param_2[1] = *(undefined8 *)(param_1 + 8);
  }
  return param_2;
}



// FUNCTION 143903390 FUN_143903390 body=19 status=ok
// SIG undefined FUN_143903390(void)

void FUN_143903390(undefined8 *param_1,char param_2)

{
  *param_1 = std::
             _Func_base<bool,unsigned_int,unsigned_int&___ptr64,unsigned_int&___ptr64,unsigned_int&___ptr64>
             ::vftable;
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != (undefined8 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,param_1);
  }
  return;
}



// FUNCTION 1439033b0 FUN_1439033b0 body=60 status=ok
// SIG undefined FUN_1439033b0(void)

void FUN_1439033b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x10),*plVar1,param_4,uVar2);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1439033f0 FUN_1439033f0 body=104 status=ok
// SIG undefined FUN_1439033f0(void)

longlong FUN_1439033f0(longlong param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,
                      uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  uint uVar4;
  
  puVar2 = *(uint **)(param_1 + 8);
  uVar1 = *param_2;
  uVar4 = puVar2[2] * *puVar2 * puVar2[1];
  if (uVar4 < uVar1) {
    return (ulonglong)(uint3)(uVar4 >> 8) << 8;
  }
  *param_5 = uVar1 / (*puVar2 * puVar2[1]);
  uVar3 = (ulonglong)uVar1 % (ulonglong)(puVar2[1] * *puVar2);
  *param_4 = (int)(uVar3 / *puVar2);
  uVar1 = *puVar2;
  *param_3 = (int)(uVar3 % (ulonglong)uVar1);
  return CONCAT71((int7)(uVar3 / uVar1 >> 8),1);
}



// FUNCTION 143903460 FUN_143903460 body=352 status=ok
// SIG undefined FUN_143903460(void)

ulonglong FUN_143903460(int *param_1,char param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,uint param_8)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  
  do {
    uVar2 = param_4;
    if (param_8 < param_5) {
      return (ulonglong)param_3 & 0xffffffffffffff00;
    }
    for (; uVar3 = param_3, uVar2 <= param_7; uVar2 = uVar2 + 1) {
      for (; uVar3 <= param_6; uVar3 = uVar3 + 1) {
        uVar7 = param_1[5];
        lVar1 = *(longlong *)(param_1 + 10);
        bVar6 = (byte)param_1[4];
        lVar4 = FUN_143902920(lVar1,((param_5 >> (bVar6 & 0x1f)) * param_1[1] +
                                    (uVar2 >> (bVar6 & 0x1f))) * *param_1 +
                                    (uVar3 >> (bVar6 & 0x1f)));
        uVar5 = 0;
        if (lVar4 != 0) {
          lVar1 = *(longlong *)(lVar1 + 0x10);
          uVar7 = (uVar7 & param_5) << ((byte)*(undefined4 *)(lVar1 + 0xc) & 0x1f) |
                  (uVar7 & uVar2) << ((byte)*(undefined4 *)(lVar1 + 8) & 0x1f) | uVar7 & uVar3;
          uVar5 = (ulonglong)
                  CONCAT31((uint3)(uVar7 >> 0xb),
                           ((byte)(1 << ((byte)uVar7 & 7)) &
                           *(byte *)((ulonglong)(uVar7 >> 3) + lVar4)) != 0);
        }
        if ((char)uVar5 == param_2) {
          return CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
    }
    param_5 = param_5 + 1;
  } while( true );
}



// FUNCTION 1439035c0 FUN_1439035c0 body=578 status=ok
// SIG undefined FUN_1439035c0(void)

longlong *
FUN_1439035c0(undefined8 param_1,longlong *param_2,int *param_3,int *param_4,int param_5,
             byte *param_6)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  int local_30;
  
  uVar12 = 1;
  bVar3 = *param_6 & 0x7f;
  if (bVar3 < 0x7f) {
    uVar11 = (uint)bVar3;
  }
  else {
    uVar11 = *(uint *)(param_6 + 1);
    uVar12 = 5;
  }
  pbVar10 = param_6 + uVar12;
  bVar3 = 0;
  if (1 < param_5) {
    bVar3 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  }
  iVar1 = *param_4;
  iVar13 = param_4[1];
  iVar2 = param_4[2];
  local_38 = *param_3;
  local_34 = param_3[1];
  local_30 = param_3[2];
  iVar7 = 0;
  iVar4 = iVar7;
  if (iVar13 <= local_34) {
    iVar4 = 2;
  }
  if (iVar1 <= local_38) {
    iVar7 = 4;
  }
  uVar5 = iVar7 + (uint)(iVar2 <= local_30) + iVar4;
  if ((bVar3 >> uVar5 & 1) != 0) {
    if (uVar5 != 0) {
      uVar12 = 1;
      uVar9 = (ulonglong)uVar5;
      do {
        if ((uVar12 & bVar3) != 0) {
          if ((*pbVar10 & 0x7f) < 0x7f) {
            uVar6 = (ulonglong)(*pbVar10 & 0x7f);
          }
          else {
            uVar6 = (ulonglong)*(uint *)(pbVar10 + 1);
          }
          pbVar10 = pbVar10 + uVar6;
        }
        uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    param_5 = param_5 / 2;
    iVar4 = local_30;
    if (param_5 != 1) {
      if (local_30 < iVar2) {
        iVar4 = iVar2 - param_5 / 2;
      }
      else {
        iVar4 = iVar2 + param_5 / 2;
      }
    }
    iStack_44 = local_34;
    if (param_5 != 1) {
      if (local_34 < iVar13) {
        iStack_44 = iVar13 - param_5 / 2;
      }
      else {
        iStack_44 = iVar13 + param_5 / 2;
      }
    }
    iVar13 = local_38;
    if (param_5 != 1) {
      if (local_38 < iVar1) {
        iVar13 = iVar1 - param_5 / 2;
      }
      else {
        iVar13 = iVar1 + param_5 / 2;
      }
    }
    local_48 = (undefined1)iVar13;
    uStack_47 = (undefined1)((uint)iVar13 >> 8);
    uStack_46 = (undefined2)((uint)iVar13 >> 0x10);
    _iStack_40 = CONCAT44(uStack_3c,iVar4);
    FUN_1439035c0(param_1,param_2,&local_38,&local_48,param_5,pbVar10);
    return param_2;
  }
  if (bVar3 == 0) {
    pbVar8 = (byte *)0x0;
    if (uVar11 - uVar12 != 0) {
      pbVar8 = pbVar10;
    }
    *param_2 = CONCAT44(iStack_44,
                        CONCAT22(uStack_46,CONCAT11(*param_6 >> 7,(char)(uVar11 - uVar12))));
    param_2[1] = (longlong)pbVar8;
    return param_2;
  }
  *param_2 = (ulonglong)CONCAT42(iStack_44,uStack_46) << 0x10;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 143903810 FUN_143903810 body=153 status=ok
// SIG undefined FUN_143903810(void)

void FUN_143903810(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong local_res18 [2];
  
  local_res10[0] = *(undefined4 *)(param_1 + 0xa8);
  local_res8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar1 = FUN_1438fe820(local_res18,local_res10,local_res8,param_4,0xfffffffffffffffe);
  FUN_1438ff820(param_1 + 0xb0,uVar1);
  if (local_res18[0] != 0) {
    if (*(longlong *)(local_res18[0] + 8) != 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(local_res18[0] + 8));
      *(undefined8 *)(local_res18[0] + 8) = 0;
    }
    FUN_1438ff2a0(local_res18[0] + 0x18);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,local_res18[0]);
  }
  return;
}



// FUNCTION 1439038b0 FUN_1439038b0 body=179 status=ok
// SIG undefined FUN_1439038b0(void)

void FUN_1439038b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_1438f1790();
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2);
  }
  local_res8 = (undefined1)lVar4;
  std::_Uninit_copy<char_const_*___ptr64,unsigned_char_*___ptr64,std::allocator<unsigned_char>_>
            (*param_1,param_1[1],lVar4,param_1,local_res8,local_res8,uVar5);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
  }
  param_1[2] = lVar4 + param_2;
  param_1[1] = (lVar2 - lVar1) + lVar4;
  *param_1 = lVar4;
  return;
}



// FUNCTION 143903970 FUN_143903970 body=114 status=ok
// SIG undefined FUN_143903970(void)

undefined1 FUN_143903970(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  iVar1 = *(int *)((longlong)param_2 * 0x20 + 0x14 + lVar3);
  iVar2 = *(int *)((longlong)param_2 * 0x20 + 0x10 + lVar3);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0x88) = iVar2;
  }
  else {
    *(int *)((longlong)iVar1 * 0x20 + 0x10 + lVar3) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x8c) = iVar1;
    uVar4 = FUN_143902e50(param_1 + 8);
    return uVar4;
  }
  *(int *)((longlong)iVar2 * 0x20 + 0x14 + *(longlong *)(param_1 + 0x48)) = iVar1;
  uVar4 = FUN_143902e50(param_1 + 8);
  return uVar4;
}



// FUNCTION 1439039f0 FUN_1439039f0 body=110 status=ok
// SIG undefined FUN_1439039f0(void)

undefined1 FUN_1439039f0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar1 = *(int *)(lVar3 + 0xc + (longlong)param_2 * 0x18);
  iVar2 = *(int *)(lVar3 + 8 + (longlong)param_2 * 0x18);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0x78) = iVar2;
  }
  else {
    *(int *)(lVar3 + 8 + (longlong)iVar1 * 0x18) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x7c) = iVar1;
    uVar4 = FUN_143902fc0(param_1 + 8);
    return uVar4;
  }
  *(int *)(*(longlong *)(param_1 + 0x38) + 0xc + (longlong)iVar2 * 0x18) = iVar1;
  uVar4 = FUN_143902fc0(param_1 + 8);
  return uVar4;
}



// FUNCTION 143903a60 FUN_143903a60 body=140 status=ok
// SIG undefined FUN_143903a60(void)

void FUN_143903a60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    param_1[1] = param_3;
    *param_1 = param_2;
  }
  else {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
      param_1[1] = param_3;
      *param_1 = param_2;
    }
    else {
      param_1[1] = param_3;
      *param_1 = param_2;
    }
  }
  return;
}



// FUNCTION 143903af0 FUN_143903af0 body=8 status=ok
// SIG undefined FUN_143903af0(void)

TypeDescriptor * FUN_143903af0(void)

{
  return &<lambda_a090a8d8c52ec00213a8d43dbaddef06>::RTTI_Type_Descriptor;
}



// FUNCTION 143903b00 FUN_143903b00 body=63 status=ok
// SIG undefined FUN_143903b00(void)

void FUN_143903b00(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143903b40 FUN_143903b40 body=117 status=ok
// SIG undefined FUN_143903b40(void)

void FUN_143903b40(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_res8 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = param_1[1];
  puVar2 = (undefined4 *)*param_1;
  if (0x1f < (longlong)(lVar1 - (longlong)puVar2 & 0xfffffffffffffff0U)) {
    local_c = *(undefined4 *)(lVar1 + -4);
    local_18 = *(undefined4 *)(lVar1 + -0x10);
    local_14 = *(undefined4 *)(lVar1 + -0xc);
    local_10 = *(undefined4 *)(lVar1 + -8);
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined4 *)(lVar1 + -0x10) = *puVar2;
    *(undefined4 *)(lVar1 + -0xc) = uVar3;
    *(undefined4 *)(lVar1 + -8) = uVar4;
    *(undefined4 *)(lVar1 + -4) = uVar5;
    FUN_1438fe480(puVar2,0,(lVar1 + -0x10) - (longlong)puVar2 >> 4,&local_18,local_res8);
  }
  param_1[1] = param_1[1] + -0x10;
  return;
}



// FUNCTION 143903bc0 FUN_143903bc0 body=52 status=ok
// SIG undefined FUN_143903bc0(void)

void FUN_143903bc0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
  }
  return;
}



// FUNCTION 143903c00 FUN_143903c00 body=215 status=ok
// SIG undefined FUN_143903c00(void)

void FUN_143903c00(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  uVar2 = param_1[1] - lVar1;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + param_2;
  }
  else if (uVar2 < param_2) {
    uVar3 = param_2 - uVar2;
    if ((ulonglong)(param_1[2] - param_1[1]) < uVar3) {
      if (~uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar6 = param_1[2] - lVar1;
      uVar5 = 0;
      if (uVar6 <= ~(uVar6 >> 1)) {
        uVar5 = (uVar6 >> 1) + uVar6;
      }
      uVar4 = uVar3 + uVar2;
      if (uVar3 + uVar2 <= uVar5) {
        uVar4 = uVar5;
      }
      FUN_1439038b0(param_1,uVar4,uVar5,uVar6,0xfffffffffffffffe);
    }
    FUN_1438fe630(param_1[1],param_2 - (param_1[1] - *param_1),param_1,(ulonglong)param_1 & 0xff);
    param_1[1] = param_1[1] + (*param_1 - param_1[1]) + param_2;
  }
  return;
}



// FUNCTION 143903ce0 FUN_143903ce0 body=243 status=ok
// SIG undefined FUN_143903ce0(void)

void FUN_143903ce0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = param_1[1];
  uVar2 = lVar1 - *param_1 >> 2;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + (param_2 - uVar2) * 4;
  }
  else if (uVar2 < param_2) {
    uVar3 = param_2 - uVar2;
    if ((ulonglong)(param_1[2] - lVar1 >> 2) < uVar3) {
      if (-uVar2 - 1 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar6 = param_1[2] - *param_1 >> 2;
      uVar5 = 0;
      if (uVar6 <= ~(uVar6 >> 1)) {
        uVar5 = (uVar6 >> 1) + uVar6;
      }
      uVar4 = uVar3 + uVar2;
      if (uVar3 + uVar2 <= uVar5) {
        uVar4 = uVar5;
      }
      FUN_1438f7260(param_1,uVar4,uVar5,uVar6,0xfffffffffffffffe);
    }
    FUN_1438fbeb0(param_1[1],param_2 - (param_1[1] - *param_1 >> 2),param_1,
                  (ulonglong)param_1 & 0xff);
    param_1[1] = param_1[1] + (param_2 - (param_1[1] - *param_1 >> 2)) * 4;
  }
  return;
}



// FUNCTION 143903de0 FUN_143903de0 body=492 status=ok
// SIG undefined FUN_143903de0(void)

undefined8 *
FUN_143903de0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_f8 = 0xfffffffffffffffe;
  uVar3 = 0;
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x1a0);
  if (lVar2 != 0) {
    local_f0 = local_e0;
    local_a8 = *param_9;
    uStack_a0 = param_9[1];
    local_98 = param_9[2];
    uStack_90 = param_9[3];
    local_88 = param_9[4];
    uStack_80 = param_9[5];
    local_78 = param_9[6];
    uStack_70 = param_9[7];
    local_68 = param_9[8];
    uStack_60 = param_9[9];
    local_58 = param_9[10];
    uStack_50 = param_9[0xb];
    local_48 = *(undefined4 *)(param_9 + 0xc);
    uStack_44 = *(undefined4 *)((longlong)param_9 + 100);
    uStack_40 = *(undefined4 *)(param_9 + 0xd);
    uStack_3c = *(undefined4 *)((longlong)param_9 + 0x6c);
    local_38 = *(undefined4 *)(param_9 + 0xe);
    uStack_34 = *(undefined4 *)((longlong)param_9 + 0x74);
    uStack_30 = *(undefined4 *)(param_9 + 0xf);
    uStack_2c = *(undefined4 *)((longlong)param_9 + 0x7c);
    uVar3 = FUN_1438f30f0(local_e0,param_6);
    uVar4 = FUN_1438f30f0(local_c8,param_5);
    local_160 = *param_3;
    local_15c = param_3[1];
    local_158 = param_3[2];
    local_154 = param_3[3];
    local_150 = param_3[4];
    local_14c = param_3[5];
    local_148 = param_3[6];
    local_140 = *param_2;
    local_13c = param_2[1];
    local_138 = param_2[2];
    local_134 = param_2[3];
    local_130 = param_2[4];
    local_12c = param_2[5];
    local_128 = param_2[6];
    local_124 = param_2[7];
    local_120 = param_2[8];
    local_11c = *(undefined8 *)(param_2 + 9);
    local_114 = param_2[0xb];
    local_110 = *(undefined8 *)(param_2 + 0xc);
    uStack_108 = *(undefined8 *)(param_2 + 0xe);
    local_100 = param_2[0x10];
    uVar3 = FUN_143903fd0(lVar2,&local_140,&local_160,*param_4,uVar4,uVar3,*param_7,*param_8,
                          &local_a8);
  }
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 143903fd0 FUN_143903fd0 body=584 status=ok
// SIG undefined FUN_143903fd0(void)

undefined8 *
FUN_143903fd0(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
             longlong *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  *param_1 = TritonRuntime::EncodedProbeData::vftable;
  FUN_1438f30f0(param_1 + 1,param_5,param_3,param_4,0xfffffffffffffffe);
  FUN_1438f30f0(param_1 + 4,param_6);
  param_1[7] = param_7;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x44) = *param_2;
  *(undefined4 *)(param_1 + 9) = param_2[1];
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_2[2];
  *(undefined4 *)(param_1 + 10) = param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x54) = param_2[4];
  *(undefined4 *)(param_1 + 0xb) = param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_2[6];
  *(undefined4 *)(param_1 + 0xc) = param_2[7];
  *(undefined4 *)((longlong)param_1 + 100) = param_2[8];
  param_1[0xd] = *(undefined8 *)(param_2 + 9);
  *(undefined4 *)(param_1 + 0xe) = param_2[0xb];
  *(undefined4 *)((longlong)param_1 + 0x74) = param_2[0xc];
  *(undefined4 *)(param_1 + 0xf) = param_2[0xd];
  *(undefined4 *)((longlong)param_1 + 0x7c) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x10) = param_2[0xf];
  *(undefined4 *)((longlong)param_1 + 0x84) = param_2[0x10];
  *(undefined4 *)(param_1 + 0x11) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = param_3[1];
  *(undefined4 *)(param_1 + 0x12) = param_3[2];
  *(undefined4 *)((longlong)param_1 + 0x94) = param_3[3];
  *(undefined4 *)(param_1 + 0x13) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_3[5];
  *(undefined4 *)(param_1 + 0x14) = param_3[6];
  uVar5 = param_9[1];
  *(undefined8 *)((longlong)param_1 + 0xa4) = *param_9;
  *(undefined8 *)((longlong)param_1 + 0xac) = uVar5;
  uVar5 = param_9[3];
  *(undefined8 *)((longlong)param_1 + 0xb4) = param_9[2];
  *(undefined8 *)((longlong)param_1 + 0xbc) = uVar5;
  uVar5 = param_9[5];
  *(undefined8 *)((longlong)param_1 + 0xc4) = param_9[4];
  *(undefined8 *)((longlong)param_1 + 0xcc) = uVar5;
  uVar5 = param_9[7];
  *(undefined8 *)((longlong)param_1 + 0xd4) = param_9[6];
  *(undefined8 *)((longlong)param_1 + 0xdc) = uVar5;
  uVar5 = param_9[9];
  *(undefined8 *)((longlong)param_1 + 0xe4) = param_9[8];
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar5;
  uVar5 = param_9[0xb];
  *(undefined8 *)((longlong)param_1 + 0xf4) = param_9[10];
  *(undefined8 *)((longlong)param_1 + 0xfc) = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_9 + 100);
  uVar3 = *(undefined4 *)(param_9 + 0xd);
  uVar4 = *(undefined4 *)((longlong)param_9 + 0x6c);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(param_9 + 0xc);
  *(undefined4 *)(param_1 + 0x21) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x22) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_9 + 0x74);
  uVar3 = *(undefined4 *)(param_9 + 0xf);
  uVar4 = *(undefined4 *)((longlong)param_9 + 0x7c);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)(param_9 + 0xe);
  *(undefined4 *)(param_1 + 0x23) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = param_8;
  lVar1 = *param_5;
  if (lVar1 != 0) {
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar1);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  lVar1 = *param_6;
  if (lVar1 != 0) {
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar1);
    *param_6 = 0;
    param_6[1] = 0;
    param_6[2] = 0;
  }
  return param_1;
}



// FUNCTION 143904220 FUN_143904220 body=57 status=ok
// SIG undefined FUN_143904220(void)

void FUN_143904220(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,*param_1,*plVar1,param_4,uVar2);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 143904260 FUN_143904260 body=93 status=ok
// SIG undefined FUN_143904260(void)

void FUN_143904260(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (*param_1 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1[1],*plVar1,param_4,uVar2);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 1439042c0 _Tidy body=5 status=ok
// SIG undefined _Tidy(void)

void std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(void)

{
  _Tidy();
  return;
}



// FUNCTION 1439042d0 FUN_1439042d0 body=537 status=ok
// SIG undefined FUN_1439042d0(void)

void FUN_1439042d0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *param_1 = TritonRuntime::EncodedProbeData::vftable;
  uVar5 = 0;
  uVar4 = uVar5;
  if (0 < *(int *)(param_1 + 0x29)) {
    do {
      uVar7 = uVar5;
      if (0 < *(int *)((longlong)param_1 + 0x14c)) {
        do {
          plVar3 = (longlong *)
                   (param_1[0x28] +
                   (longlong)(*(int *)((longlong)param_1 + 0x14c) * (int)uVar4 + (int)uVar7) * 8);
          if (*plVar3 != 0) {
            plVar2 = (longlong *)FUN_1438f1790();
            (**(code **)(*plVar2 + 0x18))(plVar2,*plVar3);
            *plVar3 = 0;
          }
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < *(int *)((longlong)param_1 + 0x14c));
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x29));
  }
  if ((param_1[7] != 0) && (uVar4 = uVar5, 0 < *(int *)(param_1 + 0x14))) {
    do {
      lVar1 = param_1[7];
      if (*(longlong *)(lVar1 + uVar5) != 0) {
        plVar3 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined8 *)(lVar1 + uVar5));
        *(undefined8 *)(lVar1 + uVar5) = 0;
      }
      uVar6 = (int)uVar4 + 1;
      uVar5 = uVar5 + 8;
      uVar4 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x14));
  }
  if (param_1[0x2f] != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1[0x2f]);
    param_1[0x2f] = 0;
  }
  if (param_1[0x30] != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1[0x30]);
    param_1[0x30] = 0;
  }
  if (param_1[0x2a] != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1[0x2a]);
    param_1[0x2a] = 0;
  }
  if (param_1[0x28] != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1[0x28]);
    param_1[0x28] = 0;
  }
  if (param_1[0x25] != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1[0x25]);
    param_1[0x25] = 0;
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 1439044f0 FUN_1439044f0 body=114 status=ok
// SIG undefined FUN_1439044f0(void)

longlong * FUN_1439044f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      plVar1 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar1 + 0x18))(plVar1,*param_1);
      *param_1 = 0;
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 143904570 FUN_143904570 body=172 status=ok
// SIG undefined FUN_143904570(void)

longlong * FUN_143904570(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,*param_1);
      *param_1 = 0;
    }
    plVar2 = param_2 + 1;
    plVar1 = param_1 + 1;
    *param_1 = *param_2;
    if (plVar1 != plVar2) {
      if (*plVar1 != 0) {
        plVar3 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar3 + 0x18))(plVar3,*plVar1);
        *plVar1 = 0;
      }
      *plVar1 = *plVar2;
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
      *plVar2 = 0;
      param_2[2] = 0;
    }
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 143904620 FUN_143904620 body=262 status=ok
// SIG undefined FUN_143904620(void)

void FUN_143904620(undefined8 *param_1,void *param_2,ulonglong param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_4 != '\0') {
    iVar1 = *(int *)*param_1;
    iVar2 = *(int *)param_1[1];
    if ((ulonglong)(longlong)(iVar1 - iVar2) < param_3) {
      ((undefined8 *)param_1[2])[1] = *(undefined8 *)param_1[2];
      std::vector<unsigned_char,std::allocator<unsigned_char>_>::resize
                (param_1[2],*(undefined8 *)param_1[3]);
      *(longlong *)param_1[4] = *(longlong *)param_1[4] - (longlong)(iVar1 - iVar2);
      (**(code **)(**(longlong **)param_1[5] + 0x20))
                (*(longlong **)param_1[5],*(undefined4 *)param_1[4]);
      uVar3 = (**(code **)(**(longlong **)param_1[5] + 0x10))
                        (*(longlong **)param_1[5],*(undefined8 *)param_1[2],1,
                         *(undefined8 *)param_1[3]);
      *(undefined4 *)*param_1 = uVar3;
      *(undefined4 *)param_1[1] = 0;
      *(longlong *)param_1[4] = *(longlong *)param_1[4] + (longlong)*(int *)*param_1;
      if ((ulonglong)(longlong)*(int *)*param_1 < param_3) {
        *param_4 = '\0';
        return;
      }
    }
    _guard_xfg_dispatch_icall_nop
              (param_2,(void *)((longlong)*(int *)param_1[1] + *(longlong *)param_1[2]),param_3);
    *(int *)param_1[1] = *(int *)param_1[1] + (int)param_3;
  }
  return;
}



// FUNCTION 143904730 FUN_143904730 body=386 status=ok
// SIG undefined FUN_143904730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143904730(longlong *param_1,int *param_2)

{
  float fVar1;
  float *pfVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_40;
  float local_38;
  float fStack_34;
  float local_30;
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)param_1[1];
  pfVar2 = (float *)*param_1;
  piVar7 = (int *)param_1[2];
  local_20 = piVar7[2] + param_2[2];
  local_24 = piVar7[1] + param_2[1];
  fStack_34 = (float)param_2[1] * fVar1 + pfVar2[1];
  local_38 = (float)*param_2 * fVar1 + *pfVar2;
  local_30 = (float)param_2[2] * fVar1 + pfVar2[2];
  local_28 = *piVar7 + *param_2;
  local_40 = *(int *)param_1[3];
  local_48 = local_28 / local_40;
  local_44 = local_24 / local_40;
  local_40 = local_20 / local_40;
  uVar5 = FUN_143907f50(param_1[5],&local_48);
  *(undefined4 *)param_1[4] = uVar5;
  piVar7 = (int *)param_1[4];
  if (*piVar7 == 0) {
    cVar4 = FUN_143901170(*(undefined8 *)param_1[7],&local_28);
    if ((cVar4 == '\0') ||
       (cVar4 = FUN_143900fe0(*(undefined8 *)param_1[7],&local_28), cVar4 != '\x01')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)param_1[6] = uVar8;
    piVar7 = (int *)param_1[6];
    if ((char)*piVar7 == '\0') {
      puVar3 = (undefined8 *)*param_1;
      *puVar3 = CONCAT44(fStack_34,local_38);
      *(float *)(puVar3 + 1) = local_30;
      puVar6 = (undefined8 *)FUN_1438f5df0(*(undefined8 *)(param_1[5] + 0x198),&local_38,*param_1);
      puVar3 = (undefined8 *)param_1[8];
      *puVar3 = *puVar6;
      uVar5 = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)(puVar3 + 1) = uVar5;
      return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
    }
  }
  return (ulonglong)piVar7 & 0xffffffffffffff00;
}



// FUNCTION 1439048c0 FUN_1439048c0 body=333 status=ok
// SIG undefined FUN_1439048c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1439048c0(undefined8 *param_1,int param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)local_28;
  if (ABS(param_3) < 1.1920929e-07) {
    return (DAT_1468387a8 ^ (ulonglong)local_28) & 0xffffffffffffff00;
  }
  pfVar2 = (float *)*param_1;
  bVar4 = 1;
  fVar8 = ABS(pfVar2[param_2] / param_3) + 1.1920929e-07;
  local_28[0] = *pfVar2 / fVar8;
  fVar1 = pfVar2[2];
  iVar6 = param_2 + 1;
  lVar7 = (longlong)
          (iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                   (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3);
  local_28[1] = pfVar2[1] / fVar8;
  local_28[2] = fVar1 / fVar8;
  if ((local_28[lVar7] < *(float *)(param_1[1] + lVar7 * 4)) ||
     (*(float *)(param_1[2] + lVar7 * 4) <= local_28[lVar7])) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  param_2 = param_2 + 2;
  lVar7 = (longlong)
          (param_2 +
          (param_2 / 3 + (param_2 >> 0x1f) +
          (int)(((longlong)param_2 / 3 + ((longlong)param_2 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3);
  if ((local_28[lVar7] < *(float *)(param_1[1] + lVar7 * 4)) ||
     (*(float *)(param_1[2] + lVar7 * 4) <= local_28[lVar7])) {
    bVar4 = 0;
  }
  if ((bool)(bVar5 & bVar4)) {
    puVar3 = (undefined8 *)param_1[3];
    *puVar3 = CONCAT44(pfVar2[1] / fVar8,*pfVar2 / fVar8);
    *(float *)(puVar3 + 1) = fVar1 / fVar8;
  }
  return (ulonglong)(bVar5 & bVar4);
}



// FUNCTION 143904a10 FUN_143904a10 body=93 status=ok
// SIG undefined FUN_143904a10(void)

undefined8 FUN_143904a10(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_1439042d0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*plVar1,param_4,uVar2);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1a0);
    }
  }
  return param_1;
}



// FUNCTION 143904a70 FUN_143904a70 body=2324 status=ok
// SIG undefined FUN_143904a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143904a70(longlong param_1,undefined8 param_2,float *param_3,float *param_4)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_2b8 [32];
  int local_298;
  longlong local_290;
  int *local_288;
  float local_280;
  float fStack_27c;
  float local_278;
  undefined8 local_268;
  float local_260;
  float *local_258;
  int local_250;
  int local_24c;
  undefined4 local_248;
  undefined8 local_238;
  float local_230;
  longlong *local_228;
  int local_220;
  float local_210;
  undefined8 local_208;
  float local_200;
  int local_1f8 [4];
  char local_1e8 [8];
  float local_1e0 [14];
  undefined8 local_1a8 [24];
  ulonglong local_e8;
  ulonglong uVar11;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  fVar25 = *param_3;
  fVar18 = param_3[1];
  fVar23 = param_3[2];
  fVar26 = *(float *)(param_1 + 0x160);
  fVar17 = *(float *)(param_1 + 0x164);
  fVar2 = *(float *)(param_1 + 0x168);
  local_258 = param_4;
  lVar5 = FNiagaraEmitterHandle::GetInstance(*(undefined8 *)(param_1 + 0x198));
  fVar22 = 0.0;
  fVar24 = 0.0;
  fVar21 = 0.0;
  fVar19 = 1.0 / ((float)*(int *)(param_1 + 0x88) * *(float *)(lVar5 + 0x14));
  fVar26 = (fVar25 - fVar26) * fVar19;
  fVar25 = (fVar18 - fVar17) * fVar19;
  fVar19 = (fVar23 - fVar2) * fVar19;
  if ((fVar26 != 0.0) || (fVar25 != 0.0)) {
    fVar24 = _guard_xfg_dispatch_icall_nop(fVar25 * fVar25 + fVar26 * fVar26 + 0.0);
    fVar18 = ABS(fVar24);
    if (0.0 <= fVar24) {
      fVar23 = 1.0;
    }
    else {
      fVar23 = -1.0;
    }
    if (10.0 <= fVar18) {
      fVar17 = _guard_xfg_dispatch_icall_nop((fVar18 - 10.0) + 1.3 + 12.0);
      fVar17 = ((fVar17 + fVar17) / 0.26236427 - 19.6) + 1.0;
    }
    else {
      fVar17 = _guard_xfg_dispatch_icall_nop(13.0 - fVar18);
      fVar17 = 3.0 - (fVar17 + fVar17) / 1.0986123;
    }
    fVar23 = (fVar17 + 1.7 + fVar18 / 20.0) * fVar23;
    fVar22 = (fVar26 * fVar23) / fVar24;
    fVar24 = (fVar25 * fVar23) / fVar24;
  }
  fVar25 = -1.0;
  if (fVar19 != 0.0) {
    fVar18 = ABS(fVar19);
    if (0.0 <= fVar19) {
      fVar25 = 1.0;
    }
    if (10.0 <= fVar18) {
      fVar23 = _guard_xfg_dispatch_icall_nop((fVar18 - 10.0) + 1.3 + 12.0);
      fVar23 = ((fVar23 + fVar23) / 0.26236427 - 19.6) + 1.0;
    }
    else {
      fVar23 = _guard_xfg_dispatch_icall_nop(13.0 - fVar18);
      fVar23 = 3.0 - (fVar23 + fVar23) / 1.0986123;
    }
    fVar21 = (fVar23 + 1.7 + fVar18 / 20.0) * fVar25;
  }
  local_278 = *(float *)(param_1 + 0x74);
  local_280 = *(float *)(param_1 + 0x7c);
  local_260 = fVar21 - local_278;
  fStack_27c = *(float *)(param_1 + 0x78);
  fVar22 = fVar22 - local_280;
  fVar24 = fVar24 - fStack_27c;
  FUN_14390a6f0(local_1e8);
  lVar10 = 0;
  local_200 = local_260;
  lVar12 = 3;
  local_208 = CONCAT44(fVar24,fVar22);
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  lVar16 = 3;
  local_1f8[2] = 0;
  lVar5 = lVar10;
  do {
    fVar25 = *(float *)((longlong)&local_208 + lVar5);
    fVar18 = _guard_xfg_dispatch_icall_nop(fVar25);
    *(int *)((longlong)local_1f8 + lVar5) = (int)fVar18;
    *(float *)((longlong)&local_208 + lVar5) = fVar25 - (float)(int)fVar18;
    lVar5 = lVar5 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  piVar6 = &DAT_14682cd54;
  do {
    iVar3 = piVar6[-1];
    local_1e8[lVar10] = '\x01';
    iVar15 = *piVar6;
    piVar1 = piVar6 + 1;
    piVar6 = piVar6 + 3;
    local_1e0[lVar10] =
         (1.0 - ABS((float)iVar3 - (float)local_208)) * (1.0 - ABS((float)iVar15 - local_208._4_4_))
         * (1.0 - ABS((float)*piVar1 - local_200));
    lVar10 = lVar10 + 1;
  } while ((longlong)piVar6 < 0x14682cdb4);
  puVar7 = local_1a8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    lVar12 = lVar12 + -1;
    puVar7 = puVar7 + 8;
  } while (lVar12 != 0);
  uVar4 = CONCAT44(fStack_27c,local_280);
  local_288 = &DAT_14682cd58;
  puVar7 = local_1a8;
  local_290 = 0;
  do {
    piVar6 = local_288;
    lVar5 = local_290;
    uVar13 = 0;
    local_290 = lVar5;
    local_288 = piVar6;
    if (local_1e8[local_290] != '\0') {
      local_260 = (float)(local_1f8[2] + *local_288);
      local_230 = local_278;
      local_268 = CONCAT44((float)(local_1f8[1] + local_288[-1]),
                           (float)(local_1f8[0] + local_288[-2]));
      local_238 = uVar4;
      local_210 = local_260;
      FUN_143905f40(param_1,&local_250,&local_268,&local_238);
      FUN_143909890(&local_228,*(undefined8 *)(param_1 + 400),param_1,local_248);
      iVar3 = *(int *)((longlong)local_228 + 0x14);
      if (iVar3 == 0) {
        local_1e8[lVar5] = '\0';
        local_290 = lVar5;
        local_288 = piVar6;
      }
      else {
        iVar15 = *(int *)(param_1 + 0xa0);
        uVar11 = uVar13;
        if (3 < iVar15) {
          local_298 = iVar15 + -3;
          iVar14 = 2;
          lVar5 = 8;
          local_208 = (ulonglong)((iVar15 - 4U >> 2) + 1) << 2;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x180) + -4 + lVar5) -
                *(int *)(*(longlong *)(param_1 + 0x180) + -8 + lVar5) < 1) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = ((float)*(byte *)((longlong)
                                         (*(int *)(param_1 + 0x90) * local_24c +
                                         iVar3 * local_220 + local_250 +
                                         (int)local_228[2] * (int)uVar13) + *local_228) -
                       *(float *)(lVar5 + -8 + *(longlong *)(param_1 + 0x20))) *
                       *(float *)(*(longlong *)(param_1 + 8) + -8 + lVar5);
            }
            lVar10 = *(longlong *)(param_1 + 0x180);
            *(float *)((longlong)puVar7 + lVar5 + -8) = fVar25;
            if (*(int *)(lVar5 + lVar10) - *(int *)(lVar10 + -4 + lVar5) < 1) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = ((float)*(byte *)((longlong)
                                         (*(int *)(param_1 + 0x90) * local_24c +
                                         iVar3 * local_220 + local_250 +
                                         (iVar14 + -1) * (int)local_228[2]) + *local_228) -
                       *(float *)(lVar5 + -4 + *(longlong *)(param_1 + 0x20))) *
                       *(float *)(*(longlong *)(param_1 + 8) + -4 + lVar5);
            }
            lVar10 = *(longlong *)(param_1 + 0x180);
            *(float *)((longlong)puVar7 + lVar5 + -4) = fVar25;
            if (*(int *)(lVar10 + 4 + lVar5) - *(int *)(lVar5 + lVar10) < 1) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = ((float)*(byte *)((longlong)
                                         (*(int *)(param_1 + 0x90) * local_24c +
                                         iVar3 * local_220 + local_250 + (int)local_228[2] * iVar14)
                                        + *local_228) -
                       *(float *)(lVar5 + *(longlong *)(param_1 + 0x20))) *
                       *(float *)(lVar5 + *(longlong *)(param_1 + 8));
            }
            lVar10 = *(longlong *)(param_1 + 0x180);
            *(float *)((longlong)puVar7 + lVar5) = fVar25;
            if (*(int *)(lVar5 + 8 + lVar10) - *(int *)(lVar10 + 4 + lVar5) < 1) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = ((float)*(byte *)((longlong)
                                         (*(int *)(param_1 + 0x90) * local_24c +
                                         iVar3 * local_220 + local_250 +
                                         (iVar14 + 1) * (int)local_228[2]) + *local_228) -
                       *(float *)(lVar5 + 4 + *(longlong *)(param_1 + 0x20))) *
                       *(float *)(*(longlong *)(param_1 + 8) + 4 + lVar5);
            }
            *(float *)((longlong)puVar7 + lVar5 + 4) = fVar25;
            uVar9 = (int)uVar13 + 4;
            uVar13 = (ulonglong)uVar9;
            lVar5 = lVar5 + 0x10;
            iVar14 = iVar14 + 4;
          } while ((int)uVar9 < local_298);
          iVar15 = *(int *)(param_1 + 0xa0);
          uVar11 = local_208;
        }
        if ((int)uVar13 < iVar15) {
          lVar5 = uVar11 * 4;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0x180) + 4 + lVar5) -
                *(int *)(*(longlong *)(param_1 + 0x180) + lVar5) < 1) {
              fVar25 = 0.0;
            }
            else {
              fVar25 = ((float)*(byte *)((longlong)
                                         (*(int *)(param_1 + 0x90) * local_24c +
                                         iVar3 * local_220 + local_250 +
                                         (int)local_228[2] * (int)uVar13) + *local_228) -
                       *(float *)(lVar5 + *(longlong *)(param_1 + 0x20))) *
                       *(float *)(lVar5 + *(longlong *)(param_1 + 8));
            }
            *(float *)((longlong)puVar7 + lVar5) = fVar25;
            uVar9 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar9;
            lVar5 = lVar5 + 4;
          } while ((int)uVar9 < iVar15);
        }
      }
    }
    local_290 = local_290 + 1;
    local_288 = local_288 + 3;
    puVar7 = puVar7 + 3;
  } while ((longlong)local_288 < 0x14682cdb8);
  auVar20 = ZEXT812(0x34000000);
  if (local_1e8[0] != '\0') {
    auVar20._4_8_ = 0;
    auVar20._0_4_ = local_1e0[0] + 1.1920929e-07;
  }
  if (local_1e8[1] != '\0') {
    auVar20._4_8_ = auVar20._4_8_;
    auVar20._0_4_ = auVar20._0_4_ + local_1e0[1];
  }
  if (local_1e8[2] != '\0') {
    auVar20._4_8_ = auVar20._4_8_;
    auVar20._0_4_ = auVar20._0_4_ + local_1e0[2];
  }
  if (local_1e8[3] != '\0') {
    auVar20._4_8_ = auVar20._4_8_;
    auVar20._0_4_ = auVar20._0_4_ + local_1e0[3];
  }
  if (local_1e8[4] != '\0') {
    auVar20._4_8_ = auVar20._4_8_;
    auVar20._0_4_ = auVar20._0_4_ + local_1e0[4];
  }
  if (local_1e8[5] != '\0') {
    auVar20._4_8_ = auVar20._4_8_;
    auVar20._0_4_ = auVar20._0_4_ + local_1e0[5];
  }
  if (local_1e8[6] != '\0') {
    auVar20._4_8_ = auVar20._4_8_;
    auVar20._0_4_ = auVar20._0_4_ + local_1e0[6];
  }
  if (local_1e8[7] != '\0') {
    auVar20._4_8_ = auVar20._4_8_;
    auVar20._0_4_ = auVar20._0_4_ + local_1e0[7];
  }
  lVar5 = (longlong)local_1a8 - (longlong)local_258;
  local_258[0] = 0.0;
  local_258[1] = 0.0;
  local_258[2] = 0.0;
  local_258[3] = 0.0;
  local_258[4] = 0.0;
  local_258[5] = 0.0;
  uVar13 = 0;
  do {
    if ((local_1e8[uVar13] != '\0') && (fVar25 = local_1e0[uVar13], 0 < *(int *)(param_1 + 0xa0))) {
      pfVar8 = local_258;
      uVar11 = 0;
      do {
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
        *pfVar8 = fVar25 * (1.0 / auVar20._0_4_) * *(float *)(lVar5 + (longlong)pfVar8) + *pfVar8;
        pfVar8 = pfVar8 + 1;
      } while ((int)uVar9 < *(int *)(param_1 + 0xa0));
    }
    uVar13 = uVar13 + 1;
    lVar5 = lVar5 + 0x18;
  } while ((longlong)uVar13 < 8);
  return 1;
}



// FUNCTION 143905390 FUN_143905390 body=2167 status=ok
// SIG undefined FUN_143905390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_143905390(longlong param_1,undefined8 param_2,float *param_3,float *param_4,undefined4 param_5,
             undefined1 param_6,undefined1 param_7,longlong param_8,undefined4 param_9,
             float *param_10)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  undefined1 uVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_228 [32];
  float local_208;
  char *local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  char local_1e8 [4];
  float local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  int *local_1c8;
  float local_1c0;
  longlong local_1b8;
  float *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int local_198;
  char local_190 [8];
  float local_188 [8];
  int local_168;
  int local_164;
  int local_160;
  float local_158 [6];
  float local_140;
  float local_128;
  float local_110;
  float local_f8;
  float local_e0;
  float local_c8;
  float local_b0;
  ulonglong local_98;
  ulonglong uVar11;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1d0 = param_3[2] - *(float *)(param_1 + 0x168);
  fVar21 = *(float *)(param_1 + 0x16c);
  fVar23 = *(float *)(param_1 + 0x174);
  fVar1 = *(float *)(param_1 + 0x170);
  local_200 = local_1e8;
  local_1d8 = CONCAT44(param_3[1] - *(float *)(param_1 + 0x164),
                       *param_3 - *(float *)(param_1 + 0x160));
  local_1b8 = param_8;
  local_1e8[0] = '\0';
  local_208 = fVar1;
  local_1c0 = local_1d0;
  local_1b0 = param_4;
  local_1a8 = param_1;
  pfVar7 = (float *)FUN_143908200(&local_1c8,&local_1d8,fVar23,fVar21);
  fVar20 = *(float *)(param_1 + 0x160) + *pfVar7;
  fVar19 = *(float *)(param_1 + 0x164) + pfVar7[1];
  local_1d0 = *(float *)(param_1 + 0x168) + pfVar7[2];
  local_1d8 = CONCAT44(fVar19,fVar20);
  if (param_10 != (float *)0x0) {
    if (local_1e8[0] == '\0') {
      fVar19 = fVar19 - *(float *)(param_1 + 0x164);
      fVar20 = fVar20 - *(float *)(param_1 + 0x160);
      fVar22 = local_1d0 - *(float *)(param_1 + 0x168);
      fVar19 = _guard_xfg_dispatch_icall_nop(fVar19 * fVar19 + fVar20 * fVar20);
      local_1e4 = fVar22 / fVar1;
      fVar22 = fVar22 / fVar21;
      fVar19 = fVar19 / fVar23;
      local_1e0 = CONCAT44(local_1e0._4_4_,fVar22) ^ 0x80000000;
      pfVar7 = (float *)&local_1e0;
      if (-fVar22 <= local_1e4) {
        pfVar7 = &local_1e4;
      }
      if (fVar19 < *pfVar7) {
        fVar19 = *pfVar7;
      }
      fVar21 = (fVar19 - 0.75) * 4.0;
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      *param_10 = fVar21;
    }
    else {
      *param_10 = 1.0;
    }
  }
  FUN_14390a6f0(local_190);
  local_1f0 = param_8;
  local_1f8 = param_7;
  local_200 = (char *)CONCAT71(local_200._1_7_,param_6);
  local_208 = (float)param_5;
  cVar5 = FUN_143906dc0(param_1,param_2,&local_1d8,local_190);
  uVar6 = 0;
  if (cVar5 != '\0') {
    if (param_8 != 0) {
      FUN_1438f96d0(param_8,param_9,local_190);
    }
    lVar10 = 3;
    pfVar7 = local_158;
    do {
      pfVar7[0] = 0.0;
      pfVar7[1] = 0.0;
      pfVar7[2] = 0.0;
      pfVar7[3] = 0.0;
      pfVar7[4] = 0.0;
      pfVar7[5] = 0.0;
      pfVar7[6] = 0.0;
      pfVar7[7] = 0.0;
      pfVar7[8] = 0.0;
      pfVar7[9] = 0.0;
      pfVar7[10] = 0.0;
      pfVar7[0xb] = 0.0;
      pfVar7[0xc] = 0.0;
      pfVar7[0xd] = 0.0;
      pfVar7[0xe] = 0.0;
      pfVar7[0xf] = 0.0;
      lVar10 = lVar10 + -1;
      pfVar7 = pfVar7 + 0x10;
    } while (lVar10 != 0);
    local_1e0 = 0;
    local_1c8 = &DAT_14682cd58;
    pfVar7 = local_158;
    do {
      piVar4 = local_1c8;
      lVar10 = local_1e0;
      local_1e0 = lVar10;
      local_1c8 = piVar4;
      if (local_190[local_1e0] != '\0') {
        iVar17 = local_168 + local_1c8[-2];
        iVar12 = local_164 + local_1c8[-1];
        if (((((iVar17 < 0) || (iVar12 < 0)) || (local_160 + *local_1c8 < 0)) ||
            ((*(int *)(param_1 + 0x90) <= iVar17 || (*(int *)(param_1 + 0x94) <= iVar12)))) ||
           (*(int *)(param_1 + 0x98) <= local_160 + *local_1c8)) {
          local_190[local_1e0] = '\0';
        }
        else {
          FUN_143909890(&local_1a0,*(undefined8 *)(param_1 + 400));
          iVar2 = *(int *)((longlong)local_1a0 + 0x14);
          if (iVar2 == 0) {
            local_190[lVar10] = '\0';
            local_1e0 = lVar10;
            local_1c8 = piVar4;
          }
          else {
            iVar16 = *(int *)(param_1 + 0xa0);
            iVar14 = 0;
            lVar10 = 0;
            if (3 < iVar16) {
              local_1e4 = (float)(iVar16 + -3);
              iVar15 = 2;
              lVar10 = 8;
              local_1d8 = (ulonglong)((iVar16 - 4U >> 2) + 1) << 2;
              do {
                if (*(int *)(*(longlong *)(param_1 + 0x180) + -4 + lVar10) -
                    *(int *)(*(longlong *)(param_1 + 0x180) + -8 + lVar10) < 1) {
                  fVar21 = 0.0;
                }
                else {
                  fVar21 = ((float)*(byte *)((longlong)
                                             (*(int *)(param_1 + 0x90) * iVar12 +
                                             iVar2 * local_198 + iVar17 + (int)local_1a0[2] * iVar14
                                             ) + *local_1a0) -
                           *(float *)(lVar10 + -8 + *(longlong *)(param_1 + 0x20))) *
                           *(float *)(*(longlong *)(param_1 + 8) + -8 + lVar10);
                }
                lVar3 = *(longlong *)(param_1 + 0x180);
                *(float *)(lVar10 + -8 + (longlong)pfVar7) = fVar21;
                if (*(int *)(lVar10 + lVar3) - *(int *)(lVar3 + -4 + lVar10) < 1) {
                  fVar21 = 0.0;
                }
                else {
                  fVar21 = ((float)*(byte *)((longlong)
                                             (*(int *)(param_1 + 0x90) * iVar12 +
                                             iVar2 * local_198 + iVar17 +
                                             (iVar15 + -1) * (int)local_1a0[2]) + *local_1a0) -
                           *(float *)(lVar10 + -4 + *(longlong *)(param_1 + 0x20))) *
                           *(float *)(*(longlong *)(param_1 + 8) + -4 + lVar10);
                }
                lVar3 = *(longlong *)(param_1 + 0x180);
                *(float *)(lVar10 + -4 + (longlong)pfVar7) = fVar21;
                if (*(int *)(lVar10 + 4 + lVar3) - *(int *)(lVar10 + lVar3) < 1) {
                  fVar21 = 0.0;
                }
                else {
                  fVar21 = ((float)*(byte *)((longlong)
                                             (*(int *)(param_1 + 0x90) * iVar12 +
                                             iVar2 * local_198 + iVar17 + (int)local_1a0[2] * iVar15
                                             ) + *local_1a0) -
                           *(float *)(lVar10 + *(longlong *)(param_1 + 0x20))) *
                           *(float *)(lVar10 + *(longlong *)(param_1 + 8));
                }
                lVar3 = *(longlong *)(param_1 + 0x180);
                *(float *)(lVar10 + (longlong)pfVar7) = fVar21;
                if (*(int *)(lVar10 + 8 + lVar3) - *(int *)(lVar10 + 4 + lVar3) < 1) {
                  fVar21 = 0.0;
                }
                else {
                  fVar21 = ((float)*(byte *)((longlong)
                                             (*(int *)(param_1 + 0x90) * iVar12 +
                                             iVar2 * local_198 + iVar17 +
                                             (iVar15 + 1) * (int)local_1a0[2]) + *local_1a0) -
                           *(float *)(lVar10 + 4 + *(longlong *)(param_1 + 0x20))) *
                           *(float *)(lVar10 + 4 + *(longlong *)(param_1 + 8));
                }
                *(float *)(lVar10 + 4 + (longlong)pfVar7) = fVar21;
                iVar14 = iVar14 + 4;
                lVar10 = lVar10 + 0x10;
                iVar15 = iVar15 + 4;
              } while (iVar14 < iVar16 + -3);
              iVar16 = *(int *)(param_1 + 0xa0);
              lVar10 = local_1d8;
            }
            if (iVar14 < iVar16) {
              lVar10 = lVar10 * 4;
              do {
                if (*(int *)(*(longlong *)(param_1 + 0x180) + 4 + lVar10) -
                    *(int *)(*(longlong *)(param_1 + 0x180) + lVar10) < 1) {
                  fVar21 = 0.0;
                }
                else {
                  fVar21 = ((float)*(byte *)((longlong)
                                             (*(int *)(param_1 + 0x90) * iVar12 +
                                             iVar2 * local_198 + iVar17 + (int)local_1a0[2] * iVar14
                                             ) + *local_1a0) -
                           *(float *)(lVar10 + *(longlong *)(param_1 + 0x20))) *
                           *(float *)(*(longlong *)(param_1 + 8) + lVar10);
                }
                *(float *)((longlong)pfVar7 + lVar10) = fVar21;
                iVar14 = iVar14 + 1;
                lVar10 = lVar10 + 4;
              } while (iVar14 < iVar16);
            }
          }
        }
      }
      local_1c8 = local_1c8 + 3;
      pfVar7 = pfVar7 + 6;
      local_1e0 = local_1e0 + 1;
    } while ((longlong)local_1c8 < 0x14682cdb8);
    if ((local_1b8 != 0) && (local_1e8[0] != '\0')) {
      FUN_1438f95c0(local_1b8,0,L"Receiver extrapolation performed.");
    }
    lVar10 = local_1b8;
    fVar21 = -3.4028235e+38;
    if ((local_190[0] != '\0') && (-3.4028235e+38 < local_158[0])) {
      fVar21 = local_158[0];
    }
    if ((local_190[1] != '\0') && (fVar21 < local_140)) {
      fVar21 = local_140;
    }
    if ((local_190[2] != '\0') && (fVar21 < local_128)) {
      fVar21 = local_128;
    }
    if ((local_190[3] != '\0') && (fVar21 < local_110)) {
      fVar21 = local_110;
    }
    if ((local_190[4] != '\0') && (fVar21 < local_f8)) {
      fVar21 = local_f8;
    }
    if ((local_190[5] != '\0') && (fVar21 < local_e0)) {
      fVar21 = local_e0;
    }
    if ((local_190[6] != '\0') && (fVar21 < local_c8)) {
      fVar21 = local_c8;
    }
    if ((local_190[7] != '\0') && (fVar21 < local_b0)) {
      fVar21 = local_b0;
    }
    pfVar7 = local_158;
    uVar18 = 0;
    uVar13 = uVar18;
    do {
      if (local_190[uVar13] != '\0') {
        fVar23 = fVar21 - *pfVar7;
        local_1e4 = fVar23;
        if (20.0 <= fVar23) {
          if (lVar10 != 0) {
            FUN_1438f95c0(lVar10,1,L"Receiver contrast hack applied.");
          }
          pfVar8 = &local_1e4;
          if (fVar23 < 20.0) {
            pfVar8 = (float *)&DAT_145c5cb94;
          }
          fVar23 = *pfVar8;
          if (40.0 < fVar23) {
            fVar23 = 40.0;
          }
          fVar23 = (40.0 - fVar23) / 20.0;
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          local_188[uVar13] = fVar23 * local_188[uVar13];
        }
      }
      uVar13 = uVar13 + 1;
      pfVar7 = pfVar7 + 6;
    } while ((longlong)uVar13 < 8);
    fVar21 = 1.1920929e-07;
    if (local_190[0] != '\0') {
      fVar21 = local_188[0] + 1.1920929e-07;
    }
    if (local_190[1] != '\0') {
      fVar21 = fVar21 + local_188[1];
    }
    if (local_190[2] != '\0') {
      fVar21 = fVar21 + local_188[2];
    }
    if (local_190[3] != '\0') {
      fVar21 = fVar21 + local_188[3];
    }
    if (local_190[4] != '\0') {
      fVar21 = fVar21 + local_188[4];
    }
    if (local_190[5] != '\0') {
      fVar21 = fVar21 + local_188[5];
    }
    if (local_190[6] != '\0') {
      fVar21 = fVar21 + local_188[6];
    }
    if (local_190[7] != '\0') {
      fVar21 = fVar21 + local_188[7];
    }
    lVar10 = (longlong)local_158 - (longlong)local_1b0;
    local_1b0[0] = 0.0;
    local_1b0[1] = 0.0;
    local_1b0[2] = 0.0;
    local_1b0[3] = 0.0;
    local_1b0[4] = 0.0;
    local_1b0[5] = 0.0;
    uVar13 = uVar18;
    do {
      if ((local_190[uVar13] != '\0') &&
         (fVar23 = local_188[uVar13], 0 < *(int *)(local_1a8 + 0xa0))) {
        pfVar7 = local_1b0;
        uVar11 = uVar18;
        do {
          uVar9 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar9;
          *pfVar7 = fVar23 * (1.0 / fVar21) * *(float *)(lVar10 + (longlong)pfVar7) + *pfVar7;
          pfVar7 = pfVar7 + 1;
        } while ((int)uVar9 < *(int *)(local_1a8 + 0xa0));
      }
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((longlong)uVar13 < 8);
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143905c10 FUN_143905c10 body=406 status=ok
// SIG undefined FUN_143905c10(void)

undefined8 FUN_143905c10(longlong param_1,int param_2,longlong *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  iVar2 = *(int *)(param_1 + 0x94);
  iVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x90);
  lVar7 = 0;
  if (0 < (longlong)iVar1) {
    do {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x180) + 4 + lVar7 * 4) -
              *(int *)(*(longlong *)(param_1 + 0x180) + lVar7 * 4)) {
        plVar4 = (longlong *)*param_3;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_88 = (longlong)
                   *(int *)(*(longlong *)(param_1 + 0x180) +
                           (longlong)(*(int *)(param_1 + 0x18c) * param_2 + iVar6) * 4) +
                   *(longlong *)(param_1 + 0x178);
        local_80 = *(int *)(*(longlong *)(param_1 + 0x180) +
                           (longlong)(*(int *)(param_1 + 0x18c) * param_2 + 1 + iVar6) * 4) -
                   *(int *)(*(longlong *)(param_1 + 0x180) +
                           (longlong)(*(int *)(param_1 + 0x18c) * param_2 + iVar6) * 4);
        local_78 = (longlong)
                   ((int)plVar4[2] * iVar6 + *(int *)((longlong)plVar4 + 0x14) * (int)param_3[1]) +
                   *plVar4;
        local_70 = iVar2 * iVar3;
        FUN_1400037e0(&local_88,0xfffffff5,"1.2.7");
        iVar5 = FUN_140002050(&local_88);
        if (iVar5 != 1) {
          return 0;
        }
        FUN_140003780(&local_88);
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
  }
  if (param_4 != '\0') {
    FUN_143907bf0(param_1,param_3);
  }
  return 1;
}



// FUNCTION 143905db0 FUN_143905db0 body=91 status=ok
// SIG undefined FUN_143905db0(void)

undefined8 * FUN_143905db0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0xac);
  uVar2 = *(undefined8 *)(param_1 + 0xb4);
  uVar3 = *(undefined8 *)(param_1 + 0xbc);
  *param_2 = *(undefined8 *)(param_1 + 0xa4);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xc4);
  uVar4 = *(undefined8 *)(param_1 + 0xcc);
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xd4);
  uVar3 = *(undefined8 *)(param_1 + 0xdc);
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  uVar1 = *(undefined8 *)(param_1 + 0xe4);
  uVar4 = *(undefined8 *)(param_1 + 0xec);
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xf4);
  uVar3 = *(undefined8 *)(param_1 + 0xfc);
  param_2[8] = uVar1;
  param_2[9] = uVar4;
  uVar1 = *(undefined8 *)(param_1 + 0x104);
  uVar4 = *(undefined8 *)(param_1 + 0x10c);
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x114);
  uVar3 = *(undefined8 *)(param_1 + 0x11c);
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar4;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return param_2;
}



// FUNCTION 143905e10 GetOrigin body=30 status=ok
// SIG undefined GetOrigin(void)

undefined4 * FLightSceneProxy::GetOrigin(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x90);
  param_2[1] = *(undefined4 *)(param_1 + 0x94);
  param_2[2] = *(undefined4 *)(param_1 + 0x98);
  return param_2;
}



// FUNCTION 143905e30 FUN_143905e30 body=268 status=ok
// SIG undefined FUN_143905e30(void)

float * FUN_143905e30(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  lVar10 = FNiagaraEmitterHandle::GetInstance(*(undefined8 *)(param_1 + 0x198));
  iVar7 = *(int *)(param_1 + 0x50);
  iVar8 = *(int *)(param_1 + 0x54);
  iVar9 = *(int *)(param_1 + 0x58);
  fVar1 = *(float *)(lVar10 + 0x14);
  fVar2 = *(float *)(lVar10 + 0x18);
  fVar3 = *(float *)(lVar10 + 0x1c);
  fVar4 = *(float *)(lVar10 + 0x20);
  lVar10 = FNiagaraEmitterHandle::GetInstance(*(undefined8 *)(param_1 + 0x198));
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar11 = (float)*(int *)(param_1 + 0x8c) * *(float *)(lVar10 + 0x14);
  fVar12 = 1.0 / ((float)*(int *)(param_1 + 0x88) * *(float *)(lVar10 + 0x14));
  *param_2 = ((*param_3 - ((float)iVar7 * fVar1 + fVar2)) - fVar11) * fVar12;
  param_2[1] = ((fVar5 - ((float)iVar8 * fVar1 + fVar3)) - fVar11) * fVar12;
  param_2[2] = ((fVar6 - ((float)iVar9 * fVar1 + fVar4)) - fVar11) * fVar12;
  return param_2;
}



// FUNCTION 143905f40 FUN_143905f40 body=801 status=ok
// SIG undefined FUN_143905f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_143905f40(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  float *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  float local_a0;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar2 = (int)param_3[1];
  iVar4 = (int)*param_3;
  iVar3 = (int)param_3[2];
  if ((((-1 < iVar4) && (-1 < iVar2)) && (-1 < iVar3)) &&
     (((iVar4 < *(int *)(param_1 + 0x90) && (iVar2 < *(int *)(param_1 + 0x94))) &&
      (iVar3 < *(int *)(param_1 + 0x98))))) {
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    goto LAB_143906238;
  }
  local_80 = param_4[2];
  fVar5 = param_4[1];
  local_70 = local_80 + 0.0;
  fVar6 = *param_4;
  fVar8 = fVar6 + 0.0;
  fVar7 = *param_3;
  local_78 = CONCAT44(fVar5 + 0.0,fVar8);
  local_90 = local_80 + param_3[2];
  local_80 = local_80 + (float)*(int *)(param_1 + 0x98);
  local_88 = CONCAT44(fVar5 + (float)*(int *)(param_1 + 0x94),
                      fVar6 + (float)*(int *)(param_1 + 0x90));
  *(ulonglong *)param_3 = CONCAT44(fVar5 + param_3[1],fVar6 + fVar7);
  param_3[2] = local_90;
  local_c0 = &local_78;
  local_b8 = &local_88;
  local_b0 = &local_98;
  local_98 = CONCAT44(fVar5 + param_3[1],fVar6 + fVar7);
  local_c8 = param_3;
  if (fVar8 < *param_3 || fVar8 == *param_3) {
LAB_1439060d8:
    if ((float)local_88 <= *param_3) {
      cVar1 = FUN_1439048c0(&local_c8,0);
      if (cVar1 != '\0') goto LAB_14390616d;
    }
    if (param_3[1] <= local_78._4_4_ && local_78._4_4_ != param_3[1]) {
      cVar1 = FUN_1439048c0(&local_c8,1);
      if (cVar1 != '\0') goto LAB_14390616d;
    }
    if (local_88._4_4_ <= param_3[1]) {
      cVar1 = FUN_1439048c0(&local_c8,1);
      if (cVar1 != '\0') goto LAB_14390616d;
    }
    if (param_3[2] <= local_70 && local_70 != param_3[2]) {
      cVar1 = FUN_1439048c0(&local_c8,2);
      if (cVar1 != '\0') goto LAB_14390616d;
    }
    if (local_80 <= param_3[2]) {
      FUN_1439048c0(&local_c8,2);
    }
  }
  else {
    cVar1 = FUN_1439048c0(&local_c8,0,fVar8);
    if (cVar1 == '\0') goto LAB_1439060d8;
  }
LAB_14390616d:
  local_98._0_4_ = (float)local_98 - *param_4;
  local_98._4_4_ = local_98._4_4_ - param_4[1];
  local_a0 = local_90 - param_4[2];
  local_90 = local_a0;
  fVar5 = (float)roundf();
  fVar6 = (float)roundf(local_98._4_4_);
  fVar7 = (float)roundf((float)local_98);
  iVar4 = (int)fVar7;
  iVar2 = (int)fVar6;
  iVar3 = (int)fVar5;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (*(int *)(param_1 + 0x90) <= iVar4) {
    iVar4 = *(int *)(param_1 + 0x90) + -1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (*(int *)(param_1 + 0x94) <= iVar2) {
    iVar2 = *(int *)(param_1 + 0x94) + -1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (*(int *)(param_1 + 0x98) <= iVar3) {
    iVar3 = *(int *)(param_1 + 0x98) + -1;
  }
  param_2[1] = iVar2;
  param_2[2] = iVar3;
LAB_143906238:
  *param_2 = iVar4;
  return param_2;
}



// FUNCTION 143906270 FUN_143906270 body=2851 status=ok
// SIG undefined FUN_143906270(void)

undefined8 *
FUN_143906270(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  undefined1 *puVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_res20;
  char local_318 [4];
  int local_314;
  uint local_310 [2];
  undefined8 *local_308;
  undefined8 *local_300;
  longlong local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  undefined4 local_2d0;
  int local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  longlong **local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 local_268;
  undefined8 uStack_260;
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
  undefined4 local_228;
  longlong local_218 [3];
  longlong local_200 [3];
  longlong local_1e8;
  int local_1e0;
  int local_1dc;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined1 local_180 [24];
  undefined1 local_168 [32];
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
  
  local_188 = 0xfffffffffffffffe;
  iVar25 = 0;
  local_2f0 = 0;
  local_308 = (undefined8 *)0x0;
  local_2f8 = 0;
  local_2e8 = 0x20000;
  local_310[0] = 0;
  local_314 = 0;
  local_2b8 = local_310;
  local_2b0 = &local_314;
  local_2a8 = &local_308;
  local_2a0 = &local_2e8;
  local_298 = &param_6;
  local_290 = &local_res10;
  local_318[0] = '\x01';
  local_300 = (undefined8 *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  std::vector<unsigned_char,std::allocator<unsigned_char>_>::resize(&local_308,0x20000);
  (**(code **)(*local_res10 + 0x20))(local_res10,param_6 & 0xffffffff);
  local_310[0] = (**(code **)(*local_res10 + 0x10))(local_res10,local_308,1,local_2e8);
  local_314 = 0;
  param_6 = param_6 + (longlong)(int)local_310[0];
  if (local_310[0] < 0x44) {
    *param_1 = 0;
    if (local_308 == (undefined8 *)0x0) {
      return param_1;
    }
    puVar20 = local_308;
    if (0xfff < (ulonglong)(local_2f8 - (longlong)local_308)) {
      if (((ulonglong)local_308 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar20 = (undefined8 *)local_308[-1];
      if (local_308 <= puVar20) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)local_308 - (longlong)puVar20) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)local_308 - (longlong)puVar20)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_143906d5c:
    FMemory::operator_delete(puVar20);
  }
  else {
    local_268 = *local_308;
    uStack_260 = local_308[1];
    local_258 = local_308[2];
    uStack_250 = local_308[3];
    local_248 = *(undefined4 *)(local_308 + 4);
    uStack_244 = *(undefined4 *)((longlong)local_308 + 0x24);
    uStack_240 = *(undefined4 *)(local_308 + 5);
    uStack_23c = *(undefined4 *)((longlong)local_308 + 0x2c);
    local_238 = *(undefined4 *)(local_308 + 6);
    uStack_234 = *(undefined4 *)((longlong)local_308 + 0x34);
    uStack_230 = *(undefined4 *)(local_308 + 7);
    uStack_22c = *(undefined4 *)((longlong)local_308 + 0x3c);
    local_228 = *(undefined4 *)(local_308 + 8);
    local_314 = 0x44;
    uVar24 = local_310[0] - 0x44;
    iVar21 = 0x44;
    if (uVar24 < 0x1c) {
      local_300 = local_308;
      std::vector<unsigned_char,std::allocator<unsigned_char>_>::resize(&local_308,local_2e8);
      param_6 = param_6 - (longlong)(int)uVar24;
      (**(code **)(*local_res10 + 0x20))();
      local_310[0] = (**(code **)(*local_res10 + 0x10))(local_res10,local_308,1,local_2e8);
      local_314 = 0;
      param_6 = param_6 + (longlong)(int)local_310[0];
      iVar21 = 0;
      if (local_310[0] < 0x1c) {
        *param_1 = 0;
        if (local_308 == (undefined8 *)0x0) {
          return param_1;
        }
        puVar20 = local_308;
        if (0xfff < (ulonglong)(local_2f8 - (longlong)local_308)) {
          if (((ulonglong)local_308 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          puVar20 = (undefined8 *)local_308[-1];
          if (local_308 <= puVar20) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if ((ulonglong)((longlong)local_308 - (longlong)puVar20) < 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if (0x27 < (ulonglong)((longlong)local_308 - (longlong)puVar20)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_143906d5c;
      }
    }
    lVar16 = (longlong)iVar21;
    puVar1 = (undefined4 *)(lVar16 + (longlong)local_308);
    local_288 = *puVar1;
    uStack_284 = puVar1[1];
    uStack_280 = puVar1[2];
    uStack_27c = puVar1[3];
    local_278 = *(undefined8 *)(lVar16 + 0x10 + (longlong)local_308);
    iVar27 = *(int *)(lVar16 + 0x18 + (longlong)local_308);
    puVar23 = (undefined1 *)(longlong)iVar27;
    local_314 = iVar21 + 0x1c;
    uVar24 = local_310[0] - local_314;
    iVar21 = local_314;
    local_2e0 = iVar27;
    if (uVar24 < 4) {
      local_300 = local_308;
      std::vector<unsigned_char,std::allocator<unsigned_char>_>::resize(&local_308,local_2e8);
      param_6 = param_6 - (longlong)(int)uVar24;
      (**(code **)(*local_res10 + 0x20))();
      local_310[0] = (**(code **)(*local_res10 + 0x10))(local_res10,local_308,1,local_2e8);
      local_314 = 0;
      param_6 = param_6 + (longlong)(int)local_310[0];
      iVar21 = 0;
      if (local_310[0] < 4) {
        *param_1 = 0;
        if (local_308 == (undefined8 *)0x0) {
          return param_1;
        }
        puVar20 = local_308;
        if (0xfff < (ulonglong)(local_2f8 - (longlong)local_308)) {
          if (((ulonglong)local_308 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          puVar20 = (undefined8 *)local_308[-1];
          if (local_308 <= puVar20) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if ((ulonglong)((longlong)local_308 - (longlong)puVar20) < 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if (0x27 < (ulonglong)((longlong)local_308 - (longlong)puVar20)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_143906d5c;
      }
    }
    local_2d0 = *(undefined4 *)((longlong)iVar21 + (longlong)local_308);
    local_314 = iVar21 + 4;
    uVar24 = local_310[0] - local_314;
    iVar21 = local_314;
    if (uVar24 < 0x80) {
      local_300 = local_308;
      std::vector<unsigned_char,std::allocator<unsigned_char>_>::resize(&local_308,local_2e8);
      param_6 = param_6 - (longlong)(int)uVar24;
      (**(code **)(*local_res10 + 0x20))();
      local_310[0] = (**(code **)(*local_res10 + 0x10))(local_res10,local_308,1,local_2e8);
      local_314 = 0;
      param_6 = param_6 + (longlong)(int)local_310[0];
      iVar21 = 0;
      if (local_310[0] < 0x80) {
        *param_1 = 0;
        if (local_308 == (undefined8 *)0x0) {
          return param_1;
        }
        puVar20 = local_308;
        if (0xfff < (ulonglong)(local_2f8 - (longlong)local_308)) {
          if (((ulonglong)local_308 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          puVar20 = (undefined8 *)local_308[-1];
          if (local_308 <= puVar20) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if ((ulonglong)((longlong)local_308 - (longlong)puVar20) < 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          if (0x27 < (ulonglong)((longlong)local_308 - (longlong)puVar20)) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_143906d5c;
      }
    }
    lVar16 = (longlong)iVar21;
    uVar18 = *(undefined8 *)(lVar16 + (longlong)local_308);
    uVar19 = ((undefined8 *)(lVar16 + (longlong)local_308))[1];
    puVar20 = (undefined8 *)(lVar16 + 0x10 + (longlong)local_308);
    uVar2 = *puVar20;
    uVar3 = puVar20[1];
    puVar20 = (undefined8 *)(lVar16 + 0x20 + (longlong)local_308);
    uVar4 = *puVar20;
    uVar5 = puVar20[1];
    puVar20 = (undefined8 *)(lVar16 + 0x30 + (longlong)local_308);
    uVar6 = *puVar20;
    uVar7 = puVar20[1];
    puVar20 = (undefined8 *)(lVar16 + 0x40 + (longlong)local_308);
    uVar8 = *puVar20;
    uVar9 = puVar20[1];
    puVar20 = (undefined8 *)(lVar16 + 0x50 + (longlong)local_308);
    uVar10 = *puVar20;
    uVar11 = puVar20[1];
    puVar20 = (undefined8 *)(lVar16 + 0x60 + (longlong)local_308);
    uVar12 = *puVar20;
    uVar13 = puVar20[1];
    puVar20 = (undefined8 *)(lVar16 + 0x70 + (longlong)local_308);
    uVar14 = *puVar20;
    uVar15 = puVar20[1];
    local_314 = iVar21 + 0x80;
    local_2c0 = puVar23;
    FUN_1438fc130(local_200,puVar23);
    FUN_1438fc130(local_218,puVar23);
    lVar26 = local_200[0];
    lVar16 = local_218[0];
    if (0 < iVar27) {
      do {
        uVar24 = local_310[0] - local_314;
        iVar21 = local_314;
        if (uVar24 < 4) {
          local_300 = local_308;
          std::vector<unsigned_char,std::allocator<unsigned_char>_>::resize(&local_308,local_2e8);
          param_6 = param_6 - (longlong)(int)uVar24;
          (**(code **)(*local_res10 + 0x20))();
          local_310[0] = (**(code **)(*local_res10 + 0x10))(local_res10,local_308,1,local_2e8);
          iVar21 = 0;
          local_314 = 0;
          param_6 = param_6 + (longlong)(int)local_310[0];
          if (local_310[0] < 4) {
            *param_1 = 0;
            local_2f0 = 1;
            if (lVar16 != 0) {
              plVar17 = (longlong *)FUN_1438f1790();
              (**(code **)(*plVar17 + 0x18))(plVar17,lVar16);
            }
            if (lVar26 != 0) {
              plVar17 = (longlong *)FUN_1438f1790();
              (**(code **)(*plVar17 + 0x18))(plVar17,lVar26);
            }
            if (local_308 == (undefined8 *)0x0) {
              return param_1;
            }
            puVar20 = local_308;
            if (0xfff < (ulonglong)(local_2f8 - (longlong)local_308)) {
              if (((ulonglong)local_308 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              puVar20 = (undefined8 *)local_308[-1];
              if (local_308 <= puVar20) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              if ((ulonglong)((longlong)local_308 - (longlong)puVar20) < 8) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              if (0x27 < (ulonglong)((longlong)local_308 - (longlong)puVar20)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            goto LAB_143906d5c;
          }
        }
        local_314 = iVar21 + 4;
        FUN_143904620(&local_2b8,(longlong)iVar25 * 4 + lVar26,4,local_318);
        if (local_318[0] == '\0') {
          *param_1 = 0;
          local_2f0 = 1;
          if (lVar16 != 0) {
            plVar17 = (longlong *)FUN_1438f1790();
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar16);
          }
          if (lVar26 != 0) {
            plVar17 = (longlong *)FUN_1438f1790();
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar26);
          }
LAB_1439068f7:
          if (local_308 == (undefined8 *)0x0) {
            return param_1;
          }
          std::_Wrap_alloc<std::allocator<char>_>::deallocate
                    (&local_308,local_308,local_2f8 - (longlong)local_308);
          return param_1;
        }
        FUN_143904620(&local_2b8,lVar16 + (longlong)iVar25 * 4,4,local_318);
        if (local_318[0] == '\0') {
          *param_1 = 0;
          FUN_1438f3510(local_218);
          FUN_1438f3510(local_200);
          std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(&local_308);
          return param_1;
        }
        iVar25 = iVar25 + 1;
        iVar27 = local_2e0;
      } while (iVar25 < local_2e0);
    }
    local_2c8 = iVar27 + 1;
    iVar25 = (int)local_278;
    local_1e0 = (int)local_278;
    uVar24 = local_2c8 * (int)local_278;
    local_1dc = local_2c8;
    plVar17 = (longlong *)FUN_1438f1790();
    lVar16 = (**(code **)(*plVar17 + 8))(plVar17,(ulonglong)uVar24 << 2);
    param_3[1] = *param_3;
    iVar21 = 0;
    local_2d8 = 0;
    local_1e8 = lVar16;
    if (0 < iVar25) {
      local_2d4 = 0;
      do {
        lVar26 = 0;
        iVar25 = local_2d4;
        if (0 < (longlong)puVar23) {
          do {
            *(int *)(lVar16 + (longlong)iVar25 * 4) = iVar21;
            local_2dc = 0;
            FUN_143904620(&local_2b8,&local_2dc,4,local_318);
            if (local_318[0] == '\0') {
              *param_1 = 0;
              local_2f0 = 1;
              if (lVar16 != 0) {
                plVar17 = (longlong *)FUN_1438f1790();
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar16);
              }
              if (local_218[0] != 0) {
                plVar17 = (longlong *)FUN_1438f1790();
                (**(code **)(*plVar17 + 0x18))(plVar17,local_218[0]);
              }
              if (local_200[0] != 0) {
                plVar17 = (longlong *)FUN_1438f1790();
                (**(code **)(*plVar17 + 0x18))(plVar17,local_200[0]);
              }
              goto LAB_1439068f7;
            }
            if (*(char *)(lVar26 + local_res20) == '\0') {
              local_314 = local_314 + local_2dc;
            }
            else {
              lVar22 = (longlong)local_2dc;
              iVar27 = local_2dc + iVar21;
              FUN_143903c00(local_res18,(longlong)iVar27);
              FUN_143904620(&local_2b8,(longlong)iVar21 + *local_res18,lVar22,local_318);
              puVar23 = local_2c0;
              iVar21 = iVar27;
              if (local_318[0] == '\0') {
                *param_1 = 0;
                local_2f0 = 1;
                if (lVar16 != 0) {
                  plVar17 = (longlong *)FUN_1438f1790();
                  (**(code **)(*plVar17 + 0x18))(plVar17,lVar16);
                }
                if (local_218[0] != 0) {
                  plVar17 = (longlong *)FUN_1438f1790();
                  (**(code **)(*plVar17 + 0x18))(plVar17,local_218[0]);
                }
                if (local_200[0] != 0) {
                  plVar17 = (longlong *)FUN_1438f1790();
                  (**(code **)(*plVar17 + 0x18))(plVar17,local_200[0]);
                }
                std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(&local_308);
                return param_1;
              }
            }
            lVar26 = lVar26 + 1;
            iVar25 = iVar25 + 1;
          } while (lVar26 < (longlong)puVar23);
        }
        *(int *)(lVar16 + (longlong)(local_2e0 + local_2d4) * 4) = iVar21;
        local_2d8 = local_2d8 + 1;
        local_2d4 = local_2d4 + local_2c8;
        param_3 = local_res18;
        iVar25 = (int)local_278;
      } while (local_2d8 < (int)local_278);
    }
    local_2c0 = local_180;
    local_148 = uVar18;
    uStack_140 = uVar19;
    local_138 = uVar2;
    uStack_130 = uVar3;
    local_128 = uVar4;
    uStack_120 = uVar5;
    local_118 = uVar6;
    uStack_110 = uVar7;
    local_108 = uVar8;
    uStack_100 = uVar9;
    local_f8 = uVar10;
    uStack_f0 = uVar11;
    local_e8 = uVar12;
    uStack_e0 = uVar13;
    local_d8 = uVar14;
    uStack_d0 = uVar15;
    uVar18 = FUN_1438f30f0(local_180,local_218);
    uVar19 = FUN_1438f30f0(local_168,local_200);
    local_2b8 = (uint *)CONCAT44(uStack_284,local_288);
    local_2b0 = (int *)CONCAT44(uStack_27c,uStack_280);
    local_2a8 = (undefined8 **)CONCAT44(local_278._4_4_,iVar25);
    local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,local_2e0);
    local_1d0 = (undefined4)local_268;
    local_1cc = local_268._4_4_;
    local_1c8 = (undefined4)uStack_260;
    local_1c4 = uStack_260._4_4_;
    local_1c0 = (undefined4)local_258;
    local_1bc = local_258._4_4_;
    local_1b8 = (undefined4)uStack_250;
    local_1b4 = uStack_250._4_4_;
    local_1b0 = local_248;
    local_1ac = CONCAT44(uStack_240,uStack_244);
    local_1a4 = uStack_23c;
    local_1a0 = CONCAT44(uStack_234,local_238);
    uStack_198 = CONCAT44(uStack_22c,uStack_230);
    local_190 = local_228;
    FUN_143907dc0(param_1,param_5,&local_1d0,&local_2b8,local_2d0,uVar19,uVar18,0,&local_1e8,param_3
                  ,&local_148);
    lVar16 = local_1e8;
    local_2f0 = 1;
    if (local_1e8 != 0) {
      plVar17 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar17 + 0x18))(plVar17,lVar16);
    }
    if (local_218[0] != 0) {
      plVar17 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar17 + 0x18))(plVar17,local_218[0]);
    }
    if (local_200[0] != 0) {
      plVar17 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar17 + 0x18))(plVar17,local_200[0]);
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(&local_308);
  }
  return param_1;
}



// FUNCTION 143906db0 SetNetDriverName body=8 status=ok
// SIG undefined SetNetDriverName(void)

void UNetDriver::SetNetDriverName(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 400) = param_2;
  return;
}



// FUNCTION 143906dc0 FUN_143906dc0 body=3626 status=ok
// SIG undefined FUN_143906dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143906dc0(longlong param_1,WriteBytesMem *param_2,undefined8 *param_3,byte *param_4,
                       undefined4 param_5,char param_6,char param_7,longlong param_8)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uchar *puVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  byte *pbVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  float fVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  byte bVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  float *local_290;
  char *local_288;
  char local_278;
  char local_277;
  char local_276;
  byte local_275;
  float local_274;
  float local_270 [2];
  WriteBytesMem *local_268;
  int local_260;
  float local_25c;
  float local_258;
  int iStack_254;
  undefined4 uStack_250;
  longlong local_248;
  undefined8 local_240;
  float local_238;
  undefined8 local_228;
  float local_220;
  int local_218;
  int local_214;
  int local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined8 *local_1b8;
  float *local_1b0;
  undefined1 *local_1a8;
  float *local_1a0;
  int *local_198;
  longlong local_190;
  char *local_188;
  WriteBytesMem **local_180;
  undefined8 *local_178;
  byte *local_168;
  undefined8 local_160;
  float local_158;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  float local_118 [2];
  int local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  int local_e0;
  undefined1 local_d8 [16];
  float local_c8 [8];
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_f8 = *param_3;
  local_f0 = *(float *)(param_3 + 1);
  local_248 = param_8;
  local_268 = param_2;
  local_168 = param_4;
  FUN_142f54e20(param_4);
  if (local_268 == (WriteBytesMem *)0x0) {
    FUN_143905e30(param_1,&local_148);
    uVar17 = 0;
    local_118[0] = (float)local_148;
    local_118[1] = (float)((ulonglong)local_148 >> 0x20);
    local_110 = (int)local_140;
    lVar23 = 3;
    local_160 = 0;
    local_158 = 0.0;
    uVar19 = uVar17;
    do {
      fVar22 = *(float *)((longlong)local_118 + uVar19);
      fVar30 = _guard_xfg_dispatch_icall_nop(fVar22);
      *(int *)((longlong)&local_160 + uVar19) = (int)fVar30;
      *(float *)((longlong)local_118 + uVar19) = fVar22 - (float)(int)fVar30;
      uVar19 = uVar19 + 4;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    piVar20 = &DAT_14682cd58;
    *(longlong *)(param_4 + 0x28) = local_160;
    *(float *)(param_4 + 0x30) = local_158;
    while( true ) {
      iVar25 = (int)uVar17;
      if (((((-1 < piVar20[-2] + (int)(float)local_160) && (-1 < piVar20[-1] + (int)local_160._4_4_)
            ) && (-1 < (int)local_158 + *piVar20)) &&
          ((piVar20[-2] + (int)(float)local_160 < *(int *)(param_1 + 0x90) &&
           (piVar20[-1] + (int)local_160._4_4_ < *(int *)(param_1 + 0x94))))) &&
         ((int)local_158 + *piVar20 < *(int *)(param_1 + 0x98))) break;
      uVar17 = (ulonglong)(iVar25 + 1);
      piVar20 = piVar20 + 3;
      if (0x14682cdb7 < (longlong)piVar20) {
        return 0;
      }
    }
    param_4[iVar25] = 1;
    param_4 = param_4 + (longlong)iVar25 * 4 + 8;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0x80;
    param_4[3] = 0x3f;
    return 1;
  }
  FUN_1438f5df0(*(undefined8 *)(param_1 + 0x198),&local_128,&local_f8);
  local_140 = (float)(int)local_120;
  local_148 = CONCAT44((int)local_128._4_4_,(int)(float)local_128);
  uVar19 = FUN_143907f50(param_1,&local_148);
  local_260 = (int)uVar19;
  if (local_260 == 2) goto LAB_1439074b5;
  FUN_143900fa0(local_268,local_d8,&local_128);
  uVar19 = FUN_143901170(local_268,local_d8);
  lVar23 = 0;
  fVar22 = 1.4013e-45;
  uVar29 = 0;
  if (((char)uVar19 == '\0') || (uVar19 = FUN_143900fe0(local_268,local_d8), (char)uVar19 != '\x01')
     ) {
    local_277 = '\0';
    local_278 = param_6;
LAB_14390748d:
    if (((local_260 != 1) && (local_277 != '\0')) && (param_6 == '\0')) {
      if (param_8 != 0) {
        uVar19 = FUN_1438f95c0(param_8,1,L"Receiver Interp: Point is in wall voxel.");
      }
      goto LAB_1439074b5;
    }
  }
  else {
    local_278 = param_6;
    local_277 = '\x01';
    if (local_260 != 0) goto LAB_14390748d;
    if (param_6 == '\0') {
      if (DAT_14682cd18 != '\0') {
        local_140 = *(float *)(param_3 + 1);
        local_148 = *param_3;
        cVar1 = FUN_1438fe020(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x40),param_5,
                              &local_148,&local_f8);
        if (cVar1 != '\0') {
          local_277 = '\0';
          puVar4 = (undefined8 *)
                   FUN_1438f5df0(*(undefined8 *)(param_1 + 0x198),&local_148,&local_f8);
          local_128 = *puVar4;
          local_120 = *(float *)(puVar4 + 1);
          uVar19 = (ulonglong)(uint)local_120;
          goto LAB_14390748d;
        }
      }
      plVar5 = (longlong *)FUN_1438f1880();
      if (plVar5 == (longlong *)0x0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
      }
      bVar28 = (byte)uVar3;
      uVar18 = uVar29;
      if ((bVar28 & 0x38) == 0x38) {
        uVar18 = 0x2000;
      }
      uVar9 = uVar29;
      if ((bVar28 & 0x1c) == 0x1c) {
        uVar9 = 0x1000;
      }
      uVar10 = uVar29;
      if ((bVar28 & 0x2a) == 0x2a) {
        uVar10 = 0x800;
      }
      uVar11 = uVar29;
      if ((bVar28 & 0xe) == 0xe) {
        uVar11 = 0x400;
      }
      uVar12 = uVar29;
      if ((bVar28 & 0x31) == 0x31) {
        uVar12 = 0x200;
      }
      uVar13 = uVar29;
      if ((bVar28 & 0x15) == 0x15) {
        uVar13 = 0x100;
      }
      if ((bVar28 & 0x23) == 0x23) {
        uVar29 = 0x80;
      }
      uVar14 = 0;
      if ((bVar28 & 7) == 7) {
        uVar14 = 0x40;
      }
      uVar29 = uVar3 | uVar18 | uVar9 | uVar10 | uVar11 | uVar12 | uVar13 | uVar29 | uVar14;
      lVar21 = FNiagaraEmitterHandle::GetInstance(*(undefined8 *)(param_1 + 0x198));
      local_274 = *(float *)(lVar21 + 0x14);
      local_25c = (float)AK::WriteBytesMem::Count(local_268);
      local_1b8 = &local_f8;
      local_1b0 = &local_274;
      local_1a8 = local_d8;
      local_1a0 = &local_25c;
      local_198 = &local_260;
      local_188 = &local_277;
      local_180 = &local_268;
      local_178 = &local_128;
      local_270[0] = (float)(uVar3 & 1);
      fVar30 = -NAN;
      local_190 = param_1;
      do {
        uVar19 = (ulonglong)(uint)local_270[0];
        if (local_270[0] != 0.0) {
          local_118[1] = 0.0;
          local_110 = 0;
          local_118[0] = fVar22;
          uVar19 = FUN_143904730(&local_1b8,local_118);
          if ((char)uVar19 == '\0') goto LAB_143907209;
LAB_143907402:
          local_148 = local_f8;
          local_228 = *param_3;
          local_140 = local_f0;
          local_220 = *(float *)(param_3 + 1);
          uVar19 = FUN_1438fe1e0(*(undefined8 *)(*(longlong *)(param_1 + 0x198) + 0x40),param_5,
                                 &local_228,&local_148);
          param_8 = local_248;
          goto LAB_14390748d;
        }
LAB_143907209:
        if ((uVar3 & 2) != 0) {
          local_e8 = 0.0;
          local_e0 = 0;
          local_e4 = fVar22;
          uVar19 = FUN_143904730(&local_1b8,&local_e8);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        if ((uVar3 & 4) != 0) {
          local_108 = 0;
          local_100 = fVar22;
          uVar19 = FUN_143904730(&local_1b8,&local_108);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        if ((uVar3 & 8) != 0) {
          iStack_254 = 0;
          uStack_250 = 0;
          local_258 = fVar30;
          uVar19 = FUN_143904730(&local_1b8,&local_258);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        if ((uVar3 & 0x10) != 0) {
          local_160 = (ulonglong)(uint)fVar30 << 0x20;
          local_158 = 0.0;
          uVar19 = FUN_143904730(&local_1b8,&local_160);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        if ((uVar3 & 0x20) != 0) {
          local_138 = 0;
          local_130 = fVar30;
          uVar19 = FUN_143904730(&local_1b8,&local_138);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        if ((uVar29 & 0x40) != 0) {
          local_240 = CONCAT44(fVar22,fVar22);
          local_238 = fVar22;
          uVar19 = FUN_143904730(&local_1b8,&local_240);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        if ((((((char)uVar29 < '\0') &&
              (local_208 = fVar22, local_204 = fVar22, local_200 = fVar30,
              uVar19 = FUN_143904730(&local_1b8,&local_208), (char)uVar19 != '\0')) ||
             (((uVar29 >> 8 & 1) != 0 &&
              (local_1f8 = fVar22, local_1f4 = fVar30, local_1f0 = fVar22,
              uVar19 = FUN_143904730(&local_1b8,&local_1f8), (char)uVar19 != '\0')))) ||
            ((((uVar29 >> 9 & 1) != 0 &&
              (local_1e8 = fVar22, local_1e4 = fVar30, local_1e0 = fVar30,
              uVar19 = FUN_143904730(&local_1b8,&local_1e8), (char)uVar19 != '\0')) ||
             (((uVar29 >> 10 & 1) != 0 &&
              (local_1d8 = fVar30, local_1d4 = fVar22, local_1d0 = fVar22,
              uVar19 = FUN_143904730(&local_1b8,&local_1d8), (char)uVar19 != '\0')))))) ||
           (((uVar29 >> 0xb & 1) != 0 &&
            (local_1c8 = fVar30, local_1c4 = fVar22, local_1c0 = fVar30,
            uVar19 = FUN_143904730(&local_1b8,&local_1c8), (char)uVar19 != '\0'))))
        goto LAB_143907402;
        if ((uVar29 >> 0xc & 1) != 0) {
          local_228 = CONCAT44(fVar30,fVar30);
          local_220 = fVar22;
          uVar19 = FUN_143904730(&local_1b8,&local_228);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        if ((uVar29 >> 0xd & 1) != 0) {
          local_148 = CONCAT44(fVar30,fVar30);
          local_140 = fVar30;
          uVar19 = FUN_143904730(&local_1b8,&local_148);
          if ((char)uVar19 != '\0') goto LAB_143907402;
        }
        fVar22 = (float)((int)fVar22 + 1);
        fVar30 = (float)((int)fVar30 - 1);
      } while (-4 < (int)fVar30);
      param_8 = local_248;
      if (param_7 != '\0') {
        local_278 = '\x01';
        param_6 = local_278;
      }
      goto LAB_14390748d;
    }
  }
  local_270[0] = *(float *)(param_1 + 0x8c);
  local_274 = *(float *)(param_1 + 0x88);
  FUN_143905e30(param_1,&local_148,&local_f8);
  lVar24 = 3;
  local_108 = local_148;
  local_100 = local_140;
  local_138 = 0;
  local_130 = 0.0;
  lVar21 = lVar23;
  do {
    fVar22 = *(float *)((longlong)&local_108 + lVar21);
    fVar31 = _guard_xfg_dispatch_icall_nop(fVar22);
    fVar30 = local_274;
    cVar1 = local_278;
    *(int *)((longlong)&local_138 + lVar21) = (int)fVar31;
    *(float *)((longlong)&local_108 + lVar21) = fVar22 - (float)(int)fVar31;
    lVar21 = lVar21 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  piVar20 = &DAT_14682cd58;
  bVar28 = 1;
  *(undefined8 *)(param_4 + 0x28) = local_138;
  *(float *)(param_4 + 0x30) = local_130;
  do {
    if (((((piVar20[-2] + (int)local_138 < 0) || (piVar20[-1] + local_138._4_4_ < 0)) ||
         (((int)local_130 + *piVar20 < 0 ||
          ((*(int *)(param_1 + 0x90) <= piVar20[-2] + (int)local_138 ||
           (*(int *)(param_1 + 0x94) <= piVar20[-1] + local_138._4_4_)))))) ||
        (*(int *)(param_1 + 0x98) <= (int)local_130 + *piVar20)) && (local_278 == '\0')) {
      uVar19 = 0;
    }
    else {
      uVar19 = 1;
    }
    param_4[lVar23] = (byte)uVar19;
    uVar19 = uVar19 ^ 1;
    lVar23 = lVar23 + 1;
    bVar28 = bVar28 & (byte)uVar19;
    piVar20 = piVar20 + 3;
  } while ((longlong)piVar20 < 0x14682cdb8);
  if (bVar28 == 0) {
    pfVar8 = local_c8;
    piVar20 = &DAT_14682cd58;
    iVar25 = *(int *)(param_1 + 0x50) + (int)local_270[0] + (int)local_138 * (int)local_274;
    iVar27 = local_138._4_4_ * (int)local_274 + *(int *)(param_1 + 0x54) + (int)local_270[0];
    local_210 = (int)local_130 * (int)local_274 + (int)local_270[0] + *(int *)(param_1 + 0x58);
    uVar19 = (ulonglong)(uint3)((uint)*(int *)(param_1 + 0x58) >> 8) << 8;
    local_275 = 0;
    fVar22 = 0.0;
    local_240 = 8;
    local_218 = iVar25;
    local_214 = iVar27;
    iVar26 = local_210;
    do {
      if (*param_4 != 0) {
        fVar31 = (float)((int)fVar30 * *piVar20 + iVar26);
        iStack_254 = piVar20[-1] * (int)fVar30 + iVar27;
        local_258 = (float)(piVar20[-2] * (int)fVar30 + iVar25);
        cVar2 = FUN_143903350(local_268,local_258,iStack_254,fVar31);
        if (cVar2 == '\0') {
LAB_143907729:
          local_276 = '\0';
        }
        else {
          cVar2 = FUN_1439010a0(local_268,local_258,iStack_254,fVar31);
          local_276 = '\x01';
          if (cVar2 != '\x01') goto LAB_143907729;
        }
        local_148 = CONCAT44(iStack_254,local_258);
        local_140 = fVar31;
        iVar25 = FUN_143907f50(param_1,&local_148);
        if (iVar25 == 2) {
          *param_4 = 0;
        }
        else if ((iVar25 == 1) && (local_260 == 1)) {
          *param_4 = 1;
          *pfVar8 = 1.0;
        }
        else if (((local_277 == '\0') && (local_276 == '\0')) || (cVar1 != '\0')) {
          local_276 = '\0';
          local_274 = 0.0;
          FNiagaraEmitterHandle::GetInstance(*(undefined8 *)(param_1 + 0x198));
          fVar32 = (float)FUN_143900060(local_268);
          local_270[0] = (float)(int)(0.125 / fVar32);
          local_158 = (float)(int)fVar31 + 0.5;
          local_160 = CONCAT44((float)iStack_254 + 0.5,(float)(int)local_258 + 0.5);
          FUN_143900fa0(local_268,local_118,&local_160);
          FUN_143900fa0(local_268,&local_e8,&local_128);
          if (cVar1 == '\0') {
            puVar6 = AK::WriteBytesMem::Bytes(*(WriteBytesMem **)(param_1 + 0x198));
            local_288 = &local_276;
            local_290 = &local_274;
            local_298 = DAT_146b95cf4;
            bVar28 = FUN_1438fcd20(puVar6,local_118,&local_e8,local_270[0]);
            *param_4 = bVar28;
            if (param_7 != '\0') goto LAB_14390787e;
          }
          else {
LAB_14390787e:
            local_274 = _guard_xfg_dispatch_icall_nop
                                  ((local_128._4_4_ - local_160._4_4_) *
                                   (local_128._4_4_ - local_160._4_4_) +
                                   ((float)local_128 - (float)local_160) *
                                   ((float)local_128 - (float)local_160) +
                                   (local_120 - local_158) * (local_120 - local_158));
          }
          if ((*param_4 != 0) &&
             (((*pfVar8 = 1.0, local_118[0] != local_e8 || (local_118[1] != local_e4)) ||
              (local_110 != local_e0)))) {
            fVar31 = (float)FUN_1438f8da0(local_118,&local_e8);
            local_270[0] = 1.0;
            local_25c = fVar31 / local_274;
            pfVar7 = local_270;
            if (fVar31 / local_274 <= 1.0) {
              pfVar7 = &local_25c;
            }
            fVar31 = *pfVar7;
            if (fVar31 <= 0.5) {
              fVar31 = 0.5;
            }
            *pfVar8 = (fVar31 - 0.5) * 2.0;
          }
        }
        else {
          *param_4 = 0;
        }
        local_275 = local_275 | *param_4;
        uVar19 = (ulonglong)local_275;
        iVar25 = local_218;
        iVar27 = local_214;
        iVar26 = local_210;
      }
      piVar20 = piVar20 + 3;
      pfVar8 = pfVar8 + 1;
      param_4 = param_4 + 1;
      local_240 = local_240 + -1;
      if (local_240 == 0) {
        piVar20 = &DAT_14682cd58;
        if ((char)uVar19 == '\0') {
          if (param_7 == '\0') {
            if (local_248 != 0) {
              uVar19 = FUN_1438f95c0(local_248,1,
                                     L"Receiver: All samples discarded during bounds/geometric tests."
                                    );
            }
            return uVar19 & 0xffffffffffffff00;
          }
          lVar23 = 0;
          piVar15 = &DAT_14682cd58;
          do {
            if (((((piVar15[-2] + (int)local_138 < 0) || (piVar15[-1] + local_138._4_4_ < 0)) ||
                 (((int)local_130 + *piVar15 < 0 ||
                  ((*(int *)(param_1 + 0x90) <= piVar15[-2] + (int)local_138 ||
                   (*(int *)(param_1 + 0x94) <= piVar15[-1] + local_138._4_4_)))))) ||
                (*(int *)(param_1 + 0x98) <= (int)local_130 + *piVar15)) && (local_278 == '\0')) {
              bVar28 = 0;
            }
            else {
              bVar28 = 1;
            }
            local_168[lVar23] = bVar28;
            piVar15 = piVar15 + 3;
            lVar23 = lVar23 + 1;
          } while ((longlong)piVar15 < 0x14682cdb8);
        }
        uVar17 = 0;
        pfVar8 = local_c8;
        lVar23 = 8;
        pbVar16 = local_168;
        uVar19 = uVar17;
        do {
          if (*pbVar16 != 0) {
            fVar30 = 1.0 - (float)local_108;
            fVar31 = 1.0 - local_108._4_4_;
            fVar32 = 1.0 - local_100;
            uVar19 = (ulonglong)((int)uVar19 + 1);
            fVar30 = ((1.0 - (fVar30 + fVar30)) * (float)piVar20[-2] + fVar30) *
                     ((1.0 - (fVar31 + fVar31)) * (float)piVar20[-1] + fVar31) *
                     ((1.0 - (fVar32 + fVar32)) * (float)*piVar20 + fVar32) * *pfVar8;
            *(float *)(local_168 + (8 - (longlong)local_c8) + (longlong)pfVar8) = fVar30;
            fVar22 = fVar22 + fVar30;
          }
          pbVar16 = pbVar16 + 1;
          piVar20 = piVar20 + 3;
          pfVar8 = pfVar8 + 1;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        pfVar8 = (float *)(local_168 + 8);
        if (1.1920929e-07 <= fVar22) {
          do {
            if (local_168[uVar17] == 0) {
              *pfVar8 = 0.0;
            }
            else {
              *pfVar8 = (1.0 / fVar22) * *pfVar8;
            }
            uVar17 = uVar17 + 1;
            pfVar8 = pfVar8 + 1;
          } while ((longlong)uVar17 < 8);
        }
        else {
          do {
            if (local_168[uVar17] == 0) {
              *pfVar8 = 0.0;
            }
            else {
              *pfVar8 = 1.0 / (float)(int)uVar19;
            }
            uVar17 = uVar17 + 1;
            pfVar8 = pfVar8 + 1;
          } while ((longlong)uVar17 < 8);
        }
        return CONCAT71((int7)((ulonglong)pfVar8 >> 8),1);
      }
    } while( true );
  }
LAB_1439074b5:
  return uVar19 & 0xffffffffffffff00;
}



// FUNCTION 143907bf0 FUN_143907bf0 body=462 status=ok
// SIG undefined FUN_143907bf0(void)

void FUN_143907bf0(longlong param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  iVar10 = 0;
  iVar3 = *(int *)(param_1 + 0x90);
  lVar9 = 0;
  uVar4 = *(uint *)(param_1 + 0x94);
  if (0 < (longlong)iVar2) {
    do {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x180) + 4 + lVar9 * 4) -
              *(int *)(*(longlong *)(param_1 + 0x180) + lVar9 * 4)) {
        plVar5 = (longlong *)*param_2;
        fVar1 = *(float *)(*(longlong *)(param_1 + 0x20) + lVar9 * 4);
        lVar7 = 0;
        lVar11 = (longlong)
                 (*(int *)((longlong)plVar5 + 0x14) * (int)param_2[1] + (int)plVar5[2] * iVar10) +
                 *plVar5;
        uVar13 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          do {
            iVar8 = 0;
            fVar14 = 0.0;
            if (3 < iVar3) {
              uVar6 = (iVar3 - 4U >> 2) + 1;
              uVar12 = (ulonglong)uVar6;
              iVar8 = uVar6 * 4;
              do {
                fVar14 = fVar14 + ((float)*(byte *)(lVar11 + lVar7) - fVar1);
                *(char *)(lVar11 + lVar7) = (char)(longlong)(fVar14 + fVar1);
                fVar14 = fVar14 + ((float)*(byte *)(lVar11 + 1 + lVar7) - fVar1);
                *(char *)(lVar11 + 1 + lVar7) = (char)(longlong)(fVar14 + fVar1);
                fVar14 = fVar14 + ((float)*(byte *)(lVar11 + 2 + lVar7) - fVar1);
                *(char *)(lVar11 + 2 + lVar7) = (char)(longlong)(fVar14 + fVar1);
                fVar14 = fVar14 + ((float)*(byte *)(lVar11 + 3 + lVar7) - fVar1);
                *(char *)(lVar11 + 3 + lVar7) = (char)(longlong)(fVar14 + fVar1);
                lVar7 = lVar7 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            if (iVar8 < iVar3) {
              uVar12 = (ulonglong)(uint)(iVar3 - iVar8);
              do {
                fVar14 = fVar14 + ((float)*(byte *)(lVar7 + lVar11) - fVar1);
                *(char *)(lVar7 + lVar11) = (char)(longlong)(fVar14 + fVar1);
                lVar7 = lVar7 + 1;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
  }
  return;
}



// FUNCTION 143907dc0 FUN_143907dc0 body=399 status=ok
// SIG undefined FUN_143907dc0(void)

longlong *
FUN_143907dc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7,undefined8 param_8,
             longlong *param_9,longlong *param_10,undefined8 param_11)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res10;
  void *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  plVar4 = param_7;
  plVar7 = param_6;
  local_res10 = param_2;
  FUN_143903de0(param_1,param_3,param_4,&param_5,param_6,param_7,&param_8,&local_res10,param_11);
  plVar6 = param_10;
  local_40 = *param_9;
  local_38 = (undefined4)param_9[1];
  local_34 = *(undefined4 *)((longlong)param_9 + 0xc);
  *param_9 = 0;
  param_9[1] = 0;
  lVar1 = param_10[1];
  lVar2 = *param_10;
  plVar5 = (longlong *)FUN_1438f1790();
  local_48 = (void *)(**(code **)(*plVar5 + 8))(plVar5,lVar1 - lVar2 & 0xffffffff);
  pvVar3 = (void *)*plVar6;
  memmove(local_48,pvVar3,plVar6[1] - (longlong)pvVar3);
  FUN_143904570(*param_1 + 0x178,&local_48);
  pvVar3 = local_48;
  if (local_48 != (void *)0x0) {
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,pvVar3);
  }
  lVar1 = local_40;
  if (local_40 != 0) {
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar1);
  }
  FUN_143908100(*param_1);
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar1);
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
  }
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    plVar7 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar1);
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
  }
  return param_1;
}



// FUNCTION 143907f50 FUN_143907f50 body=422 status=ok
// SIG undefined FUN_143907f50(void)

byte FUN_143907f50(longlong param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = FNiagaraEmitterHandle::GetInstance(*(undefined8 *)(param_1 + 0x198));
  iVar2 = *param_2;
  fVar10 = *(float *)(lVar4 + 0x14);
  if (((((iVar2 != *(int *)(param_1 + 0x50)) &&
        (iVar3 = param_2[1], iVar3 != *(int *)(param_1 + 0x54))) &&
       (iVar5 = param_2[2], iVar5 != *(int *)(param_1 + 0x58))) &&
      ((iVar2 != *(int *)(param_1 + 0x5c) && (iVar3 != *(int *)(param_1 + 0x60))))) &&
     (iVar7 = *(int *)(param_1 + 100), iVar5 != iVar7)) {
    fVar8 = _guard_xfg_dispatch_icall_nop(*(float *)(param_1 + 0x84) / fVar10);
    iVar7 = iVar5 - iVar7;
    iVar5 = iVar5 - *(int *)(param_1 + 0x58);
    if ((0 < iVar5) && (iVar7 < 0)) {
      bVar6 = 0;
      if ((iVar5 <= (int)fVar8) || (-(int)fVar8 <= iVar7)) {
        bVar6 = 1;
      }
      fVar8 = *(float *)(param_1 + 0x6c);
      fVar1 = *(float *)(lVar4 + 0x1c);
      fVar11 = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x80);
      fVar12 = *(float *)(param_1 + 0x74) - fVar10;
      fVar9 = _guard_xfg_dispatch_icall_nop
                        ((*(float *)(param_1 + 0x68) - *(float *)(lVar4 + 0x18)) * (1.0 / fVar10));
      fVar8 = _guard_xfg_dispatch_icall_nop((fVar8 - fVar1) * (1.0 / fVar10));
      fVar10 = ((float)(iVar3 - (int)fVar8) * (float)(iVar3 - (int)fVar8) +
               (float)(iVar2 - (int)fVar9) * (float)(iVar2 - (int)fVar9)) * fVar10 * fVar10;
      if (fVar11 * fVar11 < fVar10) {
        return 2;
      }
      return bVar6 | fVar12 * fVar12 < fVar10;
    }
  }
  return 2;
}



// FUNCTION 143908100 FUN_143908100 body=244 status=ok
// SIG undefined FUN_143908100(void)

void FUN_143908100(longlong param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = *(int *)(param_1 + 0x44);
  iVar4 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(param_1 + 0x4c);
  lVar6 = FNiagaraEmitterHandle::GetInstance(*(undefined8 *)(param_1 + 0x198));
  fVar1 = *(float *)(lVar6 + 0x14);
  fVar8 = fVar1 * 0.5;
  fVar2 = *(float *)(lVar6 + 0x20);
  *(ulonglong *)(param_1 + 0x160) =
       CONCAT44(fVar8 + (float)iVar4 * fVar1 + *(float *)(lVar6 + 0x1c),
                fVar8 + (float)iVar3 * fVar1 + *(float *)(lVar6 + 0x18));
  fVar7 = *(float *)(param_1 + 0x84) * 0.5;
  *(float *)(param_1 + 0x168) = fVar8 + (float)iVar5 * fVar1 + fVar2;
  *(float *)(param_1 + 0x16c) = fVar7 + *(float *)(param_1 + 0x78);
  *(float *)(param_1 + 0x170) = fVar7 + *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 0x174) = *(float *)(param_1 + 0x80) * 0.5 + *(float *)(param_1 + 0x74);
  return;
}



// FUNCTION 143908200 FUN_143908200 body=345 status=ok
// SIG undefined FUN_143908200(void)

float * FUN_143908200(float *param_1,float *param_2,float param_3,float param_4,float param_5,
                     undefined1 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *param_6 = 0;
  fVar1 = param_2[2];
  fVar4 = *param_2 * *param_2 + param_2[1] * param_2[1];
  fVar2 = _guard_xfg_dispatch_icall_nop(fVar1 * fVar1 + fVar4);
  if ((0.001 <= fVar2) &&
     (((fVar4 = _guard_xfg_dispatch_icall_nop(fVar4), param_3 < fVar4 || (param_5 < fVar1)) ||
      (fVar1 < -param_4)))) {
    *param_6 = 1;
    fVar1 = param_2[2];
    fVar4 = (param_3 / (fVar4 + 1.1920929e-07)) * fVar2;
    if (fVar1 <= 0.0) {
      param_5 = param_4 / (1.1920929e-07 - fVar1);
    }
    else {
      param_5 = param_5 / (fVar1 + 1.1920929e-07);
    }
    fVar3 = param_5 * fVar2;
    if (fVar4 <= param_5 * fVar2) {
      fVar3 = fVar4;
    }
    fVar3 = fVar3 / fVar2;
    fVar2 = param_2[1];
    *param_1 = fVar3 * *param_2;
    param_1[2] = fVar1 * fVar3;
    param_1[1] = fVar3 * fVar2;
    return param_1;
  }
  fVar1 = param_2[2];
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  param_1[2] = fVar1;
  return param_1;
}



// FUNCTION 143908360 _Reallocate body=272 status=ok
// SIG undefined _Reallocate(void)

void std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Reallocate
               (ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Dst;
  
  if (param_2 == 0) {
    _Dst = (void *)0x0;
  }
  else if (param_2 < 0x1000) {
    _Dst = (void *)operator_new(param_2);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  else {
    if (param_2 + 0x27 <= param_2) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_alloc();
    }
    lVar3 = operator_new();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  memmove(_Dst,(void *)*param_1,param_1[1] - (longlong)*param_1);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar1 != 0) {
    uVar4 = uVar1;
    if (0xfff < param_1[2] - uVar1) {
      if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar1 - 8);
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar1 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar1 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
  }
  param_1[2] = (longlong)_Dst + param_2;
  param_1[1] = (longlong)_Dst + (uVar2 - uVar1);
  *param_1 = (ulonglong)_Dst;
  return;
}



// FUNCTION 143908480 _Tidy body=112 status=ok
// SIG undefined _Tidy(void)

void std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = uVar1;
    if (0xfff < param_1[2] - uVar1) {
      if ((uVar1 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = *(ulonglong *)(uVar1 - 8);
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar1 - uVar2 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar1 - uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143908500 deallocate body=81 status=ok
// SIG undefined deallocate(void)

void std::_Wrap_alloc<std::allocator<char>_>::deallocate
               (undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = param_2;
  if (0xfff < param_3) {
    if ((param_2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar1 = *(ulonglong *)(param_2 - 8);
    if (param_2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (param_2 - uVar1 < 8) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    if (0x27 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(uVar1);
  return;
}



// FUNCTION 143908560 resize body=208 status=ok
// SIG undefined resize(void)

void std::vector<unsigned_char,std::allocator<unsigned_char>_>::resize
               (longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = param_1[1] - *param_1;
  if (param_2 < uVar1) {
    param_1[1] = *param_1 + param_2;
  }
  else if (uVar1 < param_2) {
    if ((ulonglong)(param_1[2] - param_1[1]) < param_2 - uVar1) {
      if (~uVar1 < param_2 - uVar1) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      _Reallocate(param_1);
    }
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],0,param_2 - (param_1[1] - *param_1));
    param_1[1] = param_1[1] + (*param_1 - param_1[1]) + param_2;
  }
  return;
}



// FUNCTION 143908640 FUN_143908640 body=174 status=ok
// SIG undefined FUN_143908640(void)

undefined8 *
FUN_143908640(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  param_1[7] = 0;
  *param_1 = std::_Func_impl<<lambda_6ec49cfde1973a6d05aa970b9e1ca53c>,std::allocator<int>,void>::
             vftable;
  param_1[1] = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_1[7] = param_1;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 1439086f0 FUN_1439086f0 body=119 status=ok
// SIG undefined FUN_1439086f0(void)

longlong FUN_1439086f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res10;
  undefined1 local_res18 [8];
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_res10 = (undefined1)param_2;
  FUN_143908d50(param_1,param_2,local_res18,0,local_res18,local_res10,0xfffffffffffffffe);
  FUN_1438f79a0(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 8);
  plVar2 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
  return param_1;
}



// FUNCTION 143908770 FUN_143908770 body=116 status=ok
// SIG undefined FUN_143908770(void)

undefined8 *
FUN_143908770(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = std::_Func_impl<<lambda_953f2e7090df42e085e02be651a06762>,std::allocator<int>,void>::
            vftable;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_1438f3090(puVar1 + 2,param_1 + 0x10,param_3,param_4,uVar2,puVar1,puVar1 + 1);
  return puVar1;
}



// FUNCTION 1439087f0 FUN_1439087f0 body=322 status=ok
// SIG undefined FUN_1439087f0(void)

void FUN_1439087f0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar3 < 0x29) {
    iVar2 = *param_2;
    if (iVar2 < *param_1) {
      *param_2 = *param_1;
      *param_1 = iVar2;
    }
    iVar2 = *param_3;
    if (iVar2 < *param_2) {
      *param_3 = *param_2;
      *param_2 = iVar2;
      if (iVar2 < *param_1) {
        *param_2 = *param_1;
        *param_1 = iVar2;
      }
    }
  }
  else {
    lVar3 = lVar3 + 1;
    lVar3 = (longlong)(lVar3 + (ulonglong)((uint)(lVar3 >> 0x3f) & 7)) >> 3;
    iVar2 = param_1[lVar3];
    piVar1 = param_1 + lVar3;
    if (iVar2 < *param_1) {
      *piVar1 = *param_1;
      *param_1 = iVar2;
    }
    iVar2 = param_1[lVar3 * 2];
    if (iVar2 < *piVar1) {
      param_1[lVar3 * 2] = *piVar1;
      *piVar1 = iVar2;
      if (iVar2 < *param_1) {
        *piVar1 = *param_1;
        *param_1 = iVar2;
      }
    }
    iVar2 = *param_2;
    piVar4 = param_2 + -lVar3;
    if (iVar2 < *piVar4) {
      *param_2 = *piVar4;
      *piVar4 = iVar2;
    }
    iVar2 = param_2[lVar3];
    if (iVar2 < *param_2) {
      param_2[lVar3] = *param_2;
      *param_2 = iVar2;
      if (iVar2 < *piVar4) {
        *param_2 = *piVar4;
        *piVar4 = iVar2;
      }
    }
    piVar5 = param_3 + lVar3 * -2;
    piVar4 = param_3 + -lVar3;
    iVar2 = *piVar4;
    if (iVar2 < *piVar5) {
      *piVar4 = *piVar5;
      *piVar5 = iVar2;
    }
    iVar2 = *param_3;
    if (iVar2 < *piVar4) {
      *param_3 = *piVar4;
      *piVar4 = iVar2;
      if (iVar2 < *piVar5) {
        *piVar4 = *piVar5;
        *piVar5 = iVar2;
      }
    }
    iVar2 = *param_2;
    if (iVar2 < *piVar1) {
      *param_2 = *piVar1;
      *piVar1 = iVar2;
    }
    iVar2 = *piVar4;
    if (iVar2 < *param_2) {
      *piVar4 = *param_2;
      *param_2 = iVar2;
      if (iVar2 < *piVar1) {
        *param_2 = *piVar1;
        *piVar1 = iVar2;
        return;
      }
    }
  }
  return;
}



// FUNCTION 143908940 FUN_143908940 body=169 status=ok
// SIG undefined FUN_143908940(void)

void FUN_143908940(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
    piVar5 = param_1;
    do {
      iVar2 = piVar5[1];
      if (iVar2 < *param_1) {
        memmove(param_1 + 1,param_1,(4 - (longlong)param_1) + (longlong)piVar5);
        *param_1 = iVar2;
      }
      else {
        iVar3 = *piVar5;
        piVar1 = piVar5 + 1;
        piVar4 = piVar5;
        while (iVar2 < iVar3) {
          *piVar1 = iVar3;
          iVar3 = piVar4[-1];
          piVar1 = piVar4;
          piVar4 = piVar4 + -1;
        }
        *piVar1 = iVar2;
      }
      piVar1 = piVar5 + 2;
      piVar5 = piVar5 + 1;
    } while (piVar1 != param_2);
  }
  return;
}



// FUNCTION 1439089f0 FUN_1439089f0 body=238 status=ok
// SIG undefined FUN_1439089f0(void)

void FUN_1439089f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = param_2 - param_1 >> 2;
  if ((1 < (longlong)uVar7) &&
     (lVar4 = (longlong)(uVar7 - (param_2 - param_1 >> 0x3f)) >> 1, 0 < lVar4)) {
    lVar5 = (longlong)(uVar7 - 1) / 2;
    do {
      iVar2 = *(int *)(param_1 + -4 + lVar4 * 4);
      lVar4 = lVar4 + -1;
      lVar1 = lVar4;
      while (lVar1 < lVar5) {
        lVar6 = lVar1 * 2 + 2;
        lVar8 = lVar1 * 2 + 1;
        if (*(int *)(param_1 + -4 + lVar6 * 4) <= *(int *)(param_1 + 8 + lVar1 * 8)) {
          lVar8 = lVar6;
        }
        *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + lVar8 * 4);
        lVar1 = lVar8;
      }
      if ((lVar1 == lVar5) && ((uVar7 & 1) == 0)) {
        *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + -4 + uVar7 * 4);
        lVar1 = uVar7 - 1;
      }
      while (lVar4 < lVar1) {
        lVar6 = (lVar1 + -1) / 2;
        iVar3 = *(int *)(param_1 + lVar6 * 4);
        if (iVar2 <= iVar3) break;
        *(int *)(param_1 + lVar1 * 4) = iVar3;
        lVar1 = lVar6;
      }
      *(int *)(param_1 + lVar1 * 4) = iVar2;
    } while (0 < lVar4);
  }
  return;
}



// FUNCTION 143908ae0 FUN_143908ae0 body=411 status=ok
// SIG undefined FUN_143908ae0(void)

undefined8 * FUN_143908ae0(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar3 = param_2 + (((longlong)param_3 - (longlong)param_2 >> 2) -
                      ((longlong)param_3 - (longlong)param_2 >> 0x3f) >> 1);
  FUN_1439087f0(param_2,piVar3,param_3 + -1);
  piVar6 = piVar3 + 1;
  while (piVar8 = piVar3, param_2 < piVar8) {
    if ((piVar8[-1] < *piVar8) || (piVar3 = piVar8 + -1, *piVar8 < piVar8[-1])) break;
  }
  piVar3 = piVar6;
  piVar5 = piVar8;
  if (piVar6 < param_3) {
    do {
      piVar3 = piVar6;
      if ((*piVar6 < *piVar8) || (*piVar8 < *piVar6)) break;
      piVar6 = piVar6 + 1;
      piVar3 = piVar6;
    } while (piVar6 < param_3);
  }
joined_r0x000143908b73:
  do {
    piVar4 = piVar8;
    if (param_3 <= piVar6) {
joined_r0x000143908ba3:
      for (; param_2 < piVar8; piVar8 = piVar8 + -1) {
        piVar4 = piVar4 + -1;
        iVar1 = *piVar4;
        if (*piVar5 <= iVar1) {
          if (*piVar5 < iVar1) break;
          piVar5 = piVar5 + -1;
          if (piVar5 != piVar4) {
            iVar2 = *piVar5;
            *piVar5 = iVar1;
            *piVar4 = iVar2;
          }
        }
      }
      if (piVar8 == param_2) {
        if (piVar6 == param_3) {
          *param_1 = piVar5;
          param_1[1] = piVar3;
          return param_1;
        }
        if (piVar3 != piVar6) {
          iVar1 = *piVar5;
          *piVar5 = *piVar3;
          *piVar3 = iVar1;
        }
        iVar1 = *piVar5;
        *piVar5 = *piVar6;
        *piVar6 = iVar1;
        piVar6 = piVar6 + 1;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      }
      else {
        piVar8 = piVar8 + -1;
        if (piVar6 == param_3) {
          piVar5 = piVar5 + -1;
          if (piVar8 != piVar5) {
            iVar1 = *piVar8;
            *piVar8 = *piVar5;
            *piVar5 = iVar1;
          }
          iVar1 = *piVar5;
          *piVar5 = piVar3[-1];
          piVar3[-1] = iVar1;
          piVar3 = piVar3 + -1;
        }
        else {
          iVar1 = *piVar6;
          *piVar6 = *piVar8;
          piVar6 = piVar6 + 1;
          *piVar8 = iVar1;
        }
      }
      goto joined_r0x000143908b73;
    }
    iVar1 = *piVar6;
    piVar7 = piVar3;
    if (iVar1 <= *piVar5) {
      if (iVar1 < *piVar5) goto joined_r0x000143908ba3;
      piVar7 = piVar3 + 1;
      if (piVar3 != piVar6) {
        iVar2 = *piVar3;
        *piVar3 = iVar1;
        *piVar6 = iVar2;
      }
    }
    piVar6 = piVar6 + 1;
    piVar3 = piVar7;
  } while( true );
}



// FUNCTION 143908c80 FUN_143908c80 body=207 status=ok
// SIG undefined FUN_143908c80(void)

void FUN_143908c80(longlong param_1,longlong param_2,ulonglong param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)(param_3 - 1) / 2;
  lVar1 = param_2;
  while (lVar1 < lVar4) {
    lVar2 = lVar1 * 2 + 2;
    lVar5 = lVar1 * 2 + 1;
    if (*(int *)(param_1 + -4 + lVar2 * 4) <= *(int *)(param_1 + 8 + lVar1 * 8)) {
      lVar5 = lVar2;
    }
    *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + lVar5 * 4);
    lVar1 = lVar5;
  }
  if ((lVar1 == lVar4) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar1 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar4 = (lVar1 + -1) / 2;
    iVar3 = *(int *)(param_1 + lVar4 * 4);
    if (*param_4 <= iVar3) break;
    *(int *)(param_1 + lVar1 * 4) = iVar3;
    lVar1 = lVar4;
  }
  *(int *)(param_1 + lVar1 * 4) = *param_4;
  return;
}



// FUNCTION 143908d50 FUN_143908d50 body=187 status=ok
// SIG undefined FUN_143908d50(void)

void FUN_143908d50(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar2 = std::_Func_impl<<lambda_953f2e7090df42e085e02be651a06762>,std::allocator<int>,void>::
            vftable;
  puVar2[1] = *param_2;
  puVar1 = puVar2 + 2;
  *puVar1 = 0;
  puVar2[3] = 0;
  uVar3 = FUN_1438f6c90(puVar1,0,0,param_4,puVar2,uVar3,puVar2,puVar2,puVar1);
  *puVar1 = uVar3;
  *puVar1 = param_2[1];
  param_2[1] = uVar3;
  uVar3 = puVar2[3];
  puVar2[3] = param_2[2];
  param_2[2] = uVar3;
  *(undefined8 **)(param_1 + 0x38) = puVar2;
  return;
}



// FUNCTION 143908e10 FUN_143908e10 body=330 status=ok
// SIG undefined FUN_143908e10(void)

undefined8 *
FUN_143908e10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  longlong *local_res18;
  undefined1 local_20 [8];
  
  if (1 < param_6) {
    uVar8 = param_6 >> 1;
    uVar3 = 0;
    uVar2 = uVar8;
    puVar6 = param_3;
    if (uVar8 != 0) {
      do {
        puVar6 = (undefined8 *)*puVar6;
        uVar3 = uVar2 - 1;
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    if ((longlong)uVar3 < 0) {
      lVar4 = -uVar3;
      do {
        puVar6 = (undefined8 *)puVar6[1];
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_143908e10(param_1,local_20,param_3,puVar6,param_5,uVar8,uVar8);
    plVar7 = (longlong *)*puVar5;
    puVar6 = (undefined8 *)FUN_143908e10(param_1,&param_6,puVar6,param_4,param_5,param_6 - uVar8);
    bVar11 = true;
    plVar9 = (longlong *)*puVar6;
    plVar10 = plVar7;
    local_res18 = plVar7;
    while( true ) {
      if ((int)plVar9[2] < (int)plVar7[2]) {
        if (bVar11) {
          plVar10 = plVar9;
        }
        plVar1 = (longlong *)*plVar9;
        if (((plVar9 != (longlong *)*param_1) && (plVar7 != plVar9)) &&
           (plVar7 != (longlong *)*plVar9)) {
          FUN_14390a4a0(param_1,plVar7,param_1,plVar9,(longlong *)*plVar9,1);
          plVar7 = local_res18;
        }
        bVar11 = plVar1 == (longlong *)param_4;
        plVar9 = plVar1;
      }
      else {
        plVar7 = (longlong *)*plVar7;
        bVar11 = plVar7 == plVar9;
        local_res18 = plVar7;
      }
      if (bVar11) break;
      bVar11 = false;
    }
    *param_2 = plVar10;
    return param_2;
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 143908f60 FUN_143908f60 body=146 status=ok
// SIG undefined FUN_143908f60(void)

void FUN_143908f60(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [2];
  
  lVar1 = param_2 - (longlong)param_1 >> 2;
  if (1 < lVar1) {
    puVar2 = (undefined4 *)(param_2 + -4);
    if (lVar1 < 2) goto LAB_143908fca;
    do {
      local_res8[0] = *puVar2;
      *puVar2 = *param_1;
      FUN_143908c80(param_1,0,(longlong)puVar2 - (longlong)param_1 >> 2,local_res8,param_3);
LAB_143908fca:
      puVar2 = puVar2 + -1;
    } while (1 < (4 - (longlong)param_1) + (longlong)puVar2 >> 2);
  }
  return;
}



// FUNCTION 143909000 FUN_143909000 body=274 status=ok
// SIG undefined FUN_143909000(void)

void FUN_143909000(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong local_18;
  longlong local_10;
  
  lVar1 = param_2 - param_1;
  do {
    lVar1 = lVar1 >> 2;
    if (lVar1 < 0x21) {
LAB_1439090c5:
      if (1 < lVar1) {
        FUN_143908940(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < lVar1) {
        FUN_1439089f0(param_1,param_2,param_4);
        FUN_143908f60(param_1,param_2,param_4);
        return;
      }
      goto LAB_1439090c5;
    }
    FUN_143908ae0(&local_18,param_1,param_2,param_4);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((longlong)(local_18 - param_1 & 0xfffffffffffffffcU) <
        (longlong)(param_2 - local_10 & 0xfffffffffffffffcU)) {
      FUN_143909000(param_1,local_18,param_3,param_4);
      param_1 = local_10;
    }
    else {
      FUN_143909000(local_10,param_2,param_3,param_4);
      param_2 = local_18;
    }
    lVar1 = param_2 - param_1;
  } while( true );
}



// FUNCTION 143909120 FUN_143909120 body=125 status=ok
// SIG undefined FUN_143909120(void)

undefined8 *
FUN_143909120(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar3 = 0;
  uVar4 = 0;
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x58);
  if (lVar2 != 0) {
    uVar3 = FUN_14390aad0(lVar2,*param_2,*param_3,*param_4,uVar4,uVar5);
  }
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 1439091a0 FUN_1439091a0 body=175 status=ok
// SIG undefined FUN_1439091a0(void)

undefined8 *
FUN_1439091a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0x100);
  if (lVar2 != 0) {
    uVar3 = FUN_14390c270(lVar2,*param_2,*param_3,*param_4,*param_5,*param_6,*param_7);
  }
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 143909250 FUN_143909250 body=497 status=ok
// SIG undefined FUN_143909250(void)

undefined8 *
FUN_143909250(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  *param_1 = TritonRuntime::LoadManager::vftable;
  param_1[1] = param_5;
  *(undefined4 *)(param_1 + 2) = param_6;
  param_1[4] = param_3;
  plVar7 = param_1 + 5;
  *plVar7 = 0;
  plVar1 = param_1 + 6;
  *plVar1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_res10 = param_2;
  _Mtx_init_in_situ(param_1 + 10,2);
  puVar2 = param_1 + 0x14;
  *puVar2 = 0;
  param_1[0x15] = 0;
  param_5 = puVar2;
  uVar5 = FUN_1438f6c90(puVar2,0,0);
  *puVar2 = uVar5;
  plVar6 = (longlong *)FUN_143909120(&param_5,&stack0x00000048,&DAT_145c5cec4,&stack0x00000050);
  if (plVar7 != plVar6) {
    lVar3 = *plVar6;
    *plVar6 = 0;
    lVar4 = *plVar7;
    *plVar7 = lVar3;
    if (lVar4 != 0) {
      FUN_14390ad70(lVar4);
      plVar6 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar4);
    }
  }
  puVar2 = param_5;
  if (param_5 != (undefined8 *)0x0) {
    FUN_14390ad70(param_5);
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,puVar2);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = *param_4;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_4 + 1);
  param_5 = (undefined8 *)*plVar7;
  local_res18 = param_1;
  plVar7 = (longlong *)
           FUN_1439091a0(&local_res20,&local_res18,&local_res10,&param_5,&param_6,&stack0x00000038,
                         &stack0x00000040);
  if (plVar1 != plVar7) {
    lVar3 = *plVar7;
    *plVar7 = 0;
    lVar4 = *plVar1;
    *plVar1 = lVar3;
    if (lVar4 != 0) {
      FUN_14390cab0(lVar4);
      plVar7 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar4);
    }
  }
  if (local_res20 != 0) {
    FUN_14390cab0(local_res20);
    plVar7 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar7 + 0x18))(plVar7,local_res20);
  }
  return param_1;
}



// FUNCTION 143909450 FUN_143909450 body=77 status=ok
// SIG undefined FUN_143909450(void)

void FUN_143909450(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1439094a0 FUN_1439094a0 body=57 status=ok
// SIG undefined FUN_1439094a0(void)

void FUN_1439094a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_1438f79a0((undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  plVar2 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,*plVar2,param_4,uVar3);
  return;
}



// FUNCTION 1439094e0 FUN_1439094e0 body=11 status=ok
// SIG undefined FUN_1439094e0(void)

void FUN_1439094e0(undefined8 *param_1)

{
  *param_1 = std::_Func_base<void>::vftable;
  return;
}



// FUNCTION 1439094f0 FUN_1439094f0 body=58 status=ok
// SIG undefined FUN_1439094f0(void)

void FUN_1439094f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14390ad70(lVar1);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
  }
  return;
}



// FUNCTION 143909530 FUN_143909530 body=13 status=ok
// SIG undefined FUN_143909530(void)

void FUN_143909530(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    uVar4 = 0xfffffffffffffffe;
    lVar2 = *(longlong *)(lVar1 + 8);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2);
      *(undefined8 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1,*plVar3,param_4,uVar4);
  }
  return;
}



// FUNCTION 143909540 FUN_143909540 body=58 status=ok
// SIG undefined FUN_143909540(void)

void FUN_143909540(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_14390cab0(lVar1);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
  }
  return;
}



// FUNCTION 143909580 FUN_143909580 body=283 status=ok
// SIG undefined FUN_143909580(void)

void FUN_143909580(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::LoadManager::vftable;
  if (param_1[6] != 0) {
    FAnimNode_TwistCorrectiveNode::GatherDebugData();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 8))();
  }
  FUN_1438f79a0(param_1 + 0x14);
  uVar4 = param_1[0x14];
  plVar6 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar4,*plVar6,param_4,uVar7);
  _Mtx_destroy_in_situ(param_1 + 10);
  plVar6 = (longlong *)param_1[9];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  if (param_1[7] != 0) {
    FUN_1439097c0();
  }
  lVar5 = param_1[6];
  if (lVar5 != 0) {
    FUN_14390cab0(lVar5);
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5);
  }
  lVar5 = param_1[5];
  if (lVar5 != 0) {
    FUN_14390ad70(lVar5);
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5);
  }
  return;
}



// FUNCTION 1439096a0 FUN_1439096a0 body=286 status=ok
// SIG undefined FUN_1439096a0(void)

void FUN_1439096a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  local_30 = (undefined8 *)FUN_1438f6c90(&local_30,0,0);
  uVar4 = FUN_1438f30f0(local_20,param_1 + 1);
  FUN_14390d6f0(*(undefined8 *)(*param_1 + 0x30),uVar4,&local_30);
  lVar1 = *param_1;
  iVar3 = _Mtx_lock(lVar1 + 0x50);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  FUN_1438f2520((undefined8 *)(*param_1 + 0xa0),*(undefined8 *)(*param_1 + 0xa0),*local_30,local_30,
                0);
  iVar3 = _Mtx_unlock(lVar1 + 0x50);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  puVar6 = (undefined8 *)*local_30;
  *local_30 = local_30;
  local_30[1] = local_30;
  local_28 = 0;
  if (puVar6 != local_30) {
    do {
      puVar2 = (undefined8 *)*puVar6;
      plVar5 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar6);
      puVar6 = puVar2;
    } while (puVar2 != local_30);
  }
  puVar6 = local_30;
  plVar5 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar5 + 0x18))(plVar5,puVar6);
  return;
}



// FUNCTION 1439097c0 FUN_1439097c0 body=101 status=ok
// SIG undefined FUN_1439097c0(void)

void FUN_1439097c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0xfffffffffffffffe;
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
    }
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,*plVar2,param_4,uVar3);
  }
  return;
}



// FUNCTION 143909830 FUN_143909830 body=93 status=ok
// SIG undefined FUN_143909830(void)

undefined8 FUN_143909830(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143909580();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar1 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1,*plVar1,param_4,uVar2);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xb0);
    }
  }
  return param_1;
}



// FUNCTION 143909890 FUN_143909890 body=33 status=ok
// SIG undefined FUN_143909890(void)

undefined8 FUN_143909890(undefined8 param_1,longlong param_2)

{
  FUN_14390b490(*(undefined8 *)(param_2 + 0x28),param_1);
  return param_1;
}



// FUNCTION 1439098c0 FUN_1439098c0 body=44 status=ok
// SIG undefined FUN_1439098c0(void)

undefined8 FUN_1439098c0(longlong param_1,undefined8 param_2)

{
  FUN_14390cf10(*(undefined8 *)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 1439098f0 FUN_1439098f0 body=1291 status=ok
// SIG undefined FUN_1439098f0(void)

BADSPACEBASE * FUN_1439098f0(longlong param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  int local_res8 [2];
  undefined8 uVar14;
  longlong *local_50;
  longlong local_48;
  undefined1 local_40 [16];
  int *local_30;
  int *piStack_28;
  int *local_20;
  
  uVar14 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_30 = (int *)0x0;
    piStack_28 = (int *)0x0;
    local_20 = (int *)0x0;
    if (param_2 == (longlong *)0x0) {
      lVar8 = (longlong)*(int *)(param_1 + 0x10);
    }
    else {
      lVar8 = param_2[1] - *param_2 >> 2;
    }
    if (lVar8 != 0) {
      FUN_1438f7260(&local_30);
    }
    if (param_2 == (longlong *)0x0) {
      local_res8[0] = 0;
      piVar7 = local_30;
      piVar13 = local_20;
      if (0 < *(int *)(param_1 + 0x10)) {
        do {
          iVar2 = local_res8[0];
          if ((local_res8 < piStack_28) && (piVar7 <= local_res8)) {
            lVar8 = (longlong)local_res8 - (longlong)piVar7;
            if ((piStack_28 == piVar13) && ((longlong)piVar13 - (longlong)piStack_28 >> 2 == 0)) {
              lVar9 = (longlong)piStack_28 - (longlong)piVar7 >> 2;
              if (lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar3 = lVar9 + 1;
              uVar12 = (longlong)piVar13 - (longlong)piVar7 >> 2;
              uVar10 = 0;
              if (uVar12 <= ~(uVar12 >> 1)) {
                uVar10 = (uVar12 >> 1) + uVar12;
              }
              if (uVar3 <= uVar10) {
                uVar3 = uVar10;
              }
              FUN_1438f7260(&local_30,uVar3,uVar10,uVar12,uVar14);
              piVar7 = local_30;
              piVar13 = local_20;
            }
            if (piStack_28 != (int *)0x0) {
              *piStack_28 = piVar7[lVar8 >> 2];
              piVar7 = local_30;
              piVar13 = local_20;
            }
          }
          else {
            if ((piStack_28 == piVar13) && ((longlong)piVar13 - (longlong)piStack_28 >> 2 == 0)) {
              lVar8 = (longlong)piStack_28 - (longlong)piVar7 >> 2;
              if (lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar3 = lVar8 + 1;
              uVar12 = (longlong)piVar13 - (longlong)piVar7 >> 2;
              uVar10 = 0;
              if (uVar12 <= ~(uVar12 >> 1)) {
                uVar10 = (uVar12 >> 1) + uVar12;
              }
              if (uVar3 <= uVar10) {
                uVar3 = uVar10;
              }
              FUN_1438f7260(&local_30,uVar3,uVar10,uVar12,uVar14);
              piVar7 = local_30;
              piVar13 = local_20;
            }
            if (piStack_28 != (int *)0x0) {
              *piStack_28 = iVar2;
              piVar7 = local_30;
              piVar13 = local_20;
            }
          }
          piStack_28 = piStack_28 + 1;
          local_res8[0] = iVar2 + 1;
        } while (local_res8[0] < *(int *)(param_1 + 0x10));
      }
    }
    else {
      uVar10 = 0;
      lVar8 = *param_2;
      uVar3 = param_2[1] - lVar8 >> 2;
      piVar7 = local_30;
      piVar13 = local_20;
      if (uVar3 != 0) {
        do {
          if (uVar3 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            std::_Xout_of_range("invalid vector<T> subscript");
          }
          piVar1 = (int *)(lVar8 + uVar10 * 4);
          if ((piVar1 < piStack_28) && (piVar7 <= piVar1)) {
            lVar8 = (longlong)piVar1 - (longlong)piVar7;
            if ((piStack_28 == piVar13) && ((longlong)piVar13 - (longlong)piStack_28 >> 2 == 0)) {
              lVar9 = (longlong)piStack_28 - (longlong)piVar7 >> 2;
              if (lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar3 = lVar9 + 1;
              uVar11 = (longlong)piVar13 - (longlong)piVar7 >> 2;
              uVar12 = 0;
              if (uVar11 <= ~(uVar11 >> 1)) {
                uVar12 = (uVar11 >> 1) + uVar11;
              }
              if (uVar3 <= uVar12) {
                uVar3 = uVar12;
              }
              FUN_1438f7260(&local_30,uVar3,uVar12,uVar11,uVar14);
              piVar7 = local_30;
              piVar13 = local_20;
            }
            if (piStack_28 != (int *)0x0) {
              iVar2 = piVar7[lVar8 >> 2];
LAB_143909aa6:
              *piStack_28 = iVar2;
              piVar7 = local_30;
              piVar13 = local_20;
            }
          }
          else {
            if ((piStack_28 == piVar13) && ((longlong)piVar13 - (longlong)piStack_28 >> 2 == 0)) {
              lVar8 = (longlong)piStack_28 - (longlong)piVar7 >> 2;
              if (lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
                std::_Xlength_error("vector<T> too long");
              }
              uVar3 = lVar8 + 1;
              uVar11 = (longlong)piVar13 - (longlong)piVar7 >> 2;
              uVar12 = 0;
              if (uVar11 <= ~(uVar11 >> 1)) {
                uVar12 = (uVar11 >> 1) + uVar11;
              }
              if (uVar3 <= uVar12) {
                uVar3 = uVar12;
              }
              FUN_1438f7260(&local_30,uVar3,uVar12,uVar11,uVar14);
              piVar7 = local_30;
              piVar13 = local_20;
            }
            if (piStack_28 != (int *)0x0) {
              iVar2 = *piVar1;
              goto LAB_143909aa6;
            }
          }
          piStack_28 = piStack_28 + 1;
          uVar10 = uVar10 + 1;
          lVar8 = *param_2;
          uVar3 = param_2[1] - lVar8 >> 2;
        } while (uVar10 < uVar3);
      }
      FUN_143909000(piVar7,piStack_28,(longlong)piStack_28 - (longlong)piVar7 >> 2,local_res8);
    }
    lVar8 = FUN_1438f1870();
    if (lVar8 == 0) {
      FUN_14390d040(*(undefined8 *)(param_1 + 0x30),&local_30,param_3);
    }
    else {
      local_50 = (longlong *)0x0;
      local_48 = 0;
      plVar4 = (longlong *)FUN_1438f6c90(&local_50,0,0);
      piVar13 = piStack_28;
      for (piVar7 = local_30; local_50 = plVar4, piVar7 != piVar13; piVar7 = piVar7 + 1) {
        lVar8 = FUN_1438f1fd0(&local_50,plVar4,plVar4[1],piVar7);
        if (local_48 == -2) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        local_48 = local_48 + 1;
        plVar4[1] = lVar8;
        **(longlong **)(lVar8 + 8) = lVar8;
        plVar4 = local_50;
      }
      uVar14 = FUN_1438f3090(local_40,&local_50);
      FUN_143909e10(param_1,uVar14);
      if (param_3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
      }
      plVar4 = (longlong *)*local_50;
      *local_50 = (longlong)local_50;
      local_50[1] = (longlong)local_50;
      local_48 = 0;
      if (plVar4 != local_50) {
        do {
          plVar6 = (longlong *)*plVar4;
          plVar5 = (longlong *)FUN_1438f1790();
          (**(code **)(*plVar5 + 0x18))(plVar5,plVar4);
          plVar4 = plVar6;
        } while (plVar6 != local_50);
      }
      plVar4 = local_50;
      plVar6 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar4);
    }
    piVar7 = local_30;
    if (local_30 != (int *)0x0) {
      plVar4 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar4 + 0x18))(plVar4,piVar7);
    }
    register0x00000020 = (BADSPACEBASE *)0x1;
  }
  return register0x00000020;
}



// FUNCTION 143909e10 FUN_143909e10 body=440 status=ok
// SIG undefined FUN_143909e10(void)

undefined8 FUN_143909e10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined8 local_res20;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 local_c0 [2];
  longlong local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [80];
  
  local_98 = 0xfffffffffffffffe;
  local_res10 = param_2;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_1438f79a0(param_2);
    uVar5 = *param_2;
    plVar4 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar5);
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_1438f1870();
    if (plVar4 == (longlong *)0x0) {
      FUN_1438f79a0(param_2);
      uVar5 = *param_2;
      plVar4 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar4 + 0x18))(plVar4,uVar5);
      uVar5 = 0;
    }
    else {
      local_res18 = (undefined8 *)*param_2;
      local_res20 = *local_res18;
      FUN_143908e10(param_2,local_90,local_res20,local_res18,local_res8,param_2[1]);
      local_c8 = param_1;
      FUN_1438f3090(local_c0,param_2);
      local_88 = &local_d8;
      local_d8 = 0;
      uStack_d0 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_143903a60(&local_d8,uVar5);
      local_b0 = local_c8;
      FUN_1438f3090(local_a8,local_c0);
      uVar5 = FUN_1439086f0(local_70,&local_b0);
      uVar5 = (**(code **)(*plVar4 + 8))(plVar4,local_80,uVar5,&local_d8);
      std::shared_ptr<Concurrency::details::_Task_impl<long>_>::operator=(param_1 + 0x40,uVar5);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_78 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_78 + 8))(local_78);
          }
        }
      }
      FUN_1438f79a0(local_c0);
      plVar4 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar4 + 0x18))(plVar4,local_c0[0]);
      FUN_1438f79a0(param_2);
      uVar5 = *param_2;
      plVar4 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar4 + 0x18))(plVar4,uVar5);
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 143909fd0 FUN_143909fd0 body=424 status=ok
// SIG undefined FUN_143909fd0(void)

undefined8 FUN_143909fd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong local_b0 [3];
  undefined8 local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_80;
  undefined1 local_78 [24];
  undefined1 local_60 [72];
  
  local_98 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar3 = *param_2;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar3);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_1438f1870();
    if (plVar4 == (longlong *)0x0) {
      lVar3 = *param_2;
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar3);
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      uVar5 = 0;
    }
    else {
      local_b8 = param_1;
      FUN_1438f30f0(local_b0,param_2);
      local_c8 = 0;
      uStack_c0 = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x48) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_143903a60(&local_c8,uVar5);
      local_80 = local_b8;
      FUN_1438f30f0(local_78,local_b0);
      uVar5 = FUN_143908640(local_60,&local_80);
      uVar5 = (**(code **)(*plVar4 + 8))(plVar4,local_90,uVar5,&local_c8);
      std::shared_ptr<Concurrency::details::_Task_impl<long>_>::operator=(param_1 + 0x40,uVar5);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_88 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_88 + 8))(local_88);
          }
        }
      }
      if (local_b0[0] != 0) {
        plVar4 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar4 + 0x18))(plVar4,local_b0[0]);
      }
      lVar3 = *param_2;
      if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar3);
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 14390a180 FUN_14390a180 body=132 status=ok
// SIG undefined FUN_14390a180(void)

void FUN_14390a180(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = _Mtx_lock(param_1 + 0x50);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  puVar1 = (undefined8 *)(param_1 + 0xa0);
  if (param_2 != puVar1) {
    uVar2 = *param_2;
    *param_2 = *puVar1;
    *puVar1 = uVar2;
    uVar2 = param_2[1];
    param_2[1] = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
  }
  iVar3 = _Mtx_unlock(param_1 + 0x50);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  return;
}



// FUNCTION 14390a210 FUN_14390a210 body=85 status=ok
// SIG undefined FUN_14390a210(void)

undefined8 *
FUN_14390a210(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = std::_Func_impl<<lambda_6ec49cfde1973a6d05aa970b9e1ca53c>,std::allocator<int>,void>::
               vftable;
    param_2[1] = *(undefined8 *)(param_1 + 8);
    FUN_1438f30f0(param_2 + 2,param_1 + 0x10,param_3,param_4,0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 14390a270 FUN_14390a270 body=11 status=ok
// SIG undefined FUN_14390a270(void)

void FUN_14390a270(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18;
  
  FUN_143908770(param_1,param_2,local_res18);
  return;
}



// FUNCTION 14390a280 FUN_14390a280 body=124 status=ok
// SIG undefined FUN_14390a280(void)

void FUN_14390a280(undefined8 *param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  *param_1 = std::_Func_impl<<lambda_6ec49cfde1973a6d05aa970b9e1ca53c>,std::allocator<int>,void>::
             vftable;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = std::_Func_base<void>::vftable;
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1);
  }
  return;
}



// FUNCTION 14390a300 FUN_14390a300 body=115 status=ok
// SIG undefined FUN_14390a300(void)

void FUN_14390a300(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = std::_Func_impl<<lambda_953f2e7090df42e085e02be651a06762>,std::allocator<int>,void>::
             vftable;
  FUN_1438f79a0(param_1 + 2);
  uVar1 = param_1[2];
  plVar2 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,*plVar2,param_4,uVar3);
  *param_1 = std::_Func_base<void>::vftable;
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1);
  }
  return;
}



// FUNCTION 14390a380 FUN_14390a380 body=9 status=ok
// SIG undefined FUN_14390a380(void)

void FUN_14390a380(longlong param_1)

{
  FUN_1439096a0(param_1 + 8);
  return;
}



// FUNCTION 14390a390 FUN_14390a390 body=45 status=ok
// SIG undefined FUN_14390a390(void)

void FUN_14390a390(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FUN_1438f3090(local_18,param_1 + 0x10);
  FUN_14390d2c0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30),uVar1);
  return;
}



// FUNCTION 14390a3c0 FUN_14390a3c0 body=78 status=ok
// SIG undefined FUN_14390a3c0(void)

undefined8 * FUN_14390a3c0(longlong param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = std::_Func_impl<<lambda_6ec49cfde1973a6d05aa970b9e1ca53c>,std::allocator<int>,void>::
               vftable;
    param_2[1] = *(undefined8 *)(param_1 + 8);
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = *(undefined8 *)(param_1 + 0x10);
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    param_2[4] = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return param_2;
}



// FUNCTION 14390a410 FUN_14390a410 body=136 status=ok
// SIG undefined FUN_14390a410(void)

undefined8 *
FUN_14390a410(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = std::_Func_impl<<lambda_953f2e7090df42e085e02be651a06762>,std::allocator<int>,void>::
               vftable;
    param_2[1] = *(undefined8 *)(param_1 + 8);
    puVar1 = param_2 + 2;
    *puVar1 = 0;
    param_2[3] = 0;
    uVar2 = FUN_1438f6c90(puVar1,0,0,param_4,0xfffffffffffffffe);
    *puVar1 = uVar2;
    *puVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = param_2[3];
    param_2[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  return param_2;
}



// FUNCTION 14390a4a0 FUN_14390a4a0 body=168 status=ok
// SIG undefined FUN_14390a4a0(void)

void FUN_14390a4a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,ulonglong param_6)

{
  undefined8 uVar1;
  
  if (param_1 != param_3) {
    if (-*(longlong *)(param_1 + 8) - 2U < param_6) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_6;
    *(longlong *)(param_3 + 8) = *(longlong *)(param_3 + 8) - param_6;
  }
  **(longlong **)(param_4 + 8) = param_5;
  **(longlong **)(param_5 + 8) = param_2;
  **(longlong **)(param_2 + 8) = param_4;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_4 + 8) = uVar1;
  return;
}



// FUNCTION 14390a550 FUN_14390a550 body=8 status=ok
// SIG undefined FUN_14390a550(void)

TypeDescriptor * FUN_14390a550(void)

{
  return &<lambda_6ec49cfde1973a6d05aa970b9e1ca53c>::RTTI_Type_Descriptor;
}



// FUNCTION 14390a560 FUN_14390a560 body=8 status=ok
// SIG undefined FUN_14390a560(void)

TypeDescriptor * FUN_14390a560(void)

{
  return &<lambda_953f2e7090df42e085e02be651a06762>::RTTI_Type_Descriptor;
}



// FUNCTION 14390a570 FUN_14390a570 body=264 status=ok
// SIG undefined FUN_14390a570(void)

void FUN_14390a570(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)*param_1;
  uVar5 = 0;
  uVar3 = (param_1[1] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[1] < puVar2) {
    uVar3 = uVar5;
  }
  uVar4 = uVar5;
  if (uVar3 != 0) {
    do {
      FUN_14390eed0(*puVar2);
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  puVar2 = (undefined8 *)param_1[3];
  uVar3 = (param_1[4] - (longlong)puVar2) + 7 >> 3;
  if ((undefined8 *)param_1[4] < puVar2) {
    uVar3 = uVar5;
  }
  if (uVar3 != 0) {
    do {
      FUN_14390eee0(*puVar2);
      puVar2 = puVar2 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar3);
  }
  uVar3 = param_1[3];
  if (uVar3 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar3);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar3 = *param_1;
  if (uVar3 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,uVar3,*plVar1,param_4,uVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14390a680 FUN_14390a680 body=19 status=ok
// SIG undefined FUN_14390a680(void)

undefined8 *
FUN_14390a680(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return param_1;
}



// FUNCTION 14390a6a0 FUN_14390a6a0 body=23 status=ok
// SIG undefined FUN_14390a6a0(void)

undefined8 * FUN_14390a6a0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 14390a6c0 FUN_14390a6c0 body=43 status=ok
// SIG undefined FUN_14390a6c0(void)

void FUN_14390a6c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1[1] != 0) && (*(char *)((longlong)param_1 + 0x14) != '\0')) {
    FUN_14390d890(*param_1,*(undefined4 *)(param_1 + 2),param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 14390a6f0 FUN_14390a6f0 body=16 status=ok
// SIG undefined FUN_14390a6f0(void)

undefined8 * FUN_14390a6f0(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14390a700 FUN_14390a700 body=84 status=ok
// SIG undefined FUN_14390a700(void)

void FUN_14390a700(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      if ((undefined8 *)(puVar1 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -2) = 0;
        *puVar1 = 0xffffffff;
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1[4] = 0xffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
      }
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14390a760 FUN_14390a760 body=127 status=ok
// SIG undefined FUN_14390a760(void)

undefined8 *
FUN_14390a760(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar3 = 0;
  uVar4 = 0;
  plVar1 = (longlong *)FUN_1438f1790();
  lVar2 = (**(code **)(*plVar1 + 8))(plVar1,0xd0);
  if (lVar2 != 0) {
    uVar3 = FUN_14390ab30(lVar2,*param_2,*param_3,*param_4,uVar4,uVar5);
  }
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 14390a7e0 FUN_14390a7e0 body=153 status=ok
// SIG undefined FUN_14390a7e0(void)

undefined8 * FUN_14390a7e0(undefined8 *param_1,int param_2,int param_3,int param_4,char param_5)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  *(int *)(param_1 + 1) = param_2;
  *(int *)((longlong)param_1 + 0xc) = param_3;
  *(int *)(param_1 + 2) = param_4;
  *(int *)((longlong)param_1 + 0x14) = param_3 * param_4;
  uVar5 = param_3 * param_4 * param_2;
  if (param_5 != '\0') {
    plVar1 = (longlong *)FUN_1438f1790();
    puVar2 = (undefined1 *)(**(code **)(*plVar1 + 8))(plVar1,uVar5);
    if (uVar5 != 0) {
      puVar6 = puVar2;
      for (uVar4 = (ulonglong)uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    *param_1 = puVar2;
    return param_1;
  }
  plVar1 = (longlong *)FUN_1438f1790();
  uVar3 = (**(code **)(*plVar1 + 8))(plVar1,uVar5);
  *param_1 = uVar3;
  return param_1;
}



// FUNCTION 14390a880 FUN_14390a880 body=184 status=ok
// SIG undefined FUN_14390a880(void)

undefined8 * FUN_14390a880(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)param_2;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry>::TableEntry>
             ::vftable;
  FUN_14390aa40(param_1 + 1,lVar2);
  lVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)((longlong)param_1 + 0x24) = param_2 + -1;
  if (0 < param_2) {
    iVar1 = 1;
    do {
      lVar3 = lVar3 + 0x30;
      *(int *)(param_1[1] + -4 + lVar3) = iVar1 + -2;
      *(int *)(param_1[1] + -8 + lVar3) = iVar1;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1[1] + 0x2c + (longlong)*(int *)(param_1 + 4) * 0x30) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 0x28 + (longlong)*(int *)((longlong)param_1 + 0x24) * 0x30) =
       0xffffffff;
  return param_1;
}



// FUNCTION 14390a940 FUN_14390a940 body=243 status=ok
// SIG undefined FUN_14390a940(void)

int * FUN_14390a940(int *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = -1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = -1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = -1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = -1;
  FUN_14390a880(param_1 + 0x16);
  iVar1 = (param_3 + -1 + param_2) / param_3 + 1;
  param_1[0x20] = iVar1;
  FUN_1438fc130(param_1 + 0x22,(longlong)(iVar1 * 2));
  **(int **)(param_1 + 0x22) = param_1[0x1e];
  *(int *)(*(longlong *)(param_1 + 0x22) + 4) = param_1[0x1f];
  iVar1 = 2;
  if (2 < param_1[0x20] * 2) {
    lVar2 = 8;
    do {
      *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x22)) = 0xffffffff;
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 4;
    } while (iVar1 < param_1[0x20] * 2);
  }
  return param_1;
}



// FUNCTION 14390aa40 FUN_14390aa40 body=140 status=ok
// SIG undefined FUN_14390aa40(void)

longlong * FUN_14390aa40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    lVar3 = param_2 * 0x30;
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1,lVar3);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar3 + *param_1;
    FUN_14390a700(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar4);
    param_1[1] = param_1[1] + lVar3;
  }
  return param_1;
}



// FUNCTION 14390aad0 FUN_14390aad0 body=82 status=ok
// SIG undefined FUN_14390aad0(void)

longlong FUN_14390aad0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = (undefined4)param_4;
  local_res18[0] = (undefined4)param_3;
  local_res10[0] = param_2;
  _Mtx_init_in_situ(param_1,2,param_3,param_4,0xfffffffffffffffe);
  FUN_14390a760(param_1 + 0x50,local_res10,local_res18,local_res20);
  return param_1;
}



// FUNCTION 14390ab30 FUN_14390ab30 body=299 status=ok
// SIG undefined FUN_14390ab30(void)

int * FUN_14390ab30(int *param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  int **ppiVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  int local_res20 [2];
  int *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  int *local_60;
  uint uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [40];
  
  local_78 = 0xfffffffffffffffe;
  iVar6 = (int)param_2;
  *param_1 = iVar6;
  param_1[1] = 0x7fffffff;
  local_res20[0] = param_4;
  FUN_14390a940(param_1 + 2,param_2,1);
  param_1[0x2a] = -1;
  param_1[0x2b] = -1;
  local_88 = (int *)CONCAT44(local_88._4_4_,1);
  ppiVar2 = &local_88;
  if (0 < param_4) {
    ppiVar2 = (int **)local_res20;
  }
  iVar7 = *(int *)ppiVar2;
  piVar1 = param_1 + 0x2c;
  param_1[0x2e] = iVar6;
  param_1[0x2f] = param_3;
  param_1[0x30] = iVar7;
  iVar7 = iVar7 * param_3;
  param_1[0x31] = iVar7;
  uVar8 = iVar7 * iVar6;
  plVar3 = (longlong *)FUN_1438f1790();
  puVar4 = (undefined1 *)(**(code **)(*plVar3 + 8))(plVar3,uVar8);
  if (uVar8 != 0) {
    puVar9 = puVar4;
    for (uVar5 = (ulonglong)uVar8; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  *(undefined1 **)piVar1 = puVar4;
  param_1[0x32] = iVar6;
  param_1[0x33] = param_3;
  uVar8 = 0;
  if (0 < iVar6) {
    do {
      local_70 = 0;
      local_68 = ~uVar8;
      uStack_54 = uStack_7c;
      local_88 = piVar1;
      uStack_80 = uVar8;
      uStack_58 = uVar8;
      local_60 = piVar1;
      FUN_14390af70(param_1,&local_70,local_50);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < param_1[0x32]);
  }
  return param_1;
}



// FUNCTION 14390ac60 FUN_14390ac60 body=87 status=ok
// SIG undefined FUN_14390ac60(void)

void FUN_14390ac60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry>::TableEntry>
             ::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



// FUNCTION 14390acc0 FUN_14390acc0 body=151 status=ok
// SIG undefined FUN_14390acc0(void)

void FUN_14390acc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(undefined ***)(param_1 + 0x58) =
       TritonRuntime::
       FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry>::TableEntry>
       ::vftable;
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14390ad60 FUN_14390ad60 body=9 status=ok
// SIG undefined FUN_14390ad60(void)

void FUN_14390ad60(longlong param_1)

{
  FUN_14390acc0(param_1 + 8);
  return;
}



// FUNCTION 14390ad70 FUN_14390ad70 body=42 status=ok
// SIG undefined FUN_14390ad70(void)

void FUN_14390ad70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_14390ada0(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x00014390ad93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_destroy_in_situ(param_1);
  return;
}



// FUNCTION 14390ada0 FUN_14390ada0 body=103 status=ok
// SIG undefined FUN_14390ada0(void)

void FUN_14390ada0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = 0xfffffffffffffffe;
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      plVar1 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_2 + 0xb0));
      *(undefined8 *)(param_2 + 0xb0) = 0;
    }
    FUN_14390acc0(param_2 + 8);
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2,*plVar1,param_4,uVar2);
  }
  return;
}



// FUNCTION 14390ae10 FUN_14390ae10 body=179 status=ok
// SIG undefined FUN_14390ae10(void)

ulonglong FUN_14390ae10(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  return ((((ulonglong)*(byte *)((longlong)param_2 + 9) ^
           ((ulonglong)(byte)param_2[1] ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 10)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_2 + 0xb)) * 0x100000001b3 ^
         ((((((((uVar1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar1 >> 8 & 0xff) *
               0x100000001b3 ^ uVar1 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x18 & 0xff) *
             0x100000001b3 ^ uVar1 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x28 & 0xff) *
           0x100000001b3 ^ uVar1 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar1 >> 0x38) * 0x100000001b3;
}



// FUNCTION 14390aed0 FUN_14390aed0 body=150 status=ok
// SIG undefined FUN_14390aed0(void)

undefined8 *
FUN_14390aed0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = TritonRuntime::
             FixedLinkedList<TritonRuntime::LRCCache<TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry,TritonRuntime::EncodedDataCache::DecodeCacheEntry>::TableEntry>
             ::vftable;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      plVar2 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,*plVar2,param_4,uVar3);
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14390af70 FUN_14390af70 body=789 status=ok
// SIG undefined FUN_14390af70(void)

undefined8 FUN_14390af70(int *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  auVar3 = *param_2;
  local_38 = *(undefined8 *)param_2[1];
  uStack_30 = *(undefined8 *)(param_2[1] + 8);
  uVar17 = auVar3._8_4_;
  uVar15 = 0;
  uVar11 = (auVar3._11_4_ & 0xff ^
           (((uVar17 & 0xff ^ 0x84222325) * 0x1b3 ^ auVar3._9_4_ & 0xff) * 0x1b3 ^
           auVar3._10_4_ & 0xff) * 0x1b3) * 0x1b3 ^
           ((((((((auVar3._0_4_ & 0xff ^ 0x84222325) * 0x1b3 ^ auVar3._1_4_ & 0xff) * 0x1b3 ^
                auVar3._2_4_ & 0xff) * 0x1b3 ^ auVar3._3_4_ & 0xff) * 0x1b3 ^ auVar3._4_4_ & 0xff) *
              0x1b3 ^ auVar3._5_4_ & 0xff) * 0x1b3 ^ auVar3._6_4_ & 0xff) * 0x1b3 ^
           auVar3._7_4_ & 0xff) * 0x1b3;
  uVar14 = (int)uVar11 >> 0x1f;
  iVar4 = ((int)((uVar11 ^ uVar14) - uVar14) % (param_1[0x22] + -1) + 1) * 2;
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x24) + (longlong)iVar4 * 4);
  if (iVar12 != -1) {
    lVar5 = *(longlong *)(param_1 + 0x1a);
    iVar4 = *(int *)(lVar5 + 0x28 +
                    (longlong)*(int *)(*(longlong *)(param_1 + 0x24) + (longlong)(iVar4 + 1) * 4) *
                    0x30);
    while (iVar12 != iVar4) {
      lVar13 = (longlong)iVar12;
      if ((*(longlong *)(lVar5 + lVar13 * 0x30) == auVar3._0_8_) &&
         (*(uint *)(lVar5 + 8 + lVar13 * 0x30) == uVar17)) {
        if (iVar12 != -1) {
          iVar16 = 0;
          iVar10 = 0;
          if (iVar12 != iVar4) goto LAB_14390b160;
          goto LAB_14390b137;
        }
        break;
      }
      iVar12 = *(int *)(lVar5 + 0x28 + lVar13 * 0x30);
    }
  }
  iVar12 = -1;
  iVar16 = 0;
  goto LAB_14390b137;
  while( true ) {
    iVar12 = *(int *)(lVar5 + 0x28 + lVar13 * 0x30);
    iVar16 = iVar16 + 1;
    iVar10 = iVar16;
    if (iVar12 == iVar4) break;
LAB_14390b160:
    iVar16 = iVar10;
    lVar13 = (longlong)iVar12;
    if ((*(longlong *)(lVar5 + lVar13 * 0x30) != auVar3._0_8_) ||
       (*(uint *)(lVar5 + 8 + lVar13 * 0x30) != uVar17)) break;
  }
LAB_14390b137:
  if (iVar16 < param_1[1]) {
    if (param_1[3] == *param_1) {
      if (param_1[3] != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1a);
        iVar12 = param_1[0x2b];
        puVar1 = (undefined8 *)(lVar5 + (longlong)iVar12 * 0x30);
        uVar15 = puVar1[1];
        *param_3 = *puVar1;
        param_3[1] = uVar15;
        puVar2 = (undefined4 *)(lVar5 + 0x10 + (longlong)iVar12 * 0x30);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        *(undefined4 *)(param_3 + 2) = *puVar2;
        *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
        *(undefined4 *)(param_3 + 3) = uVar7;
        *(undefined4 *)((longlong)param_3 + 0x1c) = uVar8;
        FUN_14390bbf0(param_1);
      }
      uVar15 = 1;
    }
  }
  else {
    uVar15 = 1;
    if (iVar12 == -1) {
      iVar12 = param_1[0x21];
    }
    else {
      iVar12 = *(int *)(*(longlong *)(param_1 + 0x1a) + 0x2c + (longlong)iVar12 * 0x30);
    }
    lVar5 = *(longlong *)(param_1 + 0x1a);
    puVar1 = (undefined8 *)(lVar5 + (longlong)iVar12 * 0x30);
    uVar9 = puVar1[1];
    *param_3 = *puVar1;
    param_3[1] = uVar9;
    puVar2 = (undefined4 *)(lVar5 + 0x10 + (longlong)iVar12 * 0x30);
    uVar6 = puVar2[1];
    uVar7 = puVar2[2];
    uVar8 = puVar2[3];
    *(undefined4 *)(param_3 + 2) = *puVar2;
    *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
    *(undefined4 *)(param_3 + 3) = uVar7;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uVar8;
    FUN_14390bbf0(param_1);
  }
  local_48 = *(undefined8 *)*param_2;
  uStack_40 = *(undefined8 *)(*param_2 + 8);
  local_38 = *(undefined8 *)param_2[1];
  uStack_30 = *(undefined8 *)(param_2[1] + 8);
  if (param_1[0x2a] == -1) {
    local_28 = 0xffffffffffffffff;
    iVar12 = FUN_14390b760(param_1 + 2,&local_48);
    param_1[0x2b] = iVar12;
  }
  else {
    local_28 = CONCAT44(0xffffffff,param_1[0x2a]);
    iVar12 = FUN_14390b760(param_1 + 2,&local_48);
    *(int *)(*(longlong *)(param_1 + 0x1a) + 0x24 + (longlong)param_1[0x2a] * 0x30) = iVar12;
  }
  param_1[0x2a] = iVar12;
  return uVar15;
}



// FUNCTION 14390b290 FUN_14390b290 body=497 status=ok
// SIG undefined FUN_14390b290(void)

undefined8 FUN_14390b290(longlong param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  auVar3 = *param_2;
  uVar11 = ((auVar3._10_4_ & 0xff ^
            ((auVar3._8_4_ & 0xff ^ 0x84222325) * 0x1b3 ^ auVar3._9_4_ & 0xff) * 0x1b3) * 0x1b3 ^
           auVar3._11_4_ & 0xff) * 0x1b3 ^
           ((((((((auVar3._0_4_ & 0xff ^ 0x84222325) * 0x1b3 ^ auVar3._1_4_ & 0xff) * 0x1b3 ^
                auVar3._2_4_ & 0xff) * 0x1b3 ^ auVar3._3_4_ & 0xff) * 0x1b3 ^ auVar3._4_4_ & 0xff) *
              0x1b3 ^ auVar3._5_4_ & 0xff) * 0x1b3 ^ auVar3._6_4_ & 0xff) * 0x1b3 ^
           auVar3._7_4_ & 0xff) * 0x1b3;
  uVar13 = (int)uVar11 >> 0x1f;
  iVar6 = ((int)((uVar11 ^ uVar13) - uVar13) % (*(int *)(param_1 + 0x88) + -1) + 1) * 2;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar6 * 4);
  if (iVar4 != -1) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    while (iVar4 != *(int *)(lVar5 + 0x28 +
                            (longlong)
                            *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar6 + 1) * 4) *
                            0x30)) {
      lVar12 = (longlong)iVar4;
      if ((*(longlong *)(lVar5 + lVar12 * 0x30) == auVar3._0_8_) &&
         (*(uint *)(lVar5 + 8 + lVar12 * 0x30) == auVar3._8_4_)) {
        if (iVar4 == -1) {
          return 0;
        }
        puVar1 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x30);
        uVar10 = puVar1[1];
        *(undefined8 *)*param_2 = *puVar1;
        *(undefined8 *)(*param_2 + 8) = uVar10;
        puVar2 = (undefined4 *)(lVar5 + 0x10 + (longlong)iVar4 * 0x30);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        *(undefined4 *)param_2[1] = *puVar2;
        *(undefined4 *)(param_2[1] + 4) = uVar7;
        *(undefined4 *)(param_2[1] + 8) = uVar8;
        *(undefined4 *)(param_2[1] + 0xc) = uVar9;
        FUN_14390bb30(param_1);
        return 1;
      }
      iVar4 = *(int *)(lVar5 + 0x28 + lVar12 * 0x30);
    }
  }
  return 0;
}



// FUNCTION 14390b490 FUN_14390b490 body=131 status=ok
// SIG undefined FUN_14390b490(void)

undefined8 FUN_14390b490(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  FUN_14390b520(*(undefined8 *)(param_1 + 0x50),param_2,param_3,param_4,uVar2);
  iVar1 = _Mtx_unlock(param_1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  return param_2;
}



// FUNCTION 14390b520 FUN_14390b520 body=300 status=ok
// SIG undefined FUN_14390b520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14390b520(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0xffffffff;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_3c;
  local_88 = param_3;
  local_80 = param_4;
  cVar2 = FUN_14390b290(0,&local_88);
  if (cVar2 == '\0') {
    FLightSceneProxy::GetOrigin(param_3,&local_48);
    if (*(int *)(param_1 + 0xc0) < local_48._4_4_ * (int)local_48) {
      FUN_14390b650(param_1 + 0xb0,*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc));
    }
    if (*(int *)(param_1 + 0xc) == 0) {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
    }
    else {
      puVar1 = (undefined4 *)
               (*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)*(int *)(param_1 + 0xac) * 0x30);
      local_48._0_4_ = *puVar1;
      local_48._4_4_ = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
      FUN_14390bbf0(param_1,*(int *)(param_1 + 0xac));
      local_58 = (int)local_48;
      uStack_54 = local_48._4_4_;
      uStack_50 = uStack_40;
      uStack_4c = uStack_3c;
      local_68 = param_3;
      local_60 = param_4;
      FUN_14390af70(param_1,&local_68,&local_88);
      FUN_143905c10(param_3,param_4,&local_58,1);
      *param_2 = CONCAT44(uStack_54,local_58);
      param_2[1] = CONCAT44(uStack_4c,uStack_50);
    }
  }
  else {
    *param_2 = CONCAT44(uStack_74,local_78);
    param_2[1] = CONCAT44(uStack_6c,uStack_70);
  }
  return param_2;
}



// FUNCTION 14390b650 FUN_14390b650 body=265 status=ok
// SIG undefined FUN_14390b650(void)

BADSPACEBASE * FUN_14390b650(longlong *param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong local_50 [2];
  int iStack_40;
  int local_3c;
  
  if ((((int)param_1[1] <= param_2) && (*(int *)((longlong)param_1 + 0xc) <= param_3)) &&
     ((int)param_1[2] <= param_4)) {
    FUN_14390a7e0(local_50);
    lVar1 = local_50[0];
    iVar5 = 0;
    if (0 < (int)param_1[1]) {
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      iVar7 = 0;
      do {
        iVar6 = 0;
        iVar4 = iVar7;
        if (0 < iVar2) {
          do {
            memmove((void *)(iVar4 + lVar1),
                    (void *)((longlong)
                             ((int)param_1[2] * iVar6 + *(int *)((longlong)param_1 + 0x14) * iVar5)
                            + *param_1),(longlong)(int)param_1[2]);
            iVar6 = iVar6 + 1;
            iVar2 = *(int *)((longlong)param_1 + 0xc);
            iVar4 = iVar4 + iStack_40;
          } while (iVar6 < iVar2);
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + local_3c;
      } while (iVar5 < (int)param_1[1]);
    }
    FUN_1439044f0(param_1,local_50);
    if (local_50[0] != 0) {
      plVar3 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar3 + 0x18))(plVar3,local_50[0]);
    }
    register0x00000020 = (BADSPACEBASE *)0x1;
  }
  return register0x00000020;
}



// FUNCTION 14390b760 FUN_14390b760 body=442 status=ok
// SIG undefined FUN_14390b760(void)

int FUN_14390b760(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  
  if (param_1[1] == *param_1) {
    return -1;
  }
  uVar10 = FUN_14390ae10(param_1 + 2);
  iVar3 = param_1[0x20];
  iVar4 = **(int **)(param_1 + 0x22);
  lVar13 = (longlong)iVar4;
  iVar11 = FUN_14390b9b0(param_1 + 0x16,iVar4);
  piVar5 = *(int **)(param_1 + 0x22);
  if (*piVar5 == piVar5[1]) {
    piVar5[1] = -1;
    **(undefined4 **)(param_1 + 0x22) = 0xffffffff;
  }
  else {
    *piVar5 = iVar11;
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  iVar11 = ((int)((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) % (iVar3 + -1) + 1) * 2;
  lVar7 = param_2[1];
  plVar1 = (longlong *)(lVar6 + lVar13 * 0x30);
  *plVar1 = *param_2;
  plVar1[1] = lVar7;
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
  lVar7 = param_2[3];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar13 * 0x30);
  *puVar2 = (int)param_2[2];
  puVar2[1] = uVar8;
  puVar2[2] = (int)lVar7;
  puVar2[3] = uVar9;
  *(longlong *)(lVar6 + 0x20 + lVar13 * 0x30) = param_2[4];
  lVar13 = (longlong)iVar11 * 4;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x22) + lVar13);
  lVar6 = (longlong)(iVar11 + 1) * 4;
  if (iVar3 == -1) {
    FUN_14390b920(param_1 + 0x16,param_1[0x1e],iVar4);
    *(int *)(lVar6 + *(longlong *)(param_1 + 0x22)) = iVar4;
    *(int *)(*(longlong *)(param_1 + 0x22) + lVar13) = iVar4;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18);
    iVar11 = *(int *)(lVar7 + 0x28 +
                     (longlong)*(int *)(lVar6 + *(longlong *)(param_1 + 0x22)) * 0x30);
    iVar14 = iVar3;
    if (iVar3 != iVar11) {
      do {
        lVar12 = (longlong)iVar14;
        if ((*(longlong *)(lVar7 + lVar12 * 0x30) == *param_2) &&
           (*(int *)(lVar7 + 8 + lVar12 * 0x30) == (int)param_2[1])) break;
        iVar14 = *(int *)(lVar7 + 0x28 + lVar12 * 0x30);
      } while (iVar14 != iVar11);
    }
    FUN_14390b920(param_1 + 0x16,iVar14,iVar4);
    if (iVar14 == iVar3) {
      *(int *)(*(longlong *)(param_1 + 0x22) + lVar13) = iVar4;
    }
    if (iVar14 == iVar11) {
      *(int *)(lVar6 + *(longlong *)(param_1 + 0x22)) = iVar4;
    }
  }
  param_1[1] = param_1[1] + 1;
  return iVar4;
}



// FUNCTION 14390b920 FUN_14390b920 body=135 status=ok
// SIG undefined FUN_14390b920(void)

undefined8 FUN_14390b920(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 == -1) {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x2c + (longlong)param_2 * 0x30);
  }
  if (iVar3 == -1) {
    *(int *)(param_1 + 0x20) = param_3;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 8) + 0x28 + (longlong)iVar3 * 0x30) = param_3;
  }
  lVar2 = (longlong)param_3;
  *(int *)(*(longlong *)(param_1 + 8) + 0x2c + lVar2 * 0x30) = iVar3;
  if (param_2 == -1) {
    *(int *)(param_1 + 0x24) = param_3;
    lVar1 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(lVar1 + 0x28 + lVar2 * 0x30) = 0xffffffff;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  *(int *)(*(longlong *)(param_1 + 8) + 0x2c + (longlong)param_2 * 0x30) = param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  *(int *)(lVar1 + 0x28 + lVar2 * 0x30) = param_2;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 14390b9b0 FUN_14390b9b0 body=109 status=ok
// SIG undefined FUN_14390b9b0(void)

int FUN_14390b9b0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_2;
  lVar3 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar3 + 0x2c + lVar4 * 0x30);
  iVar2 = *(int *)(lVar3 + 0x28 + lVar4 * 0x30);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0x20) = iVar2;
  }
  else {
    *(int *)(lVar3 + 0x28 + (longlong)iVar1 * 0x30) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0x24) = iVar1;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 8) + 0x2c + (longlong)iVar2 * 0x30) = iVar1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x2c + lVar4 * 0x30) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x28 + lVar4 * 0x30) = 0xffffffff;
  return iVar2;
}



// FUNCTION 14390ba20 FUN_14390ba20 body=261 status=ok
// SIG undefined FUN_14390ba20(void)

undefined8 FUN_14390ba20(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_2 * 0x30;
  uVar6 = FUN_14390ae10(param_1 + 8,*(longlong *)(param_1 + 0x60) + lVar9);
  iVar3 = ((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) %
           (*(int *)(param_1 + 0x80) + -1) + 1) * 2;
  lVar4 = *(longlong *)(param_1 + 0x88);
  lVar2 = (longlong)iVar3 * 4;
  lVar8 = (longlong)(iVar3 + 1);
  iVar3 = *(int *)(lVar4 + lVar8 * 4);
  puVar1 = (undefined4 *)(lVar4 + lVar8 * 4);
  if (*(int *)(lVar4 + lVar2) == iVar3) {
    *puVar1 = 0xffffffff;
    *(undefined4 *)(lVar2 + *(longlong *)(param_1 + 0x88)) = 0xffffffff;
  }
  else if (param_2 == *(int *)(lVar4 + lVar2)) {
    *(undefined4 *)(lVar4 + lVar2) = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x28 + lVar9);
  }
  else if (param_2 == iVar3) {
    if (param_2 == -1) {
      uVar7 = *(undefined4 *)(param_1 + 0x7c);
    }
    else {
      uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x2c + lVar9);
    }
    *puVar1 = uVar7;
  }
  FUN_14390b9b0(param_1 + 0x58,param_2);
  if (**(int **)(param_1 + 0x88) == -1) {
    FUN_14390b920(param_1 + 0x58,*(undefined4 *)(param_1 + 0x78),param_2);
    *(int *)(*(longlong *)(param_1 + 0x88) + 4) = param_2;
  }
  else {
    FUN_14390b920(param_1 + 0x58,**(int **)(param_1 + 0x88),param_2);
  }
  piVar5 = *(int **)(param_1 + 0x88);
  *piVar5 = param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return CONCAT71((int7)((ulonglong)piVar5 >> 8),1);
}



// FUNCTION 14390bb30 FUN_14390bb30 body=179 status=ok
// SIG undefined FUN_14390bb30(void)

void FUN_14390bb30(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  lVar4 = (longlong)param_2;
  iVar1 = *(int *)(lVar3 + 0x24 + lVar4 * 0x30);
  iVar2 = *(int *)(lVar3 + 0x20 + lVar4 * 0x30);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0xa8) = iVar2;
  }
  else {
    *(int *)(lVar3 + 0x20 + (longlong)iVar1 * 0x30) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0xac) = iVar1;
  }
  else {
    *(int *)(*(longlong *)(param_1 + 0x68) + 0x24 + (longlong)iVar2 * 0x30) = iVar1;
  }
  if (*(int *)(param_1 + 0xa8) == -1) {
    *(int *)(param_1 + 0xac) = param_2;
    *(int *)(param_1 + 0xa8) = param_2;
    return;
  }
  *(int *)(*(longlong *)(param_1 + 0x68) + 0x20 + lVar4 * 0x30) = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x68) + 0x24 + lVar4 * 0x30) = 0xffffffff;
  *(int *)(*(longlong *)(param_1 + 0x68) + 0x24 + (longlong)*(int *)(param_1 + 0xa8) * 0x30) =
       param_2;
  *(int *)(param_1 + 0xa8) = param_2;
  return;
}



// FUNCTION 14390bbf0 FUN_14390bbf0 body=125 status=ok
// SIG undefined FUN_14390bbf0(void)

undefined1 FUN_14390bbf0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x68);
  iVar1 = *(int *)(lVar3 + 0x24 + (longlong)param_2 * 0x30);
  iVar2 = *(int *)(lVar3 + 0x20 + (longlong)param_2 * 0x30);
  if (iVar1 == -1) {
    *(int *)(param_1 + 0xa8) = iVar2;
  }
  else {
    *(int *)(lVar3 + 0x20 + (longlong)iVar1 * 0x30) = iVar2;
  }
  if (iVar2 == -1) {
    *(int *)(param_1 + 0xac) = iVar1;
    uVar4 = FUN_14390ba20(param_1 + 8);
    return uVar4;
  }
  *(int *)(*(longlong *)(param_1 + 0x68) + 0x24 + (longlong)iVar2 * 0x30) = iVar1;
  uVar4 = FUN_14390ba20(param_1 + 8);
  return uVar4;
}



// FUNCTION 14390bc70 FUN_14390bc70 body=111 status=ok
// SIG undefined FUN_14390bc70(void)

void FUN_14390bc70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 != param_2) {
    plVar4 = param_1 + 3;
    do {
      lVar1 = plVar4[2];
      if (lVar1 != 0) {
        plVar3 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
      }
      puVar2 = (undefined8 *)*plVar4;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      plVar3 = plVar4 + 3;
      plVar4 = plVar4 + 6;
    } while (plVar3 != param_2);
  }
  return;
}



// FUNCTION 14390bce0 FUN_14390bce0 body=123 status=ok
// SIG undefined FUN_14390bce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14390bce0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b95d08) {
    _Init_thread_header(&DAT_146b95d08);
    if (DAT_146b95d08 == -1) {
      _DAT_146b95d00 = 3;
      _DAT_146b95cf8 = std::_Generic_error_category::vftable;
      atexit((_func_5014 *)&DAT_143ec5db0);
      _Init_thread_footer(&DAT_146b95d08);
    }
  }
  return &DAT_146b95cf8;
}



// FUNCTION 14390bd60 FUN_14390bd60 body=357 status=ok
// SIG undefined FUN_14390bd60(void)

void FUN_14390bd60(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_18;
  longlong local_10;
  
  uVar3 = 0xfffffffffffffffe;
  local_30 = std::_Pad::vftable;
  iVar1 = _Cnd_init(&local_28);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  uVar4 = 1;
  uVar5 = local_28;
  iVar1 = _Mtx_init(&local_20,1);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  uVar6 = 1;
  local_18 = '\0';
  uVar7 = local_20;
  iVar1 = _Mtx_lock();
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  local_30 = std::
             _LaunchPad<std::unique_ptr<std::tuple<void_(__cdecl_TritonRuntime::LoaderWorker::*)(void)___ptr64,TritonRuntime::LoaderWorker*___ptr64>,std::default_delete<std::tuple<void_(__cdecl_TritonRuntime::LoaderWorker::*)(void)___ptr64,TritonRuntime::LoaderWorker*___ptr64>_>_>_>
             ::vftable;
  local_10 = *param_2;
  *param_2 = 0;
  iVar2 = _Thrd_start(param_1,std::_Pad::_Call_func,&local_30,param_4,uVar3,uVar4,uVar5,uVar6,uVar7)
  ;
  iVar1 = 1;
  if (iVar2 != 4) {
    iVar1 = iVar2;
  }
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  while (local_18 == '\0') {
    iVar1 = _Cnd_wait(local_28,local_20);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
  }
  if (local_10 != 0) {
    FMemory::operator_delete(local_10,0x10);
  }
  local_30 = std::_Pad::vftable;
  iVar1 = _Mtx_unlock(local_20);
  if (iVar1 != 0) {
    std::_Throw_C_error(iVar1);
  }
  _Mtx_destroy(local_20);
  _Cnd_destroy(local_28);
  return;
}



// FUNCTION 14390bed0 _Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_*___ptr64,unsigned___int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_>_>_> body=44 status=ok
// SIG undefined _Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_*___ptr64,unsigned___int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_>_>_>(void)

void std::
     _Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_*___ptr64,unsigned___int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_>_>_>
               (undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 14390bf00 FUN_14390bf00 body=89 status=ok
// SIG undefined FUN_14390bf00(void)

void FUN_14390bf00(longlong param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_14390c4f0(param_1);
    }
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 14390bf60 FUN_14390bf60 body=80 status=ok
// SIG undefined FUN_14390bf60(void)

undefined8 * FUN_14390bf60(ulonglong param_1,ulonglong param_2,undefined8 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar3 = (param_2 - param_1) + 7 >> 3;
  if (param_2 < param_1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    lVar1 = param_1 - (longlong)param_3;
    do {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = *(undefined8 *)(lVar1 + (longlong)param_3);
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return param_3;
}



// FUNCTION 14390bfb0 FUN_14390bfb0 body=54 status=ok
// SIG undefined FUN_14390bfb0(void)

undefined8 *
FUN_14390bfb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)FUN_1438f1790();
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1,1,*plVar1,param_4,uVar3);
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 14390bff0 FUN_14390bff0 body=113 status=ok
// SIG undefined FUN_14390bff0(void)

undefined8 * FUN_14390bff0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = *param_2;
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14390c070 FUN_14390c070 body=103 status=ok
// SIG undefined FUN_14390c070(void)

undefined8 *
FUN_14390c070(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)FUN_1438f1790();
  puVar2 = (undefined4 *)(**(code **)(*plVar1 + 8))(plVar1,0x20,*plVar1,param_4,uVar3);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar2 + 2);
    *param_1 = puVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14390c0e0 unordered_map<cTrackingClient::ContextKey,cTrackingClient::OpenContext,cTrackingClient::ContextKeyHash,std::equal_to<cTrackingClient::ContextKey>,std::allocator<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_> body=117 status=ok
// SIG undefined unordered_map<cTrackingClient::ContextKey,cTrackingClient::OpenContext,cTrackingClient::ContextKeyHash,std::equal_to<cTrackingClient::ContextKey>,std::allocator<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>(void)

undefined4 *
std::
unordered_map<cTrackingClient::ContextKey,cTrackingClient::OpenContext,cTrackingClient::ContextKeyHash,std::equal_to<cTrackingClient::ContextKey>,std::allocator<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>
::
unordered_map<cTrackingClient::ContextKey,cTrackingClient::OpenContext,cTrackingClient::ContextKeyHash,std::equal_to<cTrackingClient::ContextKey>,std::allocator<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  puVar1 = (undefined8 *)(param_1 + 2);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar2 = FUN_1438f6c90(puVar1,0,0,param_4,0xfffffffffffffffe);
  *puVar1 = uVar2;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *param_1 = 0x3f800000;
  FUN_14390d920(param_1,8);
  return param_1;
}



// FUNCTION 14390c160 FUN_14390c160 body=122 status=ok
// SIG undefined FUN_14390c160(void)

longlong * FUN_14390c160(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = param_2 + *param_1;
    FUN_1438fe630(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar3);
    param_1[1] = param_1[1] + param_2;
  }
  return param_1;
}



// FUNCTION 14390c1e0 FUN_14390c1e0 body=140 status=ok
// SIG undefined FUN_14390c1e0(void)

longlong * FUN_14390c1e0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar1 = (longlong *)FUN_1438f1790();
    lVar3 = param_2 * 0x30;
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1,lVar3);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar3 + *param_1;
    FUN_14390bf00(*param_1,param_2,param_1,(ulonglong)param_1 & 0xff,uVar4);
    param_1[1] = param_1[1] + lVar3;
  }
  return param_1;
}



// FUNCTION 14390c270 FUN_14390c270 body=632 status=ok
// SIG undefined FUN_14390c270(void)

longlong *
FUN_14390c270(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
             undefined8 *param_6,undefined4 *param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *local_res10;
  
  FUN_14390c1e0(param_1,(longlong)param_5,param_3,param_4,0xfffffffffffffffe);
  param_1[3] = param_3;
  param_1[4] = param_4;
  plVar4 = param_1 + 5;
  uVar5 = 0;
  *plVar4 = 0;
  param_1[6] = param_2;
  plVar3 = param_1 + 7;
  *plVar3 = 0;
  param_1[8] = 0;
  local_res10 = plVar3;
  lVar2 = FUN_1438f6c90(plVar3,0,0);
  *plVar3 = lVar2;
  std::
  unordered_map<cTrackingClient::ContextKey,cTrackingClient::OpenContext,cTrackingClient::ContextKeyHash,std::equal_to<cTrackingClient::ContextKey>,std::allocator<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>
  ::
  unordered_map<cTrackingClient::ContextKey,cTrackingClient::OpenContext,cTrackingClient::ContextKeyHash,std::equal_to<cTrackingClient::ContextKey>,std::allocator<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>
            (param_1 + 9);
  *(int *)(param_1 + 0x11) = param_5;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  _Mtx_init_in_situ(param_1 + 0x14,2);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar7 = uVar5;
  if (0 < (int)param_1[0x11]) {
    do {
      lVar2 = *param_1;
      *(undefined8 *)(lVar2 + uVar5) = *param_6;
      *(undefined4 *)(lVar2 + 8 + uVar5) = *(undefined4 *)(param_6 + 1);
      *(undefined4 *)(uVar5 + 0xc + *param_1) = *param_7;
      lVar2 = *param_1;
      if (*(int *)(lVar2 + 0xc + uVar5) < 0) {
        *(undefined4 *)(lVar2 + 0x10 + uVar5) = 4;
        lVar2 = *(longlong *)(uVar5 + 0x28 + *param_1);
        *(undefined8 *)(uVar5 + 0x28 + *param_1) = 0;
        if (lVar2 != 0) {
          plVar3 = (longlong *)FUN_1438f1790();
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar2);
        }
      }
      else {
        *(undefined4 *)(lVar2 + 0x10 + uVar5) = 1;
        plVar3 = (longlong *)FUN_14390bfb0(&local_res10);
        plVar8 = (longlong *)(*param_1 + 0x28 + uVar5);
        if (plVar8 != plVar3) {
          lVar2 = *plVar3;
          *plVar3 = 0;
          lVar1 = *plVar8;
          *plVar8 = lVar2;
          if (lVar1 != 0) {
            plVar3 = (longlong *)FUN_1438f1790();
            (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
          }
        }
        plVar3 = local_res10;
        if (local_res10 != (longlong *)0x0) {
          plVar8 = (longlong *)FUN_1438f1790();
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar3);
        }
      }
      uVar6 = (int)uVar7 + 1;
      param_6 = (undefined8 *)((longlong)param_6 + 0xc);
      param_7 = param_7 + 1;
      uVar5 = uVar5 + 0x30;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < (int)param_1[0x11]);
  }
  *(undefined2 *)((longlong)param_1 + 0x8c) = 0x100;
  plVar3 = (longlong *)FUN_14390c070(&local_res10);
  if (plVar4 != plVar3) {
    lVar2 = *plVar3;
    *plVar3 = 0;
    lVar1 = *plVar4;
    *plVar4 = lVar2;
    if (lVar1 != 0) {
      lVar2 = *(longlong *)(lVar1 + 8);
      if (lVar2 != 0) {
        plVar4 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar4 + 0x18))(plVar4,lVar2);
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0;
      }
      plVar4 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar1);
    }
  }
  plVar4 = local_res10;
  if (local_res10 != (longlong *)0x0) {
    lVar2 = local_res10[1];
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2);
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
    }
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar4);
  }
  return param_1;
}



// FUNCTION 14390c4f0 FUN_14390c4f0 body=129 status=ok
// SIG undefined FUN_14390c4f0(void)

undefined8 *
FUN_14390c4f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  puVar1 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  lVar2 = param_1[5];
  param_1[5] = 0;
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2);
  }
  FUN_14390e6e0(param_1);
  return param_1;
}



// FUNCTION 14390c580 FUN_14390c580 body=310 status=ok
// SIG undefined FUN_14390c580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14390c580(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_40 = 0xf;
  local_48 = 0;
  local_58[0] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_58,param_3,0,0xffffffffffffffff);
  local_68 = (undefined8 *)*param_2;
  uStack_60 = *(undefined4 *)(param_2 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = (undefined8 *)FUN_14390e500(local_38,&local_68,local_58);
  if (0xf < (ulonglong)local_68[3]) {
    local_68 = (undefined8 *)*local_68;
  }
  uStack_60 = CONCAT31(uStack_60._1_3_,1);
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(&local_68);
  *param_1 = std::runtime_error::vftable;
  if (0xf < local_20) {
    uVar2 = local_38[0];
    if (0xfff < local_20 + 1) {
      if ((local_38[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = *(ulonglong *)(local_38[0] - 8);
      if (local_38[0] <= uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (local_38[0] - uVar2 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < local_38[0] - uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar2);
  }
  *param_1 = std::_System_error::vftable;
  uVar1 = param_2[1];
  param_1[3] = *param_2;
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 14390c6c0 FUN_14390c6c0 body=81 status=ok
// SIG undefined FUN_14390c6c0(void)

undefined8 * FUN_14390c6c0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}



// FUNCTION 14390c720 exception body=54 status=ok
// SIG undefined exception(void)

undefined8 * std::exception::exception(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}



// FUNCTION 14390c760 FUN_14390c760 body=64 status=ok
// SIG undefined FUN_14390c760(void)

undefined8 * FUN_14390c760(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}



// FUNCTION 14390c7a0 FUN_14390c7a0 body=91 status=ok
// SIG undefined FUN_14390c7a0(void)

undefined8 * FUN_14390c7a0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



// FUNCTION 14390c800 FUN_14390c800 body=237 status=ok
// SIG undefined FUN_14390c800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14390c800(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_58 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_20 = 0xf;
  local_28 = 0;
  local_38 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (&local_38,&DAT_145af3922,0);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14390c580(param_1,&local_48,&local_38);
  if (0xf < local_20) {
    uVar1 = CONCAT71(uStack_37,local_38);
    uVar2 = uVar1;
    if (0xfff < local_20 + 1) {
      if ((local_38 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar2 = *(ulonglong *)(uVar1 - 8);
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar1 - uVar2 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar1 - uVar2) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar2);
  }
  *param_1 = std::system_error::vftable;
  return param_1;
}



// FUNCTION 14390c900 FUN_14390c900 body=111 status=ok
// SIG undefined FUN_14390c900(void)

void FUN_14390c900(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_1438f79a0(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  plVar3 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,*plVar3,param_4,uVar4);
  return;
}



// FUNCTION 14390c970 FUN_14390c970 body=115 status=ok
// SIG undefined FUN_14390c970(void)

void FUN_14390c970(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1[4] != 0) {
    FMemory::operator_delete(param_1[4],0x10,param_3,param_4,0xfffffffffffffffe);
  }
  *param_1 = std::_Pad::vftable;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  iVar3 = _Mtx_unlock(uVar2);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  _Mtx_destroy(uVar2);
  _Cnd_destroy(uVar1);
  return;
}



// FUNCTION 14390c9f0 ~unique_lock<std::mutex> body=47 status=ok
// SIG undefined ~unique_lock<std::mutex>(void)

void std::unique_lock<std::mutex>::~unique_lock<std::mutex>(undefined8 *param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 1) != '\0') {
    iVar1 = _Mtx_unlock(*param_1);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
  }
  return;
}



// FUNCTION 14390ca20 FUN_14390ca20 body=19 status=ok
// SIG undefined FUN_14390ca20(void)

void FUN_14390ca20(longlong *param_1)

{
  if (*param_1 != 0) {
    FMemory::operator_delete(*param_1,0x10);
    return;
  }
  return;
}



// FUNCTION 14390ca40 thunk_FUN_14390c900 body=5 status=ok
// SIG undefined thunk_FUN_14390c900(void)

void thunk_FUN_14390c900(void)

{
  FUN_14390c900();
  return;
}



// FUNCTION 14390ca50 FUN_14390ca50 body=91 status=ok
// SIG undefined FUN_14390ca50(void)

void FUN_14390ca50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_1 != 0) {
    FUN_14390bc70(*param_1,param_1[1],param_1,param_4,0xfffffffffffffffe);
    lVar1 = *param_1;
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14390cab0 FUN_14390cab0 body=740 status=ok
// SIG undefined FUN_14390cab0(void)

void FUN_14390cab0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong uVar9;
  
  uVar13 = 0xfffffffffffffffe;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  uVar9 = 0;
  if ((int)param_1[0x13] != 0) {
    if ((int)param_1[0x13] == 0) {
      std::_Throw_Cpp_error(1);
    }
    iVar5 = _Thrd_id();
    if ((int)param_1[0x13] == iVar5) {
      std::_Throw_Cpp_error(5);
    }
    local_28 = (undefined4)param_1[0x12];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x94);
    uStack_20 = (undefined4)param_1[0x13];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x9c);
    iVar5 = _Thrd_join(&local_28,0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(2);
    }
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  uVar11 = uVar9;
  if (0 < (int)param_1[0x11]) {
    do {
      iVar5 = *(int *)(uVar11 + 0x20 + *param_1);
      if (iVar5 != 0) {
        FUN_1438f1a60(1,L"TritonRuntime::LoaderWorker::~LoaderWorker",300,
                      L"Probe %d: Found %d pending probe data references while unloading.\n",
                      (int)uVar9,iVar5,uVar13);
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar11 = uVar11 + 0x30;
    } while ((int)uVar8 < (int)param_1[0x11]);
  }
  plVar6 = (longlong *)param_1[0x1f];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar6 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  _Mtx_destroy_in_situ(param_1 + 0x14);
  if ((int)param_1[0x13] != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  lVar10 = param_1[0xc];
  if (lVar10 != 0) {
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  plVar6 = (longlong *)param_1[10];
  plVar12 = (longlong *)*plVar6;
  *plVar6 = (longlong)plVar6;
  *(longlong *)(param_1[10] + 8) = param_1[10];
  param_1[0xb] = 0;
  if (plVar12 != (longlong *)param_1[10]) {
    do {
      plVar6 = (longlong *)*plVar12;
      plVar7 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar12);
      plVar12 = plVar6;
    } while (plVar6 != (longlong *)param_1[10]);
  }
  lVar10 = param_1[10];
  plVar6 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
  plVar6 = (longlong *)param_1[7];
  plVar12 = (longlong *)*plVar6;
  *plVar6 = (longlong)plVar6;
  *(longlong *)(param_1[7] + 8) = param_1[7];
  param_1[8] = 0;
  if (plVar12 != (longlong *)param_1[7]) {
    do {
      plVar6 = (longlong *)*plVar12;
      plVar7 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar12);
      plVar12 = plVar6;
    } while (plVar6 != (longlong *)param_1[7]);
  }
  lVar10 = param_1[7];
  plVar6 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
  lVar10 = param_1[5];
  if (lVar10 != 0) {
    lVar2 = *(longlong *)(lVar10 + 8);
    if (lVar2 != 0) {
      plVar6 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar2);
      *(undefined8 *)(lVar10 + 8) = 0;
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined8 *)(lVar10 + 0x18) = 0;
    }
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
  }
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar2 = param_1[1];
    for (; lVar10 != lVar2; lVar10 = lVar10 + 0x30) {
      lVar3 = *(longlong *)(lVar10 + 0x28);
      if (lVar3 != 0) {
        plVar6 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar3);
      }
      puVar4 = *(undefined8 **)(lVar10 + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    lVar10 = *param_1;
    plVar6 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 14390cda0 FUN_14390cda0 body=17 status=ok
// SIG undefined FUN_14390cda0(void)

void FUN_14390cda0(char *param_1)

{
  if (*param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014390cda9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Cnd_destroy(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 14390cdc0 FUN_14390cdc0 body=17 status=ok
// SIG undefined FUN_14390cdc0(void)

void FUN_14390cdc0(char *param_1)

{
  if (*param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014390cdc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Mtx_destroy(*(undefined8 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 14390cde0 FUN_14390cde0 body=21 status=ok
// SIG undefined FUN_14390cde0(void)

void FUN_14390cde0(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
                    /* WARNING: Could not recover jumptable at 0x00014390cdee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __std_exception_destroy(param_1 + 1);
  return;
}



// FUNCTION 14390ce00 ~thread body=22 status=ok
// SIG undefined ~thread(void)

void std::thread::~thread(longlong param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return;
}



// FUNCTION 14390ce20 FUN_14390ce20 body=43 status=ok
// SIG undefined FUN_14390ce20(void)

undefined8 * FUN_14390ce20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::error_category::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14390ce50 FUN_14390ce50 body=67 status=ok
// SIG undefined FUN_14390ce50(void)

undefined8 * FUN_14390ce50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14390cea0 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * std::exception::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14390cef0 GatherDebugData body=17 status=ok
// SIG undefined GatherDebugData(void)

void FAnimNode_TwistCorrectiveNode::GatherDebugData(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390cefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    return;
  }
  return;
}



// FUNCTION 14390cf10 FUN_14390cf10 body=296 status=ok
// SIG undefined FUN_14390cf10(void)

undefined8
FUN_14390cf10(longlong *param_1,undefined8 param_2,ulonglong param_3,int *param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int local_res18 [2];
  
  iVar4 = (int)param_3;
  lVar6 = (longlong)iVar4;
  local_res18[0] = iVar4;
  if (param_5 != '\0') {
    FUN_14390dce0(param_1,param_3 & 0xffffffff,param_3,param_4,0,0xfffffffffffffffe);
  }
  plVar1 = param_1 + 0x14;
  iVar3 = _Mtx_lock(plVar1);
  if (iVar3 != 0) {
    std::_Throw_C_error(iVar3);
  }
  iVar3 = *(int *)(*param_1 + 0x10 + lVar6 * 0x30);
  *param_4 = iVar3;
  if (iVar3 == 0) {
    piVar2 = (int *)(*param_1 + 0x20 + lVar6 * 0x30);
    *piVar2 = *piVar2 + 1;
    FUN_14390a680(param_2,param_1,param_3 & 0xffffffff,
                  *(undefined8 *)(lVar6 * 0x30 + *param_1 + 0x18));
    iVar4 = _Mtx_unlock(plVar1);
    if (iVar4 == 0) {
      return param_2;
    }
    std::_Throw_C_error(iVar4);
    return param_2;
  }
  lVar6 = param_1[5];
  if (lVar6 != 0) {
    piVar2 = *(int **)(lVar6 + 0x10);
    piVar5 = *(int **)(lVar6 + 8);
    if (piVar5 != piVar2) {
      do {
        if (*piVar5 == iVar4) break;
        piVar5 = piVar5 + 1;
      } while (piVar5 != piVar2);
      if (piVar5 != piVar2) goto LAB_14390d003;
    }
    FUN_1438f7f50(lVar6 + 8,local_res18);
  }
LAB_14390d003:
  FUN_14390a6a0(param_2);
  iVar4 = _Mtx_unlock(plVar1);
  if (iVar4 != 0) {
    std::_Throw_C_error(iVar4);
  }
  return param_2;
}



// FUNCTION 14390d040 FUN_14390d040 body=633 status=ok
// SIG undefined FUN_14390d040(void)

void FUN_14390d040(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_res10;
  longlong *local_res20;
  undefined8 uVar13;
  undefined1 local_40 [8];
  
  uVar13 = 0xfffffffffffffffe;
  if (3 < (ulonglong)(param_2[1] - *param_2)) {
    plVar2 = param_1 + 0x14;
    local_res20 = plVar2;
    iVar7 = _Mtx_lock(plVar2);
    if (iVar7 != 0) {
      std::_Throw_C_error(iVar7);
    }
    iVar7 = (int)(param_2[1] - *param_2 >> 2) + -1;
    lVar12 = (longlong)iVar7;
    if (-1 < iVar7) {
      do {
        uVar3 = *(uint *)(*param_2 + lVar12 * 4);
        local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,uVar3);
        lVar11 = (longlong)(int)uVar3;
        lVar4 = *param_1;
        if ((*(int *)(lVar4 + 0x10 + lVar11 * 0x30) == 0) ||
           (*(int *)(lVar4 + 0x10 + lVar11 * 0x30) == 3)) {
          local_res10._1_1_ = (byte)(uVar3 >> 8);
          local_res10._2_1_ = (byte)(uVar3 >> 0x10);
          local_res10._3_1_ = (byte)(uVar3 >> 0x18);
          uVar8 = param_1[0xf] &
                  (((((ulonglong)uVar3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                    (ulonglong)local_res10._1_1_) * 0x100000001b3 ^ (ulonglong)local_res10._2_1_) *
                   0x100000001b3 ^ (ulonglong)local_res10._3_1_) * 0x100000001b3;
          lVar11 = param_1[0xc];
          local_res10 = *(undefined8 **)(lVar11 + uVar8 * 0x10);
          lVar4 = uVar8 * 0x10 + 8;
          lVar5 = *(longlong *)(lVar11 + uVar8 * 0x10);
          plVar1 = param_1 + 10;
          while( true ) {
            if (lVar5 == *plVar1) {
              puVar9 = (undefined8 *)*plVar1;
            }
            else {
              puVar9 = (undefined8 *)**(undefined8 **)(lVar4 + lVar11);
            }
            if (local_res10 == puVar9) goto LAB_14390d1fd;
            puVar9 = local_res10;
            if (*(uint *)(local_res10 + 2) == uVar3) break;
            local_res10 = (undefined8 *)*local_res10;
          }
          while( true ) {
            if (lVar5 == *plVar1) {
              puVar10 = (undefined8 *)*plVar1;
            }
            else {
              puVar10 = (undefined8 *)**(undefined8 **)(lVar4 + lVar11);
            }
            if ((puVar9 == puVar10) || (uVar3 != *(uint *)(puVar9 + 2))) break;
            puVar9 = (undefined8 *)*puVar9;
          }
          if (local_res10 == puVar9) {
LAB_14390d1fd:
            puVar9 = (undefined8 *)*plVar1;
            local_res10 = puVar9;
          }
          puVar10 = local_res10;
          if ((local_res10 == *(undefined8 **)*plVar1) && (puVar9 == (undefined8 *)*plVar1)) {
            FUN_1438f79a0();
            FUN_14390d920(param_1 + 9,8);
          }
          else {
            while (puVar10 != puVar9) {
              puVar6 = (undefined8 *)*puVar10;
              FUN_14390eae0(param_1 + 9,local_40,puVar10);
              puVar10 = puVar6;
            }
          }
        }
        else if (*(int *)(lVar4 + 0x10 + lVar11 * 0x30) == 1) {
          lVar4 = *(longlong *)param_1[7];
          lVar11 = FUN_1438f1fd0(param_1 + 7,lVar4,*(undefined8 *)(lVar4 + 8),&local_res10,uVar13);
          if (param_1[8] == -2) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          param_1[8] = param_1[8] + 1;
          *(longlong *)(lVar4 + 8) = lVar11;
          **(longlong **)(lVar11 + 8) = lVar11;
        }
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
    iVar7 = _Mtx_unlock(plVar2);
    if (iVar7 != 0) {
      std::_Throw_C_error(iVar7);
    }
    FUN_14390d5b0(param_1);
    if (param_3 != '\0') {
      std::thread::join(param_1 + 0x12);
    }
  }
  return;
}



// FUNCTION 14390d2c0 FUN_14390d2c0 body=585 status=ok
// SIG undefined FUN_14390d2c0(void)

void FUN_14390d2c0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 **ppuVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 *local_res18;
  longlong *local_res20;
  longlong local_40 [3];
  
  FUN_14390c160(local_40,0x10000);
  if (param_2[1] != 0) {
    plVar8 = param_1 + 0x14;
    do {
      plVar1 = *(longlong **)*param_2;
      lVar10 = plVar1[2];
      *(longlong *)plVar1[1] = *plVar1;
      *(longlong *)(*plVar1 + 8) = plVar1[1];
      param_2[1] = param_2[1] + -1;
      plVar7 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar1);
      iVar5 = _Mtx_lock(plVar8);
      if (iVar5 != 0) {
        std::_Throw_C_error(iVar5);
      }
      lVar10 = (longlong)(int)lVar10 * 0x30;
      if (*(int *)(*param_1 + 0x10 + lVar10) == 1) {
        *(undefined4 *)(*param_1 + 0x10 + lVar10) = 3;
        iVar5 = *(int *)(*param_1 + 0xc + lVar10);
        iVar6 = _Mtx_unlock(plVar8);
        if (iVar6 != 0) {
          std::_Throw_C_error(iVar6);
        }
        FUN_143906270(&local_res18,param_1[3],local_40,param_1[6] + 0x14,
                      *(undefined8 *)(param_1[6] + 0x20),(longlong)iVar5);
        bVar11 = local_res18 == (undefined8 *)0x0;
        local_res20 = plVar8;
        iVar5 = _Mtx_lock(plVar8);
        if (iVar5 != 0) {
          std::_Throw_C_error(iVar5);
        }
        if (bVar11) {
          *(undefined4 *)(*param_1 + 0x10 + lVar10) = 2;
        }
        else {
          UNetDriver::SetNetDriverName(local_res18,param_1[6]);
          puVar4 = local_res18;
          ppuVar9 = (undefined8 **)(*param_1 + 0x18 + lVar10);
          if (ppuVar9 != &local_res18) {
            local_res18 = (undefined8 *)0x0;
            puVar2 = *ppuVar9;
            *ppuVar9 = puVar4;
            if (puVar2 != (undefined8 *)0x0) {
              (**(code **)*puVar2)(puVar2,1);
            }
          }
          *(undefined4 *)(*param_1 + 0x10 + lVar10) = 0;
        }
        iVar5 = _Mtx_unlock(plVar8);
        if (iVar5 != 0) {
          std::_Throw_C_error(iVar5);
        }
        if (local_res18 != (undefined8 *)0x0) {
          (**(code **)*local_res18)(local_res18,1);
        }
      }
      else {
        iVar5 = _Mtx_unlock(plVar8);
        if (iVar5 != 0) {
          std::_Throw_C_error(iVar5);
        }
      }
    } while (param_2[1] != 0);
  }
  if (local_40[0] != 0) {
    plVar8 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar8 + 0x18))(plVar8,local_40[0]);
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
  }
  FUN_1438f79a0(param_2);
  uVar3 = *param_2;
  plVar8 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar8 + 0x18))(plVar8,uVar3);
  return;
}



// FUNCTION 14390d510 FUN_14390d510 body=154 status=ok
// SIG undefined FUN_14390d510(void)

undefined8 FUN_14390d510(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_res8;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  plVar4 = (longlong *)FUN_14390bfb0(&local_res8);
  plVar5 = (longlong *)(param_1 + 0x28);
  if (plVar5 != plVar4) {
    lVar2 = *plVar4;
    *plVar4 = 0;
    lVar3 = *plVar5;
    *plVar5 = lVar2;
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_1438f1790();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,*plVar4,param_4,uVar6);
    }
  }
  if (local_res8 != 0) {
    plVar4 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar4 + 0x18))(plVar4,local_res8);
  }
  return uVar1;
}



// FUNCTION 14390d5b0 FUN_14390d5b0 body=313 status=ok
// SIG undefined FUN_14390d5b0(void)

void FUN_14390d5b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong local_res10;
  code *local_res18;
  longlong local_res20;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar3 = 0xfffffffffffffffe;
  lVar2 = FUN_1438f1870();
  if (lVar2 == 0) {
    lVar2 = param_1 + 0xa0;
    lVar4 = lVar2;
    iVar1 = _Mtx_lock(lVar2);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
    if (*(char *)(param_1 + 0x8d) != '\0') {
      if (*(int *)(param_1 + 0x98) != 0) {
        iVar1 = _Thrd_id();
        if (*(int *)(param_1 + 0x98) == iVar1) {
          std::_Throw_Cpp_error(5);
        }
        local_18 = *(undefined4 *)(param_1 + 0x90);
        uStack_14 = *(undefined4 *)(param_1 + 0x94);
        uStack_10 = *(undefined4 *)(param_1 + 0x98);
        uStack_c = *(undefined4 *)(param_1 + 0x9c);
        iVar1 = _Thrd_join(&local_18,0);
        if (iVar1 != 0) {
          std::_Throw_Cpp_error(2);
        }
        *(undefined8 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0x98) = 0;
      }
      *(undefined1 *)(param_1 + 0x8d) = 0;
      local_res18 = FUN_14390ddc0;
      local_res10 = param_1;
      uVar3 = FUN_14390bff0(&local_res20,&local_res18,&local_res10,param_4,uVar3,lVar4);
      FUN_14390bd60(&local_18,uVar3);
      if (local_res20 != 0) {
        FMemory::operator_delete(local_res20,0x10);
      }
      if (*(int *)(param_1 + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      *(undefined4 *)(param_1 + 0x90) = local_18;
      *(undefined4 *)(param_1 + 0x94) = uStack_14;
      *(undefined4 *)(param_1 + 0x98) = uStack_10;
      *(undefined4 *)(param_1 + 0x9c) = uStack_c;
    }
    iVar1 = _Mtx_unlock(lVar2);
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
  }
  return;
}



// FUNCTION 14390d6f0 FUN_14390d6f0 body=373 status=ok
// SIG undefined FUN_14390d6f0(void)

void FUN_14390d6f0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int local_res20 [2];
  undefined8 uVar6;
  longlong *plVar7;
  
  uVar6 = 0xfffffffffffffffe;
  if (param_2[1] - *param_2 >> 2 != 0) {
    plVar4 = param_1 + 0x14;
    plVar7 = plVar4;
    do {
      local_res20[0] = *(int *)(param_2[1] + -4);
      lVar5 = (longlong)local_res20[0];
      param_2[1] = param_2[1] + -4;
      puVar2 = (undefined8 *)0x0;
      iVar1 = _Mtx_lock(plVar4);
      if (iVar1 != 0) {
        std::_Throw_C_error(iVar1);
      }
      lVar5 = lVar5 * 0x30 + *param_1;
      iVar1 = *(int *)(lVar5 + 0x10);
      if (iVar1 == 0) {
        if (*(int *)(lVar5 + 0x20) == 0) {
          puVar2 = (undefined8 *)FUN_14390d510();
        }
        else {
LAB_14390d79a:
          lVar5 = *param_3;
          lVar3 = FUN_1438f1fd0(param_3,lVar5,*(undefined8 *)(lVar5 + 8),local_res20,uVar6,plVar7);
          if (param_3[1] == -2) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          param_3[1] = param_3[1] + 1;
          *(longlong *)(lVar5 + 8) = lVar3;
          **(longlong **)(lVar3 + 8) = lVar3;
        }
      }
      else if (iVar1 == 3) goto LAB_14390d79a;
      iVar1 = _Mtx_unlock(plVar4);
      if (iVar1 != 0) {
        std::_Throw_C_error(iVar1);
      }
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    } while (param_2[1] - *param_2 >> 2 != 0);
  }
  lVar5 = *param_2;
  if (lVar5 != 0) {
    plVar4 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}



// FUNCTION 14390d870 _Call_func body=22 status=ok
// SIG undefined _Call_func(void)

undefined8 std::_Pad::_Call_func(undefined8 *param_1)

{
  (**(code **)*param_1)();
  _Cnd_do_broadcast_at_thread_exit();
  return 0;
}



// FUNCTION 14390d890 FUN_14390d890 body=119 status=ok
// SIG undefined FUN_14390d890(void)

void FUN_14390d890(longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(param_1 + 0x14);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  if (*(int *)(*param_1 + 0x10 + (longlong)param_2 * 0x30) == 0) {
    piVar1 = (int *)(*param_1 + 0x20 + (longlong)param_2 * 0x30);
    *piVar1 = *piVar1 + -1;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x14);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  return;
}



// FUNCTION 14390d910 thunk_FUN_14390e770 body=5 status=ok
// SIG undefined thunk_FUN_14390e770(void)

void thunk_FUN_14390e770(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar2 = _Mtx_lock(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar2 = _Cnd_signal(*(undefined8 *)(param_1 + 8));
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  iVar2 = _Mtx_unlock(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  (*(code *)puVar1[1])(*puVar1);
  FMemory::operator_delete(puVar1,0x10);
  return;
}



// FUNCTION 14390d920 FUN_14390d920 body=126 status=ok
// SIG undefined FUN_14390d920(void)

void FUN_14390d920(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  
  uVar1 = param_2 * 2;
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x18) >> 3) < uVar1) {
    FUN_14390e620(param_1 + 0x18,uVar1);
  }
  local_res8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  FUN_14390d9a0(param_1 + 0x18,local_res10,*(undefined8 *)(param_1 + 0x18),uVar1,&local_res8);
  *(longlong *)(param_1 + 0x30) = param_2 + -1;
  *(longlong *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 14390d9a0 FUN_14390d9a0 body=831 status=ok
// SIG undefined FUN_14390d9a0(void)

longlong *
FUN_14390d9a0(ulonglong *param_1,longlong *param_2,ulonglong *param_3,ulonglong param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t _Size;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  undefined1 local_res18;
  undefined8 uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  uVar4 = *param_1;
  lVar6 = (longlong)param_3 - uVar4;
  if (param_4 != 0) {
    uVar8 = param_1[1];
    local_res18 = SUB81(param_3,0);
    if ((ulonglong)((longlong)(param_1[2] - uVar8) >> 3) < param_4) {
      lVar7 = (longlong)(uVar8 - uVar4) >> 3;
      if (-lVar7 - 1U < param_4) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar8 = lVar7 + param_4;
      uVar5 = (longlong)(param_1[2] - uVar4) >> 3;
      uVar2 = 0;
      uVar4 = uVar2;
      if (uVar5 <= ~(uVar5 >> 1)) {
        uVar4 = (uVar5 >> 1) + uVar5;
      }
      if (uVar8 <= uVar4) {
        uVar8 = uVar4;
      }
      if (uVar8 != 0) {
        plVar1 = (longlong *)FUN_1438f1790();
        uVar2 = (**(code **)(*plVar1 + 8))(plVar1,uVar8 * 8);
      }
      lVar7 = (longlong)((longlong)param_3 - *param_1) >> 3;
      local_res8 = uVar2;
      std::
      _Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_*___ptr64,unsigned___int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_>_>_>
                (uVar2 + lVar7 * 8,param_4,param_5,param_1,local_res18);
      FUN_14390bf60(*param_1,param_3,uVar2,param_1,local_res18,local_res18,uVar9);
      FUN_14390bf60(param_3,param_1[1],uVar2 + (lVar7 + param_4) * 8,param_1,local_res18,local_res18
                   );
      uVar4 = *param_1;
      uVar5 = param_1[1];
      if (uVar4 != 0) {
        plVar1 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar1 + 0x18))(plVar1,uVar4);
      }
      param_1[2] = uVar2 + uVar8 * 8;
      param_1[1] = uVar2 + (param_4 + ((longlong)(uVar5 - uVar4) >> 3)) * 8;
      *param_1 = uVar2;
    }
    else if ((ulonglong)((longlong)(uVar8 - (longlong)param_3) >> 3) < param_4) {
      local_res8 = *param_5;
      FUN_14390bf60(param_3,uVar8,param_3 + param_4,param_1,local_res18,local_res18,
                    0xfffffffffffffffe);
      std::
      _Uninit_alloc_fill_n1<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_*___ptr64,unsigned___int64,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<cTrackingClient::ContextKey_const_,cTrackingClient::OpenContext>_>_>_>_>_>_>
                (param_1[1],param_4 - ((longlong)(param_1[1] - (longlong)param_3) >> 3),&local_res8,
                 param_1,local_res18);
      param_1[1] = param_1[1] + param_4 * 8;
      puVar3 = (ulonglong *)(param_1[1] + param_4 * -8);
      uVar8 = 0;
      uVar4 = (ulonglong)((longlong)puVar3 + (7 - (longlong)param_3)) >> 3;
      if (puVar3 < param_3) {
        uVar4 = uVar8;
      }
      if (uVar4 != 0) {
        do {
          *param_3 = local_res8;
          param_3 = param_3 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar4);
      }
    }
    else {
      uVar4 = *param_5;
      uVar2 = FUN_14390bf60(uVar8 + param_4 * -8,uVar8,uVar8,param_1,local_res18,local_res18,
                            0xfffffffffffffffe);
      param_1[1] = uVar2;
      _Size = (param_4 * -8 - (longlong)param_3) + uVar8;
      memmove((void *)(uVar8 - _Size),param_3,_Size);
      puVar3 = param_3;
      if (param_3 != param_3 + param_4) {
        do {
          *puVar3 = uVar4;
          puVar3 = puVar3 + 1;
        } while (puVar3 != param_3 + param_4);
      }
    }
  }
  *param_2 = *param_1 + (lVar6 >> 3) * 8;
  return param_2;
}



// FUNCTION 14390dce0 FUN_14390dce0 body=215 status=ok
// SIG undefined FUN_14390dce0(void)

void FUN_14390dce0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  int local_res10 [2];
  undefined8 uVar4;
  longlong *local_20;
  char local_18;
  
  uVar4 = 0xfffffffffffffffe;
  plVar3 = param_1 + 0x14;
  local_res10[0] = param_2;
  local_20 = plVar3;
  iVar2 = _Mtx_lock(plVar3);
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  local_18 = '\x01';
  uVar1 = *(uint *)(*param_1 + 0x10 + (longlong)param_2 * 0x30);
  if (((uVar1 & 0xfffffff9) != 0) || (uVar1 == 6)) {
    if (uVar1 == 3) {
      *(int *)param_1[5] = *(int *)param_1[5] + 1;
      FUN_14390ee30(&local_20);
      plVar3 = local_20;
    }
    else if (uVar1 == 1) {
      *(int *)param_1[5] = *(int *)param_1[5] + 1;
      FUN_14390ecf0(param_1 + 7,local_res10,param_3,param_4,uVar4);
      FUN_14390ee30(&local_20);
      FUN_14390d5b0(param_1);
      plVar3 = local_20;
    }
  }
  if ((local_18 != '\0') && (iVar2 = _Mtx_unlock(plVar3), iVar2 != 0)) {
    std::_Throw_C_error(iVar2);
  }
  return;
}



// FUNCTION 14390ddc0 FUN_14390ddc0 body=1837 status=ok
// SIG undefined FUN_14390ddc0(void)

void FUN_14390ddc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar21;
  undefined8 local_res10;
  uint local_res18;
  int local_res20;
  uint *local_b8;
  uint *puStack_b0;
  uint *local_a8;
  undefined8 *local_a0;
  uint *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [16];
  
  local_60 = 0xfffffffffffffffe;
  local_b8 = (uint *)0x0;
  puStack_b0 = (uint *)0x0;
  puVar19 = (uint *)0x0;
  local_98 = (uint *)0x0;
  local_a8 = (uint *)0x0;
  FUN_14390c160(&local_78);
  puVar14 = local_b8;
  if (*(char *)((longlong)param_1 + 0x8c) == '\0') {
    plVar12 = param_1 + 0x14;
    local_80 = plVar12;
    do {
      iVar6 = _Mtx_lock(plVar12);
      if (iVar6 != 0) {
        std::_Throw_C_error(iVar6);
      }
      if ((param_1[0xb] == 0) && (param_1[8] == 0)) {
        *(undefined1 *)((longlong)param_1 + 0x8d) = 1;
        iVar6 = _Mtx_unlock(plVar12);
        if (iVar6 != 0) {
          std::_Throw_C_error(iVar6);
        }
        break;
      }
      iVar6 = _Mtx_unlock(plVar12);
      if (iVar6 != 0) {
        std::_Throw_C_error(iVar6);
      }
      uVar18 = 0xffffffff;
      local_res18 = 0xffffffff;
      puVar8 = (undefined8 *)0x0;
      local_90 = (undefined8 *)0x0;
      iVar6 = -1;
      local_res20 = -1;
      local_58 = plVar12;
      iVar7 = _Mtx_lock(plVar12);
      if (iVar7 != 0) {
        std::_Throw_C_error(iVar7);
      }
      plVar3 = local_88;
      if (param_1[0xb] != 0) {
        puStack_b0 = local_b8;
        local_88 = param_1 + 9;
        plVar11 = (longlong *)param_1[10];
        puVar13 = local_b8;
        plVar9 = plVar11;
        puVar20 = local_b8;
        do {
          while( true ) {
            plVar9 = (longlong *)*plVar9;
            uVar18 = local_res18;
            iVar6 = local_res20;
            puVar5 = local_b8;
            puVar14 = local_b8;
            puVar8 = local_90;
            plVar3 = local_88;
            if (plVar9 == plVar11) goto joined_r0x00014390e162;
            uVar18 = *(uint *)(plVar9 + 2);
            local_res10 = (longlong *)CONCAT44(local_res10._4_4_,uVar18);
            lVar17 = (longlong)(int)uVar18 * 0x30 + *param_1;
            if (*(int *)(lVar17 + 0x10) != 2) break;
            if ((&local_res10 < puVar20) && (puVar13 <= &local_res10)) {
              lVar17 = (longlong)&local_res10 - (longlong)puVar13;
              if ((puVar20 == puVar19) && ((longlong)puVar19 - (longlong)puVar20 >> 2 == 0)) {
                if ((longlong)puVar20 - (longlong)puVar13 >> 2 == -1) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("vector<T> too long");
                }
                FUN_1438f7260(&local_b8);
                local_98 = local_a8;
                puVar13 = local_b8;
                puVar19 = local_a8;
                puVar20 = puStack_b0;
              }
              if (puVar20 != (uint *)0x0) {
                *puVar20 = puVar13[lVar17 >> 2];
              }
              puVar20 = puVar20 + 1;
              puStack_b0 = puVar20;
            }
            else {
              if ((puVar20 == puVar19) && ((longlong)puVar19 - (longlong)puVar20 >> 2 == 0)) {
                if ((longlong)puVar20 - (longlong)puVar13 >> 2 == -1) {
                    /* WARNING: Subroutine does not return */
                  std::_Xlength_error("vector<T> too long");
                }
                FUN_1438f7260(&local_b8);
                local_98 = local_a8;
                puVar13 = local_b8;
                puVar19 = local_a8;
                puVar20 = puStack_b0;
              }
              if (puVar20 != (uint *)0x0) {
                *puVar20 = uVar18;
              }
              puVar20 = puVar20 + 1;
              puStack_b0 = puVar20;
            }
          }
        } while ((*(int *)(lVar17 + 0x10) != 0) || (*(int *)(lVar17 + 0x20) != 0));
        if ((&local_res10 < puVar20) && (puVar13 <= &local_res10)) {
          puVar14 = puVar13;
          if ((puVar20 == puVar19) && ((longlong)puVar19 - (longlong)puVar20 >> 2 == 0)) {
            if ((longlong)puVar20 - (longlong)puVar13 >> 2 == -1) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            FUN_1438f7260(&local_b8);
            local_98 = local_a8;
            puVar14 = local_b8;
            puVar19 = local_a8;
            puVar20 = puStack_b0;
          }
          if (puVar20 != (uint *)0x0) {
            *puVar20 = puVar14[(longlong)&local_res10 - (longlong)puVar13 >> 2];
          }
        }
        else {
          if ((puVar20 == puVar19) && ((longlong)puVar19 - (longlong)puVar20 >> 2 == 0)) {
            if ((longlong)puVar20 - (longlong)puVar13 >> 2 == -1) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("vector<T> too long");
            }
            FUN_1438f7260(&local_b8);
            local_98 = local_a8;
            puVar19 = local_a8;
            puVar20 = puStack_b0;
          }
          if (puVar20 != (uint *)0x0) {
            *puVar20 = uVar18;
          }
        }
        puVar20 = puVar20 + 1;
        puStack_b0 = puVar20;
        puVar8 = (undefined8 *)FUN_14390d510(lVar17);
        uVar18 = local_res18;
        iVar6 = local_res20;
        puVar5 = local_b8;
        puVar14 = local_b8;
        plVar3 = local_88;
joined_r0x00014390e162:
        for (; plVar11 = local_88, local_res18 = uVar18, local_res20 = iVar6, local_b8 = puVar14,
            local_90 = puVar8, puVar5 != puVar20; puVar5 = puVar5 + 1) {
          uVar18 = *puVar5;
          local_res10._1_1_ = (byte)(uVar18 >> 8);
          local_res10._2_1_ = (byte)(uVar18 >> 0x10);
          local_res10._3_1_ = (byte)(uVar18 >> 0x18);
          uVar15 = (((((ulonglong)uVar18 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)local_res10._1_1_) * 0x100000001b3 ^ (ulonglong)local_res10._2_1_) *
                    0x100000001b3 ^ (ulonglong)local_res10._3_1_) * 0x100000001b3 & local_88[6];
          lVar1 = local_88[3];
          local_res10 = *(longlong **)(lVar1 + uVar15 * 0x10);
          lVar17 = uVar15 * 0x10 + 8;
          lVar2 = *(longlong *)(lVar1 + uVar15 * 0x10);
          plVar12 = local_88 + 1;
          while( true ) {
            if (lVar2 == *plVar12) {
              plVar9 = (longlong *)*plVar12;
            }
            else {
              plVar9 = (longlong *)**(undefined8 **)(lVar17 + lVar1);
            }
            if (local_res10 == plVar9) goto LAB_14390e228;
            plVar9 = local_res10;
            if (*(uint *)(local_res10 + 2) == uVar18) break;
            local_res10 = (longlong *)*local_res10;
          }
          while( true ) {
            if (lVar2 == *plVar12) {
              plVar10 = (longlong *)*plVar12;
            }
            else {
              plVar10 = (longlong *)**(undefined8 **)(lVar17 + lVar1);
            }
            if ((plVar9 == plVar10) || (uVar18 != *(uint *)(plVar9 + 2))) break;
            plVar9 = (longlong *)*plVar9;
          }
          if (local_res10 == plVar9) {
LAB_14390e228:
            plVar9 = (longlong *)*plVar12;
            local_res10 = plVar9;
          }
          plVar10 = local_res10;
          local_88 = plVar3;
          if ((local_res10 == *(longlong **)*plVar12) && (plVar9 == (longlong *)*plVar12)) {
            FUN_1438f79a0();
            FUN_14390d920(plVar11);
          }
          else {
            while (plVar10 != plVar9) {
              plVar12 = (longlong *)*plVar10;
              FUN_14390eae0(plVar11,local_50,plVar10);
              plVar10 = plVar12;
            }
          }
          puVar19 = local_98;
          plVar12 = local_80;
          uVar18 = local_res18;
          iVar6 = local_res20;
          puVar14 = local_b8;
          puVar8 = local_90;
          plVar3 = local_88;
          local_88 = plVar11;
        }
      }
      local_88 = plVar3;
      if (param_1[8] != 0) {
        local_res10 = (longlong *)
                      CONCAT44(local_res10._4_4_,*(undefined4 *)(*(longlong *)param_1[7] + 0x10));
        plVar3 = *(longlong **)param_1[7];
        *(longlong *)plVar3[1] = *plVar3;
        *(longlong *)(*plVar3 + 8) = plVar3[1];
        param_1[8] = param_1[8] + -1;
        plVar11 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar11 + 0x18))(plVar11,plVar3);
        FUN_14390ed60(param_1 + 7);
        *(undefined4 *)(*param_1 + 0x10 + (longlong)(int)(uint)local_res10 * 0x30) = 3;
        iVar6 = *(int *)(*param_1 + 0xc + (longlong)(int)(uint)local_res10 * 0x30);
        uVar18 = (uint)local_res10;
      }
      iVar7 = _Mtx_unlock(plVar12);
      if (iVar7 != 0) {
        std::_Throw_C_error(iVar7);
      }
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
      }
      if (uVar18 != 0xffffffff) {
        FUN_143906270(&local_a0,param_1[3],&local_78,param_1[6] + 0x14,
                      *(undefined8 *)(param_1[6] + 0x20),(longlong)iVar6);
        bVar21 = local_a0 == (undefined8 *)0x0;
        local_res10 = plVar12;
        iVar6 = _Mtx_lock(plVar12);
        if (iVar6 != 0) {
          std::_Throw_C_error(iVar6);
        }
        if (bVar21) {
          *(undefined4 *)(*param_1 + 0x10 + (longlong)(int)uVar18 * 0x30) = 2;
        }
        else {
          UNetDriver::SetNetDriverName(local_a0,param_1[6]);
          puVar8 = local_a0;
          ppuVar16 = (undefined8 **)(*param_1 + 0x18 + (longlong)(int)uVar18 * 0x30);
          if (ppuVar16 != &local_a0) {
            local_a0 = (undefined8 *)0x0;
            puVar4 = *ppuVar16;
            *ppuVar16 = puVar8;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)();
            }
          }
          *(undefined4 *)(*param_1 + 0x10 + (longlong)(int)uVar18 * 0x30) = 0;
        }
        iVar6 = _Mtx_unlock(plVar12);
        if (iVar6 != 0) {
          std::_Throw_C_error(iVar6);
        }
        if (local_a0 != (undefined8 *)0x0) {
          (**(code **)*local_a0)();
        }
      }
    } while (*(char *)((longlong)param_1 + 0x8c) == '\0');
  }
  if (local_78 != 0) {
    plVar12 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar12 + 0x18))(plVar12,local_78);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  if (puVar14 != (uint *)0x0) {
    plVar12 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar12 + 0x18))(plVar12,puVar14);
  }
  return;
}



// FUNCTION 14390e500 FUN_14390e500 body=281 status=ok
// SIG undefined FUN_14390e500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14390e500(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
  local_50 = 0xfffffffffffffffe;
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_48 = param_3;
  if (*(longlong *)(param_3 + 0x10) != 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
              (param_3,&DAT_145b19618,2);
  }
  uVar1 = FUN_14390ecb0(param_2,local_40);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
            (param_3,uVar1,0,0xffffffffffffffff);
  if (0xf < local_28) {
    uVar3 = local_40[0];
    if (0xfff < local_28 + 1) {
      if ((local_40[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(local_40[0] - 8);
      if (local_40[0] <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (local_40[0] - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < local_40[0] - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
  }
  param_1[3] = 0xf;
  param_1[2] = 0;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  FUN_143262fc0(param_1,param_3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy_deallocate(param_3);
  return param_1;
}



// FUNCTION 14390e620 FUN_14390e620 body=188 status=ok
// SIG undefined FUN_14390e620(void)

void FUN_14390e620(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_1438f1790();
    lVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_2 * 8);
  }
  local_res8 = (undefined1)lVar4;
  FUN_14390bf60(*param_1,param_1[1],lVar4,param_1,local_res8,local_res8,uVar5);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1);
  }
  param_1[2] = lVar4 + param_2 * 8;
  param_1[1] = lVar4 + (lVar2 - lVar1 >> 3) * 8;
  *param_1 = lVar4;
  return;
}



// FUNCTION 14390e6e0 FUN_14390e6e0 body=134 status=ok
// SIG undefined FUN_14390e6e0(void)

void FUN_14390e6e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 2) = 1;
  puVar1 = (undefined8 *)param_1[3];
  param_1[3] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1,param_3,param_4,0xfffffffffffffffe);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  lVar2 = param_1[5];
  param_1[5] = 0;
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 14390e770 FUN_14390e770 body=141 status=ok
// SIG undefined FUN_14390e770(void)

void FUN_14390e770(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar2 = _Mtx_lock(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar2 = _Cnd_signal(*(undefined8 *)(param_1 + 8));
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  iVar2 = _Mtx_unlock(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 != 0) {
    std::_Throw_C_error(iVar2);
  }
  (*(code *)puVar1[1])(*puVar1);
  FMemory::operator_delete(puVar1,0x10);
  return;
}



// FUNCTION 14390e800 append body=280 status=ok
// SIG undefined append(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
          (undefined8 *param_1,undefined8 *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if ((ulonglong)param_2[2] < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = param_2[2] - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (param_4 < (ulonglong)~param_1[2]) {
    uVar1 = param_1[2] + param_4;
    if (param_4 != 0) {
      if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("string too long");
      }
      if ((ulonglong)param_1[3] < uVar1) {
        FUN_143263050(param_1,uVar1);
        if (uVar1 == 0) {
          return param_1;
        }
      }
      else if (uVar1 == 0) {
        param_1[2] = 0;
        if (0xf < (ulonglong)param_1[3]) {
          *(undefined1 *)*param_1 = 0;
          return param_1;
        }
        *(undefined1 *)param_1 = 0;
        return param_1;
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_4 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  ((undefined1 *)((longlong)puVar2 + param_1[2]),
                   (void *)((longlong)param_2 + param_3),param_4);
      }
      param_1[2] = uVar1;
      puVar2 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar2 = (undefined8 *)*param_1;
      }
      *(undefined1 *)((longlong)puVar2 + uVar1) = 0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("string too long");
}



// FUNCTION 14390e920 append body=320 status=ok
// SIG undefined append(void)

undefined8 *
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append
          (undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_1[3];
    puVar2 = param_1;
    if (0xf < uVar1) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (puVar2 <= param_2) {
      puVar2 = param_1;
      if (0xf < uVar1) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (param_2 < (undefined8 *)((longlong)puVar2 + param_1[2])) {
        puVar2 = param_1;
        if (0xf < uVar1) {
          puVar2 = (undefined8 *)*param_1;
        }
        puVar2 = (undefined8 *)append(param_1,param_1,(longlong)param_2 - (longlong)puVar2,param_3);
        return puVar2;
      }
    }
  }
  if ((ulonglong)~param_1[2] <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  uVar1 = param_1[2] + param_3;
  if (param_3 != 0) {
    if (uVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((ulonglong)param_1[3] < uVar1) {
      FUN_143263050(param_1,uVar1);
      if (uVar1 == 0) {
        return param_1;
      }
    }
    else if (uVar1 == 0) {
      param_1[2] = 0;
      if (0xf < (ulonglong)param_1[3]) {
        *(undefined1 *)*param_1 = 0;
        return param_1;
      }
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    if (param_3 != 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)puVar2 + param_1[2]),param_2,param_3);
    }
    param_1[2] = uVar1;
    puVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(undefined1 *)((longlong)puVar2 + uVar1) = 0;
  }
  return param_1;
}



// FUNCTION 14390ea70 FUN_14390ea70 body=11 status=ok
// SIG undefined FUN_14390ea70(void)

undefined4 * FUN_14390ea70(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// FUNCTION 14390ea80 FUN_14390ea80 body=25 status=ok
// SIG undefined FUN_14390ea80(void)

longlong FUN_14390ea80(longlong param_1,int *param_2,int param_3)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)*(longlong *)(param_2 + 2) >> 8);
  if ((*(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8)) &&
     (*param_2 == param_3)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



// FUNCTION 14390eaa0 equivalent body=63 status=ok
// SIG undefined equivalent(void)

undefined8 std::error_category::equivalent(longlong *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined1 local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14390eae0 FUN_14390eae0 body=236 status=ok
// SIG undefined FUN_14390eae0(void)

longlong * FUN_14390eae0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_3 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_3 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_3 + 0x13)) * 0x100000001b3) * 0x10;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x18) + lVar2);
  if ((longlong *)plVar1[1] == param_3) {
    if ((longlong *)*plVar1 == param_3) {
      *plVar1 = *(longlong *)(param_1 + 8);
      *(undefined8 *)(lVar2 + 8 + *(longlong *)(param_1 + 0x18)) = *(undefined8 *)(param_1 + 8);
    }
    else {
      plVar1[1] = param_3[1];
    }
  }
  else if ((longlong *)*plVar1 == param_3) {
    *plVar1 = *param_3;
  }
  lVar2 = *param_3;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(*param_3 + 8) = param_3[1];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  plVar1 = (longlong *)FUN_1438f1790();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_3);
  *param_2 = lVar2;
  return param_2;
}



// FUNCTION 14390ebd0 join body=115 status=ok
// SIG undefined join(void)

void std::thread::join(undefined8 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(int *)(param_1 + 1) == 0) {
    std::_Throw_Cpp_error(1);
  }
  if (*(int *)(param_1 + 1) == 0) {
    std::_Throw_Cpp_error(1);
  }
  iVar1 = _Thrd_id();
  if (*(int *)(param_1 + 1) == iVar1) {
    std::_Throw_Cpp_error(5);
  }
  local_18 = *(undefined4 *)param_1;
  uStack_14 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_10 = *(undefined4 *)(param_1 + 1);
  uStack_c = *(undefined4 *)((longlong)param_1 + 0xc);
  iVar1 = _Thrd_join(&local_18,0);
  if (iVar1 != 0) {
    std::_Throw_Cpp_error(2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 14390ec50 FUN_14390ec50 body=87 status=ok
// SIG undefined FUN_14390ec50(void)

undefined1 * FUN_14390ec50(undefined8 param_1,undefined1 *param_2,int param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = 0;
  uVar3 = 0;
  pcVar1 = std::_Syserror_map(param_3);
  *(undefined8 *)(param_2 + 0x18) = 0xf;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  if (*pcVar1 != '\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pcVar1[lVar2] != '\0');
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_2,pcVar1,lVar2,param_4,uVar3);
  return param_2;
}



// FUNCTION 14390ecb0 FUN_14390ecb0 body=39 status=ok
// SIG undefined FUN_14390ecb0(void)

undefined8
FUN_14390ecb0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(**(longlong **)(param_1 + 2) + 0x10))
            (*(longlong **)(param_1 + 2),param_2,*param_1,param_4,0);
  return param_2;
}



// FUNCTION 14390ece0 FUN_14390ece0 body=8 status=ok
// SIG undefined FUN_14390ece0(void)

char * FUN_14390ece0(void)

{
  return "generic";
}



// FUNCTION 14390ecf0 FUN_14390ecf0 body=99 status=ok
// SIG undefined FUN_14390ecf0(void)

void FUN_14390ecf0(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)*param_1;
  lVar2 = FUN_1438f1fd0(param_1,lVar1,*(undefined8 *)(lVar1 + 8),param_2);
  if (param_1[1] == -2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  *(longlong *)(lVar1 + 8) = lVar2;
  **(longlong **)(lVar2 + 8) = lVar2;
  return;
}



// FUNCTION 14390ed60 FUN_14390ed60 body=199 status=ok
// SIG undefined FUN_14390ed60(void)

void FUN_14390ed60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)*param_1;
  plVar1 = (longlong *)*plVar3;
  if (plVar1 != plVar3) {
    do {
      plVar2 = plVar3;
      if (((int)plVar1[2] == (int)*param_2) && (plVar2 = plVar1, plVar1 + 2 != param_2)) {
        plVar4 = (longlong *)*plVar1;
        *(longlong **)plVar1[1] = plVar4;
        *(longlong *)(*plVar1 + 8) = plVar1[1];
        param_1[1] = param_1[1] + -1;
        plVar2 = (longlong *)FUN_1438f1790();
        (**(code **)(*plVar2 + 0x18))(plVar2,plVar1);
      }
      else {
        plVar4 = (longlong *)*plVar1;
        plVar3 = plVar2;
      }
      plVar1 = plVar4;
    } while (plVar4 != (longlong *)*param_1);
  }
  if (plVar3 != (longlong *)*param_1) {
    *(longlong *)plVar3[1] = *plVar3;
    *(longlong *)(*plVar3 + 8) = plVar3[1];
    param_1[1] = param_1[1] + -1;
    plVar1 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar1 + 0x18))(plVar1,plVar3);
  }
  return;
}



// FUNCTION 14390ee30 FUN_14390ee30 body=112 status=ok
// SIG undefined FUN_14390ee30(void)

void FUN_14390ee30(longlong *param_1)

{
  int iVar1;
  undefined4 local_48 [2];
  undefined8 uStack_40;
  undefined1 local_38 [48];
  
  if ((*param_1 != 0) && ((char)param_1[1] != '\0')) {
    iVar1 = _Mtx_unlock();
    if (iVar1 != 0) {
      std::_Throw_C_error(iVar1);
    }
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  local_48[0] = 1;
  uStack_40 = FUN_14390bce0();
  FUN_14390c800(local_38,local_48);
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(local_38,(ThrowInfo *)&DAT_1461db3f0);
}



// FUNCTION 14390eeb0 FUN_14390eeb0 body=19 status=ok
// SIG undefined FUN_14390eeb0(void)

char * FUN_14390eeb0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



// FUNCTION 14390eed0 FUN_14390eed0 body=11 status=ok
// SIG undefined FUN_14390eed0(void)

void FUN_14390eed0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14390eee0 FUN_14390eee0 body=94 status=ok
// SIG undefined FUN_14390eee0(void)

void FUN_14390eee0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_14390a6c0(lVar1 + 8);
    plVar2 = (longlong *)FUN_1438f1790();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,*plVar2,param_4,uVar3);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 14390ef3e DelayLoad_Discord_Initialize body=12 status=ok
// SIG undefined DelayLoad_Discord_Initialize(void)

void DelayLoad_Discord_Initialize(void)

{
  FUN_14390ef4a();
  return;
}



// FUNCTION 14390ef4a FUN_14390ef4a body=121 status=ok
// SIG undefined FUN_14390ef4a(void)

void FUN_14390ef4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)__delayLoadHelper2(&ImgDelayDescr_1461de128);
                    /* WARNING: Could not recover jumptable at 0x00014390efc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14390efc3 DelayLoad_Discord_Shutdown body=12 status=ok
// SIG undefined DelayLoad_Discord_Shutdown(void)

void DelayLoad_Discord_Shutdown(void)

{
  FUN_14390ef4a();
  return;
}



// FUNCTION 14390efcf DelayLoad_Discord_RunCallbacks body=12 status=ok
// SIG undefined DelayLoad_Discord_RunCallbacks(void)

void DelayLoad_Discord_RunCallbacks(void)

{
  FUN_14390ef4a();
  return;
}



// FUNCTION 14390efdb DelayLoad_Discord_UpdatePresence body=12 status=ok
// SIG undefined DelayLoad_Discord_UpdatePresence(void)

void DelayLoad_Discord_UpdatePresence(void)

{
  FUN_14390ef4a();
  return;
}



// FUNCTION 14390efe7 DelayLoad_Discord_Register body=12 status=ok
// SIG undefined DelayLoad_Discord_Register(void)

void DelayLoad_Discord_Register(void)

{
  FUN_14390ef4a();
  return;
}



// FUNCTION 14390f000 FUN_14390f000 body=301 status=ok
// SIG undefined FUN_14390f000(void)

undefined8 FUN_14390f000(longlong param_1,longlong param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = param_4[4];
  lVar6 = (longlong)(param_3 * 3);
  iVar4 = 2;
  lVar7 = (longlong)param_3 * 0x58 + param_2;
  if (*(int *)(param_1 + lVar6 * 4) == iVar1) {
    iVar5 = 0;
  }
  else if (*(int *)(param_1 + 4 + lVar6 * 4) == iVar1) {
    iVar5 = 1;
  }
  else {
    iVar5 = -1;
    if (*(int *)(param_1 + 8 + lVar6 * 4) == iVar1) {
      iVar5 = iVar4;
    }
  }
  lVar6 = (longlong)iVar5;
  piVar2 = *(int **)(lVar7 + 0x10 + lVar6 * 8);
  if (piVar2 == param_4) {
    return 1;
  }
  if (piVar2 == (int *)0x0) {
    if (((((*(uint *)(lVar7 + 0x4c) & 4) != 0) && (*(longlong *)(lVar7 + 0x10) == 0)) &&
        (*(longlong *)(lVar7 + 0x18) == 0)) && (*(longlong *)(lVar7 + 0x20) == 0)) {
      uVar3 = *(uint *)(lVar7 + 0x4c) & 0xfffffff7;
      *(uint *)(lVar7 + 0x4c) = uVar3;
      *(uint *)(lVar7 + 0x4c) = -(uint)(param_4[5] != 0) & 8 | uVar3;
    }
    if ((*(uint *)(lVar7 + 0x4c) >> 3 & 1) == param_4[5]) {
      *(int *)(*(longlong *)(param_4 + 2) + (longlong)*param_4 * 4) = param_3;
      *param_4 = *param_4 + 1;
      *(int **)(lVar7 + 0x10 + lVar6 * 8) = param_4;
      iVar1 = *(int *)(lVar7 + lVar6 * 4);
      if (0 < iVar5) {
        iVar4 = iVar5 + -1;
      }
      iVar4 = *(int *)(lVar7 + (longlong)iVar4 * 4);
      if (-1 < iVar1) {
        FUN_14390f000(param_1,param_2,iVar1,param_4);
      }
      if (iVar4 < 0) {
        return 1;
      }
      FUN_14390f000(param_1,param_2,iVar4,param_4);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14390f130 FUN_14390f130 body=1031 status=ok
// SIG undefined FUN_14390f130(void)

undefined8 * FUN_14390f130(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  
  fVar4 = *(float *)((longlong)param_2 + 0xc);
  fVar3 = *(float *)((longlong)param_3 + 0xc);
  if ((fVar4 == fVar3) &&
     (fVar5 = *(float *)((longlong)param_2 + 0x1c), fVar5 == *(float *)((longlong)param_3 + 0x1c)))
  {
    local_b8 = (float)*param_2;
    local_a8 = (float)*param_3;
    if (local_b8 == local_a8) {
      fStack_b4 = (float)((ulonglong)*param_2 >> 0x20);
      fStack_a4 = (float)((ulonglong)*param_3 >> 0x20);
      if ((fStack_b4 == fStack_a4) && (*(float *)(param_2 + 1) == *(float *)(param_3 + 1))) {
        local_a8 = (float)param_2[2];
        local_b8 = (float)param_3[2];
        if (local_a8 == local_b8) {
          fStack_a4 = (float)((ulonglong)param_2[2] >> 0x20);
          fStack_b4 = (float)((ulonglong)param_3[2] >> 0x20);
          if ((fStack_a4 == fStack_b4) && (*(float *)(param_2 + 3) == *(float *)(param_3 + 3))) {
            uVar2 = *(undefined4 *)(param_2 + 1);
            *param_1 = *param_2;
            uVar1 = param_2[2];
            *(undefined4 *)(param_1 + 1) = uVar2;
            uVar2 = *(undefined4 *)(param_2 + 3);
            param_1[2] = uVar1;
            *(undefined4 *)(param_1 + 3) = uVar2;
            *(float *)((longlong)param_1 + 0xc) = fVar4;
            *(float *)((longlong)param_1 + 0x1c) = fVar5;
            return param_1;
          }
        }
      }
    }
  }
  fVar5 = *(float *)(param_3 + 1);
  fVar6 = *(float *)(param_2 + 1);
  *(float *)((longlong)param_1 + 0x1c) =
       (*(float *)((longlong)param_2 + 0x1c) + *(float *)((longlong)param_3 + 0x1c)) * 0.5;
  fVar5 = fVar5 + fVar6;
  fStack_a4 = (float)((ulonglong)*param_3 >> 0x20);
  fStack_b4 = (float)((ulonglong)*param_2 >> 0x20);
  fVar6 = fStack_a4 + fStack_b4;
  local_a8 = (float)*param_3;
  local_b8 = (float)*param_2;
  fVar7 = local_a8 + local_b8;
  *(float *)((longlong)param_1 + 0xc) = (fVar3 + fVar4) * 0.5;
  *param_1 = CONCAT44(fVar6,fVar7);
  local_a8 = (float)param_3[2];
  fStack_a4 = (float)((ulonglong)param_3[2] >> 0x20);
  local_b8 = (float)param_2[2];
  local_a8 = local_a8 + local_b8;
  fStack_b4 = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_a4 = fStack_a4 + fStack_b4;
  *(float *)(param_1 + 1) = fVar5;
  fVar4 = *(float *)(param_3 + 3) + *(float *)(param_2 + 3);
  param_1[2] = CONCAT44(fStack_a4,local_a8);
  *(float *)(param_1 + 3) = fVar4;
  if (((1.1754944e-38 < ABS(fVar7)) || (1.1754944e-38 < ABS(fVar6))) || (1.1754944e-38 < ABS(fVar5))
     ) {
    fVar3 = _guard_xfg_dispatch_icall_nop(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5);
    fVar3 = 1.0 / fVar3;
    *param_1 = CONCAT44(fVar6 * fVar3,fVar7 * fVar3);
    *(float *)(param_1 + 1) = fVar5 * fVar3;
  }
  if (((1.1754944e-38 < ABS(local_a8)) || (1.1754944e-38 < ABS(fStack_a4))) ||
     (1.1754944e-38 < ABS(fVar4))) {
    fVar3 = _guard_xfg_dispatch_icall_nop
                      (fStack_a4 * fStack_a4 + local_a8 * local_a8 + fVar4 * fVar4);
    fVar3 = 1.0 / fVar3;
    param_1[2] = CONCAT44(fStack_a4 * fVar3,local_a8 * fVar3);
    *(float *)(param_1 + 3) = fVar4 * fVar3;
  }
  return param_1;
}



// FUNCTION 14390f540 FUN_14390f540 body=484 status=ok
// SIG undefined FUN_14390f540(void)

int FUN_14390f540(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  iVar8 = 0;
  iVar13 = 0;
  local_68 = 0;
  if (0 < param_5) {
    lVar10 = 0;
    local_60 = 0;
    puVar11 = (uint *)(param_1 + 0x4c);
    local_58 = 0;
    local_50 = 2;
    do {
      iVar12 = 0;
      lVar9 = 0;
      lVar7 = param_2 + lVar10 * 0x18;
      do {
        if (((*puVar11 & 4) == 0) &&
           (lVar1 = local_50 + lVar9, *(longlong *)(param_1 + lVar1 * 8) == 0)) {
          iVar8 = iVar8 + 1;
          uVar2 = *(undefined4 *)(param_4 + (local_60 + lVar9) * 4);
          lVar10 = lVar10 + 1;
          *(longlong *)(param_1 + lVar1 * 8) = lVar7;
          *(undefined4 *)(lVar7 + 0x10) = uVar2;
          lVar7 = lVar7 + 0x18;
          *(uint *)(*(longlong *)(param_1 + lVar1 * 8) + 0x14) = *puVar11 >> 3 & 1;
          **(undefined4 **)(param_1 + lVar1 * 8) = 0;
          *(longlong *)(*(longlong *)(param_1 + lVar1 * 8) + 8) = param_3 + (longlong)iVar13 * 4;
          piVar5 = *(int **)(param_1 + lVar1 * 8);
          *(int *)(*(longlong *)(piVar5 + 2) + (longlong)*piVar5 * 4) = local_68;
          *piVar5 = *piVar5 + 1;
          iVar3 = *(int *)(param_1 + (local_58 + lVar9) * 4);
          lVar6 = lVar9 + -1;
          if (iVar12 < 1) {
            lVar6 = 2;
          }
          iVar4 = *(int *)(param_1 + (lVar6 + local_58) * 4);
          if (-1 < iVar3) {
            FUN_14390f000(param_4,param_1,iVar3,*(undefined8 *)(param_1 + lVar1 * 8));
          }
          if (-1 < iVar4) {
            FUN_14390f000(param_4,param_1,iVar4,*(undefined8 *)(param_1 + lVar1 * 8));
          }
          iVar13 = iVar13 + **(int **)(param_1 + lVar1 * 8);
        }
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
      } while (iVar12 < 3);
      local_68 = local_68 + 1;
      local_60 = local_60 + 3;
      local_58 = local_58 + 0x16;
      local_50 = local_50 + 0xb;
      puVar11 = puVar11 + 0x16;
    } while (local_68 < param_5);
  }
  return iVar8;
}



// FUNCTION 14390f730 FUN_14390f730 body=885 status=ok
// SIG undefined FUN_14390f730(void)

void FUN_14390f730(longlong param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  longlong local_60;
  longlong local_58;
  
  iVar8 = 0;
  if (0 < param_4) {
    lVar13 = 0;
    piVar14 = param_2 + 2;
    piVar15 = param_3;
    do {
      lVar6 = 0;
      do {
        iVar12 = *piVar15;
        if (lVar6 < 2) {
          lVar10 = lVar6 + 1;
        }
        else {
          lVar10 = 0;
        }
        iVar1 = param_3[lVar10 + lVar13];
        *piVar14 = iVar8;
        iVar17 = iVar1;
        if (iVar1 <= iVar12) {
          iVar17 = iVar12;
          iVar12 = iVar1;
        }
        piVar14[-2] = iVar12;
        lVar6 = lVar6 + 1;
        piVar14[-1] = iVar17;
        piVar15 = piVar15 + 1;
        piVar14 = piVar14 + 3;
      } while (lVar6 < 3);
      iVar8 = iVar8 + 1;
      lVar13 = lVar13 + 3;
    } while (iVar8 < param_4);
  }
  FUN_143913560(param_2,0,param_4 * 3 + -1,0,0x26065ca);
  lVar13 = (longlong)(param_4 * 3);
  iVar8 = 0;
  iVar12 = 1;
  if (1 < lVar13) {
    lVar10 = 0;
    lVar6 = lVar13 + -1;
    lVar9 = 0xc;
    do {
      if (*(int *)((longlong)param_2 + lVar10) != *(int *)(lVar9 + (longlong)param_2)) {
        FUN_143913560(param_2,iVar8,iVar12 + -1,1,0x26065ca);
        lVar10 = lVar9;
        iVar8 = iVar12;
      }
      iVar12 = iVar12 + 1;
      lVar9 = lVar9 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  iVar8 = 0;
  iVar12 = 1;
  if (1 < lVar13) {
    lVar10 = 0;
    lVar6 = lVar13 + -1;
    piVar14 = param_2;
    do {
      piVar15 = piVar14 + 3;
      if ((*(int *)((longlong)param_2 + lVar10) != *piVar15) ||
         (*(int *)((longlong)param_2 + lVar10 + 4) != piVar14[4])) {
        lVar10 = (longlong)piVar15 - (longlong)param_2;
        FUN_143913560(param_2,iVar8,iVar12 + -1,2,0x26065ca);
        iVar8 = iVar12;
      }
      iVar12 = iVar12 + 1;
      lVar6 = lVar6 + -1;
      piVar14 = piVar15;
    } while (lVar6 != 0);
  }
  if (0 < lVar13) {
    local_60 = 1;
    piVar14 = param_2 + 1;
    local_58 = lVar13;
    do {
      iVar8 = piVar14[1];
      iVar16 = 0;
      iVar12 = piVar14[-1];
      iVar1 = *piVar14;
      lVar6 = (longlong)(iVar8 * 3);
      iVar17 = param_3[lVar6];
      if ((iVar17 == iVar12) || (iVar17 == iVar1)) {
        iVar11 = param_3[lVar6 + 1];
        if ((iVar11 == iVar12) || (iVar11 == iVar1)) {
          iVar7 = 0;
        }
        else {
          iVar7 = 2;
          iVar11 = iVar17;
          iVar17 = param_3[lVar6 + 2];
        }
      }
      else {
        iVar7 = 1;
        iVar11 = param_3[lVar6 + 2];
        iVar17 = param_3[lVar6 + 1];
      }
      lVar6 = (longlong)iVar8 * 0x16 + (longlong)iVar7;
      if ((*(int *)(param_1 + lVar6 * 4) == -1) && (bVar4 = true, local_60 < lVar13)) {
        piVar15 = piVar14 + 3;
        lVar10 = local_60;
        do {
          iVar7 = piVar15[-1];
          if ((iVar12 != iVar7) || (iVar2 = *piVar15, iVar1 != iVar2)) break;
          if (!bVar4) goto LAB_14390fa31;
          lVar9 = (longlong)(piVar15[1] * 3);
          iVar3 = param_3[lVar9];
          if ((iVar3 == iVar7) || (iVar3 == iVar2)) {
            iVar5 = param_3[lVar9 + 1];
            if ((iVar5 == iVar7) || (iVar5 == iVar2)) {
              iVar16 = 0;
            }
            else {
              iVar16 = 2;
              iVar5 = iVar3;
              iVar3 = param_3[lVar9 + 2];
            }
          }
          else {
            iVar16 = 1;
            iVar5 = param_3[lVar9 + 2];
            iVar3 = param_3[lVar9 + 1];
          }
          if (((iVar17 == iVar5) && (iVar11 == iVar3)) &&
             (*(int *)(param_1 + ((longlong)piVar15[1] * 0x16 + (longlong)iVar16) * 4) == -1)) {
            bVar4 = false;
          }
          else {
            lVar10 = lVar10 + 1;
            piVar15 = piVar15 + 3;
          }
        } while (lVar10 < lVar13);
        if (!bVar4) {
LAB_14390fa31:
          iVar12 = param_2[lVar10 * 3 + 2];
          *(int *)(param_1 + lVar6 * 4) = iVar12;
          *(int *)(param_1 + ((longlong)iVar12 * 0x16 + (longlong)iVar16) * 4) = iVar8;
        }
      }
      local_60 = local_60 + 1;
      piVar14 = piVar14 + 3;
      local_58 = local_58 + -1;
    } while (local_58 != 0);
  }
  return;
}



// FUNCTION 14390fab0 FUN_14390fab0 body=320 status=ok
// SIG undefined FUN_14390fab0(void)

void FUN_14390fab0(int *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  
  if (0 < param_3) {
    iVar10 = 0;
    lVar12 = 0;
    lVar9 = 0;
    piVar1 = param_1;
    do {
      lVar5 = 0;
      piVar11 = piVar1;
      do {
        if (*piVar11 == -1) {
          if (lVar5 < 2) {
            lVar2 = lVar5 + 1;
          }
          else {
            lVar2 = 0;
          }
          iVar6 = 0;
          lVar7 = 0;
          for (lVar8 = 0; lVar8 < param_3; lVar8 = lVar8 + 1) {
            if (lVar8 != lVar12) {
              for (lVar3 = 0; lVar3 < 3; lVar3 = lVar3 + 1) {
                if (lVar3 < 2) {
                  lVar4 = lVar3 + 1;
                }
                else {
                  lVar4 = 0;
                }
                if ((*(int *)(param_2 + (lVar9 + lVar5) * 4) ==
                     *(int *)(param_2 + (lVar4 + lVar7) * 4)) &&
                   (*(int *)(param_2 + (lVar2 + lVar9) * 4) ==
                    *(int *)(param_2 + (lVar7 + lVar3) * 4))) {
                  *piVar11 = iVar6;
                  param_1[lVar8 * 0x16 + lVar3] = iVar10;
                  goto LAB_14390fb95;
                }
              }
            }
            iVar6 = iVar6 + 1;
            lVar7 = lVar7 + 3;
          }
        }
LAB_14390fb95:
        lVar5 = lVar5 + 1;
        piVar11 = piVar11 + 1;
      } while (lVar5 < 3);
      iVar10 = iVar10 + 1;
      piVar1 = piVar1 + 0x16;
      lVar12 = lVar12 + 1;
      lVar9 = lVar9 + 3;
    } while (iVar10 < param_3);
  }
  return;
}



// FUNCTION 14390fbf0 FUN_14390fbf0 body=188 status=ok
// SIG undefined FUN_14390fbf0(void)

undefined8 FUN_14390fbf0(longlong *param_1,uint *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float local_res8;
  float local_resc;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  (**(code **)(*param_1 + 0x20))(param_1,&local_res8,(int)*param_2 >> 2,*param_2 & 3);
  (**(code **)(*param_1 + 0x20))(param_1,&local_res10,(int)param_2[1] >> 2,param_2[1] & 3);
  (**(code **)(*param_1 + 0x20))(param_1,&local_res18,(int)param_2[2] >> 2,param_2[2] & 3);
  uVar2 = 0;
  fVar1 = (local_res1c - local_resc) * (local_res10 - local_res8) -
          (local_res14 - local_resc) * (local_res18 - local_res8);
  if (fVar1 < 0.0) {
    uVar2 = 0x80000000;
    fVar1 = -fVar1;
  }
  return CONCAT44(uVar2,fVar1);
}



// FUNCTION 14390fcb0 FUN_14390fcb0 body=712 status=ok
// SIG undefined FUN_14390fcb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14390fcb0(longlong param_1,longlong param_2,int *param_3,longlong *param_4,int param_5,
                  int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  byte *pbVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  undefined1 auStack_b8 [32];
  longlong local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = (longlong)param_5;
  if (local_98 < param_6) {
    piVar16 = param_3 + local_98 * 3;
    piVar13 = (int *)(param_2 + 0x50 + local_98 * 0x58);
    lVar15 = param_6 - local_98;
    do {
      if ((*(byte *)(piVar13 + -1) & 2) == 0) {
        lVar19 = 0;
        piVar20 = piVar16;
        do {
          piVar8 = param_3;
          for (iVar9 = 0; iVar9 < param_5 * 3; iVar9 = iVar9 + 1) {
            if (*piVar20 == *piVar8) {
              iVar11 = iVar9 / 3 + (iVar9 >> 0x1f) +
                       (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f
                            );
              lVar18 = (longlong)iVar11 * 0x58;
              lVar18 = (ulonglong)*(byte *)((iVar9 + iVar11 * -3) + lVar18 + 0x54 + param_2) +
                       (longlong)*(int *)(lVar18 + 0x50 + param_2);
              puVar1 = (undefined8 *)(param_1 + lVar18 * 0x28);
              uVar4 = puVar1[1];
              lVar10 = (ulonglong)*(byte *)((longlong)piVar13 + lVar19 + 4) + (longlong)*piVar13;
              puVar2 = (undefined8 *)(param_1 + lVar10 * 0x28);
              *puVar2 = *puVar1;
              puVar2[1] = uVar4;
              puVar1 = (undefined8 *)(param_1 + 0x10 + lVar18 * 0x28);
              uVar4 = puVar1[1];
              puVar2 = (undefined8 *)(param_1 + 0x10 + lVar10 * 0x28);
              *puVar2 = *puVar1;
              puVar2[1] = uVar4;
              *(undefined8 *)(param_1 + 0x20 + lVar10 * 0x28) =
                   *(undefined8 *)(param_1 + 0x20 + lVar18 * 0x28);
              break;
            }
            piVar8 = piVar8 + 1;
          }
          lVar19 = lVar19 + 1;
          piVar20 = piVar20 + 1;
        } while (lVar19 < 3);
      }
      piVar13 = piVar13 + 0x16;
      piVar16 = piVar16 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  if (0 < local_98) {
    pbVar17 = (byte *)(param_2 + 0x55);
    do {
      if ((pbVar17[-9] & 2) != 0) {
        uVar14 = 0;
        lVar15 = 0;
        uVar12 = 1 << (pbVar17[1] & 0x1f) | 1 << (*pbVar17 & 0x1f) | 1 << (pbVar17[-1] & 0x1f);
        if ((uVar12 & 2) == 0) {
          lVar15 = 1;
LAB_14390fe4a:
          uVar14 = (uint)lVar15;
        }
        else {
          if ((uVar12 & 4) == 0) {
            lVar15 = 2;
            goto LAB_14390fe4a;
          }
          if ((uVar12 & 8) == 0) {
            lVar15 = 3;
            goto LAB_14390fe4a;
          }
        }
        iVar9 = *(int *)(pbVar17 + -0xd);
        (**(code **)(*param_4 + 0x10))(param_4,&local_90,(int)(uVar14 | iVar9 * 4) >> 2,uVar14);
        fVar7 = local_88;
        fVar6 = local_8c;
        fVar5 = local_90;
        for (lVar19 = 0; lVar19 < 3; lVar19 = lVar19 + 1) {
          bVar3 = pbVar17[lVar19 + -1];
          uVar12 = bVar3 & 3;
          (**(code **)(*param_4 + 0x10))(param_4,&local_80,(int)(uVar12 | iVar9 * 4) >> 2,uVar12);
          if (((local_80 == fVar5) && (local_7c == fVar6)) && (local_78 == fVar7)) {
            lVar19 = (longlong)*(int *)(pbVar17 + -5) + (ulonglong)bVar3;
            puVar1 = (undefined8 *)(param_1 + lVar19 * 0x28);
            uVar4 = puVar1[1];
            lVar15 = *(int *)(pbVar17 + -5) + lVar15;
            puVar2 = (undefined8 *)(param_1 + lVar15 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar1 = (undefined8 *)(param_1 + 0x10 + lVar19 * 0x28);
            uVar4 = puVar1[1];
            puVar2 = (undefined8 *)(param_1 + 0x10 + lVar15 * 0x28);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            *(undefined8 *)(param_1 + 0x20 + lVar15 * 0x28) =
                 *(undefined8 *)(param_1 + 0x20 + lVar19 * 0x28);
            break;
          }
        }
      }
      pbVar17 = pbVar17 + 0x58;
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  return;
}



// FUNCTION 14390ff80 FUN_14390ff80 body=557 status=ok
// SIG undefined FUN_14390ff80(void)

void FUN_14390ff80(undefined8 *param_1,longlong param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int *piVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  int iVar24;
  uint *puVar25;
  uint *puVar26;
  undefined8 *puVar27;
  
  lVar19 = 0;
  if (0 < param_4 + -1) {
    puVar25 = (uint *)((longlong)param_1 + 0xa4);
    puVar26 = (uint *)((longlong)param_1 + 0x4c);
    piVar20 = (int *)(param_1 + 9);
    piVar23 = (int *)(param_1 + 0x14);
    do {
      if (*piVar20 == *piVar23) {
        uVar2 = *puVar25;
        if (((*puVar26 ^ uVar2) & 1) != 0) {
          *puVar26 = *puVar26 | 2;
          *puVar25 = uVar2 | 2;
        }
        lVar19 = lVar19 + 2;
        piVar23 = piVar23 + 0x2c;
        piVar20 = piVar20 + 0x2c;
        puVar26 = puVar26 + 0x2c;
        puVar25 = puVar25 + 0x2c;
      }
      else {
        lVar19 = lVar19 + 1;
        piVar23 = piVar23 + 0x16;
        piVar20 = piVar20 + 0x16;
        puVar26 = puVar26 + 0x16;
        puVar25 = puVar25 + 0x16;
      }
    } while (lVar19 < param_4 + -1);
  }
  iVar18 = 1;
  bVar16 = true;
  if (0 < param_3) {
    iVar24 = 2;
    puVar21 = (undefined4 *)(param_2 + 8);
    puVar27 = param_1;
    do {
      if (!bVar16) {
        return;
      }
      if ((~*(uint *)((longlong)puVar27 + 0x4c) & 1) == 0) {
        lVar19 = (longlong)iVar18;
        bVar4 = true;
        puVar22 = (undefined4 *)((longlong)param_1 + lVar19 * 0x58 + 0x4c);
        for (; lVar19 < param_4; lVar19 = lVar19 + 1) {
          if ((~(byte)*puVar22 & 1) != 0) {
            bVar4 = false;
            break;
          }
          iVar18 = iVar18 + 1;
          puVar22 = puVar22 + 0x16;
        }
        lVar19 = (longlong)iVar18;
        iVar18 = iVar18 + 1;
        if (!bVar4) {
          uVar3 = puVar21[-2];
          puVar21[-2] = *(undefined4 *)(param_2 + lVar19 * 0xc);
          *(undefined4 *)(param_2 + lVar19 * 0xc) = uVar3;
          uVar3 = puVar21[-1];
          puVar21[-1] = *(undefined4 *)(param_2 + 4 + lVar19 * 0xc);
          *(undefined4 *)(param_2 + 4 + lVar19 * 0xc) = uVar3;
          uVar3 = *puVar21;
          *puVar21 = *(undefined4 *)(param_2 + 8 + lVar19 * 0xc);
          *(undefined4 *)(param_2 + 8 + lVar19 * 0xc) = uVar3;
          uVar5 = *puVar27;
          uVar6 = puVar27[1];
          uVar7 = puVar27[2];
          uVar8 = puVar27[3];
          uVar9 = puVar27[4];
          uVar10 = puVar27[5];
          uVar11 = puVar27[6];
          uVar12 = puVar27[7];
          uVar13 = puVar27[8];
          uVar14 = puVar27[9];
          uVar1 = puVar27[10];
          uVar15 = (param_1 + lVar19 * 0xb)[1];
          *puVar27 = param_1[lVar19 * 0xb];
          puVar27[1] = uVar15;
          uVar15 = (param_1 + lVar19 * 0xb + 2)[1];
          puVar27[2] = param_1[lVar19 * 0xb + 2];
          puVar27[3] = uVar15;
          uVar15 = (param_1 + lVar19 * 0xb + 4)[1];
          puVar27[4] = param_1[lVar19 * 0xb + 4];
          puVar27[5] = uVar15;
          uVar15 = (param_1 + lVar19 * 0xb + 6)[1];
          puVar27[6] = param_1[lVar19 * 0xb + 6];
          puVar27[7] = uVar15;
          uVar15 = (param_1 + lVar19 * 0xb + 8)[1];
          puVar27[8] = param_1[lVar19 * 0xb + 8];
          puVar27[9] = uVar15;
          puVar27[10] = param_1[lVar19 * 0xb + 10];
          param_1[lVar19 * 0xb] = uVar5;
          (param_1 + lVar19 * 0xb)[1] = uVar6;
          param_1[lVar19 * 0xb + 2] = uVar7;
          (param_1 + lVar19 * 0xb + 2)[1] = uVar8;
          param_1[lVar19 * 0xb + 4] = uVar9;
          (param_1 + lVar19 * 0xb + 4)[1] = uVar10;
          param_1[lVar19 * 0xb + 6] = uVar11;
          (param_1 + lVar19 * 0xb + 6)[1] = uVar12;
          param_1[lVar19 * 0xb + 8] = uVar13;
          (param_1 + lVar19 * 0xb + 8)[1] = uVar14;
          param_1[lVar19 * 0xb + 10] = uVar1;
          goto LAB_143910169;
        }
        bVar16 = false;
        iVar17 = iVar24;
      }
      else if (iVar18 < iVar24) {
        puVar21 = puVar21 + 3;
        puVar27 = puVar27 + 0xb;
        iVar17 = iVar24 + 1;
        iVar18 = iVar24;
      }
      else {
LAB_143910169:
        puVar21 = puVar21 + 3;
        puVar27 = puVar27 + 0xb;
        iVar17 = iVar24 + 1;
      }
      iVar24 = iVar17;
    } while (iVar24 + -2 < param_3);
  }
  return;
}



// FUNCTION 1439101b0 FUN_1439101b0 body=2638 status=ok
// SIG undefined FUN_1439101b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1439101b0(undefined8 *param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
             longlong *param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  float local_1e0;
  float local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  longlong local_198;
  float local_188;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  longlong *local_138;
  longlong local_130;
  longlong local_128;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar8 = 0;
  fVar14 = 0.0;
  local_128 = (longlong)param_3;
  local_1a0 = 0.0;
  local_138 = param_6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar11 = lVar8;
  local_130 = param_2;
  if (0 < param_3) {
    do {
      lVar7 = (longlong)*(int *)(param_2 + lVar11 * 4);
      lVar10 = lVar7 * 0x58;
      if ((*(byte *)(lVar10 + 0x4c + param_5) & 4) == 0) {
        lVar9 = lVar8;
        if (*(int *)(param_4 + lVar7 * 0xc) != param_7) {
          if (*(int *)(param_4 + 4 + lVar7 * 0xc) == param_7) {
            lVar9 = 1;
          }
          else {
            lVar9 = -1;
            if (*(int *)(param_4 + 8 + lVar7 * 0xc) == param_7) {
              lVar9 = 2;
            }
          }
        }
        local_198 = lVar7 * 3;
        uVar5 = *(uint *)(param_4 + (local_198 + lVar9) * 4);
        (**(code **)(*param_6 + 0x18))(param_6,&local_110,(int)uVar5 >> 2,uVar5 & 3);
        local_170 = *(float *)(lVar10 + 0x30 + param_5);
        uVar1 = *(undefined8 *)(lVar10 + 0x28 + param_5);
        local_178._0_4_ = (float)uVar1;
        local_178._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_150 = *(float *)(lVar10 + 0x3c + param_5);
        uVar2 = *(undefined8 *)(lVar10 + 0x28 + param_5);
        uVar3 = *(undefined8 *)(lVar10 + 0x34 + param_5);
        local_168._0_4_ = (float)uVar2;
        fVar14 = local_10c * local_178._4_4_ + local_110 * (float)local_178 + local_108 * local_170;
        local_168._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_158._0_4_ = (float)uVar3;
        fVar15 = local_168._4_4_ - local_10c * fVar14;
        local_1b8 = local_108;
        local_158._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        fVar17 = (float)local_168 - local_110 * fVar14;
        local_1b0 = local_10c;
        fVar16 = local_170 - local_108 * fVar14;
        local_1b4 = local_110;
        uVar4 = *(undefined8 *)(lVar10 + 0x34 + param_5);
        local_148._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        local_148._0_4_ = (float)uVar4;
        fVar14 = local_10c * local_158._4_4_ + local_110 * (float)local_158 + local_108 * local_150;
        fVar20 = local_148._4_4_ - local_10c * fVar14;
        fVar19 = (float)local_148 - local_110 * fVar14;
        fVar21 = local_150 - local_108 * fVar14;
        local_1ac = fVar17;
        local_1a8 = fVar15;
        local_1a4 = fVar16;
        local_178 = uVar1;
        local_168 = uVar2;
        local_160 = local_170;
        local_158 = uVar3;
        local_148 = uVar4;
        local_140 = local_150;
        if (((1.1754944e-38 < ABS(fVar17)) || (1.1754944e-38 < ABS(fVar15))) ||
           (1.1754944e-38 < ABS(fVar16))) {
          local_1a4 = _guard_xfg_dispatch_icall_nop
                                (fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16);
          local_1a4 = 1.0 / local_1a4;
          local_1ac = fVar17 * local_1a4;
          local_1a8 = fVar15 * local_1a4;
          local_1a4 = fVar16 * local_1a4;
        }
        if (((1.1754944e-38 < ABS(fVar19)) || (1.1754944e-38 < ABS(fVar20))) ||
           (1.1754944e-38 < ABS(fVar21))) {
          fVar14 = _guard_xfg_dispatch_icall_nop
                             (fVar20 * fVar20 + fVar19 * fVar19 + fVar21 * fVar21);
          fVar14 = 1.0 / fVar14;
          fVar19 = fVar19 * fVar14;
          fVar20 = fVar20 * fVar14;
          fVar21 = fVar21 * fVar14;
        }
        param_6 = local_138;
        lVar7 = local_198;
        lVar6 = lVar9 + 1;
        if (1 < lVar9) {
          lVar6 = lVar8;
        }
        local_1d8 = *(float *)(param_4 + (local_198 + lVar9) * 4);
        local_198 = CONCAT44(local_198._4_4_,*(undefined4 *)(param_4 + (lVar6 + local_198) * 4));
        if (lVar9 < 1) {
          lVar9 = 2;
        }
        else {
          lVar9 = lVar9 + -1;
        }
        uVar5 = *(uint *)(param_4 + (lVar7 + lVar9) * 4);
        (**(code **)(*local_138 + 0x10))(local_138,&local_100,(int)uVar5 >> 2,uVar5 & 3);
        (**(code **)(*param_6 + 0x10))(param_6,&local_f0,(int)local_1d8 >> 2,(uint)local_1d8 & 3);
        (**(code **)(*param_6 + 0x10))
                  (param_6,&local_e0,(int)(uint)local_198 >> 2,(uint)local_198 & 3);
        fVar17 = local_e0 - local_f0;
        fVar15 = local_dc - local_ec;
        fVar16 = local_d8 - local_e8;
        fVar14 = local_1b0 * (local_fc - local_ec) + local_1b4 * (local_100 - local_f0) +
                 local_1b8 * (local_f8 - local_e8);
        local_1d8 = (local_100 - local_f0) - local_1b4 * fVar14;
        fVar18 = (local_fc - local_ec) - local_1b0 * fVar14;
        fVar14 = (local_f8 - local_e8) - local_1b8 * fVar14;
        if (((1.1754944e-38 < ABS(local_1d8)) || (1.1754944e-38 < ABS(fVar18))) ||
           (1.1754944e-38 < ABS(fVar14))) {
          fVar12 = _guard_xfg_dispatch_icall_nop
                             (fVar18 * fVar18 + local_1d8 * local_1d8 + fVar14 * fVar14);
          fVar12 = 1.0 / fVar12;
          local_1d8 = local_1d8 * fVar12;
          fVar18 = fVar18 * fVar12;
          fVar14 = fVar14 * fVar12;
        }
        fVar12 = local_1b0 * fVar15 + local_1b4 * fVar17 + local_1b8 * fVar16;
        fVar16 = fVar16 - local_1b8 * fVar12;
        fVar17 = fVar17 - local_1b4 * fVar12;
        fVar15 = fVar15 - local_1b0 * fVar12;
        if (((1.1754944e-38 < ABS(fVar17)) || (1.1754944e-38 < ABS(fVar15))) ||
           (1.1754944e-38 < ABS(fVar16))) {
          fVar12 = _guard_xfg_dispatch_icall_nop
                             (fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16);
          fVar12 = 1.0 / fVar12;
          fVar17 = fVar17 * fVar12;
          fVar15 = fVar15 * fVar12;
          fVar16 = fVar16 * fVar12;
        }
        fVar14 = fVar15 * fVar18 + fVar17 * local_1d8 + fVar16 * fVar14;
        if (fVar14 <= 1.0) {
          if (fVar14 < -1.0) {
            fVar14 = -1.0;
          }
        }
        else {
          fVar14 = 1.0;
        }
        dVar13 = _guard_xfg_dispatch_icall_nop((double)fVar14);
        local_1c0 = *(float *)(param_1 + 1);
        fVar16 = (float)dVar13;
        uVar1 = *param_1;
        fVar14 = local_1a0 + fVar16;
        local_1c8._0_4_ = (float)uVar1;
        local_1c8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_118 = local_1c0 + local_1a4 * fVar16;
        *param_1 = CONCAT44(local_1c8._4_4_ + local_1a8 * fVar16,
                            (float)local_1c8 + local_1ac * fVar16);
        uVar2 = param_1[2];
        local_1e8._0_4_ = (float)uVar2;
        local_1e8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        *(float *)(param_1 + 1) = local_118;
        local_1e0 = *(float *)(param_1 + 3);
        local_188 = local_1e0 + fVar21 * fVar16;
        param_1[2] = CONCAT44(local_1e8._4_4_ + fVar20 * fVar16,(float)local_1e8 + fVar19 * fVar16);
        *(float *)(param_1 + 3) = local_188;
        fVar15 = *(float *)(lVar10 + 0x44 + param_5);
        *(float *)((longlong)param_1 + 0xc) =
             fVar16 * *(float *)(lVar10 + 0x40 + param_5) + *(float *)((longlong)param_1 + 0xc);
        *(float *)((longlong)param_1 + 0x1c) =
             fVar16 * fVar15 + *(float *)((longlong)param_1 + 0x1c);
        param_2 = local_130;
        local_1e8 = uVar2;
        local_1c8 = uVar1;
        local_1a0 = fVar14;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < local_128);
  }
  local_1e8._0_4_ = (float)*param_1;
  if (((1.1754944e-38 < ABS((float)local_1e8)) ||
      (local_1e8._4_4_ = (float)((ulonglong)*param_1 >> 0x20), 1.1754944e-38 < ABS(local_1e8._4_4_))
      ) || (1.1754944e-38 < ABS(*(float *)(param_1 + 1)))) {
    local_1c8 = *param_1;
    local_1e0 = *(float *)(param_1 + 1);
    local_1e8._0_4_ = (float)local_1c8;
    local_1e8._4_4_ = (float)((ulonglong)local_1c8 >> 0x20);
    fVar15 = local_1e8._4_4_ * local_1e8._4_4_;
    fVar16 = (float)local_1e8 * (float)local_1e8;
    local_1e8 = local_1c8;
    local_1c0 = local_1e0;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15 + fVar16 + local_1e0 * local_1e0);
    fVar15 = 1.0 / fVar15;
    local_188 = local_1c0 * fVar15;
    *param_1 = CONCAT44(local_1c8._4_4_ * fVar15,(float)local_1c8 * fVar15);
    *(float *)(param_1 + 1) = local_188;
  }
  local_1e8._0_4_ = (float)param_1[2];
  if (((1.1754944e-38 < ABS((float)local_1e8)) ||
      (local_1e8._4_4_ = (float)((ulonglong)param_1[2] >> 0x20),
      1.1754944e-38 < ABS(local_1e8._4_4_))) || (1.1754944e-38 < ABS(*(float *)(param_1 + 3)))) {
    local_1c8 = param_1[2];
    local_1e0 = *(float *)(param_1 + 3);
    local_1e8._0_4_ = (float)local_1c8;
    local_1e8._4_4_ = (float)((ulonglong)local_1c8 >> 0x20);
    fVar15 = local_1e8._4_4_ * local_1e8._4_4_;
    fVar16 = (float)local_1e8 * (float)local_1e8;
    local_1e8 = local_1c8;
    local_1c0 = local_1e0;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15 + fVar16 + local_1e0 * local_1e0);
    fVar15 = 1.0 / fVar15;
    param_1[2] = CONCAT44(local_1c8._4_4_ * fVar15,(float)local_1c8 * fVar15);
    *(float *)(param_1 + 3) = local_1c0 * fVar15;
  }
  if (0.0 < fVar14) {
    *(float *)((longlong)param_1 + 0xc) = *(float *)((longlong)param_1 + 0xc) / fVar14;
    *(float *)((longlong)param_1 + 0x1c) = *(float *)((longlong)param_1 + 0x1c) / fVar14;
  }
  return param_1;
}



// FUNCTION 143910c00 FUN_143910c00 body=46 status=ok
// SIG undefined FUN_143910c00(void)

int FUN_143910c00(float param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)(((param_3 - param_1) / (param_2 - param_1)) * 2048.0);
  if (iVar2 < 0x800) {
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    return iVar1;
  }
  return 0x7ff;
}



// FUNCTION 143910c30 FUN_143910c30 body=1111 status=ok
// SIG undefined FUN_143910c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143910c30(longlong param_1,uint *param_2,longlong *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_138 [32];
  int local_118;
  longlong *local_110;
  int local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  int *local_f8;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  uint local_e4;
  int local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_108 = 0;
  local_118 = 0;
  local_110 = param_3;
  local_c8 = param_4;
  local_a0 = param_1;
  iVar2 = (**(code **)*param_3)(param_3);
  iVar5 = 0;
  if (0 < iVar2) {
    puVar6 = (undefined2 *)(param_1 + 0x54);
    puVar7 = param_2 + 2;
    piVar8 = (int *)(param_1 + 0x48);
    puVar10 = param_2 + 1;
    piVar11 = (int *)(param_1 + 0x50);
    piVar9 = (int *)(param_1 + 0xa8);
    local_f8 = (int *)(local_a0 + 0xa0);
    do {
      local_cc = (**(code **)(*local_110 + 8))(local_110,local_118);
      if (local_cc - 3U < 2) {
        *piVar8 = local_118;
        *piVar11 = local_108;
        if (local_cc == 3) {
          local_f8 = local_f8 + 0x16;
          uVar1 = local_118 * 4;
          *puVar6 = 0x100;
          *(undefined1 *)(puVar6 + 1) = 2;
          *param_2 = uVar1;
          piVar9 = piVar9 + 0x16;
          *puVar10 = uVar1 | 1;
          puVar10 = puVar10 + 3;
          *puVar7 = uVar1 | 2;
          piVar8 = piVar8 + 0x16;
          piVar11 = piVar11 + 0x16;
          puVar6 = puVar6 + 0x2c;
          param_2 = param_2 + 3;
          puVar7 = puVar7 + 3;
        }
        else {
          *piVar9 = local_108;
          *local_f8 = local_118;
          local_f0 = local_118 * 4;
          local_104 = local_f0 | 1;
          local_ec = 0;
          local_100 = local_f0 | 2;
          local_e8 = (int)local_f0 >> 2;
          local_fc = local_f0 | 3;
          (**(code **)(*local_110 + 0x20))(local_110,&local_b8,local_e8,0);
          local_e4 = local_104 & 3;
          local_e0 = (int)local_104 >> 2;
          (**(code **)(*local_110 + 0x20))(local_110,&local_a8,local_e0,local_e4);
          local_dc = local_100 & 3;
          local_d8 = (int)local_100 >> 2;
          (**(code **)(*local_110 + 0x20))(local_110,&local_c0,local_d8,local_dc);
          local_d4 = local_fc & 3;
          local_d0 = (int)local_fc >> 2;
          (**(code **)(*local_110 + 0x20))(local_110,&local_b0,local_d0,local_d4);
          fVar12 = (local_c0 - local_b8) * (local_c0 - local_b8) +
                   (local_bc - local_b4) * (local_bc - local_b4) + 0.0;
          fVar13 = (local_ac - local_a4) * (local_ac - local_a4) +
                   (local_b0 - local_a8) * (local_b0 - local_a8) + 0.0;
          if (fVar12 < fVar13) {
LAB_143910f8e:
            *puVar6 = 0x100;
            *(undefined1 *)(puVar6 + 1) = 2;
            *puVar10 = local_104;
            *param_2 = local_f0;
            *puVar7 = local_100;
            puVar6[0x2c] = 0x200;
            *(undefined1 *)(puVar6 + 0x2d) = 3;
            param_2[3] = local_f0;
          }
          else {
            if (fVar12 <= fVar13) {
              (**(code **)(*local_110 + 0x10))(local_110,&local_88,local_e8,local_ec);
              (**(code **)(*local_110 + 0x10))(local_110,&local_68,local_e0,local_e4);
              (**(code **)(*local_110 + 0x10))(local_110,&local_98,local_d8,local_dc);
              (**(code **)(*local_110 + 0x10))(local_110,&local_78,local_d0,local_d4);
              if ((local_94 - local_84) * (local_94 - local_84) +
                  (local_98 - local_88) * (local_98 - local_88) +
                  (local_90 - local_80) * (local_90 - local_80) <=
                  (local_74 - local_64) * (local_74 - local_64) +
                  (local_78 - local_68) * (local_78 - local_68) +
                  (local_70 - local_60) * (local_70 - local_60)) goto LAB_143910f8e;
            }
            *puVar6 = 0x100;
            *(undefined1 *)(puVar6 + 1) = 3;
            *param_2 = local_f0;
            *puVar10 = local_104;
            *puVar7 = local_fc;
            puVar6[0x2c] = 0x201;
            *(undefined1 *)(puVar6 + 0x2d) = 3;
            param_2[3] = local_104;
          }
          local_f8 = local_f8 + 0x2c;
          piVar9 = piVar9 + 0x2c;
          puVar10[3] = local_100;
          piVar8 = piVar8 + 0x2c;
          puVar10 = puVar10 + 6;
          puVar7[3] = local_fc;
          piVar11 = piVar11 + 0x2c;
          puVar6 = puVar6 + 0x58;
          param_2 = param_2 + 6;
          puVar7 = puVar7 + 6;
        }
        local_108 = local_108 + local_cc;
      }
      local_118 = local_118 + 1;
      iVar2 = (**(code **)*local_110)();
      param_1 = local_a0;
      iVar5 = local_108;
    } while (local_118 < iVar2);
  }
  lVar3 = (longlong)local_c8;
  if (0 < lVar3) {
    puVar4 = (undefined4 *)(param_1 + 0x4c);
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 0x16;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return iVar5;
}



// FUNCTION 143911090 FUN_143911090 body=1462 status=ok
// SIG undefined FUN_143911090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143911090(uint *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  uint *_Memory;
  void *pvVar11;
  uint *puVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_138 [32];
  int local_118;
  float local_100;
  longlong local_f8;
  undefined4 *local_f0;
  uint *local_e8;
  void *local_e0;
  uint *local_d8;
  longlong local_d0;
  uint *local_c8;
  undefined8 local_c0;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e8 = (uint *)CONCAT44(local_e8._4_4_,param_3);
  local_d8 = param_1;
  (**(code **)(*param_2 + 0x10))(param_2,&local_b0,0,0);
  local_c0._0_4_ = local_b0;
  local_c0._4_4_ = fStack_ac;
  lVar13 = 1;
  local_b8 = local_a8;
  local_100 = local_a8;
  lVar16 = (longlong)(param_3 * 3);
  local_f8 = CONCAT44(local_f8._4_4_,param_3 * 3);
  fVar25 = fStack_ac;
  fVar27 = fStack_ac;
  fVar28 = local_a8;
  fVar30 = local_a8;
  fVar31 = local_b0;
  fVar26 = local_b0;
  if (1 < lVar16) {
    do {
      (**(code **)(*param_2 + 0x10))
                (param_2,&local_c0,(int)param_1[lVar13] >> 2,param_1[lVar13] & 3);
      fVar32 = (float)local_c0;
      if ((fVar26 <= (float)local_c0) && (fVar32 = fVar26, fVar31 < (float)local_c0)) {
        fVar31 = (float)local_c0;
      }
      fVar26 = local_c0._4_4_;
      if ((fVar25 <= local_c0._4_4_) && (fVar26 = fVar25, fVar27 < local_c0._4_4_)) {
        fVar27 = local_c0._4_4_;
      }
      fVar29 = local_b8;
      if ((fVar28 <= local_b8) && (fVar29 = fVar28, fVar30 < local_b8)) {
        fVar30 = local_b8;
      }
      lVar13 = lVar13 + 1;
      fVar25 = fVar26;
      fVar28 = fVar29;
      fVar26 = fVar32;
    } while (lVar13 < lVar16);
  }
  pvVar10 = malloc((longlong)param_3 * 0xc);
  local_e0 = pvVar10;
  _Memory = malloc(0x2000);
  local_c8 = _Memory;
  local_f0 = malloc(0x2000);
  pvVar11 = malloc(0x2000);
  if (pvVar10 != (void *)0x0) {
    if (((_Memory != (uint *)0x0) && (local_f0 != (undefined4 *)0x0)) && (pvVar11 != (void *)0x0)) {
      _guard_xfg_dispatch_icall_nop(_Memory,0,0x2000);
      _guard_xfg_dispatch_icall_nop(pvVar11,0,0x2000);
      lVar13 = 0;
      if (0 < lVar16) {
        do {
          (**(code **)(*param_2 + 0x10))
                    (param_2,&local_c0,(int)param_1[lVar13] >> 2,param_1[lVar13] & 3);
          iVar8 = FUN_143910c00();
          lVar13 = lVar13 + 1;
          _Memory[iVar8] = _Memory[iVar8] + 1;
        } while (lVar13 < lVar16);
      }
      pvVar10 = local_e0;
      puVar7 = local_f0;
      lVar13 = 0x7ff;
      local_d0 = (longlong)local_f0 - (longlong)_Memory;
      *local_f0 = 0;
      puVar12 = _Memory;
      do {
        *(uint *)(local_d0 + 4 + (longlong)puVar12) =
             *(int *)(local_d0 + (longlong)puVar12) + *puVar12;
        puVar12 = puVar12 + 1;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      iVar8 = 0;
      if (0 < (int)local_f8) {
        do {
          (**(code **)(*param_2 + 0x10))(param_2,&local_c0,(int)*param_1 >> 2,*param_1 & 3);
          iVar9 = FUN_143910c00();
          lVar13 = (longlong)iVar9;
          param_1 = param_1 + 1;
          *(int *)((longlong)pvVar10 +
                  ((longlong)(int)puVar7[lVar13] +
                  (longlong)*(int *)((longlong)pvVar11 + lVar13 * 4)) * 4) = iVar8;
          iVar8 = iVar8 + 1;
          piVar1 = (int *)((longlong)pvVar11 + lVar13 * 4);
          *piVar1 = *piVar1 + 1;
          _Memory = local_c8;
        } while (iVar8 < (int)local_f8);
      }
      lVar13 = local_d0;
      free(pvVar11);
      uVar21 = *_Memory;
      if (DAT_1468387b0 < 2) {
        iVar8 = 1;
      }
      else {
        lVar16 = 0xff;
        iVar8 = 0x7f9;
        puVar12 = _Memory + 1;
        uVar22 = uVar21;
        uVar23 = uVar21;
        uVar24 = uVar21;
        uVar17 = uVar21;
        uVar18 = uVar21;
        uVar19 = uVar21;
        uVar20 = uVar21;
        do {
          uVar3 = *puVar12;
          uVar4 = puVar12[1];
          uVar5 = puVar12[2];
          uVar6 = puVar12[3];
          uVar17 = ((int)uVar17 < (int)uVar3) * uVar3 | ((int)uVar17 >= (int)uVar3) * uVar17;
          uVar18 = ((int)uVar18 < (int)uVar4) * uVar4 | ((int)uVar18 >= (int)uVar4) * uVar18;
          uVar19 = ((int)uVar19 < (int)uVar5) * uVar5 | ((int)uVar19 >= (int)uVar5) * uVar19;
          uVar20 = ((int)uVar20 < (int)uVar6) * uVar6 | ((int)uVar20 >= (int)uVar6) * uVar20;
          uVar3 = puVar12[4];
          uVar4 = puVar12[5];
          uVar5 = puVar12[6];
          uVar6 = puVar12[7];
          uVar21 = ((int)uVar21 < (int)uVar3) * uVar3 | ((int)uVar21 >= (int)uVar3) * uVar21;
          uVar22 = ((int)uVar22 < (int)uVar4) * uVar4 | ((int)uVar22 >= (int)uVar4) * uVar22;
          uVar23 = ((int)uVar23 < (int)uVar5) * uVar5 | ((int)uVar23 >= (int)uVar5) * uVar23;
          uVar24 = ((int)uVar24 < (int)uVar6) * uVar6 | ((int)uVar24 >= (int)uVar6) * uVar24;
          lVar16 = lVar16 + -1;
          puVar12 = puVar12 + 8;
        } while (lVar16 != 0);
        uVar21 = ((int)uVar17 < (int)uVar21) * uVar21 | ((int)uVar17 >= (int)uVar21) * uVar17;
        uVar22 = ((int)uVar18 < (int)uVar22) * uVar22 | ((int)uVar18 >= (int)uVar22) * uVar18;
        uVar23 = ((int)uVar19 < (int)uVar23) * uVar23 | ((int)uVar19 >= (int)uVar23) * uVar19;
        uVar24 = ((int)uVar20 < (int)uVar24) * uVar24 | ((int)uVar20 >= (int)uVar24) * uVar20;
        uVar21 = ((int)uVar21 < (int)uVar23) * uVar23 | ((int)uVar21 >= (int)uVar23) * uVar21;
        uVar22 = ((int)uVar22 < (int)uVar24) * uVar24 | ((int)uVar22 >= (int)uVar24) * uVar22;
        uVar21 = ((int)uVar21 < (int)uVar22) * uVar22 | ((int)uVar21 >= (int)uVar22) * uVar21;
      }
      lVar16 = 0x800;
      local_f8 = 0x800;
      puVar12 = _Memory + iVar8;
      uVar15 = (ulonglong)(0x800 - iVar8);
      do {
        if ((int)uVar21 < (int)*puVar12) {
          uVar21 = *puVar12;
        }
        puVar12 = puVar12 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      pvVar11 = malloc((longlong)(int)uVar21 << 4);
      pvVar10 = local_e0;
      local_c0 = pvVar11;
      do {
        uVar21 = *_Memory;
        pvVar2 = (void *)((longlong)pvVar10 + (longlong)*(int *)((longlong)_Memory + lVar13) * 4);
        if (1 < (int)uVar21) {
          local_e8 = _Memory;
          if (pvVar11 == (void *)0x0) {
            FUN_1439131d0(local_d8,param_2,pvVar2,uVar21);
          }
          else {
            lVar13 = 0;
            if (0 < (int)uVar21) {
              pfVar14 = (float *)((longlong)pvVar11 + 8);
              do {
                fVar25 = *(float *)((longlong)pvVar2 + lVar13 * 4);
                (**(code **)(*param_2 + 0x10))
                          (param_2,&local_b0,(int)local_d8[(int)fVar25] >> 2,
                           local_d8[(int)fVar25] & 3);
                lVar13 = lVar13 + 1;
                pfVar14[-2] = local_b0;
                *pfVar14 = local_a8;
                pfVar14[-1] = fStack_ac;
                pfVar14[1] = fVar25;
                pfVar14 = pfVar14 + 4;
                lVar16 = local_f8;
                pvVar10 = local_e0;
                pvVar11 = local_c0;
              } while (lVar13 < (int)uVar21);
            }
            _Memory = local_e8;
            local_118 = uVar21 - 1;
            FUN_143912bb0(local_d8,pvVar11,param_2,0);
          }
        }
        _Memory = _Memory + 1;
        lVar16 = lVar16 + -1;
        lVar13 = local_d0;
        local_f8 = lVar16;
      } while (lVar16 != 0);
      local_e8 = _Memory;
      if (pvVar11 != (void *)0x0) {
        free(pvVar11);
      }
      free(pvVar10);
      free(local_c8);
      free(local_f0);
      return;
    }
    free(pvVar10);
  }
  if (_Memory != (uint *)0x0) {
    free(_Memory);
  }
  if (local_f0 != (undefined4 *)0x0) {
    free(local_f0);
  }
  if (pvVar11 != (void *)0x0) {
    free(pvVar11);
  }
  FUN_143911650(param_1,param_2,(ulonglong)local_e8 & 0xffffffff);
  return;
}



// FUNCTION 143911650 FUN_143911650 body=713 status=ok
// SIG undefined FUN_143911650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143911650(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_158 [32];
  longlong local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  ulonglong local_c8;
  
  if (0 < (int)param_3) {
    local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_158;
    local_120 = 0;
    local_138 = 0;
    local_110 = (ulonglong)param_3;
    do {
      local_118 = 3;
      do {
        uVar10 = *(uint *)(param_1 + local_120) & 3;
        iVar14 = (int)*(uint *)(param_1 + local_120) >> 2;
        (**(code **)(*param_2 + 0x10))(param_2,&local_108,iVar14,uVar10);
        (**(code **)(*param_2 + 0x18))(param_2,&local_f8,iVar14,uVar10);
        (**(code **)(*param_2 + 0x20))(param_2,&local_130,iVar14,uVar10);
        fVar9 = local_f0;
        fVar8 = local_f4;
        fVar7 = local_f8;
        fVar6 = local_100;
        fVar5 = local_104;
        fVar4 = local_108;
        fVar3 = local_12c;
        fVar2 = local_130;
        lVar1 = local_138;
        lVar15 = 0;
        for (lVar12 = 0; lVar12 <= lVar1; lVar12 = lVar12 + 1) {
          for (lVar13 = 0; lVar13 < 3; lVar13 = lVar13 + 1) {
            uVar10 = *(uint *)(param_1 + (lVar15 + lVar13) * 4);
            uVar11 = uVar10 & 3;
            iVar14 = (int)uVar10 >> 2;
            (**(code **)(*param_2 + 0x10))(param_2,&local_e8,iVar14,uVar11);
            (**(code **)(*param_2 + 0x18))(param_2,&local_d8,iVar14,uVar11);
            (**(code **)(*param_2 + 0x20))(param_2,&local_128,iVar14,uVar11);
            if (((((fVar4 == local_e8) && (fVar5 == local_e4)) && (fVar6 == local_e0)) &&
                ((fVar7 == local_d8 && (fVar8 == local_d4)))) &&
               ((fVar9 == local_d0 && ((fVar2 == local_128 && (fVar3 == local_124))))))
            goto LAB_143911854;
          }
          lVar15 = lVar15 + 3;
        }
LAB_143911854:
        *(undefined4 *)(param_1 + local_120) = 0xffffffff;
        local_120 = local_120 + 4;
        local_118 = local_118 + -1;
      } while (local_118 != 0);
      local_138 = local_138 + 1;
      local_110 = local_110 - 1;
    } while (local_110 != 0);
  }
  return;
}



// FUNCTION 143911920 FUN_143911920 body=2988 status=ok
// SIG undefined FUN_143911920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143911920(longlong param_1,longlong param_2,int *param_3,uint param_4,longlong param_5,
             float param_6,longlong *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  int *_Memory;
  void *_Dst;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
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
  undefined1 auStack_278 [32];
  longlong local_258;
  longlong *local_250;
  int local_248;
  int *local_238;
  int local_230;
  int local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  int local_218;
  int *local_210;
  longlong local_208;
  int local_200;
  int local_1fc;
  int *local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong local_140;
  undefined8 *local_138;
  int *local_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [40];
  float local_f0;
  float local_ec;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_140 = param_5;
  uVar31 = 0;
  iVar21 = 0;
  local_148 = param_7;
  if (0 < (int)param_4) {
    iVar18 = iVar21;
    if ((7 < param_4) && (iVar18 = 0, 1 < DAT_1468387b0)) {
      lVar14 = 0;
      uVar25 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar34 = 0;
      uVar16 = param_4 & 0x80000007;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
      }
      piVar11 = param_3 + 0xc;
      do {
        iVar18 = piVar11[6];
        iVar21 = iVar21 + 8;
        iVar19 = *piVar11;
        lVar14 = lVar14 + 8;
        iVar6 = piVar11[-6];
        iVar7 = piVar11[-0xc];
        iVar8 = piVar11[0x18];
        iVar9 = piVar11[0x1e];
        iVar10 = piVar11[0x12];
        uVar25 = (uint)((int)uVar25 < iVar7) * iVar7 | ((int)uVar25 >= iVar7) * uVar25;
        uVar28 = (uint)((int)uVar28 < iVar6) * iVar6 | ((int)uVar28 >= iVar6) * uVar28;
        uVar29 = (uint)((int)uVar29 < iVar19) * iVar19 | ((int)uVar29 >= iVar19) * uVar29;
        uVar30 = (uint)((int)uVar30 < iVar18) * iVar18 | ((int)uVar30 >= iVar18) * uVar30;
        iVar18 = piVar11[0xc];
        uVar31 = (uint)((int)uVar31 < iVar18) * iVar18 | ((int)uVar31 >= iVar18) * uVar31;
        uVar32 = (uint)((int)uVar32 < iVar10) * iVar10 | ((int)uVar32 >= iVar10) * uVar32;
        uVar33 = (uint)((int)uVar33 < iVar8) * iVar8 | ((int)uVar33 >= iVar8) * uVar33;
        uVar34 = (uint)((int)uVar34 < iVar9) * iVar9 | ((int)uVar34 >= iVar9) * uVar34;
        piVar11 = piVar11 + 0x30;
      } while (lVar14 < (int)(param_4 - uVar16));
      uVar31 = ((int)uVar25 < (int)uVar31) * uVar31 | ((int)uVar25 >= (int)uVar31) * uVar25;
      uVar32 = ((int)uVar28 < (int)uVar32) * uVar32 | ((int)uVar28 >= (int)uVar32) * uVar28;
      uVar33 = ((int)uVar29 < (int)uVar33) * uVar33 | ((int)uVar29 >= (int)uVar33) * uVar29;
      uVar34 = ((int)uVar30 < (int)uVar34) * uVar34 | ((int)uVar30 >= (int)uVar34) * uVar30;
      uVar31 = ((int)uVar31 < (int)uVar33) * uVar33 | ((int)uVar31 >= (int)uVar33) * uVar31;
      uVar32 = ((int)uVar32 < (int)uVar34) * uVar34 | ((int)uVar32 >= (int)uVar34) * uVar32;
      uVar31 = ((int)uVar31 < (int)uVar32) * uVar32 | ((int)uVar31 >= (int)uVar32) * uVar31;
      iVar18 = iVar21;
    }
    if (iVar18 < (int)param_4) {
      puVar20 = (uint *)(param_3 + (longlong)iVar18 * 6);
      uVar15 = (ulonglong)(param_4 - iVar18);
      do {
        if ((int)uVar31 < (int)*puVar20) {
          uVar31 = *puVar20;
        }
        puVar20 = puVar20 + 6;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar31 != 0) {
      lVar14 = (longlong)(int)uVar31;
      local_210 = param_3;
      local_128 = param_1;
      puVar12 = malloc(lVar14 * 0x28);
      local_1e0 = puVar12;
      local_238 = malloc(lVar14 << 4);
      _Memory = malloc(lVar14 * 4);
      piVar11 = local_238;
      local_130 = _Memory;
      if (puVar12 != (undefined8 *)0x0) {
        if ((local_238 != (int *)0x0) && (_Memory != (int *)0x0)) {
          local_22c = 0;
          local_1e8 = 0;
          local_120 = (longlong)(int)param_4;
          if (0 < (int)param_4) {
            do {
              local_230 = 0;
              local_208 = 0;
              local_218 = 0;
              if (0 < *param_3) {
                local_150 = 0;
                local_1f8 = local_238;
                piVar11 = local_238;
                local_138 = puVar12;
                do {
                  lVar14 = (longlong)*(int *)(local_150 + *(longlong *)(param_3 + 2)) * 0x58;
                  if (*(int **)(lVar14 + 0x10 + param_2) == param_3) {
                    local_1f0 = 0;
                  }
                  else if (*(int **)(lVar14 + 0x18 + param_2) == param_3) {
                    local_1f0 = 1;
                  }
                  else {
                    local_1f0 = -1;
                    if (*(int **)(lVar14 + 0x20 + param_2) == param_3) {
                      local_1f0 = 2;
                    }
                  }
                  uVar31 = *(uint *)(local_140 +
                                    (local_1f0 +
                                    (longlong)*(int *)(local_150 + *(longlong *)(param_3 + 2)) * 3)
                                    * 4);
                  local_158 = lVar14;
                  (**(code **)(*local_148 + 0x18))(local_148,&local_f0,(int)uVar31 >> 2,uVar31 & 3);
                  fVar36 = local_ec;
                  fVar27 = local_f0;
                  local_1d0 = *(float *)(lVar14 + 0x30 + param_2);
                  uVar2 = *(undefined8 *)(lVar14 + 0x28 + param_2);
                  local_1d8._0_4_ = (float)uVar2;
                  local_1d8._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                  local_1b0 = *(float *)(lVar14 + 0x3c + param_2);
                  uVar3 = *(undefined8 *)(lVar14 + 0x28 + param_2);
                  uVar4 = *(undefined8 *)(lVar14 + 0x34 + param_2);
                  local_1c8._0_4_ = (float)uVar3;
                  fVar26 = local_ec * local_1d8._4_4_ + local_f0 * (float)local_1d8 +
                           local_e8 * local_1d0;
                  local_1c8._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                  local_1b8._0_4_ = (float)uVar4;
                  fVar37 = local_1c8._4_4_ - local_ec * fVar26;
                  fVar39 = (float)local_1c8 - local_f0 * fVar26;
                  local_1b8._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                  fVar38 = local_1d0 - local_e8 * fVar26;
                  uVar5 = *(undefined8 *)(lVar14 + 0x34 + param_2);
                  local_1a8._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
                  local_1a8._0_4_ = (float)uVar5;
                  fVar26 = local_ec * local_1b8._4_4_ + local_f0 * (float)local_1b8 +
                           local_e8 * local_1b0;
                  fVar40 = local_1a8._4_4_ - local_ec * fVar26;
                  fVar35 = local_1b0 - local_e8 * fVar26;
                  fVar26 = (float)local_1a8 - local_f0 * fVar26;
                  local_228 = fVar37;
                  local_224 = fVar39;
                  local_220 = fVar38;
                  local_21c = fVar35;
                  local_1d8 = uVar2;
                  local_1c8 = uVar3;
                  local_1c0 = local_1d0;
                  local_1b8 = uVar4;
                  local_1a8 = uVar5;
                  local_1a0 = local_1b0;
                  if (((1.1754944e-38 < ABS(fVar39)) || (1.1754944e-38 < ABS(fVar37))) ||
                     (1.1754944e-38 < ABS(fVar38))) {
                    local_220 = _guard_xfg_dispatch_icall_nop
                                          (fVar37 * fVar37 + fVar39 * fVar39 + fVar38 * fVar38);
                    local_220 = 1.0 / local_220;
                    local_224 = fVar39 * local_220;
                    local_228 = fVar37 * local_220;
                    local_220 = fVar38 * local_220;
                  }
                  if (((1.1754944e-38 < ABS(fVar26)) || (1.1754944e-38 < ABS(fVar40))) ||
                     (1.1754944e-38 < ABS(fVar35))) {
                    fVar37 = _guard_xfg_dispatch_icall_nop
                                       (fVar40 * fVar40 + fVar26 * fVar26 + fVar35 * fVar35);
                    fVar37 = 1.0 / fVar37;
                    local_21c = fVar35 * fVar37;
                    fVar26 = fVar26 * fVar37;
                    fVar40 = fVar40 * fVar37;
                  }
                  piVar17 = local_210;
                  local_200 = *(int *)(lVar14 + 0x48 + param_2);
                  iVar18 = 0;
                  iVar21 = 0;
                  if (0 < *param_3) {
                    lVar14 = 0;
                    piVar11 = _Memory;
                    do {
                      local_1fc = *(int *)(lVar14 + *(longlong *)(piVar17 + 2));
                      lVar22 = (longlong)local_1fc * 0x58;
                      local_190 = *(float *)(param_2 + 0x30 + lVar22);
                      uVar2 = *(undefined8 *)(param_2 + 0x28 + lVar22);
                      local_198._0_4_ = (float)uVar2;
                      local_198._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
                      local_170 = *(float *)(param_2 + 0x3c + lVar22);
                      uVar3 = *(undefined8 *)(param_2 + 0x28 + lVar22);
                      local_188._0_4_ = (float)uVar3;
                      uVar4 = *(undefined8 *)(param_2 + 0x34 + lVar22);
                      local_188._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
                      fVar35 = fVar36 * local_198._4_4_ + fVar27 * (float)local_198 +
                               local_e8 * local_190;
                      fVar37 = local_188._4_4_ - fVar36 * fVar35;
                      fVar38 = local_190 - local_e8 * fVar35;
                      fVar39 = (float)local_188 - fVar27 * fVar35;
                      local_178._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
                      local_178._0_4_ = (float)uVar4;
                      uVar5 = *(undefined8 *)(param_2 + 0x34 + lVar22);
                      local_168._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
                      local_168._0_4_ = (float)uVar5;
                      fVar27 = local_ec * local_178._4_4_ + local_f0 * (float)local_178 +
                               local_e8 * local_170;
                      fVar36 = local_168._4_4_ - local_ec * fVar27;
                      fVar35 = (float)local_168 - local_f0 * fVar27;
                      fVar27 = local_170 - local_e8 * fVar27;
                      local_198 = uVar2;
                      local_188 = uVar3;
                      local_180 = local_190;
                      local_178 = uVar4;
                      local_168 = uVar5;
                      local_160 = local_170;
                      if (((1.1754944e-38 < ABS(fVar39)) || (1.1754944e-38 < ABS(fVar37))) ||
                         (1.1754944e-38 < ABS(fVar38))) {
                        fVar24 = _guard_xfg_dispatch_icall_nop
                                           (fVar37 * fVar37 + fVar39 * fVar39 + fVar38 * fVar38);
                        fVar24 = 1.0 / fVar24;
                        fVar39 = fVar39 * fVar24;
                        fVar37 = fVar37 * fVar24;
                        fVar38 = fVar38 * fVar24;
                      }
                      if (((1.1754944e-38 < ABS(fVar35)) || (1.1754944e-38 < ABS(fVar36))) ||
                         (1.1754944e-38 < ABS(fVar27))) {
                        fVar24 = _guard_xfg_dispatch_icall_nop
                                           (fVar36 * fVar36 + fVar35 * fVar35 + fVar27 * fVar27);
                        fVar24 = 1.0 / fVar24;
                        fVar35 = fVar35 * fVar24;
                        fVar36 = fVar36 * fVar24;
                        fVar27 = fVar27 * fVar24;
                      }
                      _Memory = local_130;
                      if (((((*(uint *)(param_2 + 0x4c + lVar22) |
                             *(uint *)(local_158 + 0x4c + param_2)) & 4) != 0) ||
                          (local_200 == *(int *)(param_2 + 0x48 + lVar22))) ||
                         ((param_6 < fVar37 * local_228 + fVar39 * local_224 + fVar38 * local_220 &&
                          (param_6 < fVar36 * fVar40 + fVar35 * fVar26 + fVar27 * local_21c)))) {
                        iVar21 = iVar21 + 1;
                        *piVar11 = local_1fc;
                        piVar11 = piVar11 + 1;
                      }
                      iVar18 = iVar18 + 1;
                      lVar14 = lVar14 + 4;
                      fVar36 = local_ec;
                      fVar27 = local_f0;
                    } while (iVar18 < *piVar17);
                    param_3 = local_210;
                    piVar11 = local_238;
                    if (1 < iVar21) {
                      FUN_143913470(local_130,0,iVar21 + -1,0x26065ca);
                      param_3 = local_210;
                      piVar11 = local_238;
                    }
                  }
                  bVar23 = false;
                  iVar18 = 0;
                  lVar14 = 0;
                  piVar17 = piVar11;
                  if (local_208 < 1) {
LAB_1439121e0:
                    _Dst = malloc((longlong)iVar21 << 2);
                    piVar11 = local_238;
                    if (_Dst == (void *)0x0) {
                      if (0 < local_208) {
                        piVar17 = local_238 + 2;
                        lVar14 = local_208;
                        do {
                          free(*(void **)piVar17);
                          piVar17 = piVar17 + 4;
                          lVar14 = lVar14 + -1;
                        } while (lVar14 != 0);
                      }
                      free(piVar11);
                      free(_Memory);
                      free(local_1e0);
                      return 0;
                    }
                    *local_1f8 = iVar21;
                    *(void **)(local_1f8 + 2) = _Dst;
                    _guard_xfg_dispatch_icall_nop(_Dst,_Memory,(longlong)iVar21 << 2);
                    local_248 = param_3[4];
                    local_250 = local_148;
                    local_258 = param_2;
                    puVar12 = (undefined8 *)FUN_1439101b0(local_118,_Memory,iVar21,local_140);
                    local_230 = local_230 + 1;
                    local_208 = local_208 + 1;
                    uVar2 = puVar12[1];
                    local_1f8 = local_1f8 + 4;
                    *local_138 = *puVar12;
                    local_138[1] = uVar2;
                    uVar2 = puVar12[3];
                    local_138[2] = puVar12[2];
                    local_138[3] = uVar2;
                    local_138[4] = puVar12[4];
                    local_138 = local_138 + 5;
                    piVar11 = local_238;
                  }
                  else {
                    do {
                      if (bVar23) goto LAB_143912271;
                      iVar19 = 0;
                      bVar23 = true;
                      if (iVar21 == *piVar17) {
                        if (0 < iVar21) {
                          lVar22 = 0;
                          do {
                            if (!bVar23) goto LAB_1439121c9;
                            bVar23 = *(int *)(lVar22 + (longlong)_Memory) ==
                                     *(int *)(lVar22 + *(longlong *)(piVar17 + 2));
                            if (bVar23) {
                              iVar19 = iVar19 + 1;
                              lVar22 = lVar22 + 4;
                            }
                          } while (iVar19 < iVar21);
                        }
                        if (!bVar23) goto LAB_1439121c9;
                      }
                      else {
                        bVar23 = false;
LAB_1439121c9:
                        iVar18 = iVar18 + 1;
                        lVar14 = lVar14 + 1;
                        piVar17 = piVar17 + 4;
                      }
                    } while (lVar14 < local_208);
                    if (!bVar23) goto LAB_1439121e0;
                  }
LAB_143912271:
                  puVar12 = local_1e0;
                  lVar22 = (longlong)
                           (int)((uint)*(byte *)(local_1f0 + local_158 + 0x54 + param_2) +
                                *(int *)(local_158 + 0x50 + param_2));
                  puVar1 = (undefined8 *)(local_128 + lVar22 * 0x28);
                  if (*(int *)(local_128 + 0x20 + lVar22 * 0x28) == 1) {
                    puVar13 = (undefined8 *)
                              FUN_14390f130(local_118,puVar1,local_1e0 + (longlong)iVar18 * 5);
                    uVar2 = puVar13[1];
                    *puVar1 = *puVar13;
                    puVar1[1] = uVar2;
                    *(undefined1 (*) [16])(puVar1 + 2) = *(undefined1 (*) [16])(puVar13 + 2);
                    puVar1[4] = puVar13[4];
                    *(undefined4 *)(puVar1 + 4) = 2;
                  }
                  else {
                    uVar2 = (local_1e0 + lVar14 * 5)[1];
                    *puVar1 = local_1e0[lVar14 * 5];
                    puVar1[1] = uVar2;
                    *(undefined1 (*) [16])(puVar1 + 2) =
                         *(undefined1 (*) [16])(local_1e0 + lVar14 * 5 + 2);
                    puVar1[4] = local_1e0[lVar14 * 5 + 4];
                    *(undefined4 *)(puVar1 + 4) = 1;
                  }
                  local_218 = local_218 + 1;
                  local_150 = local_150 + 4;
                  *(int *)((longlong)puVar1 + 0x24) = param_3[5];
                } while (local_218 < *param_3);
              }
              lVar14 = (longlong)local_230;
              if (0 < local_230) {
                piVar11 = local_238 + 2;
                do {
                  free(*(void **)piVar11);
                  piVar11 = piVar11 + 4;
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
              }
              local_22c = local_22c + local_230;
              local_1e8 = local_1e8 + 1;
              param_3 = param_3 + 6;
              local_210 = param_3;
            } while (local_1e8 < local_120);
          }
          free(local_238);
          free(_Memory);
          free(puVar12);
          return 1;
        }
        free(puVar12);
      }
      if (piVar11 != (int *)0x0) {
        free(piVar11);
      }
      if (_Memory != (int *)0x0) {
        free(_Memory);
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1439124d0 FUN_1439124d0 body=1758 status=ok
// SIG undefined FUN_1439124d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439124d0(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Memory;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  uint *puVar12;
  ulonglong uVar13;
  int *piVar14;
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
  undefined1 auStack_1a8 [32];
  float local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  undefined8 local_170;
  longlong local_160;
  longlong *local_158;
  ulonglong local_150;
  longlong local_148;
  float local_138;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar9 = (ulonglong)param_4;
  uVar4 = 0;
  if (0 < param_4) {
    lVar3 = param_1 + 0x2c;
    puVar5 = (undefined4 *)(param_1 + 8);
    puVar7 = (undefined8 *)(param_1 + 0x18);
    uVar10 = uVar9;
    do {
      puVar5[-2] = 0xffffffff;
      puVar7[-1] = 0;
      *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 4;
      puVar5[-1] = 0xffffffff;
      *puVar7 = 0;
      *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 4;
      *puVar5 = 0xffffffff;
      puVar7[1] = 0;
      *(uint *)(lVar3 + 0x20) = *(uint *)(lVar3 + 0x20) | 4;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined8 *)(lVar3 + 4) = 0;
      *(undefined8 *)(lVar3 + 0xc) = 0;
      *(undefined8 *)(lVar3 + 0x14) = 0;
      uVar10 = uVar10 - 1;
      lVar3 = lVar3 + 0x58;
      puVar5 = puVar5 + 0x16;
      puVar7 = puVar7 + 0xb;
    } while (uVar10 != 0);
  }
  local_160 = param_2;
  local_158 = param_3;
  local_150 = uVar9;
  local_148 = param_1;
  if (0 < param_4) {
    puVar7 = (undefined8 *)(param_1 + 0x34);
    puVar12 = (uint *)(param_2 + 8);
    do {
      (**(code **)(*param_3 + 0x10))(param_3,&local_110,(int)puVar12[-2] >> 2,puVar12[-2] & 3);
      (**(code **)(*param_3 + 0x10))(param_3,&local_120,(int)puVar12[-1] >> 2,puVar12[-1] & 3);
      (**(code **)(*param_3 + 0x10))(param_3,&local_100,(int)*puVar12 >> 2,*puVar12 & 3);
      (**(code **)(*param_3 + 0x20))(param_3,&local_178,(int)puVar12[-2] >> 2,puVar12[-2] & 3);
      (**(code **)(*param_3 + 0x20))(param_3,&local_170,(int)puVar12[-1] >> 2,puVar12[-1] & 3);
      (**(code **)(*param_3 + 0x20))(param_3,&local_180,(int)*puVar12 >> 2,*puVar12 & 3);
      fVar18 = local_17c - local_174;
      fVar17 = local_170._4_4_ - local_174;
      fVar20 = (float)local_170 - local_178;
      fVar19 = fVar18 * fVar20 - (local_180 - local_178) * fVar17;
      fVar21 = -(local_180 - local_178);
      fVar24 = (local_120 - local_110) * fVar18 - (local_100 - local_110) * fVar17;
      local_188 = (local_11c - local_10c) * fVar18 - (local_fc - local_10c) * fVar17;
      uVar8 = 0;
      if (0.0 < fVar19) {
        uVar8 = 8;
      }
      uVar2 = *(uint *)(puVar7 + 3);
      *(uint *)(puVar7 + 3) = uVar8 | uVar2;
      fVar22 = (local_118 - local_108) * fVar21 + (local_f8 - local_108) * fVar20;
      fVar23 = (local_118 - local_108) * fVar18 - (local_f8 - local_108) * fVar17;
      fVar19 = ABS(fVar19);
      fVar17 = (local_120 - local_110) * fVar21 + (local_100 - local_110) * fVar20;
      fVar18 = (local_11c - local_10c) * fVar21 + (local_fc - local_10c) * fVar20;
      if (1.1754944e-38 < fVar19) {
        fVar20 = _guard_xfg_dispatch_icall_nop
                           (local_188 * local_188 + fVar24 * fVar24 + fVar23 * fVar23);
        fVar21 = _guard_xfg_dispatch_icall_nop(fVar18 * fVar18 + fVar17 * fVar17 + fVar22 * fVar22);
        if (uVar8 == 0 && (uVar2 & 8) == 0) {
          fVar16 = -1.0;
        }
        else {
          fVar16 = 1.0;
        }
        if (1.1754944e-38 < ABS(fVar20)) {
          fVar15 = fVar16 / fVar20;
          local_138 = fVar23 * fVar15;
          *(ulonglong *)((longlong)puVar7 + -0xc) = CONCAT44(local_188 * fVar15,fVar24 * fVar15);
          *(float *)((longlong)puVar7 + -4) = local_138;
        }
        if (1.1754944e-38 < ABS(fVar21)) {
          fVar16 = fVar16 / fVar21;
          local_128 = fVar22 * fVar16;
          *puVar7 = CONCAT44(fVar18 * fVar16,fVar17 * fVar16);
          *(float *)(puVar7 + 1) = local_128;
        }
        *(float *)((longlong)puVar7 + 0xc) = fVar20 / fVar19;
        *(float *)(puVar7 + 2) = fVar21 / fVar19;
        if ((1.1754944e-38 < ABS(fVar20 / fVar19)) && (1.1754944e-38 < ABS(fVar21 / fVar19))) {
          *(uint *)(puVar7 + 3) = uVar8 | uVar2 & 0xfffffffb;
        }
      }
      puVar12 = puVar12 + 3;
      puVar7 = puVar7 + 0xb;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar9 = local_150 & 0xffffffff;
  }
  lVar3 = local_148;
  local_178 = (float)((int)uVar9 + -1);
  if (0 < (int)local_178) {
    local_188 = 0.0;
    local_170 = (uint *)(local_148 + 0xa4);
    local_180 = 4.2039e-45;
    puVar12 = (uint *)(local_148 + 0x4c);
    piVar14 = (int *)(local_148 + 0x48);
    uVar13 = 1;
    piVar11 = (int *)(local_148 + 0xa0);
    uVar9 = uVar4;
    uVar10 = uVar4;
    fVar19 = local_178;
    do {
      fVar17 = (float)uVar4;
      if (*piVar14 == *piVar11) {
        if ((((*puVar12 & 1) == 0) && (uVar8 = *local_170, fVar19 = local_178, (uVar8 & 1) == 0)) &&
           (((uVar8 ^ *puVar12) & 8) != 0)) {
          uVar4 = uVar10;
          uVar6 = uVar13;
          if ((uVar8 & 4) == 0) {
            fVar19 = (float)FUN_14390fbf0(local_158,local_160 + (longlong)(int)fVar17 * 4);
            fVar17 = (float)FUN_14390fbf0(local_158,local_160 + (longlong)(int)local_180 * 4);
            if (fVar19 < fVar17) {
              uVar4 = uVar13;
              uVar6 = uVar10;
            }
          }
          puVar1 = (uint *)(uVar6 * 0x58 + 0x4c + lVar3);
          *puVar1 = *puVar1 & 0xfffffff7;
          puVar1 = (uint *)(uVar6 * 0x58 + 0x4c + lVar3);
          *puVar1 = *puVar1 | *(uint *)(uVar4 * 0x58 + 0x4c + lVar3) & 8;
          fVar17 = local_188;
          fVar19 = local_178;
        }
        uVar8 = (int)uVar9 + 2;
        local_188 = (float)((int)fVar17 + 6);
        local_180 = (float)((int)local_180 + 6);
        uVar10 = uVar10 + 2;
        piVar11 = piVar11 + 0x2c;
        piVar14 = piVar14 + 0x2c;
        puVar12 = puVar12 + 0x2c;
        local_170 = local_170 + 0x2c;
        uVar13 = uVar13 + 2;
      }
      else {
        uVar8 = (int)uVar9 + 1;
        local_188 = (float)((int)fVar17 + 3);
        local_180 = (float)((int)local_180 + 3);
        uVar10 = uVar10 + 1;
        piVar11 = piVar11 + 0x16;
        piVar14 = piVar14 + 0x16;
        puVar12 = puVar12 + 0x16;
        local_170 = local_170 + 0x16;
        uVar13 = uVar13 + 1;
      }
      uVar9 = (ulonglong)uVar8;
      uVar4 = (ulonglong)(uint)local_188;
    } while ((int)uVar8 < (int)fVar19);
    uVar9 = local_150 & 0xffffffff;
  }
  _Memory = malloc(local_150 * 0x24);
  if (_Memory == (void *)0x0) {
    FUN_14390fab0(lVar3,local_160,uVar9 & 0xffffffff);
  }
  else {
    FUN_14390f730(lVar3,_Memory,local_160,uVar9 & 0xffffffff);
    free(_Memory);
  }
  return;
}



// FUNCTION 143912bb0 FUN_143912bb0 body=1554 status=ok
// SIG undefined FUN_143912bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143912bb0(longlong param_1,longlong param_2,longlong *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_198 [32];
  int local_178;
  int local_168;
  int local_164;
  longlong *local_160;
  longlong local_158;
  longlong local_150;
  int *local_148;
  longlong local_140;
  longlong local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  longlong local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar22 = (longlong)param_5;
  local_138 = param_2;
  local_168 = param_4;
  local_120 = lVar22;
  while( true ) {
    lVar17 = (longlong)local_168;
    local_150 = 3;
    uVar4 = *(undefined4 *)(local_138 + lVar17 * 0x10);
    uVar5 = *(undefined4 *)(local_138 + 4 + lVar17 * 0x10);
    local_100 = *(float *)(local_138 + 8 + lVar17 * 0x10);
    local_164 = local_168 + 1;
    lVar18 = 0;
    lVar21 = (longlong)local_164;
    local_108 = (int *)CONCAT44(uVar5,uVar4);
    local_118 = CONCAT44(uVar5,uVar4);
    local_110 = local_100;
    do {
      if (local_164 <= param_5) {
        lVar24 = lVar21;
        iVar25 = local_164;
        if (3 < (param_5 - local_164) + 1) {
          fVar28 = *(float *)((longlong)&local_108 + lVar18 * 4);
          pfVar19 = (float *)(local_138 + (lVar18 + (lVar21 + 2) * 4) * 4);
          uVar16 = ((param_5 - local_164) - 3U >> 2) + 1;
          uVar23 = (ulonglong)uVar16;
          iVar25 = local_164 + uVar16 * 4;
          lVar24 = lVar21 + (ulonglong)uVar16 * 4;
          do {
            fVar27 = pfVar19[-8];
            fVar29 = fVar27;
            if ((fVar28 <= fVar27) &&
               (pfVar3 = (float *)((longlong)&local_118 + lVar18 * 4), fVar29 = fVar28,
               *pfVar3 <= fVar27 && fVar27 != *pfVar3)) {
              *(float *)((longlong)&local_118 + lVar18 * 4) = fVar27;
            }
            fVar28 = pfVar19[-4];
            fVar27 = fVar28;
            if ((fVar29 <= fVar28) &&
               (pfVar3 = (float *)((longlong)&local_118 + lVar18 * 4), fVar27 = fVar29,
               *pfVar3 <= fVar28 && fVar28 != *pfVar3)) {
              *(float *)((longlong)&local_118 + lVar18 * 4) = fVar28;
            }
            fVar28 = *pfVar19;
            fVar29 = fVar28;
            if ((fVar27 <= fVar28) &&
               (pfVar3 = (float *)((longlong)&local_118 + lVar18 * 4), fVar29 = fVar27,
               *pfVar3 <= fVar28 && fVar28 != *pfVar3)) {
              *(float *)((longlong)&local_118 + lVar18 * 4) = fVar28;
            }
            fVar27 = pfVar19[4];
            fVar28 = fVar27;
            if ((fVar29 <= fVar27) &&
               (pfVar3 = (float *)((longlong)&local_118 + lVar18 * 4), fVar28 = fVar29,
               *pfVar3 <= fVar27 && fVar27 != *pfVar3)) {
              *(float *)((longlong)&local_118 + lVar18 * 4) = fVar27;
            }
            pfVar19 = pfVar19 + 0x10;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          *(float *)((longlong)&local_108 + lVar18 * 4) = fVar28;
        }
        if (iVar25 <= param_5) {
          pfVar19 = (float *)(local_138 + (lVar18 + lVar24 * 4) * 4);
          lVar24 = (longlong)((param_5 - iVar25) + 1);
          fVar28 = *(float *)((longlong)&local_108 + lVar18 * 4);
          do {
            fVar27 = *pfVar19;
            fVar29 = fVar27;
            if ((fVar28 <= fVar27) &&
               (pfVar3 = (float *)((longlong)&local_118 + lVar18 * 4), fVar29 = fVar28,
               *pfVar3 <= fVar27 && fVar27 != *pfVar3)) {
              *(float *)((longlong)&local_118 + lVar18 * 4) = fVar27;
            }
            pfVar19 = pfVar19 + 4;
            lVar24 = lVar24 + -1;
            fVar28 = fVar29;
          } while (lVar24 != 0);
          *(float *)((longlong)&local_108 + lVar18 * 4) = fVar29;
        }
      }
      lVar18 = lVar18 + 1;
      local_150 = local_150 + -1;
    } while (local_150 != 0);
    if ((local_118._4_4_ - local_108._4_4_ <= (float)local_118 - (float)local_108) ||
       (local_118._4_4_ - local_108._4_4_ <= local_110 - local_100)) {
      lVar18 = 0;
      if ((float)local_118 - (float)local_108 < local_110 - local_100) {
        lVar18 = 2;
      }
    }
    else {
      lVar18 = 1;
    }
    fVar28 = *(float *)((longlong)&local_118 + lVar18 * 4);
    fVar27 = *(float *)((longlong)&local_108 + lVar18 * 4);
    fVar29 = (fVar27 + fVar28) * 0.5;
    local_160 = param_3;
    local_158 = param_1;
    if ((fVar28 <= fVar29) || (fVar29 <= fVar27)) break;
    lVar21 = lVar22;
    iVar25 = local_168;
    iVar26 = param_5;
    if (lVar17 < lVar22) {
      do {
        pfVar19 = (float *)(local_138 + (lVar18 + lVar17 * 4) * 4);
        while( true ) {
          if (lVar21 <= lVar17) goto LAB_143912ec2;
          if (fVar29 < *pfVar19 || fVar29 == *pfVar19) break;
          iVar25 = iVar25 + 1;
          lVar17 = lVar17 + 1;
          pfVar19 = pfVar19 + 4;
        }
        pfVar19 = (float *)(local_138 + (lVar18 + lVar21 * 4) * 4);
        for (; lVar17 < lVar21; lVar21 = lVar21 + -1) {
          if (*pfVar19 <= fVar29 && fVar29 != *pfVar19) {
            iVar25 = iVar25 + 1;
            iVar26 = iVar26 + -1;
            puVar1 = (undefined4 *)(local_138 + lVar21 * 0x10);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar2 = (undefined4 *)(local_138 + lVar17 * 0x10);
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar2 = (undefined4 *)(local_138 + lVar17 * 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar4;
            puVar2[2] = uVar5;
            puVar2[3] = uVar6;
            puVar1 = (undefined4 *)(local_138 + lVar21 * 0x10);
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar1[2] = uVar9;
            puVar1[3] = uVar10;
            lVar21 = lVar21 + -1;
            lVar17 = lVar17 + 1;
            break;
          }
          iVar26 = iVar26 + -1;
          pfVar19 = pfVar19 + -4;
        }
      } while (lVar17 < lVar21);
    }
LAB_143912ec2:
    if (iVar25 == iVar26) {
      pfVar19 = (float *)(local_138 + (lVar18 + lVar21 * 4) * 4);
      if (fVar29 < *pfVar19 || fVar29 == *pfVar19) {
        iVar26 = iVar26 + -1;
      }
      else {
        iVar25 = iVar25 + 1;
      }
    }
    if (local_168 < iVar26) {
      local_178 = iVar26;
      FUN_143912bb0(param_1,local_138,param_3,local_168);
    }
    param_3 = local_160;
    param_1 = local_158;
    local_168 = iVar25;
    if (param_5 <= iVar25) {
      return;
    }
  }
  local_140 = (longlong)local_168;
  if (lVar22 < local_140) {
    return;
  }
  local_108 = (int *)(local_140 * 0x10 + 0xc + local_138);
  local_150 = 0;
  do {
    local_118 = (longlong)*local_108;
    uVar16 = *(uint *)(local_158 + local_118 * 4);
    uVar20 = uVar16 & 3;
    iVar25 = (int)uVar16 >> 2;
    (**(code **)(*local_160 + 0x10))(local_160,&local_f8,iVar25,uVar20);
    (**(code **)(*local_160 + 0x18))(local_160,&local_e8,iVar25,uVar20);
    (**(code **)(*local_160 + 0x20))(local_160,&local_130,iVar25,uVar20);
    fVar15 = local_e0;
    fVar14 = local_e4;
    fVar13 = local_e8;
    fVar12 = local_f0;
    fVar11 = local_f4;
    fVar29 = local_f8;
    fVar27 = local_12c;
    fVar28 = local_130;
    local_164 = 1;
    local_168 = -1;
    local_150 = lVar17;
    if (lVar17 < local_140) {
      local_148 = (int *)(lVar17 * 0x10 + local_138 + 0xc);
      do {
        if (local_164 == 0) goto LAB_14391312a;
        local_168 = *local_148;
        uVar16 = *(uint *)(local_158 + (longlong)local_168 * 4);
        uVar20 = uVar16 & 3;
        iVar25 = (int)uVar16 >> 2;
        (**(code **)(*local_160 + 0x10))(local_160,&local_d8,iVar25,uVar20);
        (**(code **)(*local_160 + 0x18))(local_160,&local_c8,iVar25,uVar20);
        (**(code **)(*local_160 + 0x20))(local_160,&local_128,iVar25,uVar20);
        if (((((fVar29 == local_d8) && (fVar11 == local_d4)) && (fVar12 == local_d0)) &&
            ((fVar13 == local_c8 && (fVar14 == local_c4)))) &&
           ((fVar15 == local_c0 && ((fVar28 == local_128 && (fVar27 == local_124)))))) {
          local_164 = 0;
        }
        else {
          local_150 = local_150 + 1;
          local_148 = local_148 + 4;
        }
      } while (local_150 < local_140);
      if (local_164 == 0) {
LAB_14391312a:
        *(undefined4 *)(local_158 + local_118 * 4) =
             *(undefined4 *)(local_158 + (longlong)local_168 * 4);
      }
    }
    local_140 = local_140 + 1;
    local_108 = local_108 + 4;
    if (local_120 < local_140) {
      return;
    }
  } while( true );
}



// FUNCTION 1439131d0 FUN_1439131d0 body=669 status=ok
// SIG undefined FUN_1439131d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1439131d0(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  ulonglong local_c0;
  
  if (0 < param_4) {
    local_c0 = DAT_1468387a8 ^ (ulonglong)auStack_148;
    lVar16 = 0;
    local_108 = (longlong)param_4;
    local_118 = param_3;
    do {
      local_110 = (longlong)*(int *)(local_118 + lVar16 * 4);
      uVar1 = *(uint *)(param_1 + local_110 * 4);
      uVar11 = uVar1 & 3;
      iVar13 = (int)uVar1 >> 2;
      (**(code **)(*param_2 + 0x10))(param_2,&local_100,iVar13,uVar11);
      (**(code **)(*param_2 + 0x18))(param_2,&local_f0,iVar13,uVar11);
      (**(code **)(*param_2 + 0x20))(param_2,&local_128,iVar13,uVar11);
      fVar10 = local_e8;
      fVar9 = local_ec;
      fVar8 = local_f0;
      fVar7 = local_f8;
      fVar6 = local_fc;
      fVar5 = local_100;
      fVar4 = local_124;
      fVar3 = local_128;
      lVar12 = 0;
      lVar15 = 0xffffffff;
      bVar2 = true;
      if (0 < lVar16) {
        do {
          iVar13 = (int)lVar15;
          if (!bVar2) goto LAB_1439133be;
          iVar13 = *(int *)(local_118 + lVar12 * 4);
          lVar15 = (longlong)iVar13;
          uVar1 = *(uint *)(param_1 + lVar15 * 4);
          uVar11 = uVar1 & 3;
          iVar14 = (int)uVar1 >> 2;
          (**(code **)(*param_2 + 0x10))(param_2,&local_e0,iVar14,uVar11);
          (**(code **)(*param_2 + 0x18))(param_2,&local_d0,iVar14,uVar11);
          (**(code **)(*param_2 + 0x20))(param_2,&local_120,iVar14,uVar11);
          if (((((fVar5 == local_e0) && (fVar6 == local_dc)) && (fVar7 == local_d8)) &&
              ((fVar8 == local_d0 && (fVar9 == local_cc)))) &&
             ((fVar10 == local_c8 && ((fVar3 == local_120 && (fVar4 == local_11c)))))) {
            bVar2 = false;
          }
          else {
            lVar12 = lVar12 + 1;
          }
        } while (lVar12 < lVar16);
        if (!bVar2) {
LAB_1439133be:
          *(undefined4 *)(param_1 + local_110 * 4) = *(undefined4 *)(param_1 + (longlong)iVar13 * 4)
          ;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < local_108);
  }
  return;
}



// FUNCTION 143913470 FUN_143913470 body=236 status=ok
// SIG undefined FUN_143913470(void)

void FUN_143913470(longlong param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar8 = (ulonglong)param_2;
  uVar10 = (ulonglong)(int)param_3;
  uVar9 = uVar8;
  uVar11 = uVar10;
  do {
    bVar4 = (byte)param_4 & 0x1f;
    uVar6 = uVar9 & 0xffffffff;
    uVar7 = uVar11 & 0xffffffff;
    param_4 = param_4 + (param_4 << bVar4 | param_4 >> 0x20 - bVar4) + 3;
    iVar1 = *(int *)(param_1 +
                    ((longlong)(int)(param_4 % (((int)uVar11 - (int)uVar9) + 1U)) + uVar8) * 4);
    do {
      uVar5 = (uint)uVar6;
      iVar2 = *(int *)(param_1 + uVar8 * 4);
      while (iVar2 < iVar1) {
        uVar8 = uVar8 + 1;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar2 = *(int *)(param_1 + uVar8 * 4);
      }
      iVar2 = *(int *)(param_1 + uVar10 * 4);
      while (iVar1 < iVar2) {
        uVar10 = uVar10 - 1;
        uVar7 = (ulonglong)((int)uVar7 - 1);
        iVar2 = *(int *)(param_1 + uVar10 * 4);
      }
      if ((longlong)uVar10 < (longlong)uVar8) break;
      uVar3 = *(undefined4 *)(param_1 + uVar8 * 4);
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = (ulonglong)((int)uVar7 - 1);
      *(undefined4 *)(param_1 + uVar8 * 4) = *(undefined4 *)(param_1 + uVar10 * 4);
      uVar8 = uVar8 + 1;
      *(undefined4 *)(param_1 + uVar10 * 4) = uVar3;
      uVar10 = uVar10 - 1;
    } while ((longlong)uVar8 <= (longlong)uVar10);
    if ((int)uVar9 < (int)uVar7) {
      FUN_143913470(param_1,uVar9 & 0xffffffff,uVar7,param_4);
      uVar11 = (ulonglong)param_3;
    }
    if ((int)uVar11 <= (int)uVar5) {
      return;
    }
    uVar9 = (ulonglong)uVar5;
    uVar10 = (ulonglong)(int)uVar11;
  } while( true );
}



// FUNCTION 143913560 FUN_143913560 body=490 status=ok
// SIG undefined FUN_143913560(void)

void FUN_143913560(longlong param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  
  iVar7 = (param_3 - param_2) + 1;
  if (1 < iVar7) {
    lVar10 = (longlong)param_2;
    while (lVar14 = (longlong)param_3, iVar7 != 2) {
      lVar11 = (longlong)param_4;
      bVar8 = (byte)param_5 & 0x1f;
      param_5 = param_5 + 3 + (param_5 << bVar8 | param_5 >> 0x20 - bVar8);
      iVar7 = *(int *)(param_1 +
                      (((int)(param_5 % ((param_3 - param_2) + 1U)) + lVar10) * 3 + lVar11) * 4);
      iVar12 = param_2;
      iVar13 = param_3;
      do {
        lVar9 = lVar10 * 3 + lVar11;
        piVar1 = (int *)(param_1 + lVar9 * 4);
        iVar5 = *(int *)(param_1 + lVar9 * 4);
        while (iVar5 < iVar7) {
          iVar12 = iVar12 + 1;
          piVar1 = piVar1 + 3;
          lVar10 = lVar10 + 1;
          iVar5 = *piVar1;
        }
        lVar9 = lVar14 * 3 + lVar11;
        piVar1 = (int *)(param_1 + lVar9 * 4);
        iVar5 = *(int *)(param_1 + lVar9 * 4);
        while (iVar7 < iVar5) {
          iVar13 = iVar13 + -1;
          piVar1 = piVar1 + -3;
          lVar14 = lVar14 + -1;
          iVar5 = *piVar1;
        }
        if (lVar14 < lVar10) break;
        iVar12 = iVar12 + 1;
        uVar4 = *(undefined8 *)(param_1 + lVar10 * 0xc);
        puVar2 = (undefined8 *)(param_1 + lVar10 * 0xc);
        uVar6 = *(undefined4 *)(puVar2 + 1);
        puVar3 = (undefined8 *)(param_1 + lVar14 * 0xc);
        *puVar2 = *(undefined8 *)(param_1 + lVar14 * 0xc);
        lVar10 = lVar10 + 1;
        iVar13 = iVar13 + -1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
        lVar14 = lVar14 + -1;
        *puVar3 = uVar4;
        *(undefined4 *)(puVar3 + 1) = uVar6;
      } while (lVar10 <= lVar14);
      if (param_2 < iVar13) {
        FUN_143913560(param_1,param_2,iVar13,param_4,param_5);
      }
      if (param_3 <= iVar12) {
        return;
      }
      iVar7 = (param_3 - iVar12) + 1;
      param_2 = iVar12;
      if (iVar7 < 2) {
        return;
      }
    }
    lVar10 = (longlong)param_2;
    if (*(int *)(param_1 + ((longlong)param_4 + lVar14 * 3) * 4) <
        *(int *)(param_1 + ((longlong)param_4 + lVar10 * 3) * 4)) {
      uVar6 = *(undefined4 *)(param_1 + 8 + lVar10 * 0xc);
      uVar4 = *(undefined8 *)(param_1 + lVar10 * 0xc);
      puVar2 = (undefined8 *)(param_1 + lVar10 * 0xc);
      puVar3 = (undefined8 *)(param_1 + lVar14 * 0xc);
      *puVar2 = *(undefined8 *)(param_1 + lVar14 * 0xc);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
      *puVar3 = uVar4;
      *(undefined4 *)(puVar3 + 1) = uVar6;
    }
  }
  return;
}



// FUNCTION 143913750 FUN_143913750 body=1596 status=ok
// SIG undefined FUN_143913750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143913750(longlong *param_1,float param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *_Memory;
  void *_Memory_00;
  void *_Memory_01;
  void *_Memory_02;
  void *_Dst;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  float fVar12;
  uint *_Memory_03;
  double dVar13;
  undefined4 uVar14;
  undefined1 auStack_118 [32];
  uint *local_f8;
  float local_f0;
  longlong *local_e8;
  int local_e0;
  float local_d8;
  int local_d4;
  int local_d0;
  float local_cc;
  int local_c8;
  uint *local_c0;
  void *local_b8;
  undefined4 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_88;
  float local_84;
  float local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  fVar12 = 0.0;
  iVar4 = (**(code **)*param_1)();
  local_c8 = iVar4;
  dVar13 = _guard_xfg_dispatch_icall_nop((double)((param_2 * 3.1415927) / 180.0));
  plVar2 = (longlong *)*param_1;
  if ((((*plVar2 == 0) || (plVar2[1] == 0)) || (plVar2[2] == 0)) ||
     ((plVar2[3] == 0 || (plVar2[4] == 0)))) {
    return 0;
  }
  iVar8 = 0;
  if (iVar4 < 1) {
    return 0;
  }
  do {
    iVar5 = (**(code **)(*param_1 + 8))(param_1,iVar8);
    if (iVar5 == 3) {
      fVar12 = (float)((int)fVar12 + 1);
    }
    else if (iVar5 == 4) {
      fVar12 = (float)((int)fVar12 + 2);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < iVar4);
  if ((int)fVar12 < 1) {
    return 0;
  }
  lVar10 = (longlong)(int)fVar12;
  local_d8 = fVar12;
  _Memory = malloc(lVar10 * 0xc);
  local_c0 = _Memory;
  _Memory_00 = malloc(lVar10 * 0x58);
  local_b8 = _Memory_00;
  if (_Memory == (uint *)0x0) {
    if (_Memory_00 != (void *)0x0) {
      free(_Memory_00);
    }
    return 0;
  }
  if (_Memory_00 == (void *)0x0) {
    free(_Memory);
    return 0;
  }
  iVar4 = FUN_143910c30(_Memory_00,_Memory,param_1,fVar12);
  local_d0 = iVar4;
  FUN_143911090(_Memory,param_1,fVar12);
  iVar8 = 0;
  _Memory_03 = _Memory;
  local_cc = fVar12;
  if (0 < (int)fVar12) {
    puVar9 = (uint *)((longlong)_Memory_00 + 0x4c);
    puVar11 = _Memory + 2;
    iVar8 = 0;
    do {
      uVar6 = puVar11[-1];
      uVar1 = *puVar11;
      (**(code **)(*param_1 + 0x10))(param_1,&local_98,(int)*_Memory >> 2,*_Memory & 3);
      (**(code **)(*param_1 + 0x10))(param_1,&local_88,(int)uVar6 >> 2,uVar6 & 3);
      (**(code **)(*param_1 + 0x10))(param_1,&local_a8,(int)uVar1 >> 2,uVar1 & 3);
      if (((((local_98 == local_88) && (local_94 == local_84)) && (local_90 == local_80)) ||
          (((local_98 == local_a8 && (local_94 == local_a4)) && (local_90 == local_a0)))) ||
         (((local_88 == local_a8 && (local_84 == local_a4)) && (local_80 == local_a0)))) {
        *puVar9 = *puVar9 | 1;
        iVar8 = iVar8 + 1;
      }
      _Memory = _Memory + 3;
      puVar11 = puVar11 + 3;
      puVar9 = puVar9 + 0x16;
      lVar10 = lVar10 + -1;
      _Memory_00 = local_b8;
      _Memory_03 = local_c0;
      fVar12 = local_d8;
      iVar4 = local_d0;
      local_d4 = iVar8;
    } while (lVar10 != 0);
  }
  iVar8 = (int)fVar12 - iVar8;
  FUN_14390ff80(_Memory_00,_Memory_03,iVar8,fVar12);
  FUN_1439124d0(_Memory_00,_Memory_03,param_1,iVar8);
  _Memory_01 = malloc((longlong)(iVar8 * 3) * 0x18);
  _Memory_02 = malloc((longlong)iVar8 * 0xc);
  if (_Memory_01 == (void *)0x0) {
    _Memory_01 = _Memory_02;
    if (_Memory_02 != (void *)0x0) goto LAB_143913d42;
  }
  else {
    if (_Memory_02 != (void *)0x0) {
      local_f8 = (uint *)CONCAT44(local_f8._4_4_,iVar8);
      local_d0 = FUN_14390f540(_Memory_00,_Memory_01,_Memory_02,_Memory_03);
      lVar10 = (longlong)iVar4;
      local_b8 = (void *)(lVar10 * 0x28);
      _Dst = malloc((size_t)local_b8);
      if (_Dst == (void *)0x0) {
        free(_Memory_03);
        free(_Memory_00);
        free(_Memory_01);
        _Memory_00 = _Memory_02;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,0,(size_t)local_b8);
        if (0 < lVar10) {
          puVar7 = (undefined4 *)((longlong)_Dst + 8);
          do {
            *(undefined8 *)(puVar7 + -2) = 0x3f800000;
            *puVar7 = 0;
            *(undefined8 *)(puVar7 + 1) = 0x3f800000;
            *(undefined8 *)(puVar7 + 3) = 0x3f800000;
            puVar7[5] = 0x3f800000;
            puVar7 = puVar7 + 10;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        local_f8 = _Memory_03;
        local_f0 = (float)dVar13;
        local_e8 = param_1;
        iVar4 = FUN_143911920(_Dst,_Memory_00,_Memory_01,local_d0);
        free(_Memory_01);
        free(_Memory_02);
        if (iVar4 != 0) {
          if ((int)param_1[2] == 0) {
            local_f0 = local_cc;
            local_f8 = (uint *)CONCAT44(local_f8._4_4_,iVar8);
            FUN_14390fcb0(_Dst,_Memory_00,_Memory_03,param_1);
          }
          free(_Memory_00);
          free(_Memory_03);
          iVar4 = local_c8;
          iVar8 = 0;
          lVar10 = 0;
          do {
            uVar6 = (**(code **)(*param_1 + 8))(param_1,iVar8);
            if ((uVar6 - 3 < 2) && (iVar5 = 0, 0 < (int)uVar6)) {
              lVar3 = lVar10 * 5;
              lVar10 = lVar10 + (ulonglong)uVar6;
              puVar7 = (undefined4 *)((longlong)_Dst + (lVar3 + 1) * 8);
              do {
                local_b8 = *(void **)(puVar7 + -2);
                local_b0 = *puVar7;
                local_a8 = (float)puVar7[2];
                local_a4 = (float)puVar7[3];
                local_a0 = (float)puVar7[4];
                if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                  local_f0 = (float)puVar7[7];
                  local_e8 = (longlong *)CONCAT44(local_e8._4_4_,iVar8);
                  local_f8 = (uint *)CONCAT44(local_f8._4_4_,puVar7[5]);
                  local_e0 = iVar5;
                  (**(code **)(*param_1 + 0x30))(param_1,&local_b8,&local_a8,puVar7[1]);
                }
                if (*(code **)(*param_1 + 0x28) != (code *)0x0) {
                  if (puVar7[7] == 1) {
                    uVar14 = 0x3f800000;
                  }
                  else {
                    uVar14 = 0xbf800000;
                  }
                  local_f8 = (uint *)CONCAT44(local_f8._4_4_,iVar5);
                  (**(code **)(*param_1 + 0x28))(param_1,&local_b8,uVar14,iVar8);
                }
                puVar7 = puVar7 + 10;
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)uVar6);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar4);
          free(_Dst);
          return 1;
        }
        free(_Memory_00);
        free(_Memory_03);
        _Memory_00 = _Dst;
      }
      goto LAB_143913ad1;
    }
LAB_143913d42:
    free(_Memory_01);
  }
  free(_Memory_03);
LAB_143913ad1:
  free(_Memory_00);
  return 0;
}



// FUNCTION 143913d90 LockFreeTagCounterHasOverflowed body=13 status=ok
// SIG undefined LockFreeTagCounterHasOverflowed(void)

void LockFreeTagCounterHasOverflowed(undefined8 param_1)

{
  FUN_143913750(param_1,0x43340000);
  return;
}



// FUNCTION 143913da0 FUN_143913da0 body=521 status=ok
// SIG undefined FUN_143913da0(void)

float FUN_143913da0(byte *param_1,float param_2,float param_3,int param_4,longlong param_5,
                   longlong param_6)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = 0;
  iVar3 = 0;
  fVar7 = 0.0;
  if ((0.0 < param_2) && (param_3 <= 0.0)) {
    iVar3 = 1;
    fVar7 = param_2;
  }
  if (((*param_1 & 0x60) == 0) || (param_6 == 0)) {
    if (3 < param_4) {
      pfVar2 = (float *)(param_5 + 8);
      uVar1 = (param_4 - 4U >> 2) + 1;
      uVar6 = (ulonglong)uVar1;
      iVar4 = uVar1 * 4;
      do {
        fVar8 = pfVar2[-2];
        if ((0.0 < fVar8) && (fVar8 <= 1.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        fVar8 = pfVar2[-1];
        if ((0.0 < fVar8) && (fVar8 <= 1.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        fVar8 = *pfVar2;
        if ((0.0 < fVar8) && (fVar8 <= 1.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        fVar8 = pfVar2[1];
        if ((0.0 < fVar8) && (fVar8 <= 1.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        pfVar2 = pfVar2 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (iVar4 < param_4) {
      pfVar2 = (float *)(param_5 + (longlong)iVar4 * 4);
      uVar6 = (ulonglong)(uint)(param_4 - iVar4);
      do {
        fVar8 = *pfVar2;
        if ((0.0 < fVar8) && (fVar8 <= 1.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        pfVar2 = pfVar2 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  else {
    if (3 < param_4) {
      lVar5 = param_5 - param_6;
      uVar1 = (param_4 - 4U >> 2) + 1;
      pfVar2 = (float *)(param_6 + 4);
      uVar6 = (ulonglong)uVar1;
      iVar4 = uVar1 * 4;
      do {
        fVar8 = *(float *)(lVar5 + -4 + (longlong)pfVar2);
        if ((0.0 < fVar8) && (pfVar2[-1] <= 0.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        if ((0.0 < *(float *)(lVar5 + (longlong)pfVar2)) && (*pfVar2 <= 0.0)) {
          fVar7 = fVar7 + *(float *)(lVar5 + (longlong)pfVar2);
          iVar3 = iVar3 + 1;
        }
        fVar8 = *(float *)(lVar5 + 4 + (longlong)pfVar2);
        if ((0.0 < fVar8) && (pfVar2[1] <= 0.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        fVar8 = *(float *)(lVar5 + 8 + (longlong)pfVar2);
        if ((0.0 < fVar8) && (pfVar2[2] <= 0.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        pfVar2 = pfVar2 + 4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (iVar4 < param_4) {
      pfVar2 = (float *)(param_6 + (longlong)iVar4 * 4);
      uVar6 = (ulonglong)(uint)(param_4 - iVar4);
      do {
        fVar8 = *(float *)((param_5 - param_6) + (longlong)pfVar2);
        if ((0.0 < fVar8) && (*pfVar2 <= 0.0)) {
          fVar7 = fVar7 + fVar8;
          iVar3 = iVar3 + 1;
        }
        pfVar2 = pfVar2 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  if (iVar3 != 0) {
    fVar8 = 1.0;
    if (fVar7 / (float)iVar3 <= 1.0) {
      fVar8 = fVar7 / (float)iVar3;
    }
    return fVar8;
  }
  return 0.0;
}



// FUNCTION 143913fb0 FUN_143913fb0 body=31 status=ok
// SIG undefined FUN_143913fb0(void)

int FUN_143913fb0(undefined8 param_1,float param_2,int param_3)

{
  if ((param_2 <= 0.0) && (param_3 < 3)) {
    return 1 << ((byte)param_3 & 0x1f);
  }
  return 8;
}



// FUNCTION 143913fd0 FUN_143913fd0 body=146 status=ok
// SIG undefined FUN_143913fd0(void)

int FUN_143913fd0(undefined8 param_1,float param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar7;
  ulonglong uVar9;
  
  lVar2 = (longlong)param_3;
  if (param_2 <= 0.0) {
    uVar5 = 0;
    uVar3 = 0;
    uVar8 = uVar3;
    uVar6 = uVar3;
    if (1 < lVar2) {
      uVar7 = uVar5;
      uVar9 = uVar5;
      do {
        lVar1 = uVar5 * 4;
        uVar6 = (int)uVar7 + (uint)(0.0 < *(float *)(param_4 + uVar5 * 4));
        uVar7 = (ulonglong)uVar6;
        uVar5 = uVar5 + 2;
        uVar8 = (int)uVar9 + (uint)(0.0 < *(float *)(param_4 + 4 + lVar1));
        uVar9 = (ulonglong)uVar8;
      } while ((longlong)uVar5 < lVar2 + -1);
    }
    if ((longlong)uVar5 < lVar2) {
      uVar3 = (uint)(0.0 < *(float *)(param_4 + uVar5 * 4));
    }
    iVar4 = uVar3 + uVar8 + uVar6;
    if (iVar4 < 3) {
      return 1 << ((byte)iVar4 & 0x1f);
    }
  }
  return 8;
}



// FUNCTION 143914070 FUN_143914070 body=352 status=ok
// SIG undefined FUN_143914070(void)

void FUN_143914070(byte *param_1,float param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (((*param_1 & 0x60) == 0) || (param_3 < 2)) {
    if ((0.0 < param_2) && (10.0 <= param_2)) {
      return;
    }
    return;
  }
  if (param_2 <= 0.0) {
    return;
  }
  if (param_2 < 10.0) {
    iVar3 = 0;
    if (3 < param_3) {
      uVar1 = (param_3 - 4U >> 2) + 1;
      uVar2 = (ulonglong)uVar1;
      iVar3 = uVar1 * 4;
      do {
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (iVar3 < param_3) {
      uVar2 = (ulonglong)(uint)(param_3 - iVar3);
      do {
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
  return;
}



// FUNCTION 1439141d0 FUN_1439141d0 body=935 status=ok
// SIG undefined FUN_1439141d0(void)

void FUN_1439141d0(uint *param_1,int param_2,float *param_3,longlong param_4)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  
  lVar12 = (longlong)param_2;
  if (((*param_1 & 0x60) == 0) || (param_2 < 2)) {
    lVar6 = 0;
    if (3 < lVar12) {
      lVar11 = (longlong)param_3 - param_4;
      lVar7 = (lVar12 - 4U >> 2) + 1;
      pfVar2 = (float *)(param_4 + 4);
      lVar6 = lVar7 * 4;
      do {
        fVar14 = *(float *)((longlong)pfVar2 + lVar11 + -4);
        if (fVar14 <= 0.0) {
LAB_1439144a0:
          fVar14 = 0.0;
        }
        else if (fVar14 < 10.0) {
          if (fVar14 <= 1.0) goto LAB_1439144a0;
          fVar14 = fVar14 - 1.0;
        }
        else {
          fVar14 = 10.0;
        }
        pfVar2[-1] = fVar14;
        fVar14 = *(float *)((longlong)pfVar2 + lVar11);
        if (fVar14 <= 0.0) {
LAB_1439144c7:
          fVar14 = 0.0;
        }
        else if (fVar14 < 10.0) {
          if (fVar14 <= 1.0) goto LAB_1439144c7;
          fVar14 = fVar14 - 1.0;
        }
        else {
          fVar14 = 10.0;
        }
        *pfVar2 = fVar14;
        fVar14 = *(float *)((longlong)pfVar2 + lVar11 + 4);
        if (fVar14 <= 0.0) {
LAB_1439144ee:
          fVar14 = 0.0;
        }
        else if (fVar14 < 10.0) {
          if (fVar14 <= 1.0) goto LAB_1439144ee;
          fVar14 = fVar14 - 1.0;
        }
        else {
          fVar14 = 10.0;
        }
        pfVar2[1] = fVar14;
        fVar14 = *(float *)((longlong)pfVar2 + lVar11 + 8);
        if (fVar14 <= 0.0) {
LAB_143914516:
          fVar14 = 0.0;
        }
        else if (fVar14 < 10.0) {
          if (fVar14 <= 1.0) goto LAB_143914516;
          fVar14 = fVar14 - 1.0;
        }
        else {
          fVar14 = 10.0;
        }
        pfVar2[2] = fVar14;
        pfVar2 = pfVar2 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 < lVar12) {
      pfVar2 = (float *)(param_4 + lVar6 * 4);
      lVar12 = lVar12 - lVar6;
      do {
        fVar14 = *(float *)((longlong)pfVar2 + ((longlong)param_3 - param_4));
        if (fVar14 <= 0.0) {
LAB_14391455b:
          fVar14 = 0.0;
        }
        else if (fVar14 < 10.0) {
          if (fVar14 <= 1.0) goto LAB_14391455b;
          fVar14 = fVar14 - 1.0;
        }
        else {
          fVar14 = 10.0;
        }
        *pfVar2 = fVar14;
        pfVar2 = pfVar2 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else if ((*param_1 & 0x60) == 0x20) {
    uVar9 = 0;
    fVar14 = 0.0;
    iVar8 = 0;
    uVar4 = uVar9;
    if (3 < param_2) {
      pfVar2 = param_3 + 2;
      uVar1 = (param_2 - 4U >> 2) + 1;
      uVar10 = (ulonglong)uVar1;
      iVar8 = uVar1 * 4;
      do {
        fVar13 = pfVar2[-2];
        if ((0.0 < fVar13) && (fVar13 < 10.0)) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
          fVar14 = fVar14 + fVar13;
        }
        fVar13 = pfVar2[-1];
        if ((0.0 < fVar13) && (fVar13 < 10.0)) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
          fVar14 = fVar14 + fVar13;
        }
        fVar13 = *pfVar2;
        if ((0.0 < fVar13) && (fVar13 < 10.0)) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
          fVar14 = fVar14 + fVar13;
        }
        fVar13 = pfVar2[1];
        if ((0.0 < fVar13) && (fVar13 < 10.0)) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
          fVar14 = fVar14 + fVar13;
        }
        pfVar2 = pfVar2 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    iVar3 = (int)uVar4;
    if (iVar8 < param_2) {
      pfVar2 = param_3 + iVar8;
      uVar10 = (ulonglong)(uint)(param_2 - iVar8);
      do {
        fVar13 = *pfVar2;
        if ((0.0 < fVar13) && (fVar13 < 10.0)) {
          uVar4 = (ulonglong)((int)uVar4 + 1);
          fVar14 = fVar14 + fVar13;
        }
        iVar3 = (int)uVar4;
        pfVar2 = pfVar2 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (iVar3 == 0) {
      if (3 < lVar12) {
        lVar6 = (longlong)param_3 - param_4;
        lVar11 = (lVar12 - 4U >> 2) + 1;
        puVar5 = (undefined4 *)(param_4 + 4);
        uVar9 = lVar11 * 4;
        do {
          puVar5[-1] = *(undefined4 *)(lVar6 + -4 + (longlong)puVar5);
          *puVar5 = *(undefined4 *)(lVar6 + (longlong)puVar5);
          puVar5[1] = *(undefined4 *)(lVar6 + 4 + (longlong)puVar5);
          puVar5[2] = *(undefined4 *)(lVar6 + 8 + (longlong)puVar5);
          puVar5 = puVar5 + 4;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if ((longlong)uVar9 < lVar12) {
        puVar5 = (undefined4 *)(param_4 + uVar9 * 4);
        lVar12 = lVar12 - uVar9;
        do {
          *puVar5 = *(undefined4 *)((longlong)puVar5 + ((longlong)param_3 - param_4));
          puVar5 = puVar5 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        return;
      }
    }
    else if (0 < lVar12) {
      param_4 = param_4 - (longlong)param_3;
      do {
        fVar13 = *param_3;
        if (fVar13 <= 0.0) {
LAB_143914411:
          *(undefined4 *)(param_4 + (longlong)param_3) = 0;
        }
        else if (fVar13 < 10.0) {
          if (iVar3 == 1) {
            if (fVar13 <= 0.0) {
LAB_1439143d5:
              *(undefined4 *)(param_4 + (longlong)param_3) = 0;
            }
            else if (fVar13 < 10.0) {
              if (fVar13 <= 1.0) goto LAB_1439143d5;
              *(float *)(param_4 + (longlong)param_3) = fVar13 - 1.0;
            }
            else {
              *(undefined4 *)(param_4 + (longlong)param_3) = 0x41200000;
            }
          }
          else {
            fVar13 = (((fVar14 - fVar13) / (float)(iVar3 + -1)) * 0.25 + fVar13 * 0.75) - 1.0;
            *(float *)(param_4 + (longlong)param_3) = fVar13;
            if (fVar13 <= 0.0) goto LAB_143914411;
          }
        }
        else {
          *(undefined4 *)(param_4 + (longlong)param_3) = 0x41200000;
        }
        param_3 = param_3 + 1;
        lVar12 = lVar12 + -1;
        if (lVar12 == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}



// FUNCTION 143914580 FUN_143914580 body=75 status=ok
// SIG undefined FUN_143914580(void)

void FUN_143914580(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_143915980();
  *(undefined2 *)(lVar1 + 0x18) = 0;
  if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)*param_3;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1439145d0 FUN_1439145d0 body=722 status=ok
// SIG undefined FUN_1439145d0(void)

undefined8 *
FUN_1439145d0(longlong *param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (0x3fffffffffffffd < (ulonglong)param_1[1]) {
    lVar4 = param_6[5];
    if (lVar4 != 0) {
      std::allocator<sTokenChange>::deallocate(param_6 + 5,lVar4,param_6[7] - lVar4 >> 2);
      param_6[5] = 0;
      param_6[6] = 0;
      param_6[7] = 0;
    }
    FMemory::operator_delete(param_6);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  param_6[1] = (longlong)param_4;
  if (param_4 == (undefined8 *)*param_1) {
    ((undefined8 *)*param_1)[1] = param_6;
    *(longlong **)*param_1 = param_6;
    lVar4 = *param_1;
  }
  else {
    if (param_3 != '\0') {
      *param_4 = param_6;
      if (param_4 == *(undefined8 **)*param_1) {
        *(longlong **)*param_1 = param_6;
      }
      goto LAB_14391468b;
    }
    param_4[2] = param_6;
    lVar4 = *param_1;
    if (param_4 != *(undefined8 **)(lVar4 + 0x10)) goto LAB_14391468b;
  }
  *(longlong **)(lVar4 + 0x10) = param_6;
LAB_14391468b:
  cVar1 = *(char *)(param_6[1] + 0x18);
  plVar5 = param_6;
  do {
    if (cVar1 != '\0') {
      lVar4 = *param_1;
      *param_2 = param_6;
      *(undefined1 *)(*(longlong *)(lVar4 + 8) + 0x18) = 1;
      return param_2;
    }
    plVar6 = (longlong *)plVar5[1];
    plVar7 = *(longlong **)plVar6[1];
    if (plVar6 == plVar7) {
      lVar4 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar4 + 0x18) == '\0') {
        *(undefined1 *)(plVar6 + 3) = 1;
        *(undefined1 *)(lVar4 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar5 = *(longlong **)(plVar5[1] + 8);
      }
      else {
        if (plVar5 == (longlong *)plVar6[2]) {
          plVar5 = (longlong *)plVar6[2];
          plVar6[2] = *plVar5;
          if (*(char *)(*plVar5 + 0x19) == '\0') {
            *(longlong **)(*plVar5 + 8) = plVar6;
          }
          plVar5[1] = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar5;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar5;
            }
            else {
              plVar7[2] = (longlong)plVar5;
            }
          }
          *plVar5 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar5;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)*plVar6;
        *plVar6 = plVar7[2];
        if (*(char *)(plVar7[2] + 0x19) == '\0') {
          *(longlong **)(plVar7[2] + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
          plVar7[2] = (longlong)plVar6;
        }
        else {
          plVar2 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar2[2]) {
            plVar2[2] = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
          else {
            *plVar2 = (longlong)plVar7;
            plVar7[2] = (longlong)plVar6;
          }
        }
LAB_14391487e:
        plVar6[1] = (longlong)plVar7;
      }
    }
    else {
      if ((char)plVar7[3] != '\0') {
        if (plVar5 == (longlong *)*plVar6) {
          lVar4 = *plVar6;
          *plVar6 = *(longlong *)(lVar4 + 0x10);
          if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x19) == '\0') {
            *(longlong **)(*(longlong *)(lVar4 + 0x10) + 8) = plVar6;
          }
          *(longlong *)(lVar4 + 8) = plVar6[1];
          if (plVar6 == *(longlong **)(*param_1 + 8)) {
            *(longlong *)(*param_1 + 8) = lVar4;
          }
          else {
            plVar5 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)plVar5[2]) {
              plVar5[2] = lVar4;
            }
            else {
              *plVar5 = lVar4;
            }
          }
          *(longlong **)(lVar4 + 0x10) = plVar6;
          plVar6[1] = lVar4;
          plVar5 = plVar6;
        }
        *(undefined1 *)(plVar5[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar5[1] + 8);
        plVar7 = (longlong *)plVar6[2];
        plVar6[2] = *plVar7;
        if (*(char *)(*plVar7 + 0x19) == '\0') {
          *(longlong **)(*plVar7 + 8) = plVar6;
        }
        plVar7[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar7;
        }
        else {
          puVar3 = (undefined8 *)plVar6[1];
          if (plVar6 == (longlong *)*puVar3) {
            *puVar3 = plVar7;
          }
          else {
            puVar3[2] = plVar7;
          }
        }
        *plVar7 = (longlong)plVar6;
        goto LAB_14391487e;
      }
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(*(longlong *)(plVar5[1] + 8) + 0x18) = 0;
      plVar5 = *(longlong **)(plVar5[1] + 8);
    }
    cVar1 = *(char *)(plVar5[1] + 0x18);
  } while( true );
}



// FUNCTION 1439148b0 FUN_1439148b0 body=612 status=ok
// SIG undefined FUN_1439148b0(void)

undefined8 *
FUN_1439148b0(longlong *param_1,undefined8 *param_2,longlong *param_3,int *param_4,
             undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 local_20 [24];
  
  if (param_1[1] == 0) {
    FUN_1439145d0(param_1,param_2,1,*param_1,param_4,param_5,0xfffffffffffffffe);
  }
  else {
    plVar4 = (longlong *)*param_1;
    if (param_3 == (longlong *)*plVar4) {
      if (*param_4 < (int)param_3[4]) {
        FUN_1439145d0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    else if (param_3 == plVar4) {
      if (*(int *)(plVar4[2] + 0x20) < *param_4) {
        FUN_1439145d0(param_1,param_2,0,plVar4[2],param_4,param_5,0xfffffffffffffffe);
        return param_2;
      }
    }
    else {
      iVar2 = *param_4;
      iVar3 = (int)param_3[4];
      iVar5 = iVar3 - iVar2;
      if (iVar2 < iVar3) {
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar9 = (longlong *)*param_3;
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar1 = *(char *)(plVar9[2] + 0x19);
            plVar6 = (longlong *)plVar9[2];
            while (cVar1 == '\0') {
              cVar1 = *(char *)(plVar6[2] + 0x19);
              plVar9 = plVar6;
              plVar6 = (longlong *)plVar6[2];
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar6 = (longlong *)param_3[1];
            plVar9 = param_3;
            while ((plVar7 = plVar6, cVar1 == '\0' && (plVar9 == (longlong *)*plVar7))) {
              cVar1 = *(char *)(plVar7[1] + 0x19);
              plVar6 = (longlong *)plVar7[1];
              plVar9 = plVar7;
            }
            if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
              plVar9 = plVar7;
            }
          }
        }
        else {
          plVar9 = (longlong *)param_3[2];
        }
        if ((int)plVar9[4] < iVar2) {
          if (*(char *)(plVar9[2] + 0x19) != '\0') {
            FUN_1439145d0(param_1,param_2,0,plVar9,param_4,param_5,0xfffffffffffffffe);
            return param_2;
          }
          FUN_1439145d0(param_1,param_2,1,param_3,param_4,param_5,0xfffffffffffffffe);
          return param_2;
        }
        iVar3 = (int)param_3[4];
        iVar5 = iVar3 - iVar2;
      }
      if (SBORROW4(iVar3,iVar2) != iVar5 < 0) {
        plVar9 = param_3;
        if (*(char *)((longlong)param_3 + 0x19) == '\0') {
          plVar9 = (longlong *)param_3[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar9 + 0x19);
            plVar6 = (longlong *)*plVar9;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar6 + 0x19);
              plVar9 = plVar6;
              plVar6 = (longlong *)*plVar6;
            }
          }
          else {
            cVar1 = *(char *)(param_3[1] + 0x19);
            plVar7 = (longlong *)param_3[1];
            plVar6 = param_3;
            while ((plVar9 = plVar7, cVar1 == '\0' && (plVar6 == (longlong *)plVar9[2]))) {
              cVar1 = *(char *)(plVar9[1] + 0x19);
              plVar7 = (longlong *)plVar9[1];
              plVar6 = plVar9;
            }
          }
        }
        if ((plVar9 == plVar4) || (iVar2 < (int)plVar9[4])) {
          if (*(char *)(param_3[2] + 0x19) != '\0') {
            FUN_1439145d0(param_1,param_2,0,param_3,param_4,param_5,0xfffffffffffffffe);
            return param_2;
          }
          FUN_1439145d0(param_1,param_2,1,plVar9,param_4,param_5,0xfffffffffffffffe);
          return param_2;
        }
      }
    }
    puVar8 = (undefined8 *)FUN_143914b20(param_1,local_20,0,param_4,param_5);
    *param_2 = *puVar8;
  }
  return param_2;
}



// FUNCTION 143914b20 FUN_143914b20 body=401 status=ok
// SIG undefined FUN_143914b20(void)

undefined8 *
FUN_143914b20(longlong *param_1,undefined8 *param_2,undefined8 param_3,int *param_4,longlong param_5
             )

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_10 [8];
  
  puVar6 = (undefined8 *)*param_1;
  uVar7 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  puVar8 = puVar6;
  if (*(char *)((longlong)puVar6[1] + 0x19) == '\0') {
    puVar5 = (undefined8 *)puVar6[1];
    do {
      puVar8 = puVar5;
      if ((char)param_3 == '\0') {
        bVar3 = *param_4 < *(int *)(puVar8 + 4);
      }
      else {
        bVar3 = *param_4 <= *(int *)(puVar8 + 4);
      }
      uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),bVar3);
      if (bVar3 == false) {
        puVar5 = (undefined8 *)puVar8[2];
      }
      else {
        puVar5 = (undefined8 *)*puVar8;
      }
    } while (*(char *)((longlong)puVar5 + 0x19) == '\0');
  }
  puVar5 = puVar8;
  if ((char)uVar7 != '\0') {
    if (puVar8 == (undefined8 *)*puVar6) {
      puVar6 = (undefined8 *)
               FUN_1439145d0(param_1,local_10,CONCAT71((int7)((ulonglong)uVar7 >> 8),1),puVar8,
                             param_4,param_5,0xfffffffffffffffe);
      *param_2 = *puVar6;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(char *)((longlong)puVar8 + 0x19) == '\0') {
      puVar5 = (undefined8 *)*puVar8;
      if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
        cVar1 = *(char *)((longlong)puVar5[2] + 0x19);
        puVar6 = (undefined8 *)puVar5[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)((longlong)puVar6[2] + 0x19);
          puVar5 = puVar6;
          puVar6 = (undefined8 *)puVar6[2];
        }
      }
      else {
        cVar1 = *(char *)((longlong)puVar8[1] + 0x19);
        puVar6 = (undefined8 *)puVar8[1];
        puVar5 = puVar8;
        while ((puVar4 = puVar6, cVar1 == '\0' && (puVar5 == (undefined8 *)*puVar4))) {
          cVar1 = *(char *)((longlong)puVar4[1] + 0x19);
          puVar6 = (undefined8 *)puVar4[1];
          puVar5 = puVar4;
        }
        if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
          puVar5 = puVar4;
        }
      }
    }
    else {
      puVar5 = (undefined8 *)puVar8[2];
    }
  }
  if (*(int *)(puVar5 + 4) < *param_4) {
    puVar6 = (undefined8 *)
             FUN_1439145d0(param_1,local_10,uVar7,puVar8,param_4,param_5,0xfffffffffffffffe);
    *param_2 = *puVar6;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    lVar2 = *(longlong *)(param_5 + 0x28);
    if (lVar2 != 0) {
      std::allocator<sTokenChange>::deallocate
                (param_5 + 0x28,lVar2,*(longlong *)(param_5 + 0x38) - lVar2 >> 2);
      *(undefined8 *)(param_5 + 0x28) = 0;
      *(undefined8 *)(param_5 + 0x30) = 0;
      *(undefined8 *)(param_5 + 0x38) = 0;
    }
    FMemory::operator_delete(param_5);
    *param_2 = puVar5;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}



// FUNCTION 143914cc0 FUN_143914cc0 body=18 status=ok
// SIG undefined FUN_143914cc0(void)

void FUN_143914cc0(void)

{
  return;
}



// FUNCTION 143914ce0 FUN_143914ce0 body=82 status=ok
// SIG undefined FUN_143914ce0(void)

undefined2 * FUN_143914ce0(ulonglong param_1,ulonglong param_2,undefined2 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar3 = (param_2 - param_1) + 1 >> 1;
  if (param_2 < param_1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    lVar1 = param_1 - (longlong)param_3;
    do {
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = *(undefined2 *)(lVar1 + (longlong)param_3);
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return param_3;
}



// FUNCTION 143914d40 FUN_143914d40 body=190 status=ok
// SIG undefined FUN_143914d40(void)

int * FUN_143914d40(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = param_4;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = param_3;
  piVar1 = param_1 + 6;
  piVar1[0] = 0;
  piVar1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar3 = FUN_143915920(piVar1);
  *(undefined8 *)piVar1 = uVar3;
  iVar2 = (int)((*(longlong **)(param_1 + 2))[1] - **(longlong **)(param_1 + 2) >> 2) / 2;
  *param_1 = iVar2;
  uVar6 = uVar4;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(uVar4 + **(longlong **)(param_1 + 2)) = 0;
      *(int *)(uVar4 + 4 + **(longlong **)(param_1 + 2)) = param_1[1] * (int)uVar6;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < *param_1);
  }
  FUN_143918510(*(undefined8 *)(param_1 + 4),(longlong)(param_1[1] * *param_1));
  return param_1;
}



// FUNCTION 143914e00 FUN_143914e00 body=377 status=ok
// SIG undefined FUN_143914e00(void)

undefined8 * FUN_143914e00(undefined8 *param_1)

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
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  return param_1;
}



// FUNCTION 143914f80 ~StackBuffer<float,32> body=41 status=ok
// SIG undefined ~StackBuffer<float,32>(void)

void OpenSubdiv::v3_2_0::Vtr::internal::StackBuffer<float,32>::~StackBuffer<float,32>
               (longlong *param_1)

{
  FMemory::operator_delete(param_1[0x12]);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x20;
  *param_1 = (longlong)(param_1 + 2);
  return;
}



// FUNCTION 143914fb0 FUN_143914fb0 body=53 status=ok
// SIG undefined FUN_143914fb0(void)

void FUN_143914fb0(undefined8 *param_1)

{
  undefined1 local_res8 [32];
  
  FUN_143917400(param_1,local_res8,*(undefined8 *)*param_1,(undefined8 *)*param_1,0xfffffffffffffffe
               );
  FMemory::operator_delete(*param_1);
  return;
}



// FUNCTION 143914ff0 ~_Vb_val<std::allocator<bool>_> body=52 status=ok
// SIG undefined ~_Vb_val<std::allocator<bool>_>(void)

void std::_Vb_val<std::allocator<bool>_>::~_Vb_val<std::allocator<bool>_>(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    allocator<sTokenChange>::deallocate(param_1,lVar1,param_1[2] - lVar1 >> 2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 143915030 FUN_143915030 body=57 status=ok
// SIG undefined FUN_143915030(void)

void FUN_143915030(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  FUN_143917400(puVar1,local_res8,*(undefined8 *)*puVar1,(undefined8 *)*puVar1,0xfffffffffffffffe);
  FMemory::operator_delete(*puVar1);
  return;
}



// FUNCTION 143915070 FUN_143915070 body=2153 status=ok
// SIG undefined FUN_143915070(void)

void FUN_143915070(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  uVar6 = uVar3;
  if (0 < (int)(*(longlong *)(param_1 + 0x1d0) - *(longlong *)(param_1 + 0x1c8) >> 3)) {
    do {
      lVar2 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x1c8));
      if (lVar2 != 0) {
        FUN_14391b330(lVar2);
        FMemory::operator_delete(lVar2,0xd8);
      }
      uVar5 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar5;
      uVar6 = uVar6 + 8;
    } while ((int)uVar5 <
             (int)(*(longlong *)(param_1 + 0x1d0) - *(longlong *)(param_1 + 0x1c8) >> 3));
  }
  uVar6 = *(ulonglong *)(param_1 + 0x1c8);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x1d8) - uVar6) >> 3;
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 8) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x1b0);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x1c0) - uVar6) >> 1;
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 2) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x198);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x1a8) - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x180);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 400) - uVar6) >> 1;
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 2) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x168);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x178) - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x150);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x160) - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x138);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x148) - uVar6) >> 1;
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 2) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x120);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x130) - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x108);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0x118) - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0xf0);
  if (uVar6 != 0) {
    uVar3 = uVar6;
    if (0xfff < *(longlong *)(param_1 + 0x100) - uVar6) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar3 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar3 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar3) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar3);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0xd8);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0xe8) - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0xc0);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0xd0) - uVar6) >> 1;
    if (0x7fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 2) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  uVar6 = *(ulonglong *)(param_1 + 0xa8);
  if (uVar6 != 0) {
    uVar3 = (longlong)(*(longlong *)(param_1 + 0xb8) - uVar6) >> 2;
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar4 = uVar6;
    if (0xfff < uVar3 * 4) {
      if ((uVar6 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar4 = *(ulonglong *)(uVar6 - 8);
      if (uVar6 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (uVar6 - uVar4 < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < uVar6 - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(uVar4);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (plVar1,lVar2,*(longlong *)(param_1 + 0xa0) - lVar2 >> 2);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (param_1 + 0x78,lVar2,*(longlong *)(param_1 + 0x88) - lVar2 >> 2);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  std::vector<unsigned_char,std::allocator<unsigned_char>_>::_Tidy(param_1 + 0x60);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (param_1 + 0x48,lVar2,*(longlong *)(param_1 + 0x58) - lVar2 >> 2);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (param_1 + 0x30,lVar2,*(longlong *)(param_1 + 0x40) - lVar2 >> 2);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (lVar2 != 0) {
    std::allocator<sTokenChange>::deallocate
              (param_1 + 0x18,lVar2,*(longlong *)(param_1 + 0x28) - lVar2 >> 2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 143915920 FUN_143915920 body=82 status=ok
// SIG undefined FUN_143915920(void)

void FUN_143915920(void)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x40);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *(longlong *)lVar1 = lVar1;
  if ((longlong *)(lVar1 + 8) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 8) = lVar1;
  }
  if ((longlong *)(lVar1 + 0x10) != (longlong *)0x0) {
    *(longlong *)(lVar1 + 0x10) = lVar1;
  }
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  return;
}



// FUNCTION 143915980 FUN_143915980 body=92 status=ok
// SIG undefined FUN_143915980(void)

undefined8 * FUN_143915980(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined8 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined8 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}



// FUNCTION 1439159e0 FUN_1439159e0 body=74 status=ok
// SIG undefined FUN_1439159e0(void)

void FUN_1439159e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (lVar1 != 0) {
    std::allocator<sTokenChange>::deallocate
              (param_2 + 0x28,lVar1,*(longlong *)(param_2 + 0x38) - lVar1 >> 2);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  FMemory::operator_delete(param_2);
  return;
}



// FUNCTION 143915a30 FUN_143915a30 body=239 status=ok
// SIG undefined FUN_143915a30(void)

void FUN_143915a30(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar1 = *(char *)((longlong)param_2 + 0x19);
  do {
    if (cVar1 != '\0') {
      return;
    }
    FUN_143915a30(param_1,param_2[2]);
    uVar2 = param_2[5];
    plVar3 = (longlong *)*param_2;
    if (uVar2 != 0) {
      uVar4 = (longlong)(param_2[7] - uVar2) >> 2;
      if (0x3fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      uVar5 = uVar2;
      if (0xfff < uVar4 * 4) {
        if ((uVar2 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        uVar5 = *(ulonglong *)(uVar2 - 8);
        if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (uVar2 - uVar5 < 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        if (0x27 < uVar2 - uVar5) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(uVar5);
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
    }
    FMemory::operator_delete(param_2);
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
    param_2 = plVar3;
  } while( true );
}



// FUNCTION 143915b30 FUN_143915b30 body=140 status=ok
// SIG undefined FUN_143915b30(void)

void FUN_143915b30(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  _Dst = (void *)FUN_1439160b0();
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if (lVar1 != 0) {
    std::allocator<wchar_t>::deallocate(param_1,lVar1,param_1[2] - lVar1 >> 1,param_4,uVar3);
  }
  param_1[2] = (longlong)((longlong)_Dst + param_2 * 2);
  param_1[1] = (longlong)((longlong)_Dst + (lVar2 - lVar1 >> 1) * 2);
  *param_1 = (longlong)_Dst;
  return;
}


