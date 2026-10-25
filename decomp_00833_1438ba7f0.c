// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1438ba7f0 FUN_1438ba7f0 body=49 status=ok
// SIG undefined FUN_1438ba7f0(void)

void FUN_1438ba7f0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((*(int *)(param_1 + 0x30) == 0) && (param_4 != -1)) {
    FUN_1438ba830(param_2,param_1 + 0xa0,param_3,param_1 + 0x20,param_4);
  }
  return;
}



// FUNCTION 1438ba830 FUN_1438ba830 body=631 status=ok
// SIG undefined FUN_1438ba830(void)

void FUN_1438ba830(float *param_1,float *param_2,float *param_3,undefined1 (*param_4) [16],
                  int param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  float fVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  
  fVar13 = *param_2;
  fVar18 = param_2[1];
  fVar43 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar12 = fVar3 - *param_3;
  fVar17 = fVar4 - param_3[1];
  fVar19 = fVar5 - param_3[2];
  fVar50 = *param_3 - fVar3;
  fVar51 = param_3[1] - fVar4;
  fVar52 = param_3[2] - fVar5;
  fVar12 = fVar12 * fVar12;
  fVar17 = fVar17 * fVar17;
  fVar19 = fVar19 * fVar19;
  fVar26 = fVar17 + fVar12 + fVar19;
  fVar29 = fVar17 + fVar12 + fVar19;
  fVar32 = fVar17 + fVar12 + fVar19;
  fVar19 = fVar17 + fVar12 + fVar19;
  auVar22._4_4_ = fVar29;
  auVar22._0_4_ = fVar26;
  auVar22._8_4_ = fVar32;
  auVar22._12_4_ = fVar19;
  auVar22 = rsqrtps(in_XMM2,auVar22);
  fVar12 = auVar22._0_4_;
  fVar17 = auVar22._4_4_;
  fVar20 = auVar22._8_4_;
  fVar21 = auVar22._12_4_;
  auVar41._0_4_ =
       ~-(uint)(fVar26 <= 0.0) & (uint)((3.0 - fVar26 * fVar12 * fVar12) * fVar12 * 0.5 * fVar26);
  auVar41._4_4_ =
       ~-(uint)(fVar29 <= 0.0) & (uint)((3.0 - fVar29 * fVar17 * fVar17) * fVar17 * 0.5 * fVar29);
  auVar41._8_4_ =
       ~-(uint)(fVar32 <= 0.0) & (uint)((3.0 - fVar32 * fVar20 * fVar20) * fVar20 * 0.5 * fVar32);
  auVar41._12_4_ =
       ~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar19 * fVar21 * fVar21) * fVar21 * 0.5 * fVar19);
  auVar42 = minps(auVar41,*param_4);
  fVar12 = fVar13 * fVar50;
  fVar17 = fVar18 * fVar51;
  fVar19 = fVar43 * fVar52;
  fVar26 = (fVar17 + fVar12 + fVar19) * fVar13;
  fVar29 = (fVar17 + fVar12 + fVar19) * fVar18;
  fVar32 = (fVar17 + fVar12 + fVar19) * fVar43;
  fVar25 = (fVar17 + fVar12 + fVar19) * fVar2;
  fVar50 = fVar50 - fVar26;
  fVar51 = fVar51 - fVar29;
  fVar52 = fVar52 - fVar32;
  fVar53 = (param_3[3] - fVar6) - fVar25;
  fVar44 = fVar50 * fVar50;
  fVar45 = fVar51 * fVar51;
  fVar46 = fVar52 * fVar52;
  fVar47 = fVar18 * fVar50 - fVar51 * fVar13;
  fVar48 = fVar43 * fVar51 - fVar52 * fVar18;
  fVar49 = fVar13 * fVar52 - fVar50 * fVar43;
  fVar13 = fVar48 * fVar48;
  fVar18 = fVar49 * fVar49;
  auVar14._8_4_ = fVar47 * fVar47;
  auVar14._4_4_ = auVar14._8_4_;
  auVar14._0_4_ = auVar14._8_4_;
  auVar14._12_4_ = auVar14._8_4_;
  fVar27 = fVar18 + fVar13 + auVar14._8_4_;
  fVar30 = fVar18 + fVar13 + auVar14._8_4_;
  fVar33 = fVar18 + fVar13 + auVar14._8_4_;
  fVar35 = fVar18 + fVar13 + auVar14._8_4_;
  auVar1._4_4_ = fVar30;
  auVar1._0_4_ = fVar27;
  auVar1._8_4_ = fVar33;
  auVar1._12_4_ = fVar35;
  auVar22 = rsqrtps(auVar14,auVar1);
  fVar17 = auVar22._0_4_;
  fVar19 = auVar22._4_4_;
  fVar20 = auVar22._8_4_;
  fVar21 = auVar22._12_4_;
  auVar15._4_4_ = fVar46;
  auVar15._0_4_ = fVar46;
  auVar15._8_4_ = fVar46;
  auVar15._12_4_ = fVar46;
  auVar23._0_4_ = fVar45 + fVar44 + fVar46;
  auVar23._4_4_ = fVar45 + fVar44 + fVar46;
  auVar23._8_4_ = fVar45 + fVar44 + fVar46;
  auVar23._12_4_ = fVar45 + fVar44 + fVar46;
  auVar22 = rsqrtps(auVar15,auVar23);
  fVar13 = auVar22._0_4_;
  fVar18 = auVar22._4_4_;
  fVar43 = auVar22._8_4_;
  fVar12 = auVar22._12_4_;
  auVar24._0_4_ = auVar23._0_4_ * fVar13 * fVar13;
  auVar24._4_4_ = auVar23._4_4_ * fVar18 * fVar18;
  auVar24._8_4_ = auVar23._8_4_ * fVar43 * fVar43;
  auVar24._12_4_ = auVar23._12_4_ * fVar12 * fVar12;
  fVar37 = (float)(~-(uint)(auVar23._0_4_ <= 0.0) & (uint)((3.0 - auVar24._0_4_) * fVar13 * 0.5));
  fVar38 = (float)(~-(uint)(auVar23._4_4_ <= 0.0) & (uint)((3.0 - auVar24._4_4_) * fVar18 * 0.5));
  fVar39 = (float)(~-(uint)(auVar23._8_4_ <= 0.0) & (uint)((3.0 - auVar24._8_4_) * fVar43 * 0.5));
  fVar40 = (float)(~-(uint)(auVar23._12_4_ <= 0.0) & (uint)((3.0 - auVar24._12_4_) * fVar12 * 0.5));
  fVar7 = auVar42._0_4_;
  fVar9 = auVar42._4_4_;
  fVar10 = auVar42._8_4_;
  fVar11 = auVar42._12_4_;
  fVar28 = (fVar45 + fVar44 + fVar46) - fVar7 * fVar7;
  fVar31 = (fVar45 + fVar44 + fVar46) - fVar9 * fVar9;
  fVar34 = (fVar45 + fVar44 + fVar46) - fVar10 * fVar10;
  fVar36 = (fVar45 + fVar44 + fVar46) - fVar11 * fVar11;
  auVar42._4_4_ = fVar31;
  auVar42._0_4_ = fVar28;
  auVar42._8_4_ = fVar34;
  auVar42._12_4_ = fVar36;
  auVar22 = rsqrtps(auVar24,auVar42);
  fVar13 = auVar22._0_4_;
  fVar18 = auVar22._4_4_;
  fVar43 = auVar22._8_4_;
  fVar12 = auVar22._12_4_;
  fVar13 = (float)(~-(uint)(fVar28 <= 0.0) &
                  (uint)((3.0 - fVar28 * fVar13 * fVar13) * fVar13 * 0.5 * fVar28)) * fVar7 * fVar37
  ;
  fVar18 = (float)(~-(uint)(fVar31 <= 0.0) &
                  (uint)((3.0 - fVar31 * fVar18 * fVar18) * fVar18 * 0.5 * fVar31)) * fVar9 * fVar38
  ;
  fVar43 = (float)(~-(uint)(fVar34 <= 0.0) &
                  (uint)((3.0 - fVar34 * fVar43 * fVar43) * fVar43 * 0.5 * fVar34)) * fVar10 *
           fVar39;
  fVar12 = (float)(~-(uint)(fVar36 <= 0.0) &
                  (uint)((3.0 - fVar36 * fVar12 * fVar12) * fVar12 * 0.5 * fVar36)) * fVar11 *
           fVar40;
  if (param_5 != 1) {
    fVar13 = 0.0 - fVar13;
    fVar18 = 0.0 - fVar18;
    fVar43 = 0.0 - fVar43;
    fVar12 = 0.0 - fVar12;
  }
  auVar8._4_4_ = fVar44;
  auVar8._0_4_ = fVar44;
  auVar8._8_4_ = fVar44;
  auVar8._12_4_ = fVar44;
  auVar16._0_4_ = fVar45 + fVar44 + fVar46;
  auVar16._4_4_ = fVar45 + fVar44 + fVar46;
  auVar16._8_4_ = fVar45 + fVar44 + fVar46;
  auVar16._12_4_ = fVar45 + fVar44 + fVar46;
  auVar22 = rsqrtps(auVar8,auVar16);
  fVar7 = auVar22._0_4_;
  fVar9 = auVar22._4_4_;
  fVar10 = auVar22._8_4_;
  fVar11 = auVar22._12_4_;
  *param_3 = (float)(~-(uint)(auVar16._0_4_ <= 0.0) &
                    (uint)((3.0 - auVar16._0_4_ * fVar7 * fVar7) * fVar7 * 0.5)) * fVar50 *
             fVar28 * fVar37 +
             fVar13 * fVar48 * (float)(~-(uint)(fVar27 <= 0.0) &
                                      (uint)((3.0 - fVar27 * fVar17 * fVar17) * fVar17 * 0.5)) +
             fVar3 + fVar26;
  param_3[1] = (float)(~-(uint)(auVar16._4_4_ <= 0.0) &
                      (uint)((3.0 - auVar16._4_4_ * fVar9 * fVar9) * fVar9 * 0.5)) * fVar51 *
               fVar31 * fVar38 +
               fVar18 * fVar49 * (float)(~-(uint)(fVar30 <= 0.0) &
                                        (uint)((3.0 - fVar30 * fVar19 * fVar19) * fVar19 * 0.5)) +
               fVar4 + fVar29;
  param_3[2] = (float)(~-(uint)(auVar16._8_4_ <= 0.0) &
                      (uint)((3.0 - auVar16._8_4_ * fVar10 * fVar10) * fVar10 * 0.5)) * fVar52 *
               fVar34 * fVar39 +
               fVar43 * fVar47 * (float)(~-(uint)(fVar33 <= 0.0) &
                                        (uint)((3.0 - fVar33 * fVar20 * fVar20) * fVar20 * 0.5)) +
               fVar5 + fVar32;
  param_3[3] = (float)(~-(uint)(auVar16._12_4_ <= 0.0) &
                      (uint)((3.0 - auVar16._12_4_ * fVar11 * fVar11) * fVar11 * 0.5)) * fVar53 *
               fVar36 * fVar40 +
               fVar12 * (fVar2 * fVar53 - fVar53 * fVar2) *
                        (float)(~-(uint)(fVar35 <= 0.0) &
                               (uint)((3.0 - fVar35 * fVar21 * fVar21) * fVar21 * 0.5)) +
               fVar6 + fVar25;
  return;
}



// FUNCTION 1438baab0 FUN_1438baab0 body=91 status=ok
// SIG undefined FUN_1438baab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438baab0(undefined8 param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_18 = (*param_3 - *param_2) * _DAT_1467f07e0 + *param_2;
  fStack_14 = (param_3[1] - param_2[1]) * fRam00000001467f07e4 + param_2[1];
  fStack_10 = (param_3[2] - param_2[2]) * fRam00000001467f07e8 + param_2[2];
  fStack_c = (param_3[3] - param_2[3]) * fRam00000001467f07ec + param_2[3];
  FUN_1438ba7f0(param_1,&local_18);
  FUN_1438ba7f0(param_1,&local_18,param_2,param_4);
  return;
}



// FUNCTION 1438bab10 FUN_1438bab10 body=233 status=ok
// SIG undefined FUN_1438bab10(void)

void FUN_1438bab10(longlong param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = param_3[2];
    fVar4 = param_3[3];
    fVar14 = *(float *)(param_1 + 0xa4) * (fVar1 - *param_2) -
             (fVar2 - param_2[1]) * *(float *)(param_1 + 0xa0);
    fVar15 = *(float *)(param_1 + 0xa8) * (fVar2 - param_2[1]) -
             (fVar3 - param_2[2]) * *(float *)(param_1 + 0xa4);
    fVar16 = *(float *)(param_1 + 0xa0) * (fVar3 - param_2[2]) -
             (fVar1 - *param_2) * *(float *)(param_1 + 0xa8);
    fVar5 = fVar15 * fVar15;
    fVar6 = fVar16 * fVar16;
    fVar7 = fVar14 * fVar14;
    fVar11 = fVar6 + fVar5 + fVar7;
    fVar12 = fVar6 + fVar5 + fVar7;
    fVar13 = fVar6 + fVar5 + fVar7;
    fVar7 = fVar6 + fVar5 + fVar7;
    auVar8._4_4_ = fVar12;
    auVar8._0_4_ = fVar11;
    auVar8._8_4_ = fVar13;
    auVar8._12_4_ = fVar7;
    auVar8 = rsqrtps(in_XMM2,auVar8);
    fVar5 = auVar8._0_4_;
    fVar6 = auVar8._4_4_;
    fVar9 = auVar8._8_4_;
    fVar10 = auVar8._12_4_;
    fVar15 = fVar15 * (float)(~-(uint)(fVar11 <= 0.0) &
                             (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5));
    fVar16 = fVar16 * (float)(~-(uint)(fVar12 <= 0.0) &
                             (uint)((3.0 - fVar6 * fVar12 * fVar6) * fVar6 * 0.5));
    fVar14 = fVar14 * (float)(~-(uint)(fVar13 <= 0.0) &
                             (uint)((3.0 - fVar9 * fVar13 * fVar9) * fVar9 * 0.5));
    fVar5 = (*(float *)(param_1 + 0xac) * (fVar4 - param_2[3]) -
            (fVar4 - param_2[3]) * *(float *)(param_1 + 0xac)) *
            (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar10 * fVar7 * fVar10) * fVar10 * 0.5))
    ;
    if (param_4 == 1) {
      fVar6 = *(float *)(param_1 + 0x24);
      fVar7 = *(float *)(param_1 + 0x28);
      fVar9 = *(float *)(param_1 + 0x2c);
      *param_3 = *(float *)(param_1 + 0x20) * fVar15 + fVar1;
      param_3[1] = fVar6 * fVar16 + fVar2;
      param_3[2] = fVar7 * fVar14 + fVar3;
      param_3[3] = fVar9 * fVar5 + fVar4;
      fVar1 = *(float *)(param_1 + 0x24);
      fVar2 = *(float *)(param_1 + 0x28);
      fVar3 = *(float *)(param_1 + 0x2c);
      *param_2 = *(float *)(param_1 + 0x20) * fVar15 + *param_2;
      param_2[1] = fVar1 * fVar16 + param_2[1];
      param_2[2] = fVar2 * fVar14 + param_2[2];
      param_2[3] = fVar3 * fVar5 + param_2[3];
      return;
    }
    fVar6 = *(float *)(param_1 + 0x24);
    fVar7 = *(float *)(param_1 + 0x28);
    fVar9 = *(float *)(param_1 + 0x2c);
    *param_3 = (0.0 - *(float *)(param_1 + 0x20)) * fVar15 + fVar1;
    param_3[1] = (0.0 - fVar6) * fVar16 + fVar2;
    param_3[2] = (0.0 - fVar7) * fVar14 + fVar3;
    param_3[3] = (0.0 - fVar9) * fVar5 + fVar4;
    fVar1 = *(float *)(param_1 + 0x24);
    fVar2 = *(float *)(param_1 + 0x28);
    fVar3 = *(float *)(param_1 + 0x2c);
    *param_2 = (0.0 - *(float *)(param_1 + 0x20)) * fVar15 + *param_2;
    param_2[1] = (0.0 - fVar1) * fVar16 + param_2[1];
    param_2[2] = (0.0 - fVar2) * fVar14 + param_2[2];
    param_2[3] = (0.0 - fVar3) * fVar5 + param_2[3];
  }
  return;
}



// FUNCTION 1438bac00 FUN_1438bac00 body=1069 status=ok
// SIG undefined FUN_1438bac00(void)

undefined8
FUN_1438bac00(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 param_7)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined7 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_b8 = *param_3;
  uStack_b0 = param_3[1];
  local_a8 = param_3[2];
  uStack_a0 = param_3[3];
  local_98 = param_3[4];
  uStack_90 = param_3[5];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_48 = *(undefined4 *)(param_2 + 4);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = *(undefined4 *)(param_2 + 5);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  FUN_1438bb030(local_48,&local_68,&local_b8);
  puVar17 = param_5;
  local_88 = (float)local_58;
  fStack_84 = local_58._4_4_;
  fStack_80 = (float)uStack_50;
  fStack_7c = uStack_50._4_4_;
  fVar35 = (float)local_a8 - (float)local_58;
  fVar36 = local_a8._4_4_ - local_58._4_4_;
  fVar37 = (float)uStack_a0 - (float)uStack_50;
  local_c8 = (float)local_a8;
  fStack_c4 = local_a8._4_4_;
  fStack_c0 = (float)uStack_a0;
  fStack_bc = uStack_a0._4_4_;
  fVar31 = fVar36 * *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0xa4) * fVar35;
  fVar32 = fVar37 * *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa8) * fVar36;
  fVar33 = fVar35 * *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa0) * fVar37;
  fVar34 = (uStack_a0._4_4_ - uStack_50._4_4_) * *(float *)(param_1 + 0xac) -
           *(float *)(param_1 + 0xac) * (uStack_a0._4_4_ - uStack_50._4_4_);
  if (*(char *)((longlong)param_3 + 4) == '\0') {
    fVar32 = -fVar32;
    fVar33 = -fVar33;
    fVar31 = -fVar31;
    fVar34 = -fVar34;
  }
  local_78 = fVar32 + (float)local_a8;
  fStack_74 = fVar33 + local_a8._4_4_;
  fStack_70 = fVar31 + (float)uStack_a0;
  fStack_6c = fVar34 + uStack_a0._4_4_;
  if ((((*(char *)((longlong)param_5 + 7) == '\0') && (*(byte *)(param_5 + 1) != 0xff)) &&
      (*(char *)((longlong)param_5 + 6) != '\0')) && (*(byte *)(param_5 + 1) != 0xffffffff)) {
    fVar20 = fVar32 * fVar32;
    fVar26 = fVar33 * fVar33;
    auVar23._8_4_ = fVar31 * fVar31;
    auVar23._4_4_ = auVar23._8_4_;
    auVar23._0_4_ = auVar23._8_4_;
    auVar23._12_4_ = auVar23._8_4_;
    fVar27 = fVar26 + fVar20 + auVar23._8_4_;
    fVar28 = fVar26 + fVar20 + auVar23._8_4_;
    fVar29 = fVar26 + fVar20 + auVar23._8_4_;
    fVar30 = fVar26 + fVar20 + auVar23._8_4_;
    auVar24._4_4_ = fVar28;
    auVar24._0_4_ = fVar27;
    auVar24._8_4_ = fVar29;
    auVar24._12_4_ = fVar30;
    auVar24 = rsqrtps(auVar23,auVar24);
    fVar20 = auVar24._0_4_;
    fVar26 = auVar24._4_4_;
    fVar21 = auVar24._8_4_;
    fVar22 = auVar24._12_4_;
    local_d8 = (float)param_5[8] -
               (float)(~-(uint)(fVar27 <= 0.0) &
                      (uint)((3.0 - fVar27 * fVar20 * fVar20) * fVar20 * 0.5)) * fVar32 *
               *(float *)(param_1 + 0x20);
    fStack_d4 = (float)param_5[9] -
                (float)(~-(uint)(fVar28 <= 0.0) &
                       (uint)((3.0 - fVar28 * fVar26 * fVar26) * fVar26 * 0.5)) * fVar33 *
                *(float *)(param_1 + 0x24);
    fStack_d0 = (float)param_5[10] -
                (float)(~-(uint)(fVar29 <= 0.0) &
                       (uint)((3.0 - fVar29 * fVar21 * fVar21) * fVar21 * 0.5)) * fVar31 *
                *(float *)(param_1 + 0x28);
    fStack_cc = (float)param_5[0xb] -
                (float)(~-(uint)(fVar30 <= 0.0) &
                       (uint)((3.0 - fVar30 * fVar22 * fVar22) * fVar22 * 0.5)) * fVar34 *
                *(float *)(param_1 + 0x2c);
  }
  else {
    local_d8 = (float)param_5[8];
    fStack_d4 = (float)param_5[9];
    fStack_d0 = (float)param_5[10];
    fStack_cc = (float)param_5[0xb];
  }
  bVar1 = *(byte *)((longlong)param_3 + 4);
  uVar18 = FUN_1438bb150(param_1,&local_88,&local_c8,&local_d8);
  if (uVar18 == bVar1) {
    uVar18 = FUN_1438bb150(param_1,&local_c8,&local_78,&local_d8);
    if (uVar18 == bVar1) {
      FUN_1438bb3d0(param_1,param_7,0,&local_c8,&param_5);
      FUN_1438bb3d0(param_1,param_7,1,&local_d8,&param_5);
      if (*(char *)((longlong)param_3 + 4) == '\0') {
        fVar31 = local_d8 - local_c8;
        fVar32 = fStack_d4 - fStack_c4;
        fVar33 = fStack_d0 - fStack_c0;
      }
      else {
        fVar31 = local_c8 - local_d8;
        fVar32 = fStack_c4 - fStack_d4;
        fVar33 = fStack_c0 - fStack_d0;
      }
      fVar34 = *(float *)(param_1 + 0xa0);
      fVar20 = *(float *)(param_1 + 0xa4);
      fVar26 = *(float *)(param_1 + 0xa8);
      fVar21 = fVar34 * fVar31;
      fVar27 = fVar20 * fVar32;
      fVar29 = fVar26 * fVar33;
      fVar22 = fVar34 * fVar35;
      fVar28 = fVar20 * fVar36;
      fVar30 = fVar26 * fVar37;
      fVar31 = fVar31 - (fVar27 + fVar21 + fVar29) * fVar34;
      fVar32 = fVar32 - (fVar27 + fVar21 + fVar29) * fVar20;
      fVar33 = fVar33 - (fVar27 + fVar21 + fVar29) * fVar26;
      fVar21 = fVar31 * fVar31;
      fVar27 = fVar32 * fVar32;
      fVar29 = fVar33 * fVar33;
      fVar35 = fVar35 - (fVar28 + fVar22 + fVar30) * fVar34;
      fVar36 = fVar36 - (fVar28 + fVar22 + fVar30) * fVar20;
      fVar37 = fVar37 - (fVar28 + fVar22 + fVar30) * fVar26;
      fVar34 = fVar35 * fVar35;
      fVar20 = fVar36 * fVar36;
      fVar26 = fVar37 * fVar37;
      auVar25._0_4_ = fVar20 + fVar34 + fVar26;
      auVar25._4_4_ = fVar20 + fVar34 + fVar26;
      auVar25._8_4_ = fVar20 + fVar34 + fVar26;
      auVar25._12_4_ = fVar20 + fVar34 + fVar26;
      fVar20 = (fVar27 + fVar21 + fVar29) * auVar25._0_4_;
      auVar2._4_4_ = (fVar27 + fVar21 + fVar29) * auVar25._4_4_;
      auVar2._0_4_ = fVar20;
      auVar2._8_4_ = (fVar27 + fVar21 + fVar29) * auVar25._8_4_;
      auVar2._12_4_ = (fVar27 + fVar21 + fVar29) * auVar25._12_4_;
      auVar24 = rsqrtps(auVar25,auVar2);
      fVar34 = auVar24._0_4_;
      if ((float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - fVar20 * fVar34 * fVar34) * fVar34 * 0.5))
          * (fVar32 * fVar36 + fVar31 * fVar35 + fVar33 * fVar37) <= -0.001) goto LAB_1438baf67;
    }
    uVar3 = *(undefined1 *)((longlong)param_3 + 1);
    uVar4 = *(undefined1 *)((longlong)param_3 + 2);
    uVar5 = *(undefined1 *)((longlong)param_3 + 3);
    uVar6 = *(undefined1 *)((longlong)param_3 + 4);
    uVar7 = *(undefined1 *)((longlong)param_3 + 5);
    uVar8 = *(undefined1 *)((longlong)param_3 + 6);
    uVar9 = *(undefined1 *)((longlong)param_3 + 7);
    local_b8 = *param_3;
    uVar15 = *(undefined7 *)(param_3 + 1);
    uVar16 = param_3[1];
    uVar19 = param_3[4];
    uVar14 = param_3[5];
    uVar10 = *(undefined4 *)(param_3 + 2);
    uVar11 = *(undefined4 *)((longlong)param_3 + 0x14);
    uVar12 = *(undefined4 *)(param_3 + 3);
    uVar13 = *(undefined4 *)((longlong)param_3 + 0x1c);
    *param_4 = *(undefined1 *)param_3;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    *(undefined4 *)(param_4 + 0x10) = uVar10;
    *(undefined4 *)(param_4 + 0x14) = uVar11;
    *(undefined4 *)(param_4 + 0x18) = uVar12;
    *(undefined4 *)(param_4 + 0x1c) = uVar13;
    *(undefined8 *)(param_4 + 0x20) = uVar19;
    *(undefined8 *)(param_4 + 0x28) = uVar14;
    param_4[4] = uVar6;
    param_4[5] = uVar7;
    param_4[6] = uVar8;
    param_4[7] = uVar9;
    uStack_b0._0_1_ = (undefined1)uVar15;
    param_4[8] = (undefined1)uStack_b0;
    *puVar17 = *param_6;
    *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(param_6 + 1);
    *(undefined1 *)((longlong)puVar17 + 5) = *(undefined1 *)((longlong)param_6 + 5);
    *(undefined1 *)((longlong)puVar17 + 6) = *(undefined1 *)((longlong)param_6 + 6);
    *(undefined1 *)((longlong)puVar17 + 7) = *(undefined1 *)((longlong)param_6 + 7);
    *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(param_6 + 2);
    uVar10 = param_6[5];
    uVar11 = param_6[6];
    uVar12 = param_6[7];
    puVar17[4] = param_6[4];
    puVar17[5] = uVar10;
    puVar17[6] = uVar11;
    puVar17[7] = uVar12;
    uVar19 = *(undefined8 *)(param_6 + 10);
    *(undefined8 *)(puVar17 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)(puVar17 + 10) = uVar19;
    uStack_b0 = uVar16;
    FUN_1438bb030(param_1,param_4,puVar17);
    uVar19 = 1;
  }
  else {
LAB_1438baf67:
    uVar3 = *(undefined1 *)((longlong)param_2 + 1);
    uVar4 = *(undefined1 *)((longlong)param_2 + 2);
    uVar5 = *(undefined1 *)((longlong)param_2 + 3);
    uVar6 = *(undefined1 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 5);
    uVar8 = *(undefined1 *)((longlong)param_2 + 6);
    uVar9 = *(undefined1 *)((longlong)param_2 + 7);
    local_b8 = *param_2;
    uVar15 = *(undefined7 *)(param_2 + 1);
    uVar16 = param_2[1];
    uVar19 = param_2[4];
    uVar14 = param_2[5];
    uVar10 = *(undefined4 *)(param_2 + 2);
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar12 = *(undefined4 *)(param_2 + 3);
    uVar13 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *param_4 = *(undefined1 *)param_2;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    *(undefined4 *)(param_4 + 0x10) = uVar10;
    *(undefined4 *)(param_4 + 0x14) = uVar11;
    *(undefined4 *)(param_4 + 0x18) = uVar12;
    *(undefined4 *)(param_4 + 0x1c) = uVar13;
    *(undefined8 *)(param_4 + 0x20) = uVar19;
    *(undefined8 *)(param_4 + 0x28) = uVar14;
    param_4[4] = uVar6;
    param_4[5] = uVar7;
    param_4[6] = uVar8;
    param_4[7] = uVar9;
    uStack_b0._0_1_ = (undefined1)uVar15;
    param_4[8] = (undefined1)uStack_b0;
    *puVar17 = *param_6;
    *(undefined1 *)(puVar17 + 1) = *(undefined1 *)(param_6 + 1);
    *(undefined1 *)((longlong)puVar17 + 5) = *(undefined1 *)((longlong)param_6 + 5);
    *(undefined1 *)((longlong)puVar17 + 6) = *(undefined1 *)((longlong)param_6 + 6);
    *(undefined1 *)((longlong)puVar17 + 7) = *(undefined1 *)((longlong)param_6 + 7);
    *(undefined1 *)(puVar17 + 2) = *(undefined1 *)(param_6 + 2);
    uVar10 = param_6[5];
    uVar11 = param_6[6];
    uVar12 = param_6[7];
    puVar17[4] = param_6[4];
    puVar17[5] = uVar10;
    puVar17[6] = uVar11;
    puVar17[7] = uVar12;
    uVar19 = *(undefined8 *)(param_6 + 10);
    *(undefined8 *)(puVar17 + 8) = *(undefined8 *)(param_6 + 8);
    *(undefined8 *)(puVar17 + 10) = uVar19;
    uStack_b0 = uVar16;
    FUN_1438bb030(param_1,param_4,puVar17);
    uVar19 = 0;
  }
  return uVar19;
}



// FUNCTION 1438bb030 FUN_1438bb030 body=93 status=ok
// SIG undefined FUN_1438bb030(void)

void FUN_1438bb030(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (((*(char *)(param_3 + 7) != '\0') || (*(byte *)(param_3 + 4) == 0xff)) ||
     (uVar1 = (uint)*(byte *)(param_3 + 4), *(char *)(param_3 + 6) == '\0')) {
    uVar1 = 0xffffffff;
  }
  uVar2 = 0xffffffff;
  if (((*(char *)(param_2 + 7) == '\0') && (uVar2 = 0xffffffff, *(byte *)(param_2 + 4) != 0xff)) &&
     (*(char *)(param_2 + 6) != '\0')) {
    uVar2 = (ulonglong)*(byte *)(param_2 + 4);
  }
  FUN_1438bb090(param_1,param_2 + 0x10,uVar2,param_3 + 0x10,uVar1);
  return;
}



// FUNCTION 1438bb090 FUN_1438bb090 body=108 status=ok
// SIG undefined FUN_1438bb090(void)

void FUN_1438bb090(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  if (param_3 == -1) {
    FUN_1438ba7f0(param_1,param_2,param_4);
    return;
  }
  if (param_5 != -1) {
    if (param_3 == param_5) {
      FUN_1438bab10(param_1,param_2,param_4,param_3);
      return;
    }
    FUN_1438baab0(param_1,param_2,param_4);
    return;
  }
  if (param_3 == 0) {
    FUN_1438ba7f0(param_1,param_4,param_2,1);
    return;
  }
  if (param_3 != 1) {
    FUN_1438ba7f0(param_1,param_4,param_2,0xffffffff);
    return;
  }
  FUN_1438ba7f0(param_1,param_4,param_2,0);
  return;
}



// FUNCTION 1438bb100 FUN_1438bb100 body=17 status=ok
// SIG undefined FUN_1438bb100(void)

longlong FUN_1438bb100(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 4) * 0x30 + *(longlong *)(param_1 + 8);
}



// FUNCTION 1438bb120 FUN_1438bb120 body=39 status=ok
// SIG undefined FUN_1438bb120(void)

undefined4 FUN_1438bb120(longlong param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x34))) {
    puVar2 = (undefined4 *)((longlong)param_2 * 0x80 + *(longlong *)(param_1 + 0x50));
    puVar1 = puVar2 + 1;
    if (param_3 != 1) {
      puVar1 = puVar2;
    }
    return *puVar1;
  }
  return 0xffffffff;
}



// FUNCTION 1438bb150 FUN_1438bb150 body=89 status=ok
// SIG undefined FUN_1438bb150(void)

bool FUN_1438bb150(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  return 0.0 < ((*param_4 - *param_2) * (param_3[2] - param_2[2]) -
               (*param_3 - *param_2) * (param_4[2] - param_2[2])) * *(float *)(param_1 + 0xa4) +
               ((param_4[2] - param_2[2]) * (param_3[1] - param_2[1]) -
               (param_3[2] - param_2[2]) * (param_4[1] - param_2[1])) * *(float *)(param_1 + 0xa0) +
               ((param_4[1] - param_2[1]) * (*param_3 - *param_2) -
               (param_3[1] - param_2[1]) * (*param_4 - *param_2)) * *(float *)(param_1 + 0xa8);
}



// FUNCTION 1438bb1b0 FUN_1438bb1b0 body=393 status=ok
// SIG undefined FUN_1438bb1b0(void)

undefined1 FUN_1438bb1b0(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  float *pfVar18;
  undefined1 uVar19;
  int iVar20;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  
  piVar1 = (int *)(param_1 + 0x80);
  iVar15 = *piVar1;
  iVar20 = *(int *)(param_1 + 0x90) + -1;
  lVar16 = (longlong)param_2 * 0x80 + *(longlong *)(param_1 + 0x50);
  uVar19 = 0;
  fVar3 = *(float *)(lVar16 + 0x30);
  fVar4 = *(float *)(lVar16 + 0x34);
  fVar5 = *(float *)(lVar16 + 0x38);
  uVar6 = *(undefined4 *)(lVar16 + 0x3c);
  fVar7 = *(float *)(lVar16 + 0x40);
  fVar8 = *(float *)(lVar16 + 0x44);
  fVar9 = *(float *)(lVar16 + 0x48);
  uVar10 = *(undefined4 *)(lVar16 + 0x4c);
  local_78 = fVar3;
  fStack_74 = fVar4;
  fStack_70 = fVar5;
  uStack_6c = uVar6;
  local_68 = fVar7;
  fStack_64 = fVar8;
  fStack_60 = fVar9;
  uStack_5c = uVar10;
  piVar17 = (int *)TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                   ::GetBox(piVar1,iVar20);
  if (*piVar17 == param_2) {
    lVar16 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
             ::GetBox(piVar1,iVar20);
    cVar2 = *(char *)(lVar16 + 8);
joined_r0x0001438bb259:
    if (cVar2 == '\0') goto LAB_1438bb2f5;
  }
  else {
    piVar17 = (int *)TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                     ::GetBox(piVar1,iVar15);
    if (*piVar17 == param_2) {
      lVar16 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
               ::GetBox(piVar1,iVar15);
      cVar2 = *(char *)(lVar16 + 8);
      goto joined_r0x0001438bb259;
    }
    if ((iVar20 == *(int *)(param_1 + 0x84)) || (iVar15 == *(int *)(param_1 + 0x84))) {
      lVar16 = FUN_1438bb100(piVar1);
      iVar15 = FUN_1438bb150(param_1,lVar16 + 0x10,&local_78,&local_68);
      if (iVar15 != 0) goto LAB_1438bb2f5;
    }
    else {
      lVar16 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
               ::GetBox(piVar1,iVar15);
      fVar11 = *(float *)(lVar16 + 0x10);
      fVar12 = *(float *)(lVar16 + 0x14);
      fVar13 = *(float *)(lVar16 + 0x18);
      lVar16 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
               ::GetBox(piVar1,iVar20);
      if (0.0 <= (fVar12 - *(float *)(lVar16 + 0x14)) * (fVar8 - fVar4) +
                 (fVar11 - *(float *)(lVar16 + 0x10)) * (fVar7 - fVar3) +
                 (fVar13 - *(float *)(lVar16 + 0x18)) * (fVar9 - fVar5)) goto LAB_1438bb2f5;
    }
  }
  uVar19 = 1;
  local_68 = fVar3;
  fStack_64 = fVar4;
  fStack_60 = fVar5;
  uStack_5c = uVar6;
  local_78 = fVar7;
  fStack_74 = fVar8;
  fStack_70 = fVar9;
  uStack_6c = uVar10;
LAB_1438bb2f5:
  pfVar18 = &local_78;
  if (param_3 != 0) {
    pfVar18 = &local_68;
  }
  uVar14 = *(undefined8 *)(pfVar18 + 2);
  *param_4 = *(undefined8 *)pfVar18;
  param_4[1] = uVar14;
  return uVar19;
}



// FUNCTION 1438bb340 FUN_1438bb340 body=132 status=ok
// SIG undefined FUN_1438bb340(void)

void FUN_1438bb340(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  int local_18;
  int iStack_14;
  int iStack_10;
  float fStack_c;
  
  FUN_1438bb3d0(param_1,*param_2,(char)param_2[1],&local_18,local_res8);
  param_2[8] = local_18;
  param_2[9] = iStack_14;
  param_2[10] = iStack_10;
  param_2[0xb] = (int)fStack_c;
  *(bool *)((longlong)param_2 + 6) = fStack_c < 0.0;
  param_2[4] = local_18;
  param_2[5] = iStack_14;
  param_2[6] = iStack_10;
  param_2[7] = (int)fStack_c;
  *(undefined1 *)(param_2 + 2) = local_res8[0];
  if (*(int *)(param_1 + 0x34) <= *param_2) {
    *(undefined1 *)(param_2 + 1) = 0xff;
    return;
  }
  iVar1 = FUN_1438bbdd0(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)((longlong)param_2 + 7) = 1;
  }
  return;
}



// FUNCTION 1438bb3d0 FUN_1438bb3d0 body=170 status=ok
// SIG undefined FUN_1438bb3d0(void)

undefined4
FUN_1438bb3d0(longlong param_1,int param_2,int param_3,undefined8 *param_4,undefined1 *param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *param_5 = 0;
  if (param_2 < *(int *)(param_1 + 0x34)) {
    iVar3 = FUN_1438bbdd0(param_1,param_2);
    if (iVar3 == 0) {
      lVar5 = (longlong)param_2 * 0x80 + *(longlong *)(param_1 + 0x50);
      if (param_3 == 1) {
        uVar1 = *(undefined8 *)(lVar5 + 0x48);
        uVar4 = 1;
        *param_4 = *(undefined8 *)(lVar5 + 0x40);
        param_4[1] = uVar1;
      }
      else {
        uVar1 = *(undefined8 *)(lVar5 + 0x38);
        uVar4 = 1;
        *param_4 = *(undefined8 *)(lVar5 + 0x30);
        param_4[1] = uVar1;
      }
    }
    else {
      uVar2 = FUN_1438bb1b0(param_1,param_2,param_3,param_4);
      *param_5 = uVar2;
      uVar4 = 1;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 200);
    uVar4 = 0;
    *param_4 = *(undefined8 *)(param_1 + 0xc0);
    param_4[1] = uVar1;
  }
  return uVar4;
}



// FUNCTION 1438bb480 FUN_1438bb480 body=1473 status=ok
// SIG undefined FUN_1438bb480(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1438bb480(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined1 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  char cVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iVar15;
  undefined8 uVar16;
  int *piVar17;
  int *piVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
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
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 local_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int local_108 [4];
  undefined4 local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  char cStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  
  uVar16 = FUN_1438bbdd0(param_1,param_3);
  if ((int)uVar16 == 0) {
    return uVar16;
  }
  FUN_1438b9390(&local_128,param_1 + 0x80,1);
  FUN_1438b9390(local_e8,param_1 + 0x80,0,0xffffffff);
  uVar12 = local_e0;
  uVar5 = local_e4;
  piVar17 = (int *)TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                   ::GetBox(local_e0,local_e4);
  fVar37 = fStack_124;
  uVar16 = CONCAT44(fStack_11c,fStack_120);
  piVar18 = (int *)TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                   ::GetBox(uVar16,fStack_124);
  if (*piVar18 != *piVar17) {
    return 1;
  }
  lVar19 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
           ::GetBox(uVar16,fVar37);
  cVar4 = *(char *)(lVar19 + 8);
  lVar19 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
           ::GetBox(uVar16,fVar37);
  fVar34 = *(float *)(lVar19 + 0x10);
  fVar35 = *(float *)(lVar19 + 0x14);
  fVar36 = *(float *)(lVar19 + 0x18);
  fVar8 = *(float *)(lVar19 + 0x1c);
  lVar19 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
           ::GetBox(uVar12,uVar5);
  iVar22 = 0;
  piVar17 = local_108;
  fVar9 = *(float *)(lVar19 + 0x1c);
  fVar34 = fVar34 - *(float *)(lVar19 + 0x10);
  fVar35 = fVar35 - *(float *)(lVar19 + 0x14);
  fVar36 = fVar36 - *(float *)(lVar19 + 0x18);
  do {
    if (iVar22 == 0) {
      uVar16 = 1;
    }
    else if (iVar22 == 1) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0xffffffff;
    }
    FUN_1438b9390(&local_f8,param_1 + 0x80,uVar16,0xffffffff);
    iVar21 = *(int *)(param_1 + 0x84);
    local_118 = local_f8;
    uStack_110 = uStack_f0;
    uStack_10c = uStack_ec;
    iStack_114 = iVar21;
    iStack_f4 = iVar21;
    FUN_1438b9690(&local_118,0);
    iVar15 = FUN_1438bbdf0();
    if (iVar15 != 0) {
      do {
        puVar20 = (undefined8 *)
                  TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                  ::GetBox(CONCAT44(uStack_ec,uStack_f0),iVar21);
        local_a8 = *puVar20;
        uStack_a0 = puVar20[1];
        local_98 = puVar20[2];
        uStack_90 = puVar20[3];
        local_88 = puVar20[4];
        uStack_80 = puVar20[5];
        puVar20 = (undefined8 *)
                  TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                  ::GetBox(CONCAT44(uStack_10c,uStack_110),iStack_114);
        uVar16 = *puVar20;
        uVar12 = puVar20[1];
        local_d8 = (undefined1)uVar16;
        uStack_d7 = (undefined1)((ulonglong)uVar16 >> 8);
        uStack_d6 = (undefined1)((ulonglong)uVar16 >> 0x10);
        uStack_d5 = (undefined1)((ulonglong)uVar16 >> 0x18);
        cStack_d4 = (char)((ulonglong)uVar16 >> 0x20);
        uStack_d3 = (undefined1)((ulonglong)uVar16 >> 0x28);
        uStack_d2 = (undefined1)((ulonglong)uVar16 >> 0x30);
        uStack_d1 = (undefined1)((ulonglong)uVar16 >> 0x38);
        uStack_d0 = (undefined1)uVar12;
        uStack_cf = (undefined1)((ulonglong)uVar12 >> 8);
        uStack_ce = (undefined1)((ulonglong)uVar12 >> 0x10);
        uStack_cd = (undefined1)((ulonglong)uVar12 >> 0x18);
        uStack_cc = (undefined1)((ulonglong)uVar12 >> 0x20);
        uStack_cb = (undefined1)((ulonglong)uVar12 >> 0x28);
        uStack_ca = (undefined1)((ulonglong)uVar12 >> 0x30);
        uStack_c9 = (undefined1)((ulonglong)uVar12 >> 0x38);
        local_c8 = puVar20[2];
        uStack_c0 = puVar20[3];
        local_b8 = *(undefined4 *)(puVar20 + 4);
        uStack_b4 = *(undefined4 *)((longlong)puVar20 + 0x24);
        uStack_b0 = *(undefined4 *)(puVar20 + 5);
        uStack_ac = *(undefined4 *)((longlong)puVar20 + 0x2c);
        FUN_1438bb030(param_1,&local_a8);
        in_XMM2._8_4_ = ((float)uStack_c0 - (float)uStack_90) * fVar36;
        in_XMM2._4_4_ = in_XMM2._8_4_;
        in_XMM2._0_4_ = in_XMM2._8_4_;
        in_XMM2._12_4_ = in_XMM2._8_4_;
        if ((local_c8._4_4_ - local_98._4_4_) * fVar35 +
            ((float)local_c8 - (float)local_98) * fVar34 + in_XMM2._8_4_ < 0.0 == (iVar22 == 0)) {
          *piVar17 = iVar21;
          goto LAB_1438bb6ec;
        }
        FUN_1438b98b0(param_1,&local_a8);
        TWeakObjectPtr<UObject,FWeakObjectPtr>::TWeakObjectPtr<UObject,FWeakObjectPtr>
                  (&local_f8,&local_118);
        local_118 = local_f8;
        iStack_114 = iStack_f4;
        uStack_110 = uStack_f0;
        uStack_10c = uStack_ec;
        FUN_1438b9690(&local_118,0);
        iVar15 = FUN_1438bbdf0();
        iVar21 = iStack_f4;
      } while (iVar15 != 0);
    }
    *piVar17 = -1;
LAB_1438bb6ec:
    auVar28 = _DAT_1467f07e0;
    iVar22 = iVar22 + 1;
    piVar17 = piVar17 + 1;
  } while (iVar22 < 2);
  if (local_108[1] == *(int *)(param_1 + 0x84)) {
    iVar22 = 0;
  }
  else {
    if (local_108[0] != *(int *)(param_1 + 0x84)) {
      fVar34 = DAT_1467f07e0._12_4_;
      puVar20 = (undefined8 *)
                TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                ::GetBox(CONCAT44(fStack_11c,fStack_120),fVar37);
      local_a8 = *puVar20;
      uStack_a0 = puVar20[1];
      fVar37 = *(float *)(puVar20 + 2);
      fVar35 = *(float *)((longlong)puVar20 + 0x14);
      local_98 = puVar20[2];
      fVar36 = *(float *)(puVar20 + 3);
      fVar8 = *(float *)((longlong)puVar20 + 0x1c);
      uStack_90 = puVar20[3];
      local_88 = puVar20[4];
      uStack_80 = puVar20[5];
      lVar19 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
               ::GetBox(local_e0,local_e4);
      local_a8._0_5_ = CONCAT14(0xff,(undefined4)local_a8);
      local_98 = CONCAT44(fVar35 + (*(float *)(lVar19 + 0x14) - fVar35) * auVar28._4_4_,
                          fVar37 + (*(float *)(lVar19 + 0x10) - fVar37) * auVar28._0_4_);
      uStack_90 = CONCAT44(fVar8 + (*(float *)(lVar19 + 0x1c) - fVar8) * fVar34,
                           fVar36 + (*(float *)(lVar19 + 0x18) - fVar36) * auVar28._8_4_);
      uVar16 = FUN_1438bb100(param_1 + 0x80);
      FUN_1438b98b0(param_1,uVar16,&local_a8);
      goto LAB_1438bb92d;
    }
    iVar22 = 1;
  }
  lVar19 = (longlong)local_108[iVar22];
  if (local_108[iVar22] == -1) {
    if (iVar22 == 1) {
      auVar28._4_4_ = (uint)fRam00000001467f06f4;
      auVar28._0_4_ = (uint)DAT_1467f06f0;
      auVar28._8_4_ = (uint)fRam00000001467f06f8;
      auVar28._12_4_ = (uint)fRam00000001467f06fc;
    }
    else {
      auVar28._4_4_ = (uint)fRam00000001467f06e4;
      auVar28._0_4_ = (uint)_DAT_1467f06e0;
      auVar28._8_4_ = (uint)fRam00000001467f06e8;
      auVar28._12_4_ = (uint)DAT_1467f06ec;
    }
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x88);
    puVar1 = (undefined1 *)(lVar6 + lVar19 * 0x30);
    local_d8 = *puVar1;
    uStack_d7 = puVar1[1];
    uStack_d6 = puVar1[2];
    uStack_d5 = puVar1[3];
    cVar10 = puVar1[4];
    uStack_d3 = puVar1[5];
    uStack_d2 = puVar1[6];
    uStack_d1 = puVar1[7];
    uStack_d0 = puVar1[8];
    uStack_cf = puVar1[9];
    uStack_ce = puVar1[10];
    uStack_cd = puVar1[0xb];
    uStack_cc = puVar1[0xc];
    uStack_cb = puVar1[0xd];
    uStack_ca = puVar1[0xe];
    uStack_c9 = puVar1[0xf];
    pfVar2 = (float *)(lVar6 + 0x10 + lVar19 * 0x30);
    fVar37 = *pfVar2;
    fVar38 = pfVar2[1];
    local_c8 = *(undefined8 *)pfVar2;
    fVar39 = pfVar2[2];
    fVar11 = pfVar2[3];
    uStack_c0 = *(undefined8 *)(pfVar2 + 2);
    puVar3 = (undefined4 *)(lVar6 + 0x20 + lVar19 * 0x30);
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    cStack_d4 = cVar10;
    lVar19 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
             ::GetBox(local_e0,local_e4);
    if (cVar10 == '\x01') {
      local_128 = 0.0 - DAT_1467f06f0;
      fStack_124 = 0.0 - fRam00000001467f06f4;
      fStack_120 = 0.0 - fRam00000001467f06f8;
      fStack_11c = 0.0 - fRam00000001467f06fc;
    }
    else {
      local_128 = _DAT_1467f06e0;
      fStack_124 = fRam00000001467f06e4;
      fStack_120 = fRam00000001467f06e8;
      fStack_11c = DAT_1467f06ec;
      if (cVar10 == '\0') {
        local_128 = DAT_1467f06f0;
        fStack_124 = fRam00000001467f06f4;
        fStack_120 = fRam00000001467f06f8;
        fStack_11c = fRam00000001467f06fc;
      }
    }
    fVar23 = fVar34 * fVar34;
    fVar26 = fVar35 * fVar35;
    fVar27 = fVar36 * fVar36;
    fVar29 = fVar26 + fVar23 + fVar27;
    fVar30 = fVar26 + fVar23 + fVar27;
    fVar31 = fVar26 + fVar23 + fVar27;
    fVar27 = fVar26 + fVar23 + fVar27;
    auVar25._4_4_ = fVar30;
    auVar25._0_4_ = fVar29;
    auVar25._8_4_ = fVar31;
    auVar25._12_4_ = fVar27;
    auVar28 = rsqrtps(in_XMM2,auVar25);
    fVar23 = auVar28._0_4_;
    fVar26 = auVar28._4_4_;
    fVar32 = auVar28._8_4_;
    fVar33 = auVar28._12_4_;
    fVar23 = (float)(~-(uint)(fVar29 <= 0.0) &
                    (uint)((3.0 - fVar29 * fVar23 * fVar23) * fVar23 * 0.5));
    fVar26 = (float)(~-(uint)(fVar30 <= 0.0) &
                    (uint)((3.0 - fVar30 * fVar26 * fVar26) * fVar26 * 0.5));
    fVar32 = (float)(~-(uint)(fVar31 <= 0.0) &
                    (uint)((3.0 - fVar31 * fVar32 * fVar32) * fVar32 * 0.5));
    fVar33 = (float)(~-(uint)(fVar27 <= 0.0) &
                    (uint)((3.0 - fVar27 * fVar33 * fVar33) * fVar33 * 0.5));
    fVar29 = fVar23 * fVar29;
    fVar30 = fVar26 * fVar30;
    fVar31 = fVar32 * fVar31;
    fVar27 = fVar33 * fVar27;
    fVar23 = fVar23 * fVar34;
    fVar26 = fVar26 * fVar35;
    fVar32 = fVar32 * fVar36;
    fVar33 = fVar33 * (fVar8 - fVar9);
    fVar37 = fVar37 + *(float *)(param_1 + 0x20) * local_128 * fVar23;
    fVar38 = fVar38 + *(float *)(param_1 + 0x24) * fStack_124 * fVar26;
    fVar39 = fVar39 + *(float *)(param_1 + 0x28) * fStack_120 * fVar32;
    local_a8 = *param_2;
    uStack_a0 = param_2[1];
    local_88 = param_2[4];
    uStack_80 = param_2[5];
    local_c8 = CONCAT44(fVar38,fVar37);
    uStack_c0 = CONCAT44(fVar11 + *(float *)(param_1 + 0x2c) * fStack_11c * fVar33,fVar39);
    fVar37 = (fVar37 - *(float *)(lVar19 + 0x10)) * fVar23;
    fVar34 = (fVar38 - *(float *)(lVar19 + 0x14)) * fVar26;
    fVar35 = (fVar39 - *(float *)(lVar19 + 0x18)) * fVar32;
    auVar24._0_4_ = fVar34 + fVar37 + fVar35;
    auVar24._4_4_ = fVar34 + fVar37 + fVar35;
    auVar24._8_4_ = fVar34 + fVar37 + fVar35;
    auVar24._12_4_ = fVar34 + fVar37 + fVar35;
    auVar7._4_4_ = fVar30;
    auVar7._0_4_ = fVar29;
    auVar7._8_4_ = fVar31;
    auVar7._12_4_ = fVar27;
    auVar25 = divps(auVar24,auVar7);
    auVar28._0_4_ = ~-(uint)(fVar29 == 0.0) & auVar25._0_4_;
    auVar28._4_4_ = ~-(uint)(fVar30 == 0.0) & auVar25._4_4_;
    auVar28._8_4_ = ~-(uint)(fVar31 == 0.0) & auVar25._8_4_;
    auVar28._12_4_ = ~-(uint)(fVar27 == 0.0) & auVar25._12_4_;
    local_98 = CONCAT44(auVar24._4_4_ * fVar26 + *(float *)(lVar19 + 0x14),
                        auVar24._0_4_ * fVar23 + *(float *)(lVar19 + 0x10));
    uStack_90 = CONCAT44(auVar24._12_4_ * fVar33 + *(float *)(lVar19 + 0x1c),
                         auVar24._8_4_ * fVar32 + *(float *)(lVar19 + 0x18));
    FUN_1438b98b0(param_1,&local_d8,&local_a8);
  }
LAB_1438bb92d:
  if (cVar4 != '\0') {
    fVar37 = auVar28._0_4_;
    fVar34 = auVar28._8_4_;
    fVar35 = auVar28._12_4_;
    auVar28._4_4_ = (uint)(fRam00000001467f06f4 - auVar28._4_4_);
    auVar28._0_4_ = (uint)(DAT_1467f06f0 - fVar37);
    auVar28._8_4_ = (uint)(fRam00000001467f06f8 - fVar34);
    auVar28._12_4_ = (uint)(fRam00000001467f06fc - fVar35);
  }
  FUN_1438ba7e0(param_1 + 0x80);
  auVar14._4_4_ = fRam00000001467f06f4;
  auVar14._0_4_ = DAT_1467f06f0;
  auVar14._8_4_ = fRam00000001467f06f8;
  auVar14._12_4_ = fRam00000001467f06fc;
  auVar28 = minps(auVar28,auVar14);
  uVar5 = *(undefined4 *)param_2;
  lVar19 = (longlong)param_3 * 0x80 + *(longlong *)(param_1 + 0x50);
  local_d8 = (undefined1)uVar5;
  uStack_d7 = (undefined1)((uint)uVar5 >> 8);
  uStack_d6 = (undefined1)((uint)uVar5 >> 0x10);
  uStack_d5 = (undefined1)((uint)uVar5 >> 0x18);
  auVar13._4_4_ = fRam00000001467f06e4;
  auVar13._0_4_ = _DAT_1467f06e0;
  auVar13._8_4_ = fRam00000001467f06e8;
  auVar13._12_4_ = DAT_1467f06ec;
  auVar28 = maxps(auVar28,auVar13);
  cStack_d4 = 0xff;
  uStack_d3 = 0;
  uStack_d1 = 1;
  uStack_d0 = 0;
  fVar37 = auVar28._0_4_ * (*(float *)(lVar19 + 0x50) - *(float *)(lVar19 + 0x60)) +
           *(float *)(lVar19 + 0x60);
  fVar34 = auVar28._4_4_ * (*(float *)(lVar19 + 0x54) - *(float *)(lVar19 + 100)) +
           *(float *)(lVar19 + 100);
  fVar35 = auVar28._8_4_ * (*(float *)(lVar19 + 0x58) - *(float *)(lVar19 + 0x68)) +
           *(float *)(lVar19 + 0x68);
  fVar36 = auVar28._12_4_ * (*(float *)(lVar19 + 0x5c) - *(float *)(lVar19 + 0x6c)) +
           *(float *)(lVar19 + 0x6c);
  uStack_d2 = fVar36 < 0.0;
  if (*(uint *)(param_1 + 0x90) == (*(uint *)(param_1 + 0x94) & 0x3fffffff)) {
    FUN_14370c460(&PTR_vftable_1467f0638,(longlong *)(param_1 + 0x88),0x30);
  }
  puVar20 = (undefined8 *)
            ((longlong)*(int *)(param_1 + 0x90) * 0x30 + *(longlong *)(param_1 + 0x88));
  if (puVar20 != (undefined8 *)0x0) {
    *puVar20 = CONCAT17(uStack_d1,
                        CONCAT16(uStack_d2,
                                 CONCAT15(uStack_d3,
                                          CONCAT14(cStack_d4,
                                                   CONCAT13(uStack_d5,
                                                            CONCAT12(uStack_d6,
                                                                     CONCAT11(uStack_d7,local_d8))))
                                         )));
    puVar20[1] = CONCAT17(uStack_c9,
                          CONCAT16(uStack_ca,
                                   CONCAT15(uStack_cb,
                                            CONCAT14(uStack_cc,
                                                     CONCAT13(uStack_cd,
                                                              CONCAT12(uStack_ce,
                                                                       CONCAT11(uStack_cf,uStack_d0)
                                                                      ))))));
    *(float *)(puVar20 + 2) = fVar37;
    *(float *)((longlong)puVar20 + 0x14) = fVar34;
    *(float *)(puVar20 + 3) = fVar35;
    *(float *)((longlong)puVar20 + 0x1c) = fVar36;
    *(float *)(puVar20 + 4) = fVar37;
    *(float *)((longlong)puVar20 + 0x24) = fVar34;
    *(float *)(puVar20 + 5) = fVar35;
    *(float *)((longlong)puVar20 + 0x2c) = fVar36;
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return 1;
}



// FUNCTION 1438bba50 FUN_1438bba50 body=433 status=ok
// SIG undefined FUN_1438bba50(void)

undefined8
FUN_1438bba50(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined8 uVar5;
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
  undefined1 local_res8 [8];
  float local_68;
  float fStack_64;
  float fStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  
  pfVar1 = (float *)(param_2 + 0x10);
  fVar6 = *(float *)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar13 = *(float *)(param_3 + 0x10) - *pfVar1;
  fVar14 = *(float *)(param_3 + 0x14) - *(float *)(param_2 + 0x14);
  fVar15 = *(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x18);
  uVar5 = 1;
  fVar16 = *(float *)(param_4 + 0x10) - *pfVar1;
  fVar17 = *(float *)(param_4 + 0x14) - *(float *)(param_2 + 0x14);
  fVar18 = *(float *)(param_4 + 0x18) - *(float *)(param_2 + 0x18);
  fVar7 = fVar6 * fVar16;
  fVar9 = fVar2 * fVar17;
  fVar11 = fVar3 * fVar18;
  fVar8 = fVar6 * fVar13;
  fVar10 = fVar2 * fVar14;
  fVar12 = fVar3 * fVar15;
  fVar16 = fVar16 + (0.0 - (fVar9 + fVar7 + fVar11)) * fVar6;
  fVar17 = fVar17 + (0.0 - (fVar9 + fVar7 + fVar11)) * fVar2;
  fVar18 = fVar18 + (0.0 - (fVar9 + fVar7 + fVar11)) * fVar3;
  fVar6 = (0.0 - (fVar10 + fVar8 + fVar12)) * fVar6;
  fVar13 = fVar13 + fVar6;
  fVar14 = fVar14 + (0.0 - (fVar10 + fVar8 + fVar12)) * fVar2;
  fVar15 = fVar15 + (0.0 - (fVar10 + fVar8 + fVar12)) * fVar3;
  if (param_5 != -1) {
    FUN_1438bb3d0(fVar6,param_5,0,&local_58,local_res8);
    FUN_1438bb3d0(param_1,param_5,1,&local_68,local_res8);
    if (0.0 < (fStack_64 - fStack_54) * fVar14 + (local_68 - local_58) * fVar13 +
              (fStack_60 - fStack_50) * fVar15 == (*(char *)(param_3 + 4) == '\0')) {
      return 0;
    }
  }
  if ((fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15 <=
       fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18) ||
     (uVar4 = FUN_1438bb150(param_1,pfVar1,param_3 + 0x20,param_4 + 0x20),
     uVar4 == *(byte *)(param_3 + 4))) {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1438bbc10 FUN_1438bbc10 body=111 status=ok
// SIG undefined FUN_1438bbc10(void)

bool FUN_1438bbc10(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x34) <= param_2 + 1) {
    return false;
  }
  piVar2 = (int *)(*(longlong *)(param_1 + 0x50) + 0x14 + (longlong)param_2 * 0x80);
  if ((*(byte *)((longlong)param_2 * 0x80 + 0x10 + *(longlong *)(param_1 + 0x50)) & 0x40) != 0) {
    return false;
  }
  iVar1 = FUN_1438bb120(param_1,param_2 + 1);
  if (param_3 != 1) {
    piVar2 = piVar2 + 1;
  }
  return *piVar2 == iVar1;
}



// FUNCTION 1438bbc80 FUN_1438bbc80 body=328 status=ok
// SIG undefined FUN_1438bbc80(void)

undefined8 FUN_1438bbc80(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  uStack_70 = param_3[3];
  local_68 = param_3[4];
  uStack_60 = param_3[5];
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_38 = *(undefined4 *)(param_2 + 4);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_30 = *(undefined4 *)(param_2 + 5);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_48 = *(float *)(param_2 + 2);
  fStack_44 = *(float *)((longlong)param_2 + 0x14);
  fStack_40 = *(float *)(param_2 + 3);
  fStack_3c = *(float *)((longlong)param_2 + 0x1c);
  FUN_1438bb030(local_38,&local_58,&local_88);
  fVar9 = (float)local_78 - local_48;
  fVar10 = local_78._4_4_ - fStack_44;
  fVar11 = (float)uStack_70 - fStack_40;
  fVar12 = uStack_70._4_4_ - fStack_3c;
  bVar1 = *(byte *)((longlong)param_3 + 4);
  fStack_a0 = fVar10 * *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0xa4) * fVar9;
  local_a8 = fVar11 * *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0xa8) * fVar10;
  fStack_a4 = fVar9 * *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xa0) * fVar11;
  fStack_9c = fVar12 * *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xac) * fVar12;
  if (bVar1 == 1) {
    local_a8 = -local_a8;
    fStack_a4 = -fStack_a4;
    fStack_a0 = -fStack_a0;
    fStack_9c = -fStack_9c;
  }
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)((longlong)param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 5);
  fVar5 = *(float *)((longlong)param_3 + 0x2c);
  local_a8 = fVar2 + local_a8;
  fStack_a4 = fVar3 + fStack_a4;
  fStack_a0 = fVar4 + fStack_a0;
  fStack_9c = fVar5 + fStack_9c;
  uVar6 = FUN_1438bb150(param_1,param_3 + 4,&local_a8,param_4 + 0x20);
  local_98 = *(undefined4 *)(param_4 + 0x20);
  uStack_94 = *(undefined4 *)(param_4 + 0x24);
  uStack_90 = *(undefined4 *)(param_4 + 0x28);
  uStack_8c = *(undefined4 *)(param_4 + 0x2c);
  local_a8 = fVar2 - fVar9;
  fStack_a4 = fVar3 - fVar10;
  fStack_a0 = fVar4 - fVar11;
  fStack_9c = fVar5 - fVar12;
  uVar7 = FUN_1438bb150(param_1,&local_a8,param_3 + 4,&local_98);
  if ((uVar7 == bVar1) || (uVar6 == bVar1)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 1438bbdd0 FUN_1438bbdd0 body=32 status=ok
// SIG undefined FUN_1438bbdd0(void)

byte FUN_1438bbdd0(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x34))) {
    return *(byte *)((longlong)param_2 * 0x80 + 0x10 + *(longlong *)(param_1 + 0x50)) & 0x10;
  }
  return 0;
}



// FUNCTION 1438bbdf0 FUN_1438bbdf0 body=46 status=ok
// SIG undefined FUN_1438bbdf0(void)

bool FUN_1438bbdf0(int *param_1)

{
  if (*param_1 == 1) {
    return param_1[1] < *(int *)(*(longlong *)(param_1 + 2) + 0x10);
  }
  return **(int **)(param_1 + 2) <= param_1[1];
}



// FUNCTION 1438bbe20 FUN_1438bbe20 body=47 status=ok
// SIG undefined FUN_1438bbe20(void)

bool FUN_1438bbe20(int *param_1)

{
  if (*param_1 == 1) {
    return param_1[1] <= *(int *)(*(longlong *)(param_1 + 2) + 4);
  }
  return *(int *)(*(longlong *)(param_1 + 2) + 4) <= param_1[1];
}



// FUNCTION 1438bbe50 FUN_1438bbe50 body=179 status=ok
// SIG undefined FUN_1438bbe50(void)

void FUN_1438bbe50(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 1) {
    iVar1 = *param_1;
    *param_1 = iVar1 + 1;
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 2));
    *param_3 = *puVar3;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar3 + 1);
    *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)puVar3 + 5);
    *(undefined1 *)((longlong)param_3 + 6) = *(undefined1 *)((longlong)puVar3 + 6);
    *(undefined1 *)((longlong)param_3 + 7) = *(undefined1 *)((longlong)puVar3 + 7);
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar3 + 2);
    uVar2 = *(undefined8 *)(puVar3 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar3 + 4);
    *(undefined8 *)(param_3 + 6) = uVar2;
    uVar2 = *(undefined8 *)(puVar3 + 10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(param_3 + 10) = uVar2;
    return;
  }
  puVar3 = (undefined4 *)((longlong)(param_1[4] + -1) * 0x30 + *(longlong *)(param_1 + 2));
  *param_3 = *puVar3;
  *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar3 + 1);
  *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)puVar3 + 5);
  *(undefined1 *)((longlong)param_3 + 6) = *(undefined1 *)((longlong)puVar3 + 6);
  *(undefined1 *)((longlong)param_3 + 7) = *(undefined1 *)((longlong)puVar3 + 7);
  *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar3 + 2);
  uVar2 = *(undefined8 *)(puVar3 + 6);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(puVar3 + 4);
  *(undefined8 *)(param_3 + 6) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 10);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(param_3 + 10) = uVar2;
  param_1[4] = param_1[4] + -1;
  return;
}



// FUNCTION 1438bbf10 FUN_1438bbf10 body=809 status=ok
// SIG undefined FUN_1438bbf10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438bbf10(longlong param_1,int *param_2,int *param_3)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  byte local_74;
  undefined4 local_73;
  float local_68;
  float fStack_64;
  float fStack_60;
  
  uVar17 = 0xffffffff;
  if (*(char *)((longlong)param_2 + 5) == '\x01') {
    uVar17 = *(undefined4 *)(param_1 + 0x114);
  }
  else {
    if (*(char *)((longlong)param_2 + 5) == '\x02') {
      uVar17 = *(undefined4 *)(param_1 + 0x114);
      iVar18 = *(int *)(param_1 + 0x34) + -1;
    }
    else {
      if ((((*(float *)(param_1 + 0x20) <= _DAT_1467f08f0 &&
             _DAT_1467f08f0 != *(float *)(param_1 + 0x20)) ||
           (*(char *)((longlong)param_2 + 7) != '\0')) ||
          (bVar1 = *(byte *)(param_2 + 1), bVar1 == 0xff)) ||
         ((*(char *)((longlong)param_2 + 6) == '\0' || (bVar1 == 0xffffffff)))) {
        *param_3 = *param_2;
        *(char *)(param_3 + 1) = (char)param_2[1];
        *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)param_2 + 5);
        *(undefined1 *)((longlong)param_3 + 6) = *(undefined1 *)((longlong)param_2 + 6);
        *(undefined1 *)((longlong)param_3 + 7) = *(undefined1 *)((longlong)param_2 + 7);
        *(char *)(param_3 + 2) = (char)param_2[2];
        uVar8 = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(param_3 + 6) = uVar8;
        uVar8 = *(undefined8 *)(param_2 + 10);
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_3 + 10) = uVar8;
        return;
      }
      iVar18 = *param_2;
      iVar13 = FUN_1438bb120(_DAT_1467f08f0,iVar18);
      local_73 = 0;
      local_78 = iVar18;
      local_74 = bVar1;
      FUN_1438bb340(param_1,&local_78);
      fVar11 = fStack_60;
      fVar10 = fStack_64;
      fVar9 = local_68;
      bVar1 = local_74;
      fVar2 = (float)param_2[4];
      fVar3 = (float)param_2[5];
      fVar4 = (float)param_2[6];
      fVar5 = (float)param_2[8];
      fVar6 = (float)param_2[9];
      fVar7 = (float)param_2[10];
      if (*(int *)(param_1 + 0x34) <= *param_2) goto LAB_1438bbf86;
      cVar12 = (char)param_2[1];
      iVar18 = -1;
      iVar19 = *param_2;
      do {
        iVar14 = FUN_1438bb120(param_1,iVar19,cVar12);
        if (iVar14 != iVar13) break;
        local_73 = 0;
        if (bVar1 == 0) {
          local_74 = 1;
        }
        else if (bVar1 == 1) {
          local_74 = 0;
        }
        else {
          local_74 = 0xff;
        }
        local_78 = iVar19;
        FUN_1438bb340(param_1,&local_78);
        cVar12 = (char)param_2[1];
        if (0.0 < ((local_68 - fVar9) * (fVar4 - fVar7) - (fVar2 - fVar5) * (fStack_60 - fVar11)) *
                  *(float *)(param_1 + 0xa4) +
                  ((fStack_60 - fVar11) * (fVar3 - fVar6) - (fVar4 - fVar7) * (fStack_64 - fVar10))
                  * *(float *)(param_1 + 0xa0) +
                  ((fStack_64 - fVar10) * (fVar2 - fVar5) - (fVar3 - fVar6) * (local_68 - fVar9)) *
                  *(float *)(param_1 + 0xa8) != (cVar12 == '\0')) {
          piVar15 = param_2 + 4;
          local_88 = *piVar15;
          iStack_84 = param_2[5];
          iStack_80 = param_2[6];
          iStack_7c = param_2[7];
          cVar12 = FUN_143888400(*(undefined8 *)(param_1 + 0x38),param_1 + 0xa0,
                                 *(undefined4 *)
                                  ((longlong)iVar19 * 0x80 + 0x20 + *(longlong *)(param_1 + 0x50)),
                                 &local_88);
          *param_3 = *param_2;
          *(char *)(param_3 + 1) = (char)param_2[1];
          *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)param_2 + 5);
          *(undefined1 *)((longlong)param_3 + 6) = *(undefined1 *)((longlong)param_2 + 6);
          *(undefined1 *)((longlong)param_3 + 7) = *(undefined1 *)((longlong)param_2 + 7);
          *(char *)(param_3 + 2) = (char)param_2[2];
          uVar8 = *(undefined8 *)(param_2 + 6);
          piVar16 = &local_88;
          if (cVar12 == '\0') {
            piVar16 = piVar15;
          }
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)piVar15;
          *(undefined8 *)(param_3 + 6) = uVar8;
          uVar8 = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_3 + 10) = uVar8;
          uVar8 = *(undefined8 *)(piVar16 + 2);
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)piVar16;
          *(undefined8 *)(param_3 + 6) = uVar8;
          return;
        }
        iVar14 = iVar19 + 1;
        iVar18 = iVar19;
        iVar19 = iVar14;
      } while (iVar14 < *(int *)(param_1 + 0x34));
    }
    if (iVar18 != -1) {
      uVar17 = *(undefined4 *)((longlong)iVar18 * 0x80 + 0xc + *(longlong *)(param_1 + 0x50));
    }
  }
LAB_1438bbf86:
  local_88 = param_2[4];
  iStack_84 = param_2[5];
  iStack_80 = param_2[6];
  iStack_7c = param_2[7];
  cVar12 = FUN_143888400(*(undefined8 *)(param_1 + 0x38),param_1 + 0xa0,uVar17,&local_88);
  *param_3 = *param_2;
  *(char *)(param_3 + 1) = (char)param_2[1];
  *(undefined1 *)((longlong)param_3 + 5) = *(undefined1 *)((longlong)param_2 + 5);
  *(undefined1 *)((longlong)param_3 + 6) = *(undefined1 *)((longlong)param_2 + 6);
  *(undefined1 *)((longlong)param_3 + 7) = *(undefined1 *)((longlong)param_2 + 7);
  *(char *)(param_3 + 2) = (char)param_2[2];
  uVar8 = *(undefined8 *)(param_2 + 6);
  piVar15 = &local_88;
  if (cVar12 == '\0') {
    piVar15 = param_2 + 4;
  }
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_3 + 6) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_3 + 10) = uVar8;
  uVar8 = *(undefined8 *)(piVar15 + 2);
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)piVar15;
  *(undefined8 *)(param_3 + 6) = uVar8;
  return;
}



// FUNCTION 1438bc240 FUN_1438bc240 body=2174 status=ok
// SIG undefined FUN_1438bc240(void)

void FUN_1438bc240(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 uVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  uint5 *puVar23;
  float *pfVar24;
  uint uVar25;
  float *pfVar26;
  char cVar27;
  undefined1 in_XMM2 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint local_res10;
  uint *in_stack_fffffffffffffdc8;
  undefined4 uVar37;
  undefined4 local_218;
  undefined1 uStack_214;
  undefined1 uStack_213;
  undefined1 uStack_212;
  undefined1 uStack_211;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  uint local_198;
  char cStack_194;
  undefined2 uStack_193;
  char cStack_191;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  undefined2 uStack_164;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  float fStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint5 local_108;
  undefined1 auStack_103 [3];
  undefined8 uStack_100;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined1 local_d4;
  float local_a8 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  puVar16 = (undefined8 *)(param_1 + 0xb0);
  uVar37 = *(undefined4 *)puVar16;
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  puVar7 = (undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined4 *)puVar7;
  fVar8 = *(float *)(param_1 + 0xbc);
  if (*(int *)(param_1 + 0x34) < 1) {
    local_158 = *(undefined4 *)(param_1 + 0xc0);
    uStack_154 = *(undefined4 *)(param_1 + 0xc4);
    uStack_150 = *(undefined4 *)(param_1 + 200);
    fStack_14c = *(float *)(param_1 + 0xcc);
    uStack_212 = fVar8 < 0.0;
    uStack_211 = 0;
    uStack_210 = 0;
    local_218 = 0xffffffff;
    uStack_214 = 0xff;
    uStack_213 = 1;
    uStack_161 = 0;
    uStack_160 = 0;
    uStack_164 = 0x2ff;
    uStack_162 = fStack_14c < 0.0;
    local_208 = *puVar16;
    uStack_200 = *puVar7;
    local_1f8 = *puVar16;
    uStack_1f0 = *puVar7;
    local_168 = *(int *)(param_1 + 0x34);
    local_148 = local_158;
    uStack_144 = uStack_154;
    uStack_140 = uStack_150;
    fStack_13c = fStack_14c;
    FUN_1438b98b0(fStack_14c,&local_218,&local_168);
    FUN_1438bcac0(param_1);
    return;
  }
  FUN_1438ba7e0(param_1 + 0x80);
  plVar1 = (longlong *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x90) == (*(uint *)(param_1 + 0x94) & 0x3fffffff)) {
    FUN_14370c460(&PTR_vftable_1467f0638,plVar1,0x30);
  }
  puVar19 = (undefined4 *)((longlong)*(int *)(param_1 + 0x90) * 0x30 + *plVar1);
  if (puVar19 != (undefined4 *)0x0) {
    *puVar19 = 0xfffffffe;
    puVar19[1] = 0xff;
    *(undefined1 *)(puVar19 + 2) = 0;
  }
  iVar14 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x90) = iVar14 + 1;
  puVar19 = (undefined4 *)((longlong)iVar14 * 0x30 + *plVar1);
  puVar19[4] = uVar37;
  puVar19[5] = uVar5;
  puVar19[6] = uVar6;
  puVar19[7] = fVar8;
  puVar19[8] = uVar37;
  puVar19[9] = uVar5;
  puVar19[10] = uVar6;
  puVar19[0xb] = fVar8;
  *(bool *)((longlong)puVar19 + 6) = fVar8 < 0.0;
  uVar22 = 0;
  *puVar19 = 0xffffffff;
  *(undefined2 *)(puVar19 + 1) = 0x1ff;
  uVar25 = 1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  local_res10 = 0;
  cVar27 = '\0';
  thunk_FUN_143719c70(0xc8e76df8);
  fVar8 = DAT_1468296f4;
  do {
    uVar12 = local_res10;
    if (*(int *)(param_1 + 0x34) < (int)uVar22) break;
    FUN_1438b9390(&local_1b8,param_1 + 0x80,uVar25,0xffffffff);
    local_1a8 = local_1b8;
    uStack_1a4 = uStack_1b4;
    uStack_1a0 = uStack_1b0;
    uStack_19c = uStack_1ac;
    while( true ) {
      FUN_1438b9690(&local_1a8,0);
      puVar16 = (undefined8 *)
                TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                ::GetBox(param_1 + 0x80,*(undefined4 *)(param_1 + 0x84));
      _local_108 = *puVar16;
      uStack_100 = puVar16[1];
      local_f8 = *(float *)(puVar16 + 2);
      uStack_f4 = *(undefined4 *)((longlong)puVar16 + 0x14);
      uStack_f0 = *(undefined4 *)(puVar16 + 3);
      uStack_ec = *(undefined4 *)((longlong)puVar16 + 0x1c);
      local_e8 = *(undefined4 *)(puVar16 + 4);
      uStack_e4 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uStack_e0 = *(undefined4 *)(puVar16 + 5);
      uStack_dc = *(undefined4 *)((longlong)puVar16 + 0x2c);
      uStack_193 = 0;
      cStack_191 = '\0';
      uStack_190 = 0;
      cVar13 = (char)uVar25;
      local_198 = uVar22;
      cStack_194 = cVar13;
      FUN_1438bb340(param_1,&local_198);
      fVar36 = fStack_180;
      fVar35 = fStack_184;
      fVar34 = local_188;
      local_138 = CONCAT17(cStack_191,CONCAT25(uStack_193,CONCAT14(cStack_194,local_198)));
      uStack_130 = CONCAT71(uStack_18f,uStack_190);
      uVar21 = CONCAT44(uStack_1ac,uStack_1b0);
      local_118 = local_178;
      uStack_114 = uStack_174;
      uStack_110 = uStack_170;
      uStack_10c = uStack_16c;
      local_128 = local_188;
      fStack_124 = fStack_184;
      fStack_120 = fStack_180;
      uStack_11c = uStack_17c;
      if ((int)uVar22 < *(int *)(param_1 + 0x34)) {
        lVar17 = TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                 ::GetBox(uVar21,uStack_1b4);
        cVar2 = cStack_191;
        fVar34 = fVar34 - *(float *)(lVar17 + 0x10);
        fVar35 = fVar35 - *(float *)(lVar17 + 0x14);
        fVar36 = fVar36 - *(float *)(lVar17 + 0x18);
        fVar34 = fVar34 * fVar34;
        fVar35 = fVar35 * fVar35;
        fVar36 = fVar36 * fVar36;
        fVar30 = fVar35 + fVar34 + fVar36;
        auVar28._4_4_ = fVar35 + fVar34 + fVar36;
        auVar28._0_4_ = fVar30;
        auVar28._8_4_ = fVar35 + fVar34 + fVar36;
        auVar28._12_4_ = fVar35 + fVar34 + fVar36;
        auVar28 = rsqrtps(in_XMM2,auVar28);
        fVar34 = auVar28._0_4_;
        in_XMM2._0_4_ = fVar34 * 0.5;
        in_XMM2._4_4_ = auVar28._4_4_ * 0.5;
        in_XMM2._8_4_ = auVar28._8_4_ * 0.5;
        in_XMM2._12_4_ = auVar28._12_4_ * 0.5;
        if ((((float)(~-(uint)(fVar30 <= 0.0) &
                     (uint)((3.0 - fVar34 * fVar30 * fVar34) * in_XMM2._0_4_ * fVar30)) < fVar8) &&
            (cStack_191 == '\0')) ||
           ((iVar14 = FUN_1438bcb00(param_1,&local_108,&local_198), iVar14 != 0 &&
            ((uVar22 != 0 && (cVar2 == '\0')))))) goto LAB_1438bc877;
      }
      local_1e8 = 0xfffffffffe;
      uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
      local_218 = 0xfffffffe;
      uStack_214 = 0xff;
      uStack_213 = 0;
      uStack_212 = 0;
      uStack_211 = 0;
      uStack_210 = 0;
      iVar14 = FUN_1438bbdf0(&local_1a8);
      if (iVar14 == 0) break;
      iVar14 = FUN_1438bbe20(&local_1a8);
      uVar5 = uStack_1a4;
      uVar11 = CONCAT44(uStack_19c,uStack_1a0);
      uVar20 = uVar11;
      uVar37 = uStack_1a4;
      if (iVar14 != 0) {
        uVar20 = uVar21;
        uVar37 = uStack_1b4;
      }
      puVar16 = (undefined8 *)
                TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                ::GetBox(uVar20,uVar37);
      cVar2 = *(char *)((longlong)puVar16 + 4);
      local_1d8 = *(undefined4 *)(puVar16 + 2);
      uStack_1d4 = *(undefined4 *)((longlong)puVar16 + 0x14);
      uStack_1d0 = *(undefined4 *)(puVar16 + 3);
      uStack_1cc = *(undefined4 *)((longlong)puVar16 + 0x1c);
      local_1c8 = *(undefined4 *)(puVar16 + 4);
      uStack_1c4 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uStack_1c0 = *(undefined4 *)(puVar16 + 5);
      uStack_1bc = *(undefined4 *)((longlong)puVar16 + 0x2c);
      local_1e8 = *puVar16;
      uStack_1e0 = CONCAT71(uStack_1e0._1_7_,*(undefined1 *)(puVar16 + 1));
      uVar21 = uVar11;
      uVar37 = uVar5;
      if (iVar14 == 0) {
        uVar21 = CONCAT44(uStack_1ac,uStack_1b0);
        uVar37 = uStack_1b4;
      }
      puVar19 = (undefined4 *)
                TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                ::GetBox(uVar21,uVar37);
      local_218 = *puVar19;
      local_208 = *(undefined8 *)(puVar19 + 4);
      uStack_200 = *(undefined8 *)(puVar19 + 6);
      local_1f8 = *(undefined8 *)(puVar19 + 8);
      uStack_1f0 = *(undefined8 *)(puVar19 + 10);
      uStack_214 = *(undefined1 *)(puVar19 + 1);
      uStack_213 = *(undefined1 *)((longlong)puVar19 + 5);
      uStack_212 = *(undefined1 *)((longlong)puVar19 + 6);
      uStack_211 = *(undefined1 *)((longlong)puVar19 + 7);
      uStack_210 = *(undefined1 *)(puVar19 + 2);
      iVar14 = FUN_1438bcb00(param_1,&local_198,&local_1e8);
      if (iVar14 == 0) {
        iVar14 = FUN_1438bcb00(param_1,&local_218,&local_1e8);
        if (iVar14 == 0) {
          if (cVar2 == cVar13) {
            in_stack_fffffffffffffdc8 = &local_198;
            cVar13 = FUN_1438bac00(param_1,&local_218,&local_1e8,&local_108,
                                   in_stack_fffffffffffffdc8,&local_138,uVar22 - 1);
          }
          else {
            FUN_1438bb030(param_1,&local_108,&local_198);
            FUN_1438bb030(param_1,&local_218,&local_1e8);
            uVar15 = FUN_1438bb150(param_1,&local_208,&local_1d8);
            cVar13 = uVar15 == uVar25;
          }
          goto LAB_1438bc709;
        }
      }
      else {
        if ((uVar22 != *(uint *)(param_1 + 0x34)) &&
           (iVar14 = FUN_1438bbdd0(param_1,uVar22), iVar14 == 0)) goto LAB_1438bc877;
        if ((cVar2 == cVar13) &&
           (iVar14 = FUN_1438bbc80(param_1,&local_218,&local_1e8), iVar14 != 0)) {
          cVar13 = '\x01';
        }
        else {
          cVar13 = '\0';
        }
        FUN_1438bb030(param_1,&local_108,&local_198);
LAB_1438bc709:
        if (cVar13 != '\0') goto LAB_1438bc834;
      }
      lVar17 = param_1 + 0x80;
      local_168 = -2;
      uStack_164 = 0xff;
      uStack_162 = 0;
      uStack_161 = 0;
      uStack_160 = 0;
      FUN_1438bbe50(lVar17,uVar25,&local_168);
      iVar14 = FUN_1438b9e90(lVar17);
      uVar37 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
      if (iVar14 != 0) {
        puVar16 = (undefined8 *)
                  TStaticSpatialIndex<TObjectPtr<UWorldPartitionRuntimeCell>,FStaticSpatialIndex::FSpatialIndexProfile2D,FStaticSpatialIndex::TRTreeImpl<FStaticSpatialIndex::FSpatialIndexProfile2D,16,64>,FStaticSpatialIndex::TNodeSorterHilbert<FStaticSpatialIndex::FSpatialIndexProfile2D,65536>_>
                  ::GetBox(uVar11,uVar5);
        uVar21 = *puVar16;
        local_218 = (undefined4)uVar21;
        uStack_214 = (undefined1)((ulonglong)uVar21 >> 0x20);
        uStack_213 = (undefined1)((ulonglong)uVar21 >> 0x28);
        uStack_212 = (undefined1)((ulonglong)uVar21 >> 0x30);
        uStack_211 = (undefined1)((ulonglong)uVar21 >> 0x38);
        uStack_210 = (undefined1)puVar16[1];
        uStack_20f = (undefined7)((ulonglong)puVar16[1] >> 8);
        local_208 = puVar16[2];
        uStack_200 = puVar16[3];
        local_1f8 = puVar16[4];
        uStack_1f0 = puVar16[5];
        local_1e8 = CONCAT17(uStack_161,CONCAT16(uStack_162,CONCAT24(uStack_164,local_168)));
        uStack_1e0 = CONCAT71(uStack_15f,uStack_160);
        local_1c8 = local_148;
        uStack_1c4 = uStack_144;
        uStack_1c0 = uStack_140;
        uStack_1bc = fStack_13c;
        local_1d8 = local_158;
        uStack_1d4 = uStack_154;
        uStack_1d0 = uStack_150;
        uStack_1cc = fStack_14c;
        FUN_1438bb030(param_1,&local_1e8,&local_218);
        in_stack_fffffffffffffdc8 = (uint *)CONCAT44(uVar37,uVar22 - 1);
        iVar14 = FUN_1438bba50(param_1,&local_1e8,&local_218,&local_198,in_stack_fffffffffffffdc8);
        if (iVar14 != 0) {
          FUN_1438b98b0(param_1,&local_108,&local_198);
          FUN_1438b9730(lVar17,&local_138,uVar25);
          cVar27 = (int)local_138 == *(int *)(param_1 + 0x34);
          FUN_1438bb480(param_1,&local_138,uVar22);
          goto LAB_1438bc877;
        }
        FUN_1438b98b0(param_1,&local_1e8,&local_218);
        *(undefined4 *)(param_1 + 0x84) = uVar5;
      }
      FUN_1438b9690(&local_1b8,0);
    }
    FUN_1438bb030(param_1,&local_108,&local_198);
LAB_1438bc834:
    FUN_1438b9730(param_1 + 0x80,&local_138,uVar25);
    cVar27 = FUN_1438ba5f0(param_1,&local_138,uVar25);
LAB_1438bc877:
    uVar15 = uVar22 + 1;
    if (local_res10 == 0xffffffff) {
      cVar13 = FUN_1438bbc10(param_1,uVar22,1);
      if (cVar13 == '\0') {
        cVar13 = FUN_1438bbc10(param_1,uVar22,0);
        if (cVar13 == '\0') {
          lVar17 = 2;
          puVar18 = auStack_103;
          do {
            *(undefined4 *)(puVar18 + -5) = 0xfffffffe;
            *(undefined4 *)(puVar18 + -1) = 0xff;
            puVar18[3] = 0;
            puVar18 = puVar18 + 0x30;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          local_a8[4] = 0.0;
          local_a8[5] = 0.0;
          local_a8[6] = 0.0;
          local_a8[7] = 0.0;
          pfVar26 = local_a8;
          local_a8[0] = 0.0;
          local_a8[1] = 0.0;
          local_a8[2] = 0.0;
          local_a8[3] = 0.0;
          pfVar24 = &local_f8;
          puVar23 = &local_108;
          local_d4 = 1;
          lVar17 = 2;
          local_108 = (uint5)uVar15;
          local_d8 = uVar15;
          do {
            FUN_1438bb340(param_1,puVar23);
            puVar16 = (undefined8 *)FUN_1438bb100(param_1 + 0x80);
            local_88 = *puVar16;
            uStack_80 = puVar16[1];
            local_78 = *(float *)(puVar16 + 2);
            fStack_74 = *(float *)((longlong)puVar16 + 0x14);
            fStack_70 = *(float *)(puVar16 + 3);
            uStack_6c = *(undefined4 *)((longlong)puVar16 + 0x1c);
            local_68 = *(undefined4 *)(puVar16 + 4);
            uStack_64 = *(undefined4 *)((longlong)puVar16 + 0x24);
            uStack_60 = *(undefined4 *)(puVar16 + 5);
            uStack_5c = *(undefined4 *)((longlong)puVar16 + 0x2c);
            FUN_1438bb030(param_1,&local_88,puVar23);
            puVar23 = puVar23 + 6;
            fVar34 = *pfVar24;
            pfVar9 = pfVar24 + 1;
            pfVar10 = pfVar24 + 2;
            pfVar24 = pfVar24 + 0xc;
            fVar34 = (local_78 - fVar34) * (local_78 - fVar34);
            fVar35 = (fStack_74 - *pfVar9) * (fStack_74 - *pfVar9);
            fVar36 = (fStack_70 - *pfVar10) * (fStack_70 - *pfVar10);
            fVar31 = fVar35 + fVar34 + fVar36;
            fVar32 = fVar35 + fVar34 + fVar36;
            fVar33 = fVar35 + fVar34 + fVar36;
            fVar36 = fVar35 + fVar34 + fVar36;
            auVar3._4_4_ = fVar32;
            auVar3._0_4_ = fVar31;
            auVar3._8_4_ = fVar33;
            auVar3._12_4_ = fVar36;
            auVar28 = rsqrtps(in_XMM2,auVar3);
            fVar34 = auVar28._0_4_;
            fVar35 = auVar28._4_4_;
            fVar30 = auVar28._8_4_;
            fVar29 = auVar28._12_4_;
            in_XMM2._0_4_ = fVar34 * 0.5;
            in_XMM2._4_4_ = fVar35 * 0.5;
            in_XMM2._8_4_ = fVar30 * 0.5;
            in_XMM2._12_4_ = fVar29 * 0.5;
            *pfVar26 = (float)(~-(uint)(fVar31 <= 0.0) &
                              (uint)((3.0 - fVar34 * fVar31 * fVar34) * in_XMM2._0_4_ * fVar31));
            pfVar26[1] = (float)(~-(uint)(fVar32 <= 0.0) &
                                (uint)((3.0 - fVar35 * fVar32 * fVar35) * in_XMM2._4_4_ * fVar32));
            pfVar26[2] = (float)(~-(uint)(fVar33 <= 0.0) &
                                (uint)((3.0 - fVar30 * fVar33 * fVar30) * in_XMM2._8_4_ * fVar33));
            pfVar26[3] = (float)(~-(uint)(fVar36 <= 0.0) &
                                (uint)((3.0 - fVar29 * fVar36 * fVar29) * in_XMM2._12_4_ * fVar36));
            pfVar26 = pfVar26 + 4;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          bVar4 = local_a8[4] < local_a8[0];
          uVar25 = (uint)bVar4;
          if (bVar4) {
            if (bVar4) {
              local_res10 = 0;
              uVar22 = uVar15;
            }
            else {
              local_res10 = 0xffffffff;
              uVar22 = uVar15;
            }
          }
          else {
            local_res10 = 1;
            uVar22 = uVar15;
          }
        }
        else {
          uVar22 = uVar15;
          uVar25 = 1;
        }
      }
      else {
        uVar22 = uVar15;
        uVar25 = 0;
      }
    }
    else {
      local_res10 = 0xffffffff;
      uVar25 = uVar12;
    }
    thunk_FUN_143719c70(0xe7dde9f4);
  } while (cVar27 == '\0');
  FUN_1438bcac0(param_1);
  return;
}



// FUNCTION 1438bcac0 FUN_1438bcac0 body=62 status=ok
// SIG undefined FUN_1438bcac0(void)

undefined8 FUN_1438bcac0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if ((*plVar1 == 0) && ((int)plVar1[2] <= *(int *)((longlong)plVar1 + 0x14))) {
    FUN_1438b9320();
    return 0;
  }
  FUN_1438b9320();
  return 1;
}



// FUNCTION 1438bcb00 FUN_1438bcb00 body=266 status=ok
// SIG undefined FUN_1438bcb00(void)

bool FUN_1438bcb00(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (((*(char *)(param_2 + 7) != '\0') || (*(byte *)(param_2 + 4) == 0xff)) ||
     (uVar2 = (uint)*(byte *)(param_2 + 4), *(char *)(param_2 + 6) == '\0')) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0xffffffff;
  if (((*(char *)(param_3 + 7) == '\0') && (uVar1 = 0xffffffff, *(byte *)(param_3 + 4) != 0xff)) &&
     (*(char *)(param_3 + 6) != '\0')) {
    uVar1 = (uint)*(byte *)(param_3 + 4);
  }
  if ((uVar1 == 0xffffffff) != (uVar2 == 0xffffffff)) {
    fVar7 = *(float *)(param_3 + 0x20) - *(float *)(param_2 + 0x20);
    fVar8 = *(float *)(param_3 + 0x24) - *(float *)(param_2 + 0x24);
    fVar9 = *(float *)(param_3 + 0x28) - *(float *)(param_2 + 0x28);
    fVar3 = *(float *)(param_1 + 0xa0) * fVar7;
    fVar6 = *(float *)(param_1 + 0xa4) * fVar8;
    auVar4._8_4_ = *(float *)(param_1 + 0xa8) * fVar9;
    auVar4._4_4_ = auVar4._8_4_;
    auVar4._0_4_ = auVar4._8_4_;
    auVar4._12_4_ = auVar4._8_4_;
    fVar7 = fVar7 + (0.0 - (fVar6 + fVar3 + auVar4._8_4_)) * *(float *)(param_1 + 0xa0);
    fVar8 = fVar8 + (0.0 - (fVar6 + fVar3 + auVar4._8_4_)) * *(float *)(param_1 + 0xa4);
    fVar9 = fVar9 + (0.0 - (fVar6 + fVar3 + auVar4._8_4_)) * *(float *)(param_1 + 0xa8);
    fVar7 = fVar7 * fVar7;
    fVar8 = fVar8 * fVar8;
    fVar9 = fVar9 * fVar9;
    fVar6 = fVar8 + fVar7 + fVar9;
    auVar5._4_4_ = fVar8 + fVar7 + fVar9;
    auVar5._0_4_ = fVar6;
    auVar5._8_4_ = fVar8 + fVar7 + fVar9;
    auVar5._12_4_ = fVar8 + fVar7 + fVar9;
    auVar5 = rsqrtps(auVar4,auVar5);
    fVar3 = auVar5._0_4_;
    return (float)(~-(uint)(fVar6 <= 0.0) &
                  (uint)((3.0 - fVar3 * fVar6 * fVar3) * fVar3 * 0.5 * fVar6)) <
           *(float *)(param_1 + 0x20);
  }
  return false;
}



// FUNCTION 1438bcc10 FUN_1438bcc10 body=118 status=ok
// SIG undefined FUN_1438bcc10(void)

undefined8 * FUN_1438bcc10(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshCutFaceTask>::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshCutFaceTask>::vftable;
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



// FUNCTION 1438bcc90 FUN_1438bcc90 body=635 status=ok
// SIG undefined FUN_1438bcc90(void)

undefined8 * FUN_1438bcc90(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_res8 [2];
  
  uVar5 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkaiUpdateNavDataTasks::Context::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  local_res8[0] = 0;
  uVar3 = FUN_143703a50();
  iVar1 = local_res8[0];
  uVar4 = uVar5;
  iVar2 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar4 = FUN_143702d60(uVar3,4,local_res8);
    iVar2 = local_res8[0];
  }
  param_1[8] = uVar4;
  *(int *)(param_1 + 9) = iVar1;
  local_res8[0] = 0;
  iVar1 = -0x80000000;
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  *(int *)((longlong)param_1 + 0x4c) = iVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ba3d70a;
  *(undefined4 *)(param_1 + 0xd) = 0x42480000;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  uVar4 = FUN_143703a50();
  iVar2 = local_res8[0];
  if (local_res8[0] != 0) {
    uVar5 = FUN_143702d60(uVar4,4,local_res8);
  }
  param_1[0x1b] = uVar5;
  *(int *)(param_1 + 0x1c) = iVar2;
  iVar2 = -0x80000000;
  if (local_res8[0] != 0) {
    iVar2 = local_res8[0];
  }
  *(int *)((longlong)param_1 + 0xe4) = iVar2;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x80000000;
  FUN_143734b10(param_1 + 0x23);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80000000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80000000;
  FUN_143734b10(param_1 + 0x29);
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x80000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x80000000;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x80000000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80000000;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x80000000;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x80000000;
  return param_1;
}



// FUNCTION 1438bcf10 FUN_1438bcf10 body=1195 status=ok
// SIG undefined FUN_1438bcf10(void)

void FUN_1438bcf10(longlong param_1)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1cc)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1c0),0x20,
                  *(uint *)(param_1 + 0x1cc) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1bc)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1b0),0x20,
                  *(uint *)(param_1 + 0x1bc) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1ac)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x1a0),0x20,
                  *(uint *)(param_1 + 0x1ac) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x19c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 400),0x20,*(uint *)(param_1 + 0x19c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x18c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x180),0x20,
                  *(uint *)(param_1 + 0x18c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x80000000;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x160) + -1;
  lVar6 = (longlong)iVar3;
  if (-1 < iVar3) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x158) + 8 + lVar6 * 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x164)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x158),0x10,
                  *(uint *)(param_1 + 0x164) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x80000000;
  FUN_14375d9f0(param_1 + 0x138);
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x130) + -1;
  lVar6 = (longlong)iVar3;
  if (-1 < iVar3) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x128) + 8 + lVar6 * 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x134)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x128),0x10,
                  *(uint *)(param_1 + 0x134) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x80000000;
  FUN_14375d9f0(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xe4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xd8),4,*(uint *)(param_1 + 0xe4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_14370c150();
  }
  FUN_1438bd4e0(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_14370c150();
  }
  iVar3 = *(int *)(param_1 + 0xb0) + -1;
  if (-1 < iVar3) {
    plVar5 = (longlong *)((longlong)iVar3 * 0x80 + *(longlong *)(param_1 + 0xa8));
    plVar4 = plVar5;
    do {
      (**(code **)(*plVar4 + 8))(plVar5,0);
      plVar5 = plVar5 + -0x10;
      plVar4 = plVar4 + -0x10;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xb4)) {
    FUN_143702e10(&PTR_vftable_1468296f8,*(undefined8 *)(param_1 + 0xa8),0x80,
                  *(uint *)(param_1 + 0xb4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_14370c150();
  }
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),4,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 != 0) {
    uVar1 = FUN_143703a50();
    *(undefined4 *)(lVar6 + 0x18) = 0;
    if (-1 < (int)*(uint *)(lVar6 + 0x1c)) {
      FUN_143702e10(uVar1,*(undefined8 *)(lVar6 + 0x10),8,*(uint *)(lVar6 + 0x1c) & 0x3fffffff);
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x1c) = 0x80000000;
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar6,0x100);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438bd3c0 FUN_1438bd3c0 body=157 status=ok
// SIG undefined FUN_1438bd3c0(void)

void FUN_1438bd3c0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1438bd460(param_1 + 0x30);
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  if (-1 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x48;
    do {
      FUN_1438633b0(lVar3);
      lVar3 = lVar3 + -0x48;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),0x48,*(uint *)(param_1 + 0x2c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438bd460 FUN_1438bd460 body=128 status=ok
// SIG undefined FUN_1438bd460(void)

void FUN_1438bd460(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar1,param_1[2],0x10,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar1,*param_1,0xc,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1438bd4e0 FUN_1438bd4e0 body=133 status=ok
// SIG undefined FUN_1438bd4e0(void)

void FUN_1438bd4e0(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_143703a50();
  iVar2 = (int)param_1[1] + -1;
  if (-1 < iVar2) {
    lVar3 = (longlong)iVar2 * 0x38 + *param_1;
    do {
      FUN_143802bb0(lVar3);
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
  return;
}



// FUNCTION 1438bd570 FUN_1438bd570 body=753 status=ok
// SIG undefined FUN_1438bd570(void)

void FUN_1438bd570(undefined8 *param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  short sVar9;
  LPVOID pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  short local_res8 [4];
  uint local_res10;
  longlong local_res18;
  
  uVar13 = (ulonglong)(int)param_2;
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0xb8) + 0x38);
  lVar14 = *(longlong *)(lVar6 + 0xb0 + uVar13 * 0x100);
  local_res18 = lVar14 + (longlong)*(int *)(lVar6 + 0xb8 + uVar13 * 0x100) * 8;
  local_res10 = param_2;
  if (lVar14 != local_res18) {
    do {
      plVar7 = (longlong *)*param_1;
      iVar3 = *(int *)(lVar14 + 4);
      lVar6 = *plVar7;
      lVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0xb8) + 0x48) + (longlong)iVar3 * 0x18);
      iVar4 = *(int *)(lVar8 + 0x1c);
      iVar5 = *(int *)(lVar8 + 0x18);
      if (((int)uVar13 != iVar4) ||
         ((*(uint *)(*(longlong *)(lVar6 + 0xd8) + ((longlong)iVar5 >> 5) * 4) >>
           ((byte)iVar5 & 0x1f) & 1) == 0)) {
        pvVar10 = TlsGetValue(DAT_146b7bf70);
        if (pvVar10 == (LPVOID)0x0) {
          pvVar10 = DAT_146b7bf68;
        }
        puVar11 = (undefined8 *)
                  (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                            (*(longlong **)((longlong)pvVar10 + 0x58),0x50);
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)0x0;
        }
        else {
          lVar6 = *plVar7;
          puVar11[1] = 0;
          *(undefined2 *)(puVar11 + 2) = 0xffff;
          *(undefined2 *)((longlong)puVar11 + 0x12) = 1;
          *puVar11 = hkaiUpdateNavDataTasks::MatchStreamingFacesTask::vftable;
          puVar11[4] = hkaiUpdateNavDataTasks::MatchStreamingFacesTask::vftable;
          puVar11[6] = lVar6;
          if (lVar6 != 0) {
            FUN_14370c030();
          }
          *(int *)(puVar11 + 7) = iVar5;
          *(int *)((longlong)puVar11 + 0x3c) = iVar4;
          *(int *)(puVar11 + 8) = iVar3;
        }
        FUN_143770130(param_1[1],local_res8,puVar11,0x40);
        sVar9 = local_res8[0];
        lVar6 = (longlong)iVar5 * 2;
        sVar2 = *(short *)(*(longlong *)param_1[2] + lVar6);
        if ((sVar2 != -1) && (local_res8[0] != -1)) {
          lVar8 = param_1[1];
          uVar12 = FUN_143703a50();
          if (*(uint *)(lVar8 + 0x1b0) == (*(uint *)(lVar8 + 0x1b4) & 0x3fffffff)) {
            FUN_14370c460(uVar12,(longlong *)(lVar8 + 0x1a8),4);
          }
          psVar1 = (short *)(*(longlong *)(lVar8 + 0x1a8) + (longlong)*(int *)(lVar8 + 0x1b0) * 4);
          *(int *)(lVar8 + 0x1b0) = *(int *)(lVar8 + 0x1b0) + 1;
          *psVar1 = sVar2;
          psVar1[1] = sVar9;
        }
        sVar9 = local_res8[0];
        sVar2 = *(short *)((longlong)iVar4 * 2 + *(longlong *)param_1[2]);
        if ((sVar2 != -1) && (local_res8[0] != -1)) {
          lVar8 = param_1[1];
          uVar12 = FUN_143703a50();
          if (*(uint *)(lVar8 + 0x1b0) == (*(uint *)(lVar8 + 0x1b4) & 0x3fffffff)) {
            FUN_14370c460(uVar12,(longlong *)(lVar8 + 0x1a8),4);
          }
          psVar1 = (short *)(*(longlong *)(lVar8 + 0x1a8) + (longlong)*(int *)(lVar8 + 0x1b0) * 4);
          *(int *)(lVar8 + 0x1b0) = *(int *)(lVar8 + 0x1b0) + 1;
          *psVar1 = sVar2;
          psVar1[1] = sVar9;
        }
        sVar9 = local_res8[0];
        *(short *)(*(longlong *)param_1[2] + lVar6) = local_res8[0];
        *(short *)((longlong)iVar4 * 2 + *(longlong *)param_1[2]) = local_res8[0];
        lVar6 = param_1[1];
        sVar2 = *(short *)param_1[3];
        uVar12 = FUN_143703a50();
        if (*(uint *)(lVar6 + 0x1b0) == (*(uint *)(lVar6 + 0x1b4) & 0x3fffffff)) {
          FUN_14370c460(uVar12,(longlong *)(lVar6 + 0x1a8),4);
        }
        psVar1 = (short *)(*(longlong *)(lVar6 + 0x1a8) + (longlong)*(int *)(lVar6 + 0x1b0) * 4);
        *(int *)(lVar6 + 0x1b0) = *(int *)(lVar6 + 0x1b0) + 1;
        *psVar1 = sVar9;
        psVar1[1] = sVar2;
        if (puVar11 != (undefined8 *)0x0) {
          FUN_14370c150(puVar11);
        }
        uVar13 = (ulonglong)local_res10;
      }
      lVar14 = lVar14 + 8;
    } while (lVar14 != local_res18);
  }
  return;
}



// FUNCTION 1438bd864 FUN_1438bd864 body=9 status=ok
// SIG undefined FUN_1438bd864(void)

void FUN_1438bd864(longlong param_1)

{
  FUN_1438bd920(param_1 + -0x20);
  return;
}



// FUNCTION 1438bd870 FUN_1438bd870 body=9 status=ok
// SIG undefined FUN_1438bd870(void)

void FUN_1438bd870(longlong param_1)

{
  FUN_1438bda60(param_1 + -0x20);
  return;
}



// FUNCTION 1438bd87c FUN_1438bd87c body=9 status=ok
// SIG undefined FUN_1438bd87c(void)

void FUN_1438bd87c(longlong param_1)

{
  FUN_1438bdb20(param_1 + -0x20);
  return;
}



// FUNCTION 1438bd890 FUN_1438bd890 body=139 status=ok
// SIG undefined FUN_1438bd890(void)

longlong FUN_1438bd890(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438bcf10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x1d0;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1d0);
    }
  }
  return param_1;
}



// FUNCTION 1438bd920 FUN_1438bd920 body=162 status=ok
// SIG undefined FUN_1438bd920(void)

longlong FUN_1438bd920(longlong param_1,ulonglong param_2)

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



// FUNCTION 1438bd9d0 FUN_1438bd9d0 body=139 status=ok
// SIG undefined FUN_1438bd9d0(void)

longlong FUN_1438bd9d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438bd3c0();
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



// FUNCTION 1438bda60 FUN_1438bda60 body=186 status=ok
// SIG undefined FUN_1438bda60(void)

longlong FUN_1438bda60(longlong param_1,uint param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FWindowsCriticalSection::~FWindowsCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x328));
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
      sVar2 = 0x350;
      if (*(short *)(param_1 + 0x10) != -1) {
        sVar2 = *(short *)(param_1 + 0x10);
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 1438bdb20 FUN_1438bdb20 body=139 status=ok
// SIG undefined FUN_1438bdb20(void)

longlong FUN_1438bdb20(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438c9a60();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
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
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x330);
    }
  }
  return param_1;
}



// FUNCTION 1438bdbb0 FUN_1438bdbb0 body=306 status=ok
// SIG undefined FUN_1438bdbb0(void)

short * FUN_1438bdbb0(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x40);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *(undefined2 *)(puVar4 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar4 + 0x12) = 1;
    *puVar4 = hkaiUpdateNavDataTasks::CommitUpdatesTask::vftable;
    puVar4[4] = hkaiUpdateNavDataTasks::CommitUpdatesTask::vftable;
    puVar4[6] = param_3;
    if (param_3 != 0) {
      FUN_14370c030(param_3);
    }
  }
  FUN_143770130(param_2,param_1,puVar4,0x40);
  sVar2 = *param_1;
  if ((param_4 != -1) && (sVar2 != -1)) {
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar5,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = param_4;
    psVar1[1] = sVar2;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14370c150(puVar4);
  }
  return param_1;
}



// FUNCTION 1438bdcf0 FUN_1438bdcf0 body=306 status=ok
// SIG undefined FUN_1438bdcf0(void)

short * FUN_1438bdcf0(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x40);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[1] = 0;
    *(undefined2 *)(puVar4 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar4 + 0x12) = 1;
    *puVar4 = hkaiUpdateNavDataTasks::FireEventsTask::vftable;
    puVar4[4] = hkaiUpdateNavDataTasks::FireEventsTask::vftable;
    puVar4[6] = param_3;
    if (param_3 != 0) {
      FUN_14370c030(param_3);
    }
  }
  FUN_143770130(param_2,param_1,puVar4,0x40);
  sVar2 = *param_1;
  if ((param_4 != -1) && (sVar2 != -1)) {
    uVar5 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar5,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = param_4;
    psVar1[1] = sVar2;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_14370c150(puVar4);
  }
  return param_1;
}



// FUNCTION 1438bde30 FUN_1438bde30 body=601 status=ok
// SIG undefined FUN_1438bde30(void)

short * FUN_1438bde30(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  short local_res8 [4];
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TthkaiUpdateNavDataTasks::addPhase1Tasks");
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x1ffff;
      *puVar5 = hkaiUpdateNavDataTasks::ApplyAsyncWorldUpdatesTask::vftable;
      puVar5[4] = hkaiUpdateNavDataTasks::ApplyAsyncWorldUpdatesTask::vftable;
      puVar5[6] = param_3;
      FUN_14370c030(param_3);
    }
    FUN_143770130(param_2,local_res8,puVar5,0x40);
    sVar2 = local_res8[0];
    if ((param_4 != -1) && (local_res8[0] != -1)) {
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
        FUN_14370c460(uVar6,(longlong *)(param_2 + 0x1a8),4);
      }
      psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
      *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
      *psVar1 = param_4;
      psVar1[1] = sVar2;
      sVar2 = local_res8[0];
    }
    param_4 = sVar2;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14370c150(puVar5);
    }
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0x1ffff;
    *puVar5 = hkaiUpdateNavDataTasks::UpdateOverlapManagerTask::vftable;
    puVar5[4] = hkaiUpdateNavDataTasks::UpdateOverlapManagerTask::vftable;
    puVar5[6] = param_3;
    FUN_14370c030(param_3);
  }
  FUN_143770130(param_2,param_1,puVar5,0x40);
  sVar2 = *param_1;
  if ((param_4 != -1) && (sVar2 != -1)) {
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar6,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = param_4;
    psVar1[1] = sVar2;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_14370c150(puVar5);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438be090 FUN_1438be090 body=3439 status=ok
// SIG undefined FUN_1438be090(void)

short * FUN_1438be090(short *param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  longlong *plVar1;
  short *psVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  LPVOID pvVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  uint *puVar23;
  longlong *plVar24;
  int iVar25;
  undefined2 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  bool bVar31;
  longlong local_res18;
  undefined2 local_res20;
  short local_c8 [2];
  short local_c4 [2];
  short local_c0 [2];
  short local_bc [2];
  short local_b8 [2];
  short local_b4 [2];
  short local_b0 [2];
  short local_ac [2];
  undefined2 local_a8 [4];
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  uint local_84;
  undefined8 *local_80;
  longlong local_78;
  LPVOID local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  short *local_50;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_70 = TlsGetValue(DAT_146b8198c);
  if (local_70 != (LPVOID)0x0) {
    FUN_14370d5c0(local_70,"TthkaiUpdateNavDataTasks::addPhase2Tasks");
  }
  lVar22 = local_res18;
  plVar1 = (longlong *)(local_res18 + 0xa8);
  uVar9 = *(uint *)(local_res18 + 0xb4) & 0x3fffffff;
  iVar20 = *(int *)(*(longlong *)(local_res18 + 0xd0) + 0x28);
  if ((int)uVar9 < iVar20) {
    iVar6 = uVar9 * 2;
    iVar25 = iVar20;
    if (iVar20 < iVar6) {
      iVar25 = iVar6;
    }
    FUN_14370c310(&PTR_vftable_1468296f8,plVar1,iVar25,0x80);
  }
  lVar10 = (longlong)iVar20 * 0x80 + *plVar1;
  iVar25 = (*(int *)(lVar22 + 0xb0) - iVar20) + -1;
  if (-1 < iVar25) {
    plVar24 = (longlong *)((longlong)iVar25 * 0x80 + lVar10);
    lVar10 = (longlong)iVar25 * 0x80 + lVar10;
    do {
      (**(code **)(*plVar24 + 8))(lVar10,0);
      lVar10 = lVar10 + -0x80;
      plVar24 = plVar24 + -0x10;
      iVar25 = iVar25 + -1;
    } while (-1 < iVar25);
  }
  uVar19 = 0;
  iVar25 = iVar20 - *(int *)(lVar22 + 0xb0);
  lVar10 = (longlong)iVar25;
  if (0 < iVar25) {
    puVar11 = (undefined4 *)((longlong)*(int *)(lVar22 + 0xb0) * 0x80 + *plVar1 + 0x4c);
    do {
      if ((undefined8 *)(puVar11 + -0x13) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar11 + -0x11) = 0;
        puVar11[-0xf] = 0x1ffff;
        *(undefined ***)(puVar11 + -0x13) = hkaiUpdateNavDataTasks::SectionContext::vftable;
        *(undefined8 *)(puVar11 + -0xb) = 0;
        puVar11[-9] = 0;
        puVar11[-8] = 0x80000000;
        *(undefined8 *)(puVar11 + -7) = 0;
        puVar11[-5] = 0;
        puVar11[-4] = 0x80000000;
        *(undefined8 *)(puVar11 + -3) = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
      }
      puVar11 = puVar11 + 0x20;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  *(int *)(lVar22 + 0xb0) = iVar20;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x80000000;
  uVar9 = *(uint *)(*(longlong *)(local_res18 + 0xd0) + 0x28);
  uVar21 = 0;
  if (0 < (int)uVar9) {
    uVar28 = (ulonglong)uVar9;
    if ((int)uVar9 < 0) {
      uVar28 = uVar19;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_90,uVar28,2);
    uVar21 = local_88;
  }
  puVar26 = (undefined2 *)(local_90 + (longlong)(int)uVar21 * 2);
  lVar22 = (longlong)(int)(uVar9 - uVar21);
  if (0 < (int)(uVar9 - uVar21)) {
    for (; lVar22 != 0; lVar22 = lVar22 + -1) {
      *puVar26 = 0xffff;
      puVar26 = puVar26 + 1;
    }
  }
  local_88 = uVar9;
  FUN_1437f14b0(local_res18 + 0xd8,0,*(undefined4 *)(*(longlong *)(local_res18 + 0xd0) + 0x28),0);
  FUN_1437702e0(param_2,local_a8,0,0x40);
  FUN_1437702e0(param_2,local_c0,0,0x40);
  thunk_FUN_143719c70(0x6c9b25e5);
  if (0 < *(int *)(*(longlong *)(local_res18 + 0xd0) + 0x28)) {
    uVar9 = 1;
    uVar28 = uVar19;
    do {
      iVar20 = (int)uVar19;
      local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,iVar20);
      FUN_1438bee00(&local_98,param_2,local_res18,&local_a0,local_res20,local_a8[0],local_c8);
      sVar3 = local_c0[0];
      if ((char)local_c8[0] != '\0') {
        puVar23 = (uint *)(*(longlong *)(local_res18 + 0xd8) + ((longlong)iVar20 >> 5) * 4);
        *puVar23 = *puVar23 | uVar9;
      }
      sVar7 = (short)local_98;
      *(short *)(uVar28 + local_90) = (short)local_98;
      if (((short)local_98 != -1) && (local_c0[0] != -1)) {
        uVar12 = FUN_143703a50();
        if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
          FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
        }
        psVar2 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4)
        ;
        *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
        *psVar2 = sVar7;
        psVar2[1] = sVar3;
      }
      thunk_FUN_143719c70(0x99a80dee);
      uVar19 = (ulonglong)(iVar20 + 1U);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      uVar28 = uVar28 + 2;
    } while ((int)(iVar20 + 1U) < *(int *)(*(longlong *)(local_res18 + 0xd0) + 0x28));
  }
  uVar19 = 0;
  local_68 = &local_res18;
  local_58 = &local_90;
  local_50 = local_c0;
  local_60 = param_2;
  if (*(int *)(local_res18 + 0xe0) != 0) {
    lVar22 = *(longlong *)(local_res18 + 0xd8);
    iVar20 = *(int *)(local_res18 + 0xe8) + -1;
    local_78 = (longlong)(iVar20 >> 5);
    local_98 = (undefined8 *)(CONCAT44(local_98._4_4_,~(-1 << ((byte)iVar20 & 0x1f)) * 2) | 1);
    uVar9 = 0xffffffff;
    uVar21 = (iVar20 >> 5) - 1;
    local_80 = (undefined8 *)(local_78 - 1);
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,uVar21);
    uVar28 = uVar19;
    uVar27 = (ulonglong)local_80;
    uVar29 = uVar19;
    uVar30 = ~(iVar20 >> 0x1f) & 1;
    do {
      if ((longlong)uVar19 < local_78) {
        iVar20 = ((int)uVar28 + (int)uVar29) * 0x20;
        puVar23 = (uint *)(lVar22 + uVar19 * 4);
        lVar10 = local_78 - uVar19;
        do {
          uVar21 = *puVar23 & uVar9;
          while (uVar21 != 0) {
            uVar21 = (-uVar21 & uVar21) - 1;
            uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
            uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
            uVar21 = ((uVar21 >> 4) + uVar21 & 0xf0f0f0f) * 0x1010101;
            uVar9 = uVar9 & -2 << ((byte)(uVar21 >> 0x18) & 0x1f);
            FUN_1438bd570(&local_68,(uVar21 >> 0x18) + iVar20);
            uVar21 = *puVar23 & uVar9;
          }
          iVar20 = iVar20 + 0x20;
          puVar23 = puVar23 + 1;
          uVar9 = 0xffffffff;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        uVar27 = (ulonglong)local_80;
        uVar21 = (uint)local_a0;
      }
      uVar19 = uVar27;
      uVar9 = uVar9 & (uint)local_98;
      uVar29 = (ulonglong)((int)uVar29 + 1);
      lVar22 = lVar22 + 4;
      uVar28 = (ulonglong)uVar21;
      bVar31 = uVar30 != 0;
      uVar27 = uVar19;
      uVar30 = uVar30 - 1;
    } while (bVar31);
  }
  thunk_FUN_143719c70(0xe776d91);
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  puVar14 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar13 + 0x58),0x40);
  if (puVar14 == (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14[1] = 0;
    *(undefined4 *)(puVar14 + 2) = 0x1ffff;
    *puVar14 = hkaiUpdateNavDataTasks::CompactTask::vftable;
    puVar14[4] = hkaiUpdateNavDataTasks::CompactTask::vftable;
    puVar14[6] = local_res18;
    if (local_res18 != 0) {
      FUN_14370c030();
    }
  }
  FUN_143770130(param_2,local_bc,puVar14,0x40);
  sVar3 = local_bc[0];
  plVar1 = (longlong *)(param_2 + 0x1a8);
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = local_c0[0];
  psVar2[1] = sVar3;
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  puVar15 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar13 + 0x58),0x40);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    local_a0 = (undefined8 *)0x0;
  }
  else {
    puVar15[1] = 0;
    *(undefined4 *)(puVar15 + 2) = 0x1ffff;
    *puVar15 = hkaiUpdateNavDataTasks::GetAndClearModifiedFacesTask::vftable;
    puVar15[4] = hkaiUpdateNavDataTasks::GetAndClearModifiedFacesTask::vftable;
    puVar15[6] = local_res18;
    local_a0 = puVar15;
    if (local_res18 != 0) {
      FUN_14370c030();
    }
  }
  FUN_143770130(param_2,local_c4,puVar15,0x40);
  sVar7 = local_bc[0];
  sVar3 = local_c4[0];
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = sVar7;
  psVar2[1] = sVar3;
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  puVar16 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar13 + 0x58),0x40);
  if (puVar16 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    puVar16[1] = 0;
    *(undefined4 *)(puVar16 + 2) = 0x1ffff;
    *puVar16 = hkaiUpdateNavDataTasks::GetAndClearModifiedAabbsTask::vftable;
    puVar16[4] = hkaiUpdateNavDataTasks::GetAndClearModifiedAabbsTask::vftable;
    puVar16[6] = local_res18;
    if (local_res18 != 0) {
      FUN_14370c030();
    }
  }
  FUN_143770130(param_2,local_b4,puVar16,0x40);
  sVar3 = local_b4[0];
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = local_bc[0];
  psVar2[1] = sVar3;
  FUN_1437702e0(param_2,param_1,0);
  sVar7 = local_c4[0];
  sVar3 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  sVar8 = local_b4[0];
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = sVar7;
  psVar2[1] = sVar3;
  sVar3 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = sVar8;
  psVar2[1] = sVar3;
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar13 + 0x58),0x330);
  lVar22 = local_res18;
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined4 *)(local_res18 + 0x110);
    uVar5 = *(undefined4 *)(local_res18 + 0x18);
    puVar17[1] = 0;
    *(undefined4 *)(puVar17 + 2) = 0x1ffff;
    *puVar17 = hkBatchTaskBase<hkReferencedTask,hkaiUpdateNavDataTasks::UpdateStalenessTask>::
               vftable;
    puVar17[4] = hkBatchTaskBase<hkReferencedTask,hkaiUpdateNavDataTasks::UpdateStalenessTask>::
                 vftable;
    puVar17[0xf] = puVar17 + 0x11;
    *(undefined4 *)(puVar17 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x84) = 0x80000005;
    puVar17[0x39] = puVar17 + 0x3b;
    *(undefined4 *)(puVar17 + 0x3a) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x1d4) = 0x80000005;
    *(undefined4 *)(puVar17 + 99) = uVar5;
    local_80 = puVar17;
    FUN_143df9d10(puVar17 + 6,uVar5,uVar4);
    *puVar17 = hkaiUpdateNavDataTasks::UpdateStalenessTask::vftable;
    puVar17[4] = hkaiUpdateNavDataTasks::UpdateStalenessTask::vftable;
    puVar17[100] = lVar22;
    FUN_14370c030(lVar22);
  }
  FUN_143770200(param_2,local_b0,puVar17,*(undefined4 *)(local_res18 + 0x18),1,0x40);
  sVar7 = local_b0[0];
  sVar3 = local_c4[0];
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = sVar3;
  psVar2[1] = sVar7;
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar13 + 0x58),0x350);
  lVar22 = local_res18;
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
    local_98 = (undefined8 *)0x0;
  }
  else {
    uVar4 = *(undefined4 *)(local_res18 + 0x140);
    uVar5 = *(undefined4 *)(local_res18 + 0x18);
    puVar17[1] = 0;
    *(undefined4 *)(puVar17 + 2) = 0x1ffff;
    *puVar17 = hkBatchTaskBase<hkReferencedTask,hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask>::
               vftable;
    puVar17[4] = hkBatchTaskBase<hkReferencedTask,hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask>
                 ::vftable;
    puVar17[0xf] = puVar17 + 0x11;
    *(undefined4 *)(puVar17 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x84) = 0x80000005;
    puVar17[0x39] = puVar17 + 0x3b;
    *(undefined4 *)(puVar17 + 0x3a) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x1d4) = 0x80000005;
    *(undefined4 *)(puVar17 + 99) = uVar5;
    local_98 = puVar17;
    FUN_143df9d10(puVar17 + 6,uVar5,uVar4);
    *puVar17 = hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask::vftable;
    puVar17[4] = hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask::vftable;
    puVar17[100] = lVar22;
    FUN_14370c030(lVar22);
    FUN_14370d870(puVar17 + 0x65,0);
  }
  FUN_143770200(param_2,local_ac,puVar17,*(undefined4 *)(local_res18 + 0x18),1,0x40);
  sVar7 = local_ac[0];
  sVar3 = local_c4[0];
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = sVar3;
  psVar2[1] = sVar7;
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar13 + 0x58),0x40);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    puVar17[1] = 0;
    *(undefined4 *)(puVar17 + 2) = 0x1ffff;
    *puVar17 = hkaiUpdateNavDataTasks::AddStalenessPathRequestsToManagerTask::vftable;
    puVar17[4] = hkaiUpdateNavDataTasks::AddStalenessPathRequestsToManagerTask::vftable;
    puVar17[6] = local_res18;
    if (local_res18 != 0) {
      FUN_14370c030();
    }
  }
  FUN_143770130(param_2,local_b8,puVar17,0x40);
  sVar3 = local_b8[0];
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  sVar7 = local_b8[0];
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = local_b0[0];
  psVar2[1] = sVar3;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = local_ac[0];
  psVar2[1] = sVar7;
  sVar3 = *param_1;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar2 = local_b8[0];
  psVar2[1] = sVar3;
  if (*(longlong *)(local_res18 + 0x170) != *(longlong *)(local_res18 + 0x178)) {
    pvVar13 = TlsGetValue(DAT_146b7bf70);
    if (pvVar13 == (LPVOID)0x0) {
      pvVar13 = DAT_146b7bf68;
    }
    puVar18 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)pvVar13 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar13 + 0x58),0x40);
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      puVar18[1] = 0;
      *puVar18 = hkaiUpdateNavDataTasks::RepathBehaviorsTask::vftable;
      puVar18[4] = hkaiUpdateNavDataTasks::RepathBehaviorsTask::vftable;
      *(undefined4 *)(puVar18 + 2) = 0x1ffff;
      puVar18[6] = local_res18;
    }
    FUN_143770130(param_2,local_c8,puVar18,0x40);
    sVar3 = local_c8[0];
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,plVar1,4);
    }
    sVar7 = local_c8[0];
    psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = local_c4[0];
    psVar2[1] = sVar3;
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,plVar1,4);
    }
    psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = local_b4[0];
    psVar2[1] = sVar7;
    sVar3 = *param_1;
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,plVar1,4);
    }
    psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = local_c8[0];
    psVar2[1] = sVar3;
    puVar15 = local_a0;
    if (puVar18 != (undefined8 *)0x0) {
      FUN_14370c150(puVar18);
      puVar15 = local_a0;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    FUN_14370c150(puVar17);
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_14370c150();
  }
  if (local_80 != (undefined8 *)0x0) {
    FUN_14370c150();
  }
  if (puVar16 != (undefined8 *)0x0) {
    FUN_14370c150(puVar16);
  }
  if (puVar15 != (undefined8 *)0x0) {
    FUN_14370c150(puVar15);
  }
  if (puVar14 != (undefined8 *)0x0) {
    FUN_14370c150(puVar14);
  }
  local_88 = 0;
  if (-1 < (int)local_84) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_90,2,local_84 & 0x3fffffff);
  }
  local_90 = 0;
  local_84 = 0x80000000;
  if (local_70 != (LPVOID)0x0) {
    FUN_14370d750(local_70,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438bee00 FUN_1438bee00 body=2799 status=ok
// SIG undefined FUN_1438bee00(void)

short * FUN_1438bee00(short *param_1,longlong param_2,longlong param_3,int *param_4,short param_5,
                     undefined2 param_6,char *param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined2 uVar7;
  char cVar8;
  undefined4 *puVar9;
  LPVOID pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  short sVar18;
  int iVar19;
  undefined4 *puVar20;
  int *piVar21;
  int *piVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  short local_res18 [4];
  int *local_res20;
  short local_78 [2];
  short local_74 [2];
  short local_70 [2];
  undefined2 local_6c [2];
  undefined2 local_68 [2];
  undefined4 local_64;
  LPVOID local_60;
  undefined8 *local_58;
  
  local_res20 = param_4;
  local_60 = TlsGetValue(DAT_146b8198c);
  if (local_60 != (LPVOID)0x0) {
    FUN_14370d5c0(local_60,"TthkaiUpdateNavDataTasks::addPhase2TasksForSection");
  }
  lVar24 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_3 + 0xd0) + 0x20) + (longlong)*param_4 * 8);
  lVar26 = (longlong)*param_4 * 0x80 + *(longlong *)(param_3 + 0xa8);
  *(longlong *)(lVar26 + 0x18) = lVar24;
  if (lVar24 == 0) {
    *param_7 = '\0';
    *param_1 = param_5;
    if (local_60 != (LPVOID)0x0) {
      FUN_14370d750(local_60,&DAT_145b8eda0);
    }
    return param_1;
  }
  if (*(int *)(lVar24 + 0x100) == 0) {
    lVar15 = *(longlong *)(param_3 + 0xc0);
    uVar12 = *(undefined8 *)(lVar24 + 0xf8);
    lVar23 = (longlong)*param_4 * 0x38;
    *(undefined8 *)(lVar24 + 0xf8) = *(undefined8 *)(lVar23 + 0x28 + lVar15);
    *(undefined8 *)(lVar23 + 0x28 + lVar15) = uVar12;
    uVar2 = *(undefined4 *)(lVar24 + 0x100);
    *(undefined4 *)(lVar24 + 0x100) = *(undefined4 *)(lVar23 + 0x30 + lVar15);
    *(undefined4 *)(lVar23 + 0x30 + lVar15) = uVar2;
    uVar2 = *(undefined4 *)(lVar24 + 0x104);
    *(undefined4 *)(lVar24 + 0x104) = *(undefined4 *)(lVar23 + 0x34 + lVar15);
    *(undefined4 *)(lVar23 + 0x34 + lVar15) = uVar2;
  }
  else {
    lVar15 = (longlong)*param_4 * 0x38;
    iVar19 = *(int *)(lVar15 + 0x30 + *(longlong *)(param_3 + 0xc0));
    lVar23 = (longlong)iVar19;
    lVar15 = *(longlong *)(lVar15 + 0x28 + *(longlong *)(param_3 + 0xc0));
    uVar12 = FUN_143703a50();
    iVar25 = *(int *)(lVar24 + 0x100) + iVar19;
    uVar14 = *(uint *)(lVar24 + 0x104) & 0x3fffffff;
    if (((int)uVar14 < iVar25) && ((int)uVar14 < iVar25)) {
      iVar3 = iVar25;
      if (iVar25 < (int)(uVar14 * 2)) {
        iVar3 = uVar14 * 2;
      }
      FUN_14370c310(uVar12,(longlong *)(lVar24 + 0xf8),iVar3,0x20);
    }
    puVar9 = (undefined4 *)
             ((longlong)*(int *)(lVar24 + 0x100) * 0x20 + *(longlong *)(lVar24 + 0xf8));
    if (0 < iVar19) {
      lVar15 = lVar15 - (longlong)puVar9;
      do {
        if (puVar9 != (undefined4 *)0x0) {
          puVar20 = (undefined4 *)(lVar15 + (longlong)puVar9);
          uVar2 = puVar20[1];
          uVar4 = puVar20[2];
          uVar5 = puVar20[3];
          *puVar9 = *puVar20;
          puVar9[1] = uVar2;
          puVar9[2] = uVar4;
          puVar9[3] = uVar5;
          puVar11 = (undefined8 *)(lVar15 + 0x10 + (longlong)puVar9);
          uVar12 = puVar11[1];
          *(undefined8 *)(puVar9 + 4) = *puVar11;
          *(undefined8 *)(puVar9 + 6) = uVar12;
        }
        puVar9 = puVar9 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    *(int *)(lVar24 + 0x100) = iVar25;
    lVar15 = *(longlong *)(param_3 + 0xc0);
    lVar23 = (longlong)*local_res20 * 0x38;
    uVar12 = FUN_143703a50();
    uVar14 = *(uint *)(lVar23 + 0x34 + lVar15);
    *(undefined4 *)(lVar23 + 0x30 + lVar15) = 0;
    if (-1 < (int)uVar14) {
      FUN_143702e10(uVar12,*(undefined8 *)(lVar23 + 0x28 + lVar15),0x20,uVar14 & 0x3fffffff);
    }
    *(undefined8 *)(lVar23 + 0x28 + lVar15) = 0;
    *(undefined4 *)(lVar23 + 0x34 + lVar15) = 0x80000000;
    param_4 = local_res20;
  }
  cVar8 = '\x01';
  lVar15 = (longlong)*param_4 * 0x38 + *(longlong *)(param_3 + 0xc0);
  if ((((*(int *)(lVar15 + 0x10) == 0) && (*(int *)(lVar15 + 0x20) == 0)) &&
      (*(int *)(lVar15 + 0x30) == 0)) &&
     ((*(int *)(lVar24 + 0xa0) == 0 && (*(int *)(lVar24 + 0xb0) == 0)))) {
    cVar8 = '\0';
  }
  *param_7 = cVar8;
  if (*(char *)(*(longlong *)(param_3 + 0xd0) + 0x98) == '\0') {
    pvVar10 = TlsGetValue(DAT_146b7bf70);
    if (pvVar10 == (LPVOID)0x0) {
      pvVar10 = DAT_146b7bf68;
    }
    puVar11 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar10 + 0x58),0x40);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      iVar19 = *local_res20;
      puVar11[1] = 0;
      *puVar11 = hkaiUpdateNavDataTasks::ResetClearanceAllTask::vftable;
      puVar11[4] = hkaiUpdateNavDataTasks::ResetClearanceAllTask::vftable;
      *(undefined4 *)(puVar11 + 2) = 0x1ffff;
      puVar11[6] = param_3;
      FUN_14370c030(param_3);
      *(int *)(puVar11 + 7) = iVar19;
    }
    FUN_143770130(param_2,local_res18,puVar11,0x40);
    sVar18 = local_res18[0];
    if ((param_5 != -1) && (local_res18[0] != -1)) {
      uVar12 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
        FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
      }
      iVar19 = *(int *)(param_2 + 0x1b0);
      lVar24 = *(longlong *)(param_2 + 0x1a8);
      *(int *)(param_2 + 0x1b0) = iVar19 + 1;
      *(short *)(lVar24 + (longlong)iVar19 * 4) = param_5;
      *(short *)(lVar24 + 2 + (longlong)iVar19 * 4) = sVar18;
      sVar18 = local_res18[0];
    }
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
    }
    iVar19 = *(int *)(param_2 + 0x1b0);
    lVar24 = *(longlong *)(param_2 + 0x1a8);
    *(int *)(param_2 + 0x1b0) = iVar19 + 1;
    *(short *)(lVar24 + (longlong)iVar19 * 4) = sVar18;
    *(undefined2 *)(lVar24 + 2 + (longlong)iVar19 * 4) = param_6;
    param_4 = local_res20;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_14370c150(puVar11);
      param_4 = local_res20;
    }
  }
  if (*param_7 == '\0') {
    *param_1 = param_5;
    goto LAB_1438bf8c3;
  }
  cVar8 = *(char *)(*(longlong *)(param_3 + 0xd0) + 0x98);
  if ((byte)(cVar8 - 1U) < 2) {
    if (cVar8 == '\x01') {
      pvVar10 = TlsGetValue(DAT_146b7bf70);
      if (pvVar10 == (LPVOID)0x0) {
        pvVar10 = DAT_146b7bf68;
      }
      puVar11 = (undefined8 *)
                (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar10 + 0x58),0x40);
      if (puVar11 == (undefined8 *)0x0) goto LAB_1438bf275;
      iVar19 = *param_4;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0x1ffff;
      *puVar11 = hkaiUpdateNavDataTasks::ResetClearanceMediatorTask::vftable;
      ppuVar13 = hkaiUpdateNavDataTasks::ResetClearanceMediatorTask::vftable;
LAB_1438bf260:
      puVar11[4] = ppuVar13;
      puVar11[6] = param_3;
      FUN_14370c030(param_3);
      *(int *)(puVar11 + 7) = iVar19;
    }
    else {
      pvVar10 = TlsGetValue(DAT_146b7bf70);
      if (pvVar10 == (LPVOID)0x0) {
        pvVar10 = DAT_146b7bf68;
      }
      puVar11 = (undefined8 *)
                (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                          (*(longlong **)((longlong)pvVar10 + 0x58),0x40);
      if (puVar11 != (undefined8 *)0x0) {
        iVar19 = *param_4;
        puVar11[1] = 0;
        *(undefined4 *)(puVar11 + 2) = 0x1ffff;
        *puVar11 = hkaiUpdateNavDataTasks::ResetClearanceFloodFillTask::vftable;
        ppuVar13 = hkaiUpdateNavDataTasks::ResetClearanceFloodFillTask::vftable;
        goto LAB_1438bf260;
      }
LAB_1438bf275:
      puVar11 = (undefined8 *)0x0;
    }
    FUN_143770130(param_2,local_78,puVar11,0x40);
    sVar18 = local_78[0];
    if ((param_5 != -1) && (local_78[0] != -1)) {
      uVar12 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
        FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
      }
      iVar19 = *(int *)(param_2 + 0x1b0);
      lVar24 = *(longlong *)(param_2 + 0x1a8);
      *(int *)(param_2 + 0x1b0) = iVar19 + 1;
      *(short *)(lVar24 + (longlong)iVar19 * 4) = param_5;
      *(short *)(lVar24 + 2 + (longlong)iVar19 * 4) = sVar18;
      sVar18 = local_78[0];
    }
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
    }
    iVar19 = *(int *)(param_2 + 0x1b0);
    lVar24 = *(longlong *)(param_2 + 0x1a8);
    *(int *)(param_2 + 0x1b0) = iVar19 + 1;
    *(short *)(lVar24 + (longlong)iVar19 * 4) = sVar18;
    *(undefined2 *)(lVar24 + 2 + (longlong)iVar19 * 4) = param_6;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_14370c150(puVar11);
    }
  }
  piVar21 = local_res20;
  piVar22 = (int *)((longlong)*local_res20 * 0x38 + *(longlong *)(param_3 + 0xc0));
  FUN_1437702e0(param_2,local_6c,0,0x40);
  iVar19 = piVar22[4];
  if (((iVar19 != 0) || (piVar22[8] != 0)) || (piVar22[0xc] != 0)) {
    uVar12 = FUN_143703a50();
    uVar14 = *(uint *)(lVar26 + 0x2c) & 0x3fffffff;
    if ((int)uVar14 < iVar19) {
      iVar3 = uVar14 * 2;
      iVar25 = iVar19;
      if (iVar19 < iVar3) {
        iVar25 = iVar3;
      }
      FUN_14370c310(uVar12,lVar26 + 0x20,iVar25,0x48);
    }
    pvVar10 = TlsGetValue(DAT_146b7bf70);
    if (pvVar10 == (LPVOID)0x0) {
      pvVar10 = DAT_146b7bf68;
    }
    puVar11 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar10 + 0x58),0x330);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
      local_58 = (undefined8 *)0x0;
    }
    else {
      local_58 = puVar11;
      FUN_1438bcc10(puVar11,*(undefined4 *)(param_3 + 0x18),iVar19);
      *puVar11 = hkaiNavMeshCutFaceTask::vftable;
      puVar11[4] = hkaiNavMeshCutFaceTask::vftable;
      puVar11[100] = 0;
      *(undefined4 *)(puVar11 + 0x65) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x32c) = 0x80000000;
    }
    plVar1 = puVar11 + 100;
    uVar12 = FUN_143703a50();
    uVar14 = *(uint *)((longlong)puVar11 + 0x32c) & 0x3fffffff;
    if ((int)uVar14 < iVar19) {
      iVar25 = uVar14 * 2;
      if (iVar19 < iVar25) {
        iVar19 = iVar25;
      }
      FUN_14370c310(uVar12,plVar1,iVar19,0x60);
    }
    lVar24 = *(longlong *)
              ((longlong)*piVar22 * 0x100 + *(longlong *)(*(longlong *)(param_3 + 0xb8) + 0x38));
    if (lVar24 == 0) {
      uVar12 = 0;
    }
    else if (*(char *)(lVar24 + 0x28) == '\x01') {
      uVar12 = *(undefined8 *)(lVar24 + 0x18);
    }
    else {
      uVar12 = FUN_142fbda20();
    }
    puVar20 = *(undefined4 **)(piVar22 + 2);
    puVar9 = puVar20 + piVar22[4];
    puVar17 = puVar11;
    if (puVar20 != puVar9) {
      do {
        local_64 = *puVar20;
        lVar24 = (longlong)*(int *)(puVar11 + 0x65) * 0x60;
        *(int *)(puVar11 + 0x65) = *(int *)(puVar11 + 0x65) + 1;
        puVar17 = (undefined8 *)(*plVar1 + lVar24);
        if (puVar17 != (undefined8 *)0x0) {
          puVar17[2] = 0;
          *(undefined4 *)(puVar17 + 3) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffff80000000;
          puVar17[6] = 0;
          puVar17[7] = 0;
          *puVar17 = 0;
          *(undefined4 *)(puVar17 + 1) = 0xffffffff;
          puVar17[8] = 0;
          *(undefined4 *)(puVar17 + 9) = 0;
          *(undefined1 *)((longlong)puVar17 + 0x4c) = 0;
          puVar17[10] = 0;
          puVar17[0xb] = 0;
        }
        iVar19 = *(int *)(lVar26 + 0x28);
        lVar24 = *plVar1 + lVar24;
        *(int *)(lVar26 + 0x28) = iVar19 + 1;
        lVar15 = *(longlong *)(lVar26 + 0x20) + (longlong)iVar19 * 0x48;
        if (lVar15 != 0) {
          *(undefined1 *)(lVar15 + 4) = 0;
          *(undefined8 *)(lVar15 + 8) = 0;
          *(undefined4 *)(lVar15 + 0x10) = 0;
          *(undefined4 *)(lVar15 + 0x14) = 0x80000000;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          *(undefined4 *)(lVar15 + 0x20) = 0;
          *(undefined4 *)(lVar15 + 0x24) = 0x80000000;
          *(undefined8 *)(lVar15 + 0x28) = 0;
          *(undefined4 *)(lVar15 + 0x30) = 0;
          *(undefined4 *)(lVar15 + 0x34) = 0x80000000;
          *(undefined8 *)(lVar15 + 0x38) = 0;
          *(undefined4 *)(lVar15 + 0x40) = 0;
          *(undefined4 *)(lVar15 + 0x44) = 0x80000000;
        }
        lVar15 = *(longlong *)(lVar26 + 0x20);
        *(longlong *)(lVar24 + 0x58) = param_3 + 0x60;
        *(longlong *)(lVar24 + 0x50) = lVar15 + (longlong)iVar19 * 0x48;
        plVar16 = (longlong *)(*(longlong *)(param_3 + 0xa0) + 0x18);
        (**(code **)(*plVar16 + 0x18))(plVar16,uVar12,&local_64);
        thunk_FUN_143719c70(0x9e8c9a8e);
        puVar20 = puVar20 + 1;
        puVar17 = local_58;
      } while (puVar20 != puVar9);
    }
    FUN_143770200(param_2,local_74,puVar17,*(undefined4 *)(param_3 + 0x18),1,0x40);
    sVar18 = local_74[0];
    if ((param_5 != -1) && (local_74[0] != -1)) {
      uVar12 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
        FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
      }
      iVar19 = *(int *)(param_2 + 0x1b0);
      lVar24 = *(longlong *)(param_2 + 0x1a8);
      *(int *)(param_2 + 0x1b0) = iVar19 + 1;
      *(short *)(lVar24 + (longlong)iVar19 * 4) = param_5;
      *(short *)(lVar24 + 2 + (longlong)iVar19 * 4) = sVar18;
      sVar18 = local_74[0];
    }
    uVar7 = local_6c[0];
    uVar12 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar12,(longlong *)(param_2 + 0x1a8),4);
    }
    iVar19 = *(int *)(param_2 + 0x1b0);
    lVar24 = *(longlong *)(param_2 + 0x1a8);
    *(int *)(param_2 + 0x1b0) = iVar19 + 1;
    *(short *)(lVar24 + (longlong)iVar19 * 4) = sVar18;
    *(undefined2 *)(lVar24 + 2 + (longlong)iVar19 * 4) = uVar7;
    piVar21 = local_res20;
    if (puVar17 != (undefined8 *)0x0) {
      FUN_14370c150(puVar17);
      piVar21 = local_res20;
    }
  }
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar11 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x40);
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    iVar19 = *piVar21;
    puVar11[1] = 0;
    *(undefined2 *)(puVar11 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar11 + 0x12) = 1;
    *puVar11 = hkaiUpdateNavDataTasks::UpdateCutConfigTask::vftable;
    puVar11[4] = hkaiUpdateNavDataTasks::UpdateCutConfigTask::vftable;
    puVar11[6] = param_3;
    FUN_14370c030(param_3);
    *(int *)(puVar11 + 7) = iVar19;
  }
  FUN_143770130(param_2,local_68,puVar11,0x40);
  uVar7 = local_68[0];
  plVar1 = (longlong *)(param_2 + 0x1a8);
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  iVar19 = *(int *)(param_2 + 0x1b0);
  lVar24 = *plVar1;
  *(int *)(param_2 + 0x1b0) = iVar19 + 1;
  *(undefined2 *)(lVar24 + (longlong)iVar19 * 4) = local_6c[0];
  *(undefined2 *)(lVar24 + 2 + (longlong)iVar19 * 4) = uVar7;
  pvVar10 = TlsGetValue(DAT_146b7bf70);
  if (pvVar10 == (LPVOID)0x0) {
    pvVar10 = DAT_146b7bf68;
  }
  puVar17 = (undefined8 *)
            (**(code **)(**(longlong **)((longlong)pvVar10 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar10 + 0x58),0x40);
  if (puVar17 == (undefined8 *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    iVar19 = *local_res20;
    puVar17[1] = 0;
    *puVar17 = hkaiUpdateNavDataTasks::ApplyCutsTask::vftable;
    puVar17[4] = hkaiUpdateNavDataTasks::ApplyCutsTask::vftable;
    *(undefined4 *)(puVar17 + 2) = 0x1ffff;
    puVar17[6] = param_3;
    FUN_14370c030(param_3);
    *(int *)(puVar17 + 7) = iVar19;
  }
  FUN_143770130(param_2,local_70,puVar17,0x40);
  sVar18 = local_70[0];
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  sVar6 = local_70[0];
  iVar19 = *(int *)(param_2 + 0x1b0);
  lVar24 = *plVar1;
  *(int *)(param_2 + 0x1b0) = iVar19 + 1;
  *(undefined2 *)(lVar24 + (longlong)iVar19 * 4) = local_68[0];
  *(short *)(lVar24 + 2 + (longlong)iVar19 * 4) = sVar18;
  uVar12 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar12,plVar1,4);
  }
  iVar19 = *(int *)(param_2 + 0x1b0);
  lVar24 = *plVar1;
  *(int *)(param_2 + 0x1b0) = iVar19 + 1;
  *(undefined2 *)(lVar24 + (longlong)iVar19 * 4) = param_6;
  *(short *)(lVar24 + 2 + (longlong)iVar19 * 4) = sVar6;
  *param_1 = local_70[0];
  if (puVar17 != (undefined8 *)0x0) {
    FUN_14370c150(puVar17);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_14370c150(puVar11);
  }
LAB_1438bf8c3:
  if (local_60 != (LPVOID)0x0) {
    FUN_14370d750(local_60,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438bf8f0 FUN_1438bf8f0 body=76 status=ok
// SIG undefined FUN_1438bf8f0(void)

void FUN_1438bf8f0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [8];
  undefined4 *local_28;
  undefined *local_20;
  undefined4 **local_18;
  undefined8 **local_10;
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  local_28 = local_res8;
  local_20 = &DAT_1467f0140;
  local_18 = &local_28;
  local_10 = &local_18;
  ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(param_2,&DAT_145b752b0,&local_18);
  return;
}



// FUNCTION 1438bf940 FUN_1438bf940 body=93 status=ok
// SIG undefined FUN_1438bf940(void)

void FUN_1438bf940(longlong param_1,undefined8 param_2)

{
  longlong *local_48;
  undefined1 *local_40;
  longlong local_38;
  undefined *local_30;
  longlong local_28;
  undefined *local_20;
  longlong local_18;
  undefined *local_10;
  undefined1 local_8 [8];
  
  local_38 = param_1 + 0x20;
  local_28 = param_1 + 0x18;
  local_30 = &DAT_1467f0140;
  local_18 = param_1 + 0x1c;
  local_20 = &DAT_1467f0140;
  local_48 = &local_38;
  local_10 = &DAT_1467f0140;
  local_40 = local_8;
  ATTLCharacterCommon::MulticastPlayOuterEmote_Implementation(param_2,"{}: {}/{}",&local_48);
  return;
}



// FUNCTION 1438bf9a0 FUN_1438bf9a0 body=8 status=ok
// SIG undefined FUN_1438bf9a0(void)

char * FUN_1438bf9a0(void)

{
  return "AddStalenessPathRequestsToManagerTask";
}



// FUNCTION 1438bf9b0 FUN_1438bf9b0 body=8 status=ok
// SIG undefined FUN_1438bf9b0(void)

char * FUN_1438bf9b0(void)

{
  return "ApplyAsyncWorldUpdates";
}



// FUNCTION 1438bf9c0 FUN_1438bf9c0 body=8 status=ok
// SIG undefined FUN_1438bf9c0(void)

char * FUN_1438bf9c0(void)

{
  return "ApplyCuts";
}



// FUNCTION 1438bf9d0 FUN_1438bf9d0 body=8 status=ok
// SIG undefined FUN_1438bf9d0(void)

char * FUN_1438bf9d0(void)

{
  return "CommitUpdates";
}



// FUNCTION 1438bf9e0 FUN_1438bf9e0 body=8 status=ok
// SIG undefined FUN_1438bf9e0(void)

char * FUN_1438bf9e0(void)

{
  return "Compact";
}



// FUNCTION 1438bf9f0 FUN_1438bf9f0 body=8 status=ok
// SIG undefined FUN_1438bf9f0(void)

char * FUN_1438bf9f0(void)

{
  return "FireEvents";
}



// FUNCTION 1438bfa00 FUN_1438bfa00 body=8 status=ok
// SIG undefined FUN_1438bfa00(void)

char * FUN_1438bfa00(void)

{
  return "GetAndClearModifiedAabbs";
}



// FUNCTION 1438bfa10 FUN_1438bfa10 body=8 status=ok
// SIG undefined FUN_1438bfa10(void)

char * FUN_1438bfa10(void)

{
  return "GetAndClearModifiedFaces";
}



// FUNCTION 1438bfa20 FUN_1438bfa20 body=8 status=ok
// SIG undefined FUN_1438bfa20(void)

char * FUN_1438bfa20(void)

{
  return "MatchStreamingFaces";
}



// FUNCTION 1438bfa30 FUN_1438bfa30 body=8 status=ok
// SIG undefined FUN_1438bfa30(void)

char * FUN_1438bfa30(void)

{
  return "RepathBehaviors";
}



// FUNCTION 1438bfa40 FUN_1438bfa40 body=8 status=ok
// SIG undefined FUN_1438bfa40(void)

char * FUN_1438bfa40(void)

{
  return "ResetClearanceAll";
}



// FUNCTION 1438bfa50 FUN_1438bfa50 body=8 status=ok
// SIG undefined FUN_1438bfa50(void)

char * FUN_1438bfa50(void)

{
  return "ResetClearanceFloodFill";
}



// FUNCTION 1438bfa60 FUN_1438bfa60 body=8 status=ok
// SIG undefined FUN_1438bfa60(void)

char * FUN_1438bfa60(void)

{
  return "ResetClearanceMediator";
}



// FUNCTION 1438bfa70 FUN_1438bfa70 body=8 status=ok
// SIG undefined FUN_1438bfa70(void)

char * FUN_1438bfa70(void)

{
  return "UpdateCutConfig";
}



// FUNCTION 1438bfa80 FUN_1438bfa80 body=8 status=ok
// SIG undefined FUN_1438bfa80(void)

char * FUN_1438bfa80(void)

{
  return "UpdateOverlapManager";
}



// FUNCTION 1438bfa90 FUN_1438bfa90 body=8 status=ok
// SIG undefined FUN_1438bfa90(void)

char * FUN_1438bfa90(void)

{
  return "UpdateStaleness";
}



// FUNCTION 1438bfaa0 FUN_1438bfaa0 body=8 status=ok
// SIG undefined FUN_1438bfaa0(void)

char * FUN_1438bfaa0(void)

{
  return "UpdateVolumeStaleness";
}



// FUNCTION 1438bfab0 FUN_1438bfab0 body=53 status=ok
// SIG undefined FUN_1438bfab0(void)

void FUN_1438bfab0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x108);
  iVar1 = *(int *)(*(longlong *)(param_1 + 800) + 0x110);
  *param_2 = lVar2;
  param_2[1] = (longlong)iVar1 * 0x10 + lVar2;
  return;
}



// FUNCTION 1438bfaf0 FUN_1438bfaf0 body=53 status=ok
// SIG undefined FUN_1438bfaf0(void)

void FUN_1438bfaf0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x138);
  iVar1 = *(int *)(*(longlong *)(param_1 + 800) + 0x140);
  *param_2 = lVar2;
  param_2[1] = (longlong)iVar1 * 0x10 + lVar2;
  return;
}



// FUNCTION 1438bfb30 FUN_1438bfb30 body=1349 status=ok
// SIG undefined FUN_1438bfb30(void)

longlong *
FUN_1438bfb30(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,char param_5,
             undefined4 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  LPVOID pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong local_res8;
  undefined8 local_res10;
  
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar6,"TthkaiUpdateNavDataTasks::MakeContext");
  }
  pvVar7 = TlsGetValue(DAT_146b7bf70);
  if (pvVar7 == (LPVOID)0x0) {
    pvVar7 = DAT_146b7bf68;
  }
  lVar8 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar7 + 0x58),0x1d0);
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_1438bcc90(lVar8);
  }
  *param_1 = lVar8;
  *(undefined4 *)(lVar8 + 0x18) = param_6;
  *(longlong *)(*param_1 + 0x20) = param_2;
  lVar8 = *(longlong *)(param_2 + 0x4c8);
  lVar11 = *param_1;
  if (lVar8 != 0) {
    FUN_14370c030(lVar8);
  }
  if (*(longlong *)(lVar11 + 0x28) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar11 + 0x28) = lVar8;
  lVar8 = *param_1;
  uVar9 = FUN_143846e20(param_2);
  lVar11 = *(longlong *)(lVar8 + 0x30);
  if (lVar11 != 0) {
    uVar10 = FUN_143703a50();
    *(undefined4 *)(lVar11 + 0x18) = 0;
    if (-1 < (int)*(uint *)(lVar11 + 0x1c)) {
      FUN_143702e10(uVar10,*(undefined8 *)(lVar11 + 0x10),8,*(uint *)(lVar11 + 0x1c) & 0x3fffffff);
    }
    *(undefined8 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x1c) = 0x80000000;
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar7 + 0x58),lVar11,0x100);
  }
  *(undefined8 *)(lVar8 + 0x30) = uVar9;
  *(bool *)(*param_1 + 0x38) = *(char *)(param_2 + 0x220) != '\0';
  FUN_143802ce0(*param_1 + 0x40,param_3 + 8);
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 0x60) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(lVar8 + 100) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(lVar8 + 0x68) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(lVar8 + 0x6c) = *(undefined4 *)(param_2 + 0x16c);
  uVar9 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(lVar8 + 0x70) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(lVar8 + 0x78) = uVar9;
  uVar3 = *(undefined4 *)(param_2 + 0x184);
  uVar4 = *(undefined4 *)(param_2 + 0x188);
  uVar5 = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(lVar8 + 0x80) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(lVar8 + 0x84) = uVar3;
  *(undefined4 *)(lVar8 + 0x88) = uVar4;
  *(undefined4 *)(lVar8 + 0x8c) = uVar5;
  uVar3 = *(undefined4 *)(param_2 + 0x194);
  uVar4 = *(undefined4 *)(param_2 + 0x198);
  uVar5 = *(undefined4 *)(param_2 + 0x19c);
  *(undefined4 *)(lVar8 + 0x90) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(lVar8 + 0x94) = uVar3;
  *(undefined4 *)(lVar8 + 0x98) = uVar4;
  *(undefined4 *)(lVar8 + 0x9c) = uVar5;
  lVar8 = *param_1;
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(lVar8 + 0xa0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar8 + 0xa0) = *(undefined8 *)(param_2 + 0x150);
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_14370c150();
  }
  lVar8 = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  if (param_5 == '\0') {
    lVar8 = *(longlong *)(param_2 + 0x130);
    lVar11 = *param_1;
    if (lVar8 != 0) {
      FUN_14370c030(lVar8);
    }
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x130);
    pvVar7 = TlsGetValue(DAT_146b7bf70);
    if (pvVar7 == (LPVOID)0x0) {
      pvVar7 = DAT_146b7bf68;
    }
    lVar11 = (**(code **)(**(longlong **)((longlong)pvVar7 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar7 + 0x58),0xf0);
    if (lVar11 == 0) {
      lVar11 = *param_1;
    }
    else {
      lVar8 = FUN_14383d270(lVar11,uVar9);
      lVar11 = *param_1;
    }
  }
  if (*(longlong *)(lVar11 + 0xb8) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar11 + 0xb8) = lVar8;
  lVar8 = *param_1;
  if (*(longlong *)(param_2 + 0x138) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(lVar8 + 0xd0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(param_2 + 0x138);
  if (*(longlong *)(param_2 + 0x138) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(param_2 + 0x138) = 0;
  FUN_143865000(*(undefined8 *)(*param_1 + 0xd0),*(undefined8 *)(*param_1 + 0xb8));
  lVar11 = UFoliageType_InstancedStaticMesh::GetStaticMesh(param_2);
  lVar8 = *param_1;
  puVar13 = *(undefined8 **)(lVar11 + 0x20);
  puVar1 = puVar13 + *(int *)(lVar11 + 0x28);
  uVar15 = (longlong)puVar1 - (longlong)puVar13 >> 3;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)(lVar8 + 0x114) & 0x3fffffff;
  iVar14 = (int)uVar15;
  if ((int)uVar12 < iVar14) {
    uVar12 = uVar12 * 2;
    uVar16 = uVar15 & 0xffffffff;
    if (iVar14 < (int)uVar12) {
      uVar16 = (ulonglong)uVar12;
    }
    FUN_14370c310(uVar9,lVar8 + 0x108,uVar16,0x10);
  }
  if (*(int *)(lVar8 + 0x120) * 2 < iVar14 * 3) {
    FUN_143734990(lVar8 + 0x118,uVar15 & 0xffffffff);
  }
  lVar8 = *param_1;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)(lVar8 + 0x134) & 0x3fffffff;
  if ((int)uVar12 < iVar14) {
    iVar2 = uVar12 * 2;
    if (iVar14 < iVar2) {
      iVar14 = iVar2;
    }
    FUN_14370c310(uVar9,lVar8 + 0x128,iVar14,0x10);
  }
  for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
    local_res10 = *puVar13;
    lVar8 = FUN_14385c6f0();
    if (lVar8 != 0) {
      local_res8 = lVar8;
      FUN_14370c030(lVar8);
      FUN_14375dd70(*param_1 + 0x108,&local_res10,&local_res8);
      FUN_14370c150(lVar8);
    }
  }
  lVar11 = UGeometryCacheComponent::GetGeometryCache(param_2);
  lVar8 = *param_1;
  puVar13 = *(undefined8 **)(lVar11 + 0x20);
  puVar1 = puVar13 + *(int *)(lVar11 + 0x28);
  uVar15 = (longlong)puVar1 - (longlong)puVar13 >> 3;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)(lVar8 + 0x144) & 0x3fffffff;
  iVar14 = (int)uVar15;
  if ((int)uVar12 < iVar14) {
    uVar12 = uVar12 * 2;
    uVar16 = uVar15 & 0xffffffff;
    if (iVar14 < (int)uVar12) {
      uVar16 = (ulonglong)uVar12;
    }
    FUN_14370c310(uVar9,lVar8 + 0x138,uVar16,0x10);
  }
  if (*(int *)(lVar8 + 0x150) * 2 < iVar14 * 3) {
    FUN_143734990(lVar8 + 0x148,uVar15 & 0xffffffff);
  }
  lVar8 = *param_1;
  uVar9 = FUN_143703a50();
  uVar12 = *(uint *)(lVar8 + 0x164) & 0x3fffffff;
  if ((int)uVar12 < iVar14) {
    iVar2 = uVar12 * 2;
    if (iVar14 < iVar2) {
      iVar14 = iVar2;
    }
    FUN_14370c310(uVar9,lVar8 + 0x158,iVar14,0x10);
  }
  for (; puVar13 != puVar1; puVar13 = puVar13 + 1) {
    local_res10 = *puVar13;
    lVar8 = FUN_14385f8d0();
    if (lVar8 != 0) {
      local_res8 = lVar8;
      FUN_14370c030(lVar8);
      FUN_14375dd70(*param_1 + 0x138,&local_res10,&local_res8);
      FUN_14370c150(lVar8);
    }
  }
  lVar8 = *param_1;
  if (param_4 != 0) {
    FUN_14370c030(param_4);
  }
  if (*(longlong *)(lVar8 + 0x168) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar8 + 0x168) = param_4;
  *param_7 = *(undefined8 *)(*param_1 + 0xb8);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d750(pvVar6,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c0080 FUN_1438c0080 body=188 status=ok
// SIG undefined FUN_1438c0080(void)

void FUN_1438c0080(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar1 = *(int *)(param_2 + 0x18);
  local_28 = 0;
  uStack_20 = 0;
  FUN_1438bfab0(param_1 + -0x20,&local_28);
  do {
    puVar3 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    if ((uint)uVar2 < (uint)(uVar2 >> 0x20)) {
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res8,iVar1 + 1,local_res10);
      if (local_res8[0] < 0) {
        return;
      }
      uVar2 = (ulonglong)local_res10[0];
    }
    FUN_1438c1d00(param_1 + -0x20,&local_28,uVar2 & 0xffffffff);
  } while( true );
}



// FUNCTION 1438c0140 FUN_1438c0140 body=188 status=ok
// SIG undefined FUN_1438c0140(void)

void FUN_1438c0140(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  
  iVar1 = *(int *)(param_2 + 0x18);
  local_28 = 0;
  uStack_20 = 0;
  FUN_1438bfaf0(param_1 + -0x20,&local_28);
  do {
    puVar3 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    if ((uint)uVar2 < (uint)(uVar2 >> 0x20)) {
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res8,iVar1 + 1,local_res10);
      if (local_res8[0] < 0) {
        return;
      }
      uVar2 = (ulonglong)local_res10[0];
    }
    FUN_1438c1d40(param_1 + -0x20,&local_28,uVar2 & 0xffffffff);
  } while( true );
}



// FUNCTION 1438c0200 FUN_1438c0200 body=148 status=ok
// SIG undefined FUN_1438c0200(void)

void FUN_1438c0200(longlong param_1,longlong param_2)

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
    FUN_1438c9ca0(param_1 + -0x20,local_res8,uVar2 & 0xffffffff);
  } while( true );
}



// FUNCTION 1438c02a0 FUN_1438c02a0 body=449 status=ok
// SIG undefined FUN_1438c02a0(void)

void FUN_1438c02a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong local_28;
  longlong lStack_20;
  
  if ((*(longlong **)(param_2 + 0x10) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))(), cVar2 != '\0')) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_28 = *(longlong *)(lVar1 + 0x128);
  lStack_20 = (longlong)*(int *)(lVar1 + 0x130) * 0x10 + local_28;
  FUN_143876bc0(*(undefined8 *)(lVar1 + 0x168),&local_28);
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar6 = (longlong *)(lVar1 + 0x128);
  uVar3 = FUN_143703a50();
  iVar4 = *(int *)(lVar1 + 0x130) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    plVar7 = (longlong *)(*plVar6 + 8 + lVar5 * 0x10);
    do {
      if (*plVar7 != 0) {
        FUN_14370c150();
      }
      plVar7 = plVar7 + -2;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(lVar1 + 0x130) = 0;
  if (-1 < (int)*(uint *)(lVar1 + 0x134)) {
    FUN_143702e10(uVar3,*plVar6,0x10,*(uint *)(lVar1 + 0x134) & 0x3fffffff);
  }
  *plVar6 = 0;
  *(undefined4 *)(lVar1 + 0x134) = 0x80000000;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_28 = *(longlong *)(lVar1 + 0x158);
  lStack_20 = (longlong)*(int *)(lVar1 + 0x160) * 0x10 + local_28;
  FUN_143876c80(*(undefined8 *)(lVar1 + 0x168),&local_28);
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar6 = (longlong *)(lVar1 + 0x158);
  uVar3 = FUN_143703a50();
  iVar4 = *(int *)(lVar1 + 0x160) + -1;
  lVar5 = (longlong)iVar4;
  if (-1 < iVar4) {
    plVar7 = (longlong *)(*plVar6 + 8 + lVar5 * 0x10);
    do {
      if (*plVar7 != 0) {
        FUN_14370c150();
      }
      plVar7 = plVar7 + -2;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(lVar1 + 0x160) = 0;
  if (-1 < (int)*(uint *)(lVar1 + 0x164)) {
    FUN_143702e10(uVar3,*plVar6,0x10,*(uint *)(lVar1 + 0x164) & 0x3fffffff);
  }
  *plVar6 = 0;
  *(undefined4 *)(lVar1 + 0x164) = 0x80000000;
  return;
}



// FUNCTION 1438c0470 FUN_1438c0470 body=528 status=ok
// SIG undefined FUN_1438c0470(void)

void FUN_1438c0470(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  LPVOID pvVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  longlong *plVar11;
  undefined1 local_78 [8];
  ushort *local_70;
  int local_64;
  undefined1 local_58 [80];
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TtApplyAsyncWorldUpdates");
  }
  FUN_143dfd100();
  FUN_143dfc7b0(local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30));
  thunk_FUN_143719c70(0x10b35015);
  puVar10 = local_70;
  do {
    if (puVar10 == (ushort *)0x0) {
      FUN_143dfc450(local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
      FUN_143dfc350(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30),local_58);
      thunk_FUN_143dfc630(local_58);
      if (pvVar7 != (LPVOID)0x0) {
        FUN_14370d750(pvVar7,&DAT_145b8eda0);
      }
      return;
    }
    if ((*(longlong **)(param_2 + 0x10) == (longlong *)0x0) ||
       (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))(), cVar6 == '\0')) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      FUN_14386a280(puVar10,*(undefined8 *)(lVar2 + 0xb8),*(undefined8 *)(lVar2 + 0xa0),
                    *(longlong *)(lVar2 + 0xd0),*(undefined8 *)(*(longlong *)(lVar2 + 0xd0) + 0xf0))
      ;
    }
    uVar1 = puVar10[2];
    if (uVar1 == 7) {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x180);
LAB_1438c0590:
      uVar8 = FUN_143703a50();
      if (*(uint *)(plVar11 + 1) == (*(uint *)((longlong)plVar11 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar8,plVar11,0x20);
      }
      puVar9 = (undefined4 *)((longlong)(int)plVar11[1] * 0x20 + *plVar11);
      if (puVar9 != (undefined4 *)0x0) {
        uVar3 = *(undefined4 *)(puVar10 + 2);
        uVar4 = *(undefined4 *)(puVar10 + 4);
        uVar5 = *(undefined4 *)(puVar10 + 6);
        *puVar9 = *(undefined4 *)puVar10;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar8 = *(undefined8 *)(puVar10 + 0xc);
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar10 + 8);
        *(undefined8 *)(puVar9 + 6) = uVar8;
      }
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    }
    else {
      if (uVar1 == 8) {
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + 400);
        goto LAB_1438c0590;
      }
      if (uVar1 == 9) {
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x1a0);
        goto LAB_1438c0590;
      }
      if (uVar1 == 10) {
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0);
        goto LAB_1438c0590;
      }
      if (uVar1 == 0xb) {
        plVar11 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x1c0);
        goto LAB_1438c0590;
      }
      FUN_14386aba0(puVar10);
    }
    thunk_FUN_143719c70(0x54fc40da);
    local_64 = local_64 + -1;
    if (local_64 < 1) {
      puVar10 = (ushort *)FUN_143dfc660(local_78);
    }
    else {
      puVar10 = (ushort *)((ulonglong)*local_70 + (longlong)local_70);
      local_70 = puVar10;
    }
  } while( true );
}



// FUNCTION 1438c0680 FUN_1438c0680 body=175 status=ok
// SIG undefined FUN_1438c0680(void)

void FUN_1438c0680(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  longlong lVar3;
  longlong local_18;
  longlong lStack_10;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtApplyCuts");
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x80 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  local_18 = *(longlong *)(lVar3 + 0x20);
  lStack_10 = local_18 + (longlong)*(int *)(lVar3 + 0x28) * 0x48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xd0);
  FUN_143884e20(*(undefined8 *)
                 (*(longlong *)(lVar1 + 0x20) + (longlong)*(int *)(param_1 + 0x18) * 8),&local_18,
                lVar3 + 0x30,*(undefined4 *)(lVar1 + 0x9c));
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c0730 FUN_1438c0730 body=361 status=ok
// SIG undefined FUN_1438c0730(void)

void FUN_1438c0730(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  LPVOID pvVar4;
  
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar4,"TtCommitUpdates");
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x130);
  if (lVar1 != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8)) {
    FUN_143840130(lVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if (*(longlong *)(lVar2 + 0xd0) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(lVar3 + 0x138) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar3 + 0x138) = *(undefined8 *)(lVar2 + 0xd0);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if (*(longlong *)(lVar2 + 0xa0) != 0) {
    FUN_14370c030();
  }
  if (*(longlong *)(lVar3 + 0x150) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar3 + 0x150) = *(undefined8 *)(lVar2 + 0xa0);
  FUN_143865000(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x138),lVar1);
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_14387c510(*(undefined8 *)(lVar1 + 0x20),lVar1 + 0x108,*(undefined8 *)(lVar1 + 0xf0),
                *(undefined8 *)(lVar1 + 0xf8),*(undefined8 *)(lVar1 + 0x168));
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_143887c00(*(undefined8 *)(lVar1 + 0x20),lVar1 + 0x138,*(undefined8 *)(lVar1 + 0xf8),
                *(undefined8 *)(lVar1 + 0x168));
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d750(pvVar4,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c08a0 FUN_1438c08a0 body=540 status=ok
// SIG undefined FUN_1438c08a0(void)

void FUN_1438c08a0(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  LPVOID pvVar6;
  char *pcVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  uint local_res10 [2];
  uint *local_28;
  int local_20;
  uint local_1c;
  ulonglong uVar10;
  
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar6,"TtCompact");
  }
  if ((*(longlong **)(param_2 + 0x10) == (longlong *)0x0) ||
     (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))(), cVar5 == '\0')) {
    thunk_FUN_143719c70(0xfc861394);
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar10 = 0;
    local_28 = (uint *)0x0;
    local_20 = 0;
    local_1c = 0x80000000;
    fVar1 = *(float *)(*(longlong *)(lVar3 + 0xd0) + 0xa4);
    if (fVar1 == 0.0) {
      FUN_1438612e0(*(undefined8 *)(lVar3 + 0xb8),&local_28);
    }
    else {
      FUN_143862660(local_res10,*(undefined8 *)(lVar3 + 0xb8),*(longlong *)(lVar3 + 0xd0) + 0x30,
                    fVar1,&local_28);
    }
    uVar12 = (ulonglong)((longlong)(local_28 + local_20) + (3 - (longlong)local_28)) >> 2;
    if (local_28 + local_20 < local_28) {
      uVar12 = uVar10;
    }
    puVar9 = local_28;
    uVar11 = uVar10;
    if (uVar12 != 0) {
      do {
        local_res10[0] = *puVar9 & 0x3fffff;
        FUN_143864c20(*(longlong *)
                       ((ulonglong)(*puVar9 >> 0x16) * 0x80 + 0x18 +
                       *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8)) + 0xb8,local_res10);
        uVar11 = uVar11 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar11 != uVar12);
    }
    thunk_FUN_143719c70(0x279c4b29);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8);
    iVar2 = *(int *)(lVar3 + 0x40);
    if (0 < iVar2) {
      do {
        lVar4 = *(longlong *)((longlong)(int)uVar10 * 0x100 + *(longlong *)(lVar3 + 0x38));
        if ((lVar4 != 0) && (pcVar7 = (char *)FUN_14383a440(lVar4,local_res10), *pcVar7 != '\0')) {
          FUN_14383a870(lVar4);
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
      } while ((int)uVar8 < iVar2);
    }
    thunk_FUN_143719c70(0x1c7fb091);
    local_20 = 0;
    if (-1 < (int)local_1c) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_28,4,local_1c & 0x3fffffff);
    }
    local_28 = (uint *)0x0;
    local_1c = 0x80000000;
  }
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d750(pvVar6,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c0ac0 FUN_1438c0ac0 body=1960 status=ok
// SIG undefined FUN_1438c0ac0(void)

void FUN_1438c0ac0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  LPVOID pvVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined4 local_res8 [2];
  byte *local_68;
  byte *pbStack_60;
  LPVOID local_58;
  undefined8 local_50;
  byte *local_48;
  byte *pbStack_40;
  
  local_58 = TlsGetValue(DAT_146b8198c);
  if (local_58 != (LPVOID)0x0) {
    FUN_14370d5c0(local_58,"TthkaiUpdateNavDataTasks::FireEvents");
  }
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf8);
  puVar14 = *(undefined8 **)(lVar15 + 0x228);
  puVar9 = puVar14 + *(int *)(lVar15 + 0x230);
  if (lVar16 != 0) {
    pbVar4 = *(byte **)(lVar16 + 0x18);
    iVar2 = *(int *)(lVar16 + 0x20);
    if (pbVar4 != pbVar4 + (longlong)iVar2 * 8) {
      pbVar11 = pbVar4 + 4;
      do {
        uVar10 = 0;
        uVar3 = *(undefined4 *)(pbVar11 + -4);
        if (pbVar11[1] != 0) {
          local_68 = pbVar11;
          if ((*pbVar11 & 2) == 0) {
            if ((*pbVar11 & 8) != 0) {
              uVar13 = (ulonglong)((longlong)puVar9 + (7 - (longlong)puVar14)) >> 3;
              if (puVar9 < puVar14) {
                uVar13 = uVar10;
              }
              puVar12 = puVar14;
              if (uVar13 != 0) {
                do {
                  local_res8[0] = uVar3;
                  (**(code **)(*(longlong *)*puVar12 + 0xa0))
                            ((longlong *)*puVar12,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_res8);
                  puVar12 = puVar12 + 1;
                  uVar10 = uVar10 + 1;
                } while (uVar10 != uVar13);
              }
              lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
              local_res8[0] = uVar3;
              FUN_143846f00(lVar15 + 0x60,lVar15,local_res8);
            }
          }
          else {
            uVar13 = (ulonglong)((longlong)puVar9 + (7 - (longlong)puVar14)) >> 3;
            if (puVar9 < puVar14) {
              uVar13 = uVar10;
            }
            puVar12 = puVar14;
            if (uVar13 != 0) {
              do {
                local_res8[0] = uVar3;
                (**(code **)(*(longlong *)*puVar12 + 0x80))
                          ((longlong *)*puVar12,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_res8);
                uVar10 = uVar10 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar10 != uVar13);
            }
            lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
            local_res8[0] = uVar3;
            FUN_143846f00(lVar15 + 0x40,lVar15,local_res8);
            pbVar11 = local_68;
          }
          uVar10 = 0;
          if ((*pbVar11 & 1) == 0) {
            if ((*pbVar11 & 4) != 0) {
              uVar13 = (ulonglong)((longlong)puVar9 + (7 - (longlong)puVar14)) >> 3;
              if (puVar9 < puVar14) {
                uVar13 = uVar10;
              }
              puVar12 = puVar14;
              if (uVar13 != 0) {
                do {
                  local_res8[0] = uVar3;
                  (**(code **)(*(longlong *)*puVar12 + 0x98))
                            ((longlong *)*puVar12,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_res8);
                  puVar12 = puVar12 + 1;
                  uVar10 = uVar10 + 1;
                } while (uVar10 != uVar13);
              }
              lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
              local_res8[0] = uVar3;
              FUN_143846f00(lVar15 + 0x58,lVar15,local_res8);
            }
          }
          else {
            uVar13 = (ulonglong)((longlong)puVar9 + (7 - (longlong)puVar14)) >> 3;
            if (puVar9 < puVar14) {
              uVar13 = uVar10;
            }
            puVar12 = puVar14;
            if (uVar13 != 0) {
              do {
                local_res8[0] = uVar3;
                (**(code **)(*(longlong *)*puVar12 + 0x78))
                          ((longlong *)*puVar12,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_res8);
                uVar10 = uVar10 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar10 != uVar13);
            }
            lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
            local_res8[0] = uVar3;
            FUN_143846f00(lVar15 + 0x38,lVar15,local_res8);
            pbVar11 = local_68;
          }
          if ((*pbVar11 & 0x20) != 0) {
            uVar13 = 0;
            uVar10 = (ulonglong)((longlong)puVar9 + (7 - (longlong)puVar14)) >> 3;
            if (puVar9 < puVar14) {
              uVar10 = uVar13;
            }
            puVar12 = puVar14;
            if (uVar10 != 0) {
              do {
                local_res8[0] = uVar3;
                (**(code **)(*(longlong *)*puVar12 + 0x90))
                          ((longlong *)*puVar12,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_res8);
                uVar13 = uVar13 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar13 != uVar10);
            }
            lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
            local_res8[0] = uVar3;
            FUN_143846f00(lVar15 + 0x50,lVar15,local_res8);
          }
          if ((*pbVar11 & 0x10) != 0) {
            uVar13 = 0;
            uVar10 = (ulonglong)((longlong)puVar9 + (7 - (longlong)puVar14)) >> 3;
            if (puVar9 < puVar14) {
              uVar10 = uVar13;
            }
            puVar12 = puVar14;
            if (uVar10 != 0) {
              do {
                local_res8[0] = uVar3;
                (**(code **)(*(longlong *)*puVar12 + 0x88))
                          ((longlong *)*puVar12,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),local_res8);
                uVar13 = uVar13 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar13 != uVar10);
            }
            lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
            local_res8[0] = uVar3;
            FUN_143846f00(lVar15 + 0x48,lVar15,local_res8);
          }
        }
        local_68 = pbVar11 + 8;
        pbVar1 = pbVar11 + 4;
        pbVar11 = local_68;
      } while (pbVar1 != pbVar4 + (longlong)iVar2 * 8);
    }
  }
  pbVar4 = *(byte **)(*(longlong *)(param_1 + 0x10) + 0xf0);
  if (pbVar4 != (byte *)0x0) {
    FUN_14370c030(pbVar4);
  }
  pbVar11 = *(byte **)(*(longlong *)(param_1 + 0x10) + 0x100);
  if (pbVar11 != (byte *)0x0) {
    FUN_14370c030(pbVar11);
  }
  if ((pbVar4 != (byte *)0x0) || (pbVar11 != (byte *)0x0)) {
    pvVar8 = TlsGetValue(DAT_146b8198c);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d5c0(pvVar8,"TtdynamicNavMeshModifiedCallback");
    }
    local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20);
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    puVar14 = *(undefined8 **)(lVar15 + 0x228);
    uVar13 = 0;
    uVar10 = (ulonglong)((longlong)(puVar14 + *(int *)(lVar15 + 0x230)) + (7 - (longlong)puVar14))
             >> 3;
    if (puVar14 + *(int *)(lVar15 + 0x230) < puVar14) {
      uVar10 = uVar13;
    }
    local_48 = pbVar4;
    pbStack_40 = pbVar11;
    if (uVar10 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar14 + 0x50))((longlong *)*puVar14,&local_50);
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (uVar13 != uVar10);
    }
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    local_68 = pbVar4;
    pbStack_60 = pbVar11;
    FUN_1438484d0(lVar15 + 0x68,lVar15,&local_68);
    if (pvVar8 != (LPVOID)0x0) {
      FUN_14370d750(pvVar8,&DAT_145b8eda0);
    }
  }
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x180);
  lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x188) * 0x20 + lVar15;
  for (; lVar15 != lVar16; lVar15 = lVar15 + 0x20) {
    local_50._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar15 + 0x10));
    local_68 = *(byte **)(*(longlong *)(lVar15 + 0x18) + 0x18);
    pbStack_60 = local_68 + (longlong)*(int *)(*(longlong *)(lVar15 + 0x18) + 0x20) * 0x50;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    local_48 = local_68;
    pbStack_40 = pbStack_60;
    FUN_1438484d0(lVar5 + 0xc0,lVar5,&local_50);
    CAkVPLSrcNode::Stop(lVar15);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x188) = 0;
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 400);
  lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x198) * 0x20 + lVar15;
  for (; lVar15 != lVar16; lVar15 = lVar15 + 0x20) {
    local_50._4_4_ = (undefined4)((ulonglong)local_50 >> 0x20);
    local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar15 + 0x10));
    local_68 = *(byte **)(*(longlong *)(lVar15 + 0x18) + 0x18);
    pbStack_60 = local_68 + (longlong)*(int *)(*(longlong *)(lVar15 + 0x18) + 0x20) * 0xe0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    local_48 = local_68;
    pbStack_40 = pbStack_60;
    FUN_1438484d0(lVar5 + 200,lVar5,&local_50);
    CAkVPLSrcNode::Stop(lVar15);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x198) = 0;
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1a0);
  lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x1a8) * 0x20 + lVar15;
  if (lVar15 != lVar16) {
    puVar17 = (undefined4 *)(lVar15 + 0x10);
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
      FUN_143848570(lVar5 + 0xd0,lVar5,*puVar17);
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar15);
      lVar15 = lVar15 + 0x20;
      puVar17 = puVar17 + 8;
    } while (lVar15 != lVar16);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x1a8) = 0;
  lVar15 = *(longlong *)(param_1 + 0x10);
  if ((*(int *)(lVar15 + 0x1b8) == 0) || (*(int *)(lVar15 + 0x1c8) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((*(ulonglong *)(*(longlong *)(lVar15 + 0x20) + 0x80) & 0xfffffffffffffffc) != 0) {
    lVar16 = *(longlong *)(lVar15 + 0x1b0);
    lVar15 = (longlong)*(int *)(lVar15 + 0x1b8) * 0x20 + lVar16;
    for (; lVar16 != lVar15; lVar16 = lVar16 + 0x20) {
      if ((!bVar6) ||
         (cVar7 = FUN_143872740(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x150),
                                *(undefined8 *)(lVar16 + 0x10)), cVar7 != '\0')) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
        FUN_1438484d0(lVar5 + 0x80,lVar5,*(undefined8 *)(lVar16 + 0x10));
      }
    }
  }
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b0);
  lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x1b8) * 0x20 + lVar15;
  for (; lVar15 != lVar16; lVar15 = lVar15 + 0x20) {
    FUN_14386ab90(lVar15);
  }
  lVar15 = *(longlong *)(param_1 + 0x10);
  if ((*(ulonglong *)(*(longlong *)(lVar15 + 0x20) + 0x88) & 0xfffffffffffffffc) != 0) {
    lVar16 = *(longlong *)(lVar15 + 0x1c0);
    lVar15 = (longlong)*(int *)(lVar15 + 0x1c8) * 0x20 + lVar16;
    for (; lVar16 != lVar15; lVar16 = lVar16 + 0x20) {
      if ((!bVar6) ||
         (cVar7 = FUN_143872740(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x150),
                                *(undefined8 *)(lVar16 + 0x10)), cVar7 == '\0')) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
        FUN_1438484d0(lVar5 + 0x88,lVar5,*(undefined8 *)(lVar16 + 0x10));
      }
    }
  }
  lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1c0);
  lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x1c8) * 0x20 + lVar15;
  for (; lVar15 != lVar16; lVar15 = lVar15 + 0x20) {
    FUN_14386ab90(lVar15);
  }
  if (pbVar11 != (byte *)0x0) {
    FUN_14370c150(pbVar11);
  }
  if (pbVar4 != (byte *)0x0) {
    FUN_14370c150(pbVar4);
  }
  if (local_58 != (LPVOID)0x0) {
    FUN_14370d750(local_58,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1270 FUN_1438c1270 body=181 status=ok
// SIG undefined FUN_1438c1270(void)

void FUN_1438c1270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  longlong local_res10;
  
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar4,"TtGetAndClearModifiedAabbs");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar3 != '\0') goto LAB_1438c1301;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar5 = (undefined8 *)FUN_143864010(*(undefined8 *)(lVar1 + 0xd0),&local_res10);
  uVar2 = *puVar5;
  *puVar5 = 0;
  if (*(longlong *)(lVar1 + 0x100) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar1 + 0x100) = uVar2;
  if (local_res10 != 0) {
    FUN_14370c150();
  }
LAB_1438c1301:
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d750(pvVar4,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1330 FUN_1438c1330 body=271 status=ok
// SIG undefined FUN_1438c1330(void)

void FUN_1438c1330(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  longlong local_res10;
  
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar4,"TtGetAndClearModifiedFaces");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar3 != '\0') goto LAB_1438c1416;
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar5 = (undefined8 *)FUN_143864190(*(undefined8 *)(lVar1 + 0xd0),&local_res10);
  uVar2 = *puVar5;
  *puVar5 = 0;
  if (*(longlong *)(lVar1 + 0xf0) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar1 + 0xf0) = uVar2;
  if (local_res10 != 0) {
    FUN_14370c150();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar5 = (undefined8 *)FUN_143864390(*(undefined8 *)(lVar1 + 0xd0),&local_res10);
  uVar2 = *puVar5;
  *puVar5 = 0;
  if (*(longlong *)(lVar1 + 0xf8) != 0) {
    FUN_14370c150();
  }
  *(undefined8 *)(lVar1 + 0xf8) = uVar2;
  if (local_res10 != 0) {
    FUN_14370c150();
  }
LAB_1438c1416:
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d750(pvVar4,&DAT_145b8eda0);
    return;
  }
  return;
}



// FUNCTION 1438c1440 FUN_1438c1440 body=323 status=ok
// SIG undefined FUN_1438c1440(void)

void FUN_1438c1440(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  LPVOID pvVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtMatchStreamingFaces");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar2 != '\0') goto LAB_1438c155f;
  }
  thunk_FUN_143719c70(0x1ef604d4);
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_48 = *(undefined4 *)(*(longlong *)(lVar1 + 0xd0) + 0x94);
  local_44 = *(undefined4 *)(*(longlong *)(lVar1 + 0xd0) + 0x90);
  local_38 = *(undefined8 *)(*(longlong *)(lVar1 + 0xd0) + 0x40);
  uStack_30 = *(undefined8 *)(*(longlong *)(lVar1 + 0xd0) + 0x48);
  local_28 = *(longlong *)(lVar1 + 0xd0) + 0x50;
  local_20 = *(undefined8 *)(*(longlong *)(lVar1 + 0xd0) + 0x88);
  local_18 = *(undefined4 *)(*(longlong *)(lVar1 + 0xd0) + 0x9c);
  FUN_1438861f0(*(undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x18) * 0x80 + *(longlong *)(lVar1 + 0xa8) + 0x18),
                *(undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x1c) * 0x80 + *(longlong *)(lVar1 + 0xa8) + 0x18),
                *(undefined8 *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0xb8) + 0x48) +
                 (longlong)*(int *)(param_1 + 0x20) * 0x18),&local_48);
  thunk_FUN_143719c70(0x501514cb);
LAB_1438c155f:
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1590 FUN_1438c1590 body=136 status=ok
// SIG undefined FUN_1438c1590(void)

void FUN_1438c1590(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtRepathBehaviors");
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((*(longlong *)(lVar1 + 0xf0) != 0) || (*(longlong *)(lVar1 + 0xf8) != 0)) {
    local_18 = *(undefined4 *)(lVar1 + 0x170);
    uStack_14 = *(undefined4 *)(lVar1 + 0x174);
    uStack_10 = *(undefined4 *)(lVar1 + 0x178);
    uStack_c = *(undefined4 *)(lVar1 + 0x17c);
    FUN_143869020(*(undefined8 *)(lVar1 + 0xb8),&local_18);
  }
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1620 FUN_1438c1620 body=231 status=ok
// SIG undefined FUN_1438c1620(void)

void FUN_1438c1620(longlong param_1,longlong param_2)

{
  char cVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtResetClearanceAll");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar1 != '\0') goto LAB_1438c16e3;
  }
  thunk_FUN_143719c70(0x4dc5a291);
  lVar4 = (longlong)*(int *)(param_1 + 0x18) * 0x80 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  FUN_143885d40(*(undefined8 *)(lVar4 + 0x18));
  lVar4 = *(longlong *)(lVar4 + 0x18);
  uVar3 = FUN_143703a50();
  *(undefined4 *)(lVar4 + 0x100) = 0;
  if (-1 < (int)*(uint *)(lVar4 + 0x104)) {
    FUN_143702e10(uVar3,*(undefined8 *)(lVar4 + 0xf8),0x20,*(uint *)(lVar4 + 0x104) & 0x3fffffff);
  }
  *(undefined8 *)(lVar4 + 0xf8) = 0;
  *(undefined4 *)(lVar4 + 0x104) = 0x80000000;
  thunk_FUN_143719c70(0xb1fe7202);
LAB_1438c16e3:
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1710 FUN_1438c1710 body=609 status=ok
// SIG undefined FUN_1438c1710(void)

void FUN_1438c1710(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined4 local_res10 [2];
  longlong local_48;
  int local_40;
  uint local_3c;
  longlong local_38;
  longlong lStack_30;
  
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar4,"TtResetClearanceFloodFill");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar2 != '\0') goto LAB_1438c194c;
  }
  lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0x38 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xc0);
  local_48 = 0;
  local_40 = 0;
  local_3c = 0x80000000;
  iVar8 = *(int *)(lVar7 + 0x20) + *(int *)(lVar7 + 0x10);
  if (0 < iVar8) {
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_48,iVar8,4);
  }
  iVar8 = *(int *)(lVar7 + 0x10);
  lVar10 = (longlong)iVar8;
  lVar6 = *(longlong *)(lVar7 + 8);
  uVar3 = local_3c & 0x3fffffff;
  iVar9 = local_40 + iVar8;
  if (((int)uVar3 < iVar9) && ((int)uVar3 < iVar9)) {
    iVar1 = iVar9;
    if (iVar9 < (int)(uVar3 * 2)) {
      iVar1 = uVar3 * 2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_48,iVar1,4);
  }
  puVar5 = (undefined4 *)(local_48 + (longlong)local_40 * 4);
  if (0 < iVar8) {
    lVar6 = lVar6 - (longlong)puVar5;
    do {
      *puVar5 = *(undefined4 *)(lVar6 + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  uVar3 = local_3c & 0x3fffffff;
  lVar10 = (longlong)*(int *)(lVar7 + 0x20);
  lVar6 = *(longlong *)(lVar7 + 0x18);
  iVar8 = iVar9 + *(int *)(lVar7 + 0x20);
  local_40 = iVar9;
  if (((int)uVar3 < iVar8) && ((int)uVar3 < iVar8)) {
    iVar9 = iVar8;
    if (iVar8 < (int)(uVar3 * 2)) {
      iVar9 = uVar3 * 2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,&local_48,iVar9,4);
  }
  puVar5 = (undefined4 *)(local_48 + (longlong)local_40 * 4);
  if (0 < lVar10) {
    lVar6 = lVar6 - (longlong)puVar5;
    do {
      *puVar5 = *(undefined4 *)(lVar6 + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  lStack_30 = local_48 + (longlong)iVar8 * 4;
  local_res10[0] = *(undefined4 *)(param_1 + 0x18);
  local_38 = local_48;
  local_40 = iVar8;
  FUN_1438a4ba0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8),local_res10,&local_38);
  thunk_FUN_143719c70(0xf1ad2a37);
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(&PTR_vftable_1467f0638,local_48,4,local_3c & 0x3fffffff);
  }
  local_48 = 0;
  local_3c = 0x80000000;
LAB_1438c194c:
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d750(pvVar4,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1980 FUN_1438c1980 body=227 status=ok
// SIG undefined FUN_1438c1980(void)

void FUN_1438c1980(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  LPVOID pvVar3;
  int local_res10 [2];
  longlong local_18;
  longlong lStack_10;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtResetClearanceMediator");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar2 != '\0') goto LAB_1438c1a3f;
  }
  thunk_FUN_143719c70(0x80326ecb);
  local_res10[0] = *(int *)(param_1 + 0x18);
  lVar1 = *(longlong *)
           ((longlong)local_res10[0] * 0x80 + 0x18 +
           *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8));
  local_18 = *(longlong *)(lVar1 + 0xf8);
  lStack_10 = (longlong)*(int *)(lVar1 + 0x100) * 0x20 + local_18;
  FUN_1438a56c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8),local_res10,&local_18);
  thunk_FUN_143719c70(0x5a39c6b0);
LAB_1438c1a3f:
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1a70 FUN_1438c1a70 body=267 status=ok
// SIG undefined FUN_1438c1a70(void)

void FUN_1438c1a70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  LPVOID pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtUpdateCutConfig");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar2 != '\0') goto LAB_1438c1b57;
  }
  thunk_FUN_143719c70(0xd20c2e87);
  lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x80 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8);
  local_28 = *(longlong *)(lVar5 + 0x20);
  lVar4 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x18) + 0x20) * 0x38;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xc0);
  local_18 = *(longlong *)(lVar4 + 0x18 + lVar1);
  lStack_10 = local_18 + (longlong)*(int *)(lVar4 + 0x20 + lVar1) * 4;
  lStack_20 = local_28 + (longlong)*(int *)(lVar5 + 0x28) * 0x48;
  FUN_143887110(*(longlong *)(lVar5 + 0x18),&local_28,&local_18,lVar5 + 0x30);
  thunk_FUN_143719c70(0xad10c384);
LAB_1438c1b57:
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1b80 FUN_1438c1b80 body=154 status=ok
// SIG undefined FUN_1438c1b80(void)

void FUN_1438c1b80(longlong param_1,longlong param_2)

{
  char cVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtUpdateOverlapManager");
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
    if (cVar1 != '\0') goto LAB_1438c1bf6;
  }
  thunk_FUN_143719c70(0xf105d305);
  FUN_143873cc0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa0),
                *(longlong *)(param_1 + 0x10) + 0xc0);
  thunk_FUN_143719c70(0xb095fefc);
LAB_1438c1bf6:
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1c20 FUN_1438c1c20 body=103 status=ok
// SIG undefined FUN_1438c1c20(void)

void FUN_1438c1c20(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtUpdateStaleness");
  }
  FUN_1438c0080(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1c90 FUN_1438c1c90 body=103 status=ok
// SIG undefined FUN_1438c1c90(void)

void FUN_1438c1c90(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtUpdateVolumeStaleness");
  }
  FUN_1438c0140(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c1d00 FUN_1438c1d00 body=50 status=ok
// SIG undefined FUN_1438c1d00(void)

void FUN_1438c1d00(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 800);
  FUN_14387cae0(*(undefined8 *)(*param_2 + 8 + (longlong)param_3 * 0x10),
                *(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0xf8),lVar1 + 0x128);
  return;
}



// FUNCTION 1438c1d40 FUN_1438c1d40 body=43 status=ok
// SIG undefined FUN_1438c1d40(void)

void FUN_1438c1d40(longlong param_1,longlong *param_2,int param_3)

{
  FUN_143888120(*(undefined8 *)(*param_2 + 8 + (longlong)param_3 * 0x10),
                *(undefined8 *)(*(longlong *)(param_1 + 800) + 0xf8),
                *(longlong *)(param_1 + 800) + 0x158);
  return;
}



// FUNCTION 1438c1d70 FUN_1438c1d70 body=149 status=ok
// SIG undefined FUN_1438c1d70(void)

undefined8 * FUN_1438c1d70(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[0xf] = param_1 + 0x11;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000005;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80000005;
  *param_1 = hkaiPathRequestsTasks::ProcessPathRequestsTask::vftable;
  param_1[4] = hkaiPathRequestsTasks::ProcessPathRequestsTask::vftable;
  *(undefined4 *)(param_1 + 99) = uVar1;
  param_1[100] = param_2;
  FUN_14370c030(param_2);
  FUN_14370d870(param_1 + 0x65,0);
  return param_1;
}



// FUNCTION 1438c1e10 FUN_1438c1e10 body=293 status=ok
// SIG undefined FUN_1438c1e10(void)

void FUN_1438c1e10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x68) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0x14 + lVar5 * 0x18);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -6;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x6c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x60),0x18,*(uint *)(param_1 + 0x6c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x54)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x48),0x10,*(uint *)(param_1 + 0x54) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14370c150();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438c1f40 FUN_1438c1f40 body=221 status=ok
// SIG undefined FUN_1438c1f40(void)

void FUN_1438c1f40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x78) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x70) + 0x14 + lVar5 * 0x18);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),4,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -6;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x7c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x70),0x18,*(uint *)(param_1 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x80000000;
  FUN_1438c2020(param_1 + 0x38);
  FUN_1438c2020(param_1);
  return;
}



// FUNCTION 1438c2020 FUN_1438c2020 body=128 status=ok
// SIG undefined FUN_1438c2020(void)

void FUN_1438c2020(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x28),1,
                  *(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x18),1,
                  *(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1438c20a0 FUN_1438c20a0 body=9 status=ok
// SIG undefined FUN_1438c20a0(void)

void FUN_1438c20a0(longlong param_1)

{
  FUN_1438c2140(param_1 + -0x20);
  return;
}



// FUNCTION 1438c20b0 FUN_1438c20b0 body=139 status=ok
// SIG undefined FUN_1438c20b0(void)

longlong FUN_1438c20b0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438c1e10();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x78;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 1438c2140 FUN_1438c2140 body=162 status=ok
// SIG undefined FUN_1438c2140(void)

longlong FUN_1438c2140(longlong param_1,ulonglong param_2)

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



// FUNCTION 1438c21f0 FUN_1438c21f0 body=630 status=ok
// SIG undefined FUN_1438c21f0(void)

short * FUN_1438c21f0(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  short local_res8 [4];
  short local_res20;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TthkaiPathRequestsTasks::addFinalTasks");
  }
  local_res20 = param_4;
  if (*(char *)(param_3 + 0x70) != '\0') {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar5 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0x1ffff;
      puVar5[4] = hkReferencedTask::vftable;
      *puVar5 = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      puVar5[4] = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      puVar5[6] = param_3;
      FUN_14370c030(param_3);
    }
    FUN_143770130(param_2,local_res8,puVar5,0x40);
    sVar2 = local_res8[0];
    local_res20 = local_res8[0];
    if ((param_4 != -1) && (local_res8[0] != -1)) {
      uVar6 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
        FUN_14370c460(uVar6,(longlong *)(param_2 + 0x1a8),4);
      }
      psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
      *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
      *psVar1 = param_4;
      psVar1[1] = sVar2;
      local_res20 = local_res8[0];
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_14370c150(puVar5);
    }
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0x1ffff;
    puVar5[4] = hkReferencedTask::vftable;
    *puVar5 = hkaiPathRequestsTasks::FireEventsTask::vftable;
    puVar5[4] = hkaiPathRequestsTasks::FireEventsTask::vftable;
    puVar5[6] = param_3;
    FUN_14370c030(param_3);
  }
  FUN_143770130(param_2,param_1,puVar5,0x40);
  sVar2 = *param_1;
  if ((local_res20 != -1) && (sVar2 != -1)) {
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar6,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = local_res20;
    psVar1[1] = sVar2;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_14370c150(puVar5);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c2470 FUN_1438c2470 body=1078 status=ok
// SIG undefined FUN_1438c2470(void)

short * FUN_1438c2470(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  short local_res18 [4];
  short local_res20;
  short local_58 [2];
  short local_54 [2];
  short local_50 [4];
  longlong local_48;
  LPVOID local_40;
  
  local_res20 = param_4;
  local_40 = TlsGetValue(DAT_146b8198c);
  if (local_40 != (LPVOID)0x0) {
    FUN_14370d5c0(local_40,"TthkaiPathRequestsTasks::addPathRequestTasks");
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *(undefined4 *)(puVar5 + 2) = 0x1ffff;
    *puVar5 = hkaiPathRequestsTasks::PrePathRequestsTask::vftable;
    puVar5[4] = hkaiPathRequestsTasks::PrePathRequestsTask::vftable;
    puVar5[6] = 0;
    puVar5[7] = param_3;
    if (param_3 != 0) {
      FUN_14370c030(param_3);
    }
  }
  FUN_143770130(param_2,local_58,puVar5,0x40);
  sVar3 = local_58[0];
  sVar2 = local_res20;
  if ((local_res20 != -1) && (local_58[0] != -1)) {
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar6,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = sVar2;
    psVar1[1] = sVar3;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar7 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x350);
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_1438c1d70(lVar7,param_3);
  }
  local_48 = lVar7;
  FUN_143770200(param_2,local_54,lVar7,*(undefined4 *)(param_3 + 0x18),1,0x40);
  sVar2 = local_54[0];
  plVar10 = (longlong *)(param_2 + 0x1a8);
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar6,plVar10,4);
  }
  psVar1 = (short *)(*plVar10 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar1 = local_58[0];
  psVar1[1] = sVar2;
  puVar5[6] = lVar7;
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar8 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0x1ffff;
    *puVar8 = hkaiPathRequestsTasks::IncrementRequestPrioritiesTask::vftable;
    puVar8[4] = hkaiPathRequestsTasks::IncrementRequestPrioritiesTask::vftable;
    puVar8[6] = param_3;
    FUN_14370c030(param_3);
  }
  FUN_143770130(param_2,local_res18,puVar8,0x40);
  sVar2 = local_res18[0];
  uVar6 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar6,plVar10,4);
  }
  psVar1 = (short *)(*plVar10 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar1 = local_54[0];
  psVar1[1] = sVar2;
  if (*(char *)(param_3 + 0x70) == '\0') {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    puVar9 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      puVar9[1] = 0;
      *(undefined4 *)(puVar9 + 2) = 0x1ffff;
      *puVar9 = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      puVar9[4] = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      puVar9[6] = param_3;
      FUN_14370c030(param_3);
    }
    FUN_143770130(param_2,local_50,puVar9,0x40);
    sVar2 = local_50[0];
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar6,plVar10,4);
    }
    psVar1 = (short *)(*plVar10 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = local_res18[0];
    psVar1[1] = sVar2;
    *param_1 = local_50[0];
    if (puVar9 != (undefined8 *)0x0) {
      FUN_14370c150(puVar9);
    }
    lVar7 = local_48;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_14370c150(puVar8);
      lVar7 = local_48;
    }
  }
  else {
    *param_1 = local_res18[0];
    if (puVar8 != (undefined8 *)0x0) {
      FUN_14370c150(puVar8);
    }
  }
  if (lVar7 != 0) {
    FUN_14370c150(lVar7);
  }
  FUN_14370c150(puVar5);
  if (local_40 != (LPVOID)0x0) {
    FUN_14370d750(local_40,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c28b0 FUN_1438c28b0 body=506 status=ok
// SIG undefined FUN_1438c28b0(void)

void FUN_1438c28b0(undefined8 param_1,longlong param_2)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,"EtProcessPathRequests");
  }
  thunk_FUN_143719c70(0xf0028ca6);
  *(undefined4 *)(param_2 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_2 + 0x24)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_2 + 0x18),1,
                  *(uint *)(param_2 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0x80000000;
  thunk_FUN_143719c70(0x2559a1df);
  *(undefined4 *)(param_2 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_2 + 0x34)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_2 + 0x28),1,
                  *(uint *)(param_2 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0x80000000;
  thunk_FUN_143719c70(0x2917ef66);
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_2 + 0x5c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_2 + 0x50),1,
                  *(uint *)(param_2 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0x80000000;
  thunk_FUN_143719c70(0x41be08da);
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (-1 < (int)*(uint *)(param_2 + 0x6c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_2 + 0x60),1,
                  *(uint *)(param_2 + 0x6c) & 0x3fffffff);
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0x80000000;
  thunk_FUN_143719c70(0x66ed93bc);
  uVar2 = FUN_143703a50();
  iVar4 = *(int *)(param_2 + 0x78) + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    puVar5 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x14 + lVar6 * 0x18);
    do {
      uVar3 = FUN_143703a50();
      puVar5[-1] = 0;
      if (-1 < (int)*puVar5) {
        FUN_143702e10(uVar3,*(undefined8 *)(puVar5 + -3),4,*puVar5 & 0x3fffffff);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + -6;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  *(undefined4 *)(param_2 + 0x78) = 0;
  if (-1 < (int)*(uint *)(param_2 + 0x7c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(param_2 + 0x70),0x18,*(uint *)(param_2 + 0x7c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0x80000000;
  thunk_FUN_143719c70(0x52312641);
  return;
}



// FUNCTION 1438c2ab0 FUN_1438c2ab0 body=8 status=ok
// SIG undefined FUN_1438c2ab0(void)

char * FUN_1438c2ab0(void)

{
  return "IncrementRequestPriorities";
}



// FUNCTION 1438c2ac0 FUN_1438c2ac0 body=8 status=ok
// SIG undefined FUN_1438c2ac0(void)

char * FUN_1438c2ac0(void)

{
  return "NotifyFinishedPathRequests";
}



// FUNCTION 1438c2ad0 FUN_1438c2ad0 body=8 status=ok
// SIG undefined FUN_1438c2ad0(void)

char * FUN_1438c2ad0(void)

{
  return "PrePathRequests";
}



// FUNCTION 1438c2ae0 FUN_1438c2ae0 body=8 status=ok
// SIG undefined FUN_1438c2ae0(void)

char * FUN_1438c2ae0(void)

{
  return "ProcessPathRequests";
}



// FUNCTION 1438c2af0 FUN_1438c2af0 body=45 status=ok
// SIG undefined FUN_1438c2af0(void)

void FUN_1438c2af0(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtProcessPathRequests");
    return;
  }
  return;
}



// FUNCTION 1438c2b20 FUN_1438c2b20 body=381 status=ok
// SIG undefined FUN_1438c2b20(void)

longlong *
FUN_1438c2b20(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             undefined1 param_6,undefined4 param_7)

{
  longlong lVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TthkaiPathRequestsTasks::makeContext");
  }
  pvVar3 = TlsGetValue(DAT_146b7bf70);
  if (pvVar3 == (LPVOID)0x0) {
    pvVar3 = DAT_146b7bf68;
  }
  puVar4 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar3 + 0x58),0x78);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 2) = 0x1ffff;
    *puVar4 = hkaiPathRequestsTasks::Context::vftable;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 10) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x54) = 0x80000000;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x6c) = 0x80000000;
  }
  *param_1 = (longlong)puVar4;
  *(undefined4 *)(puVar4 + 3) = param_7;
  *(longlong *)(*param_1 + 0x20) = param_2;
  lVar1 = *param_1;
  if (param_3 != 0) {
    FUN_14370c030(param_3);
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar1 + 0x28) = param_3;
  lVar1 = *param_1;
  if (param_5 != 0) {
    FUN_14370c030(param_5);
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_14370c150();
  }
  *(longlong *)(lVar1 + 0x30) = param_5;
  *(undefined4 *)(*param_1 + 0x38) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(*param_1 + 0x3c) = *(undefined4 *)(param_4 + 0x30);
  *(undefined4 *)(*param_1 + 0x40) = *(undefined4 *)(param_4 + 0x34);
  *(bool *)(*param_1 + 0x58) = (*(ulonglong *)(param_2 + 0x78) & 0xfffffffffffffffc) != 0;
  *(undefined1 *)(*param_1 + 0x70) = param_6;
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c2ca0 FUN_1438c2ca0 body=287 status=ok
// SIG undefined FUN_1438c2ca0(void)

void FUN_1438c2ca0(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_94 = 0x80000000;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_84 = 0x80000000;
  local_5c = 0x80000000;
  local_4c = 0x80000000;
  local_3c = 0x80000000;
  FUN_1438c2af0(param_1 + -0x20,local_b8);
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
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res8,iVar1 + 1,local_res10);
      if (local_res8[0] < 0) {
        FUN_1438c28b0(param_1 + -0x20,local_b8);
        FUN_1438c1f40(local_b8);
        return;
      }
      uVar2 = (ulonglong)local_res10[0];
    }
    FUN_1438c32a0(param_1 + -0x20,local_b8,uVar2 & 0xffffffff);
  } while( true );
}



// FUNCTION 1438c2dc0 FUN_1438c2dc0 body=714 status=ok
// SIG undefined FUN_1438c2dc0(void)

void FUN_1438c2dc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  LPVOID pvVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TthkaiPathRequestsTasks::FireEvents");
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  puVar13 = *(undefined8 **)(lVar4 + 0x48);
  lVar5 = *(longlong *)(lVar4 + 0x20);
  puVar12 = puVar13 + (longlong)*(int *)(lVar4 + 0x50) * 2;
  for (; puVar13 != puVar12; puVar13 = puVar13 + 2) {
    uVar11 = 0;
    iVar3 = *(int *)(puVar13 + 1);
    uVar6 = *puVar13;
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (iVar3 == 0) {
      puVar8 = *(undefined8 **)(*(longlong *)(lVar4 + 0x20) + 0x228);
      uVar10 = (ulonglong)
               ((longlong)(puVar8 + *(int *)(*(longlong *)(lVar4 + 0x20) + 0x230)) +
               (7 - (longlong)puVar8)) >> 3;
      if (puVar8 + *(int *)(*(longlong *)(lVar4 + 0x20) + 0x230) < puVar8) {
        uVar10 = uVar11;
      }
      if (uVar10 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar8 + 0x70))((longlong *)*puVar8,uVar6);
          uVar11 = uVar11 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar11 != uVar10);
      }
      FUN_1438484d0(lVar5 + 0x28,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar6);
    }
    else if (iVar3 == 1) {
      puVar8 = *(undefined8 **)(*(longlong *)(lVar4 + 0x20) + 0x228);
      uVar10 = (ulonglong)
               ((longlong)(puVar8 + *(int *)(*(longlong *)(lVar4 + 0x20) + 0x230)) +
               (7 - (longlong)puVar8)) >> 3;
      if (puVar8 + *(int *)(*(longlong *)(lVar4 + 0x20) + 0x230) < puVar8) {
        uVar10 = uVar11;
      }
      if (uVar10 != 0) {
        do {
          (**(code **)(*(longlong *)*puVar8 + 0x60))();
          uVar11 = uVar11 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar11 != uVar10);
      }
    }
    else {
      puVar8 = *(undefined8 **)(*(longlong *)(lVar4 + 0x20) + 0x228);
      puVar1 = puVar8 + *(int *)(*(longlong *)(lVar4 + 0x20) + 0x230);
      if (iVar3 == 2) {
        uVar10 = (ulonglong)((longlong)puVar1 + (7 - (longlong)puVar8)) >> 3;
        if (puVar1 < puVar8) {
          uVar10 = uVar11;
        }
        if (uVar10 != 0) {
          do {
            (**(code **)(*(longlong *)*puVar8 + 0x68))((longlong *)*puVar8,uVar6);
            uVar11 = uVar11 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar11 != uVar10);
        }
        FUN_1438484d0(lVar5 + 0x30,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),uVar6);
      }
      else {
        uVar10 = (ulonglong)((longlong)puVar1 + (7 - (longlong)puVar8)) >> 3;
        if (puVar1 < puVar8) {
          uVar10 = uVar11;
        }
        if (uVar10 != 0) {
          do {
            (**(code **)(*(longlong *)*puVar8 + 0x58))();
            uVar11 = uVar11 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar11 != uVar10);
        }
      }
    }
  }
  puVar9 = *(undefined1 **)(*(longlong *)(param_1 + 0x10) + 0x60);
  puVar2 = puVar9 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x68) * 0x18;
  for (; puVar9 != puVar2; puVar9 = puVar9 + 0x18) {
    lVar4 = *(longlong *)(puVar9 + 8);
    local_48[0] = *puVar9;
    uStack_38 = lVar4 + (longlong)*(int *)(puVar9 + 0x10) * 4;
    local_58 = (undefined4)lVar4;
    uStack_54 = (undefined4)((ulonglong)lVar4 >> 0x20);
    local_40 = local_58;
    uStack_3c = uStack_54;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    FUN_1438484d0(lVar4 + 0x78,lVar4,local_48);
  }
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d750(pvVar7,&DAT_145b8eda0);
    return;
  }
  return;
}



// FUNCTION 1438c3090 FUN_1438c3090 body=95 status=ok
// SIG undefined FUN_1438c3090(void)

void FUN_1438c3090(longlong param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtIncrementRequestPriorities");
  }
  FUN_143877420(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c30f0 FUN_1438c30f0 body=167 status=ok
// SIG undefined FUN_1438c30f0(void)

void FUN_1438c30f0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TtNotifyFinishedPathRequests");
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  plVar5 = plVar4 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x50) * 2;
  for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
    iVar1 = (int)plVar4[1];
    if ((iVar1 != 0) &&
       (((iVar1 == 1 || (iVar1 != 2)) && (plVar2 = (longlong *)*plVar4, (char)plVar2[4] == '\x02')))
       ) {
      (**(code **)(*plVar2 + 0x20))(plVar2,plVar2[5],plVar2[6]);
    }
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c31a0 FUN_1438c31a0 body=144 status=ok
// SIG undefined FUN_1438c31a0(void)

void FUN_1438c31a0(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TtPrePathRequests");
  }
  FUN_143dfd100();
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_1438775c0(*(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x38),
                *(undefined4 *)(lVar1 + 0x3c),*(undefined4 *)(lVar1 + 0x40),lVar1 + 0x48);
  FUN_143df9d10(*(longlong *)(param_1 + 0x10) + 0x30,
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x318),
                *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x50));
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c3230 FUN_1438c3230 body=103 status=ok
// SIG undefined FUN_1438c3230(void)

void FUN_1438c3230(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtProcessPathRequests");
  }
  FUN_1438c2ca0(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c32a0 FUN_1438c32a0 body=535 status=ok
// SIG undefined FUN_1438c32a0(void)

void FUN_1438c32a0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 local_res18 [16];
  undefined8 local_28;
  int local_20;
  uint local_1c;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TtProcessPathRequestsTask");
  }
  FUN_143dfd100();
  lVar4 = *(longlong *)(param_1 + 800);
  puVar8 = (undefined8 *)((longlong)param_3 * 0x10 + *(longlong *)(lVar4 + 0x48));
  iVar2 = *(int *)(puVar8 + 1);
  if (iVar2 == 0) {
    local_1c = 0x80000000;
    local_28 = 0;
    local_20 = 0;
    puVar7 = &local_28;
    if (*(char *)(lVar4 + 0x58) == '\0') {
      puVar7 = (undefined8 *)0x0;
    }
    FUN_143877b40(*puVar8,*(undefined8 *)(lVar4 + 0x28),0xffffffff,param_2,param_2 + 0x38,puVar7,
                  local_res18);
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        FUN_143877db0(*puVar8,*(undefined8 *)(lVar4 + 0x28),0xffffffff);
      }
      else {
        FUN_1438779b0();
      }
      goto LAB_1438c3486;
    }
    local_1c = 0x80000000;
    local_28 = 0;
    local_20 = 0;
    puVar7 = &local_28;
    if (*(char *)(lVar4 + 0x58) == '\0') {
      puVar7 = (undefined8 *)0x0;
    }
    FUN_1438777c0(*puVar8,*(undefined8 *)(lVar4 + 0x28),0xffffffff,param_2,param_2 + 0x38,puVar7,
                  local_res18);
  }
  if ((*(char *)(*(longlong *)(param_1 + 800) + 0x58) != '\0') && (local_20 != 0)) {
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x78) == (*(uint *)(param_2 + 0x7c) & 0x3fffffff)) {
      FUN_14370c460(uVar6,param_2 + 0x70,0x18);
    }
    lVar4 = *(longlong *)(param_2 + 0x70) + (longlong)*(int *)(param_2 + 0x78) * 0x18;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined4 *)(lVar4 + 0x14) = 0x80000000;
      *(undefined4 *)(lVar4 + 0x10) = 0;
    }
    puVar1 = (undefined1 *)
             (*(longlong *)(param_2 + 0x70) + (longlong)*(int *)(param_2 + 0x78) * 0x18);
    *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + 1;
    *puVar1 = local_res18[0];
    uVar6 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = local_28;
    iVar2 = *(int *)(puVar1 + 0x10);
    *(int *)(puVar1 + 0x10) = local_20;
    uVar3 = *(uint *)(puVar1 + 0x14);
    *(uint *)(puVar1 + 0x14) = local_1c;
    local_28 = uVar6;
    local_20 = iVar2;
    local_1c = uVar3;
  }
  uVar6 = FUN_143703a50();
  local_20 = 0;
  if (-1 < (int)local_1c) {
    FUN_143702e10(uVar6,local_28,4,local_1c & 0x3fffffff);
  }
LAB_1438c3486:
  thunk_FUN_143719c70(0x8736022c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c34c0 FUN_1438c34c0 body=118 status=ok
// SIG undefined FUN_1438c34c0(void)

undefined8 * FUN_1438c34c0(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateNavigatorsTask>::
             vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateNavigatorsTask>::
               vftable;
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



// FUNCTION 1438c3540 FUN_1438c3540 body=118 status=ok
// SIG undefined FUN_1438c3540(void)

undefined8 * FUN_1438c3540(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask>
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



// FUNCTION 1438c35c0 FUN_1438c35c0 body=390 status=ok
// SIG undefined FUN_1438c35c0(void)

void FUN_1438c35c0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x58) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x50) + 8 + lVar3 * 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),0x10,*(uint *)(param_1 + 0x5c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar2 = *(int *)(param_1 + 0x48) + -1;
  lVar3 = (longlong)iVar2;
  if (-1 < iVar2) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar3 * 0x10);
    do {
      if (*plVar4 != 0) {
        FUN_14370c150();
      }
      plVar4 = plVar4 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),0x10,*(uint *)(param_1 + 0x4c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x30),8,*(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x2c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x20),8,*(uint *)(param_1 + 0x2c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438c3748 FUN_1438c3748 body=9 status=ok
// SIG undefined FUN_1438c3748(void)

void FUN_1438c3748(longlong param_1)

{
  FUN_1438c37f0(param_1 + -0x20);
  return;
}



// FUNCTION 1438c3760 FUN_1438c3760 body=139 status=ok
// SIG undefined FUN_1438c3760(void)

longlong FUN_1438c3760(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438c35c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x68;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
    }
  }
  return param_1;
}



// FUNCTION 1438c37f0 FUN_1438c37f0 body=174 status=ok
// SIG undefined FUN_1438c37f0(void)

longlong FUN_1438c37f0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  if (*(longlong *)(param_1 + 0x328) != 0) {
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



// FUNCTION 1438c38a0 FUN_1438c38a0 body=361 status=ok
// SIG undefined FUN_1438c38a0(void)

short * FUN_1438c38a0(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TthkaiNavigatorUpdateTasks::addFinalTasks");
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *(undefined2 *)(puVar5 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar5 + 0x12) = 1;
    *puVar5 = hkaiNavigatorUpdateTasks::FireEventsTask::vftable;
    puVar5[4] = hkaiNavigatorUpdateTasks::FireEventsTask::vftable;
    puVar5[6] = param_3;
    if (param_3 != 0) {
      FUN_14370c030(param_3);
    }
  }
  FUN_143770130(param_2,param_1,puVar5,0x40);
  sVar2 = *param_1;
  if ((param_4 != -1) && (sVar2 != -1)) {
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar6,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = param_4;
    psVar1[1] = sVar2;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_14370c150(puVar5);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c3a10 FUN_1438c3a10 body=1349 status=ok
// SIG undefined FUN_1438c3a10(void)

short * FUN_1438c3a10(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  longlong *plVar1;
  short *psVar2;
  undefined2 *puVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  LPVOID pvVar7;
  LPVOID pvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  short *local_res8;
  short local_res18 [4];
  short local_res20;
  short local_48 [8];
  
  local_res8 = param_1;
  local_res20 = param_4;
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TthkaiNavigatorUpdateTasks::addTasks");
  }
  FUN_1437702e0(param_2,param_1,0,0x40);
  if (*(int *)(param_3 + 0x28) != 0) {
    pvVar8 = TlsGetValue(DAT_146b7bf70);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = DAT_146b7bf68;
    }
    puVar9 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar8 + 0x58),0x330);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_1438c34c0(puVar9,*(undefined4 *)(param_3 + 0x60),*(undefined4 *)(param_3 + 0x28));
      *puVar9 = hkaiNavigatorUpdateTasks::UpdateNavigatorsTask::vftable;
      puVar9[4] = hkaiNavigatorUpdateTasks::UpdateNavigatorsTask::vftable;
      puVar9[0x65] = param_3;
      FUN_14370c030(param_3);
    }
    FUN_143770200(param_2,local_res18,puVar9,*(undefined4 *)(param_3 + 0x60),1,0x40);
    sVar5 = local_res20;
    sVar4 = local_res18[0];
    if ((local_res20 != -1) && (local_res18[0] != -1)) {
      uVar10 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
        FUN_14370c460(uVar10,(longlong *)(param_2 + 0x1a8),4);
      }
      psVar2 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
      *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
      *psVar2 = sVar5;
      psVar2[1] = sVar4;
    }
    pvVar8 = TlsGetValue(DAT_146b7bf70);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = DAT_146b7bf68;
    }
    puVar11 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar8 + 0x58),0x40);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11[1] = 0;
      *(undefined2 *)(puVar11 + 2) = 0xffff;
      *(undefined2 *)((longlong)puVar11 + 0x12) = 1;
      *puVar11 = hkaiNavigatorUpdateTasks::AddStalenessMeshPathRequestsToManagerTask::vftable;
      puVar11[4] = hkaiNavigatorUpdateTasks::AddStalenessMeshPathRequestsToManagerTask::vftable;
      puVar11[6] = param_3;
      FUN_14370c030(param_3);
    }
    FUN_143770130(param_2,local_48,puVar11,0x40);
    sVar5 = local_48[0];
    sVar4 = local_res18[0];
    plVar1 = (longlong *)(param_2 + 0x1a8);
    uVar10 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar10,plVar1,4);
    }
    psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = sVar4;
    psVar2[1] = sVar5;
    sVar4 = *local_res8;
    uVar10 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar10,plVar1,4);
    }
    psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = local_48[0];
    psVar2[1] = sVar4;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_14370c150(puVar11);
    }
    param_1 = local_res8;
    if (puVar9 != (undefined8 *)0x0) {
      FUN_14370c150(puVar9);
      param_1 = local_res8;
    }
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    pvVar8 = TlsGetValue(DAT_146b7bf70);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = DAT_146b7bf68;
    }
    puVar9 = (undefined8 *)
             (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                       (*(longlong **)((longlong)pvVar8 + 0x58),0x330);
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_1438c3540(puVar9,*(undefined4 *)(param_3 + 0x60),*(undefined4 *)(param_3 + 0x38));
      *puVar9 = hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask::vftable;
      puVar9[4] = hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask::vftable;
      puVar9[0x65] = param_3;
      FUN_14370c030(param_3);
    }
    FUN_143770200(param_2,&local_res8,puVar9,*(undefined4 *)(param_3 + 0x60),1,0x40);
    sVar4 = local_res20;
    if ((local_res20 != -1) && (sVar5 = (short)local_res8, (short)local_res8 != -1)) {
      uVar10 = FUN_143703a50();
      if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
        FUN_14370c460(uVar10,(longlong *)(param_2 + 0x1a8),4);
      }
      psVar2 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
      *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
      *psVar2 = sVar4;
      psVar2[1] = sVar5;
    }
    pvVar8 = TlsGetValue(DAT_146b7bf70);
    if (pvVar8 == (LPVOID)0x0) {
      pvVar8 = DAT_146b7bf68;
    }
    puVar11 = (undefined8 *)
              (**(code **)(**(longlong **)((longlong)pvVar8 + 0x58) + 8))
                        (*(longlong **)((longlong)pvVar8 + 0x58),0x40);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11[1] = 0;
      *(undefined2 *)(puVar11 + 2) = 0xffff;
      *(undefined2 *)((longlong)puVar11 + 0x12) = 1;
      *puVar11 = hkaiNavigatorUpdateTasks::AddStalenessVolumePathRequestsToManagerTask::vftable;
      puVar11[4] = hkaiNavigatorUpdateTasks::AddStalenessVolumePathRequestsToManagerTask::vftable;
      puVar11[6] = param_3;
      FUN_14370c030(param_3);
    }
    FUN_143770130(param_2,local_res18,puVar11,0x40);
    sVar4 = local_res18[0];
    plVar1 = (longlong *)(param_2 + 0x1a8);
    uVar6 = (short)local_res8;
    uVar10 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar10,plVar1,4);
    }
    puVar3 = (undefined2 *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *puVar3 = uVar6;
    puVar3[1] = sVar4;
    sVar4 = *param_1;
    uVar10 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar10,plVar1,4);
    }
    psVar2 = (short *)(*plVar1 + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar2 = local_res18[0];
    psVar2[1] = sVar4;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_14370c150(puVar11);
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_14370c150(puVar9);
    }
  }
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d750(pvVar7,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c3f60 FUN_1438c3f60 body=8 status=ok
// SIG undefined FUN_1438c3f60(void)

char * FUN_1438c3f60(void)

{
  return "AddStalenessMeshPathRequestsToManager";
}



// FUNCTION 1438c3f70 FUN_1438c3f70 body=8 status=ok
// SIG undefined FUN_1438c3f70(void)

char * FUN_1438c3f70(void)

{
  return "AddStalenessVolumePathRequestsToManager";
}



// FUNCTION 1438c3f80 FUN_1438c3f80 body=8 status=ok
// SIG undefined FUN_1438c3f80(void)

char * FUN_1438c3f80(void)

{
  return "UpdateNavigators";
}



// FUNCTION 1438c3f90 FUN_1438c3f90 body=8 status=ok
// SIG undefined FUN_1438c3f90(void)

char * FUN_1438c3f90(void)

{
  return "UpdateVolumeNavigators";
}



// FUNCTION 1438c3fa0 FUN_1438c3fa0 body=697 status=ok
// SIG undefined FUN_1438c3fa0(void)

longlong *
FUN_1438c3fa0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TthkaiNavigatorUpdateTasks::makeContext");
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x68);
  puVar9 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = 0;
    *puVar5 = hkaiNavigatorUpdateTasks::Context::vftable;
    *(undefined4 *)(puVar5 + 2) = 0x1ffff;
    puVar5[3] = 0;
    puVar5[4] = 0;
    *(undefined4 *)(puVar5 + 5) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0x80000000;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0x80000000;
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = 0x80000000;
    puVar5[10] = 0;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar5 + 0x5c) = 0x80000000;
    puVar9 = puVar5;
  }
  *param_1 = (longlong)puVar9;
  puVar9[3] = param_2;
  lVar6 = UFoliageType_InstancedStaticMesh::GetStaticMesh(param_2);
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar6 + 0x20);
  uVar12 = (longlong)*(int *)(lVar6 + 0x28) * 8 >> 3;
  uVar7 = FUN_143703a50();
  iVar11 = (int)uVar12;
  if ((int)(*(uint *)(lVar1 + 0x2c) & 0x3fffffff) < iVar11) {
    FUN_14370c310(uVar7,lVar1 + 0x20,uVar12 & 0xffffffff,8);
  }
  iVar10 = iVar11;
  if (*(int *)(lVar1 + 0x28) < iVar11) {
    iVar10 = *(int *)(lVar1 + 0x28);
  }
  FUN_143738e40(*(undefined8 *)(lVar1 + 0x20),lVar2,iVar10);
  puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar10 * 8);
  lVar6 = (longlong)(iVar11 - iVar10);
  if (0 < iVar11 - iVar10) {
    lVar13 = (longlong)iVar10 * 8 - (longlong)puVar9;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = *(undefined8 *)((longlong)puVar9 + lVar13 + lVar2);
      }
      puVar9 = puVar9 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(lVar1 + 0x28) = iVar11;
  lVar6 = UGeometryCacheComponent::GetGeometryCache(param_2);
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar6 + 0x20);
  uVar12 = (longlong)*(int *)(lVar6 + 0x28) * 8 >> 3;
  uVar7 = FUN_143703a50();
  iVar11 = (int)uVar12;
  if ((int)(*(uint *)(lVar1 + 0x3c) & 0x3fffffff) < iVar11) {
    FUN_14370c310(uVar7,lVar1 + 0x30,uVar12 & 0xffffffff,8);
  }
  iVar10 = iVar11;
  if (*(int *)(lVar1 + 0x38) < iVar11) {
    iVar10 = *(int *)(lVar1 + 0x38);
  }
  FUN_143738e40(*(undefined8 *)(lVar1 + 0x30),lVar2,iVar10);
  puVar9 = (undefined8 *)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar10 * 8);
  lVar6 = (longlong)(iVar11 - iVar10);
  if (0 < iVar11 - iVar10) {
    lVar13 = (longlong)iVar10 * 8 - (longlong)puVar9;
    do {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = *(undefined8 *)(lVar13 + lVar2 + (longlong)puVar9);
      }
      puVar9 = puVar9 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(lVar1 + 0x38) = iVar11;
  *(undefined4 *)(*param_1 + 0x60) = param_5;
  lVar1 = *param_1;
  iVar11 = *(int *)(lVar1 + 0x28);
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)(lVar1 + 0x4c) & 0x3fffffff;
  if ((int)uVar8 < iVar11) {
    iVar10 = uVar8 * 2;
    if (iVar11 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_14370c310(uVar7,lVar1 + 0x40,iVar11,0x10);
  }
  lVar1 = *param_1;
  iVar11 = *(int *)(lVar1 + 0x38);
  uVar7 = FUN_143703a50();
  uVar8 = *(uint *)(lVar1 + 0x5c) & 0x3fffffff;
  if ((int)uVar8 < iVar11) {
    iVar10 = uVar8 * 2;
    if (iVar11 < iVar10) {
      iVar11 = iVar10;
    }
    FUN_14370c310(uVar7,lVar1 + 0x50,iVar11,0x10);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c4260 FUN_1438c4260 body=182 status=ok
// SIG undefined FUN_1438c4260(void)

void FUN_1438c4260(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar3 = (ulonglong *)
             ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x58)) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    if ((uint)uVar2 < (uint)(uVar2 >> 0x20)) {
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res8,iVar1 + 1,local_res10);
      if (local_res8[0] < 0) {
        return;
      }
      uVar2 = (ulonglong)local_res10[0];
    }
    FUN_14385ba00(*(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x308) + 0x20) + (longlong)(int)uVar2 * 8)
                  ,*(longlong *)(param_1 + 0x308) + 0x40);
  } while( true );
}



// FUNCTION 1438c4320 FUN_1438c4320 body=182 status=ok
// SIG undefined FUN_1438c4320(void)

void FUN_1438c4320(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  int local_res8 [2];
  uint local_res10 [2];
  
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar3 = (ulonglong *)
             ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x58)) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    if ((uint)uVar2 < (uint)(uVar2 >> 0x20)) {
      local_res8[0] = 0;
      local_res10[0] = (uint)uVar2;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res8,iVar1 + 1,local_res10);
      if (local_res8[0] < 0) {
        return;
      }
      uVar2 = (ulonglong)local_res10[0];
    }
    FUN_14385f3b0(*(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x308) + 0x30) + (longlong)(int)uVar2 * 8)
                  ,*(longlong *)(param_1 + 0x308) + 0x50);
  } while( true );
}



// FUNCTION 1438c43e0 FUN_1438c43e0 body=220 status=ok
// SIG undefined FUN_1438c43e0(void)

void FUN_1438c43e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong lStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_18 = *(longlong *)(lVar1 + 0x40);
  lStack_10 = (longlong)*(int *)(lVar1 + 0x48) * 0x10 + local_18;
  FUN_143876bc0(*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x270),&local_18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = FUN_143703a50();
  iVar3 = *(int *)(lVar1 + 0x48) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x40) + 8 + lVar4 * 0x10);
    do {
      if (*plVar5 != 0) {
        FUN_14370c150();
      }
      plVar5 = plVar5 + -2;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(lVar1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(lVar1 + 0x4c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(lVar1 + 0x40),0x10,*(uint *)(lVar1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0x80000000;
  return;
}



// FUNCTION 1438c44c0 FUN_1438c44c0 body=220 status=ok
// SIG undefined FUN_1438c44c0(void)

void FUN_1438c44c0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong lStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_18 = *(longlong *)(lVar1 + 0x50);
  lStack_10 = (longlong)*(int *)(lVar1 + 0x58) * 0x10 + local_18;
  FUN_143876c80(*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x270),&local_18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  uVar2 = FUN_143703a50();
  iVar3 = *(int *)(lVar1 + 0x58) + -1;
  lVar4 = (longlong)iVar3;
  if (-1 < iVar3) {
    plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x50) + 8 + lVar4 * 0x10);
    do {
      if (*plVar5 != 0) {
        FUN_14370c150();
      }
      plVar5 = plVar5 + -2;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(lVar1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(lVar1 + 0x5c)) {
    FUN_143702e10(uVar2,*(undefined8 *)(lVar1 + 0x50),0x10,*(uint *)(lVar1 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined4 *)(lVar1 + 0x5c) = 0x80000000;
  return;
}



// FUNCTION 1438c45a0 FUN_1438c45a0 body=243 status=ok
// SIG undefined FUN_1438c45a0(void)

void FUN_1438c45a0(longlong param_1)

{
  undefined8 *puVar1;
  LPVOID pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = TlsGetValue(DAT_146b8198c);
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar2,"TthkaiNavigatorUpdateTasks::FireEvents");
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x28) != 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) != 0)) {
    FUN_143dfd100();
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x20);
    puVar1 = puVar3 + *(int *)(*(longlong *)(param_1 + 0x10) + 0x28);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      FUN_14385c460(*puVar3,*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x440);
    }
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x30);
    puVar1 = puVar3 + *(int *)(*(longlong *)(param_1 + 0x10) + 0x38);
    for (; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      FUN_14385f710(*puVar3,*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x480);
    }
  }
  if (pvVar2 != (LPVOID)0x0) {
    FUN_14370d750(pvVar2,&DAT_145b8eda0);
    return;
  }
  return;
}



// FUNCTION 1438c46a0 FUN_1438c46a0 body=103 status=ok
// SIG undefined FUN_1438c46a0(void)

void FUN_1438c46a0(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtUpdateNavigators");
  }
  FUN_1438c4260(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c4710 FUN_1438c4710 body=103 status=ok
// SIG undefined FUN_1438c4710(void)

void FUN_1438c4710(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtUpdateVolumeNavigators");
  }
  FUN_1438c4320(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c4780 FUN_1438c4780 body=135 status=ok
// SIG undefined FUN_1438c4780(void)

undefined8 * FUN_1438c4780(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[0xf] = param_1 + 0x11;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80000005;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80000005;
  *param_1 = hkaiNavMeshClearanceCacheFillingTasks::CalculateClearanceTask::vftable;
  param_1[4] = hkaiNavMeshClearanceCacheFillingTasks::CalculateClearanceTask::vftable;
  *(undefined4 *)(param_1 + 99) = uVar1;
  param_1[100] = param_2;
  FUN_14370c030(param_2);
  return param_1;
}



// FUNCTION 1438c4810 FUN_1438c4810 body=71 status=ok
// SIG undefined FUN_1438c4810(void)

undefined8 * FUN_1438c4810(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *param_1 = hkaiNavMeshClearanceCacheFillingTasks::GetUncalculatedClearanceFacesTask::vftable;
  param_1[4] = hkaiNavMeshClearanceCacheFillingTasks::GetUncalculatedClearanceFacesTask::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  param_1[6] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  return param_1;
}



// FUNCTION 1438c4860 FUN_1438c4860 body=273 status=ok
// SIG undefined FUN_1438c4860(void)

void FUN_1438c4860(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x50),0x10,*(uint *)(param_1 + 0x5c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_143703a50();
  iVar3 = *(int *)(param_1 + 0x48) + -1;
  lVar5 = (longlong)iVar3;
  if (-1 < iVar3) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x40) + 0xc + lVar5 * 0x10);
    do {
      uVar2 = FUN_143703a50();
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar4 + -3),0x18,*puVar4 & 0x3fffffff);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),0x10,*(uint *)(param_1 + 0x4c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438c4980 FUN_1438c4980 body=139 status=ok
// SIG undefined FUN_1438c4980(void)

longlong FUN_1438c4980(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1438c4860();
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



// FUNCTION 1438c4a10 FUN_1438c4a10 body=356 status=ok
// SIG undefined FUN_1438c4a10(void)

short * FUN_1438c4a10(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TthkaiNavMeshClearanceCacheFillingTasks::addFinalTasks");
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar5[1] = 0;
    *(undefined2 *)(puVar5 + 2) = 0xffff;
    *(undefined2 *)((longlong)puVar5 + 0x12) = 1;
    *puVar5 = hkaiNavMeshClearanceCacheFillingTasks::FireEventsTask::vftable;
    puVar5[4] = hkaiNavMeshClearanceCacheFillingTasks::FireEventsTask::vftable;
    puVar5[6] = param_3;
    if (param_3 != 0) {
      FUN_14370c030(param_3);
    }
  }
  FUN_143770130(param_2,param_1,puVar5,0x40);
  if (param_4 != -1) {
    sVar2 = *param_1;
    uVar6 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar6,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = param_4;
    psVar1[1] = sVar2;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_14370c150(puVar5);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c4b80 FUN_1438c4b80 body=516 status=ok
// SIG undefined FUN_1438c4b80(void)

short * FUN_1438c4b80(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  short local_res8 [4];
  longlong local_res10;
  
  local_res10 = param_2;
  pvVar3 = TlsGetValue(DAT_146b8198c);
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar3,"TthkaiNavMeshClearanceCacheFillingTasks::addTasks");
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x40);
  lVar8 = 0;
  lVar6 = lVar8;
  if (lVar5 != 0) {
    lVar6 = FUN_1438c4810(lVar5,param_3);
  }
  FUN_143770130(param_2,local_res8,lVar6,0x40);
  sVar2 = local_res8[0];
  if ((param_4 != -1) && (local_res8[0] != -1)) {
    uVar7 = FUN_143703a50();
    if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
      FUN_14370c460(uVar7,(longlong *)(param_2 + 0x1a8),4);
    }
    psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
    *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
    *psVar1 = param_4;
    psVar1[1] = sVar2;
    param_2 = local_res10;
  }
  pvVar4 = TlsGetValue(DAT_146b7bf70);
  if (pvVar4 == (LPVOID)0x0) {
    pvVar4 = DAT_146b7bf68;
  }
  lVar5 = (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar4 + 0x58),0x330);
  if (lVar5 != 0) {
    lVar8 = FUN_1438c4780(lVar5,param_3);
  }
  FUN_143770200(param_2,param_1,lVar8,*(undefined4 *)(param_3 + 0x18),1,0x40);
  sVar2 = *param_1;
  uVar7 = FUN_143703a50();
  if (*(uint *)(param_2 + 0x1b0) == (*(uint *)(param_2 + 0x1b4) & 0x3fffffff)) {
    FUN_14370c460(uVar7,(longlong *)(param_2 + 0x1a8),4);
  }
  psVar1 = (short *)(*(longlong *)(param_2 + 0x1a8) + (longlong)*(int *)(param_2 + 0x1b0) * 4);
  *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
  *psVar1 = local_res8[0];
  psVar1[1] = sVar2;
  *(longlong *)(param_3 + 0x60) = lVar8;
  if (lVar8 != 0) {
    FUN_14370c150(lVar8);
  }
  if (lVar6 != 0) {
    FUN_14370c150(lVar6);
  }
  if (pvVar3 != (LPVOID)0x0) {
    FUN_14370d750(pvVar3,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c4d90 FUN_1438c4d90 body=1296 status=ok
// SIG undefined FUN_1438c4d90(void)

void FUN_1438c4d90(longlong param_1,undefined8 param_2,uint param_3,byte *param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff30;
  undefined4 uVar15;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  longlong local_a8;
  undefined4 local_a0;
  uint local_9c;
  longlong local_98;
  uint local_90;
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  longlong local_78;
  uint local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  uVar7 = param_3 & 0x3fffff;
  lVar11 = *(longlong *)((ulonglong)(param_3 >> 0x16) * 0x100 + *(longlong *)(param_1 + 0x38));
  lVar2 = *(longlong *)(lVar11 + 0x18);
  if (*(int *)(lVar2 + 0x108) == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = *(byte *)((ulonglong)uVar7 + *(longlong *)(lVar2 + 0x100));
  }
  if ((bVar9 & 1) == 0) {
    puVar1 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + (ulonglong)*param_4 * 0x18);
    if (*(char *)(puVar1 + 2) == '\x01') {
      uVar3 = *puVar1;
    }
    else {
      uVar3 = FUN_143833c50();
    }
    lVar11 = *(longlong *)(lVar11 + 0x18);
    puVar4 = (undefined4 *)
             FUN_14384fb00(*(undefined8 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x20),
                           lVar11 + 0xb0,lVar11 + 0xd0,*(undefined8 *)(lVar11 + 0x48),lVar11 + 0x120
                           ,lVar11 + 0x140,lVar11 + 0x90,
                           CONCAT44(uVar14,param_3) & 0xffffffff003fffff,
                           CONCAT44(uVar15,*(undefined4 *)(lVar11 + 0x50)),&local_50);
    uVar8 = (uint)*(short *)(puVar4 + 2);
    local_88 = 0;
    local_80 = 0;
    local_7c = 0x80000000;
    local_70 = uVar8;
    if (*(short *)(puVar4 + 2) == 0) {
      local_88 = 0;
    }
    else {
      pvVar5 = TlsGetValue(DAT_146b7bf70);
      if (pvVar5 == (LPVOID)0x0) {
        pvVar5 = DAT_146b7bf68;
      }
      uVar6 = uVar8 * 8 + 0x7f & 0xffffff80;
      lVar11 = *(longlong *)((longlong)pvVar5 + 0x18);
      uVar10 = (int)uVar6 + lVar11;
      if ((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar6) ||
         (*(ulonglong *)((longlong)pvVar5 + 0x20) < uVar10)) {
        local_88 = FUN_1437138c0(pvVar5);
      }
      else {
        *(ulonglong *)((longlong)pvVar5 + 0x18) = uVar10;
        local_88 = lVar11;
      }
    }
    local_7c = uVar8 | 0x80000000;
    uVar8 = (int)*(short *)(puVar4 + 2) + (int)*(short *)((longlong)puVar4 + 10);
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 0x80000000;
    local_90 = uVar8;
    local_78 = local_88;
    if (uVar8 == 0) {
      local_a8 = 0;
    }
    else {
      pvVar5 = TlsGetValue(DAT_146b7bf70);
      if (pvVar5 == (LPVOID)0x0) {
        pvVar5 = DAT_146b7bf68;
      }
      uVar6 = uVar8 * 8 + 0x7f & 0xffffff80;
      lVar11 = *(longlong *)((longlong)pvVar5 + 0x18);
      uVar10 = (int)uVar6 + lVar11;
      if ((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar6) ||
         (*(ulonglong *)((longlong)pvVar5 + 0x20) < uVar10)) {
        local_a8 = FUN_1437138c0(pvVar5);
      }
      else {
        *(ulonglong *)((longlong)pvVar5 + 0x18) = uVar10;
        local_a8 = lVar11;
      }
    }
    local_9c = uVar8 | 0x80000000;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0x80000000;
    local_98 = local_a8;
    thunk_FUN_143719c70(0xc802472d);
    local_48 = *(undefined4 *)(param_4 + 0x14);
    puVar12 = puVar4;
    uStack_44 = local_48;
    uStack_40 = local_48;
    uStack_3c = local_48;
    FUN_143892b50(param_1,*(undefined8 *)(param_4 + 8),*(undefined4 *)(param_4 + 0x10),param_3,
                  puVar4,local_50,param_2,&local_48,&local_88,&local_a8,&local_b8,param_5);
    uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
    thunk_FUN_143719c70(0x6d3b7d11);
    FUN_143835c40(uVar3,&local_88);
    local_60 = uVar7;
    FUN_1438358d0(uVar3,&local_60,&local_b8);
    local_5c = puVar4[1];
    local_58[0] = *puVar4;
    FUN_143835b80(uVar3,local_58,(int)*(short *)(puVar4 + 2),&local_5c,
                  CONCAT44(uVar13,(int)*(short *)((longlong)puVar4 + 10)),&local_a8);
    local_b0 = 0;
    if (-1 < (int)local_ac) {
      FUN_143702e10(&PTR_vftable_1467f0638,local_b8,4,local_ac & 0x3fffffff);
    }
    uVar7 = local_90;
    lVar11 = local_98;
    if (local_98 == local_a8) {
      local_a0 = 0;
    }
    local_b8 = 0;
    local_ac = 0x80000000;
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    uVar7 = uVar7 * 8 + 0x7f & 0xffffff80;
    if (((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar7) ||
        ((int)uVar7 + lVar11 != *(longlong *)((longlong)pvVar5 + 0x18))) ||
       (*(longlong *)((longlong)pvVar5 + 0x28) == lVar11)) {
      FUN_143713ff0(pvVar5,lVar11);
    }
    else {
      *(longlong *)((longlong)pvVar5 + 0x18) = lVar11;
    }
    uVar3 = FUN_143703a50();
    local_a0 = 0;
    if (-1 < (int)local_9c) {
      FUN_143702e10(uVar3,local_a8,8,local_9c & 0x3fffffff);
    }
    uVar7 = local_70;
    lVar11 = local_78;
    if (local_78 == local_88) {
      local_80 = 0;
    }
    local_a8 = 0;
    local_9c = 0x80000000;
    pvVar5 = TlsGetValue(DAT_146b7bf70);
    if (pvVar5 == (LPVOID)0x0) {
      pvVar5 = DAT_146b7bf68;
    }
    uVar7 = uVar7 * 8 + 0x7f & 0xffffff80;
    if (((*(int *)((longlong)pvVar5 + 0x10) < (int)uVar7) ||
        ((int)uVar7 + lVar11 != *(longlong *)((longlong)pvVar5 + 0x18))) ||
       (*(longlong *)((longlong)pvVar5 + 0x28) == lVar11)) {
      FUN_143713ff0(pvVar5,lVar11);
    }
    else {
      *(longlong *)((longlong)pvVar5 + 0x18) = lVar11;
    }
    uVar3 = FUN_143703a50();
    local_80 = 0;
    if (-1 < (int)local_7c) {
      FUN_143702e10(uVar3,local_88,8,local_7c & 0x3fffffff);
    }
  }
  else {
    if (*(int *)(lVar2 + 0x108) == 0) {
      bVar9 = 0;
    }
    else {
      bVar9 = *(byte *)((ulonglong)uVar7 + *(longlong *)(lVar2 + 0x100));
    }
    if ((bVar9 & 2) == 0) {
      puVar1 = (undefined8 *)(*(longlong *)(lVar11 + 0x30) + (ulonglong)*param_4 * 0x18);
      if (*(char *)(puVar1 + 2) == '\x01') {
        uVar3 = *puVar1;
      }
      else {
        uVar3 = FUN_143833c50();
      }
      lVar2 = *(longlong *)(lVar11 + 0x18);
      lVar11 = lVar2 + 0x90;
      puVar4 = (undefined4 *)
               FUN_1437fb610(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x20),
                             lVar2 + 0xb0,lVar2 + 0xd0,lVar11,
                             CONCAT44(uVar13,param_3) & 0xffffffff003fffff);
      uVar13 = (undefined4)((ulonglong)lVar11 >> 0x20);
      local_res8[0] = uVar7;
      FUN_1438359d0(uVar3,local_res8);
      local_68 = puVar4[1];
      local_64 = *puVar4;
      FUN_143835a70(uVar3,&local_64,(int)*(short *)(puVar4 + 2),&local_68,
                    CONCAT44(uVar13,(int)*(short *)((longlong)puVar4 + 10)));
    }
  }
  return;
}



// FUNCTION 1438c52a0 FUN_1438c52a0 body=168 status=ok
// SIG undefined FUN_1438c52a0(void)

void FUN_1438c52a0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar1 = *param_1;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  *param_1 = uVar1 & 0xfffffffffffffffd | 1;
  puVar4 = param_1;
  plVar5 = (longlong *)(uVar1 & 0xfffffffffffffffc);
  while (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)(plVar5[1] & 0xfffffffffffffffc);
    if ((plVar5[1] & 3U) == 0) {
      local_28 = uVar2;
      uStack_20 = uVar3;
      (*(code *)((undefined8 *)*plVar5)[2])(plVar5,param_2,&local_28);
      puVar4 = (ulonglong *)(plVar5 + 1);
      plVar5 = plVar6;
    }
    else {
      (**(code **)*plVar5)(plVar5,1);
      *puVar4 = (ulonglong)((uint)*puVar4 & 3) | (ulonglong)plVar6;
      plVar5 = plVar6;
    }
  }
  *param_1 = *param_1 & 0xfffffffffffffffc;
  return;
}



// FUNCTION 1438c5350 FUN_1438c5350 body=8 status=ok
// SIG undefined FUN_1438c5350(void)

char * FUN_1438c5350(void)

{
  return "CalculateClearance";
}



// FUNCTION 1438c5360 FUN_1438c5360 body=8 status=ok
// SIG undefined FUN_1438c5360(void)

char * FUN_1438c5360(void)

{
  return "GetUncalculatedClearanceFaces";
}



// FUNCTION 1438c5370 FUN_1438c5370 body=309 status=ok
// SIG undefined FUN_1438c5370(void)

longlong *
FUN_1438c5370(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  LPVOID pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  pvVar5 = TlsGetValue(DAT_146b8198c);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar5,"TthkaiNavMeshClearanceCacheFillingTasks::makeContext");
  }
  pvVar6 = TlsGetValue(DAT_146b7bf70);
  if (pvVar6 == (LPVOID)0x0) {
    pvVar6 = DAT_146b7bf68;
  }
  puVar7 = (undefined8 *)
           (**(code **)(**(longlong **)((longlong)pvVar6 + 0x58) + 8))
                     (*(longlong **)((longlong)pvVar6 + 0x58),0x80);
  puVar8 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    *puVar7 = hkaiNavMeshClearanceCacheFillingTasks::Context::vftable;
    *(undefined4 *)(puVar7 + 2) = 0x1ffff;
    puVar7[7] = 0;
    puVar7[8] = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x4c) = 0x80000000;
    puVar7[10] = 0;
    *(undefined4 *)(puVar7 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x5c) = 0x80000000;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar8 = puVar7;
  }
  *param_1 = (longlong)puVar8;
  puVar8[0xd] = param_2;
  *(undefined4 *)(*param_1 + 0x18) = param_6;
  lVar1 = *param_1;
  uVar2 = *(undefined4 *)(param_2 + 0x124);
  uVar3 = *(undefined4 *)(param_2 + 0x128);
  uVar4 = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(lVar1 + 0x24) = uVar2;
  *(undefined4 *)(lVar1 + 0x28) = uVar3;
  *(undefined4 *)(lVar1 + 0x2c) = uVar4;
  *(undefined4 *)(*param_1 + 0x30) = *(undefined4 *)(param_4 + 0x28);
  *(undefined4 *)(*param_1 + 0x70) = *(undefined4 *)(param_4 + 0x40);
  *(undefined8 *)(*param_1 + 0x38) = param_3;
  FUN_14387bc60(*(undefined8 *)(param_2 + 0x140),*param_1 + 0x40);
  if (pvVar5 != (LPVOID)0x0) {
    FUN_14370d750(pvVar5,&DAT_145b8eda0);
  }
  return param_1;
}



// FUNCTION 1438c54b0 FUN_1438c54b0 body=260 status=ok
// SIG undefined FUN_1438c54b0(void)

void FUN_1438c54b0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  LPVOID pvVar4;
  ulonglong *puVar5;
  uint uVar6;
  int local_res10 [2];
  uint local_res18 [4];
  undefined1 local_118 [240];
  
  hkaiProcessFaceTimers::hkaiProcessFaceTimers(local_118);
  iVar1 = *(int *)(param_2 + 0x18);
  uVar6 = 0;
  while ((((uVar6 & 3) != 0 || (*(longlong **)(param_2 + 0x10) == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))(), cVar2 == '\0'))) {
    puVar5 = (ulonglong *)
             ((longlong)*(int *)(((longlong)iVar1 + 1) * 0x40 + *(longlong *)(param_1 + 0x58)) *
              0x40 + *(longlong *)(param_1 + 0x1a8));
    LOCK();
    uVar3 = *puVar5;
    *puVar5 = *puVar5 + 1;
    UNLOCK();
    if ((uint)uVar3 < (uint)(uVar3 >> 0x20)) {
      local_res10[0] = 0;
      local_res18[0] = (uint)uVar3;
    }
    else {
      FUN_143df9e40(param_1 + 0x10,local_res10,iVar1 + 1,local_res18);
      if (local_res10[0] < 0) {
        pvVar4 = TlsGetValue(DAT_146b8198c);
        FUN_143896b10(local_118,pvVar4);
        return;
      }
      uVar3 = (ulonglong)local_res18[0];
    }
    FUN_1438c5b70(param_1 + -0x20,local_118,uVar3 & 0xffffffff);
    uVar6 = uVar6 + 1;
  }
  return;
}



// FUNCTION 1438c55c0 FUN_1438c55c0 body=103 status=ok
// SIG undefined FUN_1438c55c0(void)

void FUN_1438c55c0(undefined8 param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_146b8198c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar1,"TtCalculateClearance");
  }
  FUN_1438c54b0(param_1,param_2);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_14370d750(pvVar1,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c5630 FUN_1438c5630 body=451 status=ok
// SIG undefined FUN_1438c5630(void)

void FUN_1438c5630(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  LPVOID pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong local_28;
  int local_20;
  uint local_1c;
  longlong local_18;
  longlong lStack_10;
  
  pvVar4 = TlsGetValue(DAT_146b8198c);
  if (pvVar4 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar4,"TthkaiNavMeshClearanceCacheFillingTasks::FireEvents");
  }
  if (((*(longlong **)(param_2 + 0x10) == (longlong *)0x0) ||
      (cVar3 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))(), cVar3 == '\0')) &&
     (lVar6 = *(longlong *)(param_1 + 0x10),
     (*(ulonglong *)(*(longlong *)(lVar6 + 0x68) + 0x70) & 0xfffffffffffffffc) != 0)) {
    puVar8 = *(undefined4 **)(lVar6 + 0x50);
    iVar1 = *(int *)(lVar6 + 0x58);
    local_28 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    uVar5 = FUN_143703a50();
    lVar6 = (longlong)local_20;
    iVar1 = (int)((longlong)iVar1 * 0x10 >> 4);
    iVar9 = local_20 + iVar1;
    if ((int)(local_1c & 0x3fffffff) < iVar9) {
      iVar2 = (local_1c & 0x3fffffff) * 2;
      if (iVar9 < iVar2) {
        iVar9 = iVar2;
      }
      FUN_14370c310(uVar5,&local_28,iVar9,8);
    }
    local_20 = local_20 + iVar1;
    lVar7 = 0;
    lVar6 = local_28 + lVar6 * 8;
    if (0 < (longlong)iVar1) {
      do {
        *(undefined4 *)(lVar6 + lVar7 * 8) = *puVar8;
        *(undefined1 *)(lVar6 + 4 + lVar7 * 8) = **(undefined1 **)(puVar8 + 2);
        lVar7 = lVar7 + 1;
        puVar8 = puVar8 + 4;
      } while (lVar7 < iVar1);
    }
    lStack_10 = local_28 + (longlong)local_20 * 8;
    local_18 = local_28;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
    FUN_1438c52a0(lVar6 + 0x70,lVar6,&local_18);
    uVar5 = FUN_143703a50();
    local_20 = 0;
    if (-1 < (int)local_1c) {
      FUN_143702e10(uVar5,local_28,8,local_1c & 0x3fffffff);
    }
  }
  if (pvVar4 == (LPVOID)0x0) {
    return;
  }
  FUN_14370d750(pvVar4,&DAT_145b8eda0);
  return;
}



// FUNCTION 1438c5800 FUN_1438c5800 body=866 status=ok
// SIG undefined FUN_1438c5800(void)

void FUN_1438c5800(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  LPVOID pvVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int local_res10;
  int local_res18 [2];
  int local_res20;
  longlong local_50;
  int local_48;
  uint local_44;
  
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d5c0(pvVar7,"TtGetUncalculatedClearanceFaces");
  }
  if ((*(longlong **)(param_2 + 0x10) == (longlong *)0x0) ||
     (cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))(), cVar6 == '\0')) {
    thunk_FUN_143719c70(0x65e26350);
    local_res10 = 0;
    iVar13 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x70);
    local_res20 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) + 0x40);
    local_res18[0] = iVar13;
    if (0 < local_res20) {
      do {
        uVar12 = 0;
        lVar2 = *(longlong *)(param_1 + 0x10);
        if ((*(int *)(lVar2 + 0x30) <= *(int *)(lVar2 + 0x58)) || (iVar13 < 1)) break;
        lVar3 = *(longlong *)
                 ((longlong)local_res10 * 0x100 + *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x38))
        ;
        if ((lVar3 != 0) &&
           (plVar15 = (longlong *)
                      ((longlong)*(int *)(*(longlong *)(lVar3 + 0x18) + 0x180) * 0x10 +
                      *(longlong *)(lVar2 + 0x40)), uVar16 = uVar12, 0 < (int)plVar15[1])) {
          do {
            iVar14 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x58);
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x30);
            if ((iVar1 <= iVar14) || (iVar13 < 1)) break;
            lVar2 = *plVar15;
            local_50 = 0;
            local_48 = 0;
            local_44 = 0x80000000;
            FUN_143834cd0(*(undefined8 *)
                           (*(longlong *)(lVar3 + 0x30) +
                           (ulonglong)*(byte *)(lVar2 + uVar16) * 0x18),iVar1 - iVar14,&local_50,
                          local_res18);
            if (local_48 != 0) {
              thunk_FUN_143719c70(0xf95efc21);
              iVar1 = local_48;
              lVar4 = *(longlong *)(param_1 + 0x10);
              uVar8 = FUN_143703a50();
              iVar13 = *(int *)(lVar4 + 0x58);
              uVar9 = *(uint *)(lVar4 + 0x5c) & 0x3fffffff;
              iVar14 = iVar13 + iVar1;
              if ((int)uVar9 < iVar14) {
                iVar5 = uVar9 * 2;
                if (iVar14 < iVar5) {
                  iVar14 = iVar5;
                }
                FUN_14370c310(uVar8,lVar4 + 0x50,iVar14,0x10);
              }
              *(int *)(lVar4 + 0x58) = *(int *)(lVar4 + 0x58) + iVar1;
              lVar4 = *(longlong *)(lVar4 + 0x50);
              thunk_FUN_143719c70(0x41fe3e7);
              iVar14 = 0;
              if (0 < local_48) {
                lVar10 = 0;
                puVar11 = (uint *)((longlong)iVar13 * 0x10 + lVar4);
                do {
                  iVar14 = iVar14 + 1;
                  *puVar11 = local_res10 << 0x16 | *(uint *)(lVar10 + local_50);
                  *(byte **)(puVar11 + 2) = (byte *)(lVar2 + uVar16);
                  lVar10 = lVar10 + 4;
                  puVar11 = puVar11 + 4;
                } while (iVar14 < local_48);
              }
              lVar2 = *(longlong *)
                       ((longlong)local_res10 * 0x100 +
                       *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38) + 0x38));
              if ((lVar2 != 0) && (*(char *)(lVar2 + 0x28) != '\x01')) {
                FUN_142fbda20(lVar2 + 0x18);
              }
            }
            thunk_FUN_143719c70(0x78745e4d);
            uVar8 = FUN_143703a50();
            local_48 = 0;
            if (-1 < (int)local_44) {
              FUN_143702e10(uVar8,local_50,4,local_44 & 0x3fffffff);
            }
            uVar9 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar9;
            uVar16 = uVar16 + 0x18;
            local_50 = 0;
            local_44 = 0x80000000;
            iVar13 = local_res18[0];
          } while ((int)uVar9 < (int)plVar15[1]);
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < local_res20);
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    FUN_143df9d10(lVar2 + 0x30,*(undefined4 *)(lVar2 + 0x318),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x58));
    thunk_FUN_143719c70(0xbaf3259f);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60);
    FUN_143df9d10(lVar2 + 0x30,*(undefined4 *)(lVar2 + 0x318),0);
  }
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d750(pvVar7,&DAT_145b8eda0);
  }
  return;
}



// FUNCTION 1438c5b70 FUN_1438c5b70 body=81 status=ok
// SIG undefined FUN_1438c5b70(void)

void FUN_1438c5b70(longlong param_1,undefined8 param_2,int param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 800);
  puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x50) + (longlong)param_3 * 0x10);
  FUN_1438c4d90(*(undefined8 *)(lVar2 + 0x38),lVar2 + 0x20,*puVar1 & 0xffffffff,puVar1[1],param_2);
  thunk_FUN_143719c70(0x4fcb3947);
  return;
}



// FUNCTION 1438c5bd0 FUN_1438c5bd0 body=1695 status=ok
// SIG undefined FUN_1438c5bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1438c5bd0(undefined1 (*param_1) [16],longlong param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  undefined1 *puVar6;
  byte bVar7;
  LPVOID pvVar8;
  LPVOID pvVar9;
  int iVar10;
  byte bVar11;
  int iVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar18 [16];
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
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined1 local_5d8 [8];
  float fStack_5d0;
  float fStack_5cc;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float local_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  undefined1 local_4d8 [96];
  undefined1 (*local_478) [16];
  longlong local_470;
  undefined1 local_468 [496];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 *local_268;
  longlong local_260;
  undefined1 local_258 [496];
  undefined8 local_68;
  undefined8 uStack_60;
  
  pvVar8 = TlsGetValue(DAT_146b8198c);
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d620(pvVar8,"LtsolveSingleAgent","Stinit");
  }
  fVar26 = *(float *)(param_2 + 0x10) + *param_3;
  fVar27 = *(float *)(param_2 + 0x14) + param_3[1];
  fVar28 = *(float *)(param_2 + 0x18) + param_3[2];
  local_5b8 = *param_1;
  fVar14 = fVar26 * fVar26;
  fVar16 = fVar27 * fVar27;
  fVar17 = fVar28 * fVar28;
  fVar23 = fVar16 + fVar14 + fVar17;
  fVar24 = fVar16 + fVar14 + fVar17;
  fVar25 = fVar16 + fVar14 + fVar17;
  fVar17 = fVar16 + fVar14 + fVar17;
  auVar18._4_4_ = fVar24;
  auVar18._0_4_ = fVar23;
  auVar18._8_4_ = fVar25;
  auVar18._12_4_ = fVar17;
  auVar18 = rsqrtps(in_XMM2,auVar18);
  fVar14 = auVar18._0_4_;
  fVar16 = auVar18._4_4_;
  fVar21 = auVar18._8_4_;
  fVar22 = auVar18._12_4_;
  fVar14 = (float)(~-(uint)(fVar23 <= 0.0) & (uint)((3.0 - fVar23 * fVar14 * fVar14) * fVar14 * 0.5)
                  );
  fVar16 = (float)(~-(uint)(fVar24 <= 0.0) & (uint)((3.0 - fVar24 * fVar16 * fVar16) * fVar16 * 0.5)
                  );
  fVar21 = (float)(~-(uint)(fVar25 <= 0.0) & (uint)((3.0 - fVar25 * fVar21 * fVar21) * fVar21 * 0.5)
                  );
  fVar22 = (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar17 * fVar22 * fVar22) * fVar22 * 0.5)
                  );
  fVar23 = fVar14 * fVar23;
  local_5d8._4_4_ = fVar27 * fVar16;
  local_5d8._0_4_ = fVar26 * fVar14;
  fStack_5d0 = fVar28 * fVar21;
  fStack_5cc = (*(float *)(param_2 + 0x1c) + param_3[3]) * fVar22;
  local_5a8 = CONCAT44(fVar16 * fVar24,fVar23);
  uStack_5a0 = CONCAT44(fVar22 * fVar17,fVar21 * fVar25);
  iVar10 = 0;
  if (1e-05 > fVar23) {
    fStack_5d0 = (float)local_5b8._0_4_;
    local_5d8 = (undefined1  [8])local_5b8._4_8_;
    fStack_5cc = (float)local_5b8._12_4_;
    local_5a8 = 0;
    uStack_5a0 = 0;
  }
  local_588 = *(float *)(param_2 + 0x10);
  fStack_584 = *(float *)(param_2 + 0x14);
  fStack_580 = *(float *)(param_2 + 0x18);
  fStack_57c = *(float *)(param_2 + 0x1c);
  fVar14 = local_588 * local_588;
  fVar16 = fStack_584 * fStack_584;
  fVar17 = fStack_580 * fStack_580;
  local_568 = *(float *)(*(longlong *)(param_2 + 0x30) + 0x1c);
  if (local_568 * local_568 < fVar16 + fVar14 + fVar17) {
    auVar13._4_4_ = fVar14;
    auVar13._0_4_ = fVar14;
    auVar13._8_4_ = fVar14;
    auVar13._12_4_ = fVar14;
    auVar19._0_4_ = fVar16 + fVar14 + fVar17;
    auVar19._4_4_ = fVar16 + fVar14 + fVar17;
    auVar19._8_4_ = fVar16 + fVar14 + fVar17;
    auVar19._12_4_ = fVar16 + fVar14 + fVar17;
    auVar18 = rsqrtps(auVar13,auVar19);
    fVar14 = auVar18._0_4_;
    fVar16 = auVar18._4_4_;
    fVar17 = auVar18._8_4_;
    fVar21 = auVar18._12_4_;
    local_588 = (float)(~-(uint)(auVar19._0_4_ <= 0.0) &
                       (uint)((3.0 - auVar19._0_4_ * fVar14 * fVar14) * fVar14 * 0.5)) * local_588 *
                local_568;
    fStack_584 = (float)(~-(uint)(auVar19._4_4_ <= 0.0) &
                        (uint)((3.0 - auVar19._4_4_ * fVar16 * fVar16) * fVar16 * 0.5)) * fStack_584
                 * local_568;
    fStack_580 = (float)(~-(uint)(auVar19._8_4_ <= 0.0) &
                        (uint)((3.0 - auVar19._8_4_ * fVar17 * fVar17) * fVar17 * 0.5)) * fStack_580
                 * local_568;
    fStack_57c = (float)(~-(uint)(auVar19._12_4_ <= 0.0) &
                        (uint)((3.0 - auVar19._12_4_ * fVar21 * fVar21) * fVar21 * 0.5)) *
                 fStack_57c * local_568;
  }
  local_268 = local_258;
  local_478 = (undefined1 (*) [16])local_468;
  local_578 = 0x5f7ffff0;
  uStack_574 = 0x5f7ffff0;
  uStack_570 = 0x5f7ffff0;
  uStack_56c = 0x5f7ffff0;
  local_260 = 0x80;
  local_68 = 0;
  uStack_60 = 0;
  local_470 = 0x80;
  local_278 = 0;
  uStack_270 = 0;
  fStack_564 = local_568;
  fStack_560 = local_568;
  fStack_55c = local_568;
  hkaiVelocityCandidateScores::setAll(&local_268,&local_578);
  local_598 = _DAT_1467f06e0;
  uStack_590 = uRam00000001467f06e8;
  hkaiVelocityCandidateScores::setAll(&local_478,&local_598);
  pauVar5 = local_478;
  if (1e-05 <= fVar23) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x68);
    auVar4._4_4_ = uVar1;
    auVar4._0_4_ = uVar1;
    auVar4._8_4_ = uVar1;
    auVar4._12_4_ = 0;
    *local_478 = auVar4;
  }
  else {
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x68);
    *(undefined8 *)*local_478 = 0;
    *(longlong *)(*pauVar5 + 8) = auVar20._8_8_;
  }
  local_5e8 = 0;
  uStack_5e0 = 0;
  fStack_550 = *(float *)(*param_1 + 4) * (float)local_5d8._0_4_ -
               (float)local_5d8._4_4_ * *(float *)*param_1;
  local_558 = *(float *)(*param_1 + 8) * (float)local_5d8._4_4_ -
              fStack_5d0 * *(float *)(*param_1 + 4);
  fStack_554 = *(float *)*param_1 * fStack_5d0 - (float)local_5d8._0_4_ * *(float *)(*param_1 + 8);
  fVar14 = local_558 * local_558;
  fVar16 = fStack_554 * fStack_554;
  auVar15._8_4_ = fStack_550 * fStack_550;
  auVar15._4_4_ = auVar15._8_4_;
  auVar15._0_4_ = auVar15._8_4_;
  auVar15._12_4_ = auVar15._8_4_;
  fVar22 = fVar16 + fVar14 + auVar15._8_4_;
  fVar23 = fVar16 + fVar14 + auVar15._8_4_;
  fVar24 = fVar16 + fVar14 + auVar15._8_4_;
  fVar25 = fVar16 + fVar14 + auVar15._8_4_;
  auVar3._4_4_ = fVar23;
  auVar3._0_4_ = fVar22;
  auVar3._8_4_ = fVar24;
  auVar3._12_4_ = fVar25;
  auVar18 = rsqrtps(auVar15,auVar3);
  fVar14 = auVar18._0_4_;
  fVar16 = auVar18._4_4_;
  fVar17 = auVar18._8_4_;
  fVar21 = auVar18._12_4_;
  local_558 = local_558 *
              (float)(~-(uint)(fVar22 <= 0.0) &
                     (uint)((3.0 - fVar22 * fVar14 * fVar14) * fVar14 * 0.5));
  fStack_554 = fStack_554 *
               (float)(~-(uint)(fVar23 <= 0.0) &
                      (uint)((3.0 - fVar23 * fVar16 * fVar16) * fVar16 * 0.5));
  fStack_550 = fStack_550 *
               (float)(~-(uint)(fVar24 <= 0.0) &
                      (uint)((3.0 - fVar24 * fVar17 * fVar17) * fVar17 * 0.5));
  fStack_54c = (*(float *)(*param_1 + 0xc) * fStack_5cc - fStack_5cc * *(float *)(*param_1 + 0xc)) *
               (float)(~-(uint)(fVar25 <= 0.0) &
                      (uint)((3.0 - fVar25 * fVar21 * fVar21) * fVar21 * 0.5));
  FUN_1438ca880(local_4d8,local_5d8,&local_558,&local_588,&local_568,&local_5a8);
  pvVar9 = TlsGetValue(DAT_146b8198c);
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d800(pvVar9,"StscoreBoundaryObstacles");
  }
  fVar14 = *(float *)(param_2 + 0xb0);
  bVar11 = 0;
  fVar16 = *(float *)(param_2 + 0x40);
  iVar12 = 0;
  local_548 = (fVar16 + fVar14) * (fVar16 + fVar14);
  fStack_544 = (fVar16 + fVar14) * (fVar16 + fVar14);
  fStack_540 = (fVar16 + fVar14) * (fVar16 + fVar14);
  fStack_53c = (fVar16 + fVar14) * (fVar16 + fVar14);
  local_5c8 = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x74);
  uStack_5c4 = local_5c8;
  uStack_5c0 = local_5c8;
  uStack_5bc = local_5c8;
  if (0 < *(int *)(param_2 + 0xf8)) {
    do {
      bVar7 = FUN_1438cbf90(param_2,(longlong)iVar12 * 0x20 + *(longlong *)(param_2 + 0xf0),
                            local_5b8,&local_548,&local_5c8,local_4d8,&local_268,&local_478,
                            &local_5e8);
      bVar11 = bVar11 | bVar7;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_2 + 0xf8));
  }
  pvVar9 = TlsGetValue(DAT_146b8198c);
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d800(pvVar9,"StscoreSphereObstacles");
  }
  iVar12 = 0;
  if (0 < *(int *)(param_2 + 0x108)) {
    do {
      bVar7 = FUN_1438cc6a0(param_2,(longlong)iVar12 * 0x20 + *(longlong *)(param_2 + 0x100),
                            local_5b8,&local_5c8,local_4d8,&local_268,&local_478,&local_5e8);
      bVar11 = bVar11 | bVar7;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_2 + 0x108));
  }
  pvVar9 = TlsGetValue(DAT_146b8198c);
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d800(pvVar9,"StscoreAgentObstacles");
  }
  local_538 = *(undefined4 *)(*(longlong *)(param_2 + 0x30) + 0x6c);
  uStack_534 = local_538;
  uStack_530 = local_538;
  uStack_52c = local_538;
  if (0 < *(int *)(param_2 + 0xe8)) {
    do {
      bVar7 = FUN_1438cb550(param_2,(longlong)iVar10 * 0x50 + *(longlong *)(param_2 + 0xe0),
                            local_5b8,local_4d8,&local_538,&local_5c8,&local_268,&local_478,
                            &local_5e8);
      bVar11 = bVar11 | bVar7;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(param_2 + 0xe8));
  }
  pvVar9 = TlsGetValue(DAT_146b8198c);
  if (pvVar9 != (LPVOID)0x0) {
    FUN_14370d800(pvVar9,"StchooseBestCandidate");
  }
  lVar2 = *(longlong *)(param_2 + 0x30);
  fStack_51c = *(float *)(param_2 + 0x3c);
  local_528 = fStack_51c * _DAT_1467f0720;
  fStack_524 = fStack_51c * fRam00000001467f0724;
  fStack_520 = fStack_51c * fRam00000001467f0728;
  fStack_51c = fStack_51c * fRam00000001467f072c;
  uVar1 = *(undefined4 *)(lVar2 + 100);
  local_598 = CONCAT44(uVar1,uVar1);
  uStack_590 = CONCAT44(uVar1,uVar1);
  local_518 = *(undefined4 *)(lVar2 + 0x70);
  local_508 = *(undefined4 *)(lVar2 + 0x60);
  local_4f8 = _DAT_1467f06e0;
  uStack_4f0 = uRam00000001467f06e8;
  uStack_514 = local_518;
  uStack_510 = local_518;
  uStack_50c = local_518;
  uStack_504 = local_508;
  uStack_500 = local_508;
  uStack_4fc = local_508;
  FUN_1438cb020(local_4d8,&local_268,&local_478,&local_5e8,&local_4f8,&local_508,&local_518,
                &local_5a8,&local_528,&local_598,param_2 + 0xa0,&local_4e8);
  pauVar5 = local_478;
  fVar14 = *(float *)(param_2 + 0x14);
  fVar16 = *(float *)(param_2 + 0x18);
  fVar17 = *(float *)(param_2 + 0x1c);
  *param_3 = local_4e8 - *(float *)(param_2 + 0x10);
  param_3[1] = fStack_4e4 - fVar14;
  param_3[2] = fStack_4e0 - fVar16;
  param_3[3] = fStack_4dc - fVar17;
  if (local_470 < 0) {
    pvVar9 = TlsGetValue(DAT_146b7bf70);
    if (pvVar9 == (LPVOID)0x0) {
      pvVar9 = DAT_146b7bf68;
    }
    FUN_1437038e0(*(undefined8 *)((longlong)pvVar9 + 0x58),pauVar5);
  }
  puVar6 = local_268;
  if (local_260 < 0) {
    pvVar9 = TlsGetValue(DAT_146b7bf70);
    if (pvVar9 == (LPVOID)0x0) {
      pvVar9 = DAT_146b7bf68;
    }
    FUN_1437038e0(*(undefined8 *)((longlong)pvVar9 + 0x58),puVar6);
  }
  if (pvVar8 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar8,&DAT_145b8dd34);
  }
  return -(uint)(bVar11 != 0) & 0x80040200;
}



// FUNCTION 1438c6270 FUN_1438c6270 body=269 status=ok
// SIG undefined FUN_1438c6270(void)

undefined8 FUN_1438c6270(undefined8 param_1,longlong param_2,longlong param_3,float *param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  uint local_res10 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_58 = 0;
  uStack_50 = 0;
  local_res10[0] = *(uint *)(param_3 + 0x20) & 0x3fffff;
  fVar5 = (*(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x30)) - *(float *)(param_2 + 0x40);
  fVar6 = (*(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x34)) - *(float *)(param_2 + 0x44);
  fVar7 = (*(float *)(param_2 + 0x38) + *(float *)(param_2 + 0x38)) - *(float *)(param_2 + 0x48);
  fStack_3c = (*(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c)) - *(float *)(param_2 + 0x4c)
  ;
  auVar3._0_4_ = *(float *)(param_2 + 0x40) - fVar5;
  auVar3._4_4_ = *(float *)(param_2 + 0x44) - fVar6;
  auVar3._8_4_ = *(float *)(param_2 + 0x48) - fVar7;
  auVar3._12_4_ = fRam00000001467f06fc;
  local_38._0_4_ = (float)(~-(uint)(auVar3._0_4_ == 0.0) & (uint)auVar3._0_4_);
  local_38._4_4_ = (float)(~-(uint)(auVar3._4_4_ == 0.0) & (uint)auVar3._4_4_);
  local_38._8_4_ = (float)(~-(uint)(auVar3._8_4_ == 0.0) & (uint)auVar3._8_4_);
  local_38._12_4_ = (float)(~-(uint)(fRam00000001467f06fc == 0.0) & (uint)fRam00000001467f06fc);
  auVar4 = rcpps(auVar3,local_38);
  uVar2 = -(uint)(local_38._0_4_ == 0.0);
  local_28._0_4_ = ~uVar2 & (uint)((2.0 - local_38._0_4_ * auVar4._0_4_) * auVar4._0_4_);
  local_28._4_4_ =
       ~-(uint)(local_38._4_4_ == 0.0) &
       (uint)((2.0 - local_38._4_4_ * auVar4._4_4_) * auVar4._4_4_);
  local_28._8_4_ =
       ~-(uint)(local_38._8_4_ == 0.0) &
       (uint)((2.0 - local_38._8_4_ * auVar4._8_4_) * auVar4._8_4_);
  local_28._12_4_ =
       ~-(uint)(local_38._12_4_ == 0.0) &
       (uint)((2.0 - local_38._12_4_ * auVar4._12_4_) * auVar4._12_4_);
  auVar4._8_4_ = -(uint)(local_38._8_4_ == 0.0) & 0x7f7fffee;
  auVar4._0_8_ = CONCAT44(-(uint)(local_38._4_4_ == 0.0),uVar2) & 0x7f7fffee7f7fffee;
  auVar4._12_4_ = -(uint)(local_38._12_4_ == 0.0) & 0x7f7fffee;
  local_28 = local_28 | auVar4;
  local_48 = fVar5;
  fStack_44 = fVar6;
  fStack_40 = fVar7;
  cVar1 = FUN_1438526b0(uVar2 & 0x7f7fffee,local_res10,&local_48,&local_58);
  if (cVar1 != '\0') {
    fVar5 = ((*(float *)(param_2 + 0x40) - fVar5) * (float)local_58 + fVar5) -
            *(float *)(param_2 + 0x30);
    fVar6 = ((*(float *)(param_2 + 0x44) - fVar6) * local_58._4_4_ + fVar6) -
            *(float *)(param_2 + 0x34);
    fVar7 = ((*(float *)(param_2 + 0x48) - fVar7) * (float)uStack_50 + fVar7) -
            *(float *)(param_2 + 0x38);
    if (fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7 <
        *(float *)(param_3 + 0x40) * *(float *)(param_3 + 0x40)) {
      *param_4 = (float)local_58;
      param_4[1] = local_58._4_4_;
      param_4[2] = (float)uStack_50;
      param_4[3] = uStack_50._4_4_;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438c6380 FUN_1438c6380 body=174 status=ok
// SIG undefined FUN_1438c6380(void)

bool FUN_1438c6380(undefined8 param_1,undefined4 param_2,float *param_3,longlong param_4,
                  float *param_5)

{
  char cVar1;
  bool bVar2;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  cVar1 = FUN_143854160(param_1,local_res10,param_4 + 0x10,param_3,param_4 + 0x30);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    local_res10[0] = param_2;
    FUN_143853410(param_1,param_3,local_res10,param_5);
    bVar2 = (param_5[1] - param_3[1]) * (param_5[1] - param_3[1]) +
            (*param_5 - *param_3) * (*param_5 - *param_3) +
            (param_5[2] - param_3[2]) * (param_5[2] - param_3[2]) <=
            *(float *)(param_4 + 0x40) * *(float *)(param_4 + 0x40);
  }
  return bVar2;
}



// FUNCTION 1438c6430 FUN_1438c6430 body=99 status=ok
// SIG undefined FUN_1438c6430(void)

bool FUN_1438c6430(uint param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  
  bVar3 = param_1 == 0xffffffff;
  if (param_1 != 0xffffffff) {
    lVar1 = *(longlong *)((ulonglong)(param_1 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38));
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x18);
      if ((int)(param_1 & 0x3fffff) < *(int *)(lVar1 + 0xd8) + *(int *)(lVar1 + 0x20)) {
        if (*(int *)(lVar1 + 0x108) == 0) {
          bVar2 = 0;
        }
        else {
          bVar2 = *(byte *)((longlong)(int)(param_1 & 0x3fffff) + *(longlong *)(lVar1 + 0x100));
        }
        if ((bVar2 & 1) == 0) {
          return false;
        }
      }
    }
    bVar3 = true;
  }
  return bVar3;
}



// FUNCTION 1438c64a0 FUN_1438c64a0 body=383 status=ok
// SIG undefined FUN_1438c64a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1438c64a0(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4,float *param_5
             )

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  LPVOID pvVar6;
  LPVOID pvVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_res20 [2];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar8 = *(float *)(param_4 + 0x20);
  pvVar6 = TlsGetValue(DAT_146b8198c);
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d620(pvVar6,"LtcoherentBrc","StgetMesh");
  }
  cVar3 = FUN_1438c6430(fVar8,param_2);
  if (cVar3 == '\0') {
    uVar1 = *(undefined8 *)
             ((ulonglong)((uint)fVar8 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38));
    plVar2 = *(longlong **)(param_3 + 4);
    if (plVar2 != (longlong *)0x0) {
      local_res20[0] = (uint)fVar8 & 0x3fffff;
      iVar5 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,uVar1,local_res20,*param_3,*(undefined8 *)(param_3 + 2));
      if (iVar5 == 0) goto LAB_1438c65b7;
    }
    pvVar7 = TlsGetValue(DAT_146b8198c);
    if (pvVar7 != (LPVOID)0x0) {
      FUN_14370d800(pvVar7,"Stprev");
    }
    local_28 = DAT_1467f06f0;
    fStack_24 = fRam00000001467f06f4;
    fStack_20 = fRam00000001467f06f8;
    fStack_1c = fRam00000001467f06fc;
    iVar5 = FUN_1438c6270(uVar1,param_3,param_4,&local_28);
    if (iVar5 != 0) {
      param_5[4] = fVar8;
      fVar8 = (fStack_24 - fRam00000001467f07e4) * fRam00000001467f0704;
      fVar9 = (fStack_20 - fRam00000001467f07e8) * fRam00000001467f0708;
      fVar10 = (fStack_1c - fRam00000001467f07ec) * fRam00000001467f070c;
      *param_5 = (local_28 - _DAT_1467f07e0) * _DAT_1467f0700;
      param_5[1] = fVar8;
      param_5[2] = fVar9;
      param_5[3] = fVar10;
      uVar4 = 1;
      goto LAB_1438c65ee;
    }
  }
LAB_1438c65b7:
  pvVar7 = TlsGetValue(DAT_146b8198c);
  if (pvVar7 != (LPVOID)0x0) {
    FUN_14370d800(pvVar7,"Stfull");
  }
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_5);
LAB_1438c65ee:
  if (pvVar6 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar6,&DAT_145b8dd34);
  }
  return uVar4;
}



// FUNCTION 1438c6620 FUN_1438c6620 body=1255 status=ok
// SIG undefined FUN_1438c6620(void)

float * FUN_1438c6620(longlong *param_1,float *param_2,longlong param_3,undefined4 *param_4,
                     float *param_5,undefined4 *param_6)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  DWORD dwTlsIndex;
  char cVar10;
  int iVar11;
  int iVar12;
  LPVOID pvVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float fVar20;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float *local_res10;
  longlong local_res18;
  LPVOID local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pfVar17 = param_5;
  dwTlsIndex = DAT_146b8198c;
  local_78 = param_4[0xc];
  uStack_74 = param_4[0xd];
  uStack_70 = param_4[0xe];
  uStack_6c = param_4[0xf];
  fVar22 = param_5[8];
  *param_2 = -NAN;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = TlsGetValue(dwTlsIndex);
  if (local_res20 != (LPVOID)0x0) {
    FUN_14370d620(local_res20,"LtcoherentGCP","StgetMesh");
  }
  cVar10 = FUN_1438c6430(fVar22,param_3);
  if (cVar10 == '\0') {
    uVar19 = (uint)pfVar17[8] & 0x3fffff;
    lVar3 = *(longlong *)((ulonglong)((uint)fVar22 >> 0x16) * 0x100 + *(longlong *)(param_3 + 0x38))
    ;
    plVar4 = *(longlong **)(param_4 + 4);
    if ((plVar4 == (longlong *)0x0) ||
       (param_5._0_4_ = uVar19,
       iVar11 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,lVar3,&param_5,*param_4,*(undefined8 *)(param_4 + 2)), iVar11 != 0
       )) {
      pvVar13 = TlsGetValue(DAT_146b8198c);
      if (pvVar13 != (LPVOID)0x0) {
        FUN_14370d800(pvVar13,"Stprev");
      }
      iVar11 = FUN_1438c6380(lVar3,uVar19,param_4 + 0xc,pfVar17,&local_78);
      if (iVar11 != 0) {
        *param_2 = fVar22;
        goto LAB_1438c6a8d;
      }
    }
    pvVar13 = TlsGetValue(DAT_146b8198c);
    if (pvVar13 != (LPVOID)0x0) {
      FUN_14370d800(pvVar13,"Stneighbors");
    }
    lVar5 = *(longlong *)(lVar3 + 0x18);
    piVar14 = (int *)FUN_1437fb610(*(undefined8 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x20),
                                   lVar5 + 0xb0,lVar5 + 0xd0,lVar5 + 0x90,uVar19);
    fVar22 = (float)param_4[0xc] - *pfVar17;
    iVar11 = *piVar14;
    fVar23 = ((float)param_4[0xd] - pfVar17[1]) * pfVar17[4] - pfVar17[5] * fVar22;
    fVar24 = ((float)param_4[0xe] - pfVar17[2]) * pfVar17[5] -
             pfVar17[6] * ((float)param_4[0xd] - pfVar17[1]);
    fVar25 = fVar22 * pfVar17[6] - pfVar17[4] * ((float)param_4[0xe] - pfVar17[2]);
    fVar22 = 0.0 - (fVar25 * pfVar17[1] + fVar24 * *pfVar17 + fVar23 * pfVar17[2]);
    fVar21 = 0.0 - (fVar25 * pfVar17[1] + fVar24 * *pfVar17 + fVar23 * pfVar17[2]);
    param_2 = local_res10;
    if (iVar11 < (short)piVar14[2] + iVar11) {
      do {
        lVar5 = *(longlong *)(lVar3 + 0x18);
        lVar15 = FUN_1437fb5b0(fVar22,*(undefined4 *)(lVar5 + 0x30),lVar5 + 0xc0,lVar5 + 0xe0,
                               lVar5 + 0x70,iVar11);
        fVar22 = extraout_XMM0_Da;
        if ((*(int *)(lVar15 + 8) != -1) && (bVar1 = *(byte *)(lVar15 + 0x10), (bVar1 & 0x20) == 0))
        {
          piVar16 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x30)
                                         ,lVar5 + 0xc0,lVar5 + 0xe0,lVar5 + 0x70,iVar11);
          iVar12 = *(int *)(lVar5 + 0x40);
          iVar2 = *piVar16;
          if (iVar2 < iVar12) {
            pfVar18 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
          }
          else {
            pfVar18 = (float *)((longlong)(iVar2 - iVar12) * 0x10 + *(longlong *)(lVar5 + 0xf0));
          }
          iVar2 = piVar16[1];
          fVar22 = *pfVar18;
          fVar20 = pfVar18[1];
          fVar6 = pfVar18[2];
          if (iVar2 < iVar12) {
            pfVar18 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
          }
          else {
            pfVar18 = (float *)((longlong)(iVar2 - iVar12) * 0x10 + *(longlong *)(lVar5 + 0xf0));
          }
          fVar7 = *pfVar18;
          fVar8 = pfVar18[1];
          fVar9 = pfVar18[2];
          fVar22 = fVar21 + (fVar20 * *(float *)(lVar3 + 0x54) + fVar22 * *(float *)(lVar3 + 0x44) +
                             fVar6 * *(float *)(lVar3 + 100) + *(float *)(lVar3 + 0x74)) * fVar25 +
                   (fVar20 * *(float *)(lVar3 + 0x58) + fVar22 * *(float *)(lVar3 + 0x48) +
                    fVar6 * *(float *)(lVar3 + 0x68) + *(float *)(lVar3 + 0x78)) * fVar23 +
                   (fVar20 * *(float *)(lVar3 + 0x50) + fVar22 * *(float *)(lVar3 + 0x40) +
                    fVar6 * *(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0x70)) * fVar24;
          if ((fVar22 <= 0.0) &&
             (fVar22 = fVar21 + (fVar8 * *(float *)(lVar3 + 0x54) + fVar7 * *(float *)(lVar3 + 0x44)
                                 + fVar9 * *(float *)(lVar3 + 100) + *(float *)(lVar3 + 0x74)) *
                                fVar25 +
                       (fVar8 * *(float *)(lVar3 + 0x58) + fVar7 * *(float *)(lVar3 + 0x48) +
                        fVar9 * *(float *)(lVar3 + 0x68) + *(float *)(lVar3 + 0x78)) * fVar23 +
                       (fVar8 * *(float *)(lVar3 + 0x50) + fVar7 * *(float *)(lVar3 + 0x40) +
                        fVar9 * *(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0x70)) * fVar24,
             0.0 <= fVar22)) {
            fVar20 = *(float *)(lVar15 + 0xc);
            if (((bVar1 & 0x40) == 0) && (fVar20 != -NAN)) {
              fVar20 = (float)(*(int *)(lVar5 + 0x17c) << 0x16 | (uint)fVar20 & 0x3fffff);
            }
            lVar5 = *(longlong *)
                     ((ulonglong)((uint)fVar20 >> 0x16) * 0x100 + *(longlong *)(local_res18 + 0x38))
            ;
            if ((lVar5 != 0) &&
               (((plVar4 = *(longlong **)(param_4 + 4), plVar4 == (longlong *)0x0 ||
                 (param_5._0_4_ = (uint)fVar20 & 0x3fffff,
                 iVar12 = (**(code **)(*plVar4 + 0x20))
                                    (plVar4,lVar5,&param_5,*param_4,*(undefined8 *)(param_4 + 2)),
                 fVar22 = extraout_XMM0_Da_00, iVar12 != 0)) &&
                (iVar12 = FUN_1438c6380(lVar5,(uint)fVar20 & 0x3fffff,param_4 + 0xc,pfVar17,
                                        &local_78), fVar22 = extraout_XMM0_Da_01, iVar12 != 0)))) {
              *local_res10 = fVar20;
              param_2 = local_res10;
              goto LAB_1438c6a8d;
            }
          }
        }
        iVar11 = iVar11 + 1;
        param_2 = local_res10;
      } while (iVar11 < (int)(short)piVar14[2] + *piVar14);
    }
  }
  pvVar13 = TlsGetValue(DAT_146b8198c);
  if (pvVar13 != (LPVOID)0x0) {
    FUN_14370d800(pvVar13,"Stfull");
  }
  pfVar17 = (float *)(**(code **)(*param_1 + 0x18))(param_1,&local_res10,param_4,&local_78);
  *param_2 = *pfVar17;
LAB_1438c6a8d:
  *param_6 = local_78;
  param_6[1] = uStack_74;
  param_6[2] = uStack_70;
  param_6[3] = uStack_6c;
  if (local_res20 != (LPVOID)0x0) {
    FUN_14370d7a0(local_res20,&DAT_145b8dd34);
  }
  return param_2;
}



// FUNCTION 1438c6b10 FUN_1438c6b10 body=195 status=ok
// SIG undefined FUN_1438c6b10(void)

void FUN_1438c6b10(longlong param_1,int param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar5 = (ulonglong)param_2;
  uVar6 = uVar5;
  uVar10 = param_4;
  do {
    uVar4 = (ulonglong)param_3;
    uVar8 = uVar6 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)(param_3 + (int)uVar6) >> 1) * 4);
    iVar9 = param_3;
    do {
      uVar7 = (uint)uVar8;
      iVar2 = *(int *)(param_1 + uVar5 * 4);
      while (iVar2 < iVar1) {
        uVar5 = uVar5 + 1;
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        iVar2 = *(int *)(param_1 + uVar5 * 4);
      }
      iVar2 = *(int *)(param_1 + uVar4 * 4);
      while (iVar1 < iVar2) {
        uVar4 = uVar4 - 1;
        iVar9 = iVar9 + -1;
        iVar2 = *(int *)(param_1 + uVar4 * 4);
      }
      if ((longlong)uVar4 < (longlong)uVar5) break;
      if (uVar4 != uVar5) {
        uVar3 = *(undefined4 *)(param_1 + uVar4 * 4);
        *(undefined4 *)(param_1 + uVar4 * 4) = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = uVar3;
      }
      iVar9 = iVar9 + -1;
      uVar4 = uVar4 - 1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 <= (longlong)uVar4);
    if ((int)uVar6 < iVar9) {
      FUN_1438c6b10(param_1,uVar6 & 0xffffffff,iVar9,uVar10);
      uVar10 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar7) {
      return;
    }
    uVar6 = (ulonglong)uVar7;
  } while( true );
}



// FUNCTION 1438c6be0 FUN_1438c6be0 body=497 status=ok
// SIG undefined FUN_1438c6be0(void)

void FUN_1438c6be0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  
  *(undefined4 *)(param_1 + 2) = 0x7f7fffee;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x7f7fffee;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 3) = 0xff7fffee;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xff7fffee;
  iVar6 = (int)param_1[1];
  if (0 < iVar6) {
    lVar4 = 0;
    do {
      lVar3 = *param_1;
      iVar7 = iVar7 + 1;
      lVar5 = 0;
      if (iVar7 != iVar6) {
        lVar5 = lVar4 + 1;
      }
      fVar8 = *(float *)(lVar3 + lVar4 * 0x14) - *(float *)(lVar3 + lVar5 * 0x14);
      *(float *)(lVar3 + 8 + lVar4 * 0x14) = fVar8;
      *(float *)(lVar3 + 0xc + lVar4 * 0x14) =
           *(float *)(lVar3 + 4 + lVar4 * 0x14) - *(float *)(lVar3 + 4 + lVar5 * 0x14);
      uVar1 = *(uint *)(lVar3 + 0xc + lVar4 * 0x14);
      *(float *)(lVar3 + 0xc + lVar4 * 0x14) = fVar8;
      *(uint *)(lVar3 + 8 + lVar4 * 0x14) = uVar1 ^ 0x80000000;
      uVar2 = *(undefined8 *)(lVar3 + 8 + lVar4 * 0x14);
      fVar9 = (float)uVar2;
      fVar11 = (float)((ulonglong)uVar2 >> 0x20);
      fVar10 = fVar9 * fVar9;
      fVar12 = fVar11 * fVar11;
      fVar14 = fVar12 + fVar10;
      fVar15 = fVar12 + fVar10;
      auVar13._4_4_ = fVar15;
      auVar13._0_4_ = fVar14;
      auVar13._8_4_ = fVar12 + fVar10;
      auVar13._12_4_ = fVar12 + fVar10;
      auVar13 = rsqrtps(ZEXT416((uint)fVar8),auVar13);
      fVar8 = auVar13._0_4_;
      fVar10 = auVar13._4_4_;
      *(ulonglong *)(lVar3 + 8 + lVar4 * 0x14) =
           CONCAT44(fVar11 * (float)(~-(uint)(fVar15 <= 0.0) &
                                    (uint)((3.0 - fVar15 * fVar10 * fVar10) * fVar10 * 0.5)),
                    fVar9 * (float)(~-(uint)(fVar14 <= 0.0) &
                                   (uint)((3.0 - fVar14 * fVar8 * fVar8) * fVar8 * 0.5)));
      *(float *)(lVar3 + 0x10 + lVar4 * 0x14) =
           -(*(float *)(lVar3 + 0xc + lVar4 * 0x14) * *(float *)(lVar3 + 4 + lVar4 * 0x14) +
            *(float *)(lVar3 + 8 + lVar4 * 0x14) * *(float *)(lVar3 + lVar4 * 0x14));
      fVar8 = *(float *)(lVar3 + lVar4 * 0x14);
      fVar9 = *(float *)(param_1 + 2);
      if (fVar8 <= *(float *)(param_1 + 2)) {
        fVar9 = fVar8;
      }
      *(float *)(param_1 + 2) = fVar9;
      fVar8 = *(float *)(lVar3 + 4 + lVar4 * 0x14);
      fVar9 = *(float *)((longlong)param_1 + 0x14);
      if (fVar8 <= *(float *)((longlong)param_1 + 0x14)) {
        fVar9 = fVar8;
      }
      *(float *)((longlong)param_1 + 0x14) = fVar9;
      fVar8 = *(float *)(lVar3 + lVar4 * 0x14);
      fVar9 = *(float *)(param_1 + 3);
      if (*(float *)(param_1 + 3) <= fVar8) {
        fVar9 = fVar8;
      }
      *(float *)(param_1 + 3) = fVar9;
      fVar8 = *(float *)(lVar3 + 4 + lVar4 * 0x14);
      fVar9 = *(float *)((longlong)param_1 + 0x1c);
      if (*(float *)((longlong)param_1 + 0x1c) <= fVar8) {
        fVar9 = fVar8;
      }
      *(float *)((longlong)param_1 + 0x1c) = fVar9;
      iVar6 = (int)param_1[1];
      lVar4 = lVar4 + 1;
    } while (iVar7 < iVar6);
  }
  return;
}



// FUNCTION 1438c6de0 FUN_1438c6de0 body=563 status=ok
// SIG undefined FUN_1438c6de0(void)

float FUN_1438c6de0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_48;
  float fStack_44;
  
  iVar1 = (int)param_1[1];
  iVar8 = -1;
  iVar7 = 0;
  fStack_44 = (float)((ulonglong)param_2 >> 0x20);
  local_48 = (float)param_2;
  fVar12 = 0.0;
  if (3 < iVar1) {
    pfVar3 = (float *)(*param_1 + 0x20);
    iVar6 = 2;
    do {
      fVar9 = fStack_44 * pfVar3[-5] + local_48 * pfVar3[-6] + pfVar3[-4];
      if (fVar12 < fVar9) {
        fVar12 = fVar9;
        iVar8 = iVar7;
      }
      fVar9 = local_48 * pfVar3[-1] + fStack_44 * *pfVar3 + pfVar3[1];
      if (fVar12 < fVar9) {
        iVar8 = iVar6 + -1;
        fVar12 = fVar9;
      }
      fVar9 = fStack_44 * pfVar3[5] + local_48 * pfVar3[4] + pfVar3[6];
      if (fVar12 < fVar9) {
        fVar12 = fVar9;
        iVar8 = iVar6;
      }
      fVar9 = fStack_44 * pfVar3[10] + local_48 * pfVar3[9] + pfVar3[0xb];
      if (fVar12 < fVar9) {
        iVar8 = iVar6 + 1;
        fVar12 = fVar9;
      }
      pfVar3 = pfVar3 + 0x14;
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 4;
    } while (iVar7 < iVar1 + -3);
  }
  if (iVar7 < iVar1) {
    pfVar3 = (float *)(*param_1 + ((longlong)iVar7 * 5 + 2) * 4);
    do {
      fVar9 = fStack_44 * pfVar3[1] + local_48 * *pfVar3 + pfVar3[2];
      if (fVar12 < fVar9) {
        fVar12 = fVar9;
        iVar8 = iVar7;
      }
      pfVar3 = pfVar3 + 5;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  if (iVar8 != -1) {
    lVar2 = *param_1;
    lVar4 = (longlong)iVar8;
    iVar7 = 0;
    if (iVar8 + 1 != iVar1) {
      iVar7 = iVar8 + 1;
    }
    lVar5 = (longlong)iVar7;
    fVar11 = *(float *)(lVar2 + lVar5 * 0x14) - *(float *)(lVar2 + lVar4 * 0x14);
    fVar10 = *(float *)(lVar2 + 4 + lVar5 * 0x14) - *(float *)(lVar2 + 4 + lVar4 * 0x14);
    fVar9 = 1.0 / (fVar10 * fVar10 + fVar11 * fVar11);
    fVar9 = (fStack_44 - *(float *)(lVar2 + 4 + lVar4 * 0x14)) * fVar10 * fVar9 +
            (local_48 - *(float *)(lVar2 + lVar4 * 0x14)) * fVar11 * fVar9;
    if (0.0 <= fVar9) {
      if (fVar9 <= 1.0) {
        return fVar12;
      }
      fVar12 = *(float *)(lVar2 + lVar5 * 0x14);
      fVar9 = *(float *)(lVar2 + 4 + lVar5 * 0x14);
    }
    else {
      fVar12 = *(float *)(lVar2 + lVar4 * 0x14);
      fVar9 = *(float *)(lVar2 + 4 + lVar4 * 0x14);
    }
    fVar12 = SQRT((fStack_44 - fVar9) * (fStack_44 - fVar9) +
                  (local_48 - fVar12) * (local_48 - fVar12));
  }
  return fVar12;
}



// FUNCTION 1438c7020 FUN_1438c7020 body=157 status=ok
// SIG undefined FUN_1438c7020(void)

ulonglong FUN_1438c7020(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  float local_res8;
  float fStackX_c;
  
  uVar7 = (int)param_1[1] - 1;
  lVar1 = *param_1;
  local_res8 = (float)param_2;
  fStackX_c = (float)((ulonglong)param_2 >> 0x20);
  uVar5 = 0;
  if (0 < (int)uVar7) {
    pfVar4 = (float *)(lVar1 + 8);
    uVar6 = uVar5;
    bVar3 = 0.0 < local_res8 * *(float *)(lVar1 + 0xc + (longlong)(int)uVar7 * 0x14) -
                  fStackX_c * *(float *)(lVar1 + 8 + (longlong)(int)uVar7 * 0x14);
    do {
      bVar2 = 0.0 < local_res8 * pfVar4[1] - fStackX_c * *pfVar4;
      if ((!bVar3) && (bVar2)) {
        return uVar6;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 5;
      bVar3 = bVar2;
    } while ((longlong)uVar5 < (longlong)(int)uVar7);
  }
  return (ulonglong)uVar7;
}



// FUNCTION 1438c70c0 FUN_1438c70c0 body=587 status=ok
// SIG undefined FUN_1438c70c0(void)

void FUN_1438c70c0(longlong *param_1,longlong param_2,uint param_3,float *param_4,float *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_res18;
  
  *(uint *)(param_1 + 4) = param_3;
  lVar2 = *(longlong *)((ulonglong)(param_3 >> 0x16) * 0x100 + *(longlong *)(param_2 + 0x38));
  lVar3 = *(longlong *)(lVar2 + 0x18);
  piVar6 = (int *)FUN_1437fb610(*(undefined8 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x20),
                                lVar3 + 0xb0,lVar3 + 0xd0,lVar3 + 0x90,param_3 & 0x3fffff);
  iVar11 = (int)(short)piVar6[2];
  uVar7 = FUN_143703a50();
  uVar9 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar9 < iVar11) {
    iVar1 = uVar9 * 2;
    if (iVar11 < iVar1) {
      iVar11 = iVar1;
    }
    FUN_14370c310(uVar7,param_1,iVar11,0x14);
  }
  iVar11 = (int)(short)piVar6[2];
  uVar7 = FUN_143703a50();
  uVar9 = *(uint *)((longlong)param_1 + 0x34) & 0x3fffffff;
  if ((int)uVar9 < iVar11) {
    iVar1 = uVar9 * 2;
    if (iVar11 < iVar1) {
      iVar11 = iVar1;
    }
    FUN_14370c310(uVar7,param_1 + 5,iVar11,4);
  }
  iVar11 = 0;
  if (0 < (short)piVar6[2]) {
    do {
      lVar3 = *(longlong *)(lVar2 + 0x18);
      piVar8 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30),
                                    lVar3 + 0xc0,lVar3 + 0xe0,lVar3 + 0x70,*piVar6 + iVar11);
      iVar1 = *piVar8;
      if (iVar1 < *(int *)(lVar3 + 0x40)) {
        pfVar10 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar10 = (float *)((longlong)(iVar1 - *(int *)(lVar3 + 0x40)) * 0x10 +
                           *(longlong *)(lVar3 + 0xf0));
      }
      fVar14 = *pfVar10;
      fVar4 = pfVar10[1];
      fVar5 = pfVar10[2];
      iVar11 = iVar11 + 1;
      iVar1 = (int)param_1[1];
      fVar12 = fVar14 * *(float *)(lVar2 + 0x40) + fVar4 * *(float *)(lVar2 + 0x50) +
               fVar5 * *(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x70);
      fVar13 = fVar14 * *(float *)(lVar2 + 0x44) + fVar4 * *(float *)(lVar2 + 0x54) +
               fVar5 * *(float *)(lVar2 + 100) + *(float *)(lVar2 + 0x74);
      fVar14 = fVar14 * *(float *)(lVar2 + 0x48) + fVar4 * *(float *)(lVar2 + 0x58) +
               fVar5 * *(float *)(lVar2 + 0x68) + *(float *)(lVar2 + 0x78);
      *(int *)(param_1 + 1) = iVar1 + 1;
      lVar3 = *param_1;
      *(float *)(lVar3 + (longlong)iVar1 * 0x14) =
           param_4[1] * fVar13 + *param_4 * fVar12 + param_4[2] * fVar14;
      *(float *)(lVar3 + 4 + (longlong)iVar1 * 0x14) =
           fVar13 * param_5[1] + fVar12 * *param_5 + fVar14 * param_5[2];
      *(int *)(param_1[5] + (longlong)(int)param_1[6] * 4) = *piVar8;
      *(int *)(param_1 + 6) = (int)param_1[6] + 1;
    } while (iVar11 < (short)piVar6[2]);
  }
  if (1 < (int)param_1[6]) {
    local_res18 = (undefined1)param_3;
    FUN_1438c6b10(param_1[5],0,(int)param_1[6] + -1,local_res18);
  }
  FUN_1438c6be0(param_1);
  return;
}



// FUNCTION 1438c7310 FUN_1438c7310 body=104 status=ok
// SIG undefined FUN_1438c7310(void)

ulonglong FUN_1438c7310(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  float local_18;
  float fStack_14;
  
  pfVar1 = (float *)*param_1;
  pfVar3 = (float *)(longlong)*(int *)(param_1 + 1);
  lVar2 = (longlong)pfVar3 * 5;
  if (pfVar1 != pfVar1 + lVar2) {
    fStack_14 = (float)((ulonglong)param_2 >> 0x20);
    local_18 = (float)param_2;
    pfVar4 = pfVar1 + 2;
    do {
      if (0.0 < fStack_14 * pfVar4[1] + local_18 * *pfVar4 + pfVar4[2]) {
        return (ulonglong)pfVar3 & 0xffffffffffffff00;
      }
      pfVar3 = pfVar4 + 3;
      pfVar4 = pfVar4 + 5;
    } while (pfVar3 != pfVar1 + lVar2);
  }
  return CONCAT71((int7)((ulonglong)pfVar3 >> 8),1);
}



// FUNCTION 1438c7380 FUN_1438c7380 body=559 status=ok
// SIG undefined FUN_1438c7380(void)

ulonglong FUN_1438c7380(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  if ((((*(float *)(param_2 + 3) < *(float *)(param_1 + 2)) ||
       (*(float *)(param_1 + 3) < *(float *)(param_2 + 2))) ||
      (*(float *)((longlong)param_2 + 0x1c) < *(float *)((longlong)param_1 + 0x14))) ||
     (*(float *)((longlong)param_1 + 0x1c) < *(float *)((longlong)param_2 + 0x14))) {
    return in_RAX & 0xffffffffffffff00;
  }
  pfVar2 = (float *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  uVar4 = FUN_1438c7020(param_2,CONCAT44(pfVar2[(longlong)(iVar1 + -1) * 5 + 3],
                                         pfVar2[(longlong)(iVar1 + -1) * 5 + 2]) ^
                                0x8000000080000000);
  lVar3 = *param_2;
  iVar11 = 0;
  lVar12 = (longlong)(int)uVar4;
  uVar8 = (ulonglong)uVar4;
  pfVar6 = pfVar2;
  lVar9 = lVar12;
  do {
    uVar5 = lVar9 * 5;
    if (0.0 <= pfVar6[2] * *(float *)(lVar3 + 0xc + lVar9 * 0x14) -
               pfVar6[3] * *(float *)(lVar3 + 8 + lVar9 * 0x14)) {
      if (0.0 < pfVar6[1] * *(float *)(lVar3 + 0xc + lVar9 * 0x14) +
                *pfVar6 * *(float *)(lVar3 + 8 + lVar9 * 0x14) +
                *(float *)(lVar3 + 0x10 + lVar9 * 0x14)) goto LAB_1438c75a3;
      uVar7 = (int)uVar8 + 1;
      lVar10 = lVar9 + 1;
      lVar9 = 0;
      if (uVar7 != *(uint *)(param_2 + 1)) {
        lVar9 = lVar10;
      }
      uVar5 = 0;
      if (uVar7 != *(uint *)(param_2 + 1)) {
        uVar5 = (ulonglong)uVar7;
      }
      bVar13 = lVar9 == lVar12;
      uVar8 = uVar5;
    }
    else {
      if (0.0 < pfVar6[3] * *(float *)(lVar3 + 4 + lVar9 * 0x14) +
                pfVar6[2] * *(float *)(lVar3 + lVar9 * 0x14) + pfVar6[4]) goto LAB_1438c75a3;
      iVar11 = iVar11 + 1;
      pfVar6 = pfVar6 + 5;
      bVar13 = iVar11 == iVar1;
    }
  } while (!bVar13);
  lVar9 = (longlong)(int)(uint)uVar8;
  if (iVar11 != iVar1) {
    lVar10 = (longlong)iVar11;
    uVar5 = lVar10 * 5;
    pfVar6 = pfVar2 + lVar10 * 5 + 2;
    do {
      if (0.0 < *(float *)(lVar3 + 4 + lVar9 * 0x14) * pfVar6[1] +
                *(float *)(lVar3 + lVar9 * 0x14) * *pfVar6 + pfVar6[2]) goto LAB_1438c75a3;
      lVar10 = lVar10 + 1;
      pfVar6 = pfVar6 + 5;
    } while (lVar10 != iVar1);
  }
  if ((uint)uVar8 != uVar4) {
    do {
      uVar5 = lVar9 * 5;
      if (0.0 < pfVar2[1] * *(float *)(lVar3 + 0xc + lVar9 * 0x14) +
                *pfVar2 * *(float *)(lVar3 + 8 + lVar9 * 0x14) +
                *(float *)(lVar3 + 0x10 + lVar9 * 0x14)) {
LAB_1438c75a3:
        return uVar5 & 0xffffffffffffff00;
      }
      uVar4 = (int)uVar8 + 1;
      lVar10 = lVar9 + 1;
      lVar9 = 0;
      if (uVar4 != *(uint *)(param_2 + 1)) {
        lVar9 = lVar10;
      }
      uVar5 = 0;
      if (uVar4 != *(uint *)(param_2 + 1)) {
        uVar5 = (ulonglong)uVar4;
      }
      uVar8 = uVar5;
    } while (lVar9 != lVar12);
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1438c75b0 FUN_1438c75b0 body=115 status=ok
// SIG undefined FUN_1438c75b0(void)

longlong FUN_1438c75b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(uint *)(param_1 + 0x20) >> 0x16 != *(uint *)(param_2 + 0x20) >> 0x16) {
    return CONCAT71((uint7)(uint3)(*(uint *)(param_2 + 0x20) >> 0x1e),1);
  }
  uVar3 = (ulonglong)*(int *)(param_1 + 0x30);
  uVar4 = uVar3;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar5 = 0;
    uVar6 = uVar5;
    do {
      if (uVar6 == (longlong)*(int *)(param_2 + 0x30)) break;
      uVar1 = *(uint *)(*(longlong *)(param_2 + 0x28) + uVar6 * 4);
      uVar4 = (ulonglong)uVar1;
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + uVar5 * 4);
      if (iVar2 < (int)uVar1) {
        uVar5 = uVar5 + 1;
      }
      else {
        if (iVar2 <= (int)uVar1) {
          return (ulonglong)(uint3)(uVar1 >> 8) << 8;
        }
        uVar6 = uVar6 + 1;
      }
    } while (uVar5 != uVar3);
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 1438c7630 FUN_1438c7630 body=431 status=ok
// SIG undefined FUN_1438c7630(void)

void FUN_1438c7630(longlong param_1,uint param_2,ulonglong param_3,code *param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  code *local_res20;
  undefined1 local_58 [4];
  int local_54;
  uint local_50;
  undefined8 local_48;
  ulonglong local_38;
  ulonglong local_30;
  
  local_res18 = (int)param_3;
  uVar5 = (ulonglong)(int)param_2;
  uVar7 = (ulonglong)local_res18;
  uVar8 = uVar5;
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    uVar11 = uVar5 & 0xffffffff;
    local_54 = (int)param_3;
    local_48 = *(undefined8 *)(param_1 + ((longlong)(int)((uint)uVar5 + local_54) >> 1) * 8);
    local_50 = (uint)uVar5;
    do {
      uVar9 = (uint)uVar11;
      local_38 = uVar8;
      local_30 = uVar7;
      pcVar6 = (char *)(*local_res20)(local_res8,*(undefined8 *)(param_1 + uVar8 * 8),local_48);
      uVar3 = local_48;
      cVar2 = *pcVar6;
      uVar4 = local_50;
      uVar5 = local_38;
      while (cVar2 != '\0') {
        lVar1 = uVar8 * 8;
        uVar8 = uVar8 + 1;
        uVar9 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar9;
        pcVar6 = (char *)(*local_res20)(local_res8,*(undefined8 *)(param_1 + 8 + lVar1),uVar3);
        uVar7 = local_30;
        uVar4 = uVar9;
        uVar5 = uVar8;
        cVar2 = *pcVar6;
      }
      local_50 = uVar4;
      local_38 = uVar5;
      pcVar6 = (char *)(*local_res20)(local_58,local_48,*(undefined8 *)(param_1 + uVar7 * 8));
      uVar3 = local_48;
      cVar2 = *pcVar6;
      iVar10 = local_54;
      while (cVar2 != '\0') {
        lVar1 = uVar7 * 8;
        uVar7 = uVar7 - 1;
        iVar10 = iVar10 + -1;
        pcVar6 = (char *)(*local_res20)(local_58,uVar3,*(undefined8 *)(param_1 + -8 + lVar1));
        uVar8 = local_38;
        uVar9 = local_50;
        cVar2 = *pcVar6;
      }
      local_54 = iVar10;
      if ((longlong)uVar7 < (longlong)uVar8) break;
      if (uVar7 != uVar8) {
        uVar3 = *(undefined8 *)(param_1 + uVar7 * 8);
        *(undefined8 *)(param_1 + uVar7 * 8) = *(undefined8 *)(param_1 + uVar8 * 8);
        *(undefined8 *)(param_1 + uVar8 * 8) = uVar3;
      }
      uVar7 = uVar7 - 1;
      local_54 = iVar10 + -1;
      uVar9 = uVar9 + 1;
      uVar11 = (ulonglong)uVar9;
      uVar8 = uVar8 + 1;
      local_50 = uVar9;
      local_38 = uVar8;
      local_30 = uVar7;
    } while ((longlong)uVar8 <= (longlong)uVar7);
    if ((int)local_res10 < local_54) {
      FUN_1438c7630(param_1,local_res10,local_54,local_res20);
    }
    uVar7 = (ulonglong)local_res18;
    if (local_res18 <= (int)uVar9) {
      return;
    }
    uVar5 = (ulonglong)uVar9;
    param_3 = uVar7;
    local_res10 = uVar9;
  } while( true );
}



// FUNCTION 1438c77f0 FUN_1438c77f0 body=686 status=ok
// SIG undefined FUN_1438c77f0(void)

undefined8 *
FUN_1438c77f0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  uint local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_88;
  undefined4 local_80;
  uint local_7c;
  undefined8 local_60;
  undefined4 local_58;
  uint local_54;
  
  param_1[1] = param_2;
  *param_1 = hkaiNavMeshBoundary::NonOverlappingConnectedHandler::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_143734b10(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  iVar5 = (int)(param_5[1] - *param_5 >> 2);
  if (1 < iVar5) {
    FUN_1438ac9e0(*param_5,0,iVar5 + -1,local_res10 & 0xff);
  }
  uVar6 = param_5[1] - *param_5 >> 2;
  uVar3 = *(uint *)((longlong)param_1 + 0x24) & 0x3fffffff;
  iVar5 = (int)uVar6;
  if ((int)uVar3 < iVar5) {
    uVar3 = uVar3 * 2;
    uVar6 = uVar6 & 0xffffffff;
    if (iVar5 < (int)uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 3,uVar6,0xc);
  }
  *(int *)(param_1 + 4) = iVar5;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar1 = param_1[3];
      local_res8[0] = *(uint *)(lVar9 + *param_5);
      *(uint *)(lVar1 + lVar7) = local_res8[0];
      lVar2 = *(longlong *)
               (*(longlong *)
                 ((ulonglong)(local_res8[0] >> 0x16) * 0x100 + *(longlong *)(local_res10 + 0x38)) +
               0x18);
      if (*(int *)(lVar2 + 0x108) == 0) {
        bVar8 = 0;
      }
      else {
        bVar8 = *(byte *)((longlong)(int)(local_res8[0] & 0x3fffff) + *(longlong *)(lVar2 + 0x100));
      }
      if ((bVar8 & 2) != 0) {
        local_res8[0] =
             (local_res8[0] >> 0x16) << 0x16 |
             *(uint *)(*(longlong *)(lVar2 + 0x168) + (longlong)(int)(local_res8[0] & 0x3fffff) * 4)
        ;
      }
      *(uint *)(lVar1 + 4 + lVar7) = local_res8[0];
      local_7c = 0x80000000;
      local_88 = 0;
      local_80 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0x80000000;
      FUN_1438c82f0(param_1 + 5,local_res8,&local_88);
      uVar4 = FUN_143703a50();
      local_58 = 0;
      if (-1 < (int)local_54) {
        FUN_143702e10(uVar4,local_60,4,local_54 & 0x3fffffff);
      }
      local_60 = 0;
      local_54 = 0x80000000;
      uVar4 = FUN_143703a50();
      local_80 = 0;
      if (-1 < (int)local_7c) {
        FUN_143702e10(uVar4,local_88,0x14,local_7c & 0x3fffffff);
      }
      *(undefined4 *)(lVar1 + 8 + lVar7) = 0xffffffff;
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0xc;
      lVar9 = lVar9 + 4;
      local_88 = 0;
      local_7c = 0x80000000;
      param_2 = local_res10;
      param_4 = local_res20;
    } while (iVar5 < *(int *)(param_1 + 4));
  }
  uVar4 = local_res18;
  iVar5 = *(int *)(param_1 + 6) + -1;
  if (-1 < iVar5) {
    local_res10._4_4_ = 0xffffffff;
    do {
      FUN_1438c70c0(param_1[5] + 8 + (longlong)iVar5 * 0x40,param_2,
                    *(undefined4 *)((longlong)iVar5 * 0x40 + param_1[5]),uVar4,param_4);
      iVar5 = iVar5 + -1;
      local_res10._0_4_ = iVar5;
    } while (-1 < iVar5);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  return param_1;
}



// FUNCTION 1438c7aa0 FUN_1438c7aa0 body=48 status=ok
// SIG undefined FUN_1438c7aa0(void)

undefined8 *
FUN_1438c7aa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = param_2;
  return param_1;
}



// FUNCTION 1438c7ad0 FUN_1438c7ad0 body=128 status=ok
// SIG undefined FUN_1438c7ad0(void)

void FUN_1438c7ad0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x28),0x20,
                  *(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x10),4,
                  *(uint *)(param_1 + 0x1c) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1438c7b50 FUN_1438c7b50 body=246 status=ok
// SIG undefined FUN_1438c7b50(void)

void FUN_1438c7b50(longlong *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  uVar6 = uVar4;
  if (0 < (int)param_1[1]) {
    do {
      lVar1 = *(longlong *)(uVar4 + *param_1);
      if (lVar1 != 0) {
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x10);
      }
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 3) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) {
    FUN_143702e10(uVar3,param_1[2],4,*(uint *)((longlong)param_1 + 0x1c) & 0x3fffffff);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar3 = FUN_143703a50();
  *(undefined4 *)(param_1 + 1) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0xc)) {
    FUN_143702e10(uVar3,*param_1,8,*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 1438c7c50 FUN_1438c7c50 body=204 status=ok
// SIG undefined FUN_1438c7c50(void)

undefined8 * FUN_1438c7c50(undefined8 *param_1,undefined8 *param_2)

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
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  iVar1 = *(int *)(param_2 + 6);
  uVar2 = param_2[5];
  uVar3 = FUN_143703a50();
  if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff) < iVar1) {
    FUN_14370c310(uVar3,param_1 + 5,iVar1,4);
  }
  FUN_142f87c00(param_1[5],uVar2,iVar1);
  *(int *)(param_1 + 6) = iVar1;
  return param_1;
}



// FUNCTION 1438c7d20 FUN_1438c7d20 body=96 status=ok
// SIG undefined FUN_1438c7d20(void)

longlong FUN_1438c7d20(longlong *param_1,int *param_2)

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
      if (*(int *)((longlong)iVar5 * 0x40 + *param_1) == iVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar5 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar5);
  }
  return 0;
}



// FUNCTION 1438c7d80 FUN_1438c7d80 body=82 status=ok
// SIG undefined FUN_1438c7d80(void)

undefined4 * FUN_1438c7d80(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x20)) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)*(int *)(param_1 + 0x10) * 0xc) ==
          -1) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *param_2 = *(undefined4 *)
                    (*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x10) * 0xc);
        return param_2;
      }
      iVar1 = *(int *)(param_1 + 0x10) + 1;
      *(int *)(param_1 + 0x10) = iVar1;
    } while (iVar1 < *(int *)(param_1 + 0x20));
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 1438c7de0 FUN_1438c7de0 body=57 status=ok
// SIG undefined FUN_1438c7de0(void)

void FUN_1438c7de0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_48 [72];
  
  FUN_1438c7aa0(local_48,param_1,param_2);
  FUN_1438c8790(local_48,param_3);
  FUN_1438c7ad0(local_48);
  return;
}



// FUNCTION 1438c7e30 FUN_1438c7e30 body=754 status=ok
// SIG undefined FUN_1438c7e30(void)

void FUN_1438c7e30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 local_res8 [2];
  longlong local_48;
  uint local_40;
  uint local_3c;
  longlong local_38;
  uint local_30;
  uint local_2c;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar7 = 0;
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  local_2c = 0x80000000;
  local_3c = 0x80000000;
  uVar5 = FUN_143703a50();
  if ((int)(local_2c & 0x3fffffff) < iVar1) {
    iVar3 = (local_2c & 0x3fffffff) * 2;
    if (iVar1 < iVar3) {
      iVar1 = iVar3;
    }
    FUN_14370c310(uVar5,&local_38,iVar1,8);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  uVar5 = FUN_143703a50();
  if ((int)(local_3c & 0x3fffffff) < iVar1) {
    iVar3 = (local_3c & 0x3fffffff) * 2;
    if (iVar1 < iVar3) {
      iVar1 = iVar3;
    }
    FUN_14370c310(uVar5,&local_48,iVar1,8);
  }
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      lVar10 = (longlong)(int)uVar9 * 0x20;
      *(undefined1 *)(uVar6 + 0x19 + *(longlong *)(param_1 + 0x28)) = 0;
      *(undefined8 *)(uVar6 + 0x10 + *(longlong *)(param_1 + 0x28)) = 0;
      *(undefined8 *)(uVar6 + 8 + *(longlong *)(param_1 + 0x28)) = 0;
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar5 = FUN_143703a50();
      if (local_30 == (local_2c & 0x3fffffff)) {
        FUN_14370c460(uVar5,&local_38,8);
      }
      *(longlong *)(local_38 + (longlong)(int)local_30 * 8) = lVar2 + lVar10;
      local_30 = local_30 + 1;
      lVar2 = *(longlong *)(param_1 + 0x28);
      uVar5 = FUN_143703a50();
      if (local_40 == (local_3c & 0x3fffffff)) {
        FUN_14370c460(uVar5,&local_48,8);
      }
      uVar8 = (int)uVar9 + 1;
      *(longlong *)(local_48 + (longlong)(int)local_40 * 8) = lVar10 + lVar2;
      local_40 = local_40 + 1;
      uVar6 = uVar6 + 0x20;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x30));
  }
  if (1 < (int)local_30) {
    FUN_1438c7630(local_38,0,local_30 - 1,&LAB_1438c8920);
  }
  if (1 < (int)local_40) {
    FUN_1438c7630(local_48,0,local_40 - 1,&LAB_1438c7e20);
  }
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (0 < (int)local_30) {
    do {
      uVar8 = (int)uVar9 + 1;
      lVar2 = *(longlong *)(uVar6 + local_38);
      lVar10 = *(longlong *)(uVar6 + local_48);
      *(longlong *)(lVar2 + 8) = lVar10;
      *(longlong *)(lVar10 + 0x10) = lVar2;
      uVar6 = uVar6 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < (int)local_30);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar5 = FUN_143703a50();
  uVar8 = *(uint *)(lVar2 + 0x1c) & 0x3fffffff;
  if ((int)uVar8 < iVar1) {
    iVar4 = uVar8 * 2;
    iVar3 = iVar1;
    if (iVar1 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_14370c310(uVar5,lVar2 + 0x10,iVar3,4);
  }
  *(int *)(lVar2 + 0x18) = iVar1;
  local_res8[0] = 0;
  uVar6 = uVar7;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      if (*(char *)(uVar7 + 0x19 + *(longlong *)(param_1 + 0x28)) == '\0') {
        FUN_1438c8670(param_1,uVar6,local_res8);
      }
      uVar8 = (int)uVar6 + 1;
      uVar7 = uVar7 + 0x20;
      uVar6 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x30));
  }
  uVar5 = FUN_143703a50();
  local_40 = 0;
  if (-1 < (int)local_3c) {
    FUN_143702e10(uVar5,local_48,8,local_3c & 0x3fffffff);
  }
  local_48 = 0;
  local_3c = 0x80000000;
  uVar5 = FUN_143703a50();
  local_30 = 0;
  if (-1 < (int)local_2c) {
    FUN_143702e10(uVar5,local_38,8,local_2c & 0x3fffffff);
  }
  return;
}



// FUNCTION 1438c8130 FUN_1438c8130 body=38 status=ok
// SIG undefined FUN_1438c8130(void)

longlong FUN_1438c8130(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2 * 0x20 + *(longlong *)(param_1 + 0x28);
  lVar1 = lVar2;
  do {
    if (*(char *)(lVar1 + 0x18) == '\0') {
      return lVar1;
    }
    *(undefined1 *)(lVar1 + 0x19) = 1;
    lVar1 = *(longlong *)(lVar1 + 0x10);
  } while (lVar1 != lVar2);
  return 0;
}



// FUNCTION 1438c8160 FUN_1438c8160 body=64 status=ok
// SIG undefined FUN_1438c8160(void)

int FUN_1438c8160(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = 0;
  if (iVar3 != 0) {
    do {
      iVar2 = (iVar3 + iVar4) / 2;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar2 * 0xc);
      if (uVar1 <= param_2) {
        if (param_2 <= uVar1) {
          return iVar2;
        }
        iVar4 = iVar2 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
    } while (iVar4 != iVar3);
  }
  return -1;
}



// FUNCTION 1438c81a0 FUN_1438c81a0 body=329 status=ok
// SIG undefined FUN_1438c81a0(void)

void FUN_1438c81a0(longlong param_1,int *param_2,longlong *param_3)

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
  undefined8 uVar23;
  float *pfVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  
  iVar27 = *param_2;
  uVar23 = FUN_143703a50();
  uVar25 = *(uint *)((longlong)param_3 + 0xc) & 0x3fffffff;
  if ((int)uVar25 < iVar27) {
    iVar3 = uVar25 * 2;
    if (iVar27 < iVar3) {
      iVar27 = iVar3;
    }
    FUN_14370c310(uVar23,param_3,iVar27,0x10);
  }
  iVar27 = 0;
  if (0 < *param_2) {
    lVar26 = 0;
    do {
      uVar25 = *(uint *)(lVar26 + *(longlong *)(param_2 + 2)) & 0x3fffff;
      lVar1 = *(longlong *)
               ((ulonglong)(*(uint *)(lVar26 + *(longlong *)(param_2 + 2)) >> 0x16) * 0x100 +
               *(longlong *)(param_1 + 0x38));
      lVar2 = *(longlong *)(lVar1 + 0x18);
      if ((int)uVar25 < *(int *)(lVar2 + 0x40)) {
        pfVar24 = (float *)((longlong)(int)uVar25 * 0x10 + *(longlong *)(lVar2 + 0x38));
      }
      else {
        pfVar24 = (float *)((longlong)(int)(uVar25 - *(int *)(lVar2 + 0x40)) * 0x10 +
                           *(longlong *)(lVar2 + 0xf0));
      }
      fVar4 = *pfVar24;
      fVar5 = pfVar24[1];
      fVar6 = pfVar24[2];
      fVar7 = *(float *)(lVar1 + 0x50);
      fVar8 = *(float *)(lVar1 + 0x54);
      fVar9 = *(float *)(lVar1 + 0x58);
      fVar10 = *(float *)(lVar1 + 0x5c);
      fVar11 = *(float *)(lVar1 + 0x40);
      fVar12 = *(float *)(lVar1 + 0x44);
      fVar13 = *(float *)(lVar1 + 0x48);
      fVar14 = *(float *)(lVar1 + 0x4c);
      fVar15 = *(float *)(lVar1 + 0x60);
      fVar16 = *(float *)(lVar1 + 100);
      fVar17 = *(float *)(lVar1 + 0x68);
      fVar18 = *(float *)(lVar1 + 0x6c);
      fVar19 = *(float *)(lVar1 + 0x70);
      fVar20 = *(float *)(lVar1 + 0x74);
      fVar21 = *(float *)(lVar1 + 0x78);
      fVar22 = *(float *)(lVar1 + 0x7c);
      uVar23 = FUN_143703a50();
      if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(uVar23,param_3,0x10);
      }
      iVar27 = iVar27 + 1;
      lVar26 = lVar26 + 4;
      pfVar24 = (float *)((longlong)(int)param_3[1] * 0x10 + *param_3);
      *pfVar24 = fVar5 * fVar7 + fVar4 * fVar11 + fVar6 * fVar15 + fVar19;
      pfVar24[1] = fVar5 * fVar8 + fVar4 * fVar12 + fVar6 * fVar16 + fVar20;
      pfVar24[2] = fVar5 * fVar9 + fVar4 * fVar13 + fVar6 * fVar17 + fVar21;
      pfVar24[3] = fVar5 * fVar10 + fVar4 * fVar14 + fVar6 * fVar18 + fVar22;
      *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    } while (iVar27 < *param_2);
  }
  return;
}



// FUNCTION 1438c82f0 FUN_1438c82f0 body=324 status=ok
// SIG undefined FUN_1438c82f0(void)

undefined8 FUN_1438c82f0(longlong *param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  
  if ((int)param_1[3] * 2 < ((int)param_1[1] + 1) * 3) {
    FUN_143734990(param_1 + 2);
  }
  iVar1 = *param_2;
  uVar8 = iVar1 * -0x61c8864f;
  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar8);
  puVar3 = (uint *)(param_1[2] + uVar6 * 8);
  if (-1 < *(int *)(param_1[2] + 4 + uVar6 * 8)) {
    do {
      if (*(int *)((longlong)(int)puVar3[1] * 0x40 + *param_1) == iVar1) {
        FUN_1438c7c50((longlong)(int)puVar3[1] * 0x40 + *param_1 + 8,param_3);
        return 0;
      }
      lVar5 = param_1[2];
      uVar6 = ((longlong)puVar3 - lVar5 >> 3) + 1U & (longlong)(int)param_1[3];
      puVar3 = (uint *)(lVar5 + uVar6 * 8);
    } while (-1 < *(int *)(lVar5 + 4 + uVar6 * 8));
  }
  uVar2 = *(uint *)(param_1 + 1);
  *puVar3 = uVar8;
  puVar3[1] = uVar2;
  uVar4 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar4,param_1,0x40);
  }
  lVar5 = (longlong)(int)param_1[1] * 0x40 + *param_1;
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x14) = 0x80000000;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined4 *)(lVar5 + 0x10) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
    *(undefined4 *)(lVar5 + 0x38) = 0;
    *(undefined4 *)(lVar5 + 0x3c) = 0x80000000;
  }
  piVar7 = (int *)((longlong)(int)param_1[1] * 0x40 + *param_1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  *piVar7 = *param_2;
  FUN_1438c7c50(piVar7 + 2,param_3);
  return 1;
}



// FUNCTION 1438c8440 FUN_1438c8440 body=545 status=ok
// SIG undefined FUN_1438c8440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1438c8440(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  float local_res8;
  undefined4 local_resc;
  undefined8 local_c8;
  float *local_c0;
  undefined4 *local_b8;
  undefined1 local_b0;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined8 local_98;
  uint local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar6 = 0;
  local_a8[0] = 0xffffffff;
  local_a0 = 0;
  local_98 = 0;
  local_78 = 0xffffffff;
  local_70 = 0;
  uVar7 = param_2 & 0x3fffff;
  local_68 = 0;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_38 = 0;
  lVar2 = *(longlong *)
           (*(longlong *)((ulonglong)(param_2 >> 0x16) * 0x100 + *(longlong *)(lVar1 + 0x38)) + 0x18
           );
  uVar5 = uVar6;
  if (*(int *)(lVar2 + 0x50) != 0) {
    uVar5 = FUN_1438360c0(*(undefined8 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x20),lVar2 + 0x120,
                          lVar2 + 0x140,lVar2 + 0x90,uVar7,*(int *)(lVar2 + 0x50));
  }
  lVar2 = *(longlong *)
           (*(longlong *)((ulonglong)(param_2 >> 0x16) * 0x100 + *(longlong *)(lVar1 + 0x38)) + 0x18
           );
  local_40 = FUN_1437fb610(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x20),lVar2 + 0xb0,
                           lVar2 + 0xd0,lVar2 + 0x90,uVar7);
  uVar7 = param_3 & 0x3fffff;
  lVar1 = *(longlong *)(lVar1 + 0x38);
  lVar2 = *(longlong *)(*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x100 + lVar1) + 0x18);
  local_48 = param_2;
  local_38 = uVar5;
  if (*(int *)(lVar2 + 0x60) != 0) {
    uVar6 = FUN_1438360c0(*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x30),lVar2 + 0x130,
                          lVar2 + 0x150,lVar2 + 0x70,uVar7,*(int *)(lVar2 + 0x60));
  }
  lVar1 = *(longlong *)(*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x100 + lVar1) + 0x18);
  local_70 = FUN_1437fb5b0(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30),lVar1 + 0xc0,
                           lVar1 + 0xe0,lVar1 + 0x70,uVar7);
  lVar1 = *(longlong *)(param_1 + 0x58);
  local_58 = _DAT_1467f06e0;
  uStack_50 = uRam00000001467f06e8;
  plVar3 = *(longlong **)(lVar1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 1;
  }
  else {
    local_resc = *(undefined4 *)(lVar1 + 0x44);
    local_res8 = *(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0x40);
    local_c8 = *(undefined8 *)(lVar1 + 0x20);
    local_c0 = &local_res8;
    local_b8 = local_a8;
    local_b0 = 0x80;
    local_78 = param_3;
    local_68 = uVar6;
    uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
  }
  return uVar4;
}



// FUNCTION 1438c8670 FUN_1438c8670 body=281 status=ok
// SIG undefined FUN_1438c8670(void)

void FUN_1438c8670(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  LPVOID pvVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  piVar3 = (int *)FUN_1438c8130();
  if (piVar3 != (int *)0x0) {
    pvVar4 = TlsGetValue(DAT_146b7bf70);
    if (pvVar4 == (LPVOID)0x0) {
      pvVar4 = DAT_146b7bf68;
    }
    piVar5 = (int *)(**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                              (*(longlong **)((longlong)pvVar4 + 0x58),0x10);
    piVar8 = (int *)0x0;
    piVar9 = piVar8;
    if (piVar5 != (int *)0x0) {
      piVar5[0] = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar9 = piVar5;
    }
    *(longlong *)(piVar9 + 2) =
         *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) + (longlong)*param_3 * 4;
    cVar2 = '\0';
    iVar7 = -1;
    piVar5 = piVar3;
    piVar10 = piVar8;
    do {
      if (((cVar2 == '\0') || ((char)piVar5[6] == '\0')) && (iVar7 != *piVar5)) {
        piVar8 = (int *)(ulonglong)((int)piVar8 + 1);
        *(int *)((longlong)piVar10 + *(longlong *)(piVar9 + 2)) = *piVar5;
        piVar10 = piVar10 + 1;
        iVar7 = *piVar5;
      }
      *(undefined1 *)((longlong)piVar5 + 0x19) = 1;
      cVar2 = (char)piVar5[6];
      piVar5 = *(int **)(piVar5 + 4);
    } while (piVar5 != piVar3);
    plVar1 = *(longlong **)(param_1 + 0x38);
    uVar6 = FUN_143703a50();
    if (*(uint *)(plVar1 + 1) == (*(uint *)((longlong)plVar1 + 0xc) & 0x3fffffff)) {
      FUN_14370c460(uVar6,plVar1,8);
    }
    *(int **)(*plVar1 + (longlong)(int)plVar1[1] * 8) = piVar9;
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    *piVar9 = (int)piVar8;
    *param_3 = *param_3 + (int)piVar8;
  }
  return;
}



// FUNCTION 1438c8790 FUN_1438c8790 body=56 status=ok
// SIG undefined FUN_1438c8790(void)

void FUN_1438c8790(longlong param_1,undefined4 param_2)

{
  (**(code **)**(undefined8 **)(param_1 + 8))();
  FUN_1438c8930(param_1,param_2);
  FUN_143729ad0(param_1 + 0x10);
  FUN_1438c7e30(param_1);
  return;
}



// FUNCTION 1438c87d0 FUN_1438c87d0 body=332 status=ok
// SIG undefined FUN_1438c87d0(void)

undefined8 FUN_1438c87d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 local_res18 [4];
  
  iVar3 = FUN_1438c8160();
  if (iVar3 == -1) {
    return 0;
  }
  lVar1 = (longlong)iVar3 * 0xc;
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 8 + lVar1) == *(int *)(param_1 + 0x14)) {
    return 1;
  }
  local_res18[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + lVar1);
  lVar4 = FUN_1438c7d20(param_1 + 0x28,local_res18);
  if (lVar4 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(lVar4 + 4);
  }
  iVar5 = 0;
  lVar4 = *(longlong *)(param_1 + 0x28) + 8 + (longlong)iVar3 * 0x40;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar6) == lVar4) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar1) = *(undefined4 *)(param_1 + 0x14)
        ;
        return 1;
      }
      cVar2 = FUN_1438c75b0(lVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar6));
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_1438c7380(lVar4,*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x48))),
         cVar2 != '\0')) {
        return 0;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar5 < *(int *)(param_1 + 0x50));
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar1) = *(undefined4 *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
    FUN_14370c460(&PTR_vftable_1467f0638,param_1 + 0x48,8);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)*(int *)(param_1 + 0x50) * 8) = lVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return 1;
}



// FUNCTION 1438c8930 FUN_1438c8930 body=970 status=ok
// SIG undefined FUN_1438c8930(void)

void FUN_1438c8930(longlong *param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint local_res18 [2];
  uint local_res20;
  int local_68;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  uint7 uStack_2f;
  
  if ((int)param_1[3] + -1 < (int)param_1[4] * 2) {
    FUN_143854a20(param_1 + 2,local_res18,(int)param_1[3] * 2);
  }
  lVar1 = param_1[2];
  uVar13 = (int)param_1[3] - 1;
  uVar10 = param_2 * -0x61c8864f;
  iVar14 = 1;
  local_68 = 0;
  uVar10 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           param_2 * -0x4f000000) & uVar13;
  lVar6 = (longlong)(int)uVar10;
  iVar3 = *(int *)(lVar1 + lVar6 * 4);
  while (iVar3 != -1) {
    if (*(uint *)(lVar1 + lVar6 * 4) == param_2) {
      iVar14 = 0;
      break;
    }
    uVar10 = uVar10 + 1 & uVar13;
    lVar6 = (longlong)(int)uVar10;
    iVar3 = *(int *)(lVar1 + lVar6 * 4);
  }
  *(int *)(param_1 + 4) = (int)param_1[4] + iVar14;
  *(uint *)(lVar1 + (longlong)(int)uVar10 * 4) = param_2;
  uVar10 = param_2 >> 0x16;
  if (((int)uVar10 < *(int *)(*param_1 + 0x40)) &&
     (lVar1 = *(longlong *)((ulonglong)uVar10 * 0x100 + *(longlong *)(*param_1 + 0x38)), lVar1 != 0)
     ) {
    lVar6 = *(longlong *)(lVar1 + 0x18);
    lVar9 = lVar1;
    piVar7 = (int *)FUN_1437fb610(*(undefined8 *)(lVar6 + 0x18),*(undefined4 *)(lVar6 + 0x20),
                                  lVar6 + 0xb0,lVar6 + 0xd0,lVar6 + 0x90,param_2 & 0x3fffff);
    if (0 < (short)piVar7[2]) {
      uVar10 = uVar10 << 0x16;
      local_res20 = uVar10;
      do {
        lVar6 = *(longlong *)(lVar9 + 0x18);
        uVar11 = *piVar7 + local_68;
        local_res18[0] = uVar10 | uVar11;
        puVar8 = (uint *)FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                                       lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,uVar11);
        lVar9 = FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                              lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,uVar11);
        iVar3 = *(int *)(lVar6 + 0x17c);
        uVar13 = *(uint *)(lVar9 + 0xc);
        if (((*(byte *)(lVar9 + 0x10) & 0x40) == 0) && (uVar13 != 0xffffffff)) {
          uVar13 = iVar3 << 0x16 | uVar13 & 0x3fffff;
        }
        lVar6 = *(longlong *)(lVar1 + 0x18);
        lVar6 = FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                              lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,uVar11);
        uVar10 = *(uint *)(lVar6 + 8);
        if (((*(byte *)(lVar6 + 0x10) & 0x40) == 0) && (uVar10 != 0xffffffff)) {
          uVar10 = iVar3 << 0x16 | uVar10 & 0x3fffff;
        }
        if ((uVar13 == 0xffffffff) ||
           (iVar3 = (**(code **)(*(longlong *)param_1[1] + 8))
                              ((longlong *)param_1[1],param_2,local_res18[0]), iVar3 == 0)) {
LAB_1438c8c8d:
          uVar10 = local_res20;
          uVar13 = local_res20 | *puVar8;
          uVar11 = local_res20 | puVar8[1];
          if (*(uint *)(param_1 + 6) == (*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff)) {
            FUN_14370c460(&PTR_vftable_1467f0638,param_1 + 5,0x20);
          }
          puVar8 = (uint *)((longlong)(int)param_1[6] * 0x20 + param_1[5]);
          *puVar8 = uVar13;
          puVar8[1] = uVar11;
          puVar8[2] = uStack_40;
          puVar8[3] = uStack_3c;
          *(undefined8 *)(puVar8 + 4) = local_38;
          *(ulonglong *)(puVar8 + 6) = (ulonglong)uStack_2f << 8;
          *(int *)(param_1 + 6) = (int)param_1[6] + 1;
        }
        else {
          uVar11 = *(uint *)(param_1 + 3);
          uVar12 = uVar11 - 1;
          uVar4 = uVar11;
          if (0 < (int)uVar12) {
            lVar6 = param_1[2];
            uVar4 = uVar13 * -0x61c8864f;
            uVar5 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                    uVar13 * -0x4f000000) & uVar12;
            lVar9 = (longlong)(int)uVar5;
            iVar3 = *(int *)(lVar6 + lVar9 * 4);
            while ((uVar4 = uVar11, iVar3 != -1 &&
                   (uVar4 = uVar5, *(uint *)(lVar6 + lVar9 * 4) != uVar13))) {
              uVar5 = uVar5 + 1 & uVar12;
              lVar9 = (longlong)(int)uVar5;
              iVar3 = *(int *)(lVar6 + lVar9 * 4);
            }
          }
          local_res18[0] = CONCAT31(local_res18[0]._1_3_,(int)uVar4 <= (int)uVar12);
          if ((int)uVar4 <= (int)uVar12) {
LAB_1438c8b9e:
            bVar2 = true;
          }
          else {
            iVar3 = (*(code *)**(undefined8 **)param_1[1])((undefined8 *)param_1[1],uVar13);
            bVar2 = false;
            if (iVar3 != 0) goto LAB_1438c8b9e;
          }
          if (!bVar2) goto LAB_1438c8c8d;
          lVar6 = *(longlong *)
                   (*(longlong *)
                     ((ulonglong)(uVar10 >> 0x16) * 0x100 + *(longlong *)(*param_1 + 0x38)) + 0x18);
          uVar11 = local_res20 | *puVar8;
          lVar6 = FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                                lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,uVar10 & 0x3fffff);
          uVar10 = (uVar10 >> 0x16) << 0x16 | *(uint *)(lVar6 + 4);
          if (uVar11 != uVar10) {
            if (*(uint *)(param_1 + 6) == (*(uint *)((longlong)param_1 + 0x34) & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,param_1 + 5,0x20);
            }
            puVar8 = (uint *)((longlong)(int)param_1[6] * 0x20 + param_1[5]);
            *puVar8 = uVar11;
            puVar8[1] = uVar10;
            puVar8[2] = uStack_40;
            puVar8[3] = uStack_3c;
            *(undefined8 *)(puVar8 + 4) = local_38;
            *(ulonglong *)(puVar8 + 6) = CONCAT71(uStack_2f,1);
            *(int *)(param_1 + 6) = (int)param_1[6] + 1;
          }
          uVar10 = local_res20;
          if ((char)local_res18[0] == '\0') {
            FUN_1438c8930(param_1,uVar13);
            uVar10 = local_res20;
          }
        }
        local_68 = local_68 + 1;
        lVar9 = lVar1;
      } while (local_68 < (short)piVar7[2]);
    }
  }
  return;
}



// FUNCTION 1438c8d00 FUN_1438c8d00 body=93 status=ok
// SIG undefined FUN_1438c8d00(void)

bool FUN_1438c8d00(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined8 local_80;
  char local_74;
  
  local_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_8c = param_1[3];
  FUN_1438ccf70(local_88,&local_98,*param_2);
  FUN_1438ce500(local_88);
  if (local_74 != '\0') {
    *param_3 = local_80;
  }
  FUN_1438cd120(local_88);
  return local_74 != '\0';
}



// FUNCTION 1438c8d60 FUN_1438c8d60 body=3090 status=ok
// SIG undefined FUN_1438c8d60(void)

void FUN_1438c8d60(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float local_res10;
  float fStackX_14;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  
  fVar20 = in_XMM2._0_4_;
  _local_128 = ZEXT416((uint)(3.1415927 / (float)param_4));
  fVar11 = (float)FUN_143716040(local_128);
  uVar4 = *(uint *)(param_2 + 1);
  fVar11 = (1.0 / fVar11) * (1.0 / fVar11);
  uVar5 = FUN_143703a50();
  uVar7 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar7 < (int)(uVar4 * 2)) {
    uVar3 = uVar4;
    if ((int)(uVar4 * 2) < (int)(uVar7 * 2)) {
      uVar3 = uVar7;
    }
    FUN_14370c310(uVar5,param_1,uVar3 * 2,8);
  }
  lVar8 = *param_2;
  iVar10 = 0;
  lVar6 = (longlong)(int)(uVar4 - 1) * 8;
  fVar12 = *(float *)(lVar8 + lVar6) - *(float *)(lVar8 + (longlong)(int)(uVar4 - 2) * 8);
  fVar16 = *(float *)(lVar8 + 4 + lVar6) - *(float *)(lVar8 + 4 + (longlong)(int)(uVar4 - 2) * 8);
  fVar13 = fVar12 * fVar12;
  fVar14 = fVar16 * fVar16;
  fVar26 = fVar14 + fVar13;
  fVar29 = fVar14 + fVar13;
  auVar22._4_4_ = fVar29;
  auVar22._0_4_ = fVar26;
  auVar22._8_4_ = fVar14 + fVar13;
  auVar22._12_4_ = fVar14 + fVar13;
  auVar22 = rsqrtps(in_XMM2,auVar22);
  fVar13 = auVar22._0_4_;
  fVar14 = auVar22._4_4_;
  fVar13 = (float)(~-(uint)(fVar26 <= 0.0) & (uint)((3.0 - fVar26 * fVar13 * fVar13) * fVar13 * 0.5)
                  );
  fVar26 = fVar13 * fVar26;
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    fVar14 = fVar16 * (float)(~-(uint)(fVar29 <= 0.0) &
                             (uint)((3.0 - fVar29 * fVar14 * fVar14) * fVar14 * 0.5));
    fVar12 = fVar12 * fVar13;
    do {
      lVar1 = *param_2;
      fVar13 = *(float *)(lVar6 + lVar1);
      fVar16 = *(float *)(lVar6 + 4 + lVar1);
      local_res10 = (float)*(undefined8 *)(lVar8 + lVar1);
      fStackX_14 = (float)((ulonglong)*(undefined8 *)(lVar8 + lVar1) >> 0x20);
      local_res10 = local_res10 - fVar13;
      fStackX_14 = fStackX_14 - fVar16;
      fVar29 = local_res10 * local_res10;
      fVar15 = fStackX_14 * fStackX_14;
      fVar27 = fVar15 + fVar29;
      fVar30 = fVar15 + fVar29;
      fVar31 = fVar15 + fVar29;
      fVar15 = fVar15 + fVar29;
      auVar2._4_4_ = fVar30;
      auVar2._0_4_ = fVar27;
      auVar2._8_4_ = fVar31;
      auVar2._12_4_ = fVar15;
      auVar22 = rsqrtps(ZEXT416((uint)local_res10),auVar2);
      fVar29 = auVar22._0_4_;
      fVar33 = auVar22._4_4_;
      fVar21 = auVar22._8_4_;
      fVar28 = auVar22._12_4_;
      fVar34 = (float)(~-(uint)(fVar27 <= 0.0) &
                      (uint)((3.0 - fVar27 * fVar29 * fVar29) * fVar29 * 0.5));
      fVar29 = (float)(~-(uint)(fVar30 <= 0.0) &
                      (uint)((3.0 - fVar30 * fVar33 * fVar33) * fVar33 * 0.5));
      local_res10 = local_res10 * fVar34;
      fStackX_14 = fStackX_14 * fVar29;
      fVar34 = fVar34 * fVar27;
      local_128._4_4_ = fVar29 * fVar30;
      local_128._0_4_ = fVar34;
      fStack_120 = (float)(~-(uint)(fVar31 <= 0.0) &
                          (uint)((3.0 - fVar31 * fVar21 * fVar21) * fVar21 * 0.5)) * fVar31;
      fStack_11c = (float)(~-(uint)(fVar15 <= 0.0) &
                          (uint)((3.0 - fVar15 * fVar28 * fVar28) * fVar28 * 0.5)) * fVar15;
      fVar29 = fStackX_14 * fVar12 - local_res10 * fVar14;
      if (fVar29 <= 0.0001) {
        if (-0.0001 <= fVar29) {
          if (local_res10 * fVar12 + fStackX_14 * fVar14 <= 0.0) {
            uVar32 = 0x80000000;
            fVar15 = -fStackX_14;
            uVar4 = 1;
            fVar26 = local_res10;
            fVar29 = fVar15;
            do {
              fVar27 = fVar29 + fVar12;
              uVar4 = uVar4 * 2;
              fVar30 = fVar26 + fVar14;
              auVar18._4_4_ = fVar30;
              auVar18._0_4_ = fVar27;
              auVar18._8_4_ = uVar32;
              auVar18._12_4_ = 0;
              fVar33 = fVar27 * fVar27;
              fVar21 = fVar30 * fVar30;
              auVar24._0_4_ = fVar21 + fVar33;
              auVar24._4_4_ = fVar21 + fVar33;
              auVar24._8_4_ = fVar21 + fVar33;
              auVar24._12_4_ = fVar21 + fVar33;
              auVar22 = rsqrtps(auVar18,auVar24);
              fVar33 = auVar22._0_4_;
              fVar21 = auVar22._4_4_;
              fVar27 = fVar27 * (float)(~-(uint)(auVar24._0_4_ <= 0.0) &
                                       (uint)((3.0 - auVar24._0_4_ * fVar33 * fVar33) * fVar33 * 0.5
                                             ));
              fVar30 = fVar30 * (float)(~-(uint)(auVar24._4_4_ <= 0.0) &
                                       (uint)((3.0 - auVar24._4_4_ * fVar21 * fVar21) * fVar21 * 0.5
                                             ));
              local_f8 = CONCAT44(fVar30,fVar27);
              uVar32 = 0;
              fVar21 = 1.0 / (fVar30 * fVar12 - fVar27 * fVar14);
              fVar31 = (fVar27 - fVar12) * fVar21;
              fVar33 = (fVar30 - fVar14) * fVar21;
              fVar34 = (fVar29 - fVar27) * fVar21;
              fVar21 = (fVar26 - fVar30) * fVar21;
              fVar28 = fVar31 * fVar31 + fVar33 * fVar33;
              fVar26 = fVar30;
              fVar29 = fVar27;
            } while (fVar11 < fVar28);
            fVar28 = 1.0 / fVar28;
            fVar26 = (fVar21 * fVar33 + fVar31 * fVar34) * fVar28;
            fVar28 = (fVar31 * fVar21 - fVar33 * fVar34) * fVar28;
            if (0 < (int)uVar4) {
              uVar9 = (ulonglong)uVar4;
              do {
                local_f0 = fVar31 * fVar20 + fVar13;
                fStack_ec = fVar33 * fVar20 + fVar16;
                uVar5 = FUN_143703a50();
                if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
                  FUN_14370c460(uVar5,param_1,8);
                }
                fVar12 = fVar28 * fVar31;
                *(ulonglong *)(*param_1 + (longlong)(int)param_1[1] * 8) =
                     CONCAT44(fStack_ec,local_f0);
                *(int *)(param_1 + 1) = (int)param_1[1] + 1;
                fVar31 = fVar26 * fVar31 - fVar28 * fVar33;
                uVar9 = uVar9 - 1;
                fVar33 = fVar12 + fVar26 * fVar33;
              } while (uVar9 != 0);
            }
            uVar4 = 1;
            fVar26 = local_res10;
            fVar12 = fStackX_14;
            do {
              fVar21 = fVar26 + fVar15;
              uVar4 = uVar4 * 2;
              fVar28 = fVar12 + local_res10;
              auVar19._4_4_ = fVar28;
              auVar19._0_4_ = fVar21;
              auVar19._8_8_ = 0;
              fVar14 = fVar21 * fVar21;
              fVar29 = fVar28 * fVar28;
              auVar25._0_4_ = fVar29 + fVar14;
              auVar25._4_4_ = fVar29 + fVar14;
              auVar25._8_4_ = fVar29 + fVar14;
              auVar25._12_4_ = fVar29 + fVar14;
              auVar22 = rsqrtps(auVar19,auVar25);
              fVar14 = auVar22._0_4_;
              fVar29 = auVar22._4_4_;
              fVar21 = fVar21 * (float)(~-(uint)(auVar25._0_4_ <= 0.0) &
                                       (uint)((3.0 - auVar25._0_4_ * fVar14 * fVar14) * fVar14 * 0.5
                                             ));
              fVar28 = fVar28 * (float)(~-(uint)(auVar25._4_4_ <= 0.0) &
                                       (uint)((3.0 - auVar25._4_4_ * fVar29 * fVar29) * fVar29 * 0.5
                                             ));
              fVar33 = 1.0 / (fVar28 * fVar15 - fVar21 * local_res10);
              fVar14 = (fVar28 - local_res10) * fVar33;
              fVar30 = (fVar12 - fVar28) * fVar33;
              fVar27 = (fVar21 - fVar15) * fVar33;
              fVar33 = (fVar26 - fVar21) * fVar33;
              fVar29 = fVar27 * fVar27 + fVar14 * fVar14;
              fVar26 = fVar21;
              fVar12 = fVar28;
            } while (fVar11 < fVar29);
            fVar29 = 1.0 / fVar29;
            fVar26 = (fVar30 * fVar14 + fVar27 * fVar33) * fVar29;
            fVar29 = (fVar27 * fVar30 - fVar14 * fVar33) * fVar29;
            if (0 < (int)uVar4) {
              uVar9 = (ulonglong)uVar4;
              do {
                local_e8 = fVar27 * fVar20 + fVar13;
                fStack_e4 = fVar14 * fVar20 + fVar16;
                uVar5 = FUN_143703a50();
                if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
                  FUN_14370c460(uVar5,param_1,8);
                }
                fVar12 = fVar29 * fVar27;
                *(ulonglong *)(*param_1 + (longlong)(int)param_1[1] * 8) =
                     CONCAT44(fStack_e4,local_e8);
                *(int *)(param_1 + 1) = (int)param_1[1] + 1;
                fVar27 = fVar26 * fVar27 - fVar29 * fVar14;
                uVar9 = uVar9 - 1;
                fVar14 = fVar12 + fVar26 * fVar14;
              } while (uVar9 != 0);
            }
            goto LAB_1438c98e6;
          }
          local_100 = -fVar14 * fVar20 + fVar13;
          fStack_fc = fVar12 * fVar20 + fVar16;
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_1,8);
          }
          uVar5 = CONCAT44(fStack_fc,local_100);
        }
        else {
          fVar15 = (fStackX_14 - fVar14) * (1.0 / fVar29);
          fVar26 = (local_res10 - fVar12) * (1.0 / fVar29);
          if (fVar11 < fVar15 * fVar15 + fVar26 * fVar26) {
            uVar4 = 1;
            fVar26 = fStackX_14;
            fVar29 = local_res10;
            do {
              fVar27 = fVar29 + fVar12;
              uVar4 = uVar4 * 2;
              fVar28 = fVar26 + fVar14;
              auVar17._4_4_ = fVar28;
              auVar17._0_4_ = fVar27;
              auVar17._8_8_ = 0;
              fVar15 = fVar27 * fVar27;
              fVar33 = fVar28 * fVar28;
              auVar23._0_4_ = fVar33 + fVar15;
              auVar23._4_4_ = fVar33 + fVar15;
              auVar23._8_4_ = fVar33 + fVar15;
              auVar23._12_4_ = fVar33 + fVar15;
              auVar22 = rsqrtps(auVar17,auVar23);
              fVar15 = auVar22._0_4_;
              fVar33 = auVar22._4_4_;
              fVar27 = fVar27 * (float)(~-(uint)(auVar23._0_4_ <= 0.0) &
                                       (uint)((3.0 - auVar23._0_4_ * fVar15 * fVar15) * fVar15 * 0.5
                                             ));
              fVar28 = fVar28 * (float)(~-(uint)(auVar23._4_4_ <= 0.0) &
                                       (uint)((3.0 - auVar23._4_4_ * fVar33 * fVar33) * fVar33 * 0.5
                                             ));
              fVar33 = 1.0 / (fVar28 * fVar12 - fVar27 * fVar14);
              fVar15 = (fVar28 - fVar14) * fVar33;
              fVar31 = (fVar29 - fVar27) * fVar33;
              fVar30 = (fVar27 - fVar12) * fVar33;
              fVar33 = (fVar26 - fVar28) * fVar33;
              fVar21 = fVar30 * fVar30 + fVar15 * fVar15;
              fVar26 = fVar28;
              fVar29 = fVar27;
            } while (fVar11 < fVar21);
            fVar21 = 1.0 / fVar21;
            fVar26 = (fVar33 * fVar15 + fVar30 * fVar31) * fVar21;
            fVar21 = (fVar30 * fVar33 - fVar15 * fVar31) * fVar21;
            if (0 < (int)uVar4) {
              uVar9 = (ulonglong)uVar4;
              do {
                local_110 = fVar30 * fVar20 + fVar13;
                fStack_10c = fVar15 * fVar20 + fVar16;
                uVar5 = FUN_143703a50();
                if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
                  FUN_14370c460(uVar5,param_1,8);
                }
                fVar12 = fVar21 * fVar30;
                *(ulonglong *)(*param_1 + (longlong)(int)param_1[1] * 8) =
                     CONCAT44(fStack_10c,local_110);
                *(int *)(param_1 + 1) = (int)param_1[1] + 1;
                fVar30 = fVar26 * fVar30 - fVar21 * fVar15;
                uVar9 = uVar9 - 1;
                fVar15 = fVar12 + fVar26 * fVar15;
              } while (uVar9 != 0);
            }
LAB_1438c98e6:
            fVar26 = (float)local_128._0_4_;
            goto LAB_1438c98f4;
          }
          local_108 = fVar26 * fVar20 + fVar13;
          fStack_104 = fVar15 * fVar20 + fVar16;
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_1,8);
          }
          uVar5 = CONCAT44(fStack_104,local_108);
        }
        *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8) = uVar5;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        fVar26 = fVar34;
      }
      else {
        fVar15 = (fStackX_14 - fVar14) * (fVar20 / fVar29);
        fVar29 = (local_res10 - fVar12) * (fVar20 / fVar29);
        fVar33 = fVar15 * fStackX_14 + fVar29 * local_res10;
        if ((fVar26 - 0.0001 <= fVar33) || (fVar34 - 0.0001 <= fVar33)) {
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_1,8);
          }
          *(ulonglong *)(*param_1 + (longlong)(int)param_1[1] * 8) =
               CONCAT44(fVar12 * fVar20 + fVar16,-fVar14 * fVar20 + fVar13);
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_1,8);
          }
          lVar1 = param_1[1];
          lVar6 = *param_1;
          *(float *)(lVar6 + (longlong)(int)lVar1 * 8) = fVar13;
          *(float *)(lVar6 + 4 + (longlong)(int)lVar1 * 8) = fVar16;
          *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_1,8);
          }
          uVar5 = CONCAT44(local_res10 * fVar20 + fVar16,-fStackX_14 * fVar20 + fVar13);
        }
        else {
          local_118 = fVar29 + fVar13;
          fStack_114 = fVar15 + fVar16;
          uVar5 = FUN_143703a50();
          if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
            FUN_14370c460(uVar5,param_1,8);
          }
          uVar5 = CONCAT44(fStack_114,local_118);
          fVar34 = fVar34 - fVar33;
        }
        *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8) = uVar5;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
        fVar26 = fVar34;
      }
LAB_1438c98f4:
      iVar10 = iVar10 + 1;
      lVar6 = lVar8;
      lVar8 = lVar8 + 8;
      fVar14 = fStackX_14;
      fVar12 = local_res10;
    } while (iVar10 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1438c9980 FUN_1438c9980 body=220 status=ok
// SIG undefined FUN_1438c9980(void)

void FUN_1438c9980(longlong *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined8 local_res8;
  
  lVar10 = *param_1;
  local_res8 = *(undefined8 *)(lVar10 + (longlong)((int)param_1[1] + -1) * 8);
  uVar3 = 0;
  uVar6 = uVar3;
  uVar7 = uVar3;
  uVar9 = uVar3;
  if (0 < (int)param_1[1]) {
    do {
      fVar11 = local_res8._4_4_ - *(float *)(uVar3 + 4 + lVar10);
      fVar12 = (float)local_res8 - *(float *)(uVar3 + lVar10);
      if (param_2 < fVar11 * fVar11 + fVar12 * fVar12) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *(undefined8 *)(uVar9 + lVar10) = *(undefined8 *)(uVar3 + lVar10);
        uVar9 = uVar9 + 8;
        lVar10 = *param_1;
        local_res8 = *(undefined8 *)(uVar3 + lVar10);
      }
      uVar5 = (int)uVar6 + 1;
      uVar3 = uVar3 + 8;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < (int)param_1[1]);
  }
  iVar8 = 1;
  if (1 < (int)uVar7) {
    iVar8 = (int)uVar7;
  }
  uVar4 = FUN_143703a50();
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x3fffffff;
  if ((int)uVar5 < iVar8) {
    iVar2 = uVar5 * 2;
    iVar1 = iVar8;
    if (iVar8 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar4,param_1,iVar1,8);
  }
  *(int *)(param_1 + 1) = iVar8;
  return;
}



// FUNCTION 1438c9a60 FUN_1438c9a60 body=472 status=ok
// SIG undefined FUN_1438c9a60(void)

void FUN_1438c9a60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  
  *param_1 = hkaiNavMeshCutFaceTask::vftable;
  param_1[4] = hkaiNavMeshCutFaceTask::vftable;
  thunk_FUN_143719c70(0x6859db66);
  uVar1 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 0x65) + -1);
  if (-1 < *(int *)(param_1 + 0x65) + -1) {
    puVar3 = (uint *)(param_1[100] + 0x1c + lVar4 * 0x60);
    do {
      uVar2 = FUN_143703a50();
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar3 + -3),8,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -0x18;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x32c)) {
    FUN_143702e10(uVar1,param_1[100],0x60,*(uint *)((longlong)param_1 + 0x32c) & 0x3fffffff);
  }
  param_1[100] = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x80000000;
  thunk_FUN_143719c70(0x32dd8c94);
  uVar1 = FUN_143703a50();
  lVar4 = (longlong)(*(int *)(param_1 + 0x65) + -1);
  if (-1 < *(int *)(param_1 + 0x65) + -1) {
    puVar3 = (uint *)(param_1[100] + 0x1c + lVar4 * 0x60);
    do {
      uVar2 = FUN_143703a50();
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        FUN_143702e10(uVar2,*(undefined8 *)(puVar3 + -3),8,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -0x18;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (-1 < (int)*(uint *)((longlong)param_1 + 0x32c)) {
    FUN_143702e10(uVar1,param_1[100],0x60,*(uint *)((longlong)param_1 + 0x32c) & 0x3fffffff);
  }
  param_1[100] = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x80000000;
  FUN_1437967d0(param_1 + 6);
  param_1[4] = hkTask::vftable;
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1438c9c40 FUN_1438c9c40 body=70 status=ok
// SIG undefined FUN_1438c9c40(void)

void FUN_1438c9c40(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = param_4;
  uStack_14 = param_4;
  uStack_10 = param_4;
  uStack_c = param_4;
  FUN_143855000(param_2,param_1,&local_18,param_3);
  *param_5 = *(undefined4 *)(param_3 + 8);
  return;
}



// FUNCTION 1438c9c90 FUN_1438c9c90 body=8 status=ok
// SIG undefined FUN_1438c9c90(void)

char * FUN_1438c9c90(void)

{
  return "CutFace";
}



// FUNCTION 1438c9ca0 FUN_1438c9ca0 body=2626 status=ok
// SIG undefined FUN_1438c9ca0(void)

/* WARNING: Removing unreachable block (ram,0x0001438c9f25) */

void FUN_1438c9ca0(longlong param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  int iVar10;
  LPVOID pvVar11;
  longlong lVar12;
  LPVOID pvVar13;
  undefined1 (*pauVar14) [16];
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_res8 [8];
  float local_res18 [2];
  longlong local_res20;
  float *pfVar28;
  undefined8 in_stack_fffffffffffffe30;
  undefined4 uVar29;
  longlong local_1b8;
  int local_1b0;
  uint local_1ac;
  longlong local_1a8;
  int local_1a0;
  longlong local_198;
  undefined4 local_190;
  uint local_18c;
  longlong local_188;
  int local_180;
  longlong local_178;
  undefined4 local_170;
  uint local_16c;
  longlong local_168;
  uint local_160;
  longlong local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_148;
  uint local_140;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  LPVOID local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
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
  
  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffe30 >> 0x20);
  pvVar11 = TlsGetValue(DAT_146b8198c);
  local_128 = pvVar11;
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d620(pvVar11,"LtCutFace","Stinit");
  }
  thunk_FUN_143719c70(0x72ec1a2d);
  plVar21 = (longlong *)((longlong)param_3 * 0x60 + *(longlong *)(param_1 + 800));
  lVar12 = plVar21[1];
  FUN_143e0ddd0(local_res8);
  puVar2 = (undefined8 *)plVar21[0xb];
  lVar19 = *plVar21;
  local_f8 = *puVar2;
  uStack_f0 = puVar2[1];
  local_e8 = puVar2[2];
  uStack_e0 = puVar2[3];
  local_d8 = puVar2[4];
  uStack_d0 = puVar2[5];
  local_c8 = *(undefined4 *)(puVar2 + 6);
  uStack_c4 = *(undefined4 *)((longlong)puVar2 + 0x34);
  uStack_c0 = *(undefined4 *)(puVar2 + 7);
  uStack_bc = *(undefined4 *)((longlong)puVar2 + 0x3c);
  pfVar28 = (float *)(lVar19 + 0x90);
  lVar12 = FUN_1437fb610(*(undefined8 *)(lVar19 + 0x18),*(undefined4 *)(lVar19 + 0x20),lVar19 + 0xb0
                         ,lVar19 + 0xd0,pfVar28,CONCAT44(uVar29,(int)lVar12) & 0xffffffff003fffff);
  sVar1 = *(short *)(lVar12 + 8);
  uVar18 = (uint)sVar1;
  thunk_FUN_143719c70(0xbcdc1799);
  iVar22 = 0;
  local_16c = 0x80000000;
  uVar17 = uVar18 + 1;
  local_178 = 0;
  local_170 = 0;
  local_160 = uVar17;
  if (uVar17 == 0) {
    local_168 = 0;
  }
  else {
    pvVar13 = TlsGetValue(DAT_146b7bf70);
    if (pvVar13 == (LPVOID)0x0) {
      pvVar13 = DAT_146b7bf68;
    }
    uVar16 = uVar17 * 0x10 + 0x7f & 0xffffff80;
    local_168 = *(longlong *)((longlong)pvVar13 + 0x18);
    uVar20 = (int)uVar16 + local_168;
    if ((*(int *)((longlong)pvVar13 + 0x10) < (int)uVar16) ||
       (*(ulonglong *)((longlong)pvVar13 + 0x20) < uVar20)) {
      local_168 = FUN_1437138c0(pvVar13);
    }
    else {
      *(ulonglong *)((longlong)pvVar13 + 0x18) = uVar20;
    }
  }
  local_16c = uVar17 | 0x80000000;
  local_178 = local_168;
  thunk_FUN_143719c70(0x9bbad363);
  local_158 = 0;
  local_150 = 0;
  local_14c = 0x80000000;
  local_140 = uVar18;
  if (sVar1 == 0) {
    local_148 = 0;
  }
  else {
    pvVar13 = TlsGetValue(DAT_146b7bf70);
    if (pvVar13 == (LPVOID)0x0) {
      pvVar13 = DAT_146b7bf68;
    }
    uVar17 = uVar18 * 4 + 0x7f & 0xffffff80;
    local_148 = *(longlong *)((longlong)pvVar13 + 0x18);
    uVar20 = (int)uVar17 + local_148;
    if ((*(int *)((longlong)pvVar13 + 0x10) < (int)uVar17) ||
       (*(ulonglong *)((longlong)pvVar13 + 0x20) < uVar20)) {
      local_148 = FUN_1437138c0(pvVar13);
    }
    else {
      *(ulonglong *)((longlong)pvVar13 + 0x18) = uVar20;
    }
  }
  local_14c = uVar18 | 0x80000000;
  local_118 = *(undefined1 (*) [16])(plVar21 + 6);
  lVar12 = (longlong)(int)plVar21[3];
  local_158 = local_148;
  if ((int)plVar21[3] < 1) {
    FMeshDrawingPolicy::SetSharedState(local_res8,(int)plVar21[1]);
  }
  else {
    pfVar28 = (float *)CONCAT44((int)((ulonglong)pfVar28 >> 0x20),(int)plVar21[1]);
    local_138 = CONCAT44((undefined4)uStack_f0,(undefined4)uStack_f0);
    uStack_130 = (undefined4)uStack_f0;
    uStack_12c = (undefined4)uStack_f0;
    FUN_143e0e260(local_res8,lVar19,(undefined1 (*) [16])(plVar21 + 6),
                  *(char *)((longlong)plVar21 + 0x4c) != '\0',pfVar28,&local_138,&local_178,
                  &local_158);
    pauVar14 = (undefined1 (*) [16])FHardwareCursor::GetHandle(local_res8);
    local_118 = *pauVar14;
    fVar4 = local_118._0_4_;
    fVar5 = local_118._4_4_;
    fVar6 = local_118._8_4_;
    auVar23._4_4_ = -(uint)(local_e8._4_4_ == fVar5);
    auVar23._0_4_ = -(uint)((float)local_e8 == fVar4);
    auVar23._8_4_ = -(uint)((float)uStack_e0 == fVar6);
    auVar23._12_4_ = -(uint)(uStack_e0._4_4_ == local_118._12_4_);
    iVar9 = movmskps((int)pauVar14,auVar23);
    if (iVar9 != 0xf) {
      fVar26 = fVar4 * fVar4;
      fVar27 = fVar5 * fVar5;
      fVar25 = fVar4 * fVar4 + fVar6 * fVar6;
      uVar17 = -(uint)(fVar27 + fVar26 < fVar25 + 0.0);
      auVar24._0_4_ = ~uVar17 & (uint)-fVar5;
      auVar24._4_4_ = ~-(uint)(fVar27 + fVar26 < fVar25 + 0.0) & (uint)fVar4;
      auVar24._8_8_ = 0;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = (uint)-fVar6 & uVar17;
      auVar7._8_4_ = (uint)fVar4 & -(uint)(fVar27 + fVar26 < fVar6 * fVar6 + fVar4 * fVar4 + 0.0);
      auVar7._12_4_ = 0;
      _local_108 = auVar24 | auVar7;
      FUN_14389f5d0(&local_e8,local_118,local_108);
    }
    local_f8 = CONCAT44(local_f8._4_4_,(float)local_f8 + *(float *)(plVar21 + 9));
  }
  local_b8 = (undefined4)plVar21[8];
  local_res20 = 0;
  local_138 = lVar12;
  uStack_b4 = local_b8;
  uStack_b0 = local_b8;
  uStack_ac = local_b8;
  if (0 < lVar12) {
    do {
      lVar19 = local_res20;
      uVar29 = (undefined4)((ulonglong)pfVar28 >> 0x20);
      iVar9 = 0;
      thunk_FUN_143719c70(0xf3cd92e7);
      local_198 = 0;
      local_190 = 0;
      local_18c = 0x80000000;
      local_180 = 0x800;
      pvVar11 = TlsGetValue(DAT_146b7bf70);
      if (pvVar11 == (LPVOID)0x0) {
        pvVar11 = DAT_146b7bf68;
      }
      lVar12 = *(longlong *)((longlong)pvVar11 + 0x18);
      if ((*(int *)((longlong)pvVar11 + 0x10) < 0x8000) ||
         (*(ulonglong *)((longlong)pvVar11 + 0x20) < lVar12 + 0x8000U)) {
        lVar12 = FUN_1437138c0(pvVar11,0x8000);
      }
      else {
        *(ulonglong *)((longlong)pvVar11 + 0x18) = lVar12 + 0x8000U;
      }
      local_18c = 0x80000800;
      local_198 = lVar12;
      local_188 = lVar12;
      thunk_FUN_143719c70(0xa3c9ad65);
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 0x80000000;
      local_1a0 = 0x10;
      pvVar11 = TlsGetValue(DAT_146b7bf70);
      if (pvVar11 == (LPVOID)0x0) {
        pvVar11 = DAT_146b7bf68;
      }
      lVar12 = *(longlong *)((longlong)pvVar11 + 0x18);
      if ((*(int *)((longlong)pvVar11 + 0x10) < 0x80) ||
         (*(ulonglong *)((longlong)pvVar11 + 0x20) < lVar12 + 0x80U)) {
        lVar12 = FUN_1437138c0(pvVar11,0x80);
      }
      else {
        *(ulonglong *)((longlong)pvVar11 + 0x18) = lVar12 + 0x80U;
      }
      local_1ac = 0x80000010;
      puVar2 = *(undefined8 **)(plVar21[2] + lVar19 * 8);
      local_1b8 = lVar12;
      local_1a8 = lVar12;
      pvVar11 = TlsGetValue(DAT_146b8198c);
      if (pvVar11 != (LPVOID)0x0) {
        FUN_14370d800(pvVar11,"StgatherSilhouettes");
      }
      plVar3 = (longlong *)puVar2[4];
      local_88 = *puVar2;
      uStack_80 = puVar2[1];
      local_78 = puVar2[2];
      uStack_70 = puVar2[3];
      (**(code **)(*plVar3 + 0x38))(plVar3,&local_88,&local_68);
      local_a8 = local_68;
      uStack_a0 = uStack_60;
      local_98 = local_58;
      uStack_90 = uStack_50;
      local_res18[0] = *(float *)((longlong)plVar21 + 0x44) + *(float *)(plVar3 + 4);
      pfVar28 = (float *)CONCAT44(uVar29,3);
      local_108._4_4_ = local_res18[0];
      local_108._0_4_ = local_res18[0];
      fStack_100 = local_res18[0];
      fStack_fc = local_res18[0];
      FUN_143832440(&local_a8,local_118,&local_b8,local_108,pfVar28);
      iVar10 = FUN_143853120(&local_a8,&local_178);
      iVar8 = local_1a0;
      lVar19 = local_1a8;
      if (iVar10 == 0) {
        if (local_1a8 == local_1b8) {
          local_1b0 = 0;
        }
        pvVar11 = TlsGetValue(DAT_146b7bf70);
        if (pvVar11 == (LPVOID)0x0) {
          pvVar11 = DAT_146b7bf68;
        }
        uVar17 = iVar8 * 4 + 0x7fU & 0xffffff80;
        if (((*(int *)((longlong)pvVar11 + 0x10) < (int)uVar17) ||
            ((int)uVar17 + lVar19 != *(longlong *)((longlong)pvVar11 + 0x18))) ||
           (*(longlong *)((longlong)pvVar11 + 0x28) == lVar19)) {
          FUN_143713ff0(pvVar11,lVar19);
        }
        else {
          *(longlong *)((longlong)pvVar11 + 0x18) = lVar19;
        }
        uVar15 = FUN_143703a50();
        local_1b0 = 0;
        if (-1 < (int)local_1ac) {
          FUN_143702e10(uVar15,local_1b8,4,local_1ac & 0x3fffffff);
        }
        iVar9 = local_180;
        lVar19 = local_188;
        if (local_188 == local_198) {
          local_190 = 0;
        }
        local_1b8 = 0;
        local_1ac = 0x80000000;
        pvVar11 = TlsGetValue(DAT_146b7bf70);
        if (pvVar11 == (LPVOID)0x0) {
          pvVar11 = DAT_146b7bf68;
        }
        uVar17 = iVar9 * 0x10 + 0x7fU & 0xffffff80;
        if (((*(int *)((longlong)pvVar11 + 0x10) < (int)uVar17) ||
            ((int)uVar17 + lVar19 != *(longlong *)((longlong)pvVar11 + 0x18))) ||
           (*(longlong *)((longlong)pvVar11 + 0x28) == lVar19)) {
LAB_1438ca4a6:
          FUN_143713ff0(pvVar11,lVar19);
        }
        else {
          *(longlong *)((longlong)pvVar11 + 0x18) = lVar19;
        }
      }
      else {
        thunk_FUN_143719c70(0x354af60);
        pfVar28 = (float *)&local_1b8;
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_88,&local_f8,&local_198,pfVar28);
        pvVar11 = TlsGetValue(DAT_146b8198c);
        if (pvVar11 != (LPVOID)0x0) {
          FUN_14370d800(pvVar11,"StaddToCutter");
        }
        lVar12 = (longlong)local_1b0;
        lVar19 = 0;
        if (0 < local_1b0) {
          do {
            local_res18[0] = *(float *)(local_1b8 + lVar19 * 4);
            if (local_res18[0] == 0.0) {
              pfVar28 = local_res18;
              FUN_1438c9c40(&local_68,&local_f8,&local_198,(int)plVar3[4],pfVar28);
              lVar19 = lVar12;
            }
            fVar4 = local_res18[0];
            if (iVar22 < (int)plVar21[4]) {
              uVar29 = 0xffffffff;
            }
            else {
              uVar29 = *(undefined4 *)((longlong)plVar3 + 0x24);
            }
            FUN_143e0e0d0(local_res8,(longlong)iVar9 * 0x10 + local_198,local_res18[0],uVar29);
            iVar9 = iVar9 + (int)fVar4;
            lVar19 = lVar19 + 1;
          } while (lVar19 < lVar12);
        }
        iVar9 = local_1a0;
        lVar19 = local_1a8;
        if (local_1a8 == local_1b8) {
          local_1b0 = 0;
        }
        pvVar11 = TlsGetValue(DAT_146b7bf70);
        if (pvVar11 == (LPVOID)0x0) {
          pvVar11 = DAT_146b7bf68;
        }
        uVar17 = iVar9 * 4 + 0x7fU & 0xffffff80;
        if (((*(int *)((longlong)pvVar11 + 0x10) < (int)uVar17) ||
            ((int)uVar17 + lVar19 != *(longlong *)((longlong)pvVar11 + 0x18))) ||
           (*(longlong *)((longlong)pvVar11 + 0x28) == lVar19)) {
          FUN_143713ff0(pvVar11,lVar19);
        }
        else {
          *(longlong *)((longlong)pvVar11 + 0x18) = lVar19;
        }
        uVar15 = FUN_143703a50();
        local_1b0 = 0;
        if (-1 < (int)local_1ac) {
          FUN_143702e10(uVar15,local_1b8,4,local_1ac & 0x3fffffff);
        }
        iVar9 = local_180;
        lVar19 = local_188;
        if (local_188 == local_198) {
          local_190 = 0;
        }
        local_1b8 = 0;
        local_1ac = 0x80000000;
        pvVar11 = TlsGetValue(DAT_146b7bf70);
        if (pvVar11 == (LPVOID)0x0) {
          pvVar11 = DAT_146b7bf68;
        }
        uVar17 = iVar9 * 0x10 + 0x7fU & 0xffffff80;
        if (((*(int *)((longlong)pvVar11 + 0x10) < (int)uVar17) ||
            ((int)uVar17 + lVar19 != *(longlong *)((longlong)pvVar11 + 0x18))) ||
           (*(longlong *)((longlong)pvVar11 + 0x28) == lVar19)) goto LAB_1438ca4a6;
        *(longlong *)((longlong)pvVar11 + 0x18) = lVar19;
      }
      uVar15 = FUN_143703a50();
      local_190 = 0;
      if (-1 < (int)local_18c) {
        FUN_143702e10(uVar15,local_198,0x10,local_18c & 0x3fffffff);
      }
      iVar22 = iVar22 + 1;
      local_res20 = local_res20 + 1;
      pvVar11 = local_128;
    } while (local_res20 < local_138);
  }
  thunk_FUN_143719c70(0xb488d316);
  pvVar13 = TlsGetValue(DAT_146b8198c);
  if (pvVar13 != (LPVOID)0x0) {
    FUN_14370d800(pvVar13,"Stconvexify");
  }
  FUN_143e0e160(local_res8,plVar21[10],&local_178,&local_158);
  thunk_FUN_143719c70(0x22353398);
  uVar17 = local_140;
  lVar19 = local_148;
  if (local_148 == local_158) {
    local_150 = 0;
  }
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  uVar17 = uVar17 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar13 + 0x10) < (int)uVar17) ||
      ((int)uVar17 + lVar19 != *(longlong *)((longlong)pvVar13 + 0x18))) ||
     (*(longlong *)((longlong)pvVar13 + 0x28) == lVar19)) {
    FUN_143713ff0(pvVar13,lVar19);
  }
  else {
    *(longlong *)((longlong)pvVar13 + 0x18) = lVar19;
  }
  uVar15 = FUN_143703a50();
  local_150 = 0;
  if (-1 < (int)local_14c) {
    FUN_143702e10(uVar15,local_158,4,local_14c & 0x3fffffff);
  }
  uVar17 = local_160;
  lVar19 = local_168;
  if (local_168 == local_178) {
    local_170 = 0;
  }
  local_158 = 0;
  local_14c = 0x80000000;
  pvVar13 = TlsGetValue(DAT_146b7bf70);
  if (pvVar13 == (LPVOID)0x0) {
    pvVar13 = DAT_146b7bf68;
  }
  uVar17 = uVar17 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((longlong)pvVar13 + 0x10) < (int)uVar17) ||
      ((int)uVar17 + lVar19 != *(longlong *)((longlong)pvVar13 + 0x18))) ||
     (*(longlong *)((longlong)pvVar13 + 0x28) == lVar19)) {
    FUN_143713ff0(pvVar13,lVar19);
  }
  else {
    *(longlong *)((longlong)pvVar13 + 0x18) = lVar19;
  }
  uVar15 = FUN_143703a50();
  local_170 = 0;
  if (-1 < (int)local_16c) {
    FUN_143702e10(uVar15,local_178,0x10,local_16c & 0x3fffffff);
  }
  local_178 = 0;
  local_16c = 0x80000000;
  FUN_143e0e030(local_res8);
  if (pvVar11 != (LPVOID)0x0) {
    FUN_14370d7a0(pvVar11,&DAT_145b8dd34);
  }
  return;
}



// FUNCTION 1438ca6f0 FUN_1438ca6f0 body=399 status=ok
// SIG undefined FUN_1438ca6f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ca6f0(longlong *param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [13];
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  byte bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  uVar12 = param_2 >> 0x1f & 3;
  uVar10 = param_2 + uVar12;
  iVar11 = (int)uVar10 >> 2;
  if (iVar11 == 0) {
    fVar40 = *(float *)(param_1 + 2);
    fVar42 = *(float *)((longlong)param_1 + 0x14);
    fVar21 = *(float *)(param_1 + 3);
    fVar13 = *(float *)(param_1 + 6) * *(float *)(param_1 + 10);
    fVar14 = *(float *)((longlong)param_1 + 0x34) * *(float *)((longlong)param_1 + 0x54);
    fVar15 = *(float *)(param_1 + 7) * *(float *)(param_1 + 0xb);
    fVar16 = *(float *)((longlong)param_1 + 0x3c) * *(float *)((longlong)param_1 + 0x5c);
    fVar17 = *(float *)(param_1 + 8);
    fVar18 = *(float *)((longlong)param_1 + 0x44);
    fVar19 = *(float *)(param_1 + 9);
    fVar20 = *(float *)((longlong)param_1 + 0x4c);
    fVar39 = fVar40 * fVar13;
    uVar22 = SUB41(fVar39,0);
    uVar23 = (undefined1)((uint)fVar39 >> 8);
    uVar24 = (undefined1)((uint)fVar39 >> 0x10);
    uVar25 = (undefined1)((uint)fVar39 >> 0x18);
    fVar39 = fVar40 * fVar14;
    uVar26 = SUB41(fVar39,0);
    uVar28 = (undefined1)((uint)fVar39 >> 8);
    uVar29 = (undefined1)((uint)fVar39 >> 0x10);
    uVar30 = (undefined1)((uint)fVar39 >> 0x18);
    fVar39 = fVar40 * fVar15;
    uVar31 = SUB41(fVar39,0);
    uVar32 = (undefined1)((uint)fVar39 >> 8);
    uVar33 = (undefined1)((uint)fVar39 >> 0x10);
    uVar34 = (undefined1)((uint)fVar39 >> 0x18);
    fVar40 = fVar40 * fVar16;
    uVar35 = SUB41(fVar40,0);
    uVar36 = (undefined1)((uint)fVar40 >> 8);
    uVar37 = (undefined1)((uint)fVar40 >> 0x10);
    uVar38 = (undefined1)((uint)fVar40 >> 0x18);
    fVar39 = fVar42 * fVar13;
    fVar40 = fVar42 * fVar14;
    fVar41 = fVar42 * fVar15;
    fVar42 = fVar42 * fVar16;
    fVar13 = fVar21 * fVar13;
    fVar14 = fVar21 * fVar14;
    fVar15 = fVar21 * fVar15;
    fVar21 = fVar21 * fVar16;
  }
  else {
    fVar18 = *(float *)(param_1 + 2);
    fVar42 = *(float *)((longlong)param_1 + 0x14);
    fVar21 = *(float *)(param_1 + 3);
    uVar2 = *(undefined8 *)((longlong)(iVar11 * 8) + *param_1);
    uVar22 = (undefined1)((ulonglong)uVar2 >> 8);
    bVar27 = (byte)((ulonglong)uVar2 >> 0x20);
    uVar3 = CONCAT13(0,CONCAT12(uVar22,(ushort)(byte)uVar2));
    auVar4[0xc] = (char)((ulonglong)uVar2 >> 0x18);
    auVar4._0_12_ = ZEXT112(bVar27) << 0x40;
    auVar5._10_3_ = auVar4._10_3_;
    auVar5._0_10_ = (unkuint10)(byte)((ulonglong)uVar2 >> 0x10) << 0x40;
    auVar9._5_8_ = 0;
    auVar9._0_5_ = auVar5._8_5_;
    auVar6[4] = uVar22;
    auVar6._0_4_ = uVar3;
    auVar6[5] = 0;
    auVar6._6_7_ = SUB137(auVar9 << 0x40,6);
    fVar13 = (((float)(uVar3 & 0xffff) + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0) *
             *(float *)(param_1 + 10);
    fVar14 = (((float)auVar6._4_4_ + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4) *
             *(float *)((longlong)param_1 + 0x54);
    fVar15 = (((float)(auVar5._8_4_ >> 0x10) * 65536.0 + (float)(auVar5._8_4_ & 0xffff)) *
              fRam00000001467f0868 + fRam00000001467f06d8) * *(float *)(param_1 + 0xb);
    fVar16 = (((float)(uint3)(auVar4._10_3_ >> 0x10) + 0.0) * fRam00000001467f086c +
             fRam00000001467f06dc) * *(float *)((longlong)param_1 + 0x5c);
    fVar17 = fVar18 * fVar13;
    uVar22 = SUB41(fVar17,0);
    uVar23 = (undefined1)((uint)fVar17 >> 8);
    uVar24 = (undefined1)((uint)fVar17 >> 0x10);
    uVar25 = (undefined1)((uint)fVar17 >> 0x18);
    fVar17 = fVar18 * fVar14;
    uVar26 = SUB41(fVar17,0);
    uVar28 = (undefined1)((uint)fVar17 >> 8);
    uVar29 = (undefined1)((uint)fVar17 >> 0x10);
    uVar30 = (undefined1)((uint)fVar17 >> 0x18);
    fVar17 = fVar18 * fVar15;
    uVar31 = SUB41(fVar17,0);
    uVar32 = (undefined1)((uint)fVar17 >> 8);
    uVar33 = (undefined1)((uint)fVar17 >> 0x10);
    uVar34 = (undefined1)((uint)fVar17 >> 0x18);
    fVar18 = fVar18 * fVar16;
    uVar35 = SUB41(fVar18,0);
    uVar36 = (undefined1)((uint)fVar18 >> 8);
    uVar37 = (undefined1)((uint)fVar18 >> 0x10);
    uVar38 = (undefined1)((uint)fVar18 >> 0x18);
    fVar17 = ((float)bVar27 + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
    fVar18 = ((float)(byte)((ulonglong)uVar2 >> 0x28) + 0.0) * fRam00000001467f0864 +
             fRam00000001467f06d4;
    fVar19 = ((float)(byte)((ulonglong)uVar2 >> 0x30) + 0.0) * fRam00000001467f0868 +
             fRam00000001467f06d8;
    fVar20 = ((float)(byte)((ulonglong)uVar2 >> 0x38) + 0.0) * fRam00000001467f086c +
             fRam00000001467f06dc;
    fVar39 = fVar42 * fVar13;
    fVar40 = fVar42 * fVar14;
    fVar41 = fVar42 * fVar15;
    fVar42 = fVar42 * fVar16;
    fVar13 = fVar21 * fVar13;
    fVar14 = fVar21 * fVar14;
    fVar15 = fVar21 * fVar15;
    fVar21 = fVar21 * fVar16;
  }
  fVar17 = fVar17 * *(float *)(param_1 + 10);
  fVar18 = fVar18 * *(float *)((longlong)param_1 + 0x54);
  fVar19 = fVar19 * *(float *)(param_1 + 0xb);
  fVar20 = fVar20 * *(float *)((longlong)param_1 + 0x5c);
  fVar16 = *(float *)(param_1 + 4);
  fVar7 = *(float *)((longlong)param_1 + 0x24);
  fVar8 = *(float *)(param_1 + 5);
  fVar42 = fVar42 + fVar7 * fVar20;
  fVar21 = fVar21 + fVar8 * fVar20;
  local_58._4_4_ = fVar39 + fVar7 * fVar17;
  local_58._0_4_ =
       (float)CONCAT13(uVar25,CONCAT12(uVar24,CONCAT11(uVar23,uVar22))) + fVar16 * fVar17;
  local_58._8_4_ = fVar13 + fVar8 * fVar17;
  local_58._12_4_ = 0;
  local_38._4_4_ = fVar41 + fVar7 * fVar19;
  local_38._0_4_ =
       (float)CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31))) + fVar16 * fVar19;
  local_38._8_4_ = fVar15 + fVar8 * fVar19;
  local_38._12_4_ = 0;
  local_48._4_4_ = fVar40 + fVar7 * fVar18;
  local_48._0_4_ =
       (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar26))) + fVar16 * fVar18;
  local_48._8_4_ = fVar14 + fVar8 * fVar18;
  local_48._12_4_ = 0;
  local_28[4] = SUB41(fVar42,0);
  local_28._0_4_ =
       (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) + fVar16 * fVar20;
  local_28[5] = (char)((uint)fVar42 >> 8);
  local_28[6] = (char)((uint)fVar42 >> 0x10);
  local_28[7] = (char)((uint)fVar42 >> 0x18);
  local_28[8] = SUB41(fVar21,0);
  local_28[9] = (char)((uint)fVar21 >> 8);
  local_28[10] = (char)((uint)fVar21 >> 0x10);
  local_28[0xb] = (char)((uint)fVar21 >> 0x18);
  local_28._12_4_ = 0;
  lVar1 = (longlong)(int)((uVar10 & 3) - uVar12) * 0x10;
  uVar2 = *(undefined8 *)(local_58 + lVar1 + 8);
  *param_3 = *(undefined8 *)(local_58 + lVar1);
  param_3[1] = uVar2;
  return;
}



// FUNCTION 1438ca880 FUN_1438ca880 body=351 status=ok
// SIG undefined FUN_1438ca880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438ca880(undefined8 *param_1,float *param_2,float *param_3,float *param_4,
                  undefined1 (*param_5) [16],float *param_6)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar3 = *(undefined8 *)(param_2 + 2);
  param_1[2] = *(undefined8 *)param_2;
  param_1[3] = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 2);
  param_1[4] = *(undefined8 *)param_3;
  param_1[5] = uVar3;
  uVar3 = *(undefined8 *)(*param_5 + 8);
  param_1[10] = *(undefined8 *)*param_5;
  param_1[0xb] = uVar3;
  auVar4 = divps(_DAT_1467f06f0,*param_5);
  fVar6 = *param_4;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = fVar6 * fVar6;
  fVar10 = fVar7 * fVar7;
  fVar11 = fVar8 * fVar8;
  fVar13 = (float)(~-(uint)(*(float *)*param_5 == 0.0) & auVar4._0_4_);
  fVar6 = fVar6 * fVar13;
  fVar7 = fVar7 * (float)(~-(uint)(*(float *)(*param_5 + 4) == 0.0) & auVar4._4_4_);
  fVar8 = fVar8 * (float)(~-(uint)(*(float *)(*param_5 + 8) == 0.0) & auVar4._8_4_);
  fVar12 = param_2[1] * fVar7 + *param_2 * fVar6 + param_2[2] * fVar8;
  auVar5._8_4_ = param_3[2] * fVar8;
  auVar5._4_4_ = auVar5._8_4_;
  auVar5._0_4_ = auVar5._8_4_;
  auVar5._12_4_ = auVar5._8_4_;
  fVar8 = param_3[1] * fVar7 + *param_3 * fVar6 + auVar5._8_4_;
  fVar7 = fVar10 + fVar9 + fVar11;
  auVar4._4_4_ = fVar10 + fVar9 + fVar11;
  auVar4._0_4_ = fVar7;
  auVar4._8_4_ = fVar10 + fVar9 + fVar11;
  auVar4._12_4_ = fVar10 + fVar9 + fVar11;
  auVar4 = rsqrtps(auVar5,auVar4);
  fVar6 = auVar4._0_4_;
  fVar6 = (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar7 * fVar6 * fVar6) * fVar6 * 0.5)) *
          *param_6;
  fVar13 = *param_6 * fVar13;
  uVar3 = CONCAT44(_DAT_1467f06e0,fVar6 * fVar12);
  param_1[6] = CONCAT44(fVar13,fVar12);
  param_1[7] = uVar3;
  uVar1 = _DAT_1467f06e0;
  *(float *)(param_1 + 8) = fVar8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  *(float *)(param_1 + 9) = fVar6 * fVar8;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
  if (_DAT_1467f0800 <= fVar13) {
    puVar2 = &DAT_145c52df0;
    if (_DAT_1467f0a10 <= fVar13) {
      puVar2 = &DAT_145c52ce0;
    }
  }
  else {
    puVar2 = &DAT_145c52f00;
  }
  *param_1 = puVar2;
  return;
}



// FUNCTION 1438ca9e0 setAll body=53 status=ok
// SIG undefined setAll(void)

void hkaiVelocityCandidateScores::setAll(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  puVar3 = (undefined8 *)*param_1;
  uVar5 = *(int *)(param_1 + 1) + 3 >> 2;
  if (0 < (int)uVar5) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar4 = (ulonglong)uVar5;
    do {
      *puVar3 = uVar1;
      puVar3[1] = uVar2;
      puVar3 = puVar3 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 1438caa20 FUN_1438caa20 body=1409 status=ok
// SIG undefined FUN_1438caa20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1438caa20(longlong *param_1,longlong *param_2,float *param_3,uint *param_4,uint *param_5,
                  uint *param_6)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [15];
  undefined1 auVar9 [14];
  bool bVar10;
  undefined1 auVar11 [15];
  bool bVar12;
  bool bVar13;
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  float fVar19;
  undefined1 auVar20 [15];
  unkuint9 Var21;
  undefined1 auVar22 [11];
  undefined1 auVar23 [13];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [12];
  unkuint10 Var27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [12];
  uint6 uVar32;
  undefined1 auVar33 [13];
  undefined1 auVar34 [11];
  undefined1 auVar35 [15];
  undefined1 auVar36 [14];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  uint uVar42;
  int iVar43;
  uint uVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  longlong lVar48;
  float *pfVar49;
  longlong lVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  ushort uVar63;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar64;
  uint uVar65;
  float fVar69;
  uint uVar70;
  undefined1 auVar66 [12];
  uint uVar73;
  float fVar74;
  undefined1 auVar67 [16];
  float fVar72;
  float fVar75;
  undefined1 auVar68 [16];
  uint uVar76;
  undefined1 auVar77 [12];
  uint uVar78;
  uint uVar79;
  uint uVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 local_198 [16];
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float fStack_164;
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
  undefined1 uVar71;
  
  lVar3 = *param_1;
  lVar48 = *param_2;
  auVar55 = *(undefined1 (*) [16])(param_1 + 10);
  uVar2 = *(ulonglong *)(lVar3 + 0xf8);
  auVar77._8_4_ = 0;
  auVar77._0_8_ = uVar2;
  fVar64 = *(float *)(lVar48 + 0x1fc);
  auVar89._0_12_ = ZEXT812(0);
  auVar89._12_4_ = 0;
  fStack_12c = *(float *)(param_1 + 6);
  fStack_13c = *(float *)(param_1 + 8);
  auVar8._12_2_ = 0;
  auVar8._0_12_ = auVar77;
  auVar8[0xe] = (char)(uVar2 >> 0x38);
  auVar11[0xc] = (char)(uVar2 >> 0x30);
  auVar11._0_12_ = auVar77;
  auVar11._13_2_ = auVar8._13_2_;
  auVar14._8_4_ = 0;
  auVar14._0_8_ = uVar2;
  auVar14._12_3_ = auVar11._12_3_;
  uVar46 = auVar14._11_4_;
  auVar15._8_2_ = 0;
  auVar15._0_8_ = uVar2;
  auVar15[10] = (char)(uVar2 >> 0x28);
  auVar15._11_4_ = uVar46;
  auVar16._8_2_ = 0;
  auVar16._0_8_ = uVar2;
  auVar16._10_5_ = auVar15._10_5_;
  auVar17[8] = (char)(uVar2 >> 0x20);
  auVar17._0_8_ = uVar2;
  auVar17._9_6_ = auVar16._9_6_;
  auVar20._7_8_ = 0;
  auVar20._0_7_ = auVar17._8_7_;
  Var21 = CONCAT81(SUB158(auVar20 << 0x40,7),(char)(uVar2 >> 0x18));
  auVar29._9_6_ = 0;
  auVar29._0_9_ = Var21;
  auVar22._1_10_ = SUB1510(auVar29 << 0x30,5);
  auVar22[0] = (char)(uVar2 >> 0x10);
  auVar30._11_4_ = 0;
  auVar30._0_11_ = auVar22;
  auVar23._1_12_ = SUB1512(auVar30 << 0x20,3);
  auVar23[0] = (char)(uVar2 >> 8);
  uVar63 = CONCAT11(0,(byte)uVar2);
  auVar18._2_13_ = auVar23;
  auVar18._0_2_ = uVar63;
  auVar9._10_2_ = 0;
  auVar9._0_10_ = auVar18._0_10_;
  auVar9._12_2_ = (short)Var21;
  uVar32 = CONCAT42(auVar9._10_4_,auVar22._0_2_);
  auVar24._6_8_ = 0;
  auVar24._0_6_ = uVar32;
  local_178 = *(undefined8 *)(lVar48 + 400);
  uStack_170 = *(longlong *)(lVar48 + 0x198);
  uVar44 = (uint)uVar32;
  local_168 = ((float)uVar63 + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
  fStack_164 = ((float)(int)CONCAT82(SUB148(auVar24 << 0x40,6),auVar23._0_2_) + 0.0) *
               fRam00000001467f0864 + fRam00000001467f06d4;
  fStack_160 = ((float)(uVar44 >> 0x10) * 65536.0 + (float)(uVar44 & 0xffff)) * fRam00000001467f0868
               + fRam00000001467f06d8;
  fVar95 = ((float)(auVar9._10_4_ >> 0x10) + 0.0) * fRam00000001467f086c + fRam00000001467f06dc;
  auVar57._0_4_ = (float)auVar17._8_2_;
  auVar57._4_4_ = (float)auVar15._10_2_;
  auVar57._8_4_ = (float)(uVar46 >> 8 & 0xffff);
  auVar57._12_4_ = (float)(uVar46 >> 0x18);
  auVar54 = rcpps(auVar57,auVar55);
  local_158 = (auVar57._0_4_ + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
  fStack_154 = (auVar57._4_4_ + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4;
  fStack_150 = (auVar57._8_4_ + 0.0) * fRam00000001467f0868 + fRam00000001467f06d8;
  fStack_14c = (auVar57._12_4_ + 0.0) * fRam00000001467f086c + fRam00000001467f06dc;
  auVar91._0_4_ = fStack_12c * fStack_12c;
  auVar91._4_4_ = fStack_12c * fStack_12c;
  auVar91._8_4_ = fStack_12c * fStack_12c;
  auVar91._12_4_ = fStack_12c * fStack_12c;
  fVar101 = (2.0 - auVar55._0_4_ * auVar54._0_4_) * auVar54._0_4_ * *param_3;
  fVar102 = (2.0 - auVar55._4_4_ * auVar54._4_4_) * auVar54._4_4_ * param_3[1];
  fVar103 = (2.0 - auVar55._8_4_ * auVar54._8_4_) * auVar54._8_4_ * param_3[2];
  fVar104 = (2.0 - auVar55._12_4_ * auVar54._12_4_) * auVar54._12_4_ * param_3[3];
  auVar54._0_4_ = fStack_13c * fStack_13c + auVar91._0_4_;
  auVar54._4_4_ = fStack_13c * fStack_13c + auVar91._4_4_;
  auVar54._8_4_ = fStack_13c * fStack_13c + auVar91._8_4_;
  auVar54._12_4_ = fStack_13c * fStack_13c + auVar91._12_4_;
  auVar55 = sqrtps(auVar91,auVar54);
  auVar55 = divps(_DAT_1467f06f0,auVar55);
  local_148 = (float)(~-(uint)(auVar54._0_4_ <= 0.0) & auVar55._0_4_);
  fStack_144 = (float)(~-(uint)(auVar54._4_4_ <= 0.0) & auVar55._4_4_);
  fStack_140 = (float)(~-(uint)(auVar54._8_4_ <= 0.0) & auVar55._8_4_);
  fVar74 = (float)(~-(uint)(auVar54._12_4_ <= 0.0) & auVar55._12_4_);
  local_198 = ZEXT416(*param_4);
  local_138 = fStack_12c * local_148;
  fStack_134 = fStack_12c * fStack_144;
  fStack_130 = fStack_12c * fStack_140;
  fStack_12c = fStack_12c * fVar74;
  local_148 = fStack_13c * local_148;
  fStack_144 = fStack_13c * fStack_144;
  fStack_140 = fStack_13c * fStack_140;
  fStack_13c = fStack_13c * fVar74;
  fStack_15c = fVar95;
  fVar74 = (float)FUN_143716150(local_198);
  auVar55._4_4_ = fRam00000001467f06d4;
  auVar55._0_4_ = _DAT_1467f06d0;
  auVar55._8_4_ = fRam00000001467f06d8;
  auVar55._12_4_ = fRam00000001467f06dc;
  pfVar49 = (float *)(lVar48 + 0x180);
  local_198 = ZEXT816(0);
  uVar46 = 0x1e;
  local_188 = 0;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  uVar44 = 0;
  uVar78 = 0;
  uVar79 = 0;
  uVar80 = 0;
  iVar47 = 0xc0;
  lVar50 = 8;
  do {
    fVar69 = *pfVar49;
    fVar72 = pfVar49[1];
    fVar75 = pfVar49[2];
    fVar19 = pfVar49[3];
    uVar2 = *(ulonglong *)(iVar47 + lVar3);
    auVar66._8_4_ = 0;
    auVar66._0_8_ = uVar2;
    uVar71 = (undefined1)(uVar2 >> 0x38);
    auVar35._12_2_ = 0;
    auVar35._0_12_ = auVar66;
    auVar35[0xe] = uVar71;
    auVar37[0xc] = (char)(uVar2 >> 0x30);
    auVar37._0_12_ = auVar66;
    auVar37._13_2_ = auVar35._13_2_;
    auVar38._8_4_ = 0;
    auVar38._0_8_ = uVar2;
    auVar38._12_3_ = auVar37._12_3_;
    auVar39._8_2_ = 0;
    auVar39._0_8_ = uVar2;
    auVar39[10] = (char)(uVar2 >> 0x28);
    auVar39._11_4_ = auVar38._11_4_;
    auVar40._8_2_ = 0;
    auVar40._0_8_ = uVar2;
    auVar40._10_5_ = auVar39._10_5_;
    auVar41[8] = (char)(uVar2 >> 0x20);
    auVar41._0_8_ = uVar2;
    auVar41._9_6_ = auVar40._9_6_;
    Var27 = CONCAT91((unkuint9)auVar41._8_7_ << 8,(char)(uVar2 >> 0x18));
    auVar34[10] = 0;
    auVar34._0_10_ = Var27;
    auVar26._1_11_ = auVar34 << 8;
    auVar26[0] = (char)(uVar2 >> 0x10);
    auVar33[0xc] = 0;
    auVar33._0_12_ = auVar26;
    auVar25._1_13_ = auVar33 << 8;
    auVar25[0] = (char)(uVar2 >> 8);
    auVar67._0_2_ = CONCAT11(0,(byte)uVar2);
    auVar67._2_14_ = auVar25;
    auVar31._10_2_ = auVar89._14_2_;
    auVar31._0_10_ = (unkuint10)CONCAT14(uVar71,CONCAT22(auVar89._12_2_,auVar37._12_2_)) << 0x20;
    uVar63 = (ushort)Var27;
    auVar36._10_2_ = 0;
    auVar36._0_10_ = auVar67._0_10_;
    auVar36._12_2_ = uVar63;
    uVar32 = CONCAT42(auVar36._10_4_,auVar26._0_2_);
    auVar28._2_10_ = (unkuint10)uVar32 << 0x10;
    auVar28._0_2_ = auVar25._0_2_;
    uVar42 = (uint)uVar32;
    fVar92 = ((float)auVar67._0_2_ + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
    fVar93 = ((float)auVar28._0_4_ + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4;
    fVar94 = ((float)(uVar42 >> 0x10) * 65536.0 + (float)(uVar42 & 0xffff)) * fRam00000001467f0868 +
             fRam00000001467f06d8;
    fVar96 = ((float)uVar63 + 0.0) * fRam00000001467f086c + fRam00000001467f06dc;
    fVar97 = ((float)auVar89._8_2_ * 65536.0 + (float)auVar41._8_2_) * _DAT_1467f0860 +
             _DAT_1467f06d0;
    fVar98 = ((float)auVar89._10_2_ * 65536.0 + (float)auVar39._10_2_) * fRam00000001467f0864 +
             fRam00000001467f06d4;
    fVar99 = ((float)auVar89._12_2_ * 65536.0 + (float)auVar37._12_2_) * fRam00000001467f0868 +
             fRam00000001467f06d8;
    fVar100 = ((float)(auVar31._8_4_ >> 0x10) * 65536.0 + (float)(auVar31._8_4_ & 0xffff)) *
              fRam00000001467f086c + fRam00000001467f06dc;
    uVar42 = uVar46 - 4 & 0x80000007;
    if ((int)uVar42 < 0) {
      uVar42 = (uVar42 - 1 | 0xfffffff8) + 1;
    }
    bVar12 = fVar64 < fVar101 && fVar69 < fVar101;
    bVar13 = fVar69 < fVar102 && fVar72 < fVar102;
    bVar10 = fVar72 < fVar103 && fVar75 < fVar103;
    bVar4 = fVar75 < fVar104 && fVar19 < fVar104;
    puVar1 = (undefined4 *)(lVar48 + (longlong)(int)(uVar42 + 0x18) * 0x10);
    auVar5._4_4_ = -(uint)bVar13;
    auVar5._0_4_ = -(uint)bVar12;
    auVar5._8_4_ = -(uint)bVar10;
    auVar5._12_4_ = -(uint)bVar4;
    iVar43 = movmskps((uVar42 + 0x18) * 2,auVar5);
    iVar45 = 0;
    if (iVar43 != 0) {
      uVar44 = uVar46 & 0x80000007;
      if ((int)uVar44 < 0) {
        uVar44 = (uVar44 - 1 | 0xfffffff8) + 1;
      }
      iVar45 = (uVar44 + 0x18) * 2;
      fVar81 = fVar92 * fVar69 - fVar95 * fVar64;
      fVar82 = fVar93 * fVar72 - fVar92 * fVar69;
      fVar83 = fVar94 * fVar75 - fVar93 * fVar72;
      fVar84 = fVar96 * fVar19 - fVar94 * fVar75;
      auVar6._4_4_ = fVar102;
      auVar6._0_4_ = fVar101;
      auVar6._8_4_ = fVar103;
      auVar6._12_4_ = fVar104;
      auVar54 = minps(*(undefined1 (*) [16])(lVar48 + (longlong)(int)(uVar44 + 0x18) * 0x10),auVar6)
      ;
      fVar85 = fVar97 * fVar69 - fStack_14c * fVar64;
      fVar86 = fVar98 * fVar72 - fVar97 * fVar69;
      fVar87 = fVar99 * fVar75 - fVar98 * fVar72;
      fVar88 = fVar100 * fVar19 - fVar99 * fVar75;
      auVar60._0_4_ = fVar85 * fVar85 + fVar81 * fVar81;
      auVar60._4_4_ = fVar86 * fVar86 + fVar82 * fVar82;
      auVar60._8_4_ = fVar87 * fVar87 + fVar83 * fVar83;
      auVar60._12_4_ = fVar88 * fVar88 + fVar84 * fVar84;
      auVar56._0_12_ = ZEXT812(0);
      auVar56._12_4_ = 0;
      auVar57 = rsqrtps(auVar56,auVar60);
      fVar64 = (float)(~-(uint)(auVar60._0_4_ <= 0.0) & auVar57._0_4_);
      fVar69 = (float)(~-(uint)(auVar60._4_4_ <= 0.0) & auVar57._4_4_);
      fVar72 = (float)(~-(uint)(auVar60._8_4_ <= 0.0) & auVar57._8_4_);
      fVar75 = (float)(~-(uint)(auVar60._12_4_ <= 0.0) & auVar57._12_4_);
      fVar81 = fVar81 * fVar64;
      fVar82 = fVar82 * fVar69;
      fVar83 = fVar83 * fVar72;
      fVar84 = fVar84 * fVar75;
      fVar85 = fVar85 * fVar64;
      fVar86 = fVar86 * fVar69;
      fVar87 = fVar87 * fVar72;
      fVar88 = fVar88 * fVar75;
      auVar68._4_4_ = *puVar1;
      auVar68._0_4_ = uStack_170._4_4_;
      auVar68._8_4_ = puVar1[1];
      auVar68._12_4_ = puVar1[2];
      auVar7._4_4_ = fVar102;
      auVar7._0_4_ = fVar101;
      auVar7._8_4_ = fVar103;
      auVar7._12_4_ = fVar104;
      auVar57 = minps(auVar68,auVar7);
      auVar90._0_4_ = (fVar95 + fVar92) * fVar85 - (fStack_14c + fVar97) * fVar81;
      auVar90._4_4_ = (fVar92 + fVar93) * fVar86 - (fVar97 + fVar98) * fVar82;
      auVar90._8_4_ = (fVar93 + fVar94) * fVar87 - (fVar98 + fVar99) * fVar83;
      auVar90._12_4_ = (fVar94 + fVar96) * fVar88 - (fVar99 + fVar100) * fVar84;
      auVar91 = maxps(auVar90,_DAT_1467f06e0);
      uVar42 = -(uint)((fVar85 * local_148 + fVar81 * local_138) * fVar101 <
                      (auVar54._0_4_ - auVar57._0_4_) * _DAT_1467f07e0);
      uVar51 = -(uint)((fVar86 * fStack_144 + fVar82 * fStack_134) * fVar102 <
                      (auVar54._4_4_ - auVar57._4_4_) * fRam00000001467f07e4);
      uVar52 = -(uint)((fVar87 * fStack_140 + fVar83 * fStack_130) * fVar103 <
                      (auVar54._8_4_ - auVar57._8_4_) * fRam00000001467f07e8);
      uVar53 = -(uint)((fVar88 * fStack_13c + fVar84 * fStack_12c) * fVar104 <
                      (auVar54._12_4_ - auVar57._12_4_) * fRam00000001467f07ec);
      fVar64 = auVar91._0_4_ * (float)(~uVar42 & (uint)auVar57._0_4_ | uVar42 & (uint)auVar54._0_4_)
      ;
      fVar95 = auVar91._4_4_ * (float)(~uVar51 & (uint)auVar57._4_4_ | uVar51 & (uint)auVar54._4_4_)
      ;
      fVar69 = auVar91._8_4_ * (float)(~uVar52 & (uint)auVar57._8_4_ | uVar52 & (uint)auVar54._8_4_)
      ;
      fVar72 = auVar91._12_4_ *
               (float)(~uVar53 & (uint)auVar57._12_4_ | uVar53 & (uint)auVar54._12_4_);
      fVar81 = (float)((uint)fVar81 ^ uVar42 & 0x80000000);
      fVar82 = (float)((uint)fVar82 ^ uVar51 & 0x80000000);
      fVar83 = (float)((uint)fVar83 ^ uVar52 & 0x80000000);
      fVar84 = (float)((uint)fVar84 ^ uVar53 & 0x80000000);
      uVar65 = -(uint)((0.0 - fVar74 < fVar81 && bVar12) && auVar55._0_4_ < fVar64);
      uVar70 = -(uint)((0.0 - fVar74 < fVar82 && bVar13) && auVar55._4_4_ < fVar95);
      uVar73 = -(uint)((0.0 - fVar74 < fVar83 && bVar10) && auVar55._8_4_ < fVar69);
      uVar76 = -(uint)((0.0 - fVar74 < fVar84 && bVar4) && auVar55._12_4_ < fVar72);
      auVar58._0_4_ = ~uVar65 & (uint)auVar55._0_4_;
      auVar58._4_4_ = ~uVar70 & (uint)auVar55._4_4_;
      auVar58._8_4_ = ~uVar73 & (uint)auVar55._8_4_;
      auVar58._12_4_ = ~uVar76 & (uint)auVar55._12_4_;
      auVar105._4_4_ = uVar70 & (uint)fVar95;
      auVar105._0_4_ = uVar65 & (uint)fVar64;
      auVar105._8_4_ = uVar73 & (uint)fVar69;
      auVar105._12_4_ = uVar76 & (uint)fVar72;
      auVar55 = auVar105 | auVar58;
      uVar44 = uVar65 & (uint)fVar81 | ~uVar65 & local_198._0_4_;
      uVar78 = uVar70 & (uint)fVar82 | ~uVar70 & local_198._4_4_;
      uVar79 = uVar73 & (uint)fVar83 | ~uVar73 & local_198._8_4_;
      uVar80 = uVar76 & (uint)fVar84 | ~uVar76 & local_198._12_4_;
      local_188 = ((uint)fVar85 ^ uVar42 & 0x80000000) & uVar65 | ~uVar65 & local_188;
      uStack_184 = ((uint)fVar86 ^ uVar51 & 0x80000000) & uVar70 | ~uVar70 & uStack_184;
      uStack_180 = ((uint)fVar87 ^ uVar52 & 0x80000000) & uVar73 | ~uVar73 & uStack_180;
      uStack_17c = ((uint)fVar88 ^ uVar53 & 0x80000000) & uVar76 | ~uVar76 & uStack_17c;
      local_198._4_4_ = uVar78;
      local_198._0_4_ = uVar44;
      local_198._8_4_ = uVar79;
      local_198._12_4_ = uVar80;
      auVar89 = ZEXT816(0);
    }
    iVar47 = iVar47 + 8;
    uVar46 = uVar46 + 1;
    uStack_170 = (ulonglong)(uint)puVar1[3] << 0x20;
    pfVar49 = pfVar49 + 4;
    lVar50 = lVar50 + -1;
    fVar95 = fVar96;
    fStack_14c = fVar100;
    fVar64 = fVar19;
  } while (lVar50 != 0);
  fVar95 = auVar55._0_4_;
  fVar74 = auVar55._4_4_;
  auVar61._0_8_ = auVar55._8_8_;
  auVar61._8_4_ = fVar95;
  auVar61._12_4_ = fVar74;
  auVar57 = maxps(auVar61,auVar55);
  auVar59._4_4_ = auVar57._0_4_;
  auVar59._0_4_ = auVar57._4_4_;
  auVar59._8_4_ = auVar57._12_4_;
  auVar59._12_4_ = auVar57._8_4_;
  auVar57 = maxps(auVar57,auVar59);
  fVar64 = auVar57._0_4_;
  auVar62._4_4_ = -(uint)(fVar64 <= fVar74);
  auVar62._0_4_ = -(uint)(fVar64 <= fVar95);
  auVar62._8_4_ = -(uint)(fVar64 <= auVar55._8_4_);
  auVar62._12_4_ = -(uint)(fVar64 <= auVar55._12_4_);
  iVar47 = movmskps(iVar45,auVar62);
  lVar48 = (longlong)(4 << ((&DAT_145ba0900)[iVar47] & 0x1f));
  lVar3 = lVar48 * 4;
  bVar4 = 0.0 < (float)((uint)auVar55._12_4_ & *(uint *)(&UNK_145b8de6c + lVar3) |
                        (uint)fVar74 & *(uint *)(&UNK_145b8de64 + lVar3) |
                       (uint)auVar55._8_4_ & *(uint *)(&UNK_145b8de68 + lVar3) |
                       (uint)fVar95 & *(uint *)(&DAT_145b8de60 + lVar3));
  if (bVar4) {
    uVar44 = uVar44 & *(uint *)(&DAT_145b8de60 + lVar3);
    uVar78 = uVar78 & *(uint *)(&UNK_145b8de64 + lVar3);
    uVar79 = uVar79 & *(uint *)(&UNK_145b8de68 + lVar3);
    uVar80 = uVar80 & *(uint *)(&UNK_145b8de6c + lVar3);
    uVar46 = uVar79 | uVar44;
    uVar42 = uVar80 | uVar78;
    uVar44 = uVar44 | uVar79;
    uVar78 = uVar78 | uVar80;
    *param_5 = uVar42 | uVar46;
    param_5[1] = uVar46 | uVar42;
    param_5[2] = uVar78 | uVar44;
    param_5[3] = uVar44 | uVar78;
    lVar48 = lVar48 * 4;
    uVar46 = *(uint *)(&UNK_145b8de68 + lVar48) & uStack_180 |
             *(uint *)(&DAT_145b8de60 + lVar48) & local_188;
    uVar44 = *(uint *)(&UNK_145b8de6c + lVar48) & uStack_17c |
             *(uint *)(&UNK_145b8de64 + lVar48) & uStack_184;
    uVar78 = *(uint *)(&DAT_145b8de60 + lVar48) & local_188 |
             *(uint *)(&UNK_145b8de68 + lVar48) & uStack_180;
    uVar79 = *(uint *)(&UNK_145b8de64 + lVar48) & uStack_184 |
             *(uint *)(&UNK_145b8de6c + lVar48) & uStack_17c;
    *param_6 = uVar44 | uVar46;
    param_6[1] = uVar46 | uVar44;
    param_6[2] = uVar79 | uVar78;
    param_6[3] = uVar78 | uVar79;
  }
  return bVar4;
}



// FUNCTION 1438cafb0 FUN_1438cafb0 body=103 status=ok
// SIG undefined FUN_1438cafb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1438cafb0(float *param_1,uint *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 local_18 [16];
  
  local_18 = ZEXT416(*param_2);
  fVar1 = (float)FUN_143716040(local_18);
  auVar2._4_4_ = (fRam00000001467f06f4 - fVar1) * fRam00000001467f0704;
  auVar2._0_4_ = (DAT_1467f06f0 - fVar1) * _DAT_1467f0700;
  auVar2._8_4_ = (fRam00000001467f06f8 - fVar1) * fRam00000001467f0708;
  auVar2._12_4_ = (fRam00000001467f06fc - fVar1) * fRam00000001467f070c;
  auVar2 = maxps(_DAT_1467f06e0,auVar2);
  fVar1 = fRam00000001467f06f4 - auVar2._4_4_;
  fVar3 = fRam00000001467f06f8 - auVar2._8_4_;
  fVar4 = fRam00000001467f06fc - auVar2._12_4_;
  *param_1 = DAT_1467f06f0 - auVar2._0_4_;
  param_1[1] = fVar1;
  param_1[2] = fVar3;
  param_1[3] = fVar4;
  return param_1;
}



// FUNCTION 1438cb020 FUN_1438cb020 body=1314 status=ok
// SIG undefined FUN_1438cb020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438cb020(undefined8 *param_1,longlong *param_2,longlong *param_3,float *param_4,
                  undefined8 *param_5,float *param_6,undefined8 *param_7,float *param_8,
                  undefined8 param_9,uint *param_10,float *param_11,undefined8 param_12)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [14];
  undefined1 auVar10 [12];
  unkuint10 Var11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [13];
  undefined1 auVar14 [11];
  undefined1 auVar15 [15];
  undefined1 auVar16 [14];
  undefined1 auVar17 [15];
  uint6 uVar18;
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  int iVar23;
  ulonglong *puVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar61;
  float fVar67;
  undefined1 auVar58 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  ushort uVar66;
  uint uVar65;
  float fVar68;
  float fVar69;
  float fVar70;
  uint uVar71;
  uint uVar72;
  float fVar73;
  float fVar74;
  uint uVar75;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar76;
  float fVar80;
  float fVar82;
  undefined1 auVar77 [12];
  float fVar83;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  ulonglong *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8 [44];
  byte bVar81;
  
  local_198 = (ulonglong *)*param_1;
  uStack_190 = param_1[1];
  local_188 = param_1[2];
  uStack_180 = param_1[3];
  lVar26 = *param_2;
  pfVar27 = (float *)*param_3;
  local_148 = *(float *)(param_1 + 10);
  fStack_144 = *(float *)((longlong)param_1 + 0x54);
  fStack_140 = *(float *)(param_1 + 0xb);
  fStack_13c = *(float *)((longlong)param_1 + 0x5c);
  local_178 = param_1[4];
  uStack_170 = param_1[5];
  local_158 = param_1[8];
  uStack_150 = param_1[9];
  local_d8 = *param_7;
  uStack_d0 = param_7[1];
  _local_168 = *(undefined1 (*) [16])(param_1 + 6);
  uVar28 = -(uint)(*param_8 == 0.0);
  uVar30 = -(uint)(param_8[1] == 0.0);
  uVar32 = -(uint)(param_8[2] == 0.0);
  uVar34 = -(uint)(param_8[3] == 0.0);
  auVar97._0_4_ = (uint)local_148 & uVar28;
  auVar97._4_4_ = (uint)fStack_144 & uVar30;
  auVar97._8_4_ = (uint)fStack_140 & uVar32;
  auVar97._12_4_ = (uint)fStack_13c & uVar34;
  auVar103._0_4_ = ~uVar28 & (uint)*param_8;
  auVar103._4_4_ = ~uVar30 & (uint)param_8[1];
  auVar103._8_4_ = ~uVar32 & (uint)param_8[2];
  auVar103._12_4_ = ~uVar34 & (uint)param_8[3];
  auVar97 = auVar97 | auVar103;
  auVar58 = rcpps(_local_168,auVar97);
  auVar39._0_4_ = (2.0 - auVar97._0_4_ * auVar58._0_4_) * auVar58._0_4_;
  auVar39._4_4_ = (2.0 - auVar97._4_4_ * auVar58._4_4_) * auVar58._4_4_;
  auVar39._8_4_ = (2.0 - auVar97._8_4_ * auVar58._8_4_) * auVar58._8_4_;
  auVar39._12_4_ = (2.0 - auVar97._12_4_ * auVar58._12_4_) * auVar58._12_4_;
  _local_108 = auVar39;
  FUN_1438cafb0(&local_1e8,param_6);
  auVar103 = _DAT_1467f0920;
  fVar61 = fRam00000001467f06fc;
  fVar54 = fRam00000001467f06f8;
  fVar53 = fRam00000001467f06f4;
  fVar57 = DAT_1467f06f0;
  auVar58._4_4_ = fStack_144;
  auVar58._0_4_ = local_148;
  auVar58._8_4_ = fStack_140;
  auVar58._12_4_ = fStack_13c;
  auVar58 = rcpps(auVar39,auVar58);
  uVar6 = *param_5;
  uVar7 = param_5[1];
  fVar41 = fStack_144 * auVar58._4_4_;
  fVar45 = fStack_140 * auVar58._8_4_;
  fVar49 = fStack_13c * auVar58._12_4_;
  fVar99 = fStack_1e4 * auVar97._4_4_;
  fVar100 = fStack_1e0 * auVar97._8_4_;
  fVar101 = fStack_1dc * auVar97._12_4_;
  local_118 = DAT_1467f06f0;
  fStack_114 = fRam00000001467f06f4;
  fStack_110 = fRam00000001467f06f8;
  fStack_10c = fRam00000001467f06fc;
  local_138 = CONCAT44(fRam00000001467f0864,_DAT_1467f0860);
  uStack_130 = CONCAT44(fRam00000001467f086c,fRam00000001467f0868);
  local_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  fVar98 = local_1e8 * auVar97._0_4_ * (2.0 - local_148 * auVar58._0_4_) * auVar58._0_4_;
  local_128 = uVar6;
  uStack_120 = uVar7;
  if (((0.0 < *param_6) &&
      (auVar2._4_4_ = uVar30, auVar2._0_4_ = uVar28, auVar2._8_4_ = uVar32, auVar2._12_4_ = uVar34,
      iVar23 = movmskps((int)param_5,auVar2), iVar23 == 0)) &&
     (iVar23 = FUN_1438caa20(&local_198,param_2,param_9,param_6,&local_1e8,&local_1d8), iVar23 != 0)
     ) {
    fVar104 = local_1e8;
    fVar105 = fStack_1e4;
    fVar106 = fStack_1e0;
    fVar107 = fStack_1dc;
    if (0.0 - fVar98 <= local_1e8) goto LAB_1438cb1e8;
  }
  fVar104 = fVar57;
  fVar105 = fVar53;
  fVar106 = fVar54;
  fVar107 = fVar61;
  local_1d8 = uVar6;
  uStack_1d0 = uVar7;
LAB_1438cb1e8:
  lVar25 = 0x20;
  fVar53 = (float)local_188 * *param_4;
  fVar61 = local_188._4_4_ * param_4[1];
  fVar67 = (float)uStack_180 * param_4[2];
  lVar26 = lVar26 - (longlong)pfVar27;
  fVar54 = (float)local_178 * *param_4;
  fVar62 = local_178._4_4_ * param_4[1];
  fVar68 = (float)uStack_170 * param_4[2];
  fVar57 = param_11[3];
  fVar86 = (float)local_188 * *param_11;
  fVar88 = local_188._4_4_ * param_11[1];
  fVar90 = (float)uStack_180 * param_11[2];
  fVar84 = (float)local_178 * *param_11;
  fVar85 = local_178._4_4_ * param_11[1];
  fStack_ec = (float)uStack_170 * param_11[2];
  local_1b8 = (float)local_168._0_4_;
  fStack_1b4 = (float)local_168._4_4_;
  fStack_1b0 = fStack_160;
  fStack_1ac = fStack_15c;
  local_1e8 = 0.0;
  fStack_1e4 = 0.0;
  fStack_1e0 = 0.0;
  fStack_1dc = 0.0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = fVar85 + fVar84 + fStack_ec;
  fStack_f4 = fVar85 + fVar84 + fStack_ec;
  fStack_f0 = fVar85 + fVar84 + fStack_ec;
  fStack_ec = fVar85 + fVar84 + fStack_ec;
  local_1c8 = (float)local_158;
  fStack_1c4 = local_158._4_4_;
  fStack_1c0 = (float)uStack_150;
  fStack_1bc = uStack_150._4_4_;
  puVar24 = local_198;
  do {
    puVar24 = puVar24 + 1;
    auVar8._8_8_ = uStack_130;
    auVar8._0_8_ = local_138;
    auVar97 = maxps(*(undefined1 (*) [16])(lVar26 + (longlong)pfVar27),auVar8);
    fVar93 = (local_1c8 * (float)local_128 + local_1b8 * local_118) * _DAT_1467f0700;
    fVar94 = (fStack_1c4 * local_128._4_4_ + fStack_1b4 * fStack_114) * fRam00000001467f0704;
    fVar95 = (fStack_1c0 * (float)uStack_120 + fStack_1b0 * fStack_110) * fRam00000001467f0708;
    fVar96 = (fStack_1bc * uStack_120._4_4_ + fStack_1ac * fStack_10c) * fRam00000001467f070c;
    fVar55 = local_1c8 * local_1c8;
    fVar63 = fStack_1c4 * fStack_1c4;
    fVar69 = fStack_1c0 * fStack_1c0;
    fVar73 = fStack_1bc * fStack_1bc;
    fVar87 = (local_1c8 * (float)local_1d8 + local_1b8 * fVar104) * _DAT_1467f0700 - fVar98;
    fVar89 = (fStack_1c4 * local_1d8._4_4_ + fStack_1b4 * fVar105) * fRam00000001467f0704 -
             fVar99 * (2.0 - fVar41) * auVar58._4_4_;
    fVar91 = (fStack_1c0 * (float)uStack_1d0 + fStack_1b0 * fVar106) * fRam00000001467f0708 -
             fVar100 * (2.0 - fVar45) * auVar58._8_4_;
    fVar92 = (fStack_1bc * uStack_1d0._4_4_ + fStack_1ac * fVar107) * fRam00000001467f070c -
             fVar101 * (2.0 - fVar49) * auVar58._12_4_;
    uVar29 = -(uint)(fVar93 < fVar87);
    uVar31 = -(uint)(fVar94 < fVar89);
    uVar33 = -(uint)(fVar95 < fVar91);
    uVar35 = -(uint)(fVar96 < fVar92);
    fVar85 = local_1b8 * local_1b8;
    fVar42 = fStack_1b4 * fStack_1b4;
    fVar46 = fStack_1b0 * fStack_1b0;
    fVar50 = fStack_1ac * fStack_1ac;
    fVar76 = local_1b8 * (fVar88 + fVar86 + fVar90);
    fVar80 = fStack_1b4 * (fVar88 + fVar86 + fVar90);
    fVar82 = fStack_1b0 * (fVar88 + fVar86 + fVar90);
    fVar83 = fStack_1ac * (fVar88 + fVar86 + fVar90);
    fVar36 = local_1b8 * (fVar61 + fVar53 + fVar67);
    fVar43 = fStack_1b4 * (fVar61 + fVar53 + fVar67);
    fVar47 = fStack_1b0 * (fVar61 + fVar53 + fVar67);
    fVar51 = fStack_1ac * (fVar61 + fVar53 + fVar67);
    fVar37 = local_1c8 * local_f8;
    fVar44 = fStack_1c4 * fStack_f4;
    fVar48 = fStack_1c0 * fStack_f0;
    fVar52 = fStack_1bc * fStack_ec;
    fVar56 = local_1c8 * (fVar62 + fVar54 + fVar68);
    fVar64 = fStack_1c4 * (fVar62 + fVar54 + fVar68);
    fVar70 = fStack_1c0 * (fVar62 + fVar54 + fVar68);
    fVar74 = fStack_1bc * (fVar62 + fVar54 + fVar68);
    uVar1 = *puVar24;
    auVar77._8_4_ = 0;
    auVar77._0_8_ = uVar1;
    bVar81 = (byte)(uVar1 >> 0x38);
    auVar15._12_2_ = 0;
    auVar15._0_12_ = auVar77;
    auVar15[0xe] = bVar81;
    auVar17[0xc] = (char)(uVar1 >> 0x30);
    auVar17._0_12_ = auVar77;
    auVar17._13_2_ = auVar15._13_2_;
    auVar19._8_4_ = 0;
    auVar19._0_8_ = uVar1;
    auVar19._12_3_ = auVar17._12_3_;
    auVar20._8_2_ = 0;
    auVar20._0_8_ = uVar1;
    auVar20[10] = (char)(uVar1 >> 0x28);
    auVar20._11_4_ = auVar19._11_4_;
    auVar21._8_2_ = 0;
    auVar21._0_8_ = uVar1;
    auVar21._10_5_ = auVar20._10_5_;
    auVar22[8] = (char)(uVar1 >> 0x20);
    auVar22._0_8_ = uVar1;
    auVar22._9_6_ = auVar21._9_6_;
    Var11 = CONCAT91((unkuint9)auVar22._8_7_ << 8,(char)(uVar1 >> 0x18));
    auVar14[10] = 0;
    auVar14._0_10_ = Var11;
    auVar10._1_11_ = auVar14 << 8;
    auVar10[0] = (char)(uVar1 >> 0x10);
    auVar13[0xc] = 0;
    auVar13._0_12_ = auVar10;
    auVar9._1_13_ = auVar13 << 8;
    auVar9[0] = (char)(uVar1 >> 8);
    auVar78._0_2_ = CONCAT11(0,(byte)uVar1);
    auVar78._2_14_ = auVar9;
    uVar66 = (ushort)Var11;
    auVar16._10_2_ = 0;
    auVar16._0_10_ = auVar78._0_10_;
    auVar16._12_2_ = uVar66;
    uVar18 = CONCAT42(auVar16._10_4_,auVar10._0_2_);
    auVar12._2_10_ = (unkuint10)uVar18 << 0x10;
    auVar12._0_2_ = auVar9._0_2_;
    uVar71 = (uint)uVar18;
    local_1b8 = ((float)auVar78._0_2_ + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
    fStack_1b4 = ((float)auVar12._0_4_ + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4;
    fStack_1b0 = ((float)(uVar71 >> 0x10) * 65536.0 + (float)(uVar71 & 0xffff)) *
                 fRam00000001467f0868 + fRam00000001467f06d8;
    fStack_1ac = ((float)uVar66 + 0.0) * fRam00000001467f086c + fRam00000001467f06dc;
    auVar38._0_4_ = (float)auVar22._8_2_;
    auVar38._4_4_ = (float)auVar20._10_2_;
    auVar38._8_4_ = (float)auVar17._12_2_;
    auVar38._12_4_ = (float)bVar81;
    local_1c8 = (auVar38._0_4_ + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
    fStack_1c4 = (auVar38._4_4_ + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4;
    fStack_1c0 = (auVar38._8_4_ + 0.0) * fRam00000001467f0868 + fRam00000001467f06d8;
    fStack_1bc = (auVar38._12_4_ + 0.0) * fRam00000001467f086c + fRam00000001467f06dc;
    fVar84 = *pfVar27;
    pfVar3 = pfVar27 + 1;
    pfVar4 = pfVar27 + 2;
    pfVar5 = pfVar27 + 3;
    auVar39 = rcpps(auVar38,auVar97);
    pfVar27 = pfVar27 + 4;
    fVar84 = ((((float)(~uVar28 & (uVar29 & (uint)fVar87 | ~uVar29 & (uint)fVar93)) -
               ((float)(~uVar29 & *param_10 | uVar29 & (uint)DAT_1467f06f0) * fVar55 + fVar85) *
               (float)local_108._0_4_ * local_148) + fVar36 + fVar56) * local_148 + fVar84) -
             (float)(~-(uint)((fVar37 + fVar76) * local_148 * auVar97._0_4_ < 0.0 - fVar57) &
                    (uint)((2.0 - auVar97._0_4_ * auVar39._0_4_) * auVar39._0_4_ * (float)local_d8))
    ;
    fVar85 = ((((float)(~uVar30 & (uVar31 & (uint)fVar89 | ~uVar31 & (uint)fVar94)) -
               ((float)(~uVar31 & param_10[1] | uVar31 & (uint)fRam00000001467f06f4) * fVar63 +
               fVar42) * (float)local_108._4_4_ * fStack_144) + fVar43 + fVar64) * fStack_144 +
             *pfVar3) -
             (float)(~-(uint)((fVar44 + fVar80) * fStack_144 * auVar97._4_4_ < 0.0 - fVar57) &
                    (uint)((2.0 - auVar97._4_4_ * auVar39._4_4_) * auVar39._4_4_ * local_d8._4_4_));
    fVar36 = ((((float)(~uVar32 & (uVar33 & (uint)fVar91 | ~uVar33 & (uint)fVar95)) -
               ((float)(~uVar33 & param_10[2] | uVar33 & (uint)fRam00000001467f06f8) * fVar69 +
               fVar46) * fStack_100 * fStack_140) + fVar47 + fVar70) * fStack_140 + *pfVar4) -
             (float)(~-(uint)((fVar48 + fVar82) * fStack_140 * auVar97._8_4_ < 0.0 - fVar57) &
                    (uint)((2.0 - auVar97._8_4_ * auVar39._8_4_) * auVar39._8_4_ * (float)uStack_d0)
                    );
    fVar37 = ((((float)(~uVar34 & (uVar35 & (uint)fVar92 | ~uVar35 & (uint)fVar96)) -
               ((float)(~uVar35 & param_10[3] | uVar35 & (uint)fRam00000001467f06fc) * fVar73 +
               fVar50) * fStack_fc * fStack_13c) + fVar51 + fVar74) * fStack_13c + *pfVar5) -
             (float)(~-(uint)((fVar52 + fVar83) * fStack_13c * auVar97._12_4_ < 0.0 - fVar57) &
                    (uint)((2.0 - auVar97._12_4_ * auVar39._12_4_) * auVar39._12_4_ *
                          uStack_d0._4_4_));
    uVar29 = -(uint)(auVar103._0_4_ < fVar84);
    uVar31 = -(uint)(auVar103._4_4_ < fVar85);
    uVar33 = -(uint)(auVar103._8_4_ < fVar36);
    uVar35 = -(uint)(auVar103._12_4_ < fVar37);
    uVar71 = uVar29 & (uint)local_1e8;
    uVar65 = uVar31 & (uint)fStack_1e4;
    uVar72 = uVar33 & (uint)fStack_1e0;
    uVar75 = uVar35 & (uint)fStack_1dc;
    local_1e8 = (float)((int)local_1e8 + 1);
    fStack_1e4 = (float)((int)fStack_1e4 + 1);
    fStack_1e0 = (float)((int)fStack_1e0 + 1);
    fStack_1dc = (float)((int)fStack_1dc + 1);
    local_1a8 = uVar71 | ~uVar29 & local_1a8;
    uStack_1a4 = uVar65 | ~uVar31 & uStack_1a4;
    uStack_1a0 = uVar72 | ~uVar33 & uStack_1a0;
    uStack_19c = uVar75 | ~uVar35 & uStack_19c;
    local_c8[0] = local_1a8;
    local_c8[1] = uStack_1a4;
    local_c8[2] = uStack_1a0;
    local_c8[3] = uStack_19c;
    auVar102._4_4_ = ~uVar31 & (uint)auVar103._4_4_;
    auVar102._0_4_ = ~uVar29 & (uint)auVar103._0_4_;
    auVar79._0_4_ = uVar29 & (uint)fVar84;
    auVar79._4_4_ = uVar31 & (uint)fVar85;
    auVar79._8_4_ = uVar33 & (uint)fVar36;
    auVar79._12_4_ = uVar35 & (uint)fVar37;
    auVar102._8_4_ = ~uVar33 & (uint)auVar103._8_4_;
    auVar102._12_4_ = ~uVar35 & (uint)auVar103._12_4_;
    auVar103 = auVar102 | auVar79;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  auVar59._0_8_ = auVar103._8_8_;
  auVar59._8_4_ = auVar103._0_4_;
  auVar59._12_4_ = auVar103._4_4_;
  auVar58 = maxps(auVar59,auVar103);
  auVar40._4_4_ = auVar58._0_4_;
  auVar40._0_4_ = auVar58._4_4_;
  auVar40._8_4_ = auVar58._12_4_;
  auVar40._12_4_ = auVar58._8_4_;
  auVar58 = maxps(auVar58,auVar40);
  fVar57 = auVar58._0_4_;
  auVar60._4_4_ = -(uint)(fVar57 <= auVar103._4_4_);
  auVar60._0_4_ = -(uint)(fVar57 <= auVar103._0_4_);
  auVar60._8_4_ = -(uint)(fVar57 <= auVar103._8_4_);
  auVar60._12_4_ = -(uint)(fVar57 <= auVar103._12_4_);
  iVar23 = movmskps((int)param_10,auVar60);
  FUN_1438ca6f0(&local_198,
                (int)(char)(&DAT_145ba0900)[iVar23] + local_c8[(char)(&DAT_145ba0900)[iVar23]] * 4,
                param_12);
  return;
}



// FUNCTION 1438cb550 FUN_1438cb550 body=2618 status=ok
// SIG undefined FUN_1438cb550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1438cb550(float *param_1,float *param_2,float *param_3,undefined1 (*param_4) [16],
                       float *param_5,float *param_6,longlong *param_7,longlong *param_8,
                       float *param_9)

{
  float *pfVar1;
  uint *puVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [14];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [15];
  unkuint9 Var31;
  undefined1 auVar32 [11];
  undefined1 auVar33 [13];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [12];
  unkbyte10 Var37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  uint6 uVar41;
  ulonglong in_RAX;
  longlong lVar42;
  uint *puVar43;
  longlong lVar44;
  float *pfVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  float fVar54;
  ulonglong uVar55;
  float fVar62;
  float fVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar89;
  float fVar100;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  ushort uVar92;
  float fVar90;
  float fVar91;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar79 [16];
  uint uVar104;
  ushort uVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  undefined1 auVar110 [12];
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar134;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  uint uVar109;
  uint uVar129;
  uint uVar133;
  uint uVar135;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar111 [12];
  undefined1 auVar118 [16];
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  undefined1 auVar139 [16];
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar165;
  float fVar166;
  undefined1 uVar167;
  undefined1 uVar168;
  undefined1 uVar169;
  undefined1 uVar170;
  undefined1 uVar171;
  undefined1 uVar172;
  undefined1 uVar173;
  undefined1 uVar174;
  float fVar175;
  float fVar176;
  ulonglong *local_108;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  
  fVar103 = fRam00000001467f086c;
  fVar101 = fRam00000001467f0868;
  fVar90 = fRam00000001467f0864;
  fVar72 = _DAT_1467f0860;
  fVar71 = fRam00000001467f06dc;
  fVar100 = fRam00000001467f06d8;
  fVar89 = fRam00000001467f06d4;
  fVar70 = _DAT_1467f06d0;
  if (param_2[0x11] == 0.0) {
    return in_RAX & 0xffffffffffffff00;
  }
  fVar54 = *param_3;
  fVar62 = param_3[1];
  fVar63 = param_3[2];
  fVar162 = param_3[3];
  fVar91 = param_1[3];
  fVar102 = param_2[3];
  fVar64 = fVar54 * (*param_1 - *param_2);
  fVar82 = fVar62 * (param_1[1] - param_2[1]);
  fVar93 = fVar63 * (param_1[2] - param_2[2]);
  fVar3 = param_2[0xf];
  fVar155 = (*param_1 - *param_2) - (fVar82 + fVar64 + fVar93) * fVar54;
  fVar156 = (param_1[1] - param_2[1]) - (fVar82 + fVar64 + fVar93) * fVar62;
  fVar157 = (param_1[2] - param_2[2]) - (fVar82 + fVar64 + fVar93) * fVar63;
  fVar134 = param_1[0xf];
  fVar106 = fVar134 + fVar3;
  fVar126 = fVar134 + fVar3;
  fVar130 = fVar134 + fVar3;
  fVar134 = fVar134 + fVar3;
  fVar152 = fVar155 * fVar155;
  fVar153 = fVar156 * fVar156;
  fVar154 = fVar157 * fVar157;
  fVar65 = param_1[4] * fVar54;
  fVar83 = param_1[5] * fVar62;
  fVar94 = param_1[6] * fVar63;
  fVar3 = (fVar153 + fVar152 + fVar154) - fVar106 * fVar106;
  fVar158 = (fVar153 + fVar152 + fVar154) - fVar126 * fVar126;
  fVar159 = (fVar153 + fVar152 + fVar154) - fVar130 * fVar130;
  fVar160 = (fVar153 + fVar152 + fVar154) - fVar134 * fVar134;
  fVar66 = param_2[4] * fVar54;
  fVar84 = param_2[5] * fVar62;
  fVar95 = param_2[6] * fVar63;
  fVar175 = param_1[4] - (fVar83 + fVar65 + fVar94) * fVar54;
  fVar176 = param_1[5] - (fVar83 + fVar65 + fVar94) * fVar62;
  fVar94 = param_1[6] - (fVar83 + fVar65 + fVar94) * fVar63;
  fVar65 = param_2[4] - (fVar84 + fVar66 + fVar95) * fVar54;
  fVar83 = param_2[5] - (fVar84 + fVar66 + fVar95) * fVar62;
  fVar66 = param_2[6] - (fVar84 + fVar66 + fVar95) * fVar63;
  fVar54 = fVar175 - fVar65;
  fVar62 = fVar176 - fVar83;
  fVar63 = fVar94 - fVar66;
  if (*(ushort *)(param_1 + 0xe) < *(ushort *)(param_2 + 0xe)) {
    uVar167 = SUB41(DAT_1467f06f0,0);
    uVar168 = (undefined1)((uint)DAT_1467f06f0 >> 8);
    uVar169 = (undefined1)((uint)DAT_1467f06f0 >> 0x10);
    uVar170 = (undefined1)((uint)DAT_1467f06f0 >> 0x18);
    uVar171 = SUB41(fRam00000001467f06f4,0);
    uVar172 = (undefined1)((uint)fRam00000001467f06f4 >> 8);
    uVar173 = (undefined1)((uint)fRam00000001467f06f4 >> 0x10);
    uVar174 = (undefined1)((uint)fRam00000001467f06f4 >> 0x18);
    auVar76 = ZEXT816(0);
    fVar95 = fRam00000001467f06f8;
    fVar85 = fRam00000001467f06fc;
  }
  else {
    fVar84 = param_2[0x11];
    fVar95 = fVar175 * fVar175;
    fVar85 = fVar176 * fVar176;
    fVar96 = fVar94 * fVar94;
    auVar115._4_4_ = fVar84;
    auVar115._0_4_ = fVar84;
    auVar115._8_4_ = fVar84;
    auVar115._12_4_ = fVar84;
    fVar163 = DAT_1467f06f0 - fVar84;
    fVar164 = fRam00000001467f06f4 - fVar84;
    fVar165 = fRam00000001467f06f8 - fVar84;
    fVar166 = fRam00000001467f06fc - fVar84;
    auVar139._0_4_ = fVar85 + fVar95 + fVar96;
    auVar139._4_4_ = fVar85 + fVar95 + fVar96;
    auVar139._8_4_ = fVar85 + fVar95 + fVar96;
    auVar139._12_4_ = fVar85 + fVar95 + fVar96;
    fVar95 = fVar65 * fVar65;
    fVar85 = fVar83 * fVar83;
    auVar58._8_4_ = fVar66 * fVar66;
    auVar76._4_4_ = fVar95;
    auVar76._0_4_ = fVar95;
    auVar76._8_4_ = fVar95;
    auVar76._12_4_ = fVar95;
    auVar58._4_4_ = auVar58._8_4_;
    auVar58._0_4_ = auVar58._8_4_;
    auVar58._12_4_ = auVar58._8_4_;
    fVar96 = fVar85 + fVar95 + auVar58._8_4_;
    fVar148 = fVar85 + fVar95 + auVar58._8_4_;
    fVar150 = fVar85 + fVar95 + auVar58._8_4_;
    fVar95 = fVar85 + fVar95 + auVar58._8_4_;
    if (fVar96 < auVar139._0_4_) {
      auVar6._4_4_ = fVar148;
      auVar6._0_4_ = fVar96;
      auVar6._8_4_ = fVar150;
      auVar6._12_4_ = fVar95;
      auVar76 = rsqrtps(auVar76,auVar6);
      auVar56._0_4_ = auVar76._0_4_ * fVar96;
      auVar56._4_4_ = auVar76._4_4_ * fVar148;
      auVar56._8_4_ = auVar76._8_4_ * fVar150;
      auVar56._12_4_ = auVar76._12_4_ * fVar95;
      auVar76 = rsqrtps(auVar56,auVar139);
      fVar163 = fVar163 * (float)(~-(uint)(fVar96 <= 0.0) & (uint)auVar56._0_4_);
      fVar164 = fVar164 * (float)(~-(uint)(fVar148 <= 0.0) & (uint)auVar56._4_4_);
      fVar165 = fVar165 * (float)(~-(uint)(fVar150 <= 0.0) & (uint)auVar56._8_4_);
      fVar166 = fVar166 * (float)(~-(uint)(fVar95 <= 0.0) & (uint)auVar56._12_4_);
      auVar58._0_4_ =
           (float)(~-(uint)(auVar139._0_4_ <= 0.0) & (uint)(auVar76._0_4_ * auVar139._0_4_));
      auVar58._4_4_ =
           (float)(~-(uint)(auVar139._4_4_ <= 0.0) & (uint)(auVar76._4_4_ * auVar139._4_4_));
      auVar58._8_4_ =
           (float)(~-(uint)(auVar139._8_4_ <= 0.0) & (uint)(auVar76._8_4_ * auVar139._8_4_));
      auVar58._12_4_ =
           (float)(~-(uint)(auVar139._12_4_ <= 0.0) & (uint)(auVar76._12_4_ * auVar139._12_4_));
      auVar115._0_4_ = fVar84 * auVar58._0_4_;
      auVar115._4_4_ = fVar84 * auVar58._4_4_;
      auVar115._8_4_ = fVar84 * auVar58._8_4_;
      auVar115._12_4_ = fVar84 * auVar58._12_4_;
    }
    fVar84 = auVar115._0_4_;
    uVar46 = -(uint)(fVar84 == 0.0);
    auVar57._4_12_ = auVar115._4_12_;
    auVar57._0_4_ = uVar46;
    if ((uVar46 & 1) != 0) {
      return (ulonglong)(uint3)(uVar46 >> 8) << 8;
    }
    auVar76 = rcpps(auVar57,auVar115);
    fVar84 = (2.0 - fVar84 * auVar76._0_4_) * auVar76._0_4_ * (fVar163 + fVar84);
    uVar167 = SUB41(fVar84,0);
    uVar168 = (undefined1)((uint)fVar84 >> 8);
    uVar169 = (undefined1)((uint)fVar84 >> 0x10);
    uVar170 = (undefined1)((uint)fVar84 >> 0x18);
    fVar95 = (2.0 - auVar115._4_4_ * auVar76._4_4_) * auVar76._4_4_ * (fVar164 + auVar115._4_4_);
    uVar171 = SUB41(fVar95,0);
    uVar172 = (undefined1)((uint)fVar95 >> 8);
    uVar173 = (undefined1)((uint)fVar95 >> 0x10);
    uVar174 = (undefined1)((uint)fVar95 >> 0x18);
    fVar95 = (2.0 - auVar115._8_4_ * auVar76._8_4_) * auVar76._8_4_ * (fVar165 + auVar115._8_4_);
    fVar85 = (2.0 - auVar115._12_4_ * auVar76._12_4_) * auVar76._12_4_ * (fVar166 + auVar115._12_4_)
    ;
    auVar9[4] = uVar171;
    auVar9._0_4_ = fVar84;
    auVar9[5] = uVar172;
    auVar9[6] = uVar173;
    auVar9[7] = uVar174;
    auVar9._8_2_ = SUB42(fVar95,0);
    auVar9._10_2_ = (short)((uint)fVar95 >> 0x10);
    auVar9._12_2_ = SUB42(fVar85,0);
    auVar9._14_2_ = (short)((uint)fVar85 >> 0x10);
    auVar76 = rcpps(auVar58,auVar9);
  }
  auVar58 = param_4[5];
  fVar84 = auVar58._0_4_;
  fVar96 = auVar58._4_4_;
  fVar148 = auVar58._8_4_;
  fVar150 = auVar58._12_4_;
  fVar163 = *(float *)param_4[4];
  fVar164 = *(float *)(param_4[4] + 4);
  fVar165 = *(float *)(param_4[4] + 8);
  fVar166 = *(float *)(param_4[4] + 0xc);
  fVar21 = *(float *)param_4[2];
  fVar22 = *(float *)(param_4[2] + 4);
  fVar23 = *(float *)(param_4[2] + 8);
  fVar24 = *(float *)param_4[1];
  fVar25 = *(float *)(param_4[1] + 4);
  fVar26 = *(float *)(param_4[1] + 8);
  auVar58 = rcpps(*param_4,auVar58);
  fVar65 = (fVar175 - (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) * fVar175
           ) - fVar65;
  fVar83 = (fVar176 - (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) * fVar176
           ) - fVar83;
  fVar66 = (fVar94 - fVar95 * fVar94) - fVar66;
  fVar94 = *(float *)param_4[3];
  fVar175 = *(float *)(param_4[3] + 4);
  fVar176 = *(float *)(param_4[3] + 8);
  fVar161 = *(float *)(param_4[3] + 0xc);
  fVar136 = (float)(~-(uint)(fVar84 == 0.0) & auVar58._0_4_) * auVar76._0_4_;
  fVar140 = (float)(~-(uint)(fVar96 == 0.0) & auVar58._4_4_) * auVar76._4_4_;
  fVar143 = (float)(~-(uint)(fVar148 == 0.0) & auVar58._8_4_) * auVar76._8_4_;
  fVar145 = (float)(~-(uint)(fVar150 == 0.0) & auVar58._12_4_) * auVar76._12_4_;
  fVar67 = fVar24 * fVar65;
  fVar86 = fVar25 * fVar83;
  fVar97 = fVar26 * fVar66;
  fVar107 = fVar21 * fVar65;
  fVar127 = fVar22 * fVar83;
  fVar131 = fVar23 * fVar66;
  fVar108 = fVar21 * fVar155;
  fVar128 = fVar22 * fVar156;
  fVar132 = fVar23 * fVar157;
  fVar137 = fVar84 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)));
  fVar141 = fVar96 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)));
  fVar144 = fVar148 * fVar95;
  fVar146 = fVar150 * fVar85;
  fVar68 = fVar24 * fVar155;
  fVar87 = fVar25 * fVar156;
  fVar98 = fVar26 * fVar157;
  fVar147 = fVar54 * fVar54;
  fVar149 = fVar62 * fVar62;
  fVar151 = fVar63 * fVar63;
  fVar69 = fVar54 * fVar155;
  fVar88 = fVar62 * fVar156;
  fVar99 = fVar63 * fVar157;
  auVar59._4_4_ = fVar69;
  auVar59._0_4_ = fVar69;
  auVar59._8_4_ = fVar69;
  auVar59._12_4_ = fVar69;
  auVar112._0_4_ = fVar88 + fVar69 + fVar99;
  auVar112._4_4_ = fVar88 + fVar69 + fVar99;
  auVar112._8_4_ = fVar88 + fVar69 + fVar99;
  auVar112._12_4_ = fVar88 + fVar69 + fVar99;
  auVar58 = rcpps(auVar59,auVar112);
  auVar73._0_4_ =
       (float)(~-(uint)(auVar112._0_4_ == 0.0) &
              (uint)(auVar58._0_4_ * (fVar149 + fVar147 + fVar151) * *param_5));
  auVar73._4_4_ =
       (float)(~-(uint)(auVar112._4_4_ == 0.0) &
              (uint)(auVar58._4_4_ * (fVar149 + fVar147 + fVar151) * param_5[1]));
  auVar73._8_4_ =
       (float)(~-(uint)(auVar112._8_4_ == 0.0) &
              (uint)(auVar58._8_4_ * (fVar149 + fVar147 + fVar151) * param_5[2]));
  auVar73._12_4_ =
       (float)(~-(uint)(auVar112._12_4_ == 0.0) &
              (uint)(auVar58._12_4_ * (fVar149 + fVar147 + fVar151) * param_5[3]));
  auVar113._0_4_ = fVar149 + fVar147 + fVar151;
  auVar113._4_4_ = fVar149 + fVar147 + fVar151;
  auVar113._8_4_ = fVar149 + fVar147 + fVar151;
  auVar113._12_4_ = fVar149 + fVar147 + fVar151;
  auVar58 = rsqrtps(auVar73,auVar113);
  fVar147 = auVar58._0_4_;
  fVar149 = auVar58._4_4_;
  fVar151 = auVar58._8_4_;
  fVar69 = *param_3;
  fVar88 = param_3[1];
  fVar99 = param_3[2];
  fVar138 = (float)(~-(uint)(auVar113._0_4_ <= 0.0) &
                   (uint)((3.0 - auVar113._0_4_ * fVar147 * fVar147) * fVar147 * 0.5)) * fVar54;
  fVar142 = (float)(~-(uint)(auVar113._4_4_ <= 0.0) &
                   (uint)((3.0 - auVar113._4_4_ * fVar149 * fVar149) * fVar149 * 0.5)) * fVar62;
  fVar149 = (float)(~-(uint)(auVar113._8_4_ <= 0.0) &
                   (uint)((3.0 - auVar113._8_4_ * fVar151 * fVar151) * fVar151 * 0.5)) * fVar63;
  fVar147 = (fVar149 * fVar88 - fVar142 * fVar99) * fVar155;
  fVar149 = (fVar138 * fVar99 - fVar149 * fVar69) * fVar156;
  fVar151 = (fVar142 * fVar69 - fVar138 * fVar88) * fVar157;
  auVar114._0_4_ = fVar149 + fVar147 + fVar151;
  auVar114._4_4_ = fVar149 + fVar147 + fVar151;
  auVar114._8_4_ = fVar149 + fVar147 + fVar151;
  auVar114._12_4_ = fVar149 + fVar147 + fVar151;
  uVar4 = CONCAT44(auVar114._4_4_,auVar114._0_4_);
  auVar74._0_8_ = uVar4 & 0x7fffffff7fffffff;
  auVar74._8_4_ = ABS(auVar114._8_4_);
  auVar74._12_4_ = ABS(auVar114._12_4_);
  auVar29._4_4_ = fVar126;
  auVar29._0_4_ = fVar106;
  auVar29._8_4_ = fVar130;
  auVar29._12_4_ = fVar134;
  auVar58 = maxps(auVar74,auVar29);
  auVar115 = rcpps(auVar114,auVar58);
  fVar106 = auVar73._0_4_ * (2.0 - auVar115._0_4_ * auVar58._0_4_) * auVar115._0_4_ * fVar106;
  fVar126 = auVar73._4_4_ * (2.0 - auVar115._4_4_ * auVar58._4_4_) * auVar115._4_4_ * fVar126;
  fVar130 = auVar73._8_4_ * (2.0 - auVar115._8_4_ * auVar58._8_4_) * auVar115._8_4_ * fVar130;
  fVar134 = auVar73._12_4_ * (2.0 - auVar115._12_4_ * auVar58._12_4_) * auVar115._12_4_ * fVar134;
  fVar151 = fVar88 * fVar155 - fVar156 * *param_3;
  fVar147 = fVar99 * fVar156 - fVar157 * param_3[1];
  fVar149 = fVar69 * fVar157 - fVar155 * param_3[2];
  fVar54 = fVar147 * fVar54;
  fVar62 = fVar149 * fVar62;
  fVar63 = fVar151 * fVar63;
  fVar147 = (float)(-(uint)(fVar62 + fVar54 + fVar63 < 0.0) & 0x80000000 ^ (uint)fVar147);
  fVar149 = (float)(-(uint)(fVar62 + fVar54 + fVar63 < 0.0) & 0x80000000 ^ (uint)fVar149);
  fVar151 = (float)(-(uint)(fVar62 + fVar54 + fVar63 < 0.0) & 0x80000000 ^ (uint)fVar151);
  fVar62 = fVar84 * fVar147;
  fVar69 = fVar96 * fVar149;
  fVar99 = fVar148 * fVar151;
  puVar43 = (uint *)*param_7;
  fVar147 = fVar147 * fVar65;
  fVar149 = fVar149 * fVar83;
  fVar151 = fVar151 * fVar66;
  fVar54 = fVar24 * fVar62;
  fVar63 = fVar25 * fVar69;
  fVar88 = fVar26 * fVar99;
  pfVar45 = (float *)*param_8;
  fVar62 = fVar21 * fVar62;
  fVar69 = fVar22 * fVar69;
  fVar99 = fVar23 * fVar99;
  uVar46 = -(uint)(0.0 <= fVar106);
  uVar48 = -(uint)(0.0 <= fVar126);
  uVar50 = -(uint)(0.0 <= fVar130);
  uVar52 = -(uint)(0.0 <= fVar134);
  uVar109 = uVar46 & _DAT_1467f0920;
  uVar129 = uVar48 & uRam00000001467f0924;
  uVar133 = uVar50 & uRam00000001467f0928;
  uVar135 = uVar52 & uRam00000001467f092c;
  local_108 = SUB168(*param_4,0);
  if (fVar3 <= 0.0) {
    fVar163 = fVar163 * fVar84;
    fVar164 = fVar164 * fVar96;
    fVar165 = fVar165 * fVar148;
    fVar166 = fVar166 * fVar150;
    fVar94 = fVar94 * fVar84;
    fVar175 = fVar175 * fVar96;
    fVar176 = fVar176 * fVar148;
    fVar161 = fVar161 * fVar150;
    auVar75._4_4_ = fVar22;
    auVar75._0_4_ = fVar22;
    auVar75._8_4_ = fVar22;
    auVar75._12_4_ = fVar22;
    fVar134 = fVar94 * fVar24 + fVar163 * fVar21;
    fVar54 = fVar175 * fVar24 + fVar164 * fVar21;
    fVar62 = fVar176 * fVar24 + fVar165 * fVar21;
    fVar63 = fVar161 * fVar24 + fVar166 * fVar21;
    fVar106 = fVar94 * fVar25 + fVar163 * fVar22;
    fVar126 = fVar175 * fVar25 + fVar164 * fVar22;
    fVar130 = fVar176 * fVar25 + fVar165 * fVar22;
    fVar69 = fVar161 * fVar25 + fVar166 * fVar22;
    fVar94 = fVar94 * fVar26 + fVar163 * fVar23;
    fVar175 = fVar175 * fVar26 + fVar164 * fVar23;
    fVar176 = fVar176 * fVar26 + fVar165 * fVar23;
    fVar163 = fVar161 * fVar26 + fVar166 * fVar23;
    auVar116._0_4_ = fVar153 + fVar152 + fVar154;
    auVar116._4_4_ = fVar153 + fVar152 + fVar154;
    auVar116._8_4_ = fVar153 + fVar152 + fVar154;
    auVar116._12_4_ = fVar153 + fVar152 + fVar154;
    auVar76 = rsqrtps(auVar75,auVar116);
    fVar70 = auVar76._0_4_;
    fVar89 = auVar76._4_4_;
    fVar100 = auVar76._8_4_;
    fVar101 = auVar76._12_4_;
    auVar77._0_4_ = fVar70 * 0.5;
    auVar77._4_4_ = fVar89 * 0.5;
    auVar77._8_4_ = fVar100 * 0.5;
    auVar77._12_4_ = fVar101 * 0.5;
    auVar117._0_4_ = 0.0 - fVar3;
    auVar117._4_4_ = 0.0 - fVar158;
    auVar117._8_4_ = 0.0 - fVar159;
    auVar117._12_4_ = 0.0 - fVar160;
    auVar76 = rsqrtps(auVar77,auVar117);
    fVar155 = (float)(~-(uint)(auVar116._0_4_ <= 0.0) &
                     (uint)((3.0 - auVar116._0_4_ * fVar70 * fVar70) * auVar77._0_4_)) * fVar155;
    fVar156 = (float)(~-(uint)(auVar116._4_4_ <= 0.0) &
                     (uint)((3.0 - auVar116._4_4_ * fVar89 * fVar89) * auVar77._4_4_)) * fVar156;
    fVar157 = (float)(~-(uint)(auVar116._8_4_ <= 0.0) &
                     (uint)((3.0 - auVar116._8_4_ * fVar100 * fVar100) * auVar77._8_4_)) * fVar157;
    fVar71 = auVar76._0_4_;
    fVar72 = auVar76._4_4_;
    fVar90 = auVar76._8_4_;
    fVar103 = auVar76._12_4_;
    auVar78._0_4_ = fVar71 * 0.5;
    auVar78._4_4_ = fVar72 * 0.5;
    auVar78._8_4_ = fVar90 * 0.5;
    auVar78._12_4_ = fVar103 * 0.5;
    auVar8[1] = uVar168;
    auVar8[0] = uVar167;
    auVar8[2] = uVar169;
    auVar8[3] = uVar170;
    auVar8[4] = uVar171;
    auVar8[5] = uVar172;
    auVar8[6] = uVar173;
    auVar8[7] = uVar174;
    auVar8._8_2_ = SUB42(fVar95,0);
    auVar8._10_2_ = (short)((uint)fVar95 >> 0x10);
    auVar8._12_2_ = SUB42(fVar85,0);
    auVar8._14_2_ = (short)((uint)fVar85 >> 0x10);
    auVar76 = rcpps(auVar78,auVar8);
    fVar70 = param_6[1];
    fVar89 = param_6[2];
    fVar100 = param_6[3];
    *param_9 = (float)(~-(uint)(auVar117._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar71 * auVar117._0_4_ * fVar71) * auVar78._0_4_ *
                            auVar117._0_4_)) *
               (2.0 - (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) *
                      auVar76._0_4_) * auVar76._0_4_ * *param_6 * fVar155 + *param_9;
    param_9[1] = (float)(~-(uint)(auVar117._4_4_ <= 0.0) &
                        (uint)((3.0 - fVar72 * auVar117._4_4_ * fVar72) * auVar78._4_4_ *
                              auVar117._4_4_)) *
                 (2.0 - (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) *
                        auVar76._4_4_) * auVar76._4_4_ * fVar70 * fVar156 + param_9[1];
    param_9[2] = (float)(~-(uint)(auVar117._8_4_ <= 0.0) &
                        (uint)((3.0 - fVar90 * auVar117._8_4_ * fVar90) * auVar78._8_4_ *
                              auVar117._8_4_)) * (2.0 - fVar95 * auVar76._8_4_) * auVar76._8_4_ *
                 fVar89 * fVar157 + param_9[2];
    param_9[3] = (float)(~-(uint)(auVar117._12_4_ <= 0.0) &
                        (uint)((3.0 - fVar103 * auVar117._12_4_ * fVar103) * auVar78._12_4_ *
                              auVar117._12_4_)) * (2.0 - fVar85 * auVar76._12_4_) * auVar76._12_4_ *
                 fVar100 * (float)(~-(uint)(auVar116._12_4_ <= 0.0) &
                                  (uint)((3.0 - auVar116._12_4_ * fVar101 * fVar101) *
                                        auVar77._12_4_)) *
                           ((fVar91 - fVar102) - (fVar82 + fVar64 + fVar93) * fVar162) + param_9[3];
    fVar71 = fRam00000001467f086c;
    fVar100 = fRam00000001467f0868;
    fVar89 = fRam00000001467f0864;
    fVar70 = _DAT_1467f0860;
    lVar42 = 0x20;
    do {
      local_108 = local_108 + 1;
      uVar4 = *local_108;
      auVar110._8_4_ = 0;
      auVar110._0_8_ = uVar4;
      auVar13._12_2_ = 0;
      auVar13._0_12_ = auVar110;
      auVar13[0xe] = (char)(uVar4 >> 0x38);
      auVar14[0xc] = (char)(uVar4 >> 0x30);
      auVar14._0_12_ = auVar110;
      auVar14._13_2_ = auVar13._13_2_;
      auVar16._8_4_ = 0;
      auVar16._0_8_ = uVar4;
      auVar16._12_3_ = auVar14._12_3_;
      auVar17._8_2_ = 0;
      auVar17._0_8_ = uVar4;
      auVar17[10] = (char)(uVar4 >> 0x28);
      auVar17._11_4_ = auVar16._11_4_;
      auVar18._8_2_ = 0;
      auVar18._0_8_ = uVar4;
      auVar18._10_5_ = auVar17._10_5_;
      auVar19[8] = (char)(uVar4 >> 0x20);
      auVar19._0_8_ = uVar4;
      auVar19._9_6_ = auVar18._9_6_;
      auVar30._7_8_ = 0;
      auVar30._0_7_ = auVar19._8_7_;
      Var31 = CONCAT81(SUB158(auVar30 << 0x40,7),(char)(uVar4 >> 0x18));
      auVar39._9_6_ = 0;
      auVar39._0_9_ = Var31;
      auVar32._1_10_ = SUB1510(auVar39 << 0x30,5);
      auVar32[0] = (char)(uVar4 >> 0x10);
      auVar40._11_4_ = 0;
      auVar40._0_11_ = auVar32;
      auVar33._1_12_ = SUB1512(auVar40 << 0x20,3);
      auVar33[0] = (char)(uVar4 >> 8);
      uVar105 = CONCAT11(0,(byte)uVar4);
      auVar20._2_13_ = auVar33;
      auVar20._0_2_ = uVar105;
      uVar92 = (ushort)Var31;
      auVar15._10_2_ = 0;
      auVar15._0_10_ = auVar20._0_10_;
      auVar15._12_2_ = uVar92;
      uVar41 = CONCAT42(auVar15._10_4_,auVar32._0_2_);
      auVar34._6_8_ = 0;
      auVar34._0_6_ = uVar41;
      uVar109 = (uint)uVar41;
      uVar46 = -(uint)((fVar134 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)
                                                                  )) + fVar65) * fVar155 +
                       (fVar106 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)
                                                                  )) + fVar83) * fVar156 +
                       (fVar94 * (float)CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))
                                                ) + fVar66) * fVar157 <= 0.0);
      uVar48 = -(uint)((fVar54 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))
                                                ) + fVar65) * fVar155 +
                       (fVar126 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)
                                                                  )) + fVar83) * fVar156 +
                       (fVar175 * (float)CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)
                                                                  )) + fVar66) * fVar157 <= 0.0);
      uVar50 = -(uint)((fVar62 * fVar95 + fVar65) * fVar155 + (fVar130 * fVar95 + fVar83) * fVar156
                       + (fVar176 * fVar95 + fVar66) * fVar157 <= 0.0);
      uVar52 = -(uint)((fVar63 * fVar85 + fVar65) * fVar155 + (fVar69 * fVar85 + fVar83) * fVar156 +
                       (fVar163 * fVar85 + fVar66) * fVar157 <= 0.0);
      fVar158 = (((float)uVar105 + 0.0) * fVar70 + _DAT_1467f06d0) * fVar84;
      fVar159 = (((float)(int)CONCAT82(SUB148(auVar34 << 0x40,6),auVar33._0_2_) + 0.0) * fVar89 +
                fRam00000001467f06d4) * fVar96;
      fVar160 = (((float)(uVar109 >> 0x10) * 65536.0 + (float)(uVar109 & 0xffff)) * fVar100 +
                fRam00000001467f06d8) * fVar148;
      fVar162 = (((float)uVar92 + 0.0) * fVar71 + fRam00000001467f06dc) * fVar150;
      fVar72 = (((float)auVar19._8_2_ + 0.0) * fVar70 + _DAT_1467f06d0) * fVar84;
      fVar90 = (((float)auVar17._10_2_ + 0.0) * fVar89 + fRam00000001467f06d4) * fVar96;
      fVar101 = (fVar100 * 0.0 + fRam00000001467f06d8) * fVar148;
      fVar103 = (((float)(auVar16._11_4_ >> 0x18) + 0.0) * fVar71 + fRam00000001467f06dc) * fVar150;
      fVar134 = fVar158 * fVar24 + fVar72 * fVar21;
      fVar54 = fVar159 * fVar24 + fVar90 * fVar21;
      fVar62 = fVar160 * fVar24 + fVar101 * fVar21;
      fVar63 = fVar162 * fVar24 + fVar103 * fVar21;
      fVar106 = fVar158 * fVar25 + fVar72 * fVar22;
      fVar126 = fVar159 * fVar25 + fVar90 * fVar22;
      fVar130 = fVar160 * fVar25 + fVar101 * fVar22;
      fVar69 = fVar162 * fVar25 + fVar103 * fVar22;
      fVar94 = fVar158 * fVar26 + fVar72 * fVar23;
      fVar175 = fVar159 * fVar26 + fVar90 * fVar23;
      fVar176 = fVar160 * fVar26 + fVar101 * fVar23;
      fVar163 = fVar162 * fVar26 + fVar103 * fVar23;
      *puVar43 = ~uVar46 & *puVar43 | uVar46 & (uint)fVar70;
      puVar43[1] = ~uVar48 & puVar43[1] | uVar48 & (uint)fVar89;
      puVar43[2] = ~uVar50 & puVar43[2] | uVar50 & (uint)fVar100;
      puVar43[3] = ~uVar52 & puVar43[3] | uVar52 & (uint)fVar71;
      puVar43 = puVar43 + 4;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
  }
  else {
    uVar10 = CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167))) ^
             CONCAT13(uVar170,CONCAT12(uVar169,CONCAT11(uVar168,uVar167)));
    uVar11 = CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171))) ^
             CONCAT13(uVar174,CONCAT12(uVar173,CONCAT11(uVar172,uVar171)));
    uVar12 = uVar10 & 0xffff | 0x80000000;
    lVar44 = (longlong)puVar43 - (longlong)pfVar45;
    lVar42 = 0x20;
    uVar4 = CONCAT44(uVar10,uVar10) & 0xffff0000ffff;
    uVar27 = uVar10 & 0xffff;
    uVar28 = uVar10 & 0xffff;
    do {
      local_108 = local_108 + 1;
      fVar162 = fVar94 + (fVar86 + fVar67 + fVar97) * fVar136;
      fVar91 = fVar175 + (fVar86 + fVar67 + fVar97) * fVar140;
      fVar102 = fVar176 + (fVar86 + fVar67 + fVar97) * fVar143;
      fVar64 = fVar161 + (fVar86 + fVar67 + fVar97) * fVar145;
      fVar65 = fVar163 + (fVar127 + fVar107 + fVar131) * fVar136;
      fVar66 = fVar164 + (fVar127 + fVar107 + fVar131) * fVar140;
      fVar82 = fVar165 + (fVar127 + fVar107 + fVar131) * fVar143;
      fVar83 = fVar166 + (fVar127 + fVar107 + fVar131) * fVar145;
      uVar47 = -(uint)(fVar163 * (fVar69 + fVar62 + fVar99) + fVar94 * (fVar63 + fVar54 + fVar88) <
                      (float)(~uVar46 & (uint)((fVar149 + fVar147 + fVar151) * (0.0 - auVar76._0_4_)
                                              ) | uVar109));
      uVar49 = -(uint)(fVar164 * (fVar69 + fVar62 + fVar99) + fVar175 * (fVar63 + fVar54 + fVar88) <
                      (float)(~uVar48 & (uint)((fVar149 + fVar147 + fVar151) * (0.0 - auVar76._4_4_)
                                              ) | uVar129));
      uVar51 = -(uint)(fVar165 * (fVar69 + fVar62 + fVar99) + fVar176 * (fVar63 + fVar54 + fVar88) <
                      (float)(~uVar50 & (uint)((fVar149 + fVar147 + fVar151) * (0.0 - auVar76._8_4_)
                                              ) | uVar133));
      uVar53 = -(uint)(fVar166 * (fVar69 + fVar62 + fVar99) + fVar161 * (fVar63 + fVar54 + fVar88) <
                      (float)(~uVar52 & (uint)((fVar149 + fVar147 + fVar151) *
                                              (0.0 - auVar76._12_4_)) | uVar135));
      fVar84 = fVar65 * (fVar128 + fVar108 + fVar132) * fVar137 +
               fVar162 * (fVar87 + fVar68 + fVar98) * fVar137;
      fVar93 = fVar66 * (fVar128 + fVar108 + fVar132) * fVar141 +
               fVar91 * (fVar87 + fVar68 + fVar98) * fVar141;
      fVar95 = fVar82 * (fVar128 + fVar108 + fVar132) * fVar144 +
               fVar102 * (fVar87 + fVar68 + fVar98) * fVar144;
      fVar152 = fVar83 * (fVar128 + fVar108 + fVar132) * fVar146 +
                fVar64 * (fVar87 + fVar68 + fVar98) * fVar146;
      fVar65 = (fVar65 * fVar65 + fVar162 * fVar162) * fVar137 * fVar137;
      fVar66 = (fVar66 * fVar66 + fVar91 * fVar91) * fVar141 * fVar141;
      fVar82 = (fVar82 * fVar82 + fVar102 * fVar102) * fVar144 * fVar144;
      fVar83 = (fVar83 * fVar83 + fVar64 * fVar64) * fVar146 * fVar146;
      fVar162 = fVar84 * fVar84 - fVar65 * fVar3;
      fVar91 = fVar93 * fVar93 - fVar66 * fVar158;
      fVar102 = fVar95 * fVar95 - fVar82 * fVar159;
      fVar64 = fVar152 * fVar152 - fVar83 * fVar160;
      *pfVar45 = (float)((uint)(*pfVar45 + fVar106) & uVar47 | ~uVar47 & (uint)*pfVar45);
      pfVar45[1] = (float)((uint)(pfVar45[1] + fVar126) & uVar49 | ~uVar49 & (uint)pfVar45[1]);
      pfVar45[2] = (float)((uint)(pfVar45[2] + fVar130) & uVar51 | ~uVar51 & (uint)pfVar45[2]);
      pfVar45[3] = (float)((uint)(pfVar45[3] + fVar134) & uVar53 | ~uVar53 & (uint)pfVar45[3]);
      uVar55 = *local_108;
      auVar111._8_4_ = 0;
      auVar111._0_8_ = uVar55;
      auVar125._12_2_ = 0;
      auVar125._0_12_ = auVar111;
      auVar125[0xe] = (char)(uVar55 >> 0x38);
      auVar125[0xf] = (char)(uVar11 >> 0x18);
      auVar124._14_2_ = auVar125._14_2_;
      auVar124[0xc] = 0;
      auVar124._0_12_ = auVar111;
      auVar124[0xd] = (char)(uVar11 >> 0x10);
      auVar123._13_3_ = auVar124._13_3_;
      auVar123[0xc] = (char)(uVar55 >> 0x30);
      auVar123._0_12_ = auVar111;
      auVar122._12_4_ = auVar123._12_4_;
      auVar122._8_3_ = 0;
      auVar122._0_8_ = uVar55;
      auVar122[0xb] = (char)(uVar11 >> 8);
      auVar121._11_5_ = auVar122._11_5_;
      auVar121._8_2_ = 0;
      auVar121._0_8_ = uVar55;
      auVar121[10] = (char)(uVar55 >> 0x28);
      auVar120._10_6_ = auVar121._10_6_;
      auVar120[8] = 0;
      auVar120._0_8_ = uVar55;
      auVar120[9] = (char)uVar11;
      auVar119._9_7_ = auVar120._9_7_;
      auVar119[8] = (char)(uVar55 >> 0x20);
      auVar119._0_8_ = uVar55;
      Var37 = CONCAT91(CONCAT81(auVar119._8_8_,(char)(uVar10 >> 0x18)),(char)(uVar55 >> 0x18));
      auVar36._2_10_ = Var37;
      auVar36[1] = (char)(uVar10 >> 0x10);
      auVar36[0] = (char)(uVar55 >> 0x10);
      auVar35._2_12_ = auVar36;
      auVar35[1] = (char)(uVar10 >> 8);
      auVar35[0] = (char)(uVar55 >> 8);
      auVar118._0_2_ = CONCAT11((char)uVar10,(char)uVar55);
      auVar118._2_14_ = auVar35;
      auVar81._0_12_ = auVar118._0_12_;
      auVar81._12_2_ = (short)Var37;
      auVar81._14_2_ = (short)(uVar11 >> 0x10);
      auVar80._12_4_ = auVar81._12_4_;
      auVar80._0_10_ = auVar118._0_10_;
      auVar80._10_2_ = (short)uVar11;
      auVar79._10_6_ = auVar80._10_6_;
      auVar79._0_8_ = auVar118._0_8_;
      auVar79._8_2_ = auVar36._0_2_;
      auVar38._4_8_ = auVar79._8_8_;
      auVar38._2_2_ = (short)(uVar10 >> 0x10);
      auVar38._0_2_ = auVar35._0_2_;
      uVar55 = CONCAT44(auVar38._0_4_ >> 0x10,uVar10) & 0xffffffff0000ffff;
      auVar60._0_4_ = (float)auVar119._8_2_;
      auVar60._4_4_ = (float)auVar121._10_2_;
      auVar60._8_4_ = 0;
      auVar60._12_4_ = (float)(auVar122._12_4_ >> 0x10);
      auVar5._4_4_ = fVar91;
      auVar5._0_4_ = fVar162;
      auVar5._8_4_ = fVar102;
      auVar5._12_4_ = fVar64;
      auVar58 = rsqrtps(auVar60,auVar5);
      fVar94 = ((float)(int)uVar55 * 65536.0 + (float)auVar118._0_2_) * fVar72 + fVar70;
      fVar175 = ((float)(int)(uVar55 >> 0x20) * 65536.0 + (float)(auVar38._0_4_ & 0xffff)) * fVar90
                + fVar89;
      fVar176 = ((float)(auVar79._8_4_ >> 0x10) * 65536.0 + (float)(auVar79._8_4_ & 0xffff)) *
                fVar101 + fVar100;
      fVar161 = ((float)(auVar80._12_4_ >> 0x10) * 65536.0 + (float)(auVar80._12_4_ & 0xffff)) *
                fVar103 + fVar71;
      auVar61._0_4_ = auVar58._0_4_ * fVar162;
      auVar61._4_4_ = auVar58._4_4_ * fVar91;
      auVar61._8_4_ = auVar58._8_4_ * fVar102;
      auVar61._12_4_ = auVar58._12_4_ * fVar64;
      fVar163 = (auVar60._0_4_ + 0.0) * fVar72 + fVar70;
      fVar164 = (auVar60._4_4_ + 0.0) * fVar90 + fVar89;
      fVar165 = fVar101 * 0.0 + fVar100;
      fVar166 = (auVar60._12_4_ + 0.0) * fVar103 + fVar71;
      fVar84 = (float)((uint)fVar84 ^ (uVar27 | 0x80000000)) -
               (float)(~-(uint)(fVar162 <= 0.0) & (uint)auVar61._0_4_);
      fVar93 = (float)((uint)fVar93 ^ (uVar28 | 0x80000000)) -
               (float)(~-(uint)(fVar91 <= 0.0) & (uint)auVar61._4_4_);
      fVar95 = (float)((uint)fVar95 ^ uVar12) -
               (float)(~-(uint)(fVar102 <= 0.0) & (uint)auVar61._8_4_);
      fVar152 = (float)((uint)fVar152 ^ uVar12) -
                (float)(~-(uint)(fVar64 <= 0.0) & (uint)auVar61._12_4_);
      auVar7._4_4_ = fVar66;
      auVar7._0_4_ = fVar65;
      auVar7._8_4_ = fVar82;
      auVar7._12_4_ = fVar83;
      auVar58 = rcpps(auVar61,auVar7);
      fVar65 = fVar84 * (float)(~-(uint)(fVar65 == 0.0) & auVar58._0_4_ |
                               -(uint)(fVar65 == 0.0) & 0x7f7fffee);
      fVar66 = fVar93 * (float)(~-(uint)(fVar66 == 0.0) & auVar58._4_4_ |
                               -(uint)(fVar66 == 0.0) & 0x7f7fffee);
      fVar82 = fVar95 * (float)(~-(uint)(fVar82 == 0.0) & auVar58._8_4_ |
                               -(uint)(fVar82 == 0.0) & 0x7f7fffee);
      fVar83 = fVar152 * (float)(~-(uint)(fVar83 == 0.0) & auVar58._12_4_ |
                                -(uint)(fVar83 == 0.0) & 0x7f7fffee);
      pfVar1 = (float *)(lVar44 + (longlong)pfVar45);
      uVar49 = -(uint)((0.0 < fVar84 && 0.0 <= fVar162) && fVar65 < *pfVar1);
      uVar51 = -(uint)((0.0 < fVar93 && 0.0 <= fVar91) && fVar66 < pfVar1[1]);
      uVar53 = -(uint)((0.0 < fVar95 && 0.0 <= fVar102) && fVar82 < pfVar1[2]);
      uVar104 = -(uint)((0.0 < fVar152 && 0.0 <= fVar64) && fVar83 < pfVar1[3]);
      puVar43 = (uint *)(lVar44 + (longlong)pfVar45);
      uVar27 = puVar43[1];
      uVar28 = puVar43[2];
      uVar47 = puVar43[3];
      puVar2 = (uint *)(lVar44 + (longlong)pfVar45);
      *puVar2 = ~uVar49 & *puVar43 | uVar49 & (uint)fVar65;
      puVar2[1] = ~uVar51 & uVar27 | uVar51 & (uint)fVar66;
      puVar2[2] = ~uVar53 & uVar28 | uVar53 & (uint)fVar82;
      puVar2[3] = ~uVar104 & uVar47 | uVar104 & (uint)fVar83;
      pfVar45 = pfVar45 + 4;
      lVar42 = lVar42 + -1;
      uVar27 = (uint)uVar4;
      uVar28 = (uint)(uVar4 >> 0x20);
    } while (lVar42 != 0);
  }
  return (ulonglong)(fVar3 <= 0.0);
}



// FUNCTION 1438cbf90 FUN_1438cbf90 body=631 status=ok
// SIG undefined FUN_1438cbf90(void)

ulonglong FUN_1438cbf90(float *param_1,float *param_2,float *param_3,float *param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  bool bVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
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
  
  fVar12 = *param_3;
  fVar15 = param_3[1];
  fVar18 = param_3[2];
  fVar10 = fVar12 * *param_1;
  fVar13 = fVar15 * param_1[1];
  fVar16 = fVar18 * param_1[2];
  local_78 = param_1[0x10];
  fVar11 = fVar12 * param_2[4];
  fVar14 = fVar15 * param_2[5];
  fVar17 = fVar18 * param_2[6];
  local_88 = *param_1 - (fVar13 + fVar10 + fVar16) * fVar12;
  fStack_84 = param_1[1] - (fVar13 + fVar10 + fVar16) * fVar15;
  fStack_80 = param_1[2] - (fVar13 + fVar10 + fVar16) * fVar18;
  fStack_7c = param_1[3] - (fVar13 + fVar10 + fVar16) * param_3[3];
  fVar10 = fVar12 * *param_2;
  fVar13 = fVar15 * param_2[1];
  fVar16 = fVar18 * param_2[2];
  local_58 = param_2[4] - (fVar14 + fVar11 + fVar17) * fVar12;
  fStack_54 = param_2[5] - (fVar14 + fVar11 + fVar17) * fVar15;
  fStack_50 = param_2[6] - (fVar14 + fVar11 + fVar17) * fVar18;
  local_68 = *param_2 - (fVar13 + fVar10 + fVar16) * fVar12;
  fStack_64 = param_2[1] - (fVar13 + fVar10 + fVar16) * fVar15;
  fStack_60 = param_2[2] - (fVar13 + fVar10 + fVar16) * fVar18;
  bVar1 = (fStack_54 - fStack_64) * (fStack_54 - fStack_64) +
          (local_58 - local_68) * (local_58 - local_68) +
          (fStack_50 - fStack_60) * (fStack_50 - fStack_60) == 0.0;
  fStack_6c = local_78;
  if (bVar1) {
    local_78 = local_58;
    fStack_74 = fStack_54;
    fStack_70 = fStack_50;
    fStack_5c = fStack_6c;
    fStack_4c = fStack_6c;
    uVar3 = FUN_1438cce60(&local_88,&local_78,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    fVar16 = local_68 - local_58;
    fVar17 = fStack_64 - fStack_54;
    fVar20 = fStack_60 - fStack_50;
    fVar12 = fVar16 * fVar16;
    fVar15 = fVar17 * fVar17;
    fVar18 = fVar20 * fVar20;
    fVar11 = fVar15 + fVar12 + fVar18;
    fVar13 = fVar15 + fVar12 + fVar18;
    fVar14 = fVar15 + fVar12 + fVar18;
    fVar18 = fVar15 + fVar12 + fVar18;
    fVar12 = (local_68 - local_88) * fVar16;
    fVar15 = (fStack_64 - fStack_84) * fVar17;
    fVar10 = (fStack_60 - fStack_80) * fVar20;
    auVar8._4_4_ = fVar12;
    auVar8._0_4_ = fVar12;
    auVar8._8_4_ = fVar12;
    auVar8._12_4_ = fVar12;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar11;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = fVar18;
    auVar9 = rcpps(auVar8,auVar2);
    fVar11 = (2.0 - fVar11 * auVar9._0_4_) * auVar9._0_4_ * (fVar15 + fVar12 + fVar10);
    fVar13 = (2.0 - fVar13 * auVar9._4_4_) * auVar9._4_4_ * (fVar15 + fVar12 + fVar10);
    fVar14 = (2.0 - fVar14 * auVar9._8_4_) * auVar9._8_4_ * (fVar15 + fVar12 + fVar10);
    fVar12 = (2.0 - fVar18 * auVar9._12_4_) * auVar9._12_4_ * (fVar15 + fVar12 + fVar10);
    uVar4 = -(uint)(fVar11 < DAT_1467f06f0);
    uVar5 = -(uint)(fVar13 < fRam00000001467f06f4);
    uVar6 = -(uint)(fVar14 < fRam00000001467f06f8);
    uVar7 = -(uint)(fVar12 < fRam00000001467f06fc);
    auVar19._0_4_ = (uint)fVar11 & uVar4;
    auVar19._4_4_ = (uint)fVar13 & uVar5;
    auVar19._8_4_ = (uint)fVar14 & uVar6;
    auVar19._12_4_ = (uint)fVar12 & uVar7;
    auVar9._4_4_ = ~uVar5 & (uint)fRam00000001467f06f4;
    auVar9._0_4_ = ~uVar4 & (uint)DAT_1467f06f0;
    auVar9._8_4_ = ~uVar6 & (uint)fRam00000001467f06f8;
    auVar9._12_4_ = ~uVar7 & (uint)fRam00000001467f06fc;
    auVar9 = maxps(ZEXT816(0),auVar19 | auVar9);
    fVar12 = (local_68 - local_88) - auVar9._0_4_ * fVar16;
    fVar15 = (fStack_64 - fStack_84) - auVar9._4_4_ * fVar17;
    fVar18 = (fStack_60 - fStack_80) - auVar9._8_4_ * fVar20;
    fVar12 = fVar15 * fVar15 + fVar12 * fVar12 + fVar18 * fVar18;
    if (fVar12 < *param_4 || fVar12 == *param_4) {
      fStack_74 = local_78;
      fStack_70 = local_78;
      fStack_5c = local_78;
      fStack_4c = local_78;
      uVar3 = FUN_1438cc7a0(&local_88,&local_58,&local_68,&local_78,param_5,param_6,param_7,param_8,
                            param_9);
    }
    else {
      uVar3 = (ulonglong)(-(uint)bVar1 & 0xffffff00);
    }
  }
  return uVar3;
}



// FUNCTION 1438cc210 FUN_1438cc210 body=1159 status=ok
// SIG undefined FUN_1438cc210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1438cc210(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5,
                  undefined8 *param_6,undefined8 param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  unkbyte10 Var13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  ulonglong *puVar18;
  float *pfVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar38 [12];
  float fVar57;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar39 [12];
  undefined1 auVar49 [16];
  uint uVar58;
  undefined1 in_XMM3 [16];
  undefined1 auVar59 [16];
  undefined1 in_XMM4_Ba;
  undefined1 in_XMM4_Bb;
  undefined1 in_XMM4_Bc;
  undefined1 in_XMM4_Bd;
  undefined1 in_XMM4_Be;
  undefined1 in_XMM4_Bf;
  undefined1 in_XMM4_Bg;
  undefined1 in_XMM4_Bh;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  undefined1 unaff_XMM8_Bc;
  undefined1 unaff_XMM8_Bd;
  undefined1 unaff_XMM8_Be;
  undefined1 unaff_XMM8_Bf;
  undefined1 unaff_XMM8_Bg;
  undefined1 unaff_XMM8_Bh;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  fVar3 = param_2[3];
  fVar4 = param_1[3];
  fVar74 = *param_1 - *param_2;
  fVar76 = param_1[1] - param_2[1];
  fVar78 = param_1[2] - param_2[2];
  fVar26 = fVar74 * *(float *)(param_5 + 2);
  fVar34 = fVar76 * *(float *)((longlong)param_5 + 0x14);
  fVar35 = fVar78 * *(float *)(param_5 + 3);
  fVar7 = *(float *)(param_5 + 10);
  fVar8 = *(float *)((longlong)param_5 + 0x54);
  fVar9 = *(float *)(param_5 + 0xb);
  fVar10 = *(float *)((longlong)param_5 + 0x5c);
  fVar60 = fVar74 * fVar74;
  fVar62 = fVar76 * fVar76;
  fVar64 = fVar78 * fVar78;
  pfVar19 = (float *)*param_6;
  fVar92 = fVar34 + fVar26 + fVar35;
  fVar93 = fVar34 + fVar26 + fVar35;
  fVar94 = fVar34 + fVar26 + fVar35;
  fVar35 = fVar34 + fVar26 + fVar35;
  fVar26 = fVar74 * *(float *)(param_5 + 4);
  fVar34 = fVar76 * *(float *)((longlong)param_5 + 0x24);
  fVar36 = fVar78 * *(float *)(param_5 + 5);
  auVar68._0_4_ = fVar34 + fVar26 + fVar36;
  auVar68._4_4_ = fVar34 + fVar26 + fVar36;
  auVar68._8_4_ = fVar34 + fVar26 + fVar36;
  auVar68._12_4_ = fVar34 + fVar26 + fVar36;
  fVar75 = (fVar62 + fVar60 + fVar64) - fVar3 * fVar3;
  fVar77 = (fVar62 + fVar60 + fVar64) - fVar3 * fVar3;
  fVar79 = (fVar62 + fVar60 + fVar64) - fVar3 * fVar3;
  fVar80 = (fVar62 + fVar60 + fVar64) - fVar3 * fVar3;
  fVar37 = *param_3 * *(float *)(param_5 + 4);
  fVar57 = param_3[1] * *(float *)((longlong)param_5 + 0x24);
  auVar40._8_4_ = param_3[2] * *(float *)(param_5 + 5);
  fVar26 = *param_3 * *(float *)(param_5 + 2);
  fVar34 = param_3[1] * *(float *)((longlong)param_5 + 0x14);
  fVar36 = param_3[2] * *(float *)(param_5 + 3);
  auVar40._4_4_ = auVar40._8_4_;
  auVar40._0_4_ = auVar40._8_4_;
  auVar40._12_4_ = auVar40._8_4_;
  fVar85 = fVar34 + fVar26 + fVar36;
  fVar86 = fVar34 + fVar26 + fVar36;
  fVar87 = fVar34 + fVar26 + fVar36;
  fVar36 = fVar34 + fVar26 + fVar36;
  fVar88 = fVar57 + fVar37 + auVar40._8_4_;
  fVar89 = fVar57 + fVar37 + auVar40._8_4_;
  fVar90 = fVar57 + fVar37 + auVar40._8_4_;
  fVar91 = fVar57 + fVar37 + auVar40._8_4_;
  fVar81 = *(float *)(param_5 + 6) * fVar7 - fVar85;
  fVar82 = *(float *)((longlong)param_5 + 0x34) * fVar8 - fVar86;
  fVar83 = *(float *)(param_5 + 7) * fVar9 - fVar87;
  fVar84 = *(float *)((longlong)param_5 + 0x3c) * fVar10 - fVar36;
  fVar26 = *(float *)(param_5 + 8) * fVar7 - fVar88;
  fVar34 = *(float *)((longlong)param_5 + 0x44) * fVar8 - fVar89;
  fVar37 = *(float *)(param_5 + 9) * fVar9 - fVar90;
  fVar57 = *(float *)((longlong)param_5 + 0x4c) * fVar10 - fVar91;
  if (fVar75 < 0.0) {
    auVar59._0_4_ = 0.0 - fVar75;
    auVar59._4_4_ = 0.0 - fVar77;
    auVar59._8_4_ = 0.0 - fVar79;
    auVar59._12_4_ = 0.0 - fVar80;
    uVar1 = CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba))) ^
            CONCAT13(in_XMM4_Bd,CONCAT12(in_XMM4_Bc,CONCAT11(in_XMM4_Bb,in_XMM4_Ba)));
    uVar2 = CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be))) ^
            CONCAT13(in_XMM4_Bh,CONCAT12(in_XMM4_Bg,CONCAT11(in_XMM4_Bf,in_XMM4_Be)));
    fVar77 = fVar62 + fVar60 + fVar64;
    fVar79 = fVar62 + fVar60 + fVar64;
    fVar80 = fVar62 + fVar60 + fVar64;
    fVar64 = fVar62 + fVar60 + fVar64;
    auVar40 = rsqrtps(auVar40,auVar59);
    auVar6[4] = SUB41(fVar79,0);
    auVar6._0_4_ = fVar77;
    auVar6[5] = (char)((uint)fVar79 >> 8);
    auVar6[6] = (char)((uint)fVar79 >> 0x10);
    auVar6[7] = (char)((uint)fVar79 >> 0x18);
    auVar6._8_2_ = SUB42(fVar80,0);
    auVar6._10_2_ = (short)((uint)fVar80 >> 0x10);
    auVar6._12_2_ = SUB42(fVar64,0);
    auVar6._14_2_ = (short)((uint)fVar64 >> 0x10);
    auVar69 = rsqrtps(auVar68,auVar6);
    fVar63 = auVar40._0_4_;
    fVar65 = auVar40._4_4_;
    fVar66 = auVar40._8_4_;
    fVar67 = auVar40._12_4_;
    fVar70 = auVar69._0_4_;
    fVar71 = auVar69._4_4_;
    fVar73 = auVar69._8_4_;
    fVar72 = auVar69._12_4_;
    fVar60 = param_4[1];
    fVar62 = param_4[2];
    fVar61 = param_4[3];
    *param_8 = (float)(~-(uint)(auVar59._0_4_ <= 0.0) &
                      (uint)((3.0 - auVar59._0_4_ * fVar63 * fVar63) * fVar63 * 0.5 * auVar59._0_4_)
                      ) * *param_4 *
               (float)(~-(uint)(fVar77 <= 0.0) &
                      (uint)((3.0 - fVar77 * fVar70 * fVar70) * fVar70 * 0.5)) * fVar74 + *param_8;
    param_8[1] = (float)(~-(uint)(auVar59._4_4_ <= 0.0) &
                        (uint)((3.0 - auVar59._4_4_ * fVar65 * fVar65) * fVar65 * 0.5 *
                              auVar59._4_4_)) * fVar60 *
                 (float)(~-(uint)(fVar79 <= 0.0) &
                        (uint)((3.0 - fVar79 * fVar71 * fVar71) * fVar71 * 0.5)) * fVar76 +
                 param_8[1];
    param_8[2] = (float)(~-(uint)(auVar59._8_4_ <= 0.0) &
                        (uint)((3.0 - auVar59._8_4_ * fVar66 * fVar66) * fVar66 * 0.5 *
                              auVar59._8_4_)) * fVar62 *
                 (float)(~-(uint)(fVar80 <= 0.0) &
                        (uint)((3.0 - fVar80 * fVar73 * fVar73) * fVar73 * 0.5)) * fVar78 +
                 param_8[2];
    param_8[3] = (float)(~-(uint)(auVar59._12_4_ <= 0.0) &
                        (uint)((3.0 - auVar59._12_4_ * fVar67 * fVar67) * fVar67 * 0.5 *
                              auVar59._12_4_)) * fVar61 *
                 (float)(~-(uint)(fVar64 <= 0.0) &
                        (uint)((3.0 - fVar64 * fVar72 * fVar72) * fVar72 * 0.5)) * (fVar4 - fVar3) +
                 param_8[3];
    fVar77 = fRam00000001467f086c;
    fVar76 = fRam00000001467f0868;
    fVar74 = fRam00000001467f0864;
    fVar62 = _DAT_1467f0860;
    fVar60 = fRam00000001467f06dc;
    fVar4 = fRam00000001467f06d8;
    fVar3 = fRam00000001467f06d4;
    fVar64 = _DAT_1467f06d0;
    puVar18 = (ulonglong *)*param_5;
    lVar20 = 0x20;
    do {
      puVar18 = puVar18 + 1;
      uVar25 = *puVar18;
      auVar38._8_4_ = 0;
      auVar38._0_8_ = uVar25;
      auVar48._12_2_ = 0;
      auVar48._0_12_ = auVar38;
      auVar48[0xe] = (char)(uVar25 >> 0x38);
      auVar48[0xf] = (char)(uVar2 >> 0x18);
      auVar47._14_2_ = auVar48._14_2_;
      auVar47[0xc] = 0;
      auVar47._0_12_ = auVar38;
      auVar47[0xd] = (char)(uVar2 >> 0x10);
      auVar46._13_3_ = auVar47._13_3_;
      auVar46[0xc] = (char)(uVar25 >> 0x30);
      auVar46._0_12_ = auVar38;
      auVar45._12_4_ = auVar46._12_4_;
      auVar45._8_3_ = 0;
      auVar45._0_8_ = uVar25;
      auVar45[0xb] = (char)(uVar2 >> 8);
      auVar44._11_5_ = auVar45._11_5_;
      auVar44._8_2_ = 0;
      auVar44._0_8_ = uVar25;
      auVar44[10] = (char)(uVar25 >> 0x28);
      auVar43._10_6_ = auVar44._10_6_;
      auVar43[8] = 0;
      auVar43._0_8_ = uVar25;
      auVar43[9] = (char)uVar2;
      auVar42._9_7_ = auVar43._9_7_;
      auVar42[8] = (char)(uVar25 >> 0x20);
      auVar42._0_8_ = uVar25;
      Var13 = CONCAT91(CONCAT81(auVar42._8_8_,(char)(uVar1 >> 0x18)),(char)(uVar25 >> 0x18));
      auVar12._2_10_ = Var13;
      auVar12[1] = (char)(uVar1 >> 0x10);
      auVar12[0] = (char)(uVar25 >> 0x10);
      auVar11._2_12_ = auVar12;
      auVar11[1] = (char)(uVar1 >> 8);
      auVar11[0] = (char)(uVar25 >> 8);
      auVar41._0_2_ = CONCAT11((char)uVar1,(char)uVar25);
      auVar41._2_14_ = auVar11;
      auVar29._0_12_ = auVar41._0_12_;
      auVar29._12_2_ = (short)Var13;
      auVar29._14_2_ = (short)(uVar2 >> 0x10);
      auVar28._12_4_ = auVar29._12_4_;
      auVar28._0_10_ = auVar41._0_10_;
      auVar28._10_2_ = (short)uVar2;
      auVar27._10_6_ = auVar28._10_6_;
      auVar27._0_8_ = auVar41._0_8_;
      auVar27._8_2_ = auVar12._0_2_;
      auVar14._4_8_ = auVar27._8_8_;
      auVar14._2_2_ = (short)(uVar1 >> 0x10);
      auVar14._0_2_ = auVar11._0_2_;
      uVar25 = CONCAT44(auVar14._0_4_ >> 0x10,uVar1) & 0xffffffff0000ffff;
      uVar21 = -(uint)(fVar26 * auVar68._0_4_ + fVar81 * fVar92 <= 0.0);
      uVar22 = -(uint)(fVar34 * auVar68._4_4_ + fVar82 * fVar93 <= 0.0);
      uVar23 = -(uint)(fVar37 * auVar68._8_4_ + fVar83 * fVar94 <= 0.0);
      uVar24 = -(uint)(fVar57 * auVar68._12_4_ + fVar84 * fVar35 <= 0.0);
      *pfVar19 = (float)(~uVar21 & (uint)*pfVar19 | uVar21 & (uint)fVar62);
      pfVar19[1] = (float)(~uVar22 & (uint)pfVar19[1] | uVar22 & (uint)fVar74);
      pfVar19[2] = (float)(~uVar23 & (uint)pfVar19[2] | uVar23 & (uint)fVar76);
      pfVar19[3] = (float)(~uVar24 & (uint)pfVar19[3] | uVar24 & (uint)fVar77);
      fVar81 = (((float)(int)uVar25 * 65536.0 + (float)auVar41._0_2_) * fVar62 + fVar64) * fVar7 -
               fVar85;
      fVar82 = (((float)(int)(uVar25 >> 0x20) * 65536.0 + (float)(auVar14._0_4_ & 0xffff)) * fVar74
               + fVar3) * fVar8 - fVar86;
      fVar83 = (((float)(auVar27._8_4_ >> 0x10) * 65536.0 + (float)(auVar27._8_4_ & 0xffff)) *
                fVar76 + fVar4) * fVar9 - fVar87;
      fVar84 = (((float)(auVar28._12_4_ >> 0x10) * 65536.0 + (float)(auVar28._12_4_ & 0xffff)) *
                fVar77 + fVar60) * fVar10 - fVar36;
      pfVar19 = pfVar19 + 4;
      fVar26 = (((float)auVar42._8_2_ + 0.0) * fVar62 + fVar64) * fVar7 - fVar88;
      fVar34 = (((float)auVar44._10_2_ + 0.0) * fVar74 + fVar3) * fVar8 - fVar89;
      fVar37 = (fVar76 * 0.0 + fVar4) * fVar9 - fVar90;
      fVar57 = (((float)(auVar45._12_4_ >> 0x10) + 0.0) * fVar77 + fVar60) * fVar10 - fVar91;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  else {
    puVar18 = (ulonglong *)*param_5;
    uVar1 = CONCAT13(unaff_XMM8_Bd,CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ^
            CONCAT13(unaff_XMM8_Bd,CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba)));
    uVar2 = CONCAT13(unaff_XMM8_Bh,CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ^
            CONCAT13(unaff_XMM8_Bh,CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be)));
    uVar21 = uVar1 & 0xffff | 0x80000000;
    lVar20 = 0x20;
    do {
      puVar18 = puVar18 + 1;
      fVar61 = fVar26 * fVar26 + fVar81 * fVar81;
      fVar63 = fVar34 * fVar34 + fVar82 * fVar82;
      fVar65 = fVar37 * fVar37 + fVar83 * fVar83;
      fVar66 = fVar57 * fVar57 + fVar84 * fVar84;
      fVar67 = auVar68._0_4_ * fVar26 + fVar81 * fVar92;
      fVar70 = auVar68._4_4_ * fVar34 + fVar82 * fVar93;
      fVar71 = auVar68._8_4_ * fVar37 + fVar83 * fVar94;
      fVar73 = auVar68._12_4_ * fVar57 + fVar84 * fVar35;
      fVar64 = fVar67 * fVar67 - fVar61 * fVar75;
      fVar3 = fVar70 * fVar70 - fVar63 * fVar77;
      fVar4 = fVar71 * fVar71 - fVar65 * fVar79;
      fVar60 = fVar73 * fVar73 - fVar66 * fVar80;
      uVar25 = *puVar18;
      auVar39._8_4_ = 0;
      auVar39._0_8_ = uVar25;
      auVar56._12_2_ = 0;
      auVar56._0_12_ = auVar39;
      auVar56[0xe] = (char)(uVar25 >> 0x38);
      auVar56[0xf] = (char)(uVar2 >> 0x18);
      auVar55._14_2_ = auVar56._14_2_;
      auVar55[0xc] = 0;
      auVar55._0_12_ = auVar39;
      auVar55[0xd] = (char)(uVar2 >> 0x10);
      auVar54._13_3_ = auVar55._13_3_;
      auVar54[0xc] = (char)(uVar25 >> 0x30);
      auVar54._0_12_ = auVar39;
      auVar53._12_4_ = auVar54._12_4_;
      auVar53._8_3_ = 0;
      auVar53._0_8_ = uVar25;
      auVar53[0xb] = (char)(uVar2 >> 8);
      auVar52._11_5_ = auVar53._11_5_;
      auVar52._8_2_ = 0;
      auVar52._0_8_ = uVar25;
      auVar52[10] = (char)(uVar25 >> 0x28);
      auVar51._10_6_ = auVar52._10_6_;
      auVar51[8] = 0;
      auVar51._0_8_ = uVar25;
      auVar51[9] = (char)uVar2;
      auVar50._9_7_ = auVar51._9_7_;
      auVar50[8] = (char)(uVar25 >> 0x20);
      auVar50._0_8_ = uVar25;
      Var13 = CONCAT91(CONCAT81(auVar50._8_8_,(char)(uVar1 >> 0x18)),(char)(uVar25 >> 0x18));
      auVar16._2_10_ = Var13;
      auVar16[1] = (char)(uVar1 >> 0x10);
      auVar16[0] = (char)(uVar25 >> 0x10);
      auVar15._2_12_ = auVar16;
      auVar15[1] = (char)(uVar1 >> 8);
      auVar15[0] = (char)(uVar25 >> 8);
      auVar49._0_2_ = CONCAT11((char)uVar1,(char)uVar25);
      auVar49._2_14_ = auVar15;
      auVar32._0_12_ = auVar49._0_12_;
      auVar32._12_2_ = (short)Var13;
      auVar32._14_2_ = (short)(uVar2 >> 0x10);
      auVar31._12_4_ = auVar32._12_4_;
      auVar31._0_10_ = auVar49._0_10_;
      auVar31._10_2_ = (short)uVar2;
      auVar30._10_6_ = auVar31._10_6_;
      auVar30._0_8_ = auVar49._0_8_;
      auVar30._8_2_ = auVar16._0_2_;
      auVar17._4_8_ = auVar30._8_8_;
      auVar17._2_2_ = (short)(uVar1 >> 0x10);
      auVar17._0_2_ = auVar15._0_2_;
      auVar69[4] = SUB41(fVar3,0);
      auVar69._0_4_ = fVar64;
      auVar69[5] = (char)((uint)fVar3 >> 8);
      auVar69[6] = (char)((uint)fVar3 >> 0x10);
      auVar69[7] = (char)((uint)fVar3 >> 0x18);
      auVar69._8_2_ = SUB42(fVar4,0);
      auVar69._10_2_ = (short)((uint)fVar4 >> 0x10);
      auVar69._12_2_ = SUB42(fVar60,0);
      auVar69._14_2_ = (short)((uint)fVar60 >> 0x10);
      auVar40 = rsqrtps(in_XMM3,auVar69);
      uVar25 = CONCAT44(auVar17._0_4_ >> 0x10,uVar1) & 0xffffffff0000ffff;
      fVar62 = auVar40._0_4_;
      fVar74 = auVar40._4_4_;
      fVar76 = auVar40._8_4_;
      fVar78 = auVar40._12_4_;
      fVar81 = (((float)(int)uVar25 * 65536.0 + (float)auVar49._0_2_) * _DAT_1467f0860 +
               _DAT_1467f06d0) * fVar7 - fVar85;
      fVar82 = (((float)(int)(uVar25 >> 0x20) * 65536.0 + (float)(auVar17._0_4_ & 0xffff)) *
                fRam00000001467f0864 + fRam00000001467f06d4) * fVar8 - fVar86;
      fVar83 = (((float)(auVar30._8_4_ >> 0x10) * 65536.0 + (float)(auVar30._8_4_ & 0xffff)) *
                fRam00000001467f0868 + fRam00000001467f06d8) * fVar9 - fVar87;
      fVar84 = (((float)(auVar31._12_4_ >> 0x10) * 65536.0 + (float)(auVar31._12_4_ & 0xffff)) *
                fRam00000001467f086c + fRam00000001467f06dc) * fVar10 - fVar36;
      fVar26 = (((float)auVar50._8_2_ + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0) * fVar7 - fVar88;
      fVar34 = (((float)auVar52._10_2_ + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4) * fVar8
               - fVar89;
      fVar37 = (fRam00000001467f0868 * 0.0 + fRam00000001467f06d8) * fVar9 - fVar90;
      fVar57 = (((float)(auVar53._12_4_ >> 0x10) + 0.0) * fRam00000001467f086c +
               fRam00000001467f06dc) * fVar10 - fVar91;
      auVar33._0_4_ = (3.0 - fVar64 * fVar62 * fVar62) * fVar62 * 0.5 * fVar64;
      auVar33._4_4_ = (3.0 - fVar3 * fVar74 * fVar74) * fVar74 * 0.5 * fVar3;
      auVar33._8_4_ = (3.0 - fVar4 * fVar76 * fVar76) * fVar76 * 0.5 * fVar4;
      auVar33._12_4_ = (3.0 - fVar60 * fVar78 * fVar78) * fVar78 * 0.5 * fVar60;
      auVar5._4_4_ = fVar63;
      auVar5._0_4_ = fVar61;
      auVar5._8_4_ = fVar65;
      auVar5._12_4_ = fVar66;
      auVar40 = rcpps(auVar33,auVar5);
      in_XMM3._0_4_ =
           ((float)((uint)fVar67 ^ (uVar1 & 0xffff | 0x80000000)) -
           (float)(~-(uint)(fVar64 <= 0.0) & (uint)auVar33._0_4_)) *
           (2.0 - fVar61 * auVar40._0_4_) * auVar40._0_4_;
      in_XMM3._4_4_ =
           ((float)((uint)fVar70 ^ (uVar1 & 0xffff | 0x80000000)) -
           (float)(~-(uint)(fVar3 <= 0.0) & (uint)auVar33._4_4_)) *
           (2.0 - fVar63 * auVar40._4_4_) * auVar40._4_4_;
      in_XMM3._8_4_ =
           ((float)((uint)fVar71 ^ uVar21) - (float)(~-(uint)(fVar4 <= 0.0) & (uint)auVar33._8_4_))
           * (2.0 - fVar65 * auVar40._8_4_) * auVar40._8_4_;
      in_XMM3._12_4_ =
           ((float)((uint)fVar73 ^ uVar21) - (float)(~-(uint)(fVar60 <= 0.0) & (uint)auVar33._12_4_)
           ) * (2.0 - fVar66 * auVar40._12_4_) * auVar40._12_4_;
      uVar22 = -(uint)((fVar67 < 0.0 && 0.0 < fVar64) && in_XMM3._0_4_ < *pfVar19);
      uVar23 = -(uint)((fVar70 < 0.0 && 0.0 < fVar3) && in_XMM3._4_4_ < pfVar19[1]);
      uVar24 = -(uint)((fVar71 < 0.0 && 0.0 < fVar4) && in_XMM3._8_4_ < pfVar19[2]);
      uVar58 = -(uint)((fVar73 < 0.0 && 0.0 < fVar60) && in_XMM3._12_4_ < pfVar19[3]);
      *pfVar19 = (float)(~uVar22 & (uint)*pfVar19 | uVar22 & (uint)in_XMM3._0_4_);
      pfVar19[1] = (float)(~uVar23 & (uint)pfVar19[1] | uVar23 & (uint)in_XMM3._4_4_);
      pfVar19[2] = (float)(~uVar24 & (uint)pfVar19[2] | uVar24 & (uint)in_XMM3._8_4_);
      pfVar19[3] = (float)(~uVar58 & (uint)pfVar19[3] | uVar58 & (uint)in_XMM3._12_4_);
      pfVar19 = pfVar19 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  return fVar75 < 0.0;
}



// FUNCTION 1438cc6a0 FUN_1438cc6a0 body=246 status=ok
// SIG undefined FUN_1438cc6a0(void)

void FUN_1438cc6a0(float *param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = fVar1 * *param_1;
  fVar5 = fVar2 * param_1[1];
  fVar6 = fVar3 * param_1[2];
  local_18 = *param_1 - (fVar5 + fVar4 + fVar6) * fVar1;
  fStack_14 = param_1[1] - (fVar5 + fVar4 + fVar6) * fVar2;
  fStack_10 = param_1[2] - (fVar5 + fVar4 + fVar6) * fVar3;
  fStack_c = param_1[3] - (fVar5 + fVar4 + fVar6) * param_3[3];
  fVar4 = fVar1 * *param_2;
  fVar5 = fVar2 * param_2[1];
  fVar6 = fVar3 * param_2[2];
  fStack_1c = param_1[0xf] + param_2[3];
  local_28 = *param_2 - (fVar5 + fVar4 + fVar6) * fVar1;
  fStack_24 = param_2[1] - (fVar5 + fVar4 + fVar6) * fVar2;
  fStack_20 = param_2[2] - (fVar5 + fVar4 + fVar6) * fVar3;
  fVar4 = fVar1 * param_2[4];
  fVar5 = fVar2 * param_2[5];
  fVar6 = fVar3 * param_2[6];
  local_38 = param_2[4] - (fVar5 + fVar4 + fVar6) * fVar1;
  fStack_34 = param_2[5] - (fVar5 + fVar4 + fVar6) * fVar2;
  fStack_30 = param_2[6] - (fVar5 + fVar4 + fVar6) * fVar3;
  fStack_2c = param_2[7] - (fVar5 + fVar4 + fVar6) * param_3[3];
  FUN_1438cc210(&local_18,&local_28,&local_38,local_38,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 1438cc7a0 FUN_1438cc7a0 body=1724 status=ok
// SIG undefined FUN_1438cc7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1438cc7a0(float *param_1,undefined1 (*param_2) [12],float *param_3,float *param_4,
                       float *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                       float *param_9)

{
  undefined8 uVar1;
  undefined1 auVar2 [12];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [15];
  undefined1 auVar6 [14];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  float fVar21;
  undefined1 auVar22 [15];
  unkuint9 Var23;
  undefined1 auVar24 [11];
  undefined1 auVar25 [13];
  undefined1 auVar26 [14];
  undefined1 auVar27 [15];
  undefined1 auVar28 [11];
  undefined1 auVar29 [13];
  undefined1 auVar30 [14];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  uint6 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ulonglong uVar40;
  float *pfVar41;
  longlong lVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar58;
  float fVar59;
  uint uVar61;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ushort uVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ushort uVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [12];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar66 [12];
  undefined1 auVar69 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float local_168;
  uint uStack_164;
  uint uStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  ulonglong *local_108;
  undefined8 uStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  
  local_e8 = *(float *)(param_6 + 4);
  fStack_e4 = *(float *)((longlong)param_6 + 0x24);
  fStack_e0 = *(float *)(param_6 + 5);
  uStack_dc = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_f8 = *(float *)(param_6 + 2);
  fStack_f4 = *(float *)((longlong)param_6 + 0x14);
  fStack_f0 = *(float *)(param_6 + 3);
  uStack_ec = *(undefined4 *)((longlong)param_6 + 0x1c);
  local_108 = (ulonglong *)*param_6;
  uStack_100 = param_6[1];
  local_b8 = *(undefined1 (*) [16])(param_6 + 10);
  local_d8 = *(float *)(param_6 + 6);
  fStack_d4 = *(float *)((longlong)param_6 + 0x34);
  fStack_d0 = *(float *)(param_6 + 7);
  fStack_cc = *(float *)((longlong)param_6 + 0x3c);
  local_c8 = *(float *)(param_6 + 8);
  fStack_c4 = *(float *)((longlong)param_6 + 0x44);
  fStack_c0 = *(float *)(param_6 + 9);
  fStack_bc = *(float *)((longlong)param_6 + 0x4c);
  fVar77 = *(float *)*param_2;
  fVar78 = *(float *)(*param_2 + 4);
  fVar79 = *(float *)(*param_2 + 8);
  fVar63 = (*param_1 - fVar77) * local_e8;
  fVar70 = (param_1[1] - fVar78) * fStack_e4;
  fVar72 = (param_1[2] - fVar79) * fStack_e0;
  fVar52 = (*param_1 - fVar77) * local_f8;
  fVar58 = (param_1[1] - fVar78) * fStack_f4;
  fStack_12c = (param_1[2] - fVar79) * fStack_f0;
  local_138 = fVar58 + fVar52 + fStack_12c;
  fStack_134 = fVar58 + fVar52 + fStack_12c;
  fStack_130 = fVar58 + fVar52 + fStack_12c;
  fStack_12c = fVar58 + fVar52 + fStack_12c;
  fVar52 = fVar70 + fVar63 + fVar72;
  fVar58 = fVar70 + fVar63 + fVar72;
  fVar3 = fVar70 + fVar63 + fVar72;
  fVar72 = fVar70 + fVar63 + fVar72;
  uVar1 = CONCAT17((char)((uint)fVar58 >> 0x18),
                   CONCAT16((char)((uint)fVar58 >> 0x10),
                            CONCAT15((char)((uint)fVar58 >> 8),CONCAT14(SUB41(fVar58,0),fVar52))));
  auVar2._8_2_ = SUB42(fVar3,0);
  auVar2._0_8_ = uVar1;
  auVar2._10_2_ = (short)((uint)fVar3 >> 0x10);
  auVar49._12_2_ = SUB42(fVar72,0);
  auVar49._0_12_ = auVar2;
  auVar49._14_2_ = (short)((uint)fVar72 >> 0x10);
  fVar64 = (*param_3 - fVar77) * local_e8;
  fVar71 = (param_3[1] - fVar78) * fStack_e4;
  fVar73 = (param_3[2] - fVar79) * fStack_e0;
  fVar63 = *param_4;
  fVar70 = param_4[1];
  fVar21 = param_4[2];
  fStack_15c = param_4[3];
  fVar53 = (*param_3 - fVar77) * local_f8;
  fVar59 = (param_3[1] - fVar78) * fStack_f4;
  auVar54._8_4_ = (param_3[2] - fVar79) * fStack_f0;
  auVar54._4_4_ = auVar54._8_4_;
  auVar54._0_4_ = auVar54._8_4_;
  auVar54._12_4_ = auVar54._8_4_;
  local_158 = fVar63 * fVar63;
  fStack_154 = fVar70 * fVar70;
  fStack_150 = fVar21 * fVar21;
  fStack_14c = fStack_15c * fStack_15c;
  fVar99 = fVar59 + fVar53 + auVar54._8_4_;
  fVar100 = fVar59 + fVar53 + auVar54._8_4_;
  fVar101 = fVar59 + fVar53 + auVar54._8_4_;
  fVar53 = fVar59 + fVar53 + auVar54._8_4_;
  fVar59 = fVar71 + fVar64 + fVar73;
  fVar102 = fVar71 + fVar64 + fVar73;
  fVar103 = fVar71 + fVar64 + fVar73;
  fVar73 = fVar71 + fVar64 + fVar73;
  uVar43 = -(uint)(local_b8._0_4_ == 0.0);
  auVar55._4_12_ = local_b8._4_12_;
  auVar55._0_4_ = uVar43;
  if ((uVar43 & 1) == 0) {
    _local_128 = rcpps(auVar55,local_b8);
    pfVar41 = (float *)*param_7;
    auVar67._0_4_ = fVar59 * fVar59 + fVar99 * fVar99;
    auVar67._4_4_ = fVar102 * fVar102 + fVar100 * fVar100;
    auVar67._8_4_ = fVar103 * fVar103 + fVar101 * fVar101;
    auVar67._12_4_ = fVar73 * fVar73 + fVar53 * fVar53;
    fStack_13c = auVar49._12_4_;
    if (auVar67._0_4_ == 0.0) {
      fStack_13c = fStack_15c;
      _local_148 = *param_2;
      uVar40 = FUN_1438cce60(param_1,local_148,param_5,&local_108,param_7,param_8,param_9);
    }
    else {
      auVar55 = rsqrtps(auVar54,auVar67);
      fVar64 = auVar55._0_4_;
      fVar71 = auVar55._4_4_;
      fVar83 = auVar55._8_4_;
      fVar85 = auVar55._12_4_;
      auVar74._0_4_ =
           (float)(~-(uint)(auVar67._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar67._0_4_ * fVar64 * fVar64) * fVar64 * 0.5));
      auVar74._4_4_ =
           (float)(~-(uint)(auVar67._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar67._4_4_ * fVar71 * fVar71) * fVar71 * 0.5));
      auVar74._8_4_ =
           (float)(~-(uint)(auVar67._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar67._8_4_ * fVar83 * fVar83) * fVar83 * 0.5));
      auVar74._12_4_ =
           (float)(~-(uint)(auVar67._12_4_ <= 0.0) &
                  (uint)((3.0 - auVar67._12_4_ * fVar85 * fVar85) * fVar85 * 0.5));
      fVar64 = auVar74._0_4_ * fVar99;
      fVar71 = auVar74._4_4_ * fVar100;
      fVar83 = auVar74._8_4_ * fVar101;
      fVar85 = auVar74._12_4_ * fVar53;
      fVar95 = auVar74._0_4_ * fVar59;
      fVar96 = auVar74._4_4_ * fVar102;
      fVar97 = auVar74._8_4_ * fVar103;
      fVar98 = auVar74._12_4_ * fVar73;
      fVar87 = fVar64 * fVar52 - fVar95 * local_138;
      fVar89 = fVar71 * fVar58 - fVar96 * fStack_134;
      fVar91 = fVar83 * fVar3 - fVar97 * fStack_130;
      fVar93 = fVar85 * fVar72 - fVar98 * fStack_12c;
      auVar47._0_8_ = CONCAT44(fVar89,fVar87) & 0x7fffffff7fffffff;
      auVar47._8_4_ = ABS(fVar91);
      auVar47._12_4_ = ABS(fVar93);
      local_148._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      fStack_140 = auVar2._8_4_;
      if (fVar63 <= ABS(fVar87)) {
        if (0.0 <= fVar87) {
          lVar42 = 0x20;
          fVar77 = DAT_1467f06f0;
          fVar78 = fRam00000001467f06f4;
          fVar79 = fRam00000001467f06f8;
          fVar87 = fRam00000001467f06fc;
          do {
            fVar39 = fRam00000001467f06fc;
            fVar38 = fRam00000001467f06f8;
            fVar37 = fRam00000001467f06f4;
            fVar36 = DAT_1467f06f0;
            local_108 = local_108 + 1;
            auVar56._0_4_ = local_c8 * fVar99 - local_d8 * fVar59;
            auVar56._4_4_ = fStack_c4 * fVar100 - fStack_d4 * fVar102;
            auVar56._8_4_ = fStack_c0 * fVar101 - fStack_d0 * fVar103;
            auVar56._12_4_ = fStack_bc * fVar53 - fStack_cc * fVar73;
            auVar48._0_4_ = (fVar52 - fVar64 * fVar63) * local_d8;
            auVar48._4_4_ = (fVar58 - fVar71 * fVar70) * fStack_d4;
            auVar48._8_4_ = (fVar3 - fVar83 * fVar21) * fStack_d0;
            auVar48._12_4_ = (fVar72 - fVar85 * fStack_15c) * fStack_cc;
            auVar49 = rcpps(auVar48,auVar56);
            fVar89 = ((fVar95 * fVar63 + local_138) * local_c8 - auVar48._0_4_) *
                     (float)(~-(uint)(auVar56._0_4_ == 0.0) & auVar49._0_4_);
            fVar91 = ((fVar96 * fVar70 + fStack_134) * fStack_c4 - auVar48._4_4_) *
                     (float)(~-(uint)(auVar56._4_4_ == 0.0) & auVar49._4_4_);
            fVar93 = ((fVar97 * fVar21 + fStack_130) * fStack_c0 - auVar48._8_4_) *
                     (float)(~-(uint)(auVar56._8_4_ == 0.0) & auVar49._8_4_);
            fVar80 = ((fVar98 * fStack_15c + fStack_12c) * fStack_bc - auVar48._12_4_) *
                     (float)(~-(uint)(auVar56._12_4_ == 0.0) & auVar49._12_4_);
            uVar43 = -(uint)(fVar89 < fVar77);
            uVar44 = -(uint)(fVar91 < fVar78);
            uVar45 = -(uint)(fVar93 < fVar79);
            uVar46 = -(uint)(fVar80 < fVar87);
            auVar57._0_4_ = ~uVar43 & (uint)fVar77;
            auVar57._4_4_ = ~uVar44 & (uint)fVar78;
            auVar57._8_4_ = ~uVar45 & (uint)fVar79;
            auVar57._12_4_ = ~uVar46 & (uint)fVar87;
            auVar50._0_4_ = uVar43 & (uint)fVar89;
            auVar50._4_4_ = uVar44 & (uint)fVar91;
            auVar50._8_4_ = uVar45 & (uint)fVar93;
            auVar50._12_4_ = uVar46 & (uint)fVar80;
            uVar43 = -(uint)(local_c8 * fVar59 + local_d8 * fVar99 < 0.0 && auVar56._0_4_ == 0.0);
            uVar44 = -(uint)(fStack_c4 * fVar102 + fStack_d4 * fVar100 < 0.0 && auVar56._4_4_ == 0.0
                            );
            uVar45 = -(uint)(fStack_c0 * fVar103 + fStack_d0 * fVar101 < 0.0 && auVar56._8_4_ == 0.0
                            );
            uVar46 = -(uint)(fStack_bc * fVar73 + fStack_cc * fVar53 < 0.0 && auVar56._12_4_ == 0.0)
            ;
            auVar68._0_4_ = ~uVar43 & _DAT_1467f06e0;
            auVar68._4_4_ = ~uVar44 & uRam00000001467f06e4;
            auVar68._8_4_ = ~uVar45 & uRam00000001467f06e8;
            auVar68._12_4_ = ~uVar46 & DAT_1467f06ec;
            auVar75._0_4_ = uVar43 & (uint)fVar77;
            auVar75._4_4_ = uVar44 & (uint)fVar78;
            auVar75._8_4_ = uVar45 & (uint)fVar79;
            auVar75._12_4_ = uVar46 & (uint)fVar87;
            auVar49 = maxps(auVar75 | auVar68,auVar50 | auVar57);
            fVar77 = fVar52 - auVar49._0_4_ * fVar59;
            fVar78 = (float)local_148._4_4_ - auVar49._4_4_ * fVar102;
            fVar79 = fStack_140 - auVar49._8_4_ * fVar103;
            fVar87 = fStack_13c - auVar49._12_4_ * fVar73;
            fVar89 = local_138 - auVar49._0_4_ * fVar99;
            fVar91 = fStack_134 - auVar49._4_4_ * fVar100;
            fVar93 = fStack_130 - auVar49._8_4_ * fVar101;
            fVar80 = fStack_12c - auVar49._12_4_ * fVar53;
            fVar81 = local_c8 * local_c8 + local_d8 * local_d8;
            fVar82 = fStack_c4 * fStack_c4 + fStack_d4 * fStack_d4;
            fVar84 = fStack_c0 * fStack_c0 + fStack_d0 * fStack_d0;
            fVar86 = fStack_bc * fStack_bc + fStack_cc * fStack_cc;
            fVar88 = fVar77 * local_c8 + fVar89 * local_d8;
            fVar90 = fVar78 * fStack_c4 + fVar91 * fStack_d4;
            fVar92 = fVar79 * fStack_c0 + fVar93 * fStack_d0;
            fVar94 = fVar87 * fStack_bc + fVar80 * fStack_cc;
            uVar40 = *local_108;
            auVar66._8_4_ = 0;
            auVar66._0_8_ = uVar40;
            auVar5._12_2_ = 0;
            auVar5._0_12_ = auVar66;
            auVar5[0xe] = (char)(uVar40 >> 0x38);
            auVar7[0xc] = (char)(uVar40 >> 0x30);
            auVar7._0_12_ = auVar66;
            auVar7._13_2_ = auVar5._13_2_;
            auVar8._8_4_ = 0;
            auVar8._0_8_ = uVar40;
            auVar8._12_3_ = auVar7._12_3_;
            auVar10._8_2_ = 0;
            auVar10._0_8_ = uVar40;
            auVar10[10] = (char)(uVar40 >> 0x28);
            auVar10._11_4_ = auVar8._11_4_;
            auVar13._8_2_ = 0;
            auVar13._0_8_ = uVar40;
            auVar13._10_5_ = auVar10._10_5_;
            auVar15[8] = (char)(uVar40 >> 0x20);
            auVar15._0_8_ = uVar40;
            auVar15._9_6_ = auVar13._9_6_;
            auVar27._7_8_ = 0;
            auVar27._0_7_ = auVar15._8_7_;
            Var23 = CONCAT81(SUB158(auVar27 << 0x40,7),(char)(uVar40 >> 0x18));
            auVar33._9_6_ = 0;
            auVar33._0_9_ = Var23;
            auVar28._1_10_ = SUB1510(auVar33 << 0x30,5);
            auVar28[0] = (char)(uVar40 >> 0x10);
            auVar34._11_4_ = 0;
            auVar34._0_11_ = auVar28;
            auVar29._1_12_ = SUB1512(auVar34 << 0x20,3);
            auVar29[0] = (char)(uVar40 >> 8);
            uVar60 = CONCAT11(0,(byte)uVar40);
            auVar19._2_13_ = auVar29;
            auVar19._0_2_ = uVar60;
            auVar69._0_4_ = CONCAT22(0,auVar15._8_2_);
            uVar43 = auVar8._11_4_ >> 0x18;
            auVar6._10_2_ = 0;
            auVar6._0_10_ = auVar19._0_10_;
            auVar6._12_2_ = (short)Var23;
            uVar35 = CONCAT42(auVar6._10_4_,auVar28._0_2_);
            auVar30._6_8_ = 0;
            auVar30._0_6_ = uVar35;
            uVar44 = (uint)uVar35;
            local_d8 = ((float)uVar60 + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
            fStack_d4 = ((float)(int)CONCAT82(SUB148(auVar30 << 0x40,6),auVar29._0_2_) + 0.0) *
                        fRam00000001467f0864 + fRam00000001467f06d4;
            fStack_d0 = ((float)(uVar44 >> 0x10) * 65536.0 + (float)(uVar44 & 0xffff)) *
                        fRam00000001467f0868 + fRam00000001467f06d8;
            fStack_cc = ((float)(auVar6._10_4_ >> 0x10) + 0.0) * fRam00000001467f086c +
                        fRam00000001467f06dc;
            auVar69._4_2_ = auVar10._10_2_;
            auVar69._6_6_ = 0;
            auVar69._12_4_ = uVar43;
            auVar51._0_4_ = (float)auVar69._0_4_;
            auVar51._4_4_ = (float)auVar10._10_2_;
            auVar51._8_4_ = 0;
            auVar51._12_4_ = (float)uVar43;
            local_c8 = (auVar51._0_4_ + 0.0) * _DAT_1467f0860 + _DAT_1467f06d0;
            fStack_c4 = (auVar51._4_4_ + 0.0) * fRam00000001467f0864 + fRam00000001467f06d4;
            fStack_c0 = fRam00000001467f0868 * 0.0 + fRam00000001467f06d8;
            fStack_bc = (auVar51._12_4_ + 0.0) * fRam00000001467f086c + fRam00000001467f06dc;
            auVar4._4_4_ = fVar82;
            auVar4._0_4_ = fVar81;
            auVar4._8_4_ = fVar84;
            auVar4._12_4_ = fVar86;
            auVar49 = rcpps(auVar51,auVar4);
            auVar76._0_4_ =
                 fVar88 * fVar88 - (fVar89 * fVar89 + (0.0 - local_158) + fVar77 * fVar77) * fVar81;
            auVar76._4_4_ =
                 fVar90 * fVar90 - (fVar91 * fVar91 + (0.0 - fStack_154) + fVar78 * fVar78) * fVar82
            ;
            auVar76._8_4_ =
                 fVar92 * fVar92 - (fVar93 * fVar93 + (0.0 - fStack_150) + fVar79 * fVar79) * fVar84
            ;
            auVar76._12_4_ =
                 fVar94 * fVar94 - (fVar80 * fVar80 + (0.0 - fStack_14c) + fVar87 * fVar87) * fVar86
            ;
            auVar55 = rsqrtps(auVar69,auVar76);
            fVar77 = (float)(~-(uint)(fVar81 == 0.0) & auVar49._0_4_) *
                     (-fVar88 - auVar55._0_4_ * auVar76._0_4_) * (float)local_128._0_4_;
            fVar78 = (float)(~-(uint)(fVar82 == 0.0) & auVar49._4_4_) *
                     (-fVar90 - auVar55._4_4_ * auVar76._4_4_) * (float)local_128._4_4_;
            fVar79 = (float)(~-(uint)(fVar84 == 0.0) & auVar49._8_4_) *
                     (-fVar92 - auVar55._8_4_ * auVar76._8_4_) * fStack_120;
            fVar87 = (float)(~-(uint)(fVar86 == 0.0) & auVar49._12_4_) *
                     (-fVar94 - auVar55._12_4_ * auVar76._12_4_) * fStack_11c;
            uVar43 = -(uint)((fVar88 < 0.0 && 0.0 < auVar76._0_4_) && fVar77 < *pfVar41);
            uVar44 = -(uint)((fVar90 < 0.0 && 0.0 < auVar76._4_4_) && fVar78 < pfVar41[1]);
            uVar45 = -(uint)((fVar92 < 0.0 && 0.0 < auVar76._8_4_) && fVar79 < pfVar41[2]);
            uVar46 = -(uint)((fVar94 < 0.0 && 0.0 < auVar76._12_4_) && fVar87 < pfVar41[3]);
            *pfVar41 = (float)(~uVar43 & (uint)*pfVar41 | uVar43 & (uint)fVar77);
            pfVar41[1] = (float)(~uVar44 & (uint)pfVar41[1] | uVar44 & (uint)fVar78);
            pfVar41[2] = (float)(~uVar45 & (uint)pfVar41[2] | uVar45 & (uint)fVar79);
            pfVar41[3] = (float)(~uVar46 & (uint)pfVar41[3] | uVar46 & (uint)fVar87);
            pfVar41 = pfVar41 + 4;
            lVar42 = lVar42 + -1;
            fVar77 = fVar36;
            fVar78 = fVar37;
            fVar79 = fVar38;
            fVar87 = fVar39;
          } while (lVar42 != 0);
        }
      }
      else {
        auVar55 = rcpps(auVar47,auVar74);
        fVar58 = (2.0 - auVar74._0_4_ * auVar55._0_4_) * auVar55._0_4_;
        fVar52 = fVar95 * fVar52 + fVar64 * local_138;
        uVar43 = -(uint)(fVar58 < fVar52);
        uVar44 = -(uint)(fVar52 < 0.0);
        uVar45 = -(uint)(fVar96 * (float)local_148._4_4_ + fVar71 * fStack_134 < 0.0);
        uVar46 = -(uint)(fVar97 * fStack_140 + fVar83 * fStack_130 < 0.0);
        local_168 = (float)auVar47._0_8_;
        fVar52 = (float)(~uVar43 & (uint)fVar52 & uVar44 | (uint)(fVar58 - fVar52) & uVar43);
        if (fVar52 * fVar52 + local_168 * local_168 < local_158) {
          fVar52 = *(float *)((longlong)param_6 + 0x24);
          fVar58 = *(float *)(param_6 + 5);
          fVar3 = *(float *)((longlong)param_6 + 0x2c);
          lVar42 = 0x20;
          fVar72 = *(float *)((longlong)param_6 + 0x14);
          fVar77 = *(float *)(param_6 + 3);
          fVar78 = *(float *)((longlong)param_6 + 0x1c);
          fVar79 = param_5[1];
          fVar53 = param_5[2];
          fVar59 = param_5[3];
          *param_9 = (fVar64 * *(float *)(param_6 + 4) - fVar95 * *(float *)(param_6 + 2)) *
                     (fVar63 - fVar87) * *param_5 + *param_9;
          param_9[1] = (fVar71 * fVar52 - fVar96 * fVar72) * (fVar70 - fVar89) * fVar79 + param_9[1]
          ;
          param_9[2] = (fVar83 * fVar58 - fVar97 * fVar77) * (fVar21 - fVar91) * fVar53 + param_9[2]
          ;
          param_9[3] = (fVar85 * fVar3 - fVar98 * fVar78) * (fStack_15c - fVar93) * fVar59 +
                       param_9[3];
          fVar63 = fRam00000001467f086c;
          fVar79 = fRam00000001467f0868;
          fVar78 = fRam00000001467f0864;
          fVar77 = _DAT_1467f0860;
          fVar72 = fRam00000001467f06dc;
          fVar3 = fRam00000001467f06d8;
          fVar58 = fRam00000001467f06d4;
          fVar52 = _DAT_1467f06d0;
          do {
            local_108 = local_108 + 1;
            uVar40 = *local_108;
            auVar65._8_4_ = 0;
            auVar65._0_8_ = uVar40;
            auVar9._12_2_ = 0;
            auVar9._0_12_ = auVar65;
            auVar9[0xe] = (char)(uVar40 >> 0x38);
            auVar11[0xc] = (char)(uVar40 >> 0x30);
            auVar11._0_12_ = auVar65;
            auVar11._13_2_ = auVar9._13_2_;
            auVar14._8_4_ = 0;
            auVar14._0_8_ = uVar40;
            auVar14._12_3_ = auVar11._12_3_;
            auVar16._8_2_ = 0;
            auVar16._0_8_ = uVar40;
            auVar16[10] = (char)(uVar40 >> 0x28);
            auVar16._11_4_ = auVar14._11_4_;
            auVar17._8_2_ = 0;
            auVar17._0_8_ = uVar40;
            auVar17._10_5_ = auVar16._10_5_;
            auVar18[8] = (char)(uVar40 >> 0x20);
            auVar18._0_8_ = uVar40;
            auVar18._9_6_ = auVar17._9_6_;
            auVar22._7_8_ = 0;
            auVar22._0_7_ = auVar18._8_7_;
            Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),(char)(uVar40 >> 0x18));
            auVar31._9_6_ = 0;
            auVar31._0_9_ = Var23;
            auVar24._1_10_ = SUB1510(auVar31 << 0x30,5);
            auVar24[0] = (char)(uVar40 >> 0x10);
            auVar32._11_4_ = 0;
            auVar32._0_11_ = auVar24;
            auVar25._1_12_ = SUB1512(auVar32 << 0x20,3);
            auVar25[0] = (char)(uVar40 >> 8);
            uVar62 = CONCAT11(0,(byte)uVar40);
            auVar20._2_13_ = auVar25;
            auVar20._0_2_ = uVar62;
            uVar60 = (ushort)Var23;
            auVar12._10_2_ = 0;
            auVar12._0_10_ = auVar20._0_10_;
            auVar12._12_2_ = uVar60;
            uVar35 = CONCAT42(auVar12._10_4_,auVar24._0_2_);
            auVar26._6_8_ = 0;
            auVar26._0_6_ = uVar35;
            uVar61 = (uint)uVar35;
            uVar43 = -(uint)(fVar64 * local_c8 - fVar95 * local_d8 <= 0.0);
            uVar44 = -(uint)(fVar71 * fStack_c4 - fVar96 * fStack_d4 <= 0.0);
            uVar45 = -(uint)(fVar83 * fStack_c0 - fVar97 * fStack_d0 <= 0.0);
            uVar46 = -(uint)(fVar85 * fStack_bc - fVar98 * fStack_cc <= 0.0);
            *pfVar41 = (float)(~uVar43 & (uint)*pfVar41 | uVar43 & (uint)fVar77);
            pfVar41[1] = (float)(~uVar44 & (uint)pfVar41[1] | uVar44 & (uint)fVar78);
            pfVar41[2] = (float)(~uVar45 & (uint)pfVar41[2] | uVar45 & (uint)fVar79);
            pfVar41[3] = (float)(~uVar46 & (uint)pfVar41[3] | uVar46 & (uint)fVar63);
            local_d8 = ((float)uVar62 + 0.0) * fVar77 + fVar52;
            fStack_d4 = ((float)(int)CONCAT82(SUB148(auVar26 << 0x40,6),auVar25._0_2_) + 0.0) *
                        fVar78 + fVar58;
            fStack_d0 = ((float)(uVar61 >> 0x10) * 65536.0 + (float)(uVar61 & 0xffff)) * fVar79 +
                        fVar3;
            fStack_cc = ((float)uVar60 + 0.0) * fVar63 + fVar72;
            pfVar41 = pfVar41 + 4;
            local_c8 = ((float)auVar18._8_2_ + 0.0) * fVar77 + fVar52;
            fStack_c4 = ((float)auVar16._10_2_ + 0.0) * fVar78 + fVar58;
            fStack_c0 = fVar79 * 0.0 + fVar3;
            fStack_bc = ((float)(auVar14._11_4_ >> 0x18) + 0.0) * fVar63 + fVar72;
            lVar42 = lVar42 + -1;
          } while (lVar42 != 0);
          return CONCAT71((int7)((ulonglong)pfVar41 >> 8),1);
        }
        pfVar41 = (float *)CONCAT71((int7)((ulonglong)pfVar41 >> 8),fVar87 < 0.0);
        if (fVar87 >= 0.0) {
          uStack_164 = ~uVar45 & (uint)param_3[1] | uVar45 & (uint)fVar78;
          local_168 = (float)(~uVar44 & (uint)*param_3 | uVar44 & (uint)fVar77);
          uStack_160 = ~uVar46 & (uint)param_3[2] | uVar46 & (uint)fVar79;
          _local_148 = auVar49;
          uVar40 = FUN_1438cce60(param_1,&local_168,param_5,&local_108,param_7,param_8,param_9);
          return uVar40;
        }
      }
      uVar40 = (ulonglong)pfVar41 & 0xffffffffffffff00;
    }
  }
  else {
    uVar40 = (ulonglong)(uint3)(uVar43 >> 8) << 8;
  }
  return uVar40;
}



// FUNCTION 1438cce60 FUN_1438cce60 body=62 status=ok
// SIG undefined FUN_1438cce60(void)

void FUN_1438cce60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1438cc210(param_1,param_2,&DAT_1467f06e0,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1438ccea0 FUN_1438ccea0 body=193 status=ok
// SIG undefined FUN_1438ccea0(void)

void FUN_1438ccea0(longlong param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 local_res8;
  
  lVar4 = (longlong)(int)param_2;
  uVar8 = param_4;
  do {
    uVar6 = param_2 & 0xffffffff;
    local_res8 = (float)*(undefined8 *)(param_1 + ((longlong)((int)param_2 + param_3) >> 1) * 8);
    lVar9 = (longlong)param_3;
    iVar7 = param_3;
    do {
      uVar5 = (uint)uVar6;
      pfVar1 = (float *)(param_1 + lVar4 * 8);
      if (*pfVar1 <= local_res8 && local_res8 != *pfVar1) {
        do {
          lVar4 = lVar4 + 1;
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          pfVar1 = (float *)(param_1 + lVar4 * 8);
        } while (*pfVar1 <= local_res8 && local_res8 != *pfVar1);
      }
      fVar2 = *(float *)(param_1 + lVar9 * 8);
      while (local_res8 < fVar2) {
        lVar9 = lVar9 + -1;
        iVar7 = iVar7 + -1;
        fVar2 = *(float *)(param_1 + lVar9 * 8);
      }
      if (lVar9 < lVar4) break;
      if (lVar9 != lVar4) {
        uVar3 = *(undefined8 *)(param_1 + lVar9 * 8);
        *(undefined8 *)(param_1 + lVar9 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
        *(undefined8 *)(param_1 + lVar4 * 8) = uVar3;
      }
      iVar7 = iVar7 + -1;
      lVar9 = lVar9 + -1;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar4 = lVar4 + 1;
    } while (lVar4 <= lVar9);
    if ((int)param_2 < iVar7) {
      FUN_1438ccea0(param_1,param_2,iVar7,uVar8);
      uVar8 = param_4 & 0xff;
    }
    if (param_3 <= (int)uVar5) {
      return;
    }
    param_2 = (ulonglong)uVar5;
  } while( true );
}



// FUNCTION 1438ccf70 FUN_1438ccf70 body=430 status=ok
// SIG undefined FUN_1438ccf70(void)

ulonglong * FUN_1438ccf70(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  *param_1 = param_3;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 2) = 0x7f7fffee;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  iVar6 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  FUN_143710920(param_1 + 10);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  for (lVar4 = *param_2; lVar4 != param_2[1]; lVar4 = lVar4 + 0x10) {
    iVar6 = iVar6 + *(int *)(lVar4 + 8);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x4c) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar2 = uVar3 * 2;
    iVar1 = iVar6;
    if (iVar6 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 8,iVar1,8);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x3c) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar2 = uVar3 * 2;
    iVar1 = iVar6;
    if (iVar6 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 6,iVar1,0xc);
  }
  uVar5 = FUN_143703a50();
  uVar3 = *(uint *)((longlong)param_1 + 0x24) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar2 = uVar3 * 2;
    iVar1 = iVar6;
    if (iVar6 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_14370c310(uVar5,param_1 + 3,iVar1,0x38);
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x74) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar1 = uVar3 * 2;
    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }
    FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 0xd,iVar6,8);
  }
  lVar4 = param_2[1];
  for (lVar8 = *param_2; lVar8 != lVar4; lVar8 = lVar8 + 0x10) {
    iVar6 = FUN_1438cd310(param_1,lVar8,iVar7);
    FUN_1438cd510(param_1,iVar7,iVar6);
    iVar7 = iVar7 + iVar6;
  }
  if (1 < (int)param_1[9]) {
    FUN_1438ccea0(param_1[8],0,(int)param_1[9] + -1,param_3 & 0xff);
  }
  return param_1;
}



// FUNCTION 1438cd120 FUN_1438cd120 body=424 status=ok
// SIG undefined FUN_1438cd120(void)

void FUN_1438cd120(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      lVar2 = *(longlong *)(uVar7 + 0x30 + *(longlong *)(param_1 + 0x18));
      while (lVar2 != 0) {
        lVar1 = *(longlong *)(lVar2 + 0x20);
        pvVar3 = TlsGetValue(DAT_146b7bf70);
        if (pvVar3 == (LPVOID)0x0) {
          pvVar3 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar3 + 0x58),lVar2,0x28);
        lVar2 = lVar1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 0x38;
    } while ((int)uVar5 < *(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x74)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x68),8,
                  *(uint *)(param_1 + 0x74) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  uVar4 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x5c)) {
    FUN_143702e10(uVar4,*(undefined8 *)(param_1 + 0x50),8,*(uint *)(param_1 + 0x5c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x40),8,
                  *(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x3c)) {
    FUN_143702e10(&PTR_vftable_1467f0638,*(undefined8 *)(param_1 + 0x30),0xc,
                  *(uint *)(param_1 + 0x3c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar4 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar4,*(undefined8 *)(param_1 + 0x18),0x38,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1438cd2d0 FUN_1438cd2d0 body=50 status=ok
// SIG undefined FUN_1438cd2d0(void)

int FUN_1438cd2d0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  iVar1 = param_2 * 2 + 2;
  iVar2 = param_2 * 2 + 1;
  if ((int)param_1[1] <= iVar1) {
    return iVar2;
  }
  fVar4 = *(float *)(*(longlong *)(*param_1 + (longlong)iVar1 * 8) + 4);
  pfVar3 = (float *)(*(longlong *)(*param_1 + (longlong)iVar2 * 8) + 4);
  if (*pfVar3 <= fVar4 && fVar4 != *pfVar3) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 1438cd310 FUN_1438cd310 body=369 status=ok
// SIG undefined FUN_1438cd310(void)

ulonglong FUN_1438cd310(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  float fStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar3 = (int)param_2[1];
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < iVar3) {
    lVar7 = (longlong)(iVar3 + -1) * 8;
    do {
      lVar4 = *param_2;
      pfVar1 = (float *)(lVar7 + lVar4);
      puVar6 = (undefined8 *)(lVar7 + lVar4);
      lVar7 = uVar8 * 8;
      if (*pfVar1 - *(float *)(lVar7 + lVar4) != 0.0) {
        bVar5 = *pfVar1 < *(float *)(lVar7 + lVar4);
        uStack_54 = CONCAT31(uStack_54._1_3_,bVar5);
        if (bVar5) {
          uVar2 = *puVar6;
          fVar10 = (float)uVar2;
          fVar11 = (float)((ulonglong)uVar2 >> 0x20);
          fVar12 = (float)*(undefined8 *)(lVar7 + lVar4);
          fVar13 = (float)((ulonglong)*(undefined8 *)(lVar7 + lVar4) >> 0x20);
        }
        else {
          fVar10 = (float)*(undefined8 *)(lVar7 + lVar4);
          fVar11 = (float)((ulonglong)*(undefined8 *)(lVar7 + lVar4) >> 0x20);
          uVar2 = *puVar6;
          fVar12 = (float)uVar2;
          fVar13 = (float)((ulonglong)uVar2 >> 0x20);
        }
        uStack_50 = CONCAT44(fVar11,fVar10);
        local_48 = CONCAT44(fVar13,fVar12);
        if ((fVar12 - fVar10 == 0.0) ||
           (fStack_40 = (fVar13 - fVar11) / (fVar12 - fVar10), 10000.0 < ABS(fStack_40))) {
          fStack_40 = 0.0;
          if (bVar5 == fVar11 < fVar13) {
            uStack_50 = CONCAT44(fVar13,fVar10);
          }
          else {
            local_48 = CONCAT44(fVar11,fVar12);
          }
        }
        puVar6 = (undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x20) * 0x38 + *(longlong *)(param_1 + 0x18));
        *puVar6 = CONCAT44(uStack_54,*(undefined4 *)(param_1 + 0x20));
        puVar6[1] = uStack_50;
        puVar6[2] = local_48;
        puVar6[3] = CONCAT44(uStack_3c,fStack_40);
        puVar6[4] = local_38;
        puVar6[5] = uStack_30;
        puVar6[6] = 0;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 < (longlong)iVar3);
  }
  return uVar9;
}



// FUNCTION 1438cd490 FUN_1438cd490 body=113 status=ok
// SIG undefined FUN_1438cd490(void)

void FUN_1438cd490(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[1];
  *(int *)*param_2 = (int)lVar1;
  uVar2 = FUN_143703a50();
  if (*(uint *)(param_1 + 1) == (*(uint *)((longlong)param_1 + 0xc) & 0x3fffffff)) {
    FUN_14370c460(uVar2,param_1,8);
  }
  *(undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8) = *param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  FUN_1438ce7e0(param_1,(int)lVar1);
  return;
}



// FUNCTION 1438cd510 FUN_1438cd510 body=550 status=ok
// SIG undefined FUN_1438cd510(void)

void FUN_1438cd510(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong local_res20;
  
  if (0 < (int)param_3) {
    local_res20 = (ulonglong)param_3;
    lVar14 = (longlong)param_2;
    iVar11 = param_2;
    do {
      iVar3 = *(int *)(param_1 + 0x48);
      lVar1 = lVar14 + 1;
      iVar9 = iVar11 + 1;
      if (lVar1 == (int)(param_2 + param_3)) {
        iVar9 = param_2;
        lVar1 = (longlong)param_2;
      }
      iVar12 = iVar3 + 1;
      uVar7 = *(uint *)(param_1 + 0x4c) & 0x3fffffff;
      lVar10 = lVar1 * 0x38 + *(longlong *)(param_1 + 0x18);
      lVar14 = lVar14 * 0x38 + *(longlong *)(param_1 + 0x18);
      if ((int)uVar7 < iVar12) {
        iVar13 = uVar7 * 2;
        if (iVar12 < iVar13) {
          iVar12 = iVar13;
        }
        FUN_14370c310(&PTR_vftable_1467f0638,(longlong *)(param_1 + 0x40),iVar12,8);
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      lVar4 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar3 * 8) = *(undefined4 *)(param_1 + 0x38);
      iVar12 = *(int *)(param_1 + 0x38);
      uVar7 = *(uint *)(param_1 + 0x3c) & 0x3fffffff;
      iVar13 = iVar12 + 1;
      if ((int)uVar7 < iVar13) {
        iVar5 = uVar7 * 2;
        if (iVar13 < iVar5) {
          iVar13 = iVar5;
        }
        FUN_14370c310(&PTR_vftable_1467f0638,(longlong *)(param_1 + 0x30),iVar13,0xc);
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar12 * 0xc);
      cVar6 = *(char *)(lVar10 + 4);
      if (cVar6 == *(char *)(lVar14 + 4)) {
        if (cVar6 == '\0') {
          *(undefined4 **)(lVar10 + 0x28) = puVar2;
          *puVar2 = 1;
LAB_1438cd66f:
          puVar2[2] = iVar11;
          puVar2[1] = iVar9;
LAB_1438cd675:
          uVar8 = *(undefined4 *)(lVar10 + 0x10);
        }
        else {
          *(undefined4 **)(lVar14 + 0x28) = puVar2;
          *puVar2 = 1;
          puVar2[1] = iVar11;
          puVar2[2] = iVar9;
          uVar8 = *(undefined4 *)(lVar14 + 0x10);
        }
      }
      else {
        if (cVar6 == '\0') {
          *(undefined4 **)(lVar14 + 0x28) = puVar2;
          *(undefined4 **)(lVar10 + 0x28) = puVar2;
          *puVar2 = 3;
          cVar6 = FUN_1438cdaf0(lVar14,lVar10);
          if (cVar6 == '\0') goto LAB_1438cd66f;
          puVar2[1] = iVar11;
          puVar2[2] = iVar9;
          goto LAB_1438cd675;
        }
        *puVar2 = 2;
        cVar6 = FUN_1438ce5c0();
        if (cVar6 == '\0') {
          puVar2[1] = iVar9;
          puVar2[2] = iVar11;
          uVar8 = *(undefined4 *)(lVar10 + 8);
        }
        else {
          puVar2[1] = iVar11;
          puVar2[2] = iVar9;
          uVar8 = *(undefined4 *)(lVar10 + 8);
        }
      }
      local_res20 = local_res20 - 1;
      *(undefined4 *)(lVar4 + (longlong)iVar3 * 8) = uVar8;
      lVar14 = lVar1;
      iVar11 = iVar9;
    } while (local_res20 != 0);
  }
  return;
}



// FUNCTION 1438cd740 FUN_1438cd740 body=15 status=ok
// SIG undefined FUN_1438cd740(void)

void FUN_1438cd740(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0xff7fffee;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1438cd750 FUN_1438cd750 body=405 status=ok
// SIG undefined FUN_1438cd750(void)

void FUN_1438cd750(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float local_res8;
  
  fVar1 = param_1[0x18];
  fVar2 = param_1[1];
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1a) + (longlong)param_2 * 8);
  fVar6 = *param_1;
  local_res8 = *(float *)(lVar4 + 0x20);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1a) + (longlong)(param_2 + 1) * 8);
  if (fVar6 < local_res8) {
    fVar5 = (float)FUN_1438cdd30(lVar4,local_res8);
    if ((fVar5 <= fVar2) &&
       (fVar5 = (float)FUN_1438cdd30(lVar3,local_res8), lVar4 = lVar3, fVar2 < fVar5)) {
      fVar6 = (fVar2 - fVar2) * (fVar2 - fVar2) + (local_res8 - fVar6) * (local_res8 - fVar6);
LAB_1438cd843:
      if (param_1[4] <= fVar6) {
        return;
      }
      *(ulonglong *)(param_1 + 2) = CONCAT44(fVar2,local_res8);
      param_1[4] = fVar6;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  else if (fVar1 <= fVar6) {
    fVar5 = (float)FUN_1438cdd30(lVar4,fVar1);
    if ((fVar5 <= fVar2) &&
       (fVar5 = (float)FUN_1438cdd30(lVar3,fVar1), lVar4 = lVar3, fVar2 < fVar5)) {
      fVar6 = (fVar2 - fVar2) * (fVar2 - fVar2) + (fVar1 - fVar6) * (fVar1 - fVar6);
      local_res8 = fVar1;
      goto LAB_1438cd843;
    }
  }
  else {
    fVar5 = (float)FUN_1438cdd30(lVar4,fVar6);
    if ((fVar5 <= fVar2) &&
       (fVar6 = (float)FUN_1438cdd30(lVar3,fVar6), lVar4 = lVar3, fVar2 < fVar6)) {
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)param_1;
      param_1[4] = 0.0;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  FUN_1438cd8f0(param_1,local_res8,fVar1,lVar4);
  return;
}



// FUNCTION 1438cd8f0 FUN_1438cd8f0 body=188 status=ok
// SIG undefined FUN_1438cd8f0(void)

void FUN_1438cd8f0(float *param_1,float param_2,float param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_3 = param_3 - *(float *)(param_4 + 8);
  param_2 = param_2 - *(float *)(param_4 + 8);
  fVar2 = *(float *)(param_4 + 0x18);
  fVar3 = -((fVar2 * (*(float *)(param_4 + 0xc) - param_1[1]) + (*(float *)(param_4 + 8) - *param_1)
            ) / (fVar2 * fVar2 + 1.0));
  if (fVar3 <= param_2) {
    fVar3 = param_2;
  }
  if (param_3 <= fVar3) {
    fVar3 = param_3;
  }
  fVar1 = fVar3 + *(float *)(param_4 + 8);
  fVar3 = fVar3 * fVar2 + *(float *)(param_4 + 0xc);
  fVar2 = fVar1 - *param_1;
  fVar4 = fVar3 - param_1[1];
  fVar2 = fVar4 * fVar4 + fVar2 * fVar2;
  if (fVar2 < param_1[4]) {
    *(ulonglong *)(param_1 + 2) = CONCAT44(fVar3,fVar1);
    param_1[4] = fVar2;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



// FUNCTION 1438cd9b0 FUN_1438cd9b0 body=181 status=ok
// SIG undefined FUN_1438cd9b0(void)

void FUN_1438cd9b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 != 0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    else if (iVar1 < param_2) {
      param_2 = iVar1;
    }
    iVar3 = 0;
    if ((-1 < param_3) && (iVar3 = param_3, iVar1 < param_3)) {
      iVar3 = iVar1;
    }
    if (iVar3 == iVar1) {
      iVar3 = iVar3 + -1;
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
    }
    for (lVar2 = (longlong)param_2; lVar2 < iVar3; lVar2 = lVar2 + 1) {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar2 * 8) + 0x1c) == 0) {
        FUN_1438cd750(param_1,param_2);
      }
      param_2 = param_2 + 1;
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar2 * 8) + 0x20) =
           *(undefined4 *)(param_1 + 0x60);
    }
  }
  return;
}



// FUNCTION 1438cda70 FUN_1438cda70 body=126 status=ok
// SIG undefined FUN_1438cda70(void)

int FUN_1438cda70(longlong *param_1,int param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  lVar8 = param_1[1];
  iVar9 = FUN_1438cd2d0();
  while( true ) {
    iVar7 = iVar9;
    if ((int)lVar8 <= iVar7) {
      return param_2;
    }
    lVar3 = *param_1;
    lVar10 = (longlong)param_2;
    puVar4 = *(undefined4 **)(lVar3 + lVar10 * 8);
    lVar5 = *(longlong *)(lVar3 + (longlong)iVar7 * 8);
    pfVar1 = (float *)(lVar5 + 4);
    if ((float)puVar4[1] < *pfVar1 || (float)puVar4[1] == *pfVar1) break;
    *(longlong *)(lVar3 + lVar10 * 8) = lVar5;
    *(undefined4 **)(lVar3 + (longlong)iVar7 * 8) = puVar4;
    puVar6 = *(undefined4 **)(lVar3 + lVar10 * 8);
    uVar2 = *puVar6;
    *puVar6 = *puVar4;
    *puVar4 = uVar2;
    iVar9 = FUN_1438cd2d0(param_1,iVar7);
    param_2 = iVar7;
  }
  return param_2;
}



// FUNCTION 1438cdaf0 FUN_1438cdaf0 body=74 status=ok
// SIG undefined FUN_1438cdaf0(void)

uint FUN_1438cdaf0(int *param_1,int *param_2)

{
  if ((float)param_1[5] != (float)param_2[5]) {
    return (uint)((float)param_1[5] < (float)param_2[5]);
  }
  if ((float)param_1[6] != (float)param_2[6]) {
    return (uint)((float)param_2[6] < (float)param_1[6]);
  }
  if (*(byte *)(param_1 + 1) != *(byte *)(param_2 + 1)) {
    return (uint)(*(byte *)(param_1 + 1) < *(byte *)(param_2 + 1));
  }
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
}



// FUNCTION 1438cdb40 FUN_1438cdb40 body=154 status=ok
// SIG undefined FUN_1438cdb40(void)

ulonglong FUN_1438cdb40(longlong param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_228 [32];
  undefined1 local_208 [520];
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    plVar3 = *(longlong **)(param_1 + 0x68);
    uVar5 = uVar4;
    do {
      if (*plVar3 == param_2) {
        return uVar5;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 1;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x70));
  }
  FUN_1437134a0(local_228,local_208,0x200);
  Electra::FHTTPResourceRequest::URL(local_228,"edge not on sweep line");
  iVar2 = FUN_143732300(0x3cbb03f2,local_208,
                        "NavMesh\\ResolveEdgePenetrations\\hkaiFindPointInPolygon.cpp",0x359);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return uVar4;
  }
  FUN_143713520(local_228);
  return 0;
}



// FUNCTION 1438cdbe0 FUN_1438cdbe0 body=109 status=ok
// SIG undefined FUN_1438cdbe0(void)

ulonglong FUN_1438cdbe0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar3 = 0;
  if (0 < (int)uVar1) {
    puVar5 = *(undefined8 **)(param_1 + 0x68);
    uVar4 = uVar3;
    do {
      cVar2 = FUN_1438ce530(param_2,*puVar5);
      if (cVar2 != '\0') {
        return uVar4;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 1;
    } while ((longlong)uVar3 < (longlong)(int)uVar1);
  }
  return (ulonglong)uVar1;
}



// FUNCTION 1438cdc50 FUN_1438cdc50 body=104 status=ok
// SIG undefined FUN_1438cdc50(void)

ulonglong FUN_1438cdc50(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2;
  if (0 < param_2) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + uVar3 * 8);
    uVar4 = uVar3;
    do {
      cVar1 = FUN_1438ce530(param_3,*puVar2);
      if (cVar1 == '\0') {
        return uVar4 & 0xffffffff;
      }
      uVar4 = (ulonglong)((int)uVar4 - 1);
      uVar3 = uVar3 - 1;
      puVar2 = puVar2 + -1;
    } while (0 < (longlong)uVar3);
  }
  return 0;
}



// FUNCTION 1438cdcc0 FUN_1438cdcc0 body=111 status=ok
// SIG undefined FUN_1438cdcc0(void)

ulonglong FUN_1438cdcc0(longlong param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar4 = (ulonglong)param_2;
  if (param_2 < (int)uVar1) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + uVar4 * 8);
    uVar5 = uVar4;
    do {
      cVar2 = FUN_1438ce530(param_3,*puVar3);
      if (cVar2 != '\0') {
        return uVar5 & 0xffffffff;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
    } while ((longlong)uVar4 < (longlong)(int)uVar1);
  }
  return (ulonglong)uVar1;
}



// FUNCTION 1438cdd30 FUN_1438cdd30 body=19 status=ok
// SIG undefined FUN_1438cdd30(void)

float FUN_1438cdd30(longlong param_1,float param_2)

{
  return (param_2 - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x18) +
         *(float *)(param_1 + 0xc);
}



// FUNCTION 1438cdd50 FUN_1438cdd50 body=603 status=ok
// SIG undefined FUN_1438cdd50(void)

void FUN_1438cdd50(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  lVar8 = (longlong)*(int *)(param_2 + 4) * 0x38 + *(longlong *)(param_1 + 0x18);
  lVar10 = (longlong)*(int *)(param_2 + 8) * 0x38 + *(longlong *)(param_1 + 0x18);
  iVar2 = FUN_1438cdbe0(param_1,lVar8);
  lVar7 = (longlong)iVar2;
  iVar3 = FUN_1438cdcc0(param_1,iVar2,lVar10);
  lVar6 = (longlong)iVar3;
  iVar11 = iVar2 + -1;
  FUN_1438cd9b0(param_1,iVar11,iVar3);
  if (iVar2 == iVar3) {
    iVar3 = 1;
    if (*(char *)(lVar8 + 4) != '\0') {
      iVar3 = -1;
    }
    if (iVar2 == 0) {
      *(int *)(lVar8 + 0x1c) = iVar3 + 1;
      *(undefined4 *)(lVar10 + 0x1c) = 1;
    }
    else {
      iVar11 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar11 * 8) + 0x1c);
      *(int *)(lVar10 + 0x1c) = iVar11;
      *(int *)(lVar8 + 0x1c) = iVar11 + iVar3;
    }
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    iVar11 = *(int *)(param_1 + 0x70);
    uVar4 = *(uint *)(param_1 + 0x74) & 0x3fffffff;
    iVar3 = iVar11 + 2;
    if (((int)uVar4 < iVar3) && ((int)uVar4 < iVar3)) {
      iVar9 = iVar3;
      if (iVar3 < (int)(uVar4 * 2)) {
        iVar9 = uVar4 * 2;
      }
      FUN_14370c310(&PTR_vftable_1467f0638,param_1 + 0x68,iVar9,8);
    }
    lVar6 = *(longlong *)(param_1 + 0x68) + lVar7 * 8;
    FUN_143732890(lVar6 + 0x10,lVar6,(longlong)(iVar11 - iVar2) << 3);
    lVar6 = *(longlong *)(param_1 + 0x68);
    *(longlong *)(lVar6 + lVar7 * 8) = lVar8;
    *(longlong *)(lVar6 + 8 + lVar7 * 8) = lVar10;
    *(int *)(param_1 + 0x70) = iVar3;
    FUN_1438ce850(param_1,iVar2 + -1);
    FUN_1438ce850(param_1,iVar2);
    FUN_1438ce850(param_1,iVar2 + 1);
  }
  else {
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 2;
    for (lVar5 = (longlong)(*(int *)(param_1 + 0x70) + -1); iVar3 + 2 <= lVar5; lVar5 = lVar5 + -1)
    {
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar5 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -0x10 + lVar5 * 8);
    }
    *(undefined4 *)(lVar10 + 0x1c) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(iVar3 + -1) * 8) + 0x1c);
    *(undefined4 *)(lVar10 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(iVar3 + 1) * 8) = lVar10;
    iVar9 = 1;
    if (*(char *)(lVar8 + 4) != '\0') {
      iVar9 = -1;
    }
    for (; iVar2 + 1 <= lVar6; lVar6 = lVar6 + -1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar6 * 8);
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8) + 0x1c);
      *piVar1 = *piVar1 + iVar9;
    }
    *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar7 * 8) = lVar8;
    if (iVar2 == 0) {
      *(int *)(lVar8 + 0x1c) = iVar9 + 1;
    }
    else {
      *(int *)(lVar8 + 0x1c) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar11 * 8) + 0x1c) +
           iVar9;
    }
    FUN_1438ce850(param_1,iVar11);
    FUN_1438ce850(param_1,iVar2);
    FUN_1438ce850(param_1,iVar3);
    FUN_1438ce850(param_1,iVar3 + 1);
  }
  return;
}



// FUNCTION 1438cdfb0 FUN_1438cdfb0 body=205 status=ok
// SIG undefined FUN_1438cdfb0(void)

void FUN_1438cdfb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x18);
  iVar3 = FUN_1438cdb40(param_1,lVar1);
  FUN_1438cd9b0(param_1,iVar3 + -1,iVar3 + 2);
  *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar3 * 8) = lVar2;
  *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(iVar3 + 1) * 8) = lVar1;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x20);
  if ((*(int **)(lVar2 + 0x30) != (int *)0x0) && (**(int **)(lVar2 + 0x30) != -1)) {
    FUN_1438ce4b0(param_1 + 0x50);
    **(undefined4 **)(lVar2 + 0x30) = 0xffffffff;
  }
  FUN_1438ce850(param_1,iVar3 + -1);
  FUN_1438ce850(param_1,iVar3 + 1);
  iVar4 = 1;
  iVar3 = 1;
  if (*(char *)(lVar2 + 4) != '\0') {
    iVar3 = -1;
  }
  *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + iVar3;
  if (*(char *)(lVar1 + 4) != '\0') {
    iVar4 = -1;
  }
  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) - iVar4;
  return;
}



// FUNCTION 1438ce080 FUN_1438ce080 body=37 status=ok
// SIG undefined FUN_1438ce080(void)

void FUN_1438ce080(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    FUN_1438ce0b0();
    return;
  }
  if (iVar1 != 2) {
    if (iVar1 == 3) {
      FUN_1438ce2e0();
      return;
    }
    return;
  }
  FUN_1438cdd50();
  return;
}



// FUNCTION 1438ce0b0 FUN_1438ce0b0 body=547 status=ok
// SIG undefined FUN_1438ce0b0(void)

void FUN_1438ce0b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = (longlong)*(int *)(param_2 + 4) * 0x38 + *(longlong *)(param_1 + 0x18);
  lVar7 = (longlong)*(int *)(param_2 + 8) * 0x38 + *(longlong *)(param_1 + 0x18);
  iVar3 = FUN_1438cdb40(param_1,lVar9);
  lVar6 = (longlong)iVar3;
  if (iVar3 < 1) {
LAB_1438ce1b5:
    if ((iVar3 < *(int *)(param_1 + 0x70) + -1) &&
       (cVar2 = FUN_1438ce530(lVar7,*(undefined8 *)
                                     (*(longlong *)(param_1 + 0x68) + (longlong)(iVar3 + 1) * 8)),
       cVar2 == '\0')) {
      iVar5 = FUN_1438cdcc0(param_1,iVar3 + 2,lVar7);
      iVar4 = iVar5 + -1;
      FUN_1438cd9b0(param_1,iVar3 + -1,iVar5);
      iVar8 = -1;
      if (*(char *)(lVar7 + 4) != '\0') {
        iVar8 = 1;
      }
      for (; lVar6 < iVar4; lVar6 = lVar6 + 1) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8) =
             *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8 + lVar6 * 8);
        piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8) + 0x1c);
        *piVar1 = *piVar1 + iVar8;
      }
      *(int *)(lVar7 + 0x1c) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(iVar5 + -2) * 8) + 0x1c
                   ) - iVar8;
      *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 8) = lVar7;
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x60);
      FUN_1438ce850(param_1,iVar3);
      FUN_1438ce850(param_1,iVar5 + -2);
      goto LAB_1438ce2b1;
    }
    FUN_1438cd9b0(param_1,iVar3 + -1,iVar3 + 1);
    iVar4 = iVar3 + -1;
    *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar9 + 0x1c);
    *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8) = lVar7;
  }
  else {
    cVar2 = FUN_1438ce530(lVar7,*(undefined8 *)
                                 (*(longlong *)(param_1 + 0x68) + (longlong)(iVar3 + -1) * 8));
    if (cVar2 == '\0') goto LAB_1438ce1b5;
    iVar4 = FUN_1438cdc50(param_1,iVar3 + -1,lVar7);
    iVar8 = iVar4 + -1;
    FUN_1438cd9b0(param_1,iVar8,iVar3 + 1);
    iVar5 = 1;
    if (*(char *)(lVar7 + 4) != '\0') {
      iVar5 = -1;
    }
    for (; iVar4 < lVar6; lVar6 = lVar6 + -1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar6 * 8);
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar6 * 8) + 0x1c);
      *piVar1 = *piVar1 + iVar5;
    }
    if (iVar4 == 0) {
      *(int *)(lVar7 + 0x1c) = iVar5 + 1;
    }
    else {
      *(int *)(lVar7 + 0x1c) =
           *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar8 * 8) + 0x1c) +
           iVar5;
    }
    *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 8) = lVar7;
    *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(param_1 + 0x60);
    FUN_1438ce850(param_1,iVar8);
  }
  FUN_1438ce850(param_1,iVar4);
  iVar4 = iVar3;
LAB_1438ce2b1:
  FUN_1438ce850(param_1,iVar4);
  return;
}



// FUNCTION 1438ce2e0 FUN_1438ce2e0 body=372 status=ok
// SIG undefined FUN_1438ce2e0(void)

void FUN_1438ce2e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = (longlong)*(int *)(param_2 + 8) * 0x38 + *(longlong *)(param_1 + 0x18);
  lVar5 = (longlong)*(int *)(param_2 + 4) * 0x38 + *(longlong *)(param_1 + 0x18);
  iVar2 = FUN_1438cdb40(param_1,lVar5);
  iVar3 = FUN_1438cdb40(param_1,lVar8);
  iVar4 = iVar2;
  if (iVar3 < iVar2) {
    lVar5 = lVar8;
    iVar4 = iVar3;
    iVar3 = iVar2;
  }
  FUN_1438cd9b0(param_1,iVar4 + -1,iVar3 + 1);
  if (iVar3 == iVar4 + 1) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -2;
    lVar5 = (longlong)(*(int *)(param_1 + 0x70) - iVar4) * 8;
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 8);
    iVar3 = 0;
    if (0 < lVar5) {
      lVar8 = (*(longlong *)(param_1 + 0x68) + 0x10 + (longlong)iVar4 * 8) - (longlong)puVar6;
      do {
        iVar3 = iVar3 + 8;
        *puVar6 = *(undefined8 *)(lVar8 + (longlong)puVar6);
        puVar6 = puVar6 + 1;
      } while (iVar3 < lVar5);
    }
    iVar4 = iVar4 + -1;
  }
  else {
    lVar8 = (longlong)iVar4;
    iVar2 = iVar3 + -1;
    iVar7 = 1;
    if (*(char *)(lVar5 + 4) != '\0') {
      iVar7 = -1;
    }
    for (; lVar8 < iVar2; lVar8 = lVar8 + 1) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar8 * 8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8 + lVar8 * 8);
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + lVar8 * 8) + 0x1c);
      *piVar1 = *piVar1 - iVar7;
    }
    if (iVar2 < *(int *)(param_1 + 0x70) + -2) {
      lVar5 = (longlong)iVar2 * 8;
      do {
        iVar2 = iVar2 + 1;
        *(undefined8 *)(lVar5 + *(longlong *)(param_1 + 0x68)) =
             *(undefined8 *)(lVar5 + 0x10 + *(longlong *)(param_1 + 0x68));
        lVar5 = lVar5 + 8;
      } while (iVar2 < *(int *)(param_1 + 0x70) + -2);
    }
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -2;
    FUN_1438ce850(param_1,iVar4 + -1);
    iVar4 = iVar3 + -2;
  }
  FUN_1438ce850(param_1,iVar4);
  return;
}



// FUNCTION 1438ce460 FUN_1438ce460 body=74 status=ok
// SIG undefined FUN_1438ce460(void)

longlong FUN_1438ce460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != param_2)) {
    lVar2 = lVar1;
    lVar3 = *(longlong *)(lVar1 + 0x20);
    while( true ) {
      if (lVar3 == 0) {
        return 0;
      }
      if (*(longlong *)(lVar3 + 0x18) == param_2) break;
      lVar2 = lVar3;
      lVar3 = *(longlong *)(lVar3 + 0x20);
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
    *(longlong *)(lVar3 + 0x20) = lVar1;
    *(longlong *)(param_1 + 0x30) = lVar3;
    return lVar3;
  }
  return lVar1;
}



// FUNCTION 1438ce4b0 FUN_1438ce4b0 body=71 status=ok
// SIG undefined FUN_1438ce4b0(void)

ulonglong FUN_1438ce4b0(longlong *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar10 = (int)param_1[1] - 1;
  if (param_2 == uVar10) {
    *(uint *)(param_1 + 1) = uVar10;
    return (ulonglong)uVar10;
  }
  lVar5 = *param_1;
  puVar6 = *(uint **)(lVar5 + (longlong)(int)uVar10 * 8);
  fVar2 = (float)puVar6[1];
  fVar3 = *(float *)(*(longlong *)(lVar5 + (longlong)(int)param_2 * 8) + 4);
  *(uint **)(lVar5 + (longlong)(int)param_2 * 8) = puVar6;
  *puVar6 = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  if (fVar2 < fVar3) {
    while( true ) {
      uVar10 = (int)(param_2 - 1) >> 1;
      if ((int)uVar10 < 0) {
        return (ulonglong)param_2;
      }
      lVar5 = *param_1;
      lVar12 = (longlong)(int)param_2;
      puVar7 = *(undefined4 **)(lVar5 + lVar12 * 8);
      lVar8 = *(longlong *)(lVar5 + (longlong)(int)uVar10 * 8);
      pfVar1 = (float *)(lVar8 + 4);
      if (*pfVar1 <= (float)puVar7[1] && (float)puVar7[1] != *pfVar1) break;
      *(longlong *)(lVar5 + lVar12 * 8) = lVar8;
      *(undefined4 **)(lVar5 + (longlong)(int)uVar10 * 8) = puVar7;
      puVar9 = *(undefined4 **)(lVar5 + lVar12 * 8);
      uVar4 = *puVar9;
      *puVar9 = *puVar7;
      *puVar7 = uVar4;
      param_2 = uVar10;
    }
    return (ulonglong)param_2;
  }
  uVar11 = FUN_1438cda70();
  return uVar11;
}



// FUNCTION 1438ce500 FUN_1438ce500 body=34 status=ok
// SIG undefined FUN_1438ce500(void)

void FUN_1438ce500(undefined8 param_1)

{
  char cVar1;
  
  FUN_1438cd740();
  do {
    cVar1 = FUN_1438ce610(param_1);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 1438ce530 FUN_1438ce530 body=136 status=ok
// SIG undefined FUN_1438ce530(void)

uint FUN_1438ce530(int *param_1,int *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_1438cdd30(param_2,param_1[2]);
  if ((float)param_1[3] != fVar1) {
    return (uint)((float)param_1[3] < fVar1);
  }
  if ((float)param_1[6] != (float)param_2[6]) {
    return (uint)((float)param_1[6] < (float)param_2[6]);
  }
  if (*(byte *)(param_1 + 1) != *(byte *)(param_2 + 1)) {
    return (uint)(*(byte *)(param_1 + 1) < *(byte *)(param_2 + 1));
  }
  return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
}



// FUNCTION 1438ce5c0 FUN_1438ce5c0 body=65 status=ok
// SIG undefined FUN_1438ce5c0(void)

uint FUN_1438ce5c0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_1[3];
  fVar2 = (float)param_2[3];
  if (fVar1 == fVar2) {
    fVar1 = (float)param_1[6];
    fVar2 = (float)param_2[6];
    if (fVar1 == fVar2) {
      if (*(byte *)(param_1 + 1) != *(byte *)(param_2 + 1)) {
        return (uint)(*(byte *)(param_1 + 1) < *(byte *)(param_2 + 1));
      }
      return CONCAT31((int3)((uint)*param_2 >> 8),*param_1 < *param_2);
    }
  }
  return (uint)(fVar1 < fVar2);
}



// FUNCTION 1438ce610 FUN_1438ce610 body=463 status=ok
// SIG undefined FUN_1438ce610(void)

undefined8 FUN_1438ce610(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  LPVOID pvVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    lVar4 = (longlong)iVar1;
    if (iVar1 == *(int *)(param_1 + 0x48)) {
      if (*(int *)(param_1 + 0x58) == 0) goto LAB_1438ce766;
      lVar5 = **(longlong **)(param_1 + 0x50);
      FUN_1438ce4b0(param_1 + 0x50,0);
      fVar6 = *(float *)(param_1 + 0x60);
      if (*(float *)(param_1 + 0x60) <= *(float *)(lVar5 + 4)) {
        fVar6 = *(float *)(lVar5 + 4);
      }
      *(float *)(param_1 + 0x60) = fVar6;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar5 = **(longlong **)(param_1 + 0x50);
      fVar6 = *(float *)(lVar2 + lVar4 * 8);
      if (fVar6 < *(float *)(lVar5 + 4) || fVar6 == *(float *)(lVar5 + 4)) {
        *(int *)(param_1 + 0x28) = iVar1 + 1;
        fVar6 = *(float *)(lVar2 + lVar4 * 8);
        fVar7 = *(float *)(param_1 + 0x60);
        if (*(float *)(param_1 + 0x60) <= fVar6) {
          fVar7 = fVar6;
        }
        *(float *)(param_1 + 0x60) = fVar7;
        FUN_1438ce080(param_1,*(longlong *)(param_1 + 0x30) +
                              (longlong)*(int *)(lVar2 + 4 + lVar4 * 8) * 0xc);
        return 1;
      }
      FUN_1438ce4b0(param_1 + 0x50,0);
      fVar6 = *(float *)(param_1 + 0x60);
      if (*(float *)(param_1 + 0x60) <= *(float *)(lVar5 + 4)) {
        fVar6 = *(float *)(lVar5 + 4);
      }
      *(float *)(param_1 + 0x60) = fVar6;
    }
    FUN_1438cdfb0(param_1,lVar5);
    pvVar3 = TlsGetValue(DAT_146b7bf70);
    if (pvVar3 == (LPVOID)0x0) {
      pvVar3 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar3 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar3 + 0x58),lVar5,0x28);
    return 1;
  }
LAB_1438ce766:
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    fVar6 = *(float *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8);
    fVar7 = *(float *)(param_1 + 0x60);
    if (*(float *)(param_1 + 0x60) <= fVar6) {
      fVar7 = fVar6;
    }
    *(float *)(param_1 + 0x60) = fVar7;
    FUN_1438ce080(param_1,*(longlong *)(param_1 + 0x30) +
                          (longlong)
                          *(int *)(*(longlong *)(param_1 + 0x40) + 4 + (longlong)iVar1 * 8) * 0xc);
    return 1;
  }
  return 0;
}



// FUNCTION 1438ce7e0 FUN_1438ce7e0 body=104 status=ok
// SIG undefined FUN_1438ce7e0(void)

int FUN_1438ce7e0(longlong *param_1,int param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  
  while( true ) {
    iVar7 = param_2 + -1 >> 1;
    if (iVar7 < 0) {
      return param_2;
    }
    lVar3 = *param_1;
    lVar8 = (longlong)param_2;
    puVar4 = *(undefined4 **)(lVar3 + lVar8 * 8);
    lVar5 = *(longlong *)(lVar3 + (longlong)iVar7 * 8);
    pfVar1 = (float *)(lVar5 + 4);
    if (*pfVar1 <= (float)puVar4[1] && (float)puVar4[1] != *pfVar1) break;
    *(longlong *)(lVar3 + lVar8 * 8) = lVar5;
    *(undefined4 **)(lVar3 + (longlong)iVar7 * 8) = puVar4;
    puVar6 = *(undefined4 **)(lVar3 + lVar8 * 8);
    uVar2 = *puVar6;
    *puVar6 = *puVar4;
    *puVar4 = uVar2;
    param_2 = iVar7;
  }
  return param_2;
}



// FUNCTION 1438ce850 FUN_1438ce850 body=385 status=ok
// SIG undefined FUN_1438ce850(void)

void FUN_1438ce850(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  LPVOID pvVar4;
  undefined4 **ppuVar5;
  float fVar6;
  float fVar7;
  undefined8 local_res18;
  undefined4 *local_res20;
  
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x70) + -2)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 8);
    piVar2 = *(int **)(lVar1 + 0x30);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)(param_2 + 1) * 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
      if (*(longlong *)(piVar2 + 6) == lVar3) {
        return;
      }
      FUN_1438ce4b0(param_1 + 0x50);
      **(undefined4 **)(lVar1 + 0x30) = 0xffffffff;
    }
    piVar2 = *(int **)(lVar1 + 0x28);
    if (((piVar2 != *(int **)(lVar3 + 0x28)) || (*piVar2 != 3)) ||
       ((longlong)piVar2[1] * 0x38 + *(longlong *)(param_1 + 0x18) != lVar1)) {
      local_res18 = (undefined4 *)FUN_1438ce460(lVar1,lVar3);
      if (local_res18 == (undefined4 *)0x0) {
        fVar7 = *(float *)(lVar1 + 0x18) - *(float *)(lVar3 + 0x18);
        if (fVar7 <= 0.0) {
          return;
        }
        fVar7 = ((*(float *)(lVar3 + 0xc) - *(float *)(lVar1 + 0xc)) -
                (*(float *)(lVar3 + 8) - *(float *)(lVar1 + 8)) * *(float *)(lVar3 + 0x18)) / fVar7;
        fVar6 = fVar7 + *(float *)(lVar1 + 8);
        local_res18 = (undefined4 *)
                      CONCAT44(fVar7 * *(float *)(lVar1 + 0x18) + *(float *)(lVar1 + 0xc),fVar6);
        if (*(float *)(lVar1 + 0x10) <= fVar6) {
          return;
        }
        if (*(float *)(lVar3 + 0x10) <= fVar6) {
          return;
        }
        pvVar4 = TlsGetValue(DAT_146b7bf70);
        if (pvVar4 == (LPVOID)0x0) {
          pvVar4 = DAT_146b7bf68;
        }
        local_res20 = (undefined4 *)
                      (**(code **)(**(longlong **)((longlong)pvVar4 + 0x58) + 8))
                                (*(longlong **)((longlong)pvVar4 + 0x58),0x28);
        ppuVar5 = &local_res20;
        *(undefined4 **)(local_res20 + 1) = local_res18;
        *(longlong *)(local_res20 + 4) = lVar1;
        *(longlong *)(local_res20 + 6) = lVar3;
        *local_res20 = 0xffffffff;
        *(undefined8 *)(local_res20 + 8) = *(undefined8 *)(lVar1 + 0x30);
        *(undefined4 **)(lVar1 + 0x30) = local_res20;
      }
      else {
        ppuVar5 = (undefined4 **)&local_res18;
      }
      FUN_1438cd490(param_1 + 0x50,ppuVar5);
    }
  }
  return;
}



// FUNCTION 1438ce9e0 FUN_1438ce9e0 body=14 status=ok
// SIG undefined FUN_1438ce9e0(void)

longlong FUN_1438ce9e0(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x32) = 0;
  return param_1;
}



// FUNCTION 1438ce9f0 FUN_1438ce9f0 body=99 status=ok
// SIG undefined FUN_1438ce9f0(void)

undefined8 * FUN_1438ce9f0(undefined8 *param_1,ulonglong param_2)

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
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1438cea60 FUN_1438cea60 body=168 status=ok
// SIG undefined FUN_1438cea60(void)

void FUN_1438cea60(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float *param_3,
                  float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar1 = param_3[6];
  fVar12 = ABS(param_3[7]);
  if (ABS(param_3[7]) <= ABS(param_3[8])) {
    fVar12 = ABS(param_3[8]);
  }
  fVar9 = fVar12 * (DAT_1467f06f0 - fVar3);
  fVar10 = fVar12 * (fRam00000001467f06f4 - fVar4);
  fVar11 = fVar12 * (fRam00000001467f06f8 - fVar5);
  fVar12 = fVar12 * (fRam00000001467f06fc - fVar6);
  auVar7 = maxps(*param_1,*param_2);
  auVar8 = minps(*param_1,*param_2);
  fVar2 = param_3[5];
  param_4[4] = fVar1 * fVar3 + auVar7._0_4_ + fVar9;
  param_4[5] = fVar1 * fVar4 + auVar7._4_4_ + fVar10;
  param_4[6] = fVar1 * fVar5 + auVar7._8_4_ + fVar11;
  param_4[7] = fVar1 * fVar6 + auVar7._12_4_ + fVar12;
  *param_4 = (fVar2 * fVar3 + auVar8._0_4_) - fVar9;
  param_4[1] = (fVar2 * fVar4 + auVar8._4_4_) - fVar10;
  param_4[2] = (fVar2 * fVar5 + auVar8._8_4_) - fVar11;
  param_4[3] = (fVar2 * fVar6 + auVar8._12_4_) - fVar12;
  return;
}



// FUNCTION 1438ceb10 FUN_1438ceb10 body=180 status=ok
// SIG undefined FUN_1438ceb10(void)

void FUN_1438ceb10(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar10 = param_1[7];
  fVar1 = param_1[6];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar2 = param_1[5];
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar15 = fVar3 * (0.0 - fVar1);
  fVar16 = fVar4 * (0.0 - fVar1);
  fVar17 = fVar5 * (0.0 - fVar1);
  fVar18 = fVar6 * (0.0 - fVar1);
  fVar10 = fVar10 + 0.02;
  fVar11 = *param_2 - fVar15;
  fVar12 = param_2[1] - fVar16;
  fVar13 = param_2[2] - fVar17;
  fVar14 = param_2[3] - fVar18;
  *param_5 = fVar11;
  param_5[1] = fVar12;
  param_5[2] = fVar13;
  param_5[3] = fVar14;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_5 = *param_4 * fVar10 + fVar11;
  param_5[1] = fVar7 * fVar10 + fVar12;
  param_5[2] = fVar8 * fVar10 + fVar13;
  param_5[3] = fVar9 * fVar10 + fVar14;
  fVar15 = *param_3 - fVar15;
  fVar16 = param_3[1] - fVar16;
  fVar17 = param_3[2] - fVar17;
  fVar18 = param_3[3] - fVar18;
  *param_6 = fVar15;
  param_6[1] = fVar16;
  param_6[2] = fVar17;
  param_6[3] = fVar18;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_6 = *param_4 * fVar10 + fVar15;
  param_6[1] = fVar7 * fVar10 + fVar16;
  param_6[2] = fVar8 * fVar10 + fVar17;
  param_6[3] = fVar9 * fVar10 + fVar18;
  *param_7 = (0.0 - ((0.0 - fVar2) - (0.0 - fVar1))) * fVar3;
  param_7[1] = (0.0 - ((0.0 - fVar2) - (0.0 - fVar1))) * fVar4;
  param_7[2] = (0.0 - ((0.0 - fVar2) - (0.0 - fVar1))) * fVar5;
  param_7[3] = (0.0 - ((0.0 - fVar2) - (0.0 - fVar1))) * fVar6;
  return;
}



// FUNCTION 1438cebd0 FUN_1438cebd0 body=161 status=ok
// SIG undefined FUN_1438cebd0(void)

void FUN_1438cebd0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar10 = param_1[7];
  fVar1 = param_1[5];
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar2 = param_1[6];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar10 = fVar10 + 0.02;
  fVar15 = fVar3 * fVar1;
  fVar16 = fVar4 * fVar1;
  fVar17 = fVar5 * fVar1;
  fVar18 = fVar6 * fVar1;
  fVar11 = *param_2 - fVar15;
  fVar12 = param_2[1] - fVar16;
  fVar13 = param_2[2] - fVar17;
  fVar14 = param_2[3] - fVar18;
  *param_5 = fVar11;
  param_5[1] = fVar12;
  param_5[2] = fVar13;
  param_5[3] = fVar14;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_5 = fVar11 - *param_4 * fVar10;
  param_5[1] = fVar12 - fVar7 * fVar10;
  param_5[2] = fVar13 - fVar8 * fVar10;
  param_5[3] = fVar14 - fVar9 * fVar10;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *param_6 = *param_3 - fVar15;
  param_6[1] = fVar7 - fVar16;
  param_6[2] = fVar8 - fVar17;
  param_6[3] = fVar9 - fVar18;
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_5 = *param_5 - *param_4 * fVar10;
  param_5[1] = param_5[1] - fVar7 * fVar10;
  param_5[2] = param_5[2] - fVar8 * fVar10;
  param_5[3] = param_5[3] - fVar9 * fVar10;
  *param_7 = (0.0 - (fVar2 - fVar1)) * fVar3;
  param_7[1] = (0.0 - (fVar2 - fVar1)) * fVar4;
  param_7[2] = (0.0 - (fVar2 - fVar1)) * fVar5;
  param_7[3] = (0.0 - (fVar2 - fVar1)) * fVar6;
  return;
}



// FUNCTION 1438cec80 FUN_1438cec80 body=242 status=ok
// SIG undefined FUN_1438cec80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1438cec80(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar12 = param_3[2];
  fVar1 = *param_4 * fVar13;
  fVar4 = param_4[1] * fVar14;
  fVar5 = param_4[2] * fVar15;
  fVar7 = fVar10 * fVar13;
  fVar8 = fVar11 * fVar14;
  fVar9 = fVar12 * fVar15;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar19 = fVar4 + fVar1 + fVar5;
  fVar20 = fVar4 + fVar1 + fVar5;
  fVar21 = fVar4 + fVar1 + fVar5;
  fVar5 = fVar4 + fVar1 + fVar5;
  fVar1 = fVar10 * *param_4;
  fVar4 = fVar11 * param_4[1];
  fVar6 = fVar12 * param_4[2];
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar12 = fVar12 * fVar12;
  fVar16 = fVar4 + fVar1 + fVar6;
  fVar17 = fVar4 + fVar1 + fVar6;
  fVar18 = fVar4 + fVar1 + fVar6;
  fVar6 = fVar4 + fVar1 + fVar6;
  auVar2._0_4_ = (fVar11 + fVar10 + fVar12) - fVar16 * fVar16;
  auVar2._4_4_ = (fVar11 + fVar10 + fVar12) - fVar17 * fVar17;
  auVar2._8_4_ = (fVar11 + fVar10 + fVar12) - fVar18 * fVar18;
  auVar2._12_4_ = (fVar11 + fVar10 + fVar12) - fVar6 * fVar6;
  fVar10 = ((fVar14 + fVar13 + fVar15) - fVar19 * fVar19) * auVar2._0_4_;
  fVar11 = ((fVar14 + fVar13 + fVar15) - fVar20 * fVar20) * auVar2._4_4_;
  fVar12 = ((fVar14 + fVar13 + fVar15) - fVar21 * fVar21) * auVar2._8_4_;
  fVar13 = ((fVar14 + fVar13 + fVar15) - fVar5 * fVar5) * auVar2._12_4_;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar10;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = fVar13;
  auVar3 = sqrtps(auVar2,auVar3);
  auVar3 = divps(_DAT_1467f06f0,auVar3);
  *param_1 = ((fVar8 + fVar7 + fVar9) - fVar16 * fVar19) *
             (float)(~-(uint)(fVar10 <= 0.0) & auVar3._0_4_);
  param_1[1] = ((fVar8 + fVar7 + fVar9) - fVar17 * fVar20) *
               (float)(~-(uint)(fVar11 <= 0.0) & auVar3._4_4_);
  param_1[2] = ((fVar8 + fVar7 + fVar9) - fVar18 * fVar21) *
               (float)(~-(uint)(fVar12 <= 0.0) & auVar3._8_4_);
  param_1[3] = ((fVar8 + fVar7 + fVar9) - fVar6 * fVar5) *
               (float)(~-(uint)(fVar13 <= 0.0) & auVar3._12_4_);
  return param_1;
}



// FUNCTION 1438ced80 FUN_1438ced80 body=385 status=ok
// SIG undefined FUN_1438ced80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1438ced80(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  undefined1 in_XMM5 [16];
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
  
  fVar25 = (float)(~-(uint)(*param_5 != 0.0) & (uint)(*param_2 - *param_1));
  fVar26 = (float)(~-(uint)(param_5[1] != 0.0) & (uint)(param_2[1] - param_1[1]));
  fVar27 = (float)(~-(uint)(param_5[2] != 0.0) & (uint)(param_2[2] - param_1[2]));
  fVar22 = (float)(~-(uint)(*param_5 != 0.0) & (uint)(*param_4 - *param_3));
  fVar23 = (float)(~-(uint)(param_5[1] != 0.0) & (uint)(param_4[1] - param_3[1]));
  fVar24 = (float)(~-(uint)(param_5[2] != 0.0) & (uint)(param_4[2] - param_3[2]));
  fVar5 = fVar22 * fVar22;
  fVar6 = fVar23 * fVar23;
  fVar7 = fVar24 * fVar24;
  fVar16 = fVar6 + fVar5 + fVar7;
  fVar17 = fVar6 + fVar5 + fVar7;
  fVar18 = fVar6 + fVar5 + fVar7;
  fVar7 = fVar6 + fVar5 + fVar7;
  fVar5 = fVar25 * fVar25;
  fVar6 = fVar26 * fVar26;
  fVar8 = fVar27 * fVar27;
  auVar10._4_4_ = fVar17;
  auVar10._0_4_ = fVar16;
  auVar10._8_4_ = fVar18;
  auVar10._12_4_ = fVar7;
  auVar10 = rsqrtps(in_XMM3,auVar10);
  fVar9 = auVar10._0_4_;
  fVar11 = auVar10._4_4_;
  fVar12 = auVar10._8_4_;
  fVar13 = auVar10._12_4_;
  fVar19 = fVar6 + fVar5 + fVar8;
  fVar20 = fVar6 + fVar5 + fVar8;
  fVar21 = fVar6 + fVar5 + fVar8;
  fVar8 = fVar6 + fVar5 + fVar8;
  auVar1._4_4_ = fVar20;
  auVar1._0_4_ = fVar19;
  auVar1._8_4_ = fVar21;
  auVar1._12_4_ = fVar8;
  auVar10 = rsqrtps(in_XMM5,auVar1);
  fVar5 = auVar10._0_4_;
  fVar6 = auVar10._4_4_;
  fVar14 = auVar10._8_4_;
  fVar15 = auVar10._12_4_;
  fVar5 = (float)(~-(uint)(fVar16 <= 0.0) &
                 (uint)((3.0 - fVar16 * fVar9 * fVar9) * fVar9 * 0.5 * fVar16)) *
          (float)(~-(uint)(fVar19 <= 0.0) &
                 (uint)((3.0 - fVar19 * fVar5 * fVar5) * fVar5 * 0.5 * fVar19));
  if (_DAT_1467f08f0 <= fVar5) {
    fVar22 = fVar22 * fVar25;
    auVar4._4_4_ = fVar22;
    auVar4._0_4_ = fVar22;
    auVar4._8_4_ = fVar22;
    auVar4._12_4_ = fVar22;
    auVar2._4_4_ = (float)(~-(uint)(fVar17 <= 0.0) &
                          (uint)((3.0 - fVar17 * fVar11 * fVar11) * fVar11 * 0.5 * fVar17)) *
                   (float)(~-(uint)(fVar20 <= 0.0) &
                          (uint)((3.0 - fVar20 * fVar6 * fVar6) * fVar6 * 0.5 * fVar20));
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = (float)(~-(uint)(fVar18 <= 0.0) &
                          (uint)((3.0 - fVar18 * fVar12 * fVar12) * fVar12 * 0.5 * fVar18)) *
                   (float)(~-(uint)(fVar21 <= 0.0) &
                          (uint)((3.0 - fVar21 * fVar14 * fVar14) * fVar14 * 0.5 * fVar21));
    auVar2._12_4_ =
         (float)(~-(uint)(fVar7 <= 0.0) &
                (uint)((3.0 - fVar7 * fVar13 * fVar13) * fVar13 * 0.5 * fVar7)) *
         (float)(~-(uint)(fVar8 <= 0.0) &
                (uint)((3.0 - fVar8 * fVar15 * fVar15) * fVar15 * 0.5 * fVar8));
    auVar10 = rcpps(auVar4,auVar2);
    bVar3 = param_6 < (2.0 - fVar5 * auVar10._0_4_) * auVar10._0_4_ *
                      (fVar23 * fVar26 + fVar22 + fVar24 * fVar27);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 1438cef10 FUN_1438cef10 body=68 status=ok
// SIG undefined FUN_1438cef10(void)

bool FUN_1438cef10(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(~-(uint)(*param_3 != 0.0) & (uint)(*param_2 - *param_1));
  fVar2 = (float)(~-(uint)(param_3[1] != 0.0) & (uint)(param_2[1] - param_1[1]));
  fVar3 = (float)(~-(uint)(param_3[2] != 0.0) & (uint)(param_2[2] - param_1[2]));
  return param_4 * param_4 <= fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
}



// FUNCTION 1438cef60 FUN_1438cef60 body=846 status=ok
// SIG undefined FUN_1438cef60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1438cef60(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar28;
  uint uVar29;
  uint uVar33;
  uint uVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar46;
  float fVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar38 = *param_5;
  fVar36 = param_5[1];
  fVar40 = param_5[2];
  fVar5 = param_4[3];
  auVar52._0_12_ = ZEXT812(0);
  auVar52._12_4_ = 0;
  fVar6 = param_2[3];
  fVar48 = *param_4 - *param_2;
  fVar49 = param_4[1] - param_2[1];
  fVar50 = param_4[2] - param_2[2];
  fVar56 = *param_4 - fVar1;
  fVar57 = param_4[1] - fVar2;
  fVar58 = param_4[2] - fVar3;
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[2];
  fVar10 = param_1[3];
  fVar53 = *param_2 - fVar7;
  fVar54 = param_2[1] - fVar8;
  fVar55 = param_2[2] - fVar9;
  fVar19 = (fVar1 - fVar7) * fVar38;
  fVar24 = (fVar2 - fVar8) * fVar36;
  fVar26 = (fVar3 - fVar9) * fVar40;
  fVar41 = fVar54 * fVar38 - fVar36 * fVar53;
  fVar46 = fVar55 * fVar36 - fVar40 * fVar54;
  fVar47 = fVar53 * fVar40 - fVar38 * fVar55;
  fVar51 = fVar24 + fVar19 + fVar26;
  fVar20 = fVar48 * fVar38;
  fVar25 = fVar49 * fVar36;
  fVar27 = fVar50 * fVar40;
  fVar28 = fVar25 + fVar20 + fVar27;
  fVar37 = (fVar1 - fVar7) - fVar51 * fVar38;
  fVar39 = (fVar2 - fVar8) - (fVar24 + fVar19 + fVar26) * fVar36;
  fVar19 = (fVar3 - fVar9) - (fVar24 + fVar19 + fVar26) * fVar40;
  auVar30._0_4_ = fVar28 * fVar38;
  auVar30._4_4_ = (fVar25 + fVar20 + fVar27) * fVar36;
  auVar30._8_4_ = (fVar25 + fVar20 + fVar27) * fVar40;
  auVar30._12_4_ = (fVar25 + fVar20 + fVar27) * param_5[3];
  fVar28 = fVar28 - fVar51;
  fVar38 = fVar37 * fVar37;
  fVar40 = fVar39 * fVar39;
  fVar20 = fVar19 * fVar19;
  fVar48 = fVar48 - auVar30._0_4_;
  fVar49 = fVar49 - auVar30._4_4_;
  fVar50 = fVar50 - auVar30._8_4_;
  fVar36 = fVar40 + fVar38 + fVar20;
  auVar31._4_4_ = fVar40 + fVar38 + fVar20;
  auVar31._0_4_ = fVar36;
  auVar31._8_4_ = fVar40 + fVar38 + fVar20;
  auVar31._12_4_ = fVar40 + fVar38 + fVar20;
  auVar31 = rsqrtps(auVar30,auVar31);
  fVar38 = auVar31._0_4_;
  auVar21._8_4_ = fVar50 * fVar41;
  fVar36 = (float)(~-(uint)(fVar36 <= 0.0) &
                   (uint)((3.0 - fVar36 * fVar38 * fVar38) * fVar38 * 0.5 * fVar36) ^
                  (uint)(fVar39 * fVar47 + fVar37 * fVar46 + fVar19 * fVar41) & 0x80000000);
  fVar38 = fVar48 * fVar48;
  fVar40 = fVar49 * fVar49;
  fVar50 = fVar50 * fVar50;
  auVar21._4_4_ = auVar21._8_4_;
  auVar21._0_4_ = auVar21._8_4_;
  auVar21._12_4_ = auVar21._8_4_;
  auVar32._0_4_ = fVar40 + fVar38 + fVar50;
  auVar32._4_4_ = fVar40 + fVar38 + fVar50;
  auVar32._8_4_ = fVar40 + fVar38 + fVar50;
  auVar32._12_4_ = fVar40 + fVar38 + fVar50;
  auVar31 = rsqrtps(auVar21,auVar32);
  fVar38 = auVar31._0_4_;
  auVar42._0_4_ =
       (float)(~-(uint)(auVar32._0_4_ <= 0.0) &
               (uint)((3.0 - auVar32._0_4_ * fVar38 * fVar38) * fVar38 * 0.5 * auVar32._0_4_) ^
              (uint)(fVar49 * fVar47 + fVar48 * fVar46 + auVar21._8_4_) & 0x80000000) - fVar36;
  auVar42._4_4_ = auVar42._0_4_;
  auVar42._12_4_ = fVar28;
  auVar42._8_4_ = fVar28;
  auVar44._4_4_ = param_5[7] - fVar36;
  auVar44._0_4_ = param_5[8] - fVar36;
  auVar44._8_4_ = param_5[6] - fVar51;
  auVar44._12_4_ = param_5[5] - fVar51;
  auVar31 = divps(auVar44,auVar42);
  uVar11 = -(uint)(0.0 < param_5[8] - fVar36);
  uVar12 = -(uint)(0.0 < param_5[7] - fVar36);
  uVar13 = -(uint)(0.0 < param_5[6] - fVar51);
  uVar14 = -(uint)(0.0 < param_5[5] - fVar51);
  uVar29 = ~-(uint)(auVar42._0_4_ == 0.0) & auVar31._0_4_;
  uVar33 = ~-(uint)(auVar42._0_4_ == 0.0) & auVar31._4_4_;
  uVar34 = ~-(uint)(fVar28 == 0.0) & auVar31._8_4_;
  uVar35 = ~-(uint)(fVar28 == 0.0) & auVar31._12_4_;
  auVar43._0_4_ =
       ~-(uint)(ABS(auVar42._0_4_) <= _DAT_1467f08f0) &
       (uVar33 & -(uint)(auVar42._0_4_ < 0.0) | ~-(uint)(auVar42._0_4_ < 0.0) & uVar29) |
       (uVar11 & (uint)DAT_1467f06f0 | ~uVar11 & _DAT_1467f06e0) &
       -(uint)(ABS(auVar42._0_4_) <= _DAT_1467f08f0);
  uVar11 = ~-(uint)(ABS(auVar42._0_4_) <= fRam00000001467f08f4) &
           (uVar29 & -(uint)(auVar42._0_4_ < 0.0) | ~-(uint)(auVar42._0_4_ < 0.0) & uVar33) |
           (uVar12 & (uint)fRam00000001467f06f4 | ~uVar12 & uRam00000001467f06e4) &
           -(uint)(ABS(auVar42._0_4_) <= fRam00000001467f08f4);
  uVar12 = ~-(uint)(ABS(fVar28) <= fRam00000001467f08f8) &
           (uVar35 & -(uint)(fVar28 < 0.0) | ~-(uint)(fVar28 < 0.0) & uVar34) |
           (uVar13 & (uint)fRam00000001467f06f8 | ~uVar13 & uRam00000001467f06e8) &
           -(uint)(ABS(fVar28) <= fRam00000001467f08f8);
  uVar13 = ~-(uint)(ABS(fVar28) <= fRam00000001467f08fc) &
           (uVar34 & -(uint)(fVar28 < 0.0) | ~-(uint)(fVar28 < 0.0) & uVar35) |
           (uVar14 & (uint)fRam00000001467f06fc | ~uVar14 & DAT_1467f06ec) &
           -(uint)(ABS(fVar28) <= fRam00000001467f08fc);
  auVar15._4_4_ = uVar13;
  auVar15._0_4_ = uVar13;
  auVar15._8_4_ = uVar13;
  auVar15._12_4_ = uVar13;
  auVar22._4_4_ = uVar11;
  auVar22._0_4_ = uVar11;
  auVar22._8_4_ = uVar11;
  auVar22._12_4_ = uVar11;
  auVar31 = maxps(auVar22,auVar15);
  auVar16._4_4_ = uVar12;
  auVar16._0_4_ = uVar12;
  auVar16._8_4_ = uVar12;
  auVar16._12_4_ = uVar12;
  auVar43._4_4_ = auVar43._0_4_;
  auVar43._8_4_ = auVar43._0_4_;
  auVar43._12_4_ = auVar43._0_4_;
  auVar44 = minps(auVar43,auVar16);
  uVar11 = -(uint)(auVar31._0_4_ < DAT_1467f06f0);
  uVar12 = -(uint)(auVar31._4_4_ < fRam00000001467f06f4);
  uVar13 = -(uint)(auVar31._8_4_ < fRam00000001467f06f8);
  uVar14 = -(uint)(auVar31._12_4_ < fRam00000001467f06fc);
  auVar23._0_4_ = (uint)auVar31._0_4_ & uVar11;
  auVar23._4_4_ = (uint)auVar31._4_4_ & uVar12;
  auVar23._8_4_ = (uint)auVar31._8_4_ & uVar13;
  auVar23._12_4_ = (uint)auVar31._12_4_ & uVar14;
  auVar17._0_4_ = ~uVar11 & (uint)DAT_1467f06f0;
  auVar17._4_4_ = ~uVar12 & (uint)fRam00000001467f06f4;
  auVar17._8_4_ = ~uVar13 & (uint)fRam00000001467f06f8;
  auVar17._12_4_ = ~uVar14 & (uint)fRam00000001467f06fc;
  auVar31 = maxps(ZEXT816(0),auVar23 | auVar17);
  uVar11 = -(uint)(auVar44._0_4_ < DAT_1467f06f0);
  uVar12 = -(uint)(auVar44._4_4_ < fRam00000001467f06f4);
  uVar13 = -(uint)(auVar44._8_4_ < fRam00000001467f06f8);
  uVar14 = -(uint)(auVar44._12_4_ < fRam00000001467f06fc);
  auVar45._0_4_ = (uint)auVar44._0_4_ & uVar11;
  auVar45._4_4_ = (uint)auVar44._4_4_ & uVar12;
  auVar45._8_4_ = (uint)auVar44._8_4_ & uVar13;
  auVar45._12_4_ = (uint)auVar44._12_4_ & uVar14;
  auVar18._0_4_ = ~uVar11 & (uint)DAT_1467f06f0;
  auVar18._4_4_ = ~uVar12 & (uint)fRam00000001467f06f4;
  auVar18._8_4_ = ~uVar13 & (uint)fRam00000001467f06f8;
  auVar18._12_4_ = ~uVar14 & (uint)fRam00000001467f06fc;
  fVar38 = auVar31._0_4_;
  auVar44 = maxps(auVar52,auVar45 | auVar18);
  fVar36 = auVar44._0_4_;
  *param_1 = fVar38 * fVar53 + fVar7;
  param_1[1] = auVar31._4_4_ * fVar54 + fVar8;
  param_1[2] = auVar31._8_4_ * fVar55 + fVar9;
  param_1[3] = auVar31._12_4_ * (fVar6 - fVar10) + fVar10;
  *param_2 = fVar36 * fVar53 + fVar7;
  param_2[1] = auVar44._4_4_ * fVar54 + fVar8;
  param_2[2] = auVar44._8_4_ * fVar55 + fVar9;
  param_2[3] = auVar44._12_4_ * (fVar6 - fVar10) + fVar10;
  *param_3 = fVar38 * fVar56 + fVar1;
  param_3[1] = auVar31._4_4_ * fVar57 + fVar2;
  param_3[2] = auVar31._8_4_ * fVar58 + fVar3;
  param_3[3] = auVar31._12_4_ * (fVar5 - fVar4) + fVar4;
  *param_4 = fVar36 * fVar56 + fVar1;
  param_4[1] = auVar44._4_4_ * fVar57 + fVar2;
  param_4[2] = auVar44._8_4_ * fVar58 + fVar3;
  param_4[3] = auVar44._12_4_ * (fVar5 - fVar4) + fVar4;
  return fVar38 < fVar36;
}



// FUNCTION 1438cf2b0 FUN_1438cf2b0 body=439 status=ok
// SIG undefined FUN_1438cf2b0(void)

undefined4
FUN_1438cf2b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
             float *param_5,float *param_6,float *param_7,undefined8 *param_8,undefined8 *param_9)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  fVar3 = param_5[4];
  iVar1 = FUN_1438cef10(&local_48,&local_58,param_5,fVar3);
  if ((((iVar1 != 0) && (iVar1 = FUN_1438cef10(&local_38,&local_28,param_5,fVar3), iVar1 != 0)) &&
      (iVar1 = FUN_1438ced80(&local_48,&local_58,&local_38,&local_28,param_5,param_5[9]), iVar1 != 0
      )) && ((iVar1 = FUN_1438d0080(&local_48,&local_58,&local_38,&local_28,param_5,param_5[9]),
             iVar1 != 0 &&
             (iVar1 = FUN_1438d05c0(&local_48,&local_58,&local_38,&local_28,param_5,param_5[0xb]),
             iVar1 != 0)))) {
    uVar2 = FUN_1438cef60(&local_48,&local_58,&local_38,&local_28,param_5);
    fVar3 = *param_5 * ((float)local_58 - (float)local_48);
    fVar4 = param_5[1] * (local_58._4_4_ - local_48._4_4_);
    fVar5 = param_5[2] * ((float)uStack_50 - (float)uStack_40);
    fVar6 = ((float)local_58 - (float)local_48) - (fVar4 + fVar3 + fVar5) * *param_5;
    fVar7 = (local_58._4_4_ - local_48._4_4_) - (fVar4 + fVar3 + fVar5) * param_5[1];
    fVar3 = ((float)uStack_50 - (float)uStack_40) - (fVar4 + fVar3 + fVar5) * param_5[2];
    if (param_5[4] * param_5[4] <= fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3) {
      *param_6 = (float)local_48;
      param_6[1] = local_48._4_4_;
      param_6[2] = (float)uStack_40;
      param_6[3] = uStack_40._4_4_;
      *param_7 = (float)local_58;
      param_7[1] = local_58._4_4_;
      param_7[2] = (float)uStack_50;
      param_7[3] = uStack_50._4_4_;
      *param_8 = local_38;
      param_8[1] = uStack_30;
      *param_9 = CONCAT44(uStack_24,local_28);
      param_9[1] = CONCAT44(uStack_1c,uStack_20);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1438cf470 FUN_1438cf470 body=93 status=ok
// SIG undefined FUN_1438cf470(void)

void FUN_1438cf470(undefined8 param_1,longlong param_2,longlong param_3)

{
  *(undefined4 *)(param_3 + 8) = 0;
  FUN_1438cf4d0();
  if (*(char *)(param_2 + 0x31) != '\0') {
    FUN_1438cfbd0(param_1,param_2,param_3);
  }
  if (*(char *)(param_2 + 0x32) != '\0') {
    FUN_1438cf720(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 1438cf4d0 FUN_1438cf4d0 body=580 status=ok
// SIG undefined FUN_1438cf4d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1438cf4d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int *piVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined **local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [32];
  
  local_98 = *(longlong *)(param_1 + 0x28);
  local_a8 = hkaiPairedEdgeFinder::PairedEdgeQuery::vftable;
  local_90 = *(longlong *)(param_1 + 0x30) + 0x18;
  local_78 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) + 0x178) ==
             *(int *)(*(longlong *)(local_98 + 0x18) + 0x178);
  lVar16 = 0;
  lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20);
  local_88 = param_2;
  local_80 = param_3;
  if (0 < lVar17) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
      lVar7 = *(longlong *)(lVar5 + 0x18);
      uVar1 = *(undefined4 *)(lVar6 + 4 + lVar16 * 8);
      uVar2 = *(undefined4 *)(lVar6 + lVar16 * 8);
      piVar14 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x30),
                                     lVar7 + 0xc0,lVar7 + 0xe0,lVar7 + 0x70,uVar1);
      iVar3 = *(int *)(lVar7 + 0x40);
      iVar4 = *piVar14;
      if (iVar4 < iVar3) {
        pfVar15 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar7 + 0x38));
      }
      else {
        pfVar15 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar7 + 0xf0));
      }
      iVar4 = piVar14[1];
      fVar8 = *pfVar15;
      fVar9 = pfVar15[1];
      fVar10 = pfVar15[2];
      if (iVar4 < iVar3) {
        pfVar15 = (float *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar7 + 0x38));
      }
      else {
        pfVar15 = (float *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar7 + 0xf0));
      }
      fVar11 = *pfVar15;
      fVar12 = pfVar15[1];
      fVar13 = pfVar15[2];
      local_c8 = fVar9 * *(float *)(lVar5 + 0x50) + fVar8 * *(float *)(lVar5 + 0x40) +
                 fVar10 * *(float *)(lVar5 + 0x60) + *(float *)(lVar5 + 0x70);
      fStack_c4 = fVar9 * *(float *)(lVar5 + 0x54) + fVar8 * *(float *)(lVar5 + 0x44) +
                  fVar10 * *(float *)(lVar5 + 100) + *(float *)(lVar5 + 0x74);
      fStack_c0 = fVar9 * *(float *)(lVar5 + 0x58) + fVar8 * *(float *)(lVar5 + 0x48) +
                  fVar10 * *(float *)(lVar5 + 0x68) + *(float *)(lVar5 + 0x78);
      fStack_bc = fVar9 * *(float *)(lVar5 + 0x5c) + fVar8 * *(float *)(lVar5 + 0x4c) +
                  fVar10 * *(float *)(lVar5 + 0x6c) + *(float *)(lVar5 + 0x7c);
      local_b8 = fVar12 * *(float *)(lVar5 + 0x50) + fVar11 * *(float *)(lVar5 + 0x40) +
                 fVar13 * *(float *)(lVar5 + 0x60) + *(float *)(lVar5 + 0x70);
      fStack_b4 = fVar12 * *(float *)(lVar5 + 0x54) + fVar11 * *(float *)(lVar5 + 0x44) +
                  fVar13 * *(float *)(lVar5 + 100) + *(float *)(lVar5 + 0x74);
      fStack_b0 = fVar12 * *(float *)(lVar5 + 0x58) + fVar11 * *(float *)(lVar5 + 0x48) +
                  fVar13 * *(float *)(lVar5 + 0x68) + *(float *)(lVar5 + 0x78);
      fStack_ac = fVar12 * *(float *)(lVar5 + 0x5c) + fVar11 * *(float *)(lVar5 + 0x4c) +
                  fVar13 * *(float *)(lVar5 + 0x6c) + *(float *)(lVar5 + 0x7c);
      local_a0 = uVar2;
      local_9c = uVar1;
      local_68 = local_b8;
      fStack_64 = fStack_b4;
      fStack_60 = fStack_b0;
      fStack_5c = fStack_ac;
      local_58 = local_c8;
      fStack_54 = fStack_c4;
      fStack_50 = fStack_c0;
      fStack_4c = fStack_bc;
      if (_DAT_1467f08f0 <
          (fStack_b4 - fStack_c4) * (fStack_b4 - fStack_c4) +
          (local_b8 - local_c8) * (local_b8 - local_c8) +
          (fStack_b0 - fStack_c0) * (fStack_b0 - fStack_c0)) {
        FUN_1438cea60(&local_b8,&local_c8,param_2,local_48);
        hkcdDynamicAabbTree::getClosestPoint
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28),local_48,&local_a8);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar17);
  }
  return;
}



// FUNCTION 1438cf720 FUN_1438cf720 body=1197 status=ok
// SIG undefined FUN_1438cf720(void)

void FUN_1438cf720(longlong param_1,float *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 uVar14;
  float *pfVar15;
  undefined8 *puVar16;
  int iVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_res20;
  undefined8 local_1c8;
  int local_1c0;
  uint local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  uint local_1a4;
  longlong local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
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
  undefined8 local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [96];
  
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  FUN_143e0e320(local_98,*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30));
  FUN_1437f62c0(&local_1c8);
  FUN_1437f62c0(&local_1b0);
  local_res20 = 0;
  local_198 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 0x20);
  if (0 < local_198) {
    do {
      lVar13 = *(longlong *)(param_1 + 0x18);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
      lVar6 = *(longlong *)(lVar13 + 0x18);
      uVar1 = *(undefined4 *)(lVar5 + 4 + local_res20 * 8);
      uVar2 = *(undefined4 *)(lVar5 + local_res20 * 8);
      piVar12 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                                     lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,uVar1);
      iVar3 = *(int *)(lVar6 + 0x40);
      iVar17 = *piVar12;
      if (iVar17 < iVar3) {
        pfVar15 = (float *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar15 = (float *)((longlong)(iVar17 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      iVar17 = piVar12[1];
      fVar18 = *pfVar15;
      fVar21 = pfVar15[1];
      fVar22 = pfVar15[2];
      if (iVar17 < iVar3) {
        pfVar15 = (float *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar15 = (float *)((longlong)(iVar17 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      fVar23 = *pfVar15;
      fVar24 = pfVar15[1];
      fVar25 = pfVar15[2];
      local_138 = fVar21 * *(float *)(lVar13 + 0x50) + fVar18 * *(float *)(lVar13 + 0x40) +
                  fVar22 * *(float *)(lVar13 + 0x60) + *(float *)(lVar13 + 0x70);
      fStack_134 = fVar21 * *(float *)(lVar13 + 0x54) + fVar18 * *(float *)(lVar13 + 0x44) +
                   fVar22 * *(float *)(lVar13 + 100) + *(float *)(lVar13 + 0x74);
      fStack_130 = fVar21 * *(float *)(lVar13 + 0x58) + fVar18 * *(float *)(lVar13 + 0x48) +
                   fVar22 * *(float *)(lVar13 + 0x68) + *(float *)(lVar13 + 0x78);
      fStack_12c = fVar21 * *(float *)(lVar13 + 0x5c) + fVar18 * *(float *)(lVar13 + 0x4c) +
                   fVar22 * *(float *)(lVar13 + 0x6c) + *(float *)(lVar13 + 0x7c);
      local_158 = fVar24 * *(float *)(lVar13 + 0x50) + fVar23 * *(float *)(lVar13 + 0x40) +
                  fVar25 * *(float *)(lVar13 + 0x60) + *(float *)(lVar13 + 0x70);
      fStack_154 = fVar24 * *(float *)(lVar13 + 0x54) + fVar23 * *(float *)(lVar13 + 0x44) +
                   fVar25 * *(float *)(lVar13 + 100) + *(float *)(lVar13 + 0x74);
      fStack_150 = fVar24 * *(float *)(lVar13 + 0x58) + fVar23 * *(float *)(lVar13 + 0x48) +
                   fVar25 * *(float *)(lVar13 + 0x68) + *(float *)(lVar13 + 0x78);
      fStack_14c = fVar24 * *(float *)(lVar13 + 0x5c) + fVar23 * *(float *)(lVar13 + 0x4c) +
                   fVar25 * *(float *)(lVar13 + 0x6c) + *(float *)(lVar13 + 0x7c);
      local_168 = local_138 - local_158;
      fStack_164 = fStack_134 - fStack_154;
      fStack_160 = fStack_130 - fStack_150;
      fStack_15c = fStack_12c - fStack_14c;
      fStack_140 = fStack_164 * fVar7 - local_168 * fVar8;
      local_148 = fStack_160 * fVar8 - fStack_164 * fVar9;
      fStack_144 = local_168 * fVar9 - fStack_160 * fVar7;
      fVar18 = local_148 * local_148;
      fVar21 = fStack_144 * fStack_144;
      auVar19._8_4_ = fStack_140 * fStack_140;
      auVar19._4_4_ = auVar19._8_4_;
      auVar19._0_4_ = auVar19._8_4_;
      auVar19._12_4_ = auVar19._8_4_;
      fVar24 = fVar21 + fVar18 + auVar19._8_4_;
      fVar25 = fVar21 + fVar18 + auVar19._8_4_;
      fVar26 = fVar21 + fVar18 + auVar19._8_4_;
      fVar27 = fVar21 + fVar18 + auVar19._8_4_;
      auVar20._4_4_ = fVar25;
      auVar20._0_4_ = fVar24;
      auVar20._8_4_ = fVar26;
      auVar20._12_4_ = fVar27;
      auVar20 = rsqrtps(auVar19,auVar20);
      fVar18 = auVar20._0_4_;
      fVar21 = auVar20._4_4_;
      fVar22 = auVar20._8_4_;
      fVar23 = auVar20._12_4_;
      local_148 = local_148 *
                  (float)(~-(uint)(fVar24 <= 0.0) &
                         (uint)((3.0 - fVar24 * fVar18 * fVar18) * fVar18 * 0.5));
      fStack_144 = fStack_144 *
                   (float)(~-(uint)(fVar25 <= 0.0) &
                          (uint)((3.0 - fVar25 * fVar21 * fVar21) * fVar21 * 0.5));
      fStack_140 = fStack_140 *
                   (float)(~-(uint)(fVar26 <= 0.0) &
                          (uint)((3.0 - fVar26 * fVar22 * fVar22) * fVar22 * 0.5));
      fStack_13c = (fStack_15c * fVar10 - fStack_15c * fVar10) *
                   (float)(~-(uint)(fVar27 <= 0.0) &
                          (uint)((3.0 - fVar27 * fVar23 * fVar23) * fVar23 * 0.5));
      FUN_1438ceb10(param_2,&local_158,&local_138,&local_148,local_178,local_128,local_188);
      CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_1c8);
      FUN_143e0e530(local_98,local_178,local_128,local_188,&local_1c8);
      iVar3 = local_1c0;
      iVar17 = 0;
      if (0 < local_1c0) {
        do {
          lVar13 = FUN_1437f7500(&local_1c8,iVar17);
          uVar4 = *(undefined4 *)(lVar13 + 0x10);
          FUN_1437f7570(lVar13,local_178,&local_168,local_188,local_108,local_118);
          FUN_1437f7570(lVar13,&local_158,&local_168,&DAT_1467f06e0,local_e8,local_f8);
          iVar11 = FUN_1438cf2b0(local_e8,local_f8,local_108,local_118,param_2,&local_d8,&local_c8,
                                 &local_b8,&local_a8);
          if (iVar11 != 0) {
            if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,param_3,0x50);
            }
            puVar16 = (undefined8 *)((longlong)(int)param_3[1] * 0x50 + *param_3);
            *(int *)(param_3 + 1) = (int)param_3[1] + 1;
            *(undefined4 *)(puVar16 + 8) = uVar2;
            *(undefined4 *)((longlong)puVar16 + 0x44) = uVar1;
            *(undefined4 *)(puVar16 + 9) = uVar4;
            *(undefined4 *)((longlong)puVar16 + 0x4c) = 0xffffffff;
            puVar16[2] = local_d8;
            puVar16[3] = uStack_d0;
            *puVar16 = local_c8;
            puVar16[1] = uStack_c0;
            *(undefined4 *)(puVar16 + 6) = local_b8;
            *(undefined4 *)((longlong)puVar16 + 0x34) = uStack_b4;
            *(undefined4 *)(puVar16 + 7) = uStack_b0;
            *(undefined4 *)((longlong)puVar16 + 0x3c) = uStack_ac;
            *(undefined4 *)(puVar16 + 4) = local_a8;
            *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_a4;
            *(undefined4 *)(puVar16 + 5) = uStack_a0;
            *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_9c;
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar3);
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 < local_198);
  }
  uVar14 = FUN_143703a50();
  local_1a8 = 0;
  if (-1 < (int)local_1a4) {
    FUN_143702e10(uVar14,local_1b0,0x14,local_1a4 & 0x3fffffff);
  }
  local_1b0 = 0;
  local_1a4 = 0x80000000;
  uVar14 = FUN_143703a50();
  local_1c0 = 0;
  if (-1 < (int)local_1bc) {
    FUN_143702e10(uVar14,local_1c8,0x14,local_1bc & 0x3fffffff);
  }
  local_1c8 = 0;
  local_1bc = 0x80000000;
  FUN_143e0e3f0(local_98);
  return;
}



// FUNCTION 1438cfbd0 FUN_1438cfbd0 body=1197 status=ok
// SIG undefined FUN_1438cfbd0(void)

void FUN_1438cfbd0(longlong param_1,float *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 uVar14;
  float *pfVar15;
  undefined8 *puVar16;
  int iVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong local_res20;
  undefined8 local_1c8;
  int local_1c0;
  uint local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  uint local_1a4;
  longlong local_198;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  float local_168;
  float fStack_164;
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
  undefined8 local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [96];
  
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  FUN_143e0e320(local_98,*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x30));
  FUN_1437f62c0(&local_1c8);
  FUN_1437f62c0(&local_1b0);
  local_res20 = 0;
  local_198 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x20);
  if (0 < local_198) {
    do {
      lVar13 = *(longlong *)(param_1 + 0x28);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
      lVar6 = *(longlong *)(lVar13 + 0x18);
      uVar1 = *(undefined4 *)(lVar5 + 4 + local_res20 * 8);
      uVar2 = *(undefined4 *)(lVar5 + local_res20 * 8);
      piVar12 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar6 + 0x28),*(undefined4 *)(lVar6 + 0x30),
                                     lVar6 + 0xc0,lVar6 + 0xe0,lVar6 + 0x70,uVar1);
      iVar3 = *(int *)(lVar6 + 0x40);
      iVar17 = *piVar12;
      if (iVar17 < iVar3) {
        pfVar15 = (float *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar15 = (float *)((longlong)(iVar17 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      iVar17 = piVar12[1];
      fVar18 = *pfVar15;
      fVar21 = pfVar15[1];
      fVar22 = pfVar15[2];
      if (iVar17 < iVar3) {
        pfVar15 = (float *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar15 = (float *)((longlong)(iVar17 - iVar3) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      fVar23 = *pfVar15;
      fVar24 = pfVar15[1];
      fVar25 = pfVar15[2];
      local_158 = fVar21 * *(float *)(lVar13 + 0x50) + fVar18 * *(float *)(lVar13 + 0x40) +
                  fVar22 * *(float *)(lVar13 + 0x60) + *(float *)(lVar13 + 0x70);
      fStack_154 = fVar21 * *(float *)(lVar13 + 0x54) + fVar18 * *(float *)(lVar13 + 0x44) +
                   fVar22 * *(float *)(lVar13 + 100) + *(float *)(lVar13 + 0x74);
      fStack_150 = fVar21 * *(float *)(lVar13 + 0x58) + fVar18 * *(float *)(lVar13 + 0x48) +
                   fVar22 * *(float *)(lVar13 + 0x68) + *(float *)(lVar13 + 0x78);
      fStack_14c = fVar21 * *(float *)(lVar13 + 0x5c) + fVar18 * *(float *)(lVar13 + 0x4c) +
                   fVar22 * *(float *)(lVar13 + 0x6c) + *(float *)(lVar13 + 0x7c);
      local_138 = fVar24 * *(float *)(lVar13 + 0x50) + fVar23 * *(float *)(lVar13 + 0x40) +
                  fVar25 * *(float *)(lVar13 + 0x60) + *(float *)(lVar13 + 0x70);
      fStack_134 = fVar24 * *(float *)(lVar13 + 0x54) + fVar23 * *(float *)(lVar13 + 0x44) +
                   fVar25 * *(float *)(lVar13 + 100) + *(float *)(lVar13 + 0x74);
      fStack_130 = fVar24 * *(float *)(lVar13 + 0x58) + fVar23 * *(float *)(lVar13 + 0x48) +
                   fVar25 * *(float *)(lVar13 + 0x68) + *(float *)(lVar13 + 0x78);
      fStack_12c = fVar24 * *(float *)(lVar13 + 0x5c) + fVar23 * *(float *)(lVar13 + 0x4c) +
                   fVar25 * *(float *)(lVar13 + 0x6c) + *(float *)(lVar13 + 0x7c);
      local_168 = local_138 - local_158;
      fStack_164 = fStack_134 - fStack_154;
      fStack_160 = fStack_130 - fStack_150;
      fStack_15c = fStack_12c - fStack_14c;
      fStack_140 = fStack_164 * fVar7 - local_168 * fVar8;
      local_148 = fStack_160 * fVar8 - fStack_164 * fVar9;
      fStack_144 = local_168 * fVar9 - fStack_160 * fVar7;
      fVar18 = local_148 * local_148;
      fVar21 = fStack_144 * fStack_144;
      auVar19._8_4_ = fStack_140 * fStack_140;
      auVar19._4_4_ = auVar19._8_4_;
      auVar19._0_4_ = auVar19._8_4_;
      auVar19._12_4_ = auVar19._8_4_;
      fVar24 = fVar21 + fVar18 + auVar19._8_4_;
      fVar25 = fVar21 + fVar18 + auVar19._8_4_;
      fVar26 = fVar21 + fVar18 + auVar19._8_4_;
      fVar27 = fVar21 + fVar18 + auVar19._8_4_;
      auVar20._4_4_ = fVar25;
      auVar20._0_4_ = fVar24;
      auVar20._8_4_ = fVar26;
      auVar20._12_4_ = fVar27;
      auVar20 = rsqrtps(auVar19,auVar20);
      fVar18 = auVar20._0_4_;
      fVar21 = auVar20._4_4_;
      fVar22 = auVar20._8_4_;
      fVar23 = auVar20._12_4_;
      local_148 = local_148 *
                  (float)(~-(uint)(fVar24 <= 0.0) &
                         (uint)((3.0 - fVar24 * fVar18 * fVar18) * fVar18 * 0.5));
      fStack_144 = fStack_144 *
                   (float)(~-(uint)(fVar25 <= 0.0) &
                          (uint)((3.0 - fVar25 * fVar21 * fVar21) * fVar21 * 0.5));
      fStack_140 = fStack_140 *
                   (float)(~-(uint)(fVar26 <= 0.0) &
                          (uint)((3.0 - fVar26 * fVar22 * fVar22) * fVar22 * 0.5));
      fStack_13c = (fStack_15c * fVar10 - fStack_15c * fVar10) *
                   (float)(~-(uint)(fVar27 <= 0.0) &
                          (uint)((3.0 - fVar27 * fVar23 * fVar23) * fVar23 * 0.5));
      FUN_1438cebd0(param_2,&local_158,&local_138,&local_148,local_178,local_128,local_188);
      CAkSrcMediaCodecVorbis::ReleaseBuffer(&local_1c8);
      FUN_143e0e530(local_98,local_178,local_128,local_188,&local_1c8);
      iVar3 = local_1c0;
      iVar17 = 0;
      if (0 < local_1c0) {
        do {
          lVar13 = FUN_1437f7500(&local_1c8,iVar17);
          uVar4 = *(undefined4 *)(lVar13 + 0x10);
          FUN_1437f7570(lVar13,local_178,&local_168,local_188,local_e8,local_f8);
          FUN_1437f7570(lVar13,&local_158,&local_168,&DAT_1467f06e0,local_108,local_118);
          iVar11 = FUN_1438cf2b0(local_e8,local_f8,local_108,local_118,param_2,&local_d8,&local_c8,
                                 &local_b8,&local_a8);
          if (iVar11 != 0) {
            if (*(uint *)(param_3 + 1) == (*(uint *)((longlong)param_3 + 0xc) & 0x3fffffff)) {
              FUN_14370c460(&PTR_vftable_1467f0638,param_3,0x50);
            }
            puVar16 = (undefined8 *)((longlong)(int)param_3[1] * 0x50 + *param_3);
            *(int *)(param_3 + 1) = (int)param_3[1] + 1;
            *(undefined4 *)(puVar16 + 8) = uVar4;
            *(undefined4 *)((longlong)puVar16 + 0x44) = 0xffffffff;
            *(undefined4 *)(puVar16 + 9) = uVar2;
            *(undefined4 *)((longlong)puVar16 + 0x4c) = uVar1;
            puVar16[2] = local_d8;
            puVar16[3] = uStack_d0;
            *puVar16 = local_c8;
            puVar16[1] = uStack_c0;
            *(undefined4 *)(puVar16 + 6) = local_b8;
            *(undefined4 *)((longlong)puVar16 + 0x34) = uStack_b4;
            *(undefined4 *)(puVar16 + 7) = uStack_b0;
            *(undefined4 *)((longlong)puVar16 + 0x3c) = uStack_ac;
            *(undefined4 *)(puVar16 + 4) = local_a8;
            *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_a4;
            *(undefined4 *)(puVar16 + 5) = uStack_a0;
            *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_9c;
          }
          iVar17 = iVar17 + 1;
        } while (iVar17 < iVar3);
      }
      local_res20 = local_res20 + 1;
    } while (local_res20 < local_198);
  }
  uVar14 = FUN_143703a50();
  local_1a8 = 0;
  if (-1 < (int)local_1a4) {
    FUN_143702e10(uVar14,local_1b0,0x14,local_1a4 & 0x3fffffff);
  }
  local_1b0 = 0;
  local_1a4 = 0x80000000;
  uVar14 = FUN_143703a50();
  local_1c0 = 0;
  if (-1 < (int)local_1bc) {
    FUN_143702e10(uVar14,local_1c8,0x14,local_1bc & 0x3fffffff);
  }
  local_1c8 = 0;
  local_1bc = 0x80000000;
  FUN_143e0e3f0(local_98);
  return;
}



// FUNCTION 1438d0080 FUN_1438d0080 body=792 status=ok
// SIG undefined FUN_1438d0080(void)

undefined8
FUN_1438d0080(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float param_6)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = param_4[3];
  fVar41 = *param_4 - fVar5;
  fVar42 = param_4[1] - fVar6;
  fVar43 = param_4[2] - fVar7;
  fVar15 = *param_5;
  fVar20 = param_5[1];
  fVar24 = param_5[2];
  fVar10 = param_2[3];
  fVar38 = *param_2 - fVar1;
  fVar39 = param_2[1] - fVar2;
  fVar40 = param_2[2] - fVar3;
  fVar14 = fVar15 * fVar38;
  fVar18 = fVar20 * fVar39;
  fVar21 = fVar24 * fVar40;
  fVar35 = fVar38 - (fVar18 + fVar14 + fVar21) * fVar15;
  fVar36 = fVar39 - (fVar18 + fVar14 + fVar21) * fVar20;
  fVar37 = fVar40 - (fVar18 + fVar14 + fVar21) * fVar24;
  fVar14 = fVar35 * fVar35;
  fVar21 = fVar36 * fVar36;
  fVar22 = fVar37 * fVar37;
  fVar32 = fVar21 + fVar14 + fVar22;
  fVar33 = fVar21 + fVar14 + fVar22;
  fVar34 = fVar21 + fVar14 + fVar22;
  fVar18 = fVar15 * fVar41;
  fVar19 = fVar20 * fVar42;
  fVar23 = fVar24 * fVar43;
  auVar29._4_4_ = fVar33;
  auVar29._0_4_ = fVar32;
  auVar29._8_4_ = fVar34;
  auVar29._12_4_ = fVar21 + fVar14 + fVar22;
  auVar29 = rsqrtps(in_XMM4,auVar29);
  fVar14 = auVar29._0_4_;
  fVar21 = auVar29._4_4_;
  fVar22 = auVar29._8_4_;
  auVar28._0_4_ = (fVar19 + fVar18 + fVar23) * fVar15;
  auVar28._4_4_ = (fVar19 + fVar18 + fVar23) * fVar20;
  auVar28._8_4_ = (fVar19 + fVar18 + fVar23) * fVar24;
  auVar28._12_4_ = (fVar19 + fVar18 + fVar23) * param_5[3];
  fVar18 = fVar41 - auVar28._0_4_;
  fVar19 = fVar42 - auVar28._4_4_;
  fVar23 = fVar43 - auVar28._8_4_;
  fVar15 = fVar18 * fVar18;
  fVar20 = fVar19 * fVar19;
  fVar24 = fVar23 * fVar23;
  auVar26._0_4_ = fVar20 + fVar15 + fVar24;
  auVar26._4_4_ = fVar20 + fVar15 + fVar24;
  auVar26._8_4_ = fVar20 + fVar15 + fVar24;
  auVar26._12_4_ = fVar20 + fVar15 + fVar24;
  auVar29 = rsqrtps(auVar28,auVar26);
  fVar15 = auVar29._0_4_;
  fVar20 = auVar29._4_4_;
  fVar24 = auVar29._8_4_;
  fVar14 = (float)(~-(uint)(fVar32 <= 0.0) & (uint)((3.0 - fVar32 * fVar14 * fVar14) * fVar14 * 0.5)
                  ) * fVar35 +
           (float)(~-(uint)(auVar26._0_4_ <= 0.0) &
                  (uint)((3.0 - auVar26._0_4_ * fVar15 * fVar15) * fVar15 * 0.5)) * fVar18;
  fVar18 = (float)(~-(uint)(fVar33 <= 0.0) & (uint)((3.0 - fVar33 * fVar21 * fVar21) * fVar21 * 0.5)
                  ) * fVar36 +
           (float)(~-(uint)(auVar26._4_4_ <= 0.0) &
                  (uint)((3.0 - auVar26._4_4_ * fVar20 * fVar20) * fVar20 * 0.5)) * fVar19;
  fVar21 = (float)(~-(uint)(fVar34 <= 0.0) & (uint)((3.0 - fVar34 * fVar22 * fVar22) * fVar22 * 0.5)
                  ) * fVar37 +
           (float)(~-(uint)(auVar26._8_4_ <= 0.0) &
                  (uint)((3.0 - auVar26._8_4_ * fVar24 * fVar24) * fVar24 * 0.5)) * fVar23;
  fVar15 = fVar14 * fVar14;
  fVar20 = fVar18 * fVar18;
  fVar24 = fVar21 * fVar21;
  if (param_6 + param_6 + 2.0 < fVar20 + fVar15 + fVar24) {
    auVar11._4_4_ = fVar15;
    auVar11._0_4_ = fVar15;
    auVar11._8_4_ = fVar15;
    auVar11._12_4_ = fVar15;
    auVar25._0_4_ = fVar20 + fVar15 + fVar24;
    auVar25._4_4_ = fVar20 + fVar15 + fVar24;
    auVar25._8_4_ = fVar20 + fVar15 + fVar24;
    auVar25._12_4_ = fVar20 + fVar15 + fVar24;
    auVar29 = rsqrtps(auVar11,auVar25);
    fVar15 = auVar29._0_4_;
    fVar20 = auVar29._4_4_;
    fVar24 = auVar29._8_4_;
    fVar14 = fVar14 * (float)(~-(uint)(auVar25._0_4_ <= 0.0) &
                             (uint)((3.0 - auVar25._0_4_ * fVar15 * fVar15) * fVar15 * 0.5));
    fVar18 = fVar18 * (float)(~-(uint)(auVar25._4_4_ <= 0.0) &
                             (uint)((3.0 - auVar25._4_4_ * fVar20 * fVar20) * fVar20 * 0.5));
    fVar21 = fVar21 * (float)(~-(uint)(auVar25._8_4_ <= 0.0) &
                             (uint)((3.0 - auVar25._8_4_ * fVar24 * fVar24) * fVar24 * 0.5));
    fVar20 = fVar21 * fVar3 + fVar18 * fVar2 + fVar14 * fVar1;
    fVar24 = fVar21 * param_2[2] + fVar18 * param_2[1] + fVar14 * *param_2;
    fVar19 = fVar21 * fVar7 + fVar18 * fVar6 + fVar14 * fVar5;
    fVar14 = fVar21 * param_4[2] + fVar18 * param_4[1] + fVar14 * *param_4;
    auVar16._4_4_ = fVar20;
    auVar16._0_4_ = fVar20;
    auVar16._8_4_ = fVar20;
    auVar16._12_4_ = fVar20;
    auVar12._4_4_ = fVar20;
    auVar12._0_4_ = fVar20;
    auVar12._8_4_ = fVar20;
    auVar12._12_4_ = fVar20;
    auVar29 = maxps(auVar16,auVar12);
    auVar27._4_4_ = fVar19;
    auVar27._0_4_ = fVar19;
    auVar27._8_4_ = fVar19;
    auVar27._12_4_ = fVar19;
    auVar28 = maxps(auVar27,auVar29);
    auVar13._4_4_ = fVar24;
    auVar13._0_4_ = fVar24;
    auVar13._8_4_ = fVar24;
    auVar13._12_4_ = fVar24;
    auVar17._4_4_ = fVar24;
    auVar17._0_4_ = fVar24;
    auVar17._8_4_ = fVar24;
    auVar17._12_4_ = fVar24;
    auVar29 = minps(auVar17,auVar13);
    auVar31._4_4_ = fVar14;
    auVar31._0_4_ = fVar14;
    auVar31._8_4_ = fVar14;
    auVar31._12_4_ = fVar14;
    auVar29 = minps(auVar31,auVar29);
    fVar15 = auVar28._0_4_;
    fVar18 = auVar29._0_4_;
    if (fVar15 < fVar18) {
      auVar30._0_4_ = fVar24 - fVar20;
      auVar30._4_4_ = fVar24 - fVar20;
      auVar30._8_4_ = fVar14 - fVar19;
      auVar30._12_4_ = fVar14 - fVar19;
      auVar29 = rcpps(auVar13,auVar30);
      fVar24 = (2.0 - auVar30._0_4_ * auVar29._0_4_) * auVar29._0_4_ * (fVar15 - fVar20);
      fVar20 = (2.0 - auVar30._4_4_ * auVar29._4_4_) * auVar29._4_4_ * (fVar18 - fVar20);
      fVar15 = (2.0 - auVar30._8_4_ * auVar29._8_4_) * auVar29._8_4_ * (fVar15 - fVar19);
      fVar14 = (2.0 - auVar30._12_4_ * auVar29._12_4_) * auVar29._12_4_ * (fVar18 - fVar19);
      *param_1 = fVar24 * fVar38 + fVar1;
      param_1[1] = fVar24 * fVar39 + fVar2;
      param_1[2] = fVar24 * fVar40 + fVar3;
      param_1[3] = fVar24 * (fVar10 - fVar4) + fVar4;
      *param_2 = fVar20 * fVar38 + fVar1;
      param_2[1] = fVar20 * fVar39 + fVar2;
      param_2[2] = fVar20 * fVar40 + fVar3;
      param_2[3] = fVar20 * (fVar10 - fVar4) + fVar4;
      *param_3 = fVar15 * fVar41 + fVar5;
      param_3[1] = fVar15 * fVar42 + fVar6;
      param_3[2] = fVar15 * fVar43 + fVar7;
      param_3[3] = fVar15 * (fVar9 - fVar8) + fVar8;
      *param_4 = fVar14 * fVar41 + fVar5;
      param_4[1] = fVar14 * fVar42 + fVar6;
      param_4[2] = fVar14 * fVar43 + fVar7;
      param_4[3] = fVar14 * (fVar9 - fVar8) + fVar8;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1438d03a0 FUN_1438d03a0 body=534 status=ok
// SIG undefined FUN_1438d03a0(void)

undefined8 FUN_1438d03a0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int *piVar14;
  float *pfVar15;
  undefined8 *puVar16;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = *(undefined4 *)(**(longlong **)(param_1 + 0x18) + (longlong)param_2 * 8);
  iVar2 = *(int *)(**(longlong **)(param_1 + 0x18) + 4 + (longlong)param_2 * 8);
  if ((*(char *)(param_1 + 0x30) == '\0') || (iVar2 != *(int *)(param_1 + 0xc))) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = *(longlong *)(lVar4 + 0x18);
    piVar14 = (int *)FUN_1437fb5b0(*(undefined8 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x30),
                                   lVar5 + 0xc0,lVar5 + 0xe0,lVar5 + 0x70,iVar2);
    iVar13 = *(int *)(lVar5 + 0x40);
    iVar3 = *piVar14;
    if (iVar3 < iVar13) {
      pfVar15 = (float *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar5 + 0x38));
    }
    else {
      pfVar15 = (float *)((longlong)(iVar3 - iVar13) * 0x10 + *(longlong *)(lVar5 + 0xf0));
    }
    iVar3 = piVar14[1];
    fVar7 = *pfVar15;
    fVar8 = pfVar15[1];
    fVar9 = pfVar15[2];
    if (iVar3 < iVar13) {
      pfVar15 = (float *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar5 + 0x38));
    }
    else {
      pfVar15 = (float *)((longlong)(iVar3 - iVar13) * 0x10 + *(longlong *)(lVar5 + 0xf0));
    }
    fVar10 = *pfVar15;
    fVar11 = pfVar15[1];
    fVar12 = pfVar15[2];
    local_58 = fVar8 * *(float *)(lVar4 + 0x50) + fVar7 * *(float *)(lVar4 + 0x40) +
               fVar9 * *(float *)(lVar4 + 0x60) + *(float *)(lVar4 + 0x70);
    fStack_54 = fVar8 * *(float *)(lVar4 + 0x54) + fVar7 * *(float *)(lVar4 + 0x44) +
                fVar9 * *(float *)(lVar4 + 100) + *(float *)(lVar4 + 0x74);
    fStack_50 = fVar8 * *(float *)(lVar4 + 0x58) + fVar7 * *(float *)(lVar4 + 0x48) +
                fVar9 * *(float *)(lVar4 + 0x68) + *(float *)(lVar4 + 0x78);
    fStack_4c = fVar8 * *(float *)(lVar4 + 0x5c) + fVar7 * *(float *)(lVar4 + 0x4c) +
                fVar9 * *(float *)(lVar4 + 0x6c) + *(float *)(lVar4 + 0x7c);
    local_68 = fVar11 * *(float *)(lVar4 + 0x50) + fVar10 * *(float *)(lVar4 + 0x40) +
               fVar12 * *(float *)(lVar4 + 0x60) + *(float *)(lVar4 + 0x70);
    fStack_64 = fVar11 * *(float *)(lVar4 + 0x54) + fVar10 * *(float *)(lVar4 + 0x44) +
                fVar12 * *(float *)(lVar4 + 100) + *(float *)(lVar4 + 0x74);
    fStack_60 = fVar11 * *(float *)(lVar4 + 0x58) + fVar10 * *(float *)(lVar4 + 0x48) +
                fVar12 * *(float *)(lVar4 + 0x68) + *(float *)(lVar4 + 0x78);
    fStack_5c = fVar11 * *(float *)(lVar4 + 0x5c) + fVar10 * *(float *)(lVar4 + 0x4c) +
                fVar12 * *(float *)(lVar4 + 0x6c) + *(float *)(lVar4 + 0x7c);
    iVar13 = FUN_1438cf2b0(param_1 + 0x40,param_1 + 0x50,&local_58,&local_68,
                           *(undefined8 *)(param_1 + 0x20),&local_48,&local_38,&local_28,&local_18);
    if (iVar13 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x28);
      if (*(uint *)(plVar6 + 1) == (*(uint *)((longlong)plVar6 + 0xc) & 0x3fffffff)) {
        FUN_14370c460(&PTR_vftable_1467f0638,plVar6,0x50);
      }
      lVar4 = plVar6[1];
      *(int *)(plVar6 + 1) = (int)lVar4 + 1;
      puVar16 = (undefined8 *)((longlong)(int)lVar4 * 0x50 + *plVar6);
      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)((longlong)puVar16 + 0x44) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(puVar16 + 9) = uVar1;
      *(int *)((longlong)puVar16 + 0x4c) = iVar2;
      puVar16[2] = local_48;
      puVar16[3] = uStack_40;
      *puVar16 = local_38;
      puVar16[1] = uStack_30;
      puVar16[6] = local_28;
      puVar16[7] = uStack_20;
      puVar16[4] = local_18;
      puVar16[5] = uStack_10;
    }
  }
  return 1;
}



// FUNCTION 1438d05c0 FUN_1438d05c0 body=211 status=ok
// SIG undefined FUN_1438d05c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1438d05c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  undefined1 local_18 [24];
  
  local_38 = *param_4 - *param_3;
  fStack_34 = param_4[1] - param_3[1];
  fStack_30 = param_4[2] - param_3[2];
  fStack_2c = param_4[3] - param_3[3];
  local_28 = *param_2 - *param_1;
  fStack_24 = param_2[1] - param_1[1];
  fStack_20 = param_2[2] - param_1[2];
  fStack_1c = param_2[3] - param_1[3];
  fVar2 = (local_38 - local_28) * _DAT_1467f07e0 + local_28;
  fVar5 = (fStack_34 - fStack_24) * fRam00000001467f07e4 + fStack_24;
  fVar6 = (fStack_30 - fStack_20) * fRam00000001467f07e8 + fStack_20;
  fVar7 = (fStack_2c - fStack_1c) * fRam00000001467f07ec + fStack_1c;
  fStack_40 = fVar5 * *param_5 - param_5[1] * fVar2;
  local_48 = fVar6 * param_5[1] - param_5[2] * fVar5;
  fStack_44 = fVar2 * param_5[2] - *param_5 * fVar6;
  fVar2 = local_48 * local_48;
  fVar5 = fStack_44 * fStack_44;
  auVar3._8_4_ = fStack_40 * fStack_40;
  auVar3._4_4_ = auVar3._8_4_;
  auVar3._0_4_ = auVar3._8_4_;
  auVar3._12_4_ = auVar3._8_4_;
  fVar9 = fVar5 + fVar2 + auVar3._8_4_;
  fVar10 = fVar5 + fVar2 + auVar3._8_4_;
  fVar11 = fVar5 + fVar2 + auVar3._8_4_;
  fVar12 = fVar5 + fVar2 + auVar3._8_4_;
  auVar4._4_4_ = fVar10;
  auVar4._0_4_ = fVar9;
  auVar4._8_4_ = fVar11;
  auVar4._12_4_ = fVar12;
  auVar4 = rsqrtps(auVar3,auVar4);
  fVar2 = auVar4._0_4_;
  fVar5 = auVar4._4_4_;
  fVar6 = auVar4._8_4_;
  fVar8 = auVar4._12_4_;
  local_48 = local_48 *
             (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar9 * fVar2 * fVar2) * fVar2 * 0.5));
  fStack_44 = fStack_44 *
              (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar10 * fVar5 * fVar5) * fVar5 * 0.5)
                     );
  fStack_40 = fStack_40 *
              (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar11 * fVar6 * fVar6) * fVar6 * 0.5)
                     );
  fStack_3c = (fVar7 * param_5[3] - param_5[3] * fVar7) *
              (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar12 * fVar8 * fVar8) * fVar8 * 0.5)
                     );
  pfVar1 = (float *)FUN_1438cec80(local_18,&local_28,&local_38,&local_48);
  return param_6 < *pfVar1;
}



// FUNCTION 1438d0790 FUN_1438d0790 body=284 status=ok
// SIG undefined FUN_1438d0790(void)

void FUN_1438d0790(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

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
        *puVar1 = hkaiTraversalAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 8) = 0x1ffff;
        *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_2 + 0x10 + lVar2);
        *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(param_2 + 0x14 + lVar2);
        *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18 + lVar2);
        *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c + lVar2);
        *puVar1 = hkaiVaultAnalyzer::vftable;
        *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20 + lVar2);
        *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(lVar2 + 0x24 + param_2);
        *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar2 + 0x28 + param_2);
        *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(lVar2 + 0x2c + param_2);
        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(lVar2 + 0x30 + param_2);
        *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(lVar2 + 0x34 + param_2);
        *(undefined4 *)(lVar2 + 0x38) = *(undefined4 *)(lVar2 + 0x38 + param_2);
        *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar2 + 0x3c + param_2);
        *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(lVar2 + 0x40 + param_2);
        *(undefined4 *)(lVar2 + 0x44) = *(undefined4 *)(lVar2 + 0x44 + param_2);
        *(undefined4 *)(lVar2 + 0x48) = *(undefined4 *)(lVar2 + 0x48 + param_2);
      }
      lVar2 = lVar2 + 0x58;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1438d0950 FUN_1438d0950 body=18 status=ok
// SIG undefined FUN_1438d0950(void)

undefined8 * FUN_1438d0950(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_146829810;
  return param_2;
}


