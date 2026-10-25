// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14380c310 FUN_14380c310 body=136 status=ok
// SIG undefined FUN_14380c310(void)

void FUN_14380c310(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  lVar9 = 2;
  *param_3 = *param_1 * param_2;
  bVar12 = false;
  uVar7 = SUB168(auVar3 * auVar5,8);
  plVar11 = param_3;
  do {
    plVar11 = plVar11 + 1;
    param_1 = param_1 + 1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_2;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *param_1;
    uVar8 = SUB168(auVar4 * auVar6,8);
    uVar10 = *param_1 * param_2;
    uVar1 = (ulonglong)bVar12;
    uVar2 = uVar10 + uVar7;
    bVar12 = CARRY8(uVar10,uVar7) || CARRY8(uVar2,uVar1);
    *plVar11 = uVar2 + uVar1;
    lVar9 = lVar9 + -1;
    uVar7 = uVar8;
  } while (lVar9 != 0);
  param_3[3] = bVar12 + uVar8;
  return;
}



// FUNCTION 14380c3a0 FUN_14380c3a0 body=128 status=ok
// SIG undefined FUN_14380c3a0(void)

void FUN_14380c3a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  FUN_14380ab80(param_3,param_1,*param_2);
  FUN_14380a920(param_3 + 1,param_1,param_2[1]);
  FUN_14380a6e0(param_3 + 2,param_1,param_2[2]);
  return;
}



// FUNCTION 14380c420 FUN_14380c420 body=1337 status=ok
// SIG undefined FUN_14380c420(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14380c420(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  bool bVar38;
  undefined8 local_res8;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_res20 [8];
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  ulonglong local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  int iStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  longlong local_2b0;
  ulonglong uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  int iStack_28c;
  longlong local_288 [4];
  longlong local_268;
  ulonglong auStack_260 [3];
  undefined4 local_248;
  int iStack_244;
  longlong local_238 [2];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  ulonglong auStack_180 [5];
  ulonglong local_158 [5];
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_98;
  longlong lStack_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  
  local_res10 = *(longlong *)(param_2 + 4);
  local_res8 = *(undefined8 *)(param_3 + 4);
  local_res18 = *(undefined4 *)(param_4 + 4);
  local_res1c = *(undefined4 *)(param_4 + 8);
  puVar20 = (undefined4 *)FUN_143805b00(local_res20,&local_res8,&local_res10);
  iVar31 = -puVar20[1];
  local_res8 = CONCAT44(*puVar20,iVar31);
  puVar21 = (ulonglong *)FUN_143808d40(local_res20,&local_res8,&local_res10);
  uVar30 = *puVar21;
  plVar22 = (longlong *)FUN_143808d40(&local_res10,&local_res8,&local_res18);
  if (*plVar22 < (longlong)uVar30) {
    plVar22 = (longlong *)FUN_143808950(&local_res10,&local_res8);
    uVar30 = -uVar30;
    local_res8 = *plVar22;
    iVar31 = (int)local_res8;
  }
  lVar25 = 0x24;
  if (local_res8 < 0) {
    lVar25 = 0x20;
  }
  uVar32 = (ulonglong)local_res8 >> 0x20;
  local_res8 = *(longlong *)(param_1 + 0x10);
  uVar32 = (longlong)*(int *)(lVar25 + param_1) * (longlong)(int)uVar32;
  local_res10 = *(longlong *)(param_1 + 0x18);
  if (local_res8 != local_res10) {
    uVar36 = (ulonglong)iVar31;
    do {
      uVar13 = *(undefined4 *)(local_res8 + 0x50);
      uVar14 = *(undefined4 *)(local_res8 + 0x54);
      uVar18 = *(undefined8 *)(local_res8 + 0x50);
      uVar15 = *(undefined4 *)(local_res8 + 0x58);
      iVar24 = *(int *)(local_res8 + 0x5c);
      puVar21 = local_158;
      lVar25 = 3;
      uVar23 = *(ulonglong *)(local_res8 + 0x20);
      uVar16 = *(ulonglong *)(local_res8 + 0x40);
      uVar17 = *(undefined8 *)(local_res8 + 0x48);
      local_98 = *(undefined8 *)(local_res8 + 0x30);
      lStack_90 = *(longlong *)(local_res8 + 0x38);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar36;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar23;
      local_2f0 = uVar16;
      uStack_2e8 = uVar17;
      local_2e0 = uVar13;
      uStack_2dc = uVar14;
      uStack_2d8 = uVar15;
      iStack_2d4 = iVar24;
      local_78 = uVar13;
      uStack_74 = uVar14;
      uStack_70 = uVar15;
      iStack_6c = iVar24;
      bVar38 = false;
      local_158[0] = uVar23;
      local_158[1] = *(undefined8 *)(local_res8 + 0x28);
      local_158[2] = *(undefined8 *)(local_res8 + 0x30);
      local_158[3] = *(longlong *)(local_res8 + 0x38);
      local_158[4] = uVar16;
      uStack_130 = uVar17;
      local_128 = uVar13;
      uStack_124 = uVar14;
      uStack_120 = uVar15;
      iStack_11c = iVar24;
      uVar35 = SUB168(auVar1 * auVar7,8);
      plVar22 = &uStack_310;
      do {
        puVar21 = puVar21 + 1;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar36;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *puVar21;
        uVar27 = SUB168(auVar2 * auVar8,8);
        uVar33 = *puVar21 * uVar36;
        uVar34 = (ulonglong)bVar38;
        uVar28 = uVar33 + uVar35;
        bVar38 = CARRY8(uVar33,uVar35) || CARRY8(uVar28,uVar34);
        *plVar22 = uVar28 + uVar34;
        lVar25 = lVar25 + -1;
        uVar35 = uVar27;
        plVar22 = plVar22 + 1;
      } while (lVar25 != 0);
      local_2f8 = bVar38 + uVar27;
      if (lStack_90 < 0) {
        local_2f8 = local_2f8 - uVar36;
      }
      if (iVar31 < 0) {
        uVar35 = lStack_90 >> 0x3f;
        plVar22 = &uStack_310;
        bVar38 = false;
        iVar26 = 1;
        lVar25 = 0;
        do {
          uVar34 = uVar35;
          if (iVar26 + -1 < 4) {
            uVar34 = *(ulonglong *)((longlong)local_158 + lVar25);
          }
          uVar28 = (ulonglong)bVar38;
          uVar27 = *(ulonglong *)((longlong)&uStack_310 + lVar25) - uVar34;
          bVar38 = *(ulonglong *)((longlong)&uStack_310 + lVar25) < uVar34 || uVar27 < uVar28;
          *plVar22 = uVar27 - uVar28;
          iVar26 = iVar26 + 1;
          plVar22 = plVar22 + 1;
          lVar25 = lVar25 + 8;
        } while (iVar26 < 5);
      }
      puVar21 = auStack_260;
      lVar25 = 3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar32;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar16;
      local_2b0 = local_2f8;
      local_248 = uVar15;
      iStack_244 = iVar24;
      uStack_2a8 = uVar16;
      uStack_2a0 = uVar17;
      uStack_298 = uVar13;
      uStack_294 = uVar14;
      uStack_290 = uVar15;
      iStack_28c = iVar24;
      local_288[0] = uVar23 * uVar36;
      bVar38 = false;
      local_268 = local_2f8;
      auStack_260[0] = uVar16;
      auStack_260[1] = uVar17;
      auStack_260[2] = uVar18;
      uVar23 = SUB168(auVar3 * auVar9,8);
      plVar22 = &uStack_310;
      do {
        puVar21 = puVar21 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar32;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = *puVar21;
        uVar28 = SUB168(auVar4 * auVar10,8);
        uVar27 = *puVar21 * uVar32;
        uVar35 = (ulonglong)bVar38;
        uVar34 = uVar27 + uVar23;
        bVar38 = CARRY8(uVar27,uVar23) || CARRY8(uVar34,uVar35);
        *plVar22 = uVar34 + uVar35;
        lVar25 = lVar25 + -1;
        uVar23 = uVar28;
        plVar22 = plVar22 + 1;
      } while (lVar25 != 0);
      local_2f8 = bVar38 + uVar28;
      lVar25 = (longlong)iStack_6c;
      if ((longlong)uVar32 < 0) {
        plVar22 = &uStack_310;
        bVar38 = false;
        lVar29 = 0;
        iVar24 = 1;
        do {
          uVar23 = lVar25 >> 0x1f;
          if (iVar24 + -1 < 4) {
            uVar23 = *(ulonglong *)((longlong)auStack_260 + lVar29);
          }
          uVar35 = (ulonglong)bVar38;
          uVar34 = *(ulonglong *)((longlong)&uStack_310 + lVar29) - uVar23;
          bVar38 = *(ulonglong *)((longlong)&uStack_310 + lVar29) < uVar23 || uVar34 < uVar35;
          *plVar22 = uVar34 - uVar35;
          iVar24 = iVar24 + 1;
          plVar22 = plVar22 + 1;
          lVar29 = lVar29 + 8;
        } while (iVar24 < 5);
      }
      local_218 = local_2f8;
      local_228 = local_308;
      uStack_224 = uStack_304;
      uStack_220 = uStack_300;
      uStack_21c = uStack_2fc;
      local_238[0] = uVar16 * uVar32;
      FUN_143808cc0(local_288,local_238,&local_2d0);
      lVar29 = local_2b0;
      uVar18 = uStack_2b8;
      uVar17 = local_2c0;
      uVar19 = uStack_2c4;
      uVar15 = uStack_2c8;
      uVar14 = uStack_2cc;
      uVar13 = local_2d0;
      puVar21 = auStack_180;
      lVar37 = 3;
      uStack_f0 = local_2f0;
      uStack_e8 = uStack_2e8;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar30;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar16;
      local_e0 = CONCAT44(uStack_2dc,local_2e0);
      uStack_d8 = CONCAT44(iStack_2d4,uStack_2d8);
      local_f8 = local_2b0;
      bVar38 = false;
      local_1a8 = local_2d0;
      uStack_1a4 = uStack_2cc;
      uStack_1a0 = uStack_2c8;
      uStack_19c = uStack_2c4;
      local_198 = local_2c0;
      uStack_190 = uStack_2b8;
      local_188 = local_2b0;
      auStack_180[0] = local_2f0;
      auStack_180[1] = uStack_2e8;
      auStack_180[2] = CONCAT44(uStack_2dc,local_2e0);
      auStack_180[3] = CONCAT44(iStack_2d4,uStack_2d8);
      uVar23 = SUB168(auVar5 * auVar11,8);
      plVar22 = &uStack_310;
      do {
        puVar21 = puVar21 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar30;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = *puVar21;
        uVar28 = SUB168(auVar6 * auVar12,8);
        uVar27 = *puVar21 * uVar30;
        uVar35 = (ulonglong)bVar38;
        uVar34 = uVar27 + uVar23;
        bVar38 = CARRY8(uVar27,uVar23) || CARRY8(uVar34,uVar35);
        *plVar22 = uVar34 + uVar35;
        lVar37 = lVar37 + -1;
        uVar23 = uVar28;
        plVar22 = plVar22 + 1;
      } while (lVar37 != 0);
      local_2f8 = bVar38 + uVar28;
      if ((longlong)uVar30 < 0) {
        plVar22 = &uStack_310;
        bVar38 = false;
        iVar24 = 1;
        lVar37 = 0;
        do {
          uVar23 = lVar25 >> 0x1f;
          if (iVar24 + -1 < 4) {
            uVar23 = *(ulonglong *)((longlong)auStack_180 + lVar37);
          }
          uVar35 = (ulonglong)bVar38;
          uVar34 = *(ulonglong *)((longlong)&uStack_310 + lVar37) - uVar23;
          bVar38 = *(ulonglong *)((longlong)&uStack_310 + lVar37) < uVar23 || uVar34 < uVar35;
          *plVar22 = uVar34 - uVar35;
          iVar24 = iVar24 + 1;
          plVar22 = plVar22 + 1;
          lVar37 = lVar37 + 8;
        } while (iVar24 < 5);
      }
      uStack_200 = (undefined4)uStack_310;
      uStack_1fc = uStack_310._4_4_;
      local_1f8 = local_308;
      uStack_1f4 = uStack_304;
      uStack_1f0 = uStack_300;
      uStack_1ec = uStack_2fc;
      local_1e8 = local_2f8;
      local_1d8 = uVar13;
      uStack_1d4 = uVar14;
      uStack_1d0 = uVar15;
      uStack_1cc = uVar19;
      local_1c8 = uVar17;
      uStack_1c0 = uVar18;
      local_1b8 = lVar29;
      local_208 = uVar16 * uVar30;
      uVar23 = FUN_14380af70(&local_1d8,&local_208);
      if ((char)uVar23 == '\0') {
        return uVar23 & 0xffffffffffffff00;
      }
      local_res8 = local_res8 + 0x68;
    } while (local_res8 != local_res10);
  }
  return CONCAT71((int7)((ulonglong)local_res8 >> 8),1);
}



// FUNCTION 14380c960 FUN_14380c960 body=1337 status=ok
// SIG undefined FUN_14380c960(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_14380c960(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4
                       )

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  ulonglong *puVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  bool bVar40;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 local_res20 [8];
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  ulonglong local_2f0;
  ulonglong uStack_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  int iStack_2d4;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  longlong local_2b0;
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  int iStack_28c;
  longlong local_288 [4];
  longlong local_268;
  ulonglong auStack_260 [3];
  undefined4 local_248;
  int iStack_244;
  longlong local_238 [2];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_188;
  ulonglong auStack_180 [5];
  ulonglong local_158 [5];
  ulonglong uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_11c;
  longlong local_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  
  local_res10 = (ulonglong *)CONCAT44(param_2[2],*param_2);
  local_res8 = (ulonglong *)CONCAT44(param_3[2],*param_3);
  local_res18 = *param_4;
  local_res1c = param_4[2];
  puVar22 = (undefined4 *)FUN_143805b00(local_res20,&local_res8,&local_res10);
  iVar33 = -puVar22[1];
  local_res8 = (ulonglong *)CONCAT44(*puVar22,iVar33);
  puVar23 = (ulonglong *)FUN_143808d40(local_res20,&local_res8,&local_res10);
  uVar32 = *puVar23;
  plVar24 = (longlong *)FUN_143808d40(&local_res10,&local_res8,&local_res18);
  if (*plVar24 < (longlong)uVar32) {
    plVar24 = (longlong *)FUN_143808950(&local_res10,&local_res8);
    uVar32 = -uVar32;
    local_res8 = (ulonglong *)*plVar24;
    iVar33 = (int)local_res8;
  }
  lVar27 = 0x24;
  if ((longlong)local_res8 < 0) {
    lVar27 = 0x20;
  }
  uVar34 = (ulonglong)local_res8 >> 0x20;
  local_res8 = *(ulonglong **)(param_1 + 0x10);
  uVar34 = (longlong)*(int *)(lVar27 + param_1) * (longlong)(int)uVar34;
  local_res10 = *(ulonglong **)(param_1 + 0x18);
  if (local_res8 != local_res10) {
    uVar38 = (ulonglong)iVar33;
    do {
      uVar16 = (undefined4)local_res8[10];
      uVar17 = *(undefined4 *)((longlong)local_res8 + 0x54);
      uVar3 = local_res8[10];
      uVar18 = (undefined4)local_res8[0xb];
      iVar26 = *(int *)((longlong)local_res8 + 0x5c);
      puVar23 = local_158;
      lVar27 = 3;
      uVar1 = *local_res8;
      uVar25 = local_res8[8];
      uVar31 = local_res8[9];
      local_b8 = local_res8[2];
      uStack_b0 = local_res8[3];
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar38;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar1;
      local_2f0 = uVar25;
      uStack_2e8 = uVar31;
      local_2e0 = uVar16;
      uStack_2dc = uVar17;
      uStack_2d8 = uVar18;
      iStack_2d4 = iVar26;
      local_78 = uVar16;
      uStack_74 = uVar17;
      uStack_70 = uVar18;
      iStack_6c = iVar26;
      bVar40 = false;
      local_158[0] = uVar1;
      local_158[1] = local_res8[1];
      local_158[2] = local_res8[2];
      local_158[3] = local_res8[3];
      local_158[4] = uVar25;
      uStack_130 = uVar31;
      local_128 = uVar16;
      uStack_124 = uVar17;
      uStack_120 = uVar18;
      iStack_11c = iVar26;
      uVar37 = SUB168(auVar4 * auVar10,8);
      plVar24 = &uStack_310;
      do {
        puVar23 = puVar23 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar38;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = *puVar23;
        uVar29 = SUB168(auVar5 * auVar11,8);
        uVar35 = *puVar23 * uVar38;
        uVar36 = (ulonglong)bVar40;
        uVar2 = uVar35 + uVar37;
        bVar40 = CARRY8(uVar35,uVar37) || CARRY8(uVar2,uVar36);
        *plVar24 = uVar2 + uVar36;
        lVar27 = lVar27 + -1;
        uVar37 = uVar29;
        plVar24 = plVar24 + 1;
      } while (lVar27 != 0);
      local_2f8 = bVar40 + uVar29;
      if ((longlong)uStack_b0 < 0) {
        local_2f8 = local_2f8 - uVar38;
      }
      if (iVar33 < 0) {
        uVar37 = (longlong)uStack_b0 >> 0x3f;
        plVar24 = &uStack_310;
        bVar40 = false;
        iVar28 = 1;
        lVar27 = 0;
        do {
          uVar36 = uVar37;
          if (iVar28 + -1 < 4) {
            uVar36 = *(ulonglong *)((longlong)local_158 + lVar27);
          }
          uVar2 = (ulonglong)bVar40;
          uVar29 = *(ulonglong *)((longlong)&uStack_310 + lVar27) - uVar36;
          bVar40 = *(ulonglong *)((longlong)&uStack_310 + lVar27) < uVar36 || uVar29 < uVar2;
          *plVar24 = uVar29 - uVar2;
          iVar28 = iVar28 + 1;
          plVar24 = plVar24 + 1;
          lVar27 = lVar27 + 8;
        } while (iVar28 < 5);
      }
      puVar23 = auStack_260;
      lVar27 = 3;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar25;
      local_2b0 = local_2f8;
      local_248 = uVar18;
      iStack_244 = iVar26;
      uStack_2a8 = uVar25;
      uStack_2a0 = uVar31;
      uStack_298 = uVar16;
      uStack_294 = uVar17;
      uStack_290 = uVar18;
      iStack_28c = iVar26;
      local_288[0] = uVar1 * uVar38;
      bVar40 = false;
      local_268 = local_2f8;
      auStack_260[0] = uVar25;
      auStack_260[1] = uVar31;
      auStack_260[2] = uVar3;
      uVar31 = SUB168(auVar6 * auVar12,8);
      plVar24 = &uStack_310;
      do {
        puVar23 = puVar23 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar34;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *puVar23;
        uVar37 = SUB168(auVar7 * auVar13,8);
        uVar36 = *puVar23 * uVar34;
        uVar1 = (ulonglong)bVar40;
        uVar3 = uVar36 + uVar31;
        bVar40 = CARRY8(uVar36,uVar31) || CARRY8(uVar3,uVar1);
        *plVar24 = uVar3 + uVar1;
        lVar27 = lVar27 + -1;
        uVar31 = uVar37;
        plVar24 = plVar24 + 1;
      } while (lVar27 != 0);
      local_2f8 = bVar40 + uVar37;
      lVar27 = (longlong)iStack_6c;
      if ((longlong)uVar34 < 0) {
        plVar24 = &uStack_310;
        bVar40 = false;
        lVar30 = 0;
        iVar26 = 1;
        do {
          uVar31 = lVar27 >> 0x1f;
          if (iVar26 + -1 < 4) {
            uVar31 = *(ulonglong *)((longlong)auStack_260 + lVar30);
          }
          uVar1 = (ulonglong)bVar40;
          uVar3 = *(ulonglong *)((longlong)&uStack_310 + lVar30) - uVar31;
          bVar40 = *(ulonglong *)((longlong)&uStack_310 + lVar30) < uVar31 || uVar3 < uVar1;
          *plVar24 = uVar3 - uVar1;
          iVar26 = iVar26 + 1;
          plVar24 = plVar24 + 1;
          lVar30 = lVar30 + 8;
        } while (iVar26 < 5);
      }
      local_218 = local_2f8;
      local_228 = local_308;
      uStack_224 = uStack_304;
      uStack_220 = uStack_300;
      uStack_21c = uStack_2fc;
      local_238[0] = uVar25 * uVar34;
      FUN_143808cc0(local_288,local_238,&local_2d0);
      lVar30 = local_2b0;
      uVar21 = uStack_2b8;
      uVar20 = local_2c0;
      uVar19 = uStack_2c4;
      uVar18 = uStack_2c8;
      uVar17 = uStack_2cc;
      uVar16 = local_2d0;
      puVar23 = auStack_180;
      lVar39 = 3;
      uStack_f0 = local_2f0;
      uStack_e8 = uStack_2e8;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar32;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar25;
      local_e0 = CONCAT44(uStack_2dc,local_2e0);
      uStack_d8 = CONCAT44(iStack_2d4,uStack_2d8);
      local_f8 = local_2b0;
      bVar40 = false;
      local_1a8 = local_2d0;
      uStack_1a4 = uStack_2cc;
      uStack_1a0 = uStack_2c8;
      uStack_19c = uStack_2c4;
      local_198 = local_2c0;
      uStack_190 = uStack_2b8;
      local_188 = local_2b0;
      auStack_180[0] = local_2f0;
      auStack_180[1] = uStack_2e8;
      auStack_180[2] = CONCAT44(uStack_2dc,local_2e0);
      auStack_180[3] = CONCAT44(iStack_2d4,uStack_2d8);
      uVar31 = SUB168(auVar8 * auVar14,8);
      plVar24 = &uStack_310;
      do {
        puVar23 = puVar23 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar32;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = *puVar23;
        uVar37 = SUB168(auVar9 * auVar15,8);
        uVar36 = *puVar23 * uVar32;
        uVar1 = (ulonglong)bVar40;
        uVar3 = uVar36 + uVar31;
        bVar40 = CARRY8(uVar36,uVar31) || CARRY8(uVar3,uVar1);
        *plVar24 = uVar3 + uVar1;
        lVar39 = lVar39 + -1;
        uVar31 = uVar37;
        plVar24 = plVar24 + 1;
      } while (lVar39 != 0);
      local_2f8 = bVar40 + uVar37;
      if ((longlong)uVar32 < 0) {
        plVar24 = &uStack_310;
        bVar40 = false;
        iVar26 = 1;
        lVar39 = 0;
        do {
          uVar31 = lVar27 >> 0x1f;
          if (iVar26 + -1 < 4) {
            uVar31 = *(ulonglong *)((longlong)auStack_180 + lVar39);
          }
          uVar1 = (ulonglong)bVar40;
          uVar3 = *(ulonglong *)((longlong)&uStack_310 + lVar39) - uVar31;
          bVar40 = *(ulonglong *)((longlong)&uStack_310 + lVar39) < uVar31 || uVar3 < uVar1;
          *plVar24 = uVar3 - uVar1;
          iVar26 = iVar26 + 1;
          plVar24 = plVar24 + 1;
          lVar39 = lVar39 + 8;
        } while (iVar26 < 5);
      }
      uStack_200 = (undefined4)uStack_310;
      uStack_1fc = uStack_310._4_4_;
      local_1f8 = local_308;
      uStack_1f4 = uStack_304;
      uStack_1f0 = uStack_300;
      uStack_1ec = uStack_2fc;
      local_1e8 = local_2f8;
      local_1d8 = uVar16;
      uStack_1d4 = uVar17;
      uStack_1d0 = uVar18;
      uStack_1cc = uVar19;
      local_1c8 = uVar20;
      uStack_1c0 = uVar21;
      local_1b8 = lVar30;
      local_208 = uVar25 * uVar32;
      uVar25 = FUN_14380af70(&local_1d8,&local_208);
      if ((char)uVar25 == '\0') {
        return uVar25 & 0xffffffffffffff00;
      }
      local_res8 = local_res8 + 0xd;
    } while (local_res8 != local_res10);
  }
  return CONCAT71((int7)((ulonglong)local_res8 >> 8),1);
}



// FUNCTION 14380cea0 FUN_14380cea0 body=2210 status=ok
// SIG undefined FUN_14380cea0(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14380cea0(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char cVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  int iVar33;
  longlong lVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  bool bVar41;
  ulonglong local_188;
  ulonglong auStack_180 [5];
  ulonglong local_158;
  undefined4 local_150;
  ulonglong local_148;
  ulonglong auStack_140 [5];
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  local_118 = *(ulonglong *)(param_1 + 0x10);
  uStack_110 = *(undefined8 *)(param_1 + 0x18);
  FUN_143809610(&local_118,&local_c8,&local_88);
  uVar29 = local_a8[0];
  iVar28 = *(int *)((longlong)param_2 + 4);
  uVar38 = (ulonglong)iVar28;
  puVar32 = local_f8;
  auStack_140[0] = CONCAT44(uStack_bc,uStack_c0);
  auStack_140[1] = CONCAT44(uStack_b4,local_b8);
  auStack_140[2] = CONCAT44(uStack_ac,uStack_b0);
  lVar40 = 3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar38;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_a8[0];
  local_f8[0] = local_a8[0];
  local_f8[1] = local_a8[1];
  local_e8 = local_98;
  uStack_e4 = uStack_94;
  uStack_e0 = (undefined4)uStack_90;
  uStack_dc = uStack_90._4_4_;
  local_188 = local_a8[0] * uVar38;
  local_158 = local_a8[0];
  bVar41 = false;
  lVar34 = 3;
  uVar30 = SUB168(auVar2 * auVar14,8);
  puVar37 = auStack_180;
  do {
    puVar32 = puVar32 + 1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar38;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *puVar32;
    uVar31 = SUB168(auVar3 * auVar15,8);
    uVar35 = *puVar32 * uVar38;
    uVar39 = (ulonglong)bVar41;
    uVar1 = uVar35 + uVar30;
    bVar41 = CARRY8(uVar35,uVar30) || CARRY8(uVar1,uVar39);
    *puVar37 = uVar1 + uVar39;
    lVar34 = lVar34 + -1;
    uVar30 = uVar31;
    puVar37 = puVar37 + 1;
  } while (lVar34 != 0);
  iVar33 = 1;
  auStack_180[3] = bVar41 + uVar31;
  uVar30 = uStack_90 >> 0x3f;
  if (iVar28 < 0) {
    puVar32 = auStack_180;
    bVar41 = false;
    lVar34 = 0;
    iVar27 = iVar33;
    do {
      uVar39 = uVar30;
      if (iVar27 + -1 < 4) {
        uVar39 = *(ulonglong *)((longlong)local_f8 + lVar34);
      }
      uVar1 = (ulonglong)bVar41;
      uVar31 = *(ulonglong *)((longlong)auStack_180 + lVar34) - uVar39;
      bVar41 = *(ulonglong *)((longlong)auStack_180 + lVar34) < uVar39 || uVar31 < uVar1;
      *puVar32 = uVar31 - uVar1;
      iVar27 = iVar27 + 1;
      puVar32 = puVar32 + 1;
      lVar34 = lVar34 + 8;
    } while (iVar27 < 5);
  }
  uStack_110 = auStack_180[0];
  local_108 = auStack_180[1];
  uStack_100 = auStack_180[2];
  local_118 = local_188;
  cVar26 = FUN_14380aeb0(&local_188,&local_148);
  uVar39 = local_88;
  if (cVar26 == '\0') {
    puVar32 = local_a8;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar38;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = local_68[0];
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_a8[0] = local_68[0];
    local_a8[1] = local_68[1];
    local_158 = local_68[0];
    local_188 = local_68[0] * uVar38;
    bVar41 = false;
    lVar34 = 3;
    uVar29 = SUB168(auVar8 * auVar20,8);
    puVar37 = auStack_180;
    do {
      puVar32 = puVar32 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = *puVar32;
      uVar31 = SUB168(auVar9 * auVar21,8);
      uVar35 = *puVar32 * uVar38;
      uVar30 = (ulonglong)bVar41;
      uVar1 = uVar35 + uVar29;
      bVar41 = CARRY8(uVar35,uVar29) || CARRY8(uVar1,uVar30);
      *puVar37 = uVar1 + uVar30;
      lVar34 = lVar34 + -1;
      uVar29 = uVar31;
      puVar37 = puVar37 + 1;
    } while (lVar34 != 0);
    auStack_180[3] = bVar41 + uVar31;
    uVar29 = (longlong)iStack_4c >> 0x1f;
    if (iVar28 < 0) {
      puVar32 = auStack_180;
      bVar41 = false;
      lVar34 = 0;
      iVar28 = iVar33;
      do {
        uVar30 = uVar29;
        if (iVar28 + -1 < 4) {
          uVar30 = *(ulonglong *)((longlong)local_a8 + lVar34);
        }
        uVar38 = (ulonglong)bVar41;
        uVar1 = *(ulonglong *)((longlong)auStack_180 + lVar34) - uVar30;
        bVar41 = *(ulonglong *)((longlong)auStack_180 + lVar34) < uVar30 || uVar1 < uVar38;
        *puVar32 = uVar1 - uVar38;
        iVar28 = iVar28 + 1;
        puVar32 = puVar32 + 1;
        lVar34 = lVar34 + 8;
      } while (iVar28 < 5);
    }
    uStack_110 = auStack_180[0];
    local_108 = auStack_180[1];
    uStack_100 = auStack_180[2];
    local_148 = uVar39;
    local_118 = local_188;
    cVar26 = FUN_14380aeb0(&local_148,&local_188);
    uVar30 = local_88;
    if (cVar26 == '\0') goto LAB_14380d63b;
    puVar32 = local_a8;
    lVar34 = 3;
    iVar28 = *(int *)((longlong)param_3 + 4);
    uVar39 = (ulonglong)iVar28;
    local_a8[0] = local_68[0];
    local_a8[1] = local_68[1];
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = local_158;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_188 = local_158 * uVar39;
    bVar41 = false;
    uVar38 = SUB168(auVar10 * auVar22,8);
    puVar37 = auStack_180;
    do {
      puVar32 = puVar32 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar39;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = *puVar32;
      uVar35 = SUB168(auVar11 * auVar23,8);
      uVar36 = *puVar32 * uVar39;
      uVar1 = (ulonglong)bVar41;
      uVar31 = uVar36 + uVar38;
      bVar41 = CARRY8(uVar36,uVar38) || CARRY8(uVar31,uVar1);
      *puVar37 = uVar31 + uVar1;
      lVar34 = lVar34 + -1;
      uVar38 = uVar35;
      puVar37 = puVar37 + 1;
    } while (lVar34 != 0);
    auStack_180[3] = bVar41 + uVar35;
    if (iVar28 < 0) {
      puVar32 = auStack_180;
      bVar41 = false;
      lVar34 = 0;
      iVar28 = iVar33;
      do {
        uVar38 = uVar29;
        if (iVar28 + -1 < 4) {
          uVar38 = *(ulonglong *)((longlong)local_a8 + lVar34);
        }
        uVar39 = (ulonglong)bVar41;
        uVar1 = *(ulonglong *)((longlong)auStack_180 + lVar34) - uVar38;
        bVar41 = *(ulonglong *)((longlong)auStack_180 + lVar34) < uVar38 || uVar1 < uVar39;
        *puVar32 = uVar1 - uVar39;
        iVar28 = iVar28 + 1;
        puVar32 = puVar32 + 1;
        lVar34 = lVar34 + 8;
      } while (iVar28 < 5);
    }
    uStack_110 = auStack_180[0];
    local_108 = auStack_180[1];
    uStack_100 = auStack_180[2];
    local_148 = uVar30;
    local_118 = local_188;
    cVar26 = FUN_14380aeb0(&local_148,&local_188);
    if (cVar26 == '\0') goto LAB_14380d63b;
    puVar32 = local_a8;
    iVar28 = *(int *)((longlong)param_4 + 4);
    uVar38 = (ulonglong)iVar28;
    local_a8[0] = local_68[0];
    local_a8[1] = local_68[1];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar38;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = local_158;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_188 = uVar38 * local_158;
    bVar41 = false;
    uVar30 = SUB168(auVar12 * auVar24,8);
    puVar37 = auStack_180;
    do {
      puVar32 = puVar32 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar38;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = *puVar32;
      uVar31 = SUB168(auVar13 * auVar25,8);
      uVar35 = *puVar32 * uVar38;
      uVar39 = (ulonglong)bVar41;
      uVar1 = uVar35 + uVar30;
      bVar41 = CARRY8(uVar35,uVar30) || CARRY8(uVar1,uVar39);
      *puVar37 = uVar1 + uVar39;
      lVar40 = lVar40 + -1;
      uVar30 = uVar31;
      puVar37 = puVar37 + 1;
    } while (lVar40 != 0);
    auStack_180[3] = bVar41 + uVar31;
    if (iVar28 < 0) {
      puVar32 = auStack_180;
      bVar41 = false;
      lVar34 = 0;
      do {
        uVar30 = uVar29;
        if (iVar33 + -1 < 4) {
          uVar30 = *(ulonglong *)((longlong)local_a8 + lVar34);
        }
        uVar38 = (ulonglong)bVar41;
        uVar39 = *(ulonglong *)((longlong)auStack_180 + lVar34) - uVar30;
        bVar41 = *(ulonglong *)((longlong)auStack_180 + lVar34) < uVar30 || uVar39 < uVar38;
        *puVar32 = uVar39 - uVar38;
        iVar33 = iVar33 + 1;
        puVar32 = puVar32 + 1;
        lVar34 = lVar34 + 8;
      } while (iVar33 < 5);
    }
    uStack_110 = auStack_180[0];
    local_108 = auStack_180[1];
    uStack_100 = auStack_180[2];
    local_148 = local_88;
    local_118 = local_188;
    cVar26 = FUN_14380aeb0(&local_148,&local_188);
  }
  else {
    iVar28 = *(int *)((longlong)param_3 + 4);
    uVar38 = (ulonglong)iVar28;
    puVar32 = local_68;
    local_188 = CONCAT44(uStack_c4,local_c8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar38;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar29;
    local_68[0] = local_a8[0];
    local_68[1] = local_a8[1];
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = (undefined4)uStack_90;
    iStack_4c = uStack_90._4_4_;
    local_148 = uVar29 * uVar38;
    bVar41 = false;
    lVar34 = 3;
    uVar29 = SUB168(auVar4 * auVar16,8);
    puVar37 = auStack_140;
    do {
      puVar32 = puVar32 + 1;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar38;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *puVar32;
      uVar31 = SUB168(auVar5 * auVar17,8);
      uVar35 = *puVar32 * uVar38;
      uVar39 = (ulonglong)bVar41;
      uVar1 = uVar35 + uVar29;
      bVar41 = CARRY8(uVar35,uVar29) || CARRY8(uVar1,uVar39);
      *puVar37 = uVar1 + uVar39;
      lVar34 = lVar34 + -1;
      uVar29 = uVar31;
      puVar37 = puVar37 + 1;
    } while (lVar34 != 0);
    auStack_140[3] = bVar41 + uVar31;
    if (iVar28 < 0) {
      puVar32 = auStack_140;
      bVar41 = false;
      lVar34 = 0;
      iVar28 = iVar33;
      do {
        uVar29 = uVar30;
        if (iVar28 + -1 < 4) {
          uVar29 = *(ulonglong *)((longlong)local_68 + lVar34);
        }
        uVar38 = (ulonglong)bVar41;
        uVar39 = *(ulonglong *)((longlong)auStack_140 + lVar34) - uVar29;
        bVar41 = *(ulonglong *)((longlong)auStack_140 + lVar34) < uVar29 || uVar39 < uVar38;
        *puVar32 = uVar39 - uVar38;
        iVar28 = iVar28 + 1;
        puVar32 = puVar32 + 1;
        lVar34 = lVar34 + 8;
      } while (iVar28 < 5);
    }
    uStack_110 = auStack_140[0];
    local_108 = auStack_140[1];
    uStack_100 = auStack_140[2];
    local_118 = local_148;
    cVar26 = FUN_14380aeb0(&local_148,&local_188);
    if (cVar26 == '\0') goto LAB_14380d63b;
    puVar32 = local_68;
    local_188 = CONCAT44(uStack_c4,local_c8);
    iVar28 = *(int *)((longlong)param_4 + 4);
    uVar38 = (ulonglong)iVar28;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar38;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = local_158;
    local_148 = local_158 * uVar38;
    local_68[0] = local_a8[0];
    local_68[1] = local_a8[1];
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = (undefined4)uStack_90;
    iStack_4c = uStack_90._4_4_;
    bVar41 = false;
    uVar29 = SUB168(auVar6 * auVar18,8);
    puVar37 = auStack_140;
    do {
      puVar32 = puVar32 + 1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar38;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = *puVar32;
      uVar31 = SUB168(auVar7 * auVar19,8);
      uVar35 = *puVar32 * uVar38;
      uVar39 = (ulonglong)bVar41;
      uVar1 = uVar35 + uVar29;
      bVar41 = CARRY8(uVar35,uVar29) || CARRY8(uVar1,uVar39);
      *puVar37 = uVar1 + uVar39;
      lVar40 = lVar40 + -1;
      uVar29 = uVar31;
      puVar37 = puVar37 + 1;
    } while (lVar40 != 0);
    auStack_140[3] = bVar41 + uVar31;
    if (iVar28 < 0) {
      puVar32 = auStack_140;
      bVar41 = false;
      lVar34 = 0;
      do {
        uVar29 = uVar30;
        if (iVar33 + -1 < 4) {
          uVar29 = *(ulonglong *)((longlong)local_68 + lVar34);
        }
        uVar38 = (ulonglong)bVar41;
        uVar39 = *(ulonglong *)((longlong)auStack_140 + lVar34) - uVar29;
        bVar41 = *(ulonglong *)((longlong)auStack_140 + lVar34) < uVar29 || uVar39 < uVar38;
        *puVar32 = uVar39 - uVar38;
        iVar33 = iVar33 + 1;
        puVar32 = puVar32 + 1;
        lVar34 = lVar34 + 8;
      } while (iVar33 < 5);
    }
    uStack_110 = auStack_140[0];
    local_108 = auStack_140[1];
    uStack_100 = auStack_140[2];
    local_118 = local_148;
    cVar26 = FUN_14380aeb0(&local_148,&local_188);
  }
  if (cVar26 != '\0') {
    return 0;
  }
LAB_14380d63b:
  local_158 = *param_4;
  local_150 = (undefined4)param_4[1];
  local_d8 = *param_3;
  local_d0 = (undefined4)param_3[1];
  local_118 = *param_2;
  uStack_110._0_4_ = (int)param_2[1];
  cVar26 = FUN_14380c420(param_1,&local_118,&local_d8,&local_158);
  if (cVar26 == '\0') {
    local_118 = *param_2;
    uStack_110._0_4_ = (undefined4)param_2[1];
    local_d8 = *param_4;
    local_d0 = (undefined4)param_4[1];
    local_158 = *param_3;
    local_150 = (undefined4)param_3[1];
    cVar26 = FUN_14380c420(param_1,&local_158,&local_d8,&local_118);
    if (cVar26 == '\0') {
      local_118 = *param_3;
      local_d8 = *param_2;
      uStack_110 = CONCAT44(uStack_110._4_4_,(int)param_3[1]);
      local_d0 = (undefined4)param_2[1];
      local_158 = *param_4;
      local_150 = (undefined4)param_4[1];
      cVar26 = FUN_14380c420(param_1,&local_158,&local_d8,&local_118);
      if (cVar26 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14380d750 FUN_14380d750 body=2210 status=ok
// SIG undefined FUN_14380d750(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14380d750(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong *puVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong lVar41;
  bool bVar42;
  ulonglong local_188;
  ulonglong auStack_180 [5];
  ulonglong local_158;
  int local_150;
  ulonglong local_148;
  ulonglong auStack_140 [5];
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8 [2];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  local_118 = *(ulonglong *)(param_1 + 0x10);
  uStack_110 = *(undefined8 *)(param_1 + 0x18);
  FUN_143809d80(&local_118,&local_c8,&local_88);
  uVar28 = local_a8[0];
  iVar27 = (int)*param_2;
  uVar38 = (ulonglong)iVar27;
  puVar31 = local_f8;
  auStack_140[0] = CONCAT44(uStack_bc,uStack_c0);
  auStack_140[1] = CONCAT44(uStack_b4,local_b8);
  auStack_140[2] = CONCAT44(uStack_ac,uStack_b0);
  lVar41 = 3;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar38;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = local_a8[0];
  local_f8[0] = local_a8[0];
  local_f8[1] = local_a8[1];
  local_e8 = local_98;
  uStack_e4 = uStack_94;
  uStack_e0 = (undefined4)uStack_90;
  uStack_dc = uStack_90._4_4_;
  local_188 = local_a8[0] * uVar38;
  local_158 = local_a8[0];
  bVar42 = false;
  lVar33 = 3;
  uVar29 = SUB168(auVar1 * auVar13,8);
  puVar37 = auStack_180;
  do {
    puVar31 = puVar31 + 1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar38;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *puVar31;
    uVar30 = SUB168(auVar2 * auVar14,8);
    uVar34 = *puVar31 * uVar38;
    uVar39 = (ulonglong)bVar42;
    uVar40 = uVar34 + uVar29;
    bVar42 = CARRY8(uVar34,uVar29) || CARRY8(uVar40,uVar39);
    *puVar37 = uVar40 + uVar39;
    lVar33 = lVar33 + -1;
    uVar29 = uVar30;
    puVar37 = puVar37 + 1;
  } while (lVar33 != 0);
  iVar32 = 1;
  auStack_180[3] = bVar42 + uVar30;
  uVar29 = uStack_90 >> 0x3f;
  if (iVar27 < 0) {
    puVar31 = auStack_180;
    bVar42 = false;
    lVar33 = 0;
    iVar26 = iVar32;
    do {
      uVar39 = uVar29;
      if (iVar26 + -1 < 4) {
        uVar39 = *(ulonglong *)((longlong)local_f8 + lVar33);
      }
      uVar40 = (ulonglong)bVar42;
      uVar30 = *(ulonglong *)((longlong)auStack_180 + lVar33) - uVar39;
      bVar42 = *(ulonglong *)((longlong)auStack_180 + lVar33) < uVar39 || uVar30 < uVar40;
      *puVar31 = uVar30 - uVar40;
      iVar26 = iVar26 + 1;
      puVar31 = puVar31 + 1;
      lVar33 = lVar33 + 8;
    } while (iVar26 < 5);
  }
  uStack_110 = auStack_180[0];
  local_108 = auStack_180[1];
  uStack_100 = auStack_180[2];
  local_118 = local_188;
  cVar25 = FUN_14380aeb0(&local_188,&local_148);
  uVar39 = local_88;
  if (cVar25 == '\0') {
    puVar31 = local_a8;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar38;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = local_68[0];
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_a8[0] = local_68[0];
    local_a8[1] = local_68[1];
    local_158 = local_68[0];
    local_188 = local_68[0] * uVar38;
    bVar42 = false;
    lVar33 = 3;
    uVar28 = SUB168(auVar7 * auVar19,8);
    puVar37 = auStack_180;
    do {
      puVar31 = puVar31 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *puVar31;
      uVar30 = SUB168(auVar8 * auVar20,8);
      uVar34 = *puVar31 * uVar38;
      uVar29 = (ulonglong)bVar42;
      uVar40 = uVar34 + uVar28;
      bVar42 = CARRY8(uVar34,uVar28) || CARRY8(uVar40,uVar29);
      *puVar37 = uVar40 + uVar29;
      lVar33 = lVar33 + -1;
      uVar28 = uVar30;
      puVar37 = puVar37 + 1;
    } while (lVar33 != 0);
    auStack_180[3] = bVar42 + uVar30;
    uVar28 = (longlong)iStack_4c >> 0x1f;
    if (iVar27 < 0) {
      puVar31 = auStack_180;
      bVar42 = false;
      lVar33 = 0;
      iVar27 = iVar32;
      do {
        uVar29 = uVar28;
        if (iVar27 + -1 < 4) {
          uVar29 = *(ulonglong *)((longlong)local_a8 + lVar33);
        }
        uVar38 = (ulonglong)bVar42;
        uVar40 = *(ulonglong *)((longlong)auStack_180 + lVar33) - uVar29;
        bVar42 = *(ulonglong *)((longlong)auStack_180 + lVar33) < uVar29 || uVar40 < uVar38;
        *puVar31 = uVar40 - uVar38;
        iVar27 = iVar27 + 1;
        puVar31 = puVar31 + 1;
        lVar33 = lVar33 + 8;
      } while (iVar27 < 5);
    }
    uStack_110 = auStack_180[0];
    local_108 = auStack_180[1];
    uStack_100 = auStack_180[2];
    local_148 = uVar39;
    local_118 = local_188;
    cVar25 = FUN_14380aeb0(&local_148,&local_188);
    uVar29 = local_88;
    if (cVar25 == '\0') goto LAB_14380deeb;
    puVar31 = local_a8;
    lVar33 = 3;
    uVar38 = *param_3;
    uVar40 = (ulonglong)(int)uVar38;
    local_a8[0] = local_68[0];
    local_a8[1] = local_68[1];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar40;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = local_158;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_188 = local_158 * uVar40;
    bVar42 = false;
    uVar39 = SUB168(auVar9 * auVar21,8);
    puVar37 = auStack_180;
    do {
      puVar31 = puVar31 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar40;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = *puVar31;
      uVar35 = SUB168(auVar10 * auVar22,8);
      uVar36 = *puVar31 * uVar40;
      uVar30 = (ulonglong)bVar42;
      uVar34 = uVar36 + uVar39;
      bVar42 = CARRY8(uVar36,uVar39) || CARRY8(uVar34,uVar30);
      *puVar37 = uVar34 + uVar30;
      lVar33 = lVar33 + -1;
      uVar39 = uVar35;
      puVar37 = puVar37 + 1;
    } while (lVar33 != 0);
    auStack_180[3] = bVar42 + uVar35;
    if ((int)uVar38 < 0) {
      puVar31 = auStack_180;
      bVar42 = false;
      lVar33 = 0;
      iVar27 = iVar32;
      do {
        uVar38 = uVar28;
        if (iVar27 + -1 < 4) {
          uVar38 = *(ulonglong *)((longlong)local_a8 + lVar33);
        }
        uVar39 = (ulonglong)bVar42;
        uVar40 = *(ulonglong *)((longlong)auStack_180 + lVar33) - uVar38;
        bVar42 = *(ulonglong *)((longlong)auStack_180 + lVar33) < uVar38 || uVar40 < uVar39;
        *puVar31 = uVar40 - uVar39;
        iVar27 = iVar27 + 1;
        puVar31 = puVar31 + 1;
        lVar33 = lVar33 + 8;
      } while (iVar27 < 5);
    }
    uStack_110 = auStack_180[0];
    local_108 = auStack_180[1];
    uStack_100 = auStack_180[2];
    local_148 = uVar29;
    local_118 = local_188;
    cVar25 = FUN_14380aeb0(&local_148,&local_188);
    if (cVar25 == '\0') goto LAB_14380deeb;
    puVar31 = local_a8;
    uVar29 = *param_4;
    uVar39 = (ulonglong)(int)uVar29;
    local_a8[0] = local_68[0];
    local_a8[1] = local_68[1];
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar39;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_158;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    local_b8 = local_78;
    uStack_b4 = uStack_74;
    uStack_b0 = uStack_70;
    uStack_ac = uStack_6c;
    local_188 = uVar39 * local_158;
    bVar42 = false;
    uVar38 = SUB168(auVar11 * auVar23,8);
    puVar37 = auStack_180;
    do {
      puVar31 = puVar31 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar39;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *puVar31;
      uVar34 = SUB168(auVar12 * auVar24,8);
      uVar35 = *puVar31 * uVar39;
      uVar40 = (ulonglong)bVar42;
      uVar30 = uVar35 + uVar38;
      bVar42 = CARRY8(uVar35,uVar38) || CARRY8(uVar30,uVar40);
      *puVar37 = uVar30 + uVar40;
      lVar41 = lVar41 + -1;
      uVar38 = uVar34;
      puVar37 = puVar37 + 1;
    } while (lVar41 != 0);
    auStack_180[3] = bVar42 + uVar34;
    if ((int)uVar29 < 0) {
      puVar31 = auStack_180;
      bVar42 = false;
      lVar33 = 0;
      do {
        uVar29 = uVar28;
        if (iVar32 + -1 < 4) {
          uVar29 = *(ulonglong *)((longlong)local_a8 + lVar33);
        }
        uVar38 = (ulonglong)bVar42;
        uVar39 = *(ulonglong *)((longlong)auStack_180 + lVar33) - uVar29;
        bVar42 = *(ulonglong *)((longlong)auStack_180 + lVar33) < uVar29 || uVar39 < uVar38;
        *puVar31 = uVar39 - uVar38;
        iVar32 = iVar32 + 1;
        puVar31 = puVar31 + 1;
        lVar33 = lVar33 + 8;
      } while (iVar32 < 5);
    }
    uStack_110 = auStack_180[0];
    local_108 = auStack_180[1];
    uStack_100 = auStack_180[2];
    local_148 = local_88;
    local_118 = local_188;
    cVar25 = FUN_14380aeb0(&local_148,&local_188);
  }
  else {
    uVar38 = *param_3;
    uVar39 = (ulonglong)(int)uVar38;
    puVar31 = local_68;
    local_188 = CONCAT44(uStack_c4,local_c8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar39;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar28;
    local_68[0] = local_a8[0];
    local_68[1] = local_a8[1];
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = (undefined4)uStack_90;
    iStack_4c = uStack_90._4_4_;
    local_148 = uVar28 * uVar39;
    bVar42 = false;
    lVar33 = 3;
    uVar28 = SUB168(auVar3 * auVar15,8);
    puVar37 = auStack_140;
    do {
      puVar31 = puVar31 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar39;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *puVar31;
      uVar34 = SUB168(auVar4 * auVar16,8);
      uVar35 = *puVar31 * uVar39;
      uVar40 = (ulonglong)bVar42;
      uVar30 = uVar35 + uVar28;
      bVar42 = CARRY8(uVar35,uVar28) || CARRY8(uVar30,uVar40);
      *puVar37 = uVar30 + uVar40;
      lVar33 = lVar33 + -1;
      uVar28 = uVar34;
      puVar37 = puVar37 + 1;
    } while (lVar33 != 0);
    auStack_140[3] = bVar42 + uVar34;
    if ((int)uVar38 < 0) {
      puVar31 = auStack_140;
      bVar42 = false;
      lVar33 = 0;
      iVar27 = iVar32;
      do {
        uVar28 = uVar29;
        if (iVar27 + -1 < 4) {
          uVar28 = *(ulonglong *)((longlong)local_68 + lVar33);
        }
        uVar38 = (ulonglong)bVar42;
        uVar39 = *(ulonglong *)((longlong)auStack_140 + lVar33) - uVar28;
        bVar42 = *(ulonglong *)((longlong)auStack_140 + lVar33) < uVar28 || uVar39 < uVar38;
        *puVar31 = uVar39 - uVar38;
        iVar27 = iVar27 + 1;
        puVar31 = puVar31 + 1;
        lVar33 = lVar33 + 8;
      } while (iVar27 < 5);
    }
    uStack_110 = auStack_140[0];
    local_108 = auStack_140[1];
    uStack_100 = auStack_140[2];
    local_118 = local_148;
    cVar25 = FUN_14380aeb0(&local_148,&local_188);
    if (cVar25 == '\0') goto LAB_14380deeb;
    puVar31 = local_68;
    local_188 = CONCAT44(uStack_c4,local_c8);
    uVar28 = *param_4;
    uVar39 = (ulonglong)(int)uVar28;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar39;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_158;
    local_148 = local_158 * uVar39;
    local_68[0] = local_a8[0];
    local_68[1] = local_a8[1];
    local_58 = local_98;
    uStack_54 = uStack_94;
    uStack_50 = (undefined4)uStack_90;
    iStack_4c = uStack_90._4_4_;
    bVar42 = false;
    uVar38 = SUB168(auVar5 * auVar17,8);
    puVar37 = auStack_140;
    do {
      puVar31 = puVar31 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar39;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *puVar31;
      uVar34 = SUB168(auVar6 * auVar18,8);
      uVar35 = *puVar31 * uVar39;
      uVar40 = (ulonglong)bVar42;
      uVar30 = uVar35 + uVar38;
      bVar42 = CARRY8(uVar35,uVar38) || CARRY8(uVar30,uVar40);
      *puVar37 = uVar30 + uVar40;
      lVar41 = lVar41 + -1;
      uVar38 = uVar34;
      puVar37 = puVar37 + 1;
    } while (lVar41 != 0);
    auStack_140[3] = bVar42 + uVar34;
    if ((int)uVar28 < 0) {
      puVar31 = auStack_140;
      bVar42 = false;
      lVar33 = 0;
      do {
        uVar28 = uVar29;
        if (iVar32 + -1 < 4) {
          uVar28 = *(ulonglong *)((longlong)local_68 + lVar33);
        }
        uVar38 = (ulonglong)bVar42;
        uVar39 = *(ulonglong *)((longlong)auStack_140 + lVar33) - uVar28;
        bVar42 = *(ulonglong *)((longlong)auStack_140 + lVar33) < uVar28 || uVar39 < uVar38;
        *puVar31 = uVar39 - uVar38;
        iVar32 = iVar32 + 1;
        puVar31 = puVar31 + 1;
        lVar33 = lVar33 + 8;
      } while (iVar32 < 5);
    }
    uStack_110 = auStack_140[0];
    local_108 = auStack_140[1];
    uStack_100 = auStack_140[2];
    local_118 = local_148;
    cVar25 = FUN_14380aeb0(&local_148,&local_188);
  }
  if (cVar25 != '\0') {
    return 0;
  }
LAB_14380deeb:
  local_158 = *param_4;
  local_150 = (int)param_4[1];
  local_d8 = *param_3;
  local_d0 = (int)param_3[1];
  local_118 = *param_2;
  uStack_110._0_4_ = (int)param_2[1];
  cVar25 = FUN_14380c960(param_1,&local_118,&local_d8,&local_158);
  if (cVar25 == '\0') {
    local_118 = *param_2;
    uStack_110._0_4_ = (int)param_2[1];
    local_d8 = *param_4;
    local_d0 = (int)param_4[1];
    local_158 = *param_3;
    local_150 = (int)param_3[1];
    cVar25 = FUN_14380c960(param_1,&local_158,&local_d8,&local_118);
    if (cVar25 == '\0') {
      local_118 = *param_3;
      local_d8 = *param_2;
      uStack_110 = CONCAT44(uStack_110._4_4_,(int)param_3[1]);
      local_d0 = (int)param_2[1];
      local_158 = *param_4;
      local_150 = (int)param_4[1];
      cVar25 = FUN_14380c960(param_1,&local_158,&local_d8,&local_118);
      if (cVar25 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14380e000 FUN_14380e000 body=277 status=ok
// SIG undefined FUN_14380e000(void)

undefined1 FUN_14380e000(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int local_res18;
  int local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined8 local_58;
  int local_48;
  int local_44;
  longlong local_40;
  
  iVar7 = 0;
  lVar6 = 0x18;
  piVar3 = param_1;
  do {
    local_res1c = *(int *)(lVar6 + 4 + (longlong)param_1);
    local_res18 = *(int *)(lVar6 + (longlong)param_1);
    local_48 = piVar3[1] - local_res1c;
    local_44 = local_res18 - *piVar3;
    plVar1 = (longlong *)FUN_143808d40(local_68,&local_48,&local_res18);
    lVar5 = 0;
    lVar6 = *plVar1;
    puVar4 = param_2;
    local_40 = lVar6;
    while( true ) {
      local_58 = *puVar4;
      local_res20 = (undefined4)local_58;
      local_res24 = (undefined4)((ulonglong)local_58 >> 0x20);
      plVar1 = (longlong *)FUN_143808d40(local_60,&local_res20,&local_48);
      lVar2 = *plVar1 - lVar6;
      if ((int)((uint)(lVar2 >> 0x3f) | (uint)(lVar2 != 0)) < 1) break;
      lVar5 = lVar5 + 1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      if (2 < lVar5) {
        return 1;
      }
    }
    lVar6 = (longlong)piVar3 - (longlong)param_1;
    iVar7 = iVar7 + 1;
    piVar3 = piVar3 + 3;
    if (2 < iVar7) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14380e120 FUN_14380e120 body=300 status=ok
// SIG undefined FUN_14380e120(void)

undefined8 FUN_14380e120(int *param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  int local_res18;
  int local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined8 local_58;
  int local_48;
  int local_44;
  longlong local_40;
  
  iVar9 = 0;
  lVar7 = 0x18;
  piVar8 = param_1;
  do {
    local_res1c = *(int *)(lVar7 + 4 + (longlong)param_1);
    local_res18 = *(int *)(lVar7 + (longlong)param_1);
    local_48 = piVar8[1] - local_res1c;
    local_44 = local_res18 - *piVar8;
    plVar2 = (longlong *)FUN_143808d40(local_68,&local_48,&local_res18);
    bVar1 = false;
    lVar6 = 0;
    lVar7 = *plVar2;
    puVar5 = param_2;
    local_40 = lVar7;
    do {
      local_58 = *puVar5;
      local_res20 = (undefined4)local_58;
      local_res24 = (undefined4)((ulonglong)local_58 >> 0x20);
      plVar2 = (longlong *)FUN_143808d40(local_60,&local_res20,&local_48);
      lVar3 = *plVar2 - lVar7;
      uVar4 = (uint)(lVar3 >> 0x3f) | (uint)(lVar3 != 0);
      if ((int)uVar4 < 0) goto LAB_14380e210;
      lVar6 = lVar6 + 1;
      bVar1 = (bool)(bVar1 | 0 < (int)uVar4);
      puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
    } while (lVar6 < 3);
    if (bVar1) {
      return 1;
    }
LAB_14380e210:
    lVar7 = (longlong)piVar8 - (longlong)param_1;
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 3;
    if (2 < iVar9) {
      return 0;
    }
  } while( true );
}



// FUNCTION 14380e250 FUN_14380e250 body=86 status=ok
// SIG undefined FUN_14380e250(void)

void FUN_14380e250(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
                    /* WARNING: Could not recover jumptable at 0x00014380e2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_143811f10 + (longlong)(param_9 + (param_6 + param_3 * 3) * 3) * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_143811f10 + (longlong)(param_9 + (param_6 + param_3 * 3) * 3) * 4));
  return;
}



// FUNCTION 143811f80 FUN_143811f80 body=86 status=ok
// SIG undefined FUN_143811f80(void)

void FUN_143811f80(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8,int param_9)

{
                    /* WARNING: Could not recover jumptable at 0x000143811fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_143815c40 + (longlong)(param_9 + (param_6 + param_3 * 3) * 3) * 4)))
            (IMAGE_DOS_HEADER_140000000.e_magic +
             *(uint *)(&DAT_143815c40 + (longlong)(param_9 + (param_6 + param_3 * 3) * 3) * 4));
  return;
}



// FUNCTION 143815cb0 FUN_143815cb0 body=109 status=ok
// SIG undefined FUN_143815cb0(void)

ulonglong FUN_143815cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  uVar1 = FUN_143805b00(local_res20,param_3,param_1);
  uVar2 = FUN_143805b00(local_18,param_2,param_1);
  plVar3 = (longlong *)FUN_143806830(local_10,uVar2,uVar1);
  return (ulonglong)(*plVar3 != 0) | *plVar3 >> 0x3f;
}



// FUNCTION 143815d20 FUN_143815d20 body=406 status=ok
// SIG undefined FUN_143815d20(void)

undefined8 FUN_143815d20(undefined8 param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined1 local_68 [32];
  longlong local_48;
  undefined1 local_40 [40];
  
  lVar17 = *param_3;
  lVar1 = param_3[1];
  if (lVar17 != lVar1) {
    lVar14 = (lVar17 - (longlong)&uStack_b0) + 0x40;
    do {
      uVar2 = *(ulonglong *)(lVar17 + 0x40);
      puVar9 = (ulonglong *)(lVar17 + 0x48);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      bVar19 = false;
      lVar15 = 3;
      uVar12 = SUB168(auVar5 * auVar7,8);
      puVar16 = &uStack_b0;
      do {
        uVar18 = *puVar9;
        puVar9 = puVar9 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar18;
        uVar13 = SUB168(auVar6 * auVar8,8);
        uVar18 = uVar18 * param_2;
        uVar3 = (ulonglong)bVar19;
        uVar4 = uVar18 + uVar12;
        bVar19 = CARRY8(uVar18,uVar12) || CARRY8(uVar4,uVar3);
        *puVar16 = uVar4 + uVar3;
        lVar15 = lVar15 + -1;
        uVar12 = uVar13;
        puVar16 = puVar16 + 1;
      } while (lVar15 != 0);
      local_98 = bVar19 + uVar13;
      if ((longlong)param_2 < 0) {
        lVar15 = *(longlong *)(lVar17 + 0x58);
        puVar9 = &uStack_b0;
        puVar16 = &uStack_b0;
        bVar19 = false;
        iVar11 = 1;
        do {
          uVar12 = lVar15 >> 0x3f;
          if (iVar11 + -1 < 4) {
            uVar12 = *(ulonglong *)(lVar14 + (longlong)puVar9);
          }
          uVar18 = (ulonglong)bVar19;
          uVar3 = *puVar9 - uVar12;
          bVar19 = *puVar9 < uVar12 || uVar3 < uVar18;
          *puVar16 = uVar3 - uVar18;
          iVar11 = iVar11 + 1;
          puVar16 = puVar16 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar11 < 5);
      }
      uStack_88 = uStack_b0;
      local_70 = local_98;
      local_80 = local_a8;
      uStack_7c = uStack_a4;
      uStack_78 = uStack_a0;
      uStack_74 = uStack_9c;
      local_90 = uVar2 * param_2;
      uVar10 = FUN_143808d60(local_40,param_1,lVar17);
      FUN_143808cc0(uVar10,&local_90,local_68);
      if (-1 < local_48) {
        return 0;
      }
      lVar17 = lVar17 + 0x68;
      lVar14 = lVar14 + 0x68;
    } while (lVar17 != lVar1);
  }
  return 1;
}



// FUNCTION 143815ec0 FUN_143815ec0 body=534 status=ok
// SIG undefined FUN_143815ec0(void)

/* WARNING: Removing unreachable block (ram,0x000143815fc5) */
/* WARNING: Removing unreachable block (ram,0x000143815f39) */
/* WARNING: Removing unreachable block (ram,0x000143816078) */

undefined8 * FUN_143815ec0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  ulonglong local_68 [6];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong uVar5;
  
  plVar10 = &local_38;
  local_68[4] = SUB168(SEXT816(*param_3) * SEXT816(param_2[2]),8);
  uVar6 = 0;
  local_68[3] = param_2[2] * *param_3;
  bVar11 = false;
  local_68[0] = param_3[2] * *param_2;
  local_68[1] = SUB168(SEXT816(param_3[2]) * SEXT816(*param_2),8);
  uVar5 = uVar6;
  uVar9 = uVar6;
  do {
    uVar8 = (longlong)local_68[4] >> 0x3f;
    if ((int)uVar5 < 2) {
      uVar8 = *(ulonglong *)((longlong)local_68 + uVar9 + 0x18);
    }
    uVar7 = (ulonglong)bVar11;
    uVar1 = *(ulonglong *)((longlong)local_68 + uVar9) - uVar8;
    bVar11 = *(ulonglong *)((longlong)local_68 + uVar9) < uVar8 || uVar1 < uVar7;
    *plVar10 = uVar1 - uVar7;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    plVar10 = plVar10 + 1;
    uVar9 = uVar9 + 8;
  } while ((int)uVar4 < 2);
  bVar11 = false;
  plVar10 = &local_38;
  *param_1 = CONCAT44(local_38._4_4_,(undefined4)local_38);
  param_1[1] = CONCAT44(uStack_2c,uStack_30);
  local_68[1] = SUB168(SEXT816(param_3[1]) * SEXT816(param_2[2]),8);
  local_68[0] = param_2[2] * param_3[1];
  local_68[3] = param_3[2] * param_2[1];
  local_68[4] = SUB168(SEXT816(param_3[2]) * SEXT816(param_2[1]),8);
  uVar5 = uVar6;
  uVar9 = uVar6;
  do {
    uVar8 = *(ulonglong *)((longlong)local_68 + uVar9 + 0x18);
    uVar7 = (longlong)local_68[1] >> 0x3f;
    if ((int)uVar5 < 2) {
      uVar7 = *(ulonglong *)((longlong)local_68 + uVar9);
    }
    uVar1 = (ulonglong)bVar11;
    uVar2 = uVar8 - uVar7;
    bVar11 = uVar8 < uVar7 || uVar2 < uVar1;
    *plVar10 = uVar2 - uVar1;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    plVar10 = plVar10 + 1;
    uVar9 = uVar9 + 8;
  } while ((int)uVar4 < 2);
  *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
  *(undefined4 *)(param_1 + 3) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_2c;
  FUN_14380bf80(param_3 + 3,param_2[2],&local_38,1);
  lVar3 = local_28;
  local_68[2] = local_28;
  FUN_14380bf80(param_2 + 3,param_3[2],&local_38);
  plVar10 = &local_38;
  bVar11 = false;
  local_68[5] = local_28;
  uVar5 = uVar6;
  do {
    uVar9 = *(ulonglong *)((longlong)local_68 + uVar6 + 0x18);
    uVar8 = lVar3 >> 0x3f;
    if ((int)uVar5 < 3) {
      uVar8 = *(ulonglong *)((longlong)local_68 + uVar6);
    }
    uVar7 = (ulonglong)bVar11;
    uVar1 = uVar9 - uVar8;
    bVar11 = uVar9 < uVar8 || uVar1 < uVar7;
    *plVar10 = uVar1 - uVar7;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    plVar10 = plVar10 + 1;
    uVar6 = uVar6 + 8;
  } while ((int)uVar4 < 3);
  param_1[4] = CONCAT44(local_38._4_4_,(undefined4)local_38);
  param_1[5] = CONCAT44(uStack_2c,uStack_30);
  param_1[6] = local_28;
  return param_1;
}



// FUNCTION 1438160e0 FUN_1438160e0 body=497 status=ok
// SIG undefined FUN_1438160e0(void)

longlong * FUN_1438160e0(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  uStack_30 = SUB168(SEXT816((longlong)param_2[8]) * SEXT816(param_3[2]),8);
  local_38 = (longlong)param_2[8] * param_3[2];
  local_48 = (longlong)param_2[7] * param_3[1];
  uStack_40 = SUB168(SEXT816((longlong)param_2[7]) * SEXT816(param_3[1]),8);
  local_58 = (longlong)param_2[6] * *param_3;
  lStack_50 = SUB168(SEXT816((longlong)param_2[6]) * SEXT816(*param_3),8);
  FUN_143806620(&local_58,&local_48,&local_28);
  FUN_143806620(&local_28,&local_38,&local_18);
  local_48 = (longlong)param_2[5] * param_3[2];
  uStack_40 = SUB168(SEXT816((longlong)param_2[5]) * SEXT816(param_3[2]),8);
  local_28 = (longlong)param_2[4] * param_3[1];
  lStack_20 = SUB168(SEXT816((longlong)param_2[4]) * SEXT816(param_3[1]),8);
  local_58 = (longlong)param_2[3] * *param_3;
  lStack_50 = SUB168(SEXT816((longlong)param_2[3]) * SEXT816(*param_3),8);
  local_38 = local_58;
  uStack_30 = lStack_50;
  FUN_143806620(&local_38,&local_28,&local_58);
  FUN_143806620(&local_58,&local_48,&local_28);
  *param_1 = local_28;
  param_1[1] = lStack_20;
  param_1[2] = local_18;
  param_1[3] = lStack_10;
  local_38 = (longlong)param_2[2] * param_3[2];
  uStack_30 = SUB168(SEXT816((longlong)param_2[2]) * SEXT816(param_3[2]),8);
  local_18 = (longlong)param_2[1] * param_3[1];
  lStack_10 = SUB168(SEXT816((longlong)param_2[1]) * SEXT816(param_3[1]),8);
  local_58 = (longlong)*param_2 * *param_3;
  lStack_50 = SUB168(SEXT816((longlong)*param_2) * SEXT816(*param_3),8);
  local_28 = local_58;
  lStack_20 = lStack_50;
  FUN_143806620(&local_28,&local_18,&local_48);
  FUN_143806620(&local_48,&local_38,&local_18);
  FUN_143806620(param_3 + 3,&local_18,&local_58);
  param_1[4] = local_58;
  param_1[5] = lStack_50;
  return param_1;
}



// FUNCTION 1438162e0 FUN_1438162e0 body=470 status=ok
// SIG undefined FUN_1438162e0(void)

void FUN_1438162e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_143819010(param_1 + 0x18,param_1 + 0x1d,param_2,param_3,&local_58);
  if (*(char *)(param_1 + 0x29) == '\0') {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 0xc) = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 1);
    param_1[6] = local_58;
    param_1[7] = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    param_1[8] = local_48;
    param_1[9] = uStack_40;
    param_1[10] = local_38;
    param_1[0xb] = uStack_30;
    param_1[0xc] = local_28;
    param_1[0xd] = uStack_20;
    param_1[0xe] = local_18;
    param_1[3] = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((longlong)param_1 + 0x24) = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 1);
    param_1[0xf] = local_58;
    param_1[0x10] = uStack_50;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
    param_1[0x11] = local_48;
    param_1[0x12] = uStack_40;
    param_1[0x13] = local_38;
    param_1[0x14] = uStack_30;
    param_1[0x15] = local_28;
    param_1[0x16] = uStack_20;
    param_1[0x17] = local_18;
  }
  else {
    cVar2 = FUN_14380b270(&local_58,param_1 + 6);
    if (cVar2 == '\0') {
      cVar2 = FUN_14380b270(param_1 + 0xf,&local_58);
      if (cVar2 != '\0') {
        param_1[3] = *param_2;
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 1);
        *(undefined8 *)((longlong)param_1 + 0x24) = *param_3;
        uVar1 = *(undefined4 *)(param_3 + 1);
        param_1[0xf] = local_58;
        param_1[0x10] = uStack_50;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
        param_1[0x11] = local_48;
        param_1[0x12] = uStack_40;
        param_1[0x13] = local_38;
        param_1[0x14] = uStack_30;
        param_1[0x15] = local_28;
        param_1[0x16] = uStack_20;
        param_1[0x17] = local_18;
      }
    }
    else {
      *param_1 = *param_2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)((longlong)param_1 + 0xc) = *param_3;
      uVar1 = *(undefined4 *)(param_3 + 1);
      param_1[6] = local_58;
      param_1[7] = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      param_1[8] = local_48;
      param_1[9] = uStack_40;
      param_1[10] = local_38;
      param_1[0xb] = uStack_30;
      param_1[0xc] = local_28;
      param_1[0xd] = uStack_20;
      param_1[0xe] = local_18;
    }
  }
  *(undefined1 *)(param_1 + 0x29) = 1;
  return;
}



// FUNCTION 1438164c0 FUN_1438164c0 body=355 status=ok
// SIG undefined FUN_1438164c0(void)

void FUN_1438164c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
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
  
  FUN_1438194f0(param_1 + 0x18,param_2,param_3,&local_68);
  if (*(char *)(param_1 + 0x25) == '\0') {
    *param_1 = local_68;
    param_1[1] = uStack_60;
    *(undefined1 *)(param_1 + 0x25) = 1;
    param_1[0xc] = local_68;
    param_1[0xd] = uStack_60;
    param_1[2] = local_58;
    param_1[3] = uStack_50;
    param_1[0xe] = local_58;
    param_1[0xf] = uStack_50;
    param_1[4] = local_48;
    param_1[5] = uStack_40;
    param_1[0x10] = local_48;
    param_1[0x11] = uStack_40;
    param_1[6] = local_38;
    param_1[7] = uStack_30;
    param_1[0x12] = local_38;
    param_1[0x13] = uStack_30;
    param_1[8] = local_28;
    param_1[9] = uStack_20;
    param_1[0x14] = local_28;
    param_1[0x15] = uStack_20;
    param_1[10] = local_18;
    param_1[0xb] = uStack_10;
    param_1[0x16] = local_18;
    param_1[0x17] = uStack_10;
    return;
  }
  cVar1 = FUN_14380b810(&local_68,param_1);
  if (cVar1 != '\0') {
    *param_1 = local_68;
    param_1[1] = uStack_60;
    *(undefined1 *)(param_1 + 0x25) = 1;
    param_1[2] = local_58;
    param_1[3] = uStack_50;
    param_1[4] = local_48;
    param_1[5] = uStack_40;
    param_1[6] = local_38;
    param_1[7] = uStack_30;
    param_1[8] = local_28;
    param_1[9] = uStack_20;
    param_1[10] = local_18;
    param_1[0xb] = uStack_10;
    return;
  }
  cVar1 = FUN_14380b810(param_1 + 0xc,&local_68);
  *(undefined1 *)(param_1 + 0x25) = 1;
  if (cVar1 != '\0') {
    param_1[0xc] = local_68;
    param_1[0xd] = uStack_60;
    param_1[0xe] = local_58;
    param_1[0xf] = uStack_50;
    param_1[0x10] = local_48;
    param_1[0x11] = uStack_40;
    param_1[0x12] = local_38;
    param_1[0x13] = uStack_30;
    param_1[0x14] = local_28;
    param_1[0x15] = uStack_20;
    param_1[0x16] = local_18;
    param_1[0x17] = uStack_10;
  }
  return;
}



// FUNCTION 143816630 FUN_143816630 body=399 status=ok
// SIG undefined FUN_143816630(void)

undefined8 FUN_143816630(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  FUN_143819010(param_1,param_1 + 0x28,param_2,param_3,&local_58);
  plVar2 = *(longlong **)(param_1 + 0x50);
  puVar7 = (undefined8 *)((longlong)(int)plVar2[1] * 0xc0 + *plVar2);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  *puVar7 = local_58;
  puVar7[1] = uStack_50;
  puVar7[2] = local_48;
  puVar7[3] = uStack_40;
  puVar7[4] = local_38;
  puVar7[5] = uStack_30;
  puVar7[6] = local_28;
  puVar7[7] = uStack_20;
  puVar7[8] = local_18;
  puVar5 = (undefined8 *)FUN_1438160e0(local_88,param_1,param_4);
  uVar4 = puVar5[1];
  puVar7[0x12] = *puVar5;
  puVar7[0x13] = uVar4;
  uVar4 = puVar5[3];
  puVar7[0x14] = puVar5[2];
  puVar7[0x15] = uVar4;
  uVar4 = puVar5[5];
  puVar7[0x16] = puVar5[4];
  puVar7[0x17] = uVar4;
  iVar1 = (int)(*(longlong **)(param_1 + 0x50))[1];
  if (iVar1 == 1) {
    *(undefined8 *)(param_1 + 0x60) = local_58;
    *(undefined8 *)(param_1 + 0x68) = uStack_50;
    *(undefined8 *)(param_1 + 0x70) = local_48;
    *(undefined8 *)(param_1 + 0x78) = uStack_40;
    *(undefined8 *)(param_1 + 0x80) = local_38;
    *(undefined8 *)(param_1 + 0x88) = uStack_30;
    *(undefined8 *)(param_1 + 0x90) = local_28;
    *(undefined8 *)(param_1 + 0x98) = uStack_20;
    *(undefined8 *)(param_1 + 0xa0) = local_18;
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x50);
    lVar6 = (longlong)(iVar1 + -2) * 0xc0;
    puVar5 = (undefined8 *)(lVar6 + 0x48 + lVar3);
    *puVar5 = local_58;
    puVar5[1] = uStack_50;
    puVar5 = (undefined8 *)(lVar6 + 0x58 + lVar3);
    *puVar5 = local_48;
    puVar5[1] = uStack_40;
    puVar5 = (undefined8 *)(lVar6 + 0x68 + lVar3);
    *puVar5 = local_38;
    puVar5[1] = uStack_30;
    puVar5 = (undefined8 *)(lVar6 + 0x78 + lVar3);
    *puVar5 = local_28;
    puVar5[1] = uStack_20;
    *(undefined8 *)(lVar6 + 0x88 + lVar3) = local_18;
  }
  plVar2 = *(longlong **)(param_1 + 0x58);
  uVar4 = param_4[1];
  lVar6 = (longlong)(int)plVar2[1];
  lVar3 = *plVar2;
  puVar5 = (undefined8 *)(lVar3 + lVar6 * 0x28);
  *puVar5 = *param_4;
  puVar5[1] = uVar4;
  uVar4 = param_4[3];
  puVar5 = (undefined8 *)(lVar3 + 0x10 + lVar6 * 0x28);
  *puVar5 = param_4[2];
  puVar5[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar6 * 0x28) = param_4[4];
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1438167c0 FUN_1438167c0 body=354 status=ok
// SIG undefined FUN_1438167c0(void)

undefined8 FUN_1438167c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [64];
  
  FUN_1438194f0(param_1,param_2,param_3,&local_a8);
  plVar2 = *(longlong **)(param_1 + 0x28);
  puVar7 = (undefined8 *)((longlong)(int)plVar2[1] * 0xf8 + *plVar2);
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  *puVar7 = local_a8;
  puVar7[1] = uStack_a0;
  puVar7[2] = local_98;
  puVar7[3] = uStack_90;
  puVar7[4] = local_88;
  puVar7[5] = uStack_80;
  puVar7[6] = local_78;
  puVar7[7] = uStack_70;
  puVar7[8] = local_68;
  puVar7[9] = uStack_60;
  *(undefined4 *)(puVar7 + 10) = local_58;
  *(undefined4 *)((longlong)puVar7 + 0x54) = uStack_54;
  *(undefined4 *)(puVar7 + 0xb) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x5c) = uStack_4c;
  puVar4 = (undefined8 *)FUN_143815ec0(local_48,param_4,param_1);
  uVar3 = puVar4[1];
  puVar7[0x18] = *puVar4;
  puVar7[0x19] = uVar3;
  uVar3 = puVar4[3];
  puVar7[0x1a] = puVar4[2];
  puVar7[0x1b] = uVar3;
  uVar3 = puVar4[5];
  puVar7[0x1c] = puVar4[4];
  puVar7[0x1d] = uVar3;
  puVar7[0x1e] = puVar4[6];
  iVar1 = (int)(*(longlong **)(param_1 + 0x28))[1];
  if (iVar1 == 1) {
    *(undefined8 *)(param_1 + 0x30) = local_a8;
    *(undefined8 *)(param_1 + 0x38) = uStack_a0;
    *(undefined8 *)(param_1 + 0x40) = local_98;
    *(undefined8 *)(param_1 + 0x48) = uStack_90;
    *(undefined8 *)(param_1 + 0x50) = local_88;
    *(undefined8 *)(param_1 + 0x58) = uStack_80;
    *(undefined8 *)(param_1 + 0x60) = local_78;
    *(undefined8 *)(param_1 + 0x68) = uStack_70;
    *(undefined8 *)(param_1 + 0x70) = local_68;
    *(undefined8 *)(param_1 + 0x78) = uStack_60;
    *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(param_1 + 0x88) = CONCAT44(uStack_4c,uStack_50);
    lVar5 = 0;
  }
  else {
    lVar5 = **(longlong **)(param_1 + 0x28);
    lVar6 = (longlong)(iVar1 + -2) * 0xf8;
    puVar4 = (undefined8 *)(lVar6 + 0x60 + lVar5);
    *puVar4 = local_a8;
    puVar4[1] = uStack_a0;
    puVar4 = (undefined8 *)(lVar6 + 0x70 + lVar5);
    *puVar4 = local_98;
    puVar4[1] = uStack_90;
    puVar4 = (undefined8 *)(lVar6 + 0x80 + lVar5);
    *puVar4 = local_88;
    puVar4[1] = uStack_80;
    puVar4 = (undefined8 *)(lVar6 + 0x90 + lVar5);
    *puVar4 = local_78;
    puVar4[1] = uStack_70;
    puVar4 = (undefined8 *)(lVar6 + 0xa0 + lVar5);
    *puVar4 = local_68;
    puVar4[1] = uStack_60;
    puVar4 = (undefined8 *)(lVar6 + 0xb0 + lVar5);
    *puVar4 = CONCAT44(uStack_54,local_58);
    puVar4[1] = CONCAT44(uStack_4c,uStack_50);
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}



// FUNCTION 143816930 FUN_143816930 body=959 status=ok
// SIG undefined FUN_143816930(void)

void FUN_143816930(longlong param_1,longlong *param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  byte bVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  undefined1 uVar16;
  bool bVar17;
  byte local_res10;
  longlong local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  undefined4 uStack_160;
  int iStack_15c;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70 [48];
  
  local_198 = (longlong)*(int *)(param_1 + 0x20) * param_2[2];
  auVar4 = SEXT816(param_2[2]) * SEXT816((longlong)*(int *)(param_1 + 0x20));
  uStack_190._0_4_ = auVar4._8_4_;
  uStack_190._4_4_ = auVar4._12_4_;
  uStack_160 = (undefined4)uStack_190;
  iStack_15c = uStack_190._4_4_;
  uStack_190 = auVar4._8_8_;
  local_168 = local_198;
  FUN_143806620(&local_168,param_2 + 3,&local_198);
  local_188 = (longlong)*(int *)(param_1 + 0x24) * param_2[2];
  uStack_180 = SUB168(SEXT816(param_2[2]) * SEXT816((longlong)*(int *)(param_1 + 0x24)),8);
  local_178 = local_188;
  lStack_170 = uStack_180;
  FUN_143806620(&local_178,param_2 + 3,&local_168);
  local_c8 = *(longlong *)(param_1 + 0x18);
  bVar6 = false;
  lVar11 = *(longlong *)(param_1 + 0x10);
  bVar5 = true;
  local_res10 = 1;
  if (lVar11 != local_c8) {
    lVar12 = lVar11 + 0x40;
    uVar16 = 1;
    local_188 = -(longlong)&local_108;
    local_d0 = -(longlong)&local_d8;
    do {
      lVar10 = local_188;
      lVar1 = uStack_190;
      local_178 = *param_2;
      lStack_170 = param_2[1];
      FUN_143808fb0(local_70,&local_178,lVar11);
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0;
      local_108 = 0;
      FUN_14380a920(&local_130,lVar12,local_198);
      FUN_14380a6e0(&uStack_128,lVar12,lVar1);
      if (lVar1 < 0) {
        lVar1 = *(longlong *)(lVar12 + 0x18);
        puVar8 = &local_120;
        plVar14 = &local_120;
        bVar17 = false;
        iVar9 = 2;
        do {
          uVar13 = lVar1 >> 0x3f;
          if (iVar9 + -2 < 4) {
            uVar13 = *(ulonglong *)(lVar10 + lVar12 + 0x18 + (longlong)puVar8);
          }
          uVar2 = (ulonglong)bVar17;
          uVar3 = *puVar8 - uVar13;
          bVar17 = *puVar8 < uVar13 || uVar3 < uVar2;
          *plVar14 = uVar3 - uVar2;
          iVar9 = iVar9 + 1;
          plVar14 = plVar14 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar9 < 6);
      }
      local_c0 = local_130;
      uStack_b8 = uStack_128;
      local_a0 = local_110;
      local_b0 = (undefined4)local_120;
      uStack_ac = local_120._4_4_;
      uStack_a8 = (undefined4)uStack_118;
      uStack_a4 = uStack_118._4_4_;
      FUN_143808cc0(local_70,&local_c0);
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      uVar15 = (uint)((((local_140 != 0 || local_148 != 0) || local_150 != 0) || local_158 != 0) ||
                     local_138 != 0) | (uint)(local_138 >> 0x3f);
      FUN_14380a920(&local_100,lVar12,local_168);
      iVar9 = iStack_15c;
      FUN_14380a6e0(&uStack_f8,lVar12,CONCAT44(iStack_15c,uStack_160));
      if (iVar9 < 0) {
        lVar1 = *(longlong *)(lVar12 + 0x18);
        puVar8 = &local_f0;
        plVar14 = &local_f0;
        bVar17 = false;
        lVar10 = local_d0 + lVar12;
        iVar9 = 2;
        do {
          uVar13 = lVar1 >> 0x3f;
          if (iVar9 + -2 < 4) {
            uVar13 = *(ulonglong *)(lVar10 + 0x18 + (longlong)puVar8);
          }
          uVar2 = (ulonglong)bVar17;
          uVar3 = *puVar8 - uVar13;
          bVar17 = *puVar8 < uVar13 || uVar3 < uVar2;
          *plVar14 = uVar3 - uVar2;
          iVar9 = iVar9 + 1;
          plVar14 = plVar14 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar9 < 6);
      }
      local_98 = local_100;
      uStack_90 = uStack_f8;
      local_78 = local_e0;
      local_88 = (undefined4)local_f0;
      uStack_84 = local_f0._4_4_;
      uStack_80 = (undefined4)uStack_e8;
      uStack_7c = uStack_e8._4_4_;
      FUN_143808cc0(local_70,&local_98,&local_158);
      bVar5 = (bool)(bVar5 & 0 < (int)uVar15);
      local_res10 = local_res10 & (byte)(local_138 >> 0x3f) >> 7;
      if ((uVar15 == 0) &&
         (-1 < local_138 &&
          ((((local_140 == 0 && local_148 == 0) && local_150 == 0) && local_158 == 0) &&
          local_138 == 0))) {
        bVar7 = 0;
      }
      else {
        bVar7 = 1;
      }
      bVar6 = (bool)(bVar6 | bVar7);
      lVar11 = lVar11 + 0x68;
      lVar12 = lVar12 + 0x68;
    } while (lVar11 != local_c8);
    if ((!bVar5) && (local_res10 == 0)) goto LAB_143816cc4;
  }
  uVar16 = 0;
LAB_143816cc4:
  *param_3 = uVar16;
  *(bool *)param_4 = !bVar6;
  return;
}



// FUNCTION 143816cf0 FUN_143816cf0 body=478 status=ok
// SIG undefined FUN_143816cf0(void)

char FUN_143816cf0(int *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48 [4];
  longlong local_28 [2];
  
  local_48[2] = (longlong)param_1[2] * param_2[2];
  local_48[3] = SUB168(SEXT816(param_2[2]) * SEXT816((longlong)param_1[2]),8);
  local_48[0] = (longlong)param_1[1] * param_2[1];
  local_48[1] = SUB168(SEXT816(param_2[1]) * SEXT816((longlong)param_1[1]),8);
  local_58 = (longlong)*param_1 * *param_2;
  uStack_50 = SUB168(SEXT816(*param_2) * SEXT816((longlong)*param_1),8);
  FUN_143806620(&local_58,local_48,local_28);
  FUN_143806620(local_28,local_48 + 2);
  bVar10 = false;
  plVar6 = local_28;
  lVar9 = 2;
  local_28[0] = *param_4;
  local_28[1] = param_4[1];
  lVar8 = 2;
  puVar5 = local_48;
  do {
    uVar2 = (ulonglong)bVar10;
    lVar1 = *plVar6;
    bVar10 = *plVar6 != 0 || (ulonglong)-lVar1 < uVar2;
    plVar6 = plVar6 + 1;
    *puVar5 = -lVar1 - uVar2;
    lVar8 = lVar8 + -1;
    puVar5 = puVar5 + 1;
  } while (lVar8 != 0);
  bVar7 = -(char)((longlong)uStack_50 >> 0x3f);
  bVar3 = -(char)((longlong)local_48[1] >> 0x3f);
  if ((((bVar7 ^ 1) & bVar3) != 0 || local_48[1] < uStack_50 && bVar3 == bVar7) ||
      ((local_48[1] <= uStack_50 && local_48[1] >= uStack_50) && local_48[0] < local_58) &&
      bVar3 == bVar7) {
    bVar10 = false;
    plVar6 = local_28;
    local_28[0] = *param_3;
    local_28[1] = param_3[1];
    puVar5 = local_48;
    do {
      uVar2 = (ulonglong)bVar10;
      lVar8 = *plVar6;
      bVar10 = *plVar6 != 0 || (ulonglong)-lVar8 < uVar2;
      plVar6 = plVar6 + 1;
      *puVar5 = -lVar8 - uVar2;
      lVar9 = lVar9 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar9 != 0);
    bVar3 = -(char)((longlong)local_48[1] >> 0x3f);
    cVar4 = ((((bVar7 ^ 1) & bVar3) != 0 || local_48[1] < uStack_50 && bVar3 == bVar7) ||
            ((local_48[1] <= uStack_50 && local_48[1] >= uStack_50) && local_48[0] < local_58) &&
            bVar3 == bVar7) + '\x01';
  }
  else {
    cVar4 = '\0';
  }
  return cVar4;
}



// FUNCTION 143816ed0 FUN_143816ed0 body=3505 status=ok
// SIG undefined FUN_143816ed0(void)

/* WARNING: Removing unreachable block (ram,0x000143817083) */
/* WARNING: Removing unreachable block (ram,0x000143817108) */

ulonglong FUN_143816ed0(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
                       longlong *param_5,undefined8 param_6,longlong *param_7)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong *plVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  undefined4 *puVar28;
  longlong lVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  bool bVar33;
  ulonglong local_2e8;
  undefined8 uStack_2e0;
  char local_2d8;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  ulonglong local_2a8;
  int local_2a0;
  ulonglong local_298;
  longlong lStack_290;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  ulonglong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  ulonglong local_238;
  int local_230;
  longlong local_228;
  longlong lStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined1 local_1d0 [40];
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined1 local_110 [40];
  longlong local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  
  local_270 = (int)param_5[1];
  iVar26 = local_270 + 5;
  uVar14 = FUN_143703a50();
  uVar16 = *(uint *)((longlong)param_5 + 0xc) & 0x3fffffff;
  if ((int)uVar16 < iVar26) {
    iVar13 = uVar16 * 2;
    if (iVar26 < iVar13) {
      iVar26 = iVar13;
    }
    FUN_14370c310(uVar14,param_5,iVar26);
  }
  lVar25 = CONCAT44(param_6._4_4_,(uint)param_6);
  iVar26 = *(int *)(lVar25 + 8) + 5;
  uVar14 = FUN_143703a50();
  uVar16 = *(uint *)(lVar25 + 0xc) & 0x3fffffff;
  if ((int)uVar16 < iVar26) {
    iVar13 = uVar16 * 2;
    if (iVar26 < iVar13) {
      iVar26 = iVar13;
    }
    FUN_14370c310(uVar14,lVar25,iVar26);
  }
  local_278 = (int)*param_4;
  local_274 = *(int *)((longlong)param_4 + 4);
  local_280 = (int)*param_3;
  local_27c = *(int *)((longlong)param_3 + 4);
  local_288 = (int)*param_2;
  local_284 = *(int *)((longlong)param_2 + 4);
  iVar26 = FUN_143815cb0(&local_288,&local_280,&local_278);
  if (iVar26 < 1) {
    if (iVar26 < 0) {
      uVar20 = *param_2;
      uVar17 = param_2[1];
      *param_2 = *param_3;
      *(int *)(param_2 + 1) = (int)param_3[1];
      *param_3 = uVar20;
      *(int *)(param_3 + 1) = (int)uVar17;
      local_2d8 = '\0';
    }
    else {
      local_2d8 = '\x01';
    }
  }
  else {
    local_2d8 = '\0';
  }
  uVar17 = CONCAT44(0,*(uint *)(param_1 + 0xc));
  uVar20 = *(ulonglong *)(param_1 + 0x20);
  puVar19 = &local_298;
  iVar13 = 0;
  local_2e8 = *(uint *)(param_1 + 0xc) * uVar20;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar20;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar17;
  puVar21 = &local_2e8;
  uStack_2e0 = SUB168(auVar5 * auVar7,8) - ((longlong)uVar20 >> 0x3f & uVar17);
  bVar33 = false;
  iVar26 = iVar13;
  do {
    uVar17 = *(ulonglong *)(((param_1 + 0x28) - (longlong)&local_2e8) + (longlong)puVar21);
    uVar18 = uStack_2e0 >> 0x3f;
    if (iVar26 < 2) {
      uVar18 = *puVar21;
    }
    uVar3 = (ulonglong)bVar33;
    uVar4 = uVar17 - uVar18;
    bVar33 = uVar17 < uVar18 || uVar4 < uVar3;
    *puVar19 = uVar4 - uVar3;
    lVar25 = lStack_290;
    uVar17 = local_298;
    iVar26 = iVar26 + 1;
    puVar19 = puVar19 + 1;
    puVar21 = puVar21 + 1;
  } while (iVar26 < 2);
  uVar18 = CONCAT44(0,*(uint *)(param_1 + 8));
  puVar19 = &local_298;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar20;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar18;
  bVar33 = false;
  local_2e8 = *(uint *)(param_1 + 8) * uVar20;
  uStack_2e0 = SUB168(auVar6 * auVar8,8) - ((longlong)uVar20 >> 0x3f & uVar18);
  puVar21 = &local_2e8;
  iVar26 = iVar13;
  do {
    uVar20 = *(ulonglong *)(((param_1 + 0x28) - (longlong)&local_2e8) + (longlong)puVar21);
    uVar18 = uStack_2e0 >> 0x3f;
    if (iVar26 < 2) {
      uVar18 = *puVar21;
    }
    uVar3 = (ulonglong)bVar33;
    uVar4 = uVar20 - uVar18;
    bVar33 = uVar20 < uVar18 || uVar4 < uVar3;
    *puVar19 = uVar4 - uVar3;
    iVar26 = iVar26 + 1;
    puVar19 = puVar19 + 1;
    puVar21 = puVar21 + 1;
  } while (iVar26 < 2);
  local_268 = *(ulonglong *)(param_1 + 0x10);
  uStack_260 = *(undefined8 *)(param_1 + 0x18);
  local_258 = *(undefined8 *)(param_1 + 0x20);
  local_2c8 = *param_2;
  uStack_2c0._0_4_ = (int)param_2[1];
  local_2e8 = uVar17;
  uStack_2e0 = lVar25;
  iVar26 = FUN_143816cf0(&local_2c8,&local_268,&local_298,&local_2e8);
  local_268 = *(ulonglong *)(param_1 + 0x10);
  uStack_260 = *(undefined8 *)(param_1 + 0x18);
  local_258 = *(undefined8 *)(param_1 + 0x20);
  local_2c8 = *param_3;
  uStack_2c0._0_4_ = (int)param_3[1];
  local_2e8 = uVar17;
  uStack_2e0 = lVar25;
  local_280 = iVar26;
  iVar12 = FUN_143816cf0(&local_2c8,&local_268,&local_298,&local_2e8);
  local_268 = *(ulonglong *)(param_1 + 0x10);
  uStack_260 = *(undefined8 *)(param_1 + 0x18);
  local_258 = *(undefined8 *)(param_1 + 0x20);
  local_2c8 = *param_4;
  local_2e8 = uVar17;
  uStack_2e0 = lVar25;
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,(int)param_4[1]);
  local_278 = iVar12;
  local_288 = FUN_143816cf0(&local_2c8,&local_268,&local_298,&local_2e8);
  if ((((iVar26 == 0) && (iVar12 == 0)) && (local_288 == 0)) && (*(char *)(param_1 + 0x38) != '\0'))
  {
    lVar23 = 2;
    local_2e8 = uVar17;
    uStack_2e0 = lVar25;
    lVar29 = 2;
    puVar19 = &local_2e8;
    bVar33 = false;
    puVar21 = &local_298;
    do {
      uVar18 = (ulonglong)bVar33;
      uVar20 = *puVar19;
      bVar33 = *puVar19 != 0 || -uVar20 < uVar18;
      puVar19 = puVar19 + 1;
      *puVar21 = -uVar20 - uVar18;
      lVar29 = lVar29 + -1;
      puVar21 = puVar21 + 1;
    } while (lVar29 != 0);
    local_2c8 = (longlong)(int)param_2[1] * *(longlong *)(param_1 + 0x20);
    uStack_2c0 = SUB168(SEXT816(*(longlong *)(param_1 + 0x20)) * SEXT816((longlong)(int)param_2[1]),
                        8);
    local_268 = (longlong)*(int *)((longlong)param_2 + 4) * *(longlong *)(param_1 + 0x18);
    uStack_260 = SUB168(SEXT816(*(longlong *)(param_1 + 0x18)) *
                        SEXT816((longlong)*(int *)((longlong)param_2 + 4)),8);
    local_2e8 = (longlong)(int)*param_2 * *(longlong *)(param_1 + 0x10);
    uStack_2e0 = SUB168(SEXT816(*(longlong *)(param_1 + 0x10)) * SEXT816((longlong)(int)*param_2),8)
    ;
    FUN_143806620(&local_2e8,&local_268,&local_2a8);
    FUN_143806620(&local_2a8,&local_2c8,&local_2e8);
    if (uStack_2e0 == lStack_290 && local_2e8 == local_298) {
      local_2e8 = uVar17;
      uStack_2e0 = lVar25;
      puVar19 = &local_2e8;
      bVar33 = false;
      lVar29 = 2;
      puVar21 = &local_298;
      do {
        uVar18 = (ulonglong)bVar33;
        uVar20 = *puVar19;
        bVar33 = *puVar19 != 0 || -uVar20 < uVar18;
        puVar19 = puVar19 + 1;
        *puVar21 = -uVar20 - uVar18;
        lVar29 = lVar29 + -1;
        puVar21 = puVar21 + 1;
      } while (lVar29 != 0);
      local_2c8 = (longlong)(int)param_3[1] * *(longlong *)(param_1 + 0x20);
      uStack_2c0 = SUB168(SEXT816(*(longlong *)(param_1 + 0x20)) *
                          SEXT816((longlong)(int)param_3[1]),8);
      local_268 = (longlong)*(int *)((longlong)param_3 + 4) * *(longlong *)(param_1 + 0x18);
      uStack_260 = SUB168(SEXT816(*(longlong *)(param_1 + 0x18)) *
                          SEXT816((longlong)*(int *)((longlong)param_3 + 4)),8);
      local_2e8 = (longlong)(int)*param_3 * *(longlong *)(param_1 + 0x10);
      uStack_2e0 = SUB168(SEXT816(*(longlong *)(param_1 + 0x10)) * SEXT816((longlong)(int)*param_3),
                          8);
      FUN_143806620(&local_2e8,&local_268,&local_2a8);
      FUN_143806620(&local_2a8,&local_2c8,&local_2e8);
      if (uStack_2e0 == lStack_290 && local_2e8 == local_298) {
        local_2e8 = uVar17;
        uStack_2e0 = lVar25;
        puVar19 = &local_2e8;
        bVar33 = false;
        puVar21 = &local_298;
        do {
          uVar17 = (ulonglong)bVar33;
          uVar20 = *puVar19;
          bVar33 = *puVar19 != 0 || -uVar20 < uVar17;
          puVar19 = puVar19 + 1;
          *puVar21 = -uVar20 - uVar17;
          lVar23 = lVar23 + -1;
          puVar21 = puVar21 + 1;
        } while (lVar23 != 0);
        local_2c8 = (longlong)(int)param_4[1] * *(longlong *)(param_1 + 0x20);
        uStack_2c0 = SUB168(SEXT816(*(longlong *)(param_1 + 0x20)) *
                            SEXT816((longlong)(int)param_4[1]),8);
        local_268 = (longlong)*(int *)((longlong)param_4 + 4) * *(longlong *)(param_1 + 0x18);
        uStack_260 = SUB168(SEXT816(*(longlong *)(param_1 + 0x18)) *
                            SEXT816((longlong)*(int *)((longlong)param_4 + 4)),8);
        local_2e8 = (longlong)(int)*param_4 * *(longlong *)(param_1 + 0x10);
        uStack_2e0 = SUB168(SEXT816(*(longlong *)(param_1 + 0x10)) *
                            SEXT816((longlong)(int)*param_4),8);
        FUN_143806620(&local_2e8,&local_268,&local_2a8);
        FUN_143806620(&local_2a8,&local_2c8,&local_2e8);
        if (uStack_2e0 == lStack_290 && local_2e8 == local_298) {
          local_280 = 1;
          local_278 = 1;
          local_288 = 1;
        }
      }
    }
  }
  iVar26 = *(int *)(param_1 + 0xc);
  iVar31 = (int)param_2[1] - iVar26;
  uVar20 = *param_2;
  uVar17 = *param_4;
  uVar18 = *param_2;
  iVar32 = (int)param_4[1] - iVar26;
  uVar3 = *param_3;
  iVar26 = (int)param_3[1] - iVar26;
  iVar12 = *(int *)(param_1 + 8);
  iVar22 = (int)param_2[1] - iVar12;
  uVar4 = *param_4;
  iVar24 = (int)param_4[1] - iVar12;
  uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
  iVar12 = (int)param_3[1] - iVar12;
  local_2c8 = uVar20;
  local_2a8 = uVar3;
  local_2a0 = iVar26;
  local_238 = uVar17;
  local_230 = iVar32;
  uStack_2c0._0_4_ = iVar31;
  uStack_2e0._0_4_ = (int)param_4[1];
  if (local_2d8 == '\0') {
    local_1f8 = *(undefined4 *)(param_1 + 0x40);
    uStack_1f4 = *(undefined4 *)(param_1 + 0x44);
    local_268 = *(ulonglong *)(param_1 + 0x40);
    uStack_1f0 = *(undefined4 *)(param_1 + 0x48);
    uStack_1ec = *(undefined4 *)(param_1 + 0x4c);
    local_248 = *(undefined4 *)(param_1 + 0x60);
    local_1e8 = *(undefined4 *)(param_1 + 0x50);
    uStack_1e4 = *(undefined4 *)(param_1 + 0x54);
    local_258 = *(undefined8 *)(param_1 + 0x50);
    uStack_250 = *(undefined4 *)(param_1 + 0x58);
    uStack_24c = *(undefined4 *)(param_1 + 0x5c);
    uStack_1e0 = uStack_250;
    uStack_1dc = uStack_24c;
    local_1d8 = local_248;
    uStack_260._0_4_ = uStack_1f0;
    uStack_260._4_4_ = uStack_1ec;
    FUN_1438068b0(local_1d0,&local_268);
    local_1a8 = param_5;
    local_1a0 = CONCAT44(param_6._4_4_,(uint)param_6);
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,iVar24);
    local_2e8 = uVar20;
    local_2c8 = uVar4;
    local_2a8 = uVar17;
    local_2a0 = iVar32;
    local_298 = uVar18;
    local_268 = uVar3;
    local_238 = uVar3;
    local_230 = iVar12;
    uStack_2e0._0_4_ = iVar31;
    lStack_290._0_4_ = iVar22;
    uStack_260._0_4_ = iVar26;
    bVar10 = FUN_14380e250(&local_2e8,&local_298,local_280,&local_268,&local_238,local_278,
                           &local_2a8,&local_2c8,local_288,&local_1f8,&param_6);
    if ((int)local_1a8[1] != 0) {
      lVar25 = *local_1a8;
      lVar23 = (longlong)((int)local_1a8[1] + -1) * 0xc0;
      puVar2 = (undefined8 *)(lVar23 + 0x48 + lVar25);
      *puVar2 = local_198;
      puVar2[1] = uStack_190;
      puVar2 = (undefined8 *)(lVar23 + 0x58 + lVar25);
      *puVar2 = local_188;
      puVar2[1] = uStack_180;
      puVar2 = (undefined8 *)(lVar23 + 0x68 + lVar25);
      *puVar2 = local_178;
      puVar2[1] = uStack_170;
      puVar2 = (undefined8 *)(lVar23 + 0x78 + lVar25);
      *puVar2 = local_168;
      puVar2[1] = uStack_160;
      *(undefined8 *)(lVar23 + 0x88 + lVar25) = local_158;
    }
    if (bVar10 != 0) {
      local_2e8 = *param_4;
      uStack_2e0 = CONCAT44(uStack_2e0._4_4_,(int)param_4[1]);
      local_298 = *param_3;
      lStack_290 = CONCAT44(lStack_290._4_4_,(int)param_3[1]);
      local_268 = *param_2;
      uStack_260 = CONCAT44(uStack_260._4_4_,(int)param_2[1]);
      cVar11 = FUN_14381c110(&local_268,&local_298,&local_2e8,*(undefined1 *)(param_1 + 100));
      plVar9 = param_7;
      iVar26 = (int)param_7[2];
      lVar25 = (longlong)iVar26;
      iVar12 = (iVar26 - local_270) + (int)param_5[1];
      *(int *)(param_7 + 2) = iVar12;
      iVar12 = iVar12 + 0x1f >> 5;
      uVar14 = FUN_143703a50();
      uVar16 = *(uint *)((longlong)plVar9 + 0xc) & 0x3fffffff;
      if ((int)uVar16 < iVar12) {
        iVar24 = uVar16 * 2;
        iVar22 = iVar12;
        if (iVar12 < iVar24) {
          iVar22 = iVar24;
        }
        FUN_14370c310(uVar14,plVar9,iVar22,4);
      }
      *(int *)(plVar9 + 1) = iVar12;
      if (0 < (int)param_5[1]) {
        iVar12 = (int)param_5[1] + iVar26;
        iVar22 = iVar12 >> 5;
        iVar24 = iVar26 >> 5;
        uVar30 = -1 << ((byte)iVar26 & 0x1f);
        lVar23 = *plVar9;
        uVar16 = -1 << ((byte)iVar12 & 0x1f);
        uVar27 = ~uVar16;
        if (iVar24 == iVar22) {
          uVar27 = uVar27 & uVar30;
          if (uVar27 != 0) {
            puVar1 = (uint *)(lVar23 + (longlong)iVar24 * 4);
            *puVar1 = ~uVar27 & *puVar1 | uVar27;
          }
        }
        else {
          puVar1 = (uint *)(lVar23 + (longlong)iVar24 * 4);
          *puVar1 = ~uVar30 & *puVar1 | uVar30;
          if (uVar27 != 0) {
            puVar1 = (uint *)(lVar23 + (longlong)iVar22 * 4);
            *puVar1 = uVar16 & *puVar1 | uVar27;
          }
          if (-1 < (iVar22 - iVar24) + -2) {
            puVar28 = (undefined4 *)(lVar23 + (longlong)(iVar24 + 1) * 4);
            for (uVar20 = (ulonglong)((iVar22 - iVar24) - 1); uVar20 != 0; uVar20 = uVar20 - 1) {
              *puVar28 = 0xffffffff;
              puVar28 = puVar28 + 1;
            }
          }
        }
      }
      if ((cVar11 != '\0') && (lVar23 = param_5[1], 0 < (int)lVar23)) {
        uVar16 = 1;
        do {
          if (((uint)param_6 & uVar16) == 0) {
            puVar1 = (uint *)(*plVar9 + (lVar25 >> 5) * 4);
            *puVar1 = *puVar1 & ~(1 << ((byte)iVar26 + (char)iVar13 & 0x1f));
          }
          iVar13 = iVar13 + 1;
          uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
          lVar25 = lVar25 + 1;
        } while (iVar13 < (int)lVar23);
      }
    }
    goto LAB_143817c47;
  }
  uVar14 = FUN_143806850(&local_268,&local_2c8,&local_2a8,&local_238);
  uVar15 = FUN_1438068b0(&local_228,uVar14);
  if (((local_228 == 0) && (lStack_220 == 0)) && (CONCAT44(uStack_214,local_218) == 0)) {
    return uVar15 & 0xffffffffffffff00;
  }
  local_138 = *(undefined4 *)(param_1 + 0x40);
  uStack_134 = *(undefined4 *)(param_1 + 0x44);
  uStack_130 = *(undefined4 *)(param_1 + 0x48);
  uStack_12c = *(undefined4 *)(param_1 + 0x4c);
  local_118 = *(undefined4 *)(param_1 + 0x60);
  local_128 = *(undefined4 *)(param_1 + 0x50);
  uStack_124 = *(undefined4 *)(param_1 + 0x54);
  uStack_120 = *(undefined4 *)(param_1 + 0x58);
  uStack_11c = *(undefined4 *)(param_1 + 0x5c);
  FUN_1438068b0(local_110);
  local_c0 = param_5;
  local_b8 = CONCAT44(param_6._4_4_,(uint)param_6);
  local_e8 = local_228;
  lStack_e0 = lStack_220;
  local_c8 = local_208;
  local_d8 = local_218;
  uStack_d4 = uStack_214;
  uStack_d0 = uStack_210;
  uStack_cc = uStack_20c;
  local_b0 = 0;
  if (local_280 == 1) {
    local_2c8 = uVar18;
    local_2a8 = uVar20;
    local_2a0 = iVar31;
    uStack_2c0._0_4_ = iVar22;
    FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
  }
  iVar13 = local_278;
  if (local_278 == 1) {
    local_2c8 = uVar3;
    local_2a8 = uVar3;
    local_2a0 = iVar26;
    uStack_2c0._0_4_ = iVar12;
    FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
  }
  if (local_288 == 1) {
    local_2c8 = uVar4;
    local_2a8 = uVar17;
    local_2a0 = iVar32;
    uStack_2c0._0_4_ = iVar24;
    FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
  }
  if (local_280 == 2) {
    if (iVar13 != 2) {
LAB_143817709:
      local_2c8 = uVar3;
      local_2a8 = uVar18;
      local_2a0 = iVar22;
      uStack_2c0._0_4_ = iVar12;
      FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
      if (iVar13 != 2) goto LAB_14381773c;
    }
    if (local_288 != 2) {
LAB_143817742:
      local_2c8 = uVar4;
      local_2a8 = uVar3;
      local_2a0 = iVar12;
      uStack_2c0._0_4_ = iVar24;
      FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
      if (local_288 != 2) goto LAB_1438177ac;
    }
    iVar12 = local_288;
    if (local_280 != 2) {
LAB_1438177b2:
      iVar12 = local_288;
      local_2c8 = uVar18;
      local_2a8 = uVar4;
      local_2a0 = iVar24;
      uStack_2c0._0_4_ = iVar22;
      FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
      goto LAB_1438177d5;
    }
LAB_143817775:
    iVar22 = local_280;
    if (iVar13 == 0) {
LAB_14381777a:
      iVar22 = local_280;
      local_2c8 = uVar3;
      local_2a8 = uVar20;
      local_2a0 = iVar31;
      uStack_2c0._0_4_ = iVar26;
      FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
      if (iVar13 == 0) goto LAB_1438177a3;
    }
    bVar33 = iVar12 == 0;
    iVar12 = 0;
    if (bVar33) {
LAB_1438177e7:
      local_2c8 = uVar17;
      local_2a8 = uVar3;
      local_2a0 = iVar26;
      uStack_2c0._0_4_ = iVar32;
      FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
      if (iVar12 == 0) goto LAB_14381780f;
    }
    if (iVar22 == 0) {
LAB_143817819:
      local_2c8 = uVar20;
      local_2a8 = uVar17;
      local_2a0 = iVar32;
      uStack_2c0._0_4_ = iVar31;
      FUN_1438162e0(&local_1f8,&local_2a8,&local_2c8);
    }
  }
  else {
    if (iVar13 == 2) goto LAB_143817709;
LAB_14381773c:
    if (local_288 == 2) goto LAB_143817742;
LAB_1438177ac:
    iVar12 = local_288;
    if (local_280 == 2) goto LAB_1438177b2;
LAB_1438177d5:
    if (local_280 != 0) goto LAB_143817775;
    iVar22 = local_280;
    if (iVar13 != 0) goto LAB_14381777a;
LAB_1438177a3:
    if (iVar12 != 0) goto LAB_1438177e7;
LAB_14381780f:
    if (iVar22 != 0) goto LAB_143817819;
  }
  bVar10 = FUN_143818620(&local_1f8);
  iVar13 = local_270;
  plVar9 = param_7;
  iVar26 = (int)param_7[2];
  iVar12 = (iVar26 - local_270) + (int)param_5[1];
  *(int *)(param_7 + 2) = iVar12;
  iVar12 = iVar12 + 0x1f >> 5;
  uVar14 = FUN_143703a50();
  uVar16 = *(uint *)((longlong)plVar9 + 0xc) & 0x3fffffff;
  if ((int)uVar16 < iVar12) {
    iVar24 = uVar16 * 2;
    iVar22 = iVar12;
    if (iVar12 < iVar24) {
      iVar22 = iVar24;
    }
    FUN_14370c310(uVar14,plVar9,iVar22,4);
  }
  *(int *)(plVar9 + 1) = iVar12;
  iVar13 = (int)param_5[1] - iVar13;
  if (0 < iVar13) {
    lVar25 = *plVar9;
    iVar13 = iVar13 + iVar26;
    iVar22 = iVar26 >> 5;
    iVar12 = iVar13 >> 5;
    uVar30 = -1 << ((byte)iVar26 & 0x1f);
    uVar16 = -1 << ((byte)iVar13 & 0x1f);
    uVar27 = ~uVar16;
    if (iVar22 == iVar12) {
      uVar27 = uVar27 & uVar30;
      if (uVar27 != 0) {
        puVar1 = (uint *)(lVar25 + (longlong)iVar22 * 4);
        *puVar1 = ~uVar27 & *puVar1 | uVar27;
      }
    }
    else {
      puVar1 = (uint *)(lVar25 + (longlong)iVar22 * 4);
      *puVar1 = ~uVar30 & *puVar1 | uVar30;
      if (uVar27 != 0) {
        puVar1 = (uint *)(lVar25 + (longlong)iVar12 * 4);
        *puVar1 = uVar16 & *puVar1 | uVar27;
      }
      if (-1 < (iVar12 - iVar22) + -2) {
        puVar28 = (undefined4 *)(lVar25 + (longlong)(iVar22 + 1) * 4);
        for (uVar20 = (ulonglong)((iVar12 - iVar22) - 1); uVar20 != 0; uVar20 = uVar20 - 1) {
          *puVar28 = 0xffffffff;
          puVar28 = puVar28 + 1;
        }
      }
    }
  }
LAB_143817c47:
  return (ulonglong)bVar10;
}



// FUNCTION 143817c90 FUN_143817c90 body=2445 status=ok
// SIG undefined FUN_143817c90(void)

/* WARNING: Removing unreachable block (ram,0x000143817e94) */
/* WARNING: Removing unreachable block (ram,0x000143817f20) */

ulonglong FUN_143817c90(longlong param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
                       ulonglong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  ulonglong *puVar8;
  uint uVar9;
  char cVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong *puVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  bool bVar30;
  ulonglong *local_res10;
  uint local_res18;
  uint local_res1c;
  ulonglong *local_res20;
  ulonglong local_328;
  uint local_320;
  ulonglong local_318;
  uint local_310;
  int local_308;
  int local_304;
  undefined8 local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  ulonglong local_2d8;
  undefined8 uStack_2d0;
  uint local_2c8;
  uint local_2c4;
  ulonglong local_2b8;
  uint local_2b0;
  ulonglong local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  ulonglong *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [192];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  longlong local_110;
  longlong lStack_108;
  ulonglong local_100;
  longlong lStack_f8;
  ulonglong local_f0;
  int iStack_e8;
  int iStack_e4;
  longlong local_e0;
  ulonglong *local_d8;
  undefined1 local_d0;
  
  iVar22 = (int)param_5[1] + 5;
  local_res10 = param_2;
  local_res20 = param_4;
  uVar11 = FUN_143703a50();
  uVar16 = *(uint *)((longlong)param_5 + 0xc) & 0x3fffffff;
  if ((int)uVar16 < iVar22) {
    iVar26 = uVar16 * 2;
    if (iVar22 < iVar26) {
      iVar22 = iVar26;
    }
    FUN_14370c310(uVar11,param_5,iVar22);
  }
  local_2c8 = (uint)*param_2;
  uVar15 = *param_4;
  uVar16 = *(uint *)((longlong)param_4 + 4);
  uVar12 = *param_3;
  uVar24 = *(uint *)((longlong)param_3 + 4);
  local_2b8 = *param_3;
  local_2c4 = *(uint *)((longlong)param_2 + 4);
  local_res18 = (uint)uVar15;
  local_res1c = uVar16;
  iVar22 = FUN_143815cb0(&local_2c8,&local_2b8,&local_res18);
  puVar8 = local_res10;
  if (iVar22 < 1) {
    if (iVar22 < 0) {
      uVar15 = *param_2;
      uVar12 = param_2[1];
      *param_2 = *param_3;
      *(uint *)(param_2 + 1) = (uint)param_3[1];
      *param_3 = uVar15;
      *(uint *)(param_3 + 1) = (uint)uVar12;
      local_res18 = (uint)local_res18._1_3_ << 8;
    }
    else {
      lVar19 = (longlong)(int)((uint)local_res20[1] - (uint)param_2[1]);
      lVar21 = (longlong)(int)((uint)param_3[1] - (uint)param_2[1]);
      local_res18 = CONCAT31(local_res18._1_3_,1);
      if (((int)(uVar24 - *(uint *)((longlong)param_2 + 4)) * lVar19 -
           (int)(uVar16 - *(uint *)((longlong)param_2 + 4)) * lVar21 == 0) &&
         (uVar12 = (int)((uint)uVar12 - (uint)*param_2) * lVar19,
         (int)((uint)uVar15 - (uint)*param_2) * lVar21 - uVar12 == 0)) {
        return uVar12 & 0xffffffffffffff00;
      }
    }
  }
  else {
    local_res18 = local_res18 & 0xffffff00;
  }
  uVar12 = CONCAT44(0,*(uint *)(param_1 + 0xc));
  uVar15 = *(ulonglong *)(param_1 + 0x20);
  puVar17 = &local_2d8;
  iVar26 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar15;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar12;
  lStack_2f0 = SUB168(auVar3 * auVar5,8) - ((longlong)uVar15 >> 0x3f & uVar12);
  bVar30 = false;
  local_2f8 = *(uint *)(param_1 + 0xc) * uVar15;
  iVar22 = 0;
  puVar20 = &local_2f8;
  do {
    uVar12 = *(ulonglong *)(((param_1 + 0x28) - (longlong)&local_2f8) + (longlong)puVar20);
    uVar25 = lStack_2f0 >> 0x3f;
    if (iVar22 < 2) {
      uVar25 = *puVar20;
    }
    uVar1 = (ulonglong)bVar30;
    uVar2 = uVar12 - uVar25;
    bVar30 = uVar12 < uVar25 || uVar2 < uVar1;
    *puVar17 = uVar2 - uVar1;
    uVar11 = uStack_2d0;
    iVar22 = iVar22 + 1;
    puVar17 = puVar17 + 1;
    puVar20 = puVar20 + 1;
  } while (iVar22 < 2);
  uVar12 = CONCAT44(0,*(uint *)(param_1 + 8));
  bVar30 = false;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  local_2f8 = *(uint *)(param_1 + 8) * uVar15;
  puVar17 = &local_2f8;
  puVar20 = &local_2d8;
  lStack_2f0 = SUB168(auVar4 * auVar6,8) - ((longlong)uVar15 >> 0x3f & uVar12);
  do {
    uVar15 = *(ulonglong *)(((param_1 + 0x28) - (longlong)&local_2f8) + (longlong)puVar17);
    uVar12 = lStack_2f0 >> 0x3f;
    if (iVar26 < 2) {
      uVar12 = *puVar17;
    }
    uVar25 = (ulonglong)bVar30;
    uVar1 = uVar15 - uVar12;
    bVar30 = uVar15 < uVar12 || uVar1 < uVar25;
    *puVar20 = uVar1 - uVar25;
    iVar26 = iVar26 + 1;
    puVar20 = puVar20 + 1;
    puVar17 = puVar17 + 1;
  } while (iVar26 < 2);
  local_2a8 = *(ulonglong *)(param_1 + 0x10);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x18);
  local_320 = (uint)local_res10[1];
  local_298 = *(undefined8 *)(param_1 + 0x20);
  local_328 = *local_res10;
  local_2f8 = local_2d8;
  lStack_2f0 = uVar11;
  local_308 = FUN_143816cf0(&local_328,&local_2a8,&local_2d8,&local_2f8);
  local_2a8 = *(ulonglong *)(param_1 + 0x10);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x18);
  local_298 = *(undefined8 *)(param_1 + 0x20);
  local_320 = (uint)param_3[1];
  local_328 = *param_3;
  local_2f8 = local_2d8;
  lStack_2f0 = uVar11;
  local_2c8 = FUN_143816cf0(&local_328,&local_2a8,&local_2d8,&local_2f8);
  local_2a8 = *(ulonglong *)(param_1 + 0x10);
  uStack_2a0 = *(undefined8 *)(param_1 + 0x18);
  local_298 = *(undefined8 *)(param_1 + 0x20);
  local_2f8 = local_2d8;
  lStack_2f0 = uVar11;
  local_328 = *local_res20;
  local_320 = (uint)local_res20[1];
  local_304 = FUN_143816cf0(&local_328,&local_2a8,&local_2d8,&local_2f8);
  uVar15 = *puVar8;
  uVar16 = (uint)puVar8[1];
  uVar12 = *param_3;
  uVar25 = *local_res20;
  uVar1 = *local_res10;
  iVar22 = *(int *)(param_1 + 0xc);
  uVar29 = uVar16 - iVar22;
  uVar24 = (uint)local_res20[1];
  uVar27 = (uint)param_3[1] - iVar22;
  uVar28 = uVar24 - iVar22;
  iVar22 = *(int *)(param_1 + 8);
  uVar16 = uVar16 - iVar22;
  uVar7 = (undefined4)((ulonglong)lStack_2f0 >> 0x20);
  uVar23 = (uint)param_3[1] - iVar22;
  lStack_2f0 = CONCAT44(uVar7,uVar24);
  uVar24 = uVar24 - iVar22;
  if ((char)local_res18 == '\0') {
    local_288 = *(undefined8 *)(param_1 + 0x10);
    uStack_280 = *(undefined8 *)(param_1 + 0x18);
    local_278 = *(undefined4 *)(param_1 + 0x20);
    uStack_274 = *(undefined4 *)(param_1 + 0x24);
    uStack_270 = *(undefined4 *)(param_1 + 0x28);
    uStack_26c = *(undefined4 *)(param_1 + 0x2c);
    local_260 = param_5;
    local_268 = *(undefined8 *)(param_1 + 0x30);
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar27);
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar16);
    lStack_2f0 = CONCAT44(uVar7,uVar29);
    local_328 = uVar25;
    local_320 = uVar24;
    local_318 = uVar25;
    local_310 = uVar28;
    local_2f8 = uVar15;
    local_2d8 = uVar1;
    local_2b8 = uVar12;
    local_2b0 = uVar23;
    local_2a8 = uVar12;
    FUN_143811f80(&local_2f8,&local_2d8,local_308,&local_2a8,&local_2b8,local_2c8,&local_318,
                  &local_328,local_304,&local_288,&local_res20);
    uVar16 = (uint)local_260[1];
    uVar15 = (ulonglong)uVar16;
    if (uVar16 != 0) {
      uVar15 = *local_260;
      lVar19 = (longlong)(int)(uVar16 - 1) * 0xf8;
      puVar13 = (undefined8 *)(lVar19 + 0x60 + uVar15);
      *puVar13 = local_258;
      puVar13[1] = uStack_250;
      puVar13 = (undefined8 *)(lVar19 + 0x70 + uVar15);
      *puVar13 = local_248;
      puVar13[1] = uStack_240;
      puVar13 = (undefined8 *)(lVar19 + 0x80 + uVar15);
      *puVar13 = local_238;
      puVar13[1] = uStack_230;
      puVar13 = (undefined8 *)(lVar19 + 0x90 + uVar15);
      *puVar13 = local_228;
      puVar13[1] = uStack_220;
      puVar13 = (undefined8 *)(lVar19 + 0xa0 + uVar15);
      *puVar13 = local_218;
      puVar13[1] = uStack_210;
      puVar13 = (undefined8 *)(lVar19 + 0xb0 + uVar15);
      *puVar13 = local_208;
      puVar13[1] = uStack_200;
    }
    return CONCAT71((int7)(uVar15 >> 8),1);
  }
  local_res18 = (uint)*param_3;
  local_318 = *param_3;
  uVar2 = *local_res10;
  local_2b8 = CONCAT44(local_2b8._4_4_,*(uint *)((longlong)param_3 + 4));
  local_328 = *local_res10;
  local_res10 = (ulonglong *)CONCAT44(local_res10._4_4_,*(uint *)((longlong)local_res10 + 4));
  cVar10 = FUN_143807f00(&local_328,&local_318);
  if (cVar10 == '\0') {
    local_res1c = (uint)local_2b8;
  }
  else {
    local_res18 = (uint)*local_res20;
    local_res1c = *(uint *)((longlong)local_res20 + 4);
  }
  local_328 = CONCAT44((int)local_res10,(uint)uVar2);
  FUN_143805b00(&local_res20,&local_res18,&local_328);
  cVar10 = FUN_14380be90(&local_res20);
  if (cVar10 != '\0') {
    puVar13 = (undefined8 *)FUN_143808950(&local_res18,&local_res20);
    local_res20 = (ulonglong *)*puVar13;
  }
  iVar22 = (int)((ulonglong)local_res20 >> 0x20);
  lVar21 = (longlong)-iVar22;
  uVar18 = (ulonglong)(int)local_res20;
  lVar19 = (longlong)uVar18 >> 0x3f;
  local_res1c = local_res10._0_4_;
  local_res20 = (ulonglong *)CONCAT44((int)local_res20,-iVar22);
  local_res18 = (uint)uVar2;
  local_2f8 = uVar18;
  lStack_2f0 = lVar19;
  plVar14 = (longlong *)FUN_143808d40(&local_res10,&local_res20,&local_res18);
  local_d0 = 0;
  local_2f8 = -*plVar14;
  local_2e8 = (longlong)local_2f8 >> 0x3f;
  local_138 = *(undefined8 *)(param_1 + 0x10);
  uStack_130 = *(undefined8 *)(param_1 + 0x18);
  local_128 = *(undefined4 *)(param_1 + 0x20);
  uStack_124 = *(undefined4 *)(param_1 + 0x24);
  uStack_120 = *(undefined4 *)(param_1 + 0x28);
  uStack_11c = *(undefined4 *)(param_1 + 0x2c);
  lStack_2f0._0_4_ = (int)((longlong)local_2f8 >> 0x3f);
  local_118 = *(undefined8 *)(param_1 + 0x30);
  local_d8 = param_5;
  iStack_e8 = (int)lStack_2f0;
  iStack_e4 = (int)lStack_2f0;
  lStack_2f0 = local_2e8;
  local_110 = lVar21;
  lStack_108 = lVar21 >> 0x3f;
  local_100 = uVar18;
  lStack_f8 = lVar19;
  local_e0 = local_2e8;
  local_f0 = local_2f8;
  if (local_308 == 1) {
    local_328 = uVar1;
    local_320 = uVar16;
    local_318 = uVar15;
    local_310 = uVar29;
    FUN_1438164c0(local_1f8,&local_318,&local_328);
  }
  uVar9 = local_2c8;
  if (local_2c8 == 1) {
    local_328 = uVar12;
    local_320 = uVar23;
    local_318 = uVar12;
    local_310 = uVar27;
    FUN_1438164c0(local_1f8,&local_318,&local_328);
  }
  if (local_304 == 1) {
    local_328 = uVar25;
    local_320 = uVar24;
    local_318 = uVar25;
    local_310 = uVar28;
    FUN_1438164c0(local_1f8,&local_318,&local_328);
  }
  if (local_308 == 2) {
    if (uVar9 != 2) {
LAB_14381831a:
      local_328 = uVar12;
      local_320 = uVar23;
      local_318 = uVar1;
      local_310 = uVar16;
      FUN_1438164c0(local_1f8,&local_318,&local_328);
      if (uVar9 != 2) goto LAB_143818357;
    }
    if (local_304 != 2) {
LAB_14381835d:
      local_328 = uVar25;
      local_320 = uVar24;
      local_318 = uVar12;
      local_310 = uVar23;
      FUN_1438164c0(local_1f8,&local_318,&local_328);
      if (local_304 != 2) goto LAB_1438183db;
    }
    iVar22 = local_304;
    if (local_308 != 2) {
LAB_1438183e1:
      iVar22 = local_304;
      local_328 = uVar1;
      local_320 = uVar16;
      local_318 = uVar25;
      local_310 = uVar24;
      FUN_1438164c0(local_1f8,&local_318,&local_328);
      goto LAB_14381840d;
    }
LAB_14381839a:
    iVar26 = local_308;
    if (uVar9 == 0) {
LAB_14381839f:
      iVar26 = local_308;
      local_328 = uVar12;
      local_320 = uVar27;
      local_318 = uVar15;
      local_310 = uVar29;
      FUN_1438164c0(local_1f8,&local_318,&local_328);
      if (uVar9 == 0) goto LAB_1438183d2;
    }
    bVar30 = iVar22 == 0;
    iVar22 = 0;
    if (bVar30) {
LAB_14381841f:
      local_328 = uVar25;
      local_320 = uVar28;
      local_318 = uVar12;
      local_310 = uVar27;
      FUN_1438164c0(local_1f8,&local_318,&local_328);
      if (iVar22 == 0) goto LAB_143818451;
    }
    if (iVar26 != 0) goto LAB_143818498;
  }
  else {
    if (uVar9 == 2) goto LAB_14381831a;
LAB_143818357:
    if (local_304 == 2) goto LAB_14381835d;
LAB_1438183db:
    iVar22 = local_304;
    if (local_308 == 2) goto LAB_1438183e1;
LAB_14381840d:
    if (local_308 != 0) goto LAB_14381839a;
    iVar26 = local_308;
    if (uVar9 != 0) goto LAB_14381839f;
LAB_1438183d2:
    if (iVar22 != 0) goto LAB_14381841f;
LAB_143818451:
    if (iVar26 == 0) {
      uVar15 = FUN_143818990(local_1f8);
      return uVar15;
    }
  }
  local_328 = uVar15;
  local_320 = uVar29;
  local_318 = uVar25;
  local_310 = uVar28;
  FUN_1438164c0(local_1f8,&local_318,&local_328);
LAB_143818498:
  uVar15 = FUN_143818990(local_1f8);
  return uVar15;
}



// FUNCTION 143818620 FUN_143818620 body=879 status=ok
// SIG undefined FUN_143818620(void)

ulonglong FUN_143818620(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong in_RAX;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [4] [16];
  
  if ((*(char *)(param_1 + 0x148) != '\0') &&
     (in_RAX = FUN_143807f20(param_1 + 0x30,param_1 + 0x78), (char)in_RAX == '\0')) {
    plVar8 = *(longlong **)(param_1 + 0x138);
    puVar1 = (undefined8 *)(param_1 + 0x110);
    puVar9 = (undefined8 *)((longlong)(int)plVar8[1] * 0xc0 + *plVar8);
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 2;
    FUN_1438160e0(&local_c8,param_1 + 0xc0,puVar1);
    local_58[0]._8_4_ = uStack_b0;
    local_58[0]._0_8_ = CONCAT44(uStack_b4,local_b8);
    local_58[0]._12_4_ = iStack_ac;
    local_e8._0_4_ = local_a8;
    local_e8._4_4_ = uStack_a4;
    uStack_e0 = uStack_a0;
    uStack_dc = uStack_9c;
    local_98 = CONCAT44(uStack_c4,local_c8);
    uStack_90 = CONCAT44(iStack_bc,uStack_c0);
    uVar4 = (uint)(CONCAT44(uStack_b4,local_b8) != 0 || local_58[0]._8_8_ != 0) | iStack_ac >> 0x1f;
    if (((int)uVar4 < 0) || ((uVar4 == 0 && ((local_98 != 0 || uStack_90 != 0) && -1 < iStack_bc))))
    {
      local_68 = local_98;
      uStack_60 = uStack_90;
      puVar5 = (undefined4 *)FUN_1438089a0(&local_98,&local_c8);
      bVar11 = false;
      plVar8 = &local_d8;
      local_c8 = *puVar5;
      uStack_c4 = puVar5[1];
      uStack_c0 = puVar5[2];
      iStack_bc = puVar5[3];
      local_b8 = puVar5[4];
      uStack_b4 = puVar5[5];
      uStack_b0 = puVar5[6];
      iStack_ac = puVar5[7];
      lVar6 = 2;
      plVar10 = &local_98;
      do {
        uVar2 = (ulonglong)bVar11;
        lVar7 = *plVar8;
        bVar11 = *plVar8 != 0 || (ulonglong)-lVar7 < uVar2;
        plVar8 = plVar8 + 1;
        *plVar10 = -lVar7 - uVar2;
        lVar6 = lVar6 + -1;
        plVar10 = plVar10 + 1;
      } while (lVar6 != 0);
      local_a8 = (undefined4)local_98;
      uStack_a4 = local_98._4_4_;
      uStack_a0 = (undefined4)uStack_90;
      uStack_9c = uStack_90._4_4_;
      local_d8._0_4_ = (undefined4)local_e8;
      local_d8._4_4_ = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
    }
    else {
      puVar5 = (undefined4 *)FUN_1438089a0(local_58,&local_98);
      bVar11 = false;
      plVar8 = &local_e8;
      local_68._0_4_ = *puVar5;
      local_68._4_4_ = puVar5[1];
      uStack_60._0_4_ = puVar5[2];
      uStack_60._4_4_ = puVar5[3];
      local_58[0]._0_4_ = puVar5[4];
      local_58[0]._4_4_ = puVar5[5];
      local_58[0]._8_4_ = puVar5[6];
      local_58[0]._12_4_ = puVar5[7];
      lVar6 = 2;
      plVar10 = &local_d8;
      do {
        uVar2 = (ulonglong)bVar11;
        lVar7 = *plVar8;
        bVar11 = *plVar8 != 0 || (ulonglong)-lVar7 < uVar2;
        plVar8 = plVar8 + 1;
        *plVar10 = -lVar7 - uVar2;
        lVar6 = lVar6 + -1;
        plVar10 = plVar10 + 1;
      } while (lVar6 != 0);
    }
    *(undefined4 *)(puVar9 + 0x12) = local_c8;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_c4;
    *(undefined4 *)(puVar9 + 0x13) = uStack_c0;
    *(int *)((longlong)puVar9 + 0x9c) = iStack_bc;
    *(undefined4 *)(puVar9 + 0x14) = local_b8;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_b4;
    *(undefined4 *)(puVar9 + 0x15) = uStack_b0;
    *(int *)((longlong)puVar9 + 0xac) = iStack_ac;
    *(undefined4 *)(puVar9 + 0x16) = local_a8;
    *(undefined4 *)((longlong)puVar9 + 0xb4) = uStack_a4;
    *(undefined4 *)(puVar9 + 0x17) = uStack_a0;
    *(undefined4 *)((longlong)puVar9 + 0xbc) = uStack_9c;
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *puVar9 = *(undefined8 *)(param_1 + 0x30);
    puVar9[1] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    puVar9[2] = *(undefined8 *)(param_1 + 0x40);
    puVar9[3] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    puVar9[4] = *(undefined8 *)(param_1 + 0x50);
    puVar9[5] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    puVar9[6] = *(undefined8 *)(param_1 + 0x60);
    puVar9[7] = uVar3;
    puVar9[8] = *(undefined8 *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    puVar9[9] = *(undefined8 *)(param_1 + 0x78);
    puVar9[10] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    puVar9[0xb] = *(undefined8 *)(param_1 + 0x88);
    puVar9[0xc] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0xa0);
    puVar9[0xd] = *(undefined8 *)(param_1 + 0x98);
    puVar9[0xe] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    puVar9[0xf] = *(undefined8 *)(param_1 + 0xa8);
    puVar9[0x10] = uVar3;
    puVar9[0x11] = *(undefined8 *)(param_1 + 0xb8);
    puVar9[0x18] = puVar9[9];
    puVar9[0x19] = puVar9[10];
    puVar9[0x1a] = puVar9[0xb];
    puVar9[0x1b] = puVar9[0xc];
    puVar9[0x1c] = puVar9[0xd];
    puVar9[0x1d] = puVar9[0xe];
    puVar9[0x1e] = puVar9[0xf];
    puVar9[0x1f] = puVar9[0x10];
    puVar9[0x20] = puVar9[0x11];
    *(undefined4 *)(puVar9 + 0x2a) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar9 + 0x154) = local_68._4_4_;
    *(undefined4 *)(puVar9 + 0x2b) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)puVar9 + 0x15c) = uStack_60._4_4_;
    puVar9[0x21] = *puVar9;
    puVar9[0x22] = puVar9[1];
    puVar9[0x23] = puVar9[2];
    puVar9[0x24] = puVar9[3];
    puVar9[0x25] = puVar9[4];
    puVar9[0x26] = puVar9[5];
    *(undefined4 *)(puVar9 + 0x2c) = local_58[0]._0_4_;
    *(undefined4 *)((longlong)puVar9 + 0x164) = local_58[0]._4_4_;
    *(undefined4 *)(puVar9 + 0x2d) = local_58[0]._8_4_;
    *(undefined4 *)((longlong)puVar9 + 0x16c) = local_58[0]._12_4_;
    puVar9[0x27] = puVar9[6];
    puVar9[0x28] = puVar9[7];
    puVar9[0x29] = puVar9[8];
    *(undefined4 *)(puVar9 + 0x2e) = (undefined4)local_d8;
    *(undefined4 *)((longlong)puVar9 + 0x174) = local_d8._4_4_;
    *(undefined4 *)(puVar9 + 0x2f) = uStack_d0;
    *(undefined4 *)((longlong)puVar9 + 0x17c) = uStack_cc;
    plVar8 = *(longlong **)(param_1 + 0x140);
    lVar7 = (longlong)(int)plVar8[1];
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 2;
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    lVar6 = *plVar8;
    puVar9 = (undefined8 *)(lVar6 + lVar7 * 0x28);
    *puVar9 = *puVar1;
    puVar9[1] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    puVar9 = (undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28);
    *puVar9 = *(undefined8 *)(param_1 + 0x120);
    puVar9[1] = uVar3;
    *(undefined8 *)(lVar6 + 0x20 + lVar7 * 0x28) = *(undefined8 *)(param_1 + 0x130);
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    puVar9 = (undefined8 *)(lVar6 + 0x28 + lVar7 * 0x28);
    *puVar9 = *puVar1;
    puVar9[1] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x128);
    puVar1 = (undefined8 *)(lVar6 + 0x38 + lVar7 * 0x28);
    *puVar1 = *(undefined8 *)(param_1 + 0x120);
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar6 + 0x48 + lVar7 * 0x28) = *(undefined8 *)(param_1 + 0x130);
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143818990 FUN_143818990 body=275 status=ok
// SIG undefined FUN_143818990(void)

ulonglong FUN_143818990(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong in_RAX;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x25) != '\0') {
    in_RAX = FUN_1438083a0(param_1,param_1 + 0xc);
    if ((char)in_RAX == '\0') {
      plVar2 = (longlong *)param_1[0x24];
      iVar1 = (int)plVar2[1];
      *(int *)(plVar2 + 1) = iVar1 + 1;
      uVar3 = param_1[0x1e];
      puVar4 = (undefined8 *)((longlong)iVar1 * 0xf8 + *plVar2);
      puVar4[0x18] = param_1[0x1d];
      puVar4[0x19] = uVar3;
      uVar3 = param_1[0x20];
      puVar4[0x1a] = param_1[0x1f];
      puVar4[0x1b] = uVar3;
      uVar3 = param_1[0x22];
      puVar4[0x1c] = param_1[0x21];
      puVar4[0x1d] = uVar3;
      puVar4[0x1e] = param_1[0x23];
      uVar3 = param_1[1];
      *puVar4 = *param_1;
      puVar4[1] = uVar3;
      uVar3 = param_1[3];
      puVar4[2] = param_1[2];
      puVar4[3] = uVar3;
      uVar3 = param_1[5];
      puVar4[4] = param_1[4];
      puVar4[5] = uVar3;
      uVar3 = param_1[7];
      puVar4[6] = param_1[6];
      puVar4[7] = uVar3;
      uVar3 = param_1[9];
      puVar4[8] = param_1[8];
      puVar4[9] = uVar3;
      uVar3 = param_1[0xb];
      puVar4[10] = param_1[10];
      puVar4[0xb] = uVar3;
      uVar3 = param_1[0xd];
      puVar4[0xc] = param_1[0xc];
      puVar4[0xd] = uVar3;
      uVar3 = param_1[0xf];
      puVar4[0xe] = param_1[0xe];
      puVar4[0xf] = uVar3;
      uVar3 = param_1[0x11];
      puVar4[0x10] = param_1[0x10];
      puVar4[0x11] = uVar3;
      uVar3 = param_1[0x13];
      puVar4[0x12] = param_1[0x12];
      puVar4[0x13] = uVar3;
      uVar3 = param_1[0x15];
      puVar4[0x14] = param_1[0x14];
      puVar4[0x15] = uVar3;
      uVar3 = param_1[0x17];
      puVar4[0x16] = param_1[0x16];
      puVar4[0x17] = uVar3;
      return CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143818ab0 FUN_143818ab0 body=1197 status=ok
// SIG undefined FUN_143818ab0(void)

void FUN_143818ab0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [48];
  
  puVar6 = (undefined4 *)FUN_143806850(local_48,param_1,param_2,param_3);
  uVar1 = puVar6[1];
  uVar3 = puVar6[2];
  uVar4 = puVar6[3];
  *param_4 = *puVar6;
  param_4[1] = uVar1;
  param_4[2] = uVar3;
  param_4[3] = uVar4;
  uVar1 = puVar6[5];
  uVar3 = puVar6[6];
  uVar4 = puVar6[7];
  param_4[4] = puVar6[4];
  param_4[5] = uVar1;
  param_4[6] = uVar3;
  param_4[7] = uVar4;
  param_4[8] = puVar6[8];
  uVar7 = FUN_143703a50();
  lVar5 = param_5[1];
  uVar9 = *(uint *)((longlong)param_5 + 0xc) & 0x3fffffff;
  iVar11 = (int)lVar5 + 3;
  if ((int)uVar9 < iVar11) {
    iVar12 = uVar9 * 2;
    if (iVar11 < iVar12) {
      iVar11 = iVar12;
    }
    FUN_14370c310(uVar7,param_5,iVar11,0xc0);
  }
  *(int *)(param_5 + 1) = (int)param_5[1] + 3;
  puVar10 = (undefined8 *)((longlong)(int)lVar5 * 0xc0 + *param_5);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[6] = 1;
  puVar10[9] = 1;
  puVar10[10] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0x10] = 0;
  puVar10[0x11] = 0;
  puVar10[0xf] = 1;
  puVar10[0x12] = 0;
  puVar10[0x13] = 0;
  puVar10[0x14] = 1;
  puVar10[0x15] = 0;
  puVar10[0x16] = 0;
  puVar10[0x17] = 0;
  puVar10[0x18] = 1;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  puVar10[0x1b] = 0;
  puVar10[0x1c] = 0;
  puVar10[0x1d] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x20] = 0;
  puVar10[0x1e] = 1;
  puVar10[0x21] = 0;
  puVar10[0x22] = 0;
  puVar10[0x23] = 0;
  puVar10[0x24] = 1;
  puVar10[0x25] = 0;
  puVar10[0x26] = 0;
  puVar10[0x28] = 0;
  puVar10[0x29] = 0;
  puVar10[0x27] = 1;
  puVar10[0x2a] = 0xffffffffffffffff;
  puVar10[0x2b] = 0xffffffffffffffff;
  puVar10[0x2c] = 0xffffffffffffffff;
  puVar10[0x2d] = 0xffffffffffffffff;
  puVar10[0x2e] = 1;
  puVar10[0x2f] = 0;
  puVar10[0x30] = 0;
  puVar10[0x31] = 0;
  puVar10[0x32] = 0;
  puVar10[0x33] = 1;
  puVar10[0x34] = 0;
  puVar10[0x35] = 0;
  puVar10[0x37] = 0;
  puVar10[0x38] = 0;
  puVar10[0x36] = 1;
  puVar10[0x39] = 0;
  puVar10[0x3a] = 0;
  puVar10[0x3b] = 0;
  puVar10[0x3c] = 0;
  puVar10[0x3d] = 0;
  puVar10[0x3e] = 0;
  puVar10[0x40] = 0;
  puVar10[0x41] = 0;
  puVar10[0x3f] = 1;
  puVar10[0x42] = 1;
  puVar10[0x43] = 0;
  puVar10[0x44] = 0;
  puVar10[0x45] = 0;
  puVar10[0x46] = 0;
  puVar10[0x47] = 0;
  uVar7 = FUN_143703a50();
  lVar5 = param_7[1];
  iVar11 = (int)lVar5 + 3;
  uVar9 = *(uint *)((longlong)param_7 + 0xc) & 0x3fffffff;
  if ((int)uVar9 < iVar11) {
    iVar12 = uVar9 * 2;
    if (iVar11 < iVar12) {
      iVar11 = iVar12;
    }
    FUN_14370c310(uVar7,param_7,iVar11,0x28);
  }
  *(int *)(param_7 + 1) = (int)param_7[1] + 3;
  local_68 = *param_2;
  local_58 = *param_1;
  puVar10 = (undefined8 *)(*param_7 + (longlong)(int)lVar5 * 0x28);
  local_60 = *(undefined4 *)(param_2 + 1);
  local_50 = *(undefined4 *)(param_1 + 1);
  puVar8 = (undefined8 *)FUN_14381c2a0(local_48,&local_58,&local_68);
  uVar7 = puVar8[1];
  *puVar10 = *puVar8;
  puVar10[1] = uVar7;
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar3 = *(undefined4 *)(puVar8 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)((longlong)puVar10 + 0x14) = uVar1;
  *(undefined4 *)(puVar10 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar4;
  puVar10[4] = puVar8[4];
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_68 = *param_2;
  local_60 = *(undefined4 *)(param_2 + 1);
  puVar8 = (undefined8 *)FUN_14381c2a0(local_48,&local_68,&local_58);
  uVar7 = puVar8[1];
  puVar10[5] = *puVar8;
  puVar10[6] = uVar7;
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar3 = *(undefined4 *)(puVar8 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(puVar10 + 7) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)((longlong)puVar10 + 0x3c) = uVar1;
  *(undefined4 *)(puVar10 + 8) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 0x44) = uVar4;
  puVar10[9] = puVar8[4];
  local_58 = *param_1;
  local_50 = *(undefined4 *)(param_1 + 1);
  local_68 = *param_3;
  local_60 = *(undefined4 *)(param_3 + 1);
  puVar8 = (undefined8 *)FUN_14381c2a0(local_48,&local_68,&local_58);
  uVar7 = puVar8[1];
  puVar10[10] = *puVar8;
  puVar10[0xb] = uVar7;
  uVar1 = *(undefined4 *)((longlong)puVar8 + 0x14);
  uVar3 = *(undefined4 *)(puVar8 + 3);
  uVar4 = *(undefined4 *)((longlong)puVar8 + 0x1c);
  *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar8 + 2);
  *(undefined4 *)((longlong)puVar10 + 100) = uVar1;
  *(undefined4 *)(puVar10 + 0xd) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar4;
  puVar10[0xe] = puVar8[4];
  uVar7 = FUN_143703a50();
  iVar11 = (int)param_6[1];
  uVar9 = *(uint *)((longlong)param_6 + 0xc) & 0x3fffffff;
  iVar12 = iVar11 + 3;
  if ((int)uVar9 < iVar12) {
    iVar2 = uVar9 * 2;
    if (iVar12 < iVar2) {
      iVar12 = iVar2;
    }
    FUN_14370c310(uVar7,param_6,iVar12,0xc);
  }
  *(int *)(param_6 + 1) = (int)param_6[1] + 3;
  lVar5 = *param_6;
  *(undefined8 *)(lVar5 + (longlong)iVar11 * 0xc) = *param_1;
  lVar5 = lVar5 + (longlong)iVar11 * 0xc;
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_1 + 1);
  *(undefined8 *)(lVar5 + 0xc) = *param_2;
  *(undefined4 *)(lVar5 + 0x14) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar5 + 0x18) = *param_3;
  *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_3 + 1);
  uVar7 = *param_3;
  local_50 = *(undefined4 *)(param_2 + 1);
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_58 = *param_2;
  local_68 = *param_1;
  local_60 = *(undefined4 *)(param_1 + 1);
  FUN_143819a60(param_8,&local_68,&local_58);
  local_58 = uVar7;
  local_50 = uVar1;
  FUN_143804ae0(param_8,&local_58);
  return;
}



// FUNCTION 143818f60 FUN_143818f60 body=174 status=ok
// SIG undefined FUN_143818f60(void)

longlong * FUN_143818f60(longlong *param_1,undefined4 *param_2,int *param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  int local_res10;
  int local_res14;
  undefined1 local_res18 [8];
  
  local_res8 = *param_2;
  local_resc = param_2[1];
  local_res10 = *param_3;
  local_res14 = param_3[1];
  piVar2 = (int *)FUN_143805b00(local_res18,&local_res10,&local_res8);
  local_res14 = *piVar2;
  local_res10 = -piVar2[1];
  *param_1 = (longlong)local_res10;
  param_1[1] = (longlong)local_res14;
  param_1[2] = 0;
  local_res8 = *param_2;
  local_resc = param_2[1];
  plVar3 = (longlong *)FUN_143808d40(local_res18,&local_res10,&local_res8);
  lVar1 = *plVar3;
  param_1[3] = -lVar1;
  param_1[4] = -lVar1 >> 0x3f;
  return param_1;
}



// FUNCTION 143819010 FUN_143819010 body=1234 status=ok
// SIG undefined FUN_143819010(void)

/* WARNING: Removing unreachable block (ram,0x00014381918e) */

ulonglong FUN_143819010(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong *param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong local_b8 [6];
  ulonglong local_88 [2];
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  ulonglong local_58 [4];
  longlong local_38;
  
  FUN_143805b20(&local_68,param_3,param_1);
  FUN_143805b20(&local_78,param_4,param_1);
  local_58[2] = (longlong)iStack_70 * param_2[2];
  local_58[3] = SUB168(SEXT816(param_2[2]) * SEXT816((longlong)iStack_70),8);
  local_b8[0] = (longlong)iStack_74 * param_2[1];
  local_b8[1] = SUB168(SEXT816(param_2[1]) * SEXT816((longlong)iStack_74),8);
  local_88[0] = (longlong)local_78 * *param_2;
  local_88[1] = SUB168(SEXT816(*param_2) * SEXT816((longlong)local_78),8);
  local_58[0] = local_88[0];
  local_58[1] = local_88[1];
  FUN_143806620(local_58,local_b8,local_88);
  FUN_143806620(local_88,local_58 + 2,local_58);
  local_b8[2] = (longlong)iStack_60 * param_2[2];
  local_b8[3] = SUB168(SEXT816(param_2[2]) * SEXT816((longlong)iStack_60),8);
  local_58[2] = (longlong)iStack_64 * param_2[1];
  local_58[3] = SUB168(SEXT816(param_2[1]) * SEXT816((longlong)iStack_64),8);
  local_b8[0] = (longlong)local_68 * *param_2;
  local_b8[1] = SUB168(SEXT816(*param_2) * SEXT816((longlong)local_68),8);
  local_88[0] = local_b8[0];
  local_88[1] = local_b8[1];
  FUN_143806620(local_b8,local_58 + 2,local_88);
  FUN_143806620(local_88,local_b8 + 2,local_b8);
  puVar6 = local_88;
  bVar10 = false;
  iVar4 = 0;
  lVar5 = 0;
  do {
    uVar7 = (longlong)local_b8[1] >> 0x3f;
    if (iVar4 < 2) {
      uVar7 = *(ulonglong *)((longlong)local_b8 + lVar5);
    }
    uVar1 = (ulonglong)bVar10;
    uVar3 = *(ulonglong *)((longlong)local_58 + lVar5) - uVar7;
    bVar10 = *(ulonglong *)((longlong)local_58 + lVar5) < uVar7 || uVar3 < uVar1;
    uVar3 = uVar3 - uVar1;
    *puVar6 = uVar3;
    uVar1 = local_88[1];
    uVar7 = local_88[0];
    iVar4 = iVar4 + 1;
    puVar6 = puVar6 + 1;
    lVar5 = lVar5 + 8;
  } while (iVar4 < 2);
  if (local_88[1] == 0 && local_88[0] == 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    FUN_143806770(local_58 + 2,&local_68,&local_78);
    uVar2 = local_58[3];
    uVar3 = local_58[2];
    local_58[0] = local_38 * *(int *)(param_1 + 0x14);
    local_58[1] = SUB168(SEXT816(local_38) * SEXT816((longlong)*(int *)(param_1 + 0x14)),8);
    local_b8[2] = local_58[3] * (longlong)*(int *)(param_1 + 0x10);
    local_b8[3] = SUB168(SEXT816((longlong)local_58[3]) *
                         SEXT816((longlong)*(int *)(param_1 + 0x10)),8);
    local_b8[0] = local_58[2] * (longlong)*(int *)(param_1 + 0xc);
    local_b8[1] = SUB168(SEXT816((longlong)local_58[2]) * SEXT816((longlong)*(int *)(param_1 + 0xc))
                         ,8);
    local_58[2] = local_b8[0];
    local_58[3] = local_b8[1];
    FUN_143806620(local_58 + 2,local_b8 + 2,local_b8);
    FUN_143806620(local_b8,local_58,&local_78);
    local_58[0] = local_38 * *(int *)(param_1 + 0x20);
    local_58[1] = SUB168(SEXT816(local_38) * SEXT816((longlong)*(int *)(param_1 + 0x20)),8);
    local_b8[2] = uVar2 * (longlong)*(int *)(param_1 + 0x1c);
    local_b8[3] = SUB168(SEXT816((longlong)uVar2) * SEXT816((longlong)*(int *)(param_1 + 0x1c)),8);
    local_b8[0] = uVar3 * (longlong)*(int *)(param_1 + 0x18);
    local_b8[1] = SUB168(SEXT816((longlong)uVar3) * SEXT816((longlong)*(int *)(param_1 + 0x18)),8);
    local_58[2] = local_b8[0];
    local_58[3] = local_b8[1];
    FUN_143806620(local_58 + 2,local_b8 + 2,local_b8);
    FUN_143806620(local_b8,local_58,&local_68);
    puVar6 = local_b8 + 2;
    lVar5 = 2;
    if ((longlong)uVar1 < 0) {
      lVar9 = 2;
      local_b8[4] = (longlong)iStack_5c >> 0x1f;
      bVar10 = false;
      *param_5 = CONCAT44(iStack_64,local_68);
      param_5[1] = CONCAT44(iStack_5c,iStack_60);
      param_5[2] = (longlong)iStack_5c >> 0x1f;
      puVar8 = local_b8;
      do {
        uVar1 = (ulonglong)bVar10;
        uVar7 = *puVar6;
        bVar10 = *puVar6 != 0 || -uVar7 < uVar1;
        puVar6 = puVar6 + 1;
        *puVar8 = -uVar7 - uVar1;
        lVar9 = lVar9 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar9 != 0);
      puVar6 = local_b8 + 2;
      local_b8[4] = (longlong)local_b8[1] >> 0x3f;
      bVar10 = false;
      param_5[3] = local_b8[0];
      param_5[4] = local_b8[1];
      local_b8[2] = local_88[0];
      local_b8[3] = local_88[1];
      param_5[5] = (longlong)local_b8[1] >> 0x3f;
      puVar8 = local_b8;
      do {
        uVar1 = (ulonglong)bVar10;
        uVar7 = *puVar6;
        bVar10 = *puVar6 != 0 || -uVar7 < uVar1;
        puVar6 = puVar6 + 1;
        *puVar8 = -uVar7 - uVar1;
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      param_5[6] = local_b8[0];
      param_5[7] = local_b8[1];
      param_5[8] = 0;
    }
    else {
      bVar10 = false;
      puVar8 = local_b8;
      do {
        uVar2 = (ulonglong)bVar10;
        uVar3 = *puVar6;
        bVar10 = *puVar6 != 0 || -uVar3 < uVar2;
        puVar6 = puVar6 + 1;
        *puVar8 = -uVar3 - uVar2;
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      uVar3 = (longlong)local_b8[1] >> 0x3f;
      *param_5 = local_b8[0];
      param_5[1] = local_b8[1];
      local_b8[1] = (longlong)iStack_6c >> 0x1f;
      param_5[2] = uVar3;
      param_5[3] = CONCAT44(iStack_74,local_78);
      param_5[4] = CONCAT44(iStack_6c,iStack_70);
      param_5[5] = local_b8[1];
      param_5[6] = uVar7;
      param_5[7] = uVar1;
      param_5[8] = 0;
    }
    uVar3 = CONCAT71((int7)(local_b8[1] >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1438194f0 FUN_1438194f0 body=821 status=ok
// SIG undefined FUN_1438194f0(void)

/* WARNING: Removing unreachable block (ram,0x0001438196e0) */

ulonglong FUN_1438194f0(longlong *param_1,int *param_2,int *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  int local_res8;
  int local_resc;
  int local_res10;
  int local_res14;
  ulonglong local_b8 [4];
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58 [4];
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong uVar6;
  
  local_38 = (longlong)param_2[2] * param_1[2];
  uStack_30 = SUB168(SEXT816(param_1[2]) * SEXT816((longlong)param_2[2]),8);
  local_58[0] = (longlong)param_2[1] * param_1[1];
  local_58[1] = SUB168(SEXT816(param_1[1]) * SEXT816((longlong)param_2[1]),8);
  local_b8[0] = (longlong)*param_2 * *param_1;
  local_b8[1] = SUB168(SEXT816(*param_1) * SEXT816((longlong)*param_2),8);
  FUN_143806620(local_b8,local_58,local_88 + 2);
  FUN_143806620(local_88 + 2,&local_38,local_88);
  local_58[0] = (longlong)param_3[2] * param_1[2];
  local_58[1] = SUB168(SEXT816(param_1[2]) * SEXT816((longlong)param_3[2]),8);
  local_88[2] = (longlong)param_3[1] * param_1[1];
  local_88[3] = SUB168(SEXT816(param_1[1]) * SEXT816((longlong)param_3[1]),8);
  local_b8[0] = (longlong)*param_3 * *param_1;
  local_b8[1] = SUB168(SEXT816(*param_1) * SEXT816((longlong)*param_3),8);
  local_38 = local_b8[0];
  uStack_30 = local_b8[1];
  FUN_143806620(&local_38,local_88 + 2,local_b8 + 2);
  FUN_143806620(local_b8 + 2,local_58,local_b8);
  if (local_88[0] == local_b8[0] && local_88[1] == local_b8[1]) {
    uVar9 = local_b8[1] & 0xffffffffffffff00;
  }
  else {
    FUN_143806620(local_b8,param_1 + 3,local_b8 + 2);
    local_res8 = *param_2;
    local_resc = param_2[1];
    FUN_143806620(local_88,param_1 + 3,local_88 + 2);
    local_res10 = *param_3;
    local_res14 = param_3[1];
    uVar4 = FUN_1438088c0(&local_38,&local_res8,local_b8 + 2);
    uVar5 = FUN_1438088c0(local_58,&local_res10,local_88 + 2);
    FUN_143808a40(local_b8 + 2,uVar5,uVar4);
    puVar7 = local_58;
    uVar6 = 0;
    bVar12 = false;
    uVar9 = uVar6;
    do {
      uVar10 = (longlong)local_b8[1] >> 0x3f;
      if ((int)uVar6 < 2) {
        uVar10 = *(ulonglong *)((longlong)local_b8 + uVar9);
      }
      uVar1 = (ulonglong)bVar12;
      uVar2 = *(ulonglong *)((longlong)local_88 + uVar9) - uVar10;
      bVar12 = *(ulonglong *)((longlong)local_88 + uVar9) < uVar10 || uVar2 < uVar1;
      *puVar7 = uVar2 - uVar1;
      uVar10 = local_58[1];
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
      puVar7 = puVar7 + 1;
      uVar9 = uVar9 + 8;
    } while ((int)uVar3 < 2);
    puVar7 = local_88 + 2;
    if ((longlong)local_58[1] < 0) {
      puVar7 = (ulonglong *)FUN_1438089a0(puVar7,local_b8 + 2);
    }
    else {
      local_88[2] = local_b8[2];
      local_88[3] = local_b8[3];
      local_68 = local_98;
      uStack_60 = uStack_90;
    }
    local_b8[3] = puVar7[1];
    uVar10 = (longlong)uVar10 >> 0x3f;
    lVar11 = 2;
    local_b8[2] = *puVar7;
    local_98 = (longlong)local_b8[3] >> 0x3f;
    uStack_90 = local_98;
    *param_4 = *puVar7;
    param_4[1] = local_b8[3];
    param_4[2] = local_98;
    param_4[3] = local_98;
    local_b8[3] = puVar7[3];
    puVar8 = local_58;
    local_b8[2] = puVar7[2];
    local_98 = (longlong)local_b8[3] >> 0x3f;
    bVar12 = false;
    uStack_90 = local_98;
    param_4[4] = puVar7[2];
    param_4[5] = local_b8[3];
    param_4[6] = local_98;
    param_4[7] = local_98;
    puVar7 = local_b8;
    do {
      uVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      uVar6 = (ulonglong)bVar12;
      uVar1 = (uVar9 ^ uVar10) - uVar10;
      bVar12 = (uVar9 ^ uVar10) < uVar10 || uVar1 < uVar6;
      *puVar7 = uVar1 - uVar6;
      lVar11 = lVar11 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0);
    uVar9 = CONCAT71((int7)(local_b8[1] >> 8),1);
    param_4[8] = local_b8[0];
    param_4[9] = local_b8[1];
    param_4[10] = 0;
    param_4[0xb] = 0;
  }
  return uVar9;
}



// FUNCTION 143819830 FUN_143819830 body=93 status=ok
// SIG undefined FUN_143819830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143819830(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_1 * *param_2 + param_2[0xc] + param_1[1] * param_2[4] + param_1[2] * param_2[8];
  fVar3 = *param_1 * param_2[1] + param_2[0xd] + param_1[1] * param_2[5] + param_1[2] * param_2[9];
  fVar1 = (float)(-(uint)(fVar3 < 0.0) & 0x80000000 ^ uRam00000001467f07e4);
  *param_3 = (int)((float)(-(uint)(fVar2 < 0.0) & 0x80000000 ^ _DAT_1467f07e0) + fVar2);
  param_3[1] = (int)(fVar1 + fVar3);
  return;
}



// FUNCTION 143819890 FUN_143819890 body=104 status=ok
// SIG undefined FUN_143819890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143819890(float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar5 = param_1[2];
  fVar3 = fVar1 * *param_2 + param_2[0xc] + fVar2 * param_2[4] + fVar5 * param_2[8];
  fVar4 = fVar1 * param_2[1] + param_2[0xd] + fVar2 * param_2[5] + fVar5 * param_2[9];
  fVar5 = fVar1 * param_2[2] + param_2[0xe] + fVar2 * param_2[6] + fVar5 * param_2[10];
  fVar1 = (float)(-(uint)(fVar4 < 0.0) & 0x80000000 ^ uRam00000001467f07e4);
  fVar2 = (float)(-(uint)(fVar5 < 0.0) & 0x80000000 ^ uRam00000001467f07e8);
  *param_3 = (int)((float)(-(uint)(fVar3 < 0.0) & 0x80000000 ^ _DAT_1467f07e0) + fVar3);
  param_3[2] = (int)(fVar2 + fVar5);
  param_3[1] = (int)(fVar1 + fVar4);
  return;
}



// FUNCTION 143819900 FUN_143819900 body=168 status=ok
// SIG undefined FUN_143819900(void)

void FUN_143819900(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
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
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = *(undefined4 *)(param_2 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = *(undefined4 *)(param_2 + 7);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_143719c70(0xa1f1068b);
  lVar1 = *param_1;
  iVar2 = 0;
  if (0 < (int)(param_1[1] - lVar1 >> 4)) {
    do {
      FUN_143819830((longlong)iVar2 * 0x10 + lVar1,&local_48,*param_3 + (longlong)iVar2 * 8);
      lVar1 = *param_1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(param_1[1] - lVar1 >> 4));
  }
  FUN_143719c70(0xb5a814e8);
  return;
}



// FUNCTION 1438199b0 FUN_1438199b0 body=172 status=ok
// SIG undefined FUN_1438199b0(void)

void FUN_1438199b0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
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
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *(undefined4 *)(param_2 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_20 = *(undefined4 *)(param_2 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_18 = *(undefined4 *)(param_2 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_10 = *(undefined4 *)(param_2 + 7);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_143719c70(0xa1f1068b);
  lVar2 = *param_1;
  iVar1 = 0;
  if (0 < (int)(param_1[1] - lVar2 >> 4)) {
    do {
      FUN_143819890((longlong)iVar1 * 0x10 + lVar2,&local_48,*param_3 + (longlong)iVar1 * 0xc);
      lVar2 = *param_1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(param_1[1] - lVar2 >> 4));
  }
  FUN_143719c70(0xb5a814e8);
  return;
}



// FUNCTION 143819a60 FUN_143819a60 body=268 status=ok
// SIG undefined FUN_143819a60(void)

void FUN_143819a60(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_18;
  
  uVar1 = *param_3;
  iVar4 = *(int *)(param_3 + 1);
  uVar2 = *param_2;
  iVar3 = *(int *)(param_2 + 1);
  local_28 = (int)uVar1;
  local_18 = (int)uVar2;
  if (local_18 < local_28) {
    local_28 = local_18;
  }
  *param_1 = local_28;
  iVar5 = (int)((ulonglong)uVar1 >> 0x20);
  iVar6 = (int)((ulonglong)uVar2 >> 0x20);
  if (iVar6 < iVar5) {
    iVar5 = iVar6;
  }
  param_1[1] = iVar5;
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  param_1[2] = iVar4;
  uVar1 = *param_3;
  iVar4 = *(int *)(param_3 + 1);
  iVar3 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  local_18 = (int)uVar1;
  local_28 = (int)uVar2;
  if (local_18 < local_28) {
    local_18 = local_28;
  }
  param_1[3] = local_18;
  iVar6 = (int)((ulonglong)uVar2 >> 0x20);
  iVar5 = (int)((ulonglong)uVar1 >> 0x20);
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  param_1[4] = iVar5;
  if (iVar4 < iVar3) {
    iVar4 = iVar3;
  }
  param_1[5] = iVar4;
  return;
}



// FUNCTION 143819b70 FUN_143819b70 body=3362 status=ok
// SIG undefined FUN_143819b70(void)

/* WARNING: Removing unreachable block (ram,0x000143819fdc) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143819b70(longlong *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar37;
  char cVar38;
  longlong *plVar39;
  ulonglong uVar40;
  ulonglong *puVar41;
  undefined8 uVar42;
  int iVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong *puVar46;
  ulonglong uVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  uint uVar52;
  int iVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  longlong lVar58;
  ulonglong uVar59;
  bool bVar60;
  undefined8 local_408;
  undefined8 uStack_400;
  ulonglong local_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined8 local_398;
  ulonglong uStack_390;
  uint local_388;
  int local_384;
  uint local_380;
  ulonglong local_378 [3];
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulonglong local_350;
  ulonglong local_348 [8];
  undefined8 local_308;
  undefined4 uStack_300;
  int iStack_2fc;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  ulonglong local_2e8;
  undefined1 local_2e0 [24];
  ulonglong local_2c8 [10];
  ulonglong uStack_278;
  ulonglong local_270;
  longlong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  longlong local_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  ulonglong local_240;
  longlong local_238;
  ulonglong uStack_230;
  ulonglong local_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  ulonglong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulonglong local_1f8;
  longlong local_1f0;
  ulonglong uStack_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  ulonglong uStack_1d0;
  longlong local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  ulonglong local_1a8;
  longlong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong local_120;
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  FUN_143805b20(&local_388,param_3,param_2);
  uVar51 = (ulonglong)local_384;
  uVar55 = (ulonglong)(int)local_388;
  local_398._0_4_ = -local_384;
  local_398._4_4_ = local_388;
  local_3a0 = *param_2;
  local_39c = param_2[1];
  plVar39 = (longlong *)FUN_143808d40(local_348 + 4,&local_398,&local_3a0);
  local_308._0_4_ = (undefined4)param_1[2];
  local_308._4_4_ = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_300 = (undefined4)param_1[3];
  iStack_2fc = *(int *)((longlong)param_1 + 0x1c);
  cVar38 = FUN_143815d20(&local_398,-*plVar39,&local_308);
  if (cVar38 != '\0') {
    return 1;
  }
  lVar58 = *param_1;
  iVar37 = (int)(param_1[1] - lVar58 >> 0x3f);
  iVar43 = (int)((param_1[1] - lVar58) / 0x48) + iVar37;
  local_398 = (ulonglong)local_398._4_4_ << 0x20;
  if (iVar43 == iVar37 || iVar43 - iVar37 < 0) {
    return 0;
  }
  uVar54 = (ulonglong)(int)local_380;
  local_348[6] = 0;
  local_348[7] = uVar54;
LAB_143819c70:
  uVar47 = *(ulonglong *)(lVar58 + 8 + local_348[6] * 0x48);
  puVar41 = (ulonglong *)(lVar58 + local_348[6] * 0x48);
  uVar59 = *puVar41;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_348[7];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar59;
  uVar44 = SUB168(auVar1 * auVar19,8);
  uVar40 = uVar59 * local_348[7];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_348[7];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar47;
  uStack_400 = uVar47 * local_348[7] + uVar44;
  local_3f8 = (ulonglong)CARRY8(uVar47 * local_348[7],uVar44) + SUB168(auVar2 * auVar20,8);
  if ((longlong)uVar47 < 0) {
    local_3f8 = local_3f8 - local_348[7];
  }
  uVar52 = (uint)uVar54;
  if ((int)(uint)uVar54 < 0) {
    puVar46 = &uStack_400;
    bVar60 = false;
    plVar39 = &uStack_400;
    iVar43 = 1;
    do {
      uVar54 = (longlong)uVar47 >> 0x3f;
      if (iVar43 + -1 < 2) {
        uVar54 = *(ulonglong *)(((longlong)puVar41 - (longlong)&uStack_400) + (longlong)puVar46);
      }
      uVar44 = (ulonglong)bVar60;
      uVar45 = *puVar46 - uVar54;
      bVar60 = *puVar46 < uVar54 || uVar45 < uVar44;
      *plVar39 = uVar45 - uVar44;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      puVar46 = puVar46 + 1;
      uVar52 = local_380;
    } while (iVar43 < 3);
  }
  uVar54 = puVar41[3];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_348[7];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = puVar41[2];
  uVar45 = SUB168(auVar3 * auVar21,8);
  uVar44 = puVar41[2] * local_348[7];
  local_270 = local_3f8;
  local_378[2] = local_3f8;
  local_2c8[9] = uVar40;
  uStack_278 = uStack_400;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_348[7];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar54;
  local_378[0] = uVar40;
  local_378[1] = uStack_400;
  uStack_400 = uVar54 * local_348[7] + uVar45;
  local_3f8 = (ulonglong)CARRY8(uVar54 * local_348[7],uVar45) + SUB168(auVar4 * auVar22,8);
  if ((longlong)uVar54 < 0) {
    local_3f8 = local_3f8 - local_348[7];
  }
  if ((int)uVar52 < 0) {
    bVar60 = false;
    puVar46 = &uStack_400;
    iVar43 = 1;
    plVar39 = &uStack_400;
    do {
      uVar40 = (longlong)uVar54 >> 0x3f;
      if (iVar43 + -1 < 2) {
        uVar40 = *(ulonglong *)
                  ((longlong)puVar41 + (0x10 - (longlong)&uStack_400) + (longlong)puVar46);
      }
      uVar45 = (ulonglong)bVar60;
      uVar49 = *puVar46 - uVar40;
      bVar60 = *puVar46 < uVar40 || uVar49 < uVar45;
      *plVar39 = uVar49 - uVar45;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      puVar46 = puVar46 + 1;
    } while (iVar43 < 3);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar55;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar59;
  uVar54 = SUB168(auVar5 * auVar23,8);
  local_2e8 = local_3f8;
  local_350 = local_3f8;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar55;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar47;
  local_348[4] = puVar41[2];
  local_348[5] = puVar41[3];
  local_2f8 = uVar44;
  uStack_2f0 = uStack_400;
  uStack_360 = uVar44;
  uStack_358 = uStack_400;
  uStack_400 = uVar47 * uVar55 + uVar54;
  local_3f8 = (ulonglong)CARRY8(uVar47 * uVar55,uVar54) + SUB168(auVar6 * auVar24,8);
  if ((longlong)uVar47 < 0) {
    local_3f8 = local_3f8 - uVar55;
  }
  if ((int)local_388 < 0) {
    bVar60 = false;
    puVar46 = &uStack_400;
    plVar39 = &uStack_400;
    iVar43 = 1;
    do {
      uVar54 = (longlong)uVar47 >> 0x3f;
      if (iVar43 + -1 < 2) {
        uVar54 = *(ulonglong *)(((longlong)puVar41 - (longlong)&uStack_400) + (longlong)puVar46);
      }
      uVar40 = (ulonglong)bVar60;
      uVar44 = *puVar46 - uVar54;
      bVar60 = *puVar46 < uVar54 || uVar44 < uVar40;
      *plVar39 = uVar44 - uVar40;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      puVar46 = puVar46 + 1;
    } while (iVar43 < 3);
  }
  bVar60 = false;
  local_2c8[3] = uVar59 * uVar55;
  local_2c8[4] = uStack_400;
  lVar58 = 2;
  local_2c8[5] = local_3f8;
  puVar41 = local_348 + 4;
  plVar39 = &local_308;
  do {
    uVar47 = (ulonglong)bVar60;
    uVar54 = *puVar41;
    bVar60 = *puVar41 != 0 || -uVar54 < uVar47;
    puVar41 = puVar41 + 1;
    *plVar39 = -uVar54 - uVar47;
    lVar58 = lVar58 + -1;
    plVar39 = plVar39 + 1;
  } while (lVar58 != 0);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar51;
  auVar25._4_4_ = local_308._4_4_;
  auVar25._0_4_ = (undefined4)local_308;
  auVar25._8_8_ = 0;
  uVar47 = SUB168(auVar7 * auVar25,8);
  local_408 = uVar51 * CONCAT44(local_308._4_4_,(undefined4)local_308);
  uVar54 = uVar51 * CONCAT44(iStack_2fc,uStack_300);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar51;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = CONCAT44(iStack_2fc,uStack_300);
  uStack_400 = uVar54 + uVar47;
  local_3f8 = (ulonglong)CARRY8(uVar54,uVar47) + SUB168(auVar8 * auVar26,8);
  if (iStack_2fc < 0) {
    local_3f8 = local_3f8 - uVar51;
  }
  if (local_384 < 0) {
    lVar58 = (longlong)iStack_2fc;
    plVar39 = &uStack_400;
    bVar60 = false;
    iVar43 = 1;
    lVar48 = 0;
    do {
      uVar54 = lVar58 >> 0x1f;
      if (iVar43 + -1 < 2) {
        uVar54 = *(ulonglong *)((longlong)&local_308 + lVar48);
      }
      uVar47 = (ulonglong)bVar60;
      uVar59 = *(ulonglong *)((longlong)&uStack_400 + lVar48) - uVar54;
      bVar60 = *(ulonglong *)((longlong)&uStack_400 + lVar48) < uVar54 || uVar59 < uVar47;
      *plVar39 = uVar59 - uVar47;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      lVar48 = lVar48 + 8;
    } while (iVar43 < 3);
  }
  puVar41 = local_2c8 + 6;
  bVar60 = false;
  iVar43 = 0;
  local_2c8[2] = local_3f8;
  lVar58 = 0;
  local_2c8[0] = local_408;
  local_2c8[1] = uStack_400;
  do {
    uVar54 = (longlong)local_2c8[5] >> 0x3f;
    if (iVar43 < 3) {
      uVar54 = *(ulonglong *)((longlong)local_2c8 + lVar58 + 0x18);
    }
    uVar47 = (ulonglong)bVar60;
    uVar59 = *(ulonglong *)((longlong)local_2c8 + lVar58) - uVar54;
    bVar60 = *(ulonglong *)((longlong)local_2c8 + lVar58) < uVar54 || uVar59 < uVar47;
    *puVar41 = uVar59 - uVar47;
    iVar43 = iVar43 + 1;
    puVar41 = puVar41 + 1;
    lVar58 = lVar58 + 8;
  } while (iVar43 < 3);
  puVar41 = local_348;
  local_348[2] = local_2c8[8];
  local_348[0] = local_2c8[6];
  local_348[1] = local_2c8[7];
  iVar43 = param_3[2];
  uVar47 = (ulonglong)iVar43;
  lVar58 = 2;
  local_348[4] = local_2c8[6];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar47;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = local_2c8[6];
  local_3e8 = uVar47 * local_2c8[6];
  bVar60 = false;
  uVar54 = SUB168(auVar9 * auVar27,8);
  plVar39 = &uStack_3e0;
  do {
    puVar41 = puVar41 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar47;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *puVar41;
    uVar44 = SUB168(auVar10 * auVar28,8);
    uVar45 = *puVar41 * uVar47;
    uVar59 = (ulonglong)bVar60;
    uVar40 = uVar45 + uVar54;
    bVar60 = CARRY8(uVar45,uVar54) || CARRY8(uVar40,uVar59);
    *plVar39 = uVar40 + uVar59;
    uVar59 = local_2c8[8];
    lVar58 = lVar58 + -1;
    uVar54 = uVar44;
    plVar39 = plVar39 + 1;
  } while (lVar58 != 0);
  uStack_3d0 = bVar60 + uVar44;
  if ((longlong)local_2c8[8] < 0) {
    uStack_3d0 = uStack_3d0 - uVar47;
  }
  uVar54 = (longlong)local_2c8[8] >> 0x3f;
  if (iVar43 < 0) {
    plVar39 = &uStack_3e0;
    bVar60 = false;
    lVar58 = 0;
    iVar43 = 1;
    do {
      uVar47 = uVar54;
      if (iVar43 + -1 < 3) {
        uVar47 = *(ulonglong *)((longlong)local_348 + lVar58);
      }
      uVar40 = (ulonglong)bVar60;
      uVar44 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) - uVar47;
      bVar60 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) < uVar47 || uVar44 < uVar40;
      *plVar39 = uVar44 - uVar40;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      lVar58 = lVar58 + 8;
    } while (iVar43 < 4);
  }
  iVar43 = param_3[1];
  uVar40 = (ulonglong)iVar43;
  puVar41 = &uStack_358;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar40;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = local_2f8;
  local_228 = local_3d8;
  local_238 = local_3e8;
  uStack_230 = uStack_3e0;
  lVar58 = 2;
  local_3e8 = uVar40 * local_2f8;
  bVar60 = false;
  uVar47 = SUB168(auVar11 * auVar29,8);
  plVar39 = &uStack_3e0;
  do {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar40;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *puVar41;
    uVar49 = SUB168(auVar12 * auVar30,8);
    uVar56 = *puVar41 * uVar40;
    uVar44 = (ulonglong)bVar60;
    uVar45 = uVar56 + uVar47;
    bVar60 = CARRY8(uVar56,uVar47) || CARRY8(uVar45,uVar44);
    *plVar39 = uVar45 + uVar44;
    uVar44 = local_2e8;
    puVar41 = puVar41 + 1;
    lVar58 = lVar58 + -1;
    uVar47 = uVar49;
    plVar39 = plVar39 + 1;
  } while (lVar58 != 0);
  uStack_3d0 = bVar60 + uVar49;
  if ((longlong)local_2e8 < 0) {
    uStack_3d0 = uStack_3d0 - uVar40;
  }
  uVar47 = (longlong)local_2e8 >> 0x3f;
  if (iVar43 < 0) {
    plVar39 = &uStack_3e0;
    bVar60 = false;
    lVar58 = 0;
    iVar43 = 1;
    do {
      uVar40 = uVar47;
      if (iVar43 + -1 < 3) {
        uVar40 = *(ulonglong *)((longlong)&uStack_360 + lVar58);
      }
      uVar45 = (ulonglong)bVar60;
      uVar49 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) - uVar40;
      bVar60 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) < uVar40 || uVar49 < uVar45;
      *plVar39 = uVar49 - uVar45;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      lVar58 = lVar58 + 8;
    } while (iVar43 < 4);
  }
  puVar41 = local_378;
  lVar58 = 2;
  iVar43 = *param_3;
  uVar45 = (ulonglong)iVar43;
  local_258 = local_3d8;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar45;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = local_2c8[9];
  local_268 = local_3e8;
  uStack_260 = uStack_3e0;
  local_3e8 = uVar45 * local_2c8[9];
  bVar60 = false;
  uVar40 = SUB168(auVar13 * auVar31,8);
  plVar39 = &uStack_3e0;
  do {
    puVar41 = puVar41 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar45;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *puVar41;
    uVar50 = SUB168(auVar14 * auVar32,8);
    uVar57 = *puVar41 * uVar45;
    uVar49 = (ulonglong)bVar60;
    uVar56 = uVar57 + uVar40;
    bVar60 = CARRY8(uVar57,uVar40) || CARRY8(uVar56,uVar49);
    *plVar39 = uVar56 + uVar49;
    lVar58 = lVar58 + -1;
    uVar40 = uVar50;
    plVar39 = plVar39 + 1;
  } while (lVar58 != 0);
  uStack_3d0 = bVar60 + uVar50;
  if ((longlong)local_270 < 0) {
    uStack_3d0 = uStack_3d0 - uVar45;
  }
  if (iVar43 < 0) {
    uVar40 = (longlong)local_270 >> 0x3f;
    plVar39 = &uStack_3e0;
    bVar60 = false;
    iVar43 = 1;
    lVar58 = 0;
    do {
      uVar45 = uVar40;
      if (iVar43 + -1 < 3) {
        uVar45 = *(ulonglong *)((longlong)local_378 + lVar58);
      }
      uVar49 = (ulonglong)bVar60;
      uVar56 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) - uVar45;
      bVar60 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) < uVar45 || uVar56 < uVar49;
      *plVar39 = uVar56 - uVar49;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      lVar58 = lVar58 + 8;
    } while (iVar43 < 4);
  }
  local_240 = local_3d8;
  uStack_248 = (undefined4)uStack_3e0;
  uStack_244 = uStack_3e0._4_4_;
  local_250 = local_3e8;
  FUN_143808c80(&local_250,&local_268,local_2e0);
  FUN_143808c80(local_2e0,&local_238,&local_408);
  puVar41 = local_348;
  lVar58 = 2;
  iVar43 = param_4[2];
  uVar45 = (ulonglong)iVar43;
  local_1d8 = local_408;
  uStack_1d0 = uStack_400;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar45;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = local_348[4];
  local_1c8 = local_3f8;
  local_3e8 = uVar45 * local_348[4];
  uStack_3d0 = 0;
  uVar40 = SUB168(auVar15 * auVar33,8);
  plVar39 = &uStack_3e0;
  do {
    puVar41 = puVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar45;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = *puVar41;
    uVar50 = SUB168(auVar16 * auVar34,8);
    uVar57 = *puVar41 * uVar45;
    uVar49 = (ulonglong)((char)uStack_3d0 != '\0');
    uVar56 = uVar57 + uVar40;
    *plVar39 = uVar56 + uVar49;
    uStack_3d0 = (ulonglong)(CARRY8(uVar57,uVar40) || CARRY8(uVar56,uVar49));
    lVar58 = lVar58 + -1;
    uVar40 = uVar50;
    plVar39 = plVar39 + 1;
  } while (lVar58 != 0);
  uStack_3d0 = uStack_3d0 + uVar50;
  if ((longlong)uVar59 < 0) {
    uStack_3d0 = uStack_3d0 - uVar45;
  }
  if (iVar43 < 0) {
    plVar39 = &uStack_3e0;
    bVar60 = false;
    iVar43 = 1;
    lVar58 = 0;
    do {
      uVar59 = uVar54;
      if (iVar43 + -1 < 3) {
        uVar59 = *(ulonglong *)((longlong)local_348 + lVar58);
      }
      uVar40 = (ulonglong)bVar60;
      uVar45 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) - uVar59;
      bVar60 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) < uVar59 || uVar45 < uVar40;
      *plVar39 = uVar45 - uVar40;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      lVar58 = lVar58 + 8;
    } while (iVar43 < 4);
  }
  puVar41 = &uStack_358;
  local_1f0 = local_3e8;
  uStack_1e8 = uStack_3e0;
  lVar58 = 2;
  local_1e0 = local_3d8;
  iVar43 = param_4[1];
  uVar59 = (ulonglong)iVar43;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar59;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = local_2f8;
  local_3e8 = uVar59 * local_2f8;
  bVar60 = false;
  uVar54 = SUB168(auVar17 * auVar35,8);
  plVar39 = &uStack_3e0;
  do {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar59;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *puVar41;
    uVar49 = SUB168(auVar18 * auVar36,8);
    uVar40 = (ulonglong)bVar60;
    uVar45 = uVar59 * *puVar41 + uVar54;
    bVar60 = CARRY8(uVar59 * *puVar41,uVar54) || CARRY8(uVar45,uVar40);
    *plVar39 = uVar45 + uVar40;
    puVar41 = puVar41 + 1;
    lVar58 = lVar58 + -1;
    uVar54 = uVar49;
    plVar39 = plVar39 + 1;
  } while (lVar58 != 0);
  uStack_3d0 = bVar60 + uVar49;
  if ((longlong)uVar44 < 0) {
    uStack_3d0 = uStack_3d0 - uVar59;
  }
  if (iVar43 < 0) {
    plVar39 = &uStack_3e0;
    bVar60 = false;
    iVar43 = 1;
    lVar58 = 0;
    do {
      uVar54 = uVar47;
      if (iVar43 + -1 < 3) {
        uVar54 = *(ulonglong *)((longlong)&uStack_360 + lVar58);
      }
      uVar59 = (ulonglong)bVar60;
      uVar40 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) - uVar54;
      bVar60 = *(ulonglong *)((longlong)&uStack_3e0 + lVar58) < uVar54 || uVar40 < uVar59;
      *plVar39 = uVar40 - uVar59;
      iVar43 = iVar43 + 1;
      plVar39 = plVar39 + 1;
      lVar58 = lVar58 + 8;
    } while (iVar43 < 4);
  }
  local_210 = local_3d8;
  uStack_218 = (undefined4)uStack_3e0;
  uStack_214 = uStack_3e0._4_4_;
  local_220 = local_3e8;
  FUN_14380c130(local_378,*param_4,&local_3e8,1);
  local_1f8 = local_3d8;
  local_208 = (undefined4)local_3e8;
  uStack_204 = local_3e8._4_4_;
  uStack_200 = (undefined4)uStack_3e0;
  uStack_1fc = uStack_3e0._4_4_;
  FUN_143808c80(&local_208,&local_220,local_2e0);
  FUN_143808c80(local_2e0,&local_1f0,&local_148);
  local_1b8 = (undefined4)local_148;
  uStack_1b4 = local_148._4_4_;
  uStack_1b0 = (undefined4)uStack_140;
  uStack_1ac = uStack_140._4_4_;
  local_1a8 = local_138;
  cVar38 = FUN_14380ae10(&local_1b8,&local_1d8);
  if (cVar38 != '\0') {
    puVar41 = (ulonglong *)FUN_143808b50(&local_3e8,local_378);
    local_378[0] = *puVar41;
    local_378[1] = puVar41[1];
    uStack_358 = puVar41[4];
    local_350 = puVar41[5];
    local_378[2] = puVar41[2];
    uStack_360 = puVar41[3];
    local_348[2] = puVar41[8];
    local_348[0] = puVar41[6];
    local_348[1] = puVar41[7];
  }
  lVar58 = 0x24;
  if ((longlong)local_348[2] < 0) {
    lVar58 = 0x20;
  }
  FUN_14380c130(local_348,param_2[2] - *(int *)(lVar58 + (longlong)param_1),&local_3e8,1);
  local_3a0 = *param_2;
  local_198 = local_3e8;
  uStack_190 = uStack_3e0;
  local_39c = param_2[1];
  local_188 = local_3d8;
  local_148 = local_378[0];
  uStack_140 = local_378[1];
  local_138 = local_378[2];
  local_130 = (undefined4)uStack_360;
  uStack_12c = uStack_360._4_4_;
  uStack_128 = (undefined4)uStack_358;
  uStack_124 = uStack_358._4_4_;
  local_120 = local_350;
  uVar42 = FUN_1438092a0(local_2e0,&local_148,&local_3a0);
  FUN_143808c80(uVar42,&local_198,&local_180);
  iVar53 = 0;
  iVar37 = (int)(param_1[3] - param_1[2] >> 0x3f);
  iVar43 = (int)((param_1[3] - param_1[2]) / 0x68) + iVar37;
  if (iVar43 == iVar37 || iVar43 - iVar37 < 0) {
    return 1;
  }
  iVar43 = (int)local_398;
  do {
    if (iVar53 != iVar43) {
      local_3e8 = local_378[0];
      uStack_3e0 = local_378[1];
      local_3d8 = local_378[2];
      uStack_3d0 = uStack_360;
      uStack_3c8 = uStack_358;
      uStack_3c0 = local_350;
      puVar41 = (ulonglong *)
                FUN_1438094d0(&local_148,&local_3e8,(longlong)iVar53 * 0x68 + param_1[2]);
      local_58 = (undefined4)puVar41[8];
      uStack_54 = *(undefined4 *)((longlong)puVar41 + 0x44);
      uStack_50 = (undefined4)puVar41[9];
      uStack_4c = *(undefined4 *)((longlong)puVar41 + 0x4c);
      local_168 = local_180;
      uStack_160 = uStack_178;
      local_158 = local_170;
      local_348[4] = *puVar41;
      local_348[5] = puVar41[1];
      local_398 = puVar41[2];
      uStack_390 = puVar41[3];
      local_408 = puVar41[4];
      uStack_400 = puVar41[5];
      local_68 = (undefined4)puVar41[6];
      uStack_64 = *(undefined4 *)((longlong)puVar41 + 0x34);
      uStack_60 = (undefined4)puVar41[7];
      uStack_5c = *(undefined4 *)((longlong)puVar41 + 0x3c);
      local_98 = local_348[4];
      uStack_90 = local_348[5];
      local_88 = local_398;
      uStack_80 = uStack_390;
      local_78 = local_408;
      uStack_70 = uStack_400;
      FUN_14380c1e0(&local_68,&local_168,&local_3e8);
      local_f8 = local_3e8;
      uStack_f0 = uStack_3e0;
      local_c8 = local_348[4];
      uStack_c0 = local_348[5];
      local_b8 = local_398;
      uStack_b0 = uStack_390;
      local_a8 = (undefined4)local_408;
      uStack_a4 = local_408._4_4_;
      uStack_a0 = (undefined4)uStack_400;
      uStack_9c = uStack_400._4_4_;
      local_e8 = (undefined4)local_3d8;
      uStack_e4 = local_3d8._4_4_;
      uStack_e0 = (undefined4)uStack_3d0;
      uStack_dc = uStack_3d0._4_4_;
      local_d8 = (undefined4)uStack_3c8;
      uStack_d4 = uStack_3c8._4_4_;
      uStack_d0 = (undefined4)uStack_3c0;
      uStack_cc = uStack_3c0._4_4_;
      cVar38 = FUN_14380b050(&local_c8,&local_f8);
      if (cVar38 == '\0') break;
    }
    iVar53 = iVar53 + 1;
    if ((int)((param_1[3] - param_1[2]) / 0x68) <= iVar53) {
      return 1;
    }
  } while( true );
  iVar43 = iVar43 + 1;
  lVar58 = *param_1;
  local_398 = CONCAT44(local_398._4_4_,iVar43);
  local_348[6] = local_348[6] + 1;
  if ((int)((param_1[1] - lVar58) / 0x48) <= iVar43) {
    return 0;
  }
  uVar54 = (ulonglong)local_380;
  goto LAB_143819c70;
}



// FUNCTION 14381a8a0 FUN_14381a8a0 body=933 status=ok
// SIG undefined FUN_14381a8a0(void)

undefined8 FUN_14381a8a0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 < (int)param_2[1]) {
    if ((iVar1 < (int)param_3[1]) && (iVar1 < (int)param_4[1])) {
      return 0;
    }
  }
  else {
    iVar1 = (int)param_1[4];
    if ((((int)param_2[1] < iVar1) && ((int)param_3[1] < iVar1)) && ((int)param_4[1] < iVar1)) {
      return 0;
    }
  }
  uVar5 = FUN_143806850(&local_68);
  FUN_1438068b0(&local_b8,uVar5);
  lVar9 = CONCAT44(uStack_ac,uStack_b0);
  if (local_a8 != 0 || (CONCAT44(uStack_b4,local_b8) != 0 || lVar9 != 0)) {
    local_68 = local_b8;
    uStack_64 = uStack_b4;
    uStack_60 = uStack_b0;
    uStack_5c = uStack_ac;
    if (local_a8 < 0) {
      lVar9 = *param_3;
      lVar3 = param_3[1];
      *param_3 = *param_4;
      *(int *)(param_3 + 1) = (int)param_4[1];
      *param_4 = lVar9;
      *(int *)(param_4 + 1) = (int)lVar3;
      puVar6 = (undefined4 *)FUN_143808970(local_88,&local_b8);
      bVar10 = false;
      plVar7 = &local_d8;
      lVar9 = 2;
      local_68 = *puVar6;
      uStack_64 = puVar6[1];
      uStack_60 = puVar6[2];
      uStack_5c = puVar6[3];
      local_a8 = *(longlong *)(puVar6 + 4);
      local_b8 = local_68;
      uStack_b4 = uStack_64;
      uStack_b0 = uStack_60;
      uStack_ac = uStack_5c;
      local_d8 = uStack_a0;
      lStack_d0 = lStack_98;
      plVar8 = &local_f8;
      do {
        uVar2 = (ulonglong)bVar10;
        lVar3 = *plVar7;
        bVar10 = *plVar7 != 0 || (ulonglong)-lVar3 < uVar2;
        plVar7 = plVar7 + 1;
        *plVar8 = -lVar3 - uVar2;
        lVar9 = lVar9 + -1;
        plVar8 = plVar8 + 1;
      } while (lVar9 != 0);
      lStack_98 = CONCAT44(uStack_ec,uStack_f0);
      lVar9 = CONCAT44(uStack_ac,uStack_b0);
      uStack_a0 = local_f8;
    }
    local_58 = (undefined4)local_a8;
    uStack_54 = local_a8._4_4_;
    uStack_50 = (undefined4)uStack_a0;
    uStack_4c = uStack_a0._4_4_;
    local_48 = lStack_98;
    FUN_143816930(param_1,&local_68,&local_res8,&local_res10);
    if ((char)local_res8 != '\0') {
      if ((char)local_res10 != '\0') {
        local_d8 = *param_4;
        local_100 = (undefined4)param_4[1];
        if (lVar9 != 0) {
          local_f8 = *param_3;
          lStack_d0 = CONCAT44(lStack_d0._4_4_,local_100);
          uStack_f0 = (undefined4)param_3[1];
          local_108 = *param_2;
          local_100 = (undefined4)param_2[1];
          uVar5 = FUN_14380d750(param_1,&local_108,&local_f8,&local_d8);
          return uVar5;
        }
        local_f8 = *param_3;
        uStack_f0 = (undefined4)param_3[1];
        lStack_d0 = CONCAT44(lStack_d0._4_4_,(int)param_2[1]);
        local_108 = local_d8;
        local_d8 = *param_2;
        uVar5 = FUN_14380cea0(param_1,&local_d8,&local_f8,&local_108);
        return uVar5;
      }
      lVar9 = *param_1;
      lVar3 = param_1[1];
      if (lVar9 != lVar3) {
        plVar7 = (longlong *)(lVar9 + 0x20);
        do {
          local_res8 = (undefined4)*param_2;
          local_d8 = *plVar7;
          lStack_d0 = plVar7[1];
          local_c8 = plVar7[2];
          local_resc = *(undefined4 *)((longlong)param_2 + 4);
          uVar5 = FUN_143809200(&local_68,lVar9,&local_res8);
          FUN_143808c80(uVar5,&local_d8,local_88);
          if (local_78 < 0) {
            local_res10 = (undefined4)*param_3;
            local_f8 = *plVar7;
            uStack_f0 = (undefined4)plVar7[1];
            uStack_ec = *(undefined4 *)((longlong)plVar7 + 0xc);
            local_e8 = plVar7[2];
            local_res14 = *(undefined4 *)((longlong)param_3 + 4);
            uVar5 = FUN_143809200(&local_68,lVar9,&local_res10);
            FUN_143808c80(uVar5,&local_f8,local_88);
            if (local_78 < 0) {
              local_b8 = (undefined4)*plVar7;
              uStack_b4 = *(undefined4 *)((longlong)plVar7 + 4);
              uStack_b0 = (undefined4)plVar7[1];
              uStack_ac = *(undefined4 *)((longlong)plVar7 + 0xc);
              local_a8 = plVar7[2];
              local_108 = *param_4;
              uVar5 = FUN_143809200(&local_68,lVar9,&local_108);
              FUN_143808c80(uVar5,&local_b8,local_88);
              if (local_78 < 0) {
                return 0;
              }
            }
          }
          lVar9 = lVar9 + 0x48;
          plVar7 = plVar7 + 9;
        } while (lVar9 != lVar3);
      }
      cVar4 = FUN_143819b70(param_1,param_2,param_3,param_4);
      if (((cVar4 == '\0') &&
          (cVar4 = FUN_143819b70(param_1,param_3,param_4,param_2), cVar4 == '\0')) &&
         (cVar4 = FUN_143819b70(param_1,param_4,param_2,param_3), cVar4 == '\0')) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14381ac50 FUN_14381ac50 body=220 status=ok
// SIG undefined FUN_14381ac50(void)

undefined8 FUN_14381ac50(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  
  cVar1 = FUN_14380e120();
  if (cVar1 != '\0') {
    return 1;
  }
  local_38 = *(undefined4 *)(param_2 + 4);
  local_40 = param_2[3];
  local_res18 = *(undefined4 *)param_2;
  local_res1c = *(undefined4 *)((longlong)param_2 + 4);
  local_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_20 = *(undefined4 *)(param_2 + 1);
  local_res20 = *(undefined4 *)(param_2 + 3);
  local_res24 = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_34 = *(undefined8 *)((longlong)param_2 + 0xc);
  local_50 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_28 = *param_2;
  local_4c = *(undefined4 *)(param_2 + 2);
  local_58 = local_res18;
  local_54 = local_res1c;
  uVar2 = FUN_143805b00(local_48,&local_res20,&local_res18);
  uVar3 = FUN_143805b00(&local_res18,&local_50,&local_58);
  plVar4 = (longlong *)FUN_143806830(&local_res20,uVar3,uVar2);
  puVar5 = &local_40;
  if (-1 < *plVar4) {
    puVar5 = param_2;
  }
  uVar2 = FUN_14380e000(puVar5,param_1);
  return uVar2;
}



// FUNCTION 14381ad30 FUN_14381ad30 body=190 status=ok
// SIG undefined FUN_14381ad30(void)

void FUN_14381ad30(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0xc,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x14,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x30,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 14381adf0 FUN_14381adf0 body=139 status=ok
// SIG undefined FUN_14381adf0(void)

longlong FUN_14381adf0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14381ad30();
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



// FUNCTION 14381ae80 FUN_14381ae80 body=161 status=ok
// SIG undefined FUN_14381ae80(void)

longlong FUN_14381ae80(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  lVar3 = param_1[2];
  uVar6 = iVar2 * -0x61c8864f;
  uVar7 = iVar1 * -0x61c8864f;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar4 = (ulonglong)
          ((uVar7 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar7) & *(uint *)(param_1 + 3));
  iVar5 = *(int *)(lVar3 + 4 + uVar4 * 8);
  if (-1 < iVar5) {
    do {
      if ((*(int *)(*param_1 + (longlong)iVar5 * 0xc) == iVar1) &&
         (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0xc) == iVar2)) {
        return lVar3 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar3 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 14381af30 FUN_14381af30 body=275 status=ok
// SIG undefined FUN_14381af30(void)

void FUN_14381af30(longlong *param_1,uint *param_2)

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
    lVar5 = FUN_14381ae80(param_1,*param_1 + (longlong)(int)uVar4 * 0xc);
    *(uint *)(lVar5 + 4) = uVar2;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (*(uint *)(param_1 + 1) != uVar2) {
    puVar7 = (undefined4 *)(*param_1 + (longlong)(int)uVar2 * 0xc);
    lVar5 = 3;
    lVar8 = (*param_1 + (longlong)(int)*(uint *)(param_1 + 1) * 0xc) - (longlong)puVar7;
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



// FUNCTION 14381b050 FUN_14381b050 body=1135 status=ok
// SIG undefined FUN_14381b050(void)

undefined8 * FUN_14381b050(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  ulonglong uVar17;
  int local_res18;
  int local_res20 [2];
  undefined8 local_128;
  longlong lStack_120;
  longlong local_118;
  undefined4 local_110;
  uint local_10c;
  longlong local_108;
  uint local_100;
  longlong local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  int local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  int *local_98;
  int *piStack_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  local_b8 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar6 + 0x58),0x48);
  iVar16 = 0;
  if (local_b8 == (undefined8 *)0x0) {
    local_b8 = (undefined8 *)0x0;
  }
  else {
    local_b8[1] = 0;
    *(undefined4 *)(local_b8 + 2) = 0x1ffff;
    *local_b8 = hkaiNavMeshGeneration::InputVolume::vftable;
    local_b8[3] = 0;
    *(undefined4 *)(local_b8 + 4) = 0;
    *(undefined4 *)((longlong)local_b8 + 0x24) = 0x80000000;
    local_b8[5] = 0;
    *(undefined4 *)(local_b8 + 6) = 0;
    *(undefined4 *)((longlong)local_b8 + 0x34) = 0x80000000;
    local_b8[7] = 0;
    *(undefined4 *)(local_b8 + 8) = 0;
    *(undefined4 *)((longlong)local_b8 + 0x44) = 0x80000000;
  }
  puVar9 = local_b8;
  iVar12 = *(int *)(param_1 + 0x20);
  plVar1 = local_b8 + 3;
  iVar14 = *(int *)(param_1 + 0x30);
  local_b0 = plVar1;
  uVar7 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)puVar9 + 0x24) & 0x3fffffff;
  if ((int)uVar10 < iVar14) {
    iVar4 = uVar10 * 2;
    iVar3 = iVar14;
    if (iVar14 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(uVar7,plVar1,iVar3,0x30);
  }
  *(int *)(puVar9 + 4) = iVar14;
  iVar3 = iVar14 * 3;
  local_e8 = puVar9 + 5;
  uVar7 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)puVar9 + 0x34) & 0x3fffffff;
  if ((int)uVar10 < iVar3) {
    iVar5 = uVar10 * 2;
    iVar4 = iVar3;
    if (iVar3 < iVar5) {
      iVar4 = iVar5;
    }
    FUN_14370c310(uVar7,puVar9 + 5,iVar4,0x14);
  }
  *(int *)(puVar9 + 6) = iVar3;
  plVar1 = puVar9 + 7;
  local_a8 = plVar1;
  uVar7 = FUN_143703a50();
  uVar10 = *(uint *)((longlong)puVar9 + 0x44) & 0x3fffffff;
  if ((int)uVar10 < iVar12) {
    iVar4 = uVar10 * 2;
    iVar3 = iVar12;
    if (iVar12 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(uVar7,plVar1,iVar3,0xc);
  }
  *(int *)(puVar9 + 8) = iVar12;
  local_98 = (int *)*plVar1;
  piStack_90 = local_98 + (longlong)iVar12 * 3;
  local_128 = *(longlong *)(param_1 + 0x18);
  lStack_120 = (longlong)*(int *)(param_1 + 0x20) * 0x10 + local_128;
  FUN_1438199b0(&local_128,param_2,&local_98);
  local_118 = 0;
  local_110 = 0;
  local_10c = 0x80000000;
  FUN_143734b10(&local_108);
  local_res18 = 0;
  local_c0 = (longlong)iVar14;
  if (0 < iVar14) {
    local_f8 = 0;
    local_c8 = 0;
    local_d0 = 0;
    do {
      uVar13 = 0;
      local_d8 = 0;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + local_d0);
      local_128 = *plVar1;
      lStack_120 = plVar1[1];
      lVar11 = 0x28;
      local_98 = (int *)(*local_b0 + local_c8);
      *(int *)(*local_b0 + local_c8) = iVar16;
      uVar8 = 8;
      uVar17 = uVar13;
      iVar12 = 1;
      iVar14 = 2;
      do {
        uVar2 = *(undefined4 *)((longlong)&local_128 + uVar8);
        iVar3 = *(int *)((longlong)&local_128 + uVar17);
        piVar15 = (int *)(local_f8 + lVar11 + *local_e8);
        piVar15[2] = iVar16 + iVar12;
        iVar4 = (int)uVar13;
        piVar15[3] = iVar16 + iVar4;
        *piVar15 = local_res18;
        piVar15[1] = iVar3;
        local_f0 = iVar3;
        local_ec = uVar2;
        lVar11 = FUN_14381ae80(&local_118,&local_f0);
        if (lVar11 == 0) {
LAB_14381b367:
          local_res20[0] = iVar16 + iVar14;
          local_e0 = uVar2;
          local_dc = iVar3;
          FUN_14381b860(&local_118,&local_e0,local_res20);
        }
        else {
          iVar12 = *(int *)(lVar11 + 4);
          if (iVar12 < 0) goto LAB_14381b367;
          iVar3 = *(int *)((longlong)iVar12 * 0xc + 8 + local_118);
          piVar15[4] = iVar3;
          *(int *)(*local_e8 + 0x10 + (longlong)iVar3 * 0x14) = iVar16 + iVar14;
          uVar10 = (uint)(lVar11 - local_108 >> 3);
          if ((local_100 < uVar10) ||
             (lVar11 = local_108 + (longlong)(int)uVar10 * 8,
             *(int *)(local_108 + 4 + (longlong)(int)uVar10 * 8) != iVar12)) {
            lVar11 = FUN_14381ae80(&local_118,local_118 + (longlong)iVar12 * 0xc);
          }
          FUN_14381af30(&local_118,lVar11);
        }
        lVar11 = local_d8;
        local_d8 = local_d8 + 0x14;
        uVar13 = (ulonglong)(iVar4 + 1U);
        uVar8 = uVar17;
        uVar17 = uVar17 + 4;
        iVar12 = iVar14;
        iVar14 = iVar4;
      } while ((int)(iVar4 + 1U) < 3);
      lVar11 = *local_a8;
      uVar7 = FUN_143806850(local_88,lVar11 + (longlong)local_128._4_4_ * 0xc,
                            lVar11 + (longlong)(int)local_128 * 0xc,
                            lVar11 + (longlong)(int)lStack_120 * 0xc);
      puVar9 = (undefined8 *)FUN_1438068b0(local_60,uVar7);
      iVar16 = iVar16 + 3;
      local_res18 = local_res18 + 1;
      uVar7 = puVar9[1];
      *(undefined8 *)(local_98 + 2) = *puVar9;
      *(undefined8 *)(local_98 + 4) = uVar7;
      uVar7 = puVar9[3];
      local_d0 = local_d0 + 0x10;
      local_f8 = local_f8 + 0x3c;
      *(undefined8 *)(local_98 + 6) = puVar9[2];
      *(undefined8 *)(local_98 + 8) = uVar7;
      *(undefined8 *)(local_98 + 10) = puVar9[4];
      local_c0 = local_c0 + -1;
      local_c8 = local_c8 + 0x30;
      puVar9 = local_b8;
    } while (local_c0 != 0);
  }
  thunk_FUN_143734820(&local_108);
  uVar7 = FUN_143703a50();
  local_110 = 0;
  if (-1 < (int)local_10c) {
    FUN_143702e10(uVar7,local_118,0xc,local_10c & 0x3fffffff);
  }
  return puVar9;
}



// FUNCTION 14381b4c0 FUN_14381b4c0 body=217 status=ok
// SIG undefined FUN_14381b4c0(void)

ulonglong FUN_14381b4c0(longlong *param_1,int *param_2)

{
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  uStack_20 = SUB168(SEXT816((longlong)param_2[2]) * SEXT816(param_1[2]),8);
  local_28 = (longlong)param_2[2] * param_1[2];
  local_38 = (longlong)param_2[1] * param_1[1];
  uStack_30 = SUB168(SEXT816((longlong)param_2[1]) * SEXT816(param_1[1]),8);
  local_48 = (longlong)*param_2 * *param_1;
  lStack_40 = SUB168(SEXT816((longlong)*param_2) * SEXT816(*param_1),8);
  FUN_143806620(&local_48,&local_38,local_18);
  FUN_143806620(local_18,&local_28,&local_38);
  FUN_143806620(&local_38,param_1 + 3,&local_48);
  return (ulonglong)(local_48 != 0 || lStack_40 != 0) | lStack_40 >> 0x3f;
}



// FUNCTION 14381b5a0 FUN_14381b5a0 body=692 status=ok
// SIG undefined FUN_14381b5a0(void)

undefined1 FUN_14381b5a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 local_res8;
  undefined8 local_208;
  undefined4 local_200;
  longlong local_1f8;
  int *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  int *local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined2 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_68 [48];
  
  lVar6 = *(longlong *)(param_1 + 0x28);
  local_1f8 = *(longlong *)(param_1 + 0x38);
  local_1e8 = lVar6;
  FUN_1438068b0();
  piVar8 = *(int **)(param_1 + 0x18);
  local_res8 = 0;
  local_1c8 = piVar8 + (longlong)*(int *)(param_1 + 0x20) * 0xc;
  if (piVar8 == local_1c8) {
    local_res8 = 0;
  }
  else {
    local_1f0 = piVar8 + 2;
    do {
      lVar7 = local_1f8;
      local_150 = *param_2;
      uStack_148 = param_2[1];
      local_130 = *(undefined4 *)(param_2 + 4);
      local_140 = param_2[2];
      uStack_138 = param_2[3];
      bVar2 = false;
      local_128 = *(undefined8 *)local_1f0;
      uStack_120 = *(undefined8 *)(local_1f0 + 2);
      lVar10 = (longlong)*piVar8;
      local_108 = *(undefined8 *)(local_1f0 + 8);
      local_168 = 0;
      local_118 = local_1f0[4];
      iStack_114 = local_1f0[5];
      iStack_110 = local_1f0[6];
      iStack_10c = local_1f0[7];
      lVar5 = (longlong)*(int *)(lVar6 + 4 + lVar10 * 0x14);
      local_208 = *(undefined8 *)(local_1f8 + lVar5 * 0xc);
      local_200 = *(undefined4 *)(local_1f8 + 8 + lVar5 * 0xc);
      local_160 = param_3;
      local_158 = param_4;
      iVar3 = FUN_14381b4c0(local_68,&local_208);
      bVar9 = iVar3 < 0;
      do {
        iVar3 = *(int *)(lVar6 + 0xc + (longlong)(int)lVar10 * 0x14);
        lVar10 = (longlong)iVar3;
        lVar6 = (longlong)*(int *)(lVar6 + 4 + lVar10 * 0x14);
        local_1e0 = *(undefined8 *)(lVar7 + lVar6 * 0xc);
        uVar1 = *(undefined4 *)(lVar7 + 8 + lVar6 * 0xc);
        local_1d8 = uVar1;
        local_1d0 = local_1e0;
        iVar4 = FUN_14381b4c0(local_68,&local_1e0);
        bVar11 = iVar4 < 0;
        if (bVar9 != bVar11) {
          local_res8 = 1;
          FUN_143819010(param_2,local_68,&local_208,&local_1e0,&local_1b8);
          if (bVar11) {
            bVar2 = true;
            local_100 = local_1b8;
            uStack_f8 = uStack_1b0;
            local_168 = CONCAT11(local_168._1_1_,1);
            local_e0 = local_198;
            uStack_d8 = uStack_190;
            local_f0 = local_1a8;
            uStack_e8 = uStack_1a0;
            local_c0 = local_178;
            local_d0 = local_188;
            uStack_c8 = uStack_180;
          }
          else if (bVar2) {
            FUN_14381b9b0(&local_168,&local_100,&local_1b8);
            bVar2 = false;
            local_168 = local_168 & 0xff00;
          }
          else {
            local_b8 = local_1b8;
            uStack_b0 = uStack_1b0;
            local_98 = local_198;
            uStack_90 = uStack_190;
            local_a8 = local_1a8;
            uStack_a0 = uStack_1a0;
            local_78 = local_178;
            local_88 = local_188;
            uStack_80 = uStack_180;
            local_168 = CONCAT11(1,(undefined1)local_168);
          }
        }
        lVar6 = local_1e8;
        local_208 = local_1d0;
        lVar7 = local_1f8;
        bVar9 = bVar11;
        local_200 = uVar1;
      } while (iVar3 != *piVar8);
      if (bVar2) {
        FUN_14381b9b0(&local_168,&local_100,&local_b8);
      }
      piVar8 = piVar8 + 0xc;
      local_1f0 = local_1f0 + 0xc;
    } while (piVar8 != local_1c8);
  }
  return local_res8;
}



// FUNCTION 14381b860 FUN_14381b860 body=322 status=ok
// SIG undefined FUN_14381b860(void)

longlong FUN_14381b860(longlong *param_1,int *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar2 = *param_2;
  iVar3 = param_2[1];
  uVar11 = iVar2 * -0x61c8864f;
  uVar10 = iVar3 * -0x61c8864f;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar11 = uVar11 * 0x40 + uVar10 + (uVar10 >> 2) + 0x9e3779b9 ^ uVar11;
  uVar9 = (ulonglong)(*(uint *)(param_1 + 3) & uVar11);
  puVar7 = (uint *)(param_1[2] + uVar9 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar9 * 8)) {
    lVar5 = *param_1;
    do {
      if ((*(int *)(lVar5 + (longlong)(int)puVar7[1] * 0xc) == iVar2) &&
         (*(int *)(lVar5 + 4 + (longlong)(int)puVar7[1] * 0xc) == iVar3)) {
        uVar4 = *param_3;
        *(undefined4 *)(lVar5 + 8 + (longlong)(int)puVar7[1] * 0xc) = uVar4;
        return (ulonglong)(uint3)((uint)uVar4 >> 8) << 8;
      }
      lVar6 = param_1[2];
      uVar9 = ((longlong)puVar7 - lVar6 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar7 = (uint *)(lVar6 + uVar9 * 8);
    } while (-1 < *(int *)(lVar6 + 4 + uVar9 * 8));
  }
  uVar10 = *(uint *)(param_1 + 1);
  *puVar7 = uVar11;
  puVar7[1] = uVar10;
  uVar8 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar8,param_1,0xc);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0xc);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *puVar1 = *(undefined8 *)param_2;
  uVar4 = *param_3;
  *(undefined4 *)(puVar1 + 1) = uVar4;
  return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
}



// FUNCTION 14381b9b0 FUN_14381b9b0 body=348 status=ok
// SIG undefined FUN_14381b9b0(void)

void FUN_14381b9b0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_38 [48];
  
  plVar1 = *(longlong **)(param_1 + 8);
  uVar6 = FUN_143703a50();
  if (*(uint *)(plVar1 + 1) == (*(uint *)((longlong)plVar1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,plVar1,0xc0);
  }
  puVar9 = (undefined8 *)((longlong)(int)plVar1[1] * 0xc0 + *plVar1);
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  uVar6 = param_2[1];
  *puVar9 = *param_2;
  puVar9[1] = uVar6;
  uVar6 = param_2[3];
  puVar9[2] = param_2[2];
  puVar9[3] = uVar6;
  uVar6 = param_2[5];
  puVar9[4] = param_2[4];
  puVar9[5] = uVar6;
  uVar6 = param_2[7];
  puVar9[6] = param_2[6];
  puVar9[7] = uVar6;
  puVar9[8] = param_2[8];
  uVar6 = param_3[1];
  puVar9[9] = *param_3;
  puVar9[10] = uVar6;
  uVar6 = param_3[3];
  puVar9[0xb] = param_3[2];
  puVar9[0xc] = uVar6;
  uVar6 = param_3[5];
  puVar9[0xd] = param_3[4];
  puVar9[0xe] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar4 = *(undefined4 *)(param_3 + 7);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar9 + 0x7c) = uVar3;
  *(undefined4 *)(puVar9 + 0x10) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0x84) = uVar5;
  puVar9[0x11] = param_3[8];
  puVar7 = (undefined8 *)FUN_1438160e0(local_38,param_1 + 0x18,param_1 + 0x40);
  uVar6 = puVar7[1];
  puVar9[0x12] = *puVar7;
  puVar9[0x13] = uVar6;
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0x14);
  uVar4 = *(undefined4 *)(puVar7 + 3);
  uVar5 = *(undefined4 *)((longlong)puVar7 + 0x1c);
  *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(puVar7 + 2);
  *(undefined4 *)((longlong)puVar9 + 0xa4) = uVar3;
  *(undefined4 *)(puVar9 + 0x15) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0xac) = uVar5;
  uVar3 = *(undefined4 *)((longlong)puVar7 + 0x24);
  uVar4 = *(undefined4 *)(puVar7 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar7 + 0x2c);
  *(undefined4 *)(puVar9 + 0x16) = *(undefined4 *)(puVar7 + 4);
  *(undefined4 *)((longlong)puVar9 + 0xb4) = uVar3;
  *(undefined4 *)(puVar9 + 0x17) = uVar4;
  *(undefined4 *)((longlong)puVar9 + 0xbc) = uVar5;
  plVar1 = *(longlong **)(param_1 + 0x10);
  uVar6 = FUN_143703a50();
  if (*(uint *)(plVar1 + 1) == (*(uint *)((longlong)plVar1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar6,plVar1,0x28);
  }
  lVar8 = (longlong)(int)plVar1[1];
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  lVar2 = *plVar1;
  puVar7 = (undefined8 *)(lVar2 + lVar8 * 0x28);
  *puVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar7[1] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  puVar7 = (undefined8 *)(lVar2 + 0x10 + lVar8 * 0x28);
  *puVar7 = *(undefined8 *)(param_1 + 0x50);
  puVar7[1] = uVar6;
  *(undefined8 *)(lVar2 + 0x20 + lVar8 * 0x28) = *(undefined8 *)(param_1 + 0x60);
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  return;
}



// FUNCTION 14381bb10 FUN_14381bb10 body=241 status=ok
// SIG undefined FUN_14381bb10(void)

undefined8
FUN_14381bb10(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
             longlong *param_7)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = (longlong)param_4 * (longlong)param_1 - (longlong)param_3 * (longlong)param_2;
  if (uVar1 == 0) {
    return 0;
  }
  lVar3 = (longlong)param_5 * (longlong)param_4 - (longlong)param_6 * (longlong)param_2;
  lVar2 = (longlong)param_6 * (longlong)param_1 - (longlong)param_5 * (longlong)param_3;
  if ((longlong)uVar1 < 0) {
    lVar3 = -lVar3;
    lVar2 = -lVar2;
  }
  *param_7 = lVar3;
  param_7[1] = lVar3 >> 0x3f;
  param_7[3] = lVar2;
  param_7[4] = lVar2 >> 0x3f;
  param_7[2] = lVar3 >> 0x3f;
  param_7[5] = lVar2 >> 0x3f;
  param_7[6] = (uVar1 ^ (longlong)uVar1 >> 0x3f) - ((longlong)uVar1 >> 0x3f);
  param_7[7] = 0;
  param_7[8] = 0;
  return 1;
}



// FUNCTION 14381bc10 FUN_14381bc10 body=203 status=ok
// SIG undefined FUN_14381bc10(void)

longlong FUN_14381bc10(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
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
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14381bce0 FUN_14381bce0 body=279 status=ok
// SIG undefined FUN_14381bce0(void)

longlong * FUN_14381bce0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  puVar2 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar1 + 0x58),0x28);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = hkaiNavMeshGeneration::InputArea::vftable;
    *(undefined4 *)(puVar2 + 2) = 0x1ffff;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
    puVar3 = puVar2;
  }
  *param_1 = (longlong)puVar3;
  uVar7 = param_2[1] - *param_2 >> 4;
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)puVar3 + 0x24) & 0x3fffffff;
  iVar6 = (int)uVar7;
  if ((int)uVar5 < iVar6) {
    uVar5 = uVar5 * 2;
    uVar7 = uVar7 & 0xffffffff;
    if (iVar6 < (int)uVar5) {
      uVar7 = (ulonglong)uVar5;
    }
    FUN_14370c310(uVar4,puVar3 + 3,uVar7,8);
  }
  *(int *)(puVar3 + 4) = iVar6;
  local_28 = *(longlong *)(*param_1 + 0x18);
  lStack_20 = local_28 + (longlong)*(int *)(*param_1 + 0x20) * 8;
  local_18 = (undefined4)*param_2;
  uStack_14 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_10 = (undefined4)param_2[1];
  uStack_c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_143819900(&local_18,param_3,&local_28);
  return param_1;
}



// FUNCTION 14381be00 FUN_14381be00 body=706 status=ok
// SIG undefined FUN_14381be00(void)

undefined8 FUN_14381be00(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int iStack_b0;
  int iStack_ac;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  iVar3 = *(int *)(param_1 + 0x20);
  lVar18 = (longlong)iVar3;
  local_res10 = param_2;
  uVar9 = FUN_143703a50();
  lVar19 = param_3[1];
  uVar13 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  iVar16 = (int)lVar19 + iVar3;
  if ((int)uVar13 < iVar16) {
    iVar4 = uVar13 * 2;
    if (iVar16 < iVar4) {
      iVar16 = iVar4;
    }
    FUN_14370c310(uVar9,param_3,iVar16,0xc0);
  }
  *(int *)(param_3 + 1) = (int)param_3[1] + iVar3;
  lVar15 = (longlong)(int)lVar19 * 0xc0 + *param_3;
  uVar9 = FUN_143703a50();
  lVar19 = param_4[1];
  uVar13 = *(uint *)((longlong)param_4 + 0xc) & 0x3fffffff;
  iVar16 = (int)lVar19 + iVar3;
  if ((int)uVar13 < iVar16) {
    iVar4 = uVar13 * 2;
    if (iVar16 < iVar4) {
      iVar16 = iVar4;
    }
    FUN_14370c310(uVar9,param_4,iVar16,0x28);
  }
  uVar9 = local_res10;
  *(int *)(param_4 + 1) = (int)param_4[1] + iVar3;
  iVar16 = 0;
  local_f0 = *param_4 + (longlong)(int)lVar19 * 0x28;
  if (0 < iVar3) {
    local_res8 = (longlong)(iVar3 + -1);
    local_res18 = local_res8 * 0xc0;
    lVar19 = 0;
    lVar14 = local_res18;
    local_f8 = lVar18;
    do {
      lVar17 = lVar19;
      FUN_14381c0d0(uVar9,*(longlong *)(param_1 + 0x18) + (longlong)iVar16 * 8,&local_98);
      lVar8 = local_f8;
      iVar16 = iVar16 + 1;
      puVar2 = (undefined8 *)(lVar14 + 0x48 + lVar15);
      *puVar2 = local_98;
      puVar2[1] = uStack_90;
      puVar2 = (undefined8 *)(lVar14 + 0x58 + lVar15);
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      puVar2 = (undefined8 *)(lVar14 + 0x68 + lVar15);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar2 = (undefined8 *)(lVar14 + 0x78 + lVar15);
      *puVar2 = local_68;
      puVar2[1] = uStack_60;
      *(undefined8 *)(lVar14 + 0x88 + lVar15) = local_58;
      *(undefined8 *)(lVar17 + lVar15) = local_98;
      ((undefined8 *)(lVar17 + lVar15))[1] = uStack_90;
      puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar15);
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      puVar2 = (undefined8 *)(lVar17 + 0x20 + lVar15);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar2 = (undefined8 *)(lVar17 + 0x30 + lVar15);
      *puVar2 = local_68;
      puVar2[1] = uStack_60;
      *(undefined8 *)(lVar17 + 0x40 + lVar15) = local_58;
      lVar18 = lVar18 + -1;
      lVar19 = lVar17 + 0xc0;
      lVar14 = lVar17;
    } while (lVar18 != 0);
    local_e8 = local_res8 * 8;
    local_res20 = 0;
    lVar19 = 0;
    lVar18 = local_res18;
    lVar14 = local_res8 * 0x28;
    lVar17 = 0;
    do {
      local_res8 = *(longlong *)(local_e8 + *(longlong *)(param_1 + 0x18));
      local_e8 = lVar19 * 8;
      local_f8 = *(longlong *)(local_e8 + *(longlong *)(param_1 + 0x18));
      piVar10 = (int *)FUN_143805b00(local_a8,&local_f8,&local_res8);
      local_c0 = 0;
      uStack_c8 = (longlong)*piVar10;
      local_d0 = (longlong)-piVar10[1];
      local_res18 = CONCAT44(*piVar10,-piVar10[1]);
      plVar11 = (longlong *)FUN_143808d40(local_a0,&local_res18,&local_res8);
      local_e0 = -*plVar11;
      lStack_d8._0_4_ = (int)(local_e0 >> 0x3f);
      iStack_b0 = (int)lStack_d8;
      iStack_ac = (int)lStack_d8;
      puVar1 = (undefined4 *)(lVar14 + local_f0);
      *puVar1 = (undefined4)local_d0;
      puVar1[1] = local_d0._4_4_;
      puVar1[2] = (undefined4)uStack_c8;
      puVar1[3] = uStack_c8._4_4_;
      puVar1 = (undefined4 *)(lVar14 + 0x10 + local_f0);
      *puVar1 = (undefined4)local_c0;
      puVar1[1] = local_c0._4_4_;
      *(longlong *)(puVar1 + 2) = local_e0;
      piVar10 = (int *)(lVar14 + 0x20 + local_f0);
      *piVar10 = (int)lStack_d8;
      piVar10[1] = (int)lStack_d8;
      lStack_d8 = local_e0 >> 0x3f;
      uStack_b8 = local_e0;
      puVar12 = (undefined8 *)FUN_1438160e0(&local_98,local_res10,&local_d0);
      lVar19 = lVar19 + 1;
      uVar9 = puVar12[1];
      puVar2 = (undefined8 *)(lVar18 + 0x90 + lVar15);
      *puVar2 = *puVar12;
      puVar2[1] = uVar9;
      uVar5 = *(undefined4 *)((longlong)puVar12 + 0x14);
      uVar6 = *(undefined4 *)(puVar12 + 3);
      uVar7 = *(undefined4 *)((longlong)puVar12 + 0x1c);
      puVar1 = (undefined4 *)(lVar18 + 0xa0 + lVar15);
      *puVar1 = *(undefined4 *)(puVar12 + 2);
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar5 = *(undefined4 *)((longlong)puVar12 + 0x24);
      uVar6 = *(undefined4 *)(puVar12 + 5);
      uVar7 = *(undefined4 *)((longlong)puVar12 + 0x2c);
      puVar1 = (undefined4 *)(lVar18 + 0xb0 + lVar15);
      *puVar1 = *(undefined4 *)(puVar12 + 4);
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar18 = lVar17;
      lVar14 = local_res20;
      lVar17 = lVar17 + 0xc0;
      local_res20 = local_res20 + 0x28;
    } while (lVar19 < lVar8);
  }
  return 1;
}



// FUNCTION 14381c0d0 FUN_14381c0d0 body=54 status=ok
// SIG undefined FUN_14381c0d0(void)

void FUN_14381c0d0(int *param_1,int *param_2,undefined8 param_3)

{
  FUN_14381bb10(param_1[3],param_1[6],param_1[4],param_1[7],*param_2 - *param_1,
                param_2[1] - param_1[1],param_3);
  return;
}



// FUNCTION 14381c110 FUN_14381c110 body=394 status=ok
// SIG undefined FUN_14381c110(void)

ulonglong FUN_14381c110(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  longlong lStack_40;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined1 local_28 [32];
  
  uVar7 = FUN_143805b20(&local_58,param_3,param_1);
  uVar8 = FUN_143805b20(&local_48,param_2,param_1);
  plVar9 = (longlong *)FUN_143806770(local_28,uVar8,uVar7);
  lVar1 = plVar9[2];
  lVar2 = *plVar9;
  lVar3 = plVar9[1];
  if (lVar1 < 1) {
    uVar10 = (ulonglong)plVar9 & 0xffffffffffffff00;
  }
  else {
    uVar12 = SUB168(SEXT816(lVar1) * SEXT816(lVar1),8);
    uStack_30 = SUB168(SEXT816(lVar1) * SEXT816(lVar1),8);
    local_58 = lVar3 * lVar3;
    uStack_50 = SUB168(SEXT816(lVar3) * SEXT816(lVar3),8);
    local_48 = lVar2 * lVar2;
    lStack_40 = SUB168(SEXT816(lVar2) * SEXT816(lVar2),8);
    local_38 = lVar1 * lVar1;
    FUN_143806620(&local_48,&local_58,local_28);
    FUN_143806620(local_28,&local_38,&local_48);
    uVar11 = CONCAT71(0,param_4);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_48;
    uVar13 = lStack_40 * uVar11 + SUB168(auVar4 * auVar5,8);
    bVar6 = false;
    uVar10 = uVar13 >> 8;
    if (((longlong)uVar12 < 0) ||
       ((uVar12 <= uVar10 && uVar12 >= uVar10) &&
        (ulonglong)(lVar1 * lVar1) < (uVar13 << 0x38 | local_48 * uVar11 >> 8) || uVar12 < uVar10))
    {
      bVar6 = true;
    }
    uVar10 = (ulonglong)!bVar6;
  }
  return uVar10;
}



// FUNCTION 14381c2a0 FUN_14381c2a0 body=123 status=ok
// SIG undefined FUN_14381c2a0(void)

longlong * FUN_14381c2a0(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int local_res8;
  int local_resc;
  int local_res10;
  int local_res14;
  undefined1 local_res18 [16];
  
  local_res8 = param_3[1] - param_2[1];
  local_resc = *param_2 - *param_3;
  *param_1 = (longlong)local_res8;
  param_1[1] = (longlong)local_resc;
  param_1[2] = 0;
  local_res10 = *param_2;
  local_res14 = param_2[1];
  plVar2 = (longlong *)FUN_143808d40(local_res18,&local_res10,&local_res8);
  lVar1 = *plVar2;
  param_1[3] = -lVar1;
  param_1[4] = -lVar1 >> 0x3f;
  return param_1;
}



// FUNCTION 14381c320 FUN_14381c320 body=136 status=ok
// SIG undefined FUN_14381c320(void)

longlong FUN_14381c320(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382be00();
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



// FUNCTION 14381c3b0 FUN_14381c3b0 body=74 status=ok
// SIG undefined FUN_14381c3b0(void)

void FUN_14381c3b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b5c0(param_1,local_res18);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381c410 FUN_14381c410 body=125 status=ok
// SIG undefined FUN_14381c410(void)

void FUN_14381c410(longlong param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    lVar2 = param_1 - (longlong)param_2;
    plVar1 = param_2;
    do {
      if (*plVar1 != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(lVar2 + (longlong)plVar1) != 0) {
        FUN_14370c150();
      }
      *(longlong *)(lVar2 + (longlong)plVar1) = *plVar1;
      *(undefined1 *)((longlong)plVar1 + lVar2 + 0x10) =
           *(undefined1 *)((longlong)param_2 + (longlong)plVar1 + ((lVar2 + 0x10) - param_1));
      lVar3 = lVar3 + -1;
      plVar1 = plVar1 + 3;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14381c4a0 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::AddPathRequestQueue>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        USBZSpawnManagerFunctionLibrary::RequestActor(param_1,local_res18);
      }
      param_1 = param_1 + 0x10;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381c4f0 FUN_14381c4f0 body=77 status=ok
// SIG undefined FUN_14381c4f0(void)

void FUN_14381c4f0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b820(param_1,local_res18);
      }
      param_1 = param_1 + 0xf0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381c580 SetRTPC body=9 status=ok
// SIG undefined SetRTPC(void)

void CAkParameterNodeBase::SetRTPC(longlong param_1)

{
  thunk_FUN_14375e550(param_1 + 0x30);
  return;
}



// FUNCTION 14381c590 FUN_14381c590 body=70 status=ok
// SIG undefined FUN_14381c590(void)

undefined1 FUN_14381c590(longlong param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_14375e550(param_1 + 0x80);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0xa8);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0xb8);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14381c5e0 FUN_14381c5e0 body=77 status=ok
// SIG undefined FUN_14381c5e0(void)

void FUN_14381c5e0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a800(param_1,local_res18);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381c6b0 FUN_14381c6b0 body=18 status=ok
// SIG undefined FUN_14381c6b0(void)

undefined8 * FUN_14381c6b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680ee60;
  return param_2;
}



// FUNCTION 14381c720 FUN_14381c720 body=51 status=ok
// SIG undefined FUN_14381c720(void)

undefined1 FUN_14381c720(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_143821110(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fa90(param_1 + 0x3c);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381c760 func body=74 status=ok
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
        UKismetSystemLibrary::GetDeviceId(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381c7b0 IsValid body=47 status=ok
// SIG undefined IsValid(void)

undefined1 FSkeletonRemapping::IsValid(longlong param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_1437088f0();
  if (cVar1 != '\0') {
    cVar1 = FUN_14381d580(param_1 + 8);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381c7e0 FUN_14381c7e0 body=83 status=ok
// SIG undefined FUN_14381c7e0(void)

undefined1 FUN_14381c7e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_143821170(param_1 + 0x60);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x1a0);
      if (cVar1 != '\0') {
        cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x1e8);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14381c840 FUN_14381c840 body=212 status=ok
// SIG undefined FUN_14381c840(void)

longlong FUN_14381c840(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),0x10,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      sVar3 = 0x50;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar3 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14381c970 FUN_14381c970 body=179 status=ok
// SIG undefined FUN_14381c970(void)

void FUN_14381c970(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,param_2 + lVar2);
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *puVar1 = hkaiDynamicNavMeshQueryMediator::vftable;
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 0x10 + lVar2);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar2);
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14381ca40 FUN_14381ca40 body=139 status=ok
// SIG undefined FUN_14381ca40(void)

longlong FUN_14381ca40(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c680();
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



// FUNCTION 14381cb20 FUN_14381cb20 body=349 status=ok
// SIG undefined FUN_14381cb20(void)

void FUN_14381cb20(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res20 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar6 = (int *)(param_1 + 0x20);
    lVar9 = (longlong)param_4;
    do {
      piVar1 = piVar6 + -8;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar6 + -6,param_2 + -0x18 + (longlong)piVar6);
        piVar6[-4] = 0x1ffff;
        *(undefined ***)piVar1 = hkaiIntersectionVolume::vftable;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = 0;
        piVar6[1] = -0x80000000;
        local_res20[0] = *(int *)(param_2 + (longlong)piVar6);
        lVar7 = (longlong)local_res20[0];
        uVar4 = FUN_143703a50();
        iVar3 = local_res20[0];
        plVar5 = (longlong *)0x0;
        if (local_res20[0] != 0) {
          plVar5 = (longlong *)FUN_143702d60(uVar4,8,local_res20);
        }
        *(longlong **)(piVar6 + -2) = plVar5;
        *piVar6 = iVar3;
        iVar3 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar3 = local_res20[0];
        }
        piVar6[1] = iVar3;
        if (0 < lVar7) {
          lVar8 = *(longlong *)(param_2 + -8 + (longlong)piVar6) - (longlong)plVar5;
          do {
            if ((plVar5 != (longlong *)0x0) &&
               (lVar2 = *(longlong *)(lVar8 + (longlong)plVar5), *plVar5 = lVar2, lVar2 != 0)) {
              FUN_14370c030();
            }
            plVar5 = plVar5 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      piVar6 = piVar6 + 10;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 14381cc90 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkcdPlanarGeometryPlanesCollection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438565b0(param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381cd30 FUN_14381cd30 body=74 status=ok
// SIG undefined FUN_14381cd30(void)

void FUN_14381cd30(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        UKismetSystemLibrary::GetDeviceId(param_1,local_res18);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381cdc0 FUN_14381cdc0 body=75 status=ok
// SIG undefined FUN_14381cdc0(void)

void FUN_14381cdc0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143829440(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x58;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381ce10 FUN_14381ce10 body=18 status=ok
// SIG undefined FUN_14381ce10(void)

undefined8 * FUN_14381ce10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680f2c0;
  return param_2;
}



// FUNCTION 14381ce30 FUN_14381ce30 body=77 status=ok
// SIG undefined FUN_14381ce30(void)

void FUN_14381ce30(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a930(param_1,local_res18);
      }
      param_1 = param_1 + 0x160;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381ce90 FUN_14381ce90 body=58 status=ok
// SIG undefined FUN_14381ce90(void)

void FUN_14381ce90(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438326a0(param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381ced0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiSplitGenerationUtils::Settings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143878460(param_1);
      }
      param_1 = param_1 + 0x48;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381cf10 FUN_14381cf10 body=115 status=ok
// SIG undefined FUN_14381cf10(void)

void FUN_14381cf10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    lVar1 = param_1 + 0x28 + (longlong)param_3 * 0x38;
    do {
      FUN_14370e7c0(lVar1 + 8);
      FUN_14370e7c0(lVar1);
      FUN_14370e7c0(lVar1 + -8);
      FUN_14370e7c0(lVar1 + -0x10);
      FUN_14370e7c0(lVar1 + -0x18);
      FUN_14370e7c0(lVar1 + -0x20);
      FUN_14370e7c0(lVar1 + -0x28);
      lVar1 = lVar1 + -0x38;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 14381cf90 FUN_14381cf90 body=77 status=ok
// SIG undefined FUN_14381cf90(void)

undefined1 FUN_14381cf90(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x28);
    if (cVar1 != '\0') {
      cVar1 = FUN_1438263a0(param_1 + 0x40);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x50);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14381cfe0 func body=74 status=ok
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
        USBZSpawnManagerFunctionLibrary::RequestActor(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381d030 FUN_14381d030 body=57 status=ok
// SIG undefined FUN_14381d030(void)

undefined1 FUN_14381d030(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14382fb50(param_1 + 0xd0);
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fb60(param_1 + 0xd1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381d070 FUN_14381d070 body=74 status=ok
// SIG undefined FUN_14381d070(void)

void FUN_14381d070(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a660(param_1,local_res18);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381d0c0 FUN_14381d0c0 body=74 status=ok
// SIG undefined FUN_14381d0c0(void)

void FUN_14381d0c0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a6e0(param_1,local_res18);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381d110 FUN_14381d110 body=18 status=ok
// SIG undefined FUN_14381d110(void)

undefined8 * FUN_14381d110(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680f700;
  return param_2;
}



// FUNCTION 14381d130 FUN_14381d130 body=587 status=ok
// SIG undefined FUN_14381d130(void)

void FUN_14381d130(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int local_res20 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    piVar13 = (int *)(param_1 + 0x88);
    param_2 = param_2 - param_1;
    lVar15 = (longlong)param_4;
    do {
      piVar3 = piVar13 + -0x22;
      if (piVar3 != (int *)0x0) {
        *(undefined ***)piVar3 = hkReferencedObject::vftable;
        FUN_143718270(piVar13 + -0x20,param_2 + -0x80 + (longlong)piVar13);
        piVar13[-0x1e] = 0x1ffff;
        *(undefined ***)piVar3 = hkaiSilhouetteGenerator::vftable;
        *(undefined8 *)(piVar13 + -0x1c) = *(undefined8 *)(param_2 + -0x70 + (longlong)piVar13);
        piVar13[-0x1a] = *(int *)(param_2 + -0x68 + (longlong)piVar13);
        piVar13[-0x19] = *(int *)(param_2 + -100 + (longlong)piVar13);
        lVar14 = *(longlong *)(param_2 + -0x60 + (longlong)piVar13);
        *(longlong *)(piVar13 + -0x18) = lVar14;
        if (lVar14 != 0) {
          FUN_14370c030();
        }
        puVar2 = (undefined8 *)(param_2 + -0x58 + (longlong)piVar13);
        uVar10 = puVar2[1];
        *(undefined8 *)(piVar13 + -0x16) = *puVar2;
        *(undefined8 *)(piVar13 + -0x14) = uVar10;
        puVar2 = (undefined8 *)(param_2 + -0x48 + (longlong)piVar13);
        uVar10 = puVar2[1];
        *(undefined8 *)(piVar13 + -0x12) = *puVar2;
        *(undefined8 *)(piVar13 + -0x10) = uVar10;
        *(undefined ***)piVar3 = hkaiPointCloudSilhouetteGenerator::vftable;
        piVar3 = (int *)(param_2 + -0x38 + (longlong)piVar13);
        iVar4 = piVar3[1];
        iVar9 = piVar3[2];
        iVar5 = piVar3[3];
        piVar13[-0xe] = *piVar3;
        piVar13[-0xd] = iVar4;
        piVar13[-0xc] = iVar9;
        piVar13[-0xb] = iVar5;
        piVar3 = (int *)(param_2 + -0x28 + (longlong)piVar13);
        iVar4 = piVar3[1];
        iVar9 = piVar3[2];
        iVar5 = piVar3[3];
        piVar13[-10] = *piVar3;
        piVar13[-9] = iVar4;
        piVar13[-8] = iVar9;
        piVar13[-7] = iVar5;
        piVar13[-6] = 0;
        piVar13[-5] = 0;
        piVar13[-4] = 0;
        piVar13[-3] = -0x80000000;
        iVar4 = *(int *)(param_2 + -0x10 + (longlong)piVar13);
        lVar14 = (longlong)iVar4;
        local_res20[0] = iVar4;
        uVar10 = FUN_143703a50();
        iVar9 = local_res20[0];
        puVar11 = (undefined4 *)0x0;
        if (local_res20[0] != 0) {
          puVar11 = (undefined4 *)FUN_143702d60(uVar10,0x10,local_res20);
        }
        *(undefined4 **)(piVar13 + -6) = puVar11;
        piVar13[-4] = iVar9;
        iVar9 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar9 = local_res20[0];
        }
        piVar13[-3] = iVar9;
        if (0 < iVar4) {
          lVar12 = *(longlong *)(param_2 + -0x18 + (longlong)piVar13) - (longlong)puVar11;
          do {
            puVar1 = (undefined4 *)(lVar12 + (longlong)puVar11);
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            *puVar11 = *puVar1;
            puVar11[1] = uVar6;
            puVar11[2] = uVar7;
            puVar11[3] = uVar8;
            puVar11 = puVar11 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        piVar13[-2] = 0;
        piVar13[-1] = 0;
        *piVar13 = 0;
        piVar13[1] = -0x80000000;
        iVar4 = *(int *)(param_2 + (longlong)piVar13);
        lVar14 = (longlong)iVar4;
        local_38[0] = iVar4;
        uVar10 = FUN_143703a50();
        iVar9 = local_38[0];
        puVar11 = (undefined4 *)0x0;
        if (local_38[0] != 0) {
          puVar11 = (undefined4 *)FUN_143702d60(uVar10,4,local_38);
        }
        *(undefined4 **)(piVar13 + -2) = puVar11;
        *piVar13 = iVar9;
        iVar9 = -0x80000000;
        if (local_38[0] != 0) {
          iVar9 = local_38[0];
        }
        piVar13[1] = iVar9;
        if (0 < iVar4) {
          lVar12 = *(longlong *)(param_2 + -8 + (longlong)piVar13) - (longlong)puVar11;
          do {
            *puVar11 = *(undefined4 *)(lVar12 + (longlong)puVar11);
            puVar11 = puVar11 + 1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        piVar13[2] = *(int *)(param_2 + 8 + (longlong)piVar13);
        *(undefined1 *)(piVar13 + 3) = *(undefined1 *)(param_2 + 0xc + (longlong)piVar13);
        *(undefined1 *)((longlong)piVar13 + 0xd) =
             *(undefined1 *)(param_2 + 0xd + (longlong)piVar13);
        *(undefined1 *)((longlong)piVar13 + 0xe) =
             *(undefined1 *)(param_2 + 0xe + (longlong)piVar13);
        *(undefined1 *)((longlong)piVar13 + 0xf) =
             *(undefined1 *)(param_2 + 0xf + (longlong)piVar13);
        *(undefined1 *)(piVar13 + 4) = *(undefined1 *)(param_2 + 0x10 + (longlong)piVar13);
      }
      piVar13 = piVar13 + 0x28;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  return;
}



// FUNCTION 14381d380 FUN_14381d380 body=57 status=ok
// SIG undefined FUN_14381d380(void)

undefined1 FUN_14381d380(longlong param_1)

{
  char cVar1;
  
  cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0xb0);
  if (cVar1 != '\0') {
    cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0xf0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381d3c0 FUN_14381d3c0 body=51 status=ok
// SIG undefined FUN_14381d3c0(void)

undefined1 FUN_14381d3c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14382fa00(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381d410 FUN_14381d410 body=89 status=ok
// SIG undefined FUN_14381d410(void)

void FUN_14381d410(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 != (undefined4 *)&DAT_00000014) {
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        FUN_143734b10(puVar1 + 1);
      }
      puVar1 = puVar1 + 10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14381d470 FUN_14381d470 body=74 status=ok
// SIG undefined FUN_14381d470(void)

void FUN_14381d470(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143829980(param_1,local_res18);
      }
      param_1 = param_1 + 0x58;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381d4c0 FUN_14381d4c0 body=18 status=ok
// SIG undefined FUN_14381d4c0(void)

undefined8 * FUN_14381d4c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680f8f0;
  return param_2;
}



// FUNCTION 14381d4e0 FUN_14381d4e0 body=18 status=ok
// SIG undefined FUN_14381d4e0(void)

undefined8 * FUN_14381d4e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14681d8c0;
  return param_2;
}



// FUNCTION 14381d500 FUN_14381d500 body=18 status=ok
// SIG undefined FUN_14381d500(void)

undefined8 * FUN_14381d500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680fa00;
  return param_2;
}



// FUNCTION 14381d520 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiNavigator::NavigatorSettings>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xa0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x14;
      plVar2 = plVar2 + -0x14;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 14381d580 FUN_14381d580 body=9 status=ok
// SIG undefined FUN_14381d580(void)

void FUN_14381d580(longlong param_1)

{
  FUN_143704540(param_1 + 8);
  return;
}



// FUNCTION 14381d590 FUN_14381d590 body=18 status=ok
// SIG undefined FUN_14381d590(void)

undefined8 * FUN_14381d590(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680fb20;
  return param_2;
}



// FUNCTION 14381d5b0 FUN_14381d5b0 body=208 status=ok
// SIG undefined FUN_14381d5b0(void)

undefined8 * FUN_14381d5b0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  *param_1 = hkaiAvoidancePairProperties::vftable;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 4) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    FUN_143702e10(uVar1,param_1[3],0xc,*(uint *)((longlong)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      sVar3 = 0x28;
      if (*(short *)(param_1 + 2) != -1) {
        sVar3 = *(short *)(param_1 + 2);
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14381d680 FUN_14381d680 body=139 status=ok
// SIG undefined FUN_14381d680(void)

longlong FUN_14381d680(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c810();
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



// FUNCTION 14381d750 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiOverlappingTriangles::Settings>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiOverlappingTriangles::Settings::Settings(param_1);
      }
      param_1 = param_1 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381d790 FUN_14381d790 body=203 status=ok
// SIG undefined FUN_14381d790(void)

longlong FUN_14381d790(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x50,*(uint *)(param_1 + 0x24) & 0x3fffffff)
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
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14381d860 FUN_14381d860 body=18 status=ok
// SIG undefined FUN_14381d860(void)

undefined8 * FUN_14381d860(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680fd80;
  return param_2;
}



// FUNCTION 14381d880 FUN_14381d880 body=139 status=ok
// SIG undefined FUN_14381d880(void)

longlong FUN_14381d880(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438654f0();
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



// FUNCTION 14381d960 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkcdPlanarGeometryPlanesCollection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143830830(param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381d9a0 FUN_14381d9a0 body=139 status=ok
// SIG undefined FUN_14381d9a0(void)

longlong FUN_14381d9a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14385f130();
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



// FUNCTION 14381da60 FUN_14381da60 body=74 status=ok
// SIG undefined FUN_14381da60(void)

void FUN_14381da60(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a760(param_1,local_res18);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381dab0 FUN_14381dab0 body=18 status=ok
// SIG undefined FUN_14381dab0(void)

undefined8 * FUN_14381dab0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14680ff30;
  return param_2;
}



// FUNCTION 14381dad0 FUN_14381dad0 body=116 status=ok
// SIG undefined FUN_14381dad0(void)

void FUN_14381dad0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_1 = param_1 - param_2;
    lVar3 = (longlong)param_4;
    puVar2 = (undefined1 *)(param_2 + 0x10);
    do {
      if ((longlong *)(puVar2 + param_1 + -0x10) != (longlong *)0x0) {
        lVar1 = *(longlong *)(puVar2 + -0x10);
        *(longlong *)(puVar2 + param_1 + -0x10) = lVar1;
        if (lVar1 != 0) {
          FUN_14370c030();
        }
        *(undefined8 *)(puVar2 + param_1 + -8) = 0;
        puVar2[param_1] = *puVar2;
      }
      puVar2 = puVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14381db50 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiNavMeshSimplificationSnapshot>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143862c80(param_1);
      }
      param_1 = param_1 + 0x260;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381db90 FUN_14381db90 body=8 status=ok
// SIG undefined FUN_14381db90(void)

undefined1 FUN_14381db90(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x9d);
}



// FUNCTION 14381dba0 FUN_14381dba0 body=11 status=ok
// SIG undefined FUN_14381dba0(void)

bool FUN_14381dba0(longlong param_1)

{
  return *(char *)(param_1 + 0x99) == '\x02';
}



// FUNCTION 14381dbc0 FUN_14381dbc0 body=237 status=ok
// SIG undefined FUN_14381dbc0(void)

void FUN_14381dbc0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  int local_res18 [4];
  
  if (0 < param_3) {
    piVar4 = (int *)(param_1 + 0x14);
    lVar5 = (longlong)param_3;
    do {
      if (piVar4 + -5 != (int *)0x0) {
        piVar4[-3] = 0;
        piVar4[-2] = 0;
        piVar4[-1] = 0;
        *piVar4 = -0x80000000;
        local_res18[0] = 0;
        uVar2 = FUN_143703a50();
        iVar1 = local_res18[0];
        uVar3 = 0;
        if (local_res18[0] != 0) {
          uVar3 = FUN_143702d60(uVar2,4,local_res18);
        }
        *(undefined8 *)(piVar4 + -3) = uVar3;
        piVar4[-1] = iVar1;
        iVar1 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar1 = local_res18[0];
        }
        *piVar4 = iVar1;
        iVar1 = DAT_146817ca8;
        piVar4[1] = 0;
        *(undefined1 *)(piVar4 + -5) = 0;
        piVar4[3] = 0x7fffffff;
        *(undefined1 *)(piVar4 + 4) = 0;
        piVar4[5] = 0x7fffffff;
        *(undefined1 *)(piVar4 + 6) = 0;
        piVar4[7] = 0x7fffffff;
        piVar4[8] = 0x7fffffff;
        piVar4[9] = iVar1;
        *(undefined1 *)(piVar4 + 10) = 0;
      }
      piVar4 = piVar4 + 0x12;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14381dcb0 FUN_14381dcb0 body=55 status=ok
// SIG undefined FUN_14381dcb0(void)

void FUN_14381dcb0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14387b750(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381dcf0 FUN_14381dcf0 body=212 status=ok
// SIG undefined FUN_14381dcf0(void)

longlong FUN_14381dcf0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0xc,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14370c150();
  }
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



// FUNCTION 14381ddd0 FUN_14381ddd0 body=246 status=ok
// SIG undefined FUN_14381ddd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14381ddd0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_1 + 0x50);
    lVar6 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar5 + -0x14) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar5 + -0x14) = 0;
        *(undefined8 *)(puVar5 + -0x12) = 0;
        *(undefined8 *)(puVar5 + -0x10) = 0;
        *(undefined8 *)(puVar5 + -0xe) = 0;
        *(undefined8 *)(puVar5 + -0xc) = 0;
        *(undefined8 *)(puVar5 + -10) = 0xffffffffffffffff;
        uVar1 = uRam00000001467f0898;
        *(undefined8 *)(puVar5 + -8) = _DAT_1467f0890;
        *(undefined8 *)(puVar5 + -6) = uVar1;
        uVar4 = uRam00000001467f08ac;
        uVar3 = uRam00000001467f08a8;
        uVar2 = uRam00000001467f08a4;
        puVar5[-4] = _DAT_1467f08a0;
        puVar5[-3] = uVar2;
        puVar5[-2] = uVar3;
        puVar5[-1] = uVar4;
        uVar4 = uRam00000001467f08bc;
        uVar3 = uRam00000001467f08b8;
        uVar2 = uRam00000001467f08b4;
        *puVar5 = _DAT_1467f08b0;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        *(undefined8 *)(puVar5 + 4) = 0;
        *(undefined8 *)(puVar5 + 6) = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 10) = 0;
        *(undefined8 *)(puVar5 + 0xc) = 0;
        *(undefined8 *)(puVar5 + 0xe) = 0;
        *(undefined8 *)(puVar5 + 0x18) = 0;
        puVar5[0x1a] = 0;
        puVar5[0x1b] = 0x80000000;
        FUN_143734b10(puVar5 + 0x1c);
        *(undefined8 *)(puVar5 + 0x20) = 0;
        puVar5[0x22] = 0;
        puVar5[0x23] = 0x80000000;
        FUN_143734b10(puVar5 + 0x24);
        *(undefined1 *)(puVar5 + 0x28) = 0;
        *(undefined1 *)(puVar5 + 0x10) = 0;
        *(undefined8 *)(puVar5 + 0x14) = 0;
        *(undefined8 *)(puVar5 + 0x16) = 0;
      }
      puVar5 = puVar5 + 0x40;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 14381ded0 FUN_14381ded0 body=230 status=ok
// SIG undefined FUN_14381ded0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14381ded0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    puVar2 = (undefined4 *)(param_1 + 0x24);
    do {
      if ((undefined8 *)(puVar2 + -9) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -7) = 0;
        puVar2[-5] = 0x1ffff;
        *(undefined ***)(puVar2 + -9) = hkaiNavVolume::vftable;
        *(undefined8 *)(puVar2 + -3) = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        *(undefined8 *)(puVar2 + 1) = 0;
        puVar2[3] = 0;
        puVar2[4] = 0x80000000;
        *(undefined8 *)(puVar2 + 5) = 0;
        puVar2[7] = 0;
        puVar2[8] = 0x80000000;
        *(undefined8 *)(puVar2 + 9) = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0x80000000;
        *(undefined8 *)(puVar2 + 0xd) = 0;
        puVar2[0xf] = 0;
        puVar2[0x10] = 0x80000000;
        puVar2[0x26] = 1;
        uVar1 = uRam00000001467f08d8;
        *(undefined8 *)(puVar2 + 0x13) = _DAT_1467f08d0;
        *(undefined8 *)(puVar2 + 0x15) = uVar1;
        puVar2[0x17] = puVar2[0x13] ^ 0x80000000;
        puVar2[0x18] = puVar2[0x14] ^ 0x80000000;
        puVar2[0x19] = puVar2[0x15] ^ 0x80000000;
        puVar2[0x1a] = puVar2[0x16] ^ 0x80000000;
        *(undefined8 *)(puVar2 + 0x1f) = 0;
        *(undefined8 *)(puVar2 + 0x21) = 0;
        *(undefined8 *)(puVar2 + 0x1b) = 0;
        *(undefined8 *)(puVar2 + 0x1d) = 0;
        *(undefined8 *)(puVar2 + 0x27) = 0;
      }
      puVar2 = puVar2 + 0x34;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14381dfc0 FUN_14381dfc0 body=18 status=ok
// SIG undefined FUN_14381dfc0(void)

undefined8 * FUN_14381dfc0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468100b0;
  return param_2;
}



// FUNCTION 14381dfe0 FUN_14381dfe0 body=18 status=ok
// SIG undefined FUN_14381dfe0(void)

undefined8 * FUN_14381dfe0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146810240;
  return param_2;
}



// FUNCTION 14381e000 FUN_14381e000 body=133 status=ok
// SIG undefined FUN_14381e000(void)

void FUN_14381e000(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  LPVOID pvVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar3 = (longlong *)(param_1 + lVar4 * 0x18);
    do {
      lVar1 = plVar3[1];
      if (lVar1 != 0) {
        FUN_143718950(lVar1);
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x40);
      }
      if (*plVar3 != 0) {
        FUN_14370c150();
      }
      plVar3 = plVar3 + -3;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 14381e140 FUN_14381e140 body=63 status=ok
// SIG undefined FUN_14381e140(void)

void FUN_14381e140(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x260 + param_1;
    do {
      FUN_143862d20(param_1);
      param_1 = param_1 + -0x260;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 14381e180 FUN_14381e180 body=139 status=ok
// SIG undefined FUN_14381e180(void)

longlong FUN_14381e180(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438497c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 14381e210 FUN_14381e210 body=78 status=ok
// SIG undefined FUN_14381e210(void)

void FUN_14381e210(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14387cdb0(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381e270 FUN_14381e270 body=203 status=ok
// SIG undefined FUN_14381e270(void)

longlong FUN_14381e270(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x60,*(uint *)(param_1 + 0x24) & 0x3fffffff)
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
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14381e340 FUN_14381e340 body=18 status=ok
// SIG undefined FUN_14381e340(void)

undefined8 * FUN_14381e340(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146810440;
  return param_2;
}



// FUNCTION 14381e400 func body=78 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkaiNavMeshInstance>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143874b50(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x100;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381e450 FUN_14381e450 body=165 status=ok
// SIG undefined FUN_14381e450(void)

longlong FUN_14381e450(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x38;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14381e500 FUN_14381e500 body=115 status=ok
// SIG undefined FUN_14381e500(void)

void FUN_14381e500(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    puVar2 = (undefined4 *)(param_1 + 8);
    do {
      if ((undefined8 *)(puVar2 + -2) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar2 + -2) = *(undefined8 *)(param_2 + -8 + (longlong)puVar2);
        *puVar2 = *(undefined4 *)(param_2 + (longlong)puVar2);
        puVar2[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar2);
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_2 + 8 + (longlong)puVar2);
        lVar1 = *(longlong *)(param_2 + 0x10 + (longlong)puVar2);
        *(longlong *)(puVar2 + 4) = lVar1;
        if (lVar1 != 0) {
          FUN_14370c030();
        }
      }
      puVar2 = puVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14381e580 FUN_14381e580 body=55 status=ok
// SIG undefined FUN_14381e580(void)

void FUN_14381e580(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143876800(param_1);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381e680 FUN_14381e680 body=18 status=ok
// SIG undefined FUN_14381e680(void)

undefined8 * FUN_14381e680(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468106e0;
  return param_2;
}



// FUNCTION 14381e6b0 FUN_14381e6b0 body=18 status=ok
// SIG undefined FUN_14381e6b0(void)

undefined8 * FUN_14381e6b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146810a20;
  return param_2;
}



// FUNCTION 14381e6d0 FUN_14381e6d0 body=139 status=ok
// SIG undefined FUN_14381e6d0(void)

longlong FUN_14381e6d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1437b06b0();
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



// FUNCTION 14381e760 FUN_14381e760 body=51 status=ok
// SIG undefined FUN_14381e760(void)

undefined1 FUN_14381e760(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fac0(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381e7a0 FUN_14381e7a0 body=139 status=ok
// SIG undefined FUN_14381e7a0(void)

longlong FUN_14381e7a0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382bea0();
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



// FUNCTION 14381e830 FUN_14381e830 body=136 status=ok
// SIG undefined FUN_14381e830(void)

longlong FUN_14381e830(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143869310();
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



// FUNCTION 14381e8c0 FUN_14381e8c0 body=139 status=ok
// SIG undefined FUN_14381e8c0(void)

longlong FUN_14381e8c0(longlong param_1,ulonglong param_2)

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



// FUNCTION 14381e950 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::NavigatorSetGoals>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a780(param_1,local_res18);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381e9a0 FUN_14381e9a0 body=70 status=ok
// SIG undefined FUN_14381e9a0(void)

void FUN_14381e9a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(param_1 + 0x18 + lVar1 * 0x20);
    do {
      if (*plVar2 != 0) {
        FUN_14370c150();
      }
      plVar2 = plVar2 + -4;
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 14381e9f0 FUN_14381e9f0 body=358 status=ok
// SIG undefined FUN_14381e9f0(void)

void FUN_14381e9f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  int local_res20 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    piVar7 = (int *)(param_1 + 0x20);
    lVar9 = (longlong)param_4;
    do {
      piVar1 = piVar7 + -8;
      if (piVar1 != (int *)0x0) {
        *(undefined ***)piVar1 = hkReferencedObject::vftable;
        FUN_143718270(piVar7 + -6,param_2 + -0x18 + (longlong)piVar7);
        piVar7[-4] = 0x1ffff;
        *(undefined ***)piVar1 = hkaiPathRequestManager::vftable;
        piVar7[-2] = 0;
        piVar7[-1] = 0;
        *piVar7 = 0;
        piVar7[1] = -0x80000000;
        local_res20[0] = *(int *)(param_2 + (longlong)piVar7);
        lVar6 = (longlong)local_res20[0];
        uVar4 = FUN_143703a50();
        iVar3 = local_res20[0];
        plVar5 = (longlong *)0x0;
        if (local_res20[0] != 0) {
          plVar5 = (longlong *)FUN_143702d60(uVar4,8,local_res20);
        }
        *(longlong **)(piVar7 + -2) = plVar5;
        *piVar7 = iVar3;
        iVar3 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar3 = local_res20[0];
        }
        piVar7[1] = iVar3;
        if (0 < lVar6) {
          lVar8 = *(longlong *)(param_2 + -8 + (longlong)piVar7) - (longlong)plVar5;
          do {
            if ((plVar5 != (longlong *)0x0) &&
               (lVar2 = *(longlong *)(lVar8 + (longlong)plVar5), *plVar5 = lVar2, lVar2 != 0)) {
              FUN_14370c030();
            }
            plVar5 = plVar5 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(param_2 + 8 + (longlong)piVar7);
      }
      piVar7 = piVar7 + 0xc;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 14381eb70 FUN_14381eb70 body=532 status=ok
// SIG undefined FUN_14381eb70(void)

void FUN_14381eb70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0xc4);
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar8 + -0x2f,param_2 + -0xbc + (longlong)puVar8);
      *(undefined8 *)(puVar8 + -0x2b) = *(undefined8 *)(param_2 + -0xac + (longlong)puVar8);
      puVar2 = (undefined8 *)(param_2 + -0xa4 + (longlong)puVar8);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar8 + -0x29) = *puVar2;
      *(undefined8 *)(puVar8 + -0x27) = uVar4;
      puVar2 = (undefined8 *)(param_2 + -0x94 + (longlong)puVar8);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar8 + -0x25) = *puVar2;
      *(undefined8 *)(puVar8 + -0x23) = uVar4;
      puVar2 = (undefined8 *)(param_2 + -0x84 + (longlong)puVar8);
      uVar4 = puVar2[1];
      *(undefined8 *)(puVar8 + -0x21) = *puVar2;
      *(undefined8 *)(puVar8 + -0x1f) = uVar4;
      puVar1 = (uint *)(param_2 + -0x74 + (longlong)puVar8);
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[-0x1d] = *puVar1;
      puVar8[-0x1c] = uVar3;
      puVar8[-0x1b] = uVar5;
      puVar8[-0x1a] = uVar6;
      puVar8[-0x19] = *(uint *)(param_2 + -100 + (longlong)puVar8);
      puVar8[-0x18] = *(uint *)(param_2 + -0x60 + (longlong)puVar8);
      puVar8[-0x17] = *(uint *)(param_2 + -0x5c + (longlong)puVar8);
      puVar8[-0x16] = *(uint *)(param_2 + -0x58 + (longlong)puVar8);
      puVar8[-0x15] = *(uint *)(param_2 + -0x54 + (longlong)puVar8);
      if (*(longlong *)(param_2 + -0x4c + (longlong)puVar8) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar8 + -0x13) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar8 + -0x13) = *(undefined8 *)(param_2 + -0x4c + (longlong)puVar8);
      if (*(longlong *)(param_2 + -0x44 + (longlong)puVar8) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar8 + -0x11) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar8 + -0x11) = *(undefined8 *)(param_2 + -0x44 + (longlong)puVar8);
      if (*(longlong *)(param_2 + -0x3c + (longlong)puVar8) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar8 + -0xf) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar8 + -0xf) = *(undefined8 *)(param_2 + -0x3c + (longlong)puVar8);
      if (*(longlong *)(param_2 + -0x34 + (longlong)puVar8) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar8 + -0xd) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar8 + -0xd) = *(undefined8 *)(param_2 + -0x34 + (longlong)puVar8);
      puVar8[-0xb] = *(uint *)(param_2 + -0x2c + (longlong)puVar8);
      if (*(longlong *)(param_2 + -0x24 + (longlong)puVar8) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar8 + -9) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar8 + -9) = *(undefined8 *)(param_2 + -0x24 + (longlong)puVar8);
      puVar8[-7] = *(uint *)(param_2 + -0x1c + (longlong)puVar8);
      puVar8[-6] = *(uint *)(param_2 + -0x18 + (longlong)puVar8);
      *(undefined2 *)(puVar8 + -5) = *(undefined2 *)(param_2 + -0x14 + (longlong)puVar8);
      *(undefined1 *)((longlong)puVar8 + -0x12) =
           *(undefined1 *)(param_2 + -0x12 + (longlong)puVar8);
      puVar8[-4] = *(uint *)(param_2 + -0x10 + (longlong)puVar8);
      uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar8);
      uVar4 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar8);
      uVar7 = FUN_143703a50();
      if ((int)(*puVar8 & 0x3fffffff) < (int)uVar3) {
        FUN_14370c310(uVar7,puVar8 + -3,uVar3,8);
      }
      FUN_143738e40(*(undefined8 *)(puVar8 + -3),uVar4,uVar3);
      puVar8[-1] = uVar3;
      puVar8[1] = *(uint *)(param_2 + 4 + (longlong)puVar8);
      puVar8 = puVar8 + 0x34;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 14381ed90 FUN_14381ed90 body=58 status=ok
// SIG undefined FUN_14381ed90(void)

void FUN_14381ed90(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14385a400(param_1);
      }
      param_1 = param_1 + 0xa0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381edd0 FUN_14381edd0 body=139 status=ok
// SIG undefined FUN_14381edd0(void)

longlong FUN_14381edd0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c1b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x58;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x58);
    }
  }
  return param_1;
}



// FUNCTION 14381ee60 FUN_14381ee60 body=18 status=ok
// SIG undefined FUN_14381ee60(void)

undefined8 * FUN_14381ee60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146810c80;
  return param_2;
}



// FUNCTION 14381ee80 FUN_14381ee80 body=18 status=ok
// SIG undefined FUN_14381ee80(void)

undefined8 * FUN_14381ee80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146810cf0;
  return param_2;
}



// FUNCTION 14381eea0 FUN_14381eea0 body=12 status=ok
// SIG undefined FUN_14381eea0(void)

void FUN_14381eea0(longlong param_1)

{
  FUN_14382fb40(param_1 + 0x94);
  return;
}



// FUNCTION 14381eeb0 FUN_14381eeb0 body=252 status=ok
// SIG undefined FUN_14381eeb0(void)

void FUN_14381eeb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (0 < param_4) {
    puVar7 = (uint *)(param_1 + 0xc);
    lVar10 = (longlong)param_4;
    do {
      puVar1 = puVar7 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0x80000000;
        iVar2 = *(int *)((param_2 - param_1) + -4 + (longlong)puVar7);
        lVar11 = (longlong)iVar2;
        lVar9 = *(longlong *)((longlong)puVar7 + (param_2 - param_1) + -0xc);
        uVar4 = FUN_143703a50();
        uVar6 = *puVar7 & 0x3fffffff;
        uVar8 = puVar7[-1] + iVar2;
        if (((int)uVar6 < (int)uVar8) && ((int)uVar6 < (int)uVar8)) {
          uVar3 = uVar8;
          if ((int)uVar8 < (int)(uVar6 * 2)) {
            uVar3 = uVar6 * 2;
          }
          FUN_14370c310(uVar4,puVar1,uVar3,4);
        }
        puVar5 = (undefined4 *)(*(longlong *)puVar1 + (longlong)(int)puVar7[-1] * 4);
        if (0 < iVar2) {
          lVar9 = lVar9 - (longlong)puVar5;
          do {
            *puVar5 = *(undefined4 *)(lVar9 + (longlong)puVar5);
            puVar5 = puVar5 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        puVar7[-1] = uVar8;
      }
      puVar7 = puVar7 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return;
}



// FUNCTION 14381efb0 FUN_14381efb0 body=126 status=ok
// SIG undefined FUN_14381efb0(void)

void FUN_14381efb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = *(undefined8 *)(param_2 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 8 + (longlong)puVar1);
      if (*(longlong *)(param_2 + 0x10 + (longlong)puVar1) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar1 + 4) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14381f030 FUN_14381f030 body=47 status=ok
// SIG undefined FUN_14381f030(void)

undefined1 FUN_14381f030(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14382faf0();
  if (cVar1 != '\0') {
    cVar1 = FUN_14382fb00(param_1 + 1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381f060 FUN_14381f060 body=56 status=ok
// SIG undefined FUN_14381f060(void)

void FUN_14381f060(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438293c0(param_1 + 8);
      }
      param_1 = param_1 + 0x28;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f0c0 FUN_14381f0c0 body=51 status=ok
// SIG undefined FUN_14381f0c0(void)

undefined1 FUN_14381f0c0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381f100 FUN_14381f100 body=18 status=ok
// SIG undefined FUN_14381f100(void)

undefined8 * FUN_14381f100(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146810db0;
  return param_2;
}



// FUNCTION 14381f120 FUN_14381f120 body=77 status=ok
// SIG undefined FUN_14381f120(void)

void FUN_14381f120(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a600(param_1,local_res18);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f180 func body=64 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkaiPathfindingUtil::FindGraphPathInput>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0xa0 + param_1;
    do {
      FUN_14385a440(param_1);
      param_1 = param_1 + -0xa0;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 14381f220 FUN_14381f220 body=73 status=ok
// SIG undefined FUN_14381f220(void)

undefined1 FUN_14381f220(longlong param_1)

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
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14381f270 FUN_14381f270 body=18 status=ok
// SIG undefined FUN_14381f270(void)

undefined8 * FUN_14381f270(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146811240;
  return param_2;
}



// FUNCTION 14381f290 FUN_14381f290 body=350 status=ok
// SIG undefined FUN_14381f290(void)

void FUN_14381f290(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar8 = (uint *)(param_1 + 0x24);
    lVar11 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar8 + -7,param_2 + -0x1c + (longlong)puVar8);
      uVar1 = *(uint *)((longlong)puVar8 + param_2 + -4);
      lVar2 = *(longlong *)(param_2 + -0xc + (longlong)puVar8);
      uVar5 = FUN_143703a50();
      if ((int)(*puVar8 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar5,puVar8 + -3,uVar1,8);
      }
      lVar10 = *(longlong *)(puVar8 + -3);
      iVar4 = (puVar8[-1] - uVar1) + -1;
      lVar6 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          if (*(longlong *)(lVar10 + (longlong)(int)uVar1 * 8 + lVar6 * 8) != 0) {
            FUN_14370c150();
          }
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      uVar9 = uVar1;
      if ((int)puVar8[-1] < (int)uVar1) {
        uVar9 = puVar8[-1];
      }
      FUN_1437f30b0(*(undefined8 *)(puVar8 + -3),lVar2,uVar9);
      plVar7 = (longlong *)(*(longlong *)(puVar8 + -3) + (longlong)(int)uVar9 * 8);
      lVar10 = (longlong)(int)(uVar1 - uVar9);
      if (0 < (int)(uVar1 - uVar9)) {
        lVar6 = (longlong)(int)uVar9 * 8 - (longlong)plVar7;
        do {
          if ((plVar7 != (longlong *)0x0) &&
             (lVar3 = *(longlong *)(lVar2 + lVar6 + (longlong)plVar7), *plVar7 = lVar3, lVar3 != 0))
          {
            FUN_14370c030();
          }
          plVar7 = plVar7 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      puVar8[-1] = uVar1;
      *(undefined8 *)(puVar8 + 1) = *(undefined8 *)(param_2 + 4 + (longlong)puVar8);
      puVar8 = puVar8 + 0xc;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}



// FUNCTION 14381f3f0 FUN_14381f3f0 body=9 status=ok
// SIG undefined FUN_14381f3f0(void)

void FUN_14381f3f0(longlong param_1)

{
  FUN_143823040(param_1 + 0x60);
  return;
}



// FUNCTION 14381f400 FUN_14381f400 body=74 status=ok
// SIG undefined FUN_14381f400(void)

void FUN_14381f400(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143829c90(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f450 FUN_14381f450 body=165 status=ok
// SIG undefined FUN_14381f450(void)

longlong FUN_14381f450(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      sVar2 = 0x38;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14381f520 FUN_14381f520 body=51 status=ok
// SIG undefined FUN_14381f520(void)

undefined1 FUN_14381f520(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x18);
  if (cVar1 != '\0') {
    cVar1 = FUN_143707170(param_1 + 0x28);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381f560 FUN_14381f560 body=55 status=ok
// SIG undefined FUN_14381f560(void)

void FUN_14381f560(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14387d060(param_1);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f5a0 FUN_14381f5a0 body=51 status=ok
// SIG undefined FUN_14381f5a0(void)

undefined1 FUN_14381f5a0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x60);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x70);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14381f5e0 FUN_14381f5e0 body=164 status=ok
// SIG undefined FUN_14381f5e0(void)

void FUN_14381f5e0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x2c);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -0xb) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -9) = 0;
        puVar1[-7] = 0x1ffff;
        *(undefined ***)(puVar1 + -0xb) = hkaiDynamicUserEdgeSetInfo::ExternalEdges::vftable;
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        FUN_143734b10(puVar1 + 1);
        *(undefined8 *)(puVar1 + 5) = 0;
        puVar1[7] = 0;
        puVar1[8] = 0x80000000;
        FUN_143734b10(puVar1 + 9);
      }
      puVar1 = puVar1 + 0x18;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14381f6d0 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::NavigatorSetGoals>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        USBZSpawnManagerFunctionLibrary::RequestActor(param_1,local_res18);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f720 FUN_14381f720 body=136 status=ok
// SIG undefined FUN_14381f720(void)

longlong FUN_14381f720(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c960();
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



// FUNCTION 14381f7b0 FUN_14381f7b0 body=55 status=ok
// SIG undefined FUN_14381f7b0(void)

void FUN_14381f7b0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438878f0(param_1);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f7f0 FUN_14381f7f0 body=136 status=ok
// SIG undefined FUN_14381f7f0(void)

longlong FUN_14381f7f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c510();
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



// FUNCTION 14381f880 FUN_14381f880 body=58 status=ok
// SIG undefined FUN_14381f880(void)

void FUN_14381f880(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143830860(param_1);
      }
      param_1 = param_1 + 0xe0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f8c0 FUN_14381f8c0 body=99 status=ok
// SIG undefined FUN_14381f8c0(void)

undefined8 * FUN_14381f8c0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkaiWorld::Listener::vftable;
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



// FUNCTION 14381f930 FUN_14381f930 body=18 status=ok
// SIG undefined FUN_14381f930(void)

undefined8 * FUN_14381f930(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146811990;
  return param_2;
}



// FUNCTION 14381f950 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::NavigatorSetGoals>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        UKismetSystemLibrary::GetDeviceId(param_1,local_res18);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381f9a0 FUN_14381f9a0 body=18 status=ok
// SIG undefined FUN_14381f9a0(void)

undefined8 * FUN_14381f9a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146820bb0;
  return param_2;
}



// FUNCTION 14381f9c0 FUN_14381f9c0 body=60 status=ok
// SIG undefined FUN_14381f9c0(void)

void FUN_14381f9c0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x70 + param_1;
    do {
      FUN_143887950(param_1);
      param_1 = param_1 + -0x70;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 14381fa00 FUN_14381fa00 body=159 status=ok
// SIG undefined FUN_14381fa00(void)

void FUN_14381fa00(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  int local_res18 [2];
  
  if (0 < param_3) {
    piVar4 = (int *)(param_1 + 0x14);
    lVar5 = (longlong)param_3;
    do {
      if (piVar4 != (int *)&DAT_00000014) {
        piVar4[-3] = 0;
        piVar4[-2] = 0;
        piVar4[-1] = 0;
        *piVar4 = -0x80000000;
        local_res18[0] = 0;
        uVar2 = FUN_143703a50();
        iVar1 = local_res18[0];
        uVar3 = 0;
        if (local_res18[0] != 0) {
          uVar3 = FUN_143702d60(uVar2,4,local_res18);
        }
        *(undefined8 *)(piVar4 + -3) = uVar3;
        piVar4[-1] = iVar1;
        iVar1 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar1 = local_res18[0];
        }
        *piVar4 = iVar1;
        piVar4[1] = 0;
      }
      piVar4 = piVar4 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 14381faa0 FUN_14381faa0 body=18 status=ok
// SIG undefined FUN_14381faa0(void)

undefined8 * FUN_14381faa0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146811d10;
  return param_2;
}



// FUNCTION 14381fac0 FUN_14381fac0 body=80 status=ok
// SIG undefined FUN_14381fac0(void)

void FUN_14381fac0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  if (0 < param_3) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 0x12) = 0xbf800000;
        puVar2 = param_1 + 2;
        for (lVar1 = 0x20; lVar1 != 0; lVar1 = lVar1 + -1) {
          *(undefined4 *)puVar2 = 0xbf800000;
          puVar2 = (undefined8 *)((longlong)puVar2 + 4);
        }
      }
      param_1 = param_1 + 0x14;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14381fb20 FUN_14381fb20 body=18 status=ok
// SIG undefined FUN_14381fb20(void)

undefined8 * FUN_14381fb20(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146811df0;
  return param_2;
}



// FUNCTION 14381fb40 FUN_14381fb40 body=203 status=ok
// SIG undefined FUN_14381fb40(void)

longlong FUN_14381fb40(longlong param_1,ulonglong param_2)

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
      if (param_1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 14381fc10 FUN_14381fc10 body=136 status=ok
// SIG undefined FUN_14381fc10(void)

longlong FUN_14381fc10(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14382c5a0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 0x10);
      if (sVar2 == -1) {
        sVar2 = 0x68;
      }
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 14381fca0 FUN_14381fca0 body=18 status=ok
// SIG undefined FUN_14381fca0(void)

undefined8 * FUN_14381fca0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468213b0;
  return param_2;
}



// FUNCTION 14381fcc0 FUN_14381fcc0 body=179 status=ok
// SIG undefined FUN_14381fcc0(void)

longlong FUN_14381fcc0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_14370c150();
  }
  FUN_14386ae40(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14381fdb0 FUN_14381fdb0 body=74 status=ok
// SIG undefined FUN_14381fdb0(void)

void FUN_14381fdb0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a500(param_1,local_res18);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381fe00 FUN_14381fe00 body=55 status=ok
// SIG undefined FUN_14381fe00(void)

void FUN_14381fe00(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143862e20(param_1);
      }
      param_1 = param_1 + 0x40;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381fe40 FUN_14381fe40 body=18 status=ok
// SIG undefined FUN_14381fe40(void)

undefined8 * FUN_14381fe40(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468121a0;
  return param_2;
}



// FUNCTION 14381ff10 FUN_14381ff10 body=55 status=ok
// SIG undefined FUN_14381ff10(void)

void FUN_14381ff10(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438342c0(param_1);
      }
      param_1 = param_1 + 0x78;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 14381ff70 FUN_14381ff70 body=171 status=ok
// SIG undefined FUN_14381ff70(void)

longlong FUN_14381ff70(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 143820020 FUN_143820020 body=203 status=ok
// SIG undefined FUN_143820020(void)

longlong FUN_143820020(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
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
        sVar3 = 0x28;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar3 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x28);
    }
  }
  return param_1;
}



// FUNCTION 1438200f0 FUN_1438200f0 body=212 status=ok
// SIG undefined FUN_1438200f0(void)

longlong FUN_1438200f0(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  short sVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),0x20,*(uint *)(param_1 + 0x3c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_14370c000(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      sVar3 = 0x50;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar3 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar2 + 0x58),param_1,sVar3);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1438201e0 FUN_1438201e0 body=9 status=ok
// SIG undefined FUN_1438201e0(void)

void FUN_1438201e0(longlong param_1)

{
  BuildSettings::IsPromotedBuild(param_1 + 0x28);
  return;
}



// FUNCTION 1438201f0 FUN_1438201f0 body=139 status=ok
// SIG undefined FUN_1438201f0(void)

longlong FUN_1438201f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143832730();
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



// FUNCTION 143820290 FUN_143820290 body=188 status=ok
// SIG undefined FUN_143820290(void)

void FUN_143820290(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined1 *)(param_1 + 1);
    do {
      if (puVar1 + -1 != (undefined1 *)0x0) {
        puVar1[-1] = puVar1[param_2 + -1];
        *puVar1 = puVar1[param_2];
        puVar1[1] = puVar1[param_2 + 1];
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar1 + param_2 + 3);
        *(undefined8 *)(puVar1 + 7) = *(undefined8 *)(puVar1 + param_2 + 7);
        *(undefined8 *)(puVar1 + 0xf) = *(undefined8 *)(puVar1 + param_2 + 0xf);
        *(undefined4 *)(puVar1 + 0x17) = *(undefined4 *)(puVar1 + param_2 + 0x17);
        *(undefined4 *)(puVar1 + 0x1b) = *(undefined4 *)(puVar1 + param_2 + 0x1b);
        *(undefined4 *)(puVar1 + 0x1f) = *(undefined4 *)(puVar1 + param_2 + 0x1f);
        *(undefined4 *)(puVar1 + 0x23) = *(undefined4 *)(puVar1 + param_2 + 0x23);
        *(undefined4 *)(puVar1 + 0x27) = *(undefined4 *)(puVar1 + param_2 + 0x27);
        *(undefined4 *)(puVar1 + 0x2b) = *(undefined4 *)(puVar1 + param_2 + 0x2b);
        puVar1[0x2f] = puVar1[param_2 + 0x2f];
        FUN_1437165f0(puVar1 + 0x37,puVar1 + param_2 + 0x37);
      }
      puVar1 = puVar1 + 0x40;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143820350 FUN_143820350 body=18 status=ok
// SIG undefined FUN_143820350(void)

undefined8 * FUN_143820350(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812540;
  return param_2;
}



// FUNCTION 143820370 FUN_143820370 body=369 status=ok
// SIG undefined FUN_143820370(void)

void FUN_143820370(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  int local_res20 [2];
  
  if (0 < param_4) {
    piVar12 = (int *)(param_1 + 0x50);
    param_2 = param_2 - param_1;
    lVar13 = (longlong)param_4;
    do {
      piVar1 = piVar12 + -0x14;
      if (piVar1 != (int *)0x0) {
        FUN_14382a870(piVar1,param_2 + -0x50 + (longlong)piVar12);
        *(undefined ***)piVar1 = hkaiNavigator::PathRequest::vftable;
        *(undefined8 *)(piVar12 + -6) = *(undefined8 *)(param_2 + -0x18 + (longlong)piVar12);
        lVar14 = *(longlong *)(param_2 + -0x10 + (longlong)piVar12);
        *(longlong *)(piVar12 + -4) = lVar14;
        if (lVar14 != 0) {
          FUN_14370c030();
        }
        piVar12[-2] = 0;
        piVar12[-1] = 0;
        *piVar12 = 0;
        piVar12[1] = -0x80000000;
        iVar4 = *(int *)(param_2 + (longlong)piVar12);
        lVar14 = (longlong)iVar4;
        local_res20[0] = iVar4;
        uVar8 = FUN_143703a50();
        iVar10 = local_res20[0];
        puVar9 = (undefined8 *)0x0;
        if (local_res20[0] != 0) {
          puVar9 = (undefined8 *)FUN_143702d60(uVar8,0x90,local_res20);
        }
        *(undefined8 **)(piVar12 + -2) = puVar9;
        *piVar12 = iVar10;
        iVar10 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar10 = local_res20[0];
        }
        piVar12[1] = iVar10;
        if (0 < iVar4) {
          lVar11 = *(longlong *)(param_2 + -8 + (longlong)piVar12) - (longlong)puVar9;
          do {
            uVar8 = ((undefined8 *)(lVar11 + (longlong)puVar9))[1];
            *puVar9 = *(undefined8 *)(lVar11 + (longlong)puVar9);
            puVar9[1] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x10 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[2] = *puVar2;
            puVar9[3] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x20 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[4] = *puVar2;
            puVar9[5] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x30 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[6] = *puVar2;
            puVar9[7] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x40 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[8] = *puVar2;
            puVar9[9] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x50 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[10] = *puVar2;
            puVar9[0xb] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x60 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[0xc] = *puVar2;
            puVar9[0xd] = uVar8;
            puVar2 = (undefined8 *)(lVar11 + 0x70 + (longlong)puVar9);
            uVar8 = puVar2[1];
            puVar9[0xe] = *puVar2;
            puVar9[0xf] = uVar8;
            puVar3 = (undefined4 *)(lVar11 + 0x80 + (longlong)puVar9);
            uVar5 = puVar3[1];
            uVar6 = puVar3[2];
            uVar7 = puVar3[3];
            *(undefined4 *)(puVar9 + 0x10) = *puVar3;
            *(undefined4 *)((longlong)puVar9 + 0x84) = uVar5;
            *(undefined4 *)(puVar9 + 0x11) = uVar6;
            *(undefined4 *)((longlong)puVar9 + 0x8c) = uVar7;
            puVar9 = puVar9 + 0x12;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      piVar12 = piVar12 + 0x16;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



// FUNCTION 143820500 FUN_143820500 body=74 status=ok
// SIG undefined FUN_143820500(void)

void FUN_143820500(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438299d0(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143820560 FUN_143820560 body=136 status=ok
// SIG undefined FUN_143820560(void)

void FUN_143820560(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x34);
    lVar2 = (longlong)param_3;
    do {
      if (puVar1 != (undefined4 *)&DAT_00000034) {
        *(undefined8 *)(puVar1 + -0xb) = 0;
        puVar1[-9] = 0;
        puVar1[-8] = 0x80000000;
        FUN_143734b10(puVar1 + -7);
        *(undefined8 *)(puVar1 + -3) = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        FUN_143734b10(puVar1 + 1);
        *(undefined8 *)(puVar1 + 5) = 0;
        puVar1[7] = 0;
        puVar1[8] = 0x80000000;
        FUN_143734b10(puVar1 + 9);
      }
      puVar1 = puVar1 + 0x1a;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1438205f0 FUN_1438205f0 body=51 status=ok
// SIG undefined FUN_1438205f0(void)

undefined1 FUN_1438205f0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14382fab0(param_1 + 0x4c);
  if (cVar1 != '\0') {
    cVar1 = BuildSettings::IsPromotedBuild(param_1 + 0x4d);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143820630 FUN_143820630 body=18 status=ok
// SIG undefined FUN_143820630(void)

undefined8 * FUN_143820630(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812670;
  return param_2;
}



// FUNCTION 1438206a0 FUN_1438206a0 body=55 status=ok
// SIG undefined FUN_1438206a0(void)

void FUN_1438206a0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143833440(param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438206e0 FUN_1438206e0 body=61 status=ok
// SIG undefined FUN_1438206e0(void)

void FUN_1438206e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    lVar1 = param_1 + 0x38 + (longlong)param_3 * 0x40;
    do {
      FUN_143716650(lVar1);
      lVar1 = lVar1 + -0x40;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143820720 FUN_143820720 body=74 status=ok
// SIG undefined FUN_143820720(void)

void FUN_143820720(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b9c0(param_1,local_res18);
      }
      param_1 = param_1 + 0x70;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143820770 FUN_143820770 body=18 status=ok
// SIG undefined FUN_143820770(void)

undefined8 * FUN_143820770(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468126d0;
  return param_2;
}



// FUNCTION 143820790 FUN_143820790 body=58 status=ok
// SIG undefined FUN_143820790(void)

void FUN_143820790(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1438630f0(param_1);
      }
      param_1 = param_1 + 0x100;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143820810 FUN_143820810 body=9 status=ok
// SIG undefined FUN_143820810(void)

void FUN_143820810(longlong param_1)

{
  FUN_14382fa60(param_1 + 0x18);
  return;
}



// FUNCTION 143820830 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::NavigatorSetGoals>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382aba0(param_1,local_res18);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143820880 FUN_143820880 body=18 status=ok
// SIG undefined FUN_143820880(void)

undefined8 * FUN_143820880(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812a60;
  return param_2;
}



// FUNCTION 1438208e0 FUN_1438208e0 body=75 status=ok
// SIG undefined FUN_1438208e0(void)

void FUN_1438208e0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_143833400(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143820930 FUN_143820930 body=187 status=ok
// SIG undefined FUN_143820930(void)

void FUN_143820930(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined1 *)(param_1 + 1);
    do {
      puVar1[-1] = puVar1[param_2 + -1];
      *puVar1 = puVar1[param_2];
      puVar1[1] = puVar1[param_2 + 1];
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar1 + param_2 + 3);
      *(undefined8 *)(puVar1 + 7) = *(undefined8 *)(puVar1 + param_2 + 7);
      *(undefined8 *)(puVar1 + 0xf) = *(undefined8 *)(puVar1 + param_2 + 0xf);
      *(undefined4 *)(puVar1 + 0x17) = *(undefined4 *)(puVar1 + param_2 + 0x17);
      *(undefined4 *)(puVar1 + 0x1b) = *(undefined4 *)(puVar1 + param_2 + 0x1b);
      *(undefined4 *)(puVar1 + 0x1f) = *(undefined4 *)(puVar1 + param_2 + 0x1f);
      *(undefined4 *)(puVar1 + 0x23) = *(undefined4 *)(puVar1 + param_2 + 0x23);
      *(undefined4 *)(puVar1 + 0x27) = *(undefined4 *)(puVar1 + param_2 + 0x27);
      *(undefined4 *)(puVar1 + 0x2b) = *(undefined4 *)(puVar1 + param_2 + 0x2b);
      puVar1[0x2f] = puVar1[param_2 + 0x2f];
      FUN_143716660(puVar1 + 0x37,puVar1 + param_2 + 0x37);
      puVar1 = puVar1 + 0x40;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1438209f0 FUN_1438209f0 body=594 status=ok
// SIG undefined FUN_1438209f0(void)

void FUN_1438209f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res20 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar11 = (undefined1 *)(param_1 + 0x34);
    lVar12 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(puVar11 + -0x34);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(puVar11 + -0x2c,puVar11 + param_2 + -0x2c);
        *(undefined4 *)(puVar11 + -0x24) = 0x1ffff;
        *puVar1 = hkaiNavMeshCutter::vftable;
        lVar10 = *(longlong *)(puVar11 + param_2 + -0x1c);
        *(longlong *)(puVar11 + -0x1c) = lVar10;
        if (lVar10 != 0) {
          FUN_14370c030();
        }
        *(undefined8 *)(puVar11 + -0x14) = 0;
        *(undefined4 *)(puVar11 + -0xc) = 0;
        *(undefined4 *)(puVar11 + -8) = 0x80000000;
        local_res20[0] = *(int *)(puVar11 + param_2 + -0xc);
        lVar10 = (longlong)local_res20[0];
        uVar8 = FUN_143703a50();
        iVar7 = local_res20[0];
        plVar9 = (longlong *)0x0;
        if (local_res20[0] != 0) {
          plVar9 = (longlong *)FUN_143702d60(uVar8,8,local_res20);
        }
        *(longlong **)(puVar11 + -0x14) = plVar9;
        *(int *)(puVar11 + -0xc) = iVar7;
        iVar7 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar7 = local_res20[0];
        }
        *(int *)(puVar11 + -8) = iVar7;
        if (0 < lVar10) {
          lVar13 = *(longlong *)(puVar11 + param_2 + -0x14) - (longlong)plVar9;
          do {
            if ((plVar9 != (longlong *)0x0) &&
               (lVar3 = *(longlong *)(lVar13 + (longlong)plVar9), *plVar9 = lVar3, lVar3 != 0)) {
              FUN_14370c030();
            }
            plVar9 = plVar9 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        *(undefined4 *)(puVar11 + -4) = *(undefined4 *)(puVar11 + param_2 + -4);
        *puVar11 = puVar11[param_2];
        *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(puVar11 + param_2 + 4);
        *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar11 + param_2 + 8);
        uVar8 = *(undefined8 *)((longlong)(puVar11 + param_2 + 0xc) + 8);
        *(undefined8 *)(puVar11 + 0xc) = *(undefined8 *)(puVar11 + param_2 + 0xc);
        *(undefined8 *)(puVar11 + 0x14) = uVar8;
        uVar8 = *(undefined8 *)((longlong)(puVar11 + param_2 + 0x1c) + 8);
        *(undefined8 *)(puVar11 + 0x1c) = *(undefined8 *)(puVar11 + param_2 + 0x1c);
        *(undefined8 *)(puVar11 + 0x24) = uVar8;
        uVar8 = *(undefined8 *)((longlong)(puVar11 + param_2 + 0x2c) + 8);
        *(undefined8 *)(puVar11 + 0x2c) = *(undefined8 *)(puVar11 + param_2 + 0x2c);
        *(undefined8 *)(puVar11 + 0x34) = uVar8;
        puVar2 = (undefined4 *)(puVar11 + param_2 + 0x3c);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar11 + 0x3c) = *puVar2;
        *(undefined4 *)(puVar11 + 0x40) = uVar4;
        *(undefined4 *)(puVar11 + 0x44) = uVar5;
        *(undefined4 *)(puVar11 + 0x48) = uVar6;
        *(undefined8 *)(puVar11 + 0x4c) = *(undefined8 *)(puVar11 + param_2 + 0x4c);
        lVar10 = *(longlong *)(puVar11 + param_2 + 0x54);
        *(longlong *)(puVar11 + 0x54) = lVar10;
        if (lVar10 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(puVar11 + 0x5c) = *(undefined4 *)(puVar11 + param_2 + 0x5c);
        *(undefined4 *)(puVar11 + 0x60) = *(undefined4 *)(puVar11 + param_2 + 0x60);
        puVar11[100] = puVar11[param_2 + 100];
        *(undefined4 *)(puVar11 + 0x68) = *(undefined4 *)(puVar11 + param_2 + 0x68);
        puVar11[0x6c] = puVar11[param_2 + 0x6c];
        *(undefined4 *)(puVar11 + 0x70) = *(undefined4 *)(puVar11 + param_2 + 0x70);
        *(undefined4 *)(puVar11 + 0x74) = *(undefined4 *)(puVar11 + param_2 + 0x74);
        FUN_143828e10(puVar11 + 0x7c,puVar11 + param_2 + 0x7c);
        FUN_143828c60(puVar11 + 0x9c,puVar11 + param_2 + 0x9c);
        lVar10 = *(longlong *)(puVar11 + param_2 + 0xbc);
        *(longlong *)(puVar11 + 0xbc) = lVar10;
        if (lVar10 != 0) {
          FUN_14370c030();
        }
      }
      puVar11 = puVar11 + 0x100;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 143820c60 FUN_143820c60 body=249 status=ok
// SIG undefined FUN_143820c60(void)

void FUN_143820c60(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_3;
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    do {
      if ((undefined8 *)(puVar1 + -8) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -6) = 0;
        puVar1[-4] = 0x1ffff;
        *(undefined ***)(puVar1 + -8) = hkaiAvoidanceProperties::vftable;
        puVar1[-2] = 0x3ca3d70a;
        puVar1[-1] = 0x40b47ae1;
        *puVar1 = 0x41a00000;
        puVar1[1] = 0x41f00000;
        puVar1[2] = 0xbf800000;
        puVar1[3] = 0xbf800000;
        puVar1[4] = 0x407b53d2;
        puVar1[5] = 0x40347ae1;
        *(undefined1 *)(puVar1 + 6) = 2;
        *(undefined1 *)(puVar1 + 7) = 1;
        puVar1[0x10] = 0x3dcccccd;
        puVar1[0xc] = 0x40a00000;
        puVar1[0xd] = 0x40a00000;
        puVar1[0xe] = 0x40a00000;
        puVar1[0xf] = 0x40a00000;
        puVar1[8] = 0xc0a00000;
        puVar1[9] = 0xc0a00000;
        puVar1[10] = 0xc0a00000;
        puVar1[0xb] = 0xc0a00000;
        puVar1[0x11] = 0x3f800000;
        *(undefined8 *)(puVar1 + 0x12) = 0x3c23d70a;
        puVar1[0x14] = 0x3f800000;
        puVar1[0x15] = 0x42c80000;
        puVar1[0x16] = 0x10;
      }
      puVar1 = puVar1 + 0x20;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143820d60 FUN_143820d60 body=434 status=ok
// SIG undefined FUN_143820d60(void)

void FUN_143820d60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar4 = (uint *)(param_1 + 0x54);
    lVar5 = (longlong)param_4;
    do {
      FUN_1437182e0(puVar4 + -0x13,(longlong)puVar4 + param_2 + -0x4c);
      *(undefined1 *)(puVar4 + -0xf) = *(undefined1 *)(param_2 + -0x3c + (longlong)puVar4);
      puVar4[-0xe] = *(uint *)(param_2 + -0x38 + (longlong)puVar4);
      *(undefined1 *)(puVar4 + -0xd) = *(undefined1 *)(param_2 + -0x34 + (longlong)puVar4);
      if (*(longlong *)(param_2 + -0x2c + (longlong)puVar4) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar4 + -0xb) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar4 + -0xb) = *(undefined8 *)(param_2 + -0x2c + (longlong)puVar4);
      if (*(longlong *)(param_2 + -0x24 + (longlong)puVar4) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar4 + -9) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar4 + -9) = *(undefined8 *)(param_2 + -0x24 + (longlong)puVar4);
      *(undefined8 *)(puVar4 + -7) = *(undefined8 *)(param_2 + -0x1c + (longlong)puVar4);
      if (*(longlong *)(param_2 + -0x14 + (longlong)puVar4) != 0) {
        FUN_14370c030();
      }
      if (*(longlong *)(puVar4 + -5) != 0) {
        FUN_14370c150();
      }
      *(undefined8 *)(puVar4 + -5) = *(undefined8 *)(param_2 + -0x14 + (longlong)puVar4);
      uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar4);
      uVar2 = *(undefined8 *)(param_2 + -0xc + (longlong)puVar4);
      uVar3 = FUN_143703a50();
      if ((int)(*puVar4 & 0x3fffffff) < (int)uVar1) {
        FUN_14370c310(uVar3,puVar4 + -3,uVar1,0x90);
      }
      FUN_143828b80(*(undefined8 *)(puVar4 + -3),uVar2,uVar1);
      puVar4[-1] = uVar1;
      puVar4 = puVar4 + 0x16;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143820f20 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiStreamingSet::ClusterGraphConnection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        hkaiStreamingSet::ClusterGraphConnection::ClusterGraphConnection(param_1);
      }
      param_1 = param_1 + 0x14;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143820f60 FUN_143820f60 body=139 status=ok
// SIG undefined FUN_143820f60(void)

longlong FUN_143820f60(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14386ae40();
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



// FUNCTION 143820ff0 FUN_143820ff0 body=50 status=ok
// SIG undefined FUN_143820ff0(void)

undefined1 FUN_143820ff0(longlong param_1)

{
  char cVar1;
  
  cVar1 = thunk_FUN_143707170();
  if (cVar1 != '\0') {
    cVar1 = FUN_14381f030(param_1 + 0x260);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143821030 FUN_143821030 body=18 status=ok
// SIG undefined FUN_143821030(void)

undefined8 * FUN_143821030(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14681aa00;
  return param_2;
}



// FUNCTION 143821050 FUN_143821050 body=18 status=ok
// SIG undefined FUN_143821050(void)

undefined8 * FUN_143821050(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812bf0;
  return param_2;
}



// FUNCTION 143821070 FUN_143821070 body=90 status=ok
// SIG undefined FUN_143821070(void)

undefined1 FUN_143821070(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x20);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x30);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x40);
      if (cVar1 != '\0') {
        cVar1 = FUN_14370b790(param_1 + 0x50);
        if (cVar1 != '\0') {
          cVar1 = FUN_14370b790(param_1 + 0x60);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1438210d0 FUN_1438210d0 body=60 status=ok
// SIG undefined FUN_1438210d0(void)

void FUN_1438210d0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + (longlong)param_3 * 0x18;
    do {
      FUN_1438336b0(param_1);
      param_1 = param_1 + -0x18;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143821110 FUN_143821110 body=9 status=ok
// SIG undefined FUN_143821110(void)

void FUN_143821110(longlong param_1)

{
  FUN_14382fa70(param_1 + 0x20);
  return;
}



// FUNCTION 143821120 FUN_143821120 body=74 status=ok
// SIG undefined FUN_143821120(void)

void FUN_143821120(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b980(param_1,local_res18);
      }
      param_1 = param_1 + 0x38;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821170 FUN_143821170 body=9 status=ok
// SIG undefined FUN_143821170(void)

void FUN_143821170(longlong param_1)

{
  FUN_1437e3830(param_1 + 0x50);
  return;
}



// FUNCTION 143821190 FUN_143821190 body=74 status=ok
// SIG undefined FUN_143821190(void)

void FUN_143821190(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143829ec0(param_1,local_res18);
      }
      param_1 = param_1 + 0x58;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821240 FUN_143821240 body=70 status=ok
// SIG undefined FUN_143821240(void)

void FUN_143821240(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_1438337c0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821290 FUN_143821290 body=18 status=ok
// SIG undefined FUN_143821290(void)

undefined8 * FUN_143821290(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812dd0;
  return param_2;
}



// FUNCTION 143821300 thunk_FUN_1437088f0 body=5 status=ok
// SIG undefined thunk_FUN_1437088f0(void)

void thunk_FUN_1437088f0(longlong param_1)

{
  FUN_14370b800(param_1 + 3);
  return;
}



// FUNCTION 143821310 FUN_143821310 body=171 status=ok
// SIG undefined FUN_143821310(void)

void FUN_143821310(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar2 = param_1 + 8;
    lVar3 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar2 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar2,(param_2 - param_1) + lVar2);
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *puVar1 = hkaiDynamicNavVolumeMediator::vftable;
        *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)((param_2 - param_1) + 0x10 + lVar2);
      }
      lVar2 = lVar2 + 0x20;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438213c0 FUN_1438213c0 body=18 status=ok
// SIG undefined FUN_1438213c0(void)

undefined8 * FUN_1438213c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468130a0;
  return param_2;
}



// FUNCTION 1438213e0 FUN_1438213e0 body=18 status=ok
// SIG undefined FUN_1438213e0(void)

undefined8 * FUN_1438213e0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146812f20;
  return param_2;
}



// FUNCTION 143821410 FUN_143821410 body=287 status=ok
// SIG undefined FUN_143821410(void)

void FUN_143821410(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int local_res18 [2];
  
  if (0 < param_3) {
    puVar4 = (undefined4 *)(param_1 + 0x3c);
    lVar5 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar4 + -0xf) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar4 + -0xd) = 0;
        puVar4[-0xb] = 0x1ffff;
        *(undefined ***)(puVar4 + -0xf) = hkaiCuttingGeometryInfo::vftable;
        *(undefined8 *)(puVar4 + -7) = 0;
        puVar4[-5] = 0x1ffff;
        *(undefined ***)(puVar4 + -9) = hkGeometry::vftable;
        *(undefined8 *)(puVar4 + -3) = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        *(undefined8 *)(puVar4 + 1) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0x80000000;
        *(undefined8 *)(puVar4 + 5) = 0;
        puVar4[7] = 0;
        puVar4[8] = 0x80000000;
        local_res18[0] = 0;
        uVar2 = FUN_143703a50();
        iVar1 = local_res18[0];
        uVar3 = 0;
        if (local_res18[0] != 0) {
          uVar3 = FUN_143702d60(uVar2,4,local_res18);
        }
        *(undefined8 *)(puVar4 + 5) = uVar3;
        puVar4[7] = iVar1;
        iVar1 = -0x80000000;
        if (local_res18[0] != 0) {
          iVar1 = local_res18[0];
        }
        puVar4[8] = iVar1;
        puVar4[9] = 0;
      }
      puVar4 = puVar4 + 0x1a;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 143821540 FUN_143821540 body=18 status=ok
// SIG undefined FUN_143821540(void)

undefined8 * FUN_143821540(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813100;
  return param_2;
}



// FUNCTION 143821570 FUN_143821570 body=377 status=ok
// SIG undefined FUN_143821570(void)

void FUN_143821570(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    puVar8 = (undefined8 *)(param_1 + 0xb0);
    param_2 = param_2 - param_1;
    lVar9 = (longlong)param_4;
    do {
      puVar1 = puVar8 + -0x16;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_14382b640(puVar1,param_2 + -0xb0 + (longlong)puVar8);
        *puVar1 = hkaiEdgeFollowingBehavior::vftable;
        puVar8[-0x13] = hkaiEdgeFollowingBehavior::vftable;
        *(undefined4 *)(puVar8 + -10) = *(undefined4 *)((longlong)puVar8 + param_2 + -0x50);
        *(undefined4 *)((longlong)puVar8 + -0x4c) =
             *(undefined4 *)((longlong)puVar8 + param_2 + -0x4c);
        *(undefined4 *)(puVar8 + -9) = *(undefined4 *)((longlong)puVar8 + param_2 + -0x48);
        lVar3 = *(longlong *)((longlong)puVar8 + param_2 + -0x40);
        puVar8[-8] = lVar3;
        if (lVar3 != 0) {
          FUN_14370c030();
        }
        puVar8[-7] = *(undefined8 *)((longlong)puVar8 + param_2 + -0x38);
        *(undefined4 *)(puVar8 + -6) = *(undefined4 *)((longlong)puVar8 + param_2 + -0x30);
        *(undefined4 *)((longlong)puVar8 + -0x2c) =
             *(undefined4 *)((longlong)puVar8 + param_2 + -0x2c);
        lVar3 = *(longlong *)((longlong)puVar8 + param_2 + -0x28);
        puVar8[-5] = lVar3;
        if (lVar3 != 0) {
          FUN_14370c030();
        }
        *(undefined4 *)(puVar8 + -4) = *(undefined4 *)((longlong)puVar8 + param_2 + -0x20);
        puVar1 = (undefined8 *)((longlong)puVar8 + param_2 + -0x10);
        uVar7 = puVar1[1];
        puVar8[-2] = *puVar1;
        puVar8[-1] = uVar7;
        uVar7 = ((undefined8 *)((longlong)puVar8 + param_2))[1];
        *puVar8 = *(undefined8 *)((longlong)puVar8 + param_2);
        puVar8[1] = uVar7;
        *(undefined4 *)(puVar8 + 2) = *(undefined4 *)((longlong)puVar8 + param_2 + 0x10);
        *(undefined4 *)((longlong)puVar8 + 0x14) =
             *(undefined4 *)((longlong)puVar8 + param_2 + 0x14);
        *(undefined1 *)(puVar8 + 3) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x18);
        *(undefined4 *)(puVar8 + 4) = *(undefined4 *)((longlong)puVar8 + param_2 + 0x20);
        puVar1 = (undefined8 *)((longlong)puVar8 + param_2 + 0x30);
        uVar7 = puVar1[1];
        puVar8[6] = *puVar1;
        puVar8[7] = uVar7;
        puVar1 = (undefined8 *)((longlong)puVar8 + param_2 + 0x40);
        uVar7 = puVar1[1];
        puVar8[8] = *puVar1;
        puVar8[9] = uVar7;
        puVar2 = (undefined4 *)((longlong)puVar8 + param_2 + 0x50);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)(puVar8 + 10) = *puVar2;
        *(undefined4 *)((longlong)puVar8 + 0x54) = uVar4;
        *(undefined4 *)(puVar8 + 0xb) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar6;
        *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)((longlong)puVar8 + param_2 + 0x60);
        *(undefined4 *)((longlong)puVar8 + 100) = *(undefined4 *)((longlong)puVar8 + param_2 + 100);
        *(undefined1 *)(puVar8 + 0xd) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x68);
        *(undefined1 *)((longlong)puVar8 + 0x69) =
             *(undefined1 *)((longlong)puVar8 + param_2 + 0x69);
        *(undefined1 *)(puVar8 + 0xe) = *(undefined1 *)((longlong)puVar8 + param_2 + 0x70);
        *(undefined1 *)((longlong)puVar8 + 0x71) =
             *(undefined1 *)((longlong)puVar8 + param_2 + 0x71);
      }
      puVar8 = puVar8 + 0x26;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 143821700 FUN_143821700 body=58 status=ok
// SIG undefined FUN_143821700(void)

void FUN_143821700(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143841cf0(param_1);
      }
      param_1 = param_1 + 0x98;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821740 func body=78 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<128,hkaiNavMeshInstanceData>::func
               (longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_14382ac30(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x1f0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438217a0 func body=55 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkcdPlanarGeometryPlanesCollection>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143850ae0(param_1);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 1438217e0 func body=94 status=ok
// SIG undefined func(void)

void hkReflect::Detail::
     ExplicitWrapper<256,hkaiNavMeshLightWeightSnapshot::LightWeightGenerationSnapshot>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x130 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x26;
      plVar2 = plVar2 + -0x26;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143821840 FUN_143821840 body=74 status=ok
// SIG undefined FUN_143821840(void)

void FUN_143821840(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382a5c0(param_1,local_res18);
      }
      param_1 = param_1 + 0x50;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821890 FUN_143821890 body=23 status=ok
// SIG undefined FUN_143821890(void)

undefined8 FUN_143821890(undefined8 param_1,undefined8 param_2)

{
  FUN_1438320e0();
  return param_2;
}



// FUNCTION 1438218b0 FUN_1438218b0 body=94 status=ok
// SIG undefined FUN_1438218b0(void)

undefined8 FUN_1438218b0(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_143755360(0x4375f17d,
                        "t:\\UE4-CODE-WIN64DEVELOPMENT\\main\\Engine\\Source\\ThirdParty\\Havok\\Source\\Ai/Pathfinding/Character/Behavior/hkaiSingleCharacterBehavior.h"
                        ,0x33,"hkaiSingleCharacterBehavior::getSavedCharacterState",&DAT_145af3922,
                        "Not implemented",&DAT_145b909f0,0);
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 7;
}



// FUNCTION 143821910 func body=58 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<64,hkaiDefaultAstarEdgeFilter>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14386b7f0(param_1);
      }
      param_1 = param_1 + 0x130;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821950 FUN_143821950 body=879 status=ok
// SIG undefined FUN_143821950(void)

void FUN_143821950(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int local_res20 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [4];
  
  if (0 < param_4) {
    piVar9 = (int *)(param_1 + 0x18);
    param_2 = param_2 - param_1;
    puVar15 = (undefined4 *)0x0;
    lVar16 = (longlong)param_4;
    do {
      piVar2 = piVar9 + -6;
      if (piVar2 != (int *)0x0) {
        piVar2[0] = 0;
        piVar2[1] = 0;
        piVar9[-4] = 0;
        piVar9[-3] = -0x80000000;
        iVar5 = *(int *)(param_2 + -0x10 + (longlong)piVar9);
        lVar10 = (longlong)iVar5;
        local_res20[0] = iVar5;
        uVar6 = FUN_143703a50();
        iVar4 = local_res20[0];
        puVar7 = puVar15;
        if (local_res20[0] != 0) {
          puVar7 = (undefined4 *)FUN_143702d60(uVar6,4,local_res20);
        }
        *(undefined4 **)piVar2 = puVar7;
        piVar9[-4] = iVar4;
        iVar4 = -0x80000000;
        if (local_res20[0] != 0) {
          iVar4 = local_res20[0];
        }
        piVar9[-3] = iVar4;
        if (0 < iVar5) {
          lVar12 = *(longlong *)(param_2 + -0x18 + (longlong)piVar9) - (longlong)puVar7;
          do {
            *puVar7 = *(undefined4 *)(lVar12 + (longlong)puVar7);
            puVar7 = puVar7 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        *piVar9 = 0;
        piVar9[1] = -0x80000000;
        local_48[0] = *(int *)(param_2 + (longlong)piVar9);
        lVar10 = (longlong)local_48[0];
        uVar6 = FUN_143703a50();
        iVar5 = local_48[0];
        puVar7 = puVar15;
        if (local_48[0] != 0) {
          puVar7 = (undefined4 *)FUN_143702d60(uVar6,4,local_48);
        }
        *piVar9 = iVar5;
        *(undefined4 **)(piVar9 + -2) = puVar7;
        iVar5 = -0x80000000;
        if (local_48[0] != 0) {
          iVar5 = local_48[0];
        }
        piVar9[1] = iVar5;
        lVar12 = *(longlong *)(param_2 + -8 + (longlong)piVar9);
        puVar11 = puVar15;
        if (3 < lVar10) {
          lVar13 = lVar12 - (longlong)puVar7;
          lVar14 = (lVar10 - 4U >> 2) + 1;
          puVar8 = puVar7 + 1;
          puVar11 = (undefined4 *)(lVar14 * 4);
          do {
            puVar8[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar8);
            *puVar8 = *(undefined4 *)(lVar13 + (longlong)puVar8);
            puVar8[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar8);
            puVar8[2] = *(undefined4 *)(lVar13 + 8 + (longlong)puVar8);
            puVar8 = puVar8 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if ((longlong)puVar11 < lVar10) {
          puVar8 = puVar7 + (longlong)puVar11;
          lVar10 = lVar10 - (longlong)puVar11;
          do {
            *puVar8 = *(undefined4 *)((longlong)puVar8 + (lVar12 - (longlong)puVar7));
            puVar8 = puVar8 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        piVar9[2] = 0;
        piVar9[3] = 0;
        piVar9[4] = 0;
        piVar9[5] = -0x80000000;
        iVar5 = *(int *)(param_2 + 0x10 + (longlong)piVar9);
        lVar10 = (longlong)iVar5;
        local_40[0] = iVar5;
        uVar6 = FUN_143703a50();
        iVar4 = local_40[0];
        puVar7 = puVar15;
        if (local_40[0] != 0) {
          puVar7 = (undefined4 *)FUN_143702d60(uVar6,4,local_40);
        }
        *(undefined4 **)(piVar9 + 2) = puVar7;
        piVar9[4] = iVar4;
        iVar4 = -0x80000000;
        if (local_40[0] != 0) {
          iVar4 = local_40[0];
        }
        piVar9[5] = iVar4;
        if (0 < iVar5) {
          lVar12 = *(longlong *)(param_2 + 8 + (longlong)piVar9) - (longlong)puVar7;
          do {
            *puVar7 = *(undefined4 *)(lVar12 + (longlong)puVar7);
            puVar7 = puVar7 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        piVar9[6] = 0;
        piVar9[7] = 0;
        piVar9[8] = 0;
        piVar9[9] = -0x80000000;
        local_38[0] = *(int *)(param_2 + 0x20 + (longlong)piVar9);
        lVar10 = (longlong)local_38[0];
        uVar6 = FUN_143703a50();
        iVar5 = local_38[0];
        puVar7 = puVar15;
        if (local_38[0] != 0) {
          puVar7 = (undefined4 *)FUN_143702d60(uVar6,4,local_38);
        }
        piVar9[8] = iVar5;
        *(undefined4 **)(piVar9 + 6) = puVar7;
        iVar5 = -0x80000000;
        if (local_38[0] != 0) {
          iVar5 = local_38[0];
        }
        piVar9[9] = iVar5;
        lVar12 = *(longlong *)(param_2 + 0x18 + (longlong)piVar9);
        puVar11 = puVar15;
        if (3 < lVar10) {
          lVar13 = lVar12 - (longlong)puVar7;
          lVar14 = (lVar10 - 4U >> 2) + 1;
          puVar8 = puVar7 + 1;
          puVar11 = (undefined4 *)(lVar14 * 4);
          do {
            puVar8[-1] = *(undefined4 *)(lVar13 + -4 + (longlong)puVar8);
            *puVar8 = *(undefined4 *)(lVar13 + (longlong)puVar8);
            puVar8[1] = *(undefined4 *)(lVar13 + 4 + (longlong)puVar8);
            puVar8[2] = *(undefined4 *)(lVar13 + 8 + (longlong)puVar8);
            puVar8 = puVar8 + 4;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if ((longlong)puVar11 < lVar10) {
          puVar8 = puVar7 + (longlong)puVar11;
          lVar10 = lVar10 - (longlong)puVar11;
          do {
            *puVar8 = *(undefined4 *)((longlong)puVar8 + (lVar12 - (longlong)puVar7));
            puVar8 = puVar8 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        piVar9[10] = *(int *)(param_2 + 0x28 + (longlong)piVar9);
        *(undefined8 *)(piVar9 + 0xb) = *(undefined8 *)(param_2 + 0x2c + (longlong)piVar9);
        puVar1 = (undefined8 *)(param_2 + 0x38 + (longlong)piVar9);
        uVar6 = puVar1[1];
        *(undefined8 *)(piVar9 + 0xe) = *puVar1;
        *(undefined8 *)(piVar9 + 0x10) = uVar6;
        piVar2 = (int *)(param_2 + 0x48 + (longlong)piVar9);
        iVar5 = piVar2[1];
        iVar4 = piVar2[2];
        iVar3 = piVar2[3];
        piVar9[0x12] = *piVar2;
        piVar9[0x13] = iVar5;
        piVar9[0x14] = iVar4;
        piVar9[0x15] = iVar3;
        *(undefined8 *)(piVar9 + 0x16) = *(undefined8 *)(param_2 + 0x58 + (longlong)piVar9);
        puVar1 = (undefined8 *)(param_2 + 0x60 + (longlong)piVar9);
        uVar6 = puVar1[1];
        *(undefined8 *)(piVar9 + 0x18) = *puVar1;
        *(undefined8 *)(piVar9 + 0x1a) = uVar6;
        piVar2 = (int *)(param_2 + 0x70 + (longlong)piVar9);
        iVar5 = piVar2[1];
        iVar4 = piVar2[2];
        iVar3 = piVar2[3];
        piVar9[0x1c] = *piVar2;
        piVar9[0x1d] = iVar5;
        piVar9[0x1e] = iVar4;
        piVar9[0x1f] = iVar3;
      }
      piVar9 = piVar9 + 0x26;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



// FUNCTION 143821cc0 FUN_143821cc0 body=64 status=ok
// SIG undefined FUN_143821cc0(void)

undefined1 FUN_143821cc0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      cVar1 = FUN_14370b790(param_1 + 0x68);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143821d00 FUN_143821d00 body=139 status=ok
// SIG undefined FUN_143821d00(void)

longlong FUN_143821d00(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_143882d90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x108;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x108);
    }
  }
  return param_1;
}



// FUNCTION 143821da0 FUN_143821da0 body=64 status=ok
// SIG undefined FUN_143821da0(void)

undefined1 FUN_143821da0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14370b790(param_1 + 0x30);
  if (cVar1 != '\0') {
    cVar1 = FUN_14370b790(param_1 + 0x48);
    if (cVar1 != '\0') {
      cVar1 = FUN_1437e3830(param_1 + 0x70);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143821de0 FUN_143821de0 body=146 status=ok
// SIG undefined FUN_143821de0(void)

undefined8 * FUN_143821de0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  *param_1 = hkaiAstarCostModifier::vftable;
  FUN_14370c000();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      sVar2 = *(short *)(param_1 + 2);
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



// FUNCTION 143821e80 FUN_143821e80 body=58 status=ok
// SIG undefined FUN_143821e80(void)

void FUN_143821e80(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14387b360(param_1);
      }
      param_1 = param_1 + 0x90;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821ec0 FUN_143821ec0 body=60 status=ok
// SIG undefined FUN_143821ec0(void)

void FUN_143821ec0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_143841d70(param_1,0);
      }
      param_1 = param_1 + 0xe0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821f10 func body=74 status=ok
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
        FUN_14382a680(param_1,local_res18);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821f60 FUN_143821f60 body=18 status=ok
// SIG undefined FUN_143821f60(void)

undefined8 * FUN_143821f60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146813650;
  return param_2;
}



// FUNCTION 143821f90 func body=74 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ReflectConstructionWrapper<hkaiWorldCommands::NavigatorSetGoals>::func
               (longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 local_res18;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14382b550(param_1,local_res18);
      }
      param_1 = param_1 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143821ff0 FUN_143821ff0 body=55 status=ok
// SIG undefined FUN_143821ff0(void)

void FUN_143821ff0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14386b6c0(param_1);
      }
      param_1 = param_1 + 0x60;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 143822040 func body=63 status=ok
// SIG undefined func(void)

void hkReflect::Detail::ExplicitWrapper<256,hkStringBuf>::func
               (longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x98 + param_1;
    do {
      FUN_14382c000(param_1);
      param_1 = param_1 + -0x98;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143822080 FUN_143822080 body=139 status=ok
// SIG undefined FUN_143822080(void)

longlong FUN_143822080(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_14385b810();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x260;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x260);
    }
  }
  return param_1;
}



// FUNCTION 143822120 FUN_143822120 body=401 status=ok
// SIG undefined FUN_143822120(void)

void FUN_143822120(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    lVar7 = param_1 + 8;
    param_2 = param_2 - param_1;
    lVar8 = (longlong)param_4;
    do {
      puVar1 = (undefined8 *)(lVar7 + -8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = hkReferencedObject::vftable;
        FUN_143718270(lVar7,param_2 + lVar7);
        *(undefined4 *)(lVar7 + 8) = 0x1ffff;
        *puVar1 = hkaiDefaultAstarEdgeFilter::vftable;
        puVar1 = (undefined8 *)(param_2 + 0x18 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x18) = *puVar1;
        *(undefined8 *)(lVar7 + 0x20) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x28 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x28) = *puVar1;
        *(undefined8 *)(lVar7 + 0x30) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x38 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x38) = *puVar1;
        *(undefined8 *)(lVar7 + 0x40) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x48 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x48) = *puVar1;
        *(undefined8 *)(lVar7 + 0x50) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x58 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x58) = *puVar1;
        *(undefined8 *)(lVar7 + 0x60) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x68 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x68) = *puVar1;
        *(undefined8 *)(lVar7 + 0x70) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x78 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x78) = *puVar1;
        *(undefined8 *)(lVar7 + 0x80) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x88 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x88) = *puVar1;
        *(undefined8 *)(lVar7 + 0x90) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0x98 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0x98) = *puVar1;
        *(undefined8 *)(lVar7 + 0xa0) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0xa8 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0xa8) = *puVar1;
        *(undefined8 *)(lVar7 + 0xb0) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0xb8 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0xb8) = *puVar1;
        *(undefined8 *)(lVar7 + 0xc0) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 200 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 200) = *puVar1;
        *(undefined8 *)(lVar7 + 0xd0) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0xd8 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0xd8) = *puVar1;
        *(undefined8 *)(lVar7 + 0xe0) = uVar6;
        puVar1 = (undefined8 *)(param_2 + 0xe8 + lVar7);
        uVar6 = puVar1[1];
        *(undefined8 *)(lVar7 + 0xe8) = *puVar1;
        *(undefined8 *)(lVar7 + 0xf0) = uVar6;
        puVar2 = (undefined4 *)(param_2 + 0xf8 + lVar7);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        *(undefined4 *)(lVar7 + 0xf8) = *puVar2;
        *(undefined4 *)(lVar7 + 0xfc) = uVar3;
        *(undefined4 *)(lVar7 + 0x100) = uVar4;
        *(undefined4 *)(lVar7 + 0x104) = uVar5;
        puVar2 = (undefined4 *)(param_2 + 0x108 + lVar7);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        *(undefined4 *)(lVar7 + 0x108) = *puVar2;
        *(undefined4 *)(lVar7 + 0x10c) = uVar3;
        *(undefined4 *)(lVar7 + 0x110) = uVar4;
        *(undefined4 *)(lVar7 + 0x114) = uVar5;
        *(undefined4 *)(lVar7 + 0x118) = *(undefined4 *)(param_2 + 0x118 + lVar7);
      }
      lVar7 = lVar7 + 0x130;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 1438222c0 FUN_1438222c0 body=63 status=ok
// SIG undefined FUN_1438222c0(void)

void FUN_1438222c0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = (longlong)param_3 * 0x260 + param_1;
    do {
      FUN_143862be0(param_1);
      param_1 = param_1 + -0x260;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 143822300 FUN_143822300 body=18 status=ok
// SIG undefined FUN_143822300(void)

undefined8 * FUN_143822300(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_1468138c0;
  return param_2;
}


